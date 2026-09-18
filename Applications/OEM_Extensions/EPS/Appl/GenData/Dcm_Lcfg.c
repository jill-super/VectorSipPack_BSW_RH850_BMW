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
 *   Generation Time: 2018-01-04 14:21:46
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
#include "NvM.h"
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
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_DidMgr_DcmDspData_Pruefstempel_Read(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, DCM_VAR_NOINIT) Data);
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_DidMgr_DcmDspData_Pruefstempel_Write(P2CONST(uint8, AUTOMATIC, DCM_VAR_NOINIT) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, DCM_VAR_NOINIT) ErrorCode); /* PRQA S 0779 */ /* MD_Dcm_Understand_0779 */
/***********************************************************************************************************************
 *  Dcm_RidMgr_0206_Start()
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
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_0206_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_RidMgr_020C_Start()
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
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_020C_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_RidMgr_020C_RequestResults()
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
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_020C_RequestResults(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_RidMgr_020F_Start()
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
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_020F_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_RidMgr_020F_RequestResults()
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
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_020F_RequestResults(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_RidMgr_0210_Start()
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
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_0210_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_RidMgr_0210_RequestResults()
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
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_0210_RequestResults(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_RidMgr_0211_Start()
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
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_0211_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_RidMgr_0212_Start()
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
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_0212_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_RidMgr_0213_Start()
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
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_0213_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_RidMgr_0213_RequestResults()
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
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_0213_RequestResults(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_RidMgr_0214_Start()
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
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_0214_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_RidMgr_0215_Start()
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
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_0215_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_RidMgr_0216_Start()
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
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_0216_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_RidMgr_0216_RequestResults()
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
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_0216_RequestResults(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_RidMgr_0230_Start()
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
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_0230_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_RidMgr_0234_Start()
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
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_0234_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_RidMgr_0235_Start()
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
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_0235_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_RidMgr_0238_Start()
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
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_0238_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_RidMgr_0238_RequestResults()
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
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_0238_RequestResults(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_RidMgr_0239_Start()
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
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_0239_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_RidMgr_0239_RequestResults()
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
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_0239_RequestResults(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_RidMgr_0304_Start()
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
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_0304_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_RidMgr_0305_Start()
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
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_0305_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode);
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
 *  Dcm_RidMgr_0F1F_Start()
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
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_0F1F_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_RidMgr_1002_Start()
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
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_1002_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode);
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
 *  Dcm_RidMgr_1010_Start()
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
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_1010_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_RidMgr_1011_Start()
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
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_1011_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_RidMgr_1021_Start()
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
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_1021_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_RidMgr_1022_Start()
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
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_1022_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_RidMgr_1023_Start()
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
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_1023_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_RidMgr_1041_Start()
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
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_1041_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_RidMgr_1042_Start()
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
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_1042_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_RidMgr_1043_Start()
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
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_1043_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_RidMgr_1044_Start()
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
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_1044_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_RidMgr_1045_Start()
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
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_1045_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_RidMgr_1047_Start()
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
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_1047_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_RidMgr_1049_Start()
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
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_1049_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_RidMgr_104C_Start()
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
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_104C_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_RidMgr_104D_Start()
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
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_104D_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_RidMgr_104E_Start()
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
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_104E_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_RidMgr_104F_Start()
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
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_104F_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_RidMgr_1050_Start()
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
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_1050_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_RidMgr_1051_Start()
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
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_1051_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_RidMgr_4000_Start()
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
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_4000_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_RidMgr_7000_Start()
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
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_7000_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode);
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
DCM_LOCAL VAR(Dcm_MsgItemType, DCM_VAR_NOINIT) Dcm_CfgNetBuffer_000[8195];
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
    8u
  , 3u
  , 2u
  , 1u
  , 0u
  , 7u
  , 6u
  , 5u
  , 4u
  ,13u
  ,12u
  ,11u
  ,10u
  , 9u
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
  ,0x14u
  ,0x19u
  ,0x22u
  ,0x27u
  ,0x28u
  ,0x2Eu
  ,0x31u
  ,0x35u
  ,0x3Eu
  ,0x85u
  ,0x86u
};
/*! Service 0x10 look up table  */
CONST(uint8, DCM_CONST) Dcm_CfgSvc10SubFuncLookUpTable[7]=
{
   6u
  ,0x01u
  ,0x02u
  ,0x03u
  ,0x41u
  ,0x42u
  ,0x43u
};
/*! Service 0x11 look up table  */
CONST(uint8, DCM_CONST) Dcm_CfgSvc11SubFuncLookUpTable[3]=
{
   2u
  ,0x01u
  ,0x04u
};
/*! Service 0x19 look up table  */
CONST(uint8, DCM_CONST) Dcm_CfgSvc19SubFuncLookUpTable[5]=
{
   4u
  ,0x02u
  ,0x04u
  ,0x06u
  ,0x0Au
};
/*! Service 0x27 look up table  */
CONST(uint8, DCM_CONST) Dcm_CfgSvc27SubFuncLookUpTable[9]=
{
   8u
  ,0x01u
  ,0x02u
  ,0x03u
  ,0x04u
  ,0x11u
  ,0x12u
  ,0x13u
  ,0x14u
};
/*! Service 0x28 look up table  */
CONST(uint8, DCM_CONST) Dcm_CfgSvc28SubFuncLookUpTable[5]=
{
   4u
  ,0x00u
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
CONST(uint8, DCM_CONST) Dcm_CfgSvc85SubFuncLookUpTable[3]=
{
   2u
  ,0x01u
  ,0x02u
};
/*! Service 0x86 look up table  */
CONST(uint8, DCM_CONST) Dcm_CfgSvc86SubFuncLookUpTable[4]=
{
   3u
  ,0x04u
  ,0x40u
  ,0x45u
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
CONST(uint16, DCM_CONST) Dcm_CfgDidMgrDidLookUpTable[108]=
{
   107u
  ,0x1000u
  ,0x100Au
  ,0x100Eu
  ,0x1600u
  ,0x1601u
  ,0x1602u
  ,0x1603u
  ,0x1701u
  ,0x1704u
  ,0x1710u
  ,0x171Fu
  ,0x1723u
  ,0x1725u
  ,0x1734u
  ,0x1800u
  ,0x1801u
  ,0x1802u
  ,0x2000u
  ,0x2502u
  ,0x2503u
  ,0x2504u
  ,0x2507u
  ,0x2510u
  ,0x2511u
  ,0x2540u
  ,0x2560u
  ,0x2561u
  ,0x2562u
  ,0x2563u
  ,0x2590u
  ,0x2591u
  ,0x2592u
  ,0x2593u
  ,0x2594u
  ,0x3000u
  ,0xF100u
  ,0xF101u
  ,0xF102u
  ,0xF103u
  ,0xF104u
  ,0xF105u
  ,0xF106u
  ,0xF107u
  ,0xF108u
  ,0xF109u
  ,0xF10Au
  ,0xF10Bu
  ,0xF10Cu
  ,0xF10Du
  ,0xF10Eu
  ,0xF10Fu
  ,0xF110u
  ,0xF111u
  ,0xF112u
  ,0xF113u
  ,0xF114u
  ,0xF115u
  ,0xF116u
  ,0xF117u
  ,0xF118u
  ,0xF119u
  ,0xF11Au
  ,0xF11Bu
  ,0xF11Cu
  ,0xF11Du
  ,0xF11Eu
  ,0xF11Fu
  ,0xF120u
  ,0xF121u
  ,0xF122u
  ,0xF123u
  ,0xF124u
  ,0xF125u
  ,0xF126u
  ,0xF127u
  ,0xF128u
  ,0xF129u
  ,0xF12Au
  ,0xF12Bu
  ,0xF12Cu
  ,0xF12Du
  ,0xF12Eu
  ,0xF12Fu
  ,0xF130u
  ,0xF131u
  ,0xF132u
  ,0xF133u
  ,0xF134u
  ,0xF135u
  ,0xF136u
  ,0xF137u
  ,0xF138u
  ,0xF139u
  ,0xF13Au
  ,0xF13Bu
  ,0xF13Cu
  ,0xF13Du
  ,0xF13Eu
  ,0xF13Fu
  ,0xF140u
  ,0xF150u
  ,0xF152u
  ,0xF186u
  ,0xF18Au
  ,0xF18Bu
  ,0xF18Cu
  ,0xF190u
};
/*! RID look up table  */
CONST(uint16, DCM_CONST) Dcm_CfgRidMgrRidLookUpTable[59]=
{
   58u
  ,0x0203u
  ,0x0204u
  ,0x0205u
  ,0x0206u
  ,0x020Cu
  ,0x020Fu
  ,0x0210u
  ,0x0211u
  ,0x0212u
  ,0x0213u
  ,0x0214u
  ,0x0215u
  ,0x0216u
  ,0x0230u
  ,0x0234u
  ,0x0235u
  ,0x0238u
  ,0x0239u
  ,0x0303u
  ,0x0304u
  ,0x0305u
  ,0x0F01u
  ,0x0F06u
  ,0x0F0Cu
  ,0x0F1Fu
  ,0x1002u
  ,0x1003u
  ,0x1005u
  ,0x100Du
  ,0x100Eu
  ,0x100Fu
  ,0x1010u
  ,0x1011u
  ,0x101Au
  ,0x1020u
  ,0x1021u
  ,0x1022u
  ,0x1023u
  ,0x1024u
  ,0x1041u
  ,0x1042u
  ,0x1043u
  ,0x1044u
  ,0x1045u
  ,0x1047u
  ,0x1049u
  ,0x104Bu
  ,0x104Cu
  ,0x104Du
  ,0x104Eu
  ,0x104Fu
  ,0x1050u
  ,0x1051u
  ,0x1061u
  ,0x4000u
  ,0x4003u
  ,0x4006u
  ,0x7000u
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
   { Dcm_CfgNetBuffer_000,8195u}
};
/*! RxPduId map */
CONST(Dcm_CfgNetRxPduInfoType, DCM_CONST) Dcm_CfgNetRxPduInfo[28]=
{
   { TRUE, 8u}
  ,{ FALSE, 8u}
  ,{ TRUE, 3u}
  ,{ FALSE, 3u}
  ,{ TRUE, 2u}
  ,{ FALSE, 2u}
  ,{ TRUE, 1u}
  ,{ FALSE, 1u}
  ,{ TRUE, 0u}
  ,{ FALSE, 0u}
  ,{ TRUE, 7u}
  ,{ FALSE, 7u}
  ,{ TRUE, 6u}
  ,{ FALSE, 6u}
  ,{ TRUE, 5u}
  ,{ FALSE, 5u}
  ,{ TRUE, 4u}
  ,{ FALSE, 4u}
  ,{ TRUE,13u}
  ,{ FALSE,13u}
  ,{ TRUE,12u}
  ,{ FALSE,12u}
  ,{ TRUE,11u}
  ,{ FALSE,11u}
  ,{ TRUE,10u}
  ,{ FALSE,10u}
  ,{ TRUE, 9u}
  ,{ FALSE, 9u}
};
/*! DCM connection descriptor */
CONST(Dcm_CfgNetConnectionInfoType, DCM_CONST) Dcm_CfgNetConnectionInfo[14]=
{
   { 0x00F4u,PduRConf_PduRSrcPdu_PduRSrcPdu_018, 0u,0u}
  ,{ 0x00F3u,PduRConf_PduRSrcPdu_PduRSrcPdu_017, 0u,0u}
  ,{ 0x00F2u,PduRConf_PduRSrcPdu_PduRSrcPdu_016, 0u,0u}
  ,{ 0x00F1u,PduRConf_PduRSrcPdu_PduRSrcPdu_015, 0u,0u}
  ,{ 0x00F8u,PduRConf_PduRSrcPdu_PduRSrcPdu_022, 0u,0u}
  ,{ 0x00F7u,PduRConf_PduRSrcPdu_PduRSrcPdu_021, 0u,0u}
  ,{ 0x00F6u,PduRConf_PduRSrcPdu_PduRSrcPdu_020, 0u,0u}
  ,{ 0x00F5u,PduRConf_PduRSrcPdu_PduRSrcPdu_019, 0u,0u}
  ,{ 0x00F0u,PduRConf_PduRSrcPdu_PduRSrcPdu_014, 0u,0u}
  ,{ 0x00FDu,PduRConf_PduRSrcPdu_PduRSrcPdu_027, 0u,0u}
  ,{ 0x00FCu,PduRConf_PduRSrcPdu_PduRSrcPdu_026, 0u,0u}
  ,{ 0x00FBu,PduRConf_PduRSrcPdu_PduRSrcPdu_025, 0u,0u}
  ,{ 0x00FAu,PduRConf_PduRSrcPdu_PduRSrcPdu_024, 0u,0u}
  ,{ 0x00F9u,PduRConf_PduRSrcPdu_PduRSrcPdu_023, 0u,0u}
};
/*! DCM protocol descriptor */
CONST(Dcm_CfgNetProtocolInfoType, DCM_CONST) Dcm_CfgNetProtocolInfo[1]=
{
   { {    6u,   6u},4095u, 4u,TRUE,0u,DemConf_DemClient_DemClient_DCM}
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
CONST(Dcm_CfgStatePreconditionInfoType, DCM_CONST) Dcm_CfgStatePreconditions[12]=
{
   { { 0x3Fu,0x1Fu}}
  ,{ { 0x0Du,0x1Fu}}
  ,{ { 0x06u,0x1Fu}}
  ,{ { 0x05u,0x1Fu}}
  ,{ { 0x0Cu,0x1Fu}}
  ,{ { 0x2Du,0x1Fu}}
  ,{ { 0x04u,0x1Fu}}
  ,{ { 0x3Du,0x1Fu}}
  ,{ { 0x20u,0x1Fu}}
  ,{ { 0x08u,0x02u}}
  ,{ { 0x15u,0x1Fu}}
  ,{ { 0x08u,0x1Fu}}
};
/*! Session state properties */
CONST(Dcm_CfgStateSessionInfoType, DCM_CONST) Dcm_CfgStateSessionInfo[6]=
{
   { {   10u,1000u},RTE_MODE_DcmDiagnosticSessionControl_DEFAULT_SESSION,0x01u}
  ,{ {   19u,2000u},RTE_MODE_DcmDiagnosticSessionControl_PROGRAMMING_SESSION,0x02u}
  ,{ {   10u,1000u},RTE_MODE_DcmDiagnosticSessionControl_EXTENDED_SESSION,0x03u}
  ,{ {   10u,1000u},RTE_MODE_DcmDiagnosticSessionControl_DcmDspSessionRow_CODING_SESSION,0x41u}
  ,{ {   10u,1000u},RTE_MODE_DcmDiagnosticSessionControl_DcmDspSessionRow_SWT_SESSION,0x42u}
  ,{ {   10u,1000u},RTE_MODE_DcmDiagnosticSessionControl_DcmDspSessionRow_HDD_DOWNLOAD_SESSION,0x43u}
};
/*! Security Access state properties */
CONST(Dcm_CfgStateSecurityInfoType, DCM_CONST) Dcm_CfgStateSecurityInfo[4]=
{
   {    0u, 3u,0x01u} /* SecLvl: DcmDspSecurityRow_Coding */
  ,{    0u, 0u,0x02u} /* SecLvl: DcmDspSecurityRow_level2 */
  ,{    0u, 0u,0x09u} /* SecLvl: DcmDspSecurityRow_Programming_HDD */
  ,{    0u, 3u,0x0Au} /* SecLvl: DcmDspSecurityRow_Swt */
};
/*! DID ranges look up */
CONST(Dcm_CfgDidMgrDidRangeType, DCM_CONST) Dcm_CfgDidMgrDidRanges[2]=
{
   {    1u,   1u}
  ,{ 0x3000u,0x37FEu}
};
/*! DID ranges to DID info map */
CONST(Dcm_CfgDidMgrDidInfoRefType, DCM_CONST) Dcm_CfgDidMgrRangeDidInfoRefs[1]=
{
     34u
};
/*! DID properties */
CONST(Dcm_CfgDidMgrDidInfoType, DCM_CONST) Dcm_CfgDidMgrDidInfo[107]=
{
   {    3u,   3u,   0u,0x03u} /* DID: 0x1000 */
  ,{    1u,   1u,   2u,0x01u} /* DID: 0x100A */
  ,{    1u,   1u,   3u,0x01u} /* DID: 0x100E */
  ,{    1u,   1u,   4u,0x01u} /* DID: 0x1600 */
  ,{    8u,   8u,   5u,0x01u} /* DID: 0x1601 */
  ,{    8u,   8u,   6u,0x01u} /* DID: 0x1602 */
  ,{    8u,   8u,   7u,0x01u} /* DID: 0x1603 */
  ,{    4u,   4u,   8u,0x01u} /* DID: 0x1701 */
  ,{    0u,  21u,   9u,0x01u} /* DID: 0x1704 */
  ,{    2u,   2u,  10u,0x01u} /* DID: 0x1710 */
  ,{ 8192u,8192u,  11u,0x01u} /* DID: 0x171F */
  ,{    0u, 156u,  12u,0x01u} /* DID: 0x1723 */
  ,{    4u,   4u,  13u,0x01u} /* DID: 0x1725 */
  ,{   10u,  10u,  14u,0x01u} /* DID: 0x1734 */
  ,{    1u,   1u,  15u,0x01u} /* DID: 0x1800 */
  ,{ 8192u,8192u,  16u,0x01u} /* DID: 0x1801 */
  ,{    3u,   3u,  17u,0x01u} /* DID: 0x1802 */
  ,{ 8192u,8192u,  18u,0x01u} /* DID: 0x2000 */
  ,{    4u,   4u,  19u,0x01u} /* DID: 0x2502 */
  ,{    2u,   2u,  20u,0x01u} /* DID: 0x2503 */
  ,{   12u,  12u,  21u,0x01u} /* DID: 0x2504 */
  ,{    1u,   1u,  22u,0x01u} /* DID: 0x2507 */
  ,{ 8192u,8192u,  23u,0x01u} /* DID: 0x2510 */
  ,{    4u,   4u,  24u,0x01u} /* DID: 0x2511 */
  ,{    3u,   3u,  25u,0x01u} /* DID: 0x2540 */
  ,{    0u,  28u,  26u,0x03u} /* DID: 0x2560 */
  ,{    0u,  28u,  28u,0x03u} /* DID: 0x2561 */
  ,{    0u,  28u,  30u,0x03u} /* DID: 0x2562 */
  ,{    0u,  28u,  32u,0x03u} /* DID: 0x2563 */
  ,{ 8192u,8192u,  34u,0x01u} /* DID: 0x2590 */
  ,{ 8192u,8192u,  35u,0x01u} /* DID: 0x2591 */
  ,{ 8192u,8192u,  36u,0x01u} /* DID: 0x2592 */
  ,{ 8192u,8192u,  37u,0x01u} /* DID: 0x2593 */
  ,{ 8192u,8192u,  38u,0x01u} /* DID: 0x2594 */
  ,{    0u, 250u,  39u,0x23u} /* DID: 0x3000 */
  ,{    4u,   4u,  41u,0x01u} /* DID: 0xF100 */
  ,{    0u, 109u,  42u,0x01u} /* DID: 0xF101 */
  ,{   49u,  49u,  43u,0x01u} /* DID: 0xF102 */
  ,{   49u,  49u,  44u,0x01u} /* DID: 0xF103 */
  ,{   49u,  49u,  45u,0x01u} /* DID: 0xF104 */
  ,{   49u,  49u,  46u,0x01u} /* DID: 0xF105 */
  ,{   49u,  49u,  47u,0x01u} /* DID: 0xF106 */
  ,{   49u,  49u,  48u,0x01u} /* DID: 0xF107 */
  ,{   49u,  49u,  49u,0x01u} /* DID: 0xF108 */
  ,{   49u,  49u,  50u,0x01u} /* DID: 0xF109 */
  ,{   49u,  49u,  51u,0x01u} /* DID: 0xF10A */
  ,{   49u,  49u,  52u,0x01u} /* DID: 0xF10B */
  ,{   49u,  49u,  53u,0x01u} /* DID: 0xF10C */
  ,{   49u,  49u,  54u,0x01u} /* DID: 0xF10D */
  ,{   49u,  49u,  55u,0x01u} /* DID: 0xF10E */
  ,{   49u,  49u,  56u,0x01u} /* DID: 0xF10F */
  ,{   49u,  49u,  57u,0x01u} /* DID: 0xF110 */
  ,{   49u,  49u,  58u,0x01u} /* DID: 0xF111 */
  ,{   49u,  49u,  59u,0x01u} /* DID: 0xF112 */
  ,{   49u,  49u,  60u,0x01u} /* DID: 0xF113 */
  ,{   49u,  49u,  61u,0x01u} /* DID: 0xF114 */
  ,{   49u,  49u,  62u,0x01u} /* DID: 0xF115 */
  ,{   49u,  49u,  63u,0x01u} /* DID: 0xF116 */
  ,{   49u,  49u,  64u,0x01u} /* DID: 0xF117 */
  ,{   49u,  49u,  65u,0x01u} /* DID: 0xF118 */
  ,{   49u,  49u,  66u,0x01u} /* DID: 0xF119 */
  ,{   49u,  49u,  67u,0x01u} /* DID: 0xF11A */
  ,{   49u,  49u,  68u,0x01u} /* DID: 0xF11B */
  ,{   49u,  49u,  69u,0x01u} /* DID: 0xF11C */
  ,{   49u,  49u,  70u,0x01u} /* DID: 0xF11D */
  ,{   49u,  49u,  71u,0x01u} /* DID: 0xF11E */
  ,{   49u,  49u,  72u,0x01u} /* DID: 0xF11F */
  ,{   49u,  49u,  73u,0x01u} /* DID: 0xF120 */
  ,{   49u,  49u,  74u,0x01u} /* DID: 0xF121 */
  ,{   49u,  49u,  75u,0x01u} /* DID: 0xF122 */
  ,{   49u,  49u,  76u,0x01u} /* DID: 0xF123 */
  ,{   49u,  49u,  77u,0x01u} /* DID: 0xF124 */
  ,{   49u,  49u,  78u,0x01u} /* DID: 0xF125 */
  ,{   49u,  49u,  79u,0x01u} /* DID: 0xF126 */
  ,{   49u,  49u,  80u,0x01u} /* DID: 0xF127 */
  ,{   49u,  49u,  81u,0x01u} /* DID: 0xF128 */
  ,{   49u,  49u,  82u,0x01u} /* DID: 0xF129 */
  ,{   49u,  49u,  83u,0x01u} /* DID: 0xF12A */
  ,{   49u,  49u,  84u,0x01u} /* DID: 0xF12B */
  ,{   49u,  49u,  85u,0x01u} /* DID: 0xF12C */
  ,{   49u,  49u,  86u,0x01u} /* DID: 0xF12D */
  ,{   49u,  49u,  87u,0x01u} /* DID: 0xF12E */
  ,{   49u,  49u,  88u,0x01u} /* DID: 0xF12F */
  ,{   49u,  49u,  89u,0x01u} /* DID: 0xF130 */
  ,{   49u,  49u,  90u,0x01u} /* DID: 0xF131 */
  ,{   49u,  49u,  91u,0x01u} /* DID: 0xF132 */
  ,{   49u,  49u,  92u,0x01u} /* DID: 0xF133 */
  ,{   49u,  49u,  93u,0x01u} /* DID: 0xF134 */
  ,{   49u,  49u,  94u,0x01u} /* DID: 0xF135 */
  ,{   49u,  49u,  95u,0x01u} /* DID: 0xF136 */
  ,{   49u,  49u,  96u,0x01u} /* DID: 0xF137 */
  ,{   49u,  49u,  97u,0x01u} /* DID: 0xF138 */
  ,{   49u,  49u,  98u,0x01u} /* DID: 0xF139 */
  ,{   49u,  49u,  99u,0x01u} /* DID: 0xF13A */
  ,{   49u,  49u, 100u,0x01u} /* DID: 0xF13B */
  ,{   49u,  49u, 101u,0x01u} /* DID: 0xF13C */
  ,{   49u,  49u, 102u,0x01u} /* DID: 0xF13D */
  ,{   49u,  49u, 103u,0x01u} /* DID: 0xF13E */
  ,{   49u,  49u, 104u,0x01u} /* DID: 0xF13F */
  ,{   49u,  49u, 105u,0x01u} /* DID: 0xF140 */
  ,{    3u,   3u, 106u,0x01u} /* DID: 0xF150 */
  ,{    2u,   2u, 107u,0x01u} /* DID: 0xF152 */
  ,{    1u,   1u, 108u,0x01u} /* DID: 0xF186 */
  ,{    3u,   3u, 109u,0x01u} /* DID: 0xF18A */
  ,{    3u,   3u, 110u,0x01u} /* DID: 0xF18B */
  ,{   10u,  10u, 111u,0x01u} /* DID: 0xF18C */
  ,{   17u,  17u, 112u,0x01u} /* DID: 0xF190 */
};
/*! DID operation properties */
CONST(Dcm_CfgDidMgrOpInfoType, DCM_CONST) Dcm_CfgDidMgrOpInfo[113]=
{
   {    3u,   0u,0x01u} /* DID: 0x1000 */
  ,{    3u,   1u,0x01u} /* DID: 0x1000 */
  ,{    3u,   2u,0x05u} /* DID: 0x100A */
  ,{    3u,   4u,0x05u} /* DID: 0x100E */
  ,{    3u,   6u,0x05u} /* DID: 0x1600 */
  ,{    3u,   8u,0x05u} /* DID: 0x1601 */
  ,{    3u,  10u,0x05u} /* DID: 0x1602 */
  ,{    3u,  12u,0x05u} /* DID: 0x1603 */
  ,{    3u,  14u,0x01u} /* DID: 0x1701 */
  ,{    3u,  15u,0x07u} /* DID: 0x1704 */
  ,{    3u,  18u,0x05u} /* DID: 0x1710 */
  ,{    3u,  20u,0x05u} /* DID: 0x171F */
  ,{    3u,  22u,0x07u} /* DID: 0x1723 */
  ,{    3u,  25u,0x05u} /* DID: 0x1725 */
  ,{    6u,  27u,0x01u} /* DID: 0x1734 */
  ,{    3u,  28u,0x05u} /* DID: 0x1800 */
  ,{    3u,  30u,0x05u} /* DID: 0x1801 */
  ,{    3u,  32u,0x05u} /* DID: 0x1802 */
  ,{    3u,  34u,0x05u} /* DID: 0x2000 */
  ,{    3u,  36u,0x01u} /* DID: 0x2502 */
  ,{    3u,  37u,0x01u} /* DID: 0x2503 */
  ,{    3u,  38u,0x01u} /* DID: 0x2504 */
  ,{    3u,  39u,0x01u} /* DID: 0x2507 */
  ,{    8u,  40u,0x05u} /* DID: 0x2510 */
  ,{    8u,  42u,0x05u} /* DID: 0x2511 */
  ,{    3u,  44u,0x05u} /* DID: 0x2540 */
  ,{    6u,  46u,0x07u} /* DID: 0x2560 */
  ,{    6u,  49u,0x01u} /* DID: 0x2560 */
  ,{    6u,  50u,0x07u} /* DID: 0x2561 */
  ,{    6u,  53u,0x01u} /* DID: 0x2561 */
  ,{    6u,  54u,0x07u} /* DID: 0x2562 */
  ,{    6u,  57u,0x01u} /* DID: 0x2562 */
  ,{    6u,  58u,0x07u} /* DID: 0x2563 */
  ,{    6u,  61u,0x01u} /* DID: 0x2563 */
  ,{    3u,  62u,0x05u} /* DID: 0x2590 */
  ,{    3u,  64u,0x05u} /* DID: 0x2591 */
  ,{    3u,  66u,0x05u} /* DID: 0x2592 */
  ,{    3u,  68u,0x05u} /* DID: 0x2593 */
  ,{    3u,  70u,0x05u} /* DID: 0x2594 */
  ,{    1u,  72u,0x11u} /* DID: 0x3000 */
  ,{    9u,  74u,0x11u} /* DID: 0x3000 */
  ,{    3u,  76u,0x05u} /* DID: 0xF100 */
  ,{    3u,  78u,0x07u} /* DID: 0xF101 */
  ,{    3u,  81u,0x05u} /* DID: 0xF102 */
  ,{    3u,  83u,0x05u} /* DID: 0xF103 */
  ,{    3u,  85u,0x05u} /* DID: 0xF104 */
  ,{    3u,  87u,0x05u} /* DID: 0xF105 */
  ,{    3u,  89u,0x05u} /* DID: 0xF106 */
  ,{    3u,  91u,0x05u} /* DID: 0xF107 */
  ,{    3u,  93u,0x05u} /* DID: 0xF108 */
  ,{    3u,  95u,0x05u} /* DID: 0xF109 */
  ,{    3u,  97u,0x05u} /* DID: 0xF10A */
  ,{    3u,  99u,0x05u} /* DID: 0xF10B */
  ,{    3u, 101u,0x05u} /* DID: 0xF10C */
  ,{    3u, 103u,0x05u} /* DID: 0xF10D */
  ,{    3u, 105u,0x05u} /* DID: 0xF10E */
  ,{    3u, 107u,0x05u} /* DID: 0xF10F */
  ,{    3u, 109u,0x05u} /* DID: 0xF110 */
  ,{    3u, 111u,0x05u} /* DID: 0xF111 */
  ,{    3u, 113u,0x05u} /* DID: 0xF112 */
  ,{    3u, 115u,0x05u} /* DID: 0xF113 */
  ,{    3u, 117u,0x05u} /* DID: 0xF114 */
  ,{    3u, 119u,0x05u} /* DID: 0xF115 */
  ,{    3u, 121u,0x05u} /* DID: 0xF116 */
  ,{    3u, 123u,0x05u} /* DID: 0xF117 */
  ,{    3u, 125u,0x05u} /* DID: 0xF118 */
  ,{    3u, 127u,0x05u} /* DID: 0xF119 */
  ,{    3u, 129u,0x05u} /* DID: 0xF11A */
  ,{    3u, 131u,0x05u} /* DID: 0xF11B */
  ,{    3u, 133u,0x05u} /* DID: 0xF11C */
  ,{    3u, 135u,0x05u} /* DID: 0xF11D */
  ,{    3u, 137u,0x05u} /* DID: 0xF11E */
  ,{    3u, 139u,0x05u} /* DID: 0xF11F */
  ,{    3u, 141u,0x05u} /* DID: 0xF120 */
  ,{    3u, 143u,0x05u} /* DID: 0xF121 */
  ,{    3u, 145u,0x05u} /* DID: 0xF122 */
  ,{    3u, 147u,0x05u} /* DID: 0xF123 */
  ,{    3u, 149u,0x05u} /* DID: 0xF124 */
  ,{    3u, 151u,0x05u} /* DID: 0xF125 */
  ,{    3u, 153u,0x05u} /* DID: 0xF126 */
  ,{    3u, 155u,0x05u} /* DID: 0xF127 */
  ,{    3u, 157u,0x05u} /* DID: 0xF128 */
  ,{    3u, 159u,0x05u} /* DID: 0xF129 */
  ,{    3u, 161u,0x05u} /* DID: 0xF12A */
  ,{    3u, 163u,0x05u} /* DID: 0xF12B */
  ,{    3u, 165u,0x05u} /* DID: 0xF12C */
  ,{    3u, 167u,0x05u} /* DID: 0xF12D */
  ,{    3u, 169u,0x05u} /* DID: 0xF12E */
  ,{    3u, 171u,0x05u} /* DID: 0xF12F */
  ,{    3u, 173u,0x05u} /* DID: 0xF130 */
  ,{    3u, 175u,0x05u} /* DID: 0xF131 */
  ,{    3u, 177u,0x05u} /* DID: 0xF132 */
  ,{    3u, 179u,0x05u} /* DID: 0xF133 */
  ,{    3u, 181u,0x05u} /* DID: 0xF134 */
  ,{    3u, 183u,0x05u} /* DID: 0xF135 */
  ,{    3u, 185u,0x05u} /* DID: 0xF136 */
  ,{    3u, 187u,0x05u} /* DID: 0xF137 */
  ,{    3u, 189u,0x05u} /* DID: 0xF138 */
  ,{    3u, 191u,0x05u} /* DID: 0xF139 */
  ,{    3u, 193u,0x05u} /* DID: 0xF13A */
  ,{    3u, 195u,0x05u} /* DID: 0xF13B */
  ,{    3u, 197u,0x05u} /* DID: 0xF13C */
  ,{    3u, 199u,0x05u} /* DID: 0xF13D */
  ,{    3u, 201u,0x05u} /* DID: 0xF13E */
  ,{    3u, 203u,0x05u} /* DID: 0xF13F */
  ,{    3u, 205u,0x05u} /* DID: 0xF140 */
  ,{    3u, 207u,0x01u} /* DID: 0xF150 */
  ,{    3u, 208u,0x01u} /* DID: 0xF152 */
  ,{    3u, 209u,0x05u} /* DID: 0xF186 */
  ,{    3u, 211u,0x05u} /* DID: 0xF18A */
  ,{    3u, 213u,0x01u} /* DID: 0xF18B */
  ,{    3u, 214u,0x01u} /* DID: 0xF18C */
  ,{    3u, 215u,0x05u} /* DID: 0xF190 */
};
/*! DID signal operation classes */
CONST(Dcm_CfgDidMgrSignalOpClassInfoType, DCM_CONST) Dcm_CfgDidMgrSignalOpClassInfo[217]=
{
   { ((Dcm_DidMgrOpFuncType)(Dcm_DidMgr_DcmDspData_Pruefstempel_Read)), 2u} /* DID: 0x1000 */                                                        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Dcm_DidMgr_DcmDspData_Pruefstempel_Write)), 2u} /* DID: 0x1000 */                                                       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_EnergySavingState_ReadData)), 1u} /* DID: 0x100A */                                    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_EnergySavingState_ConditionCheckRead)), 0u} /* DID: 0x100A */                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_ExtendedEnergySavingState_ReadData)), 1u} /* DID: 0x100E */                            /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_ExtendedEnergySavingState_ConditionCheckRead)), 0u} /* DID: 0x100E */                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SensorenAnzahlLesen_ReadData)), 2u} /* DID: 0x1600 */                                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SensorenAnzahlLesen_ConditionCheckRead)), 1u} /* DID: 0x1600 */                        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DcmDspDid_SensorLesen_1_ReadData)), 2u} /* DID: 0x1601 */                                    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DcmDspDid_SensorLesen_1_ConditionCheckRead)), 1u} /* DID: 0x1601 */                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DcmDspDid_SensorLesen_2_ReadData)), 2u} /* DID: 0x1602 */                                    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DcmDspDid_SensorLesen_2_ConditionCheckRead)), 1u} /* DID: 0x1602 */                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DcmDspDid_SensorLesen_3_ReadData)), 2u} /* DID: 0x1603 */                                    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DcmDspDid_SensorLesen_3_ConditionCheckRead)), 1u} /* DID: 0x1603 */                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_Systemzeit_ReadData)), 1u} /* DID: 0x1701 */                                           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_DmDtcAktiveMeldung_ReadData)), 1u} /* DID: 0x1704 */                                   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_DmDtcAktiveMeldung_ReadDataLength)), 1u} /* DID: 0x1704 */                             /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_DmDtcAktiveMeldung_ConditionCheckRead)), 0u} /* DID: 0x1704 */                         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_StatusDmFssMaster_ReadData)), 2u} /* DID: 0x1710 */                                    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_StatusDmFssMaster_ConditionCheckRead)), 1u} /* DID: 0x1710 */                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_ZgwZertifikat_ReadData)), 2u} /* DID: 0x171F */                                        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_ZgwZertifikat_ConditionCheckRead)), 1u} /* DID: 0x171F */                              /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_DmIsDtcActiveResponse_ReadData)), 1u} /* DID: 0x1723 */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_DmIsDtcActiveResponse_ReadDataLength)), 1u} /* DID: 0x1723 */                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_DmIsDtcActiveResponse_ConditionCheckRead)), 0u} /* DID: 0x1723 */                      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_StatusSystime_ReadData)), 2u} /* DID: 0x1725 */                                        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_StatusSystime_ConditionCheckRead)), 1u} /* DID: 0x1725 */                              /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_IndivDataTable_ReadData)), 1u} /* DID: 0x1734 */                                       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_EthGetNumberOfPorts_ReadData)), 2u} /* DID: 0x1800 */                                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_EthGetNumberOfPorts_ConditionCheckRead)), 1u} /* DID: 0x1800 */                        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_EthSignalQuality_ReadData)), 2u} /* DID: 0x1801 */                                     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_EthSignalQuality_ConditionCheckRead)), 1u} /* DID: 0x1801 */                           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_EthPhyLinkState_ReadData)), 2u} /* DID: 0x1802 */                                      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_EthPhyLinkState_ConditionCheckRead)), 1u} /* DID: 0x1802 */                            /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_Sekundaererfehlerspeicher_ReadData)), 2u} /* DID: 0x2000 */                            /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_Sekundaererfehlerspeicher_ConditionCheckRead)), 1u} /* DID: 0x2000 */                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_ProgrammingCounter_ReadData)), 1u} /* DID: 0x2502 */                                   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_ProgrammingCounterMaxValue_ReadData)), 1u} /* DID: 0x2503 */                           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_FlashTimingParameter_ReadData)), 1u} /* DID: 0x2504 */                                 /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SwfkDeleteSupported_ReadData)), 1u} /* DID: 0x2507 */                                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_HddDownloadStatus_ReadData)), 2u} /* DID: 0x2510 */                                    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_HddDownloadStatus_ConditionCheckRead)), 1u} /* DID: 0x2510 */                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_HddDownloadTimeToCompletion_ReadData)), 2u} /* DID: 0x2511 */                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_HddDownloadTimeToCompletion_ConditionCheckRead)), 1u} /* DID: 0x2511 */                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_MileKmEeprom_ReadData)), 2u} /* DID: 0x2540 */                                         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_MileKmEeprom_ConditionCheckRead)), 1u} /* DID: 0x2540 */                               /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_PiaProfile0_ReadData)), 2u} /* DID: 0x2560 */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_PiaProfile0_ReadDataLength)), 2u} /* DID: 0x2560 */                                    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_PiaProfile0_ConditionCheckRead)), 1u} /* DID: 0x2560 */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_PiaProfile0_WriteData)), 4u} /* DID: 0x2560 */                                         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_PiaProfile1_ReadData)), 2u} /* DID: 0x2561 */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_PiaProfile1_ReadDataLength)), 2u} /* DID: 0x2561 */                                    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_PiaProfile1_ConditionCheckRead)), 1u} /* DID: 0x2561 */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_PiaProfile1_WriteData)), 4u} /* DID: 0x2561 */                                         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_PiaProfile2_ReadData)), 2u} /* DID: 0x2562 */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_PiaProfile2_ReadDataLength)), 2u} /* DID: 0x2562 */                                    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_PiaProfile2_ConditionCheckRead)), 1u} /* DID: 0x2562 */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_PiaProfile2_WriteData)), 4u} /* DID: 0x2562 */                                         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_PiaProfileA_ReadData)), 2u} /* DID: 0x2563 */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_PiaProfileA_ReadDataLength)), 2u} /* DID: 0x2563 */                                    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_PiaProfileA_ConditionCheckRead)), 1u} /* DID: 0x2563 */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_PiaProfileA_WriteData)), 4u} /* DID: 0x2563 */                                         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_ListManipulationSecurityArtifact_ReadData)), 2u} /* DID: 0x2590 */                     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_ListManipulationSecurityArtifact_ConditionCheckRead)), 1u} /* DID: 0x2590 */           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_ListManipulationSw_ReadData)), 2u} /* DID: 0x2591 */                                   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_ListManipulationSw_ConditionCheckRead)), 1u} /* DID: 0x2591 */                         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_ListManipulationApplicationData_ReadData)), 2u} /* DID: 0x2592 */                      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_ListManipulationApplicationData_ConditionCheckRead)), 1u} /* DID: 0x2592 */            /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_ListManipulationSecureBoot_ReadData)), 2u} /* DID: 0x2593 */                           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_ListManipulationSecureBoot_ConditionCheckRead)), 1u} /* DID: 0x2593 */                 /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_ListManipulationGeneral_ReadData)), 2u} /* DID: 0x2594 */                              /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_ListManipulationGeneral_ConditionCheckRead)), 1u} /* DID: 0x2594 */                    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DIDRange_DcmDspDidRange_Coding_ReadDidData)), 0u} /* DID: 0x3000 */                               /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DIDRange_DcmDspDidRange_Coding_IsDidAvailable)), 0u} /* DID: 0x3000 */                            /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DIDRange_DcmDspDidRange_Coding_WriteDidData)), 0u} /* DID: 0x3000 */                              /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DIDRange_DcmDspDidRange_Coding_IsDidAvailable)), 0u} /* DID: 0x3000 */                            /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_ReadActiveSessionState_ReadData)), 1u} /* DID: 0xF100 */                               /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_ReadActiveSessionState_ConditionCheckRead)), 0u} /* DID: 0xF100 */                     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkAktuell_ReadData)), 2u} /* DID: 0xF101 */                                           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkAktuell_ReadDataLength)), 2u} /* DID: 0xF101 */                                     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkAktuell_ConditionCheckRead)), 1u} /* DID: 0xF101 */                                 /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkSysSupplier_ReadData)), 2u} /* DID: 0xF102 */                                       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkSysSupplier_ConditionCheckRead)), 1u} /* DID: 0xF102 */                             /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkWerk_ReadData)), 2u} /* DID: 0xF103 */                                              /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkWerk_ConditionCheckRead)), 1u} /* DID: 0xF103 */                                    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup01_ReadData)), 2u} /* DID: 0xF104 */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup01_ConditionCheckRead)), 1u} /* DID: 0xF104 */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup02_ReadData)), 2u} /* DID: 0xF105 */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup02_ConditionCheckRead)), 1u} /* DID: 0xF105 */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup03_ReadData)), 2u} /* DID: 0xF106 */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup03_ConditionCheckRead)), 1u} /* DID: 0xF106 */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup04_ReadData)), 2u} /* DID: 0xF107 */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup04_ConditionCheckRead)), 1u} /* DID: 0xF107 */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup05_ReadData)), 2u} /* DID: 0xF108 */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup05_ConditionCheckRead)), 1u} /* DID: 0xF108 */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup06_ReadData)), 2u} /* DID: 0xF109 */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup06_ConditionCheckRead)), 1u} /* DID: 0xF109 */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup07_ReadData)), 2u} /* DID: 0xF10A */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup07_ConditionCheckRead)), 1u} /* DID: 0xF10A */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup08_ReadData)), 2u} /* DID: 0xF10B */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup08_ConditionCheckRead)), 1u} /* DID: 0xF10B */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup09_ReadData)), 2u} /* DID: 0xF10C */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup09_ConditionCheckRead)), 1u} /* DID: 0xF10C */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup10_ReadData)), 2u} /* DID: 0xF10D */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup10_ConditionCheckRead)), 1u} /* DID: 0xF10D */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup11_ReadData)), 2u} /* DID: 0xF10E */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup11_ConditionCheckRead)), 1u} /* DID: 0xF10E */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup12_ReadData)), 2u} /* DID: 0xF10F */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup12_ConditionCheckRead)), 1u} /* DID: 0xF10F */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup13_ReadData)), 2u} /* DID: 0xF110 */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup13_ConditionCheckRead)), 1u} /* DID: 0xF110 */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup14_ReadData)), 2u} /* DID: 0xF111 */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup14_ConditionCheckRead)), 1u} /* DID: 0xF111 */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup15_ReadData)), 2u} /* DID: 0xF112 */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup15_ConditionCheckRead)), 1u} /* DID: 0xF112 */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup16_ReadData)), 2u} /* DID: 0xF113 */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup16_ConditionCheckRead)), 1u} /* DID: 0xF113 */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup17_ReadData)), 2u} /* DID: 0xF114 */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup17_ConditionCheckRead)), 1u} /* DID: 0xF114 */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup18_ReadData)), 2u} /* DID: 0xF115 */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup18_ConditionCheckRead)), 1u} /* DID: 0xF115 */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup19_ReadData)), 2u} /* DID: 0xF116 */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup19_ConditionCheckRead)), 1u} /* DID: 0xF116 */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup20_ReadData)), 2u} /* DID: 0xF117 */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup20_ConditionCheckRead)), 1u} /* DID: 0xF117 */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup21_ReadData)), 2u} /* DID: 0xF118 */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup21_ConditionCheckRead)), 1u} /* DID: 0xF118 */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup22_ReadData)), 2u} /* DID: 0xF119 */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup22_ConditionCheckRead)), 1u} /* DID: 0xF119 */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup23_ReadData)), 2u} /* DID: 0xF11A */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup23_ConditionCheckRead)), 1u} /* DID: 0xF11A */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup24_ReadData)), 2u} /* DID: 0xF11B */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup24_ConditionCheckRead)), 1u} /* DID: 0xF11B */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup25_ReadData)), 2u} /* DID: 0xF11C */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup25_ConditionCheckRead)), 1u} /* DID: 0xF11C */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup26_ReadData)), 2u} /* DID: 0xF11D */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup26_ConditionCheckRead)), 1u} /* DID: 0xF11D */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup27_ReadData)), 2u} /* DID: 0xF11E */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup27_ConditionCheckRead)), 1u} /* DID: 0xF11E */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup28_ReadData)), 2u} /* DID: 0xF11F */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup28_ConditionCheckRead)), 1u} /* DID: 0xF11F */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup29_ReadData)), 2u} /* DID: 0xF120 */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup29_ConditionCheckRead)), 1u} /* DID: 0xF120 */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup30_ReadData)), 2u} /* DID: 0xF121 */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup30_ConditionCheckRead)), 1u} /* DID: 0xF121 */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup31_ReadData)), 2u} /* DID: 0xF122 */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup31_ConditionCheckRead)), 1u} /* DID: 0xF122 */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup32_ReadData)), 2u} /* DID: 0xF123 */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup32_ConditionCheckRead)), 1u} /* DID: 0xF123 */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup33_ReadData)), 2u} /* DID: 0xF124 */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup33_ConditionCheckRead)), 1u} /* DID: 0xF124 */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup34_ReadData)), 2u} /* DID: 0xF125 */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup34_ConditionCheckRead)), 1u} /* DID: 0xF125 */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup35_ReadData)), 2u} /* DID: 0xF126 */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup35_ConditionCheckRead)), 1u} /* DID: 0xF126 */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup36_ReadData)), 2u} /* DID: 0xF127 */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup36_ConditionCheckRead)), 1u} /* DID: 0xF127 */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup37_ReadData)), 2u} /* DID: 0xF128 */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup37_ConditionCheckRead)), 1u} /* DID: 0xF128 */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup38_ReadData)), 2u} /* DID: 0xF129 */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup38_ConditionCheckRead)), 1u} /* DID: 0xF129 */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup39_ReadData)), 2u} /* DID: 0xF12A */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup39_ConditionCheckRead)), 1u} /* DID: 0xF12A */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup40_ReadData)), 2u} /* DID: 0xF12B */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup40_ConditionCheckRead)), 1u} /* DID: 0xF12B */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup41_ReadData)), 2u} /* DID: 0xF12C */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup41_ConditionCheckRead)), 1u} /* DID: 0xF12C */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup42_ReadData)), 2u} /* DID: 0xF12D */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup42_ConditionCheckRead)), 1u} /* DID: 0xF12D */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup43_ReadData)), 2u} /* DID: 0xF12E */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup43_ConditionCheckRead)), 1u} /* DID: 0xF12E */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup44_ReadData)), 2u} /* DID: 0xF12F */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup44_ConditionCheckRead)), 1u} /* DID: 0xF12F */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup45_ReadData)), 2u} /* DID: 0xF130 */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup45_ConditionCheckRead)), 1u} /* DID: 0xF130 */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup46_ReadData)), 2u} /* DID: 0xF131 */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup46_ConditionCheckRead)), 1u} /* DID: 0xF131 */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup47_ReadData)), 2u} /* DID: 0xF132 */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup47_ConditionCheckRead)), 1u} /* DID: 0xF132 */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup48_ReadData)), 2u} /* DID: 0xF133 */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup48_ConditionCheckRead)), 1u} /* DID: 0xF133 */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup49_ReadData)), 2u} /* DID: 0xF134 */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup49_ConditionCheckRead)), 1u} /* DID: 0xF134 */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup50_ReadData)), 2u} /* DID: 0xF135 */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup50_ConditionCheckRead)), 1u} /* DID: 0xF135 */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup51_ReadData)), 2u} /* DID: 0xF136 */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup51_ConditionCheckRead)), 1u} /* DID: 0xF136 */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup52_ReadData)), 2u} /* DID: 0xF137 */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup52_ConditionCheckRead)), 1u} /* DID: 0xF137 */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup53_ReadData)), 2u} /* DID: 0xF138 */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup53_ConditionCheckRead)), 1u} /* DID: 0xF138 */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup54_ReadData)), 2u} /* DID: 0xF139 */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup54_ConditionCheckRead)), 1u} /* DID: 0xF139 */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup55_ReadData)), 2u} /* DID: 0xF13A */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup55_ConditionCheckRead)), 1u} /* DID: 0xF13A */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup56_ReadData)), 2u} /* DID: 0xF13B */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup56_ConditionCheckRead)), 1u} /* DID: 0xF13B */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup57_ReadData)), 2u} /* DID: 0xF13C */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup57_ConditionCheckRead)), 1u} /* DID: 0xF13C */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup58_ReadData)), 2u} /* DID: 0xF13D */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup58_ConditionCheckRead)), 1u} /* DID: 0xF13D */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup59_ReadData)), 2u} /* DID: 0xF13E */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup59_ConditionCheckRead)), 1u} /* DID: 0xF13E */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup60_ReadData)), 2u} /* DID: 0xF13F */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup60_ConditionCheckRead)), 1u} /* DID: 0xF13F */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup61_ReadData)), 2u} /* DID: 0xF140 */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SvkBackup61_ConditionCheckRead)), 1u} /* DID: 0xF140 */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SgbdIdx_ReadData)), 1u} /* DID: 0xF150 */                                              /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_Readhwmodificationindex_ReadData)), 1u} /* DID: 0xF152 */                              /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Dcm_DidMgr_F186_ReadData)), 1u} /* DID: 0xF186 */                                                                       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Dcm_DidMgr_F186_ReadData)), 0u} /* DID: 0xF186 */                                                                       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SystemSupplierIdentifier_ReadData)), 2u} /* DID: 0xF18A */                             /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_SystemSupplierIdentifier_ConditionCheckRead)), 1u} /* DID: 0xF18A */                   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_Herstelldatum_ReadData)), 1u} /* DID: 0xF18B */                                        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_EcuSerialNumber_ReadData)), 1u} /* DID: 0xF18C */                                      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_Vin_ReadData)), 2u} /* DID: 0xF190 */                                                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DcmDspData_Vin_ConditionCheckRead)), 1u} /* DID: 0xF190 */                                        /* PRQA S 0313 */ /* MD_Dcm_0313 */
};
/*! RID properties */
CONST(Dcm_CfgRidMgrRidInfoType, DCM_CONST) Dcm_CfgRidMgrRidInfo[58]=
{
   {    0u,   6u,0x01u} /* RID: 0x0203 */
  ,{    1u,   0u,0x01u} /* RID: 0x0204 */
  ,{    2u,   3u,0x01u} /* RID: 0x0205 */
  ,{    3u,   3u,0x01u} /* RID: 0x0206 */
  ,{    4u,   3u,0x05u} /* RID: 0x020C */
  ,{    6u,   3u,0x05u} /* RID: 0x020F */
  ,{    8u,   3u,0x05u} /* RID: 0x0210 */
  ,{   10u,   6u,0x01u} /* RID: 0x0211 */
  ,{   11u,   6u,0x01u} /* RID: 0x0212 */
  ,{   12u,   6u,0x05u} /* RID: 0x0213 */
  ,{   14u,   6u,0x01u} /* RID: 0x0214 */
  ,{   15u,   3u,0x01u} /* RID: 0x0215 */
  ,{   16u,   3u,0x05u} /* RID: 0x0216 */
  ,{   18u,   6u,0x01u} /* RID: 0x0230 */
  ,{   19u,   3u,0x01u} /* RID: 0x0234 */
  ,{   20u,   3u,0x01u} /* RID: 0x0235 */
  ,{   21u,   3u,0x05u} /* RID: 0x0238 */
  ,{   23u,   3u,0x05u} /* RID: 0x0239 */
  ,{   25u,   3u,0x01u} /* RID: 0x0303 */
  ,{   26u,   3u,0x01u} /* RID: 0x0304 */
  ,{   27u,   3u,0x03u} /* RID: 0x0305 */
  ,{   29u,   9u,0x01u} /* RID: 0x0F01 */
  ,{   30u,   3u,0x01u} /* RID: 0x0F06 */
  ,{   31u,   3u,0x01u} /* RID: 0x0F0C */
  ,{   32u,  10u,0x01u} /* RID: 0x0F1F */
  ,{   33u,   6u,0x01u} /* RID: 0x1002 */
  ,{   34u,   3u,0x01u} /* RID: 0x1003 */
  ,{   35u,   3u,0x01u} /* RID: 0x1005 */
  ,{   36u,  11u,0x01u} /* RID: 0x100D */
  ,{   37u,   6u,0x01u} /* RID: 0x100E */
  ,{   38u,   6u,0x01u} /* RID: 0x100F */
  ,{   39u,   3u,0x01u} /* RID: 0x1010 */
  ,{   40u,   3u,0x01u} /* RID: 0x1011 */
  ,{   41u,   6u,0x01u} /* RID: 0x101A */
  ,{   42u,   3u,0x01u} /* RID: 0x1020 */
  ,{   43u,   3u,0x01u} /* RID: 0x1021 */
  ,{   44u,   3u,0x01u} /* RID: 0x1022 */
  ,{   45u,   3u,0x01u} /* RID: 0x1023 */
  ,{   46u,   3u,0x01u} /* RID: 0x1024 */
  ,{   47u,   3u,0x01u} /* RID: 0x1041 */
  ,{   48u,   3u,0x01u} /* RID: 0x1042 */
  ,{   49u,   3u,0x01u} /* RID: 0x1043 */
  ,{   50u,   6u,0x01u} /* RID: 0x1044 */
  ,{   51u,   3u,0x01u} /* RID: 0x1045 */
  ,{   52u,   3u,0x01u} /* RID: 0x1047 */
  ,{   53u,   3u,0x01u} /* RID: 0x1049 */
  ,{   54u,   3u,0x01u} /* RID: 0x104B */
  ,{   55u,   6u,0x01u} /* RID: 0x104C */
  ,{   56u,   6u,0x01u} /* RID: 0x104D */
  ,{   57u,   3u,0x01u} /* RID: 0x104E */
  ,{   58u,   1u,0x01u} /* RID: 0x104F */
  ,{   59u,   1u,0x01u} /* RID: 0x1050 */
  ,{   60u,   1u,0x01u} /* RID: 0x1051 */
  ,{   61u,   3u,0x05u} /* RID: 0x1061 */
  ,{   63u,   3u,0x01u} /* RID: 0x4000 */
  ,{   64u,   1u,0x01u} /* RID: 0x4003 */
  ,{   65u,   3u,0x05u} /* RID: 0x4006 */
  ,{   67u,   6u,0x01u} /* RID: 0x7000 */
};
/*! RID operation properties */
CONST(Dcm_CfgRidMgrOpInfoType, DCM_CONST) Dcm_CfgRidMgrOpInfo[68]=
{
   { ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_DcmDspRoutine_RcCppc_Start)),   0u,   0u,   0u, 256u, 6u} /* RID: 0x0203 */                    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_DcmDspRoutine_RcHdddRi4002_Start)),   0u,   0u,   0u,   0u, 0u} /* RID: 0x0204 */              /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_DcmDspRoutine_RcRswedi_Start)),   0u,   8u,   0u,  16u, 7u} /* RID: 0x0205 */                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_0206_Start)),   1u,   1u,   3u,   3u, 9u} /* RID: 0x0206 */                                                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_020C_Start)),   6u,   6u,   1u,   1u, 9u} /* RID: 0x020C */                                                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_020C_RequestResults)),   0u,   0u,   1u,   5u, 9u} /* RID: 0x020C */                                         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_020F_Start)),   2u,   2u,   1u,   1u, 9u} /* RID: 0x020F */                                                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_020F_RequestResults)),   0u,   0u,   2u,   2u, 9u} /* RID: 0x020F */                                         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_0210_Start)),   5u,   5u,   1u,   1u, 9u} /* RID: 0x0210 */                                                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_0210_RequestResults)),   0u,   0u,   5u,  25u, 9u} /* RID: 0x0210 */                                         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_0211_Start)),   2u,   2u,   2u,   2u, 9u} /* RID: 0x0211 */                                                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_0212_Start)),   5u,   5u,   1u,   1u, 9u} /* RID: 0x0212 */                                                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_0213_Start)),   2u,   2u,   2u,   2u, 9u} /* RID: 0x0213 */                                                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_0213_RequestResults)),   0u,   0u,   4u,   4u, 9u} /* RID: 0x0213 */                                         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_0214_Start)),   1u,   1u,   3u,   3u, 9u} /* RID: 0x0214 */                                                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_0215_Start)),   2u,   2u,   4u,   4u, 9u} /* RID: 0x0215 */                                                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_0216_Start)),   0u,  16u,   2u,   2u, 9u} /* RID: 0x0216 */                                                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_0216_RequestResults)),   0u,   0u,   2u,  18u, 9u} /* RID: 0x0216 */                                         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_0230_Start)),   1u,   1u,   3u,   3u, 9u} /* RID: 0x0230 */                                                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_0234_Start)),   2u,   2u,   2u,   2u, 9u} /* RID: 0x0234 */                                                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_0235_Start)),   0u,  16u,   2u,   2u, 9u} /* RID: 0x0235 */                                                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_0238_Start)),   0u,   0u,   2u,   2u, 9u} /* RID: 0x0238 */                                                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_0238_RequestResults)),   0u,   0u,   2u,  18u, 9u} /* RID: 0x0238 */                                         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_0239_Start)),   0u,  99u,   2u,   2u, 9u} /* RID: 0x0239 */                                                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_0239_RequestResults)),   0u,   0u,   2u,   2u, 9u} /* RID: 0x0239 */                                         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_DcmDspRoutine_DiagCommLoopback_Start)),   0u,  16u,   0u,  16u, 7u} /* RID: 0x0303 */          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_0304_Start)),   1u,   1u,   4u,   4u, 9u} /* RID: 0x0304 */                                                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_0305_Start)),   1u,   1u,   1u,   1u, 9u} /* RID: 0x0305 */                                                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_DcmDspRoutine_SteuernDmFssMaster_Stop)),   0u,   0u,   0u,   0u, 0u} /* RID: 0x0305 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_DcmDspRoutine_CheckCodingSignature_Start)),   0u,   0u,   1u,   1u, 3u} /* RID: 0x0F01 */      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_DcmDspRoutine_IsLoeschen_Start)),   0u,   0u,   0u,   0u, 0u} /* RID: 0x0F06 */                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_0F0C_Start)),   1u,   1u,   0u,   0u, 9u} /* RID: 0x0F0C */                                                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_0F1F_Start)),   1u,  17u,   2u,  18u, 9u} /* RID: 0x0F1F */                                                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_1002_Start)),   1u,   1u,   1u,   1u, 9u} /* RID: 0x1002 */                                                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_1003_Start)),   1u,   1u,   0u,   0u, 9u} /* RID: 0x1003 */                                                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_DcmDspRoutine_StartSystime_Start)),   0u,   0u,   0u,   0u, 0u} /* RID: 0x1005 */              /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_DcmDspRoutine_ActivateZgwCodingmode_Start)),   0u,   0u,   0u,   0u, 0u} /* RID: 0x100D */     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_DcmDspRoutine_ActivateZgwFlashmode_Start)),   0u,   0u,   0u,   0u, 0u} /* RID: 0x100E */      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_DcmDspRoutine_ActivateZgwApplicationmode_Start)),   0u,   0u,   0u,   0u, 0u} /* RID: 0x100F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_1010_Start)),   1u,   1u,   0u,   0u, 9u} /* RID: 0x1010 */                                                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_1011_Start)),   0u,   0u,   2u,   2u, 9u} /* RID: 0x1011 */                                                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_DcmDspRoutine_EraseIdrData_Start)),   0u,   0u,   1u,   1u, 3u} /* RID: 0x101A */              /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_DcmDspRoutine_InitLinSlave_Start)),   0u,   0u,   1u,   1u, 3u} /* RID: 0x1020 */              /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_1021_Start)),   0u,   8u,  17u,  17u, 9u} /* RID: 0x1021 */                                                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_1022_Start)),   5u,   5u,   3u,   3u, 9u} /* RID: 0x1022 */                                                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_1023_Start)),   1u,   1u,   0u,   0u, 9u} /* RID: 0x1023 */                                                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_DcmDspRoutine_ResetAktivierungsleitung_Start)),   0u,   0u,   0u,   0u, 0u} /* RID: 0x1024 */  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_1041_Start)),   2u,   2u,  17u,  17u, 9u} /* RID: 0x1041 */                                                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_1042_Start)),   1u,   1u,   2u,   2u, 9u} /* RID: 0x1042 */                                                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_1043_Start)),   2u,   2u,   2u,   2u, 9u} /* RID: 0x1043 */                                                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_1044_Start)),   2u,   2u,   1u,   1u, 9u} /* RID: 0x1044 */                                                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_1045_Start)),   2u,   2u,   2u,   2u, 9u} /* RID: 0x1045 */                                                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_1047_Start)),   1u,   1u,   0u,   6u, 9u} /* RID: 0x1047 */                                                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_1049_Start)),   1u,   1u,  24u,  24u, 9u} /* RID: 0x1049 */                                                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_DcmDspRoutine_EthResetPortTxRxStats_Start)),   0u,   0u,   0u,   0u, 0u} /* RID: 0x104B */     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_104C_Start)),   3u,   3u,   1u,   1u, 9u} /* RID: 0x104C */                                                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_104D_Start)),   2u,   2u,   1u,   1u, 9u} /* RID: 0x104D */                                                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_104E_Start)),   0u,   0u,   2u,   2u, 9u} /* RID: 0x104E */                                                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_104F_Start)),   1u,   1u,   1u,   1u, 9u} /* RID: 0x104F */                                                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_1050_Start)),   0u,   0u,   2u,   2u, 9u} /* RID: 0x1050 */                                                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_1051_Start)),   1u,   1u,   2u,   2u, 9u} /* RID: 0x1051 */                                                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_DcmDspRoutine_FehlerspeicherEndeWerksablauf_Start)),   0u,   0u,   0u,   0u, 0u} /* RID: 0x1061 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_DcmDspRoutine_FehlerspeicherEndeWerksablauf_RequestResults)),   0u,   0u,   1u,   1u, 3u} /* RID: 0x1061 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_4000_Start)),   1u,   1u,   2u,   2u, 9u} /* RID: 0x4000 */                                                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_DcmDspRoutine_InitLinBus_Start)),   0u,   0u,   0u,   0u, 0u} /* RID: 0x4003 */                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_DcmDspRoutine_RamDatenSchreiben_Start)),   0u,   0u,   0u,   0u, 0u} /* RID: 0x4006 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_DcmDspRoutine_RamDatenSchreiben_RequestResults)),   0u,   0u,   1u,   1u, 3u} /* RID: 0x4006 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_7000_Start)),   5u,   5u,   1u,   1u, 9u} /* RID: 0x7000 */                                                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
};
/*! DCM service initializers */
CONST(Dcm_DiagSvcInitFuncType, DCM_CONST) Dcm_CfgDiagSvcInitializers[3]=
{
   Dcm_Service27Init
  ,Dcm_Service86Init
  ,NULL_PTR /* end marker */
};
/*! DCM service properties */
CONST(Dcm_CfgDiagServiceInfoType, DCM_CONST) Dcm_CfgDiagServiceInfo[14]=
{
   { Dcm_Service10Processor,0x01u, 1u,   1u,   2u} /* SID: 0x10 */
  ,{ Dcm_Service11Processor,0x01u, 1u,   3u,   4u} /* SID: 0x11 */
  ,{ Dcm_Service14Processor,0x00u, 3u,   0u,   0u} /* SID: 0x14 */
  ,{ Dcm_Service19Processor,0x01u, 1u,   5u,   0u} /* SID: 0x19 */
  ,{ Dcm_Service22Processor,0x00u, 2u,   0u,   0u} /* SID: 0x22 */
  ,{ Dcm_Service27Processor,0x03u, 1u,   6u,   0u} /* SID: 0x27 */
  ,{ Dcm_Service28Processor,0x01u, 1u,   7u,   0u} /* SID: 0x28 */
  ,{ Dcm_Service2EProcessor,0x00u, 3u,   0u,   0u} /* SID: 0x2E */
  ,{ Dcm_Service31Processor,0x01u, 3u,   0u,   0u} /* SID: 0x31 */
  ,{ Dcm_DiagnosticService_0x35,0x00u, 0u,   0u,   0u} /* SID: 0x35 */
  ,{ Dcm_Service3EProcessor,0x01u, 1u,   0u,   0u} /* SID: 0x3E */
  ,{ Dcm_Service85Processor,0x01u, 1u,   8u,   0u} /* SID: 0x85 */
  ,{ Dcm_Service86Processor,0x01u, 1u,   0u,   0u} /* SID: 0x86 */
  ,{ Dcm_RepeaterDeadEnd,0x00u, 0u,   0u,   0u} /* Dcm_RepeaterDeadEnd */
};
/*! Indirection from diag service info to execution pre conditions */
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgDiagSvcIdExecPrecondTable[13]=
{
      0u /* SID: 0x10 */
  ,   3u /* SID: 0x11 */
  ,   3u /* SID: 0x14 */
  ,   3u /* SID: 0x19 */
  ,   5u /* SID: 0x22 */
  ,   6u /* SID: 0x27 */
  ,   6u /* SID: 0x28 */
  ,   1u /* SID: 0x2E */
  ,   7u /* SID: 0x31 */
  ,   6u /* SID: 0x35 */
  ,   3u /* SID: 0x3E */
  ,   6u /* SID: 0x85 */
  ,   3u /* SID: 0x86 */
};
/*! DCM service post processors */
CONST(Dcm_DiagSvcConfirmationFuncType, DCM_CONST) Dcm_CfgDiagSvcPostProcessors[9]=
{
   Dcm_ServiceNoPostProcessor
  ,Dcm_Service10PostProcessor
  ,Dcm_Service10FastPostProcessor
  ,Dcm_Service11PostProcessor
  ,Dcm_Service11FastPostProcessor
  ,Dcm_Service19PostProcessor
  ,Dcm_Service27PostProcessor
  ,Dcm_Service28PostProcessor
  ,Dcm_Service85PostProcessor
};
/*! OEM notification functions */
CONST(Dcm_CfgDiagNotificationInfoType, DCM_CONST) Dcm_CfgDiagOemNotificationInfo[3]=
{
   { Rte_Call_ServiceRequestManufacturerNotification_IntegrationSample_Indication,Rte_Call_ServiceRequestManufacturerNotification_IntegrationSample_Confirmation}
  ,{ Rte_Call_ServiceRequestManufacturerNotification_StdDiag_Indication,Rte_Call_ServiceRequestManufacturerNotification_StdDiag_Confirmation}
  ,{ NULL_PTR,NULL_PTR}
};
/*! Service 0x10 sub-service properties table  */
CONST(Dcm_CfgSvc10SubFuncInfoType, DCM_CONST) Dcm_CfgSvc10SubFuncInfo[6]=
{
   { { 50u, 500u}, 0u} /* Session ID: 0x01 */
  ,{ { 95u,1000u}, 1u} /* Session ID: 0x02 */
  ,{ { 50u, 500u}, 0u} /* Session ID: 0x03 */
  ,{ { 50u, 500u}, 0u} /* Session ID: 0x41 */
  ,{ { 50u, 500u}, 0u} /* Session ID: 0x42 */
  ,{ { 50u, 500u}, 0u} /* Session ID: 0x43 */
};
/*! Indirection from service 0x10 sub functions to execution pre conditions */
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc10SubFuncExecPrecondTable[6]=
{
      1u /* Session ID: 0x01 */
  ,   2u /* Session ID: 0x02 */
  ,   3u /* Session ID: 0x03 */
  ,   4u /* Session ID: 0x41 */
  ,   0u /* Session ID: 0x42 */
  ,   0u /* Session ID: 0x43 */
};
/*! Service 0x11 sub-service properties table  */
CONST(Dcm_CfgSvc11SubFuncInfoType, DCM_CONST) Dcm_CfgSvc11SubFuncInfo[2]=
{
   { Dcm_Service11_01Processor} /* SF: 0x01 */
  ,{ Dcm_Service11_04Processor} /* SF: 0x04 */
};
/*! Indirection from service 0x11 sub functions to execution pre conditions */
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc11SubFuncExecPrecondTable[2]=
{
      3u /* SF: 0x01 */
  ,   3u /* SF: 0x04 */
};
/*! Service 0x19 sub-service properties table  */
CONST(Dcm_CfgSvc19SubFuncInfoType, DCM_CONST) Dcm_CfgSvc19SubFuncInfo[4]=
{
   { Dcm_Service19_02Processor, 2u} /* SF: 0x02 */
  ,{ Dcm_Service19_04Processor, 5u} /* SF: 0x04 */
  ,{ Dcm_Service19_06Processor, 5u} /* SF: 0x06 */
  ,{ Dcm_Service19_0AProcessor, 1u} /* SF: 0x0A */
};
/*! Indirection from service 0x19 sub functions to execution pre conditions */
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc19SubFuncExecPrecondTable[4]=
{
      0u /* SF: 0x02 */
  ,   3u /* SF: 0x04 */
  ,   3u /* SF: 0x06 */
  ,   3u /* SF: 0x0A */
};
/*! Service 0x27 sub-service properties table  */
CONST(Dcm_CfgSvc27SubFuncInfoType, DCM_CONST) Dcm_CfgSvc27SubFuncInfo[8]=
{
   { Dcm_Service27SeedProcessor,   5u} /* SF: 0x01 */                                                                                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ Dcm_Service27KeyProcessor, 133u} /* SF: 0x02 */                                                                                                 /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ Dcm_Service27SeedProcessor,   1u} /* SF: 0x03 */                                                                                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ Dcm_Service27KeyProcessor,   5u} /* SF: 0x04 */                                                                                                 /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ Dcm_Service27SeedProcessor,   5u} /* SF: 0x11 */                                                                                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ Dcm_Service27KeyProcessor,   5u} /* SF: 0x12 */                                                                                                 /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ Dcm_Service27SeedProcessor,   5u} /* SF: 0x13 */                                                                                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ Dcm_Service27KeyProcessor, 133u} /* SF: 0x14 */                                                                                                 /* PRQA S 0313 */ /* MD_Dcm_0313 */
};
/*! Service 0x27 security level properties table  */
CONST(Dcm_CfgSvc27SecLevelInfoType, DCM_CONST) Dcm_CfgSvc27SecLevelInfo[4]=
{
   { ((Dcm_Svc27GetSeedFuncType)(Rte_Call_SecurityAccess_DcmDspSecurityRow_Coding_GetSeed)),Rte_Call_SecurityAccess_DcmDspSecurityRow_Coding_CompareKey,   8u, 1u} /* SecLvl: DcmDspSecurityRow_Coding */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_Svc27GetSeedFuncType)(Rte_Call_SecurityAccess_DcmDspSecurityRow_level2_GetSeed)),Rte_Call_SecurityAccess_DcmDspSecurityRow_level2_CompareKey,   4u, 0u} /* SecLvl: DcmDspSecurityRow_level2 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_Svc27GetSeedFuncType)(Rte_Call_SecurityAccess_DcmDspSecurityRow_Programming_HDD_GetSeed)),Rte_Call_SecurityAccess_DcmDspSecurityRow_Programming_HDD_CompareKey,   8u, 1u} /* SecLvl: DcmDspSecurityRow_Programming_HDD */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_Svc27GetSeedFuncType)(Rte_Call_SecurityAccess_DcmDspSecurityRow_Swt_GetSeed)),Rte_Call_SecurityAccess_DcmDspSecurityRow_Swt_CompareKey,   8u, 1u} /* SecLvl: DcmDspSecurityRow_Swt */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
};
/*! Indirection from service 0x27 sub functions to execution pre conditions */
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc27SubFuncExecPrecondTable[8]=
{
      6u /* SF: 0x01 */
  ,   6u /* SF: 0x02 */
  ,   6u /* SF: 0x03 */
  ,   6u /* SF: 0x04 */
  ,   0u /* SF: 0x11 */
  ,   0u /* SF: 0x12 */
  ,   0u /* SF: 0x13 */
  ,   0u /* SF: 0x14 */
};
/*! Service 0x28 sub-service properties table  */
CONST(Dcm_CfgSvc28SubFuncInfoType, DCM_CONST) Dcm_CfgSvc28SubFuncInfo[4]=
{
   { Dcm_Service28_XXProcessor, 2u} /* SF: 0x00 */
  ,{ Dcm_Service28_XXProcessor, 2u} /* SF: 0x01 */
  ,{ Dcm_Service28_XXProcessor, 2u} /* SF: 0x02 */
  ,{ Dcm_Service28_XXProcessor, 2u} /* SF: 0x03 */
};
/*! Indirection from service 0x28 sub functions to execution pre conditions */
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc28SubFuncExecPrecondTable[4]=
{
      6u /* SF: 0x00 */
  ,   6u /* SF: 0x01 */
  ,   6u /* SF: 0x02 */
  ,   6u /* SF: 0x03 */
};
/*! Service 0x28 network ID to ComM channel map */
CONST(NetworkHandleType, DCM_CONST) Dcm_CfgSvc28SubNetIdMap[1]=
{
   DCM_SVC_28_NETWORK_ALL
};
/*! Indirection from service 0x3E sub functions to execution pre conditions */
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc3ESubFuncExecPrecondTable[1]=
{
      3u /* SF: 0x00 */
};
/*! Indirection from service 0x85 sub functions to execution pre conditions */
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc85SubFuncExecPrecondTable[2]=
{
      6u /* SF: 0x01 */
  ,   6u /* SF: 0x02 */
};
/*! DCM service 0x85 properties */
CONST(Dcm_CfgSvc85SubFuncInfoType, DCM_CONST) Dcm_CfgSvc85SubFuncInfo[2]=
{
   { Dem_EnableDTCSetting,RTE_MODE_DcmControlDtcSetting_ENABLEDTCSETTING} /* SF: 0x01 */
  ,{ Dem_DisableDTCSetting,RTE_MODE_DcmControlDtcSetting_DISABLEDTCSETTING} /* SF: 0x02 */
};
/*! Service 0x86 sub-service properties table  */
CONST(Dcm_CfgSvc86SubFuncInfoType, DCM_CONST) Dcm_CfgSvc86SubFuncInfo[3]=
{
   { Dcm_ExtService86_04Processor, 2u} /* SF: 0x04 */
  ,{ Dcm_ExtService86_40Processor, 2u} /* SF: 0x40 */
  ,{ Dcm_ExtService86_45Processor, 2u} /* SF: 0x45 */
};
/*! Indirection from service 0x86 sub functions to execution pre conditions */
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc86SubFuncExecPrecondTable[3]=
{
      3u /* SF: 0x04 */
  ,   3u /* SF: 0x40 */
  ,   3u /* SF: 0x45 */
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
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_DidMgr_DcmDspData_Pruefstempel_Read(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, DCM_VAR_NOINIT) Data)
{
  return Dcm_DidMgrNvMReadSignal(OpStatus, Data, Dcm_GetDcmNvMBlockId(NvMConf_NvMBlockDescriptor_TestStampDefaults));
}
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_DidMgr_DcmDspData_Pruefstempel_Write(P2CONST(uint8, AUTOMATIC, DCM_VAR_NOINIT) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, DCM_VAR_NOINIT) ErrorCode)
{
  return Dcm_DidMgrNvMWriteSignal(Data, OpStatus, ErrorCode, Dcm_GetDcmNvMBlockId(NvMConf_NvMBlockDescriptor_TestStampDefaults));
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_0206_Start()
***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_0206_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  uint8 dataInDcmDspStartRoutineInSignal_RcCppRsr;
  uint16 dataOutDcmDspStartRoutineOutSignal_StatDuration;
  Std_ReturnType stdReturn;

  dataInDcmDspStartRoutineInSignal_RcCppRsr = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 0u)));                                                 /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */

  DCM_IGNORE_UNREF_PARAM(DataLength);                                                                                                                /* PRQA S 3112 */ /* MD_Dcm_3112 */

  stdReturn = Rte_Call_RoutineServices_DcmDspRoutine_RcCpp_Start(dataInDcmDspStartRoutineInSignal_RcCppRsr
                                                                , OpStatus
                                                                , &dataOutDcmDspStartRoutineOutSignal_StatDuration
                                                                , Dcm_DiagGetResDataRel(pMsgContext, 2u)                                             /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                , ErrorCode
                                                                );                                                                                   /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */
  if (E_OK == stdReturn)
  {
    {
      Dcm_DiagSetResDataAsU8Rel(pMsgContext, 0u, Dcm_UtiGetHiByte(dataOutDcmDspStartRoutineOutSignal_StatDuration));                                 /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
      Dcm_DiagSetResDataAsU8Rel(pMsgContext, 1u, Dcm_UtiGetLoByte(dataOutDcmDspStartRoutineOutSignal_StatDuration));                                 /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
    }
  }
  return stdReturn;
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_020C_Start()
***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_020C_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  uint8 dataInDcmDspStartRoutineInSignal_Par4Req;
  uint8 dataInDcmDspStartRoutineInSignal_Id;
  uint8 dataInDcmDspStartRoutineInSignal_Par6Req;
  uint16 dataInDcmDspStartRoutineInSignal_Len;
  uint8 dataInDcmDspStartRoutineInSignal_Enc;

  dataInDcmDspStartRoutineInSignal_Par4Req = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 0u)));                                                  /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
  dataInDcmDspStartRoutineInSignal_Id = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 1u)));                                                       /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
  dataInDcmDspStartRoutineInSignal_Par6Req = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 2u)));                                                  /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
  dataInDcmDspStartRoutineInSignal_Len = ((uint16)(Dcm_UtiMake16Bit(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 3u), Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 4u)))); /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
  dataInDcmDspStartRoutineInSignal_Enc = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 5u)));                                                      /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */

  DCM_IGNORE_UNREF_PARAM(DataLength);                                                                                                                /* PRQA S 3112 */ /* MD_Dcm_3112 */

  return Rte_Call_RoutineServices_DcmDspRoutine_FsN30X_Start(dataInDcmDspStartRoutineInSignal_Par4Req
                                                            , dataInDcmDspStartRoutineInSignal_Id
                                                            , dataInDcmDspStartRoutineInSignal_Par6Req
                                                            , dataInDcmDspStartRoutineInSignal_Len
                                                            , dataInDcmDspStartRoutineInSignal_Enc
                                                            , OpStatus
                                                            , Dcm_DiagGetResDataRel(pMsgContext, 0u)                                                 /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                            , ErrorCode
                                                            );                                                                                       /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_020C_RequestResults()
