using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ArrowScript : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject theArrow;
    public BowlButton bowl;
    public float arrowDirection;
    float inc;
    bool right;
    void Start()
    {
        right = true;
        inc = 0.5f;
    }

    // Update is called once per frame
    void Update()
    {
        Vector3 rotation = new Vector3(0.0f, inc, 0.0f);
        if(bowl.state == 0)
        {
            theArrow.transform.Rotate(rotation,Space.Self);
        }
        float angle = theArrow.transform.rotation.eulerAngles.y + 90;
        if (angle < 90 )
        {
            inc = 0.5f;
        }
        else if(angle > 270)
        {
            inc = -0.5f;
        }
        arrowDirection = angle;
    }
}
