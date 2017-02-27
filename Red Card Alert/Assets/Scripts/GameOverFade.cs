using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameOverFade : MonoBehaviour{
    public Text gameOverText, playAgainText, mainMenuText, quitText;
    public Image gameOverPanel;
    public Button playAgainButton, mainMenuButton, quitButton;

    private void Awake()
    {
        playAgainButton.enabled = false;
        mainMenuButton.enabled = false;
        quitButton.enabled = false;
    }

    // Use this for initialization
    void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
        if (PlayerHandler.gameOver)
        {
            //fade in the game over panel and message
            if (gameOverPanel.color.a <= 0.5f)
            {
                Fading.fadeIn(gameOverPanel, 0.015f);
            }

            if (playAgainButton.GetComponent<Image>().color.a <= 0.4f)
            {
                Fading.fadeIn(playAgainButton.GetComponent<Image>(), 0.01f);
                Fading.fadeIn(mainMenuButton.GetComponent<Image>(), 0.01f);
                Fading.fadeIn(quitButton.GetComponent<Image>(), 0.01f);
            }
            else
            {
                playAgainButton.enabled = true;
                mainMenuButton.enabled = true;
                quitButton.enabled = true;
            }

            Fading.fadeIn(playAgainText, 0.01f);
            Fading.fadeIn(mainMenuText, 0.01f);
            Fading.fadeIn(quitText, 0.01f);
            Fading.fadeIn(gameOverText, 0.015f);
        }
    }
}
