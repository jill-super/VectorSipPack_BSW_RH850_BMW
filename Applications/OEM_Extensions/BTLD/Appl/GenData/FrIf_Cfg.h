/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                 This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                 Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                 All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  LICENSE
 *  -------------------------------------------------------------------------------------------------------------------
 *            Module: FrIf
 *           Program: MSR BAC 4.x (MSR_Bmw_SLP4)
 *          Customer: Nexteer Automotive Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Renesas RH850 P1M R7F701363EAFP
 *    License Scope : The usage is restricted to CBD1700369_D04
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: FrIf_Cfg.h
 *   Generation Time: 2018-01-04 11:34:41
 *           Project: BTLD - Version 1.0
 *          Delivery: CBD1700369_D04
 *      Tool Version: DaVinci Configurator (beta) 5.16.31 SP1
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 ! BETA VERSION                                                                                                       !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 ! These programs are fully operative programs. With regard to the fact that the programs are a beta-version only,    !
 ! Vector Informatik's liability shall be expressly excluded in cases of ordinary negligence, to the extent           !
 ! admissible by law or statute.                                                                                      !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
**********************************************************************************************************************/



/**        \file  FrIf_Cfg.h
 *        \brief  FrIf Cfg header file
 *
 *      \details  Cfg header file of the AUTOSAR FlexRay Interface, according to:
 *                AUTOSAR FlexRay Interface, AUTOSAR Release 4.0
 *
 *********************************************************************************************************************/
 
#if !defined(FRIF_CFG_H)
#define FRIF_CFG_H

/* -----------------------------------------------------------------------------
    &&&~ Includes
 ----------------------------------------------------------------------------- */

#include "Platform_Types.h"



/* -----------------------------------------------------------------------------
    &&&~ Linktime / Precompile CRC
 ----------------------------------------------------------------------------- */

#define FRIF_CRC_CHECK                       		STD_OFF


/* -----------------------------------------------------------------------------
    &&&~ Defines
 ----------------------------------------------------------------------------- */

/*  Version information  */
#define FRIF_CFG_MAJOR_VERSION               4U 
#define FRIF_CFG_MINOR_VERSION               1U
#define FRIF_CFG_PATCH_VERSION               2U

#define FRIF_SYNC_THRESHOLD         (uint16) 100U
#define FRIF_FILL_PATTERN           (uint8)  0x00U
#define FRIF_FILL_PATTERN_DWORD     (uint32) 0x00000000UL

#ifndef FRIF_USE_DUMMY_FUNCTIONS
#define FRIF_USE_DUMMY_FUNCTIONS STD_OFF /* /MICROSAR/EcuC/EcucGeneral/DummyFunction */
#endif
#ifndef FRIF_USE_DUMMY_STATEMENT
#define FRIF_USE_DUMMY_STATEMENT STD_ON /* /MICROSAR/EcuC/EcucGeneral/DummyStatement */
#endif
#ifndef FRIF_DUMMY_STATEMENT
#define FRIF_DUMMY_STATEMENT(v) (v)=(v) /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/EcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef FRIF_DUMMY_STATEMENT_CONST
#define FRIF_DUMMY_STATEMENT_CONST(v) (void)(v) /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/EcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef FRIF_ATOMIC_BIT_ACCESS_IN_BITFIELD
#define FRIF_ATOMIC_BIT_ACCESS_IN_BITFIELD STD_ON /* /MICROSAR/EcuC/EcucGeneral/AtomicBitAccessInBitfield */
#endif
#ifndef FRIF_ATOMIC_VARIABLE_ACCESS
#define FRIF_ATOMIC_VARIABLE_ACCESS 32U /* /MICROSAR/EcuC/EcucGeneral/AtomicVariableAccess */
#endif
#ifndef FRIF_PROCESSOR_RH850_1363
#define FRIF_PROCESSOR_RH850_1363
#endif
#ifndef FRIF_COMP_GREENHILLS
#define FRIF_COMP_GREENHILLS
#endif
#ifndef FRIF_GEN_GENERATOR_MSR
#define FRIF_GEN_GENERATOR_MSR
#endif
#ifndef FRIF_CPUTYPE_BITORDER_LSB2MSB
#define FRIF_CPUTYPE_BITORDER_LSB2MSB /* /MICROSAR/EcuC/EcucGeneral/BitOrder */
#endif
#ifndef FRIF_CONFIGURATION_VARIANT_PRECOMPILE
#define FRIF_CONFIGURATION_VARIANT_PRECOMPILE 1
#endif
#ifndef FRIF_CONFIGURATION_VARIANT_LINKTIME
#define FRIF_CONFIGURATION_VARIANT_LINKTIME 2
#endif
#ifndef FRIF_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE
#define FRIF_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE 3
#endif
#ifndef FRIF_CONFIGURATION_VARIANT
#define FRIF_CONFIGURATION_VARIANT FRIF_CONFIGURATION_VARIANT_PRECOMPILE
#endif
#ifndef FRIF_POSTBUILD_VARIANT_SUPPORT
#define FRIF_POSTBUILD_VARIANT_SUPPORT STD_OFF
#endif


