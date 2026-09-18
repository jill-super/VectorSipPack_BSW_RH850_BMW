/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                 This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                 Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                 All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  LICENSE
 *  -------------------------------------------------------------------------------------------------------------------
 *            Module: Os
 *           Program: MSR BAC 4.x (MSR_Bmw_SLP4)
 *          Customer: Nexteer Automotive Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Renesas RH850 P1M R7F701363EAFP
 *    License Scope : The usage is restricted to CBD1700369_D04
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Os_Link_Core0.ld
 *   Generation Time: 2018-01-04 11:34:41
 *           Project: BTLD - Version 1.0
 *          Delivery: CBD1700369_D04
 *      Tool Version: DaVinci Configurator (beta) 5.16.31 SP1
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 ! BETA VERSION                                                                                                       !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 ! These programs are fully operative programs. With regard to the fact that the programs are a beta-version only,    !
 ! Vector Informatik's liability shall be expressly excluded in cases of ordinary negligence, to the extent           !
 ! admissible by law or statute.                                                                                      !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
**********************************************************************************************************************/

/**********************************************************************************************************************
 *  CODE SECTIONS
 *********************************************************************************************************************/

#if defined ( OS_LINK_INTVEC_CODE )
.OS_INTVEC_CORE0_CODE ALIGN(512) :> .
_OS_INTVEC_CORE0_CODE_START = ADDR(.OS_INTVEC_CORE0_CODE);
_OS_INTVEC_CORE0_CODE_END = ENDADDR(.OS_INTVEC_CORE0_CODE) - 1;
#endif

#if defined ( OS_LINK_EXCVEC_CODE )
.OS_EXCVEC_CORE0_CODE ALIGN(512) :> .
_OS_EXCVEC_CORE0_CODE_START = ADDR(.OS_EXCVEC_CORE0_CODE);
_OS_EXCVEC_CORE0_CODE_END = ENDADDR(.OS_EXCVEC_CORE0_CODE) - 1;
#endif

#if defined ( OS_LINK_CALLOUT_CODE )
.OS_Default_BSW_Async_Task_CODE ALIGN(4) :> .
_OS_Default_BSW_Async_Task_CODE_START = ADDR(.OS_Default_BSW_Async_Task_CODE);
_OS_Default_BSW_Async_Task_CODE_END = ENDADDR(.OS_Default_BSW_Async_Task_CODE) - 1;
.OS_Fr_IrqLine0_CODE ALIGN(4) :> .
_OS_Fr_IrqLine0_CODE_START = ADDR(.OS_Fr_IrqLine0_CODE);
_OS_Fr_IrqLine0_CODE_END = ENDADDR(.OS_Fr_IrqLine0_CODE) - 1;
.OS_Fr_IrqTimer0_CODE ALIGN(4) :> .
_OS_Fr_IrqTimer0_CODE_START = ADDR(.OS_Fr_IrqTimer0_CODE);
_OS_Fr_IrqTimer0_CODE_END = ENDADDR(.OS_Fr_IrqTimer0_CODE) - 1;
.OS_InitTask_CODE ALIGN(4) :> .
_OS_InitTask_CODE_START = ADDR(.OS_InitTask_CODE);
_OS_InitTask_CODE_END = ENDADDR(.OS_InitTask_CODE) - 1;
.OS_ShutdownTask_CODE ALIGN(4) :> .
_OS_ShutdownTask_CODE_START = ADDR(.OS_ShutdownTask_CODE);
_OS_ShutdownTask_CODE_END = ENDADDR(.OS_ShutdownTask_CODE) - 1;
#endif

#ifdef OS_LINK_INTVEC_CODE
# undef OS_LINK_INTVEC_CODE
#endif

#ifdef OS_LINK_EXCVEC_CODE
# undef OS_LINK_EXCVEC_CODE
#endif

#ifdef OS_LINK_CALLOUT_CODE
# undef OS_LINK_CALLOUT_CODE
#endif


/**********************************************************************************************************************
 *  CONST SECTIONS
 *********************************************************************************************************************/

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_KERNEL ) || defined ( OS_LINK_CONST_KERNEL_FAR )
.OS_CORE0_CONST ALIGN(4) :> .
_OS_CORE0_CONST_START = ADDR(.OS_CORE0_CONST);
_OS_CORE0_CONST_END = ENDADDR(.OS_CORE0_CONST) - 1;
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_KERNEL ) || defined ( OS_LINK_CONST_KERNEL_NEAR )
.OS_CORE0_CONST_FAST ALIGN(4) :> .
_OS_CORE0_CONST_FAST_START = ADDR(.OS_CORE0_CONST_FAST);
_OS_CORE0_CONST_FAST_END = ENDADDR(.OS_CORE0_CONST_FAST) - 1;
#endif

#if defined ( OS_LINK_INTVEC_CONST )
.OS_INTVEC_CORE0_CONST ALIGN(4) :> .
_OS_INTVEC_CORE0_CONST_START = ADDR(.OS_INTVEC_CORE0_CONST);
_OS_INTVEC_CORE0_CONST_END = ENDADDR(.OS_INTVEC_CORE0_CONST) - 1;
#endif

#if defined ( OS_LINK_EXCVEC_CONST )
.OS_EXCVEC_CORE0_CONST ALIGN(4) :> .
_OS_EXCVEC_CORE0_CONST_START = ADDR(.OS_EXCVEC_CORE0_CONST);
_OS_EXCVEC_CORE0_CONST_END = ENDADDR(.OS_EXCVEC_CORE0_CONST) - 1;
#endif


#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_APP ) || defined ( OS_LINK_CONST_APP_OSAPPLICATION_CORE0 ) || defined ( OS_LINK_CONST_APP_OSAPPLICATION_CORE0_FAR )
.OS_OsApplication_Core0_CONST ALIGN(4) :> .
_OS_OsApplication_Core0_CONST_START = ADDR(.OS_OsApplication_Core0_CONST);
_OS_OsApplication_Core0_CONST_END = ENDADDR(.OS_OsApplication_Core0_CONST) - 1;
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_APP ) || defined ( OS_LINK_CONST_APP_OSAPPLICATION_CORE0 ) || defined ( OS_LINK_CONST_APP_OSAPPLICATION_CORE0_NEAR )
.OS_OsApplication_Core0_CONST_FAST ALIGN(4) :> .
_OS_OsApplication_Core0_CONST_FAST_START = ADDR(.OS_OsApplication_Core0_CONST_FAST);
_OS_OsApplication_Core0_CONST_FAST_END = ENDADDR(.OS_OsApplication_Core0_CONST_FAST) - 1;
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_APP ) || defined ( OS_LINK_CONST_APP_OSAPPLICATION_CORE0 ) || defined ( OS_LINK_CONST_APP_OSAPPLICATION_CORE0_INIT )

.ROM_OS_OsApplication_Core0_VAR ROM(.OS_OsApplication_Core0_VAR) :> .
_ROM_OS_OsApplication_Core0_VAR_START = ADDR(.ROM_OS_OsApplication_Core0_VAR);
_ROM_OS_OsApplication_Core0_VAR_END = ENDADDR(.ROM_OS_OsApplication_Core0_VAR);

.ROM_OS_OsApplication_Core0_VAR_ZERO_INIT ROM(.OS_OsApplication_Core0_VAR_ZERO_INIT) :> .
_ROM_OS_OsApplication_Core0_VAR_ZERO_INIT_START = ADDR(.ROM_OS_OsApplication_Core0_VAR_ZERO_INIT);
_ROM_OS_OsApplication_Core0_VAR_ZERO_INIT_END = ENDADDR(.ROM_OS_OsApplication_Core0_VAR_ZERO_INIT);

.ROM_OS_OsApplication_Core0_VAR_FAST ROM(.OS_OsApplication_Core0_VAR_FAST) :> .
_ROM_OS_OsApplication_Core0_VAR_FAST_START = ADDR(.ROM_OS_OsApplication_Core0_VAR_FAST);
_ROM_OS_OsApplication_Core0_VAR_FAST_END = ENDADDR(.ROM_OS_OsApplication_Core0_VAR_FAST);

.ROM_OS_OsApplication_Core0_VAR_FAST_ZERO_INIT ROM(.OS_OsApplication_Core0_VAR_FAST_ZERO_INIT) :> .
_ROM_OS_OsApplication_Core0_VAR_FAST_ZERO_INIT_START = ADDR(.ROM_OS_OsApplication_Core0_VAR_FAST_ZERO_INIT);
_ROM_OS_OsApplication_Core0_VAR_FAST_ZERO_INIT_END = ENDADDR(.ROM_OS_OsApplication_Core0_VAR_FAST_ZERO_INIT);

.ROM_OS_OsApplication_Core0_VAR_NOCACHE ROM(.OS_OsApplication_Core0_VAR_NOCACHE) :> .
_ROM_OS_OsApplication_Core0_VAR_NOCACHE_START = ADDR(.ROM_OS_OsApplication_Core0_VAR_NOCACHE);
_ROM_OS_OsApplication_Core0_VAR_NOCACHE_END = ENDADDR(.ROM_OS_OsApplication_Core0_VAR_NOCACHE);

.ROM_OS_OsApplication_Core0_VAR_NOCACHE_ZERO_INIT ROM(.OS_OsApplication_Core0_VAR_NOCACHE_ZERO_INIT) :> .
_ROM_OS_OsApplication_Core0_VAR_NOCACHE_ZERO_INIT_START = ADDR(.ROM_OS_OsApplication_Core0_VAR_NOCACHE_ZERO_INIT);
_ROM_OS_OsApplication_Core0_VAR_NOCACHE_ZERO_INIT_END = ENDADDR(.ROM_OS_OsApplication_Core0_VAR_NOCACHE_ZERO_INIT);

.ROM_OS_OsApplication_Core0_VAR_FAST_NOCACHE ROM(.OS_OsApplication_Core0_VAR_FAST_NOCACHE) :> .
_ROM_OS_OsApplication_Core0_VAR_FAST_NOCACHE_START = ADDR(.ROM_OS_OsApplication_Core0_VAR_FAST_NOCACHE);
_ROM_OS_OsApplication_Core0_VAR_FAST_NOCACHE_END = ENDADDR(.ROM_OS_OsApplication_Core0_VAR_FAST_NOCACHE);

.ROM_OS_OsApplication_Core0_VAR_FAST_NOCACHE_ZERO_INIT ROM(.OS_OsApplication_Core0_VAR_FAST_NOCACHE_ZERO_INIT) :> .
_ROM_OS_OsApplication_Core0_VAR_FAST_NOCACHE_ZERO_INIT_START = ADDR(.ROM_OS_OsApplication_Core0_VAR_FAST_NOCACHE_ZERO_INIT);
_ROM_OS_OsApplication_Core0_VAR_FAST_NOCACHE_ZERO_INIT_END = ENDADDR(.ROM_OS_OsApplication_Core0_VAR_FAST_NOCACHE_ZERO_INIT);
#endif

#ifdef OS_LINK_CONST_APP_OSAPPLICATION_CORE0
# undef OS_LINK_CONST_APP_OSAPPLICATION_CORE0
#endif

#ifdef OS_LINK_CONST_APP_OSAPPLICATION_CORE0_FAR
# undef OS_LINK_CONST_APP_OSAPPLICATION_CORE0_FAR
#endif

#ifdef OS_LINK_CONST_APP_OSAPPLICATION_CORE0_NEAR
# undef OS_LINK_CONST_APP_OSAPPLICATION_CORE0_NEAR
#endif

#ifdef OS_LINK_CONST_APP_OSAPPLICATION_CORE0_INIT
# undef OS_LINK_CONST_APP_OSAPPLICATION_CORE0_INIT
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_APP ) || defined ( OS_LINK_CONST_APP_SYSTEMAPPLICATION_OSCORE_CORE0 ) || defined ( OS_LINK_CONST_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR )
.OS_SystemApplication_OsCore_CORE0_CONST ALIGN(4) :> .
_OS_SystemApplication_OsCore_CORE0_CONST_START = ADDR(.OS_SystemApplication_OsCore_CORE0_CONST);
_OS_SystemApplication_OsCore_CORE0_CONST_END = ENDADDR(.OS_SystemApplication_OsCore_CORE0_CONST) - 1;
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_APP ) || defined ( OS_LINK_CONST_APP_SYSTEMAPPLICATION_OSCORE_CORE0 ) || defined ( OS_LINK_CONST_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR )
.OS_SystemApplication_OsCore_CORE0_CONST_FAST ALIGN(4) :> .
_OS_SystemApplication_OsCore_CORE0_CONST_FAST_START = ADDR(.OS_SystemApplication_OsCore_CORE0_CONST_FAST);
_OS_SystemApplication_OsCore_CORE0_CONST_FAST_END = ENDADDR(.OS_SystemApplication_OsCore_CORE0_CONST_FAST) - 1;
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_APP ) || defined ( OS_LINK_CONST_APP_SYSTEMAPPLICATION_OSCORE_CORE0 ) || defined ( OS_LINK_CONST_APP_SYSTEMAPPLICATION_OSCORE_CORE0_INIT )

.ROM_OS_SystemApplication_OsCore_CORE0_VAR ROM(.OS_SystemApplication_OsCore_CORE0_VAR) :> .
_ROM_OS_SystemApplication_OsCore_CORE0_VAR_START = ADDR(.ROM_OS_SystemApplication_OsCore_CORE0_VAR);
_ROM_OS_SystemApplication_OsCore_CORE0_VAR_END = ENDADDR(.ROM_OS_SystemApplication_OsCore_CORE0_VAR);

.ROM_OS_SystemApplication_OsCore_CORE0_VAR_ZERO_INIT ROM(.OS_SystemApplication_OsCore_CORE0_VAR_ZERO_INIT) :> .
_ROM_OS_SystemApplication_OsCore_CORE0_VAR_ZERO_INIT_START = ADDR(.ROM_OS_SystemApplication_OsCore_CORE0_VAR_ZERO_INIT);
_ROM_OS_SystemApplication_OsCore_CORE0_VAR_ZERO_INIT_END = ENDADDR(.ROM_OS_SystemApplication_OsCore_CORE0_VAR_ZERO_INIT);

.ROM_OS_SystemApplication_OsCore_CORE0_VAR_FAST ROM(.OS_SystemApplication_OsCore_CORE0_VAR_FAST) :> .
_ROM_OS_SystemApplication_OsCore_CORE0_VAR_FAST_START = ADDR(.ROM_OS_SystemApplication_OsCore_CORE0_VAR_FAST);
_ROM_OS_SystemApplication_OsCore_CORE0_VAR_FAST_END = ENDADDR(.ROM_OS_SystemApplication_OsCore_CORE0_VAR_FAST);

.ROM_OS_SystemApplication_OsCore_CORE0_VAR_FAST_ZERO_INIT ROM(.OS_SystemApplication_OsCore_CORE0_VAR_FAST_ZERO_INIT) :> .
_ROM_OS_SystemApplication_OsCore_CORE0_VAR_FAST_ZERO_INIT_START = ADDR(.ROM_OS_SystemApplication_OsCore_CORE0_VAR_FAST_ZERO_INIT);
_ROM_OS_SystemApplication_OsCore_CORE0_VAR_FAST_ZERO_INIT_END = ENDADDR(.ROM_OS_SystemApplication_OsCore_CORE0_VAR_FAST_ZERO_INIT);

.ROM_OS_SystemApplication_OsCore_CORE0_VAR_NOCACHE ROM(.OS_SystemApplication_OsCore_CORE0_VAR_NOCACHE) :> .
_ROM_OS_SystemApplication_OsCore_CORE0_VAR_NOCACHE_START = ADDR(.ROM_OS_SystemApplication_OsCore_CORE0_VAR_NOCACHE);
_ROM_OS_SystemApplication_OsCore_CORE0_VAR_NOCACHE_END = ENDADDR(.ROM_OS_SystemApplication_OsCore_CORE0_VAR_NOCACHE);

.ROM_OS_SystemApplication_OsCore_CORE0_VAR_NOCACHE_ZERO_INIT ROM(.OS_SystemApplication_OsCore_CORE0_VAR_NOCACHE_ZERO_INIT) :> .
_ROM_OS_SystemApplication_OsCore_CORE0_VAR_NOCACHE_ZERO_INIT_START = ADDR(.ROM_OS_SystemApplication_OsCore_CORE0_VAR_NOCACHE_ZERO_INIT);
_ROM_OS_SystemApplication_OsCore_CORE0_VAR_NOCACHE_ZERO_INIT_END = ENDADDR(.ROM_OS_SystemApplication_OsCore_CORE0_VAR_NOCACHE_ZERO_INIT);

.ROM_OS_SystemApplication_OsCore_CORE0_VAR_FAST_NOCACHE ROM(.OS_SystemApplication_OsCore_CORE0_VAR_FAST_NOCACHE) :> .
_ROM_OS_SystemApplication_OsCore_CORE0_VAR_FAST_NOCACHE_START = ADDR(.ROM_OS_SystemApplication_OsCore_CORE0_VAR_FAST_NOCACHE);
_ROM_OS_SystemApplication_OsCore_CORE0_VAR_FAST_NOCACHE_END = ENDADDR(.ROM_OS_SystemApplication_OsCore_CORE0_VAR_FAST_NOCACHE);

.ROM_OS_SystemApplication_OsCore_CORE0_VAR_FAST_NOCACHE_ZERO_INIT ROM(.OS_SystemApplication_OsCore_CORE0_VAR_FAST_NOCACHE_ZERO_INIT) :> .
_ROM_OS_SystemApplication_OsCore_CORE0_VAR_FAST_NOCACHE_ZERO_INIT_START = ADDR(.ROM_OS_SystemApplication_OsCore_CORE0_VAR_FAST_NOCACHE_ZERO_INIT);
_ROM_OS_SystemApplication_OsCore_CORE0_VAR_FAST_NOCACHE_ZERO_INIT_END = ENDADDR(.ROM_OS_SystemApplication_OsCore_CORE0_VAR_FAST_NOCACHE_ZERO_INIT);
#endif

#ifdef OS_LINK_CONST_APP_SYSTEMAPPLICATION_OSCORE_CORE0
# undef OS_LINK_CONST_APP_SYSTEMAPPLICATION_OSCORE_CORE0
#endif

#ifdef OS_LINK_CONST_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR
# undef OS_LINK_CONST_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR
#endif

#ifdef OS_LINK_CONST_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR
# undef OS_LINK_CONST_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR
#endif

#ifdef OS_LINK_CONST_APP_SYSTEMAPPLICATION_OSCORE_CORE0_INIT
# undef OS_LINK_CONST_APP_SYSTEMAPPLICATION_OSCORE_CORE0_INIT
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_BACKGROUNDTASK ) || defined ( OS_LINK_CONST_TASK_BACKGROUNDTASK_FAR )
.OS_BackgroundTask_CONST ALIGN(4) :> .
_OS_BackgroundTask_CONST_START = ADDR(.OS_BackgroundTask_CONST);
_OS_BackgroundTask_CONST_END = ENDADDR(.OS_BackgroundTask_CONST) - 1;
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_BACKGROUNDTASK ) || defined ( OS_LINK_CONST_TASK_BACKGROUNDTASK_NEAR )
.OS_BackgroundTask_CONST_FAST ALIGN(4) :> .
_OS_BackgroundTask_CONST_FAST_START = ADDR(.OS_BackgroundTask_CONST_FAST);
_OS_BackgroundTask_CONST_FAST_END = ENDADDR(.OS_BackgroundTask_CONST_FAST) - 1;
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_BACKGROUNDTASK ) || defined ( OS_LINK_CONST_TASK_BACKGROUNDTASK_INIT )

.ROM_OS_BackgroundTask_VAR ROM(.OS_BackgroundTask_VAR) :> .
_ROM_OS_BackgroundTask_VAR_START = ADDR(.ROM_OS_BackgroundTask_VAR);
_ROM_OS_BackgroundTask_VAR_END = ENDADDR(.ROM_OS_BackgroundTask_VAR);

.ROM_OS_BackgroundTask_VAR_NOINIT ROM(.OS_BackgroundTask_VAR_NOINIT) :> .
_ROM_OS_BackgroundTask_VAR_NOINIT_START = ADDR(.ROM_OS_BackgroundTask_VAR_NOINIT);
_ROM_OS_BackgroundTask_VAR_NOINIT_END = ENDADDR(.ROM_OS_BackgroundTask_VAR_NOINIT);

