/*****************************************************************************
| Project Name: Flash Bootloader
|    File Name: FBL_APFB.C
|
|  Description: Application dependent Flash block table definition
|
|-----------------------------------------------------------------------------
|               C O P Y R I G H T
|-----------------------------------------------------------------------------
| Copyright (c) 2000-2012 by Vector Informatik GmbH, all rights reserved
|
| Please note, that this file contains example configuration used by the
| Flash Bootloader. This code may influence the behaviour of the 
| bootloader in principle. Therefore, great care must be taken to verify
| the correctness of the implementation.
|
| The contents of the originally delivered files are only examples resp. 
| implementation proposals. With regard to the fact that these functions 
| are meant for demonstration purposes only, Vector Informatik´s 
| liability shall be expressly excluded in cases of ordinary negligence, 
| to the extent admissible by law or statute.
|
|-----------------------------------------------------------------------------
|               A U T H O R   I D E N T I T Y
|-----------------------------------------------------------------------------
| Initials      Name                   Company
| --------      --------------------   ---------------------------------------
| CB            Christian Baeuerle     Vector Informatik GmbH
| Fz            Ralf Fritz             Vector Informatik GmbH
| Hp            Armin Happel           Vector Informatik GmbH
| Ls            Konrad Lazarus         Vector Informatik GmbH
| ACP           Alexandre C. Plombin   Vector CANtech, Inc.
| Ths           Thomas Sommer          Vector Informatik GmbH
| WM            Marco Wierer           Vector Informatik GmbH
| AMN           Ahmad Nasser           Vector CANtech, Inc.
| Rr            Robert Schaeffner      Vector Informatik GmbH
| MFR           Michael F. Radwick     Vector CANtech, Inc.
| MHz           Markus Holzer          Vector Informatik GmbH
| Ci            Andre Caspari          Vector Informatik GmbH
|-----------------------------------------------------------------------------
|               R E V I S I O N   H I S T O R Y
|-----------------------------------------------------------------------------
| Date        Version   Author  Description
| ----------  --------  ------  ----------------------------------------------
| 2003-08-18  01.12.00  CB      Branch of HCS12 version V1.11.00
| 2003-12-15  01.13.00  WM      ESCAN00007163: Added support for multiple 
|                               memory types
| 2004-02-11  01.13.01  WM      ESCAN00007524: Removed protected area from 
|                               EEPROM block definition
| 2004-02-25  01.13.02  CB      Additional OEM 
| 2004-02-27  01.13.03  Rr      Minor changes 
| 2004-11-22  01.13.04  AMN     Added support for external flash
|                               Added Segment Size to MemDrv
|                       MFR     Define MEM_TYPE_SEPARATOR, treat SWM_DATA_ADDR
|                                as a logical address
| 2004-12-31  01.13.05  MHz     Moved define FBL_FLASHBLOCK_TABLE to header
|                                file
|                               ESCAN00010657: Added version scan support
|                       WM      ESCAN00010726: Support for MCS12X added
|                       ACP     External flash support is now customer 
|                                specific only
|                               Slight rework of version check
| 2005-01-25  01.13.06  WM      Readded missing pages for MCS12
| 2006-10-09  01.13.07  Ci      Adapted table for MCS12X to comply with flash
|                                configuration of 256 and 384 kB derivatives
| 2006-11-23  01.13.08  Ci      Added flashblock table entries for MCS12X
|                                EEPROM configuration
|                               ESCAN00017994: Ensured compilation of flash
|                                block table for Ford SLP3
|                               ESCAN00018480: Renamed C_COMP_MWERKS_MCS12X_MSCAN12
|                                to C_COMP_MTRWRKS_MCS12X_MSCAN12
|                               Added flashblock table entries for external 
|                                flash configuration
| 2009-08-17  01.13.09  CB      ESCAN00037162: Added flash block table entries
|*****************************************************************************/

/*****************************************************************************/
/****     N O T E:      ******************************************************/
/*                                                                           */
/*  This file should be used as a skeleton for your FBL.                     */
/*  Add FBL application specific code in this file.                          */
/*  Other C-Files except fbl_ap*.c should not be changed!!                   */
/*                                                                           */
/*****************************************************************************/

