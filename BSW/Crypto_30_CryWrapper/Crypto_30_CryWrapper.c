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
/*      \file  Crypto_30_CryWrapper.c
 *      \brief  MICROSAR Crypto Driver (Crypto)
 *
 *      \details  Implementation of the MICROSAR Crypto Driver (Crypto)
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Refer to the module's header file.
 *
 *  FILE VERSION
 *  -------------------------------------------------------------------------------------------------------------------
 *  Refer to the VERSION CHECK below.
 *********************************************************************************************************************/

#define CRYPTO_30_CRYWRAPPER_SOURCE
/* PRQA S 0777, 0779, 3453 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779, MD_MSR_19.7 */

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

#include "Crypto_30_CryWrapper.h"
#include "Crypto_30_CryWrapper_Services.h"
#include "CryIf_Cbk.h"

#if ( CRYPTO_30_CRYWRAPPER_DEV_ERROR_REPORT == STD_ON )
# include "Det.h"
#endif

#include "Crypto_30_CryWrapper_Hw.h"

/**********************************************************************************************************************
 *  VERSION CHECK
 *********************************************************************************************************************/

 /* Check the version of CRYPTO header file */
#if (  (CRYPTO_30_CRYWRAPPER_MAJOR_VERSION != (2u)) \
    || (CRYPTO_30_CRYWRAPPER_MINOR_VERSION != (1u)) \
    || (CRYPTO_30_CRYWRAPPER_PATCH_VERSION != (1u)) )
# error "Vendor specific version numbers of Crypto_30_CryWrapper.c and Crypto_30_CryWrapper.h are inconsistent"
#endif

/* AUTOSAR version information check has to match definition in header file */
#if (  (CRYPTO_30_CRYWRAPPER_AR_RELEASE_MAJOR_VERSION    != (0x04u)) \
    || (CRYPTO_30_CRYWRAPPER_AR_RELEASE_MINOR_VERSION    != (0x03u)) \
    || (CRYPTO_30_CRYWRAPPER_AR_RELEASE_REVISION_VERSION != (0x00u)) )
# error "AUTOSAR Specification Version numbers of Crypto_30_CryWrapper.c and Crypto_30_CryWrapper.h are inconsistent!"
#endif

/**********************************************************************************************************************
 *  LOCAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

#if !defined (CRYPTO_30_CRYWRAPPER_LOCAL) /* COV_CRYPTO_30_CRYWRAPPER_LOCAL_DEFINE */
# define CRYPTO_30_CRYWRAPPER_LOCAL static
#endif

#if !defined (CRYPTO_30_CRYWRAPPER_LOCAL_INLINE) /* COV_CRYPTO_30_CRYWRAPPER_LOCAL_DEFINE */
# define CRYPTO_30_CRYWRAPPER_LOCAL_INLINE LOCAL_INLINE
#endif

#define CRYPTO_30_CRYWRAPPER_DRIVEROBJECTSTATE_IDLE          (0x00u)
#define CRYPTO_30_CRYWRAPPER_DRIVEROBJECTSTATE_PROCESSING    (0x01u)

/**********************************************************************************************************************
 *  LOCAL DATA PROTOTYPES
 *********************************************************************************************************************/

#define CRYPTO_30_CRYWRAPPER_START_SEC_VAR_ZERO_INIT_8BIT
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#if (CRYPTO_30_CRYWRAPPER_DEV_ERROR_DETECT == STD_ON)
/*! Initialization state of the module */
VAR(uint8, CRYPTO_30_CRYWRAPPER_VAR_ZERO_INIT) Crypto_30_CryWrapper_ModuleInitialized = CRYPTO_30_CRYWRAPPER_UNINIT;
#endif

#define CRYPTO_30_CRYWRAPPER_STOP_SEC_VAR_ZERO_INIT_8BIT
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

#define CRYPTO_30_CRYWRAPPER_START_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
*  Crypto_30_CryWrapper_TryObtainingLock()
*********************************************************************************************************************/
/*! \brief         Try to obtain lock workspace.
 *  \details       This function tries to lock the workspace with the job.
 *  \param[in]     objectId          Holds the identifier of the lock.
 *  \param[in]     jobId             Holds the identifier of the related job.
 *  \return        TRUE              Lock is obtained or was already obtained.
 *                 FALSE             Lock is occupied by other job.
 *  \pre           lockIdx has to be a valid lock identifier.
 *  \pre           Has to be called inside an exclusive area which protects the lock.
 *  \context       TASK
 *  \reentrant     TRUE
 *  \synchronous   TRUE
*********************************************************************************************************************/
CRYPTO_30_CRYWRAPPER_LOCAL_INLINE FUNC(boolean, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_TryObtainingLock(uint32 objectId, uint32 jobId);

/**********************************************************************************************************************
*  Crypto_30_CryWrapper_UpdateJobState()
*********************************************************************************************************************/
/*! \brief         Updates the state of the job according to retVal of dispatcher.
 *  \details       This function updates the state of job according to retVal of dispatcher as long as dispatcher is not busy.
 *  \param[in]     retVal             Return value of the dispatcher
 *  \param[in]     job                Pointer to the job whose state shall be updated
 *  \pre           -
 *  \context       TASK
 *  \reentrant     TRUE
 *  \synchronous   TRUE
*********************************************************************************************************************/
CRYPTO_30_CRYWRAPPER_LOCAL_INLINE FUNC(void, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_UpdateJobState(Std_ReturnType retVal,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) job);

/**********************************************************************************************************************
*  Crypto_30_CryWrapper_DispatchService()
*********************************************************************************************************************/
/*! \brief         Dispatches the job to a service.
 *  \details       This function dispatches the provided job to the service as specified in the job configuration.
 *  \param[in]     objectId           Holds the identifier of the Crypto Driver Object.
 *  \param[in]     job                Pointer to the job which shall be dispatched.
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
 *********************************************************************************************************************/
CRYPTO_30_CRYWRAPPER_LOCAL FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_DispatchService(uint32 objectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) job,
  Crypto_OperationModeType mode);

#if (CRYPTO_30_CRYWRAPPER_DEV_ERROR_DETECT == STD_ON)
/**********************************************************************************************************************
*  Crypto_30_CryWrapper_Local_DetChecksServiceValues()
*********************************************************************************************************************/
/*! \brief         Det Checks for the Service Parameters.
 *  \details       This function checks the Det-Checks for all required in- and output-values. 
 *  \param[in]     job                Pointer to the job which shall be dispatched.
 *  \param[out]    errorId            Output Pointer to the detected Error-Type-Id
 *  \return        E_OK               No Det error detected.
 *                 E_NOT_OK           Det error detected.
 *  \pre           objectId has to be a valid driver object handle.
 *  \context       TASK
 *  \reentrant     TRUE
 *  \synchronous   TRUE
 *  \config        CRYPTO_30_CRYWRAPPER_DEV_ERROR_DETECT
 *********************************************************************************************************************/
CRYPTO_30_CRYWRAPPER_LOCAL_INLINE FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_Local_DetChecksServiceValues(
  P2CONST(Crypto_JobType, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) job,
  P2VAR(uint8, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) errorId);
#endif /* (CRYPTO_30_CRYWRAPPER_DEV_ERROR_DETECT == STD_ON) */

/**********************************************************************************************************************
*  Crypto_30_CryWrapper_Process()
*********************************************************************************************************************/
/*! \brief         Processes the received job.
 *  \details       Performs the crypto primitive, that is configured in the job parameter. Takes care of jobs operation mode.
 *  \param[in]     objectId                Holds the identifier of the Crypto Driver Object.
 *  \param[in,out] job                     Pointer to the configuration of the job. Contains structures with job and
 *                                         primitive relevant information but also pointer to result buffers.
 *  \return        E_OK                       Request successful.
 *                 E_NOT_OK                   Request failed.
 *                 CRYPTO_E_BUSY              Request failed, Crypto Driver Object is busy.
 *                 CRYPTO_E_KEY_NOT_VALID     Request failed, the key is not valid.
 *                 CRYPTO_E_QUEUE_FULL        Request failed, the queue is full.
 *                 CRYPTO_E_SMALL_BUFFER      Request failed, the provided buffer is too small to store the result.
 *                 CRYPTO_E_KEY_NOT_AVAILABLE Request failed, the key is not available.
 *  \pre           Lock has to be reserved for the job object.
 *  \context       TASK
 *  \reentrant     TRUE
 *  \synchronous   TRUE
 *********************************************************************************************************************/