#ifndef FRIF_DEV_ERROR_DETECT
# define FRIF_DEV_ERROR_DETECT      STD_ON /* /MICROSAR/FrIf/FrIfGeneral/FrIfSafeBswChecks || /MICROSAR/FrIf/FrIfGeneral/FrIfDevErrorDetect */
#endif
#ifndef FRIF_DEV_ERROR_REPORT
# define FRIF_DEV_ERROR_REPORT      STD_ON /* /MICROSAR/FrIf/FrIfGeneral/FrIfDevErrorDetect */
#endif

/* -----------------------------------------------------------------------------
    &&&~ Symbolic Name Value Defines
 ----------------------------------------------------------------------------- */

/* FrIfClstIdx */



/**
 * \defgroup FrIfHandleIds Handle IDs.
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define FrIfConf_FrIfCluster_A_FlexRay                                0
/**\} */

/* FrIfCtrlIdx */



/**
 * \defgroup FrIfHandleIds Handle IDs.
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define FrIfConf_FrIfController_contr_EPS_A_FlexRay                   0
/**\} */

/* FrIfLPduIdx */



/**
 * \defgroup FrIfHandleIdsFrIfAllLPdus/ActiveEcuC/FrIf/FrIfConfig/A_FlexRay/contr_EPS_A_FlexRay Handle IDs of handle space FrIfAllLPdus /ActiveEcuC/FrIf/FrIfConfig/A_FlexRay/contr_EPS_A_FlexRay.
 * \brief Single Tx/Rx LPdu handle space of /ActiveEcuC/FrIf/FrIfConfig/A_FlexRay/contr_EPS_A_FlexRay
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define FrIfConf_FrIfLPdu_LPdu_frTrig_FR_3a54c8219f12452dafc00b243d0703e0_801_A_FlexRay_S_8_B_0_R_1_ChA_OUT 14
#define FrIfConf_FrIfLPdu_LPdu_frTrig_FR_3a54c8219f12452dafc00b243d0703e0_901_A_FlexRay_S_9_B_0_R_1_ChA_OUT 13
#define FrIfConf_FrIfLPdu_LPdu_frTrig_FR_3a54c8219f12452dafc00b243d0703e0_1001_A_FlexRay_S_10_B_0_R_1_ChA_OUT 12
#define FrIfConf_FrIfLPdu_LPdu_frTrig_FR_3a54c8219f12452dafc00b243d0703e0_1101_A_FlexRay_S_11_B_0_R_1_ChA_OUT 11
#define FrIfConf_FrIfLPdu_LPdu_frTrig_FR_3a54c8219f12452dafc00b243d0703e0_1201_A_FlexRay_S_12_B_0_R_1_ChA_OUT 10
#define FrIfConf_FrIfLPdu_LPdu_frTrig_FR_3a54c8219f12452dafc00b243d0703e0_14701_A_FlexRay_S_147_B_0_R_1_ChA_IN 21
#define FrIfConf_FrIfLPdu_LPdu_frTrig_FR_3a54c8219f12452dafc00b243d0703e0_18301_A_FlexRay_S_183_B_0_R_1_ChA_OUT 9
#define FrIfConf_FrIfLPdu_LPdu_frTrig_FR_3a54c8219f12452dafc00b243d0703e0_20901_A_FlexRay_S_209_B_0_R_1_ChA_IN 20
#define FrIfConf_FrIfLPdu_LPdu_frTrig_FR_3a54c8219f12452dafc00b243d0703e0_21001_A_FlexRay_S_210_B_0_R_1_ChA_IN 19
#define FrIfConf_FrIfLPdu_LPdu_frTrig_FR_3a54c8219f12452dafc00b243d0703e0_21101_A_FlexRay_S_211_B_0_R_1_ChA_IN 18
#define FrIfConf_FrIfLPdu_LPdu_frTrig_FR_3a54c8219f12452dafc00b243d0703e0_21201_A_FlexRay_S_212_B_0_R_1_ChA_IN 17
#define FrIfConf_FrIfLPdu_LPdu_frTrig_FR_3a54c8219f12452dafc00b243d0703e0_21301_A_FlexRay_S_213_B_0_R_1_ChA_IN 16
#define FrIfConf_FrIfLPdu_LPdu_frTrig_FR_3a54c8219f12452dafc00b243d0703e0_21901_A_FlexRay_S_219_B_0_R_1_ChA_IN 15
#define FrIfConf_FrIfLPdu_LPdu_frTrig_FR_3a54c8219f12452dafc00b243d0703e0_22001_A_FlexRay_S_220_B_0_R_1_ChA_OUT 8
#define FrIfConf_FrIfLPdu_LPdu_frTrig_FR_3a54c8219f12452dafc00b243d0703e0_29401_A_FlexRay_S_294_B_0_R_1_ChA_OUT 7
#define FrIfConf_FrIfLPdu_LPdu_frTrig_FR_3a54c8219f12452dafc00b243d0703e0_29501_A_FlexRay_S_295_B_0_R_1_ChA_OUT 6
#define FrIfConf_FrIfLPdu_LPdu_frTrig_FR_3a54c8219f12452dafc00b243d0703e0_29601_A_FlexRay_S_296_B_0_R_1_ChA_OUT 5
#define FrIfConf_FrIfLPdu_LPdu_frTrig_FR_3a54c8219f12452dafc00b243d0703e0_29701_A_FlexRay_S_297_B_0_R_1_ChA_OUT 4
#define FrIfConf_FrIfLPdu_LPdu_frTrig_FR_3a54c8219f12452dafc00b243d0703e0_29801_A_FlexRay_S_298_B_0_R_1_ChA_OUT 3
#define FrIfConf_FrIfLPdu_LPdu_frTrig_FR_3a54c8219f12452dafc00b243d0703e0_29901_A_FlexRay_S_299_B_0_R_1_ChA_OUT 2
#define FrIfConf_FrIfLPdu_LPdu_frTrig_FR_3a54c8219f12452dafc00b243d0703e0_30001_A_FlexRay_S_300_B_0_R_1_ChA_OUT 1
#define FrIfConf_FrIfLPdu_LPdu_frTrig_FR_3a54c8219f12452dafc00b243d0703e0_30101_A_FlexRay_S_301_B_0_R_1_ChA_OUT 0
/**\} */

