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
/*!        \file  Cry_30_Rh850Icus_KeyWrapSym.c
 *        \brief  Implements the CRY KeyWrapSym API for the ASR CSM.
 *
 *      \details  -
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Refer to the module's header file.
 *********************************************************************************************************************/

#define CRY_30_RH850ICUS_KEYWRAPSYM_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/

#include "Cry_30_Rh850Icus.h"
#include "Csm_Cbk.h"
#include "Cry_30_Rh850Icus_CommonUtil.h"
#include "Cry_30_Rh850Icus_Hw.h"

#if ( CRY_30_RH850ICUS_KEYWRAPSYMCONFIG == STD_ON )
/**********************************************************************************************************************
 *  LOCAL CONSTANT MACROS
 **********************************************************************************************************************/

/* Key Wrap Sym specific service defines */
# define CRY_30_RH850ICUS_KEYWRAPSYM_LENGTH_M1                                    (16u)
# define CRY_30_RH850ICUS_KEYWRAPSYM_LENGTH_M2                                    (32u)
# define CRY_30_RH850ICUS_KEYWRAPSYM_LENGTH_M3                                    (16u)
# define CRY_30_RH850ICUS_KEYWRAPSYM_LENGTH_M4                                    (32u)
# define CRY_30_RH850ICUS_KEYWRAPSYM_LENGTH_M5                                    (16u)

# define CRY_30_RH850ICUS_KEYWRAPSYM_OFFSET_M1                                    (0u)
# define CRY_30_RH850ICUS_KEYWRAPSYM_OFFSET_M2                                    (CRY_30_RH850ICUS_KEYWRAPSYM_LENGTH_M1)
# define CRY_30_RH850ICUS_KEYWRAPSYM_OFFSET_M3                                    (CRY_30_RH850ICUS_KEYWRAPSYM_OFFSET_M2 + CRY_30_RH850ICUS_KEYWRAPSYM_LENGTH_M2)
# define CRY_30_RH850ICUS_KEYWRAPSYM_OFFSET_M4                                    (CRY_30_RH850ICUS_KEYWRAPSYM_OFFSET_M3 + CRY_30_RH850ICUS_KEYWRAPSYM_LENGTH_M3)
# define CRY_30_RH850ICUS_KEYWRAPSYM_OFFSET_M5                                    (CRY_30_RH850ICUS_KEYWRAPSYM_OFFSET_M4 + CRY_30_RH850ICUS_KEYWRAPSYM_LENGTH_M4)

# define CRY_30_RH850ICUS_KEYWRAPSYM_LENGTH_M1M2M3M4M5                            (CRY_30_RH850ICUS_KEYWRAPSYM_OFFSET_M5 + CRY_30_RH850ICUS_KEYWRAPSYM_LENGTH_M5)
# define CRY_30_RH850ICUS_KEYWRAPSYM_LENGTH_M1M2M3                                (CRY_30_RH850ICUS_KEYWRAPSYM_OFFSET_M4)
# define CRY_30_RH850ICUS_KEYWRAPSYM_LENGTH_M4M5                                  (CRY_30_RH850ICUS_KEYWRAPSYM_LENGTH_M4 + CRY_30_RH850ICUS_KEYWRAPSYM_LENGTH_M5)

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
  P2CONST(Cry_30_Rh850Icus_KeyWrapSymConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) contextPtr; /*<! Holds a pointer to the configuration of this service. */
  P2CONST( Csm_SymKeyType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) keyPtr;         /*<! Holds a pointer to a key. The parameter is not used by the CRY. */
  P2CONST( Csm_SymKeyType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) wrappingkeyPtr; /*<! Holds a pointer to a key. The parameter is not used by the CRY. */
  P2VAR( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) dataPtr;                   /*<! Holds a pointer to the memory which will hold the result of the key wrapping. */
  P2VAR( uint32, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) dataLengthPtr;            /*<! Holds a pointer to the memory location in which the length information is stored. */
} Cry_30_Rh850Icus_KeyWrapSym_BufferType;
# endif /* ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_OFF ) */

