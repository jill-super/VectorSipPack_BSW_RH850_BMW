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
#define PDUR_USE_DUMMY_STATEMENT STD_ON /* /MICROSAR/EcuC/EcucGeneral/DummyStatement */
#endif
#ifndef PDUR_DUMMY_STATEMENT
#define PDUR_DUMMY_STATEMENT(v) (v)=(v) /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/EcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef PDUR_DUMMY_STATEMENT_CONST
#define PDUR_DUMMY_STATEMENT_CONST(v) (void)(v) /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/EcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef PDUR_ATOMIC_BIT_ACCESS_IN_BITFIELD
#define PDUR_ATOMIC_BIT_ACCESS_IN_BITFIELD STD_ON /* /MICROSAR/EcuC/EcucGeneral/AtomicBitAccessInBitfield */
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
#define PDUR_FCT_DCMTX 0x99U 
#define PDUR_FCT_FRTPRXIND 0x35U 
#define PDUR_FCT_FRTPTX 0x39U 
#define PDUR_FCT_FRTPTXCFM 0x38U 
#define PDUR_FCT_FRTPSOR 0x36U 
#define PDUR_FCT_FRTPCPYRX 0x34U 
#define PDUR_FCT_FRTPCPYTX 0x37U 
 /*   PduR_DcmTransmit  PduR_FrTpTpRxIndication  PduR_FrTpTransmit  PduR_FrTpTxConfirmation  PduR_FrTpStartOfReception  PduR_FrTpCopyRxData  PduR_FrTpCopyTxData  */ 



/**
 * \defgroup PduRHandleIdsIfTpTxSrc Handle IDs of handle space IfTpTxSrc.
 * \brief Communication interface and transport protocol Tx PDUs
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define PduRConf_PduRSrcPdu_PduRSrcPdu_14                             0
#define PduRConf_PduRSrcPdu_PduRSrcPdu_15                             1
#define PduRConf_PduRSrcPdu_PduRSrcPdu_16                             2
#define PduRConf_PduRSrcPdu_PduRSrcPdu_17                             3
#define PduRConf_PduRSrcPdu_PduRSrcPdu_18                             4
#define PduRConf_PduRSrcPdu_PduRSrcPdu_19                             5
#define PduRConf_PduRSrcPdu_PduRSrcPdu_20                             6
#define PduRConf_PduRSrcPdu_PduRSrcPdu_21                             7
#define PduRConf_PduRSrcPdu_PduRSrcPdu_22                             8
#define PduRConf_PduRSrcPdu_PduRSrcPdu_23                             9
#define PduRConf_PduRSrcPdu_PduRSrcPdu_24                             10
#define PduRConf_PduRSrcPdu_PduRSrcPdu_25                             11
#define PduRConf_PduRSrcPdu_PduRSrcPdu_26                             12
#define PduRConf_PduRSrcPdu_PduRSrcPdu_27                             13
/**\} */

/**
 * \defgroup PduRHandleIdsTpRxDest Handle IDs of handle space TpRxDest.
 * \brief Transport protocol Rx destination PDUs
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define PduRConf_PduRDestPdu_PduRDestPdu                              0
#define PduRConf_PduRDestPdu_PduRDestPdu_1                            1
#define PduRConf_PduRDestPdu_PduRDestPdu_2                            2
#define PduRConf_PduRDestPdu_PduRDestPdu_3                            3
#define PduRConf_PduRDestPdu_PduRDestPdu_4                            4
#define PduRConf_PduRDestPdu_PduRDestPdu_5                            5
#define PduRConf_PduRDestPdu_PduRDestPdu_6                            6
#define PduRConf_PduRDestPdu_PduRDestPdu_7                            7
#define PduRConf_PduRDestPdu_PduRDestPdu_8                            8
#define PduRConf_PduRDestPdu_PduRDestPdu_9                            9
#define PduRConf_PduRDestPdu_PduRDestPdu_10                           10
#define PduRConf_PduRDestPdu_PduRDestPdu_11                           11
#define PduRConf_PduRDestPdu_PduRDestPdu_12                           12
#define PduRConf_PduRDestPdu_PduRDestPdu_13                           13
#define PduRConf_PduRDestPdu_PduRDestPdu_28                           14
#define PduRConf_PduRDestPdu_PduRDestPdu_29                           15
#define PduRConf_PduRDestPdu_PduRDestPdu_30                           16
#define PduRConf_PduRDestPdu_PduRDestPdu_31                           17
#define PduRConf_PduRDestPdu_PduRDestPdu_32                           18
#define PduRConf_PduRDestPdu_PduRDestPdu_33                           19
#define PduRConf_PduRDestPdu_PduRDestPdu_34                           20
#define PduRConf_PduRDestPdu_PduRDestPdu_35                           21
#define PduRConf_PduRDestPdu_PduRDestPdu_36                           22
#define PduRConf_PduRDestPdu_PduRDestPdu_37                           23
#define PduRConf_PduRDestPdu_PduRDestPdu_38                           24
#define PduRConf_PduRDestPdu_PduRDestPdu_39                           25
#define PduRConf_PduRDestPdu_PduRDestPdu_40                           26
#define PduRConf_PduRDestPdu_PduRDestPdu_41                           27
/**\} */

