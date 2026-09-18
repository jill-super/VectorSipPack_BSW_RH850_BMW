---
title: "Fee 30 SmallSector"
description: "Converted Vector Technical Reference: TechnicalReference_Fee_30_SmallSector.pdf."
---

> **Converted from** [`Doc/TechnicalReferences/TechnicalReference_Fee_30_SmallSector.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_Fee_30_SmallSector.pdf) (42 pages). Machine-converted with PyMuPDF: running text and structure are preserved as Markdown, but **layout, figures, tables and formulas may differ from the original PDF**. For normative content, always consult the original PDF.

| Property | Value |
|---|---|
| Source | [`TechnicalReference_Fee_30_SmallSector.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_Fee_30_SmallSector.pdf) |
| Pages | 42 |
| PDF title | MICROSAR [BSW module] |
| Author | Michael Goß |

## Document outline

- 1 Component History
- 2 Introduction
  - 2.1 Architecture Overview
- 3 Functional Description
  - 3.1 Features
    - 3.1.1 Deviations from AUTOSAR R4.0.3
    - 3.1.2 Additions/ Extensions
  - 3.2 Recommendations
  - 3.3 Initialization
  - 3.4 States
    - 3.4.1 Module States
    - 3.4.2 Job States
  - 3.5 Main Functions
    - 3.5.1 Processing of a Read Job
    - 3.5.2 Processing of a Write Job
    - 3.5.3 Processing of an InvalidateBlock Job
    - 3.5.4 Processing of an EraseImmediateBlock Job
  - 3.6 Error Handling
    - 3.6.1 Development Error Reporting
    - 3.6.2 Production Code Error Reporting
  - 3.7 Partitions
  - 3.8 Service for handling under-voltage situations
  - 3.9 MainFunction Triggering
- 4 Integration
  - 4.1 Scope of Delivery
    - 4.1.1 Static Files
    - 4.1.2 Dynamic Files
  - 4.2 Migration from FEE to SmallSectorFEE
- 5 API Description
  - 5.1 Type Definitions
  - 5.2 Services provided by FEE
    - 5.2.1 Fee_30_SmallSector_Init
    - 5.2.2 Fee_30_SmallSector_SetMode
    - 5.2.3 Fee_30_SmallSector_Read
    - 5.2.4 Fee_30_SmallSector_Write
    - 5.2.5 Fee_30_SmallSector_Cancel
    - 5.2.6 Fee_30_SmallSector_GetStatus
    - 5.2.7 Fee_30_SmallSector_GetJobResult
    - 5.2.8 Fee_30_SmallSector_InvalidateBlock
    - 5.2.9 Fee_30_SmallSector_GetVersionInfo

_26 further outline entries in the original._

## Excerpt (first pages)

MICROSAR Fee 
Technical Reference 
Small Sector 
Version 1.1.0 
Authors 
Michael Goß 
Status 
Released
Technical Reference MICROSAR Fee 
© 2016 Vector Informatik GmbH 
Version 1.1.0 
2 
based on template version 6.0.1 
Document Information 
History 
Author 
Date 
Version 
Remarks 
virgmi 
2016-06-22 
1.00.00 
Initial version 
virgmi 
2016-08-23 
2016-09-21 
1.01.00 
Chapter ‘Requirements and 
Recommendations’ was added. 
Reference to ProductInformation of 
SmallSectorFee was added. 
Reference Documents 
No. 
Source 
Title 
Version 
[1] 
AUTOSAR 
AUTOSAR_SWS_FlashEEPROMEmulation.pdf 
V2.0.0 
[2] 
AUTOSAR 
AUTOSAR_SWS_DevelopmentErrorTracer.pdf 
V3.2.0 
[3] 
AUTOSAR 
AUTOSAR_BasicSoftwareModules.pdf 
V1.0.0 
[4] 
Vector 
ProductInformation_8_MICROSARSmallSectorFee.pdf 
V1.0.0 
Caution 
We have configured the programs in accordance with your specifications in the 
questionnaire. Whereas the programs do support other configurations than the one 
specified in your questionnaire, Vector´s release of the programs delivered to your 
company is expressly restricted to the configuration you have specified in the 
questionnaire.
Technical Reference MICROSAR Fee 
© 2016 Vector Informatik GmbH 
Version 1.1.0 
3 
based on template version 6.0.1 
Contents 
1 
Component History ...................................................................................................... 6 
2 
Introduction................................................................................................................... 7 
2.1 
Architecture Overview ........................................................................................ 8 
3 
Functional Description ............................................................................................... 11 
3.1 
Features .......................................................................................................... 11 
3.1.1 
Deviations from AUTOSAR R4.0.3 ................................................... 11 
3.1.2 
Additions/ Extensions ....................................................................... 12 
3.2 
Recommendations ........................................................................................... 12 
3.3 
Initialization ...................................................................................................... 13 
3.4 
States .............................................................................................................. 13 
3.4.1 
Module States .................................................................................. 13 
3.4.2 
Job States ........................................................................................ 13 
3.5 
Main Functions ................................................................................................ 14 
3.5.1 
Processing of a Read Job ................................................................ 14 
3.5.2 
Processing of a Write Job ................................................................ 14 
3.5.3 
Processing of an InvalidateBlock Job ............................................... 15 
3.5.4 
Processing of an EraseImmediateBlock Job .................................... 15 
3.6 
Error Handling .................................................................................................. 15 
3.6.1 
Development Error Reporting ........................................................... 15 
3.6.2 
Production Code Error Reporting ..................................................... 16 
3.7 
Partitions .......................................................................................................... 17 
3.8 
Service for handling under-voltage situations ................................................... 17 
3.9 
MainFunction Triggering ................................................................................... 18 
4 
Integration ................................................................................................................... 19 
4.1 
Scope of Delivery ............................................................................................. 19 
4.1.1 
Static Files ....................................................................................... 19 
4.1.2 
Dynamic Files .................................................................................. 20 
4.2 
Migration from FEE to SmallSectorFEE ........................................................... 20 
5 
API Description ........................................................................................................... 23 
5.1 
Type Definitions ............................................................................................... 23 
5.2 
Services provided by FEE ................................................................................ 23 
5.2.1 
Fee_30_SmallSector_Init ................................................................. 23 
5.2.2 
Fee_30_SmallSector_SetMode ....................................................... 23 
5.2.3 
Fee_30_SmallSector_Read ............................................................. 24 
5.2.4 
Fee_30_SmallSector_Write ............................................................. 25
Technical Reference MICROSAR Fee 
© 2016 Vector Informatik GmbH 
Version 1.1.0 
4 
based on template version 6.0.1 
5.2.5 
Fee_30_SmallSector_Cancel ........................................................... 26 
5.2.6 
Fee_30_SmallSector_GetStatus ...................................................... 26 
5.2.7 
Fee_30_SmallSector_GetJobResult ................................................ 27 
5.2.8 
Fee_30_SmallSector_InvalidateBlock .............................................. 28 
5.2.9 
Fee_30_SmallSector_GetVersionInfo .............................................. 29 
5.2.10 
Fee_30_SmallSector_EraseImmediateBlock ................................... 29 
5.2.11 
Fee_30_SmallSector_MainFunction ................................................ 30 
5.2.12 
Fee_30_SmallSector_SuspendWr

[Back to top](#_top)
