using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpeedMeter : MonoBehaviour
{
    // Start is called before the first frame update
    public LineRenderer meter;
    public float speed;
    public bool speedMeterOn;
    LineRenderer instance;
    float val;
    bool up;
    float inc;
    void Start()
    {
        val = 0.01f;
        inc = 0.01f;
        up = true;
        speedMeterOn = true;
    }

    // Update is called once per frame
    void Update()
    {
        Vector3[] positions = new Vector3[2];
        meter.GetPositions(positions);
        if(speedMeterOn)
        {
            val += inc;
            positions[1].z = val;
            meter.SetPositions(positions);
        }
        if(val > 1)
        {
            up = false;
        }
        if(val < 0)
        {
            up = true;
        }
        if (up)
        {
            inc = 0.003f;
        }
        else
        {
            inc = -0.003f;
        }
        positions[1].z = val;
        meter.SetPositions(positions);
        if (Input.GetKey(KeyCode.Space))
        {
            speedMeterOn = false;
            speed = Mathf.Clamp(positions[1].z, 0f, 1f) * 20;
        }
    }
}
