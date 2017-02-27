using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Spawner : MonoBehaviour {
    public GameObject row0, row1, row2, row3, yellowcard, redcard, ball, orb_invulnerability, orb_removeHit, orb_collectAll, orb_slow;
    private float yellowCardSpeed, redCardSpeed, ballSpeed;
    private GameObject[] rows;

	// Use this for initialization
	void Start () {
        rows = new GameObject[] { row0, row1, row2, row3 };
        InvokeRepeating("spawnObject", 0.0f, 0.15f);
	}
	
	// Update is called once per frame
	void spawnObject () {
        if (!PlayerHandler.gameOver)
        {
            int n = Random.Range(0, 4);
            GameObject chosenObj = chooseObj();

            if (chosenObj != null)
            {
                Instantiate(chosenObj, new Vector3(rows[n].transform.position.x, rows[n].transform.position.y), Quaternion.identity);
            }
            //separate "roll" for orbs now
            //currently, 2.5% chance for an orb of a specific type to spawn
            int roll = Random.Range(0, 41);
            if(roll == 0)
            {
                Instantiate(orb_invulnerability, new Vector3(rows[n].transform.position.x, rows[n].transform.position.y), Quaternion.identity);
            }
            if(roll == 1)
            {
                Instantiate(orb_removeHit, new Vector3(rows[n].transform.position.x, rows[n].transform.position.y), Quaternion.identity);
            }
            if (roll == 2)
            {
                Instantiate(orb_collectAll, new Vector3(rows[n].transform.position.x, rows[n].transform.position.y), Quaternion.identity);
            }
            if(roll == 3)
            {
                Instantiate(orb_slow, new Vector3(rows[n].transform.position.x, rows[n].transform.position.y), Quaternion.identity);

            }
        }     
    }

    private GameObject chooseObj()
    {
        int n = Random.Range(0, 100);
        if (n >= 0 && n <= 69)
        {
            return ball;
        }
        if(n >= 70 && n <= 89)
        {
            return yellowcard;
        }
        if(n >= 90 && n < 100)
        {
            return redcard;
        }
        return null;
    }
}