***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_020C_RequestResults(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  return Rte_Call_RoutineServices_DcmDspRoutine_FsN30X_RequestResults(OpStatus
                                                                     , Dcm_DiagGetResDataRel(pMsgContext, 0u)                                        /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                     , Dcm_DiagGetResDataRel(pMsgContext, 1u)                                        /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                     , DataLength
                                                                     , ErrorCode
                                                                     );                                                                              /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */ /* SBSW_DCM_GEN_RID_WRAPPER */
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_020F_Start()
***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_020F_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  uint8 dataInDcmDspStartRoutineInSignal_Par4Req;
  uint8 dataInDcmDspStartRoutineInSignal_Adr;

  dataInDcmDspStartRoutineInSignal_Par4Req = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 0u)));                                                  /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
  dataInDcmDspStartRoutineInSignal_Adr = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 1u)));                                                      /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */

  DCM_IGNORE_UNREF_PARAM(DataLength);                                                                                                                /* PRQA S 3112 */ /* MD_Dcm_3112 */

  return Rte_Call_RoutineServices_DcmDspRoutine_FsN70X_Start(dataInDcmDspStartRoutineInSignal_Par4Req
                                                            , dataInDcmDspStartRoutineInSignal_Adr
                                                            , OpStatus
                                                            , Dcm_DiagGetResDataRel(pMsgContext, 0u)                                                 /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                            , ErrorCode
                                                            );                                                                                       /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_020F_RequestResults()
