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
/*!        \file  Cry_30_Rh850Icus_Rng.c
 *        \brief  Implements the CRY Rng API for the ASR CSM.
 *
 *      \details  -
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Refer to the module's header file.
 *********************************************************************************************************************/

#define CRY_30_RH850ICUS_RNG_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
#include "Cry_30_Rh850Icus.h"
#include "Csm_Cbk.h"
#include "Cry_30_Rh850Icus_CommonUtil.h"
#include "Cry_30_Rh850Icus_Hw.h"

#if ( CRY_30_RH850ICUS_RNGCONFIG == STD_ON )
/**********************************************************************************************************************
 *  LOCAL CONSTANT MACROS
 **********************************************************************************************************************/

/* Random Number Generator specific service defines */
# define CRY_30_RH850ICUS_RNG_RND_SIZE                    (CRY_30_RH850ICUS_AES128_BLOCKSIZE)

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
  P2CONST( Cry_30_Rh850Icus_RngConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) contextPtr; /*<! Holds a pointer to the configuration of this service. */
  P2CONST( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) seedPtr;  /*<! Holds a pointer to the seed for the random number generator. */
  uint32 seedLength;                                       /*<! Contains the length of the seed in bytes. Only the value 16 is supported. */
} Cry_30_Rh850Icus_RngSeed_BufferType;

/*! Struct for the service buffer which is used to temporarily store parameters until the main function processes the service */
typedef struct
{
  P2CONST( Cry_30_Rh850Icus_RngConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) contextPtr; /*<! Holds a pointer to the configuration of this service. */
  P2VAR( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) resultPtr;  /*<! Holds a pointer to the memory location which will hold the result of the random number generation. */
  uint32 resultLength;                                     /*<! Holds the amount of random bytes which should be generated. */
} Cry_30_Rh850Icus_RngGenerate_BufferType;
# endif /* ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_OFF ) */

/**********************************************************************************************************************
 *  LOCAL DATA PROTOTYPES
 **********************************************************************************************************************/

# if ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_OFF )
#  define CRY_30_RH850ICUS_START_SEC_VAR_NOINIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! Buffer containing the data used during the service execution */
CRY_30_RH850ICUS_LOCAL VAR(Cry_30_Rh850Icus_RngGenerate_BufferType, CRY_30_RH850ICUS_VAR_NOINIT) Cry_30_Rh850Icus_RngGenerate_Buffer; /* PRQA S 0779 */ /* MD_MSR_5.1_779 */

/*! Buffer containing the data used during the service execution */
CRY_30_RH850ICUS_LOCAL VAR(Cry_30_Rh850Icus_RngSeed_BufferType, CRY_30_RH850ICUS_VAR_NOINIT) Cry_30_Rh850Icus_RngSeed_Buffer; /* PRQA S 0779 */ /* MD_MSR_5.1_779 */

#  define CRY_30_RH850ICUS_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define CRY_30_RH850ICUS_START_SEC_VAR_NOINIT_8BIT
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! State of the service */
CRY_30_RH850ICUS_LOCAL VAR(uint8, CRY_30_RH850ICUS_VAR_NOINIT) Cry_30_Rh850Icus_RngSeed_Status; /* PRQA S 0779 */ /* MD_MSR_5.1_779 */

/*! State of the service */
CRY_30_RH850ICUS_LOCAL VAR(uint8, CRY_30_RH850ICUS_VAR_NOINIT) Cry_30_Rh850Icus_RngGenerate_Status; /* PRQA S 0779 */ /* MD_MSR_5.1_779 */

#  define CRY_30_RH850ICUS_STOP_SEC_VAR_NOINIT_8BIT
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
# endif /* ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_OFF ) */

/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 **********************************************************************************************************************/

