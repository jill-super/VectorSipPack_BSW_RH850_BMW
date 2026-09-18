---
title: "Os"
description: "Converted Vector Technical Reference: TechnicalReference_Os.pdf."
---

> **Converted from** [`Doc/TechnicalReferences/TechnicalReference_Os.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_Os.pdf) (304 pages). Machine-converted with PyMuPDF: running text and structure are preserved as Markdown, but **layout, figures, tables and formulas may differ from the original PDF**. For normative content, always consult the original PDF.

| Property | Value |
|---|---|
| Source | [`TechnicalReference_Os.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_Os.pdf) |
| Pages | 304 |
| PDF title | MICROSAR OS |
| Author | Anton Schmukel, Ivan Begert, Stefano Simoncelli, Torsten Schmidt, Da He, David Feuerstein, Michael Kock, Martin Schulthe |

## Document outline

- 1 Introduction
  - 1.1 Architecture Overview
  - 1.2 Abstract
  - 1.3 Characteristics
  - 1.4 Hardware Overview
    - 1.4.1 TriCore Aurix
    - 1.4.2 Power PC
    - 1.4.3 ARM
    - 1.4.4 RH850
    - 1.4.5 VTT OS
      - 1.4.5.1 Characteristics of VTT OS
    - 1.4.6 POSIX OS
      - 1.4.6.1 Characteristic of POSIX OS
- 2 Functional Description
  - 2.1 General
  - 2.2 MICROSAR OS Deviations from AUTOSAR OS Specification
    - 2.2.1 Generic Deviation for API Functions
    - 2.2.2 Trusted Function API Deviations
    - 2.2.3 Service Protection Deviation
    - 2.2.4 Code Protection
    - 2.2.5 SyncScheduleTable API Deviation
    - 2.2.6 CheckTask/ISRMemoryAccess API Deviation
    - 2.2.7 Interrupt API Deviation
    - 2.2.8 Cross Core Getter APIs
    - 2.2.9 IOC
    - 2.2.10 Return value upon stack violation
    - 2.2.11 Handling of OS internal errors
    - 2.2.12 Forcible Termination of Applications
    - 2.2.13 OS Configuration
  - 2.3 Stack Concept
    - 2.3.1 Task Stack Sharing
      - 2.3.1.1 Description
      - 2.3.1.2 Activation
      - 2.3.1.3 Usage
    - 2.3.2 ISR Stack Sharing
      - 2.3.2.1 Description
      - 2.3.2.2 Activation
      - 2.3.2.3 Usage
    - 2.3.3 Stack Check Strategy
    - 2.3.4 Software Stack Check

_468 further outline entries in the original._

## Excerpt (first pages)