***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_020F_RequestResults(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  DCM_IGNORE_UNREF_PARAM(DataLength);                                                                                                                /* PRQA S 3112 */ /* MD_Dcm_3112 */

  return Rte_Call_RoutineServices_DcmDspRoutine_FsN70X_RequestResults(OpStatus
                                                                     , Dcm_DiagGetResDataRel(pMsgContext, 0u)                                        /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                     , Dcm_DiagGetResDataRel(pMsgContext, 1u)                                        /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                     , ErrorCode
                                                                     );                                                                              /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_0210_Start()
***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_0210_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  uint8 dataInDcmDspStartRoutineInSignal_Par4Req;
  uint8 dataInDcmDspStartRoutineInSignal_Id;
  uint8 dataInDcmDspStartRoutineInSignal_Par6Req;
  uint8 dataInDcmDspStartRoutineInSignal_Par7Req;
  uint8 dataInDcmDspStartRoutineInSignal_Par8Req;

  dataInDcmDspStartRoutineInSignal_Par4Req = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 0u)));                                                  /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
  dataInDcmDspStartRoutineInSignal_Id = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 1u)));                                                       /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
  dataInDcmDspStartRoutineInSignal_Par6Req = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 2u)));                                                  /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
  dataInDcmDspStartRoutineInSignal_Par7Req = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 3u)));                                                  /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
  dataInDcmDspStartRoutineInSignal_Par8Req = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 4u)));                                                  /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */

  DCM_IGNORE_UNREF_PARAM(DataLength);                                                                                                                /* PRQA S 3112 */ /* MD_Dcm_3112 */

  return Rte_Call_RoutineServices_DcmDspRoutine_FsMsmN300XTeleservice_Start(dataInDcmDspStartRoutineInSignal_Par4Req
                                                                           , dataInDcmDspStartRoutineInSignal_Id
                                                                           , dataInDcmDspStartRoutineInSignal_Par6Req
                                                                           , dataInDcmDspStartRoutineInSignal_Par7Req
                                                                           , dataInDcmDspStartRoutineInSignal_Par8Req
                                                                           , OpStatus
                                                                           , Dcm_DiagGetResDataRel(pMsgContext, 0u)                                  /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                           , ErrorCode
                                                                           );                                                                        /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_0210_RequestResults()
