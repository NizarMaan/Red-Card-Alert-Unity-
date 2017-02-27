using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class MusicDontDestroy : MonoBehaviour {
    public static bool Muted;
    public Image toggleMuteON, toggleMuteOFF;

    void Awake () {
        ToggleMute(Muted);

        if (GameObject.FindGameObjectsWithTag("MusicCarrier").Length > 1)
        {
            Destroy(gameObject);
        }
        else
        {
            DontDestroyOnLoad(gameObject);
        }
    }

    public void ToggleMute(bool toggle)
    {
        //if toggle is true, then mute music and sound
        if (toggle)
        {
            Muted = toggle;
            toggleMuteOFF.enabled = toggle;
            toggleMuteON.enabled = !toggle;

            try
            {
                gameObject.GetComponent<AudioSource>().enabled = !toggle;
            }
            catch
            {
                Debug.Log("Could not find audio source");
            }
        }
        else
        {
            Muted = toggle;
            toggleMuteON.enabled = !toggle;
            toggleMuteOFF.enabled = toggle;

            try
            {
                gameObject.GetComponent<AudioSource>().enabled = !toggle;
            }
            catch
            {
                Debug.Log("Could not find audio source");
            }
        }
    }
}
