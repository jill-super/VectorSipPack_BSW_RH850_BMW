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
 *            Module: PduR
 *           Program: MSR BAC 4.x (MSR_Bmw_SLP4)
 *          Customer: Nexteer Automotive Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Renesas RH850 P1M R7F701363EAFP
 *    License Scope : The usage is restricted to CBD1700369_D04
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: PduR_Cfg.h
 *   Generation Time: 2018-01-02 16:37:33
 *           Project: EPS - Version 1.0
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

#if !defined (PDUR_CFG_H)
# define PDUR_CFG_H

/**********************************************************************************************************************
 * MISRA JUSTIFICATION
 *********************************************************************************************************************/
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "PduR_Types.h"

/**********************************************************************************************************************
 * GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
#ifndef PDUR_USE_DUMMY_FUNCTIONS
#define PDUR_USE_DUMMY_FUNCTIONS STD_OFF /* /MICROSAR/EcuC/EcucGeneral/DummyFunction */
#endif
#ifndef PDUR_USE_DUMMY_STATEMENT
#define PDUR_USE_DUMMY_STATEMENT STD_OFF /* /MICROSAR/EcuC/EcucGeneral/DummyStatement */
#endif
#ifndef PDUR_DUMMY_STATEMENT
#define PDUR_DUMMY_STATEMENT(v) (v)=(v) /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/EcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef PDUR_DUMMY_STATEMENT_CONST
#define PDUR_DUMMY_STATEMENT_CONST(v) (void)(v) /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/EcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef PDUR_ATOMIC_BIT_ACCESS_IN_BITFIELD
#define PDUR_ATOMIC_BIT_ACCESS_IN_BITFIELD STD_OFF /* /MICROSAR/EcuC/EcucGeneral/AtomicBitAccessInBitfield */
#endif
#ifndef PDUR_ATOMIC_VARIABLE_ACCESS
#define PDUR_ATOMIC_VARIABLE_ACCESS 32U /* /MICROSAR/EcuC/EcucGeneral/AtomicVariableAccess */
#endif
#ifndef PDUR_PROCESSOR_RH850_1363
#define PDUR_PROCESSOR_RH850_1363
#endif
#ifndef PDUR_COMP_GREENHILLS
#define PDUR_COMP_GREENHILLS
#endif
#ifndef PDUR_GEN_GENERATOR_MSR
#define PDUR_GEN_GENERATOR_MSR
#endif
#ifndef PDUR_CPUTYPE_BITORDER_LSB2MSB
#define PDUR_CPUTYPE_BITORDER_LSB2MSB /* /MICROSAR/EcuC/EcucGeneral/BitOrder */
#endif
#ifndef PDUR_CONFIGURATION_VARIANT_PRECOMPILE
#define PDUR_CONFIGURATION_VARIANT_PRECOMPILE 1
#endif
#ifndef PDUR_CONFIGURATION_VARIANT_LINKTIME
#define PDUR_CONFIGURATION_VARIANT_LINKTIME 2
#endif
#ifndef PDUR_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE
#define PDUR_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE 3
#endif
#ifndef PDUR_CONFIGURATION_VARIANT
#define PDUR_CONFIGURATION_VARIANT PDUR_CONFIGURATION_VARIANT_PRECOMPILE
#endif
#ifndef PDUR_POSTBUILD_VARIANT_SUPPORT
#define PDUR_POSTBUILD_VARIANT_SUPPORT STD_OFF
#endif



#define PDUR_DEV_ERROR_DETECT STD_ON  /**< /ActiveEcuC/PduR/PduRGeneral[0:PduRSafeBswChecks] || /ActiveEcuC/PduR/PduRGeneral[0:PduRDevErrorDetect] */
#define PDUR_DEV_ERROR_REPORT STD_ON  /**< /ActiveEcuC/PduR/PduRGeneral[0:PduRDevErrorDetect] */

