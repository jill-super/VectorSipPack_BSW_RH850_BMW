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
/*!        \file  Cry_30_Rh850Icus_CmacAes128Ver.c
 *        \brief  Implements the CRY CmacAes128Ver API for the ASR CSM.
 *
 *      \details  -
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Refer to the module's header file.
 *********************************************************************************************************************/

#define CRY_30_RH850ICUS_CMACAES128VER_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/

#include "Cry_30_Rh850Icus.h"
#include "Csm_Cbk.h"
#include "Cry_30_Rh850Icus_CommonUtil.h"
#include "Cry_30_Rh850Icus_Hw.h"

#if ( CRY_30_RH850ICUS_CMACAES128VERCONFIG == STD_ON )
/**********************************************************************************************************************
 *  LOCAL CONSTANT MACROS
 **********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA TYPES AND STRUCTURES
 **********************************************************************************************************************/

# if !defined (CRY_30_RH850ICUS_LOCAL) /* COV_CRY_LOCAL */
#  define CRY_30_RH850ICUS_LOCAL static
# endif

# if !defined (CRY_30_RH850ICUS_LOCAL_INLINE) /* COV_CRY_LOCAL_INLINE */
#  define CRY_30_RH850ICUS_LOCAL_INLINE LOCAL_INLINE
# endif

# if ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_OFF )
/*! Struct for the service buffer which is used to temporarily store parameters until the main function processes the service */
typedef struct
{
  P2CONST( Cry_30_Rh850Icus_CmacAes128VerConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) contextPtr; /*<! Holds a pointer to the configuration of this service. */
  P2CONST( Csm_SymKeyType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) keyPtr;         /*<! Holds a pointer to the key which has to be used for the CMAC verification. */
  P2CONST( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) dataPtr;                 /*<! Holds a pointer to the data for which a CMAC shall be verified. */
  uint32 dataLength;                                                       /*<! Contains the number of bytes for which the CMAC shall be verified. */
  P2CONST( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) MacPtr;                  /*<! Holds a pointer to the memory location which will hold the CMAC to verify. */
  uint32 MacLength;                                                        /*<! Holds the length of the MAC to be verified. */
  P2VAR( Csm_VerifyResultType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) resultPtr;  /*<! Holds a pointer to the memory location which will hold the result of the verification. */
} Cry_30_Rh850Icus_CmacAes128Ver_BufferType;
# endif /* ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_OFF ) */

/**********************************************************************************************************************
 *  LOCAL DATA PROTOTYPES
 **********************************************************************************************************************/

# if ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_OFF )
#  define CRY_30_RH850ICUS_START_SEC_VAR_NOINIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! Buffer containing the data used during the service execution */
CRY_30_RH850ICUS_LOCAL VAR(Cry_30_Rh850Icus_CmacAes128Ver_BufferType, CRY_30_RH850ICUS_VAR_NOINIT) Cry_30_Rh850Icus_CmacAes128Ver_Buffer; /* PRQA S 0779 */ /* MD_MSR_5.1_779 */

#  define CRY_30_RH850ICUS_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define CRY_30_RH850ICUS_START_SEC_VAR_NOINIT_8BIT
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! State of the service */
CRY_30_RH850ICUS_LOCAL VAR(uint8, CRY_30_RH850ICUS_VAR_NOINIT) Cry_30_Rh850Icus_CmacAes128Ver_Status; /* PRQA S 0779 */ /* MD_MSR_5.1_779 */

#  define CRY_30_RH850ICUS_STOP_SEC_VAR_NOINIT_8BIT
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
# endif /* ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_OFF ) */

/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 **********************************************************************************************************************/

# define CRY_30_RH850ICUS_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_CmacAes128VerStartInternal()
 **********************************************************************************************************************/
/*! \brief         Function starts the CMAC verification service.
 *  \details       The function starts the service. The keyId is stored and if the keyPtr contains a plain key, the
 *                 key is loaded to the RAM key slot.
 *  \param[in]     contextPtr   Holds a pointer to the configuration of this service.
 *  \param[in]     keyPtr       Holds a pointer to the key which has to be used for the CMAC verification.
 *                              The keyPtr can either contain a plaintext key (keyPtr.length = 16) or a
 *                              keyId (keyPtr.length = 1).
 *  \return        CSM_E_OK     Request successful.
 *  \return        CSM_E_NOT_OK Request failed.
 *  \return        CSM_E_BUSY   Request failed, service is still busy.
 *  \pre           Service is idle.
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CRY_30_RH850ICUS_CMACAES128VERCONFIG
 *  \note          It is important to call the Finish-Function of this service after a successful call of this function
 *                 (CSM_E_OK). A call of the Update-Function between them is allowed.
 *                 Attention: If the Finish-function is never called, the SHE is blocked for all other services.
 **********************************************************************************************************************/
