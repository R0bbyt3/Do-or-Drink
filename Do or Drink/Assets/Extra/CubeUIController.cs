using UnityEngine;
using System.Collections.Generic;
using System.Collections;

public class CubeUIController : MonoBehaviour
{
    [SerializeField]
    private Transform centerObject; 
    [SerializeField]
    private float radius = 5f; 
    [SerializeField]
    private float rotationSpeed = 5f; 

    [SerializeField]
    private float timeRotate = 0.1f;
    [SerializeField]
    private int divRotate = 10;

    [SerializeField]
    private float posYinitAdd;

    private bool isDragging; 
    private Vector3 dragStartPosition; 

    private int totalObjects;
    private float posYadd;

    List<float> allYpos = new List<float>();

    private bool isRotating;

    private void Start()
    {
        transform.position = centerObject.position;

        ArrangeObjectsInCircle();
    }

    private void Update()
    {
        DetectDragInput();
    }

    private void ArrangeObjectsInCircle()
    {
        totalObjects = transform.childCount;
        float angleStep = 360f / totalObjects;

        for (int i = 0; i < totalObjects; i++)
        {
            Transform child = transform.GetChild(i);
            float angle = i * angleStep;

            float xPos = radius * Mathf.Cos(angle * Mathf.Deg2Rad);
            float yPos = 0f;
            float zPos = radius * Mathf.Sin(angle * Mathf.Deg2Rad);
            Vector3 position = new Vector3(xPos, yPos, zPos);

            child.localPosition = position;
            child.localRotation = Quaternion.Euler(-90f, 0f, -angle);
        }

        transform.rotation = Quaternion.Euler(0f, posYinitAdd, 0f); 

        posYadd = 360f/totalObjects;

        for (int i = 0; i < totalObjects; i++)
        {
            float add = posYinitAdd + posYadd * i;

            if (add > 180)
            {
                float neg = add - 180;
                add = -180 + neg;
            }

            allYpos.Add(add);

            print(add);
        }
    }

    private void DetectDragInput()
    {
            if (Input.touchCount > 0)
            {
                Touch touch = Input.GetTouch(0);

                if (touch.phase == TouchPhase.Began)
                {
                    dragStartPosition = touch.position;
                    isDragging = true;
                }
                else if (touch.phase == TouchPhase.Ended)
                {
                    isDragging = false;
                }
            }
            else if (Input.GetMouseButtonDown(0))
            {
                dragStartPosition = Input.mousePosition;
                isDragging = true;
            }
            else if (Input.GetMouseButtonUp(0))
            {
                isDragging = false;
            }

            if (isDragging)
            {
                if(!isRotating)
                {
                    Vector3 currentDragPosition = Input.touchCount > 0 ? Input.GetTouch(0).position : (Vector3)Input.mousePosition;
                    Vector3 dragDelta = currentDragPosition - dragStartPosition;
                    float yDelta = dragDelta.x / Screen.width * 360f;

                    RotateCenterObject(yDelta);
                }
            }
    }

    private void RotateCenterObject(float yDelta)
    {
        transform.Rotate(0f, -(yDelta/80), 0f);
    }

    public void rodarSeta(string direcao)
    {
        if(!isRotating)
        {
            isRotating = true;

            float posAtual = transform.eulerAngles.y;
            float distancia = 999999;
            int posicaoIndex = 0;

            for (int i = 0; i < allYpos.Count; i++)
            {
                float diferencaRotacao = posAtual - allYpos[i];
                diferencaRotacao = (diferencaRotacao + 180f) % 360f - 180f;
                float distanciaLoc = Mathf.Abs(diferencaRotacao);

                if(distanciaLoc < distancia)
                {
                    distancia = distanciaLoc;
                    posicaoIndex = i;
                }

                print("a distancia entre " + posAtual.ToString() + " e " + allYpos[i].ToString() + " é de " + distanciaLoc.ToString());

            }
                print("estamos mais proximos do deck: " + (posicaoIndex + 1).ToString());
                
            if(direcao == "direita")
            {
                int indexReal = posicaoIndex + 1;

                if(indexReal > allYpos.Count - 1)
                {
                    indexReal = 0;
                }

                float difRotacao = posAtual - allYpos[indexReal];
                difRotacao = (difRotacao + 180f) % 360f - 180f;
                float distLoc = Mathf.Abs(difRotacao);

                print(distLoc);

                StartCoroutine(RotateAnim(direcao, distLoc));
            }
            else
            {
                int indexReal = posicaoIndex - 1;

                if(indexReal < 0 )
                {
                    indexReal = allYpos.Count - 1;
                }

                float difRotacao = posAtual - allYpos[indexReal];
                difRotacao = (difRotacao + 180f) % 360f - 180f;
                float distLoc = Mathf.Abs(difRotacao);

                print(distLoc);

                StartCoroutine(RotateAnim(direcao, distLoc));
            }
        }
    }

    IEnumerator RotateAnim(string direcao, float distanciaLoc)
    {
        float rotateDist = distanciaLoc/divRotate;

            for (int i = 0; i < divRotate; i++)
            {

                if(direcao == "direita")
                {
                    transform.Rotate(0f, rotateDist, 0f);

                }else
                {
                    transform.Rotate(0f, -rotateDist, 0f);

                }

                yield return new WaitForSeconds(timeRotate);
            }

        isRotating = false;
    }
    
}

