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
/*!        \file  Cry_30_Rh850Icus_AesDecrypt128.c
 *        \brief  Implements the CRY AesDecrypt128 API for the ASR CSM.
 *
 *      \details  -
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Refer to the module's header file.
 *********************************************************************************************************************/

#define CRY_30_RH850ICUS_AESDECRYPT128_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/

#include "Cry_30_Rh850Icus.h"
#include "Csm_Cbk.h"
#include "Cry_30_Rh850Icus_CommonUtil.h"
#include "Cry_30_Rh850Icus_Hw.h"

#if ( CRY_30_RH850ICUS_AESDECRYPT128CONFIG == STD_ON )
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
  P2CONST( Cry_30_Rh850Icus_AesDecrypt128ConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) contextPtr; /*<! Holds a pointer to the configuration of this service. */
  P2CONST( Csm_SymKeyType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) keyPtr;   /*<! Holds a pointer to the key which has to be used during the symmetrical decryption. */
  P2CONST( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) InitVectorPtr;     /*<! Holds a pointer to the initialization vector which has to be used during the symmetrical decryption. */
  uint32 InitVectorLength;                                           /*<! Holds the length of the initialization vector in bytes. */
  P2CONST( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) cipherTextPtr;     /*<! Holds a pointer to the data for which a decrypted text shall be computed. */
  uint32 cipherTextLength;                                           /*<! Contains the number of bytes for which the decrypted text shall be computed. */
  P2VAR( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) plainTextPtr;        /*<! Buffer for Holds a pointer to the memory location which will hold the decrypted text. */
  P2VAR( uint32, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) plainTextLengthPtr; /*<! Holds a pointer to the memory location in which the length information is stored. */
} Cry_30_Rh850Icus_AesDecrypt128_BufferType;
# endif /* ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_OFF ) */

/**********************************************************************************************************************
 *  LOCAL DATA PROTOTYPES
 **********************************************************************************************************************/

# if ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_OFF )
#  define CRY_30_RH850ICUS_START_SEC_VAR_NOINIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! Buffer containing the data used during the service execution */
CRY_30_RH850ICUS_LOCAL VAR(Cry_30_Rh850Icus_AesDecrypt128_BufferType, CRY_30_RH850ICUS_VAR_NOINIT) Cry_30_Rh850Icus_AesDecrypt128_Buffer; /* PRQA S 0779 */ /* MD_MSR_5.1_779 */

#  define CRY_30_RH850ICUS_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define CRY_30_RH850ICUS_START_SEC_VAR_NOINIT_8BIT
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! State of the service */
CRY_30_RH850ICUS_LOCAL VAR(uint8, CRY_30_RH850ICUS_VAR_NOINIT) Cry_30_Rh850Icus_AesDecrypt128_Status; /* PRQA S 0779 */ /* MD_MSR_5.1_779 */

#  define CRY_30_RH850ICUS_STOP_SEC_VAR_NOINIT_8BIT
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
# endif /* ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_OFF ) */

/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 **********************************************************************************************************************/

# define CRY_30_RH850ICUS_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_AesDecrypt128StartInternal()
 **********************************************************************************************************************/
/*! \brief         Function starts the symmetrical decryption service.
 *  \details       The function starts the service. The keyId is stored and if the keyPtr contains a plain key, the
 *                 key is loaded to the RAM key slot.
 *  \param[in]     contextPtr       Holds a pointer to the configuration of this service.
 *  \param[in]     keyPtr           Holds a pointer to the key which has to be used during the symmetrical decryption.
 *                                  The keyPtr can either contain a plaintext key (keyPtr.length = 16) or a
 *                                  keyId (keyPtr.length = 1).
 *  \param[in]     InitVectorPtr    Holds a pointer to the initialization vector which has to be used
 *                                  during the symmetrical decryption.
 *  \param[in]     InitVectorLength Holds the length of the initialization vector in Byte.
 *  \return        CSM_E_OK         Request successful.
 *  \return        CSM_E_NOT_OK     Request failed.
 *  \return        CSM_E_BUSY       Request failed, service is still busy.
 *  \pre           Service is idle.
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CRY_30_RH850ICUS_AESDECRYPT128CONFIG
 *  \note          It is important to call the Finish-Function of this service after a successful call of this function
 *                 (CSM_E_OK). A call of the Update-Function between them is allowed.
 *                 Attention: If the Finish-function is never called, the SHE is blocked for all other services.
 **********************************************************************************************************************/
