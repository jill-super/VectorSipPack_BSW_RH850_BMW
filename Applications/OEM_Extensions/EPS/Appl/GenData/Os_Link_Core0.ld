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
 *   Generation Time: 2018-01-02 16:37:33
 *           Project: EPS - Version 1.0
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
.OS_Default_Appl_Init_Task_CODE ALIGN(4) :> .
_OS_Default_Appl_Init_Task_CODE_START = ADDR(.OS_Default_Appl_Init_Task_CODE);
_OS_Default_Appl_Init_Task_CODE_END = ENDADDR(.OS_Default_Appl_Init_Task_CODE) - 1;
.OS_Default_Appl_Task_CODE ALIGN(4) :> .
_OS_Default_Appl_Task_CODE_START = ADDR(.OS_Default_Appl_Task_CODE);
_OS_Default_Appl_Task_CODE_END = ENDADDR(.OS_Default_Appl_Task_CODE) - 1;
.OS_Default_BAC_Appl_BMW_Task_CODE ALIGN(4) :> .
_OS_Default_BAC_Appl_BMW_Task_CODE_START = ADDR(.OS_Default_BAC_Appl_BMW_Task_CODE);
_OS_Default_BAC_Appl_BMW_Task_CODE_END = ENDADDR(.OS_Default_BAC_Appl_BMW_Task_CODE) - 1;
.OS_Default_BSW_Sync_Task_CODE ALIGN(4) :> .
_OS_Default_BSW_Sync_Task_CODE_START = ADDR(.OS_Default_BSW_Sync_Task_CODE);
_OS_Default_BSW_Sync_Task_CODE_END = ENDADDR(.OS_Default_BSW_Sync_Task_CODE) - 1;
.OS_Default_Background_Task_CODE ALIGN(4) :> .
_OS_Default_Background_Task_CODE_START = ADDR(.OS_Default_Background_Task_CODE);
_OS_Default_Background_Task_CODE_END = ENDADDR(.OS_Default_Background_Task_CODE) - 1;
.OS_Default_Init_Task_CODE ALIGN(4) :> .
_OS_Default_Init_Task_CODE_START = ADDR(.OS_Default_Init_Task_CODE);
_OS_Default_Init_Task_CODE_END = ENDADDR(.OS_Default_Init_Task_CODE) - 1;
.OS_Default_RTE_Mode_switch_Task_CODE ALIGN(4) :> .
_OS_Default_RTE_Mode_switch_Task_CODE_START = ADDR(.OS_Default_RTE_Mode_switch_Task_CODE);
_OS_Default_RTE_Mode_switch_Task_CODE_END = ENDADDR(.OS_Default_RTE_Mode_switch_Task_CODE) - 1;
.OS_Fr_IrqLine0_CODE ALIGN(4) :> .
_OS_Fr_IrqLine0_CODE_START = ADDR(.OS_Fr_IrqLine0_CODE);
_OS_Fr_IrqLine0_CODE_END = ENDADDR(.OS_Fr_IrqLine0_CODE) - 1;
.OS_Fr_IrqTimer0_CODE ALIGN(4) :> .
_OS_Fr_IrqTimer0_CODE_START = ADDR(.OS_Fr_IrqTimer0_CODE);
_OS_Fr_IrqTimer0_CODE_END = ENDADDR(.OS_Fr_IrqTimer0_CODE) - 1;
.OS_OsTask_BSW_ASIL_CODE ALIGN(4) :> .
_OS_OsTask_BSW_ASIL_CODE_START = ADDR(.OS_OsTask_BSW_ASIL_CODE);
_OS_OsTask_BSW_ASIL_CODE_END = ENDADDR(.OS_OsTask_BSW_ASIL_CODE) - 1;
.OS_OsTask_LowPrioNvm_CODE ALIGN(4) :> .
_OS_OsTask_LowPrioNvm_CODE_START = ADDR(.OS_OsTask_LowPrioNvm_CODE);
_OS_OsTask_LowPrioNvm_CODE_END = ENDADDR(.OS_OsTask_LowPrioNvm_CODE) - 1;
.OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_CODE ALIGN(4) :> .
_OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_CODE_START = ADDR(.OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_CODE);
_OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_CODE_END = ENDADDR(.OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_CODE) - 1;
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


#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_APP ) || defined ( OS_LINK_CONST_APP_OSAPPLICATION_ASIL ) || defined ( OS_LINK_CONST_APP_OSAPPLICATION_ASIL_FAR )
.OS_OsApplication_ASIL_CONST ALIGN(4) :> .
_OS_OsApplication_ASIL_CONST_START = ADDR(.OS_OsApplication_ASIL_CONST);
_OS_OsApplication_ASIL_CONST_END = ENDADDR(.OS_OsApplication_ASIL_CONST) - 1;
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_APP ) || defined ( OS_LINK_CONST_APP_OSAPPLICATION_ASIL ) || defined ( OS_LINK_CONST_APP_OSAPPLICATION_ASIL_NEAR )
.OS_OsApplication_ASIL_CONST_FAST ALIGN(4) :> .
_OS_OsApplication_ASIL_CONST_FAST_START = ADDR(.OS_OsApplication_ASIL_CONST_FAST);
_OS_OsApplication_ASIL_CONST_FAST_END = ENDADDR(.OS_OsApplication_ASIL_CONST_FAST) - 1;
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_APP ) || defined ( OS_LINK_CONST_APP_OSAPPLICATION_ASIL ) || defined ( OS_LINK_CONST_APP_OSAPPLICATION_ASIL_INIT )

.ROM_OS_OsApplication_ASIL_VAR ROM(.OS_OsApplication_ASIL_VAR) :> .
_ROM_OS_OsApplication_ASIL_VAR_START = ADDR(.ROM_OS_OsApplication_ASIL_VAR);
_ROM_OS_OsApplication_ASIL_VAR_END = ENDADDR(.ROM_OS_OsApplication_ASIL_VAR);

.ROM_OS_OsApplication_ASIL_VAR_ZERO_INIT ROM(.OS_OsApplication_ASIL_VAR_ZERO_INIT) :> .
_ROM_OS_OsApplication_ASIL_VAR_ZERO_INIT_START = ADDR(.ROM_OS_OsApplication_ASIL_VAR_ZERO_INIT);
_ROM_OS_OsApplication_ASIL_VAR_ZERO_INIT_END = ENDADDR(.ROM_OS_OsApplication_ASIL_VAR_ZERO_INIT);

.ROM_OS_OsApplication_ASIL_VAR_FAST ROM(.OS_OsApplication_ASIL_VAR_FAST) :> .
_ROM_OS_OsApplication_ASIL_VAR_FAST_START = ADDR(.ROM_OS_OsApplication_ASIL_VAR_FAST);
_ROM_OS_OsApplication_ASIL_VAR_FAST_END = ENDADDR(.ROM_OS_OsApplication_ASIL_VAR_FAST);

.ROM_OS_OsApplication_ASIL_VAR_FAST_ZERO_INIT ROM(.OS_OsApplication_ASIL_VAR_FAST_ZERO_INIT) :> .
_ROM_OS_OsApplication_ASIL_VAR_FAST_ZERO_INIT_START = ADDR(.ROM_OS_OsApplication_ASIL_VAR_FAST_ZERO_INIT);
_ROM_OS_OsApplication_ASIL_VAR_FAST_ZERO_INIT_END = ENDADDR(.ROM_OS_OsApplication_ASIL_VAR_FAST_ZERO_INIT);

.ROM_OS_OsApplication_ASIL_VAR_NOCACHE ROM(.OS_OsApplication_ASIL_VAR_NOCACHE) :> .
_ROM_OS_OsApplication_ASIL_VAR_NOCACHE_START = ADDR(.ROM_OS_OsApplication_ASIL_VAR_NOCACHE);
_ROM_OS_OsApplication_ASIL_VAR_NOCACHE_END = ENDADDR(.ROM_OS_OsApplication_ASIL_VAR_NOCACHE);

.ROM_OS_OsApplication_ASIL_VAR_NOCACHE_ZERO_INIT ROM(.OS_OsApplication_ASIL_VAR_NOCACHE_ZERO_INIT) :> .
_ROM_OS_OsApplication_ASIL_VAR_NOCACHE_ZERO_INIT_START = ADDR(.ROM_OS_OsApplication_ASIL_VAR_NOCACHE_ZERO_INIT);
_ROM_OS_OsApplication_ASIL_VAR_NOCACHE_ZERO_INIT_END = ENDADDR(.ROM_OS_OsApplication_ASIL_VAR_NOCACHE_ZERO_INIT);

.ROM_OS_OsApplication_ASIL_VAR_FAST_NOCACHE ROM(.OS_OsApplication_ASIL_VAR_FAST_NOCACHE) :> .
_ROM_OS_OsApplication_ASIL_VAR_FAST_NOCACHE_START = ADDR(.ROM_OS_OsApplication_ASIL_VAR_FAST_NOCACHE);
_ROM_OS_OsApplication_ASIL_VAR_FAST_NOCACHE_END = ENDADDR(.ROM_OS_OsApplication_ASIL_VAR_FAST_NOCACHE);

.ROM_OS_OsApplication_ASIL_VAR_FAST_NOCACHE_ZERO_INIT ROM(.OS_OsApplication_ASIL_VAR_FAST_NOCACHE_ZERO_INIT) :> .
_ROM_OS_OsApplication_ASIL_VAR_FAST_NOCACHE_ZERO_INIT_START = ADDR(.ROM_OS_OsApplication_ASIL_VAR_FAST_NOCACHE_ZERO_INIT);
_ROM_OS_OsApplication_ASIL_VAR_FAST_NOCACHE_ZERO_INIT_END = ENDADDR(.ROM_OS_OsApplication_ASIL_VAR_FAST_NOCACHE_ZERO_INIT);
#endif

#ifdef OS_LINK_CONST_APP_OSAPPLICATION_ASIL
# undef OS_LINK_CONST_APP_OSAPPLICATION_ASIL
#endif

#ifdef OS_LINK_CONST_APP_OSAPPLICATION_ASIL_FAR
# undef OS_LINK_CONST_APP_OSAPPLICATION_ASIL_FAR
#endif

#ifdef OS_LINK_CONST_APP_OSAPPLICATION_ASIL_NEAR
# undef OS_LINK_CONST_APP_OSAPPLICATION_ASIL_NEAR
#endif

#ifdef OS_LINK_CONST_APP_OSAPPLICATION_ASIL_INIT
# undef OS_LINK_CONST_APP_OSAPPLICATION_ASIL_INIT
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_APP ) || defined ( OS_LINK_CONST_APP_OSAPPLICATION_QM ) || defined ( OS_LINK_CONST_APP_OSAPPLICATION_QM_FAR )
.OS_OsApplication_QM_CONST ALIGN(4) :> .
_OS_OsApplication_QM_CONST_START = ADDR(.OS_OsApplication_QM_CONST);
_OS_OsApplication_QM_CONST_END = ENDADDR(.OS_OsApplication_QM_CONST) - 1;
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_APP ) || defined ( OS_LINK_CONST_APP_OSAPPLICATION_QM ) || defined ( OS_LINK_CONST_APP_OSAPPLICATION_QM_NEAR )
.OS_OsApplication_QM_CONST_FAST ALIGN(4) :> .
_OS_OsApplication_QM_CONST_FAST_START = ADDR(.OS_OsApplication_QM_CONST_FAST);
_OS_OsApplication_QM_CONST_FAST_END = ENDADDR(.OS_OsApplication_QM_CONST_FAST) - 1;
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_APP ) || defined ( OS_LINK_CONST_APP_OSAPPLICATION_QM ) || defined ( OS_LINK_CONST_APP_OSAPPLICATION_QM_INIT )

.ROM_OS_OsApplication_QM_VAR ROM(.OS_OsApplication_QM_VAR) :> .
_ROM_OS_OsApplication_QM_VAR_START = ADDR(.ROM_OS_OsApplication_QM_VAR);
_ROM_OS_OsApplication_QM_VAR_END = ENDADDR(.ROM_OS_OsApplication_QM_VAR);

.ROM_OS_OsApplication_QM_VAR_ZERO_INIT ROM(.OS_OsApplication_QM_VAR_ZERO_INIT) :> .
_ROM_OS_OsApplication_QM_VAR_ZERO_INIT_START = ADDR(.ROM_OS_OsApplication_QM_VAR_ZERO_INIT);
_ROM_OS_OsApplication_QM_VAR_ZERO_INIT_END = ENDADDR(.ROM_OS_OsApplication_QM_VAR_ZERO_INIT);

.ROM_OS_OsApplication_QM_VAR_FAST ROM(.OS_OsApplication_QM_VAR_FAST) :> .
_ROM_OS_OsApplication_QM_VAR_FAST_START = ADDR(.ROM_OS_OsApplication_QM_VAR_FAST);
_ROM_OS_OsApplication_QM_VAR_FAST_END = ENDADDR(.ROM_OS_OsApplication_QM_VAR_FAST);

.ROM_OS_OsApplication_QM_VAR_FAST_ZERO_INIT ROM(.OS_OsApplication_QM_VAR_FAST_ZERO_INIT) :> .
_ROM_OS_OsApplication_QM_VAR_FAST_ZERO_INIT_START = ADDR(.ROM_OS_OsApplication_QM_VAR_FAST_ZERO_INIT);
_ROM_OS_OsApplication_QM_VAR_FAST_ZERO_INIT_END = ENDADDR(.ROM_OS_OsApplication_QM_VAR_FAST_ZERO_INIT);

.ROM_OS_OsApplication_QM_VAR_NOCACHE ROM(.OS_OsApplication_QM_VAR_NOCACHE) :> .
_ROM_OS_OsApplication_QM_VAR_NOCACHE_START = ADDR(.ROM_OS_OsApplication_QM_VAR_NOCACHE);
_ROM_OS_OsApplication_QM_VAR_NOCACHE_END = ENDADDR(.ROM_OS_OsApplication_QM_VAR_NOCACHE);

.ROM_OS_OsApplication_QM_VAR_NOCACHE_ZERO_INIT ROM(.OS_OsApplication_QM_VAR_NOCACHE_ZERO_INIT) :> .
_ROM_OS_OsApplication_QM_VAR_NOCACHE_ZERO_INIT_START = ADDR(.ROM_OS_OsApplication_QM_VAR_NOCACHE_ZERO_INIT);
_ROM_OS_OsApplication_QM_VAR_NOCACHE_ZERO_INIT_END = ENDADDR(.ROM_OS_OsApplication_QM_VAR_NOCACHE_ZERO_INIT);

.ROM_OS_OsApplication_QM_VAR_FAST_NOCACHE ROM(.OS_OsApplication_QM_VAR_FAST_NOCACHE) :> .
_ROM_OS_OsApplication_QM_VAR_FAST_NOCACHE_START = ADDR(.ROM_OS_OsApplication_QM_VAR_FAST_NOCACHE);
_ROM_OS_OsApplication_QM_VAR_FAST_NOCACHE_END = ENDADDR(.ROM_OS_OsApplication_QM_VAR_FAST_NOCACHE);

.ROM_OS_OsApplication_QM_VAR_FAST_NOCACHE_ZERO_INIT ROM(.OS_OsApplication_QM_VAR_FAST_NOCACHE_ZERO_INIT) :> .
_ROM_OS_OsApplication_QM_VAR_FAST_NOCACHE_ZERO_INIT_START = ADDR(.ROM_OS_OsApplication_QM_VAR_FAST_NOCACHE_ZERO_INIT);
_ROM_OS_OsApplication_QM_VAR_FAST_NOCACHE_ZERO_INIT_END = ENDADDR(.ROM_OS_OsApplication_QM_VAR_FAST_NOCACHE_ZERO_INIT);
#endif

#ifdef OS_LINK_CONST_APP_OSAPPLICATION_QM
# undef OS_LINK_CONST_APP_OSAPPLICATION_QM
#endif

#ifdef OS_LINK_CONST_APP_OSAPPLICATION_QM_FAR
# undef OS_LINK_CONST_APP_OSAPPLICATION_QM_FAR
#endif

#ifdef OS_LINK_CONST_APP_OSAPPLICATION_QM_NEAR
# undef OS_LINK_CONST_APP_OSAPPLICATION_QM_NEAR
#endif

#ifdef OS_LINK_CONST_APP_OSAPPLICATION_QM_INIT
# undef OS_LINK_CONST_APP_OSAPPLICATION_QM_INIT
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



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_DEFAULT_APPL_INIT_TASK ) || defined ( OS_LINK_CONST_TASK_DEFAULT_APPL_INIT_TASK_FAR )
.OS_Default_Appl_Init_Task_CONST ALIGN(4) :> .
_OS_Default_Appl_Init_Task_CONST_START = ADDR(.OS_Default_Appl_Init_Task_CONST);
_OS_Default_Appl_Init_Task_CONST_END = ENDADDR(.OS_Default_Appl_Init_Task_CONST) - 1;
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_DEFAULT_APPL_INIT_TASK ) || defined ( OS_LINK_CONST_TASK_DEFAULT_APPL_INIT_TASK_NEAR )
.OS_Default_Appl_Init_Task_CONST_FAST ALIGN(4) :> .
_OS_Default_Appl_Init_Task_CONST_FAST_START = ADDR(.OS_Default_Appl_Init_Task_CONST_FAST);
_OS_Default_Appl_Init_Task_CONST_FAST_END = ENDADDR(.OS_Default_Appl_Init_Task_CONST_FAST) - 1;
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_DEFAULT_APPL_INIT_TASK ) || defined ( OS_LINK_CONST_TASK_DEFAULT_APPL_INIT_TASK_INIT )

.ROM_OS_Default_Appl_Init_Task_VAR ROM(.OS_Default_Appl_Init_Task_VAR) :> .
_ROM_OS_Default_Appl_Init_Task_VAR_START = ADDR(.ROM_OS_Default_Appl_Init_Task_VAR);
_ROM_OS_Default_Appl_Init_Task_VAR_END = ENDADDR(.ROM_OS_Default_Appl_Init_Task_VAR);

.ROM_OS_Default_Appl_Init_Task_VAR_NOINIT ROM(.OS_Default_Appl_Init_Task_VAR_NOINIT) :> .
_ROM_OS_Default_Appl_Init_Task_VAR_NOINIT_START = ADDR(.ROM_OS_Default_Appl_Init_Task_VAR_NOINIT);
_ROM_OS_Default_Appl_Init_Task_VAR_NOINIT_END = ENDADDR(.ROM_OS_Default_Appl_Init_Task_VAR_NOINIT);

.ROM_OS_Default_Appl_Init_Task_VAR_ZERO_INIT ROM(.OS_Default_Appl_Init_Task_VAR_ZERO_INIT) :> .
_ROM_OS_Default_Appl_Init_Task_VAR_ZERO_INIT_START = ADDR(.ROM_OS_Default_Appl_Init_Task_VAR_ZERO_INIT);
_ROM_OS_Default_Appl_Init_Task_VAR_ZERO_INIT_END = ENDADDR(.ROM_OS_Default_Appl_Init_Task_VAR_ZERO_INIT);

.ROM_OS_Default_Appl_Init_Task_VAR_FAST ROM(.OS_Default_Appl_Init_Task_VAR_FAST) :> .
_ROM_OS_Default_Appl_Init_Task_VAR_FAST_START = ADDR(.ROM_OS_Default_Appl_Init_Task_VAR_FAST);
_ROM_OS_Default_Appl_Init_Task_VAR_FAST_END = ENDADDR(.ROM_OS_Default_Appl_Init_Task_VAR_FAST);

.ROM_OS_Default_Appl_Init_Task_VAR_FAST_NOINIT ROM(.OS_Default_Appl_Init_Task_VAR_FAST_NOINIT) :> .
_ROM_OS_Default_Appl_Init_Task_VAR_FAST_NOINIT_START = ADDR(.ROM_OS_Default_Appl_Init_Task_VAR_FAST_NOINIT);
_ROM_OS_Default_Appl_Init_Task_VAR_FAST_NOINIT_END = ENDADDR(.ROM_OS_Default_Appl_Init_Task_VAR_FAST_NOINIT);

.ROM_OS_Default_Appl_Init_Task_VAR_FAST_ZERO_INIT ROM(.OS_Default_Appl_Init_Task_VAR_FAST_ZERO_INIT) :> .
_ROM_OS_Default_Appl_Init_Task_VAR_FAST_ZERO_INIT_START = ADDR(.ROM_OS_Default_Appl_Init_Task_VAR_FAST_ZERO_INIT);
_ROM_OS_Default_Appl_Init_Task_VAR_FAST_ZERO_INIT_END = ENDADDR(.ROM_OS_Default_Appl_Init_Task_VAR_FAST_ZERO_INIT);

#endif

#ifdef OS_LINK_CONST_TASK_DEFAULT_APPL_INIT_TASK
# undef OS_LINK_CONST_TASK_DEFAULT_APPL_INIT_TASK
#endif

#ifdef OS_LINK_CONST_TASK_DEFAULT_APPL_INIT_TASK_FAR
# undef OS_LINK_CONST_TASK_DEFAULT_APPL_INIT_TASK_FAR
#endif

#ifdef OS_LINK_CONST_TASK_DEFAULT_APPL_INIT_TASK_NEAR
# undef OS_LINK_CONST_TASK_DEFAULT_APPL_INIT_TASK_NEAR
#endif

