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
 *              File: FrIf_LCfg.c
 *   Generation Time: 2018-01-02 16:37:32
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


#define FRIF_LCFG_SOURCE

/* -----------------------------------------------------------------------------
    &&&~ Includes
 ----------------------------------------------------------------------------- */
 
 #include "FrIf_Priv.h"
 #include "FrTp_Cbk.h"
 
 #include "PduR_FrIf.h"
 #include "FrXcp_Cbk.h"
 
  

 /* -----------------------------------------------------------------------------
    &&&~ Constants and Variables
 ----------------------------------------------------------------------------- */


#define FRIF_START_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

static VAR(FrIf_NumberOfPduType, FRIF_VAR_NOINIT) FrIf_TxPduWasSentFlags_0[24];
static VAR(uint32, FRIF_VAR_NOINIT) FrIf_FrameBuffer_0[64];
static VAR(uint8, FRIF_VAR_NOINIT) FrIf_TxPduDirtyBits_0[3];
static VAR(uint8, FRIF_VAR_NOINIT) FrIf_TxPduTxRequestCounters_0[1];

#define FRIF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/* -----------------------------------------------------------------------------
    &&&~ TriggerTransmit
 ----------------------------------------------------------------------------- */


#ifndef PDUR_FRIFTRIGGERTRANSMIT
#define PDUR_FRIFTRIGGERTRANSMIT                PduR_FrIfTriggerTransmit
#endif
#ifndef FRNM_TRIGGERTRANSMIT					 
/* PRQA S 3453 1 */ /* MD_MSR_19.7 */
#define FRNM_TRIGGERTRANSMIT(PduId, Payload)	E_NOT_OK
#endif
#ifndef FRTP_TRIGGERTRANSMIT
#define FRTP_TRIGGERTRANSMIT                    FrTp_TriggerTransmit
#endif
#ifndef FRXCP_TRIGGERTRANSMIT
#define FRXCP_TRIGGERTRANSMIT                   Xcp_FrIfTriggerTransmit
#endif
#ifndef FRTSYN_TRIGGERTRANSMIT					 
/* PRQA S 3453 1 */ /* MD_MSR_19.7 */
#define FRTSYN_TRIGGERTRANSMIT(PduId, Payload)	E_NOT_OK
#endif
#ifndef FRARTP_TRIGGERTRANSMIT					 
/* PRQA S 3453 1 */ /* MD_MSR_19.7 */
#define FRARTP_TRIGGERTRANSMIT(PduId, Payload)	E_NOT_OK
#endif


/* -----------------------------------------------------------------------------
    &&&~ Rx Indication
 ----------------------------------------------------------------------------- */

#ifndef PDUR_FRIFRXINDICATION
#define PDUR_FRIFRXINDICATION				PduR_FrIfRxIndication
#endif
#ifndef FRNM_RXINDICATION					 
/* PRQA S 3453 1 */ /* MD_MSR_19.7 */
#define FRNM_RXINDICATION(PduId, Payload)
#endif
#ifndef FRTP_RXINDICATION
#define FRTP_RXINDICATION					FrTp_RxIndication
#endif
#ifndef FRXCP_RXINDICATION
#define FRXCP_RXINDICATION					Xcp_FrIfRxIndication
#endif
#ifndef FRTSYN_RXINDICATION					 
/* PRQA S 3453 1 */ /* MD_MSR_19.7 */
#define FRTSYN_RXINDICATION(PduId, Payload)
#endif
#ifndef FRARTP_RXINDICATION					 
/* PRQA S 3453 1 */ /* MD_MSR_19.7 */
#define FRARTP_RXINDICATION(PduId, Payload)
#endif


/* -----------------------------------------------------------------------------
    &&&~ Tx Confirmation
 ----------------------------------------------------------------------------- */


#ifndef PDUR_FRIFTXCONFIRMATION
#define PDUR_FRIFTXCONFIRMATION                 PduR_FrIfTxConfirmation
#endif
#ifndef FRNM_TXCONFIRMATION
/* PRQA S 3453 1 */ /* MD_MSR_19.7 */
#define FRNM_TXCONFIRMATION(PduId)
#endif
#ifndef FRTP_TXCONFIRMATION
#define FRTP_TXCONFIRMATION                     FrTp_TxConfirmation
#endif
#ifndef FRXCP_TXCONFIRMATION
#define FRXCP_TXCONFIRMATION                    Xcp_FrIfTxConfirmation
#endif
#ifndef FRARTP_TXCONFIRMATION
/* PRQA S 3453 1 */ /* MD_MSR_19.7 */
#define FRARTP_TXCONFIRMATION(PduId)
#endif

#define FRIF_START_SEC_CONST_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


/* -----------------------------------------------------------------------------
    &&&~ FrTransceiver function arrays
 ----------------------------------------------------------------------------- */

#define FRIF_STOP_SEC_CONST_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

#define FRIF_START_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/**********************************************************************************************************************
  FrIf_CheckChannelStatus()
**********************************************************************************************************************/
/*! \brief       
 *  \details     
 *  \pre         
 *  \context     
 *  \reentrant   
 *  \synchronous 
 *********************************************************************************************************************/

FUNC(void, FRIF_CODE) FrIf_CheckChannelStatus(uint8 ClstIdx, Fr_ChannelType FrChannel, uint16 ChannelStatus)
{
# if (FRIF_PROD_ERROR_DETECT == STD_ON)
  Dem_EventIdType ErrorId_Acs = 0;
  Dem_EventIdType ErrorId_Nit = 0;
  Dem_EventIdType ErrorId_Sw = 0;



  if (1 /* Bit0: (vSS!ValidFrame) */ >= ChannelStatus) /* ESCAN00066846 */
  {
    if (ErrorId_Acs != 0) /* PRQA S 3356, 3359 */ /* MD_FrIf_3356 */
    { /* PRQA S 3201 1 */ /* MD_MSR_14.1 */ /*lint -e{506} */    
      Dem_ReportErrorStatus(ErrorId_Acs, DEM_EVENT_STATUS_PASSED);
    }
    if (ErrorId_Nit != 0) /* PRQA S 3356, 3359 */ /* MD_FrIf_3356 */
    { /* PRQA S 3201 1 */ /* MD_MSR_14.1 */ /*lint -e{506} */    
      Dem_ReportErrorStatus(ErrorId_Nit, DEM_EVENT_STATUS_PASSED);
    }
    if (ErrorId_Sw != 0) /* PRQA S 3356, 3359 */ /* MD_FrIf_3356 */
    { /* PRQA S 3201 1 */ /* MD_MSR_14.1 */ /*lint -e{506} */    
      Dem_ReportErrorStatus(ErrorId_Sw, DEM_EVENT_STATUS_PASSED);
    }
  }
  else
  {
    if (ErrorId_Nit != 0) /* PRQA S 3356, 3359 */ /* MD_FrIf_3356 */
    { /* PRQA S 3201 1 */ /* MD_MSR_14.1 */ /*lint -e{506} */    
      /* FRIF_E_NIT */
      if (   ((ChannelStatus & FRIF_NIT_SYNTAX_ERROR) == FRIF_NIT_SYNTAX_ERROR )
          || ((ChannelStatus & FRIF_NIT_B_VIOLATION)  == FRIF_NIT_B_VIOLATION  )
         ) 
      {
        /* \trace SPEC-30130, SPEC-30035 */
        Dem_ReportErrorStatus(ErrorId_Nit, DEM_EVENT_STATUS_FAILED);
      }
    }
    
    if (ErrorId_Sw != 0) /* PRQA S 3356, 3359 */ /* MD_FrIf_3356 */
    { /* PRQA S 3201 1 */ /* MD_MSR_14.1 */ /*lint -e{506} */    
      /* FRIF_E_SW */
      if (   ((ChannelStatus & FRIF_SW_SYNTAX_ERROR) == FRIF_SW_SYNTAX_ERROR)
          || ((ChannelStatus & FRIF_SW_B_VIOLATION)  == FRIF_SW_B_VIOLATION )
          || ((ChannelStatus & FRIF_SW_TX_CONFLICT)  == FRIF_SW_TX_CONFLICT )
         )
      {
        /* \trace SPEC-30084, SPEC-29889 */
        Dem_ReportErrorStatus(ErrorId_Sw, DEM_EVENT_STATUS_FAILED);
      }
    }
    
    if (ErrorId_Acs != 0) /* PRQA S 3356, 3359 */ /* MD_FrIf_3356 */
    { /* PRQA S 3201 1 */ /* MD_MSR_14.1 */ /*lint -e{506} */    
      /* FRIF_E_ACS */
      if (   ((ChannelStatus & FRIF_ACS_SYNTAX_ERROR) == FRIF_ACS_SYNTAX_ERROR ) 
          || ((ChannelStatus & FRIF_ACS_CONTENT_ERROR)== FRIF_ACS_CONTENT_ERROR) 
          || ((ChannelStatus & FRIF_ACS_B_VIOLATION)  == FRIF_ACS_B_VIOLATION  )  
          || ((ChannelStatus & FRIF_ACS_TX_CONFLICT)  == FRIF_ACS_TX_CONFLICT  )
         ) 
      {
        /* \trace SPEC-29861, SPEC-29933 */
        Dem_ReportErrorStatus(ErrorId_Acs, DEM_EVENT_STATUS_FAILED);
      }
    }
  }
#else
  FRIF_DUMMY_STATEMENT(ClstIdx);       /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
  FRIF_DUMMY_STATEMENT(FrChannel);     /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
  FRIF_DUMMY_STATEMENT(ChannelStatus); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#endif  
} /* FrIf_CheckChannelStatus() */ /* PRQA S 6010, 6030 */ /* MD_MSR_STPTH, MD_MSR_STCYC */

/* -----------------------------------------------------------------------------
    &&&~ upperlayer wrapper functions
 ----------------------------------------------------------------------------- */

