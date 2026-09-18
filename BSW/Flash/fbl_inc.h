/***********************************************************************************************************************
 *  FILE DESCRIPTION
 *  ------------------------------------------------------------------------------------------------------------------*/
/** \file
 *  \brief         Include File
 *
 *  --------------------------------------------------------------------------------------------------------------------
 *  COPYRIGHT
 *  --------------------------------------------------------------------------------------------------------------------
 *  \par Copyright
 *  \verbatim
 *  Copyright (c) 2016 by Vector Informatik GmbH.                                                  All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 */
/**********************************************************************************************************************/

/***********************************************************************************************************************
 *  AUTHOR IDENTITY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Name                          Initials      Company
 *  --------------------------------------------------------------------------------------------------------------------
 *  Andreas Wenckebach            AWh           Vector Informatik GmbH
 *  Joern Herwig                  JHg           Vector Informatik GmbH
 *  Marco Riedl                   Rie           Vector Informatik GmbH
 *  Alexander Starke              ASe           Vector Informatik GmbH
 *  Thomas Bezold                 TBe           Vector Informatik GmbH
 *  Achim Strobelt                Ach           Vector Informatik GmbH
 *  Christian Baeuerle            CB            Vector Informatik GmbH
 *  Daniel Koebel                 DKl           Vector Informatik GmbH
 *  Sebastian Loos                Shs           Vector Informatik GmbH
 *  Andre Caspari                 Ci            Vector Informatik GmbH
 *  Torben Stoessel               TnS           Vector Informatik GmbH
 *  Christopher Elkins            CEl           Vector CANtech, Inc.
 *  --------------------------------------------------------------------------------------------------------------------
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Version    Date        Author  Change Id        Description
 *  --------------------------------------------------------------------------------------------------------------------
 **********************************************************************************************************************/

#ifndef __FBL_INC_H__
#define __FBL_INC_H__

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/

#include "v_cfg_fbl.h"
#include "v_def.h"
#include "fbl_cfg.h"
#include "fbl_def.h"
#include "fbl_sfr.h" 
#include "flashdrv.h"
#include "flash.h"
#include "iotypes.h"
#include "VStdLib_Cfg.h"
#include "vstdlib.h"
#include "Os.h"
#include "fbl_flio.h"
#include "fbl_apfb.h"
#include "fbl_wd.h"

#ifdef BLU
#else
#include "FrIf.h"
#endif


/***********************************************************************************************************************
 *  Disable version check
 **********************************************************************************************************************/

#define _FBLWRAPPERFLASH_HW_VERSION                         FBLWRAPPERFLASH_RH850RV40HIS_VERSION
#define _FBLWRAPPERFLASH_HW_RELEASE_VERSION                 FBLWRAPPERFLASH_RH850RV40HIS_RELEASE_VERSION

/***********************************************************************************************************************
 *  FBL wrapper defines
 **********************************************************************************************************************/
/*
#define FblLookForWatchdog                                  HIStriggerWatchdog
#define FblLookForWatchdogVoid                              HIStriggerWatchdog
*/
#define MemDriver_InitSync                                  FlashDriver_InitSync
#define MemDriver_DeinitSync                                FlashDriver_DeinitSync
#define MemDriver_RWriteSync                                FlashDriver_RWriteSync
#define MemDriver_REraseSync                                FlashDriver_REraseSync

#endif /* __FBL_INC_H__ */

/***********************************************************************************************************************
 *  END OF FILE: FBL_INC.H
 **********************************************************************************************************************/