# define CRY_30_RH850ICUS_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_RngSeedStartInternal()
 **********************************************************************************************************************/
 /*! \brief        Function starts the random number generator seed service.
 *  \details       -
 *  \return        CSM_E_OK     Request successful.
 *  \return        CSM_E_NOT_OK Request failed.
 *  \return        CSM_E_BUSY   Request failed, service is still busy.
 *  \pre           Service is idle.
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CRY_30_RH850ICUS_RNGCONFIG
 *  \note          It is important to call the Finish-Function of this service after a successful call of this function
 *                 (CSM_E_OK). A call of the Update-Function between the Start- and Finish-function is allowed.
 *                 Attention: If the Finish-function is never called, the SHE is blocked for all other services.
 **********************************************************************************************************************/
CRY_30_RH850ICUS_LOCAL FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_RngSeedStartInternal( void );

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_RngSeedUpdateInternal()
 **********************************************************************************************************************/
/*! \brief         Function updates the random number generator seed service.
 *  \details       The function updates the service. The command to extend the seed with the given seedPtr is send
 *                 to the hardware.
 *  \param[in]     seedPtr      Holds a pointer to the seed for the random number generator.
 *  \return        CSM_E_OK     Request successful.
 *  \return        CSM_E_NOT_OK Request failed.
 *  \pre           Service is started.
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CRY_30_RH850ICUS_RNGCONFIG
 *  \note          The driver does not support multiple update calls.
 **********************************************************************************************************************/
CRY_30_RH850ICUS_LOCAL FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_RngSeedUpdateInternal(
  P2CONST( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) seedPtr);

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_RngSeedFinishInternal()
 **********************************************************************************************************************/
/*! \brief         Function finishes the random seed service.
 *  \details       -
 *  \return        CSM_E_OK     Request successful.
 *  \return        CSM_E_NOT_OK Request failed.
 *  \pre           Service is started.
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CRY_30_RH850ICUS_RNGCONFIG
 *  \note          This function must only be called one after a succesful call of the corresponding Start-Function of
 *                 this service. It is not allowed to call this function multiple times even if the return value is not
 *                 CSM_E_OK.
 **********************************************************************************************************************/
CRY_30_RH850ICUS_LOCAL FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_RngSeedFinishInternal( void );

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_RngGenerateInternal()
 **********************************************************************************************************************/
/*! \brief         Generates a random number according to the SHE specification.
 *  \details       This function sends a command to the hardware to generate a random number and writes it back to the
 *                 resultPtr.
 *  \param[out]    resultPtr    Holds a pointer to the memory location which will hold the result of the random
 *                              number generation. The memory location must have at least the size "resultLength".
 *  \param[in]     resultLength Holds the amount of random bytes which should be generated.
 *                              The maximum supported size is 16 Byte.
 *  \return        CSM_E_OK     Request successful.
 *  \return        CSM_E_NOT_OK Request failed.
 *  \return        CSM_E_BUSY   Request failed, service is still busy.
 *  \pre           Service is idle.
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CRY_30_RH850ICUS_RNGCONFIG
 **********************************************************************************************************************/
