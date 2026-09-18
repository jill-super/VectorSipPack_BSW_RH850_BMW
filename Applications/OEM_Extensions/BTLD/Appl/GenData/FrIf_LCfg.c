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


#define FRIF_LCFG_SOURCE

/* -----------------------------------------------------------------------------
    &&&~ Includes
 ----------------------------------------------------------------------------- */
 
 #include "FrIf_Priv.h"
 #include "FrTp_Cbk.h"
 
 
 #include "FrXcp_Cbk.h"
 
  

 /* -----------------------------------------------------------------------------
    &&&~ Constants and Variables
 ----------------------------------------------------------------------------- */


#define FRIF_START_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

static VAR(FrIf_NumberOfPduType, FRIF_VAR_NOINIT) FrIf_TxPduWasSentFlags_0[15];
static VAR(uint32, FRIF_VAR_NOINIT) FrIf_FrameBuffer_0[64];
static VAR(uint8, FRIF_VAR_NOINIT) FrIf_TxPduDirtyBits_0[2];
static VAR(uint8, FRIF_VAR_NOINIT) FrIf_TxPduTxRequestCounters_0[1];

#define FRIF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/* -----------------------------------------------------------------------------
    &&&~ TriggerTransmit
 ----------------------------------------------------------------------------- */

#ifndef PDUR_FRIFTRIGGERTRANSMIT					 
/* PRQA S 3453 1 */ /* MD_MSR_19.7 */
#define PDUR_FRIFTRIGGERTRANSMIT(PduId, Payload) E_NOT_OK
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
/* PRQA S 3453 1 */ /* MD_MSR_19.7 */
#define PDUR_FRIFRXINDICATION(PduId, Payload)
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
/* PRQA S 3453 1 */ /* MD_MSR_19.7 */
#define PDUR_FRIFTXCONFIRMATION(PduId)
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


  if ((FrChannel == FR_CHANNEL_A) && (ClstIdx == 0))
  {
    ErrorId_Acs = (Dem_EventIdType)DemConf_DemEventParameter_AutoCreatedDemEvent_A_FlexRay_FRIF_E_ACS_CH_A;
    ErrorId_Nit = (Dem_EventIdType)DemConf_DemEventParameter_AutoCreatedDemEvent_A_FlexRay_FRIF_E_NIT_CH_A;
    ErrorId_Sw  = (Dem_EventIdType)DemConf_DemEventParameter_AutoCreatedDemEvent_A_FlexRay_FRIF_E_SW_CH_A;
  }  
  if ((FrChannel == FR_CHANNEL_B) && (ClstIdx == 0))
  {
    ErrorId_Acs = (Dem_EventIdType)DemConf_DemEventParameter_AutoCreatedDemEvent_A_FlexRay_FRIF_E_ACS_CH_B;
    ErrorId_Nit = (Dem_EventIdType)DemConf_DemEventParameter_AutoCreatedDemEvent_A_FlexRay_FRIF_E_NIT_CH_B;
    ErrorId_Sw  = (Dem_EventIdType)DemConf_DemEventParameter_AutoCreatedDemEvent_A_FlexRay_FRIF_E_SW_CH_B;
  }

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
  {0U, 0U} /*  FrIfTxPdu_xcpdynamic254_8, TX INVALID HANDLE  */ , 
  {1U, 0U} /*  FrIfTxPdu_xcpdynamic254_7, TX INVALID HANDLE  */ , 
  {2U, 0U} /*  FrIfTxPdu_xcpdynamic254_6, TX INVALID HANDLE  */ , 
  {3U, 0U} /*  FrIfTxPdu_xcpdynamic254_5, TX INVALID HANDLE  */ , 
  {4U, 0U} /*  FrIfTxPdu_xcpdynamic254_4, TX INVALID HANDLE  */ , 
  {5U, 0U} /*  FrIfTxPdu_xcpdynamic254_3, TX INVALID HANDLE  */ , 
  {6U, 0U} /*  FrIfTxPdu_xcpdynamic254_2, TX INVALID HANDLE  */ , 
  {7U, 0U} /*  FrIfTxPdu_xcpdynamic254_1, TX INVALID HANDLE  */ , 
  {8U, 0U} /*  FrIfTxPdu_dummy32bslave, TX INVALID HANDLE  */ , 
  {9U, 0U} /*  FrIfTxPdu_TL_ECU_TRNSM_FR_32, TX INVALID HANDLE  */ , 
  {10U, 0U} /*  FrIfTxPdu_dummy16bstatic, TX INVALID HANDLE  */ 
};

