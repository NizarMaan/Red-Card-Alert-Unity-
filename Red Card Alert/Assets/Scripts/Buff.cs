using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//Does not inherit from MonoBehavior
public class Buff {

    public BuffType buff;
    public float duration, startTime;
    private PlayerHandler _playerScript;

    public Buff()
    {
        buff = BuffType.NONE;
    }

    public Buff(BuffType buffType)
    {
        Configure(buffType);
    }

    public Buff(BuffType buffType, PlayerHandler _playerScript)
    {
        this._playerScript = _playerScript;
        Configure(buffType);
    }

    public enum BuffType
    {
        NONE,
        INVULNERABLE,
        SLOW_CARDS
    }

    public void Configure(BuffType buff)
    {
        startTime = Time.time;

        if (buff == BuffType.INVULNERABLE)
        {
            this.buff = buff;
            duration = 4.0f;
            Invulnerable();
        }
        if (buff == BuffType.SLOW_CARDS)
        {
            duration = 3.0f;
            this.buff = buff;
            SlowCards(true);
        }
    }

    private void Invulnerable()
    {
        TrailRenderer trail = _playerScript.GetComponent<TrailRenderer>();

        Color c = trail.GetComponent<SpriteRenderer>().color;
        c.a = 0.25f;

        trail.material.SetColor("_Color", c);

        //'ghost' layer is 14
        if (_playerScript != null)
        {
            _playerScript._player.layer = 14;   //set player's layer to 14 ('ghost' layer) a player cannot stack orbs
        }
        //_player physics layer is 9
        //Physics2D.IgnoreLayerCollision(9, 10);  //ignore collisions with Red Cards
        //Physics2D.IgnoreLayerCollision(9, 11);  //ignore collisions with Yellow Cards
        //Physics2D.IgnoreLayerCollision(9, 13);  //ignore collisions with Orbs
    }

    private void InvulnerableOff()
    {
        TrailRenderer trail = _playerScript.GetComponent<TrailRenderer>();

        Color c = trail.GetComponent<SpriteRenderer>().color;
        c.a = 1.0f;

        trail.material.SetColor("_Color", c);

        //_player physics layer is 9
        _playerScript._player.layer = 9;  //set Player's layer back to original (player) layer    
    }

    //immedeate effect buff
    public void RemoveHit(PlayerHandler _playerScript)
    {
        int yellowHits = _playerScript.yellow_count;

        if (yellowHits == 1)
        {
            _playerScript.yellow_count -= 1;
            _playerScript.hit_icon0.enabled = false;
        }
    }

    //immedeate effect buff
    public void CollectAll()
    {
        //store all active "Ball" gameobjects into an array
        GameObject[] balls = GameObject.FindGameObjectsWithTag("Ball");

        //award a point for each ball in the array then destroy them
        foreach (GameObject ball in balls)
        {
            PlayerHandler._SCORE += 1;
            Object.Destroy(ball);
        }
    }

    /*slowing down will only take effect on currently active card objects
    there is a handler in the ObjectMover.cs script that slows down newly created cards
    if the active player object currently posseses a SLOW_CARDS buff
    */
    private void SlowCards(bool activate)
    {
        TrailRenderer trail = _playerScript.GetComponent<TrailRenderer>();

        Color c = trail.GetComponent<SpriteRenderer>().color;

        if (activate)
        {
            c.r = 255;
            c.a = 0.75f;
        }
        else
        {
            c = _playerScript.originalTrailColor;
        }

        trail.material.SetColor("_Color", c);

        GameObject[] redCards = GameObject.FindGameObjectsWithTag("Red Card");
        GameObject[] yellowCards = GameObject.FindGameObjectsWithTag("Yellow Card");

        foreach (GameObject card in yellowCards)
        {
            card.SendMessage("ToggleSlowDown", activate);
        }

        foreach (GameObject card in redCards)
        {
            card.SendMessage("ToggleSlowDown", activate);
        }
    }

    public void Deactivate()
    {
        switch (buff)
        {
            case BuffType.INVULNERABLE:
                InvulnerableOff();
                buff = BuffType.NONE;
                duration = 0.0f;
                break;
            case BuffType.SLOW_CARDS:
                SlowCards(false);
                buff = BuffType.NONE;
                duration = 0.0f;
                break;
        }
    }
}
