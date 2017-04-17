using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerHandler : MonoBehaviour {
    public GameObject top_lft, top_rgt, btm_lft, btm_rgt, yellowCard, redCard;   //game objects passed through inspector
    public Image hit_icon0, hit_icon1, buffTimerIcon, comboImage;       //images passed through inspector
    public Text score_text, comboText;
    public static int _SCORE;
    public static bool gameOver;
    public GameObject _player;
    public int yellow_count;
    public Color originalTrailColor;
    public AudioClip orb_SFX, yellowCard_SFX, redCard_SFX, ballpickup_SFX;
    private Vector3 playerScreenPoint;
    private Vector3 playerMouseOffset;
    private Buff currentBuff;
    public static int ballCombo;
    private PlayerHandler _playerScript;
    private GameObject vulnTimerIcon, slowTimerIcon, currentTimer;
    

    //this happens before Start() function
    private void Awake()
    {
        //disable the yellow card accumulation icons
        hit_icon0.enabled = false;
        hit_icon1.enabled = false;

        buffTimerIcon.enabled = false;
        vulnTimerIcon = buffTimerIcon.transform.GetChild(0).gameObject;
        slowTimerIcon = buffTimerIcon.transform.GetChild(1).gameObject;
        vulnTimerIcon.SetActive(false);
        slowTimerIcon.SetActive(false);

        _playerScript = (PlayerHandler) FindObjectOfType(typeof(PlayerHandler));
        TrailRenderer trail = _playerScript.GetComponent<TrailRenderer>();
        originalTrailColor = trail.GetComponent<SpriteRenderer>().color;

        ComboBox.ResetCombo(comboImage);
    }

    // Use this for initialization
    void Start () {
        gameOver = false;
        yellow_count = 0;
        _SCORE = 0;
        ballCombo = 0;

        //store _player object reference into our own variable; set up trail renderer's sorting layer
        _player = gameObject; //game object that this script is attached to (the player)
        _player.GetComponent<TrailRenderer>().sortingLayerName = "Player";
        _player.GetComponent<TrailRenderer>().sortingOrder = 0;
    }
	
	// Update is called once per frame
	void Update () {
        score_text.text = "SCORE: " + _SCORE.ToString();
        if (currentBuff != null)
        {
            if(currentBuff.buff != Buff.BuffType.NONE)
            {
                if (Time.time - currentBuff.startTime >= currentBuff.duration)
                {
                    if (!gameOver) {
                        currentBuff.Deactivate();
                        buffTimerIcon.enabled = false;
                        currentTimer.SetActive(false);
                    }
                }
                else
                {
                    if (!gameOver) { 
                        TimerCountDown();
                        buffTimerIcon.enabled = true;
                    }
                }
            }
        }

        if (gameOver)
        {
            _player.GetComponent<Rigidbody2D>().gravityScale = 150;
            _player.GetComponent<TrailRenderer>().enabled = false;
        }
    }

    //built in function (unity library) attached to an object with a RigidBody component
    private void OnMouseDown()
    {
        playerScreenPoint = Camera.main.WorldToScreenPoint(gameObject.transform.position);
        playerMouseOffset = _player.transform.position - Camera.main.ScreenToWorldPoint(new Vector3(Input.mousePosition.x, Input.mousePosition.y,
            playerScreenPoint.z));
    }

    //built in function (unity library) attached to an object with a RigidBody component
    private void OnMouseDrag()
    {
        if (!gameOver)
        {
            Vector3 curScreenPoint = new Vector3(Input.mousePosition.x, Input.mousePosition.y, playerScreenPoint.z);

            Vector3 curPosition = Camera.main.ScreenToWorldPoint(curScreenPoint) + playerMouseOffset;
            _player.transform.position = curPosition;
        }
    }

    public Buff GetCurrentBuff()
    {
        return currentBuff;
    }

    void OnCollisionEnter2D(Collision2D coll)
    {
        if (!gameOver)
        {
            GameObject obj = coll.gameObject;
            if (obj.tag.Equals("Ball"))
            {
                PlaySound(obj.tag);
                _SCORE++;
                if(ballCombo == 0)
                {
                    ComboBox.StartCombo(comboImage);
                }
                //max possible combo is 100
                if(ballCombo < 100)
                {
                    ComboBox.IncreaseCombo(comboText);
                }
            }
            if (obj.tag.Equals("Yellow Card"))
            {
                ComboBox.ResetCombo(comboImage);
                if (yellow_count < 1)
                {
                    showHitIcon(0);
                    yellow_count++;
                }
                else
                {
                    showHitIcon(1);
                    Destroy(obj);
                    gameOver = true;
                }
            }
            if (obj.tag.Equals("Red Card"))
            {
                Destroy(obj);
                gameOver = true;
            }
            if(obj.tag.Equals("Invulnerability Orb"))
            {
                PlaySound("Orb");
                if (currentBuff == null)
                {               
                    currentBuff = new Buff(Buff.BuffType.INVULNERABLE, _playerScript);
                }
                else
                {
                    currentBuff.Deactivate();
                    currentBuff.Configure(Buff.BuffType.INVULNERABLE);
                }
                TimerIconActivate();
            }
            if(obj.tag.Equals("Remove Hit Orb"))
            {
                PlaySound("Orb");
                new Buff().RemoveHit(_playerScript); 
            }
            if(obj.tag.Equals("Collect All Orb")){
                PlaySound("Orb");
                new Buff().CollectAll();           
            }
            if (obj.tag.Equals("Slow Orb"))
            {
                //cannot stack slow downs
                if(currentBuff == null)
                {
                    PlaySound("Orb");
                    currentBuff = new Buff(Buff.BuffType.SLOW_CARDS, _playerScript);
                }
                else if(currentBuff.buff != Buff.BuffType.SLOW_CARDS)
                {
                    PlaySound("Orb");
                    currentBuff.Deactivate();
                    currentBuff.Configure(Buff.BuffType.SLOW_CARDS);                   
                }
                TimerIconActivate();
            }
            if (obj.tag.Equals("Red Card") || obj.tag.Equals("Yellow Card") || obj.tag.Equals("Ball")
                || obj.tag.Equals("Invulnerability Orb") || obj.tag.Equals("Remove Hit Orb") || obj.tag.Equals("Collect All Orb")
                || obj.tag.Equals("Slow Orb"))
            {
                Destroy(obj);
            }
        }
    }

    private void PlaySound(string objectType)
    {
        if (!MusicDontDestroy.Muted)
        {
            if (objectType.Equals("Orb"))
            {
                _player.GetComponent<AudioSource>().PlayOneShot(orb_SFX, 1.0f);
            }
            if (objectType.Equals("Ball"))
            {
                _player.GetComponent<AudioSource>().PlayOneShot(ballpickup_SFX, 0.2f);
            }
        }
    }

    private void showHitIcon(int n)
    {
        if (n == 0)
        {
            hit_icon0.enabled = true;
        }
        else
        {
            hit_icon1.enabled = true;
        }
    }

    private void TimerIconActivate()
    {
        if(currentTimer != null)
        {
            currentTimer.SetActive(false);
        }
        if (currentBuff.buff == Buff.BuffType.SLOW_CARDS)
        {
            slowTimerIcon.GetComponent<Image>().fillAmount = 1;
            currentTimer = slowTimerIcon;
            currentTimer.SetActive(true);
        }
        else if (currentBuff.buff == Buff.BuffType.INVULNERABLE)
        {
            vulnTimerIcon.GetComponent<Image>().fillAmount = 1;
            currentTimer = vulnTimerIcon;
            currentTimer.SetActive(true);
        }
    }

    private void TimerCountDown()
    {
        float timeLeft = (Time.time - currentBuff.startTime) / currentBuff.duration;
        currentTimer.GetComponent<Image>().fillAmount = timeLeft;
    }
}
