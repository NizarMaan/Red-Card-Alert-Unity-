using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerHandler : MonoBehaviour {
    public GameObject top_lft, top_rgt, btm_lft, btm_rgt;   //game objects passed through inspector
    public Image hit_icon0, hit_icon1; //images passed through inspector
    public Text score_text;
    private GameObject _player;
    private float move_speed;
    public static int _SCORE, yellow_count;
    public static bool gameOver;

    // Use this for initialization
    void Start () {
        gameOver = false;
        yellow_count = 0;
        _SCORE = 0;
        move_speed = 13.0f;
        _player = gameObject; //game object that this script is attached to (the player)
	}
	
	// Update is called once per frame
	void Update () {
        if (!gameOver)
        {
            if (_player.transform.position.x > top_lft.transform.position.x)
            {
                if (Input.GetKey(KeyCode.LeftArrow))
                {
                    _player.transform.position = new Vector3(_player.transform.position.x - move_speed, _player.transform.position.y);
                }
            }
            if (_player.transform.position.x < top_rgt.transform.position.x)
            {
                if (Input.GetKey(KeyCode.RightArrow))
                {
                    _player.transform.position = new Vector3(_player.transform.position.x + move_speed, _player.transform.position.y);
                }
            }
            if (_player.transform.position.y > btm_lft.transform.position.y)
            {
                if (Input.GetKey(KeyCode.DownArrow))
                {
                    _player.transform.position = new Vector3(_player.transform.position.x, _player.transform.position.y - move_speed);
                }
            }
            if (_player.transform.position.y < top_lft.transform.position.y)
            {
                if (Input.GetKey(KeyCode.UpArrow))
                {
                    _player.transform.position = new Vector3(_player.transform.position.x, _player.transform.position.y + move_speed);
                }
            }
        }
    }

    void OnCollisionEnter2D(Collision2D coll)
    {
        GameObject obj = coll.gameObject;
        if (obj.tag.Equals("Ball"))
        {
            _SCORE++;
            score_text.text = "SCORE: " + _SCORE.ToString();
        }
        if(obj.tag.Equals("Yellow Card"))
        {
            if(yellow_count < 1)
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
        if(obj.tag.Equals("Red Card"))
        {
            if (!gameOver)
            {
                Destroy(obj);
            }
            gameOver = true;
        }
        if (!gameOver)
        {
            Destroy(obj);
        }
    }

    private void showHitIcon(int n)
    {
        Image icon;
        if(n == 0)
        {
            icon = hit_icon0;
        }
        else
        {
            icon = hit_icon1;
        }
        Color c = icon.color;
        c.a = 1;
        icon.color = c;
    }
}
