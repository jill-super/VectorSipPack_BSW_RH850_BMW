---
title: "Cdd Communication"
description: "Converted Vector Technical Reference: TechnicalReference_Cdd_Communication.pdf."
---

> **Converted from** [`Doc/TechnicalReferences/TechnicalReference_Cdd_Communication.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_Cdd_Communication.pdf) (45 pages). Machine-converted with PyMuPDF: running text and structure are preserved as Markdown, but **layout, figures, tables and formulas may differ from the original PDF**. For normative content, always consult the original PDF.

| Property | Value |
|---|---|
| Source | [`TechnicalReference_Cdd_Communication.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_Cdd_Communication.pdf) |
| Pages | 45 |
| PDF title | MICROSAR Complex Device Driver |
| Author | Safiulla Shakir, Gunnar Meiss, Markus Bart |

## Document outline

- 1 Component History
- 2 Introduction
  - 2.1 Architecture Overview
- 3 Functional Description
  - 3.1 Features
- 4 Integration
  - 4.1 Scope of Delivery
    - 4.1.1 Static Files
    - 4.1.2 Dynamic Files
  - 4.2 Compiler Abstraction and Memory Mapping
- 5 API Description CddPduRUpperLayerContribution as IF
  - 5.1 Services used by <CDD>
  - 5.2 Callback Functions
    - 5.2.1 <CDD>_RxIndication
    - 5.2.2 <CDD>_TxConfirmation
    - 5.2.3 <CDD>_TriggerTransmit
- 6 API Description CddPduRUpperLayerContribution as TP
  - 6.1 Services used by <CDD>
  - 6.2 Callback Functions
    - 6.2.1 <CDD>_StartOfReception
    - 6.2.2 <CDD>_CopyRxData
    - 6.2.3 <CDD>_TpRxIndication
    - 6.2.4 <CDD>_CopyTxData
    - 6.2.5 <CDD>_TpTxConfirmation
- 7 API Description CddPduRLowerLayerContribution as IF
  - 7.1 Services provided by <CDD>
    - 7.1.1 <CDD>_Transmit
    - 7.1.2 <CDD>_CancelTransmit
  - 7.2 Services used by <CDD>
- 8 API Description CddPduRLowerLayerContribution as TP
  - 8.1 Services provided by <CDD>
    - 8.1.1 <CDD>_Transmit
    - 8.1.2 <CDD>_CancelTransmit
    - 8.1.3 <CDD>_CancelReceive
    - 8.1.4 <CDD>_ChangeParameter
  - 8.2 Services used by <CDD>
- 9 API Description CddComIfUpperLayerContribution
  - 9.1 Services used by <CDD>
  - 9.2 Callback Functions
    - 9.2.1 <CDD>_RxIndication

_30 further outline entries in the original._

## Excerpt (first pages)

