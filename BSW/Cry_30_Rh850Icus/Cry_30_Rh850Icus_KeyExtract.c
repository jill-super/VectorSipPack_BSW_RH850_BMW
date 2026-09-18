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
/*!        \file  Cry_30_Rh850Icus_KeyExtract.c
 *        \brief  Implements the CRY KeyExtract API for the ASR CSM.
 *
 *      \details  -
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Refer to the module's header file.
 *********************************************************************************************************************/

#define CRY_30_RH850ICUS_KEYEXTRACT_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/

#include "Cry_30_Rh850Icus.h"
#include "Csm_Cbk.h"
#include "Cry_30_Rh850Icus_CommonUtil.h"
#include "Cry_30_Rh850Icus_Hw.h"

#if ( CRY_30_RH850ICUS_KEYEXTRACTCONFIG == STD_ON )
/**********************************************************************************************************************
 *  LOCAL CONSTANT MACROS
 **********************************************************************************************************************/

/* Key Extract specific service defines */
# define CRY_30_RH850ICUS_KEYEXTRACT_KEYUPDATE                                    (64u)
# define CRY_30_RH850ICUS_KEYEXTRACT_KEYUPDATE_WITH_KEYID                         (65u)
# define CRY_30_RH850ICUS_KEYEXTRACT_DEFAULT_KEY_LENGTH                           (16u)

# define CRY_30_RH850ICUS_KEYEXTRACT_LENGTH_KEYSLOT_ID                            (1u)
# define CRY_30_RH850ICUS_KEYEXTRACT_LENGTH_M1                                    (16u)
# define CRY_30_RH850ICUS_KEYEXTRACT_LENGTH_M2                                    (32u)
# define CRY_30_RH850ICUS_KEYEXTRACT_LENGTH_M3                                    (16u)
# define CRY_30_RH850ICUS_KEYEXTRACT_LENGTH_M4                                    (32u)
# define CRY_30_RH850ICUS_KEYEXTRACT_LENGTH_M5                                    (16u)
# define CRY_30_RH850ICUS_KEYEXTRACT_LENGTH_M1M2M3                                (CRY_30_RH850ICUS_KEYEXTRACT_LENGTH_M1 + CRY_30_RH850ICUS_KEYEXTRACT_LENGTH_M2 + CRY_30_RH850ICUS_KEYEXTRACT_LENGTH_M3)
# define CRY_30_RH850ICUS_KEYEXTRACT_LENGTH_M4M5                                  (CRY_30_RH850ICUS_KEYEXTRACT_LENGTH_M4 + CRY_30_RH850ICUS_KEYEXTRACT_LENGTH_M5)

# define CRY_30_RH850ICUS_KEYEXTRACT_OFFSET_M1                                    (0u)
# define CRY_30_RH850ICUS_KEYEXTRACT_OFFSET_M2                                    (CRY_30_RH850ICUS_KEYEXTRACT_LENGTH_M1)
# define CRY_30_RH850ICUS_KEYEXTRACT_OFFSET_M3                                    (CRY_30_RH850ICUS_KEYEXTRACT_OFFSET_M2 + CRY_30_RH850ICUS_KEYEXTRACT_LENGTH_M2)
# define CRY_30_RH850ICUS_KEYEXTRACT_OFFSET_M4                                    (CRY_30_RH850ICUS_KEYEXTRACT_OFFSET_M3 + CRY_30_RH850ICUS_KEYEXTRACT_LENGTH_M3)
# define CRY_30_RH850ICUS_KEYEXTRACT_OFFSET_M5                                    (CRY_30_RH850ICUS_KEYEXTRACT_OFFSET_M4 + CRY_30_RH850ICUS_KEYEXTRACT_LENGTH_M4)

# define CRY_30_RH850ICUS_KEYEXTRACT_KEY_INFORMATION_OFFSET                       (15u)
# define CRY_30_RH850ICUS_KEYEXTRACT_AUTHID_MASK                                  (0x0F)
# define CRY_30_RH850ICUS_KEYEXTRACT_KEYID_MASK                                   (0xF0)

/* Size of the data buffer available in the Csm_SymKeyType */
# define CRY_30_RH850ICUS_KEYEXTRACT_LENGTH_M4M5_KEY_BUFFER                       (CSM_MAX_ALIGN_SCALAR_TYPE / CRY_30_RH850ICUS_BITS_PER_BYTE * CSM_SYM_KEY_MAX_SIZE)

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
  P2CONST(Cry_30_Rh850Icus_KeyExtractConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) contextPtr; /*<! Holds a pointer to the configuration of this service. */
  P2CONST( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) dataPtr;       /*<! Holds a pointer to the data which contains either a plaintext key or info for the SHE key update protocol */
  uint32 dataLength;                                             /*<! Holds the length of the data in bytes. */
  P2VAR( Csm_SymKeyType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) keyPtr; /*<! Holds a pointer to a structure in which the result (e.g. the symmetrical key) is stored. */
} Cry_30_Rh850Icus_KeyExtract_BufferType;
# endif /* ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_OFF ) */

/**********************************************************************************************************************
 *  LOCAL DATA PROTOTYPES
 **********************************************************************************************************************/

# if ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_OFF )
#  define CRY_30_RH850ICUS_START_SEC_VAR_NOINIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! Buffer containing the data used during the service execution */
CRY_30_RH850ICUS_LOCAL VAR(Cry_30_Rh850Icus_KeyExtract_BufferType, CRY_30_RH850ICUS_VAR_NOINIT) Cry_30_Rh850Icus_KeyExtract_Buffer; /* PRQA S 0779 */ /* MD_MSR_5.1_779 */

#  define CRY_30_RH850ICUS_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define CRY_30_RH850ICUS_START_SEC_VAR_NOINIT_8BIT
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! State of the service */
CRY_30_RH850ICUS_LOCAL VAR(uint8, CRY_30_RH850ICUS_VAR_NOINIT) Cry_30_Rh850Icus_KeyExtract_Status; /* PRQA S 0779 */ /* MD_MSR_5.1_779 */

