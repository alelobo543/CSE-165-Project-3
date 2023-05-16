// /******************************************************************************
//  * File: CurvedLineRendererPencil.cs
//  * Copyright (c) 2023 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
//  *
//  * Confidential and Proprietary - Qualcomm Technologies, Inc.
//  *
//  ******************************************************************************/

using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;

namespace QCHT.Samples.Drawing
{
    /// <summary>
    /// Pen tool which draws a smooth curved line renderer.
    /// </summary>
    public sealed class CurvedLineRendererPencil : Pen
    {
        [Header("Curve settings")]
        [SerializeField] private float distanceNewPoint = 0.1f;

        [SerializeField] private float lineSegmentSize = 0.08f;
        [SerializeField] private int cornerVertices = 1;
        [SerializeField] private int capVertices = 1;

        /// <summary>
        /// Current points of the current drawing curved line.
        /// </summary>
        private readonly List<Vector3> _currentLeftCurvedLinePoints = new List<Vector3>();

        private readonly List<Vector3> _currentRightCurvedLinePoints = new List<Vector3>();

        /// <summary>
        /// Designates the next point to validate in the curve.
        /// While the distance between the last and this point is under distanceNewPoint value,
        /// then this point is not frozen in the drawing curve.
        /// </summary>
        private Vector3 _nextLeftPoint;

        private Vector3 _nextRightPoint;

        private CurvedLineRenderer _currentLeftCurvedLineRenderer;
        private CurvedLineRenderer _currentRightCurvedLineRenderer;

        #region Pen Overrides

        protected override void OnPenDown(bool isLeft)
        {
            var curvedLineRenderer = InstantiateCurvedLine();

            if (isLeft)
            {
                _currentLeftCurvedLineRenderer = curvedLineRenderer;
                _currentLeftCurvedLinePoints.Clear();
                UpdateNextPointPosition(pencilLeftPointer, ref _nextLeftPoint);
                SaveNextPoint(_currentLeftCurvedLinePoints, _nextLeftPoint);
            }
            else
            {
                _currentRightCurvedLineRenderer = curvedLineRenderer;
                _currentRightCurvedLinePoints.Clear();
                UpdateNextPointPosition(pencilRightPointer, ref _nextRightPoint);
                SaveNextPoint(_currentRightCurvedLinePoints, _nextRightPoint);
            }
        }

        protected override void OnPenUp(bool isLeft)
        {
            // Do nothing here.
        }

        protected override void OnPenDrawingUpdate(bool isLeft)
        {
            var curvedLineRenderer = isLeft ? _currentLeftCurvedLineRenderer : _currentRightCurvedLineRenderer;
            var curvedLinePoints = isLeft ? _currentLeftCurvedLinePoints : _currentRightCurvedLinePoints;
            var pencilPointer = isLeft ? pencilLeftPointer : pencilRightPointer;
            var nextPosition = isLeft ? ref _nextLeftPoint : ref _nextRightPoint;

            UpdateNextPointPosition(pencilPointer, ref nextPosition);
            UpdateCurrentLinePoints(curvedLinePoints, nextPosition, distanceNewPoint);
            UpdateCurrentLineRenderer(curvedLineRenderer, curvedLinePoints, nextPosition);
        }

        protected override void OnPenClear()
        {
            // Do nothing here.
        }

        #endregion

        /// <summary>
        /// Instantiates a new drawing curved line.
        /// Stores it in the pencil history.
        /// </summary>
        private CurvedLineRenderer InstantiateCurvedLine()
        {
            var curveObj = new GameObject("CurvedLine");
            curveObj.transform.SetParent(transform);

            var curvedLineRenderer = curveObj.AddComponent<CurvedLineRenderer>();
            curvedLineRenderer.LineWidth = _width;
            curvedLineRenderer.LineSegmentWidth = lineSegmentSize;

            var lineRenderer = curvedLineRenderer.GetComponent<LineRenderer>();
            lineRenderer.startWidth = _width;
            lineRenderer.endWidth = _width;
            lineRenderer.material = _brush.Material;
            lineRenderer.numCornerVertices = cornerVertices;
            lineRenderer.numCapVertices = capVertices;
            lineRenderer.positionCount = 0;
            lineRenderer.motionVectorGenerationMode = MotionVectorGenerationMode.ForceNoMotion;
            lineRenderer.shadowCastingMode = ShadowCastingMode.Off;
            lineRenderer.receiveShadows = false;

            if (_brush.Type == BrushDescriptor.ColorType.PlainColor)
            {
                lineRenderer.startColor = _brush.Color;
                lineRenderer.endColor = _brush.Color;
            }
            else
            {
                lineRenderer.colorGradient = _brush.Gradient;
            }

            _pencilLinesHistory.Push(curveObj);

            return curvedLineRenderer;
        }

        /// <summary>
        /// Updates the next point position to the pointer position.
        /// </summary>
        private static void UpdateNextPointPosition(PencilPointer pencilPointer, ref Vector3 nextPoint)
        {
            nextPoint = pencilPointer.transform.position;
        }

        /// <summary>
        /// Stores the next point into the frozen positions table.
        /// </summary>
        private static void SaveNextPoint(List<Vector3> curvedLinePoints, Vector3 nextLinePoint)
        {
            curvedLinePoints.Add(nextLinePoint);
        }

        /// <summary>
        /// Updates the current line frozen points by checking the distance from the last and the next position.
        /// </summary>
        private static void UpdateCurrentLinePoints(List<Vector3> curvedLinePoints, Vector3 nextLinePoint,
            float distanceToNewPoint)
        {
            var lastPosition = curvedLinePoints[curvedLinePoints.Count - 1];

            if (Vector3.Distance(lastPosition, nextLinePoint) > distanceToNewPoint)
                SaveNextPoint(curvedLinePoints, nextLinePoint);
        }

        /// <summary>
        /// Created a concat table of the frozen positions and the potential next frozen position.
        /// Sends these positions to the curved line renderer.
        /// </summary>
        private static void UpdateCurrentLineRenderer(CurvedLineRenderer curvedLineRenderer,
            List<Vector3> curvedLinePoints, Vector3 nextPosition)
        {
            if (!curvedLineRenderer)
                return;

            var points = new Vector3[curvedLinePoints.Count + 1];

            for (var i = 0; i < curvedLinePoints.Count; i++)
            {
                points[i] = curvedLinePoints[i];
            }

            points[curvedLinePoints.Count] = nextPosition;

            curvedLineRenderer.SetPositions(points);
        }
    }
}