.ROM_OS_BackgroundTask_VAR_ZERO_INIT ROM(.OS_BackgroundTask_VAR_ZERO_INIT) :> .
_ROM_OS_BackgroundTask_VAR_ZERO_INIT_START = ADDR(.ROM_OS_BackgroundTask_VAR_ZERO_INIT);
_ROM_OS_BackgroundTask_VAR_ZERO_INIT_END = ENDADDR(.ROM_OS_BackgroundTask_VAR_ZERO_INIT);

.ROM_OS_BackgroundTask_VAR_FAST ROM(.OS_BackgroundTask_VAR_FAST) :> .
_ROM_OS_BackgroundTask_VAR_FAST_START = ADDR(.ROM_OS_BackgroundTask_VAR_FAST);
_ROM_OS_BackgroundTask_VAR_FAST_END = ENDADDR(.ROM_OS_BackgroundTask_VAR_FAST);

.ROM_OS_BackgroundTask_VAR_FAST_NOINIT ROM(.OS_BackgroundTask_VAR_FAST_NOINIT) :> .
_ROM_OS_BackgroundTask_VAR_FAST_NOINIT_START = ADDR(.ROM_OS_BackgroundTask_VAR_FAST_NOINIT);
_ROM_OS_BackgroundTask_VAR_FAST_NOINIT_END = ENDADDR(.ROM_OS_BackgroundTask_VAR_FAST_NOINIT);

.ROM_OS_BackgroundTask_VAR_FAST_ZERO_INIT ROM(.OS_BackgroundTask_VAR_FAST_ZERO_INIT) :> .
_ROM_OS_BackgroundTask_VAR_FAST_ZERO_INIT_START = ADDR(.ROM_OS_BackgroundTask_VAR_FAST_ZERO_INIT);
_ROM_OS_BackgroundTask_VAR_FAST_ZERO_INIT_END = ENDADDR(.ROM_OS_BackgroundTask_VAR_FAST_ZERO_INIT);

#endif

#ifdef OS_LINK_CONST_TASK_BACKGROUNDTASK
# undef OS_LINK_CONST_TASK_BACKGROUNDTASK
#endif

#ifdef OS_LINK_CONST_TASK_BACKGROUNDTASK_FAR
# undef OS_LINK_CONST_TASK_BACKGROUNDTASK_FAR
#endif

#ifdef OS_LINK_CONST_TASK_BACKGROUNDTASK_NEAR
# undef OS_LINK_CONST_TASK_BACKGROUNDTASK_NEAR
#endif

#ifdef OS_LINK_CONST_TASK_BACKGROUNDTASK_INIT
# undef OS_LINK_CONST_TASK_BACKGROUNDTASK_INIT
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_DEFAULT_BSW_ASYNC_TASK ) || defined ( OS_LINK_CONST_TASK_DEFAULT_BSW_ASYNC_TASK_FAR )
.OS_Default_BSW_Async_Task_CONST ALIGN(4) :> .
_OS_Default_BSW_Async_Task_CONST_START = ADDR(.OS_Default_BSW_Async_Task_CONST);
_OS_Default_BSW_Async_Task_CONST_END = ENDADDR(.OS_Default_BSW_Async_Task_CONST) - 1;
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_DEFAULT_BSW_ASYNC_TASK ) || defined ( OS_LINK_CONST_TASK_DEFAULT_BSW_ASYNC_TASK_NEAR )
.OS_Default_BSW_Async_Task_CONST_FAST ALIGN(4) :> .
_OS_Default_BSW_Async_Task_CONST_FAST_START = ADDR(.OS_Default_BSW_Async_Task_CONST_FAST);
_OS_Default_BSW_Async_Task_CONST_FAST_END = ENDADDR(.OS_Default_BSW_Async_Task_CONST_FAST) - 1;
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_DEFAULT_BSW_ASYNC_TASK ) || defined ( OS_LINK_CONST_TASK_DEFAULT_BSW_ASYNC_TASK_INIT )

.ROM_OS_Default_BSW_Async_Task_VAR ROM(.OS_Default_BSW_Async_Task_VAR) :> .
_ROM_OS_Default_BSW_Async_Task_VAR_START = ADDR(.ROM_OS_Default_BSW_Async_Task_VAR);
_ROM_OS_Default_BSW_Async_Task_VAR_END = ENDADDR(.ROM_OS_Default_BSW_Async_Task_VAR);

.ROM_OS_Default_BSW_Async_Task_VAR_NOINIT ROM(.OS_Default_BSW_Async_Task_VAR_NOINIT) :> .
_ROM_OS_Default_BSW_Async_Task_VAR_NOINIT_START = ADDR(.ROM_OS_Default_BSW_Async_Task_VAR_NOINIT);
_ROM_OS_Default_BSW_Async_Task_VAR_NOINIT_END = ENDADDR(.ROM_OS_Default_BSW_Async_Task_VAR_NOINIT);

.ROM_OS_Default_BSW_Async_Task_VAR_ZERO_INIT ROM(.OS_Default_BSW_Async_Task_VAR_ZERO_INIT) :> .
_ROM_OS_Default_BSW_Async_Task_VAR_ZERO_INIT_START = ADDR(.ROM_OS_Default_BSW_Async_Task_VAR_ZERO_INIT);
_ROM_OS_Default_BSW_Async_Task_VAR_ZERO_INIT_END = ENDADDR(.ROM_OS_Default_BSW_Async_Task_VAR_ZERO_INIT);

.ROM_OS_Default_BSW_Async_Task_VAR_FAST ROM(.OS_Default_BSW_Async_Task_VAR_FAST) :> .
_ROM_OS_Default_BSW_Async_Task_VAR_FAST_START = ADDR(.ROM_OS_Default_BSW_Async_Task_VAR_FAST);
_ROM_OS_Default_BSW_Async_Task_VAR_FAST_END = ENDADDR(.ROM_OS_Default_BSW_Async_Task_VAR_FAST);

.ROM_OS_Default_BSW_Async_Task_VAR_FAST_NOINIT ROM(.OS_Default_BSW_Async_Task_VAR_FAST_NOINIT) :> .
_ROM_OS_Default_BSW_Async_Task_VAR_FAST_NOINIT_START = ADDR(.ROM_OS_Default_BSW_Async_Task_VAR_FAST_NOINIT);
_ROM_OS_Default_BSW_Async_Task_VAR_FAST_NOINIT_END = ENDADDR(.ROM_OS_Default_BSW_Async_Task_VAR_FAST_NOINIT);

.ROM_OS_Default_BSW_Async_Task_VAR_FAST_ZERO_INIT ROM(.OS_Default_BSW_Async_Task_VAR_FAST_ZERO_INIT) :> .
_ROM_OS_Default_BSW_Async_Task_VAR_FAST_ZERO_INIT_START = ADDR(.ROM_OS_Default_BSW_Async_Task_VAR_FAST_ZERO_INIT);
_ROM_OS_Default_BSW_Async_Task_VAR_FAST_ZERO_INIT_END = ENDADDR(.ROM_OS_Default_BSW_Async_Task_VAR_FAST_ZERO_INIT);

#endif

#ifdef OS_LINK_CONST_TASK_DEFAULT_BSW_ASYNC_TASK
# undef OS_LINK_CONST_TASK_DEFAULT_BSW_ASYNC_TASK
#endif

#ifdef OS_LINK_CONST_TASK_DEFAULT_BSW_ASYNC_TASK_FAR
# undef OS_LINK_CONST_TASK_DEFAULT_BSW_ASYNC_TASK_FAR
#endif

#ifdef OS_LINK_CONST_TASK_DEFAULT_BSW_ASYNC_TASK_NEAR
# undef OS_LINK_CONST_TASK_DEFAULT_BSW_ASYNC_TASK_NEAR
#endif

#ifdef OS_LINK_CONST_TASK_DEFAULT_BSW_ASYNC_TASK_INIT
# undef OS_LINK_CONST_TASK_DEFAULT_BSW_ASYNC_TASK_INIT
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_INITTASK ) || defined ( OS_LINK_CONST_TASK_INITTASK_FAR )
.OS_InitTask_CONST ALIGN(4) :> .
_OS_InitTask_CONST_START = ADDR(.OS_InitTask_CONST);
_OS_InitTask_CONST_END = ENDADDR(.OS_InitTask_CONST) - 1;
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_INITTASK ) || defined ( OS_LINK_CONST_TASK_INITTASK_NEAR )
.OS_InitTask_CONST_FAST ALIGN(4) :> .
_OS_InitTask_CONST_FAST_START = ADDR(.OS_InitTask_CONST_FAST);
_OS_InitTask_CONST_FAST_END = ENDADDR(.OS_InitTask_CONST_FAST) - 1;
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_INITTASK ) || defined ( OS_LINK_CONST_TASK_INITTASK_INIT )

.ROM_OS_InitTask_VAR ROM(.OS_InitTask_VAR) :> .
_ROM_OS_InitTask_VAR_START = ADDR(.ROM_OS_InitTask_VAR);
_ROM_OS_InitTask_VAR_END = ENDADDR(.ROM_OS_InitTask_VAR);

.ROM_OS_InitTask_VAR_NOINIT ROM(.OS_InitTask_VAR_NOINIT) :> .
_ROM_OS_InitTask_VAR_NOINIT_START = ADDR(.ROM_OS_InitTask_VAR_NOINIT);
_ROM_OS_InitTask_VAR_NOINIT_END = ENDADDR(.ROM_OS_InitTask_VAR_NOINIT);

.ROM_OS_InitTask_VAR_ZERO_INIT ROM(.OS_InitTask_VAR_ZERO_INIT) :> .
_ROM_OS_InitTask_VAR_ZERO_INIT_START = ADDR(.ROM_OS_InitTask_VAR_ZERO_INIT);
_ROM_OS_InitTask_VAR_ZERO_INIT_END = ENDADDR(.ROM_OS_InitTask_VAR_ZERO_INIT);

.ROM_OS_InitTask_VAR_FAST ROM(.OS_InitTask_VAR_FAST) :> .
_ROM_OS_InitTask_VAR_FAST_START = ADDR(.ROM_OS_InitTask_VAR_FAST);
_ROM_OS_InitTask_VAR_FAST_END = ENDADDR(.ROM_OS_InitTask_VAR_FAST);

.ROM_OS_InitTask_VAR_FAST_NOINIT ROM(.OS_InitTask_VAR_FAST_NOINIT) :> .
_ROM_OS_InitTask_VAR_FAST_NOINIT_START = ADDR(.ROM_OS_InitTask_VAR_FAST_NOINIT);
_ROM_OS_InitTask_VAR_FAST_NOINIT_END = ENDADDR(.ROM_OS_InitTask_VAR_FAST_NOINIT);

.ROM_OS_InitTask_VAR_FAST_ZERO_INIT ROM(.OS_InitTask_VAR_FAST_ZERO_INIT) :> .
_ROM_OS_InitTask_VAR_FAST_ZERO_INIT_START = ADDR(.ROM_OS_InitTask_VAR_FAST_ZERO_INIT);
_ROM_OS_InitTask_VAR_FAST_ZERO_INIT_END = ENDADDR(.ROM_OS_InitTask_VAR_FAST_ZERO_INIT);

#endif

#ifdef OS_LINK_CONST_TASK_INITTASK
# undef OS_LINK_CONST_TASK_INITTASK
#endif

#ifdef OS_LINK_CONST_TASK_INITTASK_FAR
# undef OS_LINK_CONST_TASK_INITTASK_FAR
#endif

#ifdef OS_LINK_CONST_TASK_INITTASK_NEAR
# undef OS_LINK_CONST_TASK_INITTASK_NEAR
#endif

#ifdef OS_LINK_CONST_TASK_INITTASK_INIT
# undef OS_LINK_CONST_TASK_INITTASK_INIT
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_SHUTDOWNTASK ) || defined ( OS_LINK_CONST_TASK_SHUTDOWNTASK_FAR )
.OS_ShutdownTask_CONST ALIGN(4) :> .
_OS_ShutdownTask_CONST_START = ADDR(.OS_ShutdownTask_CONST);
_OS_ShutdownTask_CONST_END = ENDADDR(.OS_ShutdownTask_CONST) - 1;
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_SHUTDOWNTASK ) || defined ( OS_LINK_CONST_TASK_SHUTDOWNTASK_NEAR )
.OS_ShutdownTask_CONST_FAST ALIGN(4) :> .
_OS_ShutdownTask_CONST_FAST_START = ADDR(.OS_ShutdownTask_CONST_FAST);
_OS_ShutdownTask_CONST_FAST_END = ENDADDR(.OS_ShutdownTask_CONST_FAST) - 1;
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_SHUTDOWNTASK ) || defined ( OS_LINK_CONST_TASK_SHUTDOWNTASK_INIT )

.ROM_OS_ShutdownTask_VAR ROM(.OS_ShutdownTask_VAR) :> .
_ROM_OS_ShutdownTask_VAR_START = ADDR(.ROM_OS_ShutdownTask_VAR);
_ROM_OS_ShutdownTask_VAR_END = ENDADDR(.ROM_OS_ShutdownTask_VAR);

.ROM_OS_ShutdownTask_VAR_NOINIT ROM(.OS_ShutdownTask_VAR_NOINIT) :> .
_ROM_OS_ShutdownTask_VAR_NOINIT_START = ADDR(.ROM_OS_ShutdownTask_VAR_NOINIT);
_ROM_OS_ShutdownTask_VAR_NOINIT_END = ENDADDR(.ROM_OS_ShutdownTask_VAR_NOINIT);

.ROM_OS_ShutdownTask_VAR_ZERO_INIT ROM(.OS_ShutdownTask_VAR_ZERO_INIT) :> .
_ROM_OS_ShutdownTask_VAR_ZERO_INIT_START = ADDR(.ROM_OS_ShutdownTask_VAR_ZERO_INIT);
_ROM_OS_ShutdownTask_VAR_ZERO_INIT_END = ENDADDR(.ROM_OS_ShutdownTask_VAR_ZERO_INIT);

.ROM_OS_ShutdownTask_VAR_FAST ROM(.OS_ShutdownTask_VAR_FAST) :> .
_ROM_OS_ShutdownTask_VAR_FAST_START = ADDR(.ROM_OS_ShutdownTask_VAR_FAST);
_ROM_OS_ShutdownTask_VAR_FAST_END = ENDADDR(.ROM_OS_ShutdownTask_VAR_FAST);

.ROM_OS_ShutdownTask_VAR_FAST_NOINIT ROM(.OS_ShutdownTask_VAR_FAST_NOINIT) :> .
_ROM_OS_ShutdownTask_VAR_FAST_NOINIT_START = ADDR(.ROM_OS_ShutdownTask_VAR_FAST_NOINIT);
_ROM_OS_ShutdownTask_VAR_FAST_NOINIT_END = ENDADDR(.ROM_OS_ShutdownTask_VAR_FAST_NOINIT);

.ROM_OS_ShutdownTask_VAR_FAST_ZERO_INIT ROM(.OS_ShutdownTask_VAR_FAST_ZERO_INIT) :> .
_ROM_OS_ShutdownTask_VAR_FAST_ZERO_INIT_START = ADDR(.ROM_OS_ShutdownTask_VAR_FAST_ZERO_INIT);
_ROM_OS_ShutdownTask_VAR_FAST_ZERO_INIT_END = ENDADDR(.ROM_OS_ShutdownTask_VAR_FAST_ZERO_INIT);

#endif

#ifdef OS_LINK_CONST_TASK_SHUTDOWNTASK
# undef OS_LINK_CONST_TASK_SHUTDOWNTASK
#endif

#ifdef OS_LINK_CONST_TASK_SHUTDOWNTASK_FAR
# undef OS_LINK_CONST_TASK_SHUTDOWNTASK_FAR
#endif

#ifdef OS_LINK_CONST_TASK_SHUTDOWNTASK_NEAR
# undef OS_LINK_CONST_TASK_SHUTDOWNTASK_NEAR
#endif

#ifdef OS_LINK_CONST_TASK_SHUTDOWNTASK_INIT
# undef OS_LINK_CONST_TASK_SHUTDOWNTASK_INIT
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0 ) || defined ( OS_LINK_CONST_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_FAR )
.OS_CounterIsr_TpCounter_OsCore_CORE0_CONST ALIGN(4) :> .
_OS_CounterIsr_TpCounter_OsCore_CORE0_CONST_START = ADDR(.OS_CounterIsr_TpCounter_OsCore_CORE0_CONST);
_OS_CounterIsr_TpCounter_OsCore_CORE0_CONST_END = ENDADDR(.OS_CounterIsr_TpCounter_OsCore_CORE0_CONST) - 1;
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0 ) || defined ( OS_LINK_CONST_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_NEAR )
.OS_CounterIsr_TpCounter_OsCore_CORE0_CONST_FAST ALIGN(4) :> .
_OS_CounterIsr_TpCounter_OsCore_CORE0_CONST_FAST_START = ADDR(.OS_CounterIsr_TpCounter_OsCore_CORE0_CONST_FAST);
_OS_CounterIsr_TpCounter_OsCore_CORE0_CONST_FAST_END = ENDADDR(.OS_CounterIsr_TpCounter_OsCore_CORE0_CONST_FAST) - 1;
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0 ) || defined ( OS_LINK_CONST_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_INIT )

.ROM_OS_CounterIsr_TpCounter_OsCore_CORE0_VAR ROM(.OS_CounterIsr_TpCounter_OsCore_CORE0_VAR) :> .
_ROM_OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_START = ADDR(.ROM_OS_CounterIsr_TpCounter_OsCore_CORE0_VAR);
_ROM_OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_END = ENDADDR(.ROM_OS_CounterIsr_TpCounter_OsCore_CORE0_VAR);

.ROM_OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_NOINIT ROM(.OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_NOINIT) :> .
_ROM_OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_NOINIT_START = ADDR(.ROM_OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_NOINIT);
_ROM_OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_NOINIT_END = ENDADDR(.ROM_OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_NOINIT);

.ROM_OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_ZERO_INIT ROM(.OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_ZERO_INIT) :> .
_ROM_OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_ZERO_INIT_START = ADDR(.ROM_OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_ZERO_INIT);
_ROM_OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_ZERO_INIT_END = ENDADDR(.ROM_OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_ZERO_INIT);

.ROM_OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_FAST ROM(.OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_FAST) :> .
_ROM_OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_FAST_START = ADDR(.ROM_OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_FAST);
_ROM_OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_FAST_END = ENDADDR(.ROM_OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_FAST);

.ROM_OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_FAST_NOINIT ROM(.OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_FAST_NOINIT) :> .
_ROM_OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_FAST_NOINIT_START = ADDR(.ROM_OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_FAST_NOINIT);
_ROM_OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_FAST_NOINIT_END = ENDADDR(.ROM_OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_FAST_NOINIT);

.ROM_OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_FAST_ZERO_INIT ROM(.OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_FAST_ZERO_INIT) :> .
_ROM_OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_FAST_ZERO_INIT_START = ADDR(.ROM_OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_FAST_ZERO_INIT);
_ROM_OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_FAST_ZERO_INIT_END = ENDADDR(.ROM_OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_FAST_ZERO_INIT);

#endif

#ifdef OS_LINK_CONST_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0
# undef OS_LINK_CONST_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0
#endif

#ifdef OS_LINK_CONST_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_FAR
# undef OS_LINK_CONST_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_FAR
#endif

#ifdef OS_LINK_CONST_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_NEAR
# undef OS_LINK_CONST_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_NEAR
#endif

#ifdef OS_LINK_CONST_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_INIT
# undef OS_LINK_CONST_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_INIT
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_FR_IRQLINE0 ) || defined ( OS_LINK_CONST_ISR_FR_IRQLINE0_FAR )
.OS_Fr_IrqLine0_CONST ALIGN(4) :> .
_OS_Fr_IrqLine0_CONST_START = ADDR(.OS_Fr_IrqLine0_CONST);
_OS_Fr_IrqLine0_CONST_END = ENDADDR(.OS_Fr_IrqLine0_CONST) - 1;
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_FR_IRQLINE0 ) || defined ( OS_LINK_CONST_ISR_FR_IRQLINE0_NEAR )
.OS_Fr_IrqLine0_CONST_FAST ALIGN(4) :> .
_OS_Fr_IrqLine0_CONST_FAST_START = ADDR(.OS_Fr_IrqLine0_CONST_FAST);
_OS_Fr_IrqLine0_CONST_FAST_END = ENDADDR(.OS_Fr_IrqLine0_CONST_FAST) - 1;
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_FR_IRQLINE0 ) || defined ( OS_LINK_CONST_ISR_FR_IRQLINE0_INIT )

