// /******************************************************************************
//  * File: SampleSettings.cs
//  * Copyright (c) 2023 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
//  *
//  * Confidential and Proprietary - Qualcomm Technologies, Inc.
//  *
//  ******************************************************************************/

using QCHT.Interactions.Hands;
using UnityEngine;

namespace QCHT.Samples.Menu
{
    [CreateAssetMenu(fileName = "NewSampleSettings", menuName = "QCHT/Samples/SampleSettings", order = 0)]
    public class SampleSettings : ScriptableObject
    {
        public string SceneName;
        public HandInteractionType HandType;
        public bool EnablePhysicRaycast;
    }
}