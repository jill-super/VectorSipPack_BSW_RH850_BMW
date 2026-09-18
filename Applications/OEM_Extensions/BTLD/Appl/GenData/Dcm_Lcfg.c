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
 *            Module: Dcm
 *           Program: MSR BAC 4.x (MSR_Bmw_SLP4)
 *          Customer: Nexteer Automotive Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Renesas RH850 P1M R7F701363EAFP
 *    License Scope : The usage is restricted to CBD1700369_D04
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Dcm_Lcfg.c
 *   Generation Time: 2018-01-29 10:58:19
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



#define DCM_LCFG_SOURCE
/* ----------------------------------------------
 ~&&&   Includes
---------------------------------------------- */
                                                                                                                                                     /* PRQA S 0857, 0828 EOF */ /* MD_MSR_1.1_857, MD_MSR_1.1_828 */
#include "Dcm.h"
#include "Rte_Dcm.h"
#include "Det.h"
#include "Dcm_Int.h"
#include "PduR_Dcm.h"
#include "ComM_Dcm.h"
/* ----------------------------------------------
 ~&&&   Defines
---------------------------------------------- */
#if (DCM_DIDMGR_NVM_READ_ENABLED == STD_ON) || \
    (DCM_DIDMGR_NVM_WRITE_ENABLED == STD_ON)
# if defined(NVM_VENDOR_ID)
#  if (NVM_VENDOR_ID == 30u)
/* Only Vector NvM supports this feature up to now */
#   define Dcm_GetDcmNvMBlockId(blockId)                             (uint16)(NvM_GetDcmBlockId(blockId))                                            /* PRQA S 3453 */ /* QAC 7.0:  A function could probably be used instead of this function-like macro */ /* Macro is more efficient! */
#  endif
# endif

