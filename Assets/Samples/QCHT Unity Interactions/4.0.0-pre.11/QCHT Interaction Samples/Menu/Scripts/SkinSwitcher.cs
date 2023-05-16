// /******************************************************************************
//  * File: SkinSwitcher.cs
//  * Copyright (c) 2023 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
//  *
//  * Confidential and Proprietary - Qualcomm Technologies, Inc.
//  *
//  ******************************************************************************/

using QCHT.Interactions.Core;
using QCHT.Interactions.Hands;
using UnityEngine;

namespace QCHT.Samples.Menu
{
    public class SkinSwitcher : MonoBehaviour
    {
        [SerializeField] private XRHandTrackingManager _hatManager;
        
        public void SetLeftSkin(HandSkin skin) {
            _hatManager = _hatManager ? _hatManager : FindObjectOfType<XRHandTrackingManager>();
            _hatManager.SetLeftHandSkin(skin);
        }

        public void SetRightSkin(HandSkin skin) {            
            _hatManager = _hatManager ? _hatManager : FindObjectOfType<XRHandTrackingManager>();
            _hatManager.SetRightHandSkin(skin);
        }
    }
}