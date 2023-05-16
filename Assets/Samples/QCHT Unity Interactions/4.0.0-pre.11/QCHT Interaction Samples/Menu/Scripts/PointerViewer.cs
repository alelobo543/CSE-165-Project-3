// /******************************************************************************
//  * File: PointerViewer.cs
//  * Copyright (c) 2023 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
//  *
//  * Confidential and Proprietary - Qualcomm Technologies, Inc.
//  *
//  ******************************************************************************/

using UnityEngine;
using UnityEngine.InputSystem;

namespace QCHT.Samples.Menu
{
    public class PointerViewer : MonoBehaviour
    {
        [SerializeField] private GameObject leftController;
        [SerializeField] private GameObject rightController;
        
        [SerializeField] private InputAction leftIsTracked;
        [SerializeField] private InputAction rightIsTracked;
        
        private void OnEnable()
        {
            leftIsTracked.Enable();
            rightIsTracked.Enable();
        }

        private void OnDisable()
        {
            leftIsTracked.Disable();
            rightIsTracked.Disable();
        }

        void Update()
        {
            leftController.SetActive(leftIsTracked.IsInProgress());
            rightController.SetActive(rightIsTracked.IsInProgress());
        }
    }
}


