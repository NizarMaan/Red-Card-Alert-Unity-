using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectMover : MonoBehaviour {
    private float move_speed;
    public GameObject top_lft;
	// Use this for initialization
	void Start () {
        if(gameObject.tag.Equals("Yellow Card"))
        {
            move_speed = (float) (9.0f + PlayerHandler._SCORE * (.05));
        }

        if (gameObject.tag.Equals("Red Card"))
        {
            move_speed = (float)(12.0f + PlayerHandler._SCORE * (.05));
        }
        if (gameObject.tag.Equals("Ball"))
        {
            move_speed = (float) (9.0f + PlayerHandler._SCORE * (.05));
        }
    }
	
	// Update is called once per frame
	void Update () {
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
        }
	}
}