#define PDUR_METADATA_SUPPORT STD_OFF  /**< /ActiveEcuC/PduR/PduRGeneral[0:PduRMetaDataSupport] */
#define PDUR_VERSION_INFO_API STD_OFF  /**< /ActiveEcuC/PduR/PduRGeneral[0:PduRVersionInfoApi] */

 #define PDUR_ERROR_NOTIFICATION STD_OFF


#define PduR_PBConfigIdType uint32

#define PDUR_INVALID_VARARRAYIDX                                      ((uint16)0xFFFF) /**< Invalid VarArray element */

 /*  DET Error define list  */ 
#define PDUR_FCT_COMTX 0x89U 
#define PDUR_FCT_FRIFRXIND 0x31U 
#define PDUR_FCT_FRIFTX 0x39U 
#define PDUR_FCT_FRIFTXCFM 0x32U 
#define PDUR_FCT_FRIFTT 0x33U 
#define PDUR_FCT_IPDUMRXIND 0xA1U 
#define PDUR_FCT_IPDUMTX 0xA9U 
#define PDUR_FCT_IPDUMTXCFM 0xA2U 
#define PDUR_FCT_IPDUMTT 0xA3U 
#define PDUR_FCT_FRTPRXIND 0x35U 
#define PDUR_FCT_FRTPTX 0x39U 
#define PDUR_FCT_FRTPTXCFM 0x38U 
#define PDUR_FCT_FRTPSOR 0x36U 
#define PDUR_FCT_FRTPCPYRX 0x34U 
#define PDUR_FCT_FRTPCPYTX 0x37U 
#define PDUR_FCT_DCMTX 0x99U 
 /*   PduR_ComTransmit  PduR_FrIfIfRxIndication  PduR_FrIfTransmit  PduR_FrIfTxConfirmation  PduR_FrIfTriggerTransmit  PduR_IpduMIfRxIndication  PduR_IpduMTransmit  PduR_IpduMTxConfirmation  PduR_IpduMTriggerTransmit  PduR_FrTpTpRxIndication  PduR_FrTpTransmit  PduR_FrTpTxConfirmation  PduR_FrTpStartOfReception  PduR_FrTpCopyRxData  PduR_FrTpCopyTxData  PduR_DcmTransmit  */ 



