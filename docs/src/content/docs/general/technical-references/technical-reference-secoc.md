---
title: "SecOC"
description: "Converted Vector Technical Reference: TechnicalReference_SecOC.pdf."
---

> **Converted from** [`Doc/TechnicalReferences/TechnicalReference_SecOC.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_SecOC.pdf) (34 pages). Machine-converted with PyMuPDF: running text and structure are preserved as Markdown, but **layout, figures, tables and formulas may differ from the original PDF**. For normative content, always consult the original PDF.

| Property | Value |
|---|---|
| Source | [`TechnicalReference_SecOC.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_SecOC.pdf) |
| Pages | 34 |
| PDF title | MICROSAR Secure Onboard Communication |
| Author | Heiko Hübler, Markus Bart, Gunnar Meiss |

## Document outline

- 1 Component History
- 2 Introduction
  - 2.1 Architecture Overview
- 3 Functional Description
  - 3.1 Features
    - 3.1.1 Deviations
    - 3.1.2 Secured PDUs
      - 3.1.2.1 Reception of Secured PDUs
      - 3.1.2.2 Transmission of Secured PDUs
      - 3.1.2.3 Secured PDU Collections
    - 3.1.3 Generic Freshness value interface
  - 3.2 Development Mode
  - 3.3 Initialization
  - 3.4 Main Functions
  - 3.5 Error Handling
    - 3.5.1 Development Error Reporting
- 4 Integration
  - 4.1 Scope of Delivery
    - 4.1.1 Static Files
    - 4.1.2 Dynamic Files
  - 4.2 Critical Sections
- 5 API Description
  - 5.1 Services provided by SecOC
    - 5.1.1 SecOC_InitMemory
    - 5.1.2 SecOC_Init
    - 5.1.3 SecOC_DeInit
    - 5.1.4 SecOC_GetVersionInfo
    - 5.1.5 SecOC_Transmit
    - 5.1.6 SecOC_VerifyStatusOverride
    - 5.1.7 SecOC_SetDevelopmentMode
    - 5.1.8 SecOC_MainFunctionRx
    - 5.1.9 SecOC_MainFunctionTx
  - 5.2 Services used by SecOC
  - 5.3 Callback Functions
    - 5.3.1 SecOC_RxIndication
    - 5.3.2 SecOC_TxConfirmation
    - 5.3.3 SecOC_TriggerTransmit
    - 5.3.4 SecOC_TpRxIndication
    - 5.3.5 SecOC_TpTxConfirmation
    - 5.3.6 SecOC_CopyRxData

_22 further outline entries in the original._

## Excerpt (first pages)

MICROSAR Secure Onboard 
Communication 
Technical Reference 
Version 3.0.0 
Authors 
Heiko Hübler, Markus Bart, Gunnar Meiss 
Status 
Released
Technical Reference MICROSAR Secure Onboard Communication 
© 2017 Vector Informatik GmbH 
Version 3.0.0 
2 
based on template version 5.9.0 
Document Information 
History 
Author 
Date 
Version 
Remarks 
Heiko Hübler 
2014-10-02 
1.00.00 
ESCAN00078719: AR4-667: 
CONC_607_SecureOnboardCommunicati
on 
Heiko Hübler 
2015-07-20 
1.01.00 
ESCAN00084099: FEAT-1475: SecOC-
Extensions, TP, CSM and encryption 
Gunnar Meiss 
2016-02-25 
1.02.00 
ESCAN00088549: FEAT-1631: Trigger 
Transmit API with SduLength In/Out 
according to ASR4.2.2 
Heiko Hübler 
2016-11-11 
1.03.00 
FEATC-379: SecOC Release 
Gunnar Meiss 
2017-02-27 
2.00.00 
FEATC-852: FEAT-2365: Support 
standalone distribution of AR4.3 SecOC 
Heiko Hübler 
2017-03-13 
2.01.00 
ESCAN00094184: BETA version - the 
BSW module is in BETA state 
Heiko Hübler 
2017-07-26 
3.00.00 
STORYC-919: Development Mode 
Reference Documents 
No. 
Source 
Title 
Version 
[1] 
AUTOSAR 
AUTOSAR_SWS_SecureOnboardCommunication.pdf 
V4.3.0 
[2] 
AUTOSAR 
AUTOSAR_SWS_DET.pdf 
V4.3.0 
[3] 
AUTOSAR 
AUTOSAR_BasicSoftwareModules.pdf 
V1.0.0 
Caution 
We have configured the programs in accordance with your specifications in the 
questionnaire. Whereas the programs do support other configurations than the one 
specified in your questionnaire, Vector´s release of the programs delivered to your 
company is expressly restricted to the configuration you have specified in the 
questionnaire.
Technical Reference MICROSAR Secure Onboard Communication 
© 2017 Vector Informatik GmbH 
Version 3.0.0 
3 
based on template version 5.9.0 
Contents 
1 
Component History ...................................................................................................... 6 
2 
Introduction................................................................................................................... 7 
2.1 
Architecture Overview ........................................................................................ 7 
3 
Functional Description ................................................................................................. 8 
3.1 
Features ............................................................................................................ 8 
3.1.1 
Deviations .......................................................................................... 8 
3.1.2 
Secured PDUs ................................................................................... 8 
3.1.2.1 
Reception of Secured PDUs ............................................ 9 
3.1.2.2 
Transmission of Secured PDUs ....................................... 9 
3.1.2.3 
Secured PDU Collections................................................. 9 
3.1.3 
Generic Freshness value interface ..................................................... 9 
3.2 
Development Mode .......................................................................................... 10 
3.3 
Initialization ...................................................................................................... 10 
3.4 
Main Functions ................................................................................................ 10 
3.5 
Error Handling .................................................................................................. 10 
3.5.1 
Development Error Reporting ........................................................... 10 
4 
Integration ................................................................................................................... 12 
4.1 
Scope of Delivery ............................................................................................. 12 
4.1.1 
Static Files ....................................................................................... 12 
4.1.2 
Dynamic Files .................................................................................. 12 
4.2 
Critical Sections ............................................................................................... 13 
5 
API Description ........................................................................................................... 15 
5.1 
Services provided by SecOC ........................................................................... 15 
5.1.1 
SecOC_InitMemory .......................................................................... 15 
5.1.2 
SecOC_Init ...................................................................................... 15 
5.1.3 
SecOC_DeInit .................................................................................. 16 
5.1.4 
SecOC_GetVersionInfo .................................................................... 16 
5.1.5 
SecOC_Transmit .............................................................................. 17 
5.1.6 
SecOC_VerifyStatusOverride ........................................................... 17 
5.1.7 
SecOC_SetDevelopmentMode ........................................................ 18 
5.1.8 
SecOC_MainFunctionRx .................................................................. 18 
5.1.9 
SecOC_MainFunctionTx .................................................................. 19 
5.2 
Services used by SecOC ................................................................................. 19 
5.3 
Callback Functions ........................................................................................... 20 
5.3.1 
SecOC_RxIndication ........................................................................ 20
Technical Reference MICROSAR Secure Onboard Communication 
© 2017 Vector Informatik GmbH 
Version 3.0.0 
4 
based on template version 5.9.0 
5.3.2 
SecOC_TxConfirmation ................................................................... 20 
5.3.3 
SecOC_TriggerTransmit................................................................... 21 
5.3.4 
SecOC_TpRxIndication .............................

[Back to top](#_top)