CRY_30_RH850ICUS_LOCAL FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_RngGenerateInternal(
  P2VAR( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) resultPtr,
  uint32 resultLength );

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 **********************************************************************************************************************/

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_RngSeedStartInternal()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 */
CRY_30_RH850ICUS_LOCAL FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_RngSeedStartInternal( void )
{
  /* ----- Local Variables ---------------------------------------------- */
  Csm_ReturnType retVal = CSM_E_NOT_OK;

  /* ----- Implementation ----------------------------------------------- */
  /* Check if no service is running */
  SchM_Enter_Cry_30_Rh850Icus_CRY_30_RH850ICUS_EXCLUSIVE_AREA();
  if (Cry_30_Rh850Icus_ServiceState == CRY_30_RH850ICUS_SERVICE_IDLE)
  {
    /* #11 Set state to start. */
    Cry_30_Rh850Icus_ServiceState = CRY_30_RH850ICUS_SERVICE_RNGSEED_START;
    retVal = CSM_E_OK;
  }
  else
  {
    retVal = CSM_E_BUSY;
  }
  SchM_Exit_Cry_30_Rh850Icus_CRY_30_RH850ICUS_EXCLUSIVE_AREA();

  return retVal;
} /* Cry_30_Rh850Icus_RngSeedStartInternal() */

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_RngSeedUpdateInternal()
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
CRY_30_RH850ICUS_LOCAL FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_RngSeedUpdateInternal(
  P2CONST( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) seedPtr)
{
  /* ----- Local Variables ---------------------------------------------- */
  Csm_ReturnType retVal = CSM_E_NOT_OK;

  /* ----- Implementation ----------------------------------------------- */
# if ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_ON )
  /* #10 Check if service has been started. */
  if (Cry_30_Rh850Icus_ServiceState == CRY_30_RH850ICUS_SERVICE_RNGSEED_START)
# endif
  {
# if (CRY_30_RH850ICUS_INVALID_MEMORY_DETECTION == STD_ON) /* COV_CRY_INVALID_MEMORY_DETECTION */
    /* #15 If INVALID_MEMORY_DETECTION is enabled: */
    /* #20 ExtensionPart: Call subfunction to check if seedPtr needs to be copied to global buffer. */
    P2CONST(uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) inputPtr = seedPtr;
    if (Cry_30_Rh850Icus_Hw_IsMemoryValid(seedPtr, CRY_30_RH850ICUS_RNG_RND_SIZE) == FALSE) /* SBSW_CRY_FCTCALL_PTRFORWARDING_INVALID_MEMORY */
    {
      /* #21 Copy seedPtr to global buffer which is correct located in the memory. */
      /* Length of seedPtr is CRY_30_RH850ICUS_RNG_RND_SIZE, checked by public update function. */
      Cry_30_Rh850Icus_CopyByteArrayToWordArray(seedPtr, Cry_30_Rh850Icus_AesBlockBuffer, CRY_30_RH850ICUS_RNG_RND_SIZE); /* SBSW_CRY_FCTCALL_PTRFORWARDING_BUFFERED_DATA */
      inputPtr = (P2CONST(uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR))Cry_30_Rh850Icus_AesBlockBuffer; /* PRQA S 0310 */ /* MD_CRY_0310_ALIGNED_ARRAY */
    }
    /* #25 ExtensionPart: Call subfunction to update the extend seed primitive (send command to hw). */
    retVal = Cry_30_Rh850Icus_Hw_RngSeedUpdateInternal((P2CONST(uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR))inputPtr); /* PRQA S 0310 */ /* MD_CRY_0310_ALIGNED_ARRAY */ /* SBSW_CRY_FCTCALL_PTRFORWARDING_BUFFERED_DATA */
# else
    /* #25 ExtensionPart: Call subfunction to update the extend seed primitive (send command to hw). */
    retVal = Cry_30_Rh850Icus_Hw_RngSeedUpdateInternal(seedPtr); /* SBSW_CRY_FCTCALL_PTRFORWARDING */
# endif
  }

  /* #30 If no errors occured, set state to Update. */
  if ( retVal == CSM_E_OK)
  {
    Cry_30_Rh850Icus_ServiceState = CRY_30_RH850ICUS_SERVICE_RNGSEED_UPDATE;
  }

  return retVal;
} /* Cry_30_Rh850Icus_RngSeedUpdateInternal() */

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_RngSeedFinishInternal()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 */
CRY_30_RH850ICUS_LOCAL FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_RngSeedFinishInternal( void )
{
  /* ----- Local Variables ---------------------------------------------- */
  Csm_ReturnType retVal = CSM_E_NOT_OK;

  /* ----- Implementation ----------------------------------------------- */
  /* #10 Check if service has been updated. */
  if (Cry_30_Rh850Icus_ServiceState == CRY_30_RH850ICUS_SERVICE_RNGSEED_UPDATE)
  {
    retVal = CSM_E_OK;

    /* #20 Send cancel command to SHE. */
    Cry_30_Rh850Icus_CancelCommand();
    /* #30 Reset service state to idle. */
    Cry_30_Rh850Icus_ServiceState = CRY_30_RH850ICUS_SERVICE_IDLE;
  }

  return retVal;
} /* Cry_30_Rh850Icus_RngSeedFinishInternal() */

