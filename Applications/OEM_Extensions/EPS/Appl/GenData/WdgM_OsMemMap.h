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
 *            Module: WdgM
 *           Program: MSR BAC 4.x (MSR_Bmw_SLP4)
 *          Customer: Nexteer Automotive Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Renesas RH850 P1M R7F701363EAFP
 *    License Scope : The usage is restricted to CBD1700369_D04
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: WdgM_OsMemMap.h
 *   Generation Time: 2018-01-02 16:37:32
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


/* PRQA S 0883 EOF */ /* MD_WdgM_0883 */

/********************************************************************************************************************** 
 *  Memory sections for core 0 
 *********************************************************************************************************************/ 
/* Memory section(s) for supervised entity 'WdgMSupervisedEntity_StartApplication' */ 
#ifdef WDGM_SE0_START_SEC_VAR_NOINIT_UNSPECIFIED_CORE0_PRIVATE 
# undef WDGM_SE0_START_SEC_VAR_NOINIT_UNSPECIFIED_CORE0_PRIVATE /* PRQA S 0841 */ /* MD_MSR_19.6 */ 
# define OS_START_SEC_OsApplication_ASIL_VAR_NOINIT_UNSPECIFIED 
#endif /* ifdef WDGM_SE0_START_SEC_VAR_NOINIT_UNSPECIFIED_CORE0_PRIVATE */ 
 
#ifdef WDGM_SE0_STOP_SEC_VAR_NOINIT_UNSPECIFIED_CORE0_PRIVATE 
# undef WDGM_SE0_STOP_SEC_VAR_NOINIT_UNSPECIFIED_CORE0_PRIVATE /* PRQA S 0841 */ /* MD_MSR_19.6 */ 
# define OS_STOP_SEC_OsApplication_ASIL_VAR_NOINIT_UNSPECIFIED 
#endif /* ifdef WDGM_SE0_STOP_SEC_VAR_NOINIT_UNSPECIFIED_CORE0_PRIVATE */ 
 
/* Supervised entity 'WdgMSupervisedEntity_StartApplication' has an alive counter */ 
#ifdef WDGM_SE0_START_SEC_VAR_NOINIT_32BIT_CORE0_PRIVATE 
# undef WDGM_SE0_START_SEC_VAR_NOINIT_32BIT_CORE0_PRIVATE /* PRQA S 0841 */ /* MD_MSR_19.6 */ 
# define OS_START_SEC_OsApplication_ASIL_VAR_NOINIT_32BIT 
#endif /* ifdef WDGM_SE0_START_SEC_VAR_NOINIT_32BIT_CORE0_PRIVATE */ 
 
#ifdef WDGM_SE0_STOP_SEC_VAR_NOINIT_32BIT_CORE0_PRIVATE 
# undef WDGM_SE0_STOP_SEC_VAR_NOINIT_32BIT_CORE0_PRIVATE /* PRQA S 0841 */ /* MD_MSR_19.6 */ 
# define OS_STOP_SEC_OsApplication_ASIL_VAR_NOINIT_32BIT 
#endif /* ifdef WDGM_SE0_STOP_SEC_VAR_NOINIT_32BIT_CORE0_PRIVATE */ 
 
 
/********************************************************************************************************************** 
 *  Memory section(s) for core specific global data - core 0 
 *********************************************************************************************************************/ 
/* 
 * Read by all modules (tasks), written by WdgM_MainFunction() and WdgM_Init() only 
 */ 
#ifdef WDGM_GLOBAL_START_SEC_VAR_NOINIT_UNSPECIFIED_CORE0_PRIVATE 
# undef WDGM_GLOBAL_START_SEC_VAR_NOINIT_UNSPECIFIED_CORE0_PRIVATE /* PRQA S 0841 */ /* MD_MSR_19.6 */ 
# define OS_START_SEC_OsApplication_ASIL_VAR_NOINIT_UNSPECIFIED 
#endif /* ifdef WDGM_GLOBAL_START_SEC_VAR_NOINIT_UNSPECIFIED_CORE0_PRIVATE */ 
 
#ifdef WDGM_GLOBAL_STOP_SEC_VAR_NOINIT_UNSPECIFIED_CORE0_PRIVATE 
# undef WDGM_GLOBAL_STOP_SEC_VAR_NOINIT_UNSPECIFIED_CORE0_PRIVATE /* PRQA S 0841 */ /* MD_MSR_19.6 */ 
# define OS_STOP_SEC_OsApplication_ASIL_VAR_NOINIT_UNSPECIFIED 
#endif /* ifdef WDGM_GLOBAL_STOP_SEC_VAR_NOINIT_UNSPECIFIED_CORE0_PRIVATE */ 
 
 
 
/********************************************************************************************************************** 
 *  Global memory sections for single core usage 
 *********************************************************************************************************************/ 
#ifdef WDGM_GLOBAL_START_SEC_VAR_32BIT 
# undef WDGM_GLOBAL_START_SEC_VAR_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */ 
# define WDGM_START_SEC_VAR_32BIT 
#endif /* ifdef WDGM_GLOBAL_START_SEC_VAR_32BIT */ 
 
#ifdef WDGM_GLOBAL_STOP_SEC_VAR_32BIT 
# undef WDGM_GLOBAL_STOP_SEC_VAR_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */ 
# define WDGM_STOP_SEC_VAR_32BIT 
#endif /* ifdef WDGM_GLOBAL_STOP_SEC_VAR_32BIT */ 
 
/********************************************************************************************************************** 
 *  Memory section for WdgM global shared data 
 *********************************************************************************************************************/ 
/* 
 * Read and write by all modules (tasks) 
 * WdgM read:  WdgM_CheckpointReached() and WdgM_MainFunction() 
 * WdgM write: WdgM_CheckpointReached() and WdgM_Init() 
 */ 
#ifdef WDGM_GLOBAL_SHARED_START_SEC_VAR_NOINIT_UNSPECIFIED 
# undef WDGM_GLOBAL_SHARED_START_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */ 
# define OS_START_SEC_GLOBALSHARED_VAR_NOINIT_UNSPECIFIED 
#endif /* ifdef WDGM_GLOBAL_SHARED_START_SEC_VAR_NOINIT_UNSPECIFIED */ 
#ifdef WDGM_GLOBAL_SHARED_STOP_SEC_VAR_NOINIT_UNSPECIFIED 
# undef WDGM_GLOBAL_SHARED_STOP_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */ 
# define OS_STOP_SEC_GLOBALSHARED_VAR_NOINIT_UNSPECIFIED 
#endif /* ifdef WDGM_GLOBAL_SHARED_STOP_SEC_VAR_NOINIT_UNSPECIFIED */ 



/**********************************************************************************************************************
 *  END OF FILE: WdgM_OsMemMap.h
 *********************************************************************************************************************/

