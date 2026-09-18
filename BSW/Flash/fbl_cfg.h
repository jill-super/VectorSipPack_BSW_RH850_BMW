#if !defined(__FBL_CFG_H__)
#define __FBL_CFG_H__


#define tFblHeader                           vuint8

/* Controller sepcific start */
#define C_CPUTYPE_32BIT
/* Controller sepcific end */

/* RH850 specific ************************************************************ */
#define FBL_WD_TRIGGER_SIZE                  0
#define FLASH_SIZE                           0x3000 //0x2800
#define FBL_TIMER_PRESCALER_VALUE            0x00
#define FBL_TIMER_RELOAD_VALUE               0x9C3F
#define FBL_SYSTEM_FREQUENCY                 160

#define FBL_DISABLE_MULTIPLE_MEM_DEVICES

 #define FLASH_ENABLE_MACHINE_CHECK_ECC_DETECTION

/* Memcopy used in FlashDriver_RReadSync */
 /* @@@vector */
//#define MEMCPY VStdMemCpy_Func
#define MEMCPY VStdLib_MemCpy

#ifdef BLU
/* polling mode in BLU */
#define Flash_GlobalSuspend()
#define Flash_GlobalRestore()
#else
/* use OSEK to disable/restore interrupts */
#define Flash_GlobalSuspend()   SuspendAllInterrupts(); FrIf_SetState(0,FRIF_GOTO_OFFLINE)
#define Flash_GlobalRestore()   ResumeAllInterrupts(); FrIf_SetState(0,FRIF_GOTO_ONLINE)
#endif

#endif /* __FBL_CFG_H__ */
