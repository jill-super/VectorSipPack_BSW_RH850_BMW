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
 *              File: PduR_Lcfg.c
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

#define PDUR_LCFG_SOURCE

/**********************************************************************************************************************
 * MISRA / PCLINT JUSTIFICATION
 *********************************************************************************************************************/
/* PRQA S 0779 EOF */ /* MD_MSR_5.1_779 */
/* PRQA S 0777 EOF */ /* MD_MSR_5.1_777 */
/* PRQA S 0612 EOF */ /* MD_MSR_1.1 */


/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "PduR.h"

#if(PDUR_DEV_ERROR_REPORT == STD_ON)
# include "Det.h"
#endif

/* Include headers with callbacks */
#include "PduR_Com.h"
#include "PduR_FrIf.h"
#include "PduR_IpduM.h"
#include "PduR_FrTp.h"
#include "PduR_Dcm.h"


/**********************************************************************************************************************
 * LOCAL CONSTANT MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * LOCAL FUNCTION MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * LOCAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * LOCAL DATA PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * LOCAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * GLOBAL DATA
 *********************************************************************************************************************/
/* \trace SPEC-663, SPEC-661 */

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  PduR_CopyRxDataFctPtr
**********************************************************************************************************************/
/** 
  \var    PduR_CopyRxDataFctPtr
  \brief  Transport protocol CopyRxData function pointers
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(PduR_CopyRxDataFctPtrType, PDUR_CONST) PduR_CopyRxDataFctPtr[1] = {
  /* Index     CopyRxDataFctPtr      Referable Keys */
  /*     0 */ Dcm_CopyRxData      /* [/ActiveEcuC/PduR/Dcm] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_CopyTxDataFctPtr
**********************************************************************************************************************/
/** 
  \var    PduR_CopyTxDataFctPtr
  \brief  Transport protocol CopyTxData function pointers
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(PduR_CopyTxDataFctPtrType, PDUR_CONST) PduR_CopyTxDataFctPtr[1] = {
  /* Index     CopyTxDataFctPtr      Referable Keys */
  /*     0 */ Dcm_CopyTxData      /* [/ActiveEcuC/PduR/Dcm] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_IfRoutingStateTable
**********************************************************************************************************************/
/** 
  \var    PduR_IfRoutingStateTable
  \brief  Contains state transition for Communication Interface routings
  \details
  Element                                   Description
  NextState_For_Init_If_Routing_State   
  NextState_For_Wait_For_RxIndication   
  NextState_For_Wait_For_TriggerTransmit
  NextState_For_Wait_For_TxConfirmation 
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(PduR_IfRoutingStateTableType, PDUR_CONST) PduR_IfRoutingStateTable[4] = {
    /* Index    NextState_For_Init_If_Routing_State                                                     NextState_For_Wait_For_RxIndication                                                     NextState_For_Wait_For_TriggerTransmit                                                     NextState_For_Wait_For_TxConfirmation                                                    */
  { /*     0 */    PDUR_WAIT_FOR_RXINDICATION_NEXTSTATE_FOR_INIT_IF_ROUTING_STATEOFIFROUTINGSTATETABLE,    PDUR_WAIT_FOR_RXINDICATION_NEXTSTATE_FOR_WAIT_FOR_RXINDICATIONOFIFROUTINGSTATETABLE,                                                                                       0UL,                                                                                      0UL },
  { /*     1 */ PDUR_WAIT_FOR_TRIGGERTRANSMIT_NEXTSTATE_FOR_INIT_IF_ROUTING_STATEOFIFROUTINGSTATETABLE, PDUR_WAIT_FOR_TRIGGERTRANSMIT_NEXTSTATE_FOR_WAIT_FOR_RXINDICATIONOFIFROUTINGSTATETABLE, PDUR_WAIT_FOR_TRIGGERTRANSMIT_NEXTSTATE_FOR_WAIT_FOR_TRIGGERTRANSMITOFIFROUTINGSTATETABLE,                                                                                      0UL },
  { /*     2 */    PDUR_WAIT_FOR_RXINDICATION_NEXTSTATE_FOR_INIT_IF_ROUTING_STATEOFIFROUTINGSTATETABLE, PDUR_WAIT_FOR_TRIGGERTRANSMIT_NEXTSTATE_FOR_WAIT_FOR_RXINDICATIONOFIFROUTINGSTATETABLE,  PDUR_WAIT_FOR_TXCONFIRMATION_NEXTSTATE_FOR_WAIT_FOR_TRIGGERTRANSMITOFIFROUTINGSTATETABLE, PDUR_WAIT_FOR_TRIGGERTRANSMIT_NEXTSTATE_FOR_WAIT_FOR_TXCONFIRMATIONOFIFROUTINGSTATETABLE },
  { /*     3 */    PDUR_WAIT_FOR_RXINDICATION_NEXTSTATE_FOR_INIT_IF_ROUTING_STATEOFIFROUTINGSTATETABLE,  PDUR_WAIT_FOR_TXCONFIRMATION_NEXTSTATE_FOR_WAIT_FOR_RXINDICATIONOFIFROUTINGSTATETABLE,                                                                                       0UL,  PDUR_WAIT_FOR_TXCONFIRMATION_NEXTSTATE_FOR_WAIT_FOR_TXCONFIRMATIONOFIFROUTINGSTATETABLE }
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_IfRxIndicationFctPtr
**********************************************************************************************************************/
/** 
  \var    PduR_IfRxIndicationFctPtr
  \brief  Upper layer communication interface Rx indication function pointers.
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(PduR_IfRxIndicationType, PDUR_CONST) PduR_IfRxIndicationFctPtr[2] = {
  /* Index     IfRxIndicationFctPtr      Referable Keys */
  /*     0 */ Com_RxIndication     ,  /* [/ActiveEcuC/PduR/Com] */
  /*     1 */ IpduM_RxIndication      /* [/ActiveEcuC/PduR/IpduM] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_IfTriggerTransmitFctPtr
**********************************************************************************************************************/
/** 
  \var    PduR_IfTriggerTransmitFctPtr
  \brief  Upper layer trigger transmit function pointers
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(PduR_TriggerTransmitFctPtrType, PDUR_CONST) PduR_IfTriggerTransmitFctPtr[2] = {
  /* Index     IfTriggerTransmitFctPtr      Referable Keys */
  /*     0 */ Com_TriggerTransmit     ,  /* [/ActiveEcuC/PduR/Com] */
  /*     1 */ IpduM_TriggerTransmit      /* [/ActiveEcuC/PduR/IpduM] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_IfTxConfirmationFctPtr
**********************************************************************************************************************/
/** 
  \var    PduR_IfTxConfirmationFctPtr
  \brief  Upper layer communication interface Tx confimation function pointers
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(PduR_IfTxConfirmationFctPtrType, PDUR_CONST) PduR_IfTxConfirmationFctPtr[2] = {
  /* Index     IfTxConfirmationFctPtr      Referable Keys */
  /*     0 */ Com_TxConfirmation     ,  /* [/ActiveEcuC/PduR/Com] */
  /*     1 */ IpduM_TxConfirmation      /* [/ActiveEcuC/PduR/IpduM] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_RxIf2Dest
**********************************************************************************************************************/
/** 
  \var    PduR_RxIf2Dest
  \brief  This table contains all routing information to perform the Rx handling of an interface routing. Used in the &lt;LLIf&gt;_RxIndication
  \details
  Element                    Description
  DestHnd                    Handle to be used as parameter for the RxIndication function call.
  IfRxIndicationFctPtrIdx    the index of the 1:1 relation pointing to PduR_IfRxIndicationFctPtr
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(PduR_RxIf2DestType, PDUR_CONST) PduR_RxIf2Dest[29] = {
    /* Index    DestHnd                                                      IfRxIndicationFctPtrIdx        Referable Keys */
  { /*     0 */                         ComConf_ComIPdu_ANFRAGE_434514f6_In,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/ANFRAGE_434514f6_In/SRC_ANFRAGE_434514f6_In] */
  { /*     1 */                     ComConf_ComIPdu_ACLNY_MASSCNTR_23008def,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Fr_pduTr_ACLNY_MASSCNTR_A_FlexRay_7d601c47/SRC_Fr_pduTr_ACLNY_MASSCNTR_A_FlexRay_7d601c47] */
  { /*     2 */                        ComConf_ComIPdu_AVL_RPM_WHL_23008def,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Fr_pduTr_AVL_RPM_WHL_A_FlexRay_7d601c47/SRC_Fr_pduTr_AVL_RPM_WHL_A_FlexRay_7d601c47] */
  { /*     3 */                             ComConf_ComIPdu_A_TEMP_23008def,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Fr_pduTr_A_TEMP_A_FlexRay_7d601c47/SRC_Fr_pduTr_A_TEMP_A_FlexRay_7d601c47] */
  { /*     4 */                            ComConf_ComIPdu_CON_VEH_23008def,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Fr_pduTr_CON_VEH_A_FlexRay_7d601c47/SRC_Fr_pduTr_CON_VEH_A_FlexRay_7d601c47] */
  { /*     5 */                  ComConf_ComIPdu_CTR_DIAG_OBD_DRDY_23008def,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Fr_pduTr_CTR_DIAG_OBD_DRDY_A_FlexRay_7d601c47/SRC_Fr_pduTr_CTR_DIAG_OBD_DRDY_A_FlexRay_7d601c47] */
  { /*     6 */       ComConf_ComIPdu_CTR_VIB_STW_DISP_EXMI_SP2015_23008def,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Fr_pduTr_CTR_VIB_STW_DISP_EXMI_SP2015_A_FlexRay_7d601c47/SRC_Fr_pduTr_CTR_VIB_STW_DISP_EXMI_SP2015_A_FlexRay_7d601c47] */
  { /*     7 */                       ComConf_ComIPdu_DIAG_OBD_ENG_23008def,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Fr_pduTr_DIAG_OBD_ENG_A_FlexRay_7d601c47/SRC_Fr_pduTr_DIAG_OBD_ENG_A_FlexRay_7d601c47] */
  { /*     8 */                     ComConf_ComIPdu_ENERG_DGR_DRDY_23008def,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Fr_pduTr_ENERG_DGR_DRDY_A_FlexRay_7d601c47/SRC_Fr_pduTr_ENERG_DGR_DRDY_A_FlexRay_7d601c47] */
  { /*     9 */                           ComConf_ComIPdu_ENSU_SFY_23008def,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Fr_pduTr_ENSU_SFY_A_FlexRay_7d601c47/SRC_Fr_pduTr_ENSU_SFY_A_FlexRay_7d601c47] */
  { /*    10 */                          ComConf_ComIPdu_ERRM_BN_U_23008def,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Fr_pduTr_ERRM_BN_U_A_FlexRay_7d601c47/SRC_Fr_pduTr_ERRM_BN_U_A_FlexRay_7d601c47] */
  { /*    11 */                  ComConf_ComIPdu_FAHRGESTELLNUMMER_23008def,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Fr_pduTr_FAHRGESTELLNUMMER_A_FlexRay_7d601c47/SRC_Fr_pduTr_FAHRGESTELLNUMMER_A_FlexRay_7d601c47] */
  { /*    12 */                             ComConf_ComIPdu_FZZSTD_23008def,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Fr_pduTr_FZZSTD_A_FlexRay_7d601c47/SRC_Fr_pduTr_FZZSTD_A_FlexRay_7d601c47] */
  { /*    13 */                     ComConf_ComIPdu_KILOMETERSTAND_23008def,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Fr_pduTr_KILOMETERSTAND_A_FlexRay_7d601c47/SRC_Fr_pduTr_KILOMETERSTAND_A_FlexRay_7d601c47] */
  { /*    14 */                      ComConf_ComIPdu_OFFS_QUAD_EPS_23008def,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Fr_pduTr_OFFS_QUAD_EPS_A_FlexRay_7d601c47/SRC_Fr_pduTr_OFFS_QUAD_EPS_A_FlexRay_7d601c47] */
  { /*    15 */                        ComConf_ComIPdu_RELATIVZEIT_23008def,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Fr_pduTr_RELATIVZEIT_A_FlexRay_7d601c47/SRC_Fr_pduTr_RELATIVZEIT_A_FlexRay_7d601c47] */
  { /*    16 */             ComConf_ComIPdu_SECU_FAHRGESTELLNUMMER_23008def,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Fr_pduTr_SECU_FAHRGESTELLNUMMER_A_FlexRay_7d601c47/SRC_Fr_pduTr_SECU_FAHRGESTELLNUMMER_A_FlexRay_7d601c47] */
  { /*    17 */                          ComConf_ComIPdu_SECU_RESP_23008def,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Fr_pduTr_SECU_RESP_A_FlexRay_7d601c47/SRC_Fr_pduTr_SECU_RESP_A_FlexRay_7d601c47] */
  { /*    18 */                          ComConf_ComIPdu_STEA_OFFS_23008def,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Fr_pduTr_STEA_OFFS_A_FlexRay_7d601c47/SRC_Fr_pduTr_STEA_OFFS_A_FlexRay_7d601c47] */
  { /*    19 */                            ComConf_ComIPdu_ST_CENG_23008def,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Fr_pduTr_ST_CENG_A_FlexRay_7d601c47/SRC_Fr_pduTr_ST_CENG_A_FlexRay_7d601c47] */
  { /*    20 */                       ComConf_ComIPdu_ST_ENERG_GEN_23008def,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Fr_pduTr_ST_ENERG_GEN_A_FlexRay_7d601c47/SRC_Fr_pduTr_ST_ENERG_GEN_A_FlexRay_7d601c47] */
  { /*    21 */                        ComConf_ComIPdu_ST_STAB_DSC_23008def,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Fr_pduTr_ST_STAB_DSC_A_FlexRay_7d601c47/SRC_Fr_pduTr_ST_STAB_DSC_A_FlexRay_7d601c47] */
  { /*    22 */                    ComConf_ComIPdu_SU_CLE_DRDY_DXP_23008def,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Fr_pduTr_SU_CLE_DRDY_DXP_A_FlexRay_7d601c47/SRC_Fr_pduTr_SU_CLE_DRDY_DXP_A_FlexRay_7d601c47] */
  { /*    23 */                 ComConf_ComIPdu_TAR_ESTP_VIRT_FTAX_23008def,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Fr_pduTr_TAR_ESTP_VIRT_FTAX_A_FlexRay_7d601c47/SRC_Fr_pduTr_TAR_ESTP_VIRT_FTAX_A_FlexRay_7d601c47] */
  { /*    24 */                  ComConf_ComIPdu_TAR_QTA_STRMOM_DV_23008def,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Fr_pduTr_TAR_QTA_STRMOM_DV_A_FlexRay_7d601c47/SRC_Fr_pduTr_TAR_QTA_STRMOM_DV_A_FlexRay_7d601c47] */
  { /*    25 */                   ComConf_ComIPdu_TAR_STMOM_DV_ACT_23008def,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Fr_pduTr_TAR_STMOM_DV_ACT_A_FlexRay_7d601c47/SRC_Fr_pduTr_TAR_STMOM_DV_ACT_A_FlexRay_7d601c47] */
  { /*    26 */                           ComConf_ComIPdu_VYAW_VEH_23008def,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Fr_pduTr_VYAW_VEH_A_FlexRay_7d601c47/SRC_Fr_pduTr_VYAW_VEH_A_FlexRay_7d601c47] */
  { /*    27 */                              ComConf_ComIPdu_V_VEH_23008def,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Fr_pduTr_V_VEH_A_FlexRay_7d601c47/SRC_Fr_pduTr_V_VEH_A_FlexRay_7d601c47] */
  { /*    28 */ IpduMConf_IpduMRxIndication_pduTr_SVC_A_FlexRay_434514f6_In,                     1UL }   /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/SVC_434514f6_In/SRC_SVC_434514f6_In] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_RxTp2Dest
