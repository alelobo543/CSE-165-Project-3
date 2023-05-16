// /******************************************************************************
//  * File: QuitButtonBehaviour.cs
//  * Copyright (c) 2023 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
//  *
//  * Confidential and Proprietary - Qualcomm Technologies, Inc.
//  *
//  ******************************************************************************/

using System.Collections;
using UnityEngine.UI;
using UnityEngine;

namespace QCHT.Samples.Menu
{
    public class QuitButtonBehaviour : MonoBehaviour
    {
        [SerializeField] private float waitDuration = 3f;
        [SerializeField] private Text text;
        [SerializeField] private string quitButtonText;
        [SerializeField] private string quitConfirmPopUpText;

        private bool _isWaitingForConfirm;

        public void Start() => ActiveQuit();

        private void Update()
        {
#if ENABLE_LEGACY_INPUT_MANAGER
            if (Input.GetKeyDown(KeyCode.Escape))
            {
                Quit();
            }
#endif
        }

        public void OnButtonClick()
        {
            if (_isWaitingForConfirm)
            {
                Quit();
                return;
            }

            _isWaitingForConfirm = true;
            text.text = quitConfirmPopUpText;
            StartCoroutine(ResetQuitButton());
        }

        private void ActiveQuit() 
        {
            text.text = quitButtonText;
            _isWaitingForConfirm = false;
        }
        
        private IEnumerator ResetQuitButton()
        {
            yield return new WaitForSeconds(waitDuration);
            ActiveQuit();
        }
        
        private void Quit()
        {
#if UNITY_EDITOR
            UnityEditor.EditorApplication.isPlaying = false;
#else
            Application.Quit();
#endif
        }
    }
}