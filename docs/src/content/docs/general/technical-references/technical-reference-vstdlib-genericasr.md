---
title: "VStdLib GenericAsr"
description: "Converted Vector Technical Reference: TechnicalReference_VStdLib_GenericAsr.pdf."
---

> **Converted from** [`Doc/TechnicalReferences/TechnicalReference_VStdLib_GenericAsr.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_VStdLib_GenericAsr.pdf) (26 pages). Machine-converted with PyMuPDF: running text and structure are preserved as Markdown, but **layout, figures, tables and formulas may differ from the original PDF**. For normative content, always consult the original PDF.

| Property | Value |
|---|---|
| Source | [`TechnicalReference_VStdLib_GenericAsr.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_VStdLib_GenericAsr.pdf) |
| Pages | 26 |
| PDF title | MICROSAR VStdLib |
| Author | Torsten Kercher |

## Document outline

- 1 Component History
- 2 Introduction
  - 2.1 Architecture Overview
- 3 Functional Description
  - 3.1 Features
  - 3.2 Initialization and Main Functions
  - 3.3 Error Handling
    - 3.3.1 Development Error Reporting
    - 3.3.2 Production Code Error Reporting
- 4 Integration
  - 4.1 Scope of Delivery
  - 4.2 Include Structure
  - 4.3 Critical Sections
  - 4.4 Compiler Abstraction and Memory Mapping
  - 4.5 Integration Hints
- 5 API Description
  - 5.1 Type Definitions
  - 5.2 Services provided by VStdLib
    - 5.2.1 VStdLib_GetVersionInfo
    - 5.2.2 VStdLib_MemClr
    - 5.2.3 VStdLib_MemClrMacro
    - 5.2.4 VStdLib_MemSet
    - 5.2.5 VStdLib_MemSetMacro
    - 5.2.6 VStdLib_MemCpy
    - 5.2.7 VStdLib_MemCpy16
    - 5.2.8 VStdLib_MemCpy32
    - 5.2.9 VStdLib_MemCpy_s
    - 5.2.10 VStdLib_MemCpyMacro
    - 5.2.11 VStdLib_MemCpyMacro_s
  - 5.3 Services used by VStdLib
- 6 Configuration
  - 6.1 Configuration Variants
  - 6.2 Manual Configuration in Header File
    - 6.2.1 General configuration
    - 6.2.2 Additional configuration when using library functions
- 7 Abbreviations
- 8 Contact

## Excerpt (first pages)

MICROSAR VStdLib 
Technical Reference 
Generic implementation of the Vector Standard Library 
Version 1.00.01 
Authors 
Torsten Kercher 
Status 
Released
Technical Reference MICROSAR VStdLib 
© 2016 Vector Informatik GmbH 
Version 1.00.01 
2 
based on template version 5.9.0 
Document Information 
History 
Author 
Date 
Version 
Remarks 
Torsten Kercher 
2015-05-04 
1.00.00 
Creation 
Torsten Kercher 
2016-04-12 
1.00.01 
Update to new CI, no changes in content 
Reference Documents 
No. 
Source 
Title 
Version 
[1] 
AUTOSAR 
AUTOSAR_TR_BSWModuleList.pdf 
1.6.0 
[2] 
AUTOSAR 
AUTOSAR_SWS_DevelopmentErrorTracer.pdf 
3.2.0 
Caution 
We have configured the programs in accordance with your specifications in the 
questionnaire. Whereas the programs do support other configurations than the one 
specified in your questionnaire, Vector´s release of the programs delivered to your 
company is expressly restricted to the configuration you have specified in the 
questionnaire.
Technical Reference MICROSAR VStdLib 
© 2016 Vector Informatik GmbH 
Version 1.00.01 
3 
based on template version 5.9.0 
Contents 
1 
Component History ...................................................................................................... 5 
2 
Introduction................................................................................................................... 6 
2.1 
Architecture Overview ........................................................................................ 6 
3 
Functional Description ................................................................................................. 8 
3.1 
Features ............................................................................................................ 8 
3.2 
Initialization and Main Functions ........................................................................ 8 
3.3 
Error Handling .................................................................................................... 8 
4 
Integration ..................................................................................................................... 9 
4.1 
Scope of Delivery ............................................................................................... 9 
4.2 
Include Structure ................................................................................................ 9 
4.3 
Critical Sections ................................................................................................. 9 
4.4 
Compiler Abstraction and Memory Mapping ..................................................... 10 
4.5 
Integration Hints ............................................................................................... 11 
5 
API Description ........................................................................................................... 12 
5.1 
Type Definitions ............................................................................................... 12 
5.2 
Services provided by VStdLib .......................................................................... 12 
5.3 
Services used by VStdLib ................................................................................ 22 
6 
Configuration .............................................................................................................. 23 
6.1 
Configuration Variants ...................................................................................... 23 
6.2 
Manual Configuration in Header File ................................................................ 23 
7 
Abbreviations .............................................................................................................. 25 
8 
Contact ........................................................................................................................ 26
Technical Reference MICROSAR VStdLib 
© 2016 Vector Informatik GmbH 
Version 1.00.01 
4 
based on template version 5.9.0 
Illustrations 
Figure 2-1 
AUTOSAR 4.x Architecture Overview ......................................................... 6 
Figure 2-2 
Interfaces to adjacent modules ................................................................... 7 
Figure 4-1 
Include Structure ........................................................................................ 9 
Tables 
Table 1-1 
Component history...................................................................................... 5 
Table 3-1 
Service IDs ................................................................................................. 8 
Table 3-2 
Errors reported to DET ............................................................................... 8 
Table 4-1 
Static files ................................................................................................... 9 
Table 4-2 
Compiler Abstraction and Memory Mapping ............................................. 10 
Table 5-1 
VStdLib_GetVersionInfo ........................................................................... 12 
Table 5-2 
VStdLib_MemClr ...................................................................................... 13 
Table 5-3 
VStdLib_MemClrMacro ............................................................................. 14 
Table 5-4 
VStdLib_MemSet ...................................................................................... 15 
Table 5-5 
VStdLib_MemSetMacro ............................................................................ 16 
Table 5-6 
VStdLib_MemCpy ..................................................................................... 17 
Table 5-7 
VStdLib_MemCpy16 ................................................................................. 18 
Table 5-8 
VStdLib_MemCpy32 ................................................................................. 19 
Table 5-9 
VStdLib_MemCpy_s ................................................................................. 20 
Table 5-10 
VStdLib_MemCpyMacro .........................................

[Back to top](#_top)