#ifdef OS_LINK_CONST_TASK_DEFAULT_APPL_INIT_TASK_INIT
# undef OS_LINK_CONST_TASK_DEFAULT_APPL_INIT_TASK_INIT
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_DEFAULT_APPL_TASK ) || defined ( OS_LINK_CONST_TASK_DEFAULT_APPL_TASK_FAR )
.OS_Default_Appl_Task_CONST ALIGN(4) :> .
_OS_Default_Appl_Task_CONST_START = ADDR(.OS_Default_Appl_Task_CONST);
_OS_Default_Appl_Task_CONST_END = ENDADDR(.OS_Default_Appl_Task_CONST) - 1;
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_DEFAULT_APPL_TASK ) || defined ( OS_LINK_CONST_TASK_DEFAULT_APPL_TASK_NEAR )
.OS_Default_Appl_Task_CONST_FAST ALIGN(4) :> .
_OS_Default_Appl_Task_CONST_FAST_START = ADDR(.OS_Default_Appl_Task_CONST_FAST);
_OS_Default_Appl_Task_CONST_FAST_END = ENDADDR(.OS_Default_Appl_Task_CONST_FAST) - 1;
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_DEFAULT_APPL_TASK ) || defined ( OS_LINK_CONST_TASK_DEFAULT_APPL_TASK_INIT )

.ROM_OS_Default_Appl_Task_VAR ROM(.OS_Default_Appl_Task_VAR) :> .
_ROM_OS_Default_Appl_Task_VAR_START = ADDR(.ROM_OS_Default_Appl_Task_VAR);
_ROM_OS_Default_Appl_Task_VAR_END = ENDADDR(.ROM_OS_Default_Appl_Task_VAR);

.ROM_OS_Default_Appl_Task_VAR_NOINIT ROM(.OS_Default_Appl_Task_VAR_NOINIT) :> .
_ROM_OS_Default_Appl_Task_VAR_NOINIT_START = ADDR(.ROM_OS_Default_Appl_Task_VAR_NOINIT);
_ROM_OS_Default_Appl_Task_VAR_NOINIT_END = ENDADDR(.ROM_OS_Default_Appl_Task_VAR_NOINIT);

.ROM_OS_Default_Appl_Task_VAR_ZERO_INIT ROM(.OS_Default_Appl_Task_VAR_ZERO_INIT) :> .
_ROM_OS_Default_Appl_Task_VAR_ZERO_INIT_START = ADDR(.ROM_OS_Default_Appl_Task_VAR_ZERO_INIT);
_ROM_OS_Default_Appl_Task_VAR_ZERO_INIT_END = ENDADDR(.ROM_OS_Default_Appl_Task_VAR_ZERO_INIT);

.ROM_OS_Default_Appl_Task_VAR_FAST ROM(.OS_Default_Appl_Task_VAR_FAST) :> .
_ROM_OS_Default_Appl_Task_VAR_FAST_START = ADDR(.ROM_OS_Default_Appl_Task_VAR_FAST);
_ROM_OS_Default_Appl_Task_VAR_FAST_END = ENDADDR(.ROM_OS_Default_Appl_Task_VAR_FAST);

.ROM_OS_Default_Appl_Task_VAR_FAST_NOINIT ROM(.OS_Default_Appl_Task_VAR_FAST_NOINIT) :> .
_ROM_OS_Default_Appl_Task_VAR_FAST_NOINIT_START = ADDR(.ROM_OS_Default_Appl_Task_VAR_FAST_NOINIT);
_ROM_OS_Default_Appl_Task_VAR_FAST_NOINIT_END = ENDADDR(.ROM_OS_Default_Appl_Task_VAR_FAST_NOINIT);

.ROM_OS_Default_Appl_Task_VAR_FAST_ZERO_INIT ROM(.OS_Default_Appl_Task_VAR_FAST_ZERO_INIT) :> .
_ROM_OS_Default_Appl_Task_VAR_FAST_ZERO_INIT_START = ADDR(.ROM_OS_Default_Appl_Task_VAR_FAST_ZERO_INIT);
_ROM_OS_Default_Appl_Task_VAR_FAST_ZERO_INIT_END = ENDADDR(.ROM_OS_Default_Appl_Task_VAR_FAST_ZERO_INIT);

#endif

#ifdef OS_LINK_CONST_TASK_DEFAULT_APPL_TASK
# undef OS_LINK_CONST_TASK_DEFAULT_APPL_TASK
#endif

#ifdef OS_LINK_CONST_TASK_DEFAULT_APPL_TASK_FAR
# undef OS_LINK_CONST_TASK_DEFAULT_APPL_TASK_FAR
#endif

#ifdef OS_LINK_CONST_TASK_DEFAULT_APPL_TASK_NEAR
# undef OS_LINK_CONST_TASK_DEFAULT_APPL_TASK_NEAR
#endif

#ifdef OS_LINK_CONST_TASK_DEFAULT_APPL_TASK_INIT
# undef OS_LINK_CONST_TASK_DEFAULT_APPL_TASK_INIT
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_DEFAULT_BAC_APPL_BMW_TASK ) || defined ( OS_LINK_CONST_TASK_DEFAULT_BAC_APPL_BMW_TASK_FAR )
.OS_Default_BAC_Appl_BMW_Task_CONST ALIGN(4) :> .
_OS_Default_BAC_Appl_BMW_Task_CONST_START = ADDR(.OS_Default_BAC_Appl_BMW_Task_CONST);
_OS_Default_BAC_Appl_BMW_Task_CONST_END = ENDADDR(.OS_Default_BAC_Appl_BMW_Task_CONST) - 1;
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_DEFAULT_BAC_APPL_BMW_TASK ) || defined ( OS_LINK_CONST_TASK_DEFAULT_BAC_APPL_BMW_TASK_NEAR )
.OS_Default_BAC_Appl_BMW_Task_CONST_FAST ALIGN(4) :> .
_OS_Default_BAC_Appl_BMW_Task_CONST_FAST_START = ADDR(.OS_Default_BAC_Appl_BMW_Task_CONST_FAST);
_OS_Default_BAC_Appl_BMW_Task_CONST_FAST_END = ENDADDR(.OS_Default_BAC_Appl_BMW_Task_CONST_FAST) - 1;
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_DEFAULT_BAC_APPL_BMW_TASK ) || defined ( OS_LINK_CONST_TASK_DEFAULT_BAC_APPL_BMW_TASK_INIT )

.ROM_OS_Default_BAC_Appl_BMW_Task_VAR ROM(.OS_Default_BAC_Appl_BMW_Task_VAR) :> .
_ROM_OS_Default_BAC_Appl_BMW_Task_VAR_START = ADDR(.ROM_OS_Default_BAC_Appl_BMW_Task_VAR);
_ROM_OS_Default_BAC_Appl_BMW_Task_VAR_END = ENDADDR(.ROM_OS_Default_BAC_Appl_BMW_Task_VAR);

.ROM_OS_Default_BAC_Appl_BMW_Task_VAR_NOINIT ROM(.OS_Default_BAC_Appl_BMW_Task_VAR_NOINIT) :> .
_ROM_OS_Default_BAC_Appl_BMW_Task_VAR_NOINIT_START = ADDR(.ROM_OS_Default_BAC_Appl_BMW_Task_VAR_NOINIT);
_ROM_OS_Default_BAC_Appl_BMW_Task_VAR_NOINIT_END = ENDADDR(.ROM_OS_Default_BAC_Appl_BMW_Task_VAR_NOINIT);

.ROM_OS_Default_BAC_Appl_BMW_Task_VAR_ZERO_INIT ROM(.OS_Default_BAC_Appl_BMW_Task_VAR_ZERO_INIT) :> .
_ROM_OS_Default_BAC_Appl_BMW_Task_VAR_ZERO_INIT_START = ADDR(.ROM_OS_Default_BAC_Appl_BMW_Task_VAR_ZERO_INIT);
_ROM_OS_Default_BAC_Appl_BMW_Task_VAR_ZERO_INIT_END = ENDADDR(.ROM_OS_Default_BAC_Appl_BMW_Task_VAR_ZERO_INIT);

.ROM_OS_Default_BAC_Appl_BMW_Task_VAR_FAST ROM(.OS_Default_BAC_Appl_BMW_Task_VAR_FAST) :> .
_ROM_OS_Default_BAC_Appl_BMW_Task_VAR_FAST_START = ADDR(.ROM_OS_Default_BAC_Appl_BMW_Task_VAR_FAST);
_ROM_OS_Default_BAC_Appl_BMW_Task_VAR_FAST_END = ENDADDR(.ROM_OS_Default_BAC_Appl_BMW_Task_VAR_FAST);

.ROM_OS_Default_BAC_Appl_BMW_Task_VAR_FAST_NOINIT ROM(.OS_Default_BAC_Appl_BMW_Task_VAR_FAST_NOINIT) :> .
_ROM_OS_Default_BAC_Appl_BMW_Task_VAR_FAST_NOINIT_START = ADDR(.ROM_OS_Default_BAC_Appl_BMW_Task_VAR_FAST_NOINIT);
_ROM_OS_Default_BAC_Appl_BMW_Task_VAR_FAST_NOINIT_END = ENDADDR(.ROM_OS_Default_BAC_Appl_BMW_Task_VAR_FAST_NOINIT);

.ROM_OS_Default_BAC_Appl_BMW_Task_VAR_FAST_ZERO_INIT ROM(.OS_Default_BAC_Appl_BMW_Task_VAR_FAST_ZERO_INIT) :> .
_ROM_OS_Default_BAC_Appl_BMW_Task_VAR_FAST_ZERO_INIT_START = ADDR(.ROM_OS_Default_BAC_Appl_BMW_Task_VAR_FAST_ZERO_INIT);
_ROM_OS_Default_BAC_Appl_BMW_Task_VAR_FAST_ZERO_INIT_END = ENDADDR(.ROM_OS_Default_BAC_Appl_BMW_Task_VAR_FAST_ZERO_INIT);

#endif

#ifdef OS_LINK_CONST_TASK_DEFAULT_BAC_APPL_BMW_TASK
# undef OS_LINK_CONST_TASK_DEFAULT_BAC_APPL_BMW_TASK
#endif

#ifdef OS_LINK_CONST_TASK_DEFAULT_BAC_APPL_BMW_TASK_FAR
# undef OS_LINK_CONST_TASK_DEFAULT_BAC_APPL_BMW_TASK_FAR
#endif

#ifdef OS_LINK_CONST_TASK_DEFAULT_BAC_APPL_BMW_TASK_NEAR
# undef OS_LINK_CONST_TASK_DEFAULT_BAC_APPL_BMW_TASK_NEAR
#endif

#ifdef OS_LINK_CONST_TASK_DEFAULT_BAC_APPL_BMW_TASK_INIT
# undef OS_LINK_CONST_TASK_DEFAULT_BAC_APPL_BMW_TASK_INIT
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_DEFAULT_BSW_SYNC_TASK ) || defined ( OS_LINK_CONST_TASK_DEFAULT_BSW_SYNC_TASK_FAR )
.OS_Default_BSW_Sync_Task_CONST ALIGN(4) :> .
_OS_Default_BSW_Sync_Task_CONST_START = ADDR(.OS_Default_BSW_Sync_Task_CONST);
_OS_Default_BSW_Sync_Task_CONST_END = ENDADDR(.OS_Default_BSW_Sync_Task_CONST) - 1;
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_DEFAULT_BSW_SYNC_TASK ) || defined ( OS_LINK_CONST_TASK_DEFAULT_BSW_SYNC_TASK_NEAR )
.OS_Default_BSW_Sync_Task_CONST_FAST ALIGN(4) :> .
_OS_Default_BSW_Sync_Task_CONST_FAST_START = ADDR(.OS_Default_BSW_Sync_Task_CONST_FAST);
_OS_Default_BSW_Sync_Task_CONST_FAST_END = ENDADDR(.OS_Default_BSW_Sync_Task_CONST_FAST) - 1;
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_DEFAULT_BSW_SYNC_TASK ) || defined ( OS_LINK_CONST_TASK_DEFAULT_BSW_SYNC_TASK_INIT )

.ROM_OS_Default_BSW_Sync_Task_VAR ROM(.OS_Default_BSW_Sync_Task_VAR) :> .
_ROM_OS_Default_BSW_Sync_Task_VAR_START = ADDR(.ROM_OS_Default_BSW_Sync_Task_VAR);
_ROM_OS_Default_BSW_Sync_Task_VAR_END = ENDADDR(.ROM_OS_Default_BSW_Sync_Task_VAR);

.ROM_OS_Default_BSW_Sync_Task_VAR_NOINIT ROM(.OS_Default_BSW_Sync_Task_VAR_NOINIT) :> .
_ROM_OS_Default_BSW_Sync_Task_VAR_NOINIT_START = ADDR(.ROM_OS_Default_BSW_Sync_Task_VAR_NOINIT);
_ROM_OS_Default_BSW_Sync_Task_VAR_NOINIT_END = ENDADDR(.ROM_OS_Default_BSW_Sync_Task_VAR_NOINIT);

.ROM_OS_Default_BSW_Sync_Task_VAR_ZERO_INIT ROM(.OS_Default_BSW_Sync_Task_VAR_ZERO_INIT) :> .
_ROM_OS_Default_BSW_Sync_Task_VAR_ZERO_INIT_START = ADDR(.ROM_OS_Default_BSW_Sync_Task_VAR_ZERO_INIT);
_ROM_OS_Default_BSW_Sync_Task_VAR_ZERO_INIT_END = ENDADDR(.ROM_OS_Default_BSW_Sync_Task_VAR_ZERO_INIT);

.ROM_OS_Default_BSW_Sync_Task_VAR_FAST ROM(.OS_Default_BSW_Sync_Task_VAR_FAST) :> .
_ROM_OS_Default_BSW_Sync_Task_VAR_FAST_START = ADDR(.ROM_OS_Default_BSW_Sync_Task_VAR_FAST);
_ROM_OS_Default_BSW_Sync_Task_VAR_FAST_END = ENDADDR(.ROM_OS_Default_BSW_Sync_Task_VAR_FAST);

.ROM_OS_Default_BSW_Sync_Task_VAR_FAST_NOINIT ROM(.OS_Default_BSW_Sync_Task_VAR_FAST_NOINIT) :> .
_ROM_OS_Default_BSW_Sync_Task_VAR_FAST_NOINIT_START = ADDR(.ROM_OS_Default_BSW_Sync_Task_VAR_FAST_NOINIT);
_ROM_OS_Default_BSW_Sync_Task_VAR_FAST_NOINIT_END = ENDADDR(.ROM_OS_Default_BSW_Sync_Task_VAR_FAST_NOINIT);

.ROM_OS_Default_BSW_Sync_Task_VAR_FAST_ZERO_INIT ROM(.OS_Default_BSW_Sync_Task_VAR_FAST_ZERO_INIT) :> .
_ROM_OS_Default_BSW_Sync_Task_VAR_FAST_ZERO_INIT_START = ADDR(.ROM_OS_Default_BSW_Sync_Task_VAR_FAST_ZERO_INIT);
_ROM_OS_Default_BSW_Sync_Task_VAR_FAST_ZERO_INIT_END = ENDADDR(.ROM_OS_Default_BSW_Sync_Task_VAR_FAST_ZERO_INIT);

#endif

#ifdef OS_LINK_CONST_TASK_DEFAULT_BSW_SYNC_TASK
# undef OS_LINK_CONST_TASK_DEFAULT_BSW_SYNC_TASK
#endif

#ifdef OS_LINK_CONST_TASK_DEFAULT_BSW_SYNC_TASK_FAR
# undef OS_LINK_CONST_TASK_DEFAULT_BSW_SYNC_TASK_FAR
#endif

#ifdef OS_LINK_CONST_TASK_DEFAULT_BSW_SYNC_TASK_NEAR
# undef OS_LINK_CONST_TASK_DEFAULT_BSW_SYNC_TASK_NEAR
#endif

#ifdef OS_LINK_CONST_TASK_DEFAULT_BSW_SYNC_TASK_INIT
# undef OS_LINK_CONST_TASK_DEFAULT_BSW_SYNC_TASK_INIT
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_DEFAULT_BACKGROUND_TASK ) || defined ( OS_LINK_CONST_TASK_DEFAULT_BACKGROUND_TASK_FAR )
.OS_Default_Background_Task_CONST ALIGN(4) :> .
_OS_Default_Background_Task_CONST_START = ADDR(.OS_Default_Background_Task_CONST);
_OS_Default_Background_Task_CONST_END = ENDADDR(.OS_Default_Background_Task_CONST) - 1;
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_DEFAULT_BACKGROUND_TASK ) || defined ( OS_LINK_CONST_TASK_DEFAULT_BACKGROUND_TASK_NEAR )
.OS_Default_Background_Task_CONST_FAST ALIGN(4) :> .
_OS_Default_Background_Task_CONST_FAST_START = ADDR(.OS_Default_Background_Task_CONST_FAST);
_OS_Default_Background_Task_CONST_FAST_END = ENDADDR(.OS_Default_Background_Task_CONST_FAST) - 1;
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_DEFAULT_BACKGROUND_TASK ) || defined ( OS_LINK_CONST_TASK_DEFAULT_BACKGROUND_TASK_INIT )

.ROM_OS_Default_Background_Task_VAR ROM(.OS_Default_Background_Task_VAR) :> .
_ROM_OS_Default_Background_Task_VAR_START = ADDR(.ROM_OS_Default_Background_Task_VAR);
_ROM_OS_Default_Background_Task_VAR_END = ENDADDR(.ROM_OS_Default_Background_Task_VAR);

.ROM_OS_Default_Background_Task_VAR_NOINIT ROM(.OS_Default_Background_Task_VAR_NOINIT) :> .
_ROM_OS_Default_Background_Task_VAR_NOINIT_START = ADDR(.ROM_OS_Default_Background_Task_VAR_NOINIT);
_ROM_OS_Default_Background_Task_VAR_NOINIT_END = ENDADDR(.ROM_OS_Default_Background_Task_VAR_NOINIT);

.ROM_OS_Default_Background_Task_VAR_ZERO_INIT ROM(.OS_Default_Background_Task_VAR_ZERO_INIT) :> .
_ROM_OS_Default_Background_Task_VAR_ZERO_INIT_START = ADDR(.ROM_OS_Default_Background_Task_VAR_ZERO_INIT);
_ROM_OS_Default_Background_Task_VAR_ZERO_INIT_END = ENDADDR(.ROM_OS_Default_Background_Task_VAR_ZERO_INIT);

.ROM_OS_Default_Background_Task_VAR_FAST ROM(.OS_Default_Background_Task_VAR_FAST) :> .
_ROM_OS_Default_Background_Task_VAR_FAST_START = ADDR(.ROM_OS_Default_Background_Task_VAR_FAST);
_ROM_OS_Default_Background_Task_VAR_FAST_END = ENDADDR(.ROM_OS_Default_Background_Task_VAR_FAST);

.ROM_OS_Default_Background_Task_VAR_FAST_NOINIT ROM(.OS_Default_Background_Task_VAR_FAST_NOINIT) :> .
_ROM_OS_Default_Background_Task_VAR_FAST_NOINIT_START = ADDR(.ROM_OS_Default_Background_Task_VAR_FAST_NOINIT);
_ROM_OS_Default_Background_Task_VAR_FAST_NOINIT_END = ENDADDR(.ROM_OS_Default_Background_Task_VAR_FAST_NOINIT);

.ROM_OS_Default_Background_Task_VAR_FAST_ZERO_INIT ROM(.OS_Default_Background_Task_VAR_FAST_ZERO_INIT) :> .
_ROM_OS_Default_Background_Task_VAR_FAST_ZERO_INIT_START = ADDR(.ROM_OS_Default_Background_Task_VAR_FAST_ZERO_INIT);
_ROM_OS_Default_Background_Task_VAR_FAST_ZERO_INIT_END = ENDADDR(.ROM_OS_Default_Background_Task_VAR_FAST_ZERO_INIT);

#endif

#ifdef OS_LINK_CONST_TASK_DEFAULT_BACKGROUND_TASK
# undef OS_LINK_CONST_TASK_DEFAULT_BACKGROUND_TASK
#endif

#ifdef OS_LINK_CONST_TASK_DEFAULT_BACKGROUND_TASK_FAR
# undef OS_LINK_CONST_TASK_DEFAULT_BACKGROUND_TASK_FAR
#endif

#ifdef OS_LINK_CONST_TASK_DEFAULT_BACKGROUND_TASK_NEAR
# undef OS_LINK_CONST_TASK_DEFAULT_BACKGROUND_TASK_NEAR
#endif

#ifdef OS_LINK_CONST_TASK_DEFAULT_BACKGROUND_TASK_INIT
# undef OS_LINK_CONST_TASK_DEFAULT_BACKGROUND_TASK_INIT
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_DEFAULT_INIT_TASK ) || defined ( OS_LINK_CONST_TASK_DEFAULT_INIT_TASK_FAR )
.OS_Default_Init_Task_CONST ALIGN(4) :> .
_OS_Default_Init_Task_CONST_START = ADDR(.OS_Default_Init_Task_CONST);
_OS_Default_Init_Task_CONST_END = ENDADDR(.OS_Default_Init_Task_CONST) - 1;
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_DEFAULT_INIT_TASK ) || defined ( OS_LINK_CONST_TASK_DEFAULT_INIT_TASK_NEAR )
.OS_Default_Init_Task_CONST_FAST ALIGN(4) :> .
_OS_Default_Init_Task_CONST_FAST_START = ADDR(.OS_Default_Init_Task_CONST_FAST);
_OS_Default_Init_Task_CONST_FAST_END = ENDADDR(.OS_Default_Init_Task_CONST_FAST) - 1;
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_DEFAULT_INIT_TASK ) || defined ( OS_LINK_CONST_TASK_DEFAULT_INIT_TASK_INIT )

