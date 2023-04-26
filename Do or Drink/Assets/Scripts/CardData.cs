using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CardData : MonoBehaviour
{

public List<DeckType> DeckType = new List<DeckType>();

}

[System.Serializable]
public class DeckType
{

public string TypeENG;
public bool onoffd;
public List<CardType> CardType = new List<CardType>();

}  

[System.Serializable]
public class CardType
{

public string CardNumber;
public string CardContentENG;
public string CardContentTopENG;


}  