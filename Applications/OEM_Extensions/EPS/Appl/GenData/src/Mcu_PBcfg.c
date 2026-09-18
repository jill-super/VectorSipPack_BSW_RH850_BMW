/*============================================================================*/
/* Project      = AUTOSAR Renesas X1x MCAL Components                         */
/* Module       = Mcu_PBcfg.c                                                 */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2013-2016 Renesas Electronics Corporation                     */
/*============================================================================*/
/* Purpose:                                                                   */
/* Provision of AUTOSAR MCU post build parameters.                            */
/* AUTOMATICALLY GENERATED FILE - DO NOT EDIT                                 */
/*                                                                            */
/*============================================================================*/
/*                                                                            */
/* Unless otherwise agreed upon in writing between your company and           */
/* Renesas Electronics Corporation the following shall apply!                 */
/*                                                                            */
/* Warranty Disclaimer                                                        */
/*                                                                            */
/* There is no warranty of any kind whatsoever granted by Renesas. Any        */
/* warranty is expressly disclaimed and excluded by Renesas, either expressed */
/* or implied, including but not limited to those for non-infringement of     */
/* property intellectual, merchantability and/or fitness for the particular   */
/* purpose.                                                                   */
/*                                                                            */
/* Renesas shall not have any obligation to maintain, service or provide bug  */
/* fixes for the supplied Product(s) and/or the Application.                  */
/*                                                                            */
/* Each User is solely responsible for determining the appropriateness of     */
/* using the Product(s) and assumes all risks associated with its exercise    */
/* of rights under this Agreement, including, but not limited to the risks    */
/* and costs of program errors, compliance with applicable laws, damage to    */
/* or loss of data, programs or equipment, and unavailability or              */
/* interruption of operations.                                                */
/*                                                                            */
/* Limitation of Liability                                                    */
/*                                                                            */
/* In no event shall Renesas be liable to the User for any incidental,        */
/* consequential, indirect, or punitive damage (including but not limited     */
/* to lost profits) regardless of whether such liability is based on breach   */
/* of contract, tort, strict liability, breach of warranties, failure of      */
/* essential purpose or otherwise and even if advised of the possibility of   */
/* such damages. Renesas shall not be liable for any services or products     */
/* provided by third party vendors, developers or consultants identified or   */
/* referred to the User by Renesas in connection with the Product(s) and/or   */
/* the Application.                                                           */
/*                                                                            */
/*============================================================================*/
/* Environment:                                                               */
/*              Devices:        P1x                                           */
/*============================================================================*/

/*******************************************************************************
**                      Revision Control History                              **
*******************************************************************************/
/*
 * V1.0.0:  26-Aug-2013 : Initial Version
 * V1.1.0:  21-Apr-2014 : Following changes are made:
 *                        1. Copyright information is updated.
 *                        2. Include section is updated.
 *                        3. Structure Mcu_GstConfiguration is updated.
 * V1.1.1:  15-Sep-2014 : As per CR 008 and mantis #19850, following change is
 *                        made:
 *                        1. Changes are made at all relevant places
 *                           accordingly to append U or UL after numeric values.
 *                        2. Include Section is updated for adding Mcu.h.
 * V1.1.2:  12-Nov-2015 : Following changes are done as part of P1M
 *                        V4.00.05 ASIL-D release:
 *                        1. As part of ARDAAAE-1481, modified
 *                           Mcu_GstClockSetting structure to add ADC clock
 *                           configuration parameter.
 *                        2. As per ARDAAAE-1464, introduced structures
 *                           Mcu_GstEcmResetReasonMap, Mcu_GstEcmMiNotifMap
 *                           and Mcu_GstEcmNmiNotifMap. Modified structure
 *                           Mcu_GstConfiguration.
 *                        3. As per ARDAAAE-1464, added structure
 *                           Mcu_GstClockMonitorConf and removed elements for
 *                           CLMA from Mcu_GstConfiguration.
 *                        4. Mcu_GstEcmInitNotifyMap are added for the
 *                           implementation of EAAR_PN0079_FSR_0102.
 * V1.1.3:  29-Feb-2016 : Following changes are done as part of P1M V4.01.00
 *                         release activity.
 *                         1. As per ticket ARDAAAE-1486, the Config data
 *                            members are declared with memory class TYPEDEF.
 *                         2. As per ticket ARDAAAE-1593, the memory section is
 *                            updated for variables.
 *                         3. QAC warnings Msg: 3211, 3132, 0315 and 0862
 *                            are added.
 *                         4. Copyright information is updated.
 */
