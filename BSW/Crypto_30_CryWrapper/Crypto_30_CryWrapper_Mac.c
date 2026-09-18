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
/*      \file  Crypto_30_CryWrapper_Mac.c
 *      \brief  MICROSAR Crypto Driver (Crypto)
 *
 *      \details  Dispatcher for MAC Services
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Refer to the module's header file.
 *********************************************************************************************************************/

#define CRYPTO_30_CRYWRAPPER_MAC_SOURCE
/* PRQA S 0777, 0779, 3453 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779, MD_MSR_19.7 */

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Crypto_30_CryWrapper.h"
#include "Crypto_30_CryWrapper_Services.h"

/**********************************************************************************************************************
 *  LOCAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL_CONSTANT MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

#define CRYPTO_30_CRYWRAPPER_START_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#if (CRYPTO_30_CRYWRAPPER_CMACAESGENERATE == STD_ON)
/**********************************************************************************************************************
 *  Crypto_30_CryWrapper_DispatchCmacAesGenerate()
 *********************************************************************************************************************/
/*! \brief         Dispatches the CmacAesGenerate job to the lower layer.
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
 *  \config        CRYPTO_30_CRYWRAPPER_CMACAESGENERATE
 *********************************************************************************************************************/
CRYPTO_30_CRYWRAPPER_LOCAL_INLINE FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_DispatchCmacAesGenerate(uint32 objectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) job,
  Crypto_OperationModeType mode);
#endif /* (CRYPTO_30_CRYWRAPPER_CMACAESGENERATE == STD_ON) */

#if (CRYPTO_30_CRYWRAPPER_CMACAESVERIFY == STD_ON)
/**********************************************************************************************************************
 *  Crypto_30_CryWrapper_DispatchCmacAesVerify()
 *********************************************************************************************************************/
/*! \brief         Dispatches the CmacAesVerify job to the lower layer.
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
 *  \config        CRYPTO_30_CRYWRAPPER_CMACAESVERIFY
 *********************************************************************************************************************/
CRYPTO_30_CRYWRAPPER_LOCAL_INLINE FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_DispatchCmacAesVerify(uint32 objectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) job,
  Crypto_OperationModeType mode);
#endif /* (CRYPTO_30_CRYWRAPPER_CMACAESVERIFY == STD_ON) */

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/

#if (CRYPTO_30_CRYWRAPPER_CMACAESGENERATE == STD_ON)
/**********************************************************************************************************************
* Crypto_30_CryWrapper_DispatchCmacAesGenerate()
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
 */
