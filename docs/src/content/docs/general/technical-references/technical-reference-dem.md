---
title: "Dem"
description: "Converted Vector Technical Reference: TechnicalReference_Dem.pdf."
---

> **Converted from** [`Doc/TechnicalReferences/TechnicalReference_Dem.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_Dem.pdf) (206 pages). Machine-converted with PyMuPDF: running text and structure are preserved as Markdown, but **layout, figures, tables and formulas may differ from the original PDF**. For normative content, always consult the original PDF.

| Property | Value |
|---|---|
| Source | [`TechnicalReference_Dem.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_Dem.pdf) |
| Pages | 206 |
| PDF title | MICROSAR Diagnostic Event Manager (Dem) |
| Author | Thomas Dedler, Alexander Ditte, Matthias Heil, Anna Bosch, Erik Jeglorz, Stefan Hübner, Aswin Vijayamohanan Nair, Savas  |

## Document outline

- 1 Component History
- 2 Introduction
  - 2.1 How to Read this Document
    - 2.1.1 API Definitions
    - 2.1.2 Configuration References
  - 2.2 Architecture Overview
- 3 Functional Description
  - 3.1 Features
  - 3.2 Dem Module Architecture
    - 3.2.1 Dem Satellite(s)
    - 3.2.2 Dem Master
    - 3.2.3 Communication constraints
  - 3.3 Initialization
    - 3.3.1 Initialization States
  - 3.4 Diagnostic Event Processing
    - 3.4.1 Event De-bouncing
      - 3.4.1.1 Counter Based Algorithm
      - 3.4.1.2 Time Based Algorithm
      - 3.4.1.3 Monitor internal de-bouncing
    - 3.4.2 Event Reporting
    - 3.4.3 Monitor Status
    - 3.4.4 Event Status
      - 3.4.4.1 Event Storage modifying Status Bits
      - 3.4.4.2 Lightweight Multiple Trips (FailureCycleCounterThreshold)
  - 3.5 Event Displacement
  - 3.6 Event Aging
    - 3.6.1 Aging Target ‘0’
    - 3.6.2 Aging Counter Reallocation
    - 3.6.3 Aging of Environmental Data
    - 3.6.4 Aging of TestFailedSinceLastClear
    - 3.6.5 Aging and Healing
  - 3.7 Operation Cycles
    - 3.7.1 Persistent Storage of Operation Cycle State
    - 3.7.2 Automatic Operation Cycle Restart
  - 3.8 Enable Conditions and Control DTC Setting
    - 3.8.1 Effects on de-bouncing and FDC
  - 3.9 Storage Conditions
  - 3.10 DTC Suppression
    - 3.10.1 Event Availability
    - 3.10.2 Suppress DTC

_240 further outline entries in the original._

## Excerpt (first pages)

