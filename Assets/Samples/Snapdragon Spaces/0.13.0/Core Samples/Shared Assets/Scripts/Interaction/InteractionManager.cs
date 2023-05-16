/******************************************************************************
 * File: InteractionManager.cs
 * Copyright (c) 2023 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
 *
 ******************************************************************************/

#if QCHT_UNITY_CORE
using QCHT.Interactions.Core;
#endif
#if AR_FOUNDATION_5_0_OR_NEWER
using Unity.XR.CoreUtils;
#endif
using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.InputSystem.Interactions;
using UnityEngine.XR;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.OpenXR;
using InputDevice = UnityEngine.XR.InputDevice;

namespace Qualcomm.Snapdragon.Spaces.Samples
{
	public enum InputType {
		HandTracking = 0,
		GazePointer = 1,
		ControllerPointer = 2
	}

	public enum XRControllerProfile {
		HostController = 0,
		XRControllers = 1
	}
	public class InteractionManager : MonoBehaviour
	{
		public GameObject HandTrackingPointer;
		public GameObject GazePointer;
		public GameObject DevicePointer;
		public InputActionReference SwitchInputAction;
		public InputType InputType { get; private set; }
		public Transform ArCameraTransform { get; private set; }

		public delegate void OnInputTypeSwitch(InputType inputType);

		public static OnInputTypeSwitch onInputTypeSwitch;
		protected virtual bool ResetSessionOriginOnStart => true;
		private XRControllerProfile _xrControllerProfile;
		private XRControllerManager _xrControllerManager;
		private bool _isSessionOriginMoved = false;
		private bool _isHandTrackingCompatible;
#if QCHT_UNITY_CORE
		private static XRHandTrackingManager _handTrackingManager;
#endif
		private const string _controllerTypePrefsKey = "Qualcomm.Snapdragon.Spaces.Samples.Prefs.ControllerType";


		public void OnEnable()
		{
			SwitchInputAction.action.performed += OnSwitchInput;
			InputDevices.deviceConnected += RegisterConnectedDevice;
			RegisterXRProfiles();
			_isHandTrackingCompatible = IsHandTrackingCompatible();
		}

		public void OnDisable()
		{
			SwitchInputAction.action.performed -= OnSwitchInput;
			InputDevices.deviceDisconnected -= RegisterConnectedDevice;
		}

		public void Start()
		{
			ArCameraTransform = OriginLocationUtility.GetOriginCamera().transform;
			_xrControllerManager ??= FindObjectOfType<XRControllerManager>(true);
			SendControllerProfileToManager(_xrControllerManager);

			int controllerType = PlayerPrefs.GetInt(_controllerTypePrefsKey, 0);
			SetControllerProfileType((InputType)controllerType);
		}


		public void Update() {
			if (ResetSessionOriginOnStart && !_isSessionOriginMoved && ArCameraTransform.position != Vector3.zero) {
				OffsetSessionOrigin();
				_isSessionOriginMoved = true;
			}
		}

		private void OnSwitchInput(InputAction.CallbackContext ctx) {
			if (ctx.interaction is TapInteraction)
			{
				SwitchInput();
			}
			if (ctx.interaction is HoldInteraction) {
				Quit();
			}
		}

		public void SwitchInput()
		{
			var newInputType = InputType + 1;
			var inputTypeCount = Enum.GetNames(typeof(InputType)).Length;
			if (newInputType < 0 || (int)newInputType >= inputTypeCount)
			{
				newInputType = 0;
			}
			SetControllerProfileType(newInputType);
		}