**********************************************************************************************************************/
/** 
  \var    PduR_RxTp2Dest
  \brief  This table contains all routing information to perform the Rx handling of a Tp Routing. Used in the PduR_&lt;LLTp&gt;_StartOfReception, PduR_&lt;LLTp&gt;_CopyRxData and PduR_&lt;LLTp&gt;_RxIndication.
  \details
  Element                      Description
  DestHnd                      handle to be used as parameter for the StartOfReception, CopyRxData or RxIndication function call.
  StartOfReceptionFctPtrIdx    the index of the 1:1 relation pointing to PduR_StartOfReceptionFctPtr
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(PduR_RxTp2DestType, PDUR_CONST) PduR_RxTp2Dest[28] = {
    /* Index    DestHnd                                            StartOfReceptionFctPtrIdx        Referable Keys */
  { /*     0 */ DcmConf_DcmDslProtocolRx_DcmDslProtocolRx_0xF0_fu,                       0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath_PT_TL_BRC_FR_32_TxF0_0xDF/PduRSrcPdu] */
  { /*     1 */ DcmConf_DcmDslProtocolRx_DcmDslProtocolRx_0xF1_fu,                       0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath_PT_TL_BRC_FR_32_TxF1_0xDF/PduRSrcPdu_001] */
  { /*     2 */ DcmConf_DcmDslProtocolRx_DcmDslProtocolRx_0xF2_fu,                       0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath_PT_TL_BRC_FR_32_TxF2_0xDF/PduRSrcPdu_002] */
  { /*     3 */ DcmConf_DcmDslProtocolRx_DcmDslProtocolRx_0xF3_fu,                       0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath_PT_TL_BRC_FR_32_TxF3_0xDF/PduRSrcPdu_003] */
  { /*     4 */ DcmConf_DcmDslProtocolRx_DcmDslProtocolRx_0xF4_fu,                       0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath_PT_TL_BRC_FR_32_TxF4_0xDF/PduRSrcPdu_004] */
  { /*     5 */ DcmConf_DcmDslProtocolRx_DcmDslProtocolRx_0xF5_fu,                       0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath_PT_TL_BRC_FR_32_TxF5_0xDF/PduRSrcPdu_005] */
  { /*     6 */ DcmConf_DcmDslProtocolRx_DcmDslProtocolRx_0xF6_fu,                       0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath_PT_TL_BRC_FR_32_TxF6_0xDF/PduRSrcPdu_006] */
  { /*     7 */ DcmConf_DcmDslProtocolRx_DcmDslProtocolRx_0xF7_fu,                       0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath_PT_TL_BRC_FR_32_TxF7_0xDF/PduRSrcPdu_007] */
  { /*     8 */ DcmConf_DcmDslProtocolRx_DcmDslProtocolRx_0xF8_fu,                       0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath_PT_TL_BRC_FR_32_TxF8_0xDF/PduRSrcPdu_008] */
  { /*     9 */ DcmConf_DcmDslProtocolRx_DcmDslProtocolRx_0xF9_fu,                       0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath_PT_TL_BRC_FR_32_TxF9_0xDF/PduRSrcPdu_009] */
  { /*    10 */ DcmConf_DcmDslProtocolRx_DcmDslProtocolRx_0xFA_fu,                       0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath_PT_TL_BRC_FR_32_TxFA_0xDF/PduRSrcPdu_010] */
  { /*    11 */ DcmConf_DcmDslProtocolRx_DcmDslProtocolRx_0xFB_fu,                       0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath_PT_TL_BRC_FR_32_TxFB_0xDF/PduRSrcPdu_011] */
  { /*    12 */ DcmConf_DcmDslProtocolRx_DcmDslProtocolRx_0xFC_fu,                       0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath_PT_TL_BRC_FR_32_TxFC_0xDF/PduRSrcPdu_012] */
  { /*    13 */ DcmConf_DcmDslProtocolRx_DcmDslProtocolRx_0xFD_fu,                       0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath_PT_TL_BRC_FR_32_TxFD_0xDF/PduRSrcPdu_013] */
  { /*    14 */ DcmConf_DcmDslProtocolRx_DcmDslProtocolRx_0xF0_ph,                       0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath_TL_MST_GW_TRNSM_FR_254_00980001_TxF0/PduRSrcPdu_028] */
  { /*    15 */ DcmConf_DcmDslProtocolRx_DcmDslProtocolRx_0xF1_ph,                       0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath_TL_MST_GW_TRNSM_FR_254_00980001_TxF1/PduRSrcPdu_029] */
  { /*    16 */ DcmConf_DcmDslProtocolRx_DcmDslProtocolRx_0xF2_ph,                       0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath_TL_MST_GW_TRNSM_FR_254_00980001_TxF2/PduRSrcPdu_030] */
  { /*    17 */ DcmConf_DcmDslProtocolRx_DcmDslProtocolRx_0xF3_ph,                       0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath_TL_MST_GW_TRNSM_FR_254_00980001_TxF3/PduRSrcPdu_031] */
  { /*    18 */ DcmConf_DcmDslProtocolRx_DcmDslProtocolRx_0xF4_ph,                       0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath_TL_MST_GW_TRNSM_FR_254_00980001_TxF4/PduRSrcPdu_032] */
  { /*    19 */ DcmConf_DcmDslProtocolRx_DcmDslProtocolRx_0xF5_ph,                       0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath_TL_MST_GW_TRNSM_FR_254_00980001_TxF5/PduRSrcPdu_033] */
  { /*    20 */ DcmConf_DcmDslProtocolRx_DcmDslProtocolRx_0xF6_ph,                       0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath_TL_MST_GW_TRNSM_FR_254_00980001_TxF6/PduRSrcPdu_034] */
  { /*    21 */ DcmConf_DcmDslProtocolRx_DcmDslProtocolRx_0xF7_ph,                       0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath_TL_MST_GW_TRNSM_FR_254_00980001_TxF7/PduRSrcPdu_035] */
  { /*    22 */ DcmConf_DcmDslProtocolRx_DcmDslProtocolRx_0xF8_ph,                       0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath_TL_MST_GW_TRNSM_FR_254_00980001_TxF8/PduRSrcPdu_036] */
  { /*    23 */ DcmConf_DcmDslProtocolRx_DcmDslProtocolRx_0xF9_ph,                       0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath_TL_MST_GW_TRNSM_FR_254_00980001_TxF9/PduRSrcPdu_037] */
  { /*    24 */ DcmConf_DcmDslProtocolRx_DcmDslProtocolRx_0xFA_ph,                       0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath_TL_MST_GW_TRNSM_FR_254_00980001_TxFA/PduRSrcPdu_038] */
  { /*    25 */ DcmConf_DcmDslProtocolRx_DcmDslProtocolRx_0xFB_ph,                       0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath_TL_MST_GW_TRNSM_FR_254_00980001_TxFB/PduRSrcPdu_039] */
  { /*    26 */ DcmConf_DcmDslProtocolRx_DcmDslProtocolRx_0xFC_ph,                       0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath_TL_MST_GW_TRNSM_FR_254_00980001_TxFC/PduRSrcPdu_040] */
  { /*    27 */ DcmConf_DcmDslProtocolRx_DcmDslProtocolRx_0xFD_ph,                       0UL }   /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath_TL_MST_GW_TRNSM_FR_254_00980001_TxFD/PduRSrcPdu_041] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_StartOfReceptionFctPtr