.ROM_OS_Default_Init_Task_VAR ROM(.OS_Default_Init_Task_VAR) :> .
_ROM_OS_Default_Init_Task_VAR_START = ADDR(.ROM_OS_Default_Init_Task_VAR);
_ROM_OS_Default_Init_Task_VAR_END = ENDADDR(.ROM_OS_Default_Init_Task_VAR);

.ROM_OS_Default_Init_Task_VAR_NOINIT ROM(.OS_Default_Init_Task_VAR_NOINIT) :> .
_ROM_OS_Default_Init_Task_VAR_NOINIT_START = ADDR(.ROM_OS_Default_Init_Task_VAR_NOINIT);
_ROM_OS_Default_Init_Task_VAR_NOINIT_END = ENDADDR(.ROM_OS_Default_Init_Task_VAR_NOINIT);

.ROM_OS_Default_Init_Task_VAR_ZERO_INIT ROM(.OS_Default_Init_Task_VAR_ZERO_INIT) :> .
_ROM_OS_Default_Init_Task_VAR_ZERO_INIT_START = ADDR(.ROM_OS_Default_Init_Task_VAR_ZERO_INIT);
_ROM_OS_Default_Init_Task_VAR_ZERO_INIT_END = ENDADDR(.ROM_OS_Default_Init_Task_VAR_ZERO_INIT);

.ROM_OS_Default_Init_Task_VAR_FAST ROM(.OS_Default_Init_Task_VAR_FAST) :> .
_ROM_OS_Default_Init_Task_VAR_FAST_START = ADDR(.ROM_OS_Default_Init_Task_VAR_FAST);
_ROM_OS_Default_Init_Task_VAR_FAST_END = ENDADDR(.ROM_OS_Default_Init_Task_VAR_FAST);

.ROM_OS_Default_Init_Task_VAR_FAST_NOINIT ROM(.OS_Default_Init_Task_VAR_FAST_NOINIT) :> .
_ROM_OS_Default_Init_Task_VAR_FAST_NOINIT_START = ADDR(.ROM_OS_Default_Init_Task_VAR_FAST_NOINIT);
_ROM_OS_Default_Init_Task_VAR_FAST_NOINIT_END = ENDADDR(.ROM_OS_Default_Init_Task_VAR_FAST_NOINIT);

.ROM_OS_Default_Init_Task_VAR_FAST_ZERO_INIT ROM(.OS_Default_Init_Task_VAR_FAST_ZERO_INIT) :> .
_ROM_OS_Default_Init_Task_VAR_FAST_ZERO_INIT_START = ADDR(.ROM_OS_Default_Init_Task_VAR_FAST_ZERO_INIT);
_ROM_OS_Default_Init_Task_VAR_FAST_ZERO_INIT_END = ENDADDR(.ROM_OS_Default_Init_Task_VAR_FAST_ZERO_INIT);

#endif

#ifdef OS_LINK_CONST_TASK_DEFAULT_INIT_TASK
# undef OS_LINK_CONST_TASK_DEFAULT_INIT_TASK
#endif

#ifdef OS_LINK_CONST_TASK_DEFAULT_INIT_TASK_FAR
# undef OS_LINK_CONST_TASK_DEFAULT_INIT_TASK_FAR
#endif

#ifdef OS_LINK_CONST_TASK_DEFAULT_INIT_TASK_NEAR
# undef OS_LINK_CONST_TASK_DEFAULT_INIT_TASK_NEAR
#endif

#ifdef OS_LINK_CONST_TASK_DEFAULT_INIT_TASK_INIT
# undef OS_LINK_CONST_TASK_DEFAULT_INIT_TASK_INIT
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_DEFAULT_RTE_MODE_SWITCH_TASK ) || defined ( OS_LINK_CONST_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_FAR )
.OS_Default_RTE_Mode_switch_Task_CONST ALIGN(4) :> .
_OS_Default_RTE_Mode_switch_Task_CONST_START = ADDR(.OS_Default_RTE_Mode_switch_Task_CONST);
_OS_Default_RTE_Mode_switch_Task_CONST_END = ENDADDR(.OS_Default_RTE_Mode_switch_Task_CONST) - 1;
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_DEFAULT_RTE_MODE_SWITCH_TASK ) || defined ( OS_LINK_CONST_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_NEAR )
.OS_Default_RTE_Mode_switch_Task_CONST_FAST ALIGN(4) :> .
_OS_Default_RTE_Mode_switch_Task_CONST_FAST_START = ADDR(.OS_Default_RTE_Mode_switch_Task_CONST_FAST);
_OS_Default_RTE_Mode_switch_Task_CONST_FAST_END = ENDADDR(.OS_Default_RTE_Mode_switch_Task_CONST_FAST) - 1;
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_DEFAULT_RTE_MODE_SWITCH_TASK ) || defined ( OS_LINK_CONST_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_INIT )

.ROM_OS_Default_RTE_Mode_switch_Task_VAR ROM(.OS_Default_RTE_Mode_switch_Task_VAR) :> .
_ROM_OS_Default_RTE_Mode_switch_Task_VAR_START = ADDR(.ROM_OS_Default_RTE_Mode_switch_Task_VAR);
_ROM_OS_Default_RTE_Mode_switch_Task_VAR_END = ENDADDR(.ROM_OS_Default_RTE_Mode_switch_Task_VAR);

.ROM_OS_Default_RTE_Mode_switch_Task_VAR_NOINIT ROM(.OS_Default_RTE_Mode_switch_Task_VAR_NOINIT) :> .
_ROM_OS_Default_RTE_Mode_switch_Task_VAR_NOINIT_START = ADDR(.ROM_OS_Default_RTE_Mode_switch_Task_VAR_NOINIT);
_ROM_OS_Default_RTE_Mode_switch_Task_VAR_NOINIT_END = ENDADDR(.ROM_OS_Default_RTE_Mode_switch_Task_VAR_NOINIT);

.ROM_OS_Default_RTE_Mode_switch_Task_VAR_ZERO_INIT ROM(.OS_Default_RTE_Mode_switch_Task_VAR_ZERO_INIT) :> .
_ROM_OS_Default_RTE_Mode_switch_Task_VAR_ZERO_INIT_START = ADDR(.ROM_OS_Default_RTE_Mode_switch_Task_VAR_ZERO_INIT);
_ROM_OS_Default_RTE_Mode_switch_Task_VAR_ZERO_INIT_END = ENDADDR(.ROM_OS_Default_RTE_Mode_switch_Task_VAR_ZERO_INIT);

.ROM_OS_Default_RTE_Mode_switch_Task_VAR_FAST ROM(.OS_Default_RTE_Mode_switch_Task_VAR_FAST) :> .
_ROM_OS_Default_RTE_Mode_switch_Task_VAR_FAST_START = ADDR(.ROM_OS_Default_RTE_Mode_switch_Task_VAR_FAST);
_ROM_OS_Default_RTE_Mode_switch_Task_VAR_FAST_END = ENDADDR(.ROM_OS_Default_RTE_Mode_switch_Task_VAR_FAST);

.ROM_OS_Default_RTE_Mode_switch_Task_VAR_FAST_NOINIT ROM(.OS_Default_RTE_Mode_switch_Task_VAR_FAST_NOINIT) :> .
_ROM_OS_Default_RTE_Mode_switch_Task_VAR_FAST_NOINIT_START = ADDR(.ROM_OS_Default_RTE_Mode_switch_Task_VAR_FAST_NOINIT);
_ROM_OS_Default_RTE_Mode_switch_Task_VAR_FAST_NOINIT_END = ENDADDR(.ROM_OS_Default_RTE_Mode_switch_Task_VAR_FAST_NOINIT);

.ROM_OS_Default_RTE_Mode_switch_Task_VAR_FAST_ZERO_INIT ROM(.OS_Default_RTE_Mode_switch_Task_VAR_FAST_ZERO_INIT) :> .
_ROM_OS_Default_RTE_Mode_switch_Task_VAR_FAST_ZERO_INIT_START = ADDR(.ROM_OS_Default_RTE_Mode_switch_Task_VAR_FAST_ZERO_INIT);
_ROM_OS_Default_RTE_Mode_switch_Task_VAR_FAST_ZERO_INIT_END = ENDADDR(.ROM_OS_Default_RTE_Mode_switch_Task_VAR_FAST_ZERO_INIT);

#endif

#ifdef OS_LINK_CONST_TASK_DEFAULT_RTE_MODE_SWITCH_TASK
# undef OS_LINK_CONST_TASK_DEFAULT_RTE_MODE_SWITCH_TASK
#endif

#ifdef OS_LINK_CONST_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_FAR
# undef OS_LINK_CONST_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_FAR
#endif

#ifdef OS_LINK_CONST_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_NEAR
# undef OS_LINK_CONST_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_NEAR
#endif

#ifdef OS_LINK_CONST_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_INIT
# undef OS_LINK_CONST_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_INIT
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_IDLETASK_OSCORE_CORE0 ) || defined ( OS_LINK_CONST_TASK_IDLETASK_OSCORE_CORE0_FAR )
.OS_IdleTask_OsCore_CORE0_CONST ALIGN(4) :> .
_OS_IdleTask_OsCore_CORE0_CONST_START = ADDR(.OS_IdleTask_OsCore_CORE0_CONST);
_OS_IdleTask_OsCore_CORE0_CONST_END = ENDADDR(.OS_IdleTask_OsCore_CORE0_CONST) - 1;
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_IDLETASK_OSCORE_CORE0 ) || defined ( OS_LINK_CONST_TASK_IDLETASK_OSCORE_CORE0_NEAR )
.OS_IdleTask_OsCore_CORE0_CONST_FAST ALIGN(4) :> .
_OS_IdleTask_OsCore_CORE0_CONST_FAST_START = ADDR(.OS_IdleTask_OsCore_CORE0_CONST_FAST);
_OS_IdleTask_OsCore_CORE0_CONST_FAST_END = ENDADDR(.OS_IdleTask_OsCore_CORE0_CONST_FAST) - 1;
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_IDLETASK_OSCORE_CORE0 ) || defined ( OS_LINK_CONST_TASK_IDLETASK_OSCORE_CORE0_INIT )

.ROM_OS_IdleTask_OsCore_CORE0_VAR ROM(.OS_IdleTask_OsCore_CORE0_VAR) :> .
_ROM_OS_IdleTask_OsCore_CORE0_VAR_START = ADDR(.ROM_OS_IdleTask_OsCore_CORE0_VAR);
_ROM_OS_IdleTask_OsCore_CORE0_VAR_END = ENDADDR(.ROM_OS_IdleTask_OsCore_CORE0_VAR);

.ROM_OS_IdleTask_OsCore_CORE0_VAR_NOINIT ROM(.OS_IdleTask_OsCore_CORE0_VAR_NOINIT) :> .
_ROM_OS_IdleTask_OsCore_CORE0_VAR_NOINIT_START = ADDR(.ROM_OS_IdleTask_OsCore_CORE0_VAR_NOINIT);
_ROM_OS_IdleTask_OsCore_CORE0_VAR_NOINIT_END = ENDADDR(.ROM_OS_IdleTask_OsCore_CORE0_VAR_NOINIT);

.ROM_OS_IdleTask_OsCore_CORE0_VAR_ZERO_INIT ROM(.OS_IdleTask_OsCore_CORE0_VAR_ZERO_INIT) :> .
_ROM_OS_IdleTask_OsCore_CORE0_VAR_ZERO_INIT_START = ADDR(.ROM_OS_IdleTask_OsCore_CORE0_VAR_ZERO_INIT);
_ROM_OS_IdleTask_OsCore_CORE0_VAR_ZERO_INIT_END = ENDADDR(.ROM_OS_IdleTask_OsCore_CORE0_VAR_ZERO_INIT);

.ROM_OS_IdleTask_OsCore_CORE0_VAR_FAST ROM(.OS_IdleTask_OsCore_CORE0_VAR_FAST) :> .
_ROM_OS_IdleTask_OsCore_CORE0_VAR_FAST_START = ADDR(.ROM_OS_IdleTask_OsCore_CORE0_VAR_FAST);
_ROM_OS_IdleTask_OsCore_CORE0_VAR_FAST_END = ENDADDR(.ROM_OS_IdleTask_OsCore_CORE0_VAR_FAST);

.ROM_OS_IdleTask_OsCore_CORE0_VAR_FAST_NOINIT ROM(.OS_IdleTask_OsCore_CORE0_VAR_FAST_NOINIT) :> .
_ROM_OS_IdleTask_OsCore_CORE0_VAR_FAST_NOINIT_START = ADDR(.ROM_OS_IdleTask_OsCore_CORE0_VAR_FAST_NOINIT);
_ROM_OS_IdleTask_OsCore_CORE0_VAR_FAST_NOINIT_END = ENDADDR(.ROM_OS_IdleTask_OsCore_CORE0_VAR_FAST_NOINIT);

.ROM_OS_IdleTask_OsCore_CORE0_VAR_FAST_ZERO_INIT ROM(.OS_IdleTask_OsCore_CORE0_VAR_FAST_ZERO_INIT) :> .
_ROM_OS_IdleTask_OsCore_CORE0_VAR_FAST_ZERO_INIT_START = ADDR(.ROM_OS_IdleTask_OsCore_CORE0_VAR_FAST_ZERO_INIT);
_ROM_OS_IdleTask_OsCore_CORE0_VAR_FAST_ZERO_INIT_END = ENDADDR(.ROM_OS_IdleTask_OsCore_CORE0_VAR_FAST_ZERO_INIT);

#endif

#ifdef OS_LINK_CONST_TASK_IDLETASK_OSCORE_CORE0
# undef OS_LINK_CONST_TASK_IDLETASK_OSCORE_CORE0
#endif

#ifdef OS_LINK_CONST_TASK_IDLETASK_OSCORE_CORE0_FAR
# undef OS_LINK_CONST_TASK_IDLETASK_OSCORE_CORE0_FAR
#endif

#ifdef OS_LINK_CONST_TASK_IDLETASK_OSCORE_CORE0_NEAR
# undef OS_LINK_CONST_TASK_IDLETASK_OSCORE_CORE0_NEAR
#endif

#ifdef OS_LINK_CONST_TASK_IDLETASK_OSCORE_CORE0_INIT
# undef OS_LINK_CONST_TASK_IDLETASK_OSCORE_CORE0_INIT
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_OSTASK_BSW_ASIL ) || defined ( OS_LINK_CONST_TASK_OSTASK_BSW_ASIL_FAR )
.OS_OsTask_BSW_ASIL_CONST ALIGN(4) :> .
_OS_OsTask_BSW_ASIL_CONST_START = ADDR(.OS_OsTask_BSW_ASIL_CONST);
_OS_OsTask_BSW_ASIL_CONST_END = ENDADDR(.OS_OsTask_BSW_ASIL_CONST) - 1;
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_OSTASK_BSW_ASIL ) || defined ( OS_LINK_CONST_TASK_OSTASK_BSW_ASIL_NEAR )
.OS_OsTask_BSW_ASIL_CONST_FAST ALIGN(4) :> .
_OS_OsTask_BSW_ASIL_CONST_FAST_START = ADDR(.OS_OsTask_BSW_ASIL_CONST_FAST);
_OS_OsTask_BSW_ASIL_CONST_FAST_END = ENDADDR(.OS_OsTask_BSW_ASIL_CONST_FAST) - 1;
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_OSTASK_BSW_ASIL ) || defined ( OS_LINK_CONST_TASK_OSTASK_BSW_ASIL_INIT )

.ROM_OS_OsTask_BSW_ASIL_VAR ROM(.OS_OsTask_BSW_ASIL_VAR) :> .
_ROM_OS_OsTask_BSW_ASIL_VAR_START = ADDR(.ROM_OS_OsTask_BSW_ASIL_VAR);
_ROM_OS_OsTask_BSW_ASIL_VAR_END = ENDADDR(.ROM_OS_OsTask_BSW_ASIL_VAR);

.ROM_OS_OsTask_BSW_ASIL_VAR_NOINIT ROM(.OS_OsTask_BSW_ASIL_VAR_NOINIT) :> .
_ROM_OS_OsTask_BSW_ASIL_VAR_NOINIT_START = ADDR(.ROM_OS_OsTask_BSW_ASIL_VAR_NOINIT);
_ROM_OS_OsTask_BSW_ASIL_VAR_NOINIT_END = ENDADDR(.ROM_OS_OsTask_BSW_ASIL_VAR_NOINIT);

.ROM_OS_OsTask_BSW_ASIL_VAR_ZERO_INIT ROM(.OS_OsTask_BSW_ASIL_VAR_ZERO_INIT) :> .
_ROM_OS_OsTask_BSW_ASIL_VAR_ZERO_INIT_START = ADDR(.ROM_OS_OsTask_BSW_ASIL_VAR_ZERO_INIT);
_ROM_OS_OsTask_BSW_ASIL_VAR_ZERO_INIT_END = ENDADDR(.ROM_OS_OsTask_BSW_ASIL_VAR_ZERO_INIT);

.ROM_OS_OsTask_BSW_ASIL_VAR_FAST ROM(.OS_OsTask_BSW_ASIL_VAR_FAST) :> .
_ROM_OS_OsTask_BSW_ASIL_VAR_FAST_START = ADDR(.ROM_OS_OsTask_BSW_ASIL_VAR_FAST);
_ROM_OS_OsTask_BSW_ASIL_VAR_FAST_END = ENDADDR(.ROM_OS_OsTask_BSW_ASIL_VAR_FAST);

.ROM_OS_OsTask_BSW_ASIL_VAR_FAST_NOINIT ROM(.OS_OsTask_BSW_ASIL_VAR_FAST_NOINIT) :> .
_ROM_OS_OsTask_BSW_ASIL_VAR_FAST_NOINIT_START = ADDR(.ROM_OS_OsTask_BSW_ASIL_VAR_FAST_NOINIT);
_ROM_OS_OsTask_BSW_ASIL_VAR_FAST_NOINIT_END = ENDADDR(.ROM_OS_OsTask_BSW_ASIL_VAR_FAST_NOINIT);

.ROM_OS_OsTask_BSW_ASIL_VAR_FAST_ZERO_INIT ROM(.OS_OsTask_BSW_ASIL_VAR_FAST_ZERO_INIT) :> .
_ROM_OS_OsTask_BSW_ASIL_VAR_FAST_ZERO_INIT_START = ADDR(.ROM_OS_OsTask_BSW_ASIL_VAR_FAST_ZERO_INIT);
_ROM_OS_OsTask_BSW_ASIL_VAR_FAST_ZERO_INIT_END = ENDADDR(.ROM_OS_OsTask_BSW_ASIL_VAR_FAST_ZERO_INIT);

#endif

#ifdef OS_LINK_CONST_TASK_OSTASK_BSW_ASIL
# undef OS_LINK_CONST_TASK_OSTASK_BSW_ASIL
#endif

#ifdef OS_LINK_CONST_TASK_OSTASK_BSW_ASIL_FAR
# undef OS_LINK_CONST_TASK_OSTASK_BSW_ASIL_FAR
#endif

#ifdef OS_LINK_CONST_TASK_OSTASK_BSW_ASIL_NEAR
# undef OS_LINK_CONST_TASK_OSTASK_BSW_ASIL_NEAR
#endif

#ifdef OS_LINK_CONST_TASK_OSTASK_BSW_ASIL_INIT
# undef OS_LINK_CONST_TASK_OSTASK_BSW_ASIL_INIT
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_OSTASK_LOWPRIONVM ) || defined ( OS_LINK_CONST_TASK_OSTASK_LOWPRIONVM_FAR )
.OS_OsTask_LowPrioNvm_CONST ALIGN(4) :> .
_OS_OsTask_LowPrioNvm_CONST_START = ADDR(.OS_OsTask_LowPrioNvm_CONST);
_OS_OsTask_LowPrioNvm_CONST_END = ENDADDR(.OS_OsTask_LowPrioNvm_CONST) - 1;
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_OSTASK_LOWPRIONVM ) || defined ( OS_LINK_CONST_TASK_OSTASK_LOWPRIONVM_NEAR )
.OS_OsTask_LowPrioNvm_CONST_FAST ALIGN(4) :> .
_OS_OsTask_LowPrioNvm_CONST_FAST_START = ADDR(.OS_OsTask_LowPrioNvm_CONST_FAST);
_OS_OsTask_LowPrioNvm_CONST_FAST_END = ENDADDR(.OS_OsTask_LowPrioNvm_CONST_FAST) - 1;
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_OSTASK_LOWPRIONVM ) || defined ( OS_LINK_CONST_TASK_OSTASK_LOWPRIONVM_INIT )

.ROM_OS_OsTask_LowPrioNvm_VAR ROM(.OS_OsTask_LowPrioNvm_VAR) :> .
_ROM_OS_OsTask_LowPrioNvm_VAR_START = ADDR(.ROM_OS_OsTask_LowPrioNvm_VAR);
_ROM_OS_OsTask_LowPrioNvm_VAR_END = ENDADDR(.ROM_OS_OsTask_LowPrioNvm_VAR);