CRYPTO_30_CRYWRAPPER_LOCAL FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_Process(uint32 objectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) job);

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Crypto_30_CryWrapper_DispatchService()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
CRYPTO_30_CRYWRAPPER_LOCAL FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_DispatchService(uint32 objectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) job, /* PRQA S 3673 */ /* MD_CRYPTO_30_CRYWRAPPER_3673_1 */
  Crypto_OperationModeType mode)
{
  /* ----- Local Variables ---------------------------------------------- */
  Std_ReturnType retVal = E_NOT_OK;

  /* ----- Implementation ----------------------------------------------- */
  /* #05 Dispatch Service according to job. */
  switch (job->jobPrimitiveInfo->primitiveInfo->service)
  {
#if (CRYPTO_30_CRYWRAPPER_SERVICE_HASH == STD_ON) /* COV_CRYPTO_30_CRYWRAPPER_NOT_SUPPORTED_SERVICE */
  case CRYPTO_HASH:
  {
      retVal = Crypto_30_CryWrapper_DispatchHash(objectId, job, mode); /* SBSW_CRYPTO_30_CRYWRAPPER_FORWARDING_OF_JOB_PTR */
      break;
    }
#endif
#if (CRYPTO_30_CRYWRAPPER_SERVICE_MAC_GENERATE == STD_ON)
    case CRYPTO_MACGENERATE:
    {
      retVal = Crypto_30_CryWrapper_DispatchMacGenerate(objectId, job, mode); /* SBSW_CRYPTO_30_CRYWRAPPER_FORWARDING_OF_JOB_PTR */
      break;
    }
#endif
#if (CRYPTO_30_CRYWRAPPER_SERVICE_MAC_VERIFY == STD_ON)
    case CRYPTO_MACVERIFY:
    {
      retVal = Crypto_30_CryWrapper_DispatchMacVerify(objectId, job, mode); /* SBSW_CRYPTO_30_CRYWRAPPER_FORWARDING_OF_JOB_PTR */
      break;
    }
#endif
#if (CRYPTO_30_CRYWRAPPER_SERVICE_ENCRYPT == STD_ON)
    case CRYPTO_ENCRYPT:
    {
      retVal = Crypto_30_CryWrapper_DispatchCipherEncrypt(objectId, job, mode); /* SBSW_CRYPTO_30_CRYWRAPPER_FORWARDING_OF_JOB_PTR */
      break;
    }
#endif
#if (CRYPTO_30_CRYWRAPPER_SERVICE_DECRYPT == STD_ON)
    case CRYPTO_DECRYPT:
    {
      retVal = Crypto_30_CryWrapper_DispatchCipherDecrypt(objectId, job, mode); /* SBSW_CRYPTO_30_CRYWRAPPER_FORWARDING_OF_JOB_PTR */
      break;
    }
#endif
#if (CRYPTO_30_CRYWRAPPER_SERVICE_AEADENCRYPT == STD_ON) /* COV_CRYPTO_30_CRYWRAPPER_NOT_SUPPORTED_SERVICE */
    case CRYPTO_AEADENCRYPT:
    {
      retVal = Crypto_30_CryWrapper_DispatchAeadEncrypt(objectId, job, mode); /* SBSW_CRYPTO_30_CRYWRAPPER_FORWARDING_OF_JOB_PTR */
      break;
    }
#endif
#if (CRYPTO_30_CRYWRAPPER_SERVICE_AEADDECRYPT == STD_ON) /* COV_CRYPTO_30_CRYWRAPPER_NOT_SUPPORTED_SERVICE */
    case CRYPTO_AEADDECRYPT:
    {
      retVal = Crypto_30_CryWrapper_DispatchAeadDecrypt(objectId, job, mode); /* SBSW_CRYPTO_30_CRYWRAPPER_FORWARDING_OF_JOB_PTR */
      break;
    }
#endif
#if (CRYPTO_30_CRYWRAPPER_SERVICE_SIGNATURE_GENERATE == STD_ON) /* COV_CRYPTO_30_CRYWRAPPER_NOT_SUPPORTED_SERVICE */
    case CRYPTO_SIGNATUREGENERATE:
    {
      retVal = Crypto_30_CryWrapper_DispatchSignatureGenerate(objectId, job, mode); /* SBSW_CRYPTO_30_CRYWRAPPER_FORWARDING_OF_JOB_PTR */
      break;
    }
#endif
#if (CRYPTO_30_CRYWRAPPER_SERVICE_SIGNATURE_VERIFY == STD_ON) /* COV_CRYPTO_30_CRYWRAPPER_NOT_SUPPORTED_SERVICE */
    case CRYPTO_SIGNATUREVERIFY:
    {
      retVal = Crypto_30_CryWrapper_DispatchSignatureVerify(objectId, job, mode); /* SBSW_CRYPTO_30_CRYWRAPPER_FORWARDING_OF_JOB_PTR */
      break;
    }
#endif
#if (CRYPTO_30_CRYWRAPPER_SERVICE_RANDOM == STD_ON)
    case CRYPTO_RANDOM:
    {
      retVal = Crypto_30_CryWrapper_DispatchRandom(objectId, job, mode); /* SBSW_CRYPTO_30_CRYWRAPPER_FORWARDING_OF_JOB_PTR */
      break;
    }
#endif
    default: /* COV_CRYPTO_30_CRYWRAPPER_MISRA_ADDITIONAL_STATEMENT */
    {
      break;
    }
  }

  return retVal;
}/* PRQA S 6030, 6050 */ /* MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  Crypto_30_CryWrapper_UpdateJobState()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 */
CRYPTO_30_CRYWRAPPER_LOCAL_INLINE FUNC(void, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_UpdateJobState(Std_ReturnType retVal,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) job)
{
  /* ----- Local Variables ---------------------------------------------- */
  /* ----- Implementation ------------------------------------------------- */
  if (retVal == E_OK)
  {
    /* #05 Set job state to active if input value is OK. */
    job->state = CRYPTO_JOBSTATE_ACTIVE; /* SBSW_CRYPTO_30_CRYWRAPPER_UPDATE_OF_JOB_STATE */
  }
  else
  {
    /* #10 Set job state to IDLE if input value contains an error. */
    /* [SWS_Crypto_00025] [SWS_Crypto_00119] Set job to IDLE if error occured */
    job->state = CRYPTO_JOBSTATE_IDLE; /* SBSW_CRYPTO_30_CRYWRAPPER_UPDATE_OF_JOB_STATE */
  }
}

