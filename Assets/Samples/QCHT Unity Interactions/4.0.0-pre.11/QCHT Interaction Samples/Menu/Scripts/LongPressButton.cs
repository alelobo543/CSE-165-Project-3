// /******************************************************************************
//  * File: LongPressButton.cs
//  * Copyright (c) 2023 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
//  *
//  * Confidential and Proprietary - Qualcomm Technologies, Inc.
//  *
//  ******************************************************************************/

using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace QCHT.Samples.Menu
{
    public class LongPressButton : MonoBehaviour, IPointerDownHandler, IPointerUpHandler, IPointerExitHandler
    {
        [SerializeField] private Slider slider;
        [SerializeField] private Graphic graphic;
    
        [Tooltip("How long must pointer be down on this object to trigger a long press")]
        [SerializeField] private float durationThreshold = 3.0f;

        public UnityEvent OnLongPress = new UnityEvent();

        private bool _isPointerDown;
        private float _timePressStarted;

        public bool WasLongPressTriggered { get; protected set; }

        private void OnValidate() => slider = slider ? slider : GetComponent<Slider>();

        private void OnEnable()
        {
            slider.value = 0f;
            slider.interactable = true;
            graphic.raycastTarget = true;
        }

        private void OnDisable()
        {
            slider.value = 0f;
            slider.interactable = false;
            graphic.raycastTarget = false;
        }

        private void Update()
        {
            if (!_isPointerDown)
            {
                slider.value = 0f;
                return;
            }

            slider.value = (Time.time - _timePressStarted) / durationThreshold;

            if (Time.time - _timePressStarted > durationThreshold)
            {
                _isPointerDown = false;
                WasLongPressTriggered = true;
                OnLongPress.Invoke();
            }
        }
        
        public void OnPointerDown(PointerEventData eventData)
        {
            _timePressStarted = Time.time;
            _isPointerDown = true;
            WasLongPressTriggered = false;
        }

        public void OnPointerUp(PointerEventData eventData)
        {
            _isPointerDown = false;
        }
        
        public void OnPointerExit(PointerEventData eventData)
        {
            _isPointerDown = false;
        }
    }
}