.ROM_OS_OsTask_LowPrioNvm_VAR_NOINIT ROM(.OS_OsTask_LowPrioNvm_VAR_NOINIT) :> .
_ROM_OS_OsTask_LowPrioNvm_VAR_NOINIT_START = ADDR(.ROM_OS_OsTask_LowPrioNvm_VAR_NOINIT);
_ROM_OS_OsTask_LowPrioNvm_VAR_NOINIT_END = ENDADDR(.ROM_OS_OsTask_LowPrioNvm_VAR_NOINIT);

.ROM_OS_OsTask_LowPrioNvm_VAR_ZERO_INIT ROM(.OS_OsTask_LowPrioNvm_VAR_ZERO_INIT) :> .
_ROM_OS_OsTask_LowPrioNvm_VAR_ZERO_INIT_START = ADDR(.ROM_OS_OsTask_LowPrioNvm_VAR_ZERO_INIT);
_ROM_OS_OsTask_LowPrioNvm_VAR_ZERO_INIT_END = ENDADDR(.ROM_OS_OsTask_LowPrioNvm_VAR_ZERO_INIT);

.ROM_OS_OsTask_LowPrioNvm_VAR_FAST ROM(.OS_OsTask_LowPrioNvm_VAR_FAST) :> .
_ROM_OS_OsTask_LowPrioNvm_VAR_FAST_START = ADDR(.ROM_OS_OsTask_LowPrioNvm_VAR_FAST);
_ROM_OS_OsTask_LowPrioNvm_VAR_FAST_END = ENDADDR(.ROM_OS_OsTask_LowPrioNvm_VAR_FAST);

.ROM_OS_OsTask_LowPrioNvm_VAR_FAST_NOINIT ROM(.OS_OsTask_LowPrioNvm_VAR_FAST_NOINIT) :> .
_ROM_OS_OsTask_LowPrioNvm_VAR_FAST_NOINIT_START = ADDR(.ROM_OS_OsTask_LowPrioNvm_VAR_FAST_NOINIT);
_ROM_OS_OsTask_LowPrioNvm_VAR_FAST_NOINIT_END = ENDADDR(.ROM_OS_OsTask_LowPrioNvm_VAR_FAST_NOINIT);

.ROM_OS_OsTask_LowPrioNvm_VAR_FAST_ZERO_INIT ROM(.OS_OsTask_LowPrioNvm_VAR_FAST_ZERO_INIT) :> .
_ROM_OS_OsTask_LowPrioNvm_VAR_FAST_ZERO_INIT_START = ADDR(.ROM_OS_OsTask_LowPrioNvm_VAR_FAST_ZERO_INIT);
_ROM_OS_OsTask_LowPrioNvm_VAR_FAST_ZERO_INIT_END = ENDADDR(.ROM_OS_OsTask_LowPrioNvm_VAR_FAST_ZERO_INIT);

#endif

#ifdef OS_LINK_CONST_TASK_OSTASK_LOWPRIONVM
# undef OS_LINK_CONST_TASK_OSTASK_LOWPRIONVM
#endif

#ifdef OS_LINK_CONST_TASK_OSTASK_LOWPRIONVM_FAR
# undef OS_LINK_CONST_TASK_OSTASK_LOWPRIONVM_FAR
#endif

#ifdef OS_LINK_CONST_TASK_OSTASK_LOWPRIONVM_NEAR
# undef OS_LINK_CONST_TASK_OSTASK_LOWPRIONVM_NEAR
#endif

#ifdef OS_LINK_CONST_TASK_OSTASK_LOWPRIONVM_INIT
# undef OS_LINK_CONST_TASK_OSTASK_LOWPRIONVM_INIT
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



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR ) || defined ( OS_LINK_CONST_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_FAR )
.OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_CONST ALIGN(4) :> .
_OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_CONST_START = ADDR(.OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_CONST);
_OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_CONST_END = ENDADDR(.OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_CONST) - 1;
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR ) || defined ( OS_LINK_CONST_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_NEAR )
.OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_CONST_FAST ALIGN(4) :> .
_OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_CONST_FAST_START = ADDR(.OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_CONST_FAST);
_OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_CONST_FAST_END = ENDADDR(.OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_CONST_FAST) - 1;
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR ) || defined ( OS_LINK_CONST_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_INIT )

.ROM_OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR ROM(.OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR) :> .
_ROM_OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_START = ADDR(.ROM_OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR);
_ROM_OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_END = ENDADDR(.ROM_OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR);

.ROM_OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_NOINIT ROM(.OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_NOINIT) :> .
_ROM_OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_NOINIT_START = ADDR(.ROM_OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_NOINIT);
_ROM_OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_NOINIT_END = ENDADDR(.ROM_OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_NOINIT);

.ROM_OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_ZERO_INIT ROM(.OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_ZERO_INIT) :> .
_ROM_OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_ZERO_INIT_START = ADDR(.ROM_OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_ZERO_INIT);
_ROM_OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_ZERO_INIT_END = ENDADDR(.ROM_OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_ZERO_INIT);

.ROM_OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_FAST ROM(.OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_FAST) :> .
_ROM_OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_FAST_START = ADDR(.ROM_OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_FAST);
_ROM_OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_FAST_END = ENDADDR(.ROM_OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_FAST);

.ROM_OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_FAST_NOINIT ROM(.OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_FAST_NOINIT) :> .
_ROM_OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_FAST_NOINIT_START = ADDR(.ROM_OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_FAST_NOINIT);
_ROM_OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_FAST_NOINIT_END = ENDADDR(.ROM_OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_FAST_NOINIT);

.ROM_OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_FAST_ZERO_INIT ROM(.OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_FAST_ZERO_INIT) :> .
_ROM_OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_FAST_ZERO_INIT_START = ADDR(.ROM_OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_FAST_ZERO_INIT);
_ROM_OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_FAST_ZERO_INIT_END = ENDADDR(.ROM_OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_FAST_ZERO_INIT);

#endif

#ifdef OS_LINK_CONST_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR
# undef OS_LINK_CONST_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR
#endif

#ifdef OS_LINK_CONST_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_FAR
# undef OS_LINK_CONST_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_FAR
#endif

#ifdef OS_LINK_CONST_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_NEAR
# undef OS_LINK_CONST_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_NEAR
#endif

#ifdef OS_LINK_CONST_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_INIT
# undef OS_LINK_CONST_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_INIT
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


#ifdef OS_LINK_VAR_APP_OSAPPLICATION_ASIL
. = ALIGN(4);
_OS_OsApplication_ASIL_VAR_ALL_START = .;
__OS_OsApplication_ASIL_VAR_ALL_START = .;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_ASIL ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_ASIL_FAR ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_ASIL_FAR_CACHE ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_ASIL_FAR_CACHE_INIT )
.OS_OsApplication_ASIL_VAR ALIGN(4) :> .
_OS_OsApplication_ASIL_VAR_START = ADDR(.OS_OsApplication_ASIL_VAR);
_OS_OsApplication_ASIL_VAR_END = ENDADDR(.OS_OsApplication_ASIL_VAR) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_ASIL ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_ASIL_FAR ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_ASIL_FAR_CACHE ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_ASIL_FAR_CACHE_NOINIT )
.OS_OsApplication_ASIL_VAR_NOINIT ALIGN(4) :> .
_OS_OsApplication_ASIL_VAR_NOINIT_START = ADDR(.OS_OsApplication_ASIL_VAR_NOINIT);
_OS_OsApplication_ASIL_VAR_NOINIT_END = ENDADDR(.OS_OsApplication_ASIL_VAR_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_ASIL ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_ASIL_FAR ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_ASIL_FAR_CACHE ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_ASIL_FAR_CACHE_ZERO_INIT )
.OS_OsApplication_ASIL_VAR_ZERO_INIT ALIGN(4) :> .
.OS_OsApplication_ASIL_VAR_ZERO_INIT_bss CLEAR :> .
_OS_OsApplication_ASIL_VAR_ZERO_INIT_START = ADDR(.OS_OsApplication_ASIL_VAR_ZERO_INIT);
_OS_OsApplication_ASIL_VAR_ZERO_INIT_END = ENDADDR(.OS_OsApplication_ASIL_VAR_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_ASIL ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_ASIL_NEAR ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_ASIL_NEAR_CACHE ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_ASIL_NEAR_CACHE_INIT )
.OS_OsApplication_ASIL_VAR_FAST ALIGN(4) :> .
_OS_OsApplication_ASIL_VAR_FAST_START = ADDR(.OS_OsApplication_ASIL_VAR_FAST);
_OS_OsApplication_ASIL_VAR_FAST_END = ENDADDR(.OS_OsApplication_ASIL_VAR_FAST) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_ASIL ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_ASIL_NEAR ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_ASIL_NEAR_CACHE ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_ASIL_NEAR_CACHE_NOINIT )
.OS_OsApplication_ASIL_VAR_FAST_NOINIT ALIGN(4) :> .
_OS_OsApplication_ASIL_VAR_FAST_NOINIT_START = ADDR(.OS_OsApplication_ASIL_VAR_FAST_NOINIT);
_OS_OsApplication_ASIL_VAR_FAST_NOINIT_END = ENDADDR(.OS_OsApplication_ASIL_VAR_FAST_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_ASIL ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_ASIL_NEAR ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_ASIL_NEAR_CACHE ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_ASIL_NEAR_CACHE_ZERO_INIT )
.OS_OsApplication_ASIL_VAR_FAST_ZERO_INIT ALIGN(4) :> .
.OS_OsApplication_ASIL_VAR_FAST_ZERO_INIT_bss CLEAR :> .
_OS_OsApplication_ASIL_VAR_FAST_ZERO_INIT_START = ADDR(.OS_OsApplication_ASIL_VAR_FAST_ZERO_INIT);
_OS_OsApplication_ASIL_VAR_FAST_ZERO_INIT_END = ENDADDR(.OS_OsApplication_ASIL_VAR_FAST_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_ASIL ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_ASIL_FAR ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_ASIL_FAR_NOCACHE ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_ASIL_FAR_NOCACHE_INIT )
.OS_OsApplication_ASIL_VAR_NOCACHE ALIGN(4) :> .
_OS_OsApplication_ASIL_VAR_NOCACHE_START = ADDR(.OS_OsApplication_ASIL_VAR_NOCACHE);
_OS_OsApplication_ASIL_VAR_NOCACHE_END = ENDADDR(.OS_OsApplication_ASIL_VAR_NOCACHE) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_ASIL ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_ASIL_FAR ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_ASIL_FAR_NOCACHE ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_ASIL_FAR_NOCACHE_NOINIT )
.OS_OsApplication_ASIL_VAR_NOCACHE_NOINIT ALIGN(4) :> .
_OS_OsApplication_ASIL_VAR_NOCACHE_NOINIT_START = ADDR(.OS_OsApplication_ASIL_VAR_NOCACHE_NOINIT);
_OS_OsApplication_ASIL_VAR_NOCACHE_NOINIT_END = ENDADDR(.OS_OsApplication_ASIL_VAR_NOCACHE_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_ASIL ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_ASIL_FAR ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_ASIL_FAR_NOCACHE ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_ASIL_FAR_NOCACHE_ZERO_INIT )
.OS_OsApplication_ASIL_VAR_NOCACHE_ZERO_INIT ALIGN(4) :> .
.OS_OsApplication_ASIL_VAR_NOCACHE_ZERO_INIT_bss CLEAR :> .
_OS_OsApplication_ASIL_VAR_NOCACHE_ZERO_INIT_START = ADDR(.OS_OsApplication_ASIL_VAR_NOCACHE_ZERO_INIT);
_OS_OsApplication_ASIL_VAR_NOCACHE_ZERO_INIT_END = ENDADDR(.OS_OsApplication_ASIL_VAR_NOCACHE_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_ASIL ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_ASIL_NEAR ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_ASIL_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_ASIL_NEAR_NOCACHE_INIT )
.OS_OsApplication_ASIL_VAR_FAST_NOCACHE ALIGN(4) :> .
_OS_OsApplication_ASIL_VAR_FAST_NOCACHE_START = ADDR(.OS_OsApplication_ASIL_VAR_FAST_NOCACHE);
_OS_OsApplication_ASIL_VAR_FAST_NOCACHE_END = ENDADDR(.OS_OsApplication_ASIL_VAR_FAST_NOCACHE) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_ASIL ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_ASIL_NEAR ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_ASIL_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_ASIL_NEAR_NOCACHE_NOINIT )
.OS_OsApplication_ASIL_VAR_FAST_NOCACHE_NOINIT ALIGN(4) :> .
_OS_OsApplication_ASIL_VAR_FAST_NOCACHE_NOINIT_START = ADDR(.OS_OsApplication_ASIL_VAR_FAST_NOCACHE_NOINIT);
_OS_OsApplication_ASIL_VAR_FAST_NOCACHE_NOINIT_END = ENDADDR(.OS_OsApplication_ASIL_VAR_FAST_NOCACHE_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_ASIL ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_ASIL_NEAR ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_ASIL_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_ASIL_NEAR_NOCACHE_ZERO_INIT )
.OS_OsApplication_ASIL_VAR_FAST_NOCACHE_ZERO_INIT ALIGN(4) :> .
.OS_OsApplication_ASIL_VAR_FAST_NOCACHE_ZERO_INIT_bss CLEAR :> .
_OS_OsApplication_ASIL_VAR_FAST_NOCACHE_ZERO_INIT_START = ADDR(.OS_OsApplication_ASIL_VAR_FAST_NOCACHE_ZERO_INIT);
_OS_OsApplication_ASIL_VAR_FAST_NOCACHE_ZERO_INIT_END = ENDADDR(.OS_OsApplication_ASIL_VAR_FAST_NOCACHE_ZERO_INIT_bss) - 1;
#endif

#ifdef OS_LINK_VAR_APP_OSAPPLICATION_ASIL
. = ALIGN(4);
_OS_OsApplication_ASIL_VAR_ALL_END = .-1;
__OS_OsApplication_ASIL_VAR_ALL_END = .-1;
# undef OS_LINK_VAR_APP_OSAPPLICATION_ASIL
#endif

#ifdef OS_LINK_VAR_APP_OSAPPLICATION_ASIL_FAR
# undef OS_LINK_VAR_APP_OSAPPLICATION_ASIL_FAR
#endif

#ifdef OS_LINK_VAR_APP_OSAPPLICATION_ASIL_FAR_CACHE
# undef OS_LINK_VAR_APP_OSAPPLICATION_ASIL_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_APP_OSAPPLICATION_ASIL_FAR_CACHE_INIT
# undef OS_LINK_VAR_APP_OSAPPLICATION_ASIL_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_APP_OSAPPLICATION_ASIL_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_APP_OSAPPLICATION_ASIL_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_APP_OSAPPLICATION_ASIL_FAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_APP_OSAPPLICATION_ASIL_FAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_APP_OSAPPLICATION_ASIL_FAR_NOCACHE
# undef OS_LINK_VAR_APP_OSAPPLICATION_ASIL_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_APP_OSAPPLICATION_ASIL_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_APP_OSAPPLICATION_ASIL_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_APP_OSAPPLICATION_ASIL_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_APP_OSAPPLICATION_ASIL_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_APP_OSAPPLICATION_ASIL_FAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_APP_OSAPPLICATION_ASIL_FAR_NOCACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_APP_OSAPPLICATION_ASIL_NEAR
# undef OS_LINK_VAR_APP_OSAPPLICATION_ASIL_NEAR
#endif

#ifdef OS_LINK_VAR_APP_OSAPPLICATION_ASIL_NEAR_CACHE
# undef OS_LINK_VAR_APP_OSAPPLICATION_ASIL_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_APP_OSAPPLICATION_ASIL_NEAR_CACHE_INIT
# undef OS_LINK_VAR_APP_OSAPPLICATION_ASIL_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_APP_OSAPPLICATION_ASIL_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_APP_OSAPPLICATION_ASIL_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_APP_OSAPPLICATION_ASIL_NEAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_APP_OSAPPLICATION_ASIL_NEAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_APP_OSAPPLICATION_ASIL_NEAR_NOCACHE
# undef OS_LINK_VAR_APP_OSAPPLICATION_ASIL_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_APP_OSAPPLICATION_ASIL_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_APP_OSAPPLICATION_ASIL_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_APP_OSAPPLICATION_ASIL_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_APP_OSAPPLICATION_ASIL_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_APP_OSAPPLICATION_ASIL_NEAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_APP_OSAPPLICATION_ASIL_NEAR_NOCACHE_ZERO_INIT
#endif



#ifdef OS_LINK_VAR_APP_OSAPPLICATION_QM
. = ALIGN(4);
_OS_OsApplication_QM_VAR_ALL_START = .;
__OS_OsApplication_QM_VAR_ALL_START = .;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_QM ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_QM_FAR ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_QM_FAR_CACHE ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_QM_FAR_CACHE_INIT )
.OS_OsApplication_QM_VAR ALIGN(4) :> .
_OS_OsApplication_QM_VAR_START = ADDR(.OS_OsApplication_QM_VAR);
_OS_OsApplication_QM_VAR_END = ENDADDR(.OS_OsApplication_QM_VAR) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_QM ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_QM_FAR ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_QM_FAR_CACHE ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_QM_FAR_CACHE_NOINIT )
.OS_OsApplication_QM_VAR_NOINIT ALIGN(4) :> .
_OS_OsApplication_QM_VAR_NOINIT_START = ADDR(.OS_OsApplication_QM_VAR_NOINIT);
_OS_OsApplication_QM_VAR_NOINIT_END = ENDADDR(.OS_OsApplication_QM_VAR_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_QM ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_QM_FAR ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_QM_FAR_CACHE ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_QM_FAR_CACHE_ZERO_INIT )
.OS_OsApplication_QM_VAR_ZERO_INIT ALIGN(4) :> .
.OS_OsApplication_QM_VAR_ZERO_INIT_bss CLEAR :> .
_OS_OsApplication_QM_VAR_ZERO_INIT_START = ADDR(.OS_OsApplication_QM_VAR_ZERO_INIT);
_OS_OsApplication_QM_VAR_ZERO_INIT_END = ENDADDR(.OS_OsApplication_QM_VAR_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_QM ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_QM_NEAR ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_QM_NEAR_CACHE ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_QM_NEAR_CACHE_INIT )
.OS_OsApplication_QM_VAR_FAST ALIGN(4) :> .
_OS_OsApplication_QM_VAR_FAST_START = ADDR(.OS_OsApplication_QM_VAR_FAST);
_OS_OsApplication_QM_VAR_FAST_END = ENDADDR(.OS_OsApplication_QM_VAR_FAST) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_QM ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_QM_NEAR ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_QM_NEAR_CACHE ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_QM_NEAR_CACHE_NOINIT )
.OS_OsApplication_QM_VAR_FAST_NOINIT ALIGN(4) :> .
_OS_OsApplication_QM_VAR_FAST_NOINIT_START = ADDR(.OS_OsApplication_QM_VAR_FAST_NOINIT);
_OS_OsApplication_QM_VAR_FAST_NOINIT_END = ENDADDR(.OS_OsApplication_QM_VAR_FAST_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_QM ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_QM_NEAR ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_QM_NEAR_CACHE ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_QM_NEAR_CACHE_ZERO_INIT )
.OS_OsApplication_QM_VAR_FAST_ZERO_INIT ALIGN(4) :> .
.OS_OsApplication_QM_VAR_FAST_ZERO_INIT_bss CLEAR :> .
_OS_OsApplication_QM_VAR_FAST_ZERO_INIT_START = ADDR(.OS_OsApplication_QM_VAR_FAST_ZERO_INIT);
_OS_OsApplication_QM_VAR_FAST_ZERO_INIT_END = ENDADDR(.OS_OsApplication_QM_VAR_FAST_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_QM ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_QM_FAR ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_QM_FAR_NOCACHE ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_QM_FAR_NOCACHE_INIT )
.OS_OsApplication_QM_VAR_NOCACHE ALIGN(4) :> .
_OS_OsApplication_QM_VAR_NOCACHE_START = ADDR(.OS_OsApplication_QM_VAR_NOCACHE);
_OS_OsApplication_QM_VAR_NOCACHE_END = ENDADDR(.OS_OsApplication_QM_VAR_NOCACHE) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_QM ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_QM_FAR ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_QM_FAR_NOCACHE ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_QM_FAR_NOCACHE_NOINIT )
.OS_OsApplication_QM_VAR_NOCACHE_NOINIT ALIGN(4) :> .
_OS_OsApplication_QM_VAR_NOCACHE_NOINIT_START = ADDR(.OS_OsApplication_QM_VAR_NOCACHE_NOINIT);
_OS_OsApplication_QM_VAR_NOCACHE_NOINIT_END = ENDADDR(.OS_OsApplication_QM_VAR_NOCACHE_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_QM ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_QM_FAR ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_QM_FAR_NOCACHE ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_QM_FAR_NOCACHE_ZERO_INIT )
.OS_OsApplication_QM_VAR_NOCACHE_ZERO_INIT ALIGN(4) :> .
.OS_OsApplication_QM_VAR_NOCACHE_ZERO_INIT_bss CLEAR :> .
_OS_OsApplication_QM_VAR_NOCACHE_ZERO_INIT_START = ADDR(.OS_OsApplication_QM_VAR_NOCACHE_ZERO_INIT);
_OS_OsApplication_QM_VAR_NOCACHE_ZERO_INIT_END = ENDADDR(.OS_OsApplication_QM_VAR_NOCACHE_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_QM ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_QM_NEAR ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_QM_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_QM_NEAR_NOCACHE_INIT )
.OS_OsApplication_QM_VAR_FAST_NOCACHE ALIGN(4) :> .
_OS_OsApplication_QM_VAR_FAST_NOCACHE_START = ADDR(.OS_OsApplication_QM_VAR_FAST_NOCACHE);
_OS_OsApplication_QM_VAR_FAST_NOCACHE_END = ENDADDR(.OS_OsApplication_QM_VAR_FAST_NOCACHE) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_QM ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_QM_NEAR ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_QM_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_QM_NEAR_NOCACHE_NOINIT )
.OS_OsApplication_QM_VAR_FAST_NOCACHE_NOINIT ALIGN(4) :> .
_OS_OsApplication_QM_VAR_FAST_NOCACHE_NOINIT_START = ADDR(.OS_OsApplication_QM_VAR_FAST_NOCACHE_NOINIT);
_OS_OsApplication_QM_VAR_FAST_NOCACHE_NOINIT_END = ENDADDR(.OS_OsApplication_QM_VAR_FAST_NOCACHE_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_QM ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_QM_NEAR ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_QM_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_APP_OSAPPLICATION_QM_NEAR_NOCACHE_ZERO_INIT )
.OS_OsApplication_QM_VAR_FAST_NOCACHE_ZERO_INIT ALIGN(4) :> .
.OS_OsApplication_QM_VAR_FAST_NOCACHE_ZERO_INIT_bss CLEAR :> .
_OS_OsApplication_QM_VAR_FAST_NOCACHE_ZERO_INIT_START = ADDR(.OS_OsApplication_QM_VAR_FAST_NOCACHE_ZERO_INIT);
_OS_OsApplication_QM_VAR_FAST_NOCACHE_ZERO_INIT_END = ENDADDR(.OS_OsApplication_QM_VAR_FAST_NOCACHE_ZERO_INIT_bss) - 1;
#endif