#if (CRYPTO_30_CRYWRAPPER_DEV_ERROR_DETECT == STD_ON)
/**********************************************************************************************************************
*  Crypto_30_CryWrapper_Local_DetChecksServiceValues()
*********************************************************************************************************************/
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
CRYPTO_30_CRYWRAPPER_LOCAL_INLINE FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_Local_DetChecksServiceValues(
  P2CONST(Crypto_JobType, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) job,
  P2VAR(uint8, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) errorId)
{
  /* ----- Local Variables ------------------------------------------------ */
  Std_ReturnType retVal = E_OK;

  /* ----- Development Error Checks --------------------------------------- */
  /* #0 Check plausibility of parameters. */
  switch (job->jobPrimitiveInfo->primitiveInfo->service)
  {
# if (CRYPTO_30_CRYWRAPPER_SERVICE_HASH == STD_ON) /* COV_CRYPTO_30_CRYWRAPPER_NOT_SUPPORTED_SERVICE */
  case CRYPTO_HASH:
    /* #1 Check Hash Pointers and Length Parameter. */
    /* [SWS_Crypto_00071] [SWS_Crypto_00070] Check Pointer */
    /* Optional check of inputPtr and inputLength for finish mode is not required. */
    if (((job->jobPrimitiveInputOutput.inputPtr == NULL_PTR) && ((job->jobPrimitiveInputOutput.mode & CRYPTO_OPERATIONMODE_UPDATE) == CRYPTO_OPERATIONMODE_UPDATE)) ||
      (((job->jobPrimitiveInputOutput.outputPtr == NULL_PTR) || (job->jobPrimitiveInputOutput.outputLengthPtr == NULL_PTR)) && ((job->jobPrimitiveInputOutput.mode & CRYPTO_OPERATIONMODE_FINISH) == CRYPTO_OPERATIONMODE_FINISH)))
    {
      *errorId = CRYPTO_E_PARAM_POINTER; /* SBSW_CRYPTO_30_CRYWRAPPER_ACCESS_TO_ERRORID_PTR */
    }
    /* [SWS_Crypto_00071] [SWS_Crypto_00142] Check Length */
    else if ((((job->jobPrimitiveInputOutput.mode & CRYPTO_OPERATIONMODE_UPDATE) == CRYPTO_OPERATIONMODE_UPDATE) && (job->jobPrimitiveInputOutput.inputLength == 0u)) ||
      (((job->jobPrimitiveInputOutput.mode & CRYPTO_OPERATIONMODE_FINISH) == CRYPTO_OPERATIONMODE_FINISH) && (*(job->jobPrimitiveInputOutput.outputLengthPtr) == 0u)))
    {
      *errorId = CRYPTO_E_PARAM_VALUE; /* SBSW_CRYPTO_30_CRYWRAPPER_ACCESS_TO_ERRORID_PTR */
    }
    else
    {
      /* Det Checks passed. Nothing has to be done. */
    }
    break;

# endif
# if (CRYPTO_30_CRYWRAPPER_SERVICE_MAC_GENERATE == STD_ON)
  case CRYPTO_MACGENERATE:
    /* #2 Check MAC Generate Pointers and Length Parameter. */
    /* [SWS_Crypto_00071] [SWS_Crypto_00070] Check Pointer */
    /* Optional check of inputPtr and inputLength for finish mode is not required. */
    if (((job->jobPrimitiveInputOutput.inputPtr == NULL_PTR) && ((job->jobPrimitiveInputOutput.mode & CRYPTO_OPERATIONMODE_UPDATE) == CRYPTO_OPERATIONMODE_UPDATE)) ||
      (((job->jobPrimitiveInputOutput.outputPtr == NULL_PTR) || (job->jobPrimitiveInputOutput.outputLengthPtr == NULL_PTR)) && ((job->jobPrimitiveInputOutput.mode & CRYPTO_OPERATIONMODE_FINISH) == CRYPTO_OPERATIONMODE_FINISH)))
    {
      *errorId = CRYPTO_E_PARAM_POINTER; /* SBSW_CRYPTO_30_CRYWRAPPER_ACCESS_TO_ERRORID_PTR */
    }
    /* [SWS_Crypto_00071] [SWS_Crypto_00142] Check Length */
    else if ((((job->jobPrimitiveInputOutput.mode & CRYPTO_OPERATIONMODE_UPDATE) == CRYPTO_OPERATIONMODE_UPDATE) && (job->jobPrimitiveInputOutput.inputLength == 0u)) ||
      (((job->jobPrimitiveInputOutput.mode & CRYPTO_OPERATIONMODE_FINISH) == CRYPTO_OPERATIONMODE_FINISH) && (*(job->jobPrimitiveInputOutput.outputLengthPtr) == 0u)))
    {
      *errorId = CRYPTO_E_PARAM_VALUE; /* SBSW_CRYPTO_30_CRYWRAPPER_ACCESS_TO_ERRORID_PTR */
    }
    else
    {
      /* Det Checks passed. Nothing has to be done. */
    }
    break;

# endif
# if (CRYPTO_30_CRYWRAPPER_SERVICE_MAC_VERIFY == STD_ON)
  case CRYPTO_MACVERIFY:
    /* #3 Check MAC Verify Pointers and Length Parameter. */
    /* [SWS_Crypto_00071] [SWS_Crypto_00070] Check Pointer */
    /* Optional check of inputPtr and inputLength for finish mode is not required. */
    if (((job->jobPrimitiveInputOutput.inputPtr == NULL_PTR) && ((job->jobPrimitiveInputOutput.mode & CRYPTO_OPERATIONMODE_UPDATE) == CRYPTO_OPERATIONMODE_UPDATE)) ||
      (((job->jobPrimitiveInputOutput.secondaryInputPtr == NULL_PTR) || (job->jobPrimitiveInputOutput.verifyPtr == NULL_PTR)) && ((job->jobPrimitiveInputOutput.mode & CRYPTO_OPERATIONMODE_FINISH) == CRYPTO_OPERATIONMODE_FINISH)))
    {
      *errorId = CRYPTO_E_PARAM_POINTER; /* SBSW_CRYPTO_30_CRYWRAPPER_ACCESS_TO_ERRORID_PTR */
    }
    /* [SWS_Crypto_00071] [SWS_Crypto_00142] Check Length */
    else if ((((job->jobPrimitiveInputOutput.mode & CRYPTO_OPERATIONMODE_UPDATE) == CRYPTO_OPERATIONMODE_UPDATE) && (job->jobPrimitiveInputOutput.inputLength == 0u)) ||
      (((job->jobPrimitiveInputOutput.mode & CRYPTO_OPERATIONMODE_FINISH) == CRYPTO_OPERATIONMODE_FINISH) && (job->jobPrimitiveInputOutput.secondaryInputLength == 0u)))
    {
      *errorId = CRYPTO_E_PARAM_VALUE; /* SBSW_CRYPTO_30_CRYWRAPPER_ACCESS_TO_ERRORID_PTR */
    }
    else
    {
      /* Det Checks passed. Nothing has to be done. */
    }
    break;

# endif
# if (CRYPTO_30_CRYWRAPPER_SERVICE_ENCRYPT == STD_ON)
  case CRYPTO_ENCRYPT:
    /* #4 Check Encrypt Pointers and Length Parameter. */
    /* [SWS_Crypto_00071] [SWS_Crypto_00070] Check Pointer */
    /* Optional check of inputPtr and inputLength for finish mode is not required. */
    if (((job->jobPrimitiveInputOutput.inputPtr == NULL_PTR) && ((job->jobPrimitiveInputOutput.mode & CRYPTO_OPERATIONMODE_UPDATE) == CRYPTO_OPERATIONMODE_UPDATE)) ||
      (((job->jobPrimitiveInputOutput.outputPtr == NULL_PTR) || (job->jobPrimitiveInputOutput.outputLengthPtr == NULL_PTR)) && (((job->jobPrimitiveInputOutput.mode & CRYPTO_OPERATIONMODE_UPDATE) == CRYPTO_OPERATIONMODE_UPDATE) || ((job->jobPrimitiveInputOutput.mode & CRYPTO_OPERATIONMODE_FINISH) == CRYPTO_OPERATIONMODE_FINISH))))
    {
      *errorId = CRYPTO_E_PARAM_POINTER; /* SBSW_CRYPTO_30_CRYWRAPPER_ACCESS_TO_ERRORID_PTR */
    }
    /* [SWS_Crypto_00071] [SWS_Crypto_00142] Check Length */
    else if ((((job->jobPrimitiveInputOutput.mode & CRYPTO_OPERATIONMODE_UPDATE) == CRYPTO_OPERATIONMODE_UPDATE) && (job->jobPrimitiveInputOutput.inputLength == 0u)) ||
      ((((job->jobPrimitiveInputOutput.mode & CRYPTO_OPERATIONMODE_UPDATE) == CRYPTO_OPERATIONMODE_UPDATE) || ((job->jobPrimitiveInputOutput.mode & CRYPTO_OPERATIONMODE_FINISH) == CRYPTO_OPERATIONMODE_FINISH)) && (*(job->jobPrimitiveInputOutput.outputLengthPtr) == 0u)))
    {
      *errorId = CRYPTO_E_PARAM_VALUE; /* SBSW_CRYPTO_30_CRYWRAPPER_ACCESS_TO_ERRORID_PTR */
    }
    else
    {
      /* Det Checks passed. Nothing has to be done. */
    }
    break;

# endif
# if (CRYPTO_30_CRYWRAPPER_SERVICE_DECRYPT == STD_ON)
  case CRYPTO_DECRYPT:
    /* #5 Check Decrypt Pointers and Length Parameter. */
    /* [SWS_Crypto_00071] [SWS_Crypto_00070] Check Pointer */
    /* Optional check of inputPtr and inputLength for finish mode is not required. */
    if (((job->jobPrimitiveInputOutput.inputPtr == NULL_PTR) && ((job->jobPrimitiveInputOutput.mode & CRYPTO_OPERATIONMODE_UPDATE) == CRYPTO_OPERATIONMODE_UPDATE)) ||
      (((job->jobPrimitiveInputOutput.outputPtr == NULL_PTR) || (job->jobPrimitiveInputOutput.outputLengthPtr == NULL_PTR)) && (((job->jobPrimitiveInputOutput.mode & CRYPTO_OPERATIONMODE_UPDATE) == CRYPTO_OPERATIONMODE_UPDATE) || ((job->jobPrimitiveInputOutput.mode & CRYPTO_OPERATIONMODE_FINISH) == CRYPTO_OPERATIONMODE_FINISH))))
    {
      *errorId = CRYPTO_E_PARAM_POINTER; /* SBSW_CRYPTO_30_CRYWRAPPER_ACCESS_TO_ERRORID_PTR */
    }
    /* [SWS_Crypto_00071] [SWS_Crypto_00142] Check Length */
    else if ((((job->jobPrimitiveInputOutput.mode & CRYPTO_OPERATIONMODE_UPDATE) == CRYPTO_OPERATIONMODE_UPDATE) && (job->jobPrimitiveInputOutput.inputLength == 0u)) ||
      ((((job->jobPrimitiveInputOutput.mode & CRYPTO_OPERATIONMODE_UPDATE) == CRYPTO_OPERATIONMODE_UPDATE) || ((job->jobPrimitiveInputOutput.mode & CRYPTO_OPERATIONMODE_FINISH) == CRYPTO_OPERATIONMODE_FINISH)) && (*(job->jobPrimitiveInputOutput.outputLengthPtr) == 0u)))
    {
      *errorId = CRYPTO_E_PARAM_VALUE; /* SBSW_CRYPTO_30_CRYWRAPPER_ACCESS_TO_ERRORID_PTR */
    }
    else
    {
      /* Det Checks passed. Nothing has to be done. */
    }
    break;

# endif
# if (CRYPTO_30_CRYWRAPPER_SERVICE_AEADENCRYPT == STD_ON) /* COV_CRYPTO_30_CRYWRAPPER_NOT_SUPPORTED_SERVICE */
  case CRYPTO_AEADENCRYPT:
    /* #6 Check AEAD Encrypt Pointers and Length Parameter. */
    /* [SWS_Crypto_00071] [SWS_Crypto_00070] Check Pointer */
    /* Optional check of inputPtr and inputLength for finish mode is not required. */
    if ((((job->jobPrimitiveInputOutput.inputPtr == NULL_PTR) || ((job->jobPrimitiveInputOutput.secondaryInputPtr == NULL_PTR) && (job->jobPrimitiveInputOutput.secondaryInputLength != 0u))) && ((job->jobPrimitiveInputOutput.mode & CRYPTO_OPERATIONMODE_UPDATE) == CRYPTO_OPERATIONMODE_UPDATE)) ||
      (((job->jobPrimitiveInputOutput.outputPtr == NULL_PTR) || (job->jobPrimitiveInputOutput.outputLengthPtr == NULL_PTR)) && (((job->jobPrimitiveInputOutput.mode & CRYPTO_OPERATIONMODE_UPDATE) == CRYPTO_OPERATIONMODE_UPDATE) || ((job->jobPrimitiveInputOutput.mode & CRYPTO_OPERATIONMODE_FINISH) == CRYPTO_OPERATIONMODE_FINISH))) ||
      (((job->jobPrimitiveInputOutput.secondaryOutputPtr == NULL_PTR) || (job->jobPrimitiveInputOutput.secondaryOutputLengthPtr == NULL_PTR)) && ((job->jobPrimitiveInputOutput.mode & CRYPTO_OPERATIONMODE_FINISH) == CRYPTO_OPERATIONMODE_FINISH)))
    {
      *errorId = CRYPTO_E_PARAM_POINTER; /* SBSW_CRYPTO_30_CRYWRAPPER_ACCESS_TO_ERRORID_PTR */
    }
    /* [SWS_Crypto_00071] [SWS_Crypto_00142] Check Length */
    else if (((((job->jobPrimitiveInputOutput.mode & CRYPTO_OPERATIONMODE_UPDATE) == CRYPTO_OPERATIONMODE_UPDATE) || ((job->jobPrimitiveInputOutput.mode & CRYPTO_OPERATIONMODE_FINISH) == CRYPTO_OPERATIONMODE_FINISH)) && (*(job->jobPrimitiveInputOutput.outputLengthPtr) == 0u)) ||
      (((job->jobPrimitiveInputOutput.mode & CRYPTO_OPERATIONMODE_FINISH) == CRYPTO_OPERATIONMODE_FINISH) && ((*(job->jobPrimitiveInputOutput.secondaryOutputLengthPtr) == 0u))))
    {
      *errorId = CRYPTO_E_PARAM_VALUE; /* SBSW_CRYPTO_30_CRYWRAPPER_ACCESS_TO_ERRORID_PTR */
    }
    else
    {
      /* Det Checks passed. Nothing has to be done. */
    }
    break;

# endif
# if (CRYPTO_30_CRYWRAPPER_SERVICE_AEADDECRYPT == STD_ON) /* COV_CRYPTO_30_CRYWRAPPER_NOT_SUPPORTED_SERVICE */
  case CRYPTO_AEADDECRYPT:
    /* #7 Check AEAD Decrypt Pointers and Length Parameter. */
    /* [SWS_Crypto_00071] [SWS_Crypto_00070] Check Pointer */
    /* Optional check of inputPtr and inputLength for finish mode is not required. */
    if ((((job->jobPrimitiveInputOutput.inputPtr == NULL_PTR) || ((job->jobPrimitiveInputOutput.secondaryInputLength != 0u) && (job->jobPrimitiveInputOutput.secondaryInputPtr == NULL_PTR))) && ((job->jobPrimitiveInputOutput.mode & CRYPTO_OPERATIONMODE_UPDATE) == CRYPTO_OPERATIONMODE_UPDATE)) ||
      (((job->jobPrimitiveInputOutput.outputPtr == NULL_PTR) || (job->jobPrimitiveInputOutput.outputLengthPtr == NULL_PTR)) && (((job->jobPrimitiveInputOutput.mode & CRYPTO_OPERATIONMODE_UPDATE) == CRYPTO_OPERATIONMODE_UPDATE) || ((job->jobPrimitiveInputOutput.mode & CRYPTO_OPERATIONMODE_FINISH) == CRYPTO_OPERATIONMODE_FINISH))) ||
      (((job->jobPrimitiveInputOutput.tertiaryInputPtr == NULL_PTR) || (job->jobPrimitiveInputOutput.verifyPtr == NULL_PTR)) && ((job->jobPrimitiveInputOutput.mode & CRYPTO_OPERATIONMODE_FINISH) == CRYPTO_OPERATIONMODE_FINISH)))
    {
      *errorId = CRYPTO_E_PARAM_POINTER; /* SBSW_CRYPTO_30_CRYWRAPPER_ACCESS_TO_ERRORID_PTR */
    }
    /* [SWS_Crypto_00071] [SWS_Crypto_00142] Check Length */
    else if ((((job->jobPrimitiveInputOutput.mode & CRYPTO_OPERATIONMODE_UPDATE) == CRYPTO_OPERATIONMODE_UPDATE) && (job->jobPrimitiveInputOutput.inputLength == 0u)) ||
      ((((job->jobPrimitiveInputOutput.mode & CRYPTO_OPERATIONMODE_UPDATE) == CRYPTO_OPERATIONMODE_UPDATE) || ((job->jobPrimitiveInputOutput.mode & CRYPTO_OPERATIONMODE_FINISH) == CRYPTO_OPERATIONMODE_FINISH)) && (*(job->jobPrimitiveInputOutput.outputLengthPtr) == 0u)) ||
      (((job->jobPrimitiveInputOutput.mode & CRYPTO_OPERATIONMODE_FINISH) == CRYPTO_OPERATIONMODE_FINISH) && ((job->jobPrimitiveInputOutput.tertiaryInputLength == 0u))))
    {
      *errorId = CRYPTO_E_PARAM_VALUE; /* SBSW_CRYPTO_30_CRYWRAPPER_ACCESS_TO_ERRORID_PTR */
    }
    else
    {
      /* Det Checks passed. Nothing has to be done. */
    }
    break;

# endif
# if (CRYPTO_30_CRYWRAPPER_SERVICE_SIGNATURE_GENERATE == STD_ON) /* COV_CRYPTO_30_CRYWRAPPER_NOT_SUPPORTED_SERVICE */
  case CRYPTO_SIGNATUREGENERATE:
    /* #8 Check Signature Generate Pointers and Length Parameter. */
    /* [SWS_Crypto_00071] [SWS_Crypto_00070] Check Pointer */
    /* Optional check of inputPtr and inputLength for finish mode is required. */
    if (((job->jobPrimitiveInputOutput.inputPtr == NULL_PTR) && (((job->jobPrimitiveInputOutput.mode & CRYPTO_OPERATIONMODE_UPDATE) == CRYPTO_OPERATIONMODE_UPDATE) || ((job->jobPrimitiveInputOutput.mode & CRYPTO_OPERATIONMODE_FINISH) == CRYPTO_OPERATIONMODE_FINISH))) ||
      (((job->jobPrimitiveInputOutput.outputPtr == NULL_PTR) || (job->jobPrimitiveInputOutput.outputLengthPtr == NULL_PTR)) && ((job->jobPrimitiveInputOutput.mode & CRYPTO_OPERATIONMODE_FINISH) == CRYPTO_OPERATIONMODE_FINISH)))
    {
      *errorId = CRYPTO_E_PARAM_POINTER; /* SBSW_CRYPTO_30_CRYWRAPPER_ACCESS_TO_ERRORID_PTR */
    }
    /* [SWS_Crypto_00071] [SWS_Crypto_00142] Check Length */
    else if (((((job->jobPrimitiveInputOutput.mode & CRYPTO_OPERATIONMODE_UPDATE) == CRYPTO_OPERATIONMODE_UPDATE)) && (job->jobPrimitiveInputOutput.inputLength == 0u)) ||
      (((job->jobPrimitiveInputOutput.mode & CRYPTO_OPERATIONMODE_FINISH) == CRYPTO_OPERATIONMODE_FINISH) && (*(job->jobPrimitiveInputOutput.outputLengthPtr) == 0u)))
    {
      *errorId = CRYPTO_E_PARAM_VALUE; /* SBSW_CRYPTO_30_CRYWRAPPER_ACCESS_TO_ERRORID_PTR */
    }
    else
    {
      /* Det Checks passed. Nothing has to be done. */
    }
    break;

# endif
# if (CRYPTO_30_CRYWRAPPER_SERVICE_SIGNATURE_VERIFY == STD_ON) /* COV_CRYPTO_30_CRYWRAPPER_NOT_SUPPORTED_SERVICE */
  case CRYPTO_SIGNATUREVERIFY:
    /* #9 Check Signature Verify Pointers and Length Parameter. */
    /* [SWS_Crypto_00071] [SWS_Crypto_00070] Check Pointer */
    /* Optional check of inputPtr and inputLength for finish mode is required. */
    if (((job->jobPrimitiveInputOutput.inputPtr == NULL_PTR) && (((job->jobPrimitiveInputOutput.mode & CRYPTO_OPERATIONMODE_UPDATE) == CRYPTO_OPERATIONMODE_UPDATE) || ((job->jobPrimitiveInputOutput.mode & CRYPTO_OPERATIONMODE_FINISH) == CRYPTO_OPERATIONMODE_FINISH))) ||
      (((job->jobPrimitiveInputOutput.secondaryInputPtr == NULL_PTR) || (job->jobPrimitiveInputOutput.verifyPtr == NULL_PTR)) && ((job->jobPrimitiveInputOutput.mode & CRYPTO_OPERATIONMODE_FINISH) == CRYPTO_OPERATIONMODE_FINISH)))
    {
      *errorId = CRYPTO_E_PARAM_POINTER; /* SBSW_CRYPTO_30_CRYWRAPPER_ACCESS_TO_ERRORID_PTR */
    }
    /* [SWS_Crypto_00071] [SWS_Crypto_00142] Check Length */
    else if (((((job->jobPrimitiveInputOutput.mode & CRYPTO_OPERATIONMODE_UPDATE) == CRYPTO_OPERATIONMODE_UPDATE)) && (job->jobPrimitiveInputOutput.inputLength == 0u)) ||
      (((job->jobPrimitiveInputOutput.mode & CRYPTO_OPERATIONMODE_FINISH) == CRYPTO_OPERATIONMODE_FINISH) && (job->jobPrimitiveInputOutput.secondaryInputLength == 0u)))
    {
      *errorId = CRYPTO_E_PARAM_VALUE; /* SBSW_CRYPTO_30_CRYWRAPPER_ACCESS_TO_ERRORID_PTR */
    }
    else
    {
      /* Det Checks passed. Nothing has to be done. */
    }
    break;

# endif
# if (CRYPTO_30_CRYWRAPPER_SERVICE_RANDOM == STD_ON)
  case CRYPTO_RANDOM:
    /* #10 Check Random Generate Pointers and Length Parameter. */
    /* [SWS_Crypto_00071] [SWS_Crypto_00070] Check Pointer */
    if (((job->jobPrimitiveInputOutput.outputPtr == NULL_PTR) || (job->jobPrimitiveInputOutput.outputLengthPtr == NULL_PTR)) && ((job->jobPrimitiveInputOutput.mode & CRYPTO_OPERATIONMODE_FINISH) == CRYPTO_OPERATIONMODE_FINISH))
    {
      *errorId = CRYPTO_E_PARAM_POINTER; /* SBSW_CRYPTO_30_CRYWRAPPER_ACCESS_TO_ERRORID_PTR */
    }
    else if (((job->jobPrimitiveInputOutput.mode & CRYPTO_OPERATIONMODE_FINISH) == CRYPTO_OPERATIONMODE_FINISH) && (*(job->jobPrimitiveInputOutput.outputLengthPtr) == 0u))
    {
      *errorId = CRYPTO_E_PARAM_VALUE; /* SBSW_CRYPTO_30_CRYWRAPPER_ACCESS_TO_ERRORID_PTR */
    }
    else
    {
      /* Det Checks passed. Nothing has to be done. */
    }
    break;

# endif
  default:
    /* #11 Service is not supported by Crypto Driver Object. */
    /* [SWS_Crypto_00064] check if job->jobPrimitiveInfo->primitiveInfo->service is supported by Crypto Driver Object */
    *errorId = CRYPTO_E_PARAM_HANDLE; /* SBSW_CRYPTO_30_CRYWRAPPER_ACCESS_TO_ERRORID_PTR */
    break;

  }

  /* #12 Set return Value to E_NOT_OK if a failure was detected. */
  if ((*errorId == CRYPTO_E_PARAM_POINTER) || (*errorId == CRYPTO_E_PARAM_VALUE) || (*errorId == CRYPTO_E_PARAM_HANDLE))
  {
    retVal = E_NOT_OK;
  }

  return retVal;
} /* PRQA S 6030 */ /* MD_MSR_STCYC */
#endif /* (CRYPTO_30_CRYWRAPPER_DEV_ERROR_DETECT == STD_ON) */

