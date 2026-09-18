MEMORY
 {
  /* internal ROM area (iROM) sections */                                                                                    
  iROM_BM   	: ORIGIN = 0x00000000, LENGTH =   32k                                                                           
  iROM_BL   	: ORIGIN = 0x00008000, LENGTH =  320k                                                                           
  iROM_SWE1 	: ORIGIN = 0x00058000, LENGTH = 1184k                                                                           
  iRAM       : ORIGIN = 0xFEDE0000, LENGTH =  128k                                                                           
  rRAM      : ORIGIN = 0xFEE00000, LENGTH = 32k                                                                              
 }

SECTIONS
 {                                                                                                                           
  /*************************************************************************************************************************/
  /* ROM AREA (iROM_BM)*/                                                                                                    
  /*************************************************************************************************************************/
                                                                                                                             
  HWEDESC           NOLOAD  0x00007900     :>iROM_BM                                                                        
  SRVCOMMONBM       NOLOAD  0x00007B00     :>.                                                                               
  SHAREDSWEDATA     NOLOAD  0x00007D00     :>.                                                                               
                                                                                                                             
  /*************************************************************************************************************************/
  /* BTLD AREA */                                                                                                            
  /*************************************************************************************************************************/
  CCRYPJUMPT        NOLOAD  0x00057700     :>iROM_BL                                                                         
  BOOTSWEDESC       NOLOAD  0x00057900     :>.                                                                               
  BOOTSWESIGNATURE  NOLOAD  0x0005791C     :>.                                                                               
  BOOTSWESTAT       NOLOAD  0x00057B00     :>.                                                                               
                                                                                                                             
  /*************************************************************************************************************************/
  /* SWE1 AREA */                                                                                                            
  /*************************************************************************************************************************/
  .rom_start                               :>iROM_SWE1   /* Start of code area */                                            
  .ExceptionVectorTable                    :>.  /* start of interrupt vector table */                                        
  .IntVectorTable                    :>.  /* start of interrupt vector table */                                        
                                                                                                                             
  /* START OF CODE AREA */                                                                                                   
  .Startup                         0x59000 :>.  /* Startup */                                                                
  .code_start                              :>.     /* Start of code area */                                                  
  .text                     align(4)       :>.     /* program code area */                                                   
  .os_text                  align(4)       :>.     /* program code area */                                                   
  .R_FDL_Text               align(4)       :>.     /* FDL code in ROM (used by MCAL)*/                                       
  .MCU_CODE_RRAM_INTVEC     align(4)       :>.                                                                               
  .MCU_CR_CODE_RRAM         align(4)       :>.                                                                               
  .code_end                                :>.     /* End of code area */                                                    
  /* END OF CODE AREA */                                                                                                     
                                                                                                                             
  /* START OF CONST AREA */                                                                                                  
  .const_start                             :>.     /* start of const area */                                                 
  .rozdata                                 :>.     /* constant datas in ZDA area */                                          
  .rosda_start                             :>.     /* start of SDA data area */                                              
  .robase                   align(4)       :>.     /* initialize textpointer TP for SDA addressing */                        
  .rosdata                  align(4)       :>.     /* constant datas in SDA area */                                          
  .os_rosdata               align(4)       :>.     /* constant OS data in SDA area */                                        
  .rosda_end                               :>.     /* end of SDA data area */                                                
  .rodata                   align(4)       :>.     /* constant datas in normal area */                                       
  .R_FDL_Const              align(4)       :>.     /* constant datas for DrvFls */                                           
  .os_rodata                align(4)       :>.     /* constant OS data in normal area */                                     
  .const_end                               :>.     /* end of const area */                                                   
  /* END OF CONST AREA */                                                                                                    
                                                                                                                             
  .fixaddr                  align(4)       :>.  /* ghs internal (compiler) */                                                
  .fixtype                  align(4)       :>.  /* ghs internal (compiler) */                                                
  .secinfo                  align(4)       :>.  /* ghs internal (runtime library) */                                         
  .syscall                  align(4)       :>.  /* ghs internal (linker) */                                                  
                                                                                                                             
  /* START OF INIT DATA AREA */                                                                                              
  .romtext  ROM(.RAMCODE)                  :>.  /* RAM text section (copied to RAM at startup) */                            
  .romconst ROM(.RAMCONST)                 :>.  /* constant data to initialize variables (copied to RAM at startup) */       
                                                                                                                             
  .const_init_data_start                   :>.  /* start of const init data area */                                          
  .romdata                  ROM(.data)     :>.  /* init values for .data (copied to RAM at startup)*/                        
  .romzdata                 ROM(.zdata)    :>.  /* init values for .zdata (copied to RAM at startup)*/                       
  .romsdata                 ROM(.sdata)    :>.  /* init values for .sdata (copied to RAM at startup)*/                       
  .romtdata                 ROM(.tdata)    :>.  /* init values for .tdata (copied to RAM at startup)*/                       
  .const_init_data_end                     :>.  /* end of const init data area */                                            
  /* END OF INIT DATA AREA */                                                                                                
  _Bm_StartupApplication = 0x00058000;           /* BM jumps in the application */                                           
                                                                                                                             
  SWE1DESC                 0x000FF900     :>.                                                                    
  BLUVALIDFLAG             0x000FF91c     :>.                                                                               
  BLUSTAT                  0x000FFC00     :>.                                                                               
                                                                                                                             
  /*************************************************************************************************************************/
  /* RAM*/                                                                                                                   
  /*************************************************************************************************************************/
  .ram_start                               :>iRAM        /* Start of RAM area of MasterCore */                               
  _ram_start = addr(.ram_start);                                                                                             
  __Local_RAM_Core0_Section_StartAddr = .;                                                                                   
                                                                                                                             
  FLASHDRV                                                   :>.                                                             
  BLUFLASHDRVBUF                                             :>.                                                             
                                                                                                                             
                                                                                                                             
  /* START OF NORMAL DATA RAM AREA */                                                                                        
  __Local_RAM_DATA_Core0_Section_StartAddr = .;                                                                              
  .data                    align(4)        :>.  /* initialized data */                                                       
  .R_FDL_Data              align(4)        :>.  /* data for DrvFls */                                                        
  .bss                     align(4) CLEAR  :>.  /* zero initialized data */                                                  
  .os_data                                 :>.  /* initialized OS data */                                                    
  .os_bss                  align(4) CLEAR  :>.  /* zero initialized OS data */                                               
  __Local_RAM_DATA_Core0_Section_EndAddr = .-1;                                                                              
  __Local_RAM_Core0_Section_EndAddr = .-1;                                                                                   
  /* END OF NORMAL DATA RAM AREA */                                                                                          
                                                                                                                             
  /* START OF SDA RAM AREA */                                                                                                
  .sda_start                               :>.  /* start of SDA RAM area */                                                  
  .sdabase                 align(4)        :>.  /* initialize globalpointer GP for SDA addressing */                         
  .sdata                   align(4)        :>.  /* initialized data in SDA area */                                           
  .sbss                    align(4) CLEAR  :>.  /* zero initialized data in SDA area */                                      
  .os_sdata                align(4)        :>.  /* initialized OS data in SDA area */                                        
  .os_sbss                 align(4) CLEAR  :>.  /* zero initialized OS data in SDA area */                                   
  .sda_end                                 :>.  /* end of SDA RAM area */                                                    
  /* END OF SDA RAM AREA */                                                                                                  
                                                                                                                             
  .RAMCODE  align(4)                                         :>.     /* RAM code */                                          
  .RAMCONST align(4)                                         :>.     /* RAM const */                                         
                                                                                                                             
  /* START OF STACK AREA */                                                                                                  
  __Local_RAM_STACK_Core0_Section_StartAddr = .;                                                                             
  .stack    align(4) pad(0x400)            :>.     /* definition of stack size */                                            
  __StartupStack_Core0 = endaddr(.stack);                                                                                    
  __Local_RAM_STACK_Core0_Section_EndAddr = .-1;                                                                             
  /* END OF STACK AREA */                                                                                                    
                                                                                                                             
  .zdata                   align(4)                :>.  /* initialized data in ZDA area */                                   
  .zbss                    align(4) CLEAR          :>.  /* zero initialized data in ZDA area */                              
  .tdata                   align(4) MAX_SIZE(256)  :>.  /* initialized and zero-initialized data in TDA area */              
                                                                                                                             
  DLOG_SWEDATA                       0xFEDF0900              :>.                                                             
  DLOG_SWESTATUS                     0xFEDF0A00              :>.                                                             
  DLOG_SWEINFOS                      0xFEDF0B00              :>.                                                             
  BOOTSTATUS                         0xFEDF0C00              :>.                                                             
                                                                                                                             
  .ram_end                 align(16)               :>.                                                                       
                                                                                                                             
  /*************************************************************************************************************************/
  /* LABELS*/                                                                                                                
  /*************************************************************************************************************************/
  /* Always jump to usr_init_c0 at addr 0x0. */                                                                              
  _RESET_CORE0 = __usr_init;                                                                                                 
  _RESET_CORE1 = __usr_init;                                                                                                 
  __Peripheral_I_O_Section_StartAddr = 0xFF000000;                                                                           
  __Peripheral_I_O_Section_EndAddr = 0xFFFFFFFF;                                                                             
 }                                                                                                                           