#ifdef OS_LINK_VAR_APP_OSAPPLICATION_QM
. = ALIGN(4);
_OS_OsApplication_QM_VAR_ALL_END = .-1;
__OS_OsApplication_QM_VAR_ALL_END = .-1;
# undef OS_LINK_VAR_APP_OSAPPLICATION_QM
#endif

#ifdef OS_LINK_VAR_APP_OSAPPLICATION_QM_FAR
# undef OS_LINK_VAR_APP_OSAPPLICATION_QM_FAR
#endif

#ifdef OS_LINK_VAR_APP_OSAPPLICATION_QM_FAR_CACHE
# undef OS_LINK_VAR_APP_OSAPPLICATION_QM_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_APP_OSAPPLICATION_QM_FAR_CACHE_INIT
# undef OS_LINK_VAR_APP_OSAPPLICATION_QM_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_APP_OSAPPLICATION_QM_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_APP_OSAPPLICATION_QM_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_APP_OSAPPLICATION_QM_FAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_APP_OSAPPLICATION_QM_FAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_APP_OSAPPLICATION_QM_FAR_NOCACHE
# undef OS_LINK_VAR_APP_OSAPPLICATION_QM_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_APP_OSAPPLICATION_QM_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_APP_OSAPPLICATION_QM_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_APP_OSAPPLICATION_QM_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_APP_OSAPPLICATION_QM_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_APP_OSAPPLICATION_QM_FAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_APP_OSAPPLICATION_QM_FAR_NOCACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_APP_OSAPPLICATION_QM_NEAR
# undef OS_LINK_VAR_APP_OSAPPLICATION_QM_NEAR
#endif

#ifdef OS_LINK_VAR_APP_OSAPPLICATION_QM_NEAR_CACHE
# undef OS_LINK_VAR_APP_OSAPPLICATION_QM_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_APP_OSAPPLICATION_QM_NEAR_CACHE_INIT
# undef OS_LINK_VAR_APP_OSAPPLICATION_QM_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_APP_OSAPPLICATION_QM_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_APP_OSAPPLICATION_QM_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_APP_OSAPPLICATION_QM_NEAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_APP_OSAPPLICATION_QM_NEAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_APP_OSAPPLICATION_QM_NEAR_NOCACHE
# undef OS_LINK_VAR_APP_OSAPPLICATION_QM_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_APP_OSAPPLICATION_QM_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_APP_OSAPPLICATION_QM_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_APP_OSAPPLICATION_QM_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_APP_OSAPPLICATION_QM_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_APP_OSAPPLICATION_QM_NEAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_APP_OSAPPLICATION_QM_NEAR_NOCACHE_ZERO_INIT
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



#ifdef OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK
. = ALIGN(4);
_OS_Default_Appl_Init_Task_VAR_ALL_START = .;
__OS_Default_Appl_Init_Task_VAR_ALL_START = .;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_FAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_FAR_CACHE_INIT )
.OS_Default_Appl_Init_Task_VAR ALIGN(4) :> .
_OS_Default_Appl_Init_Task_VAR_START = ADDR(.OS_Default_Appl_Init_Task_VAR);
_OS_Default_Appl_Init_Task_VAR_END = ENDADDR(.OS_Default_Appl_Init_Task_VAR) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_FAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_FAR_CACHE_NOINIT )
.OS_Default_Appl_Init_Task_VAR_NOINIT ALIGN(4) :> .
_OS_Default_Appl_Init_Task_VAR_NOINIT_START = ADDR(.OS_Default_Appl_Init_Task_VAR_NOINIT);
_OS_Default_Appl_Init_Task_VAR_NOINIT_END = ENDADDR(.OS_Default_Appl_Init_Task_VAR_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_FAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_FAR_CACHE_ZERO_INIT )
.OS_Default_Appl_Init_Task_VAR_ZERO_INIT ALIGN(4) :> .
.OS_Default_Appl_Init_Task_VAR_ZERO_INIT_bss CLEAR :> .
_OS_Default_Appl_Init_Task_VAR_ZERO_INIT_START = ADDR(.OS_Default_Appl_Init_Task_VAR_ZERO_INIT);
_OS_Default_Appl_Init_Task_VAR_ZERO_INIT_END = ENDADDR(.OS_Default_Appl_Init_Task_VAR_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_NEAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_NEAR_CACHE_INIT )
.OS_Default_Appl_Init_Task_VAR_FAST ALIGN(4) :> .
_OS_Default_Appl_Init_Task_VAR_FAST_START = ADDR(.OS_Default_Appl_Init_Task_VAR_FAST);
_OS_Default_Appl_Init_Task_VAR_FAST_END = ENDADDR(.OS_Default_Appl_Init_Task_VAR_FAST) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_NEAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_NEAR_CACHE_NOINIT )
.OS_Default_Appl_Init_Task_VAR_FAST_NOINIT ALIGN(4) :> .
_OS_Default_Appl_Init_Task_VAR_FAST_NOINIT_START = ADDR(.OS_Default_Appl_Init_Task_VAR_FAST_NOINIT);
_OS_Default_Appl_Init_Task_VAR_FAST_NOINIT_END = ENDADDR(.OS_Default_Appl_Init_Task_VAR_FAST_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_NEAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_NEAR_CACHE_ZERO_INIT )
.OS_Default_Appl_Init_Task_VAR_FAST_ZERO_INIT ALIGN(4) :> .
.OS_Default_Appl_Init_Task_VAR_FAST_ZERO_INIT_bss CLEAR :> .
_OS_Default_Appl_Init_Task_VAR_FAST_ZERO_INIT_START = ADDR(.OS_Default_Appl_Init_Task_VAR_FAST_ZERO_INIT);
_OS_Default_Appl_Init_Task_VAR_FAST_ZERO_INIT_END = ENDADDR(.OS_Default_Appl_Init_Task_VAR_FAST_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_FAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_FAR_NOCACHE_INIT )
.OS_Default_Appl_Init_Task_VAR_NOCACHE ALIGN(4) :> .
_OS_Default_Appl_Init_Task_VAR_NOCACHE_START = ADDR(.OS_Default_Appl_Init_Task_VAR_NOCACHE);
_OS_Default_Appl_Init_Task_VAR_NOCACHE_END = ENDADDR(.OS_Default_Appl_Init_Task_VAR_NOCACHE) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_FAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_FAR_NOCACHE_NOINIT )
.OS_Default_Appl_Init_Task_VAR_NOCACHE_NOINIT ALIGN(4) :> .
_OS_Default_Appl_Init_Task_VAR_NOCACHE_NOINIT_START = ADDR(.OS_Default_Appl_Init_Task_VAR_NOCACHE_NOINIT);
_OS_Default_Appl_Init_Task_VAR_NOCACHE_NOINIT_END = ENDADDR(.OS_Default_Appl_Init_Task_VAR_NOCACHE_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_FAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_FAR_NOCACHE_ZERO_INIT )
.OS_Default_Appl_Init_Task_VAR_NOCACHE_ZERO_INIT ALIGN(4) :> .
.OS_Default_Appl_Init_Task_VAR_NOCACHE_ZERO_INIT_bss CLEAR :> .
_OS_Default_Appl_Init_Task_VAR_NOCACHE_ZERO_INIT_START = ADDR(.OS_Default_Appl_Init_Task_VAR_NOCACHE_ZERO_INIT);
_OS_Default_Appl_Init_Task_VAR_NOCACHE_ZERO_INIT_END = ENDADDR(.OS_Default_Appl_Init_Task_VAR_NOCACHE_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_NEAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_NEAR_NOCACHE_INIT )
.OS_Default_Appl_Init_Task_VAR_FAST_NOCACHE ALIGN(4) :> .
_OS_Default_Appl_Init_Task_VAR_FAST_NOCACHE_START = ADDR(.OS_Default_Appl_Init_Task_VAR_FAST_NOCACHE);
_OS_Default_Appl_Init_Task_VAR_FAST_NOCACHE_END = ENDADDR(.OS_Default_Appl_Init_Task_VAR_FAST_NOCACHE) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_NEAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_NEAR_NOCACHE_NOINIT )
.OS_Default_Appl_Init_Task_VAR_FAST_NOCACHE_NOINIT ALIGN(4) :> .
_OS_Default_Appl_Init_Task_VAR_FAST_NOCACHE_NOINIT_START = ADDR(.OS_Default_Appl_Init_Task_VAR_FAST_NOCACHE_NOINIT);
_OS_Default_Appl_Init_Task_VAR_FAST_NOCACHE_NOINIT_END = ENDADDR(.OS_Default_Appl_Init_Task_VAR_FAST_NOCACHE_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_NEAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_NEAR_NOCACHE_ZERO_INIT )
.OS_Default_Appl_Init_Task_VAR_FAST_NOCACHE_ZERO_INIT ALIGN(4) :> .
.OS_Default_Appl_Init_Task_VAR_FAST_NOCACHE_ZERO_INIT_bss CLEAR :> .
_OS_Default_Appl_Init_Task_VAR_FAST_NOCACHE_ZERO_INIT_START = ADDR(.OS_Default_Appl_Init_Task_VAR_FAST_NOCACHE_ZERO_INIT);
_OS_Default_Appl_Init_Task_VAR_FAST_NOCACHE_ZERO_INIT_END = ENDADDR(.OS_Default_Appl_Init_Task_VAR_FAST_NOCACHE_ZERO_INIT_bss) - 1;
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK
. = ALIGN(4);
_OS_Default_Appl_Init_Task_VAR_ALL_END = .-1;
__OS_Default_Appl_Init_Task_VAR_ALL_END = .-1;
# undef OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_FAR
# undef OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_FAR
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_FAR_CACHE
# undef OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_FAR_CACHE_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_FAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_FAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_FAR_NOCACHE
# undef OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_FAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_FAR_NOCACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_NEAR
# undef OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_NEAR
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_NEAR_CACHE
# undef OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_NEAR_CACHE_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_NEAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_NEAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_NEAR_NOCACHE
# undef OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_NEAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_APPL_INIT_TASK_NEAR_NOCACHE_ZERO_INIT
#endif



#ifdef OS_LINK_VAR_TASK_DEFAULT_APPL_TASK
. = ALIGN(4);
_OS_Default_Appl_Task_VAR_ALL_START = .;
__OS_Default_Appl_Task_VAR_ALL_START = .;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_FAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_FAR_CACHE_INIT )
.OS_Default_Appl_Task_VAR ALIGN(4) :> .
_OS_Default_Appl_Task_VAR_START = ADDR(.OS_Default_Appl_Task_VAR);
_OS_Default_Appl_Task_VAR_END = ENDADDR(.OS_Default_Appl_Task_VAR) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_FAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_FAR_CACHE_NOINIT )
.OS_Default_Appl_Task_VAR_NOINIT ALIGN(4) :> .
_OS_Default_Appl_Task_VAR_NOINIT_START = ADDR(.OS_Default_Appl_Task_VAR_NOINIT);
_OS_Default_Appl_Task_VAR_NOINIT_END = ENDADDR(.OS_Default_Appl_Task_VAR_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_FAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_FAR_CACHE_ZERO_INIT )
.OS_Default_Appl_Task_VAR_ZERO_INIT ALIGN(4) :> .
.OS_Default_Appl_Task_VAR_ZERO_INIT_bss CLEAR :> .
_OS_Default_Appl_Task_VAR_ZERO_INIT_START = ADDR(.OS_Default_Appl_Task_VAR_ZERO_INIT);
_OS_Default_Appl_Task_VAR_ZERO_INIT_END = ENDADDR(.OS_Default_Appl_Task_VAR_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_NEAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_NEAR_CACHE_INIT )
.OS_Default_Appl_Task_VAR_FAST ALIGN(4) :> .
_OS_Default_Appl_Task_VAR_FAST_START = ADDR(.OS_Default_Appl_Task_VAR_FAST);
_OS_Default_Appl_Task_VAR_FAST_END = ENDADDR(.OS_Default_Appl_Task_VAR_FAST) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_NEAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_NEAR_CACHE_NOINIT )
.OS_Default_Appl_Task_VAR_FAST_NOINIT ALIGN(4) :> .
_OS_Default_Appl_Task_VAR_FAST_NOINIT_START = ADDR(.OS_Default_Appl_Task_VAR_FAST_NOINIT);
_OS_Default_Appl_Task_VAR_FAST_NOINIT_END = ENDADDR(.OS_Default_Appl_Task_VAR_FAST_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_NEAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_NEAR_CACHE_ZERO_INIT )
.OS_Default_Appl_Task_VAR_FAST_ZERO_INIT ALIGN(4) :> .
.OS_Default_Appl_Task_VAR_FAST_ZERO_INIT_bss CLEAR :> .
_OS_Default_Appl_Task_VAR_FAST_ZERO_INIT_START = ADDR(.OS_Default_Appl_Task_VAR_FAST_ZERO_INIT);
_OS_Default_Appl_Task_VAR_FAST_ZERO_INIT_END = ENDADDR(.OS_Default_Appl_Task_VAR_FAST_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_FAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_FAR_NOCACHE_INIT )
.OS_Default_Appl_Task_VAR_NOCACHE ALIGN(4) :> .
_OS_Default_Appl_Task_VAR_NOCACHE_START = ADDR(.OS_Default_Appl_Task_VAR_NOCACHE);
_OS_Default_Appl_Task_VAR_NOCACHE_END = ENDADDR(.OS_Default_Appl_Task_VAR_NOCACHE) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_FAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_FAR_NOCACHE_NOINIT )
.OS_Default_Appl_Task_VAR_NOCACHE_NOINIT ALIGN(4) :> .
_OS_Default_Appl_Task_VAR_NOCACHE_NOINIT_START = ADDR(.OS_Default_Appl_Task_VAR_NOCACHE_NOINIT);
_OS_Default_Appl_Task_VAR_NOCACHE_NOINIT_END = ENDADDR(.OS_Default_Appl_Task_VAR_NOCACHE_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_FAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_FAR_NOCACHE_ZERO_INIT )
.OS_Default_Appl_Task_VAR_NOCACHE_ZERO_INIT ALIGN(4) :> .
.OS_Default_Appl_Task_VAR_NOCACHE_ZERO_INIT_bss CLEAR :> .
_OS_Default_Appl_Task_VAR_NOCACHE_ZERO_INIT_START = ADDR(.OS_Default_Appl_Task_VAR_NOCACHE_ZERO_INIT);
_OS_Default_Appl_Task_VAR_NOCACHE_ZERO_INIT_END = ENDADDR(.OS_Default_Appl_Task_VAR_NOCACHE_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_NEAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_NEAR_NOCACHE_INIT )
.OS_Default_Appl_Task_VAR_FAST_NOCACHE ALIGN(4) :> .
_OS_Default_Appl_Task_VAR_FAST_NOCACHE_START = ADDR(.OS_Default_Appl_Task_VAR_FAST_NOCACHE);
_OS_Default_Appl_Task_VAR_FAST_NOCACHE_END = ENDADDR(.OS_Default_Appl_Task_VAR_FAST_NOCACHE) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_NEAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_NEAR_NOCACHE_NOINIT )
.OS_Default_Appl_Task_VAR_FAST_NOCACHE_NOINIT ALIGN(4) :> .
_OS_Default_Appl_Task_VAR_FAST_NOCACHE_NOINIT_START = ADDR(.OS_Default_Appl_Task_VAR_FAST_NOCACHE_NOINIT);
_OS_Default_Appl_Task_VAR_FAST_NOCACHE_NOINIT_END = ENDADDR(.OS_Default_Appl_Task_VAR_FAST_NOCACHE_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_NEAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_NEAR_NOCACHE_ZERO_INIT )
.OS_Default_Appl_Task_VAR_FAST_NOCACHE_ZERO_INIT ALIGN(4) :> .
.OS_Default_Appl_Task_VAR_FAST_NOCACHE_ZERO_INIT_bss CLEAR :> .
_OS_Default_Appl_Task_VAR_FAST_NOCACHE_ZERO_INIT_START = ADDR(.OS_Default_Appl_Task_VAR_FAST_NOCACHE_ZERO_INIT);
_OS_Default_Appl_Task_VAR_FAST_NOCACHE_ZERO_INIT_END = ENDADDR(.OS_Default_Appl_Task_VAR_FAST_NOCACHE_ZERO_INIT_bss) - 1;
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_APPL_TASK
. = ALIGN(4);
_OS_Default_Appl_Task_VAR_ALL_END = .-1;
__OS_Default_Appl_Task_VAR_ALL_END = .-1;
# undef OS_LINK_VAR_TASK_DEFAULT_APPL_TASK
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_FAR
# undef OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_FAR
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_FAR_CACHE
# undef OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_FAR_CACHE_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_FAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_FAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_FAR_NOCACHE
# undef OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_FAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_FAR_NOCACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_NEAR
# undef OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_NEAR
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_NEAR_CACHE
# undef OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_NEAR_CACHE_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_NEAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_NEAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_NEAR_NOCACHE
# undef OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_NEAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_APPL_TASK_NEAR_NOCACHE_ZERO_INIT
#endif



