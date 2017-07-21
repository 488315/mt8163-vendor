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

#ifndef _CAMERA_AE_PLINETABLE_GC2235_RAW_H
#define _CAMERA_AE_PLINETABLE_GC2235_RAW_H

#include "camera_custom_AEPlinetable.h"
static strEvPline sPreviewPLineTable_60Hz =
{
{
    {987,1200,1032, 0, 0, 0},  //TV = 9.98(22 lines)  AV=2.97  SV=4.97  BV=7.98
    {1030,1216,1024, 0, 0, 0},  //TV = 9.92(23 lines)  AV=2.97  SV=4.98  BV=7.91
    {1115,1200,1032, 0, 0, 0},  //TV = 9.81(25 lines)  AV=2.97  SV=4.97  BV=7.81
    {1201,1200,1024, 0, 0, 0},  //TV = 9.70(27 lines)  AV=2.97  SV=4.96  BV=7.71
    {1287,1200,1024, 0, 0, 0},  //TV = 9.60(29 lines)  AV=2.97  SV=4.96  BV=7.61
    {1373,1200,1024, 0, 0, 0},  //TV = 9.51(31 lines)  AV=2.97  SV=4.96  BV=7.52
    {1459,1216,1024, 0, 0, 0},  //TV = 9.42(33 lines)  AV=2.97  SV=4.98  BV=7.41
    {1587,1200,1024, 0, 0, 0},  //TV = 9.30(36 lines)  AV=2.97  SV=4.96  BV=7.31
    {1673,1216,1024, 0, 0, 0},  //TV = 9.22(38 lines)  AV=2.97  SV=4.98  BV=7.22
    {1802,1200,1032, 0, 0, 0},  //TV = 9.12(41 lines)  AV=2.97  SV=4.97  BV=7.12
    {1931,1200,1032, 0, 0, 0},  //TV = 9.02(44 lines)  AV=2.97  SV=4.97  BV=7.02
    {2102,1184,1032, 0, 0, 0},  //TV = 8.89(48 lines)  AV=2.97  SV=4.95  BV=6.91
    {2231,1200,1024, 0, 0, 0},  //TV = 8.81(51 lines)  AV=2.97  SV=4.96  BV=6.82
    {2403,1200,1024, 0, 0, 0},  //TV = 8.70(55 lines)  AV=2.97  SV=4.96  BV=6.71
    {2575,1200,1024, 0, 0, 0},  //TV = 8.60(59 lines)  AV=2.97  SV=4.96  BV=6.61
    {2746,1200,1024, 0, 0, 0},  //TV = 8.51(63 lines)  AV=2.97  SV=4.96  BV=6.52
    {2961,1200,1024, 0, 0, 0},  //TV = 8.40(68 lines)  AV=2.97  SV=4.96  BV=6.41
    {3133,1200,1032, 0, 0, 0},  //TV = 8.32(72 lines)  AV=2.97  SV=4.97  BV=6.32
    {3390,1200,1024, 0, 0, 0},  //TV = 8.20(78 lines)  AV=2.97  SV=4.96  BV=6.22
    {3648,1184,1032, 0, 0, 0},  //TV = 8.10(84 lines)  AV=2.97  SV=4.95  BV=6.12
    {3905,1200,1024, 0, 0, 0},  //TV = 8.00(90 lines)  AV=2.97  SV=4.96  BV=6.01
    {4163,1200,1024, 0, 0, 0},  //TV = 7.91(96 lines)  AV=2.97  SV=4.96  BV=5.92
    {4463,1200,1024, 0, 0, 0},  //TV = 7.81(103 lines)  AV=2.97  SV=4.96  BV=5.82
    {4806,1200,1024, 0, 0, 0},  //TV = 7.70(111 lines)  AV=2.97  SV=4.96  BV=5.71
    {5150,1200,1024, 0, 0, 0},  //TV = 7.60(119 lines)  AV=2.97  SV=4.96  BV=5.61
    {5536,1184,1032, 0, 0, 0},  //TV = 7.50(128 lines)  AV=2.97  SV=4.95  BV=5.52
    {5965,1184,1032, 0, 0, 0},  //TV = 7.39(138 lines)  AV=2.97  SV=4.95  BV=5.41
    {6351,1184,1032, 0, 0, 0},  //TV = 7.30(147 lines)  AV=2.97  SV=4.95  BV=5.32
    {6781,1200,1024, 0, 0, 0},  //TV = 7.20(157 lines)  AV=2.97  SV=4.96  BV=5.22
    {7296,1184,1032, 0, 0, 0},  //TV = 7.10(169 lines)  AV=2.97  SV=4.95  BV=5.12
    {7853,1184,1032, 0, 0, 0},  //TV = 6.99(182 lines)  AV=2.97  SV=4.95  BV=5.01
    {8326,1200,1024, 0, 0, 0},  //TV = 6.91(193 lines)  AV=2.97  SV=4.96  BV=4.92
    {8326,1280,1032, 0, 0, 0},  //TV = 6.91(193 lines)  AV=2.97  SV=5.06  BV=4.81
    {8326,1376,1032, 0, 0, 0},  //TV = 6.91(193 lines)  AV=2.97  SV=5.17  BV=4.71
    {8326,1488,1024, 0, 0, 0},  //TV = 6.91(193 lines)  AV=2.97  SV=5.27  BV=4.61
    {8326,1584,1032, 0, 0, 0},  //TV = 6.91(193 lines)  AV=2.97  SV=5.37  BV=4.51
    {8326,1696,1032, 0, 0, 0},  //TV = 6.91(193 lines)  AV=2.97  SV=5.47  BV=4.41
    {8326,1824,1032, 0, 0, 0},  //TV = 6.91(193 lines)  AV=2.97  SV=5.58  BV=4.30
    {8326,1952,1032, 0, 0, 0},  //TV = 6.91(193 lines)  AV=2.97  SV=5.67  BV=4.21
    {8326,2096,1024, 0, 0, 0},  //TV = 6.91(193 lines)  AV=2.97  SV=5.76  BV=4.11
    {8326,2240,1024, 0, 0, 0},  //TV = 6.91(193 lines)  AV=2.97  SV=5.86  BV=4.02
    {16652,1200,1024, 0, 0, 0},  //TV = 5.91(387 lines)  AV=2.97  SV=4.96  BV=3.92
    {16652,1280,1032, 0, 0, 0},  //TV = 5.91(387 lines)  AV=2.97  SV=5.06  BV=3.81
    {16652,1376,1032, 0, 0, 0},  //TV = 5.91(387 lines)  AV=2.97  SV=5.17  BV=3.71
    {16652,1472,1032, 0, 0, 0},  //TV = 5.91(387 lines)  AV=2.97  SV=5.27  BV=3.61
    {16652,1600,1024, 0, 0, 0},  //TV = 5.91(387 lines)  AV=2.97  SV=5.38  BV=3.50
    {16652,1696,1032, 0, 0, 0},  //TV = 5.91(387 lines)  AV=2.97  SV=5.47  BV=3.41
    {24978,1216,1024, 0, 0, 0},  //TV = 5.32(581 lines)  AV=2.97  SV=4.98  BV=3.31
    {24978,1296,1032, 0, 0, 0},  //TV = 5.32(581 lines)  AV=2.97  SV=5.08  BV=3.21
    {24978,1392,1032, 0, 0, 0},  //TV = 5.32(581 lines)  AV=2.97  SV=5.19  BV=3.11
    {24978,1488,1032, 0, 0, 0},  //TV = 5.32(581 lines)  AV=2.97  SV=5.28  BV=3.01
    {33347,1200,1024, 0, 0, 0},  //TV = 4.91(776 lines)  AV=2.97  SV=4.96  BV=2.92
    {33347,1280,1032, 0, 0, 0},  //TV = 4.91(776 lines)  AV=2.97  SV=5.06  BV=2.81
    {33347,1376,1032, 0, 0, 0},  //TV = 4.91(776 lines)  AV=2.97  SV=5.17  BV=2.71
    {33347,1488,1024, 0, 0, 0},  //TV = 4.91(776 lines)  AV=2.97  SV=5.27  BV=2.61
    {33347,1584,1024, 0, 0, 0},  //TV = 4.91(776 lines)  AV=2.97  SV=5.36  BV=2.52
    {33347,1696,1032, 0, 0, 0},  //TV = 4.91(776 lines)  AV=2.97  SV=5.47  BV=2.41
    {33347,1824,1024, 0, 0, 0},  //TV = 4.91(776 lines)  AV=2.97  SV=5.56  BV=2.31
    {33347,1952,1024, 0, 0, 0},  //TV = 4.91(776 lines)  AV=2.97  SV=5.66  BV=2.22
    {33347,2096,1024, 0, 0, 0},  //TV = 4.91(776 lines)  AV=2.97  SV=5.76  BV=2.11
    {33347,2240,1024, 0, 0, 0},  //TV = 4.91(776 lines)  AV=2.97  SV=5.86  BV=2.02
    {33347,2400,1024, 0, 0, 0},  //TV = 4.91(776 lines)  AV=2.97  SV=5.96  BV=1.92
    {33347,2592,1024, 0, 0, 0},  //TV = 4.91(776 lines)  AV=2.97  SV=6.07  BV=1.81
    {33347,2768,1024, 0, 0, 0},  //TV = 4.91(776 lines)  AV=2.97  SV=6.17  BV=1.71
    {33347,2960,1024, 0, 0, 0},  //TV = 4.91(776 lines)  AV=2.97  SV=6.26  BV=1.61
    {33347,3168,1024, 0, 0, 0},  //TV = 4.91(776 lines)  AV=2.97  SV=6.36  BV=1.52
    {33347,3424,1024, 0, 0, 0},  //TV = 4.91(776 lines)  AV=2.97  SV=6.47  BV=1.40
    {33347,3664,1024, 0, 0, 0},  //TV = 4.91(776 lines)  AV=2.97  SV=6.57  BV=1.31
    {33347,3920,1024, 0, 0, 0},  //TV = 4.91(776 lines)  AV=2.97  SV=6.67  BV=1.21
    {33347,4192,1024, 0, 0, 0},  //TV = 4.91(776 lines)  AV=2.97  SV=6.76  BV=1.11
    {33347,4496,1024, 0, 0, 0},  //TV = 4.91(776 lines)  AV=2.97  SV=6.87  BV=1.01
    {33347,4816,1024, 0, 0, 0},  //TV = 4.91(776 lines)  AV=2.97  SV=6.96  BV=0.91
    {41673,4128,1024, 0, 0, 0},  //TV = 4.58(970 lines)  AV=2.97  SV=6.74  BV=0.81
    {41673,4432,1024, 0, 0, 0},  //TV = 4.58(970 lines)  AV=2.97  SV=6.84  BV=0.71
    {41673,4752,1024, 0, 0, 0},  //TV = 4.58(970 lines)  AV=2.97  SV=6.95  BV=0.61
    {49999,4240,1024, 0, 0, 0},  //TV = 4.32(1164 lines)  AV=2.97  SV=6.78  BV=0.51
    {49999,4544,1024, 0, 0, 0},  //TV = 4.32(1164 lines)  AV=2.97  SV=6.88  BV=0.41
    {58325,4176,1024, 0, 0, 0},  //TV = 4.10(1358 lines)  AV=2.97  SV=6.76  BV=0.31
    {58325,4480,1024, 0, 0, 0},  //TV = 4.10(1358 lines)  AV=2.97  SV=6.86  BV=0.21
    {66651,4192,1024, 0, 0, 0},  //TV = 3.91(1552 lines)  AV=2.97  SV=6.76  BV=0.11
    {66651,4528,1024, 0, 0, 0},  //TV = 3.91(1552 lines)  AV=2.97  SV=6.88  BV=0.00
    {66651,4880,1024, 0, 0, 0},  //TV = 3.91(1552 lines)  AV=2.97  SV=6.98  BV=-0.11
    {66651,4992,1072, 0, 0, 0},  //TV = 3.91(1552 lines)  AV=2.97  SV=7.08  BV=-0.20
    {66651,4992,1144, 0, 0, 0},  //TV = 3.91(1552 lines)  AV=2.97  SV=7.18  BV=-0.30
    {66651,4992,1232, 0, 0, 0},  //TV = 3.91(1552 lines)  AV=2.97  SV=7.28  BV=-0.41
    {66651,4992,1320, 0, 0, 0},  //TV = 3.91(1552 lines)  AV=2.97  SV=7.38  BV=-0.50
    {66651,4992,1416, 0, 0, 0},  //TV = 3.91(1552 lines)  AV=2.97  SV=7.48  BV=-0.61
    {74977,4992,1344, 0, 0, 0},  //TV = 3.74(1746 lines)  AV=2.97  SV=7.41  BV=-0.70
    {83346,4992,1296, 0, 0, 0},  //TV = 3.58(1941 lines)  AV=2.97  SV=7.36  BV=-0.80
    {91672,4992,1264, 0, 0, 0},  //TV = 3.45(2135 lines)  AV=2.97  SV=7.32  BV=-0.90
    {91672,4992,1360, 0, 0, 0},  //TV = 3.45(2135 lines)  AV=2.97  SV=7.43  BV=-1.01
    {99999,4992,1328, 0, 0, 0},  //TV = 3.32(2330 lines)  AV=2.97  SV=7.39  BV=-1.10
    {99999,4992,1424, 0, 0, 0},  //TV = 3.32(2330 lines)  AV=2.97  SV=7.49  BV=-1.20
    {99999,4992,1520, 0, 0, 0},  //TV = 3.32(2330 lines)  AV=2.97  SV=7.59  BV=-1.29
    {99999,4992,1640, 0, 0, 0},  //TV = 3.32(2330 lines)  AV=2.97  SV=7.70  BV=-1.40
    {99999,4992,1760, 0, 0, 0},  //TV = 3.32(2330 lines)  AV=2.97  SV=7.80  BV=-1.51
    {108325,4992,1744, 0, 0, 0},  //TV = 3.21(2523 lines)  AV=2.97  SV=7.78  BV=-1.61
    {116651,4992,1736, 0, 0, 0},  //TV = 3.10(2717 lines)  AV=2.97  SV=7.78  BV=-1.71
    {124977,4992,1736, 0, 0, 0},  //TV = 3.00(2911 lines)  AV=2.97  SV=7.78  BV=-1.81
    {133346,4992,1744, 0, 0, 0},  //TV = 2.91(3106 lines)  AV=2.97  SV=7.78  BV=-1.91
    {141672,4992,1760, 0, 0, 0},  //TV = 2.82(3300 lines)  AV=2.97  SV=7.80  BV=-2.01
    {158324,4992,1688, 0, 0, 0},  //TV = 2.66(3688 lines)  AV=2.97  SV=7.74  BV=-2.11
    {166650,4992,1712, 0, 0, 0},  //TV = 2.59(3882 lines)  AV=2.97  SV=7.76  BV=-2.20
    {174976,4992,1752, 0, 0, 0},  //TV = 2.51(4076 lines)  AV=2.97  SV=7.79  BV=-2.31
    {191671,4992,1712, 0, 0, 0},  //TV = 2.38(4465 lines)  AV=2.97  SV=7.76  BV=-2.40
    {199997,4992,1760, 0, 0, 0},  //TV = 2.32(4659 lines)  AV=2.97  SV=7.80  BV=-2.51
    {199997,4992,1888, 0, 0, 0},  //TV = 2.32(4659 lines)  AV=2.97  SV=7.90  BV=-2.61
    {199997,4992,2016, 0, 0, 0},  //TV = 2.32(4659 lines)  AV=2.97  SV=7.99  BV=-2.70
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sPreviewPLineTable_50Hz =
{
{
    {987,1200,1032, 0, 0, 0},  //TV = 9.98(22 lines)  AV=2.97  SV=4.97  BV=7.98
    {1030,1216,1024, 0, 0, 0},  //TV = 9.92(23 lines)  AV=2.97  SV=4.98  BV=7.91
    {1115,1200,1032, 0, 0, 0},  //TV = 9.81(25 lines)  AV=2.97  SV=4.97  BV=7.81
    {1201,1200,1024, 0, 0, 0},  //TV = 9.70(27 lines)  AV=2.97  SV=4.96  BV=7.71
    {1287,1200,1024, 0, 0, 0},  //TV = 9.60(29 lines)  AV=2.97  SV=4.96  BV=7.61
    {1373,1200,1024, 0, 0, 0},  //TV = 9.51(31 lines)  AV=2.97  SV=4.96  BV=7.52
    {1459,1216,1024, 0, 0, 0},  //TV = 9.42(33 lines)  AV=2.97  SV=4.98  BV=7.41
    {1587,1200,1024, 0, 0, 0},  //TV = 9.30(36 lines)  AV=2.97  SV=4.96  BV=7.31
    {1673,1216,1024, 0, 0, 0},  //TV = 9.22(38 lines)  AV=2.97  SV=4.98  BV=7.22
    {1802,1200,1032, 0, 0, 0},  //TV = 9.12(41 lines)  AV=2.97  SV=4.97  BV=7.12
    {1931,1200,1032, 0, 0, 0},  //TV = 9.02(44 lines)  AV=2.97  SV=4.97  BV=7.02
    {2102,1184,1032, 0, 0, 0},  //TV = 8.89(48 lines)  AV=2.97  SV=4.95  BV=6.91
    {2231,1200,1024, 0, 0, 0},  //TV = 8.81(51 lines)  AV=2.97  SV=4.96  BV=6.82
    {2403,1200,1024, 0, 0, 0},  //TV = 8.70(55 lines)  AV=2.97  SV=4.96  BV=6.71
    {2575,1200,1024, 0, 0, 0},  //TV = 8.60(59 lines)  AV=2.97  SV=4.96  BV=6.61
    {2746,1200,1024, 0, 0, 0},  //TV = 8.51(63 lines)  AV=2.97  SV=4.96  BV=6.52
    {2961,1200,1024, 0, 0, 0},  //TV = 8.40(68 lines)  AV=2.97  SV=4.96  BV=6.41
    {3133,1200,1032, 0, 0, 0},  //TV = 8.32(72 lines)  AV=2.97  SV=4.97  BV=6.32
    {3390,1200,1024, 0, 0, 0},  //TV = 8.20(78 lines)  AV=2.97  SV=4.96  BV=6.22
    {3648,1184,1032, 0, 0, 0},  //TV = 8.10(84 lines)  AV=2.97  SV=4.95  BV=6.12
    {3905,1200,1024, 0, 0, 0},  //TV = 8.00(90 lines)  AV=2.97  SV=4.96  BV=6.01
    {4163,1200,1024, 0, 0, 0},  //TV = 7.91(96 lines)  AV=2.97  SV=4.96  BV=5.92
    {4463,1200,1024, 0, 0, 0},  //TV = 7.81(103 lines)  AV=2.97  SV=4.96  BV=5.82
    {4806,1200,1024, 0, 0, 0},  //TV = 7.70(111 lines)  AV=2.97  SV=4.96  BV=5.71
    {5150,1200,1024, 0, 0, 0},  //TV = 7.60(119 lines)  AV=2.97  SV=4.96  BV=5.61
    {5536,1184,1032, 0, 0, 0},  //TV = 7.50(128 lines)  AV=2.97  SV=4.95  BV=5.52
    {5965,1184,1032, 0, 0, 0},  //TV = 7.39(138 lines)  AV=2.97  SV=4.95  BV=5.41
    {6351,1184,1032, 0, 0, 0},  //TV = 7.30(147 lines)  AV=2.97  SV=4.95  BV=5.32
    {6781,1200,1024, 0, 0, 0},  //TV = 7.20(157 lines)  AV=2.97  SV=4.96  BV=5.22
    {7296,1184,1032, 0, 0, 0},  //TV = 7.10(169 lines)  AV=2.97  SV=4.95  BV=5.12
    {7853,1184,1032, 0, 0, 0},  //TV = 6.99(182 lines)  AV=2.97  SV=4.95  BV=5.01
    {8411,1184,1032, 0, 0, 0},  //TV = 6.89(195 lines)  AV=2.97  SV=4.95  BV=4.91
    {8926,1200,1024, 0, 0, 0},  //TV = 6.81(207 lines)  AV=2.97  SV=4.96  BV=4.82
    {9570,1200,1024, 0, 0, 0},  //TV = 6.71(222 lines)  AV=2.97  SV=4.96  BV=4.72
    {9999,1232,1024, 0, 0, 0},  //TV = 6.64(232 lines)  AV=2.97  SV=5.00  BV=4.62
    {9999,1328,1024, 0, 0, 0},  //TV = 6.64(232 lines)  AV=2.97  SV=5.11  BV=4.51
    {9999,1408,1032, 0, 0, 0},  //TV = 6.64(232 lines)  AV=2.97  SV=5.20  BV=4.41
    {9999,1520,1024, 0, 0, 0},  //TV = 6.64(232 lines)  AV=2.97  SV=5.30  BV=4.31
    {9999,1632,1024, 0, 0, 0},  //TV = 6.64(232 lines)  AV=2.97  SV=5.40  BV=4.21
    {9999,1744,1024, 0, 0, 0},  //TV = 6.64(232 lines)  AV=2.97  SV=5.50  BV=4.12
    {9999,1872,1024, 0, 0, 0},  //TV = 6.64(232 lines)  AV=2.97  SV=5.60  BV=4.01
    {9999,2000,1032, 0, 0, 0},  //TV = 6.64(232 lines)  AV=2.97  SV=5.71  BV=3.91
    {9999,2144,1024, 0, 0, 0},  //TV = 6.64(232 lines)  AV=2.97  SV=5.80  BV=3.82
    {9999,2304,1024, 0, 0, 0},  //TV = 6.64(232 lines)  AV=2.97  SV=5.90  BV=3.71
    {19999,1232,1024, 0, 0, 0},  //TV = 5.64(465 lines)  AV=2.97  SV=5.00  BV=3.62
    {19999,1312,1032, 0, 0, 0},  //TV = 5.64(465 lines)  AV=2.97  SV=5.10  BV=3.51
    {19999,1408,1032, 0, 0, 0},  //TV = 5.64(465 lines)  AV=2.97  SV=5.20  BV=3.41
    {19999,1520,1024, 0, 0, 0},  //TV = 5.64(465 lines)  AV=2.97  SV=5.30  BV=3.31
    {19999,1632,1032, 0, 0, 0},  //TV = 5.64(465 lines)  AV=2.97  SV=5.41  BV=3.20
    {19999,1744,1024, 0, 0, 0},  //TV = 5.64(465 lines)  AV=2.97  SV=5.50  BV=3.12
    {29999,1248,1024, 0, 0, 0},  //TV = 5.06(698 lines)  AV=2.97  SV=5.02  BV=3.01
    {29999,1328,1032, 0, 0, 0},  //TV = 5.06(698 lines)  AV=2.97  SV=5.12  BV=2.91
    {29999,1424,1032, 0, 0, 0},  //TV = 5.06(698 lines)  AV=2.97  SV=5.22  BV=2.81
    {29999,1536,1024, 0, 0, 0},  //TV = 5.06(698 lines)  AV=2.97  SV=5.32  BV=2.71
    {29999,1648,1024, 0, 0, 0},  //TV = 5.06(698 lines)  AV=2.97  SV=5.42  BV=2.61
    {29999,1776,1024, 0, 0, 0},  //TV = 5.06(698 lines)  AV=2.97  SV=5.53  BV=2.50
    {29999,1888,1024, 0, 0, 0},  //TV = 5.06(698 lines)  AV=2.97  SV=5.61  BV=2.42
    {29999,2032,1024, 0, 0, 0},  //TV = 5.06(698 lines)  AV=2.97  SV=5.72  BV=2.31
    {29999,2176,1024, 0, 0, 0},  //TV = 5.06(698 lines)  AV=2.97  SV=5.82  BV=2.21
    {29999,2336,1024, 0, 0, 0},  //TV = 5.06(698 lines)  AV=2.97  SV=5.92  BV=2.11
    {29999,2496,1024, 0, 0, 0},  //TV = 5.06(698 lines)  AV=2.97  SV=6.02  BV=2.01
    {29999,2688,1024, 0, 0, 0},  //TV = 5.06(698 lines)  AV=2.97  SV=6.12  BV=1.91
    {29999,2880,1024, 0, 0, 0},  //TV = 5.06(698 lines)  AV=2.97  SV=6.22  BV=1.81
    {29999,3072,1024, 0, 0, 0},  //TV = 5.06(698 lines)  AV=2.97  SV=6.32  BV=1.71
    {29999,3296,1024, 0, 0, 0},  //TV = 5.06(698 lines)  AV=2.97  SV=6.42  BV=1.61
    {29999,3552,1024, 0, 0, 0},  //TV = 5.06(698 lines)  AV=2.97  SV=6.53  BV=1.50
    {29999,3792,1024, 0, 0, 0},  //TV = 5.06(698 lines)  AV=2.97  SV=6.62  BV=1.41
    {29999,4064,1024, 0, 0, 0},  //TV = 5.06(698 lines)  AV=2.97  SV=6.72  BV=1.31
    {29999,4352,1024, 0, 0, 0},  //TV = 5.06(698 lines)  AV=2.97  SV=6.82  BV=1.21
    {29999,4672,1024, 0, 0, 0},  //TV = 5.06(698 lines)  AV=2.97  SV=6.92  BV=1.11
    {29999,4992,1024, 0, 0, 0},  //TV = 5.06(698 lines)  AV=2.97  SV=7.02  BV=1.01
    {29999,4992,1096, 0, 0, 0},  //TV = 5.06(698 lines)  AV=2.97  SV=7.11  BV=0.92
    {39999,4304,1024, 0, 0, 0},  //TV = 4.64(931 lines)  AV=2.97  SV=6.80  BV=0.81
    {39999,4624,1024, 0, 0, 0},  //TV = 4.64(931 lines)  AV=2.97  SV=6.91  BV=0.71
    {39999,4944,1024, 0, 0, 0},  //TV = 4.64(931 lines)  AV=2.97  SV=7.00  BV=0.61
    {49999,4240,1024, 0, 0, 0},  //TV = 4.32(1164 lines)  AV=2.97  SV=6.78  BV=0.51
    {49999,4544,1024, 0, 0, 0},  //TV = 4.32(1164 lines)  AV=2.97  SV=6.88  BV=0.41
    {49999,4864,1024, 0, 0, 0},  //TV = 4.32(1164 lines)  AV=2.97  SV=6.98  BV=0.31
    {59999,4352,1024, 0, 0, 0},  //TV = 4.06(1397 lines)  AV=2.97  SV=6.82  BV=0.21
    {59999,4672,1024, 0, 0, 0},  //TV = 4.06(1397 lines)  AV=2.97  SV=6.92  BV=0.11
    {59999,4992,1032, 0, 0, 0},  //TV = 4.06(1397 lines)  AV=2.97  SV=7.03  BV=0.00
    {59999,4992,1104, 0, 0, 0},  //TV = 4.06(1397 lines)  AV=2.97  SV=7.13  BV=-0.10
    {59999,4992,1192, 0, 0, 0},  //TV = 4.06(1397 lines)  AV=2.97  SV=7.24  BV=-0.21
    {59999,4992,1272, 0, 0, 0},  //TV = 4.06(1397 lines)  AV=2.97  SV=7.33  BV=-0.30
    {59999,4992,1368, 0, 0, 0},  //TV = 4.06(1397 lines)  AV=2.97  SV=7.43  BV=-0.40
    {59999,4992,1464, 0, 0, 0},  //TV = 4.06(1397 lines)  AV=2.97  SV=7.53  BV=-0.50
    {69999,4992,1344, 0, 0, 0},  //TV = 3.84(1630 lines)  AV=2.97  SV=7.41  BV=-0.60
    {79999,4992,1264, 0, 0, 0},  //TV = 3.64(1863 lines)  AV=2.97  SV=7.32  BV=-0.71
    {79999,4992,1352, 0, 0, 0},  //TV = 3.64(1863 lines)  AV=2.97  SV=7.42  BV=-0.80
    {89999,4992,1288, 0, 0, 0},  //TV = 3.47(2096 lines)  AV=2.97  SV=7.35  BV=-0.90
    {89999,4992,1384, 0, 0, 0},  //TV = 3.47(2096 lines)  AV=2.97  SV=7.45  BV=-1.01
    {99998,4992,1328, 0, 0, 0},  //TV = 3.32(2329 lines)  AV=2.97  SV=7.39  BV=-1.10
    {99998,4992,1424, 0, 0, 0},  //TV = 3.32(2329 lines)  AV=2.97  SV=7.49  BV=-1.20
    {99998,4992,1520, 0, 0, 0},  //TV = 3.32(2329 lines)  AV=2.97  SV=7.59  BV=-1.29
    {99998,4992,1640, 0, 0, 0},  //TV = 3.32(2329 lines)  AV=2.97  SV=7.70  BV=-1.40
    {99998,4992,1760, 0, 0, 0},  //TV = 3.32(2329 lines)  AV=2.97  SV=7.80  BV=-1.51
    {109998,4992,1712, 0, 0, 0},  //TV = 3.18(2562 lines)  AV=2.97  SV=7.76  BV=-1.60
    {119998,4992,1688, 0, 0, 0},  //TV = 3.06(2795 lines)  AV=2.97  SV=7.74  BV=-1.71
    {119998,4992,1808, 0, 0, 0},  //TV = 3.06(2795 lines)  AV=2.97  SV=7.84  BV=-1.81
    {129998,4992,1784, 0, 0, 0},  //TV = 2.94(3028 lines)  AV=2.97  SV=7.82  BV=-1.90
    {139998,4992,1776, 0, 0, 0},  //TV = 2.84(3261 lines)  AV=2.97  SV=7.81  BV=-2.00
    {149998,4992,1776, 0, 0, 0},  //TV = 2.74(3494 lines)  AV=2.97  SV=7.81  BV=-2.10
    {169998,4992,1680, 0, 0, 0},  //TV = 2.56(3960 lines)  AV=2.97  SV=7.73  BV=-2.20
    {179998,4992,1704, 0, 0, 0},  //TV = 2.47(4193 lines)  AV=2.97  SV=7.75  BV=-2.31
    {189997,4992,1728, 0, 0, 0},  //TV = 2.40(4426 lines)  AV=2.97  SV=7.77  BV=-2.40
    {199997,4992,1760, 0, 0, 0},  //TV = 2.32(4659 lines)  AV=2.97  SV=7.80  BV=-2.51
    {199997,4992,1888, 0, 0, 0},  //TV = 2.32(4659 lines)  AV=2.97  SV=7.90  BV=-2.61
    {199997,4992,2016, 0, 0, 0},  //TV = 2.32(4659 lines)  AV=2.97  SV=7.99  BV=-2.70
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_PreviewAutoTable =
{
    AETABLE_RPEVIEW_AUTO,    //eAETableID
    108,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    80,    //i4MaxBV
    -27,    //i4MinBV
    90,    //i4EffectiveMaxBV
    -10,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sPreviewPLineTable_60Hz,
    sPreviewPLineTable_50Hz,
    NULL,
};

static strEvPline sCapturePLineTable_60Hz =
{
{
    {95,1216,1064, 0, 0, 0},  //TV = 13.36(8 lines)  AV=2.97  SV=5.07  BV=11.26
    {105,1136,1088, 0, 0, 0},  //TV = 13.22(9 lines)  AV=2.97  SV=5.00  BV=11.19
    {105,1216,1072, 0, 0, 0},  //TV = 13.22(9 lines)  AV=2.97  SV=5.08  BV=11.11
    {116,1216,1064, 0, 0, 0},  //TV = 13.07(10 lines)  AV=2.97  SV=5.07  BV=10.98
    {127,1216,1040, 0, 0, 0},  //TV = 12.94(11 lines)  AV=2.97  SV=5.04  BV=10.88
    {137,1136,1096, 0, 0, 0},  //TV = 12.83(12 lines)  AV=2.97  SV=5.01  BV=10.79
    {137,1216,1088, 0, 0, 0},  //TV = 12.83(12 lines)  AV=2.97  SV=5.10  BV=10.70
    {158,1136,1096, 0, 0, 0},  //TV = 12.63(14 lines)  AV=2.97  SV=5.01  BV=10.59
    {169,1216,1024, 0, 0, 0},  //TV = 12.53(15 lines)  AV=2.97  SV=5.01  BV=10.49
    {179,1216,1048, 0, 0, 0},  //TV = 12.45(16 lines)  AV=2.97  SV=5.05  BV=10.37
    {190,1216,1064, 0, 0, 0},  //TV = 12.36(17 lines)  AV=2.97  SV=5.07  BV=10.26
    {201,1216,1040, 0, 0, 0},  //TV = 12.28(18 lines)  AV=2.97  SV=5.04  BV=10.22
    {222,1136,1088, 0, 0, 0},  //TV = 12.14(20 lines)  AV=2.97  SV=5.00  BV=10.11
    {232,1216,1040, 0, 0, 0},  //TV = 12.07(21 lines)  AV=2.97  SV=5.04  BV=10.01
    {254,1136,1088, 0, 0, 0},  //TV = 11.94(23 lines)  AV=2.97  SV=5.00  BV=9.91
    {264,1216,1048, 0, 0, 0},  //TV = 11.89(24 lines)  AV=2.97  SV=5.05  BV=9.81
    {285,1216,1040, 0, 0, 0},  //TV = 11.78(26 lines)  AV=2.97  SV=5.04  BV=9.71
    {306,1216,1040, 0, 0, 0},  //TV = 11.67(28 lines)  AV=2.97  SV=5.04  BV=9.61
    {328,1216,1040, 0, 0, 0},  //TV = 11.57(30 lines)  AV=2.97  SV=5.04  BV=9.51
    {359,1136,1096, 0, 0, 0},  //TV = 11.44(33 lines)  AV=2.97  SV=5.01  BV=9.40
    {381,1216,1024, 0, 0, 0},  //TV = 11.36(35 lines)  AV=2.97  SV=5.01  BV=9.32
    {412,1136,1096, 0, 0, 0},  //TV = 11.25(38 lines)  AV=2.97  SV=5.01  BV=9.20
    {444,1136,1088, 0, 0, 0},  //TV = 11.14(41 lines)  AV=2.97  SV=5.00  BV=9.11
    {476,1136,1088, 0, 0, 0},  //TV = 11.04(44 lines)  AV=2.97  SV=5.00  BV=9.00
    {508,1136,1088, 0, 0, 0},  //TV = 10.94(47 lines)  AV=2.97  SV=5.00  BV=8.91
    {539,1216,1024, 0, 0, 0},  //TV = 10.86(50 lines)  AV=2.97  SV=5.01  BV=8.81
    {582,1136,1096, 0, 0, 0},  //TV = 10.75(54 lines)  AV=2.97  SV=5.01  BV=8.70
    {624,1136,1096, 0, 0, 0},  //TV = 10.65(58 lines)  AV=2.97  SV=5.01  BV=8.60
    {666,1136,1096, 0, 0, 0},  //TV = 10.55(62 lines)  AV=2.97  SV=5.01  BV=8.51
    {719,1136,1088, 0, 0, 0},  //TV = 10.44(67 lines)  AV=2.97  SV=5.00  BV=8.41
    {772,1136,1088, 0, 0, 0},  //TV = 10.34(72 lines)  AV=2.97  SV=5.00  BV=8.31
    {825,1136,1096, 0, 0, 0},  //TV = 10.24(77 lines)  AV=2.97  SV=5.01  BV=8.20
    {889,1136,1088, 0, 0, 0},  //TV = 10.14(83 lines)  AV=2.97  SV=5.00  BV=8.10
    {952,1136,1088, 0, 0, 0},  //TV = 10.04(89 lines)  AV=2.97  SV=5.00  BV=8.00
    {1016,1136,1088, 0, 0, 0},  //TV = 9.94(95 lines)  AV=2.97  SV=5.00  BV=7.91
    {1090,1136,1088, 0, 0, 0},  //TV = 9.84(102 lines)  AV=2.97  SV=5.00  BV=7.81
    {1174,1136,1088, 0, 0, 0},  //TV = 9.73(110 lines)  AV=2.97  SV=5.00  BV=7.70
    {1259,1136,1088, 0, 0, 0},  //TV = 9.63(118 lines)  AV=2.97  SV=5.00  BV=7.60
    {1344,1136,1088, 0, 0, 0},  //TV = 9.54(126 lines)  AV=2.97  SV=5.00  BV=7.51
    {1439,1136,1088, 0, 0, 0},  //TV = 9.44(135 lines)  AV=2.97  SV=5.00  BV=7.41
    {1545,1136,1088, 0, 0, 0},  //TV = 9.34(145 lines)  AV=2.97  SV=5.00  BV=7.31
    {1651,1136,1088, 0, 0, 0},  //TV = 9.24(155 lines)  AV=2.97  SV=5.00  BV=7.21
    {1778,1136,1088, 0, 0, 0},  //TV = 9.14(167 lines)  AV=2.97  SV=5.00  BV=7.10
    {1915,1136,1088, 0, 0, 0},  //TV = 9.03(180 lines)  AV=2.97  SV=5.00  BV=7.00
    {2032,1136,1088, 0, 0, 0},  //TV = 8.94(191 lines)  AV=2.97  SV=5.00  BV=6.91
    {2190,1136,1088, 0, 0, 0},  //TV = 8.83(206 lines)  AV=2.97  SV=5.00  BV=6.80
    {2360,1136,1080, 0, 0, 0},  //TV = 8.73(222 lines)  AV=2.97  SV=4.99  BV=6.71
    {2529,1136,1080, 0, 0, 0},  //TV = 8.63(238 lines)  AV=2.97  SV=4.99  BV=6.61
    {2698,1136,1088, 0, 0, 0},  //TV = 8.53(254 lines)  AV=2.97  SV=5.00  BV=6.50
    {2910,1136,1080, 0, 0, 0},  //TV = 8.42(274 lines)  AV=2.97  SV=4.99  BV=6.40
    {3111,1136,1080, 0, 0, 0},  //TV = 8.33(293 lines)  AV=2.97  SV=4.99  BV=6.31
    {3333,1136,1080, 0, 0, 0},  //TV = 8.23(314 lines)  AV=2.97  SV=4.99  BV=6.21
    {3566,1136,1080, 0, 0, 0},  //TV = 8.13(336 lines)  AV=2.97  SV=4.99  BV=6.11
    {3820,1136,1080, 0, 0, 0},  //TV = 8.03(360 lines)  AV=2.97  SV=4.99  BV=6.01
    {4117,1136,1080, 0, 0, 0},  //TV = 7.92(388 lines)  AV=2.97  SV=4.99  BV=5.90
    {4413,1136,1080, 0, 0, 0},  //TV = 7.82(416 lines)  AV=2.97  SV=4.99  BV=5.80
    {4720,1136,1080, 0, 0, 0},  //TV = 7.73(445 lines)  AV=2.97  SV=4.99  BV=5.71
    {5059,1136,1080, 0, 0, 0},  //TV = 7.63(477 lines)  AV=2.97  SV=4.99  BV=5.61
    {5408,1136,1080, 0, 0, 0},  //TV = 7.53(510 lines)  AV=2.97  SV=4.99  BV=5.51
    {5800,1136,1080, 0, 0, 0},  //TV = 7.43(547 lines)  AV=2.97  SV=4.99  BV=5.41
    {6202,1136,1080, 0, 0, 0},  //TV = 7.33(585 lines)  AV=2.97  SV=4.99  BV=5.31
    {6646,1136,1080, 0, 0, 0},  //TV = 7.23(627 lines)  AV=2.97  SV=4.99  BV=5.21
    {7123,1136,1080, 0, 0, 0},  //TV = 7.13(672 lines)  AV=2.97  SV=4.99  BV=5.11
    {7673,1136,1080, 0, 0, 0},  //TV = 7.03(724 lines)  AV=2.97  SV=4.99  BV=5.00
    {8223,1136,1080, 0, 0, 0},  //TV = 6.93(776 lines)  AV=2.97  SV=4.99  BV=4.90
    {8329,1216,1064, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.07  BV=4.81
    {8329,1328,1048, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.17  BV=4.70
    {8329,1424,1040, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.26  BV=4.61
    {8329,1536,1040, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.37  BV=4.51
    {8329,1632,1048, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.47  BV=4.41
    {8329,1728,1056, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.56  BV=4.31
    {8329,1840,1064, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.67  BV=4.21
    {8329,2048,1024, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.77  BV=4.11
    {8329,2144,1048, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.87  BV=4.01
    {8329,2352,1024, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.97  BV=3.91
    {16670,1216,1064, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=5.07  BV=3.81
    {16670,1328,1048, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=5.17  BV=3.70
    {16670,1424,1048, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=5.27  BV=3.60
    {16670,1536,1040, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=5.37  BV=3.50
    {16670,1632,1048, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=5.47  BV=3.41
    {16670,1728,1064, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=5.58  BV=3.30
    {24988,1216,1072, 0, 0, 0},  //TV = 5.32(2360 lines)  AV=2.97  SV=5.08  BV=3.21
    {24988,1328,1056, 0, 0, 0},  //TV = 5.32(2360 lines)  AV=2.97  SV=5.18  BV=3.11
    {24988,1424,1056, 0, 0, 0},  //TV = 5.32(2360 lines)  AV=2.97  SV=5.29  BV=3.01
    {24988,1536,1056, 0, 0, 0},  //TV = 5.32(2360 lines)  AV=2.97  SV=5.39  BV=2.90
    {33298,1216,1064, 0, 0, 0},  //TV = 4.91(3146 lines)  AV=2.97  SV=5.07  BV=2.81
    {33298,1328,1048, 0, 0, 0},  //TV = 4.91(3146 lines)  AV=2.97  SV=5.17  BV=2.71
    {33298,1424,1048, 0, 0, 0},  //TV = 4.91(3146 lines)  AV=2.97  SV=5.27  BV=2.60
    {41669,1216,1048, 0, 0, 0},  //TV = 4.58(3936 lines)  AV=2.97  SV=5.05  BV=2.51
    {41669,1328,1032, 0, 0, 0},  //TV = 4.58(3936 lines)  AV=2.97  SV=5.15  BV=2.40
    {41669,1424,1032, 0, 0, 0},  //TV = 4.58(3936 lines)  AV=2.97  SV=5.25  BV=2.30
    {49999,1216,1072, 0, 0, 0},  //TV = 4.32(4724 lines)  AV=2.97  SV=5.08  BV=2.21
    {49999,1328,1048, 0, 0, 0},  //TV = 4.32(4724 lines)  AV=2.97  SV=5.17  BV=2.12
    {58328,1216,1064, 0, 0, 0},  //TV = 4.10(5510 lines)  AV=2.97  SV=5.07  BV=2.00
    {58328,1328,1040, 0, 0, 0},  //TV = 4.10(5510 lines)  AV=2.97  SV=5.16  BV=1.91
    {66627,1216,1064, 0, 0, 0},  //TV = 3.91(6295 lines)  AV=2.97  SV=5.07  BV=1.81
    {66627,1328,1048, 0, 0, 0},  //TV = 3.91(6295 lines)  AV=2.97  SV=5.17  BV=1.70
    {66627,1424,1040, 0, 0, 0},  //TV = 3.91(6295 lines)  AV=2.97  SV=5.26  BV=1.61
    {66627,1536,1040, 0, 0, 0},  //TV = 3.91(6295 lines)  AV=2.97  SV=5.37  BV=1.51
    {66627,1632,1048, 0, 0, 0},  //TV = 3.91(6295 lines)  AV=2.97  SV=5.47  BV=1.41
    {66627,1728,1064, 0, 0, 0},  //TV = 3.91(6295 lines)  AV=2.97  SV=5.58  BV=1.30
    {66627,1840,1064, 0, 0, 0},  //TV = 3.91(6295 lines)  AV=2.97  SV=5.67  BV=1.21
    {66627,2048,1024, 0, 0, 0},  //TV = 3.91(6295 lines)  AV=2.97  SV=5.77  BV=1.11
    {66627,2144,1048, 0, 0, 0},  //TV = 3.91(6295 lines)  AV=2.97  SV=5.87  BV=1.01
    {66627,2352,1024, 0, 0, 0},  //TV = 3.91(6295 lines)  AV=2.97  SV=5.97  BV=0.91
    {66627,2448,1056, 0, 0, 0},  //TV = 3.91(6295 lines)  AV=2.97  SV=6.07  BV=0.81
    {66627,2656,1040, 0, 0, 0},  //TV = 3.91(6295 lines)  AV=2.97  SV=6.16  BV=0.72
    {66627,2864,1040, 0, 0, 0},  //TV = 3.91(6295 lines)  AV=2.97  SV=6.27  BV=0.61
    {66627,3072,1040, 0, 0, 0},  //TV = 3.91(6295 lines)  AV=2.97  SV=6.37  BV=0.51
    {66627,3328,1024, 0, 0, 0},  //TV = 3.91(6295 lines)  AV=2.97  SV=6.47  BV=0.41
    {66627,3456,1056, 0, 0, 0},  //TV = 3.91(6295 lines)  AV=2.97  SV=6.56  BV=0.31
    {66627,3840,1024, 0, 0, 0},  //TV = 3.91(6295 lines)  AV=2.97  SV=6.67  BV=0.21
    {66627,4096,1032, 0, 0, 0},  //TV = 3.91(6295 lines)  AV=2.97  SV=6.78  BV=0.10
    {66627,4352,1048, 0, 0, 0},  //TV = 3.91(6295 lines)  AV=2.97  SV=6.89  BV=-0.01
    {74998,4224,1024, 0, 0, 0},  //TV = 3.74(7085 lines)  AV=2.97  SV=6.81  BV=-0.10
    {74998,4480,1032, 0, 0, 0},  //TV = 3.74(7085 lines)  AV=2.97  SV=6.91  BV=-0.20
    {83327,4352,1024, 0, 0, 0},  //TV = 3.59(7872 lines)  AV=2.97  SV=6.85  BV=-0.30
    {91668,4224,1032, 0, 0, 0},  //TV = 3.45(8660 lines)  AV=2.97  SV=6.82  BV=-0.40
    {99998,4096,1040, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=6.79  BV=-0.50
    {99998,4480,1024, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=6.89  BV=-0.60
    {99998,4736,1040, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=7.00  BV=-0.70
    {99998,5120,1032, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=7.10  BV=-0.81
    {99998,5504,1024, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=7.19  BV=-0.90
    {99998,5888,1024, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=7.29  BV=-1.00
    {99998,6240,1040, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=7.40  BV=-1.10
    {99998,6704,1032, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=7.49  BV=-1.19
    {99998,7072,1048, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=7.59  BV=-1.29
    {99998,7696,1032, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=7.69  BV=-1.39
    {99998,8192,1048, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=7.80  BV=-1.51
    {99998,8192,1120, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=7.89  BV=-1.60
    {99998,8192,1200, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=7.99  BV=-1.70
    {99998,8192,1288, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=8.10  BV=-1.80
    {99998,8192,1376, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=8.19  BV=-1.90
    {99998,8192,1480, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=8.30  BV=-2.00
    {99998,8192,1584, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=8.39  BV=-2.10
    {99998,8192,1696, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=8.49  BV=-2.20
    {99998,8192,1816, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=8.59  BV=-2.30
    {99998,8192,1944, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=8.69  BV=-2.40
    {99998,8192,2088, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=8.79  BV=-2.50
    {99998,8192,2240, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=8.89  BV=-2.60
    {99998,8192,2400, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=8.99  BV=-2.70
    {99998,8192,2568, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=9.09  BV=-2.80
    {99998,8192,2752, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=9.19  BV=-2.90
    {99998,8192,2952, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=9.29  BV=-3.00
    {99998,8192,3160, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=9.39  BV=-3.10
    {99998,8192,3392, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=9.49  BV=-3.20
    {99998,8192,3632, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=9.59  BV=-3.30
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCapturePLineTable_50Hz =
{
{
    {95,1216,1064, 0, 0, 0},  //TV = 13.36(8 lines)  AV=2.97  SV=5.07  BV=11.26
    {105,1136,1088, 0, 0, 0},  //TV = 13.22(9 lines)  AV=2.97  SV=5.00  BV=11.19
    {105,1216,1072, 0, 0, 0},  //TV = 13.22(9 lines)  AV=2.97  SV=5.08  BV=11.11
    {116,1216,1064, 0, 0, 0},  //TV = 13.07(10 lines)  AV=2.97  SV=5.07  BV=10.98
    {127,1216,1040, 0, 0, 0},  //TV = 12.94(11 lines)  AV=2.97  SV=5.04  BV=10.88
    {137,1136,1096, 0, 0, 0},  //TV = 12.83(12 lines)  AV=2.97  SV=5.01  BV=10.79
    {137,1216,1088, 0, 0, 0},  //TV = 12.83(12 lines)  AV=2.97  SV=5.10  BV=10.70
    {158,1136,1096, 0, 0, 0},  //TV = 12.63(14 lines)  AV=2.97  SV=5.01  BV=10.59
    {169,1216,1024, 0, 0, 0},  //TV = 12.53(15 lines)  AV=2.97  SV=5.01  BV=10.49
    {179,1216,1048, 0, 0, 0},  //TV = 12.45(16 lines)  AV=2.97  SV=5.05  BV=10.37
    {190,1216,1064, 0, 0, 0},  //TV = 12.36(17 lines)  AV=2.97  SV=5.07  BV=10.26
    {201,1216,1040, 0, 0, 0},  //TV = 12.28(18 lines)  AV=2.97  SV=5.04  BV=10.22
    {222,1136,1088, 0, 0, 0},  //TV = 12.14(20 lines)  AV=2.97  SV=5.00  BV=10.11
    {232,1216,1040, 0, 0, 0},  //TV = 12.07(21 lines)  AV=2.97  SV=5.04  BV=10.01
    {254,1136,1088, 0, 0, 0},  //TV = 11.94(23 lines)  AV=2.97  SV=5.00  BV=9.91
    {264,1216,1048, 0, 0, 0},  //TV = 11.89(24 lines)  AV=2.97  SV=5.05  BV=9.81
    {285,1216,1040, 0, 0, 0},  //TV = 11.78(26 lines)  AV=2.97  SV=5.04  BV=9.71
    {306,1216,1040, 0, 0, 0},  //TV = 11.67(28 lines)  AV=2.97  SV=5.04  BV=9.61
    {328,1216,1040, 0, 0, 0},  //TV = 11.57(30 lines)  AV=2.97  SV=5.04  BV=9.51
    {359,1136,1096, 0, 0, 0},  //TV = 11.44(33 lines)  AV=2.97  SV=5.01  BV=9.40
    {381,1216,1024, 0, 0, 0},  //TV = 11.36(35 lines)  AV=2.97  SV=5.01  BV=9.32
    {412,1136,1096, 0, 0, 0},  //TV = 11.25(38 lines)  AV=2.97  SV=5.01  BV=9.20
    {444,1136,1088, 0, 0, 0},  //TV = 11.14(41 lines)  AV=2.97  SV=5.00  BV=9.11
    {476,1136,1088, 0, 0, 0},  //TV = 11.04(44 lines)  AV=2.97  SV=5.00  BV=9.00
    {508,1136,1088, 0, 0, 0},  //TV = 10.94(47 lines)  AV=2.97  SV=5.00  BV=8.91
    {539,1216,1024, 0, 0, 0},  //TV = 10.86(50 lines)  AV=2.97  SV=5.01  BV=8.81
    {582,1136,1096, 0, 0, 0},  //TV = 10.75(54 lines)  AV=2.97  SV=5.01  BV=8.70
    {624,1136,1096, 0, 0, 0},  //TV = 10.65(58 lines)  AV=2.97  SV=5.01  BV=8.60
    {666,1136,1096, 0, 0, 0},  //TV = 10.55(62 lines)  AV=2.97  SV=5.01  BV=8.51
    {719,1136,1088, 0, 0, 0},  //TV = 10.44(67 lines)  AV=2.97  SV=5.00  BV=8.41
    {772,1136,1088, 0, 0, 0},  //TV = 10.34(72 lines)  AV=2.97  SV=5.00  BV=8.31
    {825,1136,1096, 0, 0, 0},  //TV = 10.24(77 lines)  AV=2.97  SV=5.01  BV=8.20
    {889,1136,1088, 0, 0, 0},  //TV = 10.14(83 lines)  AV=2.97  SV=5.00  BV=8.10
    {952,1136,1088, 0, 0, 0},  //TV = 10.04(89 lines)  AV=2.97  SV=5.00  BV=8.00
    {1016,1136,1088, 0, 0, 0},  //TV = 9.94(95 lines)  AV=2.97  SV=5.00  BV=7.91
    {1090,1136,1088, 0, 0, 0},  //TV = 9.84(102 lines)  AV=2.97  SV=5.00  BV=7.81
    {1174,1136,1088, 0, 0, 0},  //TV = 9.73(110 lines)  AV=2.97  SV=5.00  BV=7.70
    {1259,1136,1088, 0, 0, 0},  //TV = 9.63(118 lines)  AV=2.97  SV=5.00  BV=7.60
    {1344,1136,1088, 0, 0, 0},  //TV = 9.54(126 lines)  AV=2.97  SV=5.00  BV=7.51
    {1439,1136,1088, 0, 0, 0},  //TV = 9.44(135 lines)  AV=2.97  SV=5.00  BV=7.41
    {1545,1136,1088, 0, 0, 0},  //TV = 9.34(145 lines)  AV=2.97  SV=5.00  BV=7.31
    {1651,1136,1088, 0, 0, 0},  //TV = 9.24(155 lines)  AV=2.97  SV=5.00  BV=7.21
    {1778,1136,1088, 0, 0, 0},  //TV = 9.14(167 lines)  AV=2.97  SV=5.00  BV=7.10
    {1915,1136,1088, 0, 0, 0},  //TV = 9.03(180 lines)  AV=2.97  SV=5.00  BV=7.00
    {2032,1136,1088, 0, 0, 0},  //TV = 8.94(191 lines)  AV=2.97  SV=5.00  BV=6.91
    {2190,1136,1088, 0, 0, 0},  //TV = 8.83(206 lines)  AV=2.97  SV=5.00  BV=6.80
    {2360,1136,1080, 0, 0, 0},  //TV = 8.73(222 lines)  AV=2.97  SV=4.99  BV=6.71
    {2529,1136,1080, 0, 0, 0},  //TV = 8.63(238 lines)  AV=2.97  SV=4.99  BV=6.61
    {2698,1136,1088, 0, 0, 0},  //TV = 8.53(254 lines)  AV=2.97  SV=5.00  BV=6.50
    {2910,1136,1080, 0, 0, 0},  //TV = 8.42(274 lines)  AV=2.97  SV=4.99  BV=6.40
    {3111,1136,1080, 0, 0, 0},  //TV = 8.33(293 lines)  AV=2.97  SV=4.99  BV=6.31
    {3333,1136,1080, 0, 0, 0},  //TV = 8.23(314 lines)  AV=2.97  SV=4.99  BV=6.21
    {3566,1136,1080, 0, 0, 0},  //TV = 8.13(336 lines)  AV=2.97  SV=4.99  BV=6.11
    {3820,1136,1080, 0, 0, 0},  //TV = 8.03(360 lines)  AV=2.97  SV=4.99  BV=6.01
    {4117,1136,1080, 0, 0, 0},  //TV = 7.92(388 lines)  AV=2.97  SV=4.99  BV=5.90
    {4413,1136,1080, 0, 0, 0},  //TV = 7.82(416 lines)  AV=2.97  SV=4.99  BV=5.80
    {4720,1136,1080, 0, 0, 0},  //TV = 7.73(445 lines)  AV=2.97  SV=4.99  BV=5.71
    {5059,1136,1080, 0, 0, 0},  //TV = 7.63(477 lines)  AV=2.97  SV=4.99  BV=5.61
    {5408,1136,1080, 0, 0, 0},  //TV = 7.53(510 lines)  AV=2.97  SV=4.99  BV=5.51
    {5800,1136,1080, 0, 0, 0},  //TV = 7.43(547 lines)  AV=2.97  SV=4.99  BV=5.41
    {6202,1136,1080, 0, 0, 0},  //TV = 7.33(585 lines)  AV=2.97  SV=4.99  BV=5.31
    {6646,1136,1080, 0, 0, 0},  //TV = 7.23(627 lines)  AV=2.97  SV=4.99  BV=5.21
    {7123,1136,1080, 0, 0, 0},  //TV = 7.13(672 lines)  AV=2.97  SV=4.99  BV=5.11
    {7673,1136,1080, 0, 0, 0},  //TV = 7.03(724 lines)  AV=2.97  SV=4.99  BV=5.00
    {8223,1136,1080, 0, 0, 0},  //TV = 6.93(776 lines)  AV=2.97  SV=4.99  BV=4.90
    {8805,1136,1080, 0, 0, 0},  //TV = 6.83(831 lines)  AV=2.97  SV=4.99  BV=4.81
    {9440,1136,1080, 0, 0, 0},  //TV = 6.73(891 lines)  AV=2.97  SV=4.99  BV=4.71
    {10002,1136,1096, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.01  BV=4.60
    {10002,1216,1088, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.10  BV=4.51
    {10002,1328,1072, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.21  BV=4.41
    {10002,1424,1064, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.30  BV=4.32
    {10002,1536,1064, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.41  BV=4.21
    {10002,1632,1072, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.50  BV=4.11
    {10002,1728,1080, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.60  BV=4.02
    {10002,1936,1040, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.71  BV=3.91
    {10002,2048,1048, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.80  BV=3.82
    {10002,2240,1024, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.89  BV=3.72
    {20004,1136,1096, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=5.01  BV=3.60
    {20004,1216,1088, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=5.10  BV=3.51
    {20004,1328,1072, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=5.21  BV=3.41
    {20004,1424,1064, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=5.30  BV=3.32
    {20004,1536,1072, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=5.42  BV=3.20
    {20004,1632,1072, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=5.50  BV=3.11
    {29995,1216,1024, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=5.01  BV=3.02
    {29995,1216,1104, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=5.12  BV=2.91
    {29995,1328,1080, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=5.22  BV=2.81
    {29995,1424,1080, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=5.32  BV=2.71
    {39996,1136,1096, 0, 0, 0},  //TV = 4.64(3778 lines)  AV=2.97  SV=5.01  BV=2.60
    {39996,1216,1088, 0, 0, 0},  //TV = 4.64(3778 lines)  AV=2.97  SV=5.10  BV=2.51
    {39996,1328,1072, 0, 0, 0},  //TV = 4.64(3778 lines)  AV=2.97  SV=5.21  BV=2.41
    {39996,1424,1072, 0, 0, 0},  //TV = 4.64(3778 lines)  AV=2.97  SV=5.31  BV=2.31
    {49998,1216,1072, 0, 0, 0},  //TV = 4.32(4723 lines)  AV=2.97  SV=5.08  BV=2.21
    {49998,1328,1048, 0, 0, 0},  //TV = 4.32(4723 lines)  AV=2.97  SV=5.17  BV=2.12
    {60001,1216,1024, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=5.01  BV=2.02
    {60001,1216,1104, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=5.12  BV=1.91
    {60001,1328,1080, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=5.22  BV=1.81
    {60001,1424,1080, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=5.32  BV=1.71
    {60001,1536,1072, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=5.42  BV=1.61
    {60001,1632,1080, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=5.51  BV=1.51
    {60001,1840,1032, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=5.62  BV=1.41
    {60001,1936,1048, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=5.72  BV=1.31
    {60001,2048,1064, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=5.82  BV=1.21
    {60001,2240,1040, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=5.92  BV=1.11
    {60001,2448,1024, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=6.02  BV=1.01
    {60001,2560,1048, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=6.12  BV=0.91
    {60001,2752,1040, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=6.21  BV=0.82
    {60001,2960,1040, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=6.32  BV=0.71
    {60001,3200,1032, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=6.42  BV=0.61
    {60001,3456,1024, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=6.52  BV=0.51
    {60001,3584,1056, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=6.62  BV=0.41
    {60001,3840,1056, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=6.72  BV=0.31
    {60001,4224,1032, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=6.82  BV=0.21
    {60001,4480,1040, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=6.92  BV=0.11
    {70002,4224,1024, 0, 0, 0},  //TV = 3.84(6613 lines)  AV=2.97  SV=6.81  BV=-0.00
    {70002,4480,1032, 0, 0, 0},  //TV = 3.84(6613 lines)  AV=2.97  SV=6.91  BV=-0.10
    {80004,4224,1024, 0, 0, 0},  //TV = 3.64(7558 lines)  AV=2.97  SV=6.81  BV=-0.20
    {80004,4480,1040, 0, 0, 0},  //TV = 3.64(7558 lines)  AV=2.97  SV=6.92  BV=-0.30
    {89995,4224,1048, 0, 0, 0},  //TV = 3.47(8502 lines)  AV=2.97  SV=6.84  BV=-0.40
    {99997,4096,1040, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=6.79  BV=-0.50
    {99997,4480,1024, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=6.89  BV=-0.60
    {99997,4736,1040, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=7.00  BV=-0.70
    {99997,5120,1032, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=7.10  BV=-0.81
    {99997,5504,1024, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=7.19  BV=-0.90
    {99997,5888,1024, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=7.29  BV=-1.00
    {99997,6240,1040, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=7.40  BV=-1.10
    {99997,6704,1032, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=7.49  BV=-1.19
    {99997,7072,1048, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=7.59  BV=-1.29
    {99997,7696,1032, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=7.69  BV=-1.39
    {99997,8192,1048, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=7.80  BV=-1.51
    {99997,8192,1120, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=7.89  BV=-1.60
    {99997,8192,1200, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=7.99  BV=-1.70
    {99997,8192,1288, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=8.10  BV=-1.80
    {99997,8192,1376, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=8.19  BV=-1.90
    {99997,8192,1480, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=8.30  BV=-2.00
    {99997,8192,1584, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=8.39  BV=-2.10
    {99997,8192,1696, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=8.49  BV=-2.20
    {99997,8192,1816, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=8.59  BV=-2.30
    {99997,8192,1944, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=8.69  BV=-2.40
    {99997,8192,2088, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=8.79  BV=-2.50
    {99997,8192,2240, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=8.89  BV=-2.60
    {99997,8192,2400, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=8.99  BV=-2.70
    {99997,8192,2568, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=9.09  BV=-2.80
    {99997,8192,2752, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=9.19  BV=-2.90
    {99997,8192,2952, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=9.29  BV=-3.00
    {99997,8192,3160, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=9.39  BV=-3.10
    {99997,8192,3392, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=9.49  BV=-3.20
    {99997,8192,3632, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=9.59  BV=-3.30
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_CaptureAutoTable =
{
    AETABLE_CAPTURE_AUTO,    //eAETableID
    147,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    113,    //i4MaxBV
    -33,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sCapturePLineTable_60Hz,
    sCapturePLineTable_50Hz,
    NULL,
};

static strEvPline sVideoPLineTable_60Hz =
{
{
    {95,1216,1064, 0, 0, 0},  //TV = 13.36(8 lines)  AV=2.97  SV=5.07  BV=11.26
    {105,1136,1088, 0, 0, 0},  //TV = 13.22(9 lines)  AV=2.97  SV=5.00  BV=11.19
    {105,1216,1072, 0, 0, 0},  //TV = 13.22(9 lines)  AV=2.97  SV=5.08  BV=11.11
    {116,1216,1064, 0, 0, 0},  //TV = 13.07(10 lines)  AV=2.97  SV=5.07  BV=10.98
    {127,1216,1040, 0, 0, 0},  //TV = 12.94(11 lines)  AV=2.97  SV=5.04  BV=10.88
    {137,1136,1096, 0, 0, 0},  //TV = 12.83(12 lines)  AV=2.97  SV=5.01  BV=10.79
    {137,1216,1088, 0, 0, 0},  //TV = 12.83(12 lines)  AV=2.97  SV=5.10  BV=10.70
    {158,1136,1096, 0, 0, 0},  //TV = 12.63(14 lines)  AV=2.97  SV=5.01  BV=10.59
    {169,1216,1024, 0, 0, 0},  //TV = 12.53(15 lines)  AV=2.97  SV=5.01  BV=10.49
    {179,1216,1048, 0, 0, 0},  //TV = 12.45(16 lines)  AV=2.97  SV=5.05  BV=10.37
    {190,1216,1064, 0, 0, 0},  //TV = 12.36(17 lines)  AV=2.97  SV=5.07  BV=10.26
    {201,1216,1040, 0, 0, 0},  //TV = 12.28(18 lines)  AV=2.97  SV=5.04  BV=10.22
    {222,1136,1088, 0, 0, 0},  //TV = 12.14(20 lines)  AV=2.97  SV=5.00  BV=10.11
    {232,1216,1040, 0, 0, 0},  //TV = 12.07(21 lines)  AV=2.97  SV=5.04  BV=10.01
    {254,1136,1088, 0, 0, 0},  //TV = 11.94(23 lines)  AV=2.97  SV=5.00  BV=9.91
    {264,1216,1048, 0, 0, 0},  //TV = 11.89(24 lines)  AV=2.97  SV=5.05  BV=9.81
    {285,1216,1040, 0, 0, 0},  //TV = 11.78(26 lines)  AV=2.97  SV=5.04  BV=9.71
    {306,1216,1040, 0, 0, 0},  //TV = 11.67(28 lines)  AV=2.97  SV=5.04  BV=9.61
    {328,1216,1040, 0, 0, 0},  //TV = 11.57(30 lines)  AV=2.97  SV=5.04  BV=9.51
    {359,1136,1096, 0, 0, 0},  //TV = 11.44(33 lines)  AV=2.97  SV=5.01  BV=9.40
    {381,1216,1024, 0, 0, 0},  //TV = 11.36(35 lines)  AV=2.97  SV=5.01  BV=9.32
    {412,1136,1096, 0, 0, 0},  //TV = 11.25(38 lines)  AV=2.97  SV=5.01  BV=9.20
    {444,1136,1088, 0, 0, 0},  //TV = 11.14(41 lines)  AV=2.97  SV=5.00  BV=9.11
    {476,1136,1088, 0, 0, 0},  //TV = 11.04(44 lines)  AV=2.97  SV=5.00  BV=9.00
    {508,1136,1088, 0, 0, 0},  //TV = 10.94(47 lines)  AV=2.97  SV=5.00  BV=8.91
    {539,1216,1024, 0, 0, 0},  //TV = 10.86(50 lines)  AV=2.97  SV=5.01  BV=8.81
    {582,1136,1096, 0, 0, 0},  //TV = 10.75(54 lines)  AV=2.97  SV=5.01  BV=8.70
    {624,1136,1096, 0, 0, 0},  //TV = 10.65(58 lines)  AV=2.97  SV=5.01  BV=8.60
    {666,1136,1096, 0, 0, 0},  //TV = 10.55(62 lines)  AV=2.97  SV=5.01  BV=8.51
    {719,1136,1088, 0, 0, 0},  //TV = 10.44(67 lines)  AV=2.97  SV=5.00  BV=8.41
    {772,1136,1088, 0, 0, 0},  //TV = 10.34(72 lines)  AV=2.97  SV=5.00  BV=8.31
    {825,1136,1096, 0, 0, 0},  //TV = 10.24(77 lines)  AV=2.97  SV=5.01  BV=8.20
    {889,1136,1088, 0, 0, 0},  //TV = 10.14(83 lines)  AV=2.97  SV=5.00  BV=8.10
    {952,1136,1088, 0, 0, 0},  //TV = 10.04(89 lines)  AV=2.97  SV=5.00  BV=8.00
    {1016,1136,1088, 0, 0, 0},  //TV = 9.94(95 lines)  AV=2.97  SV=5.00  BV=7.91
    {1090,1136,1088, 0, 0, 0},  //TV = 9.84(102 lines)  AV=2.97  SV=5.00  BV=7.81
    {1174,1136,1088, 0, 0, 0},  //TV = 9.73(110 lines)  AV=2.97  SV=5.00  BV=7.70
    {1259,1136,1088, 0, 0, 0},  //TV = 9.63(118 lines)  AV=2.97  SV=5.00  BV=7.60
    {1344,1136,1088, 0, 0, 0},  //TV = 9.54(126 lines)  AV=2.97  SV=5.00  BV=7.51
    {1439,1136,1088, 0, 0, 0},  //TV = 9.44(135 lines)  AV=2.97  SV=5.00  BV=7.41
    {1545,1136,1088, 0, 0, 0},  //TV = 9.34(145 lines)  AV=2.97  SV=5.00  BV=7.31
    {1651,1136,1088, 0, 0, 0},  //TV = 9.24(155 lines)  AV=2.97  SV=5.00  BV=7.21
    {1778,1136,1088, 0, 0, 0},  //TV = 9.14(167 lines)  AV=2.97  SV=5.00  BV=7.10
    {1915,1136,1088, 0, 0, 0},  //TV = 9.03(180 lines)  AV=2.97  SV=5.00  BV=7.00
    {2032,1136,1088, 0, 0, 0},  //TV = 8.94(191 lines)  AV=2.97  SV=5.00  BV=6.91
    {2190,1136,1088, 0, 0, 0},  //TV = 8.83(206 lines)  AV=2.97  SV=5.00  BV=6.80
    {2360,1136,1080, 0, 0, 0},  //TV = 8.73(222 lines)  AV=2.97  SV=4.99  BV=6.71
    {2529,1136,1080, 0, 0, 0},  //TV = 8.63(238 lines)  AV=2.97  SV=4.99  BV=6.61
    {2698,1136,1088, 0, 0, 0},  //TV = 8.53(254 lines)  AV=2.97  SV=5.00  BV=6.50
    {2910,1136,1080, 0, 0, 0},  //TV = 8.42(274 lines)  AV=2.97  SV=4.99  BV=6.40
    {3111,1136,1080, 0, 0, 0},  //TV = 8.33(293 lines)  AV=2.97  SV=4.99  BV=6.31
    {3333,1136,1080, 0, 0, 0},  //TV = 8.23(314 lines)  AV=2.97  SV=4.99  BV=6.21
    {3566,1136,1080, 0, 0, 0},  //TV = 8.13(336 lines)  AV=2.97  SV=4.99  BV=6.11
    {3820,1136,1080, 0, 0, 0},  //TV = 8.03(360 lines)  AV=2.97  SV=4.99  BV=6.01
    {4117,1136,1080, 0, 0, 0},  //TV = 7.92(388 lines)  AV=2.97  SV=4.99  BV=5.90
    {4413,1136,1080, 0, 0, 0},  //TV = 7.82(416 lines)  AV=2.97  SV=4.99  BV=5.80
    {4720,1136,1080, 0, 0, 0},  //TV = 7.73(445 lines)  AV=2.97  SV=4.99  BV=5.71
    {5059,1136,1080, 0, 0, 0},  //TV = 7.63(477 lines)  AV=2.97  SV=4.99  BV=5.61
    {5408,1136,1080, 0, 0, 0},  //TV = 7.53(510 lines)  AV=2.97  SV=4.99  BV=5.51
    {5800,1136,1080, 0, 0, 0},  //TV = 7.43(547 lines)  AV=2.97  SV=4.99  BV=5.41
    {6202,1136,1080, 0, 0, 0},  //TV = 7.33(585 lines)  AV=2.97  SV=4.99  BV=5.31
    {6646,1136,1080, 0, 0, 0},  //TV = 7.23(627 lines)  AV=2.97  SV=4.99  BV=5.21
    {7123,1136,1080, 0, 0, 0},  //TV = 7.13(672 lines)  AV=2.97  SV=4.99  BV=5.11
    {7673,1136,1080, 0, 0, 0},  //TV = 7.03(724 lines)  AV=2.97  SV=4.99  BV=5.00
    {8223,1136,1080, 0, 0, 0},  //TV = 6.93(776 lines)  AV=2.97  SV=4.99  BV=4.90
    {8329,1216,1064, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.07  BV=4.81
    {8329,1328,1048, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.17  BV=4.70
    {8329,1424,1040, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.26  BV=4.61
    {8329,1536,1040, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.37  BV=4.51
    {8329,1632,1048, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.47  BV=4.41
    {8329,1728,1056, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.56  BV=4.31
    {8329,1840,1064, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.67  BV=4.21
    {8329,2048,1024, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.77  BV=4.11
    {8329,2144,1048, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.87  BV=4.01
    {8329,2352,1024, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.97  BV=3.91
    {16670,1216,1064, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=5.07  BV=3.81
    {16670,1328,1048, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=5.17  BV=3.70
    {16670,1424,1040, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=5.26  BV=3.61
    {16670,1536,1040, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=5.37  BV=3.50
    {16670,1632,1048, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=5.47  BV=3.41
    {16670,1728,1064, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=5.58  BV=3.30
    {16670,1840,1064, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=5.67  BV=3.21
    {16670,2048,1024, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=5.77  BV=3.11
    {16670,2144,1048, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=5.87  BV=3.01
    {16670,2352,1024, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=5.97  BV=2.91
    {16670,2448,1056, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=6.07  BV=2.81
    {16670,2656,1048, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=6.17  BV=2.70
    {16670,2864,1040, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=6.27  BV=2.61
    {16670,3072,1032, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=6.36  BV=2.52
    {16670,3328,1024, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=6.47  BV=2.41
    {16670,3456,1056, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=6.56  BV=2.31
    {16670,3712,1056, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=6.67  BV=2.21
    {16670,4096,1024, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=6.77  BV=2.11
    {16670,4352,1032, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=6.86  BV=2.01
    {24988,3072,1048, 0, 0, 0},  //TV = 5.32(2360 lines)  AV=2.97  SV=6.38  BV=1.91
    {24988,3328,1040, 0, 0, 0},  //TV = 5.32(2360 lines)  AV=2.97  SV=6.49  BV=1.81
    {24988,3584,1032, 0, 0, 0},  //TV = 5.32(2360 lines)  AV=2.97  SV=6.58  BV=1.71
    {24988,3840,1032, 0, 0, 0},  //TV = 5.32(2360 lines)  AV=2.97  SV=6.68  BV=1.61
    {33298,3072,1040, 0, 0, 0},  //TV = 4.91(3146 lines)  AV=2.97  SV=6.37  BV=1.51
    {33298,3328,1024, 0, 0, 0},  //TV = 4.91(3146 lines)  AV=2.97  SV=6.47  BV=1.41
    {33298,3584,1024, 0, 0, 0},  //TV = 4.91(3146 lines)  AV=2.97  SV=6.57  BV=1.31
    {33298,3840,1024, 0, 0, 0},  //TV = 4.91(3146 lines)  AV=2.97  SV=6.67  BV=1.21
    {33298,4096,1024, 0, 0, 0},  //TV = 4.91(3146 lines)  AV=2.97  SV=6.77  BV=1.11
    {33298,4352,1032, 0, 0, 0},  //TV = 4.91(3146 lines)  AV=2.97  SV=6.86  BV=1.02
    {33298,4608,1048, 0, 0, 0},  //TV = 4.91(3146 lines)  AV=2.97  SV=6.97  BV=0.91
    {33298,4992,1032, 0, 0, 0},  //TV = 4.91(3146 lines)  AV=2.97  SV=7.06  BV=0.82
    {33298,5376,1032, 0, 0, 0},  //TV = 4.91(3146 lines)  AV=2.97  SV=7.17  BV=0.71
    {33298,5760,1032, 0, 0, 0},  //TV = 4.91(3146 lines)  AV=2.97  SV=7.27  BV=0.61
    {33298,6240,1024, 0, 0, 0},  //TV = 4.91(3146 lines)  AV=2.97  SV=7.37  BV=0.51
    {33298,6544,1040, 0, 0, 0},  //TV = 4.91(3146 lines)  AV=2.97  SV=7.46  BV=0.42
    {33298,7072,1032, 0, 0, 0},  //TV = 4.91(3146 lines)  AV=2.97  SV=7.56  BV=0.31
    {33298,7472,1048, 0, 0, 0},  //TV = 4.91(3146 lines)  AV=2.97  SV=7.67  BV=0.21
    {33298,8192,1024, 0, 0, 0},  //TV = 4.91(3146 lines)  AV=2.97  SV=7.77  BV=0.11
    {33298,8192,1104, 0, 0, 0},  //TV = 4.91(3146 lines)  AV=2.97  SV=7.87  BV=0.01
    {33298,8192,1192, 0, 0, 0},  //TV = 4.91(3146 lines)  AV=2.97  SV=7.98  BV=-0.11
    {33298,8192,1280, 0, 0, 0},  //TV = 4.91(3146 lines)  AV=2.97  SV=8.09  BV=-0.21
    {33298,8192,1368, 0, 0, 0},  //TV = 4.91(3146 lines)  AV=2.97  SV=8.18  BV=-0.30
    {33298,8192,1464, 0, 0, 0},  //TV = 4.91(3146 lines)  AV=2.97  SV=8.28  BV=-0.40
    {33298,8192,1576, 0, 0, 0},  //TV = 4.91(3146 lines)  AV=2.97  SV=8.39  BV=-0.51
    {41669,8192,1344, 0, 0, 0},  //TV = 4.58(3936 lines)  AV=2.97  SV=8.16  BV=-0.60
    {41669,8192,1440, 0, 0, 0},  //TV = 4.58(3936 lines)  AV=2.97  SV=8.26  BV=-0.70
    {49999,8192,1288, 0, 0, 0},  //TV = 4.32(4724 lines)  AV=2.97  SV=8.10  BV=-0.80
    {49999,8192,1384, 0, 0, 0},  //TV = 4.32(4724 lines)  AV=2.97  SV=8.20  BV=-0.91
    {49999,8192,1480, 0, 0, 0},  //TV = 4.32(4724 lines)  AV=2.97  SV=8.30  BV=-1.00
    {58328,8192,1360, 0, 0, 0},  //TV = 4.10(5510 lines)  AV=2.97  SV=8.17  BV=-1.10
    {58328,8192,1456, 0, 0, 0},  //TV = 4.10(5510 lines)  AV=2.97  SV=8.27  BV=-1.20
    {66627,8192,1368, 0, 0, 0},  //TV = 3.91(6295 lines)  AV=2.97  SV=8.18  BV=-1.30
    {66627,8192,1464, 0, 0, 0},  //TV = 3.91(6295 lines)  AV=2.97  SV=8.28  BV=-1.40
    {66627,8192,1568, 0, 0, 0},  //TV = 3.91(6295 lines)  AV=2.97  SV=8.38  BV=-1.50
    {66627,8192,1680, 0, 0, 0},  //TV = 3.91(6295 lines)  AV=2.97  SV=8.48  BV=-1.60
    {66627,8192,1808, 0, 0, 0},  //TV = 3.91(6295 lines)  AV=2.97  SV=8.59  BV=-1.71
    {66627,8192,1936, 0, 0, 0},  //TV = 3.91(6295 lines)  AV=2.97  SV=8.68  BV=-1.81
    {66627,8192,2072, 0, 0, 0},  //TV = 3.91(6295 lines)  AV=2.97  SV=8.78  BV=-1.90
    {66627,8192,2216, 0, 0, 0},  //TV = 3.91(6295 lines)  AV=2.97  SV=8.88  BV=-2.00
    {66627,8192,2376, 0, 0, 0},  //TV = 3.91(6295 lines)  AV=2.97  SV=8.98  BV=-2.10
    {66627,8192,2552, 0, 0, 0},  //TV = 3.91(6295 lines)  AV=2.97  SV=9.08  BV=-2.20
    {66627,8192,2728, 0, 0, 0},  //TV = 3.91(6295 lines)  AV=2.97  SV=9.18  BV=-2.30
    {66627,8192,2928, 0, 0, 0},  //TV = 3.91(6295 lines)  AV=2.97  SV=9.28  BV=-2.40
    {66627,8192,3136, 0, 0, 0},  //TV = 3.91(6295 lines)  AV=2.97  SV=9.38  BV=-2.50
    {66627,8192,3360, 0, 0, 0},  //TV = 3.91(6295 lines)  AV=2.97  SV=9.48  BV=-2.60
    {66627,8192,3600, 0, 0, 0},  //TV = 3.91(6295 lines)  AV=2.97  SV=9.58  BV=-2.70
    {66627,8192,3864, 0, 0, 0},  //TV = 3.91(6295 lines)  AV=2.97  SV=9.68  BV=-2.80
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sVideoPLineTable_50Hz =
{
{
    {95,1216,1064, 0, 0, 0},  //TV = 13.36(8 lines)  AV=2.97  SV=5.07  BV=11.26
    {105,1136,1088, 0, 0, 0},  //TV = 13.22(9 lines)  AV=2.97  SV=5.00  BV=11.19
    {105,1216,1072, 0, 0, 0},  //TV = 13.22(9 lines)  AV=2.97  SV=5.08  BV=11.11
    {116,1216,1064, 0, 0, 0},  //TV = 13.07(10 lines)  AV=2.97  SV=5.07  BV=10.98
    {127,1216,1040, 0, 0, 0},  //TV = 12.94(11 lines)  AV=2.97  SV=5.04  BV=10.88
    {137,1136,1096, 0, 0, 0},  //TV = 12.83(12 lines)  AV=2.97  SV=5.01  BV=10.79
    {137,1216,1088, 0, 0, 0},  //TV = 12.83(12 lines)  AV=2.97  SV=5.10  BV=10.70
    {158,1136,1096, 0, 0, 0},  //TV = 12.63(14 lines)  AV=2.97  SV=5.01  BV=10.59
    {169,1216,1024, 0, 0, 0},  //TV = 12.53(15 lines)  AV=2.97  SV=5.01  BV=10.49
    {179,1216,1048, 0, 0, 0},  //TV = 12.45(16 lines)  AV=2.97  SV=5.05  BV=10.37
    {190,1216,1064, 0, 0, 0},  //TV = 12.36(17 lines)  AV=2.97  SV=5.07  BV=10.26
    {201,1216,1040, 0, 0, 0},  //TV = 12.28(18 lines)  AV=2.97  SV=5.04  BV=10.22
    {222,1136,1088, 0, 0, 0},  //TV = 12.14(20 lines)  AV=2.97  SV=5.00  BV=10.11
    {232,1216,1040, 0, 0, 0},  //TV = 12.07(21 lines)  AV=2.97  SV=5.04  BV=10.01
    {254,1136,1088, 0, 0, 0},  //TV = 11.94(23 lines)  AV=2.97  SV=5.00  BV=9.91
    {264,1216,1048, 0, 0, 0},  //TV = 11.89(24 lines)  AV=2.97  SV=5.05  BV=9.81
    {285,1216,1040, 0, 0, 0},  //TV = 11.78(26 lines)  AV=2.97  SV=5.04  BV=9.71
    {306,1216,1040, 0, 0, 0},  //TV = 11.67(28 lines)  AV=2.97  SV=5.04  BV=9.61
    {328,1216,1040, 0, 0, 0},  //TV = 11.57(30 lines)  AV=2.97  SV=5.04  BV=9.51
    {359,1136,1096, 0, 0, 0},  //TV = 11.44(33 lines)  AV=2.97  SV=5.01  BV=9.40
    {381,1216,1024, 0, 0, 0},  //TV = 11.36(35 lines)  AV=2.97  SV=5.01  BV=9.32
    {412,1136,1096, 0, 0, 0},  //TV = 11.25(38 lines)  AV=2.97  SV=5.01  BV=9.20
    {444,1136,1088, 0, 0, 0},  //TV = 11.14(41 lines)  AV=2.97  SV=5.00  BV=9.11
    {476,1136,1088, 0, 0, 0},  //TV = 11.04(44 lines)  AV=2.97  SV=5.00  BV=9.00
    {508,1136,1088, 0, 0, 0},  //TV = 10.94(47 lines)  AV=2.97  SV=5.00  BV=8.91
    {539,1216,1024, 0, 0, 0},  //TV = 10.86(50 lines)  AV=2.97  SV=5.01  BV=8.81
    {582,1136,1096, 0, 0, 0},  //TV = 10.75(54 lines)  AV=2.97  SV=5.01  BV=8.70
    {624,1136,1096, 0, 0, 0},  //TV = 10.65(58 lines)  AV=2.97  SV=5.01  BV=8.60
    {666,1136,1096, 0, 0, 0},  //TV = 10.55(62 lines)  AV=2.97  SV=5.01  BV=8.51
    {719,1136,1088, 0, 0, 0},  //TV = 10.44(67 lines)  AV=2.97  SV=5.00  BV=8.41
    {772,1136,1088, 0, 0, 0},  //TV = 10.34(72 lines)  AV=2.97  SV=5.00  BV=8.31
    {825,1136,1096, 0, 0, 0},  //TV = 10.24(77 lines)  AV=2.97  SV=5.01  BV=8.20
    {889,1136,1088, 0, 0, 0},  //TV = 10.14(83 lines)  AV=2.97  SV=5.00  BV=8.10
    {952,1136,1088, 0, 0, 0},  //TV = 10.04(89 lines)  AV=2.97  SV=5.00  BV=8.00
    {1016,1136,1088, 0, 0, 0},  //TV = 9.94(95 lines)  AV=2.97  SV=5.00  BV=7.91
    {1090,1136,1088, 0, 0, 0},  //TV = 9.84(102 lines)  AV=2.97  SV=5.00  BV=7.81
    {1174,1136,1088, 0, 0, 0},  //TV = 9.73(110 lines)  AV=2.97  SV=5.00  BV=7.70
    {1259,1136,1088, 0, 0, 0},  //TV = 9.63(118 lines)  AV=2.97  SV=5.00  BV=7.60
    {1344,1136,1088, 0, 0, 0},  //TV = 9.54(126 lines)  AV=2.97  SV=5.00  BV=7.51
    {1439,1136,1088, 0, 0, 0},  //TV = 9.44(135 lines)  AV=2.97  SV=5.00  BV=7.41
    {1545,1136,1088, 0, 0, 0},  //TV = 9.34(145 lines)  AV=2.97  SV=5.00  BV=7.31
    {1651,1136,1088, 0, 0, 0},  //TV = 9.24(155 lines)  AV=2.97  SV=5.00  BV=7.21
    {1778,1136,1088, 0, 0, 0},  //TV = 9.14(167 lines)  AV=2.97  SV=5.00  BV=7.10
    {1915,1136,1088, 0, 0, 0},  //TV = 9.03(180 lines)  AV=2.97  SV=5.00  BV=7.00
    {2032,1136,1088, 0, 0, 0},  //TV = 8.94(191 lines)  AV=2.97  SV=5.00  BV=6.91
    {2190,1136,1088, 0, 0, 0},  //TV = 8.83(206 lines)  AV=2.97  SV=5.00  BV=6.80
    {2360,1136,1080, 0, 0, 0},  //TV = 8.73(222 lines)  AV=2.97  SV=4.99  BV=6.71
    {2529,1136,1080, 0, 0, 0},  //TV = 8.63(238 lines)  AV=2.97  SV=4.99  BV=6.61
    {2698,1136,1088, 0, 0, 0},  //TV = 8.53(254 lines)  AV=2.97  SV=5.00  BV=6.50
    {2910,1136,1080, 0, 0, 0},  //TV = 8.42(274 lines)  AV=2.97  SV=4.99  BV=6.40
    {3111,1136,1080, 0, 0, 0},  //TV = 8.33(293 lines)  AV=2.97  SV=4.99  BV=6.31
    {3333,1136,1080, 0, 0, 0},  //TV = 8.23(314 lines)  AV=2.97  SV=4.99  BV=6.21
    {3566,1136,1080, 0, 0, 0},  //TV = 8.13(336 lines)  AV=2.97  SV=4.99  BV=6.11
    {3820,1136,1080, 0, 0, 0},  //TV = 8.03(360 lines)  AV=2.97  SV=4.99  BV=6.01
    {4117,1136,1080, 0, 0, 0},  //TV = 7.92(388 lines)  AV=2.97  SV=4.99  BV=5.90
    {4413,1136,1080, 0, 0, 0},  //TV = 7.82(416 lines)  AV=2.97  SV=4.99  BV=5.80
    {4720,1136,1080, 0, 0, 0},  //TV = 7.73(445 lines)  AV=2.97  SV=4.99  BV=5.71
    {5059,1136,1080, 0, 0, 0},  //TV = 7.63(477 lines)  AV=2.97  SV=4.99  BV=5.61
    {5408,1136,1080, 0, 0, 0},  //TV = 7.53(510 lines)  AV=2.97  SV=4.99  BV=5.51
    {5800,1136,1080, 0, 0, 0},  //TV = 7.43(547 lines)  AV=2.97  SV=4.99  BV=5.41
    {6202,1136,1080, 0, 0, 0},  //TV = 7.33(585 lines)  AV=2.97  SV=4.99  BV=5.31
    {6646,1136,1080, 0, 0, 0},  //TV = 7.23(627 lines)  AV=2.97  SV=4.99  BV=5.21
    {7123,1136,1080, 0, 0, 0},  //TV = 7.13(672 lines)  AV=2.97  SV=4.99  BV=5.11
    {7673,1136,1080, 0, 0, 0},  //TV = 7.03(724 lines)  AV=2.97  SV=4.99  BV=5.00
    {8223,1136,1080, 0, 0, 0},  //TV = 6.93(776 lines)  AV=2.97  SV=4.99  BV=4.90
    {8805,1136,1080, 0, 0, 0},  //TV = 6.83(831 lines)  AV=2.97  SV=4.99  BV=4.81
    {9440,1136,1080, 0, 0, 0},  //TV = 6.73(891 lines)  AV=2.97  SV=4.99  BV=4.71
    {10002,1136,1096, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.01  BV=4.60
    {10002,1216,1088, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.10  BV=4.51
    {10002,1328,1072, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.21  BV=4.41
    {10002,1424,1064, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.30  BV=4.32
    {10002,1536,1064, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.41  BV=4.21
    {10002,1632,1072, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.50  BV=4.11
    {10002,1728,1080, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.60  BV=4.02
    {10002,1936,1040, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.71  BV=3.91
    {10002,2048,1056, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.81  BV=3.80
    {10002,2240,1024, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.89  BV=3.72
    {10002,2352,1048, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=6.00  BV=3.62
    {10002,2560,1040, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=6.11  BV=3.50
    {10002,2752,1032, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=6.20  BV=3.41
    {10002,2960,1024, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=6.30  BV=3.32
    {10002,3072,1064, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=6.41  BV=3.21
    {10002,3328,1048, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=6.50  BV=3.12
    {10002,3584,1040, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=6.60  BV=3.02
    {10002,3840,1048, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=6.71  BV=2.91
    {10002,4096,1048, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=6.80  BV=2.82
    {10002,4480,1024, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=6.89  BV=2.72
    {10002,4736,1048, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=7.01  BV=2.61
    {10002,5120,1032, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=7.10  BV=2.52
    {10002,5504,1032, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=7.20  BV=2.41
    {10002,5888,1032, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=7.30  BV=2.31
    {20004,3072,1064, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=6.41  BV=2.21
    {20004,3328,1056, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=6.51  BV=2.10
    {20004,3584,1040, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=6.60  BV=2.02
    {20004,3840,1040, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=6.69  BV=1.92
    {20004,4096,1048, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=6.80  BV=1.82
    {20004,4480,1024, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=6.89  BV=1.72
    {29995,3200,1024, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=6.41  BV=1.62
    {29995,3456,1024, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=6.52  BV=1.51
    {29995,3584,1056, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=6.62  BV=1.41
    {29995,3968,1024, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=6.72  BV=1.31
    {29995,4224,1032, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=6.82  BV=1.21
    {29995,4480,1040, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=6.92  BV=1.11
    {29995,4864,1024, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=7.01  BV=1.02
    {29995,5120,1048, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=7.12  BV=0.91
    {29995,5632,1024, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=7.22  BV=0.81
    {29995,6016,1024, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=7.32  BV=0.71
    {29995,6384,1032, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=7.42  BV=0.61
    {29995,6896,1024, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=7.52  BV=0.51
    {29995,7280,1040, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=7.62  BV=0.41
    {29995,7936,1024, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=7.72  BV=0.31
    {29995,8192,1064, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=7.82  BV=0.21
    {29995,8192,1136, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=7.92  BV=0.11
    {29995,8192,1232, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=8.03  BV=-0.00
    {29995,8192,1320, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=8.13  BV=-0.10
    {29995,8192,1416, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=8.23  BV=-0.20
    {29995,8192,1520, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=8.34  BV=-0.31
    {29995,8192,1632, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=8.44  BV=-0.41
    {39996,8192,1312, 0, 0, 0},  //TV = 4.64(3778 lines)  AV=2.97  SV=8.12  BV=-0.51
    {39996,8192,1400, 0, 0, 0},  //TV = 4.64(3778 lines)  AV=2.97  SV=8.22  BV=-0.60
    {39996,8192,1504, 0, 0, 0},  //TV = 4.64(3778 lines)  AV=2.97  SV=8.32  BV=-0.71
    {49998,8192,1288, 0, 0, 0},  //TV = 4.32(4723 lines)  AV=2.97  SV=8.10  BV=-0.80
    {49998,8192,1384, 0, 0, 0},  //TV = 4.32(4723 lines)  AV=2.97  SV=8.20  BV=-0.91
    {49998,8192,1480, 0, 0, 0},  //TV = 4.32(4723 lines)  AV=2.97  SV=8.30  BV=-1.00
    {60001,8192,1320, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=8.13  BV=-1.10
    {60001,8192,1416, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=8.23  BV=-1.20
    {60001,8192,1520, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=8.34  BV=-1.31
    {60001,8192,1632, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=8.44  BV=-1.41
    {60001,8192,1744, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=8.53  BV=-1.50
    {60001,8192,1872, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=8.64  BV=-1.61
    {60001,8192,2000, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=8.73  BV=-1.70
    {60001,8192,2144, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=8.83  BV=-1.80
    {60001,8192,2304, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=8.94  BV=-1.91
    {60001,8192,2464, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=9.03  BV=-2.00
    {60001,8192,2640, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=9.13  BV=-2.10
    {60001,8192,2832, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=9.23  BV=-2.20
    {60001,8192,3032, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=9.33  BV=-2.30
    {60001,8192,3248, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=9.43  BV=-2.40
    {60001,8192,3480, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=9.53  BV=-2.50
    {60001,8192,3736, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=9.63  BV=-2.60
    {60001,8192,4000, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=9.73  BV=-2.70
    {60001,8192,4288, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=9.83  BV=-2.80
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_VideoAutoTable =
{
    AETABLE_VIDEO_AUTO,    //eAETableID
    142,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    113,    //i4MaxBV
    -28,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sVideoPLineTable_60Hz,
    sVideoPLineTable_50Hz,
    NULL,
};

static strEvPline sVideo1PLineTable_60Hz =
{
{
    {95,1216,1064, 0, 0, 0},  //TV = 13.36(8 lines)  AV=2.97  SV=5.07  BV=11.26
    {105,1136,1088, 0, 0, 0},  //TV = 13.22(9 lines)  AV=2.97  SV=5.00  BV=11.19
    {105,1216,1072, 0, 0, 0},  //TV = 13.22(9 lines)  AV=2.97  SV=5.08  BV=11.11
    {116,1216,1064, 0, 0, 0},  //TV = 13.07(10 lines)  AV=2.97  SV=5.07  BV=10.98
    {127,1216,1040, 0, 0, 0},  //TV = 12.94(11 lines)  AV=2.97  SV=5.04  BV=10.88
    {137,1136,1096, 0, 0, 0},  //TV = 12.83(12 lines)  AV=2.97  SV=5.01  BV=10.79
    {137,1216,1088, 0, 0, 0},  //TV = 12.83(12 lines)  AV=2.97  SV=5.10  BV=10.70
    {158,1136,1096, 0, 0, 0},  //TV = 12.63(14 lines)  AV=2.97  SV=5.01  BV=10.59
    {169,1216,1024, 0, 0, 0},  //TV = 12.53(15 lines)  AV=2.97  SV=5.01  BV=10.49
    {179,1216,1048, 0, 0, 0},  //TV = 12.45(16 lines)  AV=2.97  SV=5.05  BV=10.37
    {190,1216,1064, 0, 0, 0},  //TV = 12.36(17 lines)  AV=2.97  SV=5.07  BV=10.26
    {201,1216,1040, 0, 0, 0},  //TV = 12.28(18 lines)  AV=2.97  SV=5.04  BV=10.22
    {222,1136,1088, 0, 0, 0},  //TV = 12.14(20 lines)  AV=2.97  SV=5.00  BV=10.11
    {232,1216,1040, 0, 0, 0},  //TV = 12.07(21 lines)  AV=2.97  SV=5.04  BV=10.01
    {254,1136,1088, 0, 0, 0},  //TV = 11.94(23 lines)  AV=2.97  SV=5.00  BV=9.91
    {264,1216,1048, 0, 0, 0},  //TV = 11.89(24 lines)  AV=2.97  SV=5.05  BV=9.81
    {285,1216,1040, 0, 0, 0},  //TV = 11.78(26 lines)  AV=2.97  SV=5.04  BV=9.71
    {306,1216,1040, 0, 0, 0},  //TV = 11.67(28 lines)  AV=2.97  SV=5.04  BV=9.61
    {328,1216,1040, 0, 0, 0},  //TV = 11.57(30 lines)  AV=2.97  SV=5.04  BV=9.51
    {359,1136,1096, 0, 0, 0},  //TV = 11.44(33 lines)  AV=2.97  SV=5.01  BV=9.40
    {381,1216,1024, 0, 0, 0},  //TV = 11.36(35 lines)  AV=2.97  SV=5.01  BV=9.32
    {412,1136,1096, 0, 0, 0},  //TV = 11.25(38 lines)  AV=2.97  SV=5.01  BV=9.20
    {444,1136,1088, 0, 0, 0},  //TV = 11.14(41 lines)  AV=2.97  SV=5.00  BV=9.11
    {476,1136,1088, 0, 0, 0},  //TV = 11.04(44 lines)  AV=2.97  SV=5.00  BV=9.00
    {508,1136,1088, 0, 0, 0},  //TV = 10.94(47 lines)  AV=2.97  SV=5.00  BV=8.91
    {539,1216,1024, 0, 0, 0},  //TV = 10.86(50 lines)  AV=2.97  SV=5.01  BV=8.81
    {582,1136,1096, 0, 0, 0},  //TV = 10.75(54 lines)  AV=2.97  SV=5.01  BV=8.70
    {624,1136,1096, 0, 0, 0},  //TV = 10.65(58 lines)  AV=2.97  SV=5.01  BV=8.60
    {666,1136,1096, 0, 0, 0},  //TV = 10.55(62 lines)  AV=2.97  SV=5.01  BV=8.51
    {719,1136,1088, 0, 0, 0},  //TV = 10.44(67 lines)  AV=2.97  SV=5.00  BV=8.41
    {772,1136,1088, 0, 0, 0},  //TV = 10.34(72 lines)  AV=2.97  SV=5.00  BV=8.31
    {825,1136,1096, 0, 0, 0},  //TV = 10.24(77 lines)  AV=2.97  SV=5.01  BV=8.20
    {889,1136,1088, 0, 0, 0},  //TV = 10.14(83 lines)  AV=2.97  SV=5.00  BV=8.10
    {952,1136,1088, 0, 0, 0},  //TV = 10.04(89 lines)  AV=2.97  SV=5.00  BV=8.00
    {1016,1136,1088, 0, 0, 0},  //TV = 9.94(95 lines)  AV=2.97  SV=5.00  BV=7.91
    {1090,1136,1088, 0, 0, 0},  //TV = 9.84(102 lines)  AV=2.97  SV=5.00  BV=7.81
    {1174,1136,1088, 0, 0, 0},  //TV = 9.73(110 lines)  AV=2.97  SV=5.00  BV=7.70
    {1259,1136,1088, 0, 0, 0},  //TV = 9.63(118 lines)  AV=2.97  SV=5.00  BV=7.60
    {1344,1136,1088, 0, 0, 0},  //TV = 9.54(126 lines)  AV=2.97  SV=5.00  BV=7.51
    {1439,1136,1088, 0, 0, 0},  //TV = 9.44(135 lines)  AV=2.97  SV=5.00  BV=7.41
    {1545,1136,1088, 0, 0, 0},  //TV = 9.34(145 lines)  AV=2.97  SV=5.00  BV=7.31
    {1651,1136,1088, 0, 0, 0},  //TV = 9.24(155 lines)  AV=2.97  SV=5.00  BV=7.21
    {1778,1136,1088, 0, 0, 0},  //TV = 9.14(167 lines)  AV=2.97  SV=5.00  BV=7.10
    {1915,1136,1088, 0, 0, 0},  //TV = 9.03(180 lines)  AV=2.97  SV=5.00  BV=7.00
    {2032,1136,1088, 0, 0, 0},  //TV = 8.94(191 lines)  AV=2.97  SV=5.00  BV=6.91
    {2190,1136,1088, 0, 0, 0},  //TV = 8.83(206 lines)  AV=2.97  SV=5.00  BV=6.80
    {2360,1136,1080, 0, 0, 0},  //TV = 8.73(222 lines)  AV=2.97  SV=4.99  BV=6.71
    {2529,1136,1080, 0, 0, 0},  //TV = 8.63(238 lines)  AV=2.97  SV=4.99  BV=6.61
    {2698,1136,1088, 0, 0, 0},  //TV = 8.53(254 lines)  AV=2.97  SV=5.00  BV=6.50
    {2910,1136,1080, 0, 0, 0},  //TV = 8.42(274 lines)  AV=2.97  SV=4.99  BV=6.40
    {3111,1136,1080, 0, 0, 0},  //TV = 8.33(293 lines)  AV=2.97  SV=4.99  BV=6.31
    {3333,1136,1080, 0, 0, 0},  //TV = 8.23(314 lines)  AV=2.97  SV=4.99  BV=6.21
    {3566,1136,1080, 0, 0, 0},  //TV = 8.13(336 lines)  AV=2.97  SV=4.99  BV=6.11
    {3820,1136,1080, 0, 0, 0},  //TV = 8.03(360 lines)  AV=2.97  SV=4.99  BV=6.01
    {4117,1136,1080, 0, 0, 0},  //TV = 7.92(388 lines)  AV=2.97  SV=4.99  BV=5.90
    {4413,1136,1080, 0, 0, 0},  //TV = 7.82(416 lines)  AV=2.97  SV=4.99  BV=5.80
    {4720,1136,1080, 0, 0, 0},  //TV = 7.73(445 lines)  AV=2.97  SV=4.99  BV=5.71
    {5059,1136,1080, 0, 0, 0},  //TV = 7.63(477 lines)  AV=2.97  SV=4.99  BV=5.61
    {5408,1136,1080, 0, 0, 0},  //TV = 7.53(510 lines)  AV=2.97  SV=4.99  BV=5.51
    {5800,1136,1080, 0, 0, 0},  //TV = 7.43(547 lines)  AV=2.97  SV=4.99  BV=5.41
    {6202,1136,1080, 0, 0, 0},  //TV = 7.33(585 lines)  AV=2.97  SV=4.99  BV=5.31
    {6646,1136,1080, 0, 0, 0},  //TV = 7.23(627 lines)  AV=2.97  SV=4.99  BV=5.21
    {7123,1136,1080, 0, 0, 0},  //TV = 7.13(672 lines)  AV=2.97  SV=4.99  BV=5.11
    {7673,1136,1080, 0, 0, 0},  //TV = 7.03(724 lines)  AV=2.97  SV=4.99  BV=5.00
    {8223,1136,1080, 0, 0, 0},  //TV = 6.93(776 lines)  AV=2.97  SV=4.99  BV=4.90
    {8265,1216,1064, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.07  BV=4.81
    {8265,1328,1048, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.17  BV=4.70
    {8265,1424,1040, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.26  BV=4.61
    {8265,1536,1040, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.37  BV=4.51
    {8265,1632,1048, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.47  BV=4.41
    {8265,1728,1064, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.58  BV=4.30
    {8265,1840,1064, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.67  BV=4.21
    {8265,2048,1024, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.77  BV=4.11
    {8265,2144,1048, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.87  BV=4.01
    {8265,2352,1024, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.97  BV=3.91
    {8265,2448,1056, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=6.07  BV=3.81
    {8265,2656,1040, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=6.16  BV=3.72
    {8265,2864,1040, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=6.27  BV=3.61
    {8265,3072,1040, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=6.37  BV=3.51
    {8265,3328,1024, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=6.47  BV=3.41
    {8265,3456,1056, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=6.56  BV=3.31
    {8265,3840,1024, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=6.67  BV=3.21
    {8265,4096,1024, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=6.77  BV=3.11
    {8265,4352,1032, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=6.86  BV=3.01
    {8265,4608,1048, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=6.97  BV=2.91
    {8265,4992,1032, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=7.06  BV=2.82
    {8265,5376,1024, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=7.16  BV=2.72
    {8265,5760,1032, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=7.27  BV=2.61
    {8265,6240,1024, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=7.37  BV=2.51
    {8265,6544,1040, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=7.46  BV=2.41
    {8265,7072,1032, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=7.56  BV=2.31
    {8265,7472,1048, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=7.67  BV=2.21
    {8265,8192,1024, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=7.77  BV=2.11
    {8265,8192,1096, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=7.86  BV=2.01
    {8265,8192,1176, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=7.97  BV=1.91
    {8265,8192,1264, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=8.07  BV=1.81
    {8265,8192,1352, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=8.17  BV=1.71
    {8265,8192,1456, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=8.27  BV=1.61
    {8265,8192,1560, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=8.37  BV=1.51
    {8265,8192,1672, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=8.47  BV=1.41
    {8265,8192,1792, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=8.57  BV=1.31
    {8265,8192,1920, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=8.67  BV=1.21
    {8265,8192,2056, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=8.77  BV=1.11
    {8265,8192,2208, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=8.87  BV=1.00
    {8265,8192,2368, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=8.97  BV=0.90
    {8265,8192,2536, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=9.07  BV=0.80
    {8265,8192,2720, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=9.17  BV=0.70
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sVideo1PLineTable_50Hz =
{
{
    {95,1216,1064, 0, 0, 0},  //TV = 13.36(8 lines)  AV=2.97  SV=5.07  BV=11.26
    {105,1136,1088, 0, 0, 0},  //TV = 13.22(9 lines)  AV=2.97  SV=5.00  BV=11.19
    {105,1216,1072, 0, 0, 0},  //TV = 13.22(9 lines)  AV=2.97  SV=5.08  BV=11.11
    {116,1216,1064, 0, 0, 0},  //TV = 13.07(10 lines)  AV=2.97  SV=5.07  BV=10.98
    {127,1216,1040, 0, 0, 0},  //TV = 12.94(11 lines)  AV=2.97  SV=5.04  BV=10.88
    {137,1136,1096, 0, 0, 0},  //TV = 12.83(12 lines)  AV=2.97  SV=5.01  BV=10.79
    {137,1216,1088, 0, 0, 0},  //TV = 12.83(12 lines)  AV=2.97  SV=5.10  BV=10.70
    {158,1136,1096, 0, 0, 0},  //TV = 12.63(14 lines)  AV=2.97  SV=5.01  BV=10.59
    {169,1216,1024, 0, 0, 0},  //TV = 12.53(15 lines)  AV=2.97  SV=5.01  BV=10.49
    {179,1216,1048, 0, 0, 0},  //TV = 12.45(16 lines)  AV=2.97  SV=5.05  BV=10.37
    {190,1216,1064, 0, 0, 0},  //TV = 12.36(17 lines)  AV=2.97  SV=5.07  BV=10.26
    {201,1216,1040, 0, 0, 0},  //TV = 12.28(18 lines)  AV=2.97  SV=5.04  BV=10.22
    {222,1136,1088, 0, 0, 0},  //TV = 12.14(20 lines)  AV=2.97  SV=5.00  BV=10.11
    {232,1216,1040, 0, 0, 0},  //TV = 12.07(21 lines)  AV=2.97  SV=5.04  BV=10.01
    {254,1136,1088, 0, 0, 0},  //TV = 11.94(23 lines)  AV=2.97  SV=5.00  BV=9.91
    {264,1216,1048, 0, 0, 0},  //TV = 11.89(24 lines)  AV=2.97  SV=5.05  BV=9.81
    {285,1216,1040, 0, 0, 0},  //TV = 11.78(26 lines)  AV=2.97  SV=5.04  BV=9.71
    {306,1216,1040, 0, 0, 0},  //TV = 11.67(28 lines)  AV=2.97  SV=5.04  BV=9.61
    {328,1216,1040, 0, 0, 0},  //TV = 11.57(30 lines)  AV=2.97  SV=5.04  BV=9.51
    {359,1136,1096, 0, 0, 0},  //TV = 11.44(33 lines)  AV=2.97  SV=5.01  BV=9.40
    {381,1216,1024, 0, 0, 0},  //TV = 11.36(35 lines)  AV=2.97  SV=5.01  BV=9.32
    {412,1136,1096, 0, 0, 0},  //TV = 11.25(38 lines)  AV=2.97  SV=5.01  BV=9.20
    {444,1136,1088, 0, 0, 0},  //TV = 11.14(41 lines)  AV=2.97  SV=5.00  BV=9.11
    {476,1136,1088, 0, 0, 0},  //TV = 11.04(44 lines)  AV=2.97  SV=5.00  BV=9.00
    {508,1136,1088, 0, 0, 0},  //TV = 10.94(47 lines)  AV=2.97  SV=5.00  BV=8.91
    {539,1216,1024, 0, 0, 0},  //TV = 10.86(50 lines)  AV=2.97  SV=5.01  BV=8.81
    {582,1136,1096, 0, 0, 0},  //TV = 10.75(54 lines)  AV=2.97  SV=5.01  BV=8.70
    {624,1136,1096, 0, 0, 0},  //TV = 10.65(58 lines)  AV=2.97  SV=5.01  BV=8.60
    {666,1136,1096, 0, 0, 0},  //TV = 10.55(62 lines)  AV=2.97  SV=5.01  BV=8.51
    {719,1136,1088, 0, 0, 0},  //TV = 10.44(67 lines)  AV=2.97  SV=5.00  BV=8.41
    {772,1136,1088, 0, 0, 0},  //TV = 10.34(72 lines)  AV=2.97  SV=5.00  BV=8.31
    {825,1136,1096, 0, 0, 0},  //TV = 10.24(77 lines)  AV=2.97  SV=5.01  BV=8.20
    {889,1136,1088, 0, 0, 0},  //TV = 10.14(83 lines)  AV=2.97  SV=5.00  BV=8.10
    {952,1136,1088, 0, 0, 0},  //TV = 10.04(89 lines)  AV=2.97  SV=5.00  BV=8.00
    {1016,1136,1088, 0, 0, 0},  //TV = 9.94(95 lines)  AV=2.97  SV=5.00  BV=7.91
    {1090,1136,1088, 0, 0, 0},  //TV = 9.84(102 lines)  AV=2.97  SV=5.00  BV=7.81
    {1174,1136,1088, 0, 0, 0},  //TV = 9.73(110 lines)  AV=2.97  SV=5.00  BV=7.70
    {1259,1136,1088, 0, 0, 0},  //TV = 9.63(118 lines)  AV=2.97  SV=5.00  BV=7.60
    {1344,1136,1088, 0, 0, 0},  //TV = 9.54(126 lines)  AV=2.97  SV=5.00  BV=7.51
    {1439,1136,1088, 0, 0, 0},  //TV = 9.44(135 lines)  AV=2.97  SV=5.00  BV=7.41
    {1545,1136,1088, 0, 0, 0},  //TV = 9.34(145 lines)  AV=2.97  SV=5.00  BV=7.31
    {1651,1136,1088, 0, 0, 0},  //TV = 9.24(155 lines)  AV=2.97  SV=5.00  BV=7.21
    {1778,1136,1088, 0, 0, 0},  //TV = 9.14(167 lines)  AV=2.97  SV=5.00  BV=7.10
    {1915,1136,1088, 0, 0, 0},  //TV = 9.03(180 lines)  AV=2.97  SV=5.00  BV=7.00
    {2032,1136,1088, 0, 0, 0},  //TV = 8.94(191 lines)  AV=2.97  SV=5.00  BV=6.91
    {2190,1136,1088, 0, 0, 0},  //TV = 8.83(206 lines)  AV=2.97  SV=5.00  BV=6.80
    {2360,1136,1080, 0, 0, 0},  //TV = 8.73(222 lines)  AV=2.97  SV=4.99  BV=6.71
    {2529,1136,1080, 0, 0, 0},  //TV = 8.63(238 lines)  AV=2.97  SV=4.99  BV=6.61
    {2698,1136,1088, 0, 0, 0},  //TV = 8.53(254 lines)  AV=2.97  SV=5.00  BV=6.50
    {2910,1136,1080, 0, 0, 0},  //TV = 8.42(274 lines)  AV=2.97  SV=4.99  BV=6.40
    {3111,1136,1080, 0, 0, 0},  //TV = 8.33(293 lines)  AV=2.97  SV=4.99  BV=6.31
    {3333,1136,1080, 0, 0, 0},  //TV = 8.23(314 lines)  AV=2.97  SV=4.99  BV=6.21
    {3566,1136,1080, 0, 0, 0},  //TV = 8.13(336 lines)  AV=2.97  SV=4.99  BV=6.11
    {3820,1136,1080, 0, 0, 0},  //TV = 8.03(360 lines)  AV=2.97  SV=4.99  BV=6.01
    {4117,1136,1080, 0, 0, 0},  //TV = 7.92(388 lines)  AV=2.97  SV=4.99  BV=5.90
    {4413,1136,1080, 0, 0, 0},  //TV = 7.82(416 lines)  AV=2.97  SV=4.99  BV=5.80
    {4720,1136,1080, 0, 0, 0},  //TV = 7.73(445 lines)  AV=2.97  SV=4.99  BV=5.71
    {5059,1136,1080, 0, 0, 0},  //TV = 7.63(477 lines)  AV=2.97  SV=4.99  BV=5.61
    {5408,1136,1080, 0, 0, 0},  //TV = 7.53(510 lines)  AV=2.97  SV=4.99  BV=5.51
    {5800,1136,1080, 0, 0, 0},  //TV = 7.43(547 lines)  AV=2.97  SV=4.99  BV=5.41
    {6202,1136,1080, 0, 0, 0},  //TV = 7.33(585 lines)  AV=2.97  SV=4.99  BV=5.31
    {6646,1136,1080, 0, 0, 0},  //TV = 7.23(627 lines)  AV=2.97  SV=4.99  BV=5.21
    {7123,1136,1080, 0, 0, 0},  //TV = 7.13(672 lines)  AV=2.97  SV=4.99  BV=5.11
    {7673,1136,1080, 0, 0, 0},  //TV = 7.03(724 lines)  AV=2.97  SV=4.99  BV=5.00
    {8223,1136,1080, 0, 0, 0},  //TV = 6.93(776 lines)  AV=2.97  SV=4.99  BV=4.90
    {8265,1216,1064, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.07  BV=4.81
    {8265,1328,1048, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.17  BV=4.70
    {8265,1424,1040, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.26  BV=4.61
    {8265,1536,1040, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.37  BV=4.51
    {8265,1632,1048, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.47  BV=4.41
    {8265,1728,1064, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.58  BV=4.30
    {8265,1840,1064, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.67  BV=4.21
    {8265,2048,1024, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.77  BV=4.11
    {8265,2144,1048, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.87  BV=4.01
    {8265,2352,1024, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.97  BV=3.91
    {8265,2448,1056, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=6.07  BV=3.81
    {8265,2656,1040, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=6.16  BV=3.72
    {8265,2864,1040, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=6.27  BV=3.61
    {8265,3072,1040, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=6.37  BV=3.51
    {8265,3328,1024, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=6.47  BV=3.41
    {8265,3456,1056, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=6.56  BV=3.31
    {8265,3840,1024, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=6.67  BV=3.21
    {8265,4096,1024, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=6.77  BV=3.11
    {8265,4352,1032, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=6.86  BV=3.01
    {8265,4608,1048, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=6.97  BV=2.91
    {8265,4992,1032, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=7.06  BV=2.82
    {8265,5376,1024, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=7.16  BV=2.72
    {8265,5760,1032, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=7.27  BV=2.61
    {8265,6240,1024, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=7.37  BV=2.51
    {8265,6544,1040, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=7.46  BV=2.41
    {8265,7072,1032, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=7.56  BV=2.31
    {8265,7472,1048, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=7.67  BV=2.21
    {8265,8192,1024, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=7.77  BV=2.11
    {8265,8192,1096, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=7.86  BV=2.01
    {8265,8192,1176, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=7.97  BV=1.91
    {8265,8192,1264, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=8.07  BV=1.81
    {8265,8192,1352, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=8.17  BV=1.71
    {8265,8192,1456, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=8.27  BV=1.61
    {8265,8192,1560, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=8.37  BV=1.51
    {8265,8192,1672, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=8.47  BV=1.41
    {8265,8192,1792, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=8.57  BV=1.31
    {8265,8192,1920, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=8.67  BV=1.21
    {8265,8192,2056, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=8.77  BV=1.11
    {8265,8192,2208, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=8.87  BV=1.00
    {8265,8192,2368, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=8.97  BV=0.90
    {8265,8192,2536, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=9.07  BV=0.80
    {8265,8192,2720, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=9.17  BV=0.70
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_Video1AutoTable =
{
    AETABLE_VIDEO1_AUTO,    //eAETableID
    107,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    113,    //i4MaxBV
    7,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sVideo1PLineTable_60Hz,
    sVideo1PLineTable_50Hz,
    NULL,
};

static strEvPline sVideo2PLineTable_60Hz =
{
{
    {95,1216,1064, 0, 0, 0},  //TV = 13.36(4 lines)  AV=2.97  SV=5.07  BV=11.26
    {105,1136,1088, 0, 0, 0},  //TV = 13.22(5 lines)  AV=2.97  SV=5.00  BV=11.19
    {105,1216,1072, 0, 0, 0},  //TV = 13.22(5 lines)  AV=2.97  SV=5.08  BV=11.11
    {116,1216,1064, 0, 0, 0},  //TV = 13.07(5 lines)  AV=2.97  SV=5.07  BV=10.98
    {127,1216,1040, 0, 0, 0},  //TV = 12.94(6 lines)  AV=2.97  SV=5.04  BV=10.88
    {137,1136,1096, 0, 0, 0},  //TV = 12.83(6 lines)  AV=2.97  SV=5.01  BV=10.79
    {137,1216,1088, 0, 0, 0},  //TV = 12.83(6 lines)  AV=2.97  SV=5.10  BV=10.70
    {158,1136,1096, 0, 0, 0},  //TV = 12.63(7 lines)  AV=2.97  SV=5.01  BV=10.59
    {169,1216,1024, 0, 0, 0},  //TV = 12.53(8 lines)  AV=2.97  SV=5.01  BV=10.49
    {179,1216,1048, 0, 0, 0},  //TV = 12.45(9 lines)  AV=2.97  SV=5.05  BV=10.37
    {190,1216,1064, 0, 0, 0},  //TV = 12.36(9 lines)  AV=2.97  SV=5.07  BV=10.26
    {201,1216,1040, 0, 0, 0},  //TV = 12.28(10 lines)  AV=2.97  SV=5.04  BV=10.22
    {222,1136,1088, 0, 0, 0},  //TV = 12.14(11 lines)  AV=2.97  SV=5.00  BV=10.11
    {232,1216,1040, 0, 0, 0},  //TV = 12.07(11 lines)  AV=2.97  SV=5.04  BV=10.01
    {254,1136,1088, 0, 0, 0},  //TV = 11.94(12 lines)  AV=2.97  SV=5.00  BV=9.91
    {264,1216,1048, 0, 0, 0},  //TV = 11.89(13 lines)  AV=2.97  SV=5.05  BV=9.81
    {285,1216,1040, 0, 0, 0},  //TV = 11.78(14 lines)  AV=2.97  SV=5.04  BV=9.71
    {306,1216,1040, 0, 0, 0},  //TV = 11.67(15 lines)  AV=2.97  SV=5.04  BV=9.61
    {328,1216,1040, 0, 0, 0},  //TV = 11.57(16 lines)  AV=2.97  SV=5.04  BV=9.51
    {359,1136,1096, 0, 0, 0},  //TV = 11.44(18 lines)  AV=2.97  SV=5.01  BV=9.40
    {381,1216,1024, 0, 0, 0},  //TV = 11.36(19 lines)  AV=2.97  SV=5.01  BV=9.32
    {412,1136,1096, 0, 0, 0},  //TV = 11.25(20 lines)  AV=2.97  SV=5.01  BV=9.20
    {444,1136,1088, 0, 0, 0},  //TV = 11.14(22 lines)  AV=2.97  SV=5.00  BV=9.11
    {476,1136,1088, 0, 0, 0},  //TV = 11.04(24 lines)  AV=2.97  SV=5.00  BV=9.00
    {508,1136,1088, 0, 0, 0},  //TV = 10.94(25 lines)  AV=2.97  SV=5.00  BV=8.91
    {539,1216,1024, 0, 0, 0},  //TV = 10.86(27 lines)  AV=2.97  SV=5.01  BV=8.81
    {582,1136,1096, 0, 0, 0},  //TV = 10.75(29 lines)  AV=2.97  SV=5.01  BV=8.70
    {624,1136,1096, 0, 0, 0},  //TV = 10.65(31 lines)  AV=2.97  SV=5.01  BV=8.60
    {666,1136,1096, 0, 0, 0},  //TV = 10.55(33 lines)  AV=2.97  SV=5.01  BV=8.51
    {719,1136,1088, 0, 0, 0},  //TV = 10.44(36 lines)  AV=2.97  SV=5.00  BV=8.41
    {772,1136,1088, 0, 0, 0},  //TV = 10.34(39 lines)  AV=2.97  SV=5.00  BV=8.31
    {825,1136,1096, 0, 0, 0},  //TV = 10.24(41 lines)  AV=2.97  SV=5.01  BV=8.20
    {889,1136,1088, 0, 0, 0},  //TV = 10.14(44 lines)  AV=2.97  SV=5.00  BV=8.10
    {952,1136,1088, 0, 0, 0},  //TV = 10.04(48 lines)  AV=2.97  SV=5.00  BV=8.00
    {1016,1136,1088, 0, 0, 0},  //TV = 9.94(51 lines)  AV=2.97  SV=5.00  BV=7.91
    {1090,1136,1088, 0, 0, 0},  //TV = 9.84(55 lines)  AV=2.97  SV=5.00  BV=7.81
    {1174,1136,1088, 0, 0, 0},  //TV = 9.73(59 lines)  AV=2.97  SV=5.00  BV=7.70
    {1259,1136,1088, 0, 0, 0},  //TV = 9.63(63 lines)  AV=2.97  SV=5.00  BV=7.60
    {1344,1136,1088, 0, 0, 0},  //TV = 9.54(67 lines)  AV=2.97  SV=5.00  BV=7.51
    {1439,1136,1088, 0, 0, 0},  //TV = 9.44(72 lines)  AV=2.97  SV=5.00  BV=7.41
    {1545,1136,1088, 0, 0, 0},  //TV = 9.34(78 lines)  AV=2.97  SV=5.00  BV=7.31
    {1651,1136,1088, 0, 0, 0},  //TV = 9.24(83 lines)  AV=2.97  SV=5.00  BV=7.21
    {1778,1136,1088, 0, 0, 0},  //TV = 9.14(89 lines)  AV=2.97  SV=5.00  BV=7.10
    {1915,1136,1088, 0, 0, 0},  //TV = 9.03(96 lines)  AV=2.97  SV=5.00  BV=7.00
    {2032,1136,1088, 0, 0, 0},  //TV = 8.94(102 lines)  AV=2.97  SV=5.00  BV=6.91
    {2190,1136,1088, 0, 0, 0},  //TV = 8.83(110 lines)  AV=2.97  SV=5.00  BV=6.80
    {2360,1136,1080, 0, 0, 0},  //TV = 8.73(119 lines)  AV=2.97  SV=4.99  BV=6.71
    {2529,1136,1080, 0, 0, 0},  //TV = 8.63(127 lines)  AV=2.97  SV=4.99  BV=6.61
    {2698,1136,1088, 0, 0, 0},  //TV = 8.53(136 lines)  AV=2.97  SV=5.00  BV=6.50
    {2910,1136,1080, 0, 0, 0},  //TV = 8.42(147 lines)  AV=2.97  SV=4.99  BV=6.40
    {3111,1136,1080, 0, 0, 0},  //TV = 8.33(157 lines)  AV=2.97  SV=4.99  BV=6.31
    {3333,1136,1080, 0, 0, 0},  //TV = 8.23(168 lines)  AV=2.97  SV=4.99  BV=6.21
    {3566,1136,1080, 0, 0, 0},  //TV = 8.13(180 lines)  AV=2.97  SV=4.99  BV=6.11
    {3820,1136,1080, 0, 0, 0},  //TV = 8.03(193 lines)  AV=2.97  SV=4.99  BV=6.01
    {4117,1136,1080, 0, 0, 0},  //TV = 7.92(208 lines)  AV=2.97  SV=4.99  BV=5.90
    {4413,1136,1080, 0, 0, 0},  //TV = 7.82(223 lines)  AV=2.97  SV=4.99  BV=5.80
    {4720,1136,1080, 0, 0, 0},  //TV = 7.73(238 lines)  AV=2.97  SV=4.99  BV=5.71
    {5059,1136,1080, 0, 0, 0},  //TV = 7.63(255 lines)  AV=2.97  SV=4.99  BV=5.61
    {5408,1136,1080, 0, 0, 0},  //TV = 7.53(273 lines)  AV=2.97  SV=4.99  BV=5.51
    {5800,1136,1080, 0, 0, 0},  //TV = 7.43(293 lines)  AV=2.97  SV=4.99  BV=5.41
    {6202,1136,1080, 0, 0, 0},  //TV = 7.33(313 lines)  AV=2.97  SV=4.99  BV=5.31
    {6646,1136,1080, 0, 0, 0},  //TV = 7.23(336 lines)  AV=2.97  SV=4.99  BV=5.21
    {7123,1136,1080, 0, 0, 0},  //TV = 7.13(360 lines)  AV=2.97  SV=4.99  BV=5.11
    {7673,1136,1080, 0, 0, 0},  //TV = 7.03(388 lines)  AV=2.97  SV=4.99  BV=5.00
    {8223,1136,1080, 0, 0, 0},  //TV = 6.93(415 lines)  AV=2.97  SV=4.99  BV=4.90
    {8329,1216,1064, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.97  SV=5.07  BV=4.81
    {8329,1328,1048, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.97  SV=5.17  BV=4.70
    {8329,1424,1040, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.97  SV=5.26  BV=4.61
    {8329,1536,1040, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.97  SV=5.37  BV=4.51
    {8329,1632,1048, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.97  SV=5.47  BV=4.41
    {8329,1728,1056, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.97  SV=5.56  BV=4.31
    {8329,1840,1064, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.97  SV=5.67  BV=4.21
    {8329,2048,1024, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.97  SV=5.77  BV=4.11
    {8329,2144,1048, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.97  SV=5.87  BV=4.01
    {8329,2352,1024, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.97  SV=5.97  BV=3.91
    {16670,1216,1064, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=5.07  BV=3.81
    {16670,1328,1048, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=5.17  BV=3.70
    {16670,1424,1040, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=5.26  BV=3.61
    {16670,1536,1040, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=5.37  BV=3.50
    {16670,1632,1048, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=5.47  BV=3.41
    {16670,1728,1064, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=5.58  BV=3.30
    {16670,1840,1064, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=5.67  BV=3.21
    {16670,2048,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=5.77  BV=3.11
    {16670,2144,1048, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=5.87  BV=3.01
    {16670,2352,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=5.97  BV=2.91
    {16670,2448,1056, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=6.07  BV=2.81
    {16670,2656,1048, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=6.17  BV=2.70
    {16670,2864,1040, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=6.27  BV=2.61
    {16670,3072,1032, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=6.36  BV=2.52
    {16670,3328,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=6.47  BV=2.41
    {16670,3456,1056, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=6.56  BV=2.31
    {16670,3712,1056, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=6.67  BV=2.21
    {16670,4096,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=6.77  BV=2.11
    {16670,4352,1032, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=6.86  BV=2.01
    {24988,3072,1048, 0, 0, 0},  //TV = 5.32(1263 lines)  AV=2.97  SV=6.38  BV=1.91
    {24988,3328,1040, 0, 0, 0},  //TV = 5.32(1263 lines)  AV=2.97  SV=6.49  BV=1.81
    {24988,3584,1032, 0, 0, 0},  //TV = 5.32(1263 lines)  AV=2.97  SV=6.58  BV=1.71
    {24988,3840,1032, 0, 0, 0},  //TV = 5.32(1263 lines)  AV=2.97  SV=6.68  BV=1.61
    {33298,3072,1040, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=6.37  BV=1.51
    {33298,3328,1024, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=6.47  BV=1.41
    {33298,3584,1024, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=6.57  BV=1.31
    {33298,3840,1024, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=6.67  BV=1.21
    {33298,4096,1024, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=6.77  BV=1.11
    {33298,4352,1032, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=6.86  BV=1.02
    {33298,4608,1048, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=6.97  BV=0.91
    {33298,4992,1032, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=7.06  BV=0.82
    {33298,5376,1032, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=7.17  BV=0.71
    {33298,5760,1032, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=7.27  BV=0.61
    {33298,6240,1024, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=7.37  BV=0.51
    {33298,6544,1040, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=7.46  BV=0.42
    {33298,7072,1032, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=7.56  BV=0.31
    {33298,7472,1048, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=7.67  BV=0.21
    {33298,8192,1024, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=7.77  BV=0.11
    {33298,8192,1104, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=7.87  BV=0.01
    {33298,8192,1192, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=7.98  BV=-0.11
    {33298,8192,1280, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=8.09  BV=-0.21
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used   
},
};

static strEvPline sVideo2PLineTable_50Hz =
{
{
    {95,1216,1064, 0, 0, 0},  //TV = 13.36(4 lines)  AV=2.97  SV=5.07  BV=11.26
    {105,1136,1088, 0, 0, 0},  //TV = 13.22(5 lines)  AV=2.97  SV=5.00  BV=11.19
    {105,1216,1072, 0, 0, 0},  //TV = 13.22(5 lines)  AV=2.97  SV=5.08  BV=11.11
    {116,1216,1064, 0, 0, 0},  //TV = 13.07(5 lines)  AV=2.97  SV=5.07  BV=10.98
    {127,1216,1040, 0, 0, 0},  //TV = 12.94(6 lines)  AV=2.97  SV=5.04  BV=10.88
    {137,1136,1096, 0, 0, 0},  //TV = 12.83(6 lines)  AV=2.97  SV=5.01  BV=10.79
    {137,1216,1088, 0, 0, 0},  //TV = 12.83(6 lines)  AV=2.97  SV=5.10  BV=10.70
    {158,1136,1096, 0, 0, 0},  //TV = 12.63(7 lines)  AV=2.97  SV=5.01  BV=10.59
    {169,1216,1024, 0, 0, 0},  //TV = 12.53(8 lines)  AV=2.97  SV=5.01  BV=10.49
    {179,1216,1048, 0, 0, 0},  //TV = 12.45(9 lines)  AV=2.97  SV=5.05  BV=10.37
    {190,1216,1064, 0, 0, 0},  //TV = 12.36(9 lines)  AV=2.97  SV=5.07  BV=10.26
    {201,1216,1040, 0, 0, 0},  //TV = 12.28(10 lines)  AV=2.97  SV=5.04  BV=10.22
    {222,1136,1088, 0, 0, 0},  //TV = 12.14(11 lines)  AV=2.97  SV=5.00  BV=10.11
    {232,1216,1040, 0, 0, 0},  //TV = 12.07(11 lines)  AV=2.97  SV=5.04  BV=10.01
    {254,1136,1088, 0, 0, 0},  //TV = 11.94(12 lines)  AV=2.97  SV=5.00  BV=9.91
    {264,1216,1048, 0, 0, 0},  //TV = 11.89(13 lines)  AV=2.97  SV=5.05  BV=9.81
    {285,1216,1040, 0, 0, 0},  //TV = 11.78(14 lines)  AV=2.97  SV=5.04  BV=9.71
    {306,1216,1040, 0, 0, 0},  //TV = 11.67(15 lines)  AV=2.97  SV=5.04  BV=9.61
    {328,1216,1040, 0, 0, 0},  //TV = 11.57(16 lines)  AV=2.97  SV=5.04  BV=9.51
    {359,1136,1096, 0, 0, 0},  //TV = 11.44(18 lines)  AV=2.97  SV=5.01  BV=9.40
    {381,1216,1024, 0, 0, 0},  //TV = 11.36(19 lines)  AV=2.97  SV=5.01  BV=9.32
    {412,1136,1096, 0, 0, 0},  //TV = 11.25(20 lines)  AV=2.97  SV=5.01  BV=9.20
    {444,1136,1088, 0, 0, 0},  //TV = 11.14(22 lines)  AV=2.97  SV=5.00  BV=9.11
    {476,1136,1088, 0, 0, 0},  //TV = 11.04(24 lines)  AV=2.97  SV=5.00  BV=9.00
    {508,1136,1088, 0, 0, 0},  //TV = 10.94(25 lines)  AV=2.97  SV=5.00  BV=8.91
    {539,1216,1024, 0, 0, 0},  //TV = 10.86(27 lines)  AV=2.97  SV=5.01  BV=8.81
    {582,1136,1096, 0, 0, 0},  //TV = 10.75(29 lines)  AV=2.97  SV=5.01  BV=8.70
    {624,1136,1096, 0, 0, 0},  //TV = 10.65(31 lines)  AV=2.97  SV=5.01  BV=8.60
    {666,1136,1096, 0, 0, 0},  //TV = 10.55(33 lines)  AV=2.97  SV=5.01  BV=8.51
    {719,1136,1088, 0, 0, 0},  //TV = 10.44(36 lines)  AV=2.97  SV=5.00  BV=8.41
    {772,1136,1088, 0, 0, 0},  //TV = 10.34(39 lines)  AV=2.97  SV=5.00  BV=8.31
    {825,1136,1096, 0, 0, 0},  //TV = 10.24(41 lines)  AV=2.97  SV=5.01  BV=8.20
    {889,1136,1088, 0, 0, 0},  //TV = 10.14(44 lines)  AV=2.97  SV=5.00  BV=8.10
    {952,1136,1088, 0, 0, 0},  //TV = 10.04(48 lines)  AV=2.97  SV=5.00  BV=8.00
    {1016,1136,1088, 0, 0, 0},  //TV = 9.94(51 lines)  AV=2.97  SV=5.00  BV=7.91
    {1090,1136,1088, 0, 0, 0},  //TV = 9.84(55 lines)  AV=2.97  SV=5.00  BV=7.81
    {1174,1136,1088, 0, 0, 0},  //TV = 9.73(59 lines)  AV=2.97  SV=5.00  BV=7.70
    {1259,1136,1088, 0, 0, 0},  //TV = 9.63(63 lines)  AV=2.97  SV=5.00  BV=7.60
    {1344,1136,1088, 0, 0, 0},  //TV = 9.54(67 lines)  AV=2.97  SV=5.00  BV=7.51
    {1439,1136,1088, 0, 0, 0},  //TV = 9.44(72 lines)  AV=2.97  SV=5.00  BV=7.41
    {1545,1136,1088, 0, 0, 0},  //TV = 9.34(78 lines)  AV=2.97  SV=5.00  BV=7.31
    {1651,1136,1088, 0, 0, 0},  //TV = 9.24(83 lines)  AV=2.97  SV=5.00  BV=7.21
    {1778,1136,1088, 0, 0, 0},  //TV = 9.14(89 lines)  AV=2.97  SV=5.00  BV=7.10
    {1915,1136,1088, 0, 0, 0},  //TV = 9.03(96 lines)  AV=2.97  SV=5.00  BV=7.00
    {2032,1136,1088, 0, 0, 0},  //TV = 8.94(102 lines)  AV=2.97  SV=5.00  BV=6.91
    {2190,1136,1088, 0, 0, 0},  //TV = 8.83(110 lines)  AV=2.97  SV=5.00  BV=6.80
    {2360,1136,1080, 0, 0, 0},  //TV = 8.73(119 lines)  AV=2.97  SV=4.99  BV=6.71
    {2529,1136,1080, 0, 0, 0},  //TV = 8.63(127 lines)  AV=2.97  SV=4.99  BV=6.61
    {2698,1136,1088, 0, 0, 0},  //TV = 8.53(136 lines)  AV=2.97  SV=5.00  BV=6.50
    {2910,1136,1080, 0, 0, 0},  //TV = 8.42(147 lines)  AV=2.97  SV=4.99  BV=6.40
    {3111,1136,1080, 0, 0, 0},  //TV = 8.33(157 lines)  AV=2.97  SV=4.99  BV=6.31
    {3333,1136,1080, 0, 0, 0},  //TV = 8.23(168 lines)  AV=2.97  SV=4.99  BV=6.21
    {3566,1136,1080, 0, 0, 0},  //TV = 8.13(180 lines)  AV=2.97  SV=4.99  BV=6.11
    {3820,1136,1080, 0, 0, 0},  //TV = 8.03(193 lines)  AV=2.97  SV=4.99  BV=6.01
    {4117,1136,1080, 0, 0, 0},  //TV = 7.92(208 lines)  AV=2.97  SV=4.99  BV=5.90
    {4413,1136,1080, 0, 0, 0},  //TV = 7.82(223 lines)  AV=2.97  SV=4.99  BV=5.80
    {4720,1136,1080, 0, 0, 0},  //TV = 7.73(238 lines)  AV=2.97  SV=4.99  BV=5.71
    {5059,1136,1080, 0, 0, 0},  //TV = 7.63(255 lines)  AV=2.97  SV=4.99  BV=5.61
    {5408,1136,1080, 0, 0, 0},  //TV = 7.53(273 lines)  AV=2.97  SV=4.99  BV=5.51
    {5800,1136,1080, 0, 0, 0},  //TV = 7.43(293 lines)  AV=2.97  SV=4.99  BV=5.41
    {6202,1136,1080, 0, 0, 0},  //TV = 7.33(313 lines)  AV=2.97  SV=4.99  BV=5.31
    {6646,1136,1080, 0, 0, 0},  //TV = 7.23(336 lines)  AV=2.97  SV=4.99  BV=5.21
    {7123,1136,1080, 0, 0, 0},  //TV = 7.13(360 lines)  AV=2.97  SV=4.99  BV=5.11
    {7673,1136,1080, 0, 0, 0},  //TV = 7.03(388 lines)  AV=2.97  SV=4.99  BV=5.00
    {8223,1136,1080, 0, 0, 0},  //TV = 6.93(415 lines)  AV=2.97  SV=4.99  BV=4.90
    {8805,1136,1080, 0, 0, 0},  //TV = 6.83(445 lines)  AV=2.97  SV=4.99  BV=4.81
    {9440,1136,1080, 0, 0, 0},  //TV = 6.73(477 lines)  AV=2.97  SV=4.99  BV=4.71
    {10002,1136,1096, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=5.01  BV=4.60
    {10002,1216,1088, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=5.10  BV=4.51
    {10002,1328,1072, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=5.21  BV=4.41
    {10002,1424,1064, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=5.30  BV=4.32
    {10002,1536,1064, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=5.41  BV=4.21
    {10002,1632,1072, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=5.50  BV=4.11
    {10002,1728,1080, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=5.60  BV=4.02
    {10002,1936,1040, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=5.71  BV=3.91
    {10002,2048,1056, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=5.81  BV=3.80
    {10002,2240,1024, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=5.89  BV=3.72
    {10002,2352,1048, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=6.00  BV=3.62
    {10002,2560,1040, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=6.11  BV=3.50
    {10002,2752,1032, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=6.20  BV=3.41
    {10002,2960,1024, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=6.30  BV=3.32
    {10002,3072,1064, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=6.41  BV=3.21
    {10002,3328,1048, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=6.50  BV=3.12
    {10002,3584,1040, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=6.60  BV=3.02
    {10002,3840,1048, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=6.71  BV=2.91
    {10002,4096,1048, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=6.80  BV=2.82
    {10002,4480,1024, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=6.89  BV=2.72
    {10002,4736,1048, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=7.01  BV=2.61
    {10002,5120,1032, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=7.10  BV=2.52
    {10002,5504,1032, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=7.20  BV=2.41
    {10002,5888,1032, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=7.30  BV=2.31
    {20004,3072,1064, 0, 0, 0},  //TV = 5.64(1011 lines)  AV=2.97  SV=6.41  BV=2.21
    {20004,3328,1056, 0, 0, 0},  //TV = 5.64(1011 lines)  AV=2.97  SV=6.51  BV=2.10
    {20004,3584,1040, 0, 0, 0},  //TV = 5.64(1011 lines)  AV=2.97  SV=6.60  BV=2.02
    {20004,3840,1040, 0, 0, 0},  //TV = 5.64(1011 lines)  AV=2.97  SV=6.69  BV=1.92
    {20004,4096,1048, 0, 0, 0},  //TV = 5.64(1011 lines)  AV=2.97  SV=6.80  BV=1.82
    {20004,4480,1024, 0, 0, 0},  //TV = 5.64(1011 lines)  AV=2.97  SV=6.89  BV=1.72
    {29995,3200,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=6.41  BV=1.62
    {29995,3456,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=6.52  BV=1.51
    {29995,3584,1056, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=6.62  BV=1.41
    {29995,3968,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=6.72  BV=1.31
    {29995,4224,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=6.82  BV=1.21
    {29995,4480,1040, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=6.92  BV=1.11
    {29995,4864,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=7.01  BV=1.02
    {29995,5120,1048, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=7.12  BV=0.91
    {29995,5632,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=7.22  BV=0.81
    {29995,6016,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=7.32  BV=0.71
    {29995,6384,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=7.42  BV=0.61
    {29995,6896,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=7.52  BV=0.51
    {29995,7280,1040, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=7.62  BV=0.41
    {29995,7936,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=7.72  BV=0.31
    {29995,8192,1064, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=7.82  BV=0.21
    {29995,8192,1136, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=7.92  BV=0.11
    {29995,8192,1232, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=8.03  BV=-0.00
    {29995,8192,1320, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=8.13  BV=-0.10
    {29995,8192,1416, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=8.23  BV=-0.20
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used       
},
};

static strAETable g_AE_Video2AutoTable =
{
    AETABLE_VIDEO2_AUTO,    //eAETableID
    116,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    113,    //i4MaxBV
    -2,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sVideo2PLineTable_60Hz,
    sVideo2PLineTable_50Hz,
    NULL,
};

static strEvPline sCustom1PLineTable_60Hz =
{
{
    {95,1216,1064, 0, 0, 0},  //TV = 13.36(4 lines)  AV=2.97  SV=5.07  BV=11.26
    {105,1136,1088, 0, 0, 0},  //TV = 13.22(5 lines)  AV=2.97  SV=5.00  BV=11.19
    {105,1216,1072, 0, 0, 0},  //TV = 13.22(5 lines)  AV=2.97  SV=5.08  BV=11.11
    {116,1216,1064, 0, 0, 0},  //TV = 13.07(5 lines)  AV=2.97  SV=5.07  BV=10.98
    {127,1216,1040, 0, 0, 0},  //TV = 12.94(6 lines)  AV=2.97  SV=5.04  BV=10.88
    {137,1136,1096, 0, 0, 0},  //TV = 12.83(6 lines)  AV=2.97  SV=5.01  BV=10.79
    {137,1216,1088, 0, 0, 0},  //TV = 12.83(6 lines)  AV=2.97  SV=5.10  BV=10.70
    {158,1136,1096, 0, 0, 0},  //TV = 12.63(7 lines)  AV=2.97  SV=5.01  BV=10.59
    {169,1216,1024, 0, 0, 0},  //TV = 12.53(8 lines)  AV=2.97  SV=5.01  BV=10.49
    {179,1216,1048, 0, 0, 0},  //TV = 12.45(9 lines)  AV=2.97  SV=5.05  BV=10.37
    {190,1216,1064, 0, 0, 0},  //TV = 12.36(9 lines)  AV=2.97  SV=5.07  BV=10.26
    {201,1216,1040, 0, 0, 0},  //TV = 12.28(10 lines)  AV=2.97  SV=5.04  BV=10.22
    {222,1136,1088, 0, 0, 0},  //TV = 12.14(11 lines)  AV=2.97  SV=5.00  BV=10.11
    {232,1216,1040, 0, 0, 0},  //TV = 12.07(11 lines)  AV=2.97  SV=5.04  BV=10.01
    {254,1136,1088, 0, 0, 0},  //TV = 11.94(12 lines)  AV=2.97  SV=5.00  BV=9.91
    {264,1216,1048, 0, 0, 0},  //TV = 11.89(13 lines)  AV=2.97  SV=5.05  BV=9.81
    {285,1216,1040, 0, 0, 0},  //TV = 11.78(14 lines)  AV=2.97  SV=5.04  BV=9.71
    {306,1216,1040, 0, 0, 0},  //TV = 11.67(15 lines)  AV=2.97  SV=5.04  BV=9.61
    {328,1216,1040, 0, 0, 0},  //TV = 11.57(16 lines)  AV=2.97  SV=5.04  BV=9.51
    {359,1136,1096, 0, 0, 0},  //TV = 11.44(18 lines)  AV=2.97  SV=5.01  BV=9.40
    {381,1216,1024, 0, 0, 0},  //TV = 11.36(19 lines)  AV=2.97  SV=5.01  BV=9.32
    {412,1136,1096, 0, 0, 0},  //TV = 11.25(20 lines)  AV=2.97  SV=5.01  BV=9.20
    {444,1136,1088, 0, 0, 0},  //TV = 11.14(22 lines)  AV=2.97  SV=5.00  BV=9.11
    {476,1136,1088, 0, 0, 0},  //TV = 11.04(24 lines)  AV=2.97  SV=5.00  BV=9.00
    {508,1136,1088, 0, 0, 0},  //TV = 10.94(25 lines)  AV=2.97  SV=5.00  BV=8.91
    {539,1216,1024, 0, 0, 0},  //TV = 10.86(27 lines)  AV=2.97  SV=5.01  BV=8.81
    {582,1136,1096, 0, 0, 0},  //TV = 10.75(29 lines)  AV=2.97  SV=5.01  BV=8.70
    {624,1136,1096, 0, 0, 0},  //TV = 10.65(31 lines)  AV=2.97  SV=5.01  BV=8.60
    {666,1136,1096, 0, 0, 0},  //TV = 10.55(33 lines)  AV=2.97  SV=5.01  BV=8.51
    {719,1136,1088, 0, 0, 0},  //TV = 10.44(36 lines)  AV=2.97  SV=5.00  BV=8.41
    {772,1136,1088, 0, 0, 0},  //TV = 10.34(39 lines)  AV=2.97  SV=5.00  BV=8.31
    {825,1136,1096, 0, 0, 0},  //TV = 10.24(41 lines)  AV=2.97  SV=5.01  BV=8.20
    {889,1136,1088, 0, 0, 0},  //TV = 10.14(44 lines)  AV=2.97  SV=5.00  BV=8.10
    {952,1136,1088, 0, 0, 0},  //TV = 10.04(48 lines)  AV=2.97  SV=5.00  BV=8.00
    {1016,1136,1088, 0, 0, 0},  //TV = 9.94(51 lines)  AV=2.97  SV=5.00  BV=7.91
    {1090,1136,1088, 0, 0, 0},  //TV = 9.84(55 lines)  AV=2.97  SV=5.00  BV=7.81
    {1174,1136,1088, 0, 0, 0},  //TV = 9.73(59 lines)  AV=2.97  SV=5.00  BV=7.70
    {1259,1136,1088, 0, 0, 0},  //TV = 9.63(63 lines)  AV=2.97  SV=5.00  BV=7.60
    {1344,1136,1088, 0, 0, 0},  //TV = 9.54(67 lines)  AV=2.97  SV=5.00  BV=7.51
    {1439,1136,1088, 0, 0, 0},  //TV = 9.44(72 lines)  AV=2.97  SV=5.00  BV=7.41
    {1545,1136,1088, 0, 0, 0},  //TV = 9.34(78 lines)  AV=2.97  SV=5.00  BV=7.31
    {1651,1136,1088, 0, 0, 0},  //TV = 9.24(83 lines)  AV=2.97  SV=5.00  BV=7.21
    {1778,1136,1088, 0, 0, 0},  //TV = 9.14(89 lines)  AV=2.97  SV=5.00  BV=7.10
    {1915,1136,1088, 0, 0, 0},  //TV = 9.03(96 lines)  AV=2.97  SV=5.00  BV=7.00
    {2032,1136,1088, 0, 0, 0},  //TV = 8.94(102 lines)  AV=2.97  SV=5.00  BV=6.91
    {2190,1136,1088, 0, 0, 0},  //TV = 8.83(110 lines)  AV=2.97  SV=5.00  BV=6.80
    {2360,1136,1080, 0, 0, 0},  //TV = 8.73(119 lines)  AV=2.97  SV=4.99  BV=6.71
    {2529,1136,1080, 0, 0, 0},  //TV = 8.63(127 lines)  AV=2.97  SV=4.99  BV=6.61
    {2698,1136,1088, 0, 0, 0},  //TV = 8.53(136 lines)  AV=2.97  SV=5.00  BV=6.50
    {2910,1136,1080, 0, 0, 0},  //TV = 8.42(147 lines)  AV=2.97  SV=4.99  BV=6.40
    {3111,1136,1080, 0, 0, 0},  //TV = 8.33(157 lines)  AV=2.97  SV=4.99  BV=6.31
    {3333,1136,1080, 0, 0, 0},  //TV = 8.23(168 lines)  AV=2.97  SV=4.99  BV=6.21
    {3566,1136,1080, 0, 0, 0},  //TV = 8.13(180 lines)  AV=2.97  SV=4.99  BV=6.11
    {3820,1136,1080, 0, 0, 0},  //TV = 8.03(193 lines)  AV=2.97  SV=4.99  BV=6.01
    {4117,1136,1080, 0, 0, 0},  //TV = 7.92(208 lines)  AV=2.97  SV=4.99  BV=5.90
    {4413,1136,1080, 0, 0, 0},  //TV = 7.82(223 lines)  AV=2.97  SV=4.99  BV=5.80
    {4720,1136,1080, 0, 0, 0},  //TV = 7.73(238 lines)  AV=2.97  SV=4.99  BV=5.71
    {5059,1136,1080, 0, 0, 0},  //TV = 7.63(255 lines)  AV=2.97  SV=4.99  BV=5.61
    {5408,1136,1080, 0, 0, 0},  //TV = 7.53(273 lines)  AV=2.97  SV=4.99  BV=5.51
    {5800,1136,1080, 0, 0, 0},  //TV = 7.43(293 lines)  AV=2.97  SV=4.99  BV=5.41
    {6202,1136,1080, 0, 0, 0},  //TV = 7.33(313 lines)  AV=2.97  SV=4.99  BV=5.31
    {6646,1136,1080, 0, 0, 0},  //TV = 7.23(336 lines)  AV=2.97  SV=4.99  BV=5.21
    {7123,1136,1080, 0, 0, 0},  //TV = 7.13(360 lines)  AV=2.97  SV=4.99  BV=5.11
    {7673,1136,1080, 0, 0, 0},  //TV = 7.03(388 lines)  AV=2.97  SV=4.99  BV=5.00
    {8223,1136,1080, 0, 0, 0},  //TV = 6.93(415 lines)  AV=2.97  SV=4.99  BV=4.90
    {8329,1216,1064, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.97  SV=5.07  BV=4.81
    {8329,1328,1048, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.97  SV=5.17  BV=4.70
    {8329,1424,1040, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.97  SV=5.26  BV=4.61
    {8329,1536,1040, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.97  SV=5.37  BV=4.51
    {8329,1632,1048, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.97  SV=5.47  BV=4.41
    {8329,1728,1056, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.97  SV=5.56  BV=4.31
    {8329,1840,1064, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.97  SV=5.67  BV=4.21
    {8329,2048,1024, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.97  SV=5.77  BV=4.11
    {8329,2144,1048, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.97  SV=5.87  BV=4.01
    {8329,2352,1024, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.97  SV=5.97  BV=3.91
    {16670,1216,1064, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=5.07  BV=3.81
    {16670,1328,1048, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=5.17  BV=3.70
    {16670,1424,1040, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=5.26  BV=3.61
    {16670,1536,1040, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=5.37  BV=3.50
    {16670,1632,1048, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=5.47  BV=3.41
    {16670,1728,1064, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=5.58  BV=3.30
    {16670,1840,1064, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=5.67  BV=3.21
    {16670,2048,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=5.77  BV=3.11
    {16670,2144,1048, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=5.87  BV=3.01
    {16670,2352,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=5.97  BV=2.91
    {16670,2448,1056, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=6.07  BV=2.81
    {16670,2656,1048, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=6.17  BV=2.70
    {16670,2864,1040, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=6.27  BV=2.61
    {16670,3072,1032, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=6.36  BV=2.52
    {16670,3328,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=6.47  BV=2.41
    {16670,3456,1056, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=6.56  BV=2.31
    {16670,3712,1056, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=6.67  BV=2.21
    {16670,4096,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=6.77  BV=2.11
    {16670,4352,1032, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=6.86  BV=2.01
    {24988,3072,1048, 0, 0, 0},  //TV = 5.32(1263 lines)  AV=2.97  SV=6.38  BV=1.91
    {24988,3328,1040, 0, 0, 0},  //TV = 5.32(1263 lines)  AV=2.97  SV=6.49  BV=1.81
    {24988,3584,1032, 0, 0, 0},  //TV = 5.32(1263 lines)  AV=2.97  SV=6.58  BV=1.71
    {24988,3840,1032, 0, 0, 0},  //TV = 5.32(1263 lines)  AV=2.97  SV=6.68  BV=1.61
    {33298,3072,1040, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=6.37  BV=1.51
    {33298,3328,1024, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=6.47  BV=1.41
    {33298,3584,1024, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=6.57  BV=1.31
    {33298,3840,1024, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=6.67  BV=1.21
    {33298,4096,1024, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=6.77  BV=1.11
    {33298,4352,1032, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=6.86  BV=1.02
    {33298,4608,1048, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=6.97  BV=0.91
    {33298,4992,1032, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=7.06  BV=0.82
    {33298,5376,1032, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=7.17  BV=0.71
    {33298,5760,1032, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=7.27  BV=0.61
    {33298,6240,1024, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=7.37  BV=0.51
    {33298,6544,1040, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=7.46  BV=0.42
    {33298,7072,1032, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=7.56  BV=0.31
    {33298,7472,1048, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=7.67  BV=0.21
    {33298,8192,1024, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=7.77  BV=0.11
    {33298,8192,1104, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=7.87  BV=0.01
    {33298,8192,1192, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=7.98  BV=-0.11
    {33298,8192,1280, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=8.09  BV=-0.21
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used   
},
};

static strEvPline sCustom1PLineTable_50Hz =
{
{
    {95,1216,1064, 0, 0, 0},  //TV = 13.36(4 lines)  AV=2.97  SV=5.07  BV=11.26
    {105,1136,1088, 0, 0, 0},  //TV = 13.22(5 lines)  AV=2.97  SV=5.00  BV=11.19
    {105,1216,1072, 0, 0, 0},  //TV = 13.22(5 lines)  AV=2.97  SV=5.08  BV=11.11
    {116,1216,1064, 0, 0, 0},  //TV = 13.07(5 lines)  AV=2.97  SV=5.07  BV=10.98
    {127,1216,1040, 0, 0, 0},  //TV = 12.94(6 lines)  AV=2.97  SV=5.04  BV=10.88
    {137,1136,1096, 0, 0, 0},  //TV = 12.83(6 lines)  AV=2.97  SV=5.01  BV=10.79
    {137,1216,1088, 0, 0, 0},  //TV = 12.83(6 lines)  AV=2.97  SV=5.10  BV=10.70
    {158,1136,1096, 0, 0, 0},  //TV = 12.63(7 lines)  AV=2.97  SV=5.01  BV=10.59
    {169,1216,1024, 0, 0, 0},  //TV = 12.53(8 lines)  AV=2.97  SV=5.01  BV=10.49
    {179,1216,1048, 0, 0, 0},  //TV = 12.45(9 lines)  AV=2.97  SV=5.05  BV=10.37
    {190,1216,1064, 0, 0, 0},  //TV = 12.36(9 lines)  AV=2.97  SV=5.07  BV=10.26
    {201,1216,1040, 0, 0, 0},  //TV = 12.28(10 lines)  AV=2.97  SV=5.04  BV=10.22
    {222,1136,1088, 0, 0, 0},  //TV = 12.14(11 lines)  AV=2.97  SV=5.00  BV=10.11
    {232,1216,1040, 0, 0, 0},  //TV = 12.07(11 lines)  AV=2.97  SV=5.04  BV=10.01
    {254,1136,1088, 0, 0, 0},  //TV = 11.94(12 lines)  AV=2.97  SV=5.00  BV=9.91
    {264,1216,1048, 0, 0, 0},  //TV = 11.89(13 lines)  AV=2.97  SV=5.05  BV=9.81
    {285,1216,1040, 0, 0, 0},  //TV = 11.78(14 lines)  AV=2.97  SV=5.04  BV=9.71
    {306,1216,1040, 0, 0, 0},  //TV = 11.67(15 lines)  AV=2.97  SV=5.04  BV=9.61
    {328,1216,1040, 0, 0, 0},  //TV = 11.57(16 lines)  AV=2.97  SV=5.04  BV=9.51
    {359,1136,1096, 0, 0, 0},  //TV = 11.44(18 lines)  AV=2.97  SV=5.01  BV=9.40
    {381,1216,1024, 0, 0, 0},  //TV = 11.36(19 lines)  AV=2.97  SV=5.01  BV=9.32
    {412,1136,1096, 0, 0, 0},  //TV = 11.25(20 lines)  AV=2.97  SV=5.01  BV=9.20
    {444,1136,1088, 0, 0, 0},  //TV = 11.14(22 lines)  AV=2.97  SV=5.00  BV=9.11
    {476,1136,1088, 0, 0, 0},  //TV = 11.04(24 lines)  AV=2.97  SV=5.00  BV=9.00
    {508,1136,1088, 0, 0, 0},  //TV = 10.94(25 lines)  AV=2.97  SV=5.00  BV=8.91
    {539,1216,1024, 0, 0, 0},  //TV = 10.86(27 lines)  AV=2.97  SV=5.01  BV=8.81
    {582,1136,1096, 0, 0, 0},  //TV = 10.75(29 lines)  AV=2.97  SV=5.01  BV=8.70
    {624,1136,1096, 0, 0, 0},  //TV = 10.65(31 lines)  AV=2.97  SV=5.01  BV=8.60
    {666,1136,1096, 0, 0, 0},  //TV = 10.55(33 lines)  AV=2.97  SV=5.01  BV=8.51
    {719,1136,1088, 0, 0, 0},  //TV = 10.44(36 lines)  AV=2.97  SV=5.00  BV=8.41
    {772,1136,1088, 0, 0, 0},  //TV = 10.34(39 lines)  AV=2.97  SV=5.00  BV=8.31
    {825,1136,1096, 0, 0, 0},  //TV = 10.24(41 lines)  AV=2.97  SV=5.01  BV=8.20
    {889,1136,1088, 0, 0, 0},  //TV = 10.14(44 lines)  AV=2.97  SV=5.00  BV=8.10
    {952,1136,1088, 0, 0, 0},  //TV = 10.04(48 lines)  AV=2.97  SV=5.00  BV=8.00
    {1016,1136,1088, 0, 0, 0},  //TV = 9.94(51 lines)  AV=2.97  SV=5.00  BV=7.91
    {1090,1136,1088, 0, 0, 0},  //TV = 9.84(55 lines)  AV=2.97  SV=5.00  BV=7.81
    {1174,1136,1088, 0, 0, 0},  //TV = 9.73(59 lines)  AV=2.97  SV=5.00  BV=7.70
    {1259,1136,1088, 0, 0, 0},  //TV = 9.63(63 lines)  AV=2.97  SV=5.00  BV=7.60
    {1344,1136,1088, 0, 0, 0},  //TV = 9.54(67 lines)  AV=2.97  SV=5.00  BV=7.51
    {1439,1136,1088, 0, 0, 0},  //TV = 9.44(72 lines)  AV=2.97  SV=5.00  BV=7.41
    {1545,1136,1088, 0, 0, 0},  //TV = 9.34(78 lines)  AV=2.97  SV=5.00  BV=7.31
    {1651,1136,1088, 0, 0, 0},  //TV = 9.24(83 lines)  AV=2.97  SV=5.00  BV=7.21
    {1778,1136,1088, 0, 0, 0},  //TV = 9.14(89 lines)  AV=2.97  SV=5.00  BV=7.10
    {1915,1136,1088, 0, 0, 0},  //TV = 9.03(96 lines)  AV=2.97  SV=5.00  BV=7.00
    {2032,1136,1088, 0, 0, 0},  //TV = 8.94(102 lines)  AV=2.97  SV=5.00  BV=6.91
    {2190,1136,1088, 0, 0, 0},  //TV = 8.83(110 lines)  AV=2.97  SV=5.00  BV=6.80
    {2360,1136,1080, 0, 0, 0},  //TV = 8.73(119 lines)  AV=2.97  SV=4.99  BV=6.71
    {2529,1136,1080, 0, 0, 0},  //TV = 8.63(127 lines)  AV=2.97  SV=4.99  BV=6.61
    {2698,1136,1088, 0, 0, 0},  //TV = 8.53(136 lines)  AV=2.97  SV=5.00  BV=6.50
    {2910,1136,1080, 0, 0, 0},  //TV = 8.42(147 lines)  AV=2.97  SV=4.99  BV=6.40
    {3111,1136,1080, 0, 0, 0},  //TV = 8.33(157 lines)  AV=2.97  SV=4.99  BV=6.31
    {3333,1136,1080, 0, 0, 0},  //TV = 8.23(168 lines)  AV=2.97  SV=4.99  BV=6.21
    {3566,1136,1080, 0, 0, 0},  //TV = 8.13(180 lines)  AV=2.97  SV=4.99  BV=6.11
    {3820,1136,1080, 0, 0, 0},  //TV = 8.03(193 lines)  AV=2.97  SV=4.99  BV=6.01
    {4117,1136,1080, 0, 0, 0},  //TV = 7.92(208 lines)  AV=2.97  SV=4.99  BV=5.90
    {4413,1136,1080, 0, 0, 0},  //TV = 7.82(223 lines)  AV=2.97  SV=4.99  BV=5.80
    {4720,1136,1080, 0, 0, 0},  //TV = 7.73(238 lines)  AV=2.97  SV=4.99  BV=5.71
    {5059,1136,1080, 0, 0, 0},  //TV = 7.63(255 lines)  AV=2.97  SV=4.99  BV=5.61
    {5408,1136,1080, 0, 0, 0},  //TV = 7.53(273 lines)  AV=2.97  SV=4.99  BV=5.51
    {5800,1136,1080, 0, 0, 0},  //TV = 7.43(293 lines)  AV=2.97  SV=4.99  BV=5.41
    {6202,1136,1080, 0, 0, 0},  //TV = 7.33(313 lines)  AV=2.97  SV=4.99  BV=5.31
    {6646,1136,1080, 0, 0, 0},  //TV = 7.23(336 lines)  AV=2.97  SV=4.99  BV=5.21
    {7123,1136,1080, 0, 0, 0},  //TV = 7.13(360 lines)  AV=2.97  SV=4.99  BV=5.11
    {7673,1136,1080, 0, 0, 0},  //TV = 7.03(388 lines)  AV=2.97  SV=4.99  BV=5.00
    {8223,1136,1080, 0, 0, 0},  //TV = 6.93(415 lines)  AV=2.97  SV=4.99  BV=4.90
    {8805,1136,1080, 0, 0, 0},  //TV = 6.83(445 lines)  AV=2.97  SV=4.99  BV=4.81
    {9440,1136,1080, 0, 0, 0},  //TV = 6.73(477 lines)  AV=2.97  SV=4.99  BV=4.71
    {10002,1136,1096, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=5.01  BV=4.60
    {10002,1216,1088, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=5.10  BV=4.51
    {10002,1328,1072, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=5.21  BV=4.41
    {10002,1424,1064, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=5.30  BV=4.32
    {10002,1536,1064, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=5.41  BV=4.21
    {10002,1632,1072, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=5.50  BV=4.11
    {10002,1728,1080, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=5.60  BV=4.02
    {10002,1936,1040, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=5.71  BV=3.91
    {10002,2048,1056, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=5.81  BV=3.80
    {10002,2240,1024, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=5.89  BV=3.72
    {10002,2352,1048, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=6.00  BV=3.62
    {10002,2560,1040, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=6.11  BV=3.50
    {10002,2752,1032, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=6.20  BV=3.41
    {10002,2960,1024, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=6.30  BV=3.32
    {10002,3072,1064, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=6.41  BV=3.21
    {10002,3328,1048, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=6.50  BV=3.12
    {10002,3584,1040, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=6.60  BV=3.02
    {10002,3840,1048, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=6.71  BV=2.91
    {10002,4096,1048, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=6.80  BV=2.82
    {10002,4480,1024, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=6.89  BV=2.72
    {10002,4736,1048, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=7.01  BV=2.61
    {10002,5120,1032, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=7.10  BV=2.52
    {10002,5504,1032, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=7.20  BV=2.41
    {10002,5888,1032, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=7.30  BV=2.31
    {20004,3072,1064, 0, 0, 0},  //TV = 5.64(1011 lines)  AV=2.97  SV=6.41  BV=2.21
    {20004,3328,1056, 0, 0, 0},  //TV = 5.64(1011 lines)  AV=2.97  SV=6.51  BV=2.10
    {20004,3584,1040, 0, 0, 0},  //TV = 5.64(1011 lines)  AV=2.97  SV=6.60  BV=2.02
    {20004,3840,1040, 0, 0, 0},  //TV = 5.64(1011 lines)  AV=2.97  SV=6.69  BV=1.92
    {20004,4096,1048, 0, 0, 0},  //TV = 5.64(1011 lines)  AV=2.97  SV=6.80  BV=1.82
    {20004,4480,1024, 0, 0, 0},  //TV = 5.64(1011 lines)  AV=2.97  SV=6.89  BV=1.72
    {29995,3200,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=6.41  BV=1.62
    {29995,3456,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=6.52  BV=1.51
    {29995,3584,1056, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=6.62  BV=1.41
    {29995,3968,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=6.72  BV=1.31
    {29995,4224,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=6.82  BV=1.21
    {29995,4480,1040, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=6.92  BV=1.11
    {29995,4864,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=7.01  BV=1.02
    {29995,5120,1048, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=7.12  BV=0.91
    {29995,5632,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=7.22  BV=0.81
    {29995,6016,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=7.32  BV=0.71
    {29995,6384,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=7.42  BV=0.61
    {29995,6896,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=7.52  BV=0.51
    {29995,7280,1040, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=7.62  BV=0.41
    {29995,7936,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=7.72  BV=0.31
    {29995,8192,1064, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=7.82  BV=0.21
    {29995,8192,1136, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=7.92  BV=0.11
    {29995,8192,1232, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=8.03  BV=-0.00
    {29995,8192,1320, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=8.13  BV=-0.10
    {29995,8192,1416, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=8.23  BV=-0.20
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used   
},
};

static strAETable g_AE_Custom1AutoTable =
{
    AETABLE_CUSTOM1_AUTO,    //eAETableID
    116,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    113,    //i4MaxBV
    -2,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sCustom1PLineTable_60Hz,
    sCustom1PLineTable_50Hz,
    NULL,
};

static strEvPline sCustom2PLineTable_60Hz =
{
{
    {95,1216,1064, 0, 0, 0},  //TV = 13.36(4 lines)  AV=2.97  SV=5.07  BV=11.26
    {105,1136,1088, 0, 0, 0},  //TV = 13.22(5 lines)  AV=2.97  SV=5.00  BV=11.19
    {105,1216,1072, 0, 0, 0},  //TV = 13.22(5 lines)  AV=2.97  SV=5.08  BV=11.11
    {116,1216,1064, 0, 0, 0},  //TV = 13.07(5 lines)  AV=2.97  SV=5.07  BV=10.98
    {127,1216,1040, 0, 0, 0},  //TV = 12.94(6 lines)  AV=2.97  SV=5.04  BV=10.88
    {137,1136,1096, 0, 0, 0},  //TV = 12.83(6 lines)  AV=2.97  SV=5.01  BV=10.79
    {137,1216,1088, 0, 0, 0},  //TV = 12.83(6 lines)  AV=2.97  SV=5.10  BV=10.70
    {158,1136,1096, 0, 0, 0},  //TV = 12.63(7 lines)  AV=2.97  SV=5.01  BV=10.59
    {169,1216,1024, 0, 0, 0},  //TV = 12.53(8 lines)  AV=2.97  SV=5.01  BV=10.49
    {179,1216,1048, 0, 0, 0},  //TV = 12.45(9 lines)  AV=2.97  SV=5.05  BV=10.37
    {190,1216,1064, 0, 0, 0},  //TV = 12.36(9 lines)  AV=2.97  SV=5.07  BV=10.26
    {201,1216,1040, 0, 0, 0},  //TV = 12.28(10 lines)  AV=2.97  SV=5.04  BV=10.22
    {222,1136,1088, 0, 0, 0},  //TV = 12.14(11 lines)  AV=2.97  SV=5.00  BV=10.11
    {232,1216,1040, 0, 0, 0},  //TV = 12.07(11 lines)  AV=2.97  SV=5.04  BV=10.01
    {254,1136,1088, 0, 0, 0},  //TV = 11.94(12 lines)  AV=2.97  SV=5.00  BV=9.91
    {264,1216,1048, 0, 0, 0},  //TV = 11.89(13 lines)  AV=2.97  SV=5.05  BV=9.81
    {285,1216,1040, 0, 0, 0},  //TV = 11.78(14 lines)  AV=2.97  SV=5.04  BV=9.71
    {306,1216,1040, 0, 0, 0},  //TV = 11.67(15 lines)  AV=2.97  SV=5.04  BV=9.61
    {328,1216,1040, 0, 0, 0},  //TV = 11.57(16 lines)  AV=2.97  SV=5.04  BV=9.51
    {359,1136,1096, 0, 0, 0},  //TV = 11.44(18 lines)  AV=2.97  SV=5.01  BV=9.40
    {381,1216,1024, 0, 0, 0},  //TV = 11.36(19 lines)  AV=2.97  SV=5.01  BV=9.32
    {412,1136,1096, 0, 0, 0},  //TV = 11.25(20 lines)  AV=2.97  SV=5.01  BV=9.20
    {444,1136,1088, 0, 0, 0},  //TV = 11.14(22 lines)  AV=2.97  SV=5.00  BV=9.11
    {476,1136,1088, 0, 0, 0},  //TV = 11.04(24 lines)  AV=2.97  SV=5.00  BV=9.00
    {508,1136,1088, 0, 0, 0},  //TV = 10.94(25 lines)  AV=2.97  SV=5.00  BV=8.91
    {539,1216,1024, 0, 0, 0},  //TV = 10.86(27 lines)  AV=2.97  SV=5.01  BV=8.81
    {582,1136,1096, 0, 0, 0},  //TV = 10.75(29 lines)  AV=2.97  SV=5.01  BV=8.70
    {624,1136,1096, 0, 0, 0},  //TV = 10.65(31 lines)  AV=2.97  SV=5.01  BV=8.60
    {666,1136,1096, 0, 0, 0},  //TV = 10.55(33 lines)  AV=2.97  SV=5.01  BV=8.51
    {719,1136,1088, 0, 0, 0},  //TV = 10.44(36 lines)  AV=2.97  SV=5.00  BV=8.41
    {772,1136,1088, 0, 0, 0},  //TV = 10.34(39 lines)  AV=2.97  SV=5.00  BV=8.31
    {825,1136,1096, 0, 0, 0},  //TV = 10.24(41 lines)  AV=2.97  SV=5.01  BV=8.20
    {889,1136,1088, 0, 0, 0},  //TV = 10.14(44 lines)  AV=2.97  SV=5.00  BV=8.10
    {952,1136,1088, 0, 0, 0},  //TV = 10.04(48 lines)  AV=2.97  SV=5.00  BV=8.00
    {1016,1136,1088, 0, 0, 0},  //TV = 9.94(51 lines)  AV=2.97  SV=5.00  BV=7.91
    {1090,1136,1088, 0, 0, 0},  //TV = 9.84(55 lines)  AV=2.97  SV=5.00  BV=7.81
    {1174,1136,1088, 0, 0, 0},  //TV = 9.73(59 lines)  AV=2.97  SV=5.00  BV=7.70
    {1259,1136,1088, 0, 0, 0},  //TV = 9.63(63 lines)  AV=2.97  SV=5.00  BV=7.60
    {1344,1136,1088, 0, 0, 0},  //TV = 9.54(67 lines)  AV=2.97  SV=5.00  BV=7.51
    {1439,1136,1088, 0, 0, 0},  //TV = 9.44(72 lines)  AV=2.97  SV=5.00  BV=7.41
    {1545,1136,1088, 0, 0, 0},  //TV = 9.34(78 lines)  AV=2.97  SV=5.00  BV=7.31
    {1651,1136,1088, 0, 0, 0},  //TV = 9.24(83 lines)  AV=2.97  SV=5.00  BV=7.21
    {1778,1136,1088, 0, 0, 0},  //TV = 9.14(89 lines)  AV=2.97  SV=5.00  BV=7.10
    {1915,1136,1088, 0, 0, 0},  //TV = 9.03(96 lines)  AV=2.97  SV=5.00  BV=7.00
    {2032,1136,1088, 0, 0, 0},  //TV = 8.94(102 lines)  AV=2.97  SV=5.00  BV=6.91
    {2190,1136,1088, 0, 0, 0},  //TV = 8.83(110 lines)  AV=2.97  SV=5.00  BV=6.80
    {2360,1136,1080, 0, 0, 0},  //TV = 8.73(119 lines)  AV=2.97  SV=4.99  BV=6.71
    {2529,1136,1080, 0, 0, 0},  //TV = 8.63(127 lines)  AV=2.97  SV=4.99  BV=6.61
    {2698,1136,1088, 0, 0, 0},  //TV = 8.53(136 lines)  AV=2.97  SV=5.00  BV=6.50
    {2910,1136,1080, 0, 0, 0},  //TV = 8.42(147 lines)  AV=2.97  SV=4.99  BV=6.40
    {3111,1136,1080, 0, 0, 0},  //TV = 8.33(157 lines)  AV=2.97  SV=4.99  BV=6.31
    {3333,1136,1080, 0, 0, 0},  //TV = 8.23(168 lines)  AV=2.97  SV=4.99  BV=6.21
    {3566,1136,1080, 0, 0, 0},  //TV = 8.13(180 lines)  AV=2.97  SV=4.99  BV=6.11
    {3820,1136,1080, 0, 0, 0},  //TV = 8.03(193 lines)  AV=2.97  SV=4.99  BV=6.01
    {4117,1136,1080, 0, 0, 0},  //TV = 7.92(208 lines)  AV=2.97  SV=4.99  BV=5.90
    {4413,1136,1080, 0, 0, 0},  //TV = 7.82(223 lines)  AV=2.97  SV=4.99  BV=5.80
    {4720,1136,1080, 0, 0, 0},  //TV = 7.73(238 lines)  AV=2.97  SV=4.99  BV=5.71
    {5059,1136,1080, 0, 0, 0},  //TV = 7.63(255 lines)  AV=2.97  SV=4.99  BV=5.61
    {5408,1136,1080, 0, 0, 0},  //TV = 7.53(273 lines)  AV=2.97  SV=4.99  BV=5.51
    {5800,1136,1080, 0, 0, 0},  //TV = 7.43(293 lines)  AV=2.97  SV=4.99  BV=5.41
    {6202,1136,1080, 0, 0, 0},  //TV = 7.33(313 lines)  AV=2.97  SV=4.99  BV=5.31
    {6646,1136,1080, 0, 0, 0},  //TV = 7.23(336 lines)  AV=2.97  SV=4.99  BV=5.21
    {7123,1136,1080, 0, 0, 0},  //TV = 7.13(360 lines)  AV=2.97  SV=4.99  BV=5.11
    {7673,1136,1080, 0, 0, 0},  //TV = 7.03(388 lines)  AV=2.97  SV=4.99  BV=5.00
    {8223,1136,1080, 0, 0, 0},  //TV = 6.93(415 lines)  AV=2.97  SV=4.99  BV=4.90
    {8329,1216,1064, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.97  SV=5.07  BV=4.81
    {8329,1328,1048, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.97  SV=5.17  BV=4.70
    {8329,1424,1040, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.97  SV=5.26  BV=4.61
    {8329,1536,1040, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.97  SV=5.37  BV=4.51
    {8329,1632,1048, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.97  SV=5.47  BV=4.41
    {8329,1728,1056, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.97  SV=5.56  BV=4.31
    {8329,1840,1064, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.97  SV=5.67  BV=4.21
    {8329,2048,1024, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.97  SV=5.77  BV=4.11
    {8329,2144,1048, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.97  SV=5.87  BV=4.01
    {8329,2352,1024, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.97  SV=5.97  BV=3.91
    {16670,1216,1064, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=5.07  BV=3.81
    {16670,1328,1048, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=5.17  BV=3.70
    {16670,1424,1040, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=5.26  BV=3.61
    {16670,1536,1040, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=5.37  BV=3.50
    {16670,1632,1048, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=5.47  BV=3.41
    {16670,1728,1064, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=5.58  BV=3.30
    {16670,1840,1064, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=5.67  BV=3.21
    {16670,2048,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=5.77  BV=3.11
    {16670,2144,1048, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=5.87  BV=3.01
    {16670,2352,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=5.97  BV=2.91
    {16670,2448,1056, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=6.07  BV=2.81
    {16670,2656,1048, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=6.17  BV=2.70
    {16670,2864,1040, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=6.27  BV=2.61
    {16670,3072,1032, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=6.36  BV=2.52
    {16670,3328,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=6.47  BV=2.41
    {16670,3456,1056, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=6.56  BV=2.31
    {16670,3712,1056, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=6.67  BV=2.21
    {16670,4096,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=6.77  BV=2.11
    {16670,4352,1032, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=6.86  BV=2.01
    {24988,3072,1048, 0, 0, 0},  //TV = 5.32(1263 lines)  AV=2.97  SV=6.38  BV=1.91
    {24988,3328,1040, 0, 0, 0},  //TV = 5.32(1263 lines)  AV=2.97  SV=6.49  BV=1.81
    {24988,3584,1032, 0, 0, 0},  //TV = 5.32(1263 lines)  AV=2.97  SV=6.58  BV=1.71
    {24988,3840,1032, 0, 0, 0},  //TV = 5.32(1263 lines)  AV=2.97  SV=6.68  BV=1.61
    {33298,3072,1040, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=6.37  BV=1.51
    {33298,3328,1024, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=6.47  BV=1.41
    {33298,3584,1024, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=6.57  BV=1.31
    {33298,3840,1024, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=6.67  BV=1.21
    {33298,4096,1024, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=6.77  BV=1.11
    {33298,4352,1032, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=6.86  BV=1.02
    {33298,4608,1048, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=6.97  BV=0.91
    {33298,4992,1032, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=7.06  BV=0.82
    {33298,5376,1032, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=7.17  BV=0.71
    {33298,5760,1032, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=7.27  BV=0.61
    {33298,6240,1024, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=7.37  BV=0.51
    {33298,6544,1040, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=7.46  BV=0.42
    {33298,7072,1032, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=7.56  BV=0.31
    {33298,7472,1048, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=7.67  BV=0.21
    {33298,8192,1024, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=7.77  BV=0.11
    {33298,8192,1104, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=7.87  BV=0.01
    {33298,8192,1192, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=7.98  BV=-0.11
    {33298,8192,1280, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=8.09  BV=-0.21
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used   
},
};

static strEvPline sCustom2PLineTable_50Hz =
{
{
    {95,1216,1064, 0, 0, 0},  //TV = 13.36(4 lines)  AV=2.97  SV=5.07  BV=11.26
    {105,1136,1088, 0, 0, 0},  //TV = 13.22(5 lines)  AV=2.97  SV=5.00  BV=11.19
    {105,1216,1072, 0, 0, 0},  //TV = 13.22(5 lines)  AV=2.97  SV=5.08  BV=11.11
    {116,1216,1064, 0, 0, 0},  //TV = 13.07(5 lines)  AV=2.97  SV=5.07  BV=10.98
    {127,1216,1040, 0, 0, 0},  //TV = 12.94(6 lines)  AV=2.97  SV=5.04  BV=10.88
    {137,1136,1096, 0, 0, 0},  //TV = 12.83(6 lines)  AV=2.97  SV=5.01  BV=10.79
    {137,1216,1088, 0, 0, 0},  //TV = 12.83(6 lines)  AV=2.97  SV=5.10  BV=10.70
    {158,1136,1096, 0, 0, 0},  //TV = 12.63(7 lines)  AV=2.97  SV=5.01  BV=10.59
    {169,1216,1024, 0, 0, 0},  //TV = 12.53(8 lines)  AV=2.97  SV=5.01  BV=10.49
    {179,1216,1048, 0, 0, 0},  //TV = 12.45(9 lines)  AV=2.97  SV=5.05  BV=10.37
    {190,1216,1064, 0, 0, 0},  //TV = 12.36(9 lines)  AV=2.97  SV=5.07  BV=10.26
    {201,1216,1040, 0, 0, 0},  //TV = 12.28(10 lines)  AV=2.97  SV=5.04  BV=10.22
    {222,1136,1088, 0, 0, 0},  //TV = 12.14(11 lines)  AV=2.97  SV=5.00  BV=10.11
    {232,1216,1040, 0, 0, 0},  //TV = 12.07(11 lines)  AV=2.97  SV=5.04  BV=10.01
    {254,1136,1088, 0, 0, 0},  //TV = 11.94(12 lines)  AV=2.97  SV=5.00  BV=9.91
    {264,1216,1048, 0, 0, 0},  //TV = 11.89(13 lines)  AV=2.97  SV=5.05  BV=9.81
    {285,1216,1040, 0, 0, 0},  //TV = 11.78(14 lines)  AV=2.97  SV=5.04  BV=9.71
    {306,1216,1040, 0, 0, 0},  //TV = 11.67(15 lines)  AV=2.97  SV=5.04  BV=9.61
    {328,1216,1040, 0, 0, 0},  //TV = 11.57(16 lines)  AV=2.97  SV=5.04  BV=9.51
    {359,1136,1096, 0, 0, 0},  //TV = 11.44(18 lines)  AV=2.97  SV=5.01  BV=9.40
    {381,1216,1024, 0, 0, 0},  //TV = 11.36(19 lines)  AV=2.97  SV=5.01  BV=9.32
    {412,1136,1096, 0, 0, 0},  //TV = 11.25(20 lines)  AV=2.97  SV=5.01  BV=9.20
    {444,1136,1088, 0, 0, 0},  //TV = 11.14(22 lines)  AV=2.97  SV=5.00  BV=9.11
    {476,1136,1088, 0, 0, 0},  //TV = 11.04(24 lines)  AV=2.97  SV=5.00  BV=9.00
    {508,1136,1088, 0, 0, 0},  //TV = 10.94(25 lines)  AV=2.97  SV=5.00  BV=8.91
    {539,1216,1024, 0, 0, 0},  //TV = 10.86(27 lines)  AV=2.97  SV=5.01  BV=8.81
    {582,1136,1096, 0, 0, 0},  //TV = 10.75(29 lines)  AV=2.97  SV=5.01  BV=8.70
    {624,1136,1096, 0, 0, 0},  //TV = 10.65(31 lines)  AV=2.97  SV=5.01  BV=8.60
    {666,1136,1096, 0, 0, 0},  //TV = 10.55(33 lines)  AV=2.97  SV=5.01  BV=8.51
    {719,1136,1088, 0, 0, 0},  //TV = 10.44(36 lines)  AV=2.97  SV=5.00  BV=8.41
    {772,1136,1088, 0, 0, 0},  //TV = 10.34(39 lines)  AV=2.97  SV=5.00  BV=8.31
    {825,1136,1096, 0, 0, 0},  //TV = 10.24(41 lines)  AV=2.97  SV=5.01  BV=8.20
    {889,1136,1088, 0, 0, 0},  //TV = 10.14(44 lines)  AV=2.97  SV=5.00  BV=8.10
    {952,1136,1088, 0, 0, 0},  //TV = 10.04(48 lines)  AV=2.97  SV=5.00  BV=8.00
    {1016,1136,1088, 0, 0, 0},  //TV = 9.94(51 lines)  AV=2.97  SV=5.00  BV=7.91
    {1090,1136,1088, 0, 0, 0},  //TV = 9.84(55 lines)  AV=2.97  SV=5.00  BV=7.81
    {1174,1136,1088, 0, 0, 0},  //TV = 9.73(59 lines)  AV=2.97  SV=5.00  BV=7.70
    {1259,1136,1088, 0, 0, 0},  //TV = 9.63(63 lines)  AV=2.97  SV=5.00  BV=7.60
    {1344,1136,1088, 0, 0, 0},  //TV = 9.54(67 lines)  AV=2.97  SV=5.00  BV=7.51
    {1439,1136,1088, 0, 0, 0},  //TV = 9.44(72 lines)  AV=2.97  SV=5.00  BV=7.41
    {1545,1136,1088, 0, 0, 0},  //TV = 9.34(78 lines)  AV=2.97  SV=5.00  BV=7.31
    {1651,1136,1088, 0, 0, 0},  //TV = 9.24(83 lines)  AV=2.97  SV=5.00  BV=7.21
    {1778,1136,1088, 0, 0, 0},  //TV = 9.14(89 lines)  AV=2.97  SV=5.00  BV=7.10
    {1915,1136,1088, 0, 0, 0},  //TV = 9.03(96 lines)  AV=2.97  SV=5.00  BV=7.00
    {2032,1136,1088, 0, 0, 0},  //TV = 8.94(102 lines)  AV=2.97  SV=5.00  BV=6.91
    {2190,1136,1088, 0, 0, 0},  //TV = 8.83(110 lines)  AV=2.97  SV=5.00  BV=6.80
    {2360,1136,1080, 0, 0, 0},  //TV = 8.73(119 lines)  AV=2.97  SV=4.99  BV=6.71
    {2529,1136,1080, 0, 0, 0},  //TV = 8.63(127 lines)  AV=2.97  SV=4.99  BV=6.61
    {2698,1136,1088, 0, 0, 0},  //TV = 8.53(136 lines)  AV=2.97  SV=5.00  BV=6.50
    {2910,1136,1080, 0, 0, 0},  //TV = 8.42(147 lines)  AV=2.97  SV=4.99  BV=6.40
    {3111,1136,1080, 0, 0, 0},  //TV = 8.33(157 lines)  AV=2.97  SV=4.99  BV=6.31
    {3333,1136,1080, 0, 0, 0},  //TV = 8.23(168 lines)  AV=2.97  SV=4.99  BV=6.21
    {3566,1136,1080, 0, 0, 0},  //TV = 8.13(180 lines)  AV=2.97  SV=4.99  BV=6.11
    {3820,1136,1080, 0, 0, 0},  //TV = 8.03(193 lines)  AV=2.97  SV=4.99  BV=6.01
    {4117,1136,1080, 0, 0, 0},  //TV = 7.92(208 lines)  AV=2.97  SV=4.99  BV=5.90
    {4413,1136,1080, 0, 0, 0},  //TV = 7.82(223 lines)  AV=2.97  SV=4.99  BV=5.80
    {4720,1136,1080, 0, 0, 0},  //TV = 7.73(238 lines)  AV=2.97  SV=4.99  BV=5.71
    {5059,1136,1080, 0, 0, 0},  //TV = 7.63(255 lines)  AV=2.97  SV=4.99  BV=5.61
    {5408,1136,1080, 0, 0, 0},  //TV = 7.53(273 lines)  AV=2.97  SV=4.99  BV=5.51
    {5800,1136,1080, 0, 0, 0},  //TV = 7.43(293 lines)  AV=2.97  SV=4.99  BV=5.41
    {6202,1136,1080, 0, 0, 0},  //TV = 7.33(313 lines)  AV=2.97  SV=4.99  BV=5.31
    {6646,1136,1080, 0, 0, 0},  //TV = 7.23(336 lines)  AV=2.97  SV=4.99  BV=5.21
    {7123,1136,1080, 0, 0, 0},  //TV = 7.13(360 lines)  AV=2.97  SV=4.99  BV=5.11
    {7673,1136,1080, 0, 0, 0},  //TV = 7.03(388 lines)  AV=2.97  SV=4.99  BV=5.00
    {8223,1136,1080, 0, 0, 0},  //TV = 6.93(415 lines)  AV=2.97  SV=4.99  BV=4.90
    {8805,1136,1080, 0, 0, 0},  //TV = 6.83(445 lines)  AV=2.97  SV=4.99  BV=4.81
    {9440,1136,1080, 0, 0, 0},  //TV = 6.73(477 lines)  AV=2.97  SV=4.99  BV=4.71
    {10002,1136,1096, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=5.01  BV=4.60
    {10002,1216,1088, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=5.10  BV=4.51
    {10002,1328,1072, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=5.21  BV=4.41
    {10002,1424,1064, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=5.30  BV=4.32
    {10002,1536,1064, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=5.41  BV=4.21
    {10002,1632,1072, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=5.50  BV=4.11
    {10002,1728,1080, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=5.60  BV=4.02
    {10002,1936,1040, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=5.71  BV=3.91
    {10002,2048,1056, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=5.81  BV=3.80
    {10002,2240,1024, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=5.89  BV=3.72
    {10002,2352,1048, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=6.00  BV=3.62
    {10002,2560,1040, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=6.11  BV=3.50
    {10002,2752,1032, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=6.20  BV=3.41
    {10002,2960,1024, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=6.30  BV=3.32
    {10002,3072,1064, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=6.41  BV=3.21
    {10002,3328,1048, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=6.50  BV=3.12
    {10002,3584,1040, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=6.60  BV=3.02
    {10002,3840,1048, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=6.71  BV=2.91
    {10002,4096,1048, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=6.80  BV=2.82
    {10002,4480,1024, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=6.89  BV=2.72
    {10002,4736,1048, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=7.01  BV=2.61
    {10002,5120,1032, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=7.10  BV=2.52
    {10002,5504,1032, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=7.20  BV=2.41
    {10002,5888,1032, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=7.30  BV=2.31
    {20004,3072,1064, 0, 0, 0},  //TV = 5.64(1011 lines)  AV=2.97  SV=6.41  BV=2.21
    {20004,3328,1056, 0, 0, 0},  //TV = 5.64(1011 lines)  AV=2.97  SV=6.51  BV=2.10
    {20004,3584,1040, 0, 0, 0},  //TV = 5.64(1011 lines)  AV=2.97  SV=6.60  BV=2.02
    {20004,3840,1040, 0, 0, 0},  //TV = 5.64(1011 lines)  AV=2.97  SV=6.69  BV=1.92
    {20004,4096,1048, 0, 0, 0},  //TV = 5.64(1011 lines)  AV=2.97  SV=6.80  BV=1.82
    {20004,4480,1024, 0, 0, 0},  //TV = 5.64(1011 lines)  AV=2.97  SV=6.89  BV=1.72
    {29995,3200,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=6.41  BV=1.62
    {29995,3456,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=6.52  BV=1.51
    {29995,3584,1056, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=6.62  BV=1.41
    {29995,3968,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=6.72  BV=1.31
    {29995,4224,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=6.82  BV=1.21
    {29995,4480,1040, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=6.92  BV=1.11
    {29995,4864,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=7.01  BV=1.02
    {29995,5120,1048, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=7.12  BV=0.91
    {29995,5632,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=7.22  BV=0.81
    {29995,6016,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=7.32  BV=0.71
    {29995,6384,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=7.42  BV=0.61
    {29995,6896,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=7.52  BV=0.51
    {29995,7280,1040, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=7.62  BV=0.41
    {29995,7936,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=7.72  BV=0.31
    {29995,8192,1064, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=7.82  BV=0.21
    {29995,8192,1136, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=7.92  BV=0.11
    {29995,8192,1232, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=8.03  BV=-0.00
    {29995,8192,1320, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=8.13  BV=-0.10
    {29995,8192,1416, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=8.23  BV=-0.20
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used   
},
};

static strAETable g_AE_Custom2AutoTable =
{
    AETABLE_CUSTOM2_AUTO,    //eAETableID
    116,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    113,    //i4MaxBV
    -2,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sCustom2PLineTable_60Hz,
    sCustom2PLineTable_50Hz,
    NULL,
};

static strEvPline sCustom3PLineTable_60Hz =
{
{
    {95,1216,1064, 0, 0, 0},  //TV = 13.36(4 lines)  AV=2.97  SV=5.07  BV=11.26
    {105,1136,1088, 0, 0, 0},  //TV = 13.22(5 lines)  AV=2.97  SV=5.00  BV=11.19
    {105,1216,1072, 0, 0, 0},  //TV = 13.22(5 lines)  AV=2.97  SV=5.08  BV=11.11
    {116,1216,1064, 0, 0, 0},  //TV = 13.07(5 lines)  AV=2.97  SV=5.07  BV=10.98
    {127,1216,1040, 0, 0, 0},  //TV = 12.94(6 lines)  AV=2.97  SV=5.04  BV=10.88
    {137,1136,1096, 0, 0, 0},  //TV = 12.83(6 lines)  AV=2.97  SV=5.01  BV=10.79
    {137,1216,1088, 0, 0, 0},  //TV = 12.83(6 lines)  AV=2.97  SV=5.10  BV=10.70
    {158,1136,1096, 0, 0, 0},  //TV = 12.63(7 lines)  AV=2.97  SV=5.01  BV=10.59
    {169,1216,1024, 0, 0, 0},  //TV = 12.53(8 lines)  AV=2.97  SV=5.01  BV=10.49
    {179,1216,1048, 0, 0, 0},  //TV = 12.45(9 lines)  AV=2.97  SV=5.05  BV=10.37
    {190,1216,1064, 0, 0, 0},  //TV = 12.36(9 lines)  AV=2.97  SV=5.07  BV=10.26
    {201,1216,1040, 0, 0, 0},  //TV = 12.28(10 lines)  AV=2.97  SV=5.04  BV=10.22
    {222,1136,1088, 0, 0, 0},  //TV = 12.14(11 lines)  AV=2.97  SV=5.00  BV=10.11
    {232,1216,1040, 0, 0, 0},  //TV = 12.07(11 lines)  AV=2.97  SV=5.04  BV=10.01
    {254,1136,1088, 0, 0, 0},  //TV = 11.94(12 lines)  AV=2.97  SV=5.00  BV=9.91
    {264,1216,1048, 0, 0, 0},  //TV = 11.89(13 lines)  AV=2.97  SV=5.05  BV=9.81
    {285,1216,1040, 0, 0, 0},  //TV = 11.78(14 lines)  AV=2.97  SV=5.04  BV=9.71
    {306,1216,1040, 0, 0, 0},  //TV = 11.67(15 lines)  AV=2.97  SV=5.04  BV=9.61
    {328,1216,1040, 0, 0, 0},  //TV = 11.57(16 lines)  AV=2.97  SV=5.04  BV=9.51
    {359,1136,1096, 0, 0, 0},  //TV = 11.44(18 lines)  AV=2.97  SV=5.01  BV=9.40
    {381,1216,1024, 0, 0, 0},  //TV = 11.36(19 lines)  AV=2.97  SV=5.01  BV=9.32
    {412,1136,1096, 0, 0, 0},  //TV = 11.25(20 lines)  AV=2.97  SV=5.01  BV=9.20
    {444,1136,1088, 0, 0, 0},  //TV = 11.14(22 lines)  AV=2.97  SV=5.00  BV=9.11
    {476,1136,1088, 0, 0, 0},  //TV = 11.04(24 lines)  AV=2.97  SV=5.00  BV=9.00
    {508,1136,1088, 0, 0, 0},  //TV = 10.94(25 lines)  AV=2.97  SV=5.00  BV=8.91
    {539,1216,1024, 0, 0, 0},  //TV = 10.86(27 lines)  AV=2.97  SV=5.01  BV=8.81
    {582,1136,1096, 0, 0, 0},  //TV = 10.75(29 lines)  AV=2.97  SV=5.01  BV=8.70
    {624,1136,1096, 0, 0, 0},  //TV = 10.65(31 lines)  AV=2.97  SV=5.01  BV=8.60
    {666,1136,1096, 0, 0, 0},  //TV = 10.55(33 lines)  AV=2.97  SV=5.01  BV=8.51
    {719,1136,1088, 0, 0, 0},  //TV = 10.44(36 lines)  AV=2.97  SV=5.00  BV=8.41
    {772,1136,1088, 0, 0, 0},  //TV = 10.34(39 lines)  AV=2.97  SV=5.00  BV=8.31
    {825,1136,1096, 0, 0, 0},  //TV = 10.24(41 lines)  AV=2.97  SV=5.01  BV=8.20
    {889,1136,1088, 0, 0, 0},  //TV = 10.14(44 lines)  AV=2.97  SV=5.00  BV=8.10
    {952,1136,1088, 0, 0, 0},  //TV = 10.04(48 lines)  AV=2.97  SV=5.00  BV=8.00
    {1016,1136,1088, 0, 0, 0},  //TV = 9.94(51 lines)  AV=2.97  SV=5.00  BV=7.91
    {1090,1136,1088, 0, 0, 0},  //TV = 9.84(55 lines)  AV=2.97  SV=5.00  BV=7.81
    {1174,1136,1088, 0, 0, 0},  //TV = 9.73(59 lines)  AV=2.97  SV=5.00  BV=7.70
    {1259,1136,1088, 0, 0, 0},  //TV = 9.63(63 lines)  AV=2.97  SV=5.00  BV=7.60
    {1344,1136,1088, 0, 0, 0},  //TV = 9.54(67 lines)  AV=2.97  SV=5.00  BV=7.51
    {1439,1136,1088, 0, 0, 0},  //TV = 9.44(72 lines)  AV=2.97  SV=5.00  BV=7.41
    {1545,1136,1088, 0, 0, 0},  //TV = 9.34(78 lines)  AV=2.97  SV=5.00  BV=7.31
    {1651,1136,1088, 0, 0, 0},  //TV = 9.24(83 lines)  AV=2.97  SV=5.00  BV=7.21
    {1778,1136,1088, 0, 0, 0},  //TV = 9.14(89 lines)  AV=2.97  SV=5.00  BV=7.10
    {1915,1136,1088, 0, 0, 0},  //TV = 9.03(96 lines)  AV=2.97  SV=5.00  BV=7.00
    {2032,1136,1088, 0, 0, 0},  //TV = 8.94(102 lines)  AV=2.97  SV=5.00  BV=6.91
    {2190,1136,1088, 0, 0, 0},  //TV = 8.83(110 lines)  AV=2.97  SV=5.00  BV=6.80
    {2360,1136,1080, 0, 0, 0},  //TV = 8.73(119 lines)  AV=2.97  SV=4.99  BV=6.71
    {2529,1136,1080, 0, 0, 0},  //TV = 8.63(127 lines)  AV=2.97  SV=4.99  BV=6.61
    {2698,1136,1088, 0, 0, 0},  //TV = 8.53(136 lines)  AV=2.97  SV=5.00  BV=6.50
    {2910,1136,1080, 0, 0, 0},  //TV = 8.42(147 lines)  AV=2.97  SV=4.99  BV=6.40
    {3111,1136,1080, 0, 0, 0},  //TV = 8.33(157 lines)  AV=2.97  SV=4.99  BV=6.31
    {3333,1136,1080, 0, 0, 0},  //TV = 8.23(168 lines)  AV=2.97  SV=4.99  BV=6.21
    {3566,1136,1080, 0, 0, 0},  //TV = 8.13(180 lines)  AV=2.97  SV=4.99  BV=6.11
    {3820,1136,1080, 0, 0, 0},  //TV = 8.03(193 lines)  AV=2.97  SV=4.99  BV=6.01
    {4117,1136,1080, 0, 0, 0},  //TV = 7.92(208 lines)  AV=2.97  SV=4.99  BV=5.90
    {4413,1136,1080, 0, 0, 0},  //TV = 7.82(223 lines)  AV=2.97  SV=4.99  BV=5.80
    {4720,1136,1080, 0, 0, 0},  //TV = 7.73(238 lines)  AV=2.97  SV=4.99  BV=5.71
    {5059,1136,1080, 0, 0, 0},  //TV = 7.63(255 lines)  AV=2.97  SV=4.99  BV=5.61
    {5408,1136,1080, 0, 0, 0},  //TV = 7.53(273 lines)  AV=2.97  SV=4.99  BV=5.51
    {5800,1136,1080, 0, 0, 0},  //TV = 7.43(293 lines)  AV=2.97  SV=4.99  BV=5.41
    {6202,1136,1080, 0, 0, 0},  //TV = 7.33(313 lines)  AV=2.97  SV=4.99  BV=5.31
    {6646,1136,1080, 0, 0, 0},  //TV = 7.23(336 lines)  AV=2.97  SV=4.99  BV=5.21
    {7123,1136,1080, 0, 0, 0},  //TV = 7.13(360 lines)  AV=2.97  SV=4.99  BV=5.11
    {7673,1136,1080, 0, 0, 0},  //TV = 7.03(388 lines)  AV=2.97  SV=4.99  BV=5.00
    {8223,1136,1080, 0, 0, 0},  //TV = 6.93(415 lines)  AV=2.97  SV=4.99  BV=4.90
    {8329,1216,1064, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.97  SV=5.07  BV=4.81
    {8329,1328,1048, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.97  SV=5.17  BV=4.70
    {8329,1424,1040, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.97  SV=5.26  BV=4.61
    {8329,1536,1040, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.97  SV=5.37  BV=4.51
    {8329,1632,1048, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.97  SV=5.47  BV=4.41
    {8329,1728,1056, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.97  SV=5.56  BV=4.31
    {8329,1840,1064, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.97  SV=5.67  BV=4.21
    {8329,2048,1024, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.97  SV=5.77  BV=4.11
    {8329,2144,1048, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.97  SV=5.87  BV=4.01
    {8329,2352,1024, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.97  SV=5.97  BV=3.91
    {16670,1216,1064, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=5.07  BV=3.81
    {16670,1328,1048, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=5.17  BV=3.70
    {16670,1424,1040, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=5.26  BV=3.61
    {16670,1536,1040, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=5.37  BV=3.50
    {16670,1632,1048, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=5.47  BV=3.41
    {16670,1728,1064, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=5.58  BV=3.30
    {16670,1840,1064, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=5.67  BV=3.21
    {16670,2048,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=5.77  BV=3.11
    {16670,2144,1048, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=5.87  BV=3.01
    {16670,2352,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=5.97  BV=2.91
    {16670,2448,1056, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=6.07  BV=2.81
    {16670,2656,1048, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=6.17  BV=2.70
    {16670,2864,1040, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=6.27  BV=2.61
    {16670,3072,1032, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=6.36  BV=2.52
    {16670,3328,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=6.47  BV=2.41
    {16670,3456,1056, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=6.56  BV=2.31
    {16670,3712,1056, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=6.67  BV=2.21
    {16670,4096,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=6.77  BV=2.11
    {16670,4352,1032, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=6.86  BV=2.01
    {24988,3072,1048, 0, 0, 0},  //TV = 5.32(1263 lines)  AV=2.97  SV=6.38  BV=1.91
    {24988,3328,1040, 0, 0, 0},  //TV = 5.32(1263 lines)  AV=2.97  SV=6.49  BV=1.81
    {24988,3584,1032, 0, 0, 0},  //TV = 5.32(1263 lines)  AV=2.97  SV=6.58  BV=1.71
    {24988,3840,1032, 0, 0, 0},  //TV = 5.32(1263 lines)  AV=2.97  SV=6.68  BV=1.61
    {33298,3072,1040, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=6.37  BV=1.51
    {33298,3328,1024, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=6.47  BV=1.41
    {33298,3584,1024, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=6.57  BV=1.31
    {33298,3840,1024, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=6.67  BV=1.21
    {33298,4096,1024, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=6.77  BV=1.11
    {33298,4352,1032, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=6.86  BV=1.02
    {33298,4608,1048, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=6.97  BV=0.91
    {33298,4992,1032, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=7.06  BV=0.82
    {33298,5376,1032, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=7.17  BV=0.71
    {33298,5760,1032, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=7.27  BV=0.61
    {33298,6240,1024, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=7.37  BV=0.51
    {33298,6544,1040, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=7.46  BV=0.42
    {33298,7072,1032, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=7.56  BV=0.31
    {33298,7472,1048, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=7.67  BV=0.21
    {33298,8192,1024, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=7.77  BV=0.11
    {33298,8192,1104, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=7.87  BV=0.01
    {33298,8192,1192, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=7.98  BV=-0.11
    {33298,8192,1280, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=8.09  BV=-0.21
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used   
},
};

static strEvPline sCustom3PLineTable_50Hz =
{
{
    {95,1216,1064, 0, 0, 0},  //TV = 13.36(4 lines)  AV=2.97  SV=5.07  BV=11.26
    {105,1136,1088, 0, 0, 0},  //TV = 13.22(5 lines)  AV=2.97  SV=5.00  BV=11.19
    {105,1216,1072, 0, 0, 0},  //TV = 13.22(5 lines)  AV=2.97  SV=5.08  BV=11.11
    {116,1216,1064, 0, 0, 0},  //TV = 13.07(5 lines)  AV=2.97  SV=5.07  BV=10.98
    {127,1216,1040, 0, 0, 0},  //TV = 12.94(6 lines)  AV=2.97  SV=5.04  BV=10.88
    {137,1136,1096, 0, 0, 0},  //TV = 12.83(6 lines)  AV=2.97  SV=5.01  BV=10.79
    {137,1216,1088, 0, 0, 0},  //TV = 12.83(6 lines)  AV=2.97  SV=5.10  BV=10.70
    {158,1136,1096, 0, 0, 0},  //TV = 12.63(7 lines)  AV=2.97  SV=5.01  BV=10.59
    {169,1216,1024, 0, 0, 0},  //TV = 12.53(8 lines)  AV=2.97  SV=5.01  BV=10.49
    {179,1216,1048, 0, 0, 0},  //TV = 12.45(9 lines)  AV=2.97  SV=5.05  BV=10.37
    {190,1216,1064, 0, 0, 0},  //TV = 12.36(9 lines)  AV=2.97  SV=5.07  BV=10.26
    {201,1216,1040, 0, 0, 0},  //TV = 12.28(10 lines)  AV=2.97  SV=5.04  BV=10.22
    {222,1136,1088, 0, 0, 0},  //TV = 12.14(11 lines)  AV=2.97  SV=5.00  BV=10.11
    {232,1216,1040, 0, 0, 0},  //TV = 12.07(11 lines)  AV=2.97  SV=5.04  BV=10.01
    {254,1136,1088, 0, 0, 0},  //TV = 11.94(12 lines)  AV=2.97  SV=5.00  BV=9.91
    {264,1216,1048, 0, 0, 0},  //TV = 11.89(13 lines)  AV=2.97  SV=5.05  BV=9.81
    {285,1216,1040, 0, 0, 0},  //TV = 11.78(14 lines)  AV=2.97  SV=5.04  BV=9.71
    {306,1216,1040, 0, 0, 0},  //TV = 11.67(15 lines)  AV=2.97  SV=5.04  BV=9.61
    {328,1216,1040, 0, 0, 0},  //TV = 11.57(16 lines)  AV=2.97  SV=5.04  BV=9.51
    {359,1136,1096, 0, 0, 0},  //TV = 11.44(18 lines)  AV=2.97  SV=5.01  BV=9.40
    {381,1216,1024, 0, 0, 0},  //TV = 11.36(19 lines)  AV=2.97  SV=5.01  BV=9.32
    {412,1136,1096, 0, 0, 0},  //TV = 11.25(20 lines)  AV=2.97  SV=5.01  BV=9.20
    {444,1136,1088, 0, 0, 0},  //TV = 11.14(22 lines)  AV=2.97  SV=5.00  BV=9.11
    {476,1136,1088, 0, 0, 0},  //TV = 11.04(24 lines)  AV=2.97  SV=5.00  BV=9.00
    {508,1136,1088, 0, 0, 0},  //TV = 10.94(25 lines)  AV=2.97  SV=5.00  BV=8.91
    {539,1216,1024, 0, 0, 0},  //TV = 10.86(27 lines)  AV=2.97  SV=5.01  BV=8.81
    {582,1136,1096, 0, 0, 0},  //TV = 10.75(29 lines)  AV=2.97  SV=5.01  BV=8.70
    {624,1136,1096, 0, 0, 0},  //TV = 10.65(31 lines)  AV=2.97  SV=5.01  BV=8.60
    {666,1136,1096, 0, 0, 0},  //TV = 10.55(33 lines)  AV=2.97  SV=5.01  BV=8.51
    {719,1136,1088, 0, 0, 0},  //TV = 10.44(36 lines)  AV=2.97  SV=5.00  BV=8.41
    {772,1136,1088, 0, 0, 0},  //TV = 10.34(39 lines)  AV=2.97  SV=5.00  BV=8.31
    {825,1136,1096, 0, 0, 0},  //TV = 10.24(41 lines)  AV=2.97  SV=5.01  BV=8.20
    {889,1136,1088, 0, 0, 0},  //TV = 10.14(44 lines)  AV=2.97  SV=5.00  BV=8.10
    {952,1136,1088, 0, 0, 0},  //TV = 10.04(48 lines)  AV=2.97  SV=5.00  BV=8.00
    {1016,1136,1088, 0, 0, 0},  //TV = 9.94(51 lines)  AV=2.97  SV=5.00  BV=7.91
    {1090,1136,1088, 0, 0, 0},  //TV = 9.84(55 lines)  AV=2.97  SV=5.00  BV=7.81
    {1174,1136,1088, 0, 0, 0},  //TV = 9.73(59 lines)  AV=2.97  SV=5.00  BV=7.70
    {1259,1136,1088, 0, 0, 0},  //TV = 9.63(63 lines)  AV=2.97  SV=5.00  BV=7.60
    {1344,1136,1088, 0, 0, 0},  //TV = 9.54(67 lines)  AV=2.97  SV=5.00  BV=7.51
    {1439,1136,1088, 0, 0, 0},  //TV = 9.44(72 lines)  AV=2.97  SV=5.00  BV=7.41
    {1545,1136,1088, 0, 0, 0},  //TV = 9.34(78 lines)  AV=2.97  SV=5.00  BV=7.31
    {1651,1136,1088, 0, 0, 0},  //TV = 9.24(83 lines)  AV=2.97  SV=5.00  BV=7.21
    {1778,1136,1088, 0, 0, 0},  //TV = 9.14(89 lines)  AV=2.97  SV=5.00  BV=7.10
    {1915,1136,1088, 0, 0, 0},  //TV = 9.03(96 lines)  AV=2.97  SV=5.00  BV=7.00
    {2032,1136,1088, 0, 0, 0},  //TV = 8.94(102 lines)  AV=2.97  SV=5.00  BV=6.91
    {2190,1136,1088, 0, 0, 0},  //TV = 8.83(110 lines)  AV=2.97  SV=5.00  BV=6.80
    {2360,1136,1080, 0, 0, 0},  //TV = 8.73(119 lines)  AV=2.97  SV=4.99  BV=6.71
    {2529,1136,1080, 0, 0, 0},  //TV = 8.63(127 lines)  AV=2.97  SV=4.99  BV=6.61
    {2698,1136,1088, 0, 0, 0},  //TV = 8.53(136 lines)  AV=2.97  SV=5.00  BV=6.50
    {2910,1136,1080, 0, 0, 0},  //TV = 8.42(147 lines)  AV=2.97  SV=4.99  BV=6.40
    {3111,1136,1080, 0, 0, 0},  //TV = 8.33(157 lines)  AV=2.97  SV=4.99  BV=6.31
    {3333,1136,1080, 0, 0, 0},  //TV = 8.23(168 lines)  AV=2.97  SV=4.99  BV=6.21
    {3566,1136,1080, 0, 0, 0},  //TV = 8.13(180 lines)  AV=2.97  SV=4.99  BV=6.11
    {3820,1136,1080, 0, 0, 0},  //TV = 8.03(193 lines)  AV=2.97  SV=4.99  BV=6.01
    {4117,1136,1080, 0, 0, 0},  //TV = 7.92(208 lines)  AV=2.97  SV=4.99  BV=5.90
    {4413,1136,1080, 0, 0, 0},  //TV = 7.82(223 lines)  AV=2.97  SV=4.99  BV=5.80
    {4720,1136,1080, 0, 0, 0},  //TV = 7.73(238 lines)  AV=2.97  SV=4.99  BV=5.71
    {5059,1136,1080, 0, 0, 0},  //TV = 7.63(255 lines)  AV=2.97  SV=4.99  BV=5.61
    {5408,1136,1080, 0, 0, 0},  //TV = 7.53(273 lines)  AV=2.97  SV=4.99  BV=5.51
    {5800,1136,1080, 0, 0, 0},  //TV = 7.43(293 lines)  AV=2.97  SV=4.99  BV=5.41
    {6202,1136,1080, 0, 0, 0},  //TV = 7.33(313 lines)  AV=2.97  SV=4.99  BV=5.31
    {6646,1136,1080, 0, 0, 0},  //TV = 7.23(336 lines)  AV=2.97  SV=4.99  BV=5.21
    {7123,1136,1080, 0, 0, 0},  //TV = 7.13(360 lines)  AV=2.97  SV=4.99  BV=5.11
    {7673,1136,1080, 0, 0, 0},  //TV = 7.03(388 lines)  AV=2.97  SV=4.99  BV=5.00
    {8223,1136,1080, 0, 0, 0},  //TV = 6.93(415 lines)  AV=2.97  SV=4.99  BV=4.90
    {8805,1136,1080, 0, 0, 0},  //TV = 6.83(445 lines)  AV=2.97  SV=4.99  BV=4.81
    {9440,1136,1080, 0, 0, 0},  //TV = 6.73(477 lines)  AV=2.97  SV=4.99  BV=4.71
    {10002,1136,1096, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=5.01  BV=4.60
    {10002,1216,1088, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=5.10  BV=4.51
    {10002,1328,1072, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=5.21  BV=4.41
    {10002,1424,1064, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=5.30  BV=4.32
    {10002,1536,1064, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=5.41  BV=4.21
    {10002,1632,1072, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=5.50  BV=4.11
    {10002,1728,1080, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=5.60  BV=4.02
    {10002,1936,1040, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=5.71  BV=3.91
    {10002,2048,1056, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=5.81  BV=3.80
    {10002,2240,1024, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=5.89  BV=3.72
    {10002,2352,1048, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=6.00  BV=3.62
    {10002,2560,1040, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=6.11  BV=3.50
    {10002,2752,1032, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=6.20  BV=3.41
    {10002,2960,1024, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=6.30  BV=3.32
    {10002,3072,1064, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=6.41  BV=3.21
    {10002,3328,1048, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=6.50  BV=3.12
    {10002,3584,1040, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=6.60  BV=3.02
    {10002,3840,1048, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=6.71  BV=2.91
    {10002,4096,1048, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=6.80  BV=2.82
    {10002,4480,1024, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=6.89  BV=2.72
    {10002,4736,1048, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=7.01  BV=2.61
    {10002,5120,1032, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=7.10  BV=2.52
    {10002,5504,1032, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=7.20  BV=2.41
    {10002,5888,1032, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=7.30  BV=2.31
    {20004,3072,1064, 0, 0, 0},  //TV = 5.64(1011 lines)  AV=2.97  SV=6.41  BV=2.21
    {20004,3328,1056, 0, 0, 0},  //TV = 5.64(1011 lines)  AV=2.97  SV=6.51  BV=2.10
    {20004,3584,1040, 0, 0, 0},  //TV = 5.64(1011 lines)  AV=2.97  SV=6.60  BV=2.02
    {20004,3840,1040, 0, 0, 0},  //TV = 5.64(1011 lines)  AV=2.97  SV=6.69  BV=1.92
    {20004,4096,1048, 0, 0, 0},  //TV = 5.64(1011 lines)  AV=2.97  SV=6.80  BV=1.82
    {20004,4480,1024, 0, 0, 0},  //TV = 5.64(1011 lines)  AV=2.97  SV=6.89  BV=1.72
    {29995,3200,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=6.41  BV=1.62
    {29995,3456,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=6.52  BV=1.51
    {29995,3584,1056, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=6.62  BV=1.41
    {29995,3968,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=6.72  BV=1.31
    {29995,4224,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=6.82  BV=1.21
    {29995,4480,1040, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=6.92  BV=1.11
    {29995,4864,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=7.01  BV=1.02
    {29995,5120,1048, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=7.12  BV=0.91
    {29995,5632,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=7.22  BV=0.81
    {29995,6016,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=7.32  BV=0.71
    {29995,6384,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=7.42  BV=0.61
    {29995,6896,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=7.52  BV=0.51
    {29995,7280,1040, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=7.62  BV=0.41
    {29995,7936,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=7.72  BV=0.31
    {29995,8192,1064, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=7.82  BV=0.21
    {29995,8192,1136, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=7.92  BV=0.11
    {29995,8192,1232, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=8.03  BV=-0.00
    {29995,8192,1320, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=8.13  BV=-0.10
    {29995,8192,1416, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=8.23  BV=-0.20
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used   
},
};

static strAETable g_AE_Custom3AutoTable =
{
    AETABLE_CUSTOM3_AUTO,    //eAETableID
    116,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    113,    //i4MaxBV
    -2,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sCustom3PLineTable_60Hz,
    sCustom3PLineTable_50Hz,
    NULL,
};

static strEvPline sCustom4PLineTable_60Hz =
{
{
    {95,1216,1064, 0, 0, 0},  //TV = 13.36(4 lines)  AV=2.97  SV=5.07  BV=11.26
    {105,1136,1088, 0, 0, 0},  //TV = 13.22(5 lines)  AV=2.97  SV=5.00  BV=11.19
    {105,1216,1072, 0, 0, 0},  //TV = 13.22(5 lines)  AV=2.97  SV=5.08  BV=11.11
    {116,1216,1064, 0, 0, 0},  //TV = 13.07(5 lines)  AV=2.97  SV=5.07  BV=10.98
    {127,1216,1040, 0, 0, 0},  //TV = 12.94(6 lines)  AV=2.97  SV=5.04  BV=10.88
    {137,1136,1096, 0, 0, 0},  //TV = 12.83(6 lines)  AV=2.97  SV=5.01  BV=10.79
    {137,1216,1088, 0, 0, 0},  //TV = 12.83(6 lines)  AV=2.97  SV=5.10  BV=10.70
    {158,1136,1096, 0, 0, 0},  //TV = 12.63(7 lines)  AV=2.97  SV=5.01  BV=10.59
    {169,1216,1024, 0, 0, 0},  //TV = 12.53(8 lines)  AV=2.97  SV=5.01  BV=10.49
    {179,1216,1048, 0, 0, 0},  //TV = 12.45(9 lines)  AV=2.97  SV=5.05  BV=10.37
    {190,1216,1064, 0, 0, 0},  //TV = 12.36(9 lines)  AV=2.97  SV=5.07  BV=10.26
    {201,1216,1040, 0, 0, 0},  //TV = 12.28(10 lines)  AV=2.97  SV=5.04  BV=10.22
    {222,1136,1088, 0, 0, 0},  //TV = 12.14(11 lines)  AV=2.97  SV=5.00  BV=10.11
    {232,1216,1040, 0, 0, 0},  //TV = 12.07(11 lines)  AV=2.97  SV=5.04  BV=10.01
    {254,1136,1088, 0, 0, 0},  //TV = 11.94(12 lines)  AV=2.97  SV=5.00  BV=9.91
    {264,1216,1048, 0, 0, 0},  //TV = 11.89(13 lines)  AV=2.97  SV=5.05  BV=9.81
    {285,1216,1040, 0, 0, 0},  //TV = 11.78(14 lines)  AV=2.97  SV=5.04  BV=9.71
    {306,1216,1040, 0, 0, 0},  //TV = 11.67(15 lines)  AV=2.97  SV=5.04  BV=9.61
    {328,1216,1040, 0, 0, 0},  //TV = 11.57(16 lines)  AV=2.97  SV=5.04  BV=9.51
    {359,1136,1096, 0, 0, 0},  //TV = 11.44(18 lines)  AV=2.97  SV=5.01  BV=9.40
    {381,1216,1024, 0, 0, 0},  //TV = 11.36(19 lines)  AV=2.97  SV=5.01  BV=9.32
    {412,1136,1096, 0, 0, 0},  //TV = 11.25(20 lines)  AV=2.97  SV=5.01  BV=9.20
    {444,1136,1088, 0, 0, 0},  //TV = 11.14(22 lines)  AV=2.97  SV=5.00  BV=9.11
    {476,1136,1088, 0, 0, 0},  //TV = 11.04(24 lines)  AV=2.97  SV=5.00  BV=9.00
    {508,1136,1088, 0, 0, 0},  //TV = 10.94(25 lines)  AV=2.97  SV=5.00  BV=8.91
    {539,1216,1024, 0, 0, 0},  //TV = 10.86(27 lines)  AV=2.97  SV=5.01  BV=8.81
    {582,1136,1096, 0, 0, 0},  //TV = 10.75(29 lines)  AV=2.97  SV=5.01  BV=8.70
    {624,1136,1096, 0, 0, 0},  //TV = 10.65(31 lines)  AV=2.97  SV=5.01  BV=8.60
    {666,1136,1096, 0, 0, 0},  //TV = 10.55(33 lines)  AV=2.97  SV=5.01  BV=8.51
    {719,1136,1088, 0, 0, 0},  //TV = 10.44(36 lines)  AV=2.97  SV=5.00  BV=8.41
    {772,1136,1088, 0, 0, 0},  //TV = 10.34(39 lines)  AV=2.97  SV=5.00  BV=8.31
    {825,1136,1096, 0, 0, 0},  //TV = 10.24(41 lines)  AV=2.97  SV=5.01  BV=8.20
    {889,1136,1088, 0, 0, 0},  //TV = 10.14(44 lines)  AV=2.97  SV=5.00  BV=8.10
    {952,1136,1088, 0, 0, 0},  //TV = 10.04(48 lines)  AV=2.97  SV=5.00  BV=8.00
    {1016,1136,1088, 0, 0, 0},  //TV = 9.94(51 lines)  AV=2.97  SV=5.00  BV=7.91
    {1090,1136,1088, 0, 0, 0},  //TV = 9.84(55 lines)  AV=2.97  SV=5.00  BV=7.81
    {1174,1136,1088, 0, 0, 0},  //TV = 9.73(59 lines)  AV=2.97  SV=5.00  BV=7.70
    {1259,1136,1088, 0, 0, 0},  //TV = 9.63(63 lines)  AV=2.97  SV=5.00  BV=7.60
    {1344,1136,1088, 0, 0, 0},  //TV = 9.54(67 lines)  AV=2.97  SV=5.00  BV=7.51
    {1439,1136,1088, 0, 0, 0},  //TV = 9.44(72 lines)  AV=2.97  SV=5.00  BV=7.41
    {1545,1136,1088, 0, 0, 0},  //TV = 9.34(78 lines)  AV=2.97  SV=5.00  BV=7.31
    {1651,1136,1088, 0, 0, 0},  //TV = 9.24(83 lines)  AV=2.97  SV=5.00  BV=7.21
    {1778,1136,1088, 0, 0, 0},  //TV = 9.14(89 lines)  AV=2.97  SV=5.00  BV=7.10
    {1915,1136,1088, 0, 0, 0},  //TV = 9.03(96 lines)  AV=2.97  SV=5.00  BV=7.00
    {2032,1136,1088, 0, 0, 0},  //TV = 8.94(102 lines)  AV=2.97  SV=5.00  BV=6.91
    {2190,1136,1088, 0, 0, 0},  //TV = 8.83(110 lines)  AV=2.97  SV=5.00  BV=6.80
    {2360,1136,1080, 0, 0, 0},  //TV = 8.73(119 lines)  AV=2.97  SV=4.99  BV=6.71
    {2529,1136,1080, 0, 0, 0},  //TV = 8.63(127 lines)  AV=2.97  SV=4.99  BV=6.61
    {2698,1136,1088, 0, 0, 0},  //TV = 8.53(136 lines)  AV=2.97  SV=5.00  BV=6.50
    {2910,1136,1080, 0, 0, 0},  //TV = 8.42(147 lines)  AV=2.97  SV=4.99  BV=6.40
    {3111,1136,1080, 0, 0, 0},  //TV = 8.33(157 lines)  AV=2.97  SV=4.99  BV=6.31
    {3333,1136,1080, 0, 0, 0},  //TV = 8.23(168 lines)  AV=2.97  SV=4.99  BV=6.21
    {3566,1136,1080, 0, 0, 0},  //TV = 8.13(180 lines)  AV=2.97  SV=4.99  BV=6.11
    {3820,1136,1080, 0, 0, 0},  //TV = 8.03(193 lines)  AV=2.97  SV=4.99  BV=6.01
    {4117,1136,1080, 0, 0, 0},  //TV = 7.92(208 lines)  AV=2.97  SV=4.99  BV=5.90
    {4413,1136,1080, 0, 0, 0},  //TV = 7.82(223 lines)  AV=2.97  SV=4.99  BV=5.80
    {4720,1136,1080, 0, 0, 0},  //TV = 7.73(238 lines)  AV=2.97  SV=4.99  BV=5.71
    {5059,1136,1080, 0, 0, 0},  //TV = 7.63(255 lines)  AV=2.97  SV=4.99  BV=5.61
    {5408,1136,1080, 0, 0, 0},  //TV = 7.53(273 lines)  AV=2.97  SV=4.99  BV=5.51
    {5800,1136,1080, 0, 0, 0},  //TV = 7.43(293 lines)  AV=2.97  SV=4.99  BV=5.41
    {6202,1136,1080, 0, 0, 0},  //TV = 7.33(313 lines)  AV=2.97  SV=4.99  BV=5.31
    {6646,1136,1080, 0, 0, 0},  //TV = 7.23(336 lines)  AV=2.97  SV=4.99  BV=5.21
    {7123,1136,1080, 0, 0, 0},  //TV = 7.13(360 lines)  AV=2.97  SV=4.99  BV=5.11
    {7673,1136,1080, 0, 0, 0},  //TV = 7.03(388 lines)  AV=2.97  SV=4.99  BV=5.00
    {8223,1136,1080, 0, 0, 0},  //TV = 6.93(415 lines)  AV=2.97  SV=4.99  BV=4.90
    {8329,1216,1064, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.97  SV=5.07  BV=4.81
    {8329,1328,1048, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.97  SV=5.17  BV=4.70
    {8329,1424,1040, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.97  SV=5.26  BV=4.61
    {8329,1536,1040, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.97  SV=5.37  BV=4.51
    {8329,1632,1048, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.97  SV=5.47  BV=4.41
    {8329,1728,1056, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.97  SV=5.56  BV=4.31
    {8329,1840,1064, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.97  SV=5.67  BV=4.21
    {8329,2048,1024, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.97  SV=5.77  BV=4.11
    {8329,2144,1048, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.97  SV=5.87  BV=4.01
    {8329,2352,1024, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.97  SV=5.97  BV=3.91
    {16670,1216,1064, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=5.07  BV=3.81
    {16670,1328,1048, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=5.17  BV=3.70
    {16670,1424,1040, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=5.26  BV=3.61
    {16670,1536,1040, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=5.37  BV=3.50
    {16670,1632,1048, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=5.47  BV=3.41
    {16670,1728,1064, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=5.58  BV=3.30
    {16670,1840,1064, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=5.67  BV=3.21
    {16670,2048,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=5.77  BV=3.11
    {16670,2144,1048, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=5.87  BV=3.01
    {16670,2352,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=5.97  BV=2.91
    {16670,2448,1056, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=6.07  BV=2.81
    {16670,2656,1048, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=6.17  BV=2.70
    {16670,2864,1040, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=6.27  BV=2.61
    {16670,3072,1032, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=6.36  BV=2.52
    {16670,3328,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=6.47  BV=2.41
    {16670,3456,1056, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=6.56  BV=2.31
    {16670,3712,1056, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=6.67  BV=2.21
    {16670,4096,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=6.77  BV=2.11
    {16670,4352,1032, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=6.86  BV=2.01
    {24988,3072,1048, 0, 0, 0},  //TV = 5.32(1263 lines)  AV=2.97  SV=6.38  BV=1.91
    {24988,3328,1040, 0, 0, 0},  //TV = 5.32(1263 lines)  AV=2.97  SV=6.49  BV=1.81
    {24988,3584,1032, 0, 0, 0},  //TV = 5.32(1263 lines)  AV=2.97  SV=6.58  BV=1.71
    {24988,3840,1032, 0, 0, 0},  //TV = 5.32(1263 lines)  AV=2.97  SV=6.68  BV=1.61
    {33298,3072,1040, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=6.37  BV=1.51
    {33298,3328,1024, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=6.47  BV=1.41
    {33298,3584,1024, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=6.57  BV=1.31
    {33298,3840,1024, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=6.67  BV=1.21
    {33298,4096,1024, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=6.77  BV=1.11
    {33298,4352,1032, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=6.86  BV=1.02
    {33298,4608,1048, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=6.97  BV=0.91
    {33298,4992,1032, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=7.06  BV=0.82
    {33298,5376,1032, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=7.17  BV=0.71
    {33298,5760,1032, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=7.27  BV=0.61
    {33298,6240,1024, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=7.37  BV=0.51
    {33298,6544,1040, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=7.46  BV=0.42
    {33298,7072,1032, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=7.56  BV=0.31
    {33298,7472,1048, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=7.67  BV=0.21
    {33298,8192,1024, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=7.77  BV=0.11
    {33298,8192,1104, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=7.87  BV=0.01
    {33298,8192,1192, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=7.98  BV=-0.11
    {33298,8192,1280, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=8.09  BV=-0.21
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used   
},
};

static strEvPline sCustom4PLineTable_50Hz =
{
{
    {95,1216,1064, 0, 0, 0},  //TV = 13.36(4 lines)  AV=2.97  SV=5.07  BV=11.26
    {105,1136,1088, 0, 0, 0},  //TV = 13.22(5 lines)  AV=2.97  SV=5.00  BV=11.19
    {105,1216,1072, 0, 0, 0},  //TV = 13.22(5 lines)  AV=2.97  SV=5.08  BV=11.11
    {116,1216,1064, 0, 0, 0},  //TV = 13.07(5 lines)  AV=2.97  SV=5.07  BV=10.98
    {127,1216,1040, 0, 0, 0},  //TV = 12.94(6 lines)  AV=2.97  SV=5.04  BV=10.88
    {137,1136,1096, 0, 0, 0},  //TV = 12.83(6 lines)  AV=2.97  SV=5.01  BV=10.79
    {137,1216,1088, 0, 0, 0},  //TV = 12.83(6 lines)  AV=2.97  SV=5.10  BV=10.70
    {158,1136,1096, 0, 0, 0},  //TV = 12.63(7 lines)  AV=2.97  SV=5.01  BV=10.59
    {169,1216,1024, 0, 0, 0},  //TV = 12.53(8 lines)  AV=2.97  SV=5.01  BV=10.49
    {179,1216,1048, 0, 0, 0},  //TV = 12.45(9 lines)  AV=2.97  SV=5.05  BV=10.37
    {190,1216,1064, 0, 0, 0},  //TV = 12.36(9 lines)  AV=2.97  SV=5.07  BV=10.26
    {201,1216,1040, 0, 0, 0},  //TV = 12.28(10 lines)  AV=2.97  SV=5.04  BV=10.22
    {222,1136,1088, 0, 0, 0},  //TV = 12.14(11 lines)  AV=2.97  SV=5.00  BV=10.11
    {232,1216,1040, 0, 0, 0},  //TV = 12.07(11 lines)  AV=2.97  SV=5.04  BV=10.01
    {254,1136,1088, 0, 0, 0},  //TV = 11.94(12 lines)  AV=2.97  SV=5.00  BV=9.91
    {264,1216,1048, 0, 0, 0},  //TV = 11.89(13 lines)  AV=2.97  SV=5.05  BV=9.81
    {285,1216,1040, 0, 0, 0},  //TV = 11.78(14 lines)  AV=2.97  SV=5.04  BV=9.71
    {306,1216,1040, 0, 0, 0},  //TV = 11.67(15 lines)  AV=2.97  SV=5.04  BV=9.61
    {328,1216,1040, 0, 0, 0},  //TV = 11.57(16 lines)  AV=2.97  SV=5.04  BV=9.51
    {359,1136,1096, 0, 0, 0},  //TV = 11.44(18 lines)  AV=2.97  SV=5.01  BV=9.40
    {381,1216,1024, 0, 0, 0},  //TV = 11.36(19 lines)  AV=2.97  SV=5.01  BV=9.32
    {412,1136,1096, 0, 0, 0},  //TV = 11.25(20 lines)  AV=2.97  SV=5.01  BV=9.20
    {444,1136,1088, 0, 0, 0},  //TV = 11.14(22 lines)  AV=2.97  SV=5.00  BV=9.11
    {476,1136,1088, 0, 0, 0},  //TV = 11.04(24 lines)  AV=2.97  SV=5.00  BV=9.00
    {508,1136,1088, 0, 0, 0},  //TV = 10.94(25 lines)  AV=2.97  SV=5.00  BV=8.91
    {539,1216,1024, 0, 0, 0},  //TV = 10.86(27 lines)  AV=2.97  SV=5.01  BV=8.81
    {582,1136,1096, 0, 0, 0},  //TV = 10.75(29 lines)  AV=2.97  SV=5.01  BV=8.70
    {624,1136,1096, 0, 0, 0},  //TV = 10.65(31 lines)  AV=2.97  SV=5.01  BV=8.60
    {666,1136,1096, 0, 0, 0},  //TV = 10.55(33 lines)  AV=2.97  SV=5.01  BV=8.51
    {719,1136,1088, 0, 0, 0},  //TV = 10.44(36 lines)  AV=2.97  SV=5.00  BV=8.41
    {772,1136,1088, 0, 0, 0},  //TV = 10.34(39 lines)  AV=2.97  SV=5.00  BV=8.31
    {825,1136,1096, 0, 0, 0},  //TV = 10.24(41 lines)  AV=2.97  SV=5.01  BV=8.20
    {889,1136,1088, 0, 0, 0},  //TV = 10.14(44 lines)  AV=2.97  SV=5.00  BV=8.10
    {952,1136,1088, 0, 0, 0},  //TV = 10.04(48 lines)  AV=2.97  SV=5.00  BV=8.00
    {1016,1136,1088, 0, 0, 0},  //TV = 9.94(51 lines)  AV=2.97  SV=5.00  BV=7.91
    {1090,1136,1088, 0, 0, 0},  //TV = 9.84(55 lines)  AV=2.97  SV=5.00  BV=7.81
    {1174,1136,1088, 0, 0, 0},  //TV = 9.73(59 lines)  AV=2.97  SV=5.00  BV=7.70
    {1259,1136,1088, 0, 0, 0},  //TV = 9.63(63 lines)  AV=2.97  SV=5.00  BV=7.60
    {1344,1136,1088, 0, 0, 0},  //TV = 9.54(67 lines)  AV=2.97  SV=5.00  BV=7.51
    {1439,1136,1088, 0, 0, 0},  //TV = 9.44(72 lines)  AV=2.97  SV=5.00  BV=7.41
    {1545,1136,1088, 0, 0, 0},  //TV = 9.34(78 lines)  AV=2.97  SV=5.00  BV=7.31
    {1651,1136,1088, 0, 0, 0},  //TV = 9.24(83 lines)  AV=2.97  SV=5.00  BV=7.21
    {1778,1136,1088, 0, 0, 0},  //TV = 9.14(89 lines)  AV=2.97  SV=5.00  BV=7.10
    {1915,1136,1088, 0, 0, 0},  //TV = 9.03(96 lines)  AV=2.97  SV=5.00  BV=7.00
    {2032,1136,1088, 0, 0, 0},  //TV = 8.94(102 lines)  AV=2.97  SV=5.00  BV=6.91
    {2190,1136,1088, 0, 0, 0},  //TV = 8.83(110 lines)  AV=2.97  SV=5.00  BV=6.80
    {2360,1136,1080, 0, 0, 0},  //TV = 8.73(119 lines)  AV=2.97  SV=4.99  BV=6.71
    {2529,1136,1080, 0, 0, 0},  //TV = 8.63(127 lines)  AV=2.97  SV=4.99  BV=6.61
    {2698,1136,1088, 0, 0, 0},  //TV = 8.53(136 lines)  AV=2.97  SV=5.00  BV=6.50
    {2910,1136,1080, 0, 0, 0},  //TV = 8.42(147 lines)  AV=2.97  SV=4.99  BV=6.40
    {3111,1136,1080, 0, 0, 0},  //TV = 8.33(157 lines)  AV=2.97  SV=4.99  BV=6.31
    {3333,1136,1080, 0, 0, 0},  //TV = 8.23(168 lines)  AV=2.97  SV=4.99  BV=6.21
    {3566,1136,1080, 0, 0, 0},  //TV = 8.13(180 lines)  AV=2.97  SV=4.99  BV=6.11
    {3820,1136,1080, 0, 0, 0},  //TV = 8.03(193 lines)  AV=2.97  SV=4.99  BV=6.01
    {4117,1136,1080, 0, 0, 0},  //TV = 7.92(208 lines)  AV=2.97  SV=4.99  BV=5.90
    {4413,1136,1080, 0, 0, 0},  //TV = 7.82(223 lines)  AV=2.97  SV=4.99  BV=5.80
    {4720,1136,1080, 0, 0, 0},  //TV = 7.73(238 lines)  AV=2.97  SV=4.99  BV=5.71
    {5059,1136,1080, 0, 0, 0},  //TV = 7.63(255 lines)  AV=2.97  SV=4.99  BV=5.61
    {5408,1136,1080, 0, 0, 0},  //TV = 7.53(273 lines)  AV=2.97  SV=4.99  BV=5.51
    {5800,1136,1080, 0, 0, 0},  //TV = 7.43(293 lines)  AV=2.97  SV=4.99  BV=5.41
    {6202,1136,1080, 0, 0, 0},  //TV = 7.33(313 lines)  AV=2.97  SV=4.99  BV=5.31
    {6646,1136,1080, 0, 0, 0},  //TV = 7.23(336 lines)  AV=2.97  SV=4.99  BV=5.21
    {7123,1136,1080, 0, 0, 0},  //TV = 7.13(360 lines)  AV=2.97  SV=4.99  BV=5.11
    {7673,1136,1080, 0, 0, 0},  //TV = 7.03(388 lines)  AV=2.97  SV=4.99  BV=5.00
    {8223,1136,1080, 0, 0, 0},  //TV = 6.93(415 lines)  AV=2.97  SV=4.99  BV=4.90
    {8805,1136,1080, 0, 0, 0},  //TV = 6.83(445 lines)  AV=2.97  SV=4.99  BV=4.81
    {9440,1136,1080, 0, 0, 0},  //TV = 6.73(477 lines)  AV=2.97  SV=4.99  BV=4.71
    {10002,1136,1096, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=5.01  BV=4.60
    {10002,1216,1088, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=5.10  BV=4.51
    {10002,1328,1072, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=5.21  BV=4.41
    {10002,1424,1064, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=5.30  BV=4.32
    {10002,1536,1064, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=5.41  BV=4.21
    {10002,1632,1072, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=5.50  BV=4.11
    {10002,1728,1080, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=5.60  BV=4.02
    {10002,1936,1040, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=5.71  BV=3.91
    {10002,2048,1056, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=5.81  BV=3.80
    {10002,2240,1024, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=5.89  BV=3.72
    {10002,2352,1048, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=6.00  BV=3.62
    {10002,2560,1040, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=6.11  BV=3.50
    {10002,2752,1032, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=6.20  BV=3.41
    {10002,2960,1024, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=6.30  BV=3.32
    {10002,3072,1064, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=6.41  BV=3.21
    {10002,3328,1048, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=6.50  BV=3.12
    {10002,3584,1040, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=6.60  BV=3.02
    {10002,3840,1048, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=6.71  BV=2.91
    {10002,4096,1048, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=6.80  BV=2.82
    {10002,4480,1024, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=6.89  BV=2.72
    {10002,4736,1048, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=7.01  BV=2.61
    {10002,5120,1032, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=7.10  BV=2.52
    {10002,5504,1032, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=7.20  BV=2.41
    {10002,5888,1032, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=7.30  BV=2.31
    {20004,3072,1064, 0, 0, 0},  //TV = 5.64(1011 lines)  AV=2.97  SV=6.41  BV=2.21
    {20004,3328,1056, 0, 0, 0},  //TV = 5.64(1011 lines)  AV=2.97  SV=6.51  BV=2.10
    {20004,3584,1040, 0, 0, 0},  //TV = 5.64(1011 lines)  AV=2.97  SV=6.60  BV=2.02
    {20004,3840,1040, 0, 0, 0},  //TV = 5.64(1011 lines)  AV=2.97  SV=6.69  BV=1.92
    {20004,4096,1048, 0, 0, 0},  //TV = 5.64(1011 lines)  AV=2.97  SV=6.80  BV=1.82
    {20004,4480,1024, 0, 0, 0},  //TV = 5.64(1011 lines)  AV=2.97  SV=6.89  BV=1.72
    {29995,3200,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=6.41  BV=1.62
    {29995,3456,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=6.52  BV=1.51
    {29995,3584,1056, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=6.62  BV=1.41
    {29995,3968,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=6.72  BV=1.31
    {29995,4224,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=6.82  BV=1.21
    {29995,4480,1040, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=6.92  BV=1.11
    {29995,4864,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=7.01  BV=1.02
    {29995,5120,1048, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=7.12  BV=0.91
    {29995,5632,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=7.22  BV=0.81
    {29995,6016,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=7.32  BV=0.71
    {29995,6384,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=7.42  BV=0.61
    {29995,6896,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=7.52  BV=0.51
    {29995,7280,1040, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=7.62  BV=0.41
    {29995,7936,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=7.72  BV=0.31
    {29995,8192,1064, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=7.82  BV=0.21
    {29995,8192,1136, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=7.92  BV=0.11
    {29995,8192,1232, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=8.03  BV=-0.00
    {29995,8192,1320, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=8.13  BV=-0.10
    {29995,8192,1416, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=8.23  BV=-0.20
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used   
},
};

static strAETable g_AE_Custom4AutoTable =
{
    AETABLE_CUSTOM4_AUTO,    //eAETableID
    116,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    113,    //i4MaxBV
    -2,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sCustom4PLineTable_60Hz,
    sCustom4PLineTable_50Hz,
    NULL,
};

static strEvPline sCustom5PLineTable_60Hz =
{
{
    {95,1216,1064, 0, 0, 0},  //TV = 13.36(4 lines)  AV=2.97  SV=5.07  BV=11.26
    {105,1136,1088, 0, 0, 0},  //TV = 13.22(5 lines)  AV=2.97  SV=5.00  BV=11.19
    {105,1216,1072, 0, 0, 0},  //TV = 13.22(5 lines)  AV=2.97  SV=5.08  BV=11.11
    {116,1216,1064, 0, 0, 0},  //TV = 13.07(5 lines)  AV=2.97  SV=5.07  BV=10.98
    {127,1216,1040, 0, 0, 0},  //TV = 12.94(6 lines)  AV=2.97  SV=5.04  BV=10.88
    {137,1136,1096, 0, 0, 0},  //TV = 12.83(6 lines)  AV=2.97  SV=5.01  BV=10.79
    {137,1216,1088, 0, 0, 0},  //TV = 12.83(6 lines)  AV=2.97  SV=5.10  BV=10.70
    {158,1136,1096, 0, 0, 0},  //TV = 12.63(7 lines)  AV=2.97  SV=5.01  BV=10.59
    {169,1216,1024, 0, 0, 0},  //TV = 12.53(8 lines)  AV=2.97  SV=5.01  BV=10.49
    {179,1216,1048, 0, 0, 0},  //TV = 12.45(9 lines)  AV=2.97  SV=5.05  BV=10.37
    {190,1216,1064, 0, 0, 0},  //TV = 12.36(9 lines)  AV=2.97  SV=5.07  BV=10.26
    {201,1216,1040, 0, 0, 0},  //TV = 12.28(10 lines)  AV=2.97  SV=5.04  BV=10.22
    {222,1136,1088, 0, 0, 0},  //TV = 12.14(11 lines)  AV=2.97  SV=5.00  BV=10.11
    {232,1216,1040, 0, 0, 0},  //TV = 12.07(11 lines)  AV=2.97  SV=5.04  BV=10.01
    {254,1136,1088, 0, 0, 0},  //TV = 11.94(12 lines)  AV=2.97  SV=5.00  BV=9.91
    {264,1216,1048, 0, 0, 0},  //TV = 11.89(13 lines)  AV=2.97  SV=5.05  BV=9.81
    {285,1216,1040, 0, 0, 0},  //TV = 11.78(14 lines)  AV=2.97  SV=5.04  BV=9.71
    {306,1216,1040, 0, 0, 0},  //TV = 11.67(15 lines)  AV=2.97  SV=5.04  BV=9.61
    {328,1216,1040, 0, 0, 0},  //TV = 11.57(16 lines)  AV=2.97  SV=5.04  BV=9.51
    {359,1136,1096, 0, 0, 0},  //TV = 11.44(18 lines)  AV=2.97  SV=5.01  BV=9.40
    {381,1216,1024, 0, 0, 0},  //TV = 11.36(19 lines)  AV=2.97  SV=5.01  BV=9.32
    {412,1136,1096, 0, 0, 0},  //TV = 11.25(20 lines)  AV=2.97  SV=5.01  BV=9.20
    {444,1136,1088, 0, 0, 0},  //TV = 11.14(22 lines)  AV=2.97  SV=5.00  BV=9.11
    {476,1136,1088, 0, 0, 0},  //TV = 11.04(24 lines)  AV=2.97  SV=5.00  BV=9.00
    {508,1136,1088, 0, 0, 0},  //TV = 10.94(25 lines)  AV=2.97  SV=5.00  BV=8.91
    {539,1216,1024, 0, 0, 0},  //TV = 10.86(27 lines)  AV=2.97  SV=5.01  BV=8.81
    {582,1136,1096, 0, 0, 0},  //TV = 10.75(29 lines)  AV=2.97  SV=5.01  BV=8.70
    {624,1136,1096, 0, 0, 0},  //TV = 10.65(31 lines)  AV=2.97  SV=5.01  BV=8.60
    {666,1136,1096, 0, 0, 0},  //TV = 10.55(33 lines)  AV=2.97  SV=5.01  BV=8.51
    {719,1136,1088, 0, 0, 0},  //TV = 10.44(36 lines)  AV=2.97  SV=5.00  BV=8.41
    {772,1136,1088, 0, 0, 0},  //TV = 10.34(39 lines)  AV=2.97  SV=5.00  BV=8.31
    {825,1136,1096, 0, 0, 0},  //TV = 10.24(41 lines)  AV=2.97  SV=5.01  BV=8.20
    {889,1136,1088, 0, 0, 0},  //TV = 10.14(44 lines)  AV=2.97  SV=5.00  BV=8.10
    {952,1136,1088, 0, 0, 0},  //TV = 10.04(48 lines)  AV=2.97  SV=5.00  BV=8.00
    {1016,1136,1088, 0, 0, 0},  //TV = 9.94(51 lines)  AV=2.97  SV=5.00  BV=7.91
    {1090,1136,1088, 0, 0, 0},  //TV = 9.84(55 lines)  AV=2.97  SV=5.00  BV=7.81
    {1174,1136,1088, 0, 0, 0},  //TV = 9.73(59 lines)  AV=2.97  SV=5.00  BV=7.70
    {1259,1136,1088, 0, 0, 0},  //TV = 9.63(63 lines)  AV=2.97  SV=5.00  BV=7.60
    {1344,1136,1088, 0, 0, 0},  //TV = 9.54(67 lines)  AV=2.97  SV=5.00  BV=7.51
    {1439,1136,1088, 0, 0, 0},  //TV = 9.44(72 lines)  AV=2.97  SV=5.00  BV=7.41
    {1545,1136,1088, 0, 0, 0},  //TV = 9.34(78 lines)  AV=2.97  SV=5.00  BV=7.31
    {1651,1136,1088, 0, 0, 0},  //TV = 9.24(83 lines)  AV=2.97  SV=5.00  BV=7.21
    {1778,1136,1088, 0, 0, 0},  //TV = 9.14(89 lines)  AV=2.97  SV=5.00  BV=7.10
    {1915,1136,1088, 0, 0, 0},  //TV = 9.03(96 lines)  AV=2.97  SV=5.00  BV=7.00
    {2032,1136,1088, 0, 0, 0},  //TV = 8.94(102 lines)  AV=2.97  SV=5.00  BV=6.91
    {2190,1136,1088, 0, 0, 0},  //TV = 8.83(110 lines)  AV=2.97  SV=5.00  BV=6.80
    {2360,1136,1080, 0, 0, 0},  //TV = 8.73(119 lines)  AV=2.97  SV=4.99  BV=6.71
    {2529,1136,1080, 0, 0, 0},  //TV = 8.63(127 lines)  AV=2.97  SV=4.99  BV=6.61
    {2698,1136,1088, 0, 0, 0},  //TV = 8.53(136 lines)  AV=2.97  SV=5.00  BV=6.50
    {2910,1136,1080, 0, 0, 0},  //TV = 8.42(147 lines)  AV=2.97  SV=4.99  BV=6.40
    {3111,1136,1080, 0, 0, 0},  //TV = 8.33(157 lines)  AV=2.97  SV=4.99  BV=6.31
    {3333,1136,1080, 0, 0, 0},  //TV = 8.23(168 lines)  AV=2.97  SV=4.99  BV=6.21
    {3566,1136,1080, 0, 0, 0},  //TV = 8.13(180 lines)  AV=2.97  SV=4.99  BV=6.11
    {3820,1136,1080, 0, 0, 0},  //TV = 8.03(193 lines)  AV=2.97  SV=4.99  BV=6.01
    {4117,1136,1080, 0, 0, 0},  //TV = 7.92(208 lines)  AV=2.97  SV=4.99  BV=5.90
    {4413,1136,1080, 0, 0, 0},  //TV = 7.82(223 lines)  AV=2.97  SV=4.99  BV=5.80
    {4720,1136,1080, 0, 0, 0},  //TV = 7.73(238 lines)  AV=2.97  SV=4.99  BV=5.71
    {5059,1136,1080, 0, 0, 0},  //TV = 7.63(255 lines)  AV=2.97  SV=4.99  BV=5.61
    {5408,1136,1080, 0, 0, 0},  //TV = 7.53(273 lines)  AV=2.97  SV=4.99  BV=5.51
    {5800,1136,1080, 0, 0, 0},  //TV = 7.43(293 lines)  AV=2.97  SV=4.99  BV=5.41
    {6202,1136,1080, 0, 0, 0},  //TV = 7.33(313 lines)  AV=2.97  SV=4.99  BV=5.31
    {6646,1136,1080, 0, 0, 0},  //TV = 7.23(336 lines)  AV=2.97  SV=4.99  BV=5.21
    {7123,1136,1080, 0, 0, 0},  //TV = 7.13(360 lines)  AV=2.97  SV=4.99  BV=5.11
    {7673,1136,1080, 0, 0, 0},  //TV = 7.03(388 lines)  AV=2.97  SV=4.99  BV=5.00
    {8223,1136,1080, 0, 0, 0},  //TV = 6.93(415 lines)  AV=2.97  SV=4.99  BV=4.90
    {8329,1216,1064, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.97  SV=5.07  BV=4.81
    {8329,1328,1048, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.97  SV=5.17  BV=4.70
    {8329,1424,1040, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.97  SV=5.26  BV=4.61
    {8329,1536,1040, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.97  SV=5.37  BV=4.51
    {8329,1632,1048, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.97  SV=5.47  BV=4.41
    {8329,1728,1056, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.97  SV=5.56  BV=4.31
    {8329,1840,1064, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.97  SV=5.67  BV=4.21
    {8329,2048,1024, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.97  SV=5.77  BV=4.11
    {8329,2144,1048, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.97  SV=5.87  BV=4.01
    {8329,2352,1024, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.97  SV=5.97  BV=3.91
    {16670,1216,1064, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=5.07  BV=3.81
    {16670,1328,1048, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=5.17  BV=3.70
    {16670,1424,1040, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=5.26  BV=3.61
    {16670,1536,1040, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=5.37  BV=3.50
    {16670,1632,1048, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=5.47  BV=3.41
    {16670,1728,1064, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=5.58  BV=3.30
    {16670,1840,1064, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=5.67  BV=3.21
    {16670,2048,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=5.77  BV=3.11
    {16670,2144,1048, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=5.87  BV=3.01
    {16670,2352,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=5.97  BV=2.91
    {16670,2448,1056, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=6.07  BV=2.81
    {16670,2656,1048, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=6.17  BV=2.70
    {16670,2864,1040, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=6.27  BV=2.61
    {16670,3072,1032, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=6.36  BV=2.52
    {16670,3328,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=6.47  BV=2.41
    {16670,3456,1056, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=6.56  BV=2.31
    {16670,3712,1056, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=6.67  BV=2.21
    {16670,4096,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=6.77  BV=2.11
    {16670,4352,1032, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.97  SV=6.86  BV=2.01
    {24988,3072,1048, 0, 0, 0},  //TV = 5.32(1263 lines)  AV=2.97  SV=6.38  BV=1.91
    {24988,3328,1040, 0, 0, 0},  //TV = 5.32(1263 lines)  AV=2.97  SV=6.49  BV=1.81
    {24988,3584,1032, 0, 0, 0},  //TV = 5.32(1263 lines)  AV=2.97  SV=6.58  BV=1.71
    {24988,3840,1032, 0, 0, 0},  //TV = 5.32(1263 lines)  AV=2.97  SV=6.68  BV=1.61
    {33298,3072,1040, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=6.37  BV=1.51
    {33298,3328,1024, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=6.47  BV=1.41
    {33298,3584,1024, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=6.57  BV=1.31
    {33298,3840,1024, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=6.67  BV=1.21
    {33298,4096,1024, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=6.77  BV=1.11
    {33298,4352,1032, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=6.86  BV=1.02
    {33298,4608,1048, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=6.97  BV=0.91
    {33298,4992,1032, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=7.06  BV=0.82
    {33298,5376,1032, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=7.17  BV=0.71
    {33298,5760,1032, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=7.27  BV=0.61
    {33298,6240,1024, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=7.37  BV=0.51
    {33298,6544,1040, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=7.46  BV=0.42
    {33298,7072,1032, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=7.56  BV=0.31
    {33298,7472,1048, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=7.67  BV=0.21
    {33298,8192,1024, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=7.77  BV=0.11
    {33298,8192,1104, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=7.87  BV=0.01
    {33298,8192,1192, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=7.98  BV=-0.11
    {33298,8192,1280, 0, 0, 0},  //TV = 4.91(1684 lines)  AV=2.97  SV=8.09  BV=-0.21
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used   
},
};

static strEvPline sCustom5PLineTable_50Hz =
{
{
    {95,1216,1064, 0, 0, 0},  //TV = 13.36(4 lines)  AV=2.97  SV=5.07  BV=11.26
    {105,1136,1088, 0, 0, 0},  //TV = 13.22(5 lines)  AV=2.97  SV=5.00  BV=11.19
    {105,1216,1072, 0, 0, 0},  //TV = 13.22(5 lines)  AV=2.97  SV=5.08  BV=11.11
    {116,1216,1064, 0, 0, 0},  //TV = 13.07(5 lines)  AV=2.97  SV=5.07  BV=10.98
    {127,1216,1040, 0, 0, 0},  //TV = 12.94(6 lines)  AV=2.97  SV=5.04  BV=10.88
    {137,1136,1096, 0, 0, 0},  //TV = 12.83(6 lines)  AV=2.97  SV=5.01  BV=10.79
    {137,1216,1088, 0, 0, 0},  //TV = 12.83(6 lines)  AV=2.97  SV=5.10  BV=10.70
    {158,1136,1096, 0, 0, 0},  //TV = 12.63(7 lines)  AV=2.97  SV=5.01  BV=10.59
    {169,1216,1024, 0, 0, 0},  //TV = 12.53(8 lines)  AV=2.97  SV=5.01  BV=10.49
    {179,1216,1048, 0, 0, 0},  //TV = 12.45(9 lines)  AV=2.97  SV=5.05  BV=10.37
    {190,1216,1064, 0, 0, 0},  //TV = 12.36(9 lines)  AV=2.97  SV=5.07  BV=10.26
    {201,1216,1040, 0, 0, 0},  //TV = 12.28(10 lines)  AV=2.97  SV=5.04  BV=10.22
    {222,1136,1088, 0, 0, 0},  //TV = 12.14(11 lines)  AV=2.97  SV=5.00  BV=10.11
    {232,1216,1040, 0, 0, 0},  //TV = 12.07(11 lines)  AV=2.97  SV=5.04  BV=10.01
    {254,1136,1088, 0, 0, 0},  //TV = 11.94(12 lines)  AV=2.97  SV=5.00  BV=9.91
    {264,1216,1048, 0, 0, 0},  //TV = 11.89(13 lines)  AV=2.97  SV=5.05  BV=9.81
    {285,1216,1040, 0, 0, 0},  //TV = 11.78(14 lines)  AV=2.97  SV=5.04  BV=9.71
    {306,1216,1040, 0, 0, 0},  //TV = 11.67(15 lines)  AV=2.97  SV=5.04  BV=9.61
    {328,1216,1040, 0, 0, 0},  //TV = 11.57(16 lines)  AV=2.97  SV=5.04  BV=9.51
    {359,1136,1096, 0, 0, 0},  //TV = 11.44(18 lines)  AV=2.97  SV=5.01  BV=9.40
    {381,1216,1024, 0, 0, 0},  //TV = 11.36(19 lines)  AV=2.97  SV=5.01  BV=9.32
    {412,1136,1096, 0, 0, 0},  //TV = 11.25(20 lines)  AV=2.97  SV=5.01  BV=9.20
    {444,1136,1088, 0, 0, 0},  //TV = 11.14(22 lines)  AV=2.97  SV=5.00  BV=9.11
    {476,1136,1088, 0, 0, 0},  //TV = 11.04(24 lines)  AV=2.97  SV=5.00  BV=9.00
    {508,1136,1088, 0, 0, 0},  //TV = 10.94(25 lines)  AV=2.97  SV=5.00  BV=8.91
    {539,1216,1024, 0, 0, 0},  //TV = 10.86(27 lines)  AV=2.97  SV=5.01  BV=8.81
    {582,1136,1096, 0, 0, 0},  //TV = 10.75(29 lines)  AV=2.97  SV=5.01  BV=8.70
    {624,1136,1096, 0, 0, 0},  //TV = 10.65(31 lines)  AV=2.97  SV=5.01  BV=8.60
    {666,1136,1096, 0, 0, 0},  //TV = 10.55(33 lines)  AV=2.97  SV=5.01  BV=8.51
    {719,1136,1088, 0, 0, 0},  //TV = 10.44(36 lines)  AV=2.97  SV=5.00  BV=8.41
    {772,1136,1088, 0, 0, 0},  //TV = 10.34(39 lines)  AV=2.97  SV=5.00  BV=8.31
    {825,1136,1096, 0, 0, 0},  //TV = 10.24(41 lines)  AV=2.97  SV=5.01  BV=8.20
    {889,1136,1088, 0, 0, 0},  //TV = 10.14(44 lines)  AV=2.97  SV=5.00  BV=8.10
    {952,1136,1088, 0, 0, 0},  //TV = 10.04(48 lines)  AV=2.97  SV=5.00  BV=8.00
    {1016,1136,1088, 0, 0, 0},  //TV = 9.94(51 lines)  AV=2.97  SV=5.00  BV=7.91
    {1090,1136,1088, 0, 0, 0},  //TV = 9.84(55 lines)  AV=2.97  SV=5.00  BV=7.81
    {1174,1136,1088, 0, 0, 0},  //TV = 9.73(59 lines)  AV=2.97  SV=5.00  BV=7.70
    {1259,1136,1088, 0, 0, 0},  //TV = 9.63(63 lines)  AV=2.97  SV=5.00  BV=7.60
    {1344,1136,1088, 0, 0, 0},  //TV = 9.54(67 lines)  AV=2.97  SV=5.00  BV=7.51
    {1439,1136,1088, 0, 0, 0},  //TV = 9.44(72 lines)  AV=2.97  SV=5.00  BV=7.41
    {1545,1136,1088, 0, 0, 0},  //TV = 9.34(78 lines)  AV=2.97  SV=5.00  BV=7.31
    {1651,1136,1088, 0, 0, 0},  //TV = 9.24(83 lines)  AV=2.97  SV=5.00  BV=7.21
    {1778,1136,1088, 0, 0, 0},  //TV = 9.14(89 lines)  AV=2.97  SV=5.00  BV=7.10
    {1915,1136,1088, 0, 0, 0},  //TV = 9.03(96 lines)  AV=2.97  SV=5.00  BV=7.00
    {2032,1136,1088, 0, 0, 0},  //TV = 8.94(102 lines)  AV=2.97  SV=5.00  BV=6.91
    {2190,1136,1088, 0, 0, 0},  //TV = 8.83(110 lines)  AV=2.97  SV=5.00  BV=6.80
    {2360,1136,1080, 0, 0, 0},  //TV = 8.73(119 lines)  AV=2.97  SV=4.99  BV=6.71
    {2529,1136,1080, 0, 0, 0},  //TV = 8.63(127 lines)  AV=2.97  SV=4.99  BV=6.61
    {2698,1136,1088, 0, 0, 0},  //TV = 8.53(136 lines)  AV=2.97  SV=5.00  BV=6.50
    {2910,1136,1080, 0, 0, 0},  //TV = 8.42(147 lines)  AV=2.97  SV=4.99  BV=6.40
    {3111,1136,1080, 0, 0, 0},  //TV = 8.33(157 lines)  AV=2.97  SV=4.99  BV=6.31
    {3333,1136,1080, 0, 0, 0},  //TV = 8.23(168 lines)  AV=2.97  SV=4.99  BV=6.21
    {3566,1136,1080, 0, 0, 0},  //TV = 8.13(180 lines)  AV=2.97  SV=4.99  BV=6.11
    {3820,1136,1080, 0, 0, 0},  //TV = 8.03(193 lines)  AV=2.97  SV=4.99  BV=6.01
    {4117,1136,1080, 0, 0, 0},  //TV = 7.92(208 lines)  AV=2.97  SV=4.99  BV=5.90
    {4413,1136,1080, 0, 0, 0},  //TV = 7.82(223 lines)  AV=2.97  SV=4.99  BV=5.80
    {4720,1136,1080, 0, 0, 0},  //TV = 7.73(238 lines)  AV=2.97  SV=4.99  BV=5.71
    {5059,1136,1080, 0, 0, 0},  //TV = 7.63(255 lines)  AV=2.97  SV=4.99  BV=5.61
    {5408,1136,1080, 0, 0, 0},  //TV = 7.53(273 lines)  AV=2.97  SV=4.99  BV=5.51
    {5800,1136,1080, 0, 0, 0},  //TV = 7.43(293 lines)  AV=2.97  SV=4.99  BV=5.41
    {6202,1136,1080, 0, 0, 0},  //TV = 7.33(313 lines)  AV=2.97  SV=4.99  BV=5.31
    {6646,1136,1080, 0, 0, 0},  //TV = 7.23(336 lines)  AV=2.97  SV=4.99  BV=5.21
    {7123,1136,1080, 0, 0, 0},  //TV = 7.13(360 lines)  AV=2.97  SV=4.99  BV=5.11
    {7673,1136,1080, 0, 0, 0},  //TV = 7.03(388 lines)  AV=2.97  SV=4.99  BV=5.00
    {8223,1136,1080, 0, 0, 0},  //TV = 6.93(415 lines)  AV=2.97  SV=4.99  BV=4.90
    {8805,1136,1080, 0, 0, 0},  //TV = 6.83(445 lines)  AV=2.97  SV=4.99  BV=4.81
    {9440,1136,1080, 0, 0, 0},  //TV = 6.73(477 lines)  AV=2.97  SV=4.99  BV=4.71
    {10002,1136,1096, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=5.01  BV=4.60
    {10002,1216,1088, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=5.10  BV=4.51
    {10002,1328,1072, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=5.21  BV=4.41
    {10002,1424,1064, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=5.30  BV=4.32
    {10002,1536,1064, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=5.41  BV=4.21
    {10002,1632,1072, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=5.50  BV=4.11
    {10002,1728,1080, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=5.60  BV=4.02
    {10002,1936,1040, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=5.71  BV=3.91
    {10002,2048,1056, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=5.81  BV=3.80
    {10002,2240,1024, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=5.89  BV=3.72
    {10002,2352,1048, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=6.00  BV=3.62
    {10002,2560,1040, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=6.11  BV=3.50
    {10002,2752,1032, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=6.20  BV=3.41
    {10002,2960,1024, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=6.30  BV=3.32
    {10002,3072,1064, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=6.41  BV=3.21
    {10002,3328,1048, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=6.50  BV=3.12
    {10002,3584,1040, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=6.60  BV=3.02
    {10002,3840,1048, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=6.71  BV=2.91
    {10002,4096,1048, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=6.80  BV=2.82
    {10002,4480,1024, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=6.89  BV=2.72
    {10002,4736,1048, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=7.01  BV=2.61
    {10002,5120,1032, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=7.10  BV=2.52
    {10002,5504,1032, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=7.20  BV=2.41
    {10002,5888,1032, 0, 0, 0},  //TV = 6.64(505 lines)  AV=2.97  SV=7.30  BV=2.31
    {20004,3072,1064, 0, 0, 0},  //TV = 5.64(1011 lines)  AV=2.97  SV=6.41  BV=2.21
    {20004,3328,1056, 0, 0, 0},  //TV = 5.64(1011 lines)  AV=2.97  SV=6.51  BV=2.10
    {20004,3584,1040, 0, 0, 0},  //TV = 5.64(1011 lines)  AV=2.97  SV=6.60  BV=2.02
    {20004,3840,1040, 0, 0, 0},  //TV = 5.64(1011 lines)  AV=2.97  SV=6.69  BV=1.92
    {20004,4096,1048, 0, 0, 0},  //TV = 5.64(1011 lines)  AV=2.97  SV=6.80  BV=1.82
    {20004,4480,1024, 0, 0, 0},  //TV = 5.64(1011 lines)  AV=2.97  SV=6.89  BV=1.72
    {29995,3200,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=6.41  BV=1.62
    {29995,3456,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=6.52  BV=1.51
    {29995,3584,1056, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=6.62  BV=1.41
    {29995,3968,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=6.72  BV=1.31
    {29995,4224,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=6.82  BV=1.21
    {29995,4480,1040, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=6.92  BV=1.11
    {29995,4864,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=7.01  BV=1.02
    {29995,5120,1048, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=7.12  BV=0.91
    {29995,5632,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=7.22  BV=0.81
    {29995,6016,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=7.32  BV=0.71
    {29995,6384,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=7.42  BV=0.61
    {29995,6896,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=7.52  BV=0.51
    {29995,7280,1040, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=7.62  BV=0.41
    {29995,7936,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=7.72  BV=0.31
    {29995,8192,1064, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=7.82  BV=0.21
    {29995,8192,1136, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=7.92  BV=0.11
    {29995,8192,1232, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=8.03  BV=-0.00
    {29995,8192,1320, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=8.13  BV=-0.10
    {29995,8192,1416, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.97  SV=8.23  BV=-0.20
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used   
},
};

static strAETable g_AE_Custom5AutoTable =
{
    AETABLE_CUSTOM5_AUTO,    //eAETableID
    116,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    113,    //i4MaxBV
    -2,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sCustom5PLineTable_60Hz,
    sCustom5PLineTable_50Hz,
    NULL,
};

static strEvPline sVideoNightPLineTable_60Hz =
{
{
    {95,1216,1064, 0, 0, 0},  //TV = 13.36(8 lines)  AV=2.97  SV=5.07  BV=11.26
    {105,1136,1088, 0, 0, 0},  //TV = 13.22(9 lines)  AV=2.97  SV=5.00  BV=11.19
    {105,1216,1072, 0, 0, 0},  //TV = 13.22(9 lines)  AV=2.97  SV=5.08  BV=11.11
    {116,1216,1064, 0, 0, 0},  //TV = 13.07(10 lines)  AV=2.97  SV=5.07  BV=10.98
    {127,1216,1040, 0, 0, 0},  //TV = 12.94(11 lines)  AV=2.97  SV=5.04  BV=10.88
    {137,1136,1096, 0, 0, 0},  //TV = 12.83(12 lines)  AV=2.97  SV=5.01  BV=10.79
    {137,1216,1088, 0, 0, 0},  //TV = 12.83(12 lines)  AV=2.97  SV=5.10  BV=10.70
    {158,1136,1096, 0, 0, 0},  //TV = 12.63(14 lines)  AV=2.97  SV=5.01  BV=10.59
    {169,1216,1024, 0, 0, 0},  //TV = 12.53(15 lines)  AV=2.97  SV=5.01  BV=10.49
    {179,1216,1048, 0, 0, 0},  //TV = 12.45(16 lines)  AV=2.97  SV=5.05  BV=10.37
    {190,1216,1064, 0, 0, 0},  //TV = 12.36(17 lines)  AV=2.97  SV=5.07  BV=10.26
    {201,1216,1040, 0, 0, 0},  //TV = 12.28(18 lines)  AV=2.97  SV=5.04  BV=10.22
    {222,1136,1088, 0, 0, 0},  //TV = 12.14(20 lines)  AV=2.97  SV=5.00  BV=10.11
    {232,1216,1040, 0, 0, 0},  //TV = 12.07(21 lines)  AV=2.97  SV=5.04  BV=10.01
    {254,1136,1088, 0, 0, 0},  //TV = 11.94(23 lines)  AV=2.97  SV=5.00  BV=9.91
    {264,1216,1048, 0, 0, 0},  //TV = 11.89(24 lines)  AV=2.97  SV=5.05  BV=9.81
    {285,1216,1040, 0, 0, 0},  //TV = 11.78(26 lines)  AV=2.97  SV=5.04  BV=9.71
    {306,1216,1040, 0, 0, 0},  //TV = 11.67(28 lines)  AV=2.97  SV=5.04  BV=9.61
    {328,1216,1040, 0, 0, 0},  //TV = 11.57(30 lines)  AV=2.97  SV=5.04  BV=9.51
    {359,1136,1096, 0, 0, 0},  //TV = 11.44(33 lines)  AV=2.97  SV=5.01  BV=9.40
    {381,1216,1024, 0, 0, 0},  //TV = 11.36(35 lines)  AV=2.97  SV=5.01  BV=9.32
    {412,1136,1096, 0, 0, 0},  //TV = 11.25(38 lines)  AV=2.97  SV=5.01  BV=9.20
    {444,1136,1088, 0, 0, 0},  //TV = 11.14(41 lines)  AV=2.97  SV=5.00  BV=9.11
    {476,1136,1088, 0, 0, 0},  //TV = 11.04(44 lines)  AV=2.97  SV=5.00  BV=9.00
    {508,1136,1088, 0, 0, 0},  //TV = 10.94(47 lines)  AV=2.97  SV=5.00  BV=8.91
    {539,1216,1024, 0, 0, 0},  //TV = 10.86(50 lines)  AV=2.97  SV=5.01  BV=8.81
    {582,1136,1096, 0, 0, 0},  //TV = 10.75(54 lines)  AV=2.97  SV=5.01  BV=8.70
    {624,1136,1096, 0, 0, 0},  //TV = 10.65(58 lines)  AV=2.97  SV=5.01  BV=8.60
    {666,1136,1096, 0, 0, 0},  //TV = 10.55(62 lines)  AV=2.97  SV=5.01  BV=8.51
    {719,1136,1088, 0, 0, 0},  //TV = 10.44(67 lines)  AV=2.97  SV=5.00  BV=8.41
    {772,1136,1088, 0, 0, 0},  //TV = 10.34(72 lines)  AV=2.97  SV=5.00  BV=8.31
    {825,1136,1096, 0, 0, 0},  //TV = 10.24(77 lines)  AV=2.97  SV=5.01  BV=8.20
    {889,1136,1088, 0, 0, 0},  //TV = 10.14(83 lines)  AV=2.97  SV=5.00  BV=8.10
    {952,1136,1088, 0, 0, 0},  //TV = 10.04(89 lines)  AV=2.97  SV=5.00  BV=8.00
    {1016,1136,1088, 0, 0, 0},  //TV = 9.94(95 lines)  AV=2.97  SV=5.00  BV=7.91
    {1090,1136,1088, 0, 0, 0},  //TV = 9.84(102 lines)  AV=2.97  SV=5.00  BV=7.81
    {1174,1136,1088, 0, 0, 0},  //TV = 9.73(110 lines)  AV=2.97  SV=5.00  BV=7.70
    {1259,1136,1088, 0, 0, 0},  //TV = 9.63(118 lines)  AV=2.97  SV=5.00  BV=7.60
    {1344,1136,1088, 0, 0, 0},  //TV = 9.54(126 lines)  AV=2.97  SV=5.00  BV=7.51
    {1439,1136,1088, 0, 0, 0},  //TV = 9.44(135 lines)  AV=2.97  SV=5.00  BV=7.41
    {1545,1136,1088, 0, 0, 0},  //TV = 9.34(145 lines)  AV=2.97  SV=5.00  BV=7.31
    {1651,1136,1088, 0, 0, 0},  //TV = 9.24(155 lines)  AV=2.97  SV=5.00  BV=7.21
    {1778,1136,1088, 0, 0, 0},  //TV = 9.14(167 lines)  AV=2.97  SV=5.00  BV=7.10
    {1915,1136,1088, 0, 0, 0},  //TV = 9.03(180 lines)  AV=2.97  SV=5.00  BV=7.00
    {2032,1136,1088, 0, 0, 0},  //TV = 8.94(191 lines)  AV=2.97  SV=5.00  BV=6.91
    {2190,1136,1088, 0, 0, 0},  //TV = 8.83(206 lines)  AV=2.97  SV=5.00  BV=6.80
    {2360,1136,1080, 0, 0, 0},  //TV = 8.73(222 lines)  AV=2.97  SV=4.99  BV=6.71
    {2529,1136,1080, 0, 0, 0},  //TV = 8.63(238 lines)  AV=2.97  SV=4.99  BV=6.61
    {2698,1136,1088, 0, 0, 0},  //TV = 8.53(254 lines)  AV=2.97  SV=5.00  BV=6.50
    {2910,1136,1080, 0, 0, 0},  //TV = 8.42(274 lines)  AV=2.97  SV=4.99  BV=6.40
    {3111,1136,1080, 0, 0, 0},  //TV = 8.33(293 lines)  AV=2.97  SV=4.99  BV=6.31
    {3333,1136,1080, 0, 0, 0},  //TV = 8.23(314 lines)  AV=2.97  SV=4.99  BV=6.21
    {3566,1136,1080, 0, 0, 0},  //TV = 8.13(336 lines)  AV=2.97  SV=4.99  BV=6.11
    {3820,1136,1080, 0, 0, 0},  //TV = 8.03(360 lines)  AV=2.97  SV=4.99  BV=6.01
    {4117,1136,1080, 0, 0, 0},  //TV = 7.92(388 lines)  AV=2.97  SV=4.99  BV=5.90
    {4413,1136,1080, 0, 0, 0},  //TV = 7.82(416 lines)  AV=2.97  SV=4.99  BV=5.80
    {4720,1136,1080, 0, 0, 0},  //TV = 7.73(445 lines)  AV=2.97  SV=4.99  BV=5.71
    {5059,1136,1080, 0, 0, 0},  //TV = 7.63(477 lines)  AV=2.97  SV=4.99  BV=5.61
    {5408,1136,1080, 0, 0, 0},  //TV = 7.53(510 lines)  AV=2.97  SV=4.99  BV=5.51
    {5800,1136,1080, 0, 0, 0},  //TV = 7.43(547 lines)  AV=2.97  SV=4.99  BV=5.41
    {6202,1136,1080, 0, 0, 0},  //TV = 7.33(585 lines)  AV=2.97  SV=4.99  BV=5.31
    {6646,1136,1080, 0, 0, 0},  //TV = 7.23(627 lines)  AV=2.97  SV=4.99  BV=5.21
    {7123,1136,1080, 0, 0, 0},  //TV = 7.13(672 lines)  AV=2.97  SV=4.99  BV=5.11
    {7673,1136,1080, 0, 0, 0},  //TV = 7.03(724 lines)  AV=2.97  SV=4.99  BV=5.00
    {8223,1136,1080, 0, 0, 0},  //TV = 6.93(776 lines)  AV=2.97  SV=4.99  BV=4.90
    {8329,1216,1064, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.07  BV=4.81
    {8329,1328,1048, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.17  BV=4.70
    {8329,1424,1040, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.26  BV=4.61
    {8329,1536,1040, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.37  BV=4.51
    {8329,1632,1048, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.47  BV=4.41
    {8329,1728,1056, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.56  BV=4.31
    {8329,1840,1064, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.67  BV=4.21
    {8329,2048,1024, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.77  BV=4.11
    {8329,2144,1048, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.87  BV=4.01
    {8329,2352,1024, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.97  BV=3.91
    {16670,1216,1064, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=5.07  BV=3.81
    {16670,1328,1048, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=5.17  BV=3.70
    {16670,1424,1048, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=5.27  BV=3.60
    {16670,1536,1040, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=5.37  BV=3.50
    {16670,1632,1048, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=5.47  BV=3.41
    {16670,1728,1064, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=5.58  BV=3.30
    {24988,1216,1072, 0, 0, 0},  //TV = 5.32(2360 lines)  AV=2.97  SV=5.08  BV=3.21
    {24988,1328,1056, 0, 0, 0},  //TV = 5.32(2360 lines)  AV=2.97  SV=5.18  BV=3.11
    {24988,1424,1056, 0, 0, 0},  //TV = 5.32(2360 lines)  AV=2.97  SV=5.29  BV=3.01
    {24988,1536,1056, 0, 0, 0},  //TV = 5.32(2360 lines)  AV=2.97  SV=5.39  BV=2.90
    {33329,1216,1064, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=5.07  BV=2.81
    {33329,1328,1048, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=5.17  BV=2.70
    {33329,1424,1040, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=5.26  BV=2.61
    {33329,1536,1040, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=5.37  BV=2.51
    {33329,1632,1048, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=5.47  BV=2.41
    {33329,1728,1064, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=5.58  BV=2.30
    {33329,1840,1064, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=5.67  BV=2.21
    {33329,2048,1024, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=5.77  BV=2.11
    {33329,2144,1048, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=5.87  BV=2.01
    {33329,2352,1024, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=5.97  BV=1.91
    {33329,2448,1056, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=6.07  BV=1.81
    {33329,2656,1048, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=6.17  BV=1.70
    {33329,2864,1040, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=6.27  BV=1.61
    {33329,3072,1040, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=6.37  BV=1.51
    {33329,3328,1024, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=6.47  BV=1.41
    {33329,3456,1056, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=6.56  BV=1.31
    {33329,3840,1024, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=6.67  BV=1.21
    {33329,4096,1024, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=6.77  BV=1.11
    {33329,4352,1032, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=6.86  BV=1.01
    {33329,4608,1048, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=6.97  BV=0.91
    {33329,4992,1032, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=7.06  BV=0.82
    {33329,5376,1024, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=7.16  BV=0.72
    {33329,5760,1032, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=7.27  BV=0.61
    {33329,6240,1024, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=7.37  BV=0.51
    {33329,6544,1040, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=7.46  BV=0.41
    {33329,7072,1032, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=7.56  BV=0.31
    {33329,7472,1048, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=7.67  BV=0.21
    {33329,8192,1024, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=7.77  BV=0.11
    {33329,8192,1104, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=7.87  BV=0.00
    {33329,8192,1184, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=7.97  BV=-0.10
    {33329,8192,1272, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=8.08  BV=-0.20
    {33329,8192,1368, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=8.18  BV=-0.31
    {33329,8192,1464, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=8.28  BV=-0.40
    {33329,8192,1568, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=8.38  BV=-0.50
    {41669,8192,1344, 0, 0, 0},  //TV = 4.58(3936 lines)  AV=2.97  SV=8.16  BV=-0.60
    {41669,8192,1440, 0, 0, 0},  //TV = 4.58(3936 lines)  AV=2.97  SV=8.26  BV=-0.70
    {49999,8192,1288, 0, 0, 0},  //TV = 4.32(4724 lines)  AV=2.97  SV=8.10  BV=-0.80
    {49999,8192,1384, 0, 0, 0},  //TV = 4.32(4724 lines)  AV=2.97  SV=8.20  BV=-0.91
    {49999,8192,1480, 0, 0, 0},  //TV = 4.32(4724 lines)  AV=2.97  SV=8.30  BV=-1.00
    {58328,8192,1360, 0, 0, 0},  //TV = 4.10(5510 lines)  AV=2.97  SV=8.17  BV=-1.10
    {58328,8192,1456, 0, 0, 0},  //TV = 4.10(5510 lines)  AV=2.97  SV=8.27  BV=-1.20
    {66669,8192,1368, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=8.18  BV=-1.31
    {74998,8192,1304, 0, 0, 0},  //TV = 3.74(7085 lines)  AV=2.97  SV=8.11  BV=-1.41
    {74998,8192,1392, 0, 0, 0},  //TV = 3.74(7085 lines)  AV=2.97  SV=8.21  BV=-1.50
    {83327,8192,1344, 0, 0, 0},  //TV = 3.59(7872 lines)  AV=2.97  SV=8.16  BV=-1.60
    {91668,8192,1312, 0, 0, 0},  //TV = 3.45(8660 lines)  AV=2.97  SV=8.12  BV=-1.70
    {99998,8192,1288, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=8.10  BV=-1.80
    {99998,8192,1376, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=8.19  BV=-1.90
    {99998,8192,1472, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=8.29  BV=-2.00
    {99998,8192,1584, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=8.39  BV=-2.10
    {99998,8192,1696, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=8.49  BV=-2.20
    {99998,8192,1816, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=8.59  BV=-2.30
    {99998,8192,1944, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=8.69  BV=-2.40
    {99998,8192,2088, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=8.79  BV=-2.50
    {99998,8192,2232, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=8.89  BV=-2.60
    {99998,8192,2408, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=9.00  BV=-2.71
    {99998,8192,2584, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=9.10  BV=-2.81
    {99998,8192,2768, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=9.20  BV=-2.91
    {99998,8192,2968, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=9.30  BV=-3.01
    {99998,8192,3176, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=9.40  BV=-3.11
    {99998,8192,3408, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=9.50  BV=-3.21
    {99998,8192,3648, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=9.60  BV=-3.31
    {99998,8192,3912, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=9.70  BV=-3.41
    {99998,8192,4192, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=9.80  BV=-3.51
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sVideoNightPLineTable_50Hz =
{
{
    {95,1216,1064, 0, 0, 0},  //TV = 13.36(8 lines)  AV=2.97  SV=5.07  BV=11.26
    {105,1136,1088, 0, 0, 0},  //TV = 13.22(9 lines)  AV=2.97  SV=5.00  BV=11.19
    {105,1216,1072, 0, 0, 0},  //TV = 13.22(9 lines)  AV=2.97  SV=5.08  BV=11.11
    {116,1216,1064, 0, 0, 0},  //TV = 13.07(10 lines)  AV=2.97  SV=5.07  BV=10.98
    {127,1216,1040, 0, 0, 0},  //TV = 12.94(11 lines)  AV=2.97  SV=5.04  BV=10.88
    {137,1136,1096, 0, 0, 0},  //TV = 12.83(12 lines)  AV=2.97  SV=5.01  BV=10.79
    {137,1216,1088, 0, 0, 0},  //TV = 12.83(12 lines)  AV=2.97  SV=5.10  BV=10.70
    {158,1136,1096, 0, 0, 0},  //TV = 12.63(14 lines)  AV=2.97  SV=5.01  BV=10.59
    {169,1216,1024, 0, 0, 0},  //TV = 12.53(15 lines)  AV=2.97  SV=5.01  BV=10.49
    {179,1216,1048, 0, 0, 0},  //TV = 12.45(16 lines)  AV=2.97  SV=5.05  BV=10.37
    {190,1216,1064, 0, 0, 0},  //TV = 12.36(17 lines)  AV=2.97  SV=5.07  BV=10.26
    {201,1216,1040, 0, 0, 0},  //TV = 12.28(18 lines)  AV=2.97  SV=5.04  BV=10.22
    {222,1136,1088, 0, 0, 0},  //TV = 12.14(20 lines)  AV=2.97  SV=5.00  BV=10.11
    {232,1216,1040, 0, 0, 0},  //TV = 12.07(21 lines)  AV=2.97  SV=5.04  BV=10.01
    {254,1136,1088, 0, 0, 0},  //TV = 11.94(23 lines)  AV=2.97  SV=5.00  BV=9.91
    {264,1216,1048, 0, 0, 0},  //TV = 11.89(24 lines)  AV=2.97  SV=5.05  BV=9.81
    {285,1216,1040, 0, 0, 0},  //TV = 11.78(26 lines)  AV=2.97  SV=5.04  BV=9.71
    {306,1216,1040, 0, 0, 0},  //TV = 11.67(28 lines)  AV=2.97  SV=5.04  BV=9.61
    {328,1216,1040, 0, 0, 0},  //TV = 11.57(30 lines)  AV=2.97  SV=5.04  BV=9.51
    {359,1136,1096, 0, 0, 0},  //TV = 11.44(33 lines)  AV=2.97  SV=5.01  BV=9.40
    {381,1216,1024, 0, 0, 0},  //TV = 11.36(35 lines)  AV=2.97  SV=5.01  BV=9.32
    {412,1136,1096, 0, 0, 0},  //TV = 11.25(38 lines)  AV=2.97  SV=5.01  BV=9.20
    {444,1136,1088, 0, 0, 0},  //TV = 11.14(41 lines)  AV=2.97  SV=5.00  BV=9.11
    {476,1136,1088, 0, 0, 0},  //TV = 11.04(44 lines)  AV=2.97  SV=5.00  BV=9.00
    {508,1136,1088, 0, 0, 0},  //TV = 10.94(47 lines)  AV=2.97  SV=5.00  BV=8.91
    {539,1216,1024, 0, 0, 0},  //TV = 10.86(50 lines)  AV=2.97  SV=5.01  BV=8.81
    {582,1136,1096, 0, 0, 0},  //TV = 10.75(54 lines)  AV=2.97  SV=5.01  BV=8.70
    {624,1136,1096, 0, 0, 0},  //TV = 10.65(58 lines)  AV=2.97  SV=5.01  BV=8.60
    {666,1136,1096, 0, 0, 0},  //TV = 10.55(62 lines)  AV=2.97  SV=5.01  BV=8.51
    {719,1136,1088, 0, 0, 0},  //TV = 10.44(67 lines)  AV=2.97  SV=5.00  BV=8.41
    {772,1136,1088, 0, 0, 0},  //TV = 10.34(72 lines)  AV=2.97  SV=5.00  BV=8.31
    {825,1136,1096, 0, 0, 0},  //TV = 10.24(77 lines)  AV=2.97  SV=5.01  BV=8.20
    {889,1136,1088, 0, 0, 0},  //TV = 10.14(83 lines)  AV=2.97  SV=5.00  BV=8.10
    {952,1136,1088, 0, 0, 0},  //TV = 10.04(89 lines)  AV=2.97  SV=5.00  BV=8.00
    {1016,1136,1088, 0, 0, 0},  //TV = 9.94(95 lines)  AV=2.97  SV=5.00  BV=7.91
    {1090,1136,1088, 0, 0, 0},  //TV = 9.84(102 lines)  AV=2.97  SV=5.00  BV=7.81
    {1174,1136,1088, 0, 0, 0},  //TV = 9.73(110 lines)  AV=2.97  SV=5.00  BV=7.70
    {1259,1136,1088, 0, 0, 0},  //TV = 9.63(118 lines)  AV=2.97  SV=5.00  BV=7.60
    {1344,1136,1088, 0, 0, 0},  //TV = 9.54(126 lines)  AV=2.97  SV=5.00  BV=7.51
    {1439,1136,1088, 0, 0, 0},  //TV = 9.44(135 lines)  AV=2.97  SV=5.00  BV=7.41
    {1545,1136,1088, 0, 0, 0},  //TV = 9.34(145 lines)  AV=2.97  SV=5.00  BV=7.31
    {1651,1136,1088, 0, 0, 0},  //TV = 9.24(155 lines)  AV=2.97  SV=5.00  BV=7.21
    {1778,1136,1088, 0, 0, 0},  //TV = 9.14(167 lines)  AV=2.97  SV=5.00  BV=7.10
    {1915,1136,1088, 0, 0, 0},  //TV = 9.03(180 lines)  AV=2.97  SV=5.00  BV=7.00
    {2032,1136,1088, 0, 0, 0},  //TV = 8.94(191 lines)  AV=2.97  SV=5.00  BV=6.91
    {2190,1136,1088, 0, 0, 0},  //TV = 8.83(206 lines)  AV=2.97  SV=5.00  BV=6.80
    {2360,1136,1080, 0, 0, 0},  //TV = 8.73(222 lines)  AV=2.97  SV=4.99  BV=6.71
    {2529,1136,1080, 0, 0, 0},  //TV = 8.63(238 lines)  AV=2.97  SV=4.99  BV=6.61
    {2698,1136,1088, 0, 0, 0},  //TV = 8.53(254 lines)  AV=2.97  SV=5.00  BV=6.50
    {2910,1136,1080, 0, 0, 0},  //TV = 8.42(274 lines)  AV=2.97  SV=4.99  BV=6.40
    {3111,1136,1080, 0, 0, 0},  //TV = 8.33(293 lines)  AV=2.97  SV=4.99  BV=6.31
    {3333,1136,1080, 0, 0, 0},  //TV = 8.23(314 lines)  AV=2.97  SV=4.99  BV=6.21
    {3566,1136,1080, 0, 0, 0},  //TV = 8.13(336 lines)  AV=2.97  SV=4.99  BV=6.11
    {3820,1136,1080, 0, 0, 0},  //TV = 8.03(360 lines)  AV=2.97  SV=4.99  BV=6.01
    {4117,1136,1080, 0, 0, 0},  //TV = 7.92(388 lines)  AV=2.97  SV=4.99  BV=5.90
    {4413,1136,1080, 0, 0, 0},  //TV = 7.82(416 lines)  AV=2.97  SV=4.99  BV=5.80
    {4720,1136,1080, 0, 0, 0},  //TV = 7.73(445 lines)  AV=2.97  SV=4.99  BV=5.71
    {5059,1136,1080, 0, 0, 0},  //TV = 7.63(477 lines)  AV=2.97  SV=4.99  BV=5.61
    {5408,1136,1080, 0, 0, 0},  //TV = 7.53(510 lines)  AV=2.97  SV=4.99  BV=5.51
    {5800,1136,1080, 0, 0, 0},  //TV = 7.43(547 lines)  AV=2.97  SV=4.99  BV=5.41
    {6202,1136,1080, 0, 0, 0},  //TV = 7.33(585 lines)  AV=2.97  SV=4.99  BV=5.31
    {6646,1136,1080, 0, 0, 0},  //TV = 7.23(627 lines)  AV=2.97  SV=4.99  BV=5.21
    {7123,1136,1080, 0, 0, 0},  //TV = 7.13(672 lines)  AV=2.97  SV=4.99  BV=5.11
    {7673,1136,1080, 0, 0, 0},  //TV = 7.03(724 lines)  AV=2.97  SV=4.99  BV=5.00
    {8223,1136,1080, 0, 0, 0},  //TV = 6.93(776 lines)  AV=2.97  SV=4.99  BV=4.90
    {8805,1136,1080, 0, 0, 0},  //TV = 6.83(831 lines)  AV=2.97  SV=4.99  BV=4.81
    {9440,1136,1080, 0, 0, 0},  //TV = 6.73(891 lines)  AV=2.97  SV=4.99  BV=4.71
    {10002,1136,1096, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.01  BV=4.60
    {10002,1216,1088, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.10  BV=4.51
    {10002,1328,1072, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.21  BV=4.41
    {10002,1424,1064, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.30  BV=4.32
    {10002,1536,1064, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.41  BV=4.21
    {10002,1632,1072, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.50  BV=4.11
    {10002,1728,1080, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.60  BV=4.02
    {10002,1936,1040, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.71  BV=3.91
    {10002,2048,1048, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.80  BV=3.82
    {10002,2240,1024, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.89  BV=3.72
    {20004,1136,1096, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=5.01  BV=3.60
    {20004,1216,1088, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=5.10  BV=3.51
    {20004,1328,1072, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=5.21  BV=3.41
    {20004,1424,1064, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=5.30  BV=3.32
    {20004,1536,1072, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=5.42  BV=3.20
    {20004,1632,1072, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=5.50  BV=3.11
    {29995,1216,1024, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=5.01  BV=3.02
    {29995,1216,1104, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=5.12  BV=2.91
    {29995,1328,1080, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=5.22  BV=2.81
    {29995,1424,1080, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=5.32  BV=2.71
    {29995,1536,1072, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=5.42  BV=2.61
    {29995,1632,1080, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=5.51  BV=2.52
    {29995,1840,1032, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=5.62  BV=2.41
    {29995,1936,1056, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=5.73  BV=2.30
    {29995,2048,1064, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=5.82  BV=2.21
    {29995,2240,1040, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=5.92  BV=2.11
    {29995,2448,1024, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=6.02  BV=2.01
    {29995,2560,1048, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=6.12  BV=1.91
    {29995,2752,1040, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=6.21  BV=1.82
    {29995,2960,1040, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=6.32  BV=1.71
    {29995,3200,1032, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=6.42  BV=1.61
    {29995,3456,1024, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=6.52  BV=1.51
    {29995,3584,1056, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=6.62  BV=1.41
    {29995,3968,1032, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=6.73  BV=1.30
    {29995,4224,1032, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=6.82  BV=1.21
    {29995,4480,1040, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=6.92  BV=1.11
    {29995,4864,1032, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=7.02  BV=1.01
    {29995,5120,1048, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=7.12  BV=0.91
    {29995,5504,1040, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=7.21  BV=0.82
    {29995,5888,1040, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=7.31  BV=0.72
    {29995,6384,1040, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=7.43  BV=0.60
    {29995,6896,1024, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=7.52  BV=0.51
    {29995,7280,1040, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=7.62  BV=0.41
    {29995,7936,1024, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=7.72  BV=0.31
    {29995,8192,1064, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=7.82  BV=0.21
    {29995,8192,1136, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=7.92  BV=0.11
    {29995,8192,1232, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=8.03  BV=-0.00
    {29995,8192,1320, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=8.13  BV=-0.10
    {29995,8192,1408, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=8.22  BV=-0.19
    {29995,8192,1520, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=8.34  BV=-0.31
    {29995,8192,1632, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=8.44  BV=-0.41
    {39996,8192,1312, 0, 0, 0},  //TV = 4.64(3778 lines)  AV=2.97  SV=8.12  BV=-0.51
    {39996,8192,1400, 0, 0, 0},  //TV = 4.64(3778 lines)  AV=2.97  SV=8.22  BV=-0.60
    {39996,8192,1504, 0, 0, 0},  //TV = 4.64(3778 lines)  AV=2.97  SV=8.32  BV=-0.71
    {49998,8192,1288, 0, 0, 0},  //TV = 4.32(4723 lines)  AV=2.97  SV=8.10  BV=-0.80
    {49998,8192,1384, 0, 0, 0},  //TV = 4.32(4723 lines)  AV=2.97  SV=8.20  BV=-0.91
    {49998,8192,1480, 0, 0, 0},  //TV = 4.32(4723 lines)  AV=2.97  SV=8.30  BV=-1.00
    {60001,8192,1320, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=8.13  BV=-1.10
    {60001,8192,1416, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=8.23  BV=-1.20
    {70002,8192,1304, 0, 0, 0},  //TV = 3.84(6613 lines)  AV=2.97  SV=8.11  BV=-1.31
    {70002,8192,1392, 0, 0, 0},  //TV = 3.84(6613 lines)  AV=2.97  SV=8.21  BV=-1.40
    {80004,8192,1312, 0, 0, 0},  //TV = 3.64(7558 lines)  AV=2.97  SV=8.12  BV=-1.51
    {80004,8192,1400, 0, 0, 0},  //TV = 3.64(7558 lines)  AV=2.97  SV=8.22  BV=-1.60
    {89995,8192,1336, 0, 0, 0},  //TV = 3.47(8502 lines)  AV=2.97  SV=8.15  BV=-1.70
    {99997,8192,1288, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=8.10  BV=-1.80
    {99997,8192,1376, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=8.19  BV=-1.90
    {99997,8192,1472, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=8.29  BV=-2.00
    {99997,8192,1584, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=8.39  BV=-2.10
    {99997,8192,1696, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=8.49  BV=-2.20
    {99997,8192,1816, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=8.59  BV=-2.30
    {99997,8192,1944, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=8.69  BV=-2.40
    {99997,8192,2088, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=8.79  BV=-2.50
    {99997,8192,2232, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=8.89  BV=-2.60
    {99997,8192,2408, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=9.00  BV=-2.71
    {99997,8192,2584, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=9.10  BV=-2.81
    {99997,8192,2768, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=9.20  BV=-2.91
    {99997,8192,2968, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=9.30  BV=-3.01
    {99997,8192,3176, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=9.40  BV=-3.11
    {99997,8192,3408, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=9.50  BV=-3.21
    {99997,8192,3648, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=9.60  BV=-3.31
    {99997,8192,3912, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=9.70  BV=-3.41
    {99997,8192,4192, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=9.80  BV=-3.51
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_VideoNightTable =
{
    AETABLE_VIDEO_NIGHT,    //eAETableID
    149,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    113,    //i4MaxBV
    -35,    //i4MinBV
    90,    //i4EffectiveMaxBV
    -10,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sVideoNightPLineTable_60Hz,
    sVideoNightPLineTable_50Hz,
    NULL,
};

static strEvPline sCaptureISO100PLineTable_60Hz =
{
{
    {95,1216,1088, 0, 0, 0},  //TV = 13.36(8 lines)  AV=2.97  SV=5.10  BV=11.23
    {95,1328,1024, 0, 0, 0},  //TV = 13.36(8 lines)  AV=2.97  SV=5.14  BV=11.19
    {105,1216,1072, 0, 0, 0},  //TV = 13.22(9 lines)  AV=2.97  SV=5.08  BV=11.11
    {116,1216,1064, 0, 0, 0},  //TV = 13.07(10 lines)  AV=2.97  SV=5.07  BV=10.98
    {116,1328,1040, 0, 0, 0},  //TV = 13.07(10 lines)  AV=2.97  SV=5.16  BV=10.88
    {127,1216,1104, 0, 0, 0},  //TV = 12.94(11 lines)  AV=2.97  SV=5.12  BV=10.79
    {137,1216,1080, 0, 0, 0},  //TV = 12.83(12 lines)  AV=2.97  SV=5.09  BV=10.71
    {148,1216,1072, 0, 0, 0},  //TV = 12.72(13 lines)  AV=2.97  SV=5.08  BV=10.61
    {158,1216,1088, 0, 0, 0},  //TV = 12.63(14 lines)  AV=2.97  SV=5.10  BV=10.50
    {169,1216,1096, 0, 0, 0},  //TV = 12.53(15 lines)  AV=2.97  SV=5.11  BV=10.39
    {190,1216,1048, 0, 0, 0},  //TV = 12.36(17 lines)  AV=2.97  SV=5.05  BV=10.29
    {201,1216,1040, 0, 0, 0},  //TV = 12.28(18 lines)  AV=2.97  SV=5.04  BV=10.22
    {211,1216,1064, 0, 0, 0},  //TV = 12.21(19 lines)  AV=2.97  SV=5.07  BV=10.11
    {232,1216,1040, 0, 0, 0},  //TV = 12.07(21 lines)  AV=2.97  SV=5.04  BV=10.01
    {243,1216,1064, 0, 0, 0},  //TV = 12.01(22 lines)  AV=2.97  SV=5.07  BV=9.91
    {264,1216,1048, 0, 0, 0},  //TV = 11.89(24 lines)  AV=2.97  SV=5.05  BV=9.81
    {285,1216,1040, 0, 0, 0},  //TV = 11.78(26 lines)  AV=2.97  SV=5.04  BV=9.71
    {306,1216,1040, 0, 0, 0},  //TV = 11.67(28 lines)  AV=2.97  SV=5.04  BV=9.61
    {328,1216,1040, 0, 0, 0},  //TV = 11.57(30 lines)  AV=2.97  SV=5.04  BV=9.51
    {349,1216,1048, 0, 0, 0},  //TV = 11.48(32 lines)  AV=2.97  SV=5.05  BV=9.41
    {370,1216,1064, 0, 0, 0},  //TV = 11.40(34 lines)  AV=2.97  SV=5.07  BV=9.30
    {402,1216,1040, 0, 0, 0},  //TV = 11.28(37 lines)  AV=2.97  SV=5.04  BV=9.22
    {433,1216,1040, 0, 0, 0},  //TV = 11.17(40 lines)  AV=2.97  SV=5.04  BV=9.11
    {465,1216,1040, 0, 0, 0},  //TV = 11.07(43 lines)  AV=2.97  SV=5.04  BV=9.01
    {497,1216,1040, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.04  BV=8.91
    {529,1216,1048, 0, 0, 0},  //TV = 10.88(49 lines)  AV=2.97  SV=5.05  BV=8.81
    {571,1216,1040, 0, 0, 0},  //TV = 10.77(53 lines)  AV=2.97  SV=5.04  BV=8.71
    {613,1216,1040, 0, 0, 0},  //TV = 10.67(57 lines)  AV=2.97  SV=5.04  BV=8.61
    {645,1216,1056, 0, 0, 0},  //TV = 10.60(60 lines)  AV=2.97  SV=5.06  BV=8.51
    {698,1216,1048, 0, 0, 0},  //TV = 10.48(65 lines)  AV=2.97  SV=5.05  BV=8.41
    {751,1216,1040, 0, 0, 0},  //TV = 10.38(70 lines)  AV=2.97  SV=5.04  BV=8.31
    {804,1216,1040, 0, 0, 0},  //TV = 10.28(75 lines)  AV=2.97  SV=5.04  BV=8.22
    {867,1216,1040, 0, 0, 0},  //TV = 10.17(81 lines)  AV=2.97  SV=5.04  BV=8.11
    {920,1216,1048, 0, 0, 0},  //TV = 10.09(86 lines)  AV=2.97  SV=5.05  BV=8.01
    {994,1216,1040, 0, 0, 0},  //TV = 9.97(93 lines)  AV=2.97  SV=5.04  BV=7.91
    {1068,1216,1040, 0, 0, 0},  //TV = 9.87(100 lines)  AV=2.97  SV=5.04  BV=7.81
    {1143,1216,1040, 0, 0, 0},  //TV = 9.77(107 lines)  AV=2.97  SV=5.04  BV=7.71
    {1227,1216,1032, 0, 0, 0},  //TV = 9.67(115 lines)  AV=2.97  SV=5.02  BV=7.62
    {1312,1216,1040, 0, 0, 0},  //TV = 9.57(123 lines)  AV=2.97  SV=5.04  BV=7.51
    {1407,1216,1040, 0, 0, 0},  //TV = 9.47(132 lines)  AV=2.97  SV=5.04  BV=7.41
    {1513,1216,1032, 0, 0, 0},  //TV = 9.37(142 lines)  AV=2.97  SV=5.02  BV=7.31
    {1608,1216,1040, 0, 0, 0},  //TV = 9.28(151 lines)  AV=2.97  SV=5.04  BV=7.22
    {1735,1216,1032, 0, 0, 0},  //TV = 9.17(163 lines)  AV=2.97  SV=5.02  BV=7.12
    {1852,1216,1040, 0, 0, 0},  //TV = 9.08(174 lines)  AV=2.97  SV=5.04  BV=7.01
    {2000,1216,1032, 0, 0, 0},  //TV = 8.97(188 lines)  AV=2.97  SV=5.02  BV=6.91
    {2137,1216,1032, 0, 0, 0},  //TV = 8.87(201 lines)  AV=2.97  SV=5.02  BV=6.82
    {2296,1216,1032, 0, 0, 0},  //TV = 8.77(216 lines)  AV=2.97  SV=5.02  BV=6.71
    {2455,1216,1040, 0, 0, 0},  //TV = 8.67(231 lines)  AV=2.97  SV=5.04  BV=6.61
    {2635,1216,1032, 0, 0, 0},  //TV = 8.57(248 lines)  AV=2.97  SV=5.02  BV=6.51
    {2836,1216,1032, 0, 0, 0},  //TV = 8.46(267 lines)  AV=2.97  SV=5.02  BV=6.41
    {3027,1216,1040, 0, 0, 0},  //TV = 8.37(285 lines)  AV=2.97  SV=5.04  BV=6.30
    {3249,1216,1032, 0, 0, 0},  //TV = 8.27(306 lines)  AV=2.97  SV=5.02  BV=6.21
    {3471,1216,1032, 0, 0, 0},  //TV = 8.17(327 lines)  AV=2.97  SV=5.02  BV=6.12
    {3746,1216,1032, 0, 0, 0},  //TV = 8.06(353 lines)  AV=2.97  SV=5.02  BV=6.01
    {4011,1216,1032, 0, 0, 0},  //TV = 7.96(378 lines)  AV=2.97  SV=5.02  BV=5.91
    {4286,1216,1032, 0, 0, 0},  //TV = 7.87(404 lines)  AV=2.97  SV=5.02  BV=5.81
    {4593,1216,1032, 0, 0, 0},  //TV = 7.77(433 lines)  AV=2.97  SV=5.02  BV=5.71
    {4921,1216,1032, 0, 0, 0},  //TV = 7.67(464 lines)  AV=2.97  SV=5.02  BV=5.61
    {5270,1216,1032, 0, 0, 0},  //TV = 7.57(497 lines)  AV=2.97  SV=5.02  BV=5.51
    {5641,1216,1032, 0, 0, 0},  //TV = 7.47(532 lines)  AV=2.97  SV=5.02  BV=5.42
    {6043,1216,1032, 0, 0, 0},  //TV = 7.37(570 lines)  AV=2.97  SV=5.02  BV=5.32
    {6509,1216,1032, 0, 0, 0},  //TV = 7.26(614 lines)  AV=2.97  SV=5.02  BV=5.21
    {6974,1216,1032, 0, 0, 0},  //TV = 7.16(658 lines)  AV=2.97  SV=5.02  BV=5.11
    {7472,1216,1032, 0, 0, 0},  //TV = 7.06(705 lines)  AV=2.97  SV=5.02  BV=5.01
    {8001,1216,1032, 0, 0, 0},  //TV = 6.97(755 lines)  AV=2.97  SV=5.02  BV=4.91
    {8329,1216,1064, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.07  BV=4.81
    {8329,1328,1048, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.17  BV=4.70
    {8329,1424,1040, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.26  BV=4.61
    {8329,1536,1040, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.37  BV=4.51
    {8329,1632,1048, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.47  BV=4.41
    {8329,1728,1056, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.56  BV=4.31
    {8329,1840,1064, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.67  BV=4.21
    {8329,2048,1024, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.77  BV=4.11
    {8329,2144,1048, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.87  BV=4.01
    {8329,2352,1024, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.97  BV=3.91
    {16670,1216,1064, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=5.07  BV=3.81
    {16670,1328,1048, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=5.17  BV=3.70
    {16670,1424,1040, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=5.26  BV=3.61
    {16670,1536,1040, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=5.37  BV=3.50
    {16670,1632,1048, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=5.47  BV=3.41
    {16670,1728,1056, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=5.56  BV=3.31
    {24988,1216,1072, 0, 0, 0},  //TV = 5.32(2360 lines)  AV=2.97  SV=5.08  BV=3.21
    {24988,1328,1056, 0, 0, 0},  //TV = 5.32(2360 lines)  AV=2.97  SV=5.18  BV=3.11
    {24988,1424,1056, 0, 0, 0},  //TV = 5.32(2360 lines)  AV=2.97  SV=5.29  BV=3.01
    {24988,1536,1048, 0, 0, 0},  //TV = 5.32(2360 lines)  AV=2.97  SV=5.38  BV=2.91
    {33329,1216,1064, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=5.07  BV=2.81
    {33329,1328,1048, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=5.17  BV=2.70
    {33329,1424,1040, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=5.26  BV=2.61
    {41669,1216,1048, 0, 0, 0},  //TV = 4.58(3936 lines)  AV=2.97  SV=5.05  BV=2.51
    {41669,1328,1024, 0, 0, 0},  //TV = 4.58(3936 lines)  AV=2.97  SV=5.14  BV=2.42
    {41669,1424,1024, 0, 0, 0},  //TV = 4.58(3936 lines)  AV=2.97  SV=5.24  BV=2.31
    {49999,1216,1072, 0, 0, 0},  //TV = 4.32(4724 lines)  AV=2.97  SV=5.08  BV=2.21
    {49999,1328,1056, 0, 0, 0},  //TV = 4.32(4724 lines)  AV=2.97  SV=5.18  BV=2.11
    {58328,1216,1064, 0, 0, 0},  //TV = 4.10(5510 lines)  AV=2.97  SV=5.07  BV=2.00
    {58328,1328,1040, 0, 0, 0},  //TV = 4.10(5510 lines)  AV=2.97  SV=5.16  BV=1.91
    {66669,1216,1064, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=5.07  BV=1.81
    {66669,1328,1048, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=5.17  BV=1.70
    {74998,1216,1088, 0, 0, 0},  //TV = 3.74(7085 lines)  AV=2.97  SV=5.10  BV=1.61
    {83327,1216,1048, 0, 0, 0},  //TV = 3.59(7872 lines)  AV=2.97  SV=5.05  BV=1.51
    {83327,1328,1024, 0, 0, 0},  //TV = 3.59(7872 lines)  AV=2.97  SV=5.14  BV=1.42
    {91668,1216,1096, 0, 0, 0},  //TV = 3.45(8660 lines)  AV=2.97  SV=5.11  BV=1.31
    {99998,1216,1072, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=5.08  BV=1.21
    {108327,1216,1064, 0, 0, 0},  //TV = 3.21(10234 lines)  AV=2.97  SV=5.07  BV=1.11
    {116667,1216,1064, 0, 0, 0},  //TV = 3.10(11022 lines)  AV=2.97  SV=5.07  BV=1.00
    {124997,1216,1064, 0, 0, 0},  //TV = 3.00(11809 lines)  AV=2.97  SV=5.07  BV=0.90
    {133326,1216,1064, 0, 0, 0},  //TV = 2.91(12596 lines)  AV=2.97  SV=5.07  BV=0.81
    {141656,1216,1072, 0, 0, 0},  //TV = 2.82(13383 lines)  AV=2.97  SV=5.08  BV=0.71
    {149996,1216,1088, 0, 0, 0},  //TV = 2.74(14171 lines)  AV=2.97  SV=5.10  BV=0.61
    {166655,1216,1048, 0, 0, 0},  //TV = 2.59(15745 lines)  AV=2.97  SV=5.05  BV=0.51
    {174996,1216,1064, 0, 0, 0},  //TV = 2.51(16534 lines)  AV=2.97  SV=5.07  BV=0.42
    {191655,1216,1048, 0, 0, 0},  //TV = 2.38(18107 lines)  AV=2.97  SV=5.05  BV=0.31
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCaptureISO100PLineTable_50Hz =
{
{
    {95,1216,1088, 0, 0, 0},  //TV = 13.36(8 lines)  AV=2.97  SV=5.10  BV=11.23
    {95,1328,1024, 0, 0, 0},  //TV = 13.36(8 lines)  AV=2.97  SV=5.14  BV=11.19
    {105,1216,1072, 0, 0, 0},  //TV = 13.22(9 lines)  AV=2.97  SV=5.08  BV=11.11
    {116,1216,1064, 0, 0, 0},  //TV = 13.07(10 lines)  AV=2.97  SV=5.07  BV=10.98
    {116,1328,1040, 0, 0, 0},  //TV = 13.07(10 lines)  AV=2.97  SV=5.16  BV=10.88
    {127,1216,1104, 0, 0, 0},  //TV = 12.94(11 lines)  AV=2.97  SV=5.12  BV=10.79
    {137,1216,1080, 0, 0, 0},  //TV = 12.83(12 lines)  AV=2.97  SV=5.09  BV=10.71
    {148,1216,1072, 0, 0, 0},  //TV = 12.72(13 lines)  AV=2.97  SV=5.08  BV=10.61
    {158,1216,1088, 0, 0, 0},  //TV = 12.63(14 lines)  AV=2.97  SV=5.10  BV=10.50
    {169,1216,1096, 0, 0, 0},  //TV = 12.53(15 lines)  AV=2.97  SV=5.11  BV=10.39
    {190,1216,1048, 0, 0, 0},  //TV = 12.36(17 lines)  AV=2.97  SV=5.05  BV=10.29
    {201,1216,1040, 0, 0, 0},  //TV = 12.28(18 lines)  AV=2.97  SV=5.04  BV=10.22
    {211,1216,1064, 0, 0, 0},  //TV = 12.21(19 lines)  AV=2.97  SV=5.07  BV=10.11
    {232,1216,1040, 0, 0, 0},  //TV = 12.07(21 lines)  AV=2.97  SV=5.04  BV=10.01
    {243,1216,1064, 0, 0, 0},  //TV = 12.01(22 lines)  AV=2.97  SV=5.07  BV=9.91
    {264,1216,1048, 0, 0, 0},  //TV = 11.89(24 lines)  AV=2.97  SV=5.05  BV=9.81
    {285,1216,1040, 0, 0, 0},  //TV = 11.78(26 lines)  AV=2.97  SV=5.04  BV=9.71
    {306,1216,1040, 0, 0, 0},  //TV = 11.67(28 lines)  AV=2.97  SV=5.04  BV=9.61
    {328,1216,1040, 0, 0, 0},  //TV = 11.57(30 lines)  AV=2.97  SV=5.04  BV=9.51
    {349,1216,1048, 0, 0, 0},  //TV = 11.48(32 lines)  AV=2.97  SV=5.05  BV=9.41
    {370,1216,1064, 0, 0, 0},  //TV = 11.40(34 lines)  AV=2.97  SV=5.07  BV=9.30
    {402,1216,1040, 0, 0, 0},  //TV = 11.28(37 lines)  AV=2.97  SV=5.04  BV=9.22
    {433,1216,1040, 0, 0, 0},  //TV = 11.17(40 lines)  AV=2.97  SV=5.04  BV=9.11
    {465,1216,1040, 0, 0, 0},  //TV = 11.07(43 lines)  AV=2.97  SV=5.04  BV=9.01
    {497,1216,1040, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.04  BV=8.91
    {529,1216,1048, 0, 0, 0},  //TV = 10.88(49 lines)  AV=2.97  SV=5.05  BV=8.81
    {571,1216,1040, 0, 0, 0},  //TV = 10.77(53 lines)  AV=2.97  SV=5.04  BV=8.71
    {613,1216,1040, 0, 0, 0},  //TV = 10.67(57 lines)  AV=2.97  SV=5.04  BV=8.61
    {645,1216,1056, 0, 0, 0},  //TV = 10.60(60 lines)  AV=2.97  SV=5.06  BV=8.51
    {698,1216,1048, 0, 0, 0},  //TV = 10.48(65 lines)  AV=2.97  SV=5.05  BV=8.41
    {751,1216,1040, 0, 0, 0},  //TV = 10.38(70 lines)  AV=2.97  SV=5.04  BV=8.31
    {804,1216,1040, 0, 0, 0},  //TV = 10.28(75 lines)  AV=2.97  SV=5.04  BV=8.22
    {867,1216,1040, 0, 0, 0},  //TV = 10.17(81 lines)  AV=2.97  SV=5.04  BV=8.11
    {920,1216,1048, 0, 0, 0},  //TV = 10.09(86 lines)  AV=2.97  SV=5.05  BV=8.01
    {994,1216,1040, 0, 0, 0},  //TV = 9.97(93 lines)  AV=2.97  SV=5.04  BV=7.91
    {1068,1216,1040, 0, 0, 0},  //TV = 9.87(100 lines)  AV=2.97  SV=5.04  BV=7.81
    {1143,1216,1040, 0, 0, 0},  //TV = 9.77(107 lines)  AV=2.97  SV=5.04  BV=7.71
    {1227,1216,1032, 0, 0, 0},  //TV = 9.67(115 lines)  AV=2.97  SV=5.02  BV=7.62
    {1312,1216,1040, 0, 0, 0},  //TV = 9.57(123 lines)  AV=2.97  SV=5.04  BV=7.51
    {1407,1216,1040, 0, 0, 0},  //TV = 9.47(132 lines)  AV=2.97  SV=5.04  BV=7.41
    {1513,1216,1032, 0, 0, 0},  //TV = 9.37(142 lines)  AV=2.97  SV=5.02  BV=7.31
    {1608,1216,1040, 0, 0, 0},  //TV = 9.28(151 lines)  AV=2.97  SV=5.04  BV=7.22
    {1735,1216,1032, 0, 0, 0},  //TV = 9.17(163 lines)  AV=2.97  SV=5.02  BV=7.12
    {1852,1216,1040, 0, 0, 0},  //TV = 9.08(174 lines)  AV=2.97  SV=5.04  BV=7.01
    {2000,1216,1032, 0, 0, 0},  //TV = 8.97(188 lines)  AV=2.97  SV=5.02  BV=6.91
    {2137,1216,1032, 0, 0, 0},  //TV = 8.87(201 lines)  AV=2.97  SV=5.02  BV=6.82
    {2296,1216,1032, 0, 0, 0},  //TV = 8.77(216 lines)  AV=2.97  SV=5.02  BV=6.71
    {2455,1216,1040, 0, 0, 0},  //TV = 8.67(231 lines)  AV=2.97  SV=5.04  BV=6.61
    {2635,1216,1032, 0, 0, 0},  //TV = 8.57(248 lines)  AV=2.97  SV=5.02  BV=6.51
    {2836,1216,1032, 0, 0, 0},  //TV = 8.46(267 lines)  AV=2.97  SV=5.02  BV=6.41
    {3027,1216,1040, 0, 0, 0},  //TV = 8.37(285 lines)  AV=2.97  SV=5.04  BV=6.30
    {3249,1216,1032, 0, 0, 0},  //TV = 8.27(306 lines)  AV=2.97  SV=5.02  BV=6.21
    {3471,1216,1032, 0, 0, 0},  //TV = 8.17(327 lines)  AV=2.97  SV=5.02  BV=6.12
    {3746,1216,1032, 0, 0, 0},  //TV = 8.06(353 lines)  AV=2.97  SV=5.02  BV=6.01
    {4011,1216,1032, 0, 0, 0},  //TV = 7.96(378 lines)  AV=2.97  SV=5.02  BV=5.91
    {4286,1216,1032, 0, 0, 0},  //TV = 7.87(404 lines)  AV=2.97  SV=5.02  BV=5.81
    {4593,1216,1032, 0, 0, 0},  //TV = 7.77(433 lines)  AV=2.97  SV=5.02  BV=5.71
    {4921,1216,1032, 0, 0, 0},  //TV = 7.67(464 lines)  AV=2.97  SV=5.02  BV=5.61
    {5270,1216,1032, 0, 0, 0},  //TV = 7.57(497 lines)  AV=2.97  SV=5.02  BV=5.51
    {5641,1216,1032, 0, 0, 0},  //TV = 7.47(532 lines)  AV=2.97  SV=5.02  BV=5.42
    {6043,1216,1032, 0, 0, 0},  //TV = 7.37(570 lines)  AV=2.97  SV=5.02  BV=5.32
    {6509,1216,1032, 0, 0, 0},  //TV = 7.26(614 lines)  AV=2.97  SV=5.02  BV=5.21
    {6974,1216,1032, 0, 0, 0},  //TV = 7.16(658 lines)  AV=2.97  SV=5.02  BV=5.11
    {7472,1216,1032, 0, 0, 0},  //TV = 7.06(705 lines)  AV=2.97  SV=5.02  BV=5.01
    {8001,1216,1032, 0, 0, 0},  //TV = 6.97(755 lines)  AV=2.97  SV=5.02  BV=4.91
    {8573,1216,1032, 0, 0, 0},  //TV = 6.87(809 lines)  AV=2.97  SV=5.02  BV=4.81
    {9186,1216,1032, 0, 0, 0},  //TV = 6.77(867 lines)  AV=2.97  SV=5.02  BV=4.71
    {9832,1216,1032, 0, 0, 0},  //TV = 6.67(928 lines)  AV=2.97  SV=5.02  BV=4.61
    {10002,1216,1088, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.10  BV=4.51
    {10002,1328,1072, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.21  BV=4.41
    {10002,1424,1064, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.30  BV=4.32
    {10002,1536,1064, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.41  BV=4.21
    {10002,1632,1072, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.50  BV=4.11
    {10002,1728,1080, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.60  BV=4.02
    {10002,1936,1040, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.71  BV=3.91
    {10002,2048,1048, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.80  BV=3.82
    {10002,2240,1024, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.89  BV=3.72
    {10002,2352,1056, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=6.01  BV=3.60
    {20004,1216,1088, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=5.10  BV=3.51
    {20004,1328,1072, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=5.21  BV=3.41
    {20004,1424,1064, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=5.30  BV=3.32
    {20004,1536,1064, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=5.41  BV=3.21
    {20004,1632,1072, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=5.50  BV=3.11
    {20004,1728,1080, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=5.60  BV=3.02
    {29995,1216,1104, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=5.12  BV=2.91
    {29995,1328,1080, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=5.22  BV=2.81
    {29995,1424,1080, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=5.32  BV=2.71
    {29995,1536,1072, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=5.42  BV=2.61
    {39996,1216,1088, 0, 0, 0},  //TV = 4.64(3778 lines)  AV=2.97  SV=5.10  BV=2.51
    {39996,1328,1072, 0, 0, 0},  //TV = 4.64(3778 lines)  AV=2.97  SV=5.21  BV=2.41
    {39996,1424,1072, 0, 0, 0},  //TV = 4.64(3778 lines)  AV=2.97  SV=5.31  BV=2.31
    {49998,1216,1072, 0, 0, 0},  //TV = 4.32(4723 lines)  AV=2.97  SV=5.08  BV=2.21
    {49998,1328,1056, 0, 0, 0},  //TV = 4.32(4723 lines)  AV=2.97  SV=5.18  BV=2.11
    {49998,1424,1056, 0, 0, 0},  //TV = 4.32(4723 lines)  AV=2.97  SV=5.29  BV=2.01
    {60001,1216,1104, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=5.12  BV=1.91
    {60001,1328,1080, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=5.22  BV=1.81
    {70002,1216,1088, 0, 0, 0},  //TV = 3.84(6613 lines)  AV=2.97  SV=5.10  BV=1.71
    {70002,1328,1064, 0, 0, 0},  //TV = 3.84(6613 lines)  AV=2.97  SV=5.20  BV=1.61
    {80004,1216,1088, 0, 0, 0},  //TV = 3.64(7558 lines)  AV=2.97  SV=5.10  BV=1.51
    {89995,1216,1040, 0, 0, 0},  //TV = 3.47(8502 lines)  AV=2.97  SV=5.04  BV=1.41
    {89995,1216,1112, 0, 0, 0},  //TV = 3.47(8502 lines)  AV=2.97  SV=5.13  BV=1.31
    {99997,1216,1072, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=5.08  BV=1.21
    {109999,1216,1048, 0, 0, 0},  //TV = 3.18(10392 lines)  AV=2.97  SV=5.05  BV=1.11
    {109999,1328,1024, 0, 0, 0},  //TV = 3.18(10392 lines)  AV=2.97  SV=5.14  BV=1.01
    {120001,1216,1104, 0, 0, 0},  //TV = 3.06(11337 lines)  AV=2.97  SV=5.12  BV=0.91
    {130003,1216,1088, 0, 0, 0},  //TV = 2.94(12282 lines)  AV=2.97  SV=5.10  BV=0.81
    {140005,1216,1088, 0, 0, 0},  //TV = 2.84(13227 lines)  AV=2.97  SV=5.10  BV=0.71
    {149996,1216,1088, 0, 0, 0},  //TV = 2.74(14171 lines)  AV=2.97  SV=5.10  BV=0.61
    {159998,1216,1088, 0, 0, 0},  //TV = 2.64(15116 lines)  AV=2.97  SV=5.10  BV=0.51
    {180002,1216,1040, 0, 0, 0},  //TV = 2.47(17006 lines)  AV=2.97  SV=5.04  BV=0.41
    {190004,1216,1056, 0, 0, 0},  //TV = 2.40(17952 lines)  AV=2.97  SV=5.06  BV=0.31
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_CaptureISO100Table =
{
    AETABLE_CAPTURE_ISO100,    //eAETableID
    111,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    113,    //i4MaxBV
    3,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_100, //ISO SPEED
    sCaptureISO100PLineTable_60Hz,
    sCaptureISO100PLineTable_50Hz,
    NULL,
};

static strEvPline sCaptureISO200PLineTable_60Hz =
{
{
    {95,1216,1064, 0, 0, 0},  //TV = 13.36(8 lines)  AV=2.97  SV=5.07  BV=11.26
    {105,1136,1088, 0, 0, 0},  //TV = 13.22(9 lines)  AV=2.97  SV=5.00  BV=11.19
    {105,1216,1072, 0, 0, 0},  //TV = 13.22(9 lines)  AV=2.97  SV=5.08  BV=11.11
    {116,1216,1064, 0, 0, 0},  //TV = 13.07(10 lines)  AV=2.97  SV=5.07  BV=10.98
    {127,1216,1040, 0, 0, 0},  //TV = 12.94(11 lines)  AV=2.97  SV=5.04  BV=10.88
    {137,1136,1096, 0, 0, 0},  //TV = 12.83(12 lines)  AV=2.97  SV=5.01  BV=10.79
    {137,1216,1088, 0, 0, 0},  //TV = 12.83(12 lines)  AV=2.97  SV=5.10  BV=10.70
    {158,1136,1096, 0, 0, 0},  //TV = 12.63(14 lines)  AV=2.97  SV=5.01  BV=10.59
    {169,1216,1024, 0, 0, 0},  //TV = 12.53(15 lines)  AV=2.97  SV=5.01  BV=10.49
    {179,1216,1048, 0, 0, 0},  //TV = 12.45(16 lines)  AV=2.97  SV=5.05  BV=10.37
    {190,1216,1064, 0, 0, 0},  //TV = 12.36(17 lines)  AV=2.97  SV=5.07  BV=10.26
    {201,1216,1040, 0, 0, 0},  //TV = 12.28(18 lines)  AV=2.97  SV=5.04  BV=10.22
    {222,1136,1088, 0, 0, 0},  //TV = 12.14(20 lines)  AV=2.97  SV=5.00  BV=10.11
    {232,1216,1040, 0, 0, 0},  //TV = 12.07(21 lines)  AV=2.97  SV=5.04  BV=10.01
    {254,1136,1088, 0, 0, 0},  //TV = 11.94(23 lines)  AV=2.97  SV=5.00  BV=9.91
    {264,1216,1048, 0, 0, 0},  //TV = 11.89(24 lines)  AV=2.97  SV=5.05  BV=9.81
    {285,1216,1040, 0, 0, 0},  //TV = 11.78(26 lines)  AV=2.97  SV=5.04  BV=9.71
    {306,1216,1040, 0, 0, 0},  //TV = 11.67(28 lines)  AV=2.97  SV=5.04  BV=9.61
    {328,1216,1040, 0, 0, 0},  //TV = 11.57(30 lines)  AV=2.97  SV=5.04  BV=9.51
    {359,1136,1096, 0, 0, 0},  //TV = 11.44(33 lines)  AV=2.97  SV=5.01  BV=9.40
    {381,1216,1024, 0, 0, 0},  //TV = 11.36(35 lines)  AV=2.97  SV=5.01  BV=9.32
    {412,1136,1096, 0, 0, 0},  //TV = 11.25(38 lines)  AV=2.97  SV=5.01  BV=9.20
    {444,1136,1088, 0, 0, 0},  //TV = 11.14(41 lines)  AV=2.97  SV=5.00  BV=9.11
    {476,1136,1088, 0, 0, 0},  //TV = 11.04(44 lines)  AV=2.97  SV=5.00  BV=9.00
    {497,1216,1040, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.04  BV=8.91
    {497,1216,1112, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.13  BV=8.81
    {497,1328,1096, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.24  BV=8.71
    {497,1424,1088, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.33  BV=8.62
    {497,1632,1024, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.44  BV=8.51
    {497,1728,1032, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.53  BV=8.41
    {497,1840,1040, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.63  BV=8.31
    {497,1936,1064, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.74  BV=8.21
    {497,2144,1024, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.83  BV=8.11
    {497,2240,1048, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.93  BV=8.02
    {497,2448,1032, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=6.03  BV=7.91
    {529,2448,1040, 0, 0, 0},  //TV = 10.88(49 lines)  AV=2.97  SV=6.05  BV=7.81
    {571,2448,1032, 0, 0, 0},  //TV = 10.77(53 lines)  AV=2.97  SV=6.03  BV=7.71
    {613,2448,1032, 0, 0, 0},  //TV = 10.67(57 lines)  AV=2.97  SV=6.03  BV=7.61
    {656,2448,1032, 0, 0, 0},  //TV = 10.57(61 lines)  AV=2.97  SV=6.03  BV=7.51
    {698,2448,1040, 0, 0, 0},  //TV = 10.48(65 lines)  AV=2.97  SV=6.05  BV=7.41
    {751,2448,1032, 0, 0, 0},  //TV = 10.38(70 lines)  AV=2.97  SV=6.03  BV=7.32
    {804,2448,1040, 0, 0, 0},  //TV = 10.28(75 lines)  AV=2.97  SV=6.05  BV=7.21
    {857,2448,1040, 0, 0, 0},  //TV = 10.19(80 lines)  AV=2.97  SV=6.05  BV=7.11
    {931,2448,1032, 0, 0, 0},  //TV = 10.07(87 lines)  AV=2.97  SV=6.03  BV=7.01
    {994,2448,1032, 0, 0, 0},  //TV = 9.97(93 lines)  AV=2.97  SV=6.03  BV=6.91
    {1058,2448,1040, 0, 0, 0},  //TV = 9.88(99 lines)  AV=2.97  SV=6.05  BV=6.81
    {1143,2448,1032, 0, 0, 0},  //TV = 9.77(107 lines)  AV=2.97  SV=6.03  BV=6.71
    {1227,2448,1032, 0, 0, 0},  //TV = 9.67(115 lines)  AV=2.97  SV=6.03  BV=6.61
    {1312,2448,1032, 0, 0, 0},  //TV = 9.57(123 lines)  AV=2.97  SV=6.03  BV=6.51
    {1407,2448,1032, 0, 0, 0},  //TV = 9.47(132 lines)  AV=2.97  SV=6.03  BV=6.41
    {1513,2448,1032, 0, 0, 0},  //TV = 9.37(142 lines)  AV=2.97  SV=6.03  BV=6.31
    {1619,2448,1032, 0, 0, 0},  //TV = 9.27(152 lines)  AV=2.97  SV=6.03  BV=6.21
    {1735,2448,1032, 0, 0, 0},  //TV = 9.17(163 lines)  AV=2.97  SV=6.03  BV=6.11
    {1862,2448,1024, 0, 0, 0},  //TV = 9.07(175 lines)  AV=2.97  SV=6.02  BV=6.02
    {1989,2448,1032, 0, 0, 0},  //TV = 8.97(187 lines)  AV=2.97  SV=6.03  BV=5.91
    {2137,2448,1032, 0, 0, 0},  //TV = 8.87(201 lines)  AV=2.97  SV=6.03  BV=5.81
    {2286,2448,1032, 0, 0, 0},  //TV = 8.77(215 lines)  AV=2.97  SV=6.03  BV=5.71
    {2466,2448,1024, 0, 0, 0},  //TV = 8.66(232 lines)  AV=2.97  SV=6.02  BV=5.61
    {2635,2448,1032, 0, 0, 0},  //TV = 8.57(248 lines)  AV=2.97  SV=6.03  BV=5.50
    {2825,2448,1024, 0, 0, 0},  //TV = 8.47(266 lines)  AV=2.97  SV=6.02  BV=5.42
    {3016,2448,1032, 0, 0, 0},  //TV = 8.37(284 lines)  AV=2.97  SV=6.03  BV=5.31
    {3228,2448,1032, 0, 0, 0},  //TV = 8.28(304 lines)  AV=2.97  SV=6.03  BV=5.21
    {3482,2448,1032, 0, 0, 0},  //TV = 8.17(328 lines)  AV=2.97  SV=6.03  BV=5.10
    {3725,2448,1032, 0, 0, 0},  //TV = 8.07(351 lines)  AV=2.97  SV=6.03  BV=5.01
    {3990,2448,1024, 0, 0, 0},  //TV = 7.97(376 lines)  AV=2.97  SV=6.02  BV=4.92
    {4275,2448,1024, 0, 0, 0},  //TV = 7.87(403 lines)  AV=2.97  SV=6.02  BV=4.82
    {4604,2448,1024, 0, 0, 0},  //TV = 7.76(434 lines)  AV=2.97  SV=6.02  BV=4.71
    {4932,2448,1024, 0, 0, 0},  //TV = 7.66(465 lines)  AV=2.97  SV=6.02  BV=4.61
    {5281,2448,1024, 0, 0, 0},  //TV = 7.56(498 lines)  AV=2.97  SV=6.02  BV=4.51
    {5651,2448,1024, 0, 0, 0},  //TV = 7.47(533 lines)  AV=2.97  SV=6.02  BV=4.42
    {6054,2448,1024, 0, 0, 0},  //TV = 7.37(571 lines)  AV=2.97  SV=6.02  BV=4.32
    {6487,2448,1024, 0, 0, 0},  //TV = 7.27(612 lines)  AV=2.97  SV=6.02  BV=4.22
    {6943,2448,1024, 0, 0, 0},  //TV = 7.17(655 lines)  AV=2.97  SV=6.02  BV=4.12
    {7440,2448,1024, 0, 0, 0},  //TV = 7.07(702 lines)  AV=2.97  SV=6.02  BV=4.02
    {7969,2448,1024, 0, 0, 0},  //TV = 6.97(752 lines)  AV=2.97  SV=6.02  BV=3.92
    {8329,2448,1056, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=6.07  BV=3.81
    {8329,2656,1048, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=6.17  BV=3.70
    {8329,2864,1032, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=6.26  BV=3.62
    {8329,3072,1040, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=6.37  BV=3.51
    {8329,3328,1024, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=6.47  BV=3.41
    {8329,3584,1024, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=6.57  BV=3.31
    {8329,3840,1024, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=6.67  BV=3.21
    {8329,4096,1024, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=6.77  BV=3.11
    {8329,4352,1032, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=6.86  BV=3.01
    {8329,4608,1048, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=6.97  BV=2.91
    {16670,2448,1056, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=6.07  BV=2.81
    {16670,2656,1040, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=6.16  BV=2.71
    {16670,2864,1040, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=6.27  BV=2.61
    {16670,3072,1040, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=6.37  BV=2.50
    {16670,3328,1024, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=6.47  BV=2.41
    {16670,3456,1056, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=6.56  BV=2.31
    {24988,2448,1064, 0, 0, 0},  //TV = 5.32(2360 lines)  AV=2.97  SV=6.08  BV=2.22
    {24988,2656,1056, 0, 0, 0},  //TV = 5.32(2360 lines)  AV=2.97  SV=6.18  BV=2.11
    {24988,2864,1048, 0, 0, 0},  //TV = 5.32(2360 lines)  AV=2.97  SV=6.28  BV=2.01
    {24988,3072,1048, 0, 0, 0},  //TV = 5.32(2360 lines)  AV=2.97  SV=6.38  BV=1.91
    {33329,2448,1056, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=6.07  BV=1.81
    {33329,2656,1040, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=6.16  BV=1.71
    {33329,2864,1032, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=6.26  BV=1.62
    {41669,2448,1040, 0, 0, 0},  //TV = 4.58(3936 lines)  AV=2.97  SV=6.05  BV=1.51
    {41669,2656,1032, 0, 0, 0},  //TV = 4.58(3936 lines)  AV=2.97  SV=6.15  BV=1.40
    {41669,2864,1024, 0, 0, 0},  //TV = 4.58(3936 lines)  AV=2.97  SV=6.25  BV=1.31
    {49999,2448,1064, 0, 0, 0},  //TV = 4.32(4724 lines)  AV=2.97  SV=6.08  BV=1.21
    {49999,2656,1048, 0, 0, 0},  //TV = 4.32(4724 lines)  AV=2.97  SV=6.17  BV=1.12
    {58328,2448,1056, 0, 0, 0},  //TV = 4.10(5510 lines)  AV=2.97  SV=6.07  BV=1.00
    {58328,2656,1032, 0, 0, 0},  //TV = 4.10(5510 lines)  AV=2.97  SV=6.15  BV=0.92
    {66669,2448,1056, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=6.07  BV=0.81
    {66669,2656,1048, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=6.17  BV=0.70
    {74998,2560,1040, 0, 0, 0},  //TV = 3.74(7085 lines)  AV=2.97  SV=6.11  BV=0.60
    {83327,2448,1040, 0, 0, 0},  //TV = 3.59(7872 lines)  AV=2.97  SV=6.05  BV=0.51
    {83327,2656,1032, 0, 0, 0},  //TV = 3.59(7872 lines)  AV=2.97  SV=6.15  BV=0.40
    {91668,2560,1040, 0, 0, 0},  //TV = 3.45(8660 lines)  AV=2.97  SV=6.11  BV=0.31
    {99998,2448,1064, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=6.08  BV=0.21
    {108327,2448,1064, 0, 0, 0},  //TV = 3.21(10234 lines)  AV=2.97  SV=6.08  BV=0.10
    {116667,2448,1064, 0, 0, 0},  //TV = 3.10(11022 lines)  AV=2.97  SV=6.08  BV=-0.01
    {124997,2448,1064, 0, 0, 0},  //TV = 3.00(11809 lines)  AV=2.97  SV=6.08  BV=-0.11
    {133326,2448,1064, 0, 0, 0},  //TV = 2.91(12596 lines)  AV=2.97  SV=6.08  BV=-0.20
    {141656,2560,1024, 0, 0, 0},  //TV = 2.82(13383 lines)  AV=2.97  SV=6.09  BV=-0.30
    {158326,2448,1032, 0, 0, 0},  //TV = 2.66(14958 lines)  AV=2.97  SV=6.03  BV=-0.40
    {166655,2448,1048, 0, 0, 0},  //TV = 2.59(15745 lines)  AV=2.97  SV=6.06  BV=-0.50
    {174996,2560,1024, 0, 0, 0},  //TV = 2.51(16534 lines)  AV=2.97  SV=6.09  BV=-0.60
    {191655,2448,1040, 0, 0, 0},  //TV = 2.38(18107 lines)  AV=2.97  SV=6.05  BV=-0.69
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCaptureISO200PLineTable_50Hz =
{
{
    {95,1216,1064, 0, 0, 0},  //TV = 13.36(8 lines)  AV=2.97  SV=5.07  BV=11.26
    {105,1136,1088, 0, 0, 0},  //TV = 13.22(9 lines)  AV=2.97  SV=5.00  BV=11.19
    {105,1216,1072, 0, 0, 0},  //TV = 13.22(9 lines)  AV=2.97  SV=5.08  BV=11.11
    {116,1216,1064, 0, 0, 0},  //TV = 13.07(10 lines)  AV=2.97  SV=5.07  BV=10.98
    {127,1216,1040, 0, 0, 0},  //TV = 12.94(11 lines)  AV=2.97  SV=5.04  BV=10.88
    {137,1136,1096, 0, 0, 0},  //TV = 12.83(12 lines)  AV=2.97  SV=5.01  BV=10.79
    {137,1216,1088, 0, 0, 0},  //TV = 12.83(12 lines)  AV=2.97  SV=5.10  BV=10.70
    {158,1136,1096, 0, 0, 0},  //TV = 12.63(14 lines)  AV=2.97  SV=5.01  BV=10.59
    {169,1216,1024, 0, 0, 0},  //TV = 12.53(15 lines)  AV=2.97  SV=5.01  BV=10.49
    {179,1216,1048, 0, 0, 0},  //TV = 12.45(16 lines)  AV=2.97  SV=5.05  BV=10.37
    {190,1216,1064, 0, 0, 0},  //TV = 12.36(17 lines)  AV=2.97  SV=5.07  BV=10.26
    {201,1216,1040, 0, 0, 0},  //TV = 12.28(18 lines)  AV=2.97  SV=5.04  BV=10.22
    {222,1136,1088, 0, 0, 0},  //TV = 12.14(20 lines)  AV=2.97  SV=5.00  BV=10.11
    {232,1216,1040, 0, 0, 0},  //TV = 12.07(21 lines)  AV=2.97  SV=5.04  BV=10.01
    {254,1136,1088, 0, 0, 0},  //TV = 11.94(23 lines)  AV=2.97  SV=5.00  BV=9.91
    {264,1216,1048, 0, 0, 0},  //TV = 11.89(24 lines)  AV=2.97  SV=5.05  BV=9.81
    {285,1216,1040, 0, 0, 0},  //TV = 11.78(26 lines)  AV=2.97  SV=5.04  BV=9.71
    {306,1216,1040, 0, 0, 0},  //TV = 11.67(28 lines)  AV=2.97  SV=5.04  BV=9.61
    {328,1216,1040, 0, 0, 0},  //TV = 11.57(30 lines)  AV=2.97  SV=5.04  BV=9.51
    {359,1136,1096, 0, 0, 0},  //TV = 11.44(33 lines)  AV=2.97  SV=5.01  BV=9.40
    {381,1216,1024, 0, 0, 0},  //TV = 11.36(35 lines)  AV=2.97  SV=5.01  BV=9.32
    {412,1136,1096, 0, 0, 0},  //TV = 11.25(38 lines)  AV=2.97  SV=5.01  BV=9.20
    {444,1136,1088, 0, 0, 0},  //TV = 11.14(41 lines)  AV=2.97  SV=5.00  BV=9.11
    {476,1136,1088, 0, 0, 0},  //TV = 11.04(44 lines)  AV=2.97  SV=5.00  BV=9.00
    {497,1216,1040, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.04  BV=8.91
    {497,1216,1112, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.13  BV=8.81
    {497,1328,1096, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.24  BV=8.71
    {497,1424,1088, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.33  BV=8.62
    {497,1632,1024, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.44  BV=8.51
    {497,1728,1032, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.53  BV=8.41
    {497,1840,1040, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.63  BV=8.31
    {497,1936,1064, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.74  BV=8.21
    {497,2144,1024, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.83  BV=8.11
    {497,2240,1048, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.93  BV=8.02
    {497,2448,1032, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=6.03  BV=7.91
    {529,2448,1040, 0, 0, 0},  //TV = 10.88(49 lines)  AV=2.97  SV=6.05  BV=7.81
    {571,2448,1032, 0, 0, 0},  //TV = 10.77(53 lines)  AV=2.97  SV=6.03  BV=7.71
    {613,2448,1032, 0, 0, 0},  //TV = 10.67(57 lines)  AV=2.97  SV=6.03  BV=7.61
    {656,2448,1032, 0, 0, 0},  //TV = 10.57(61 lines)  AV=2.97  SV=6.03  BV=7.51
    {698,2448,1040, 0, 0, 0},  //TV = 10.48(65 lines)  AV=2.97  SV=6.05  BV=7.41
    {751,2448,1032, 0, 0, 0},  //TV = 10.38(70 lines)  AV=2.97  SV=6.03  BV=7.32
    {804,2448,1040, 0, 0, 0},  //TV = 10.28(75 lines)  AV=2.97  SV=6.05  BV=7.21
    {857,2448,1040, 0, 0, 0},  //TV = 10.19(80 lines)  AV=2.97  SV=6.05  BV=7.11
    {931,2448,1032, 0, 0, 0},  //TV = 10.07(87 lines)  AV=2.97  SV=6.03  BV=7.01
    {994,2448,1032, 0, 0, 0},  //TV = 9.97(93 lines)  AV=2.97  SV=6.03  BV=6.91
    {1058,2448,1040, 0, 0, 0},  //TV = 9.88(99 lines)  AV=2.97  SV=6.05  BV=6.81
    {1143,2448,1032, 0, 0, 0},  //TV = 9.77(107 lines)  AV=2.97  SV=6.03  BV=6.71
    {1227,2448,1032, 0, 0, 0},  //TV = 9.67(115 lines)  AV=2.97  SV=6.03  BV=6.61
    {1312,2448,1032, 0, 0, 0},  //TV = 9.57(123 lines)  AV=2.97  SV=6.03  BV=6.51
    {1407,2448,1032, 0, 0, 0},  //TV = 9.47(132 lines)  AV=2.97  SV=6.03  BV=6.41
    {1513,2448,1032, 0, 0, 0},  //TV = 9.37(142 lines)  AV=2.97  SV=6.03  BV=6.31
    {1619,2448,1032, 0, 0, 0},  //TV = 9.27(152 lines)  AV=2.97  SV=6.03  BV=6.21
    {1735,2448,1032, 0, 0, 0},  //TV = 9.17(163 lines)  AV=2.97  SV=6.03  BV=6.11
    {1862,2448,1024, 0, 0, 0},  //TV = 9.07(175 lines)  AV=2.97  SV=6.02  BV=6.02
    {1989,2448,1032, 0, 0, 0},  //TV = 8.97(187 lines)  AV=2.97  SV=6.03  BV=5.91
    {2137,2448,1032, 0, 0, 0},  //TV = 8.87(201 lines)  AV=2.97  SV=6.03  BV=5.81
    {2286,2448,1032, 0, 0, 0},  //TV = 8.77(215 lines)  AV=2.97  SV=6.03  BV=5.71
    {2466,2448,1024, 0, 0, 0},  //TV = 8.66(232 lines)  AV=2.97  SV=6.02  BV=5.61
    {2635,2448,1032, 0, 0, 0},  //TV = 8.57(248 lines)  AV=2.97  SV=6.03  BV=5.50
    {2825,2448,1024, 0, 0, 0},  //TV = 8.47(266 lines)  AV=2.97  SV=6.02  BV=5.42
    {3016,2448,1032, 0, 0, 0},  //TV = 8.37(284 lines)  AV=2.97  SV=6.03  BV=5.31
    {3228,2448,1032, 0, 0, 0},  //TV = 8.28(304 lines)  AV=2.97  SV=6.03  BV=5.21
    {3482,2448,1032, 0, 0, 0},  //TV = 8.17(328 lines)  AV=2.97  SV=6.03  BV=5.10
    {3725,2448,1032, 0, 0, 0},  //TV = 8.07(351 lines)  AV=2.97  SV=6.03  BV=5.01
    {3990,2448,1024, 0, 0, 0},  //TV = 7.97(376 lines)  AV=2.97  SV=6.02  BV=4.92
    {4275,2448,1024, 0, 0, 0},  //TV = 7.87(403 lines)  AV=2.97  SV=6.02  BV=4.82
    {4604,2448,1024, 0, 0, 0},  //TV = 7.76(434 lines)  AV=2.97  SV=6.02  BV=4.71
    {4932,2448,1024, 0, 0, 0},  //TV = 7.66(465 lines)  AV=2.97  SV=6.02  BV=4.61
    {5281,2448,1024, 0, 0, 0},  //TV = 7.56(498 lines)  AV=2.97  SV=6.02  BV=4.51
    {5651,2448,1024, 0, 0, 0},  //TV = 7.47(533 lines)  AV=2.97  SV=6.02  BV=4.42
    {6054,2448,1024, 0, 0, 0},  //TV = 7.37(571 lines)  AV=2.97  SV=6.02  BV=4.32
    {6487,2448,1024, 0, 0, 0},  //TV = 7.27(612 lines)  AV=2.97  SV=6.02  BV=4.22
    {6943,2448,1024, 0, 0, 0},  //TV = 7.17(655 lines)  AV=2.97  SV=6.02  BV=4.12
    {7440,2448,1024, 0, 0, 0},  //TV = 7.07(702 lines)  AV=2.97  SV=6.02  BV=4.02
    {7969,2448,1024, 0, 0, 0},  //TV = 6.97(752 lines)  AV=2.97  SV=6.02  BV=3.92
    {8541,2448,1024, 0, 0, 0},  //TV = 6.87(806 lines)  AV=2.97  SV=6.02  BV=3.82
    {9208,2448,1024, 0, 0, 0},  //TV = 6.76(869 lines)  AV=2.97  SV=6.02  BV=3.71
    {9864,2448,1024, 0, 0, 0},  //TV = 6.66(931 lines)  AV=2.97  SV=6.02  BV=3.61
    {10002,2560,1040, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=6.11  BV=3.50
    {10002,2752,1032, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=6.20  BV=3.41
    {10002,2960,1032, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=6.31  BV=3.31
    {10002,3200,1024, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=6.41  BV=3.21
    {10002,3328,1056, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=6.51  BV=3.10
    {10002,3584,1048, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=6.61  BV=3.01
    {10002,3840,1048, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=6.71  BV=2.91
    {10002,4096,1056, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=6.81  BV=2.80
    {10002,4480,1032, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=6.91  BV=2.71
    {10002,4736,1048, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=7.01  BV=2.61
    {20004,2560,1040, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=6.11  BV=2.50
    {20004,2752,1032, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=6.20  BV=2.41
    {20004,2960,1032, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=6.31  BV=2.31
    {20004,3072,1064, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=6.41  BV=2.21
    {20004,3328,1048, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=6.50  BV=2.12
    {20004,3584,1048, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=6.61  BV=2.01
    {29995,2560,1048, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=6.12  BV=1.91
    {29995,2752,1040, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=6.21  BV=1.82
    {29995,2960,1040, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=6.32  BV=1.71
    {29995,3200,1024, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=6.41  BV=1.62
    {39996,2560,1032, 0, 0, 0},  //TV = 4.64(3778 lines)  AV=2.97  SV=6.10  BV=1.52
    {39996,2752,1040, 0, 0, 0},  //TV = 4.64(3778 lines)  AV=2.97  SV=6.21  BV=1.40
    {39996,2960,1032, 0, 0, 0},  //TV = 4.64(3778 lines)  AV=2.97  SV=6.31  BV=1.31
    {49998,2448,1064, 0, 0, 0},  //TV = 4.32(4723 lines)  AV=2.97  SV=6.08  BV=1.21
    {49998,2656,1048, 0, 0, 0},  //TV = 4.32(4723 lines)  AV=2.97  SV=6.17  BV=1.12
    {49998,2864,1048, 0, 0, 0},  //TV = 4.32(4723 lines)  AV=2.97  SV=6.28  BV=1.01
    {60001,2560,1056, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=6.13  BV=0.90
    {60001,2752,1040, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=6.21  BV=0.82
    {70002,2560,1032, 0, 0, 0},  //TV = 3.84(6613 lines)  AV=2.97  SV=6.10  BV=0.71
    {70002,2752,1032, 0, 0, 0},  //TV = 3.84(6613 lines)  AV=2.97  SV=6.20  BV=0.60
    {80004,2560,1032, 0, 0, 0},  //TV = 3.64(7558 lines)  AV=2.97  SV=6.10  BV=0.52
    {89995,2448,1040, 0, 0, 0},  //TV = 3.47(8502 lines)  AV=2.97  SV=6.05  BV=0.40
    {89995,2560,1056, 0, 0, 0},  //TV = 3.47(8502 lines)  AV=2.97  SV=6.13  BV=0.31
    {99997,2448,1064, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=6.08  BV=0.21
    {109999,2448,1040, 0, 0, 0},  //TV = 3.18(10392 lines)  AV=2.97  SV=6.05  BV=0.11
    {120001,2448,1032, 0, 0, 0},  //TV = 3.06(11337 lines)  AV=2.97  SV=6.03  BV=-0.00
    {120001,2560,1056, 0, 0, 0},  //TV = 3.06(11337 lines)  AV=2.97  SV=6.13  BV=-0.10
    {130003,2560,1040, 0, 0, 0},  //TV = 2.94(12282 lines)  AV=2.97  SV=6.11  BV=-0.20
    {140005,2560,1040, 0, 0, 0},  //TV = 2.84(13227 lines)  AV=2.97  SV=6.11  BV=-0.30
    {149996,2560,1040, 0, 0, 0},  //TV = 2.74(14171 lines)  AV=2.97  SV=6.11  BV=-0.40
    {169989,2448,1032, 0, 0, 0},  //TV = 2.56(16060 lines)  AV=2.97  SV=6.03  BV=-0.51
    {180002,2448,1040, 0, 0, 0},  //TV = 2.47(17006 lines)  AV=2.97  SV=6.05  BV=-0.60
    {190004,2448,1056, 0, 0, 0},  //TV = 2.40(17952 lines)  AV=2.97  SV=6.07  BV=-0.70
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_CaptureISO200Table =
{
    AETABLE_CAPTURE_ISO200,    //eAETableID
    121,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    113,    //i4MaxBV
    -7,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_200, //ISO SPEED
    sCaptureISO200PLineTable_60Hz,
    sCaptureISO200PLineTable_50Hz,
    NULL,
};

static strEvPline sCaptureISO400PLineTable_60Hz =
{
{
    {95,1216,1064, 0, 0, 0},  //TV = 13.36(8 lines)  AV=2.97  SV=5.07  BV=11.26
    {105,1136,1088, 0, 0, 0},  //TV = 13.22(9 lines)  AV=2.97  SV=5.00  BV=11.19
    {105,1216,1072, 0, 0, 0},  //TV = 13.22(9 lines)  AV=2.97  SV=5.08  BV=11.11
    {116,1216,1064, 0, 0, 0},  //TV = 13.07(10 lines)  AV=2.97  SV=5.07  BV=10.98
    {127,1216,1040, 0, 0, 0},  //TV = 12.94(11 lines)  AV=2.97  SV=5.04  BV=10.88
    {137,1136,1096, 0, 0, 0},  //TV = 12.83(12 lines)  AV=2.97  SV=5.01  BV=10.79
    {137,1216,1088, 0, 0, 0},  //TV = 12.83(12 lines)  AV=2.97  SV=5.10  BV=10.70
    {158,1136,1096, 0, 0, 0},  //TV = 12.63(14 lines)  AV=2.97  SV=5.01  BV=10.59
    {169,1216,1024, 0, 0, 0},  //TV = 12.53(15 lines)  AV=2.97  SV=5.01  BV=10.49
    {179,1216,1048, 0, 0, 0},  //TV = 12.45(16 lines)  AV=2.97  SV=5.05  BV=10.37
    {190,1216,1064, 0, 0, 0},  //TV = 12.36(17 lines)  AV=2.97  SV=5.07  BV=10.26
    {201,1216,1040, 0, 0, 0},  //TV = 12.28(18 lines)  AV=2.97  SV=5.04  BV=10.22
    {222,1136,1088, 0, 0, 0},  //TV = 12.14(20 lines)  AV=2.97  SV=5.00  BV=10.11
    {232,1216,1040, 0, 0, 0},  //TV = 12.07(21 lines)  AV=2.97  SV=5.04  BV=10.01
    {254,1136,1088, 0, 0, 0},  //TV = 11.94(23 lines)  AV=2.97  SV=5.00  BV=9.91
    {264,1216,1048, 0, 0, 0},  //TV = 11.89(24 lines)  AV=2.97  SV=5.05  BV=9.81
    {285,1216,1040, 0, 0, 0},  //TV = 11.78(26 lines)  AV=2.97  SV=5.04  BV=9.71
    {306,1216,1040, 0, 0, 0},  //TV = 11.67(28 lines)  AV=2.97  SV=5.04  BV=9.61
    {328,1216,1040, 0, 0, 0},  //TV = 11.57(30 lines)  AV=2.97  SV=5.04  BV=9.51
    {359,1136,1096, 0, 0, 0},  //TV = 11.44(33 lines)  AV=2.97  SV=5.01  BV=9.40
    {381,1216,1024, 0, 0, 0},  //TV = 11.36(35 lines)  AV=2.97  SV=5.01  BV=9.32
    {412,1136,1096, 0, 0, 0},  //TV = 11.25(38 lines)  AV=2.97  SV=5.01  BV=9.20
    {444,1136,1088, 0, 0, 0},  //TV = 11.14(41 lines)  AV=2.97  SV=5.00  BV=9.11
    {476,1136,1088, 0, 0, 0},  //TV = 11.04(44 lines)  AV=2.97  SV=5.00  BV=9.00
    {497,1216,1040, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.04  BV=8.91
    {497,1216,1112, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.13  BV=8.81
    {497,1328,1096, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.24  BV=8.71
    {497,1424,1088, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.33  BV=8.62
    {497,1632,1024, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.44  BV=8.51
    {497,1728,1032, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.53  BV=8.41
    {497,1840,1040, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.63  BV=8.31
    {497,1936,1064, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.74  BV=8.21
    {497,2144,1024, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.83  BV=8.11
    {497,2240,1048, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.93  BV=8.02
    {497,2448,1032, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=6.03  BV=7.91
    {497,2560,1056, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=6.13  BV=7.81
    {497,2752,1056, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=6.24  BV=7.71
    {497,2960,1056, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=6.34  BV=7.60
    {497,3200,1040, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=6.43  BV=7.51
    {497,3456,1032, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=6.53  BV=7.41
    {497,3712,1032, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=6.63  BV=7.31
    {497,3968,1040, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=6.74  BV=7.20
    {497,4224,1040, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=6.83  BV=7.11
    {497,4608,1024, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=6.94  BV=7.01
    {497,4864,1040, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=7.04  BV=6.91
    {529,4864,1048, 0, 0, 0},  //TV = 10.88(49 lines)  AV=2.97  SV=7.05  BV=6.81
    {571,4864,1040, 0, 0, 0},  //TV = 10.77(53 lines)  AV=2.97  SV=7.04  BV=6.71
    {613,4864,1040, 0, 0, 0},  //TV = 10.67(57 lines)  AV=2.97  SV=7.04  BV=6.61
    {656,4864,1040, 0, 0, 0},  //TV = 10.57(61 lines)  AV=2.97  SV=7.04  BV=6.51
    {698,4864,1040, 0, 0, 0},  //TV = 10.48(65 lines)  AV=2.97  SV=7.04  BV=6.42
    {751,4864,1040, 0, 0, 0},  //TV = 10.38(70 lines)  AV=2.97  SV=7.04  BV=6.31
    {804,4864,1040, 0, 0, 0},  //TV = 10.28(75 lines)  AV=2.97  SV=7.04  BV=6.22
    {867,4864,1040, 0, 0, 0},  //TV = 10.17(81 lines)  AV=2.97  SV=7.04  BV=6.11
    {931,4864,1032, 0, 0, 0},  //TV = 10.07(87 lines)  AV=2.97  SV=7.02  BV=6.02
    {994,4864,1040, 0, 0, 0},  //TV = 9.97(93 lines)  AV=2.97  SV=7.04  BV=5.91
    {1068,4864,1040, 0, 0, 0},  //TV = 9.87(100 lines)  AV=2.97  SV=7.04  BV=5.81
    {1143,4864,1040, 0, 0, 0},  //TV = 9.77(107 lines)  AV=2.97  SV=7.04  BV=5.71
    {1227,4864,1032, 0, 0, 0},  //TV = 9.67(115 lines)  AV=2.97  SV=7.02  BV=5.62
    {1312,4864,1040, 0, 0, 0},  //TV = 9.57(123 lines)  AV=2.97  SV=7.04  BV=5.51
    {1407,4864,1032, 0, 0, 0},  //TV = 9.47(132 lines)  AV=2.97  SV=7.02  BV=5.42
    {1513,4864,1032, 0, 0, 0},  //TV = 9.37(142 lines)  AV=2.97  SV=7.02  BV=5.31
    {1619,4864,1032, 0, 0, 0},  //TV = 9.27(152 lines)  AV=2.97  SV=7.02  BV=5.22
    {1735,4864,1040, 0, 0, 0},  //TV = 9.17(163 lines)  AV=2.97  SV=7.04  BV=5.11
    {1862,4864,1032, 0, 0, 0},  //TV = 9.07(175 lines)  AV=2.97  SV=7.02  BV=5.02
    {2000,4864,1032, 0, 0, 0},  //TV = 8.97(188 lines)  AV=2.97  SV=7.02  BV=4.91
    {2137,4864,1032, 0, 0, 0},  //TV = 8.87(201 lines)  AV=2.97  SV=7.02  BV=4.82
    {2286,4864,1032, 0, 0, 0},  //TV = 8.77(215 lines)  AV=2.97  SV=7.02  BV=4.72
    {2466,4864,1032, 0, 0, 0},  //TV = 8.66(232 lines)  AV=2.97  SV=7.02  BV=4.61
    {2635,4864,1032, 0, 0, 0},  //TV = 8.57(248 lines)  AV=2.97  SV=7.02  BV=4.51
    {2825,4864,1032, 0, 0, 0},  //TV = 8.47(266 lines)  AV=2.97  SV=7.02  BV=4.41
    {3016,4864,1032, 0, 0, 0},  //TV = 8.37(284 lines)  AV=2.97  SV=7.02  BV=4.32
    {3259,4864,1032, 0, 0, 0},  //TV = 8.26(307 lines)  AV=2.97  SV=7.02  BV=4.21
    {3482,4864,1032, 0, 0, 0},  //TV = 8.17(328 lines)  AV=2.97  SV=7.02  BV=4.11
    {3725,4864,1032, 0, 0, 0},  //TV = 8.07(351 lines)  AV=2.97  SV=7.02  BV=4.01
    {3990,4864,1032, 0, 0, 0},  //TV = 7.97(376 lines)  AV=2.97  SV=7.02  BV=3.92
    {4297,4864,1032, 0, 0, 0},  //TV = 7.86(405 lines)  AV=2.97  SV=7.02  BV=3.81
    {4604,4864,1032, 0, 0, 0},  //TV = 7.76(434 lines)  AV=2.97  SV=7.02  BV=3.71
    {4932,4864,1032, 0, 0, 0},  //TV = 7.66(465 lines)  AV=2.97  SV=7.02  BV=3.61
    {5281,4864,1032, 0, 0, 0},  //TV = 7.56(498 lines)  AV=2.97  SV=7.02  BV=3.51
    {5651,4864,1032, 0, 0, 0},  //TV = 7.47(533 lines)  AV=2.97  SV=7.02  BV=3.41
    {6054,4864,1032, 0, 0, 0},  //TV = 7.37(571 lines)  AV=2.97  SV=7.02  BV=3.31
    {6487,4864,1032, 0, 0, 0},  //TV = 7.27(612 lines)  AV=2.97  SV=7.02  BV=3.21
    {6943,4864,1032, 0, 0, 0},  //TV = 7.17(655 lines)  AV=2.97  SV=7.02  BV=3.12
    {7440,4864,1032, 0, 0, 0},  //TV = 7.07(702 lines)  AV=2.97  SV=7.02  BV=3.02
    {7969,4864,1032, 0, 0, 0},  //TV = 6.97(752 lines)  AV=2.97  SV=7.02  BV=2.92
    {8329,4992,1040, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=7.07  BV=2.81
    {8329,5376,1032, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=7.17  BV=2.71
    {8329,5760,1032, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=7.27  BV=2.61
    {8329,6240,1024, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=7.37  BV=2.51
    {8329,6544,1040, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=7.46  BV=2.41
    {8329,7072,1032, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=7.56  BV=2.31
    {8329,7472,1048, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=7.67  BV=2.21
    {8329,8192,1024, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=7.77  BV=2.11
    {8329,8192,1096, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=7.86  BV=2.01
    {8329,8192,1176, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=7.97  BV=1.91
    {16670,4992,1032, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=7.06  BV=1.82
    {16670,5376,1032, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=7.17  BV=1.71
    {16670,5760,1032, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=7.27  BV=1.61
    {16670,6144,1032, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=7.36  BV=1.52
    {16670,6544,1040, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=7.46  BV=1.41
    {16670,7072,1032, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=7.56  BV=1.31
    {24988,5120,1024, 0, 0, 0},  //TV = 5.32(2360 lines)  AV=2.97  SV=7.09  BV=1.21
    {24988,5504,1024, 0, 0, 0},  //TV = 5.32(2360 lines)  AV=2.97  SV=7.19  BV=1.10
    {24988,5888,1024, 0, 0, 0},  //TV = 5.32(2360 lines)  AV=2.97  SV=7.29  BV=1.00
    {24988,6240,1024, 0, 0, 0},  //TV = 5.32(2360 lines)  AV=2.97  SV=7.37  BV=0.92
    {33329,4992,1040, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=7.07  BV=0.80
    {33329,5376,1032, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=7.17  BV=0.71
    {33329,5760,1032, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=7.27  BV=0.61
    {41669,4992,1024, 0, 0, 0},  //TV = 4.58(3936 lines)  AV=2.97  SV=7.05  BV=0.50
    {41669,5248,1040, 0, 0, 0},  //TV = 4.58(3936 lines)  AV=2.97  SV=7.15  BV=0.41
    {41669,5632,1040, 0, 0, 0},  //TV = 4.58(3936 lines)  AV=2.97  SV=7.25  BV=0.31
    {49999,5120,1024, 0, 0, 0},  //TV = 4.32(4724 lines)  AV=2.97  SV=7.09  BV=0.21
    {49999,5376,1048, 0, 0, 0},  //TV = 4.32(4724 lines)  AV=2.97  SV=7.19  BV=0.10
    {58328,4992,1040, 0, 0, 0},  //TV = 4.10(5510 lines)  AV=2.97  SV=7.07  BV=-0.00
    {58328,5376,1032, 0, 0, 0},  //TV = 4.10(5510 lines)  AV=2.97  SV=7.17  BV=-0.10
    {66669,4992,1048, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=7.08  BV=-0.21
    {66669,5376,1040, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=7.18  BV=-0.30
    {74998,5120,1040, 0, 0, 0},  //TV = 3.74(7085 lines)  AV=2.97  SV=7.11  BV=-0.40
    {83327,4992,1032, 0, 0, 0},  //TV = 3.59(7872 lines)  AV=2.97  SV=7.06  BV=-0.51
    {83327,5376,1024, 0, 0, 0},  //TV = 3.59(7872 lines)  AV=2.97  SV=7.16  BV=-0.60
    {91668,5248,1024, 0, 0, 0},  //TV = 3.45(8660 lines)  AV=2.97  SV=7.12  BV=-0.70
    {99998,5120,1032, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=7.10  BV=-0.81
    {108327,4992,1048, 0, 0, 0},  //TV = 3.21(10234 lines)  AV=2.97  SV=7.08  BV=-0.91
    {116667,4992,1040, 0, 0, 0},  //TV = 3.10(11022 lines)  AV=2.97  SV=7.07  BV=-1.00
    {124997,4992,1040, 0, 0, 0},  //TV = 3.00(11809 lines)  AV=2.97  SV=7.07  BV=-1.10
    {133326,4992,1048, 0, 0, 0},  //TV = 2.91(12596 lines)  AV=2.97  SV=7.08  BV=-1.21
    {141656,5120,1024, 0, 0, 0},  //TV = 2.82(13383 lines)  AV=2.97  SV=7.09  BV=-1.30
    {158326,4864,1040, 0, 0, 0},  //TV = 2.66(14958 lines)  AV=2.97  SV=7.04  BV=-1.41
    {166655,4992,1032, 0, 0, 0},  //TV = 2.59(15745 lines)  AV=2.97  SV=7.06  BV=-1.51
    {174996,5120,1024, 0, 0, 0},  //TV = 2.51(16534 lines)  AV=2.97  SV=7.09  BV=-1.60
    {191655,4992,1024, 0, 0, 0},  //TV = 2.38(18107 lines)  AV=2.97  SV=7.05  BV=-1.70
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCaptureISO400PLineTable_50Hz =
{
{
    {95,1216,1064, 0, 0, 0},  //TV = 13.36(8 lines)  AV=2.97  SV=5.07  BV=11.26
    {105,1136,1088, 0, 0, 0},  //TV = 13.22(9 lines)  AV=2.97  SV=5.00  BV=11.19
    {105,1216,1072, 0, 0, 0},  //TV = 13.22(9 lines)  AV=2.97  SV=5.08  BV=11.11
    {116,1216,1064, 0, 0, 0},  //TV = 13.07(10 lines)  AV=2.97  SV=5.07  BV=10.98
    {127,1216,1040, 0, 0, 0},  //TV = 12.94(11 lines)  AV=2.97  SV=5.04  BV=10.88
    {137,1136,1096, 0, 0, 0},  //TV = 12.83(12 lines)  AV=2.97  SV=5.01  BV=10.79
    {137,1216,1088, 0, 0, 0},  //TV = 12.83(12 lines)  AV=2.97  SV=5.10  BV=10.70
    {158,1136,1096, 0, 0, 0},  //TV = 12.63(14 lines)  AV=2.97  SV=5.01  BV=10.59
    {169,1216,1024, 0, 0, 0},  //TV = 12.53(15 lines)  AV=2.97  SV=5.01  BV=10.49
    {179,1216,1048, 0, 0, 0},  //TV = 12.45(16 lines)  AV=2.97  SV=5.05  BV=10.37
    {190,1216,1064, 0, 0, 0},  //TV = 12.36(17 lines)  AV=2.97  SV=5.07  BV=10.26
    {201,1216,1040, 0, 0, 0},  //TV = 12.28(18 lines)  AV=2.97  SV=5.04  BV=10.22
    {222,1136,1088, 0, 0, 0},  //TV = 12.14(20 lines)  AV=2.97  SV=5.00  BV=10.11
    {232,1216,1040, 0, 0, 0},  //TV = 12.07(21 lines)  AV=2.97  SV=5.04  BV=10.01
    {254,1136,1088, 0, 0, 0},  //TV = 11.94(23 lines)  AV=2.97  SV=5.00  BV=9.91
    {264,1216,1048, 0, 0, 0},  //TV = 11.89(24 lines)  AV=2.97  SV=5.05  BV=9.81
    {285,1216,1040, 0, 0, 0},  //TV = 11.78(26 lines)  AV=2.97  SV=5.04  BV=9.71
    {306,1216,1040, 0, 0, 0},  //TV = 11.67(28 lines)  AV=2.97  SV=5.04  BV=9.61
    {328,1216,1040, 0, 0, 0},  //TV = 11.57(30 lines)  AV=2.97  SV=5.04  BV=9.51
    {359,1136,1096, 0, 0, 0},  //TV = 11.44(33 lines)  AV=2.97  SV=5.01  BV=9.40
    {381,1216,1024, 0, 0, 0},  //TV = 11.36(35 lines)  AV=2.97  SV=5.01  BV=9.32
    {412,1136,1096, 0, 0, 0},  //TV = 11.25(38 lines)  AV=2.97  SV=5.01  BV=9.20
    {444,1136,1088, 0, 0, 0},  //TV = 11.14(41 lines)  AV=2.97  SV=5.00  BV=9.11
    {476,1136,1088, 0, 0, 0},  //TV = 11.04(44 lines)  AV=2.97  SV=5.00  BV=9.00
    {497,1216,1040, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.04  BV=8.91
    {497,1216,1112, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.13  BV=8.81
    {497,1328,1096, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.24  BV=8.71
    {497,1424,1088, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.33  BV=8.62
    {497,1632,1024, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.44  BV=8.51
    {497,1728,1032, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.53  BV=8.41
    {497,1840,1040, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.63  BV=8.31
    {497,1936,1064, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.74  BV=8.21
    {497,2144,1024, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.83  BV=8.11
    {497,2240,1048, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.93  BV=8.02
    {497,2448,1032, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=6.03  BV=7.91
    {497,2560,1056, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=6.13  BV=7.81
    {497,2752,1056, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=6.24  BV=7.71
    {497,2960,1056, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=6.34  BV=7.60
    {497,3200,1040, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=6.43  BV=7.51
    {497,3456,1032, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=6.53  BV=7.41
    {497,3712,1032, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=6.63  BV=7.31
    {497,3968,1040, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=6.74  BV=7.20
    {497,4224,1040, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=6.83  BV=7.11
    {497,4608,1024, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=6.94  BV=7.01
    {497,4864,1040, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=7.04  BV=6.91
    {529,4864,1048, 0, 0, 0},  //TV = 10.88(49 lines)  AV=2.97  SV=7.05  BV=6.81
    {571,4864,1040, 0, 0, 0},  //TV = 10.77(53 lines)  AV=2.97  SV=7.04  BV=6.71
    {613,4864,1040, 0, 0, 0},  //TV = 10.67(57 lines)  AV=2.97  SV=7.04  BV=6.61
    {656,4864,1040, 0, 0, 0},  //TV = 10.57(61 lines)  AV=2.97  SV=7.04  BV=6.51
    {698,4864,1040, 0, 0, 0},  //TV = 10.48(65 lines)  AV=2.97  SV=7.04  BV=6.42
    {751,4864,1040, 0, 0, 0},  //TV = 10.38(70 lines)  AV=2.97  SV=7.04  BV=6.31
    {804,4864,1040, 0, 0, 0},  //TV = 10.28(75 lines)  AV=2.97  SV=7.04  BV=6.22
    {867,4864,1040, 0, 0, 0},  //TV = 10.17(81 lines)  AV=2.97  SV=7.04  BV=6.11
    {931,4864,1032, 0, 0, 0},  //TV = 10.07(87 lines)  AV=2.97  SV=7.02  BV=6.02
    {994,4864,1040, 0, 0, 0},  //TV = 9.97(93 lines)  AV=2.97  SV=7.04  BV=5.91
    {1068,4864,1040, 0, 0, 0},  //TV = 9.87(100 lines)  AV=2.97  SV=7.04  BV=5.81
    {1143,4864,1040, 0, 0, 0},  //TV = 9.77(107 lines)  AV=2.97  SV=7.04  BV=5.71
    {1227,4864,1032, 0, 0, 0},  //TV = 9.67(115 lines)  AV=2.97  SV=7.02  BV=5.62
    {1312,4864,1040, 0, 0, 0},  //TV = 9.57(123 lines)  AV=2.97  SV=7.04  BV=5.51
    {1407,4864,1032, 0, 0, 0},  //TV = 9.47(132 lines)  AV=2.97  SV=7.02  BV=5.42
    {1513,4864,1032, 0, 0, 0},  //TV = 9.37(142 lines)  AV=2.97  SV=7.02  BV=5.31
    {1619,4864,1032, 0, 0, 0},  //TV = 9.27(152 lines)  AV=2.97  SV=7.02  BV=5.22
    {1735,4864,1040, 0, 0, 0},  //TV = 9.17(163 lines)  AV=2.97  SV=7.04  BV=5.11
    {1862,4864,1032, 0, 0, 0},  //TV = 9.07(175 lines)  AV=2.97  SV=7.02  BV=5.02
    {2000,4864,1032, 0, 0, 0},  //TV = 8.97(188 lines)  AV=2.97  SV=7.02  BV=4.91
    {2137,4864,1032, 0, 0, 0},  //TV = 8.87(201 lines)  AV=2.97  SV=7.02  BV=4.82
    {2286,4864,1032, 0, 0, 0},  //TV = 8.77(215 lines)  AV=2.97  SV=7.02  BV=4.72
    {2466,4864,1032, 0, 0, 0},  //TV = 8.66(232 lines)  AV=2.97  SV=7.02  BV=4.61
    {2635,4864,1032, 0, 0, 0},  //TV = 8.57(248 lines)  AV=2.97  SV=7.02  BV=4.51
    {2825,4864,1032, 0, 0, 0},  //TV = 8.47(266 lines)  AV=2.97  SV=7.02  BV=4.41
    {3016,4864,1032, 0, 0, 0},  //TV = 8.37(284 lines)  AV=2.97  SV=7.02  BV=4.32
    {3259,4864,1032, 0, 0, 0},  //TV = 8.26(307 lines)  AV=2.97  SV=7.02  BV=4.21
    {3482,4864,1032, 0, 0, 0},  //TV = 8.17(328 lines)  AV=2.97  SV=7.02  BV=4.11
    {3725,4864,1032, 0, 0, 0},  //TV = 8.07(351 lines)  AV=2.97  SV=7.02  BV=4.01
    {3990,4864,1032, 0, 0, 0},  //TV = 7.97(376 lines)  AV=2.97  SV=7.02  BV=3.92
    {4297,4864,1032, 0, 0, 0},  //TV = 7.86(405 lines)  AV=2.97  SV=7.02  BV=3.81
    {4604,4864,1032, 0, 0, 0},  //TV = 7.76(434 lines)  AV=2.97  SV=7.02  BV=3.71
    {4932,4864,1032, 0, 0, 0},  //TV = 7.66(465 lines)  AV=2.97  SV=7.02  BV=3.61
    {5281,4864,1032, 0, 0, 0},  //TV = 7.56(498 lines)  AV=2.97  SV=7.02  BV=3.51
    {5651,4864,1032, 0, 0, 0},  //TV = 7.47(533 lines)  AV=2.97  SV=7.02  BV=3.41
    {6054,4864,1032, 0, 0, 0},  //TV = 7.37(571 lines)  AV=2.97  SV=7.02  BV=3.31
    {6487,4864,1032, 0, 0, 0},  //TV = 7.27(612 lines)  AV=2.97  SV=7.02  BV=3.21
    {6943,4864,1032, 0, 0, 0},  //TV = 7.17(655 lines)  AV=2.97  SV=7.02  BV=3.12
    {7440,4864,1032, 0, 0, 0},  //TV = 7.07(702 lines)  AV=2.97  SV=7.02  BV=3.02
    {7969,4864,1032, 0, 0, 0},  //TV = 6.97(752 lines)  AV=2.97  SV=7.02  BV=2.92
    {8594,4864,1032, 0, 0, 0},  //TV = 6.86(811 lines)  AV=2.97  SV=7.02  BV=2.81
    {9208,4864,1032, 0, 0, 0},  //TV = 6.76(869 lines)  AV=2.97  SV=7.02  BV=2.71
    {9864,4864,1032, 0, 0, 0},  //TV = 6.66(931 lines)  AV=2.97  SV=7.02  BV=2.61
    {10002,5120,1040, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=7.11  BV=2.50
    {10002,5504,1032, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=7.20  BV=2.41
    {10002,5888,1032, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=7.30  BV=2.31
    {10002,6384,1024, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=7.41  BV=2.21
    {10002,6704,1040, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=7.50  BV=2.12
    {10002,7280,1032, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=7.61  BV=2.01
    {10002,7696,1040, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=7.70  BV=1.92
    {10002,8192,1048, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=7.80  BV=1.82
    {10002,8192,1128, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=7.91  BV=1.71
    {10002,8192,1208, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=8.00  BV=1.61
    {20004,5120,1032, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=7.10  BV=1.52
    {20004,5504,1032, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=7.20  BV=1.41
    {20004,5888,1032, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=7.30  BV=1.31
    {20004,6384,1024, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=7.41  BV=1.21
    {20004,6704,1040, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=7.50  BV=1.12
    {20004,7280,1024, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=7.60  BV=1.02
    {29995,5248,1024, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=7.12  BV=0.91
    {29995,5632,1024, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=7.22  BV=0.81
    {29995,5888,1040, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=7.31  BV=0.72
    {29995,6384,1040, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=7.43  BV=0.60
    {39996,5120,1040, 0, 0, 0},  //TV = 4.64(3778 lines)  AV=2.97  SV=7.11  BV=0.51
    {39996,5504,1032, 0, 0, 0},  //TV = 4.64(3778 lines)  AV=2.97  SV=7.20  BV=0.41
    {39996,5888,1040, 0, 0, 0},  //TV = 4.64(3778 lines)  AV=2.97  SV=7.31  BV=0.30
    {49998,5120,1024, 0, 0, 0},  //TV = 4.32(4723 lines)  AV=2.97  SV=7.09  BV=0.21
    {49998,5376,1048, 0, 0, 0},  //TV = 4.32(4723 lines)  AV=2.97  SV=7.19  BV=0.10
    {60001,4864,1040, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=7.04  BV=-0.01
    {60001,5248,1032, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=7.13  BV=-0.10
    {60001,5632,1032, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=7.24  BV=-0.21
    {70002,5120,1040, 0, 0, 0},  //TV = 3.84(6613 lines)  AV=2.97  SV=7.11  BV=-0.30
    {70002,5504,1040, 0, 0, 0},  //TV = 3.84(6613 lines)  AV=2.97  SV=7.21  BV=-0.41
    {80004,5120,1048, 0, 0, 0},  //TV = 3.64(7558 lines)  AV=2.97  SV=7.12  BV=-0.51
    {89995,4992,1024, 0, 0, 0},  //TV = 3.47(8502 lines)  AV=2.97  SV=7.05  BV=-0.61
    {89995,5248,1040, 0, 0, 0},  //TV = 3.47(8502 lines)  AV=2.97  SV=7.15  BV=-0.70
    {99997,5120,1032, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=7.10  BV=-0.81
    {109999,4992,1032, 0, 0, 0},  //TV = 3.18(10392 lines)  AV=2.97  SV=7.06  BV=-0.91
    {120001,4864,1040, 0, 0, 0},  //TV = 3.06(11337 lines)  AV=2.97  SV=7.04  BV=-1.01
    {120001,5248,1032, 0, 0, 0},  //TV = 3.06(11337 lines)  AV=2.97  SV=7.13  BV=-1.10
    {130003,5120,1048, 0, 0, 0},  //TV = 2.94(12282 lines)  AV=2.97  SV=7.12  BV=-1.21
    {140005,5120,1040, 0, 0, 0},  //TV = 2.84(13227 lines)  AV=2.97  SV=7.11  BV=-1.30
    {149996,5120,1040, 0, 0, 0},  //TV = 2.74(14171 lines)  AV=2.97  SV=7.11  BV=-1.40
    {169989,4864,1032, 0, 0, 0},  //TV = 2.56(16060 lines)  AV=2.97  SV=7.02  BV=-1.50
    {180002,4864,1048, 0, 0, 0},  //TV = 2.47(17006 lines)  AV=2.97  SV=7.05  BV=-1.60
    {190004,4992,1040, 0, 0, 0},  //TV = 2.40(17952 lines)  AV=2.97  SV=7.07  BV=-1.71
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_CaptureISO400Table =
{
    AETABLE_CAPTURE_ISO400,    //eAETableID
    131,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    113,    //i4MaxBV
    -17,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_400, //ISO SPEED
    sCaptureISO400PLineTable_60Hz,
    sCaptureISO400PLineTable_50Hz,
    NULL,
};

static strEvPline sCaptureISO800PLineTable_60Hz =
{
{
    {95,1216,1064, 0, 0, 0},  //TV = 13.36(8 lines)  AV=2.97  SV=5.07  BV=11.26
    {105,1136,1088, 0, 0, 0},  //TV = 13.22(9 lines)  AV=2.97  SV=5.00  BV=11.19
    {105,1216,1072, 0, 0, 0},  //TV = 13.22(9 lines)  AV=2.97  SV=5.08  BV=11.11
    {116,1216,1064, 0, 0, 0},  //TV = 13.07(10 lines)  AV=2.97  SV=5.07  BV=10.98
    {127,1216,1040, 0, 0, 0},  //TV = 12.94(11 lines)  AV=2.97  SV=5.04  BV=10.88
    {137,1136,1096, 0, 0, 0},  //TV = 12.83(12 lines)  AV=2.97  SV=5.01  BV=10.79
    {137,1216,1088, 0, 0, 0},  //TV = 12.83(12 lines)  AV=2.97  SV=5.10  BV=10.70
    {158,1136,1096, 0, 0, 0},  //TV = 12.63(14 lines)  AV=2.97  SV=5.01  BV=10.59
    {169,1216,1024, 0, 0, 0},  //TV = 12.53(15 lines)  AV=2.97  SV=5.01  BV=10.49
    {179,1216,1048, 0, 0, 0},  //TV = 12.45(16 lines)  AV=2.97  SV=5.05  BV=10.37
    {190,1216,1064, 0, 0, 0},  //TV = 12.36(17 lines)  AV=2.97  SV=5.07  BV=10.26
    {201,1216,1040, 0, 0, 0},  //TV = 12.28(18 lines)  AV=2.97  SV=5.04  BV=10.22
    {222,1136,1088, 0, 0, 0},  //TV = 12.14(20 lines)  AV=2.97  SV=5.00  BV=10.11
    {232,1216,1040, 0, 0, 0},  //TV = 12.07(21 lines)  AV=2.97  SV=5.04  BV=10.01
    {254,1136,1088, 0, 0, 0},  //TV = 11.94(23 lines)  AV=2.97  SV=5.00  BV=9.91
    {264,1216,1048, 0, 0, 0},  //TV = 11.89(24 lines)  AV=2.97  SV=5.05  BV=9.81
    {285,1216,1040, 0, 0, 0},  //TV = 11.78(26 lines)  AV=2.97  SV=5.04  BV=9.71
    {306,1216,1040, 0, 0, 0},  //TV = 11.67(28 lines)  AV=2.97  SV=5.04  BV=9.61
    {328,1216,1040, 0, 0, 0},  //TV = 11.57(30 lines)  AV=2.97  SV=5.04  BV=9.51
    {359,1136,1096, 0, 0, 0},  //TV = 11.44(33 lines)  AV=2.97  SV=5.01  BV=9.40
    {381,1216,1024, 0, 0, 0},  //TV = 11.36(35 lines)  AV=2.97  SV=5.01  BV=9.32
    {412,1136,1096, 0, 0, 0},  //TV = 11.25(38 lines)  AV=2.97  SV=5.01  BV=9.20
    {444,1136,1088, 0, 0, 0},  //TV = 11.14(41 lines)  AV=2.97  SV=5.00  BV=9.11
    {476,1136,1088, 0, 0, 0},  //TV = 11.04(44 lines)  AV=2.97  SV=5.00  BV=9.00
    {497,1216,1040, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.04  BV=8.91
    {497,1216,1112, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.13  BV=8.81
    {497,1328,1096, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.24  BV=8.71
    {497,1424,1088, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.33  BV=8.62
    {497,1632,1024, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.44  BV=8.51
    {497,1728,1032, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.53  BV=8.41
    {497,1840,1040, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.63  BV=8.31
    {497,1936,1064, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.74  BV=8.21
    {497,2144,1024, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.83  BV=8.11
    {497,2240,1048, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.93  BV=8.02
    {497,2448,1032, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=6.03  BV=7.91
    {497,2560,1056, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=6.13  BV=7.81
    {497,2752,1056, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=6.24  BV=7.71
    {497,2960,1056, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=6.34  BV=7.60
    {497,3200,1040, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=6.43  BV=7.51
    {497,3456,1032, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=6.53  BV=7.41
    {497,3712,1032, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=6.63  BV=7.31
    {497,3968,1040, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=6.74  BV=7.20
    {497,4224,1040, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=6.83  BV=7.11
    {497,4608,1024, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=6.94  BV=7.01
    {497,4864,1040, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=7.04  BV=6.91
    {497,5248,1032, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=7.13  BV=6.81
    {497,5632,1032, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=7.24  BV=6.71
    {497,6016,1032, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=7.33  BV=6.61
    {497,6544,1024, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=7.44  BV=6.50
    {497,6896,1040, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=7.54  BV=6.41
    {497,7472,1024, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=7.63  BV=6.31
    {497,7936,1032, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=7.73  BV=6.21
    {497,8192,1072, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=7.83  BV=6.11
    {497,8192,1152, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=7.94  BV=6.01
    {497,8192,1232, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=8.03  BV=5.91
    {529,8192,1240, 0, 0, 0},  //TV = 10.88(49 lines)  AV=2.97  SV=8.04  BV=5.81
    {571,8192,1232, 0, 0, 0},  //TV = 10.77(53 lines)  AV=2.97  SV=8.03  BV=5.71
    {613,8192,1240, 0, 0, 0},  //TV = 10.67(57 lines)  AV=2.97  SV=8.04  BV=5.60
    {656,8192,1240, 0, 0, 0},  //TV = 10.57(61 lines)  AV=2.97  SV=8.04  BV=5.50
    {698,8192,1240, 0, 0, 0},  //TV = 10.48(65 lines)  AV=2.97  SV=8.04  BV=5.41
    {751,8192,1240, 0, 0, 0},  //TV = 10.38(70 lines)  AV=2.97  SV=8.04  BV=5.31
    {804,8192,1240, 0, 0, 0},  //TV = 10.28(75 lines)  AV=2.97  SV=8.04  BV=5.21
    {867,8192,1232, 0, 0, 0},  //TV = 10.17(81 lines)  AV=2.97  SV=8.03  BV=5.11
    {931,8192,1232, 0, 0, 0},  //TV = 10.07(87 lines)  AV=2.97  SV=8.03  BV=5.01
    {994,8192,1232, 0, 0, 0},  //TV = 9.97(93 lines)  AV=2.97  SV=8.03  BV=4.91
    {1068,8192,1232, 0, 0, 0},  //TV = 9.87(100 lines)  AV=2.97  SV=8.03  BV=4.81
    {1143,8192,1232, 0, 0, 0},  //TV = 9.77(107 lines)  AV=2.97  SV=8.03  BV=4.71
    {1227,8192,1232, 0, 0, 0},  //TV = 9.67(115 lines)  AV=2.97  SV=8.03  BV=4.61
    {1312,8192,1232, 0, 0, 0},  //TV = 9.57(123 lines)  AV=2.97  SV=8.03  BV=4.51
    {1407,8192,1232, 0, 0, 0},  //TV = 9.47(132 lines)  AV=2.97  SV=8.03  BV=4.41
    {1513,8192,1232, 0, 0, 0},  //TV = 9.37(142 lines)  AV=2.97  SV=8.03  BV=4.31
    {1619,8192,1232, 0, 0, 0},  //TV = 9.27(152 lines)  AV=2.97  SV=8.03  BV=4.21
    {1735,8192,1232, 0, 0, 0},  //TV = 9.17(163 lines)  AV=2.97  SV=8.03  BV=4.11
    {1862,8192,1224, 0, 0, 0},  //TV = 9.07(175 lines)  AV=2.97  SV=8.02  BV=4.02
    {2000,8192,1232, 0, 0, 0},  //TV = 8.97(188 lines)  AV=2.97  SV=8.03  BV=3.90
    {2137,8192,1232, 0, 0, 0},  //TV = 8.87(201 lines)  AV=2.97  SV=8.03  BV=3.81
    {2286,8192,1232, 0, 0, 0},  //TV = 8.77(215 lines)  AV=2.97  SV=8.03  BV=3.71
    {2466,8192,1232, 0, 0, 0},  //TV = 8.66(232 lines)  AV=2.97  SV=8.03  BV=3.60
    {2635,8192,1232, 0, 0, 0},  //TV = 8.57(248 lines)  AV=2.97  SV=8.03  BV=3.51
    {2825,8192,1224, 0, 0, 0},  //TV = 8.47(266 lines)  AV=2.97  SV=8.02  BV=3.42
    {3016,8192,1232, 0, 0, 0},  //TV = 8.37(284 lines)  AV=2.97  SV=8.03  BV=3.31
    {3259,8192,1224, 0, 0, 0},  //TV = 8.26(307 lines)  AV=2.97  SV=8.02  BV=3.21
    {3482,8192,1232, 0, 0, 0},  //TV = 8.17(328 lines)  AV=2.97  SV=8.03  BV=3.10
    {3725,8192,1232, 0, 0, 0},  //TV = 8.07(351 lines)  AV=2.97  SV=8.03  BV=3.01
    {3990,8192,1232, 0, 0, 0},  //TV = 7.97(376 lines)  AV=2.97  SV=8.03  BV=2.91
    {4275,8192,1224, 0, 0, 0},  //TV = 7.87(403 lines)  AV=2.97  SV=8.02  BV=2.82
    {4604,8192,1224, 0, 0, 0},  //TV = 7.76(434 lines)  AV=2.97  SV=8.02  BV=2.71
    {4932,8192,1224, 0, 0, 0},  //TV = 7.66(465 lines)  AV=2.97  SV=8.02  BV=2.61
    {5281,8192,1224, 0, 0, 0},  //TV = 7.56(498 lines)  AV=2.97  SV=8.02  BV=2.51
    {5651,8192,1232, 0, 0, 0},  //TV = 7.47(533 lines)  AV=2.97  SV=8.03  BV=2.41
    {6054,8192,1224, 0, 0, 0},  //TV = 7.37(571 lines)  AV=2.97  SV=8.02  BV=2.32
    {6487,8192,1224, 0, 0, 0},  //TV = 7.27(612 lines)  AV=2.97  SV=8.02  BV=2.22
    {6943,8192,1232, 0, 0, 0},  //TV = 7.17(655 lines)  AV=2.97  SV=8.03  BV=2.11
    {7493,8192,1224, 0, 0, 0},  //TV = 7.06(707 lines)  AV=2.97  SV=8.02  BV=2.01
    {8022,8192,1232, 0, 0, 0},  //TV = 6.96(757 lines)  AV=2.97  SV=8.03  BV=1.90
    {8329,8192,1264, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=8.07  BV=1.81
    {8329,8192,1360, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=8.17  BV=1.70
    {8329,8192,1456, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=8.27  BV=1.61
    {8329,8192,1560, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=8.37  BV=1.51
    {8329,8192,1672, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=8.47  BV=1.41
    {8329,8192,1792, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=8.57  BV=1.31
    {8329,8192,1920, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=8.67  BV=1.21
    {8329,8192,2056, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=8.77  BV=1.11
    {8329,8192,2200, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=8.87  BV=1.01
    {8329,8192,2360, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=8.97  BV=0.91
    {16670,8192,1264, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=8.07  BV=0.81
    {16670,8192,1352, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=8.17  BV=0.71
    {16670,8192,1448, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=8.27  BV=0.61
    {16670,8192,1552, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=8.37  BV=0.51
    {16670,8192,1664, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=8.47  BV=0.41
    {16670,8192,1784, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=8.57  BV=0.31
    {24988,8192,1272, 0, 0, 0},  //TV = 5.32(2360 lines)  AV=2.97  SV=8.08  BV=0.22
    {24988,8192,1376, 0, 0, 0},  //TV = 5.32(2360 lines)  AV=2.97  SV=8.19  BV=0.10
    {24988,8192,1480, 0, 0, 0},  //TV = 5.32(2360 lines)  AV=2.97  SV=8.30  BV=-0.00
    {24988,8192,1592, 0, 0, 0},  //TV = 5.32(2360 lines)  AV=2.97  SV=8.40  BV=-0.11
    {33329,8192,1280, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=8.09  BV=-0.21
    {33329,8192,1368, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=8.18  BV=-0.31
    {33329,8192,1464, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=8.28  BV=-0.40
    {41669,8192,1256, 0, 0, 0},  //TV = 4.58(3936 lines)  AV=2.97  SV=8.06  BV=-0.50
    {41669,8192,1344, 0, 0, 0},  //TV = 4.58(3936 lines)  AV=2.97  SV=8.16  BV=-0.60
    {41669,8192,1440, 0, 0, 0},  //TV = 4.58(3936 lines)  AV=2.97  SV=8.26  BV=-0.70
    {49999,8192,1288, 0, 0, 0},  //TV = 4.32(4724 lines)  AV=2.97  SV=8.10  BV=-0.80
    {49999,8192,1384, 0, 0, 0},  //TV = 4.32(4724 lines)  AV=2.97  SV=8.20  BV=-0.91
    {58328,8192,1272, 0, 0, 0},  //TV = 4.10(5510 lines)  AV=2.97  SV=8.08  BV=-1.01
    {58328,8192,1360, 0, 0, 0},  //TV = 4.10(5510 lines)  AV=2.97  SV=8.17  BV=-1.10
    {66669,8192,1272, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=8.08  BV=-1.20
    {66669,8192,1368, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=8.18  BV=-1.31
    {74998,8192,1304, 0, 0, 0},  //TV = 3.74(7085 lines)  AV=2.97  SV=8.11  BV=-1.41
    {83327,8192,1256, 0, 0, 0},  //TV = 3.59(7872 lines)  AV=2.97  SV=8.06  BV=-1.50
    {83327,8192,1344, 0, 0, 0},  //TV = 3.59(7872 lines)  AV=2.97  SV=8.16  BV=-1.60
    {91668,8192,1312, 0, 0, 0},  //TV = 3.45(8660 lines)  AV=2.97  SV=8.12  BV=-1.70
    {99998,8192,1288, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=8.10  BV=-1.80
    {108327,8192,1272, 0, 0, 0},  //TV = 3.21(10234 lines)  AV=2.97  SV=8.08  BV=-1.90
    {116667,8192,1264, 0, 0, 0},  //TV = 3.10(11022 lines)  AV=2.97  SV=8.07  BV=-2.00
    {124997,8192,1272, 0, 0, 0},  //TV = 3.00(11809 lines)  AV=2.97  SV=8.08  BV=-2.11
    {133326,8192,1272, 0, 0, 0},  //TV = 2.91(12596 lines)  AV=2.97  SV=8.08  BV=-2.20
    {141656,8192,1288, 0, 0, 0},  //TV = 2.82(13383 lines)  AV=2.97  SV=8.10  BV=-2.31
    {158326,8192,1232, 0, 0, 0},  //TV = 2.66(14958 lines)  AV=2.97  SV=8.03  BV=-2.40
    {166655,8192,1256, 0, 0, 0},  //TV = 2.59(15745 lines)  AV=2.97  SV=8.06  BV=-2.50
    {174996,8192,1280, 0, 0, 0},  //TV = 2.51(16534 lines)  AV=2.97  SV=8.09  BV=-2.60
    {191655,8192,1256, 0, 0, 0},  //TV = 2.38(18107 lines)  AV=2.97  SV=8.06  BV=-2.71
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCaptureISO800PLineTable_50Hz =
{
{
    {95,1216,1064, 0, 0, 0},  //TV = 13.36(8 lines)  AV=2.97  SV=5.07  BV=11.26
    {105,1136,1088, 0, 0, 0},  //TV = 13.22(9 lines)  AV=2.97  SV=5.00  BV=11.19
    {105,1216,1072, 0, 0, 0},  //TV = 13.22(9 lines)  AV=2.97  SV=5.08  BV=11.11
    {116,1216,1064, 0, 0, 0},  //TV = 13.07(10 lines)  AV=2.97  SV=5.07  BV=10.98
    {127,1216,1040, 0, 0, 0},  //TV = 12.94(11 lines)  AV=2.97  SV=5.04  BV=10.88
    {137,1136,1096, 0, 0, 0},  //TV = 12.83(12 lines)  AV=2.97  SV=5.01  BV=10.79
    {137,1216,1088, 0, 0, 0},  //TV = 12.83(12 lines)  AV=2.97  SV=5.10  BV=10.70
    {158,1136,1096, 0, 0, 0},  //TV = 12.63(14 lines)  AV=2.97  SV=5.01  BV=10.59
    {169,1216,1024, 0, 0, 0},  //TV = 12.53(15 lines)  AV=2.97  SV=5.01  BV=10.49
    {179,1216,1048, 0, 0, 0},  //TV = 12.45(16 lines)  AV=2.97  SV=5.05  BV=10.37
    {190,1216,1064, 0, 0, 0},  //TV = 12.36(17 lines)  AV=2.97  SV=5.07  BV=10.26
    {201,1216,1040, 0, 0, 0},  //TV = 12.28(18 lines)  AV=2.97  SV=5.04  BV=10.22
    {222,1136,1088, 0, 0, 0},  //TV = 12.14(20 lines)  AV=2.97  SV=5.00  BV=10.11
    {232,1216,1040, 0, 0, 0},  //TV = 12.07(21 lines)  AV=2.97  SV=5.04  BV=10.01
    {254,1136,1088, 0, 0, 0},  //TV = 11.94(23 lines)  AV=2.97  SV=5.00  BV=9.91
    {264,1216,1048, 0, 0, 0},  //TV = 11.89(24 lines)  AV=2.97  SV=5.05  BV=9.81
    {285,1216,1040, 0, 0, 0},  //TV = 11.78(26 lines)  AV=2.97  SV=5.04  BV=9.71
    {306,1216,1040, 0, 0, 0},  //TV = 11.67(28 lines)  AV=2.97  SV=5.04  BV=9.61
    {328,1216,1040, 0, 0, 0},  //TV = 11.57(30 lines)  AV=2.97  SV=5.04  BV=9.51
    {359,1136,1096, 0, 0, 0},  //TV = 11.44(33 lines)  AV=2.97  SV=5.01  BV=9.40
    {381,1216,1024, 0, 0, 0},  //TV = 11.36(35 lines)  AV=2.97  SV=5.01  BV=9.32
    {412,1136,1096, 0, 0, 0},  //TV = 11.25(38 lines)  AV=2.97  SV=5.01  BV=9.20
    {444,1136,1088, 0, 0, 0},  //TV = 11.14(41 lines)  AV=2.97  SV=5.00  BV=9.11
    {476,1136,1088, 0, 0, 0},  //TV = 11.04(44 lines)  AV=2.97  SV=5.00  BV=9.00
    {497,1216,1040, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.04  BV=8.91
    {497,1216,1112, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.13  BV=8.81
    {497,1328,1096, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.24  BV=8.71
    {497,1424,1088, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.33  BV=8.62
    {497,1632,1024, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.44  BV=8.51
    {497,1728,1032, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.53  BV=8.41
    {497,1840,1040, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.63  BV=8.31
    {497,1936,1064, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.74  BV=8.21
    {497,2144,1024, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.83  BV=8.11
    {497,2240,1048, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.93  BV=8.02
    {497,2448,1032, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=6.03  BV=7.91
    {497,2560,1056, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=6.13  BV=7.81
    {497,2752,1056, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=6.24  BV=7.71
    {497,2960,1056, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=6.34  BV=7.60
    {497,3200,1040, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=6.43  BV=7.51
    {497,3456,1032, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=6.53  BV=7.41
    {497,3712,1032, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=6.63  BV=7.31
    {497,3968,1040, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=6.74  BV=7.20
    {497,4224,1040, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=6.83  BV=7.11
    {497,4608,1024, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=6.94  BV=7.01
    {497,4864,1040, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=7.04  BV=6.91
    {497,5248,1032, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=7.13  BV=6.81
    {497,5632,1032, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=7.24  BV=6.71
    {497,6016,1032, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=7.33  BV=6.61
    {497,6544,1024, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=7.44  BV=6.50
    {497,6896,1040, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=7.54  BV=6.41
    {497,7472,1024, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=7.63  BV=6.31
    {497,7936,1032, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=7.73  BV=6.21
    {497,8192,1072, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=7.83  BV=6.11
    {497,8192,1152, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=7.94  BV=6.01
    {497,8192,1232, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=8.03  BV=5.91
    {529,8192,1240, 0, 0, 0},  //TV = 10.88(49 lines)  AV=2.97  SV=8.04  BV=5.81
    {571,8192,1232, 0, 0, 0},  //TV = 10.77(53 lines)  AV=2.97  SV=8.03  BV=5.71
    {613,8192,1240, 0, 0, 0},  //TV = 10.67(57 lines)  AV=2.97  SV=8.04  BV=5.60
    {656,8192,1240, 0, 0, 0},  //TV = 10.57(61 lines)  AV=2.97  SV=8.04  BV=5.50
    {698,8192,1240, 0, 0, 0},  //TV = 10.48(65 lines)  AV=2.97  SV=8.04  BV=5.41
    {751,8192,1240, 0, 0, 0},  //TV = 10.38(70 lines)  AV=2.97  SV=8.04  BV=5.31
    {804,8192,1240, 0, 0, 0},  //TV = 10.28(75 lines)  AV=2.97  SV=8.04  BV=5.21
    {867,8192,1232, 0, 0, 0},  //TV = 10.17(81 lines)  AV=2.97  SV=8.03  BV=5.11
    {931,8192,1232, 0, 0, 0},  //TV = 10.07(87 lines)  AV=2.97  SV=8.03  BV=5.01
    {994,8192,1232, 0, 0, 0},  //TV = 9.97(93 lines)  AV=2.97  SV=8.03  BV=4.91
    {1068,8192,1232, 0, 0, 0},  //TV = 9.87(100 lines)  AV=2.97  SV=8.03  BV=4.81
    {1143,8192,1232, 0, 0, 0},  //TV = 9.77(107 lines)  AV=2.97  SV=8.03  BV=4.71
    {1227,8192,1232, 0, 0, 0},  //TV = 9.67(115 lines)  AV=2.97  SV=8.03  BV=4.61
    {1312,8192,1232, 0, 0, 0},  //TV = 9.57(123 lines)  AV=2.97  SV=8.03  BV=4.51
    {1407,8192,1232, 0, 0, 0},  //TV = 9.47(132 lines)  AV=2.97  SV=8.03  BV=4.41
    {1513,8192,1232, 0, 0, 0},  //TV = 9.37(142 lines)  AV=2.97  SV=8.03  BV=4.31
    {1619,8192,1232, 0, 0, 0},  //TV = 9.27(152 lines)  AV=2.97  SV=8.03  BV=4.21
    {1735,8192,1232, 0, 0, 0},  //TV = 9.17(163 lines)  AV=2.97  SV=8.03  BV=4.11
    {1862,8192,1224, 0, 0, 0},  //TV = 9.07(175 lines)  AV=2.97  SV=8.02  BV=4.02
    {2000,8192,1232, 0, 0, 0},  //TV = 8.97(188 lines)  AV=2.97  SV=8.03  BV=3.90
    {2137,8192,1232, 0, 0, 0},  //TV = 8.87(201 lines)  AV=2.97  SV=8.03  BV=3.81
    {2286,8192,1232, 0, 0, 0},  //TV = 8.77(215 lines)  AV=2.97  SV=8.03  BV=3.71
    {2466,8192,1232, 0, 0, 0},  //TV = 8.66(232 lines)  AV=2.97  SV=8.03  BV=3.60
    {2635,8192,1232, 0, 0, 0},  //TV = 8.57(248 lines)  AV=2.97  SV=8.03  BV=3.51
    {2825,8192,1224, 0, 0, 0},  //TV = 8.47(266 lines)  AV=2.97  SV=8.02  BV=3.42
    {3016,8192,1232, 0, 0, 0},  //TV = 8.37(284 lines)  AV=2.97  SV=8.03  BV=3.31
    {3259,8192,1224, 0, 0, 0},  //TV = 8.26(307 lines)  AV=2.97  SV=8.02  BV=3.21
    {3482,8192,1232, 0, 0, 0},  //TV = 8.17(328 lines)  AV=2.97  SV=8.03  BV=3.10
    {3725,8192,1232, 0, 0, 0},  //TV = 8.07(351 lines)  AV=2.97  SV=8.03  BV=3.01
    {3990,8192,1232, 0, 0, 0},  //TV = 7.97(376 lines)  AV=2.97  SV=8.03  BV=2.91
    {4275,8192,1224, 0, 0, 0},  //TV = 7.87(403 lines)  AV=2.97  SV=8.02  BV=2.82
    {4604,8192,1224, 0, 0, 0},  //TV = 7.76(434 lines)  AV=2.97  SV=8.02  BV=2.71
    {4932,8192,1224, 0, 0, 0},  //TV = 7.66(465 lines)  AV=2.97  SV=8.02  BV=2.61
    {5281,8192,1224, 0, 0, 0},  //TV = 7.56(498 lines)  AV=2.97  SV=8.02  BV=2.51
    {5651,8192,1232, 0, 0, 0},  //TV = 7.47(533 lines)  AV=2.97  SV=8.03  BV=2.41
    {6054,8192,1224, 0, 0, 0},  //TV = 7.37(571 lines)  AV=2.97  SV=8.02  BV=2.32
    {6487,8192,1224, 0, 0, 0},  //TV = 7.27(612 lines)  AV=2.97  SV=8.02  BV=2.22
    {6943,8192,1232, 0, 0, 0},  //TV = 7.17(655 lines)  AV=2.97  SV=8.03  BV=2.11
    {7493,8192,1224, 0, 0, 0},  //TV = 7.06(707 lines)  AV=2.97  SV=8.02  BV=2.01
    {8022,8192,1232, 0, 0, 0},  //TV = 6.96(757 lines)  AV=2.97  SV=8.03  BV=1.90
    {8594,8192,1224, 0, 0, 0},  //TV = 6.86(811 lines)  AV=2.97  SV=8.02  BV=1.81
    {9208,8192,1224, 0, 0, 0},  //TV = 6.76(869 lines)  AV=2.97  SV=8.02  BV=1.71
    {9864,8192,1224, 0, 0, 0},  //TV = 6.66(931 lines)  AV=2.97  SV=8.02  BV=1.61
    {10002,8192,1296, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=8.11  BV=1.51
    {10002,8192,1392, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=8.21  BV=1.41
    {10002,8192,1488, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=8.30  BV=1.31
    {10002,8192,1600, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=8.41  BV=1.21
    {10002,8192,1712, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=8.51  BV=1.11
    {10002,8192,1832, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=8.60  BV=1.01
    {10002,8192,1960, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=8.70  BV=0.91
    {10002,8192,2104, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=8.80  BV=0.81
    {10002,8192,2256, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=8.91  BV=0.71
    {10002,8192,2416, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=9.00  BV=0.61
    {20004,8192,1296, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=8.11  BV=0.51
    {20004,8192,1384, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=8.20  BV=0.41
    {20004,8192,1488, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=8.30  BV=0.31
    {20004,8192,1592, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=8.40  BV=0.21
    {20004,8192,1704, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=8.50  BV=0.11
    {29995,8192,1232, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=8.03  BV=-0.00
    {29995,8192,1320, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=8.13  BV=-0.10
    {29995,8192,1416, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=8.23  BV=-0.20
    {29995,8192,1520, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=8.34  BV=-0.31
    {29995,8192,1632, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=8.44  BV=-0.41
    {39996,8192,1312, 0, 0, 0},  //TV = 4.64(3778 lines)  AV=2.97  SV=8.12  BV=-0.51
    {39996,8192,1400, 0, 0, 0},  //TV = 4.64(3778 lines)  AV=2.97  SV=8.22  BV=-0.60
    {39996,8192,1504, 0, 0, 0},  //TV = 4.64(3778 lines)  AV=2.97  SV=8.32  BV=-0.71
    {49998,8192,1288, 0, 0, 0},  //TV = 4.32(4723 lines)  AV=2.97  SV=8.10  BV=-0.80
    {49998,8192,1384, 0, 0, 0},  //TV = 4.32(4723 lines)  AV=2.97  SV=8.20  BV=-0.91
    {60001,8192,1232, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=8.03  BV=-1.00
    {60001,8192,1320, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=8.13  BV=-1.10
    {60001,8192,1416, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=8.23  BV=-1.20
    {70002,8192,1304, 0, 0, 0},  //TV = 3.84(6613 lines)  AV=2.97  SV=8.11  BV=-1.31
    {70002,8192,1392, 0, 0, 0},  //TV = 3.84(6613 lines)  AV=2.97  SV=8.21  BV=-1.40
    {80004,8192,1304, 0, 0, 0},  //TV = 3.64(7558 lines)  AV=2.97  SV=8.11  BV=-1.50
    {89995,8192,1248, 0, 0, 0},  //TV = 3.47(8502 lines)  AV=2.97  SV=8.05  BV=-1.61
    {89995,8192,1336, 0, 0, 0},  //TV = 3.47(8502 lines)  AV=2.97  SV=8.15  BV=-1.70
    {99997,8192,1288, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=8.10  BV=-1.80
    {109999,8192,1256, 0, 0, 0},  //TV = 3.18(10392 lines)  AV=2.97  SV=8.06  BV=-1.90
    {120001,8192,1232, 0, 0, 0},  //TV = 3.06(11337 lines)  AV=2.97  SV=8.03  BV=-2.00
    {120001,8192,1320, 0, 0, 0},  //TV = 3.06(11337 lines)  AV=2.97  SV=8.13  BV=-2.10
    {130003,8192,1304, 0, 0, 0},  //TV = 2.94(12282 lines)  AV=2.97  SV=8.11  BV=-2.20
    {140005,8192,1304, 0, 0, 0},  //TV = 2.84(13227 lines)  AV=2.97  SV=8.11  BV=-2.31
    {149996,8192,1304, 0, 0, 0},  //TV = 2.74(14171 lines)  AV=2.97  SV=8.11  BV=-2.41
    {169989,8192,1232, 0, 0, 0},  //TV = 2.56(16060 lines)  AV=2.97  SV=8.03  BV=-2.50
    {180002,8192,1248, 0, 0, 0},  //TV = 2.47(17006 lines)  AV=2.97  SV=8.05  BV=-2.61
    {190004,8192,1264, 0, 0, 0},  //TV = 2.40(17952 lines)  AV=2.97  SV=8.07  BV=-2.70
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_CaptureISO800Table =
{
    AETABLE_CAPTURE_ISO800,    //eAETableID
    141,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    113,    //i4MaxBV
    -27,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_800, //ISO SPEED
    sCaptureISO800PLineTable_60Hz,
    sCaptureISO800PLineTable_50Hz,
    NULL,
};

static strEvPline sCaptureISO1600PLineTable_60Hz =
{
{
    {95,1216,1064, 0, 0, 0},  //TV = 13.36(8 lines)  AV=2.97  SV=5.07  BV=11.26
    {105,1136,1088, 0, 0, 0},  //TV = 13.22(9 lines)  AV=2.97  SV=5.00  BV=11.19
    {105,1216,1072, 0, 0, 0},  //TV = 13.22(9 lines)  AV=2.97  SV=5.08  BV=11.11
    {116,1216,1064, 0, 0, 0},  //TV = 13.07(10 lines)  AV=2.97  SV=5.07  BV=10.98
    {127,1216,1040, 0, 0, 0},  //TV = 12.94(11 lines)  AV=2.97  SV=5.04  BV=10.88
    {137,1136,1096, 0, 0, 0},  //TV = 12.83(12 lines)  AV=2.97  SV=5.01  BV=10.79
    {137,1216,1088, 0, 0, 0},  //TV = 12.83(12 lines)  AV=2.97  SV=5.10  BV=10.70
    {158,1136,1096, 0, 0, 0},  //TV = 12.63(14 lines)  AV=2.97  SV=5.01  BV=10.59
    {169,1216,1024, 0, 0, 0},  //TV = 12.53(15 lines)  AV=2.97  SV=5.01  BV=10.49
    {179,1216,1048, 0, 0, 0},  //TV = 12.45(16 lines)  AV=2.97  SV=5.05  BV=10.37
    {190,1216,1064, 0, 0, 0},  //TV = 12.36(17 lines)  AV=2.97  SV=5.07  BV=10.26
    {201,1216,1040, 0, 0, 0},  //TV = 12.28(18 lines)  AV=2.97  SV=5.04  BV=10.22
    {222,1136,1088, 0, 0, 0},  //TV = 12.14(20 lines)  AV=2.97  SV=5.00  BV=10.11
    {232,1216,1040, 0, 0, 0},  //TV = 12.07(21 lines)  AV=2.97  SV=5.04  BV=10.01
    {254,1136,1088, 0, 0, 0},  //TV = 11.94(23 lines)  AV=2.97  SV=5.00  BV=9.91
    {264,1216,1048, 0, 0, 0},  //TV = 11.89(24 lines)  AV=2.97  SV=5.05  BV=9.81
    {285,1216,1040, 0, 0, 0},  //TV = 11.78(26 lines)  AV=2.97  SV=5.04  BV=9.71
    {306,1216,1040, 0, 0, 0},  //TV = 11.67(28 lines)  AV=2.97  SV=5.04  BV=9.61
    {328,1216,1040, 0, 0, 0},  //TV = 11.57(30 lines)  AV=2.97  SV=5.04  BV=9.51
    {359,1136,1096, 0, 0, 0},  //TV = 11.44(33 lines)  AV=2.97  SV=5.01  BV=9.40
    {381,1216,1024, 0, 0, 0},  //TV = 11.36(35 lines)  AV=2.97  SV=5.01  BV=9.32
    {412,1136,1096, 0, 0, 0},  //TV = 11.25(38 lines)  AV=2.97  SV=5.01  BV=9.20
    {444,1136,1088, 0, 0, 0},  //TV = 11.14(41 lines)  AV=2.97  SV=5.00  BV=9.11
    {476,1136,1088, 0, 0, 0},  //TV = 11.04(44 lines)  AV=2.97  SV=5.00  BV=9.00
    {497,1216,1040, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.04  BV=8.91
    {497,1216,1112, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.13  BV=8.81
    {497,1328,1096, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.24  BV=8.71
    {497,1424,1088, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.33  BV=8.62
    {497,1632,1024, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.44  BV=8.51
    {497,1728,1032, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.53  BV=8.41
    {497,1840,1040, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.63  BV=8.31
    {497,1936,1064, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.74  BV=8.21
    {497,2144,1024, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.83  BV=8.11
    {497,2240,1048, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.93  BV=8.02
    {497,2448,1032, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=6.03  BV=7.91
    {497,2560,1056, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=6.13  BV=7.81
    {497,2752,1056, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=6.24  BV=7.71
    {497,2960,1056, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=6.34  BV=7.60
    {497,3200,1040, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=6.43  BV=7.51
    {497,3456,1032, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=6.53  BV=7.41
    {497,3712,1032, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=6.63  BV=7.31
    {497,3968,1040, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=6.74  BV=7.20
    {497,4224,1040, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=6.83  BV=7.11
    {497,4608,1024, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=6.94  BV=7.01
    {497,4864,1040, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=7.04  BV=6.91
    {497,5248,1032, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=7.13  BV=6.81
    {497,5632,1032, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=7.24  BV=6.71
    {497,6016,1032, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=7.33  BV=6.61
    {497,6544,1024, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=7.44  BV=6.50
    {497,6896,1040, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=7.54  BV=6.41
    {497,7472,1024, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=7.63  BV=6.31
    {497,7936,1032, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=7.73  BV=6.21
    {497,8192,1072, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=7.83  BV=6.11
    {497,8192,1152, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=7.94  BV=6.01
    {497,8192,1232, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=8.03  BV=5.91
    {497,8192,1320, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=8.13  BV=5.81
    {497,8192,1416, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=8.23  BV=5.71
    {497,8192,1520, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=8.34  BV=5.61
    {497,8192,1640, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=8.45  BV=5.50
    {497,8192,1744, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=8.53  BV=5.41
    {497,8192,1880, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=8.64  BV=5.30
    {497,8192,2016, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=8.74  BV=5.20
    {497,8192,2160, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=8.84  BV=5.10
    {497,8192,2312, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=8.94  BV=5.00
    {497,8192,2472, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=9.04  BV=4.91
    {529,8192,2488, 0, 0, 0},  //TV = 10.88(49 lines)  AV=2.97  SV=9.05  BV=4.81
    {571,8192,2472, 0, 0, 0},  //TV = 10.77(53 lines)  AV=2.97  SV=9.04  BV=4.71
    {613,8192,2480, 0, 0, 0},  //TV = 10.67(57 lines)  AV=2.97  SV=9.04  BV=4.60
    {656,8192,2480, 0, 0, 0},  //TV = 10.57(61 lines)  AV=2.97  SV=9.04  BV=4.50
    {698,8192,2488, 0, 0, 0},  //TV = 10.48(65 lines)  AV=2.97  SV=9.05  BV=4.41
    {751,8192,2480, 0, 0, 0},  //TV = 10.38(70 lines)  AV=2.97  SV=9.04  BV=4.31
    {804,8192,2480, 0, 0, 0},  //TV = 10.28(75 lines)  AV=2.97  SV=9.04  BV=4.21
    {867,8192,2472, 0, 0, 0},  //TV = 10.17(81 lines)  AV=2.97  SV=9.04  BV=4.11
    {931,8192,2464, 0, 0, 0},  //TV = 10.07(87 lines)  AV=2.97  SV=9.03  BV=4.01
    {994,8192,2472, 0, 0, 0},  //TV = 9.97(93 lines)  AV=2.97  SV=9.04  BV=3.91
    {1068,8192,2472, 0, 0, 0},  //TV = 9.87(100 lines)  AV=2.97  SV=9.04  BV=3.80
    {1143,8192,2472, 0, 0, 0},  //TV = 9.77(107 lines)  AV=2.97  SV=9.04  BV=3.71
    {1227,8192,2464, 0, 0, 0},  //TV = 9.67(115 lines)  AV=2.97  SV=9.03  BV=3.61
    {1312,8192,2472, 0, 0, 0},  //TV = 9.57(123 lines)  AV=2.97  SV=9.04  BV=3.51
    {1407,8192,2464, 0, 0, 0},  //TV = 9.47(132 lines)  AV=2.97  SV=9.03  BV=3.41
    {1513,8192,2464, 0, 0, 0},  //TV = 9.37(142 lines)  AV=2.97  SV=9.03  BV=3.31
    {1619,8192,2464, 0, 0, 0},  //TV = 9.27(152 lines)  AV=2.97  SV=9.03  BV=3.21
    {1735,8192,2472, 0, 0, 0},  //TV = 9.17(163 lines)  AV=2.97  SV=9.04  BV=3.10
    {1862,8192,2456, 0, 0, 0},  //TV = 9.07(175 lines)  AV=2.97  SV=9.03  BV=3.01
    {2000,8192,2464, 0, 0, 0},  //TV = 8.97(188 lines)  AV=2.97  SV=9.03  BV=2.90
    {2137,8192,2464, 0, 0, 0},  //TV = 8.87(201 lines)  AV=2.97  SV=9.03  BV=2.81
    {2286,8192,2464, 0, 0, 0},  //TV = 8.77(215 lines)  AV=2.97  SV=9.03  BV=2.71
    {2466,8192,2464, 0, 0, 0},  //TV = 8.66(232 lines)  AV=2.97  SV=9.03  BV=2.60
    {2635,8192,2464, 0, 0, 0},  //TV = 8.57(248 lines)  AV=2.97  SV=9.03  BV=2.51
    {2825,8192,2456, 0, 0, 0},  //TV = 8.47(266 lines)  AV=2.97  SV=9.03  BV=2.41
    {3016,8192,2464, 0, 0, 0},  //TV = 8.37(284 lines)  AV=2.97  SV=9.03  BV=2.31
    {3259,8192,2456, 0, 0, 0},  //TV = 8.26(307 lines)  AV=2.97  SV=9.03  BV=2.20
    {3482,8192,2464, 0, 0, 0},  //TV = 8.17(328 lines)  AV=2.97  SV=9.03  BV=2.10
    {3725,8192,2464, 0, 0, 0},  //TV = 8.07(351 lines)  AV=2.97  SV=9.03  BV=2.01
    {3990,8192,2464, 0, 0, 0},  //TV = 7.97(376 lines)  AV=2.97  SV=9.03  BV=1.91
    {4297,8192,2464, 0, 0, 0},  //TV = 7.86(405 lines)  AV=2.97  SV=9.03  BV=1.80
    {4604,8192,2456, 0, 0, 0},  //TV = 7.76(434 lines)  AV=2.97  SV=9.03  BV=1.71
    {4932,8192,2456, 0, 0, 0},  //TV = 7.66(465 lines)  AV=2.97  SV=9.03  BV=1.61
    {5281,8192,2456, 0, 0, 0},  //TV = 7.56(498 lines)  AV=2.97  SV=9.03  BV=1.51
    {5651,8192,2464, 0, 0, 0},  //TV = 7.47(533 lines)  AV=2.97  SV=9.03  BV=1.41
    {6054,8192,2456, 0, 0, 0},  //TV = 7.37(571 lines)  AV=2.97  SV=9.03  BV=1.31
    {6487,8192,2456, 0, 0, 0},  //TV = 7.27(612 lines)  AV=2.97  SV=9.03  BV=1.21
    {6943,8192,2464, 0, 0, 0},  //TV = 7.17(655 lines)  AV=2.97  SV=9.03  BV=1.11
    {7440,8192,2456, 0, 0, 0},  //TV = 7.07(702 lines)  AV=2.97  SV=9.03  BV=1.01
    {8022,8192,2456, 0, 0, 0},  //TV = 6.96(757 lines)  AV=2.97  SV=9.03  BV=0.91
    {8329,8192,2536, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=9.07  BV=0.80
    {8329,8192,2720, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=9.17  BV=0.70
    {8329,8192,2912, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=9.27  BV=0.61
    {8329,8192,3120, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=9.37  BV=0.51
    {8329,8192,3344, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=9.47  BV=0.41
    {8329,8192,3584, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=9.57  BV=0.31
    {8329,8192,3840, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=9.67  BV=0.21
    {8329,8192,4112, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=9.77  BV=0.11
    {8329,8192,4440, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=9.88  BV=-0.00
    {8329,8192,4752, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=9.98  BV=-0.10
    {16670,8192,2544, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=9.08  BV=-0.20
    {16670,8192,2728, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=9.18  BV=-0.30
    {16670,8192,2920, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=9.28  BV=-0.40
    {16670,8192,3128, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=9.38  BV=-0.50
    {16670,8192,3352, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=9.48  BV=-0.60
    {16670,8192,3592, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=9.58  BV=-0.70
    {24988,8192,2568, 0, 0, 0},  //TV = 5.32(2360 lines)  AV=2.97  SV=9.09  BV=-0.80
    {24988,8192,2768, 0, 0, 0},  //TV = 5.32(2360 lines)  AV=2.97  SV=9.20  BV=-0.91
    {24988,8192,2952, 0, 0, 0},  //TV = 5.32(2360 lines)  AV=2.97  SV=9.29  BV=-1.00
    {24988,8192,3184, 0, 0, 0},  //TV = 5.32(2360 lines)  AV=2.97  SV=9.40  BV=-1.11
    {33329,8192,2560, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=9.09  BV=-1.21
    {33329,8192,2736, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=9.18  BV=-1.31
    {33329,8192,2936, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=9.29  BV=-1.41
    {41669,8192,2520, 0, 0, 0},  //TV = 4.58(3936 lines)  AV=2.97  SV=9.06  BV=-1.51
    {41669,8192,2696, 0, 0, 0},  //TV = 4.58(3936 lines)  AV=2.97  SV=9.16  BV=-1.61
    {41669,8192,2888, 0, 0, 0},  //TV = 4.58(3936 lines)  AV=2.97  SV=9.26  BV=-1.71
    {49999,8192,2584, 0, 0, 0},  //TV = 4.32(4724 lines)  AV=2.97  SV=9.10  BV=-1.81
    {49999,8192,2768, 0, 0, 0},  //TV = 4.32(4724 lines)  AV=2.97  SV=9.20  BV=-1.91
    {58328,8192,2544, 0, 0, 0},  //TV = 4.10(5510 lines)  AV=2.97  SV=9.08  BV=-2.01
    {58328,8192,2720, 0, 0, 0},  //TV = 4.10(5510 lines)  AV=2.97  SV=9.17  BV=-2.10
    {66669,8192,2552, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=9.08  BV=-2.21
    {66669,8192,2736, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=9.18  BV=-2.31
    {74998,8192,2608, 0, 0, 0},  //TV = 3.74(7085 lines)  AV=2.97  SV=9.11  BV=-2.41
    {83327,8192,2512, 0, 0, 0},  //TV = 3.59(7872 lines)  AV=2.97  SV=9.06  BV=-2.50
    {83327,8192,2696, 0, 0, 0},  //TV = 3.59(7872 lines)  AV=2.97  SV=9.16  BV=-2.61
    {91668,8192,2624, 0, 0, 0},  //TV = 3.45(8660 lines)  AV=2.97  SV=9.12  BV=-2.70
    {99998,8192,2576, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=9.10  BV=-2.80
    {108327,8192,2552, 0, 0, 0},  //TV = 3.21(10234 lines)  AV=2.97  SV=9.08  BV=-2.91
    {116667,8192,2536, 0, 0, 0},  //TV = 3.10(11022 lines)  AV=2.97  SV=9.07  BV=-3.00
    {124997,8192,2536, 0, 0, 0},  //TV = 3.00(11809 lines)  AV=2.97  SV=9.07  BV=-3.10
    {133326,8192,2552, 0, 0, 0},  //TV = 2.91(12596 lines)  AV=2.97  SV=9.08  BV=-3.21
    {141656,8192,2576, 0, 0, 0},  //TV = 2.82(13383 lines)  AV=2.97  SV=9.10  BV=-3.31
    {158326,8192,2472, 0, 0, 0},  //TV = 2.66(14958 lines)  AV=2.97  SV=9.04  BV=-3.41
    {166655,8192,2512, 0, 0, 0},  //TV = 2.59(15745 lines)  AV=2.97  SV=9.06  BV=-3.50
    {174996,8192,2568, 0, 0, 0},  //TV = 2.51(16534 lines)  AV=2.97  SV=9.09  BV=-3.61
    {191655,8192,2512, 0, 0, 0},  //TV = 2.38(18107 lines)  AV=2.97  SV=9.06  BV=-3.71
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCaptureISO1600PLineTable_50Hz =
{
{
    {95,1216,1064, 0, 0, 0},  //TV = 13.36(8 lines)  AV=2.97  SV=5.07  BV=11.26
    {105,1136,1088, 0, 0, 0},  //TV = 13.22(9 lines)  AV=2.97  SV=5.00  BV=11.19
    {105,1216,1072, 0, 0, 0},  //TV = 13.22(9 lines)  AV=2.97  SV=5.08  BV=11.11
    {116,1216,1064, 0, 0, 0},  //TV = 13.07(10 lines)  AV=2.97  SV=5.07  BV=10.98
    {127,1216,1040, 0, 0, 0},  //TV = 12.94(11 lines)  AV=2.97  SV=5.04  BV=10.88
    {137,1136,1096, 0, 0, 0},  //TV = 12.83(12 lines)  AV=2.97  SV=5.01  BV=10.79
    {137,1216,1088, 0, 0, 0},  //TV = 12.83(12 lines)  AV=2.97  SV=5.10  BV=10.70
    {158,1136,1096, 0, 0, 0},  //TV = 12.63(14 lines)  AV=2.97  SV=5.01  BV=10.59
    {169,1216,1024, 0, 0, 0},  //TV = 12.53(15 lines)  AV=2.97  SV=5.01  BV=10.49
    {179,1216,1048, 0, 0, 0},  //TV = 12.45(16 lines)  AV=2.97  SV=5.05  BV=10.37
    {190,1216,1064, 0, 0, 0},  //TV = 12.36(17 lines)  AV=2.97  SV=5.07  BV=10.26
    {201,1216,1040, 0, 0, 0},  //TV = 12.28(18 lines)  AV=2.97  SV=5.04  BV=10.22
    {222,1136,1088, 0, 0, 0},  //TV = 12.14(20 lines)  AV=2.97  SV=5.00  BV=10.11
    {232,1216,1040, 0, 0, 0},  //TV = 12.07(21 lines)  AV=2.97  SV=5.04  BV=10.01
    {254,1136,1088, 0, 0, 0},  //TV = 11.94(23 lines)  AV=2.97  SV=5.00  BV=9.91
    {264,1216,1048, 0, 0, 0},  //TV = 11.89(24 lines)  AV=2.97  SV=5.05  BV=9.81
    {285,1216,1040, 0, 0, 0},  //TV = 11.78(26 lines)  AV=2.97  SV=5.04  BV=9.71
    {306,1216,1040, 0, 0, 0},  //TV = 11.67(28 lines)  AV=2.97  SV=5.04  BV=9.61
    {328,1216,1040, 0, 0, 0},  //TV = 11.57(30 lines)  AV=2.97  SV=5.04  BV=9.51
    {359,1136,1096, 0, 0, 0},  //TV = 11.44(33 lines)  AV=2.97  SV=5.01  BV=9.40
    {381,1216,1024, 0, 0, 0},  //TV = 11.36(35 lines)  AV=2.97  SV=5.01  BV=9.32
    {412,1136,1096, 0, 0, 0},  //TV = 11.25(38 lines)  AV=2.97  SV=5.01  BV=9.20
    {444,1136,1088, 0, 0, 0},  //TV = 11.14(41 lines)  AV=2.97  SV=5.00  BV=9.11
    {476,1136,1088, 0, 0, 0},  //TV = 11.04(44 lines)  AV=2.97  SV=5.00  BV=9.00
    {497,1216,1040, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.04  BV=8.91
    {497,1216,1112, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.13  BV=8.81
    {497,1328,1096, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.24  BV=8.71
    {497,1424,1088, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.33  BV=8.62
    {497,1632,1024, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.44  BV=8.51
    {497,1728,1032, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.53  BV=8.41
    {497,1840,1040, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.63  BV=8.31
    {497,1936,1064, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.74  BV=8.21
    {497,2144,1024, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.83  BV=8.11
    {497,2240,1048, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=5.93  BV=8.02
    {497,2448,1032, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=6.03  BV=7.91
    {497,2560,1056, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=6.13  BV=7.81
    {497,2752,1056, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=6.24  BV=7.71
    {497,2960,1056, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=6.34  BV=7.60
    {497,3200,1040, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=6.43  BV=7.51
    {497,3456,1032, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=6.53  BV=7.41
    {497,3712,1032, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=6.63  BV=7.31
    {497,3968,1040, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=6.74  BV=7.20
    {497,4224,1040, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=6.83  BV=7.11
    {497,4608,1024, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=6.94  BV=7.01
    {497,4864,1040, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=7.04  BV=6.91
    {497,5248,1032, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=7.13  BV=6.81
    {497,5632,1032, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=7.24  BV=6.71
    {497,6016,1032, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=7.33  BV=6.61
    {497,6544,1024, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=7.44  BV=6.50
    {497,6896,1040, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=7.54  BV=6.41
    {497,7472,1024, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=7.63  BV=6.31
    {497,7936,1032, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=7.73  BV=6.21
    {497,8192,1072, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=7.83  BV=6.11
    {497,8192,1152, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=7.94  BV=6.01
    {497,8192,1232, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=8.03  BV=5.91
    {497,8192,1320, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=8.13  BV=5.81
    {497,8192,1416, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=8.23  BV=5.71
    {497,8192,1520, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=8.34  BV=5.61
    {497,8192,1640, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=8.45  BV=5.50
    {497,8192,1744, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=8.53  BV=5.41
    {497,8192,1880, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=8.64  BV=5.30
    {497,8192,2016, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=8.74  BV=5.20
    {497,8192,2160, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=8.84  BV=5.10
    {497,8192,2312, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=8.94  BV=5.00
    {497,8192,2472, 0, 0, 0},  //TV = 10.97(46 lines)  AV=2.97  SV=9.04  BV=4.91
    {529,8192,2488, 0, 0, 0},  //TV = 10.88(49 lines)  AV=2.97  SV=9.05  BV=4.81
    {571,8192,2472, 0, 0, 0},  //TV = 10.77(53 lines)  AV=2.97  SV=9.04  BV=4.71
    {613,8192,2480, 0, 0, 0},  //TV = 10.67(57 lines)  AV=2.97  SV=9.04  BV=4.60
    {656,8192,2480, 0, 0, 0},  //TV = 10.57(61 lines)  AV=2.97  SV=9.04  BV=4.50
    {698,8192,2488, 0, 0, 0},  //TV = 10.48(65 lines)  AV=2.97  SV=9.05  BV=4.41
    {751,8192,2480, 0, 0, 0},  //TV = 10.38(70 lines)  AV=2.97  SV=9.04  BV=4.31
    {804,8192,2480, 0, 0, 0},  //TV = 10.28(75 lines)  AV=2.97  SV=9.04  BV=4.21
    {867,8192,2472, 0, 0, 0},  //TV = 10.17(81 lines)  AV=2.97  SV=9.04  BV=4.11
    {931,8192,2464, 0, 0, 0},  //TV = 10.07(87 lines)  AV=2.97  SV=9.03  BV=4.01
    {994,8192,2472, 0, 0, 0},  //TV = 9.97(93 lines)  AV=2.97  SV=9.04  BV=3.91
    {1068,8192,2472, 0, 0, 0},  //TV = 9.87(100 lines)  AV=2.97  SV=9.04  BV=3.80
    {1143,8192,2472, 0, 0, 0},  //TV = 9.77(107 lines)  AV=2.97  SV=9.04  BV=3.71
    {1227,8192,2464, 0, 0, 0},  //TV = 9.67(115 lines)  AV=2.97  SV=9.03  BV=3.61
    {1312,8192,2472, 0, 0, 0},  //TV = 9.57(123 lines)  AV=2.97  SV=9.04  BV=3.51
    {1407,8192,2464, 0, 0, 0},  //TV = 9.47(132 lines)  AV=2.97  SV=9.03  BV=3.41
    {1513,8192,2464, 0, 0, 0},  //TV = 9.37(142 lines)  AV=2.97  SV=9.03  BV=3.31
    {1619,8192,2464, 0, 0, 0},  //TV = 9.27(152 lines)  AV=2.97  SV=9.03  BV=3.21
    {1735,8192,2472, 0, 0, 0},  //TV = 9.17(163 lines)  AV=2.97  SV=9.04  BV=3.10
    {1862,8192,2456, 0, 0, 0},  //TV = 9.07(175 lines)  AV=2.97  SV=9.03  BV=3.01
    {2000,8192,2464, 0, 0, 0},  //TV = 8.97(188 lines)  AV=2.97  SV=9.03  BV=2.90
    {2137,8192,2464, 0, 0, 0},  //TV = 8.87(201 lines)  AV=2.97  SV=9.03  BV=2.81
    {2286,8192,2464, 0, 0, 0},  //TV = 8.77(215 lines)  AV=2.97  SV=9.03  BV=2.71
    {2466,8192,2464, 0, 0, 0},  //TV = 8.66(232 lines)  AV=2.97  SV=9.03  BV=2.60
    {2635,8192,2464, 0, 0, 0},  //TV = 8.57(248 lines)  AV=2.97  SV=9.03  BV=2.51
    {2825,8192,2456, 0, 0, 0},  //TV = 8.47(266 lines)  AV=2.97  SV=9.03  BV=2.41
    {3016,8192,2464, 0, 0, 0},  //TV = 8.37(284 lines)  AV=2.97  SV=9.03  BV=2.31
    {3259,8192,2456, 0, 0, 0},  //TV = 8.26(307 lines)  AV=2.97  SV=9.03  BV=2.20
    {3482,8192,2464, 0, 0, 0},  //TV = 8.17(328 lines)  AV=2.97  SV=9.03  BV=2.10
    {3725,8192,2464, 0, 0, 0},  //TV = 8.07(351 lines)  AV=2.97  SV=9.03  BV=2.01
    {3990,8192,2464, 0, 0, 0},  //TV = 7.97(376 lines)  AV=2.97  SV=9.03  BV=1.91
    {4297,8192,2464, 0, 0, 0},  //TV = 7.86(405 lines)  AV=2.97  SV=9.03  BV=1.80
    {4604,8192,2456, 0, 0, 0},  //TV = 7.76(434 lines)  AV=2.97  SV=9.03  BV=1.71
    {4932,8192,2456, 0, 0, 0},  //TV = 7.66(465 lines)  AV=2.97  SV=9.03  BV=1.61
    {5281,8192,2456, 0, 0, 0},  //TV = 7.56(498 lines)  AV=2.97  SV=9.03  BV=1.51
    {5651,8192,2464, 0, 0, 0},  //TV = 7.47(533 lines)  AV=2.97  SV=9.03  BV=1.41
    {6054,8192,2456, 0, 0, 0},  //TV = 7.37(571 lines)  AV=2.97  SV=9.03  BV=1.31
    {6487,8192,2456, 0, 0, 0},  //TV = 7.27(612 lines)  AV=2.97  SV=9.03  BV=1.21
    {6943,8192,2464, 0, 0, 0},  //TV = 7.17(655 lines)  AV=2.97  SV=9.03  BV=1.11
    {7440,8192,2456, 0, 0, 0},  //TV = 7.07(702 lines)  AV=2.97  SV=9.03  BV=1.01
    {8022,8192,2456, 0, 0, 0},  //TV = 6.96(757 lines)  AV=2.97  SV=9.03  BV=0.91
    {8594,8192,2456, 0, 0, 0},  //TV = 6.86(811 lines)  AV=2.97  SV=9.03  BV=0.81
    {9208,8192,2456, 0, 0, 0},  //TV = 6.76(869 lines)  AV=2.97  SV=9.03  BV=0.71
    {9864,8192,2456, 0, 0, 0},  //TV = 6.66(931 lines)  AV=2.97  SV=9.03  BV=0.61
    {10002,8192,2600, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=9.11  BV=0.50
    {10002,8192,2784, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=9.21  BV=0.41
    {10002,8192,2984, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=9.31  BV=0.31
    {10002,8192,3192, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=9.41  BV=0.21
    {10002,8192,3424, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=9.51  BV=0.11
    {10002,8192,3696, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=9.62  BV=-0.00
    {10002,8192,3960, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=9.72  BV=-0.10
    {10002,8192,4240, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=9.82  BV=-0.20
    {10002,8192,4544, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=9.92  BV=-0.30
    {10002,8192,4872, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=10.02  BV=-0.40
    {20004,8192,2608, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=9.11  BV=-0.50
    {20004,8192,2792, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=9.21  BV=-0.60
    {20004,8192,2992, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=9.31  BV=-0.70
    {20004,8192,3208, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=9.41  BV=-0.80
    {20004,8192,3440, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=9.51  BV=-0.90
    {29995,8192,2472, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=9.04  BV=-1.01
    {29995,8192,2648, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=9.14  BV=-1.11
    {29995,8192,2840, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=9.24  BV=-1.21
    {29995,8192,3048, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=9.34  BV=-1.31
    {29995,8192,3264, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=9.44  BV=-1.41
    {39996,8192,2624, 0, 0, 0},  //TV = 4.64(3778 lines)  AV=2.97  SV=9.12  BV=-1.51
    {39996,8192,2808, 0, 0, 0},  //TV = 4.64(3778 lines)  AV=2.97  SV=9.22  BV=-1.61
    {39996,8192,3008, 0, 0, 0},  //TV = 4.64(3778 lines)  AV=2.97  SV=9.32  BV=-1.71
    {49998,8192,2584, 0, 0, 0},  //TV = 4.32(4723 lines)  AV=2.97  SV=9.10  BV=-1.81
    {49998,8192,2768, 0, 0, 0},  //TV = 4.32(4723 lines)  AV=2.97  SV=9.20  BV=-1.91
    {60001,8192,2472, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=9.04  BV=-2.01
    {60001,8192,2648, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=9.14  BV=-2.11
    {60001,8192,2840, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=9.24  BV=-2.21
    {70002,8192,2608, 0, 0, 0},  //TV = 3.84(6613 lines)  AV=2.97  SV=9.11  BV=-2.31
    {70002,8192,2792, 0, 0, 0},  //TV = 3.84(6613 lines)  AV=2.97  SV=9.21  BV=-2.41
    {80004,8192,2616, 0, 0, 0},  //TV = 3.64(7558 lines)  AV=2.97  SV=9.12  BV=-2.50
    {89995,8192,2496, 0, 0, 0},  //TV = 3.47(8502 lines)  AV=2.97  SV=9.05  BV=-2.61
    {89995,8192,2672, 0, 0, 0},  //TV = 3.47(8502 lines)  AV=2.97  SV=9.15  BV=-2.70
    {99997,8192,2576, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=9.10  BV=-2.80
    {109999,8192,2512, 0, 0, 0},  //TV = 3.18(10392 lines)  AV=2.97  SV=9.06  BV=-2.90
    {120001,8192,2472, 0, 0, 0},  //TV = 3.06(11337 lines)  AV=2.97  SV=9.04  BV=-3.01
    {120001,8192,2648, 0, 0, 0},  //TV = 3.06(11337 lines)  AV=2.97  SV=9.14  BV=-3.11
    {130003,8192,2616, 0, 0, 0},  //TV = 2.94(12282 lines)  AV=2.97  SV=9.12  BV=-3.20
    {140005,8192,2608, 0, 0, 0},  //TV = 2.84(13227 lines)  AV=2.97  SV=9.11  BV=-3.31
    {149996,8192,2608, 0, 0, 0},  //TV = 2.74(14171 lines)  AV=2.97  SV=9.11  BV=-3.41
    {169989,8192,2464, 0, 0, 0},  //TV = 2.56(16060 lines)  AV=2.97  SV=9.03  BV=-3.50
    {180002,8192,2496, 0, 0, 0},  //TV = 2.47(17006 lines)  AV=2.97  SV=9.05  BV=-3.61
    {190004,8192,2536, 0, 0, 0},  //TV = 2.40(17952 lines)  AV=2.97  SV=9.07  BV=-3.71
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_CaptureISO1600Table =
{
    AETABLE_CAPTURE_ISO1600,    //eAETableID
    151,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    113,    //i4MaxBV
    -37,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_1600, //ISO SPEED
    sCaptureISO1600PLineTable_60Hz,
    sCaptureISO1600PLineTable_50Hz,
    NULL,
};

static strEvPline sCaptureStrobePLineTable_60Hz =
{
{
    {95,1216,1064, 0, 0, 0},  //TV = 13.36(8 lines)  AV=2.97  SV=5.07  BV=11.26
    {105,1136,1088, 0, 0, 0},  //TV = 13.22(9 lines)  AV=2.97  SV=5.00  BV=11.19
    {105,1216,1072, 0, 0, 0},  //TV = 13.22(9 lines)  AV=2.97  SV=5.08  BV=11.11
    {116,1216,1064, 0, 0, 0},  //TV = 13.07(10 lines)  AV=2.97  SV=5.07  BV=10.98
    {127,1216,1040, 0, 0, 0},  //TV = 12.94(11 lines)  AV=2.97  SV=5.04  BV=10.88
    {137,1136,1096, 0, 0, 0},  //TV = 12.83(12 lines)  AV=2.97  SV=5.01  BV=10.79
    {137,1216,1088, 0, 0, 0},  //TV = 12.83(12 lines)  AV=2.97  SV=5.10  BV=10.70
    {158,1136,1096, 0, 0, 0},  //TV = 12.63(14 lines)  AV=2.97  SV=5.01  BV=10.59
    {169,1216,1024, 0, 0, 0},  //TV = 12.53(15 lines)  AV=2.97  SV=5.01  BV=10.49
    {179,1216,1048, 0, 0, 0},  //TV = 12.45(16 lines)  AV=2.97  SV=5.05  BV=10.37
    {190,1216,1064, 0, 0, 0},  //TV = 12.36(17 lines)  AV=2.97  SV=5.07  BV=10.26
    {201,1216,1040, 0, 0, 0},  //TV = 12.28(18 lines)  AV=2.97  SV=5.04  BV=10.22
    {222,1136,1088, 0, 0, 0},  //TV = 12.14(20 lines)  AV=2.97  SV=5.00  BV=10.11
    {232,1216,1040, 0, 0, 0},  //TV = 12.07(21 lines)  AV=2.97  SV=5.04  BV=10.01
    {254,1136,1088, 0, 0, 0},  //TV = 11.94(23 lines)  AV=2.97  SV=5.00  BV=9.91
    {264,1216,1048, 0, 0, 0},  //TV = 11.89(24 lines)  AV=2.97  SV=5.05  BV=9.81
    {285,1216,1040, 0, 0, 0},  //TV = 11.78(26 lines)  AV=2.97  SV=5.04  BV=9.71
    {306,1216,1040, 0, 0, 0},  //TV = 11.67(28 lines)  AV=2.97  SV=5.04  BV=9.61
    {328,1216,1040, 0, 0, 0},  //TV = 11.57(30 lines)  AV=2.97  SV=5.04  BV=9.51
    {359,1136,1096, 0, 0, 0},  //TV = 11.44(33 lines)  AV=2.97  SV=5.01  BV=9.40
    {381,1216,1024, 0, 0, 0},  //TV = 11.36(35 lines)  AV=2.97  SV=5.01  BV=9.32
    {412,1136,1096, 0, 0, 0},  //TV = 11.25(38 lines)  AV=2.97  SV=5.01  BV=9.20
    {444,1136,1088, 0, 0, 0},  //TV = 11.14(41 lines)  AV=2.97  SV=5.00  BV=9.11
    {476,1136,1088, 0, 0, 0},  //TV = 11.04(44 lines)  AV=2.97  SV=5.00  BV=9.00
    {508,1136,1088, 0, 0, 0},  //TV = 10.94(47 lines)  AV=2.97  SV=5.00  BV=8.91
    {539,1216,1024, 0, 0, 0},  //TV = 10.86(50 lines)  AV=2.97  SV=5.01  BV=8.81
    {582,1136,1096, 0, 0, 0},  //TV = 10.75(54 lines)  AV=2.97  SV=5.01  BV=8.70
    {624,1136,1096, 0, 0, 0},  //TV = 10.65(58 lines)  AV=2.97  SV=5.01  BV=8.60
    {666,1136,1096, 0, 0, 0},  //TV = 10.55(62 lines)  AV=2.97  SV=5.01  BV=8.51
    {719,1136,1088, 0, 0, 0},  //TV = 10.44(67 lines)  AV=2.97  SV=5.00  BV=8.41
    {772,1136,1088, 0, 0, 0},  //TV = 10.34(72 lines)  AV=2.97  SV=5.00  BV=8.31
    {825,1136,1096, 0, 0, 0},  //TV = 10.24(77 lines)  AV=2.97  SV=5.01  BV=8.20
    {889,1136,1088, 0, 0, 0},  //TV = 10.14(83 lines)  AV=2.97  SV=5.00  BV=8.10
    {952,1136,1088, 0, 0, 0},  //TV = 10.04(89 lines)  AV=2.97  SV=5.00  BV=8.00
    {1016,1136,1088, 0, 0, 0},  //TV = 9.94(95 lines)  AV=2.97  SV=5.00  BV=7.91
    {1090,1136,1088, 0, 0, 0},  //TV = 9.84(102 lines)  AV=2.97  SV=5.00  BV=7.81
    {1174,1136,1088, 0, 0, 0},  //TV = 9.73(110 lines)  AV=2.97  SV=5.00  BV=7.70
    {1259,1136,1088, 0, 0, 0},  //TV = 9.63(118 lines)  AV=2.97  SV=5.00  BV=7.60
    {1344,1136,1088, 0, 0, 0},  //TV = 9.54(126 lines)  AV=2.97  SV=5.00  BV=7.51
    {1439,1136,1088, 0, 0, 0},  //TV = 9.44(135 lines)  AV=2.97  SV=5.00  BV=7.41
    {1545,1136,1088, 0, 0, 0},  //TV = 9.34(145 lines)  AV=2.97  SV=5.00  BV=7.31
    {1651,1136,1088, 0, 0, 0},  //TV = 9.24(155 lines)  AV=2.97  SV=5.00  BV=7.21
    {1778,1136,1088, 0, 0, 0},  //TV = 9.14(167 lines)  AV=2.97  SV=5.00  BV=7.10
    {1915,1136,1088, 0, 0, 0},  //TV = 9.03(180 lines)  AV=2.97  SV=5.00  BV=7.00
    {2032,1136,1088, 0, 0, 0},  //TV = 8.94(191 lines)  AV=2.97  SV=5.00  BV=6.91
    {2190,1136,1088, 0, 0, 0},  //TV = 8.83(206 lines)  AV=2.97  SV=5.00  BV=6.80
    {2360,1136,1080, 0, 0, 0},  //TV = 8.73(222 lines)  AV=2.97  SV=4.99  BV=6.71
    {2529,1136,1080, 0, 0, 0},  //TV = 8.63(238 lines)  AV=2.97  SV=4.99  BV=6.61
    {2698,1136,1088, 0, 0, 0},  //TV = 8.53(254 lines)  AV=2.97  SV=5.00  BV=6.50
    {2910,1136,1080, 0, 0, 0},  //TV = 8.42(274 lines)  AV=2.97  SV=4.99  BV=6.40
    {3111,1136,1080, 0, 0, 0},  //TV = 8.33(293 lines)  AV=2.97  SV=4.99  BV=6.31
    {3333,1136,1080, 0, 0, 0},  //TV = 8.23(314 lines)  AV=2.97  SV=4.99  BV=6.21
    {3566,1136,1080, 0, 0, 0},  //TV = 8.13(336 lines)  AV=2.97  SV=4.99  BV=6.11
    {3820,1136,1080, 0, 0, 0},  //TV = 8.03(360 lines)  AV=2.97  SV=4.99  BV=6.01
    {4117,1136,1080, 0, 0, 0},  //TV = 7.92(388 lines)  AV=2.97  SV=4.99  BV=5.90
    {4413,1136,1080, 0, 0, 0},  //TV = 7.82(416 lines)  AV=2.97  SV=4.99  BV=5.80
    {4720,1136,1080, 0, 0, 0},  //TV = 7.73(445 lines)  AV=2.97  SV=4.99  BV=5.71
    {5059,1136,1080, 0, 0, 0},  //TV = 7.63(477 lines)  AV=2.97  SV=4.99  BV=5.61
    {5408,1136,1080, 0, 0, 0},  //TV = 7.53(510 lines)  AV=2.97  SV=4.99  BV=5.51
    {5800,1136,1080, 0, 0, 0},  //TV = 7.43(547 lines)  AV=2.97  SV=4.99  BV=5.41
    {6202,1136,1080, 0, 0, 0},  //TV = 7.33(585 lines)  AV=2.97  SV=4.99  BV=5.31
    {6646,1136,1080, 0, 0, 0},  //TV = 7.23(627 lines)  AV=2.97  SV=4.99  BV=5.21
    {7123,1136,1080, 0, 0, 0},  //TV = 7.13(672 lines)  AV=2.97  SV=4.99  BV=5.11
    {7673,1136,1080, 0, 0, 0},  //TV = 7.03(724 lines)  AV=2.97  SV=4.99  BV=5.00
    {8223,1136,1080, 0, 0, 0},  //TV = 6.93(776 lines)  AV=2.97  SV=4.99  BV=4.90
    {8329,1216,1064, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.07  BV=4.81
    {8329,1328,1048, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.17  BV=4.70
    {8329,1424,1040, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.26  BV=4.61
    {8329,1536,1040, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.37  BV=4.51
    {8329,1632,1048, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.47  BV=4.41
    {8329,1728,1056, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.56  BV=4.31
    {8329,1840,1064, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.67  BV=4.21
    {8329,2048,1024, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.77  BV=4.11
    {8329,2144,1048, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.87  BV=4.01
    {8329,2352,1024, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.97  BV=3.91
    {16670,1216,1064, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=5.07  BV=3.81
    {16670,1328,1048, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=5.17  BV=3.70
    {16670,1424,1048, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=5.27  BV=3.60
    {16670,1536,1040, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=5.37  BV=3.50
    {16670,1632,1048, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=5.47  BV=3.41
    {16670,1728,1064, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=5.58  BV=3.30
    {24988,1216,1072, 0, 0, 0},  //TV = 5.32(2360 lines)  AV=2.97  SV=5.08  BV=3.21
    {24988,1328,1056, 0, 0, 0},  //TV = 5.32(2360 lines)  AV=2.97  SV=5.18  BV=3.11
    {24988,1424,1056, 0, 0, 0},  //TV = 5.32(2360 lines)  AV=2.97  SV=5.29  BV=3.01
    {24988,1536,1056, 0, 0, 0},  //TV = 5.32(2360 lines)  AV=2.97  SV=5.39  BV=2.90
    {33329,1216,1064, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=5.07  BV=2.81
    {33329,1328,1048, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=5.17  BV=2.70
    {33329,1424,1040, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=5.26  BV=2.61
    {41669,1216,1048, 0, 0, 0},  //TV = 4.58(3936 lines)  AV=2.97  SV=5.05  BV=2.51
    {41669,1328,1032, 0, 0, 0},  //TV = 4.58(3936 lines)  AV=2.97  SV=5.15  BV=2.40
    {41669,1424,1032, 0, 0, 0},  //TV = 4.58(3936 lines)  AV=2.97  SV=5.25  BV=2.30
    {49999,1216,1072, 0, 0, 0},  //TV = 4.32(4724 lines)  AV=2.97  SV=5.08  BV=2.21
    {49999,1328,1048, 0, 0, 0},  //TV = 4.32(4724 lines)  AV=2.97  SV=5.17  BV=2.12
    {58328,1216,1064, 0, 0, 0},  //TV = 4.10(5510 lines)  AV=2.97  SV=5.07  BV=2.00
    {58328,1328,1040, 0, 0, 0},  //TV = 4.10(5510 lines)  AV=2.97  SV=5.16  BV=1.91
    {66669,1216,1064, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=5.07  BV=1.81
    {66669,1328,1048, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=5.17  BV=1.70
    {66669,1424,1040, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=5.26  BV=1.61
    {66669,1536,1040, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=5.37  BV=1.50
    {66669,1632,1048, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=5.47  BV=1.41
    {66669,1728,1064, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=5.58  BV=1.30
    {66669,1840,1064, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=5.67  BV=1.21
    {66669,2048,1024, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=5.77  BV=1.11
    {66669,2144,1048, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=5.87  BV=1.01
    {66669,2352,1024, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=5.97  BV=0.91
    {66669,2448,1056, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=6.07  BV=0.81
    {66669,2656,1048, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=6.17  BV=0.70
    {66669,2864,1040, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=6.27  BV=0.61
    {66669,3072,1040, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=6.37  BV=0.50
    {66669,3328,1024, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=6.47  BV=0.41
    {66669,3456,1056, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=6.56  BV=0.31
    {66669,3840,1024, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=6.67  BV=0.21
    {66669,4096,1032, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=6.78  BV=0.10
    {66669,4352,1040, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=6.88  BV=0.00
    {74998,4224,1024, 0, 0, 0},  //TV = 3.74(7085 lines)  AV=2.97  SV=6.81  BV=-0.10
    {74998,4480,1032, 0, 0, 0},  //TV = 3.74(7085 lines)  AV=2.97  SV=6.91  BV=-0.20
    {83327,4352,1024, 0, 0, 0},  //TV = 3.59(7872 lines)  AV=2.97  SV=6.85  BV=-0.30
    {91668,4224,1032, 0, 0, 0},  //TV = 3.45(8660 lines)  AV=2.97  SV=6.82  BV=-0.40
    {99998,4096,1040, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=6.79  BV=-0.50
    {99998,4480,1024, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=6.89  BV=-0.60
    {99998,4736,1040, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=7.00  BV=-0.70
    {99998,5120,1032, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=7.10  BV=-0.81
    {99998,5504,1024, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=7.19  BV=-0.90
    {99998,5888,1024, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=7.29  BV=-1.00
    {99998,6240,1040, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=7.40  BV=-1.10
    {99998,6704,1032, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=7.49  BV=-1.19
    {99998,7072,1048, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=7.59  BV=-1.29
    {99998,7696,1032, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=7.69  BV=-1.39
    {99998,8192,1048, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=7.80  BV=-1.51
    {99998,8192,1120, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=7.89  BV=-1.60
    {99998,8192,1200, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=7.99  BV=-1.70
    {99998,8192,1288, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=8.10  BV=-1.80
    {99998,8192,1376, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=8.19  BV=-1.90
    {99998,8192,1480, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=8.30  BV=-2.00
    {99998,8192,1584, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=8.39  BV=-2.10
    {99998,8192,1696, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=8.49  BV=-2.20
    {99998,8192,1816, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=8.59  BV=-2.30
    {99998,8192,1944, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=8.69  BV=-2.40
    {99998,8192,2088, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=8.79  BV=-2.50
    {99998,8192,2240, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=8.89  BV=-2.60
    {99998,8192,2400, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=8.99  BV=-2.70
    {99998,8192,2568, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=9.09  BV=-2.80
    {99998,8192,2752, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=9.19  BV=-2.90
    {99998,8192,2952, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=9.29  BV=-3.00
    {99998,8192,3160, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=9.39  BV=-3.10
    {99998,8192,3392, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=9.49  BV=-3.20
    {99998,8192,3632, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=9.59  BV=-3.30
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCaptureStrobePLineTable_50Hz =
{
{
    {95,1216,1064, 0, 0, 0},  //TV = 13.36(8 lines)  AV=2.97  SV=5.07  BV=11.26
    {105,1136,1088, 0, 0, 0},  //TV = 13.22(9 lines)  AV=2.97  SV=5.00  BV=11.19
    {105,1216,1072, 0, 0, 0},  //TV = 13.22(9 lines)  AV=2.97  SV=5.08  BV=11.11
    {116,1216,1064, 0, 0, 0},  //TV = 13.07(10 lines)  AV=2.97  SV=5.07  BV=10.98
    {127,1216,1040, 0, 0, 0},  //TV = 12.94(11 lines)  AV=2.97  SV=5.04  BV=10.88
    {137,1136,1096, 0, 0, 0},  //TV = 12.83(12 lines)  AV=2.97  SV=5.01  BV=10.79
    {137,1216,1088, 0, 0, 0},  //TV = 12.83(12 lines)  AV=2.97  SV=5.10  BV=10.70
    {158,1136,1096, 0, 0, 0},  //TV = 12.63(14 lines)  AV=2.97  SV=5.01  BV=10.59
    {169,1216,1024, 0, 0, 0},  //TV = 12.53(15 lines)  AV=2.97  SV=5.01  BV=10.49
    {179,1216,1048, 0, 0, 0},  //TV = 12.45(16 lines)  AV=2.97  SV=5.05  BV=10.37
    {190,1216,1064, 0, 0, 0},  //TV = 12.36(17 lines)  AV=2.97  SV=5.07  BV=10.26
    {201,1216,1040, 0, 0, 0},  //TV = 12.28(18 lines)  AV=2.97  SV=5.04  BV=10.22
    {222,1136,1088, 0, 0, 0},  //TV = 12.14(20 lines)  AV=2.97  SV=5.00  BV=10.11
    {232,1216,1040, 0, 0, 0},  //TV = 12.07(21 lines)  AV=2.97  SV=5.04  BV=10.01
    {254,1136,1088, 0, 0, 0},  //TV = 11.94(23 lines)  AV=2.97  SV=5.00  BV=9.91
    {264,1216,1048, 0, 0, 0},  //TV = 11.89(24 lines)  AV=2.97  SV=5.05  BV=9.81
    {285,1216,1040, 0, 0, 0},  //TV = 11.78(26 lines)  AV=2.97  SV=5.04  BV=9.71
    {306,1216,1040, 0, 0, 0},  //TV = 11.67(28 lines)  AV=2.97  SV=5.04  BV=9.61
    {328,1216,1040, 0, 0, 0},  //TV = 11.57(30 lines)  AV=2.97  SV=5.04  BV=9.51
    {359,1136,1096, 0, 0, 0},  //TV = 11.44(33 lines)  AV=2.97  SV=5.01  BV=9.40
    {381,1216,1024, 0, 0, 0},  //TV = 11.36(35 lines)  AV=2.97  SV=5.01  BV=9.32
    {412,1136,1096, 0, 0, 0},  //TV = 11.25(38 lines)  AV=2.97  SV=5.01  BV=9.20
    {444,1136,1088, 0, 0, 0},  //TV = 11.14(41 lines)  AV=2.97  SV=5.00  BV=9.11
    {476,1136,1088, 0, 0, 0},  //TV = 11.04(44 lines)  AV=2.97  SV=5.00  BV=9.00
    {508,1136,1088, 0, 0, 0},  //TV = 10.94(47 lines)  AV=2.97  SV=5.00  BV=8.91
    {539,1216,1024, 0, 0, 0},  //TV = 10.86(50 lines)  AV=2.97  SV=5.01  BV=8.81
    {582,1136,1096, 0, 0, 0},  //TV = 10.75(54 lines)  AV=2.97  SV=5.01  BV=8.70
    {624,1136,1096, 0, 0, 0},  //TV = 10.65(58 lines)  AV=2.97  SV=5.01  BV=8.60
    {666,1136,1096, 0, 0, 0},  //TV = 10.55(62 lines)  AV=2.97  SV=5.01  BV=8.51
    {719,1136,1088, 0, 0, 0},  //TV = 10.44(67 lines)  AV=2.97  SV=5.00  BV=8.41
    {772,1136,1088, 0, 0, 0},  //TV = 10.34(72 lines)  AV=2.97  SV=5.00  BV=8.31
    {825,1136,1096, 0, 0, 0},  //TV = 10.24(77 lines)  AV=2.97  SV=5.01  BV=8.20
    {889,1136,1088, 0, 0, 0},  //TV = 10.14(83 lines)  AV=2.97  SV=5.00  BV=8.10
    {952,1136,1088, 0, 0, 0},  //TV = 10.04(89 lines)  AV=2.97  SV=5.00  BV=8.00
    {1016,1136,1088, 0, 0, 0},  //TV = 9.94(95 lines)  AV=2.97  SV=5.00  BV=7.91
    {1090,1136,1088, 0, 0, 0},  //TV = 9.84(102 lines)  AV=2.97  SV=5.00  BV=7.81
    {1174,1136,1088, 0, 0, 0},  //TV = 9.73(110 lines)  AV=2.97  SV=5.00  BV=7.70
    {1259,1136,1088, 0, 0, 0},  //TV = 9.63(118 lines)  AV=2.97  SV=5.00  BV=7.60
    {1344,1136,1088, 0, 0, 0},  //TV = 9.54(126 lines)  AV=2.97  SV=5.00  BV=7.51
    {1439,1136,1088, 0, 0, 0},  //TV = 9.44(135 lines)  AV=2.97  SV=5.00  BV=7.41
    {1545,1136,1088, 0, 0, 0},  //TV = 9.34(145 lines)  AV=2.97  SV=5.00  BV=7.31
    {1651,1136,1088, 0, 0, 0},  //TV = 9.24(155 lines)  AV=2.97  SV=5.00  BV=7.21
    {1778,1136,1088, 0, 0, 0},  //TV = 9.14(167 lines)  AV=2.97  SV=5.00  BV=7.10
    {1915,1136,1088, 0, 0, 0},  //TV = 9.03(180 lines)  AV=2.97  SV=5.00  BV=7.00
    {2032,1136,1088, 0, 0, 0},  //TV = 8.94(191 lines)  AV=2.97  SV=5.00  BV=6.91
    {2190,1136,1088, 0, 0, 0},  //TV = 8.83(206 lines)  AV=2.97  SV=5.00  BV=6.80
    {2360,1136,1080, 0, 0, 0},  //TV = 8.73(222 lines)  AV=2.97  SV=4.99  BV=6.71
    {2529,1136,1080, 0, 0, 0},  //TV = 8.63(238 lines)  AV=2.97  SV=4.99  BV=6.61
    {2698,1136,1088, 0, 0, 0},  //TV = 8.53(254 lines)  AV=2.97  SV=5.00  BV=6.50
    {2910,1136,1080, 0, 0, 0},  //TV = 8.42(274 lines)  AV=2.97  SV=4.99  BV=6.40
    {3111,1136,1080, 0, 0, 0},  //TV = 8.33(293 lines)  AV=2.97  SV=4.99  BV=6.31
    {3333,1136,1080, 0, 0, 0},  //TV = 8.23(314 lines)  AV=2.97  SV=4.99  BV=6.21
    {3566,1136,1080, 0, 0, 0},  //TV = 8.13(336 lines)  AV=2.97  SV=4.99  BV=6.11
    {3820,1136,1080, 0, 0, 0},  //TV = 8.03(360 lines)  AV=2.97  SV=4.99  BV=6.01
    {4117,1136,1080, 0, 0, 0},  //TV = 7.92(388 lines)  AV=2.97  SV=4.99  BV=5.90
    {4413,1136,1080, 0, 0, 0},  //TV = 7.82(416 lines)  AV=2.97  SV=4.99  BV=5.80
    {4720,1136,1080, 0, 0, 0},  //TV = 7.73(445 lines)  AV=2.97  SV=4.99  BV=5.71
    {5059,1136,1080, 0, 0, 0},  //TV = 7.63(477 lines)  AV=2.97  SV=4.99  BV=5.61
    {5408,1136,1080, 0, 0, 0},  //TV = 7.53(510 lines)  AV=2.97  SV=4.99  BV=5.51
    {5800,1136,1080, 0, 0, 0},  //TV = 7.43(547 lines)  AV=2.97  SV=4.99  BV=5.41
    {6202,1136,1080, 0, 0, 0},  //TV = 7.33(585 lines)  AV=2.97  SV=4.99  BV=5.31
    {6646,1136,1080, 0, 0, 0},  //TV = 7.23(627 lines)  AV=2.97  SV=4.99  BV=5.21
    {7123,1136,1080, 0, 0, 0},  //TV = 7.13(672 lines)  AV=2.97  SV=4.99  BV=5.11
    {7673,1136,1080, 0, 0, 0},  //TV = 7.03(724 lines)  AV=2.97  SV=4.99  BV=5.00
    {8223,1136,1080, 0, 0, 0},  //TV = 6.93(776 lines)  AV=2.97  SV=4.99  BV=4.90
    {8805,1136,1080, 0, 0, 0},  //TV = 6.83(831 lines)  AV=2.97  SV=4.99  BV=4.81
    {9440,1136,1080, 0, 0, 0},  //TV = 6.73(891 lines)  AV=2.97  SV=4.99  BV=4.71
    {10002,1136,1096, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.01  BV=4.60
    {10002,1216,1088, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.10  BV=4.51
    {10002,1328,1072, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.21  BV=4.41
    {10002,1424,1064, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.30  BV=4.32
    {10002,1536,1064, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.41  BV=4.21
    {10002,1632,1072, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.50  BV=4.11
    {10002,1728,1080, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.60  BV=4.02
    {10002,1936,1040, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.71  BV=3.91
    {10002,2048,1048, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.80  BV=3.82
    {10002,2240,1024, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.89  BV=3.72
    {20004,1136,1096, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=5.01  BV=3.60
    {20004,1216,1088, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=5.10  BV=3.51
    {20004,1328,1072, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=5.21  BV=3.41
    {20004,1424,1064, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=5.30  BV=3.32
    {20004,1536,1072, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=5.42  BV=3.20
    {20004,1632,1072, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=5.50  BV=3.11
    {29995,1216,1024, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=5.01  BV=3.02
    {29995,1216,1104, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=5.12  BV=2.91
    {29995,1328,1080, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=5.22  BV=2.81
    {29995,1424,1080, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=5.32  BV=2.71
    {39996,1136,1096, 0, 0, 0},  //TV = 4.64(3778 lines)  AV=2.97  SV=5.01  BV=2.60
    {39996,1216,1088, 0, 0, 0},  //TV = 4.64(3778 lines)  AV=2.97  SV=5.10  BV=2.51
    {39996,1328,1072, 0, 0, 0},  //TV = 4.64(3778 lines)  AV=2.97  SV=5.21  BV=2.41
    {39996,1424,1072, 0, 0, 0},  //TV = 4.64(3778 lines)  AV=2.97  SV=5.31  BV=2.31
    {49998,1216,1072, 0, 0, 0},  //TV = 4.32(4723 lines)  AV=2.97  SV=5.08  BV=2.21
    {49998,1328,1048, 0, 0, 0},  //TV = 4.32(4723 lines)  AV=2.97  SV=5.17  BV=2.12
    {60001,1216,1024, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=5.01  BV=2.02
    {60001,1216,1104, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=5.12  BV=1.91
    {60001,1328,1080, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=5.22  BV=1.81
    {60001,1424,1080, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=5.32  BV=1.71
    {60001,1536,1072, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=5.42  BV=1.61
    {60001,1632,1080, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=5.51  BV=1.51
    {60001,1840,1032, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=5.62  BV=1.41
    {60001,1936,1048, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=5.72  BV=1.31
    {60001,2048,1064, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=5.82  BV=1.21
    {60001,2240,1040, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=5.92  BV=1.11
    {60001,2448,1024, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=6.02  BV=1.01
    {60001,2560,1048, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=6.12  BV=0.91
    {60001,2752,1040, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=6.21  BV=0.82
    {60001,2960,1040, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=6.32  BV=0.71
    {60001,3200,1032, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=6.42  BV=0.61
    {60001,3456,1024, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=6.52  BV=0.51
    {60001,3584,1056, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=6.62  BV=0.41
    {60001,3840,1056, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=6.72  BV=0.31
    {60001,4224,1032, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=6.82  BV=0.21
    {60001,4480,1040, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=6.92  BV=0.11
    {70002,4224,1024, 0, 0, 0},  //TV = 3.84(6613 lines)  AV=2.97  SV=6.81  BV=-0.00
    {70002,4480,1032, 0, 0, 0},  //TV = 3.84(6613 lines)  AV=2.97  SV=6.91  BV=-0.10
    {80004,4224,1024, 0, 0, 0},  //TV = 3.64(7558 lines)  AV=2.97  SV=6.81  BV=-0.20
    {80004,4480,1040, 0, 0, 0},  //TV = 3.64(7558 lines)  AV=2.97  SV=6.92  BV=-0.30
    {89995,4224,1048, 0, 0, 0},  //TV = 3.47(8502 lines)  AV=2.97  SV=6.84  BV=-0.40
    {99997,4096,1040, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=6.79  BV=-0.50
    {99997,4480,1024, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=6.89  BV=-0.60
    {99997,4736,1040, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=7.00  BV=-0.70
    {99997,5120,1032, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=7.10  BV=-0.81
    {99997,5504,1024, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=7.19  BV=-0.90
    {99997,5888,1024, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=7.29  BV=-1.00
    {99997,6240,1040, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=7.40  BV=-1.10
    {99997,6704,1032, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=7.49  BV=-1.19
    {99997,7072,1048, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=7.59  BV=-1.29
    {99997,7696,1032, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=7.69  BV=-1.39
    {99997,8192,1048, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=7.80  BV=-1.51
    {99997,8192,1120, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=7.89  BV=-1.60
    {99997,8192,1200, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=7.99  BV=-1.70
    {99997,8192,1288, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=8.10  BV=-1.80
    {99997,8192,1376, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=8.19  BV=-1.90
    {99997,8192,1480, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=8.30  BV=-2.00
    {99997,8192,1584, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=8.39  BV=-2.10
    {99997,8192,1696, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=8.49  BV=-2.20
    {99997,8192,1816, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=8.59  BV=-2.30
    {99997,8192,1944, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=8.69  BV=-2.40
    {99997,8192,2088, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=8.79  BV=-2.50
    {99997,8192,2240, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=8.89  BV=-2.60
    {99997,8192,2400, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=8.99  BV=-2.70
    {99997,8192,2568, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=9.09  BV=-2.80
    {99997,8192,2752, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=9.19  BV=-2.90
    {99997,8192,2952, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=9.29  BV=-3.00
    {99997,8192,3160, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=9.39  BV=-3.10
    {99997,8192,3392, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=9.49  BV=-3.20
    {99997,8192,3632, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=9.59  BV=-3.30
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_StrobeTable =
{
    AETABLE_STROBE,    //eAETableID
    147,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    113,    //i4MaxBV
    -33,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sCaptureStrobePLineTable_60Hz,
    sCaptureStrobePLineTable_50Hz,
    NULL,
};

static strEvPline sAEScene1PLineTable_60Hz =
{
{
    {95,1216,1064, 0, 0, 0},  //TV = 13.36(8 lines)  AV=2.97  SV=5.07  BV=11.26
    {105,1136,1088, 0, 0, 0},  //TV = 13.22(9 lines)  AV=2.97  SV=5.00  BV=11.19
    {105,1216,1072, 0, 0, 0},  //TV = 13.22(9 lines)  AV=2.97  SV=5.08  BV=11.11
    {116,1216,1064, 0, 0, 0},  //TV = 13.07(10 lines)  AV=2.97  SV=5.07  BV=10.98
    {127,1216,1040, 0, 0, 0},  //TV = 12.94(11 lines)  AV=2.97  SV=5.04  BV=10.88
    {137,1136,1096, 0, 0, 0},  //TV = 12.83(12 lines)  AV=2.97  SV=5.01  BV=10.79
    {137,1216,1088, 0, 0, 0},  //TV = 12.83(12 lines)  AV=2.97  SV=5.10  BV=10.70
    {158,1136,1096, 0, 0, 0},  //TV = 12.63(14 lines)  AV=2.97  SV=5.01  BV=10.59
    {169,1216,1024, 0, 0, 0},  //TV = 12.53(15 lines)  AV=2.97  SV=5.01  BV=10.49
    {179,1216,1048, 0, 0, 0},  //TV = 12.45(16 lines)  AV=2.97  SV=5.05  BV=10.37
    {190,1216,1064, 0, 0, 0},  //TV = 12.36(17 lines)  AV=2.97  SV=5.07  BV=10.26
    {201,1216,1040, 0, 0, 0},  //TV = 12.28(18 lines)  AV=2.97  SV=5.04  BV=10.22
    {222,1136,1088, 0, 0, 0},  //TV = 12.14(20 lines)  AV=2.97  SV=5.00  BV=10.11
    {232,1216,1040, 0, 0, 0},  //TV = 12.07(21 lines)  AV=2.97  SV=5.04  BV=10.01
    {254,1136,1088, 0, 0, 0},  //TV = 11.94(23 lines)  AV=2.97  SV=5.00  BV=9.91
    {264,1216,1048, 0, 0, 0},  //TV = 11.89(24 lines)  AV=2.97  SV=5.05  BV=9.81
    {285,1216,1040, 0, 0, 0},  //TV = 11.78(26 lines)  AV=2.97  SV=5.04  BV=9.71
    {306,1216,1040, 0, 0, 0},  //TV = 11.67(28 lines)  AV=2.97  SV=5.04  BV=9.61
    {328,1216,1040, 0, 0, 0},  //TV = 11.57(30 lines)  AV=2.97  SV=5.04  BV=9.51
    {359,1136,1096, 0, 0, 0},  //TV = 11.44(33 lines)  AV=2.97  SV=5.01  BV=9.40
    {381,1216,1024, 0, 0, 0},  //TV = 11.36(35 lines)  AV=2.97  SV=5.01  BV=9.32
    {412,1136,1096, 0, 0, 0},  //TV = 11.25(38 lines)  AV=2.97  SV=5.01  BV=9.20
    {444,1136,1088, 0, 0, 0},  //TV = 11.14(41 lines)  AV=2.97  SV=5.00  BV=9.11
    {476,1136,1088, 0, 0, 0},  //TV = 11.04(44 lines)  AV=2.97  SV=5.00  BV=9.00
    {508,1136,1088, 0, 0, 0},  //TV = 10.94(47 lines)  AV=2.97  SV=5.00  BV=8.91
    {539,1216,1024, 0, 0, 0},  //TV = 10.86(50 lines)  AV=2.97  SV=5.01  BV=8.81
    {582,1136,1096, 0, 0, 0},  //TV = 10.75(54 lines)  AV=2.97  SV=5.01  BV=8.70
    {624,1136,1096, 0, 0, 0},  //TV = 10.65(58 lines)  AV=2.97  SV=5.01  BV=8.60
    {666,1136,1096, 0, 0, 0},  //TV = 10.55(62 lines)  AV=2.97  SV=5.01  BV=8.51
    {719,1136,1088, 0, 0, 0},  //TV = 10.44(67 lines)  AV=2.97  SV=5.00  BV=8.41
    {772,1136,1088, 0, 0, 0},  //TV = 10.34(72 lines)  AV=2.97  SV=5.00  BV=8.31
    {825,1136,1096, 0, 0, 0},  //TV = 10.24(77 lines)  AV=2.97  SV=5.01  BV=8.20
    {889,1136,1088, 0, 0, 0},  //TV = 10.14(83 lines)  AV=2.97  SV=5.00  BV=8.10
    {952,1136,1088, 0, 0, 0},  //TV = 10.04(89 lines)  AV=2.97  SV=5.00  BV=8.00
    {1016,1136,1088, 0, 0, 0},  //TV = 9.94(95 lines)  AV=2.97  SV=5.00  BV=7.91
    {1090,1136,1088, 0, 0, 0},  //TV = 9.84(102 lines)  AV=2.97  SV=5.00  BV=7.81
    {1174,1136,1088, 0, 0, 0},  //TV = 9.73(110 lines)  AV=2.97  SV=5.00  BV=7.70
    {1259,1136,1088, 0, 0, 0},  //TV = 9.63(118 lines)  AV=2.97  SV=5.00  BV=7.60
    {1344,1136,1088, 0, 0, 0},  //TV = 9.54(126 lines)  AV=2.97  SV=5.00  BV=7.51
    {1439,1136,1088, 0, 0, 0},  //TV = 9.44(135 lines)  AV=2.97  SV=5.00  BV=7.41
    {1545,1136,1088, 0, 0, 0},  //TV = 9.34(145 lines)  AV=2.97  SV=5.00  BV=7.31
    {1651,1136,1088, 0, 0, 0},  //TV = 9.24(155 lines)  AV=2.97  SV=5.00  BV=7.21
    {1778,1136,1088, 0, 0, 0},  //TV = 9.14(167 lines)  AV=2.97  SV=5.00  BV=7.10
    {1915,1136,1088, 0, 0, 0},  //TV = 9.03(180 lines)  AV=2.97  SV=5.00  BV=7.00
    {2032,1136,1088, 0, 0, 0},  //TV = 8.94(191 lines)  AV=2.97  SV=5.00  BV=6.91
    {2190,1136,1088, 0, 0, 0},  //TV = 8.83(206 lines)  AV=2.97  SV=5.00  BV=6.80
    {2360,1136,1080, 0, 0, 0},  //TV = 8.73(222 lines)  AV=2.97  SV=4.99  BV=6.71
    {2529,1136,1080, 0, 0, 0},  //TV = 8.63(238 lines)  AV=2.97  SV=4.99  BV=6.61
    {2698,1136,1088, 0, 0, 0},  //TV = 8.53(254 lines)  AV=2.97  SV=5.00  BV=6.50
    {2910,1136,1080, 0, 0, 0},  //TV = 8.42(274 lines)  AV=2.97  SV=4.99  BV=6.40
    {3111,1136,1080, 0, 0, 0},  //TV = 8.33(293 lines)  AV=2.97  SV=4.99  BV=6.31
    {3333,1136,1080, 0, 0, 0},  //TV = 8.23(314 lines)  AV=2.97  SV=4.99  BV=6.21
    {3566,1136,1080, 0, 0, 0},  //TV = 8.13(336 lines)  AV=2.97  SV=4.99  BV=6.11
    {3820,1136,1080, 0, 0, 0},  //TV = 8.03(360 lines)  AV=2.97  SV=4.99  BV=6.01
    {4117,1136,1080, 0, 0, 0},  //TV = 7.92(388 lines)  AV=2.97  SV=4.99  BV=5.90
    {4413,1136,1080, 0, 0, 0},  //TV = 7.82(416 lines)  AV=2.97  SV=4.99  BV=5.80
    {4720,1136,1080, 0, 0, 0},  //TV = 7.73(445 lines)  AV=2.97  SV=4.99  BV=5.71
    {5059,1136,1080, 0, 0, 0},  //TV = 7.63(477 lines)  AV=2.97  SV=4.99  BV=5.61
    {5408,1136,1080, 0, 0, 0},  //TV = 7.53(510 lines)  AV=2.97  SV=4.99  BV=5.51
    {5800,1136,1080, 0, 0, 0},  //TV = 7.43(547 lines)  AV=2.97  SV=4.99  BV=5.41
    {6202,1136,1080, 0, 0, 0},  //TV = 7.33(585 lines)  AV=2.97  SV=4.99  BV=5.31
    {6646,1136,1080, 0, 0, 0},  //TV = 7.23(627 lines)  AV=2.97  SV=4.99  BV=5.21
    {7123,1136,1080, 0, 0, 0},  //TV = 7.13(672 lines)  AV=2.97  SV=4.99  BV=5.11
    {7673,1136,1080, 0, 0, 0},  //TV = 7.03(724 lines)  AV=2.97  SV=4.99  BV=5.00
    {8223,1136,1080, 0, 0, 0},  //TV = 6.93(776 lines)  AV=2.97  SV=4.99  BV=4.90
    {8329,1216,1064, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.07  BV=4.81
    {8329,1328,1048, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.17  BV=4.70
    {8329,1424,1040, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.26  BV=4.61
    {8329,1536,1040, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.37  BV=4.51
    {8329,1632,1048, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.47  BV=4.41
    {8329,1728,1056, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.56  BV=4.31
    {8329,1840,1064, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.67  BV=4.21
    {8329,2048,1024, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.77  BV=4.11
    {8329,2144,1048, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.87  BV=4.01
    {8329,2352,1024, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.97  BV=3.91
    {16670,1216,1064, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=5.07  BV=3.81
    {16670,1328,1048, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=5.17  BV=3.70
    {16670,1424,1048, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=5.27  BV=3.60
    {16670,1536,1040, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=5.37  BV=3.50
    {16670,1632,1048, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=5.47  BV=3.41
    {16670,1728,1064, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=5.58  BV=3.30
    {24988,1216,1072, 0, 0, 0},  //TV = 5.32(2360 lines)  AV=2.97  SV=5.08  BV=3.21
    {24988,1328,1056, 0, 0, 0},  //TV = 5.32(2360 lines)  AV=2.97  SV=5.18  BV=3.11
    {24988,1424,1056, 0, 0, 0},  //TV = 5.32(2360 lines)  AV=2.97  SV=5.29  BV=3.01
    {24988,1536,1056, 0, 0, 0},  //TV = 5.32(2360 lines)  AV=2.97  SV=5.39  BV=2.90
    {33329,1216,1064, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=5.07  BV=2.81
    {33329,1328,1048, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=5.17  BV=2.70
    {33329,1424,1040, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=5.26  BV=2.61
    {41669,1216,1048, 0, 0, 0},  //TV = 4.58(3936 lines)  AV=2.97  SV=5.05  BV=2.51
    {41669,1328,1032, 0, 0, 0},  //TV = 4.58(3936 lines)  AV=2.97  SV=5.15  BV=2.40
    {41669,1424,1032, 0, 0, 0},  //TV = 4.58(3936 lines)  AV=2.97  SV=5.25  BV=2.30
    {49999,1216,1072, 0, 0, 0},  //TV = 4.32(4724 lines)  AV=2.97  SV=5.08  BV=2.21
    {49999,1328,1048, 0, 0, 0},  //TV = 4.32(4724 lines)  AV=2.97  SV=5.17  BV=2.12
    {58328,1216,1064, 0, 0, 0},  //TV = 4.10(5510 lines)  AV=2.97  SV=5.07  BV=2.00
    {58328,1328,1040, 0, 0, 0},  //TV = 4.10(5510 lines)  AV=2.97  SV=5.16  BV=1.91
    {66669,1216,1064, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=5.07  BV=1.81
    {66669,1328,1048, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=5.17  BV=1.70
    {66669,1424,1040, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=5.26  BV=1.61
    {66669,1536,1040, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=5.37  BV=1.50
    {66669,1632,1048, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=5.47  BV=1.41
    {66669,1728,1064, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=5.58  BV=1.30
    {66669,1840,1064, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=5.67  BV=1.21
    {66669,2048,1024, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=5.77  BV=1.11
    {66669,2144,1048, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=5.87  BV=1.01
    {66669,2352,1024, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=5.97  BV=0.91
    {66669,2448,1056, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=6.07  BV=0.81
    {66669,2656,1048, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=6.17  BV=0.70
    {66669,2864,1040, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=6.27  BV=0.61
    {66669,3072,1040, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=6.37  BV=0.50
    {66669,3328,1024, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=6.47  BV=0.41
    {66669,3456,1056, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=6.56  BV=0.31
    {66669,3840,1024, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=6.67  BV=0.21
    {66669,4096,1032, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=6.78  BV=0.10
    {66669,4352,1040, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=6.88  BV=0.00
    {74998,4224,1024, 0, 0, 0},  //TV = 3.74(7085 lines)  AV=2.97  SV=6.81  BV=-0.10
    {74998,4480,1032, 0, 0, 0},  //TV = 3.74(7085 lines)  AV=2.97  SV=6.91  BV=-0.20
    {83327,4352,1024, 0, 0, 0},  //TV = 3.59(7872 lines)  AV=2.97  SV=6.85  BV=-0.30
    {91668,4224,1032, 0, 0, 0},  //TV = 3.45(8660 lines)  AV=2.97  SV=6.82  BV=-0.40
    {99998,4096,1048, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=6.80  BV=-0.51
    {108327,4096,1032, 0, 0, 0},  //TV = 3.21(10234 lines)  AV=2.97  SV=6.78  BV=-0.60
    {116667,4096,1032, 0, 0, 0},  //TV = 3.10(11022 lines)  AV=2.97  SV=6.78  BV=-0.71
    {124997,4096,1032, 0, 0, 0},  //TV = 3.00(11809 lines)  AV=2.97  SV=6.78  BV=-0.81
    {133326,4096,1032, 0, 0, 0},  //TV = 2.91(12596 lines)  AV=2.97  SV=6.78  BV=-0.90
    {141656,4096,1040, 0, 0, 0},  //TV = 2.82(13383 lines)  AV=2.97  SV=6.79  BV=-1.00
    {149996,4224,1024, 0, 0, 0},  //TV = 2.74(14171 lines)  AV=2.97  SV=6.81  BV=-1.10
    {158326,4224,1040, 0, 0, 0},  //TV = 2.66(14958 lines)  AV=2.97  SV=6.83  BV=-1.20
    {174996,4096,1040, 0, 0, 0},  //TV = 2.51(16534 lines)  AV=2.97  SV=6.79  BV=-1.30
    {183325,4224,1032, 0, 0, 0},  //TV = 2.45(17320 lines)  AV=2.97  SV=6.82  BV=-1.40
    {199995,4096,1040, 0, 0, 0},  //TV = 2.32(18895 lines)  AV=2.97  SV=6.79  BV=-1.50
    {199995,4480,1024, 0, 0, 0},  //TV = 2.32(18895 lines)  AV=2.97  SV=6.89  BV=-1.60
    {199995,4736,1040, 0, 0, 0},  //TV = 2.32(18895 lines)  AV=2.97  SV=7.00  BV=-1.70
    {199995,5120,1032, 0, 0, 0},  //TV = 2.32(18895 lines)  AV=2.97  SV=7.10  BV=-1.81
    {199995,5504,1024, 0, 0, 0},  //TV = 2.32(18895 lines)  AV=2.97  SV=7.19  BV=-1.90
    {199995,5888,1024, 0, 0, 0},  //TV = 2.32(18895 lines)  AV=2.97  SV=7.29  BV=-2.00
    {199995,6240,1040, 0, 0, 0},  //TV = 2.32(18895 lines)  AV=2.97  SV=7.40  BV=-2.10
    {199995,6704,1032, 0, 0, 0},  //TV = 2.32(18895 lines)  AV=2.97  SV=7.49  BV=-2.19
    {199995,7072,1048, 0, 0, 0},  //TV = 2.32(18895 lines)  AV=2.97  SV=7.59  BV=-2.29
    {199995,7696,1032, 0, 0, 0},  //TV = 2.32(18895 lines)  AV=2.97  SV=7.69  BV=-2.39
    {199995,8192,1048, 0, 0, 0},  //TV = 2.32(18895 lines)  AV=2.97  SV=7.80  BV=-2.51
    {199995,8192,1120, 0, 0, 0},  //TV = 2.32(18895 lines)  AV=2.97  SV=7.89  BV=-2.60
    {199995,8192,1200, 0, 0, 0},  //TV = 2.32(18895 lines)  AV=2.97  SV=7.99  BV=-2.70
    {199995,8192,1288, 0, 0, 0},  //TV = 2.32(18895 lines)  AV=2.97  SV=8.10  BV=-2.80
    {199995,8192,1376, 0, 0, 0},  //TV = 2.32(18895 lines)  AV=2.97  SV=8.19  BV=-2.90
    {199995,8192,1480, 0, 0, 0},  //TV = 2.32(18895 lines)  AV=2.97  SV=8.30  BV=-3.00
    {199995,8192,1584, 0, 0, 0},  //TV = 2.32(18895 lines)  AV=2.97  SV=8.39  BV=-3.10
    {199995,8192,1696, 0, 0, 0},  //TV = 2.32(18895 lines)  AV=2.97  SV=8.49  BV=-3.20
    {199995,8192,1816, 0, 0, 0},  //TV = 2.32(18895 lines)  AV=2.97  SV=8.59  BV=-3.30
    {199995,8192,1944, 0, 0, 0},  //TV = 2.32(18895 lines)  AV=2.97  SV=8.69  BV=-3.40
    {199995,8192,2088, 0, 0, 0},  //TV = 2.32(18895 lines)  AV=2.97  SV=8.79  BV=-3.50
    {199995,8192,2240, 0, 0, 0},  //TV = 2.32(18895 lines)  AV=2.97  SV=8.89  BV=-3.60
    {199995,8192,2400, 0, 0, 0},  //TV = 2.32(18895 lines)  AV=2.97  SV=8.99  BV=-3.70
    {199995,8192,2568, 0, 0, 0},  //TV = 2.32(18895 lines)  AV=2.97  SV=9.09  BV=-3.80
    {199995,8192,2752, 0, 0, 0},  //TV = 2.32(18895 lines)  AV=2.97  SV=9.19  BV=-3.90
    {199995,8192,2952, 0, 0, 0},  //TV = 2.32(18895 lines)  AV=2.97  SV=9.29  BV=-4.00
    {199995,8192,3160, 0, 0, 0},  //TV = 2.32(18895 lines)  AV=2.97  SV=9.39  BV=-4.10
    {199995,8192,3392, 0, 0, 0},  //TV = 2.32(18895 lines)  AV=2.97  SV=9.49  BV=-4.20
    {199995,8192,3632, 0, 0, 0},  //TV = 2.32(18895 lines)  AV=2.97  SV=9.59  BV=-4.30
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sAEScene1PLineTable_50Hz =
{
{
    {95,1216,1064, 0, 0, 0},  //TV = 13.36(8 lines)  AV=2.97  SV=5.07  BV=11.26
    {105,1136,1088, 0, 0, 0},  //TV = 13.22(9 lines)  AV=2.97  SV=5.00  BV=11.19
    {105,1216,1072, 0, 0, 0},  //TV = 13.22(9 lines)  AV=2.97  SV=5.08  BV=11.11
    {116,1216,1064, 0, 0, 0},  //TV = 13.07(10 lines)  AV=2.97  SV=5.07  BV=10.98
    {127,1216,1040, 0, 0, 0},  //TV = 12.94(11 lines)  AV=2.97  SV=5.04  BV=10.88
    {137,1136,1096, 0, 0, 0},  //TV = 12.83(12 lines)  AV=2.97  SV=5.01  BV=10.79
    {137,1216,1088, 0, 0, 0},  //TV = 12.83(12 lines)  AV=2.97  SV=5.10  BV=10.70
    {158,1136,1096, 0, 0, 0},  //TV = 12.63(14 lines)  AV=2.97  SV=5.01  BV=10.59
    {169,1216,1024, 0, 0, 0},  //TV = 12.53(15 lines)  AV=2.97  SV=5.01  BV=10.49
    {179,1216,1048, 0, 0, 0},  //TV = 12.45(16 lines)  AV=2.97  SV=5.05  BV=10.37
    {190,1216,1064, 0, 0, 0},  //TV = 12.36(17 lines)  AV=2.97  SV=5.07  BV=10.26
    {201,1216,1040, 0, 0, 0},  //TV = 12.28(18 lines)  AV=2.97  SV=5.04  BV=10.22
    {222,1136,1088, 0, 0, 0},  //TV = 12.14(20 lines)  AV=2.97  SV=5.00  BV=10.11
    {232,1216,1040, 0, 0, 0},  //TV = 12.07(21 lines)  AV=2.97  SV=5.04  BV=10.01
    {254,1136,1088, 0, 0, 0},  //TV = 11.94(23 lines)  AV=2.97  SV=5.00  BV=9.91
    {264,1216,1048, 0, 0, 0},  //TV = 11.89(24 lines)  AV=2.97  SV=5.05  BV=9.81
    {285,1216,1040, 0, 0, 0},  //TV = 11.78(26 lines)  AV=2.97  SV=5.04  BV=9.71
    {306,1216,1040, 0, 0, 0},  //TV = 11.67(28 lines)  AV=2.97  SV=5.04  BV=9.61
    {328,1216,1040, 0, 0, 0},  //TV = 11.57(30 lines)  AV=2.97  SV=5.04  BV=9.51
    {359,1136,1096, 0, 0, 0},  //TV = 11.44(33 lines)  AV=2.97  SV=5.01  BV=9.40
    {381,1216,1024, 0, 0, 0},  //TV = 11.36(35 lines)  AV=2.97  SV=5.01  BV=9.32
    {412,1136,1096, 0, 0, 0},  //TV = 11.25(38 lines)  AV=2.97  SV=5.01  BV=9.20
    {444,1136,1088, 0, 0, 0},  //TV = 11.14(41 lines)  AV=2.97  SV=5.00  BV=9.11
    {476,1136,1088, 0, 0, 0},  //TV = 11.04(44 lines)  AV=2.97  SV=5.00  BV=9.00
    {508,1136,1088, 0, 0, 0},  //TV = 10.94(47 lines)  AV=2.97  SV=5.00  BV=8.91
    {539,1216,1024, 0, 0, 0},  //TV = 10.86(50 lines)  AV=2.97  SV=5.01  BV=8.81
    {582,1136,1096, 0, 0, 0},  //TV = 10.75(54 lines)  AV=2.97  SV=5.01  BV=8.70
    {624,1136,1096, 0, 0, 0},  //TV = 10.65(58 lines)  AV=2.97  SV=5.01  BV=8.60
    {666,1136,1096, 0, 0, 0},  //TV = 10.55(62 lines)  AV=2.97  SV=5.01  BV=8.51
    {719,1136,1088, 0, 0, 0},  //TV = 10.44(67 lines)  AV=2.97  SV=5.00  BV=8.41
    {772,1136,1088, 0, 0, 0},  //TV = 10.34(72 lines)  AV=2.97  SV=5.00  BV=8.31
    {825,1136,1096, 0, 0, 0},  //TV = 10.24(77 lines)  AV=2.97  SV=5.01  BV=8.20
    {889,1136,1088, 0, 0, 0},  //TV = 10.14(83 lines)  AV=2.97  SV=5.00  BV=8.10
    {952,1136,1088, 0, 0, 0},  //TV = 10.04(89 lines)  AV=2.97  SV=5.00  BV=8.00
    {1016,1136,1088, 0, 0, 0},  //TV = 9.94(95 lines)  AV=2.97  SV=5.00  BV=7.91
    {1090,1136,1088, 0, 0, 0},  //TV = 9.84(102 lines)  AV=2.97  SV=5.00  BV=7.81
    {1174,1136,1088, 0, 0, 0},  //TV = 9.73(110 lines)  AV=2.97  SV=5.00  BV=7.70
    {1259,1136,1088, 0, 0, 0},  //TV = 9.63(118 lines)  AV=2.97  SV=5.00  BV=7.60
    {1344,1136,1088, 0, 0, 0},  //TV = 9.54(126 lines)  AV=2.97  SV=5.00  BV=7.51
    {1439,1136,1088, 0, 0, 0},  //TV = 9.44(135 lines)  AV=2.97  SV=5.00  BV=7.41
    {1545,1136,1088, 0, 0, 0},  //TV = 9.34(145 lines)  AV=2.97  SV=5.00  BV=7.31
    {1651,1136,1088, 0, 0, 0},  //TV = 9.24(155 lines)  AV=2.97  SV=5.00  BV=7.21
    {1778,1136,1088, 0, 0, 0},  //TV = 9.14(167 lines)  AV=2.97  SV=5.00  BV=7.10
    {1915,1136,1088, 0, 0, 0},  //TV = 9.03(180 lines)  AV=2.97  SV=5.00  BV=7.00
    {2032,1136,1088, 0, 0, 0},  //TV = 8.94(191 lines)  AV=2.97  SV=5.00  BV=6.91
    {2190,1136,1088, 0, 0, 0},  //TV = 8.83(206 lines)  AV=2.97  SV=5.00  BV=6.80
    {2360,1136,1080, 0, 0, 0},  //TV = 8.73(222 lines)  AV=2.97  SV=4.99  BV=6.71
    {2529,1136,1080, 0, 0, 0},  //TV = 8.63(238 lines)  AV=2.97  SV=4.99  BV=6.61
    {2698,1136,1088, 0, 0, 0},  //TV = 8.53(254 lines)  AV=2.97  SV=5.00  BV=6.50
    {2910,1136,1080, 0, 0, 0},  //TV = 8.42(274 lines)  AV=2.97  SV=4.99  BV=6.40
    {3111,1136,1080, 0, 0, 0},  //TV = 8.33(293 lines)  AV=2.97  SV=4.99  BV=6.31
    {3333,1136,1080, 0, 0, 0},  //TV = 8.23(314 lines)  AV=2.97  SV=4.99  BV=6.21
    {3566,1136,1080, 0, 0, 0},  //TV = 8.13(336 lines)  AV=2.97  SV=4.99  BV=6.11
    {3820,1136,1080, 0, 0, 0},  //TV = 8.03(360 lines)  AV=2.97  SV=4.99  BV=6.01
    {4117,1136,1080, 0, 0, 0},  //TV = 7.92(388 lines)  AV=2.97  SV=4.99  BV=5.90
    {4413,1136,1080, 0, 0, 0},  //TV = 7.82(416 lines)  AV=2.97  SV=4.99  BV=5.80
    {4720,1136,1080, 0, 0, 0},  //TV = 7.73(445 lines)  AV=2.97  SV=4.99  BV=5.71
    {5059,1136,1080, 0, 0, 0},  //TV = 7.63(477 lines)  AV=2.97  SV=4.99  BV=5.61
    {5408,1136,1080, 0, 0, 0},  //TV = 7.53(510 lines)  AV=2.97  SV=4.99  BV=5.51
    {5800,1136,1080, 0, 0, 0},  //TV = 7.43(547 lines)  AV=2.97  SV=4.99  BV=5.41
    {6202,1136,1080, 0, 0, 0},  //TV = 7.33(585 lines)  AV=2.97  SV=4.99  BV=5.31
    {6646,1136,1080, 0, 0, 0},  //TV = 7.23(627 lines)  AV=2.97  SV=4.99  BV=5.21
    {7123,1136,1080, 0, 0, 0},  //TV = 7.13(672 lines)  AV=2.97  SV=4.99  BV=5.11
    {7673,1136,1080, 0, 0, 0},  //TV = 7.03(724 lines)  AV=2.97  SV=4.99  BV=5.00
    {8223,1136,1080, 0, 0, 0},  //TV = 6.93(776 lines)  AV=2.97  SV=4.99  BV=4.90
    {8805,1136,1080, 0, 0, 0},  //TV = 6.83(831 lines)  AV=2.97  SV=4.99  BV=4.81
    {9440,1136,1080, 0, 0, 0},  //TV = 6.73(891 lines)  AV=2.97  SV=4.99  BV=4.71
    {10002,1136,1096, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.01  BV=4.60
    {10002,1216,1088, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.10  BV=4.51
    {10002,1328,1072, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.21  BV=4.41
    {10002,1424,1064, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.30  BV=4.32
    {10002,1536,1064, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.41  BV=4.21
    {10002,1632,1072, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.50  BV=4.11
    {10002,1728,1080, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.60  BV=4.02
    {10002,1936,1040, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.71  BV=3.91
    {10002,2048,1048, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.80  BV=3.82
    {10002,2240,1024, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.89  BV=3.72
    {20004,1136,1096, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=5.01  BV=3.60
    {20004,1216,1088, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=5.10  BV=3.51
    {20004,1328,1072, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=5.21  BV=3.41
    {20004,1424,1064, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=5.30  BV=3.32
    {20004,1536,1072, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=5.42  BV=3.20
    {20004,1632,1072, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=5.50  BV=3.11
    {29995,1216,1024, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=5.01  BV=3.02
    {29995,1216,1104, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=5.12  BV=2.91
    {29995,1328,1080, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=5.22  BV=2.81
    {29995,1424,1080, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=5.32  BV=2.71
    {39996,1136,1096, 0, 0, 0},  //TV = 4.64(3778 lines)  AV=2.97  SV=5.01  BV=2.60
    {39996,1216,1088, 0, 0, 0},  //TV = 4.64(3778 lines)  AV=2.97  SV=5.10  BV=2.51
    {39996,1328,1072, 0, 0, 0},  //TV = 4.64(3778 lines)  AV=2.97  SV=5.21  BV=2.41
    {39996,1424,1072, 0, 0, 0},  //TV = 4.64(3778 lines)  AV=2.97  SV=5.31  BV=2.31
    {49998,1216,1072, 0, 0, 0},  //TV = 4.32(4723 lines)  AV=2.97  SV=5.08  BV=2.21
    {49998,1328,1048, 0, 0, 0},  //TV = 4.32(4723 lines)  AV=2.97  SV=5.17  BV=2.12
    {60001,1216,1024, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=5.01  BV=2.02
    {60001,1216,1104, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=5.12  BV=1.91
    {60001,1328,1080, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=5.22  BV=1.81
    {60001,1424,1080, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=5.32  BV=1.71
    {60001,1536,1072, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=5.42  BV=1.61
    {60001,1632,1080, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=5.51  BV=1.51
    {60001,1840,1032, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=5.62  BV=1.41
    {60001,1936,1048, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=5.72  BV=1.31
    {60001,2048,1064, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=5.82  BV=1.21
    {60001,2240,1040, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=5.92  BV=1.11
    {60001,2448,1024, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=6.02  BV=1.01
    {60001,2560,1048, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=6.12  BV=0.91
    {60001,2752,1040, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=6.21  BV=0.82
    {60001,2960,1040, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=6.32  BV=0.71
    {60001,3200,1032, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=6.42  BV=0.61
    {60001,3456,1024, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=6.52  BV=0.51
    {60001,3584,1056, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=6.62  BV=0.41
    {60001,3840,1056, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=6.72  BV=0.31
    {60001,4224,1032, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=6.82  BV=0.21
    {60001,4480,1040, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=6.92  BV=0.11
    {70002,4224,1024, 0, 0, 0},  //TV = 3.84(6613 lines)  AV=2.97  SV=6.81  BV=-0.00
    {70002,4480,1032, 0, 0, 0},  //TV = 3.84(6613 lines)  AV=2.97  SV=6.91  BV=-0.10
    {80004,4224,1024, 0, 0, 0},  //TV = 3.64(7558 lines)  AV=2.97  SV=6.81  BV=-0.20
    {80004,4480,1040, 0, 0, 0},  //TV = 3.64(7558 lines)  AV=2.97  SV=6.92  BV=-0.30
    {89995,4224,1048, 0, 0, 0},  //TV = 3.47(8502 lines)  AV=2.97  SV=6.84  BV=-0.40
    {99997,4096,1048, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=6.80  BV=-0.51
    {99997,4480,1024, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=6.89  BV=-0.60
    {109999,4352,1024, 0, 0, 0},  //TV = 3.18(10392 lines)  AV=2.97  SV=6.85  BV=-0.70
    {120001,4224,1040, 0, 0, 0},  //TV = 3.06(11337 lines)  AV=2.97  SV=6.83  BV=-0.80
    {130003,4224,1024, 0, 0, 0},  //TV = 2.94(12282 lines)  AV=2.97  SV=6.81  BV=-0.90
    {140005,4224,1024, 0, 0, 0},  //TV = 2.84(13227 lines)  AV=2.97  SV=6.81  BV=-1.00
    {149996,4224,1024, 0, 0, 0},  //TV = 2.74(14171 lines)  AV=2.97  SV=6.81  BV=-1.10
    {159998,4224,1024, 0, 0, 0},  //TV = 2.64(15116 lines)  AV=2.97  SV=6.81  BV=-1.20
    {169989,4224,1040, 0, 0, 0},  //TV = 2.56(16060 lines)  AV=2.97  SV=6.83  BV=-1.30
    {190004,4096,1024, 0, 0, 0},  //TV = 2.40(17952 lines)  AV=2.97  SV=6.77  BV=-1.40
    {199995,4096,1040, 0, 0, 0},  //TV = 2.32(18895 lines)  AV=2.97  SV=6.79  BV=-1.50
    {199995,4480,1024, 0, 0, 0},  //TV = 2.32(18895 lines)  AV=2.97  SV=6.89  BV=-1.60
    {199995,4736,1040, 0, 0, 0},  //TV = 2.32(18895 lines)  AV=2.97  SV=7.00  BV=-1.70
    {199995,5120,1032, 0, 0, 0},  //TV = 2.32(18895 lines)  AV=2.97  SV=7.10  BV=-1.81
    {199995,5504,1024, 0, 0, 0},  //TV = 2.32(18895 lines)  AV=2.97  SV=7.19  BV=-1.90
    {199995,5888,1024, 0, 0, 0},  //TV = 2.32(18895 lines)  AV=2.97  SV=7.29  BV=-2.00
    {199995,6240,1040, 0, 0, 0},  //TV = 2.32(18895 lines)  AV=2.97  SV=7.40  BV=-2.10
    {199995,6704,1032, 0, 0, 0},  //TV = 2.32(18895 lines)  AV=2.97  SV=7.49  BV=-2.19
    {199995,7072,1048, 0, 0, 0},  //TV = 2.32(18895 lines)  AV=2.97  SV=7.59  BV=-2.29
    {199995,7696,1032, 0, 0, 0},  //TV = 2.32(18895 lines)  AV=2.97  SV=7.69  BV=-2.39
    {199995,8192,1048, 0, 0, 0},  //TV = 2.32(18895 lines)  AV=2.97  SV=7.80  BV=-2.51
    {199995,8192,1120, 0, 0, 0},  //TV = 2.32(18895 lines)  AV=2.97  SV=7.89  BV=-2.60
    {199995,8192,1200, 0, 0, 0},  //TV = 2.32(18895 lines)  AV=2.97  SV=7.99  BV=-2.70
    {199995,8192,1288, 0, 0, 0},  //TV = 2.32(18895 lines)  AV=2.97  SV=8.10  BV=-2.80
    {199995,8192,1376, 0, 0, 0},  //TV = 2.32(18895 lines)  AV=2.97  SV=8.19  BV=-2.90
    {199995,8192,1480, 0, 0, 0},  //TV = 2.32(18895 lines)  AV=2.97  SV=8.30  BV=-3.00
    {199995,8192,1584, 0, 0, 0},  //TV = 2.32(18895 lines)  AV=2.97  SV=8.39  BV=-3.10
    {199995,8192,1696, 0, 0, 0},  //TV = 2.32(18895 lines)  AV=2.97  SV=8.49  BV=-3.20
    {199995,8192,1816, 0, 0, 0},  //TV = 2.32(18895 lines)  AV=2.97  SV=8.59  BV=-3.30
    {199995,8192,1944, 0, 0, 0},  //TV = 2.32(18895 lines)  AV=2.97  SV=8.69  BV=-3.40
    {199995,8192,2088, 0, 0, 0},  //TV = 2.32(18895 lines)  AV=2.97  SV=8.79  BV=-3.50
    {199995,8192,2240, 0, 0, 0},  //TV = 2.32(18895 lines)  AV=2.97  SV=8.89  BV=-3.60
    {199995,8192,2400, 0, 0, 0},  //TV = 2.32(18895 lines)  AV=2.97  SV=8.99  BV=-3.70
    {199995,8192,2568, 0, 0, 0},  //TV = 2.32(18895 lines)  AV=2.97  SV=9.09  BV=-3.80
    {199995,8192,2752, 0, 0, 0},  //TV = 2.32(18895 lines)  AV=2.97  SV=9.19  BV=-3.90
    {199995,8192,2952, 0, 0, 0},  //TV = 2.32(18895 lines)  AV=2.97  SV=9.29  BV=-4.00
    {199995,8192,3160, 0, 0, 0},  //TV = 2.32(18895 lines)  AV=2.97  SV=9.39  BV=-4.10
    {199995,8192,3392, 0, 0, 0},  //TV = 2.32(18895 lines)  AV=2.97  SV=9.49  BV=-4.20
    {199995,8192,3632, 0, 0, 0},  //TV = 2.32(18895 lines)  AV=2.97  SV=9.59  BV=-4.30
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_SceneTable1 =
{
    AETABLE_SCENE_INDEX1,    //eAETableID
    157,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    113,    //i4MaxBV
    -43,    //i4MinBV
    90,    //i4EffectiveMaxBV
    -10,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sAEScene1PLineTable_60Hz,
    sAEScene1PLineTable_50Hz,
    NULL,
};

static strEvPline sAEScene2PLineTable_60Hz =
{
{
    {95,1216,1064, 0, 0, 0},  //TV = 13.36(8 lines)  AV=2.97  SV=5.07  BV=11.26
    {105,1136,1088, 0, 0, 0},  //TV = 13.22(9 lines)  AV=2.97  SV=5.00  BV=11.19
    {105,1216,1072, 0, 0, 0},  //TV = 13.22(9 lines)  AV=2.97  SV=5.08  BV=11.11
    {116,1216,1064, 0, 0, 0},  //TV = 13.07(10 lines)  AV=2.97  SV=5.07  BV=10.98
    {127,1216,1040, 0, 0, 0},  //TV = 12.94(11 lines)  AV=2.97  SV=5.04  BV=10.88
    {137,1136,1096, 0, 0, 0},  //TV = 12.83(12 lines)  AV=2.97  SV=5.01  BV=10.79
    {137,1216,1088, 0, 0, 0},  //TV = 12.83(12 lines)  AV=2.97  SV=5.10  BV=10.70
    {158,1136,1096, 0, 0, 0},  //TV = 12.63(14 lines)  AV=2.97  SV=5.01  BV=10.59
    {169,1216,1024, 0, 0, 0},  //TV = 12.53(15 lines)  AV=2.97  SV=5.01  BV=10.49
    {179,1216,1048, 0, 0, 0},  //TV = 12.45(16 lines)  AV=2.97  SV=5.05  BV=10.37
    {190,1216,1064, 0, 0, 0},  //TV = 12.36(17 lines)  AV=2.97  SV=5.07  BV=10.26
    {201,1216,1040, 0, 0, 0},  //TV = 12.28(18 lines)  AV=2.97  SV=5.04  BV=10.22
    {222,1136,1088, 0, 0, 0},  //TV = 12.14(20 lines)  AV=2.97  SV=5.00  BV=10.11
    {232,1216,1040, 0, 0, 0},  //TV = 12.07(21 lines)  AV=2.97  SV=5.04  BV=10.01
    {254,1136,1088, 0, 0, 0},  //TV = 11.94(23 lines)  AV=2.97  SV=5.00  BV=9.91
    {264,1216,1048, 0, 0, 0},  //TV = 11.89(24 lines)  AV=2.97  SV=5.05  BV=9.81
    {285,1216,1040, 0, 0, 0},  //TV = 11.78(26 lines)  AV=2.97  SV=5.04  BV=9.71
    {306,1216,1040, 0, 0, 0},  //TV = 11.67(28 lines)  AV=2.97  SV=5.04  BV=9.61
    {328,1216,1040, 0, 0, 0},  //TV = 11.57(30 lines)  AV=2.97  SV=5.04  BV=9.51
    {359,1136,1096, 0, 0, 0},  //TV = 11.44(33 lines)  AV=2.97  SV=5.01  BV=9.40
    {381,1216,1024, 0, 0, 0},  //TV = 11.36(35 lines)  AV=2.97  SV=5.01  BV=9.32
    {412,1136,1096, 0, 0, 0},  //TV = 11.25(38 lines)  AV=2.97  SV=5.01  BV=9.20
    {444,1136,1088, 0, 0, 0},  //TV = 11.14(41 lines)  AV=2.97  SV=5.00  BV=9.11
    {476,1136,1088, 0, 0, 0},  //TV = 11.04(44 lines)  AV=2.97  SV=5.00  BV=9.00
    {508,1136,1088, 0, 0, 0},  //TV = 10.94(47 lines)  AV=2.97  SV=5.00  BV=8.91
    {539,1216,1024, 0, 0, 0},  //TV = 10.86(50 lines)  AV=2.97  SV=5.01  BV=8.81
    {582,1136,1096, 0, 0, 0},  //TV = 10.75(54 lines)  AV=2.97  SV=5.01  BV=8.70
    {624,1136,1096, 0, 0, 0},  //TV = 10.65(58 lines)  AV=2.97  SV=5.01  BV=8.60
    {666,1136,1096, 0, 0, 0},  //TV = 10.55(62 lines)  AV=2.97  SV=5.01  BV=8.51
    {719,1136,1088, 0, 0, 0},  //TV = 10.44(67 lines)  AV=2.97  SV=5.00  BV=8.41
    {772,1136,1088, 0, 0, 0},  //TV = 10.34(72 lines)  AV=2.97  SV=5.00  BV=8.31
    {825,1136,1096, 0, 0, 0},  //TV = 10.24(77 lines)  AV=2.97  SV=5.01  BV=8.20
    {889,1136,1088, 0, 0, 0},  //TV = 10.14(83 lines)  AV=2.97  SV=5.00  BV=8.10
    {952,1136,1088, 0, 0, 0},  //TV = 10.04(89 lines)  AV=2.97  SV=5.00  BV=8.00
    {1016,1136,1088, 0, 0, 0},  //TV = 9.94(95 lines)  AV=2.97  SV=5.00  BV=7.91
    {1090,1136,1088, 0, 0, 0},  //TV = 9.84(102 lines)  AV=2.97  SV=5.00  BV=7.81
    {1174,1136,1088, 0, 0, 0},  //TV = 9.73(110 lines)  AV=2.97  SV=5.00  BV=7.70
    {1259,1136,1088, 0, 0, 0},  //TV = 9.63(118 lines)  AV=2.97  SV=5.00  BV=7.60
    {1344,1136,1088, 0, 0, 0},  //TV = 9.54(126 lines)  AV=2.97  SV=5.00  BV=7.51
    {1439,1136,1088, 0, 0, 0},  //TV = 9.44(135 lines)  AV=2.97  SV=5.00  BV=7.41
    {1545,1136,1088, 0, 0, 0},  //TV = 9.34(145 lines)  AV=2.97  SV=5.00  BV=7.31
    {1651,1136,1088, 0, 0, 0},  //TV = 9.24(155 lines)  AV=2.97  SV=5.00  BV=7.21
    {1778,1136,1088, 0, 0, 0},  //TV = 9.14(167 lines)  AV=2.97  SV=5.00  BV=7.10
    {1915,1136,1088, 0, 0, 0},  //TV = 9.03(180 lines)  AV=2.97  SV=5.00  BV=7.00
    {2032,1136,1088, 0, 0, 0},  //TV = 8.94(191 lines)  AV=2.97  SV=5.00  BV=6.91
    {2190,1136,1088, 0, 0, 0},  //TV = 8.83(206 lines)  AV=2.97  SV=5.00  BV=6.80
    {2360,1136,1080, 0, 0, 0},  //TV = 8.73(222 lines)  AV=2.97  SV=4.99  BV=6.71
    {2529,1136,1080, 0, 0, 0},  //TV = 8.63(238 lines)  AV=2.97  SV=4.99  BV=6.61
    {2698,1136,1088, 0, 0, 0},  //TV = 8.53(254 lines)  AV=2.97  SV=5.00  BV=6.50
    {2910,1136,1080, 0, 0, 0},  //TV = 8.42(274 lines)  AV=2.97  SV=4.99  BV=6.40
    {3111,1136,1080, 0, 0, 0},  //TV = 8.33(293 lines)  AV=2.97  SV=4.99  BV=6.31
    {3333,1136,1080, 0, 0, 0},  //TV = 8.23(314 lines)  AV=2.97  SV=4.99  BV=6.21
    {3566,1136,1080, 0, 0, 0},  //TV = 8.13(336 lines)  AV=2.97  SV=4.99  BV=6.11
    {3820,1136,1080, 0, 0, 0},  //TV = 8.03(360 lines)  AV=2.97  SV=4.99  BV=6.01
    {4117,1136,1080, 0, 0, 0},  //TV = 7.92(388 lines)  AV=2.97  SV=4.99  BV=5.90
    {4413,1136,1080, 0, 0, 0},  //TV = 7.82(416 lines)  AV=2.97  SV=4.99  BV=5.80
    {4720,1136,1080, 0, 0, 0},  //TV = 7.73(445 lines)  AV=2.97  SV=4.99  BV=5.71
    {5059,1136,1080, 0, 0, 0},  //TV = 7.63(477 lines)  AV=2.97  SV=4.99  BV=5.61
    {5408,1136,1080, 0, 0, 0},  //TV = 7.53(510 lines)  AV=2.97  SV=4.99  BV=5.51
    {5800,1136,1080, 0, 0, 0},  //TV = 7.43(547 lines)  AV=2.97  SV=4.99  BV=5.41
    {6202,1136,1080, 0, 0, 0},  //TV = 7.33(585 lines)  AV=2.97  SV=4.99  BV=5.31
    {6646,1136,1080, 0, 0, 0},  //TV = 7.23(627 lines)  AV=2.97  SV=4.99  BV=5.21
    {7123,1136,1080, 0, 0, 0},  //TV = 7.13(672 lines)  AV=2.97  SV=4.99  BV=5.11
    {7673,1136,1080, 0, 0, 0},  //TV = 7.03(724 lines)  AV=2.97  SV=4.99  BV=5.00
    {8223,1136,1080, 0, 0, 0},  //TV = 6.93(776 lines)  AV=2.97  SV=4.99  BV=4.90
    {8329,1216,1064, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.07  BV=4.81
    {8329,1328,1048, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.17  BV=4.70
    {8329,1424,1040, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.26  BV=4.61
    {8329,1536,1040, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.37  BV=4.51
    {8329,1632,1048, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.47  BV=4.41
    {8329,1728,1056, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.56  BV=4.31
    {8329,1840,1072, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.68  BV=4.20
    {8329,2048,1024, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.77  BV=4.11
    {8329,2144,1048, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.87  BV=4.01
    {8329,2352,1024, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.97  BV=3.91
    {8329,2448,1056, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=6.07  BV=3.81
    {8329,2656,1040, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=6.16  BV=3.72
    {8329,2864,1040, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=6.27  BV=3.61
    {8329,3072,1040, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=6.37  BV=3.51
    {8329,3328,1024, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=6.47  BV=3.41
    {8329,3456,1056, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=6.56  BV=3.31
    {8329,3840,1024, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=6.67  BV=3.21
    {8329,4096,1024, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=6.77  BV=3.11
    {8329,4352,1032, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=6.86  BV=3.01
    {8329,4608,1048, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=6.97  BV=2.91
    {8329,4992,1032, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=7.06  BV=2.82
    {8329,5376,1024, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=7.16  BV=2.72
    {8329,5760,1032, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=7.27  BV=2.61
    {8329,6240,1024, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=7.37  BV=2.51
    {8329,6544,1048, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=7.47  BV=2.40
    {8329,7072,1040, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=7.58  BV=2.30
    {8329,7472,1048, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=7.67  BV=2.21
    {16670,4096,1024, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=6.77  BV=2.11
    {16670,4352,1032, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=6.86  BV=2.01
    {16670,4608,1048, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=6.97  BV=1.91
    {16670,4992,1040, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=7.07  BV=1.80
    {16670,5376,1032, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=7.17  BV=1.71
    {16670,5760,1032, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=7.27  BV=1.61
    {24988,4096,1040, 0, 0, 0},  //TV = 5.32(2360 lines)  AV=2.97  SV=6.79  BV=1.51
    {24988,4352,1048, 0, 0, 0},  //TV = 5.32(2360 lines)  AV=2.97  SV=6.89  BV=1.41
    {24988,4736,1032, 0, 0, 0},  //TV = 5.32(2360 lines)  AV=2.97  SV=6.99  BV=1.31
    {24988,4992,1048, 0, 0, 0},  //TV = 5.32(2360 lines)  AV=2.97  SV=7.08  BV=1.21
    {33329,4096,1032, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=6.78  BV=1.10
    {33329,4352,1032, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=6.86  BV=1.01
    {33329,4608,1048, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=6.97  BV=0.91
    {33329,4992,1032, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=7.06  BV=0.82
    {33329,5376,1024, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=7.16  BV=0.72
    {33329,5760,1032, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=7.27  BV=0.61
    {33329,6240,1024, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=7.37  BV=0.51
    {33329,6544,1040, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=7.46  BV=0.41
    {33329,7072,1032, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=7.56  BV=0.31
    {33329,7472,1048, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=7.67  BV=0.21
    {33329,8192,1024, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=7.77  BV=0.11
    {33329,8192,1104, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=7.87  BV=0.00
    {33329,8192,1184, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=7.97  BV=-0.10
    {33329,8192,1272, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=8.08  BV=-0.20
    {33329,8192,1360, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=8.17  BV=-0.30
    {33329,8192,1456, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=8.27  BV=-0.40
    {33329,8192,1576, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=8.39  BV=-0.51
    {33329,8192,1688, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=8.49  BV=-0.61
    {33329,8192,1808, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=8.59  BV=-0.71
    {33329,8192,1936, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=8.68  BV=-0.81
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sAEScene2PLineTable_50Hz =
{
{
    {95,1216,1064, 0, 0, 0},  //TV = 13.36(8 lines)  AV=2.97  SV=5.07  BV=11.26
    {105,1136,1088, 0, 0, 0},  //TV = 13.22(9 lines)  AV=2.97  SV=5.00  BV=11.19
    {105,1216,1072, 0, 0, 0},  //TV = 13.22(9 lines)  AV=2.97  SV=5.08  BV=11.11
    {116,1216,1064, 0, 0, 0},  //TV = 13.07(10 lines)  AV=2.97  SV=5.07  BV=10.98
    {127,1216,1040, 0, 0, 0},  //TV = 12.94(11 lines)  AV=2.97  SV=5.04  BV=10.88
    {137,1136,1096, 0, 0, 0},  //TV = 12.83(12 lines)  AV=2.97  SV=5.01  BV=10.79
    {137,1216,1088, 0, 0, 0},  //TV = 12.83(12 lines)  AV=2.97  SV=5.10  BV=10.70
    {158,1136,1096, 0, 0, 0},  //TV = 12.63(14 lines)  AV=2.97  SV=5.01  BV=10.59
    {169,1216,1024, 0, 0, 0},  //TV = 12.53(15 lines)  AV=2.97  SV=5.01  BV=10.49
    {179,1216,1048, 0, 0, 0},  //TV = 12.45(16 lines)  AV=2.97  SV=5.05  BV=10.37
    {190,1216,1064, 0, 0, 0},  //TV = 12.36(17 lines)  AV=2.97  SV=5.07  BV=10.26
    {201,1216,1040, 0, 0, 0},  //TV = 12.28(18 lines)  AV=2.97  SV=5.04  BV=10.22
    {222,1136,1088, 0, 0, 0},  //TV = 12.14(20 lines)  AV=2.97  SV=5.00  BV=10.11
    {232,1216,1040, 0, 0, 0},  //TV = 12.07(21 lines)  AV=2.97  SV=5.04  BV=10.01
    {254,1136,1088, 0, 0, 0},  //TV = 11.94(23 lines)  AV=2.97  SV=5.00  BV=9.91
    {264,1216,1048, 0, 0, 0},  //TV = 11.89(24 lines)  AV=2.97  SV=5.05  BV=9.81
    {285,1216,1040, 0, 0, 0},  //TV = 11.78(26 lines)  AV=2.97  SV=5.04  BV=9.71
    {306,1216,1040, 0, 0, 0},  //TV = 11.67(28 lines)  AV=2.97  SV=5.04  BV=9.61
    {328,1216,1040, 0, 0, 0},  //TV = 11.57(30 lines)  AV=2.97  SV=5.04  BV=9.51
    {359,1136,1096, 0, 0, 0},  //TV = 11.44(33 lines)  AV=2.97  SV=5.01  BV=9.40
    {381,1216,1024, 0, 0, 0},  //TV = 11.36(35 lines)  AV=2.97  SV=5.01  BV=9.32
    {412,1136,1096, 0, 0, 0},  //TV = 11.25(38 lines)  AV=2.97  SV=5.01  BV=9.20
    {444,1136,1088, 0, 0, 0},  //TV = 11.14(41 lines)  AV=2.97  SV=5.00  BV=9.11
    {476,1136,1088, 0, 0, 0},  //TV = 11.04(44 lines)  AV=2.97  SV=5.00  BV=9.00
    {508,1136,1088, 0, 0, 0},  //TV = 10.94(47 lines)  AV=2.97  SV=5.00  BV=8.91
    {539,1216,1024, 0, 0, 0},  //TV = 10.86(50 lines)  AV=2.97  SV=5.01  BV=8.81
    {582,1136,1096, 0, 0, 0},  //TV = 10.75(54 lines)  AV=2.97  SV=5.01  BV=8.70
    {624,1136,1096, 0, 0, 0},  //TV = 10.65(58 lines)  AV=2.97  SV=5.01  BV=8.60
    {666,1136,1096, 0, 0, 0},  //TV = 10.55(62 lines)  AV=2.97  SV=5.01  BV=8.51
    {719,1136,1088, 0, 0, 0},  //TV = 10.44(67 lines)  AV=2.97  SV=5.00  BV=8.41
    {772,1136,1088, 0, 0, 0},  //TV = 10.34(72 lines)  AV=2.97  SV=5.00  BV=8.31
    {825,1136,1096, 0, 0, 0},  //TV = 10.24(77 lines)  AV=2.97  SV=5.01  BV=8.20
    {889,1136,1088, 0, 0, 0},  //TV = 10.14(83 lines)  AV=2.97  SV=5.00  BV=8.10
    {952,1136,1088, 0, 0, 0},  //TV = 10.04(89 lines)  AV=2.97  SV=5.00  BV=8.00
    {1016,1136,1088, 0, 0, 0},  //TV = 9.94(95 lines)  AV=2.97  SV=5.00  BV=7.91
    {1090,1136,1088, 0, 0, 0},  //TV = 9.84(102 lines)  AV=2.97  SV=5.00  BV=7.81
    {1174,1136,1088, 0, 0, 0},  //TV = 9.73(110 lines)  AV=2.97  SV=5.00  BV=7.70
    {1259,1136,1088, 0, 0, 0},  //TV = 9.63(118 lines)  AV=2.97  SV=5.00  BV=7.60
    {1344,1136,1088, 0, 0, 0},  //TV = 9.54(126 lines)  AV=2.97  SV=5.00  BV=7.51
    {1439,1136,1088, 0, 0, 0},  //TV = 9.44(135 lines)  AV=2.97  SV=5.00  BV=7.41
    {1545,1136,1088, 0, 0, 0},  //TV = 9.34(145 lines)  AV=2.97  SV=5.00  BV=7.31
    {1651,1136,1088, 0, 0, 0},  //TV = 9.24(155 lines)  AV=2.97  SV=5.00  BV=7.21
    {1778,1136,1088, 0, 0, 0},  //TV = 9.14(167 lines)  AV=2.97  SV=5.00  BV=7.10
    {1915,1136,1088, 0, 0, 0},  //TV = 9.03(180 lines)  AV=2.97  SV=5.00  BV=7.00
    {2032,1136,1088, 0, 0, 0},  //TV = 8.94(191 lines)  AV=2.97  SV=5.00  BV=6.91
    {2190,1136,1088, 0, 0, 0},  //TV = 8.83(206 lines)  AV=2.97  SV=5.00  BV=6.80
    {2360,1136,1080, 0, 0, 0},  //TV = 8.73(222 lines)  AV=2.97  SV=4.99  BV=6.71
    {2529,1136,1080, 0, 0, 0},  //TV = 8.63(238 lines)  AV=2.97  SV=4.99  BV=6.61
    {2698,1136,1088, 0, 0, 0},  //TV = 8.53(254 lines)  AV=2.97  SV=5.00  BV=6.50
    {2910,1136,1080, 0, 0, 0},  //TV = 8.42(274 lines)  AV=2.97  SV=4.99  BV=6.40
    {3111,1136,1080, 0, 0, 0},  //TV = 8.33(293 lines)  AV=2.97  SV=4.99  BV=6.31
    {3333,1136,1080, 0, 0, 0},  //TV = 8.23(314 lines)  AV=2.97  SV=4.99  BV=6.21
    {3566,1136,1080, 0, 0, 0},  //TV = 8.13(336 lines)  AV=2.97  SV=4.99  BV=6.11
    {3820,1136,1080, 0, 0, 0},  //TV = 8.03(360 lines)  AV=2.97  SV=4.99  BV=6.01
    {4117,1136,1080, 0, 0, 0},  //TV = 7.92(388 lines)  AV=2.97  SV=4.99  BV=5.90
    {4413,1136,1080, 0, 0, 0},  //TV = 7.82(416 lines)  AV=2.97  SV=4.99  BV=5.80
    {4720,1136,1080, 0, 0, 0},  //TV = 7.73(445 lines)  AV=2.97  SV=4.99  BV=5.71
    {5059,1136,1080, 0, 0, 0},  //TV = 7.63(477 lines)  AV=2.97  SV=4.99  BV=5.61
    {5408,1136,1080, 0, 0, 0},  //TV = 7.53(510 lines)  AV=2.97  SV=4.99  BV=5.51
    {5800,1136,1080, 0, 0, 0},  //TV = 7.43(547 lines)  AV=2.97  SV=4.99  BV=5.41
    {6202,1136,1080, 0, 0, 0},  //TV = 7.33(585 lines)  AV=2.97  SV=4.99  BV=5.31
    {6646,1136,1080, 0, 0, 0},  //TV = 7.23(627 lines)  AV=2.97  SV=4.99  BV=5.21
    {7123,1136,1080, 0, 0, 0},  //TV = 7.13(672 lines)  AV=2.97  SV=4.99  BV=5.11
    {7673,1136,1080, 0, 0, 0},  //TV = 7.03(724 lines)  AV=2.97  SV=4.99  BV=5.00
    {8223,1136,1080, 0, 0, 0},  //TV = 6.93(776 lines)  AV=2.97  SV=4.99  BV=4.90
    {8805,1136,1080, 0, 0, 0},  //TV = 6.83(831 lines)  AV=2.97  SV=4.99  BV=4.81
    {9440,1136,1080, 0, 0, 0},  //TV = 6.73(891 lines)  AV=2.97  SV=4.99  BV=4.71
    {10002,1136,1096, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.01  BV=4.60
    {10002,1216,1088, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.10  BV=4.51
    {10002,1328,1072, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.21  BV=4.41
    {10002,1424,1072, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.31  BV=4.31
    {10002,1536,1072, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.42  BV=4.20
    {10002,1632,1072, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.50  BV=4.11
    {10002,1728,1080, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.60  BV=4.02
    {10002,1936,1040, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.71  BV=3.91
    {10002,2048,1056, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.81  BV=3.80
    {10002,2240,1024, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.89  BV=3.72
    {10002,2352,1056, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=6.01  BV=3.60
    {10002,2560,1040, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=6.11  BV=3.50
    {10002,2752,1032, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=6.20  BV=3.41
    {10002,2960,1024, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=6.30  BV=3.32
    {10002,3200,1024, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=6.41  BV=3.21
    {10002,3328,1056, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=6.51  BV=3.10
    {10002,3584,1048, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=6.61  BV=3.01
    {10002,3840,1040, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=6.69  BV=2.92
    {10002,4096,1048, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=6.80  BV=2.82
    {10002,4480,1024, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=6.89  BV=2.72
    {10002,4736,1048, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=7.01  BV=2.61
    {10002,5120,1040, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=7.11  BV=2.50
    {10002,5504,1032, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=7.20  BV=2.41
    {10002,5888,1040, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=7.31  BV=2.30
    {10002,6384,1024, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=7.41  BV=2.21
    {10002,6704,1048, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=7.51  BV=2.10
    {10002,7280,1032, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=7.61  BV=2.01
    {10002,7696,1048, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=7.71  BV=1.91
    {20004,4096,1056, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=6.81  BV=1.80
    {20004,4480,1032, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=6.91  BV=1.71
    {20004,4736,1048, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=7.01  BV=1.61
    {20004,5120,1040, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=7.11  BV=1.50
    {20004,5504,1032, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=7.20  BV=1.41
    {20004,5888,1032, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=7.30  BV=1.31
    {29995,4224,1032, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=6.82  BV=1.21
    {29995,4480,1040, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=6.92  BV=1.11
    {29995,4864,1032, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=7.02  BV=1.01
    {29995,5120,1048, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=7.12  BV=0.91
    {29995,5504,1040, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=7.21  BV=0.82
    {29995,6016,1024, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=7.32  BV=0.71
    {29995,6384,1032, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=7.42  BV=0.61
    {29995,6896,1032, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=7.53  BV=0.50
    {29995,7280,1040, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=7.62  BV=0.41
    {29995,7936,1024, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=7.72  BV=0.31
    {29995,8192,1064, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=7.82  BV=0.21
    {29995,8192,1136, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=7.92  BV=0.11
    {29995,8192,1232, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=8.03  BV=-0.00
    {29995,8192,1320, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=8.13  BV=-0.10
    {29995,8192,1408, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=8.22  BV=-0.19
    {29995,8192,1512, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=8.33  BV=-0.30
    {29995,8192,1632, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=8.44  BV=-0.41
    {29995,8192,1744, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=8.53  BV=-0.50
    {29995,8192,1872, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=8.64  BV=-0.61
    {29995,8192,2008, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=8.74  BV=-0.71
    {29995,8192,2152, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=8.84  BV=-0.81
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_SceneTable2 =
{
    AETABLE_SCENE_INDEX2,    //eAETableID
    122,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    113,    //i4MaxBV
    -8,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sAEScene2PLineTable_60Hz,
    sAEScene2PLineTable_50Hz,
    NULL,
};

static strEvPline sAEScene3PLineTable_60Hz =
{
{
    {95,1216,1064, 0, 0, 0},  //TV = 13.36(8 lines)  AV=2.97  SV=5.07  BV=11.26
    {105,1136,1088, 0, 0, 0},  //TV = 13.22(9 lines)  AV=2.97  SV=5.00  BV=11.19
    {105,1216,1072, 0, 0, 0},  //TV = 13.22(9 lines)  AV=2.97  SV=5.08  BV=11.11
    {116,1216,1064, 0, 0, 0},  //TV = 13.07(10 lines)  AV=2.97  SV=5.07  BV=10.98
    {127,1216,1040, 0, 0, 0},  //TV = 12.94(11 lines)  AV=2.97  SV=5.04  BV=10.88
    {137,1136,1096, 0, 0, 0},  //TV = 12.83(12 lines)  AV=2.97  SV=5.01  BV=10.79
    {137,1216,1088, 0, 0, 0},  //TV = 12.83(12 lines)  AV=2.97  SV=5.10  BV=10.70
    {158,1136,1096, 0, 0, 0},  //TV = 12.63(14 lines)  AV=2.97  SV=5.01  BV=10.59
    {169,1216,1024, 0, 0, 0},  //TV = 12.53(15 lines)  AV=2.97  SV=5.01  BV=10.49
    {179,1216,1048, 0, 0, 0},  //TV = 12.45(16 lines)  AV=2.97  SV=5.05  BV=10.37
    {190,1216,1064, 0, 0, 0},  //TV = 12.36(17 lines)  AV=2.97  SV=5.07  BV=10.26
    {201,1216,1040, 0, 0, 0},  //TV = 12.28(18 lines)  AV=2.97  SV=5.04  BV=10.22
    {222,1136,1088, 0, 0, 0},  //TV = 12.14(20 lines)  AV=2.97  SV=5.00  BV=10.11
    {232,1216,1040, 0, 0, 0},  //TV = 12.07(21 lines)  AV=2.97  SV=5.04  BV=10.01
    {254,1136,1088, 0, 0, 0},  //TV = 11.94(23 lines)  AV=2.97  SV=5.00  BV=9.91
    {264,1216,1048, 0, 0, 0},  //TV = 11.89(24 lines)  AV=2.97  SV=5.05  BV=9.81
    {285,1216,1040, 0, 0, 0},  //TV = 11.78(26 lines)  AV=2.97  SV=5.04  BV=9.71
    {306,1216,1040, 0, 0, 0},  //TV = 11.67(28 lines)  AV=2.97  SV=5.04  BV=9.61
    {328,1216,1040, 0, 0, 0},  //TV = 11.57(30 lines)  AV=2.97  SV=5.04  BV=9.51
    {359,1136,1096, 0, 0, 0},  //TV = 11.44(33 lines)  AV=2.97  SV=5.01  BV=9.40
    {381,1216,1024, 0, 0, 0},  //TV = 11.36(35 lines)  AV=2.97  SV=5.01  BV=9.32
    {412,1136,1096, 0, 0, 0},  //TV = 11.25(38 lines)  AV=2.97  SV=5.01  BV=9.20
    {444,1136,1088, 0, 0, 0},  //TV = 11.14(41 lines)  AV=2.97  SV=5.00  BV=9.11
    {476,1136,1088, 0, 0, 0},  //TV = 11.04(44 lines)  AV=2.97  SV=5.00  BV=9.00
    {508,1136,1088, 0, 0, 0},  //TV = 10.94(47 lines)  AV=2.97  SV=5.00  BV=8.91
    {539,1216,1024, 0, 0, 0},  //TV = 10.86(50 lines)  AV=2.97  SV=5.01  BV=8.81
    {582,1136,1096, 0, 0, 0},  //TV = 10.75(54 lines)  AV=2.97  SV=5.01  BV=8.70
    {624,1136,1096, 0, 0, 0},  //TV = 10.65(58 lines)  AV=2.97  SV=5.01  BV=8.60
    {666,1136,1096, 0, 0, 0},  //TV = 10.55(62 lines)  AV=2.97  SV=5.01  BV=8.51
    {719,1136,1088, 0, 0, 0},  //TV = 10.44(67 lines)  AV=2.97  SV=5.00  BV=8.41
    {772,1136,1088, 0, 0, 0},  //TV = 10.34(72 lines)  AV=2.97  SV=5.00  BV=8.31
    {825,1136,1096, 0, 0, 0},  //TV = 10.24(77 lines)  AV=2.97  SV=5.01  BV=8.20
    {889,1136,1088, 0, 0, 0},  //TV = 10.14(83 lines)  AV=2.97  SV=5.00  BV=8.10
    {952,1136,1088, 0, 0, 0},  //TV = 10.04(89 lines)  AV=2.97  SV=5.00  BV=8.00
    {1016,1136,1088, 0, 0, 0},  //TV = 9.94(95 lines)  AV=2.97  SV=5.00  BV=7.91
    {1090,1136,1088, 0, 0, 0},  //TV = 9.84(102 lines)  AV=2.97  SV=5.00  BV=7.81
    {1174,1136,1088, 0, 0, 0},  //TV = 9.73(110 lines)  AV=2.97  SV=5.00  BV=7.70
    {1259,1136,1088, 0, 0, 0},  //TV = 9.63(118 lines)  AV=2.97  SV=5.00  BV=7.60
    {1344,1136,1088, 0, 0, 0},  //TV = 9.54(126 lines)  AV=2.97  SV=5.00  BV=7.51
    {1439,1136,1088, 0, 0, 0},  //TV = 9.44(135 lines)  AV=2.97  SV=5.00  BV=7.41
    {1545,1136,1088, 0, 0, 0},  //TV = 9.34(145 lines)  AV=2.97  SV=5.00  BV=7.31
    {1651,1136,1088, 0, 0, 0},  //TV = 9.24(155 lines)  AV=2.97  SV=5.00  BV=7.21
    {1778,1136,1088, 0, 0, 0},  //TV = 9.14(167 lines)  AV=2.97  SV=5.00  BV=7.10
    {1915,1136,1088, 0, 0, 0},  //TV = 9.03(180 lines)  AV=2.97  SV=5.00  BV=7.00
    {2032,1136,1088, 0, 0, 0},  //TV = 8.94(191 lines)  AV=2.97  SV=5.00  BV=6.91
    {2190,1136,1088, 0, 0, 0},  //TV = 8.83(206 lines)  AV=2.97  SV=5.00  BV=6.80
    {2360,1136,1080, 0, 0, 0},  //TV = 8.73(222 lines)  AV=2.97  SV=4.99  BV=6.71
    {2529,1136,1080, 0, 0, 0},  //TV = 8.63(238 lines)  AV=2.97  SV=4.99  BV=6.61
    {2698,1136,1088, 0, 0, 0},  //TV = 8.53(254 lines)  AV=2.97  SV=5.00  BV=6.50
    {2910,1136,1080, 0, 0, 0},  //TV = 8.42(274 lines)  AV=2.97  SV=4.99  BV=6.40
    {3111,1136,1080, 0, 0, 0},  //TV = 8.33(293 lines)  AV=2.97  SV=4.99  BV=6.31
    {3333,1136,1080, 0, 0, 0},  //TV = 8.23(314 lines)  AV=2.97  SV=4.99  BV=6.21
    {3566,1136,1080, 0, 0, 0},  //TV = 8.13(336 lines)  AV=2.97  SV=4.99  BV=6.11
    {3820,1136,1080, 0, 0, 0},  //TV = 8.03(360 lines)  AV=2.97  SV=4.99  BV=6.01
    {4117,1136,1080, 0, 0, 0},  //TV = 7.92(388 lines)  AV=2.97  SV=4.99  BV=5.90
    {4413,1136,1080, 0, 0, 0},  //TV = 7.82(416 lines)  AV=2.97  SV=4.99  BV=5.80
    {4720,1136,1080, 0, 0, 0},  //TV = 7.73(445 lines)  AV=2.97  SV=4.99  BV=5.71
    {5059,1136,1080, 0, 0, 0},  //TV = 7.63(477 lines)  AV=2.97  SV=4.99  BV=5.61
    {5408,1136,1080, 0, 0, 0},  //TV = 7.53(510 lines)  AV=2.97  SV=4.99  BV=5.51
    {5800,1136,1080, 0, 0, 0},  //TV = 7.43(547 lines)  AV=2.97  SV=4.99  BV=5.41
    {6202,1136,1080, 0, 0, 0},  //TV = 7.33(585 lines)  AV=2.97  SV=4.99  BV=5.31
    {6646,1136,1080, 0, 0, 0},  //TV = 7.23(627 lines)  AV=2.97  SV=4.99  BV=5.21
    {7123,1136,1080, 0, 0, 0},  //TV = 7.13(672 lines)  AV=2.97  SV=4.99  BV=5.11
    {7673,1136,1080, 0, 0, 0},  //TV = 7.03(724 lines)  AV=2.97  SV=4.99  BV=5.00
    {8223,1136,1080, 0, 0, 0},  //TV = 6.93(776 lines)  AV=2.97  SV=4.99  BV=4.90
    {8329,1216,1064, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.07  BV=4.81
    {8329,1328,1048, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.17  BV=4.70
    {8329,1424,1040, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.26  BV=4.61
    {8329,1536,1040, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.37  BV=4.51
    {8329,1632,1048, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.47  BV=4.41
    {8329,1728,1056, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.56  BV=4.31
    {8329,1840,1064, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.67  BV=4.21
    {8329,2048,1024, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.77  BV=4.11
    {8329,2144,1048, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.87  BV=4.01
    {8329,2352,1024, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.97  BV=3.91
    {16670,1216,1064, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=5.07  BV=3.81
    {16670,1328,1048, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=5.17  BV=3.70
    {16670,1424,1048, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=5.27  BV=3.60
    {16670,1536,1040, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=5.37  BV=3.50
    {16670,1632,1048, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=5.47  BV=3.41
    {16670,1728,1064, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=5.58  BV=3.30
    {24988,1216,1072, 0, 0, 0},  //TV = 5.32(2360 lines)  AV=2.97  SV=5.08  BV=3.21
    {24988,1328,1056, 0, 0, 0},  //TV = 5.32(2360 lines)  AV=2.97  SV=5.18  BV=3.11
    {24988,1424,1056, 0, 0, 0},  //TV = 5.32(2360 lines)  AV=2.97  SV=5.29  BV=3.01
    {24988,1536,1056, 0, 0, 0},  //TV = 5.32(2360 lines)  AV=2.97  SV=5.39  BV=2.90
    {33329,1216,1064, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=5.07  BV=2.81
    {33329,1328,1048, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=5.17  BV=2.70
    {33329,1424,1040, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=5.26  BV=2.61
    {33329,1536,1040, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=5.37  BV=2.51
    {33329,1632,1048, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=5.47  BV=2.41
    {33329,1728,1064, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=5.58  BV=2.30
    {33329,1840,1064, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=5.67  BV=2.21
    {33329,2048,1032, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=5.78  BV=2.10
    {33329,2144,1048, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=5.87  BV=2.01
    {33329,2352,1024, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=5.97  BV=1.91
    {33329,2448,1056, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=6.07  BV=1.81
    {41669,2144,1032, 0, 0, 0},  //TV = 4.58(3936 lines)  AV=2.97  SV=5.84  BV=1.71
    {41669,2240,1064, 0, 0, 0},  //TV = 4.58(3936 lines)  AV=2.97  SV=5.95  BV=1.61
    {49999,2048,1040, 0, 0, 0},  //TV = 4.32(4724 lines)  AV=2.97  SV=5.79  BV=1.50
    {49999,2144,1064, 0, 0, 0},  //TV = 4.32(4724 lines)  AV=2.97  SV=5.89  BV=1.41
    {58328,1936,1080, 0, 0, 0},  //TV = 4.10(5510 lines)  AV=2.97  SV=5.76  BV=1.31
    {58328,2144,1048, 0, 0, 0},  //TV = 4.10(5510 lines)  AV=2.97  SV=5.87  BV=1.21
    {66669,2048,1032, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=5.78  BV=1.10
    {66669,2144,1048, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=5.87  BV=1.01
    {66669,2352,1024, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=5.97  BV=0.91
    {66669,2448,1056, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=6.07  BV=0.81
    {66669,2656,1040, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=6.16  BV=0.71
    {66669,2864,1032, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=6.26  BV=0.62
    {66669,3072,1032, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=6.36  BV=0.52
    {66669,3328,1024, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=6.47  BV=0.41
    {66669,3456,1056, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=6.56  BV=0.31
    {66669,3712,1056, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=6.67  BV=0.21
    {66669,4096,1032, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=6.78  BV=0.10
    {66669,4352,1040, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=6.88  BV=0.00
    {74998,4224,1024, 0, 0, 0},  //TV = 3.74(7085 lines)  AV=2.97  SV=6.81  BV=-0.10
    {74998,4480,1032, 0, 0, 0},  //TV = 3.74(7085 lines)  AV=2.97  SV=6.91  BV=-0.20
    {83327,4352,1024, 0, 0, 0},  //TV = 3.59(7872 lines)  AV=2.97  SV=6.85  BV=-0.30
    {91668,4224,1032, 0, 0, 0},  //TV = 3.45(8660 lines)  AV=2.97  SV=6.82  BV=-0.40
    {99998,4096,1040, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=6.79  BV=-0.50
    {99998,4480,1024, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=6.89  BV=-0.60
    {99998,4736,1040, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=7.00  BV=-0.70
    {99998,5120,1032, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=7.10  BV=-0.81
    {99998,5504,1024, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=7.19  BV=-0.90
    {99998,5888,1024, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=7.29  BV=-1.00
    {99998,6240,1040, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=7.40  BV=-1.10
    {99998,6704,1032, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=7.49  BV=-1.19
    {99998,7072,1048, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=7.59  BV=-1.29
    {99998,7696,1032, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=7.69  BV=-1.39
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sAEScene3PLineTable_50Hz =
{
{
    {95,1216,1064, 0, 0, 0},  //TV = 13.36(8 lines)  AV=2.97  SV=5.07  BV=11.26
    {105,1136,1088, 0, 0, 0},  //TV = 13.22(9 lines)  AV=2.97  SV=5.00  BV=11.19
    {105,1216,1072, 0, 0, 0},  //TV = 13.22(9 lines)  AV=2.97  SV=5.08  BV=11.11
    {116,1216,1064, 0, 0, 0},  //TV = 13.07(10 lines)  AV=2.97  SV=5.07  BV=10.98
    {127,1216,1040, 0, 0, 0},  //TV = 12.94(11 lines)  AV=2.97  SV=5.04  BV=10.88
    {137,1136,1096, 0, 0, 0},  //TV = 12.83(12 lines)  AV=2.97  SV=5.01  BV=10.79
    {137,1216,1088, 0, 0, 0},  //TV = 12.83(12 lines)  AV=2.97  SV=5.10  BV=10.70
    {158,1136,1096, 0, 0, 0},  //TV = 12.63(14 lines)  AV=2.97  SV=5.01  BV=10.59
    {169,1216,1024, 0, 0, 0},  //TV = 12.53(15 lines)  AV=2.97  SV=5.01  BV=10.49
    {179,1216,1048, 0, 0, 0},  //TV = 12.45(16 lines)  AV=2.97  SV=5.05  BV=10.37
    {190,1216,1064, 0, 0, 0},  //TV = 12.36(17 lines)  AV=2.97  SV=5.07  BV=10.26
    {201,1216,1040, 0, 0, 0},  //TV = 12.28(18 lines)  AV=2.97  SV=5.04  BV=10.22
    {222,1136,1088, 0, 0, 0},  //TV = 12.14(20 lines)  AV=2.97  SV=5.00  BV=10.11
    {232,1216,1040, 0, 0, 0},  //TV = 12.07(21 lines)  AV=2.97  SV=5.04  BV=10.01
    {254,1136,1088, 0, 0, 0},  //TV = 11.94(23 lines)  AV=2.97  SV=5.00  BV=9.91
    {264,1216,1048, 0, 0, 0},  //TV = 11.89(24 lines)  AV=2.97  SV=5.05  BV=9.81
    {285,1216,1040, 0, 0, 0},  //TV = 11.78(26 lines)  AV=2.97  SV=5.04  BV=9.71
    {306,1216,1040, 0, 0, 0},  //TV = 11.67(28 lines)  AV=2.97  SV=5.04  BV=9.61
    {328,1216,1040, 0, 0, 0},  //TV = 11.57(30 lines)  AV=2.97  SV=5.04  BV=9.51
    {359,1136,1096, 0, 0, 0},  //TV = 11.44(33 lines)  AV=2.97  SV=5.01  BV=9.40
    {381,1216,1024, 0, 0, 0},  //TV = 11.36(35 lines)  AV=2.97  SV=5.01  BV=9.32
    {412,1136,1096, 0, 0, 0},  //TV = 11.25(38 lines)  AV=2.97  SV=5.01  BV=9.20
    {444,1136,1088, 0, 0, 0},  //TV = 11.14(41 lines)  AV=2.97  SV=5.00  BV=9.11
    {476,1136,1088, 0, 0, 0},  //TV = 11.04(44 lines)  AV=2.97  SV=5.00  BV=9.00
    {508,1136,1088, 0, 0, 0},  //TV = 10.94(47 lines)  AV=2.97  SV=5.00  BV=8.91
    {539,1216,1024, 0, 0, 0},  //TV = 10.86(50 lines)  AV=2.97  SV=5.01  BV=8.81
    {582,1136,1096, 0, 0, 0},  //TV = 10.75(54 lines)  AV=2.97  SV=5.01  BV=8.70
    {624,1136,1096, 0, 0, 0},  //TV = 10.65(58 lines)  AV=2.97  SV=5.01  BV=8.60
    {666,1136,1096, 0, 0, 0},  //TV = 10.55(62 lines)  AV=2.97  SV=5.01  BV=8.51
    {719,1136,1088, 0, 0, 0},  //TV = 10.44(67 lines)  AV=2.97  SV=5.00  BV=8.41
    {772,1136,1088, 0, 0, 0},  //TV = 10.34(72 lines)  AV=2.97  SV=5.00  BV=8.31
    {825,1136,1096, 0, 0, 0},  //TV = 10.24(77 lines)  AV=2.97  SV=5.01  BV=8.20
    {889,1136,1088, 0, 0, 0},  //TV = 10.14(83 lines)  AV=2.97  SV=5.00  BV=8.10
    {952,1136,1088, 0, 0, 0},  //TV = 10.04(89 lines)  AV=2.97  SV=5.00  BV=8.00
    {1016,1136,1088, 0, 0, 0},  //TV = 9.94(95 lines)  AV=2.97  SV=5.00  BV=7.91
    {1090,1136,1088, 0, 0, 0},  //TV = 9.84(102 lines)  AV=2.97  SV=5.00  BV=7.81
    {1174,1136,1088, 0, 0, 0},  //TV = 9.73(110 lines)  AV=2.97  SV=5.00  BV=7.70
    {1259,1136,1088, 0, 0, 0},  //TV = 9.63(118 lines)  AV=2.97  SV=5.00  BV=7.60
    {1344,1136,1088, 0, 0, 0},  //TV = 9.54(126 lines)  AV=2.97  SV=5.00  BV=7.51
    {1439,1136,1088, 0, 0, 0},  //TV = 9.44(135 lines)  AV=2.97  SV=5.00  BV=7.41
    {1545,1136,1088, 0, 0, 0},  //TV = 9.34(145 lines)  AV=2.97  SV=5.00  BV=7.31
    {1651,1136,1088, 0, 0, 0},  //TV = 9.24(155 lines)  AV=2.97  SV=5.00  BV=7.21
    {1778,1136,1088, 0, 0, 0},  //TV = 9.14(167 lines)  AV=2.97  SV=5.00  BV=7.10
    {1915,1136,1088, 0, 0, 0},  //TV = 9.03(180 lines)  AV=2.97  SV=5.00  BV=7.00
    {2032,1136,1088, 0, 0, 0},  //TV = 8.94(191 lines)  AV=2.97  SV=5.00  BV=6.91
    {2190,1136,1088, 0, 0, 0},  //TV = 8.83(206 lines)  AV=2.97  SV=5.00  BV=6.80
    {2360,1136,1080, 0, 0, 0},  //TV = 8.73(222 lines)  AV=2.97  SV=4.99  BV=6.71
    {2529,1136,1080, 0, 0, 0},  //TV = 8.63(238 lines)  AV=2.97  SV=4.99  BV=6.61
    {2698,1136,1088, 0, 0, 0},  //TV = 8.53(254 lines)  AV=2.97  SV=5.00  BV=6.50
    {2910,1136,1080, 0, 0, 0},  //TV = 8.42(274 lines)  AV=2.97  SV=4.99  BV=6.40
    {3111,1136,1080, 0, 0, 0},  //TV = 8.33(293 lines)  AV=2.97  SV=4.99  BV=6.31
    {3333,1136,1080, 0, 0, 0},  //TV = 8.23(314 lines)  AV=2.97  SV=4.99  BV=6.21
    {3566,1136,1080, 0, 0, 0},  //TV = 8.13(336 lines)  AV=2.97  SV=4.99  BV=6.11
    {3820,1136,1080, 0, 0, 0},  //TV = 8.03(360 lines)  AV=2.97  SV=4.99  BV=6.01
    {4117,1136,1080, 0, 0, 0},  //TV = 7.92(388 lines)  AV=2.97  SV=4.99  BV=5.90
    {4413,1136,1080, 0, 0, 0},  //TV = 7.82(416 lines)  AV=2.97  SV=4.99  BV=5.80
    {4720,1136,1080, 0, 0, 0},  //TV = 7.73(445 lines)  AV=2.97  SV=4.99  BV=5.71
    {5059,1136,1080, 0, 0, 0},  //TV = 7.63(477 lines)  AV=2.97  SV=4.99  BV=5.61
    {5408,1136,1080, 0, 0, 0},  //TV = 7.53(510 lines)  AV=2.97  SV=4.99  BV=5.51
    {5800,1136,1080, 0, 0, 0},  //TV = 7.43(547 lines)  AV=2.97  SV=4.99  BV=5.41
    {6202,1136,1080, 0, 0, 0},  //TV = 7.33(585 lines)  AV=2.97  SV=4.99  BV=5.31
    {6646,1136,1080, 0, 0, 0},  //TV = 7.23(627 lines)  AV=2.97  SV=4.99  BV=5.21
    {7123,1136,1080, 0, 0, 0},  //TV = 7.13(672 lines)  AV=2.97  SV=4.99  BV=5.11
    {7673,1136,1080, 0, 0, 0},  //TV = 7.03(724 lines)  AV=2.97  SV=4.99  BV=5.00
    {8223,1136,1080, 0, 0, 0},  //TV = 6.93(776 lines)  AV=2.97  SV=4.99  BV=4.90
    {8805,1136,1080, 0, 0, 0},  //TV = 6.83(831 lines)  AV=2.97  SV=4.99  BV=4.81
    {9440,1136,1080, 0, 0, 0},  //TV = 6.73(891 lines)  AV=2.97  SV=4.99  BV=4.71
    {10002,1136,1096, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.01  BV=4.60
    {10002,1216,1088, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.10  BV=4.51
    {10002,1328,1072, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.21  BV=4.41
    {10002,1424,1064, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.30  BV=4.32
    {10002,1536,1064, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.41  BV=4.21
    {10002,1632,1072, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.50  BV=4.11
    {10002,1728,1080, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.60  BV=4.02
    {10002,1936,1040, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.71  BV=3.91
    {10002,2048,1048, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.80  BV=3.82
    {10002,2240,1024, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.89  BV=3.72
    {20004,1136,1096, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=5.01  BV=3.60
    {20004,1216,1088, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=5.10  BV=3.51
    {20004,1328,1072, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=5.21  BV=3.41
    {20004,1424,1064, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=5.30  BV=3.32
    {20004,1536,1072, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=5.42  BV=3.20
    {20004,1632,1072, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=5.50  BV=3.11
    {29995,1216,1024, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=5.01  BV=3.02
    {29995,1216,1104, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=5.12  BV=2.91
    {29995,1328,1080, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=5.22  BV=2.81
    {29995,1424,1080, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=5.32  BV=2.71
    {29995,1536,1072, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=5.42  BV=2.61
    {29995,1632,1080, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=5.51  BV=2.52
    {29995,1840,1032, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=5.62  BV=2.41
    {29995,1936,1056, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=5.73  BV=2.30
    {29995,2048,1064, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=5.82  BV=2.21
    {29995,2240,1040, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=5.92  BV=2.11
    {29995,2448,1024, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=6.02  BV=2.01
    {29995,2560,1048, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=6.12  BV=1.91
    {39996,2048,1056, 0, 0, 0},  //TV = 4.64(3778 lines)  AV=2.97  SV=5.81  BV=1.80
    {39996,2240,1032, 0, 0, 0},  //TV = 4.64(3778 lines)  AV=2.97  SV=5.91  BV=1.71
    {39996,2352,1056, 0, 0, 0},  //TV = 4.64(3778 lines)  AV=2.97  SV=6.01  BV=1.61
    {49998,2048,1040, 0, 0, 0},  //TV = 4.32(4723 lines)  AV=2.97  SV=5.79  BV=1.50
    {49998,2144,1064, 0, 0, 0},  //TV = 4.32(4723 lines)  AV=2.97  SV=5.89  BV=1.41
    {49998,2352,1040, 0, 0, 0},  //TV = 4.32(4723 lines)  AV=2.97  SV=5.99  BV=1.31
    {60001,2048,1064, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=5.82  BV=1.21
    {60001,2240,1040, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=5.92  BV=1.11
    {60001,2352,1064, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=6.02  BV=1.01
    {60001,2560,1056, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=6.13  BV=0.90
    {60001,2752,1048, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=6.23  BV=0.80
    {60001,2960,1040, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=6.32  BV=0.71
    {60001,3200,1032, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=6.42  BV=0.61
    {60001,3328,1056, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=6.51  BV=0.52
    {60001,3712,1024, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=6.62  BV=0.41
    {60001,3968,1024, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=6.72  BV=0.31
    {60001,4224,1032, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=6.82  BV=0.21
    {60001,4480,1040, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=6.92  BV=0.11
    {70002,4224,1024, 0, 0, 0},  //TV = 3.84(6613 lines)  AV=2.97  SV=6.81  BV=-0.00
    {70002,4480,1032, 0, 0, 0},  //TV = 3.84(6613 lines)  AV=2.97  SV=6.91  BV=-0.10
    {80004,4224,1024, 0, 0, 0},  //TV = 3.64(7558 lines)  AV=2.97  SV=6.81  BV=-0.20
    {80004,4480,1040, 0, 0, 0},  //TV = 3.64(7558 lines)  AV=2.97  SV=6.92  BV=-0.30
    {89995,4224,1048, 0, 0, 0},  //TV = 3.47(8502 lines)  AV=2.97  SV=6.84  BV=-0.40
    {99997,4096,1040, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=6.79  BV=-0.50
    {99997,4480,1024, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=6.89  BV=-0.60
    {99997,4736,1040, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=7.00  BV=-0.70
    {99997,5120,1032, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=7.10  BV=-0.81
    {99997,5504,1024, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=7.19  BV=-0.90
    {99997,5888,1024, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=7.29  BV=-1.00
    {99997,6240,1040, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=7.40  BV=-1.10
    {99997,6704,1032, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=7.49  BV=-1.19
    {99997,7072,1048, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=7.59  BV=-1.29
    {99997,7696,1032, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=7.69  BV=-1.39
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_SceneTable3 =
{
    AETABLE_SCENE_INDEX3,    //eAETableID
    128,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    113,    //i4MaxBV
    -14,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sAEScene3PLineTable_60Hz,
    sAEScene3PLineTable_50Hz,
    NULL,
};

static strEvPline sAEScene4PLineTable_60Hz =
{
{
    {249994,1632,1072, 0, 0, 0},  //TV = 2.00(23619 lines)  AV=2.97  SV=5.50  BV=-0.53
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sAEScene4PLineTable_50Hz =
{
{
    {250005,1632,1072, 0, 0, 0},  //TV = 2.00(23621 lines)  AV=2.97  SV=5.50  BV=-0.53
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_SceneTable4 =
{
    AETABLE_SCENE_INDEX4,    //eAETableID
    1,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    -5,    //i4MaxBV
    -5,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sAEScene4PLineTable_60Hz,
    sAEScene4PLineTable_50Hz,
    NULL,
};

static strEvPline sAEScene5PLineTable_60Hz =
{
{
    {95,1216,1064, 0, 0, 0},  //TV = 13.36(8 lines)  AV=2.97  SV=5.07  BV=11.26
    {105,1136,1088, 0, 0, 0},  //TV = 13.22(9 lines)  AV=2.97  SV=5.00  BV=11.19
    {105,1216,1072, 0, 0, 0},  //TV = 13.22(9 lines)  AV=2.97  SV=5.08  BV=11.11
    {116,1216,1064, 0, 0, 0},  //TV = 13.07(10 lines)  AV=2.97  SV=5.07  BV=10.98
    {127,1216,1040, 0, 0, 0},  //TV = 12.94(11 lines)  AV=2.97  SV=5.04  BV=10.88
    {137,1136,1096, 0, 0, 0},  //TV = 12.83(12 lines)  AV=2.97  SV=5.01  BV=10.79
    {137,1216,1088, 0, 0, 0},  //TV = 12.83(12 lines)  AV=2.97  SV=5.10  BV=10.70
    {158,1136,1096, 0, 0, 0},  //TV = 12.63(14 lines)  AV=2.97  SV=5.01  BV=10.59
    {169,1216,1024, 0, 0, 0},  //TV = 12.53(15 lines)  AV=2.97  SV=5.01  BV=10.49
    {179,1216,1048, 0, 0, 0},  //TV = 12.45(16 lines)  AV=2.97  SV=5.05  BV=10.37
    {190,1216,1064, 0, 0, 0},  //TV = 12.36(17 lines)  AV=2.97  SV=5.07  BV=10.26
    {201,1216,1040, 0, 0, 0},  //TV = 12.28(18 lines)  AV=2.97  SV=5.04  BV=10.22
    {222,1136,1088, 0, 0, 0},  //TV = 12.14(20 lines)  AV=2.97  SV=5.00  BV=10.11
    {232,1216,1040, 0, 0, 0},  //TV = 12.07(21 lines)  AV=2.97  SV=5.04  BV=10.01
    {254,1136,1088, 0, 0, 0},  //TV = 11.94(23 lines)  AV=2.97  SV=5.00  BV=9.91
    {264,1216,1048, 0, 0, 0},  //TV = 11.89(24 lines)  AV=2.97  SV=5.05  BV=9.81
    {285,1216,1040, 0, 0, 0},  //TV = 11.78(26 lines)  AV=2.97  SV=5.04  BV=9.71
    {306,1216,1040, 0, 0, 0},  //TV = 11.67(28 lines)  AV=2.97  SV=5.04  BV=9.61
    {328,1216,1040, 0, 0, 0},  //TV = 11.57(30 lines)  AV=2.97  SV=5.04  BV=9.51
    {359,1136,1096, 0, 0, 0},  //TV = 11.44(33 lines)  AV=2.97  SV=5.01  BV=9.40
    {381,1216,1024, 0, 0, 0},  //TV = 11.36(35 lines)  AV=2.97  SV=5.01  BV=9.32
    {412,1136,1096, 0, 0, 0},  //TV = 11.25(38 lines)  AV=2.97  SV=5.01  BV=9.20
    {444,1136,1088, 0, 0, 0},  //TV = 11.14(41 lines)  AV=2.97  SV=5.00  BV=9.11
    {476,1136,1088, 0, 0, 0},  //TV = 11.04(44 lines)  AV=2.97  SV=5.00  BV=9.00
    {508,1136,1088, 0, 0, 0},  //TV = 10.94(47 lines)  AV=2.97  SV=5.00  BV=8.91
    {539,1216,1024, 0, 0, 0},  //TV = 10.86(50 lines)  AV=2.97  SV=5.01  BV=8.81
    {582,1136,1096, 0, 0, 0},  //TV = 10.75(54 lines)  AV=2.97  SV=5.01  BV=8.70
    {624,1136,1096, 0, 0, 0},  //TV = 10.65(58 lines)  AV=2.97  SV=5.01  BV=8.60
    {666,1136,1096, 0, 0, 0},  //TV = 10.55(62 lines)  AV=2.97  SV=5.01  BV=8.51
    {719,1136,1088, 0, 0, 0},  //TV = 10.44(67 lines)  AV=2.97  SV=5.00  BV=8.41
    {772,1136,1088, 0, 0, 0},  //TV = 10.34(72 lines)  AV=2.97  SV=5.00  BV=8.31
    {825,1136,1096, 0, 0, 0},  //TV = 10.24(77 lines)  AV=2.97  SV=5.01  BV=8.20
    {889,1136,1088, 0, 0, 0},  //TV = 10.14(83 lines)  AV=2.97  SV=5.00  BV=8.10
    {952,1136,1088, 0, 0, 0},  //TV = 10.04(89 lines)  AV=2.97  SV=5.00  BV=8.00
    {1016,1136,1088, 0, 0, 0},  //TV = 9.94(95 lines)  AV=2.97  SV=5.00  BV=7.91
    {1090,1136,1088, 0, 0, 0},  //TV = 9.84(102 lines)  AV=2.97  SV=5.00  BV=7.81
    {1174,1136,1088, 0, 0, 0},  //TV = 9.73(110 lines)  AV=2.97  SV=5.00  BV=7.70
    {1259,1136,1088, 0, 0, 0},  //TV = 9.63(118 lines)  AV=2.97  SV=5.00  BV=7.60
    {1344,1136,1088, 0, 0, 0},  //TV = 9.54(126 lines)  AV=2.97  SV=5.00  BV=7.51
    {1439,1136,1088, 0, 0, 0},  //TV = 9.44(135 lines)  AV=2.97  SV=5.00  BV=7.41
    {1545,1136,1088, 0, 0, 0},  //TV = 9.34(145 lines)  AV=2.97  SV=5.00  BV=7.31
    {1651,1136,1088, 0, 0, 0},  //TV = 9.24(155 lines)  AV=2.97  SV=5.00  BV=7.21
    {1778,1136,1088, 0, 0, 0},  //TV = 9.14(167 lines)  AV=2.97  SV=5.00  BV=7.10
    {1915,1136,1088, 0, 0, 0},  //TV = 9.03(180 lines)  AV=2.97  SV=5.00  BV=7.00
    {2032,1136,1088, 0, 0, 0},  //TV = 8.94(191 lines)  AV=2.97  SV=5.00  BV=6.91
    {2190,1136,1088, 0, 0, 0},  //TV = 8.83(206 lines)  AV=2.97  SV=5.00  BV=6.80
    {2360,1136,1080, 0, 0, 0},  //TV = 8.73(222 lines)  AV=2.97  SV=4.99  BV=6.71
    {2529,1136,1080, 0, 0, 0},  //TV = 8.63(238 lines)  AV=2.97  SV=4.99  BV=6.61
    {2698,1136,1088, 0, 0, 0},  //TV = 8.53(254 lines)  AV=2.97  SV=5.00  BV=6.50
    {2910,1136,1080, 0, 0, 0},  //TV = 8.42(274 lines)  AV=2.97  SV=4.99  BV=6.40
    {3111,1136,1080, 0, 0, 0},  //TV = 8.33(293 lines)  AV=2.97  SV=4.99  BV=6.31
    {3333,1136,1080, 0, 0, 0},  //TV = 8.23(314 lines)  AV=2.97  SV=4.99  BV=6.21
    {3566,1136,1080, 0, 0, 0},  //TV = 8.13(336 lines)  AV=2.97  SV=4.99  BV=6.11
    {3820,1136,1080, 0, 0, 0},  //TV = 8.03(360 lines)  AV=2.97  SV=4.99  BV=6.01
    {4117,1136,1080, 0, 0, 0},  //TV = 7.92(388 lines)  AV=2.97  SV=4.99  BV=5.90
    {4413,1136,1080, 0, 0, 0},  //TV = 7.82(416 lines)  AV=2.97  SV=4.99  BV=5.80
    {4720,1136,1080, 0, 0, 0},  //TV = 7.73(445 lines)  AV=2.97  SV=4.99  BV=5.71
    {5059,1136,1080, 0, 0, 0},  //TV = 7.63(477 lines)  AV=2.97  SV=4.99  BV=5.61
    {5408,1136,1080, 0, 0, 0},  //TV = 7.53(510 lines)  AV=2.97  SV=4.99  BV=5.51
    {5800,1136,1080, 0, 0, 0},  //TV = 7.43(547 lines)  AV=2.97  SV=4.99  BV=5.41
    {6202,1136,1080, 0, 0, 0},  //TV = 7.33(585 lines)  AV=2.97  SV=4.99  BV=5.31
    {6646,1136,1080, 0, 0, 0},  //TV = 7.23(627 lines)  AV=2.97  SV=4.99  BV=5.21
    {7123,1136,1080, 0, 0, 0},  //TV = 7.13(672 lines)  AV=2.97  SV=4.99  BV=5.11
    {7673,1136,1080, 0, 0, 0},  //TV = 7.03(724 lines)  AV=2.97  SV=4.99  BV=5.00
    {8223,1136,1080, 0, 0, 0},  //TV = 6.93(776 lines)  AV=2.97  SV=4.99  BV=4.90
    {8329,1216,1064, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.07  BV=4.81
    {8329,1328,1048, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.17  BV=4.70
    {8329,1424,1040, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.26  BV=4.61
    {8329,1536,1040, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.37  BV=4.51
    {8329,1632,1048, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.47  BV=4.41
    {8329,1728,1056, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.56  BV=4.31
    {8329,1840,1064, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.67  BV=4.21
    {8329,2048,1024, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.77  BV=4.11
    {8329,2144,1048, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.87  BV=4.01
    {8329,2352,1024, 0, 0, 0},  //TV = 6.91(786 lines)  AV=2.97  SV=5.97  BV=3.91
    {16670,1216,1064, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=5.07  BV=3.81
    {16670,1328,1048, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=5.17  BV=3.70
    {16670,1424,1048, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=5.27  BV=3.60
    {16670,1536,1040, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=5.37  BV=3.50
    {16670,1632,1048, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=5.47  BV=3.41
    {16670,1728,1064, 0, 0, 0},  //TV = 5.91(1575 lines)  AV=2.97  SV=5.58  BV=3.30
    {24988,1216,1072, 0, 0, 0},  //TV = 5.32(2360 lines)  AV=2.97  SV=5.08  BV=3.21
    {24988,1328,1056, 0, 0, 0},  //TV = 5.32(2360 lines)  AV=2.97  SV=5.18  BV=3.11
    {24988,1424,1056, 0, 0, 0},  //TV = 5.32(2360 lines)  AV=2.97  SV=5.29  BV=3.01
    {24988,1536,1056, 0, 0, 0},  //TV = 5.32(2360 lines)  AV=2.97  SV=5.39  BV=2.90
    {33329,1216,1064, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=5.07  BV=2.81
    {33329,1328,1048, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=5.17  BV=2.70
    {33329,1424,1040, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=5.26  BV=2.61
    {33329,1536,1040, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=5.37  BV=2.51
    {33329,1632,1048, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=5.47  BV=2.41
    {33329,1728,1064, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=5.58  BV=2.30
    {33329,1840,1064, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=5.67  BV=2.21
    {33329,2048,1024, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=5.77  BV=2.11
    {33329,2144,1048, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=5.87  BV=2.01
    {33329,2352,1024, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=5.97  BV=1.91
    {33329,2448,1056, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=6.07  BV=1.81
    {33329,2656,1048, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=6.17  BV=1.70
    {33329,2864,1040, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=6.27  BV=1.61
    {33329,3072,1040, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=6.37  BV=1.51
    {33329,3328,1024, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=6.47  BV=1.41
    {33329,3456,1056, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=6.56  BV=1.31
    {33329,3840,1024, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=6.67  BV=1.21
    {33329,4096,1024, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=6.77  BV=1.11
    {33329,4352,1032, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=6.86  BV=1.01
    {33329,4608,1048, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=6.97  BV=0.91
    {33329,4992,1032, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=7.06  BV=0.82
    {33329,5376,1024, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=7.16  BV=0.72
    {33329,5760,1032, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=7.27  BV=0.61
    {33329,6240,1024, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=7.37  BV=0.51
    {33329,6544,1040, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=7.46  BV=0.41
    {33329,7072,1032, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=7.56  BV=0.31
    {33329,7472,1048, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=7.67  BV=0.21
    {33329,8192,1024, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=7.77  BV=0.11
    {33329,8192,1112, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=7.88  BV=-0.01
    {33329,8192,1192, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=7.98  BV=-0.11
    {33329,8192,1272, 0, 0, 0},  //TV = 4.91(3148 lines)  AV=2.97  SV=8.08  BV=-0.20
    {41669,8192,1088, 0, 0, 0},  //TV = 4.58(3936 lines)  AV=2.97  SV=7.85  BV=-0.30
    {41669,8192,1168, 0, 0, 0},  //TV = 4.58(3936 lines)  AV=2.97  SV=7.96  BV=-0.40
    {49999,8192,1048, 0, 0, 0},  //TV = 4.32(4724 lines)  AV=2.97  SV=7.80  BV=-0.51
    {49999,8192,1120, 0, 0, 0},  //TV = 4.32(4724 lines)  AV=2.97  SV=7.89  BV=-0.60
    {58328,8192,1032, 0, 0, 0},  //TV = 4.10(5510 lines)  AV=2.97  SV=7.78  BV=-0.71
    {58328,8192,1104, 0, 0, 0},  //TV = 4.10(5510 lines)  AV=2.97  SV=7.87  BV=-0.80
    {66669,8192,1032, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=7.78  BV=-0.90
    {66669,8192,1112, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=7.88  BV=-1.01
    {66669,8192,1184, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=7.97  BV=-1.10
    {66669,8192,1272, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=8.08  BV=-1.20
    {66669,8192,1360, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=8.17  BV=-1.30
    {66669,8192,1464, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=8.28  BV=-1.40
    {66669,8192,1568, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=8.38  BV=-1.50
    {66669,8192,1680, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=8.48  BV=-1.60
    {66669,8192,1800, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=8.58  BV=-1.70
    {66669,8192,1928, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=8.68  BV=-1.80
    {66669,8192,2072, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=8.78  BV=-1.90
    {66669,8192,2224, 0, 0, 0},  //TV = 3.91(6299 lines)  AV=2.97  SV=8.88  BV=-2.01
    {74998,8192,2120, 0, 0, 0},  //TV = 3.74(7085 lines)  AV=2.97  SV=8.82  BV=-2.11
    {74998,8192,2272, 0, 0, 0},  //TV = 3.74(7085 lines)  AV=2.97  SV=8.92  BV=-2.21
    {83327,8192,2192, 0, 0, 0},  //TV = 3.59(7872 lines)  AV=2.97  SV=8.86  BV=-2.31
    {91668,8192,2128, 0, 0, 0},  //TV = 3.45(8660 lines)  AV=2.97  SV=8.82  BV=-2.40
    {99998,8192,2088, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=8.79  BV=-2.50
    {99998,8192,2240, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=8.89  BV=-2.60
    {99998,8192,2400, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=8.99  BV=-2.70
    {99998,8192,2568, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=9.09  BV=-2.80
    {99998,8192,2752, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=9.19  BV=-2.90
    {99998,8192,2952, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=9.29  BV=-3.00
    {99998,8192,3160, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=9.39  BV=-3.10
    {99998,8192,3392, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=9.49  BV=-3.20
    {99998,8192,3632, 0, 0, 0},  //TV = 3.32(9448 lines)  AV=2.97  SV=9.59  BV=-3.30
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sAEScene5PLineTable_50Hz =
{
{
    {95,1216,1064, 0, 0, 0},  //TV = 13.36(8 lines)  AV=2.97  SV=5.07  BV=11.26
    {105,1136,1088, 0, 0, 0},  //TV = 13.22(9 lines)  AV=2.97  SV=5.00  BV=11.19
    {105,1216,1072, 0, 0, 0},  //TV = 13.22(9 lines)  AV=2.97  SV=5.08  BV=11.11
    {116,1216,1064, 0, 0, 0},  //TV = 13.07(10 lines)  AV=2.97  SV=5.07  BV=10.98
    {127,1216,1040, 0, 0, 0},  //TV = 12.94(11 lines)  AV=2.97  SV=5.04  BV=10.88
    {137,1136,1096, 0, 0, 0},  //TV = 12.83(12 lines)  AV=2.97  SV=5.01  BV=10.79
    {137,1216,1088, 0, 0, 0},  //TV = 12.83(12 lines)  AV=2.97  SV=5.10  BV=10.70
    {158,1136,1096, 0, 0, 0},  //TV = 12.63(14 lines)  AV=2.97  SV=5.01  BV=10.59
    {169,1216,1024, 0, 0, 0},  //TV = 12.53(15 lines)  AV=2.97  SV=5.01  BV=10.49
    {179,1216,1048, 0, 0, 0},  //TV = 12.45(16 lines)  AV=2.97  SV=5.05  BV=10.37
    {190,1216,1064, 0, 0, 0},  //TV = 12.36(17 lines)  AV=2.97  SV=5.07  BV=10.26
    {201,1216,1040, 0, 0, 0},  //TV = 12.28(18 lines)  AV=2.97  SV=5.04  BV=10.22
    {222,1136,1088, 0, 0, 0},  //TV = 12.14(20 lines)  AV=2.97  SV=5.00  BV=10.11
    {232,1216,1040, 0, 0, 0},  //TV = 12.07(21 lines)  AV=2.97  SV=5.04  BV=10.01
    {254,1136,1088, 0, 0, 0},  //TV = 11.94(23 lines)  AV=2.97  SV=5.00  BV=9.91
    {264,1216,1048, 0, 0, 0},  //TV = 11.89(24 lines)  AV=2.97  SV=5.05  BV=9.81
    {285,1216,1040, 0, 0, 0},  //TV = 11.78(26 lines)  AV=2.97  SV=5.04  BV=9.71
    {306,1216,1040, 0, 0, 0},  //TV = 11.67(28 lines)  AV=2.97  SV=5.04  BV=9.61
    {328,1216,1040, 0, 0, 0},  //TV = 11.57(30 lines)  AV=2.97  SV=5.04  BV=9.51
    {359,1136,1096, 0, 0, 0},  //TV = 11.44(33 lines)  AV=2.97  SV=5.01  BV=9.40
    {381,1216,1024, 0, 0, 0},  //TV = 11.36(35 lines)  AV=2.97  SV=5.01  BV=9.32
    {412,1136,1096, 0, 0, 0},  //TV = 11.25(38 lines)  AV=2.97  SV=5.01  BV=9.20
    {444,1136,1088, 0, 0, 0},  //TV = 11.14(41 lines)  AV=2.97  SV=5.00  BV=9.11
    {476,1136,1088, 0, 0, 0},  //TV = 11.04(44 lines)  AV=2.97  SV=5.00  BV=9.00
    {508,1136,1088, 0, 0, 0},  //TV = 10.94(47 lines)  AV=2.97  SV=5.00  BV=8.91
    {539,1216,1024, 0, 0, 0},  //TV = 10.86(50 lines)  AV=2.97  SV=5.01  BV=8.81
    {582,1136,1096, 0, 0, 0},  //TV = 10.75(54 lines)  AV=2.97  SV=5.01  BV=8.70
    {624,1136,1096, 0, 0, 0},  //TV = 10.65(58 lines)  AV=2.97  SV=5.01  BV=8.60
    {666,1136,1096, 0, 0, 0},  //TV = 10.55(62 lines)  AV=2.97  SV=5.01  BV=8.51
    {719,1136,1088, 0, 0, 0},  //TV = 10.44(67 lines)  AV=2.97  SV=5.00  BV=8.41
    {772,1136,1088, 0, 0, 0},  //TV = 10.34(72 lines)  AV=2.97  SV=5.00  BV=8.31
    {825,1136,1096, 0, 0, 0},  //TV = 10.24(77 lines)  AV=2.97  SV=5.01  BV=8.20
    {889,1136,1088, 0, 0, 0},  //TV = 10.14(83 lines)  AV=2.97  SV=5.00  BV=8.10
    {952,1136,1088, 0, 0, 0},  //TV = 10.04(89 lines)  AV=2.97  SV=5.00  BV=8.00
    {1016,1136,1088, 0, 0, 0},  //TV = 9.94(95 lines)  AV=2.97  SV=5.00  BV=7.91
    {1090,1136,1088, 0, 0, 0},  //TV = 9.84(102 lines)  AV=2.97  SV=5.00  BV=7.81
    {1174,1136,1088, 0, 0, 0},  //TV = 9.73(110 lines)  AV=2.97  SV=5.00  BV=7.70
    {1259,1136,1088, 0, 0, 0},  //TV = 9.63(118 lines)  AV=2.97  SV=5.00  BV=7.60
    {1344,1136,1088, 0, 0, 0},  //TV = 9.54(126 lines)  AV=2.97  SV=5.00  BV=7.51
    {1439,1136,1088, 0, 0, 0},  //TV = 9.44(135 lines)  AV=2.97  SV=5.00  BV=7.41
    {1545,1136,1088, 0, 0, 0},  //TV = 9.34(145 lines)  AV=2.97  SV=5.00  BV=7.31
    {1651,1136,1088, 0, 0, 0},  //TV = 9.24(155 lines)  AV=2.97  SV=5.00  BV=7.21
    {1778,1136,1088, 0, 0, 0},  //TV = 9.14(167 lines)  AV=2.97  SV=5.00  BV=7.10
    {1915,1136,1088, 0, 0, 0},  //TV = 9.03(180 lines)  AV=2.97  SV=5.00  BV=7.00
    {2032,1136,1088, 0, 0, 0},  //TV = 8.94(191 lines)  AV=2.97  SV=5.00  BV=6.91
    {2190,1136,1088, 0, 0, 0},  //TV = 8.83(206 lines)  AV=2.97  SV=5.00  BV=6.80
    {2360,1136,1080, 0, 0, 0},  //TV = 8.73(222 lines)  AV=2.97  SV=4.99  BV=6.71
    {2529,1136,1080, 0, 0, 0},  //TV = 8.63(238 lines)  AV=2.97  SV=4.99  BV=6.61
    {2698,1136,1088, 0, 0, 0},  //TV = 8.53(254 lines)  AV=2.97  SV=5.00  BV=6.50
    {2910,1136,1080, 0, 0, 0},  //TV = 8.42(274 lines)  AV=2.97  SV=4.99  BV=6.40
    {3111,1136,1080, 0, 0, 0},  //TV = 8.33(293 lines)  AV=2.97  SV=4.99  BV=6.31
    {3333,1136,1080, 0, 0, 0},  //TV = 8.23(314 lines)  AV=2.97  SV=4.99  BV=6.21
    {3566,1136,1080, 0, 0, 0},  //TV = 8.13(336 lines)  AV=2.97  SV=4.99  BV=6.11
    {3820,1136,1080, 0, 0, 0},  //TV = 8.03(360 lines)  AV=2.97  SV=4.99  BV=6.01
    {4117,1136,1080, 0, 0, 0},  //TV = 7.92(388 lines)  AV=2.97  SV=4.99  BV=5.90
    {4413,1136,1080, 0, 0, 0},  //TV = 7.82(416 lines)  AV=2.97  SV=4.99  BV=5.80
    {4720,1136,1080, 0, 0, 0},  //TV = 7.73(445 lines)  AV=2.97  SV=4.99  BV=5.71
    {5059,1136,1080, 0, 0, 0},  //TV = 7.63(477 lines)  AV=2.97  SV=4.99  BV=5.61
    {5408,1136,1080, 0, 0, 0},  //TV = 7.53(510 lines)  AV=2.97  SV=4.99  BV=5.51
    {5800,1136,1080, 0, 0, 0},  //TV = 7.43(547 lines)  AV=2.97  SV=4.99  BV=5.41
    {6202,1136,1080, 0, 0, 0},  //TV = 7.33(585 lines)  AV=2.97  SV=4.99  BV=5.31
    {6646,1136,1080, 0, 0, 0},  //TV = 7.23(627 lines)  AV=2.97  SV=4.99  BV=5.21
    {7123,1136,1080, 0, 0, 0},  //TV = 7.13(672 lines)  AV=2.97  SV=4.99  BV=5.11
    {7673,1136,1080, 0, 0, 0},  //TV = 7.03(724 lines)  AV=2.97  SV=4.99  BV=5.00
    {8223,1136,1080, 0, 0, 0},  //TV = 6.93(776 lines)  AV=2.97  SV=4.99  BV=4.90
    {8805,1136,1080, 0, 0, 0},  //TV = 6.83(831 lines)  AV=2.97  SV=4.99  BV=4.81
    {9440,1136,1080, 0, 0, 0},  //TV = 6.73(891 lines)  AV=2.97  SV=4.99  BV=4.71
    {10002,1136,1096, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.01  BV=4.60
    {10002,1216,1088, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.10  BV=4.51
    {10002,1328,1072, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.21  BV=4.41
    {10002,1424,1064, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.30  BV=4.32
    {10002,1536,1064, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.41  BV=4.21
    {10002,1632,1072, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.50  BV=4.11
    {10002,1728,1080, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.60  BV=4.02
    {10002,1936,1040, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.71  BV=3.91
    {10002,2048,1048, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.80  BV=3.82
    {10002,2240,1024, 0, 0, 0},  //TV = 6.64(945 lines)  AV=2.97  SV=5.89  BV=3.72
    {20004,1136,1096, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=5.01  BV=3.60
    {20004,1216,1088, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=5.10  BV=3.51
    {20004,1328,1072, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=5.21  BV=3.41
    {20004,1424,1064, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=5.30  BV=3.32
    {20004,1536,1072, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=5.42  BV=3.20
    {20004,1632,1072, 0, 0, 0},  //TV = 5.64(1890 lines)  AV=2.97  SV=5.50  BV=3.11
    {29995,1216,1024, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=5.01  BV=3.02
    {29995,1216,1104, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=5.12  BV=2.91
    {29995,1328,1080, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=5.22  BV=2.81
    {29995,1424,1080, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=5.32  BV=2.71
    {29995,1536,1072, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=5.42  BV=2.61
    {29995,1632,1080, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=5.51  BV=2.52
    {29995,1840,1032, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=5.62  BV=2.41
    {29995,1936,1056, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=5.73  BV=2.30
    {29995,2048,1064, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=5.82  BV=2.21
    {29995,2240,1040, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=5.92  BV=2.11
    {29995,2448,1024, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=6.02  BV=2.01
    {29995,2560,1048, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=6.12  BV=1.91
    {29995,2752,1040, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=6.21  BV=1.82
    {29995,2960,1040, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=6.32  BV=1.71
    {29995,3200,1032, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=6.42  BV=1.61
    {29995,3456,1024, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=6.52  BV=1.51
    {29995,3584,1056, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=6.62  BV=1.41
    {29995,3968,1032, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=6.73  BV=1.30
    {29995,4224,1032, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=6.82  BV=1.21
    {29995,4480,1040, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=6.92  BV=1.11
    {29995,4864,1032, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=7.02  BV=1.01
    {29995,5120,1048, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=7.12  BV=0.91
    {29995,5504,1040, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=7.21  BV=0.82
    {29995,5888,1040, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=7.31  BV=0.72
    {29995,6384,1040, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=7.43  BV=0.60
    {29995,6896,1024, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=7.52  BV=0.51
    {29995,7280,1040, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=7.62  BV=0.41
    {29995,7936,1024, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=7.72  BV=0.31
    {29995,8192,1064, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=7.82  BV=0.21
    {29995,8192,1144, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=7.93  BV=0.10
    {29995,8192,1232, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=8.03  BV=-0.00
    {29995,8192,1320, 0, 0, 0},  //TV = 5.06(2833 lines)  AV=2.97  SV=8.13  BV=-0.10
    {39996,8192,1064, 0, 0, 0},  //TV = 4.64(3778 lines)  AV=2.97  SV=7.82  BV=-0.21
    {39996,8192,1136, 0, 0, 0},  //TV = 4.64(3778 lines)  AV=2.97  SV=7.92  BV=-0.30
    {39996,8192,1216, 0, 0, 0},  //TV = 4.64(3778 lines)  AV=2.97  SV=8.01  BV=-0.40
    {49998,8192,1048, 0, 0, 0},  //TV = 4.32(4723 lines)  AV=2.97  SV=7.80  BV=-0.51
    {49998,8192,1120, 0, 0, 0},  //TV = 4.32(4723 lines)  AV=2.97  SV=7.89  BV=-0.60
    {49998,8192,1200, 0, 0, 0},  //TV = 4.32(4723 lines)  AV=2.97  SV=7.99  BV=-0.70
    {60001,8192,1072, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=7.83  BV=-0.80
    {60001,8192,1152, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=7.94  BV=-0.91
    {60001,8192,1232, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=8.03  BV=-1.00
    {60001,8192,1320, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=8.13  BV=-1.10
    {60001,8192,1416, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=8.23  BV=-1.20
    {60001,8192,1512, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=8.33  BV=-1.30
    {60001,8192,1624, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=8.43  BV=-1.40
    {60001,8192,1736, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=8.53  BV=-1.50
    {60001,8192,1864, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=8.63  BV=-1.60
    {60001,8192,2000, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=8.73  BV=-1.70
    {60001,8192,2144, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=8.83  BV=-1.80
    {60001,8192,2304, 0, 0, 0},  //TV = 4.06(5669 lines)  AV=2.97  SV=8.94  BV=-1.91
    {70002,8192,2112, 0, 0, 0},  //TV = 3.84(6613 lines)  AV=2.97  SV=8.81  BV=-2.00
    {70002,8192,2264, 0, 0, 0},  //TV = 3.84(6613 lines)  AV=2.97  SV=8.91  BV=-2.10
    {80004,8192,2128, 0, 0, 0},  //TV = 3.64(7558 lines)  AV=2.97  SV=8.82  BV=-2.21
    {80004,8192,2280, 0, 0, 0},  //TV = 3.64(7558 lines)  AV=2.97  SV=8.92  BV=-2.31
    {89995,8192,2168, 0, 0, 0},  //TV = 3.47(8502 lines)  AV=2.97  SV=8.85  BV=-2.40
    {99997,8192,2088, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=8.79  BV=-2.50
    {99997,8192,2240, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=8.89  BV=-2.60
    {99997,8192,2400, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=8.99  BV=-2.70
    {99997,8192,2568, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=9.09  BV=-2.80
    {99997,8192,2752, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=9.19  BV=-2.90
    {99997,8192,2952, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=9.29  BV=-3.00
    {99997,8192,3160, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=9.39  BV=-3.10
    {99997,8192,3392, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=9.49  BV=-3.20
    {99997,8192,3632, 0, 0, 0},  //TV = 3.32(9447 lines)  AV=2.97  SV=9.59  BV=-3.30
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used    
},
};

static strAETable g_AE_SceneTable5 =
{
    AETABLE_SCENE_INDEX5,    //eAETableID
    147,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    113,    //i4MaxBV
    -33,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sAEScene5PLineTable_60Hz,
    sAEScene5PLineTable_50Hz,
    NULL,
};

static strEvPline sAESceneReservePLineTable =
{
{
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_ReserveSceneTable =
{
    AETABLE_SCENE_MAX,    //eAETableID
    0,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    0,    //i4MaxBV
    0,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sAESceneReservePLineTable,
    sAESceneReservePLineTable,
    NULL,
};

static strAESceneMapping g_AEScenePLineMapping = 
{
{
    {LIB3A_AE_SCENE_AUTO, {AETABLE_RPEVIEW_AUTO, AETABLE_CAPTURE_AUTO, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO,  AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX5}},
    {LIB3A_AE_SCENE_NIGHT,{AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX1, AETABLE_VIDEO_NIGHT, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO,  AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX1}},
    {LIB3A_AE_SCENE_ACTION,{AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX2, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO,  AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX2}},
    {LIB3A_AE_SCENE_BEACH,{AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX3, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO,  AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX3}},
    {LIB3A_AE_SCENE_CANDLELIGHT,{AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX1, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO,  AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX1}},
    {LIB3A_AE_SCENE_FIREWORKS,{AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX4, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO,  AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX4}},
    {LIB3A_AE_SCENE_LANDSCAPE,{AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX3, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO,  AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX3}},
    {LIB3A_AE_SCENE_PORTRAIT,{AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX2, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO,  AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX2}},
    {LIB3A_AE_SCENE_NIGHT_PORTRAIT,{AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX1, AETABLE_VIDEO_NIGHT, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO,  AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX1}},
    {LIB3A_AE_SCENE_PARTY,{AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX1, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO,  AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX1}},
    {LIB3A_AE_SCENE_SNOW,{AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX3, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO,  AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX3}},
    {LIB3A_AE_SCENE_SPORTS,{AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX2, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO,  AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX2}},
    {LIB3A_AE_SCENE_STEADYPHOTO,{AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX2, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO,  AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX2}},
    {LIB3A_AE_SCENE_SUNSET,{AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX3, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO,  AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX3}},
    {LIB3A_AE_SCENE_THEATRE,{AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX1, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO,  AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX1}},
    {LIB3A_AE_SCENE_ISO_ANTI_SHAKE,{AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX2, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO,  AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX2}},
    {LIB3A_AE_SCENE_ISO100,{AETABLE_RPEVIEW_AUTO, AETABLE_CAPTURE_ISO100, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO,  AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_CAPTURE_ISO100}},  
    {LIB3A_AE_SCENE_ISO200,{AETABLE_RPEVIEW_AUTO, AETABLE_CAPTURE_ISO200, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO,  AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_CAPTURE_ISO200}},  
    {LIB3A_AE_SCENE_ISO400,{AETABLE_RPEVIEW_AUTO, AETABLE_CAPTURE_ISO400, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO,  AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_CAPTURE_ISO400}},   
    {LIB3A_AE_SCENE_ISO800,{AETABLE_RPEVIEW_AUTO, AETABLE_CAPTURE_ISO800, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO,  AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_CAPTURE_ISO800}},   
    {LIB3A_AE_SCENE_ISO1600,{AETABLE_RPEVIEW_AUTO, AETABLE_CAPTURE_ISO1600, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO,  AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_CAPTURE_ISO1600}},   
    {LIB3A_AE_SCENE_UNSUPPORTED,{AETABLE_RPEVIEW_AUTO, AETABLE_CAPTURE_AUTO, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO,  AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_CAPTURE_AUTO}},    //reserve for future
    {LIB3A_AE_SCENE_UNSUPPORTED,{AETABLE_RPEVIEW_AUTO, AETABLE_CAPTURE_AUTO, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO,  AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_CAPTURE_AUTO}},    //reserve for future
    {LIB3A_AE_SCENE_UNSUPPORTED,{AETABLE_RPEVIEW_AUTO, AETABLE_CAPTURE_AUTO, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO,  AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_CAPTURE_AUTO}},    //reserve for future
    {LIB3A_AE_SCENE_UNSUPPORTED,{AETABLE_RPEVIEW_AUTO, AETABLE_CAPTURE_AUTO, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO,  AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_CAPTURE_AUTO}},    //reserve for future
    {LIB3A_AE_SCENE_UNSUPPORTED,{AETABLE_RPEVIEW_AUTO, AETABLE_CAPTURE_AUTO, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO,  AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_CAPTURE_AUTO}},    //reserve for future
    {LIB3A_AE_SCENE_UNSUPPORTED,{AETABLE_RPEVIEW_AUTO, AETABLE_CAPTURE_AUTO, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO,  AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_CAPTURE_AUTO}},    //reserve for future
    {LIB3A_AE_SCENE_UNSUPPORTED,{AETABLE_RPEVIEW_AUTO, AETABLE_CAPTURE_AUTO, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO,  AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_CAPTURE_AUTO}},    //reserve for future
    {LIB3A_AE_SCENE_UNSUPPORTED,{AETABLE_RPEVIEW_AUTO, AETABLE_CAPTURE_AUTO, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO,  AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_CAPTURE_AUTO}},    //reserve for future
    {LIB3A_AE_SCENE_UNSUPPORTED,{AETABLE_RPEVIEW_AUTO, AETABLE_CAPTURE_AUTO, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO,  AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_CAPTURE_AUTO}},    //reserve for future
},
};

static strAEPLineTable g_strAEPlineTable =
{
{
// PLINE Table
g_AE_PreviewAutoTable,
g_AE_CaptureAutoTable,
g_AE_VideoAutoTable,
g_AE_Video1AutoTable,
g_AE_Video2AutoTable,
g_AE_Custom1AutoTable,
g_AE_Custom2AutoTable,
g_AE_Custom3AutoTable,
g_AE_Custom4AutoTable,
g_AE_Custom5AutoTable,
g_AE_VideoNightTable,
g_AE_CaptureISO100Table,
g_AE_CaptureISO200Table,
g_AE_CaptureISO400Table,
g_AE_CaptureISO800Table,
g_AE_CaptureISO1600Table,
g_AE_StrobeTable,
g_AE_SceneTable1,
g_AE_SceneTable2,
g_AE_SceneTable3,
g_AE_SceneTable4,
g_AE_SceneTable5,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
},
};

static strAEPLineNumInfo g_strAEPreviewAutoPLineInfo =
{
    AETABLE_RPEVIEW_AUTO,
    90,
    -10,
    {
        {1,10000,120,1195,1195},
        {2,120,120,1195,2048},
        {3,120,60,2048,2048},
        {4,60,60,2048,4096},
        {5,60,30,4096,4096},
        {6,30,30,4096,8192},
        {7,30,10,8192,8192},
        {8,10,10,8192,30720},
        {9,10,5,30720,30720},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECaptureAutoPLineInfo =
{
    AETABLE_CAPTURE_AUTO,
    90,
    0,
    {
        {1,10000,15,1195,1195},
        {2,15,15,1195,4096},
        {3,15,10,4096,4096},
        {4,10,10,4096,30720},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEVideoAutoPLineInfo =
{
    AETABLE_VIDEO_AUTO,
    90,
    0,
    {
        {1,10000,60,1195,1195},
        {2,60,60,1195,3072},
        {3,60,30,3072,3072},
        {4,30,30,3072,10240},
        {5,30,15,10240,10240},
        {6,15,15,10240,32768},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEVideo1AutoPLineInfo =
{
    AETABLE_VIDEO1_AUTO,
    90,
    0,
    {
        {1,10000,120,1195,1195},
        {2,120,120,1195,21845},
        {3,0,0,0,0},
        {4,0,0,0,0},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEVideo2AutoPLineInfo =
{
    AETABLE_VIDEO2_AUTO,
    90,
    0,
    {
        {1,10000,60,1195,1195},
        {2,60,60,1195,3072},
        {3,60,30,3072,3072},
        {4,30,30,3072,10240},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECustom1AutoPLineInfo =
{
    AETABLE_CUSTOM1_AUTO,
    90,
    0,
    {
        {1,10000,60,1195,1195},
        {2,60,60,1195,3072},
        {3,60,30,3072,3072},
        {4,30,30,3072,10240},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECustom2AutoPLineInfo =
{
    AETABLE_CUSTOM2_AUTO,
    90,
    0,
    {
        {1,10000,60,1195,1195},
        {2,60,60,1195,3072},
        {3,60,30,3072,3072},
        {4,30,30,3072,10240},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECustom3AutoPLineInfo =
{
    AETABLE_CUSTOM3_AUTO,
    90,
    0,
    {
        {1,10000,60,1195,1195},
        {2,60,60,1195,3072},
        {3,60,30,3072,3072},
        {4,30,30,3072,10240},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECustom4AutoPLineInfo =
{
    AETABLE_CUSTOM4_AUTO,
    90,
    0,
    {
        {1,10000,60,1195,1195},
        {2,60,60,1195,3072},
        {3,60,30,3072,3072},
        {4,30,30,3072,10240},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECustom5AutoPLineInfo =
{
    AETABLE_CUSTOM5_AUTO,
    90,
    0,
    {
        {1,10000,60,1195,1195},
        {2,60,60,1195,3072},
        {3,60,30,3072,3072},
        {4,30,30,3072,10240},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEVideoNightPLineInfo =
{
    AETABLE_VIDEO_NIGHT,
    90,
    -10,
    {
        {1,10000,30,1195,1195},
        {2,30,30,1195,10240},
        {3,30,10,10240,10240},
        {4,10,10,10240,35200},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};


static strAEPLineNumInfo g_strAECaptureISO100PLineInfo =
{
    AETABLE_CAPTURE_ISO100,
    90,
    0,
    {
        {1,10000,5,1230,1230},
        {2,0,0,0,0},
        {3,0,0,0,0},
        {4,0,0,0,0},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECaptureISO200PLineInfo =
{
    AETABLE_CAPTURE_ISO200,
    90,
    0,
    {
        {1,10000,2000,1195,1195},
        {2,2000,2000,1195,2460},
        {3,2000,5,2460,2460},
        {4,0,0,0,0},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECaptureISO400PLineInfo =
{
    AETABLE_CAPTURE_ISO400,
    90,
    0,
    {
        {1,10000,2000,1195,1195},
        {2,2000,2000,1195,4920},
        {3,2000,5,4920,4920},
        {4,0,0,0,0},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECaptureISO800PLineInfo =
{
    AETABLE_CAPTURE_ISO800,
    90,
    0,
    {
        {1,10000,2000,1195,1195},
        {2,2000,2000,1195,9840},
        {3,2000,5,9840,9840},
        {4,0,0,0,0},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECaptureISO1600PLineInfo =
{
    AETABLE_CAPTURE_ISO1600,
    90,
    0,
    {
        {1,10000,2000,1195,1195},
        {2,2000,2000,1195,19680},
        {3,2000,5,19680,19680},
        {4,0,0,0,0},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEStrobePLineInfo =
{
    AETABLE_STROBE,
    90,
    0,
    {
        {1,10000,15,1195,1195},
        {2,15,15,1195,4096},
        {3,15,10,4096,4096},
        {4,10,10,4096,30720},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEScene1PLineInfo =
{
    AETABLE_SCENE_INDEX1,
    90,
    -10,
    {
        {1,10000,15,1195,1195},
        {2,15,15,1195,4096},
        {3,15,5,4096,4096},
        {4,5,5,4096,30720},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEScene2PLineInfo =
{
    AETABLE_SCENE_INDEX2,
    90,
    0,
    {
        {1,10000,100,1195,1195},
        {2,100,100,1195,4096},
        {3,100,30,4096,4096},
        {4,30,30,4096,16384},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEScene3PLineInfo =
{
    AETABLE_SCENE_INDEX3,
    90,
    0,
    {
        {1,10000,30,1195,1195},
        {2,30,30,1195,2048},
        {3,30,15,2048,2048},
        {4,15,15,2048,4096},
        {5,15,10,4096,4096},
        {6,10,10,4096,8192},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEScene4PLineInfo =
{
    AETABLE_SCENE_INDEX4,
    90,
    0,
    {
        {1,4,4,1706,1706},
        {2,0,0,0,0},
        {3,0,0,0,0},
        {4,0,0,0,0},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEScene5PLineInfo =
{
    AETABLE_SCENE_INDEX5,
    90,
    0,
    {
        {1,10000,30,1195,1195},
        {2,30,30,1195,8192},
        {3,30,15,8192,8192},
        {4,15,15,8192,16384},
        {5,15,10,16384,16384},
        {6,10,10,16384,30720},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};
static strAEPLineNumInfo g_strAENoScenePLineInfo =
{
    AETABLE_SCENE_MAX,
    90,
    0,
    {
        {1,0,0,0,0},
        {2,0,0,0,0},
        {3,0,0,0,0},
        {4,0,0,0,0},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};
static strAEPLineInfomation g_strAEPlineInfo =
{
MFALSE,   // FALSE mean the sampling
{
// PLINE Info
g_strAEPreviewAutoPLineInfo,
g_strAECaptureAutoPLineInfo,
g_strAEVideoAutoPLineInfo,
g_strAEVideo1AutoPLineInfo,
g_strAEVideo2AutoPLineInfo,
g_strAECustom1AutoPLineInfo,
g_strAECustom2AutoPLineInfo,
g_strAECustom3AutoPLineInfo,
g_strAECustom4AutoPLineInfo,
g_strAECustom5AutoPLineInfo,
g_strAEVideoNightPLineInfo,
g_strAECaptureISO100PLineInfo,
g_strAECaptureISO200PLineInfo,
g_strAECaptureISO400PLineInfo,
g_strAECaptureISO800PLineInfo,
g_strAECaptureISO1600PLineInfo,
g_strAEStrobePLineInfo,
g_strAEScene1PLineInfo,
g_strAEScene2PLineInfo,
g_strAEScene3PLineInfo,
g_strAEScene4PLineInfo,
g_strAEScene5PLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
},
};

static strAEPLineGainList g_strAEGainList =
{
71,
{
{1136,100},
{1216,100},
{1328,100},
{1424,100},
{1536,100},
{1632,100},
{1728,100},
{1840,100},
{1936,100},
{2048,100},
{2144,100},
{2240,100},
{2352,100},
{2448,100},
{2560,100},
{2656,100},
{2752,100},
{2864,100},
{2960,100},
{3072,100},
{3200,100},
{3328,100},
{3456,100},
{3584,100},
{3712,100},
{3840,100},
{3968,100},
{4096,100},
{4224,100},
{4352,100},
{4480,100},
{4608,100},
{4736,100},
{4864,100},
{4992,100},
{5120,100},
{5248,100},
{5376,100},
{5504,100},
{5632,100},
{5760,100},
{5888,100},
{6016,100},
{6144,100},
{6240,100},
{6384,100},
{6544,100},
{6704,100},
{6896,100},
{7072,100},
{7280,100},
{7472,100},
{7696,100},
{7936,100},
{8192,100},
{8448,100},
{8720,100},
{9040,100},
{9344,100},
{9696,100},
{10080,100},
{10480,100},
{10912,100},
{11392,100},
{11904,100},
{12480,100},
{13104,100},
{13792,100},
{14560,100},
{15408,100},
{16384,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
}
};

static AE_PLINETABLE_T g_PlineTableMapping =
{
g_AEScenePLineMapping,
g_strAEPlineTable,
g_strAEPlineInfo,
g_strAEGainList
};
#endif


#if 0 //Save the P-line info to file for debug
MinGain,1195 
MaxGain,8192 
MiniISOGain,85 
GainStepUnitInTotalRange,128 
PreviewExposureLineUnit,19770 
PreviewMaxFrameRate,31 
VideoExposureLineUnit,10584 
VideoMaxFrameRate,30 
VideoToPreviewSensitivityRatio,1024 
CaptureExposureLineUnit,10584 
CaptureMaxFrameRate,30 
CaptureToPreviewSensitivityRatio,1024 
Video1ExposureLineUnit,10584 
Video1MaxFrameRate,120 
Video1ToPreviewSensitivityRatio,1024 
Video2ExposureLineUnit,19770 
Video2MaxFrameRate,31 
Video2ToPreviewSensitivityRatio,1024 
Custom1ExposureLineUnit,19770 
Custom1MaxFrameRate,31 
Custom1ToPreviewSensitivityRatio,1024 
Custom2ExposureLineUnit,19770 
Custom2MaxFrameRate,31 
Custom2ToPreviewSensitivityRatio,1024 
Custom3ExposureLineUnit,19770 
Custom3MaxFrameRate,31 
Custom3ToPreviewSensitivityRatio,1024 
Custom4ExposureLineUnit,19770 
Custom4MaxFrameRate,31 
Custom4ToPreviewSensitivityRatio,1024 
Custom5ExposureLineUnit,19770 
Custom5MaxFrameRate,31 
Custom5ToPreviewSensitivityRatio,1024 
FocusLength,350 
Fno,28 

// Preview table -- Use preview sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_RPEVIEW_AUTO
90,-10
1,10000,120,1195,1195
2,120,120,1195,2048
3,120,60,2048,2048
4,60,60,2048,4096
5,60,30,4096,4096
6,30,30,4096,8192
7,30,10,8192,8192
8,10,10,8192,30720
9,10,5,30720,30720
AETABLE_END

// Capture table -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_AUTO
90,0
1,10000,15,1195,1195
2,15,15,1195,4096
3,15,10,4096,4096
4,10,10,4096,30720
AETABLE_END

// Video table -- Use video sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_VIDEO_AUTO
90,0
1,10000,60,1195,1195
2,60,60,1195,3072
3,60,30,3072,3072
4,30,30,3072,10240
5,30,15,10240,10240
6,15,15,10240,32768
AETABLE_END

// Video1 table -- Use video sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_VIDEO1_AUTO
90,0
1,10000,120,1195,1195
2,120,120,1195,21845
AETABLE_END

// Video2 table -- Use video sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_VIDEO2_AUTO
90,0
1,10000,60,1195,1195
2,60,60,1195,3072
3,60,30,3072,3072
4,30,30,3072,10240
AETABLE_END

// Custom1 table -- Use custom 1 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CUSTOM1_AUTO
90,0
1,10000,60,1195,1195
2,60,60,1195,3072
3,60,30,3072,3072
4,30,30,3072,10240
AETABLE_END

// Custom2 table -- Use custom 2 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CUSTOM2_AUTO
90,0
1,10000,60,1195,1195
2,60,60,1195,3072
3,60,30,3072,3072
4,30,30,3072,10240
AETABLE_END

// Custom3 table -- Use custom 3 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CUSTOM3_AUTO
90,0
1,10000,60,1195,1195
2,60,60,1195,3072
3,60,30,3072,3072
4,30,30,3072,10240
AETABLE_END

// Custom4 table -- Use custom 4 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CUSTOM4_AUTO
90,0
1,10000,60,1195,1195
2,60,60,1195,3072
3,60,30,3072,3072
4,30,30,3072,10240
AETABLE_END

// Custom5 table -- Use custom 5sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CUSTOM5_AUTO
90,0
1,10000,60,1195,1195
2,60,60,1195,3072
3,60,30,3072,3072
4,30,30,3072,10240
AETABLE_END

// Video Night table -- Use video sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_VIDEO_NIGHT
90,-10
1,10000,30,1195,1195
2,30,30,1195,10240
3,30,10,10240,10240
4,10,10,10240,35200
AETABLE_END

// Capture ISO100 -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_ISO100
90,0
1,10000,5,1230,1230
AETABLE_END

// Capture ISO200 -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_ISO200
90,0
1,10000,2000,1195,1195
2,2000,2000,1195,2460
3,2000,5,2460,2460
AETABLE_END

// Capture ISO400 -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_ISO400
90,0
1,10000,2000,1195,1195
2,2000,2000,1195,4920
3,2000,5,4920,4920
AETABLE_END

// Capture ISO800 -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_ISO800
90,0
1,10000,2000,1195,1195
2,2000,2000,1195,9840
2,2000,5,9840,9840
AETABLE_END

// Capture ISO1600 -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_ISO1600
90,0
1,10000,2000,1195,1195
2,2000,2000,1195,19680
3,2000,5,19680,19680
AETABLE_END

// Strobe table -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_STROBE
90,0
1,10000,15,1195,1195
2,15,15,1195,4096
3,15,10,4096,4096
4,10,10,4096,30720
AETABLE_END

// Table1 PLine -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX1
90,-10
1,10000,15,1195,1195
2,15,15,1195,4096
3,15,5,4096,4096
4,5,5,4096,30720
AETABLE_END

// Table2 PLine -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX2
90,0
1,10000,100,1195,1195
2,100,100,1195,4096
3,100,30,4096,4096
2,30,30,4096,16384
AETABLE_END

// Table3 PLine -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX3
90,0
1,10000,30,1195,1195
2,30,30,1195,2048
3,30,15,2048,2048
4,15,15,2048,4096
5,15,10,4096,4096
6,10,10,4096,8192
AETABLE_END

// Table4 PLine -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX4
90,0
1,4,4,1706,1706
AETABLE_END

// Table5 PLine -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX5
90,0
1,10000,30,1195,1195
2,30,30,1195,8192
3,30,15,8192,8192
4,15,15,8192,16384
5,15,10,16384,16384
6,10,10,16384,30720
AETABLE_END

// Table5 PLine -- Use capture sensor setting

// Table6 PLine -- Use capture sensor setting

// Table7 PLine -- Use capture sensor setting

// Table8 PLine -- Use capture sensor setting

// Table9 PLine -- Use capture sensor setting

// Table10 PLine -- Use capture sensor setting

// Table11 PLine -- Use capture sensor setting

// Table12 PLine -- Use capture sensor setting

// Table13 PLine -- Use capture sensor setting

// Table14 PLine -- Use capture sensor setting

// Table15 PLine -- Use capture sensor setting

// Table16 PLine -- Use capture sensor setting

// Table17 PLine -- Use capture sensor setting

// Table18 PLine -- Use capture sensor setting

// Table19 PLine -- Use capture sensor setting

// Table20 PLine -- Use capture sensor setting

AE_SCENE_AUTO,AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_AUTO,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO,  AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX5
AE_SCENE_NIGHT,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX1,AETABLE_VIDEO_NIGHT,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO,  AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX1
AE_SCENE_ACTION,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX2,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO,  AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX2
AE_SCENE_BEACH,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX3,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO,  AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX3
AE_SCENE_CANDLELIGHT,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX1,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO,  AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX1
AE_SCENE_FIREWORKS,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX4,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO,  AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX4
AE_SCENE_LANDSCAPE,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX3,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO,  AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX3
AE_SCENE_PORTRAIT,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX2,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO,  AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX2
AE_SCENE_NIGHT_PORTRAIT,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX1,AETABLE_VIDEO_NIGHT,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO,  AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX1
AE_SCENE_PARTY,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX1,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO,  AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX1
AE_SCENE_SNOW,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX3,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO,  AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX3
AE_SCENE_SPORTS,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX2,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO,  AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX2
AE_SCENE_STEADYPHOTO,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX2,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO,  AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX2
AE_SCENE_SUNSET,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX3,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO,  AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX3
AE_SCENE_THEATRE,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX1,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO,  AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX1
AE_SCENE_ISO_ANTI_SHAKE,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX2,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO,  AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX2
AE_SCENE_ISO100,AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_ISO100,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO,  AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_CAPTURE_ISO100
AE_SCENE_ISO200,AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_ISO200,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO,  AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_CAPTURE_ISO200
AE_SCENE_ISO400,AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_ISO400,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO,  AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_CAPTURE_ISO400
AE_SCENE_ISO800,AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_ISO800,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO,  AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_CAPTURE_ISO800
AE_SCENE_ISO1600 ,AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_ISO1600,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO,  AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO ,AETABLE_CAPTURE_ISO1600
,,,,,,
,,,,,,
,,,,,,
,,,,,,
,,,,,,
,,,,,,
,,,,,,
,,,,,,
,,,,,,
#endif
