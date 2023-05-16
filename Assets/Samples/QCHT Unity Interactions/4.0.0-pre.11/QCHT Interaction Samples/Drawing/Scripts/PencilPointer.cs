// /******************************************************************************
//  * File: PencilPointer.cs
//  * Copyright (c) 2023 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
//  *
//  * Confidential and Proprietary - Qualcomm Technologies, Inc.
//  *
//  ******************************************************************************/

using UnityEngine;
using UnityEngine.InputSystem;

namespace QCHT.Samples.Drawing
{
    public class PencilPointer : MonoBehaviour
    {
        public InputAction PenDown;
        
        [Space]
        [SerializeField] private float minSizeMultiplier = 1f;
        [SerializeField] private float maxSizeMultiplier = 2f;
        [Space]
        [SerializeField] private ParticleSystem pointerParticles;
        [SerializeField] private ParticleSystem lineParticles;
        
        private float _referenceScale = 1f;

        private void OnEnable() => PenDown.Enable();
 
        private void OnDisable() => PenDown.Disable();
        
        public void SetColor(Color color)
        {
            var main = pointerParticles.main;
            main.startColor = color;
        }

        public void SetScale(float scale)
        {
            _referenceScale = scale;
        }

        public void SetLineParticles(ParticleSystem particles)
        {
            lineParticles = particles;
            var particleSystemTransform = particles.transform;
            particleSystemTransform.SetParent(transform);
            particleSystemTransform.localPosition = Vector3.zero;
        }

        public void DestroyLineParticles()
        {
            if (!lineParticles)
                return;
            
            Destroy(lineParticles.gameObject);
            lineParticles = null;
        }

        public void StartLineParticles()
        {
            if (lineParticles)
                lineParticles.Play();
        }

        public void StopLineParticles()
        {
            if (lineParticles)
                lineParticles.Stop();
        }

        public void UpdateScale()
        {
            var main = pointerParticles.main;
            main.startSize = minSizeMultiplier * _referenceScale;
        }

        public void Show()
        {
            pointerParticles.Play();
        }

        public void Hide()
        {
            pointerParticles.Stop();
        }
    }
}