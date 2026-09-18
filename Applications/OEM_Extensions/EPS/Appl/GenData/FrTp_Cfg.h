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
 *            Module: FrTp
 *           Program: MSR BAC 4.x (MSR_Bmw_SLP4)
 *          Customer: Nexteer Automotive Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Renesas RH850 P1M R7F701363EAFP
 *    License Scope : The usage is restricted to CBD1700369_D04
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: FrTp_Cfg.h
 *   Generation Time: 2018-01-02 16:37:31
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


#if !defined(FRTP_CFG_H)
#define FRTP_CFG_H

/* -----------------------------------------------------------------------------
    &&&~ FrTp_ModuleSpecificGeneralDefines
 ----------------------------------------------------------------------------- */
 
#ifndef FRTP_USE_DUMMY_FUNCTIONS
#define FRTP_USE_DUMMY_FUNCTIONS STD_OFF /* /MICROSAR/EcuC/EcucGeneral/DummyFunction */
#endif
#ifndef FRTP_USE_DUMMY_STATEMENT
#define FRTP_USE_DUMMY_STATEMENT STD_OFF /* /MICROSAR/EcuC/EcucGeneral/DummyStatement */
#endif
#ifndef FRTP_DUMMY_STATEMENT
#define FRTP_DUMMY_STATEMENT(v) (v)=(v) /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/EcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef FRTP_DUMMY_STATEMENT_CONST
#define FRTP_DUMMY_STATEMENT_CONST(v) (void)(v) /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/EcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef FRTP_ATOMIC_BIT_ACCESS_IN_BITFIELD
#define FRTP_ATOMIC_BIT_ACCESS_IN_BITFIELD STD_OFF /* /MICROSAR/EcuC/EcucGeneral/AtomicBitAccessInBitfield */
#endif
#ifndef FRTP_ATOMIC_VARIABLE_ACCESS
#define FRTP_ATOMIC_VARIABLE_ACCESS 32U /* /MICROSAR/EcuC/EcucGeneral/AtomicVariableAccess */
#endif
#ifndef FRTP_PROCESSOR_RH850_1363
#define FRTP_PROCESSOR_RH850_1363
#endif
#ifndef FRTP_COMP_GREENHILLS
#define FRTP_COMP_GREENHILLS
#endif
#ifndef FRTP_GEN_GENERATOR_MSR
#define FRTP_GEN_GENERATOR_MSR
#endif
#ifndef FRTP_CPUTYPE_BITORDER_LSB2MSB
#define FRTP_CPUTYPE_BITORDER_LSB2MSB /* /MICROSAR/EcuC/EcucGeneral/BitOrder */
#endif
#ifndef FRTP_CONFIGURATION_VARIANT_PRECOMPILE
#define FRTP_CONFIGURATION_VARIANT_PRECOMPILE 1
#endif
#ifndef FRTP_CONFIGURATION_VARIANT_LINKTIME
#define FRTP_CONFIGURATION_VARIANT_LINKTIME 2
#endif
#ifndef FRTP_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE
#define FRTP_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE 3
#endif
#ifndef FRTP_CONFIGURATION_VARIANT
#define FRTP_CONFIGURATION_VARIANT FRTP_CONFIGURATION_VARIANT_PRECOMPILE
#endif
#ifndef FRTP_POSTBUILD_VARIANT_SUPPORT
#define FRTP_POSTBUILD_VARIANT_SUPPORT STD_OFF
#endif


#ifndef FRTP_DEV_ERROR_DETECT
# define FRTP_DEV_ERROR_DETECT      STD_ON
#endif
#ifndef FRTP_DEV_ERROR_REPORT
# define FRTP_DEV_ERROR_REPORT      STD_ON
#endif

/* -----------------------------------------------------------------------------
    &&&~ Collection of all preprocessor switches
 ----------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
    &&&~ Vector preprocessor switches
 ----------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
    &&&~ AUTOSAR preprocessor switches
 ----------------------------------------------------------------------------- */
#define FRTP_VERSION_INFO_API STD_OFF 
#define FRTP_HAVE_TC STD_OFF 
#define FRTP_HAVE_RC STD_OFF 
#define FRTP_RUNTIME_MEASUREMENT_SUPPORT STD_OFF
#define FRTP_INVALID_SNV 0xFFU /*    */ 

