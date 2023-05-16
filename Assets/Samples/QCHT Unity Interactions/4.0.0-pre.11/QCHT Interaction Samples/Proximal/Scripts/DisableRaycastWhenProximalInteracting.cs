// /******************************************************************************
//  * File: DisableRaycastWhenProximalInteracting.cs
//  * Copyright (c) 2023 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
//  *
//  * Confidential and Proprietary - Qualcomm Technologies, Inc.
//  *
//  ******************************************************************************/

using QCHT.Interactions.Distal;
using QCHT.Interactions.Proximal;
using UnityEngine;
using UnityEngine.EventSystems;

namespace QCHT.Samples.Proximal
{
    public class DisableRaycastWhenProximalInteracting : MonoBehaviour
    {
        private void Update()
        {
            if (TryCastQCHTInputModule(out var qchtInputModule))
            {
                qchtInputModule.EnableLeftRaycast = !ProximalInteractor.IsLeftGrabbing;
                qchtInputModule.EnableRightRaycast = !ProximalInteractor.IsRightGrabbing;
            }
        }

        private static bool TryCastQCHTInputModule(out QCHTInputModule qchtInputModule)
        {
            qchtInputModule = EventSystem.current.currentInputModule as QCHTInputModule;
            return qchtInputModule;
        }
    }
}