**********************************************************************************************************************/
/** 
  \var    PduR_StartOfReceptionFctPtr
  \brief  Transport protocol StartOfReception function pointers
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(PduR_StartOfReceptionFctPtrType, PDUR_CONST) PduR_StartOfReceptionFctPtr[1] = {
  /* Index     StartOfReceptionFctPtr      Referable Keys */
  /*     0 */ Dcm_StartOfReception      /* [/ActiveEcuC/PduR/Dcm] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_TpRxIndicationFctPtr
**********************************************************************************************************************/
/** 
  \var    PduR_TpRxIndicationFctPtr
  \brief  Transport protocol TpRxIndication function pointers
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(PduR_TpRxIndicationFctPtrType, PDUR_CONST) PduR_TpRxIndicationFctPtr[1] = {
  /* Index     TpRxIndicationFctPtr      Referable Keys */
  /*     0 */ Dcm_TpRxIndication      /* [/ActiveEcuC/PduR/Dcm] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_TpTxConfirmationFctPtr
**********************************************************************************************************************/
/** 
  \var    PduR_TpTxConfirmationFctPtr
  \brief  Transport protocol TpTxConfimation function pointers
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(PduR_TpTxConfirmationFctPtrType, PDUR_CONST) PduR_TpTxConfirmationFctPtr[1] = {
  /* Index     TpTxConfirmationFctPtr      Referable Keys */
  /*     0 */ Dcm_TpTxConfirmation      /* [/ActiveEcuC/PduR/Dcm] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_TransmitFctPtr
**********************************************************************************************************************/
/** 
  \var    PduR_TransmitFctPtr
  \brief  Lower layer transmit function pointers
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(PduR_TransmitFctPtrType, PDUR_CONST) PduR_TransmitFctPtr[3] = {
  /* Index     TransmitFctPtr      Referable Keys */
  /*     0 */ FrIf_Transmit  ,  /* [/ActiveEcuC/PduR/FrIf] */
  /*     1 */ IpduM_Transmit ,  /* [/ActiveEcuC/PduR/IpduM] */
  /*     2 */ FrTp_Transmit     /* [/ActiveEcuC/PduR/FrTp] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_Tx2Lo
**********************************************************************************************************************/
/** 
  \var    PduR_Tx2Lo
  \brief  Contains all informations to route a Pdu from a upper layer to a lower layer module, or to cancel a transmission
  \details
  Element              Description
  DestHnd              Handle to be used as parameter for the Transmit function call.
  TransmitFctPtrIdx    the index of the 1:1 relation pointing to PduR_TransmitFctPtr
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(PduR_Tx2LoType, PDUR_CONST) PduR_Tx2Lo[30] = {
    /* Index    DestHnd                                                         TransmitFctPtrIdx        Referable Keys */
  { /*     0 */                  IpduMConf_IpduMTxDynamicPart_ANFRAGE_23008def,               1UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/ANFRAGE_434514f6_Out/SRC_ANFRAGE_434514f6_Out] */
  { /*     1 */                      FrIfConf_FrIfTxPdu_FrIfTxPdu_AVL_FORC_GRD,               0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Fr_pduTr_AVL_FORC_GRD_A_FlexRay_7d601c47/SRC_Fr_pduTr_AVL_FORC_GRD_A_FlexRay_7d601c47] */
  { /*     2 */                        FrIfConf_FrIfTxPdu_FrIfTxPdu_AVL_PO_EPS,               0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Fr_pduTr_AVL_PO_EPS_A_FlexRay_7d601c47/SRC_Fr_pduTr_AVL_PO_EPS_A_FlexRay_7d601c47] */
  { /*     3 */                  FrIfConf_FrIfTxPdu_FrIfTxPdu_AVL_STMOM_DV_ACT,               0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Fr_pduTr_AVL_STMOM_DV_ACT_A_FlexRay_7d601c47/SRC_Fr_pduTr_AVL_STMOM_DV_ACT_A_FlexRay_7d601c47] */
  { /*     4 */   IpduMConf_IpduMTxDynamicPart_DBG_EPS_BS_MOD_58_BYTE_23008def,               1UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Fr_pduTr_DBG_EPS_BS_MOD_58_BYTE_A_FlexRay_7d601c47/SRC_Fr_pduTr_DBG_EPS_BS_MOD_58_BYTE_A_FlexRay_7d601c47] */
  { /*     5 */ IpduMConf_IpduMTxDynamicPart_DBG_EPS_MOD_EXT_120_BYTE_23008def,               1UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Fr_pduTr_DBG_EPS_MOD_EXT_120_BYTE_A_FlexRay_7d601c47/SRC_Fr_pduTr_DBG_EPS_MOD_EXT_120_BYTE_A_FlexRay_7d601c47] */
  { /*     6 */                       FrIfConf_FrIfTxPdu_FrIfTxPdu_DISP_CC_EPS,               0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Fr_pduTr_DISP_CC_EPS_A_FlexRay_7d601c47/SRC_Fr_pduTr_DISP_CC_EPS_A_FlexRay_7d601c47] */
  { /*     7 */                            FrIfConf_FrIfTxPdu_FrIfTxPdu_DT_EST,               0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Fr_pduTr_DT_EST_A_FlexRay_7d601c47/SRC_Fr_pduTr_DT_EST_A_FlexRay_7d601c47] */
  { /*     8 */                       FrIfConf_FrIfTxPdu_FrIfTxPdu_ENGTORQ_EPS,               0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Fr_pduTr_ENGTORQ_EPS_A_FlexRay_7d601c47/SRC_Fr_pduTr_ENGTORQ_EPS_A_FlexRay_7d601c47] */
  { /*     9 */                        FrIfConf_FrIfTxPdu_FrIfTxPdu_FR_DBG_EPS,               0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Fr_pduTr_FR_DBG_EPS_A_FlexRay_7d601c47/SRC_Fr_pduTr_FR_DBG_EPS_A_FlexRay_7d601c47] */
  { /*    10 */              IpduMConf_IpduMTxDynamicPart_RQ_STG_EFAN_23008def,               1UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Fr_pduTr_RQ_STG_EFAN_A_FlexRay_7d601c47/SRC_Fr_pduTr_RQ_STG_EFAN_A_FlexRay_7d601c47] */
  { /*    11 */                IpduMConf_IpduMTxDynamicPart_SECU_CHAL_23008def,               1UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Fr_pduTr_SECU_CHAL_A_FlexRay_7d601c47/SRC_Fr_pduTr_SECU_CHAL_A_FlexRay_7d601c47] */
  { /*    12 */                FrIfConf_FrIfTxPdu_FrIfTxPdu_ST_DIAG_OBD_3_DRDY,               0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Fr_pduTr_ST_DIAG_OBD_3_DRDY_A_FlexRay_7d601c47/SRC_Fr_pduTr_ST_DIAG_OBD_3_DRDY_A_FlexRay_7d601c47] */
  { /*    13 */                            FrIfConf_FrIfTxPdu_FrIfTxPdu_ST_EST,               0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Fr_pduTr_ST_EST_A_FlexRay_7d601c47/SRC_Fr_pduTr_ST_EST_A_FlexRay_7d601c47] */
  { /*    14 */                            FrIfConf_FrIfTxPdu_FrIfTxPdu_SU_EPS,               0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Fr_pduTr_SU_EPS_A_FlexRay_7d601c47/SRC_Fr_pduTr_SU_EPS_A_FlexRay_7d601c47] */
  { /*    15 */            FrTpConf_FrTpTxSdu_TL_ECU_TRNSM_FR_32_00BC0001_RxF0,               2UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath_TL_ECU_TRNSM_FR_32_00BC0001_RxF0/PduRSrcPdu_014] */
  { /*    16 */            FrTpConf_FrTpTxSdu_TL_ECU_TRNSM_FR_32_00BC0001_RxF1,               2UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath_TL_ECU_TRNSM_FR_32_00BC0001_RxF1/PduRSrcPdu_015] */
  { /*    17 */            FrTpConf_FrTpTxSdu_TL_ECU_TRNSM_FR_32_00BC0001_RxF2,               2UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath_TL_ECU_TRNSM_FR_32_00BC0001_RxF2/PduRSrcPdu_016] */
  { /*    18 */            FrTpConf_FrTpTxSdu_TL_ECU_TRNSM_FR_32_00BC0001_RxF3,               2UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath_TL_ECU_TRNSM_FR_32_00BC0001_RxF3/PduRSrcPdu_017] */
  { /*    19 */            FrTpConf_FrTpTxSdu_TL_ECU_TRNSM_FR_32_00BC0001_RxF4,               2UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath_TL_ECU_TRNSM_FR_32_00BC0001_RxF4/PduRSrcPdu_018] */
  { /*    20 */            FrTpConf_FrTpTxSdu_TL_ECU_TRNSM_FR_32_00BC0001_RxF5,               2UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath_TL_ECU_TRNSM_FR_32_00BC0001_RxF5/PduRSrcPdu_019] */
  { /*    21 */            FrTpConf_FrTpTxSdu_TL_ECU_TRNSM_FR_32_00BC0001_RxF6,               2UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath_TL_ECU_TRNSM_FR_32_00BC0001_RxF6/PduRSrcPdu_020] */
  { /*    22 */            FrTpConf_FrTpTxSdu_TL_ECU_TRNSM_FR_32_00BC0001_RxF7,               2UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath_TL_ECU_TRNSM_FR_32_00BC0001_RxF7/PduRSrcPdu_021] */
  { /*    23 */            FrTpConf_FrTpTxSdu_TL_ECU_TRNSM_FR_32_00BC0001_RxF8,               2UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath_TL_ECU_TRNSM_FR_32_00BC0001_RxF8/PduRSrcPdu_022] */
  { /*    24 */            FrTpConf_FrTpTxSdu_TL_ECU_TRNSM_FR_32_00BC0001_RxF9,               2UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath_TL_ECU_TRNSM_FR_32_00BC0001_RxF9/PduRSrcPdu_023] */
  { /*    25 */            FrTpConf_FrTpTxSdu_TL_ECU_TRNSM_FR_32_00BC0001_RxFA,               2UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath_TL_ECU_TRNSM_FR_32_00BC0001_RxFA/PduRSrcPdu_024] */
  { /*    26 */            FrTpConf_FrTpTxSdu_TL_ECU_TRNSM_FR_32_00BC0001_RxFB,               2UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath_TL_ECU_TRNSM_FR_32_00BC0001_RxFB/PduRSrcPdu_025] */
  { /*    27 */            FrTpConf_FrTpTxSdu_TL_ECU_TRNSM_FR_32_00BC0001_RxFC,               2UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath_TL_ECU_TRNSM_FR_32_00BC0001_RxFC/PduRSrcPdu_026] */
  { /*    28 */            FrTpConf_FrTpTxSdu_TL_ECU_TRNSM_FR_32_00BC0001_RxFD,               2UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath_TL_ECU_TRNSM_FR_32_00BC0001_RxFD/PduRSrcPdu_027] */
  { /*    29 */                               FrIfConf_FrIfTxPdu_FrIfTxPdu_SVC,               0UL }   /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/SVC_434514f6_Out/SRC_SVC_434514f6_Out] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_TxIf2Up
