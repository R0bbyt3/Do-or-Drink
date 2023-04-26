using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class PlayInfo : MonoBehaviour
{

 private int DeckNumber;
 private int CardNumber;

 [SerializeField]
 private TextMeshProUGUI DeckNumberText;
 [SerializeField]
 private TextMeshProUGUI CardNumberText;

 [SerializeField]
 private GameObject PlayButton;

 [SerializeField]
 private CardData cardData;

 public void UpdateInfo()
 {
   
  DeckNumber = 0;
  CardNumber = 0;
   

    for (int j = 0; j < cardData.DeckType.Count; j++)
    {
        if (cardData.DeckType[j].onoffd == true)
        {

            DeckNumber = DeckNumber + 1;

            int CartasDoDeck = cardData.DeckType[j].CardType.Count;
            CardNumber += CartasDoDeck;  

        }  
          
    }

   if(DeckNumber > 0)
   {

   PlayButton.SetActive(true);

   }else
   {

   PlayButton.SetActive(false);

   }

    UpdateVisual();
    
  }

  public void UpdateVisual()
  {
   
    if (DeckNumber == 1)
    {

      DeckNumberText.text = DeckNumber.ToString() + " Deck";


    }else
    {

      DeckNumberText.text = DeckNumber.ToString() + " Decks";

    }


    CardNumberText.text = CardNumber.ToString() + " Cartas";
  
 }

}