		private void SetControllerProfileType(InputType inputType)
		{
			// Checks if QCHT package is installed. If not, the Gaze Pointer will be the fallback.
			if (!_isHandTrackingCompatible)
			{
				InputType = inputType != InputType.HandTracking ? inputType : InputType.GazePointer;
			}
			else
			{
				InputType = inputType;
			}
			// Activates the Pointer used for interaction.
			switch (InputType)
			{
				case InputType.HandTracking:
				{
					HandTrackingPointer.SetActive(true);
					HandleHandTrackingDevices(true);
					GazePointer.SetActive(false);
					DevicePointer.SetActive(false);
					break;
				}
				case InputType.GazePointer:
				{
					var baseRuntimeFeature = OpenXRSettings.Instance.GetFeature<BaseRuntimeFeature>();
					if (baseRuntimeFeature) {
						baseRuntimeFeature.TryResetPose();
					}
					HandTrackingPointer.SetActive(false);
					HandleHandTrackingDevices(false);
					GazePointer.SetActive(true);
					DevicePointer.SetActive(false);
					break;
				}
				case InputType.ControllerPointer:
				{
					HandTrackingPointer.SetActive(false);
					HandleHandTrackingDevices(false);
					GazePointer.SetActive(false);
					DevicePointer.SetActive(true);
					break;
				}
			}
			// Sets the pointer type and saves it in the PlayerPrefs.
			int pointerType = GazePointer.activeSelf ? (int) InputType.GazePointer :
				DevicePointer.activeSelf ? (int) InputType.ControllerPointer :
				HandTrackingPointer.activeSelf ? (int) InputType.HandTracking : 0;
			PlayerPrefs.SetInt(_controllerTypePrefsKey, pointerType);
			onInputTypeSwitch?.Invoke(InputType);
		}

		private void HandleHandTrackingDevices(bool enable)
		{
#if QCHT_UNITY_CORE
			if(!_handTrackingManager && enable)
			{
				_handTrackingManager = XRHandTrackingManager.GetOrCreate(XRHandTrackingManager.DefaultLeftHandPrefab,XRHandTrackingManager.DefaultRightHandPrefab);
			}

			if (_handTrackingManager)
			{
				_handTrackingManager.enabled = enable;
			}
#endif
		}

		protected void OffsetSessionOrigin() {
#if AR_FOUNDATION_5_0_OR_NEWER
            XROrigin sessionOrigin = OriginLocationUtility.FindXROrigin();
#else
			ARSessionOrigin sessionOrigin = OriginLocationUtility.FindARSessionOrigin();
#endif
			sessionOrigin.transform.Rotate(0.0f, -ArCameraTransform.rotation.eulerAngles.y, 0.0f, Space.World);
			sessionOrigin.transform.position = -ArCameraTransform.position;
			// Also rotate the device pointers parent so that it has the same origin as the AR Camera.
			ResetPositionAndRotation(sessionOrigin.transform);
		}

		private void ResetPositionAndRotation(Transform newTransform) {
			switch (InputType)
			{
				case (InputType.ControllerPointer):
				{
					DevicePointer.transform.rotation = newTransform.rotation;
					switch (_xrControllerProfile) {
						case XRControllerProfile.XRControllers: {
							DevicePointer.transform.position = newTransform.position;
							break;
						}
					}
					break;
				}
				case (InputType.HandTracking):
				{
					HandTrackingPointer.transform.position = newTransform.position;
					HandTrackingPointer.transform.rotation = newTransform.rotation;
					break;
				}
			}
		}

		public void Quit() {
			SendHapticImpulse();
			Application.Quit();
		}

		public void SendHapticImpulse(float amplitude = 0.5f, float frequency = 60f, float duration = 0.1f) {
			if(InputType == InputType.ControllerPointer)
			{
				_xrControllerManager.SendHapticImpulse(amplitude, frequency, duration);
			}
		}

		private void RegisterXRProfiles() {
			List<InputDevice> inputDevices = new List<InputDevice>();
			InputDevices.GetDevices(inputDevices);
			foreach (var inputDevice in inputDevices) {
				RegisterConnectedDevice(inputDevice);
			}
		}

		private void RegisterConnectedDevice(InputDevice inputDevice)
		{
			_xrControllerProfile = inputDevice.name.Contains("Oculus") ? XRControllerProfile.XRControllers : XRControllerProfile.HostController;
		}

		private void SendControllerProfileToManager(XRControllerManager xrControllerManager) {
			if (xrControllerManager != null) {
				xrControllerManager.ActivateController(_xrControllerProfile);
			}
		}

		private bool IsHandTrackingCompatible()
		{
#if QCHT_UNITY_CORE
			// Returns ture only if QCHT package is in the project.
			return true;
#endif
			return false;
		}
	}
}
