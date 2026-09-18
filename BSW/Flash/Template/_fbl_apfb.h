/*****************************************************************************
| Project Name: Flash Bootloader
|    File Name: FBL_APFB.H
|
|  Description: Application dependent Flash block table definition
|
|-----------------------------------------------------------------------------
|               C O P Y R I G H T
|-----------------------------------------------------------------------------
| Copyright (c) 2000-2005 by Vector Informatik GmbH, all rights reserved
|
| Please note, that this file contains example source code used by the
| Flash Bootloader. This code may influence the behaviour of the 
| bootloader in principle. Therefore, great care must be taken to verify
| the correctness of the implementation.
|
| The contents of the originally delivered files are only examples resp. 
| implementation proposals. With regard to the fact that these functions 
| are meant for demonstration purposes only, Vector Informatik´s 
| liability shall be expressly excluded in cases of ordinary negligence, 
| to the extent admissible by law or statute.
|-----------------------------------------------------------------------------
|               A U T H O R   I D E N T I T Y
|-----------------------------------------------------------------------------
| Initials   Name                   Company
| --------   --------------------   ---------------------------------------
| CB         Christian Baeuerle     Vector Informatik GmbH
| Fz         Ralf Fritz             Vector Informatik GmbH
| Hp         Armin Happel           Vector Informatik GmbH
| Ls         Konrad Lazarus         Vector Informatik GmbH
| ACP        Alexandre C. Plombin   Vector CANtech, Inc.
| Ths        Thomas Sommer          Vector Informatik GmbH
| WM         Marco Wierer           Vector Informatik GmbH
| Rr         Robert Schaeffner      Vector Informatik GmbH
| AMN        Ahmad Nasser           Vector CANtech, Inc.
| MFR        Michael Radwick        Vector CANtech, Inc.
| MHz        Markus Holzer          Vector Informatik GmbH
| FHe        Florian Hees           Vector Informatik GmbH
| QPs        Quetty Palacios        Vector Informatik GmbH
|-----------------------------------------------------------------------------
|               R E V I S I O N   H I S T O R Y
|-----------------------------------------------------------------------------
| Date        Version   Author  Description
| ----------  --------  ------  ----------------------------------------------
| 2002-12-09  01.00.00  WM      Creation
| 2003-02-05  01.01.00  Ls      Minor changes for TMS470
| 2003-02-18  01.02.00  Fz      Add of V850 CarGate-F
|                       CB      XC16X added
|                               Changed C_COMP_HEW_SH7055 -> C_COMP_HEW_SH705X  
|                       WM      FLASH_BLOCK_ENTRIES now calculated
| 2003-02-24  01.03.00  WM      No changes
| 2003-03-21  01.04.00  AMN     No Changes
| 2003-04-01  01.05.00  Rr      No Changes
| 2003-04-08  01.06.00  Rr      Removed C_COMP_ANSI_TMS_470
|                       Ls      Minor change in SH70XX and TMS_470 section
|                       CB      No changes  
| 2003-04-30  01.07.00  Fz      ESCAN00005549: Flash block permanent available
|                               for TMS470
| 2003-05-15  01.08.00  CB      ESCAN00005681: Support for ST10-CCAN
| 2003-06-06  01.09.00  Rr      Minor Changes for TMS470
| 2003-05-15  01.08.00  CB      ESCAN00005681: Support for ST10-CCAN 
| 2003-06-05  01.09.00  Rr      No changes
| 2003-06-05  01.10.00  WM      ESCAN00005848: Adaptations for MB90F394H
| 2003-06-12  01.11.00  CB      No changes
| 2003-07-25  01.12.00  Rr      M32C added
| 2003-07-30  01.13.00  Ls      ESCAN00006198: M16C Mitsubishi added
| 2003-09-11  01.13.01  WM      Added FBL_FLASHBLOCK_TABLE define
| 2004-01-22  01.13.02  MFR     Update Version number
| 2004-04-23  01.13.03  Ls      Changes to simplify structure, 
|                               FBL_ENABLE_MULTIPLE_MEM_DEVICES added
| 2004-05-12  01.13.04  Hp      Additional support for MB90F59x
| 2004-06-04  01.13.05  MHz     ESCAN00008534: Added configuration switches for 
|                               HC08GZ48 and GZ60
|                               Added FBL_ENABLE_MULTIPLE_MEM_DEVICES support
| 2004-07-01  01.13.06  MHz     No changes
|                       WM      Encapsulated FBL_SEGMENT definition by an OEM switch
| 2004-07-06  01.13.07  MHz     Minor changes
| 2004-07-28  01.13.08  MHz     ESCAN00009000: Changed memory classifier
|                               structure for far const variables to avoid 
|                               softune compiler warnings             
| 2004-08-04  01.13.09  Ap      ESCAN00009070: Consistent pragma directive applied  
|                               for V850 NEC compiler
| 2004-11-26  01.13.10  MFR     Support for C_COMP_HIWARE_12
|                       WM      ESCAN00010424: Added version scan support
|                               Minor changes for FBL_ENABLE_MULTIPLE_MEM_DEVICES
| 2004-12-21  01.13.11  MHz     Removed Flashblock check for OEM GM and moved 
|                               define FBL_FLASHBLOCK_TABLE for OEM DC
| 2005-02-07  01.13.12  FHe     Added Infineon XC164 Support for GM
| 2005-06-01  01.13.13  FHe     Changed VAG Client switches and defines
| 2005-07-12  01.13.14  QPs     Added support for C_COMP_FUJITSU_FR60_CCAN
| 2006-04-13  01.13.15  WM      Minor changes for C_COMP_IAR_M16C
|                       ACP     ESCAN00016046: Swapped V_MEMROM0 & extern keywords
| 2006-12-18  01.13.16  JHg     Remove special case section for DC/NEC
| 2008-05-07  01.13.17  JHg     Added memory identifier to flash block descriptor
*****************************************************************************/
#ifndef FBL_APFB_H
#define FBL_APFB_H

/* --- Version --- */
/* ##V_CFG_MANAGEMENT ##CQProject : FblApiFtab CQComponent : Implementation */
#define FBLAPIFTAB_VERSION         0x0113
#define FBLAPIFTAB_RELEASE_VERSION 0x17

/* Defines *******************************************************************/
#define FLASH_BLOCK_ENTRIES   kNrOfFlashBlock

/* Typedefs ******************************************************************/
/* Typedefs for FlashBlock */
typedef struct  {
  FBL_ADDR_TYPE   begin;
  FBL_ADDR_TYPE   end;
#if defined( FBL_ENABLE_MULTIPLE_MEM_DEVICES )
  vuint8         device;
#endif
} tFlashBlock;

/* Global data ***************************************************************/
V_MEMROM0 extern V_MEMROM1_FAR vuint8 V_MEMROM2_FAR kNrOfFlashBlock;
V_MEMROM0 extern V_MEMROM1_FAR tFlashBlock V_MEMROM2_FAR FlashBlock[];

#if defined( FBL_ENABLE_MULTIPLE_MEM_DEVICES )
V_MEMROM0 extern V_MEMROM1_FAR tMemDrv V_MEMROM2_FAR memDrvLst[];
V_MEMROM0 extern V_MEMROM1_FAR vuint8 V_MEMROM2_FAR kNrOfMemDrv;
#endif

/* The flash block table is required in each configuration, not only
 * if FBL_ENABLE_FLASHBLOCK_CHECK is set */
#define FBL_FLASHBLOCK_TABLE

#endif /* FBL_APFB_H */

