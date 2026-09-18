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
/*!        \file    Cry_30_Rh850Icus_CommonUtil.c
 *        \brief    Common functions for the SHE Module.
 *
 *      \details    -
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Refer to the module's header file.
 *********************************************************************************************************************/

#define CRY_30_RH850ICUS_COMMONUTIL_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/

#include "Cry_30_Rh850Icus.h"
#include "Cry_30_Rh850Icus_Cfg.h"
#include "Cry_30_Rh850Icus_CommonUtil.h"
#include "Cry_30_Rh850Icus_Hw.h"
#if (CRY_30_RH850ICUS_HARDWARE_ERROR_CODE == STD_ON)
# include "Cry_30_Rh850Icus_Callouts.h"
#endif

/**********************************************************************************************************************
 *  LOCAL CONSTANT MACROS
 **********************************************************************************************************************/

/* Common Util specific defines */
#define CRY_30_RH850ICUS_END_OF_FIRST_KEYPAGE              (CRY_KEYID_RAW_KEY_RAM)
#define CRY_30_RH850ICUS_MAPPED_OFFSET                     (3u)
#define CRY_30_RH850ICUS_MAPPED_OFFSET_SECOND_KEYPAGE      (10u)
#define CRY_30_RH850ICUS_RAW_OFFSET_SECOND_KEYPAGE         (11u)
#define CRY_30_RH850ICUS_USE_SHE_KEY_FLAG                  (1u)

/**********************************************************************************************************************
 *  LOCAL DATA TYPES AND STRUCTURES
 **********************************************************************************************************************/

#if !defined (CRY_30_RH850ICUS_LOCAL) /* COV_CRY_LOCAL */
# define CRY_30_RH850ICUS_LOCAL static
#endif

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 **********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA
 **********************************************************************************************************************/

#define CRY_30_RH850ICUS_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#if ( CRY_30_RH850ICUS_ANY_PRIMITIVE_ENABLED == TRUE)
/*! Global state of all services */
VAR(Cry_30_Rh850Icus_ServiceState_Type, CRY_30_RH850ICUS_VAR_ZERO_INIT) Cry_30_Rh850Icus_ServiceState;
#endif

#define CRY_30_RH850ICUS_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define CRY_30_RH850ICUS_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#if ( CRY_30_RH850ICUS_ANY_PRIMITIVE_ENABLED == TRUE)
# if (CRY_30_RH850ICUS_TIMEOUT_API == STD_ON)
/*! Global Timeout API service */
VAR(Cry_SheTimeoutApiServiceType, CRY_30_RH850ICUS_VAR_NOINIT) Cry_30_Rh850Icus_TimeoutApiService;
# endif
#endif

#if (CRY_30_RH850ICUS_INVALID_MEMORY_DETECTION == STD_ON) /* COV_CRY_INVALID_MEMORY_DETECTION */
VAR(uint32, CRY_30_RH850ICUS_VAR_NOINIT) Cry_30_Rh850Icus_DataBuffer[CRY_30_RH850ICUS_DATA_BUFFER_SIZE/ CRY_30_RH850ICUS_BYTES_PER_WORD];
#endif
VAR(uint32, CRY_30_RH850ICUS_VAR_NOINIT) Cry_30_Rh850Icus_AesBlockBuffer[CRY_30_RH850ICUS_AES128_BLOCKSIZE / CRY_30_RH850ICUS_BYTES_PER_WORD];

#define CRY_30_RH850ICUS_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
*  LOCAL FUNCTION PROTOTYPES
**********************************************************************************************************************/

#define CRY_30_RH850ICUS_START_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#if ( CRY_30_RH850ICUS_ANY_PRIMITIVE_ENABLED == TRUE)

/**********************************************************************************************************************
*  LOCAL FUNCTIONS
**********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 **********************************************************************************************************************/