MICROSAR OS 
Technical Reference 
Version 2.12.0 
Authors 
Anton Schmukel, Ivan Begert, Stefano Simoncelli, 
Torsten Schmidt, Da He, David Feuerstein, Michael 
Kock, Martin Schultheiß, Andreas Jehl, Fabian Wild, 
Senol Cendere, Benjamin Seifert 
Status 
Released
Technical Reference MICROSAR OS 
© 2017 Vector Informatik GmbH 
Version 2.12.0 
2 
based on template version 6.0.1 
Document Information 
History 
Author 
Date 
Version Remarks 
Torsten Schmidt 
2016-04-27 
1.0.0 
First release version 
Torsten Schmidt 
2016-05-18 
1.0.1 
References to hardware manuals added. 
Revision work 
Torsten Schmidt 
2016-06-03 
1.0.2 
Fix of ESCAN00089598 
Torsten Schmidt 
2016-06-20 
1.1.0 
List of OS internal objects added. 
Additional startup concept chapter added. 
Chapter “Memory mapping concept” reworked. 
Description of “generate callout stubs” feature 
added. 
Torsten Schmidt 
2016-07-05 
1.1.1 
Chapter “Memory Mapping Concept” extended. 
IOC notification callback concept changed. 
HSI of RH850 family added. 
HSI of Power PC family added. 
Torsten Schmidt 
2016-07-19 
1.1.2 
Chapter “Memory Mapping Concept” changed. 
Hints for shorter compile times added. 
Nesting behavior of OS hooks described. 
Ivan Begert 
2016-08-11 
1.1.3 
HSI of ARM family added. 
Torsten Schmidt 
2016-08-12 
1.1.4 
Chapter “Memory Mapping Concept” extended. 
Chapter “Clear Pending Interrupt” extended. 
Chapter “RH850 Special Characteristics” extended. 
Ivan Begert 
2016-08-18 
1.1.5 
HSI of ARM Zynq UltraScale added. 
Torsten Schmidt 
2016-08-30 
1.1.6 
HSI of RH850 extended. 
Torsten Schmidt 
2016-08-31 
1.1.7 
ORTI Debugging added. 
Timing Hook Macros reworked. 
Chapter “Memory Mapping Concept” changed. 
Chapter “Category 1 Interrupts” extended. 
Stefano Simoncelli 
Torsten Schmidt 
2016-09-15 
1.1.8 
Chapter “Interrupt Source API” extended. 
HSI chapter for ARM extended 
Torsten Schmidt 
2016-09-22 
1.2.0 
VTT OS and Dual Target Concept added. 
Chapter ORTI Debugging extended. 
Anton Schmukel 
Da He 
2016-10-14 
1.3.0 
Ristrictions concerning API usage before StartOS() 
documented. 
Clarification concerning forcible termination and 
schedule tables added. 
Deviations in IOC added. 
Notes on mixed criticality systems added. 
Chapter “RH850 Special Characteristics” extended. 
Torsten Schmidt 
2016-10-19 
1.3.1 
Chapter “Configuration of X-Signals” added. 
Chapter “Power PC Special Characteristics”
Technical Reference MICROSAR OS 
© 2017 Vector Informatik GmbH 
Version 2.12.0 
3 
based on template version 6.0.1 
extended. 
Correction of startup examples. 
Chapter “User include files” added. 
RH850 HSI extended. 
PPC HSI extended. 
Hardware Overview extended by RH850. 
David Feuerstein 
2016-11-03 
1.4.0 
PPC HSI extended. 
Chapter ORTI Debugging extended. 
Michael Kock 
2016-11-25 
1.5.0 
Updated chapter Timing Hooks 
Martin Schultheiß 
2016-12-08 
1.6.0 
PPC HSI extended. 
Updated characteristics of VTT OS. 
David Feuerstein 
Andreas Jehl 
Ivan Begert 
Stefano Simoncelli 
2016-12-22 
1.7.0 
Updated precautions in PreStartTask. 
Support new Power PC Derivative: PC580003 
Support IAR compiler for ARM 
ARM Cortex-A HSI added 
David Feuerstein 
Torsten Schmidt 
2017-01-23 
1.8.0 
Chapter “Memory Mapping Concept” changed. 
Chapter “Resulting sections” extended. 
Chapter “X-Signals” extended. 
Chapter “API Description” extended. 
Torsten Schmidt 
Stefano Simoncelli 
David Feuerstein 
2017-02-06 
2.0.0 
Chapter “Memory Mapping Concept” corrected. 
Chapter “MICROSAR OS Deviations from 
AUTOSAR OS Specification” extended. 
Chapter “IOC” extended. 
Feature “Fast Trusted Functions” added. 
Chapter “Non-Trusted Functions (NTF)” changed. 
ARM Cortex-M Hardware overview updated. 
Feature “Barriers” added. 
Martin Schultheiß 
Benjamin Seifert 
Da He 
Torsten Schmidt 
Stefano Simoncelli 
Anton Schmukel 
2017-03-22 
2.1.0 
Updated Hardware Overview for Power PC 
derivative groups (RM revisions). 
Chapter “MICROSAR OS Deviations from 
AUTOSAR OS Specification” corrected. 
Added API 
OSError_GetScheduleTableStatus_ScheduleStatus 
Chapter “ARM Special characteristic” extended. 
Chapter “Cortex-R derivatives” extended. 
Chapter “Idle Task” extended. 
TI Compiler added as supported compiler for ARM. 
Platform POSIX added 
Added HSI for ARM Cortext-M 
Fabian Wild 
Stefano Simoncelli 
2017-03-31 
2.2.0 
Added AUTOSAR specification deviations. 
Changed address parameter type in periperal API 
functions. 
Da He 
Martin Schultheiß 
2017-04-11 
2.3.0 
Added HSI for TI AR16xx 
Added information for Hardware Init Core 
Senol Cendere 
Torsten Schmidt 
2017-05-10 
2.4.0 
Added HSI for R-Car H3.
Technical Reference MICROSAR OS 
© 2017 Vector Informatik GmbH 
Version 2.12.0 
4 
based on template version 6.0.1 
Martin Schultheiß 
Da He 
Extended chapter “Memory Mapping Concept”. 
Added chapter “Linking of Spinlocks”. 
Updated HSI for S32K derivatives. 
Added chapter for exception context manipulation 
Fabian Wild 
Martin Schultheiß 
2017-06-19 
2.5.0 
Removed ORTI tracing from Os_Init and 
Os_InitMemory 
Support new Power PC Derivative: SPC574Sxx 
Torsten Schmidt 
2017-06-06 
2.6.0 
Added descriptions for category 0 ISRs. 
Ivan Begert 
Senol Cendere 
2017-07-05 
2.6.1 
Chapter “ARM Special characteristic” extended. 
RH850 HSI extended. 
Updated Table 1-9 Supported RH850 Compilers. 
Updated Chapter 4.5.2 RH850 
Torsten Schmidt 
2017-07-17 
2.7.0 
Chapter “Software Stack Check” extended. 
Chapter “VTT OS Specifics” extended. 
Chapter “Initialization of Interrupt Sources” 
extended. 
Chapter “Notes on Category 1 ISRs” extended. 
Chapter “Notes on Category 0 ISRs” extended. 
Chapter “Pre-Process Linker Command Files” 
added. 
API description of “Os_Init” extended. 
Senol Cendere 
Da He 
Andreas Jehl 
2017-08-15 
2.8.0 
Documented support for more RH850 derivatives 
and compiler versions. 
Updated documentations regarding location of OS 
identifiers. 
Support ARM CC (5.x) compiler for ARM Cortex-M 
Documented support of TC39x derivative with 
Tasking v6.0r1p2 co

[Back to top](#_top)
