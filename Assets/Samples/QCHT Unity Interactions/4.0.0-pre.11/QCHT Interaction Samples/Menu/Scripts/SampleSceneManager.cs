// /******************************************************************************
//  * File: SampleSceneManager.cs
//  * Copyright (c) 2023 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
//  *
//  * Confidential and Proprietary - Qualcomm Technologies, Inc.
//  *
//  ******************************************************************************/

using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation;

namespace QCHT.Samples.Menu
{
    public class SampleSceneManager : MonoBehaviour
    {
        [SerializeField]
        private SampleSettings startSample;

        private SampleSettings _currentSampleToLoad;
        private SampleSettings _currentSample;
        private Scene _currentScene;
        

        public void Start()
        {
            Screen.sleepTimeout = SleepTimeout.NeverSleep;
            if (startSample)
                LoadSample(startSample);
        }

        public void OnEnable()
        {
            SceneManager.sceneLoaded += OnSceneLoaded;
        }

        public void OnDisable()
        {
            SceneManager.sceneLoaded -= OnSceneLoaded;
        }
        
        public void Quit()
        {
#if UNITY_EDITOR
            UnityEditor.EditorApplication.isPlaying = false;
#else
            Application.Quit();
#endif
        }

        public void SwitchToScene(string name)
        {
            SceneManager.LoadScene(name);
        }

        #region Sample Loading

        /// <summary>
        /// Loads a sample scene and unload the current sample scene if exists.
        /// </summary>
        public void LoadSample(SampleSettings sample)
        {
            if (_currentSampleToLoad || sample.SceneName.Equals(_currentScene.name))
                return;

            // Unload current scene if exists
            if (_currentScene.IsValid() && _currentScene.isLoaded)
            {
                SceneManager.UnloadSceneAsync(_currentScene);
                _currentSample = null;
            }

            // Load the new sample scene by name
            _currentSampleToLoad = sample;
            SceneManager.LoadScene(sample.SceneName, LoadSceneMode.Additive);
        }

        private void OnSceneLoaded(Scene scene, LoadSceneMode sceneMode)
        {
#if UNITY_EDITOR
            if (sceneMode == LoadSceneMode.Single)
                RefreshXRDeviceSimulator();
#endif
            if (!_currentSampleToLoad || scene.name != _currentSampleToLoad.SceneName)
                return;

            _currentScene = scene;
            _currentSample = _currentSampleToLoad;
            _currentSampleToLoad = null;
        }

#if UNITY_EDITOR

        private static void RefreshXRDeviceSimulator()
        {
            var xrDeviceSimulator = FindObjectOfType<XRDeviceSimulator>();
            if (xrDeviceSimulator == null) return;
            xrDeviceSimulator.enabled = false;
            xrDeviceSimulator.enabled = true;
        }
#endif

        #endregion
    }
}