/**********************************************************************************************************************
 * Cry_30_Rh850Icus_RngGenerateInternal()
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
CRY_30_RH850ICUS_LOCAL FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_RngGenerateInternal(
  P2VAR( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) resultPtr,
  uint32 resultLength )
{
  /* ----- Local Variables ---------------------------------------------- */
  Csm_ReturnType retVal = CSM_E_NOT_OK;

  /* ----- Implementation ----------------------------------------------- */
  /* #10 Check if service is idle (no other service is running). */
  SchM_Enter_Cry_30_Rh850Icus_CRY_30_RH850ICUS_EXCLUSIVE_AREA();
  if (Cry_30_Rh850Icus_ServiceState == CRY_30_RH850ICUS_SERVICE_IDLE)
  {
    /* #11 Set state to start. */
    Cry_30_Rh850Icus_ServiceState = CRY_30_RH850ICUS_SERVICE_RNGGEN_START;
    SchM_Exit_Cry_30_Rh850Icus_CRY_30_RH850ICUS_EXCLUSIVE_AREA();

    /* #12 ExtensionPart: Call subfunction to update the random generate primitive (send command to hw). */
    retVal = Cry_30_Rh850Icus_Hw_RngGenerateInternal((uint8*)Cry_30_Rh850Icus_AesBlockBuffer); /* PRQA S 0310 */ /* MD_CRY_0310_ALIGNED_ARRAY */ /* SBSW_CRY_FCTCALL_PTRFORWARDING_BUFFERED_DATA */

    /* ResultLength cannot be greater as CRY_30_RH850ICUS_RNG_RND_SIZE, checked by public generate-function */
    Cry_30_Rh850Icus_CopyWordArrayToByteArray(Cry_30_Rh850Icus_AesBlockBuffer, resultPtr, resultLength); /* SBSW_CRY_FCTCALL_PTRFORWARDING */

    /* #13 Cancel command and set state to idle. */
    Cry_30_Rh850Icus_CancelCommand();
    Cry_30_Rh850Icus_ServiceState = CRY_30_RH850ICUS_SERVICE_IDLE;
  }
  else
  {
    SchM_Exit_Cry_30_Rh850Icus_CRY_30_RH850ICUS_EXCLUSIVE_AREA();
    /* #40 If service state is not idle, return CSM_E_BUSY. */
    retVal = CSM_E_BUSY;
  }

  return retVal;
} /* Cry_30_Rh850Icus_RngGenerateInternal() */

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 **********************************************************************************************************************/

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_RngInit()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 */
FUNC( void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_RngInit( void )
{
# if (CRY_30_RH850ICUS_TIMEOUT_API == STD_ON)
  Cry_30_Rh850Icus_GetTimeoutApiLocationCalloutOfGeneralOfPCConfig()(CRY_SHE_TO_SERVICE_PRNG_SEED, CRY_SHE_TO_SECTION_INIT_SERVICE);
  Cry_30_Rh850Icus_TimeoutApiService = CRY_SHE_TO_SERVICE_PRNG_SEED;
# endif
  /* #11 ExtensionPart: Call subfunction to initialize the random number generator if not already done (send command to hw). */
  Cry_30_Rh850Icus_Hw_RngInit();
# if ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_OFF )
  /* #20 Asynchronous function handling: Set status state to idle. */
  Cry_30_Rh850Icus_RngSeed_Status = CRY_30_RH850ICUS_STATE_IDLE;
  Cry_30_Rh850Icus_RngGenerate_Status = CRY_30_RH850ICUS_STATE_IDLE;
# endif
} /* Cry_30_Rh850Icus_RngGenerateInit() */

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_RngSeedMainFunction()
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
FUNC(void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_RngSeedMainFunction( void )
{
  /* #10 In case of asynchronous service handling: */
# if ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_OFF )
  Csm_ReturnType retVal;

  /* #20 Analyse status state machine. */
  switch(Cry_30_Rh850Icus_RngSeed_Status)
  {
    /* #30 State machine has pending start status. */
    case CRY_30_RH850ICUS_STATE_PENDING_START:
    {
      /* #31 Call internal start service method. */
      retVal = Cry_30_Rh850Icus_RngSeedStartInternal();

      /* #32 If start method was CSM_E_BUSY, hold service in state, for next main loop. */
      if (retVal != CSM_E_BUSY)
      {
        /* #33 Update state if start executed with CSM_E_OK or CSM_E_NOT_OK. */
        Cry_30_Rh850Icus_RngSeed_Status = CRY_30_RH850ICUS_STATE_START;

        /*
         * Note: Internal start function can only return CSM_E_OK or CSM_E_BUSY.
         * If internal start function is extended and there is a reason to return CSM_E_NOT_OK, this needs to be adapted (see other
         * primitive main function constructs.
         */

        /* #34 Notify via callback if start method executed with CSM_E_OK or CSM_E_NOT_OK. */
        Csm_RandomSeedCallbackNotification(retVal);
      }
      break;
    }
    /* #40 State machine has pending update status. */
    case CRY_30_RH850ICUS_STATE_PENDING_UPDATE:
    {
      /* #41 Call internal update service method. */
      retVal = Cry_30_Rh850Icus_RngSeedUpdateInternal(Cry_30_Rh850Icus_RngSeed_Buffer.seedPtr); /* SBSW_CRY_FCTCALL_PTRFORWARDING_BUFFERED */

      /* #42 Set internal status state to next stage depending on the result of the update call. */
      if (retVal == CSM_E_OK)
      {
        Cry_30_Rh850Icus_RngSeed_Status = CRY_30_RH850ICUS_STATE_UPDATE;
      }
      else
      {
        Cry_30_Rh850Icus_RngSeed_Status = CRY_30_RH850ICUS_STATE_START;
      }

      /* #43 Send callback notification. */
      Csm_RandomSeedCallbackNotification(retVal);
      break;
    }
    /* #50 State machine has pending finish status. */
    case CRY_30_RH850ICUS_STATE_PENDING_FINISH:
    {
      /* #51 Call internal finish service method. */
      retVal = Cry_30_Rh850Icus_RngSeedFinishInternal();

      /* #52 If finish method fails, cancel command on SHE and reset global state (next service can run). */
      if (retVal != CSM_E_OK)
      {
        Cry_30_Rh850Icus_CancelCommand();
        Cry_30_Rh850Icus_ServiceState = CRY_30_RH850ICUS_SERVICE_IDLE;
      }

      /* #53 Set internal status state to IDLE. */
      Cry_30_Rh850Icus_RngSeed_Status = CRY_30_RH850ICUS_STATE_IDLE;

      /* #54 Send callback and finish notification. */
      Csm_RandomSeedCallbackNotification(retVal);
      Csm_RandomSeedServiceFinishNotification();
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
}  /* Cry_30_Rh850Icus_RngSeedMainFunction() */

/**********************************************************************************************************************
 * Cry_30_Rh850Icus_RngGenerateMainFunction()
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
FUNC(void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_RngGenerateMainFunction(void)
{
  /* #10 In case of asynchronous service handling: */
# if ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_OFF )
  Csm_ReturnType retVal;

  /* #20 Check if local state is PENDING START. */
  if (Cry_30_Rh850Icus_RngGenerate_Status == CRY_30_RH850ICUS_STATE_PENDING_START)
  {
    /* #31 Call internal start service method. */
    retVal = Cry_30_Rh850Icus_RngGenerateInternal( /* SBSW_CRY_FCTCALL_PTRFORWARDING_BUFFERED */
      Cry_30_Rh850Icus_RngGenerate_Buffer.resultPtr,
      Cry_30_Rh850Icus_RngGenerate_Buffer.resultLength);

    /* #32 If start method returned with CSM_E_BUSY, hold local service in state for next main loop. */
    if (retVal != CSM_E_BUSY)
    {
      /* #33 If start method returned not with CSM_E_BUSY, reset local service to IDLE and send callback notifications. */
      Cry_30_Rh850Icus_RngGenerate_Status = CRY_30_RH850ICUS_STATE_IDLE;
      Csm_RandomGenerateCallbackNotification(retVal);
      Csm_RandomGenerateServiceFinishNotification();
    }
  }
# endif
} /* Cry_30_Rh850Icus_RngGenerateMainFunction() */

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_RngSeedStart()
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
FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_RngSeedStart(
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
  else if (Cry_30_Rh850Icus_GetRngWorkSpaceIdxOfRngConfig((P2CONST(Cry_30_Rh850Icus_RngConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR))cfgPtr)
    >= Cry_30_Rh850Icus_GetSizeOfRngWorkSpace())
  {
    /* No action because no DET */
  }
  else
# endif
  {
    /* ----- Implementation ----------------------------------------------- */
# if (CRY_30_RH850ICUS_TIMEOUT_API == STD_ON)
    /* #20 If Timeout-API is enabled, inform Timeout-API about current location. */
    Cry_30_Rh850Icus_GetTimeoutApiLocationCalloutOfGeneralOfPCConfig()(CRY_SHE_TO_SERVICE_PRNG_SEED, CRY_SHE_TO_SECTION_START_SERVICE);
    Cry_30_Rh850Icus_TimeoutApiService = CRY_SHE_TO_SERVICE_PRNG_SEED;
# endif
# if ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_OFF )
    SchM_Enter_Cry_30_Rh850Icus_CRY_30_RH850ICUS_EXCLUSIVE_AREA();
    /* #31 Check if local status is IDLE. */
    if (Cry_30_Rh850Icus_RngSeed_Status == CRY_30_RH850ICUS_STATE_IDLE)
    {
      /* #32 Set internal status state to PENDING START. */
      Cry_30_Rh850Icus_RngSeed_Status = CRY_30_RH850ICUS_STATE_PENDING_START;
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
    retVal = Cry_30_Rh850Icus_RngSeedStartInternal();
# endif
  }

# if (CRY_30_RH850ICUS_DEV_ERROR_DETECT == STD_OFF)
  CRY_30_RH850ICUS_DUMMY_STATEMENT_CONST(cfgPtr); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif

  return retVal;
} /* Cry_30_Rh850Icus_RngSeedStart() */

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_RngSeedUpdate()
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
FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_RngSeedUpdate(
  P2CONST( void, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) cfgPtr,
  P2CONST( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) seedPtr,
  uint32 seedLength)
{
  /* ----- Local Variables ---------------------------------------------- */
  Csm_ReturnType retVal = CSM_E_NOT_OK;

  /* ----- Development Error Checks ------------------------------------- */
  /* #10 Check plausibility of input parameters. */
# if (CRY_30_RH850ICUS_DEV_ERROR_DETECT == STD_ON)
  /* Check if input parameter cfgPtr is a Null-Pointer */
  if ( (cfgPtr == NULL_PTR) || (seedPtr == NULL_PTR) )
  {
    /* No action because no DET */
  }
  else if (Cry_30_Rh850Icus_GetRngWorkSpaceIdxOfRngConfig((P2CONST(Cry_30_Rh850Icus_RngConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR))cfgPtr)
    >= Cry_30_Rh850Icus_GetSizeOfRngWorkSpace())
  {
    /* No action because no DET */
  }
  else
# endif
  /* Following checks are done always, independent on pre-compile switch. */
  /* #15 Check if seedLength is supported/valid for SHE. */
  if (seedLength != CRY_30_RH850ICUS_RNG_RND_SIZE)
  {
    /* No action because no DET */
  }
  else
  {
    /* ----- Implementation ----------------------------------------------- */
# if (CRY_30_RH850ICUS_TIMEOUT_API == STD_ON)
    /* #20 If Timeout-API is enabled, inform Timeout-API about current location. */
    Cry_30_Rh850Icus_GetTimeoutApiLocationCalloutOfGeneralOfPCConfig()(CRY_SHE_TO_SERVICE_PRNG_SEED, CRY_SHE_TO_SECTION_UPDATE_SERVICE);
    Cry_30_Rh850Icus_TimeoutApiService = CRY_SHE_TO_SERVICE_PRNG_SEED;
# endif
# if ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_OFF )
    /* #31 Check if local status is START. */
    if (Cry_30_Rh850Icus_RngSeed_Status == CRY_30_RH850ICUS_STATE_START)
    {
      /* #32 Set internal status state to PENDING UPDATE. */
      Cry_30_Rh850Icus_RngSeed_Status = CRY_30_RH850ICUS_STATE_PENDING_UPDATE;
      /* #33 Store parameters to buffer. */
      Cry_30_Rh850Icus_RngSeed_Buffer.seedPtr = seedPtr;
      /* #34 Always return CSM_E_OK. */
      retVal = CSM_E_OK;
    }
# else
    /* #41 Call the internal update function. */
    retVal = Cry_30_Rh850Icus_RngSeedUpdateInternal(seedPtr); /* SBSW_CRY_FCTCALL_PTRFORWARDING */
# endif
  }

# if (CRY_30_RH850ICUS_DEV_ERROR_DETECT == STD_OFF)
  CRY_30_RH850ICUS_DUMMY_STATEMENT_CONST(cfgPtr); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
  CRY_30_RH850ICUS_DUMMY_STATEMENT(seedLength);  /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif

  return retVal;
} /* Cry_30_Rh850Icus_RngSeedUpdate() */

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_RngSeedFinish()
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
FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_RngSeedFinish(
  P2CONST( void, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) cfgPtr)
{
  /* ----- Local Variables ---------------------------------------------- */
  Csm_ReturnType retVal = CSM_E_NOT_OK;

  /* ----- Development Error Checks ------------------------------------- */
  /* #10 Check plausibility of input parameters. */
# if (CRY_30_RH850ICUS_DEV_ERROR_DETECT == STD_ON)
  /* Check parameter cfgPtr */
  if (cfgPtr == NULL_PTR)
  {
    /* No action because no DET */
  }
  else if (Cry_30_Rh850Icus_GetRngWorkSpaceIdxOfRngConfig((P2CONST(Cry_30_Rh850Icus_RngConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR))cfgPtr)
    >= Cry_30_Rh850Icus_GetSizeOfRngWorkSpace())
  {
    /* No action because no DET */
  }
  else
# endif
  {
    /* ----- Implementation ----------------------------------------------- */
# if (CRY_30_RH850ICUS_TIMEOUT_API == STD_ON)
    /* #20 If Timeout-API is enabled, inform Timeout-API about current location. */
    Cry_30_Rh850Icus_GetTimeoutApiLocationCalloutOfGeneralOfPCConfig()(CRY_SHE_TO_SERVICE_PRNG_SEED, CRY_SHE_TO_SECTION_FINISH_SERVICE);
    Cry_30_Rh850Icus_TimeoutApiService = CRY_SHE_TO_SERVICE_PRNG_SEED;
# endif
# if ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_OFF )
    /* #31 Check if local status is UPDATE or START. */
    if ( (Cry_30_Rh850Icus_RngSeed_Status == CRY_30_RH850ICUS_STATE_UPDATE) || (Cry_30_Rh850Icus_RngSeed_Status == CRY_30_RH850ICUS_STATE_START) )
    {
      /* #32 Set local status to PENDING_FINISH. */
      Cry_30_Rh850Icus_RngSeed_Status = CRY_30_RH850ICUS_STATE_PENDING_FINISH;
      retVal = CSM_E_OK;
    }
# else
    /* #41 Call the internal finish function. */
    retVal = Cry_30_Rh850Icus_RngSeedFinishInternal();
# endif
  }

# if ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_ON )
  /* #50 If any error occured, and global state is in start or update, cancel SHE command and set global state to idle (in sync mode). */
  if ((retVal != CSM_E_OK) &&
    ((Cry_30_Rh850Icus_ServiceState == CRY_30_RH850ICUS_SERVICE_RNGSEED_UPDATE) || (Cry_30_Rh850Icus_ServiceState == CRY_30_RH850ICUS_SERVICE_RNGSEED_START)))
  {
    Cry_30_Rh850Icus_CancelCommand();
    Cry_30_Rh850Icus_ServiceState = CRY_30_RH850ICUS_SERVICE_IDLE;
  }
# endif

# if (CRY_30_RH850ICUS_DEV_ERROR_DETECT == STD_OFF)
  CRY_30_RH850ICUS_DUMMY_STATEMENT_CONST(cfgPtr); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif

  return retVal;
} /* Cry_30_Rh850Icus_RngSeedFinish() */

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_RngGenerate()
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
 */
FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_RngGenerate( P2CONST( void, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) cfgPtr,
                                                                    P2VAR( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) resultPtr,
                                                                    uint32 resultLength)
{
  /* ----- Local Variables ---------------------------------------------- */
  Csm_ReturnType retVal = CSM_E_NOT_OK;

  /* ----- Development Error Checks ------------------------------------- */
  /* #10 Check plausibility of input parameters. */
# if (CRY_30_RH850ICUS_DEV_ERROR_DETECT == STD_ON)
  /* Check if parameter cfgPtr or resultPtr is a Null-Pointer. */
  if ( (cfgPtr == NULL_PTR) || (resultPtr == NULL_PTR) )
  {
    /* No action because no DET */
  }
  else if (Cry_30_Rh850Icus_GetRngWorkSpaceIdxOfRngConfig((P2CONST(Cry_30_Rh850Icus_RngConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR))cfgPtr)
    >= Cry_30_Rh850Icus_GetSizeOfRngWorkSpace())
  {
    /* No action because no DET */
  }
  else
# endif
  /* Following checks are done always, independent on pre-compile switch. */
  /* #15 Check if resultLength is valid. */
  if (resultLength > CRY_30_RH850ICUS_RNG_RND_SIZE)
  {
    /* No action because no DET */
  }
  else
  {
    /* ----- Implementation ----------------------------------------------- */
# if (CRY_30_RH850ICUS_TIMEOUT_API == STD_ON)
    /* #20 If Timeout-API is enabled, inform Timeout-API about current location. */
    Cry_30_Rh850Icus_GetTimeoutApiLocationCalloutOfGeneralOfPCConfig()(CRY_SHE_TO_SERVICE_PRNG_GENERATE, CRY_SHE_TO_SECTION_SINGLE_CALL_SERVICE);
    Cry_30_Rh850Icus_TimeoutApiService = CRY_SHE_TO_SERVICE_PRNG_GENERATE;
# endif
# if ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_OFF )
    SchM_Enter_Cry_30_Rh850Icus_CRY_30_RH850ICUS_EXCLUSIVE_AREA();
    /* #31 Check if local status is IDLE. */
    if (Cry_30_Rh850Icus_RngGenerate_Status == CRY_30_RH850ICUS_STATE_IDLE)
    {
      /* #32 Set internal status state to PENDING START. */
      Cry_30_Rh850Icus_RngGenerate_Status = CRY_30_RH850ICUS_STATE_PENDING_START;
      /* #33 Store parameters to buffer. */
      Cry_30_Rh850Icus_RngGenerate_Buffer.resultPtr = resultPtr;
      Cry_30_Rh850Icus_RngGenerate_Buffer.resultLength = resultLength;
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
    retVal = Cry_30_Rh850Icus_RngGenerateInternal(resultPtr, resultLength); /* SBSW_CRY_FCTCALL_PTRFORWARDING */
# endif
  }

# if (CRY_30_RH850ICUS_DEV_ERROR_DETECT == STD_OFF)
  CRY_30_RH850ICUS_DUMMY_STATEMENT_CONST(cfgPtr); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif

  return retVal;
} /* Cry_30_Rh850Icus_RngGenerate() */

# define CRY_30_RH850ICUS_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#endif /* ( CRY_30_RH850ICUS_RNGCONFIG == STD_ON ) */

/**********************************************************************************************************************
 *  END OF FILE: CRY_30_RH850ICUS_RNG.C
 **********************************************************************************************************************/

