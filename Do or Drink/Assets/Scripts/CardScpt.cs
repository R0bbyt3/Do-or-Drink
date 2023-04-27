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
 
    void OnEnable()
    {
        PlayManager.novaCarta += DestroySelf;
    }


    void OnDisable()
    {
        PlayManager.novaCarta -= DestroySelf;
    }

    void Start()
    {
        GenerateDeck();
    }

    void GenerateDeck()
    {
        ndodeck = Random.Range(0, cardData.DeckType.Count);

        while(cardData.DeckType[ndodeck].onoff == false)
        {

        ndodeck = Random.Range(0, cardData.DeckType.Count);

        }

        ChooseCard();
   
    }
    
    void ChooseCard()
    {

       ndacarta = Random.Range(0, cardData.DeckType[ndodeck].CardType.Count);

       MakeTheCard();

    }

     void MakeTheCard()
    {

        Titulo.text = "Do or Drink";
        SubTitulo.text = cardData.DeckType[ndodeck].CardType[ndacarta].cardContentTop;
        NomeDeck.text = cardData.DeckType[ndodeck].deckName;
        NumeroDeck.text = cardData.DeckType[ndodeck].CardType[ndacarta].cardNumber + "/" + cardData.DeckType[ndodeck].CardType.Count;
        Conteudo.text = cardData.DeckType[ndodeck].CardType[ndacarta].cardContent;    

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

}
