// /******************************************************************************
//  * File: SimpleBrushShader.shader
//  * Copyright (c) 2021 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
//  *
//  * Confidential and Proprietary - Qualcomm Technologies, Inc.
//  *
//  ******************************************************************************/

Shader "Qualcomm/Drawing/SimpleBrushShader"
{

    Properties
    {
        _MainTex ("Texture", 2D) = "white" {}
    }

    Category
    {
        Tags
        {
            "Queue"="Transparent" "IgnoreProjector"="True" "RenderType"="Transparent" "PreviewType"="Plane"
        }

        Blend SrcAlpha OneMinusSrcAlpha
        Cull Off
        Lighting Off
        ZWrite On

        SubShader
        {
            Pass
            {
                CGPROGRAM

            #include "UnityCG.cginc"

            #pragma vertex vert
            #pragma fragment frag
            
            struct vIn
            {
                float4 vertex : POSITION;
                float2 uv: TEXCOORD0;
                float4 color : COLOR;
            };
 
            struct v2f
            {
                float4 pos :SV_POSITION;
                float2 uv: TEXCOORD0;
                float4 color :COLOR;
            };

            sampler2D _MainTex;
            float4 _MainTex_ST;

            v2f vert(vIn v)
            {
                v2f o;
 
                o.pos = UnityObjectToClipPos(v.vertex);
                o.uv = TRANSFORM_TEX(v.uv, _MainTex);
                o.color = pow(v.color, 2.2); // fix linear to gamma
                return o;
            }
 
            float4 frag(v2f i) : COLOR
            {
                fixed4 tex = tex2D(_MainTex, i.uv);
                fixed4 color = tex * i.color;
                return color;
            }
 
            ENDCG

            }
        }
    }
}