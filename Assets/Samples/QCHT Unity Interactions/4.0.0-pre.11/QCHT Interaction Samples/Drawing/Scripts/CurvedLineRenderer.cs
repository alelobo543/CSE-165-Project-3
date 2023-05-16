// /******************************************************************************
//  * File: CurvedLineRenderer.cs
//  * Copyright (c) 2023 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
//  *
//  * Confidential and Proprietary - Qualcomm Technologies, Inc.
//  *
//  ******************************************************************************/

using System;
using System.Collections.Generic;
using UnityEngine;

namespace QCHT.Samples.Drawing
{
    /// <summary>
    /// Changes the line renderer behaviour to draw a smooth line.
    /// </summary>
    [RequireComponent(typeof(LineRenderer))]
    public sealed class CurvedLineRenderer : MonoBehaviour
    {
        public float LineSegmentWidth = 0.15f;
        public float LineWidth = 0.1f;

        private Vector3[] _positions = Array.Empty<Vector3>();
        
        private static readonly AnimationCurve s_curveX = new AnimationCurve();
        private static readonly AnimationCurve s_curveY = new AnimationCurve();
        private static readonly AnimationCurve s_curveZ = new AnimationCurve();

        #region MonoBehaviour Functions

#if UNITY_EDITOR

        private void OnValidate()
        {
            UpdateLine();
        }

#endif

        #endregion

        /// <summary>
        /// Changes the line renderer positions.
        /// </summary>
        /// <param name="positions"> the new positions table. </param>
        public void SetPositions(Vector3[] positions)
        {
            _positions = positions;
            UpdateLine();
        }

        private void UpdateLine()
        {
            var smoothedPoints = Smooth(_positions, LineSegmentWidth);

            var lineRenderer = GetComponent<LineRenderer>();
            lineRenderer.positionCount = smoothedPoints.Length;
            lineRenderer.SetPositions(smoothedPoints);
            lineRenderer.startWidth = LineWidth;
            lineRenderer.endWidth = LineWidth;
        }

        private static Vector3[] Smooth(Vector3[] points, float stepSize)
        {
            var keysX = new Keyframe[points.Length];
            var keysY = new Keyframe[points.Length];
            var keysZ = new Keyframe[points.Length];

            for (var i = 0; i < points.Length; i++)
            {
                keysX[i] = new Keyframe(i, points[i].x);
                keysY[i] = new Keyframe(i, points[i].y);
                keysZ[i] = new Keyframe(i, points[i].z);
            }
            
            s_curveX.keys = keysX;
            s_curveY.keys = keysY;
            s_curveZ.keys = keysZ;

            for (var i = 0; i < points.Length; i++)
            {
                s_curveX.SmoothTangents(i, 0);
                s_curveY.SmoothTangents(i, 0);
                s_curveZ.SmoothTangents(i, 0);
            }

            var lineSegments = new List<Vector3>();

            for (var i = 0; i < points.Length; i++)
            {
                lineSegments.Add(points[i]);

                if (i + 1 >= points.Length)
                    continue;

                var distanceToNextPoint = Vector3.Distance(points[i], points[i + 1]);
                var nbSegments = (int) (distanceToNextPoint / stepSize);

                for (var j = 1; j < nbSegments; j++)
                {
                    var t = j / (float) nbSegments + i;
                    var segment = new Vector3(
                        s_curveX.Evaluate(t),
                        s_curveY.Evaluate(t),
                        s_curveZ.Evaluate(t));
                    lineSegments.Add(segment);
                }
            }

            return lineSegments.ToArray();
        }
    }
}