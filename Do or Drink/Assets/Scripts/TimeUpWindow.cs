using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TimeUpWindow : MonoBehaviour
{
    public CardData cardData;
    public AdManager adManager;
    public TimeUpManager timeUpManager;

    public int deckIndex;

    private void Update()
    {
        if(adManager.isLoaded == false)
        {
            GetComponentInChildren<Transform>().Find("Watch Ad").GetComponent<Button>().interactable = false;
        }
        else
        {
            GetComponentInChildren<Transform>().Find("Watch Ad").GetComponent<Button>().interactable = true;
        }
    }

    public void ShowingAd()
    {
        adManager.ShowAd(cardData.DeckType[deckIndex].deckNumber);
        timeUpManager.isActive = false;
        Destroy(gameObject);
    }

    public void DestroySelf()
    {
        Destroy(gameObject);
    }
}