/**********************************************************************************************************************
 * Crypto_30_CryWrapper_Process()
 **********************************************************************************************************************/
/*!
 *
 * Internal comment removed.
 *
 *
 *
 *
 */
CRYPTO_30_CRYWRAPPER_LOCAL FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_Process(uint32 objectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) job)
{
  /* ----- Local Variables ---------------------------------------------- */
  Std_ReturnType retVal = E_NOT_OK;
  uint8 unlockingNecessary = FALSE;

  /* ----- Implementation ------------------------------------------------- */
  /* #10 Dispatch job according to job mode in order START, UPDATE and FINISH. */
  /* [SWS_Crypto_00017] [SWS_Crypto_00020] START while IDLE or ACTIVE */
  if (((job->state == CRYPTO_JOBSTATE_IDLE) || (job->state == CRYPTO_JOBSTATE_ACTIVE))
    && ((job->jobPrimitiveInputOutput.mode & CRYPTO_OPERATIONMODE_START) == CRYPTO_OPERATIONMODE_START))
  {
    retVal = Crypto_30_CryWrapper_DispatchService(objectId, job, CRYPTO_OPERATIONMODE_START); /* SBSW_CRYPTO_30_CRYWRAPPER_FORWARDING_OF_JOB_PTR */
    Crypto_30_CryWrapper_UpdateJobState(retVal, job); /* SBSW_CRYPTO_30_CRYWRAPPER_FORWARDING_OF_JOB_PTR */
  }

  if ((job->state == CRYPTO_JOBSTATE_IDLE)
    && ((job->jobPrimitiveInputOutput.mode & CRYPTO_OPERATIONMODE_START) != CRYPTO_OPERATIONMODE_START))
  {
    /* [SWS_Crypto_00118] No Start flag while in idle mode */
    retVal = E_NOT_OK;
  }

  /* UPDATE while ACTIVE */
  if ((job->state == CRYPTO_JOBSTATE_ACTIVE)
    && ((job->jobPrimitiveInputOutput.mode & CRYPTO_OPERATIONMODE_UPDATE) == CRYPTO_OPERATIONMODE_UPDATE)) /* [SWS_Crypto_00024] */
  {
    retVal = Crypto_30_CryWrapper_DispatchService(objectId, job, CRYPTO_OPERATIONMODE_UPDATE); /* SBSW_CRYPTO_30_CRYWRAPPER_FORWARDING_OF_JOB_PTR */
    Crypto_30_CryWrapper_UpdateJobState(retVal, job); /* SBSW_CRYPTO_30_CRYWRAPPER_FORWARDING_OF_JOB_PTR */
  }

  /* [SWS_Crypto_00023] FINISH while ACTIVE */
  if ((job->state == CRYPTO_JOBSTATE_ACTIVE)
    && ((job->jobPrimitiveInputOutput.mode & CRYPTO_OPERATIONMODE_FINISH) == CRYPTO_OPERATIONMODE_FINISH)) /* [SWS_Crypto_00024] */
  {
    retVal = Crypto_30_CryWrapper_DispatchService(objectId, job, CRYPTO_OPERATIONMODE_FINISH); /* SBSW_CRYPTO_30_CRYWRAPPER_FORWARDING_OF_JOB_PTR */
    job->state = CRYPTO_JOBSTATE_IDLE; /* SBSW_CRYPTO_30_CRYWRAPPER_DIRECT_ACCESS_TO_JOB_STATE */
    unlockingNecessary = TRUE;
  }

  /* #15 Free workspace in case of an error or if FINISH mode completed. */
  if ((retVal != E_OK) || (unlockingNecessary == TRUE))
  {
    SchM_Enter_Crypto_30_CryWrapper_CRYPTO_30_CRYWRAPPER_EXCLUSIVE_AREA_1();
    Crypto_30_CryWrapper_FreeLock(objectId); /* SBSW_CRYPTO_30_CRYWRAPPER_CSL01_OBJECTID */
    SchM_Exit_Crypto_30_CryWrapper_CRYPTO_30_CRYWRAPPER_EXCLUSIVE_AREA_1();
  }

  /* #20 Notify CryIf about the result of the job if it was processed asynchronous. */
  if (job->jobPrimitiveInfo->processingType == CRYPTO_PROCESSING_ASYNC)
  {
    /* Call Callback */
    CryIf_CallbackNotification(job, retVal); /* SBSW_CRYPTO_30_CRYWRAPPER_FORWARDING_OF_JOB_PTR */
  }

  return retVal;
} /* PRQA S 6010 */ /* MD_MSR_STPTH */

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  Crypto_30_CryWrapper_InitMemory()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
FUNC(void, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_InitMemory( void )
{
  /* ----- Implementation ----------------------------------------------- */
#if (CRYPTO_30_CRYWRAPPER_DEV_ERROR_DETECT == STD_ON)
  /* #05 Uninitialize module. */
  Crypto_30_CryWrapper_ModuleInitialized = (uint8)CRYPTO_30_CRYWRAPPER_UNINIT;
#endif
} /* Crypto_30_CryWrapper_InitMemory() */

/**********************************************************************************************************************
 *  Crypto_30_CryWrapper_Init()
 *********************************************************************************************************************/
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
FUNC(void, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_Init(void)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = CRYPTO_E_NO_ERROR;

  /* ----- Development Error Checks ------------------------------------- */
#if (CRYPTO_30_CRYWRAPPER_DEV_ERROR_DETECT == STD_ON)
  /* #05 Check initialization state of the component. */
  if (Crypto_30_CryWrapper_ModuleInitialized == (uint8)CRYPTO_30_CRYWRAPPER_INITIALIZED)
  {
    errorId = CRYPTO_E_INIT_FAILED;
  }
  else
#endif
  {
    Crypto_30_CryWrapper_KeyElementsIterType elementIndex;
#if (CRYPTO_30_CRYWRAPPER_INITVALUE == STD_ON)
    uint32 initValueIdx;
#endif
    uint32 keyStorageIdx;
    Crypto_30_CryWrapper_QueueIterType queueIdx;
    Crypto_30_CryWrapper_LockIterType lockIdx;
    Crypto_30_CryWrapper_DriverObjectIterType objectId;

    /* #10 Initialize key elements which have a configured initial value. */
    for (elementIndex = 0u; elementIndex < Crypto_30_CryWrapper_GetSizeOfKeyElements(); elementIndex++)
    {
#if (CRYPTO_30_CRYWRAPPER_INITVALUE == STD_ON)
      /* Fill elements with init values */
      if (Crypto_30_CryWrapper_HasKeyElementInitValue(elementIndex))
      {
        keyStorageIdx = Crypto_30_CryWrapper_GetKeyStorageStartIdxOfKeyElements(elementIndex);
        initValueIdx = Crypto_30_CryWrapper_GetInitValueStartIdxOfKeyElementInfo(Crypto_30_CryWrapper_GetKeyElementInfoIdxOfKeyElements(elementIndex));

        /* Iterate through keyElements */
        while (initValueIdx < Crypto_30_CryWrapper_GetInitValueEndIdxOfKeyElementInfo(Crypto_30_CryWrapper_GetKeyElementInfoIdxOfKeyElements(elementIndex)))
        {
          /* Store the init value to the key element */
          Crypto_30_CryWrapper_SetKeyStorage(keyStorageIdx, Crypto_30_CryWrapper_GetInitValue(initValueIdx)); /* SBSW_CRYPTO_30_CRYWRAPPER_KEY_STORAGE_ACCESS_INIT */

          initValueIdx++;
          keyStorageIdx++;
        }

        /* Set the size of the init value written to the element */
        keyStorageIdx = Crypto_30_CryWrapper_GetKeyStorageWrittenLengthStartIdxOfKeyElements(elementIndex);
        Crypto_30_CryWrapper_SetKeyStorage(keyStorageIdx, (uint8)(((uint16)Crypto_30_CryWrapper_GetKeyElementInitValueLength(elementIndex)) >> 8)); /* SBSW_CRYPTO_30_CRYWRAPPER_KEY_STORAGE_ACCESS_INIT */
        Crypto_30_CryWrapper_SetKeyStorage(keyStorageIdx + 1u, (uint8)(Crypto_30_CryWrapper_GetKeyElementInitValueLength(elementIndex))); /* SBSW_CRYPTO_30_CRYWRAPPER_KEY_STORAGE_ACCESS_INIT */

# if (CRYPTO_30_CRYWRAPPER_KEYELEMENTINFOVIRTUALIDXOFKEYELEMENTINFO == STD_ON) /* COV_CRYPTO_30_CRYWRAPPER_VIRTUALKEY */
        /* Mark element as invalid if it is a virtual element (because offset has not been set yet and it is not usable until e.g. the certificate is parsed) */
        if (Crypto_30_CryWrapper_IsKeyElementVirtual(elementIndex)) /* COV_CRYPTO_30_CRYWRAPPER_VIRTUALKEY */
        {
          Crypto_30_CryWrapper_SetKeyElementState(elementIndex, FALSE); /* SBSW_CRYPTO_30_CRYWRAPPER_KEY_STORAGE_ACCESS_INIT */
        }
        else
# endif
        {
          Crypto_30_CryWrapper_SetKeyElementState(elementIndex, CRYPTO_30_CRYWRAPPER_KEYELEMENTSTATE_VALID_MASK); /* SBSW_CRYPTO_30_CRYWRAPPER_KEY_STORAGE_ACCESS_INIT */
        }
      }
      else
#endif
      {
        keyStorageIdx = Crypto_30_CryWrapper_GetKeyStorageWrittenLengthStartIdxOfKeyElements(elementIndex);
        Crypto_30_CryWrapper_SetKeyStorage(keyStorageIdx, 0u); /* SBSW_CRYPTO_30_CRYWRAPPER_KEY_STORAGE_ACCESS_INIT */
        Crypto_30_CryWrapper_SetKeyStorage(keyStorageIdx + 1u, 0u); /* SBSW_CRYPTO_30_CRYWRAPPER_KEY_STORAGE_ACCESS_INIT */
        Crypto_30_CryWrapper_SetKeyElementState(elementIndex, FALSE); /* SBSW_CRYPTO_30_CRYWRAPPER_KEY_STORAGE_ACCESS_INIT */
      }
    }

    /* #15 Free all locks of workspaces. */
    for(lockIdx = 0u; lockIdx < Crypto_30_CryWrapper_GetSizeOfLock(); lockIdx++)
    {
      Crypto_30_CryWrapper_FreeLock(lockIdx); /* SBSW_CRYPTO_30_CRYWRAPPER_CSL01 */
    }

    /* #20 Clear job queue. */
    for(queueIdx = 0u; queueIdx < Crypto_30_CryWrapper_GetSizeOfQueue(); queueIdx++)
    {
      Crypto_30_CryWrapper_SetQueue(queueIdx, NULL_PTR); /* SBSW_CRYPTO_30_CRYWRAPPER_CSL01 */
    }

    /* #25 Init Driver Object State. */
    for (objectId = 0u; objectId < Crypto_30_CryWrapper_GetSizeOfDriverObject(); objectId++)
    {
      Crypto_30_CryWrapper_SetDriverObjectState(objectId, CRYPTO_30_CRYWRAPPER_DRIVEROBJECTSTATE_IDLE); /* SBSW_CRYPTO_30_CRYWRAPPER_CSL01_OBJECTID */
    }

    /* #30 Initialize hardware specific part. */
    if (Crypto_30_CryWrapper_Hw_Init() == E_OK) /* COV_CRYPTO_30_CRYWRAPPER_HW_INIT */
    {
      /* #31 Set module state to initialized if no error occured. */
#if (CRYPTO_30_CRYWRAPPER_DEV_ERROR_DETECT == STD_ON)
      Crypto_30_CryWrapper_ModuleInitialized = CRYPTO_30_CRYWRAPPER_INITIALIZED;
#endif
    }
  }

  /* ----- Development Error Report --------------------------------------- */
#if (CRYPTO_30_CRYWRAPPER_DEV_ERROR_REPORT == STD_ON)
  if (errorId != CRYPTO_E_NO_ERROR)
  {
   (void)Det_ReportError(CRYPTO_30_CRYWRAPPER_MODULE_ID, CRYPTO_30_CRYWRAPPER_INSTANCE_ID, CRYPTO_30_CRYWRAPPER_SID_INIT, errorId);
  }
#else
  CRYPTO_30_CRYWRAPPER_DUMMY_STATEMENT(errorId); /* PRQA S 3112 */ /* MD_MSR_14.2 */
#endif
} /* PRQA S 6080,6010,6030 */ /* MD_MSR_STMIF */ /* MD_MSR_STPTH */ /* MD_MSR_STCYC */

#if ( CRYPTO_30_CRYWRAPPER_VERSION_INFO_API == STD_ON )
/**********************************************************************************************************************
 *  Crypto_30_CryWrapper_GetVersionInfo()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 */
FUNC(void, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_GetVersionInfo(P2VAR(Std_VersionInfoType, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) versioninfo)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = CRYPTO_E_NO_ERROR;

  /* ----- Development Error Checks ------------------------------------- */
# if (CRYPTO_30_CRYWRAPPER_DEV_ERROR_DETECT == STD_ON)
  /* #05 Check plausibility of parameters. */
  if (versioninfo == NULL_PTR)
  {
    /* [SWS_Crypto_00042] */
    errorId = CRYPTO_E_PARAM_POINTER;
  }
  else
# endif
  {
    /* ----- Implementation ----------------------------------------------- */
    /* #10 Write versionInfo pointer with modules versions. */
    versioninfo->vendorID = (uint16)CRYPTO_30_CRYWRAPPER_VENDOR_ID; /* SBSW_CRYPTO_30_CRYWRAPPER_GETVERSIONINFO */
    versioninfo->moduleID = (uint8)CRYPTO_30_CRYWRAPPER_MODULE_ID; /* SBSW_CRYPTO_30_CRYWRAPPER_GETVERSIONINFO */
    versioninfo->sw_major_version = (uint8)CRYPTO_30_CRYWRAPPER_MAJOR_VERSION; /* SBSW_CRYPTO_30_CRYWRAPPER_GETVERSIONINFO */
    versioninfo->sw_minor_version = (uint8)CRYPTO_30_CRYWRAPPER_MINOR_VERSION; /* SBSW_CRYPTO_30_CRYWRAPPER_GETVERSIONINFO */
    versioninfo->sw_patch_version = (uint8)CRYPTO_30_CRYWRAPPER_PATCH_VERSION; /* SBSW_CRYPTO_30_CRYWRAPPER_GETVERSIONINFO */
  }

  /* ----- Development Error Report --------------------------------------- */
# if (CRYPTO_30_CRYWRAPPER_DEV_ERROR_REPORT == STD_ON)
  if (errorId != CRYPTO_E_NO_ERROR)
  {
    (void)Det_ReportError((uint16)CRYPTO_30_CRYWRAPPER_MODULE_ID,
                          CRYPTO_30_CRYWRAPPER_INSTANCE_ID,
                          (uint8)CRYPTO_30_CRYWRAPPER_SID_GET_VERSION_INFO,
                          errorId);
  }
# else
  CRYPTO_30_CRYWRAPPER_DUMMY_STATEMENT(errorId); /* PRQA S 3112 */ /* MD_MSR_14.2 */
# endif
}
#endif /* ( CRYPTO_30_CRYWRAPPER_VERSION_INFO_API == STD_ON ) */

/**********************************************************************************************************************
 *  Crypto_30_CryWrapper_MainFunction()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 */
FUNC(void, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_MainFunction(void)
{
  /* ----- Local Variables ---------------------------------------------- */
  Crypto_30_CryWrapper_DriverObjectIterType objectId;

  /* ----- Implementation ----------------------------------------------- */
  /* #05 Process next enqueued job for all available queues. */
  for (objectId = 0u; objectId < Crypto_30_CryWrapper_GetSizeOfDriverObject(); objectId++)
  {
    uint8 processJob = FALSE;
    Crypto_30_CryWrapper_QueueIdxOfDriverObjectType queueIdx = Crypto_30_CryWrapper_GetQueueIdxOfDriverObject(objectId);
    Crypto_30_CryWrapper_QueueElementType job;

    SchM_Enter_Crypto_30_CryWrapper_CRYPTO_30_CRYWRAPPER_EXCLUSIVE_AREA_0();
    job = Crypto_30_CryWrapper_GetQueue(queueIdx);
    if (job != NULL_PTR)
    {
      if (Crypto_30_CryWrapper_TryObtainingLock(objectId, job->jobInfo->jobId) == TRUE)
      {
        Crypto_30_CryWrapper_SetDriverObjectState(objectId, CRYPTO_30_CRYWRAPPER_DRIVEROBJECTSTATE_PROCESSING); /* SBSW_CRYPTO_30_CRYWRAPPER_CSL01_OBJECTID */
        processJob = TRUE;
      }
    }
    SchM_Exit_Crypto_30_CryWrapper_CRYPTO_30_CRYWRAPPER_EXCLUSIVE_AREA_0();

    if (processJob == TRUE)
    {
      /* #10 Remove job from queue if it was processed or an error occured. */
      (void)Crypto_30_CryWrapper_Process(objectId, job); /* SBSW_CRYPTO_30_CRYWRAPPER_FORWARDING_OF_JOB_PTR */
      
      /* Remove job from queue and release processing */
      Crypto_30_CryWrapper_SetQueue(queueIdx, NULL_PTR); /* SBSW_CRYPTO_30_CRYWRAPPER_CSL02_QUEUE_VIA_DRIVEROBJECT */
      Crypto_30_CryWrapper_SetDriverObjectState(objectId, CRYPTO_30_CRYWRAPPER_DRIVEROBJECTSTATE_IDLE); /* SBSW_CRYPTO_30_CRYWRAPPER_CSL01_OBJECTID */
    }
  }
}

/**********************************************************************************************************************
 *  Crypto_30_CryWrapper_ProcessJob()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 */
FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_ProcessJob(uint32 objectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) job)
{
  /* ----- Local Variables ---------------------------------------------- */
  Std_ReturnType retVal;
  uint8 errorId = CRYPTO_E_NO_ERROR;

  /* ----- Development Error Checks ------------------------------------- */
#if (CRYPTO_30_CRYWRAPPER_DEV_ERROR_DETECT == STD_ON)
  retVal = E_NOT_OK;
  /* [SWS_Crypto_00057] */
  /* #05 Check initialization state of the component. */
  if (Crypto_30_CryWrapper_ModuleInitialized == (uint8)CRYPTO_30_CRYWRAPPER_UNINIT)
  {
    errorId = CRYPTO_E_UNINIT;
  }
  /* [SWS_Crypto_00058] */
  /* #10 Check plausibility of parameters. */
  else if ( objectId >= Crypto_30_CryWrapper_GetSizeOfDriverObject() )
  {
    errorId = CRYPTO_E_PARAM_HANDLE;
  }
  /* [SWS_Crypto_00059] Check if job is a null pointer */
  else if ( job == NULL_PTR )
  {
    errorId = CRYPTO_E_PARAM_POINTER;
  }
  else if (Crypto_30_CryWrapper_Local_DetChecksServiceValues(job, &errorId) == E_NOT_OK) /* SBSW_CRYPTO_30_CRYWRAPPER_FORWARDING_OF_JOB_PTR */
  {
    /* Error Id is set by sub-function */
  }
  else
#endif
  {
    /* #15 Directly process job if it is synchronous. */
    if (job->jobPrimitiveInfo->processingType == CRYPTO_PROCESSING_SYNC)
    {
      SchM_Enter_Crypto_30_CryWrapper_CRYPTO_30_CRYWRAPPER_EXCLUSIVE_AREA_0();
      if (Crypto_30_CryWrapper_TryObtainingLock(objectId, job->jobInfo->jobId) == TRUE)
      {
        Crypto_30_CryWrapper_SetDriverObjectState(objectId, CRYPTO_30_CRYWRAPPER_DRIVEROBJECTSTATE_PROCESSING); /* SBSW_CRYPTO_30_CRYWRAPPER_CSL01_OBJECTID */
        SchM_Exit_Crypto_30_CryWrapper_CRYPTO_30_CRYWRAPPER_EXCLUSIVE_AREA_0();

        retVal = Crypto_30_CryWrapper_Process(objectId, job); /* SBSW_CRYPTO_30_CRYWRAPPER_FORWARDING_OF_JOB_PTR */
        Crypto_30_CryWrapper_SetDriverObjectState(objectId, CRYPTO_30_CRYWRAPPER_DRIVEROBJECTSTATE_IDLE); /* SBSW_CRYPTO_30_CRYWRAPPER_CSL01_OBJECTID */
      }
      else
      {
        retVal = CRYPTO_E_BUSY;
        SchM_Exit_Crypto_30_CryWrapper_CRYPTO_30_CRYWRAPPER_EXCLUSIVE_AREA_0();
      }
    }
    else
    {
      /* #20 Enqueue job if it is asynchronous and the queue is not full and the lock is not occupied by another job. */
      Crypto_30_CryWrapper_QueueIdxOfDriverObjectType queueIdx = Crypto_30_CryWrapper_GetQueueIdxOfDriverObject(objectId);
      retVal = CRYPTO_E_QUEUE_FULL;

      SchM_Enter_Crypto_30_CryWrapper_CRYPTO_30_CRYWRAPPER_EXCLUSIVE_AREA_0();
      /* If job is asynchronous and job queue is not full, queue job. Otherwise return CRYPTO_E_QUEUE_FULL. */
      if (Crypto_30_CryWrapper_GetQueue(queueIdx) == NULL_PTR)
      {
        if ((Crypto_30_CryWrapper_IsLockFree(objectId))
          || ((Crypto_30_CryWrapper_IsLockOccupiedByJob(objectId, job->jobInfo->jobId)) == TRUE))
        {
          Crypto_30_CryWrapper_SetQueue(queueIdx, job); /* SBSW_CRYPTO_30_CRYWRAPPER_CSL02_QUEUE_VIA_DRIVEROBJECT */
          retVal = E_OK;
        }
      }
      SchM_Exit_Crypto_30_CryWrapper_CRYPTO_30_CRYWRAPPER_EXCLUSIVE_AREA_0();
    }
  }

   /* ----- Development Error Report --------------------------------------- */
#if (CRYPTO_30_CRYWRAPPER_DEV_ERROR_REPORT == STD_ON)
  if (errorId != CRYPTO_E_NO_ERROR)
  {
    (void)Det_ReportError(CRYPTO_30_CRYWRAPPER_MODULE_ID, CRYPTO_30_CRYWRAPPER_INSTANCE_ID, CRYPTO_30_CRYWRAPPER_SID_PROCESS_JOB, errorId);
  }
#else
  CRYPTO_30_CRYWRAPPER_DUMMY_STATEMENT(errorId); /* PRQA S 3112 */ /* MD_MSR_14.2 */
#endif

  return retVal;
} /* PRQA S 6080 */ /* MD_MSR_STMIF */

/**********************************************************************************************************************
*  Crypto_30_CryWrapper_CancelJob()
*********************************************************************************************************************/
/*!
* Internal comment removed.
 *
 *
 *
 *
 *
*/
FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_CancelJob(
  uint32 objectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) job)
{
  /* ----- Local Variables ---------------------------------------------- */
  Std_ReturnType retVal = E_NOT_OK;
  uint8 errorId = CRYPTO_E_NO_ERROR;

  /* ----- Development Error Checks ------------------------------------- */
#if (CRYPTO_30_CRYWRAPPER_DEV_ERROR_DETECT == STD_ON)
  /* [SWS_Crypto_00123] */
  /* #05 Check initialization state of the component. */
  if (Crypto_30_CryWrapper_ModuleInitialized == (uint8)CRYPTO_30_CRYWRAPPER_UNINIT)
  {
    errorId = CRYPTO_E_UNINIT;
  }
  /* [SWS_Crypto_00124] */ 
  /* #10 Check plausibility of parameters. */
  else if (objectId >= Crypto_30_CryWrapper_GetSizeOfDriverObject())
  {
    errorId = CRYPTO_E_PARAM_HANDLE;
  }
  /* [SWS_Crypto_00125] Check if job is a null pointer */
  else if (job == NULL_PTR)
  {
    errorId = CRYPTO_E_PARAM_POINTER;
  }
  else
#endif
  {
    SchM_Enter_Crypto_30_CryWrapper_CRYPTO_30_CRYWRAPPER_EXCLUSIVE_AREA_0();
    /* Driver object is not processing anything at the moment */
    if (Crypto_30_CryWrapper_GetDriverObjectState(objectId) == CRYPTO_30_CRYWRAPPER_DRIVEROBJECTSTATE_IDLE)
    {
      Crypto_30_CryWrapper_QueueIdxOfDriverObjectType queueIdx = Crypto_30_CryWrapper_GetQueueIdxOfDriverObject(objectId);
      Crypto_30_CryWrapper_QueueElementType queuedJob = Crypto_30_CryWrapper_GetQueue(queueIdx);

      if ((queuedJob != NULL_PTR) && (queuedJob->jobInfo->jobId == job->jobInfo->jobId))
      {
        Crypto_30_CryWrapper_SetQueue(queueIdx, NULL_PTR); /* SBSW_CRYPTO_30_CRYWRAPPER_CSL02_QUEUE_VIA_DRIVEROBJECT */
        retVal = E_OK;
      }

      if (Crypto_30_CryWrapper_IsLockOccupiedByJob(objectId, job->jobInfo->jobId))
      {
        Crypto_30_CryWrapper_FreeLock(objectId); /* SBSW_CRYPTO_30_CRYWRAPPER_CSL01 */
        job->state = CRYPTO_JOBSTATE_IDLE; /* SBSW_CRYPTO_30_CRYWRAPPER_ACCESS_OF_JOB_MEMBER_CANCEL_JOB */
        retVal = E_OK;
      }
    }
    SchM_Exit_Crypto_30_CryWrapper_CRYPTO_30_CRYWRAPPER_EXCLUSIVE_AREA_0();

    if ((retVal == E_OK) && (job->jobPrimitiveInfo->processingType == CRYPTO_PROCESSING_ASYNC))
    {
      CryIf_CallbackNotification(job, CRYPTO_E_JOB_CANCELED); /* SBSW_CRYPTO_30_CRYWRAPPER_FORWARDING_OF_JOB_PTR */
    }
  }

  /* ----- Development Error Report --------------------------------------- */
#if (CRYPTO_30_CRYWRAPPER_DEV_ERROR_REPORT == STD_ON)
  if (errorId != CRYPTO_E_NO_ERROR)
  {
    (void)Det_ReportError(CRYPTO_30_CRYWRAPPER_MODULE_ID, CRYPTO_30_CRYWRAPPER_INSTANCE_ID, CRYPTO_30_CRYWRAPPER_SID_CANCEL_JOB, errorId);
  }
#else
  CRYPTO_30_CRYWRAPPER_DUMMY_STATEMENT(errorId); /* PRQA S 3112 */ /* MD_MSR_14.2 */
#endif

  return retVal;
} /* PRQA S 6080 */ /* MD_MSR_STMIF */

