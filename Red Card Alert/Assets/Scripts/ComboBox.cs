using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public static class ComboBox{
    
    public static void StartCombo(Image comboBox)
    {
        try
        {
            comboBox.GetComponentInChildren<Text>().enabled = true;
            comboBox.GetComponent<Image>().enabled = true;
        }
        catch (Exception ex)
        {
            Debug.Log(ex.Message);
        }
    }

    public static void ResetCombo(Image comboBox)
    {
        try {
            PlayerHandler.ballCombo = 0;
            comboBox.GetComponentInChildren<Text>().enabled = false;
            comboBox.GetComponent<Image>().enabled = false;
        }
        catch(Exception ex)
        {
            Debug.Log(ex.Message);
        }
    }

    public static void IncreaseCombo(Text currentCombo)
    {
        try
        {
            PlayerHandler.ballCombo += 1;
            currentCombo.text = "x" + PlayerHandler.ballCombo.ToString();
        }
        catch (Exception ex)
        {
            Debug.Log(ex.Message);
        }
    }
}
