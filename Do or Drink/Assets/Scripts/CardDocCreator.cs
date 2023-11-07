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
        string currentDeckName = "";

        // Dividir o texto pelas linhas
        string[] lines = text.Split('\n');

        foreach (string line in lines)
        {
            // Ignorar linhas vazias
            if (string.IsNullOrWhiteSpace(line))
                continue;

            // Verifica se a linha define um novo deck
            if (line.StartsWith("---"))
            {
                currentDeckName = line.Substring(3).Trim(); // Remove '---'
                continue;
            }

            // Divide a linha pelo '+'
            string[] parts = line.Split('+');
            if (parts.Length < 2)
            {
                Debug.LogError("Formato de carta inválido: " + line);
                return;
            }

            // Parte em inglês é a primeira parte da linha
            string englishPart = parts[0].Trim();

            // Divide a segunda parte da linha pelo '&'
            string[] subParts = parts[1].Split('&');
            if (subParts.Length < 2)
            {
                Debug.LogError("Formato de carta inválido na segunda parte: " + parts[1]);
                return;
            }

            // Parte em português é a primeira parte da segunda metade
            string portuguesePart = subParts[0].Trim();

            // O tipo da carta é a segunda parte da segunda metade
            string cardType = subParts[1].Trim();

            // Encontrar o deck correspondente
            DeckType deck = cardData.DeckType.FirstOrDefault(d => d.deckName == currentDeckName);
            if (deck == null)
            {
                Debug.LogError("Deck com nome " + currentDeckName + " não encontrado!");
                return;
            }

            var newCard = new CardType
            {
                cardContent = englishPart,
                cardContentBR = portuguesePart, // Atribuir o conteúdo em português
                cardContentTop = StringToCardContentTop(cardType)
            };

            // Adiciona a carta ao deck
            deck.CardType.Add(newCard);
        }
    }

    private CardContentTop StringToCardContentTop(string str)
    {
        switch (str.Trim().ToLower())
        {
            case "grupo":
                return CardContentTop.Group;
            case "individual":
                return CardContentTop.Individual;
            case "regra":
                return CardContentTop.Rule;
            default:
                Debug.LogError("Valor inválido para CardContentTop: " + str);
                return CardContentTop.Individual; // Suponha que Individual seja o valor padrão para casos desconhecidos
        }
    }
}