.ROM_OS_Fr_IrqLine0_VAR ROM(.OS_Fr_IrqLine0_VAR) :> .
_ROM_OS_Fr_IrqLine0_VAR_START = ADDR(.ROM_OS_Fr_IrqLine0_VAR);
_ROM_OS_Fr_IrqLine0_VAR_END = ENDADDR(.ROM_OS_Fr_IrqLine0_VAR);

.ROM_OS_Fr_IrqLine0_VAR_NOINIT ROM(.OS_Fr_IrqLine0_VAR_NOINIT) :> .
_ROM_OS_Fr_IrqLine0_VAR_NOINIT_START = ADDR(.ROM_OS_Fr_IrqLine0_VAR_NOINIT);
_ROM_OS_Fr_IrqLine0_VAR_NOINIT_END = ENDADDR(.ROM_OS_Fr_IrqLine0_VAR_NOINIT);

.ROM_OS_Fr_IrqLine0_VAR_ZERO_INIT ROM(.OS_Fr_IrqLine0_VAR_ZERO_INIT) :> .
_ROM_OS_Fr_IrqLine0_VAR_ZERO_INIT_START = ADDR(.ROM_OS_Fr_IrqLine0_VAR_ZERO_INIT);
_ROM_OS_Fr_IrqLine0_VAR_ZERO_INIT_END = ENDADDR(.ROM_OS_Fr_IrqLine0_VAR_ZERO_INIT);

.ROM_OS_Fr_IrqLine0_VAR_FAST ROM(.OS_Fr_IrqLine0_VAR_FAST) :> .
_ROM_OS_Fr_IrqLine0_VAR_FAST_START = ADDR(.ROM_OS_Fr_IrqLine0_VAR_FAST);
_ROM_OS_Fr_IrqLine0_VAR_FAST_END = ENDADDR(.ROM_OS_Fr_IrqLine0_VAR_FAST);

.ROM_OS_Fr_IrqLine0_VAR_FAST_NOINIT ROM(.OS_Fr_IrqLine0_VAR_FAST_NOINIT) :> .
_ROM_OS_Fr_IrqLine0_VAR_FAST_NOINIT_START = ADDR(.ROM_OS_Fr_IrqLine0_VAR_FAST_NOINIT);
_ROM_OS_Fr_IrqLine0_VAR_FAST_NOINIT_END = ENDADDR(.ROM_OS_Fr_IrqLine0_VAR_FAST_NOINIT);

.ROM_OS_Fr_IrqLine0_VAR_FAST_ZERO_INIT ROM(.OS_Fr_IrqLine0_VAR_FAST_ZERO_INIT) :> .
_ROM_OS_Fr_IrqLine0_VAR_FAST_ZERO_INIT_START = ADDR(.ROM_OS_Fr_IrqLine0_VAR_FAST_ZERO_INIT);
_ROM_OS_Fr_IrqLine0_VAR_FAST_ZERO_INIT_END = ENDADDR(.ROM_OS_Fr_IrqLine0_VAR_FAST_ZERO_INIT);

#endif

#ifdef OS_LINK_CONST_ISR_FR_IRQLINE0
# undef OS_LINK_CONST_ISR_FR_IRQLINE0
#endif

#ifdef OS_LINK_CONST_ISR_FR_IRQLINE0_FAR
# undef OS_LINK_CONST_ISR_FR_IRQLINE0_FAR
#endif

#ifdef OS_LINK_CONST_ISR_FR_IRQLINE0_NEAR
# undef OS_LINK_CONST_ISR_FR_IRQLINE0_NEAR
#endif

#ifdef OS_LINK_CONST_ISR_FR_IRQLINE0_INIT
# undef OS_LINK_CONST_ISR_FR_IRQLINE0_INIT
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_FR_IRQTIMER0 ) || defined ( OS_LINK_CONST_ISR_FR_IRQTIMER0_FAR )
.OS_Fr_IrqTimer0_CONST ALIGN(4) :> .
_OS_Fr_IrqTimer0_CONST_START = ADDR(.OS_Fr_IrqTimer0_CONST);
_OS_Fr_IrqTimer0_CONST_END = ENDADDR(.OS_Fr_IrqTimer0_CONST) - 1;
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_FR_IRQTIMER0 ) || defined ( OS_LINK_CONST_ISR_FR_IRQTIMER0_NEAR )
.OS_Fr_IrqTimer0_CONST_FAST ALIGN(4) :> .
_OS_Fr_IrqTimer0_CONST_FAST_START = ADDR(.OS_Fr_IrqTimer0_CONST_FAST);
_OS_Fr_IrqTimer0_CONST_FAST_END = ENDADDR(.OS_Fr_IrqTimer0_CONST_FAST) - 1;
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_FR_IRQTIMER0 ) || defined ( OS_LINK_CONST_ISR_FR_IRQTIMER0_INIT )

.ROM_OS_Fr_IrqTimer0_VAR ROM(.OS_Fr_IrqTimer0_VAR) :> .
_ROM_OS_Fr_IrqTimer0_VAR_START = ADDR(.ROM_OS_Fr_IrqTimer0_VAR);
_ROM_OS_Fr_IrqTimer0_VAR_END = ENDADDR(.ROM_OS_Fr_IrqTimer0_VAR);

.ROM_OS_Fr_IrqTimer0_VAR_NOINIT ROM(.OS_Fr_IrqTimer0_VAR_NOINIT) :> .
_ROM_OS_Fr_IrqTimer0_VAR_NOINIT_START = ADDR(.ROM_OS_Fr_IrqTimer0_VAR_NOINIT);
_ROM_OS_Fr_IrqTimer0_VAR_NOINIT_END = ENDADDR(.ROM_OS_Fr_IrqTimer0_VAR_NOINIT);

.ROM_OS_Fr_IrqTimer0_VAR_ZERO_INIT ROM(.OS_Fr_IrqTimer0_VAR_ZERO_INIT) :> .
_ROM_OS_Fr_IrqTimer0_VAR_ZERO_INIT_START = ADDR(.ROM_OS_Fr_IrqTimer0_VAR_ZERO_INIT);
_ROM_OS_Fr_IrqTimer0_VAR_ZERO_INIT_END = ENDADDR(.ROM_OS_Fr_IrqTimer0_VAR_ZERO_INIT);

.ROM_OS_Fr_IrqTimer0_VAR_FAST ROM(.OS_Fr_IrqTimer0_VAR_FAST) :> .
_ROM_OS_Fr_IrqTimer0_VAR_FAST_START = ADDR(.ROM_OS_Fr_IrqTimer0_VAR_FAST);
_ROM_OS_Fr_IrqTimer0_VAR_FAST_END = ENDADDR(.ROM_OS_Fr_IrqTimer0_VAR_FAST);

.ROM_OS_Fr_IrqTimer0_VAR_FAST_NOINIT ROM(.OS_Fr_IrqTimer0_VAR_FAST_NOINIT) :> .
_ROM_OS_Fr_IrqTimer0_VAR_FAST_NOINIT_START = ADDR(.ROM_OS_Fr_IrqTimer0_VAR_FAST_NOINIT);
_ROM_OS_Fr_IrqTimer0_VAR_FAST_NOINIT_END = ENDADDR(.ROM_OS_Fr_IrqTimer0_VAR_FAST_NOINIT);

.ROM_OS_Fr_IrqTimer0_VAR_FAST_ZERO_INIT ROM(.OS_Fr_IrqTimer0_VAR_FAST_ZERO_INIT) :> .
_ROM_OS_Fr_IrqTimer0_VAR_FAST_ZERO_INIT_START = ADDR(.ROM_OS_Fr_IrqTimer0_VAR_FAST_ZERO_INIT);
_ROM_OS_Fr_IrqTimer0_VAR_FAST_ZERO_INIT_END = ENDADDR(.ROM_OS_Fr_IrqTimer0_VAR_FAST_ZERO_INIT);

#endif

#ifdef OS_LINK_CONST_ISR_FR_IRQTIMER0
# undef OS_LINK_CONST_ISR_FR_IRQTIMER0
#endif

#ifdef OS_LINK_CONST_ISR_FR_IRQTIMER0_FAR
# undef OS_LINK_CONST_ISR_FR_IRQTIMER0_FAR
#endif

#ifdef OS_LINK_CONST_ISR_FR_IRQTIMER0_NEAR
# undef OS_LINK_CONST_ISR_FR_IRQTIMER0_NEAR
#endif

#ifdef OS_LINK_CONST_ISR_FR_IRQTIMER0_INIT
# undef OS_LINK_CONST_ISR_FR_IRQTIMER0_INIT
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_OS_TIMERPITISR ) || defined ( OS_LINK_CONST_ISR_OS_TIMERPITISR_FAR )
.OS_Os_TimerPitIsr_CONST ALIGN(4) :> .
_OS_Os_TimerPitIsr_CONST_START = ADDR(.OS_Os_TimerPitIsr_CONST);
_OS_Os_TimerPitIsr_CONST_END = ENDADDR(.OS_Os_TimerPitIsr_CONST) - 1;
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_OS_TIMERPITISR ) || defined ( OS_LINK_CONST_ISR_OS_TIMERPITISR_NEAR )
.OS_Os_TimerPitIsr_CONST_FAST ALIGN(4) :> .
_OS_Os_TimerPitIsr_CONST_FAST_START = ADDR(.OS_Os_TimerPitIsr_CONST_FAST);
_OS_Os_TimerPitIsr_CONST_FAST_END = ENDADDR(.OS_Os_TimerPitIsr_CONST_FAST) - 1;
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_OS_TIMERPITISR ) || defined ( OS_LINK_CONST_ISR_OS_TIMERPITISR_INIT )

.ROM_OS_Os_TimerPitIsr_VAR ROM(.OS_Os_TimerPitIsr_VAR) :> .
_ROM_OS_Os_TimerPitIsr_VAR_START = ADDR(.ROM_OS_Os_TimerPitIsr_VAR);
_ROM_OS_Os_TimerPitIsr_VAR_END = ENDADDR(.ROM_OS_Os_TimerPitIsr_VAR);

.ROM_OS_Os_TimerPitIsr_VAR_NOINIT ROM(.OS_Os_TimerPitIsr_VAR_NOINIT) :> .
_ROM_OS_Os_TimerPitIsr_VAR_NOINIT_START = ADDR(.ROM_OS_Os_TimerPitIsr_VAR_NOINIT);
_ROM_OS_Os_TimerPitIsr_VAR_NOINIT_END = ENDADDR(.ROM_OS_Os_TimerPitIsr_VAR_NOINIT);

.ROM_OS_Os_TimerPitIsr_VAR_ZERO_INIT ROM(.OS_Os_TimerPitIsr_VAR_ZERO_INIT) :> .
_ROM_OS_Os_TimerPitIsr_VAR_ZERO_INIT_START = ADDR(.ROM_OS_Os_TimerPitIsr_VAR_ZERO_INIT);
_ROM_OS_Os_TimerPitIsr_VAR_ZERO_INIT_END = ENDADDR(.ROM_OS_Os_TimerPitIsr_VAR_ZERO_INIT);

.ROM_OS_Os_TimerPitIsr_VAR_FAST ROM(.OS_Os_TimerPitIsr_VAR_FAST) :> .
_ROM_OS_Os_TimerPitIsr_VAR_FAST_START = ADDR(.ROM_OS_Os_TimerPitIsr_VAR_FAST);
_ROM_OS_Os_TimerPitIsr_VAR_FAST_END = ENDADDR(.ROM_OS_Os_TimerPitIsr_VAR_FAST);

.ROM_OS_Os_TimerPitIsr_VAR_FAST_NOINIT ROM(.OS_Os_TimerPitIsr_VAR_FAST_NOINIT) :> .
_ROM_OS_Os_TimerPitIsr_VAR_FAST_NOINIT_START = ADDR(.ROM_OS_Os_TimerPitIsr_VAR_FAST_NOINIT);
_ROM_OS_Os_TimerPitIsr_VAR_FAST_NOINIT_END = ENDADDR(.ROM_OS_Os_TimerPitIsr_VAR_FAST_NOINIT);

.ROM_OS_Os_TimerPitIsr_VAR_FAST_ZERO_INIT ROM(.OS_Os_TimerPitIsr_VAR_FAST_ZERO_INIT) :> .
_ROM_OS_Os_TimerPitIsr_VAR_FAST_ZERO_INIT_START = ADDR(.ROM_OS_Os_TimerPitIsr_VAR_FAST_ZERO_INIT);
_ROM_OS_Os_TimerPitIsr_VAR_FAST_ZERO_INIT_END = ENDADDR(.ROM_OS_Os_TimerPitIsr_VAR_FAST_ZERO_INIT);

#endif

#ifdef OS_LINK_CONST_ISR_OS_TIMERPITISR
# undef OS_LINK_CONST_ISR_OS_TIMERPITISR
#endif

#ifdef OS_LINK_CONST_ISR_OS_TIMERPITISR_FAR
# undef OS_LINK_CONST_ISR_OS_TIMERPITISR_FAR
#endif

#ifdef OS_LINK_CONST_ISR_OS_TIMERPITISR_NEAR
# undef OS_LINK_CONST_ISR_OS_TIMERPITISR_NEAR
#endif

#ifdef OS_LINK_CONST_ISR_OS_TIMERPITISR_INIT
# undef OS_LINK_CONST_ISR_OS_TIMERPITISR_INIT
#endif



#ifdef OS_LINK_CONST
# undef OS_LINK_CONST
#endif

#ifdef OS_LINK_CONST_APP
# undef OS_LINK_CONST_APP
#endif

#ifdef OS_LINK_CONST_TASK
# undef OS_LINK_CONST_TASK
#endif

#ifdef OS_LINK_CONST_ISR
# undef OS_LINK_CONST_ISR
#endif

#ifdef OS_LINK_CONST_KERNEL
# undef OS_LINK_CONST_KERNEL
#endif

#ifdef OS_LINK_CONST_KERNEL_FAR
# undef OS_LINK_CONST_KERNEL_FAR
#endif

#ifdef OS_LINK_CONST_KERNEL_NEAR
# undef OS_LINK_CONST_KERNEL_NEAR
#endif

#ifdef OS_LINK_INTVEC_CONST
# undef OS_LINK_INTVEC_CONST
#endif

#ifdef OS_LINK_EXCVEC_CONST
# undef OS_LINK_EXCVEC_CONST
#endif


/**********************************************************************************************************************
 *  VAR SECTIONS
 *********************************************************************************************************************/

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_KERNEL ) || defined ( OS_LINK_VAR_KERNEL_FAR ) || defined ( OS_LINK_VAR_KERNEL_FAR_CACHE ) || defined ( OS_LINK_VAR_KERNEL_FAR_CACHE_INIT )
.OS_CORE0_VAR ALIGN(4) :> .
_OS_CORE0_VAR_START = ADDR(.OS_CORE0_VAR);
_OS_CORE0_VAR_END = ENDADDR(.OS_CORE0_VAR) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_KERNEL ) || defined ( OS_LINK_VAR_KERNEL_FAR ) || defined ( OS_LINK_VAR_KERNEL_FAR_CACHE ) || defined ( OS_LINK_VAR_KERNEL_FAR_CACHE_NOINIT )
.OS_CORE0_VAR_NOINIT ALIGN(4) :> .
_OS_CORE0_VAR_NOINIT_START = ADDR(.OS_CORE0_VAR_NOINIT);
_OS_CORE0_VAR_NOINIT_END = ENDADDR(.OS_CORE0_VAR_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_KERNEL ) || defined ( OS_LINK_VAR_KERNEL_NEAR ) || defined ( OS_LINK_VAR_KERNEL_NEAR_CACHE ) || defined ( OS_LINK_VAR_KERNEL_NEAR_CACHE_INIT )
.OS_CORE0_VAR_FAST ALIGN(4) :> .
_OS_CORE0_VAR_FAST_START = ADDR(.OS_CORE0_VAR_FAST);
_OS_CORE0_VAR_FAST_END = ENDADDR(.OS_CORE0_VAR_FAST) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_KERNEL ) || defined ( OS_LINK_VAR_KERNEL_NEAR ) || defined ( OS_LINK_VAR_KERNEL_NEAR_CACHE ) || defined ( OS_LINK_VAR_KERNEL_NEAR_CACHE_NOINIT )
.OS_CORE0_VAR_FAST_NOINIT ALIGN(4) :> .
_OS_CORE0_VAR_FAST_NOINIT_START = ADDR(.OS_CORE0_VAR_FAST_NOINIT);
_OS_CORE0_VAR_FAST_NOINIT_END = ENDADDR(.OS_CORE0_VAR_FAST_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_KERNEL ) || defined ( OS_LINK_VAR_KERNEL_FAR ) || defined ( OS_LINK_VAR_KERNEL_FAR_NOCACHE ) || defined ( OS_LINK_VAR_KERNEL_FAR_NOCACHE_INIT )
.OS_CORE0_VAR_NOCACHE ALIGN(4) :> .
_OS_CORE0_VAR_NOCACHE_START = ADDR(.OS_CORE0_VAR_NOCACHE);
_OS_CORE0_VAR_NOCACHE_END = ENDADDR(.OS_CORE0_VAR_NOCACHE) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_KERNEL ) || defined ( OS_LINK_VAR_KERNEL_FAR ) || defined ( OS_LINK_VAR_KERNEL_FAR_NOCACHE ) || defined ( OS_LINK_VAR_KERNEL_FAR_NOCACHE_NOINIT )
.OS_CORE0_VAR_NOCACHE_NOINIT ALIGN(4) :> .
_OS_CORE0_VAR_NOCACHE_NOINIT_START = ADDR(.OS_CORE0_VAR_NOCACHE_NOINIT);
_OS_CORE0_VAR_NOCACHE_NOINIT_END = ENDADDR(.OS_CORE0_VAR_NOCACHE_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_KERNEL ) || defined ( OS_LINK_VAR_KERNEL_NEAR ) || defined ( OS_LINK_VAR_KERNEL_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_KERNEL_NEAR_NOCACHE_INIT )
.OS_CORE0_VAR_FAST_NOCACHE ALIGN(4) :> .
_OS_CORE0_VAR_FAST_NOCACHE_START = ADDR(.OS_CORE0_VAR_FAST_NOCACHE);
_OS_CORE0_VAR_FAST_NOCACHE_END = ENDADDR(.OS_CORE0_VAR_FAST_NOCACHE) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_KERNEL ) || defined ( OS_LINK_VAR_KERNEL_NEAR ) || defined ( OS_LINK_VAR_KERNEL_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_KERNEL_NEAR_NOCACHE_NOINIT )
.OS_CORE0_VAR_FAST_NOCACHE_NOINIT ALIGN(4) :> .
_OS_CORE0_VAR_FAST_NOCACHE_NOINIT_START = ADDR(.OS_CORE0_VAR_FAST_NOCACHE_NOINIT);
_OS_CORE0_VAR_FAST_NOCACHE_NOINIT_END = ENDADDR(.OS_CORE0_VAR_FAST_NOCACHE_NOINIT) - 1;
#endif

#if defined ( OS_LINK_KERNEL_TRACE ) || defined ( OS_LINK_KERNEL_TRACE_FAR )
.OS_PUBLIC_CORE0_VAR_NOINIT ALIGN(4) :> .
_OS_PUBLIC_CORE0_VAR_NOINIT_START = ADDR(.OS_PUBLIC_CORE0_VAR_NOINIT);
_OS_PUBLIC_CORE0_VAR_NOINIT_END = ENDADDR(.OS_PUBLIC_CORE0_VAR_NOINIT) - 1;
#endif

#if defined ( OS_LINK_KERNEL_TRACE ) || defined ( OS_LINK_KERNEL_TRACE_NEAR )
.OS_PUBLIC_CORE0_VAR_FAST_NOINIT ALIGN(4) :> .
_OS_PUBLIC_CORE0_VAR_FAST_NOINIT_START = ADDR(.OS_PUBLIC_CORE0_VAR_FAST_NOINIT);
_OS_PUBLIC_CORE0_VAR_FAST_NOINIT_END = ENDADDR(.OS_PUBLIC_CORE0_VAR_FAST_NOINIT) - 1;
#endif

