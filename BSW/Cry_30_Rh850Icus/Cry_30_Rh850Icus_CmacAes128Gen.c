/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2017 by Vector Informatik GmbH.                                                  All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/*!        \file  Cry_30_Rh850Icus_CmacAes128Gen.c
 *        \brief  Implements the CRY CmacAes128Gen API for the ASR CSM.
 *
 *      \details  -
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Refer to the module's header file.
 *********************************************************************************************************************/

#define CRY_30_RH850ICUS_CMACAES128GEN_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/

#include "Cry_30_Rh850Icus.h"
#include "Csm_Cbk.h"
#include "Cry_30_Rh850Icus_CommonUtil.h"
#include "Cry_30_Rh850Icus_Hw.h"

#if ( CRY_30_RH850ICUS_CMACAES128GENCONFIG == STD_ON )
/**********************************************************************************************************************
 *  LOCAL CONSTANT MACROS
 **********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA TYPES AND STRUCTURES
 **********************************************************************************************************************/

# if !defined (CRY_30_RH850ICUS_LOCAL) /* COV_CRY_LOCAL */
#  define CRY_30_RH850ICUS_LOCAL static
# endif

# if ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_OFF )
/*! Struct for the service buffer which is used to temporarily store parameters until the main function processes the service */
typedef struct
{
  P2CONST( Cry_30_Rh850Icus_CmacAes128GenConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) contextPtr; /*<! Holds a pointer to the configuration of this service. */
  P2CONST( Csm_SymKeyType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) keyPtr; /*<! Holds a pointer to the key which has to be used for the CMAC generation. */
  P2CONST( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) dataPtr;         /*<! Holds a pointer to the data for which a CMAC shall be computed. */
  uint32 dataLength;                                               /*<! Contains the number of bytes for which the CMAC shall be computed. */
  P2VAR( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) resultPtr;         /*<! Holds a pointer to the memory location which will hold the result of the CMAC generation. */
  P2VAR( uint32, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) resultLengthPtr;  /*<! Holds a pointer to the memory location in which the length information is stored */
  boolean truncationIsAllowed;                                     /*<! This parameter states whether a truncation of the result is allowed or not. */
} Cry_30_Rh850Icus_CmacAes128Gen_BufferType;
# endif /* ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_OFF ) */

/**********************************************************************************************************************
 *  LOCAL DATA PROTOTYPES
 **********************************************************************************************************************/

# if ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_OFF )
#  define CRY_30_RH850ICUS_START_SEC_VAR_NOINIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

 /*! Buffer containing the data used during the service execution */
CRY_30_RH850ICUS_LOCAL VAR(Cry_30_Rh850Icus_CmacAes128Gen_BufferType, CRY_30_RH850ICUS_VAR_NOINIT) Cry_30_Rh850Icus_CmacAes128Gen_Buffer; /* PRQA S 0779 */ /* MD_MSR_5.1_779 */

#  define CRY_30_RH850ICUS_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define CRY_30_RH850ICUS_START_SEC_VAR_NOINIT_8BIT
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! State of the service */
CRY_30_RH850ICUS_LOCAL VAR(uint8, CRY_30_RH850ICUS_VAR_NOINIT) Cry_30_Rh850Icus_CmacAes128Gen_Status; /* PRQA S 0779 */ /* MD_MSR_5.1_779 */

#  define CRY_30_RH850ICUS_STOP_SEC_VAR_NOINIT_8BIT
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
# endif /* ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_OFF ) */

/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 **********************************************************************************************************************/

# define CRY_30_RH850ICUS_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_CmacAes128GenStartInternal()
 **********************************************************************************************************************/
/*! \brief         Function starts the CMAC generation.
 *  \details       The function starts the service. The keyId is stored and if the keyPtr contains a plain key, the
 *                 key is loaded to the RAM key slot.
 *  \param[in]     contextPtr   Holds a pointer to the configuration of this service.
 *  \param[in]     keyPtr       Holds a pointer to the key which has to be used for the MAC generation.
                                The keyPtr can either contain a plaintext key (keyPtr.length = 16) or a
                                keyId (keyPtr.length = 1).
 *  \return        CSM_E_OK     Request successful.
 *  \return        CSM_E_NOT_OK Request failed.
 *  \return        CSM_E_BUSY   Request failed, service is still busy.
 *  \pre           Service is idle.
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CRY_30_RH850ICUS_CMACAES128GENCONFIG
 *  \note          It is important to call the Finish-Function of this service after a successful call of this function
 *                 (CSM_E_OK). A call of the Update-Function between them is allowed.
 *                 Attention: If the Finish-function is never called, the SHE is blocked for all other services.
 **********************************************************************************************************************/
