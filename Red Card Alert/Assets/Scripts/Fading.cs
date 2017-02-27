using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

//does not inherit from MonoBehavior
//Utility Class
public class Fading {

    public static void fadeIn(SpriteRenderer sr)
    {
        Color c = sr.color;
        c.a += 0.025f;
        sr.color = c;
    }

    public static void fadeIn(Text text)
    {
        Color c = text.color;
        c.a += 0.025f;
        text.color = c;
    }

    public static void fadeIn(Image image)
    {
        Color c = image.color;
        c.a += 0.025f;
        image.color = c;
    }

    public static void fadeOut(SpriteRenderer sr)
    {
        Color c = sr.color;
        c.a -= 0.05f;
        sr.color = c;
    }

    public static void fadeOut(Image image)
    {
        Color c = image.color;
        c.a -= 0.05f;
        image.color = c;
    }

    public static void fadeOut(Text text)
    {
        Color c = text.color;
        c.a -= 0.05f;
        text.color = c;
    }

    public static void fadeIn(SpriteRenderer sr, float speed)
    {
        Color c = sr.color;
        c.a += speed;
        sr.color = c;
    }

    public static void fadeIn(Text text, float speed)
    {
        Color c = text.color;
        c.a += speed;
        text.color = c;
    }

    public static void fadeIn(Image image, float speed)
    {
        Color c = image.color;
        c.a += speed;
        image.color = c;
    }

    public static void fadeOut(SpriteRenderer sr, float speed)
    {
        Color c = sr.color;
        c.a -= speed;
        sr.color = c;
    }

    public static void fadeOut(Image image, float speed)
    {
        Color c = image.color;
        c.a -= speed;
        image.color = c;
    }

    public static void fadeOut(Text text, float speed)
    {
        Color c = text.color;
        c.a -= speed;
        text.color = c;
    }
}
