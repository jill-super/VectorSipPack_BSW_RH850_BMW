---
title: "PduR"
description: "Converted Vector Technical Reference: TechnicalReference_PduR.pdf."
---

> **Converted from** [`Doc/TechnicalReferences/TechnicalReference_PduR.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_PduR.pdf) (71 pages). Machine-converted with PyMuPDF: running text and structure are preserved as Markdown, but **layout, figures, tables and formulas may differ from the original PDF**. For normative content, always consult the original PDF.

| Property | Value |
|---|---|
| Source | [`TechnicalReference_PduR.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_PduR.pdf) |
| Pages | 71 |
| PDF title | MICROSAR PDU Router |
| Author | Erich Schondelmaier, Gunnar Meiss, Sebastian Waldvogel, Florian Röhm |

## Document outline

- 1 Component History
- 2 Introduction
  - 2.1 Architecture Overview
- 3 Functional Description
  - 3.1 Features
  - 3.2 Interfaces to adjacent modules of the PDUR
  - 3.3 Initialization
  - 3.4 States
  - 3.5 Error Handling
    - 3.5.1 Development Error Reporting
  - 3.6 Interface Layer Gateway
    - 3.6.1 Data Provision
      - 3.6.1.1 Direct data provision
      - 3.6.1.2 Trigger transmit data provision
    - 3.6.2 FIFO Queue
    - 3.6.3 Buffer Configurations
      - 3.6.3.1 No Buffer
      - 3.6.3.2 Direct Data Provision FIFO
      - 3.6.3.3 Trigger Transmit Data Provision FIFO
      - 3.6.3.4 Trigger Transmit Data Provision Single Buffer
    - 3.6.4 Shared Tx Buffer Pool support
    - 3.6.5 Timing aspects
    - 3.6.6 Dynamic DLC Routing
    - 3.6.7 Transport protocol low level routing
    - 3.6.8 Smart Learning (Switching)
      - 3.6.8.1 Configuration
      - 3.6.8.2 Example
    - 3.6.9 Queue overflow notification callback
    - 3.6.10 N:1 Routing Paths with Upper Layer and Tx confirmation
  - 3.7 Transport Protocol Gateway
    - 3.7.1 Multi-Routing
    - 3.7.2 TP Threshold
      - 3.7.2.1 Restrictions
      - 3.7.2.2 Threshold “0”
    - 3.7.3 Tx Buffer Handling
      - 3.7.3.1 Tx Buffer Usage Types
      - 3.7.3.1.1 Dedicated Tx Buffer
      - 3.7.3.1.2 Shared Tx Buffer
      - 3.7.3.1.3 Local Tx Buffer Pool
      - 3.7.3.1.4 Global Tx Buffer Pool

_55 further outline entries in the original._

## Excerpt (first pages)