#if defined ( OS_LINK_KERNEL_BARRIERS ) || defined ( OS_LINK_KERNEL_BARRIERS_FAR )
.OS_BARRIER_CORE0_VAR_NOCACHE_NOINIT ALIGN(4) :> .
_OS_BARRIER_CORE0_VAR_NOCACHE_NOINIT_START = ADDR(.OS_BARRIER_CORE0_VAR_NOCACHE_NOINIT);
_OS_BARRIER_CORE0_VAR_NOCACHE_NOINIT_END = ENDADDR(.OS_BARRIER_CORE0_VAR_NOCACHE_NOINIT) - 1;
#endif

#if defined ( OS_LINK_KERNEL_BARRIERS ) || defined ( OS_LINK_KERNEL_BARRIERS_NEAR )
.OS_BARRIER_CORE0_VAR_FAST_NOCACHE_NOINIT ALIGN(4) :> .
_OS_BARRIER_CORE0_VAR_FAST_NOCACHE_NOINIT_START = ADDR(.OS_BARRIER_CORE0_VAR_FAST_NOCACHE_NOINIT);
_OS_BARRIER_CORE0_VAR_FAST_NOCACHE_NOINIT_END = ENDADDR(.OS_BARRIER_CORE0_VAR_FAST_NOCACHE_NOINIT) - 1;
#endif

#if defined ( OS_LINK_KERNEL_CORESTATUS ) || defined ( OS_LINK_KERNEL_CORESTATUS_FAR )
.OS_CORESTATUS_CORE0_VAR_NOCACHE_NOINIT ALIGN(4) :> .
_OS_CORESTATUS_CORE0_VAR_NOCACHE_NOINIT_START = ADDR(.OS_CORESTATUS_CORE0_VAR_NOCACHE_NOINIT);
_OS_CORESTATUS_CORE0_VAR_NOCACHE_NOINIT_END = ENDADDR(.OS_CORESTATUS_CORE0_VAR_NOCACHE_NOINIT) - 1;
#endif

#if defined ( OS_LINK_KERNEL_CORESTATUS ) || defined ( OS_LINK_KERNEL_CORESTATUS_NEAR )
.OS_CORESTATUS_CORE0_VAR_FAST_NOCACHE_NOINIT ALIGN(4) :> .
_OS_CORESTATUS_CORE0_VAR_FAST_NOCACHE_NOINIT_START = ADDR(.OS_CORESTATUS_CORE0_VAR_FAST_NOCACHE_NOINIT);
_OS_CORESTATUS_CORE0_VAR_FAST_NOCACHE_NOINIT_END = ENDADDR(.OS_CORESTATUS_CORE0_VAR_FAST_NOCACHE_NOINIT) - 1;
#endif


#ifdef OS_LINK_VAR_APP_OSAPPLICATION_CORE0
. = ALIGN(4);
_OS_OsApplication_Core0_VAR_ALL_START = .;
__OS_OsApplication_Core0_VAR_ALL_START = .;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_CORE0 ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_CORE0_FAR ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_CORE0_FAR_CACHE ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_CORE0_FAR_CACHE_INIT )
.OS_OsApplication_Core0_VAR ALIGN(4) :> .
_OS_OsApplication_Core0_VAR_START = ADDR(.OS_OsApplication_Core0_VAR);
_OS_OsApplication_Core0_VAR_END = ENDADDR(.OS_OsApplication_Core0_VAR) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_CORE0 ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_CORE0_FAR ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_CORE0_FAR_CACHE ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_CORE0_FAR_CACHE_NOINIT )
.OS_OsApplication_Core0_VAR_NOINIT ALIGN(4) :> .
_OS_OsApplication_Core0_VAR_NOINIT_START = ADDR(.OS_OsApplication_Core0_VAR_NOINIT);
_OS_OsApplication_Core0_VAR_NOINIT_END = ENDADDR(.OS_OsApplication_Core0_VAR_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_CORE0 ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_CORE0_FAR ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_CORE0_FAR_CACHE ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_CORE0_FAR_CACHE_ZERO_INIT )
.OS_OsApplication_Core0_VAR_ZERO_INIT ALIGN(4) :> .
.OS_OsApplication_Core0_VAR_ZERO_INIT_bss CLEAR :> .
_OS_OsApplication_Core0_VAR_ZERO_INIT_START = ADDR(.OS_OsApplication_Core0_VAR_ZERO_INIT);
_OS_OsApplication_Core0_VAR_ZERO_INIT_END = ENDADDR(.OS_OsApplication_Core0_VAR_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_CORE0 ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_CORE0_NEAR ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_CORE0_NEAR_CACHE ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_CORE0_NEAR_CACHE_INIT )
.OS_OsApplication_Core0_VAR_FAST ALIGN(4) :> .
_OS_OsApplication_Core0_VAR_FAST_START = ADDR(.OS_OsApplication_Core0_VAR_FAST);
_OS_OsApplication_Core0_VAR_FAST_END = ENDADDR(.OS_OsApplication_Core0_VAR_FAST) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_CORE0 ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_CORE0_NEAR ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_CORE0_NEAR_CACHE ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_CORE0_NEAR_CACHE_NOINIT )
.OS_OsApplication_Core0_VAR_FAST_NOINIT ALIGN(4) :> .
_OS_OsApplication_Core0_VAR_FAST_NOINIT_START = ADDR(.OS_OsApplication_Core0_VAR_FAST_NOINIT);
_OS_OsApplication_Core0_VAR_FAST_NOINIT_END = ENDADDR(.OS_OsApplication_Core0_VAR_FAST_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_CORE0 ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_CORE0_NEAR ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_CORE0_NEAR_CACHE ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_CORE0_NEAR_CACHE_ZERO_INIT )
.OS_OsApplication_Core0_VAR_FAST_ZERO_INIT ALIGN(4) :> .
.OS_OsApplication_Core0_VAR_FAST_ZERO_INIT_bss CLEAR :> .
_OS_OsApplication_Core0_VAR_FAST_ZERO_INIT_START = ADDR(.OS_OsApplication_Core0_VAR_FAST_ZERO_INIT);
_OS_OsApplication_Core0_VAR_FAST_ZERO_INIT_END = ENDADDR(.OS_OsApplication_Core0_VAR_FAST_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_CORE0 ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_CORE0_FAR ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_CORE0_FAR_NOCACHE ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_CORE0_FAR_NOCACHE_INIT )
.OS_OsApplication_Core0_VAR_NOCACHE ALIGN(4) :> .
_OS_OsApplication_Core0_VAR_NOCACHE_START = ADDR(.OS_OsApplication_Core0_VAR_NOCACHE);
_OS_OsApplication_Core0_VAR_NOCACHE_END = ENDADDR(.OS_OsApplication_Core0_VAR_NOCACHE) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_CORE0 ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_CORE0_FAR ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_CORE0_FAR_NOCACHE ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_CORE0_FAR_NOCACHE_NOINIT )
.OS_OsApplication_Core0_VAR_NOCACHE_NOINIT ALIGN(4) :> .
_OS_OsApplication_Core0_VAR_NOCACHE_NOINIT_START = ADDR(.OS_OsApplication_Core0_VAR_NOCACHE_NOINIT);
_OS_OsApplication_Core0_VAR_NOCACHE_NOINIT_END = ENDADDR(.OS_OsApplication_Core0_VAR_NOCACHE_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_CORE0 ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_CORE0_FAR ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_CORE0_FAR_NOCACHE ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_CORE0_FAR_NOCACHE_ZERO_INIT )
.OS_OsApplication_Core0_VAR_NOCACHE_ZERO_INIT ALIGN(4) :> .
.OS_OsApplication_Core0_VAR_NOCACHE_ZERO_INIT_bss CLEAR :> .
_OS_OsApplication_Core0_VAR_NOCACHE_ZERO_INIT_START = ADDR(.OS_OsApplication_Core0_VAR_NOCACHE_ZERO_INIT);
_OS_OsApplication_Core0_VAR_NOCACHE_ZERO_INIT_END = ENDADDR(.OS_OsApplication_Core0_VAR_NOCACHE_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_CORE0 ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_CORE0_NEAR ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_CORE0_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_CORE0_NEAR_NOCACHE_INIT )
.OS_OsApplication_Core0_VAR_FAST_NOCACHE ALIGN(4) :> .
_OS_OsApplication_Core0_VAR_FAST_NOCACHE_START = ADDR(.OS_OsApplication_Core0_VAR_FAST_NOCACHE);
_OS_OsApplication_Core0_VAR_FAST_NOCACHE_END = ENDADDR(.OS_OsApplication_Core0_VAR_FAST_NOCACHE) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_CORE0 ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_CORE0_NEAR ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_CORE0_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_CORE0_NEAR_NOCACHE_NOINIT )
.OS_OsApplication_Core0_VAR_FAST_NOCACHE_NOINIT ALIGN(4) :> .
_OS_OsApplication_Core0_VAR_FAST_NOCACHE_NOINIT_START = ADDR(.OS_OsApplication_Core0_VAR_FAST_NOCACHE_NOINIT);
_OS_OsApplication_Core0_VAR_FAST_NOCACHE_NOINIT_END = ENDADDR(.OS_OsApplication_Core0_VAR_FAST_NOCACHE_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_CORE0 ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_CORE0_NEAR ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_CORE0_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_CORE0_NEAR_NOCACHE_ZERO_INIT )
.OS_OsApplication_Core0_VAR_FAST_NOCACHE_ZERO_INIT ALIGN(4) :> .
.OS_OsApplication_Core0_VAR_FAST_NOCACHE_ZERO_INIT_bss CLEAR :> .
_OS_OsApplication_Core0_VAR_FAST_NOCACHE_ZERO_INIT_START = ADDR(.OS_OsApplication_Core0_VAR_FAST_NOCACHE_ZERO_INIT);
_OS_OsApplication_Core0_VAR_FAST_NOCACHE_ZERO_INIT_END = ENDADDR(.OS_OsApplication_Core0_VAR_FAST_NOCACHE_ZERO_INIT_bss) - 1;
#endif

#ifdef OS_LINK_VAR_APP_OSAPPLICATION_CORE0
. = ALIGN(4);
_OS_OsApplication_Core0_VAR_ALL_END = .-1;
__OS_OsApplication_Core0_VAR_ALL_END = .-1;
# undef OS_LINK_VAR_APP_OSAPPLICATION_CORE0
#endif

#ifdef OS_LINK_VAR_APP_OSAPPLICATION_CORE0_FAR
# undef OS_LINK_VAR_APP_OSAPPLICATION_CORE0_FAR
#endif

#ifdef OS_LINK_VAR_APP_OSAPPLICATION_CORE0_FAR_CACHE
# undef OS_LINK_VAR_APP_OSAPPLICATION_CORE0_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_APP_OSAPPLICATION_CORE0_FAR_CACHE_INIT
# undef OS_LINK_VAR_APP_OSAPPLICATION_CORE0_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_APP_OSAPPLICATION_CORE0_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_APP_OSAPPLICATION_CORE0_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_APP_OSAPPLICATION_CORE0_FAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_APP_OSAPPLICATION_CORE0_FAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_APP_OSAPPLICATION_CORE0_FAR_NOCACHE
# undef OS_LINK_VAR_APP_OSAPPLICATION_CORE0_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_APP_OSAPPLICATION_CORE0_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_APP_OSAPPLICATION_CORE0_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_APP_OSAPPLICATION_CORE0_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_APP_OSAPPLICATION_CORE0_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_APP_OSAPPLICATION_CORE0_FAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_APP_OSAPPLICATION_CORE0_FAR_NOCACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_APP_OSAPPLICATION_CORE0_NEAR
# undef OS_LINK_VAR_APP_OSAPPLICATION_CORE0_NEAR
#endif

#ifdef OS_LINK_VAR_APP_OSAPPLICATION_CORE0_NEAR_CACHE
# undef OS_LINK_VAR_APP_OSAPPLICATION_CORE0_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_APP_OSAPPLICATION_CORE0_NEAR_CACHE_INIT
# undef OS_LINK_VAR_APP_OSAPPLICATION_CORE0_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_APP_OSAPPLICATION_CORE0_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_APP_OSAPPLICATION_CORE0_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_APP_OSAPPLICATION_CORE0_NEAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_APP_OSAPPLICATION_CORE0_NEAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_APP_OSAPPLICATION_CORE0_NEAR_NOCACHE
# undef OS_LINK_VAR_APP_OSAPPLICATION_CORE0_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_APP_OSAPPLICATION_CORE0_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_APP_OSAPPLICATION_CORE0_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_APP_OSAPPLICATION_CORE0_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_APP_OSAPPLICATION_CORE0_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_APP_OSAPPLICATION_CORE0_NEAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_APP_OSAPPLICATION_CORE0_NEAR_NOCACHE_ZERO_INIT
#endif



#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0
. = ALIGN(4);
_OS_SystemApplication_OsCore_CORE0_VAR_ALL_START = .;
__OS_SystemApplication_OsCore_CORE0_VAR_ALL_START = .;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0 ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR_CACHE ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR_CACHE_INIT )
.OS_SystemApplication_OsCore_CORE0_VAR ALIGN(4) :> .
_OS_SystemApplication_OsCore_CORE0_VAR_START = ADDR(.OS_SystemApplication_OsCore_CORE0_VAR);
_OS_SystemApplication_OsCore_CORE0_VAR_END = ENDADDR(.OS_SystemApplication_OsCore_CORE0_VAR) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0 ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR_CACHE ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR_CACHE_NOINIT )
.OS_SystemApplication_OsCore_CORE0_VAR_NOINIT ALIGN(4) :> .
_OS_SystemApplication_OsCore_CORE0_VAR_NOINIT_START = ADDR(.OS_SystemApplication_OsCore_CORE0_VAR_NOINIT);
_OS_SystemApplication_OsCore_CORE0_VAR_NOINIT_END = ENDADDR(.OS_SystemApplication_OsCore_CORE0_VAR_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0 ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR_CACHE ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR_CACHE_ZERO_INIT )
.OS_SystemApplication_OsCore_CORE0_VAR_ZERO_INIT ALIGN(4) :> .
.OS_SystemApplication_OsCore_CORE0_VAR_ZERO_INIT_bss CLEAR :> .
_OS_SystemApplication_OsCore_CORE0_VAR_ZERO_INIT_START = ADDR(.OS_SystemApplication_OsCore_CORE0_VAR_ZERO_INIT);
_OS_SystemApplication_OsCore_CORE0_VAR_ZERO_INIT_END = ENDADDR(.OS_SystemApplication_OsCore_CORE0_VAR_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0 ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR_CACHE ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR_CACHE_INIT )
.OS_SystemApplication_OsCore_CORE0_VAR_FAST ALIGN(4) :> .
_OS_SystemApplication_OsCore_CORE0_VAR_FAST_START = ADDR(.OS_SystemApplication_OsCore_CORE0_VAR_FAST);
_OS_SystemApplication_OsCore_CORE0_VAR_FAST_END = ENDADDR(.OS_SystemApplication_OsCore_CORE0_VAR_FAST) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0 ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR_CACHE ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR_CACHE_NOINIT )
.OS_SystemApplication_OsCore_CORE0_VAR_FAST_NOINIT ALIGN(4) :> .
_OS_SystemApplication_OsCore_CORE0_VAR_FAST_NOINIT_START = ADDR(.OS_SystemApplication_OsCore_CORE0_VAR_FAST_NOINIT);
_OS_SystemApplication_OsCore_CORE0_VAR_FAST_NOINIT_END = ENDADDR(.OS_SystemApplication_OsCore_CORE0_VAR_FAST_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0 ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR_CACHE ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR_CACHE_ZERO_INIT )
.OS_SystemApplication_OsCore_CORE0_VAR_FAST_ZERO_INIT ALIGN(4) :> .
.OS_SystemApplication_OsCore_CORE0_VAR_FAST_ZERO_INIT_bss CLEAR :> .
_OS_SystemApplication_OsCore_CORE0_VAR_FAST_ZERO_INIT_START = ADDR(.OS_SystemApplication_OsCore_CORE0_VAR_FAST_ZERO_INIT);
_OS_SystemApplication_OsCore_CORE0_VAR_FAST_ZERO_INIT_END = ENDADDR(.OS_SystemApplication_OsCore_CORE0_VAR_FAST_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0 ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR_NOCACHE ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR_NOCACHE_INIT )
.OS_SystemApplication_OsCore_CORE0_VAR_NOCACHE ALIGN(4) :> .
_OS_SystemApplication_OsCore_CORE0_VAR_NOCACHE_START = ADDR(.OS_SystemApplication_OsCore_CORE0_VAR_NOCACHE);
_OS_SystemApplication_OsCore_CORE0_VAR_NOCACHE_END = ENDADDR(.OS_SystemApplication_OsCore_CORE0_VAR_NOCACHE) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0 ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR_NOCACHE ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR_NOCACHE_NOINIT )
.OS_SystemApplication_OsCore_CORE0_VAR_NOCACHE_NOINIT ALIGN(4) :> .
_OS_SystemApplication_OsCore_CORE0_VAR_NOCACHE_NOINIT_START = ADDR(.OS_SystemApplication_OsCore_CORE0_VAR_NOCACHE_NOINIT);
_OS_SystemApplication_OsCore_CORE0_VAR_NOCACHE_NOINIT_END = ENDADDR(.OS_SystemApplication_OsCore_CORE0_VAR_NOCACHE_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0 ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR_NOCACHE ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR_NOCACHE_ZERO_INIT )
.OS_SystemApplication_OsCore_CORE0_VAR_NOCACHE_ZERO_INIT ALIGN(4) :> .
.OS_SystemApplication_OsCore_CORE0_VAR_NOCACHE_ZERO_INIT_bss CLEAR :> .
_OS_SystemApplication_OsCore_CORE0_VAR_NOCACHE_ZERO_INIT_START = ADDR(.OS_SystemApplication_OsCore_CORE0_VAR_NOCACHE_ZERO_INIT);
_OS_SystemApplication_OsCore_CORE0_VAR_NOCACHE_ZERO_INIT_END = ENDADDR(.OS_SystemApplication_OsCore_CORE0_VAR_NOCACHE_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0 ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR_NOCACHE_INIT )
.OS_SystemApplication_OsCore_CORE0_VAR_FAST_NOCACHE ALIGN(4) :> .
_OS_SystemApplication_OsCore_CORE0_VAR_FAST_NOCACHE_START = ADDR(.OS_SystemApplication_OsCore_CORE0_VAR_FAST_NOCACHE);
_OS_SystemApplication_OsCore_CORE0_VAR_FAST_NOCACHE_END = ENDADDR(.OS_SystemApplication_OsCore_CORE0_VAR_FAST_NOCACHE) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0 ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR_NOCACHE_NOINIT )
.OS_SystemApplication_OsCore_CORE0_VAR_FAST_NOCACHE_NOINIT ALIGN(4) :> .
_OS_SystemApplication_OsCore_CORE0_VAR_FAST_NOCACHE_NOINIT_START = ADDR(.OS_SystemApplication_OsCore_CORE0_VAR_FAST_NOCACHE_NOINIT);
_OS_SystemApplication_OsCore_CORE0_VAR_FAST_NOCACHE_NOINIT_END = ENDADDR(.OS_SystemApplication_OsCore_CORE0_VAR_FAST_NOCACHE_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0 ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR_NOCACHE_ZERO_INIT )
.OS_SystemApplication_OsCore_CORE0_VAR_FAST_NOCACHE_ZERO_INIT ALIGN(4) :> .
.OS_SystemApplication_OsCore_CORE0_VAR_FAST_NOCACHE_ZERO_INIT_bss CLEAR :> .
_OS_SystemApplication_OsCore_CORE0_VAR_FAST_NOCACHE_ZERO_INIT_START = ADDR(.OS_SystemApplication_OsCore_CORE0_VAR_FAST_NOCACHE_ZERO_INIT);
_OS_SystemApplication_OsCore_CORE0_VAR_FAST_NOCACHE_ZERO_INIT_END = ENDADDR(.OS_SystemApplication_OsCore_CORE0_VAR_FAST_NOCACHE_ZERO_INIT_bss) - 1;
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0
. = ALIGN(4);
_OS_SystemApplication_OsCore_CORE0_VAR_ALL_END = .-1;
__OS_SystemApplication_OsCore_CORE0_VAR_ALL_END = .-1;
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR_CACHE
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR_CACHE_INIT
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR_NOCACHE
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR_NOCACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR_CACHE
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR_CACHE_INIT
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR_NOCACHE
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR_NOCACHE_ZERO_INIT
#endif



