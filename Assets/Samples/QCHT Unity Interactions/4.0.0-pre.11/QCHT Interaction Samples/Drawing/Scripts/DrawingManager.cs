// /******************************************************************************
//  * File: DrawingManager.cs
//  * Copyright (c) 2023 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
//  *
//  * Confidential and Proprietary - Qualcomm Technologies, Inc.
//  *
//  ******************************************************************************/

using UnityEngine;

namespace QCHT.Samples.Drawing
{
    public class DrawingManager : MonoBehaviour
    {
        public Pen Pen;

        #region Singleton

        private static DrawingManager s_instance;

        public static DrawingManager Instance
        {
            get
            {
                if (s_instance == null)
                    s_instance = FindObjectOfType<DrawingManager>();

                return s_instance;
            }
        }

        #endregion

        /// <summary>
        /// Sets the new brush descriptor to the current pen tool.
        /// </summary>
        /// <param name="brush"> The new brush descriptor. </param>
        public void ChangeBrush(BrushDescriptor brush)
        {
            if (!Pen)
                return;

            Pen.SetBrush(brush);
        }

        /// <summary>
        /// Sets the new width to the current pen tool.
        /// </summary>
        /// <param name="width"> The new width. </param>
        public void SetWidth(float width)
        {
            if (!Pen)
                return;

            Pen.SetWidth(width);
        }

        /// <summary>
        /// Sets the current drawing mode.
        /// Converts integer to drawing.
        /// </summary>
        public void SetDrawingMode(Pen.DrawingMode drawingMode)
        {
            if (!Pen)
                return;

            Pen.SetDrawingMode(drawingMode);
        }

        /// <summary>
        /// Undo the current pen line.
        /// </summary>
        public void Undo()
        {
            if (!Pen)
                return;

            Pen.Undo();
        }

        /// <summary>
        /// Redo the last removed pen line.
        /// </summary>
        public void Redo()
        {
            if (!Pen)
                return;

            Pen.Redo();
        }

        /// <summary>
        /// Clears all lines done with this pen.
        /// </summary>
        public void Clear()
        {
            if (!Pen)
                return;

            Pen.Clear();
        }
    }
}