CRY_30_RH850ICUS_LOCAL FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_CmacAes128VerStartInternal(
  P2CONST( Cry_30_Rh850Icus_CmacAes128VerConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) contextPtr,
  P2CONST( Csm_SymKeyType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) keyPtr );

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_CmacAes128VerUpdateInternal()
 **********************************************************************************************************************/
/*! \brief         Function updates the CMAC verification service.
 *  \details       The function updates the service. The dataLength and dataPtr are stored internal for the finish call.
 *  \param[in]     contextPtr   Holds a pointer to the configuration of this service.
 *  \param[in]     dataPtr      Holds a pointer to the data for which a CMAC shall be verified.
 *  \param[in]     dataLength   Contains the number of bytes for which the CMAC shall be verified.
 *  \return        CSM_E_OK     Request successful.
 *  \return        CSM_E_NOT_OK Request failed.
 *  \pre           Service is started.
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CRY_30_RH850ICUS_CMACAES128VERCONFIG
 *  \note          Attention: The function stores only the address of the dataPtr and not the content behind the pointer.
                   The content of the dataPtr is needed for the Finish-function. The caller of this method needs to
                   ensure, that the data of the dataPtr is valid until the Finish function has called and executed.
 *  \note          The driver does not support multiple update calls.
 **********************************************************************************************************************/
CRY_30_RH850ICUS_LOCAL FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_CmacAes128VerUpdateInternal(
  P2CONST( Cry_30_Rh850Icus_CmacAes128VerConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) contextPtr,
  P2CONST( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) dataPtr,
  uint32 dataLength );

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_CmacAes128VerFinishInternal()
 **********************************************************************************************************************/
/*! \brief         Function finishes the CMAC verification service.
 *  \details       The function finishes the service.
                   The command to verify the CMAC is send to the SHE. The result of the verification is written to the
                   resultPtr.
 *  \param[in]     contextPtr   Holds a pointer to the configuration of this service.
 *  \param[in]     MacPtr       Holds a pointer to the memory location which will hold the CMAC to verify.
 *  \param[in]     MacLength    Holds the length of the MAC to be verified.
 *                              Depending on the configuration, this value is interpreded as number of bits or number
 *                              of bytes to verify. The maximum supported length is 16 Byte, respectively 128 Bit.
 *  \param[out]    resultPtr    Holds a pointer to the memory location which will hold the CMAC.
 *  \return        CSM_E_OK     Request successful.
 *  \return        CSM_E_NOT_OK Request failed.
 *  \pre           Service is started.
 *  \pre           The dataPtr and it's data from the update-call is still valid.
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CRY_30_RH850ICUS_CMACAES128VERCONFIG
 *  \note          Attention: The caller of this function needs to ensure, that the dataPtr and its data which was
 *                 passed in the update function is still valid.
 *  \note          This function must only be called one after a succesful call of the corresponding Start-Function of
 *                 this service. It is not allowed to call this function multiple times even if the return value is not
 *                 CSM_E_OK.
 **********************************************************************************************************************/
CRY_30_RH850ICUS_LOCAL FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_CmacAes128VerFinishInternal(
  P2CONST( Cry_30_Rh850Icus_CmacAes128VerConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) contextPtr,
  P2CONST( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) MacPtr,
  uint32 MacLength,
  P2VAR( Csm_VerifyResultType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) resultPtr );

# if (CRY_30_RH850ICUS_INVALID_MEMORY_DETECTION == STD_ON) /* COV_CRY_INVALID_MEMORY_DETECTION */
/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_CmacAes128VerGetMacLengthInBytes()
 **********************************************************************************************************************/
/*! \brief         Function returns the MAC length of a CMAC verification configuration in bytes.
 *  \details       -
 *  \param[in]     contextPtr   Holds a pointer to the configuration of this service.
 *  \param[in]     MacLength    Holds the length of the MAC to be verified.
 *                              Depending on the configuration, this value is interpreded as number of bits or number
 *                              of bytes to verify. The maximum supported length is 16 Byte, respectively 128 Bit.
 *  \return        Length of MAC in bytes.
 *  \pre           -
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CRY_30_RH850ICUS_CMACAES128VERCONFIG, CRY_30_RH850ICUS_INVALID_MEMORY_DETECTION
 **********************************************************************************************************************/
