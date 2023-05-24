using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LaunchPad : MonoBehaviour
{
    public GameObject bowling_ball;
    GameObject ballInstance;
    public SpeedMeter sm;
    public Vector3 direction;
    bool ballLaunch;
    // Start is called before the first frame update
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
        if(sm.speedMeterOn == false && ballLaunch == false)
        {
            ballLaunch= true;
            ballInstance = Instantiate(bowling_ball);
            ballInstance.transform.GetComponent<Rigidbody>().velocity = transform.forward * sm.speed;
        }
    }
}
