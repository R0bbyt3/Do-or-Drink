using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class CardScpt : MonoBehaviour
{

 public CardData cardData;
 public Transform parenteSaida;

 [SerializeField]
 private TextMeshProUGUI Titulo;
 [SerializeField]
 private TextMeshProUGUI SubTitulo;
 [SerializeField]
 private TextMeshProUGUI NomeDeck;
 [SerializeField]
 private TextMeshProUGUI NumeroDeck;
 [SerializeField]
 private TextMeshProUGUI Conteudo;

 private Animator animator;
 private int ndodeck;
 private int ndacarta;
 
    private void OnEnable()
    {
        PlayManager.novaCarta += DestroySelf;
    }


    private void OnDisable()
    {
        PlayManager.novaCarta -= DestroySelf;
    }

    private void Start()
    {
        GenerateDeck();
    }

    private void GenerateDeck()
    {
        ndodeck = Random.Range(0, cardData.DeckType.Count);

        while(cardData.DeckType[ndodeck].onoff == false)
        {

        ndodeck = Random.Range(0, cardData.DeckType.Count);

        }

        ChooseCard();
   
    }
    
    private void ChooseCard()
    {

       ndacarta = Random.Range(0, cardData.DeckType[ndodeck].CardType.Count);

       MakeTheCard();

    }

    private void MakeTheCard()
    {

        Titulo.text = "Do or Drink";
        string type = GetType(cardData.DeckType[ndodeck].CardType[ndacarta].cardContentTop);
        SubTitulo.text = type;
        NomeDeck.text = cardData.DeckType[ndodeck].deckName;
        NumeroDeck.text = cardData.DeckType[ndodeck].CardType[ndacarta].cardNumber + "/" + cardData.DeckType[ndodeck].CardType.Count;
        Conteudo.text = cardData.DeckType[ndodeck].CardType[ndacarta].cardContent;   
        GetComponentInChildren<Transform>().Find("WhiteBK").GetComponent<Image>().color = cardData.DeckType[ndodeck].cor;

    }

    public void DestroySelf()
    {
        transform.SetParent(parenteSaida, false); 
        animator = GetComponent<Animator>();
        animator.SetBool("isDelete", true);
    }

    public void Delete()
    {
        Destroy(this.gameObject);
    }

    private string GetType(CardContentTop cardContentTop)
    {
        switch (cardContentTop)
        {
            case CardContentTop.Individual:
                return "Individual";
            case CardContentTop.Group:
                return "Group";
            case CardContentTop.Rule:
                return "Rule";
            default:
                return "Individual"; 
        }
    }

}