#  define CRY_30_RH850ICUS_STOP_SEC_VAR_NOINIT_8BIT
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
# endif /* ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_OFF ) */

# define CRY_30_RH850ICUS_START_SEC_VAR_NOINIT_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

CRY_30_RH850ICUS_LOCAL VAR(uint32, CRY_30_RH850ICUS_VAR_NOINIT) m4m5Array32BitAligned[CRY_30_RH850ICUS_KEYEXTRACT_LENGTH_M4M5 / 4]; /* PRQA S 3218 */ /* MD_CRY_3218_GLOBAL_VAR */

# define CRY_30_RH850ICUS_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 **********************************************************************************************************************/

# define CRY_30_RH850ICUS_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_KeyExtractIsValidAuthKeyIdCombination()
 **********************************************************************************************************************/
/*! \brief         Function validates if the combination of keyId and authId is a valid combination to load the key.
 *  \details       The function determines the raw keyId of the given keyId. It is checked if combination of the
 *                 raw keyId and authId are valid for to load a key.
 *  \return        CSM_E_OK     Request successful.
 *  \return        CSM_E_NOT_OK Request failed.
 *  \param[in]     keyId     ID of the key
 *  \param[in]     keyIdType Specifies in which way the keyId is interpreted
 *  \param[in]     authId    ID of the authentication key
 *  \pre           Only to be called by Cry_30_Rh850Icus_KeyExtractUpdateInternal (input parameters already validated).
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CRY_30_RH850ICUS_KEYEXTRACTCONFIG
 **********************************************************************************************************************/
