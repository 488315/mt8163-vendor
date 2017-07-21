#ifndef _GPIO_H_
#define _GPIO_H_

/* Copyright Statement:
 *
 * This software/firmware and related documentation ("MediaTek Software") are
 * protected under relevant copyright laws. The information contained herein is
 * confidential and proprietary to MediaTek Inc. and/or its licensors. Without
 * the prior written permission of MediaTek inc. and/or its licensors, any
 * reproduction, modification, use or disclosure of MediaTek Software, and
 * information contained herein, in whole or in part, shall be strictly
 * prohibited.
 * 
 * MediaTek Inc. (C) 2010. All rights reserved.
 * 
 * BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
 * THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
 * RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER
 * ON AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL
 * WARRANTIES, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR
 * NONINFRINGEMENT. NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH
 * RESPECT TO THE SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY,
 * INCORPORATED IN, OR SUPPLIED WITH THE MEDIATEK SOFTWARE, AND RECEIVER AGREES
 * TO LOOK ONLY TO SUCH THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO.
 * RECEIVER EXPRESSLY ACKNOWLEDGES THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO
 * OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES CONTAINED IN MEDIATEK
 * SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE
 * RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR
 * STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S
 * ENTIRE AND CUMULATIVE LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE
 * RELEASED HEREUNDER WILL BE, AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE
 * MEDIATEK SOFTWARE AT ISSUE, OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE
 * CHARGE PAID BY RECEIVER TO MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
 *
 * The following software/firmware and/or related documentation ("MediaTek
 * Software") have been modified by MediaTek Inc. All revisions are subject to
 * any receiver's applicable license agreements with MediaTek Inc.
 */

/******************************************************************************
 * mt6516_gpio.h - The file is the gpio header file !
 * 
 * Copyright 2008-2009 MediaTek Co.,Ltd.
 * 
 * DESCRIPTION: -
 *     This file expose an in-kernel gpio modules to other device drivers
 *
 * modification history
 * ----------------------------------------
 * 01a, 08 oct 2008, Koshi,Chiu written
 * ----------------------------------------
 ******************************************************************************/
#include <typedefs.h>
#include <cust_gpio_usage.h>
#include <gpio_const.h>

/*----------------------------------------------------------------------------*/
//  Error Code No.
#define RSUCCESS	0
#define ERACCESS	1
#define ERINVAL		2
#define ERWRAPPER	3
/*----------------------------------------------------------------------------*/

#define MAX_GPIO_PIN    (MT_GPIO_BASE_MAX)
/******************************************************************************
* Enumeration for GPIO pin
******************************************************************************/
/* GPIO MODE CONTROL VALUE*/
typedef enum {
    GPIO_MODE_UNSUPPORTED = -1,
    GPIO_MODE_GPIO  = 0,
    GPIO_MODE_00    = 0,
    GPIO_MODE_01    = 1,
    GPIO_MODE_02    = 2,
    GPIO_MODE_03    = 3,
    GPIO_MODE_04    = 4,
    GPIO_MODE_05    = 5,
    GPIO_MODE_06    = 6,
    GPIO_MODE_07    = 7,

    GPIO_MODE_MAX,
    GPIO_MODE_DEFAULT = GPIO_MODE_01,
} GPIO_MODE;
/*----------------------------------------------------------------------------*/
/* GPIO DIRECTION */
typedef enum {
    GPIO_DIR_UNSUPPORTED = -1,
    GPIO_DIR_IN     = 0,
    GPIO_DIR_OUT    = 1,

    GPIO_DIR_MAX,
    GPIO_DIR_DEFAULT = GPIO_DIR_IN,
} GPIO_DIR;
/*----------------------------------------------------------------------------*/
/* GPIO PULL ENABLE*/
typedef enum {
    GPIO_PULL_EN_UNSUPPORTED = -1,
    GPIO_PULL_DISABLE = 0,
    GPIO_PULL_ENABLE  = 1,

    GPIO_PULL_EN_MAX,
    GPIO_PULL_EN_DEFAULT = GPIO_PULL_ENABLE,
} GPIO_PULL_EN;
/*----------------------------------------------------------------------------*/
/* GPIO SMT*/
typedef enum {
    GPIO_SMT_UNSUPPORTED = -1,
    GPIO_SMT_DISABLE = 0,
    GPIO_SMT_ENABLE  = 1,

    GPIO_SMT_MAX,
    GPIO_SMT_DEFAULT = GPIO_SMT_ENABLE,
} GPIO_SMT;
/*----------------------------------------------------------------------------*/
/* GPIO IES*/
typedef enum {
    GPIO_IES_UNSUPPORTED = -1,
    GPIO_IES_DISABLE = 0,
    GPIO_IES_ENABLE  = 1,

    GPIO_IES_MAX,
    GPIO_IES_DEFAULT = GPIO_IES_ENABLE,
} GPIO_IES;
/*----------------------------------------------------------------------------*/
/* GPIO PULL-UP/PULL-DOWN*/
typedef enum {
    GPIO_PULL_UNSUPPORTED = -1,
    GPIO_PULL_DOWN  = 0,
    GPIO_PULL_UP    = 1,

    GPIO_PULL_MAX,
    GPIO_PULL_DEFAULT = GPIO_PULL_DOWN
} GPIO_PULL;
/*----------------------------------------------------------------------------*/
/* GPIO OUTPUT */
typedef enum {
    GPIO_OUT_UNSUPPORTED = -1,
    GPIO_OUT_ZERO = 0,
    GPIO_OUT_ONE  = 1,

    GPIO_OUT_MAX,
    GPIO_OUT_DEFAULT = GPIO_OUT_ZERO,
    GPIO_DATA_OUT_DEFAULT = GPIO_OUT_ZERO,  /*compatible with DCT*/
} GPIO_OUT;
/*----------------------------------------------------------------------------*/
/* GPIO INPUT */
typedef enum {
    GPIO_IN_UNSUPPORTED = -1,
    GPIO_IN_ZERO = 0,
    GPIO_IN_ONE  = 1,

    GPIO_IN_MAX,
} GPIO_IN;

