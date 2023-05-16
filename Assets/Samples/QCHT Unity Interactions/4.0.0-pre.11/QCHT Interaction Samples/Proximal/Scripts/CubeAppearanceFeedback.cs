// /******************************************************************************
//  * File: CubeAppearanceFeedback.cs
//  * Copyright (c) 2023 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
//  *
//  * Confidential and Proprietary - Qualcomm Technologies, Inc.
//  *
//  ******************************************************************************/

using QCHT.Interactions.Proximal;
using UnityEngine;

namespace QCHT.Samples.Proximal
{
    [RequireComponent(typeof(ProximalInteractable))]
    public class CubeAppearanceFeedback : MonoBehaviour
    {
        [SerializeField] private Texture2D _normalTexture;
        [SerializeField] private Texture2D _hoverTexture;
        [SerializeField] private Texture2D _selectedTexture;

        private int _triggerCount;
        private bool _isGrabbed;

        public void OnEnable()
        {
            var interactable = GetComponent<ProximalInteractable>();
            interactable.OnProximalEnterEvent.AddListener(OnProximalEnter);
            interactable.OnProximalExitEvent.AddListener(OnProximalExit);
            interactable.OnProximalGrabEvent.AddListener(OnProximalGrab);
            interactable.OnProximalReleaseEvent.AddListener(OnProximalRelease);
        }

        public void OnDisable()
        {
            var interactable = GetComponent<ProximalInteractable>();
            interactable.OnProximalEnterEvent.RemoveListener(OnProximalEnter);
            interactable.OnProximalExitEvent.RemoveListener(OnProximalExit);
            interactable.OnProximalGrabEvent.RemoveListener(OnProximalGrab);
            interactable.OnProximalReleaseEvent.RemoveListener(OnProximalRelease);
        }

        private void OnProximalEnter(InteractionData interactionData)
        {
            _triggerCount++;
            UpdateAppearance();
        }

        private void OnProximalExit(InteractionData interactionData)
        {
            _triggerCount--;

            if (_triggerCount < 0)
                _triggerCount = 0;

            UpdateAppearance();
        }

        private void OnProximalGrab(InteractionData interactionData)
        {
            _isGrabbed = true;
            UpdateAppearance();
        }

        private void OnProximalRelease(InteractionData interactionData)
        {
            _isGrabbed = false;
            UpdateAppearance();
        }

        private void UpdateAppearance()
        {
            var material = GetComponent<Renderer>().material;

            if (_isGrabbed)
            {
                material.mainTexture = _selectedTexture;
                return;
            }

            if (_triggerCount > 0)
            {
                material.mainTexture = _hoverTexture;
                return;
            }

            material.mainTexture = _normalTexture;
        }
    }
}