#ifdef OS_LINK_VAR_TASK_BACKGROUNDTASK
. = ALIGN(4);
_OS_BackgroundTask_VAR_ALL_START = .;
__OS_BackgroundTask_VAR_ALL_START = .;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_BACKGROUNDTASK ) || defined ( OS_LINK_VAR_TASK_BACKGROUNDTASK_FAR ) || defined ( OS_LINK_VAR_TASK_BACKGROUNDTASK_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_BACKGROUNDTASK_FAR_CACHE_INIT )
.OS_BackgroundTask_VAR ALIGN(4) :> .
_OS_BackgroundTask_VAR_START = ADDR(.OS_BackgroundTask_VAR);
_OS_BackgroundTask_VAR_END = ENDADDR(.OS_BackgroundTask_VAR) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_BACKGROUNDTASK ) || defined ( OS_LINK_VAR_TASK_BACKGROUNDTASK_FAR ) || defined ( OS_LINK_VAR_TASK_BACKGROUNDTASK_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_BACKGROUNDTASK_FAR_CACHE_NOINIT )
.OS_BackgroundTask_VAR_NOINIT ALIGN(4) :> .
_OS_BackgroundTask_VAR_NOINIT_START = ADDR(.OS_BackgroundTask_VAR_NOINIT);
_OS_BackgroundTask_VAR_NOINIT_END = ENDADDR(.OS_BackgroundTask_VAR_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_BACKGROUNDTASK ) || defined ( OS_LINK_VAR_TASK_BACKGROUNDTASK_FAR ) || defined ( OS_LINK_VAR_TASK_BACKGROUNDTASK_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_BACKGROUNDTASK_FAR_CACHE_ZERO_INIT )
.OS_BackgroundTask_VAR_ZERO_INIT ALIGN(4) :> .
.OS_BackgroundTask_VAR_ZERO_INIT_bss CLEAR :> .
_OS_BackgroundTask_VAR_ZERO_INIT_START = ADDR(.OS_BackgroundTask_VAR_ZERO_INIT);
_OS_BackgroundTask_VAR_ZERO_INIT_END = ENDADDR(.OS_BackgroundTask_VAR_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_BACKGROUNDTASK ) || defined ( OS_LINK_VAR_TASK_BACKGROUNDTASK_NEAR ) || defined ( OS_LINK_VAR_TASK_BACKGROUNDTASK_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_BACKGROUNDTASK_NEAR_CACHE_INIT )
.OS_BackgroundTask_VAR_FAST ALIGN(4) :> .
_OS_BackgroundTask_VAR_FAST_START = ADDR(.OS_BackgroundTask_VAR_FAST);
_OS_BackgroundTask_VAR_FAST_END = ENDADDR(.OS_BackgroundTask_VAR_FAST) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_BACKGROUNDTASK ) || defined ( OS_LINK_VAR_TASK_BACKGROUNDTASK_NEAR ) || defined ( OS_LINK_VAR_TASK_BACKGROUNDTASK_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_BACKGROUNDTASK_NEAR_CACHE_NOINIT )
.OS_BackgroundTask_VAR_FAST_NOINIT ALIGN(4) :> .
_OS_BackgroundTask_VAR_FAST_NOINIT_START = ADDR(.OS_BackgroundTask_VAR_FAST_NOINIT);
_OS_BackgroundTask_VAR_FAST_NOINIT_END = ENDADDR(.OS_BackgroundTask_VAR_FAST_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_BACKGROUNDTASK ) || defined ( OS_LINK_VAR_TASK_BACKGROUNDTASK_NEAR ) || defined ( OS_LINK_VAR_TASK_BACKGROUNDTASK_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_BACKGROUNDTASK_NEAR_CACHE_ZERO_INIT )
.OS_BackgroundTask_VAR_FAST_ZERO_INIT ALIGN(4) :> .
.OS_BackgroundTask_VAR_FAST_ZERO_INIT_bss CLEAR :> .
_OS_BackgroundTask_VAR_FAST_ZERO_INIT_START = ADDR(.OS_BackgroundTask_VAR_FAST_ZERO_INIT);
_OS_BackgroundTask_VAR_FAST_ZERO_INIT_END = ENDADDR(.OS_BackgroundTask_VAR_FAST_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_BACKGROUNDTASK ) || defined ( OS_LINK_VAR_TASK_BACKGROUNDTASK_FAR ) || defined ( OS_LINK_VAR_TASK_BACKGROUNDTASK_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_BACKGROUNDTASK_FAR_NOCACHE_INIT )
.OS_BackgroundTask_VAR_NOCACHE ALIGN(4) :> .
_OS_BackgroundTask_VAR_NOCACHE_START = ADDR(.OS_BackgroundTask_VAR_NOCACHE);
_OS_BackgroundTask_VAR_NOCACHE_END = ENDADDR(.OS_BackgroundTask_VAR_NOCACHE) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_BACKGROUNDTASK ) || defined ( OS_LINK_VAR_TASK_BACKGROUNDTASK_FAR ) || defined ( OS_LINK_VAR_TASK_BACKGROUNDTASK_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_BACKGROUNDTASK_FAR_NOCACHE_NOINIT )
.OS_BackgroundTask_VAR_NOCACHE_NOINIT ALIGN(4) :> .
_OS_BackgroundTask_VAR_NOCACHE_NOINIT_START = ADDR(.OS_BackgroundTask_VAR_NOCACHE_NOINIT);
_OS_BackgroundTask_VAR_NOCACHE_NOINIT_END = ENDADDR(.OS_BackgroundTask_VAR_NOCACHE_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_BACKGROUNDTASK ) || defined ( OS_LINK_VAR_TASK_BACKGROUNDTASK_FAR ) || defined ( OS_LINK_VAR_TASK_BACKGROUNDTASK_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_BACKGROUNDTASK_FAR_NOCACHE_ZERO_INIT )
.OS_BackgroundTask_VAR_NOCACHE_ZERO_INIT ALIGN(4) :> .
.OS_BackgroundTask_VAR_NOCACHE_ZERO_INIT_bss CLEAR :> .
_OS_BackgroundTask_VAR_NOCACHE_ZERO_INIT_START = ADDR(.OS_BackgroundTask_VAR_NOCACHE_ZERO_INIT);
_OS_BackgroundTask_VAR_NOCACHE_ZERO_INIT_END = ENDADDR(.OS_BackgroundTask_VAR_NOCACHE_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_BACKGROUNDTASK ) || defined ( OS_LINK_VAR_TASK_BACKGROUNDTASK_NEAR ) || defined ( OS_LINK_VAR_TASK_BACKGROUNDTASK_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_BACKGROUNDTASK_NEAR_NOCACHE_INIT )
.OS_BackgroundTask_VAR_FAST_NOCACHE ALIGN(4) :> .
_OS_BackgroundTask_VAR_FAST_NOCACHE_START = ADDR(.OS_BackgroundTask_VAR_FAST_NOCACHE);
_OS_BackgroundTask_VAR_FAST_NOCACHE_END = ENDADDR(.OS_BackgroundTask_VAR_FAST_NOCACHE) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_BACKGROUNDTASK ) || defined ( OS_LINK_VAR_TASK_BACKGROUNDTASK_NEAR ) || defined ( OS_LINK_VAR_TASK_BACKGROUNDTASK_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_BACKGROUNDTASK_NEAR_NOCACHE_NOINIT )
.OS_BackgroundTask_VAR_FAST_NOCACHE_NOINIT ALIGN(4) :> .
_OS_BackgroundTask_VAR_FAST_NOCACHE_NOINIT_START = ADDR(.OS_BackgroundTask_VAR_FAST_NOCACHE_NOINIT);
_OS_BackgroundTask_VAR_FAST_NOCACHE_NOINIT_END = ENDADDR(.OS_BackgroundTask_VAR_FAST_NOCACHE_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_BACKGROUNDTASK ) || defined ( OS_LINK_VAR_TASK_BACKGROUNDTASK_NEAR ) || defined ( OS_LINK_VAR_TASK_BACKGROUNDTASK_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_BACKGROUNDTASK_NEAR_NOCACHE_ZERO_INIT )
.OS_BackgroundTask_VAR_FAST_NOCACHE_ZERO_INIT ALIGN(4) :> .
.OS_BackgroundTask_VAR_FAST_NOCACHE_ZERO_INIT_bss CLEAR :> .
_OS_BackgroundTask_VAR_FAST_NOCACHE_ZERO_INIT_START = ADDR(.OS_BackgroundTask_VAR_FAST_NOCACHE_ZERO_INIT);
_OS_BackgroundTask_VAR_FAST_NOCACHE_ZERO_INIT_END = ENDADDR(.OS_BackgroundTask_VAR_FAST_NOCACHE_ZERO_INIT_bss) - 1;
#endif

#ifdef OS_LINK_VAR_TASK_BACKGROUNDTASK
. = ALIGN(4);
_OS_BackgroundTask_VAR_ALL_END = .-1;
__OS_BackgroundTask_VAR_ALL_END = .-1;
# undef OS_LINK_VAR_TASK_BACKGROUNDTASK
#endif

#ifdef OS_LINK_VAR_TASK_BACKGROUNDTASK_FAR
# undef OS_LINK_VAR_TASK_BACKGROUNDTASK_FAR
#endif

#ifdef OS_LINK_VAR_TASK_BACKGROUNDTASK_FAR_CACHE
# undef OS_LINK_VAR_TASK_BACKGROUNDTASK_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_TASK_BACKGROUNDTASK_FAR_CACHE_INIT
# undef OS_LINK_VAR_TASK_BACKGROUNDTASK_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_BACKGROUNDTASK_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_TASK_BACKGROUNDTASK_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_BACKGROUNDTASK_FAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_BACKGROUNDTASK_FAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_BACKGROUNDTASK_FAR_NOCACHE
# undef OS_LINK_VAR_TASK_BACKGROUNDTASK_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_TASK_BACKGROUNDTASK_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_TASK_BACKGROUNDTASK_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_BACKGROUNDTASK_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_TASK_BACKGROUNDTASK_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_BACKGROUNDTASK_FAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_BACKGROUNDTASK_FAR_NOCACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_BACKGROUNDTASK_NEAR
# undef OS_LINK_VAR_TASK_BACKGROUNDTASK_NEAR
#endif

#ifdef OS_LINK_VAR_TASK_BACKGROUNDTASK_NEAR_CACHE
# undef OS_LINK_VAR_TASK_BACKGROUNDTASK_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_TASK_BACKGROUNDTASK_NEAR_CACHE_INIT
# undef OS_LINK_VAR_TASK_BACKGROUNDTASK_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_BACKGROUNDTASK_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_TASK_BACKGROUNDTASK_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_BACKGROUNDTASK_NEAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_BACKGROUNDTASK_NEAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_BACKGROUNDTASK_NEAR_NOCACHE
# undef OS_LINK_VAR_TASK_BACKGROUNDTASK_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_TASK_BACKGROUNDTASK_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_TASK_BACKGROUNDTASK_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_BACKGROUNDTASK_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_TASK_BACKGROUNDTASK_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_BACKGROUNDTASK_NEAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_BACKGROUNDTASK_NEAR_NOCACHE_ZERO_INIT
#endif



#ifdef OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK
. = ALIGN(4);
_OS_Default_BSW_Async_Task_VAR_ALL_START = .;
__OS_Default_BSW_Async_Task_VAR_ALL_START = .;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_FAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_FAR_CACHE_INIT )
.OS_Default_BSW_Async_Task_VAR ALIGN(4) :> .
_OS_Default_BSW_Async_Task_VAR_START = ADDR(.OS_Default_BSW_Async_Task_VAR);
_OS_Default_BSW_Async_Task_VAR_END = ENDADDR(.OS_Default_BSW_Async_Task_VAR) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_FAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_FAR_CACHE_NOINIT )
.OS_Default_BSW_Async_Task_VAR_NOINIT ALIGN(4) :> .
_OS_Default_BSW_Async_Task_VAR_NOINIT_START = ADDR(.OS_Default_BSW_Async_Task_VAR_NOINIT);
_OS_Default_BSW_Async_Task_VAR_NOINIT_END = ENDADDR(.OS_Default_BSW_Async_Task_VAR_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_FAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_FAR_CACHE_ZERO_INIT )
.OS_Default_BSW_Async_Task_VAR_ZERO_INIT ALIGN(4) :> .
.OS_Default_BSW_Async_Task_VAR_ZERO_INIT_bss CLEAR :> .
_OS_Default_BSW_Async_Task_VAR_ZERO_INIT_START = ADDR(.OS_Default_BSW_Async_Task_VAR_ZERO_INIT);
_OS_Default_BSW_Async_Task_VAR_ZERO_INIT_END = ENDADDR(.OS_Default_BSW_Async_Task_VAR_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_NEAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_NEAR_CACHE_INIT )
.OS_Default_BSW_Async_Task_VAR_FAST ALIGN(4) :> .
_OS_Default_BSW_Async_Task_VAR_FAST_START = ADDR(.OS_Default_BSW_Async_Task_VAR_FAST);
_OS_Default_BSW_Async_Task_VAR_FAST_END = ENDADDR(.OS_Default_BSW_Async_Task_VAR_FAST) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_NEAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_NEAR_CACHE_NOINIT )
.OS_Default_BSW_Async_Task_VAR_FAST_NOINIT ALIGN(4) :> .
_OS_Default_BSW_Async_Task_VAR_FAST_NOINIT_START = ADDR(.OS_Default_BSW_Async_Task_VAR_FAST_NOINIT);
_OS_Default_BSW_Async_Task_VAR_FAST_NOINIT_END = ENDADDR(.OS_Default_BSW_Async_Task_VAR_FAST_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_NEAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_NEAR_CACHE_ZERO_INIT )
.OS_Default_BSW_Async_Task_VAR_FAST_ZERO_INIT ALIGN(4) :> .
.OS_Default_BSW_Async_Task_VAR_FAST_ZERO_INIT_bss CLEAR :> .
_OS_Default_BSW_Async_Task_VAR_FAST_ZERO_INIT_START = ADDR(.OS_Default_BSW_Async_Task_VAR_FAST_ZERO_INIT);
_OS_Default_BSW_Async_Task_VAR_FAST_ZERO_INIT_END = ENDADDR(.OS_Default_BSW_Async_Task_VAR_FAST_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_FAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_FAR_NOCACHE_INIT )
.OS_Default_BSW_Async_Task_VAR_NOCACHE ALIGN(4) :> .
_OS_Default_BSW_Async_Task_VAR_NOCACHE_START = ADDR(.OS_Default_BSW_Async_Task_VAR_NOCACHE);
_OS_Default_BSW_Async_Task_VAR_NOCACHE_END = ENDADDR(.OS_Default_BSW_Async_Task_VAR_NOCACHE) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_FAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_FAR_NOCACHE_NOINIT )
.OS_Default_BSW_Async_Task_VAR_NOCACHE_NOINIT ALIGN(4) :> .
_OS_Default_BSW_Async_Task_VAR_NOCACHE_NOINIT_START = ADDR(.OS_Default_BSW_Async_Task_VAR_NOCACHE_NOINIT);
_OS_Default_BSW_Async_Task_VAR_NOCACHE_NOINIT_END = ENDADDR(.OS_Default_BSW_Async_Task_VAR_NOCACHE_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_FAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_FAR_NOCACHE_ZERO_INIT )
.OS_Default_BSW_Async_Task_VAR_NOCACHE_ZERO_INIT ALIGN(4) :> .
.OS_Default_BSW_Async_Task_VAR_NOCACHE_ZERO_INIT_bss CLEAR :> .
_OS_Default_BSW_Async_Task_VAR_NOCACHE_ZERO_INIT_START = ADDR(.OS_Default_BSW_Async_Task_VAR_NOCACHE_ZERO_INIT);
_OS_Default_BSW_Async_Task_VAR_NOCACHE_ZERO_INIT_END = ENDADDR(.OS_Default_BSW_Async_Task_VAR_NOCACHE_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_NEAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_NEAR_NOCACHE_INIT )
.OS_Default_BSW_Async_Task_VAR_FAST_NOCACHE ALIGN(4) :> .
_OS_Default_BSW_Async_Task_VAR_FAST_NOCACHE_START = ADDR(.OS_Default_BSW_Async_Task_VAR_FAST_NOCACHE);
_OS_Default_BSW_Async_Task_VAR_FAST_NOCACHE_END = ENDADDR(.OS_Default_BSW_Async_Task_VAR_FAST_NOCACHE) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_NEAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_NEAR_NOCACHE_NOINIT )
.OS_Default_BSW_Async_Task_VAR_FAST_NOCACHE_NOINIT ALIGN(4) :> .
_OS_Default_BSW_Async_Task_VAR_FAST_NOCACHE_NOINIT_START = ADDR(.OS_Default_BSW_Async_Task_VAR_FAST_NOCACHE_NOINIT);
_OS_Default_BSW_Async_Task_VAR_FAST_NOCACHE_NOINIT_END = ENDADDR(.OS_Default_BSW_Async_Task_VAR_FAST_NOCACHE_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_NEAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_NEAR_NOCACHE_ZERO_INIT )
.OS_Default_BSW_Async_Task_VAR_FAST_NOCACHE_ZERO_INIT ALIGN(4) :> .
.OS_Default_BSW_Async_Task_VAR_FAST_NOCACHE_ZERO_INIT_bss CLEAR :> .
_OS_Default_BSW_Async_Task_VAR_FAST_NOCACHE_ZERO_INIT_START = ADDR(.OS_Default_BSW_Async_Task_VAR_FAST_NOCACHE_ZERO_INIT);
_OS_Default_BSW_Async_Task_VAR_FAST_NOCACHE_ZERO_INIT_END = ENDADDR(.OS_Default_BSW_Async_Task_VAR_FAST_NOCACHE_ZERO_INIT_bss) - 1;
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK
. = ALIGN(4);
_OS_Default_BSW_Async_Task_VAR_ALL_END = .-1;
__OS_Default_BSW_Async_Task_VAR_ALL_END = .-1;
# undef OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_FAR
# undef OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_FAR
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_FAR_CACHE
# undef OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_FAR_CACHE_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_FAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_FAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_FAR_NOCACHE
# undef OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_FAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_FAR_NOCACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_NEAR
# undef OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_NEAR
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_NEAR_CACHE
# undef OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_NEAR_CACHE_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_NEAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_NEAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_NEAR_NOCACHE
# undef OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_NEAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK_NEAR_NOCACHE_ZERO_INIT
#endif



