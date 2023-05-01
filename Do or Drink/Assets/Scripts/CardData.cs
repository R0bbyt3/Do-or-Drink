using System.Collections;
using System.Collections.Generic;
using UnityEngine;

    public class CardData : MonoBehaviour
    {

    public List<DeckType> DeckType = new List<DeckType>();

    private void Start()
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

        LoadData();
    }

    void Update() {
        if (Input.GetKeyDown(KeyCode.S)) {
            SaveData();
        }
    }
    
    private void OnApplicationQuit() {
        SaveData();
    }

    private void SaveData() 
    {
        Debug.Log("Saved");
        // Salva o tempo de cada deck na lista
        
        foreach (DeckType deck in DeckType) 
        {
            string key = "deck_" + deck.deckNumber + "_timeSeconds";
            PlayerPrefs.SetInt(key, Mathf.RoundToInt(deck.timeSeconds));
            Debug.Log("Saved key: " + key + ", value: " + deck.timeSeconds);
        }
    }

    private void LoadData()
    {

    // Carrega o tempo de cada deck da lista
    foreach (DeckType deck in DeckType)
    {
        string key = "deck_" + deck.deckNumber + "_timeSeconds";
        if (PlayerPrefs.HasKey(key))
        {
            deck.timeSeconds = PlayerPrefs.GetInt(key, 0);
            Debug.Log("Loaded key: " + key + ", value: " + deck.timeSeconds);
        }
        else
        {
            Debug.Log("Key not found: " + key);
        }
    }
}

    }

    [System.Serializable]
    public class DeckType
    {
    
    public int deckNumber;
    public string deckName;
    public float timeSeconds;
    public bool onoff;
    public Color cor;
    public List<CardType> CardType = new List<CardType>();

    }  

    [System.Serializable]
    public class CardType
    {

    public int cardNumber;
    public string cardContent;
    public string cardContentTop;


    }  