// /******************************************************************************
//  * File: FOVTrackingLimit.cs
//  * Copyright (c) 2023 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
//  *
//  * Confidential and Proprietary - Qualcomm Technologies, Inc.
//  *
//  ******************************************************************************/

using UnityEngine;

namespace QCHT.Samples.Menu
{
    /*
    public class FOVTrackingLimit : MonoBehaviour
    {
        [SerializeField, Range(0, 10)] private float timeScale = 1f;

        private void Start()
        {
            var t = transform;
            t.SetParent(QCHTManager.Instance.Head);
            var position = t.position;
            position.y = QCHTManager.Instance.Head.position.y + 0.1f;
            t.position = position;
        }

        private void Update()
        {
            transform.Rotate(Vector3.up, Time.deltaTime * timeScale);
        }
    }*/
}