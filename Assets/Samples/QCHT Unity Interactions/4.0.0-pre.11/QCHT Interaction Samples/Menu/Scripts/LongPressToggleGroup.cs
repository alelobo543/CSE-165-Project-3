// /******************************************************************************
//  * File: LongPressToggleGroup.cs
//  * Copyright (c) 2023 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
//  *
//  * Confidential and Proprietary - Qualcomm Technologies, Inc.
//  *
//  ******************************************************************************/

using UnityEngine;
using System.Collections.Generic;

namespace QCHT.Samples.Menu
{
    public class LongPressToggleGroup : MonoBehaviour
    {
        // [SerializeField] private bool allowSwitchOff;

        private readonly List<LongPressToggle> _toggles = new List<LongPressToggle>();

        public void RegisterToggle(LongPressToggle toggle)
        {
            if (!_toggles.Contains(toggle))
                _toggles.Add(toggle);
        }

        public void UnRegisterToggle(LongPressToggle toggle)
        {
            if (_toggles.Contains(toggle))
                _toggles.RemoveAll(x => x == toggle);
        }

        public void NotifyToggleOn(LongPressToggle toggle, bool sendCallback = false)
        {
            if (!_toggles.Contains(toggle))
                return;

            foreach (var t in _toggles)
            {
                if (t == toggle)
                    continue;

                if (sendCallback)
                    t.IsOn = false;
                else
                    t.SetIsOnWithoutNotify(false);
            }
        }
    }
}