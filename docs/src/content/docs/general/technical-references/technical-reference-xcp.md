---
title: "XCP"
description: "Converted Vector Technical Reference: TechnicalReference_XCP.pdf."
---

> **Converted from** [`Doc/TechnicalReferences/TechnicalReference_XCP.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_XCP.pdf) (71 pages). Machine-converted with PyMuPDF: running text and structure are preserved as Markdown, but **layout, figures, tables and formulas may differ from the original PDF**. For normative content, always consult the original PDF.

| Property | Value |
|---|---|
| Source | [`TechnicalReference_XCP.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_XCP.pdf) |
| Pages | 71 |
| PDF title | MICROSAR XCPMICROSAR XCP |
| Author | Andreas HerkommerAndreas Herkommer |

## Document outline

- 1 Component History
- 2 Introduction
  - 2.1 Architecture Overview
- 3 Functional Description
  - 3.1 Features
    - 3.1.1 Deviations
    - 3.1.2 Additions/ Extensions
  - 3.2 Initialization
  - 3.3 States
  - 3.4 Main Functions
  - 3.5 Block Transfer Communication Model
  - 3.6 Slave Device Identification
    - 3.6.1 XCP Station Identifier
    - 3.6.2 XCP Generic Identification
  - 3.7 Seed & Key
  - 3.8 Checksum Calculation
    - 3.8.1 Custom CRC calculation
  - 3.9 Memory Access by Application
    - 3.9.1 Memory Read and Write Protection
    - 3.9.2 Special use case “Type Safe Copy”
  - 3.10 Event Codes
  - 3.11 Service Request Messages
  - 3.12 User Defined Command
  - 3.13 Synchronous Data Transfer
    - 3.13.1 Synchronous Data Acquisition (DAQ)
    - 3.13.2 DAQ Timestamp
    - 3.13.3 Power-Up Data Transfer
    - 3.13.4 Data Stimulation (STIM)
    - 3.13.5 Bypassing
    - 3.13.6 Data Acquisition Plug & Play Mechanisms
    - 3.13.7 Event Channel Plug & Play Mechanism
    - 3.13.8 Send Queue
    - 3.13.9 Data consistency
  - 3.14 The Online Data Calibration Model
    - 3.14.1 Page Switching
    - 3.14.2 Page Switching Plug & Play Mechanism
    - 3.14.3 Calibration Data Page Copying
    - 3.14.4 Freeze Mode Handling
  - 3.15 Flash Programming
    - 3.15.1 Flash Programming by the ECU’s Application

_85 further outline entries in the original._

## Excerpt (first pages)

MICROSAR XCP 
Technical Reference 
Version 2.0.0 
Authors 
Andreas Herkommer 
Status 
Released
Technical ReferenceTechnical Reference MICROSAR XCPMICROSAR XCP 
© 2017 Vector Informatik GmbH 
Version 2.0.02.0.0 
2 
based on template version 6.0.1 
Document Information 
History 
Author 
Date 
Version 
Remarks 
Andreas Herkommer 2017-02-13 
1.00.00 
Initial Version 
Andreas Herkommer 2017-11-14 
2.00.00 
Added new API Xcp_SetStimMode 
Reference Documents 
No. 
Source 
Title 
Version 
[1] 
AUTOSAR 
AUTOSAR_SWS_XCP.pdf 
2.3.0 
[2] 
AUTOSAR 
AUTOSAR_SWS_DET.pdf 
3.4.1 
[3] 
AUTOSAR 
AUTOSAR_SWS_DEM.pdf 
5.2.0 
[4] 
AUTOSAR 
AUTOSAR_BasicSoftwareModules.pdf 
V1.0.0 
[5] 
ASAM 
ASAM_XCP_Part2-Protocol-Layer-Specification_V1-1-
0.pdf 
V1.1 
Scope of the Document 
This document describes the features, APIs, and integration of the XCP Protocol Layer. 
This document does not cover the XCP Transport Layers for CAN, FlexRay and Ethernet, 
which are available at Vector Informatik. 
Further information about XCP on CAN, FlexRay and Ethernet Transport Layers can be 
found in their documentation. 
Please also refer to “The Universal Measurement and Calibration Protocol Family” 
specification by ASAM e.V. 
The XCP Protocol Layer is a hardware independent protocol that can be ported to almost 
any hardware. Due to there are numerous combinations of micro controllers, compilers 
and memory models it cannot be guaranteed that it will run properly on any of the above 
mentioned combinations. 
Please note that in this document the term Application is not used strictly for the user 
software but also for any higher software layer, like e.g. a Communication Control Layer. 
Therefore, Application refers to any of the software components using XCP. 
The API of the functions is described in a separate chapter at the end of this document. 
Info 
The source code of the XCP Protocol Layer, configuration examples and 
documentation are available on the Internet at www.vector-informatik.de in a functional 
restricted form.
Technical ReferenceTechnical Reference MICROSAR XCPMICROSAR XCP 
© 2017 Vector Informatik GmbH 
Version 2.0.02.0.0 
3 
based on template version 6.0.1 
Caution 
We have configured the programs in accordance with your specifications in the 
questionnaire. Whereas the programs do support other configurations than the one 
specified in your questionnaire, Vector´s release of the programs delivered to your 
company is expressly restricted to the configuration you have specified in the 
questionnaire.
Technical ReferenceTechnical Reference MICROSAR XCPMICROSAR XCP 
© 2017 Vector Informatik GmbH 
Version 2.0.02.0.0 
4 
based on template version 6.0.1 
Contents 
1 
Component History .................................................................................................... 10 
2 
Introduction................................................................................................................. 11 
2.1 
Architecture Overview ...................................................................................... 11 
3 
Functional Description ............................................................................................... 13 
3.1 
Features .......................................................................................................... 13 
3.1.1 
Deviations ........................................................................................ 13 
3.1.2 
Additions/ Extensions ....................................................................... 15 
3.2 
Initialization ...................................................................................................... 15 
3.3 
States .............................................................................................................. 15 
3.4 
Main Functions ................................................................................................ 16 
3.5 
Block Transfer Communication Model .............................................................. 16 
3.6 
Slave Device Identification ............................................................................... 17 
3.6.1 
XCP Station Identifier ....................................................................... 17 
3.6.2 
XCP Generic Identification ............................................................... 17 
3.7 
Seed & Key ...................................................................................................... 17 
3.8 
Checksum Calculation ..................................................................................... 18 
3.8.1 
Custom CRC calculation .................................................................. 18 
3.9 
Memory Access by Application ......................................................................... 18 
3.9.1 
Memory Read and Write Protection ................................................. 18 
3.9.2 
Special use case “Type Safe Copy” ................................................. 19 
3.10 
Event Codes .................................................................................................... 19 
3.11 
Service Request Messages ............................................................................. 20 
3.12 
User Defined Command ................................................................................... 20 
3.13 
Synchronous Data Transfer ............................................................................. 20 
3.13.1 
Synchronous Data Acquisition (DAQ) ............................................... 20 
3.13.2 
DAQ Timestamp ............................................................................... 21 
3.13.3 
Power-Up Data Transfer .................................................................. 21 
3.13.4 
Data Stimulation (STIM) ................................................................... 22 
3.13.5 
Bypassing ........................................................................................ 22 
3.13.6 
Data Acquisition Plug & Play

[Back to top](#_top)