CRY_30_RH850ICUS_LOCAL FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_CmacAes128GenStartInternal(
  P2CONST( Cry_30_Rh850Icus_CmacAes128GenConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) contextPtr,
  P2CONST( Csm_SymKeyType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) keyPtr );

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_CmacAes128GenUpdateInternal()
 **********************************************************************************************************************/
/*! \brief         Function updates the CMAC generation.
 *  \details       The function updates the service. The command to generate the CMAC is send to the hardware.
 *  \param[in]     contextPtr   Holds a pointer to the configuration of this service.
 *  \param[in]     dataPtr      Holds a pointer to the data for which a MAC shall be computed.
 *  \param[in]     dataLength   Contains the number of bytes for which the MAC shall be computed.
 *  \return        CSM_E_OK     Request successful
 *  \return        CSM_E_NOT_OK Request failed
 *  \pre           Service is started.
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CRY_30_RH850ICUS_CMACAES128GENCONFIG
 *  \note          The driver does not support multiple update calls.
 **********************************************************************************************************************/
CRY_30_RH850ICUS_LOCAL FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_CmacAes128GenUpdateInternal(
  P2CONST( Cry_30_Rh850Icus_CmacAes128GenConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) contextPtr,
  P2CONST( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) dataPtr,
  uint32 dataLength );

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_CmacAes128GenFinishInternal()
 **********************************************************************************************************************/
/*! \brief         Function finishes the CMAC generation.
 *  \details       -
 *  \param[in]     contextPtr          Holds a pointer to the configuration of this service.
 *  \param[out]    resultPtr           Holds a pointer to the memory location which will hold the result of the CMAC
 *                                     generation. If the result does not fit into the given buffer, and truncation is
 *                                     allowed, the result shall be truncated.
 *  \param[in,out] resultLengthPtr     Holds a pointer to the memory location in which the length information is stored.
 *                                     On calling this function this parameter shall contain the size of the buffer
 *                                     provided by resultPtr. When the request has finished successful,
 *                                     the length of the returned CMAC is stored.
 *  \param[in]     truncationIsAllowed This parameter states whether a truncation of the result is allowed or not.
 *                                     TRUE: truncation is allowed.
 *                                     FALSE: truncation is not allowed.
 *  \return        CSM_E_OK            Request successful
 *  \return        CSM_E_NOT_OK        Request failed
 *  \return        CSM_E_SMALL_BUFFER  The provided buffer is too small to store the result, and truncation was
 *                                     not allowed.
 *  \pre           Service is started.
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CRY_30_RH850ICUS_CMACAES128GENCONFIG
 *  \note          This function must only be called one after a succesful call of the corresponding Start-Function of
 *                 this service. It is not allowed to call this function multiple times even if the return value is not
 *                 CSM_E_OK.
 *  \trace         SPEC-2919014
 **********************************************************************************************************************/
