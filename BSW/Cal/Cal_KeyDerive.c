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
 *         File:  Cal_KeyDerive.c
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

#define CAL_KEYDERIVE_SOURCE
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
# error "Vendor specific version numbers of Cal_KeyDerive.c and Cal.h are inconsistent"
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

#if ( CAL_NUMBER_OF_KEY_DERIVE_CONFIGS != 0 )
/**********************************************************************************************************************
 *  LOCAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
typedef struct
{
  Cal_AlignType Buffer[CAL_KEYDERIVE_CONTEXT_BUFFER_SIZE - 1]; /* Generator added one element for the status */
  Cal_AlignType Status;
} Cal_KeyDeriveCtxBufStruct;

/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 **********************************************************************************************************************/
# define CAL_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# if ( CAL_NUMBER_OF_KEY_DERIVE_CONFIGS != 0 )
STATIC FUNC(P2CONST(Cal_KeyDeriveConfigType, AUTOMATIC, CAL_APPL_DATA), CAL_CODE) Cal_KeyDeriveGetCfg(Cal_ConfigIdType cfgId);
# endif /* ( CAL_NUMBER_OF_KEY_DERIVE_CONFIGS != 0 ) */

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 **********************************************************************************************************************/

# if ( CAL_NUMBER_OF_KEY_DERIVE_CONFIGS != 0 )
/**********************************************************************************************************************
  Cal_KeyDeriveGetCfg
**********************************************************************************************************************/
STATIC FUNC(P2CONST(Cal_KeyDeriveConfigType, AUTOMATIC, CAL_APPL_DATA), CAL_CODE) Cal_KeyDeriveGetCfg(Cal_ConfigIdType cfgId)
{
  P2CONST(Cal_KeyDeriveConfigType, AUTOMATIC, CAL_APPL_DATA) calRtn;
  uint8 i;

  calRtn = NULL_PTR;

  for(i = 0; i < CAL_NUMBER_OF_KEY_DERIVE_CONFIGS; i++)
  {
    if(cfgId == Cal_KeyDeriveConfig[i].ConfigId)
    {
      calRtn = &Cal_KeyDeriveConfig[i];
      break;
    }
  }

  return calRtn;
}
# endif /* ( CAL_NUMBER_OF_KEY_DERIVE_CONFIGS != 0 ) */

/**********************************************************************************************************************
*  GLOBAL FUNCTIONS
**********************************************************************************************************************/

/**********************************************************************************************************************
*  Cal_KeyDeriveStart
**********************************************************************************************************************/
/*! \brief                          This function shall be used to initialize the key derivation service of
*                                   the CAL module.
*  \param[in]     cfgId             Holds the identifier of the CAL module configuration which has to be used during
*                                   the key derivation.
*  \param[in/out] contextBuffer     Holds the pointer to the buffer in which the context of this service can be
*                                   stored.
*  \param[in]     keyLength         Holds the length of the key to be derived by the underlying key derivation
*                                   primitive.
*  \param[in]     iterations        Holds the number of iterations to be performed by the underlying key derivation
*                                   primitive.
*  \return  CAL_E_OK                - Request successful
*  \return CAL_E_NOT_OK             - Request failed
*  \description                     This function shall be used to initialize the key derivation service of
*                                   the CAL module. The function shall initialize the context buffer given by
*                                   "contextBuffer", call the function Cpl_<Primitive>Start of the primitive which is
*                                   identified by the "cfgId" and return the value returned by that function.
*                                   If Cpl_<Primitive>Start returned successfully, the function shall set the state of
*                                   this service to "active", and store this state in the context buffer.
**********************************************************************************************************************/
FUNC(Cal_ReturnType, CAL_CODE) Cal_KeyDeriveStart(Cal_ConfigIdType cfgId,
                                                  Cal_KeyDeriveCtxBufType contextBuffer,
                                                  uint32 keyLength,
                                                  uint32 iterations)
{
  Cal_ReturnType calRtn = CAL_E_NOT_OK;
# if ( CAL_NUMBER_OF_KEY_DERIVE_CONFIGS != 0 )
  P2CONST(Cal_KeyDeriveConfigType, AUTOMATIC, CAL_APPL_DATA) keyDeriveCfg;
  P2VAR(Cal_KeyDeriveCtxBufStruct, AUTOMATIC, CAL_APPL_DATA) context;

  /* PRQA S 0310 1 */ /* MD_CAL_11.4 */
  context = ((P2VAR(Cal_KeyDeriveCtxBufStruct, AUTOMATIC, CAL_APPL_DATA))contextBuffer); /* Casted Context Buffer */
  keyDeriveCfg = Cal_KeyDeriveGetCfg(cfgId); /* Pointer to Specific Service Configuration */

  if(keyDeriveCfg != NULL_PTR)
  {
    /* Call the configured Primitive Function */
    calRtn = keyDeriveCfg->PrimitiveStartFct(keyDeriveCfg->PrimitiveConfigPtr,
                                             context->Buffer,
                                             keyLength,
                                             iterations);
  }

  if(calRtn == CAL_E_OK)
  {
    context->Status = CAL_ACT_ACTIVE;                                               /* PRQA S 0310 */ /* MD_CAL_11.4 */
  }

# else
  CAL_DUMMYSTATEMENT(cfgId);                                                        /* PRQA S 3112 */ /* MD_CAL_3112 */
  CAL_DUMMYSTATEMENT(contextBuffer);                                                /* PRQA S 3112 */ /* MD_CAL_3112 */
  CAL_DUMMYSTATEMENT(keyLength);                                                    /* PRQA S 3112 */ /* MD_CAL_3112 */
  CAL_DUMMYSTATEMENT(iterations);                                                   /* PRQA S 3112 */ /* MD_CAL_3112 */
# endif /* ( CAL_NUMBER_OF_KEY_DERIVE_CONFIGS != 0 ) */

  return calRtn;
}

