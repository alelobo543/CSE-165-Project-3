// /******************************************************************************
//  * File: ResetOriginToCameraOnLoad.cs
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

using UnityEngine;

namespace QCHT.Samples
{
#if SPACES
    [RequireComponent(typeof(ARSessionOrigin))]
#else
    [RequireComponent(typeof(XROrigin))]
#endif
    public class ResetOriginToCameraOnLoad : MonoBehaviour
    {
        public bool ResetSessionOriginOnStart = true;
        
        private bool _isSessionOriginMoved;
        
#if SPACES
        private ARSessionOrigin _origin;
#else
        private XROrigin _origin;
#endif
        
#if SPACES
        private void Awake() => _origin = GetComponent<ARSessionOrigin>();
#else
        private void Awake() => _origin = GetComponent<XROrigin>();
#endif
        
        private void OnEnable() => OffsetSessionOrigin();

        private void Update() {
#if SPACES
            var cameraInOriginSpaces = _origin.transform.InverseTransformPoint(_origin.camera.transform.position);
#else
            var cameraInOriginSpaces = _origin.CameraInOriginSpacePos;
#endif
            if (ResetSessionOriginOnStart && !_isSessionOriginMoved && cameraInOriginSpaces != Vector3.zero) {
                OffsetSessionOrigin();
                _isSessionOriginMoved = true;
            }
        }
        
        private void OffsetSessionOrigin() {
#if SPACES
            var sessionOrigin = _origin.transform;
            var cameraTransform = _origin.camera.transform;
#else
            var sessionOrigin = _origin.Origin;
            var cameraTransform = _origin.Camera.transform;
#endif
            var t = sessionOrigin.transform;
            t.Rotate(0.0f, -cameraTransform.rotation.eulerAngles.y, 0.0f, Space.World);
            t.position = -cameraTransform.position;
        }
    }
}