/* -----------------------------------------------------------------------------
    &&&~ Tx Pdu Descriptors
 ----------------------------------------------------------------------------- */
 
static CONST(FrIf_TxPduDescriptorType, FRIF_CONST) FrIf_TxPduDescriptors_0[] = 
{
  {0UL, XcpConf_XcpTxPdu_xcpdynamic254_8_23008def, 254U, 0x13U} /*  xcpdynamic254_8, Index: 0, FrIfTxPduId: 0  */ , 
  {0UL, XcpConf_XcpTxPdu_xcpdynamic254_7_23008def, 254U, 0x13U} /*  xcpdynamic254_7, Index: 1, FrIfTxPduId: 1  */ , 
  {0UL, XcpConf_XcpTxPdu_xcpdynamic254_6_23008def, 254U, 0x13U} /*  xcpdynamic254_6, Index: 2, FrIfTxPduId: 2  */ , 
  {0UL, XcpConf_XcpTxPdu_xcpdynamic254_5_23008def, 254U, 0x13U} /*  xcpdynamic254_5, Index: 3, FrIfTxPduId: 3  */ , 
  {0UL, XcpConf_XcpTxPdu_xcpdynamic254_4_23008def, 254U, 0x13U} /*  xcpdynamic254_4, Index: 4, FrIfTxPduId: 4  */ , 
  {0UL, XcpConf_XcpTxPdu_xcpdynamic254_3_23008def, 254U, 0x13U} /*  xcpdynamic254_3, Index: 5, FrIfTxPduId: 5  */ , 
  {0UL, XcpConf_XcpTxPdu_xcpdynamic254_2_23008def, 254U, 0x13U} /*  xcpdynamic254_2, Index: 6, FrIfTxPduId: 6  */ , 
  {0UL, XcpConf_XcpTxPdu_xcpdynamic254_1_23008def, 254U, 0x13U} /*  xcpdynamic254_1, Index: 7, FrIfTxPduId: 7  */ , 
  {0UL, XcpConf_XcpTxPdu_dummy32bslave_23008def, 32U, 0x13U} /*  dummy32bslave, Index: 8, FrIfTxPduId: 8  */ , 
  {0UL, FrTpConf_FrTpTxPdu_TxPduPool_TL_ECU_TRNSM_FR_32_00BC0001_Tp, 32U, 0x12U} /*  TL_ECU_TRNSM_FR_32, Index: 9, FrIfTxPduId: 9  */ , 
  {0UL, XcpConf_XcpTxPdu_dummy16bstatic_23008def, 16U, 0x13U} /*  dummy16bstatic, Index: 10, FrIfTxPduId: 10  */ 
};

/* -----------------------------------------------------------------------------
    &&&~ Tx Frame Layout Elements
 ----------------------------------------------------------------------------- */