***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_0210_RequestResults(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  uint16 dataOutDcmDspRequestRoutineResultsOutSignal_Len;
  Std_ReturnType stdReturn;

  stdReturn = Rte_Call_RoutineServices_DcmDspRoutine_FsMsmN300XTeleservice_RequestResults(OpStatus
                                                                                         , Dcm_DiagGetResDataRel(pMsgContext, 0u)                    /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                                         , Dcm_DiagGetResDataRel(pMsgContext, 1u)                    /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                                         , Dcm_DiagGetResDataRel(pMsgContext, 2u)                    /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                                         , &dataOutDcmDspRequestRoutineResultsOutSignal_Len
                                                                                         , Dcm_DiagGetResDataRel(pMsgContext, 5u)                    /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                                         , DataLength
                                                                                         , ErrorCode
                                                                                         );                                                          /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */ /* SBSW_DCM_GEN_RID_WRAPPER */
  if (E_OK == stdReturn)
  {
    {
      Dcm_DiagSetResDataAsU8Rel(pMsgContext, 3u, Dcm_UtiGetHiByte(dataOutDcmDspRequestRoutineResultsOutSignal_Len));                                 /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
      Dcm_DiagSetResDataAsU8Rel(pMsgContext, 4u, Dcm_UtiGetLoByte(dataOutDcmDspRequestRoutineResultsOutSignal_Len));                                 /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
    }
  }
  return stdReturn;
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_0211_Start()
***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_0211_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  uint8 dataInDcmDspStartRoutineInSignal_Par3Req;
  uint8 dataInDcmDspStartRoutineInSignal_Par4Req;

  dataInDcmDspStartRoutineInSignal_Par3Req = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 0u)));                                                  /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
  dataInDcmDspStartRoutineInSignal_Par4Req = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 1u)));                                                  /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */

  DCM_IGNORE_UNREF_PARAM(DataLength);                                                                                                                /* PRQA S 3112 */ /* MD_Dcm_3112 */

  return Rte_Call_RoutineServices_DcmDspRoutine_FsMsmN220X_Start(dataInDcmDspStartRoutineInSignal_Par3Req
                                                                , dataInDcmDspStartRoutineInSignal_Par4Req
                                                                , OpStatus
                                                                , Dcm_DiagGetResDataRel(pMsgContext, 0u)                                             /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                , Dcm_DiagGetResDataRel(pMsgContext, 1u)                                             /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                , ErrorCode
                                                                );                                                                                   /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_0212_Start()