CRY_30_RH850ICUS_LOCAL FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_CmacAes128GenFinishInternal(
  P2CONST( Cry_30_Rh850Icus_CmacAes128GenConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) contextPtr,
  P2VAR( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) resultPtr,
  P2VAR( uint32, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) resultLengthPtr,
  boolean truncationIsAllowed );

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 **********************************************************************************************************************/

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_CmacAes128GenStartInternal()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 */
CRY_30_RH850ICUS_LOCAL FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_CmacAes128GenStartInternal(
  P2CONST( Cry_30_Rh850Icus_CmacAes128GenConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) contextPtr,
  P2CONST( Csm_SymKeyType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) keyPtr )
{
  /* ----- Local Variables ---------------------------------------------- */
  Csm_ReturnType retVal = CSM_E_NOT_OK;

  P2VAR( Cry_30_Rh850Icus_CmacAes128GenWorkSpaceType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) workSpacePtr = Cry_30_Rh850Icus_GetAddrCmacAes128GenWorkSpace(Cry_30_Rh850Icus_GetCmacAes128GenWorkSpaceIdxOfCmacAes128GenConfig(contextPtr));

  /* ----- Implementation ----------------------------------------------- */
  /* #10 Check if service is idle (no other service is running). */
  SchM_Enter_Cry_30_Rh850Icus_CRY_30_RH850ICUS_EXCLUSIVE_AREA();
  if (Cry_30_Rh850Icus_ServiceState == CRY_30_RH850ICUS_SERVICE_IDLE)
  {
    /* #20 Set state to start. */
    Cry_30_Rh850Icus_ServiceState = CRY_30_RH850ICUS_SERVICE_CMACAES128GEN_START;
    SchM_Exit_Cry_30_Rh850Icus_CRY_30_RH850ICUS_EXCLUSIVE_AREA();

    /* #30 Call subfunction to process the key. */
    retVal = Cry_30_Rh850Icus_ProcessKeyToWorkspace(keyPtr, &workSpacePtr->keyID, Cry_30_Rh850Icus_GetKeyIdTypeOfCmacAes128GenConfig(contextPtr)); /* SBSW_CRY_FCTCALL_PTRFORWARDING */

    /* #40 If error occured, set state to idle. */
    if (retVal != CSM_E_OK)
    {
      Cry_30_Rh850Icus_ServiceState = CRY_30_RH850ICUS_SERVICE_IDLE;
    }
  }
  else
  {
    SchM_Exit_Cry_30_Rh850Icus_CRY_30_RH850ICUS_EXCLUSIVE_AREA();
    /* #50 If service state is not idle, return CSM_E_BUSY. */
    retVal = CSM_E_BUSY;
  }

  return retVal;
} /* Cry_30_Rh850Icus_CmacAes128GenStartInternal() */

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_CmacAes128GenUpdateInternal()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 */
CRY_30_RH850ICUS_LOCAL FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_CmacAes128GenUpdateInternal(
  P2CONST( Cry_30_Rh850Icus_CmacAes128GenConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) contextPtr,
  P2CONST( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) dataPtr,
  uint32 dataLength )
{
  /* ----- Local Variables ---------------------------------------------- */
  Csm_ReturnType retVal = CSM_E_NOT_OK;

  P2VAR( Cry_30_Rh850Icus_CmacAes128GenWorkSpaceType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) workSpacePtr = Cry_30_Rh850Icus_GetAddrCmacAes128GenWorkSpace(Cry_30_Rh850Icus_GetCmacAes128GenWorkSpaceIdxOfCmacAes128GenConfig(contextPtr));

  /* ----- Implementation ----------------------------------------------- */
# if ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_ON )
  /* #10 Check if service has been started. */
  if ( Cry_30_Rh850Icus_ServiceState == CRY_30_RH850ICUS_SERVICE_CMACAES128GEN_START )
# endif
  {
# if (CRY_30_RH850ICUS_INVALID_MEMORY_DETECTION == STD_ON) /* COV_CRY_INVALID_MEMORY_DETECTION */
    /* #15 If INVALID_MEMORY_DETECTION is enabled: */
    P2CONST(uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) inputPtr = dataPtr;
    /* #20 ExtensionPart: Call subfunction to check if dataPtr needs to be copied to global buffer. */
    if (Cry_30_Rh850Icus_Hw_IsMemoryValid(dataPtr, dataLength) == FALSE) /* SBSW_CRY_FCTCALL_PTRFORWARDING_INVALID_MEMORY */
    {
      /* #21 Copy data to global buffer which is correct located in the memory. */
      Cry_30_Rh850Icus_CopyByteArrayToWordArray(dataPtr, Cry_30_Rh850Icus_DataBuffer, dataLength); /* SBSW_CRY_FCTCALL_PTRFORWARDING_BUFFERED_DATA */
      inputPtr = (P2CONST(uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR))Cry_30_Rh850Icus_DataBuffer; /* PRQA S 0310 */ /* MD_CRY_0310_ALIGNED_ARRAY */
    }
    /* #25 ExtensionPart: Call subfunction to update the CMAC AES-128 Generation primitive (send command to hw). */
    retVal = Cry_30_Rh850Icus_Hw_CmacAes128GenUpdateInternal(contextPtr, workSpacePtr, inputPtr, dataLength); /* SBSW_CRY_FCTCALL_PTRFORWARDING_BUFFERED_DATA */
# else
    /* #25 ExtensionPart: Call subfunction to update the CMAC AES-128 Generation primitive (send command to hw). */
    retVal = Cry_30_Rh850Icus_Hw_CmacAes128GenUpdateInternal(contextPtr, workSpacePtr, dataPtr, dataLength); /* SBSW_CRY_FCTCALL_PTRFORWARDING */
# endif

    /* #30 If no errors occured, set state to Update. */
    if (retVal == CSM_E_OK)
    {
      Cry_30_Rh850Icus_ServiceState = CRY_30_RH850ICUS_SERVICE_CMACAES128GEN_UPDATE;
    }
  }

  return retVal;
} /* Cry_30_Rh850Icus_CmacAes128GenUpdateInternal() */

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_CmacAes128GenFinishInternal()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 */
CRY_30_RH850ICUS_LOCAL FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_CmacAes128GenFinishInternal(
  P2CONST( Cry_30_Rh850Icus_CmacAes128GenConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) contextPtr,
  P2VAR( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) resultPtr,
  P2VAR( uint32, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) resultLengthPtr,
  boolean truncationIsAllowed )
{
  /* ----- Local Variables ---------------------------------------------- */
  Csm_ReturnType retVal = CSM_E_NOT_OK;
  uint32 resultLength;

  P2VAR( Cry_30_Rh850Icus_CmacAes128GenWorkSpaceType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) workSpacePtr = Cry_30_Rh850Icus_GetAddrCmacAes128GenWorkSpace(Cry_30_Rh850Icus_GetCmacAes128GenWorkSpaceIdxOfCmacAes128GenConfig(contextPtr));

  /* ----- Implementation ----------------------------------------------- */
  /* #10 Check if service has been updated. */
  if (Cry_30_Rh850Icus_ServiceState == CRY_30_RH850ICUS_SERVICE_CMACAES128GEN_UPDATE)
  {
    resultLength = (*resultLengthPtr & 0xFFFFu);

    /* #20 If resultLength is too small and truncation is not allowed,
     set resultLengthPtr to 0 and return CSM_E_SMALL_BUFFER. */
    if ((truncationIsAllowed == FALSE)
      && (resultLength < CRY_30_RH850ICUS_CMACAES128GEN_MAC_LENGTH))
    {
      *resultLengthPtr = 0u; /* SBSW_CRY_WRITE_PTR */
      retVal = CSM_E_SMALL_BUFFER;
    }
    else
    {
      /* #30 Copy CMAC to resultPtr (with length of resultLength, maximum CRY_30_RH850ICUS_CMACAES128GEN_MAC_LENGTH). */
      if (resultLength > CRY_30_RH850ICUS_CMACAES128GEN_MAC_LENGTH)
      {
        resultLength = CRY_30_RH850ICUS_CMACAES128GEN_MAC_LENGTH;
      }
      Cry_30_Rh850Icus_CopyWordArrayToByteArray(workSpacePtr->macBuffer, resultPtr, resultLength); /* SBSW_CRY_FCTCALL_PTRFORWARDING */

      /* #31 Write back resultLength to resultLengthPtr. */
      *resultLengthPtr = resultLength; /* SBSW_CRY_WRITE_PTR */

      retVal = CSM_E_OK;

      /* #32 Send cancel command to SHE. */
      Cry_30_Rh850Icus_CancelCommand();

      /* #33 Reset service state to idle. */
      Cry_30_Rh850Icus_ServiceState = CRY_30_RH850ICUS_SERVICE_IDLE;
    }
  }

  return retVal;
} /* Cry_30_Rh850Icus_CmacAes128GenFinishInternal() */

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 **********************************************************************************************************************/

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_CmacAes128GenInit()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
FUNC( void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_CmacAes128GenInit( void )
{
  /* #10 Asynchronous function handling: Set status state to idle. */
# if ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_OFF )
  Cry_30_Rh850Icus_CmacAes128Gen_Status = CRY_30_RH850ICUS_STATE_IDLE;
# endif
} /* Cry_30_Rh850Icus_CmacAes128GenInit() */

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_CmacAes128GenMainFunction()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */
FUNC(void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_CmacAes128GenMainFunction( void )
{
  /* #10 In case of asynchronous service handling: */
# if ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_OFF )
  Csm_ReturnType retVal;

  /* #20 Analyse status state machine. */
  switch(Cry_30_Rh850Icus_CmacAes128Gen_Status)
  {
    /* #30 State machine has pending start status. */
    case CRY_30_RH850ICUS_STATE_PENDING_START:
    {
      /* #31 Call internal start service method. */
      retVal = Cry_30_Rh850Icus_CmacAes128GenStartInternal( /* SBSW_CRY_FCTCALL_PTRFORWARDING_BUFFERED */
        Cry_30_Rh850Icus_CmacAes128Gen_Buffer.contextPtr,
        Cry_30_Rh850Icus_CmacAes128Gen_Buffer.keyPtr );

      /* #32 If start method was CSM_E_BUSY, hold service in state, for next main loop. */
      if (retVal != CSM_E_BUSY)
      {
        /* #33 Update state if start executed with CSM_E_OK or CSM_E_NOT_OK. */
        if (retVal == CSM_E_OK)
        {
          Cry_30_Rh850Icus_CmacAes128Gen_Status = CRY_30_RH850ICUS_STATE_START;
        }
        else
        {
          Cry_30_Rh850Icus_CmacAes128Gen_Status = CRY_30_RH850ICUS_STATE_IDLE;
        }
        /* #34 Notify via callback if start method executed with CSM_E_OK or CSM_E_NOT_OK. */
        Csm_MacGenerateCallbackNotification(retVal);
      }
      break;
    }
    /* #40 State machine has pending update status. */
    case CRY_30_RH850ICUS_STATE_PENDING_UPDATE:
    {
      /* #41 Call internal update service method. */
      retVal = Cry_30_Rh850Icus_CmacAes128GenUpdateInternal( /* SBSW_CRY_FCTCALL_PTRFORWARDING_BUFFERED */
        Cry_30_Rh850Icus_CmacAes128Gen_Buffer.contextPtr,
        Cry_30_Rh850Icus_CmacAes128Gen_Buffer.dataPtr,
        Cry_30_Rh850Icus_CmacAes128Gen_Buffer.dataLength );

      /* #42 Set internal status state to next stage depending on the result of the update call. */
      if (retVal == CSM_E_OK)
      {
        Cry_30_Rh850Icus_CmacAes128Gen_Status = CRY_30_RH850ICUS_STATE_UPDATE;
      }
      else
      {
        Cry_30_Rh850Icus_CmacAes128Gen_Status = CRY_30_RH850ICUS_STATE_START;
      }

      /* #43 Send callback notification. */
      Csm_MacGenerateCallbackNotification(retVal);
      break;
    }
    /* #50 State machine has pending finish status. */
    case CRY_30_RH850ICUS_STATE_PENDING_FINISH:
    {
      /* #51 Call internal finish service method. */
      retVal = Cry_30_Rh850Icus_CmacAes128GenFinishInternal( /* SBSW_CRY_FCTCALL_PTRFORWARDING_BUFFERED */
        Cry_30_Rh850Icus_CmacAes128Gen_Buffer.contextPtr,
        Cry_30_Rh850Icus_CmacAes128Gen_Buffer.resultPtr,
        Cry_30_Rh850Icus_CmacAes128Gen_Buffer.resultLengthPtr,
        Cry_30_Rh850Icus_CmacAes128Gen_Buffer.truncationIsAllowed );

      /* #52 If finish method fails, cancel command on SHE and reset global state (next service can run). */
      if (retVal != CSM_E_OK)
      {
        Cry_30_Rh850Icus_CancelCommand();
        Cry_30_Rh850Icus_ServiceState = CRY_30_RH850ICUS_SERVICE_IDLE;
      }

      /* #53 Set internal status state to IDLE. */
      Cry_30_Rh850Icus_CmacAes128Gen_Status = CRY_30_RH850ICUS_STATE_IDLE;

      /* #54 Send callback and finish notification. */
      Csm_MacGenerateCallbackNotification(retVal);
      Csm_MacGenerateServiceFinishNotification();
      break;
    }
    /* #60 State machine in other state (idle). */
    default:
    {
      /* #61 Nothing to do. */
      break;
    }
  }
# endif
} /* Cry_30_Rh850Icus_CmacAes128GenMainFunction() */

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_CmacAes128GenStart()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */
FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_CmacAes128GenStart(
  P2CONST( void, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) cfgPtr,
  P2CONST( Csm_SymKeyType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) keyPtr)
{
  /* ----- Local Variables ---------------------------------------------- */
  Csm_ReturnType retVal = CSM_E_NOT_OK;
  P2CONST(Cry_30_Rh850Icus_CmacAes128GenConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) tmpContextPtr =
    (P2CONST(Cry_30_Rh850Icus_CmacAes128GenConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR))cfgPtr;

  /* ----- Development Error Checks ------------------------------------- */
  /* #10 Check plausibility of input parameters. */
# if (CRY_30_RH850ICUS_DEV_ERROR_DETECT == STD_ON)
  /* Check if input parameter cfgPtr or keyPtr is a Null-Pointer */
  if ( (cfgPtr == NULL_PTR) || (keyPtr == NULL_PTR) )
  {
    /* No action because no DET */
  }
  else if (Cry_30_Rh850Icus_GetCmacAes128GenWorkSpaceIdxOfCmacAes128GenConfig(tmpContextPtr)
    >= Cry_30_Rh850Icus_GetSizeOfCmacAes128GenWorkSpace())
  {
    /* No action because no DET */
  }
  /* Note: KeyPtr->Length is already checked for valid values in internal start function. */
  else
# endif
  {
    /* ----- Implementation ----------------------------------------------- */
# if (CRY_30_RH850ICUS_TIMEOUT_API == STD_ON)
    /* #20 If Timeout-API is enabled, inform Timeout-API about current location. */
    Cry_30_Rh850Icus_GetTimeoutApiLocationCalloutOfGeneralOfPCConfig()(CRY_SHE_TO_SERVICE_CMAC_GENERATE, CRY_SHE_TO_SECTION_START_SERVICE);
    Cry_30_Rh850Icus_TimeoutApiService = CRY_SHE_TO_SERVICE_CMAC_GENERATE;
# endif
# if ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_OFF )
    SchM_Enter_Cry_30_Rh850Icus_CRY_30_RH850ICUS_EXCLUSIVE_AREA();
    /* #31 Check if local status is IDLE. */
    if (Cry_30_Rh850Icus_CmacAes128Gen_Status == CRY_30_RH850ICUS_STATE_IDLE)
    {
      /* #32 Set internal status state to PENDING START. */
      Cry_30_Rh850Icus_CmacAes128Gen_Status = CRY_30_RH850ICUS_STATE_PENDING_START;
      /* #33 Store parameters to buffer. */
      Cry_30_Rh850Icus_CmacAes128Gen_Buffer.contextPtr = tmpContextPtr;
      Cry_30_Rh850Icus_CmacAes128Gen_Buffer.keyPtr = keyPtr;
      /* #34 Always return CSM_E_OK. */
      retVal = CSM_E_OK;
    }
    else
    {
      /* 36 If local status is not IDLE return CSM_E_BUSY. */
      retVal = CSM_E_BUSY;
    }
    SchM_Exit_Cry_30_Rh850Icus_CRY_30_RH850ICUS_EXCLUSIVE_AREA();
# else
    /* #41 Call the internal start function. */
    retVal = Cry_30_Rh850Icus_CmacAes128GenStartInternal(tmpContextPtr, keyPtr); /* SBSW_CRY_FCTCALL_PTRFORWARDING */
# endif
  }
  return retVal;
} /* Cry_30_Rh850Icus_CmacAes128GenStart() */

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_CmacAes128GenUpdate()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */
FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_CmacAes128GenUpdate(
  P2CONST( void, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) cfgPtr,
  P2CONST( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) dataPtr,
  uint32 dataLength)
{
  /* ----- Local Variables ---------------------------------------------- */
  Csm_ReturnType retVal = CSM_E_NOT_OK;
  P2CONST(Cry_30_Rh850Icus_CmacAes128GenConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) tmpContextPtr =
    (P2CONST(Cry_30_Rh850Icus_CmacAes128GenConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR))cfgPtr;

  /* ----- Development Error Checks ------------------------------------- */
  /* #10 Check plausibility of input parameters. */
# if (CRY_30_RH850ICUS_DEV_ERROR_DETECT == STD_ON)
  /* Check if input parameter cfgPtr or dataPtr is a Null-Pointer */
  if ( (cfgPtr == NULL_PTR) || (dataPtr == NULL_PTR) )
  {
    /* No action because no DET */
  }
  else if (Cry_30_Rh850Icus_GetCmacAes128GenWorkSpaceIdxOfCmacAes128GenConfig(tmpContextPtr)
    >= Cry_30_Rh850Icus_GetSizeOfCmacAes128GenWorkSpace())
  {
    /* No action because no DET */
  }
  /* Check if dataLength is zero */
  else if (dataLength == 0u)
  {
    /* No action because no DET */
  }
  else
# endif
# if (CRY_30_RH850ICUS_INVALID_MEMORY_DETECTION == STD_ON) /* COV_CRY_INVALID_MEMORY_DETECTION */
  /* #15 Check if dataPtr is correct located or if it is possible to copy it in a later step (if INVALID_MEMORY_DETECTION is enabled). */
  if (Cry_30_Rh850Icus_Hw_IsMemoryUsable(dataPtr, dataLength) == FALSE) /* SBSW_CRY_FCTCALL_PTRFORWARDING_INVALID_MEMORY */
  {
    /* Nothing to do, retVal initialized with CSM_E_NOT_OK. */
  }
  else
# endif
  {
    /* ----- Implementation ----------------------------------------------- */
# if (CRY_30_RH850ICUS_TIMEOUT_API == STD_ON)
    /* #20 If Timeout-API is enabled, inform Timeout-API about current location. */
    Cry_30_Rh850Icus_GetTimeoutApiLocationCalloutOfGeneralOfPCConfig()(CRY_SHE_TO_SERVICE_CMAC_GENERATE, CRY_SHE_TO_SECTION_UPDATE_SERVICE);
    Cry_30_Rh850Icus_TimeoutApiService = CRY_SHE_TO_SERVICE_CMAC_GENERATE;
# endif
# if ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_OFF )
    /* #31 Check if local status is START. */
    if (Cry_30_Rh850Icus_CmacAes128Gen_Status == CRY_30_RH850ICUS_STATE_START)
    {
      /* #32 Set internal status state to PENDING UPDATE. */
      Cry_30_Rh850Icus_CmacAes128Gen_Status = CRY_30_RH850ICUS_STATE_PENDING_UPDATE;
      /* #33 Store parameters to buffer. */
      Cry_30_Rh850Icus_CmacAes128Gen_Buffer.contextPtr = tmpContextPtr;
      Cry_30_Rh850Icus_CmacAes128Gen_Buffer.dataPtr = dataPtr;
      Cry_30_Rh850Icus_CmacAes128Gen_Buffer.dataLength = dataLength;
      /* #34 Always return CSM_E_OK. */
      retVal = CSM_E_OK;
    }
# else
    /* #41 Call the internal update function. */
    retVal = Cry_30_Rh850Icus_CmacAes128GenUpdateInternal(tmpContextPtr, dataPtr, dataLength); /* SBSW_CRY_FCTCALL_PTRFORWARDING */
# endif
  }
  return retVal;
} /* Cry_30_Rh850Icus_CmacAes128GenUpdate() */ /* PRQA S 6080 */ /* MD_MSR_STMIF */

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_CmacAes128GenFinish()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */
FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_CmacAes128GenFinish(
  P2CONST( void, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) cfgPtr,
  P2VAR( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) resultPtr,
  P2VAR( uint32, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) resultLengthPtr,
  boolean truncationIsAllowed)
{
  /* ----- Local Variables ---------------------------------------------- */
  Csm_ReturnType retVal = CSM_E_NOT_OK;
  P2CONST(Cry_30_Rh850Icus_CmacAes128GenConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) tmpContextPtr =
    (P2CONST(Cry_30_Rh850Icus_CmacAes128GenConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR))cfgPtr;

 /* ----- Development Error Checks ------------------------------------- */
  /* #10 Check plausibility of input parameters. */
# if (CRY_30_RH850ICUS_DEV_ERROR_DETECT == STD_ON)
  /* Check if input parameter cfgPtr or resultPtr or resultLengthPtr is a Null-Pointer */
  if ( (cfgPtr == NULL_PTR) || (resultPtr == NULL_PTR) || (resultLengthPtr == NULL_PTR) )
  {
    /* No action because no DET */
  }
  else if (Cry_30_Rh850Icus_GetCmacAes128GenWorkSpaceIdxOfCmacAes128GenConfig(tmpContextPtr)
    >= Cry_30_Rh850Icus_GetSizeOfCmacAes128GenWorkSpace())
  {
    /* No action because no DET */
  }
  else
# endif
  {
    /* ----- Implementation ----------------------------------------------- */
# if (CRY_30_RH850ICUS_TIMEOUT_API == STD_ON)
    /* #20 If Timeout-API is enabled, inform Timeout-API about current location. */
    Cry_30_Rh850Icus_GetTimeoutApiLocationCalloutOfGeneralOfPCConfig()(CRY_SHE_TO_SERVICE_CMAC_GENERATE, CRY_SHE_TO_SECTION_FINISH_SERVICE);
    Cry_30_Rh850Icus_TimeoutApiService = CRY_SHE_TO_SERVICE_CMAC_GENERATE;
# endif
# if ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_OFF )
    /* #31 Check if local status is UPDATE or START. */
    if ( (Cry_30_Rh850Icus_CmacAes128Gen_Status == CRY_30_RH850ICUS_STATE_UPDATE) || (Cry_30_Rh850Icus_CmacAes128Gen_Status == CRY_30_RH850ICUS_STATE_START) )
    {
      /* #32 Set local status to PENDING_FINISH. */
      Cry_30_Rh850Icus_CmacAes128Gen_Status = CRY_30_RH850ICUS_STATE_PENDING_FINISH;
      /* #33 Store parameters to buffer. */
      Cry_30_Rh850Icus_CmacAes128Gen_Buffer.contextPtr = tmpContextPtr;
      Cry_30_Rh850Icus_CmacAes128Gen_Buffer.resultPtr = resultPtr;
      Cry_30_Rh850Icus_CmacAes128Gen_Buffer.resultLengthPtr = resultLengthPtr;
      Cry_30_Rh850Icus_CmacAes128Gen_Buffer.truncationIsAllowed = truncationIsAllowed;
      retVal = CSM_E_OK;
    }
# else
    /* #41 Call the internal finish function. */
    retVal = Cry_30_Rh850Icus_CmacAes128GenFinishInternal(tmpContextPtr, resultPtr, resultLengthPtr, truncationIsAllowed); /* SBSW_CRY_FCTCALL_PTRFORWARDING */
# endif
  }

# if ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_ON )
  /* #50 If any error occured, and global state is in start or update, cancel SHE command and set global state to idle (in sync mode). */
  if ( (retVal != CSM_E_OK) &&
  ( (Cry_30_Rh850Icus_ServiceState == CRY_30_RH850ICUS_SERVICE_CMACAES128GEN_UPDATE) || (Cry_30_Rh850Icus_ServiceState == CRY_30_RH850ICUS_SERVICE_CMACAES128GEN_START) ) )
  {
    Cry_30_Rh850Icus_CancelCommand();
    Cry_30_Rh850Icus_ServiceState = CRY_30_RH850ICUS_SERVICE_IDLE;
  }
# endif

  return retVal;
} /* Cry_30_Rh850Icus_CmacAes128GenFinish() */

# define CRY_30_RH850ICUS_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#endif /* ( CRY_30_RH850ICUS_CMACAES128GENCONFIG == STD_ON ) */

/**********************************************************************************************************************
 *  END OF FILE: CRY_30_RH850ICUS_CMACAES128GEN.C
 **********************************************************************************************************************/