**********************************************************************************************************************/
/** 
  \var    PduR_TxIf2Up
  \brief  This table contains all routing information to perform the Tx handling of an interface routing. Used in the &lt;LLIf&gt;_TriggerTransmit and &lt;LLIf&gt;_TxConfirmation
  \details
  Element                       Description
  DestHnd                       handle to be used as parameter for the TxConfirmation or TriggerTransmit function call.
  IfTriggerTransmitFctPtrIdx    the index of the 0:1 relation pointing to PduR_IfTriggerTransmitFctPtr
  IfTxConfirmationFctPtrIdx     the index of the 0:1 relation pointing to PduR_IfTxConfirmationFctPtr
  MaskedBits                    contains bitcoded the boolean data of PduR_IfTriggerTransmitFctPtrUsedOfTxIf2Up, PduR_IfTxConfirmationFctPtrUsedOfTxIf2Up
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(PduR_TxIf2UpType, PDUR_CONST) PduR_TxIf2Up[16] = {
    /* Index    DestHnd                                                       IfTriggerTransmitFctPtrIdx  IfTxConfirmationFctPtrIdx                   MaskedBits        Referable Keys */
  { /*     0 */                         ComConf_ComIPdu_ANFRAGE_434514f6_Out,                        0UL,                                        0UL,      0x03U },  /* [/ActiveEcuC/EcuC/EcucPduCollection/ANFRAGE_434514f6_Out] */
  { /*     1 */    IpduMConf_IpduMTxRequest_pduTr_SVC_A_FlexRay_434514f6_Out,                        1UL,                                        1UL,      0x03U },  /* [/ActiveEcuC/EcuC/EcucPduCollection/SVC_434514f6_Out] */
  { /*     2 */                        ComConf_ComIPdu_AVL_FORC_GRD_23008def,                        0UL, PDUR_NO_IFTXCONFIRMATIONFCTPTRIDXOFTXIF2UP,      0x02U },  /* [/ActiveEcuC/EcuC/EcucPduCollection/pduTr_AVL_FORC_GRD_A_FlexRay_pduPort_EPS_A_FlexRay_OUT_7d601c47_052bff33] */
  { /*     3 */                          ComConf_ComIPdu_AVL_PO_EPS_23008def,                        0UL, PDUR_NO_IFTXCONFIRMATIONFCTPTRIDXOFTXIF2UP,      0x02U },  /* [/ActiveEcuC/EcuC/EcucPduCollection/pduTr_AVL_PO_EPS_A_FlexRay_pduPort_EPS_A_FlexRay_OUT_7d601c47_052bff33] */
  { /*     4 */                    ComConf_ComIPdu_AVL_STMOM_DV_ACT_23008def,                        0UL, PDUR_NO_IFTXCONFIRMATIONFCTPTRIDXOFTXIF2UP,      0x02U },  /* [/ActiveEcuC/EcuC/EcucPduCollection/pduTr_AVL_STMOM_DV_ACT_A_FlexRay_pduPort_EPS_A_FlexRay_OUT_7d601c47_052bff33] */
  { /*     5 */              ComConf_ComIPdu_DBG_EPS_BS_MOD_58_BYTE_23008def,                        0UL, PDUR_NO_IFTXCONFIRMATIONFCTPTRIDXOFTXIF2UP,      0x02U },  /* [/ActiveEcuC/EcuC/EcucPduCollection/pduTr_DBG_EPS_BS_MOD_58_BYTE_A_FlexRay_pduPort_EPS_A_FlexRay_OUT_7d601c47_052bff33] */
  { /*     6 */            ComConf_ComIPdu_DBG_EPS_MOD_EXT_120_BYTE_23008def,                        0UL, PDUR_NO_IFTXCONFIRMATIONFCTPTRIDXOFTXIF2UP,      0x02U },  /* [/ActiveEcuC/EcuC/EcucPduCollection/pduTr_DBG_EPS_MOD_EXT_120_BYTE_A_FlexRay_pduPort_EPS_A_FlexRay_OUT_7d601c47_052bff33] */
  { /*     7 */                         ComConf_ComIPdu_DISP_CC_EPS_23008def,                        0UL,                                        0UL,      0x03U },  /* [/ActiveEcuC/EcuC/EcucPduCollection/pduTr_DISP_CC_EPS_A_FlexRay_pduPort_EPS_A_FlexRay_OUT_7d601c47_052bff33] */
  { /*     8 */                              ComConf_ComIPdu_DT_EST_23008def,                        0UL, PDUR_NO_IFTXCONFIRMATIONFCTPTRIDXOFTXIF2UP,      0x02U },  /* [/ActiveEcuC/EcuC/EcucPduCollection/pduTr_DT_EST_A_FlexRay_pduPort_EPS_A_FlexRay_OUT_7d601c47_052bff33] */
  { /*     9 */                         ComConf_ComIPdu_ENGTORQ_EPS_23008def,                        0UL, PDUR_NO_IFTXCONFIRMATIONFCTPTRIDXOFTXIF2UP,      0x02U },  /* [/ActiveEcuC/EcuC/EcucPduCollection/pduTr_ENGTORQ_EPS_A_FlexRay_pduPort_EPS_A_FlexRay_OUT_7d601c47_052bff33] */
  { /*    10 */ IpduMConf_IpduMTxRequest_pduTr_FR_DBG_EPS_A_FlexRay_7d601c47,                        1UL, PDUR_NO_IFTXCONFIRMATIONFCTPTRIDXOFTXIF2UP,      0x02U },  /* [/ActiveEcuC/EcuC/EcucPduCollection/pduTr_FR_DBG_EPS_A_FlexRay_pduPort_EPS_A_FlexRay_OUT_7d601c47_052bff33] */
  { /*    11 */                         ComConf_ComIPdu_RQ_STG_EFAN_23008def,                        0UL, PDUR_NO_IFTXCONFIRMATIONFCTPTRIDXOFTXIF2UP,      0x02U },  /* [/ActiveEcuC/EcuC/EcucPduCollection/pduTr_RQ_STG_EFAN_A_FlexRay_pduPort_EPS_A_FlexRay_OUT_7d601c47_052bff33] */
  { /*    12 */                           ComConf_ComIPdu_SECU_CHAL_23008def,                        0UL,                                        0UL,      0x03U },  /* [/ActiveEcuC/EcuC/EcucPduCollection/pduTr_SECU_CHAL_A_FlexRay_pduPort_EPS_A_FlexRay_OUT_7d601c47_052bff33] */
  { /*    13 */                  ComConf_ComIPdu_ST_DIAG_OBD_3_DRDY_23008def,                        0UL,                                        0UL,      0x03U },  /* [/ActiveEcuC/EcuC/EcucPduCollection/pduTr_ST_DIAG_OBD_3_DRDY_A_FlexRay_pduPort_EPS_A_FlexRay_OUT_7d601c47_052bff33] */
  { /*    14 */                              ComConf_ComIPdu_ST_EST_23008def,                        0UL,                                        0UL,      0x03U },  /* [/ActiveEcuC/EcuC/EcucPduCollection/pduTr_ST_EST_A_FlexRay_pduPort_EPS_A_FlexRay_OUT_7d601c47_052bff33] */
  { /*    15 */                              ComConf_ComIPdu_SU_EPS_23008def,                        0UL,                                        0UL,      0x03U }   /* [/ActiveEcuC/EcuC/EcucPduCollection/pduTr_SU_EPS_A_FlexRay_pduPort_EPS_A_FlexRay_OUT_7d601c47_052bff33] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_TxTp2Src
**********************************************************************************************************************/
/** 
  \var    PduR_TxTp2Src
  \brief  This table contains all routing information to perform the Tx handling of a transport protocol routing, Used in the &lt;LoTp&gt;_CopyTxData and &lt;LoTp&gt;_TxConfirmation
  \details
  Element                      Description
  TpTxConfirmationFctPtrIdx    the index of the 1:1 relation pointing to PduR_TpTxConfirmationFctPtr
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(PduR_TxTp2SrcType, PDUR_CONST) PduR_TxTp2Src[14] = {
    /* Index    TpTxConfirmationFctPtrIdx        Referable Keys */
  { /*     0 */                       0UL },  /* [/ActiveEcuC/EcuC/EcucPduCollection/PT_TL_ECU_TRNSM_FR_32_00BC0001_RxF0_PP_TL_ECU_TRNSM_FR_32_00BC0001_RxF0_Tx_7d601c47_052bff33] */
  { /*     1 */                       0UL },  /* [/ActiveEcuC/EcuC/EcucPduCollection/PT_TL_ECU_TRNSM_FR_32_00BC0001_RxF1_PP_TL_ECU_TRNSM_FR_32_00BC0001_RxF1_Tx_7d601c47_052bff33] */
  { /*     2 */                       0UL },  /* [/ActiveEcuC/EcuC/EcucPduCollection/PT_TL_ECU_TRNSM_FR_32_00BC0001_RxF2_PP_TL_ECU_TRNSM_FR_32_00BC0001_RxF2_Tx_7d601c47_052bff33] */
  { /*     3 */                       0UL },  /* [/ActiveEcuC/EcuC/EcucPduCollection/PT_TL_ECU_TRNSM_FR_32_00BC0001_RxF3_PP_TL_ECU_TRNSM_FR_32_00BC0001_RxF3_Tx_7d601c47_052bff33] */
  { /*     4 */                       0UL },  /* [/ActiveEcuC/EcuC/EcucPduCollection/PT_TL_ECU_TRNSM_FR_32_00BC0001_RxF4_PP_TL_ECU_TRNSM_FR_32_00BC0001_RxF4_Tx_7d601c47_052bff33] */
  { /*     5 */                       0UL },  /* [/ActiveEcuC/EcuC/EcucPduCollection/PT_TL_ECU_TRNSM_FR_32_00BC0001_RxF5_PP_TL_ECU_TRNSM_FR_32_00BC0001_RxF5_Tx_7d601c47_052bff33] */
  { /*     6 */                       0UL },  /* [/ActiveEcuC/EcuC/EcucPduCollection/PT_TL_ECU_TRNSM_FR_32_00BC0001_RxF6_PP_TL_ECU_TRNSM_FR_32_00BC0001_RxF6_Tx_7d601c47_052bff33] */
  { /*     7 */                       0UL },  /* [/ActiveEcuC/EcuC/EcucPduCollection/PT_TL_ECU_TRNSM_FR_32_00BC0001_RxF7_PP_TL_ECU_TRNSM_FR_32_00BC0001_RxF7_Tx_7d601c47_052bff33] */
  { /*     8 */                       0UL },  /* [/ActiveEcuC/EcuC/EcucPduCollection/PT_TL_ECU_TRNSM_FR_32_00BC0001_RxF8_PP_TL_ECU_TRNSM_FR_32_00BC0001_RxF8_Tx_7d601c47_052bff33] */
  { /*     9 */                       0UL },  /* [/ActiveEcuC/EcuC/EcucPduCollection/PT_TL_ECU_TRNSM_FR_32_00BC0001_RxF9_PP_TL_ECU_TRNSM_FR_32_00BC0001_RxF9_Tx_7d601c47_052bff33] */
  { /*    10 */                       0UL },  /* [/ActiveEcuC/EcuC/EcucPduCollection/PT_TL_ECU_TRNSM_FR_32_00BC0001_RxFA_PP_TL_ECU_TRNSM_FR_32_00BC0001_RxFA_Tx_7d601c47_052bff33] */
  { /*    11 */                       0UL },  /* [/ActiveEcuC/EcuC/EcucPduCollection/PT_TL_ECU_TRNSM_FR_32_00BC0001_RxFB_PP_TL_ECU_TRNSM_FR_32_00BC0001_RxFB_Tx_7d601c47_052bff33] */
  { /*    12 */                       0UL },  /* [/ActiveEcuC/EcuC/EcucPduCollection/PT_TL_ECU_TRNSM_FR_32_00BC0001_RxFC_PP_TL_ECU_TRNSM_FR_32_00BC0001_RxFC_Tx_7d601c47_052bff33] */
  { /*    13 */                       0UL }   /* [/ActiveEcuC/EcuC/EcucPduCollection/PT_TL_ECU_TRNSM_FR_32_00BC0001_RxFD_PP_TL_ECU_TRNSM_FR_32_00BC0001_RxFD_Tx_7d601c47_052bff33] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_Initialized
**********************************************************************************************************************/
/** 
  \var    PduR_Initialized
  \brief  Initialization state of PduR. TRUE, if PduR_Init() has been called, else FALSE
*/ 
#define PDUR_START_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(PduR_InitializedType, PDUR_VAR_ZERO_INIT) PduR_Initialized = FALSE;
#define PDUR_STOP_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA
**********************************************************************************************************************/