#ifdef OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK
. = ALIGN(4);
_OS_Default_BAC_Appl_BMW_Task_VAR_ALL_START = .;
__OS_Default_BAC_Appl_BMW_Task_VAR_ALL_START = .;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_FAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_FAR_CACHE_INIT )
.OS_Default_BAC_Appl_BMW_Task_VAR ALIGN(4) :> .
_OS_Default_BAC_Appl_BMW_Task_VAR_START = ADDR(.OS_Default_BAC_Appl_BMW_Task_VAR);
_OS_Default_BAC_Appl_BMW_Task_VAR_END = ENDADDR(.OS_Default_BAC_Appl_BMW_Task_VAR) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_FAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_FAR_CACHE_NOINIT )
.OS_Default_BAC_Appl_BMW_Task_VAR_NOINIT ALIGN(4) :> .
_OS_Default_BAC_Appl_BMW_Task_VAR_NOINIT_START = ADDR(.OS_Default_BAC_Appl_BMW_Task_VAR_NOINIT);
_OS_Default_BAC_Appl_BMW_Task_VAR_NOINIT_END = ENDADDR(.OS_Default_BAC_Appl_BMW_Task_VAR_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_FAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_FAR_CACHE_ZERO_INIT )
.OS_Default_BAC_Appl_BMW_Task_VAR_ZERO_INIT ALIGN(4) :> .
.OS_Default_BAC_Appl_BMW_Task_VAR_ZERO_INIT_bss CLEAR :> .
_OS_Default_BAC_Appl_BMW_Task_VAR_ZERO_INIT_START = ADDR(.OS_Default_BAC_Appl_BMW_Task_VAR_ZERO_INIT);
_OS_Default_BAC_Appl_BMW_Task_VAR_ZERO_INIT_END = ENDADDR(.OS_Default_BAC_Appl_BMW_Task_VAR_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_NEAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_NEAR_CACHE_INIT )
.OS_Default_BAC_Appl_BMW_Task_VAR_FAST ALIGN(4) :> .
_OS_Default_BAC_Appl_BMW_Task_VAR_FAST_START = ADDR(.OS_Default_BAC_Appl_BMW_Task_VAR_FAST);
_OS_Default_BAC_Appl_BMW_Task_VAR_FAST_END = ENDADDR(.OS_Default_BAC_Appl_BMW_Task_VAR_FAST) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_NEAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_NEAR_CACHE_NOINIT )
.OS_Default_BAC_Appl_BMW_Task_VAR_FAST_NOINIT ALIGN(4) :> .
_OS_Default_BAC_Appl_BMW_Task_VAR_FAST_NOINIT_START = ADDR(.OS_Default_BAC_Appl_BMW_Task_VAR_FAST_NOINIT);
_OS_Default_BAC_Appl_BMW_Task_VAR_FAST_NOINIT_END = ENDADDR(.OS_Default_BAC_Appl_BMW_Task_VAR_FAST_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_NEAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_NEAR_CACHE_ZERO_INIT )
.OS_Default_BAC_Appl_BMW_Task_VAR_FAST_ZERO_INIT ALIGN(4) :> .
.OS_Default_BAC_Appl_BMW_Task_VAR_FAST_ZERO_INIT_bss CLEAR :> .
_OS_Default_BAC_Appl_BMW_Task_VAR_FAST_ZERO_INIT_START = ADDR(.OS_Default_BAC_Appl_BMW_Task_VAR_FAST_ZERO_INIT);
_OS_Default_BAC_Appl_BMW_Task_VAR_FAST_ZERO_INIT_END = ENDADDR(.OS_Default_BAC_Appl_BMW_Task_VAR_FAST_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_FAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_FAR_NOCACHE_INIT )
.OS_Default_BAC_Appl_BMW_Task_VAR_NOCACHE ALIGN(4) :> .
_OS_Default_BAC_Appl_BMW_Task_VAR_NOCACHE_START = ADDR(.OS_Default_BAC_Appl_BMW_Task_VAR_NOCACHE);
_OS_Default_BAC_Appl_BMW_Task_VAR_NOCACHE_END = ENDADDR(.OS_Default_BAC_Appl_BMW_Task_VAR_NOCACHE) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_FAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_FAR_NOCACHE_NOINIT )
.OS_Default_BAC_Appl_BMW_Task_VAR_NOCACHE_NOINIT ALIGN(4) :> .
_OS_Default_BAC_Appl_BMW_Task_VAR_NOCACHE_NOINIT_START = ADDR(.OS_Default_BAC_Appl_BMW_Task_VAR_NOCACHE_NOINIT);
_OS_Default_BAC_Appl_BMW_Task_VAR_NOCACHE_NOINIT_END = ENDADDR(.OS_Default_BAC_Appl_BMW_Task_VAR_NOCACHE_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_FAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_FAR_NOCACHE_ZERO_INIT )
.OS_Default_BAC_Appl_BMW_Task_VAR_NOCACHE_ZERO_INIT ALIGN(4) :> .
.OS_Default_BAC_Appl_BMW_Task_VAR_NOCACHE_ZERO_INIT_bss CLEAR :> .
_OS_Default_BAC_Appl_BMW_Task_VAR_NOCACHE_ZERO_INIT_START = ADDR(.OS_Default_BAC_Appl_BMW_Task_VAR_NOCACHE_ZERO_INIT);
_OS_Default_BAC_Appl_BMW_Task_VAR_NOCACHE_ZERO_INIT_END = ENDADDR(.OS_Default_BAC_Appl_BMW_Task_VAR_NOCACHE_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_NEAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_NEAR_NOCACHE_INIT )
.OS_Default_BAC_Appl_BMW_Task_VAR_FAST_NOCACHE ALIGN(4) :> .
_OS_Default_BAC_Appl_BMW_Task_VAR_FAST_NOCACHE_START = ADDR(.OS_Default_BAC_Appl_BMW_Task_VAR_FAST_NOCACHE);
_OS_Default_BAC_Appl_BMW_Task_VAR_FAST_NOCACHE_END = ENDADDR(.OS_Default_BAC_Appl_BMW_Task_VAR_FAST_NOCACHE) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_NEAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_NEAR_NOCACHE_NOINIT )
.OS_Default_BAC_Appl_BMW_Task_VAR_FAST_NOCACHE_NOINIT ALIGN(4) :> .
_OS_Default_BAC_Appl_BMW_Task_VAR_FAST_NOCACHE_NOINIT_START = ADDR(.OS_Default_BAC_Appl_BMW_Task_VAR_FAST_NOCACHE_NOINIT);
_OS_Default_BAC_Appl_BMW_Task_VAR_FAST_NOCACHE_NOINIT_END = ENDADDR(.OS_Default_BAC_Appl_BMW_Task_VAR_FAST_NOCACHE_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_NEAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_NEAR_NOCACHE_ZERO_INIT )
.OS_Default_BAC_Appl_BMW_Task_VAR_FAST_NOCACHE_ZERO_INIT ALIGN(4) :> .
.OS_Default_BAC_Appl_BMW_Task_VAR_FAST_NOCACHE_ZERO_INIT_bss CLEAR :> .
_OS_Default_BAC_Appl_BMW_Task_VAR_FAST_NOCACHE_ZERO_INIT_START = ADDR(.OS_Default_BAC_Appl_BMW_Task_VAR_FAST_NOCACHE_ZERO_INIT);
_OS_Default_BAC_Appl_BMW_Task_VAR_FAST_NOCACHE_ZERO_INIT_END = ENDADDR(.OS_Default_BAC_Appl_BMW_Task_VAR_FAST_NOCACHE_ZERO_INIT_bss) - 1;
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK
. = ALIGN(4);
_OS_Default_BAC_Appl_BMW_Task_VAR_ALL_END = .-1;
__OS_Default_BAC_Appl_BMW_Task_VAR_ALL_END = .-1;
# undef OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_FAR
# undef OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_FAR
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_FAR_CACHE
# undef OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_FAR_CACHE_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_FAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_FAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_FAR_NOCACHE
# undef OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_FAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_FAR_NOCACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_NEAR
# undef OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_NEAR
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_NEAR_CACHE
# undef OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_NEAR_CACHE_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_NEAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_NEAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_NEAR_NOCACHE
# undef OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_NEAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_BAC_APPL_BMW_TASK_NEAR_NOCACHE_ZERO_INIT
#endif



#ifdef OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK
. = ALIGN(4);
_OS_Default_BSW_Sync_Task_VAR_ALL_START = .;
__OS_Default_BSW_Sync_Task_VAR_ALL_START = .;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_FAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_FAR_CACHE_INIT )
.OS_Default_BSW_Sync_Task_VAR ALIGN(4) :> .
_OS_Default_BSW_Sync_Task_VAR_START = ADDR(.OS_Default_BSW_Sync_Task_VAR);
_OS_Default_BSW_Sync_Task_VAR_END = ENDADDR(.OS_Default_BSW_Sync_Task_VAR) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_FAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_FAR_CACHE_NOINIT )
.OS_Default_BSW_Sync_Task_VAR_NOINIT ALIGN(4) :> .
_OS_Default_BSW_Sync_Task_VAR_NOINIT_START = ADDR(.OS_Default_BSW_Sync_Task_VAR_NOINIT);
_OS_Default_BSW_Sync_Task_VAR_NOINIT_END = ENDADDR(.OS_Default_BSW_Sync_Task_VAR_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_FAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_FAR_CACHE_ZERO_INIT )
.OS_Default_BSW_Sync_Task_VAR_ZERO_INIT ALIGN(4) :> .
.OS_Default_BSW_Sync_Task_VAR_ZERO_INIT_bss CLEAR :> .
_OS_Default_BSW_Sync_Task_VAR_ZERO_INIT_START = ADDR(.OS_Default_BSW_Sync_Task_VAR_ZERO_INIT);
_OS_Default_BSW_Sync_Task_VAR_ZERO_INIT_END = ENDADDR(.OS_Default_BSW_Sync_Task_VAR_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_NEAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_NEAR_CACHE_INIT )
.OS_Default_BSW_Sync_Task_VAR_FAST ALIGN(4) :> .
_OS_Default_BSW_Sync_Task_VAR_FAST_START = ADDR(.OS_Default_BSW_Sync_Task_VAR_FAST);
_OS_Default_BSW_Sync_Task_VAR_FAST_END = ENDADDR(.OS_Default_BSW_Sync_Task_VAR_FAST) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_NEAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_NEAR_CACHE_NOINIT )
.OS_Default_BSW_Sync_Task_VAR_FAST_NOINIT ALIGN(4) :> .
_OS_Default_BSW_Sync_Task_VAR_FAST_NOINIT_START = ADDR(.OS_Default_BSW_Sync_Task_VAR_FAST_NOINIT);
_OS_Default_BSW_Sync_Task_VAR_FAST_NOINIT_END = ENDADDR(.OS_Default_BSW_Sync_Task_VAR_FAST_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_NEAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_NEAR_CACHE_ZERO_INIT )
.OS_Default_BSW_Sync_Task_VAR_FAST_ZERO_INIT ALIGN(4) :> .
.OS_Default_BSW_Sync_Task_VAR_FAST_ZERO_INIT_bss CLEAR :> .
_OS_Default_BSW_Sync_Task_VAR_FAST_ZERO_INIT_START = ADDR(.OS_Default_BSW_Sync_Task_VAR_FAST_ZERO_INIT);
_OS_Default_BSW_Sync_Task_VAR_FAST_ZERO_INIT_END = ENDADDR(.OS_Default_BSW_Sync_Task_VAR_FAST_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_FAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_FAR_NOCACHE_INIT )
.OS_Default_BSW_Sync_Task_VAR_NOCACHE ALIGN(4) :> .
_OS_Default_BSW_Sync_Task_VAR_NOCACHE_START = ADDR(.OS_Default_BSW_Sync_Task_VAR_NOCACHE);
_OS_Default_BSW_Sync_Task_VAR_NOCACHE_END = ENDADDR(.OS_Default_BSW_Sync_Task_VAR_NOCACHE) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_FAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_FAR_NOCACHE_NOINIT )
.OS_Default_BSW_Sync_Task_VAR_NOCACHE_NOINIT ALIGN(4) :> .
_OS_Default_BSW_Sync_Task_VAR_NOCACHE_NOINIT_START = ADDR(.OS_Default_BSW_Sync_Task_VAR_NOCACHE_NOINIT);
_OS_Default_BSW_Sync_Task_VAR_NOCACHE_NOINIT_END = ENDADDR(.OS_Default_BSW_Sync_Task_VAR_NOCACHE_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_FAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_FAR_NOCACHE_ZERO_INIT )
.OS_Default_BSW_Sync_Task_VAR_NOCACHE_ZERO_INIT ALIGN(4) :> .
.OS_Default_BSW_Sync_Task_VAR_NOCACHE_ZERO_INIT_bss CLEAR :> .
_OS_Default_BSW_Sync_Task_VAR_NOCACHE_ZERO_INIT_START = ADDR(.OS_Default_BSW_Sync_Task_VAR_NOCACHE_ZERO_INIT);
_OS_Default_BSW_Sync_Task_VAR_NOCACHE_ZERO_INIT_END = ENDADDR(.OS_Default_BSW_Sync_Task_VAR_NOCACHE_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_NEAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_NEAR_NOCACHE_INIT )
.OS_Default_BSW_Sync_Task_VAR_FAST_NOCACHE ALIGN(4) :> .
_OS_Default_BSW_Sync_Task_VAR_FAST_NOCACHE_START = ADDR(.OS_Default_BSW_Sync_Task_VAR_FAST_NOCACHE);
_OS_Default_BSW_Sync_Task_VAR_FAST_NOCACHE_END = ENDADDR(.OS_Default_BSW_Sync_Task_VAR_FAST_NOCACHE) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_NEAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_NEAR_NOCACHE_NOINIT )
.OS_Default_BSW_Sync_Task_VAR_FAST_NOCACHE_NOINIT ALIGN(4) :> .
_OS_Default_BSW_Sync_Task_VAR_FAST_NOCACHE_NOINIT_START = ADDR(.OS_Default_BSW_Sync_Task_VAR_FAST_NOCACHE_NOINIT);
_OS_Default_BSW_Sync_Task_VAR_FAST_NOCACHE_NOINIT_END = ENDADDR(.OS_Default_BSW_Sync_Task_VAR_FAST_NOCACHE_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_NEAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_NEAR_NOCACHE_ZERO_INIT )
.OS_Default_BSW_Sync_Task_VAR_FAST_NOCACHE_ZERO_INIT ALIGN(4) :> .
.OS_Default_BSW_Sync_Task_VAR_FAST_NOCACHE_ZERO_INIT_bss CLEAR :> .
_OS_Default_BSW_Sync_Task_VAR_FAST_NOCACHE_ZERO_INIT_START = ADDR(.OS_Default_BSW_Sync_Task_VAR_FAST_NOCACHE_ZERO_INIT);
_OS_Default_BSW_Sync_Task_VAR_FAST_NOCACHE_ZERO_INIT_END = ENDADDR(.OS_Default_BSW_Sync_Task_VAR_FAST_NOCACHE_ZERO_INIT_bss) - 1;
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK
. = ALIGN(4);
_OS_Default_BSW_Sync_Task_VAR_ALL_END = .-1;
__OS_Default_BSW_Sync_Task_VAR_ALL_END = .-1;
# undef OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_FAR
# undef OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_FAR
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_FAR_CACHE
# undef OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_FAR_CACHE_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_FAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_FAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_FAR_NOCACHE
# undef OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_FAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_FAR_NOCACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_NEAR
# undef OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_NEAR
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_NEAR_CACHE
# undef OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_NEAR_CACHE_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_NEAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_NEAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_NEAR_NOCACHE
# undef OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_NEAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_BSW_SYNC_TASK_NEAR_NOCACHE_ZERO_INIT
#endif



#ifdef OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK
. = ALIGN(4);
_OS_Default_Background_Task_VAR_ALL_START = .;
__OS_Default_Background_Task_VAR_ALL_START = .;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_FAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_FAR_CACHE_INIT )
.OS_Default_Background_Task_VAR ALIGN(4) :> .
_OS_Default_Background_Task_VAR_START = ADDR(.OS_Default_Background_Task_VAR);
_OS_Default_Background_Task_VAR_END = ENDADDR(.OS_Default_Background_Task_VAR) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_FAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_FAR_CACHE_NOINIT )
.OS_Default_Background_Task_VAR_NOINIT ALIGN(4) :> .
_OS_Default_Background_Task_VAR_NOINIT_START = ADDR(.OS_Default_Background_Task_VAR_NOINIT);
_OS_Default_Background_Task_VAR_NOINIT_END = ENDADDR(.OS_Default_Background_Task_VAR_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_FAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_FAR_CACHE_ZERO_INIT )
.OS_Default_Background_Task_VAR_ZERO_INIT ALIGN(4) :> .
.OS_Default_Background_Task_VAR_ZERO_INIT_bss CLEAR :> .
_OS_Default_Background_Task_VAR_ZERO_INIT_START = ADDR(.OS_Default_Background_Task_VAR_ZERO_INIT);
_OS_Default_Background_Task_VAR_ZERO_INIT_END = ENDADDR(.OS_Default_Background_Task_VAR_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_NEAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_NEAR_CACHE_INIT )
.OS_Default_Background_Task_VAR_FAST ALIGN(4) :> .
_OS_Default_Background_Task_VAR_FAST_START = ADDR(.OS_Default_Background_Task_VAR_FAST);
_OS_Default_Background_Task_VAR_FAST_END = ENDADDR(.OS_Default_Background_Task_VAR_FAST) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_NEAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_NEAR_CACHE_NOINIT )
.OS_Default_Background_Task_VAR_FAST_NOINIT ALIGN(4) :> .
_OS_Default_Background_Task_VAR_FAST_NOINIT_START = ADDR(.OS_Default_Background_Task_VAR_FAST_NOINIT);
_OS_Default_Background_Task_VAR_FAST_NOINIT_END = ENDADDR(.OS_Default_Background_Task_VAR_FAST_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_NEAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_NEAR_CACHE_ZERO_INIT )
.OS_Default_Background_Task_VAR_FAST_ZERO_INIT ALIGN(4) :> .
.OS_Default_Background_Task_VAR_FAST_ZERO_INIT_bss CLEAR :> .
_OS_Default_Background_Task_VAR_FAST_ZERO_INIT_START = ADDR(.OS_Default_Background_Task_VAR_FAST_ZERO_INIT);
_OS_Default_Background_Task_VAR_FAST_ZERO_INIT_END = ENDADDR(.OS_Default_Background_Task_VAR_FAST_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_FAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_FAR_NOCACHE_INIT )
.OS_Default_Background_Task_VAR_NOCACHE ALIGN(4) :> .
_OS_Default_Background_Task_VAR_NOCACHE_START = ADDR(.OS_Default_Background_Task_VAR_NOCACHE);
_OS_Default_Background_Task_VAR_NOCACHE_END = ENDADDR(.OS_Default_Background_Task_VAR_NOCACHE) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_FAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_FAR_NOCACHE_NOINIT )
.OS_Default_Background_Task_VAR_NOCACHE_NOINIT ALIGN(4) :> .
_OS_Default_Background_Task_VAR_NOCACHE_NOINIT_START = ADDR(.OS_Default_Background_Task_VAR_NOCACHE_NOINIT);
_OS_Default_Background_Task_VAR_NOCACHE_NOINIT_END = ENDADDR(.OS_Default_Background_Task_VAR_NOCACHE_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_FAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_FAR_NOCACHE_ZERO_INIT )
.OS_Default_Background_Task_VAR_NOCACHE_ZERO_INIT ALIGN(4) :> .
.OS_Default_Background_Task_VAR_NOCACHE_ZERO_INIT_bss CLEAR :> .
_OS_Default_Background_Task_VAR_NOCACHE_ZERO_INIT_START = ADDR(.OS_Default_Background_Task_VAR_NOCACHE_ZERO_INIT);
_OS_Default_Background_Task_VAR_NOCACHE_ZERO_INIT_END = ENDADDR(.OS_Default_Background_Task_VAR_NOCACHE_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_NEAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_NEAR_NOCACHE_INIT )
.OS_Default_Background_Task_VAR_FAST_NOCACHE ALIGN(4) :> .
_OS_Default_Background_Task_VAR_FAST_NOCACHE_START = ADDR(.OS_Default_Background_Task_VAR_FAST_NOCACHE);
_OS_Default_Background_Task_VAR_FAST_NOCACHE_END = ENDADDR(.OS_Default_Background_Task_VAR_FAST_NOCACHE) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_NEAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_NEAR_NOCACHE_NOINIT )
.OS_Default_Background_Task_VAR_FAST_NOCACHE_NOINIT ALIGN(4) :> .
_OS_Default_Background_Task_VAR_FAST_NOCACHE_NOINIT_START = ADDR(.OS_Default_Background_Task_VAR_FAST_NOCACHE_NOINIT);
_OS_Default_Background_Task_VAR_FAST_NOCACHE_NOINIT_END = ENDADDR(.OS_Default_Background_Task_VAR_FAST_NOCACHE_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_NEAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_NEAR_NOCACHE_ZERO_INIT )
.OS_Default_Background_Task_VAR_FAST_NOCACHE_ZERO_INIT ALIGN(4) :> .
.OS_Default_Background_Task_VAR_FAST_NOCACHE_ZERO_INIT_bss CLEAR :> .
_OS_Default_Background_Task_VAR_FAST_NOCACHE_ZERO_INIT_START = ADDR(.OS_Default_Background_Task_VAR_FAST_NOCACHE_ZERO_INIT);
_OS_Default_Background_Task_VAR_FAST_NOCACHE_ZERO_INIT_END = ENDADDR(.OS_Default_Background_Task_VAR_FAST_NOCACHE_ZERO_INIT_bss) - 1;
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK
. = ALIGN(4);
_OS_Default_Background_Task_VAR_ALL_END = .-1;
__OS_Default_Background_Task_VAR_ALL_END = .-1;
# undef OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_FAR
# undef OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_FAR
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_FAR_CACHE
# undef OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_FAR_CACHE_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_FAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_FAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_FAR_NOCACHE
# undef OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_FAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_FAR_NOCACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_NEAR
# undef OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_NEAR
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_NEAR_CACHE
# undef OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_NEAR_CACHE_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_NEAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_NEAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_NEAR_NOCACHE
# undef OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_NEAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_BACKGROUND_TASK_NEAR_NOCACHE_ZERO_INIT
#endif



