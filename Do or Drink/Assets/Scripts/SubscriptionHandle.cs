using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Purchasing;

public class SubscriptionHandle : MonoBehaviour
{
    [SerializeField]
    private bool isSubscripted = false;

    string[] productId = new string[] { "onemonthunlimited", "oneweekunlimited", "oneyearunlimited", "sixmonthunlimited" };
    
    private void Start()
    {
        CheckState();
    }

    public void CheckState()
    {

        isSubscripted = false;

        foreach (string product in productId)
        {
            SubscriptionInfo subscriptionInfo = new SubscriptionInfo(product);
            isSubscripted = subscriptionInfo.isSubscribed();

            if (isSubscripted == true)
            {
                break; 
            }
            
        }

        Debug.Log("A assinatura está ativa? " + isSubscripted);

    }
}

public class SubscriptionInfo
{
    public SubscriptionInfo(string productId)
    {

    }

    public Result isSubscribed()
    {
        Result result = isSubscribed();

        if (result == Result.True.True)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

}