/**********************************************************************************************************************
 *  LOCAL DATA PROTOTYPES
 **********************************************************************************************************************/

# if ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_OFF )
#  define CRY_30_RH850ICUS_START_SEC_VAR_NOINIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

 /*! Buffer containing the data used during the service execution */
CRY_30_RH850ICUS_LOCAL VAR(Cry_30_Rh850Icus_KeyWrapSym_BufferType, CRY_30_RH850ICUS_VAR_NOINIT) Cry_30_Rh850Icus_KeyWrapSym_Buffer; /* PRQA S 0779 */ /* MD_MSR_5.1_779 */

#  define CRY_30_RH850ICUS_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define CRY_30_RH850ICUS_START_SEC_VAR_NOINIT_8BIT
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! State of the service */
CRY_30_RH850ICUS_LOCAL VAR(uint8, CRY_30_RH850ICUS_VAR_NOINIT) Cry_30_Rh850Icus_KeyWrapSym_Status; /* PRQA S 0779 */ /* MD_MSR_5.1_779 */

#  define CRY_30_RH850ICUS_STOP_SEC_VAR_NOINIT_8BIT
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
# endif /* ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_OFF ) */

/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 **********************************************************************************************************************/

# define CRY_30_RH850ICUS_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_KeyWrapSymStartInternal()
 **********************************************************************************************************************/
/*! \brief         Function starts the symmetric key wrap service.
 *  \details       -
 *  \return        CSM_E_OK     Request successful.
 *  \return        CSM_E_NOT_OK Request failed.
 *  \return        CSM_E_BUSY   Request failed, service is still busy.
 *  \pre           Service is idle.
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CRY_30_RH850ICUS_KEYWRAPSYMCONFIG
 *  \note          It is important to call the Finish-Function of this service after a successful call of this function
 *                 (CSM_E_OK). A call of the Update-Function between them is allowed.
 *                 Attention: If the Finish-function is never called, the SHE is blocked for all other services.
 **********************************************************************************************************************/
CRY_30_RH850ICUS_LOCAL FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_KeyWrapSymStartInternal( void );

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_KeyWrapSymUpdateInternal()
 **********************************************************************************************************************/
/*! \brief         Function updates the symmetric key wrap service.
 *  \details       The function updates the service. The command to export the RAM key is send to the hardware.
 *  \param[in]     dataPtr       Holds a pointer to the memory which will hold the result of the key wrapping.
 *  \param[in,out] dataLengthPtr Holds a pointer to the memory location in which the length information is stored.
 *                               On calling this function, this parameter shall contain the size of the buffer
 *                               provided by dataPtr. When the request has finished successful, the length of the
 *                               computed value is stored.
 *                               Supported values are 64 and 112. The dataPtr contains M1M2M3 if the length is 64,
 *                               and M1M2M3M4M5 if the length is 112.
 *  \return        CSM_E_OK      Request successful.
 *  \return        CSM_E_NOT_OK  Request failed.
 *  \pre           Service is started.
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CRY_30_RH850ICUS_KEYWRAPSYMCONFIG
 *  \note          The driver does not support multiple update calls.
 **********************************************************************************************************************/
CRY_30_RH850ICUS_LOCAL FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_KeyWrapSymUpdateInternal(
  P2VAR( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) dataPtr,
  P2VAR( uint32, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) dataLengthPtr );

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_KeyWrapSymFinishInternal()
 **********************************************************************************************************************/
/*! \brief         Function finishes the symmetric key wrap service.
 *  \details       -
 *  \return        CSM_E_OK     Request successful.
 *  \return        CSM_E_NOT_OK Request failed.
 *  \pre           Service is started.
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE, FALSE (depends on configuration)
 *  \config        CRY_30_RH850ICUS_KEYWRAPSYMCONFIG
 *  \note          This function must only be called one after a succesful call of the corresponding Start-Function of
 *                 this service. It is not allowed to call this function multiple times even if the return value is not
 *                 CSM_E_OK.
 **********************************************************************************************************************/