#ifdef OS_LINK_VAR_TASK_INITTASK
. = ALIGN(4);
_OS_InitTask_VAR_ALL_START = .;
__OS_InitTask_VAR_ALL_START = .;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_INITTASK ) || defined ( OS_LINK_VAR_TASK_INITTASK_FAR ) || defined ( OS_LINK_VAR_TASK_INITTASK_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_INITTASK_FAR_CACHE_INIT )
.OS_InitTask_VAR ALIGN(4) :> .
_OS_InitTask_VAR_START = ADDR(.OS_InitTask_VAR);
_OS_InitTask_VAR_END = ENDADDR(.OS_InitTask_VAR) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_INITTASK ) || defined ( OS_LINK_VAR_TASK_INITTASK_FAR ) || defined ( OS_LINK_VAR_TASK_INITTASK_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_INITTASK_FAR_CACHE_NOINIT )
.OS_InitTask_VAR_NOINIT ALIGN(4) :> .
_OS_InitTask_VAR_NOINIT_START = ADDR(.OS_InitTask_VAR_NOINIT);
_OS_InitTask_VAR_NOINIT_END = ENDADDR(.OS_InitTask_VAR_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_INITTASK ) || defined ( OS_LINK_VAR_TASK_INITTASK_FAR ) || defined ( OS_LINK_VAR_TASK_INITTASK_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_INITTASK_FAR_CACHE_ZERO_INIT )
.OS_InitTask_VAR_ZERO_INIT ALIGN(4) :> .
.OS_InitTask_VAR_ZERO_INIT_bss CLEAR :> .
_OS_InitTask_VAR_ZERO_INIT_START = ADDR(.OS_InitTask_VAR_ZERO_INIT);
_OS_InitTask_VAR_ZERO_INIT_END = ENDADDR(.OS_InitTask_VAR_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_INITTASK ) || defined ( OS_LINK_VAR_TASK_INITTASK_NEAR ) || defined ( OS_LINK_VAR_TASK_INITTASK_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_INITTASK_NEAR_CACHE_INIT )
.OS_InitTask_VAR_FAST ALIGN(4) :> .
_OS_InitTask_VAR_FAST_START = ADDR(.OS_InitTask_VAR_FAST);
_OS_InitTask_VAR_FAST_END = ENDADDR(.OS_InitTask_VAR_FAST) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_INITTASK ) || defined ( OS_LINK_VAR_TASK_INITTASK_NEAR ) || defined ( OS_LINK_VAR_TASK_INITTASK_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_INITTASK_NEAR_CACHE_NOINIT )
.OS_InitTask_VAR_FAST_NOINIT ALIGN(4) :> .
_OS_InitTask_VAR_FAST_NOINIT_START = ADDR(.OS_InitTask_VAR_FAST_NOINIT);
_OS_InitTask_VAR_FAST_NOINIT_END = ENDADDR(.OS_InitTask_VAR_FAST_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_INITTASK ) || defined ( OS_LINK_VAR_TASK_INITTASK_NEAR ) || defined ( OS_LINK_VAR_TASK_INITTASK_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_INITTASK_NEAR_CACHE_ZERO_INIT )
.OS_InitTask_VAR_FAST_ZERO_INIT ALIGN(4) :> .
.OS_InitTask_VAR_FAST_ZERO_INIT_bss CLEAR :> .
_OS_InitTask_VAR_FAST_ZERO_INIT_START = ADDR(.OS_InitTask_VAR_FAST_ZERO_INIT);
_OS_InitTask_VAR_FAST_ZERO_INIT_END = ENDADDR(.OS_InitTask_VAR_FAST_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_INITTASK ) || defined ( OS_LINK_VAR_TASK_INITTASK_FAR ) || defined ( OS_LINK_VAR_TASK_INITTASK_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_INITTASK_FAR_NOCACHE_INIT )
.OS_InitTask_VAR_NOCACHE ALIGN(4) :> .
_OS_InitTask_VAR_NOCACHE_START = ADDR(.OS_InitTask_VAR_NOCACHE);
_OS_InitTask_VAR_NOCACHE_END = ENDADDR(.OS_InitTask_VAR_NOCACHE) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_INITTASK ) || defined ( OS_LINK_VAR_TASK_INITTASK_FAR ) || defined ( OS_LINK_VAR_TASK_INITTASK_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_INITTASK_FAR_NOCACHE_NOINIT )
.OS_InitTask_VAR_NOCACHE_NOINIT ALIGN(4) :> .
_OS_InitTask_VAR_NOCACHE_NOINIT_START = ADDR(.OS_InitTask_VAR_NOCACHE_NOINIT);
_OS_InitTask_VAR_NOCACHE_NOINIT_END = ENDADDR(.OS_InitTask_VAR_NOCACHE_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_INITTASK ) || defined ( OS_LINK_VAR_TASK_INITTASK_FAR ) || defined ( OS_LINK_VAR_TASK_INITTASK_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_INITTASK_FAR_NOCACHE_ZERO_INIT )
.OS_InitTask_VAR_NOCACHE_ZERO_INIT ALIGN(4) :> .
.OS_InitTask_VAR_NOCACHE_ZERO_INIT_bss CLEAR :> .
_OS_InitTask_VAR_NOCACHE_ZERO_INIT_START = ADDR(.OS_InitTask_VAR_NOCACHE_ZERO_INIT);
_OS_InitTask_VAR_NOCACHE_ZERO_INIT_END = ENDADDR(.OS_InitTask_VAR_NOCACHE_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_INITTASK ) || defined ( OS_LINK_VAR_TASK_INITTASK_NEAR ) || defined ( OS_LINK_VAR_TASK_INITTASK_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_INITTASK_NEAR_NOCACHE_INIT )
.OS_InitTask_VAR_FAST_NOCACHE ALIGN(4) :> .
_OS_InitTask_VAR_FAST_NOCACHE_START = ADDR(.OS_InitTask_VAR_FAST_NOCACHE);
_OS_InitTask_VAR_FAST_NOCACHE_END = ENDADDR(.OS_InitTask_VAR_FAST_NOCACHE) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_INITTASK ) || defined ( OS_LINK_VAR_TASK_INITTASK_NEAR ) || defined ( OS_LINK_VAR_TASK_INITTASK_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_INITTASK_NEAR_NOCACHE_NOINIT )
.OS_InitTask_VAR_FAST_NOCACHE_NOINIT ALIGN(4) :> .
_OS_InitTask_VAR_FAST_NOCACHE_NOINIT_START = ADDR(.OS_InitTask_VAR_FAST_NOCACHE_NOINIT);
_OS_InitTask_VAR_FAST_NOCACHE_NOINIT_END = ENDADDR(.OS_InitTask_VAR_FAST_NOCACHE_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_INITTASK ) || defined ( OS_LINK_VAR_TASK_INITTASK_NEAR ) || defined ( OS_LINK_VAR_TASK_INITTASK_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_INITTASK_NEAR_NOCACHE_ZERO_INIT )
.OS_InitTask_VAR_FAST_NOCACHE_ZERO_INIT ALIGN(4) :> .
.OS_InitTask_VAR_FAST_NOCACHE_ZERO_INIT_bss CLEAR :> .
_OS_InitTask_VAR_FAST_NOCACHE_ZERO_INIT_START = ADDR(.OS_InitTask_VAR_FAST_NOCACHE_ZERO_INIT);
_OS_InitTask_VAR_FAST_NOCACHE_ZERO_INIT_END = ENDADDR(.OS_InitTask_VAR_FAST_NOCACHE_ZERO_INIT_bss) - 1;
#endif

#ifdef OS_LINK_VAR_TASK_INITTASK
. = ALIGN(4);
_OS_InitTask_VAR_ALL_END = .-1;
__OS_InitTask_VAR_ALL_END = .-1;
# undef OS_LINK_VAR_TASK_INITTASK
#endif

#ifdef OS_LINK_VAR_TASK_INITTASK_FAR
# undef OS_LINK_VAR_TASK_INITTASK_FAR
#endif

#ifdef OS_LINK_VAR_TASK_INITTASK_FAR_CACHE
# undef OS_LINK_VAR_TASK_INITTASK_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_TASK_INITTASK_FAR_CACHE_INIT
# undef OS_LINK_VAR_TASK_INITTASK_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_INITTASK_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_TASK_INITTASK_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_INITTASK_FAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_INITTASK_FAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_INITTASK_FAR_NOCACHE
# undef OS_LINK_VAR_TASK_INITTASK_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_TASK_INITTASK_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_TASK_INITTASK_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_INITTASK_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_TASK_INITTASK_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_INITTASK_FAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_INITTASK_FAR_NOCACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_INITTASK_NEAR
# undef OS_LINK_VAR_TASK_INITTASK_NEAR
#endif

#ifdef OS_LINK_VAR_TASK_INITTASK_NEAR_CACHE
# undef OS_LINK_VAR_TASK_INITTASK_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_TASK_INITTASK_NEAR_CACHE_INIT
# undef OS_LINK_VAR_TASK_INITTASK_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_INITTASK_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_TASK_INITTASK_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_INITTASK_NEAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_INITTASK_NEAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_INITTASK_NEAR_NOCACHE
# undef OS_LINK_VAR_TASK_INITTASK_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_TASK_INITTASK_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_TASK_INITTASK_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_INITTASK_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_TASK_INITTASK_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_INITTASK_NEAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_INITTASK_NEAR_NOCACHE_ZERO_INIT
#endif



#ifdef OS_LINK_VAR_TASK_SHUTDOWNTASK
. = ALIGN(4);
_OS_ShutdownTask_VAR_ALL_START = .;
__OS_ShutdownTask_VAR_ALL_START = .;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_SHUTDOWNTASK ) || defined ( OS_LINK_VAR_TASK_SHUTDOWNTASK_FAR ) || defined ( OS_LINK_VAR_TASK_SHUTDOWNTASK_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_SHUTDOWNTASK_FAR_CACHE_INIT )
.OS_ShutdownTask_VAR ALIGN(4) :> .
_OS_ShutdownTask_VAR_START = ADDR(.OS_ShutdownTask_VAR);
_OS_ShutdownTask_VAR_END = ENDADDR(.OS_ShutdownTask_VAR) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_SHUTDOWNTASK ) || defined ( OS_LINK_VAR_TASK_SHUTDOWNTASK_FAR ) || defined ( OS_LINK_VAR_TASK_SHUTDOWNTASK_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_SHUTDOWNTASK_FAR_CACHE_NOINIT )
.OS_ShutdownTask_VAR_NOINIT ALIGN(4) :> .
_OS_ShutdownTask_VAR_NOINIT_START = ADDR(.OS_ShutdownTask_VAR_NOINIT);
_OS_ShutdownTask_VAR_NOINIT_END = ENDADDR(.OS_ShutdownTask_VAR_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_SHUTDOWNTASK ) || defined ( OS_LINK_VAR_TASK_SHUTDOWNTASK_FAR ) || defined ( OS_LINK_VAR_TASK_SHUTDOWNTASK_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_SHUTDOWNTASK_FAR_CACHE_ZERO_INIT )
.OS_ShutdownTask_VAR_ZERO_INIT ALIGN(4) :> .
.OS_ShutdownTask_VAR_ZERO_INIT_bss CLEAR :> .
_OS_ShutdownTask_VAR_ZERO_INIT_START = ADDR(.OS_ShutdownTask_VAR_ZERO_INIT);
_OS_ShutdownTask_VAR_ZERO_INIT_END = ENDADDR(.OS_ShutdownTask_VAR_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_SHUTDOWNTASK ) || defined ( OS_LINK_VAR_TASK_SHUTDOWNTASK_NEAR ) || defined ( OS_LINK_VAR_TASK_SHUTDOWNTASK_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_SHUTDOWNTASK_NEAR_CACHE_INIT )
.OS_ShutdownTask_VAR_FAST ALIGN(4) :> .
_OS_ShutdownTask_VAR_FAST_START = ADDR(.OS_ShutdownTask_VAR_FAST);
_OS_ShutdownTask_VAR_FAST_END = ENDADDR(.OS_ShutdownTask_VAR_FAST) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_SHUTDOWNTASK ) || defined ( OS_LINK_VAR_TASK_SHUTDOWNTASK_NEAR ) || defined ( OS_LINK_VAR_TASK_SHUTDOWNTASK_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_SHUTDOWNTASK_NEAR_CACHE_NOINIT )
.OS_ShutdownTask_VAR_FAST_NOINIT ALIGN(4) :> .
_OS_ShutdownTask_VAR_FAST_NOINIT_START = ADDR(.OS_ShutdownTask_VAR_FAST_NOINIT);
_OS_ShutdownTask_VAR_FAST_NOINIT_END = ENDADDR(.OS_ShutdownTask_VAR_FAST_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_SHUTDOWNTASK ) || defined ( OS_LINK_VAR_TASK_SHUTDOWNTASK_NEAR ) || defined ( OS_LINK_VAR_TASK_SHUTDOWNTASK_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_SHUTDOWNTASK_NEAR_CACHE_ZERO_INIT )
.OS_ShutdownTask_VAR_FAST_ZERO_INIT ALIGN(4) :> .
.OS_ShutdownTask_VAR_FAST_ZERO_INIT_bss CLEAR :> .
_OS_ShutdownTask_VAR_FAST_ZERO_INIT_START = ADDR(.OS_ShutdownTask_VAR_FAST_ZERO_INIT);
_OS_ShutdownTask_VAR_FAST_ZERO_INIT_END = ENDADDR(.OS_ShutdownTask_VAR_FAST_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_SHUTDOWNTASK ) || defined ( OS_LINK_VAR_TASK_SHUTDOWNTASK_FAR ) || defined ( OS_LINK_VAR_TASK_SHUTDOWNTASK_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_SHUTDOWNTASK_FAR_NOCACHE_INIT )
.OS_ShutdownTask_VAR_NOCACHE ALIGN(4) :> .
_OS_ShutdownTask_VAR_NOCACHE_START = ADDR(.OS_ShutdownTask_VAR_NOCACHE);
_OS_ShutdownTask_VAR_NOCACHE_END = ENDADDR(.OS_ShutdownTask_VAR_NOCACHE) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_SHUTDOWNTASK ) || defined ( OS_LINK_VAR_TASK_SHUTDOWNTASK_FAR ) || defined ( OS_LINK_VAR_TASK_SHUTDOWNTASK_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_SHUTDOWNTASK_FAR_NOCACHE_NOINIT )
.OS_ShutdownTask_VAR_NOCACHE_NOINIT ALIGN(4) :> .
_OS_ShutdownTask_VAR_NOCACHE_NOINIT_START = ADDR(.OS_ShutdownTask_VAR_NOCACHE_NOINIT);
_OS_ShutdownTask_VAR_NOCACHE_NOINIT_END = ENDADDR(.OS_ShutdownTask_VAR_NOCACHE_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_SHUTDOWNTASK ) || defined ( OS_LINK_VAR_TASK_SHUTDOWNTASK_FAR ) || defined ( OS_LINK_VAR_TASK_SHUTDOWNTASK_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_SHUTDOWNTASK_FAR_NOCACHE_ZERO_INIT )
.OS_ShutdownTask_VAR_NOCACHE_ZERO_INIT ALIGN(4) :> .
.OS_ShutdownTask_VAR_NOCACHE_ZERO_INIT_bss CLEAR :> .
_OS_ShutdownTask_VAR_NOCACHE_ZERO_INIT_START = ADDR(.OS_ShutdownTask_VAR_NOCACHE_ZERO_INIT);
_OS_ShutdownTask_VAR_NOCACHE_ZERO_INIT_END = ENDADDR(.OS_ShutdownTask_VAR_NOCACHE_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_SHUTDOWNTASK ) || defined ( OS_LINK_VAR_TASK_SHUTDOWNTASK_NEAR ) || defined ( OS_LINK_VAR_TASK_SHUTDOWNTASK_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_SHUTDOWNTASK_NEAR_NOCACHE_INIT )
.OS_ShutdownTask_VAR_FAST_NOCACHE ALIGN(4) :> .
_OS_ShutdownTask_VAR_FAST_NOCACHE_START = ADDR(.OS_ShutdownTask_VAR_FAST_NOCACHE);
_OS_ShutdownTask_VAR_FAST_NOCACHE_END = ENDADDR(.OS_ShutdownTask_VAR_FAST_NOCACHE) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_SHUTDOWNTASK ) || defined ( OS_LINK_VAR_TASK_SHUTDOWNTASK_NEAR ) || defined ( OS_LINK_VAR_TASK_SHUTDOWNTASK_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_SHUTDOWNTASK_NEAR_NOCACHE_NOINIT )
.OS_ShutdownTask_VAR_FAST_NOCACHE_NOINIT ALIGN(4) :> .
_OS_ShutdownTask_VAR_FAST_NOCACHE_NOINIT_START = ADDR(.OS_ShutdownTask_VAR_FAST_NOCACHE_NOINIT);
_OS_ShutdownTask_VAR_FAST_NOCACHE_NOINIT_END = ENDADDR(.OS_ShutdownTask_VAR_FAST_NOCACHE_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_SHUTDOWNTASK ) || defined ( OS_LINK_VAR_TASK_SHUTDOWNTASK_NEAR ) || defined ( OS_LINK_VAR_TASK_SHUTDOWNTASK_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_SHUTDOWNTASK_NEAR_NOCACHE_ZERO_INIT )
.OS_ShutdownTask_VAR_FAST_NOCACHE_ZERO_INIT ALIGN(4) :> .
.OS_ShutdownTask_VAR_FAST_NOCACHE_ZERO_INIT_bss CLEAR :> .
_OS_ShutdownTask_VAR_FAST_NOCACHE_ZERO_INIT_START = ADDR(.OS_ShutdownTask_VAR_FAST_NOCACHE_ZERO_INIT);
_OS_ShutdownTask_VAR_FAST_NOCACHE_ZERO_INIT_END = ENDADDR(.OS_ShutdownTask_VAR_FAST_NOCACHE_ZERO_INIT_bss) - 1;
#endif

#ifdef OS_LINK_VAR_TASK_SHUTDOWNTASK
. = ALIGN(4);
_OS_ShutdownTask_VAR_ALL_END = .-1;
__OS_ShutdownTask_VAR_ALL_END = .-1;
# undef OS_LINK_VAR_TASK_SHUTDOWNTASK
#endif

#ifdef OS_LINK_VAR_TASK_SHUTDOWNTASK_FAR
# undef OS_LINK_VAR_TASK_SHUTDOWNTASK_FAR
#endif

#ifdef OS_LINK_VAR_TASK_SHUTDOWNTASK_FAR_CACHE
# undef OS_LINK_VAR_TASK_SHUTDOWNTASK_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_TASK_SHUTDOWNTASK_FAR_CACHE_INIT
# undef OS_LINK_VAR_TASK_SHUTDOWNTASK_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_SHUTDOWNTASK_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_TASK_SHUTDOWNTASK_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_SHUTDOWNTASK_FAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_SHUTDOWNTASK_FAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_SHUTDOWNTASK_FAR_NOCACHE
# undef OS_LINK_VAR_TASK_SHUTDOWNTASK_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_TASK_SHUTDOWNTASK_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_TASK_SHUTDOWNTASK_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_SHUTDOWNTASK_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_TASK_SHUTDOWNTASK_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_SHUTDOWNTASK_FAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_SHUTDOWNTASK_FAR_NOCACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_SHUTDOWNTASK_NEAR
# undef OS_LINK_VAR_TASK_SHUTDOWNTASK_NEAR
#endif

#ifdef OS_LINK_VAR_TASK_SHUTDOWNTASK_NEAR_CACHE
# undef OS_LINK_VAR_TASK_SHUTDOWNTASK_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_TASK_SHUTDOWNTASK_NEAR_CACHE_INIT
# undef OS_LINK_VAR_TASK_SHUTDOWNTASK_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_SHUTDOWNTASK_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_TASK_SHUTDOWNTASK_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_SHUTDOWNTASK_NEAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_SHUTDOWNTASK_NEAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_SHUTDOWNTASK_NEAR_NOCACHE
# undef OS_LINK_VAR_TASK_SHUTDOWNTASK_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_TASK_SHUTDOWNTASK_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_TASK_SHUTDOWNTASK_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_SHUTDOWNTASK_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_TASK_SHUTDOWNTASK_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_SHUTDOWNTASK_NEAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_SHUTDOWNTASK_NEAR_NOCACHE_ZERO_INIT
#endif



#ifdef OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0
. = ALIGN(4);
_OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_ALL_START = .;
__OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_ALL_START = .;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0 ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_FAR ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_FAR_CACHE_INIT )
.OS_CounterIsr_TpCounter_OsCore_CORE0_VAR ALIGN(4) :> .
_OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_START = ADDR(.OS_CounterIsr_TpCounter_OsCore_CORE0_VAR);
_OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_END = ENDADDR(.OS_CounterIsr_TpCounter_OsCore_CORE0_VAR) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0 ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_FAR ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_FAR_CACHE_NOINIT )
.OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_NOINIT ALIGN(4) :> .
_OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_NOINIT_START = ADDR(.OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_NOINIT);
_OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_NOINIT_END = ENDADDR(.OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0 ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_FAR ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_FAR_CACHE_ZERO_INIT )
.OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_ZERO_INIT ALIGN(4) :> .
.OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_ZERO_INIT_bss CLEAR :> .
_OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_ZERO_INIT_START = ADDR(.OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_ZERO_INIT);
_OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_ZERO_INIT_END = ENDADDR(.OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0 ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_NEAR ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_NEAR_CACHE_INIT )
.OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_FAST ALIGN(4) :> .
_OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_FAST_START = ADDR(.OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_FAST);
_OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_FAST_END = ENDADDR(.OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_FAST) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0 ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_NEAR ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_NEAR_CACHE_NOINIT )
.OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_FAST_NOINIT ALIGN(4) :> .
_OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_FAST_NOINIT_START = ADDR(.OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_FAST_NOINIT);
_OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_FAST_NOINIT_END = ENDADDR(.OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_FAST_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0 ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_NEAR ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_NEAR_CACHE_ZERO_INIT )
.OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_FAST_ZERO_INIT ALIGN(4) :> .
.OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_FAST_ZERO_INIT_bss CLEAR :> .
_OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_FAST_ZERO_INIT_START = ADDR(.OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_FAST_ZERO_INIT);
_OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_FAST_ZERO_INIT_END = ENDADDR(.OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_FAST_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0 ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_FAR ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_FAR_NOCACHE_INIT )
.OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_NOCACHE ALIGN(4) :> .
_OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_NOCACHE_START = ADDR(.OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_NOCACHE);
_OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_NOCACHE_END = ENDADDR(.OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_NOCACHE) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0 ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_FAR ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_FAR_NOCACHE_NOINIT )
.OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_NOCACHE_NOINIT ALIGN(4) :> .
_OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_NOCACHE_NOINIT_START = ADDR(.OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_NOCACHE_NOINIT);
_OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_NOCACHE_NOINIT_END = ENDADDR(.OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_NOCACHE_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0 ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_FAR ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_FAR_NOCACHE_ZERO_INIT )
.OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_NOCACHE_ZERO_INIT ALIGN(4) :> .
.OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_NOCACHE_ZERO_INIT_bss CLEAR :> .
_OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_NOCACHE_ZERO_INIT_START = ADDR(.OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_NOCACHE_ZERO_INIT);
_OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_NOCACHE_ZERO_INIT_END = ENDADDR(.OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_NOCACHE_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0 ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_NEAR ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_NEAR_NOCACHE_INIT )
.OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_FAST_NOCACHE ALIGN(4) :> .
_OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_FAST_NOCACHE_START = ADDR(.OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_FAST_NOCACHE);
_OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_FAST_NOCACHE_END = ENDADDR(.OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_FAST_NOCACHE) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0 ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_NEAR ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_NEAR_NOCACHE_NOINIT )
.OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_FAST_NOCACHE_NOINIT ALIGN(4) :> .
_OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_FAST_NOCACHE_NOINIT_START = ADDR(.OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_FAST_NOCACHE_NOINIT);
_OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_FAST_NOCACHE_NOINIT_END = ENDADDR(.OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_FAST_NOCACHE_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0 ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_NEAR ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_NEAR_NOCACHE_ZERO_INIT )
.OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_FAST_NOCACHE_ZERO_INIT ALIGN(4) :> .
.OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_FAST_NOCACHE_ZERO_INIT_bss CLEAR :> .
_OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_FAST_NOCACHE_ZERO_INIT_START = ADDR(.OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_FAST_NOCACHE_ZERO_INIT);
_OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_FAST_NOCACHE_ZERO_INIT_END = ENDADDR(.OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_FAST_NOCACHE_ZERO_INIT_bss) - 1;
#endif

