/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2017 by Vector Informatik GmbH.                                                All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/*      \file  Crypto_30_CryWrapper_Cipher.c
 *      \brief  MICROSAR Crypto Driver (Crypto)
 *
 *      \details  Dispatcher for CIPHER Services
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Refer to the module's header file.
 *********************************************************************************************************************/

#define CRYPTO_30_CRYWRAPPER_CIPHER_SOURCE
/* PRQA S 0777, 0779, 3453 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779, MD_MSR_19.7 */

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Crypto_30_CryWrapper.h"
#include "Crypto_30_CryWrapper_Services.h"

/**********************************************************************************************************************
 *  LOCAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

#define CRYPTO_30_CRYWRAPPER_AES128_KEY_LENGTH (16u)
#define CRYPTO_30_CRYWRAPPER_AES128_IV_LENGTH (16u)

typedef enum  /*!< Enum used to differenciate between block cipher primitives from different Cry vendors. */
{
  CRYPTO_30_CRYWRAPPER_CIPHERSERVICE_NOT_SPECIFIED,
  CRYPTO_30_CRYWRAPPER_CIPHERSERVICE_STANDARD,
  CRYPTO_30_CRYWRAPPER_CIPHERSERVICE_BLOCK
} Crypto_30_CryWrapper_CipherServiceType;

/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

#define CRYPTO_30_CRYWRAPPER_START_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#if (CRYPTO_30_CRYWRAPPER_AES128ENCRYPT == STD_ON)
/**********************************************************************************************************************
 *  Crypto_30_CryWrapper_DispatchCipherAes128Encrypt()
 *********************************************************************************************************************/
/*! \brief         Dispatches the CipherAes128Encrypt job to the lower layer.
 *  \details       This function dispatches the provided job to the lower layer crypto library. Based on the jobs
 *                 operation mode, it triggers different stages of the service.
 *  \param[in]     objectId           Holds the identifier of the Crypto Driver Object.
 *  \param[in]     mode               Operation mode in which the job currently is.
 *  \param[in,out] job                Pointer to the job which shall be dispatched.
 *  \return        E_OK                       Dispatching was successful.
 *                 E_NOT_OK                   Dispatching failed.
 *                 CRYPTO_E_BUSY              Request failed, the CRY driver was BUSY.
 *                 CRYPTO_E_KEY_NOT_VALID     Request failed, the key is not valid.
 *                 CRYPTO_E_KEY_NOT_AVAILABLE Request failed, the key is not available.
 *                 CRYPTO_E_SMALL_BUFFER      Request failed, the provided buffer is too small to store the result.
 *  \pre           objectId has to be a valid driver object handle.
 *  \context       TASK
 *  \reentrant     TRUE
 *  \synchronous   TRUE
 *  \config        CRYPTO_30_CRYWRAPPER_AES128ENCRYPT
 *********************************************************************************************************************/
CRYPTO_30_CRYWRAPPER_LOCAL_INLINE FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_DispatchCipherAes128Encrypt(uint32 objectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) job,
  Crypto_OperationModeType mode);
#endif /* (CRYPTO_30_CRYWRAPPER_AES128ENCRYPT == STD_ON) */

#if (CRYPTO_30_CRYWRAPPER_AES128DECRYPT == STD_ON)
/**********************************************************************************************************************
 *  Crypto_30_CryWrapper_DispatchCipherAes128Decrypt()
 *********************************************************************************************************************/
/*! \brief         Dispatches the CipherAes128Decrypt job to the lower layer.
 *  \details       This function dispatches the provided job to the lower layer crypto library. Based on the jobs
 *                 operation mode, it triggers different stages of the service.
 *  \param[in]     objectId           Holds the identifier of the Crypto Driver Object.
 *  \param[in]     mode               Operation mode in which the job currently is.
 *  \param[in,out] job                Pointer to the job which shall be dispatched.
 *  \return        E_OK                       Dispatching was successful.
 *                 E_NOT_OK                   Dispatching failed.
 *                 CRYPTO_E_BUSY              Request failed, the CRY driver was BUSY.
 *                 CRYPTO_E_KEY_NOT_VALID     Request failed, the key is not valid.
 *                 CRYPTO_E_KEY_NOT_AVAILABLE Request failed, the key is not available.
 *                 CRYPTO_E_SMALL_BUFFER      Request failed, the provided buffer is too small to store the result.
 *  \pre           objectId has to be a valid driver object handle.
 *  \context       TASK
 *  \reentrant     TRUE
 *  \synchronous   TRUE
 *  \config        CRYPTO_30_CRYWRAPPER_AES128DECRYPT
 *********************************************************************************************************************/
CRYPTO_30_CRYWRAPPER_LOCAL_INLINE FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_DispatchCipherAes128Decrypt(uint32 objectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) job,
  Crypto_OperationModeType mode);
#endif /* (CRYPTO_30_CRYWRAPPER_AES128DECRYPT == STD_ON) */

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/
#if (CRYPTO_30_CRYWRAPPER_AES128ENCRYPT == STD_ON)
/**********************************************************************************************************************
* Crypto_30_CryWrapper_DispatchCipherAes128Encrypt()
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
CRYPTO_30_CRYWRAPPER_LOCAL_INLINE FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_DispatchCipherAes128Encrypt(uint32 objectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) job,
  Crypto_OperationModeType mode)
{
  /* ----- Local Variables ------------------------------------------------ */
  Std_ReturnType retVal = E_NOT_OK;

# if( (CRYPTO_30_CRYWRAPPER_SYMENCRYPTCONFIG == STD_ON) || (CRYPTO_30_CRYWRAPPER_SYMBLOCKENCRYPTCONFIG == STD_ON)) /* COV_CRYPTO_30_CRYWRAPPER_PREVENTED_CRY_CONFIG */

  Csm_SymKeyType symKey;
  Csm_ReturnType retValCry = CSM_E_NOT_OK;
  uint32 primCfgSearchIdx;
  Crypto_30_CryWrapper_JobsIterType jobIdx;
  boolean jobWasFound = FALSE;
  boolean startOrUpdateCalled = FALSE;
  Crypto_30_CryWrapper_CipherServiceType cipherService = CRYPTO_30_CRYWRAPPER_CIPHERSERVICE_NOT_SPECIFIED;

