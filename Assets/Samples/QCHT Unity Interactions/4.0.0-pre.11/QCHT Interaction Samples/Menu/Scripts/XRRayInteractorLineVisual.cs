// /******************************************************************************
//  * File: XRRayInteractorLineVisual.cs
//  * Copyright (c) 2023 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
//  *
//  * Confidential and Proprietary - Qualcomm Technologies, Inc.
//  *
//  ******************************************************************************/

using System;

namespace UnityEngine.XR.Interaction.Toolkit
{
    [RequireComponent(typeof(LineRenderer))]
    [RequireComponent(typeof(XRRayInteractor))]
    public class XRRayInteractorLineVisual : MonoBehaviour
    {
        [SerializeField] private Gradient selectColorGradient = new Gradient
        {
            colorKeys = new[] { new GradientColorKey(Color.white, 0f), new GradientColorKey(Color.white, 1f) },
            alphaKeys = new[] { new GradientAlphaKey(0f, 0f), new GradientAlphaKey(1f, 1f) },
        };
        
        [SerializeField] private Gradient idleColorGradient = new Gradient
        {
            colorKeys = new[] { new GradientColorKey(Color.white, 0f), new GradientColorKey(Color.white, 1f) },
            alphaKeys = new[] { new GradientAlphaKey(0f, 0f), new GradientAlphaKey(.2f, 1f) },
        };
        
        [SerializeField, Range(0, 100)] private int lineQuality = 10;
        [SerializeField, Range(0, .05f)] private float lineWidthMultiplier = .01f;
        [SerializeField] public bool hideWhenNoHit;
        
        [Header("Bending")]
        [SerializeField] private bool bendEnabled = true;
        [SerializeField, Range(-.5f, .5f)] private float bendYRatio;
        [SerializeField] private float bendSpeed = 10f;

        private LineRenderer _lineRenderer;
        private XRRayInteractor _rayInteractor;
        private Collider _selectedCollider;

        private Vector3 _previousControlPoint;
        private Vector3 _selectedOffset;

        private Vector3[] _linePoints = Array.Empty<Vector3>();
        private Vector3[] _renderPoints = Array.Empty<Vector3>();
        private readonly Vector3[] _emptyArray = Array.Empty<Vector3>();
        
        #region MonoBehaviour Functions

        private void OnValidate() {
            if (Application.isPlaying && _renderPoints.Length != lineQuality) {
                _renderPoints = new Vector3[lineQuality];
            }
        }
        
        private void Awake() {
            _lineRenderer = GetComponent<LineRenderer>();
            _rayInteractor = GetComponent<XRRayInteractor>();
            _renderPoints = new Vector3[lineQuality];
            ClearLine();
        }

        private void OnEnable() {
            _lineRenderer.enabled = true;
            Application.onBeforeRender += OnBeforeRenderLineVisual;
            _rayInteractor.selectEntered.AddListener(OnSelectEntered);
            _rayInteractor.selectExited.AddListener(OnSelectExited);
        }

        private void OnDisable() {
            _lineRenderer.enabled = false;
            Application.onBeforeRender -= OnBeforeRenderLineVisual;
            _rayInteractor.selectEntered.RemoveListener(OnSelectEntered);
            _rayInteractor.selectExited.RemoveListener(OnSelectExited);
        }

        #endregion

        [BeforeRenderOrder(XRInteractionUpdateOrder.k_BeforeRenderLineVisual)]
        private void OnBeforeRenderLineVisual() => UpdateLine();
        
        #region Select
        
        private void OnSelectEntered(SelectEnterEventArgs selectEnterEvent) {
            _rayInteractor.GetLinePoints(ref _linePoints, out _);
            if (_rayInteractor.TryGetCurrent3DRaycastHit(out var raycastHit)) {
                _selectedCollider = raycastHit.collider;
                var baseInteractor = _rayInteractor as XRBaseInteractor;
                if (baseInteractor.interactionManager.TryGetInteractableForCollider(raycastHit.collider, out _, out var snapVolume)) {
                    if (snapVolume != null) {
                        _selectedOffset = _selectedCollider.transform.InverseTransformPoint(snapVolume.GetClosestPoint(raycastHit.point));
                    }
                }
                else
                    _selectedOffset = _selectedCollider.transform.InverseTransformPoint(raycastHit.point);
            }
        }

        private void OnSelectExited(SelectExitEventArgs selectExitEvent) {
            _selectedCollider = null;
            _selectedOffset = Vector3.zero;
        }
        
        #endregion
        
        private void UpdateLine() {
            _rayInteractor.GetLinePoints(ref _linePoints, out _);
            if (!_rayInteractor.enabled || _linePoints.Length < 2) {
                ClearLine();
                return;
            }
            
            var startPoint = _linePoints[0];
            var endPoint = _linePoints[_linePoints.Length - 1];
            var color = idleColorGradient;
            var bend = false;
            
            // Selecting
            if (_rayInteractor.hasSelection) {
                color = selectColorGradient;
                endPoint = _selectedCollider.transform.TransformPoint(_selectedOffset);
                bend = bendEnabled;
            }
            // Hovering
            else if (_rayInteractor.TryGetHitInfo(out var position, out _, out _, out _)) {
                endPoint = position;
                color = selectColorGradient;
                if (_rayInteractor.TryGetCurrent3DRaycastHit(out var raycastHit)) {
                    var baseInteractor = _rayInteractor as XRBaseInteractor;
                    if (baseInteractor.interactionManager.TryGetInteractableForCollider(raycastHit.collider, out _, out var snapVolume)) {
                        if (snapVolume != null) {
                            endPoint = snapVolume.GetClosestPoint(endPoint);
                            bend = bendEnabled;
                        }
                    }
                }
            }
            // No hit
            else if (hideWhenNoHit) {
                ClearLine();
                return;
            } 
            
            var controlPoint = GetControlPoint(startPoint, endPoint, bend);
            CalculateCurve(startPoint, controlPoint, endPoint);
            
            _lineRenderer.colorGradient = color;
            _lineRenderer.widthMultiplier = lineWidthMultiplier;
            _lineRenderer.positionCount = _renderPoints.Length;
            _lineRenderer.SetPositions(_renderPoints);
        }
        
        private void ClearLine() {
            _lineRenderer.positionCount = 0;
            _lineRenderer.SetPositions(_emptyArray);
        }
        
        private Vector3 GetControlPoint(Vector3 startPoint, Vector3 endPoint, bool bend) {
            var controlPoint = (startPoint + endPoint) * .5f;
            var finalControlPoint = controlPoint;

            if (bend) {
                controlPoint += Vector3.up * bendYRatio;
                finalControlPoint = _previousControlPoint != Vector3.zero
                    ? Vector3.Lerp(_previousControlPoint, controlPoint, Time.deltaTime * bendSpeed)
                    : controlPoint;
            }

            _previousControlPoint = finalControlPoint;

            return finalControlPoint;
        }
        
        private void CalculateCurve(Vector3 startPoint, Vector3 controlPoint, Vector3 endPoint) {
            for (var i = 1; i < _renderPoints.Length + 1; i++) {
                var t = i / (float) _renderPoints.Length;
                _renderPoints[i - 1] = CalculateQuadBezierPoint(t, startPoint, controlPoint, endPoint);
            }
        }
        
        private static Vector3 CalculateQuadBezierPoint(float t, Vector3 point0, Vector3 point1, Vector3 point2) {
            var u = 1 - t;
            var t2 = t * t;
            var u2 = u * u;
            var r = u2 * point0;
            r += 2 * u * t * point1;
            r += t2 * point2;
            return r;
        }
    }
}