/**
 * \defgroup PduRHandleIdsIfRxDest Handle IDs of handle space IfRxDest.
 * \brief Communication interface Rx destination PDUs
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define PduRConf_PduRDestPdu_DST_ANFRAGE_434514f6_In                  0
#define PduRConf_PduRDestPdu_DST_Fr_pduTr_ACLNY_MASSCNTR_A_FlexRay_7d601c47 2
#define PduRConf_PduRDestPdu_DST_Fr_pduTr_AVL_RPM_WHL_A_FlexRay_7d601c47 3
#define PduRConf_PduRDestPdu_DST_Fr_pduTr_A_TEMP_A_FlexRay_7d601c47   4
#define PduRConf_PduRDestPdu_DST_Fr_pduTr_CON_VEH_A_FlexRay_7d601c47  5
#define PduRConf_PduRDestPdu_DST_Fr_pduTr_CTR_DIAG_OBD_DRDY_A_FlexRay_7d601c47 6
#define PduRConf_PduRDestPdu_DST_Fr_pduTr_CTR_VIB_STW_DISP_EXMI_SP2015_A_FlexRay_7d601c47 7
#define PduRConf_PduRDestPdu_DST_Fr_pduTr_DIAG_OBD_ENG_A_FlexRay_7d601c47 8
#define PduRConf_PduRDestPdu_DST_Fr_pduTr_ENERG_DGR_DRDY_A_FlexRay_7d601c47 9
#define PduRConf_PduRDestPdu_DST_Fr_pduTr_ENSU_SFY_A_FlexRay_7d601c47 10
#define PduRConf_PduRDestPdu_DST_Fr_pduTr_ERRM_BN_U_A_FlexRay_7d601c47 11
#define PduRConf_PduRDestPdu_DST_Fr_pduTr_FAHRGESTELLNUMMER_A_FlexRay_7d601c47 12
#define PduRConf_PduRDestPdu_DST_Fr_pduTr_FZZSTD_A_FlexRay_7d601c47   13
#define PduRConf_PduRDestPdu_DST_Fr_pduTr_KILOMETERSTAND_A_FlexRay_7d601c47 14
#define PduRConf_PduRDestPdu_DST_Fr_pduTr_OFFS_QUAD_EPS_A_FlexRay_7d601c47 15
#define PduRConf_PduRDestPdu_DST_Fr_pduTr_RELATIVZEIT_A_FlexRay_7d601c47 16
#define PduRConf_PduRDestPdu_DST_Fr_pduTr_SECU_FAHRGESTELLNUMMER_A_FlexRay_7d601c47 17
#define PduRConf_PduRDestPdu_DST_Fr_pduTr_SECU_RESP_A_FlexRay_7d601c47 18
#define PduRConf_PduRDestPdu_DST_Fr_pduTr_STEA_OFFS_A_FlexRay_7d601c47 19
#define PduRConf_PduRDestPdu_DST_Fr_pduTr_ST_CENG_A_FlexRay_7d601c47  20
#define PduRConf_PduRDestPdu_DST_Fr_pduTr_ST_ENERG_GEN_A_FlexRay_7d601c47 21
#define PduRConf_PduRDestPdu_DST_Fr_pduTr_ST_STAB_DSC_A_FlexRay_7d601c47 22
#define PduRConf_PduRDestPdu_DST_Fr_pduTr_SU_CLE_DRDY_DXP_A_FlexRay_7d601c47 23
#define PduRConf_PduRDestPdu_DST_Fr_pduTr_TAR_ESTP_VIRT_FTAX_A_FlexRay_7d601c47 24
#define PduRConf_PduRDestPdu_DST_Fr_pduTr_TAR_QTA_STRMOM_DV_A_FlexRay_7d601c47 25
#define PduRConf_PduRDestPdu_DST_Fr_pduTr_TAR_STMOM_DV_ACT_A_FlexRay_7d601c47 26
#define PduRConf_PduRDestPdu_DST_Fr_pduTr_VYAW_VEH_A_FlexRay_7d601c47 27
#define PduRConf_PduRDestPdu_DST_Fr_pduTr_V_VEH_A_FlexRay_7d601c47    28
#define PduRConf_PduRDestPdu_DST_SVC_434514f6_In                      1
/**\} */