static CONST(FrIf_FrameLayoutElementType, FRIF_CONST) FrIf_TxFrameLayoutElements_0[] = 
{
  {0UL, 0U, 0U, 0x00U} /*  sn_ED55EE5E9A8836A4E0402EA019872B37_1_ED55FD352928D633E0402EA019872B44_1  */ , 
  {1UL, 0U, 0U, 0x00U} /*  sn_ED55EE5E9A7A36A4E0402EA019872B37_1_ED55EF63738BA24EE0402EA019872B3F_1  */ , 
  {2UL, 0U, 0U, 0x00U} /*  sn_ED55D568B7B7E932E0402EA019874AD0_1_ED55DDBF3F3F1652E0402EA01987662B_1  */ , 
  {3UL, 0U, 0U, 0x00U} /*  sn_ED55AF29C9332294E0402EA019874515_1_ED55D568B7B1E932E0402EA019874AD0_1  */ , 
  {4UL, 0U, 0U, 0x00U} /*  sn_ED55D3C388349965E0402EA019872AD5_1_ED55AF29C92D2294E0402EA019874515_1  */ , 
  {5UL, 0U, 0U, 0x00U} /*  sn_ED55AF29C91F2294E0402EA019874515_1_ED55CA2D406A1E52E0402EA01987021E_1  */ , 
  {6UL, 0U, 0U, 0x00U} /*  sn_ED55AF29C91C2294E0402EA019874515_1_ED55B6DAA560EF99E0402EA019870214_1  */ , 
  {7UL, 0U, 0U, 0x00U} /*  sn_fdeafba7ae254e1e80d60b106053d532_1_7d44d6d889bf437cb0ff888debf8555c_1  */ , 
  {8UL, 0U, 0U, 0x00U} /*  sn_2ed003fa08904453b0dfb985d50da316_4_039aef2810e44f2c9248813621a8312e_4  */ , 
  {9UL, 0U, 0U, 0x00U} /*  sn_ada9591f59be44a18409d95fca100f53_5_c623861e6a0749cc9d81d43585ea7f81_4  */ , 
  {10UL, 0U, 0U, 0x00U} /*  sn_d6c051138a624b7197665ea502ed9c68_3_9779c0f9609648bfa4441a0865c580a6_3  */ , 
  {10UL, 0U, 0U, 0x00U} /*  sn_d6c051138a624b7197665ea502ed9c68_3_9779c0f9609648bfa4441a0865c580a6_3  */ , 
  {10UL, 0U, 0U, 0x00U} /*  sn_d6c051138a624b7197665ea502ed9c68_3_9779c0f9609648bfa4441a0865c580a6_3  */ , 
  {10UL, 0U, 0U, 0x00U} /*  sn_d6c051138a624b7197665ea502ed9c68_3_9779c0f9609648bfa4441a0865c580a6_3  */ , 
  {10UL, 0U, 0U, 0x00U} /*  sn_d6c051138a624b7197665ea502ed9c68_3_9779c0f9609648bfa4441a0865c580a6_3  */ 
};


/* -----------------------------------------------------------------------------
    &&&~ Tx Frame Descriptors
 ----------------------------------------------------------------------------- */