/**********************************************************************************************************************
 * LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * LOCAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL FUNCTIONS
**********************************************************************************************************************/
#define PDUR_START_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/* Upper Layer Interface APIs */

/**********************************************************************************************************************
 * PduR_ComTransmit
 *********************************************************************************************************************/
/*!
 * \internal
 * - call upper layer Transmit function. 
 * \endinternal
 *********************************************************************************************************************/
FUNC(Std_ReturnType, PDUR_CODE) PduR_ComTransmit(PduIdType id, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info)
{
  Std_ReturnType retVal = E_NOT_OK;
  
#if (PDUR_TX2LO == STD_ON) /* COV_PDUR_RX_OR_TX_ONLY_CONFIG */
  retVal = PduR_UpTransmit(id, info); /* SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ONLY */
#else
  PduR_Det_ReportError(PDUR_FCT_TX, PDUR_E_INVALID_REQUEST);
#endif

  PDUR_DUMMY_STATEMENT(id);     /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(info);   /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */

  return retVal;
}


/**********************************************************************************************************************
 * PduR_IpduMTransmit
 *********************************************************************************************************************/
/*!
 * \internal
 * - call upper layer Transmit function. 
 * \endinternal
 *********************************************************************************************************************/
FUNC(Std_ReturnType, PDUR_CODE) PduR_IpduMTransmit(PduIdType id, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info)
{
  Std_ReturnType retVal = E_NOT_OK;
  
#if (PDUR_TX2LO == STD_ON) /* COV_PDUR_RX_OR_TX_ONLY_CONFIG */
  retVal = PduR_UpTransmit(id, info); /* SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ONLY */
#else
  PduR_Det_ReportError(PDUR_FCT_TX, PDUR_E_INVALID_REQUEST);
#endif

  PDUR_DUMMY_STATEMENT(id);     /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(info);   /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */

  return retVal;
}