/* -----------------------------------------------------------------------------
    &&&~ MICROSAR preprocessor switches
 ----------------------------------------------------------------------------- */
 
#define FRTP_RX_IND_EARLIER_THAN_TX_CONF STD_OFF 
 
#define FRTP_FULL_AR421 STD_OFF /*!< This switch is always generated 'STD_OFF' because the Vector DCM does not support 'full AUTOSAR 4.2.1' regarding the PduR generic TP API */

/* -----------------------------------------------------------------------------
    &&&~ FrTp_Cfg
 ----------------------------------------------------------------------------- */
 
#define FrTp_MaxRxSduId                   28U
#define FrTp_MaxTxSduId                   14U
#define FrTp_MaxFrIfRxPduId               3U
#define FrTp_MaxFrIfTxPduId               1U
#define FrTp_MaxLengthRxPdus              254U
#define FrTp_MaxLengthTxPdus              32U
#define FrTp_NumConn                      28U

#define FrTp_NumRxChan                    28U 
#define FrTp_NumTxChan                    14U 
#define FrTp_InstanceId                   0U
#define FrTp_NumFrIfRxPdus                2U
#define FrTp_NumFrIfTxPdus                1U
#define FrTp_NumDecoupPdus                1U
#define FrTp_NumRxPools                   2U
#define FrTp_NumTxPools                   1U

 

/* -----------------------------------------------------------------------------
    &&&~ SymbolicNameValues
 ----------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
    &&&~ SymbolicNameValues for FrTpTxSduId
 ----------------------------------------------------------------------------- */



/**
 * \defgroup FrTpHandleIds Handle IDs.
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define FrTpConf_FrTpTxSdu_TL_ECU_TRNSM_FR_32_00BC0001_RxF0           0
#define FrTpConf_FrTpTxSdu_TL_ECU_TRNSM_FR_32_00BC0001_RxF1           1
#define FrTpConf_FrTpTxSdu_TL_ECU_TRNSM_FR_32_00BC0001_RxF2           2
#define FrTpConf_FrTpTxSdu_TL_ECU_TRNSM_FR_32_00BC0001_RxF3           3
#define FrTpConf_FrTpTxSdu_TL_ECU_TRNSM_FR_32_00BC0001_RxF4           4
#define FrTpConf_FrTpTxSdu_TL_ECU_TRNSM_FR_32_00BC0001_RxF5           5
#define FrTpConf_FrTpTxSdu_TL_ECU_TRNSM_FR_32_00BC0001_RxF6           6
#define FrTpConf_FrTpTxSdu_TL_ECU_TRNSM_FR_32_00BC0001_RxF7           7
#define FrTpConf_FrTpTxSdu_TL_ECU_TRNSM_FR_32_00BC0001_RxF8           8
#define FrTpConf_FrTpTxSdu_TL_ECU_TRNSM_FR_32_00BC0001_RxF9           9
#define FrTpConf_FrTpTxSdu_TL_ECU_TRNSM_FR_32_00BC0001_RxFA           10
#define FrTpConf_FrTpTxSdu_TL_ECU_TRNSM_FR_32_00BC0001_RxFB           11
#define FrTpConf_FrTpTxSdu_TL_ECU_TRNSM_FR_32_00BC0001_RxFC           12
#define FrTpConf_FrTpTxSdu_TL_ECU_TRNSM_FR_32_00BC0001_RxFD           13
/**\} */

/* -----------------------------------------------------------------------------
    &&&~ SymbolicNameValues for FrTpRxSduId
 ----------------------------------------------------------------------------- */



