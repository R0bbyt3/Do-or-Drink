using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class PlayManager : MonoBehaviour
{

    [SerializeField]
    private GameObject InGame;
    [SerializeField]
    private GameObject NotInGame;

    [SerializeField]
    private Transform parente;
    [SerializeField]
    private Transform parenteSaida;

    [SerializeField]
    private GameObject Card;

    [SerializeField]
    private CardData cardData;
    [SerializeField]
    private TimeAdManager timeAdManager;

    public delegate void CartaCriada();
    public static event CartaCriada novaCarta;

    private int jogosAtivos = 0;

    public void AtivarJogo()
    {
        jogosAtivos = 0;

        InGame.SetActive(true);
        NotInGame.SetActive(false);
        CreateCard();
        timeAdManager.decksActive();
        timeAdManager.gameOn = true;

        for (int j = 1; j < cardData.DeckType.Count; j++)
        {
            if(cardData.DeckType[j].onoff == true)
            {
                jogosAtivos += 1;
            }
        }

    }   

    public void DesativarJogo()
    {

        InGame.SetActive(false);
        NotInGame.SetActive(true);
        timeAdManager.gameOn = false;
        timeAdManager.UpdateVisuals();

    }

    public void CreateCard()
    {

        var novaCarta = Instantiate(Card, new Vector3(0, 0, 0), Quaternion.identity);
        novaCarta.GetComponent<CardScpt>().cardData = cardData;
        novaCarta.GetComponent<CardScpt>().parenteSaida = parenteSaida;
        novaCarta.transform.SetParent(parente, false); 
        novaCarta.GetComponent<RectTransform>().localScale = new Vector3(1, 1, 1);
        novaCarta.GetComponent<RectTransform>().anchoredPosition3D = new Vector3(0, -95, 0);
        
    }

    public void NewCard()
    {

    bool cardExist = false;

    for (int j = 0; j < cardData.DeckType.Count; j++)
    {
        if(cardData.DeckType[j].onoff == true)
        {
            cardExist = true;
        }
    }

    if(cardExist == true)
    {
        if(novaCarta != null)
        novaCarta();

        CreateCard();
    }else
    {
        DesativarJogo();
    }

    }    


}
