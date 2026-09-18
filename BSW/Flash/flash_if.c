/*******************************************************************************
**                                                                            **
**  SRC-MODULE: flash_if.c                                                    **
*******************************************************************************/

#include "fbl_inc.h"
#include "flash.h"
#include "Os.h"


#if defined ( FBL_ENABLE_MULTIPLE_MEM_DEVICES )
V_MEMRAM0 V_MEMRAM1 vsint16 V_MEMRAM2 memSegment;
#endif

#define FLASHIF_START_SEC_VAR_ZERO_INIT_8BIT
#include "MemMap.h"

/* Used to store initialisation state of the FlashDrv */
static uint8 FlashIsInit;

#define FLASHIF_STOP_SEC_VAR_ZERO_INIT_8BIT
#include "MemMap.h"


/*****************************************************************************/
/* Implementation                                                            */
/*****************************************************************************/
void FlashInitMemory(void)
{
   FlashIsInit = FALSE;
}

flashStatus_t FlashInit(flashKey_t encodingKey)
{
   flashStatus_t retval;

#if defined( V_ENABLE_USE_DUMMY_STATEMENT )
   /* address not used, satisfy lint */
   encodingKey = encodingKey;
#endif

#if defined ( FBL_ENABLE_MULTIPLE_MEM_DEVICES )
   memSegment = -1;
#endif

   Flash_GlobalSuspend();
   retval = MemDriver_InitSync(NULL_PTR);
   Flash_GlobalRestore();

   if (retval == IO_E_OK)
   {
      FlashIsInit = TRUE;
   }
   else
   {
      FlashIsInit = FALSE;   
   }

   return retval;
}


flashStatus_t FlashDeInit(void)
{
   /* Only call DeInit if FlashDrv is initialized */
   if (TRUE == FlashIsInit)
   {
      Flash_GlobalSuspend();
      (void)MemDriver_DeinitSync(NULL_PTR);
      FlashIsInit = FALSE;
      Flash_GlobalRestore();
   }

   return(kFlashOk);
}


flashStatus_t FlashWrite(
   uint8 *              writeBuffer,
   flashAddress_t       writeAddress,
   flashMemoryLength_t  writeLength)
{
   flashStatus_t retval;
#if defined ( FBL_ENABLE_MULTIPLE_MEM_DEVICES ) && defined ( FBL_DIFFERENT_DEVICES_IN_SWEX )
   uint16 i;
#endif

   retval = kFlashInvalidParam;

#if defined ( FBL_ENABLE_MULTIPLE_MEM_DEVICES )
# if defined ( FBL_DIFFERENT_DEVICES_IN_SWEX )
   /* find flash block */
   i = 0;
   while ((i<kNrOfFlashBlock) && (kFlashOk != retval))
   {
      if ((writeAddress >= FlashBlock[i].begin)                 && \
         ((writeAddress+(writeLength-1)) <= FlashBlock[i].end)  && \
         ((writeAddress+(writeLength-1)) >= writeAddress)) /* check overflow */
      {
         memSegment = (vsint16)i;
# else
   if ((memSegment >= 0) && (memSegment < kNrOfFlashBlock))
   {
# endif /* FBL_DIFFERENT_DEVICES_IN_SWEX */
#endif /* FBL_ENABLE_MULTIPLE_MEM_DEVICES */
         Flash_GlobalSuspend();
         retval = MemDriver_RWriteSync(writeBuffer, writeLength, writeAddress);
         Flash_GlobalRestore();
#if defined ( FBL_ENABLE_MULTIPLE_MEM_DEVICES )
# if defined ( FBL_DIFFERENT_DEVICES_IN_SWEX )
      }
      i++;
# endif /* FBL_DIFFERENT_DEVICES_IN_SWEX */
   }
#endif /* FBL_ENABLE_MULTIPLE_MEM_DEVICES */

   return(retval);
}


flashStatus_t FlashErase(
   flashAddress_t       eraseAddress,
   flashMemoryLength_t  eraseLength)
{
   flashStatus_t retval;
#if defined ( FBL_ENABLE_MULTIPLE_MEM_DEVICES )
   uint16 i;
#endif
   retval = kFlashInvalidParam;

#if defined ( FBL_ENABLE_MULTIPLE_MEM_DEVICES )
   /* find flash block */
   i = 0;
   while ((i<kNrOfFlashBlock) && (kFlashOk != retval))
   {
      if ((eraseAddress >= FlashBlock[i].begin)                 && \
         ((eraseAddress+(eraseLength-1)) <= FlashBlock[i].end)  && \
         ((eraseAddress+(eraseLength-1)) >= eraseAddress)) /* check overflow */
      {
         memSegment = (vsint16)i;
#endif /* FBL_ENABLE_MULTIPLE_MEM_DEVICES */
         Flash_GlobalSuspend();
         retval = MemDriver_REraseSync(eraseLength, eraseAddress);
         Flash_GlobalRestore();
#if defined ( FBL_ENABLE_MULTIPLE_MEM_DEVICES )
      }
      i++;
   }
#endif /* FBL_ENABLE_MULTIPLE_MEM_DEVICES */

   return retval;
}

/***********************************************************************************************************************
 *  MISCELLANEOUS CPU HANDLING FUNCTIONS
 **********************************************************************************************************************/

/*** End of file **************************************************************/
