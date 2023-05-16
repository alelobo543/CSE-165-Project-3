// /******************************************************************************
//  * File: FollowOrigin.cs
//  * Copyright (c) 2023 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
//  *
//  * Confidential and Proprietary - Qualcomm Technologies, Inc.
//  *
//  ******************************************************************************/

#if SPACES
using UnityEngine.XR.ARFoundation;
#else
using Unity.XR.CoreUtils;
#endif

using System;
using UnityEngine;

namespace QCHT.Samples
{
    public class FollowOrigin : MonoBehaviour
    {
#if SPACES
        private ARSessionOrigin _origin;
#else
        private XROrigin _origin;
#endif
        private void Awake() {
#if SPACES
                _origin = FindObjectOfType<ARSessionOrigin>();
#else
                _origin = FindObjectOfType<XROrigin>();
#endif
                if (!_origin)
                    DestroyImmediate(this);
        }

        private void Update()
        {
            var t = transform;
            var originTransform = _origin.transform;
            t.position = originTransform.position;
            t.rotation = originTransform.rotation;
        }
    }
}