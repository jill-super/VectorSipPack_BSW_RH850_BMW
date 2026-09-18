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
/*      \file  Crypto_30_CryWrapper_Random.c
 *      \brief  MICROSAR Crypto Driver (Crypto)
 *
 *      \details  Dispatcher for RANDOM Services
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Refer to the module's header file.
 *********************************************************************************************************************/

#define CRYPTO_30_CRYWRAPPER_RANDOM_SOURCE
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
 *  LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

#define CRYPTO_30_CRYWRAPPER_START_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#if (CRYPTO_30_CRYWRAPPER_RANDOM == STD_ON)
/**********************************************************************************************************************
 *  Crypto_30_CryWrapper_DispatchRandomTrng()
*********************************************************************************************************************/
/*! \brief         Dispatches the Trng job to the lower layer.
 *  \details       This function dispatches the provided job to the lower layer crypto library. Based on the jobs
 *                 operation mode, it triggers different stages of the service.
 *  \param[in]     objectId           Holds the identifier of the Crypto Driver Object.
 *  \param[in]     mode               Operation mode in which the job currently is.
 *  \param[in,out] job                Pointer to the job which shall be dispatched.
 *  \return        E_OK               Dispatching was successful.
 *                 E_NOT_OK           Dispatching failed.
 *                 CRYPTO_E_BUSY              Request failed, the CRY driver was BUSY.
 *  \pre           objectId has to be a valid driver object handle.
 *  \context       TASK
 *  \reentrant     TRUE
 *  \synchronous   TRUE
*********************************************************************************************************************/
CRYPTO_30_CRYWRAPPER_LOCAL_INLINE FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_DispatchRandomTrng(uint32 objectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) job,
  Crypto_OperationModeType mode);
#endif /* (CRYPTO_30_CRYWRAPPER_RANDOM == STD_ON) */

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/
#if (CRYPTO_30_CRYWRAPPER_RANDOM == STD_ON)
/**********************************************************************************************************************
 * Crypto_30_CryWrapper_DispatchRandomTrng()
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
CRYPTO_30_CRYWRAPPER_LOCAL_INLINE FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_DispatchRandomTrng(uint32 objectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) job, /* PRQA S 3673 */ /* MD_CRYPTO_30_CRYWRAPPER_3673_1 */
  Crypto_OperationModeType mode)
{
  /* ----- Local Variables ------------------------------------------------ */
  Std_ReturnType retVal = E_NOT_OK;

# if (CRYPTO_30_CRYWRAPPER_RANDOMSEEDCONFIG == STD_ON) /* COV_CRYPTO_30_CRYWRAPPER_PREVENTED_CRY_CONFIG */
  uint32 primCfgIdx;
  Crypto_30_CryWrapper_JobsIterType jobIdx;
  boolean jobWasFound = FALSE;
  Csm_ReturnType retValCry = CSM_E_NOT_OK;

  /* ----- Implementation ------------------------------------------------- */
  /* #01 Search for a matching Job to decide which CRY configuration shall be used. */
  for (primCfgIdx = 0; (primCfgIdx < Crypto_30_CryWrapper_GetSizeOfRandomGenerateConfig()) && (jobWasFound == FALSE); primCfgIdx++)
  {
    for (jobIdx = Crypto_30_CryWrapper_GetJobsStartIdxOfRandomGenerateConfig(primCfgIdx); jobIdx < Crypto_30_CryWrapper_GetJobsEndIdxOfRandomGenerateConfig(primCfgIdx); jobIdx++)
    {
      if (Crypto_30_CryWrapper_GetJobs(jobIdx) == job->jobInfo->jobId)
      {
        jobWasFound = TRUE;
        /* #05 Distinguish modes. */
        switch (mode)
        {
          /* #40 Handle operationmode UPDATE. */
          case CRYPTO_OPERATIONMODE_UPDATE:
          {
            /* #45 Call Cry update function. */
            retValCry = Crypto_30_CryWrapper_GetPlainFuncOfRandomGenerateConfig(primCfgIdx)( /* SBSW_CRYPTO_30_CRYWRAPPER_CRY_FUNCTION_JOB_MEMBER_FORWARDING */
              Crypto_30_CryWrapper_GetInitPtrOfRandomGenerateConfig(primCfgIdx),
              job->jobPrimitiveInputOutput.outputPtr,
              *job->jobPrimitiveInputOutput.outputLengthPtr);
            break;
          }
          default:
          {
            /* #48 Return E_OK in other cases than update. */
            retValCry = CSM_E_OK;
            break;
          }
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
} /* PRQA S 6030, 6080 */ /* MD_MSR_STCYC, MD_MSR_STMIF */
#endif /* #if (CRYPTO_30_CRYWRAPPER_RANDOM == STD_ON) */

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/

#if (CRYPTO_30_CRYWRAPPER_SERVICE_RANDOM == STD_ON)
/**********************************************************************************************************************
 *  Crypto_30_CryWrapper_DispatchRandom()
 **********************************************************************************************************************/
/*!
 *
 * Internal comment removed.
 *
 *
 */
FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_DispatchRandom(uint32 objectId,
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
    /* #05 Dispatch Service according to algorithm family. */
    switch (job->jobPrimitiveInfo->primitiveInfo->algorithm.family)
    {
# if (CRYPTO_30_CRYWRAPPER_RANDOM == STD_ON) /* COV_CRYPTO_30_CRYWRAPPER_VAR_OPTIONAL_DEFINE_TX */
      case CRYPTO_ALGOFAM_RNG:
      {
        if (Crypto_30_CryWrapper_IsRandomUsedOfObjectInfo(objectId) == TRUE)
        {
          retVal = Crypto_30_CryWrapper_DispatchRandomTrng(objectId, job, mode); /* SBSW_CRYPTO_30_CRYWRAPPER_FORWARDING_OF_JOB_PTR */
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
#endif /* (CRYPTO_30_CRYWRAPPER_SERVICE_RANDOM == STD_ON) */

#define CRYPTO_30_CRYWRAPPER_STOP_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  END OF FILE: Crypto_30_CryWrapper_Random.c
 *********************************************************************************************************************/