/**********************************************************************************************************************
*  Cal_KeyDeriveUpdate
**********************************************************************************************************************/
/*! \brief                          This function shall be used to feed the key derivation service with
*                                   input data.
*  \param[in]     cfgId             Holds the identifier of the CAL module configuration which has to be used during
*                                   the key derivation.
*  \param[in/out] contextBuffer     Holds the pointer to the buffer in which the context of this service can be
*                                   stored.
*  \param[in]     passwordPtr       Holds a pointer to the password, i.e. the original key, from which to derive a
*                                   new key.
*  \param[in]     passwordLength    Holds the length of the password in bytes.
*  \param[in]     saltPtr           Holds a pointer to the cryptographic salt, i.e. a random number, for the
*                                   underlying primitive.
*  \param[in]     saltLength        Holds the length of the salt in bytes.
*  \return CAL_E_OK                 - Request successful
*  \return CAL_E_NOT_OK             - Request failed
*  \description                     This function shall be used to feed the key derivation service with the input data.
*                                   If the service state given by the context buffer is "idle", the function has to
*                                   return with "CAL_E_NOT_OK".
*                                   Otherwise, this function shall call the function Cpl_<Primitive>Update of the
*                                   primitive which is identified by the "cfgId", and return the value returned by that
*                                   function. The key derivation computation is done by the underlying primitive.
**********************************************************************************************************************/
FUNC(Cal_ReturnType, CAL_CODE) Cal_KeyDeriveUpdate(Cal_ConfigIdType cfgId,
                                                   Cal_KeyDeriveCtxBufType contextBuffer,  /* PRQA S 3673 */ /* MD_CAL_16.7 */
                                                   P2CONST(uint8, AUTOMATIC, CAL_APPL_DATA) passwordPtr,
                                                   uint32 passwordLength,
                                                   P2CONST(uint8, AUTOMATIC, CAL_APPL_DATA) saltPtr,
                                                   uint32 saltLength)
{
  Cal_ReturnType calRtn = CAL_E_NOT_OK;
# if ( CAL_NUMBER_OF_KEY_DERIVE_CONFIGS != 0 )
  P2CONST(Cal_KeyDeriveConfigType, AUTOMATIC, CAL_APPL_DATA) keyDeriveCfg;
  P2VAR(Cal_KeyDeriveCtxBufStruct, AUTOMATIC, CAL_APPL_DATA) context;

  /* PRQA S 0310 1 */ /* MD_CAL_11.4 */
  context = ((P2VAR(Cal_KeyDeriveCtxBufStruct, AUTOMATIC, CAL_APPL_DATA))contextBuffer); /* Casted Context Buffer */
  keyDeriveCfg = Cal_KeyDeriveGetCfg(cfgId); /* Pointer to Specific Service Configuration */

  if((keyDeriveCfg != NULL_PTR) && (passwordPtr != NULL_PTR) && (saltPtr != NULL_PTR))
  {
    if(context->Status == CAL_ACT_ACTIVE)                                           /* PRQA S 0310 */ /* MD_CAL_11.4 */
    {
      /* Call the configured Primitive Function */
      calRtn = keyDeriveCfg->PrimitiveUpdateFct(keyDeriveCfg->PrimitiveConfigPtr,
                                                context->Buffer,
                                                passwordPtr,
                                                passwordLength,
                                                saltPtr,
                                                saltLength);
    }
  }

# else
  CAL_DUMMYSTATEMENT(cfgId);                                                        /* PRQA S 3112 */ /* MD_CAL_3112 */
  CAL_DUMMYSTATEMENT(contextBuffer);                                                /* PRQA S 3112 */ /* MD_CAL_3112 */
  CAL_DUMMYSTATEMENT(passwordPtr);                                                  /* PRQA S 3112 */ /* MD_CAL_3112 */
  CAL_DUMMYSTATEMENT(passwordLength);                                               /* PRQA S 3112 */ /* MD_CAL_3112 */
  CAL_DUMMYSTATEMENT(saltPtr);                                                      /* PRQA S 3112 */ /* MD_CAL_3112 */
  CAL_DUMMYSTATEMENT(saltLength);                                                   /* PRQA S 3112 */ /* MD_CAL_3112 */
# endif /* ( CAL_NUMBER_OF_KEY_DERIVE_CONFIGS != 0 ) */

  return calRtn;
}

