using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectMover : MonoBehaviour {
    public float move_speed;
    public GameObject top_lft, _player;
    private bool slowed;
    private Animator animator;

    //this takes effect before Start()
    private void Awake()
    {
        /*slowing down in the Buff clas in the PlayerHandler.cs script
         *  will only take effect on currently active card objects
        this bit of code slows down newly created cards
        if the active player object currently posseses a SLOW_CARDS buff
        */
        if(gameObject.tag.Equals("Red Card") || gameObject.tag.Equals("Yellow Card")){

            _player = GameObject.FindGameObjectWithTag("Player");

            if (_player != null)
            {
                PlayerHandler _playerScript = (PlayerHandler)_player.GetComponent(typeof(PlayerHandler));

                if (_playerScript.GetCurrentBuff() != null)
                {
                    if (_playerScript.GetCurrentBuff().buff == Buff.BuffType.SLOW_CARDS)
                    {
                        ToggleSlowDown(true);
                    }
                    else
                    {
                        ToggleSlowDown(false);
                    }
                }
            }
        }
    }

    // Use this for initialization
    void Start () {
        animator = gameObject.GetComponent<Animator>();
    }
	
	// Update is called once per frame
	void Update () {
        //cap the movespeed at 35
        if(move_speed <= 35 && !slowed)
        {
            if (gameObject.tag.Equals("Yellow Card"))
            {
                move_speed = (float)(11.0f + PlayerHandler._SCORE * (.05));
            }

            if (gameObject.tag.Equals("Red Card"))
            {
                move_speed = (float)(13.0f + PlayerHandler._SCORE * (.05));
            }
            if (gameObject.tag.Equals("Ball"))
            {
                move_speed = (float)(9.5f + PlayerHandler._SCORE * (.05));
            }
            if (gameObject.tag.Equals("Invulnerability Orb") || gameObject.tag.Equals("Remove Hit Orb")
                || gameObject.tag.Equals("Collect All Orb") || gameObject.tag.Equals("Slow Orb"))
            {
                move_speed = (float)(10.0f + PlayerHandler._SCORE * (.05));
            }
        }

        if (!PlayerHandler.gameOver)
        {
            gameObject.transform.position = new Vector3(gameObject.transform.position.x - move_speed, gameObject.transform.position.y);

            if (gameObject.transform.position.x < top_lft.transform.position.x)
            {
                Destroy(gameObject);
            }
        }
        else
        {
            Rigidbody2D body = gameObject.GetComponent<Rigidbody2D>();
            body.gravityScale = 150;
            
            if(animator != null)
            {
                animator.Stop();
            }
        }
	}

    //communicates with the SLOW_CARDS BuffType in the Buff class defined in PlayerHandler.cs
    //also used at script runtime to check whether speed should be initialized as "slow" (i.e. if player has SLOW_CARDS buff on)
    public void ToggleSlowDown(bool slowDown)
    {
        slowed = slowDown;
        if (slowed)
        {
            move_speed = 4.0f;
        }  
    }
}