/**
 * \defgroup PduRHandleIdsIfRxSrc Handle IDs of handle space IfRxSrc.
 * \brief Communication interface Rx source PDUs
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define PduRConf_PduRSrcPdu_SRC_ANFRAGE_434514f6_In                   0
#define PduRConf_PduRSrcPdu_SRC_Fr_pduTr_ACLNY_MASSCNTR_A_FlexRay_7d601c47 1
#define PduRConf_PduRSrcPdu_SRC_Fr_pduTr_AVL_RPM_WHL_A_FlexRay_7d601c47 2
#define PduRConf_PduRSrcPdu_SRC_Fr_pduTr_A_TEMP_A_FlexRay_7d601c47    3
#define PduRConf_PduRSrcPdu_SRC_Fr_pduTr_CON_VEH_A_FlexRay_7d601c47   4
#define PduRConf_PduRSrcPdu_SRC_Fr_pduTr_CTR_DIAG_OBD_DRDY_A_FlexRay_7d601c47 5
#define PduRConf_PduRSrcPdu_SRC_Fr_pduTr_CTR_VIB_STW_DISP_EXMI_SP2015_A_FlexRay_7d601c47 6
#define PduRConf_PduRSrcPdu_SRC_Fr_pduTr_DIAG_OBD_ENG_A_FlexRay_7d601c47 7
#define PduRConf_PduRSrcPdu_SRC_Fr_pduTr_ENERG_DGR_DRDY_A_FlexRay_7d601c47 8
#define PduRConf_PduRSrcPdu_SRC_Fr_pduTr_ENSU_SFY_A_FlexRay_7d601c47  9
#define PduRConf_PduRSrcPdu_SRC_Fr_pduTr_ERRM_BN_U_A_FlexRay_7d601c47 10
#define PduRConf_PduRSrcPdu_SRC_Fr_pduTr_FAHRGESTELLNUMMER_A_FlexRay_7d601c47 11
#define PduRConf_PduRSrcPdu_SRC_Fr_pduTr_FZZSTD_A_FlexRay_7d601c47    12
#define PduRConf_PduRSrcPdu_SRC_Fr_pduTr_KILOMETERSTAND_A_FlexRay_7d601c47 13
#define PduRConf_PduRSrcPdu_SRC_Fr_pduTr_OFFS_QUAD_EPS_A_FlexRay_7d601c47 14
#define PduRConf_PduRSrcPdu_SRC_Fr_pduTr_RELATIVZEIT_A_FlexRay_7d601c47 15
#define PduRConf_PduRSrcPdu_SRC_Fr_pduTr_SECU_FAHRGESTELLNUMMER_A_FlexRay_7d601c47 16
#define PduRConf_PduRSrcPdu_SRC_Fr_pduTr_SECU_RESP_A_FlexRay_7d601c47 17
#define PduRConf_PduRSrcPdu_SRC_Fr_pduTr_STEA_OFFS_A_FlexRay_7d601c47 18
#define PduRConf_PduRSrcPdu_SRC_Fr_pduTr_ST_CENG_A_FlexRay_7d601c47   19
#define PduRConf_PduRSrcPdu_SRC_Fr_pduTr_ST_ENERG_GEN_A_FlexRay_7d601c47 20
#define PduRConf_PduRSrcPdu_SRC_Fr_pduTr_ST_STAB_DSC_A_FlexRay_7d601c47 21
#define PduRConf_PduRSrcPdu_SRC_Fr_pduTr_SU_CLE_DRDY_DXP_A_FlexRay_7d601c47 22
#define PduRConf_PduRSrcPdu_SRC_Fr_pduTr_TAR_ESTP_VIRT_FTAX_A_FlexRay_7d601c47 23
#define PduRConf_PduRSrcPdu_SRC_Fr_pduTr_TAR_QTA_STRMOM_DV_A_FlexRay_7d601c47 24
#define PduRConf_PduRSrcPdu_SRC_Fr_pduTr_TAR_STMOM_DV_ACT_A_FlexRay_7d601c47 25
#define PduRConf_PduRSrcPdu_SRC_Fr_pduTr_VYAW_VEH_A_FlexRay_7d601c47  26
#define PduRConf_PduRSrcPdu_SRC_Fr_pduTr_V_VEH_A_FlexRay_7d601c47     27
#define PduRConf_PduRSrcPdu_SRC_SVC_434514f6_In                       28
/**\} */

