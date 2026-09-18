---
title: "WdgM"
description: "Converted Vector Technical Reference: TechnicalReference_WdgM.pdf."
---

> **Converted from** [`Doc/TechnicalReferences/TechnicalReference_WdgM.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_WdgM.pdf) (98 pages). Machine-converted with PyMuPDF: running text and structure are preserved as Markdown, but **layout, figures, tables and formulas may differ from the original PDF**. For normative content, always consult the original PDF.

| Property | Value |
|---|---|
| Source | [`TechnicalReference_WdgM.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_WdgM.pdf) |
| Pages | 98 |
| PDF title | MICROSAR WDGM |
| Author | Christian Leder, Daniel Richter |

## Document outline

- 1 Component History
- 2 Introduction
  - 2.1 Architecture Overview
  - 2.2 Use Cases
  - 2.3 Basic Functionality of the WdgM
    - 2.3.1 Supervised Entity and Program Flow Supervision
    - 2.3.2 Program Flow Supervision
    - 2.3.3 Deadline Supervision
    - 2.3.4 Alive Supervision
    - 2.3.5 More Details on Checkpoints and Transitions
    - 2.3.6 Global Transitions
    - 2.3.7 Global Transitions and Program Flow
      - 2.3.7.1 Example of an Incorrect Global Transition Split
      - 2.3.7.2 Example of an Incorrect Program Split in the Middle of an Entity
    - 2.3.8 WdgM Supervision Cycle
    - 2.3.9 Fault Detection Time Evaluation
      - 2.3.9.1 Alive Supervision Fault Detection Time
      - 2.3.9.2 Deadline Supervision Fault Detection Time
      - 2.3.9.3 Program Flow Supervision Fault Detection Time
    - 2.3.10 Fault Reaction Time Evaluation
      - 2.3.10.1 Alive Supervision Fault Reaction Time
      - 2.3.10.2 Deadline Supervision Fault Reaction Time
      - 2.3.10.3 Program Flow Supervision Fault Reaction Time
    - 2.3.11 Reset Path and Safe State
    - 2.3.12 WdgM Local Entity State
    - 2.3.13 WdgM Global State
    - 2.3.14 Basic Operation of the WdgM Stack
  - 2.4 WdgM in Multi-Core Systems
    - 2.4.1 State Combiner
    - 2.4.2 AUTOSAR Debugging
- 3 Functional Description
  - 3.1 Features
    - 3.1.1 Deviations from the AUTOSAR 4.0.1 Watchdog Manager
      - 3.1.1.1 Entities, Checkpoints and Transitions
      - 3.1.1.2 Watchdog and Reset
      - 3.1.1.3 API
    - 3.1.2 Additions/ Extensions
  - 3.2 Initialization
  - 3.3 Memory Sections
    - 3.3.1 Memory Sections Details

_64 further outline entries in the original._

## Excerpt (first pages)