FUNC(Std_ReturnType,FRIF_CODE) FrIf_TriggerTransmitFunctions(uint8 PduOwner, PduIdType FrTxPduId, P2VAR(uint8, AUTOMATIC, FRIF_VAR_NOINIT) Payload, P2VAR(PduLengthType, AUTOMATIC, FRIF_VAR_NOINIT) Length)
{
    Std_ReturnType Result = E_OK;
    PduInfoType PduInfo;
    PduInfo.SduDataPtr = (uint8*) Payload;
    PduInfo.SduLength = *Length;

    switch(PduOwner)
    {
        /* PRQA S 3109 TRIGTRANSMIT */ /* MD_MSR_14.3 */
        case 0: Result = PDUR_FRIFTRIGGERTRANSMIT(FrTxPduId, &PduInfo); break;         /* SBSW_FRIF_FCT_CALL_PTR2PDUINFO */
        case 1: Result = FRNM_TRIGGERTRANSMIT(FrTxPduId, &PduInfo); break;             /* SBSW_FRIF_FCT_CALL_PTR2PDUINFO */
        case 2: Result = FRTP_TRIGGERTRANSMIT(FrTxPduId, &PduInfo); break;             /* SBSW_FRIF_FCT_CALL_PTR2PDUINFO */
        case 3: Result = FRXCP_TRIGGERTRANSMIT(FrTxPduId, &PduInfo); break;            /* SBSW_FRIF_FCT_CALL_PTR2PDUINFO */
        case 4: Result = E_NOT_OK; break; /* Pdu with PduOwner 'None' -> return E_NOT_OK to prevent Pdu transmission (do nothing) */
        case 5: Result = FRTSYN_TRIGGERTRANSMIT(FrTxPduId, &PduInfo); break;           /* SBSW_FRIF_FCT_CALL_PTR2PDUINFO */
        case 6: Result = FRARTP_TRIGGERTRANSMIT(FrTxPduId, &PduInfo); break;           /* SBSW_FRIF_FCT_CALL_PTR2PDUINFO */
        default: (void) Det_ReportError(FRIF_MODULE_ID,0, FRIF_SID_TRIGGER_TRANSMIT_FCTS, FRIF_E_INVALID_PDU_OWNER); Result = E_NOT_OK;
        /* PRQA L:TRIGTRANSMIT *//* MD_MSR_14.3 */
    }
    if (Result == E_OK)
    {
        if (PduInfo.SduLength > *Length)
        {
            Result = E_NOT_OK; /* UL returned invalid SduLength - this case should be never entered! (note: this check is only performed if DET is enabled) */
        }
    }
    *Length = PduInfo.SduLength;                                                        /* SBSW_FRIF_PTR_WRT_UNCHANGED */
    return Result;
} /* FrIf_TriggerTransmitFunctions() */ /* PRQA S 6030 */ /* MD_MSR_STCYC */

FUNC(void,FRIF_CODE) FrIf_TxConfirmationFunctions(uint8 PduOwner, PduIdType FrTxPduId)
{
    switch(PduOwner)
    {
        /* PRQA S 3109 TXCONF */ /* MD_MSR_14.3 */
        case 0: PDUR_FRIFTXCONFIRMATION(FrTxPduId); break;
        case 1: FRNM_TXCONFIRMATION(FrTxPduId); break;
        case 2: FRTP_TXCONFIRMATION(FrTxPduId); break;
        case 3: FRXCP_TXCONFIRMATION(FrTxPduId); break;
        case 4: break; /* Pdu with PduOwner 'None' -> do nothing */
        case 5: break; /* Pdu with PduOwner 'FrTSyn' -> do nothing */
        case 6: FRARTP_TXCONFIRMATION(FrTxPduId); break;
        default: (void) Det_ReportError(FRIF_MODULE_ID,0, FRIF_SID_TX_CONFIRMATION_FCTS, FRIF_E_INVALID_PDU_OWNER); break;
        /* PRQA L:TXCONF *//* MD_MSR_14.3 */
    }
} /* FrIf_TxConfirmationFunctions() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */

FUNC(void,FRIF_CODE) FrIf_RxIndicationFunctions(uint8 PduOwner, PduIdType FrRxPduId, P2VAR(uint8, AUTOMATIC, FRIF_VAR_NOINIT) Payload, PduLengthType Length)
{
    PduInfoType PduInfo;
    PduInfo.SduDataPtr = (uint8*) Payload;
     PduInfo.SduLength = Length;

    switch(PduOwner)
    {
        /* PRQA S 3109 RXINDICATE */ /* MD_MSR_14.3 */
        case 0: PDUR_FRIFRXINDICATION(FrRxPduId, &PduInfo); break;                     /* SBSW_FRIF_FCT_CALL_PTR2PDUINFO */
        case 1: FRNM_RXINDICATION(FrRxPduId, &PduInfo); break;                         /* SBSW_FRIF_FCT_CALL_PTR2PDUINFO */
        case 2: FRTP_RXINDICATION(FrRxPduId, &PduInfo); break;                         /* SBSW_FRIF_FCT_CALL_PTR2PDUINFO */
        case 3: FRXCP_RXINDICATION(FrRxPduId, &PduInfo); break;                        /* SBSW_FRIF_FCT_CALL_PTR2PDUINFO */
        case 4: break; /* Pdu with PduOwner 'None' -> do nothing */
        case 5: FRTSYN_RXINDICATION(FrRxPduId, &PduInfo); break;                       /* SBSW_FRIF_FCT_CALL_PTR2PDUINFO */
        case 6: FRARTP_RXINDICATION(FrRxPduId, &PduInfo); break;                       /* SBSW_FRIF_FCT_CALL_PTR2PDUINFO */
        default: (void) Det_ReportError(FRIF_MODULE_ID,0, FRIF_SID_RX_INDICATION_FCTS, FRIF_E_INVALID_PDU_OWNER); break;
        /* PRQA L:RXINDICATE *//* MD_MSR_14.3 */
    }
} /* FrIf_RxIndicationFunctions() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */

#define FRIF_STOP_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

#define FRIF_START_SEC_CONST_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


/* -----------------------------------------------------------------------------
    &&&~ Tx PDU Translation Table
 ----------------------------------------------------------------------------- */

CONST(FrIf_TxPduTranslationTupleType, FRIF_CONST) FrIf_TxPduTranslationTable[] =
{
  {0U, 0U} /*  FrIfTxPdu_FR_DBG_EPS, TX INVALID HANDLE  */ , 
  {1U, 0U} /*  FrIfTxPdu_xcpdynamic254_8, TX INVALID HANDLE  */ , 
  {2U, 0U} /*  FrIfTxPdu_xcpdynamic254_7, TX INVALID HANDLE  */ , 
  {3U, 0U} /*  FrIfTxPdu_xcpdynamic254_6, TX INVALID HANDLE  */ , 
  {4U, 0U} /*  FrIfTxPdu_xcpdynamic254_5, TX INVALID HANDLE  */ , 
  {5U, 0U} /*  FrIfTxPdu_xcpdynamic254_4, TX INVALID HANDLE  */ , 
  {6U, 0U} /*  FrIfTxPdu_xcpdynamic254_3, TX INVALID HANDLE  */ , 
  {7U, 0U} /*  FrIfTxPdu_xcpdynamic254_2, TX INVALID HANDLE  */ , 
  {8U, 0U} /*  FrIfTxPdu_xcpdynamic254_1, TX INVALID HANDLE  */ , 
  {9U, 0U} /*  FrIfTxPdu_DISP_CC_EPS, TX INVALID HANDLE  */ , 
  {10U, 0U} /*  FrIfTxPdu_SU_EPS, TX INVALID HANDLE  */ , 
  {11U, 0U} /*  FrIfTxPdu_ST_DIAG_OBD_3_DRDY, TX INVALID HANDLE  */ , 
  {12U, 0U} /*  FrIfTxPdu_ST_EST, TX INVALID HANDLE  */ , 
  {13U, 0U} /*  FrIfTxPdu_dummy32bslave, TX INVALID HANDLE  */ , 
  {14U, 0U} /*  FrIfTxPdu_SVC, TX INVALID HANDLE  */ , 
  {15U, 0U} /*  FrIfTxPdu_TL_ECU_TRNSM_FR_32, TX INVALID HANDLE  */ , 
  {16U, 0U} /*  FrIfTxPdu_AVL_PO_EPS, TX INVALID HANDLE  */ , 
  {17U, 0U} /*  FrIfTxPdu_ENGTORQ_EPS, TX INVALID HANDLE  */ , 
  {18U, 0U} /*  FrIfTxPdu_DT_EST, TX INVALID HANDLE  */ , 
  {19U, 0U} /*  FrIfTxPdu_AVL_STMOM_DV_ACT, TX INVALID HANDLE  */ , 
  {20U, 0U} /*  FrIfTxPdu_AVL_FORC_GRD, TX INVALID HANDLE  */ , 
  {21U, 0U} /*  FrIfTxPdu_dummy16bstatic, TX INVALID HANDLE  */ 
};

/* -----------------------------------------------------------------------------
    &&&~ Tx Pdu Descriptors
 ----------------------------------------------------------------------------- */
 