/**
 * \defgroup FrTpHandleIds Handle IDs.
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define FrTpConf_FrTpRxSdu_TL_BRC_FR_32_TxF0_0xDF                     0
#define FrTpConf_FrTpRxSdu_TL_BRC_FR_32_TxF1_0xDF                     1
#define FrTpConf_FrTpRxSdu_TL_BRC_FR_32_TxF2_0xDF                     2
#define FrTpConf_FrTpRxSdu_TL_BRC_FR_32_TxF3_0xDF                     3
#define FrTpConf_FrTpRxSdu_TL_BRC_FR_32_TxF4_0xDF                     4
#define FrTpConf_FrTpRxSdu_TL_BRC_FR_32_TxF5_0xDF                     5
#define FrTpConf_FrTpRxSdu_TL_BRC_FR_32_TxF6_0xDF                     6
#define FrTpConf_FrTpRxSdu_TL_BRC_FR_32_TxF7_0xDF                     7
#define FrTpConf_FrTpRxSdu_TL_BRC_FR_32_TxF8_0xDF                     8
#define FrTpConf_FrTpRxSdu_TL_BRC_FR_32_TxF9_0xDF                     9
#define FrTpConf_FrTpRxSdu_TL_BRC_FR_32_TxFA_0xDF                     10
#define FrTpConf_FrTpRxSdu_TL_BRC_FR_32_TxFB_0xDF                     11
#define FrTpConf_FrTpRxSdu_TL_BRC_FR_32_TxFC_0xDF                     12
#define FrTpConf_FrTpRxSdu_TL_BRC_FR_32_TxFD_0xDF                     13
#define FrTpConf_FrTpRxSdu_TL_MST_GW_TRNSM_FR_254_00980001_TxF0       14
#define FrTpConf_FrTpRxSdu_TL_MST_GW_TRNSM_FR_254_00980001_TxF1       15
#define FrTpConf_FrTpRxSdu_TL_MST_GW_TRNSM_FR_254_00980001_TxF2       16
#define FrTpConf_FrTpRxSdu_TL_MST_GW_TRNSM_FR_254_00980001_TxF3       17
#define FrTpConf_FrTpRxSdu_TL_MST_GW_TRNSM_FR_254_00980001_TxF4       18
#define FrTpConf_FrTpRxSdu_TL_MST_GW_TRNSM_FR_254_00980001_TxF5       19
#define FrTpConf_FrTpRxSdu_TL_MST_GW_TRNSM_FR_254_00980001_TxF6       20
#define FrTpConf_FrTpRxSdu_TL_MST_GW_TRNSM_FR_254_00980001_TxF7       21
#define FrTpConf_FrTpRxSdu_TL_MST_GW_TRNSM_FR_254_00980001_TxF8       22
#define FrTpConf_FrTpRxSdu_TL_MST_GW_TRNSM_FR_254_00980001_TxF9       23
#define FrTpConf_FrTpRxSdu_TL_MST_GW_TRNSM_FR_254_00980001_TxFA       24
#define FrTpConf_FrTpRxSdu_TL_MST_GW_TRNSM_FR_254_00980001_TxFB       25
#define FrTpConf_FrTpRxSdu_TL_MST_GW_TRNSM_FR_254_00980001_TxFC       26
#define FrTpConf_FrTpRxSdu_TL_MST_GW_TRNSM_FR_254_00980001_TxFD       27
/**\} */

/* -----------------------------------------------------------------------------
    &&&~ SymbolicNameValues for FrTpRxPduId
 ----------------------------------------------------------------------------- */



/**
 * \defgroup FrTpHandleIds Handle IDs.
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define FrTpConf_FrTpRxPdu_FrTpRxPdu_TL_BRC_FR_32_Tp                  1
#define FrTpConf_FrTpRxPdu_RxPduPool_TL_GW_FR                         2
#define FrTpConf_FrTpRxPdu_RxPduPool_TL_MST_GW_TRNSM_FR_254_00980001_Tp 0
/**\} */

/* -----------------------------------------------------------------------------
    &&&~ SymbolicNameValues for FrTpTxConfirmationPduId
 ----------------------------------------------------------------------------- */



/**
 * \defgroup FrTpHandleIds Handle IDs.
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define FrTpConf_FrTpTxPdu_TxPduPool_TL_ECU_TRNSM_FR_32_00BC0001_Tp   0
/**\} */

/* -----------------------------------------------------------------------------
    &&&~ FrTp AUTOSAR VERSION
 ----------------------------------------------------------------------------- */
#define FRTP_AUTOSARVERSION4




/* end Fileversion check */

#endif /* FRTP_CFG_H */