/* -----------------------------------------------------------------------------
    &&&~ Rx PDU Handles
 ----------------------------------------------------------------------------- */

#define FrIfConf_FrIfRxPdu_FrIfRxPdu_dummy32bmaster 0U 
#define FrIfConf_FrIfRxPdu_FrIfRxPdu_TL_BRC_FR_32 1U 
#define FrIfConf_FrIfRxPdu_FrIfRxPdu_TL_MST_GW_TRNSM_FR_254 2U 


/* -----------------------------------------------------------------------------
    &&&~ Tx PDU Handles
 ----------------------------------------------------------------------------- */



/**
 * \defgroup FrIfHandleIds Handle IDs.
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define FrIfConf_FrIfTxPdu_FrIfTxPdu_TL_ECU_TRNSM_FR_32               9
#define FrIfConf_FrIfTxPdu_FrIfTxPdu_dummy16bstatic                   10
#define FrIfConf_FrIfTxPdu_FrIfTxPdu_dummy32bslave                    8
#define FrIfConf_FrIfTxPdu_FrIfTxPdu_xcpdynamic254_1                  7
#define FrIfConf_FrIfTxPdu_FrIfTxPdu_xcpdynamic254_2                  6
#define FrIfConf_FrIfTxPdu_FrIfTxPdu_xcpdynamic254_3                  5
#define FrIfConf_FrIfTxPdu_FrIfTxPdu_xcpdynamic254_4                  4
#define FrIfConf_FrIfTxPdu_FrIfTxPdu_xcpdynamic254_5                  3
#define FrIfConf_FrIfTxPdu_FrIfTxPdu_xcpdynamic254_6                  2
#define FrIfConf_FrIfTxPdu_FrIfTxPdu_xcpdynamic254_7                  1
#define FrIfConf_FrIfTxPdu_FrIfTxPdu_xcpdynamic254_8                  0
/**\} */

/* -----------------------------------------------------------------------------
    &&&~ Upper Layer PDU Handles
 ----------------------------------------------------------------------------- */
