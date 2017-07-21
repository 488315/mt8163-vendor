/* Copyright Statement:
 *
 * This software/firmware and related documentation ("MediaTek Software") are
 * protected under relevant copyright laws. The information contained herein
 * is confidential and proprietary to MediaTek Inc. and/or its licensors.
 * Without the prior written permission of MediaTek inc. and/or its licensors,
 * any reproduction, modification, use or disclosure of MediaTek Software,
 * and information contained herein, in whole or in part, shall be strictly prohibited.
 */
/* MediaTek Inc. (C) 2010. All rights reserved.
 *
 * BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
 * THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
 * RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER ON
 * AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
 * NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
 * SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
 * SUPPLIED WITH THE MEDIATEK SOFTWARE, AND RECEIVER AGREES TO LOOK ONLY TO SUCH
 * THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. RECEIVER EXPRESSLY ACKNOWLEDGES
 * THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES
 * CONTAINED IN MEDIATEK SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR ANY MEDIATEK
 * SOFTWARE RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR
 * STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND
 * CUMULATIVE LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
 * AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
 * OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY RECEIVER TO
 * MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
 *
 * The following software/firmware and/or related documentation ("MediaTek Software")
 * have been modified by MediaTek Inc. All revisions are subject to any receiver's
 * applicable license agreements with MediaTek Inc.
 */

/********************************************************************************************
 *     LEGAL DISCLAIMER
 *
 *     (Header of MediaTek Software/Firmware Release or Documentation)
 *
 *     BY OPENING OR USING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
 *     THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE") RECEIVED
 *     FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON AN "AS-IS" BASIS
 *     ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES, EXPRESS OR IMPLIED,
 *     INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR
 *     A PARTICULAR PURPOSE OR NONINFRINGEMENT. NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY
 *     WHATSOEVER WITH RESPECT TO THE SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY,
 *     INCORPORATED IN, OR SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK
 *     ONLY TO SUCH THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
 *     NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S SPECIFICATION
 *     OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
 *
 *     BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE LIABILITY WITH
 *     RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE, AT MEDIATEK'S OPTION,
TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE, OR REFUND ANY SOFTWARE LICENSE
 *     FEES OR SERVICE CHARGE PAID BY BUYER TO MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
 *
 *     THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE WITH THE LAWS
 *     OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF LAWS PRINCIPLES.
 ************************************************************************************************/
#include <utils/Log.h>
#include <fcntl.h>
#include <math.h>

#include "camera_custom_nvram.h"
#include "camera_custom_sensor.h"
#include "image_sensor.h"
#include "kd_imgsensor_define.h"
#include "camera_AE_PLineTable_gc2235raw.h"
#include "camera_info_gc2235raw.h"
#include "camera_custom_AEPlinetable.h"
#include "camera_custom_tsf_tbl.h"


const NVRAM_CAMERA_ISP_PARAM_STRUCT CAMERA_ISP_DEFAULT_VALUE =
{{
    //Version
    Version: NVRAM_CAMERA_PARA_FILE_VERSION,

    //SensorId
    SensorId: SENSOR_ID,
    ISPComm:{
      {
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      }
    },
    ISPPca: {
#include INCLUDE_FILENAME_ISP_PCA_PARAM
    },
    ISPRegs:{
#include INCLUDE_FILENAME_ISP_REGS_PARAM
    },
    ISPMfbMixer:{{
      0x01FF0001, // MIX3_CTRL_0
      0x00FF0000, // MIX3_CTRL_1
      0xFFFF0000  // MIX3_SPARE
    }},
    ISPMulitCCM:{
      Poly22:{
        74820, // i4R_AVG                                                                                
        1, // i4R_STD                                                                                
        57964, // i4B_AVG                                                                                
        1, // i4B_STD                                                                                
        4095,      // i4R_MAX
        512,       // i4R_MIN
        4095,      // i4G_MAX
        512,       // i4G_MIN
        4095,      // i4B_MAX
        512,       // i4B_MIN
        { // i4P00[9]                                                                                    
            4400984, -1165453, -675531, -570609, 3580797, -450187, 135133, -1217109, 3641977
        },                                                                                               
        { // i4P10[9]                                                                                    
            0,  0, 0, 0,  0,  0, 0,   0, 0              
        },                                                                                               
        { // i4P01[9]                                                                                    
            0,  0, 0, 0, 0,  0, 0,  0,  0              
        },                                                                                               
        { // i4P20[9]                                                                                    
            0,  0,   0,  0,   0,  0, 0,  0,  0              
        },                                                                                               
        { // i4P11[9]                                                                                    
            0,  0,  0,  0,   0, 0, 0,  0,  0              
        },                                                                                               
        { // i4P02[9]                                                                                    
            0,    0,  0,  0,   0, 0,  0,    0,  0             
        }                                                                                                
            },
            AWBGain:{
                // Strobe						                        
		           {						                                
                    512,	// i4R				          
                    512,	// i4G				          
                    512	// i4B				            
		           },						                              
                // A						                            
                {						                                
                    512,	// i4R				              
                    595,	// i4G				              
                    1266	// i4B				              
		           },						                              
                // TL84						                          
		           {						                                
                    662,	// i4R				            
                    512,	// i4G				            
                    982	// i4B				            
		           },						                              
                // CWF						                          
                {						                                
                    812,	// i4R				            
                    512,	// i4G				            
                    1128	// i4B				            
		           },						                              
                // D65						                          
		           {						                                
                    777,	// i4R				            
                    512,	// i4G				            
                    581 // i4B	                        
		           },						                              
                // Reserved 1						                          
		           {						                                
                    512,	// i4R				            
                    512,	// i4G				            
                    512 // i4B	                        
		           },						                              
                // Reserved 2						                          
		           {						                                
                    512,	// i4R				            
                    512,	// i4G				            
                    512 // i4B	                        
		           },						                              
                // Reserved 3						                          
		           {						                                
                    512,	// i4R				            
                    512,	// i4G				            
                    512 // i4B	                        
		           } 						                              
            },
            Weight:{
    1, // Strobe
    1, // A
    1, // TL84
    1, // CWF
    1, // D65
    1, // Reserved 1
    1, // Reserved 2
    1  // Reserved 3
}
    },                                                                                                    
    //bInvokeSmoothCCM
    bInvokeSmoothCCM: MTRUE
}};                                                                                                      
                                                                                                         
