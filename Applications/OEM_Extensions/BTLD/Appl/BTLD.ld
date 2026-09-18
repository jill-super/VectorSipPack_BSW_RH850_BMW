MEMORY
 {
  /* internal ROM area (iROM) sections */                                                                                    
  iROM_BM   	: ORIGIN = 0x00000000, LENGTH =   32k                                                                           
  iROM_BL   	: ORIGIN = 0x00008000, LENGTH =  320k                                                                           
  iROM_SWE1 	: ORIGIN = 0x00058000, LENGTH = 1184k                                                                           
  iRAM       : ORIGIN = 0xFEDE0000, LENGTH =  128k                                                                           
  rRAM       : ORIGIN = 0xFEE00000, LENGTH = 32k                                                                              
 }



SECTIONS
 {                                                                                                                           
  /*************************************************************************************************************************/
  /* BM AREA */                                                                                                              
  /*************************************************************************************************************************/
                                                                                                                             
  HWEDESC           NOLOAD  0x00007900     :>iROM_BM                                                                        
  COMMONBM          NOLOAD  0x00007B00     :>.                                                                               
  SHAREDSWEDATA     NOLOAD  0x00007D00     :>.                                                                               
                                                                                                                             
  /*************************************************************************************************************************/
  /* ROM AREA (BTLD)*/                                                                                                       
  /*************************************************************************************************************************/
  .rom_start                                         :>iROM_BL  /* Start of code area */                                     
  __ROM_Core0_Section_StartAddr = .;                                                                                         
                                                                                                                             
  #define OS_LINK_EXCVEC_CODE                                                                                                
  #include "./GenData/Os_Link_Core0.ld"                                                                                    
                                                                                                                             
  #define OS_LINK_INTVEC_CODE                                                                                                
  #include "./GenData/Os_Link_Core0.ld"                                                                                    
                                                                                                                             
  /*********************************/                                                                                        
  /* START OF CODE AREA */                                                                                                   
  /********************************/                                                                                         
  .Startup        0x00008A00 :>.  /* Startup */                                                                              
  .code_start                                        :>.  /* Start of code area */                                           
  .text                     align(4)                 :>.  /* program code area */                                            
  .ROM.FLS_PUBLIC_CODE_RAM         ROM(.FLS_PUBLIC_CODE_RAM)          :>.                                                
  .ROM.FLS_PRIVATE_CODE_RAM        ROM(.FLS_PRIVATE_CODE_RAM)         :>.                                                 
  .R_FDL_Text               align(4)                 :>.  /* FDL code in ROM (used by MCAL)*/                                
  .MCU_CODE_RRAM_INTVEC     align(4)                 :>.                                                                     
  .MCU_CR_CODE_RRAM         align(4)                 :>.                                                                     
                                                                                                                             
  #define OS_LINK_CODE                                                                                                       
  #define OS_LINK_CALLOUT_CODE                                                                                               
  #include "./GenData/Os_Link.ld"                                                                                          
                                                                                                                             
  #define OS_LINK_CALLOUT_CODE                                                                                               
  #include "./GenData/Os_Link_Core0.ld"                                                                                    
                                                                                                                             
  /*********************************/                                                                                        
  /* START OF CONST AREA */                                                                                                  
  /********************************/                                                                                         
  .const_start                                       :>.  /* start of const area */                                          
  .rozdata                                           :>.  /* constant datas in ZDA area */                                   
  .rosda_start                                       :>.  /* start of SDA data area */                                       
  .robase                   align(4)                 :>.  /* initialize textpointer TP for SDA addressing */                 
  .rosdata                  align(4)                 :>.  /* constant datas in SDA area */                                   
  .rosda_end                                         :>.  /* end of SDA data area */                                         
  .rodata                   align(4)                 :>.  /* constant datas in normal area */                                
  .R_FDL_Const              align(4)                 :>.  /* FDL const data in ROM (used by MCAL) */                         
                                                                                                                             
  .intvect_CoreExceptions   align(512)               :>.  /* BRS default core exception table */                             
  __BRS_Default_CoreExceptionTable_StartAddr = ADDR(.intvect_CoreExceptions);                                                
  .intvect_ExtExceptions   align(512)                :>.  /* BRS default interrupt table */                                  
  __BRS_Default_ExceptionTable_StartAddr = ADDR(.intvect_ExtExceptions);                                                     
                                                                                                                             
  #define OS_LINK_CONST                                                                                                      
  #include "./GenData/Os_Link.ld"                                                                                          
                                                                                                                             
  #define OS_LINK_CONST                                                                                                      
  #include "./GenData/Os_Link_Core0.ld"                                                                                    
                                                                                                                             
  .fixaddr                  align(4)                 :>.  /* ghs internal (compiler) */                                      
  .fixtype                  align(4)                 :>.  /* ghs internal (compiler) */                                      
  .secinfo                  align(4)                 :>.  /* ghs internal (runtime library) */                               
  .syscall                  align(4)                 :>.  /* ghs internal (linker) */                                        
                                                                                                                             
                                                                                                                             
  /*********************************/                                                                                        
  /* START OF INIT DATA AREA */                                                                                              
  /********************************/                                                                                         
  .const_init_data_start                             :>.  /* start of const init data area */                                
  .romdata                  ROM(.data)               :>.  /* init values for .data (copied to RAM at startup)*/              
  .romzdata                 ROM(.zdata)              :>.  /* init values for .zdata (copied to RAM at startup)*/             
  .romsdata                 ROM(.sdata)              :>.  /* init values for .sdata (copied to RAM at startup)*/             
  .romtdata                 ROM(.tdata)              :>.  /* init values for .tdata (copied to RAM at startup)*/             
  .const_init_data_end                               :>.  /* end of const init data area */                                  
  .romtext  ROM(.RAMCODE)                  :>.  /* RAM text section (copied to RAM at startup) */                                  
  __ROM_Core0_Section_EndAddr = .-1;                                                                                         
                                                                                                                             
  CCRYPJUMPT                0x00057700     :>.                                                                               
  BOOTSWEDESC               0x00057900     :>.                                                                               
  BOOTSWESIGNATURE          0x0005791C     :>.                                                                               
  BOOTSWESTAT               0x00057B00     :>.                                                                               
                                                                                                                             
                                                                                                                             
  /*************************************************************************************************************************/
  /* SWE1 AREA */                                                                                                            
  /*************************************************************************************************************************/
  SWE1DESC          NOLOAD  0x000FF900     :>iROM_SWE1                                                                       
  SWE1SIGNATURE     NOLOAD  0x000FF91c     :>.                                                                               
  SWE1STAT          NOLOAD  0x000FFB00     :>.                                                                               
                                                                                                                             
  /*************************************************************************************************************************/
  /* Local RAM Core0*/                                                                                                       
  /*************************************************************************************************************************/
  .local_ram_core0_start                      :>iRAM        /* Start of ram area */                                          
  _ram_start = addr(.local_ram_core0_start);                                                                                 
  __Local_RAM_Core0_Section_StartAddr = .;                                                                                   
                                                                                                                             
  FLASHDRV                                                   :>.                                                             
                                                                                                                             
  .FLS_PUBLIC_CODE_RAM    							:>.                                                                     
  .FLS_PRIVATE_CODE_RAM                 				:>.                                                                     
                                                                                                                             
  /*********************************/                                                                                        
  /* START OF LOCAL STACK AREA */                                                                                            
  /********************************/                                                                                         
  __Local_RAM_STACK_Core0_Section_StartAddr = .;                                                                             
  /* 1k startup stack core 0 (only used by startup code) */                                                                  
  .stack                   align(4) pad(0x400)       :>.      /* GHS internal stack required by crt0.o */                    
  __StartupStack_Core0 = endaddr(.stack);                                                                                    
  #define OS_LINK_KERNEL_STACKS                                                                                              
  #include "./GenData/Os_Link_Core0_Stacks.ld"                                                                             
  __Local_RAM_STACK_Core0_Section_EndAddr = .-1;                                                                             
  /* END OF STACK AREA */                                                                                                    
                                                                                                                             
  /********************************/                                                                                         
  /* START OF LOCAL DATA RAM AREA */                                                                                         
  /********************************/                                                                                         
  __Local_RAM_DATA_Core0_Section_StartAddr = .;                                                                              
                                                                                                                             
  /****** OS DATA ******/                                                                                                    
  #define OS_LINK_VAR_KERNEL                                                                                                 
  #define OS_LINK_KERNEL_BARRIERS                                                                                            
  #define OS_LINK_KERNEL_CORESTATUS                                                                                          
  #define OS_LINK_KERNEL_TRACE                                                                                               
  #define OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0                                                                     
  #include "./GenData/Os_Link_Core0.ld"                                                                                    
                                                                                                                             
  /****** Application DATA ******/                                                                                           
  #define OS_LINK_VAR_APP_OSAPPLICATION_ASIL                                                                                 
  #define OS_LINK_VAR_APP_OSAPPLICATION_QM                                                                                   
  #define OS_LINK_VAR_APP_OSAPPLICATION_CORE0                                                                     
  #define OS_LINK_VAR_TASK_BACKGROUNDTASK                                                                     
  #define OS_LINK_VAR_TASK_CPL_TASK                                                                     
  #define OS_LINK_VAR_TASK_DEFAULT_BSW_ASYNC_TASK                                                                     
  #define OS_LINK_VAR_TASK_INITTASK                                                                     
  #define OS_LINK_VAR_TASK_SHUTDOWNTASK                                                                     
  #define OS_LINK_VAR_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0                                                                     
  #define OS_LINK_VAR_ISR_FR_IRQLINE0                                                                     
  #define OS_LINK_VAR_ISR_FR_IRQTIMER0                                                                     
  #define OS_LINK_VAR_ISR_OS_TIMERPITISR                                                                     
  #include "./GenData/Os_Link_Core0.ld"                                                                                    
                                                                                                                             
  __Local_RAM_DATA_Core0_Section_EndAddr = .-1;                                                                              
  __Local_RAM_Core0_Section_EndAddr = .-1;                                                                                   
  /* END OF DATA AREA */                                                                                                     
  /*************************************************************************************************************************/
  /* START OF Global DATA RAM                              */                                                                
  /* The local RAM is used if no global RAM exists.        */                                                                
  /*************************************************************************************************************************/
#if defined(GLOBAL_RAM_SUPPORTED)                                                                                            
  .global_ram_start                                  :>gRAM_A  /* Start of ram area */                                       
#endif                                                                                                                       
  __Global_RAM_1_Section_StartAddr = .;                                                                                      
  .zdata                   align(4)                  :>.  /* initialized data in ZDA area */                                 
  .zbss                    align(4) CLEAR            :>.  /* zero initialized data in ZDA area */                            
  .tdata                   align(4) MAX_SIZE(256)    :>.  /* initialized and zero-initialized data in TDA area */            
  .sda_start                                         :>.  /* start of SDA RAM area */                                        
  .sdabase                    align(4)               :>.  /* initialize globalpointer GP for SDA addressing */               
  /****** GLOBAL SHARED SMALL DATA ******/                                                                                   
  . = (. + 15) & (~15);                                                                                                      
  .EthDesc_Tx_sbss            align(16)              :>.                                                                     
  .EthBuffers_Tx_sbss         align(16)              :>.                                                                     
                                                                                                                             
  /****** OTHER SMALL DATA ******/                                                                                           
  .sdata                      align(4)               :>.  /* initialized data in SDA area */                                 
  .sbss                       align(4) CLEAR         :>.  /* zero initialized data in SDA area */                            
                                                                                                                             
  .sda_end                                           :>.  /* end of SDA RAM area */                                          
                                                                                                                             
  .RAMCODE  align(4)                                         :>.     /* RAM code */                                          
                                                                                                                             
  /****** OS DATA ******/                                                                                                    
  #define OS_LINK_VAR_KERNEL                                                                                                 
  #define OS_LINK_SPINLOCKS                                                                                                  
  #include "./GenData/Os_Link.ld"                                                                                          
                                                                                                                             
  /****** OTHER DATA ******/                                                                                                 
  .data                      align(4)                :>.  /* initialized data */                                             
  .R_FDL_Data                align(4)                :>.  /* data for DrvFls */                                              
  .bss                       align(4) CLEAR          :>.  /* zero initialized data */                                        
                                                                                                                             
                                                                                                                             
  /****** GLOBAL SHARED DATA ******/                                                                                         
  __GlobalShared_DataSection_StartAddr = .;                                                                                  
  #define OS_LINK_VAR_GLOBALSHARED                                                                                           
  #include "./GenData/Os_Link.ld"                                                                                          
  __GlobalShared_DataSection_EndAddr   = .-1;                                                                                
  __Global_RAM_1_Section_EndAddr = .-1;                                                                                      
/* This is the end of the local ram if no global ram is avaiable. */                                                         
#if !defined(GLOBAL_RAM_SUPPORTED)                                                                                           
  __Local_RAM_DATA_Core0_Section_EndAddr = .-1;                                                                              
  __Local_RAM_Core0_Section_EndAddr = .-1;                                                                                   
#endif                                                                                                                       
                                                                                                                             
  DLOG_SWEDATA                       0xFEDF0900              :>.                                                             
  DLOG_SWESTATUS                     0xFEDF0A00              :>.                                                             
  DLOG_SWEINFOS                      0xFEDF0B00              :>.                                                             
  BOOTSTATUS                         0xFEDF0C00              :>.                                                             
  BOOTSTATUSNOINIT                   0xFEDF0C10              :>.                                                             
                                                                                                                             
  .ram_end                    align(16)              :>.                                                                     
  _ram_end = addr(.ram_end);                                                                                                 
                                                                                                                             
  /*************************************************************************************************************************/
  /* LABELS*/                                                                                                                
  /*************************************************************************************************************************/
  /* Always jump to usr_init_c0 at addr 0x0. */                                                                              
  _RESET_CORE0 = __usr_init;                                                                                                 
  _RESET_CORE1 = __usr_init;                                                                                                 
  __Peripheral_I_O_Section_StartAddr = 0xFF000000;                                                                           
  __Peripheral_I_O_Section_EndAddr = 0xFFFFFFFF;                                                                             
 }                                                                                                                           