/**********************************************************************************************************************
 *  Crypto_30_CryWrapper_TryObtainingLock()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 */
CRYPTO_30_CRYWRAPPER_LOCAL_INLINE FUNC(boolean, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_TryObtainingLock(uint32 objectId,
  uint32 jobId)
{
  /* ----- Local Variables ---------------------------------------------- */  

  /* ----- Development Error Checks ------------------------------------- */  
  /* #05 Lock driver object for the given job if it is not already locked. */
  if (Crypto_30_CryWrapper_IsLockFree(objectId))
  {
    Crypto_30_CryWrapper_SetLock(objectId, jobId); /* SBSW_CRYPTO_30_CRYWRAPPER_CSL01_OBJECTID */
  }

  /* #10 Return information if the lock is now occupied by the job. */
  return (boolean)(Crypto_30_CryWrapper_IsLockOccupiedByJob(objectId, jobId));
}

#define CRYPTO_30_CRYWRAPPER_STOP_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
* Module specific MISRA deviations
*********************************************************************************************************************/
/* Module specific MISRA deviations:

MD_CRYPTO_30_CRYWRAPPER_3673_1:
Reason:     Parameter cannot be set to const since it is passed as var parameter to lower layer crypto library.
Risk:       None
Prevention: None

MD_CRYPTO_30_CRYWRAPPER_3673_2:
Reason:     Pointer can only be const when method is empty and only Dummy statements are used.
Risk:       None
Prevention: Covered by code review.

*/

/*
\CM CM_CRYPTO_30_CRYWRAPPER_STACK_ARRAY_WITH_SIZE The stack arrays are given with its size to the called API.
\CM CM_CRYPTO_30_CRYWRAPPER_STACK_ARRAY_WITHOUT_SIZE The stack array has the same length as expected by the called API.
\CM CM_CRYPTO_30_CRYWRAPPER_WORKSPACE_STACK The workspace is located on the stack and the pointer is valid throughout the call.
\CM CM_CRYPTO_30_CRYWRAPPER_WORKSPACE_VIA_COMSTACKLIB_RUNTIME The workspace is received via ComStackLib access macros. As it is an 0:1 relation, a runtime check for availability is performed in the Dispatching function.
\CM CM_CRYPTO_30_CRYWRAPPER_JOB_INPUT_OUTPUT_BUFFERS_RUNTIME All job concerning in- and output buffer were checked in Crypto_30_CryWrapper_DetChecksServiceValues before based on service and mode and therefore are valid in this context.
*/

/* SBSW_JUSTIFICATION_BEGIN

\ID SBSW_CRYPTO_30_CRYWRAPPER_CSL01
\DESCRIPTION Access of Queue, KeyElementWrittenLength, KeyElement, RandomSeedBuffer and Lock using ComStackLib.
\COUNTERMEASURE \N Qualified use-case CSL01 of ComStackLib.

\ID SBSW_CRYPTO_30_CRYWRAPPER_CSL01_OBJECTID
\DESCRIPTION Access of WrittenLength, BufferLength, DriverObjectState and Lock using ComStackLib. The GetSizeOf-check is performed in one of the global APIs Crypto_30_CryWrapper_CancelJob or Crypto_30_CryWrapper_ProcessJob.
\COUNTERMEASURE \N Qualified use case CSL01 of ComStackLib.

\ID SBSW_CRYPTO_30_CRYWRAPPER_CSL02_QUEUE_VIA_DRIVEROBJECT
\DESCRIPTION Access of Queue (via indirection over DriverObject) with same index using ComStackLib.
\COUNTERMEASURE \N Qualified use case CSL02 of ComStackLib.

\ID SBSW_CRYPTO_30_CRYWRAPPER_CSL02_KEY_STORAGE_VIA_KEY_ELEMENT
\DESCRIPTION Access of KeyStorage (via indirection over keyElement) with same index using ComStackLib.
\COUNTERMEASURE \N Qualified use case CSL02 of ComStackLib.

\ID SBSW_CRYPTO_30_CRYWRAPPER_CSL02_KEY_ELEMENT_VIA_KEY
\DESCRIPTION Access of KeyElement (via indirection over Key) with same index using ComStackLib.
\COUNTERMEASURE \N Qualified use case CSL02 of ComStackLib.

\ID SBSW_CRYPTO_30_CRYWRAPPER_STACK_ARRAY_ACCESS_WITH_SIZE
\DESCRIPTION Access of array located on stack.
\COUNTERMEASURE \N The static size of the array or a smaller value is used as upper bound and therefore no illegal write access is done.

\ID SBSW_CRYPTO_30_CRYWRAPPER_STACK_VARIABLE_AS_PTR
\DESCRIPTION A pointer to an array or variable located on the stack is given as parameter to a function including its size in case it is an array.
\COUNTERMEASURE \N The function call is synchronous and the size of the array is given, therefore the stack array is valid for the function call.

\ID SBSW_CRYPTO_30_CRYWRAPPER_ACCESS_TO_ERRORID_PTR
\DESCRIPTION Access of errorId pointer to set the errorId. The context is an inlined function which is always called synchronously from Crypto_30_CryWrapper_Process,
             where the variable is located on the stack.
\COUNTERMEASURE \N The function call is synchronous and the variable errorId has to be located on the stack.

\ID SBSW_CRYPTO_30_CRYWRAPPER_FORWARDING_OF_JOB_PTR
\DESCRIPTION The call is only forwarded and has as parameter a job pointer.
\COUNTERMEASURE \N The pointer is forwarded and assumed to be valid.

\ID SBSW_CRYPTO_30_CRYWRAPPER_UPDATE_OF_JOB_STATE
\DESCRIPTION Direct write access to state member of job ptr. The context is the inlined function Crypto_30_CryWrapper_UpdateJobState,
             which is always called synchronously from Crypto_30_CryWrapper_Process.
\COUNTERMEASURE \R The ptr is checked in the global API Crypto_ProcessJob or Crypto_MainFunction.

\ID SBSW_CRYPTO_30_CRYWRAPPER_DIRECT_ACCESS_TO_JOB_STATE
\DESCRIPTION Direct write access to state member of job ptr. The context is the inlined function Crypto_30_CryWrapper_Process,
             which is always called synchronously from Crypto_30_CryWrapper_ProcessJob or Crypto_30_CryWrapper_MainFunction.
\COUNTERMEASURE \R The job object is already checked in global API.

\ID SBSW_CRYPTO_30_CRYWRAPPER_WRITE_ACCESS_TO_JOBPRIMITIVE_INPUTOUTPUT_PTR
\DESCRIPTION Write access to a pointer of the jobs primitive input output object.
\COUNTERMEASURE \R [CM_CRYPTO_30_CRYWRAPPER_JOB_INPUT_OUTPUT_BUFFERS_RUNTIME]

\ID SBSW_CRYPTO_30_CRYWRAPPER_ACCESS_OF_JOB_MEMBER_CANCEL_JOB
\DESCRIPTION Write access to the state member of job pointer.
\COUNTERMEASURE \N The pointer is checked for validity in the beginning of the Crypto_30_CryWrapper_CancelJob function.

\ID SBSW_CRYPTO_30_CRYWRAPPER_KEY_STORAGE_ACCESS_INIT
\DESCRIPTION Direct array access to key storage array generated by ComStackLib.
             The access is in bounds since it is iterated over all key elements and the access is either direct or via indirection (KeyElement to KeyStorage).
\COUNTERMEASURE \N Qualified use case CSL02 of ComStackLib.

\ID SBSW_CRYPTO_30_CRYWRAPPER_GETVERSIONINFO
\DESCRIPTION The function Crypto_30_CryWrapper_GetVersionInfo writes to the object referenced by parameter VersionInfo
\COUNTERMEASURE \N The caller ensures that the pointers passed to the parameter VersionInfo is valid.

\ID SBSW_CRYPTO_30_CRYWRAPPER_CRY_FINISH_CALL
\DESCRIPTION The call is done to set the state machine of the CRY driver to IDLE again after a failed start of update function.
\COUNTERMEASURE \N The pointer is set to NULL_PTR because they will not be used.

\ID SBSW_CRYPTO_30_CRYWRAPPER_STACK_KEY_VARIABLE_AS_PTR
\DESCRIPTION A pointer to an Csm_SymKeyType located on the stack is given as parameter to a function.
\COUNTERMEASURE \N The function call is synchronous and the size of the variable is always the same.

\ID SBSW_CRYPTO_30_CRYWRAPPER_CRY_FUNCTION_JOB_MEMBER_FORWARDING
\DESCRIPTION Pointers located inside the job are forwarded to the CRY driver.
\COUNTERMEASURE \N The function call is synchronous and the size of the array is always passed to ensure valid usage by the CRY driver.

\ID SBSW_CRYPTO_30_CRYWRAPPER_CRY_FUNCTION_JOB_MEMBER_FORWARDING_WITH_LOCAL_VAR
\DESCRIPTION Pointers located inside the job are forwarded to the CRY driver. Additionally a pointer to a local variable on the stack is provided.
\COUNTERMEASURE \N The function call is synchronous and the size of the array is always passed to ensure valid usage by the CRY driver. The local variable is of the correct type.

\ID SBSW_CRYPTO_30_CRYWRAPPER_CRY_FUNCTION_PTR_FORWARDING
\DESCRIPTION Pointers passed as parameters are forwarded to the CRY driver.
\COUNTERMEASURE \N The function call is synchronous and the size of the array is always passed to ensure valid usage by the CRY driver.

\ID SBSW_CRYPTO_30_CRYWRAPPER_CRY_STACK_VARIABLE_AS_PTR
\DESCRIPTION Pointers located as variables on the stack are passed to the CRY driver.
\COUNTERMEASURE \N The function call is synchronous and the size of the array is always passed to ensure valid usage by the CRY driver if it is an array.

\ID SBSW_CRYPTO_30_CRYWRAPPER_CRY_EMPTY_CALL
\DESCRIPTION The configured configuration pointer is passed to the function without any other parameters.
\COUNTERMEASURE \N The pointer to the configuration structure is configured by the user and is checked inside the CRY driver.

\ID SBSW_CRYPTO_30_CRYWRAPPER_PARAMETER_PTR_ACCESS
\DESCRIPTION The result of the function is stored in the provided pointer.
\COUNTERMEASURE \N The pointer has the same type as the result and the caller passed a valid stack variable.

\ID SBSW_CRYPTO_30_CRYWRAPPER_HW_PTR_FORWARDING
\DESCRIPTION The parameters are forwarded to the hardware specific implementation.
\COUNTERMEASURE \N The pointers and their size will not be used in the hardware implemenation.

\ID SBSW_CRYPTO_30_CRYWRAPPER_ARRAY_ACCESS_WITH_SIZE_CHECK
\DESCRIPTION The array is written with an index, the size of the array is known in this context.
\COUNTERMEASURE \R It is checked that there is no out of bounds via the provided length.

\ID SBSW_CRYPTO_30_CRYWRAPPER_PTR_ACCESS_WITH_DET_CHECK
\DESCRIPTION Write access to a pointer.
\COUNTERMEASURE \R The pointer is checked for validity before.

\ID SBSW_CRYPTO_30_CRYWRAPPER_FORWARDING_PTR
\DESCRIPTION    The caller forwards as parameter one or more pointer.
\COUNTERMEASURE \N The pointer is forwarded and assumed to be valid.

\ID SBSW_CRYPTO_30_CRYWRAPPER_FORWARDING_PTR_AND_STACK_VARIABLE
\DESCRIPTION    The caller forwards as parameter one or more pointer and provides a pointer to a variable on the stack.
\COUNTERMEASURE \N The pointer is forwarded and assumed to be valid.

\ID SBSW_CRYPTO_30_CRYWRAPPER_KEY_PTR_ACCESS
\DESCRIPTION    The members of the key pointer of type Csm_SymKeyType are accessed.
\COUNTERMEASURE \N The caller passes a stack variable. The members which are accessed are always available. Only the first element of the array is accessed and arrays must always have at least one element.

SBSW_JUSTIFICATION_END */

/* COV_JUSTIFICATION_BEGIN

\ID COV_CRYPTO_30_CRYWRAPPER_VAR_ELISA_STD_ON_TX
\ACCEPT TX
\REASON Feature must always be enabled for SafeBsw secured by the Elisa plugin.

\ID COV_CRYPTO_30_CRYWRAPPER_VAR_OPTIONAL_DEFINE_TX
\ACCEPT TX
\REASON This encapsulation is optional and already added for future releases.

\ID COV_CRYPTO_30_CRYWRAPPER_LOCAL_DEFINE
\ACCEPT XF
\REASON CRYPTO_30_CRYWRAPPER_LOCAL is always defined externally.

\ID COV_CRYPTO_30_CRYWRAPPER_VIRTUALKEY
\ACCEPT XF
\ACCEPT TX tx tx
\REASON Virtual keys are still beta.

\ID COV_CRYPTO_30_CRYWRAPPER_CSM_DEFINES
\ACCEPT XF
\ACCEPT TX
\REASON This defines could be defined in other crypto drivers as well. In order to increase flexibility, defines are defined in crypto driver if not provided yet.

\ID COV_CRYPTO_30_CRYWRAPPER_MISRA_ADDITIONAL_STATEMENT
\ACCEPT X
\REASON This else/default statements are required by misra but cannot be reached in code. The statement is captured by upper Api.

\ID COV_CRYPTO_30_CRYWRAPPER_ACTBN_BYTES_PER_DIGIT_DEFINE
\ACCEPT XF
\ACCEPT TX
\REASON This encapsulation is for different platform types. Not all platform types can be covered by development test. Covered by code review and integration test.

\ID COV_CRYPTO_30_CRYWRAPPER_BIT_ORDER
\ACCEPT XF
\ACCEPT TX
\REASON This encapsulation is for different platform types. Not all platform types can be covered by development test. Covered by code review and integration test.

\ID COV_CRYPTO_30_CRYWRAPPER_KEY_DERIVE_ALGORITHM
\ACCEPT TX
\REASON This statement can not be false. The statement is captured by upper Api.

\ID COV_CRYPTO_30_CRYWRAPPER_CASE_DEFAULT
\ACCEPT X
\REASON The default case is sometimes never reached because not supported cases are not forwarded to this function because of DET checks.

\ID COV_CRYPTO_30_CRYWRAPPER_HW_INIT
\ACCEPT TX
\REASON The hardware init does always return E_OK.

\ID COV_CRYPTO_30_CRYWRAPPER_FIND_PRIMITIVE
\ACCEPT TX
\REASON The Cry wrapper requires a matching primitive. This is ensured by a validation rule of the generator.

\ID COV_CRYPTO_30_CRYWRAPPER_NOT_SUPPORTED_SERVICE
\ACCEPT XF
\REASON The Cry wrapper only provides SHE functionality which means some services are always disabled.

\ID COV_CRYPTO_30_CRYWRAPPER_CSM_TYPES
\ACCEPT TX
\REASON The Cry wrapper can provide the needed type definitions for CRY drivers if they are not provided by the CSM.

\ID COV_CRYPTO_30_CRYWRAPPER_WATCHDOG_FCTN_PTR
\ACCEPT TX
\REASON The Cry wrapper provides a function pointer to the ESLib which is called during processing of the algorithm.

\ID COV_CRYPTO_30_CRYWRAPPER_PREVENTED_CRY_CONFIG
\ACCEPT TX
\ACCEPT TX tx tf
\REASON The Driver object provides a services without having a CRY configuration for this service configured. This invalid combination is avoided by generating a compiler error.

\ID COV_CRYPTO_30_CRYWRAPPER_NOT_USED_CSM_CALLOUTS
\ACCEPT X
\REASON The Cry wrapper has to provide callout functions for CRYs which always need the callouts despite being configured as synchronous. Th callouts are therefore never called.

COV_JUSTIFICATION_END */

/**********************************************************************************************************************
 *  END OF FILE: Crypto_30_CryWrapper.c
 *********************************************************************************************************************/
