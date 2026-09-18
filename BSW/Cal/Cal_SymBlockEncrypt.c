/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2015 by Vector Informatik GmbH.                                                  All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  Cal_SymBlockEncrypt.c
 *      Project:  SysService_AsrCal
 *       Module:  MICROSAR Crypto Abstraction Library (Cal)
 *    Generator:  -
 *
 *  Description:  This module implements the Crypto Abstraction Layer to perform
 *                cryptographic routine. The CAL provides synchronous services
 *                to enable a unique access to basic cryptographic functionalities
 *                for all software modules and software components.
 *
 *  Limitation to the Autosar specification:
 *                This implementation provides only a sub-set of the functionality
 *                as specified in the CAL_SWS of Autosar.
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Refer to the module's header file (Cal.h).
 *
 *  FILE VERSION
 *  -------------------------------------------------------------------------------------------------------------------
 *  Refer to the VERSION CHECK below.
 *********************************************************************************************************************/

#define CAL_SYMBLOCKENCRYPT_SOURCE
/**********************************************************************************************************************
*  INCLUDES
**********************************************************************************************************************/
#include "Cal.h"

/**********************************************************************************************************************
 *  VERSION CHECK
 *********************************************************************************************************************/
/* vendor specific version information is BCD coded */
#if (  (CAL_SW_MAJOR_VERSION != (0x02)) \
    || (CAL_SW_MINOR_VERSION != (0x01)) \
    || (CAL_SW_PATCH_VERSION != (0x02)) )
# error "Vendor specific version numbers of Cal_SymBlockEncrypt.c and Cal.h are inconsistent"
#endif

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/* PRQA S 3453 7 */ /* MD_CAL_3453 */
#ifndef CAL_DUMMYSTATEMENT
# if (CAL_USE_DUMMY_STATEMENT == STD_ON)
#  define CAL_DUMMYSTATEMENT(x) (void)(x)
# else
#  define CAL_DUMMYSTATEMENT(x)
# endif
#endif

#if ( CAL_NUMBER_OF_SYM_BLOCK_ENCRYPT_CONFIGS != 0 )
/**********************************************************************************************************************
 *  LOCAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
typedef struct
{
  Cal_AlignType Buffer[CAL_SYMBLOCKENCRYPT_CONTEXT_BUFFER_SIZE - 1]; /* Generator added one element for the status */
  Cal_AlignType Status;
} Cal_SymBlockEncryptCtxBufStruct;

/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 **********************************************************************************************************************/
# define CAL_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# if ( CAL_NUMBER_OF_SYM_BLOCK_ENCRYPT_CONFIGS != 0 )
STATIC FUNC(P2CONST(Cal_SymBlockEncryptConfigType, AUTOMATIC, CAL_APPL_DATA), CAL_CODE) Cal_SymBlockEncryptGetCfg(Cal_ConfigIdType cfgId);
# endif /* ( CAL_NUMBER_OF_SYM_BLOCK_ENCRYPT_CONFIGS != 0 ) */

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 **********************************************************************************************************************/

# if ( CAL_NUMBER_OF_SYM_BLOCK_ENCRYPT_CONFIGS != 0 )
/**********************************************************************************************************************
  Cal_SymBlockEncryptGetCfg
**********************************************************************************************************************/
STATIC FUNC(P2CONST(Cal_SymBlockEncryptConfigType, AUTOMATIC, CAL_APPL_DATA), CAL_CODE) Cal_SymBlockEncryptGetCfg(Cal_ConfigIdType cfgId)
{
  P2CONST(Cal_SymBlockEncryptConfigType, AUTOMATIC, CAL_APPL_DATA) calRtn;
  uint8 i;

  calRtn = NULL_PTR;

  for(i = 0; i < CAL_NUMBER_OF_SYM_BLOCK_ENCRYPT_CONFIGS; i++)
  {
    if(cfgId == Cal_SymBlockEncryptConfig[i].ConfigId)
    {
      calRtn = &Cal_SymBlockEncryptConfig[i];
      break;
    }
  }

  return calRtn;
}
# endif /* ( CAL_NUMBER_OF_SYM_BLOCK_ENCRYPT_CONFIGS != 0 ) */