CRY_30_RH850ICUS_LOCAL_INLINE FUNC(uint32, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_GetMacLengthInBytes(
  P2CONST(Cry_30_Rh850Icus_CmacAes128VerConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) contextPtr,
  uint32 MacLength);

# endif /* (CRY_30_RH850ICUS_INVALID_MEMORY_DETECTION == STD_ON) */

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 **********************************************************************************************************************/

# if (CRY_30_RH850ICUS_INVALID_MEMORY_DETECTION == STD_ON) /* COV_CRY_INVALID_MEMORY_DETECTION */
/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_CmacAes128VerGetMacLengthInBytes()
 **********************************************************************************************************************/
/*!
* Internal comment removed.
 *
 *
 */
CRY_30_RH850ICUS_LOCAL_INLINE FUNC(uint32, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_GetMacLengthInBytes(
  P2CONST(Cry_30_Rh850Icus_CmacAes128VerConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) contextPtr,
  uint32 MacLength)
{
  /* #10 Return MAC length in bytes (calculate correct number if given input length is given in Bits). */
  uint32 macLengthInBytes = MacLength;
  if (Cry_30_Rh850Icus_IsLengthInBytesOfCmacAes128VerConfig(contextPtr) == FALSE)
  {
    macLengthInBytes /= CRY_30_RH850ICUS_BITS_PER_BYTE;
    /* Calculate modulo */
    if ((MacLength & (CRY_30_RH850ICUS_BITS_PER_BYTE - 1u)) != 0u)
    {
      macLengthInBytes += 1u;
    }
  }
  return macLengthInBytes;
}
# endif /* (CRY_30_RH850ICUS_INVALID_MEMORY_DETECTION == STD_ON) */

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_CmacAes128VerStartInternal()
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
CRY_30_RH850ICUS_LOCAL FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_CmacAes128VerStartInternal(
  P2CONST( Cry_30_Rh850Icus_CmacAes128VerConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) contextPtr,
  P2CONST( Csm_SymKeyType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) keyPtr )
{
  /* ----- Local Variables ---------------------------------------------- */
  Csm_ReturnType retVal = CSM_E_NOT_OK;

  P2VAR( Cry_30_Rh850Icus_CmacAes128VerWorkSpaceType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) workSpacePtr = Cry_30_Rh850Icus_GetAddrCmacAes128VerWorkSpace(Cry_30_Rh850Icus_GetCmacAes128VerWorkSpaceIdxOfCmacAes128VerConfig(contextPtr));

  /* ----- Implementation ----------------------------------------------- */
  /* #10 Check if service is idle (no other service is running). */
  SchM_Enter_Cry_30_Rh850Icus_CRY_30_RH850ICUS_EXCLUSIVE_AREA();
  if ( Cry_30_Rh850Icus_ServiceState == CRY_30_RH850ICUS_SERVICE_IDLE )
  {
    /* #20 Set state to start. */
    Cry_30_Rh850Icus_ServiceState = CRY_30_RH850ICUS_SERVICE_CMACAES128VER_START;
    SchM_Exit_Cry_30_Rh850Icus_CRY_30_RH850ICUS_EXCLUSIVE_AREA();

    /* #30 Call subfunction to process the key. */
    retVal = Cry_30_Rh850Icus_ProcessKeyToWorkspace(keyPtr, &workSpacePtr->keyID, Cry_30_Rh850Icus_GetKeyIdTypeOfCmacAes128VerConfig(contextPtr)); /* SBSW_CRY_FCTCALL_PTRFORWARDING */

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
} /* Cry_30_Rh850Icus_CmacAes128VerStartInternal() */

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_CmacAes128VerUpdateInternal()
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
CRY_30_RH850ICUS_LOCAL FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_CmacAes128VerUpdateInternal(
  P2CONST( Cry_30_Rh850Icus_CmacAes128VerConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) contextPtr,
  P2CONST( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) dataPtr,
  uint32 dataLength )
{
  /* ----- Local Variables ---------------------------------------------- */
  Csm_ReturnType retVal = CSM_E_NOT_OK;

  P2VAR( Cry_30_Rh850Icus_CmacAes128VerWorkSpaceType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) workSpacePtr = Cry_30_Rh850Icus_GetAddrCmacAes128VerWorkSpace(Cry_30_Rh850Icus_GetCmacAes128VerWorkSpaceIdxOfCmacAes128VerConfig(contextPtr));

  /* ----- Implementation ----------------------------------------------- */
# if ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_ON )
  /* #10 Check if service has been started. */
  if ( Cry_30_Rh850Icus_ServiceState == CRY_30_RH850ICUS_SERVICE_CMACAES128VER_START )
# endif
  {
# if (CRY_30_RH850ICUS_INVALID_MEMORY_DETECTION == STD_ON) /* COV_CRY_INVALID_MEMORY_DETECTION */
    /* #15 If INVALID_MEMORY_DETECTION is enabled: */
    P2CONST(uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) inputPtr = dataPtr;
    /* #20 ExtensionPart: Call subfunction to check if data needs to be copied to global buffer. */
    if (Cry_30_Rh850Icus_Hw_IsMemoryValid(dataPtr, dataLength) == FALSE) /* SBSW_CRY_FCTCALL_PTRFORWARDING_INVALID_MEMORY */
    {
      /* #21 Copy data to global buffer which is correct located in the memory. */
      Cry_30_Rh850Icus_CopyByteArrayToWordArray(dataPtr, Cry_30_Rh850Icus_DataBuffer, dataLength); /* SBSW_CRY_FCTCALL_PTRFORWARDING_BUFFERED_DATA */
      inputPtr = (P2CONST(uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR))Cry_30_Rh850Icus_DataBuffer; /* PRQA S 0310 */ /* MD_CRY_0310_ALIGNED_ARRAY */
    }
    /* #25 Store dataLength and dataPtr. */
    workSpacePtr->dataPtr = inputPtr; /* SBSW_CRY_WRITE_WORKSPACE */
# else
    /* #25 Store dataLength and dataPtr. */
    workSpacePtr->dataPtr = dataPtr; /* SBSW_CRY_WRITE_WORKSPACE */
# endif
    workSpacePtr->dataLength = dataLength; /* SBSW_CRY_WRITE_WORKSPACE */

    /* #30 Set state to Update. */
    Cry_30_Rh850Icus_ServiceState = CRY_30_RH850ICUS_SERVICE_CMACAES128VER_UPDATE;
    retVal = CSM_E_OK;
  }

  return retVal;
} /* Cry_30_Rh850Icus_CmacAes128VerUpdateInternal() */

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_CmacAes128VerFinishInternal()
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
CRY_30_RH850ICUS_LOCAL FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_CmacAes128VerFinishInternal(
  P2CONST( Cry_30_Rh850Icus_CmacAes128VerConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) contextPtr,
  P2CONST( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) MacPtr,
  uint32 MacLength,
  P2VAR( Csm_VerifyResultType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) resultPtr )
{
  /* ----- Local Variables ---------------------------------------------- */
  Csm_ReturnType retVal = CSM_E_NOT_OK;

  P2VAR( Cry_30_Rh850Icus_CmacAes128VerWorkSpaceType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) workSpacePtr = Cry_30_Rh850Icus_GetAddrCmacAes128VerWorkSpace(Cry_30_Rh850Icus_GetCmacAes128VerWorkSpaceIdxOfCmacAes128VerConfig(contextPtr));

  /* ----- Implementation ----------------------------------------------- */
  /* #10 Check if service has been updated. */
  if (Cry_30_Rh850Icus_ServiceState == CRY_30_RH850ICUS_SERVICE_CMACAES128VER_UPDATE)
  {
    /* #20 If MacLength is zero, return CSM_E_OK and set resultPtr to CSM_E_VER_OK. */
    if (MacLength == 0u)
    {
      *resultPtr = CSM_E_VER_OK; /* SBSW_CRY_WRITE_PTR */
      retVal = CSM_E_OK;
      /* #40 If function finished successfull (CSM_E_OK), send cancel command to SHE and reset service state to idle. */
      Cry_30_Rh850Icus_CancelCommand();
      Cry_30_Rh850Icus_ServiceState = CRY_30_RH850ICUS_SERVICE_IDLE;
    }
    else
    {
      /* #30 ExtensionPart: Call subfunction to update the CMAC AES-128 Verification primitive (send command to hw). */
# if (CRY_30_RH850ICUS_INVALID_MEMORY_DETECTION == STD_ON) /* COV_CRY_INVALID_MEMORY_DETECTION */
      /* #25 If INVALID_MEMORY_DETECTION is enabled: */
      P2CONST(uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) inputPtr = MacPtr;
      /* #26 ExtensionPart: Call subfunction to check if MacPtr needs to be copied to global buffer. */
      if (Cry_30_Rh850Icus_Hw_IsMemoryValid(MacPtr, Cry_30_Rh850Icus_GetMacLengthInBytes(contextPtr, MacLength)) == FALSE) /* SBSW_CRY_FCTCALL_PTRFORWARDING_INVALID_MEMORY */ /* SBSW_CRY_FCTCALL_PTRFORWARDING */
      {
        /* #27 Copy MAC to global buffer which is correct located in the memory. */
        Cry_30_Rh850Icus_CopyByteArrayToWordArray(MacPtr, Cry_30_Rh850Icus_AesBlockBuffer, Cry_30_Rh850Icus_GetMacLengthInBytes(contextPtr, MacLength)); /* SBSW_CRY_FCTCALL_PTRFORWARDING */ /* SBSW_CRY_FCTCALL_PTRFORWARDING_BUFFERED_DATA */
        inputPtr = (P2CONST(uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR))Cry_30_Rh850Icus_AesBlockBuffer; /* PRQA S 0310 */ /* MD_CRY_0310_ALIGNED_ARRAY */
      }
      /* #30 ExtensionPart: Call subfunction to update the CMAC AES-128 Verification primitive (send command to hw). */
      retVal = Cry_30_Rh850Icus_Hw_CmacAes128VerFinishInternal(contextPtr, workSpacePtr, inputPtr, MacLength, resultPtr); /* SBSW_CRY_FCTCALL_PTRFORWARDING_BUFFERED_DATA */
# else
      /* #30 ExtensionPart: Call subfunction to update the CMAC AES-128 Verification primitive (send command to hw). */
      retVal = Cry_30_Rh850Icus_Hw_CmacAes128VerFinishInternal(contextPtr, workSpacePtr, MacPtr, MacLength, resultPtr); /* SBSW_CRY_FCTCALL_PTRFORWARDING */
# endif

      /* #40 If function finished successfull (CSM_E_OK), send cancel command to SHE and reset service state to idle. */
      Cry_30_Rh850Icus_CancelCommand();
      Cry_30_Rh850Icus_ServiceState = CRY_30_RH850ICUS_SERVICE_IDLE;
    }
  }

  return retVal;
} /* Cry_30_Rh850Icus_CmacAes128VerFinishInternal() */ /* PRQA S 6080 */ /* MD_MSR_STMIF */

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 **********************************************************************************************************************/

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_CmacAes128VerInit()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
FUNC( void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_CmacAes128VerInit( void )
{
  /* #10 Asynchronous function handling: Set status state to idle. */
# if ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_OFF )
  Cry_30_Rh850Icus_CmacAes128Ver_Status = CRY_30_RH850ICUS_STATE_IDLE;
# endif
} /* Cry_30_Rh850Icus_CmacAes128VerInit() */

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_CmacAes128VerMainFunction()
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
FUNC(void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_CmacAes128VerMainFunction( void )
{
  /* #10 In case of asynchronous service handling: */
# if ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_OFF )
  Csm_ReturnType retVal;

  /* #20 Analyse status state machine. */
  switch(Cry_30_Rh850Icus_CmacAes128Ver_Status)
  {
    /* #30 State machine has pending start status. */
    case CRY_30_RH850ICUS_STATE_PENDING_START:
    {
      /* #31 Call internal start service method. */
      retVal = Cry_30_Rh850Icus_CmacAes128VerStartInternal( /* SBSW_CRY_FCTCALL_PTRFORWARDING_BUFFERED */
        Cry_30_Rh850Icus_CmacAes128Ver_Buffer.contextPtr,
        Cry_30_Rh850Icus_CmacAes128Ver_Buffer.keyPtr );

      /* #32 If start method was CSM_E_BUSY, hold service in state, for next main loop. */
      if (retVal != CSM_E_BUSY)
      {
        /* #33 Update state if start executed with CSM_E_OK or CSM_E_NOT_OK. */
        if (retVal == CSM_E_OK)
        {
          Cry_30_Rh850Icus_CmacAes128Ver_Status = CRY_30_RH850ICUS_STATE_START;
        }
        else
        {
          Cry_30_Rh850Icus_CmacAes128Ver_Status = CRY_30_RH850ICUS_STATE_IDLE;
        }
        /* #34 Notify via callback if start method executed with CSM_E_OK or CSM_E_NOT_OK. */
        Csm_MacVerifyCallbackNotification(retVal);
      }
      break;
    }
    /* #40 State machine has pending update status. */
    case CRY_30_RH850ICUS_STATE_PENDING_UPDATE:
    {
      /* #41 Call internal update service method. */
      retVal = Cry_30_Rh850Icus_CmacAes128VerUpdateInternal( /* SBSW_CRY_FCTCALL_PTRFORWARDING_BUFFERED */
        Cry_30_Rh850Icus_CmacAes128Ver_Buffer.contextPtr,
        Cry_30_Rh850Icus_CmacAes128Ver_Buffer.dataPtr,
        Cry_30_Rh850Icus_CmacAes128Ver_Buffer.dataLength );

      /* #42 Set internal status state to next stage depending on the result of the update call. */
      Cry_30_Rh850Icus_CmacAes128Ver_Status = CRY_30_RH850ICUS_STATE_UPDATE;

      /* Note: Internal update function can only return CSM_E_OK.
       * If internal update function is extended and there is a reason to return CSM_E_NOT_OK, this needs to be adapted (see other
       * primitive main function constructs.
       */

      /* #43 Send callback notification. */
      Csm_MacVerifyCallbackNotification(retVal);
      break;
    }
    /* #50 State machine has pending finish status. */
    case CRY_30_RH850ICUS_STATE_PENDING_FINISH:
    {
      /* #51 Call internal finish service method. */
      retVal = Cry_30_Rh850Icus_CmacAes128VerFinishInternal( /* SBSW_CRY_FCTCALL_PTRFORWARDING_BUFFERED */
        Cry_30_Rh850Icus_CmacAes128Ver_Buffer.contextPtr,
        Cry_30_Rh850Icus_CmacAes128Ver_Buffer.MacPtr,
        Cry_30_Rh850Icus_CmacAes128Ver_Buffer.MacLength,
        Cry_30_Rh850Icus_CmacAes128Ver_Buffer.resultPtr );

      /* #52 If finish method fails, cancel command on SHE and reset global state (next service can run). */
      if (retVal != CSM_E_OK)
      {
        Cry_30_Rh850Icus_CancelCommand();
        Cry_30_Rh850Icus_ServiceState = CRY_30_RH850ICUS_SERVICE_IDLE;
      }

      /* #53 Set internal status state to IDLE. */
      Cry_30_Rh850Icus_CmacAes128Ver_Status = CRY_30_RH850ICUS_STATE_IDLE;

      /* #54 Send callback and finish notification. */
      Csm_MacVerifyCallbackNotification(retVal);
      Csm_MacVerifyServiceFinishNotification();
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
} /* Cry_30_Rh850Icus_CmacAes128VerMainFunction() */

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_CmacAes128VerStart()
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
FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_CmacAes128VerStart(
  P2CONST( void, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) cfgPtr,
  P2CONST( Csm_SymKeyType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) keyPtr)
{
  /* ----- Local Variables ---------------------------------------------- */
  Csm_ReturnType retVal = CSM_E_NOT_OK;
  P2CONST(Cry_30_Rh850Icus_CmacAes128VerConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) tmpContextPtr =
    (P2CONST(Cry_30_Rh850Icus_CmacAes128VerConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR))cfgPtr;

  /* ----- Development Error Checks ------------------------------------- */
  /* #10 Check plausibility of input parameters. */
# if (CRY_30_RH850ICUS_DEV_ERROR_DETECT == STD_ON)
  /* Check if input parameter cfgPtr or keyPtr is a Null-Pointer */
  if ( (cfgPtr == NULL_PTR) || (keyPtr == NULL_PTR) )
  {
    /* No action because no DET */
  }
  else if (Cry_30_Rh850Icus_GetCmacAes128VerWorkSpaceIdxOfCmacAes128VerConfig(tmpContextPtr)
    >= Cry_30_Rh850Icus_GetSizeOfCmacAes128VerWorkSpace())
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
    Cry_30_Rh850Icus_GetTimeoutApiLocationCalloutOfGeneralOfPCConfig()(CRY_SHE_TO_SERVICE_CMAC_VERIFY, CRY_SHE_TO_SECTION_START_SERVICE);
    Cry_30_Rh850Icus_TimeoutApiService = CRY_SHE_TO_SERVICE_CMAC_VERIFY;
# endif
# if ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_OFF )
    SchM_Enter_Cry_30_Rh850Icus_CRY_30_RH850ICUS_EXCLUSIVE_AREA();
    /* #31 Check if local status is IDLE. */
    if (Cry_30_Rh850Icus_CmacAes128Ver_Status == CRY_30_RH850ICUS_STATE_IDLE)
    {
      /* #32 Set internal status state to PENDING START. */
      Cry_30_Rh850Icus_CmacAes128Ver_Status = CRY_30_RH850ICUS_STATE_PENDING_START;
      /* #33 Store parameters to buffer. */
      Cry_30_Rh850Icus_CmacAes128Ver_Buffer.contextPtr = tmpContextPtr;
      Cry_30_Rh850Icus_CmacAes128Ver_Buffer.keyPtr = keyPtr;
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
    retVal = Cry_30_Rh850Icus_CmacAes128VerStartInternal(tmpContextPtr, keyPtr); /* SBSW_CRY_FCTCALL_PTRFORWARDING */
# endif
  }
  return retVal;
} /* Cry_30_Rh850Icus_CmacAes128VerStart() */

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_CmacAes128VerUpdate()
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
FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_CmacAes128VerUpdate(
  P2CONST( void, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) cfgPtr,
  P2CONST( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) dataPtr,
  uint32 dataLength)
{
  /* ----- Local Variables ---------------------------------------------- */
  Csm_ReturnType retVal = CSM_E_NOT_OK;
  P2CONST(Cry_30_Rh850Icus_CmacAes128VerConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) tmpContextPtr =
    (P2CONST(Cry_30_Rh850Icus_CmacAes128VerConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR))cfgPtr;

  /* ----- Development Error Checks ------------------------------------- */
  /* #10 Check plausibility of input parameters. */
# if (CRY_30_RH850ICUS_DEV_ERROR_DETECT == STD_ON)
  /* Check if input parameter cfgPtr or dataPtr is a Null-Pointer */
  if ( (cfgPtr == NULL_PTR) || (dataPtr == NULL_PTR) )
  {
    /* No action because no DET */
  }
  else if (Cry_30_Rh850Icus_GetCmacAes128VerWorkSpaceIdxOfCmacAes128VerConfig(tmpContextPtr)
    >= Cry_30_Rh850Icus_GetSizeOfCmacAes128VerWorkSpace())
  {
    /* No action because no DET */
  }
  /* Check if dataLength is zero */
  else if (dataLength == 0u )
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
    Cry_30_Rh850Icus_GetTimeoutApiLocationCalloutOfGeneralOfPCConfig()(CRY_SHE_TO_SERVICE_CMAC_VERIFY, CRY_SHE_TO_SECTION_UPDATE_SERVICE);
    Cry_30_Rh850Icus_TimeoutApiService = CRY_SHE_TO_SERVICE_CMAC_VERIFY;
# endif
# if ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_OFF )
    /* #31 Check if local status is START. */
    if (Cry_30_Rh850Icus_CmacAes128Ver_Status == CRY_30_RH850ICUS_STATE_START)
    {
      /* #32 Set internal status state to PENDING UPDATE. */
      Cry_30_Rh850Icus_CmacAes128Ver_Status = CRY_30_RH850ICUS_STATE_PENDING_UPDATE;
      /* #33 Store parameters to buffer. */
      Cry_30_Rh850Icus_CmacAes128Ver_Buffer.contextPtr = tmpContextPtr;
      Cry_30_Rh850Icus_CmacAes128Ver_Buffer.dataPtr = dataPtr;
      Cry_30_Rh850Icus_CmacAes128Ver_Buffer.dataLength = dataLength;
      /* #34 Always return CSM_E_OK. */
      retVal = CSM_E_OK;
    }
# else
    /* #41 Call the internal update function. */
    retVal = Cry_30_Rh850Icus_CmacAes128VerUpdateInternal(tmpContextPtr, dataPtr, dataLength); /* SBSW_CRY_FCTCALL_PTRFORWARDING */
# endif
  }
  return retVal;
} /* Cry_30_Rh850Icus_CmacAes128VerUpdate() */ /* PRQA S 6080 */ /* MD_MSR_STMIF */

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_CmacAes128VerFinish()
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
FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_CmacAes128VerFinish(
  P2CONST( void, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) cfgPtr,
  P2CONST( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) MacPtr,
  uint32 MacLength,
  P2VAR( Csm_VerifyResultType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) resultPtr)
{
  /* ----- Local Variables ---------------------------------------------- */
  Csm_ReturnType retVal = CSM_E_NOT_OK;
  P2CONST( Cry_30_Rh850Icus_CmacAes128VerConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) tmpContextPtr =
    (P2CONST(Cry_30_Rh850Icus_CmacAes128VerConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR))cfgPtr;

  /* ----- Development Error Checks ------------------------------------- */
# if (CRY_30_RH850ICUS_DEV_ERROR_DETECT == STD_ON)
  /* ----- Local Variables ---------------------------------------------- */

  /* #10 Check plausibility of input parameters. */
  /* Check if input parameter cfgPtr or MacPtr or resultPtr is a Null-Pointer */
  if ( (cfgPtr == NULL_PTR) || (MacPtr == NULL_PTR) || (resultPtr == NULL_PTR) )
  {
    /* No action because no DET */
  }
  else if (Cry_30_Rh850Icus_GetCmacAes128VerWorkSpaceIdxOfCmacAes128VerConfig(tmpContextPtr)
    >= Cry_30_Rh850Icus_GetSizeOfCmacAes128VerWorkSpace())
  {
    /* No action because no DET */
  }
  else
# endif
  /* Mac Length checks are done not in DET, to ensure that array in internal function is not written out of bound */
  /* Check parameter MacLength */
  if ((Cry_30_Rh850Icus_IsLengthInBytesOfCmacAes128VerConfig(tmpContextPtr) == TRUE)
    && (MacLength > CRY_30_RH850ICUS_MAC_LENGTH))
  {
    /* No action because no DET */
  }
  /* Check parameter MacLength */
  else if ((Cry_30_Rh850Icus_IsLengthInBytesOfCmacAes128VerConfig(tmpContextPtr) == FALSE)
    && (MacLength > (CRY_30_RH850ICUS_MAC_LENGTH * CRY_30_RH850ICUS_BITS_PER_BYTE)))
  {
    /* No action because no DET */
  }
  else
  {
    /* ----- Implementation ----------------------------------------------- */
# if (CRY_30_RH850ICUS_TIMEOUT_API == STD_ON)
    /* #20 If Timeout-API is enabled, inform Timeout-API about current location. */
    Cry_30_Rh850Icus_GetTimeoutApiLocationCalloutOfGeneralOfPCConfig()(CRY_SHE_TO_SERVICE_CMAC_VERIFY, CRY_SHE_TO_SECTION_FINISH_SERVICE);
    Cry_30_Rh850Icus_TimeoutApiService = CRY_SHE_TO_SERVICE_CMAC_VERIFY;
# endif
# if ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_OFF )
    /* #31 Check if local status is UPDATE or START. */
    if ( (Cry_30_Rh850Icus_CmacAes128Ver_Status == CRY_30_RH850ICUS_STATE_UPDATE) || (Cry_30_Rh850Icus_CmacAes128Ver_Status == CRY_30_RH850ICUS_STATE_START) )
    {
      /* #32 Set local status to PENDING_FINISH. */
      Cry_30_Rh850Icus_CmacAes128Ver_Status = CRY_30_RH850ICUS_STATE_PENDING_FINISH;
      /* #33 Store parameters to buffer. */
      Cry_30_Rh850Icus_CmacAes128Ver_Buffer.contextPtr = tmpContextPtr;
      Cry_30_Rh850Icus_CmacAes128Ver_Buffer.MacPtr = MacPtr;
      Cry_30_Rh850Icus_CmacAes128Ver_Buffer.MacLength = MacLength;
      Cry_30_Rh850Icus_CmacAes128Ver_Buffer.resultPtr = resultPtr;
      retVal = CSM_E_OK;
    }
# else
    /* #41 Call the internal finish function. */
    retVal = Cry_30_Rh850Icus_CmacAes128VerFinishInternal(tmpContextPtr, MacPtr, MacLength, resultPtr); /* SBSW_CRY_FCTCALL_PTRFORWARDING */
# endif
  }

# if ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_ON )
  /* #50 If any error occured, and global state is in start or update, cancel SHE command and set global state to idle (in sync mode). */
  if ( (retVal != CSM_E_OK) &&
    ((Cry_30_Rh850Icus_ServiceState == CRY_30_RH850ICUS_SERVICE_CMACAES128VER_UPDATE) || (Cry_30_Rh850Icus_ServiceState == CRY_30_RH850ICUS_SERVICE_CMACAES128VER_START)))
  {
    Cry_30_Rh850Icus_CancelCommand();
    Cry_30_Rh850Icus_ServiceState = CRY_30_RH850ICUS_SERVICE_IDLE;
  }
# endif

  return retVal;
} /* Cry_30_Rh850Icus_CmacAes128VerFinish() */ /* PRQA S 6080 */ /* MD_MSR_STMIF */

# define CRY_30_RH850ICUS_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#endif /* ( CRY_30_RH850ICUS_CMACAES128VERCONFIG == STD_ON ) */

/**********************************************************************************************************************
 *  END OF FILE: CRY_30_RH850ICUS_CMACAES128VER.C
 **********************************************************************************************************************/

