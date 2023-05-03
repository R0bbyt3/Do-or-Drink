using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ShopBut : MonoBehaviour
{
    [SerializeField]
    private GameObject shop;
    [SerializeField]
    private Button button;

    private bool isActive = false;

    private void Start() 
    {
        button.onClick.AddListener(BotaoClickado);    
    }

    private void BotaoClickado()
    {
        if(isActive)
        {
            shop.SetActive(false);
            isActive = false;
        }
        else
        {
            shop.SetActive(true);
            isActive = true;
        }

    }
}
