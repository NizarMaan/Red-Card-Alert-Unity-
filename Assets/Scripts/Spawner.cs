using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Spawner : MonoBehaviour {
    public GameObject row0, row1, row2, row3, yellowcard, redcard, ball;
    private float yellowCardSpeed, redCardSpeed, ballSpeed;

	// Use this for initialization
	void Start () {
        InvokeRepeating("spawnObject", 0.0f, 0.2f);
	}
	
	// Update is called once per frame
	void spawnObject () {
        if (!PlayerHandler.gameOver)
        {
            int n = Random.Range(0, 4);
            GameObject chosenObj = chooseObj();
            if (chosenObj != null)
            {
                switch (n)
                {
                    case 0:
                        Instantiate(chosenObj, new Vector3(row0.transform.position.x, row0.transform.position.y), Quaternion.identity);
                        break;
                    case 1:
                        Instantiate(chosenObj, new Vector3(row1.transform.position.x, row1.transform.position.y), Quaternion.identity);
                        break;
                    case 2:
                        Instantiate(chosenObj, new Vector3(row2.transform.position.x, row2.transform.position.y), Quaternion.identity);
                        break;
                    case 3:
                        Instantiate(chosenObj, new Vector3(row3.transform.position.x, row3.transform.position.y), Quaternion.identity);
                        break;
                }
            }
        }     
    }

    private GameObject chooseObj()
    {
        int n = Random.Range(0, 100);
        if (n >= 0 && n <= 59)
        {
            return ball;
        }
        if(n >= 60 && n <= 84)
        {
            return yellowcard;
        }
        if(n >= 85 && n < 100)
        {
            return redcard;
        }

        return null;
    }
}