CRY_30_RH850ICUS_LOCAL FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_KeyWrapSymFinishInternal( void );

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 **********************************************************************************************************************/

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_KeyWrapSymStartInternal()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 */
CRY_30_RH850ICUS_LOCAL FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_KeyWrapSymStartInternal( void )
{
  /* ----- Local Variables ---------------------------------------------- */
  Csm_ReturnType retVal = CSM_E_NOT_OK;

  /* ----- Implementation ----------------------------------------------- */
  /* #10 Check if service is idle (no other service is running). */
  SchM_Enter_Cry_30_Rh850Icus_CRY_30_RH850ICUS_EXCLUSIVE_AREA();
  if ( Cry_30_Rh850Icus_ServiceState == CRY_30_RH850ICUS_SERVICE_IDLE )
  {
    /* #11 Set state to start. */
    Cry_30_Rh850Icus_ServiceState = CRY_30_RH850ICUS_SERVICE_KEYWRAPSYM_START;
    retVal = CSM_E_OK;
  }
  else
  {
    /* #20 If service state is not idle, return CSM_E_BUSY. */
    retVal = CSM_E_BUSY;
  }
  SchM_Exit_Cry_30_Rh850Icus_CRY_30_RH850ICUS_EXCLUSIVE_AREA();

  return retVal;
} /* Cry_30_Rh850Icus_KeyWrapSymStartInternal() */

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_KeyWrapSymUpdateInternal()
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
CRY_30_RH850ICUS_LOCAL FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_KeyWrapSymUpdateInternal(
  P2VAR( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) dataPtr,
  P2VAR( uint32, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) dataLengthPtr ) /* PRQA S 3673 */ /* MD_CRY_3673_POINTERTOCONST */
{
  /* ----- Local Variables ---------------------------------------------- */
  Csm_ReturnType retVal = CSM_E_NOT_OK;

  /* ----- Implementation ----------------------------------------------- */
# if ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_ON )
  /* #10 Check if service has been started. */
  if (Cry_30_Rh850Icus_ServiceState == CRY_30_RH850ICUS_SERVICE_KEYWRAPSYM_START)
# endif
  {
    if ( (*dataLengthPtr == CRY_30_RH850ICUS_KEYWRAPSYM_LENGTH_M1M2M3M4M5) || (*dataLengthPtr == CRY_30_RH850ICUS_KEYWRAPSYM_LENGTH_M1M2M3) )
    {
# if (CRY_30_RH850ICUS_INVALID_MEMORY_DETECTION == STD_ON) /* COV_CRY_INVALID_MEMORY_DETECTION */
      /* #15 If INVALID_MEMORY_DETECTION is enabled: */
      /* #20 ExtensionPart: Call subfunction to check if dataPtr needs to be copied to global buffer. */
      boolean outputNeedsCopy = (Cry_30_Rh850Icus_Hw_IsMemoryValid(dataPtr, *dataLengthPtr) == FALSE); /* SBSW_CRY_FCTCALL_PTRFORWARDING_INVALID_MEMORY */
      P2VAR(uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) outputPtr = dataPtr;
      if (outputNeedsCopy == TRUE)
      {
        outputPtr = (P2VAR(uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR))Cry_30_Rh850Icus_DataBuffer; /* PRQA S 0310 */ /* MD_CRY_0310_ALIGNED_ARRAY */
      }
      /* #30 ExtensionPart: Call subfunction to update the Key Wrap primitive (send command to hw). */
      retVal = Cry_30_Rh850Icus_Hw_KeyWrapSymUpdateInternal((uint8*)outputPtr); /* PRQA S 0310 */ /* MD_CRY_0310_ALIGNED_ARRAY */ /* SBSW_CRY_FCTCALL_PTRFORWARDING_BUFFERED_DATA */
      if (outputNeedsCopy == TRUE)
      {
        Cry_30_Rh850Icus_CopyWordArrayToByteArray(Cry_30_Rh850Icus_DataBuffer, dataPtr, *dataLengthPtr); /* SBSW_CRY_FCTCALL_PTRFORWARDING */
      }
# else
      /* #30 ExtensionPart: Call subfunction to update the Key Wrap primitive (send command to hw). */
      retVal = Cry_30_Rh850Icus_Hw_KeyWrapSymUpdateInternal(dataPtr); /* SBSW_CRY_FCTCALL_PTRFORWARDING_BUFFERED_DATA */
# endif
    }

    /* #40 If no errors occured, set state to Update. */
    if ( retVal == CSM_E_OK )
    {
      Cry_30_Rh850Icus_ServiceState = CRY_30_RH850ICUS_SERVICE_KEYWRAPSYM_UPDATE;
    }
  }

  return retVal;
} /* Cry_30_Rh850Icus_KeyWrapSymUpdateInternal() */

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_KeyWrapSymFinishInternal()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 */
CRY_30_RH850ICUS_LOCAL FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_KeyWrapSymFinishInternal( void )
{
  /* ----- Local Variables ---------------------------------------------- */
  Csm_ReturnType retVal = CSM_E_NOT_OK;

  /* ----- Implementation ----------------------------------------------- */
  /* #10 Check if service has been updated. */
  if (Cry_30_Rh850Icus_ServiceState == CRY_30_RH850ICUS_SERVICE_KEYWRAPSYM_UPDATE)
  {
    retVal = CSM_E_OK;

    /* #20 Send cancel command to SHE. */
    Cry_30_Rh850Icus_CancelCommand();
    /* #30 Reset service state to idle. */
    Cry_30_Rh850Icus_ServiceState = CRY_30_RH850ICUS_SERVICE_IDLE;
  }

  return retVal;
} /* Cry_30_Rh850Icus_KeyWrapSymFinishInternal() */

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 **********************************************************************************************************************/

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_KeyWrapSymInit()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
FUNC( void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_KeyWrapSymInit( void )
{
  /* #10 Asynchronous function handling: Set status state to idle. */
# if ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_OFF )
  Cry_30_Rh850Icus_KeyWrapSym_Status = CRY_30_RH850ICUS_STATE_IDLE;
# endif
} /* Cry_30_Rh850Icus_KeyWrapSymInit() */

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_KeyWrapSymMainFunction()
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
FUNC(void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_KeyWrapSymMainFunction( void )
{
  /* #10 In case of asynchronous service handling: */
# if ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_OFF )
  Csm_ReturnType retVal;

  /* #20 Analyse status state machine. */
  switch(Cry_30_Rh850Icus_KeyWrapSym_Status)
  {
    /* #30 State machine has pending start status. */
    case CRY_30_RH850ICUS_STATE_PENDING_START:
    {
      /* #31 Call internal start service method. */
      retVal = Cry_30_Rh850Icus_KeyWrapSymStartInternal();

      /* #32 If start method was CSM_E_BUSY, hold service in state, for next main loop. */
      if (retVal != CSM_E_BUSY)
      {
        /* #33 Update state if start executed with CSM_E_OK or CSM_E_NOT_OK. */
        Cry_30_Rh850Icus_KeyWrapSym_Status = CRY_30_RH850ICUS_STATE_START;

        /* Note: Internal start function can only return CSM_E_OK or CSM_E_BUSY.
         * If internal start function is extended and there is a reason to return CSM_E_NOT_OK, this needs to be adapted (see other
         * primitive main function constructs.
         */

        /* #34 Notify via callback if start method executed with CSM_E_OK or CSM_E_NOT_OK. */
        Csm_SymKeyWrapSymCallbackNotification(retVal);
      }
      break;
    }
    /* #40 State machine has pending update status. */
    case CRY_30_RH850ICUS_STATE_PENDING_UPDATE:
    {
      /* #41 Call internal update service method. */
      retVal = Cry_30_Rh850Icus_KeyWrapSymUpdateInternal( /* SBSW_CRY_FCTCALL_PTRFORWARDING_BUFFERED */
        Cry_30_Rh850Icus_KeyWrapSym_Buffer.dataPtr,
        Cry_30_Rh850Icus_KeyWrapSym_Buffer.dataLengthPtr );

      /* #42 Set internal status state to next stage depending on the result of the update call. */
      if (retVal == CSM_E_OK)
      {
        Cry_30_Rh850Icus_KeyWrapSym_Status = CRY_30_RH850ICUS_STATE_UPDATE;
      }
      else
      {
        Cry_30_Rh850Icus_KeyWrapSym_Status = CRY_30_RH850ICUS_STATE_START;
      }

      /* #43 Send callback notification. */
      Csm_SymKeyWrapSymCallbackNotification( retVal );
      break;
    }
    /* #50 State machine has pending finish status. */
    case CRY_30_RH850ICUS_STATE_PENDING_FINISH:
    {
      /* #51 Call internal finish service method. */
      retVal = Cry_30_Rh850Icus_KeyWrapSymFinishInternal();

      /* #52 If finish method fails, cancel command on SHE and reset global state (next service can run). */
      if (retVal != CSM_E_OK)
      {
        Cry_30_Rh850Icus_CancelCommand();
        Cry_30_Rh850Icus_ServiceState = CRY_30_RH850ICUS_SERVICE_IDLE;
      }

      /* #53 Set internal status state to IDLE. */
      Cry_30_Rh850Icus_KeyWrapSym_Status = CRY_30_RH850ICUS_STATE_IDLE;

      /* #54 Send callback and finish notification. */
      Csm_SymKeyWrapSymCallbackNotification(retVal);
      Csm_SymKeyWrapSymServiceFinishNotification();
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
} /* Cry_30_Rh850Icus_KeyWrapSymMainFunction() */

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_KeyWrapSymStart()
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
FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_KeyWrapSymStart(
  P2CONST( void, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) cfgPtr,
  P2CONST( Csm_SymKeyType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) keyPtr,
  P2CONST( Csm_SymKeyType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) wrappingkeyPtr)
{
  /* ----- Local Variables ---------------------------------------------- */
  Csm_ReturnType retVal = CSM_E_NOT_OK;

  /* ----- Development Error Checks ------------------------------------- */
  /* #10 Check plausibility of input parameters. */
# if (CRY_30_RH850ICUS_DEV_ERROR_DETECT == STD_ON)
  /* Check if input parameter cfgPtr or keyPtr is a Null-Pointer */
  if ( (cfgPtr == NULL_PTR) || (keyPtr == NULL_PTR) || (wrappingkeyPtr == NULL_PTR) )
  {
    /* No action because no DET */
  }
  else if (Cry_30_Rh850Icus_GetKeyWrapSymWorkSpaceIdxOfKeyWrapSymConfig((P2CONST(Cry_30_Rh850Icus_KeyWrapSymConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR))cfgPtr)
    >= Cry_30_Rh850Icus_GetSizeOfKeyWrapSymWorkSpace())
  {
    /* No action because no DET */
  }
  else
# endif
  {
    /* ----- Implementation ----------------------------------------------- */
# if (CRY_30_RH850ICUS_TIMEOUT_API == STD_ON)
    /* #20 If Timeout-API is enabled, inform Timeout-API about current location. */
    Cry_30_Rh850Icus_GetTimeoutApiLocationCalloutOfGeneralOfPCConfig()(CRY_SHE_TO_SERVICE_KEY_WRAP, CRY_SHE_TO_SECTION_START_SERVICE);
    Cry_30_Rh850Icus_TimeoutApiService = CRY_SHE_TO_SERVICE_KEY_WRAP;
# endif
# if ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_OFF )
    SchM_Enter_Cry_30_Rh850Icus_CRY_30_RH850ICUS_EXCLUSIVE_AREA();
    /* #31 Check if local status is IDLE. */
    if (Cry_30_Rh850Icus_KeyWrapSym_Status == CRY_30_RH850ICUS_STATE_IDLE)
    {
      /* #32 Set internal status state to PENDING START. */
      Cry_30_Rh850Icus_KeyWrapSym_Status = CRY_30_RH850ICUS_STATE_PENDING_START;
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
    retVal = Cry_30_Rh850Icus_KeyWrapSymStartInternal();
# endif
  }

# if (CRY_30_RH850ICUS_DEV_ERROR_DETECT == STD_OFF)
  CRY_30_RH850ICUS_DUMMY_STATEMENT_CONST(cfgPtr); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
  CRY_30_RH850ICUS_DUMMY_STATEMENT_CONST(keyPtr); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
  CRY_30_RH850ICUS_DUMMY_STATEMENT_CONST(wrappingkeyPtr); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif

  return retVal;
} /* Cry_30_Rh850Icus_KeyWrapSymStart() */

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_KeyWrapSymUpdate()
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
FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_KeyWrapSymUpdate(
  P2CONST( void, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) cfgPtr,
  P2VAR( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) dataPtr,
  P2VAR( uint32, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) dataLengthPtr)
{
  /* ----- Local Variables ---------------------------------------------- */
  Csm_ReturnType retVal = CSM_E_NOT_OK;

  /* ----- Development Error Checks ------------------------------------- */
  /* #10 Check plausibility of input parameters. */
# if (CRY_30_RH850ICUS_DEV_ERROR_DETECT == STD_ON)
  /* Check if input parameter cfgPtr or dataPtr or dataLengthPtr is a Null-Pointer */
  if ( (cfgPtr == NULL_PTR) || (dataPtr == NULL_PTR) || (dataLengthPtr == NULL_PTR) )
  {
    /* No action because no DET */
  }
  else if (Cry_30_Rh850Icus_GetKeyWrapSymWorkSpaceIdxOfKeyWrapSymConfig((P2CONST(Cry_30_Rh850Icus_KeyWrapSymConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR))cfgPtr)
    >= Cry_30_Rh850Icus_GetSizeOfKeyWrapSymWorkSpace())
  {
    /* No action because no DET */
  }
  else
# endif
# if (CRY_30_RH850ICUS_INVALID_MEMORY_DETECTION == STD_ON) /* COV_CRY_INVALID_MEMORY_DETECTION */
  /* *  - #15 Check if dataPtr is correct located or if it is possible to copy it in a later step (if INVALID_MEMORY_DETECTION is enabled). */
  if (Cry_30_Rh850Icus_Hw_IsMemoryUsable(dataPtr, *dataLengthPtr) == FALSE) /* SBSW_CRY_FCTCALL_PTRFORWARDING_INVALID_MEMORY */
  {
    /* Nothing to do, retVal initialized with CSM_E_NOT_OK. */
  }
  else
# endif
  {
    /* ----- Implementation ----------------------------------------------- */
# if (CRY_30_RH850ICUS_TIMEOUT_API == STD_ON)
    /* #20 If Timeout-API is enabled, inform Timeout-API about current location. */
    Cry_30_Rh850Icus_GetTimeoutApiLocationCalloutOfGeneralOfPCConfig()(CRY_SHE_TO_SERVICE_KEY_WRAP, CRY_SHE_TO_SECTION_UPDATE_SERVICE);
    Cry_30_Rh850Icus_TimeoutApiService = CRY_SHE_TO_SERVICE_KEY_WRAP;
# endif
# if ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_OFF )
    /* #31 Check if local status is START. */
    if (Cry_30_Rh850Icus_KeyWrapSym_Status == CRY_30_RH850ICUS_STATE_START)
    {
      /* #32 Set internal status state to PENDING UPDATE. */
      Cry_30_Rh850Icus_KeyWrapSym_Status = CRY_30_RH850ICUS_STATE_PENDING_UPDATE;
      /* #33 Store parameters to buffer. */
      Cry_30_Rh850Icus_KeyWrapSym_Buffer.dataPtr = dataPtr;
      Cry_30_Rh850Icus_KeyWrapSym_Buffer.dataLengthPtr = dataLengthPtr;
      /* #34 Always return CSM_E_OK. */
      retVal = CSM_E_OK;
    }
# else
    /* #41 Call the internal update function. */
    retVal = Cry_30_Rh850Icus_KeyWrapSymUpdateInternal(dataPtr, dataLengthPtr); /* SBSW_CRY_FCTCALL_PTRFORWARDING */
# endif
  }

# if (CRY_30_RH850ICUS_DEV_ERROR_DETECT == STD_OFF)
  CRY_30_RH850ICUS_DUMMY_STATEMENT_CONST(cfgPtr); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif

  return retVal;
} /* Cry_30_Rh850Icus_KeyWrapSymUpdate() */

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_KeyWrapSymFinish()
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
FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_KeyWrapSymFinish(
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
  else if (Cry_30_Rh850Icus_GetKeyWrapSymWorkSpaceIdxOfKeyWrapSymConfig((P2CONST(Cry_30_Rh850Icus_KeyWrapSymConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR))cfgPtr)
    >= Cry_30_Rh850Icus_GetSizeOfKeyWrapSymWorkSpace())
  {
    /* No action because no DET */
  }
  else
# endif
  {
    /* ----- Implementation ----------------------------------------------- */
# if (CRY_30_RH850ICUS_TIMEOUT_API == STD_ON)
    /* #20 If Timeout-API is enabled, inform Timeout-API about current location. */
    Cry_30_Rh850Icus_GetTimeoutApiLocationCalloutOfGeneralOfPCConfig()(CRY_SHE_TO_SERVICE_KEY_WRAP, CRY_SHE_TO_SECTION_FINISH_SERVICE);
    Cry_30_Rh850Icus_TimeoutApiService = CRY_SHE_TO_SERVICE_KEY_WRAP;
# endif
# if ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_OFF )
    /* #31 Check if local status is UPDATE or START. */
    if ( (Cry_30_Rh850Icus_KeyWrapSym_Status == CRY_30_RH850ICUS_STATE_UPDATE) || (Cry_30_Rh850Icus_KeyWrapSym_Status == CRY_30_RH850ICUS_STATE_START) )
    {
      /* #32 Set local status to PENDING_FINISH. */
      Cry_30_Rh850Icus_KeyWrapSym_Status = CRY_30_RH850ICUS_STATE_PENDING_FINISH;
      retVal = CSM_E_OK;
    }
# else
    /* #41 Call the internal finish function. */
    retVal = Cry_30_Rh850Icus_KeyWrapSymFinishInternal();
# endif
  }

# if ( CRY_30_RH850ICUS_USE_SYNC_JOB_PROCESSING == STD_ON )
  /* #50 If any error occured, and global state is in start or update, cancel SHE command and set global state to idle (in sync mode). */
  if ((retVal != CSM_E_OK) &&
    ((Cry_30_Rh850Icus_ServiceState == CRY_30_RH850ICUS_SERVICE_KEYWRAPSYM_UPDATE) || (Cry_30_Rh850Icus_ServiceState == CRY_30_RH850ICUS_SERVICE_KEYWRAPSYM_START)))
  {
    Cry_30_Rh850Icus_CancelCommand();
    Cry_30_Rh850Icus_ServiceState = CRY_30_RH850ICUS_SERVICE_IDLE;
  }
# endif

# if (CRY_30_RH850ICUS_DEV_ERROR_DETECT == STD_OFF)
  CRY_30_RH850ICUS_DUMMY_STATEMENT_CONST(cfgPtr); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif

  return retVal;
} /* Cry_30_Rh850Icus_KeyWrapSymFinish() */

# define CRY_30_RH850ICUS_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#endif /* ( CRY_30_RH850ICUS_KEYWRAPSYMCONFIG == STD_ON ) */

/**********************************************************************************************************************
 *  END OF FILE: CRY_30_RH850ICUS_KEYWRAPSYM.C
 **********************************************************************************************************************/