/**********************************************************************************************************************
*  Cal_KeyDeriveFinish
**********************************************************************************************************************/
/*! \brief                  This function shall be used to finish the key derive service.
*  \param[in]     cfgId          Holds the identifier of the CAL module configuration which has to be used during the
*                                key derivation.
*  \param[in/out] contextBuffer  Holds the pointer to the buffer in which the context of this service can be
*                                stored.
*  \param[out]    keyPtr         Holds a pointer to the memory location which will hold the result of the key
*                                derivation.
*  \return CAL_E_OK         - Request successful
*  \return CAL_E_NOT_OK     - Request failed
*  \description             This function shall be used to finish the key derive service.
*                           If the service state given by the context buffer is "idle", the function has to
*                           return with "CAL_E_NOT_OK".
*                           Otherwise, this function shall call the function Cpl_<Primitive>Finish of the
*                           primitive which is identified by the "cfgId", and return the value returned by that
*                           function. If Cpl_<Primitive>Finish returned successfully, the function shall set
*                           the state of this service to "idle", and store this state in the context buffer.
*                           The key derivation computation is done by the underlying primitive.
**********************************************************************************************************************/
FUNC(Cal_ReturnType, CAL_CODE) Cal_KeyDeriveFinish(Cal_ConfigIdType cfgId,
                                                   Cal_KeyDeriveCtxBufType contextBuffer,
                                                   P2VAR(Cal_SymKeyType, AUTOMATIC, CAL_APPL_DATA) keyPtr)
{
  Cal_ReturnType calRtn = CAL_E_NOT_OK;
# if ( CAL_NUMBER_OF_KEY_DERIVE_CONFIGS != 0 )
  P2CONST(Cal_KeyDeriveConfigType, AUTOMATIC, CAL_APPL_DATA) keyDeriveCfg;
  P2VAR(Cal_KeyDeriveCtxBufStruct, AUTOMATIC, CAL_APPL_DATA) context;

  /* PRQA S 0310 1 */ /* MD_CAL_11.4 */
  context = ((P2VAR(Cal_KeyDeriveCtxBufStruct, AUTOMATIC, CAL_APPL_DATA))contextBuffer); /* Casted Context Buffer */
  keyDeriveCfg = Cal_KeyDeriveGetCfg(cfgId); /* Pointer to Specific Service Configuration */

  if((keyDeriveCfg != NULL_PTR) && (keyPtr != NULL_PTR))
  {
    if(context->Status == CAL_ACT_ACTIVE)                                           /* PRQA S 0310 */ /* MD_CAL_11.4 */
    {
      /* Call the configured Primitive Function */
      calRtn = keyDeriveCfg->PrimitiveFinishFct(keyDeriveCfg->PrimitiveConfigPtr,
                                                context->Buffer,
                                                keyPtr);
    }

    if(calRtn == CAL_E_OK)
    {
      context->Status = CAL_ACT_IDLE;                                               /* PRQA S 0310 */ /* MD_CAL_11.4 */
    }
  }

# else
  CAL_DUMMYSTATEMENT(cfgId);                                                        /* PRQA S 3112 */ /* MD_CAL_3112 */
  CAL_DUMMYSTATEMENT(contextBuffer);                                                /* PRQA S 3112 */ /* MD_CAL_3112 */
  CAL_DUMMYSTATEMENT(keyPtr);                                                       /* PRQA S 3112 */ /* MD_CAL_3112 */
# endif /* ( CAL_NUMBER_OF_KEY_DERIVE_CONFIGS != 0 ) */

  return calRtn;
}

# define CAL_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#endif /* ( CAL_NUMBER_OF_KEY_DERIVE_CONFIGS != 0 ) */

/**********************************************************************************************************************
 *  END OF FILE: CAL_KEYDERIVE.C
 *********************************************************************************************************************/
