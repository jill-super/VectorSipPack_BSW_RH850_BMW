/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2017 by Vector Informatik GmbH.                                              All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/*!        \file  Cry_30_Rh850Icus.c
 *        \brief  Implements the CRY API for the SHE.
 *
 *      \details  -
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

#define CRY_30_RH850ICUS_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

#include "Cry_30_Rh850Icus.h"
#include "Cry_30_Rh850Icus_CommonUtil.h"
#include "Cry_30_Rh850Icus_Hw.h"

/**********************************************************************************************************************
 *  VERSION CHECK
 *********************************************************************************************************************/

/* vendor specific version information is BCD coded */
#if (  (CRY_30_RH850ICUS_SW_MAJOR_VERSION != (0x02)) \
    || (CRY_30_RH850ICUS_SW_MINOR_VERSION != (0x03)) \
    || (CRY_30_RH850ICUS_SW_PATCH_VERSION != (0x01)) )
# error "Vendor specific version numbers of Cry_30_Rh850Icus.c and Cry_30_Rh850Icus.h are inconsistent"
#endif

/**********************************************************************************************************************
 *  LOCAL CONSTANT MACROS
 *********************************************************************************************************************/
#if !defined (CRY_30_RH850ICUS_LOCAL) /* COV_CRY_LOCAL */
# define CRY_30_RH850ICUS_LOCAL              static
#endif

#if !defined (CRY_30_RH850ICUS_LOCAL_INLINE) /* COV_CRY_LOCAL_INLINE */
# define CRY_30_RH850ICUS_LOCAL_INLINE       LOCAL_INLINE
#endif

#define CRY_30_RH850ICUS_SYM_KEY_SIZE        (CSM_MAX_ALIGN_SCALAR_TYPE / CRY_30_RH850ICUS_BITS_PER_BYTE * CSM_SYM_KEY_MAX_SIZE)

#if (CRY_30_RH850ICUS_ANY_PRIMITIVE_ENABLED == TRUE)
# if ( CRY_30_RH850ICUS_SYM_KEY_SIZE < CRY_30_RH850ICUS_KEYSIZE) /* COV_CRY_KEY_ARRAY_SIZE */
#  error "The keysize of the symmetric keys is not configured correctly. It has to be set to at least 16 bytes."
# endif
#endif

/**********************************************************************************************************************
 *  LOCAL DATA TYPES AND STRUCTURES
 **********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA PROTOTYPES
 **********************************************************************************************************************/

#define CRY_30_RH850ICUS_START_SEC_CONST_8BIT
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#if ( (CRY_30_RH850ICUS_SELF_TEST == STD_ON) && ( CRY_30_RH850ICUS_CMACAES128VERCONFIG == STD_ON ) )

/* Test vector from SHE Specification (Example 1) */

VAR(uint8, CRY_30_RH850ICUS_CONST) Cry_30_Rh850Icus_SelfTest_Key[16] =
{
  0x2Bu, 0x7Eu, 0x15u, 0x16u, 0x28u, 0xAEu, 0xD2u, 0xA6u, 0xABu, 0xF7u, 0x15u, 0x88u, 0x09u, 0xCFu, 0x4Fu, 0x3Cu
};

VAR(uint8, CRY_30_RH850ICUS_CONST) Cry_30_Rh850Icus_SelfTest_Msg[16] =
{
  0x6Bu, 0xC1u, 0xBEu, 0xE2u, 0x2Eu, 0x40u, 0x9Fu, 0x96u, 0xE9u, 0x3Du, 0x7Eu, 0x11u, 0x73u, 0x93u, 0x17u, 0x2Au
};

VAR(uint8, CRY_30_RH850ICUS_CONST) Cry_30_Rh850Icus_SelfTest_Mac[16] =
{
  0x07u, 0x0Au, 0x16u, 0xB4u, 0x6Bu, 0x4Du, 0x41u, 0x44u, 0xF7u, 0x9Bu, 0xDDu, 0x9Du, 0xD0u, 0x4Au, 0x28u, 0x7Cu
};

# if (CRY_30_RH850ICUS_SELF_TEST_HARDWARE_SUPPORT == STD_OFF) /* COV_CRY_SELF_TEST */
VAR(uint8, CRY_30_RH850ICUS_CONST) Cry_30_Rh850Icus_SelfTest_InvalidMac[16] =
{
  0x07u, 0x0Au, 0x16u, 0xB4u, 0x6Bu, 0x4Du, 0x41u, 0x44u, 0xF7u, 0x9Bu, 0xDDu, 0x9Du, 0xD0u, 0x4Au, 0x28u, 0x7Du
};
# endif

