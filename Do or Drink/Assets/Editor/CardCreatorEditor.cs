using UnityEngine;
using UnityEditor;

[CustomEditor(typeof(CardDocCreator))]
public class CardDocCreatorEditor : Editor
{
    public override void OnInspectorGUI()
    {
        DrawDefaultInspector();

        CardDocCreator myScript = (CardDocCreator)target;

        if(GUILayout.Button("Add Cards"))
        {
            myScript.ParseAndAddCards();
        }
    }
}