/******************************************************************************
 * File: XRHandTrackingPointersManager.cs
 * Copyright (c) 2023 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
 *
 ******************************************************************************/

using UnityEngine;
using UnityEngine.InputSystem;

namespace Qualcomm.Snapdragon.Spaces.Samples
{
	public class XRHandTrackingPointersManager : MonoBehaviour
	{
		[SerializeField]
		private InputAction leftTrackingState;
		[SerializeField]
		private InputAction rightTrackingState;
		[SerializeField]
		private GameObject leftHandXRController;
		[SerializeField]
		private GameObject rightHandXRController;
		[SerializeField]
		private InteractionManager InteractionManager;
		private float _timer;

		private void OnEnable()
		{
			leftTrackingState.Enable();
			rightTrackingState.Enable();
		}

		private void OnDisable()
		{
			leftTrackingState.Disable();
			rightTrackingState.Disable();
		}

		private void Update()
		{
			leftHandXRController.SetActive(leftTrackingState.IsInProgress());
			rightHandXRController.SetActive(rightTrackingState.IsInProgress());
			if (leftTrackingState.IsInProgress() || rightTrackingState.IsInProgress())
			{
				_timer = 0f;
			}
			else
			{
				if (_timer > 10f)
				{
					_timer = 0f;
					InteractionManager.SwitchInput();
				}
				_timer += Time.deltaTime;
			}
		}
	}
}