#endif

#define CRY_30_RH850ICUS_STOP_SEC_CONST_8BIT
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

#define CRY_30_RH850ICUS_START_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 **********************************************************************************************************************/

/**********************************************************************************************************************
 * Cry_30_Rh850Icus_Init()
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
FUNC (void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_Init( void )
{
  Csm_ReturnType status = CSM_E_OK;

  /* #10 Call subfunction to initialize the hardware specific parts. */
  status = Cry_30_Rh850Icus_Hw_Init();

  if (status == CSM_E_OK) /* COV_CRY_HW_INIT */
  {
    /* #11 Initialize AES-128 encrypt (if configured). */
#if ( CRY_30_RH850ICUS_AESENCRYPT128CONFIG == STD_ON )
    Cry_30_Rh850Icus_AesEncrypt128Init();
#endif

    /* #12 Initialize AES-128 decrypt (if configured). */
#if ( CRY_30_RH850ICUS_AESDECRYPT128CONFIG == STD_ON )
    Cry_30_Rh850Icus_AesDecrypt128Init();
#endif

    /* #13 Initialize CMAC generation (if configured). */
#if ( CRY_30_RH850ICUS_CMACAES128GENCONFIG == STD_ON )
    Cry_30_Rh850Icus_CmacAes128GenInit();
#endif

    /* #14 Initialize CMAC verification (if configured). */
#if ( CRY_30_RH850ICUS_CMACAES128VERCONFIG == STD_ON )
    Cry_30_Rh850Icus_CmacAes128VerInit();
#endif

    /* #15 Initialize Pseudo Random Number Generator (if configured). */
#if ( CRY_30_RH850ICUS_RNGCONFIG == STD_ON )
    Cry_30_Rh850Icus_RngInit();
#endif

    /* #16 Initialize KeyExtract (if configured). */
#if ( CRY_30_RH850ICUS_KEYEXTRACTCONFIG == STD_ON )
    Cry_30_Rh850Icus_KeyExtractInit();
#endif

    /* #17 Initialize KeyWrapSym (if configured). */
#if ( CRY_30_RH850ICUS_KEYWRAPSYMCONFIG == STD_ON )
    Cry_30_Rh850Icus_KeyWrapSymInit();
#endif

    /* #20 If self test is enabled, check if the self test was successful or not. */
# if ( (CRY_30_RH850ICUS_SELF_TEST == STD_ON) && ( CRY_30_RH850ICUS_CMACAES128VERCONFIG == STD_ON ) )
    if( Cry_30_Rh850Icus_SelfTest() == CSM_E_OK) /* COV_CRY_SELF_TEST */
# endif
    {
#if ( CRY_30_RH850ICUS_ANY_PRIMITIVE_ENABLED == TRUE)
      /* #30 In case any service configuration is enabled: Set global service state machine to idle. */
      Cry_30_Rh850Icus_ServiceState = CRY_30_RH850ICUS_SERVICE_IDLE;
#endif

      /* #31 In case any service configuration is enabled: Set global timeout api service to undefined. */
#if ( CRY_30_RH850ICUS_ANY_PRIMITIVE_ENABLED == TRUE)
# if (CRY_30_RH850ICUS_TIMEOUT_API == STD_ON)
      Cry_30_Rh850Icus_TimeoutApiService = CRY_SHE_TO_SERVICE_UNDEFINED;
# endif
#endif
    }
  }
} /* Cry_30_Rh850Icus_Init() */ /* PRQA S 6050 */ /* MD_MSR_STCAL */

/**********************************************************************************************************************
 * Cry_30_Rh850Icus_InitMemory()
**********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
FUNC (void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_InitMemory( void )
{
  /* #10 In case any service configuration is enabled: Set global ServiceState to uninitialized. */
#if ( CRY_30_RH850ICUS_ANY_PRIMITIVE_ENABLED == TRUE)
  Cry_30_Rh850Icus_ServiceState = CRY_30_RH850ICUS_SERVICE_UNINITIALIZED;
#endif
}