/**********************************************************************************************************************
 * PduR_DcmTransmit
 *********************************************************************************************************************/
/*!
 * \internal
 * - call upper layer Transmit function. 
 * \endinternal
 *********************************************************************************************************************/
FUNC(Std_ReturnType, PDUR_CODE) PduR_DcmTransmit(PduIdType id, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info)
{
  Std_ReturnType retVal = E_NOT_OK;
  
#if (PDUR_TX2LO == STD_ON) /* COV_PDUR_RX_OR_TX_ONLY_CONFIG */
  retVal = PduR_UpTransmit(id, info); /* SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ONLY */
#else
  PduR_Det_ReportError(PDUR_FCT_TX, PDUR_E_INVALID_REQUEST);
#endif

  PDUR_DUMMY_STATEMENT(id);     /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(info);   /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */

  return retVal;
}


/* Communication Interface APIs */

/**********************************************************************************************************************
 * PduR_FrIfRxIndication
 *********************************************************************************************************************/
/*!
 * \internal
 * -  call internal general IfRxIndication function.  
 * \endinternal
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_FrIfRxIndication(PduIdType RxPduId, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info) /* COV_PDUR_WRAPPER_FUNC */
{
#if (PDUR_RXIF2DEST == STD_ON) /* COV_PDUR_RX_OR_TX_ONLY_CONFIG */
  PduR_LoIfRxIndication(RxPduId, info); /* SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ONLY */
#else
  PduR_Det_ReportError(PDUR_FCT_IFRXIND, PDUR_E_INVALID_REQUEST);
#endif
  PDUR_DUMMY_STATEMENT(RxPduId);        /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(info);   /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
}