const NVRAM_CAMERA_3A_STRUCT CAMERA_3A_NVRAM_DEFAULT_VALUE =                                             
{                                                                                                        
    NVRAM_CAMERA_3A_FILE_VERSION, // u4Version                                                           
    SENSOR_ID, // SensorId                                                                               
                                                                                                         
    // AE NVRAM                                                                                          
    {                                                                                                    
        // rDevicesInfo                                                                                  
        {                                                                                                
            1195,    // u4MinGain, 1024 base = 1x                                                        
            6144,    // u4MaxGain, 16x                                                                   
            83,    // u4MiniISOGain, ISOxx                                                              
            64,    // u4GainStepUnit, 1x/8                                                              
            42918,    // u4PreExpUnit                                                                       
            18,    // u4PreMaxFrameRate                                                                  
            42918,    // u4VideoExpUnit                                                                     
            19,    // u4VideoMaxFrameRate                                                                
            1024,    // u4Video2PreRatio, 1024 base = 1x                                                 
            42918,    // u4CapExpUnit                                                                       
            18,    // u4CapMaxFrameRate                                                                  
            1024,    // u4Cap2PreRatio, 1024 base = 1x                                                   
            42918,     // u4Video1ExpUnit
            19,     // u4Video1MaxFrameRate
            1024,   // u4Video12PreRatio, 1024 base = 1x
            42918,     // u4Video2ExpUnit
            18,     // u4Video2MaxFrameRate
            1024,   // u4Video22PreRatio, 1024 base = 1x
            42918,     // u4Custom1ExpUnit
            18,     // u4Custom1MaxFrameRate
            1024,   // u4Custom12PreRatio, 1024 base = 1x
            42918,     // u4Custom2ExpUnit
            18,     // u4Custom2MaxFrameRate
            1024,   // u4Custom22PreRatio, 1024 base = 1x
            42918,     // u4Custom3ExpUnit
            18,     // u4Custom3MaxFrameRate
            1024,   // u4Custom32PreRatio, 1024 base = 1x
            42918,     // u4Custom4ExpUnit
            18,     // u4Custom4MaxFrameRate
            1024,   // u4Custom42PreRatio, 1024 base = 1x
            42918,     // u4Custom5ExpUnit
            18,     // u4Custom5MaxFrameRate
            1024,   // u4Custom52PreRatio, 1024 base = 1x
            28,    // u4LensFno, Fno = 2.8                                                               
            350    // u4FocusLength_100x                                                                 
         },                                                                                              
         // rHistConfig                                                                                  
        {                                                                                                
            4, // 2,   // u4HistHighThres                                                                
            40,  // u4HistLowThres                                                                       
            2,   // u4MostBrightRatio                                                                    
            1,   // u4MostDarkRatio                                                                      
            160, // u4CentralHighBound                                                                   
            20,  // u4CentralLowBound                                                                    
            {240, 230, 220, 210, 200}, // u4OverExpThres[AE_CCT_STRENGTH_NUM]                            
            {62, 70, 82, 108, 141},  // u4HistStretchThres[AE_CCT_STRENGTH_NUM]                        
            {18, 22, 26, 30, 34}       // u4BlackLightThres[AE_CCT_STRENGTH_NUM]                         
        },                                                                                               
        // rCCTConfig                                                                                    
        {                                                                                                
            TRUE,            // bEnableBlackLight                                                        
            TRUE,            // bEnableHistStretch                                                       
            TRUE,           // bEnableAntiOverExposure                                                  
            TRUE,            // bEnableTimeLPF                                                           
            TRUE,            // bEnableCaptureThres                                                      
            TRUE,            // bEnableVideoThres                                                        
            TRUE,            // bEnableVideo1Thres                                                        
            TRUE,            // bEnableVideo2Thres                                                        
            TRUE,            // bEnableCustom1Thres                                                        
            TRUE,            // bEnableCustom2Thres                                                        
            TRUE,            // bEnableCustom3Thres                                                        
            TRUE,            // bEnableCustom4Thres                                                        
            TRUE,            // bEnableCustom5Thres                                                        
            TRUE,            // bEnableStrobeThres                                                       
            47,                // u4AETarget                                                             
            47,                // u4StrobeAETarget                                                       
                                                                                                         
            50,                // u4InitIndex                                                            
            4,                 // u4BackLightWeight                                                      
            32,                // u4HistStretchWeight                                                    
            4,                 // u4AntiOverExpWeight                                                    
            2,                 // u4BlackLightStrengthIndex                                              
            2, // 2,                 // u4HistStretchStrengthIndex                                       
            2,                 // u4AntiOverExpStrengthIndex                                             
            2,                 // u4TimeLPFStrengthIndex                                                 
            {1, 3, 5, 7, 8}, // u4LPFConvergeTable[AE_CCT_STRENGTH_NUM]                                  
            90,                // u4InDoorEV = 9.0, 10 base                                              
            5,               // i4BVOffset delta BV = -2.3                   
            64,                 // u4PreviewFlareOffset                                                  
            64,                 // u4CaptureFlareOffset                                                  
            3,                 // u4CaptureFlareThres                                                    
            64,                 // u4VideoFlareOffset                                                    
            3,                 // u4VideoFlareThres                                                      
            64,                 // u4CustomFlareOffset                                                    
            3,                 // u4CustomFlareThres                                                      
            64,                 // u4StrobeFlareOffset                                                   
            3,                 // u4StrobeFlareThres                                                     
            160,                 // u4PrvMaxFlareThres                                                   
            0,                 // u4PrvMinFlareThres                                                     
            160,                 // u4VideoMaxFlareThres                                                 
            0,                 // u4VideoMinFlareThres                                                   
            18,                // u4FlatnessThres              // 10 base for flatness condition.        
            75,                // u4FlatnessStrength                                                     
                        //rMeteringSpec
                        {
                                //rHS_Spec
                                {
                                        TRUE,//bEnableHistStretch           // enable histogram stretch
                                        1024,//u4HistStretchWeight          // Histogram weighting value
                                        40,//u4Pcent                      // 1%=10, 0~1000
                                        160,//u4Thd                        // 0~255
                                        75,//u4FlatThd                    // 0~255

                                        120,//u4FlatBrightPcent
                                        120,//u4FlatDarkPcent
                                        //sFlatRatio
                                        {
                                            1000, //i4X1
                                            1024,  //i4Y1
                                            2400, //i4X2
                                            0     //i4Y2
                                        },
                    TRUE, //bEnableGreyTextEnhance
                    1800, //u4GreyTextFlatStart, > sFlatRatio.i4X1, < sFlatRatio.i4X2
                    {
                        10,     //i4X1
                        1024,   //i4Y1
                        80,     //i4X2
                        0       //i4Y2
                    }
                                },
                                //rAOE_Spec
                                {
                                        TRUE,//bEnableAntiOverExposure
                                        1024,//u4AntiOverExpWeight
                                        10,//u4Pcent
                                        200,//u4Thd
                                        TRUE,//bEnableCOEP
                                        1,//u4COEPcent
                                        106,//u4COEThd
                                        0,  // u4BVCompRatio
                                        //sCOEYRatio;     // the outer y ratio
                                        {
                                               23,   //i4X1
                                                1024,  //i4Y1
                                                47,   //i4X2
                                                0     //i4Y2
                                        },
                                       //sCOEDiffRatio;  // inner/outer y difference ratio
                                        {
                                                1500, //i4X1
                                                0,    //i4Y1
                                                2100, //i4X2
                                                1024   //i4Y2
                                        }
                                },
                                //rABL_Spec
                                {
                                        TRUE,//bEnableBlackLigh
                                        1024,//u4BackLightWeigh
                                        400,//u4Pcent
                                        22,//u4Thd,
                                        255, // center luminance
                                        256, // final target limitation, 256/128 = 2x
                                        //sFgBgEVRatio
                                        {
                                                2200, //i4X1
                                                0,    //i4Y1
                                                4000, //i4X2
                                                1024   //i4Y2
                                        },
                                        //sBVRatio
                                        {
                                                3800,//i4X1
                                                0,   //i4Y1
                                                5000,//i4X2
                                                1024  //i4Y2
                                        }
                                },
                                //rNS_Spec
                                {
                                        TRUE, // bEnableNightScene
                                        5,    //u4Pcent
                                        174,  //u4Thd
                                        72,   //u4FlatThd
                                        200,  //u4BrightTonePcent
                                        90,   //u4BrightToneThdMul;      // bright tone THD 1x=1024, m_u4AETarget*u4BrightToneThdMul/1024
                                        500,  //u4LowBndPcent
                                        5,    //u4LowBndThdMul, <1024, u4AETarget*u4LowBndThdMul/1024
                                        20,    //u4LowBndThdLimitMul, <1024, u4AETarget*u4LowBndThdLimitMul/1024

                                        50,  //u4FlatBrightPcent;
                                        300,   //u4FlatDarkPcent;
                                        //sFlatRatio
                                        {
                                                1200, //i4X1
                                                1024, //i4Y1
                                                2400,//i4X2
                                                0    //i4Y2
                                        },
                                        //sBVRatio
                                        {
                                                -500, //i4X1
                                                1024,  //i4Y1
                                                2000, //i4X2
                                                0     //i4Y2
                                        },
                                        TRUE, // bEnableNightSkySuppresion
                                        //sSkyBVRatio
                                        {
                                                -4000, //i4X1
                                                1024, //i4X2
                                                -2000,  //i4Y1
                                                0     //i4Y2
                                        }
                            },
                            // rTOUCHFD_Spec
                            {
                                40,
                                50,
                                40,
                                50,
                                3,
                                120,
                                80,
                            }
                        }, //End rMeteringSpec
                        // rFlareSpec
                        {
                            {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                            {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                            96,
                            48,
                            0,
                            4,
                            0,
                            1800,
                            0,
                        },
                        //rAEMoveRatio =
                        {
                            100, //u4SpeedUpRatio
                            100, //u4GlobalRatio
                            190, //u4Bright2TargetEnd
                            20,   //u4Dark2TargetStart
                            90, //u4B2TEnd
                            70,  //u4B2TStart
                            60,  //u4D2TEnd
                            90,  //u4D2TStart
                        },

                        //rAEVideoMoveRatio =
                        {
                            100, //u4SpeedUpRatio
                            100, //u4GlobalRatio
                            150,  //u4Bright2TargetEnd
                            20,    //u4Dark2TargetStart
                            90, //u4B2TEnd
                            40,  //u4B2TStart
                            40,  //u4D2TEnd
                            90,  //u4D2TStart
                        },
                        //rAEVideo1MoveRatio =
                        {
                            100, //u4SpeedUpRatio
                            100, //u4GlobalRatio
                            150,  //u4Bright2TargetEnd
                            20,    //u4Dark2TargetStart
                            90, //u4B2TEnd
                            40,  //u4B2TStart
                            40,  //u4D2TEnd
                            90,  //u4D2TStart
                        },
                        //rAEVideo2MoveRatio =
                        {
                            100, //u4SpeedUpRatio
                            100, //u4GlobalRatio
                            150,  //u4Bright2TargetEnd
                            20,    //u4Dark2TargetStart
                            90, //u4B2TEnd
                            40,  //u4B2TStart
                            40,  //u4D2TEnd
                            90,  //u4D2TStart
                        },
                        //rAECustom1MoveRatio =
                        {
                            100, //u4SpeedUpRatio
                            100, //u4GlobalRatio
                            150,  //u4Bright2TargetEnd
                            20,    //u4Dark2TargetStart
                            90, //u4B2TEnd
                            40,  //u4B2TStart
                            40,  //u4D2TEnd
                            90,  //u4D2TStart
                        },
                        //rAECustom2MoveRatio =
                        {
                            100, //u4SpeedUpRatio
                            100, //u4GlobalRatio
                            150,  //u4Bright2TargetEnd
                            20,    //u4Dark2TargetStart
                            90, //u4B2TEnd
                            40,  //u4B2TStart
                            40,  //u4D2TEnd
                            90,  //u4D2TStart
                        },
                        //rAECustom3MoveRatio =
                        {
                            100, //u4SpeedUpRatio
                            100, //u4GlobalRatio
                            150,  //u4Bright2TargetEnd
                            20,    //u4Dark2TargetStart
                            90, //u4B2TEnd
                            40,  //u4B2TStart
                            40,  //u4D2TEnd
                            90,  //u4D2TStart
                        },
                        //rAECustom4MoveRatio =
                        {
                            100, //u4SpeedUpRatio
                            100, //u4GlobalRatio
                            150,  //u4Bright2TargetEnd
                            20,    //u4Dark2TargetStart
                            90, //u4B2TEnd
                            40,  //u4B2TStart
                            40,  //u4D2TEnd
                            90,  //u4D2TStart
                        },
                        //rAECustom5MoveRatio =
                        {
                            100, //u4SpeedUpRatio
                            100, //u4GlobalRatio
                            150,  //u4Bright2TargetEnd
                            20,    //u4Dark2TargetStart
                            90, //u4B2TEnd
                            40,  //u4B2TStart
                            40,  //u4D2TEnd
                            90,  //u4D2TStart
                        },

                        //rAEFaceMoveRatio =
                        {
                            100, //u4SpeedUpRatio
                            100, //u4GlobalRatio
                            190,  //u4Bright2TargetEnd
                            10,    //u4Dark2TargetStart
                            80, //u4B2TEnd
                            40,  //u4B2TStart
                            30,  //u4D2TEnd
                            60,  //u4D2TStart
                        },

                        //rAETrackingMoveRatio =
                        {
                            100, //u4SpeedUpRatio
                            100, //u4GlobalRatio
                            190,  //u4Bright2TargetEnd
                            10,    //u4Dark2TargetStart
                            80, //u4B2TEnd
                            40,  //u4B2TStart
                            30,  //u4D2TEnd
                            60,  //u4D2TStart
                        },
            //rAEAOENVRAMParam =
            {
                1,      // i4AOEStrengthIdx: 0 / 1 / 2
                130,    // u4BVCompRatio
                {
                {
                     47,  //u4Y_Target
                     10,  //u4AOE_OE_percent
                     160,  //u4AOE_OEBound
                     10,    //u4AOE_DarkBound
                     950,    //u4AOE_LowlightPrecent
                     1,    //u4AOE_LowlightBound
                     135,    //u4AOESceneLV_L
                     170,    //u4AOESceneLV_H
                     40,    //u4AOE_SWHdrLE_Bound
                },
                {
                     47,  //u4Y_Target
                     10,  //u4AOE_OE_percent
                     180,  //u4AOE_OEBound
                     15,    //u4AOE_DarkBound
                     950,    //u4AOE_LowlightPrecent
                     3,    //u4AOE_LowlightBound
                     135,    //u4AOESceneLV_L
                     170,    //u4AOESceneLV_H
                     40,    //u4AOE_SWHdrLE_Bound
                },
                {
                     47,  //u4Y_Target
                     10,  //u4AOE_OE_percent
                     200,  //u4AOE_OEBound
                     25,    //u4AOE_DarkBound
                     950,    //u4AOE_LowlightPrecent
                     8,    //u4AOE_LowlightBound
                     135,    //u4AOESceneLV_L
                     170,    //u4AOESceneLV_H
                     40,    //u4AOE_SWHdrLE_Bound
                }
              }
          }
        }
    },                                                                                                   
   {	
    // AWB NVRAM
   {	
	// AWB calibration data							
	{		
		// rUnitGain (unit gain: 1.0 = 512)						
		{						
			0,	// i4R		
			0,	// i4G				
			0	// i4B				
		},			
		// rGoldenGain (golden sample gain: 1.0 = 512)					
		{						
			0,	// i4R				
			0,	// i4G				
			0	// i4B				
		},						
		// rTuningUnitGain (Tuning sample unit gain: 1.0 = 512)						
		{						
			0,	// i4R				
			0,	// i4G				
			0	// i4B				
		},						
		// rD65Gain (D65 WB gain: 1.0 = 512)		
		{						
			777,	// i4R				
			512,	// i4G				
			581	// i4B				
		}						
	},							
	// Original XY coordinate of AWB light source				
	{							
		// Strobe			
		{		
			0,	// i4X	
			0	// i4Y		
		},	
		// Horizon		
		{		
		-407,	// i4X
		-181	// i4Y	
		},	
		// A	
		{					
			-334,	// i4X	
			-223	    // i4Y	
		},	
		// TL84			
		{			
			-146,	// i4X		
			-335	// i4Y		
		},		
		// CWF				
		{					
			-121,	// i4X	
			-462	// i4Y	
		},			
		// DNP						
		{		
			-23,	// i4X		
			-266	// i4Y		
		},			
		// D65	
		{						
			107,	// i4X			
			-200	// i4Y			
		},		
		// DF		
		{		
			-19,    // i4X
			-286	// i4Y	
		}				
	},
	// Rotated XY coordinate of AWB light source	
	{							                                
		// Strobe						                        
		{						                                
			0,     // i4X				              
			0	    // i4Y				              
		},						                              
		// Horizon						                      
		{						                                
			-418,	// i4X				                  
			-152	// i4Y				                  
		},						                              
		// A						                            
		{						                                
			-348,	// i4X				                    
			-199	// i4Y				                    
		},						                              
		// TL84						                          
		{						                                
			-169,	// i4X				                
			-323	// i4Y				                
		},						                              
		// CWF						                          
		{						                                
			-153,	// i4X				                  
			-452	// i4Y				                  
		},						                              
		// DNP						                          
		{						                                
			-42,	// i4X				                  
			-263	// i4Y				                  
		},						                              
		// D65						                          
		{						                                
			93,	// i4X				                    
			-207	// i4Y				                  
		},						                              
		// DF						                            
		{						                                
			-39,	// i4X				                    
			-284	// i4Y				                      
		}						                                
	},							                              
	// AWB gain of AWB light source							  
	{							                                
		// Strobe						                        
		{						                                
			512,	// i4R				          
			512,	// i4G				          
			512	// i4B				            
		},						                              
		// Horizon						                      
		{						                                
			512,	// i4R				            
			696,	// i4G				            
			1543	// i4B				            
		},						                              
		// A						                            
		{						                                
			512,	// i4R				              
			595,	// i4G				              
			1266	// i4B				              
		},						                              
		// TL84						                          
		{						                                
			662,	// i4R				            
			512,	// i4G				            
			982	// i4B				            
		},						                              
		// CWF						                          
		{						                                
			812,	// i4R				            
			512,	// i4G				            
			1128	// i4B				            
		},						                              
		// DNP						                          
		{						                                
			712,	// i4R				            
			512,	// i4G				            
			758	// i4B				              
		},						                              
		// D65						                          
		{						                                
			777,	// i4R				            
			512,	// i4G				            
			581	// i4B				              
		},						                              
		// DF						                            
		{						                                
			735,	// i4R				              
			512,	// i4G				              
			774	// i4B				                
		}						                                
	},							                              
	// Rotation matrix parameter							    
	{							                                
		4,	// i4RotationAngle					              
		255,	// i4Cos					                      
		18	// i4Sin					                        
	},							                              
	// Daylight locus parameter							      
	{							                                
		-136,	// i4SlopeNumerator		
		128	// i4SlopeDenominator		
	},							                              
 // Predictor gain
 {
                        // i4PrefRatio100
                        151,

                        // DaylightLocus_L
                        {
                            777,    // i4R
                            512,    // i4G
                            581     // i4B
                        },
                        // DaylightLocus_H
                        {
                            575,    // i4R
                            512,    // i4G
                            820     // i4B
                        },
                        // Temporal General
                        {
                            777,    // i4R
                            512,    // i4G
                            581     // i4B
                        }
 },
	// AWB light area							                
	{							                                
		// Strobe						                        
		{						                                
			0,	// StrobeRightBound				            
			0,	// StrobeLeftBound				          
			0,	// StrobeUpperBound				          
			0	// StrobeLowerBound				          
		},						                              
		// Tungsten						                      
		{						                                
			-241,	// TungRightBound				            
			-818,	// TungLeftBound				            
			-117,	// TungUpperBound				            
			-261	// TungLowerBound				            
		},						                              
		// Warm fluorescent						              
		{						                                
			-241,	// WFluoRightBound				          
			-818,	// WFluoLeftBound				            
			-261,	// WFluoUpperBound				          
			-482	// WFluoLowerBound				          
		},						                              
		// Fluorescent						                  
		{						                                
			-74,	// FluoRightBound				            
			-241,	// FluoLeftBound				            
			-167,	// FluoUpperBound				            
			-404	// FluoLowerBound				            
		},						                              
		// CWF						                          
		{						                                
			-107,	// CWFRightBound				            
			-241,	// CWFLeftBound				              
			-404,	// CWFUpperBound				            
			-497	// CWFLowerBound				            
		},						                              
		// Daylight						                      
		{						                                
			123,	// DayRightBound				              
			-74,	// DayLeftBound				              
			-167,	// DayUpperBound				            
			-404	// DayLowerBound				            
		},						                              
		// Shade						                        
		{						                                
			453,	// ShadeRightBound				          
			123,	// ShadeLeftBound				              
			-167,	// ShadeUpperBound				          
			-305	// ShadeLowerBound				          
		},						                              
		// Daylight Fluorescent						          
		{						                                
			123,	// DFRightBound				                
			-107,	// DFLeftBound				                
			-404,	// DFUpperBound				                
			-497	// DFLowerBound				                  
		}						                                
	},							                              
	// PWB light area							                
	{							                                
		// Reference area						                
		{						                                
			453,	// PRefRightBound				            
			-818,	// PRefLeftBound				            
			-92,	// PRefUpperBound				            
			-497	// PRefLowerBound				            
		},						                              
		// Daylight						                      
		{						                                
			148,	// PDayRightBound				            
			-74,	// PDayLeftBound				            
			-167,	// PDayUpperBound				            
			-404	// PDayLowerBound				            
		},						                              
		// Cloudy daylight						              
		{						                                
			248,	// PCloudyRightBound				        
			73,	// PCloudyLeftBound				            
			-167,	// PCloudyUpperBound				        
			-404	// PCloudyLowerBound				        
		},						                              
		// Shade						                        
		{						                                
			348,	// PShadeRightBound				          
			73,	// PShadeLeftBound				          
			-167,	// PShadeUpperBound				          
			-404	// PShadeLowerBound				          
		},						                              
		// Twilight						                      
		{						                                
			-74,	// PTwiRightBound				            
			-234,	// PTwiLeftBound				            
			-167,	// PTwiUpperBound				            
			-404	// PTwiLowerBound				            
		},						                              
		// Fluorescent						                  
		{						                                
			143,	// PFluoRightBound				          
			-269,	// PFluoLeftBound				            
			-157,	// PFluoUpperBound				          
			-502	// PFluoLowerBound				          
		},						                              
		// Warm fluorescent						              
		{						                                
			-248,	// PWFluoRightBound				          
			-448,	// PWFluoLeftBound				          
			-157,	// PWFluoUpperBound				          
			-502	// PWFluoLowerBound				          
		},						                              
		// Incandescent						                  
		{						                                
			-248,	// PIncaRightBound				          
			-448,	// PIncaLeftBound				            
			-167,	// PIncaUpperBound				          
			-404	// PIncaLowerBound				          
		},						                              
		// Gray World						                    
		{						                                
			5000,	// PGWRightBound				            
			-5000,	// PGWLeftBound				            
			5000,	// PGWUpperBound				            
			-5000	// PGWLowerBound				            
		}						                                
	},							                              
	// PWB default gain							              
	{							                                
		// Daylight						                      
		{						                                
			811,	// PWB_Day_R				                
			512,	// PWB_Day_G				                
			695	// PWB_Day_B				                  
		},						                              
		// Cloudy daylight						              
		{						                                
			947,	// PWB_Cloudy_R				              
			512,	// PWB_Cloudy_G				              
			581	// PWB_Cloudy_B				                
		},						                              
		// Shade						                        
		{						                                
			1009,	// PWB_Shade_R				              
			512,	// PWB_Shade_G				              
			540	// PWB_Shade_B				                
		},						                              
		// Twilight						                      
		{						                                
			638,	// PWB_Twi_R				                
			512,	// PWB_Twi_G				                
			916	// PWB_Twi_B				                
		},						                              
		// Fluorescent						                  
		{						                                
			762,	// PWB_Fluo_R				                
			512,	// PWB_Fluo_G				                
			849	// PWB_Fluo_B				                  
		},						                              
		// Warm fluorescent						              
		{						                                
			533,	// PWB_WFluo_R				              
			512,	// PWB_WFluo_G				              
			1282	// PWB_WFluo_B				              
		},						                              
		// Incandescent						                  
		{						                                
			500,	// PWB_Inca_R				                
			512,	// PWB_Inca_G				                
			1213	// PWB_Inca_B				                
		},						                              
		// Gray World						                    
		{						                                
			512,	// PWB_GW_R				                  
			512,	// PWB_GW_G				                  
			512	// PWB_GW_B				                    
		}						                                
	},							                              
	// AWB preference color							          
	{							                                
		// Tungsten						                      
		{						                                
			60,	// TUNG_SLIDER				                
			4360	// TUNG_OFFS				                
		},						                              
		// Warm fluorescent						              
		{						                                
			50,	// WFluo_SLIDER				                
			4560	// WFluo_OFFS				                
		},						                              
		// Shade						                        
		{						                                
			50,	// Shade_SLIDER				                
			910	// Shade_OFFS				                  
		},						                              
		// Preference gain: strobe						      
		{						                                
			512,	// PRF_STROBE_R				              
			512,	// PRF_STROBE_G				              
			512	// PRF_STROBE_B				                
		},						                              
		// Preference gain: tungsten						    
		{						                                
			512,	// PRF_TUNG_R				                
			512,	// PRF_TUNG_G				                
			512	// PRF_TUNG_B				                  
		},						                              
		// Preference gain: warm fluorescent				
		{						                                
			512,	// PRF_WFluo_R				              
			512,	// PRF_WFluo_G				              
			512	// PRF_WFluo_B				                
		},						                              
		// Preference gain: fluorescent						  
		{						                                
			512,	// PRF_Fluo_R				                
			512,	// PRF_Fluo_G				                
			512	// PRF_Fluo_B				                  
		},						                              
		// Preference gain: CWF						          
		{						                                
			512,	// PRF_CWF_R				                
			512,	// PRF_CWF_G				                
			512	// PRF_CWF_B				                  
		},						                              
		// Preference gain: daylight						    
		{						                                
			512,	// PRF_Day_R				                
			512,	// PRF_Day_G				                
			512	// PRF_Day_B				                  
		},						                              
		// Preference gain: shade						        
		{						                                
			512,	// PRF_Shade_R				              
			512,	// PRF_Shade_G				              
			512	// PRF_Shade_B				                
		},						                              
		// Preference gain: daylight fluorescent		
		{						                                
			512,	// PRF_DF_R				                  
			512,	// PRF_DF_G				                  
			512	// PRF_DF_B				                    
		}						                                
	},							                              

                // Algorithm Tuning Paramter
                {
                    // AWB Backup Enable
                    0,

                    // AWB LSC Gain
                    {
                        575,        // i4R
                        512,        // i4G
                        820         // i4B
                    },
                    // Parent block weight parameter
                    {
                        1,      // bEnable
                        6           // i4ScalingFactor: [6] 1~12, [7] 1~6, [8] 1~3, [9] 1~2, [>=10]: 1
                    },
                    // AWB LV threshold for predictor
                    {
                            115,    // i4InitLVThr_L
                            155,    // i4InitLVThr_H
                            100      // i4EnqueueLVThr
                    },
                    // AWB number threshold for temporal predictor
                    {
                            65,     // i4Neutral_ParentBlk_Thr
                        //LV0  1    2    3    4    5    6    7    8    9    10   11   12   13   14   15   16   17   18
                        {  100,   100,   100,   100,   100,   100,   100,   100,   100,   50,   25,   2,   2,   2,   2,   2,   2,   2,   2}  // (%) i4CWFDF_LUTThr
                    },
                    // AWB light neutral noise reduction for outdoor
                    {
                        //LV0  1    2    3    4    5    6    7    8    9    10   11   12   13   14   15   16   17   18
                        // Non neutral
		                { 3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  5,  10,  10,  10,  10,  10,  10,  10,  10},  // (%)
		                // Flurescent
		                { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  5,  10,  10,  10,  10,  10,  10,  10,  10},  // (%)
		                // CWF
		                { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  5,  10,  10,  10,  10,  10,  10,  10,  10},  // (%)
		                // Daylight
		                { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  2,  2,  2,  2,  2,  2,  2,  2},  // (%)
		                // DF
		                { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  5,  10,  10,  10,  10,  10,  10,  10,  10},  // (%)
                    },
                    // AWB feature detection
                    {
                        // Sunset Prop
                        {
                            1,      // i4Enable
                            140,        // i4LVThr
                            {
                                -10,   // i4Sunset_BoundXr_Thr
                                -263     // i4Sunset_BoundYr_Thr
                           },
                            10,         // i4SunsetCountThr
                            0,          // i4SunsetCountRatio_L
                            171         // i4SunsetCountRatio_H
                        },

                        // Shade F Detection
                        {
                            1,      // i4Enable
                            115,        // i4LVThr
                            {
                                -137,   // i4BoundXrThr
                                -207    // i4BoundYrThr
                            },
                            128         // i4DaylightProb
                        },

                        // Shade CWF Detection
                        {
                            1,        // i4Enable
                            110,         // i4LVThr
                            {
                                -153,   // i4BoundXrThr
                                -452    // i4BoundYrThr
                            },
                            128         // i4DaylightProb
                        },

                        // Low CCT
                        {
                            1,           // i4Enable
                            256,       // i4SpeedRatio
                              {
                               -438,       // i4BoundXrThr
                               482         // i4BoundYrThr
                              }
                        }
                    },

                    // AWB Gain Limit
                    {
                    // rNormalLowCCT
                    {
                        1,  // Gain Limit Enable
                        1536     // Gain ratio
                    },
                    // rPrefLowCCT
                    {
                        1,  // Gain Limit Enable
                        1536     // Gain ratio
                    }
                },

                    // AWB non-neutral probability for spatial and temporal weighting look-up table (Max: 100; Min: 0)
                    {
                        //LV0   1    2    3    4    5    6    7    8    9    10   11   12   13   14   15   16   17   18
		                { 100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  70,  30,  20,  10,  0,  0,  0,  0}
                    },

                    // AWB daylight locus probability look-up table (Max: 100; Min: 0)
                    {   //LV0    1     2     3      4     5     6     7     8      9      10     11    12   13     14    15   16    17    18
		                { 100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  50,  25,  0,  0,  0,  0}, // Strobe
		                { 100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  50,  25,  0,  0,  0}, // Tungsten
		                { 100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  50,  25,  0,  0,  0}, // Warm fluorescent
		                { 100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  70,  40,  20,  0,  0,  0}, // Fluorescent
		                { 100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  50,  25,  12,  0,  0,  0,  0}, // CWF
		                { 100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  50,  50,  30,  20}, // Daylight
		                { 100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  50,  25,  0,  0,  0,  0}, // Shade
		                { 100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  50,  25,  12,  0,  0,  0,  0} // Daylight fluorescent
    		        }
                },

	// CCT estimation							                
	{							                                
		// CCT						                          
		{						                                
			2300,	// CCT0				                      
			2850,	// CCT1				                      
			3750,	// CCT2				                      
			5100,	// CCT3				                      
			6500     // CCT4				                      
		},						                              
		// Rotated X coordinate						          
		{						                                
			-511,	// RotatedXCoordinate0				      
			-441,	// RotatedXCoordinate1				      
			-262,	// RotatedXCoordinate2				      
			-135,	// RotatedXCoordinate3				      
			0  // RotatedXCoordinate4				        
		}						                                
	}							                                
},
    // AWB NVRAM
   {	
	// AWB calibration data							
	{		
		// rUnitGain (unit gain: 1.0 = 512)						
		{						
			0,	// i4R		
			0,	// i4G				
			0	// i4B				
		},			
		// rGoldenGain (golden sample gain: 1.0 = 512)					
		{						
			0,	// i4R				
			0,	// i4G				
			0	// i4B				
		},						
		// rTuningUnitGain (Tuning sample unit gain: 1.0 = 512)						
		{						
			0,	// i4R				
			0,	// i4G				
			0	// i4B				
		},						
		// rD65Gain (D65 WB gain: 1.0 = 512)		
		{						
			777,	// i4R				
			512,	// i4G				
			581	// i4B				
		}						
	},							
	// Original XY coordinate of AWB light source				
	{							
		// Strobe			
		{		
			0,	// i4X	
			0	// i4Y		
		},	
		// Horizon		
		{		
		-407,	// i4X
		-181	// i4Y	
		},	
		// A	
		{					
			-334,	// i4X	
			-223	    // i4Y	
		},	
		// TL84			
		{			
			-146,	// i4X		
			-335	// i4Y		
		},		
		// CWF				
		{					
			-121,	// i4X	
			-462	// i4Y	
		},			
		// DNP						
		{		
			-23,	// i4X		
			-266	// i4Y		
		},			
		// D65	
		{						
			107,	// i4X			
			-200	// i4Y			
		},		
		// DF		
		{		
			-19,    // i4X
			-286	// i4Y	
		}				
	},
	// Rotated XY coordinate of AWB light source	
	{							                                
		// Strobe						                        
		{						                                
			0,     // i4X				              
			0	    // i4Y				              
		},						                              
		// Horizon						                      
		{						                                
			-418,	// i4X				                  
			-152	// i4Y				                  
		},						                              
		// A						                            
		{						                                
			-348,	// i4X				                    
			-199	// i4Y				                    
		},						                              
		// TL84						                          
		{						                                
			-169,	// i4X				                
			-323	// i4Y				                
		},						                              
		// CWF						                          
		{						                                
			-153,	// i4X				                  
			-452	// i4Y				                  
		},						                              
		// DNP						                          
		{						                                
			-42,	// i4X				                  
			-263	// i4Y				                  
		},						                              
		// D65						                          
		{						                                
			93,	// i4X				                    
			-207	// i4Y				                  
		},						                              
		// DF						                            
		{						                                
			-39,	// i4X				                    
			-284	// i4Y				                      
		}						                                
	},							                              
	// AWB gain of AWB light source							  
	{							                                
		// Strobe						                        
		{						                                
			512,	// i4R				          
			512,	// i4G				          
			512	// i4B				            
		},						                              
		// Horizon						                      
		{						                                
			512,	// i4R				            
			696,	// i4G				            
			1543	// i4B				            
		},						                              
		// A						                            
		{						                                
			512,	// i4R				              
			595,	// i4G				              
			1266	// i4B				              
		},						                              
		// TL84						                          
		{						                                
			662,	// i4R				            
			512,	// i4G				            
			982	// i4B				            
		},						                              
		// CWF						                          
		{						                                
			812,	// i4R				            
			512,	// i4G				            
			1128	// i4B				            
		},						                              
		// DNP						                          
		{						                                
			712,	// i4R				            
			512,	// i4G				            
			758	// i4B				              
		},						                              
		// D65						                          
		{						                                
			777,	// i4R				            
			512,	// i4G				            
			581	// i4B				              
		},						                              
		// DF						                            
		{						                                
			735,	// i4R				              
			512,	// i4G				              
			774	// i4B				                
		}						                                
	},							                              
	// Rotation matrix parameter							    
	{							                                
		4,	// i4RotationAngle					              
		255,	// i4Cos					                      
		18	// i4Sin					                        
	},							                              
	// Daylight locus parameter							      
	{							                                
		-136,	// i4SlopeNumerator		
		128	// i4SlopeDenominator		
	},							                              
 // Predictor gain
 {
                        // i4PrefRatio100
                        151,

                        // DaylightLocus_L
                        {
                            777,    // i4R
                            512,    // i4G
                            581     // i4B
                        },
                        // DaylightLocus_H
                        {
                            575,    // i4R
                            512,    // i4G
                            820     // i4B
                        },
                        // Temporal General
                        {
                            777,    // i4R
                            512,    // i4G
                            581     // i4B
                        }
 },
	// AWB light area							                
	{							                                
		// Strobe						                        
		{						                                
			0,	// StrobeRightBound				            
			0,	// StrobeLeftBound				          
			0,	// StrobeUpperBound				          
			0	// StrobeLowerBound				          
		},						                              
		// Tungsten						                      
		{						                                
			-241,	// TungRightBound				            
			-818,	// TungLeftBound				            
			-117,	// TungUpperBound				            
			-261	// TungLowerBound				            
		},						                              
		// Warm fluorescent						              
		{						                                
			-241,	// WFluoRightBound				          
			-818,	// WFluoLeftBound				            
			-261,	// WFluoUpperBound				          
			-482	// WFluoLowerBound				          
		},						                              
		// Fluorescent						                  
		{						                                
			-74,	// FluoRightBound				            
			-241,	// FluoLeftBound				            
			-167,	// FluoUpperBound				            
			-404	// FluoLowerBound				            
		},						                              
		// CWF						                          
		{						                                
			-107,	// CWFRightBound				            
			-241,	// CWFLeftBound				              
			-404,	// CWFUpperBound				            
			-497	// CWFLowerBound				            
		},						                              
		// Daylight						                      
		{						                                
			123,	// DayRightBound				              
			-74,	// DayLeftBound				              
			-167,	// DayUpperBound				            
			-404	// DayLowerBound				            
		},						                              
		// Shade						                        
		{						                                
			453,	// ShadeRightBound				          
			123,	// ShadeLeftBound				              
			-167,	// ShadeUpperBound				          
			-305	// ShadeLowerBound				          
		},						                              
		// Daylight Fluorescent						          
		{						                                
			123,	// DFRightBound				                
			-107,	// DFLeftBound				                
			-404,	// DFUpperBound				                
			-497	// DFLowerBound				                  
		}						                                
	},							                              
	// PWB light area							                
	{							                                
		// Reference area						                
		{						                                
			453,	// PRefRightBound				            
			-818,	// PRefLeftBound				            
			-92,	// PRefUpperBound				            
			-497	// PRefLowerBound				            
		},						                              
		// Daylight						                      
		{						                                
			148,	// PDayRightBound				            
			-74,	// PDayLeftBound				            
			-167,	// PDayUpperBound				            
			-404	// PDayLowerBound				            
		},						                              
		// Cloudy daylight						              
		{						                                
			248,	// PCloudyRightBound				        
			73,	// PCloudyLeftBound				            
			-167,	// PCloudyUpperBound				        
			-404	// PCloudyLowerBound				        
		},						                              
		// Shade						                        
		{						                                
			348,	// PShadeRightBound				          
			73,	// PShadeLeftBound				          
			-167,	// PShadeUpperBound				          
			-404	// PShadeLowerBound				          
		},						                              
		// Twilight						                      
		{						                                
			-74,	// PTwiRightBound				            
			-234,	// PTwiLeftBound				            
			-167,	// PTwiUpperBound				            
			-404	// PTwiLowerBound				            
		},						                              
		// Fluorescent						                  
		{						                                
			143,	// PFluoRightBound				          
			-269,	// PFluoLeftBound				            
			-157,	// PFluoUpperBound				          
			-502	// PFluoLowerBound				          
		},						                              
		// Warm fluorescent						              
		{						                                
			-248,	// PWFluoRightBound				          
			-448,	// PWFluoLeftBound				          
			-157,	// PWFluoUpperBound				          
			-502	// PWFluoLowerBound				          
		},						                              
		// Incandescent						                  
		{						                                
			-248,	// PIncaRightBound				          
			-448,	// PIncaLeftBound				            
			-167,	// PIncaUpperBound				          
			-404	// PIncaLowerBound				          
		},						                              
		// Gray World						                    
		{						                                
			5000,	// PGWRightBound				            
			-5000,	// PGWLeftBound				            
			5000,	// PGWUpperBound				            
			-5000	// PGWLowerBound				            
		}						                                
	},							                              
	// PWB default gain							              
	{							                                
		// Daylight						                      
		{						                                
			811,	// PWB_Day_R				                
			512,	// PWB_Day_G				                
			695	// PWB_Day_B				                  
		},						                              
		// Cloudy daylight						              
		{						                                
			947,	// PWB_Cloudy_R				              
			512,	// PWB_Cloudy_G				              
			581	// PWB_Cloudy_B				                
		},						                              
		// Shade						                        
		{						                                
			1009,	// PWB_Shade_R				              
			512,	// PWB_Shade_G				              
			540	// PWB_Shade_B				                
		},						                              
		// Twilight						                      
		{						                                
			638,	// PWB_Twi_R				                
			512,	// PWB_Twi_G				                
			916	// PWB_Twi_B				                
		},						                              
		// Fluorescent						                  
		{						                                
			762,	// PWB_Fluo_R				                
			512,	// PWB_Fluo_G				                
			849	// PWB_Fluo_B				                  
		},						                              
		// Warm fluorescent						              
		{						                                
			533,	// PWB_WFluo_R				              
			512,	// PWB_WFluo_G				              
			1282	// PWB_WFluo_B				              
		},						                              
		// Incandescent						                  
		{						                                
			500,	// PWB_Inca_R				                
			512,	// PWB_Inca_G				                
			1213	// PWB_Inca_B				                
		},						                              
		// Gray World						                    
		{						                                
			512,	// PWB_GW_R				                  
			512,	// PWB_GW_G				                  
			512	// PWB_GW_B				                    
		}						                                
	},							                              
	// AWB preference color							          
	{							                                
		// Tungsten						                      
		{						                                
			60,	// TUNG_SLIDER				                
			4360	// TUNG_OFFS				                
		},						                              
		// Warm fluorescent						              
		{						                                
			50,	// WFluo_SLIDER				                
			4560	// WFluo_OFFS				                
		},						                              
		// Shade						                        
		{						                                
			50,	// Shade_SLIDER				                
			910	// Shade_OFFS				                  
		},						                              
		// Preference gain: strobe						      
		{						                                
			512,	// PRF_STROBE_R				              
			512,	// PRF_STROBE_G				              
			512	// PRF_STROBE_B				                
		},						                              
		// Preference gain: tungsten						    
		{						                                
			512,	// PRF_TUNG_R				                
			512,	// PRF_TUNG_G				                
			512	// PRF_TUNG_B				                  
		},						                              
		// Preference gain: warm fluorescent				
		{						                                
			512,	// PRF_WFluo_R				              
			512,	// PRF_WFluo_G				              
			512	// PRF_WFluo_B				                
		},						                              
		// Preference gain: fluorescent						  
		{						                                
			512,	// PRF_Fluo_R				                
			512,	// PRF_Fluo_G				                
			512	// PRF_Fluo_B				                  
		},						                              
		// Preference gain: CWF						          
		{						                                
			512,	// PRF_CWF_R				                
			512,	// PRF_CWF_G				                
			512	// PRF_CWF_B				                  
		},						                              
		// Preference gain: daylight						    
		{						                                
			512,	// PRF_Day_R				                
			512,	// PRF_Day_G				                
			512	// PRF_Day_B				                  
		},						                              
		// Preference gain: shade						        
		{						                                
			512,	// PRF_Shade_R				              
			512,	// PRF_Shade_G				              
			512	// PRF_Shade_B				                
		},						                              
		// Preference gain: daylight fluorescent		
		{						                                
			512,	// PRF_DF_R				                  
			512,	// PRF_DF_G				                  
			512	// PRF_DF_B				                    
		}						                                
	},							                              

                // Algorithm Tuning Paramter
                {
                    // AWB Backup Enable
                    0,

                    // AWB LSC Gain
                    {
                        575,        // i4R
                        512,        // i4G
                        820         // i4B
                    },
                    // Parent block weight parameter
                    {
                        1,      // bEnable
                        6           // i4ScalingFactor: [6] 1~12, [7] 1~6, [8] 1~3, [9] 1~2, [>=10]: 1
                    },
                    // AWB LV threshold for predictor
                    {
                            115,    // i4InitLVThr_L
                            155,    // i4InitLVThr_H
                            100      // i4EnqueueLVThr
                    },
                    // AWB number threshold for temporal predictor
                    {
                            65,     // i4Neutral_ParentBlk_Thr
                        //LV0  1    2    3    4    5    6    7    8    9    10   11   12   13   14   15   16   17   18
                        {  100,   100,   100,   100,   100,   100,   100,   100,   100,   50,   25,   2,   2,   2,   2,   2,   2,   2,   2}  // (%) i4CWFDF_LUTThr
                    },
                    // AWB light neutral noise reduction for outdoor
                    {
                        //LV0  1    2    3    4    5    6    7    8    9    10   11   12   13   14   15   16   17   18
                        // Non neutral
		                { 3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  5,  10,  10,  10,  10,  10,  10,  10,  10},  // (%)
		                // Flurescent
		                { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  5,  10,  10,  10,  10,  10,  10,  10,  10},  // (%)
		                // CWF
		                { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  5,  10,  10,  10,  10,  10,  10,  10,  10},  // (%)
		                // Daylight
		                { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  2,  2,  2,  2,  2,  2,  2,  2},  // (%)
		                // DF
		                { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  5,  10,  10,  10,  10,  10,  10,  10,  10},  // (%)
                    },
                    // AWB feature detection
                    {
                        // Sunset Prop
                        {
                            1,      // i4Enable
                            140,        // i4LVThr
                            {
                                -10,   // i4Sunset_BoundXr_Thr
                                -263     // i4Sunset_BoundYr_Thr
                           },
                            10,         // i4SunsetCountThr
                            0,          // i4SunsetCountRatio_L
                            171         // i4SunsetCountRatio_H
                        },

                        // Shade F Detection
                        {
                            1,      // i4Enable
                            115,        // i4LVThr
                            {
                                -137,   // i4BoundXrThr
                                -207    // i4BoundYrThr
                            },
                            128         // i4DaylightProb
                        },

                        // Shade CWF Detection
                        {
                            1,        // i4Enable
                            110,         // i4LVThr
                            {
                                -153,   // i4BoundXrThr
                                -452    // i4BoundYrThr
                            },
                            128         // i4DaylightProb
                        },

                        // Low CCT
                        {
                            1,           // i4Enable
                            256,       // i4SpeedRatio
                              {
                               -438,       // i4BoundXrThr
                               482         // i4BoundYrThr
                              }
                        }
                    },

                    // AWB Gain Limit
                    {
                    // rNormalLowCCT
                    {
                        1,  // Gain Limit Enable
                        1536     // Gain ratio
                    },
                    // rPrefLowCCT
                    {
                        1,  // Gain Limit Enable
                        1536     // Gain ratio
                    }
                },

                    // AWB non-neutral probability for spatial and temporal weighting look-up table (Max: 100; Min: 0)
                    {
                        //LV0   1    2    3    4    5    6    7    8    9    10   11   12   13   14   15   16   17   18
		                { 100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  70,  30,  20,  10,  0,  0,  0,  0}
                    },

                    // AWB daylight locus probability look-up table (Max: 100; Min: 0)
                    {   //LV0    1     2     3      4     5     6     7     8      9      10     11    12   13     14    15   16    17    18
		                { 100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  50,  25,  0,  0,  0,  0}, // Strobe
		                { 100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  50,  25,  0,  0,  0}, // Tungsten
		                { 100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  50,  25,  0,  0,  0}, // Warm fluorescent
		                { 100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  70,  40,  20,  0,  0,  0}, // Fluorescent
		                { 100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  50,  25,  12,  0,  0,  0,  0}, // CWF
		                { 100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  50,  50,  30,  20}, // Daylight
		                { 100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  50,  25,  0,  0,  0,  0}, // Shade
		                { 100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  50,  25,  12,  0,  0,  0,  0} // Daylight fluorescent
    		        }
                },

	// CCT estimation							                
	{							                                
		// CCT						                          
		{						                                
			2300,	// CCT0				                      
			2850,	// CCT1				                      
			3750,	// CCT2				                      
			5100,	// CCT3				                      
			6500     // CCT4				                      
		},						                              
		// Rotated X coordinate						          
		{						                                
			-511,	// RotatedXCoordinate0				      
			-441,	// RotatedXCoordinate1				      
			-262,	// RotatedXCoordinate2				      
			-135,	// RotatedXCoordinate3				      
			0  // RotatedXCoordinate4				        
		}						                                
	}							                                
}							                                
},
        // Flash AWB NVRAM
        {
            #include INCLUDE_FILENAME_FLASH_AWB_PARA
        },
                                               
	{0}  //FIXED                                  
};                                             

#include INCLUDE_FILENAME_ISP_LSC_PARAM                                                                        
//};  //  namespace                                                                                            
const CAMERA_TSF_TBL_STRUCT CAMERA_TSF_DEFAULT_VALUE =                                                         
{
        {
                0,  // isTsfEn
        2,  // tsfCtIdx
        {20, 2000, -110, -110, 512, 512, 512, 0}    // rAWBInput[8]
    },

#include INCLUDE_FILENAME_TSF_PARA
#include INCLUDE_FILENAME_TSF_DATA
};

const NVRAM_CAMERA_FEATURE_STRUCT CAMERA_FEATURE_DEFAULT_VALUE =
{
#include INCLUDE_FILENAME_FEATURE_PARA
};

typedef NSFeature::RAWSensorInfo<SENSOR_ID> SensorInfoSingleton_T;


namespace NSFeature {
  template <>
  UINT32
  SensorInfoSingleton_T::
  impGetDefaultData(CAMERA_DATA_TYPE_ENUM const CameraDataType, VOID*const pDataBuf, UINT32 const size) const
  {
    UINT32 dataSize[CAMERA_DATA_TYPE_NUM] = {sizeof(NVRAM_CAMERA_ISP_PARAM_STRUCT),
        sizeof(NVRAM_CAMERA_3A_STRUCT),
        sizeof(NVRAM_CAMERA_SHADING_STRUCT),
        sizeof(NVRAM_LENS_PARA_STRUCT),
        sizeof(AE_PLINETABLE_T),
        0,
        sizeof(CAMERA_TSF_TBL_STRUCT),
        0,
        sizeof(NVRAM_CAMERA_FEATURE_STRUCT)
    };

    if (CameraDataType > CAMERA_NVRAM_DATA_FEATURE || NULL == pDataBuf || (size < dataSize[CameraDataType]))
    {
      return 1;
    }

    switch(CameraDataType)
    {
      case CAMERA_NVRAM_DATA_ISP:
        memcpy(pDataBuf,&CAMERA_ISP_DEFAULT_VALUE,sizeof(NVRAM_CAMERA_ISP_PARAM_STRUCT));
        break;
      case CAMERA_NVRAM_DATA_3A:
        memcpy(pDataBuf,&CAMERA_3A_NVRAM_DEFAULT_VALUE,sizeof(NVRAM_CAMERA_3A_STRUCT));
        break;
      case CAMERA_NVRAM_DATA_SHADING:
        memcpy(pDataBuf,&CAMERA_SHADING_DEFAULT_VALUE,sizeof(NVRAM_CAMERA_SHADING_STRUCT));
        break;
      case CAMERA_DATA_AE_PLINETABLE:
        memcpy(pDataBuf,&g_PlineTableMapping,sizeof(AE_PLINETABLE_T));
        break;
      case CAMERA_DATA_TSF_TABLE:
        memcpy(pDataBuf,&CAMERA_TSF_DEFAULT_VALUE,sizeof(CAMERA_TSF_TBL_STRUCT));
        break;
      case CAMERA_NVRAM_DATA_FEATURE:
        memcpy(pDataBuf,&CAMERA_FEATURE_DEFAULT_VALUE,sizeof(NVRAM_CAMERA_FEATURE_STRUCT));
        break;
      default:
        break;
    }
    return 0;
  }};  //  NSFeature