CRY_30_RH850ICUS_LOCAL FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_AesDecrypt128StartInternal(
  P2CONST( Cry_30_Rh850Icus_AesDecrypt128ConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) contextPtr,
  P2CONST( Csm_SymKeyType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) keyPtr,
  P2CONST( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) InitVectorPtr,
  uint32 InitVectorLength );

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_AesDecrypt128UpdateInternal()
 **********************************************************************************************************************/
/*! \brief         Function updates the symmetrical decryption service.
 *  \details       The function updates the service. The command to decrypt the ciphertext is send to the hardware.
 *                 If no error occured, the plainTextLengthPtr gets updated with the length of the decrypted text.
 *  \param[in]     contextPtr         Holds a pointer to the configuration of this service.
 *  \param[in]     cipherTextPtr      Holds a pointer to the data for which a decrypted text shall be computed.
 *  \param[in]     cipherTextLength   Contains the number of bytes for which the decrypted text shall be computed.
 *                                    Only values which are the same or a multiple of the blocksize (16 bytes) are
 *                                    allowed.
 *  \param[out]    plainTextPtr       Holds a pointer to the memory location which will hold the decrypted text.
 *  \param[in,out] plainTextLengthPtr Holds a pointer to the memory location in which the length information is
 *                                    stored. On calling this function, this parameter shall contain the size of the
 *                                    provided buffer. The buffer size must have at least the size of the cipherTextLength.
 *                                    When the request has finished, the length of the returned decrypted text is stored.
 *  \return        CSM_E_OK           Request successful.
 *  \return        CSM_E_NOT_OK       Request failed.
 *  \return        CSM_E_SMALL_BUFFER The provided buffer is too small to store the result.
 *  \pre           Service is started.
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CRY_30_RH850ICUS_AESDECRYPT128CONFIG
 *  \note          The driver does not support multiple update calls.
 *  \trace         SPEC-2919327
 **********************************************************************************************************************/
CRY_30_RH850ICUS_LOCAL FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_AesDecrypt128UpdateInternal(
  P2CONST( Cry_30_Rh850Icus_AesDecrypt128ConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) contextPtr,
  P2CONST( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) cipherTextPtr,
  uint32 cipherTextLength,
  P2VAR( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) plainTextPtr,
  P2VAR( uint32, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) plainTextLengthPtr );

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_AesDecrypt128FinishInternal()
 **********************************************************************************************************************/
/*! \brief         Function finishes the symmetrical decryption service.
 *  \details       Finishes the service. If successful, SHE is released and global state is set to idle.
 *  \param[in]     plainTextLengthPtr Holds a pointer to the memory location in which the length information is
 *                                    stored. On calling this function, this parameter shall contain the size of the
 *                                    provided buffer. When the request has finished, the length of the returned
 *                                    decrypted text shall be stored.
 *  \return        CSM_E_OK           Request successful.
 *  \return        CSM_E_NOT_OK       Request failed.
 *  \pre           Service is started.
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CRY_30_RH850ICUS_AESDECRYPT128CONFIG
 *  \note          This function must only be called one after a succesful call of the corresponding Start-Function of
 *                 this service. It is not allowed to call this function multiple times even if the return value is not
 *                 CSM_E_OK.
 *  \trace         SPEC-2919205
 **********************************************************************************************************************/
CRY_30_RH850ICUS_LOCAL FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_AesDecrypt128FinishInternal(
  P2VAR(uint32, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) plainTextLengthPtr );

