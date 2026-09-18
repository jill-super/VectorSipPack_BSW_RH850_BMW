---
title: "E2EXf"
description: "Converted Vector Technical Reference: TechnicalReference_E2EXf.pdf."
---

> **Converted from** [`Doc/TechnicalReferences/TechnicalReference_E2EXf.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_E2EXf.pdf) (23 pages). Machine-converted with PyMuPDF: running text and structure are preserved as Markdown, but **layout, figures, tables and formulas may differ from the original PDF**. For normative content, always consult the original PDF.

| Property | Value |
|---|---|
| Source | [`TechnicalReference_E2EXf.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_E2EXf.pdf) |
| Pages | 23 |
| PDF title | MICROSAR E2E Transformer |
| Author | Stephanie Schaaf |

## Document outline

- 1 Component History
- 2 Introduction
  - 2.1 Architecture Overview
- 3 Functional Description
  - 3.1 Features
    - 3.1.1 Deviations
    - 3.1.2 Additions/ Extensions
      - 3.1.2.1 Memory Initialization
    - 3.1.3 Limitations
  - 3.2 Initialization
  - 3.3 States
  - 3.4 Main Functions
  - 3.5 Error Handling
    - 3.5.1 Development Error Reporting
    - 3.5.2 Production Code Error Reporting
- 4 Integration
  - 4.1 Scope of Delivery
    - 4.1.1 Static Files
    - 4.1.2 Dynamic Files
- 5 API Description
  - 5.1 Type Definitions
  - 5.2 Services provided by E2EXf
    - 5.2.1 E2EXf_GetVersionInfo
    - 5.2.2 E2EXf_InitMemory
    - 5.2.3 E2EXf_Init
    - 5.2.4 E2EXf_DeInit
    - 5.2.5 E2EXf_<transformerId>
    - 5.2.6 E2EXf_Inv_<transformerId>
  - 5.3 Services used by E2EXf
- 6 Configuration
  - 6.1 Configuration Variants
  - 6.2 Configuration of EndToEndTransformationComSpecProps
- 7 Glossary and Abbreviations
  - 7.1 Glossary
  - 7.2 Abbreviations
- 8 Contact

## Excerpt (first pages)

MICROSAR E2E Transformer 
Technical Reference 
Version 1.3.0 
Authors 
Stephanie Schaaf 
Status 
Released
Technical Reference MICROSAR E2E Transformer 
© 2017 Vector Informatik GmbH 
Version 1.3.0 
2 
based on template version 6.0.1 
Document Information 
History 
Author 
Date 
Version 
Remarks 
Stephanie Schaaf 
2016-10-21 
1.0.0 
Initial version 
Stephanie Schaaf 
2017-03-21 
1.1.0 
Support for E2E profile 7 
Bernd Sigle 
2017-06-06 
1.2.0 
Minor improvements 
Philipp Niethammer 
2017-08-15 
1.3.0 
Updated to match Autosar 4.3.0 
Reference Documents 
No. 
Source 
Title 
Version 
[1] 
AUTOSAR 
AUTOSAR_SWS_E2ETransformer.pdf 
4.3.0 
[2] 
AUTOSAR 
AUTOSAR_TR_BSWModuleList.pdf 
4.3.0 
[3] 
AUTOSAR 
AUTOSAR_SWS_DefaultErrorTracer.pdf 
4.3.0 
[4] 
AUTOSAR 
AUTOSAR_SWS_E2ELibrary.pdf 
4.3.0 
Scope of the Document 
This technical reference describes the general use of the E2E Transformer. 
Caution 
We have configured the programs in accordance with your specifications in the 
questionnaire. Whereas the programs do support other configurations than the one 
specified in your questionnaire, Vector´s release of the programs delivered to your 
company is expressly restricted to the configuration you have specified in the 
questionnaire.
Technical Reference MICROSAR E2E Transformer 
© 2017 Vector Informatik GmbH 
Version 1.3.0 
3 
based on template version 6.0.1 
Contents 
1 
Component History ...................................................................................................... 6 
2 
Introduction................................................................................................................... 7 
2.1 
Architecture Overview ........................................................................................ 7 
3 
Functional Description ................................................................................................. 9 
3.1 
Features ............................................................................................................ 9 
3.1.1 
Deviations .......................................................................................... 9 
3.1.2 
Additions/ Extensions ......................................................................... 9 
3.1.2.1 
Memory Initialization ........................................................ 9 
3.1.3 
Limitations ........................................................................................ 10 
3.2 
Initialization ...................................................................................................... 10 
3.3 
States .............................................................................................................. 10 
3.4 
Main Functions ................................................................................................ 10 
3.5 
Error Handling .................................................................................................. 10 
3.5.1 
Development Error Reporting ........................................................... 10 
3.5.2 
Production Code Error Reporting ..................................................... 11 
4 
Integration ................................................................................................................... 12 
4.1 
Scope of Delivery ............................................................................................. 12 
4.1.1 
Static Files ....................................................................................... 12 
4.1.2 
Dynamic Files .................................................................................. 12 
5 
API Description ........................................................................................................... 13 
5.1 
Type Definitions ............................................................................................... 13 
5.2 
Services provided by E2EXf ............................................................................. 13 
5.2.1 
E2EXf_GetVersionInfo ..................................................................... 13 
5.2.2 
E2EXf_InitMemory ........................................................................... 14 
5.2.3 
E2EXf_Init ........................................................................................ 15 
5.2.4 
E2EXf_DeInit ................................................................................... 16 
5.2.5 
E2EXf_<transformerId> ................................................................... 17 
5.2.6 
E2EXf_Inv_<transformerId> ............................................................. 18 
5.3 
Services used by E2EXf ................................................................................... 20 
6 
Configuration .............................................................................................................. 21 
6.1 
Configuration Variants ...................................................................................... 21 
6.2 
Configuration of EndToEndTransformationComSpecProps .............................. 21 
7 
Glossary and Abbreviations ...................................................................................... 22
Technical Reference MICROSAR E2E Transformer 
© 2017 Vector Informatik GmbH 
Version 1.3.0 
4 
based on template version 6.0.1 
7.1 
Glossary .......................................................................................................... 22 
7.2 
Abbreviations ................................................................................................... 22 
8 
Contact ........................................................................................................................ 23
Technical Reference MICROSAR E2E Transformer 
© 2017 Vector Informatik GmbH 
Version 1.3.0 
5 
based on template version 6.0.1 
Illustrations 
Figure 2-1 
AUTOSAR Architecture Overview ............................................................... 7 
Figure 2-2 
Interfaces to adjacent modules of the E2EXf ..

[Back to top](#_top)