MICROSAR Complex Device Driver 
Technical Reference 
DaVinci Configurator 
Version 2.04.00 
Authors 
Safiulla Shakir, Gunnar Meiss, Markus Bart 
Status 
Released
Technical Reference MICROSAR Complex Device Driver 
© 2017 Vector Informatik GmbH 
Version 2.04.00 
2 
based on template version 5.2.0 
Document Information 
History 
Author 
Date 
Version 
Remarks 
Safiulla Shakir 
2012-03-23 
1.00.00 
Initial Version 
Gunnar Meiss 
2012-08-08 
2.00.00 
Support AUTOSAR 4 
Gunnar Meiss 
2013-05-13 
2.00.01 
performed review rework 
Markus Bart 
2014-02-05 
2.01.00 
Support J1939Rm Contribution 
Markus Bart 
2014-02-28 
2.02.00 
Support the StartOfReception API with the 
PduInfoType according to ASR4.1.2 
Gunnar Meiss 
2014-05-07 
2.02.00 
AR4-769: ESCAN00075414 
AR4-744: Cdd shall support 
CddSoAdUpperLayerContribution as an 
extension to AR 4.0.3 (schema shall 
remain at AR 4.0.3) 
Gunnar Meiss 
2016-02-24 
2.03.00 
FEAT-1631: Trigger Transmit API with 
SduLength In/Out according to ASR4.2.2 
Gunnar Meiss 
2017-01-09 
2.04.00 
Rename TechnicalReference_Cdd.pdf to 
TechnicalReference_Cdd_Communication.
pdf 
Reference Documents 
No. 
Source 
Title 
Version 
[1] 
AUTOSAR 
AUTOSAR_TPS_ECUConfiguration.pdf 
3.2.0 
[2] 
AUTOSAR 
AUTOSAR_TR_BSWModuleList.pdf 
1.6.0 
Caution 
We have configured the programs in accordance with your specifications in the 
questionnaire. Whereas the programs do support other configurations than the one 
specified in your questionnaire, Vector´s release of the programs delivered to your 
company is expressly restricted to the configuration you have specified in the 
questionnaire.
Technical Reference MICROSAR Complex Device Driver 
© 2017 Vector Informatik GmbH 
Version 2.04.00 
3 
based on template version 5.2.0 
Caution 
This symbol calls your attention to warnings. 
Contents 
1 
Component History ...................................................................................................... 7 
2 
Introduction................................................................................................................... 8 
2.1 
Architecture Overview ........................................................................................ 9 
3 
Functional Description ............................................................................................... 10 
3.1 
Features .......................................................................................................... 10 
4 
Integration ................................................................................................................... 11 
4.1 
Scope of Delivery ............................................................................................. 11 
4.1.1 
Static Files ....................................................................................... 11 
4.1.2 
Dynamic Files .................................................................................. 11 
4.2 
Compiler Abstraction and Memory Mapping ..................................................... 11 
5 
API Description CddPduRUpperLayerContribution as IF ........................................ 12 
5.1 
Services used by <CDD> ................................................................................. 12 
5.2 
Callback Functions ........................................................................................... 12 
5.2.1 
<CDD>_RxIndication ....................................................................... 12 
5.2.2 
<CDD>_TxConfirmation ................................................................... 13 
5.2.3 
<CDD>_TriggerTransmit .................................................................. 13 
6 
API Description CddPduRUpperLayerContribution as TP ....................................... 15 
6.1 
Services used by <CDD> ................................................................................. 15 
6.2 
Callback Functions ........................................................................................... 15 
6.2.1 
<CDD>_StartOfReception ................................................................ 15 
6.2.2 
<CDD>_CopyRxData ....................................................................... 16 
6.2.3 
<CDD>_TpRxIndication ................................................................... 17 
6.2.4 
<CDD>_CopyTxData ....................................................................... 18 
6.2.5 
<CDD>_TpTxConfirmation ............................................................... 19 
7 
API Description CddPduRLowerLayerContribution as IF ........................................ 20 
7.1 
Services provided by <CDD> ........................................................................... 20 
7.1.1 
<CDD>_Transmit ............................................................................. 20
Technical Reference MICROSAR Complex Device Driver 
© 2017 Vector Informatik GmbH 
Version 2.04.00 
4 
based on template version 5.2.0 
7.1.2 
<CDD>_CancelTransmit .................................................................. 21 
7.2 
Services used by <CDD> ................................................................................. 21 
8 
API Description CddPduRLowerLayerContribution as TP ...................................... 22 
8.1 
Services provided by <CDD> ........................................................................... 22 
8.1.1 
<CDD>_Transmit ............................................................................. 22 
8.1.2 
<CDD>_CancelTransmit .................................................................. 23 
8.1.3 
<CDD>_CancelReceive ................................................................... 24 
8.1.4 
<CDD>_ChangeParameter .............................................................. 25 
8.2 
Services used by <CDD> ................................................................................. 25 
9 
API Description CddComIfUpperLayerContribution ................................................ 26 
9.1 
Servic

[Back to top](#_top)
