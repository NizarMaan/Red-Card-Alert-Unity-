using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PreviewAnimator : MonoBehaviour {
    private float _moveSpeed;
    private float offset;
    private bool moveup;

	// Use this for initialization
	void Start () {
        _moveSpeed = 8.0f;
        offset = 0;
        moveup = true;
	}
	
	// Update is called once per frame
	void Update () {
        if(moveup)
        {
            gameObject.transform.position = new Vector3(gameObject.transform.position.x, gameObject.transform.position.y + _moveSpeed);
            offset += _moveSpeed;
            if(offset >= 478)
            {
                moveup = false;
            }
        }
        else
        {
            gameObject.transform.position = new Vector3(gameObject.transform.position.x, gameObject.transform.position.y - _moveSpeed);
            offset -= _moveSpeed;
            if(offset <= -478)
            {
                moveup = true;
            }
        }    
	}

    private void OnCollisionEnter2D(Collision2D collision)
    {
        GameObject obj = collision.gameObject;
        Destroy(obj);
    } 
}