#  if(CRYPTO_30_CRYWRAPPER_SYMENCRYPTCONFIG == STD_ON) /* COV_CRYPTO_30_CRYWRAPPER_PREVENTED_CRY_CONFIG */
  uint32 primCfgIdx = 0u;
#  endif
#  if(CRYPTO_30_CRYWRAPPER_SYMBLOCKENCRYPTCONFIG == STD_ON)
  uint32 primCfgIdxBlock = 0u;
#  endif

  /* ----- Implementation ----------------------------------------------- */
#  if(CRYPTO_30_CRYWRAPPER_SYMENCRYPTCONFIG == STD_ON) /* COV_CRYPTO_30_CRYWRAPPER_PREVENTED_CRY_CONFIG */
  /* #01 Search for a matching Job to decide which CRY standard service configuration shall be used. */
  for (primCfgSearchIdx = 0u; (primCfgSearchIdx < Crypto_30_CryWrapper_GetSizeOfSymEncryptConfig()) && (jobWasFound == FALSE); primCfgSearchIdx++)
  {
    for (jobIdx = Crypto_30_CryWrapper_GetJobsStartIdxOfSymEncryptConfig(primCfgSearchIdx); jobIdx < Crypto_30_CryWrapper_GetJobsEndIdxOfSymEncryptConfig(primCfgSearchIdx); jobIdx++)
    {
      if (Crypto_30_CryWrapper_GetJobs(jobIdx) == job->jobInfo->jobId)
      {
        jobWasFound = TRUE;
        cipherService = CRYPTO_30_CRYWRAPPER_CIPHERSERVICE_STANDARD;
        primCfgIdx = primCfgSearchIdx;
      }
    }
  }
#  endif

#  if(CRYPTO_30_CRYWRAPPER_SYMBLOCKENCRYPTCONFIG == STD_ON)
  /* #02 Search for a matching Job to decide which CRY block service configuration shall be used. */
  for (primCfgSearchIdx = 0u; (primCfgSearchIdx < Crypto_30_CryWrapper_GetSizeOfSymBlockEncryptConfig()) && (jobWasFound == FALSE); primCfgSearchIdx++)
  {
    for (jobIdx = Crypto_30_CryWrapper_GetJobsStartIdxOfSymBlockEncryptConfig(primCfgSearchIdx); jobIdx < Crypto_30_CryWrapper_GetJobsEndIdxOfSymBlockEncryptConfig(primCfgSearchIdx); jobIdx++)
    {
      if (Crypto_30_CryWrapper_GetJobs(jobIdx) == job->jobInfo->jobId)
      {
        jobWasFound = TRUE;
        cipherService = CRYPTO_30_CRYWRAPPER_CIPHERSERVICE_BLOCK;
        primCfgIdxBlock = primCfgSearchIdx;
      }
    }
  }