/**********************************************************************************************************************
* Cry_30_Rh850Icus_ProcessKeyToWorkspace()
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
FUNC(Csm_ReturnType, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_ProcessKeyToWorkspace(
  P2CONST( Csm_SymKeyType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) keyPtr,
  P2VAR( uint32, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) keyId,
  uint32 keyIdType)
{
  /* ----- Local Variables ---------------------------------------------- */
  Csm_ReturnType retVal = CSM_E_NOT_OK;

  /* ----- Implementation ----------------------------------------------- */
  /* #10 If key is a keyId: */
  if (keyPtr->length == CRY_30_RH850ICUS_USE_SHE_KEY_FLAG)
  {
    /* #11 Store first byte of keyPtr->data as key slot number. */
    *keyId = (uint32)(keyPtr->data[0] & 0xFFu); /* SBSW_CRY_WRITE_PTR */
    retVal = CSM_E_OK;
  }
  /* #20 If key is a plain key: */
  else if (keyPtr->length == CRY_30_RH850ICUS_KEYSIZE)
  {
    /* #21 Store RAM key ID as key slot number (mapped or raw dependend on keyIdType). */
    if (keyIdType == CRY_30_RH850ICUS_KEYIDTYPE_RAW)
    {
      *keyId = CRY_KEYID_RAW_KEY_RAM; /* SBSW_CRY_WRITE_PTR */
    }
    else
    {
      *keyId = CRY_KEYID_MAPPED_KEY_RAM; /* SBSW_CRY_WRITE_PTR */
    }

# if (CRY_30_RH850ICUS_INVALID_MEMORY_DETECTION == STD_ON) /* COV_CRY_INVALID_MEMORY_DETECTION */
    {
      /* #22 If INVALID_MEMORY_DETECTION is enabled: */
      P2CONST(uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) inputPtr = (P2VAR(uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR))keyPtr->data; /* PRQA S 0310 */ /* MD_CRY_0310_KEY_DATA */
      /* #23 ExtensionPart: Call subfunction to check if keyPtr->data needs to be copied to global buffer. */
      if (Cry_30_Rh850Icus_Hw_IsMemoryValid((P2VAR(uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR))keyPtr->data, CRY_30_RH850ICUS_KEYSIZE) == FALSE) /* PRQA S 0310 */ /* MD_CRY_0310_KEY_DATA */ /* SBSW_CRY_FCTCALL_PTRFORWARDING_INVALID_MEMORY */
      {
        /* #24 Copy keyPtr->data to global buffer which is correct located in the memory. */
        Cry_30_Rh850Icus_CopyByteArrayToWordArray((P2VAR(uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR))keyPtr->data, Cry_30_Rh850Icus_AesBlockBuffer, CRY_30_RH850ICUS_KEYSIZE); /* PRQA S 0310 */ /* MD_CRY_0310_KEY_DATA */ /* SBSW_CRY_FCTCALL_PTRFORWARDING_BUFFERED_DATA */
        inputPtr = (P2CONST(uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR))Cry_30_Rh850Icus_AesBlockBuffer; /* PRQA S 0310 */ /* MD_CRY_0310_ALIGNED_ARRAY */
      }
      /* #28 Load key data to RAM key slot. */
      retVal = Cry_30_Rh850Icus_Hw_LoadPlainKey((P2CONST(uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR))inputPtr); /* PRQA S 0310 */ /* MD_CRY_0310_ALIGNED_ARRAY */ /* SBSW_CRY_FCTCALL_PTRFORWARDING_BUFFERED_DATA */
    }
# else
    /* #28 Load key data to RAM key slot. */
    retVal = Cry_30_Rh850Icus_Hw_LoadPlainKey((P2CONST(uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR))keyPtr->data); /* PRQA S 0310 */ /* MD_CRY_0310_KEY_DATA */ /* SBSW_CRY_FCTCALL_PTRFORWARDING */
# endif
  }
  else
  {
    /* Nothing do to, retVal has already default initialization value CSM_E_NOT_OK */
  }

  return retVal;
}

/**********************************************************************************************************************
* Cry_30_Rh850Icus_GetRawKeyId()
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
FUNC(uint32, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_GetRawKeyId(uint32 keyId, uint32 keyIdType)
{
  uint32 tmpKeyId;

  /* #10 Check if raw or mapped keyidtype is used. */
  if (keyIdType == CRY_30_RH850ICUS_KEYIDTYPE_MAPPED)
  {
    /* #20 Check if Master ECU key, Mapped Key Ram or keyId on second keypage. */
    if (keyId == CRY_KEYID_MAPPED_MASTER_ECU_KEY)
    {
      tmpKeyId = CRY_KEYID_RAW_MASTER_ECU_KEY;
    }
    else if (keyId == CRY_KEYID_MAPPED_KEY_RAM)
    {
      tmpKeyId = CRY_KEYID_RAW_KEY_RAM;
    }
# if ( CRY_30_RH850ICUS_SECOND_KEYPAGE_SUPPORTED ) /* COV_CRY_EXTENDED_KEY_SUPPORT */
    else if (keyId > CRY_30_RH850ICUS_MAPPED_OFFSET_SECOND_KEYPAGE)     /* Check if second keyslot page shall be used */
    {
      tmpKeyId = (keyId + CRY_30_RH850ICUS_MAPPED_OFFSET) - CRY_30_RH850ICUS_MAPPED_OFFSET_SECOND_KEYPAGE;
    }
# endif
    else
    {
      tmpKeyId = keyId + CRY_30_RH850ICUS_MAPPED_OFFSET;
    }
  }
  else /* keyIdType == CRY_30_RH850ICUS_KEYIDTYPE_RAW */
  {
    tmpKeyId = keyId;
# if ( CRY_30_RH850ICUS_SECOND_KEYPAGE_SUPPORTED ) /* COV_CRY_EXTENDED_KEY_SUPPORT */
    /* #30 Check if keyId is on first or second keypage. */
    if (keyId > CRY_30_RH850ICUS_END_OF_FIRST_KEYPAGE)
    {
      tmpKeyId = keyId - CRY_30_RH850ICUS_RAW_OFFSET_SECOND_KEYPAGE;
    }
# endif
  }

  /* #40 Return determined raw keyId. */
  return tmpKeyId;
}

