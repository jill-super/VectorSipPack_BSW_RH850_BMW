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
 *         File:  Cal_Random.c
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

#define CAL_RANDOM_SOURCE
/**********************************************************************************************************************
*  INCLUDES
*********************************************************************************************************************/
#include "Cal.h"

/**********************************************************************************************************************
 *  VERSION CHECK
 *********************************************************************************************************************/
/* vendor specific version information is BCD coded */
#if (  (CAL_SW_MAJOR_VERSION != (0x02)) \
    || (CAL_SW_MINOR_VERSION != (0x01)) \
    || (CAL_SW_PATCH_VERSION != (0x02)) )
# error "Vendor specific version numbers of Cal_Random.c and Cal.h are inconsistent"
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

/**********************************************************************************************************************
 *  LOCAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
#if ( ( CAL_NUMBER_OF_RANDOM_SEED_CONFIGS != 0 ) || ( CAL_NUMBER_OF_RANDOM_GENERATE_CONFIGS != 0 ) )

typedef struct
{
  Cal_AlignType Buffer[CAL_RANDOM_CONTEXT_BUFFER_SIZE - 1]; /* Generator added one additional element for status */
  Cal_AlignType Status;
} Cal_RandomCtxBufStruct;

#endif /* ( ( CAL_NUMBER_OF_RANDOM_SEED_CONFIGS != 0 ) || ( CAL_NUMBER_OF_RANDOM_GENERATE_CONFIGS != 0 ) ) */

/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 **********************************************************************************************************************/
#define CAL_START_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#if ( CAL_NUMBER_OF_RANDOM_SEED_CONFIGS != 0 )
STATIC FUNC(P2CONST(Cal_RandomSeedConfigType, AUTOMATIC, CAL_APPL_DATA), CAL_CODE) Cal_RandomSeedGetCfg(Cal_ConfigIdType cfgId);
#endif /* ( CAL_NUMBER_OF_RANDOM_SEED_CONFIGS != 0 ) */

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 **********************************************************************************************************************/

#if ( CAL_NUMBER_OF_RANDOM_SEED_CONFIGS != 0 )
/**********************************************************************************************************************
  Cal_RandomSeedGetCfg
**********************************************************************************************************************/
STATIC FUNC(P2CONST(Cal_RandomSeedConfigType, AUTOMATIC, CAL_APPL_DATA), CAL_CODE) Cal_RandomSeedGetCfg(Cal_ConfigIdType cfgId)
{
  P2CONST(Cal_RandomSeedConfigType, AUTOMATIC, CAL_APPL_DATA) calRtn;
  uint8 i;

  calRtn = NULL_PTR;

  for(i = 0; i < CAL_NUMBER_OF_RANDOM_SEED_CONFIGS; i++)
  {
    if(cfgId == Cal_RandomSeedConfig[i].ConfigId)
    {
      calRtn = &Cal_RandomSeedConfig[i];
      break;
    }
  }

  return calRtn;
}
#endif

/**********************************************************************************************************************
*  GLOBAL FUNCTIONS
**********************************************************************************************************************/

