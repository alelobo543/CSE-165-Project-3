// /******************************************************************************
//  * File: RaycastToggle.cs
//  * Copyright (c) 2023 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
//  *
//  * Confidential and Proprietary - Qualcomm Technologies, Inc.
//  *
//  ******************************************************************************/

using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

namespace QCHT.Samples.Proximal
{
    public class RaycastToggle : MonoBehaviour
    {
        private XRRayInteractor[] rayInteractors;

        private void Awake() {
            rayInteractors = FindObjectsOfType<XRRayInteractor>(true);
        }

        public void ToggleRayInteractors(bool enable) {
            foreach (var rayInteractor in rayInteractors) {
                rayInteractor.enabled = enable;
            }
        }
    }
}