#define FRIF_TX_ulxcpdynamic254_8 XcpConf_XcpTxPdu_xcpdynamic254_8_23008def 
#define FRIF_TX_ulxcpdynamic254_7 XcpConf_XcpTxPdu_xcpdynamic254_7_23008def 
#define FRIF_TX_ulxcpdynamic254_6 XcpConf_XcpTxPdu_xcpdynamic254_6_23008def 
#define FRIF_TX_ulxcpdynamic254_5 XcpConf_XcpTxPdu_xcpdynamic254_5_23008def 
#define FRIF_TX_ulxcpdynamic254_4 XcpConf_XcpTxPdu_xcpdynamic254_4_23008def 
#define FRIF_TX_ulxcpdynamic254_3 XcpConf_XcpTxPdu_xcpdynamic254_3_23008def 
#define FRIF_TX_ulxcpdynamic254_2 XcpConf_XcpTxPdu_xcpdynamic254_2_23008def 
#define FRIF_TX_ulxcpdynamic254_1 XcpConf_XcpTxPdu_xcpdynamic254_1_23008def 
#define FRIF_TX_uldummy32bslave XcpConf_XcpTxPdu_dummy32bslave_23008def 
#define FRIF_TX_ulTL_ECU_TRNSM_FR_32 FrTpConf_FrTpTxPdu_TxPduPool_TL_ECU_TRNSM_FR_32_00BC0001_Tp 
#define FRIF_TX_uldummy16bstatic XcpConf_XcpTxPdu_dummy16bstatic_23008def 
#define FRIF_RX_uldummy32bmaster XcpConf_XcpRxPdu_dummy32bmaster_23008def 
#define FRIF_RX_ulTL_BRC_FR_32 FrTpConf_FrTpRxPdu_RxPduPool_TL_BRC_FR_32_Tp 
#define FRIF_RX_ulTL_MST_GW_TRNSM_FR_254 FrTpConf_FrTpRxPdu_RxPduPool_TL_MST_GW_TRNSM_FR_254_00980001_Tp 


/* -----------------------------------------------------------------------------
    &&&~ Precompile config
 ----------------------------------------------------------------------------- */

