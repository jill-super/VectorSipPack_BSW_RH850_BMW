---
title: "Dcm"
description: "Converted Vector Technical Reference: TechnicalReference_Dcm.pdf."
---

> **Converted from** [`Doc/TechnicalReferences/TechnicalReference_Dcm.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_Dcm.pdf) (259 pages). Machine-converted with PyMuPDF: running text and structure are preserved as Markdown, but **layout, figures, tables and formulas may differ from the original PDF**. For normative content, always consult the original PDF.

| Property | Value |
|---|---|
| Source | [`TechnicalReference_Dcm.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_Dcm.pdf) |
| Pages | 259 |
| PDF title | MICROSAR DCM |
| Author | Mishel Shishmanyan, Patrick Rieder, Vitalij Krieger, Thomas Dedler, Alexander Ditte, Savas Ates, Steffen Köhler, Simon W |

## Document outline

- 1 Component History
- 2 Introduction
  - 2.1 How to Read This Document
    - 2.1.1 DCM Integration and Basic Operation
    - 2.1.2 Diagnostic Service Documentation
    - 2.1.3 API Definitions
    - 2.1.4 DCM Configuration Parameter Descriptions
  - 2.2 Architecture Overview
- 3 Functional Description
  - 3.1 Features
  - 3.2 Initialization
  - 3.3 States
  - 3.4 Main Functions
    - 3.4.1 Split Task Functions
      - 3.4.1.1 Functionality
      - 3.4.1.2 Configuration Aspects
      - 3.4.1.3 Integration Aspects
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
  - 4.5 Considerations Using Request- and ResponseData Pointers in a Call-back
- 5 Diagnostic Service Implementation
  - 5.1 RequestCurrentPowertrainDiagnosticData ($01)
    - 5.1.1 Functionality
    - 5.1.2 Required Interfaces
    - 5.1.3 Implementation Aspects
    - 5.1.4 Configuration Aspects
  - 5.2 RequestPowertrainFreezeFrameData ($02)
    - 5.2.1 Functionality
    - 5.2.2 Required Interfaces
    - 5.2.3 Implementation Aspects
    - 5.2.4 Configuration Aspects
  - 5.3 RequestEmissionRelatedDTC ($03)

_380 further outline entries in the original._

## Excerpt (first pages)

MICROSAR DCM 
Technical Reference 
BMW 
Version 8.6 
Authors 
Mishel Shishmanyan, Patrick Rieder, Vitalij Krieger, 
Thomas Dedler, Alexander Ditte, Savas Ates, Steffen 
Köhler, Simon Wolf, Amr Elazhary 
Status 
Released
Technical Reference MICROSAR DCM 
© 2017 Vector Informatik GmbH 
Version 8.6 
2 
based on template version 5.0.0 
Document Information 
History 
Author 
Date 
Version Remarks 
Thomas Dedler, 
Mishel Shishmanyan 
2012-08-15 
1.00.00 
Initial version 
Mishel Shishmanyan 2012-09-21 
1.01.00 
Added: 
5.19 ReadDataByPeriodicIdentifier ($2A) 
5.22 InputOutputControlByIdentifier ($2F) 
6.5.2.7 ReturnControlToECU() 
6.5.2.8 ResetToDefault() 
6.5.2.9 FreezeCurrentState() 
6.5.2.10 ShortTermAdjustment() 
9.8 How to Jump into the FBL from Service 
DiagnosticSessionControl ($10) 
9.10 How to Put DCM in a Non-Default Session at 
ECU Power-On 
Modified: 
Table 6-94 DataServices_<DataName> 
Table 3-4 DET Service IDs 
Mishel Shishmanyan 2012-12-12 
1.02.00 
Added: 
5.15 ReadMemoryByAddress ($23) 
5.20 DynamicallyDefineDataIdentifier ($2C) 
5.24 WriteMemoryByAddress ($3D) 
Table 6-55 Dcm_ReadMemory() 
Table 6-56 Dcm_WriteMemory() 
Modified: 
Table 6-62 ConditionCheckRead(), 
Table 6-65 ReadDataLength(), 
Table 6-66 WriteData() (dynamic length), 
Table 6-67 WriteData() (static length), 
Table 6-68 ReturnControlToECU(), 
Table 6-69 ResetToDefault(), 
Table 6-70 FreezeCurrentState(), 
Table 6-71 ShortTermAdjustment() -“OpStatus”- 
parameter availability limitation 
Table 6-48 <Module>_<DiagnosticService>() 
Table 6-51 
 <Module>_<DiagnosticService>_<SubService>() 
