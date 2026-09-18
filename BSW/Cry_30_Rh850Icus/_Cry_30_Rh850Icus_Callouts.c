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
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  Cry_30_Rh850Icus_Callouts.c
 *    Component:  DrvCry_Rh850Icus
 *       Module:  MICROSAR Cryptographic library module (CRY)
 *    Generator:  -
 *
 *  Description:  Template  for implementation of the callouts issued by the Cry_30_Rh850Icus.
 *********************************************************************************************************************/

#define CRY_30_RH850ICUS_CALLOUTS_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Cry_30_Rh850Icus_Callouts.h"
#include "Cry_30_Rh850Icus_Hw.h"
#ifdef CRY_30_RH850ICUS_BSWM_USER_ID
# include "BswM.h"
#endif

#if ( (CRY_30_RH850ICUS_DATA_FLASH_SYNCHRONISATION == STD_ON) \
   || (CRY_30_RH850ICUS_DATA_FLASH_CONTROL == STD_ON))
# include "r_fdl.h"
# include "Fls.h"
# include "r_fdl_global.h"
#endif

 /**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 **********************************************************************************************************************/
#if !defined (CRY_30_RH850ICUS_LOCAL)
# define CRY_30_RH850ICUS_LOCAL static
#endif

/**********************************************************************************************************************
 *  LOCAL DATA PROTOTYPES
 **********************************************************************************************************************/

#if (CRY_30_RH850ICUS_DATA_FLASH_SYNCHRONISATION == STD_ON)
/*! Dummy variable to represent the Resource Access Coordinator */
boolean resourceDenied = FALSE;
#endif

/**********************************************************************************************************************
*  GLOBAL FUNCTIONS
**********************************************************************************************************************/
#if (CRY_30_RH850ICUS_HARDWARE_ERROR_CODE == STD_ON)
/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_HardwareErrorCode_Callout()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
FUNC(void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_HardwareErrorCode_Callout(uint32 error)
{

# ifdef CRY_30_RH850ICUS_BSWM_USER_ID
  BswM_ModeType bswmMode;

  /* Convert the internal error code to a platform independant value */
  switch (error)
  {
    case CRY_30_RH850ICUS_ERC_NO_ERROR:
      bswmMode = CRY_30_RH850ICUS_SHE_ERC_NO_ERROR;
      break;
    case CRY_30_RH850ICUS_ERC_SEQUENCE_ERROR:
      bswmMode = CRY_30_RH850ICUS_SHE_ERC_SEQUENCE_ERROR;
      break;
    case CRY_30_RH850ICUS_ERC_BUSY:
      bswmMode = CRY_30_RH850ICUS_SHE_ERC_BUSY;
      break;
    case CRY_30_RH850ICUS_ERC_KEY_NOT_AVAILABLE:
      bswmMode = CRY_30_RH850ICUS_SHE_ERC_KEY_NOT_AVAILABLE;
      break;
    case CRY_30_RH850ICUS_ERC_KEY_INVALID:
      bswmMode = CRY_30_RH850ICUS_SHE_ERC_KEY_INVALID;
      break;
    case CRY_30_RH850ICUS_ERC_KEY_EMPTY:
      bswmMode = CRY_30_RH850ICUS_SHE_ERC_KEY_EMPTY;
      break;
    case CRY_30_RH850ICUS_ERC_NO_SECURE_BOOT:
      bswmMode = CRY_30_RH850ICUS_SHE_ERC_NO_SECURE_BOOT;
      break;
    case CRY_30_RH850ICUS_ERC_KEY_WRITE_PROTECTED:
      bswmMode = CRY_30_RH850ICUS_SHE_ERC_KEY_WRITE_PROTECTED;
      break;
    case CRY_30_RH850ICUS_ERC_KEY_UPDATE_ERROR:
      bswmMode = CRY_30_RH850ICUS_SHE_ERC_KEY_UPDATE_ERROR;
      break;
    case CRY_30_RH850ICUS_ERC_RNG_SEED:
      bswmMode = CRY_30_RH850ICUS_SHE_ERC_RNG_SEED;
      break;
    case CRY_30_RH850ICUS_ERC_MEMORY_FAILURE:
      bswmMode = CRY_30_RH850ICUS_SHE_ERC_MEMORY_FAILURE;
      break;
    case CRY_30_RH850ICUS_ERC_NO_DEBUGGING:
      bswmMode = CRY_30_RH850ICUS_SHE_ERC_NO_DEBUGGING;
      break;
    case CRY_30_RH850ICUS_ERC_GENERAL_ERROR:
      bswmMode = CRY_30_RH850ICUS_SHE_ERC_GENERAL_ERROR;
      break;
    default:
      break;
  }

  /* Pass the error with the Cry User Id to a mode manager port */
  BswM_RequestMode(CRY_30_RH850ICUS_BSWM_USER_ID, bswmMode);
# endif
}
#endif

#if (CRY_30_RH850ICUS_DATA_FLASH_SYNCHRONISATION == STD_ON)

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_DataFlashReadStart_Callout()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
FUNC(boolean, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_DataFlashReadStart_Callout()
{
  boolean retVal = TRUE;

  /* Get the Data flash read hanlde via the Resource Access Coordinator */

  /* following code is for dummy purposes */
  if ((R_FDL_FCUFct_ChkReady() == R_FDL_FALSE)
    || (resourceDenied == TRUE))
  {
    retVal = FALSE; /* Recource can't be acquired */
  }

  return retVal;
}

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_DataFlashReadEnd_Callout()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
FUNC(void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_DataFlashReadEnd_Callout()
{
  /* Release the read handle */
}

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_DataFlashWriteStart_Callout()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
FUNC(boolean, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_DataFlashWriteStart_Callout()
{
  boolean retVal = TRUE;

  /* Get the Data flash write hanlde via the Resource Access Coordinator */

  /* following code is for dummy purposes */
  if ((R_FDL_FCUFct_ChkReady() == R_FDL_FALSE)
    || (resourceDenied == TRUE))
  {
    retVal = FALSE; /* Recource can't be acquired */
  }

  return retVal;
}

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_DataFlashWriteEnd_Callout()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
FUNC(void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_DataFlashWriteEnd_Callout()
{
  /* Release the write handle */
}

#endif

#if (CRY_30_RH850ICUS_DATA_FLASH_CONTROL == STD_ON)

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_DataFlashSetReadMode_Callout()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
FUNC(void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_DataFlashSetReadMode_Callout()
{
  /* Set the dataflash back to Read-Mode, because ICUS could have left it in PE-Mode after issuing a cancel command */
  R_FDL_FCUFct_SwitchMode(R_FCU_MODE_USER);
}

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_DataFlashReturnFromCommandLockedState_Callout()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
FUNC(void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_DataFlashReturnFromCommandLockedState_Callout()
{
  /* Ensure, that the dataflash is not it command-locked mode after this function returns */
}

#endif

/**********************************************************************************************************************
 *  END OF FILE: CRY_30_RH850ICUS_CALLOUTS.C
 *********************************************************************************************************************/

