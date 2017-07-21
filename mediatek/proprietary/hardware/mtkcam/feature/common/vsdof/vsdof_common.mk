# Copyright Statement:
#
# This software/firmware and related documentation ("MediaTek Software") are
# protected under relevant copyright laws. The information contained herein
# is confidential and proprietary to MediaTek Inc. and/or its licensors.
# Without the prior written permission of MediaTek inc. and/or its licensors,
# any reproduction, modification, use or disclosure of MediaTek Software,
# and information contained herein, in whole or in part, shall be strictly prohibited.

# MediaTek Inc. (C) 2010. All rights reserved.
#
# BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
# THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
# RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER ON
# AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
# EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
# MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
# NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
# SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
# SUPPLIED WITH THE MEDIATEK SOFTWARE, AND RECEIVER AGREES TO LOOK ONLY TO SUCH
# THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. RECEIVER EXPRESSLY ACKNOWLEDGES
# THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES
# CONTAINED IN MEDIATEK SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR ANY MEDIATEK
# SOFTWARE RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR
# STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND
# CUMULATIVE LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
# AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
# OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY RECEIVER TO
# MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
#
# The following software/firmware and/or related documentation ("MediaTek Software")
# have been modified by MediaTek Inc. All revisions are subject to any receiver's
# applicable license agreements with MediaTek Inc.


################################################################################
#
################################################################################
-include $(TOP)/$(MTK_PATH_CUSTOM)/hal/mtkcam/mtkcam.mk
PLATFORM := $(shell echo $(MTK_PLATFORM) | tr A-Z a-z)

sinclude $(TOP)/$(MTK_PATH_SOURCE)/hardware/mtkcam/mtkcam.mk

VSDOF_COMMON_INC := $(MTKCAM_C_INCLUDES)
VSDOF_COMMON_INC += $(MTKCAM_DRV_INCLUDE)
VSDOF_COMMON_INC += $(MTKCAM_DRV_INCLUDE)/drv
VSDOF_COMMON_INC += $(TOP)/$(MTK_PATH_SOURCE)/hardware/mtkcam
VSDOF_COMMON_INC += $(TOP)/$(MTK_PATH_SOURCE)/hardware/gralloc_extra/include
VSDOF_COMMON_INC += $(TOP)/$(MTK_PATH_SOURCE)/hardware/mtkcam/feature/include/common
VSDOF_COMMON_INC += $(TOP)/$(MTK_PATH_CUSTOM_PLATFORM)/hal/inc
VSDOF_COMMON_INC += $(TOP)/$(MTK_PATH_SOURCE)/hardware/mtkcam/include/$(PLATFORM)
VSDOF_COMMON_INC += $(TOP)/$(MTK_PATH_SOURCE)/hardware/mtkcam/common/include

ifeq ($(IS_LEGACY), 1)
VSDOF_COMMON_INC += $(MTK_MTKCAM_PLATFORM)/include
VSDOF_COMMON_INC += $(MTK_MTKCAM_PLATFORM)/include/mtkcam
VSDOF_COMMON_INC += $(MTKCAM_C_INCLUDES)/..
VSDOF_COMMON_INC += $(MTK_PATH_SOURCE)/hardware/mtkcam/drv/include/mt6797/drv
VSDOF_COMMON_INC += $(MTK_PATH_SOURCE)/hardware/mtkcam/include/algorithm/mt6797
VSDOF_COMMON_INC += $(MTK_PATH_SOURCE)/hardware/mtkcam/include/algorithm/mt6797/libutility
VSDOF_COMMON_INC += $(MTK_PATH_SOURCE)/hardware/mtkcam/aaa/include/IPv1.1
endif