CRYPTO_30_CRYWRAPPER_LOCAL_INLINE FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_DispatchCmacAesGenerate(uint32 objectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) job, /* PRQA S 3673 */ /* MD_CRYPTO_30_CRYWRAPPER_3673_2 */
  Crypto_OperationModeType mode)
{
  /* ----- Local Variables ------------------------------------------------ */
  Std_ReturnType retVal = E_NOT_OK;

# if (CRYPTO_30_CRYWRAPPER_MACGENERATECONFIG == STD_ON) /* COV_CRYPTO_30_CRYWRAPPER_PREVENTED_CRY_CONFIG */
  Csm_SymKeyType symKey;
  Csm_ReturnType retValCry = CSM_E_NOT_OK;
  uint32 primCfgIdx;
  Crypto_30_CryWrapper_JobsIterType jobIdx;
  boolean jobWasFound = FALSE;
  boolean startOrUpdateCalled = FALSE;

  /* ----- Implementation ------------------------------------------------- */
  /* #01 Search for a matching Job to decide which CRY configuration shall be used. */
  for (primCfgIdx = 0u; (primCfgIdx < Crypto_30_CryWrapper_GetSizeOfMacGenerateConfig()) && (jobWasFound == FALSE); primCfgIdx++)
  {
    for (jobIdx = Crypto_30_CryWrapper_GetJobsStartIdxOfMacGenerateConfig(primCfgIdx); jobIdx < Crypto_30_CryWrapper_GetJobsEndIdxOfMacGenerateConfig(primCfgIdx); jobIdx++)
    {
      if (Crypto_30_CryWrapper_GetJobs(jobIdx) == job->jobInfo->jobId)
      {
        jobWasFound = TRUE;
        /* #05 Distinguish modes. */
        switch (mode)
        {
          /* #10 Handle operationmode START. */
          case CRYPTO_OPERATIONMODE_START:
          {
            /* #15 Prepare the symmetric key which shall be used. */
            retVal = Crypto_30_CryWrapper_GetSymKey(job->cryptoKeyId, &symKey); /* SBSW_CRYPTO_30_CRYWRAPPER_STACK_KEY_VARIABLE_AS_PTR */
  
            if (retVal == E_OK)
            {
              retVal = E_NOT_OK;
              /* #20 Call Cry start function. */
              retValCry = Crypto_30_CryWrapper_GetStartFuncOfMacGenerateConfig(primCfgIdx)( /* SBSW_CRYPTO_30_CRYWRAPPER_CRY_STACK_VARIABLE_AS_PTR */
                Crypto_30_CryWrapper_GetInitPtrOfMacGenerateStartConfig(primCfgIdx),
                &symKey);
              startOrUpdateCalled = TRUE;
            }
            break;
          }
  
          /* #40 Handle operationmode UPDATE. */
          case CRYPTO_OPERATIONMODE_UPDATE:
          {
            /* #45 Call Cry update function. */
            retValCry = Crypto_30_CryWrapper_GetUpdateFuncOfMacGenerateConfig(primCfgIdx)( /* SBSW_CRYPTO_30_CRYWRAPPER_CRY_FUNCTION_JOB_MEMBER_FORWARDING */
              Crypto_30_CryWrapper_GetInitPtrOfMacGenerateUpdateConfig(primCfgIdx),
              job->jobPrimitiveInputOutput.inputPtr,
              job->jobPrimitiveInputOutput.inputLength);  
            startOrUpdateCalled = TRUE;
            break;
          }
  
          /* #70 Handle operationmode FINISH. */
          case CRYPTO_OPERATIONMODE_FINISH:
          {
            /* #80 Call Cry finish function. */
            retValCry = Crypto_30_CryWrapper_GetFinishFuncOfMacGenerateConfig(primCfgIdx)( /* SBSW_CRYPTO_30_CRYWRAPPER_CRY_FUNCTION_JOB_MEMBER_FORWARDING */
              Crypto_30_CryWrapper_GetInitPtrOfMacGenerateFinishConfig(primCfgIdx),
              job->jobPrimitiveInputOutput.outputPtr,
              job->jobPrimitiveInputOutput.outputLengthPtr,
              TRUE);
            break;
          }
  
          default: /* COV_CRYPTO_30_CRYWRAPPER_MISRA_ADDITIONAL_STATEMENT */
            break;
        }

        /* #100 Call finish function to cancel service if start or update has failed. */
        if ( (retValCry != CSM_E_OK)
          && (startOrUpdateCalled == TRUE) )
        {
          (void)Crypto_30_CryWrapper_GetFinishFuncOfMacGenerateConfig(primCfgIdx)( /* SBSW_CRYPTO_30_CRYWRAPPER_CRY_FINISH_CALL */
            Crypto_30_CryWrapper_GetInitPtrOfMacGenerateFinishConfig(primCfgIdx),
            NULL_PTR,
            NULL_PTR,
            FALSE);
        }
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
} /* PRQA S 6080,6030 */ /* MD_MSR_STMIF */ /* MD_MSR_STCYC */
#endif /* (CRYPTO_30_CRYWRAPPER_CMACAESGENERATE == STD_ON) */

#if (CRYPTO_30_CRYWRAPPER_CMACAESVERIFY == STD_ON)
/**********************************************************************************************************************
* Crypto_30_CryWrapper_DispatchCmacAesVerify()
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
 */
CRYPTO_30_CRYWRAPPER_LOCAL_INLINE FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_DispatchCmacAesVerify(uint32 objectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) job,
  Crypto_OperationModeType mode)
{
  /* ----- Local Variables ------------------------------------------------ */
  Std_ReturnType retVal = E_NOT_OK;

# if (CRYPTO_30_CRYWRAPPER_MACVERIFYCONFIG == STD_ON) /* COV_CRYPTO_30_CRYWRAPPER_PREVENTED_CRY_CONFIG */
  Csm_SymKeyType symKey;
  Csm_VerifyResultType verResult;
  Csm_ReturnType retValCry = CSM_E_NOT_OK;
  uint32 primCfgIdx;
  Crypto_30_CryWrapper_JobsIterType jobIdx;
  uint32 macSize;
  boolean jobWasFound = FALSE;
  boolean startOrUpdateCalled = FALSE;

  /* ----- Implementation ------------------------------------------------- */
  /* #01 Search for a matching Job to decide which CRY configuration shall be used. */
  for (primCfgIdx = 0u; (primCfgIdx < Crypto_30_CryWrapper_GetSizeOfMacVerifyConfig()) && (jobWasFound == FALSE); primCfgIdx++)
  {
    for (jobIdx = Crypto_30_CryWrapper_GetJobsStartIdxOfMacVerifyConfig(primCfgIdx); jobIdx < Crypto_30_CryWrapper_GetJobsEndIdxOfMacVerifyConfig(primCfgIdx); jobIdx++)
    {
      if (Crypto_30_CryWrapper_GetJobs(jobIdx) == job->jobInfo->jobId)
      {
        jobWasFound = TRUE;
        /* #05 Distinguish modes. */
        switch (mode)
        {
          /* #10 Handle operationmode START. */
          case CRYPTO_OPERATIONMODE_START:
          {
            /* #15 Prepare the symmetric key which shall be used. */
            retVal = Crypto_30_CryWrapper_GetSymKey(job->cryptoKeyId, &symKey); /* SBSW_CRYPTO_30_CRYWRAPPER_STACK_KEY_VARIABLE_AS_PTR */
  
            if (retVal == E_OK)
            {
              retVal = E_NOT_OK;

              /* #20 Call Cry start function. */
              retValCry = Crypto_30_CryWrapper_GetStartFuncOfMacVerifyConfig(primCfgIdx)( /* SBSW_CRYPTO_30_CRYWRAPPER_CRY_STACK_VARIABLE_AS_PTR */
                Crypto_30_CryWrapper_GetInitPtrOfMacVerifyStartConfig(primCfgIdx),
                &symKey);
              startOrUpdateCalled = TRUE;
            }
            break;
          }
  
          /* #40 Handle operationmode UPDATE. */
          case CRYPTO_OPERATIONMODE_UPDATE:
          {
            /* #45 Call Cry update function. */
            retValCry = Crypto_30_CryWrapper_GetUpdateFuncOfMacVerifyConfig(primCfgIdx)( /* SBSW_CRYPTO_30_CRYWRAPPER_CRY_FUNCTION_JOB_MEMBER_FORWARDING */
              Crypto_30_CryWrapper_GetInitPtrOfMacVerifyUpdateConfig(primCfgIdx),
              job->jobPrimitiveInputOutput.inputPtr,
              job->jobPrimitiveInputOutput.inputLength);
            startOrUpdateCalled = TRUE;
            break;
          }
  
          /* #70 Handle operationmode FINISH. */
          case CRYPTO_OPERATIONMODE_FINISH:
          {
            macSize = job->jobPrimitiveInputOutput.secondaryInputLength;
  
            if (Crypto_30_CryWrapper_IsCryptoConvertLengthToBytesOfMacVerifyConfig(primCfgIdx) == TRUE)
            {
              macSize = CRYPTO_CRYWRAPPER_DIV8(macSize);
            }
  
            if ((Crypto_30_CryWrapper_IsCryptoConvertLengthToBytesOfMacVerifyConfig(primCfgIdx) == TRUE)
              && ((job->jobPrimitiveInputOutput.secondaryInputLength & (8u - 1u)) != 0u))
            {
              retVal = E_NOT_OK;
            }
            /* #80 Call Cry finish function. */
            else if (CSM_E_OK != Crypto_30_CryWrapper_GetFinishFuncOfMacVerifyConfig(primCfgIdx)( /* SBSW_CRYPTO_30_CRYWRAPPER_CRY_FUNCTION_JOB_MEMBER_FORWARDING_WITH_LOCAL_VAR */
              Crypto_30_CryWrapper_GetInitPtrOfMacVerifyFinishConfig(primCfgIdx),
              job->jobPrimitiveInputOutput.secondaryInputPtr,
              macSize,
              &verResult))
            {
              retValCry = CSM_E_NOT_OK;
              *job->jobPrimitiveInputOutput.verifyPtr = CRYPTO_E_VER_NOT_OK; /* SBSW_CRYPTO_30_CRYWRAPPER_WRITE_ACCESS_TO_JOBPRIMITIVE_INPUTOUTPUT_PTR */
            }
            else
            {
              retValCry = CSM_E_OK;
              if (verResult == CSM_E_VER_OK)
              {
                *job->jobPrimitiveInputOutput.verifyPtr = CRYPTO_E_VER_OK; /* SBSW_CRYPTO_30_CRYWRAPPER_WRITE_ACCESS_TO_JOBPRIMITIVE_INPUTOUTPUT_PTR */
              }
              else
              {
                *job->jobPrimitiveInputOutput.verifyPtr = CRYPTO_E_VER_NOT_OK; /* SBSW_CRYPTO_30_CRYWRAPPER_WRITE_ACCESS_TO_JOBPRIMITIVE_INPUTOUTPUT_PTR */
              }
            }
            break;
          }

          default: /* COV_CRYPTO_30_CRYWRAPPER_MISRA_ADDITIONAL_STATEMENT */
            break;
        }

        /* #100 Call finish function to cancel service if start or update has failed. */
        if ( (retValCry != CSM_E_OK)
          && (startOrUpdateCalled == TRUE) )
        {
          (void)Crypto_30_CryWrapper_GetFinishFuncOfMacVerifyConfig(primCfgIdx)( /* SBSW_CRYPTO_30_CRYWRAPPER_CRY_FINISH_CALL */
            Crypto_30_CryWrapper_GetInitPtrOfMacVerifyFinishConfig(primCfgIdx),
            NULL_PTR,
            0u,
            NULL_PTR);
        }
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
} /* PRQA S 6080,6030,6010 */ /* MD_MSR_STMIF */ /* MD_MSR_STCYC */ /* MD_MSR_STPTH */
#endif /* (CRYPTO_30_CRYWRAPPER_CMACAESVERIFY == STD_ON) */

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/
#if (CRYPTO_30_CRYWRAPPER_SERVICE_MAC_GENERATE == STD_ON)
/**********************************************************************************************************************
 * Crypto_30_CryWrapper_DispatchMacGenerate()
 **********************************************************************************************************************/
/*!
 *
 * Internal comment removed.
 *
 *
 */
FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_DispatchMacGenerate(uint32 objectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) job,
  Crypto_OperationModeType mode)
{
  /* ----- Local Variables ------------------------------------------------ */
  Std_ReturnType retVal = E_NOT_OK;
  uint8 errorId = CRYPTO_E_NO_ERROR;

  /* ----- Development Error Checks --------------------------------------- */
  /* Development error is caught in if-statement in the implementation (set to no-error, default initialized with according error-id) */
  {
    /* ----- Implementation ------------------------------------------------- */

    /* #05 Dispatch Mac generation based on algorithm family. */
    switch (job->jobPrimitiveInfo->primitiveInfo->algorithm.family)
    {
# if (CRYPTO_30_CRYWRAPPER_CMACAESGENERATE == STD_ON) /* COV_CRYPTO_30_CRYWRAPPER_PREVENTED_CRY_CONFIG */
      case CRYPTO_ALGOFAM_AES:
      {
        if (Crypto_30_CryWrapper_IsCmacAesGenerateUsedOfObjectInfo(objectId) == TRUE)
        {
          retVal = Crypto_30_CryWrapper_DispatchCmacAesGenerate(objectId, job, mode); /* SBSW_CRYPTO_30_CRYWRAPPER_FORWARDING_OF_JOB_PTR */
        }
        break;
      }
# endif
      default:
      {
        errorId = CRYPTO_E_PARAM_HANDLE;
        break;
      }
    }
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
#endif /* (CRYPTO_30_CRYWRAPPER_SERVICE_MAC_GENERATE == STD_ON) */

#if (CRYPTO_30_CRYWRAPPER_SERVICE_MAC_VERIFY == STD_ON)
/**********************************************************************************************************************
* Crypto_30_CryWrapper_DispatchMacVerify()
**********************************************************************************************************************/
/*!
*
* Internal comment removed.
 *
 *
*/
FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_DispatchMacVerify(uint32 objectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) job,
  Crypto_OperationModeType mode)
{
  /* ----- Local Variables ------------------------------------------------ */
  Std_ReturnType retVal = E_NOT_OK;
  uint8 errorId = CRYPTO_E_NO_ERROR;

  /* ----- Development Error Checks --------------------------------------- */
  /* Development error is caught in if-statement in the implementation (set to no-error, default initialized with according error-id) */
  {
    /* ----- Implementation ------------------------------------------------- */
    /* #05 Dispatch Mac verification based on algorithm family. */
    switch (job->jobPrimitiveInfo->primitiveInfo->algorithm.family)
    {
# if (CRYPTO_30_CRYWRAPPER_CMACAESVERIFY == STD_ON) /* COV_CRYPTO_30_CRYWRAPPER_PREVENTED_CRY_CONFIG */
      case CRYPTO_ALGOFAM_AES:
      {
        if (Crypto_30_CryWrapper_IsCmacAesVerifyUsedOfObjectInfo(objectId) == TRUE)
        {
          retVal = Crypto_30_CryWrapper_DispatchCmacAesVerify(objectId, job, mode); /* SBSW_CRYPTO_30_CRYWRAPPER_FORWARDING_OF_JOB_PTR */
        }
        break;
      }
# endif
      default:
      {
        errorId = CRYPTO_E_PARAM_HANDLE;
        break;
      }
    }
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
#endif /* (CRYPTO_30_CRYWRAPPER_SERVICE_MAC_VERIFY == STD_ON) */

#define CRYPTO_30_CRYWRAPPER_STOP_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  END OF FILE: Crypto_30_CryWrapper_Mac.c
 *********************************************************************************************************************/