static CONST(FrIf_FrameDescriptorType, FRIF_CONST) FrIf_TxFrameDescriptors_0[] = 
{
  {0U, 1U, 254U, 0x01U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_30101_A_FlexRay_S_301_B_0_R_1_ChA_OUT  */ , 
  {1U, 1U, 254U, 0x01U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_30001_A_FlexRay_S_300_B_0_R_1_ChA_OUT  */ , 
  {2U, 1U, 254U, 0x01U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_29901_A_FlexRay_S_299_B_0_R_1_ChA_OUT  */ , 
  {3U, 1U, 254U, 0x01U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_29801_A_FlexRay_S_298_B_0_R_1_ChA_OUT  */ , 
  {4U, 1U, 254U, 0x01U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_29701_A_FlexRay_S_297_B_0_R_1_ChA_OUT  */ , 
  {5U, 1U, 254U, 0x01U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_29601_A_FlexRay_S_296_B_0_R_1_ChA_OUT  */ , 
  {6U, 1U, 254U, 0x01U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_29501_A_FlexRay_S_295_B_0_R_1_ChA_OUT  */ , 
  {7U, 1U, 254U, 0x01U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_29401_A_FlexRay_S_294_B_0_R_1_ChA_OUT  */ , 
  {8U, 1U, 32U, 0x01U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_22001_A_FlexRay_S_220_B_0_R_1_ChA_OUT  */ , 
  {9U, 1U, 32U, 0x01U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_18301_A_FlexRay_S_183_B_0_R_1_ChA_OUT  */ , 
  {10U, 1U, 16U, 0x01U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_1201_A_FlexRay_S_12_B_0_R_1_ChA_OUT  */ , 
  {11U, 1U, 16U, 0x01U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_1101_A_FlexRay_S_11_B_0_R_1_ChA_OUT  */ , 
  {12U, 1U, 16U, 0x01U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_1001_A_FlexRay_S_10_B_0_R_1_ChA_OUT  */ , 
  {13U, 1U, 16U, 0x01U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_901_A_FlexRay_S_9_B_0_R_1_ChA_OUT  */ , 
  {14U, 1U, 16U, 0x01U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_801_A_FlexRay_S_8_B_0_R_1_ChA_OUT  */ 
};

/* -----------------------------------------------------------------------------
    &&&~ Rx Pdu Descriptors
 ----------------------------------------------------------------------------- */

static CONST(FrIf_RxPduDescriptorType, FRIF_CONST) FrIf_RxPduDescriptors_0[] = 
{
  {XcpConf_XcpRxPdu_dummy32bmaster_23008def, 32U, 0x03U} /*  dummy32bmaster  */ , 
  {FrTpConf_FrTpRxPdu_RxPduPool_TL_BRC_FR_32_Tp, 32U, 0x02U} /*  TL_BRC_FR_32  */ , 
  {FrTpConf_FrTpRxPdu_RxPduPool_TL_MST_GW_TRNSM_FR_254_00980001_Tp, 254U, 0x02U} /*  TL_MST_GW_TRNSM_FR_254  */ 
};


/* -----------------------------------------------------------------------------
    &&&~ Rx Frame Layout Elements
 ----------------------------------------------------------------------------- */

static CONST(FrIf_FrameLayoutElementType, FRIF_CONST) FrIf_RxFrameLayoutElements_0[] = 
{
  {0UL, 0U, 0U, 0x00U} /*  sn_6acd24342b914dee85c6ec4bb84bea56_4_2e91d703d77a465ba5c92f45777cf2d1_4  */ , 
  {1UL, 0U, 0U, 0x00U} /*  sn_b89d750f03b54dc591beef3d97af79e1_6_99b35db8d0034c95bddada0c4e168dbd_5  */ , 
  {1UL, 0U, 0U, 0x00U} /*  sn_b89d750f03b54dc591beef3d97af79e1_6_99b35db8d0034c95bddada0c4e168dbd_5  */ , 
  {1UL, 0U, 0U, 0x00U} /*  sn_b89d750f03b54dc591beef3d97af79e1_6_99b35db8d0034c95bddada0c4e168dbd_5  */ , 
  {1UL, 0U, 0U, 0x00U} /*  sn_b89d750f03b54dc591beef3d97af79e1_6_99b35db8d0034c95bddada0c4e168dbd_5  */ , 
  {1UL, 0U, 0U, 0x00U} /*  sn_b89d750f03b54dc591beef3d97af79e1_6_99b35db8d0034c95bddada0c4e168dbd_5  */ , 
  {2UL, 0U, 0U, 0x00U} /*  sn_d187a29661e448debbfa1c1db2495add_2_161ebe01a13246f5bc130ce6f196d980_1  */ 
};


/* -----------------------------------------------------------------------------
    &&&~ Rx Frame Descriptors
 ----------------------------------------------------------------------------- */

static CONST(FrIf_FrameDescriptorType, FRIF_CONST) FrIf_RxFrameDescriptors_0[] = 
{
  {0U, 1U, 32U, 0x00U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_21901_A_FlexRay_S_219_B_0_R_1_ChA_IN  */ , 
  {1U, 1U, 32U, 0x00U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_21301_A_FlexRay_S_213_B_0_R_1_ChA_IN  */ , 
  {2U, 1U, 32U, 0x00U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_21201_A_FlexRay_S_212_B_0_R_1_ChA_IN  */ , 
  {3U, 1U, 32U, 0x00U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_21101_A_FlexRay_S_211_B_0_R_1_ChA_IN  */ , 
  {4U, 1U, 32U, 0x00U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_21001_A_FlexRay_S_210_B_0_R_1_ChA_IN  */ , 
  {5U, 1U, 32U, 0x00U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_20901_A_FlexRay_S_209_B_0_R_1_ChA_IN  */ , 
  {6U, 1U, 254U, 0x00U} /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_14701_A_FlexRay_S_147_B_0_R_1_ChA_IN  */ 
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
    6U /*  MaxColumnNumber  */ , 
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
    9U /*  MaxColumnNumber  */ , 
    255U /*  MinTxConfJobNo  */ , 
    254U /*  MaxTxConfJobNo  */ , 
    0U /*  JobConfig  */ 
  } /*  FrIf_TxJob_02  */ , 
  {
    1842U /*  StartTimeInMacroTicks  */ , 
    24U /*  StartTimeProtectedRange  */ , 
    1824U /*  EndTimeProtectedRange  */ , 
    1363U /*  MaxDelay  */ , 
    10U /*  MinColumnNumber  */ , 
    9U /*  MaxColumnNumber  */ , 
    3U /*  MinTxConfJobNo  */ , 
    3U /*  MaxTxConfJobNo  */ , 
    0U /*  JobConfig  */ 
  } /*  FrIf_RxJob_01  */ , 
  {
    2273U /*  StartTimeInMacroTicks  */ , 
    24U /*  StartTimeProtectedRange  */ , 
    1824U /*  EndTimeProtectedRange  */ , 
    909U /*  MaxDelay  */ , 
    10U /*  MinColumnNumber  */ , 
    14U /*  MaxColumnNumber  */ , 
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
  6U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_14701_A_FlexRay_S_147_B_0_R_1_ChA_IN  */ 
} /*  FrIf_RxJob_02  */ ;
/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_RxHandleType, FRIF_CONST) RxHandles_0_1[] = 
{
  5U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_20901_A_FlexRay_S_209_B_0_R_1_ChA_IN  */ 
} /*  FrIf_RxJob_02  */ ;
/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_RxHandleType, FRIF_CONST) RxHandles_0_2[] = 
{
  4U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_21001_A_FlexRay_S_210_B_0_R_1_ChA_IN  */ 
} /*  FrIf_RxJob_02  */ ;
/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_RxHandleType, FRIF_CONST) RxHandles_0_3[] = 
{
  3U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_21101_A_FlexRay_S_211_B_0_R_1_ChA_IN  */ 
} /*  FrIf_RxJob_02  */ ;
/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_RxHandleType, FRIF_CONST) RxHandles_0_4[] = 
{
  2U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_21201_A_FlexRay_S_212_B_0_R_1_ChA_IN  */ 
} /*  FrIf_RxJob_02  */ ;
/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_RxHandleType, FRIF_CONST) RxHandles_0_5[] = 
{
  1U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_21301_A_FlexRay_S_213_B_0_R_1_ChA_IN  */ 
} /*  FrIf_RxJob_02  */ ;
/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_RxHandleType, FRIF_CONST) RxHandles_0_6[] = 
{
  0U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_21901_A_FlexRay_S_219_B_0_R_1_ChA_IN  */ 
} /*  FrIf_RxJob_02  */ ;


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
  , 0U
};


/* -----------------------------------------------------------------------------
    &&&~ Tx Handle tables
 ----------------------------------------------------------------------------- */

/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_TxHandleType, FRIF_CONST) TxHandles_0_0[] = 
{
  9U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_18301_A_FlexRay_S_183_B_0_R_1_ChA_OUT  */ 
} /*  FrIf_TxJob_02  */ ;
/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_TxHandleType, FRIF_CONST) TxHandles_0_1[] = 
{
  8U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_22001_A_FlexRay_S_220_B_0_R_1_ChA_OUT  */ 
} /*  FrIf_TxJob_02  */ ;
/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_TxHandleType, FRIF_CONST) TxHandles_0_2[] = 
{
  2U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_29901_A_FlexRay_S_299_B_0_R_1_ChA_OUT  */ 
} /*  FrIf_TxJob_02  */ ;
/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_TxHandleType, FRIF_CONST) TxHandles_0_3[] = 
{
  4U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_29701_A_FlexRay_S_297_B_0_R_1_ChA_OUT  */ 
} /*  FrIf_TxJob_02  */ ;
/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_TxHandleType, FRIF_CONST) TxHandles_0_4[] = 
{
  3U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_29801_A_FlexRay_S_298_B_0_R_1_ChA_OUT  */ 
} /*  FrIf_TxJob_02  */ ;
/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_TxHandleType, FRIF_CONST) TxHandles_0_5[] = 
{
  5U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_29601_A_FlexRay_S_296_B_0_R_1_ChA_OUT  */ 
} /*  FrIf_TxJob_02  */ ;
/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_TxHandleType, FRIF_CONST) TxHandles_0_6[] = 
{
  1U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_30001_A_FlexRay_S_300_B_0_R_1_ChA_OUT  */ 
} /*  FrIf_TxJob_02  */ ;
/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_TxHandleType, FRIF_CONST) TxHandles_0_7[] = 
{
  6U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_29501_A_FlexRay_S_295_B_0_R_1_ChA_OUT  */ 
} /*  FrIf_TxJob_02  */ ;
/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_TxHandleType, FRIF_CONST) TxHandles_0_8[] = 
{
  7U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_29401_A_FlexRay_S_294_B_0_R_1_ChA_OUT  */ 
} /*  FrIf_TxJob_02  */ ;
/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_TxHandleType, FRIF_CONST) TxHandles_0_9[] = 
{
  0U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_30101_A_FlexRay_S_301_B_0_R_1_ChA_OUT  */ 
} /*  FrIf_TxJob_02  */ ;
/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_TxHandleType, FRIF_CONST) TxHandles_0_10[] = 
{
  10U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_1201_A_FlexRay_S_12_B_0_R_1_ChA_OUT  */ 
} /*  FrIf_TxJob_01  */ ;
/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_TxHandleType, FRIF_CONST) TxHandles_0_11[] = 
{
  12U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_1001_A_FlexRay_S_10_B_0_R_1_ChA_OUT  */ 
} /*  FrIf_TxJob_01  */ ;
/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_TxHandleType, FRIF_CONST) TxHandles_0_12[] = 
{
  14U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_801_A_FlexRay_S_8_B_0_R_1_ChA_OUT  */ 
} /*  FrIf_TxJob_01  */ ;
/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_TxHandleType, FRIF_CONST) TxHandles_0_13[] = 
{
  13U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_901_A_FlexRay_S_9_B_0_R_1_ChA_OUT  */ 
} /*  FrIf_TxJob_01  */ ;
/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_TxHandleType, FRIF_CONST) TxHandles_0_14[] = 
{
  11U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_1101_A_FlexRay_S_11_B_0_R_1_ChA_OUT  */ 
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
};


/* PRQA S 3408 1 */ /* MD_FrIf_3408 */
CONST(FrIf_CycleMaskType, FRIF_CONST) FrIf_TxCycleMasks_0[] = 
{
  0U
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
  10U /*  contr_EPS_A_FlexRay  */ 
};


CONST(FrIf_TxHandleType, FRIF_CONST) FrIf_Ctrl2MaxTxFrameId[] = 
{
  14U /*  contr_EPS_A_FlexRay  */ 
};


CONST(FrIf_TxHandleType, FRIF_CONST) FrIf_Ctrl2InvalidTxHandle[] = 
{
  15U /*  contr_EPS_A_FlexRay  */ 
};


CONST(FrIf_RxHandleType, FRIF_CONST) FrIf_Ctrl2InvalidRxHandle[] = 
{
  7U /*  contr_EPS_A_FlexRay  */ 
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