#if ( CRY_30_RH850ICUS_VERSION_INFO_API == STD_ON )
/**********************************************************************************************************************
 * Cry_30_Rh850Icus_GetVersionInfo
**********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 */
FUNC( void, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_GetVersionInfo( P2VAR( Std_VersionInfoType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) cryVerInfoPtr )
{
  /* #20 Check that the passed parameter is not a Null Pointer. */
# if (CRY_30_RH850ICUS_DEV_ERROR_DETECT == STD_ON)
  if( cryVerInfoPtr != NULL_PTR )
# endif
  {
    /* #21 Pass the Cry_30_Rh850Icus version info from component header to the Std_VersionInfoType Pointer. */
    cryVerInfoPtr->vendorID = (uint16)CRY_30_RH850ICUS_VENDOR_ID; /* SBSW_CRY_WRITE_PTR */
    cryVerInfoPtr->moduleID = (uint8)CRY_30_RH850ICUS_MODULE_ID; /* SBSW_CRY_WRITE_PTR */
    cryVerInfoPtr->sw_major_version = (uint8)CRY_30_RH850ICUS_SW_MAJOR_VERSION; /* SBSW_CRY_WRITE_PTR */
    cryVerInfoPtr->sw_minor_version = (uint8)CRY_30_RH850ICUS_SW_MINOR_VERSION; /* SBSW_CRY_WRITE_PTR */
    cryVerInfoPtr->sw_patch_version = (uint8)CRY_30_RH850ICUS_SW_PATCH_VERSION; /* SBSW_CRY_WRITE_PTR */
  }
}
#endif /* ( CRY_30_RH850ICUS_VERSION_INFO_API == STD_ON ) */

#if ( (CRY_30_RH850ICUS_SELF_TEST == STD_ON) && ( CRY_30_RH850ICUS_CMACAES128VERCONFIG == STD_ON ) )
/**********************************************************************************************************************
*  Cry_30_Rh850Icus_SelfTest()
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
*/
FUNC(Csm_ReturnType, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_SelfTest(void)
{
  Csm_ReturnType retVal = CSM_E_NOT_OK;

  Cry_30_Rh850Icus_ServiceState_Type oldServiceState;

  /* ----- Implementation ----------------------------------------------- */
  /* #10 Check if service is idle (no other service is running) or uninitialized. */
  SchM_Enter_Cry_30_Rh850Icus_CRY_30_RH850ICUS_EXCLUSIVE_AREA();

  oldServiceState = Cry_30_Rh850Icus_ServiceState;

  if ((Cry_30_Rh850Icus_ServiceState == CRY_30_RH850ICUS_SERVICE_IDLE)
    || (Cry_30_Rh850Icus_ServiceState == CRY_30_RH850ICUS_SERVICE_UNINITIALIZED))
  {
    /* #20 Set state to update. */
    Cry_30_Rh850Icus_ServiceState = CRY_30_RH850ICUS_SERVICE_CMACAES128VER_UPDATE;
    SchM_Exit_Cry_30_Rh850Icus_CRY_30_RH850ICUS_EXCLUSIVE_AREA();

    /* #30 If self test hardware support enabled: */
# if (CRY_30_RH850ICUS_SELF_TEST_HARDWARE_SUPPORT == STD_ON) /* COV_CRY_SELF_TEST_HARDWARE_SUPPORT */
    /* #40 Do self test with hardware support */
    retVal = Cry_30_Rh850Icus_Hw_SelfTest();
# else
    /* #50 If self test hardware support disabled: */
    {
      Cry_30_Rh850Icus_CmacAes128VerConfigType context;
      Cry_30_Rh850Icus_CmacAes128VerWorkSpaceType workspace;
      Csm_VerifyResultType result;

      /* #51 Prepare a temporary context and workspace to do a CMAC verification (RAW with MAC length in bytes). */
      context.KeyIdTypeOfCmacAes128VerConfig = CRY_30_RH850ICUS_KEYIDTYPE_RAW;
      context.LengthInBytesOfCmacAes128VerConfig = TRUE;
      workspace.dataPtr = Cry_30_Rh850Icus_SelfTest_Msg;
      workspace.dataLength = sizeof(Cry_30_Rh850Icus_SelfTest_Msg);
      workspace.keyID = CRY_KEYID_RAW_KEY_RAM;

      /* #52 Load test key into RAM key slot. */
      retVal = Cry_30_Rh850Icus_Hw_LoadPlainKey(Cry_30_Rh850Icus_SelfTest_Key); /* COV_CRY_SELF_TEST */ /* SBSW_CRY_FCTCALL_LOCALVAR */
      if (retVal == CSM_E_OK) /* COV_CRY_SELF_TEST */
      {
        /* #53 Verify valid CMAC and check if verification has passed. */
        retVal = Cry_30_Rh850Icus_Hw_CmacAes128VerFinishInternal(&context, &workspace, Cry_30_Rh850Icus_SelfTest_Mac, 16u, &result); /* SBSW_CRY_FCTCALL_LOCALVAR_PTRFORWARDING */
        if ((retVal == CSM_E_OK) && (result == CSM_E_VER_NOT_OK)) /* COV_CRY_SELF_TEST */
        {
          retVal = CSM_E_NOT_OK;
        }
      }

      if (retVal == CSM_E_OK) /* COV_CRY_SELF_TEST */
      {
        /* #55 Verify invalid CMAC and check if verification has failed. */
        retVal = Cry_30_Rh850Icus_Hw_CmacAes128VerFinishInternal(&context, &workspace, Cry_30_Rh850Icus_SelfTest_InvalidMac, 16u, &result); /* SBSW_CRY_FCTCALL_LOCALVAR_PTRFORWARDING */
        if ((retVal == CSM_E_OK) && (result == CSM_E_VER_OK)) /* COV_CRY_SELF_TEST */
        {
          retVal = CSM_E_NOT_OK;
        }
      }
    }
# endif

    /* #60 Set state to old state again. */
    Cry_30_Rh850Icus_ServiceState = oldServiceState;
  }
  else
  {
    SchM_Exit_Cry_30_Rh850Icus_CRY_30_RH850ICUS_EXCLUSIVE_AREA();
    /* #70 If service state is not idle, return CSM_E_BUSY. */
    retVal = CSM_E_BUSY;
  }

  /* #80 Return if self test has been successful. */
  return retVal;
} /* PRQA S 6080 */ /* MD_MSR_STMIF */ /* Cry_30_Rh850Icus_SelfTest() */
#endif

/**********************************************************************************************************************
* Module specific MISRA deviations
*********************************************************************************************************************/
/* module specific MISRA deviations:

MD_CRY_3673_POINTERTOCONST:
Reason:       Required by API specification, that parameter is not a const pointer.
Risk:         Not optimized code.
Prevention:   Covered by code review.

MD_CRY_0310_KEY_DATA:
Reason:       The array which contains the key material inside the key structure is of type Csm_AlignType which can be uint8, uint16 or uint32. It must be casted to an uint8 pointer.
Risk:         Invalid memory access.
Prevention:   Covered by code review and test.

MD_CRY_0310_ALIGNED_ARRAY:
Reason:       The array located in the workspace buffer or the local allocated array (e.g. Initialization vector or CMAC, local copy of seed data) is of type uint32 to enforce alignment to uint32. The array is accessed byte wise.
Risk:         Invalid memory access.
Prevention:   Covered by code review and test.

MD_CRY_0310_COPY_ARRAY:
Reason:       The arrays are of type uint32, to make sure they are aligned. To fill and read those arrays, a cast is needed.
Risk:         Invalid memory access.
Prevention:   Covered by code review and test.

MD_CRY_3218_GLOBAL_VAR:
Reason:       On some hardware platforms it must be possible to to put the array to a specific memory location (e.g. global RAM).
Risk:         Unnecessary allocated memory
Prevention:   Covered by code review and test.

*/

/* SBSW_JUSTIFICATION_BEGIN

\ID SBSW_CRY_FCTCALL_PTRFORWARDING
\DESCRIPTION    The function is called by forwarding passed pointers.
\COUNTERMEASURE \N  The pointer is forwarded and it is assumed that the original caller ensures that the passed pointer is valid and of the same type and needed length.

\ID SBSW_CRY_FCTCALL_PTRFORWARDING_BUFFERED
\DESCRIPTION    The function is only called if buffers are written before with pointers passed by caller.
\COUNTERMEASURE \N  The pointer is forwarded and it is assumed that the original caller ensures that the passed pointer is valid and of the same type and needed length.

\ID SBSW_CRY_FCTCALL_PTRFORWARDING_BUFFERED_DATA
\DESCRIPTION    The function is called by forwarding passed pointers and one or more pointers to a data buffer.
\COUNTERMEASURE \N  The pointer is forwarded and it is assumed that the original caller ensures that the passed pointer is valid and of the same type and needed length. Also it's checked that the data buffer size is big enough to hold the input data and the result.

\ID SBSW_CRY_FCTCALL_PTRFORWARDING_WORKSPACE
\DESCRIPTION    The function is called by forwarding passed pointers and one or more pointers to a data buffer in the workspace.
\COUNTERMEASURE \N  The pointer is forwarded and it is assumed that the original caller ensures that the passed pointer is valid and of the same type and needed length. Also it's checked that the size of the workspace data buffer is big enough to hold the input data and the result.

\ID SBSW_CRY_FCTCALL_PTRFORWARDING_INVALID_MEMORY
\DESCRIPTION    The function is called by forwarding passed pointers.
\COUNTERMEASURE \N  The pointer is forwarded and it is ensured that the pointer is only analysed if it is valid for the hardware platform. There is not access to the data pointed by the pointer.

\ID SBSW_CRY_WRITE_WORKSPACE
\DESCRIPTION    Write Access to Workspace by determined pointer.
\COUNTERMEASURE \R Workspace address is determined by getting index of passed config pointer. This index is checked against the size of available workspaces in the start function.

\ID SBSW_CRY_WRITE_PTR
\DESCRIPTION    The function writes to the passed pointer.
\COUNTERMEASURE \N The caller ensures that the pointer passed to the function is valid and of same type.

\ID SBSW_CRY_WRITE_PTR_BY_SIZE
\DESCRIPTION    The function writes to a passed array with a passed size.
\COUNTERMEASURE \R The caller ensures that the pointer passed to the function is valid and has at least the size of the passed length parameter. Writing loop is limited to the passed length parameter.

\ID SBSW_CRY_WRITE_WORKSPACE_ARRAY
\DESCRIPTION    The function writes to the array with a fixed index.
\COUNTERMEASURE \N Since index is fixed it is ensured that is in range of the array size of the workspace.

\ID SBSW_CRY_FCTCALL_LOCALVAR
\DESCRIPTION    The function is called with an address to a local variable.
\COUNTERMEASURE \N Address of a local stack variable is valid.

\ID SBSW_CRY_FCTCALL_LOCALVAR_PTRFORWARDING
\DESCRIPTION    The function is called with an address to a local variable and forwards passed pointers.
\COUNTERMEASURE \N The pointer is either forwarded and assumed to be valid or it is a local stack variable.

SBSW_JUSTIFICATION_END */

/* COV_JUSTIFICATION_BEGIN

\ID COV_CRY_LOCAL
\ACCEPT TX
\REASON Only ensures that CRY_LOCAL is always set.
\PREVENTION Covered by code review

\ID COV_CRY_LOCAL_INLINE
\ACCEPT TX
\REASON Only ensures that CRY_LOCAL_INLINE is always set.
\PREVENTION Covered by code review

\ID COV_CRY_HW_INIT
\ACCEPT TX
\REASON Not all drivers have to initialize the hardware. Therefore some of them will always return CSM_E_OK.
\PREVENTION Covered by code review

\ID COV_CRY_INVALID_MEMORY_DETECTION
\ACCEPT TX
\ACCEPT XF
\REASON Not all hardware platforms need data pointers which point to aligned data or data in a special memory region (e.g. global RAM). This is not a configurable option. It is dependent on the hardware platform.
\PREVENTION Covered by code review

\ID COV_CRY_EXTENDED_KEY_SUPPORT
\ACCEPT TX
\ACCEPT XF
\REASON Not all hardware platforms support the second key page. This is not always a configurable option. It is dependent on the hardware platform.
\PREVENTION Covered by code review

\ID COV_CRY_CANCEL_COMMAND
\ACCEPT TX
\REASON Not all hardware platforms support cancelling the cancel command.
\PREVENTION Covered by code review

\ID COV_CRY_KEY_ARRAY_SIZE
\ACCEPT XF
\REASON The tests can not be executed when the array for the key in the Csm_SymKeyType is too small to hold a symmetric key.
\PREVENTION Covered by code review

\ID COV_CRY_SELF_TEST
\ACCEPT TX
\ACCEPT XF tx xf
\REASON No error can be stimulated
\PREVENTION Covered by code review and tests

\ID COV_CRY_SELF_TEST_HARDWARE_SUPPORT
\ACCEPT XF
\REASON Not all hardware platforms support commands for performing a self check.
\PREVENTION Covered by code review and tests

COV_JUSTIFICATION_END */

/**********************************************************************************************************************
 *  END OF FILE: CRY_30_RH850ICUS.C
 *********************************************************************************************************************/