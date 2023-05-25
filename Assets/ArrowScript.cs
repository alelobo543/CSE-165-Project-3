using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ArrowScript : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject theArrow;
    public bool arrowTurningOn;
    public float arrowDirection;
    float inc;
    bool right;
    void Start()
    {
        arrowTurningOn = true;
        right = true;
        inc = 0.5f;
    }

    // Update is called once per frame
    void Update()
    {
        Vector3 rotation = new Vector3(0.0f, inc, 0.0f);
        if(arrowTurningOn == true)
        {
            theArrow.transform.Rotate(rotation);
        }
        Debug.Log(theArrow.transform.rotation.eulerAngles.y);
        float angle = theArrow.transform.rotation.eulerAngles.y;
        if (angle < 90 )
        {
            inc = 0.5f;
        }
        else if(angle > 270)
        {
            inc = -0.5f;
        }
        if (Input.GetKeyDown(KeyCode.Space))
        {
            arrowTurningOn = false;
            arrowDirection = angle;
        }
    }
}
