using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;

public class DetectScript : MonoBehaviour

{
    public ARPlaneManager planeManager;
    public GameObject lane;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        foreach (var plane in planeManager.trackables)
{
        MeshRenderer renderer = GetComponent<MeshRenderer>();
        float sizex = renderer.bounds.size.x;
        float sizez = renderer.bounds.size.z;
        if(sizex>=1.5f&&sizez>=0.25f){
            GameObject newLane = Instantiate(lane);
            newLane.transform.position=plane.transform.position;
            break;
        }

}
    }
}