/**
 * \defgroup PduRHandleIdsIfTpTxSrc Handle IDs of handle space IfTpTxSrc.
 * \brief Communication interface and transport protocol Tx PDUs
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define PduRConf_PduRSrcPdu_PduRSrcPdu_014                            15
#define PduRConf_PduRSrcPdu_PduRSrcPdu_015                            16
#define PduRConf_PduRSrcPdu_PduRSrcPdu_016                            17
#define PduRConf_PduRSrcPdu_PduRSrcPdu_017                            18
#define PduRConf_PduRSrcPdu_PduRSrcPdu_018                            19
#define PduRConf_PduRSrcPdu_PduRSrcPdu_019                            20
#define PduRConf_PduRSrcPdu_PduRSrcPdu_020                            21
#define PduRConf_PduRSrcPdu_PduRSrcPdu_021                            22
#define PduRConf_PduRSrcPdu_PduRSrcPdu_022                            23
#define PduRConf_PduRSrcPdu_PduRSrcPdu_023                            24
#define PduRConf_PduRSrcPdu_PduRSrcPdu_024                            25
#define PduRConf_PduRSrcPdu_PduRSrcPdu_025                            26
#define PduRConf_PduRSrcPdu_PduRSrcPdu_026                            27
#define PduRConf_PduRSrcPdu_PduRSrcPdu_027                            28
#define PduRConf_PduRSrcPdu_SRC_ANFRAGE_434514f6_Out                  0
#define PduRConf_PduRSrcPdu_SRC_Fr_pduTr_AVL_FORC_GRD_A_FlexRay_7d601c47 1
#define PduRConf_PduRSrcPdu_SRC_Fr_pduTr_AVL_PO_EPS_A_FlexRay_7d601c47 2
#define PduRConf_PduRSrcPdu_SRC_Fr_pduTr_AVL_STMOM_DV_ACT_A_FlexRay_7d601c47 3
#define PduRConf_PduRSrcPdu_SRC_Fr_pduTr_DBG_EPS_BS_MOD_58_BYTE_A_FlexRay_7d601c47 4
#define PduRConf_PduRSrcPdu_SRC_Fr_pduTr_DBG_EPS_MOD_EXT_120_BYTE_A_FlexRay_7d601c47 5
#define PduRConf_PduRSrcPdu_SRC_Fr_pduTr_DISP_CC_EPS_A_FlexRay_7d601c47 6
#define PduRConf_PduRSrcPdu_SRC_Fr_pduTr_DT_EST_A_FlexRay_7d601c47    7
#define PduRConf_PduRSrcPdu_SRC_Fr_pduTr_ENGTORQ_EPS_A_FlexRay_7d601c47 8
#define PduRConf_PduRSrcPdu_SRC_Fr_pduTr_FR_DBG_EPS_A_FlexRay_7d601c47 9
#define PduRConf_PduRSrcPdu_SRC_Fr_pduTr_RQ_STG_EFAN_A_FlexRay_7d601c47 10
#define PduRConf_PduRSrcPdu_SRC_Fr_pduTr_SECU_CHAL_A_FlexRay_7d601c47 11
#define PduRConf_PduRSrcPdu_SRC_Fr_pduTr_ST_DIAG_OBD_3_DRDY_A_FlexRay_7d601c47 12
#define PduRConf_PduRSrcPdu_SRC_Fr_pduTr_ST_EST_A_FlexRay_7d601c47    13
#define PduRConf_PduRSrcPdu_SRC_Fr_pduTr_SU_EPS_A_FlexRay_7d601c47    14
#define PduRConf_PduRSrcPdu_SRC_SVC_434514f6_Out                      29
/**\} */