/******************************************************************************/

/*******************************************************************************
**                   Generation Tool Version                                  **
*******************************************************************************/
/*
 * TOOL VERSION:  1.1.5
 */

/*******************************************************************************
**                         Input File                                         **
*******************************************************************************/
/*
 * INPUT FILE:    D:\usr\usage\Delivery\CBD17x\CBD1700369\D04\external\ThirdParty\Mcal_Rh850P1x\Supply\AUTOSAR_RH850_P1x_MCAL_Ver4.02.01.D\X1X\P1x\modules\mcu\generator\R403_mcu_P1x_BSWMDT.arxml
 *                D:\TEMP\DaVinci\Cfg-9461008\Generation\Cfg_Gen-1512464595813-0\AutosarFiles_ValGen-1512482165317-0\ExtGen_DrvMcu_ECUC_8204994758864138452.arxml
 * GENERATED ON:   5 Dec 2017 - 14:56:51
 */

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "Mcu.h"
#include "Mcu_PBTypes.h"
#include "Mcu_Cbk.h"
/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
/* AUTOSAR release version information */
#define MCU_PBCFG_C_AR_RELEASE_MAJOR_VERSION  4U
#define MCU_PBCFG_C_AR_RELEASE_MINOR_VERSION  0U
#define MCU_PBCFG_C_AR_RELEASE_REVISION_VERSION  3U

/* File version information */
#define MCU_PBCFG_C_SW_MAJOR_VERSION  1U
#define MCU_PBCFG_C_SW_MINOR_VERSION  0U


/*******************************************************************************
**                      Version Check                                         **
*******************************************************************************/
/* Specification Major Version Check */
#if (MCU_PBTYPES_AR_RELEASE_MAJOR_VERSION != \
MCU_PBCFG_C_AR_RELEASE_MAJOR_VERSION)
#error "Mcu_PBcfg.c : Mismatch in Release Major Version"
  #endif

  #if (MCU_PBTYPES_AR_RELEASE_MINOR_VERSION != \
MCU_PBCFG_C_AR_RELEASE_MINOR_VERSION)
#error "Mcu_PBcfg.c : Mismatch in Release Minor Version"
  #endif

  #if (MCU_PBTYPES_AR_RELEASE_REVISION_VERSION != \
MCU_PBCFG_C_AR_RELEASE_REVISION_VERSION)
#error "Mcu_PBcfg.c : Mismatch in Release Revision Version"
  #endif

  #if (MCU_PBTYPES_SW_MAJOR_VERSION != MCU_PBCFG_C_SW_MAJOR_VERSION)
    #error "Mcu_PBcfg.c : Mismatch in Software Major Version"
  #endif

  #if (MCU_PBTYPES_SW_MINOR_VERSION != MCU_PBCFG_C_SW_MINOR_VERSION)
    #error "Mcu_PBcfg.c : Mismatch in Software Minor Version"
  #endif

/*******************************************************************************
**                      MISRA C Rule Violations                               **
*******************************************************************************/

/******************************************************************************/

/* 1. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:0306) Cast between a pointer to object and an integral  */
/*                 type.                                                      */
/* Rule          : MISRA-C:2004 Rule                                          */
/* Justification : Casting is done to map hardware register addresses.        */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:0306)-1 and                           */
/*                 END Msg(4:0306)-1 tags in the code.                        */

