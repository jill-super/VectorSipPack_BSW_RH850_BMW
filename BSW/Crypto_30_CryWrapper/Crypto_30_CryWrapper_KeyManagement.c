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
/*      \file  Crypto_30_CryWrapper_KeyManagement.c
 *      \brief  MICROSAR Crypto Driver (Crypto)
 *
 *      \details  Implementation of the key management of the MICROSAR Crypto Driver (Crypto)
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Refer to the module's header file.
 *********************************************************************************************************************/
#define CRYPTO_30_CRYWRAPPER_KEYMANAGEMENT_SOURCE
/* PRQA S 0777, 0779, 3453 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779, MD_MSR_19.7 */

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Crypto_30_CryWrapper.h"

#if ( CRYPTO_30_CRYWRAPPER_DEV_ERROR_REPORT == STD_ON )
# include "Det.h"
#endif

#include "Crypto_30_CryWrapper_Hw.h"

/**********************************************************************************************************************
 *  LOCAL CONSTANT MACROS
 *********************************************************************************************************************/
#if !defined (CRYPTO_30_CRYWRAPPER_LOCAL) /* COV_CRYPTO_30_CRYWRAPPER_LOCAL_DEFINE */
# define CRYPTO_30_CRYWRAPPER_LOCAL static
#endif

#if !defined (CRYPTO_30_CRYWRAPPER_LOCAL_INLINE) /* COV_CRYPTO_30_CRYWRAPPER_LOCAL_DEFINE */
# define CRYPTO_30_CRYWRAPPER_LOCAL_INLINE LOCAL_INLINE
#endif

/* PRQA S 3453 1 */ /*  MD_MSR_19.7 */
#define Crypto_30_CryWrapper_GetKeyElementWrittenLength(Index)        ((uint32)(((uint32)Crypto_30_CryWrapper_GetKeyStorage(Crypto_30_CryWrapper_GetKeyStorageWrittenLengthStartIdxOfKeyElements((Index))) << 8u) | Crypto_30_CryWrapper_GetKeyStorage(Crypto_30_CryWrapper_GetKeyStorageWrittenLengthStartIdxOfKeyElements((Index))+1)))
#define CRYPTO_30_CRYWRAPPER_SIZEOF_SHE_UPDATE_KEY                    64u
#define CRYPTO_30_CRYWRAPPER_SIZEOF_SHE_KEY                           16u

/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

#define CRYPTO_30_CRYWRAPPER_START_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  Crypto_30_CryWrapper_Local_KeyElementCopy()
 *********************************************************************************************************************/
/*! \brief         Copy key element
 *  \details       Copies a key element to another key element in the same crypto driver.
 *  \param[in]     elementIndexSrc              Holds the element index of the source key element. Has to be in bounds.
 *  \param[in]     elementIndexDst              Holds the element index of the destination key element. Has to be in bounds.
 *  \param[in]     cryptoKeyIdDst               Holds the identifier of the key.
 *  \return        E_OK                         Request successful.
 *                 E_NOT_OK                     Request failed.
 *                 CRYPTO_E_BUSY                Request failed, Crypto Driver Object is busy.
 *                 CRYPTO_E_KEY_READ_FAIL       Request failed, read access was denied.
 *                 CRYPTO_E_KEY_WRITE_FAIL      Request failed, write access was denied.
 *                 CRYPTO_E_KEY_EXTRACT_DENIED  Request failed, not allowed to extract key material.
 *                 CRYPTO_E_KEY_SIZE_MISMATCH   Request failed, the key element sizes are not compatible.
 *  \pre           -
 *  \context       TASK
 *  \reentrant     TRUE
 *  \synchronous   TRUE
 *********************************************************************************************************************/
CRYPTO_30_CRYWRAPPER_LOCAL FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_Local_KeyElementCopy(
  Crypto_30_CryWrapper_KeyElementsIterType elementIndexSrc,
  Crypto_30_CryWrapper_KeyElementsIterType elementIndexDst,
  uint32 cryptoKeyIdDst);

/**********************************************************************************************************************
 *  Crypto_30_CryWrapper_SetKeyState()
 *********************************************************************************************************************/
/*! \brief         Sets the state of a key.
 *  \details       The function sets the key state and respectively the key states of all associated key elements.
 *  \param[in]     cryptoKeyId           Holds the identifier of the key.
 *  \param[in]     mask                  State of the key, consistent of different flags.
 *  \pre           cryptoKeyId has to hold a valid identifier of a key
 *  \context       TASK
 *  \reentrant     TRUE
 *  \synchronous   TRUE
 *********************************************************************************************************************/
