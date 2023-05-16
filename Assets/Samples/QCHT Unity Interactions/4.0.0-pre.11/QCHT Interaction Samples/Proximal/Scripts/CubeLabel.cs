// /******************************************************************************
//  * File: CubeLabel.cs
//  * Copyright (c) 2023 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
//  *
//  * Confidential and Proprietary - Qualcomm Technologies, Inc.
//  *
//  ******************************************************************************/

using UnityEngine;

namespace QCHT.Samples.Proximal
{
    public class CubeLabel : MonoBehaviour
    {
        [SerializeField] private GameObject label;
        [SerializeField] private Collider objectCollider;
        [SerializeField] private float labelYOffset = 0.01f;

        public void ShowLabel(bool show) => label.SetActive(show);

        private void LateUpdate()
        {
            if (ReferenceEquals(objectCollider, null)) return;
            UpdateLabelPosition();
        }

        private void UpdateLabelPosition()
        {
            var bounds = objectCollider.bounds;
            var center = bounds.center;
            var size = bounds.size;
            label.transform.position = center + new Vector3(0, size.y / 2 + labelYOffset, 0);
        }
    }
}