#  endif

  /* #04 Check if job has been found. */
  if (jobWasFound == TRUE)
  {
    /* #05 Distinguish modes. */
    switch (mode)
    {
      /* #10 Handle operationmode START. */
      case CRYPTO_OPERATIONMODE_START:
      {
        /* #11 Init workspace variables. */
        Crypto_30_CryWrapper_SetBufferLength(objectId, 0u); /* SBSW_CRYPTO_30_CRYWRAPPER_CSL01_OBJECTID */
        Crypto_30_CryWrapper_SetWrittenLength(objectId, 0u); /* SBSW_CRYPTO_30_CRYWRAPPER_CSL01_OBJECTID */
  
        /* #15 Prepare the symmetric key which shall be used. */
        retVal = Crypto_30_CryWrapper_GetSymKey(job->cryptoKeyId, &symKey); /* SBSW_CRYPTO_30_CRYWRAPPER_STACK_KEY_VARIABLE_AS_PTR */
  
        if (retVal == E_OK)
        {
          uint8 aesEncryptIv[CRYPTO_30_CRYWRAPPER_AES128_IV_LENGTH] = { 0u };
          uint32 aesEncryptIvLength = 0u;
          Std_ReturnType cipherIVRetVal = E_OK;
  
          retVal = E_NOT_OK;
  
          SchM_Enter_Crypto_30_CryWrapper_CRYPTO_30_CRYWRAPPER_EXCLUSIVE_AREA_2();
  
          /* #20 Prepare the IV if mode is CBC. */
          if (job->jobPrimitiveInfo->primitiveInfo->algorithm.mode == CRYPTO_ALGOMODE_CBC)
          {
            aesEncryptIvLength = CRYPTO_30_CRYWRAPPER_AES128_IV_LENGTH;
            cipherIVRetVal = Crypto_30_CryWrapper_Local_KeyElementGet(job->cryptoKeyId, CRYPTO_KE_CIPHER_IV, aesEncryptIv, &aesEncryptIvLength); /* SBSW_CRYPTO_30_CRYWRAPPER_STACK_VARIABLE_AS_PTR */
          }
  
          SchM_Exit_Crypto_30_CryWrapper_CRYPTO_30_CRYWRAPPER_EXCLUSIVE_AREA_2();
  
          if (cipherIVRetVal == E_OK)
          {
            /* #24 Decide if standard or block API should be used. */
            switch (cipherService)
            {
#  if(CRYPTO_30_CRYWRAPPER_SYMENCRYPTCONFIG == STD_ON) /* COV_CRYPTO_30_CRYWRAPPER_PREVENTED_CRY_CONFIG */
              case CRYPTO_30_CRYWRAPPER_CIPHERSERVICE_STANDARD:
              {
                /* #25 Call Cry start function. */
                retValCry = Crypto_30_CryWrapper_GetStartFuncOfSymEncryptConfig(primCfgIdx)( /* SBSW_CRYPTO_30_CRYWRAPPER_CRY_STACK_VARIABLE_AS_PTR */
                  Crypto_30_CryWrapper_GetInitPtrOfSymEncryptStartConfig(primCfgIdx),
                  &symKey,
                  aesEncryptIv,
                  aesEncryptIvLength);
                startOrUpdateCalled = TRUE;
                break;
              }
#  endif
#  if(CRYPTO_30_CRYWRAPPER_SYMBLOCKENCRYPTCONFIG == STD_ON)
              case CRYPTO_30_CRYWRAPPER_CIPHERSERVICE_BLOCK:
              {
                /* #25 Call Cry start function. */
                retValCry = Crypto_30_CryWrapper_GetStartFuncOfSymBlockEncryptConfig(primCfgIdxBlock)( /* SBSW_CRYPTO_30_CRYWRAPPER_CRY_STACK_VARIABLE_AS_PTR */
                  Crypto_30_CryWrapper_GetInitPtrOfSymBlockEncryptStartConfig(primCfgIdxBlock),
                  &symKey);
                startOrUpdateCalled = TRUE;
                break;
              }
#  endif
              default: /* COV_CRYPTO_30_CRYWRAPPER_MISRA_ADDITIONAL_STATEMENT */
                break;
            }
          }
          else
          {
            retValCry = CSM_E_NOT_OK;
            retVal = CRYPTO_E_KEY_NOT_VALID;
          }
        }
        break;
      }

      /* #40 Handle operationmode UPDATE. */
      case CRYPTO_OPERATIONMODE_UPDATE:
      {
        uint32 outputLength;
        Crypto_30_CryWrapper_SetBufferLength(objectId, *(job->jobPrimitiveInputOutput.outputLengthPtr)); /* SBSW_CRYPTO_30_CRYWRAPPER_CSL01_OBJECTID */
  
        /* Get output length in local variable to omit type mismatches */
        outputLength = *(job->jobPrimitiveInputOutput.outputLengthPtr);
  
        /* #44 Decide if standard or block API should be used. */
        switch (cipherService)
        {
#  if(CRYPTO_30_CRYWRAPPER_SYMENCRYPTCONFIG == STD_ON) /* COV_CRYPTO_30_CRYWRAPPER_PREVENTED_CRY_CONFIG */
          case CRYPTO_30_CRYWRAPPER_CIPHERSERVICE_STANDARD:
          {
            /* #45 Call Cry update function. */
            retValCry = Crypto_30_CryWrapper_GetUpdateFuncOfSymEncryptConfig(primCfgIdx)( /* SBSW_CRYPTO_30_CRYWRAPPER_CRY_FUNCTION_JOB_MEMBER_FORWARDING_WITH_LOCAL_VAR */
              Crypto_30_CryWrapper_GetInitPtrOfSymEncryptUpdateConfig(primCfgIdx),
              job->jobPrimitiveInputOutput.inputPtr,
              job->jobPrimitiveInputOutput.inputLength,
              job->jobPrimitiveInputOutput.outputPtr,
              &outputLength);
            startOrUpdateCalled = TRUE;
            break;
          }
#  endif
#  if(CRYPTO_30_CRYWRAPPER_SYMBLOCKENCRYPTCONFIG == STD_ON)
        case CRYPTO_30_CRYWRAPPER_CIPHERSERVICE_BLOCK:
        {
          /* #45 Call Cry update function. */
          retValCry = Crypto_30_CryWrapper_GetUpdateFuncOfSymBlockEncryptConfig(primCfgIdxBlock)( /* SBSW_CRYPTO_30_CRYWRAPPER_CRY_FUNCTION_JOB_MEMBER_FORWARDING_WITH_LOCAL_VAR */
            Crypto_30_CryWrapper_GetInitPtrOfSymBlockEncryptUpdateConfig(primCfgIdxBlock),
            job->jobPrimitiveInputOutput.inputPtr,
            job->jobPrimitiveInputOutput.inputLength,
            job->jobPrimitiveInputOutput.outputPtr,
            &outputLength);
          startOrUpdateCalled = TRUE;
          break;
        }
#  endif
        default: /* COV_CRYPTO_30_CRYWRAPPER_MISRA_ADDITIONAL_STATEMENT */
          break;
        }

        /* copy back written output length */
        *(job->jobPrimitiveInputOutput.outputLengthPtr) = outputLength; /* SBSW_CRYPTO_30_CRYWRAPPER_WRITE_ACCESS_TO_JOBPRIMITIVE_INPUTOUTPUT_PTR */
  
        Crypto_30_CryWrapper_SetWrittenLength(objectId, *(job->jobPrimitiveInputOutput.outputLengthPtr)); /* SBSW_CRYPTO_30_CRYWRAPPER_CSL01_OBJECTID */
        Crypto_30_CryWrapper_SetBufferLength(objectId, Crypto_30_CryWrapper_GetBufferLength(objectId) - Crypto_30_CryWrapper_GetWrittenLength(objectId)); /* SBSW_CRYPTO_30_CRYWRAPPER_CSL01_OBJECTID */
  
        break;
      }

      /* #70 Handle operationmode FINISH. */
      case CRYPTO_OPERATIONMODE_FINISH:
      {
        uint32 outputLength;
  
        /* #75 Reinitialize written length and remaining buffer if UPDATE was not part of this job. */
        if ((job->jobPrimitiveInputOutput.mode & CRYPTO_OPERATIONMODE_UPDATE) != CRYPTO_OPERATIONMODE_UPDATE)
        {
          Crypto_30_CryWrapper_SetWrittenLength(objectId, 0u); /* SBSW_CRYPTO_30_CRYWRAPPER_CSL01_OBJECTID */
          Crypto_30_CryWrapper_SetBufferLength(objectId, *(job->jobPrimitiveInputOutput.outputLengthPtr)); /* SBSW_CRYPTO_30_CRYWRAPPER_CSL01_OBJECTID */
        }
  
        /* Get output length in local variable to omit type mismatches */
        outputLength = Crypto_30_CryWrapper_GetBufferLength(objectId);
  
        /* #79 Decide if standard or block API should be used. */
        switch (cipherService)
        {
#  if(CRYPTO_30_CRYWRAPPER_SYMENCRYPTCONFIG == STD_ON) /* COV_CRYPTO_30_CRYWRAPPER_PREVENTED_CRY_CONFIG */
          case CRYPTO_30_CRYWRAPPER_CIPHERSERVICE_STANDARD:
          {
            /* #80 Call Cry finish function. */
            retValCry = Crypto_30_CryWrapper_GetFinishFuncOfSymEncryptConfig(primCfgIdx)( /* SBSW_CRYPTO_30_CRYWRAPPER_CRY_FUNCTION_JOB_MEMBER_FORWARDING */
              Crypto_30_CryWrapper_GetInitPtrOfSymEncryptFinishConfig(primCfgIdx),
              &job->jobPrimitiveInputOutput.outputPtr[Crypto_30_CryWrapper_GetWrittenLength(objectId)],
              &outputLength);
            break;
          }
#  endif
#  if(CRYPTO_30_CRYWRAPPER_SYMBLOCKENCRYPTCONFIG == STD_ON)
          case CRYPTO_30_CRYWRAPPER_CIPHERSERVICE_BLOCK:
          {
            /* #80 Call Cry finish function. */
            retValCry = Crypto_30_CryWrapper_GetFinishFuncOfSymBlockEncryptConfig(primCfgIdxBlock)( /* SBSW_CRYPTO_30_CRYWRAPPER_CRY_FUNCTION_JOB_MEMBER_FORWARDING_WITH_LOCAL_VAR */
            Crypto_30_CryWrapper_GetInitPtrOfSymBlockEncryptFinishConfig(primCfgIdxBlock)
#   if (CRYPTO_30_CRYWRAPPER_PROVIDE_BUFFER_IN_BLOCK_FINISH == STD_ON)
              ,&job->jobPrimitiveInputOutput.outputPtr[Crypto_30_CryWrapper_GetWrittenLength(objectId)],
              &outputLength
#   endif
            );
#   if (CRYPTO_30_CRYWRAPPER_PROVIDE_BUFFER_IN_BLOCK_FINISH == STD_OFF)
            outputLength = 0u;
#   endif
            break;
          }
#  endif
          default: /* COV_CRYPTO_30_CRYWRAPPER_MISRA_ADDITIONAL_STATEMENT */
            break;
        }

        /* copy back written output length and add writtenLength */
        *job->jobPrimitiveInputOutput.outputLengthPtr = outputLength + Crypto_30_CryWrapper_GetWrittenLength(objectId); /* SBSW_CRYPTO_30_CRYWRAPPER_WRITE_ACCESS_TO_JOBPRIMITIVE_INPUTOUTPUT_PTR */
  
        break;
      }

      default: /* COV_CRYPTO_30_CRYWRAPPER_MISRA_ADDITIONAL_STATEMENT */
        break;
    }

    /* #100 Call finish function to cancel service if start or update has failed. */
    if ( (retValCry != CSM_E_OK)
      && (startOrUpdateCalled == TRUE) )
    {
      /* #104 Decide if standard or block API should be used. */
      switch (cipherService)
      {
#  if(CRYPTO_30_CRYWRAPPER_SYMENCRYPTCONFIG == STD_ON) /* COV_CRYPTO_30_CRYWRAPPER_PREVENTED_CRY_CONFIG */
        case CRYPTO_30_CRYWRAPPER_CIPHERSERVICE_STANDARD:
        {
          /* #105 Call Cry finish function. */
          (void)Crypto_30_CryWrapper_GetFinishFuncOfSymEncryptConfig(primCfgIdx)( /* SBSW_CRYPTO_30_CRYWRAPPER_CRY_FINISH_CALL */
            Crypto_30_CryWrapper_GetInitPtrOfSymEncryptFinishConfig(primCfgIdx),
            NULL_PTR,
            NULL_PTR);
          break;
        }
#  endif
#  if(CRYPTO_30_CRYWRAPPER_SYMBLOCKENCRYPTCONFIG == STD_ON)
        case CRYPTO_30_CRYWRAPPER_CIPHERSERVICE_BLOCK:
        {
          /* #105 Call Cry finish function. */
          (void)Crypto_30_CryWrapper_GetFinishFuncOfSymBlockEncryptConfig(primCfgIdxBlock)( /* SBSW_CRYPTO_30_CRYWRAPPER_CRY_FINISH_CALL */
            Crypto_30_CryWrapper_GetInitPtrOfSymBlockEncryptFinishConfig(primCfgIdxBlock)
#   if (CRYPTO_30_CRYWRAPPER_PROVIDE_BUFFER_IN_BLOCK_FINISH == STD_ON)
              ,NULL_PTR,
              NULL_PTR
#   endif
            );
          break;
        }
#  endif
        default: /* COV_CRYPTO_30_CRYWRAPPER_MISRA_ADDITIONAL_STATEMENT */
          break;
      }
    }
  }

  /* #110 Return E_OK if Cry function call was successful. */
  if (retValCry == CSM_E_OK)
  {
    retVal = E_OK;
  }
  else if (retValCry == CSM_E_BUSY)
  {
    retVal = CRYPTO_E_BUSY;
  }
  else
  {
  }
