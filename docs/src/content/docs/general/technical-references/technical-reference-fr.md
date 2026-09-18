---
title: "Fr"
description: "Converted Vector Technical Reference: TechnicalReference_Fr.pdf."
---

> **Converted from** [`Doc/TechnicalReferences/TechnicalReference_Fr.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_Fr.pdf) (57 pages). Machine-converted with PyMuPDF: running text and structure are preserved as Markdown, but **layout, figures, tables and formulas may differ from the original PDF**. For normative content, always consult the original PDF.

| Property | Value |
|---|---|
| Source | [`TechnicalReference_Fr.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_Fr.pdf) |
| Pages | 57 |
| PDF title | MICROSAR FR |
| Author | Roland Hocke, Matthias Müller |

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
  - 3.3 Configuration Variants
  - 3.4 States
  - 3.5 Dual bus network usage
  - 3.6 Main Functions
  - 3.7 Error Handling
    - 3.7.1 Development Error Reporting
      - 3.7.1.1 Parameter Checking
    - 3.7.2 Production Code Error Reporting
  - 3.8 Buffer Reconfiguration
  - 3.9 Reconfig LPdu Support
  - 3.10 Dynamic Payload
  - 3.11 Single Channel API
  - 3.12 Direct Buffer Access
  - 3.13 Hardware Loop with Cancellation
  - 3.14 FIFO reception
  - 3.15 Reading out the Flexray parameters (Read CC Parameters)
- 4 Integration
  - 4.1 Scope of Delivery
    - 4.1.1 Static Files
    - 4.1.2 Dynamic Files
  - 4.2 Include Structure
  - 4.3 Compiler Abstraction and Memory Mapping
  - 4.4 Interrupt Handling
  - 4.5 Critical Sections
- 5 API Description
  - 5.1 Type Definitions
  - 5.2 Interrupt Service Routines provided by FR
  - 5.3 Services provided by FR
    - 5.3.1 Fr_InitMemory
    - 5.3.2 Fr_Init
    - 5.3.3 Fr_ControllerInit

_47 further outline entries in the original._

## Excerpt (first pages)

MICROSAR FR 
Technical Reference 
Base Content 
Version 1.04.00 
Authors 
Roland Hocke, Matthias Müller 
Status 
Released
Technical Reference MICROSAR FR 
© 2017 Vector Informatik GmbH 
Version 1.04.00 
2 
based on template version 6.0.1 
1 
Document Information 
1.1 
History 
Author 
Date 
Version 
Remarks 
Matthias Müller 
2012-11-15 
1.0 
Initial Version of Autosar 4 
Matthias Müller 
2013-07-18 
1.0.1 
ESCAN00069139: 
Added new restriction to 
section 3.14 FIFO reception 
Matthias Müller 
2013-08-01 
1.1 
ESCAN00067407 
Remove obsolete MTS APIs 
Roland Hocke 
2013-10-24 
1.2 
Added Limitations and the 
description of 
StringentLength- and 
StringentCheck 
Matthias Müller 
2014-11-05 
1.3 
Added feature MICROSAR 
Identity Manager using Post-
Build Selectable 
Matthias Müller 
2017-07-05 
1.4 
Adapted Features and added 
description of 
ApplFr_ISR_Timer0_1 and 
ApplFr_ISR_CycleStart_1. 
Table 1-1 
History of the document 
1.2 
Reference Documents 
No. 
Title 
Version 
[1] 
AUTOSAR_SWS_FlexRayDriver.pdf 
4.3.0 
[2] 
AUTOSAR_SWS_FlexRayDriver.pdf 
2.3.0 
[3] 
AUTOSAR_SRS_FlexRay.pdf 
3.1.0 
[4] 
AUTOSAR_SRS_FlexRay.pdf 
4.3.0 
[5] 
AUTOSAR_SWS_DET.pdf 
2.2.0 
[6] 
AUTOSAR_SWS_DEM.pdf 
2.2.1 
[7] 
AUTOSAR_BasicSoftwareModules.pdf 
1.2.0 
[8] 
TechnicalReference_ASR_Fr_<CCName>_<platform>.pdf 
1.10 or 
later 
[9] 
FlexRay Communications System Protocol Specification 
2.1A 
[10] TechnicalReference_ASR_FrIf.pdf 
3.0.7 or 
later 
[11] TechnicalReference_Asr_EcuM.pdf 
2.1.0 or 
later
Technical Reference MICROSAR FR 
© 2017 Vector Informatik GmbH 
Version 1.04.00 
3 
based on template version 6.0.1 
[12] TechnicalReference_Asr_FrTp.pdf 
1.14.0 or 
later 
[13] TechnicalReference_Asr_AMDRunTimeMeasurement.pdf 
V1.0 or 
later 
[14] AN-ISC-8-1118 MICROSAR BSW Compatibility Check 
1.0 
[15] AUTOSAR_InterruptHandling_Explanation.pdf 
1.0.0 or 
later 
[16] http://www.autosar.org/bugzilla/ 
n/a 
Table 1-2 
Reference documents 
1.3 
Scope of the Document 
This technical reference describes the general use of the FlexRay driver basis software. All 
aspects which are Communication controller specific are described in a separate 
document [8], which is also part of the delivery. 
Please note 
We have configured the programs in accordance with your specifications in the 
questionnaire. Whereas the programs do support other configurations than the one 
specified in your questionnaire, Vector´s release of the programs delivered to your 
company is expressly restricted to the configuration you have specified in the 
questionnaire.
Technical Reference MICROSAR FR 
© 2017 Vector Informatik GmbH 
Version 1.04.00 
4 
based on template version 6.0.1 
Contents 
1 
Document Information ................................................................................................. 2 
1.1 
History ............................................................................................................... 2 
1.2 
Reference Documents ....................................................................................... 2 
1.3 
Scope of the Document...................................................................................... 3 
2 
Introduction................................................................................................................... 9 
2.1 
Architecture Overview ........................................................................................ 9 
3 
Functional Description ............................................................................................... 12 
3.1 
Features .......................................................................................................... 12 
3.2 
Initialization ...................................................................................................... 13 
3.3 
Configuration Variants ...................................................................................... 14 
3.4 
States .............................................................................................................. 14 
3.5 
Dual bus network usage................................................................................... 14 
3.6 
Main Functions ................................................................................................ 16 
3.7 
Error Handling .................................................................................................. 16 
3.7.1 
Development Error Reporting ........................................................... 16 
3.7.1.1 
Parameter Checking ...................................................... 18 
3.7.2 
Production Code Error Reporting ..................................................... 21 
3.8 
Buffer Reconfiguration ..................................................................................... 21 
3.9 
Reconfig LPdu Support .................................................................................... 21 
3.10 
Dynamic Payload ............................................................................................. 22 
3.11 
Single Channel API .......................................................................................... 22 
3.12 
Direct Buffer Access ......................................................................................... 23 
3.13 
Hardware Loop with Cancellation ..................................................................... 23 
3.14 
FIFO reception ................................................................................................. 23 
3.15 
Reading out the Flexray parameters (Read CC Parameters) ........................... 24 
4 
Integration ................................................................................................................... 25 
4.1 
Scope of Delivery ............................................................................................. 25 
4.1.1 
Static Files ....................................................................................... 25 
4.1.2 
Dynamic Files ...

[Back to top](#_top)