/**
 * \defgroup PduRHandleIdsIfTxDest Handle IDs of handle space IfTxDest.
 * \brief Communication interface Tx destination PDUs
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define PduRConf_PduRDestPdu_DST_ANFRAGE_434514f6_Out                 0
#define PduRConf_PduRDestPdu_DST_Fr_pduTr_AVL_FORC_GRD_A_FlexRay_7d601c47 2
#define PduRConf_PduRDestPdu_DST_Fr_pduTr_AVL_PO_EPS_A_FlexRay_7d601c47 3
#define PduRConf_PduRDestPdu_DST_Fr_pduTr_AVL_STMOM_DV_ACT_A_FlexRay_7d601c47 4
#define PduRConf_PduRDestPdu_DST_Fr_pduTr_DBG_EPS_BS_MOD_58_BYTE_A_FlexRay_7d601c47 5
#define PduRConf_PduRDestPdu_DST_Fr_pduTr_DBG_EPS_MOD_EXT_120_BYTE_A_FlexRay_7d601c47 6
#define PduRConf_PduRDestPdu_DST_Fr_pduTr_DISP_CC_EPS_A_FlexRay_7d601c47 7
#define PduRConf_PduRDestPdu_DST_Fr_pduTr_DT_EST_A_FlexRay_7d601c47   8
#define PduRConf_PduRDestPdu_DST_Fr_pduTr_ENGTORQ_EPS_A_FlexRay_7d601c47 9
#define PduRConf_PduRDestPdu_DST_Fr_pduTr_FR_DBG_EPS_A_FlexRay_7d601c47 10
#define PduRConf_PduRDestPdu_DST_Fr_pduTr_RQ_STG_EFAN_A_FlexRay_7d601c47 11
#define PduRConf_PduRDestPdu_DST_Fr_pduTr_SECU_CHAL_A_FlexRay_7d601c47 12
#define PduRConf_PduRDestPdu_DST_Fr_pduTr_ST_DIAG_OBD_3_DRDY_A_FlexRay_7d601c47 13
#define PduRConf_PduRDestPdu_DST_Fr_pduTr_ST_EST_A_FlexRay_7d601c47   14
#define PduRConf_PduRDestPdu_DST_Fr_pduTr_SU_EPS_A_FlexRay_7d601c47   15
#define PduRConf_PduRDestPdu_DST_SVC_434514f6_Out                     1
/**\} */

/**
 * \defgroup PduRHandleIdsTpRxDest Handle IDs of handle space TpRxDest.
 * \brief Transport protocol Rx destination PDUs
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define PduRConf_PduRDestPdu_PduRDestPdu                              0
#define PduRConf_PduRDestPdu_PduRDestPdu_001                          1
#define PduRConf_PduRDestPdu_PduRDestPdu_002                          2
#define PduRConf_PduRDestPdu_PduRDestPdu_003                          3
#define PduRConf_PduRDestPdu_PduRDestPdu_004                          4
#define PduRConf_PduRDestPdu_PduRDestPdu_005                          5
#define PduRConf_PduRDestPdu_PduRDestPdu_006                          6
#define PduRConf_PduRDestPdu_PduRDestPdu_007                          7
#define PduRConf_PduRDestPdu_PduRDestPdu_008                          8
#define PduRConf_PduRDestPdu_PduRDestPdu_009                          9
#define PduRConf_PduRDestPdu_PduRDestPdu_010                          10
#define PduRConf_PduRDestPdu_PduRDestPdu_011                          11
#define PduRConf_PduRDestPdu_PduRDestPdu_012                          12
#define PduRConf_PduRDestPdu_PduRDestPdu_013                          13
#define PduRConf_PduRDestPdu_PduRDestPdu_028                          14
#define PduRConf_PduRDestPdu_PduRDestPdu_029                          15
#define PduRConf_PduRDestPdu_PduRDestPdu_030                          16
#define PduRConf_PduRDestPdu_PduRDestPdu_031                          17
#define PduRConf_PduRDestPdu_PduRDestPdu_032                          18
#define PduRConf_PduRDestPdu_PduRDestPdu_033                          19
#define PduRConf_PduRDestPdu_PduRDestPdu_034                          20
#define PduRConf_PduRDestPdu_PduRDestPdu_035                          21
#define PduRConf_PduRDestPdu_PduRDestPdu_036                          22
#define PduRConf_PduRDestPdu_PduRDestPdu_037                          23
#define PduRConf_PduRDestPdu_PduRDestPdu_038                          24
#define PduRConf_PduRDestPdu_PduRDestPdu_039                          25
#define PduRConf_PduRDestPdu_PduRDestPdu_040                          26
#define PduRConf_PduRDestPdu_PduRDestPdu_041                          27
/**\} */