/**********************************************************************************************************************
 * PduR_FrIfTxConfirmation
 *********************************************************************************************************************/
/*!
 * \internal
 * - call internal general communication interface TxConfirmation function.
 * \endinternal
 *********************************************************************************************************************/
/* PRQA S 6080 PDUR_LLIF_TXCONFIRMATION */ /* MD_MSR_STMIF */
FUNC(void, PDUR_CODE) PduR_FrIfTxConfirmation(PduIdType TxPduId) /* COV_PDUR_WRAPPER_FUNC */
{
  PduR_LoIfTxConfirmation(TxPduId); /* SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ONLY */
}



/**********************************************************************************************************************
 * PduR_IpduMRxIndication
 *********************************************************************************************************************/
/*!
 * \internal
 * -  call internal general IfRxIndication function.  
 * \endinternal
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_IpduMRxIndication(PduIdType RxPduId, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info) /* COV_PDUR_WRAPPER_FUNC */
{
#if (PDUR_RXIF2DEST == STD_ON) /* COV_PDUR_RX_OR_TX_ONLY_CONFIG */
  PduR_LoIfRxIndication(RxPduId, info); /* SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ONLY */
#else
  PduR_Det_ReportError(PDUR_FCT_IFRXIND, PDUR_E_INVALID_REQUEST);
#endif
  PDUR_DUMMY_STATEMENT(RxPduId);        /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(info);   /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
}


/**********************************************************************************************************************
 * PduR_IpduMTxConfirmation
 *********************************************************************************************************************/
/*!
 * \internal
 * - call internal general communication interface TxConfirmation function.
 * \endinternal
 *********************************************************************************************************************/
/* PRQA S 6080 PDUR_LLIF_TXCONFIRMATION */ /* MD_MSR_STMIF */
FUNC(void, PDUR_CODE) PduR_IpduMTxConfirmation(PduIdType TxPduId) /* COV_PDUR_WRAPPER_FUNC */
{
  PduR_LoIfTxConfirmation(TxPduId); /* SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ONLY */
}




/**********************************************************************************************************************
 * PduR_FrIfTriggerTransmit
 *********************************************************************************************************************/
/*!
 * \internal
 * - call internal general TriggerTransmit function.  
 * \endinternal
 *********************************************************************************************************************/
