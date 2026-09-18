---
title: "NvM"
description: "Converted Vector Technical Reference: TechnicalReference_NvM.pdf."
---

> **Converted from** [`Doc/TechnicalReferences/TechnicalReference_NvM.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_NvM.pdf) (82 pages). Machine-converted with PyMuPDF: running text and structure are preserved as Markdown, but **layout, figures, tables and formulas may differ from the original PDF**. For normative content, always consult the original PDF.

| Property | Value |
|---|---|
| Source | [`TechnicalReference_NvM.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_NvM.pdf) |
| Pages | 82 |
| PDF title | MICROSAR NVM |
| Author | Manfred Duschinger |

## Document outline

- 1 Document Information
  - 1.1 History
  - 1.2 Reference Documents
- 2 Component History
- 3 Introduction
  - 3.1 Architecture Overview
- 4 Functional Description
  - 4.1 Features
    - 4.1.1 Safety Features
      - 4.1.1.1 Block Id check
    - 4.1.2 Automatic Block Length
  - 4.2 Initialization
    - 4.2.1 Start-up
    - 4.2.2 Initialization of the Data Blocks
  - 4.3 States
  - 4.4 Main Functions
    - 4.4.1 Hardware Independence
    - 4.4.2 Synchronous Requests
    - 4.4.3 Asynchronous Requests
    - 4.4.4 API Configuration Classes and additional API Services
    - 4.4.5 Block Handling
      - 4.4.5.1 NV Blocks and Block Handles
      - 4.4.5.2 Different Types of NV Blocks
      - 4.4.5.2.1 Native Blocks
      - 4.4.5.2.2 Redundant Blocks
      - 4.4.5.2.3 Dataset Blocks
      - 4.4.5.3 Permanent and non-permanent RAM Blocks
      - 4.4.5.4 ROM Defaults
      - 4.4.5.5 Checksum
    - 4.4.6 Prioritized or non-prioritized Queuing of asynchronous Requests
    - 4.4.7 Asynchronous Job-End Polling
    - 4.4.8 Single Block Job End Notifications
    - 4.4.9 Immediate Priority Jobs and Cancellation of current Jobs
    - 4.4.10 Asynchronous CRC Calculation
    - 4.4.11 Write Protection
    - 4.4.12 Erase and Invalidate
    - 4.4.13 Init Block Callbacks
    - 4.4.14 Define Locking/ Unlocking Services
    - 4.4.15 Interrupts
    - 4.4.16 Data Corruption

_101 further outline entries in the original._

## Excerpt (first pages)