#ifdef OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0
. = ALIGN(4);
_OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_ALL_END = .-1;
__OS_CounterIsr_TpCounter_OsCore_CORE0_VAR_ALL_END = .-1;
# undef OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0
#endif

#ifdef OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_FAR
# undef OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_FAR
#endif

#ifdef OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_FAR_CACHE
# undef OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_FAR_CACHE_INIT
# undef OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_FAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_FAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_FAR_NOCACHE
# undef OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_FAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_FAR_NOCACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_NEAR
# undef OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_NEAR
#endif

#ifdef OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_NEAR_CACHE
# undef OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_NEAR_CACHE_INIT
# undef OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_NEAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_NEAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_NEAR_NOCACHE
# undef OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_NEAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_NEAR_NOCACHE_ZERO_INIT
#endif



#ifdef OS_LINK_VAR_ISR_FR_IRQLINE0
. = ALIGN(4);
_OS_Fr_IrqLine0_VAR_ALL_START = .;
__OS_Fr_IrqLine0_VAR_ALL_START = .;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_FR_IRQLINE0 ) || defined ( OS_LINK_VAR_ISR_FR_IRQLINE0_FAR ) || defined ( OS_LINK_VAR_ISR_FR_IRQLINE0_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_FR_IRQLINE0_FAR_CACHE_INIT )
.OS_Fr_IrqLine0_VAR ALIGN(4) :> .
_OS_Fr_IrqLine0_VAR_START = ADDR(.OS_Fr_IrqLine0_VAR);
_OS_Fr_IrqLine0_VAR_END = ENDADDR(.OS_Fr_IrqLine0_VAR) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_FR_IRQLINE0 ) || defined ( OS_LINK_VAR_ISR_FR_IRQLINE0_FAR ) || defined ( OS_LINK_VAR_ISR_FR_IRQLINE0_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_FR_IRQLINE0_FAR_CACHE_NOINIT )
.OS_Fr_IrqLine0_VAR_NOINIT ALIGN(4) :> .
_OS_Fr_IrqLine0_VAR_NOINIT_START = ADDR(.OS_Fr_IrqLine0_VAR_NOINIT);
_OS_Fr_IrqLine0_VAR_NOINIT_END = ENDADDR(.OS_Fr_IrqLine0_VAR_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_FR_IRQLINE0 ) || defined ( OS_LINK_VAR_ISR_FR_IRQLINE0_FAR ) || defined ( OS_LINK_VAR_ISR_FR_IRQLINE0_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_FR_IRQLINE0_FAR_CACHE_ZERO_INIT )
.OS_Fr_IrqLine0_VAR_ZERO_INIT ALIGN(4) :> .
.OS_Fr_IrqLine0_VAR_ZERO_INIT_bss CLEAR :> .
_OS_Fr_IrqLine0_VAR_ZERO_INIT_START = ADDR(.OS_Fr_IrqLine0_VAR_ZERO_INIT);
_OS_Fr_IrqLine0_VAR_ZERO_INIT_END = ENDADDR(.OS_Fr_IrqLine0_VAR_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_FR_IRQLINE0 ) || defined ( OS_LINK_VAR_ISR_FR_IRQLINE0_NEAR ) || defined ( OS_LINK_VAR_ISR_FR_IRQLINE0_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_FR_IRQLINE0_NEAR_CACHE_INIT )
.OS_Fr_IrqLine0_VAR_FAST ALIGN(4) :> .
_OS_Fr_IrqLine0_VAR_FAST_START = ADDR(.OS_Fr_IrqLine0_VAR_FAST);
_OS_Fr_IrqLine0_VAR_FAST_END = ENDADDR(.OS_Fr_IrqLine0_VAR_FAST) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_FR_IRQLINE0 ) || defined ( OS_LINK_VAR_ISR_FR_IRQLINE0_NEAR ) || defined ( OS_LINK_VAR_ISR_FR_IRQLINE0_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_FR_IRQLINE0_NEAR_CACHE_NOINIT )
.OS_Fr_IrqLine0_VAR_FAST_NOINIT ALIGN(4) :> .
_OS_Fr_IrqLine0_VAR_FAST_NOINIT_START = ADDR(.OS_Fr_IrqLine0_VAR_FAST_NOINIT);
_OS_Fr_IrqLine0_VAR_FAST_NOINIT_END = ENDADDR(.OS_Fr_IrqLine0_VAR_FAST_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_FR_IRQLINE0 ) || defined ( OS_LINK_VAR_ISR_FR_IRQLINE0_NEAR ) || defined ( OS_LINK_VAR_ISR_FR_IRQLINE0_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_FR_IRQLINE0_NEAR_CACHE_ZERO_INIT )
.OS_Fr_IrqLine0_VAR_FAST_ZERO_INIT ALIGN(4) :> .
.OS_Fr_IrqLine0_VAR_FAST_ZERO_INIT_bss CLEAR :> .
_OS_Fr_IrqLine0_VAR_FAST_ZERO_INIT_START = ADDR(.OS_Fr_IrqLine0_VAR_FAST_ZERO_INIT);
_OS_Fr_IrqLine0_VAR_FAST_ZERO_INIT_END = ENDADDR(.OS_Fr_IrqLine0_VAR_FAST_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_FR_IRQLINE0 ) || defined ( OS_LINK_VAR_ISR_FR_IRQLINE0_FAR ) || defined ( OS_LINK_VAR_ISR_FR_IRQLINE0_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_FR_IRQLINE0_FAR_NOCACHE_INIT )
.OS_Fr_IrqLine0_VAR_NOCACHE ALIGN(4) :> .
_OS_Fr_IrqLine0_VAR_NOCACHE_START = ADDR(.OS_Fr_IrqLine0_VAR_NOCACHE);
_OS_Fr_IrqLine0_VAR_NOCACHE_END = ENDADDR(.OS_Fr_IrqLine0_VAR_NOCACHE) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_FR_IRQLINE0 ) || defined ( OS_LINK_VAR_ISR_FR_IRQLINE0_FAR ) || defined ( OS_LINK_VAR_ISR_FR_IRQLINE0_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_FR_IRQLINE0_FAR_NOCACHE_NOINIT )
.OS_Fr_IrqLine0_VAR_NOCACHE_NOINIT ALIGN(4) :> .
_OS_Fr_IrqLine0_VAR_NOCACHE_NOINIT_START = ADDR(.OS_Fr_IrqLine0_VAR_NOCACHE_NOINIT);
_OS_Fr_IrqLine0_VAR_NOCACHE_NOINIT_END = ENDADDR(.OS_Fr_IrqLine0_VAR_NOCACHE_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_FR_IRQLINE0 ) || defined ( OS_LINK_VAR_ISR_FR_IRQLINE0_FAR ) || defined ( OS_LINK_VAR_ISR_FR_IRQLINE0_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_FR_IRQLINE0_FAR_NOCACHE_ZERO_INIT )
.OS_Fr_IrqLine0_VAR_NOCACHE_ZERO_INIT ALIGN(4) :> .
.OS_Fr_IrqLine0_VAR_NOCACHE_ZERO_INIT_bss CLEAR :> .
_OS_Fr_IrqLine0_VAR_NOCACHE_ZERO_INIT_START = ADDR(.OS_Fr_IrqLine0_VAR_NOCACHE_ZERO_INIT);
_OS_Fr_IrqLine0_VAR_NOCACHE_ZERO_INIT_END = ENDADDR(.OS_Fr_IrqLine0_VAR_NOCACHE_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_FR_IRQLINE0 ) || defined ( OS_LINK_VAR_ISR_FR_IRQLINE0_NEAR ) || defined ( OS_LINK_VAR_ISR_FR_IRQLINE0_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_FR_IRQLINE0_NEAR_NOCACHE_INIT )
.OS_Fr_IrqLine0_VAR_FAST_NOCACHE ALIGN(4) :> .
_OS_Fr_IrqLine0_VAR_FAST_NOCACHE_START = ADDR(.OS_Fr_IrqLine0_VAR_FAST_NOCACHE);
_OS_Fr_IrqLine0_VAR_FAST_NOCACHE_END = ENDADDR(.OS_Fr_IrqLine0_VAR_FAST_NOCACHE) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_FR_IRQLINE0 ) || defined ( OS_LINK_VAR_ISR_FR_IRQLINE0_NEAR ) || defined ( OS_LINK_VAR_ISR_FR_IRQLINE0_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_FR_IRQLINE0_NEAR_NOCACHE_NOINIT )
.OS_Fr_IrqLine0_VAR_FAST_NOCACHE_NOINIT ALIGN(4) :> .
_OS_Fr_IrqLine0_VAR_FAST_NOCACHE_NOINIT_START = ADDR(.OS_Fr_IrqLine0_VAR_FAST_NOCACHE_NOINIT);
_OS_Fr_IrqLine0_VAR_FAST_NOCACHE_NOINIT_END = ENDADDR(.OS_Fr_IrqLine0_VAR_FAST_NOCACHE_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_FR_IRQLINE0 ) || defined ( OS_LINK_VAR_ISR_FR_IRQLINE0_NEAR ) || defined ( OS_LINK_VAR_ISR_FR_IRQLINE0_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_FR_IRQLINE0_NEAR_NOCACHE_ZERO_INIT )
.OS_Fr_IrqLine0_VAR_FAST_NOCACHE_ZERO_INIT ALIGN(4) :> .
.OS_Fr_IrqLine0_VAR_FAST_NOCACHE_ZERO_INIT_bss CLEAR :> .
_OS_Fr_IrqLine0_VAR_FAST_NOCACHE_ZERO_INIT_START = ADDR(.OS_Fr_IrqLine0_VAR_FAST_NOCACHE_ZERO_INIT);
_OS_Fr_IrqLine0_VAR_FAST_NOCACHE_ZERO_INIT_END = ENDADDR(.OS_Fr_IrqLine0_VAR_FAST_NOCACHE_ZERO_INIT_bss) - 1;
#endif

#ifdef OS_LINK_VAR_ISR_FR_IRQLINE0
. = ALIGN(4);
_OS_Fr_IrqLine0_VAR_ALL_END = .-1;
__OS_Fr_IrqLine0_VAR_ALL_END = .-1;
# undef OS_LINK_VAR_ISR_FR_IRQLINE0
#endif

#ifdef OS_LINK_VAR_ISR_FR_IRQLINE0_FAR
# undef OS_LINK_VAR_ISR_FR_IRQLINE0_FAR
#endif

#ifdef OS_LINK_VAR_ISR_FR_IRQLINE0_FAR_CACHE
# undef OS_LINK_VAR_ISR_FR_IRQLINE0_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_ISR_FR_IRQLINE0_FAR_CACHE_INIT
# undef OS_LINK_VAR_ISR_FR_IRQLINE0_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_FR_IRQLINE0_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_ISR_FR_IRQLINE0_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_FR_IRQLINE0_FAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_FR_IRQLINE0_FAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_FR_IRQLINE0_FAR_NOCACHE
# undef OS_LINK_VAR_ISR_FR_IRQLINE0_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_ISR_FR_IRQLINE0_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_ISR_FR_IRQLINE0_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_FR_IRQLINE0_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_ISR_FR_IRQLINE0_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_FR_IRQLINE0_FAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_FR_IRQLINE0_FAR_NOCACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_FR_IRQLINE0_NEAR
# undef OS_LINK_VAR_ISR_FR_IRQLINE0_NEAR
#endif

#ifdef OS_LINK_VAR_ISR_FR_IRQLINE0_NEAR_CACHE
# undef OS_LINK_VAR_ISR_FR_IRQLINE0_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_ISR_FR_IRQLINE0_NEAR_CACHE_INIT
# undef OS_LINK_VAR_ISR_FR_IRQLINE0_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_FR_IRQLINE0_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_ISR_FR_IRQLINE0_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_FR_IRQLINE0_NEAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_FR_IRQLINE0_NEAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_FR_IRQLINE0_NEAR_NOCACHE
# undef OS_LINK_VAR_ISR_FR_IRQLINE0_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_ISR_FR_IRQLINE0_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_ISR_FR_IRQLINE0_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_FR_IRQLINE0_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_ISR_FR_IRQLINE0_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_FR_IRQLINE0_NEAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_FR_IRQLINE0_NEAR_NOCACHE_ZERO_INIT
#endif



#ifdef OS_LINK_VAR_ISR_FR_IRQTIMER0
. = ALIGN(4);
_OS_Fr_IrqTimer0_VAR_ALL_START = .;
__OS_Fr_IrqTimer0_VAR_ALL_START = .;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_FR_IRQTIMER0 ) || defined ( OS_LINK_VAR_ISR_FR_IRQTIMER0_FAR ) || defined ( OS_LINK_VAR_ISR_FR_IRQTIMER0_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_FR_IRQTIMER0_FAR_CACHE_INIT )
.OS_Fr_IrqTimer0_VAR ALIGN(4) :> .
_OS_Fr_IrqTimer0_VAR_START = ADDR(.OS_Fr_IrqTimer0_VAR);
_OS_Fr_IrqTimer0_VAR_END = ENDADDR(.OS_Fr_IrqTimer0_VAR) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_FR_IRQTIMER0 ) || defined ( OS_LINK_VAR_ISR_FR_IRQTIMER0_FAR ) || defined ( OS_LINK_VAR_ISR_FR_IRQTIMER0_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_FR_IRQTIMER0_FAR_CACHE_NOINIT )
.OS_Fr_IrqTimer0_VAR_NOINIT ALIGN(4) :> .
_OS_Fr_IrqTimer0_VAR_NOINIT_START = ADDR(.OS_Fr_IrqTimer0_VAR_NOINIT);
_OS_Fr_IrqTimer0_VAR_NOINIT_END = ENDADDR(.OS_Fr_IrqTimer0_VAR_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_FR_IRQTIMER0 ) || defined ( OS_LINK_VAR_ISR_FR_IRQTIMER0_FAR ) || defined ( OS_LINK_VAR_ISR_FR_IRQTIMER0_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_FR_IRQTIMER0_FAR_CACHE_ZERO_INIT )
.OS_Fr_IrqTimer0_VAR_ZERO_INIT ALIGN(4) :> .
.OS_Fr_IrqTimer0_VAR_ZERO_INIT_bss CLEAR :> .
_OS_Fr_IrqTimer0_VAR_ZERO_INIT_START = ADDR(.OS_Fr_IrqTimer0_VAR_ZERO_INIT);
_OS_Fr_IrqTimer0_VAR_ZERO_INIT_END = ENDADDR(.OS_Fr_IrqTimer0_VAR_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_FR_IRQTIMER0 ) || defined ( OS_LINK_VAR_ISR_FR_IRQTIMER0_NEAR ) || defined ( OS_LINK_VAR_ISR_FR_IRQTIMER0_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_FR_IRQTIMER0_NEAR_CACHE_INIT )
.OS_Fr_IrqTimer0_VAR_FAST ALIGN(4) :> .
_OS_Fr_IrqTimer0_VAR_FAST_START = ADDR(.OS_Fr_IrqTimer0_VAR_FAST);
_OS_Fr_IrqTimer0_VAR_FAST_END = ENDADDR(.OS_Fr_IrqTimer0_VAR_FAST) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_FR_IRQTIMER0 ) || defined ( OS_LINK_VAR_ISR_FR_IRQTIMER0_NEAR ) || defined ( OS_LINK_VAR_ISR_FR_IRQTIMER0_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_FR_IRQTIMER0_NEAR_CACHE_NOINIT )
.OS_Fr_IrqTimer0_VAR_FAST_NOINIT ALIGN(4) :> .
_OS_Fr_IrqTimer0_VAR_FAST_NOINIT_START = ADDR(.OS_Fr_IrqTimer0_VAR_FAST_NOINIT);
_OS_Fr_IrqTimer0_VAR_FAST_NOINIT_END = ENDADDR(.OS_Fr_IrqTimer0_VAR_FAST_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_FR_IRQTIMER0 ) || defined ( OS_LINK_VAR_ISR_FR_IRQTIMER0_NEAR ) || defined ( OS_LINK_VAR_ISR_FR_IRQTIMER0_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_FR_IRQTIMER0_NEAR_CACHE_ZERO_INIT )
.OS_Fr_IrqTimer0_VAR_FAST_ZERO_INIT ALIGN(4) :> .
.OS_Fr_IrqTimer0_VAR_FAST_ZERO_INIT_bss CLEAR :> .
_OS_Fr_IrqTimer0_VAR_FAST_ZERO_INIT_START = ADDR(.OS_Fr_IrqTimer0_VAR_FAST_ZERO_INIT);
_OS_Fr_IrqTimer0_VAR_FAST_ZERO_INIT_END = ENDADDR(.OS_Fr_IrqTimer0_VAR_FAST_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_FR_IRQTIMER0 ) || defined ( OS_LINK_VAR_ISR_FR_IRQTIMER0_FAR ) || defined ( OS_LINK_VAR_ISR_FR_IRQTIMER0_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_FR_IRQTIMER0_FAR_NOCACHE_INIT )
.OS_Fr_IrqTimer0_VAR_NOCACHE ALIGN(4) :> .
_OS_Fr_IrqTimer0_VAR_NOCACHE_START = ADDR(.OS_Fr_IrqTimer0_VAR_NOCACHE);
_OS_Fr_IrqTimer0_VAR_NOCACHE_END = ENDADDR(.OS_Fr_IrqTimer0_VAR_NOCACHE) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_FR_IRQTIMER0 ) || defined ( OS_LINK_VAR_ISR_FR_IRQTIMER0_FAR ) || defined ( OS_LINK_VAR_ISR_FR_IRQTIMER0_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_FR_IRQTIMER0_FAR_NOCACHE_NOINIT )
.OS_Fr_IrqTimer0_VAR_NOCACHE_NOINIT ALIGN(4) :> .
_OS_Fr_IrqTimer0_VAR_NOCACHE_NOINIT_START = ADDR(.OS_Fr_IrqTimer0_VAR_NOCACHE_NOINIT);
_OS_Fr_IrqTimer0_VAR_NOCACHE_NOINIT_END = ENDADDR(.OS_Fr_IrqTimer0_VAR_NOCACHE_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_FR_IRQTIMER0 ) || defined ( OS_LINK_VAR_ISR_FR_IRQTIMER0_FAR ) || defined ( OS_LINK_VAR_ISR_FR_IRQTIMER0_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_FR_IRQTIMER0_FAR_NOCACHE_ZERO_INIT )
.OS_Fr_IrqTimer0_VAR_NOCACHE_ZERO_INIT ALIGN(4) :> .
.OS_Fr_IrqTimer0_VAR_NOCACHE_ZERO_INIT_bss CLEAR :> .
_OS_Fr_IrqTimer0_VAR_NOCACHE_ZERO_INIT_START = ADDR(.OS_Fr_IrqTimer0_VAR_NOCACHE_ZERO_INIT);
_OS_Fr_IrqTimer0_VAR_NOCACHE_ZERO_INIT_END = ENDADDR(.OS_Fr_IrqTimer0_VAR_NOCACHE_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_FR_IRQTIMER0 ) || defined ( OS_LINK_VAR_ISR_FR_IRQTIMER0_NEAR ) || defined ( OS_LINK_VAR_ISR_FR_IRQTIMER0_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_FR_IRQTIMER0_NEAR_NOCACHE_INIT )
.OS_Fr_IrqTimer0_VAR_FAST_NOCACHE ALIGN(4) :> .
_OS_Fr_IrqTimer0_VAR_FAST_NOCACHE_START = ADDR(.OS_Fr_IrqTimer0_VAR_FAST_NOCACHE);
_OS_Fr_IrqTimer0_VAR_FAST_NOCACHE_END = ENDADDR(.OS_Fr_IrqTimer0_VAR_FAST_NOCACHE) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_FR_IRQTIMER0 ) || defined ( OS_LINK_VAR_ISR_FR_IRQTIMER0_NEAR ) || defined ( OS_LINK_VAR_ISR_FR_IRQTIMER0_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_FR_IRQTIMER0_NEAR_NOCACHE_NOINIT )
.OS_Fr_IrqTimer0_VAR_FAST_NOCACHE_NOINIT ALIGN(4) :> .
_OS_Fr_IrqTimer0_VAR_FAST_NOCACHE_NOINIT_START = ADDR(.OS_Fr_IrqTimer0_VAR_FAST_NOCACHE_NOINIT);
_OS_Fr_IrqTimer0_VAR_FAST_NOCACHE_NOINIT_END = ENDADDR(.OS_Fr_IrqTimer0_VAR_FAST_NOCACHE_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_FR_IRQTIMER0 ) || defined ( OS_LINK_VAR_ISR_FR_IRQTIMER0_NEAR ) || defined ( OS_LINK_VAR_ISR_FR_IRQTIMER0_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_FR_IRQTIMER0_NEAR_NOCACHE_ZERO_INIT )
.OS_Fr_IrqTimer0_VAR_FAST_NOCACHE_ZERO_INIT ALIGN(4) :> .
.OS_Fr_IrqTimer0_VAR_FAST_NOCACHE_ZERO_INIT_bss CLEAR :> .
_OS_Fr_IrqTimer0_VAR_FAST_NOCACHE_ZERO_INIT_START = ADDR(.OS_Fr_IrqTimer0_VAR_FAST_NOCACHE_ZERO_INIT);
_OS_Fr_IrqTimer0_VAR_FAST_NOCACHE_ZERO_INIT_END = ENDADDR(.OS_Fr_IrqTimer0_VAR_FAST_NOCACHE_ZERO_INIT_bss) - 1;
#endif

