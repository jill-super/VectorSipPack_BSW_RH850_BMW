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
 *            Module: Xcp
 *           Program: MSR BAC 4.x (MSR_Bmw_SLP4)
 *          Customer: Nexteer Automotive Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Renesas RH850 P1M R7F701363EAFP
 *    License Scope : The usage is restricted to CBD1700369_D04
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: FrXcp_Cfg.h
 *   Generation Time: 2018-01-04 11:34:40
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

    

#if !defined(FRXCP_CFG_H)
#define FRXCP_CFG_H

/* FrXcpTxPduId symbolic name defines */



/**
 * \defgroup XcpHandleIds Handle IDs.
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define XcpConf_XcpTxPdu_dummy16bstatic_23008def                      3
#define XcpConf_XcpTxPdu_dummy32bslave_23008def                       7
#define XcpConf_XcpTxPdu_xcpdynamic254_1_23008def                     5
#define XcpConf_XcpTxPdu_xcpdynamic254_2_23008def                     8
#define XcpConf_XcpTxPdu_xcpdynamic254_3_23008def                     1
#define XcpConf_XcpTxPdu_xcpdynamic254_4_23008def                     6
#define XcpConf_XcpTxPdu_xcpdynamic254_5_23008def                     9
#define XcpConf_XcpTxPdu_xcpdynamic254_6_23008def                     0
#define XcpConf_XcpTxPdu_xcpdynamic254_7_23008def                     4
#define XcpConf_XcpTxPdu_xcpdynamic254_8_23008def                     2
/**\} */

/* FrXcpRxPduId symbolic name defines */
/* ComValidationLib */



/**
 * \defgroup XcpHandleIds Handle IDs.
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define XcpConf_XcpRxPdu_dummy32bmaster_23008def                      0
/**\} */


#ifndef XCP_USE_DUMMY_FUNCTIONS
#define XCP_USE_DUMMY_FUNCTIONS STD_OFF /* /MICROSAR/EcuC/EcucGeneral/DummyFunction */
#endif
#ifndef XCP_USE_DUMMY_STATEMENT
#define XCP_USE_DUMMY_STATEMENT STD_ON /* /MICROSAR/EcuC/EcucGeneral/DummyStatement */
#endif
#ifndef XCP_DUMMY_STATEMENT
#define XCP_DUMMY_STATEMENT(v) (v)=(v) /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/EcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef XCP_DUMMY_STATEMENT_CONST
#define XCP_DUMMY_STATEMENT_CONST(v) (void)(v) /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/EcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef XCP_ATOMIC_BIT_ACCESS_IN_BITFIELD
#define XCP_ATOMIC_BIT_ACCESS_IN_BITFIELD STD_ON /* /MICROSAR/EcuC/EcucGeneral/AtomicBitAccessInBitfield */
#endif
#ifndef XCP_ATOMIC_VARIABLE_ACCESS
#define XCP_ATOMIC_VARIABLE_ACCESS 32U /* /MICROSAR/EcuC/EcucGeneral/AtomicVariableAccess */
#endif
#ifndef XCP_PROCESSOR_RH850_1363
#define XCP_PROCESSOR_RH850_1363
#endif
#ifndef XCP_COMP_GREENHILLS
#define XCP_COMP_GREENHILLS
#endif
#ifndef XCP_GEN_GENERATOR_MSR
#define XCP_GEN_GENERATOR_MSR
#endif
#ifndef XCP_CPUTYPE_BITORDER_LSB2MSB
#define XCP_CPUTYPE_BITORDER_LSB2MSB /* /MICROSAR/EcuC/EcucGeneral/BitOrder */
#endif
#ifndef XCP_CONFIGURATION_VARIANT_PRECOMPILE
#define XCP_CONFIGURATION_VARIANT_PRECOMPILE 1
#endif
#ifndef XCP_CONFIGURATION_VARIANT_LINKTIME
#define XCP_CONFIGURATION_VARIANT_LINKTIME 2
#endif
#ifndef XCP_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE
#define XCP_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE 3
#endif
#ifndef XCP_CONFIGURATION_VARIANT
#define XCP_CONFIGURATION_VARIANT XCP_CONFIGURATION_VARIANT_PRECOMPILE
#endif
#ifndef XCP_POSTBUILD_VARIANT_SUPPORT
#define XCP_POSTBUILD_VARIANT_SUPPORT STD_OFF
#endif


#define FRXCP_USE_PDUINFOTYPE STD_ON
#define FRXCP_VERSION_INFO_API              STD_OFF   

#ifndef FRXCP_AUTOSARVERSION
#define FRXCP_AUTOSARVERSION                4
#endif

#ifndef FRXCP_CONFIGURATOR
#define FRXCP_CONFIGURATOR                  5
#endif

#define FRXCP_TRANSPORT_LAYER_VERSION       0x0100U

#ifndef FRXCP_CONFIG_VARIANT
#define FRXCP_CONFIG_VARIANT XCP_CONFIGURATION_VARIANT
#endif

/* Pre-processor switch for enabling development error detection. */
#define FRXCP_DEV_ERROR_DETECT              STD_ON
/* Pre-processor values for Max CTO and Max DTO parameters */
#define kFrXcpMaxCTO                         12U
#define kFrXcpMaxDTO                         12U
/* Maximum size of buffer */
#define FRXCP_PDU_SIZE                       14U
#define FRXCP_NODE_ADDRESS                   0U
#define FRXCP_CONF_TIMEOUT                   8U
/* Enable/Disable transport layer activation control API */
#define FRXCP_ENABLE_CONTROL                 STD_OFF
/* ON=Decoupled Mode  OFF = Immediate Mode */
#define FRXCP_USE_DECOUPLED_MODE             STD_ON
/* ON=Use xcp frame concatenation  OFF=don't use xcp frame concatenation */
#define FRXCP_FRAME_CONCATENATION            STD_OFF
/* ON=Use sequence counter OFF=don't use sequence counter (not supported) */
#define FRXCP_SEQUENCE_COUNTER               STD_ON
/* ON=User buffer reconfiguration API  OFF=don't use buffer reconfiguration API */
#define FRXCP_USE_BUFFER_RECONFIG_API        STD_OFF
/* FRXCP_FRAME_ALIGNMENT_xxBIT with xx=[8;16;32] */
#define FRXCP_FRAME_ALIGNMENT_8BIT
#define FRXCP_USE_PDUMODE                    STD_OFF

/* Number of PDUs to be received */
#define FRXCP_NUM_RX_LPDUIDS                 1U
/* Maximum number of transmit PDUs */
#define FRXCP_NUM_TX_LPDUIDS                 10U
#define FRXCP_NUMBER_OF_TRANSMITFRAMECACHE   FRXCP_NUM_TX_LPDUIDS

#define FRXCP_SILENT_CHECK                   STD_OFF 


#endif /* FRXCP_CFG_H */