***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_0212_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  uint8 dataInDcmDspStartRoutineInSignal_Par4Req;
  uint8 dataInDcmDspStartRoutineInSignal_Par5;
  uint16 dataInDcmDspStartRoutineInSignal_Len;
  uint8 dataInDcmDspStartRoutineInSignal_Data;

  dataInDcmDspStartRoutineInSignal_Par4Req = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 0u)));                                                  /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
  dataInDcmDspStartRoutineInSignal_Par5 = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 1u)));                                                     /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
  dataInDcmDspStartRoutineInSignal_Len = ((uint16)(Dcm_UtiMake16Bit(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 2u), Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 3u)))); /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
  dataInDcmDspStartRoutineInSignal_Data = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 4u)));                                                     /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */

  DCM_IGNORE_UNREF_PARAM(DataLength);                                                                                                                /* PRQA S 3112 */ /* MD_Dcm_3112 */

  return Rte_Call_RoutineServices_DcmDspRoutine_FsN31034_Start(dataInDcmDspStartRoutineInSignal_Par4Req
                                                              , dataInDcmDspStartRoutineInSignal_Par5
                                                              , dataInDcmDspStartRoutineInSignal_Len
                                                              , dataInDcmDspStartRoutineInSignal_Data
                                                              , OpStatus
                                                              , Dcm_DiagGetResDataRel(pMsgContext, 0u)                                               /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                              , ErrorCode
                                                              );                                                                                     /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_0213_Start()
