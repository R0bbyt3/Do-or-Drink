using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

[ExecuteInEditMode]
public class CardDocCreator : MonoBehaviour
{
    [SerializeField]
    private CardData cardData;
    
    [SerializeField]
    [TextArea]
    private string text;

    public void ParseAndAddCards()
    {
        // Splitting the input text into individual cards
        string[] cards = text.Split('/');

        for (int i = 0; i < cards.Length; i += 3)
        {
            string deckName = cards[i];
            string cardContent = cards[i + 1];
            string cardContentTopString = cards[i + 2];

            // Finding corresponding deck
            DeckType deck = cardData.DeckType.FirstOrDefault(d => d.deckName == deckName);

            if (deck == null)
            {
                Debug.LogError("Deck with name " + deckName + " not found!");
                return;
            }

            var newCard = new CardType();

            newCard.cardContent = cardContent;

            // Parsing CardContentTop
            if (System.Enum.TryParse(cardContentTopString, out CardContentTop contentTop))
            {
                newCard.cardContentTop = contentTop;
            }
            else
            {
                Debug.LogError("Invalid CardContentTop: " + cardContentTopString);
                return;
            }

            // Adding card to the deck
            deck.CardType.Add(newCard);
        }
    }
}