using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Advertisements;
using System.Collections.Generic;
 
public class AdManager : MonoBehaviour, IUnityAdsLoadListener, IUnityAdsShowListener
{
    [SerializeField]
    private List<ADB> _showAdButtons = new List<ADB>();
    string _adUnitId = "Rewarded_Android";
 
    [SerializeField]
    CardData cardData;
    [SerializeField]
    TimeAdManager timeAdManager;

    private int deckA;

    public bool isLoaded;

    void Awake()
    {   
        for (int j = 0; j < _showAdButtons.Count; j++)
        {
            _showAdButtons[j].button.interactable = false;
        }
    }

    private void Start()
    {
        Advertisement.Load(_adUnitId, this);
        Advertisement.Initialize("5260291");
        LoadAd();
        OnUnityAdsAdLoaded(_adUnitId);
        
    }
 
    // Load content to the Ad Unit:
    public void LoadAd()
    {
        // IMPORTANT! Only load content AFTER initialization (in this example, initialization is handled in a different script).
        Debug.Log("Loading Ad: " + _adUnitId);
        Advertisement.Load(_adUnitId, this);
    }
 
    // If the ad successfully loads, add a listener to the button and enable it:
    public void OnUnityAdsAdLoaded(string adUnitId)
    {
        Debug.Log("Ad Loaded: " + adUnitId);
 
        if (adUnitId.Equals(_adUnitId))
        {
            // Configure the button to call the ShowAd() method when clicked:

            // Enable the button for users to click:

            for (int j = 0; j < _showAdButtons.Count; j++)
            {
                _showAdButtons[j].button.interactable = true;
            }

            isLoaded = true;
        }
    }
 
    // Implement a method to execute when the user clicks the button:
    public void ShowAd(int deck)
    {
        deckA = deck;

        // Disable the button:
        for (int j = 0; j < _showAdButtons.Count; j++)
        {
            _showAdButtons[j].button.interactable = false;
        }
      
        // Then show the ad:
        Advertisement.Show(_adUnitId, this);

        Debug.Log("Add show");

        isLoaded = false;
    }
 
    // Implement the Show Listener's OnUnityAdsShowComplete callback method to determine if the user gets a reward:
    public void OnUnityAdsShowComplete(string adUnitId, UnityAdsShowCompletionState showCompletionState)
    {
        
        if (adUnitId.Equals(_adUnitId) && showCompletionState.Equals(UnityAdsShowCompletionState.COMPLETED))
        {
            // Grant a reward.
            Debug.Log("Unity Ads Rewarded Ad Completed");
    
            for (int j = 0; j < cardData.DeckType.Count; j++)
            {
                if(cardData.DeckType[j].deckNumber == deckA)
                {
                    cardData.DeckType[j].timeSeconds += 900;
                    timeAdManager.UpdateVisuals();

                    if(timeAdManager.gameOn == true)
                    {
                        cardData.DeckType[j].onoff = true;  
                        timeAdManager.decksActive();
                    }
                }
            }

            // Load another ad:
            Advertisement.Load(_adUnitId, this);
        }
    }
 
    // Implement Load and Show Listener error callbacks:
    public void OnUnityAdsFailedToLoad(string adUnitId, UnityAdsLoadError error, string message)
    {
        Debug.Log($"Error loading Ad Unit {adUnitId}: {error.ToString()} - {message}");
        // Use the error details to determine whether to try to load another ad.
    }
 
    public void OnUnityAdsShowFailure(string adUnitId, UnityAdsShowError error, string message)
    {
        Debug.Log($"Error showing Ad Unit {adUnitId}: {error.ToString()} - {message}");
        // Use the error details to determine whether to try to load another ad.
    }
 
    public void OnUnityAdsShowStart(string adUnitId) { }
    public void OnUnityAdsShowClick(string adUnitId) { }
 
    void OnDestroy()
    {
        // Clean up the button listeners:
        for (int j = 0; j < _showAdButtons.Count; j++)
        {
            _showAdButtons[j].button.onClick.RemoveAllListeners();
        }

    }

    [System.Serializable]
    public class ADB
    {
    
    public Button button;
    public int deck;

    }  


}