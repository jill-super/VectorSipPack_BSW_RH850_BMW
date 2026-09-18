MEMORY
 {
  iROM      : ORIGIN = 0x00000000, LENGTH = 2048k
  iRAM      : ORIGIN = 0xfede0000, LENGTH = 128k
 }

SECTIONS
 {                                                                                                                           
  /*************************************************************************************************************************/
  /* RAM*/                                                                                                                   
  /*************************************************************************************************************************/
  .rom_start                                                 :>iRAM  /* Start of code area */                           
  /* START OF CODE AREA */                                                                                                   
  .code_start                              :>.      /* Start of code area */                                                 
  .sdabase                           align(4)                :>.     /* initialize globalpointer GP for SDA addressing */    
  .signature               align(4)        :>.          /* FlashDrv signature */                                             
  .text                    align(4)        :>.     /* program code area */                                                   
  .R_FCL_CODE_RAM          align(4)               :>.                                                                        
  .R_FCL_CODE_ROMRAM       align(4)               :>.                                                                        
  .R_FCL_DATA              align(4)               :>.                                                                        
  .R_FCL_CODE_USRINT       align(4)               :>.          /* Interrupt code located in RAM */                           
  .R_FCL_CODE_USR          align(4)               :>.          /* User code located in RAM */                                
  .R_FCL_CODE_ROM          align(4)               :>.          /* FCL code in ROM */                                         
  .R_FCL_CODE_RAM_EX_PROT  align(4) pad(0x20)     :>.          /* ECC Exception protection */                                
  .os_text                 align(4)        :>.     /* program code area */                                                   
  .R_FDL_Text              align(4)        :>.     /* FDL code in ROM (used by MCAL)*/                                       
  .MCU_CODE_RRAM_INTVEC    align(4)        :>.                                                                               
  .MCU_CR_CODE_RRAM        align(4)        :>.                                                                               
  .code_end                                :>.     /* End of code area */                                                    
  /* END OF CODE AREA */                                                                                                     
                                                                                                                             
  /* START OF CONST AREA */                                                                                                  
  .const_start                             :>.     /* start of const area */                                                 
  .rozdata                                 :>.     /* constant datas in ZDA area */                                          
  .robase                  align(4)        :>.     /* initialize textpointer TP for SDA addressing */                        
  .rosdata                 align(4)        :>.     /* constant datas in SDA area */                                          
  .os_rosdata              align(4)        :>.     /* constant OS data in SDA area */                                        
  .rodata                  align(4)        :>.     /* constant datas in normal area */                                       
  .os_rodata               align(4)        :>.     /* constant OS data in normal area */                                     
  .const_end                               :>.  /* end of const area */                                                      
  /* END OF CONST AREA */                                                                                                    
                                                                                                                             
  .fixaddr                 align(4)        :>.  /* ghs internal (compiler) */                                                
  .fixtype                 align(4)        :>.  /* ghs internal (compiler) */                                                
  .secinfo                 align(4)        :>.  /* ghs internal (runtime library) */                                         
  .syscall                 align(4)        :>.  /* ghs internal (linker) */                                                  
                                                                                                                             
                                                                                                                             
  /* START OF NORMAL DATA RAM AREA */                                                                                        
  .data                              align(4)                :>.  /* initialized data */                                  
  .bss                               align(4) CLEAR          :>.     /* zero initialized data*/                              
  .os_data                                                   :>.     /* initialized OS data */                               
  .os_bss                            align(4)   CLEAR        :>.     /* zero initialized OS data*/                           
  /* END OF NORMAL DATA RAM AREA */                                                                                          
                                                                                                                             
  .sdata                             align(4)                :>.     /* initialized data in SDA area*/                       
  .sbss                              align(4) CLEAR          :>.     /* zero initialized data in SDA area*/                  
  .os_sdata                          align(4)                :>.     /* initialized OS data in SDA area*/                    
  .os_sbss                           align(4) CLEAR          :>.     /* zero initialized OS data in SDA area*/               
  /* END OF SDA RAM AREA */                                                                                                  
                                                                                                                             
  .zdata                             align(4)                :>.     /* initialized data in ZDA area*/                       
  .zbss                              align(4) CLEAR          :>.     /* zero initialized data in ZDA area*/                  
  .tdata                             align(4) MAX_SIZE(256)  :>.     /* initialized and zero-initialized data in TDA area */ 
  .R_FCL_CONST             align(4)               :>.          /* FCL constants in ROM */                                    
  .rom_end                           align(16)               :>.                                                             
                                                                                                                             
  /* START OF STACK AREA */                                                                                                  
  .stack    align(4) pad(0x1000)                             :>.     /* definition of stack size */                     
  /* END OF STACK AREA */                                                                                                    
                                                                                                                             
  /*************************************************************************************************************************/
  /* LABELS*/                                                                                                                
  /*************************************************************************************************************************/
 }                                                                                                                           