/**********************************************************************************************************************
*  GLOBAL FUNCTIONS
**********************************************************************************************************************/

/**********************************************************************************************************************
*  Cal_SymBlockEncryptStart
**********************************************************************************************************************/
/*! \brief                          This function shall be used to initialize the symmetrical block encrypt service of
*                                   the CAL module.
*  \param[in]  cfgId                Holds the identifier of the CAL module configuration which has to be used during
*                                   the symmetrical block encryption computation.
*  \param[in/out] contextBuffer     Holds the pointer to the buffer in which the context of this service can be
*                                   stored.
*  \param[in] keyPtr                Holds a pointer to the key which has to be used during the symmetrical block
*                                   encryption computation.
*  \return  CAL_E_OK                - Request successful
*  \return CAL_E_NOT_OK             - Request failed
*  \description                     This function shall be used to initialize the symmetrical block encrypt service of
*                                   the CAL module.
*                                   The function shall initialize the context buffer given by "contextBuffer", call the
*                                   function Cpl_<Primitive>Start of the primitive which is identified by the "cfgId"
*                                   and return the value returned by that function. If Cpl_<Primitive>Start returned
*                                   successfully, the function shall set the state of this service to "active", and
*                                   store this state in the context buffer.
**********************************************************************************************************************/
FUNC(Cal_ReturnType, CAL_CODE) Cal_SymBlockEncryptStart(Cal_ConfigIdType cfgId,
                                                        Cal_SymBlockEncryptCtxBufType contextBuffer,
                                                        P2CONST(Cal_SymKeyType, AUTOMATIC, CAL_APPL_DATA) keyPtr)
{
  Cal_ReturnType calRtn = CAL_E_NOT_OK;
# if ( CAL_NUMBER_OF_SYM_BLOCK_ENCRYPT_CONFIGS != 0 )
  P2CONST(Cal_SymBlockEncryptConfigType, AUTOMATIC, CAL_APPL_DATA) symblockencryptCfg;
  P2VAR(Cal_SymBlockEncryptCtxBufStruct, AUTOMATIC, CAL_APPL_DATA) context;

  /* PRQA S 0310 1 */ /* MD_CAL_11.4 */
  context = ((P2VAR(Cal_SymBlockEncryptCtxBufStruct, AUTOMATIC, CAL_APPL_DATA))contextBuffer); /* Casted Context Buffer */
  symblockencryptCfg = Cal_SymBlockEncryptGetCfg(cfgId); /* Pointer to Specific Service Configuration */

  if((symblockencryptCfg != NULL_PTR) && (keyPtr != NULL_PTR))
  {
    /* Call the configured Primitive Function */
    calRtn = symblockencryptCfg->PrimitiveStartFct(symblockencryptCfg->PrimitiveConfigPtr,
                                                   context->Buffer,
                                                   keyPtr);
  }

  if(calRtn == CAL_E_OK)
  {
    context->Status = CAL_ACT_ACTIVE;                                               /* PRQA S 0310 */ /* MD_CAL_11.4 */
  }

# else
  CAL_DUMMYSTATEMENT(cfgId);                                                        /* PRQA S 3112 */ /* MD_CAL_3112 */
  CAL_DUMMYSTATEMENT(contextBuffer);                                                /* PRQA S 3112 */ /* MD_CAL_3112 */
  CAL_DUMMYSTATEMENT(keyPtr);                                                       /* PRQA S 3112 */ /* MD_CAL_3112 */
# endif /* ( CAL_NUMBER_OF_SYM_BLOCK_ENCRYPT_CONFIGS != 0 ) */

  return calRtn;
}