static CONST(FrIf_TxPduDescriptorType, FRIF_CONST) FrIf_TxPduDescriptors_0[] = 
{
  {0UL, PduRConf_PduRDestPdu_DST_Fr_pduTr_FR_DBG_EPS_A_FlexRay_7d601c47, 58U, 0x00U} /*  FR_DBG_EPS, Index: 0, FrIfTxPduId: 0  */ , 
  {0UL, XcpConf_XcpTxPdu_xcpdynamic254_8_23008def, 254U, 0x13U} /*  xcpdynamic254_8, Index: 1, FrIfTxPduId: 1  */ , 
  {0UL, XcpConf_XcpTxPdu_xcpdynamic254_7_23008def, 254U, 0x13U} /*  xcpdynamic254_7, Index: 2, FrIfTxPduId: 2  */ , 
  {0UL, XcpConf_XcpTxPdu_xcpdynamic254_6_23008def, 254U, 0x13U} /*  xcpdynamic254_6, Index: 3, FrIfTxPduId: 3  */ , 
  {0UL, XcpConf_XcpTxPdu_xcpdynamic254_5_23008def, 254U, 0x13U} /*  xcpdynamic254_5, Index: 4, FrIfTxPduId: 4  */ , 
  {0UL, XcpConf_XcpTxPdu_xcpdynamic254_4_23008def, 254U, 0x13U} /*  xcpdynamic254_4, Index: 5, FrIfTxPduId: 5  */ , 
  {0UL, XcpConf_XcpTxPdu_xcpdynamic254_3_23008def, 254U, 0x13U} /*  xcpdynamic254_3, Index: 6, FrIfTxPduId: 6  */ , 
  {0UL, XcpConf_XcpTxPdu_xcpdynamic254_2_23008def, 254U, 0x13U} /*  xcpdynamic254_2, Index: 7, FrIfTxPduId: 7  */ , 
  {0UL, XcpConf_XcpTxPdu_xcpdynamic254_1_23008def, 254U, 0x13U} /*  xcpdynamic254_1, Index: 8, FrIfTxPduId: 8  */ , 
  {0UL, PduRConf_PduRDestPdu_DST_Fr_pduTr_DISP_CC_EPS_A_FlexRay_7d601c47, 5U, 0x10U} /*  DISP_CC_EPS, Index: 9, FrIfTxPduId: 9  */ , 
  {0UL, PduRConf_PduRDestPdu_DST_Fr_pduTr_SU_EPS_A_FlexRay_7d601c47, 8U, 0x10U} /*  SU_EPS, Index: 10, FrIfTxPduId: 10  */ , 
  {0UL, PduRConf_PduRDestPdu_DST_Fr_pduTr_ST_DIAG_OBD_3_DRDY_A_FlexRay_7d601c47, 8U, 0x10U} /*  ST_DIAG_OBD_3_DRDY, Index: 11, FrIfTxPduId: 11  */ , 
  {0UL, PduRConf_PduRDestPdu_DST_Fr_pduTr_ST_EST_A_FlexRay_7d601c47, 5U, 0x10U} /*  ST_EST, Index: 12, FrIfTxPduId: 12  */ , 
  {0UL, XcpConf_XcpTxPdu_dummy32bslave_23008def, 32U, 0x13U} /*  dummy32bslave, Index: 13, FrIfTxPduId: 13  */ , 
  {0UL, PduRConf_PduRDestPdu_DST_SVC_434514f6_Out, 8U, 0x10U} /*  SVC_Out, Index: 14, FrIfTxPduId: 14  */ , 
  {0UL, FrTpConf_FrTpTxPdu_TxPduPool_TL_ECU_TRNSM_FR_32_00BC0001_Tp, 32U, 0x12U} /*  TL_ECU_TRNSM_FR_32, Index: 15, FrIfTxPduId: 15  */ , 
  {0UL, PduRConf_PduRDestPdu_DST_Fr_pduTr_AVL_PO_EPS_A_FlexRay_7d601c47, 8U, 0x00U} /*  AVL_PO_EPS, Index: 16, FrIfTxPduId: 16  */ , 
  {0UL, PduRConf_PduRDestPdu_DST_Fr_pduTr_ENGTORQ_EPS_A_FlexRay_7d601c47, 8U, 0x00U} /*  ENGTORQ_EPS, Index: 17, FrIfTxPduId: 17  */ , 
  {0UL, PduRConf_PduRDestPdu_DST_Fr_pduTr_DT_EST_A_FlexRay_7d601c47, 16U, 0x00U} /*  DT_EST, Index: 18, FrIfTxPduId: 18  */ , 
  {0UL, PduRConf_PduRDestPdu_DST_Fr_pduTr_AVL_STMOM_DV_ACT_A_FlexRay_7d601c47, 4U, 0x00U} /*  AVL_STMOM_DV_ACT, Index: 19, FrIfTxPduId: 19  */ , 
  {0UL, PduRConf_PduRDestPdu_DST_Fr_pduTr_AVL_FORC_GRD_A_FlexRay_7d601c47, 5U, 0x00U} /*  AVL_FORC_GRD, Index: 20, FrIfTxPduId: 20  */ , 
  {0UL, XcpConf_XcpTxPdu_dummy16bstatic_23008def, 16U, 0x13U} /*  dummy16bstatic, Index: 21, FrIfTxPduId: 21  */ 
};

/* -----------------------------------------------------------------------------
    &&&~ Tx Frame Layout Elements
 ----------------------------------------------------------------------------- */

static CONST(FrIf_FrameLayoutElementType, FRIF_CONST) FrIf_TxFrameLayoutElements_0[] = 
{
  {0UL, 0U, 0U, 0x00U} /*  sn_6b68fdbc63d54758bff55913fcd344ba_5_43f7a9daf64d4ee7b94a0fd106743903_5  */ , 
  {1UL, 0U, 0U, 0x00U} /*  sn_ED55EE5E9A8836A4E0402EA019872B37_1_ED55FD352928D633E0402EA019872B44_1  */ , 
  {2UL, 0U, 0U, 0x00U} /*  sn_ED55EE5E9A7A36A4E0402EA019872B37_1_ED55EF63738BA24EE0402EA019872B3F_1  */ , 
  {3UL, 0U, 0U, 0x00U} /*  sn_ED55D568B7B7E932E0402EA019874AD0_1_ED55DDBF3F3F1652E0402EA01987662B_1  */ , 
  {4UL, 0U, 0U, 0x00U} /*  sn_ED55AF29C9332294E0402EA019874515_1_ED55D568B7B1E932E0402EA019874AD0_1  */ , 
  {5UL, 0U, 0U, 0x00U} /*  sn_ED55D3C388349965E0402EA019872AD5_1_ED55AF29C92D2294E0402EA019874515_1  */ , 
  {6UL, 0U, 0U, 0x00U} /*  sn_ED55AF29C91F2294E0402EA019874515_1_ED55CA2D406A1E52E0402EA01987021E_1  */ , 
  {7UL, 0U, 0U, 0x00U} /*  sn_ED55AF29C91C2294E0402EA019874515_1_ED55B6DAA560EF99E0402EA019870214_1  */ , 
  {8UL, 0U, 0U, 0x00U} /*  sn_fdeafba7ae254e1e80d60b106053d532_1_7d44d6d889bf437cb0ff888debf8555c_1  */ , 
  {9UL, 0U, 0U, 0x00U} /*  sn_bbacfb13291a4ee286c905592a1bb973_2_39a2ac19c7164f0385b879ca14e85e7b_2  */ , 
  {10UL, 0U, 0U, 0x00U} /*  sn_c217e50a54da493a879e8e4514e8c562_4_ecced8165aea4835a2a17dc224344598_4  */ , 
  {11UL, 0U, 0U, 0x00U} /*  sn_f1b37dec817945749ac7e14f80df159d_4_95dff1578f214757b23c8394af12aa48_4  */ , 
  {12UL, 0U, 0U, 0x00U} /*  sn_2f3b1c2990d8434f9d60c8bc0223380a_14_0d521c7c53964f869478fa5c12f4ec50_14  */ , 
  {13UL, 0U, 0U, 0x00U} /*  sn_2ed003fa08904453b0dfb985d50da316_4_039aef2810e44f2c9248813621a8312e_4  */ , 
  {14UL, 0U, 0U, 0x00U} /*  sn_9dd8c6cee627483a83c881709979081d_77_017541877cab44569267610f7b9dbbd6_78  */ , 
  {15UL, 0U, 0U, 0x00U} /*  sn_ada9591f59be44a18409d95fca100f53_5_c623861e6a0749cc9d81d43585ea7f81_4  */ , 
  {16UL, 0U, 0U, 0x00U} /*  sn_0b01e810a8bf4aa3b3ead1e4c09f2b68_4_e0f63d36315c4773ba837e73d6faaadd_15  */ , 
  {17UL, 8U, 0U, 0x00U} /*  sn_0b01e810a8bf4aa3b3ead1e4c09f2b68_4_0c0ed9ed2c324b648cea19ccfdcf4017_2  */ , 
  {18UL, 0U, 0U, 0x00U} /*  sn_47f7335f9e884cfebf3cf85a43b03f09_9_f1c2ea448b5742e6a930415b5321c120_9  */ , 
  {19UL, 0U, 0U, 0x00U} /*  sn_742c7ae2ecf94fc080e798e25ca70247_16_1edf400c871b41dab29d318a6fc3ec64_13  */ , 
  {20UL, 8U, 0U, 0x00U} /*  sn_742c7ae2ecf94fc080e798e25ca70247_16_09e4bde6148d45f99746b23c44ef9b67_14  */ , 
  {21UL, 0U, 0U, 0x00U} /*  sn_d6c051138a624b7197665ea502ed9c68_3_9779c0f9609648bfa4441a0865c580a6_3  */ , 
  {21UL, 0U, 0U, 0x00U} /*  sn_d6c051138a624b7197665ea502ed9c68_3_9779c0f9609648bfa4441a0865c580a6_3  */ , 
  {21UL, 0U, 0U, 0x00U} /*  sn_d6c051138a624b7197665ea502ed9c68_3_9779c0f9609648bfa4441a0865c580a6_3  */ , 
  {21UL, 0U, 0U, 0x00U} /*  sn_d6c051138a624b7197665ea502ed9c68_3_9779c0f9609648bfa4441a0865c580a6_3  */ , 
  {21UL, 0U, 0U, 0x00U} /*  sn_d6c051138a624b7197665ea502ed9c68_3_9779c0f9609648bfa4441a0865c580a6_3  */ 
};


/* -----------------------------------------------------------------------------
    &&&~ Tx Frame Descriptors
 ----------------------------------------------------------------------------- */