Table 5-54 Service $86: Supported subservices 
Mishel Shishmanyan 2013-04-17 
1.03.00 
No changes 
Mishel Shishmanyan 2013-06-28 
1.04.00 
Added:
Technical Reference MICROSAR DCM 
© 2017 Vector Informatik GmbH 
Version 8.6 
3 
based on template version 5.0.0 
Chapters for OBD service 0x01- 0x0A. 
6.6.1.2.7 DtrServices 
6.6.1.2.8 RequestControlServices_<TIDName> 
6.6.1.2.9 InfotypeServices_<VEHINFODATA> 
9.11 How to Support Calibrateable Configuration 
Parameters 
Modified: 
Table 3-2 Not supported AUTOSAR standard 
conform features 
– Removed not supported OBD. 
Table 8-3 Limitations to AUTOSAR 
– Removed not supported OBD. 
Mishel Shishmanyan 2013-08-20 
1.05.00 
Added: 
6.6.1.2.10 CallbackDCMRequestServices_<SWC> 
9.12 How and When to Configure Multiple Protocols 
8.1 Deviations 
– Added deviation to 
CallbackDCMRequestServices_<SWC> 
service port. 
Table 8-3 Limitations to AUTOSAR 
– Added maximum number of supported 
protocols. 
– Added maximum number of concurrent client 
diagnostic connections. 
Modified: 
5.14 ReadDataByIdentifier ($22) 
5.22 InputOutputControlByIdentifier ($2F) 
– Modified configuration and implementation 
aspects. 
Table 6-100 
 DtrServices_<MIDName>_<TIDName> 
Table 6-101 RequestControlServices_<TIDName> 
– Changed port names according to AR DCM 
SWS. 
Table 6-102 InfotypeServices_<VEHINFODATA> 
– Editorial change. 
Table 8-3 Limitations to AUTOSAR 
– Removed not supported multi-protocol. 
– Removed not supported multiple buffers.
Technical Reference MICROSAR DCM 
© 2017 Vector Informatik GmbH 
Version 8.6 
4 
based on template version 5.0.0 
Thomas Dedler, 
Mishel Shishmanyan 
2013-09-17 
2.00.00 
Modified: 
8.1 Deviations 
– Removed deviations for DID and RID 
signals. 
3.1 Features 
– Removed not supported multi-protocol. 
– Removed not supported multiple buffers. 
6.5.2.12 Start(), 6.5.2.13 Stop(), 6.5.2.14 
RequestResults() 
– Changed function signatures and 
descriptions 
5.22 InputOutputControlByIdentifier ($2F) 
– More details on how optional CEM is 
supported by DCM. 
6.5.2.10 ShortTermAdjustment() 
– Removed statement that CEM is included in 
the controlOptionRecord. 
Mishel Shishmanyan 2014-01-14 
2.01.00 
Added: 
9.13 How to Select DEM-DCM Interface Version 
9.14 How to Support OBD and UDS over a Single 
Client Connection 
9.15 How to Use a User Configuration File 
9.16 How to Know When the Security Access Level 
Changes 
Modified: 
3.4.1 Split Task Functions 
– Added configuration aspects. 
Table 4-3 Compiler abstraction and memory 
mapping 
– Added calibration parameter memory 
sections. 
5.11 EcuReset ($11) 
– Added clarification for request rejection while 
waiting for reset execution. 
5.13 ReadDiagnosticInformation ($19) 
– Added support of new sub-functions 0x17-
0x19. 
5.19 ReadDataByPeriodicIdentifier ($2A) 
– Added feature stop periodic reading on 
changed state. 
5.20 DynamicallyDefineDataIdentifier ($2C) 
– Added feature clear DDID on changed state.
Technical Reference MICROSAR DCM 
© 2017 Vector Informatik GmbH 
Version 8.6 
5 
based on template version 5.0.0 
Mishel Shishmanyan, 
Patrick Rieder 
2014-04-14 
2.02.00 
Added: 
9.17 How to Deal with the PduR AR version 
Modified: 
Figure 2-2 Interfaces to adjacent modules of the 
DCM 
– NvM added to figure 
3.4.1 Split Task Functions 
– Reworked chapter 
– Added support by configuration tool 
5.14.4 Configuration Aspects 
– Added information about NvRam signal 
configuration 
5.21.4 Configuration Aspects 
– Added information about NvRam signal 
configuration 
5.27.4 Configuration Aspects 
– Added information about default NvM block 
name 
6.3 Services used by DCM 
– Added NvM services used by the DCM 
6.4.3.2.1 Dcm_StartOfReception(), 6.4.3.2.3 
Dcm_TpRxIndication(), 6.4.3.2.5 
Dcm_TpTxConfirmation() 
– New version of the APIs for AR 4.1.2 PduR 
added 
8.3 Limitations 
– Shared signals between DIDs not supported 
Mishel Shishmanyan 2014-10-08 
3.00.00 
Added: 
5.16 ReadScalingDataByIdentifier ($24) 
6.5.2.11 GetScalingInformation() 
6.6.2 Managed Mode Declaration Groups 
9.18 Post-build Support 
10 Troubleshooting 
Modified: 
4.1.2 Dynamic Files 
– Added post-build data files 
– Added SWC template file 
Table 4-3 Compiler abstraction and memory 
mapping 
– Added post-build data memory mapping 
Figure 4-1 Include structure 
– Added post-build configuration and other 
BSW headers files 
5.11 EcuReset ($11) 
– Sub-functions are now allow

[Back to top](#_top)