/* Includes ******************************************************************/
#include "fbl_inc.h"

/* --- Version --- */
/* Version below is hardware specific !!! */
/* ##V_CFG_MANAGEMENT ##CQProject : FblApiFtab_Mcs12Sgf CQComponent : Implementation */
#define FBLAPIFTAB_MCS12SGF_VERSION         0x0113
#define FBLAPIFTAB_MCS12SGF_RELEASE_VERSION 0x09

/* This is the check against the generic API in the shared header file */
/* There is no cross-check between generic API release version and HW-specific version */
#if (FBLAPIFTAB_MCS12SGF_VERSION != FBLAPIFTAB_VERSION)
# error "Error in FBL_APFB.C: Source and header file are inconsistent!"
#endif

/* Defines *******************************************************************/
/* Memory type definitions - extend this for your own memory types */
#if defined( FBL_ENABLE_MULTIPLE_MEM_DEVICES )
# define MEM_TYPE_INT_FLASH    0
# define MEM_TYPE_INT_EEPROM   1
#else
# define MEM_TYPE_INT_FLASH 
# define MEM_TYPE_INT_EEPROM
#endif

#ifndef MEM_TYPE_SEPARATOR
# define MEM_TYPE_SEPARATOR
#endif

/* Constants *****************************************************************/

/* -------------------------------------------------------------------- */
/* Definition of Flash memory regions (Flash segments).                 */
/* These are normally fixed values, but may differ on new derivatives.  */
/* Add memory regions for your own purpose, e.g. to write EEPROM.       */
/*                                                                      */
/* Make sure you remove the memory locations that are occupied by the   */
/* Flash Bootloader!                                                    */
/* -------------------------------------------------------------------- */
/* Format of each memory entry:                                         */
/*    STARTADDRESS, ENDADDRESS, DEVICE TYPE (optional)                  */
/* -------------------------------------------------------------------- */