/* Default NvM handle offset */
# if !defined(Dcm_GetDcmNvMBlockId)
#  define Dcm_GetDcmNvMBlockId(blockId)                              (uint16)(blockId)                                                               /* PRQA S 3453 */ /* QAC 7.0:  A function could probably be used instead of this function-like macro */ /* Macro is more efficient! */
# endif
#endif
/* ----------------------------------------------
 ~&&&   Call-back function declarations
---------------------------------------------- */
#define DCM_START_SEC_CALLOUT_CODE
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore */
/***********************************************************************************************************************
 *  Dcm_RidMgr_0F0C_Start()
***********************************************************************************************************************/
/*! \brief         Wraps RIDs execution interface.
 *  \details       Converts uint8 arrays to other signal types required by the RID execution interface and vice versa.
 *  \param[in]     OpStatus           The operation status
 *  \param[in,out] pMsgContext        Message-related information for one diagnostic protocol identifier
 *  \param[in,out] DataLength         IN: Concrete length of the dynamic request signal
 *                                    OUT: Concrete length of the dynamic response Signal
 *  \param[out]    ErrorCode          Negative response code
 *  \return        E_OK               The operation is finished
 *  \return        DCM_E_PENDING      The operation is not yet finished
 *  \return        DCM_E_FORCE_RCRRP  Forces a RCR-RP response
 *                                    The call out will called again once the response is sent. The OpStatus parameter
 *                                    will contain the transmission result
 *  \return        E_NOT_OK           The operation has failed. A concrete NRC shall be set, otherwise the DCM sends NRC
 *                                    0x22
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   FALSE
 *  \pre           -
***********************************************************************************************************************/
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_0F0C_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_RidMgr_1003_Start()
***********************************************************************************************************************/
/*! \brief         Wraps RIDs execution interface.
 *  \details       Converts uint8 arrays to other signal types required by the RID execution interface and vice versa.
 *  \param[in]     OpStatus           The operation status
 *  \param[in,out] pMsgContext        Message-related information for one diagnostic protocol identifier
 *  \param[in,out] DataLength         IN: Concrete length of the dynamic request signal
 *                                    OUT: Concrete length of the dynamic response Signal
 *  \param[out]    ErrorCode          Negative response code
 *  \return        E_OK               The operation is finished
 *  \return        DCM_E_PENDING      The operation is not yet finished
 *  \return        DCM_E_FORCE_RCRRP  Forces a RCR-RP response
 *                                    The call out will called again once the response is sent. The OpStatus parameter
 *                                    will contain the transmission result
 *  \return        E_NOT_OK           The operation has failed. A concrete NRC shall be set, otherwise the DCM sends NRC
 *                                    0x22
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   FALSE
 *  \pre           -
***********************************************************************************************************************/
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_1003_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_ServiceNoPostProcessor()
***********************************************************************************************************************/
/*! \brief         Dummy post-processor
 *  \details       This post-processor is called for diagnostic services which do not require any post processing.
 *  \param[in]     status  The post-processing status
 *  \context       TASK
 *  \reentrant     FALSE
 *  \pre           -
***********************************************************************************************************************/
DCM_LOCAL FUNC(void, DCM_CALLOUT_CODE) Dcm_ServiceNoPostProcessor(Dcm_ConfirmationStatusType status);
#define DCM_STOP_SEC_CALLOUT_CODE
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore */
/* ----------------------------------------------
 ~&&&   Uninitialized RAM 8-Bit
---------------------------------------------- */
#define DCM_START_SEC_VAR_NO_INIT_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore */
/*! DCM protocol descriptor */
DCM_LOCAL VAR(Dcm_MsgItemType, DCM_VAR_NOINIT) Dcm_CfgNetBuffer_000[4096];
#define DCM_STOP_SEC_VAR_NO_INIT_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore */
/* ----------------------------------------------
 ~&&&   ROM 8-Bit
---------------------------------------------- */
#define DCM_START_SEC_CONST_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore */
/*! TxPduId to DCM connection map */
CONST(Dcm_NetConnRefMemType, DCM_CONST) Dcm_CfgNetTxPduInfo[14]=
{
    9u
  , 8u
  ,13u
  ,12u
  ,11u
  ,10u
  , 6u
  , 7u
  , 4u
  , 5u
  , 0u
  , 2u
  , 3u
  , 1u
};
/*! Map of DCM relevant network handles */
CONST(Dcm_CfgNetNetIdRefMemType, DCM_CONST) Dcm_CfgNetConnComMChannelMap[1]=
{
    0u
};
/*! Service 0x28 list of channels for the all-comm-channel parameter */
CONST(Dcm_CfgNetNetIdRefMemType, DCM_CONST) Dcm_CfgNetComCtrlChannelListAll[2]=
{
   1u
  , 0u
};
/*! Look up table of DCM service identifiers */
CONST(uint8, DCM_CONST) Dcm_CfgDiagSvcIdLookUpTable[14]=
{
   13u
  ,0x10u
  ,0x11u
  ,0x22u
  ,0x27u
  ,0x28u
  ,0x2Eu
  ,0x31u
  ,0x34u
  ,0x36u
  ,0x37u
  ,0x3Du
  ,0x3Eu
  ,0x85u
};
/*! Service 0x10 look up table  */
CONST(uint8, DCM_CONST) Dcm_CfgSvc10SubFuncLookUpTable[4]=
{
   3u
  ,0x01u
  ,0x02u
  ,0x03u
};
/*! Service 0x11 look up table  */
CONST(uint8, DCM_CONST) Dcm_CfgSvc11SubFuncLookUpTable[2]=
{
   1u
  ,0x01u
};
/*! Service 0x27 look up table  */
CONST(uint8, DCM_CONST) Dcm_CfgSvc27SubFuncLookUpTable[3]=
{
   2u
  ,0x11u
  ,0x12u
};
/*! Service 0x28 look up table  */
CONST(uint8, DCM_CONST) Dcm_CfgSvc28SubFuncLookUpTable[4]=
{
   3u
  ,0x01u
  ,0x02u
  ,0x03u
};
/*! Service 0x28 look up table  */
CONST(uint8, DCM_CONST) Dcm_CfgSvc28MessageTypeLookUpTable[4]=
{
   3u
  ,0x01u
  ,0x02u
  ,0x03u
};
/*! Service 0x28 network ID lookup */
CONST(uint8, DCM_CONST) Dcm_CfgSvc28SubNetIdLookUp[2]=
{
   1u
  ,0x00u
};
/*! Service 0x3E look up table  */
CONST(uint8, DCM_CONST) Dcm_CfgSvc3ESubFuncLookUpTable[2]=
{
   1u
  ,0x00u
};
/*! Look up table of service 0x85 */
CONST(uint8, DCM_CONST) Dcm_CfgSvc85SubFuncLookUpTable[2]=
{
   1u
  ,0x02u
};
#define DCM_STOP_SEC_CONST_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore */
/* ----------------------------------------------
 ~&&&   ROM 16-Bit
---------------------------------------------- */
#define DCM_START_SEC_CONST_16
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore */
/*! DID look up table  */
CONST(uint16, DCM_CONST) Dcm_CfgDidMgrDidLookUpTable[13]=
{
   12u
  ,0x100Au
  ,0x100Eu
  ,0x2501u
  ,0x2504u
  ,0x2506u
  ,0xF100u
  ,0xF101u
  ,0xF15Au
  ,0xF186u
  ,0xF18Bu
  ,0xF18Cu
  ,0xF190u
};
/*! RID look up table  */
CONST(uint16, DCM_CONST) Dcm_CfgRidMgrRidLookUpTable[7]=
{
   6u
  ,0x0202u
  ,0x0205u
  ,0x0F0Cu
  ,0x1003u
  ,0xFF00u
  ,0xFF01u
};
#define DCM_STOP_SEC_CONST_16
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore */
/* ----------------------------------------------
 ~&&&   ROM of unspecified size
---------------------------------------------- */
#define DCM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore */
/*! DCM buffer descriptor */
CONST(Dcm_CfgNetBufferInfoType, DCM_CONST) Dcm_CfgNetBufferInfo[1]=
{
   { Dcm_CfgNetBuffer_000,4096u}
};
/*! RxPduId map */
CONST(Dcm_CfgNetRxPduInfoType, DCM_CONST) Dcm_CfgNetRxPduInfo[28]=
{
   { TRUE, 9u}
  ,{ TRUE, 8u}
  ,{ TRUE,13u}
  ,{ TRUE,12u}
  ,{ TRUE,11u}
  ,{ TRUE,10u}
  ,{ TRUE, 6u}
  ,{ TRUE, 7u}
  ,{ TRUE, 4u}
  ,{ TRUE, 5u}
  ,{ TRUE, 0u}
  ,{ TRUE, 2u}
  ,{ TRUE, 3u}
  ,{ TRUE, 1u}
  ,{ FALSE, 9u}
  ,{ FALSE, 8u}
  ,{ FALSE,13u}
  ,{ FALSE,12u}
  ,{ FALSE,11u}
  ,{ FALSE,10u}
  ,{ FALSE, 6u}
  ,{ FALSE, 7u}
  ,{ FALSE, 4u}
  ,{ FALSE, 5u}
  ,{ FALSE, 0u}
  ,{ FALSE, 2u}
  ,{ FALSE, 3u}
  ,{ FALSE, 1u}
};
/*! DCM connection descriptor */
CONST(Dcm_CfgNetConnectionInfoType, DCM_CONST) Dcm_CfgNetConnectionInfo[14]=
{
   { 0x00FAu,PduRConf_PduRSrcPdu_PduRSrcPdu_24, 0u,0u}
  ,{ 0x00FDu,PduRConf_PduRSrcPdu_PduRSrcPdu_27, 0u,0u}
  ,{ 0x00FBu,PduRConf_PduRSrcPdu_PduRSrcPdu_25, 0u,0u}
  ,{ 0x00FCu,PduRConf_PduRSrcPdu_PduRSrcPdu_26, 0u,0u}
  ,{ 0x00F8u,PduRConf_PduRSrcPdu_PduRSrcPdu_22, 0u,0u}
  ,{ 0x00F9u,PduRConf_PduRSrcPdu_PduRSrcPdu_23, 0u,0u}
  ,{ 0x00F6u,PduRConf_PduRSrcPdu_PduRSrcPdu_20, 0u,0u}
  ,{ 0x00F7u,PduRConf_PduRSrcPdu_PduRSrcPdu_21, 0u,0u}
  ,{ 0x00F1u,PduRConf_PduRSrcPdu_PduRSrcPdu_15, 0u,0u}
  ,{ 0x00F0u,PduRConf_PduRSrcPdu_PduRSrcPdu_14, 0u,0u}
  ,{ 0x00F5u,PduRConf_PduRSrcPdu_PduRSrcPdu_19, 0u,0u}
  ,{ 0x00F4u,PduRConf_PduRSrcPdu_PduRSrcPdu_18, 0u,0u}
  ,{ 0x00F3u,PduRConf_PduRSrcPdu_PduRSrcPdu_17, 0u,0u}
  ,{ 0x00F2u,PduRConf_PduRSrcPdu_PduRSrcPdu_16, 0u,0u}
};
/*! DCM protocol descriptor */
CONST(Dcm_CfgNetProtocolInfoType, DCM_CONST) Dcm_CfgNetProtocolInfo[1]=
{
   { {    0u,   0u},4095u, 3u,TRUE,0u,DemConf_DemClient_DemClient_BTLD}
};
/*! Map of all relevant for DCM network handles */
CONST(NetworkHandleType, DCM_CONST) Dcm_CfgNetAllComMChannelMap[1]=
{
   ComMConf_ComMChannel_A_FlexRay_5b5a9ac2
};
/*! Look up table of DCM relevant network handles */
CONST(NetworkHandleType, DCM_CONST) Dcm_CfgNetNetworkHandleLookUpTable[2]=
{
   1u
  ,ComMConf_ComMChannel_A_FlexRay_5b5a9ac2
};
/*! Diagnostic service execution conditions */
CONST(Dcm_CfgStatePreconditionInfoType, DCM_CONST) Dcm_CfgStatePreconditions[6]=
{
   { { 0x07u,0x03u}}
  ,{ { 0x06u,0x03u}}
  ,{ { 0x05u,0x03u}}
  ,{ { 0x02u,0x03u}}
  ,{ { 0x04u,0x03u}}
  ,{ { 0x02u,0x02u}}
};
/*! Session state properties */
CONST(Dcm_CfgStateSessionInfoType, DCM_CONST) Dcm_CfgStateSessionInfo[3]=
{
   { {   10u,1000u},RTE_MODE_DcmDiagnosticSessionControl_DEFAULT_SESSION,0x01u}
  ,{ {   19u,2000u},RTE_MODE_DcmDiagnosticSessionControl_PROGRAMMING_SESSION,0x02u}
  ,{ {   10u,1000u},RTE_MODE_DcmDiagnosticSessionControl_EXTENDED_SESSION,0x03u}
};
/*! Security Access state properties */
CONST(Dcm_CfgStateSecurityInfoType, DCM_CONST) Dcm_CfgStateSecurityInfo[1]=
{
   { 0x09u} /* SecLvl: UNLOCKED_LVL_09 */
};
/*! DID properties */
CONST(Dcm_CfgDidMgrDidInfoType, DCM_CONST) Dcm_CfgDidMgrDidInfo[12]=
{
   {    1u,   1u,   0u,0x01u} /* DID: 0x100A */
  ,{    1u,   1u,   1u,0x01u} /* DID: 0x100E */
  ,{    0u,  33u,   2u,0x01u} /* DID: 0x2501 */
  ,{   12u,  12u,   3u,0x01u} /* DID: 0x2504 */
  ,{    6u,   6u,   4u,0x01u} /* DID: 0x2506 */
  ,{    4u,   4u,   5u,0x01u} /* DID: 0xF100 */
  ,{    0u,  57u,   6u,0x01u} /* DID: 0xF101 */
  ,{    0u,   4u,   7u,0x02u} /* DID: 0xF15A */
  ,{    1u,   1u,   8u,0x01u} /* DID: 0xF186 */
  ,{    3u,   3u,   9u,0x01u} /* DID: 0xF18B */
  ,{   10u,  10u,  10u,0x01u} /* DID: 0xF18C */
  ,{   17u,  17u,  11u,0x03u} /* DID: 0xF190 */
};
/*! DID operation properties */
CONST(Dcm_CfgDidMgrOpInfoType, DCM_CONST) Dcm_CfgDidMgrOpInfo[13]=
{
   {    0u,   0u,0x01u} /* DID: 0x100A */
  ,{    0u,   1u,0x01u} /* DID: 0x100E */
  ,{    0u,   2u,0x07u} /* DID: 0x2501 */
  ,{    0u,   5u,0x01u} /* DID: 0x2504 */
  ,{    0u,   6u,0x01u} /* DID: 0x2506 */
  ,{    0u,   7u,0x01u} /* DID: 0xF100 */
  ,{    0u,   8u,0x07u} /* DID: 0xF101 */
  ,{    0u,  11u,0x01u} /* DID: 0xF15A */
  ,{    0u,  12u,0x01u} /* DID: 0xF186 */
  ,{    0u,  13u,0x01u} /* DID: 0xF18B */
  ,{    0u,  14u,0x01u} /* DID: 0xF18C */
  ,{    0u,  15u,0x05u} /* DID: 0xF190 */
  ,{    0u,  17u,0x01u} /* DID: 0xF190 */
};
/*! DID signal operation classes */
CONST(Dcm_CfgDidMgrSignalOpClassInfoType, DCM_CONST) Dcm_CfgDidMgrSignalOpClassInfo[18]=
{
   { ((Dcm_DidMgrOpFuncType)(Prog_ReadDataByIdentifierEnergyState)), 1u} /* DID: 0x100A */                                                           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Prog_ReadDataByIdentifierEnergyStateExtension)), 1u} /* DID: 0x100E */                                                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Dlog_ReadDataByIdentifierMemorySegmentationTable)), 2u} /* DID: 0x2501 */                                               /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Dlog_ReadDataLengthMemorySegmentationTable)), 2u} /* DID: 0x2501 */                                                     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Dlog_ConditionCheckMemorySegmentationTable)), 1u} /* DID: 0x2501 */                                                     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Dlog_ReadDataByIdentifierFlashTimingParameter)), 1u} /* DID: 0x2504 */                                                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Prog_UDS_ReadDataByIdentifierReadMemoryAddress)), 1u} /* DID: 0x2506 */                                                 /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Prog_UDS_ReadDataByIdentifierReadActiveSessionState)), 1u} /* DID: 0xF100 */                                            /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Dlog_ReadDataByIdentifierSvkCurrent)), 2u} /* DID: 0xF101 */                                                            /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Dlog_ReadDataLengthSvkCurrent)), 2u} /* DID: 0xF101 */                                                                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Dlog_ConditionCheckSvkCurrent)), 1u} /* DID: 0xF101 */                                                                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Prog_UDS_WriteDataByIdentifierWriteFingerprint)), 3u} /* DID: 0xF15A */                                                 /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Prog_UDS_ReadDataByIdentifierReadActiveDiagnosticSession)), 1u} /* DID: 0xF186 */                                       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Dlog_ReadDataByIdentifierManufacturingDate)), 1u} /* DID: 0xF18B */                                                     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Dlog_ReadDataByIdentifierEcuSerialNumber)), 1u} /* DID: 0xF18C */                                                       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Dlog_ReadDataByIdentifierVin)), 2u} /* DID: 0xF190 */                                                                   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Dlog_ConditionCheckVin)), 1u} /* DID: 0xF190 */                                                                         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Dlog_WriteDataByIdentifierVin)), 2u} /* DID: 0xF190 */                                                                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
};
/*! RID properties */
CONST(Dcm_CfgRidMgrRidInfoType, DCM_CONST) Dcm_CfgRidMgrRidInfo[6]=
{
   {    0u,   0u,0x01u} /* RID: 0x0202 */
  ,{    1u,   0u,0x01u} /* RID: 0x0205 */
  ,{    2u,   0u,0x01u} /* RID: 0x0F0C */
  ,{    3u,   0u,0x01u} /* RID: 0x1003 */
  ,{    4u,   0u,0x01u} /* RID: 0xFF00 */
  ,{    5u,   0u,0x01u} /* RID: 0xFF01 */
};
/*! RID operation properties */
CONST(Dcm_CfgRidMgrOpInfoType, DCM_CONST) Dcm_CfgRidMgrOpInfo[6]=
{
   { ((Dcm_RidMgrOpFuncType)(Prog_UDS_RoutineControlCheckMemory_Start)),   0u,   8u,   1u,   1u, 5u} /* RID: 0x0202 */                               /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dlog_RoutineControlStartReadDevelopmentInfoField)),   0u,   8u,   0u,   8u, 7u} /* RID: 0x0205 */                       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_0F0C_Start)),   1u,   1u,   0u,   0u, 9u} /* RID: 0x0F0C */                                                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_1003_Start)),   1u,   1u,   0u,   0u, 9u} /* RID: 0x1003 */                                                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Prog_UDS_RoutineControlEraseMemory_Start)),   0u,  11u,   1u,   1u, 5u} /* RID: 0xFF00 */                               /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Prog_UDS_RoutineControlCheckProgDependency_Start)),   0u,   0u,   1u,   1u, 3u} /* RID: 0xFF01 */                       /* PRQA S 0313 */ /* MD_Dcm_0313 */
};
/*! Properties of the memory map of a specific MID */
CONST(Dcm_CfgMemMgrMemMapInfoType, DCM_CONST) Dcm_CfgMemMgrMemMap[1]=
{
   { 0x00000000u,0xFFFFFFFEUL,{    1u}}
};
/*! DCM service initializers */
CONST(Dcm_DiagSvcInitFuncType, DCM_CONST) Dcm_CfgDiagSvcInitializers[2]=
{
   Dcm_Service27Init
  ,NULL_PTR /* end marker */
};
/*! DCM service properties */
CONST(Dcm_CfgDiagServiceInfoType, DCM_CONST) Dcm_CfgDiagServiceInfo[14]=
{
   { Dcm_Service10Processor,0x01u, 1u,   1u,   2u} /* SID: 0x10 */
  ,{ Dcm_Service11Processor,0x01u, 1u,   3u,   4u} /* SID: 0x11 */
  ,{ Dcm_Service22Processor,0x00u, 2u,   0u,   0u} /* SID: 0x22 */
  ,{ Dcm_Service27Processor,0x03u, 1u,   5u,   0u} /* SID: 0x27 */
  ,{ Dcm_Service28Processor,0x01u, 1u,   6u,   0u} /* SID: 0x28 */
  ,{ Dcm_Service2EProcessor,0x00u, 3u,   0u,   0u} /* SID: 0x2E */
  ,{ Dcm_Service31Processor,0x01u, 3u,   0u,   0u} /* SID: 0x31 */
  ,{ DcmFbl_Service34_Processor,0x00u, 0u,   0u,   0u} /* SID: 0x34 */
  ,{ DcmFbl_Service36_Processor,0x00u, 0u,   0u,   0u} /* SID: 0x36 */
  ,{ DcmFbl_Service37_Processor,0x00u, 0u,   0u,   0u} /* SID: 0x37 */
  ,{ Dcm_Service3DProcessor,0x00u, 4u,   0u,   0u} /* SID: 0x3D */
  ,{ Dcm_Service3EProcessor,0x01u, 1u,   0u,   0u} /* SID: 0x3E */
  ,{ Dcm_Service85Processor,0x01u, 1u,   7u,   0u} /* SID: 0x85 */
  ,{ Dcm_RepeaterDeadEnd,0x00u, 0u,   0u,   0u} /* Dcm_RepeaterDeadEnd */
};
/*! Indirection from diag service info to execution pre conditions */
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgDiagSvcIdExecPrecondTable[13]=
{
      0u /* SID: 0x10 */
  ,   0u /* SID: 0x11 */
  ,   0u /* SID: 0x22 */
  ,   3u /* SID: 0x27 */
  ,   4u /* SID: 0x28 */
  ,   0u /* SID: 0x2E */
  ,   0u /* SID: 0x31 */
  ,   5u /* SID: 0x34 */
  ,   3u /* SID: 0x36 */
  ,   0u /* SID: 0x37 */
  ,   3u /* SID: 0x3D */
  ,   0u /* SID: 0x3E */
  ,   4u /* SID: 0x85 */
};
/*! DCM service post processors */
CONST(Dcm_DiagSvcConfirmationFuncType, DCM_CONST) Dcm_CfgDiagSvcPostProcessors[8]=
{
   Dcm_ServiceNoPostProcessor
  ,Dcm_Service10PostProcessor
  ,Dcm_Service10FastPostProcessor
  ,Dcm_Service11PostProcessor
  ,Dcm_Service11FastPostProcessor
  ,Dcm_Service27PostProcessor
  ,Dcm_Service28PostProcessor
  ,Dcm_Service85PostProcessor
};
/*! Service 0x10 sub-service properties table  */
CONST(Dcm_CfgSvc10SubFuncInfoType, DCM_CONST) Dcm_CfgSvc10SubFuncInfo[3]=
{
   { { 50u, 500u}} /* Session ID: 0x01 */
  ,{ { 95u,1000u}} /* Session ID: 0x02 */
  ,{ { 50u, 500u}} /* Session ID: 0x03 */
};
/*! Indirection from service 0x10 sub functions to execution pre conditions */
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc10SubFuncExecPrecondTable[3]=
{
      0u /* Session ID: 0x01 */
  ,   1u /* Session ID: 0x02 */
  ,   2u /* Session ID: 0x03 */
};
/*! Service 0x11 sub-service properties table  */
CONST(Dcm_CfgSvc11SubFuncInfoType, DCM_CONST) Dcm_CfgSvc11SubFuncInfo[1]=
{
   { Dcm_Service11_01Processor} /* SF: 0x01 */
};
/*! Indirection from service 0x11 sub functions to execution pre conditions */
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc11SubFuncExecPrecondTable[1]=
{
      0u /* SF: 0x01 */
};
/*! Service 0x27 sub-service properties table  */
CONST(Dcm_CfgSvc27SubFuncInfoType, DCM_CONST) Dcm_CfgSvc27SubFuncInfo[2]=
{
   { Dcm_Service27SeedProcessor,   5u} /* SF: 0x11 */                                                                                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ Dcm_Service27KeyProcessor,  97u} /* SF: 0x12 */                                                                                                 /* PRQA S 0313 */ /* MD_Dcm_0313 */
};
/*! Service 0x27 security level properties table  */
CONST(Dcm_CfgSvc27SecLevelInfoType, DCM_CONST) Dcm_CfgSvc27SecLevelInfo[1]=
{
   { ((Dcm_Svc27GetSeedFuncType)(Prog_UDS_SecurityAccess_GetSeed)),Prog_UDS_SecurityAccess_CompareKey,   8u, 1u} /* SecLvl: UNLOCKED_LVL_09 */       /* PRQA S 0313 */ /* MD_Dcm_0313 */
};
/*! Indirection from service 0x27 sub functions to execution pre conditions */
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc27SubFuncExecPrecondTable[2]=
{
      3u /* SF: 0x11 */
  ,   3u /* SF: 0x12 */
};
/*! Service 0x28 sub-service properties table  */
CONST(Dcm_CfgSvc28SubFuncInfoType, DCM_CONST) Dcm_CfgSvc28SubFuncInfo[3]=
{
   { Dcm_Service28_XXProcessor, 2u} /* SF: 0x01 */
  ,{ Dcm_Service28_XXProcessor, 2u} /* SF: 0x02 */
  ,{ Dcm_Service28_XXProcessor, 2u} /* SF: 0x03 */
};
/*! Indirection from service 0x28 sub functions to execution pre conditions */
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc28SubFuncExecPrecondTable[3]=
{
      4u /* SF: 0x01 */
  ,   4u /* SF: 0x02 */
  ,   4u /* SF: 0x03 */
};
/*! Service 0x28 network ID to ComM channel map */
CONST(NetworkHandleType, DCM_CONST) Dcm_CfgSvc28SubNetIdMap[1]=
{
   DCM_SVC_28_NETWORK_ALL
};
/*! Indirection from service 0x3E sub functions to execution pre conditions */
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc3ESubFuncExecPrecondTable[1]=
{
      0u /* SF: 0x00 */
};
/*! Indirection from service 0x85 sub functions to execution pre conditions */
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc85SubFuncExecPrecondTable[1]=
{
      4u /* SF: 0x02 */
};
/*! DCM service 0x85 properties */
CONST(Dcm_CfgSvc85SubFuncInfoType, DCM_CONST) Dcm_CfgSvc85SubFuncInfo[1]=
{
   { Dem_DisableDTCSetting,RTE_MODE_DcmControlDtcSetting_DISABLEDTCSETTING} /* SF: 0x02 */
};
#define DCM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore */
/* ----------------------------------------------
 ~&&&   Module call-out implementations
---------------------------------------------- */
#define DCM_START_SEC_CALLOUT_CODE
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore */
/***********************************************************************************************************************
 *  Dcm_RidMgr_0F0C_Start()
***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_0F0C_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  uint8 dataInDcmDspStartRoutineInSignal;

  dataInDcmDspStartRoutineInSignal = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 0u)));                                                          /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */

  DCM_IGNORE_UNREF_PARAM(DataLength);                                                                                                                /* PRQA S 3112 */ /* MD_Dcm_3112 */

  return Prog_RoutineControlSetEnergyState(dataInDcmDspStartRoutineInSignal
                                          , OpStatus
                                          , ErrorCode
                                          );                                                                                                         /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_1003_Start()
***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_1003_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  uint8 dataInDcmDspStartRoutineInSignal;

  dataInDcmDspStartRoutineInSignal = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 0u)));                                                          /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */

  DCM_IGNORE_UNREF_PARAM(DataLength);                                                                                                                /* PRQA S 3112 */ /* MD_Dcm_3112 */

  return Prog_RoutineControlSetEnergyStateExtension(dataInDcmDspStartRoutineInSignal
                                                   , OpStatus
                                                   , ErrorCode
                                                   );                                                                                                /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */
}
/***********************************************************************************************************************
 *  Dcm_ServiceNoPostProcessor()
***********************************************************************************************************************/
/* Implements CDD Dcm_ServiceNoPostProcessor() */
DCM_LOCAL FUNC(void, DCM_CALLOUT_CODE) Dcm_ServiceNoPostProcessor(Dcm_ConfirmationStatusType status)
{
  DCM_IGNORE_UNREF_PARAM(status);                                                                                                                    /* PRQA S 3112 */ /* MD_Dcm_3112 */
}
#define DCM_STOP_SEC_CALLOUT_CODE
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore */
/* ********************************************************************************************************************
 * END OF FILE: Dcm_Lcfg.c
 * ******************************************************************************************************************** */

