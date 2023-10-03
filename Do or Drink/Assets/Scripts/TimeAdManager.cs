using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class TimeAdManager : MonoBehaviour
{
    [SerializeField]
    private CardData cardData;
    [SerializeField]
    private TimeUpManager timeUpManager;

    public bool gameOn = false;

    [SerializeField]
    private GameObject[] tempoDisplayMenu;

    [SerializeField]
    private GameObject[] gameBlocker;

    private List<int> deckActiveIndex = new List<int>();

    private void Start()
    {
        UpdateVisuals();
    }

    public void decksActive()
    {
        for (int i = deckActiveIndex.Count - 1; i >= 0; i--)
        {
            deckActiveIndex.RemoveAt(i); 
        }

        for (int j = 1; j < cardData.DeckType.Count; j++)
        {
            if(cardData.DeckType[j].onoff == true)
            {
                deckActiveIndex.Add(j);
            }
        }
    }

    private void Update()
    {
        if (gameOn == true && timeUpManager.isActive == false)
        {
            for (int j = 0; j < deckActiveIndex.Count; j++)
            {
                if (cardData.DeckType[deckActiveIndex[j]].timeSeconds <= 0)
                {
                    cardData.DeckType[deckActiveIndex[j]].onoff = false;
                    timeUpManager.deckTimeUpIndex.Add(deckActiveIndex[j]);
                    decksActive();
                }else
                {
                    cardData.DeckType[deckActiveIndex[j]].timeSeconds -= Time.deltaTime;
                }

            }
        }

    }

    public void UpdateVisuals()
    {

         for (int j = 0; j < cardData.DeckType.Count; j++)
        {
            if(j != 0)
            {
                if(cardData.DeckType[j].timeSeconds > 0)
                {
                    int hours = Mathf.FloorToInt(cardData.DeckType[j].timeSeconds / 3600);
                    int minutes = Mathf.FloorToInt((cardData.DeckType[j].timeSeconds % 3600) / 60);
                    int seconds = Mathf.FloorToInt(cardData.DeckType[j].timeSeconds % 60);  

                    tempoDisplayMenu[j - 1].SetActive(true);
                    tempoDisplayMenu[j - 1].GetComponent<TextMeshProUGUI>().text = string.Format( "Remaining Time: " + "{0:00}:{1:00}:{2:00}", hours, minutes, seconds); 
                    gameBlocker[j - 1].SetActive(false);
                }else
                {
                    tempoDisplayMenu[j - 1].SetActive(false);
                    gameBlocker[j - 1].SetActive(true);
                }
            }
        }
    }
    
}