/******************************************************************************/

/* 2. MISRA C RULE VIOLATION:                                                 */
/* Message      : (2:3211) The global identifier 'Mcu_GpConfigPtr' is defined */
/*                here but is not used in this translation unit.              */
/* Rule         : MISRA-C:2004 Message 3211                                   */
/* Justification: As per AUTOSAR, all global variables extern declaration     */
/*                shall be given in Mcu_Ram.h                                 */
/* Verification : However, part of the code is verified                       */
/*                manually and it is not having any impact                    */
/* Reference    : Look for START Msg(2:3211)-2 and                            */
/*                END Msg(2:3211)-2 tags in the code.                         */
/******************************************************************************/

/* 3. MISRA C RULE VIOLATION:                                                 */
/* Message       : (2:3132) Hard coded 'magic' number, '', used to define the */
/*                 size of an array.                                          */
/* Rule          : MISRA-C:2004 Message 3132                                  */
/* Justification : Hard coded Numbers are added instead of macros for better  */
/*                 readability.                                               */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(2:3132)-3 and                           */
/*                 END Msg(2:3132)-3 tags in the code.                        */
/******************************************************************************/

/* 4. MISRA C RULE VIOLATION:                                                 */
/* Message      : (2:0315) Implicit conversion from a pointer to object       */
/*                type to a pointer to void                                   */
/* Rule         : MISRA-C:2004 Message 0315                                   */
/* Justification: Type casting is done to access with different objects       */
/*                in the code                                                 */
/* Verification : However, part of the code is verified                       */
/*                manually and it is not having any impact                    */
/* Reference    : Look for START Msg(2:0315)-4 and                            */
/*                END Msg(2:0315)-4 tags in the code.                         */
/******************************************************************************/

/* 5. MISRA C RULE VIOLATION:                                                 */
/* Message       :(2:0862) #include "MemMap.h" directive is redundant.      */
/* Rule          : MISRA-C:2004 Message 0862                                  */
/* Justification : As per requirement [MEMMAP003],the inclusion of the memory */
/*                 mapping header files is done within the code.              */
/*                 As neither executable code nor symbols are included        */
/*                 (only pragmas) this violation is an approved exception     */
/*                 without side effects.                                      */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/******************************************************************************/

/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/

#define MCU_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "MemMap.h"

/* Structure for MCU Init configuration */
/* MISRA Violation: START Msg(2:3211)-2 */
CONST(Mcu_ConfigType, MCU_CONST) Mcu_GstConfiguration[1] =
{
  /* Index: 0 - McuModuleConfiguration */
  {
    /* ulStartOfDbToc */
    0x0ED94100UL,

    /* ulLVIindicationReg */
    0x00000000UL,

    /* pClockSetting */
    /* MISRA Violation: START Msg(2:0315)-4 */
    &Mcu_GstClockSetting[0],
    /* END Msg(2:0315)-4 */

    /* pEcmSetting */
    /* MISRA Violation: START Msg(2:0315)-4 */
    &Mcu_GstEcmSetting[0],
    /* END Msg(2:0315)-4 */

    /* pEcmResetReasonMap */
    /* MISRA Violation: START Msg(2:0315)-4 */
    &Mcu_GstEcmResetReasonMap[0],
    /* END Msg(2:0315)-4 */

    /* pEcmMiNotifMap */
    NULL_PTR,

    /* pEcmNmiNotifMap */
    NULL_PTR,

    /* pEcmInitNotifyMap */
    NULL_PTR,

    /* pRamSetting */
    /* MISRA Violation: START Msg(2:0315)-4 */
    &Mcu_GstRamSetting[0],
    /* END Msg(2:0315)-4 */

    /* ucCvmIndicationReg */
    0x08U,

    /* ucCvmDiagMask */
    0x00U,

    /* ucResetErrSrcCnt */
    0x27U,

    /* ucMiErrSrcCnt */
    0x00U,

    /* ucNmiErrSrcCnt */
    0x00U,

    /* ucInitNotiyErrSrcCnt */
    0x00U,

    /* ulCvmResetEnableReg */
    0x00000000UL
  }
};


