---
title: "FrIf"
description: "Converted Vector Technical Reference: TechnicalReference_FrIf.pdf."
---

> **Converted from** [`Doc/TechnicalReferences/TechnicalReference_FrIf.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_FrIf.pdf) (81 pages). Machine-converted with PyMuPDF: running text and structure are preserved as Markdown, but **layout, figures, tables and formulas may differ from the original PDF**. For normative content, always consult the original PDF.

| Property | Value |
|---|---|
| Source | [`TechnicalReference_FrIf.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_FrIf.pdf) |
| Pages | 81 |
| PDF title | MICROSAR FlexRay Interface |
| Author | Oliver Reineke, Anthony Thomas |

## Document outline

- 1 Component History
- 2 Introduction
  - 2.1 Architecture Overview
- 3 Functional Description
  - 3.1 Features
    - 3.1.1 Deviations
    - 3.1.2 Additions/ Extensions
  - 3.2 Initialization
    - 3.2.1 Configuration Variants 1 and 2 (Pre-Compile and Link-Time Configuration)
    - 3.2.2 Configuration Variant 3 (Post-build Configuration)
  - 3.3 States
  - 3.4 Main Functions
    - 3.4.1 Cyclic function
    - 3.4.2 Job List Execution
      - 3.4.2.1 Job List Execution in Interrupt Context
      - 3.4.2.2 Job List Execution in Task Context
  - 3.5 Error Handling
    - 3.5.1 Development Error Reporting
      - 3.5.1.1 Parameter Checking
    - 3.5.2 Production Code Error Reporting
  - 3.6 Transmission
    - 3.6.1 Decoupled Transmission
    - 3.6.2 Immediate Transmission
  - 3.7 Reception
  - 3.8 Timer Handling
  - 3.9 Buffer Reconfiguration
  - 3.10 L-PDU Reconfiguration
  - 3.11 Dual Channel Redundancy Support
  - 3.12 Dynamic Payload
- 4 Integration
  - 4.1 Scope of Delivery
    - 4.1.1 Static Files
    - 4.1.2 Dynamic Files
  - 4.2 Include Structure
  - 4.3 Compiler Abstraction and Memory Mapping
  - 4.4 Critical Sections and Exclusive Areas
    - 4.4.1 FRIF_EXCLUSIVE_AREA_0
    - 4.4.2 FRIF_EXCLUSIVE_AREA_1
    - 4.4.3 FRIF_EXCLUSIVE_AREA_2
- 5 API Description

_65 further outline entries in the original._

## Excerpt (first pages)

MICROSAR FlexRay Interface 
Technical Reference 
Version 4.01.00 
Authors 
Oliver Reineke, Anthony Thomas 
Status 
Released
Technical Reference MICROSAR FlexRay Interface 
© 2017 Vector Informatik GmbH 
Version 4.01.00 
2 
based on template version 4.11.3 
Document Information 
History 
Author 
Date 
Version 
Remarks 
Anthony Thomas 
2016-04-24 
4.00.00 
First SafeBSW release. 
Anthony Thomas 
2016-07-13 
4.00.01 
Added deviation related to the job list 
resynchronization. 
Anthony thomas 
2017-03-24 
4.01.00 
Support 2 FlexRay Clusters 
Reference Documents 
No. 
Title 
Version 
[1] 
AUTOSAR_FlexRayInterface.pdf 
V3.2.0 
[2] 
AUTOSAR_SWS_DET.pdf 
V2.2.0 
[3] 
AUTOSAR_SWS_DEM.pdf 
V2.2.1 
[4] 
AUTOSAR_BasicSoftwareModules.pdf 
V1.0.0 
[5] 
TechnicalReference_Asr_Fr.pdf 
V1.14 or 
later 
[6] 
TechnicalReference_Asr_FrTrcv_Tja1080.pdf 
V.1.08 or 
later 
[7] 
TechnicalReference_Asr_FrNm.pdf 
V1.3.0 or 
later 
[8] 
TechnicalReference_Asr_EcuM.pdf 
V2.1.0 or 
later 
[9] 
TechnicalReference_Asr_Com.pdf 
V2.6.0 or 
later 
[10] 
TechnicalReference_Asr_PduR.pdf 
V3.4.0 or 
later 
[11] 
TechnicalReference_Asr_SchM.pdf 
V2.3.0 or 
later 
[12] 
 AN-ISC-8-1118_MICROSAR_BSW_Compatibility_Check.pdf 
V1.0 
[13] 
TechnicalReference_IdentityManager.pdf 
V1.1.7 or 
later
Technical Reference MICROSAR FlexRay Interface 
© 2017 Vector Informatik GmbH 
Version 4.01.00 
3 
based on template version 4.11.3 
Scope of the Document 
This technical reference describes the general use of the FlexRay Interface basic software. 
Please note 
We have configured the programs in accordance with your specifications in the questionnaire. 
Whereas the programs do support other configurations than the one specified in your 
questionnaire, Vector´s release of the programs delivered to your company is expressly 
restricted to the configuration you have specified in the questionnaire.
Technical Reference MICROSAR FlexRay Interface 
© 2017 Vector Informatik GmbH 
Version 4.01.00 
4 
based on template version 4.11.3 
Contents 
1 
Component History ......................................................................................................... 11 
2 
Introduction ...................................................................................................................... 12 
2.1 
Architecture Overview ................................................................................................. 13 
3 
Functional Description ................................................................................................... 15 
3.1 
Features ......................................................................................................................... 15 
3.1.1 
Deviations .................................................................................................... 16 
3.1.2 
Additions/ Extensions ................................................................................ 17 
3.2 
Initialization .................................................................................................................... 17 
3.2.1 
Configuration Variants 1 and 2 (Pre-Compile and Link-Time 
Configuration) ............................................................................................. 17 
3.2.2 
Configuration Variant 3 (Post-build Configuration) ............................... 18 
3.3 
States ............................................................................................................................. 18 
3.4 
Main Functions ............................................................................................................. 18 
3.4.1 
Cyclic function ............................................................................................. 18 
3.4.2 
Job List Execution ...................................................................................... 18 
3.4.2.1 
Job List Execution in Interrupt Context............................... 19 
3.4.2.2 
Job List Execution in Task Context ..................................... 20 
3.5 
Error Handling ............................................................................................................... 20 
3.5.1 
Development Error Reporting ................................................................... 20 
3.5.1.1 
Parameter Checking.............................................................. 23 
3.5.2 
Production Code Error Reporting ............................................................ 26 
3.6 
Transmission ................................................................................................................. 28 
3.6.1 
Decoupled Transmission ........................................................................... 28 
3.6.2 
Immediate Transmission ........................................................................... 28 
3.7 
Reception ...................................................................................................................... 29 
3.8 
Timer Handling ............................................................................................................. 29
Technical Reference MICROSAR FlexRay Interface 
© 2017 Vector Informatik GmbH 
Version 4.01.00 
5 
based on template version 4.11.3 
3.9 
Buffer Reconfiguration ................................................................................................. 29 
3.10 
L-PDU Reconfiguration ............................................................................................... 29 
3.11 
Dual Channel Redundancy Support .......................................................................... 30 
3.12 
Dynamic Payload ......................................................................................................... 32 
4 
Integration ........................................................................................................................ 33 
4.1 
Scope of Delivery ......................................................................................................... 33

[Back to top](#_top)