/*----------------------------------------------------------------------------*/
/* GPIO MSDC_PIN_R1_R0_VALUE */
typedef enum {
	MSDC_PIN_R0_R1_00 = 0,
	MSDC_PIN_R0_R1_01,
	MSDC_PIN_R0_R1_02,
	MSDC_PIN_R0_R1_03,
	MSDC_PIN_R0_R1_MAX,
}MSDC_PIN_R1_R0_VALUE;

/*----------------------------------------------------------------------------*/
/* GPIO POWER*/
typedef enum {
    GPIO_VIO28 = 0,
    GPIO_VIO18 = 1,
    MSDC_VIO28_MC1 = 2,
    MSDC_VIO18_MC1 = 3,
    MSDC_VMC = 4,

    GPIO_VIO_MAX,
} GPIO_POWER;
/*----------------------------------------------------------------------------*/
typedef struct {
	unsigned short val;
	unsigned short _align1;
	unsigned short set;
	unsigned short _align2;
	unsigned short rst;
	unsigned short _align3[3];

} VAL_REGS;
/*----------------------------------------------------------------------------*/
typedef struct {
   VAL_REGS dir[10];			/*0x0000 ~ 0x009F: 160  bytes*/
   u8		rsv00[96];			/*0x00a0 ~ 0x00FF: 96	 bytes*/ 
   
   VAL_REGS pullen[10]; 		/*0x0100 ~ 0x019F: 160 bytes */
   u8		rsv01[96]; 			/*0x01a0 ~ 0x01FF: 96	bytes */
   VAL_REGS pullsel[10];		/*0x0200 ~ 0x029F: 160 bytes */
   u8		rsv02[352]; 		/*0x02a0 ~ 0x3FF: 352	bytes */
   
   VAL_REGS dout[10];			/*0x0400 ~ 0x049F: 160  bytes*/
   u8		rsv03[96];			/*0x04a0 ~ 0x04FF: 96	 bytes*/
   VAL_REGS din[10];			/*0x0500 ~ 0x059F: 160 bytes*/
   u8		rsv04[96];			/*0x05a0 ~ 0x05FF: 96	 bytes*/
   VAL_REGS mode[31];			/*0x0600 ~ 0x07EF: 496 bytes*/
   u8		rsv05[144]; 		/*0x07F0 ~ 0x087F: 144  bytes*/
   VAL_REGS bank;			    /*0x0880 ~ 0x088F: 16bytes*/


   u8		rsv06[112]; 		/*0x0890 ~ 0x08FF: 112 bytes */
   VAL_REGS ies[2]; 			/*0x0900 ~ 0x091F:	32 bytes */
   VAL_REGS smt[2]; 			/*0x0920 ~ 0x093F:	32 bytes */
   u8		rsv07[192]; 		/*0x0940 ~ 0x09FF: 192 bytes */

   VAL_REGS tdsel[5];			/*0x0A00 ~ 0x0A4F: 80 bytes */
   u8		rsv08[48];			/*0x0A50 ~ 0x0A7F: 48 bytes */
   VAL_REGS rdsel[4];			/*0x0A80 ~ 0x0ABF: 64 bytes */
   
   u8		rsv9[64];			/*0x0AC0 ~ 0x0AFF: 64 bytes */
   VAL_REGS drv_sel[8];		    /*0x0B00 ~ 0x0B7F: 128 bytes */
   u8		rsv10[128]; 		/*0x0B80 ~ 0x0BFF: 128 bytes */

   VAL_REGS msdc0_ctrl[7];	   /*0x0C00 ~ 0x0C6F:  112 bytes */
   VAL_REGS msdc1_ctrl[6];	   /*0x0C70~ 0x0CCF:  96 bytes */
   VAL_REGS msdc2_ctrl[6];	   /*0x0CD0 ~ 0x0D2F:  96 bytes */

   VAL_REGS tm; 			   /*0x0D30 ~ 0x0D3F:  16 bytes */
   VAL_REGS usb;			   /*0x0D40 ~ 0x0D4F:  16 bytes */
   VAL_REGS od33_ctrl[3]; 	   /*0x0D50 ~ 0x0D7F:  48 bytes */
   
   u8		rsv11[16];		   /*0x0D80 ~ 0x0D8F:  16 bytes */

   VAL_REGS kpad_ctrl[2];	   /*0x0D90 ~ 0x0DAF:  32 bytes */

   VAL_REGS eint_ctrl[2]; 	   /*0x0DB0 ~ 0x0DCF:  32 bytes */

   u8		rsv12[80];		   /*0x0DD0 ~ 0x0E1F:	 80 bytes */

   VAL_REGS bias_ctrl[2]; 	   /*0x0E20 ~ 0x0E3F:  32 bytes */

   u8		rsv13[192];		   /* 0x0E40 ~ 0x0EFF: 192 bytes */
   VAL_REGS msdc3_ctrl[7];	   /*0x0F00 ~ 0x0F6F:  112 bytes */

} GPIO_REGS;
/*----------------------------------------------------------------------------*/
typedef struct {
    unsigned int no     : 16;
    unsigned int mode   : 3;
    unsigned int pullsel: 1;
    unsigned int din    : 1;
    unsigned int dout   : 1;
    unsigned int pullen : 1;
    unsigned int dir    : 1;
    unsigned int dinv   : 1;
    unsigned int _align : 7;
} GPIO_CFG;
/******************************************************************************
* GPIO Driver interface
******************************************************************************/
/*direction*/
s32 mt_set_gpio_dir(u32 pin, u32 dir);
s32 mt_get_gpio_dir(u32 pin);

/*pull enable*/
s32 mt_set_gpio_pull_enable(u32 pin, u32 enable);
s32 mt_get_gpio_pull_enable(u32 pin);
/*pull select*/
s32 mt_set_gpio_pull_select(u32 pin, u32 select);
s32 mt_get_gpio_pull_select(u32 pin);

/*schmitt trigger*/
s32 mt_set_gpio_smt(u32 pin, u32 enable);
s32 mt_get_gpio_smt(u32 pin);

/*IES*/
s32 mt_set_gpio_ies(u32 pin, u32 enable);
s32 mt_get_gpio_ies(u32 pin);

/*input/output*/
s32 mt_set_gpio_out(u32 pin, u32 output);
s32 mt_get_gpio_out(u32 pin);
s32 mt_get_gpio_in(u32 pin);

/*mode control*/
s32 mt_set_gpio_mode(u32 pin, u32 mode);
s32 mt_get_gpio_mode(u32 pin);

S32 mt_set_msdc_r0_r1_value(u32 pin, u32 value);
S32 mt_get_msdc_r0_r1_value(u32 pin);


void mt_gpio_init(void);
void mt_gpio_set_default(void);
#endif //_GPIO_H_
