###############################################################################
# File Name  : Mcal_rules.mak                                                  #
# Description: Autosar makefile Template                                      #
#              This makefile is a template to implement the common            #
#              features of each project.                                      #
#              It is included by the Global.Makefile.target.make.$(Version)   #
#              and is supported from version 3.24 .                           #
#                                                                             #
# This Template is based on AUTOSAR_BSW_MakefileInterface.doc version 0.4     #
#                                                                             #
#-----------------------------------------------------------------------------#
#               C O P Y R I G H T                                             #
#-----------------------------------------------------------------------------#
# Copyright (c) 2017 by Vector Informatik GmbH.  All rights reserved.         #
#                                                                             #
#-----------------------------------------------------------------------------#
#               A U T H O R   I D E N T I T Y                                 #
#-----------------------------------------------------------------------------#
# Initials     Name                      Company                              #
# --------     ---------------------     -------------------------------------#
# Aba          Andreas Barac             Vector Informatik GmbH               #
# virgaj       Andrej Gazvoda            Vector Informatik GmbH               #
# virrsu       Roland Suess              Vector Informatik GmbH               #
#-----------------------------------------------------------------------------#
#               R E V I S I O N   H I S T O R Y                               #
#-----------------------------------------------------------------------------#
# Date         Version  Sign    Description                                   #
# ----------   -------  ------  ----------------------------------------------#
# 2007/06/13   1.00     Aba     Initial Version of Template (1.0)             #
# 2015-02-03   1.00.01  virgaj  Adaptation for Rh850P1x                       #
# 2016-07-18   1.02.00  virgaj  AUTOSAR_RH850_P1x_MCAL_Ver4.01.00             #
# 2016-07-18   1.02.80  virgaj  AUTOSAR_RH850_P1x_MCAL_Ver4.01.01_Pre_Release_CW32 #
# 2017-07-19   1.03.00  virrsu  Update with AUTOSAR_RH850_P1x_MCAL_Ver4.02.01.D (Dio, Fls, Mcu, Port, Spi incl. fix P001 and Wdg) and AUTOSAR_RH850_P1x_MCAL_Ver4.02.02.D (Adc, Gpt) #
#-----------------------------------------------------------------------------#
# TemplateVersion = 1.0                                                       #
# MAKEFILE        = 0.1                                                       #
###############################################################################


###############################################################
# REGISTRY
#

#e.g.: LIBRARIES_TO_BUILD      +=    $(LIB_OUPUT_PATH)\vendorx_canlib1.$(LIB_FILE_SUFFIX)
LIBRARIES_TO_BUILD      +=

# e.g.: CC_FILES_TO_BUILD       += drv\can_drv.c

#Path to Mcal source and include files
MCAL_BASE_PATH = ..\ThirdParty\Mcal_Rh850P1x\Supply\AUTOSAR_RH850_P1x_MCAL_Ver4.02.01.D
MCAL_ADDON_PATH = ..\ThirdParty\Mcal_Rh850P1x\Supply\AUTOSAR_RH850_P1x_MCAL_Ver4.02.02.D

CC_INCLUDE_PATH    += $(MCAL_BASE_PATH)\X1X\common_platform\generic\include

ifneq ($(MCAL_EXCLUDE_DIO),1)
DIO_BASE_PATH       = $(MCAL_BASE_PATH)\X1X\common_platform\modules\dio
CC_FILES_TO_BUILD  += $(DIO_BASE_PATH)\src\Dio.c $(DIO_BASE_PATH)\src\Dio_Version.c $(DIO_BASE_PATH)\src\Dio_Ram.c
CC_INCLUDE_PATH    += $(DIO_BASE_PATH)\include
endif

ifneq ($(MCAL_EXCLUDE_FLS),1)
FLS_BASE_PATH       = $(MCAL_BASE_PATH)\X1X\common_platform\modules\fls
CC_FILES_TO_BUILD  += $(FLS_BASE_PATH)\src\Fls.c $(FLS_BASE_PATH)\src\Fls_Internal.c $(FLS_BASE_PATH)\src\Fls_Ram.c $(FLS_BASE_PATH)\src\Fls_Version.c $(FLS_BASE_PATH)\src\Fls_Irq.c $(FLS_BASE_PATH)\src\Fls_Private_Fcu.c
CC_INCLUDE_PATH    += $(FLS_BASE_PATH)\include
endif

ifneq ($(MCAL_EXCLUDE_MCU),1)
MCU_BASE_PATH       = $(MCAL_BASE_PATH)\X1X\P1x\modules\mcu
CC_FILES_TO_BUILD  += $(MCU_BASE_PATH)\src\Mcu.c $(MCU_BASE_PATH)\src\Mcu_Irq.c $(MCU_BASE_PATH)\src\Mcu_Ram.c $(MCU_BASE_PATH)\src\Mcu_Version.c
CC_INCLUDE_PATH    += $(MCU_BASE_PATH)\include
endif

ifneq ($(MCAL_EXCLUDE_PORT),1)
PORT_BASE_PATH      = $(MCAL_BASE_PATH)\X1X\common_platform\modules\port
CC_FILES_TO_BUILD  += $(PORT_BASE_PATH)\src\Port.c $(PORT_BASE_PATH)\src\Port_Ram.c $(PORT_BASE_PATH)\src\Port_Version.c
CC_INCLUDE_PATH    += $(PORT_BASE_PATH)\include
endif

