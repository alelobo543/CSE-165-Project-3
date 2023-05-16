// /******************************************************************************
//  * File: LongPressToggle.cs
//  * Copyright (c) 2023 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
//  *
//  * Confidential and Proprietary - Qualcomm Technologies, Inc.
//  *
//  ******************************************************************************/

using UnityEngine;
using UnityEngine.Events;

namespace QCHT.Samples.Menu
{
    public class LongPressToggle : MonoBehaviour
    {
        [SerializeField] private LongPressButton longPressButton;
        [SerializeField] private LongPressToggleGroup toggleGroup;
        [SerializeField] private bool isOn;

        public UnityEvent<bool> OnToggleValueChanged = new UnityEvent<bool>();

        public bool IsOn
        {
            get => isOn;
            set => SetValue(value);
        }

        #region MonoBehaviour Functions

        private void OnValidate()
        {
            longPressButton = longPressButton ? longPressButton : GetComponent<LongPressButton>();
            toggleGroup = toggleGroup ? toggleGroup : GetComponentInParent<LongPressToggleGroup>();
        }

        private void OnEnable()
        {
            if (toggleGroup != null) toggleGroup.RegisterToggle(this);
            longPressButton.OnLongPress.AddListener(OnButtonPressed);
        }

        private void OnDisable()
        {
            if (toggleGroup != null) toggleGroup.UnRegisterToggle(this);
            longPressButton.OnLongPress.RemoveListener(OnButtonPressed);
        }

        private void Start() => longPressButton.enabled = !isOn;

        #endregion

        private void OnButtonPressed()
        {
            longPressButton.enabled = false;
            IsOn = true;
        }

        public void SetIsOnWithoutNotify(bool value) => SetValue(value, false);

        private void SetValue(bool value, bool sendCallback = true)
        {
            if (isOn == value)
                return;

            isOn = value;

            if (toggleGroup != null && toggleGroup.isActiveAndEnabled)
            {
                if (isOn)
                {
                    isOn = true;
                    toggleGroup.NotifyToggleOn(this, sendCallback);
                }
            }

            longPressButton.enabled = !isOn;

            if (sendCallback)
                OnToggleValueChanged.Invoke(isOn);
        }
    }
}