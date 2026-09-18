---
title: "FrSM"
description: "Converted Vector Technical Reference: TechnicalReference_FrSM.pdf."
---

> **Converted from** [`Doc/TechnicalReferences/TechnicalReference_FrSM.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_FrSM.pdf) (32 pages). Machine-converted with PyMuPDF: running text and structure are preserved as Markdown, but **layout, figures, tables and formulas may differ from the original PDF**. For normative content, always consult the original PDF.

| Property | Value |
|---|---|
| Source | [`TechnicalReference_FrSM.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_FrSM.pdf) |
| Pages | 32 |
| PDF title | YourTopic |
| Author | Mark A. Fingerle |

## Document outline

- 1 Component History
- 2 Introduction
  - 2.1 Architecture Overview
- 3 Functional Description
  - 3.1 Features
  - 3.2 Initialization
  - 3.3 State Machine
    - 3.3.1 Meta States FullCom / NoCom
    - 3.3.2 FRSM_INITIAL
    - 3.3.3 FRSM_STARTUP / FRSM_WAKEUP / FRSM_READY
    - 3.3.4 FRSM_WAKEUP, Send Multiple Wake-Up Pattern
    - 3.3.5 FRSM_STATE_ONLINE
    - 3.3.6 FRSM_KEY_SLOT_ONLY
    - 3.3.7 FRSM_STATE_ONLINE_PASSIVE
    - 3.3.8 FRSM_STATE_HALT_REQ
    - 3.3.9 Startup Monitoring (FRSM_STARTUP / FRSM_WAKEUP / FRSM_STATE_HALT_REQ)
  - 3.4 Main Functions
    - 3.4.1 Communication Modes
    - 3.4.2 Communication Mode Polling
  - 3.5 Error Handling
    - 3.5.1 Development Error Reporting
    - 3.5.2 Production Code Error Reporting
- 4 Integration
  - 4.1 Scope of Delivery
    - 4.1.1 Static Files
    - 4.1.2 Dynamic Files
  - 4.2 Include Structure
  - 4.3 Compiler Abstraction and Memory Mapping
  - 4.4 Critical Sections
- 5 API Description
  - 5.1 Type Definitions
  - 5.2 Services Provided by FrSM
    - 5.2.1 FrSM_InitMemory
    - 5.2.2 FrSM_Init
    - 5.2.3 FrSM_MainFunction_<Cluster Id>
    - 5.2.4 FrSM_RequestComMode
    - 5.2.5 FrSM_GetCurrentComMode
    - 5.2.6 FrSM_GetVersionInfo
    - 5.2.7 FrSM_AllSlots
    - 5.2.8 FrSM_SetEcuPassive

_16 further outline entries in the original._

## Excerpt (first pages)

MICROSAR FlexRay State Manager 
Technical Reference 
Version 1.2.0 
Authors 
Mark A. Fingerle 
Status 
Released
Technical Reference MICROSAR FlexRay State Manager 
© 2017 Vector Informatik GmbH 
Version 1.2.0 
2 
based on template version 4.9.2 
Document Information 
History 
Author 
Date 
Version 
Remarks 
Mark A. Fingerle 
2012-08-08 
1.0.0 
Creation from scratch 
Mark A. Fingerle 
2014-10-13 
1.1.0 
ESCAN00076761 Post-Build Selectable 
(Identity Manager) support 6.1.3 
ESCAN00075457 Add support for delayed 
FlexRay communication cluster shutdown 
3.3.8, 6.2.5 
ESCAN00079339 Description BCD-coded 
return-value of GetVersionInfo() 
Mark A. Fingerle 
2016-05-13 
1.2.0 
Add missing API 5.2.8 
FrSM_SetEcuPassive 
FEAT-2724 Handle several FlexRay 
clusters Table 3-1 Supported AUTOSAR 
standard conform features, Table 3-2 Not 
supported AUTOSAR standard conform 
features 
Reference Documents 
No. 
Source 
Title 
Version 
[1] 
AUTOSAR 
Specification of FlexRay State Manager 
2.2.0 
[2] 
AUTOSAR 
Specification of Development Error Tracer 
3.2.0 
[3] 
AUTOSAR 
Specification of Diagnostics Event Manager 
4.2.0 
[4] 
AUTOSAR 
List of Basic Software Modules 
1.6.0 
[5] 
AUTOSAR 
Specification of FlexRay Interface 
3.3.0 
[6] 
AUTOSAR 
Specification of Communication Manager 
4.0.0 
[7] 
AUTOSAR 
Specification of Basic Software Mode Manager 
1.2.0 
Scope of the Document 
This technical reference describes the general use of the FlexRay State Manager basis 
software. All aspects which are FlexRay controller specific are described in the technical 
reference of the FlexRay Interface, which is also part of the delivery. 
Caution 
We have configured the programs in accordance with your specifications in the 
questionnaire. Whereas the programs do support other configurations than the one 
specified in your questionnaire, Vector’s release of the programs delivered to your 
company is expressly restricted to the configuration you have specified in the 
questionnaire.
Technical Reference MICROSAR FlexRay State Manager 
© 2017 Vector Informatik GmbH 
Version 1.2.0 
3 
based on template version 4.9.2 
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
3.2 
Initialization ...................................................................................................... 10 
3.3 
State Machine .................................................................................................. 11 
3.3.1 
Meta States FullCom / NoCom ......................................................... 12 
3.3.2 
FRSM_INITIAL ................................................................................. 12 
3.3.3 
FRSM_STARTUP / FRSM_WAKEUP / FRSM_READY ................... 12 
3.3.4 
FRSM_WAKEUP, Send Multiple Wake-Up Pattern ........................... 13 
3.3.5 
FRSM_STATE_ONLINE ................................................................... 13 
3.3.6 
FRSM_KEY_SLOT_ONLY ............................................................... 14 
3.3.7 
FRSM_STATE_ONLINE_PASSIVE .................................................. 14 
3.3.8 
FRSM_STATE_HALT_REQ ............................................................. 14 
3.3.9 
Startup Monitoring (FRSM_STARTUP / FRSM_WAKEUP / 
FRSM_STATE_HALT_REQ) ............................................................ 14 
3.4 
Main Functions ................................................................................................ 15 
3.4.1 
Communication Modes .................................................................... 15 
3.4.2 
Communication Mode Polling ........................................................... 15 
3.5 
Error Handling .................................................................................................. 15 
3.5.1 
Development Error Reporting ........................................................... 15 
3.5.2 
Production Code Error Reporting ..................................................... 16 
4 
Integration ................................................................................................................... 18 
4.1 
Scope of Delivery ............................................................................................. 18 
4.1.1 
Static Files ....................................................................................... 18 
4.1.2 
Dynamic Files .................................................................................. 18 
4.2 
Include Structure .............................................................................................. 19 
4.3 
Compiler Abstraction and Memory Mapping ..................................................... 19 
4.4 
Critical Sections ............................................................................................... 20 
5 
API Description ........................................................................................................... 22 
5.1 
Type Definitions ............................................................................................... 22 
5.2 
Services Provided by FrSM .............................................................................. 23 
5.2.1 
FrSM_InitMemory ............................................................................ 23 
5.2.2 
FrSM_Init ......................................................................................... 23
Technical Reference MICROSAR FlexRay State Manager 
© 2017 Vector Informatik

[Back to top](#_top)