/* END Msg(2:3211)-2 */

/* MISRA Violation: START Msg(2:3132)-3 */
/* Structure for MCU clock setting configuration */
CONST(Mcu_ClockSetting, MCU_CONST) Mcu_GstClockSetting[1] =
{
  /* Index: 0 - McuClockSettingConfig */
  {
    /* ucExtClk0SelectedSrcClock */
    0x02U,

    /* ucExtClk1SelectedSrcClock */
    0x02U,

    /* ulExternalClk0Divider */
    0x00000001UL,

    /* ulExternalClk1Divider */
    0x00000001UL,

    /* ucAdcClkSelectCtrlRegValue */
    0x02U
  }
};


/* Structure for clock monitor configuration */
/* MISRA Violation: START Msg(2:3211)-2 */

/* CONST(Mcu_ClockMonitorConf, MCU_CONST) Mcu_GstClockMonitorConf[0]; */
/* END Msg(2:3132)-3 */
/* END Msg(2:3211)-2 */

/* Data Structure of RAM setting Configuration */
CONST(Mcu_RamSetting, MCU_CONST) Mcu_GstRamSetting[1] =
{
  /* Index: 0 - McuRamSectorSettingConf */
  {
    /* ucRamDefaultValue */
    0xFFU,

    /* ulRamSectionBaseAddress */
    0xFEBE0000UL,

    /* ulRamSectionSize */
    0x00000100UL
  }
};


/* Structure for MCU ecm setting configuration */
CONST(Mcu_EcmSetting, MCU_CONST) Mcu_GstEcmSetting[1] =
{
  /* Index: 0 - McuEcmErrorSourcesCfg */
  {
    /* ulEcmMaskInterReg0value */
    0x00000000UL,

    /* ulEcmMaskInterReg1value */
    0x00000000UL,

    /* ulEcmNonMaskInterReg0value */
    0x00000000UL,

    /* ulEcmNonMaskInterReg1value */
    0x00000000UL,

    /* ulEcmInternalResetReg0value */
    0xFDFFDFF3UL,

    /* ulEcmInternalResetReg1value */
    0x200007F7UL,

    /* ulEcmErrorMaskReg0Value */
    0xFDFFDFF3UL,

    /* ulEcmErrorMaskReg1Value */
    0x200007F7UL,

    /* ulEcmDelayTimerReg0Value */
    0x00000000UL,

    /* ulEcmDelayTimerReg1Value */
    0x00000000UL,

    /* ulEcmDelayTimerReg2Value */
    0x00000000UL,

    /* ulEcmDelayTimerReg3Value */
    0x00000000UL
  }
};