CRYPTO_30_CRYWRAPPER_LOCAL_INLINE FUNC(void, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_SetKeyState(
  uint32 cryptoKeyId,
  uint8 mask);

/**********************************************************************************************************************
 *  Crypto_30_CryWrapper_Local_KeyElementGet_Standard()
 *********************************************************************************************************************/
/*! \brief         Retrieves data to a key element.
 *  \details       -
 *  \param[in]     resultPtr        Pointer to the memory location where the data shall be stored.
 *  \param[in]     resultLengthPtr  Pointer to a variable which contains the size of the available buffer.
 *                                  After calling this function, the parameter contains the number of 
 *                                  bytes written to the buffer.
 *  \param[in]     elementIndex     Index of the Key element.
 *  \return        E_OK
 *                 E_NOT_OK
 *                 CRYPTO_E_SMALL_BUFFER
 *  \pre           elementIndex is a valid parameter.
 *  \context       TASK
 *  \reentrant     TRUE
 *  \synchronous   TRUE
 *********************************************************************************************************************/
CRYPTO_30_CRYWRAPPER_LOCAL_INLINE FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_Local_KeyElementGet_Standard(
  P2VAR(uint8, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) resultPtr,
  P2VAR(uint32, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) resultLengthPtr,
  Crypto_30_CryWrapper_KeyElementsIterType elementIndex);

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Crypto_30_CryWrapper_Local_KeyElementCopy()
 **********************************************************************************************************************/
/*!
 *
 * Internal comment removed.
 *
 *
 *
 */
CRYPTO_30_CRYWRAPPER_LOCAL FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_Local_KeyElementCopy(
  Crypto_30_CryWrapper_KeyElementsIterType elementIndexSrc,
  Crypto_30_CryWrapper_KeyElementsIterType elementIndexDst,
  uint32 cryptoKeyIdDst)
{
  /* ----- Local Variables ------------------------------------------------ */
  Std_ReturnType retVal = E_NOT_OK;
  Crypto_30_CryWrapper_KeyStorageIterType keyStorageIndexSrc;
  Crypto_30_CryWrapper_KeyStorageIterType keyStorageIndexDst;
  uint32_least indexWrittenLength;

  {
    /* ----- Implementation ------------------------------------------------- */
    Crypto_30_CryWrapper_ClearKeyElementStateByMask(elementIndexDst, CRYPTO_30_CRYWRAPPER_KEYELEMENTSTATE_VALID_INV_MASK); /* SBSW_CRYPTO_30_CRYWRAPPER_CSL02_KEY_ELEMENT_VIA_KEY */

    /* Are both keys not virtual? */
    /* #30 Handle not virtual key elements. */
#if (CRYPTO_30_CRYWRAPPER_KEYELEMENTINFOVIRTUALIDXOFKEYELEMENTINFO == STD_ON) /* COV_CRYPTO_30_CRYWRAPPER_VIRTUALKEY */
    if ((Crypto_30_CryWrapper_IsKeyElementVirtual(elementIndexSrc) == FALSE)
      && (Crypto_30_CryWrapper_IsKeyElementVirtual(elementIndexDst) == FALSE)) /* COV_CRYPTO_30_CRYWRAPPER_VIRTUALKEY */
#endif
    {
      /* Check if the available data is not bigger than the maximum size of the destination element */
      /* #35 Copy key element data if the size is matching. */
      if ( (Crypto_30_CryWrapper_GetKeyElementWrittenLength(elementIndexSrc) == Crypto_30_CryWrapper_GetKeyElementLength(elementIndexDst) )
        || ( (Crypto_30_CryWrapper_IsKeyElementPartial(elementIndexDst) == TRUE)
          && (Crypto_30_CryWrapper_GetKeyElementWrittenLength(elementIndexSrc) <= Crypto_30_CryWrapper_GetKeyElementLength(elementIndexDst) ) ) )
      {
        indexWrittenLength = 0u;
        keyStorageIndexSrc = Crypto_30_CryWrapper_GetKeyStorageStartIdxOfKeyElements(elementIndexSrc);
        keyStorageIndexDst = Crypto_30_CryWrapper_GetKeyStorageStartIdxOfKeyElements(elementIndexDst);
        /* Copy the source element to the destination element */
        while (indexWrittenLength < Crypto_30_CryWrapper_GetKeyElementWrittenLength(elementIndexSrc)) /* PRQA S 0715 */ /* MD_MSR_1.1_715 */
        {
          Crypto_30_CryWrapper_SetKeyStorage(keyStorageIndexDst, Crypto_30_CryWrapper_GetKeyStorage(keyStorageIndexSrc)); /* SBSW_CRYPTO_30_CRYWRAPPER_CSL02_KEY_STORAGE_VIA_KEY_ELEMENT */

          keyStorageIndexSrc++;
          keyStorageIndexDst++;
          indexWrittenLength++;
        }
        /* store the written length in the destination element */
        Crypto_30_CryWrapper_SetKeyElementWrittenLength(elementIndexDst, indexWrittenLength);
        retVal = E_OK;
      }
      else
      {
        /* The destination element is to short to store the available data of the source element */
        retVal = CRYPTO_E_KEY_SIZE_MISMATCH;
      }
    }

    if (retVal != E_OK)
    {
      Crypto_30_CryWrapper_SetKeyElementStateByMask(elementIndexDst, CRYPTO_30_CRYWRAPPER_KEYELEMENTSTATE_VALID_MASK); /* SBSW_CRYPTO_30_CRYWRAPPER_CSL02_KEY_ELEMENT_VIA_KEY */
    }

  }

  CRYPTO_30_CRYWRAPPER_DUMMY_STATEMENT(cryptoKeyIdDst); /* PRQA S 3112 */ /* MD_MSR_14.2 */

  return retVal;
}

/**********************************************************************************************************************
 * Crypto_30_CryWrapper_SetKeyState()
 **********************************************************************************************************************/
/*!
 *
 * Internal comment removed.
 *
 *
 */
CRYPTO_30_CRYWRAPPER_LOCAL_INLINE FUNC(void, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_SetKeyState(uint32 cryptoKeyId, uint8 mask)
{
  /* ----- Local Variables ------------------------------------------------ */
  Crypto_30_CryWrapper_KeyElementsIterType elementIndex;

  /* ----- Implementation ------------------------------------------------- */
  /* #10 Set key state for all key elements. */
  /* Loop over all elements of the source key */
  for (elementIndex = Crypto_30_CryWrapper_GetKeyElementsStartIdxOfKey(cryptoKeyId); elementIndex < Crypto_30_CryWrapper_GetKeyElementsEndIdxOfKey(cryptoKeyId); elementIndex++)
  {
    Crypto_30_CryWrapper_SetKeyElementStateByMask(elementIndex, mask); /* SBSW_CRYPTO_30_CRYWRAPPER_CSL02_KEY_ELEMENT_VIA_KEY */
  }
}

/**********************************************************************************************************************
 * Crypto_30_CryWrapper_Local_KeyElementGet_Standard()
 **********************************************************************************************************************/
/*!
 *
 * Internal comment removed.
 *
 *
 *
 *
 */
CRYPTO_30_CRYWRAPPER_LOCAL_INLINE FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_Local_KeyElementGet_Standard(
  P2VAR(uint8, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) resultPtr,
  P2VAR(uint32, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) resultLengthPtr,
  Crypto_30_CryWrapper_KeyElementsIterType elementIndex)
{
  /* ----- Local Variables ------------------------------------------------ */
  Std_ReturnType retVal;
  Crypto_30_CryWrapper_KeyStorageIterType keyStorageIndex;
  uint32_least keyPtrIndex;

  /* ----- Implementation ------------------------------------------------- */
  /* #10 Handle not virtual key. */
  /* Check if the buffer for the result is large enough.
  Depending on the actual length of the element the data is stored or an error is generated if the buffer is to small */

  /* #20 Copy Key element to output buffer if size is adequate. */
  if (Crypto_30_CryWrapper_GetKeyElementWrittenLength(elementIndex) <= *resultLengthPtr)
  {
    keyStorageIndex = Crypto_30_CryWrapper_GetKeyStorageStartIdxOfKeyElements(elementIndex);
    for (keyPtrIndex = 0; keyPtrIndex < Crypto_30_CryWrapper_GetKeyElementWrittenLength(elementIndex); keyPtrIndex++) /* PRQA S 0715 */ /* MD_MSR_1.1_715 */
    {
      resultPtr[keyPtrIndex] = Crypto_30_CryWrapper_GetKeyStorage(keyStorageIndex); /* SBSW_CRYPTO_30_CRYWRAPPER_ARRAY_ACCESS_WITH_SIZE_CHECK */
      keyStorageIndex++;
    }
    /* [SWS_Crypto_00092] */
    *resultLengthPtr = keyPtrIndex; /* SBSW_CRYPTO_30_CRYWRAPPER_PTR_ACCESS_WITH_DET_CHECK */
    retVal = E_OK;
  }
  else
  {
    /* #25 If size is too big, return error. */
    /* [SWS_Crypto_00093] */
    retVal = CRYPTO_E_SMALL_BUFFER;
  }

  return retVal;
}

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/

 /**********************************************************************************************************************
  * Crypto_30_CryWrapper_SetKeyElementWrittenLength()
  **********************************************************************************************************************/
 /*!
  *
  * Internal comment removed.
 *
 *
  */
FUNC(void, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_SetKeyElementWrittenLength(uint32 keyElementIndex, uint32 keyElementLength)
{
  /* ----- Local Variables ------------------------------------------------ */
  /* ----- Implementation ------------------------------------------------- */
  /* #10 Set high- and low-byte for keyElement written length. */
  Crypto_30_CryWrapper_SetKeyStorage(Crypto_30_CryWrapper_GetKeyStorageWrittenLengthStartIdxOfKeyElements(keyElementIndex), (uint8)(keyElementLength >> 8)); /* SBSW_CRYPTO_30_CRYWRAPPER_CSL02_KEY_STORAGE_VIA_KEY_ELEMENT */
  Crypto_30_CryWrapper_SetKeyStorage(Crypto_30_CryWrapper_GetKeyStorageWrittenLengthStartIdxOfKeyElements(keyElementIndex) + 1u, (uint8)keyElementLength); /* SBSW_CRYPTO_30_CRYWRAPPER_CSL02_KEY_STORAGE_VIA_KEY_ELEMENT */
}

/**********************************************************************************************************************
 * Crypto_30_CryWrapper_StoreProof()
 **********************************************************************************************************************/
/*!
 *
 * Internal comment removed.
 *
 *
 *
 *
 */
FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_StoreProof(
  uint32 cryptoKeyId,
  P2CONST(uint8, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) proofPtr,
  uint32 proofLength)
{
  /* ----- Local Variables ------------------------------------------------ */
  Std_ReturnType retVal = E_NOT_OK;

  /* ----- Implementation ------------------------------------------------- */
  /* #10 Try to store the proof to the key element CRYPTO_KE_CIPHER_PROOF. */
  Std_ReturnType cipherRet = Crypto_30_CryWrapper_Local_KeyElementSet(cryptoKeyId, CRYPTO_KE_CIPHER_PROOF, proofPtr, proofLength); /* SBSW_CRYPTO_30_CRYWRAPPER_FORWARDING_PTR */

  /* #20 Try to store the proof to the key element CRYPTO_KE_MAC_PROOF. */
  Std_ReturnType macRet = Crypto_30_CryWrapper_Local_KeyElementSet(cryptoKeyId, CRYPTO_KE_MAC_PROOF, proofPtr, proofLength); /* SBSW_CRYPTO_30_CRYWRAPPER_FORWARDING_PTR */

  /* #30 Check if there was no error except CRYPTO_E_KEY_NOT_AVAILABLE. */
  if (((CRYPTO_E_KEY_NOT_AVAILABLE == cipherRet)
    || (cipherRet == E_OK))
    && ((CRYPTO_E_KEY_NOT_AVAILABLE == macRet)
      || (macRet == E_OK)))
  {
    retVal = E_OK;
  }

  return retVal;
}

/**********************************************************************************************************************
 * Crypto_30_CryWrapper_Local_KeyElementSearch()
 **********************************************************************************************************************/
/*!
 *
 * Internal comment removed.
 *
 *
 *
 *
 */
/* [SWS_Crypto_91006] */
FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_Local_KeyElementSearch(
  uint32 cryptoKeyId,
  uint32 keyElementId,
  P2VAR(Crypto_30_CryWrapper_KeyElementsIterType, AUTOMATIC, AUTOMATIC) elementIndex)
{
  /* ----- Local Variables ------------------------------------------------ */
  Std_ReturnType retVal = E_NOT_OK;
  Crypto_30_CryWrapper_KeyElementsIterType elementIdx;

  /* ----- Implementation ------------------------------------------------- */
  /* #10 Iterate over all elements in the key to find a matching element. */
  for (elementIdx = Crypto_30_CryWrapper_GetKeyElementsStartIdxOfKey(cryptoKeyId); elementIdx < Crypto_30_CryWrapper_GetKeyElementsEndIdxOfKey(cryptoKeyId); elementIdx++)
  {
    /* #15 Check if it is the correct element. */
    if (keyElementId == Crypto_30_CryWrapper_GetIdOfKeyElements(elementIdx))
    {
      retVal = E_OK;

      /* #20 Store the result to the provided pointer. */
      *elementIndex = elementIdx; /* SBSW_CRYPTO_30_CRYWRAPPER_PARAMETER_PTR_ACCESS */
      break;
    }
  }

  return retVal;
}

/**********************************************************************************************************************
 * Crypto_30_CryWrapper_KeyElementIdsGet()
 **********************************************************************************************************************/
/*!
 *
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 */
FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_KeyElementIdsGet(
  uint32 cryptoKeyId,
  P2VAR(uint32, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) keyElementIdsPtr,
  P2VAR(uint32, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) keyElementIdsLengthPtr)
{
  /* ----- Local Variables ------------------------------------------------ */
  Std_ReturnType retVal;
  uint8 errorId = CRYPTO_E_NO_ERROR;

  /* ----- Development Error Checks ------------------------------------- */
#if (CRYPTO_30_CRYWRAPPER_DEV_ERROR_DETECT == STD_ON)
  retVal = E_NOT_OK;
  /* #10 Check initialization state of the component. */
  if (Crypto_30_CryWrapper_ModuleInitialized != CRYPTO_30_CRYWRAPPER_INITIALIZED)
  {
    /* [SWS_Crypto_00161] */
    errorId = CRYPTO_E_UNINIT;
  }
  /* #15 Check plausibility of parameters. */
  else if (cryptoKeyId >= Crypto_30_CryWrapper_GetSizeOfKey())
  {
    /* [SWS_Crypto_00162] */
    errorId = CRYPTO_E_PARAM_HANDLE;
  }
  else if (keyElementIdsPtr == NULL_PTR)
  {
    /* [SWS_Crypto_00162] */
    errorId = CRYPTO_E_PARAM_HANDLE;
  }
  else if (keyElementIdsLengthPtr == NULL_PTR)
  {
    errorId = CRYPTO_E_PARAM_HANDLE;
  }
  else
#endif
  {
    /* ----- Implementation ------------------------------------------------- */
    Crypto_30_CryWrapper_KeyElementsIterType elementIndex = Crypto_30_CryWrapper_GetKeyElementsStartIdxOfKey(cryptoKeyId);
    uint8 idx = 0u;
    retVal = E_OK;

    /* #20 Iterate over all Key Element Ids. */
    while (elementIndex < Crypto_30_CryWrapper_GetKeyElementsEndIdxOfKey(cryptoKeyId))
    {
      /* #25 Copy Key Element Id, if the buffer is to small return with error. */
      if (idx < *(keyElementIdsLengthPtr))
      {
        keyElementIdsPtr[idx] = Crypto_30_CryWrapper_GetIdOfKeyElements(elementIndex); /* SBSW_CRYPTO_30_CRYWRAPPER_ARRAY_ACCESS_WITH_SIZE_CHECK */
      }
      else
      {
        /* provided array is too small to store all element ids */
        retVal = CRYPTO_E_SMALL_BUFFER;
        /* [SWS_Crypto_00164] Check that provided buffer is big enough */
        errorId = CRYPTO_E_SMALL_BUFFER;
        break;
      }

      idx++;
      elementIndex++;
    }

    /* #30 save written data length. */
    *keyElementIdsLengthPtr = idx; /* SBSW_CRYPTO_30_CRYWRAPPER_PTR_ACCESS_WITH_DET_CHECK */
  }

  /* ----- Development Error Report --------------------------------------- */
#if (CRYPTO_30_CRYWRAPPER_DEV_ERROR_REPORT == STD_ON)
  /* #40 Report error if applicable. */
  if (errorId != CRYPTO_E_NO_ERROR)
  {
    (void)Det_ReportError((uint16)CRYPTO_30_CRYWRAPPER_MODULE_ID,
      CRYPTO_30_CRYWRAPPER_INSTANCE_ID,
      CRYPTO_30_CRYWRAPPER_SID_KEY_ELEMENT_IDS_GET,
      errorId);
  }
#else
  CRYPTO_30_CRYWRAPPER_DUMMY_STATEMENT(errorId); /* PRQA S 3112 */ /* MD_MSR_14.2 */
#endif

  return retVal;
} /* PRQA S 6080 */ /* MD_MSR_STMIF */

/**********************************************************************************************************************
 * Crypto_30_CryWrapper_KeyCopy()
 **********************************************************************************************************************/
/*!
 *
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 */
FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_KeyCopy(
  uint32 cryptoKeyId,
  uint32 targetCryptoKeyId)
{
  /* ----- Local Variables ------------------------------------------------ */
  Std_ReturnType retVal, retValBuf;
  Crypto_30_CryWrapper_KeyElementsIterType elementIndexSrc;
  Crypto_30_CryWrapper_KeyElementsIterType elementIndexDst;
  uint8 errorId = CRYPTO_E_NO_ERROR;

  /* ----- Development Error Checks ------------------------------------- */
#if (CRYPTO_30_CRYWRAPPER_DEV_ERROR_DETECT == STD_ON)
  retVal = E_NOT_OK;
  /* #10 Check initialization state of the component. */
  if (Crypto_30_CryWrapper_ModuleInitialized != CRYPTO_30_CRYWRAPPER_INITIALIZED)
  {
    /* [SWS_Crypto_00156] */
    errorId = CRYPTO_E_UNINIT;
  }
  /* #15 Check plausibility of parameters. */
  else if (cryptoKeyId >= Crypto_30_CryWrapper_GetSizeOfKey())
  {
    /* [SWS_Crypto_00157] */
    errorId = CRYPTO_E_PARAM_HANDLE;
  }
  else if (targetCryptoKeyId >= Crypto_30_CryWrapper_GetSizeOfKey())
  {
    /* [SWS_Crypto_00158] */
    errorId = CRYPTO_E_PARAM_HANDLE;
  }
  else
#endif
  {
    /* ----- Implementation ------------------------------------------------- */
    retVal = CRYPTO_E_KEY_NOT_AVAILABLE;
    /* #20 Loop over all elements of the source key. */
    for (elementIndexSrc = Crypto_30_CryWrapper_GetKeyElementsStartIdxOfKey(cryptoKeyId); elementIndexSrc < Crypto_30_CryWrapper_GetKeyElementsEndIdxOfKey(cryptoKeyId); elementIndexSrc++)
    {
      /* #25 Loop over all elements of the destination key to find a matching element for the current source element. */
      if (Crypto_30_CryWrapper_Local_KeyElementSearch(targetCryptoKeyId, Crypto_30_CryWrapper_GetIdOfKeyElements(elementIndexSrc), &elementIndexDst) == E_OK) /* SBSW_CRYPTO_30_CRYWRAPPER_CRY_STACK_VARIABLE_AS_PTR */
      {
        /* #30 copy key element with Crypto_30_CryWrapper_Local_KeyElementCopy. */
        retValBuf = Crypto_30_CryWrapper_Local_KeyElementCopy(elementIndexSrc, elementIndexDst, targetCryptoKeyId);
        if (retVal != E_OK)
        {
          retVal = retValBuf;
        }
      }
    }
  }

  /* ----- Development Error Report --------------------------------------- */
#if (CRYPTO_30_CRYWRAPPER_DEV_ERROR_REPORT == STD_ON)
  /* #40 Report error if applicable. */
  if (errorId != CRYPTO_E_NO_ERROR)
  {
    (void)Det_ReportError((uint16)CRYPTO_30_CRYWRAPPER_MODULE_ID,
      CRYPTO_30_CRYWRAPPER_INSTANCE_ID,
      CRYPTO_30_CRYWRAPPER_SID_KEY_COPY,
      errorId);
  }
#else
  CRYPTO_30_CRYWRAPPER_DUMMY_STATEMENT(errorId); /* PRQA S 3112 */ /* MD_MSR_14.2 */
#endif

  return retVal;
} /* PRQA S 6080 */ /* MD_MSR_STMIF */

/**********************************************************************************************************************
 * Crypto_30_CryWrapper_KeyElementCopy()
 **********************************************************************************************************************/
/*!
 *
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 */
FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_KeyElementCopy(
  uint32 cryptoKeyId,
  uint32 keyElementId,
  uint32 targetCryptoKeyId,
  uint32 targetKeyElementId)
{
  /* ----- Local Variables ------------------------------------------------ */
  Std_ReturnType retVal = E_NOT_OK;
  Crypto_30_CryWrapper_KeyElementsIterType elementIndexSrc;
  Crypto_30_CryWrapper_KeyElementsIterType elementIndexDst;
  uint8 errorId = CRYPTO_E_PARAM_HANDLE;

  /* ----- Development Error Checks ------------------------------------- */
#if (CRYPTO_30_CRYWRAPPER_DEV_ERROR_DETECT == STD_ON)
  /* #10 Check initialization state of the component. */
  if (Crypto_30_CryWrapper_ModuleInitialized != CRYPTO_30_CRYWRAPPER_INITIALIZED)
  {
    /* [SWS_Crypto_00149] */
    errorId = CRYPTO_E_UNINIT;
  }
  /* #15 Check plausibility of parameters. */
  else if (cryptoKeyId >= Crypto_30_CryWrapper_GetSizeOfKey())
  {
    /* [SWS_Crypto_00150] */
    errorId = CRYPTO_E_PARAM_HANDLE;
  }
  else if (targetCryptoKeyId >= Crypto_30_CryWrapper_GetSizeOfKey())
  {
    /* [SWS_Crypto_00151] */
    errorId = CRYPTO_E_PARAM_HANDLE;
  }
  else
#endif
  /* #20 Find source element. Otherwise return with Error. */
  if (Crypto_30_CryWrapper_Local_KeyElementSearch(cryptoKeyId, keyElementId, &elementIndexSrc) != E_OK) /* SBSW_CRYPTO_30_CRYWRAPPER_CRY_STACK_VARIABLE_AS_PTR */
  {
    /* [SWS_Crypto_00152] if keyElementId is out of valid range return E_NOT_OK */
    /* [SWS_Crypto_00153] if targetKeyElementId is out of valid range return E_NOT_OK */
    /* retVal already set to E_NOT_OK as default value */
  }
  else
  {
    /* ----- Implementation ------------------------------------------------- */
    /* #25 Find destination element. Otherwise return with Error. */
    if (Crypto_30_CryWrapper_Local_KeyElementSearch(targetCryptoKeyId, targetKeyElementId, &elementIndexDst) == E_OK) /* SBSW_CRYPTO_30_CRYWRAPPER_CRY_STACK_VARIABLE_AS_PTR */
    {
      /* [SWS_Crypto_00152] Check that keyElementId is in valid range */
      /* [SWS_Crypto_00153] Check that targetKeyElementId is in valid range */
      errorId = CRYPTO_E_NO_ERROR;

      /* #30 copy key element with Crypto_30_CryWrapper_Local_KeyElementCopy. */
      retVal = Crypto_30_CryWrapper_Local_KeyElementCopy(elementIndexSrc, elementIndexDst, targetCryptoKeyId);
    }
  }

  /* ----- Development Error Report --------------------------------------- */
#if (CRYPTO_30_CRYWRAPPER_DEV_ERROR_REPORT == STD_ON)
  /* #40 Report error if applicable. */
  if (errorId != CRYPTO_E_NO_ERROR)
  {
    (void)Det_ReportError((uint16)CRYPTO_30_CRYWRAPPER_MODULE_ID,
      CRYPTO_30_CRYWRAPPER_INSTANCE_ID,
      CRYPTO_30_CRYWRAPPER_SID_KEY_ELEMENT_COPY,
      errorId);
  }
#else
  CRYPTO_30_CRYWRAPPER_DUMMY_STATEMENT(errorId); /* PRQA S 3112 */ /* MD_MSR_14.2 */
#endif
  return retVal;
} /* PRQA S 6080 */ /* MD_MSR_STMIF */

/**********************************************************************************************************************
 * Crypto_30_CryWrapper_KeyElementSetInternal()
 **********************************************************************************************************************/
/*!
 *
 * Internal comment removed.
 *
 *
 */
FUNC(void, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_KeyElementSetInternal(uint32 elementIndex, P2CONST(uint8, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) keyPtr, uint32 keyLength)
{
  /* ----- Local Variables ------------------------------------------------ */
  Crypto_30_CryWrapper_KeyStorageIterType keyStorageIndex;
  uint32_least keyPtrIndex = 0u;

  /* ----- Implementation ------------------------------------------------- */
  keyStorageIndex = Crypto_30_CryWrapper_GetKeyStorageStartIdxOfKeyElements(elementIndex);
  /* #10 Copy keyPtr to key storage. */
  while (keyPtrIndex < keyLength)
  { /* PRQA S 0715 */ /* MD_MSR_1.1_715 */
    Crypto_30_CryWrapper_SetKeyStorage(keyStorageIndex, keyPtr[keyPtrIndex]); /* SBSW_CRYPTO_30_CRYWRAPPER_CSL02_KEY_STORAGE_VIA_KEY_ELEMENT */
    keyStorageIndex++;
    keyPtrIndex++;
  }

  Crypto_30_CryWrapper_SetKeyElementWrittenLength(elementIndex, keyPtrIndex);
}

/**********************************************************************************************************************
 * Crypto_30_CryWrapper_Local_KeyElementSet()
 **********************************************************************************************************************/
/*!
 *
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 */
/* [SWS_Crypto_91004] */
FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_Local_KeyElementSet(
  uint32 cryptoKeyId,
  uint32 keyElementId,
  P2CONST(uint8, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) keyPtr,
  uint32 keyLength)
{
  /* ----- Local Variables ------------------------------------------------ */
  Std_ReturnType retVal;
  Crypto_30_CryWrapper_KeyElementsIterType elementIndex;

  /* ----- Implementation ------------------------------------------------- */
  /* #10 Find key element, otherwise return with Error. */
  if (Crypto_30_CryWrapper_Local_KeyElementSearch(cryptoKeyId, keyElementId, &elementIndex) != E_OK) /* SBSW_CRYPTO_30_CRYWRAPPER_CRY_STACK_VARIABLE_AS_PTR */
  {
    retVal = CRYPTO_E_KEY_NOT_AVAILABLE;
  }
  else
  {
    Std_ReturnType retValHw = Crypto_30_CryWrapper_Hw_KeyElementSet(cryptoKeyId, keyElementId, keyPtr, keyLength, elementIndex); /* SBSW_CRYPTO_30_CRYWRAPPER_HW_PTR_FORWARDING */
    if (retValHw != CRYPTO_E_KEY_NOT_AVAILABLE)
    {
      retVal = retValHw;
    }
    else if ((Crypto_30_CryWrapper_GetWriteOfKeyElementInfo(Crypto_30_CryWrapper_GetKeyElementInfoIdxOfKeyElements(elementIndex))) != CRYPTO_30_CRYWRAPPER_WA_ALLOWED)
    {
      retVal = CRYPTO_E_KEY_WRITE_FAIL;
    }
    else
#if (CRYPTO_30_CRYWRAPPER_KEYELEMENTINFOVIRTUALUSEDOFKEYELEMENTINFO == STD_ON) /* COV_CRYPTO_30_CRYWRAPPER_VIRTUALKEY */
    /* Check if the element is virtual */
    if (Crypto_30_CryWrapper_IsKeyElementVirtual(elementIndex) == TRUE) /* COV_CRYPTO_30_CRYWRAPPER_VIRTUALKEY */
    {
      retVal = E_NOT_OK;
    }
    else
#endif
    /* #15 Else Handle not virtual key element. */
    {
      /* #20 Copy data if there is enough free space. */
      /* Check if the available data is not bigger than the maximum size of the destination element */
      if ((keyLength == Crypto_30_CryWrapper_GetKeyElementLength(elementIndex)) || ((Crypto_30_CryWrapper_IsKeyElementPartial(elementIndex) == TRUE) && (keyLength <= Crypto_30_CryWrapper_GetKeyElementLength(elementIndex))))
      {
        Crypto_30_CryWrapper_KeyElementSetInternal(elementIndex, keyPtr, keyLength); /* SBSW_CRYPTO_30_CRYWRAPPER_FORWARDING_PTR */
        retVal = E_OK;
      }
      else
      {
        /* #30 Else: Key length is too large. */
        retVal = CRYPTO_E_KEY_SIZE_MISMATCH; /* [SWS_Crypto_00146] */
      }
    }
    
    if (retVal != E_OK)
    {
      Crypto_30_CryWrapper_SetKeyElementStateByMask(elementIndex, CRYPTO_30_CRYWRAPPER_KEYELEMENTSTATE_VALID_MASK); /* SBSW_CRYPTO_30_CRYWRAPPER_CSL02_KEY_ELEMENT_VIA_KEY */
    }
  }

  return retVal;
} /* PRQA S 6080 */ /* MD_MSR_STMIF */

/**********************************************************************************************************************
 * Crypto_30_CryWrapper_KeyElementSet()
 **********************************************************************************************************************/
/*!
 *
 * Internal comment removed.
 *
 *
 *
 *
 *
 */
/* [SWS_Crypto_91004] */
FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_KeyElementSet(
  uint32 cryptoKeyId,
  uint32 keyElementId,
  P2CONST(uint8, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) keyPtr,
  uint32 keyLength)
{
  /* ----- Local Variables ------------------------------------------------ */
  Std_ReturnType retVal;
  uint8 errorId = CRYPTO_E_NO_ERROR;

  /* ----- Development Error Checks --------------------------------------- */
#if (CRYPTO_30_CRYWRAPPER_DEV_ERROR_DETECT == STD_ON)
  retVal = E_NOT_OK;
  /* #10 Check initialization state of the component. */
  if (Crypto_30_CryWrapper_ModuleInitialized == CRYPTO_30_CRYWRAPPER_UNINIT)
  {
    errorId = CRYPTO_E_UNINIT; /* [SWS_Crypto_00075] */
  }
  /* #15 Check plausibility of parameters. */
  else if (cryptoKeyId >= Crypto_30_CryWrapper_GetSizeOfKey())
  {
    errorId = CRYPTO_E_PARAM_HANDLE; /* [SWS_Crypto_00076] */
  }
  else if (keyPtr == NULL_PTR)
  {
    errorId = CRYPTO_E_PARAM_POINTER; /* [SWS_Crypto_00078] */
  }
  else if (keyLength == 0)
  {
    errorId = CRYPTO_E_PARAM_VALUE; /* [SWS_Crypto_00079] */
  }
  else
#endif
  {
    /* ----- Implementation ------------------------------------------------- */
    /* #20 set key element using Crypto_30_CryWrapper_Local_KeyElementSet. */
    retVal = Crypto_30_CryWrapper_Local_KeyElementSet(cryptoKeyId, keyElementId, keyPtr, keyLength); /* SBSW_CRYPTO_30_CRYWRAPPER_FORWARDING_PTR */
    if (retVal == CRYPTO_E_KEY_NOT_AVAILABLE)
    {
      /* [SWS_Crypto_00077] check if keyElementId is in valid range */
      errorId = CRYPTO_E_PARAM_HANDLE;
      retVal = E_NOT_OK;
    }
  }
  /* ----- Development Error Report --------------------------------------- */
#if (CRYPTO_30_CRYWRAPPER_DEV_ERROR_REPORT == STD_ON)
  /* #30 Report error if applicable. */
  if (errorId != CRYPTO_E_NO_ERROR)
  {
    (void)Det_ReportError((uint16)CRYPTO_30_CRYWRAPPER_MODULE_ID,
      CRYPTO_30_CRYWRAPPER_INSTANCE_ID,
      CRYPTO_30_CRYWRAPPER_SID_KEY_ELEMENT_SET,
      errorId);
  }
#else
  CRYPTO_30_CRYWRAPPER_DUMMY_STATEMENT(errorId); /* PRQA S 3112 */ /* MD_MSR_14.2 */
#endif

  return retVal;
} /* PRQA S 6080 */ /* MD_MSR_STMIF */

/**********************************************************************************************************************
 * Crypto_30_CryWrapper_KeyValidSet()
 **********************************************************************************************************************/
/*!
 *
 * Internal comment removed.
 *
 *
 *
 *
 *
 */
/* [SWS_Crypto_91005] */
FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_KeyValidSet(
  uint32 cryptoKeyId)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = CRYPTO_E_NO_ERROR;
  Std_ReturnType retVal;

  /* ----- Development Error Checks ------------------------------------- */
#if (CRYPTO_30_CRYWRAPPER_DEV_ERROR_DETECT == STD_ON)
  retVal = E_NOT_OK;
  /* #10 Check initialization state of the component. */
  if (Crypto_30_CryWrapper_ModuleInitialized != CRYPTO_30_CRYWRAPPER_INITIALIZED)
  {
    errorId = CRYPTO_E_UNINIT; /* [SWS_Crypto_00082] */
  }
  /* #15 Check plausibility of parameters. */
  else if (cryptoKeyId >= Crypto_30_CryWrapper_GetSizeOfKey())
  {
    errorId = CRYPTO_E_PARAM_HANDLE; /* [SWS_Crypto_00083] */
  }
  else
#endif
  {
    /* ----- Implementation ------------------------------------------------- */
    /* #20 Set the given KeyId valid. */
    Crypto_30_CryWrapper_SetKeyState(cryptoKeyId, CRYPTO_30_CRYWRAPPER_KEYELEMENTSTATE_VALID_MASK);

    retVal = E_OK;
  }

  /* ----- Development Error Report --------------------------------------- */
#if (CRYPTO_30_CRYWRAPPER_DEV_ERROR_REPORT == STD_ON)
  /* #25 Report error if applicable. */
  if (errorId != CRYPTO_E_NO_ERROR)
  {
    (void)Det_ReportError((uint16)CRYPTO_30_CRYWRAPPER_MODULE_ID,
      CRYPTO_30_CRYWRAPPER_INSTANCE_ID,
      CRYPTO_30_CRYWRAPPER_SID_KEY_VALID_SET,
      errorId);
  }
#else
  CRYPTO_30_CRYWRAPPER_DUMMY_STATEMENT(errorId); /* PRQA S 3112 */ /* MD_MSR_14.2 */
#endif

  return retVal;
}

/**********************************************************************************************************************
 * Crypto_30_CryWrapper_Local_KeyElementGet()
 **********************************************************************************************************************/
/*!
 *
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 */
/* [SWS_Crypto_91006] */
FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_Local_KeyElementGet(
  uint32 cryptoKeyId,
  uint32 keyElementId,
  P2VAR(uint8, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) resultPtr,
  P2VAR(uint32, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) resultLengthPtr)
{
  /* ----- Local Variables ---------------------------------------------- */
  Std_ReturnType retVal;
  Crypto_30_CryWrapper_KeyElementsIterType elementIndex;

  /* ----- Implementation ------------------------------------------------- */
  /* #10 Search Key Element. */
  if(Crypto_30_CryWrapper_Local_KeyElementSearch(cryptoKeyId, keyElementId, &elementIndex) != E_OK) /* SBSW_CRYPTO_30_CRYWRAPPER_CRY_STACK_VARIABLE_AS_PTR */
  {
    retVal = CRYPTO_E_KEY_NOT_AVAILABLE;
  }
  /* #15 Check if the Key element is valid. */
  else if (Crypto_30_CryWrapper_IsKeyElementValid(elementIndex) == FALSE)
  {
    /* [SWS_Crypto_00039] */
    retVal = CRYPTO_E_KEY_NOT_VALID;
  }
  else
  {
#if (CRYPTO_30_CRYWRAPPER_KEYELEMENTINFOVIRTUALUSEDOFKEYELEMENTINFO == STD_ON) /* COV_CRYPTO_30_CRYWRAPPER_VIRTUALKEY */
    /* #20 Check if the element is virtual. */
    if (Crypto_30_CryWrapper_IsKeyElementVirtual(elementIndex) == TRUE) /* COV_CRYPTO_30_CRYWRAPPER_VIRTUALKEY */
    {
      /* #30 Handle virtual key. */
      retVal = E_NOT_OK;
    }
    else
#endif
    {
      /* #40 Handle not virtual key. */
      retVal = Crypto_30_CryWrapper_Local_KeyElementGet_Standard(resultPtr, resultLengthPtr, elementIndex); /* SBSW_CRYPTO_30_CRYWRAPPER_FORWARDING_PTR */
    }
  }

  return retVal;
} /* PRQA S 6030,6080 */ /* MD_MSR_STCYC */ /* MD_MSR_STMIF */

/**********************************************************************************************************************
 * Crypto_30_CryWrapper_KeyElementGet()
 **********************************************************************************************************************/
/*!
 *
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
/* [SWS_Crypto_91006] */
FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_KeyElementGet(
  uint32 cryptoKeyId,
  uint32 keyElementId,
  P2VAR(uint8, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) resultPtr,
  P2VAR(uint32, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) resultLengthPtr)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = CRYPTO_E_NO_ERROR;
  Std_ReturnType retVal;
  Crypto_30_CryWrapper_KeyElementsIterType elementIndex;

  /* ----- Development Error Checks ------------------------------------- */
#if (CRYPTO_30_CRYWRAPPER_DEV_ERROR_DETECT == STD_ON)
  retVal = E_NOT_OK;
  /* #10 Check initialization state of the component. */
  if (Crypto_30_CryWrapper_ModuleInitialized != CRYPTO_30_CRYWRAPPER_INITIALIZED)
  {
    /* [SWS_Crypto_00085] */
    errorId = CRYPTO_E_UNINIT;
  }
  /* #15 Check plausibility of parameters. */
  else if (cryptoKeyId >= Crypto_30_CryWrapper_GetSizeOfKey())
  {
    /* [SWS_Crypto_00086] */
    errorId = CRYPTO_E_PARAM_HANDLE;
  }
  else if (resultPtr == NULL_PTR)
  {
    /* [SWS_Crypto_00088] */
    errorId = CRYPTO_E_PARAM_POINTER;
  }
  else if (resultLengthPtr == NULL_PTR)
  {
    /* [SWS_Crypto_00089] */
    errorId = CRYPTO_E_PARAM_POINTER;
  }
  else if (*resultLengthPtr == 0u)
  {
    /* [SWS_Crypto_00090] */
    errorId = CRYPTO_E_PARAM_VALUE;
  }
  else
#endif
  {
    /* ----- Implementation ------------------------------------------------- */
    /* #20 Search Key Element. */
    if(Crypto_30_CryWrapper_Local_KeyElementSearch(cryptoKeyId, keyElementId, &elementIndex) != E_OK) /* SBSW_CRYPTO_30_CRYWRAPPER_CRY_STACK_VARIABLE_AS_PTR */
    {
      /* [SWS_Crypto_00087] Check that keyElementId is in valid range. */
      errorId = CRYPTO_E_PARAM_HANDLE;
      /* Info: This return value is according to the Spec although CRYPTO_E_KEY_NOT_AVAILABLE would make more sense */
      retVal = E_NOT_OK;
    }
    /* #25 Check if the Key element is valid. */
    else if (FALSE == Crypto_30_CryWrapper_IsKeyElementValid(elementIndex))
    {
      /* [SWS_Crypto_00039] */
      /* Info: This return value is according to the Spec although CRYPTO_E_KEY_NOT_VALID would make more sense */
      retVal = CRYPTO_E_KEY_NOT_AVAILABLE;
    }
    else
    {
      SchM_Enter_Crypto_30_CryWrapper_CRYPTO_30_CRYWRAPPER_EXCLUSIVE_AREA_2();
      {
        /* #30 Try to process key element in hardware. */
        Std_ReturnType retValHw = Crypto_30_CryWrapper_Hw_KeyElementGet(cryptoKeyId, keyElementId, resultPtr, resultLengthPtr, elementIndex); /* SBSW_CRYPTO_30_CRYWRAPPER_HW_PTR_FORWARDING */
        if (retValHw != CRYPTO_E_KEY_NOT_AVAILABLE)
        {
          retVal = retValHw;
        }
        /* #40 ELSE: Check if read access is allowed. */
        else if ((Crypto_30_CryWrapper_GetReadOfKeyElementInfo(Crypto_30_CryWrapper_GetKeyElementInfoIdxOfKeyElements(elementIndex))) != CRYPTO_30_CRYWRAPPER_RA_ALLOWED )
        {
          retVal = CRYPTO_E_KEY_READ_FAIL;
        }
        else
        {
#if (CRYPTO_30_CRYWRAPPER_KEYELEMENTINFOVIRTUALUSEDOFKEYELEMENTINFO == STD_ON) /* COV_CRYPTO_30_CRYWRAPPER_VIRTUALKEY */
          /* #50 Check if the element is virtual. */
          if (Crypto_30_CryWrapper_IsKeyElementVirtual(elementIndex) == TRUE) /* COV_CRYPTO_30_CRYWRAPPER_VIRTUALKEY */
          {
            /* #60 Handle virtual key. */
            retVal = E_NOT_OK;
          }
          else
#endif
          {
            /* #70 Handle not virtual key. */
            retVal = Crypto_30_CryWrapper_Local_KeyElementGet_Standard(resultPtr, resultLengthPtr, elementIndex); /* SBSW_CRYPTO_30_CRYWRAPPER_FORWARDING_PTR */
          }
        }
      }
      SchM_Exit_Crypto_30_CryWrapper_CRYPTO_30_CRYWRAPPER_EXCLUSIVE_AREA_2();
    }
  }
  /* ----- Development Error Report --------------------------------------- */
#if (CRYPTO_30_CRYWRAPPER_DEV_ERROR_REPORT == STD_ON)
  /* #80 Report error if applicable. */
  if (errorId != CRYPTO_E_NO_ERROR)
  {
    (void)Det_ReportError((uint16)CRYPTO_30_CRYWRAPPER_MODULE_ID,
      CRYPTO_30_CRYWRAPPER_INSTANCE_ID,
      CRYPTO_30_CRYWRAPPER_SID_KEY_ELEMENT_GET,
      errorId);
  }
#else
  CRYPTO_30_CRYWRAPPER_DUMMY_STATEMENT(errorId); /* PRQA S 3112 */ /* MD_MSR_14.2 */
#endif

  return retVal;
} /* PRQA S 6080,6030 */ /* MD_MSR_STMIF */ /* MD_MSR_STCYC */

/**********************************************************************************************************************
 * Crypto_30_CryWrapper_RandomSeed()
 **********************************************************************************************************************/
/*!
 *
 * Internal comment removed.
 *
 *
 *
 *
 *
 */
/* [SWS_Crypto_91013] */
FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_RandomSeed(
  uint32 cryptoKeyId,
  P2CONST(uint8, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) entropyPtr,
  uint32 entropyLength)
{
  /* ----- Local Variables ------------------------------------------------ */
  uint8 errorId = CRYPTO_E_NO_ERROR;
  Std_ReturnType retVal;

  /* ----- Development Error Checks ------------------------------------- */
#if (CRYPTO_30_CRYWRAPPER_DEV_ERROR_DETECT == STD_ON)
  retVal = E_NOT_OK;
  /* #10 Check initialization state of the component. */
  if (Crypto_30_CryWrapper_ModuleInitialized != CRYPTO_30_CRYWRAPPER_INITIALIZED)
  {
    /* [SWS_Crypto_00128] */
    errorId = CRYPTO_E_UNINIT;
  }
  /* #15 Check plausibility of parameters. */
  else if (cryptoKeyId >= Crypto_30_CryWrapper_GetSizeOfKey())
  {
    /* [SWS_Crypto_00129] */
    errorId = CRYPTO_E_PARAM_HANDLE;
  }
  else if (entropyPtr == NULL_PTR)
  {
    /* [SWS_Crypto_00130] */
    errorId = CRYPTO_E_PARAM_POINTER;
  }
  else if (entropyLength == 0u)
  {
    /* [SWS_Crypto_00131] */
    errorId = CRYPTO_E_PARAM_VALUE;
  }
  else
#endif
  {
    /* ----- Implementation ------------------------------------------------- */
    retVal = Crypto_30_CryWrapper_Hw_RandomSeed(cryptoKeyId, entropyPtr, entropyLength); /* SBSW_CRYPTO_30_CRYWRAPPER_HW_PTR_FORWARDING */
  }

  /* ----- Development Error Report --------------------------------------- */
#if (CRYPTO_30_CRYWRAPPER_DEV_ERROR_REPORT == STD_ON)
  /* #25 Report error if applicable. */
  if (errorId != CRYPTO_E_NO_ERROR)
  {
    (void)Det_ReportError((uint16)CRYPTO_30_CRYWRAPPER_MODULE_ID,
      CRYPTO_30_CRYWRAPPER_INSTANCE_ID,
      CRYPTO_30_CRYWRAPPER_SID_RANDOM_SEED,
      errorId);
  }
#else
  CRYPTO_30_CRYWRAPPER_DUMMY_STATEMENT(errorId); /* PRQA S 3112 */ /* MD_MSR_14.2 */
#endif

  return retVal;
} /* PRQA S 6080 */ /* MD_MSR_STMIF */

/**********************************************************************************************************************
 * Crypto_30_CryWrapper_KeyGenerate()
 **********************************************************************************************************************/
/*!
 *
 * Internal comment removed.
 *
 *
 *
 *
 *
 */

/* [SWS_Crypto_91007] */
FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_KeyGenerate(
  uint32 cryptoKeyId)
{
  /* ----- Local Variables ------------------------------------------------ */
  uint8 errorId = CRYPTO_E_NO_ERROR;
  Std_ReturnType retVal;

  /* ----- Development Error Checks ------------------------------------- */
#if (CRYPTO_30_CRYWRAPPER_DEV_ERROR_DETECT == STD_ON)
  retVal = E_NOT_OK;
  /* #10 Check initialization state of the component. */
  if (Crypto_30_CryWrapper_ModuleInitialized != CRYPTO_30_CRYWRAPPER_INITIALIZED)
  {
    /* [SWS_Crypto_00094] */
    errorId = CRYPTO_E_UNINIT;
  }
  /* #15 Check plausibility of parameters. */
  else if (cryptoKeyId >= Crypto_30_CryWrapper_GetSizeOfKey())
  {
    /* [SWS_Crypto_00095] */
    errorId = CRYPTO_E_PARAM_HANDLE;
  }
  else
#endif
  {
    /* ----- Implementation ------------------------------------------------- */
    /* #20 Call subfunction to generate a key. */
    retVal = Crypto_30_CryWrapper_Hw_KeyGenerate(cryptoKeyId);
  }

  /* ----- Development Error Report --------------------------------------- */
#if (CRYPTO_30_CRYWRAPPER_DEV_ERROR_REPORT == STD_ON)
  /* #30 Report error if applicable. */
  if (errorId != CRYPTO_E_NO_ERROR)
  {
    (void)Det_ReportError((uint16)CRYPTO_30_CRYWRAPPER_MODULE_ID,
      CRYPTO_30_CRYWRAPPER_INSTANCE_ID,
      CRYPTO_30_CRYWRAPPER_SID_KEY_GENERATE,
      errorId);
  }
#else
  CRYPTO_30_CRYWRAPPER_DUMMY_STATEMENT(errorId); /* PRQA S 3112 */ /* MD_MSR_14.2 */
#endif

  return retVal;
}

/**********************************************************************************************************************
 * Crypto_30_CryWrapper_KeyDerive()
 **********************************************************************************************************************/
/*!
 *
 * Internal comment removed.
 *
 *
 *
 *
 *
 */
/* [SWS_Crypto_91008] */
/* PRQA S 0715 KEYDERIVE0715 */ /* MD_MSR_1.1_715 */
FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_KeyDerive(
  uint32 cryptoKeyId,
  uint32 targetCryptoKeyId )
{
  /* ----- Local Variables ------------------------------------------------ */
  Std_ReturnType retVal;
  uint8 errorId = CRYPTO_E_NO_ERROR;

  /* ----- Development Error Checks ------------------------------------- */
#if (CRYPTO_30_CRYWRAPPER_DEV_ERROR_DETECT == STD_ON)
  retVal = E_NOT_OK;
  /* #10 Check initialization state of the component. */
  if (Crypto_30_CryWrapper_ModuleInitialized != CRYPTO_30_CRYWRAPPER_INITIALIZED)
  {
    /* [SWS_Crypto_00097] */
    errorId = CRYPTO_E_UNINIT;
  }
  /* #15 Check plausibility of parameters. */
  else if (cryptoKeyId >= Crypto_30_CryWrapper_GetSizeOfKey())
  {
    /* [SWS_Crypto_00098] */
    errorId = CRYPTO_E_PARAM_HANDLE;
  }
  else if (targetCryptoKeyId >= Crypto_30_CryWrapper_GetSizeOfKey())
  {
    errorId = CRYPTO_E_PARAM_HANDLE;
  }
  else
#endif
  {
    /* ----- Implementation ------------------------------------------------- */
    /* #20 Call hardware function. */
    retVal = Crypto_30_CryWrapper_Hw_KeyDerive(cryptoKeyId, targetCryptoKeyId);
  }

  /* ----- Development Error Report --------------------------------------- */
#if (CRYPTO_30_CRYWRAPPER_DEV_ERROR_REPORT == STD_ON)
  /* #80 Report error if applicable. */
  if (errorId != CRYPTO_E_NO_ERROR)
  {
    (void)Det_ReportError((uint16)CRYPTO_30_CRYWRAPPER_MODULE_ID, CRYPTO_30_CRYWRAPPER_INSTANCE_ID, CRYPTO_30_CRYWRAPPER_SID_KEY_DERIVE, errorId);
  }
#else
  CRYPTO_30_CRYWRAPPER_DUMMY_STATEMENT(errorId); /* PRQA S 3112 */ /* MD_MSR_14.2 */
#endif

  return retVal;
}  /* PRQA S 6030, 6080 */ /* MD_MSR_STCYC, MD_MSR_STMIF */
/* PRQA L:KEYDERIVE0715 */

/**********************************************************************************************************************
 * Crypto_30_CryWrapper_KeyExchangeCalcPubVal()
 **********************************************************************************************************************/
/*!
 *
 * Internal comment removed.
 *
 *
 *
 *
 *
 */
/* [SWS_Crypto_91009] */
FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_KeyExchangeCalcPubVal(
  uint32 cryptoKeyId,
  P2VAR(uint8, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) publicValuePtr,
  P2VAR(uint32, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) publicValueLengthPtr)
{
  /* ----- Local Variables ------------------------------------------------ */
  uint8 errorId = CRYPTO_E_NO_ERROR;
  Std_ReturnType retVal;

  /* ----- Development Error Checks ------------------------------------- */
#if (CRYPTO_30_CRYWRAPPER_DEV_ERROR_DETECT == STD_ON)
  retVal = E_NOT_OK;
  /* #10 Check initialization state of the component. */
  if (Crypto_30_CryWrapper_ModuleInitialized != CRYPTO_30_CRYWRAPPER_INITIALIZED)
  {
    /* [SWS_Crypto_00103] */
    errorId = CRYPTO_E_UNINIT;
  }
  /* #15 Check plausibility of parameters. */
  else if (cryptoKeyId >= Crypto_30_CryWrapper_GetSizeOfKey())
  {
    /* [SWS_Crypto_00104] */
    errorId = CRYPTO_E_PARAM_HANDLE;
  }
  else if (publicValuePtr == NULL_PTR)
  {
    /* [SWS_Crypto_00105] */
    errorId = CRYPTO_E_PARAM_POINTER;
  }
  else if (publicValueLengthPtr == NULL_PTR)
  {
    /* [SWS_Crypto_00106] */
    errorId = CRYPTO_E_PARAM_POINTER;
  }
  else if (*publicValueLengthPtr == 0u)
  {
    /* [SWS_Crypto_00107] */
    errorId = CRYPTO_E_PARAM_VALUE;
  }
  /* vismaw: the retVal is already captured in the methods body */
  /* [SWS_Crypto_00110] */
  else
#endif
  {
    /* ----- Implementation ------------------------------------------------- */
    /* #20 Call hardware function. */
    retVal = Crypto_30_CryWrapper_Hw_KeyExchangeCalcPubVal(cryptoKeyId, publicValuePtr, publicValueLengthPtr); /* SBSW_CRYPTO_30_CRYWRAPPER_HW_PTR_FORWARDING */
  }
  /* ----- Development Error Report --------------------------------------- */
#if (CRYPTO_30_CRYWRAPPER_DEV_ERROR_REPORT == STD_ON)
  /* #45 Report error if applicable. */
  if (errorId != CRYPTO_E_NO_ERROR)
  {
    (void)Det_ReportError((uint16)CRYPTO_30_CRYWRAPPER_MODULE_ID,
      CRYPTO_30_CRYWRAPPER_INSTANCE_ID,
      CRYPTO_30_CRYWRAPPER_SID_KEY_EXCHANGE_CALC_PUB_VAL,
      errorId);
  }
#else
  CRYPTO_30_CRYWRAPPER_DUMMY_STATEMENT(errorId); /* PRQA S 3112 */ /* MD_MSR_14.2 */
#endif

  return retVal;
} /* PRQA S 6030, 6080 */ /* MD_MSR_STCYC, MD_MSR_STMIF */

/**********************************************************************************************************************
 * Crypto_30_CryWrapper_KeyExchangeCalcSecret()
 **********************************************************************************************************************/
/*!
 *
 * Internal comment removed.
 *
 *
 *
 *
 *
 */
/* [SWS_Crypto_91010] */
FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_KeyExchangeCalcSecret(
  uint32 cryptoKeyId,
  P2CONST(uint8, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) partnerPublicValuePtr,
  uint32 partnerPublicValueLength)
{
  /* ----- Local Variables ------------------------------------------------ */
  Std_ReturnType retVal;
  uint8 errorId = CRYPTO_E_NO_ERROR;

  /* ----- Development Error Checks ------------------------------------- */
#if (CRYPTO_30_CRYWRAPPER_DEV_ERROR_DETECT == STD_ON)
  retVal = E_NOT_OK;
  /* #10 Check initialization state of the component. */
  if (Crypto_30_CryWrapper_ModuleInitialized != CRYPTO_30_CRYWRAPPER_INITIALIZED)
  {
    /* [SWS_Crypto_00111] */
    errorId = CRYPTO_E_UNINIT;
  }
  /* #15 Check plausibility of parameters. */
  else if (cryptoKeyId >= Crypto_30_CryWrapper_GetSizeOfKey())
  {
    /* [SWS_Crypto_00112] */
    errorId = CRYPTO_E_PARAM_HANDLE;
  }
  else if (partnerPublicValuePtr == NULL_PTR)
  {
    /* [SWS_Crypto_00113] */
    errorId = CRYPTO_E_PARAM_POINTER;
  }
  else if (partnerPublicValueLength == 0u)
  {
    /* [SWS_Crypto_00115] */
    errorId = CRYPTO_E_PARAM_VALUE;
  }
  else
#endif
  {
    /* ----- Implementation ------------------------------------------------- */
    /* #20 Call hardware function. */
    retVal = Crypto_30_CryWrapper_Hw_KeyExchangeCalcSecret(cryptoKeyId, partnerPublicValuePtr, partnerPublicValueLength); /* SBSW_CRYPTO_30_CRYWRAPPER_HW_PTR_FORWARDING */
  }

  /* ----- Development Error Report --------------------------------------- */
#if (CRYPTO_30_CRYWRAPPER_DEV_ERROR_REPORT == STD_ON)
  /* #45 Report error if applicable. */
  if (errorId != CRYPTO_E_NO_ERROR)
  {
    (void)Det_ReportError((uint16)CRYPTO_30_CRYWRAPPER_MODULE_ID,
      CRYPTO_30_CRYWRAPPER_INSTANCE_ID,
      CRYPTO_30_CRYWRAPPER_SID_KEY_EXCHANGE_CALC_SECRET,
      errorId);
  }
#else
  CRYPTO_30_CRYWRAPPER_DUMMY_STATEMENT(errorId); /* PRQA S 3112 */ /* MD_MSR_14.2 */
#endif

  return retVal;
} /* PRQA S 6030, 6050, 6080 */ /* MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

/**********************************************************************************************************************
 * Crypto_30_CryWrapper_CertificateParse()
 **********************************************************************************************************************/
/*!
 *
 * Internal comment removed.
 *
 *
 *
 *
 */
FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_CertificateParse(
  uint32 cryptoKeyId)
{
  /* ----- Local Variables ------------------------------------------------ */
  Std_ReturnType retVal = E_NOT_OK;
  uint8 errorId = CRYPTO_E_NO_ERROR;

  /* ----- Development Error Checks ------------------------------------- */
#if (CRYPTO_30_CRYWRAPPER_DEV_ERROR_DETECT == STD_ON)
  /* #10 Check initialization state of the component. */
  if (Crypto_30_CryWrapper_ModuleInitialized != CRYPTO_30_CRYWRAPPER_INITIALIZED)
  {
    /* [SWS_Crypto_00168] */
    errorId = CRYPTO_E_UNINIT;
  }
  /* #15 Check plausibility of parameters. */
  else if (cryptoKeyId >= Crypto_30_CryWrapper_GetSizeOfKey())
  {
    /* [SWS_Crypto_00169] */
    errorId = CRYPTO_E_PARAM_HANDLE;
  }
  else
#endif
  {
    /* ----- Implementation ------------------------------------------------- */

    CRYPTO_30_CRYWRAPPER_DUMMY_STATEMENT(cryptoKeyId);  /* PRQA S 3112 */ /* MD_MSR_14.2 */

  }
  /* ----- Development Error Report --------------------------------------- */
#if (CRYPTO_30_CRYWRAPPER_DEV_ERROR_REPORT == STD_ON)
  /* #20 Report error if applicable. */
  if (errorId != CRYPTO_E_NO_ERROR)
  {
    (void)Det_ReportError((uint16)CRYPTO_30_CRYWRAPPER_MODULE_ID,
      CRYPTO_30_CRYWRAPPER_INSTANCE_ID,
      CRYPTO_30_CRYWRAPPER_SID_CERTIFICATE_PARSE,
      errorId);
  }
#else
  CRYPTO_30_CRYWRAPPER_DUMMY_STATEMENT(errorId); /* PRQA S 3112 */ /* MD_MSR_14.2 */
#endif

  return retVal;
}

/**********************************************************************************************************************
 * Crypto_30_CryWrapper_CertificateVerify()
 **********************************************************************************************************************/
/*!
 *
 * Internal comment removed.
 *
 *
 *
 *
 */

FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_CertificateVerify(
  uint32 cryptoKeyId,
  uint32 verifyCryptoKeyId,
  P2VAR(Crypto_VerifyResultType, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) verifyPtr) /* PRQA S 3673 */ /* MD_CRYPTO_30_CRYWRAPPER_3673_2 */
{
  /* ----- Local Variables ------------------------------------------------ */
  Std_ReturnType retVal = E_NOT_OK;
  uint8 errorId = CRYPTO_E_NO_ERROR;

  /* ----- Development Error Checks ------------------------------------- */
#if (CRYPTO_30_CRYWRAPPER_DEV_ERROR_DETECT == STD_ON)
  /* #10 Check initialization state of the component. */
  if (Crypto_30_CryWrapper_ModuleInitialized != CRYPTO_30_CRYWRAPPER_INITIALIZED)
  {
    /* [SWS_Crypto_00172] */
    errorId = CRYPTO_E_UNINIT;
  }
  /* #15 Check plausibility of parameters. */
  else if (cryptoKeyId >= Crypto_30_CryWrapper_GetSizeOfKey())
  {
    /* [SWS_Crypto_00173] */
    errorId = CRYPTO_E_PARAM_HANDLE;
  }
  else if (verifyCryptoKeyId >= Crypto_30_CryWrapper_GetSizeOfKey())
  {
    /* [SWS_Crypto_00174] */
    errorId = CRYPTO_E_PARAM_HANDLE;
  }
  else if (verifyPtr == NULL_PTR)
  {
    /* [SWS_Crypto_00175] */
    errorId = CRYPTO_E_PARAM_POINTER;
  }
  else
#endif
  {
    /* ----- Implementation ------------------------------------------------- */
    CRYPTO_30_CRYWRAPPER_DUMMY_STATEMENT(cryptoKeyId); /* PRQA S 3112 */ /* MD_MSR_14.2 */
    CRYPTO_30_CRYWRAPPER_DUMMY_STATEMENT(verifyCryptoKeyId); /* PRQA S 3112 */ /* MD_MSR_14.2 */
    CRYPTO_30_CRYWRAPPER_DUMMY_STATEMENT(verifyPtr); /* PRQA S 3112 */ /* MD_MSR_14.2 */

  }
  /* ----- Development Error Report --------------------------------------- */
#if (CRYPTO_30_CRYWRAPPER_DEV_ERROR_REPORT == STD_ON)
  /* #20 Report error if applicable. */
  if (errorId != CRYPTO_E_NO_ERROR)
  {
    (void)Det_ReportError((uint16)CRYPTO_30_CRYWRAPPER_MODULE_ID,
      CRYPTO_30_CRYWRAPPER_INSTANCE_ID,
      CRYPTO_30_CRYWRAPPER_SID_CERTIFICATE_VERIFY,
      errorId);
  }
#else
  CRYPTO_30_CRYWRAPPER_DUMMY_STATEMENT(errorId); /* PRQA S 3112 */ /* MD_MSR_14.2 */
#endif

  return retVal;
}

#define CRYPTO_30_CRYWRAPPER_STOP_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  END OF FILE: Crypto_30_CryWrapper_KeyManagement.c
 *********************************************************************************************************************/
