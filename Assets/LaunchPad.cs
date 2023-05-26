using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LaunchPad : MonoBehaviour
{
    public GameObject bowling_ball;
    GameObject ballInstance;
    public SpeedMeter sm;
    public BowlButton bowl;
    public ArrowScript arrow;
    public Vector3 direction;
    bool ballLaunch;
    // Start is called before the first frame update
    void Start()
    {
        ballLaunch = false;
    }

    // Update is called once per frame
    void Update()
    {
        if(bowl.state == 2)
        {
            bowl.state += 1;
            float angle = arrow.arrowDirection;
            Vector3 force = transform.forward;
            bowling_ball.transform.GetComponent<Rigidbody>().velocity = -arrow.theArrow.transform.forward * sm.speed;
            Debug.Log(bowling_ball.transform.GetComponent<Rigidbody>().velocity);
        }
    }
}
