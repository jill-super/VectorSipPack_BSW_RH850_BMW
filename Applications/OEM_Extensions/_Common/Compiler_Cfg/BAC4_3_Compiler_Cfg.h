#ifndef _BAC4_3_COMPILER_CFG_H
#define _BAC4_3_COMPILER_CFG_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
# define Dlog_CODE
# define Dlog_CONST
# define Dlog_VAR_NOINIT
# define Dlog_VAR_INIT
# define Dlog_VAR_ZERO_INIT

# define Dlog_APPL_CONST
# define Dlog_VAR
# define Dlog_APPL_DATA

#define EthDiagMM_CODE
#define ETHDIAGMM_CODE
#define ETHDIAGMM_CONST

# define Omc_CODE
# define Omc_CONST
# define Omc_VAR_NOINIT
# define Omc_VAR_INIT
# define Omc_VAR_ZERO_INIT

# define StdDiag_CODE
# define StdDiag_CONST
# define StdDiag_VAR_NOINIT
# define StdDiag_VAR_INIT
# define StdDiag_VAR_ZERO_INIT

# define StdDiag_VAR
# define StdDiag_APPL_CODE
# define StdDiag_APPL_DATA
# define StdDiag_APPL_CONST

# define PiaClient_CODE
# define PiaClient_CONST
# define PiaClient_VAR_NOINIT
# define PiaClient_VAR_INIT
# define PiaClient_VAR_ZERO_INIT

# define PiaClientSample_CODE
# define PiaClientSample_CONST
# define PiaClientSample_VAR_NOINIT
# define PiaClientSample_VAR_INIT
# define PiaClientSample_VAR_ZERO_INIT

# define PiaClientSample_VAR
# define PiaClientSample_APPL_DATA

# define IntegrationSample_CODE
# define IntegrationSample_CONST
# define IntegrationSample_VAR_NOINIT
# define IntegrationSample_VAR_INIT
# define IntegrationSample_VAR_ZERO_INIT
# define RTE_INTEGRATIONSAMPLE_DATA                            RTE_APPL_DATA

#define Vin_CODE
#define Vin_CONST
#define Vin_APPL_DATA
#define Vin_RTE_APPL_DATA
#define Vin_APPL_CONST
#define Vin_APPL_CODE
#define Vin_VAR_NOINIT
#define Vin_VAR_POWER_ON_INIT
#define Vin_VAR_FAST
#define Vin_VAR

#define Prog_CODE
#define Prog_VAR
#define Prog_CONST
#define Prog_APPL_DATA

#define FreeTimer_CODE
#define FreeTimer_APPL_DATA
#define FreeTimer_CONST
#define FreeTimer_VAR

#define MyBoot_CODE
#define MyBootMode_CODE
#define MyBoot_APPL_DATA
#define MyBootMode_APPL_DATA
#define MyBoot_CONST
#define MyBootMode_CONST
#define MyBoot_VAR
#define MyBootMode_VAR

#define HW_CODE
#define Hw_CODE
#define HW_APPL_DATA
#define Hw_APPL_DATA
#define HW_CONST
#define Hw_CONST
#define HW_VAR
#define Hw_VAR

#define DCM_VAR
/* Required for Prog_Internal.c (BTLD only) */
#define DCM_SEC_LEV_L17  0x09u

/* crypo.generic */
#define CHAR_BIT 8   



#endif  /* _BAC4_3__COMPILER_CFG_H */
/**********************************************************************************************************************
 *  END OF FILE: BAC4_3_Compiler_Cfg.h
 *********************************************************************************************************************/