/**
 * \defgroup PduRHandleIdsTpRxSrc Handle IDs of handle space TpRxSrc.
 * \brief Transport protocol Rx source PDUs
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define PduRConf_PduRSrcPdu_PduRSrcPdu                                0
#define PduRConf_PduRSrcPdu_PduRSrcPdu_001                            1
#define PduRConf_PduRSrcPdu_PduRSrcPdu_002                            2
#define PduRConf_PduRSrcPdu_PduRSrcPdu_003                            3
#define PduRConf_PduRSrcPdu_PduRSrcPdu_004                            4
#define PduRConf_PduRSrcPdu_PduRSrcPdu_005                            5
#define PduRConf_PduRSrcPdu_PduRSrcPdu_006                            6
#define PduRConf_PduRSrcPdu_PduRSrcPdu_007                            7
#define PduRConf_PduRSrcPdu_PduRSrcPdu_008                            8
#define PduRConf_PduRSrcPdu_PduRSrcPdu_009                            9
#define PduRConf_PduRSrcPdu_PduRSrcPdu_010                            10
#define PduRConf_PduRSrcPdu_PduRSrcPdu_011                            11
#define PduRConf_PduRSrcPdu_PduRSrcPdu_012                            12
#define PduRConf_PduRSrcPdu_PduRSrcPdu_013                            13
#define PduRConf_PduRSrcPdu_PduRSrcPdu_028                            14
#define PduRConf_PduRSrcPdu_PduRSrcPdu_029                            15
#define PduRConf_PduRSrcPdu_PduRSrcPdu_030                            16
#define PduRConf_PduRSrcPdu_PduRSrcPdu_031                            17
#define PduRConf_PduRSrcPdu_PduRSrcPdu_032                            18
#define PduRConf_PduRSrcPdu_PduRSrcPdu_033                            19
#define PduRConf_PduRSrcPdu_PduRSrcPdu_034                            20
#define PduRConf_PduRSrcPdu_PduRSrcPdu_035                            21
#define PduRConf_PduRSrcPdu_PduRSrcPdu_036                            22
#define PduRConf_PduRSrcPdu_PduRSrcPdu_037                            23
#define PduRConf_PduRSrcPdu_PduRSrcPdu_038                            24
#define PduRConf_PduRSrcPdu_PduRSrcPdu_039                            25
#define PduRConf_PduRSrcPdu_PduRSrcPdu_040                            26
#define PduRConf_PduRSrcPdu_PduRSrcPdu_041                            27
/**\} */

/**
 * \defgroup PduRHandleIdsTpTxDest Handle IDs of handle space TpTxDest.
 * \brief Transport protocol Tx PDUs
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define PduRConf_PduRDestPdu_PduRDestPdu_014                          0
#define PduRConf_PduRDestPdu_PduRDestPdu_015                          1
#define PduRConf_PduRDestPdu_PduRDestPdu_016                          2
#define PduRConf_PduRDestPdu_PduRDestPdu_017                          3
#define PduRConf_PduRDestPdu_PduRDestPdu_018                          4
#define PduRConf_PduRDestPdu_PduRDestPdu_019                          5
#define PduRConf_PduRDestPdu_PduRDestPdu_020                          6
#define PduRConf_PduRDestPdu_PduRDestPdu_021                          7
#define PduRConf_PduRDestPdu_PduRDestPdu_022                          8
#define PduRConf_PduRDestPdu_PduRDestPdu_023                          9
#define PduRConf_PduRDestPdu_PduRDestPdu_024                          10
#define PduRConf_PduRDestPdu_PduRDestPdu_025                          11
#define PduRConf_PduRDestPdu_PduRDestPdu_026                          12
#define PduRConf_PduRDestPdu_PduRDestPdu_027                          13
/**\} */


/* User Config File Start */

/* User Config File End */


/**********************************************************************************************************************
 * GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

#endif  /* PDUR_CFG_H */
/**********************************************************************************************************************
 * END OF FILE: PduR_Cfg.h
 *********************************************************************************************************************/