# else
  CRYPTO_30_CRYWRAPPER_DUMMY_STATEMENT(mode); /* PRQA S 3112 */ /* MD_MSR_14.2 */
  CRYPTO_30_CRYWRAPPER_DUMMY_STATEMENT(job); /* PRQA S 3112 */ /* MD_MSR_14.2 */
# endif

  CRYPTO_30_CRYWRAPPER_DUMMY_STATEMENT(objectId); /* PRQA S 3112 */ /* MD_MSR_14.2 */

  return retVal;
} /* PRQA S 6030,6010,6080 */ /* MD_MSR_STCYC */ /* MD_MSR_STPTH */ /* MD_MSR_STMIF */
#endif /* (CRYPTO_30_CRYWRAPPER_AES128ENCRYPT == STD_ON) */

#if (CRYPTO_30_CRYWRAPPER_AES128DECRYPT == STD_ON)
/**********************************************************************************************************************
* Crypto_30_CryWrapper_DispatchCipherAes128Decrypt()
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
CRYPTO_30_CRYWRAPPER_LOCAL_INLINE FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_DispatchCipherAes128Decrypt(uint32 objectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) job,
  Crypto_OperationModeType mode)
{
  /* ----- Local Variables ------------------------------------------------ */
  Std_ReturnType retVal = E_NOT_OK;