#ifdef OS_LINK_VAR_ISR_FR_IRQTIMER0
. = ALIGN(4);
_OS_Fr_IrqTimer0_VAR_ALL_END = .-1;
__OS_Fr_IrqTimer0_VAR_ALL_END = .-1;
# undef OS_LINK_VAR_ISR_FR_IRQTIMER0
#endif

#ifdef OS_LINK_VAR_ISR_FR_IRQTIMER0_FAR
# undef OS_LINK_VAR_ISR_FR_IRQTIMER0_FAR
#endif

#ifdef OS_LINK_VAR_ISR_FR_IRQTIMER0_FAR_CACHE
# undef OS_LINK_VAR_ISR_FR_IRQTIMER0_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_ISR_FR_IRQTIMER0_FAR_CACHE_INIT
# undef OS_LINK_VAR_ISR_FR_IRQTIMER0_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_FR_IRQTIMER0_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_ISR_FR_IRQTIMER0_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_FR_IRQTIMER0_FAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_FR_IRQTIMER0_FAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_FR_IRQTIMER0_FAR_NOCACHE
# undef OS_LINK_VAR_ISR_FR_IRQTIMER0_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_ISR_FR_IRQTIMER0_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_ISR_FR_IRQTIMER0_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_FR_IRQTIMER0_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_ISR_FR_IRQTIMER0_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_FR_IRQTIMER0_FAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_FR_IRQTIMER0_FAR_NOCACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_FR_IRQTIMER0_NEAR
# undef OS_LINK_VAR_ISR_FR_IRQTIMER0_NEAR
#endif

#ifdef OS_LINK_VAR_ISR_FR_IRQTIMER0_NEAR_CACHE
# undef OS_LINK_VAR_ISR_FR_IRQTIMER0_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_ISR_FR_IRQTIMER0_NEAR_CACHE_INIT
# undef OS_LINK_VAR_ISR_FR_IRQTIMER0_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_FR_IRQTIMER0_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_ISR_FR_IRQTIMER0_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_FR_IRQTIMER0_NEAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_FR_IRQTIMER0_NEAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_FR_IRQTIMER0_NEAR_NOCACHE
# undef OS_LINK_VAR_ISR_FR_IRQTIMER0_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_ISR_FR_IRQTIMER0_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_ISR_FR_IRQTIMER0_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_FR_IRQTIMER0_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_ISR_FR_IRQTIMER0_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_FR_IRQTIMER0_NEAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_FR_IRQTIMER0_NEAR_NOCACHE_ZERO_INIT
#endif



#ifdef OS_LINK_VAR_ISR_OS_TIMERPITISR
. = ALIGN(4);
_OS_Os_TimerPitIsr_VAR_ALL_START = .;
__OS_Os_TimerPitIsr_VAR_ALL_START = .;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_OS_TIMERPITISR ) || defined ( OS_LINK_VAR_ISR_OS_TIMERPITISR_FAR ) || defined ( OS_LINK_VAR_ISR_OS_TIMERPITISR_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_OS_TIMERPITISR_FAR_CACHE_INIT )
.OS_Os_TimerPitIsr_VAR ALIGN(4) :> .
_OS_Os_TimerPitIsr_VAR_START = ADDR(.OS_Os_TimerPitIsr_VAR);
_OS_Os_TimerPitIsr_VAR_END = ENDADDR(.OS_Os_TimerPitIsr_VAR) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_OS_TIMERPITISR ) || defined ( OS_LINK_VAR_ISR_OS_TIMERPITISR_FAR ) || defined ( OS_LINK_VAR_ISR_OS_TIMERPITISR_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_OS_TIMERPITISR_FAR_CACHE_NOINIT )
.OS_Os_TimerPitIsr_VAR_NOINIT ALIGN(4) :> .
_OS_Os_TimerPitIsr_VAR_NOINIT_START = ADDR(.OS_Os_TimerPitIsr_VAR_NOINIT);
_OS_Os_TimerPitIsr_VAR_NOINIT_END = ENDADDR(.OS_Os_TimerPitIsr_VAR_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_OS_TIMERPITISR ) || defined ( OS_LINK_VAR_ISR_OS_TIMERPITISR_FAR ) || defined ( OS_LINK_VAR_ISR_OS_TIMERPITISR_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_OS_TIMERPITISR_FAR_CACHE_ZERO_INIT )
.OS_Os_TimerPitIsr_VAR_ZERO_INIT ALIGN(4) :> .
.OS_Os_TimerPitIsr_VAR_ZERO_INIT_bss CLEAR :> .
_OS_Os_TimerPitIsr_VAR_ZERO_INIT_START = ADDR(.OS_Os_TimerPitIsr_VAR_ZERO_INIT);
_OS_Os_TimerPitIsr_VAR_ZERO_INIT_END = ENDADDR(.OS_Os_TimerPitIsr_VAR_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_OS_TIMERPITISR ) || defined ( OS_LINK_VAR_ISR_OS_TIMERPITISR_NEAR ) || defined ( OS_LINK_VAR_ISR_OS_TIMERPITISR_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_OS_TIMERPITISR_NEAR_CACHE_INIT )
.OS_Os_TimerPitIsr_VAR_FAST ALIGN(4) :> .
_OS_Os_TimerPitIsr_VAR_FAST_START = ADDR(.OS_Os_TimerPitIsr_VAR_FAST);
_OS_Os_TimerPitIsr_VAR_FAST_END = ENDADDR(.OS_Os_TimerPitIsr_VAR_FAST) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_OS_TIMERPITISR ) || defined ( OS_LINK_VAR_ISR_OS_TIMERPITISR_NEAR ) || defined ( OS_LINK_VAR_ISR_OS_TIMERPITISR_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_OS_TIMERPITISR_NEAR_CACHE_NOINIT )
.OS_Os_TimerPitIsr_VAR_FAST_NOINIT ALIGN(4) :> .
_OS_Os_TimerPitIsr_VAR_FAST_NOINIT_START = ADDR(.OS_Os_TimerPitIsr_VAR_FAST_NOINIT);
_OS_Os_TimerPitIsr_VAR_FAST_NOINIT_END = ENDADDR(.OS_Os_TimerPitIsr_VAR_FAST_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_OS_TIMERPITISR ) || defined ( OS_LINK_VAR_ISR_OS_TIMERPITISR_NEAR ) || defined ( OS_LINK_VAR_ISR_OS_TIMERPITISR_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_OS_TIMERPITISR_NEAR_CACHE_ZERO_INIT )
.OS_Os_TimerPitIsr_VAR_FAST_ZERO_INIT ALIGN(4) :> .
.OS_Os_TimerPitIsr_VAR_FAST_ZERO_INIT_bss CLEAR :> .
_OS_Os_TimerPitIsr_VAR_FAST_ZERO_INIT_START = ADDR(.OS_Os_TimerPitIsr_VAR_FAST_ZERO_INIT);
_OS_Os_TimerPitIsr_VAR_FAST_ZERO_INIT_END = ENDADDR(.OS_Os_TimerPitIsr_VAR_FAST_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_OS_TIMERPITISR ) || defined ( OS_LINK_VAR_ISR_OS_TIMERPITISR_FAR ) || defined ( OS_LINK_VAR_ISR_OS_TIMERPITISR_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_OS_TIMERPITISR_FAR_NOCACHE_INIT )
.OS_Os_TimerPitIsr_VAR_NOCACHE ALIGN(4) :> .
_OS_Os_TimerPitIsr_VAR_NOCACHE_START = ADDR(.OS_Os_TimerPitIsr_VAR_NOCACHE);
_OS_Os_TimerPitIsr_VAR_NOCACHE_END = ENDADDR(.OS_Os_TimerPitIsr_VAR_NOCACHE) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_OS_TIMERPITISR ) || defined ( OS_LINK_VAR_ISR_OS_TIMERPITISR_FAR ) || defined ( OS_LINK_VAR_ISR_OS_TIMERPITISR_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_OS_TIMERPITISR_FAR_NOCACHE_NOINIT )
.OS_Os_TimerPitIsr_VAR_NOCACHE_NOINIT ALIGN(4) :> .
_OS_Os_TimerPitIsr_VAR_NOCACHE_NOINIT_START = ADDR(.OS_Os_TimerPitIsr_VAR_NOCACHE_NOINIT);
_OS_Os_TimerPitIsr_VAR_NOCACHE_NOINIT_END = ENDADDR(.OS_Os_TimerPitIsr_VAR_NOCACHE_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_OS_TIMERPITISR ) || defined ( OS_LINK_VAR_ISR_OS_TIMERPITISR_FAR ) || defined ( OS_LINK_VAR_ISR_OS_TIMERPITISR_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_OS_TIMERPITISR_FAR_NOCACHE_ZERO_INIT )
.OS_Os_TimerPitIsr_VAR_NOCACHE_ZERO_INIT ALIGN(4) :> .
.OS_Os_TimerPitIsr_VAR_NOCACHE_ZERO_INIT_bss CLEAR :> .
_OS_Os_TimerPitIsr_VAR_NOCACHE_ZERO_INIT_START = ADDR(.OS_Os_TimerPitIsr_VAR_NOCACHE_ZERO_INIT);
_OS_Os_TimerPitIsr_VAR_NOCACHE_ZERO_INIT_END = ENDADDR(.OS_Os_TimerPitIsr_VAR_NOCACHE_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_OS_TIMERPITISR ) || defined ( OS_LINK_VAR_ISR_OS_TIMERPITISR_NEAR ) || defined ( OS_LINK_VAR_ISR_OS_TIMERPITISR_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_OS_TIMERPITISR_NEAR_NOCACHE_INIT )
.OS_Os_TimerPitIsr_VAR_FAST_NOCACHE ALIGN(4) :> .
_OS_Os_TimerPitIsr_VAR_FAST_NOCACHE_START = ADDR(.OS_Os_TimerPitIsr_VAR_FAST_NOCACHE);
_OS_Os_TimerPitIsr_VAR_FAST_NOCACHE_END = ENDADDR(.OS_Os_TimerPitIsr_VAR_FAST_NOCACHE) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_OS_TIMERPITISR ) || defined ( OS_LINK_VAR_ISR_OS_TIMERPITISR_NEAR ) || defined ( OS_LINK_VAR_ISR_OS_TIMERPITISR_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_OS_TIMERPITISR_NEAR_NOCACHE_NOINIT )
.OS_Os_TimerPitIsr_VAR_FAST_NOCACHE_NOINIT ALIGN(4) :> .
_OS_Os_TimerPitIsr_VAR_FAST_NOCACHE_NOINIT_START = ADDR(.OS_Os_TimerPitIsr_VAR_FAST_NOCACHE_NOINIT);
_OS_Os_TimerPitIsr_VAR_FAST_NOCACHE_NOINIT_END = ENDADDR(.OS_Os_TimerPitIsr_VAR_FAST_NOCACHE_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_OS_TIMERPITISR ) || defined ( OS_LINK_VAR_ISR_OS_TIMERPITISR_NEAR ) || defined ( OS_LINK_VAR_ISR_OS_TIMERPITISR_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_OS_TIMERPITISR_NEAR_NOCACHE_ZERO_INIT )
.OS_Os_TimerPitIsr_VAR_FAST_NOCACHE_ZERO_INIT ALIGN(4) :> .
.OS_Os_TimerPitIsr_VAR_FAST_NOCACHE_ZERO_INIT_bss CLEAR :> .
_OS_Os_TimerPitIsr_VAR_FAST_NOCACHE_ZERO_INIT_START = ADDR(.OS_Os_TimerPitIsr_VAR_FAST_NOCACHE_ZERO_INIT);
_OS_Os_TimerPitIsr_VAR_FAST_NOCACHE_ZERO_INIT_END = ENDADDR(.OS_Os_TimerPitIsr_VAR_FAST_NOCACHE_ZERO_INIT_bss) - 1;
#endif

#ifdef OS_LINK_VAR_ISR_OS_TIMERPITISR
. = ALIGN(4);
_OS_Os_TimerPitIsr_VAR_ALL_END = .-1;
__OS_Os_TimerPitIsr_VAR_ALL_END = .-1;
# undef OS_LINK_VAR_ISR_OS_TIMERPITISR
#endif

#ifdef OS_LINK_VAR_ISR_OS_TIMERPITISR_FAR
# undef OS_LINK_VAR_ISR_OS_TIMERPITISR_FAR
#endif

#ifdef OS_LINK_VAR_ISR_OS_TIMERPITISR_FAR_CACHE
# undef OS_LINK_VAR_ISR_OS_TIMERPITISR_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_ISR_OS_TIMERPITISR_FAR_CACHE_INIT
# undef OS_LINK_VAR_ISR_OS_TIMERPITISR_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_OS_TIMERPITISR_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_ISR_OS_TIMERPITISR_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_OS_TIMERPITISR_FAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_OS_TIMERPITISR_FAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_OS_TIMERPITISR_FAR_NOCACHE
# undef OS_LINK_VAR_ISR_OS_TIMERPITISR_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_ISR_OS_TIMERPITISR_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_ISR_OS_TIMERPITISR_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_OS_TIMERPITISR_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_ISR_OS_TIMERPITISR_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_OS_TIMERPITISR_FAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_OS_TIMERPITISR_FAR_NOCACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_OS_TIMERPITISR_NEAR
# undef OS_LINK_VAR_ISR_OS_TIMERPITISR_NEAR
#endif

#ifdef OS_LINK_VAR_ISR_OS_TIMERPITISR_NEAR_CACHE
# undef OS_LINK_VAR_ISR_OS_TIMERPITISR_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_ISR_OS_TIMERPITISR_NEAR_CACHE_INIT
# undef OS_LINK_VAR_ISR_OS_TIMERPITISR_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_OS_TIMERPITISR_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_ISR_OS_TIMERPITISR_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_OS_TIMERPITISR_NEAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_OS_TIMERPITISR_NEAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_OS_TIMERPITISR_NEAR_NOCACHE
# undef OS_LINK_VAR_ISR_OS_TIMERPITISR_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_ISR_OS_TIMERPITISR_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_ISR_OS_TIMERPITISR_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_OS_TIMERPITISR_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_ISR_OS_TIMERPITISR_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_OS_TIMERPITISR_NEAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_OS_TIMERPITISR_NEAR_NOCACHE_ZERO_INIT
#endif


#ifdef OS_LINK_VAR
# undef OS_LINK_VAR
#endif

#ifdef OS_LINK_VAR_APP
# undef OS_LINK_VAR_APP
#endif

#ifdef OS_LINK_VAR_TASK
# undef OS_LINK_VAR_TASK
#endif

#ifdef OS_LINK_VAR_ISR
# undef OS_LINK_VAR_ISR
#endif

#ifdef OS_LINK_KERNEL_TRACE
# undef OS_LINK_KERNEL_TRACE
#endif

#ifdef OS_LINK_KERNEL_TRACE_FAR
# undef OS_LINK_KERNEL_TRACE_FAR
#endif

#ifdef OS_LINK_KERNEL_TRACE_NEAR
# undef OS_LINK_KERNEL_TRACE_NEAR
#endif

#ifdef OS_LINK_KERNEL_BARRIERS
# undef OS_LINK_KERNEL_BARRIERS
#endif

#ifdef OS_LINK_KERNEL_BARRIERS_FAR
# undef OS_LINK_KERNEL_BARRIERS_FAR
#endif

#ifdef OS_LINK_KERNEL_BARRIERS_NEAR
# undef OS_LINK_KERNEL_BARRIERS_NEAR
#endif

#ifdef OS_LINK_KERNEL_CORESTATUS
# undef OS_LINK_KERNEL_CORESTATUS
#endif

#ifdef OS_LINK_KERNEL_CORESTATUS_FAR
# undef OS_LINK_KERNEL_CORESTATUS_FAR
#endif

#ifdef OS_LINK_KERNEL_CORESTATUS_NEAR
# undef OS_LINK_KERNEL_CORESTATUS_NEAR
#endif

#ifdef OS_LINK_VAR_KERNEL
# undef OS_LINK_VAR_KERNEL
#endif

#ifdef OS_LINK_VAR_KERNEL_FAR
# undef OS_LINK_VAR_KERNEL_FAR
#endif

#ifdef OS_LINK_VAR_KERNEL_FAR_CACHE
# undef OS_LINK_VAR_KERNEL_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_KERNEL_FAR_CACHE_INIT
# undef OS_LINK_VAR_KERNEL_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_KERNEL_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_KERNEL_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_KERNEL_FAR_NOCACHE
# undef OS_LINK_VAR_KERNEL_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_KERNEL_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_KERNEL_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_KERNEL_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_KERNEL_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_KERNEL_NEAR
# undef OS_LINK_VAR_KERNEL_NEAR
#endif

#ifdef OS_LINK_VAR_KERNEL_NEAR_CACHE
# undef OS_LINK_VAR_KERNEL_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_KERNEL_NEAR_CACHE_INIT
# undef OS_LINK_VAR_KERNEL_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_KERNEL_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_KERNEL_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_KERNEL_NEAR_NOCACHE
# undef OS_LINK_VAR_KERNEL_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_KERNEL_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_KERNEL_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_KERNEL_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_KERNEL_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_KERNEL_NEAR_CACHE_INIT
# undef OS_LINK_VAR_KERNEL_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_KERNEL_NEAR_CACHE_INIT
# undef OS_LINK_VAR_KERNEL_NEAR_CACHE_INIT
#endif