CRY_30_RH850ICUS_LOCAL_INLINE FUNC(Csm_ReturnType, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_KeyExtractIsValidAuthKeyIdCombination(
  uint32 keyId,
  uint32 keyIdType,
  uint32 authId);

/**********************************************************************************************************************
*  Cry_30_Rh850Icus_KeyExtractHandleM1ToM3Message()
**********************************************************************************************************************/
/*! \brief         Function sends the M1M2M3 update protocol message to the SHE.
 *  \details       The function interprets the M1M2M3 message and sends it to the SHE. The return value from the SHE
 *                 (M4M5) message is stored in the workspace including its size.
 *  \return        CSM_E_OK     Request successful.
 *  \return        CSM_E_NOT_OK Request failed.
 *  \param[in]     contextPtr   Contains the context (configuration) of the Key Extract service.
 *  \param[in]     workSpacePtr Contains the workspace (data) of the Key Extract service.
 *  \param[in]     dataPtr      Holds a pointer to the data which contains messages M1, M2, M3
 *                              with an optional prepending KeyId to update a keyslot in the SHE
 *                              (length is 64 or 65 bytes).
 *  \param[in]     dataLength   Holds the length of the data in bytes.
 *  \pre           Only to be called by Cry_30_Rh850Icus_KeyExtractUpdateInternal (input parameters already validated).
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CRY_30_RH850ICUS_KEYEXTRACTCONFIG
**********************************************************************************************************************/
CRY_30_RH850ICUS_LOCAL FUNC(Csm_ReturnType, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_KeyExtractHandleM1ToM3Message(
  P2CONST(Cry_30_Rh850Icus_KeyExtractConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) contextPtr,
  P2VAR(Cry_30_Rh850Icus_KeyExtractWorkSpaceType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) workSpacePtr,
  P2CONST(uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) dataPtr,
  uint32 dataLength);

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_KeyExtractStartInternal()
 **********************************************************************************************************************/
/*! \brief         Function starts the key extract service.
 *  \details       -
 *  \return        CSM_E_OK     Request successful.
 *  \return        CSM_E_NOT_OK Request failed.
 *  \return        CSM_E_BUSY   Request failed, service is still busy.
 *  \pre           Service is idle.
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CRY_30_RH850ICUS_KEYEXTRACTCONFIG
 *  \note          It is important to call the Finish-Function of this service after a successful call of this function
 *                 (CSM_E_OK). A call of the Update-Function between them is allowed.
 *                 Attention: If the Finish-function is never called, the SHE is blocked for all other services.
 **********************************************************************************************************************/
CRY_30_RH850ICUS_LOCAL FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_KeyExtractStartInternal(void);

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_KeyExtractUpdateInternal()
 **********************************************************************************************************************/
/*! \brief         Function updates the key extract service.
 *  \details       This function provides different possibilities to store keys.
 *                 1. Input data with the length of 16 Byte will be stored in the KEY_RAM.
 *                 2. Input data with the length of 64 Byte will be interpreted as M1-M3 for the key update protocol
 *                    as specified in the SHE spec.
 *                 3. Input data with the length of 65 Byte will be interpreted as M1-M3 for the key update protocol
 *                    as specified in the SHE spec including a KeyId in the first byte of the input data.
 *                 4. Input data with the length of 1 Byte will be used as the data in the key which is returned
 *                    in the finish-function
 *  \param[in]     contextPtr   Holds a pointer to the configuration of this service.
 *  \param[in]     dataPtr      Holds a pointer to the data which contains either
 *                                 - a plaintext key (length is 16).
 *                                 - messages M1, M2, M3 with an optional prepending KeyId to update a keyslot in the
 *                                   SHE (length is 64 or 65 bytes).
 *                                 - a KeyId (length is 1).
 *  \param[in]     dataLength   Holds the length of the data in bytes.
 *  \return        CSM_E_OK     Request successful.
 *  \return        CSM_E_NOT_OK Request failed.
 *  \pre           Service is started.
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CRY_30_RH850ICUS_KEYEXTRACTCONFIG
 *  \note          The driver does not support multiple update calls.
 **********************************************************************************************************************/
CRY_30_RH850ICUS_LOCAL FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_KeyExtractUpdateInternal(
  P2CONST( Cry_30_Rh850Icus_KeyExtractConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) contextPtr,
  P2CONST( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) dataPtr,
  uint32 dataLength );

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_KeyExtractFinishInternal()
 **********************************************************************************************************************/
/*! \brief         Function finishes the key extract service.
 *  \details       If a key is updated in the NVM, the key data will contain the M4-M5 of the SHE key update protocol.
                   If the KEY_RAM has been updated, the key data will contain the corresponding keyId for that slot
                   which can be used as input for e.g. AES encrypt.
 *  \param[in]     contextPtr   Holds a pointer to the configuration of this service.
 *  \param[out]    keyPtr       Holds a pointer to a structure where the result (e.g. the symmetrical key) is stored in.
 *  \return        CSM_E_OK     Request successful.
 *  \return        CSM_E_NOT_OK Request failed.
 *  \pre           Service is started.
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CRY_30_RH850ICUS_KEYEXTRACTCONFIG
 *  \note          This function must only be called one after a succesful call of the corresponding Start-Function of
 *                 this service. It is not allowed to call this function multiple times even if the return value is not
 *                 CSM_E_OK.
 **********************************************************************************************************************/
CRY_30_RH850ICUS_LOCAL FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_KeyExtractFinishInternal(
  P2CONST( Cry_30_Rh850Icus_KeyExtractConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) contextPtr,
  P2VAR( Csm_SymKeyType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) keyPtr );

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 **********************************************************************************************************************/

 /**********************************************************************************************************************
 * Cry_30_Rh850Icus_KeyExtractIsValidAuthKeyIdCombination()
 **********************************************************************************************************************/
 /*!
 * Internal comment removed.
 *
 *
 *
 */
CRY_30_RH850ICUS_LOCAL_INLINE FUNC(Csm_ReturnType, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_KeyExtractIsValidAuthKeyIdCombination(
  uint32 keyId,
  uint32 keyIdType,
  uint32 authId )
{
  Csm_ReturnType retVal = CSM_E_NOT_OK;
  uint32 keyIdRaw;

  /* #10 Call subfunction to calculate raw key id. */
  keyIdRaw = Cry_30_Rh850Icus_GetRawKeyId((uint8)keyId, keyIdType);

  /* #20 Check if authId and raw keyId combination is valid and return result. */
  if ((authId == keyIdRaw)
    || (authId == CRY_KEYID_RAW_MASTER_ECU_KEY)
    || ((authId == CRY_KEYID_RAW_BOOT_MAC_KEY) && (keyIdRaw == CRY_KEYID_RAW_BOOT_MAC))
    || ((authId == CRY_KEYID_RAW_SECRET_KEY) && (keyIdRaw == CRY_KEYID_RAW_KEY_RAM))
    || (((authId >= CRY_KEYID_RAW_KEY_1) && (authId <= CRY_KEYID_RAW_KEY_10)) && (keyIdRaw == CRY_KEYID_RAW_KEY_RAM)))
  {
    retVal = CSM_E_OK;
  }

  return retVal;
} /* Cry_30_Rh850Icus_KeyExtractIsValidAuthKeyIdCombination() */

/**********************************************************************************************************************
*  Cry_30_Rh850Icus_KeyExtractHandleM1ToM3Message()
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
CRY_30_RH850ICUS_LOCAL FUNC(Csm_ReturnType, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_KeyExtractHandleM1ToM3Message(
  P2CONST(Cry_30_Rh850Icus_KeyExtractConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) contextPtr,
  P2VAR(Cry_30_Rh850Icus_KeyExtractWorkSpaceType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) workSpacePtr,
  P2CONST(uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) dataPtr,
  uint32 dataLength)
{
  /* ----- Local Variables ---------------------------------------------- */
  Csm_ReturnType retVal = CSM_E_NOT_OK;
  P2CONST(uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) m1m2m3Ptr = NULL_PTR;
  P2VAR(uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) m4m5Ptr = NULL_PTR;
  uint8 keyId = 0u;
  uint8 authId = 0u;
  Cry_30_Rh850Icus_KeyIdTypeOfKeyExtractConfigType keyIdType = CRY_30_RH850ICUS_KEYIDTYPE_RAW;

  /* ----- Implementation ----------------------------------------------- */
  /* #10 Interpret dataPtr as m1m2m3 message and determine keyId and authId (dependend on dataLength). */
  if (dataLength == CRY_30_RH850ICUS_KEYEXTRACT_KEYUPDATE)
  {
    /* Extract KeyID and AuthID from M1 */
    m1m2m3Ptr = &dataPtr[0u];
# if (CRY_30_RH850ICUS_INVALID_MEMORY_DETECTION == STD_ON) /* COV_CRY_INVALID_MEMORY_DETECTION */
    /* #15 If INVALID_MEMORY_DETECTION is enabled: */
    /* #16 ExtensionPart: Call subfunction to check if dataPtr needs to be copied to global buffer. */
    if (Cry_30_Rh850Icus_Hw_IsMemoryValid(&dataPtr[0], CRY_30_RH850ICUS_KEYEXTRACT_KEYUPDATE) == FALSE) /* SBSW_CRY_FCTCALL_PTRFORWARDING_INVALID_MEMORY */
    {
      /* #17 Copy data to global buffer which is correct located in the memory. */
      Cry_30_Rh850Icus_CopyByteArrayToWordArray(&dataPtr[0], Cry_30_Rh850Icus_DataBuffer, CRY_30_RH850ICUS_KEYEXTRACT_KEYUPDATE); /* PRQA S 0310 */ /* MD_CRY_0310_ALIGNED_ARRAY */ /* SBSW_CRY_FCTCALL_PTRFORWARDING_BUFFERED_DATA */
      m1m2m3Ptr = (uint8*)Cry_30_Rh850Icus_DataBuffer; /* PRQA S 0310 */ /* MD_CRY_0310_ALIGNED_ARRAY */
    }
# endif

    keyId = (uint8)((m1m2m3Ptr[CRY_30_RH850ICUS_KEYEXTRACT_KEY_INFORMATION_OFFSET] & CRY_30_RH850ICUS_KEYEXTRACT_KEYID_MASK) >> 4u);
    authId = (uint8)(m1m2m3Ptr[CRY_30_RH850ICUS_KEYEXTRACT_KEY_INFORMATION_OFFSET] & CRY_30_RH850ICUS_KEYEXTRACT_AUTHID_MASK);

    /* The keyId has to be interpreted as RAW */
    keyIdType = CRY_30_RH850ICUS_KEYIDTYPE_RAW;
  }
  else /* CRY_30_RH850ICUS_KEYEXTRACT_KEYUPDATE_WITH_KEYID */
  {
    /* Extract KeyID from prepending byte and AuthID from M1 */
    m1m2m3Ptr = &dataPtr[1u];
# if (CRY_30_RH850ICUS_INVALID_MEMORY_DETECTION == STD_ON) /* COV_CRY_INVALID_MEMORY_DETECTION */
    /* #15 If INVALID_MEMORY_DETECTION is enabled: */
    /* #16 ExtensionPart: Call subfunction to check if dataPtr needs to be copied to global buffer. */
    if (Cry_30_Rh850Icus_Hw_IsMemoryValid(&dataPtr[1], CRY_30_RH850ICUS_KEYEXTRACT_KEYUPDATE) == FALSE) /* SBSW_CRY_FCTCALL_PTRFORWARDING_INVALID_MEMORY */
    {
      /* #17 Copy data to global buffer which is correct located in the memory. */
      Cry_30_Rh850Icus_CopyByteArrayToWordArray(&dataPtr[1], Cry_30_Rh850Icus_DataBuffer, CRY_30_RH850ICUS_KEYEXTRACT_KEYUPDATE); /* PRQA S 0310 */ /* MD_CRY_0310_ALIGNED_ARRAY */ /* SBSW_CRY_FCTCALL_PTRFORWARDING_BUFFERED_DATA */
      m1m2m3Ptr = (uint8*)Cry_30_Rh850Icus_DataBuffer; /* PRQA S 0310 */ /* MD_CRY_0310_ALIGNED_ARRAY */
    }
# endif

    keyId = dataPtr[0u];
    authId = (uint8)(m1m2m3Ptr[CRY_30_RH850ICUS_KEYEXTRACT_KEY_INFORMATION_OFFSET] & CRY_30_RH850ICUS_KEYEXTRACT_AUTHID_MASK);

    /* The keyId has to be interpreted as specified in the configuration */
    keyIdType = Cry_30_Rh850Icus_GetKeyIdTypeOfKeyExtractConfig(contextPtr);
  }

  /* #20 Call subfunction to check if combination of keyId and authId is valid to load the key. */
  retVal = Cry_30_Rh850Icus_KeyExtractIsValidAuthKeyIdCombination(keyId, keyIdType, authId);
  if (retVal == CSM_E_OK)
  {
    /* #21 Store m4m5 message for finish call of the service. */
    m4m5Ptr = (uint8*)m4m5Array32BitAligned; /* PRQA S 0310 */ /* MD_CRY_0310_ALIGNED_ARRAY */

    /* #22 ExtensionPart: Call subfunction to update the key extract primitive (send command to hw). */
    retVal = Cry_30_Rh850Icus_Hw_KeyExtractUpdateInternal(keyId, keyIdType, m1m2m3Ptr, m4m5Ptr); /* SBSW_CRY_FCTCALL_PTRFORWARDING_BUFFERED_DATA */

    /* Check if size of data buffer in Csm_SymKeyType is big enough to store M4 and M5 */
# if (CRY_30_RH850ICUS_KEYEXTRACT_LENGTH_M4M5_KEY_BUFFER >= CRY_30_RH850ICUS_KEYEXTRACT_LENGTH_M4M5)
    /* The cast is needed to store data to the key buffer independant of the type of the key.data array */
    Cry_30_Rh850Icus_CopyWordArrayToByteArray(m4m5Array32BitAligned, (P2VAR(uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR))workSpacePtr->key.data, CRY_30_RH850ICUS_KEYEXTRACT_LENGTH_M4M5); /* PRQA S 0310 */ /* MD_CRY_0310_KEY_DATA */ /* SBSW_CRY_FCTCALL_PTRFORWARDING */
    /* #30 Write back keyLength with size of m4m5 message (in case of error write 0). */
    workSpacePtr->key.length = CRY_30_RH850ICUS_KEYEXTRACT_LENGTH_M4M5; /* SBSW_CRY_WRITE_WORKSPACE */
# else /* CsmSymKeyExtractMaxKeySize must be set to at least 48 */
    /* #30 Write back keyLength with size of m4m5 message (in case of error write 0). */
    /* Indicate that M4 and M5 are not written to the key data */
    workSpacePtr->key.length = 0u; /* SBSW_CRY_WRITE_WORKSPACE */
# endif
  }
  else /* AuthId was invalid */
  {
    /* #30 Write back keyLength with size of m4m5 message (in case of error write 0). */
    workSpacePtr->key.length = 0u; /* SBSW_CRY_WRITE_WORKSPACE */
# if (CRY_30_RH850ICUS_HARDWARE_ERROR_CODE == STD_ON)
    /* This error is handled in software, therefore pass the error directly instead of using the content of the error register */
    Cry_30_Rh850Icus_HardwareErrorCode_Callout(CRY_30_RH850ICUS_ERC_KEY_UPDATE_ERROR);
# endif
  }

  return retVal;
}

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_KeyExtractStartInternal()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 */
CRY_30_RH850ICUS_LOCAL FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_KeyExtractStartInternal(void)
{
  /* ----- Local Variables ---------------------------------------------- */
  Csm_ReturnType retVal = CSM_E_NOT_OK;

  /* ----- Implementation ----------------------------------------------- */
  /* #10 Check if service is idle (no other service is running). */
  SchM_Enter_Cry_30_Rh850Icus_CRY_30_RH850ICUS_EXCLUSIVE_AREA();
  if ( Cry_30_Rh850Icus_ServiceState == CRY_30_RH850ICUS_SERVICE_IDLE )
  {
    /* #11 Set state to start. */
    Cry_30_Rh850Icus_ServiceState = CRY_30_RH850ICUS_SERVICE_KEYEXTRACT_START;
    retVal = CSM_E_OK;
  }
  else
  {
    /* #20 If service state is not idle, return CSM_E_BUSY. */
    retVal = CSM_E_BUSY;
  }
  SchM_Exit_Cry_30_Rh850Icus_CRY_30_RH850ICUS_EXCLUSIVE_AREA();

  return retVal;
} /* Cry_30_Rh850Icus_KeyExtractStartInternal() */

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_KeyExtractUpdateInternal()
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
 */
CRY_30_RH850ICUS_LOCAL FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_KeyExtractUpdateInternal(
  P2CONST(Cry_30_Rh850Icus_KeyExtractConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) contextPtr,
  P2CONST( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) dataPtr,
  uint32 dataLength )
{
  /* ----- Local Variables ---------------------------------------------- */
  Csm_ReturnType retVal = CSM_E_NOT_OK;

  P2VAR( Cry_30_Rh850Icus_KeyExtractWorkSpaceType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) workSpacePtr = Cry_30_Rh850Icus_GetAddrKeyExtractWorkSpace(Cry_30_Rh850Icus_GetKeyExtractWorkSpaceIdxOfKeyExtractConfig(contextPtr));

  /* ----- Implementation ----------------------------------------------- */
# if ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_ON )
  /* #10 Check if service has been started. */
  if ( Cry_30_Rh850Icus_ServiceState == CRY_30_RH850ICUS_SERVICE_KEYEXTRACT_START )
# endif
  {
    /* #20 If input contains SHE update protocol data: */
    if (((dataLength == CRY_30_RH850ICUS_KEYEXTRACT_KEYUPDATE) || (dataLength == CRY_30_RH850ICUS_KEYEXTRACT_KEYUPDATE_WITH_KEYID)))
    {
      /* #21 Call subfunction to send the load key command with update protocol to the SHE. */
      retVal = Cry_30_Rh850Icus_KeyExtractHandleM1ToM3Message(contextPtr, workSpacePtr, dataPtr, dataLength); /* SBSW_CRY_FCTCALL_PTRFORWARDING */
    }
    /* #30 If input contains a plain key: */
    else if (dataLength == CRY_30_RH850ICUS_KEYEXTRACT_DEFAULT_KEY_LENGTH)
    {
      /* #31 Store RAM key ID as key slot number (mapped or raw dependend on configuration). */
      if (Cry_30_Rh850Icus_GetKeyIdTypeOfKeyExtractConfig(contextPtr) == CRY_30_RH850ICUS_KEYIDTYPE_RAW)
      {
        workSpacePtr->key.data[0] = CRY_KEYID_RAW_KEY_RAM; /* SBSW_CRY_WRITE_WORKSPACE */ /* SBSW_CRY_WRITE_WORKSPACE_ARRAY */
      }
      else /* CRY_30_RH850ICUS_KEYIDTYPE_MAPPED */
      {
        workSpacePtr->key.data[0] = CRY_KEYID_MAPPED_KEY_RAM; /* SBSW_CRY_WRITE_WORKSPACE */ /* SBSW_CRY_WRITE_WORKSPACE_ARRAY */
      }
      /* #32 Set keyLength in internal storage to CRY_30_RH850ICUS_KEYEXTRACT_LENGTH_KEYSLOT_ID. */
      workSpacePtr->key.length = CRY_30_RH850ICUS_KEYEXTRACT_LENGTH_KEYSLOT_ID; /* SBSW_CRY_WRITE_WORKSPACE */

# if (CRY_30_RH850ICUS_INVALID_MEMORY_DETECTION == STD_ON) /* COV_CRY_INVALID_MEMORY_DETECTION */
      {
        /* #33 If INVALID_MEMORY_DETECTION is enabled: */
        P2CONST(uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) inputPtr = dataPtr;
        /* #34 ExtensionPart: Call subfunction to check if data needs to be copied to global buffer. */
        if (Cry_30_Rh850Icus_Hw_IsMemoryValid(dataPtr, CRY_30_RH850ICUS_KEYSIZE) == FALSE) /* SBSW_CRY_FCTCALL_PTRFORWARDING_INVALID_MEMORY */
        {
          /* #35 Copy data to global buffer which is correct located in the memory. */
          Cry_30_Rh850Icus_CopyByteArrayToWordArray(dataPtr, Cry_30_Rh850Icus_AesBlockBuffer, CRY_30_RH850ICUS_KEYSIZE); /* SBSW_CRY_FCTCALL_PTRFORWARDING_BUFFERED_DATA */
          inputPtr = (P2CONST(uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR))Cry_30_Rh850Icus_AesBlockBuffer; /* PRQA S 0310 */ /* MD_CRY_0310_ALIGNED_ARRAY */
        }
        /* #36 Load key data to RAM key slot. */
        retVal = Cry_30_Rh850Icus_Hw_LoadPlainKey((P2CONST(uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR))inputPtr); /* PRQA S 0310 */ /* MD_CRY_0310_ALIGNED_ARRAY */ /* SBSW_CRY_FCTCALL_PTRFORWARDING_BUFFERED_DATA */
      }
# else
      /* #36 Load key data to RAM key slot. */
      retVal = Cry_30_Rh850Icus_Hw_LoadPlainKey(dataPtr); /* SBSW_CRY_FCTCALL_PTRFORWARDING */
# endif
    }
    /* #40 If input contains key slot number: */
    else if (dataLength == CRY_30_RH850ICUS_KEYEXTRACT_LENGTH_KEYSLOT_ID)
    {
      /* #41 Store key slot number and length to internal storage. */
      workSpacePtr->key.data[0u] = dataPtr[0u]; /* SBSW_CRY_WRITE_WORKSPACE */ /* SBSW_CRY_WRITE_WORKSPACE_ARRAY */
      workSpacePtr->key.length = CRY_30_RH850ICUS_KEYEXTRACT_LENGTH_KEYSLOT_ID; /* SBSW_CRY_WRITE_WORKSPACE */
      retVal = CSM_E_OK;
    }
    else
    {
      /* No key detected, nothing to do, retVal is already initialized with CSM_E_NOT_OK. */
    }
  }

  /* #50 If no errors occured, set state to Update. */
  if ( retVal == CSM_E_OK )
  {
    Cry_30_Rh850Icus_ServiceState = CRY_30_RH850ICUS_SERVICE_KEYEXTRACT_UPDATE;
  }

  return retVal;
} /* Cry_30_Rh850Icus_KeyExtractUpdateInternal() */

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_KeyExtractFinishInternal()
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
CRY_30_RH850ICUS_LOCAL FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_KeyExtractFinishInternal(
  P2CONST( Cry_30_Rh850Icus_KeyExtractConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) contextPtr,
  P2VAR( Csm_SymKeyType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) keyPtr )
{
  /* ----- Local Variables ---------------------------------------------- */
  Csm_ReturnType retVal = CSM_E_NOT_OK;
  uint32 keyLength;
# if (CRY_30_RH850ICUS_KEYEXTRACT_LENGTH_M4M5_KEY_BUFFER >= CRY_30_RH850ICUS_KEYEXTRACT_LENGTH_M4M5)
  uint8_least i;
# endif

  P2VAR( Cry_30_Rh850Icus_KeyExtractWorkSpaceType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) workSpacePtr = Cry_30_Rh850Icus_GetAddrKeyExtractWorkSpace(Cry_30_Rh850Icus_GetKeyExtractWorkSpaceIdxOfKeyExtractConfig(contextPtr));

  /* ----- Implementation ----------------------------------------------- */
  /* #10 Check if service has been updated. */
  if (Cry_30_Rh850Icus_ServiceState == CRY_30_RH850ICUS_SERVICE_KEYEXTRACT_UPDATE)
  {
    keyLength = workSpacePtr->key.length;

    /* #20 Copy stored key data from update function to keyPtr->data. */
    if (keyLength == CRY_30_RH850ICUS_KEYEXTRACT_LENGTH_KEYSLOT_ID)
    {
      keyPtr->data[0u] = workSpacePtr->key.data[0u]; /* SBSW_CRY_WRITE_PTR_BY_SIZE */
    }
    else
    {
# if (CRY_30_RH850ICUS_KEYEXTRACT_LENGTH_M4M5_KEY_BUFFER >= CRY_30_RH850ICUS_KEYEXTRACT_LENGTH_M4M5)
      /* Copy from buffer */
      for (i = 0u; i < CRY_30_RH850ICUS_KEYEXTRACT_LENGTH_M4M5; i++)
      {
        /* The cast is needed, in order to store the data to the key buffer, which can be uint8, uint16 or uint32 */
        /* PRQA S 0310 1 */ /* MD_CRY_0310_KEY_DATA */
        ((P2VAR(uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR))keyPtr->data)[i] = ((P2VAR(uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR))workSpacePtr->key.data)[i]; /* SBSW_CRY_WRITE_PTR_BY_SIZE */
      }
# else
      /* Do not copy data */
# endif
    }

    /* #30 Copy stored key length from update function to keyPtr->length. */
    keyPtr->length = keyLength; /* SBSW_CRY_WRITE_PTR */

    retVal = CSM_E_OK;

    /* #40 Send cancel command to SHE. */
    Cry_30_Rh850Icus_CancelCommand();
    /* #50 Reset service state to idle. */
    Cry_30_Rh850Icus_ServiceState = CRY_30_RH850ICUS_SERVICE_IDLE;
  }

  return retVal;
} /* Cry_30_Rh850Icus_KeyExtractFinishInternal() */

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 **********************************************************************************************************************/

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_KeyExtractInit()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
FUNC( void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_KeyExtractInit( void )
{
  /* #10 Asynchronous function handling: Set status state to idle. */
# if ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_OFF )
  Cry_30_Rh850Icus_KeyExtract_Status = CRY_30_RH850ICUS_STATE_IDLE;
# endif
} /* Cry_30_Rh850Icus_KeyExtractInit() */

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_KeyExtractMainFunction()
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
FUNC(void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_KeyExtractMainFunction( void )
{
  /* #10 In case of asynchronous service handling: */
# if ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_OFF )
  Csm_ReturnType retVal;

  /* #20 Analyse status state machine. */
  switch(Cry_30_Rh850Icus_KeyExtract_Status)
  {
    /* #30 State machine has pending start status. */
    case CRY_30_RH850ICUS_STATE_PENDING_START:
    {
      /* #31 Call internal start service method. */
      retVal = Cry_30_Rh850Icus_KeyExtractStartInternal();

      /* #32 If start method was CSM_E_BUSY, hold service in state, for next main loop. */
      if (retVal != CSM_E_BUSY)
      {
        /* #33 Update state if start executed with CSM_E_OK or CSM_E_NOT_OK. */
        Cry_30_Rh850Icus_KeyExtract_Status = CRY_30_RH850ICUS_STATE_START;

        /* Note: Internal start function can only return CSM_E_OK or CSM_E_BUSY.
         * If internal start function is extended and there is a reason to return CSM_E_NOT_OK, this needs to be adapted (see other
         * primitive main function constructs.
         */

        /* #34 Notify via callback if start method executed with CSM_E_OK or CSM_E_NOT_OK. */
        Csm_SymKeyExtractCallbackNotification(retVal);
      }
      break;
    }
    /* #40 State machine has pending update status. */
    case CRY_30_RH850ICUS_STATE_PENDING_UPDATE:
    {
      /* #41 Call internal update service method. */
      retVal = Cry_30_Rh850Icus_KeyExtractUpdateInternal( /* SBSW_CRY_FCTCALL_PTRFORWARDING_BUFFERED */
        Cry_30_Rh850Icus_KeyExtract_Buffer.contextPtr,
        Cry_30_Rh850Icus_KeyExtract_Buffer.dataPtr,
        Cry_30_Rh850Icus_KeyExtract_Buffer.dataLength);

      /* #42 Set internal status state to next stage depending on the result of the update call. */
      if (retVal == CSM_E_OK)
      {
        Cry_30_Rh850Icus_KeyExtract_Status = CRY_30_RH850ICUS_STATE_UPDATE;
      }
      else
      {
        Cry_30_Rh850Icus_KeyExtract_Status = CRY_30_RH850ICUS_STATE_START;
      }

      /* #43 Send callback notification. */
      Csm_SymKeyExtractCallbackNotification(retVal);
      break;
    }
    /* #50 State machine has pending finish status. */
    case CRY_30_RH850ICUS_STATE_PENDING_FINISH:
    {
      /* #51 Call internal finish service method. */
      retVal = Cry_30_Rh850Icus_KeyExtractFinishInternal( /* SBSW_CRY_FCTCALL_PTRFORWARDING_BUFFERED */
        Cry_30_Rh850Icus_KeyExtract_Buffer.contextPtr,
        Cry_30_Rh850Icus_KeyExtract_Buffer.keyPtr);

      /* #52 If finish method fails, cancel command on SHE and reset global state (next service can run). */
      if (retVal != CSM_E_OK)
      {
        Cry_30_Rh850Icus_CancelCommand();
        Cry_30_Rh850Icus_ServiceState = CRY_30_RH850ICUS_SERVICE_IDLE;
      }

      /* #53 Set internal status state to IDLE. */
      Cry_30_Rh850Icus_KeyExtract_Status = CRY_30_RH850ICUS_STATE_IDLE;

      /* #54 Send callback and finish notification. */
      Csm_SymKeyExtractCallbackNotification(retVal);
      Csm_SymKeyExtractServiceFinishNotification();
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
} /* Cry_30_Rh850Icus_KeyExtractMainFunction() */

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_KeyExtractStart()
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
FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_KeyExtractStart(
  P2CONST( void, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) cfgPtr)
{
  /* ----- Local Variables ---------------------------------------------- */
  Csm_ReturnType retVal = CSM_E_NOT_OK;

  /* ----- Development Error Checks ------------------------------------- */
  /* #10 Check plausibility of input parameters. */
# if (CRY_30_RH850ICUS_DEV_ERROR_DETECT == STD_ON)
  /* Check if input parameter cfgPtr is a Null-Pointer */
  if (cfgPtr == NULL_PTR)
  {
    /* No action because no DET */
  }
  else if (Cry_30_Rh850Icus_GetKeyExtractWorkSpaceIdxOfKeyExtractConfig((P2CONST(Cry_30_Rh850Icus_KeyExtractConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR))cfgPtr)
    >= Cry_30_Rh850Icus_GetSizeOfKeyExtractWorkSpace())
  {
    /* No action because no DET */
  }
  else
# endif
  {
    /* ----- Implementation ----------------------------------------------- */
# if (CRY_30_RH850ICUS_TIMEOUT_API == STD_ON)
    /* #20 If Timeout-API is enabled, inform Timeout-API about current location. */
    Cry_30_Rh850Icus_GetTimeoutApiLocationCalloutOfGeneralOfPCConfig()(CRY_SHE_TO_SERVICE_KEY_EXTRACT, CRY_SHE_TO_SECTION_START_SERVICE);
    Cry_30_Rh850Icus_TimeoutApiService = CRY_SHE_TO_SERVICE_KEY_EXTRACT;
# endif
# if ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_OFF )
    SchM_Enter_Cry_30_Rh850Icus_CRY_30_RH850ICUS_EXCLUSIVE_AREA();
    /* #31 Check if local status is IDLE. */
    if (Cry_30_Rh850Icus_KeyExtract_Status == CRY_30_RH850ICUS_STATE_IDLE)
    {
      /* #32 Set internal status state to PENDING START. */
      Cry_30_Rh850Icus_KeyExtract_Status = CRY_30_RH850ICUS_STATE_PENDING_START;
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
    retVal = Cry_30_Rh850Icus_KeyExtractStartInternal();
# endif
  }

# if (CRY_30_RH850ICUS_DEV_ERROR_DETECT == STD_OFF)
  CRY_30_RH850ICUS_DUMMY_STATEMENT_CONST(cfgPtr); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif

  return retVal;
} /* Cry_30_Rh850Icus_KeyExtractStart() */

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_KeyExtractUpdate()
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
FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_KeyExtractUpdate(
  P2CONST( void, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) cfgPtr,
  P2CONST( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) dataPtr,
  uint32 dataLength)
{
  /* ----- Local Variables ---------------------------------------------- */
  Csm_ReturnType retVal = CSM_E_NOT_OK;
  P2CONST(Cry_30_Rh850Icus_KeyExtractConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) tmpContextPtr =
    (P2CONST(Cry_30_Rh850Icus_KeyExtractConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR))cfgPtr;

  /* ----- Development Error Checks ------------------------------------- */
  /* #10 Check plausibility of input parameters. */
# if (CRY_30_RH850ICUS_DEV_ERROR_DETECT == STD_ON)
  /* Check if input parameter cfgPtr or dataPtr is a Null-Pointer */
  if ( (cfgPtr == NULL_PTR) || (dataPtr == NULL_PTR) )
  {
    /* No action because no DET */
  }
  else if (Cry_30_Rh850Icus_GetKeyExtractWorkSpaceIdxOfKeyExtractConfig(tmpContextPtr)
    >= Cry_30_Rh850Icus_GetSizeOfKeyExtractWorkSpace())
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
    Cry_30_Rh850Icus_GetTimeoutApiLocationCalloutOfGeneralOfPCConfig()(CRY_SHE_TO_SERVICE_KEY_EXTRACT, CRY_SHE_TO_SECTION_UPDATE_SERVICE);
    Cry_30_Rh850Icus_TimeoutApiService = CRY_SHE_TO_SERVICE_KEY_EXTRACT;
# endif
# if ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_OFF )
    /* #31 Check if local status is START. */
    if (Cry_30_Rh850Icus_KeyExtract_Status == CRY_30_RH850ICUS_STATE_START)
    {
      /* #32 Set internal status state to PENDING UPDATE. */
      Cry_30_Rh850Icus_KeyExtract_Status = CRY_30_RH850ICUS_STATE_PENDING_UPDATE;
      /* #33 Store parameters to buffer. */
      Cry_30_Rh850Icus_KeyExtract_Buffer.contextPtr = tmpContextPtr;
      Cry_30_Rh850Icus_KeyExtract_Buffer.dataPtr = dataPtr;
      Cry_30_Rh850Icus_KeyExtract_Buffer.dataLength = dataLength;
      /* #34 Always return CSM_E_OK. */
      retVal = CSM_E_OK;
    }
# else
    /* #41 Call the internal update function. */
    retVal = Cry_30_Rh850Icus_KeyExtractUpdateInternal(tmpContextPtr, dataPtr, dataLength); /* SBSW_CRY_FCTCALL_PTRFORWARDING */
# endif
  }
  return retVal;
} /* Cry_30_Rh850Icus_KeyExtractUpdate() */

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_KeyExtractFinish()
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
FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_KeyExtractFinish(
  P2CONST( void, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) cfgPtr,
  P2VAR( Csm_SymKeyType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) keyPtr)
{
  /* ----- Local Variables ---------------------------------------------- */
  Csm_ReturnType retVal = CSM_E_NOT_OK;
  P2CONST(Cry_30_Rh850Icus_KeyExtractConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) tmpContextPtr =
    (P2CONST(Cry_30_Rh850Icus_KeyExtractConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR))cfgPtr;

  /* ----- Development Error Checks ------------------------------------- */
  /* #10 Check plausibility of input parameters. */
# if (CRY_30_RH850ICUS_DEV_ERROR_DETECT == STD_ON)
  /* Check if input parameter cfgPtr or keyPtr is a Null-Pointer */
  if ( (cfgPtr == NULL_PTR) || (keyPtr == NULL_PTR) )
  {
    /* No action because no DET */
  }
  else if (Cry_30_Rh850Icus_GetKeyExtractWorkSpaceIdxOfKeyExtractConfig(tmpContextPtr)
    >= Cry_30_Rh850Icus_GetSizeOfKeyExtractWorkSpace())
  {
    /* No action because no DET */
  }
  else
# endif
  {
    /* ----- Implementation ----------------------------------------------- */
# if (CRY_30_RH850ICUS_TIMEOUT_API == STD_ON)
    /* #20 If Timeout-API is enabled, inform Timeout-API about current location. */
    Cry_30_Rh850Icus_GetTimeoutApiLocationCalloutOfGeneralOfPCConfig()(CRY_SHE_TO_SERVICE_KEY_EXTRACT, CRY_SHE_TO_SECTION_FINISH_SERVICE);
    Cry_30_Rh850Icus_TimeoutApiService = CRY_SHE_TO_SERVICE_KEY_EXTRACT;
# endif
# if ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_OFF )
    /* #31 Check if local status is UPDATE or START. */
    if ( (Cry_30_Rh850Icus_KeyExtract_Status == CRY_30_RH850ICUS_STATE_UPDATE) || (Cry_30_Rh850Icus_KeyExtract_Status == CRY_30_RH850ICUS_STATE_START) )
    {
      /* #32 Set local status to PENDING_FINISH. */
      Cry_30_Rh850Icus_KeyExtract_Status = CRY_30_RH850ICUS_STATE_PENDING_FINISH;
      /* #33 Store parameters to buffer. */
      Cry_30_Rh850Icus_KeyExtract_Buffer.contextPtr = tmpContextPtr;
      Cry_30_Rh850Icus_KeyExtract_Buffer.keyPtr = keyPtr;
      retVal = CSM_E_OK;
    }
# else
    /* #41 Call the internal finish function. */
    retVal = Cry_30_Rh850Icus_KeyExtractFinishInternal(tmpContextPtr, keyPtr); /* SBSW_CRY_FCTCALL_PTRFORWARDING */
# endif
  }

# if ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_ON )
  /* #50 If any error occured, and global state is in start or update, cancel SHE command and set global state to idle (in sync mode). */
  if ( (retVal != CSM_E_OK) &&
    ( (Cry_30_Rh850Icus_ServiceState == CRY_30_RH850ICUS_SERVICE_KEYEXTRACT_UPDATE) || (Cry_30_Rh850Icus_ServiceState == CRY_30_RH850ICUS_SERVICE_KEYEXTRACT_START) ) )
  {
    Cry_30_Rh850Icus_CancelCommand();
    Cry_30_Rh850Icus_ServiceState = CRY_30_RH850ICUS_SERVICE_IDLE;
  }
# endif
  return retVal;
} /* Cry_30_Rh850Icus_KeyExtractFinish() */

# define CRY_30_RH850ICUS_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#endif /* ( CRY_30_RH850ICUS_KEYEXTRACTCONFIG == STD_ON ) */

/**********************************************************************************************************************
 *  END OF FILE: CRY_30_RH850ICUS_KEYEXTRACT.C
 **********************************************************************************************************************/