# if (CRYPTO_30_CRYWRAPPER_SYMDECRYPTCONFIG == STD_ON) || (CRYPTO_30_CRYWRAPPER_SYMBLOCKDECRYPTCONFIG == STD_ON) /* COV_CRYPTO_30_CRYWRAPPER_PREVENTED_CRY_CONFIG */
  Csm_SymKeyType symKey;
  Csm_ReturnType retValCry = CSM_E_NOT_OK;
  uint32 primCfgSearchIdx;
  Crypto_30_CryWrapper_JobsIterType jobIdx;
  boolean jobWasFound = FALSE;
  Crypto_30_CryWrapper_CipherServiceType cipherService = CRYPTO_30_CRYWRAPPER_CIPHERSERVICE_NOT_SPECIFIED;
  boolean startOrUpdateCalled = FALSE;

#  if(CRYPTO_30_CRYWRAPPER_SYMDECRYPTCONFIG == STD_ON) /* COV_CRYPTO_30_CRYWRAPPER_PREVENTED_CRY_CONFIG */
  uint32 primCfgIdx = 0u;
#  endif
#  if(CRYPTO_30_CRYWRAPPER_SYMBLOCKDECRYPTCONFIG == STD_ON)
  uint32 primCfgIdxBlock = 0u;
#  endif

   /* ----- Implementation ----------------------------------------------- */
#  if(CRYPTO_30_CRYWRAPPER_SYMDECRYPTCONFIG == STD_ON) /* COV_CRYPTO_30_CRYWRAPPER_PREVENTED_CRY_CONFIG */
  /* #01 Search for a matching Job to decide which CRY standard service configuration shall be used. */
  for (primCfgSearchIdx = 0u; (primCfgSearchIdx < Crypto_30_CryWrapper_GetSizeOfSymDecryptConfig()) && (jobWasFound == FALSE); primCfgSearchIdx++)
  {
    for (jobIdx = Crypto_30_CryWrapper_GetJobsStartIdxOfSymDecryptConfig(primCfgSearchIdx); jobIdx < Crypto_30_CryWrapper_GetJobsEndIdxOfSymDecryptConfig(primCfgSearchIdx); jobIdx++)
    {
      if (Crypto_30_CryWrapper_GetJobs(jobIdx) == job->jobInfo->jobId)
      {
        jobWasFound = TRUE;
        cipherService = CRYPTO_30_CRYWRAPPER_CIPHERSERVICE_STANDARD;
        primCfgIdx = primCfgSearchIdx;
      }
    }
  }
#  endif

#  if(CRYPTO_30_CRYWRAPPER_SYMBLOCKDECRYPTCONFIG == STD_ON)
  /* #02 Search for a matching Job to decide which CRY block service configuration shall be used. */
  for (primCfgSearchIdx = 0u; (primCfgSearchIdx < Crypto_30_CryWrapper_GetSizeOfSymBlockDecryptConfig()) && (jobWasFound == FALSE); primCfgSearchIdx++)
  {
    for (jobIdx = Crypto_30_CryWrapper_GetJobsStartIdxOfSymBlockDecryptConfig(primCfgSearchIdx); jobIdx < Crypto_30_CryWrapper_GetJobsEndIdxOfSymBlockDecryptConfig(primCfgSearchIdx); jobIdx++)
    {
      if (Crypto_30_CryWrapper_GetJobs(jobIdx) == job->jobInfo->jobId)
      {
        jobWasFound = TRUE;
        cipherService = CRYPTO_30_CRYWRAPPER_CIPHERSERVICE_BLOCK;
        primCfgIdxBlock = primCfgSearchIdx;
      }
    }
  }
