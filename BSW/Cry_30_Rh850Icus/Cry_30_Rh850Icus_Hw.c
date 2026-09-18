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
/*!        \file Cry_30_Rh850Icus_Hw.c
 *        \brief  Implements the hardware specific parts for the Cry (not core parts).
 *
 *      \details  -
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Refer to the module's header file.
 *********************************************************************************************************************/

#define CRY_30_RH850ICUS_HW_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

#include "Cry_30_Rh850Icus.h"
#include "Cry_30_Rh850Icus_Hw.h"
#include "Cry_30_Rh850Icus_CommonUtil.h"

#if ( (CRY_30_RH850ICUS_DATA_FLASH_SYNCHRONISATION == STD_ON) \
   || (CRY_30_RH850ICUS_DATA_FLASH_CONTROL == STD_ON) )
# include "Cry_30_Rh850Icus_Callouts.h"
#endif

/**********************************************************************************************************************
 *  LOCAL CONSTANT MACROS
 **********************************************************************************************************************/

#if !defined (CRY_30_RH850ICUS_LOCAL) /* COV_CRY_LOCAL */
# define CRY_30_RH850ICUS_LOCAL                                                  static
#endif

#define CRY_30_RH850ICUS_AESDECRYPT128_IVBLOCK                                   (1u)

#define CRY_30_RH850ICUS_AESENCRYPT128_IVBLOCK                                   (1u)

#define CRY_30_RH850ICUS_CMACAES128_BLOCKSIZE                                    (CRY_30_RH850ICUS_AES128_BLOCKSIZE)

#define CRY_30_RH850ICUS_CMACAES128VER_VERIFICATION_STATUS_OFFSET                (0u)
#define CRY_30_RH850ICUS_CMACAES128VER_VERIFICATION_STATUS_MASK                  (0x01u)

#define CRY_30_RH850ICUS_LENGTH_M1                                               (16u)
#define CRY_30_RH850ICUS_LENGTH_M2                                               (32u)
#define CRY_30_RH850ICUS_LENGTH_M3                                               (16u)
#define CRY_30_RH850ICUS_LENGTH_M4                                               (32u)
#define CRY_30_RH850ICUS_LENGTH_M5                                               (16u)

#define CRY_30_RH850ICUS_OFFSET_M1                                               (0u)
#define CRY_30_RH850ICUS_OFFSET_M2                                               (CRY_30_RH850ICUS_LENGTH_M1)
#define CRY_30_RH850ICUS_OFFSET_M3                                               (CRY_30_RH850ICUS_OFFSET_M2 + CRY_30_RH850ICUS_LENGTH_M2)
#define CRY_30_RH850ICUS_OFFSET_M4                                               (CRY_30_RH850ICUS_OFFSET_M3 + CRY_30_RH850ICUS_LENGTH_M3)
#define CRY_30_RH850ICUS_OFFSET_M5                                               (CRY_30_RH850ICUS_OFFSET_M4 + CRY_30_RH850ICUS_LENGTH_M4)

#define CRY_30_RH850ICUS_BLOCKSIZE_SHIFT_DIV                                     4
#define CRY_30_RH850ICUS_BITS_PER_BYTE_SHIFT_DIV                                 3

#if (CRY_30_RH850ICUS_FHVE_SUPPORT == STD_ON)
 /* Value for: Programming, erasure, and blank checking are enabled. */
# define CRY_30_RH850ICUS_ENABLE_FLASH_ACCESS                                    (0x00000001u)
#endif
/**********************************************************************************************************************
 *  LOCAL DATA PROTOTYPES
 **********************************************************************************************************************/

#define CRY_30_RH850ICUS_START_SEC_VAR_NOINIT_32BIT
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#if (CRY_30_RH850ICUS_FHVE_SUPPORT == STD_ON)
CRY_30_RH850ICUS_LOCAL VAR(uint32, CRY_30_RH850ICUS_VAR_NOINIT) Cry_30_Rh850Icus_FHVE3Backup;
CRY_30_RH850ICUS_LOCAL VAR(uint32, CRY_30_RH850ICUS_VAR_NOINIT) Cry_30_Rh850Icus_FHVE15Backup;
#endif

#define CRY_30_RH850ICUS_STOP_SEC_VAR_NOINIT_32BIT
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 **********************************************************************************************************************/

#define CRY_30_RH850ICUS_START_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#if ( CRY_30_RH850ICUS_ANY_PRIMITIVE_ENABLED == TRUE)

/**********************************************************************************************************************
 * Cry_30_Rh850Icus_SwapWord
 **********************************************************************************************************************/
/*! \brief        The Cry_30_Rh850Icus_SwapWord function swaps a word and copies it back to the given pointer
 *  \param[in]    source       Holds the value which should be swapped.
 *  \return       Value of the swapped word.
 *  \details      -
 *  \reentrant    FALSE
 *  \pre          No Precondition
 *  \synchronous  TRUE
 *  \context      TASK
 **********************************************************************************************************************/
