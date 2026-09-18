---
title: "MemIf"
description: "Converted Vector Technical Reference: TechnicalReference_MemIf.pdf."
---

> **Converted from** [`Doc/TechnicalReferences/TechnicalReference_MemIf.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_MemIf.pdf) (25 pages). Machine-converted with PyMuPDF: running text and structure are preserved as Markdown, but **layout, figures, tables and formulas may differ from the original PDF**. For normative content, always consult the original PDF.

| Property | Value |
|---|---|
| Source | [`TechnicalReference_MemIf.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_MemIf.pdf) |
| Pages | 25 |
| PDF title | YourTopic |
| Author | Tobias Schmid |

## Document outline

- 1 Document Information
  - 1.1 History
  - 1.2 Reference Documents
  - 1.3 Scope of the Document
- 2 Introduction
  - 2.1 Architecture Overview
- 3 Functional Description
  - 3.1 Features
  - 3.2 Initialization
  - 3.3 Main Functions
  - 3.4 Error Handling
    - 3.4.1 Development Error Reporting
      - 3.4.1.1 Parameter Checking
- 4 Integration
  - 4.1 Scope of Delivery
    - 4.1.1 Static Files
    - 4.1.2 Dynamic Files
  - 4.2 Include Structure
  - 4.3 Compiler Abstraction and Memory Mapping
- 5 API Description
  - 5.1 Interfaces Overview
  - 5.2 Type Definitions
  - 5.3 Services provided by MemIf
    - 5.3.1 MemIf_GetVersionInfo
    - 5.3.2 MemIf_SetMode
    - 5.3.3 MemIf_Read
    - 5.3.4 MemIf_Write
    - 5.3.5 MemIf_Cancel
    - 5.3.6 MemIf_GetStatus
    - 5.3.7 MemIf_GetJobResult
    - 5.3.8 MemIf_EraseImmediateBlock
    - 5.3.9 MemIf_InvalidateBlock
  - 5.4 Services used by MemIf
- 6 Configuration
- 7 AUTOSAR Standard Compliance
  - 7.1 Deviations
    - 7.1.1 Extension of Error Codes
  - 7.2 Additions/ Extensions
- 8 Glossary and Abbreviations
  - 8.1 Glossary

_2 further outline entries in the original._

## Excerpt (first pages)

MICROSAR MemIf 
Technical Reference 
Version 2.02.00 
Authors 
Tobias Schmid, Manfred Duschinger, Michael Goß 
Status 
Released
Technical Reference MICROSAR MemIf 
2015, Vector Informatik GmbH 
Version: 2.02.00 
based on template version 3.1 
2 / 25 
1 
Document Information 
1.1 
History 
Author 
Date 
Version 
Remarks 
Tobias Schmid 
2008-04-14 
1.0 
Creation of document 
Manfred Duschinger 
2013-02-20 
1.01.00 
Ch. 4.1. Update files 
according to new generator 
Ch. 6 Update Configuration 
Michael Goß 
2014-11-21 
2.01.01 
Typos were corrected and 
content was modified a little 
Michael Goß 
2015-04-23 
2.02.00 
Content was updated 
regarding SafeBSW MemIf 
Table 1-1 
History of the document 
1.2 
Reference Documents 
No. 
Title 
Version 
[1] AUTOSAR_SWS_Mem_AbstractionInterface.pdf 
V1.4.0 
[2] AUTOSAR_SWS_DET.pdf 
V2.2.0 
[3] AUTOSAR_BasicSoftwareModules.pdf 
V1.0.0 
[4] AUTOSAR_SWS_EEPROM_Abstraction.pdf 
V2.0.0 
[5] AUTOSAR_SWS_Flash_EEPROM_Emulation.pdf 
V2.0.0 
Table 1-2 
Reference documents 
1.3 
Scope of the Document 
This technical reference describes the general use of module MemIf (AUTOSAR Memory 
Abstraction Interface). 
Please note 
We have configured the programs in accordance with your specifications in the 
questionnaire. Whereas the programs do support other configurations than the one 
specified in your questionnaire, Vector´s release of the programs delivered to your 
company is expressly restricted to the configuration you have specified in the 
questionnaire.
Technical Reference MICROSAR MemIf 
2015, Vector Informatik GmbH 
Version: 2.02.00 
based on template version 3.1 
3 / 25 
Contents 
1 
Document Information ................................................................................................. 2 
1.1 
History ............................................................................................................... 2 
1.2 
Reference Documents ....................................................................................... 2 
1.3 
Scope of the Document...................................................................................... 2 
2 
Introduction................................................................................................................... 6 
2.1 
Architecture Overview ........................................................................................ 7 
3 
Functional Description ................................................................................................. 8 
3.1 
Features ............................................................................................................ 8 
3.2 
Initialization ........................................................................................................ 8 
3.3 
Main Functions .................................................................................................. 8 
3.4 
Error Handling .................................................................................................... 8 
3.4.1 
Development Error Reporting ............................................................. 8 
3.4.1.1 
Parameter Checking ........................................................ 9 
4 
Integration ................................................................................................................... 11 
4.1 
Scope of Delivery ............................................................................................. 11 
4.1.1 
Static Files ....................................................................................... 11 
4.1.2 
Dynamic Files .................................................................................. 11 
4.2 
Include Structure .............................................................................................. 12 
4.3 
Compiler Abstraction and Memory Mapping ..................................................... 12 
5 
API Description ........................................................................................................... 14 
5.1 
Interfaces Overview ......................................................................................... 14 
5.2 
Type Definitions ............................................................................................... 14 
5.3 
Services provided by MemIf ............................................................................. 15 
5.3.1 
MemIf_GetVersionInfo ..................................................................... 15 
5.3.2 
MemIf_SetMode ............................................................................... 16 
5.3.3 
MemIf_Read .................................................................................... 16 
5.3.4 
MemIf_Write ..................................................................................... 17 
5.3.5 
MemIf_Cancel .................................................................................. 18 
5.3.6 
MemIf_GetStatus ............................................................................. 18 
5.3.7 
MemIf_GetJobResult ....................................................................... 19 
5.3.8 
MemIf_EraseImmediateBlock .......................................................... 20 
5.3.9 
MemIf_InvalidateBlock ..................................................................... 20 
5.4 
Services used by MemIf ................................................................................... 21 
6 
Configuration .............................................................................................................. 22
Technical Reference MICROSAR MemIf 
2015, Vector Informatik GmbH 
Version: 2.02.00 
based on template version 3.1 
4 / 25 
7 
AUTOSAR Standard Compliance............................................................................... 23 
7.1 
Deviations ........................................................................................................ 23 
7.1.1 
Extension of Error Codes ..........................................

[Back to top](#_top)
