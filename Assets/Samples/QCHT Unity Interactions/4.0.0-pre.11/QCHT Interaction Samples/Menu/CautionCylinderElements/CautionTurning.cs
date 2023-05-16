// /******************************************************************************
//  * File: CautionTurning.cs
//  * Copyright (c) 2023 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
//  *
//  * Confidential and Proprietary - Qualcomm Technologies, Inc.
//  *
//  ******************************************************************************/

using UnityEngine;

public class CautionTurning : MonoBehaviour
{
    [SerializeField, Range(0,10)] private float timeScale = 1f;
    
    private void Update()
    {
        transform.Rotate(Vector3.up, Time.deltaTime * timeScale);
    }
}