MICROSAR NVM 
Technical Reference 
Version 5.07.00 
Authors 
Christian Kaiser, Tomas Ondrovic 
Status 
Released
Technical Reference MICROSAR NVM 
© 2017 Vector Informatik GmbH 
Version 5.07.00 
2 
based on template version 3.01 
1 
Document Information 
1.1 
History 
Author 
Date 
Version 
Remarks 
Christian Kaiser 
2007-08-20 
1.4 
AUTOSAR 2.1, 
updated for EAD3.1 usage, 
conversion to new template 
Christian Kaiser 
2007-12-06 
3.01.00 
Change of the document's versioning 
scheme to correspond to the module's 
major and minor, 
update of parameter description in 
chapter 'Graphical Configuration of NvM' 
and service port generation description, 
remove of DATASET ROM, feature not 
supported anymore, 
remove of introduction paragraphs from 
'Description of Memory Mapping and 
Compiler Abstraction', not subject of this 
document, 
simplified 'Block Management Types' 
naming, 
formal changes 
Christian Kaiser 
2008-01-11 
3.01.01 
New chapter to clarify the dependency on 
the CRC library, 
stated explicitly that DET is optional, 
corrected default values 
Manfred Duschinger, 
Heike Bischof 
2008-05-23 
3.02.00 
AUTOSAR 3, 
conversion to Technical Reference 
Manfred Duschinger 
2008-12-08 
3.03.00 
ESCAN00027300: Description of 
NvM_ServiceIdType in 
SingleBlockCallbackFunction and 
MultiBlockCallbackFunction 
Description and expected caller context 
of NvM_SetBlockLockStatus-API 
reworked. 
Chapter 4.4.17 ‘Concurrent access to NV 
data for DCM’ added. 
Chapter 4.4.5.2: Write order at redundant 
blocks added. 
Expansion of glossary. 
Chapter 7.2.2: Description of ‘Dataset 
Selection Bits’ added. 
Manfred Duschinger 
2009-02-25 
3.03.01 
ESCAN00031177: Manufacturer specific 
requirements attribute for traceability 
reasons 
Manfred Duschinger 
2009-03-24 
3.03.02 
ESCAN00032480: Missing information in
Technical Reference MICROSAR NVM 
© 2017 Vector Informatik GmbH 
Version 5.07.00 
3 
based on template version 3.01 
documentation: 
Chapter 6.4.5: ‘Description of 
NvM_RequestResultType added’. 
Chapters 6.4.15 and 6.4.16: ‘Services are 
multiblock requests’. 
Manfred Duschinger 
2009-06-03 
3.04.00 
ESCAN00032480: Update of History of 
version 3.03.02: Updated changed 
chapters. 
Chapter 6.2: ‘Block ID 0 is only allowed 
for API NvM_GetErrorStatus()’ 
ESCAN00033075: Chapter 4.5.1.1: 
DataIndex Check in NvM_ReadBlock() 
added. DataIndex Check was also added 
to NvM_InvalidateNvBlock() and 
NvM_EraseNvBlock(). 
ESCAN00033900: Chapter 4.4.17: 
“Priority Handling of DCM-Blocks” 
ESCAN00035089: Chapters 4.1, 7.2.2 
“Callbacks NvM_JobEndNotification, 
NvM_JobErrorNotification implemented” 
ESCAN00034073: Chapters 2, 4.4.5.1, 
7.2.2 “Crc Handling is configurable: Either 
an internal buffer is used or Crc is stored 
at the end of RAM Block.” 
ESCAN00035891: Chapter 7.1.1 
“Integrate SWC-Generation into CFG 
Pro's Generation process” 
Chapter 3.1: update AUTOSAR 
architecture figure. 
Christian Kaiser 
2010-01-25 
3.04.01 
ESCAN00039648 – Rebuilt document; 
made hyperlinks working. Updated Logo; 
No changes in content. 
Christian Kaiser 
2010-03-26 
3.05.00 
Updated Component history 
Whole document: “EAD”  “DaVinci 
Configurator” 
Added Ch. 7.3 “Attributes only 
configurable using GCE” 
Updated Ch. 5.6.1 – “RAM Usage” 
ESCAN00040662: Chapter 4.4.3: Added 
note about restricted access to RAM 
block during job execution. 
ESCAN00035134: Chapter 5.1.2 
reworked 
ESCAN00039749: Ch. 4.4.10, 8.2.4: 
Guaranteed CRC values; Ch 6.4.7: note 
about asynchronous CRC calculation 
ESCAN00031315: added Ch. 4.2.1, Ch 
8.2.3; updated Ch. 7.2.5 
ESCAN00042745 – corrected Ch. 4.5.2
Technical Reference MICROSAR NVM 
© 2017 Vector Informatik GmbH 
Version 5.07.00 
4 
based on template version 3.01 
Manfred Duschinger 
2011-01-25 
3.07.00 
ESCAN00047171: Ch. 6.4.18: 
NvM_KillWriteAll; Abbreviations: ECUM 
ESCAN00045141: Ch. 4.4.5.1: 
information about names of Block 
Handles 
Manuela Scheufele 
2011-02-03 
3.07.01 
Minor changes 
Manfred Duschinger 
2011-07-12 
3.08.00 
ESCAN00049327: Ch. 4.5.2 DEM errors 
inserted into MICROSAR DEM 
Christian Kaiser 
2012-01-24 
3.09.00 
ESCAN00053235, ESCAN00051729: Ch. 
7.1 – updated PortInterface names 
Manfred Duschinger 
2013-01-02 
5.00.00 
Ch. 4.1: supported features added 
Ch. 4.4.3 and ch. 4.4.4: added 
NvM_CancelJobs 
Ch. 4.3.5: error handling updated 
Ch. 4.4.20: added explicit synchronization 
mechanism 
Ch. 5.4.6: updated callback functions 
Ch. 5.5: updated initialization process of 
memory stack 
Ch. 6.4: updated return values of most 
synchronous APIs 
Ch. 6.4.6: instanceID deleted 
Ch. 6.4.16: updated NvM_WriteAll 
handling 
Ch. 6.4.19: description of API 
NvM_CancelJobs 
Ch. 6.7.4 and 6.7.5: Callback routines for 
explicit synchronization mechanism 
Ch. 7: completely reworked 
Ch. 9.2: added abbreviations 
Ch. 7.2.1 and ch. 7.3 removed 
Manfred Duschinger 
2013-01-04 
5.01.00 
Ch. 5.4.8 Interaction with BswM 
Manfred Duschinger, 
Christian Kaiser 
2013-08-23 
5.01.01 
ESCAN00064110: Ch. 4.4.8 Description 
of synchronous Job-End Notification 
ESCAN00062895: Ch. 4.4.5.1 Symbolic 
name values of Nv Block Handles 
updated. 
ESCAN00062896: Ch. 4.4.13. 4.4.20, 
5.4.8, 6.7.3, 6.7.4 and 6.7.5: Added 
information that block is still busy during 
invoking callback. 
ESCAN00063639: Ch. 4.4.20: Extended 
information about explicit synchronization 
mechanism 
ESCAN00064063: Ch. 6.2 Improve 
description of 
NvM_RequestResultType 
ESCAN00064173: Ch. 5.3: Explanation 
of some necessity of memory mapping
Technical Reference MICROSAR NVM 
© 2017 Vector Informatik GmbH 
Version 5.07.00 
5 
based on template version 3.01 
ESCAN00068239: Ch. 6.4, Ch. 4.4.20: 
Limitations Explicit Synchronization 
Mechanism 
ESCAN00063532 – Ch. 6.4.16 Block 
Processing order during NvM_WriteAll 
Christian Kaiser 
2014-06-17 
5.02.00 
Internal release; no changes 
Christian Kaiser 
2014-10-13 
5.02.01 
Updated Ch. 2. Component history. 
ESCAN00073178 – updated Ch. 4.1 
unsupported features, Ch. 8.1 Deviation

[Back to top](#_top)