/**
 * \defgroup PduRHandleIdsTpRxSrc Handle IDs of handle space TpRxSrc.
 * \brief Transport protocol Rx source PDUs
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define PduRConf_PduRSrcPdu_PduRSrcPdu                                0
#define PduRConf_PduRSrcPdu_PduRSrcPdu_1                              1
#define PduRConf_PduRSrcPdu_PduRSrcPdu_2                              2
#define PduRConf_PduRSrcPdu_PduRSrcPdu_3                              3
#define PduRConf_PduRSrcPdu_PduRSrcPdu_4                              4
#define PduRConf_PduRSrcPdu_PduRSrcPdu_5                              5
#define PduRConf_PduRSrcPdu_PduRSrcPdu_6                              6
#define PduRConf_PduRSrcPdu_PduRSrcPdu_7                              7
#define PduRConf_PduRSrcPdu_PduRSrcPdu_8                              8
#define PduRConf_PduRSrcPdu_PduRSrcPdu_9                              9
#define PduRConf_PduRSrcPdu_PduRSrcPdu_10                             10
#define PduRConf_PduRSrcPdu_PduRSrcPdu_11                             11
#define PduRConf_PduRSrcPdu_PduRSrcPdu_12                             12
#define PduRConf_PduRSrcPdu_PduRSrcPdu_13                             13
#define PduRConf_PduRSrcPdu_PduRSrcPdu_28                             14
#define PduRConf_PduRSrcPdu_PduRSrcPdu_29                             15
#define PduRConf_PduRSrcPdu_PduRSrcPdu_30                             16
#define PduRConf_PduRSrcPdu_PduRSrcPdu_31                             17
#define PduRConf_PduRSrcPdu_PduRSrcPdu_32                             18
#define PduRConf_PduRSrcPdu_PduRSrcPdu_33                             19
#define PduRConf_PduRSrcPdu_PduRSrcPdu_34                             20
#define PduRConf_PduRSrcPdu_PduRSrcPdu_35                             21
#define PduRConf_PduRSrcPdu_PduRSrcPdu_36                             22
#define PduRConf_PduRSrcPdu_PduRSrcPdu_37                             23
#define PduRConf_PduRSrcPdu_PduRSrcPdu_38                             24
#define PduRConf_PduRSrcPdu_PduRSrcPdu_39                             25
#define PduRConf_PduRSrcPdu_PduRSrcPdu_40                             26
#define PduRConf_PduRSrcPdu_PduRSrcPdu_41                             27
/**\} */

/**
 * \defgroup PduRHandleIdsTpTxDest Handle IDs of handle space TpTxDest.
 * \brief Transport protocol Tx PDUs
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define PduRConf_PduRDestPdu_PduRDestPdu_14                           0
#define PduRConf_PduRDestPdu_PduRDestPdu_15                           1
#define PduRConf_PduRDestPdu_PduRDestPdu_16                           2
#define PduRConf_PduRDestPdu_PduRDestPdu_17                           3
#define PduRConf_PduRDestPdu_PduRDestPdu_18                           4
#define PduRConf_PduRDestPdu_PduRDestPdu_19                           5
#define PduRConf_PduRDestPdu_PduRDestPdu_20                           6
#define PduRConf_PduRDestPdu_PduRDestPdu_21                           7
#define PduRConf_PduRDestPdu_PduRDestPdu_22                           8
#define PduRConf_PduRDestPdu_PduRDestPdu_23                           9
#define PduRConf_PduRDestPdu_PduRDestPdu_24                           10
#define PduRConf_PduRDestPdu_PduRDestPdu_25                           11
#define PduRConf_PduRDestPdu_PduRDestPdu_26                           12
#define PduRConf_PduRDestPdu_PduRDestPdu_27                           13
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

