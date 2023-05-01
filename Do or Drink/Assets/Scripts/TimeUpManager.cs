using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class TimeUpManager : MonoBehaviour
{
    public List<int> deckTimeUpIndex = new List<int>();

    public bool isActive;

    [SerializeField]
    private GameObject DeckUpWindow;

    [SerializeField]
    private Transform parente;

    [SerializeField]
    private CardData cardData;
    [SerializeField]
    private AdManager adManager;

    private void Update()
    {
        if(isActive == false)
        {
            if(deckTimeUpIndex.Count > 0)
            {
                openWindow(deckTimeUpIndex[0]);
            }
        }
    }

    private void openWindow(int deckIndex)
    {
        isActive = true;

        var janela = Instantiate(DeckUpWindow, new Vector3(0, 0, 0), Quaternion.identity);
        janela.transform.SetParent(parente, false); 
        TimeUpWindow timeUpWindow = janela.GetComponent<TimeUpWindow>();
        timeUpWindow.cardData = cardData;
        timeUpWindow.adManager = adManager;
        timeUpWindow.timeUpManager = this;
        timeUpWindow.deckIndex = deckIndex;
        TextMeshProUGUI txtMP = janela.GetComponentInChildren<Transform>().Find("Deck Name").GetComponent<TextMeshProUGUI>();
        txtMP.text = cardData.DeckType[deckIndex].deckName;
        txtMP.color = cardData.DeckType[deckIndex].cor;

        deckTimeUpIndex.RemoveAt(0); 
    }




}
