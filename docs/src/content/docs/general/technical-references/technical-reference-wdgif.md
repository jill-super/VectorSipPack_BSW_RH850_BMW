---
title: "WdgIf"
description: "Converted Vector Technical Reference: TechnicalReference_WdgIf.pdf."
---

> **Converted from** [`Doc/TechnicalReferences/TechnicalReference_WdgIf.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_WdgIf.pdf) (47 pages). Machine-converted with PyMuPDF: running text and structure are preserved as Markdown, but **layout, figures, tables and formulas may differ from the original PDF**. For normative content, always consult the original PDF.

| Property | Value |
|---|---|
| Source | [`TechnicalReference_WdgIf.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_WdgIf.pdf) |
| Pages | 47 |
| PDF title | MICROSAR WDGIF |
| Author | Christian Leder, Rene Isau |

## Document outline

- 1 Component History
- 2 Introduction
  - 2.1 Architecture Overview
  - 2.2 Basic Functionality of the WdgIf
- 3 Functional Description
  - 3.1 Features
    - 3.1.1 Deviations
    - 3.1.2 Additions/ Extensions
  - 3.2 Operation in Multi-Core Systems
    - 3.2.1 Independent Watchdog Devices
    - 3.2.2 WdgIf with a State Combiner
      - 3.2.2.1 Checking the Slave Trigger Pattern
      - 3.2.2.2 Operation of the State Combiner
      - 3.2.2.2.1 Synchronous Mode
      - 3.2.2.2.2 Asynchronous Mode
      - 3.2.2.3 Worst Case Delay
      - 3.2.2.4 Worst Case Evaluations
      - 3.2.2.5 Optimal Timing
      - 3.2.2.6 Start-up Phase
      - 3.2.2.7 Changing the Monitoring Period During Runtime
      - 3.2.2.7.1 Changing the Monitoring Period in Synchronous Mode
      - 3.2.2.7.2 Changing the Monitoring Period in Asynchronous Mode
      - 3.2.2.8 Shared Memory
      - 3.2.2.9 Limitations of the State Combiner Implementation
  - 3.3 Memory Sections
    - 3.3.1 Code and Constants
    - 3.3.2 Module Variables
      - 3.3.2.1 Module Variables with MICROSAR Os Gen6 / AUTOSAR Os version 4.0
      - 3.3.2.2 Module Variables with MICROSAR Os Gen7 / AUTOSAR Os version 4.2
  - 3.4 Error Handling
    - 3.4.1 Development Error Reporting
- 4 Integration
  - 4.1.1 Static Files
  - 4.1.2 Dynamic Files
- 5 API Description
  - 5.1 Type Definitions
  - 5.2 State Combiner Type Definitions
  - 5.3 Services provided by WdgIf
    - 5.3.1 WdgIf_SetMode
    - 5.3.2 WdgIf_SetTriggerCondition

_13 further outline entries in the original._

## Excerpt (first pages)

MICROSAR WDGIF 
Technical Reference 
Version 1.2.0 
Authors 
Christian Leder, Rene Isau 
Status 
Released
Technical Reference MICROSAR WDGIF 
© 2017 Vector Informatik GmbH 
Version 1.2.0 
2 
based on template version 5.12.0 
Document Information 
History 
Author 
Date 
Version 
Remarks 
Christian Leder, 
Rene Isau 
2016-03-16 
1.0.0 
First version of the migrated WdgIf 
Technical Reference 
Christian Leder 
2016-07-13 
1.1.0 
Update after introduction of native CFG5 
generator 
Christian Leder 
2017-01-09 
1.2.0 
Update after removing state combiner 
automatic mode 
Reference Documents 
No. 
Source 
Title 
Version 
[1] 
AUTOSAR 
AUTOSAR_SWS_WatchdogInterface.pdf 
V2.3.0 
[2] 
Vector 
Informatik 
Safety Manual 
[3] 
AUTOSAR 
AUTOSAR_TR_BSWModuleList.pdf 
V1.4.0 
Caution 
We have configured the programs in accordance with your specifications in the 
questionnaire. Whereas the programs do support other configurations than the one 
specified in your questionnaire, Vector´s release of the programs delivered to your 
company is expressly restricted to the configuration you have specified in the 
questionnaire.
Technical Reference MICROSAR WDGIF 
© 2017 Vector Informatik GmbH 
Version 1.2.0 
3 
based on template version 5.12.0 
Contents 
1 
Component History ...................................................................................................... 6 
2 
Introduction................................................................................................................... 7 
2.1 
Architecture Overview ........................................................................................ 8 
2.2 
Basic Functionality of the WdgIf ....................................................................... 10 
3 
Functional Description ............................................................................................... 11 
3.1 
Features .......................................................................................................... 11 
3.1.1 
Deviations ........................................................................................ 11 
3.1.2 
Additions/ Extensions ....................................................................... 12 
3.2 
Operation in Multi-Core Systems ..................................................................... 12 
3.2.1 
Independent Watchdog Devices ....................................................... 13 
3.2.2 
WdgIf with a State Combiner ............................................................ 14 
3.2.2.1 
Checking the Slave Trigger Pattern ................................ 16 
3.2.2.2 
Operation of the State Combiner.................................... 17 
3.2.2.2.1 
Synchronous Mode .................................... 17 
3.2.2.2.2 
Asynchronous Mode .................................. 19 
3.2.2.3 
Worst Case Delay .......................................................... 21 
3.2.2.4 
Worst Case Evaluations ................................................. 23 
3.2.2.5 
Optimal Timing ............................................................... 27 
3.2.2.6 
Start-up Phase ............................................................... 28 
3.2.2.7 
Changing the Monitoring Period During Runtime ........... 28 
3.2.2.7.1 
Changing the Monitoring Period in 
Synchronous Mode .................................... 28 
3.2.2.7.2 
Changing the Monitoring Period in 
Asynchronous Mode .................................. 29 
3.2.2.8 
Shared Memory ............................................................. 29 
3.2.2.9 
Limitations of the State Combiner Implementation ......... 29 
3.3 
Memory Sections ............................................................................................. 30 
3.3.1 
Code and Constants ........................................................................ 30 
3.3.2 
Module Variables ............................................................................. 30 
3.3.2.1 
Module Variables with MICROSAR Os Gen6 / 
AUTOSAR Os version 4.0 .............................................. 30 
3.3.2.2 
Module Variables with MICROSAR Os Gen7 / 
AUTOSAR Os version 4.2 .............................................. 31 
3.4 
Error Handling .................................................................................................. 32 
3.4.1 
Development Error Reporting ........................................................... 32 
4 
Integration ................................................................................................................... 33
Technical Reference MICROSAR WDGIF 
© 2017 Vector Informatik GmbH 
Version 1.2.0 
4 
based on template version 5.12.0 
4.1.1 
Static Files ....................................................................................... 33 
4.1.2 
Dynamic Files .................................................................................. 33 
5 
API Description ........................................................................................................... 34 
5.1 
Type Definitions ............................................................................................... 34 
5.2 
State Combiner Type Definitions ...................................................................... 35 
5.3 
Services provided by WdgIf ............................................................................. 38 
5.3.1 
WdgIf_SetMode ............................................................................... 38 
5.3.2 
WdgIf_SetTriggerCondition .............................................................. 38 
5.3.3 
WdgIf_SetTriggerWindow ................................................................ 39 
5.3.4 
WdgIf_GetVersionInfo ...................................................................... 39 
5.4 
Services used by WdgIf ................................................................................... 40 
6 
Configuration .............................................................................................

[Back to top](#_top)
