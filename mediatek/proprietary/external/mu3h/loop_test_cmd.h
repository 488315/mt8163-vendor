/*----------------------------------------------------------------------------*
 * No Warranty                                                                *
 * Except as may be otherwise agreed to in writing, no warranties of any      *
 * kind, whether express or implied, are given by MTK with respect to any MTK *
 * Deliverables or any use thereof, and MTK Deliverables are provided on an   *
 * "AS IS" basis.  MTK hereby expressly disclaims all such warranties,        *
 * including any implied warranties of merchantability, non-infringement and  *
 * fitness for a particular purpose and any warranties arising out of course  *
 * of performance, course of dealing or usage of trade.  Parties further      *
 * acknowledge that Company may, either presently and/or in the future,       *
 * instruct MTK to assist it in the development and the implementation, in    *
 * accordance with Company's designs, of certain softwares relating to        *
 * Company's product(s) (the "Services").  Except as may be otherwise agreed  *
 * to in writing, no warranties of any kind, whether express or implied, are  *
 * given by MTK with respect to the Services provided, and the Services are   *
 * provided on an "AS IS" basis.  Company further acknowledges that the       *
 * Services may contain errors, that testing is important and Company is      *
 * solely responsible for fully testing the Services and/or derivatives       *
 * thereof before they are used, sublicensed or distributed.  Should there be *
 * any third party action brought against MTK, arising out of or relating to  *
 * the Services, Company agree to fully indemnify and hold MTK harmless.      *
 * If the parties mutually agree to enter into or continue a business         *
 * relationship or other arrangement, the terms and conditions set forth      *
 * hereunder shall remain effective and, unless explicitly stated otherwise,  *
 * shall prevail in the event of a conflict in the terms in any agreements    *
 * entered into between the parties.                                          *
 *---------------------------------------------------------------------------*/
/*-----------------------------------------------------------------------------
 * Copyright (c) 2009, MediaTek, Inc.
 * All rights reserved.
 *
 * Unauthorized use, practice, perform, copy, distribution, reproduction,
 * or disclosure of this information in whole or in part is prohibited.
 *-----------------------------------------------------------------------------
 *
 *
 *---------------------------------------------------------------------------*/

//-----------------------------------------------------------------------------
// Include files
//-----------------------------------------------------------------------------

#include "cli.h"

//-----------------------------------------------------------------------------
// Configurations
//-----------------------------------------------------------------------------

extern INT32 _LoopDefault(INT32 i4Argc, const CHAR **szArgv);

//-----------------------------------------------------------------------------
// Constant definitions
//-----------------------------------------------------------------------------

CLI_EXEC_T _arLoopTestCmdTbl [] =
{
	{ (CHAR*)"config" , (CHAR*)"config" , _LoopDefault , NULL, (CHAR*)"Config loopback need endpoints", CLI_GUEST },
	{ (CHAR*)"deconfig" , (CHAR*)"deconfig" , _LoopDefault , NULL, (CHAR*)"deconfig endpoint", CLI_GUEST }, 
	{ (CHAR*)"loop" , (CHAR*)"loop" , _LoopDefault , NULL, (CHAR*)"Do a bulk/intr loopback round", CLI_GUEST },
	{ (CHAR*)"sg" , (CHAR*)"sg" , _LoopDefault , NULL, (CHAR*)"Do a bulk/intr loopback round with scatter gather", CLI_GUEST },
	{ (CHAR*)"ctrl" , (CHAR*)"ctrl" , _LoopDefault , NULL, (CHAR*)"Do a control transfer loopback round", CLI_GUEST },
	{ (CHAR*)"quit" , (CHAR*)"quit" , _LoopDefault , NULL, (CHAR*)"Quit loopback test", CLI_GUEST },
	{ (CHAR*)"cquit" , (CHAR*)"cquit" , _LoopDefault , NULL, (CHAR*)"Quit ctrl loopback test", CLI_GUEST },
	{ (CHAR*)"stopep" , (CHAR*)"stopep" , _LoopDefault , NULL, (CHAR*)"Queue stop endpoint command", CLI_GUEST },
//	{ (CHAR*)"bulk" , (CHAR*)"bulk" , _SlotConfig , NULL, (CHAR*)"Do a bulk loopback test", CLI_GUEST },
    { (CHAR*)NULL , (CHAR*)NULL , NULL, NULL, (CHAR*) NULL, CLI_GUEST }
};

CLI_EXEC_T _rLoopTestCmdTbl =
{
    (CHAR*)"loopback test", (CHAR*)"lb", NULL, _arLoopTestCmdTbl, (CHAR*)"loopback test cases", CLI_GUEST,
};

CLI_EXEC_T* GetLoopTestCmdTbl(void){
    return &_rLoopTestCmdTbl;
}

//-----------------------------------------------------------------------------
// Macro definitions
//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
// extern variables
//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
// global variables
//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
// Imported variables
//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
// Imported functions
//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
// extern functions
//-----------------------------------------------------------------------------

//----------------------------------------------------------------------------- 
/** 
 *  @param  
 *  @retval   
 */
//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
// public functions
//-----------------------------------------------------------------------------
// 