MICROSAR Diagnostic Event Manager 
(Dem) 
Technical Reference 
Version 7.6.1 
Authors 
Thomas Dedler, Alexander Ditte, Matthias Heil, Anna Bosch, Erik Jeglorz, 
Stefan Hübner, Aswin Vijayamohanan Nair, Savas Ates 
Status 
Released
Technical Reference MICROSAR Diagnostic Event Manager (Dem) 
© 2017 Vector Informatik GmbH 
Version 7.6.1 
2 
based on template version 5.0.0 
Document Information 
History 
Author 
Date 
Version Remarks 
A. Ditte 
2012-05-04 
1.0.0 
> Initial Version 
A. Ditte 
2012-10-09 
1.0.1 
> Add chapter 6.2.6.20 and 6.6.1.2.11 
> Add GetEventEnableCondition to chapter 6.6.1.1.2 
M. Heil 
2012-11-02 
1.1.0 
> Architecture Update 
A. Ditte, 
M. Heil 
2013-02-15 
1.2.0 
> Introduced Measurement and Calibration (chapter 5) 
> Extended chapters 3.4, 3.6, 3.16, 4.3 and 4.3.1 
> Added User Controlled WarningIndicatorRequest 
(chapter 3.17.1) 
> Added chapters 6.2.6.24, 6.2.6.25, 6.6.1.1.9 
M. Heil 
2013-04-05 
1.3.0 
> Support for feature ‘DTC suppression’ 
> Added chapter 3.10, APIs 6.2.6.26 
> Reworked table layout in chapters 4.3, 5.2 
> Reworked Measurement and Calibration (chapter 5) 
> Added measurable items (chapter 5.1) 
M. Heil 
2013-06-17 
1.4.0 
> Added combined events 
> Reworked suppression 
T. Dedler 
2013-07-22 
1.4.1 
> critical section description extended 
T. Dedler, 
M. Heil 
2013-09-04 
2.0.0 
> Service ID definition changed 
> Post-Build Loadable 
A. Ditte 
2013-11-05 
2.1.0 
> Added OBD DTC and Root cause EventId to chapter 
3.11.2 
> Added limitation for internal data elements in chapter 
8.3 
A. Ditte, 
M. Heil 
2014-01-14 
3.0.0 
> Added J1939 (chapters 3.20, 6.2.9) 
> Adapted DCM interfaces (chapter 6.2.8) according 
AUTOSAR 4.1.2 
> Added chapter 4.3.1 
> Fixed ESCAN00071673: NvM configuration is not 
described 
> Fixed ESCAN00071511: Missing hint for supported 
feature 'individual post-build loadable' 
> Fixed ESCAN00073677: Incorrect figure for DEM 
initialization states
Technical Reference MICROSAR Diagnostic Event Manager (Dem) 
© 2017 Vector Informatik GmbH 
Version 7.6.1 
3 
based on template version 5.0.0 
M. Heil 
2014-03-27 
3.1.0 
> Describe deviation in handling operation cycles before 
module initialization. 
> Add dependency to configuration to Dcm APIs. 
> Added warning about time-based de-bouncing and 
maximum fault detection counter in current cycle 
M. Heil 
2014-05-08 
3.2.0 
> Added Event Availability (chapters 3.10.1, 6.2.6.27) 
> Added freeze frame pre-storage (chapters 3.12, 6.2.6.4, 
6.2.6.5) 
> Corrected description of Event and DTC suppression 
(chapters 3.10, 6.2.6.4, 6.2.6.5) 
> Introduced chapter 3.4.4.2 
> Clarified usage of DTC groups (chapter 8.3) 
M. Heil 
A. Ditte 
2014-10-14 
4.0.0 
> Moved Initialization Pointer (see Dem_PreInit(), 
Dem_Init()) 
> Added API Dem_RequestNvSynchronization() 
> Added de-bounce values in NVRAM and API 
Dem_NvM_InitDebounceData() 
> Added additional aging variant (chapter 3.6), added 
Figure 3-4 
> Added missing configuration variants (chapter 2, 
ESCAN00076237) 
> Added description for NVRAM write frequency (chapter 
3.14.2, ESCAN00078587) 
> Added description for NVRAM recovery (chapter 3.14.3, 
ESCAN00078582) 
> Added support of J1939 nodes 
M. Heil 
2015-02-27 
4.1.0 
> Added APIs, chapters 6.2.6.3, 6.2.6.22 
> Support EnableCondition notification, 3.16.5 
> Added explanation of Dem task mapping, chapter 4.9 
> Added note of reduced queue depth for some events, 
chapter no longer available 
> Updated critical sections, chapter 4.4 
M. Heil 
2015-04-20 
4.1.1 
> Added deviation regarding notification signatures 
(chapters 6.5.1, 8.1) 
> Reworked chapter 3.1 according ESCAN00082555 
M. Heil 
2015-06-17 
4.2.0 
> Extended data callback support (chapters 3.11.3, 
6.5.1.6) 
> Described FDC statistics for DTCs using internal de-
bouncing (chapter 3.11.2) 
> Described aging target 0 (chapter 3.6.1) 
> Described effect of asynchronous behavior of $85 
(chapter 3.8) 
> Described different aging behavior (chapter 3.6.5)
Technical Reference MICROSAR Diagnostic Event Manager (Dem) 
© 2017 Vector Informatik GmbH 
Version 7.6.1 
4 
based on template version 5.0.0 
M. Heil 
2015-09-14 
4.3.0 
> More information about NVRam setup (chapter 4.5 ff) 
> Changes due to new option to persist event availability 
(chapters 3.10.1, 6.2.6.27, 6.2.6.13) 
M. Heil 
2015-11-26 
5.0.0 
> Reworked aging behavior, added new behavior (Table 
3-5, Figure 3-4) 
> Clarifications on feature support 
> Fixed ESCAN00086243 (chapter 4.5.1) 
> Fixed ESCAN00086483 (chapter 4.5.2.2) 
M. Heil 
2016-01-20 
5.0.1 
> No changes 
M. Heil 
2016-02-03 
6.0.0 
> Change Dcm notification handling (chapters 3.16.3, 
chapter no longer available) 
> Fixed ESCAN00087584 (chapter 4.5.2) 
> Fixed ESCAN00088862 (chapter 5) 
> Reworked NV write frequency Table 3-8 
> Changed APIs according to RfC72121(chapters 6.2.9.1, 
6.2.9.8) 
> Reworked Autosar deviation Table 3-2 
> Added new header files to Table 4-1 
A. Ditte 
2016-04-19 
6.0.1 
> Added internal data element DEM_OBD_RATIO in 
chapter 3.11.2 
M. Heil 
2016-04-22 
> Fixed ESCAN00089671 (chapter 4.5) 
M. Heil 
- 
6.1.0 
> Version skipped 
A. Bosch 
2016-05-04 
6.2.0 
> Extended number of supported enable and storage 
conditions (chapter 3.8, 3.9) 
> Added API Dem_GetDebouncingOfEvent() 
> Extended EventStatus values for API 
Dem_SetEventStatus() 
> Fixed ESCAN00089498 (Table 3-7 DTC status 
combination) 
M. Heil 
2016-07-12 
> Explicitly mention that NVRAM needs to be initialized 
after a SW update (chapter 4.5.2.3) 
> Added clarification for combined events to 
DEM_OBD_RATIO in chapter 3.11.2 
A. Bosch 
2016-10-25 
6.3.0 
> Support for S/R callbacks
Technical Reference MICROSAR Diagnostic Event Manager (Dem) 
© 2017 Vector Informatik GmbH 
Version 7.6.1 
5 
based on template version 5.0.0 
M. Heil 
2016-11-15 
7.0.0 
> MultiCore/MultiPartition support 
> API change to ASR4.3 (chapters 3.4.1 including all 
subchapters, 3.4.2, 3.4.3, 3.4.4, 3.13.2, 3.15, 3.16, 
3.19.1, 3.21, 4.6.3, 6.2.6.1, 6.

[Back to top](#_top)
