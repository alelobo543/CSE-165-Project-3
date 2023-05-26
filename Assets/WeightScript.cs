using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using TMPro;
using UnityEngine;

public class WeightScript : MonoBehaviour
{
    // Start is called before the first frame update
    public string weight;
    int currWeight;
    public TMPro.TextMeshProUGUI text;
    public TMPro.TextMeshProUGUI text2;
    StringBuilder sb;
    public GameObject bowlingBall;
    void Start()
    {
        currWeight = 1;
    }

    // Update is called once per frame
    void Update()
    {
        text2.text = "Current Weight: " + currWeight;
    }

    public void onEnter()
    {
        float ball = 0.45359237f * Int32.Parse(weight);
        currWeight = Int32.Parse(weight);
        bowlingBall.transform.GetComponent<Rigidbody>().mass = ball;
        weight = "";
        text.text = "Ball Weight: ";
    }
    public void onNumberEnter(string number)
    {
        weight += number;
        text.text = "Ball Weight: " + weight;
    }
}