#ifdef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK
. = ALIGN(4);
_OS_Default_Init_Task_VAR_ALL_START = .;
__OS_Default_Init_Task_VAR_ALL_START = .;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR_CACHE_INIT )
.OS_Default_Init_Task_VAR ALIGN(4) :> .
_OS_Default_Init_Task_VAR_START = ADDR(.OS_Default_Init_Task_VAR);
_OS_Default_Init_Task_VAR_END = ENDADDR(.OS_Default_Init_Task_VAR) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR_CACHE_NOINIT )
.OS_Default_Init_Task_VAR_NOINIT ALIGN(4) :> .
_OS_Default_Init_Task_VAR_NOINIT_START = ADDR(.OS_Default_Init_Task_VAR_NOINIT);
_OS_Default_Init_Task_VAR_NOINIT_END = ENDADDR(.OS_Default_Init_Task_VAR_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR_CACHE_ZERO_INIT )
.OS_Default_Init_Task_VAR_ZERO_INIT ALIGN(4) :> .
.OS_Default_Init_Task_VAR_ZERO_INIT_bss CLEAR :> .
_OS_Default_Init_Task_VAR_ZERO_INIT_START = ADDR(.OS_Default_Init_Task_VAR_ZERO_INIT);
_OS_Default_Init_Task_VAR_ZERO_INIT_END = ENDADDR(.OS_Default_Init_Task_VAR_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR_CACHE_INIT )
.OS_Default_Init_Task_VAR_FAST ALIGN(4) :> .
_OS_Default_Init_Task_VAR_FAST_START = ADDR(.OS_Default_Init_Task_VAR_FAST);
_OS_Default_Init_Task_VAR_FAST_END = ENDADDR(.OS_Default_Init_Task_VAR_FAST) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR_CACHE_NOINIT )
.OS_Default_Init_Task_VAR_FAST_NOINIT ALIGN(4) :> .
_OS_Default_Init_Task_VAR_FAST_NOINIT_START = ADDR(.OS_Default_Init_Task_VAR_FAST_NOINIT);
_OS_Default_Init_Task_VAR_FAST_NOINIT_END = ENDADDR(.OS_Default_Init_Task_VAR_FAST_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR_CACHE_ZERO_INIT )
.OS_Default_Init_Task_VAR_FAST_ZERO_INIT ALIGN(4) :> .
.OS_Default_Init_Task_VAR_FAST_ZERO_INIT_bss CLEAR :> .
_OS_Default_Init_Task_VAR_FAST_ZERO_INIT_START = ADDR(.OS_Default_Init_Task_VAR_FAST_ZERO_INIT);
_OS_Default_Init_Task_VAR_FAST_ZERO_INIT_END = ENDADDR(.OS_Default_Init_Task_VAR_FAST_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR_NOCACHE_INIT )
.OS_Default_Init_Task_VAR_NOCACHE ALIGN(4) :> .
_OS_Default_Init_Task_VAR_NOCACHE_START = ADDR(.OS_Default_Init_Task_VAR_NOCACHE);
_OS_Default_Init_Task_VAR_NOCACHE_END = ENDADDR(.OS_Default_Init_Task_VAR_NOCACHE) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR_NOCACHE_NOINIT )
.OS_Default_Init_Task_VAR_NOCACHE_NOINIT ALIGN(4) :> .
_OS_Default_Init_Task_VAR_NOCACHE_NOINIT_START = ADDR(.OS_Default_Init_Task_VAR_NOCACHE_NOINIT);
_OS_Default_Init_Task_VAR_NOCACHE_NOINIT_END = ENDADDR(.OS_Default_Init_Task_VAR_NOCACHE_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR_NOCACHE_ZERO_INIT )
.OS_Default_Init_Task_VAR_NOCACHE_ZERO_INIT ALIGN(4) :> .
.OS_Default_Init_Task_VAR_NOCACHE_ZERO_INIT_bss CLEAR :> .
_OS_Default_Init_Task_VAR_NOCACHE_ZERO_INIT_START = ADDR(.OS_Default_Init_Task_VAR_NOCACHE_ZERO_INIT);
_OS_Default_Init_Task_VAR_NOCACHE_ZERO_INIT_END = ENDADDR(.OS_Default_Init_Task_VAR_NOCACHE_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR_NOCACHE_INIT )
.OS_Default_Init_Task_VAR_FAST_NOCACHE ALIGN(4) :> .
_OS_Default_Init_Task_VAR_FAST_NOCACHE_START = ADDR(.OS_Default_Init_Task_VAR_FAST_NOCACHE);
_OS_Default_Init_Task_VAR_FAST_NOCACHE_END = ENDADDR(.OS_Default_Init_Task_VAR_FAST_NOCACHE) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR_NOCACHE_NOINIT )
.OS_Default_Init_Task_VAR_FAST_NOCACHE_NOINIT ALIGN(4) :> .
_OS_Default_Init_Task_VAR_FAST_NOCACHE_NOINIT_START = ADDR(.OS_Default_Init_Task_VAR_FAST_NOCACHE_NOINIT);
_OS_Default_Init_Task_VAR_FAST_NOCACHE_NOINIT_END = ENDADDR(.OS_Default_Init_Task_VAR_FAST_NOCACHE_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR_NOCACHE_ZERO_INIT )
.OS_Default_Init_Task_VAR_FAST_NOCACHE_ZERO_INIT ALIGN(4) :> .
.OS_Default_Init_Task_VAR_FAST_NOCACHE_ZERO_INIT_bss CLEAR :> .
_OS_Default_Init_Task_VAR_FAST_NOCACHE_ZERO_INIT_START = ADDR(.OS_Default_Init_Task_VAR_FAST_NOCACHE_ZERO_INIT);
_OS_Default_Init_Task_VAR_FAST_NOCACHE_ZERO_INIT_END = ENDADDR(.OS_Default_Init_Task_VAR_FAST_NOCACHE_ZERO_INIT_bss) - 1;
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK
. = ALIGN(4);
_OS_Default_Init_Task_VAR_ALL_END = .-1;
__OS_Default_Init_Task_VAR_ALL_END = .-1;
# undef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR
# undef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR_CACHE
# undef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR_CACHE_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR_NOCACHE
# undef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR_NOCACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR
# undef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR_CACHE
# undef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR_CACHE_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR_NOCACHE
# undef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR_NOCACHE_ZERO_INIT
#endif



#ifdef OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK
. = ALIGN(4);
_OS_Default_RTE_Mode_switch_Task_VAR_ALL_START = .;
__OS_Default_RTE_Mode_switch_Task_VAR_ALL_START = .;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_FAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_FAR_CACHE_INIT )
.OS_Default_RTE_Mode_switch_Task_VAR ALIGN(4) :> .
_OS_Default_RTE_Mode_switch_Task_VAR_START = ADDR(.OS_Default_RTE_Mode_switch_Task_VAR);
_OS_Default_RTE_Mode_switch_Task_VAR_END = ENDADDR(.OS_Default_RTE_Mode_switch_Task_VAR) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_FAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_FAR_CACHE_NOINIT )
.OS_Default_RTE_Mode_switch_Task_VAR_NOINIT ALIGN(4) :> .
_OS_Default_RTE_Mode_switch_Task_VAR_NOINIT_START = ADDR(.OS_Default_RTE_Mode_switch_Task_VAR_NOINIT);
_OS_Default_RTE_Mode_switch_Task_VAR_NOINIT_END = ENDADDR(.OS_Default_RTE_Mode_switch_Task_VAR_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_FAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_FAR_CACHE_ZERO_INIT )
.OS_Default_RTE_Mode_switch_Task_VAR_ZERO_INIT ALIGN(4) :> .
.OS_Default_RTE_Mode_switch_Task_VAR_ZERO_INIT_bss CLEAR :> .
_OS_Default_RTE_Mode_switch_Task_VAR_ZERO_INIT_START = ADDR(.OS_Default_RTE_Mode_switch_Task_VAR_ZERO_INIT);
_OS_Default_RTE_Mode_switch_Task_VAR_ZERO_INIT_END = ENDADDR(.OS_Default_RTE_Mode_switch_Task_VAR_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_NEAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_NEAR_CACHE_INIT )
.OS_Default_RTE_Mode_switch_Task_VAR_FAST ALIGN(4) :> .
_OS_Default_RTE_Mode_switch_Task_VAR_FAST_START = ADDR(.OS_Default_RTE_Mode_switch_Task_VAR_FAST);
_OS_Default_RTE_Mode_switch_Task_VAR_FAST_END = ENDADDR(.OS_Default_RTE_Mode_switch_Task_VAR_FAST) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_NEAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_NEAR_CACHE_NOINIT )
.OS_Default_RTE_Mode_switch_Task_VAR_FAST_NOINIT ALIGN(4) :> .
_OS_Default_RTE_Mode_switch_Task_VAR_FAST_NOINIT_START = ADDR(.OS_Default_RTE_Mode_switch_Task_VAR_FAST_NOINIT);
_OS_Default_RTE_Mode_switch_Task_VAR_FAST_NOINIT_END = ENDADDR(.OS_Default_RTE_Mode_switch_Task_VAR_FAST_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_NEAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_NEAR_CACHE_ZERO_INIT )
.OS_Default_RTE_Mode_switch_Task_VAR_FAST_ZERO_INIT ALIGN(4) :> .
.OS_Default_RTE_Mode_switch_Task_VAR_FAST_ZERO_INIT_bss CLEAR :> .
_OS_Default_RTE_Mode_switch_Task_VAR_FAST_ZERO_INIT_START = ADDR(.OS_Default_RTE_Mode_switch_Task_VAR_FAST_ZERO_INIT);
_OS_Default_RTE_Mode_switch_Task_VAR_FAST_ZERO_INIT_END = ENDADDR(.OS_Default_RTE_Mode_switch_Task_VAR_FAST_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_FAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_FAR_NOCACHE_INIT )
.OS_Default_RTE_Mode_switch_Task_VAR_NOCACHE ALIGN(4) :> .
_OS_Default_RTE_Mode_switch_Task_VAR_NOCACHE_START = ADDR(.OS_Default_RTE_Mode_switch_Task_VAR_NOCACHE);
_OS_Default_RTE_Mode_switch_Task_VAR_NOCACHE_END = ENDADDR(.OS_Default_RTE_Mode_switch_Task_VAR_NOCACHE) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_FAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_FAR_NOCACHE_NOINIT )
.OS_Default_RTE_Mode_switch_Task_VAR_NOCACHE_NOINIT ALIGN(4) :> .
_OS_Default_RTE_Mode_switch_Task_VAR_NOCACHE_NOINIT_START = ADDR(.OS_Default_RTE_Mode_switch_Task_VAR_NOCACHE_NOINIT);
_OS_Default_RTE_Mode_switch_Task_VAR_NOCACHE_NOINIT_END = ENDADDR(.OS_Default_RTE_Mode_switch_Task_VAR_NOCACHE_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_FAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_FAR_NOCACHE_ZERO_INIT )
.OS_Default_RTE_Mode_switch_Task_VAR_NOCACHE_ZERO_INIT ALIGN(4) :> .
.OS_Default_RTE_Mode_switch_Task_VAR_NOCACHE_ZERO_INIT_bss CLEAR :> .
_OS_Default_RTE_Mode_switch_Task_VAR_NOCACHE_ZERO_INIT_START = ADDR(.OS_Default_RTE_Mode_switch_Task_VAR_NOCACHE_ZERO_INIT);
_OS_Default_RTE_Mode_switch_Task_VAR_NOCACHE_ZERO_INIT_END = ENDADDR(.OS_Default_RTE_Mode_switch_Task_VAR_NOCACHE_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_NEAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_NEAR_NOCACHE_INIT )
.OS_Default_RTE_Mode_switch_Task_VAR_FAST_NOCACHE ALIGN(4) :> .
_OS_Default_RTE_Mode_switch_Task_VAR_FAST_NOCACHE_START = ADDR(.OS_Default_RTE_Mode_switch_Task_VAR_FAST_NOCACHE);
_OS_Default_RTE_Mode_switch_Task_VAR_FAST_NOCACHE_END = ENDADDR(.OS_Default_RTE_Mode_switch_Task_VAR_FAST_NOCACHE) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_NEAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_NEAR_NOCACHE_NOINIT )
.OS_Default_RTE_Mode_switch_Task_VAR_FAST_NOCACHE_NOINIT ALIGN(4) :> .
_OS_Default_RTE_Mode_switch_Task_VAR_FAST_NOCACHE_NOINIT_START = ADDR(.OS_Default_RTE_Mode_switch_Task_VAR_FAST_NOCACHE_NOINIT);
_OS_Default_RTE_Mode_switch_Task_VAR_FAST_NOCACHE_NOINIT_END = ENDADDR(.OS_Default_RTE_Mode_switch_Task_VAR_FAST_NOCACHE_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_NEAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_NEAR_NOCACHE_ZERO_INIT )
.OS_Default_RTE_Mode_switch_Task_VAR_FAST_NOCACHE_ZERO_INIT ALIGN(4) :> .
.OS_Default_RTE_Mode_switch_Task_VAR_FAST_NOCACHE_ZERO_INIT_bss CLEAR :> .
_OS_Default_RTE_Mode_switch_Task_VAR_FAST_NOCACHE_ZERO_INIT_START = ADDR(.OS_Default_RTE_Mode_switch_Task_VAR_FAST_NOCACHE_ZERO_INIT);
_OS_Default_RTE_Mode_switch_Task_VAR_FAST_NOCACHE_ZERO_INIT_END = ENDADDR(.OS_Default_RTE_Mode_switch_Task_VAR_FAST_NOCACHE_ZERO_INIT_bss) - 1;
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK
. = ALIGN(4);
_OS_Default_RTE_Mode_switch_Task_VAR_ALL_END = .-1;
__OS_Default_RTE_Mode_switch_Task_VAR_ALL_END = .-1;
# undef OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_FAR
# undef OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_FAR
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_FAR_CACHE
# undef OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_FAR_CACHE_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_FAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_FAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_FAR_NOCACHE
# undef OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_FAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_FAR_NOCACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_NEAR
# undef OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_NEAR
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_NEAR_CACHE
# undef OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_NEAR_CACHE_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_NEAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_NEAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_NEAR_NOCACHE
# undef OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_NEAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_RTE_MODE_SWITCH_TASK_NEAR_NOCACHE_ZERO_INIT
#endif



#ifdef OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0
. = ALIGN(4);
_OS_IdleTask_OsCore_CORE0_VAR_ALL_START = .;
__OS_IdleTask_OsCore_CORE0_VAR_ALL_START = .;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0 ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_FAR ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_FAR_CACHE_INIT )
.OS_IdleTask_OsCore_CORE0_VAR ALIGN(4) :> .
_OS_IdleTask_OsCore_CORE0_VAR_START = ADDR(.OS_IdleTask_OsCore_CORE0_VAR);
_OS_IdleTask_OsCore_CORE0_VAR_END = ENDADDR(.OS_IdleTask_OsCore_CORE0_VAR) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0 ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_FAR ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_FAR_CACHE_NOINIT )
.OS_IdleTask_OsCore_CORE0_VAR_NOINIT ALIGN(4) :> .
_OS_IdleTask_OsCore_CORE0_VAR_NOINIT_START = ADDR(.OS_IdleTask_OsCore_CORE0_VAR_NOINIT);
_OS_IdleTask_OsCore_CORE0_VAR_NOINIT_END = ENDADDR(.OS_IdleTask_OsCore_CORE0_VAR_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0 ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_FAR ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_FAR_CACHE_ZERO_INIT )
.OS_IdleTask_OsCore_CORE0_VAR_ZERO_INIT ALIGN(4) :> .
.OS_IdleTask_OsCore_CORE0_VAR_ZERO_INIT_bss CLEAR :> .
_OS_IdleTask_OsCore_CORE0_VAR_ZERO_INIT_START = ADDR(.OS_IdleTask_OsCore_CORE0_VAR_ZERO_INIT);
_OS_IdleTask_OsCore_CORE0_VAR_ZERO_INIT_END = ENDADDR(.OS_IdleTask_OsCore_CORE0_VAR_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0 ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_NEAR ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_NEAR_CACHE_INIT )
.OS_IdleTask_OsCore_CORE0_VAR_FAST ALIGN(4) :> .
_OS_IdleTask_OsCore_CORE0_VAR_FAST_START = ADDR(.OS_IdleTask_OsCore_CORE0_VAR_FAST);
_OS_IdleTask_OsCore_CORE0_VAR_FAST_END = ENDADDR(.OS_IdleTask_OsCore_CORE0_VAR_FAST) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0 ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_NEAR ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_NEAR_CACHE_NOINIT )
.OS_IdleTask_OsCore_CORE0_VAR_FAST_NOINIT ALIGN(4) :> .
_OS_IdleTask_OsCore_CORE0_VAR_FAST_NOINIT_START = ADDR(.OS_IdleTask_OsCore_CORE0_VAR_FAST_NOINIT);
_OS_IdleTask_OsCore_CORE0_VAR_FAST_NOINIT_END = ENDADDR(.OS_IdleTask_OsCore_CORE0_VAR_FAST_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0 ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_NEAR ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_NEAR_CACHE_ZERO_INIT )
.OS_IdleTask_OsCore_CORE0_VAR_FAST_ZERO_INIT ALIGN(4) :> .
.OS_IdleTask_OsCore_CORE0_VAR_FAST_ZERO_INIT_bss CLEAR :> .
_OS_IdleTask_OsCore_CORE0_VAR_FAST_ZERO_INIT_START = ADDR(.OS_IdleTask_OsCore_CORE0_VAR_FAST_ZERO_INIT);
_OS_IdleTask_OsCore_CORE0_VAR_FAST_ZERO_INIT_END = ENDADDR(.OS_IdleTask_OsCore_CORE0_VAR_FAST_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0 ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_FAR ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_FAR_NOCACHE_INIT )
.OS_IdleTask_OsCore_CORE0_VAR_NOCACHE ALIGN(4) :> .
_OS_IdleTask_OsCore_CORE0_VAR_NOCACHE_START = ADDR(.OS_IdleTask_OsCore_CORE0_VAR_NOCACHE);
_OS_IdleTask_OsCore_CORE0_VAR_NOCACHE_END = ENDADDR(.OS_IdleTask_OsCore_CORE0_VAR_NOCACHE) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0 ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_FAR ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_FAR_NOCACHE_NOINIT )
.OS_IdleTask_OsCore_CORE0_VAR_NOCACHE_NOINIT ALIGN(4) :> .
_OS_IdleTask_OsCore_CORE0_VAR_NOCACHE_NOINIT_START = ADDR(.OS_IdleTask_OsCore_CORE0_VAR_NOCACHE_NOINIT);
_OS_IdleTask_OsCore_CORE0_VAR_NOCACHE_NOINIT_END = ENDADDR(.OS_IdleTask_OsCore_CORE0_VAR_NOCACHE_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0 ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_FAR ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_FAR_NOCACHE_ZERO_INIT )
.OS_IdleTask_OsCore_CORE0_VAR_NOCACHE_ZERO_INIT ALIGN(4) :> .
.OS_IdleTask_OsCore_CORE0_VAR_NOCACHE_ZERO_INIT_bss CLEAR :> .
_OS_IdleTask_OsCore_CORE0_VAR_NOCACHE_ZERO_INIT_START = ADDR(.OS_IdleTask_OsCore_CORE0_VAR_NOCACHE_ZERO_INIT);
_OS_IdleTask_OsCore_CORE0_VAR_NOCACHE_ZERO_INIT_END = ENDADDR(.OS_IdleTask_OsCore_CORE0_VAR_NOCACHE_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0 ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_NEAR ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_NEAR_NOCACHE_INIT )
.OS_IdleTask_OsCore_CORE0_VAR_FAST_NOCACHE ALIGN(4) :> .
_OS_IdleTask_OsCore_CORE0_VAR_FAST_NOCACHE_START = ADDR(.OS_IdleTask_OsCore_CORE0_VAR_FAST_NOCACHE);
_OS_IdleTask_OsCore_CORE0_VAR_FAST_NOCACHE_END = ENDADDR(.OS_IdleTask_OsCore_CORE0_VAR_FAST_NOCACHE) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0 ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_NEAR ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_NEAR_NOCACHE_NOINIT )
.OS_IdleTask_OsCore_CORE0_VAR_FAST_NOCACHE_NOINIT ALIGN(4) :> .
_OS_IdleTask_OsCore_CORE0_VAR_FAST_NOCACHE_NOINIT_START = ADDR(.OS_IdleTask_OsCore_CORE0_VAR_FAST_NOCACHE_NOINIT);
_OS_IdleTask_OsCore_CORE0_VAR_FAST_NOCACHE_NOINIT_END = ENDADDR(.OS_IdleTask_OsCore_CORE0_VAR_FAST_NOCACHE_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0 ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_NEAR ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_NEAR_NOCACHE_ZERO_INIT )
.OS_IdleTask_OsCore_CORE0_VAR_FAST_NOCACHE_ZERO_INIT ALIGN(4) :> .
.OS_IdleTask_OsCore_CORE0_VAR_FAST_NOCACHE_ZERO_INIT_bss CLEAR :> .
_OS_IdleTask_OsCore_CORE0_VAR_FAST_NOCACHE_ZERO_INIT_START = ADDR(.OS_IdleTask_OsCore_CORE0_VAR_FAST_NOCACHE_ZERO_INIT);
_OS_IdleTask_OsCore_CORE0_VAR_FAST_NOCACHE_ZERO_INIT_END = ENDADDR(.OS_IdleTask_OsCore_CORE0_VAR_FAST_NOCACHE_ZERO_INIT_bss) - 1;
#endif

#ifdef OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0
. = ALIGN(4);
_OS_IdleTask_OsCore_CORE0_VAR_ALL_END = .-1;
__OS_IdleTask_OsCore_CORE0_VAR_ALL_END = .-1;
# undef OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0
#endif

#ifdef OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_FAR
# undef OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_FAR
#endif

#ifdef OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_FAR_CACHE
# undef OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_FAR_CACHE_INIT
# undef OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_FAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_FAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_FAR_NOCACHE
# undef OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_FAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_FAR_NOCACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_NEAR
# undef OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_NEAR
#endif

#ifdef OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_NEAR_CACHE
# undef OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_NEAR_CACHE_INIT
# undef OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_NEAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_NEAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_NEAR_NOCACHE
# undef OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_NEAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_NEAR_NOCACHE_ZERO_INIT
#endif