FUNC(Std_ReturnType, PDUR_CODE) PduR_FrIfTriggerTransmit(PduIdType TxPduId, P2VAR(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info)
{
  return PduR_LoIfTriggerTransmit(TxPduId, info); /* SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ONLY */
}


/**********************************************************************************************************************
 * PduR_IpduMTriggerTransmit
 *********************************************************************************************************************/
/*!
 * \internal
 * - call internal general TriggerTransmit function.  
 * \endinternal
 *********************************************************************************************************************/
FUNC(Std_ReturnType, PDUR_CODE) PduR_IpduMTriggerTransmit(PduIdType TxPduId, P2VAR(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info)
{
  return PduR_LoIfTriggerTransmit(TxPduId, info); /* SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ONLY */
}


/* Transport Protocol APIs */

/**********************************************************************************************************************
 * PduR_FrTpStartOfReception
 *********************************************************************************************************************/
 /*!
 * \internal
 * - call transport protocoll StartOfReception function.  
 * \endinternal
 *********************************************************************************************************************/
FUNC(BufReq_ReturnType, PDUR_CODE) PduR_FrTpStartOfReception(PduIdType id, P2VAR(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info, PduLengthType TpSduLength, P2VAR(PduLengthType, AUTOMATIC, PDUR_APPL_DATA) bufferSizePtr) /* COV_PDUR_WRAPPER_FUNC */
{
  BufReq_ReturnType retVal = BUFREQ_E_NOT_OK;

#if (PDUR_RXTP2DEST == STD_ON) /* COV_PDUR_RX_OR_TX_ONLY_CONFIG */
  retVal = PduR_LoTpStartOfReception(id, info, TpSduLength, bufferSizePtr); /* SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ONLY */
#else
  PduR_Det_ReportError(PDUR_FCT_SOR, PDUR_E_INVALID_REQUEST);
#endif

  PDUR_DUMMY_STATEMENT(id);     /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(info);   /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(TpSduLength);    /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(bufferSizePtr);  /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */

  return retVal;
}


/**********************************************************************************************************************
 * PduR_FrTpCopyRxData
 *********************************************************************************************************************/
/*!
 * \internal
 * - call internal general CopyRxData.
 * \endinternal
 *********************************************************************************************************************/
/* PRQA S 3673 1 */ /* MD_PduR_3673_AsrProto */
FUNC(BufReq_ReturnType, PDUR_CODE) PduR_FrTpCopyRxData(PduIdType id, P2VAR(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info, P2VAR(PduLengthType, AUTOMATIC, PDUR_APPL_DATA) bufferSizePtr) /* COV_PDUR_WRAPPER_FUNC */
{
  BufReq_ReturnType retVal = BUFREQ_E_NOT_OK;
  
#if (PDUR_RXTP2DEST == STD_ON) /* COV_PDUR_RX_OR_TX_ONLY_CONFIG */
  retVal = PduR_LoTpCopyRxData(id, info, bufferSizePtr); /* SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ONLY */
#else
  PduR_Det_ReportError(PDUR_FCT_CPYRX, PDUR_E_INVALID_REQUEST);
#endif

  PDUR_DUMMY_STATEMENT(id);     /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(info);   /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(bufferSizePtr);  /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  
  return retVal;
}


/**********************************************************************************************************************
 * PduR_FrTpCopyTxData
 *********************************************************************************************************************/
/*!
 * \internal
 * - call internal general CopyTxData.
 * \endinternal
 *********************************************************************************************************************/
FUNC(BufReq_ReturnType, PDUR_CODE) PduR_FrTpCopyTxData(PduIdType id, P2VAR(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info, P2VAR(RetryInfoType, AUTOMATIC, PDUR_APPL_DATA) retry, P2VAR(PduLengthType, AUTOMATIC, PDUR_APPL_DATA) availableDataPtr) /* COV_PDUR_WRAPPER_FUNC */
{
  BufReq_ReturnType retVal = BUFREQ_E_NOT_OK;
  
#if(PDUR_TXTP2SRC == STD_ON) /* COV_PDUR_RX_OR_TX_ONLY_CONFIG */
  retVal = PduR_LoTpCopyTxData(id, info, retry, availableDataPtr); /* SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ONLY */
#else
  PduR_Det_ReportError(PDUR_FCT_CPYTX, PDUR_E_INVALID_REQUEST);
#endif

  PDUR_DUMMY_STATEMENT(id);     /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(info);   /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(retry);  /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(availableDataPtr);       /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  
  return retVal;
}


/**********************************************************************************************************************
 * PduR_FrTpRxIndication
 *********************************************************************************************************************/
/*!
 * \internal
 * - call Tp RxIndication function.
 * \endinternal
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_FrTpRxIndication(PduIdType id, Std_ReturnType result) /* COV_PDUR_WRAPPER_FUNC */
{
#if (PDUR_RXTP2DEST == STD_ON) /* COV_PDUR_RX_OR_TX_ONLY_CONFIG */
  PduR_LoTpRxIndication(id, result); /* SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ONLY */
#else
  PduR_Det_ReportError(PDUR_FCT_TPRXIND, PDUR_E_INVALID_REQUEST);
#endif

  PDUR_DUMMY_STATEMENT(id);     /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(result); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
}


/**********************************************************************************************************************
 * PduR_FrTpTxConfirmation
 *********************************************************************************************************************/
/*!
 * \internal
 * - call Tp TxConfirmation function 
 * \endinternal
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_FrTpTxConfirmation(PduIdType id, Std_ReturnType result) /* COV_PDUR_WRAPPER_FUNC */
{
#if (PDUR_TXTP2SRC == STD_ON) /* COV_PDUR_RX_OR_TX_ONLY_CONFIG */
  PduR_LoTpTxConfirmation(id, result); /* SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ONLY */
#else
  PduR_Det_ReportError(PDUR_FCT_TPTXCFM, PDUR_E_INVALID_REQUEST);
#endif

  PDUR_DUMMY_STATEMENT(id);     /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(result); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
}


/* CancelReceive global without UseTag API */

/* ChangeParameter global without UseTag  API */

/* Communication Interface / Transport Protocol APIs */

/* Communication Interface / Transport Protocol APIs */

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL FUNCTIONS
**********************************************************************************************************************/


#define PDUR_STOP_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/* SBSW_JUSTIFICATION_BEGIN

  \ID SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ID_AND_PTR
    \DESCRIPTION    The API is called with an Id and a pointer.
                    The API call is forwarded using a function pointer which is read using ComStackLib macros.
                    
    \COUNTERMEASURE \N The function pointer is read using the passed Id (and ComStackLib macros). 
                       The Id is a SNV provided by the lower layer. 
                       It is checked at runtime if it is in the valid range.
                       The pointer is provided by the lower layer and is assumed to be valid. It is passed as is to the corresponding function. 

  \ID SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ID_ONLY
    \DESCRIPTION    The API is called with an Id.
                    The API call is forwarded using a function pointer which is read using ComStackLib macros.
                    
    \COUNTERMEASURE \R The function pointer is read using the passed Id (and ComStackLib macros). 
                       The Id is a SNV provided by the lower layer. 
                       It is checked at runtime if it is in the valid range.
                       
  \ID SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ONLY
    \DESCRIPTION    The API call is forwarded to an internal function.
    \COUNTERMEASURE \N The parameter are checked in the called function.

 SBSW_JUSTIFICATION_END */
 
 /* COV_JUSTIFICATION_BEGIN
 
  \ID COV_PDUR_WRAPPER_FUNC
    \ACCEPT X
    \REASON Each neighbouring module call the same internal function. The call is covered by an other module. 
    
  \ID COV_PDUR_RX_OR_TX_ONLY_CONFIG
    \ACCEPT TX
    \REASON The API is mandatory if this Bsw module exists. In case of Rx or Tx only configs the API call is not forwarded to the internal function. 
 
 COV_JUSTIFICATION_END */
 

/**********************************************************************************************************************
 * END OF FILE: PduR_Lcfg.c
 *********************************************************************************************************************/