#if ( ( CAL_DISABLE_NOT_USED_APIS == STD_OFF ) || ( CAL_NUMBER_OF_RANDOM_SEED_CONFIGS != 0 ) )
/***********************************************************************************************************************
*  Cal_RandomSeedStart
**********************************************************************************************************************/
/*! \brief                    This function shall be used to initialize the random seed service of the CAL module.
*  \param[in]  cfgId          Holds the identifier of the CAL module configuration which has to be used
*                             during the seeding of the random number generator.
*  \param[out] contextBuffer  Holds the pointer to the buffer in which the context of this service can be stored.
*  \return     CAL_E_OK       - Request successful
*  \return     CAL_E_NOT_OK   - Request failed
*  \description               This function shall be used to initialize the random seed service of the
*                             CAL module.
*                             The function shall initialize the context buffer given by "contextBuffer",
*                             call the function Cpl_<Primitive>Start of the primitive which is identified
*                             by the "cfgId" and return the value returned by that function.
*                             If Cpl_<Primitive>Start returned successfully, the function shall set the
*                             state of this service to "active", and store this state in the context buffer.
**********************************************************************************************************************/
FUNC(Cal_ReturnType, CAL_CODE) Cal_RandomSeedStart(Cal_ConfigIdType cfgId,
                                                   Cal_RandomCtxBufType contextBuffer)
{
  Cal_ReturnType calRtn = CAL_E_NOT_OK;
# if ( CAL_NUMBER_OF_RANDOM_SEED_CONFIGS != 0 )
  P2CONST(Cal_RandomSeedConfigType, AUTOMATIC, CAL_APPL_DATA) randomCfg;
  P2VAR(Cal_RandomCtxBufStruct, AUTOMATIC, CAL_APPL_DATA) context;

  /* PRQA S 0310 1 */ /* MD_CAL_11.4 */
  context = ((P2VAR(Cal_RandomCtxBufStruct, AUTOMATIC, CAL_APPL_DATA))contextBuffer); /* Casted Context Buffer */
  randomCfg = Cal_RandomSeedGetCfg(cfgId); /* Pointer to Specific Service Configuration */

  if(randomCfg != NULL_PTR)
  {
    /* Call the configured Primitive Function */
    calRtn = randomCfg->PrimitiveStartFct(randomCfg->PrimitiveConfigPtr,
                                          context->Buffer);
  }

  if(calRtn == CAL_E_OK)
  {
    context->Status = CAL_ACT_ACTIVE;                                               /* PRQA S 0310 */ /* MD_CAL_11.4 */
  }
# else
  CAL_DUMMYSTATEMENT(cfgId);                                                        /* PRQA S 3112 */ /* MD_CAL_3112 */
  CAL_DUMMYSTATEMENT(contextBuffer);                                                /* PRQA S 3112 */ /* MD_CAL_3112 */
# endif /* ( CAL_NUMBER_OF_RANDOM_SEED_CONFIGS != 0 ) */

  return calRtn;
}

/***********************************************************************************************************************
*  Cal_RandomSeedUpdate
**********************************************************************************************************************/
/*! \brief                         This function shall be used to feed a seed to the random number generator.
*  \param[in]  cfgId               Holds the identifier of the CAL module configuration which has to be used
*                                  during the seeding of the random number generator.
*  \param[in/out] contextBuffer    Holds the pointer to the buffer in which the context of this service can be
*                                  stored.
*  \param[in]  seedPtr             Holds a pointer to the seed for the random number generator.
*  \param[in]  seedLength          Contains the length of the seed in bytes.
*  \return  CAL_E_OK               - Request successful
*  \return  CAL_E_NOT_OK           - Request failed
*  \description                    This function shall be used to feed a seed to the random number generator.
*                                  If the service state given by the context buffer is "idle", the function has
*                                  to return with "CAL_E_NOT_OK". Otherwise, this function shall call the function
*                                  Cpl_<Primitive>Update of the primitive which is identified by the "cfgId", and
*                                  return the value returned by that function. The seeding of the random number
*                                  generator is done by the underlying primitive.
**********************************************************************************************************************/
FUNC(Cal_ReturnType, CAL_CODE) Cal_RandomSeedUpdate(Cal_ConfigIdType cfgId,
                                                    Cal_RandomCtxBufType contextBuffer, /* PRQA S 3673 */ /* MD_CAL_16.7 */
                                                    P2CONST(uint8, AUTOMATIC, CAL_APPL_DATA) seedPtr,
                                                    uint32 seedLength)
{
  Cal_ReturnType calRtn = CAL_E_NOT_OK;
# if ( CAL_NUMBER_OF_RANDOM_SEED_CONFIGS != 0 )
  P2CONST(Cal_RandomSeedConfigType, AUTOMATIC, CAL_APPL_DATA) randomCfg;
  P2VAR(Cal_RandomCtxBufStruct, AUTOMATIC, CAL_APPL_DATA) context;

  /* PRQA S 0310 1 */ /* MD_CAL_11.4 */
  context = ((P2VAR(Cal_RandomCtxBufStruct, AUTOMATIC, CAL_APPL_DATA))contextBuffer); /* Casted Context Buffer */
  randomCfg = Cal_RandomSeedGetCfg(cfgId); /* Pointer to Specific Service Configuration */

  if((randomCfg != NULL_PTR) && (seedPtr != NULL_PTR))
  {
    if(context->Status == CAL_ACT_ACTIVE)                                           /* PRQA S 0310 */ /* MD_CAL_11.4 */
    {
      /* Call the configured Primitive Function */
      calRtn = randomCfg->PrimitiveUpdateFct(randomCfg->PrimitiveConfigPtr,
                                             context->Buffer,
                                             seedPtr,
                                             seedLength);
    }
  }
# else
  CAL_DUMMYSTATEMENT(cfgId);                                                        /* PRQA S 3112 */ /* MD_CAL_3112 */
  CAL_DUMMYSTATEMENT(contextBuffer);                                                /* PRQA S 3112 */ /* MD_CAL_3112 */
  CAL_DUMMYSTATEMENT(seedPtr);                                                      /* PRQA S 3112 */ /* MD_CAL_3112 */
  CAL_DUMMYSTATEMENT(seedLength);                                                   /* PRQA S 3112 */ /* MD_CAL_3112 */
# endif /* ( CAL_NUMBER_OF_RANDOM_SEED_CONFIGS != 0 ) */

  return calRtn;
}