/**********************************************************************************************************************
*  Cal_SymBlockEncryptUpdate
**********************************************************************************************************************/
/*! \brief                          This function shall be used to feed the symmetrical block encryption service with
*                                   the input data.
*  \param[in]  cfgId                Holds the identifier of the CAL module configuration which has to be used during
*                                   the symmetrical block encryption computation.
*  \param[in/out] contextBuffer     Holds the pointer to the buffer in which the context of this service can be
*                                   stored.
*  \param[in]  plainTextPtr         Holds a pointer to the plain text that shall be encrypted.
*  \param[in]  plainTextLength      Contains the length of the plain text in bytes.
*  \param[in/out] cipherTextLengthPtr   Holds a pointer to a memory location in which the length information is stored.
*                                       On calling this function this parameter shall contain the size of the buffer
*                                       provided by cipherTextPtr. On returning from this function the amount of data
*                                       that has been encrypted shall be stored.
*  \param[in/out] cipherTextPtr     Holds a pointer to the memory location which will hold the encrypted text.
*  \return CAL_E_OK                 - Request successful
*  \return CAL_E_NOT_OK             - Request failed
*  \return CAL_E_SMALL_BUFFER       - The provided buffer is too small to store the result.
*  \description                     This function shall be used to feed the symmetrical block encryption service with
*                                   the input data.
*                                   If the service state given by the context buffer is "idle", the function has to
*                                   return with "CAL_E_NOT_OK".
*                                   Otherwise, this function shall call the function Cpl_<Primitive>Update of the
*                                   primitive which is identified by the "cfgId", and return the value returned by that
*                                   function.
*                                   The encryption process is done by the underlying primitive.
**********************************************************************************************************************/
FUNC(Cal_ReturnType, CAL_CODE) Cal_SymBlockEncryptUpdate(Cal_ConfigIdType cfgId,
                                                         Cal_SymBlockEncryptCtxBufType contextBuffer, /* PRQA S 3673 */ /* MD_CAL_16.7 */
                                                         P2CONST(uint8, AUTOMATIC, CAL_APPL_DATA) plainTextPtr,
                                                         uint32 plainTextLength,
                                                         P2VAR(uint8, AUTOMATIC, CAL_APPL_DATA) cipherTextPtr,
                                                         P2VAR(uint32, AUTOMATIC, CAL_APPL_DATA) cipherTextLengthPtr)
{
  Cal_ReturnType calRtn = CAL_E_NOT_OK;
# if ( CAL_NUMBER_OF_SYM_BLOCK_ENCRYPT_CONFIGS != 0 )
  P2CONST(Cal_SymBlockEncryptConfigType, AUTOMATIC, CAL_APPL_DATA) symBlockEncryptCfg;
  P2VAR(Cal_SymBlockEncryptCtxBufStruct, AUTOMATIC, CAL_APPL_DATA) context;

  /* PRQA S 0310 1 */ /* MD_CAL_11.4 */
  context = ((P2VAR(Cal_SymBlockEncryptCtxBufStruct, AUTOMATIC, CAL_APPL_DATA))contextBuffer); /* Casted Context Buffer */
  symBlockEncryptCfg = Cal_SymBlockEncryptGetCfg(cfgId); /* Pointer to Specific Service Configuration */

  if((symBlockEncryptCfg  != NULL_PTR) &&
     (plainTextPtr        != NULL_PTR) &&
     (cipherTextPtr       != NULL_PTR) &&
     (cipherTextLengthPtr != NULL_PTR))
  {
    if(context->Status == CAL_ACT_ACTIVE)                                           /* PRQA S 0310 */ /* MD_CAL_11.4 */
    {
      /* Call the configured Primitive Function */
      calRtn = symBlockEncryptCfg->PrimitiveUpdateFct(symBlockEncryptCfg->PrimitiveConfigPtr,
                                                      context->Buffer,
                                                      plainTextPtr,
                                                      plainTextLength,
                                                      cipherTextPtr,
                                                      cipherTextLengthPtr);
    }
  }

# else
  CAL_DUMMYSTATEMENT(cfgId);                                                        /* PRQA S 3112 */ /* MD_CAL_3112 */
  CAL_DUMMYSTATEMENT(contextBuffer);                                                /* PRQA S 3112 */ /* MD_CAL_3112 */
  CAL_DUMMYSTATEMENT(plainTextPtr);                                                 /* PRQA S 3112 */ /* MD_CAL_3112 */
  CAL_DUMMYSTATEMENT(plainTextLength);                                              /* PRQA S 3112 */ /* MD_CAL_3112 */
  CAL_DUMMYSTATEMENT(cipherTextPtr);                                                /* PRQA S 3112 */ /* MD_CAL_3112 */
  CAL_DUMMYSTATEMENT(cipherTextLengthPtr);                                          /* PRQA S 3112 */ /* MD_CAL_3112 */
# endif /* ( CAL_NUMBER_OF_SYM_BLOCK_ENCRYPT_CONFIGS != 0 ) */

  return calRtn;
} /* PRQA S 6060 */ /* MD_MSR_STPAR */