/**********************************************************************************************************************
 * Cry_30_Rh850Icus_CancelCommand()
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
FUNC( void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_CancelCommand( void )
{

  /* #10 If timeout API is enabled: */
# if (CRY_30_RH850ICUS_TIMEOUT_API == STD_ON)
  /* #11 Prevent recursive call of the cancel command. */
  if (Cry_30_Rh850Icus_TimeoutApiService != CRY_SHE_TO_SERVICE_CANCEL) /* COV_CRY_CANCEL_COMMAND */
  {
    /* #12 Store service which called the cancel command. */
    Cry_SheTimeoutApiServiceType tmpService = Cry_30_Rh850Icus_TimeoutApiService;
    /* #13 Set current service to cancel command to avoid recursion during wait for busy flag. */
    Cry_30_Rh850Icus_GetTimeoutApiLocationCalloutOfGeneralOfPCConfig()(CRY_SHE_TO_SERVICE_CANCEL, CRY_SHE_TO_SECTION_SINGLE_CALL_SERVICE);
    Cry_30_Rh850Icus_TimeoutApiService = CRY_SHE_TO_SERVICE_CANCEL;
# endif

    /* #20 ExtensionPart: Call subfunction to send the cancel command (send command to hw). */
    Cry_30_Rh850Icus_Hw_CancelCommand();

    /* #30 If timeout API is enabled: */
# if (CRY_30_RH850ICUS_TIMEOUT_API == STD_ON)
  /* #31 Restore service which called the cancel command. */
    Cry_30_Rh850Icus_TimeoutApiService = tmpService;
  }
# endif
}

/**********************************************************************************************************************
* Cry_30_Rh850Icus_GetExtKeyFlag()
**********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
*/
FUNC(uint32, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_GetExtKeyFlag(uint32 keyId, uint32 keyIdType)
{
  /* #10 If keyId is located on first keypage return 0. */
  uint32 flagKeyMd = 0u;

# if ( CRY_30_RH850ICUS_SECOND_KEYPAGE_SUPPORTED ) /* COV_CRY_EXTENDED_KEY_SUPPORT */
  if (keyIdType == CRY_30_RH850ICUS_KEYIDTYPE_MAPPED)
  {
    if ( (keyId > CRY_30_RH850ICUS_MAPPED_OFFSET_SECOND_KEYPAGE)     /* Check if second keyslot page shall be used */
      && (keyId != CRY_KEYID_MAPPED_MASTER_ECU_KEY) )
    {
      /* #20 If keyId is located on second keypage return 1. */
      flagKeyMd = 1u;
    }
  }
  else /* keyIdType == CRY_30_RH850ICUS_KEYIDTYPE_RAW */
  {
    if (keyId > CRY_30_RH850ICUS_END_OF_FIRST_KEYPAGE)
    {
      /* #20 If keyId is located on second keypage return 1. */
      flagKeyMd = 1u;
    }
  }
# endif

  return flagKeyMd;
}

/**********************************************************************************************************************
* Cry_30_Rh850Icus_CopyByteArrayToWordArray()
**********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
*/
FUNC(void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_CopyByteArrayToWordArray(
  P2CONST( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) input,
  P2VAR( uint32, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) output,
  uint32 length)
{
  uint32_least i;

  for (i = 0u; i < length; i++)
  {
    ((uint8*)output)[i] = input[i]; /* PRQA S 0310 */ /* MD_CRY_0310_COPY_ARRAY */ /* SBSW_CRY_WRITE_PTR_BY_SIZE */
  }

  return;
}

/**********************************************************************************************************************
* Cry_30_Rh850Icus_CopyWordArrayToByteArray()
**********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
*/
FUNC(void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_CopyWordArrayToByteArray(
  P2CONST( uint32, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) input,
  P2VAR( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) output,
  uint32 length)
{
  uint32_least i;

  for (i = 0u; i < length; i++)
  {
    output[i] = ((const uint8*)input)[i]; /* PRQA S 0310 */ /* MD_CRY_0310_COPY_ARRAY */ /* SBSW_CRY_WRITE_PTR_BY_SIZE */
  }

  return;
}

#endif

#define CRY_30_RH850ICUS_STOP_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  END OF FILE: CRY_30_RH850ICUS_COMMONUTIL.C
 *********************************************************************************************************************/