CRY_30_RH850ICUS_LOCAL FUNC(uint32, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_SwapWord(uint32 source);

/**********************************************************************************************************************
 * Cry_30_Rh850Icus_ByteToSwappedWord()
 **********************************************************************************************************************/
/*! \brief        The Cry_30_Rh850Icus_ByteToSwappedWord function swaps a byte array and returns the word representation.
 *  \param[in]    source       Holds a pointer to the memory location which holds the array with 4 bytes
 *                             which should be swapped.
 *  \return       Value of the swapped word.
 *  \details      -
 *  \reentrant    FALSE
 *  \pre          No Precondition
 *  \synchronous  TRUE
 *  \context      TASK
 **********************************************************************************************************************/
CRY_30_RH850ICUS_LOCAL FUNC(uint32, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_ByteToSwappedWord(P2CONST(uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) source);

/**********************************************************************************************************************
 * Cry_30_Rh850Icus_SwappedWordToByte()
 **********************************************************************************************************************/
/*! \brief        The Cry_30_Rh850Icus_SwappedWordToByte function swaps a word and copies it to a byte array
 *  \param[in]    source       Holds a pointer to the memory location which holds the word
 *                             which should be swapped.
 *  \param[out]   destination  Holds a pointer to the memory location which will hold the array with the 4 swapped bytes.
 *  \details      -
 *  \reentrant    FALSE
 *  \pre          No Precondition
 *  \synchronous  TRUE
 *  \context      TASK
 **********************************************************************************************************************/
CRY_30_RH850ICUS_LOCAL FUNC(void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_SwappedWordToByte(uint32 source, P2VAR(uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) destination);

/**********************************************************************************************************************
 * Cry_30_Rh850Icus_WaitBusyFlag()
 **********************************************************************************************************************/
/*! \brief        The Cry_30_Rh850Icus_WaitBusyFlag function waits until the BUSY flag is cleared.
 *  \details      -
 *  \reentrant    FALSE
 *  \pre          No Precondition
 *  \synchronous  TRUE
 *  \context      TASK
 **********************************************************************************************************************/
CRY_30_RH850ICUS_LOCAL FUNC(void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_WaitBusyFlag(void);

/**********************************************************************************************************************
 * Cry_30_Rh850Icus_WriteData()
 **********************************************************************************************************************/
/*! \brief        The Cry_30_Rh850Icus_WriteData function writes 16 Byte from the pointer to the ICUS.
 *  \param[in]    data           Holds a pointer to the memory location which will hold the data (16 Byte) for the ICUS
 *  \details      -
 *  \reentrant    FALSE
 *  \pre          SHE expects to receive data
 *  \synchronous  TRUE
 *  \context      TASK
 **********************************************************************************************************************/
CRY_30_RH850ICUS_LOCAL FUNC(void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_WriteData(P2CONST(uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) data);

/**********************************************************************************************************************
 * Cry_30_Rh850Icus_ReadData()
 **********************************************************************************************************************/
/*! \brief        The Cry_30_Rh850Icus_ReadData function reads 16 Byte from the ICUS and writes them to the pointer.
 *  \param[out]   data          Holds a pointer to the memory location which will hold the data (16 Byte) from ICUS
 *  \details      -
 *  \reentrant    FALSE
 *  \pre          SHE wants to write data
 *  \synchronous  TRUE
 *  \context      TASK
 **********************************************************************************************************************/
CRY_30_RH850ICUS_LOCAL FUNC(void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_ReadData(P2VAR(uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) data);

/**********************************************************************************************************************
 * Cry_30_Rh850Icus_SendCommand()
 **********************************************************************************************************************/
/*! \brief        The Cry_30_Rh850Icus_SendCommand sends a command to the ICU.
 *  \param[in]    cmd           Value of the Command.
 *  \param[in]    keyId         Id of the key used with to command.
 *                              If the command does not need a keyid or keymd flag, set the value to 0x00.
 *  \param[in]    keyIdType     Specifies in which way the keyid is interpreted.
 *  \details      -
 *  \reentrant    FALSE
 *  \pre          No Precondition
 *  \synchronous  TRUE
 *  \context      TASK
 **********************************************************************************************************************/
CRY_30_RH850ICUS_LOCAL FUNC(void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_SendCommand(uint32 cmd, uint32 keyId, uint32 keyIdType);
#endif

#if (CRY_30_RH850ICUS_FHVE_SUPPORT == STD_ON)
/**********************************************************************************************************************
 * Cry_30_Rh850Icus_DisableFlashSoftwareProtection()
 **********************************************************************************************************************/
/*! \brief        This interface disables the software protection for flash programming
 *  \details      -
 *  \reentrant    FALSE
 *  \pre          No Precondition
 *  \synchronous  TRUE
 *  \context      TASK
 **********************************************************************************************************************/
CRY_30_RH850ICUS_LOCAL FUNC(void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_DisableFlashSoftwareProtection(void);

/**********************************************************************************************************************
 * Cry_30_Rh850Icus_EnableFlashSoftwareProtection()
 **********************************************************************************************************************/
/*! \brief        This interface enables the software protection for flash programming
 *  \details      -
 *  \reentrant    FALSE
 *  \pre          No Precondition
 *  \synchronous  TRUE
 *  \context      TASK
 **********************************************************************************************************************/
CRY_30_RH850ICUS_LOCAL FUNC(void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_EnableFlashSoftwareProtection(void);
#endif

#if ( ( CRY_30_RH850ICUS_CMACAES128VERCONFIG == STD_ON ) || \
      ( CRY_30_RH850ICUS_CMACAES128GENCONFIG == STD_ON ) )
/**********************************************************************************************************************
 * Cry_30_Rh850Icus_WriteMessageData
 **********************************************************************************************************************/
/*! \brief        Write the Data of the MacVerification to the ICUS.
 *  \details      Write the data which shall be used for the CMAC calculation to the SHE.
 *  \param[in]    dataLength           Length of the Data
 *  \param[in]    dataPtr              Pointer to the Data
 *  \pre          ICUS expects to receive data
 **********************************************************************************************************************/
CRY_30_RH850ICUS_LOCAL FUNC(void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_WriteMessageData(uint32 dataLength, P2CONST(uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) dataPtr);
#endif

#if ( CRY_30_RH850ICUS_CMACAES128VERCONFIG == STD_ON )

/**********************************************************************************************************************
 * Cry_30_Rh850Icus_WriteMac
 **********************************************************************************************************************/
/*! \brief        Write the CMAC to the ICUS.
 *  \details      Write up to 16 bytes of data to the SHE.
 *  \param[in]    dataLength           Length of the CMAC
 *  \param[in]    dataPtr              Pointer to the CMAC
 *  \pre          ICUS expects to receive data
 **********************************************************************************************************************/
CRY_30_RH850ICUS_LOCAL FUNC(void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_WriteMac(uint32 dataLength, P2CONST(uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) dataPtr);

/**********************************************************************************************************************
 * Cry_30_Rh850Icus_GetVerifyResult
 **********************************************************************************************************************/
/*! \brief        Get verification result from the ICUS
 *  \details      Gets the verification result from the ICUS. Depending on the ICUS version, this is done by either
 *                analysing the rror code or by reading additional data from the ICUS.
 *  \param[in,out] verifyResult           Pointer to a variable which will hold the result of the MAC verification.
 *  \pre          ICUS is ready to provide the result.
 **********************************************************************************************************************/
CRY_30_RH850ICUS_LOCAL FUNC(Csm_ReturnType, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_GetVerifyResult(P2VAR(Csm_VerifyResultType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) verifyResult);
#endif /* ( CRY_30_RH850ICUS_CMACAES128VERCONFIG == STD_ON ) */

/**********************************************************************************************************************
*  LOCAL FUNCTIONS
**********************************************************************************************************************/

#if ( ( CRY_30_RH850ICUS_CMACAES128VERCONFIG == STD_ON ) || \
      ( CRY_30_RH850ICUS_CMACAES128GENCONFIG == STD_ON ) )

/**********************************************************************************************************************
 * Cry_30_Rh850Icus_WriteMessageData
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
CRY_30_RH850ICUS_LOCAL FUNC(void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_WriteMessageData(uint32 dataLength, P2CONST(uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) dataPtr)
{
  uint8 writeBuffer[CRY_30_RH850ICUS_CMACAES128_BLOCKSIZE];
  uint32 block;
  uint32 offset;
  uint32 n_blocks;
  uint8_least i;

  /* Calculate number of needed blocks */
  n_blocks = (dataLength >> CRY_30_RH850ICUS_BLOCKSIZE_SHIFT_DIV);
  /* Calculate Modulo when padding is necessary */
  if ((dataLength & (CRY_30_RH850ICUS_CMACAES128_BLOCKSIZE - 1)) != 0u)
  {
    n_blocks++;
  }

  for (block = 0u; block < n_blocks; block++)
  {
    /* Get the offset for the block */
    offset = block << CRY_30_RH850ICUS_BLOCKSIZE_SHIFT_DIV;

    /* Copy source to buffer */
    for (i = 0u; i < CRY_30_RH850ICUS_CMACAES128_BLOCKSIZE; i++)
    {
      /* Check if there is enough data available */
      if ((offset + i) < dataLength)
      {
        writeBuffer[i] = dataPtr[offset + i]; /* SBSW_CRY_WRITE_ARRAY */
      }
      else
      {
        /* Padding with 0 */
        writeBuffer[i] = 0u; /* SBSW_CRY_WRITE_ARRAY */
      }
    }

    /* Wait for input request and send current block of the message to ICUS */
    Cry_30_Rh850Icus_WriteData(writeBuffer); /* SBSW_CRY_FCTCALL_LOCALVAR */
  }
}
#endif

#if ( CRY_30_RH850ICUS_CMACAES128VERCONFIG == STD_ON )
/**********************************************************************************************************************
 * Cry_30_Rh850Icus_WriteMac
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 */
CRY_30_RH850ICUS_LOCAL FUNC(void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_WriteMac(uint32 dataLength, P2CONST(uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) dataPtr)
{
  uint8 writeBuffer[CRY_30_RH850ICUS_CMACAES128_BLOCKSIZE];
  uint32_least i;

  /* Initialize the buffer with zero */
  for (i = 0; i < CRY_30_RH850ICUS_CMACAES128_BLOCKSIZE; i++)
  {
    writeBuffer[i] = 0u; /* SBSW_CRY_WRITE_ARRAY */
  }

  /* Store MAC in write buffer */
  for (i = 0u; i < dataLength; i++)
  {
    writeBuffer[i] = dataPtr[i]; /* SBSW_CRY_WRITE_ARRAY */
  }

  /* write MAC to ICUS */
  Cry_30_Rh850Icus_WriteData(writeBuffer); /* SBSW_CRY_FCTCALL_LOCALVAR */
}

/**********************************************************************************************************************
 * Cry_30_Rh850Icus_GetVerifyResult
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
CRY_30_RH850ICUS_LOCAL FUNC(Csm_ReturnType, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_GetVerifyResult(P2VAR(Csm_VerifyResultType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) verifyResult)
{
  Csm_ReturnType retVal = CSM_E_NOT_OK;
# if (Cry_30_Rh850Icus_GetIcusVersionOfGeneral() > CRY_30_RH850ICUS_ICUS_VERSION_ICUSC) /* COV_CRY_ICUS_VERSION */
  uint8 verificationStatus[CRY_30_RH850ICUS_CMACAES128_BLOCKSIZE];
# endif

  /* #10 If verification status is stored as block of data: */
# if (Cry_30_Rh850Icus_GetIcusVersionOfGeneral() > CRY_30_RH850ICUS_ICUS_VERSION_ICUSC) /* COV_CRY_ICUS_VERSION */
  if ((CRY_30_RH850ICUS_ERR & CRY_30_RH850ICUS_ERR_ERR_MASK) == CRY_30_RH850ICUS_ERC_NO_ERROR) /* PRQA S 0303 */ /* MD_CRY_0303_REGISTER_ACCESS */
  {
    /* #11 Read the verification status from the ICUS when no error has occured. */
    Cry_30_Rh850Icus_ReadData(verificationStatus); /* SBSW_CRY_FCTCALL_LOCALVAR */
  }
  else
  {
    /* #12 Set the verification status to failed when nan error has occured. */
    verificationStatus[CRY_30_RH850ICUS_CMACAES128VER_VERIFICATION_STATUS_OFFSET] = 1u; /* SBSW_CRY_WRITE_ARRAY_BY_FIXPOS */
  }
# endif

  /* #20 Wait until the ICUS has finished the command. */
  Cry_30_Rh850Icus_WaitBusyFlag(); /* (Hint: When wrong ICUS-version is configured, this will result in an infinite loop.) */

  /* Check for errors */
  if ((CRY_30_RH850ICUS_ERR & CRY_30_RH850ICUS_ERR_ERR_MASK) == CRY_30_RH850ICUS_ERC_NO_ERROR) /* PRQA S 0303 */ /* MD_CRY_0303_REGISTER_ACCESS */
  {
    /* The result of the MAC verification is stored differently depending on the ICUS version
    * ICUS-B: Result is represented as Error Code
    * ICUS-D/E: Result is represented as data which has to be read from the ICUS
    */
    /* #30 If verification status is stored as block of data: */
# if (Cry_30_Rh850Icus_GetIcusVersionOfGeneral() > CRY_30_RH850ICUS_ICUS_VERSION_ICUSC) /* COV_CRY_ICUS_VERSION */
    /* #31 Check verification result with the status which has been read from the ICUS */
    if ((verificationStatus[CRY_30_RH850ICUS_CMACAES128VER_VERIFICATION_STATUS_OFFSET] & CRY_30_RH850ICUS_CMACAES128VER_VERIFICATION_STATUS_MASK) == 0u)
    {
      *verifyResult = CSM_E_VER_OK; /* SBSW_CRY_WRITE_PTR */
#  if (CRY_30_RH850ICUS_TIMEOUT_API == STD_OFF) /* COV_CRY_ICUS_VERSION */
      retVal = CSM_E_OK;
#  else
      retVal = Cry_30_Rh850Icus_GetTimeoutApiLoopCalloutOfGeneralOfPCConfig()(Cry_30_Rh850Icus_TimeoutApiService);
#  endif
    }
    else
    {
      *verifyResult = CSM_E_VER_NOT_OK; /* SBSW_CRY_WRITE_PTR */
#  if (CRY_30_RH850ICUS_TIMEOUT_API == STD_OFF) /* COV_CRY_ICUS_VERSION */
      retVal = CSM_E_OK;
#  else
      retVal = Cry_30_Rh850Icus_GetTimeoutApiLoopCalloutOfGeneralOfPCConfig()(Cry_30_Rh850Icus_TimeoutApiService);
#  endif
    }
# else /* #40 If verification status is stored as error code: */
    /* #41 Set verification result to CSM_E_VER_OK if no errors occured. */
    *verifyResult = CSM_E_VER_OK; /* SBSW_CRY_WRITE_PTR */
#  if (CRY_30_RH850ICUS_TIMEOUT_API == STD_OFF) /* COV_CRY_ICUS_VERSION */
    retVal = CSM_E_OK;
#  else
    retVal = Cry_30_Rh850Icus_GetTimeoutApiLoopCalloutOfGeneralOfPCConfig()(Cry_30_Rh850Icus_TimeoutApiService);
#  endif
  }
  else if ((CRY_30_RH850ICUS_ERR & CRY_30_RH850ICUS_ERR_ERR_MASK) == CRY_30_RH850ICUS_ERC_GENERAL_ERROR) /* PRQA S 0303 */ /* MD_CRY_0303_REGISTER_ACCESS */
  {
    /* #42 Set verification result to CSM_E_VER_NOT_OK if CRY_30_RH850ICUS_ERC_GENERAL_ERROR occured. */
    /* There were no errors in the service. The return value of the service is independent to the MAC verification. */
    *verifyResult = CSM_E_VER_NOT_OK; /* SBSW_CRY_WRITE_PTR */
#  if (CRY_30_RH850ICUS_TIMEOUT_API == STD_OFF) /* COV_CRY_ICUS_VERSION */
    retVal = CSM_E_OK;
#  else
    retVal = Cry_30_Rh850Icus_GetTimeoutApiLoopCalloutOfGeneralOfPCConfig()(Cry_30_Rh850Icus_TimeoutApiService);
#  endif
# endif
  }
  else
  {
    /* #50 Set verification result to CSM_E_VER_NOT_OK and return CSM_E_NOT_OK when other error occured. */
    retVal = CSM_E_NOT_OK;
    *verifyResult = CSM_E_VER_NOT_OK; /* SBSW_CRY_WRITE_PTR */
  }
# if (CRY_30_RH850ICUS_HARDWARE_ERROR_CODE == STD_ON)
  Cry_30_Rh850Icus_HardwareErrorCode_Callout(CRY_30_RH850ICUS_ERR); /* PRQA S 0303 */ /* MD_CRY_0303_REGISTER_ACCESS */
# endif

  return retVal;
}

#endif

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 **********************************************************************************************************************/

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_Hw_Init()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 */
FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_Hw_Init( void )
{
  /* ----- Local Variables ---------------------------------------------- */
  Csm_ReturnType retVal = E_NOT_OK;

  /* ----- Implementation ----------------------------------------------- */
  /* #10 Check if ICUS is enabled. */
  if ((CRY_30_RH850ICUS_ICUSTS & CRY_30_RH850ICUS_ICUSTS_ICUEN) == CRY_30_RH850ICUS_ICU_ENABLED) /* PRQA S 0303 */ /* MD_CRY_0303_REGISTER_ACCESS */ /* COV_CRY_ICU_DEACTIVATED */
  {
    retVal = CSM_E_OK;
  }

  /* #20 Return if ICUS is enabled. */
  return retVal;
} /* Cry_30_Rh850Icus_Hw_Init() */

#if ( CRY_30_RH850ICUS_ANY_PRIMITIVE_ENABLED == TRUE)

/**********************************************************************************************************************
 * Cry_30_Rh850Icus_Hw_LoadPlainKey
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
FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_Hw_LoadPlainKey( P2CONST(uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) keyPtr )
{
  /* ----- Local Variables ---------------------------------------------- */
  Csm_ReturnType retVal = CSM_E_NOT_OK;

  /* ----- Implementation ----------------------------------------------- */
  /* #10 Send command to SHE to load the plain key (to the RAM key slot). */
  CRY_30_RH850ICUS_CMD = (CRY_30_RH850ICUS_CMD_CMD_MASK & CRY_30_RH850ICUS_CMD_LOAD_PLAIN_KEY); /* PRQA S 0303 */ /* MD_CRY_0303_REGISTER_ACCESS */ /* SBSW_CRY_REGISTER_ACCESS */

  /* #20 Call subfunction to write the key to the SHE. */
  Cry_30_Rh850Icus_WriteData(keyPtr); /* SBSW_CRY_FCTCALL_PTRFORWARDING */

  /* #30 Call subfunction to wait for end of command execution. */
  Cry_30_Rh850Icus_WaitBusyFlag();

  /* #40 Check if any errors occured on the SHE. */
  if ((CRY_30_RH850ICUS_ERR & CRY_30_RH850ICUS_ERR_ERR_MASK) == CRY_30_RH850ICUS_ERC_NO_ERROR) /* PRQA S 0303 */ /* MD_CRY_0303_REGISTER_ACCESS */
  {
    retVal = CSM_E_OK;
  }
# if (CRY_30_RH850ICUS_HARDWARE_ERROR_CODE == STD_ON)
  Cry_30_Rh850Icus_HardwareErrorCode_Callout(CRY_30_RH850ICUS_ERR); /* PRQA S 0303 */ /* MD_CRY_0303_REGISTER_ACCESS */
# endif

  /* #50 Return if command was executed successful or not. */
  return retVal;
} /* Cry_30_Rh850Icus_Hw_LoadPlainKey() */

/**********************************************************************************************************************
 * Cry_30_Rh850Icus_Hw_CancelCommand
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 */
FUNC( void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_Hw_CancelCommand( void )
{
  /* ----- Local Variables ---------------------------------------------- */

  /* ----- Implementation ----------------------------------------------- */
  /* #10 Check if ICUS is enabled. */
  if ((CRY_30_RH850ICUS_ICUSTS & CRY_30_RH850ICUS_ICUSTS_ICUEN) == CRY_30_RH850ICUS_ICU_ENABLED) /* PRQA S 0303 */ /* MD_CRY_0303_REGISTER_ACCESS */ /* COV_CRY_ICU_DEACTIVATED */
  {
    /* Send cancel command only when another service is currently running.
    Otherwise the command is not issued and the ECU would block by waiting for a BUSY-Flag which would not occur.
    This issue occurs on platforms like D1L/D1M with an ICUSD but not on F1L which has an ICUS. */
    if ((CRY_30_RH850ICUS_STS & CRY_30_RH850ICUS_STS_BUSY) == CRY_30_RH850ICUS_STS_BUSY)  /* PRQA S 0303 */ /* MD_CRY_0303_REGISTER_ACCESS */
    {
      /* #15 Send cancel command only when ICUS is busy. */
      CRY_30_RH850ICUS_CMD = CRY_30_RH850ICUS_CMD_CANCEL; /* PRQA S 0303 */ /* MD_CRY_0303_REGISTER_ACCESS */ /* SBSW_CRY_REGISTER_ACCESS */

      /* #16 Call subfunction to wait for end of command execution. */
      Cry_30_Rh850Icus_WaitBusyFlag();

      /* #17 Ensure that data flash is set to Read mode after the cancel command. */
# if (CRY_30_RH850ICUS_DATA_FLASH_CONTROL == STD_ON)
      Cry_30_Rh850Icus_DataFlashSetReadMode_Callout();
# endif
    }
  }
} /* Cry_30_Rh850Icus_Hw_CancelCommand() */

#endif /* CRY_30_RH850ICUS_ANY_PRIMITIVE_ENABLED */

#if ( CRY_30_RH850ICUS_AESDECRYPT128CONFIG == STD_ON )
/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_Hw_AesDecrypt128UpdateInternal()
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
 */
FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_Hw_AesDecrypt128UpdateInternal(
  P2CONST( Cry_30_Rh850Icus_AesDecrypt128ConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) contextPtr,
  P2CONST( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) cipherTextPtr,
  uint32 cipherTextLength,
  P2VAR( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) plainTextPtr,
  P2VAR( uint32, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) plainTextLengthPtr )
{
  /* ----- Local Variables ---------------------------------------------- */
  Csm_ReturnType retVal = CSM_E_NOT_OK;

  P2VAR( Cry_30_Rh850Icus_AesDecrypt128WorkSpaceType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) workSpacePtr = Cry_30_Rh850Icus_GetAddrAesDecrypt128WorkSpace(Cry_30_Rh850Icus_GetAesDecrypt128WorkSpaceIdxOfAesDecrypt128Config(contextPtr));
  uint32 current_block;
  uint32 n_blocks;
  uint32 offset;

  /* ----- Implementation ----------------------------------------------- */
  /* #10 Check if a read lock to the data flash can be acquired, if not return CSM_E_BUSY. */
# if (CRY_30_RH850ICUS_DATA_FLASH_SYNCHRONISATION == STD_ON)
  if (Cry_30_Rh850Icus_DataFlashReadStart_Callout() == TRUE)
# endif
  {
    /* #11 Calculate number of needed blocks for the decryption. */
    n_blocks = cipherTextLength >> CRY_30_RH850ICUS_BLOCKSIZE_SHIFT_DIV;

    /* #12 Check if command is CMD_DEC_CBC: */
    if (Cry_30_Rh850Icus_GetBlockModeOfAesDecrypt128Config(contextPtr) == CRY_30_RH850ICUS_AESBLOCKMODE_CBC)
    {
      /* #121 Set number of blocks to be transferred (plainText + IV). */
      CRY_30_RH850ICUS_IDATNUM = n_blocks + CRY_30_RH850ICUS_AESDECRYPT128_IVBLOCK; /* PRQA S 0303 */ /* MD_CRY_0303_REGISTER_ACCESS */ /* SBSW_CRY_REGISTER_ACCESS */

      /* #122 Set key id and command for AES decryption in CBC mode. */
      Cry_30_Rh850Icus_SendCommand(CRY_30_RH850ICUS_CMD_DEC_CBC, workSpacePtr->keyID, Cry_30_Rh850Icus_GetKeyIdTypeOfAesDecrypt128Config(contextPtr));

      /* #123 Send IV from workspace to ICUS in case AES is in CBC mode. */
      Cry_30_Rh850Icus_WriteData((P2VAR(uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR))workSpacePtr->IV); /* PRQA S 0310 */ /* MD_CRY_0310_ALIGNED_ARRAY */ /* SBSW_CRY_FCTCALL_PTRFORWARDING */
    }
    else
    {
      /* #131 Set number of blocks to be transferred. */
      CRY_30_RH850ICUS_IDATNUM = n_blocks; /* PRQA S 0303 */ /* MD_CRY_0303_REGISTER_ACCESS */ /* SBSW_CRY_REGISTER_ACCESS */

      /* #132 Set key id and command for AES decryption in ECB mode. */
      Cry_30_Rh850Icus_SendCommand(CRY_30_RH850ICUS_CMD_DEC_ECB, workSpacePtr->keyID, Cry_30_Rh850Icus_GetKeyIdTypeOfAesDecrypt128Config(contextPtr));
    }

    /* #14 For each ciphertext block: */
    for (current_block = 0u; current_block < n_blocks; current_block++)
    {
      /* #141 Get the offset for the block. */
      offset = current_block << CRY_30_RH850ICUS_BLOCKSIZE_SHIFT_DIV;

      /* #142 Wait for input request and send current block of cipher text to ICU. */
      Cry_30_Rh850Icus_WriteData(&cipherTextPtr[offset]); /* SBSW_CRY_FCTCALL_PTRFORWARDING_OFFSET */

      /* #143 Wait for output request and read current block of plain text from ICU. */
      Cry_30_Rh850Icus_ReadData(&plainTextPtr[offset]); /* SBSW_CRY_FCTCALL_PTRFORWARDING_OFFSET */
    }

    /* #15 Wait until ICUS has finished. */
    Cry_30_Rh850Icus_WaitBusyFlag();

    /* #16 Check ICUS for errors. */
    if ((CRY_30_RH850ICUS_ERR & CRY_30_RH850ICUS_ERR_ERR_MASK) == CRY_30_RH850ICUS_ERC_NO_ERROR) /* PRQA S 0303 */ /* MD_CRY_0303_REGISTER_ACCESS */
    {
      *plainTextLengthPtr = cipherTextLength; /* SBSW_CRY_WRITE_PTR */
# if (CRY_30_RH850ICUS_TIMEOUT_API == STD_OFF)
      retVal = CSM_E_OK;
# else
      retVal = Cry_30_Rh850Icus_GetTimeoutApiLoopCalloutOfGeneralOfPCConfig()(Cry_30_Rh850Icus_TimeoutApiService);
# endif
    }
# if (CRY_30_RH850ICUS_HARDWARE_ERROR_CODE == STD_ON)
    Cry_30_Rh850Icus_HardwareErrorCode_Callout(CRY_30_RH850ICUS_ERR); /* PRQA S 0303 */ /* MD_CRY_0303_REGISTER_ACCESS */
# endif
    /* #17 Release read lock. */
# if (CRY_30_RH850ICUS_DATA_FLASH_SYNCHRONISATION == STD_ON)
    Cry_30_Rh850Icus_DataFlashReadEnd_Callout();
# endif
  }
# if (CRY_30_RH850ICUS_DATA_FLASH_SYNCHRONISATION == STD_ON)
  else
  {
    retVal = CSM_E_BUSY;
  }
# endif

  /* #20 Return if command was executed successful or not. */
  return retVal;
} /* Cry_30_Rh850Icus_Hw_AesDecrypt128UpdateInternal() */ /* PRQA S 6050 */ /* MD_MSR_STCAL */
#endif /* ( CRY_30_RH850ICUS_AESDECRYPT128CONFIG == STD_ON ) */

#if ( CRY_30_RH850ICUS_AESENCRYPT128CONFIG == STD_ON )
/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_Hw_AesEncrypt128UpdateInternal()
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
 */
FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_Hw_AesEncrypt128UpdateInternal(
  P2CONST( Cry_30_Rh850Icus_AesEncrypt128ConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) contextPtr,
  P2CONST( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) plainTextPtr,
  uint32 plainTextLength,
  P2VAR( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) cipherTextPtr,
  P2VAR( uint32, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) cipherTextLengthPtr )
{
  /* ----- Local Variables ---------------------------------------------- */
  Csm_ReturnType retVal = CSM_E_NOT_OK;
  P2VAR( Cry_30_Rh850Icus_AesEncrypt128WorkSpaceType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) workSpacePtr = Cry_30_Rh850Icus_GetAddrAesEncrypt128WorkSpace(Cry_30_Rh850Icus_GetAesEncrypt128WorkSpaceIdxOfAesEncrypt128Config(contextPtr));
  uint32 current_block;
  uint32 n_blocks;
  uint32 offset;

  /* ----- Implementation ----------------------------------------------- */
  /* #10 Check if a read lock to the data flash can be acquired, if not return CSM_E_BUSY. */
# if (CRY_30_RH850ICUS_DATA_FLASH_SYNCHRONISATION == STD_ON)
  if (Cry_30_Rh850Icus_DataFlashReadStart_Callout() == TRUE)
# endif
  {
    /* #11 Calculate number of needed blocks for the encryption. */
    n_blocks = plainTextLength >> CRY_30_RH850ICUS_BLOCKSIZE_SHIFT_DIV;

    /* #12 Check if command is CMD_ENC_CBC: */
    if (Cry_30_Rh850Icus_GetBlockModeOfAesEncrypt128Config(contextPtr) == CRY_30_RH850ICUS_AESBLOCKMODE_CBC)
    {
      /* #121 Set number of blocks to be transferred (plainText + IV). */
      CRY_30_RH850ICUS_IDATNUM = n_blocks + CRY_30_RH850ICUS_AESENCRYPT128_IVBLOCK; /* PRQA S 0303 */ /* MD_CRY_0303_REGISTER_ACCESS */ /* SBSW_CRY_REGISTER_ACCESS */

      /* #122 Set key id and command for AES encryption in CBC mode. */
      Cry_30_Rh850Icus_SendCommand(CRY_30_RH850ICUS_CMD_ENC_CBC, workSpacePtr->keyID, Cry_30_Rh850Icus_GetKeyIdTypeOfAesEncrypt128Config(contextPtr));

      /* #123 Send IV from workspace to ICUS in case AES is in CBC mode. */
      Cry_30_Rh850Icus_WriteData((P2VAR(uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR))workSpacePtr->IV); /* PRQA S 0310 */ /* MD_CRY_0310_ALIGNED_ARRAY */ /* SBSW_CRY_FCTCALL_WORKSPACE */
    }
    else
    {
      /* #131 Set number of blocks to be transferred. */
      CRY_30_RH850ICUS_IDATNUM = n_blocks; /* PRQA S 0303 */ /* MD_CRY_0303_REGISTER_ACCESS */ /* SBSW_CRY_REGISTER_ACCESS */

      /* #132 Set key id and command for AES encryption in ECB mode. */
      Cry_30_Rh850Icus_SendCommand(CRY_30_RH850ICUS_CMD_ENC_ECB, workSpacePtr->keyID, Cry_30_Rh850Icus_GetKeyIdTypeOfAesEncrypt128Config(contextPtr));
    }

    /* #14 For each plaintext block: */
    for (current_block = 0u; current_block < n_blocks; current_block++)
    {
      /* #141 Get the offset for the block. */
      offset = current_block << CRY_30_RH850ICUS_BLOCKSIZE_SHIFT_DIV;

      /* #142 Wait for input request and send current block of plain text to ICU. */
      Cry_30_Rh850Icus_WriteData(&plainTextPtr[offset]); /* SBSW_CRY_FCTCALL_PTRFORWARDING_OFFSET */

      /* #143 Wait for output request and read current block of cipher text from ICU. */
      Cry_30_Rh850Icus_ReadData(&cipherTextPtr[offset]); /* SBSW_CRY_FCTCALL_PTRFORWARDING_OFFSET */
    }

    /* #15 Wait until ICUS has finished. */
    Cry_30_Rh850Icus_WaitBusyFlag();

    /* #16 Check ICUS for errors. */
    if ((CRY_30_RH850ICUS_ERR & CRY_30_RH850ICUS_ERR_ERR_MASK) == CRY_30_RH850ICUS_ERC_NO_ERROR) /* PRQA S 0303 */ /* MD_CRY_0303_REGISTER_ACCESS */
    {
      *cipherTextLengthPtr = plainTextLength; /* SBSW_CRY_WRITE_PTR */
# if (CRY_30_RH850ICUS_TIMEOUT_API == STD_OFF)
      retVal = CSM_E_OK;
# else
      retVal = Cry_30_Rh850Icus_GetTimeoutApiLoopCalloutOfGeneralOfPCConfig()(Cry_30_Rh850Icus_TimeoutApiService);
# endif
    }

# if (CRY_30_RH850ICUS_HARDWARE_ERROR_CODE == STD_ON)
    Cry_30_Rh850Icus_HardwareErrorCode_Callout(CRY_30_RH850ICUS_ERR); /* PRQA S 0303 */ /* MD_CRY_0303_REGISTER_ACCESS */
# endif
    /* #17 Release read lock. */
# if (CRY_30_RH850ICUS_DATA_FLASH_SYNCHRONISATION == STD_ON)
    Cry_30_Rh850Icus_DataFlashReadEnd_Callout();
# endif
  }
# if (CRY_30_RH850ICUS_DATA_FLASH_SYNCHRONISATION == STD_ON)
  else
  {
    retVal = CSM_E_BUSY;
  }
# endif

  /* #20 Return if command was executed successful or not. */
  return retVal;
} /* Cry_30_Rh850Icus_Hw_AesEncrypt128UpdateInternal() */ /* PRQA S 6050 */ /* MD_MSR_STCAL */

#endif /* ( CRY_30_RH850ICUS_AESENCRYPT128CONFIG == STD_ON ) */

#if ( CRY_30_RH850ICUS_CMACAES128GENCONFIG == STD_ON )
/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_Hw_CmacAes128GenUpdateInternal()
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
FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_Hw_CmacAes128GenUpdateInternal(
  P2CONST( Cry_30_Rh850Icus_CmacAes128GenConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) contextPtr,
  P2VAR( Cry_30_Rh850Icus_CmacAes128GenWorkSpaceType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) workSpacePtr, /* PRQA S 3673 */ /* MD_CRY_3673_POINTERTOCONST */
  P2CONST( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) dataPtr,
  uint32 dataLength )
{
  /* ----- Local Variables ---------------------------------------------- */
  Csm_ReturnType retVal = CSM_E_NOT_OK;

  /* ----- Implementation ----------------------------------------------- */
  /* #10 Check if a read lock to the data flash can be acquired, if not return CSM_E_BUSY. */
# if (CRY_30_RH850ICUS_DATA_FLASH_SYNCHRONISATION == STD_ON)
  if (Cry_30_Rh850Icus_DataFlashReadStart_Callout() == TRUE)
# endif
  {
    /* #15 Write the 64bit message length to the ICU. */
    /* PRQA S 0303 4 */ /* MD_CRY_0303_REGISTER_ACCESS */
    CRY_30_RH850ICUS_IDAT = 0u;   /* HighWord always zero - Assume that the message doesn't exceed 512 mBytes */ /* SBSW_CRY_REGISTER_ACCESS */
    CRY_30_RH850ICUS_IDAT = Cry_30_Rh850Icus_SwapWord((dataLength << CRY_30_RH850ICUS_BITS_PER_BYTE_SHIFT_DIV)); /* Write LowWord to ICU */ /* SBSW_CRY_REGISTER_ACCESS */
    CRY_30_RH850ICUS_IDAT = 0u;   /* HighWord of MAC is 0 */ /* SBSW_CRY_REGISTER_ACCESS */
    CRY_30_RH850ICUS_IDAT = 0u;   /* LowWord of MAC is 0 */ /* SBSW_CRY_REGISTER_ACCESS */

    /* #16 Send the command for generating the MAC. */
    Cry_30_Rh850Icus_SendCommand(CRY_30_RH850ICUS_CMD_GENERATE_MAC, workSpacePtr->keyID, Cry_30_Rh850Icus_GetKeyIdTypeOfCmacAes128GenConfig(contextPtr));

    /* #17 Write message to ICUS. */
    Cry_30_Rh850Icus_WriteMessageData(dataLength, dataPtr); /* SBSW_CRY_FCTCALL_LOCALVAR_PTRFORWARDING */

    /* #18 Wait for output request and read current block of cipher text from ICU. */
    Cry_30_Rh850Icus_ReadData((P2VAR(uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR))workSpacePtr->macBuffer); /* PRQA S 0310 */ /* MD_CRY_0310_ALIGNED_ARRAY */ /* SBSW_CRY_FCTCALL_WORKSPACE */

    /* #19 Wait until ICU has finished. */
    Cry_30_Rh850Icus_WaitBusyFlag();

    if ((CRY_30_RH850ICUS_ERR & CRY_30_RH850ICUS_ERR_ERR_MASK) == CRY_30_RH850ICUS_ERC_NO_ERROR) /* PRQA S 0303 */ /* MD_CRY_0303_REGISTER_ACCESS */
    {
# if (CRY_30_RH850ICUS_TIMEOUT_API == STD_OFF)
      retVal = CSM_E_OK;
# else
      retVal = Cry_30_Rh850Icus_GetTimeoutApiLoopCalloutOfGeneralOfPCConfig()(Cry_30_Rh850Icus_TimeoutApiService);
# endif
    }

    /* #20 Call hardware error callout if functionality is configured. */
# if (CRY_30_RH850ICUS_HARDWARE_ERROR_CODE == STD_ON)
    Cry_30_Rh850Icus_HardwareErrorCode_Callout(CRY_30_RH850ICUS_ERR); /* PRQA S 0303 */ /* MD_CRY_0303_REGISTER_ACCESS */
# endif

    /* #21 Release Read - lock for data flash if functionality is enabled. */
# if (CRY_30_RH850ICUS_DATA_FLASH_SYNCHRONISATION == STD_ON)
    Cry_30_Rh850Icus_DataFlashReadEnd_Callout();
# endif
  }
# if (CRY_30_RH850ICUS_DATA_FLASH_SYNCHRONISATION == STD_ON)
  else
  {
    retVal = CSM_E_BUSY;
  }
# endif

  /* #30 Return if command was executed successful or not. */
  return retVal;
} /* Cry_30_Rh850Icus_Hw_CmacAes128GenUpdateInternal() */ /* PRQA S 6050 */ /* MD_MSR_STCAL */
#endif /* ( CRY_30_RH850ICUS_CMACAES128GENCONFIG == STD_ON ) */

#if ( CRY_30_RH850ICUS_CMACAES128VERCONFIG == STD_ON )
/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_Hw_CmacAes128VerFinishInternal()
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
FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_Hw_CmacAes128VerFinishInternal(
  P2CONST( Cry_30_Rh850Icus_CmacAes128VerConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) contextPtr,
  P2CONST( Cry_30_Rh850Icus_CmacAes128VerWorkSpaceType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) workSpacePtr,
  P2CONST( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) MacPtr,
  uint32 MacLength,
  P2VAR( Csm_VerifyResultType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) resultPtr )
{
  /* ----- Local Variables ---------------------------------------------- */
  Csm_ReturnType retVal = CSM_E_NOT_OK;
  uint32 macLengthInBits;
  uint32 macLengthInBytes;

  /* ----- Implementation ----------------------------------------------- */
  /* #10 Init result. */
  *resultPtr = CSM_E_VER_NOT_OK; /* SBSW_CRY_WRITE_PTR */

  /* #11 Check if Read-lock for data flash can be acquired if functionality is enabled. */
# if (CRY_30_RH850ICUS_DATA_FLASH_SYNCHRONISATION == STD_ON)
  if (Cry_30_Rh850Icus_DataFlashReadStart_Callout() == TRUE)
# endif
  {
    /* #111 Calculate macLength. */
    if (Cry_30_Rh850Icus_IsLengthInBytesOfCmacAes128VerConfig(contextPtr))
    {
      macLengthInBits = (MacLength << CRY_30_RH850ICUS_BITS_PER_BYTE_SHIFT_DIV);
      macLengthInBytes = MacLength;
    }
    else
    {
      macLengthInBits = MacLength;
      macLengthInBytes = (MacLength >> CRY_30_RH850ICUS_BITS_PER_BYTE_SHIFT_DIV);
      if ((MacLength & (CRY_30_RH850ICUS_BITS_PER_BYTE - 1)) != 0u) /* Calculate modulo */
      {
        /* Add one byte to the length, because number of bits is not a multiple of 8 */
        macLengthInBytes += 1;
      }
    }

    /* Write the 64bit message length to the ICU */ /* PRQA S 0303 11 */ /* MD_CRY_0303_REGISTER_ACCESS */
    CRY_30_RH850ICUS_IDAT = 0u;   /* HighWord always zero - Assume that the message doesn't exceed 512 mBytes */ /* SBSW_CRY_REGISTER_ACCESS */
    CRY_30_RH850ICUS_IDAT = Cry_30_Rh850Icus_SwapWord((workSpacePtr->dataLength << CRY_30_RH850ICUS_BITS_PER_BYTE_SHIFT_DIV)); /* Write data length LowWord to ICU */ /* SBSW_CRY_REGISTER_ACCESS */
    if (macLengthInBits != (CRY_30_RH850ICUS_MAC_LENGTH << CRY_30_RH850ICUS_BITS_PER_BYTE_SHIFT_DIV))
    {
      CRY_30_RH850ICUS_IDAT = macLengthInBits; /* MacLength in Bits */ /* SBSW_CRY_REGISTER_ACCESS */
    }
    else
    {
      CRY_30_RH850ICUS_IDAT = 0u; /* Write zero when verifying 128 bits */ /* SBSW_CRY_REGISTER_ACCESS */
    }
    CRY_30_RH850ICUS_IDAT = 0u;   /* LowWord of MAC is always 0 */ /* SBSW_CRY_REGISTER_ACCESS */

    /* #113 Send MAC verification command to ICUS. */
    Cry_30_Rh850Icus_SendCommand(CRY_30_RH850ICUS_CMD_VERIFY_MAC, workSpacePtr->keyID, Cry_30_Rh850Icus_GetKeyIdTypeOfCmacAes128VerConfig(contextPtr));

    /* #114 Write message to ICUS. */
    Cry_30_Rh850Icus_WriteMessageData(workSpacePtr->dataLength, workSpacePtr->dataPtr); /* SBSW_CRY_FCTCALL_WORKSPACE */

    /* #115 Write MAC to ICUS. */
    Cry_30_Rh850Icus_WriteMac(macLengthInBytes, MacPtr); /* SBSW_CRY_FCTCALL_LOCALVAR_PTRFORWARDING */

    /* #116 Get verification result from ICUS. */
    retVal = Cry_30_Rh850Icus_GetVerifyResult(resultPtr); /* SBSW_CRY_FCTCALL_PTRFORWARDING */

    /* #117 Release Read-lock for data flash if functionality is enabled. */
# if (CRY_30_RH850ICUS_DATA_FLASH_SYNCHRONISATION == STD_ON)
    Cry_30_Rh850Icus_DataFlashReadEnd_Callout();
# endif
    }
# if (CRY_30_RH850ICUS_DATA_FLASH_SYNCHRONISATION == STD_ON)
  else
  {
    retVal = CSM_E_BUSY;
  }
# endif

  /* #20 Return if command was executed successful or not. */
  return retVal;
} /* Cry_30_Rh850Icus_Hw_CmacAes128VerFinishInternal() */
#endif /* ( CRY_30_RH850ICUS_CMACAES128VERCONFIG == STD_ON ) */

#if ( CRY_30_RH850ICUS_KEYEXTRACTCONFIG == STD_ON )
/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_Hw_KeyExtractUpdateInternal()
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
FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_Hw_KeyExtractUpdateInternal(
  uint32 keyId,
  uint32 keyIdType,
  P2CONST( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) m1m2m3Ptr,
  P2VAR( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) m4m5Ptr)
{
  /* ----- Local Variables ---------------------------------------------- */
  Csm_ReturnType retVal = CSM_E_NOT_OK;

  /* ----- Implementation ----------------------------------------------- */
  /* #10 Check if Write-lock for data flash can be acquired if functionality is enabled. */
# if (CRY_30_RH850ICUS_DATA_FLASH_SYNCHRONISATION == STD_ON)
  if (Cry_30_Rh850Icus_DataFlashWriteStart_Callout() == TRUE)
# endif
  {
# if (CRY_30_RH850ICUS_FHVE_SUPPORT == STD_ON)
    Cry_30_Rh850Icus_DisableFlashSoftwareProtection();
# endif
# if (CRY_30_RH850ICUS_DATA_FLASH_CONTROL == STD_ON)
    Cry_30_Rh850Icus_DataFlashReturnFromCommandLockedState_Callout();
# endif
    /* #20 Send the command for loading a key into the SHE. */
    Cry_30_Rh850Icus_SendCommand(CRY_30_RH850ICUS_CMD_LOAD_KEY, keyId, keyIdType);

    /* #21 Write the messages M1 to M3 to the ICU. */
    /*
     * Note:
     * Renesas Data Flash Library must be initialised in order to be able to store keys in key slots
     */
    Cry_30_Rh850Icus_WriteData(&m1m2m3Ptr[CRY_30_RH850ICUS_OFFSET_M1]);       /* M1 */ /* SBSW_CRY_FCTCALL_PTRFORWARDING_OFFSET */
    Cry_30_Rh850Icus_WriteData(&m1m2m3Ptr[CRY_30_RH850ICUS_OFFSET_M2]);       /* M2 (first 16 byte) */ /* SBSW_CRY_FCTCALL_PTRFORWARDING_OFFSET */
    Cry_30_Rh850Icus_WriteData(&m1m2m3Ptr[CRY_30_RH850ICUS_OFFSET_M2 + CRY_30_RH850ICUS_AES128_BLOCKSIZE]); /* M2 (last 16 byte) */ /* SBSW_CRY_FCTCALL_PTRFORWARDING_OFFSET */
    Cry_30_Rh850Icus_WriteData(&m1m2m3Ptr[CRY_30_RH850ICUS_OFFSET_M3]);       /* M3 */ /* SBSW_CRY_FCTCALL_PTRFORWARDING_OFFSET */

    /* #22 Read response from ICU and save it to key buffer or the dummy buffer. */
    /* Info: Code will wait here if Data Flash Library is not initialized and ICUS is therefore not able to write to the Data Flash. */
    Cry_30_Rh850Icus_ReadData(&m4m5Ptr[0u]);  /* M4 (first 16 byte) */ /* SBSW_CRY_FCTCALL_PTRFORWARDING_OFFSET */
    Cry_30_Rh850Icus_ReadData(&m4m5Ptr[16u]); /* M4 (last 16 byte) */ /* SBSW_CRY_FCTCALL_PTRFORWARDING_OFFSET */
    Cry_30_Rh850Icus_ReadData(&m4m5Ptr[32u]); /* M5 */ /* SBSW_CRY_FCTCALL_PTRFORWARDING_OFFSET */

    /* #23 Wait until ICU has finished. */
    Cry_30_Rh850Icus_WaitBusyFlag();

    /* #24 Check if errors occured e.g. CRY_30_RH850ICUS_ERC_KEY_WRITE_PROTECTED or CRY_30_RH850ICUS_ERC_KEY_UPDATE_ERROR. */
    if ((CRY_30_RH850ICUS_ERR & CRY_30_RH850ICUS_ERR_ERR_MASK) == CRY_30_RH850ICUS_ERC_NO_ERROR) /* PRQA S 0303 */ /* MD_CRY_0303_REGISTER_ACCESS */
    {
# if (CRY_30_RH850ICUS_TIMEOUT_API == STD_OFF)
      retVal = CSM_E_OK;
# else
      retVal = Cry_30_Rh850Icus_GetTimeoutApiLoopCalloutOfGeneralOfPCConfig()(Cry_30_Rh850Icus_TimeoutApiService);
# endif
    }
    else
    {
      retVal = CSM_E_NOT_OK;
    }
# if (CRY_30_RH850ICUS_HARDWARE_ERROR_CODE == STD_ON)
    Cry_30_Rh850Icus_HardwareErrorCode_Callout(CRY_30_RH850ICUS_ERR); /* PRQA S 0303 */ /* MD_CRY_0303_REGISTER_ACCESS */ /* SBSW_CRY_REGISTER_ACCESS */
# endif
# if (CRY_30_RH850ICUS_FHVE_SUPPORT == STD_ON)
    Cry_30_Rh850Icus_EnableFlashSoftwareProtection();
# endif
    /* #25 Call Callout to return from command locked state. */
# if (CRY_30_RH850ICUS_DATA_FLASH_CONTROL == STD_ON)
    Cry_30_Rh850Icus_DataFlashReturnFromCommandLockedState_Callout();
# endif
    /* #26 Release Write-lock for data flash if functionality is enabled. */
# if (CRY_30_RH850ICUS_DATA_FLASH_SYNCHRONISATION == STD_ON)
    Cry_30_Rh850Icus_DataFlashWriteEnd_Callout();
# endif
  }
# if (CRY_30_RH850ICUS_DATA_FLASH_SYNCHRONISATION == STD_ON)
  else
  {
    retVal = CSM_E_BUSY;
  }
# endif

  /* #30 Return if command was executed successful or not. */
  return retVal;
} /* Cry_30_Rh850Icus_Hw_KeyExtractUpdateInternal() */ /* PRQA S 6050 */ /* MD_MSR_STCAL */
#endif /* ( CRY_30_RH850ICUS_KEYEXTRACTCONFIG == STD_ON ) */

#if ( CRY_30_RH850ICUS_KEYWRAPSYMCONFIG == STD_ON )
/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_Hw_KeyWrapSymUpdateInternal()
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
FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_Hw_KeyWrapSymUpdateInternal(
  P2VAR( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) m1m2m3m4m5Ptr)
{
  /* ----- Local Variables ---------------------------------------------- */
  Csm_ReturnType retVal = CSM_E_NOT_OK;

  /* ----- Implementation ----------------------------------------------- */
  /* #10 Send export RAM key command to SHE. */
  CRY_30_RH850ICUS_CMD = CRY_30_RH850ICUS_CMD_EXPORT_RAM_KEY; /* PRQA S 0303 */ /* MD_CRY_0303_REGISTER_ACCESS */ /* SBSW_CRY_REGISTER_ACCESS */

  /* #11 Read response from ICU. */
  Cry_30_Rh850Icus_ReadData(&m1m2m3m4m5Ptr[CRY_30_RH850ICUS_OFFSET_M1]);     /* M1 */ /* SBSW_CRY_FCTCALL_PTRFORWARDING_OFFSET */
  Cry_30_Rh850Icus_ReadData(&m1m2m3m4m5Ptr[CRY_30_RH850ICUS_OFFSET_M2]);     /* M2 (first 4 byte)*/ /* SBSW_CRY_FCTCALL_PTRFORWARDING_OFFSET */
  Cry_30_Rh850Icus_ReadData(&m1m2m3m4m5Ptr[CRY_30_RH850ICUS_OFFSET_M2 + CRY_30_RH850ICUS_AES128_BLOCKSIZE]);  /* M2 (last 4 byte) */ /* SBSW_CRY_FCTCALL_PTRFORWARDING_OFFSET */
  Cry_30_Rh850Icus_ReadData(&m1m2m3m4m5Ptr[CRY_30_RH850ICUS_OFFSET_M3]);     /* M3 */ /* SBSW_CRY_FCTCALL_PTRFORWARDING_OFFSET */

  /* #12 Store M4M5 behind M1M2M3 in dataPtr. */
  Cry_30_Rh850Icus_ReadData(&m1m2m3m4m5Ptr[CRY_30_RH850ICUS_OFFSET_M4]);     /* M4 (first 4 byte)*/ /* SBSW_CRY_FCTCALL_PTRFORWARDING_OFFSET */
  Cry_30_Rh850Icus_ReadData(&m1m2m3m4m5Ptr[CRY_30_RH850ICUS_OFFSET_M4 + CRY_30_RH850ICUS_AES128_BLOCKSIZE]);  /* M4 (last 4 byte) */ /* SBSW_CRY_FCTCALL_PTRFORWARDING_OFFSET */
  Cry_30_Rh850Icus_ReadData(&m1m2m3m4m5Ptr[CRY_30_RH850ICUS_OFFSET_M5]);     /* M5 */ /* SBSW_CRY_FCTCALL_PTRFORWARDING_OFFSET */

  /* #13 Wait until ICU has finished. */
  Cry_30_Rh850Icus_WaitBusyFlag();

# if (CRY_30_RH850ICUS_TIMEOUT_API == STD_OFF)
  retVal = CSM_E_OK;
# else
  retVal = Cry_30_Rh850Icus_GetTimeoutApiLoopCalloutOfGeneralOfPCConfig()(Cry_30_Rh850Icus_TimeoutApiService);
# endif

  /* #14 Check for errors. */
  if ((CRY_30_RH850ICUS_ERR & CRY_30_RH850ICUS_ERR_ERR_MASK) != CRY_30_RH850ICUS_ERC_NO_ERROR) /* PRQA S 0303 */ /* MD_CRY_0303_REGISTER_ACCESS */
  {
    retVal = CSM_E_NOT_OK;
  }

  /* #15 Return if command was executed successful or not. */
  return retVal;
} /* Cry_30_Rh850Icus_Hw_KeyWrapSymUpdateInternal() */
#endif /* ( CRY_30_RH850ICUS_KEYWRAPSYMCONFIG == STD_ON ) */

#if ( CRY_30_RH850ICUS_RNGCONFIG == STD_ON )
/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_Hw_RngSeedUpdateInternal()
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
FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_Hw_RngSeedUpdateInternal(
  P2CONST( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) seedPtr)
{
  /* ----- Local Variables ---------------------------------------------- */
  Csm_ReturnType retVal = CSM_E_NOT_OK;

  /* ----- Implementation ----------------------------------------------- */
  /* #10 Check if RNG is initialized. */
  if ((CRY_30_RH850ICUS_STS & CRY_30_RH850ICUS_STS_RND_INIT) == CRY_30_RH850ICUS_STS_RND_INIT) /* PRQA S 0303 */ /* MD_CRY_0303_REGISTER_ACCESS */ /* SBSW_CRY_REGISTER_ACCESS */
  {
    /* #11 Send command to extend the seed to SHE. */
    CRY_30_RH850ICUS_CMD = CRY_30_RH850ICUS_CMD_EXTEND_SEED; /* PRQA S 0303 */ /* MD_CRY_0303_REGISTER_ACCESS */ /* SBSW_CRY_REGISTER_ACCESS */

    /* #12 Write the entropy data to the ICU. */
    Cry_30_Rh850Icus_WriteData(seedPtr); /* SBSW_CRY_FCTCALL_PTRFORWARDING */

    /* #13 Wait until ICU has finished. */
    Cry_30_Rh850Icus_WaitBusyFlag();

# if (CRY_30_RH850ICUS_TIMEOUT_API == STD_OFF)
    retVal = CSM_E_OK;
# else
    retVal = Cry_30_Rh850Icus_GetTimeoutApiLoopCalloutOfGeneralOfPCConfig()(Cry_30_Rh850Icus_TimeoutApiService);
# endif
  }
  /* #20 Return if command was executed successful or not. */
  return retVal;
} /* Cry_30_Rh850Icus_Hw_RngSeedUpdateInternal() */

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_Hw_RngGenerateInternal()
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
FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_Hw_RngGenerateInternal(
  P2VAR( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) resultPtr)
{
  /* ----- Local Variables ---------------------------------------------- */
  Csm_ReturnType retVal = CSM_E_NOT_OK;

  /* ----- Implementation ----------------------------------------------- */
  /* #10 Check if RNG is initialized. */
  if ((CRY_30_RH850ICUS_STS & CRY_30_RH850ICUS_STS_RND_INIT) == CRY_30_RH850ICUS_STS_RND_INIT) /* PRQA S 0303 */ /* MD_CRY_0303_REGISTER_ACCESS */ /* SBSW_CRY_REGISTER_ACCESS */
  {
    /* #20 Send the command for generating the RND. */
    CRY_30_RH850ICUS_CMD = CRY_30_RH850ICUS_CMD_RND; /* PRQA S 0303 */ /* MD_CRY_0303_REGISTER_ACCESS */ /* SBSW_CRY_REGISTER_ACCESS */

    /* #21 Read the generated data from ICU and write it to the pointer. */
    Cry_30_Rh850Icus_ReadData(resultPtr); /* SBSW_CRY_FCTCALL_LOCALVAR */

    /* #22 Wait until ICU has finished. */
    Cry_30_Rh850Icus_WaitBusyFlag();

# if (CRY_30_RH850ICUS_TIMEOUT_API == STD_OFF)
    retVal = CSM_E_OK;
# else
    retVal = Cry_30_Rh850Icus_GetTimeoutApiLoopCalloutOfGeneralOfPCConfig()(Cry_30_Rh850Icus_TimeoutApiService);
# endif
  }

  /* #30 Return if command was executed successful or not. */
  return retVal;
} /* Cry_30_Rh850Icus_Hw_RngGenerateInternal() */

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_Hw_RngInit()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 */
FUNC( void, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_Hw_RngInit( void )
{
  /* ----- Local Variables ---------------------------------------------- */

  /* ----- Implementation ----------------------------------------------- */
  /* #10 Check if RNG is not initialized. */
  if ((CRY_30_RH850ICUS_STS & CRY_30_RH850ICUS_STS_RND_INIT) != CRY_30_RH850ICUS_STS_RND_INIT) /* PRQA S 0303 */ /* MD_CRY_0303_REGISTER_ACCESS */ /* SBSW_CRY_REGISTER_ACCESS */
  {
    /* #20 Send command for initializing the RNG. */
    CRY_30_RH850ICUS_CMD = CRY_30_RH850ICUS_CMD_INIT_RNG; /* PRQA S 0303 */ /* MD_CRY_0303_REGISTER_ACCESS */ /* SBSW_CRY_REGISTER_ACCESS */

    /* #21 Wait until ICU has finished. */
    Cry_30_Rh850Icus_WaitBusyFlag();
  }
} /* Cry_30_Rh850Icus_Hw_RngInit() */

#endif /* ( CRY_30_RH850ICUS_RNGCONFIG == STD_ON ) */

#if ( CRY_30_RH850ICUS_ANY_PRIMITIVE_ENABLED == TRUE)

  /**********************************************************************************************************************
  * Cry_30_Rh850Icus_SwapWord
  **********************************************************************************************************************/
  /*!
  * Internal comment removed.
 *
 *
  */
CRY_30_RH850ICUS_LOCAL FUNC(uint32, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_SwapWord(uint32 source)
{
  /* #10 Swap word bytewise and return it. */
  return (((source >> 24) & 0x000000ffu)
    | ((source >> 8) & 0x0000ff00u)
    | ((source << 8) & 0x00ff0000u)
    | ((source << 24) & 0xff000000u));
}

/**********************************************************************************************************************
* Cry_30_Rh850Icus_ByteToSwappedWord
**********************************************************************************************************************/
/*!
* Internal comment removed.
 *
 *
*/
CRY_30_RH850ICUS_LOCAL FUNC(uint32, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_ByteToSwappedWord(P2CONST(uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) source)
{
  /* #10 Copy byte array in a word and swap it bytewise. */
  return ((uint32)source[0] | (((uint32)source[1]) << 8) | (((uint32)source[2]) << 16) | (((uint32)source[3]) << 24));
}

/**********************************************************************************************************************
* Cry_30_Rh850Icus_SwappedWordToByte
**********************************************************************************************************************/
/*!
* Internal comment removed.
 *
 *
*/
CRY_30_RH850ICUS_LOCAL FUNC(void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_SwappedWordToByte(uint32 source, P2VAR(uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) destination)
{
  /* #10 Copy word to byte array and swap the bytes. */
  destination[3] = (uint8)((source >> 24) & 0xFFu); /* SBSW_CRY_WRITE_SWAP */
  destination[2] = (uint8)((source >> 16) & 0xFFu); /* SBSW_CRY_WRITE_SWAP */
  destination[1] = (uint8)((source >> 8) & 0xFFu); /* SBSW_CRY_WRITE_SWAP */
  destination[0] = (uint8)(source & 0xFFu); /* SBSW_CRY_WRITE_SWAP */
}

/**********************************************************************************************************************
* Cry_30_Rh850Icus_WaitBusyFlag
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
CRY_30_RH850ICUS_LOCAL FUNC(void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_WaitBusyFlag(void)
{
# if (CRY_30_RH850ICUS_TIMEOUT_API == STD_ON)
  Cry_30_Rh850Icus_GetTimeoutApiLocationCalloutOfGeneralOfPCConfig()(Cry_30_Rh850Icus_TimeoutApiService, CRY_SHE_TO_SECTION_START_LOOP);
# endif
  /* #10 Wait for RX request of the SHE. */
  while (((CRY_30_RH850ICUS_SWINT & CRY_30_RH850ICUS_SWINT_RXREQ) == 0u) /* PRQA S 0303 */ /* MD_CRY_0303_REGISTER_ACCESS */
    && ((CRY_30_RH850ICUS_ERR & CRY_30_RH850ICUS_ERR_ERR_MASK) != CRY_30_RH850ICUS_ERC_MEMORY_FAILURE) /* PRQA S 0303 */ /* MD_CRY_0303_REGISTER_ACCESS */
    && ((CRY_30_RH850ICUS_ERR & CRY_30_RH850ICUS_ERR_ERR_MASK) != CRY_30_RH850ICUS_ERC_BUSY)) /* PRQA S 0303 */ /* MD_CRY_0303_REGISTER_ACCESS */ /* COV_CRY_ECC_ERROR */
  {
# if (CRY_30_RH850ICUS_TIMEOUT_API == STD_ON)
    /* #20 If timeout API is activated, check for timeout while polling and cancel command in case of a timeout. */
    if (Cry_30_Rh850Icus_GetTimeoutApiLoopCalloutOfGeneralOfPCConfig()(Cry_30_Rh850Icus_TimeoutApiService) == CSM_E_NOT_OK)
    {
      Cry_30_Rh850Icus_CancelCommand();
      break;
    }
# endif
  }
# if (CRY_30_RH850ICUS_TIMEOUT_API == STD_ON)
  Cry_30_Rh850Icus_GetTimeoutApiLocationCalloutOfGeneralOfPCConfig()(Cry_30_Rh850Icus_TimeoutApiService, CRY_SHE_TO_SECTION_STOP_LOOP);

  Cry_30_Rh850Icus_GetTimeoutApiLocationCalloutOfGeneralOfPCConfig()(Cry_30_Rh850Icus_TimeoutApiService, CRY_SHE_TO_SECTION_START_LOOP);
# endif
  /* #30 Wait until busy flag is cleared (polling). */
  while (((CRY_30_RH850ICUS_STS & CRY_30_RH850ICUS_STS_BUSY) == CRY_30_RH850ICUS_STS_BUSY) /* PRQA S 0303 */ /* MD_CRY_0303_REGISTER_ACCESS */
    && ((CRY_30_RH850ICUS_ERR & CRY_30_RH850ICUS_ERR_ERR_MASK) != CRY_30_RH850ICUS_ERC_MEMORY_FAILURE) /* PRQA S 0303 */ /* MD_CRY_0303_REGISTER_ACCESS */
    && ((CRY_30_RH850ICUS_ERR & CRY_30_RH850ICUS_ERR_ERR_MASK) != CRY_30_RH850ICUS_ERC_BUSY)) /* PRQA S 0303 */ /* MD_CRY_0303_REGISTER_ACCESS */ /* COV_CRY_BUSY */
  {
# if (CRY_30_RH850ICUS_TIMEOUT_API == STD_ON)
    /* #40 If timeout API is activated, check for timeout while polling and cancel command in case of a timeout. */
    if (Cry_30_Rh850Icus_GetTimeoutApiLoopCalloutOfGeneralOfPCConfig()(Cry_30_Rh850Icus_TimeoutApiService) == CSM_E_NOT_OK) /* COV_CRY_BUSY */
    {
      Cry_30_Rh850Icus_CancelCommand();
      break;
    }
# endif
  }
# if (CRY_30_RH850ICUS_TIMEOUT_API == STD_ON)
  Cry_30_Rh850Icus_GetTimeoutApiLocationCalloutOfGeneralOfPCConfig()(Cry_30_Rh850Icus_TimeoutApiService, CRY_SHE_TO_SECTION_STOP_LOOP);
# endif
  /* #50 Clear the RX request on the SHE. */
  CRY_30_RH850ICUS_SWINTCL |= CRY_30_RH850ICUS_SWINTCL_RXREQCLR; /* PRQA S 0303 */ /* MD_CRY_0303_REGISTER_ACCESS */ /* SBSW_CRY_REGISTER_ACCESS */
}

/**********************************************************************************************************************
*  GLOBAL FUNCTIONS
**********************************************************************************************************************/

/**********************************************************************************************************************
* Cry_30_Rh850Icus_WriteData
**********************************************************************************************************************/
/*!
* Internal comment removed.
 *
 *
 *
 *
 *
*/
CRY_30_RH850ICUS_LOCAL FUNC(void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_WriteData(P2CONST(uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) data)
{
# if (CRY_30_RH850ICUS_TIMEOUT_API == STD_ON)
  Cry_30_Rh850Icus_GetTimeoutApiLocationCalloutOfGeneralOfPCConfig()(Cry_30_Rh850Icus_TimeoutApiService, CRY_SHE_TO_SECTION_START_LOOP);
# endif
  /* #10 Wait until SHE permits write access. */
  while (((CRY_30_RH850ICUS_SWINT & CRY_30_RH850ICUS_SWINT_TXREQ) == 0u) /* PRQA S 0303 */ /* MD_CRY_0303_REGISTER_ACCESS */
    && ((CRY_30_RH850ICUS_ERR & CRY_30_RH850ICUS_ERR_ERR_MASK) != CRY_30_RH850ICUS_ERC_MEMORY_FAILURE) /* PRQA S 0303 */ /* MD_CRY_0303_REGISTER_ACCESS */
    && ((CRY_30_RH850ICUS_ERR & CRY_30_RH850ICUS_ERR_ERR_MASK) != CRY_30_RH850ICUS_ERC_BUSY)) /* PRQA S 0303 */ /* MD_CRY_0303_REGISTER_ACCESS */ /* COV_CRY_ECC_ERROR */
  {
# if (CRY_30_RH850ICUS_TIMEOUT_API == STD_ON)
    /* #20 If timeout API is activated, check for timeout while polling and cancel command in case of a timeout. */
    if (Cry_30_Rh850Icus_GetTimeoutApiLoopCalloutOfGeneralOfPCConfig()(Cry_30_Rh850Icus_TimeoutApiService) == CSM_E_NOT_OK)
    {
      Cry_30_Rh850Icus_CancelCommand();
      break;
    }
# endif
  }
# if (CRY_30_RH850ICUS_TIMEOUT_API == STD_ON)
  Cry_30_Rh850Icus_GetTimeoutApiLocationCalloutOfGeneralOfPCConfig()(Cry_30_Rh850Icus_TimeoutApiService, CRY_SHE_TO_SECTION_STOP_LOOP);
# endif
  /* #30 Clear write access bit on the SHE (TXREQ). */
  CRY_30_RH850ICUS_SWINTCL |= CRY_30_RH850ICUS_SWINTCL_TXREQCLR; /* PRQA S 0303 */ /* MD_CRY_0303_REGISTER_ACCESS */ /* SBSW_CRY_REGISTER_ACCESS */

  /* #40 Write the 16 byte input data to the SHE. */
  /* PRQA S 0303 4 */ /* MD_CRY_0303_REGISTER_ACCESS */
  CRY_30_RH850ICUS_IDAT = Cry_30_Rh850Icus_ByteToSwappedWord(&data[0]); /* SBSW_CRY_REGISTER_ACCESS */ /* SBSW_CRY_FCTCALL_PTRFORWARDING_OFFSET */
  CRY_30_RH850ICUS_IDAT = Cry_30_Rh850Icus_ByteToSwappedWord(&data[4]); /* SBSW_CRY_REGISTER_ACCESS */ /* SBSW_CRY_FCTCALL_PTRFORWARDING_OFFSET */
  CRY_30_RH850ICUS_IDAT = Cry_30_Rh850Icus_ByteToSwappedWord(&data[8]); /* SBSW_CRY_REGISTER_ACCESS */ /* SBSW_CRY_FCTCALL_PTRFORWARDING_OFFSET */
  CRY_30_RH850ICUS_IDAT = Cry_30_Rh850Icus_ByteToSwappedWord(&data[12]); /* SBSW_CRY_REGISTER_ACCESS */ /* SBSW_CRY_FCTCALL_PTRFORWARDING_OFFSET */
}

/**********************************************************************************************************************
* Cry_30_Rh850Icus_ReadData
**********************************************************************************************************************/
/*!
* Internal comment removed.
 *
 *
 *
 *
 *
*/
CRY_30_RH850ICUS_LOCAL FUNC(void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_ReadData(P2VAR(uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) data)
{
# if (CRY_30_RH850ICUS_TIMEOUT_API == STD_ON)
  Cry_30_Rh850Icus_GetTimeoutApiLocationCalloutOfGeneralOfPCConfig()(Cry_30_Rh850Icus_TimeoutApiService, CRY_SHE_TO_SECTION_START_LOOP);
# endif
  /* #10 Wait until SHE permits read access. */
  while (((CRY_30_RH850ICUS_SWINT & CRY_30_RH850ICUS_SWINT_RXREQ) == 0) /* PRQA S 0303 */ /* MD_CRY_0303_REGISTER_ACCESS */
    && ((CRY_30_RH850ICUS_ERR & CRY_30_RH850ICUS_ERR_ERR_MASK) != CRY_30_RH850ICUS_ERC_MEMORY_FAILURE) /* PRQA S 0303 */ /* MD_CRY_0303_REGISTER_ACCESS */ /* COV_CRY_ECC_ERROR */
    && ((CRY_30_RH850ICUS_ERR & CRY_30_RH850ICUS_ERR_ERR_MASK) != CRY_30_RH850ICUS_ERC_BUSY)) /* PRQA S 0303 */ /* MD_CRY_0303_REGISTER_ACCESS */ /* COV_CRY_ECC_ERROR */
  {
# if (CRY_30_RH850ICUS_TIMEOUT_API == STD_ON)
    /* #20 If timeout API is activated, check for timeout while polling and cancel command in case of a timeout. */
    if (Cry_30_Rh850Icus_GetTimeoutApiLoopCalloutOfGeneralOfPCConfig()(Cry_30_Rh850Icus_TimeoutApiService) == CSM_E_NOT_OK)
    {
      Cry_30_Rh850Icus_CancelCommand();
      break;
    }
# endif
  }
# if (CRY_30_RH850ICUS_TIMEOUT_API == STD_ON)
  Cry_30_Rh850Icus_GetTimeoutApiLocationCalloutOfGeneralOfPCConfig()(Cry_30_Rh850Icus_TimeoutApiService, CRY_SHE_TO_SECTION_STOP_LOOP);
# endif
  /* #30 Clear read access bit on the SHE (RXREQ). */
  CRY_30_RH850ICUS_SWINTCL |= CRY_30_RH850ICUS_SWINTCL_RXREQCLR; /* PRQA S 0303 */ /* MD_CRY_0303_REGISTER_ACCESS */ /* SBSW_CRY_REGISTER_ACCESS */

  /* #40 Read the 16 byte output data of the SHE. */
  /* PRQA S 0303 4 */ /* MD_CRY_0303_REGISTER_ACCESS */
  Cry_30_Rh850Icus_SwappedWordToByte(CRY_30_RH850ICUS_ODAT, &data[0]); /* SBSW_CRY_FCTCALL_PTRFORWARDING_OFFSET */
  Cry_30_Rh850Icus_SwappedWordToByte(CRY_30_RH850ICUS_ODAT, &data[4]); /* SBSW_CRY_FCTCALL_PTRFORWARDING_OFFSET */
  Cry_30_Rh850Icus_SwappedWordToByte(CRY_30_RH850ICUS_ODAT, &data[8]); /* SBSW_CRY_FCTCALL_PTRFORWARDING_OFFSET */
  Cry_30_Rh850Icus_SwappedWordToByte(CRY_30_RH850ICUS_ODAT, &data[12]); /* SBSW_CRY_FCTCALL_PTRFORWARDING_OFFSET */
}

/**********************************************************************************************************************
* Cry_30_Rh850Icus_SendCommand
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
CRY_30_RH850ICUS_LOCAL FUNC(void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_SendCommand(uint32 cmd, uint32 keyId, uint32 keyIdType)
{
  uint32 tmpKeyId;
  uint32 flagKeyMd = 0u;

  flagKeyMd = Cry_30_Rh850Icus_GetExtKeyFlag(keyId, keyIdType);
  tmpKeyId = Cry_30_Rh850Icus_GetRawKeyId(keyId, keyIdType);

  /* #40 Send command to the SHE (including the information about the keyId and page). */
  /* The load key command does not need the information about keyid, only the md flag */
  if (cmd == CRY_30_RH850ICUS_CMD_LOAD_KEY)
  {
    tmpKeyId = 0u;
  }

  /* PRQA S 0303 1 */ /* MD_CRY_0303_REGISTER_ACCESS */
  CRY_30_RH850ICUS_CMD = (CRY_30_RH850ICUS_CMD_CMD_MASK   & ((cmd) << CRY_30_RH850ICUS_CMD_CMD_OFFSET)) /* SBSW_CRY_REGISTER_ACCESS */
    | (CRY_30_RH850ICUS_CMD_KEYID_MASK & ((tmpKeyId) << CRY_30_RH850ICUS_CMD_KEYID_OFFSET))
    | (CRY_30_RH850ICUS_CMD_KEYMD_MASK & ((flagKeyMd) << CRY_30_RH850ICUS_CMD_KEYMD_OFFSET));
}

# if (CRY_30_RH850ICUS_FHVE_SUPPORT == STD_ON)
/**********************************************************************************************************************
* Cry_30_Rh850Icus_DisableFlashSoftwareProtection
**********************************************************************************************************************/
/*!
* Internal comment removed.
 *
 *
 *
*/
CRY_30_RH850ICUS_LOCAL FUNC(void, CRY_30_RH850ICUS_CODE)  Cry_30_Rh850Icus_DisableFlashSoftwareProtection(void)
{
  /* #10 Backup the value in the FHVE3 and FHVE15 register. */
  Cry_30_Rh850Icus_FHVE3Backup = CRY_30_RH850ICUS_FHVE3; /* PRQA S 0303 */ /* MD_CRY_0303_REGISTER_ACCESS */
  Cry_30_Rh850Icus_FHVE15Backup = CRY_30_RH850ICUS_FHVE15; /* PRQA S 0303 */ /* MD_CRY_0303_REGISTER_ACCESS */

  /* #20 Disable the flash software protection. */
  CRY_30_RH850ICUS_FHVE3 = CRY_30_RH850ICUS_ENABLE_FLASH_ACCESS; /* PRQA S 0303 */ /* MD_CRY_0303_REGISTER_ACCESS */ /* SBSW_CRY_REGISTER_ACCESS */
  CRY_30_RH850ICUS_FHVE15 = CRY_30_RH850ICUS_ENABLE_FLASH_ACCESS; /* PRQA S 0303 */ /* MD_CRY_0303_REGISTER_ACCESS */ /* SBSW_CRY_REGISTER_ACCESS */
}

/**********************************************************************************************************************
* Cry_30_Rh850Icus_EnableFlashSoftwareProtection
**********************************************************************************************************************/
/*!
* Internal comment removed.
 *
 *
*/
CRY_30_RH850ICUS_LOCAL FUNC(void, CRY_30_RH850ICUS_CODE)  Cry_30_Rh850Icus_EnableFlashSoftwareProtection(void)
{
  /* #10 Restore the original values of the FHVE3 and FHVE15 register. */
  CRY_30_RH850ICUS_FHVE3 = Cry_30_Rh850Icus_FHVE3Backup; /* PRQA S 0303 */ /* MD_CRY_0303_REGISTER_ACCESS */ /* SBSW_CRY_REGISTER_ACCESS */
  CRY_30_RH850ICUS_FHVE15 = Cry_30_Rh850Icus_FHVE15Backup; /* PRQA S 0303 */ /* MD_CRY_0303_REGISTER_ACCESS */ /* SBSW_CRY_REGISTER_ACCESS */
}
# endif

#endif

#if ( (CRY_30_RH850ICUS_SELF_TEST == STD_ON) && ( CRY_30_RH850ICUS_CMACAES128VERCONFIG == STD_ON ) )
# if (CRY_30_RH850ICUS_SELF_TEST_HARDWARE_SUPPORT == STD_ON) /* COV_CRY_SELF_TEST_HARDWARE_SUPPORT */
 /**********************************************************************************************************************
 *  Cry_30_Rh850Icus_Hw_SelfTest()
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
FUNC(Csm_ReturnType, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_Hw_SelfTest(void)
{
  Csm_ReturnType retVal = CSM_E_NOT_OK;

  /* #10 Check if the driver has not been initialized before. */
  if (CRY_30_RH850ICUS_MALKEY0 != Cry_30_Rh850Icus_ByteToSwappedWord(&Cry_30_Rh850Icus_SelfTest_Key[0])) /* SBSW_CRY_FCTCALL_LOCALVAR */
  {
    /* #12  Initialize the test vector key. */
    /* PRQA S 0303 4 */ /* MD_CRY_0303_REGISTER_ACCESS */
    CRY_30_RH850ICUS_MALKEY0 = Cry_30_Rh850Icus_ByteToSwappedWord(&Cry_30_Rh850Icus_SelfTest_Key[0]);   /* SBSW_CRY_REGISTER_ACCESS */ /* SBSW_CRY_FCTCALL_LOCALVAR */
    CRY_30_RH850ICUS_MALKEY1 = Cry_30_Rh850Icus_ByteToSwappedWord(&Cry_30_Rh850Icus_SelfTest_Key[4]);   /* SBSW_CRY_REGISTER_ACCESS */ /* SBSW_CRY_FCTCALL_LOCALVAR */
    CRY_30_RH850ICUS_MALKEY2 = Cry_30_Rh850Icus_ByteToSwappedWord(&Cry_30_Rh850Icus_SelfTest_Key[8]);   /* SBSW_CRY_REGISTER_ACCESS */ /* SBSW_CRY_FCTCALL_LOCALVAR */
    CRY_30_RH850ICUS_MALKEY3 = Cry_30_Rh850Icus_ByteToSwappedWord(&Cry_30_Rh850Icus_SelfTest_Key[12]);  /* SBSW_CRY_REGISTER_ACCESS */ /* SBSW_CRY_FCTCALL_LOCALVAR */

    /* #13 Initialize the test vector data. */
    /* PRQA S 0303 4 */ /* MD_CRY_0303_REGISTER_ACCESS */
    CRY_30_RH850ICUS_MALDAT0 = Cry_30_Rh850Icus_ByteToSwappedWord(&Cry_30_Rh850Icus_SelfTest_Msg[0]);   /* SBSW_CRY_REGISTER_ACCESS */ /* SBSW_CRY_FCTCALL_LOCALVAR */
    CRY_30_RH850ICUS_MALDAT1 = Cry_30_Rh850Icus_ByteToSwappedWord(&Cry_30_Rh850Icus_SelfTest_Msg[4]);   /* SBSW_CRY_REGISTER_ACCESS */ /* SBSW_CRY_FCTCALL_LOCALVAR */
    CRY_30_RH850ICUS_MALDAT2 = Cry_30_Rh850Icus_ByteToSwappedWord(&Cry_30_Rh850Icus_SelfTest_Msg[8]);   /* SBSW_CRY_REGISTER_ACCESS */ /* SBSW_CRY_FCTCALL_LOCALVAR */
    CRY_30_RH850ICUS_MALDAT3 = Cry_30_Rh850Icus_ByteToSwappedWord(&Cry_30_Rh850Icus_SelfTest_Msg[12]);  /* SBSW_CRY_REGISTER_ACCESS */ /* SBSW_CRY_FCTCALL_LOCALVAR */

    /* #14 Initialize the test vector MAC. */
    /* PRQA S 0303 4 */ /* MD_CRY_0303_REGISTER_ACCESS */
    CRY_30_RH850ICUS_MALMAC0 = Cry_30_Rh850Icus_ByteToSwappedWord(&Cry_30_Rh850Icus_SelfTest_Mac[0]);   /* SBSW_CRY_REGISTER_ACCESS */ /* SBSW_CRY_FCTCALL_LOCALVAR */
    CRY_30_RH850ICUS_MALMAC1 = Cry_30_Rh850Icus_ByteToSwappedWord(&Cry_30_Rh850Icus_SelfTest_Mac[4]);   /* SBSW_CRY_REGISTER_ACCESS */ /* SBSW_CRY_FCTCALL_LOCALVAR */
    CRY_30_RH850ICUS_MALMAC2 = Cry_30_Rh850Icus_ByteToSwappedWord(&Cry_30_Rh850Icus_SelfTest_Mac[8]);   /* SBSW_CRY_REGISTER_ACCESS */ /* SBSW_CRY_FCTCALL_LOCALVAR */
    CRY_30_RH850ICUS_MALMAC3 = Cry_30_Rh850Icus_ByteToSwappedWord(&Cry_30_Rh850Icus_SelfTest_Mac[12]);  /* SBSW_CRY_REGISTER_ACCESS */ /* SBSW_CRY_FCTCALL_LOCALVAR */
  }

  /* #15 Do a MAC verification with the CHK_VERIFY_MAC1 command. */
  CRY_30_RH850ICUS_CMD = CRY_30_RH850ICUS_CHK_VERIFY_MAC1; /* PRQA S 0303 */ /* MD_CRY_0303_REGISTER_ACCESS */ /* SBSW_CRY_REGISTER_ACCESS */

  /* #16 Wait until ICU has finished. */
  Cry_30_Rh850Icus_WaitBusyFlag();

  /* #17 Check if verification has passed.  */
  if ((CRY_30_RH850ICUS_ERR & CRY_30_RH850ICUS_ERR_ERR_MASK) != CRY_30_RH850ICUS_ERC_GENERAL_ERROR) /* PRQA S 0303 */ /* MD_CRY_0303_REGISTER_ACCESS */ /* COV_CRY_SELF_TEST */
  {
    /* #18 Do a MAC verification with the CHK_VERIFY_MAC2 command and check if it has failed. */
    CRY_30_RH850ICUS_CMD = CRY_30_RH850ICUS_CHK_VERIFY_MAC2; /* PRQA S 0303 */ /* MD_CRY_0303_REGISTER_ACCESS */ /* SBSW_CRY_REGISTER_ACCESS */

    /* #19 Wait until ICU has finished. */
    Cry_30_Rh850Icus_WaitBusyFlag();

    /* #20 Check if verification has failed. */
    if ((CRY_30_RH850ICUS_ERR & CRY_30_RH850ICUS_ERR_ERR_MASK) != CRY_30_RH850ICUS_ERC_NO_ERROR) /* PRQA S 0303 */ /* MD_CRY_0303_REGISTER_ACCESS */ /* COV_CRY_SELF_TEST */
    {
      retVal = CSM_E_OK;
    }
  }

  /* #30 Return if self test has been successful. */
  return retVal;
} /* PRQA S 6080 */ /* MD_MSR_STMIF */ /* Cry_30_Rh850Icus_SelfTest() */
# endif
#endif

#define CRY_30_RH850ICUS_STOP_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Module specific MISRA deviations
 *********************************************************************************************************************/
/* module specific MISRA deviations:

MD_CRY_0303_REGISTER_ACCESS:
Reason:       Access to registers of the hardware using an address.
Risk:         Size of pointer type is hardware specific - not compatible between platforms. Invalid memory access.
Prevention:   Cry-Driver for specific hardware (pointer size type can not differ).
Valid memory access with correct address covered by code review.

*/

/* SBSW_JUSTIFICATION_BEGIN

\ID SBSW_CRY_FCTCALL_PTRFORWARDING_OFFSET
\DESCRIPTION    The function is called by forwarding passed pointers with calculated offset inside range of passed length.
\COUNTERMEASURE \N The pointer is forwarded and assumed to be valid. Furthermore, the offset is calculated by using passed length of pointer inside for loop or checking length before.

\ID SBSW_CRY_FCTCALL_WORKSPACE
\DESCRIPTION    Workspace pointer is passed to function.
\COUNTERMEASURE \R [CM_CRY_WORKSPACEADDRESS]

\ID SBSW_CRY_REGISTER_ACCESS
\DESCRIPTION    The function writes to a defined address of the controller.
\COUNTERMEASURE \N Validity of address is ensured by reviews and tests of the module.

\ID SBSW_CRY_WRITE_ARRAY_BY_FIXPOS
\DESCRIPTION    The function writes to the array to a fixed position.
\COUNTERMEASURE \N Ensuring that position is smaller than size of the array. Checked by compiler and review.

\ID SBSW_CRY_WRITE_SWAP
\DESCRIPTION    The function writes a 32 bit value to a 8 Bit array.
\COUNTERMEASURE \N Caller must ensure that pointer is valid and has at least 4 Bytes left.

\ID SBSW_CRY_WRITE_ARRAY
\DESCRIPTION    The function writes to the array with an fixed size.
\COUNTERMEASURE \R Loop is limited to the size of the array by using the same define as for the array size definition.

SBSW_JUSTIFICATION_END */

/* COV_JUSTIFICATION_BEGIN

\ID COV_CRY_LOCAL
\ACCEPT TX
\REASON Used for debugging
\PREVENTION Covered by code review

\ID COV_CRY_ICU_DEACTIVATED
\ACCEPT TX
\REASON Without ICU Enabled, the ICU can not be tested. The condition can not be simulated to be false.
\PREVENTION Covered by code review

\ID COV_CRY_ECC_ERROR
\ACCEPT TF tf tx tf
\REASON No error can be stimulated
\PREVENTION Covered by code review and tests

\ID COV_CRY_BUSY
\ACCEPT XF tf tx xf
\ACCEPT TF tf tx tf
\ACCEPT TX
\REASON When hardware is not busy, no error can be generated that the hardware is busy. Furthermore, ECC error can't be stimulated. On the other side, if we wait for Busy to disappear, we do not nescessarily have a BUSY error.
\PREVENTION Covered by code review and tests

\ID COV_CRY_ICUS_VERSION
\ACCEPT TX
\ACCEPT XF
\ACCEPT XX
\REASON This driver can be used for different hardware versions.
\PREVENTION Covered by code review and tests

\ID COV_CRY_SECOND_KEY_PAGE
\ACCEPT TX
\ACCEPT XF
\REASON This driver can be used for different hardware versions of which not all have a second keypage.
\PREVENTION Covered by code review and tests

COV_JUSTIFICATION_END */

/**********************************************************************************************************************
 *  END OF FILE: CRY_30_RH850ICUS_HW.C
 *********************************************************************************************************************/