#  endif

  /* #04 Check if job has been found. */
  if (jobWasFound == TRUE)
  {
    /* #05 Distinguish modes. */
    switch (mode)
    {
      /* #10 Handle operationmode START. */
      case CRYPTO_OPERATIONMODE_START:
      {
        /* #11 Init workspace variables. */
        Crypto_30_CryWrapper_SetWrittenLength(objectId, 0u); /* SBSW_CRYPTO_30_CRYWRAPPER_CSL01_OBJECTID */
        Crypto_30_CryWrapper_SetBufferLength(objectId, 0u); /* SBSW_CRYPTO_30_CRYWRAPPER_CSL01_OBJECTID */
  
        /* #15 Prepare the symmetric key which shall be used. */
        retVal = Crypto_30_CryWrapper_GetSymKey(job->cryptoKeyId, &symKey); /* SBSW_CRYPTO_30_CRYWRAPPER_STACK_KEY_VARIABLE_AS_PTR */
  
        if (retVal == E_OK)
        {
          uint8 aesDecryptIv[CRYPTO_30_CRYWRAPPER_AES128_IV_LENGTH] = { 0u };
          uint32 aesDecryptIvLength = 0u;
          Std_ReturnType cipherIVRetVal = E_OK;
  
          retVal = E_NOT_OK;
  
          SchM_Enter_Crypto_30_CryWrapper_CRYPTO_30_CRYWRAPPER_EXCLUSIVE_AREA_2();
  
          /* #20 Prepare the IV if mode is CBC. */
          if (job->jobPrimitiveInfo->primitiveInfo->algorithm.mode == CRYPTO_ALGOMODE_CBC)
          {
            aesDecryptIvLength = sizeof(aesDecryptIv);
            cipherIVRetVal = Crypto_30_CryWrapper_Local_KeyElementGet(job->cryptoKeyId, CRYPTO_KE_CIPHER_IV, aesDecryptIv, &aesDecryptIvLength); /* SBSW_CRYPTO_30_CRYWRAPPER_STACK_VARIABLE_AS_PTR */
          }
  
          SchM_Exit_Crypto_30_CryWrapper_CRYPTO_30_CRYWRAPPER_EXCLUSIVE_AREA_2();
  
          if (cipherIVRetVal == E_OK)
          {
            /* #24 Decide if standard or block API should be used. */
            switch (cipherService)
            {
#  if(CRYPTO_30_CRYWRAPPER_SYMDECRYPTCONFIG == STD_ON) /* COV_CRYPTO_30_CRYWRAPPER_PREVENTED_CRY_CONFIG */
              case CRYPTO_30_CRYWRAPPER_CIPHERSERVICE_STANDARD:
              {
                /* #25 Call Cry start function. */
                retValCry = Crypto_30_CryWrapper_GetStartFuncOfSymDecryptConfig(primCfgIdx)( /* SBSW_CRYPTO_30_CRYWRAPPER_CRY_STACK_VARIABLE_AS_PTR */
                  Crypto_30_CryWrapper_GetInitPtrOfSymDecryptStartConfig(primCfgIdx),
                  &symKey,
                  aesDecryptIv,
                  aesDecryptIvLength);
                startOrUpdateCalled = TRUE;
                break;
              }
#  endif
#  if(CRYPTO_30_CRYWRAPPER_SYMBLOCKDECRYPTCONFIG == STD_ON)
              case CRYPTO_30_CRYWRAPPER_CIPHERSERVICE_BLOCK:
              {
                /* #25 Call Cry start function. */
                retValCry = Crypto_30_CryWrapper_GetStartFuncOfSymBlockDecryptConfig(primCfgIdxBlock)( /* SBSW_CRYPTO_30_CRYWRAPPER_CRY_STACK_VARIABLE_AS_PTR */
                  Crypto_30_CryWrapper_GetInitPtrOfSymBlockDecryptStartConfig(primCfgIdxBlock),
                  &symKey);
                startOrUpdateCalled = TRUE;
                break;
              }
#  endif
              default: /* COV_CRYPTO_30_CRYWRAPPER_MISRA_ADDITIONAL_STATEMENT */
                break;
            }
          }
          else
          {
            retValCry = CSM_E_NOT_OK;
            retVal = CRYPTO_E_KEY_NOT_VALID;
          }
        }
        break;
      }

      /* #40 Handle operationmode UPDATE. */
      case CRYPTO_OPERATIONMODE_UPDATE:
      {
        uint32 outputLength;
  
        /* Get output length in local variable to omit type mismatches */
        outputLength = *(job->jobPrimitiveInputOutput.outputLengthPtr);
  
        /* #44 Decide if standard or block API should be used. */
        switch (cipherService)
        {
#  if(CRYPTO_30_CRYWRAPPER_SYMDECRYPTCONFIG == STD_ON) /* COV_CRYPTO_30_CRYWRAPPER_PREVENTED_CRY_CONFIG */
          case CRYPTO_30_CRYWRAPPER_CIPHERSERVICE_STANDARD:
          {
            /* #45 Call Cry update function. */
            retValCry = Crypto_30_CryWrapper_GetUpdateFuncOfSymDecryptConfig(primCfgIdx)( /* SBSW_CRYPTO_30_CRYWRAPPER_CRY_FUNCTION_JOB_MEMBER_FORWARDING_WITH_LOCAL_VAR */
              Crypto_30_CryWrapper_GetInitPtrOfSymDecryptUpdateConfig(primCfgIdx),
              job->jobPrimitiveInputOutput.inputPtr,
              job->jobPrimitiveInputOutput.inputLength,
              job->jobPrimitiveInputOutput.outputPtr,
              &outputLength);
            startOrUpdateCalled = TRUE;
            break;
          }
#  endif
#  if(CRYPTO_30_CRYWRAPPER_SYMBLOCKDECRYPTCONFIG == STD_ON)
          case CRYPTO_30_CRYWRAPPER_CIPHERSERVICE_BLOCK:
          {
            /* #45 Call Cry update function. */
            retValCry = Crypto_30_CryWrapper_GetUpdateFuncOfSymBlockDecryptConfig(primCfgIdxBlock)( /* SBSW_CRYPTO_30_CRYWRAPPER_CRY_FUNCTION_JOB_MEMBER_FORWARDING_WITH_LOCAL_VAR */
              Crypto_30_CryWrapper_GetInitPtrOfSymBlockDecryptUpdateConfig(primCfgIdxBlock),
              job->jobPrimitiveInputOutput.inputPtr,
              job->jobPrimitiveInputOutput.inputLength,
              job->jobPrimitiveInputOutput.outputPtr,
              &outputLength);
            startOrUpdateCalled = TRUE;
            break;
          }
#  endif
        default: /* COV_CRYPTO_30_CRYWRAPPER_MISRA_ADDITIONAL_STATEMENT */
          break;
        }
  
        Crypto_30_CryWrapper_SetBufferLength(objectId, *(job->jobPrimitiveInputOutput.outputLengthPtr) - outputLength); /* SBSW_CRYPTO_30_CRYWRAPPER_CSL01_OBJECTID */
        Crypto_30_CryWrapper_SetWrittenLength(objectId, outputLength); /* SBSW_CRYPTO_30_CRYWRAPPER_CSL01_OBJECTID */
  
        /* copy back written output length */
        *(job->jobPrimitiveInputOutput.outputLengthPtr) = outputLength; /* SBSW_CRYPTO_30_CRYWRAPPER_WRITE_ACCESS_TO_JOBPRIMITIVE_INPUTOUTPUT_PTR */
  
        break;
      }
      /* #70 Handle operationmode FINISH. */
      case CRYPTO_OPERATIONMODE_FINISH:
      {
        uint32 outputLength;
  
        /* #75 Reinitialize written length and remaining buffer if UPDATE was not part of this job. */
        if ((job->jobPrimitiveInputOutput.mode & CRYPTO_OPERATIONMODE_UPDATE) != CRYPTO_OPERATIONMODE_UPDATE)
        {
          Crypto_30_CryWrapper_SetWrittenLength(objectId, 0u); /* SBSW_CRYPTO_30_CRYWRAPPER_CSL01_OBJECTID */
          Crypto_30_CryWrapper_SetBufferLength(objectId, *(job->jobPrimitiveInputOutput.outputLengthPtr)); /* SBSW_CRYPTO_30_CRYWRAPPER_CSL01_OBJECTID */
        }
  
        /* Get output length in local variable to omit type mismatches */
        outputLength = Crypto_30_CryWrapper_GetBufferLength(objectId);
  
        /* #79 Decide if standard or block API should be used. */
        switch (cipherService)
        {
#  if(CRYPTO_30_CRYWRAPPER_SYMDECRYPTCONFIG == STD_ON) /* COV_CRYPTO_30_CRYWRAPPER_PREVENTED_CRY_CONFIG */
          case CRYPTO_30_CRYWRAPPER_CIPHERSERVICE_STANDARD:
          {
            /* #80 Call Cry finish function. */
            retValCry = Crypto_30_CryWrapper_GetFinishFuncOfSymDecryptConfig(primCfgIdx)( /* SBSW_CRYPTO_30_CRYWRAPPER_CRY_FUNCTION_JOB_MEMBER_FORWARDING_WITH_LOCAL_VAR */
              Crypto_30_CryWrapper_GetInitPtrOfSymDecryptFinishConfig(primCfgIdx),
              &job->jobPrimitiveInputOutput.outputPtr[Crypto_30_CryWrapper_GetWrittenLength(objectId)],
              &outputLength);
            break;
          }
#  endif
#  if(CRYPTO_30_CRYWRAPPER_SYMBLOCKDECRYPTCONFIG == STD_ON)
          case CRYPTO_30_CRYWRAPPER_CIPHERSERVICE_BLOCK:
          {
            /* #80 Call Cry finish function. */
            retValCry = Crypto_30_CryWrapper_GetFinishFuncOfSymBlockDecryptConfig(primCfgIdxBlock)( /* SBSW_CRYPTO_30_CRYWRAPPER_CRY_FUNCTION_JOB_MEMBER_FORWARDING_WITH_LOCAL_VAR */
              Crypto_30_CryWrapper_GetInitPtrOfSymBlockDecryptFinishConfig(primCfgIdxBlock)
#   if (CRYPTO_30_CRYWRAPPER_PROVIDE_BUFFER_IN_BLOCK_FINISH == STD_ON)
              ,&job->jobPrimitiveInputOutput.outputPtr[Crypto_30_CryWrapper_GetWrittenLength(objectId)],
              &outputLength
#   endif
              );
#   if (CRYPTO_30_CRYWRAPPER_PROVIDE_BUFFER_IN_BLOCK_FINISH == STD_OFF)
            outputLength = 0u;
#   endif
            break;
          }
#  endif
          default: /* COV_CRYPTO_30_CRYWRAPPER_MISRA_ADDITIONAL_STATEMENT */
            break;
        }

        *job->jobPrimitiveInputOutput.outputLengthPtr = outputLength + Crypto_30_CryWrapper_GetWrittenLength(objectId); /* SBSW_CRYPTO_30_CRYWRAPPER_WRITE_ACCESS_TO_JOBPRIMITIVE_INPUTOUTPUT_PTR */

        break;
      }

      default: /* COV_CRYPTO_30_CRYWRAPPER_MISRA_ADDITIONAL_STATEMENT */
        break;
    }

    /* #100 Call finish function to cancel service if start or update has failed. */
    if ( (retValCry != CSM_E_OK)
      && (startOrUpdateCalled == TRUE) )
    {
      /* #104 Decide if standard or block API should be used. */
      switch (cipherService)
      {
#  if(CRYPTO_30_CRYWRAPPER_SYMDECRYPTCONFIG == STD_ON) /* COV_CRYPTO_30_CRYWRAPPER_PREVENTED_CRY_CONFIG */
        case CRYPTO_30_CRYWRAPPER_CIPHERSERVICE_STANDARD:
        {
          /* #105 Call Cry finish function. */
          (void)Crypto_30_CryWrapper_GetFinishFuncOfSymDecryptConfig(primCfgIdx)( /* SBSW_CRYPTO_30_CRYWRAPPER_CRY_FINISH_CALL */
            Crypto_30_CryWrapper_GetInitPtrOfSymDecryptFinishConfig(primCfgIdx),
            NULL_PTR,
            NULL_PTR);
          break;
        }
#  endif
#  if(CRYPTO_30_CRYWRAPPER_SYMBLOCKDECRYPTCONFIG == STD_ON)
        case CRYPTO_30_CRYWRAPPER_CIPHERSERVICE_BLOCK:
        {
          /* #105 Call Cry finish function. */
          (void)Crypto_30_CryWrapper_GetFinishFuncOfSymBlockDecryptConfig(primCfgIdxBlock)( /* SBSW_CRYPTO_30_CRYWRAPPER_CRY_FINISH_CALL */
            Crypto_30_CryWrapper_GetInitPtrOfSymBlockDecryptFinishConfig(primCfgIdxBlock)
#   if (CRYPTO_30_CRYWRAPPER_PROVIDE_BUFFER_IN_BLOCK_FINISH == STD_ON)
            ,NULL_PTR,
            NULL_PTR
#   endif
            );
          break;
        }
#  endif
        default: /* COV_CRYPTO_30_CRYWRAPPER_MISRA_ADDITIONAL_STATEMENT */
          break;
      }
    }
  }

  /* #110 Return E_OK if Cry function call was successful. */
  if (retValCry == CSM_E_OK)
  {
    retVal = E_OK;
  }
  else if (retValCry == CSM_E_BUSY)
  {
    retVal = CRYPTO_E_BUSY;
  }
  else
  {
  }