***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_0213_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  uint8 dataInDcmDspStartRoutineInSignal_Len;
  uint8 dataInDcmDspStartRoutineInSignal_Adr;

  dataInDcmDspStartRoutineInSignal_Len = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 0u)));                                                      /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
  dataInDcmDspStartRoutineInSignal_Adr = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 1u)));                                                      /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */

  DCM_IGNORE_UNREF_PARAM(DataLength);                                                                                                                /* PRQA S 3112 */ /* MD_Dcm_3112 */

  return Rte_Call_RoutineServices_DcmDspRoutine_FsN5005_Start(dataInDcmDspStartRoutineInSignal_Len
                                                             , dataInDcmDspStartRoutineInSignal_Adr
                                                             , OpStatus
                                                             , Dcm_DiagGetResDataRel(pMsgContext, 0u)                                                /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                             , Dcm_DiagGetResDataRel(pMsgContext, 1u)                                                /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                             , ErrorCode
                                                             );                                                                                      /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_0213_RequestResults()
***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_0213_RequestResults(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  DCM_IGNORE_UNREF_PARAM(DataLength);                                                                                                                /* PRQA S 3112 */ /* MD_Dcm_3112 */

  return Rte_Call_RoutineServices_DcmDspRoutine_FsN5005_RequestResults(OpStatus
                                                                      , Dcm_DiagGetResDataRel(pMsgContext, 0u)                                       /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                      , Dcm_DiagGetResDataRel(pMsgContext, 1u)                                       /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                      , Dcm_DiagGetResDataRel(pMsgContext, 2u)                                       /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                      , Dcm_DiagGetResDataRel(pMsgContext, 3u)                                       /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                      , ErrorCode
                                                                      );                                                                             /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_0214_Start()
***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_0214_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  uint8 dataInDcmDspStartRoutineInSignal_FunktionsId;

  dataInDcmDspStartRoutineInSignal_FunktionsId = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 0u)));                                              /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */

  DCM_IGNORE_UNREF_PARAM(DataLength);                                                                                                                /* PRQA S 3112 */ /* MD_Dcm_3112 */

  return Rte_Call_RoutineServices_DcmDspRoutine_FsMsmN101AbfrageFzgsec_Start(dataInDcmDspStartRoutineInSignal_FunktionsId
                                                                            , OpStatus
                                                                            , Dcm_DiagGetResDataRel(pMsgContext, 0u)                                 /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                            , Dcm_DiagGetResDataRel(pMsgContext, 1u)                                 /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                            , Dcm_DiagGetResDataRel(pMsgContext, 2u)                                 /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                            , ErrorCode
                                                                            );                                                                       /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_0215_Start()
***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_0215_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  uint8 dataInDcmDspStartRoutineInSignal_ParameterId;
  uint8 dataInDcmDspStartRoutineInSignal_FscsmId;

  dataInDcmDspStartRoutineInSignal_ParameterId = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 0u)));                                              /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
  dataInDcmDspStartRoutineInSignal_FscsmId = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 1u)));                                                  /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */

  DCM_IGNORE_UNREF_PARAM(DataLength);                                                                                                                /* PRQA S 3112 */ /* MD_Dcm_3112 */

  return Rte_Call_RoutineServices_DcmDspRoutine_FsMsmN111_Start(dataInDcmDspStartRoutineInSignal_ParameterId
                                                               , dataInDcmDspStartRoutineInSignal_FscsmId
                                                               , OpStatus
                                                               , Dcm_DiagGetResDataRel(pMsgContext, 0u)                                              /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                               , Dcm_DiagGetResDataRel(pMsgContext, 1u)                                              /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                               , Dcm_DiagGetResDataRel(pMsgContext, 2u)                                              /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                               , Dcm_DiagGetResDataRel(pMsgContext, 3u)                                              /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                               , ErrorCode
                                                               );                                                                                    /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_0216_Start()
***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_0216_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  return Rte_Call_RoutineServices_DcmDspRoutine_FsN7112_Start(Dcm_DiagGetReqDataRel(pMsgContext, 0u)                                                 /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                             , OpStatus
                                                             , Dcm_DiagGetResDataRel(pMsgContext, 0u)                                                /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                             , Dcm_DiagGetResDataRel(pMsgContext, 1u)                                                /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                             , *DataLength
                                                             , ErrorCode
                                                             );                                                                                      /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_0216_RequestResults()
***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_0216_RequestResults(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  return Rte_Call_RoutineServices_DcmDspRoutine_FsN7112_RequestResults(OpStatus
                                                                      , Dcm_DiagGetResDataRel(pMsgContext, 0u)                                       /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                      , Dcm_DiagGetResDataRel(pMsgContext, 1u)                                       /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                      , Dcm_DiagGetResDataRel(pMsgContext, 2u)                                       /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                      , DataLength
                                                                      , ErrorCode
                                                                      );                                                                             /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */ /* SBSW_DCM_GEN_RID_WRAPPER */
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_0230_Start()
***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_0230_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  uint8 dataInDcmDspStartRoutineInSignal_FunktionsId;

  dataInDcmDspStartRoutineInSignal_FunktionsId = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 0u)));                                              /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */

  DCM_IGNORE_UNREF_PARAM(DataLength);                                                                                                                /* PRQA S 3112 */ /* MD_Dcm_3112 */

  return Rte_Call_RoutineServices_DcmDspRoutine_FsMsmN102_Start(dataInDcmDspStartRoutineInSignal_FunktionsId
                                                               , OpStatus
                                                               , Dcm_DiagGetResDataRel(pMsgContext, 0u)                                              /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                               , Dcm_DiagGetResDataRel(pMsgContext, 1u)                                              /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                               , Dcm_DiagGetResDataRel(pMsgContext, 2u)                                              /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                               , ErrorCode
                                                               );                                                                                    /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_0234_Start()
***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_0234_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  uint8 dataInDcmDspStartRoutineInSignal_Len;
  uint8 dataInDcmDspStartRoutineInSignal_Adr;

  dataInDcmDspStartRoutineInSignal_Len = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 0u)));                                                      /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
  dataInDcmDspStartRoutineInSignal_Adr = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 1u)));                                                      /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */

  DCM_IGNORE_UNREF_PARAM(DataLength);                                                                                                                /* PRQA S 3112 */ /* MD_Dcm_3112 */

  return Rte_Call_RoutineServices_DcmDspRoutine_FsN251_Start(dataInDcmDspStartRoutineInSignal_Len
                                                            , dataInDcmDspStartRoutineInSignal_Adr
                                                            , OpStatus
                                                            , Dcm_DiagGetResDataRel(pMsgContext, 0u)                                                 /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                            , Dcm_DiagGetResDataRel(pMsgContext, 1u)                                                 /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                            , ErrorCode
                                                            );                                                                                       /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_0235_Start()