static CONST(FrIf_FrameDescriptorType, FRIF_CONST) FrIf_TxFrameDescriptors_0[] = 
{
  {0U, 1U, 58U, 0x00U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_31501_A_FlexRay_S_315_B_0_R_1_ChA_OUT  */ , 
  {1U, 1U, 254U, 0x01U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_30101_A_FlexRay_S_301_B_0_R_1_ChA_OUT  */ , 
  {2U, 1U, 254U, 0x01U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_30001_A_FlexRay_S_300_B_0_R_1_ChA_OUT  */ , 
  {3U, 1U, 254U, 0x01U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_29901_A_FlexRay_S_299_B_0_R_1_ChA_OUT  */ , 
  {4U, 1U, 254U, 0x01U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_29801_A_FlexRay_S_298_B_0_R_1_ChA_OUT  */ , 
  {5U, 1U, 254U, 0x01U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_29701_A_FlexRay_S_297_B_0_R_1_ChA_OUT  */ , 
  {6U, 1U, 254U, 0x01U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_29601_A_FlexRay_S_296_B_0_R_1_ChA_OUT  */ , 
  {7U, 1U, 254U, 0x01U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_29501_A_FlexRay_S_295_B_0_R_1_ChA_OUT  */ , 
  {8U, 1U, 254U, 0x01U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_29401_A_FlexRay_S_294_B_0_R_1_ChA_OUT  */ , 
  {9U, 1U, 6U, 0x01U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_27424_A_FlexRay_S_274_B_2_R_4_ChA_OUT  */ , 
  {10U, 1U, 8U, 0x01U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_27408_A_FlexRay_S_274_B_0_R_8_ChA_OUT  */ , 
  {11U, 1U, 8U, 0x01U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_2481032_A_FlexRay_S_248_B_10_R_32_ChA_OUT  */ , 
  {12U, 1U, 6U, 0x01U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_23412_A_FlexRay_S_234_B_1_R_2_ChA_OUT  */ , 
  {13U, 1U, 32U, 0x01U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_22001_A_FlexRay_S_220_B_0_R_1_ChA_OUT  */ , 
  {14U, 1U, 8U, 0x01U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_216916_A_FlexRay_S_216_B_9_R_16_ChA_OUT  */ , 
  {15U, 1U, 32U, 0x01U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_18301_A_FlexRay_S_183_B_0_R_1_ChA_OUT  */ , 
  {16U, 2U, 16U, 0x00U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_5102_A_FlexRay_S_51_B_0_R_2_ChA_OUT  */ , 
  {18U, 1U, 16U, 0x00U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_4912_A_FlexRay_S_49_B_1_R_2_ChA_OUT  */ , 
  {19U, 2U, 16U, 0x00U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_4902_A_FlexRay_S_49_B_0_R_2_ChA_OUT  */ , 
  {21U, 1U, 16U, 0x01U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_1201_A_FlexRay_S_12_B_0_R_1_ChA_OUT  */ , 
  {22U, 1U, 16U, 0x01U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_1101_A_FlexRay_S_11_B_0_R_1_ChA_OUT  */ , 
  {23U, 1U, 16U, 0x01U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_1001_A_FlexRay_S_10_B_0_R_1_ChA_OUT  */ , 
  {24U, 1U, 16U, 0x01U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_901_A_FlexRay_S_9_B_0_R_1_ChA_OUT  */ , 
  {25U, 1U, 16U, 0x01U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_801_A_FlexRay_S_8_B_0_R_1_ChA_OUT  */ 
};

/* -----------------------------------------------------------------------------
    &&&~ Rx Pdu Descriptors
 ----------------------------------------------------------------------------- */

static CONST(FrIf_RxPduDescriptorType, FRIF_CONST) FrIf_RxPduDescriptors_0[] = 
{
  {PduRConf_PduRSrcPdu_SRC_Fr_pduTr_RELATIVZEIT_A_FlexRay_7d601c47, 6U, 0x00U} /*  RELATIVZEIT  */ , 
  {PduRConf_PduRSrcPdu_SRC_Fr_pduTr_KILOMETERSTAND_A_FlexRay_7d601c47, 8U, 0x00U} /*  KILOMETERSTAND  */ , 
  {PduRConf_PduRSrcPdu_SRC_Fr_pduTr_FZZSTD_A_FlexRay_7d601c47, 8U, 0x00U} /*  FZZSTD  */ , 
  {PduRConf_PduRSrcPdu_SRC_Fr_pduTr_FAHRGESTELLNUMMER_A_FlexRay_7d601c47, 7U, 0x00U} /*  FAHRGESTELLNUMMER  */ , 
  {PduRConf_PduRSrcPdu_SRC_Fr_pduTr_CTR_VIB_STW_DISP_EXMI_SP2015_A_FlexRay_7d601c47, 8U, 0x00U} /*  CTR_VIB_STW_DISP_EXMI_SP2015  */ , 
  {PduRConf_PduRSrcPdu_SRC_Fr_pduTr_A_TEMP_A_FlexRay_7d601c47, 2U, 0x00U} /*  A_TEMP  */ , 
  {PduRConf_PduRSrcPdu_SRC_Fr_pduTr_CTR_DIAG_OBD_DRDY_A_FlexRay_7d601c47, 2U, 0x00U} /*  CTR_DIAG_OBD_DRDY  */ , 
  {PduRConf_PduRSrcPdu_SRC_Fr_pduTr_DIAG_OBD_ENG_A_FlexRay_7d601c47, 7U, 0x00U} /*  DIAG_OBD_ENG  */ , 
  {PduRConf_PduRSrcPdu_SRC_Fr_pduTr_SECU_FAHRGESTELLNUMMER_A_FlexRay_7d601c47, 8U, 0x00U} /*  SECU_FAHRGESTELLNUMMER  */ , 
  {PduRConf_PduRSrcPdu_SRC_Fr_pduTr_ST_ENERG_GEN_A_FlexRay_7d601c47, 8U, 0x00U} /*  ST_ENERG_GEN  */ , 
  {XcpConf_XcpRxPdu_dummy32bmaster_23008def, 32U, 0x03U} /*  dummy32bmaster  */ , 
  {PduRConf_PduRSrcPdu_SRC_SVC_434514f6_In, 8U, 0x00U} /*  SVC_In  */ , 
  {FrTpConf_FrTpRxPdu_FrTpRxPdu_TL_BRC_FR_32_Tp, 32U, 0x02U} /*  TL_BRC_FR_32  */ , 
  {FrTpConf_FrTpRxPdu_RxPduPool_TL_GW_FR, 254U, 0x02U} /*  TL_MST_GW_TRNSM_FR_254  */ , 
  {PduRConf_PduRSrcPdu_SRC_Fr_pduTr_CON_VEH_A_FlexRay_7d601c47, 8U, 0x00U} /*  CON_VEH  */ , 
  {PduRConf_PduRSrcPdu_SRC_Fr_pduTr_ENSU_SFY_A_FlexRay_7d601c47, 8U, 0x00U} /*  ENSU_SFY  */ , 
  {PduRConf_PduRSrcPdu_SRC_Fr_pduTr_ST_CENG_A_FlexRay_7d601c47, 8U, 0x00U} /*  ST_CENG  */ , 
  {PduRConf_PduRSrcPdu_SRC_Fr_pduTr_STEA_OFFS_A_FlexRay_7d601c47, 8U, 0x00U} /*  STEA_OFFS  */ , 
  {PduRConf_PduRSrcPdu_SRC_Fr_pduTr_OFFS_QUAD_EPS_A_FlexRay_7d601c47, 5U, 0x00U} /*  OFFS_QUAD_EPS  */ , 
  {PduRConf_PduRSrcPdu_SRC_Fr_pduTr_ERRM_BN_U_A_FlexRay_7d601c47, 2U, 0x00U} /*  ERRM_BN_U  */ , 
  {PduRConf_PduRSrcPdu_SRC_Fr_pduTr_TAR_QTA_STRMOM_DV_A_FlexRay_7d601c47, 8U, 0x00U} /*  TAR_QTA_STRMOM_DV  */ , 
  {PduRConf_PduRSrcPdu_SRC_Fr_pduTr_TAR_STMOM_DV_ACT_A_FlexRay_7d601c47, 8U, 0x00U} /*  TAR_STMOM_DV_ACT  */ , 
  {PduRConf_PduRSrcPdu_SRC_Fr_pduTr_ENERG_DGR_DRDY_A_FlexRay_7d601c47, 8U, 0x00U} /*  ENERG_DGR_DRDY  */ , 
  {PduRConf_PduRSrcPdu_SRC_Fr_pduTr_TAR_ESTP_VIRT_FTAX_A_FlexRay_7d601c47, 8U, 0x00U} /*  TAR_ESTP_VIRT_FTAX  */ , 
  {PduRConf_PduRSrcPdu_SRC_Fr_pduTr_VYAW_VEH_A_FlexRay_7d601c47, 6U, 0x00U} /*  VYAW_VEH  */ , 
  {PduRConf_PduRSrcPdu_SRC_Fr_pduTr_ACLNY_MASSCNTR_A_FlexRay_7d601c47, 6U, 0x00U} /*  ACLNY_MASSCNTR  */ , 
  {PduRConf_PduRSrcPdu_SRC_Fr_pduTr_V_VEH_A_FlexRay_7d601c47, 5U, 0x00U} /*  V_VEH  */ , 
  {PduRConf_PduRSrcPdu_SRC_Fr_pduTr_SU_CLE_DRDY_DXP_A_FlexRay_7d601c47, 8U, 0x00U} /*  SU_CLE_DRDY_DXP  */ , 
  {PduRConf_PduRSrcPdu_SRC_Fr_pduTr_ST_STAB_DSC_A_FlexRay_7d601c47, 8U, 0x00U} /*  ST_STAB_DSC  */ , 
  {PduRConf_PduRSrcPdu_SRC_Fr_pduTr_AVL_RPM_WHL_A_FlexRay_7d601c47, 12U, 0x00U} /*  AVL_RPM_WHL  */ 
};


/* -----------------------------------------------------------------------------
    &&&~ Rx Frame Layout Elements
 ----------------------------------------------------------------------------- */

static CONST(FrIf_FrameLayoutElementType, FRIF_CONST) FrIf_RxFrameLayoutElements_0[] = 
{
  {0UL, 0U, 0U, 0x00U} /*  sn_ccc09e8b2c1e432a8f2a272e558c8566_3_acb3c9a426bf4887ba724efd428ad5a4_3  */ , 
  {1UL, 0U, 0U, 0x00U} /*  sn_23b23ec8e79d4821a4fd4f71addacbb8_10_209e4b614ee044c4bbf1020e8ad2a6e0_10  */ , 
  {2UL, 0U, 0U, 0x00U} /*  sn_e5dc33323d8e4047bef88bdbfc641fb1_12_47c848be64324d52af177d4eda36b369_12  */ , 
  {3UL, 0U, 0U, 0x00U} /*  sn_1e39d529353949ad94ad72cd99e0239e_13_9007d271e9154737bbd9f3c54ab3098b_12  */ , 
  {4UL, 0U, 0U, 0x00U} /*  sn_6d8a461ff30049dfbb2df9138651c35b_3_8e1fc510f7a3427998068160382540c0_4  */ , 
  {5UL, 0U, 0U, 0x00U} /*  sn_ffb3893c37a446b6bb48321cc292082f_18_d0ea1fc2c1ca4e2295bae82b1e156e9a_18  */ , 
  {6UL, 0U, 0U, 0x00U} /*  sn_62b9b444be3144e4afdbe2e8f65ae37b_4_eb2aaf9fde954786857e30879fbebab8_4  */ , 
  {7UL, 0U, 0U, 0x00U} /*  sn_f26c29b5554146b48da2e76fdc87f59b_13_d8833aa6063240d791b5384f59f75d9a_13  */ , 
  {8UL, 0U, 0U, 0x00U} /*  sn_45fe7c1444bb44a182e3c698da50983a_3_ff5ad01b69a64f2fa3482d8ab369f18a_3  */ , 
  {9UL, 0U, 0U, 0x00U} /*  sn_efdccab807464c4ab076173048647d90_15_085b67cff4b142a59fb46d892b9938f0_15  */ , 
  {10UL, 0U, 0U, 0x00U} /*  sn_6acd24342b914dee85c6ec4bb84bea56_4_2e91d703d77a465ba5c92f45777cf2d1_4  */ , 
  {11UL, 0U, 0U, 0x00U} /*  sn_9dd8c6cee627483a83c881709979081d_77_017541877cab44569267610f7b9dbbd6_78  */ , 
  {11UL, 0U, 0U, 0x00U} /*  sn_9dd8c6cee627483a83c881709979081d_77_017541877cab44569267610f7b9dbbd6_78  */ , 
  {11UL, 0U, 0U, 0x00U} /*  sn_9dd8c6cee627483a83c881709979081d_77_017541877cab44569267610f7b9dbbd6_78  */ , 
  {11UL, 0U, 0U, 0x00U} /*  sn_9dd8c6cee627483a83c881709979081d_77_017541877cab44569267610f7b9dbbd6_78  */ , 
  {11UL, 0U, 0U, 0x00U} /*  sn_9dd8c6cee627483a83c881709979081d_77_017541877cab44569267610f7b9dbbd6_78  */ , 
  {11UL, 0U, 0U, 0x00U} /*  sn_9dd8c6cee627483a83c881709979081d_77_017541877cab44569267610f7b9dbbd6_78  */ , 
  {11UL, 0U, 0U, 0x00U} /*  sn_9dd8c6cee627483a83c881709979081d_77_017541877cab44569267610f7b9dbbd6_78  */ , 
  {11UL, 0U, 0U, 0x00U} /*  sn_9dd8c6cee627483a83c881709979081d_77_017541877cab44569267610f7b9dbbd6_78  */ , 
  {11UL, 0U, 0U, 0x00U} /*  sn_9dd8c6cee627483a83c881709979081d_77_017541877cab44569267610f7b9dbbd6_78  */ , 
  {11UL, 0U, 0U, 0x00U} /*  sn_9dd8c6cee627483a83c881709979081d_77_017541877cab44569267610f7b9dbbd6_78  */ , 
  {11UL, 0U, 0U, 0x00U} /*  sn_9dd8c6cee627483a83c881709979081d_77_017541877cab44569267610f7b9dbbd6_78  */ , 
  {11UL, 0U, 0U, 0x00U} /*  sn_9dd8c6cee627483a83c881709979081d_77_017541877cab44569267610f7b9dbbd6_78  */ , 
  {11UL, 0U, 0U, 0x00U} /*  sn_9dd8c6cee627483a83c881709979081d_77_017541877cab44569267610f7b9dbbd6_78  */ , 
  {12UL, 0U, 0U, 0x00U} /*  sn_b89d750f03b54dc591beef3d97af79e1_6_99b35db8d0034c95bddada0c4e168dbd_5  */ , 
  {12UL, 0U, 0U, 0x00U} /*  sn_b89d750f03b54dc591beef3d97af79e1_6_99b35db8d0034c95bddada0c4e168dbd_5  */ , 
  {12UL, 0U, 0U, 0x00U} /*  sn_b89d750f03b54dc591beef3d97af79e1_6_99b35db8d0034c95bddada0c4e168dbd_5  */ , 
  {12UL, 0U, 0U, 0x00U} /*  sn_b89d750f03b54dc591beef3d97af79e1_6_99b35db8d0034c95bddada0c4e168dbd_5  */ , 
  {12UL, 0U, 0U, 0x00U} /*  sn_b89d750f03b54dc591beef3d97af79e1_6_99b35db8d0034c95bddada0c4e168dbd_5  */ , 
  {13UL, 0U, 0U, 0x00U} /*  sn_d187a29661e448debbfa1c1db2495add_2_161ebe01a13246f5bc130ce6f196d980_1  */ , 
  {14UL, 0U, 0U, 0x00U} /*  sn_a07de7dfbad342e18d0517336a8ccb12_11_f39dc9b4f18c4462a3ca3222d270f882_11  */ , 
  {15UL, 0U, 0U, 0x00U} /*  sn_34b57a760af141aaa6b7f792f94a53b8_2_4145eaff72594a8e9989935517b189e9_2  */ , 
  {16UL, 0U, 0U, 0x00U} /*  sn_cf4a41801d9a44e3ad6339c69f3c4e8c_9_6e55c14d93c64aaa86e33b57aac2ae43_9  */ , 
  {17UL, 0U, 0U, 0x00U} /*  sn_58cceca224fe40fc80675725acb2e3e1_11_55e086fa3cb3405c9e0849033f661450_11  */ , 
  {18UL, 0U, 0U, 0x00U} /*  sn_4b75d7aade684404a40181123f5e091e_13_2538d099b88d4657ae03c10c9544a047_14  */ , 
  {19UL, 0U, 0U, 0x00U} /*  sn_8e8d5ba824d24f699ca284a4f92ea5fd_4_677e18af96434b57a7947ca5849af5e4_4  */ , 
  {20UL, 0U, 0U, 0x00U} /*  sn_13aa1571427746dfa4ddec6f8fe46d9d_12_2b4b9cfb3a644a13aeec78e06779be78_9  */ , 
  {21UL, 8U, 0U, 0x00U} /*  sn_13aa1571427746dfa4ddec6f8fe46d9d_12_d81fd7307a29409f9d9a2c110d5f1a3d_9  */ , 
  {22UL, 0U, 0U, 0x00U} /*  sn_a8f1d204f2ad40669d1acf24a5cd893e_8_39c3f0eb640a4f78a081a30d189b0df4_8  */ , 
  {23UL, 0U, 0U, 0x00U} /*  sn_d9f1ff037ed147f1bcd2f969afda82c4_5_12963b5f55914150b9f8aacada47bf44_5  */ , 
  {24UL, 8U, 0U, 0x00U} /*  sn_1a6c54ef470342899c8af77346d5f01c_20_27f7c756a0e24349b8e230b415458184_21  */ , 
  {25UL, 8U, 0U, 0x00U} /*  sn_5d864f4a266e40639fe6abc57cceb758_17_060886cf9e88403f9df14c319aa0ae95_20  */ , 
  {26UL, 0U, 0U, 0x00U} /*  sn_2891826c350d482582f167e1fc0f401f_10_af83ce37179a45aca7ac57646532416b_18  */ , 
  {27UL, 0U, 0U, 0x00U} /*  sn_642c67ac547c477491d482d6f4297c8a_10_04b89dc3c26d4ca08465c4eec950ef56_8  */ , 
  {28UL, 0U, 0U, 0x00U} /*  sn_2c6859f532c740fd851c07438c6639fd_20_3e35ac63fc494d0fb399c763aeb7057b_24  */ , 
  {29UL, 0U, 0U, 0x00U} /*  sn_708b545e63774a48974a2e012c342c56_18_ca307c7178fd4cb8b1f0845b9598b7e4_18  */ 
};


/* -----------------------------------------------------------------------------
    &&&~ Rx Frame Descriptors
 ----------------------------------------------------------------------------- */

static CONST(FrIf_FrameDescriptorType, FRIF_CONST) FrIf_RxFrameDescriptors_0[] = 
{
  {0U, 1U, 6U, 0x00U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_27628_A_FlexRay_S_276_B_2_R_8_ChA_IN  */ , 
  {1U, 1U, 8U, 0x00U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_27648_A_FlexRay_S_276_B_4_R_8_ChA_IN  */ , 
  {2U, 1U, 8U, 0x00U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_27518_A_FlexRay_S_275_B_1_R_8_ChA_IN  */ , 
  {3U, 1U, 8U, 0x00U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_27578_A_FlexRay_S_275_B_7_R_8_ChA_IN  */ , 
  {4U, 1U, 16U, 0x00U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_26924_A_FlexRay_S_269_B_2_R_4_ChA_IN  */ , 
  {5U, 1U, 2U, 0x00U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_25214_A_FlexRay_S_252_B_1_R_4_ChA_IN  */ , 
  {6U, 1U, 2U, 0x00U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_24702_A_FlexRay_S_247_B_0_R_2_ChA_IN  */ , 
  {7U, 1U, 8U, 0x00U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_24712_A_FlexRay_S_247_B_1_R_2_ChA_IN  */ , 
  {8U, 1U, 8U, 0x00U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_24404_A_FlexRay_S_244_B_0_R_4_ChA_IN  */ , 
  {9U, 1U, 8U, 0x00U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_23212_A_FlexRay_S_232_B_1_R_2_ChA_IN  */ , 
  {10U, 1U, 32U, 0x00U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_21901_A_FlexRay_S_219_B_0_R_1_ChA_IN  */ , 
  {11U, 1U, 8U, 0x00U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_216616_A_FlexRay_S_216_B_6_R_16_ChA_IN  */ , 
  {12U, 1U, 8U, 0x00U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_216716_A_FlexRay_S_216_B_7_R_16_ChA_IN  */ , 
  {13U, 1U, 8U, 0x00U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_2161016_A_FlexRay_S_216_B_10_R_16_ChA_IN  */ , 
  {14U, 1U, 8U, 0x00U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_2161216_A_FlexRay_S_216_B_12_R_16_ChA_IN  */ , 
  {15U, 1U, 8U, 0x00U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_2161316_A_FlexRay_S_216_B_13_R_16_ChA_IN  */ , 
  {16U, 1U, 8U, 0x00U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_2161416_A_FlexRay_S_216_B_14_R_16_ChA_IN  */ , 
  {17U, 1U, 8U, 0x00U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_2161516_A_FlexRay_S_216_B_15_R_16_ChA_IN  */ , 
  {18U, 1U, 8U, 0x00U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_215216_A_FlexRay_S_215_B_2_R_16_ChA_IN  */ , 
  {19U, 1U, 8U, 0x00U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_215516_A_FlexRay_S_215_B_5_R_16_ChA_IN  */ , 
  {20U, 1U, 8U, 0x00U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_215616_A_FlexRay_S_215_B_6_R_16_ChA_IN  */ , 
  {21U, 1U, 8U, 0x00U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_215916_A_FlexRay_S_215_B_9_R_16_ChA_IN  */ , 
  {22U, 1U, 8U, 0x00U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_2151016_A_FlexRay_S_215_B_10_R_16_ChA_IN  */ , 
  {23U, 1U, 8U, 0x00U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_21434_A_FlexRay_S_214_B_3_R_4_ChA_IN  */ , 
  {24U, 1U, 32U, 0x00U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_21301_A_FlexRay_S_213_B_0_R_1_ChA_IN  */ , 
  {25U, 1U, 32U, 0x00U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_21201_A_FlexRay_S_212_B_0_R_1_ChA_IN  */ , 
  {26U, 1U, 32U, 0x00U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_21101_A_FlexRay_S_211_B_0_R_1_ChA_IN  */ , 
  {27U, 1U, 32U, 0x00U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_21001_A_FlexRay_S_210_B_0_R_1_ChA_IN  */ , 
  {28U, 1U, 32U, 0x00U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_20901_A_FlexRay_S_209_B_0_R_1_ChA_IN  */ , 
  {29U, 1U, 254U, 0x00U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_14701_A_FlexRay_S_147_B_0_R_1_ChA_IN  */ , 
  {30U, 1U, 8U, 0x00U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_12112_A_FlexRay_S_121_B_1_R_2_ChA_IN  */ , 
  {31U, 1U, 8U, 0x00U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_11912_A_FlexRay_S_119_B_1_R_2_ChA_IN  */ , 
  {32U, 1U, 8U, 0x00U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_11702_A_FlexRay_S_117_B_0_R_2_ChA_IN  */ , 
  {33U, 1U, 8U, 0x00U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_10802_A_FlexRay_S_108_B_0_R_2_ChA_IN  */ , 
  {34U, 1U, 6U, 0x00U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_10701_A_FlexRay_S_107_B_0_R_1_ChA_IN  */ , 
  {35U, 1U, 2U, 0x00U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_10401_A_FlexRay_S_104_B_0_R_1_ChA_IN  */ , 
  {36U, 2U, 16U, 0x00U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_6802_A_FlexRay_S_68_B_0_R_2_ChA_IN  */ , 
  {38U, 1U, 8U, 0x00U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_6812_A_FlexRay_S_68_B_1_R_2_ChA_IN  */ , 
  {39U, 1U, 8U, 0x00U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_6512_A_FlexRay_S_65_B_1_R_2_ChA_IN  */ , 
  {40U, 1U, 14U, 0x00U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_5602_A_FlexRay_S_56_B_0_R_2_ChA_IN  */ , 
  {41U, 1U, 14U, 0x00U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_5502_A_FlexRay_S_55_B_0_R_2_ChA_IN  */ , 
  {42U, 1U, 16U, 0x00U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_5534_A_FlexRay_S_55_B_3_R_4_ChA_IN  */ , 
  {43U, 1U, 16U, 0x00U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_5338_A_FlexRay_S_53_B_3_R_8_ChA_IN  */ , 
  {44U, 1U, 16U, 0x00U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_4712_A_FlexRay_S_47_B_1_R_2_ChA_IN  */ , 
  {45U, 1U, 12U, 0x00U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_4601_A_FlexRay_S_46_B_0_R_1_ChA_IN  */ 
};




/* -----------------------------------------------------------------------------
    &&&~ Task Schedule Data
 ----------------------------------------------------------------------------- */

static CONST(FrIf_JobDescriptorType, FRIF_CONST) FrIf_JobDescriptors_0[] = 
{
  {
    17U /*  StartTimeInMacroTicks  */ , 
    1848U /*  StartTimeProtectedRange  */ , 
    3628U /*  EndTimeProtectedRange  */ , 
    1363U /*  MaxDelay  */ , 
    0U /*  MinColumnNumber  */ , 
    15U /*  MaxColumnNumber  */ , 
    1U /*  MinTxConfJobNo  */ , 
    1U /*  MaxTxConfJobNo  */ , 
    20U /*  JobConfig  */ 
  } /*  FrIf_RxJob_02  */ , 
  {
    455U /*  StartTimeInMacroTicks  */ , 
    1848U /*  StartTimeProtectedRange  */ , 
    3628U /*  EndTimeProtectedRange  */ , 
    909U /*  MaxDelay  */ , 
    0U /*  MinColumnNumber  */ , 
    12U /*  MaxColumnNumber  */ , 
    255U /*  MinTxConfJobNo  */ , 
    254U /*  MaxTxConfJobNo  */ , 
    0U /*  JobConfig  */ 
  } /*  FrIf_TxJob_02  */ , 
  {
    1842U /*  StartTimeInMacroTicks  */ , 
    24U /*  StartTimeProtectedRange  */ , 
    1824U /*  EndTimeProtectedRange  */ , 
    1363U /*  MaxDelay  */ , 
    16U /*  MinColumnNumber  */ , 
    21U /*  MaxColumnNumber  */ , 
    3U /*  MinTxConfJobNo  */ , 
    3U /*  MaxTxConfJobNo  */ , 
    4U /*  JobConfig  */ 
  } /*  FrIf_RxJob_01  */ , 
  {
    2273U /*  StartTimeInMacroTicks  */ , 
    24U /*  StartTimeProtectedRange  */ , 
    1824U /*  EndTimeProtectedRange  */ , 
    909U /*  MaxDelay  */ , 
    13U /*  MinColumnNumber  */ , 
    19U /*  MaxColumnNumber  */ , 
    255U /*  MinTxConfJobNo  */ , 
    254U /*  MaxTxConfJobNo  */ , 
    0U /*  JobConfig  */ 
  } /*  FrIf_TxJob_01  */ 
};


/* -----------------------------------------------------------------------------
    &&&~ Rx Handle tables
 ----------------------------------------------------------------------------- */

/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_RxHandleType, FRIF_CONST) RxHandles_0_0[] = 
{
  29U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_14701_A_FlexRay_S_147_B_0_R_1_ChA_IN  */ 
} /*  FrIf_RxJob_02  */ ;
/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_RxHandleType, FRIF_CONST) RxHandles_0_1[] = 
{
  28U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_20901_A_FlexRay_S_209_B_0_R_1_ChA_IN  */ 
} /*  FrIf_RxJob_02  */ ;
/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_RxHandleType, FRIF_CONST) RxHandles_0_2[] = 
{
  27U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_21001_A_FlexRay_S_210_B_0_R_1_ChA_IN  */ 
} /*  FrIf_RxJob_02  */ ;
/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_RxHandleType, FRIF_CONST) RxHandles_0_3[] = 
{
  26U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_21101_A_FlexRay_S_211_B_0_R_1_ChA_IN  */ 
} /*  FrIf_RxJob_02  */ ;
/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_RxHandleType, FRIF_CONST) RxHandles_0_4[] = 
{
  25U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_21201_A_FlexRay_S_212_B_0_R_1_ChA_IN  */ 
} /*  FrIf_RxJob_02  */ ;
/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_RxHandleType, FRIF_CONST) RxHandles_0_5[] = 
{
  24U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_21301_A_FlexRay_S_213_B_0_R_1_ChA_IN  */ 
} /*  FrIf_RxJob_02  */ ;
/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_RxHandleType, FRIF_CONST) RxHandles_0_6[] = 
{
  17U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_2161516_A_FlexRay_S_216_B_15_R_16_ChA_IN  */ , 
  45U /*  RX INVALID HANDLE  */ , 
  45U /*  RX INVALID HANDLE  */ , 
  18U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_215216_A_FlexRay_S_215_B_2_R_16_ChA_IN  */ , 
  45U /*  RX INVALID HANDLE  */ , 
  45U /*  RX INVALID HANDLE  */ , 
  19U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_215516_A_FlexRay_S_215_B_5_R_16_ChA_IN  */ , 
  11U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_216616_A_FlexRay_S_216_B_6_R_16_ChA_IN  */ , 
  12U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_216716_A_FlexRay_S_216_B_7_R_16_ChA_IN  */ , 
  45U /*  RX INVALID HANDLE  */ , 
  21U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_215916_A_FlexRay_S_215_B_9_R_16_ChA_IN  */ , 
  22U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_2151016_A_FlexRay_S_215_B_10_R_16_ChA_IN  */ , 
  45U /*  RX INVALID HANDLE  */ , 
  14U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_2161216_A_FlexRay_S_216_B_12_R_16_ChA_IN  */ , 
  15U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_2161316_A_FlexRay_S_216_B_13_R_16_ChA_IN  */ , 
  16U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_2161416_A_FlexRay_S_216_B_14_R_16_ChA_IN  */ 
} /*  FrIf_RxJob_02  */ ;
/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_RxHandleType, FRIF_CONST) RxHandles_0_7[] = 
{
  3U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_27578_A_FlexRay_S_275_B_7_R_8_ChA_IN  */ , 
  45U /*  RX INVALID HANDLE  */ , 
  2U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_27518_A_FlexRay_S_275_B_1_R_8_ChA_IN  */ , 
  45U /*  RX INVALID HANDLE  */ , 
  45U /*  RX INVALID HANDLE  */ , 
  1U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_27648_A_FlexRay_S_276_B_4_R_8_ChA_IN  */ , 
  45U /*  RX INVALID HANDLE  */ , 
  20U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_215616_A_FlexRay_S_215_B_6_R_16_ChA_IN  */ , 
  3U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_27578_A_FlexRay_S_275_B_7_R_8_ChA_IN  */ , 
  45U /*  RX INVALID HANDLE  */ , 
  2U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_27518_A_FlexRay_S_275_B_1_R_8_ChA_IN  */ , 
  13U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_2161016_A_FlexRay_S_216_B_10_R_16_ChA_IN  */ , 
  45U /*  RX INVALID HANDLE  */ , 
  1U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_27648_A_FlexRay_S_276_B_4_R_8_ChA_IN  */ , 
  45U /*  RX INVALID HANDLE  */ , 
  45U /*  RX INVALID HANDLE  */ 
} /*  FrIf_RxJob_02  */ ;
/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_RxHandleType, FRIF_CONST) RxHandles_0_8[] = 
{
  23U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_21434_A_FlexRay_S_214_B_3_R_4_ChA_IN  */ , 
  8U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_24404_A_FlexRay_S_244_B_0_R_4_ChA_IN  */ , 
  5U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_25214_A_FlexRay_S_252_B_1_R_4_ChA_IN  */ , 
  0U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_27628_A_FlexRay_S_276_B_2_R_8_ChA_IN  */ , 
  23U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_21434_A_FlexRay_S_214_B_3_R_4_ChA_IN  */ , 
  8U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_24404_A_FlexRay_S_244_B_0_R_4_ChA_IN  */ , 
  5U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_25214_A_FlexRay_S_252_B_1_R_4_ChA_IN  */ , 
  45U /*  RX INVALID HANDLE  */ 
} /*  FrIf_RxJob_02  */ ;
/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_RxHandleType, FRIF_CONST) RxHandles_0_9[] = 
{
  31U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_11912_A_FlexRay_S_119_B_1_R_2_ChA_IN  */ , 
  45U /*  RX INVALID HANDLE  */ , 
  31U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_11912_A_FlexRay_S_119_B_1_R_2_ChA_IN  */ , 
  4U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_26924_A_FlexRay_S_269_B_2_R_4_ChA_IN  */ 
} /*  FrIf_RxJob_02  */ ;
/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_RxHandleType, FRIF_CONST) RxHandles_0_10[] = 
{
  30U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_12112_A_FlexRay_S_121_B_1_R_2_ChA_IN  */ , 
  6U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_24702_A_FlexRay_S_247_B_0_R_2_ChA_IN  */ 
} /*  FrIf_RxJob_02  */ ;
/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_RxHandleType, FRIF_CONST) RxHandles_0_11[] = 
{
  7U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_24712_A_FlexRay_S_247_B_1_R_2_ChA_IN  */ , 
  32U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_11702_A_FlexRay_S_117_B_0_R_2_ChA_IN  */ 
} /*  FrIf_RxJob_02  */ ;
/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_RxHandleType, FRIF_CONST) RxHandles_0_12[] = 
{
  9U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_23212_A_FlexRay_S_232_B_1_R_2_ChA_IN  */ , 
  33U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_10802_A_FlexRay_S_108_B_0_R_2_ChA_IN  */ 
} /*  FrIf_RxJob_02  */ ;
/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_RxHandleType, FRIF_CONST) RxHandles_0_13[] = 
{
  10U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_21901_A_FlexRay_S_219_B_0_R_1_ChA_IN  */ 
} /*  FrIf_RxJob_02  */ ;
/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_RxHandleType, FRIF_CONST) RxHandles_0_14[] = 
{
  34U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_10701_A_FlexRay_S_107_B_0_R_1_ChA_IN  */ 
} /*  FrIf_RxJob_02  */ ;
/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_RxHandleType, FRIF_CONST) RxHandles_0_15[] = 
{
  35U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_10401_A_FlexRay_S_104_B_0_R_1_ChA_IN  */ 
} /*  FrIf_RxJob_02  */ ;
/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_RxHandleType, FRIF_CONST) RxHandles_0_16[] = 
{
  39U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_5602_A_FlexRay_S_56_B_0_R_2_ChA_IN  */ , 
  45U /*  RX INVALID HANDLE  */ , 
  39U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_5602_A_FlexRay_S_56_B_0_R_2_ChA_IN  */ , 
  42U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_5338_A_FlexRay_S_53_B_3_R_8_ChA_IN  */ , 
  39U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_5602_A_FlexRay_S_56_B_0_R_2_ChA_IN  */ , 
  45U /*  RX INVALID HANDLE  */ , 
  39U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_5602_A_FlexRay_S_56_B_0_R_2_ChA_IN  */ , 
  45U /*  RX INVALID HANDLE  */ 
} /*  FrIf_RxJob_01  */ ;
/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_RxHandleType, FRIF_CONST) RxHandles_0_17[] = 
{
  40U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_5502_A_FlexRay_S_55_B_0_R_2_ChA_IN  */ , 
  45U /*  RX INVALID HANDLE  */ , 
  40U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_5502_A_FlexRay_S_55_B_0_R_2_ChA_IN  */ , 
  41U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_5534_A_FlexRay_S_55_B_3_R_4_ChA_IN  */ 
} /*  FrIf_RxJob_01  */ ;
/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_RxHandleType, FRIF_CONST) RxHandles_0_18[] = 
{
  36U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_6802_A_FlexRay_S_68_B_0_R_2_ChA_IN  */ , 
  43U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_4712_A_FlexRay_S_47_B_1_R_2_ChA_IN  */ 
} /*  FrIf_RxJob_01  */ ;
/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_RxHandleType, FRIF_CONST) RxHandles_0_19[] = 
{
  45U /*  RX INVALID HANDLE  */ , 
  38U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_6512_A_FlexRay_S_65_B_1_R_2_ChA_IN  */ 
} /*  FrIf_RxJob_01  */ ;
/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_RxHandleType, FRIF_CONST) RxHandles_0_20[] = 
{
  45U /*  RX INVALID HANDLE  */ , 
  37U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_6812_A_FlexRay_S_68_B_1_R_2_ChA_IN  */ 
} /*  FrIf_RxJob_01  */ ;
/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_RxHandleType, FRIF_CONST) RxHandles_0_21[] = 
{
  44U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_4601_A_FlexRay_S_46_B_0_R_1_ChA_IN  */ 
} /*  FrIf_RxJob_01  */ ;


/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONSTP2CONST(FrIf_RxHandleType, FRIF_CONST, FRIF_CONST) FrIf_RxHandles_0[] = 
{
  RxHandles_0_0
  ,RxHandles_0_1
  ,RxHandles_0_2
  ,RxHandles_0_3
  ,RxHandles_0_4
  ,RxHandles_0_5
  ,RxHandles_0_6
  ,RxHandles_0_7
  ,RxHandles_0_8
  ,RxHandles_0_9
  ,RxHandles_0_10
  ,RxHandles_0_11
  ,RxHandles_0_12
  ,RxHandles_0_13
  ,RxHandles_0_14
  ,RxHandles_0_15
  ,RxHandles_0_16
  ,RxHandles_0_17
  ,RxHandles_0_18
  ,RxHandles_0_19
  ,RxHandles_0_20
  ,RxHandles_0_21
};


/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_CycleMaskType, FRIF_CONST) FrIf_RxCycleMasks_0[] = 
{
  0U
  , 0U
  , 0U
  , 0U
  , 0U
  , 0U
  , 15U
  , 15U
  , 7U
  , 3U
  , 1U
  , 1U
  , 1U
  , 0U
  , 0U
  , 0U
  , 7U
  , 3U
  , 1U
  , 1U
  , 1U
  , 0U
};


/* -----------------------------------------------------------------------------
    &&&~ Tx Handle tables
 ----------------------------------------------------------------------------- */

/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_TxHandleType, FRIF_CONST) TxHandles_0_0[] = 
{
  15U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_18301_A_FlexRay_S_183_B_0_R_1_ChA_OUT  */ 
} /*  FrIf_TxJob_02  */ ;
/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_TxHandleType, FRIF_CONST) TxHandles_0_1[] = 
{
  10U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_27408_A_FlexRay_S_274_B_0_R_8_ChA_OUT  */ , 
  24U /*  TX INVALID HANDLE  */ , 
  24U /*  TX INVALID HANDLE  */ , 
  24U /*  TX INVALID HANDLE  */ , 
  24U /*  TX INVALID HANDLE  */ , 
  24U /*  TX INVALID HANDLE  */ , 
  24U /*  TX INVALID HANDLE  */ , 
  24U /*  TX INVALID HANDLE  */ , 
  10U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_27408_A_FlexRay_S_274_B_0_R_8_ChA_OUT  */ , 
  14U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_216916_A_FlexRay_S_216_B_9_R_16_ChA_OUT  */ , 
  11U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_2481032_A_FlexRay_S_248_B_10_R_32_ChA_OUT  */ , 
  24U /*  TX INVALID HANDLE  */ , 
  24U /*  TX INVALID HANDLE  */ , 
  24U /*  TX INVALID HANDLE  */ , 
  24U /*  TX INVALID HANDLE  */ , 
  24U /*  TX INVALID HANDLE  */ , 
  10U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_27408_A_FlexRay_S_274_B_0_R_8_ChA_OUT  */ , 
  24U /*  TX INVALID HANDLE  */ , 
  24U /*  TX INVALID HANDLE  */ , 
  24U /*  TX INVALID HANDLE  */ , 
  24U /*  TX INVALID HANDLE  */ , 
  24U /*  TX INVALID HANDLE  */ , 
  24U /*  TX INVALID HANDLE  */ , 
  24U /*  TX INVALID HANDLE  */ , 
  10U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_27408_A_FlexRay_S_274_B_0_R_8_ChA_OUT  */ , 
  14U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_216916_A_FlexRay_S_216_B_9_R_16_ChA_OUT  */ , 
  24U /*  TX INVALID HANDLE  */ , 
  24U /*  TX INVALID HANDLE  */ , 
  24U /*  TX INVALID HANDLE  */ , 
  24U /*  TX INVALID HANDLE  */ , 
  24U /*  TX INVALID HANDLE  */ , 
  24U /*  TX INVALID HANDLE  */ 
} /*  FrIf_TxJob_02  */ ;
/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_TxHandleType, FRIF_CONST) TxHandles_0_2[] = 
{
  24U /*  TX INVALID HANDLE  */ , 
  12U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_23412_A_FlexRay_S_234_B_1_R_2_ChA_OUT  */ , 
  9U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_27424_A_FlexRay_S_274_B_2_R_4_ChA_OUT  */ , 
  12U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_23412_A_FlexRay_S_234_B_1_R_2_ChA_OUT  */ 
} /*  FrIf_TxJob_02  */ ;
/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_TxHandleType, FRIF_CONST) TxHandles_0_3[] = 
{
  13U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_22001_A_FlexRay_S_220_B_0_R_1_ChA_OUT  */ 
} /*  FrIf_TxJob_02  */ ;
/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_TxHandleType, FRIF_CONST) TxHandles_0_4[] = 
{
  0U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_31501_A_FlexRay_S_315_B_0_R_1_ChA_OUT  */ 
} /*  FrIf_TxJob_02  */ ;
/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_TxHandleType, FRIF_CONST) TxHandles_0_5[] = 
{
  3U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_29901_A_FlexRay_S_299_B_0_R_1_ChA_OUT  */ 
} /*  FrIf_TxJob_02  */ ;
/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_TxHandleType, FRIF_CONST) TxHandles_0_6[] = 
{
  5U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_29701_A_FlexRay_S_297_B_0_R_1_ChA_OUT  */ 
} /*  FrIf_TxJob_02  */ ;
/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_TxHandleType, FRIF_CONST) TxHandles_0_7[] = 
{
  4U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_29801_A_FlexRay_S_298_B_0_R_1_ChA_OUT  */ 
} /*  FrIf_TxJob_02  */ ;
/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_TxHandleType, FRIF_CONST) TxHandles_0_8[] = 
{
  6U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_29601_A_FlexRay_S_296_B_0_R_1_ChA_OUT  */ 
} /*  FrIf_TxJob_02  */ ;
/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_TxHandleType, FRIF_CONST) TxHandles_0_9[] = 
{
  2U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_30001_A_FlexRay_S_300_B_0_R_1_ChA_OUT  */ 
} /*  FrIf_TxJob_02  */ ;
/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_TxHandleType, FRIF_CONST) TxHandles_0_10[] = 
{
  7U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_29501_A_FlexRay_S_295_B_0_R_1_ChA_OUT  */ 
} /*  FrIf_TxJob_02  */ ;
/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_TxHandleType, FRIF_CONST) TxHandles_0_11[] = 
{
  8U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_29401_A_FlexRay_S_294_B_0_R_1_ChA_OUT  */ 
} /*  FrIf_TxJob_02  */ ;
/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_TxHandleType, FRIF_CONST) TxHandles_0_12[] = 
{
  1U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_30101_A_FlexRay_S_301_B_0_R_1_ChA_OUT  */ 
} /*  FrIf_TxJob_02  */ ;
/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_TxHandleType, FRIF_CONST) TxHandles_0_13[] = 
{
  17U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_4912_A_FlexRay_S_49_B_1_R_2_ChA_OUT  */ , 
  18U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_4902_A_FlexRay_S_49_B_0_R_2_ChA_OUT  */ 
} /*  FrIf_TxJob_01  */ ;
/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_TxHandleType, FRIF_CONST) TxHandles_0_14[] = 
{
  24U /*  TX INVALID HANDLE  */ , 
  16U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_5102_A_FlexRay_S_51_B_0_R_2_ChA_OUT  */ 
} /*  FrIf_TxJob_01  */ ;
/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_TxHandleType, FRIF_CONST) TxHandles_0_15[] = 
{
  19U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_1201_A_FlexRay_S_12_B_0_R_1_ChA_OUT  */ 
} /*  FrIf_TxJob_01  */ ;
/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_TxHandleType, FRIF_CONST) TxHandles_0_16[] = 
{
  21U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_1001_A_FlexRay_S_10_B_0_R_1_ChA_OUT  */ 
} /*  FrIf_TxJob_01  */ ;
/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_TxHandleType, FRIF_CONST) TxHandles_0_17[] = 
{
  23U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_801_A_FlexRay_S_8_B_0_R_1_ChA_OUT  */ 
} /*  FrIf_TxJob_01  */ ;
/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_TxHandleType, FRIF_CONST) TxHandles_0_18[] = 
{
  22U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_901_A_FlexRay_S_9_B_0_R_1_ChA_OUT  */ 
} /*  FrIf_TxJob_01  */ ;
/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_TxHandleType, FRIF_CONST) TxHandles_0_19[] = 
{
  20U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_1101_A_FlexRay_S_11_B_0_R_1_ChA_OUT  */ 
} /*  FrIf_TxJob_01  */ ;


/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONSTP2CONST(FrIf_TxHandleType, FRIF_CONST, FRIF_CONST) FrIf_TxHandles_0[] = 
{ 
  TxHandles_0_0
  ,TxHandles_0_1
  ,TxHandles_0_2
  ,TxHandles_0_3
  ,TxHandles_0_4
  ,TxHandles_0_5
  ,TxHandles_0_6
  ,TxHandles_0_7
  ,TxHandles_0_8
  ,TxHandles_0_9
  ,TxHandles_0_10
  ,TxHandles_0_11
  ,TxHandles_0_12
  ,TxHandles_0_13
  ,TxHandles_0_14
  ,TxHandles_0_15
  ,TxHandles_0_16
  ,TxHandles_0_17
  ,TxHandles_0_18
  ,TxHandles_0_19
};


/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_CycleMaskType, FRIF_CONST) FrIf_TxCycleMasks_0[] = 
{
  0U
  , 31U
  , 3U
  , 0U
  , 0U
  , 0U
  , 0U
  , 0U
  , 0U
  , 0U
  , 0U
  , 0U
  , 0U
  , 1U
  , 1U
  , 0U
  , 0U
  , 0U
  , 0U
  , 0U
};


#define FRIF_STOP_SEC_CONST_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


#define FRIF_START_SEC_CONST_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


/* -----------------------------------------------------------------------------
    &&&~ Constants
 ----------------------------------------------------------------------------- */

CONST(FrIf_ConfigType, FRIF_CONST) FrIf_Config = 0u;


CONSTP2CONST(FrIf_TxPduDescriptorType, FRIF_CONST, FRIF_CONST) FrIf_Ctrl2TxPduDescriptors[] =
{
  FrIf_TxPduDescriptors_0 /*  contr_EPS_A_FlexRay  */ 
};


CONSTP2CONST(FrIf_RxPduDescriptorType, FRIF_CONST, FRIF_CONST) FrIf_Ctrl2RxPduDescriptors[] =
{
  FrIf_RxPduDescriptors_0 /*  contr_EPS_A_FlexRay  */ 
};


CONSTP2CONST(FrIf_FrameLayoutElementType, FRIF_CONST, FRIF_CONST) FrIf_Ctrl2TxFrameLayoutElements[] =
{
  FrIf_TxFrameLayoutElements_0 /*  contr_EPS_A_FlexRay  */ 
};


CONSTP2CONST(FrIf_FrameLayoutElementType, FRIF_CONST, FRIF_CONST) FrIf_Ctrl2RxFrameLayoutElements[] =
{
  FrIf_RxFrameLayoutElements_0 /*  contr_EPS_A_FlexRay  */ 
};


CONSTP2CONST(FrIf_FrameDescriptorType, FRIF_CONST, FRIF_CONST) FrIf_Ctrl2TxFrameDescriptors[] =
{
  FrIf_TxFrameDescriptors_0 /*  contr_EPS_A_FlexRay  */ 
};


CONSTP2CONST(FrIf_FrameDescriptorType, FRIF_CONST, FRIF_CONST) FrIf_Ctrl2RxFrameDescriptors[] =
{
  FrIf_RxFrameDescriptors_0 /*  contr_EPS_A_FlexRay  */ 
};


CONST(PduIdType, FRIF_CONST) FrIf_Ctrl2MaxTxPduId[] = 
{
  21U /*  contr_EPS_A_FlexRay  */ 
};


CONST(FrIf_TxHandleType, FRIF_CONST) FrIf_Ctrl2MaxTxFrameId[] = 
{
  23U /*  contr_EPS_A_FlexRay  */ 
};


CONST(FrIf_TxHandleType, FRIF_CONST) FrIf_Ctrl2InvalidTxHandle[] = 
{
  24U /*  contr_EPS_A_FlexRay  */ 
};


CONST(FrIf_RxHandleType, FRIF_CONST) FrIf_Ctrl2InvalidRxHandle[] = 
{
  45U /*  contr_EPS_A_FlexRay  */ 
};


CONSTP2VAR(FrIf_NumberOfPduType, FRIF_CONST, FRIF_VAR_NOINIT) FrIf_Ctrl2TxPduWasSentFlags[] = 
{
  FrIf_TxPduWasSentFlags_0 /*  contr_EPS_A_FlexRay  */ 
};


CONST(PduIdType, FRIF_CONST) FrIf_Ctrl2NumberOfTxRequestCounters[] = 
{
  0U /*  contr_EPS_A_FlexRay  */ 
};


CONSTP2VAR(uint32, FRIF_CONST, FRIF_VAR_NOINIT) FrIf_Ctrl2FrameBuffer[] =
{
  FrIf_FrameBuffer_0 /*  contr_EPS_A_FlexRay  */ 
};




CONSTP2VAR(uint8, FRIF_CONST, FRIF_VAR_NOINIT) FrIf_Ctrl2TxPduDirtyBits[] =
{
  FrIf_TxPduDirtyBits_0 /*  contr_EPS_A_FlexRay  */ 
};

CONSTP2VAR(uint8, FRIF_CONST, FRIF_VAR_NOINIT) FrIf_Ctrl2TxPduTxRequestCounters[] =
{
  FrIf_TxPduTxRequestCounters_0 /*  contr_EPS_A_FlexRay  */ 
};


CONSTP2CONST(FrIf_JobDescriptorType, FRIF_CONST, FRIF_CONST) FrIf_Clst2JobDescriptors[] =
{
  FrIf_JobDescriptors_0 /*  A_FlexRay  */ 
};


CONSTP2CONST(FrIf_TxHandlePtrType, FRIF_CONST, FRIF_CONST) FrIf_Clst2TxComHandleTable[] =
{
  FrIf_TxHandles_0 /*  A_FlexRay  */ 
};


CONSTP2CONST(FrIf_RxHandlePtrType, FRIF_CONST, FRIF_CONST) FrIf_Clst2RxComHandleTable[] =
{
  FrIf_RxHandles_0 /*  A_FlexRay  */ 
};


CONSTP2CONST(FrIf_CycleMaskType, FRIF_CONST, FRIF_CONST) FrIf_Clst2TxCycleMasks[] =
{
  FrIf_TxCycleMasks_0 /*  A_FlexRay  */ 
};


CONSTP2CONST(FrIf_CycleMaskType, FRIF_CONST, FRIF_CONST) FrIf_Clst2RxCycleMasks[] =
{
  FrIf_RxCycleMasks_0 /*  A_FlexRay  */ 
};


CONST(uint16, FRIF_CONST) FrIf_Clst2MacroTicksPerCycle[] = 
{
  3636U /*  A_FlexRay  */ 
};


CONST(uint16, FRIF_CONST) FrIf_Clst2MacroTickLengthInNanoSeconds[] = 
{
  1375U /*  A_FlexRay  */ 
};


CONST(uint8, FRIF_CONST) FrIf_Clst2NumberOfJobs[] = 
{
  4U /*  A_FlexRay  */ 
};



#define FRIF_STOP_SEC_CONST_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

