using Newtonsoft.Json.Bson;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class ResetScript : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject pin;
    public GameObject pin1;
    public GameObject pin2;
    public GameObject pin3;
    public GameObject pin4;
    public GameObject pin5;
    public GameObject pin6;
    public GameObject pin7;
    public GameObject pin8;
    public GameObject pin9;
    public GameObject ball;
    public GameObject rail1;
    public GameObject rail2;
    public BowlButton bowl;
    public Vector3 pos;
    public Vector3 pos1;
    public Vector3 pos2;
    public Vector3 pos3;
    public Vector3 pos4;
    public Vector3 pos5;
    public Vector3 pos6;
    public Vector3 pos7;
    public Vector3 pos8;
    public Vector3 pos9;
    public Vector3 pos10;

    void Start()
    {
        pos = pin.transform.position;
        pos1 = pin1.transform.position;
        pos2 = pin2.transform.position;
        pos3 = pin3.transform.position;
            
        pos4 = pin4.transform.position;
        pos5 = pin5.transform.position;
        pos6 = pin6.transform.position;
        pos7 = pin7.transform.position;
        pos8 = pin8.transform.position;
        pos9= pin9.transform.position;

        pos10 = ball.transform.position;
    }

    // Update is called once per frame
    void Update()
    {
        if(bowl.state <= 1)
        {
            pin.transform.GetComponent<Rigidbody>().isKinematic = true;
            pin1.transform.GetComponent<Rigidbody>().isKinematic= true;
            pin2.transform.GetComponent<Rigidbody>().isKinematic = true;
            pin3.transform.GetComponent<Rigidbody>().isKinematic = true;
            pin4.transform.GetComponent<Rigidbody>().isKinematic = true;
            pin5.transform.GetComponent<Rigidbody>().isKinematic = true;
            pin6.transform.GetComponent<Rigidbody>().isKinematic = true;
            pin7.transform.GetComponent<Rigidbody>().isKinematic = true;
            pin8.transform.GetComponent<Rigidbody>().isKinematic = true;
            pin9.transform.GetComponent<Rigidbody>().isKinematic = true;
            pos = pin.transform.position;
            pos1 = pin1.transform.position;
            pos2 = pin2.transform.position;
            pos3 = pin3.transform.position;

            pos4 = pin4.transform.position;
            pos5 = pin5.transform.position;
            pos6 = pin6.transform.position;
            pos7 = pin7.transform.position;
            pos8 = pin8.transform.position;
            pos9 = pin9.transform.position;

            ball.transform.GetComponent<Rigidbody>().isKinematic = true;
            pos10 = ball.transform.position;
        }
        else
        {
            pin.transform.GetComponent<Rigidbody>().isKinematic = false;
            pin1.transform.GetComponent<Rigidbody>().isKinematic = false;
            pin2.transform.GetComponent<Rigidbody>().isKinematic = false;
            pin3.transform.GetComponent<Rigidbody>().isKinematic = false;
            pin4.transform.GetComponent<Rigidbody>().isKinematic = false;
            pin5.transform.GetComponent<Rigidbody>().isKinematic = false;
            pin6.transform.GetComponent<Rigidbody>().isKinematic = false;
            pin7.transform.GetComponent<Rigidbody>().isKinematic = false;
            pin8.transform.GetComponent<Rigidbody>().isKinematic = false;
            pin9.transform.GetComponent<Rigidbody>().isKinematic = false;

            ball.transform.GetComponent<Rigidbody>().isKinematic = false;
        }
    }

    public void resetLane()
    {
        pin.transform.position = pos;
        pin1.transform.position = pos1;
        pin2.transform.position = pos2;
        pin3.transform.position = pos3;
        pin4.transform.position = pos4;
        pin5.transform.position = pos5;
        pin6.transform.position = pos6;
        pin7.transform.position = pos7;
        pin8.transform.position = pos8;
        pin9.transform.position = pos9;
        resetPin(pin);
        resetPin(pin1);
        resetPin(pin2);
        resetPin(pin3);
        resetPin(pin4);
        resetPin(pin5);
        resetPin(pin6);
        resetPin(pin7);
        resetPin(pin8);
        resetPin(pin9);
        ball.transform.position = pos10;
        ball.transform.GetComponent<Rigidbody>().velocity = new Vector3(0, 0, 0);
        ball.transform.GetComponent<Rigidbody>().angularVelocity = new Vector3(0, 0, 0);
        bowl.state = 0;
    }


    void resetPin(GameObject pin)
    {
        pin.transform.GetComponent<Rigidbody>().velocity = new Vector3(0, 0, 0);
        pin.transform.GetComponent<Rigidbody>().angularVelocity = new Vector3(0, 0, 0);
        pin.transform.rotation= Quaternion.identity;
    }
}