# else
  CRYPTO_30_CRYWRAPPER_DUMMY_STATEMENT(mode); /* PRQA S 3112 */ /* MD_MSR_14.2 */
  CRYPTO_30_CRYWRAPPER_DUMMY_STATEMENT(job); /* PRQA S 3112 */ /* MD_MSR_14.2 */
# endif

  CRYPTO_30_CRYWRAPPER_DUMMY_STATEMENT(objectId); /* PRQA S 3112 */ /* MD_MSR_14.2 */

  return retVal;
} /* PRQA S 6030,6010,6080 */ /* MD_MSR_STCYC, MD_MSR_STPTH, MD_MSR_STMIF */ 
#endif /* (CRYPTO_30_CRYWRAPPER_AES128DECRYPT == STD_ON) */

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/

#if (CRYPTO_30_CRYWRAPPER_SERVICE_ENCRYPT == STD_ON)
/**********************************************************************************************************************
 *  Crypto_30_CryWrapper_DispatchCipherEncrypt()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_DispatchCipherEncrypt(uint32 objectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) job,
  Crypto_OperationModeType mode)
{
  /* ----- Local Variables ------------------------------------------------ */
  Std_ReturnType retVal = E_NOT_OK;
  uint8 errorId = CRYPTO_E_PARAM_HANDLE;

  /* ----- Development Error Checks --------------------------------------- */
  /* Development error is caught in if-statement in the implementation (set to no-error, default initialized with according error-id) */
  {
    /* ----- Implementation ------------------------------------------------- */
# if (CRYPTO_30_CRYWRAPPER_AES128ENCRYPT == STD_ON) /* COV_CRYPTO_30_CRYWRAPPER_PREVENTED_CRY_CONFIG */
    /* #05 Dispatch Encryption based on algorithm family and mode (only AES in CBC and ECB mode supported). */
    if ( (job->jobPrimitiveInfo->primitiveInfo->algorithm.family == CRYPTO_ALGOFAM_AES)
      && ( (job->jobPrimitiveInfo->primitiveInfo->algorithm.mode == CRYPTO_ALGOMODE_CBC)
        || (job->jobPrimitiveInfo->primitiveInfo->algorithm.mode == CRYPTO_ALGOMODE_ECB) ) )
    {
      errorId = CRYPTO_E_NO_ERROR;
      if (Crypto_30_CryWrapper_IsAes128EncryptUsedOfObjectInfo(objectId) == TRUE)
      {
        retVal = Crypto_30_CryWrapper_DispatchCipherAes128Encrypt(objectId, job, mode); /* SBSW_CRYPTO_30_CRYWRAPPER_FORWARDING_OF_JOB_PTR */
      }
    }
# endif
  }
  /* ----- Development Error Report --------------------------------------- */