/* MISRA Violation: START Msg(2:3132)-3 */
/* Structure to map ECM reset reason to error source */
CONST(Mcu_EcmResetReasonMap, MCU_CONST) Mcu_GstEcmResetReasonMap[39] =
{
  /* Index: 0 - McuModuleConfiguration McuEcmErrorSource0 */
  {
    /* enResetReason */
    MCU_WATCHDOG_RESET,

    /* ulErrorSrcMask */
    0x00000001UL,

    /* ucErrSrcRegIdx */
    0x00U
  },

  /* Index: 1 - McuModuleConfiguration McuEcmErrorSource1 */
  {
    /* enResetReason */
    MCU_LOCK_STEP_CORE_RST,

    /* ulErrorSrcMask */
    0x00000002UL,

    /* ucErrSrcRegIdx */
    0x00U
  },

  /* Index: 2 - McuModuleConfiguration McuEcmErrorSource4 */
  {
    /* enResetReason */
    MCU_CLMA0_UPPER_LIMIT_RST,

    /* ulErrorSrcMask */
    0x00000010UL,

    /* ucErrSrcRegIdx */
    0x00U
  },

  /* Index: 3 - McuModuleConfiguration McuEcmErrorSource5 */
  {
    /* enResetReason */
    MCU_CLMA0_LOWER_LIMIT_RST,

    /* ulErrorSrcMask */
    0x00000020UL,

    /* ucErrSrcRegIdx */
    0x00U
  },

  /* Index: 4 - McuModuleConfiguration McuEcmErrorSource6 */
  {
    /* enResetReason */
    MCU_CLMA2_UPPER_LIMIT_RST,

    /* ulErrorSrcMask */
    0x00000040UL,

    /* ucErrSrcRegIdx */
    0x00U
  },

  /* Index: 5 - McuModuleConfiguration McuEcmErrorSource7 */
  {
    /* enResetReason */
    MCU_CLMA2_LOWER_LIMIT_RST,

    /* ulErrorSrcMask */
    0x00000080UL,

    /* ucErrSrcRegIdx */
    0x00U
  },

  /* Index: 6 - McuModuleConfiguration McuEcmErrorSource8 */
  {
    /* enResetReason */
    MCU_CLMA1_UPPER_LIMIT_RST,

    /* ulErrorSrcMask */
    0x00000100UL,

    /* ucErrSrcRegIdx */
    0x00U
  },

  /* Index: 7 - McuModuleConfiguration McuEcmErrorSource9 */
  {
    /* enResetReason */
    MCU_CLMA1_LOWER_LIMIT_RST,

    /* ulErrorSrcMask */
    0x00000200UL,

    /* ucErrSrcRegIdx */
    0x00U
  },

  /* Index: 8 - McuModuleConfiguration McuEcmErrorSource10 */
  {
    /* enResetReason */
    MCU_CLMA3_UPPER_LIMIT_RST,

    /* ulErrorSrcMask */
    0x00000400UL,

    /* ucErrSrcRegIdx */
    0x00U
  },

  /* Index: 9 - McuModuleConfiguration McuEcmErrorSource11 */
  {
    /* enResetReason */
    MCU_CLMA3_LOWER_LIMIT_RST,

    /* ulErrorSrcMask */
    0x00000800UL,

    /* ucErrSrcRegIdx */
    0x00U
  },

  /* Index: 10 - McuModuleConfiguration McuEcmErrorSource12 */
  {
    /* enResetReason */
    MCU_LRAM_ECC2_ADDPTY_RST,

    /* ulErrorSrcMask */
    0x00001000UL,

    /* ucErrSrcRegIdx */
    0x00U
  },

  /* Index: 11 - McuModuleConfiguration McuEcmErrorSource14 */
  {
    /* enResetReason */
    MCU_CASHE_RAM_ECC2_RST,

    /* ulErrorSrcMask */
    0x00004000UL,

    /* ucErrSrcRegIdx */
    0x00U
  },

  /* Index: 12 - McuModuleConfiguration McuEcmErrorSource15 */
  {
    /* enResetReason */
    MCU_CFLH_ECC2_ADDPTY_RST,

    /* ulErrorSrcMask */
    0x00008000UL,

    /* ucErrSrcRegIdx */
    0x00U
  },

  /* Index: 13 - McuModuleConfiguration McuEcmErrorSource16 */
  {
    /* enResetReason */
    MCU_DATA_FLSH_ECC2_RST,

    /* ulErrorSrcMask */
    0x00010000UL,

    /* ucErrSrcRegIdx */
    0x00U
  },

  /* Index: 14 - McuModuleConfiguration McuEcmErrorSource17 */
  {
    /* enResetReason */
    MCU_DTS_RAM_ECC2_RST,

    /* ulErrorSrcMask */
    0x00020000UL,

    /* ucErrSrcRegIdx */
    0x00U
  },

  /* Index: 15 - McuModuleConfiguration McuEcmErrorSource18 */
  {
    /* enResetReason */
    MCU_CSIH_RAM_ECC2_RST,

    /* ulErrorSrcMask */
    0x00040000UL,

    /* ucErrSrcRegIdx */
    0x00U
  },

  /* Index: 16 - McuModuleConfiguration McuEcmErrorSource19 */
  {
    /* enResetReason */
    MCU_CAN_RAM_ECC2_RST,

    /* ulErrorSrcMask */
    0x00080000UL,

    /* ucErrSrcRegIdx */
    0x00U
  },

  /* Index: 17 - McuModuleConfiguration McuEcmErrorSource20 */
  {
    /* enResetReason */
    MCU_FLXR_RAM_ECC2_RST,

    /* ulErrorSrcMask */
    0x00100000UL,

    /* ucErrSrcRegIdx */
    0x00U
  },

  /* Index: 18 - McuModuleConfiguration McuEcmErrorSource21 */
  {
    /* enResetReason */
    MCU_MODE0_RST,

    /* ulErrorSrcMask */
    0x00200000UL,

    /* ucErrSrcRegIdx */
    0x00U
  },

  /* Index: 19 - McuModuleConfiguration McuEcmErrorSource22 */
  {
    /* enResetReason */
    MCU_MODE1_RST,

    /* ulErrorSrcMask */
    0x00400000UL,

    /* ucErrSrcRegIdx */
    0x00U
  },

  /* Index: 20 - McuModuleConfiguration McuEcmErrorSource23 */
  {
    /* enResetReason */
    MCU_MODE2_RST,

    /* ulErrorSrcMask */
    0x00800000UL,

    /* ucErrSrcRegIdx */
    0x00U
  },

  /* Index: 21 - McuModuleConfiguration McuEcmErrorSource24 */
  {
    /* enResetReason */
    MCU_PEGUARD_RST,

    /* ulErrorSrcMask */
    0x01000000UL,

    /* ucErrSrcRegIdx */
    0x00U
  },

  /* Index: 22 - McuModuleConfiguration McuEcmErrorSource26 */
  {
    /* enResetReason */
    MCU_PBUSGUARD_RST,

    /* ulErrorSrcMask */
    0x04000000UL,

    /* ucErrSrcRegIdx */
    0x00U
  },

  /* Index: 23 - McuModuleConfiguration McuEcmErrorSource27 */
  {
    /* enResetReason */
    MCU_SAR_ADC_PTY_RST,

    /* ulErrorSrcMask */
    0x08000000UL,

    /* ucErrSrcRegIdx */
    0x00U
  },

  /* Index: 24 - McuModuleConfiguration McuEcmErrorSource28 */
  {
    /* enResetReason */
    MCU_DATA_PRTY_RST,

    /* ulErrorSrcMask */
    0x10000000UL,

    /* ucErrSrcRegIdx */
    0x00U
  },

  /* Index: 25 - McuModuleConfiguration McuEcmErrorSource29 */
  {
    /* enResetReason */
    MCU_ECM_COMP_RST,

    /* ulErrorSrcMask */
    0x20000000UL,

    /* ucErrSrcRegIdx */
    0x00U
  },

  /* Index: 26 - McuModuleConfiguration McuEcmErrorSource30 */
  {
    /* enResetReason */
    MCU_LVI_RST,

    /* ulErrorSrcMask */
    0x40000000UL,

    /* ucErrSrcRegIdx */
    0x00U
  },

  /* Index: 27 - McuModuleConfiguration McuEcmErrorSource31 */
  {
    /* enResetReason */
    MCU_TEMP_SENSE_RST,

    /* ulErrorSrcMask */
    0x80000000UL,

    /* ucErrSrcRegIdx */
    0x00U
  },

  /* Index: 28 - McuModuleConfiguration McuEcmErrorSource32 */
  {
    /* enResetReason */
    MCU_DMA_TRANSF_RST,

    /* ulErrorSrcMask */
    0x00000001UL,

    /* ucErrSrcRegIdx */
    0x01U
  },

  /* Index: 29 - McuModuleConfiguration McuEcmErrorSource33 */
  {
    /* enResetReason */
    MCU_DMA_REG_PROTECT_RST,

    /* ulErrorSrcMask */
    0x00000002UL,

    /* ucErrSrcRegIdx */
    0x01U
  },

  /* Index: 30 - McuModuleConfiguration McuEcmErrorSource34 */
  {
    /* enResetReason */
    MCU_LRAM_ECC1_PTY_RST,

    /* ulErrorSrcMask */
    0x00000004UL,

    /* ucErrSrcRegIdx */
    0x01U
  },

  /* Index: 31 - McuModuleConfiguration McuEcmErrorSource36 */
  {
    /* enResetReason */
    MCU_CFLH_ECC1_RST,

    /* ulErrorSrcMask */
    0x00000010UL,

    /* ucErrSrcRegIdx */
    0x01U
  },

  /* Index: 32 - McuModuleConfiguration McuEcmErrorSource37 */
  {
    /* enResetReason */
    MCU_DATA_FLSH_ECC1_RST,

    /* ulErrorSrcMask */
    0x00000020UL,

    /* ucErrSrcRegIdx */
    0x01U
  },

  /* Index: 33 - McuModuleConfiguration McuEcmErrorSource38 */
  {
    /* enResetReason */
    MCU_DTS_RAM_ECC1_RST,

    /* ulErrorSrcMask */
    0x00000040UL,

    /* ucErrSrcRegIdx */
    0x01U
  },

  /* Index: 34 - McuModuleConfiguration McuEcmErrorSource39 */
  {
    /* enResetReason */
    MCU_ALL_PERI_RAM_ECC1_RST,

    /* ulErrorSrcMask */
    0x00000080UL,

    /* ucErrSrcRegIdx */
    0x01U
  },

  /* Index: 35 - McuModuleConfiguration McuEcmErrorSource40 */
  {
    /* enResetReason */
    MCU_BIST_ECC1_RST,

    /* ulErrorSrcMask */
    0x00000100UL,

    /* ucErrSrcRegIdx */
    0x01U
  },

  /* Index: 36 - McuModuleConfiguration McuEcmErrorSource41 */
  {
    /* enResetReason */
    MCU_BIST_ECC2_RST,

    /* ulErrorSrcMask */
    0x00000200UL,

    /* ucErrSrcRegIdx */
    0x01U
  },

  /* Index: 37 - McuModuleConfiguration McuEcmErrorSource42 */
  {
    /* enResetReason */
    MCU_FACI_TRANSF_RST,

    /* ulErrorSrcMask */
    0x00000400UL,

    /* ucErrSrcRegIdx */
    0x01U
  },

  /* Index: 38 - McuModuleConfiguration McuEcmErrorSource129 */
  {
    /* enResetReason */
    MCU_ECM_DELY_OVRFLW_RST,

    /* ulErrorSrcMask */
    0x20000000UL,

    /* ucErrSrcRegIdx */
    0x01U
  }
};


/* Structure to map ECM MI notifications to error source */
/* CONST(Mcu_EcmNotifMap, MCU_CONST) Mcu_GstEcmMiNotifMap[0]; */
/* END Msg(2:3132)-3 */
/* Structure to map ECM NMI notifications to error source */
/* CONST(Mcu_EcmNotifMap, MCU_CONST) Mcu_GstEcmNmiNotifMap[0]; */
/* Structure to map ECM Initial notifications to error source */
/* CONST(Mcu_EcmNotifMap, MCU_CONST) Mcu_GstEcmInitNotifyMap[0]; */
#define MCU_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "MemMap.h"

/*******************************************************************************
**                      Function Definitions                                  **
*******************************************************************************/

/*******************************************************************************
**                          End of File                                       **
*******************************************************************************/