***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_0235_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  return Rte_Call_RoutineServices_DcmDspRoutine_FsN252_Start(Dcm_DiagGetReqDataRel(pMsgContext, 0u)                                                  /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                            , OpStatus
                                                            , Dcm_DiagGetResDataRel(pMsgContext, 0u)                                                 /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                            , Dcm_DiagGetResDataRel(pMsgContext, 1u)                                                 /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                            , *DataLength
                                                            , ErrorCode
                                                            );                                                                                       /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_0238_Start()
***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_0238_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  DCM_IGNORE_UNREF_PARAM(DataLength);                                                                                                                /* PRQA S 3112 */ /* MD_Dcm_3112 */

  return Rte_Call_RoutineServices_DcmDspRoutine_FsN5012_Start(OpStatus
                                                             , Dcm_DiagGetResDataRel(pMsgContext, 0u)                                                /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                             , Dcm_DiagGetResDataRel(pMsgContext, 1u)                                                /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                             , ErrorCode
                                                             );                                                                                      /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_0238_RequestResults()
***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_0238_RequestResults(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  return Rte_Call_RoutineServices_DcmDspRoutine_FsN5012_RequestResults(OpStatus
                                                                      , Dcm_DiagGetResDataRel(pMsgContext, 0u)                                       /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                      , Dcm_DiagGetResDataRel(pMsgContext, 1u)                                       /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                      , Dcm_DiagGetResDataRel(pMsgContext, 2u)                                       /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                      , DataLength
                                                                      , ErrorCode
                                                                      );                                                                             /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */ /* SBSW_DCM_GEN_RID_WRAPPER */
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_0239_Start()
***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_0239_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  return Rte_Call_RoutineServices_DcmDspRoutine_FsN5034_Start(Dcm_DiagGetReqDataRel(pMsgContext, 0u)                                                 /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                             , OpStatus
                                                             , Dcm_DiagGetResDataRel(pMsgContext, 0u)                                                /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                             , Dcm_DiagGetResDataRel(pMsgContext, 1u)                                                /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                             , *DataLength
                                                             , ErrorCode
                                                             );                                                                                      /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_0239_RequestResults()
***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_0239_RequestResults(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  DCM_IGNORE_UNREF_PARAM(DataLength);                                                                                                                /* PRQA S 3112 */ /* MD_Dcm_3112 */

  return Rte_Call_RoutineServices_DcmDspRoutine_FsN5034_RequestResults(OpStatus
                                                                      , Dcm_DiagGetResDataRel(pMsgContext, 0u)                                       /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                      , Dcm_DiagGetResDataRel(pMsgContext, 1u)                                       /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                      , ErrorCode
                                                                      );                                                                             /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_0304_Start()
***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_0304_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  uint8 dataInDcmDspStartRoutineInSignal_DTCType;

  dataInDcmDspStartRoutineInSignal_DTCType = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 0u)));                                                  /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */

  DCM_IGNORE_UNREF_PARAM(DataLength);                                                                                                                /* PRQA S 3112 */ /* MD_Dcm_3112 */

  return Rte_Call_RoutineServices_DcmDspRoutine_DmClientTriggerDtcEntry_Start(dataInDcmDspStartRoutineInSignal_DTCType
                                                                             , OpStatus
                                                                             , Dcm_DiagGetResDataRel(pMsgContext, 0u)                                /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                             , Dcm_DiagGetResDataRel(pMsgContext, 1u)                                /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                             , Dcm_DiagGetResDataRel(pMsgContext, 2u)                                /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                             , Dcm_DiagGetResDataRel(pMsgContext, 3u)                                /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                             , ErrorCode
                                                                             );                                                                      /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_0305_Start()
***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_0305_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  uint8 dataInDcmDspStartRoutineInSignal_ArgSignal;

  dataInDcmDspStartRoutineInSignal_ArgSignal = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 0u)));                                                /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */

  DCM_IGNORE_UNREF_PARAM(DataLength);                                                                                                                /* PRQA S 3112 */ /* MD_Dcm_3112 */

  return Rte_Call_RoutineServices_DcmDspRoutine_SteuernDmFssMaster_Start(dataInDcmDspStartRoutineInSignal_ArgSignal
                                                                        , OpStatus
                                                                        , Dcm_DiagGetResDataRel(pMsgContext, 0u)                                     /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                        , ErrorCode
                                                                        );                                                                           /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_0F0C_Start()
***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_0F0C_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  uint8 dataInDcmDspStartRoutineInSignal_OperatingMode;

  dataInDcmDspStartRoutineInSignal_OperatingMode = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 0u)));                                            /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */

  DCM_IGNORE_UNREF_PARAM(DataLength);                                                                                                                /* PRQA S 3112 */ /* MD_Dcm_3112 */

  return Rte_Call_RoutineServices_DcmDspRoutine_Energiesparmode_Start(dataInDcmDspStartRoutineInSignal_OperatingMode
                                                                     , OpStatus
                                                                     , ErrorCode
                                                                     );                                                                              /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_0F1F_Start()
***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_0F1F_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  uint8 dataInDcmDspStartRoutineInSignal_RCOption;

  dataInDcmDspStartRoutineInSignal_RCOption = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 0u)));                                                 /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */

  return Rte_Call_RoutineServices_DcmDspRoutine_Swt_Start(dataInDcmDspStartRoutineInSignal_RCOption
                                                         , Dcm_DiagGetReqDataRel(pMsgContext, 1u)                                                    /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                         , OpStatus
                                                         , Dcm_DiagGetResDataRel(pMsgContext, 0u)                                                    /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                         , Dcm_DiagGetResDataRel(pMsgContext, 1u)                                                    /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                         , Dcm_DiagGetResDataRel(pMsgContext, 2u)                                                    /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                         , DataLength
                                                         , ErrorCode
                                                         );                                                                                          /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */ /* SBSW_DCM_GEN_RID_WRAPPER */
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_1002_Start()
***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_1002_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  uint8 dataInDcmDspStartRoutineInSignal;

  dataInDcmDspStartRoutineInSignal = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 0u)));                                                          /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */

  DCM_IGNORE_UNREF_PARAM(DataLength);                                                                                                                /* PRQA S 3112 */ /* MD_Dcm_3112 */

  return Rte_Call_RoutineServices_DcmDspRoutine_IndividualDatenRettung_Start(dataInDcmDspStartRoutineInSignal
                                                                            , OpStatus
                                                                            , Dcm_DiagGetResDataRel(pMsgContext, 0u)                                 /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                            , ErrorCode
                                                                            );                                                                       /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_1003_Start()
***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_1003_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  uint8 dataInDcmDspStartRoutineInSignal_ExtendedOperatingMode;

  dataInDcmDspStartRoutineInSignal_ExtendedOperatingMode = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 0u)));                                    /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */

  DCM_IGNORE_UNREF_PARAM(DataLength);                                                                                                                /* PRQA S 3112 */ /* MD_Dcm_3112 */

  return Rte_Call_RoutineServices_DcmDspRoutine_ControlExtendedEnergySavingState_Start(dataInDcmDspStartRoutineInSignal_ExtendedOperatingMode
                                                                                      , OpStatus
                                                                                      , ErrorCode
                                                                                      );                                                             /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_1010_Start()
***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_1010_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  uint8 dataInDcmDspStartRoutineInSignal_ZustandDefaultBus;

  dataInDcmDspStartRoutineInSignal_ZustandDefaultBus = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 0u)));                                        /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */

  DCM_IGNORE_UNREF_PARAM(DataLength);                                                                                                                /* PRQA S 3112 */ /* MD_Dcm_3112 */

  return Rte_Call_RoutineServices_DcmDspRoutine_SetDefaultBus_Start(dataInDcmDspStartRoutineInSignal_ZustandDefaultBus
                                                                   , OpStatus
                                                                   , ErrorCode
                                                                   );                                                                                /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_1011_Start()
***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_1011_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  DCM_IGNORE_UNREF_PARAM(DataLength);                                                                                                                /* PRQA S 3112 */ /* MD_Dcm_3112 */

  return Rte_Call_RoutineServices_DcmDspRoutine_GetActualConfig_Start(OpStatus
                                                                     , Dcm_DiagGetResDataRel(pMsgContext, 0u)                                        /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                     , Dcm_DiagGetResDataRel(pMsgContext, 1u)                                        /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                     , ErrorCode
                                                                     );                                                                              /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_1021_Start()
***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_1021_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  return Rte_Call_RoutineServices_DcmDspRoutine_RequestPreferredProtocol_Start(Dcm_DiagGetReqDataRel(pMsgContext, 0u)                                /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                              , OpStatus
                                                                              , Dcm_DiagGetResDataRel(pMsgContext, 0u)                               /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                              , Dcm_DiagGetResDataRel(pMsgContext, 1u)                               /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                              , *DataLength
                                                                              , ErrorCode
                                                                              );                                                                     /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */ /* SBSW_DCM_GEN_RID_WRAPPER */
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_1022_Start()
***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_1022_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  uint32 dataInDcmDspStartRoutineInSignal_TimeOutTime;
  uint8 dataInDcmDspStartRoutineInSignal_ServerUrl;
  uint16 dataOutDcmDspStartRoutineOutSignal_HttpResponseCode;
  Std_ReturnType stdReturn;

  dataInDcmDspStartRoutineInSignal_TimeOutTime = ((uint32)(Dcm_UtiMake32Bit(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 0u), Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 1u), Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 2u), Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 3u)))); /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
  dataInDcmDspStartRoutineInSignal_ServerUrl = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 4u)));                                                /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */

  DCM_IGNORE_UNREF_PARAM(DataLength);                                                                                                                /* PRQA S 3112 */ /* MD_Dcm_3112 */

  stdReturn = Rte_Call_RoutineServices_DcmDspRoutine_CheckHttpConnection_Start(dataInDcmDspStartRoutineInSignal_TimeOutTime
                                                                              , dataInDcmDspStartRoutineInSignal_ServerUrl
                                                                              , OpStatus
                                                                              , Dcm_DiagGetResDataRel(pMsgContext, 0u)                               /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                              , &dataOutDcmDspStartRoutineOutSignal_HttpResponseCode
                                                                              , ErrorCode
                                                                              );                                                                     /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */
  if (E_OK == stdReturn)
  {
    {
      Dcm_DiagSetResDataAsU8Rel(pMsgContext, 1u, Dcm_UtiGetHiByte(dataOutDcmDspStartRoutineOutSignal_HttpResponseCode));                             /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
      Dcm_DiagSetResDataAsU8Rel(pMsgContext, 2u, Dcm_UtiGetLoByte(dataOutDcmDspStartRoutineOutSignal_HttpResponseCode));                             /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
    }
  }
  return stdReturn;
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_1023_Start()
***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_1023_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  uint8 dataInDcmDspStartRoutineInSignal_Activation;

  dataInDcmDspStartRoutineInSignal_Activation = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 0u)));                                               /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */

  DCM_IGNORE_UNREF_PARAM(DataLength);                                                                                                                /* PRQA S 3112 */ /* MD_Dcm_3112 */

  return Rte_Call_RoutineServices_DcmDspRoutine_ExternalHsfz_Start(dataInDcmDspStartRoutineInSignal_Activation
                                                                  , OpStatus
                                                                  , ErrorCode
                                                                  );                                                                                 /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_1041_Start()
***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_1041_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  uint8 dataInDcmDspStartRoutineInSignal_RegReadRange;
  uint8 dataInDcmDspStartRoutineInSignal_Data;

  dataInDcmDspStartRoutineInSignal_RegReadRange = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 0u)));                                             /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
  dataInDcmDspStartRoutineInSignal_Data = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 1u)));                                                     /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */

  DCM_IGNORE_UNREF_PARAM(DataLength);                                                                                                                /* PRQA S 3112 */ /* MD_Dcm_3112 */

  return Rte_Call_RoutineServices_DcmDspRoutine_EthReadPhyRegister_Start(dataInDcmDspStartRoutineInSignal_RegReadRange
                                                                        , dataInDcmDspStartRoutineInSignal_Data
                                                                        , OpStatus
                                                                        , Dcm_DiagGetResDataRel(pMsgContext, 0u)                                     /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                        , Dcm_DiagGetResDataRel(pMsgContext, 1u)                                     /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                        , ErrorCode
                                                                        );                                                                           /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */ /* SBSW_DCM_GEN_RID_WRAPPER */
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_1042_Start()
***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_1042_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  uint8 dataInDcmDspStartRoutineInSignal_PortIndex;

  dataInDcmDspStartRoutineInSignal_PortIndex = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 0u)));                                                /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */

  DCM_IGNORE_UNREF_PARAM(DataLength);                                                                                                                /* PRQA S 3112 */ /* MD_Dcm_3112 */

  return Rte_Call_RoutineServices_DcmDspRoutine_EthArlTable_Start(dataInDcmDspStartRoutineInSignal_PortIndex
                                                                 , OpStatus
                                                                 , Dcm_DiagGetResDataRel(pMsgContext, 0u)                                            /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                 , Dcm_DiagGetResDataRel(pMsgContext, 1u)                                            /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                 , ErrorCode
                                                                 );                                                                                  /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_1043_Start()
***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_1043_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  uint8 dataInDcmDspStartRoutineInSignal_IpVersion;
  uint8 dataInDcmDspStartRoutineInSignal_ArpTableForIpAddress;

  dataInDcmDspStartRoutineInSignal_IpVersion = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 0u)));                                                /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
  dataInDcmDspStartRoutineInSignal_ArpTableForIpAddress = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 1u)));                                     /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */

  DCM_IGNORE_UNREF_PARAM(DataLength);                                                                                                                /* PRQA S 3112 */ /* MD_Dcm_3112 */

  return Rte_Call_RoutineServices_DcmDspRoutine_EthArpTable_Start(dataInDcmDspStartRoutineInSignal_IpVersion
                                                                 , dataInDcmDspStartRoutineInSignal_ArpTableForIpAddress
                                                                 , OpStatus
                                                                 , Dcm_DiagGetResDataRel(pMsgContext, 0u)                                            /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                 , Dcm_DiagGetResDataRel(pMsgContext, 1u)                                            /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                 , ErrorCode
                                                                 );                                                                                  /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_1044_Start()
***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_1044_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  uint8 dataInDcmDspStartRoutineInSignal_PortIndex;
  uint8 dataInDcmDspStartRoutineInSignal_StopPhyForT;

  dataInDcmDspStartRoutineInSignal_PortIndex = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 0u)));                                                /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
  dataInDcmDspStartRoutineInSignal_StopPhyForT = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 1u)));                                              /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */

  DCM_IGNORE_UNREF_PARAM(DataLength);                                                                                                                /* PRQA S 3112 */ /* MD_Dcm_3112 */

  return Rte_Call_RoutineServices_DcmDspRoutine_EthPhySwitchEngineReset_Start(dataInDcmDspStartRoutineInSignal_PortIndex
                                                                             , dataInDcmDspStartRoutineInSignal_StopPhyForT
                                                                             , OpStatus
                                                                             , Dcm_DiagGetResDataRel(pMsgContext, 0u)                                /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                             , ErrorCode
                                                                             );                                                                      /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_1045_Start()
***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_1045_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  uint8 dataInDcmDspStartRoutineInSignal_InternalExternalAddress;
  uint8 dataInDcmDspStartRoutineInSignal_TriggerGratuitousArp;

  dataInDcmDspStartRoutineInSignal_InternalExternalAddress = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 0u)));                                  /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
  dataInDcmDspStartRoutineInSignal_TriggerGratuitousArp = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 1u)));                                     /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */

  DCM_IGNORE_UNREF_PARAM(DataLength);                                                                                                                /* PRQA S 3112 */ /* MD_Dcm_3112 */

  return Rte_Call_RoutineServices_DcmDspRoutine_EthIpConfiguration_Start(dataInDcmDspStartRoutineInSignal_InternalExternalAddress
                                                                        , dataInDcmDspStartRoutineInSignal_TriggerGratuitousArp
                                                                        , OpStatus
                                                                        , Dcm_DiagGetResDataRel(pMsgContext, 0u)                                     /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                        , Dcm_DiagGetResDataRel(pMsgContext, 1u)                                     /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                        , ErrorCode
                                                                        );                                                                           /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_1047_Start()