# if (CRYPTO_30_CRYWRAPPER_DEV_ERROR_REPORT == STD_ON)
  if (errorId != CRYPTO_E_NO_ERROR)
  {
    (void)Det_ReportError(CRYPTO_30_CRYWRAPPER_MODULE_ID, CRYPTO_30_CRYWRAPPER_INSTANCE_ID, CRYPTO_30_CRYWRAPPER_SID_PROCESS_JOB, errorId);
  }
# else
  CRYPTO_30_CRYWRAPPER_DUMMY_STATEMENT(errorId); /* PRQA S 3112 */ /* MD_MSR_14.2 */
# endif

  return retVal;
}
#endif /* (CRYPTO_30_CRYWRAPPER_SERVICE_ENCRYPT == STD_ON) */

#if (CRYPTO_30_CRYWRAPPER_SERVICE_DECRYPT == STD_ON)
/**********************************************************************************************************************
 * Crypto_30_CryWrapper_DispatchCipherDecrypt()
 **********************************************************************************************************************/
/*!
 *
 * Internal comment removed.
 *
 *
 */
FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_DispatchCipherDecrypt(uint32 objectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) job,
  Crypto_OperationModeType mode)
{
  /* ----- Local Variables ------------------------------------------------ */
  Std_ReturnType retVal = E_NOT_OK;
  uint8 errorId = CRYPTO_E_PARAM_HANDLE;

  /* ----- Development Error Checks --------------------------------------- */
  /* Development error is caught in if-statement in the implementation (set to no-error, default initialized with according error-id) */
  {
    /* ----- Implementation ------------------------------------------------- */
# if (CRYPTO_30_CRYWRAPPER_AES128DECRYPT == STD_ON) /* COV_CRYPTO_30_CRYWRAPPER_PREVENTED_CRY_CONFIG */
    /* #05 Dispatch Decryption based on algorithm family. */
    if ( (job->jobPrimitiveInfo->primitiveInfo->algorithm.family == CRYPTO_ALGOFAM_AES)
      && ( (job->jobPrimitiveInfo->primitiveInfo->algorithm.mode == CRYPTO_ALGOMODE_CBC)
        || (job->jobPrimitiveInfo->primitiveInfo->algorithm.mode == CRYPTO_ALGOMODE_ECB) ) )
    {
      errorId = CRYPTO_E_NO_ERROR;
      if (Crypto_30_CryWrapper_IsAes128DecryptUsedOfObjectInfo(objectId) == TRUE)
      {
        retVal = Crypto_30_CryWrapper_DispatchCipherAes128Decrypt(objectId, job, mode); /* SBSW_CRYPTO_30_CRYWRAPPER_FORWARDING_OF_JOB_PTR */
      }
    }
# endif

  }
  /* ----- Development Error Report --------------------------------------- */
# if (CRYPTO_30_CRYWRAPPER_DEV_ERROR_REPORT == STD_ON)
  if (errorId != CRYPTO_E_NO_ERROR)
  {
    (void)Det_ReportError(CRYPTO_30_CRYWRAPPER_MODULE_ID, CRYPTO_30_CRYWRAPPER_INSTANCE_ID, CRYPTO_30_CRYWRAPPER_SID_PROCESS_JOB, errorId);
  }
# else
  CRYPTO_30_CRYWRAPPER_DUMMY_STATEMENT(errorId); /* PRQA S 3112 */ /* MD_MSR_14.2 */
# endif
  return retVal;
}
#endif /* (CRYPTO_30_CRYWRAPPER_SERVICE_DECRYPT == STD_ON) */

#define CRYPTO_30_CRYWRAPPER_STOP_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  END OF FILE: Crypto_30_CryWrapper_Cipher.c
 *********************************************************************************************************************/