MICROSAR PDU Router 
Technical Reference 
DaVinci Configurator 
Version 3.00.01 
Authors 
Erich Schondelmaier, Gunnar Meiss, Sebastian 
Waldvogel, Florian Röhm 
Status 
Released
Technical Reference MICROSAR PDU Router 
© 2017 Vector Informatik GmbH 
Version 3.00.01 
2 
based on template version 4.9.2 
Document Information 
History 
Author 
Date 
Version 
Remarks 
Erich Schondelmaier 2012-12-20 
1.00.00 
Initial version based on PduR Technical 
Reference 
Erich Schondelmaier 2012-07-12 
2.00.00 
Adapted to AUTOSAR 4.0.3 
Erich Schondelmaier 2012-10-15 
2.01.00 
TP Gateway 
IF Gateway 
Gunnar Meiss 
2012-11-21 
2.02.00 
AR4-285: Support PduRRoutingPathGroups 
Erich Schondelmaier 2013-02-07 
2.02.01 
Adapted Tp- API description 
Erich Schondelmaier 2013-02-15 
2.02.02 
Added some ASR deviations 
ESCAN00064126 
Erich Schondelmaier 2013-03-19 
2.03.00 
ESCAN00064364 AR4-325: Post-Build 
Loadable 
Added Cancel- Receive/ Transmit Support 
Erich Schondelmaier 2014-04-15 
2.04.00 
Added TP routing with variable addresses 
(MetaData Handling) 
Added Threshold “0” support 
Erich Schondelmaier 2014-04-15 
2.04.01 
Support the StartOfReception API (with the 
PduInfoType), 
TxConfirmation and RxIndication according 
ASR4.1.2 
Erich Schondelmaier 2014-09-01 
2.05.00 
Added SecOC to the Interface Overview 
Extended Tp Gateway Routing behavior 
description 
Updated Configuration Variant 
Sebastian Waldvogel 2015-02-23 
2.06.00 
FEAT-1057: Added documentation about 
configuration of range routing paths and 
functional requests gateway 
Sebastian Waldvogel 2015-05-11 
2.06.01 
FEAT-1057: Improvements of documentation 
Florian Röhm 
2015-07-30 
2.07.00 
FEAT-109: Added documentation for PduR 
switching feature and N:1 routing paths 
Florian Röhm 
2016-01-16 
2.08.00 
FEAT-1485: Added documentation for 1:N 
and N:1 transport protocol routing paths 
Gunnar Meiss 
2016-02-25 
2.08.00 
FEAT-1631: Trigger Transmit API 
with 
SduLength In/Out according to ASR4.2.2 
Erich Schondelmaier 2016-03-17 
2.08.00 
added limitation: 
- The Polling Mode cannot be used for N:1 
routings. 
- Cancel Transmit for N:1 routing paths is 
only supported if a Tx Confirmation is 
enabled. 
- Removed limitation: N:1 interface routing 
paths suppport only for lower layer CanIf.
Technical Reference MICROSAR PDU Router 
© 2017 Vector Informatik GmbH 
Version 3.00.01 
3 
based on template version 4.9.2 
Florian Röhm 
2016-04-01 
2.08.01 
Removed empty chapters 
Erich Schondelmaier, 
Florian Röhm 
2016-08-10 
3.00.00 
Shared/Dedicated Buffer support 
Memory mapping extension 
Sebastian Waldvogel 2016-11-24 
3.00.00 
Smart Learning (Switching) 
Florian Röhm 
2017-06-22 
3.00.01 
ESCAN00095254: 
Missing 
DET 
error 
PDUR_E_PDU_INSTANCES_LOST 
description in case of N:1 communication 
interface routings with upper layer 
Florian Röhm 
2017-06-23 
3.00.01 
STORYC-1629: N:1 routing path support for 
IpduM Container feature
Technical Reference MICROSAR PDU Router 
© 2017 Vector Informatik GmbH 
Version 3.00.01 
4 
based on template version 4.9.2 
Reference Documents 
No. 
Source 
Title 
Version 
[1] 
AUTOSAR 
AUTOSAR_SWS_PDURouter.pdf 
4.0.3 
[2] 
AUTOSAR 
AUTOSAR_SWS_PDURouter.pdf. 
4.1.1 
[3] 
AUTOSAR 
AUTOSAR_SWS_PDURouter.pdf 
4.1.2 
[4] 
AUTOSAR 
AUTOSAR_SWS_DevelopmentErrorTracer.pdf 
3.2.0 
[5] 
AUTOSAR 
AUTOSAR_TR_BSWModuleList.pdf 
1.6.0 
[6] 
AUTOSAR 
AUTOSAR_SWS_SAEJ1939TransportLayer.pdf 
1.5.0 
[7] 
Vector 
TechnicalReference_CanIf.pdf 
6.02.00 
[8] 
Vector 
TechnicalReference_<CAN Driver>.pdf 
- 
[9] 
AUTOSAR 
TechnicalReference_CanTp.pdf 
2.00.00 
This technical reference describes the general use of the PduR basis software module. 
Caution 
We have configured the programs in accordance with your specifications in the 
questionnaire. Whereas the programs do support other configurations than the one 
specified in your questionnaire, Vector´s release of the programs delivered to your 
company is expressly restricted to the configuration you have specified in the 
questionnaire.
Technical Reference MICROSAR PDU Router 
© 2017 Vector Informatik GmbH 
Version 3.00.01 
5 
based on template version 4.9.2 
Contents 
1 
Component History .................................................................................................... 10 
2 
Introduction................................................................................................................. 11 
2.1 
Architecture Overview ...................................................................................... 12 
3 
Functional Description ............................................................................................... 14 
3.1 
Features .......................................................................................................... 14 
3.2 
Interfaces to adjacent modules of the PDUR .................................................... 15 
3.3 
Initialization ...................................................................................................... 15 
3.4 
States .............................................................................................................. 15 
3.5 
Error Handling .................................................................................................. 15 
3.5.1 
Development Error Reporting ........................................................... 15 
3.6 
Interface Layer Gateway .................................................................................. 15 
3.6.1 
Data Provision .................................................................................. 15 
3.6.1.1 
Direct data provision ...................................................... 15 
3.6.1.2 
Trigger transmit data provision ....................................... 16 
3.6.2 
FIFO Queue ..................................................................................... 16 
3.6.3 
Buffer Configurations ....................................................................... 16 
3.6.3.1 
No Buffer ..................

[Back to top](#_top)