ifneq ($(MCAL_EXCLUDE_SPI),1)
SPI_BASE_PATH       = $(MCAL_BASE_PATH)\X1X\common_platform\modules\spi
CC_FILES_TO_BUILD  += $(SPI_BASE_PATH)\src\Spi.c $(SPI_BASE_PATH)\src\Spi_Driver.c $(SPI_BASE_PATH)\src\Spi_Irq.c $(SPI_BASE_PATH)\src\Spi_Ram.c $(SPI_BASE_PATH)\src\Spi_Scheduler.c $(SPI_BASE_PATH)\src\Spi_Version.c
CC_INCLUDE_PATH    += $(SPI_BASE_PATH)\include
endif

ifneq ($(MCAL_EXCLUDE_WDG),1)
WDG_BASE_PATH       = $(MCAL_BASE_PATH)\X1X\common_platform\modules\wdg
CC_FILES_TO_BUILD  += $(WDG_BASE_PATH)\src\Wdg_59_DriverA.c $(WDG_BASE_PATH)\src\Wdg_59_DriverA_Irq.c $(WDG_BASE_PATH)\src\Wdg_59_DriverA_Private.c $(WDG_BASE_PATH)\src\Wdg_59_DriverA_Ram.c $(WDG_BASE_PATH)\src\Wdg_59_DriverA_Version.c
CC_INCLUDE_PATH    += $(WDG_BASE_PATH)\include
endif

CPP_FILES_TO_BUILD +=
ASM_FILES_TO_BUILD +=

#LIBRARIES_LINK_ONLY     += (not yet supported)
#OBJECTS_LINK_ONLY       += (not yet supported)

#-------------------------------------------------------------------------------------------------
#only define new dirs, OBJ, LIB, LOG were created automaticly
#-------------------------------------------------------------------------------------------------
DIRECTORIES_TO_CREATE   +=

#DEPEND_GCC_OPTS         += (not yet supported)

# e.g.:  GENERATED_SOURCE_FILES += $(GENDATA_DIR)\drv_par.c
ifneq ($(MCAL_EXCLUDE_DIO),1)
GENERATED_SOURCE_FILES  += $(GENDATA_DIR)\src\Dio_PBcfg.c
endif

ifneq ($(MCAL_EXCLUDE_FLS),1)
GENERATED_SOURCE_FILES  += $(GENDATA_DIR)\src\Fls_PBcfg.c
endif

ifneq ($(MCAL_EXCLUDE_MCU),1)
GENERATED_SOURCE_FILES  +=  $(GENDATA_DIR)\src\Mcu_PBcfg.c
endif

ifneq ($(MCAL_EXCLUDE_PORT),1)
GENERATED_SOURCE_FILES  += $(GENDATA_DIR)\src\Port_PBcfg.c
endif

ifneq ($(MCAL_EXCLUDE_SPI),1)
GENERATED_SOURCE_FILES  += $(GENDATA_DIR)\src\Spi_Lcfg.c $(GENDATA_DIR)\src\Spi_PBcfg.c
endif

ifneq ($(MCAL_EXCLUDE_WDG),1)
GENERATED_SOURCE_FILES  += $(GENDATA_DIR)\src\Wdg_59_DriverA_PBcfg.c
endif

ADDITIONAL_INCLUDES     += $(GENDATA_DIR)\include

#e.g.: COMMON_SOURCE_FILES     += $(GENDATA_DIR)\v_par.c
COMMON_SOURCE_FILES     +=

#-------------------------------------------------------------------------------------------------
# <project>.dep & <projekt>.lnk & <project>.bin and.....
# all in err\ & obj\ & lst\ & lib\ & log\ will be deleted by clean-rule automaticly
# so in this clean-rule it is only necessary to define additional files which
# were not delete automaticly.
# e.g.: $(<PATH>)\can_test.c
#-------------------------------------------------------------------------------------------------
MAKE_CLEAN_RULES        +=
#MAKE_GENERATE_RULES     +=
#MAKE_COMPILER_RULES     +=
#MAKE_DEBUG_RULES        +=
#MAKE_CONFIG_RULES       +=
#MAKE_ADD_RULES          +=


###############################################################
# REQUIRED   (defined in BaseMake (global.Makefile.target.make...))
#
# SSC_ROOT		(required)
# PROJECT_ROOT	(required)
#
# LIB_OUTPUT_PATH	(optional)
# OBJ_OUTPUT_PATH	(optional)
#
# OBJ_FILE_SUFFIX
# LIB_FILE_SUFFIX
#
###############################################################


###############################################################
# PROVIDE   this Section can be used to define own additional rules
#
# In vendorx_can_cfg.mak:
# Please configure the project file:
#CAN_CONFIG_FILE = $(PROJECT_ROOT)\source\network\can\my_can_config.cfg

#In vendorx_can_config :
#generate_can_config:
#$(SSC_ROOT)\core\com\can\tools\canconfiggen.exe -o $(CAN_CONFIG_FILE)


###############################################################
# SPECIFIC
#
# There are no rules defined for the Specific part of the
# Rules-Makefile. Each author is free to create temporary
# variables or to use other resources of GNU-MAKE
#
###############################################################