#define FRIF_USE_FRTRCV_API                         STD_OFF
#define FRIF_API_AS_MACRO                           STD_OFF  /* /MICROSAR/FrIf/FrIfGeneral/FrIfWrapperAPIsAsMacro */
#define FRIF_RELATIVE_ALARM_ENABLE                  STD_OFF
#define FRIF_PROD_ERROR_DETECT                      STD_ON
#define FRIF_CHANNEL_STATUS_ENABLE                  STD_OFF /* /MICROSAR/FrIf/FrIfGeneral/FrIfGetGetChannelStatusSupport */
#define FRIF_SET_EXT_SYNC_DISABLE                   STD_ON
#define FRIF_ASR40FRTRCVAPISUPPORT                  STD_ON
#define FRIF_READCCCONFIGSUPPORT                    STD_OFF /* /MICROSAR/FrIf/FrIfGeneral/FrIfReadCCConfigApi */
#define FRIF_ABSOLUTE_TIMER_API_DISABLE             STD_OFF /* /MICROSAR/FrIf/FrIfGeneral/FrIfAbsTimerIdx */ 
#define FRIF_GETNUMSTARTUPFRAMESSUPPORT             STD_OFF /* /MICROSAR/FrIf/FrIfGeneral/FrIfGetNumOfStartupFramesSupport */
#define FRIF_ALLSLOTSSUPPORT                        STD_OFF /* /MICROSAR/FrIf/FrIfGeneral/FrIfAllSlotsSupport */
#define FRIF_GETWAKEUPRXSTATUSSUPPORT               STD_OFF /* /MICROSAR/FrIf/FrIfGeneral/FrIfGetWakeupRxStatusSupport */
#define FRIF_AMD_RUNTIME_MEASUREMENT                STD_OFF /* /MICROSAR/FrIf/FrIfGeneral/FrIfRuntimeMeasurementSupport */ 
#define FRIF_SUPPRESS_PROTECTED_RANGE_CHECK         STD_OFF /* /MICROSAR/FrIf/FrIfGeneral/FrIfSuppressProtectedRangeCheck */ 
#define FRIF_VERSION_INFO_API                       STD_OFF /* /MICROSAR/FrIf/FrIfGeneral/FrIfVersionInfoApi */
#define FRIF_ENABLE_PREPARE_LPDU                    STD_OFF /* /MICROSAR/FrIf/FrIfGeneral/FrIfEnablePrepareLpdu */
#define FRIF_CTRL_ENABLE_API_OPTIMIZATION           STD_OFF /* /MICROSAR/FrIf/FrIfGeneral/FrIfSingleChannelAPI */
#define FRIF_UNIFORMUPDATEBYTEPOS                   STD_OFF /* /MICROSAR/FrIf/FrIfGeneral/FrIfUniformUpdateBytePos */
#define FRIF_ALL_FRAMES_HAVE_SAME_UPDATEBIT_BYTEPOS STD_OFF /* /MICROSAR/FrIf/FrIfGeneral/FrIfGlobalUniformUpdateBytePos */
#define FRIF_MEASURE_JLETASKTIMES                   STD_OFF
#define FRIF_PDUDIRTYBYTE_USAGE                     STD_OFF /* /MICROSAR/FrIf/FrIfGeneral/FrIfPduDirtyByteUsage */
#define FRIF_JOB_CONCATENATION_ENABLE               STD_OFF /* /MICROSAR/FrIf/FrIfGeneral/FrIfJobConcatenationEnable */
#define FRIF_DIRECT_BUFFER_ACCESS_ENABLE            STD_OFF /* /MICROSAR/Fr/FrGeneral/FrDirectBufferAccessEnable */
#define FRIF_FIFO_SUPPORT_ENABLE                    STD_OFF /* /MICROSAR/Fr/FrGeneral/FrFIFOSupport */
#define FRIF_CLOCK_CORRECTION_ENABLE                STD_OFF /* /MICROSAR/FrIf/FrIfGeneral/FrIfGetClockCorrectionSupport */
#define FRIF_ABORT_COMMUNICATION_DISABLE            STD_OFF /* /MICROSAR/FrIf/FrIfGeneral/FrIfAbortCommunicationDisable */
#define FRIF_SET_WAKEUP_CHANNEL_DISABLE             STD_OFF /* /MICROSAR/FrIf/FrIfGeneral/FrIfSetWakeupChannelDisable */
#define FRIF_REQUEST_COUNTER_HANDLING_DISABLE       STD_OFF /* /MICROSAR/FrIf/FrIfGeneral/FrIfCounterLimitDisable */
#define FRIF_CANCELTRANSMITSUPPORT                  STD_OFF /* /MICROSAR/FrIf/FrIfGeneral/FrIfCancelTransmitSupport */
#define FRIF_DELAYEDTXCONFSUPPORT                   STD_OFF /* /MICROSAR/FrIf/FrIfGeneral/FrIfDelayedTxConfirmationSupport */
#define FRIF_FREEOPCALLBACKSUPPORT                  STD_OFF
#define FRIF_RECONFIGLPDUSUPPORT                    STD_OFF /* /MICROSAR/FrIf/FrIfGeneral/FrIfReconfigLPduSupport */
#define FRIF_DISABLELPDUSUPPORT                     STD_OFF /* /MICROSAR/FrIf/FrIfGeneral/FrIfDisableLPduSupport */
#define FRIF_GETSYNCFRAMELISTSUPPORT                STD_OFF /* /MICROSAR/FrIf/FrIfGeneral/FrIfGetSyncFrameListSupport */
#define FRIF_NMVECTORSUPPORT                        STD_OFF /* /MICROSAR/FrIf/FrIfGeneral/FrIfGetNmVectorSupport */
#define FRIF_DUALCHANNELREDUNDANCYSUPPORT           STD_OFF /* /MICROSAR/FrIf/FrIfGeneral/FrIfDualChannelRedundancySupport */
#define FRIF_SILENT_CHECK                           STD_OFF
#define FRIF_NOREQUESTCOUNTERINITMEMORY             STD_ON 
#define FRIF_3RD_PARTY_DRIVER_SUPPORT               STD_OFF /* /MICROSAR/FrIf/FrIfGeneral/FrIf3rdPartyDriverSupport */


/* -----------------------------------------------------------------------------
    &&&~ Typedefs
 ----------------------------------------------------------------------------- */

typedef uint8 FrIf_FLEIdxType; 
typedef uint8 FrIf_NumberOfPduType;

/* -----------------------------------------------------------------------------
    &&&~ Precompile Defines
 ----------------------------------------------------------------------------- */
 
#define FRIF_AUTOSARVERSION4
#define FrIf_InvalidTxPduHandle                     11U
#define FrIf_NumberOfChannels                       1U
#define FrIf_NumberOfFrTrcvs                        0
#define FrIf_CommonMaxNumberOfControllers           1U
#define FrIf_CommonMaxNumberOfClusters              1U

/* -----------------------------------------------------------------------------
    &&&~ FrIf EcuC Global Configuration Container Name
 ----------------------------------------------------------------------------- */

#define FrIfConfig                                   FrIf_Config


#endif /* FRIF_CFG_H */

