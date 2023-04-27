using System.Collections;
using System.Collections.Generic;
using UnityEngine;

    public class CardData : MonoBehaviour
    {

    public List<DeckType> DeckType = new List<DeckType>();

    private void Awake()
    {
        // Define o número de cada CardType na lista
        for (int i = 0; i < DeckType.Count; i++)
        {
            DeckType[i].deckNumber = i + 1;

            for (int f = 0; f < DeckType[i].CardType.Count; f++)
            {
                DeckType[i].CardType[f].cardNumber = f + 1;
            }
        }
    }

    }

    [System.Serializable]
    public class DeckType
    {
    
    
    public int deckNumber;
    public string deckName;
    public bool onoff;
    public bool selectable;
    public List<CardType> CardType = new List<CardType>();

    }  

    [System.Serializable]
    public class CardType
    {

    public int cardNumber;
    public string cardContent;
    public string cardContentTop;


    }  