V_MEMROM0 V_MEMROM1_FAR tFlashBlock V_MEMROM2_FAR FlashBlock[] = 
{
   /* -------------------------------------------------------------------------- */
   /* Example entries for external Eeprom/FLASH.                                 */
   /* -------------------------------------------------------------------------- */
#if defined( FBL_ENABLE_MULTIPLE_MEM_DEVICES )
    { 0x40010000 , 0x40014000 MEM_TYPE_SEPARATOR MEM_TYPE_INT_EEPROM }
#endif

   /* -------------------------------------------------------------------------- */
   /* Example entries for internal Flash.                                        */
   /* -------------------------------------------------------------------------- */
    { 0x00000000u, 0x00001FFFu MEM_TYPE_SEPARATOR MEM_TYPE_INT_FLASH }  /* 8K */
   ,{ 0x00002000u, 0x00003FFFu MEM_TYPE_SEPARATOR MEM_TYPE_INT_FLASH }  /* 8K */
   ,{ 0x00004000u, 0x00005FFFu MEM_TYPE_SEPARATOR MEM_TYPE_INT_FLASH }  /* 8K */
   ,{ 0x00006000u, 0x00007FFFu MEM_TYPE_SEPARATOR MEM_TYPE_INT_FLASH }  /* 8K */
   ,{ 0x00008000u, 0x00009FFFu MEM_TYPE_SEPARATOR MEM_TYPE_INT_FLASH }  /* 8K */
   ,{ 0x0000A000u, 0x0000BFFFu MEM_TYPE_SEPARATOR MEM_TYPE_INT_FLASH }  /* 8K */
   ,{ 0x0000C000u, 0x0000DFFFu MEM_TYPE_SEPARATOR MEM_TYPE_INT_FLASH }  /* 8K */
   ,{ 0x0000E000u, 0x0000FFFFu MEM_TYPE_SEPARATOR MEM_TYPE_INT_FLASH }  /* 8K */
   ,{ 0x00010000u, 0x00017FFFu MEM_TYPE_SEPARATOR MEM_TYPE_INT_FLASH }  /* 32K */
   ,{ 0x00018000u, 0x0001FFFFu MEM_TYPE_SEPARATOR MEM_TYPE_INT_FLASH }  /* 32K */
   ,{ 0x00020000u, 0x00027FFFu MEM_TYPE_SEPARATOR MEM_TYPE_INT_FLASH }  /* 32K */
   ,{ 0x00028000u, 0x0002FFFFu MEM_TYPE_SEPARATOR MEM_TYPE_INT_FLASH }  /* 32K */
   ,{ 0x00030000u, 0x00037FFFu MEM_TYPE_SEPARATOR MEM_TYPE_INT_FLASH }  /* 32K */
   ,{ 0x00038000u, 0x0003FFFFu MEM_TYPE_SEPARATOR MEM_TYPE_INT_FLASH }  /* 32K */
   ,{ 0x00040000u, 0x00047FFFu MEM_TYPE_SEPARATOR MEM_TYPE_INT_FLASH }  /* 32K */
   ,{ 0x00048000u, 0x0004FFFFu MEM_TYPE_SEPARATOR MEM_TYPE_INT_FLASH }  /* 32K */
   ,{ 0x00050000u, 0x00057FFFu MEM_TYPE_SEPARATOR MEM_TYPE_INT_FLASH }  /* 32K */
   ,{ 0x00058000u, 0x0005FFFFu MEM_TYPE_SEPARATOR MEM_TYPE_INT_FLASH }  /* 32K */
   ,{ 0x00060000u, 0x00067FFFu MEM_TYPE_SEPARATOR MEM_TYPE_INT_FLASH }  /* 32K */
   ,{ 0x00068000u, 0x0006FFFFu MEM_TYPE_SEPARATOR MEM_TYPE_INT_FLASH }  /* 32K */
   ,{ 0x00070000u, 0x00077FFFu MEM_TYPE_SEPARATOR MEM_TYPE_INT_FLASH }  /* 32K */
   ,{ 0x00078000u, 0x0007FFFFu MEM_TYPE_SEPARATOR MEM_TYPE_INT_FLASH }  /* 32K */
   ,{ 0x01000000u, 0x01007FFFu MEM_TYPE_SEPARATOR MEM_TYPE_INT_FLASH }  /* 32K (ExtendedUserArea) */
};

V_MEMROM0 V_MEMROM1_FAR vuint8 V_MEMROM2_FAR kNrOfFlashBlock = sizeof(FlashBlock)/sizeof(FlashBlock[0]);

#if defined( FBL_ENABLE_MULTIPLE_MEM_DEVICES )
/* -------------------------------------------------------------------------- */
/* Example memory driver list for Flash and EEPROM driver.                    */
/* Extended this table below for your memory driver.                          */
/* -------------------------------------------------------------------------- */
/* Format of each memory driver entry:                                        */
/*    Pointer to init function,                                               */
/*    Pointer to deinit function,                                             */
/*    Pointer to erase function,                                              */
/*    Pointer to write function,                                              */
/*    Pointer to read function                                                */
/* -------------------------------------------------------------------------- */
MEMORY_ROM tMemDrv memDrvLst[] = 
{
   { 
      FlashDriver_InitSync,
      FlashDriver_DeinitSync,
      FlashDriver_REraseSync,
      FlashDriver_RWriteSync,
      FlashDriver_RReadSync,
      FLASH_SEGMENT_SIZE
   }
#if defined( FBL_ENABLE_MULTIPLE_MEM_DEVICES )
   ,{ 
      EepromDriver_InitSync,
      EepromDriver_DeinitSync,
      EepromDriver_REraseSync,
      EepromDriver_RWriteSync,
      EepromDriver_RReadSync,
      1
   }
#endif
};
V_MEMROM0 V_MEMROM1_FAR vuint8 V_MEMROM2_FAR kNrOfMemDrv = sizeof(memDrvLst)/sizeof(memDrvLst[0]);
#endif /* FBL_ENABLE_MULTIPLE_MEM_DEVICES */
