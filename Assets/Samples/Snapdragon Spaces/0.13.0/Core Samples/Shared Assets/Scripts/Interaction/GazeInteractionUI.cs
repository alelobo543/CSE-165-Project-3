/******************************************************************************
 * File: GazeInteractionUI.cs
 * Copyright (c) 2023 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
 *
 ******************************************************************************/

using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using UnityEngine.XR.Interaction.Toolkit;

namespace Qualcomm.Snapdragon.Spaces.Samples
{
	public class GazeInteractionUI : MonoBehaviour
	{
		public float DefaultDistance = 1.0f;
		public Image ReticleOuterRing;
		public bool IsHovering => _isHovering;

		public Transform ReticleGameObject;

		[SerializeField]
		private XRGazeInteractor _xrGazeInteractor;
		private IPointerClickHandler _activeClickHandler;
		private bool _isHovering = false;
		private float _gazeTimerCurrent;

		private void Update()
		{
			UpdateGazeCounter();
		}

		private void UpdateGazeCounter()
		{
			if (_xrGazeInteractor.TryGetCurrentUIRaycastResult(out RaycastResult RaycastResult, out int raycastEndpointIndex))
			{
				SetPointerPosition(RaycastResult.worldPosition, RaycastResult.worldNormal);
				// Check if the button is enabled
				Button button = RaycastResult.gameObject.GetComponent<Button>();
				if (button != null)
				{
					if (!button.interactable)
					{
						_isHovering = false;
						return;
					}
				}
				if (_isHovering)
				{
					IPointerClickHandler clickHandler = RaycastResult.gameObject.GetComponentInParent<IPointerClickHandler>();
					GetPointerEventData(RaycastResult.worldPosition, out PointerEventData pointerEventData );
					_activeClickHandler = clickHandler;

					float gazeTimerDuration = _xrGazeInteractor.hoverTimeToSelect;
					if (_gazeTimerCurrent <= gazeTimerDuration)
					{
						_gazeTimerCurrent += Time.deltaTime;
						// Increase the fill amount by the normalized value (0.0 to 1.0)
						ReticleOuterRing.fillAmount = _gazeTimerCurrent / gazeTimerDuration;
					}

					if (ReticleOuterRing.fillAmount >= 1f)
					{
						_activeClickHandler.OnPointerClick(pointerEventData);
						ResetReticle();
						_isHovering = false;
					}
				}
			}
			else
			{
				var rayOriginTransform = _xrGazeInteractor.rayOriginTransform;
				SetPointerPosition(rayOriginTransform.position + rayOriginTransform.forward * DefaultDistance, -rayOriginTransform.forward);
			}
		}
		private void GetPointerEventData(in Vector2 RaycastPosition, out PointerEventData pointerEventData) {

			// Gets the Pointer Event Data from the Gaze Interactor position to test against UI.
			pointerEventData = new PointerEventData(EventSystem.current);
			pointerEventData.position = RaycastPosition;
		}

		private void SetPointerPosition(Vector3 position, Vector3 normal)
		{
			// Additionally offset the position on Z to avoid z-fighting/clipping
			ReticleGameObject.position = position + normal * 0.1f;
			ReticleGameObject.rotation = Quaternion.LookRotation(-normal);
		}

		public void Hover(bool isHovering)
		{
			_isHovering = isHovering;
			if (!isHovering)
			{
				ResetReticle();
			}
		}

		private void ResetReticle()
		{
			_gazeTimerCurrent = 0f;
			ReticleOuterRing.fillAmount = 0f;
		}
	}
}
