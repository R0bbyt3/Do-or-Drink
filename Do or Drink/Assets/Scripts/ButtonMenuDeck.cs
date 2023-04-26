using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ButtonMenuDeck : MonoBehaviour
{
    private bool isactive = false;

    [SerializeField]
    private CardData cardData;
    [SerializeField]
    private PlayInfo playInfo;

    public void buttonChangeUI(int NumeroDeck)
    {
        if(isactive == false)
        {
            for (int i = 0; i < cardData.DeckType.Count; i++)
            {
                if(cardData.DeckType[i].number == NumeroDeck)
                {
                    cardData.DeckType[i].onoffd = true; 
                }
            }

            GetComponent<Image>().color = new Color(255f/255f, 255f/255f, 255f/255f);
            isactive = true;

            playInfo.UpdateInfo();
        }else
        {
            for (int i = 0; i < cardData.DeckType.Count; i++)
            {
                if(cardData.DeckType[i].number == NumeroDeck)
                {
                    cardData.DeckType[i].onoffd = false; 
                }
            }

            GetComponent<Image>().color = new Color(0f/0f, 0f/0f, 0f/0f);
            isactive = false;

            playInfo.UpdateInfo();
        }

    }
}