MICROSAR WDGM 
Technical Reference 
Version 1.2.1 
Authors 
Christian Leder, Daniel Richter 
Status 
Released
Technical Reference MICROSAR WDGM 
© 2017 Vector Informatik GmbH 
Version 1.2.1 
2 
based on template version 5.12.0 
Document Information 
History 
Author 
Date 
Version 
Remarks 
Daniel Richter, 
Christian Leder 
2016-02-12 
1.0.0 
First version of the migrated WdgM Technical 
Reference 
Christian Leder 
2016-07-13 
1.1.0 
Update after introduction of native CFG5 generator 
Christian Leder 
2017-03-01 
1.2.0 
Mode Port functionality added 
Timebase source OsCounter added 
Christian Leder 
2017-07-25 
1.2.1 
Hint about initialization within a safety-related 
system added in 3.2 Initialization 
Reference Documents 
No. 
Source 
Title 
Version 
[1] 
AUTOSAR 
AUTOSAR_SWS_WatchdogManager.pdf 
V2.0.0 
[2] 
AUTOSAR 
AUTOSAR_SWS_WatchdogInterface.pdf 
V2.3.0 
[3] 
AUTOSAR 
AUTOSAR_SWS_WatchdogDriver.pdf 
V2.3.0 
[4] 
Vector 
Informatik 
TechnicalReference_WdgIf.pdf 
V1.0.0 
[5] 
Vector 
Informatik 
Safety Manual 
[6] 
ISO 
Road vehicles – Functional safety 
ISO 
26262-
1:2011(E) 
[7] 
AUTOSAR 
AUTOSAR_TR_BSWModuleList.pdf 
V1.4.0 
Caution 
We have configured the programs in accordance with your specifications in the 
questionnaire. Whereas the programs do support other configurations than the one 
specified in your questionnaire, Vector´s release of the programs delivered to your 
company is expressly restricted to the configuration you have specified in the 
questionnaire.
Technical Reference MICROSAR WDGM 
© 2017 Vector Informatik GmbH 
Version 1.2.1 
3 
based on template version 5.12.0 
Contents 
1 
Component History ...................................................................................................... 8 
2 
Introduction................................................................................................................... 9 
2.1 
Architecture Overview ...................................................................................... 10 
2.2 
Use Cases ....................................................................................................... 13 
2.3 
Basic Functionality of the WdgM ...................................................................... 14 
2.3.1 
Supervised Entity and Program Flow Supervision ............................ 14 
2.3.2 
Program Flow Supervision ............................................................... 15 
2.3.3 
Deadline Supervision ....................................................................... 16 
2.3.4 
Alive Supervision ............................................................................. 20 
2.3.5 
More Details on Checkpoints and Transitions................................... 23 
2.3.6 
Global Transitions ............................................................................ 24 
2.3.7 
Global Transitions and Program Flow .............................................. 26 
2.3.7.1 
Example of an Incorrect Global Transition Split .............. 26 
2.3.7.2 
Example of an Incorrect Program Split in the Middle of 
an Entity ......................................................................... 26 
2.3.8 
WdgM Supervision Cycle ................................................................. 27 
2.3.9 
Fault Detection Time Evaluation ....................................................... 29 
2.3.9.1 
Alive Supervision Fault Detection Time .......................... 30 
2.3.9.2 
Deadline Supervision Fault Detection Time .................... 31 
2.3.9.3 
Program Flow Supervision Fault Detection Time ............ 32 
2.3.10 
Fault Reaction Time Evaluation ........................................................ 34 
2.3.10.1 
Alive Supervision Fault Reaction Time ........................... 34 
2.3.10.2 
Deadline Supervision Fault Reaction Time ..................... 35 
2.3.10.3 
Program Flow Supervision Fault Reaction Time ............. 35 
2.3.11 
Reset Path and Safe State ............................................................... 36 
2.3.12 
WdgM Local Entity State .................................................................. 37 
2.3.13 
WdgM Global State .......................................................................... 39 
2.3.14 
Basic Operation of the WdgM Stack ................................................. 39 
2.4 
WdgM in Multi-Core Systems ........................................................................... 41 
2.4.1 
State Combiner ................................................................................ 44 
2.4.2 
AUTOSAR Debugging ..................................................................... 45 
3 
Functional Description ............................................................................................... 47 
3.1 
Features .......................................................................................................... 47 
3.1.1 
Deviations from the AUTOSAR 4.0.1 Watchdog Manager ................ 48 
3.1.1.1 
Entities, Checkpoints and Transitions ............................ 48 
3.1.1.2 
Watchdog and Reset ..................................................... 50 
3.1.1.3 
API ................................................................................. 50
Technical Reference MICROSAR WDGM 
© 2017 Vector Informatik GmbH 
Version 1.2.1 
4 
based on template version 5.12.0 
3.1.2 
Additions/ Extensions ....................................................................... 50 
3.2 
Initialization ...................................................................................................... 51 
3.3 
Memory Sections ............................................................................................. 54 
3.3.1 
Memory Sections Details ................................................................. 55 
3.3.2 
Code and Constants ........................................................................ 56 
3.3.3 
Module Variables .....................................................................

[Back to top](#_top)
