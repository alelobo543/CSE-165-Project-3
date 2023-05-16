// /******************************************************************************
//  * File: FixEditorOffset.cs
//  * Copyright (c) 2023 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
//  *
//  * Confidential and Proprietary - Qualcomm Technologies, Inc.
//  *
//  ******************************************************************************/

using UnityEngine;

namespace QCHT.Samples.Menu
{
    public class FixEditorOffset : MonoBehaviour
    {
        [SerializeField] private float offsetValueFromCameraY = -1.36144f;

        private void Start()
        {
#if UNITY_EDITOR
            {
                var go = GameObject.Find("QCHTCamera(Clone)");
                var pos = transform.position;
                go.transform.position = new Vector3(pos.x, offsetValueFromCameraY, pos.z);
            }
#endif
        }
    }
}