/***********************************************************************************************************************
*  Cal_RandomSeedFinish
**********************************************************************************************************************/
/*! \brief                       This function shall be used to finish the random seed service.
*  \param[in]     cfgId          Holds the identifier of the CAL module configuration which has to be used
*                                during random number generator.
*  \param[in/out] contextBuffer  Holds the pointer to the buffer in which the context of this service can be
*                                stored.
*  \return  CAL_E_OK             - Request successful
*  \return CAL_E_NOT_OK          - Request failed
*  \description           This function shall be used to finish the random seed service.
*                         If the service state given by the context buffer is "idle", the function has to return with
*                         "CAL_E_NOT_OK".
*                         Otherwise, this function shall call the function Cpl_<Primitive>Finish of the
*                         primitive which is identified by the "cfgId", and return the value returned by
*                         that function. If Cpl_<Primitive>Finish returned successfully, the function shall
*                         set the state of this service to "idle", and store this state in the context buffer.
*                         The seeding of the random number generator is done by the underlying primitive
**********************************************************************************************************************/
FUNC(Cal_ReturnType, CAL_CODE) Cal_RandomSeedFinish(Cal_ConfigIdType cfgId,
                                                    Cal_RandomCtxBufType contextBuffer)
{
  Cal_ReturnType calRtn = CAL_E_NOT_OK;
# if ( CAL_NUMBER_OF_RANDOM_SEED_CONFIGS != 0 )
  P2CONST(Cal_RandomSeedConfigType, AUTOMATIC, CAL_APPL_DATA) randomCfg;
  P2VAR(Cal_RandomCtxBufStruct, AUTOMATIC, CAL_APPL_DATA) context;

  /* PRQA S 0310 1 */ /* MD_CAL_11.4 */
  context = ((P2VAR(Cal_RandomCtxBufStruct, AUTOMATIC, CAL_APPL_DATA))contextBuffer); /* Casted Context Buffer */
  randomCfg = Cal_RandomSeedGetCfg(cfgId); /* Pointer to Specific Service Configuration */

  if(randomCfg != NULL_PTR)
  {
    if(context->Status == CAL_ACT_ACTIVE)                                           /* PRQA S 0310 */ /* MD_CAL_11.4 */
    {
      /* Call the configured Primitive Function */
      calRtn = randomCfg->PrimitiveFinishFct(randomCfg->PrimitiveConfigPtr,
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
# endif /* ( CAL_NUMBER_OF_RANDOM_SEED_CONFIGS != 0 ) */

  return calRtn;
}
#endif /* ( ( CAL_DISABLE_NOT_USED_APIS == STD_OFF ) || ( CAL_NUMBER_OF_RANDOM_SEED_CONFIGS != 0 ) ) */

#if ( ( CAL_DISABLE_NOT_USED_APIS == STD_OFF ) || ( CAL_NUMBER_OF_RANDOM_GENERATE_CONFIGS != 0 ) )
/**********************************************************************************************************************
*  Cal_RandomGenerate
**********************************************************************************************************************/
/*! \brief                      This function shall be used to start the random number generation service of the CAL
*                               module.
*  \param[in]  cfgId            Holds the identifier of the CAL module configuration which has to be used
*                               during random number generator.
*  \param[in/out] contextBuffer Holds the pointer to the buffer in which the context of this service can be
*                               stored. If a seed is needed, this must be the same context buffer that has been
*                               used for the call of the RandomSeed interfaces.
*  \param[out] resultPtr        Holds a pointer to the memory location which will hold the result of the random
*                               number generation. The memory location must have at least the size "resultLength".
*  \param[in]  resultLength     Holds the amount of random bytes which should be generated.
*  \return  CAL_E_OK                 - Request successful
*  \return CAL_E_NOT_OK              - Request failed
*  \return CAL_E_ENTROPY_EXHAUSTION  - Request failed, entropy of random number generator is exhausted.
*  \description            This function shall be used to start the random number generation service of the CAL module.
*                          The function shall call the function Cpl_<Primitive> of the primitive which is
*                          identified by the "cfgId" and return the value returned by that function.
**********************************************************************************************************************/
FUNC(Cal_ReturnType, CAL_CODE) Cal_RandomGenerate(Cal_ConfigIdType cfgId,
                                                  Cal_RandomCtxBufType contextBuffer,               /* PRQA S 3673 */ /* MD_CAL_16.7 */
                                                  P2VAR(uint8, AUTOMATIC, CAL_APPL_DATA) resultPtr, /* PRQA S 3673 */ /* MD_CAL_16.7 */
                                                  uint32 resultLength)
{
  Cal_ReturnType calRtn = CAL_E_NOT_OK;
# if ( CAL_NUMBER_OF_RANDOM_GENERATE_CONFIGS != 0 )
  uint8 i;

  /* Several configurations are available, find the one associated to this configId */
  for(i = 0; i < CAL_NUMBER_OF_RANDOM_GENERATE_CONFIGS; i++)
  {
    if(cfgId == Cal_RandomGenerateConfig[i].ConfigId)
    {
      calRtn = Cal_RandomGenerateConfig[i].PrimitiveFct(Cal_RandomGenerateConfig[i].PrimitiveConfigPtr,
                                ((P2VAR(Cal_RandomCtxBufStruct, AUTOMATIC, CAL_APPL_DATA))contextBuffer)->Buffer, /* PRQA S 0310 */ /* MD_CAL_11.4 */
                                resultPtr,
                                resultLength);
      break;
    }
  }
# else
  CAL_DUMMYSTATEMENT(cfgId);                                                      /* PRQA S 3112 */ /* MD_CAL_3112 */
  CAL_DUMMYSTATEMENT(contextBuffer);                                              /* PRQA S 3112 */ /* MD_CAL_3112 */
  CAL_DUMMYSTATEMENT(resultPtr);                                                  /* PRQA S 3112 */ /* MD_CAL_3112 */
  CAL_DUMMYSTATEMENT(resultLength);                                               /* PRQA S 3112 */ /* MD_CAL_3112 */
# endif /* ( CAL_NUMBER_OF_RANDOM_GENERATE_CONFIGS != 0 ) */

  return calRtn;
}
#endif /* ( CAL_NUMBER_OF_RANDOM_GENERATE_CONFIGS != 0 ) */

#define CAL_STOP_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  END OF FILE: CAL_RANDOM.C
 *********************************************************************************************************************/