***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_1047_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  uint8 dataInDcmDspStartRoutineInSignal_PortIndex;

  dataInDcmDspStartRoutineInSignal_PortIndex = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 0u)));                                                /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */

  return Rte_Call_RoutineServices_DcmDspRoutine_EthPhyIdentifier_Start(dataInDcmDspStartRoutineInSignal_PortIndex
                                                                      , OpStatus
                                                                      , Dcm_DiagGetResDataRel(pMsgContext, 0u)                                       /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                      , DataLength
                                                                      , ErrorCode
                                                                      );                                                                             /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */ /* SBSW_DCM_GEN_RID_WRAPPER */
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_1049_Start()
***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_1049_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  uint8 dataInDcmDspStartRoutineInSignal_PortIndex;
  uint32 dataOutDcmDspStartRoutineOutSignal_StatNumberOfTransmittedPacketsWert;
  uint32 dataOutDcmDspStartRoutineOutSignal_StatBytesSentWert;
  uint32 dataOutDcmDspStartRoutineOutSignal_StatNumberOfDroppedTxPacketsWert;
  uint32 dataOutDcmDspStartRoutineOutSignal_StatNumberOfReceivedPacketsWert;
  uint32 dataOutDcmDspStartRoutineOutSignal_StatStatBytesReceivedWert;
  uint32 dataOutDcmDspStartRoutineOutSignal_StatNumberOfDroppedRxPacketsWert;
  Std_ReturnType stdReturn;

  dataInDcmDspStartRoutineInSignal_PortIndex = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 0u)));                                                /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */

  DCM_IGNORE_UNREF_PARAM(DataLength);                                                                                                                /* PRQA S 3112 */ /* MD_Dcm_3112 */

  stdReturn = Rte_Call_RoutineServices_DcmDspRoutine_EthGetPortTxRxStats_Start(dataInDcmDspStartRoutineInSignal_PortIndex
                                                                              , OpStatus
                                                                              , &dataOutDcmDspStartRoutineOutSignal_StatNumberOfTransmittedPacketsWert
                                                                              , &dataOutDcmDspStartRoutineOutSignal_StatBytesSentWert
                                                                              , &dataOutDcmDspStartRoutineOutSignal_StatNumberOfDroppedTxPacketsWert
                                                                              , &dataOutDcmDspStartRoutineOutSignal_StatNumberOfReceivedPacketsWert
                                                                              , &dataOutDcmDspStartRoutineOutSignal_StatStatBytesReceivedWert
                                                                              , &dataOutDcmDspStartRoutineOutSignal_StatNumberOfDroppedRxPacketsWert
                                                                              , ErrorCode
                                                                              );                                                                     /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */
  if (E_OK == stdReturn)
  {
    {
      Dcm_DiagSetResDataAsU8Rel(pMsgContext, 0u, Dcm_UtiGetHiHiByte(dataOutDcmDspStartRoutineOutSignal_StatNumberOfTransmittedPacketsWert));         /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
      Dcm_DiagSetResDataAsU8Rel(pMsgContext, 1u, Dcm_UtiGetHiLoByte(dataOutDcmDspStartRoutineOutSignal_StatNumberOfTransmittedPacketsWert));         /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
      Dcm_DiagSetResDataAsU8Rel(pMsgContext, 2u, Dcm_UtiGetLoHiByte(dataOutDcmDspStartRoutineOutSignal_StatNumberOfTransmittedPacketsWert));         /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
      Dcm_DiagSetResDataAsU8Rel(pMsgContext, 3u, Dcm_UtiGetLoLoByte(dataOutDcmDspStartRoutineOutSignal_StatNumberOfTransmittedPacketsWert));         /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
    }
    {
      Dcm_DiagSetResDataAsU8Rel(pMsgContext, 4u, Dcm_UtiGetHiHiByte(dataOutDcmDspStartRoutineOutSignal_StatBytesSentWert));                          /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
      Dcm_DiagSetResDataAsU8Rel(pMsgContext, 5u, Dcm_UtiGetHiLoByte(dataOutDcmDspStartRoutineOutSignal_StatBytesSentWert));                          /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
      Dcm_DiagSetResDataAsU8Rel(pMsgContext, 6u, Dcm_UtiGetLoHiByte(dataOutDcmDspStartRoutineOutSignal_StatBytesSentWert));                          /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
      Dcm_DiagSetResDataAsU8Rel(pMsgContext, 7u, Dcm_UtiGetLoLoByte(dataOutDcmDspStartRoutineOutSignal_StatBytesSentWert));                          /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
    }
    {
      Dcm_DiagSetResDataAsU8Rel(pMsgContext, 8u, Dcm_UtiGetHiHiByte(dataOutDcmDspStartRoutineOutSignal_StatNumberOfDroppedTxPacketsWert));           /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
      Dcm_DiagSetResDataAsU8Rel(pMsgContext, 9u, Dcm_UtiGetHiLoByte(dataOutDcmDspStartRoutineOutSignal_StatNumberOfDroppedTxPacketsWert));           /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
      Dcm_DiagSetResDataAsU8Rel(pMsgContext, 10u, Dcm_UtiGetLoHiByte(dataOutDcmDspStartRoutineOutSignal_StatNumberOfDroppedTxPacketsWert));          /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
      Dcm_DiagSetResDataAsU8Rel(pMsgContext, 11u, Dcm_UtiGetLoLoByte(dataOutDcmDspStartRoutineOutSignal_StatNumberOfDroppedTxPacketsWert));          /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
    }
    {
      Dcm_DiagSetResDataAsU8Rel(pMsgContext, 12u, Dcm_UtiGetHiHiByte(dataOutDcmDspStartRoutineOutSignal_StatNumberOfReceivedPacketsWert));           /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
      Dcm_DiagSetResDataAsU8Rel(pMsgContext, 13u, Dcm_UtiGetHiLoByte(dataOutDcmDspStartRoutineOutSignal_StatNumberOfReceivedPacketsWert));           /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
      Dcm_DiagSetResDataAsU8Rel(pMsgContext, 14u, Dcm_UtiGetLoHiByte(dataOutDcmDspStartRoutineOutSignal_StatNumberOfReceivedPacketsWert));           /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
      Dcm_DiagSetResDataAsU8Rel(pMsgContext, 15u, Dcm_UtiGetLoLoByte(dataOutDcmDspStartRoutineOutSignal_StatNumberOfReceivedPacketsWert));           /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
    }
    {
      Dcm_DiagSetResDataAsU8Rel(pMsgContext, 16u, Dcm_UtiGetHiHiByte(dataOutDcmDspStartRoutineOutSignal_StatStatBytesReceivedWert));                 /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
      Dcm_DiagSetResDataAsU8Rel(pMsgContext, 17u, Dcm_UtiGetHiLoByte(dataOutDcmDspStartRoutineOutSignal_StatStatBytesReceivedWert));                 /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
      Dcm_DiagSetResDataAsU8Rel(pMsgContext, 18u, Dcm_UtiGetLoHiByte(dataOutDcmDspStartRoutineOutSignal_StatStatBytesReceivedWert));                 /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
      Dcm_DiagSetResDataAsU8Rel(pMsgContext, 19u, Dcm_UtiGetLoLoByte(dataOutDcmDspStartRoutineOutSignal_StatStatBytesReceivedWert));                 /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
    }
    {
      Dcm_DiagSetResDataAsU8Rel(pMsgContext, 20u, Dcm_UtiGetHiHiByte(dataOutDcmDspStartRoutineOutSignal_StatNumberOfDroppedRxPacketsWert));          /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
      Dcm_DiagSetResDataAsU8Rel(pMsgContext, 21u, Dcm_UtiGetHiLoByte(dataOutDcmDspStartRoutineOutSignal_StatNumberOfDroppedRxPacketsWert));          /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
      Dcm_DiagSetResDataAsU8Rel(pMsgContext, 22u, Dcm_UtiGetLoHiByte(dataOutDcmDspStartRoutineOutSignal_StatNumberOfDroppedRxPacketsWert));          /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
      Dcm_DiagSetResDataAsU8Rel(pMsgContext, 23u, Dcm_UtiGetLoLoByte(dataOutDcmDspStartRoutineOutSignal_StatNumberOfDroppedRxPacketsWert));          /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
    }
  }
  return stdReturn;
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_104C_Start()
***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_104C_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  uint8 dataInDcmDspStartRoutineInSignal_PortIndex;
  uint8 dataInDcmDspStartRoutineInSignal_TestDuration;
  uint8 dataInDcmDspStartRoutineInSignal_TestModeId;

  dataInDcmDspStartRoutineInSignal_PortIndex = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 0u)));                                                /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
  dataInDcmDspStartRoutineInSignal_TestDuration = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 1u)));                                             /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
  dataInDcmDspStartRoutineInSignal_TestModeId = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 2u)));                                               /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */

  DCM_IGNORE_UNREF_PARAM(DataLength);                                                                                                                /* PRQA S 3112 */ /* MD_Dcm_3112 */

  return Rte_Call_RoutineServices_DcmDspRoutine_EthEnableTestMode_Start(dataInDcmDspStartRoutineInSignal_PortIndex
                                                                       , dataInDcmDspStartRoutineInSignal_TestDuration
                                                                       , dataInDcmDspStartRoutineInSignal_TestModeId
                                                                       , OpStatus
                                                                       , Dcm_DiagGetResDataRel(pMsgContext, 0u)                                      /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                       , ErrorCode
                                                                       );                                                                            /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_104D_Start()
***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_104D_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  uint8 dataInDcmDspStartRoutineInSignal_RegWriteProtect;
  uint8 dataInDcmDspStartRoutineInSignal_Data;

  dataInDcmDspStartRoutineInSignal_RegWriteProtect = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 0u)));                                          /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
  dataInDcmDspStartRoutineInSignal_Data = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 1u)));                                                     /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */

  DCM_IGNORE_UNREF_PARAM(DataLength);                                                                                                                /* PRQA S 3112 */ /* MD_Dcm_3112 */

  return Rte_Call_RoutineServices_DcmDspRoutine_EthWritePhyRegister_Start(dataInDcmDspStartRoutineInSignal_RegWriteProtect
                                                                         , dataInDcmDspStartRoutineInSignal_Data
                                                                         , OpStatus
                                                                         , Dcm_DiagGetResDataRel(pMsgContext, 0u)                                    /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                         , ErrorCode
                                                                         );                                                                          /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_104E_Start()
***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_104E_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  DCM_IGNORE_UNREF_PARAM(DataLength);                                                                                                                /* PRQA S 3112 */ /* MD_Dcm_3112 */

  return Rte_Call_RoutineServices_DcmDspRoutine_EthExtendedArlTable_Start(OpStatus
                                                                         , Dcm_DiagGetResDataRel(pMsgContext, 0u)                                    /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                         , Dcm_DiagGetResDataRel(pMsgContext, 1u)                                    /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                         , ErrorCode
                                                                         );                                                                          /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_104F_Start()
***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_104F_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  uint8 dataInDcmDspStartRoutineInSignal_NwInterfaceIndex;

  dataInDcmDspStartRoutineInSignal_NwInterfaceIndex = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 0u)));                                         /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */

  DCM_IGNORE_UNREF_PARAM(DataLength);                                                                                                                /* PRQA S 3112 */ /* MD_Dcm_3112 */

  return Rte_Call_RoutineServices_DcmDspRoutine_EthGetDhcpStatus_Start(dataInDcmDspStartRoutineInSignal_NwInterfaceIndex
                                                                      , OpStatus
                                                                      , Dcm_DiagGetResDataRel(pMsgContext, 0u)                                       /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                      , ErrorCode
                                                                      );                                                                             /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_1050_Start()
***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_1050_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  DCM_IGNORE_UNREF_PARAM(DataLength);                                                                                                                /* PRQA S 3112 */ /* MD_Dcm_3112 */

  return Rte_Call_RoutineServices_DcmDspRoutine_EthGetEthernetSwitches_Start(OpStatus
                                                                            , Dcm_DiagGetResDataRel(pMsgContext, 0u)                                 /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                            , Dcm_DiagGetResDataRel(pMsgContext, 1u)                                 /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                            , ErrorCode
                                                                            );                                                                       /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_1051_Start()
***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_1051_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  uint8 dataInDcmDspStartRoutineInSignal_SwitchIndex;

  dataInDcmDspStartRoutineInSignal_SwitchIndex = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 0u)));                                              /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */

  DCM_IGNORE_UNREF_PARAM(DataLength);                                                                                                                /* PRQA S 3112 */ /* MD_Dcm_3112 */

  return Rte_Call_RoutineServices_DcmDspRoutine_EthGetSwitchVlanConfiguration_Start(dataInDcmDspStartRoutineInSignal_SwitchIndex
                                                                                   , OpStatus
                                                                                   , Dcm_DiagGetResDataRel(pMsgContext, 0u)                          /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                                   , Dcm_DiagGetResDataRel(pMsgContext, 1u)                          /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                                   , ErrorCode
                                                                                   );                                                                /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_4000_Start()
***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_4000_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  uint8 dataInDcmDspStartRoutineInSignal_Function;

  dataInDcmDspStartRoutineInSignal_Function = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 0u)));                                                 /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */

  DCM_IGNORE_UNREF_PARAM(DataLength);                                                                                                                /* PRQA S 3112 */ /* MD_Dcm_3112 */

  return Rte_Call_RoutineServices_DcmDspRoutine_AblageSystemkontext_Start(dataInDcmDspStartRoutineInSignal_Function
                                                                         , OpStatus
                                                                         , Dcm_DiagGetResDataRel(pMsgContext, 0u)                                    /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                         , Dcm_DiagGetResDataRel(pMsgContext, 1u)                                    /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                                         , ErrorCode
                                                                         );                                                                          /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_7000_Start()
***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_7000_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  uint8 dataInDcmDspStartRoutineInSignal_Dpt;
  uint8 dataInDcmDspStartRoutineInSignal_Rsvd;
  uint8 dataInDcmDspStartRoutineInSignal_MoiAfid;
  uint8 dataInDcmDspStartRoutineInSignal_MemObjIdent;
  uint8 dataInDcmDspStartRoutineInSignal_AppSpecificParam;

  dataInDcmDspStartRoutineInSignal_Dpt = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 0u)));                                                      /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
  dataInDcmDspStartRoutineInSignal_Rsvd = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 1u)));                                                     /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
  dataInDcmDspStartRoutineInSignal_MoiAfid = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 2u)));                                                  /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
  dataInDcmDspStartRoutineInSignal_MemObjIdent = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 3u)));                                              /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
  dataInDcmDspStartRoutineInSignal_AppSpecificParam = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 4u)));                                         /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */

  DCM_IGNORE_UNREF_PARAM(DataLength);                                                                                                                /* PRQA S 3112 */ /* MD_Dcm_3112 */

  return Rte_Call_RoutineServices_DcmDspRoutine_RcPad_Start(dataInDcmDspStartRoutineInSignal_Dpt
                                                           , dataInDcmDspStartRoutineInSignal_Rsvd
                                                           , dataInDcmDspStartRoutineInSignal_MoiAfid
                                                           , dataInDcmDspStartRoutineInSignal_MemObjIdent
                                                           , dataInDcmDspStartRoutineInSignal_AppSpecificParam
                                                           , OpStatus
                                                           , Dcm_DiagGetResDataRel(pMsgContext, 0u)                                                  /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                                                           , ErrorCode
                                                           );                                                                                        /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */
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