/**********************************************************************************************************************
*  Cal_SymBlockEncryptFinish
**********************************************************************************************************************/
/*! \brief                          This function shall be used to finish the symmetrical block encryption service.
*  \param[in]  cfgId                Holds the identifier of the CAL module configuration which has to be used during
*                                   the symmetrical block encryption computation.
*  \param[in/out] contextBuffer     Holds the pointer to the buffer in which the context of this service can be
*                                   stored.
*  \return CAL_E_OK                 - Request successful
*  \return CAL_E_NOT_OK             - Request failed
*  \description                     This function shall be used to finish the symmetrical block encryption service.
*                                   If the service state given by the context buffer is "idle", the function has to
*                                   return with "CAL_E_NOT_OK".
*                                   Otherwise, this function shall call the function Cpl_<Primitive>Finish of the
*                                   primitive which is identified by the "cfgId", and return the value returned by that
*                                   function. If Cpl_<Primitive>Finish returned successfully, the function shall set
*                                   the state of this service to "idle", and store this state in the context buffer.
*                                   The encryption process is done by the underlying primitive.
**********************************************************************************************************************/
FUNC(Cal_ReturnType, CAL_CODE) Cal_SymBlockEncryptFinish(Cal_ConfigIdType cfgId,
                                                         Cal_SymBlockEncryptCtxBufType contextBuffer)
{
  Cal_ReturnType calRtn = CAL_E_NOT_OK;
# if ( CAL_NUMBER_OF_SYM_BLOCK_ENCRYPT_CONFIGS != 0 )
  P2CONST(Cal_SymBlockEncryptConfigType, AUTOMATIC, CAL_APPL_DATA) symBlockEncryptCfg;
  P2VAR(Cal_SymBlockEncryptCtxBufStruct, AUTOMATIC, CAL_APPL_DATA) context;

   /* PRQA S 0310 1 */ /* MD_CAL_11.4 */
  context = ((P2VAR(Cal_SymBlockEncryptCtxBufStruct, AUTOMATIC, CAL_APPL_DATA))contextBuffer); /* Casted Context Buffer */
  symBlockEncryptCfg = Cal_SymBlockEncryptGetCfg(cfgId); /* Pointer to Specific Service Configuration */

  if(symBlockEncryptCfg != NULL_PTR)
  {
    if(context->Status == CAL_ACT_ACTIVE)                                           /* PRQA S 0310 */ /* MD_CAL_11.4 */
    {
      /* Call the configured Primitive Function */
      calRtn = symBlockEncryptCfg->PrimitiveFinishFct(symBlockEncryptCfg->PrimitiveConfigPtr,
                                                      context->Buffer);
    }

    if(calRtn == CAL_E_OK)
    {
      context->Status = CAL_ACT_IDLE;                                               /* PRQA S 0310 */ /* MD_CAL_11.4 */
    }
  }

# else
  CAL_DUMMYSTATEMENT(cfgId);                                                        /* PRQA S 3112 */ /* MD_CAL_3112 */
  CAL_DUMMYSTATEMENT(contextBuffer);                                                /* PRQA S 3112 */ /* MD_CAL_3112 */
# endif /* ( CAL_NUMBER_OF_SYM_BLOCK_ENCRYPT_CONFIGS != 0 ) */

  return calRtn;
}

#define CAL_STOP_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#endif /* ( CAL_NUMBER_OF_SYM_BLOCK_ENCRYPT_CONFIGS != 0 ) */

/**********************************************************************************************************************
 *  END OF FILE: CAL_SYMBLOCKENCRYPT.C
 *********************************************************************************************************************/
