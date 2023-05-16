// /******************************************************************************
//  * File: BrushDescriptor.cs
//  * Copyright (c) 2023 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
//  *
//  * Confidential and Proprietary - Qualcomm Technologies, Inc.
//  *
//  ******************************************************************************/

using UnityEngine;

namespace QCHT.Samples.Drawing
{
    [CreateAssetMenu(menuName = "QCHT/Demo/Drawing/BrushDescriptor")]
    public class BrushDescriptor : ScriptableObject
    {
        public enum ColorType
        {
            PlainColor,
            Gradient
        }

        public Material Material;
        public ParticleSystem LineParticles;

        [Space]
        public ColorType Type;

        public Color Color;
        public Gradient Gradient;

        [Space] 
        public AudioClip StartDrawing;
    }
}