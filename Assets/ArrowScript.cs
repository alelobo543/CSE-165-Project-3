using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ArrowScript : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject theArrow;
    public BowlButton bowl;
    public float arrowDirection;
    float time;
    float inc;
    bool right;
    void Start()
    {
        right = true;
        inc = 2.5f;
        time = 0;
    }

    // Update is called once per frame
    void Update()
    {
        Vector3 rotation = new Vector3(0.0f, inc, 0.0f);
        if(bowl.state == 0)
        {
            time += Time.deltaTime;
            if (time >= 1.2f)
            {
                inc *= -1;
                time = 0;
            }
            theArrow.transform.Rotate(rotation,Space.Self);
        }
        else
        {
            inc = 2.5f;
            time = 0;
        }


        float angle = theArrow.transform.rotation.eulerAngles.y + 90;
        /*
        float angle = theArrow.transform.rotation.eulerAngles.y + 90;
        if (angle < 90 )
        {
            inc = 0.6f;
        }
        else if(angle > 270)
        {
            inc = -0.6f;
        }
        */
        arrowDirection = angle;
    }
}