/**********************************************************************************************************************
*  Cry_30_Rh850Icus_AesDecrypt128IvCopyToWorkspace()
**********************************************************************************************************************/
/*! \brief         Function stores the initialization vector to the workspace.
 *  \details       The function verifies if the symmetrical blockmode is CBC. In case of CBC, the initialization
 *                 vector is stored to the workspace (if the IV size is correct).
 *  \param[in]     contextPtr        Holds a pointer to the contextPtr of this service.
 *  \param[in]     workSpaceIvPtr    Holds a pointer to the initialization vector of the workspace of this service.
 *  \param[in]     InitVectorPtr     Holds a pointer to the initialization vector which has to be used
 *                                   during the symmetrical decryption.
 *  \param[in]     InitVectorLength  Holds the length of the initialization vector.
 *  \return        CSM_E_OK          Request successful (not in CBC mode or in CBC mode with valid IV length).
 *  \return        CSM_E_NOT_OK      Request failed (in CBC mode with wrong IV length).
 *  \pre           Service is started.
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CRY_30_RH850ICUS_AESDECRYPT128CONFIG
**********************************************************************************************************************/
CRY_30_RH850ICUS_LOCAL_INLINE FUNC(Csm_ReturnType, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_AesDecrypt128IvCopyToWorkspace(
  P2CONST(Cry_30_Rh850Icus_AesDecrypt128ConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) contextPtr,
  P2VAR(uint32, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) workSpaceIvPtr,
  P2CONST(uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) InitVectorPtr,
  uint32 InitVectorLength);

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 **********************************************************************************************************************/

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_AesDecrypt128StartInternal()
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
CRY_30_RH850ICUS_LOCAL FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_AesDecrypt128StartInternal(
  P2CONST(Cry_30_Rh850Icus_AesDecrypt128ConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) contextPtr,
  P2CONST( Csm_SymKeyType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) keyPtr,
  P2CONST( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) InitVectorPtr,
  uint32 InitVectorLength )
{
  /* ----- Local Variables ---------------------------------------------- */
  Csm_ReturnType retVal = CSM_E_NOT_OK;

  P2VAR( Cry_30_Rh850Icus_AesDecrypt128WorkSpaceType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) workSpacePtr = Cry_30_Rh850Icus_GetAddrAesDecrypt128WorkSpace(Cry_30_Rh850Icus_GetAesDecrypt128WorkSpaceIdxOfAesDecrypt128Config(contextPtr));

  /* ----- Implementation ----------------------------------------------- */
  /* #10 Check if service is idle (no other service is running). */
  SchM_Enter_Cry_30_Rh850Icus_CRY_30_RH850ICUS_EXCLUSIVE_AREA();
  if (Cry_30_Rh850Icus_ServiceState == CRY_30_RH850ICUS_SERVICE_IDLE)
  {
    /* #20 Set state to start. */
    Cry_30_Rh850Icus_ServiceState = CRY_30_RH850ICUS_SERVICE_AESDECRYPT128_START;
    SchM_Exit_Cry_30_Rh850Icus_CRY_30_RH850ICUS_EXCLUSIVE_AREA();

    /* #30 Call subfunction to process the key. */
    retVal = Cry_30_Rh850Icus_ProcessKeyToWorkspace(keyPtr, &workSpacePtr->keyID, Cry_30_Rh850Icus_GetKeyIdTypeOfAesDecrypt128Config(contextPtr)); /* SBSW_CRY_FCTCALL_PTRFORWARDING */
    if (retVal == CSM_E_OK)
    {
      /* #31 Call subfunction to store the IV. */
      retVal = Cry_30_Rh850Icus_AesDecrypt128IvCopyToWorkspace(contextPtr, workSpacePtr->IV, InitVectorPtr, InitVectorLength); /* SBSW_CRY_FCTCALL_PTRFORWARDING_WORKSPACE */
    }

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
} /* Cry_30_Rh850Icus_AesDecrypt128StartInternal() */

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_AesDecrypt128UpdateInternal()
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
 */
CRY_30_RH850ICUS_LOCAL FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_AesDecrypt128UpdateInternal(
  P2CONST(Cry_30_Rh850Icus_AesDecrypt128ConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) contextPtr,
  P2CONST( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) cipherTextPtr,
  uint32 cipherTextLength,
  P2VAR( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) plainTextPtr,
  P2VAR( uint32, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) plainTextLengthPtr )
{
  /* ----- Local Variables ---------------------------------------------- */
  Csm_ReturnType retVal = CSM_E_NOT_OK;

  /* ----- Implementation ----------------------------------------------- */
# if ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_ON )
  /* #10 Check if service has been started. */
  if (Cry_30_Rh850Icus_ServiceState == CRY_30_RH850ICUS_SERVICE_AESDECRYPT128_START)
# endif
  {
# if (CRY_30_RH850ICUS_INVALID_MEMORY_DETECTION == STD_ON) /* COV_CRY_INVALID_MEMORY_DETECTION */
    /* #15 If INVALID_MEMORY_DETECTION is enabled: */
    /* #20 ExtensionPart: Call subfunction to check if cipherText needs to be copied to global buffer. */
    boolean inputNeedsCopy = (Cry_30_Rh850Icus_Hw_IsMemoryValid(cipherTextPtr, cipherTextLength) == FALSE); /* SBSW_CRY_FCTCALL_PTRFORWARDING_INVALID_MEMORY */
    /* #22 ExtensionPart: Call subfunction to check if plainText needs to be copied to global buffer. */
    boolean outputNeedsCopy = (Cry_30_Rh850Icus_Hw_IsMemoryValid(plainTextPtr, *plainTextLengthPtr) == FALSE); /* SBSW_CRY_FCTCALL_PTRFORWARDING_INVALID_MEMORY */
    P2CONST(uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) inputPtr = cipherTextPtr;
    P2VAR(uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) ouputPtr = plainTextPtr;
    if (inputNeedsCopy == TRUE)
    {
      /* #21 Copy cipherText to global buffer which is correct located in the memory. */
      Cry_30_Rh850Icus_CopyByteArrayToWordArray(cipherTextPtr, Cry_30_Rh850Icus_DataBuffer, cipherTextLength); /* SBSW_CRY_FCTCALL_PTRFORWARDING_BUFFERED_DATA */
      inputPtr = (P2CONST(uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR))Cry_30_Rh850Icus_DataBuffer; /* PRQA S 0310 */ /* MD_CRY_0310_ALIGNED_ARRAY */
    }
    if (outputNeedsCopy == TRUE)
    {
      /* #23 Copy plainText to global buffer which is correct located in the memory. */
      ouputPtr = (P2VAR(uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR))Cry_30_Rh850Icus_DataBuffer; /* PRQA S 0310 */ /* MD_CRY_0310_ALIGNED_ARRAY */
    }
    /* #25 ExtensionPart: Call subfunction to update the AES-128 Decryption primitive (send command to hw). */
    retVal = Cry_30_Rh850Icus_Hw_AesDecrypt128UpdateInternal(contextPtr, inputPtr, cipherTextLength, ouputPtr, plainTextLengthPtr); /* SBSW_CRY_FCTCALL_PTRFORWARDING_BUFFERED_DATA */
    if (outputNeedsCopy == TRUE)
    {
      Cry_30_Rh850Icus_CopyWordArrayToByteArray(Cry_30_Rh850Icus_DataBuffer, plainTextPtr, cipherTextLength); /* SBSW_CRY_FCTCALL_PTRFORWARDING */
    }
# else
    /* #25 ExtensionPart: Call subfunction to update the AES-128 Decryption primitive (send command to hw). */
    retVal = Cry_30_Rh850Icus_Hw_AesDecrypt128UpdateInternal(contextPtr, cipherTextPtr, cipherTextLength, plainTextPtr, plainTextLengthPtr); /* SBSW_CRY_FCTCALL_PTRFORWARDING */
# endif

    /* #30 If no errors occured, set state to Update. */
    if (retVal == CSM_E_OK)
    {
      Cry_30_Rh850Icus_ServiceState = CRY_30_RH850ICUS_SERVICE_AESDECRYPT128_UPDATE;
    }
  }

  return retVal;
} /* Cry_30_Rh850Icus_AesDecrypt128UpdateInternal() */

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_AesDecrypt128FinishInternal()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 */
CRY_30_RH850ICUS_LOCAL FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_AesDecrypt128FinishInternal(
  P2VAR(uint32, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) plainTextLengthPtr )
{
  /* ----- Local Variables ---------------------------------------------- */
  Csm_ReturnType retVal = CSM_E_NOT_OK;

  /* ----- Implementation ----------------------------------------------- */
  /* #10 Check if service has been updated. */
  if (Cry_30_Rh850Icus_ServiceState == CRY_30_RH850ICUS_SERVICE_AESDECRYPT128_UPDATE)
  {
    retVal = CSM_E_OK;
    *plainTextLengthPtr = 0u; /* SBSW_CRY_WRITE_PTR */

    /* #20 Send cancel command to SHE. */
    Cry_30_Rh850Icus_CancelCommand();
    /* #30 Reset service state to idle. */
    Cry_30_Rh850Icus_ServiceState = CRY_30_RH850ICUS_SERVICE_IDLE;
  }

  return retVal;
} /* Cry_30_Rh850Icus_AesDecrypt128FinishInternal() */

/**********************************************************************************************************************
*  Cry_30_Rh850Icus_AesDecrypt128IvCopyToWorkspace()
**********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 */
CRY_30_RH850ICUS_LOCAL_INLINE FUNC(Csm_ReturnType, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_AesDecrypt128IvCopyToWorkspace(
  P2CONST(Cry_30_Rh850Icus_AesDecrypt128ConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) contextPtr,
  P2VAR(uint32, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) workSpaceIvPtr,
  P2CONST(uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) InitVectorPtr,
  uint32 InitVectorLength)
{
  /* ----- Local Variables ---------------------------------------------- */
  Csm_ReturnType retVal = CSM_E_NOT_OK;

  /* ----- Implementation ----------------------------------------------- */
  /* #10 Check if blockmode is CBC. */
  if (Cry_30_Rh850Icus_GetBlockModeOfAesDecrypt128Config(contextPtr) == CRY_30_RH850ICUS_AESBLOCKMODE_CBC)
  {
    /* #11 Check if IV length is valid. */
    if (InitVectorLength == CRY_30_RH850ICUS_AESDECRYPT128_IVSIZE)
    {
      /* #12 Store initialization vector. */
      Cry_30_Rh850Icus_CopyByteArrayToWordArray(InitVectorPtr, workSpaceIvPtr, CRY_30_RH850ICUS_AESDECRYPT128_IVSIZE); /* SBSW_CRY_FCTCALL_PTRFORWARDING */
      retVal = CSM_E_OK;
    }
  }
  else
  {
    /* Set return value to CSM_E_OK (IV not needed). */
    retVal = CSM_E_OK;
  }

  return retVal;
} /* Cry_30_Rh850Icus_AesDecrypt128IvCopyToWorkspace() */

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 **********************************************************************************************************************/

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_AesDecrypt128Init()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
FUNC( void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_AesDecrypt128Init( void )
{
  /* #10 Asynchronous function handling: Set status state to idle. */
# if ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_OFF )
  Cry_30_Rh850Icus_AesDecrypt128_Status = CRY_30_RH850ICUS_STATE_IDLE;
# endif
} /* Cry_30_Rh850Icus_AesDecrypt128Init() */

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_AesDecrypt128MainFunction()
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
FUNC(void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_AesDecrypt128MainFunction( void )
{
  /* #10 In case of asynchronous service handling: */
# if ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_OFF )
  Csm_ReturnType retVal;

  /* #20 Analyse status state machine. */
  switch(Cry_30_Rh850Icus_AesDecrypt128_Status)
  {
    /* #30 State machine has pending start status. */
    case CRY_30_RH850ICUS_STATE_PENDING_START:
    {
      /* #31 Call internal start service method. */
      retVal = Cry_30_Rh850Icus_AesDecrypt128StartInternal( /* SBSW_CRY_FCTCALL_PTRFORWARDING_BUFFERED */
        Cry_30_Rh850Icus_AesDecrypt128_Buffer.contextPtr,
        Cry_30_Rh850Icus_AesDecrypt128_Buffer.keyPtr,
        Cry_30_Rh850Icus_AesDecrypt128_Buffer.InitVectorPtr,
        Cry_30_Rh850Icus_AesDecrypt128_Buffer.InitVectorLength );

      /* #32 If start method was CSM_E_BUSY, hold service in state, for next main loop. */
      if (retVal != CSM_E_BUSY)
      {
        /* #33 Update state if start executed with CSM_E_OK or CSM_E_NOT_OK. */
        if (retVal == CSM_E_OK)
        {
          Cry_30_Rh850Icus_AesDecrypt128_Status = CRY_30_RH850ICUS_STATE_START;
        }
        else
        {
          Cry_30_Rh850Icus_AesDecrypt128_Status = CRY_30_RH850ICUS_STATE_IDLE;
        }
        /* #34 Notify via callback if start method executed with CSM_E_OK or CSM_E_NOT_OK. */
        Csm_SymDecryptCallbackNotification(retVal);
      }
      break;
    }
    /* #40 State machine has pending update status. */
    case CRY_30_RH850ICUS_STATE_PENDING_UPDATE:
    {
      /* #41 Call internal update service method. */
      retVal = Cry_30_Rh850Icus_AesDecrypt128UpdateInternal( /* SBSW_CRY_FCTCALL_PTRFORWARDING_BUFFERED */
        Cry_30_Rh850Icus_AesDecrypt128_Buffer.contextPtr,
        Cry_30_Rh850Icus_AesDecrypt128_Buffer.cipherTextPtr,
        Cry_30_Rh850Icus_AesDecrypt128_Buffer.cipherTextLength,
        Cry_30_Rh850Icus_AesDecrypt128_Buffer.plainTextPtr,
        Cry_30_Rh850Icus_AesDecrypt128_Buffer.plainTextLengthPtr );

      /* #42 Set internal status state to next stage depending on the result of the update call. */
      if (retVal == CSM_E_OK)
      {
        Cry_30_Rh850Icus_AesDecrypt128_Status = CRY_30_RH850ICUS_STATE_UPDATE;
      }
      else
      {
        Cry_30_Rh850Icus_AesDecrypt128_Status = CRY_30_RH850ICUS_STATE_START;
      }

      /* #43 Send callback notification. */
      Csm_SymDecryptCallbackNotification( retVal );
      break;
    }
    /* #50 State machine has pending finish status. */
    case CRY_30_RH850ICUS_STATE_PENDING_FINISH:
    {
      /* #51 Call internal finish service method. */
      retVal = Cry_30_Rh850Icus_AesDecrypt128FinishInternal( /* SBSW_CRY_FCTCALL_PTRFORWARDING_BUFFERED */
        Cry_30_Rh850Icus_AesDecrypt128_Buffer.plainTextLengthPtr );

      /* #52 If finish method fails, cancel command on SHE and reset global state (next service can run). */
      if (retVal != CSM_E_OK)
      {
        Cry_30_Rh850Icus_CancelCommand();
        Cry_30_Rh850Icus_ServiceState = CRY_30_RH850ICUS_SERVICE_IDLE;
      }

      /* #53 Set internal status state to IDLE. */
      Cry_30_Rh850Icus_AesDecrypt128_Status = CRY_30_RH850ICUS_STATE_IDLE;

      /* #54 Send callback and finish notification. */
      Csm_SymDecryptCallbackNotification( retVal );
      Csm_SymDecryptServiceFinishNotification();
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
} /* Cry_30_Rh850Icus_AesDecrypt128MainFunction() */

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_AesDecrypt128Start()
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
FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_AesDecrypt128Start(
  P2CONST( void, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) cfgPtr,
  P2CONST( Csm_SymKeyType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) keyPtr,
  P2CONST( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) InitVectorPtr,
  uint32 InitVectorLength)
{
  /* ----- Local Variables ---------------------------------------------- */
  Csm_ReturnType retVal = CSM_E_NOT_OK;
  P2CONST(Cry_30_Rh850Icus_AesDecrypt128ConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) tmpContextPtr =
    (P2CONST(Cry_30_Rh850Icus_AesDecrypt128ConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR))cfgPtr;

  /* ----- Development Error Checks ------------------------------------- */
  /* #10 Check plausibility of input parameters. */
# if (CRY_30_RH850ICUS_DEV_ERROR_DETECT == STD_ON)
  /* Check if input parameter cfgPtr or keyPtr or InitVectorPtr is a Null-Pointer */
  if ( (cfgPtr == NULL_PTR) || (keyPtr == NULL_PTR) || (InitVectorPtr == NULL_PTR) )
  {
    /* No action because no DET */
  }
  else if (Cry_30_Rh850Icus_GetAesDecrypt128WorkSpaceIdxOfAesDecrypt128Config(tmpContextPtr)
    >= Cry_30_Rh850Icus_GetSizeOfAesDecrypt128WorkSpace())
  {
    /* No action because no DET */
  }
  /* Check if InitVector has a valid value */
  else if ((InitVectorLength != CRY_30_RH850ICUS_AESDECRYPT128_IVSIZE) && (InitVectorLength != 0u))
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
    Cry_30_Rh850Icus_GetTimeoutApiLocationCalloutOfGeneralOfPCConfig()(CRY_SHE_TO_SERVICE_AES_DECRYPT, CRY_SHE_TO_SECTION_START_SERVICE);
    Cry_30_Rh850Icus_TimeoutApiService = CRY_SHE_TO_SERVICE_AES_DECRYPT;
# endif
# if ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_OFF )
    SchM_Enter_Cry_30_Rh850Icus_CRY_30_RH850ICUS_EXCLUSIVE_AREA();
    /* #31 Check if local status is IDLE. */
    if (Cry_30_Rh850Icus_AesDecrypt128_Status == CRY_30_RH850ICUS_STATE_IDLE)
    {
      /* #32 Set internal status state to PENDING START. */
      Cry_30_Rh850Icus_AesDecrypt128_Status = CRY_30_RH850ICUS_STATE_PENDING_START;
      /* #33 Store parameters to buffer. */
      Cry_30_Rh850Icus_AesDecrypt128_Buffer.contextPtr = tmpContextPtr;
      Cry_30_Rh850Icus_AesDecrypt128_Buffer.keyPtr = keyPtr;
      Cry_30_Rh850Icus_AesDecrypt128_Buffer.InitVectorPtr = InitVectorPtr;
      Cry_30_Rh850Icus_AesDecrypt128_Buffer.InitVectorLength = InitVectorLength;
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
    retVal = Cry_30_Rh850Icus_AesDecrypt128StartInternal(tmpContextPtr, keyPtr, InitVectorPtr, InitVectorLength); /* SBSW_CRY_FCTCALL_PTRFORWARDING */
# endif
  }
  return retVal;
} /* Cry_30_Rh850Icus_AesDecrypt128Start() */

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_AesDecrypt128Update()
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
FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_AesDecrypt128Update(
  P2CONST( void, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) cfgPtr,
  P2CONST( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) cipherTextPtr,
  uint32 cipherTextLength,
  P2VAR( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) plainTextPtr,
  P2VAR( uint32, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) plainTextLengthPtr)
{
  /* ----- Local Variables ---------------------------------------------- */
  Csm_ReturnType retVal = CSM_E_NOT_OK;
  P2CONST(Cry_30_Rh850Icus_AesDecrypt128ConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) tmpContextPtr =
    (P2CONST(Cry_30_Rh850Icus_AesDecrypt128ConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR))cfgPtr;

  /* ----- Development Error Checks ------------------------------------- */
  /* #10 Check plausibility of input parameters. */
# if (CRY_30_RH850ICUS_DEV_ERROR_DETECT == STD_ON)
  /* Check if input parameter cfgPtr or cipherTextPtr or plainTextPtr or plainTextLengthPtr is a Null-Pointer */
  if ( (cfgPtr == NULL_PTR) || (cipherTextPtr == NULL_PTR) || (plainTextPtr == NULL_PTR) ||
    (plainTextLengthPtr == NULL_PTR) )
  {
    /* No action because no DET */
  }
  else if (Cry_30_Rh850Icus_GetAesDecrypt128WorkSpaceIdxOfAesDecrypt128Config(tmpContextPtr)
    >= Cry_30_Rh850Icus_GetSizeOfAesDecrypt128WorkSpace())
  {
    /* No action because no DET */
  }
  /* Check if cipherTextLength is greater 0 and a multiple of the blocksize */
  else if ( (cipherTextLength == 0u) || ((cipherTextLength & (CRY_30_RH850ICUS_AES128_BLOCKSIZE - 1u)) != 0u))
  {
    /* No action because no DET */
  }
  /* Check if provided buffer is big enough */
  else if (cipherTextLength > (*plainTextLengthPtr))
  {
    retVal = CSM_E_SMALL_BUFFER;
  }
  else
# endif
# if (CRY_30_RH850ICUS_INVALID_MEMORY_DETECTION == STD_ON) /* COV_CRY_INVALID_MEMORY_DETECTION */
  /* #15 Check if plainTextPtr and cipherTextPtr are correct located or if it is possible to copy it later (if INVALID_MEMORY_DETECTION is enabled). */
  if (Cry_30_Rh850Icus_Hw_IsMemoryUsable(cipherTextPtr, cipherTextLength) == FALSE) /* SBSW_CRY_FCTCALL_PTRFORWARDING_INVALID_MEMORY */
  {
    /* Nothing to do, retVal initialized with CSM_E_NOT_OK. */
  }
  else if (Cry_30_Rh850Icus_Hw_IsMemoryUsable(plainTextPtr, *plainTextLengthPtr) == FALSE) /* SBSW_CRY_FCTCALL_PTRFORWARDING_INVALID_MEMORY */
  {
    /* Nothing to do, retVal initialized with CSM_E_NOT_OK. */
  }
  else
# endif
  {
    /* ----- Implementation ----------------------------------------------- */
# if (CRY_30_RH850ICUS_TIMEOUT_API == STD_ON)
    /* #20 If Timeout-API is enabled, inform Timeout-API about current location. */
    Cry_30_Rh850Icus_GetTimeoutApiLocationCalloutOfGeneralOfPCConfig()(CRY_SHE_TO_SERVICE_AES_DECRYPT, CRY_SHE_TO_SECTION_UPDATE_SERVICE);
    Cry_30_Rh850Icus_TimeoutApiService = CRY_SHE_TO_SERVICE_AES_DECRYPT;
# endif
# if ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_OFF )
    /* #31 Check if local status is START. */
    if (Cry_30_Rh850Icus_AesDecrypt128_Status == CRY_30_RH850ICUS_STATE_START)
    {
      /* #32 Set internal status state to PENDING UPDATE. */
      Cry_30_Rh850Icus_AesDecrypt128_Status = CRY_30_RH850ICUS_STATE_PENDING_UPDATE;
      /* #33 Store parameters to buffer. */
      Cry_30_Rh850Icus_AesDecrypt128_Buffer.contextPtr = tmpContextPtr;
      Cry_30_Rh850Icus_AesDecrypt128_Buffer.cipherTextPtr = cipherTextPtr;
      Cry_30_Rh850Icus_AesDecrypt128_Buffer.cipherTextLength = cipherTextLength;
      Cry_30_Rh850Icus_AesDecrypt128_Buffer.plainTextPtr = plainTextPtr;
      Cry_30_Rh850Icus_AesDecrypt128_Buffer.plainTextLengthPtr = plainTextLengthPtr;
      /* #34 Always return CSM_E_OK. */
      retVal = CSM_E_OK;
    }
# else
    /* #41 Call the internal update function. */
    retVal = Cry_30_Rh850Icus_AesDecrypt128UpdateInternal(tmpContextPtr, cipherTextPtr, cipherTextLength, plainTextPtr, plainTextLengthPtr); /* SBSW_CRY_FCTCALL_PTRFORWARDING */
# endif
  }
  return retVal;
} /* Cry_30_Rh850Icus_AesDecrypt128Update() */ /* PRQA S 6080 */ /* MD_MSR_STMIF */

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_AesDecrypt128Finish()
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
FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_AesDecrypt128Finish(
  P2CONST( void, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) cfgPtr,
  P2VAR( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) plainTextPtr, /* PRQA S 3673 */ /* MD_CRY_3673_POINTERTOCONST */
  P2VAR( uint32, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) plainTextLengthPtr)
{
  /* ----- Local Variables ---------------------------------------------- */
  Csm_ReturnType retVal = CSM_E_NOT_OK;

  /* ----- Development Error Checks ------------------------------------- */
  /* #10 Check plausibility of input parameters. */
# if (CRY_30_RH850ICUS_DEV_ERROR_DETECT == STD_ON)
  /* Check if input parameter cfgPtr or plainTextPtr or plainTextLengthPtr is a Null-Pointer */
  if ( (cfgPtr == NULL_PTR) || (plainTextPtr == NULL_PTR) || (plainTextLengthPtr == NULL_PTR) )
  {
    /* No action because no DET */
  }
  else if (Cry_30_Rh850Icus_GetAesDecrypt128WorkSpaceIdxOfAesDecrypt128Config((P2CONST(Cry_30_Rh850Icus_AesDecrypt128ConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR))cfgPtr)
    >= Cry_30_Rh850Icus_GetSizeOfAesDecrypt128WorkSpace())
  {
    /* No action because no DET */
  }
  else
# endif
  {
    /* ----- Implementation ----------------------------------------------- */
# if (CRY_30_RH850ICUS_TIMEOUT_API == STD_ON)
    /* #20 If Timeout-API is enabled, inform Timeout-API about current location. */
    Cry_30_Rh850Icus_GetTimeoutApiLocationCalloutOfGeneralOfPCConfig()(CRY_SHE_TO_SERVICE_AES_DECRYPT, CRY_SHE_TO_SECTION_FINISH_SERVICE);
    Cry_30_Rh850Icus_TimeoutApiService = CRY_SHE_TO_SERVICE_AES_DECRYPT;
# endif
# if ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_OFF )
    /* #31 Check if local status is UPDATE or START. */
    if ( (Cry_30_Rh850Icus_AesDecrypt128_Status == CRY_30_RH850ICUS_STATE_UPDATE) || (Cry_30_Rh850Icus_AesDecrypt128_Status == CRY_30_RH850ICUS_STATE_START) )
    {
      /* #32 Set local status to PENDING_FINISH. */
      Cry_30_Rh850Icus_AesDecrypt128_Status = CRY_30_RH850ICUS_STATE_PENDING_FINISH;
      /* #33 Store parameters to buffer. */
      Cry_30_Rh850Icus_AesDecrypt128_Buffer.plainTextLengthPtr = plainTextLengthPtr;
      retVal = CSM_E_OK;
    }
# else
    /* #41 Call the internal finish function. */
    retVal = Cry_30_Rh850Icus_AesDecrypt128FinishInternal(plainTextLengthPtr); /* SBSW_CRY_FCTCALL_PTRFORWARDING */
# endif
  }

# if ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_ON )
  /* #50 If any error occured, and global state is in start or update, cancel SHE command and set global state to idle (in sync mode). */
  if ( (retVal != CSM_E_OK) &&
    ( (Cry_30_Rh850Icus_ServiceState == CRY_30_RH850ICUS_SERVICE_AESDECRYPT128_UPDATE) || (Cry_30_Rh850Icus_ServiceState == CRY_30_RH850ICUS_SERVICE_AESDECRYPT128_START) ) )
  {
    Cry_30_Rh850Icus_CancelCommand();
    Cry_30_Rh850Icus_ServiceState = CRY_30_RH850ICUS_SERVICE_IDLE;
  }
# endif
# if (CRY_30_RH850ICUS_DEV_ERROR_DETECT == STD_OFF)
  CRY_30_RH850ICUS_DUMMY_STATEMENT_CONST(cfgPtr); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
  CRY_30_RH850ICUS_DUMMY_STATEMENT(plainTextPtr); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif

  return retVal;
} /* Cry_30_Rh850Icus_AesDecrypt128Finish() */

# define CRY_30_RH850ICUS_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#endif /* ( CRY_30_RH850ICUS_AESDECRYPT128CONFIG == STD_ON ) */

/**********************************************************************************************************************
 *  END OF FILE: CRY_30_RH850ICUS_AESDECRYPT128.C
 **********************************************************************************************************************/