#ifdef OS_LINK_VAR_TASK_OSTASK_BSW_ASIL
. = ALIGN(4);
_OS_OsTask_BSW_ASIL_VAR_ALL_START = .;
__OS_OsTask_BSW_ASIL_VAR_ALL_START = .;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_OSTASK_BSW_ASIL ) || defined ( OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_FAR ) || defined ( OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_FAR_CACHE_INIT )
.OS_OsTask_BSW_ASIL_VAR ALIGN(4) :> .
_OS_OsTask_BSW_ASIL_VAR_START = ADDR(.OS_OsTask_BSW_ASIL_VAR);
_OS_OsTask_BSW_ASIL_VAR_END = ENDADDR(.OS_OsTask_BSW_ASIL_VAR) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_OSTASK_BSW_ASIL ) || defined ( OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_FAR ) || defined ( OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_FAR_CACHE_NOINIT )
.OS_OsTask_BSW_ASIL_VAR_NOINIT ALIGN(4) :> .
_OS_OsTask_BSW_ASIL_VAR_NOINIT_START = ADDR(.OS_OsTask_BSW_ASIL_VAR_NOINIT);
_OS_OsTask_BSW_ASIL_VAR_NOINIT_END = ENDADDR(.OS_OsTask_BSW_ASIL_VAR_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_OSTASK_BSW_ASIL ) || defined ( OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_FAR ) || defined ( OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_FAR_CACHE_ZERO_INIT )
.OS_OsTask_BSW_ASIL_VAR_ZERO_INIT ALIGN(4) :> .
.OS_OsTask_BSW_ASIL_VAR_ZERO_INIT_bss CLEAR :> .
_OS_OsTask_BSW_ASIL_VAR_ZERO_INIT_START = ADDR(.OS_OsTask_BSW_ASIL_VAR_ZERO_INIT);
_OS_OsTask_BSW_ASIL_VAR_ZERO_INIT_END = ENDADDR(.OS_OsTask_BSW_ASIL_VAR_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_OSTASK_BSW_ASIL ) || defined ( OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_NEAR ) || defined ( OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_NEAR_CACHE_INIT )
.OS_OsTask_BSW_ASIL_VAR_FAST ALIGN(4) :> .
_OS_OsTask_BSW_ASIL_VAR_FAST_START = ADDR(.OS_OsTask_BSW_ASIL_VAR_FAST);
_OS_OsTask_BSW_ASIL_VAR_FAST_END = ENDADDR(.OS_OsTask_BSW_ASIL_VAR_FAST) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_OSTASK_BSW_ASIL ) || defined ( OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_NEAR ) || defined ( OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_NEAR_CACHE_NOINIT )
.OS_OsTask_BSW_ASIL_VAR_FAST_NOINIT ALIGN(4) :> .
_OS_OsTask_BSW_ASIL_VAR_FAST_NOINIT_START = ADDR(.OS_OsTask_BSW_ASIL_VAR_FAST_NOINIT);
_OS_OsTask_BSW_ASIL_VAR_FAST_NOINIT_END = ENDADDR(.OS_OsTask_BSW_ASIL_VAR_FAST_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_OSTASK_BSW_ASIL ) || defined ( OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_NEAR ) || defined ( OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_NEAR_CACHE_ZERO_INIT )
.OS_OsTask_BSW_ASIL_VAR_FAST_ZERO_INIT ALIGN(4) :> .
.OS_OsTask_BSW_ASIL_VAR_FAST_ZERO_INIT_bss CLEAR :> .
_OS_OsTask_BSW_ASIL_VAR_FAST_ZERO_INIT_START = ADDR(.OS_OsTask_BSW_ASIL_VAR_FAST_ZERO_INIT);
_OS_OsTask_BSW_ASIL_VAR_FAST_ZERO_INIT_END = ENDADDR(.OS_OsTask_BSW_ASIL_VAR_FAST_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_OSTASK_BSW_ASIL ) || defined ( OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_FAR ) || defined ( OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_FAR_NOCACHE_INIT )
.OS_OsTask_BSW_ASIL_VAR_NOCACHE ALIGN(4) :> .
_OS_OsTask_BSW_ASIL_VAR_NOCACHE_START = ADDR(.OS_OsTask_BSW_ASIL_VAR_NOCACHE);
_OS_OsTask_BSW_ASIL_VAR_NOCACHE_END = ENDADDR(.OS_OsTask_BSW_ASIL_VAR_NOCACHE) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_OSTASK_BSW_ASIL ) || defined ( OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_FAR ) || defined ( OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_FAR_NOCACHE_NOINIT )
.OS_OsTask_BSW_ASIL_VAR_NOCACHE_NOINIT ALIGN(4) :> .
_OS_OsTask_BSW_ASIL_VAR_NOCACHE_NOINIT_START = ADDR(.OS_OsTask_BSW_ASIL_VAR_NOCACHE_NOINIT);
_OS_OsTask_BSW_ASIL_VAR_NOCACHE_NOINIT_END = ENDADDR(.OS_OsTask_BSW_ASIL_VAR_NOCACHE_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_OSTASK_BSW_ASIL ) || defined ( OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_FAR ) || defined ( OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_FAR_NOCACHE_ZERO_INIT )
.OS_OsTask_BSW_ASIL_VAR_NOCACHE_ZERO_INIT ALIGN(4) :> .
.OS_OsTask_BSW_ASIL_VAR_NOCACHE_ZERO_INIT_bss CLEAR :> .
_OS_OsTask_BSW_ASIL_VAR_NOCACHE_ZERO_INIT_START = ADDR(.OS_OsTask_BSW_ASIL_VAR_NOCACHE_ZERO_INIT);
_OS_OsTask_BSW_ASIL_VAR_NOCACHE_ZERO_INIT_END = ENDADDR(.OS_OsTask_BSW_ASIL_VAR_NOCACHE_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_OSTASK_BSW_ASIL ) || defined ( OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_NEAR ) || defined ( OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_NEAR_NOCACHE_INIT )
.OS_OsTask_BSW_ASIL_VAR_FAST_NOCACHE ALIGN(4) :> .
_OS_OsTask_BSW_ASIL_VAR_FAST_NOCACHE_START = ADDR(.OS_OsTask_BSW_ASIL_VAR_FAST_NOCACHE);
_OS_OsTask_BSW_ASIL_VAR_FAST_NOCACHE_END = ENDADDR(.OS_OsTask_BSW_ASIL_VAR_FAST_NOCACHE) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_OSTASK_BSW_ASIL ) || defined ( OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_NEAR ) || defined ( OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_NEAR_NOCACHE_NOINIT )
.OS_OsTask_BSW_ASIL_VAR_FAST_NOCACHE_NOINIT ALIGN(4) :> .
_OS_OsTask_BSW_ASIL_VAR_FAST_NOCACHE_NOINIT_START = ADDR(.OS_OsTask_BSW_ASIL_VAR_FAST_NOCACHE_NOINIT);
_OS_OsTask_BSW_ASIL_VAR_FAST_NOCACHE_NOINIT_END = ENDADDR(.OS_OsTask_BSW_ASIL_VAR_FAST_NOCACHE_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_OSTASK_BSW_ASIL ) || defined ( OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_NEAR ) || defined ( OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_NEAR_NOCACHE_ZERO_INIT )
.OS_OsTask_BSW_ASIL_VAR_FAST_NOCACHE_ZERO_INIT ALIGN(4) :> .
.OS_OsTask_BSW_ASIL_VAR_FAST_NOCACHE_ZERO_INIT_bss CLEAR :> .
_OS_OsTask_BSW_ASIL_VAR_FAST_NOCACHE_ZERO_INIT_START = ADDR(.OS_OsTask_BSW_ASIL_VAR_FAST_NOCACHE_ZERO_INIT);
_OS_OsTask_BSW_ASIL_VAR_FAST_NOCACHE_ZERO_INIT_END = ENDADDR(.OS_OsTask_BSW_ASIL_VAR_FAST_NOCACHE_ZERO_INIT_bss) - 1;
#endif

#ifdef OS_LINK_VAR_TASK_OSTASK_BSW_ASIL
. = ALIGN(4);
_OS_OsTask_BSW_ASIL_VAR_ALL_END = .-1;
__OS_OsTask_BSW_ASIL_VAR_ALL_END = .-1;
# undef OS_LINK_VAR_TASK_OSTASK_BSW_ASIL
#endif

#ifdef OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_FAR
# undef OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_FAR
#endif

#ifdef OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_FAR_CACHE
# undef OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_FAR_CACHE_INIT
# undef OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_FAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_FAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_FAR_NOCACHE
# undef OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_FAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_FAR_NOCACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_NEAR
# undef OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_NEAR
#endif

#ifdef OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_NEAR_CACHE
# undef OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_NEAR_CACHE_INIT
# undef OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_NEAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_NEAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_NEAR_NOCACHE
# undef OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_NEAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_OSTASK_BSW_ASIL_NEAR_NOCACHE_ZERO_INIT
#endif



#ifdef OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM
. = ALIGN(4);
_OS_OsTask_LowPrioNvm_VAR_ALL_START = .;
__OS_OsTask_LowPrioNvm_VAR_ALL_START = .;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM ) || defined ( OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_FAR ) || defined ( OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_FAR_CACHE_INIT )
.OS_OsTask_LowPrioNvm_VAR ALIGN(4) :> .
_OS_OsTask_LowPrioNvm_VAR_START = ADDR(.OS_OsTask_LowPrioNvm_VAR);
_OS_OsTask_LowPrioNvm_VAR_END = ENDADDR(.OS_OsTask_LowPrioNvm_VAR) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM ) || defined ( OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_FAR ) || defined ( OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_FAR_CACHE_NOINIT )
.OS_OsTask_LowPrioNvm_VAR_NOINIT ALIGN(4) :> .
_OS_OsTask_LowPrioNvm_VAR_NOINIT_START = ADDR(.OS_OsTask_LowPrioNvm_VAR_NOINIT);
_OS_OsTask_LowPrioNvm_VAR_NOINIT_END = ENDADDR(.OS_OsTask_LowPrioNvm_VAR_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM ) || defined ( OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_FAR ) || defined ( OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_FAR_CACHE_ZERO_INIT )
.OS_OsTask_LowPrioNvm_VAR_ZERO_INIT ALIGN(4) :> .
.OS_OsTask_LowPrioNvm_VAR_ZERO_INIT_bss CLEAR :> .
_OS_OsTask_LowPrioNvm_VAR_ZERO_INIT_START = ADDR(.OS_OsTask_LowPrioNvm_VAR_ZERO_INIT);
_OS_OsTask_LowPrioNvm_VAR_ZERO_INIT_END = ENDADDR(.OS_OsTask_LowPrioNvm_VAR_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM ) || defined ( OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_NEAR ) || defined ( OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_NEAR_CACHE_INIT )
.OS_OsTask_LowPrioNvm_VAR_FAST ALIGN(4) :> .
_OS_OsTask_LowPrioNvm_VAR_FAST_START = ADDR(.OS_OsTask_LowPrioNvm_VAR_FAST);
_OS_OsTask_LowPrioNvm_VAR_FAST_END = ENDADDR(.OS_OsTask_LowPrioNvm_VAR_FAST) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM ) || defined ( OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_NEAR ) || defined ( OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_NEAR_CACHE_NOINIT )
.OS_OsTask_LowPrioNvm_VAR_FAST_NOINIT ALIGN(4) :> .
_OS_OsTask_LowPrioNvm_VAR_FAST_NOINIT_START = ADDR(.OS_OsTask_LowPrioNvm_VAR_FAST_NOINIT);
_OS_OsTask_LowPrioNvm_VAR_FAST_NOINIT_END = ENDADDR(.OS_OsTask_LowPrioNvm_VAR_FAST_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM ) || defined ( OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_NEAR ) || defined ( OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_NEAR_CACHE_ZERO_INIT )
.OS_OsTask_LowPrioNvm_VAR_FAST_ZERO_INIT ALIGN(4) :> .
.OS_OsTask_LowPrioNvm_VAR_FAST_ZERO_INIT_bss CLEAR :> .
_OS_OsTask_LowPrioNvm_VAR_FAST_ZERO_INIT_START = ADDR(.OS_OsTask_LowPrioNvm_VAR_FAST_ZERO_INIT);
_OS_OsTask_LowPrioNvm_VAR_FAST_ZERO_INIT_END = ENDADDR(.OS_OsTask_LowPrioNvm_VAR_FAST_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM ) || defined ( OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_FAR ) || defined ( OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_FAR_NOCACHE_INIT )
.OS_OsTask_LowPrioNvm_VAR_NOCACHE ALIGN(4) :> .
_OS_OsTask_LowPrioNvm_VAR_NOCACHE_START = ADDR(.OS_OsTask_LowPrioNvm_VAR_NOCACHE);
_OS_OsTask_LowPrioNvm_VAR_NOCACHE_END = ENDADDR(.OS_OsTask_LowPrioNvm_VAR_NOCACHE) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM ) || defined ( OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_FAR ) || defined ( OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_FAR_NOCACHE_NOINIT )
.OS_OsTask_LowPrioNvm_VAR_NOCACHE_NOINIT ALIGN(4) :> .
_OS_OsTask_LowPrioNvm_VAR_NOCACHE_NOINIT_START = ADDR(.OS_OsTask_LowPrioNvm_VAR_NOCACHE_NOINIT);
_OS_OsTask_LowPrioNvm_VAR_NOCACHE_NOINIT_END = ENDADDR(.OS_OsTask_LowPrioNvm_VAR_NOCACHE_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM ) || defined ( OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_FAR ) || defined ( OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_FAR_NOCACHE_ZERO_INIT )
.OS_OsTask_LowPrioNvm_VAR_NOCACHE_ZERO_INIT ALIGN(4) :> .
.OS_OsTask_LowPrioNvm_VAR_NOCACHE_ZERO_INIT_bss CLEAR :> .
_OS_OsTask_LowPrioNvm_VAR_NOCACHE_ZERO_INIT_START = ADDR(.OS_OsTask_LowPrioNvm_VAR_NOCACHE_ZERO_INIT);
_OS_OsTask_LowPrioNvm_VAR_NOCACHE_ZERO_INIT_END = ENDADDR(.OS_OsTask_LowPrioNvm_VAR_NOCACHE_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM ) || defined ( OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_NEAR ) || defined ( OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_NEAR_NOCACHE_INIT )
.OS_OsTask_LowPrioNvm_VAR_FAST_NOCACHE ALIGN(4) :> .
_OS_OsTask_LowPrioNvm_VAR_FAST_NOCACHE_START = ADDR(.OS_OsTask_LowPrioNvm_VAR_FAST_NOCACHE);
_OS_OsTask_LowPrioNvm_VAR_FAST_NOCACHE_END = ENDADDR(.OS_OsTask_LowPrioNvm_VAR_FAST_NOCACHE) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM ) || defined ( OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_NEAR ) || defined ( OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_NEAR_NOCACHE_NOINIT )
.OS_OsTask_LowPrioNvm_VAR_FAST_NOCACHE_NOINIT ALIGN(4) :> .
_OS_OsTask_LowPrioNvm_VAR_FAST_NOCACHE_NOINIT_START = ADDR(.OS_OsTask_LowPrioNvm_VAR_FAST_NOCACHE_NOINIT);
_OS_OsTask_LowPrioNvm_VAR_FAST_NOCACHE_NOINIT_END = ENDADDR(.OS_OsTask_LowPrioNvm_VAR_FAST_NOCACHE_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM ) || defined ( OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_NEAR ) || defined ( OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_NEAR_NOCACHE_ZERO_INIT )
.OS_OsTask_LowPrioNvm_VAR_FAST_NOCACHE_ZERO_INIT ALIGN(4) :> .
.OS_OsTask_LowPrioNvm_VAR_FAST_NOCACHE_ZERO_INIT_bss CLEAR :> .
_OS_OsTask_LowPrioNvm_VAR_FAST_NOCACHE_ZERO_INIT_START = ADDR(.OS_OsTask_LowPrioNvm_VAR_FAST_NOCACHE_ZERO_INIT);
_OS_OsTask_LowPrioNvm_VAR_FAST_NOCACHE_ZERO_INIT_END = ENDADDR(.OS_OsTask_LowPrioNvm_VAR_FAST_NOCACHE_ZERO_INIT_bss) - 1;
#endif

#ifdef OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM
. = ALIGN(4);
_OS_OsTask_LowPrioNvm_VAR_ALL_END = .-1;
__OS_OsTask_LowPrioNvm_VAR_ALL_END = .-1;
# undef OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM
#endif

#ifdef OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_FAR
# undef OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_FAR
#endif

#ifdef OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_FAR_CACHE
# undef OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_FAR_CACHE_INIT
# undef OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_FAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_FAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_FAR_NOCACHE
# undef OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_FAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_FAR_NOCACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_NEAR
# undef OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_NEAR
#endif

#ifdef OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_NEAR_CACHE
# undef OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_NEAR_CACHE_INIT
# undef OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_NEAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_NEAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_NEAR_NOCACHE
# undef OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_NEAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_OSTASK_LOWPRIONVM_NEAR_NOCACHE_ZERO_INIT
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



#ifdef OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR
. = ALIGN(4);
_OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_ALL_START = .;
__OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_ALL_START = .;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR ) || defined ( OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_FAR_CACHE_INIT )
.OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR ALIGN(4) :> .
_OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_START = ADDR(.OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR);
_OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_END = ENDADDR(.OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR ) || defined ( OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_FAR_CACHE_NOINIT )
.OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_NOINIT ALIGN(4) :> .
_OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_NOINIT_START = ADDR(.OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_NOINIT);
_OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_NOINIT_END = ENDADDR(.OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR ) || defined ( OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_FAR_CACHE_ZERO_INIT )
.OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_ZERO_INIT ALIGN(4) :> .
.OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_ZERO_INIT_bss CLEAR :> .
_OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_ZERO_INIT_START = ADDR(.OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_ZERO_INIT);
_OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_ZERO_INIT_END = ENDADDR(.OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR ) || defined ( OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_NEAR_CACHE_INIT )
.OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_FAST ALIGN(4) :> .
_OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_FAST_START = ADDR(.OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_FAST);
_OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_FAST_END = ENDADDR(.OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_FAST) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR ) || defined ( OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_NEAR_CACHE_NOINIT )
.OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_FAST_NOINIT ALIGN(4) :> .
_OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_FAST_NOINIT_START = ADDR(.OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_FAST_NOINIT);
_OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_FAST_NOINIT_END = ENDADDR(.OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_FAST_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR ) || defined ( OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_NEAR_CACHE_ZERO_INIT )
.OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_FAST_ZERO_INIT ALIGN(4) :> .
.OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_FAST_ZERO_INIT_bss CLEAR :> .
_OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_FAST_ZERO_INIT_START = ADDR(.OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_FAST_ZERO_INIT);
_OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_FAST_ZERO_INIT_END = ENDADDR(.OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_FAST_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR ) || defined ( OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_FAR_NOCACHE_INIT )
.OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_NOCACHE ALIGN(4) :> .
_OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_NOCACHE_START = ADDR(.OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_NOCACHE);
_OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_NOCACHE_END = ENDADDR(.OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_NOCACHE) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR ) || defined ( OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_FAR_NOCACHE_NOINIT )
.OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_NOCACHE_NOINIT ALIGN(4) :> .
_OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_NOCACHE_NOINIT_START = ADDR(.OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_NOCACHE_NOINIT);
_OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_NOCACHE_NOINIT_END = ENDADDR(.OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_NOCACHE_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR ) || defined ( OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_FAR_NOCACHE_ZERO_INIT )
.OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_NOCACHE_ZERO_INIT ALIGN(4) :> .
.OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_NOCACHE_ZERO_INIT_bss CLEAR :> .
_OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_NOCACHE_ZERO_INIT_START = ADDR(.OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_NOCACHE_ZERO_INIT);
_OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_NOCACHE_ZERO_INIT_END = ENDADDR(.OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_NOCACHE_ZERO_INIT_bss) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR ) || defined ( OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_NEAR_NOCACHE_INIT )
.OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_FAST_NOCACHE ALIGN(4) :> .
_OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_FAST_NOCACHE_START = ADDR(.OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_FAST_NOCACHE);
_OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_FAST_NOCACHE_END = ENDADDR(.OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_FAST_NOCACHE) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR ) || defined ( OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_NEAR_NOCACHE_NOINIT )
.OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_FAST_NOCACHE_NOINIT ALIGN(4) :> .
_OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_FAST_NOCACHE_NOINIT_START = ADDR(.OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_FAST_NOCACHE_NOINIT);
_OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_FAST_NOCACHE_NOINIT_END = ENDADDR(.OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_FAST_NOCACHE_NOINIT) - 1;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR ) || defined ( OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_NEAR_NOCACHE_ZERO_INIT )
.OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_FAST_NOCACHE_ZERO_INIT ALIGN(4) :> .
.OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_FAST_NOCACHE_ZERO_INIT_bss CLEAR :> .
_OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_FAST_NOCACHE_ZERO_INIT_START = ADDR(.OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_FAST_NOCACHE_ZERO_INIT);
_OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_FAST_NOCACHE_ZERO_INIT_END = ENDADDR(.OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_FAST_NOCACHE_ZERO_INIT_bss) - 1;
#endif

#ifdef OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR
. = ALIGN(4);
_OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_ALL_END = .-1;
__OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_VAR_ALL_END = .-1;
# undef OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR
#endif

#ifdef OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_FAR
# undef OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_FAR
#endif

#ifdef OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_FAR_CACHE
# undef OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_FAR_CACHE_INIT
# undef OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_FAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_FAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_FAR_NOCACHE
# undef OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_FAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_FAR_NOCACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_NEAR
# undef OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_NEAR
#endif

#ifdef OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_NEAR_CACHE
# undef OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_NEAR_CACHE_INIT
# undef OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_NEAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_NEAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_NEAR_NOCACHE
# undef OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_NEAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_NEAR_NOCACHE_ZERO_INIT
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


