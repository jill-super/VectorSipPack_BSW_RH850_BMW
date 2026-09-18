---
title: "UserManual E2EPW"
description: "Converted user manual: UserManual_E2EPW.pdf."
---

> **Converted from** [`Doc/UserManuals/UserManual_E2EPW.pdf`](../../../../../../Doc/UserManuals/UserManual_E2EPW.pdf) (68 pages). Machine-converted with PyMuPDF: running text and structure are preserved as Markdown, but **layout, figures, tables and formulas may differ from the original PDF**. For normative content, always consult the original PDF.

| Property | Value |
|---|---|
| Source | [`UserManual_E2EPW.pdf`](../../../../../../Doc/UserManuals/UserManual_E2EPW.pdf) |
| Pages | 68 |
| PDF title | End-to-End Protection Wrapper Generator |

## Document outline

- 1 Introduction
  - 1.1 E2E Protection Wrapper Generator
  - 1.2 Tools Integration
  - 1.3 Use Cases
- 2 Versions
- 3 Installation
- 4 Preprocessor
  - 4.1 Preprocessor Help
    - 4.1.1 Using the Preprocessor
    - 4.1.2 Behavior and Log Output
    - 4.1.3 Log Message Format
    - 4.1.4 Warning and Info Log Messages
- 5 E2E Protection Wrapper Generator
  - 5.1 Using the Generator
  - 5.2 E2EConfig file
    - 5.2.1 Syntax
    - 5.2.2 Description of Elements
    - 5.2.3 File Content Checks
- 6 Generated Code
  - 6.1 API
    - 6.1.1 Initialization
    - 6.1.2 Status
    - 6.1.3 Transmission and Reception
    - 6.1.4 Usage Example Code
      - 6.1.4.1 Application Sample Code
    - 6.1.5 Differences to SW-C End-to-End Communication Protection Library
- 7 File Structure
- 8 Functional Specification
  - 8.1 Return values
  - 8.2 Function E2EPW_Write_<p>_<o> ()
  - 8.3 Function E2EPW_Read_<p>_<o> ()
- 9 Environment Specifics
  - 9.1 Vector DaVinci Developer/RTE Configurator for AUTOSAR 3.2
    - 9.1.1 Configuration Restrictions
    - 9.1.2 Preprocessor Restrictions
    - 9.1.3 E2EPW and RTE in a Safety-Related System
  - 9.2 Other Issues
- 10 Integration Notes
  - 10.1 Checking the Tool Input
  - 10.2 Checking the Generated Files

_11 further outline entries in the original._

## Excerpt (first pages)

Schoenbrunner Str. 7, A-1040 Vienna, Austria, Tel. + 43 1 585 34 34-0, Fax +43 1 585 34 34-90, support@tttech-automotiv e.com
The data in this document may not be altered or amended without special notif ication f rom TTTech Automotiv e GmbH. TTTech Automotiv e GmbH
undertakes no f urther obligation in relation to this document. The sof tware described in it can only be used if the customer is in possession of a general
license agreement or single license.
Using and copy ing is only allowed in concurrence with the specif ications stipulated in the contract. Under no circumstances may any part of this
document be copied, reproduced, transmitted, stored in a retriev al sy stem, or translated into another language without written permission of TTTech
Automotiv e GmbH.
The names and designations used in this document are trademarks or brands belonging to the respectiv e owners.
© 2015 TTTech Automotiv e GmbH. All rights reserv ed. Subject to changes and corrections.
TTTech Automotiv e GmbH Conf idential and Proprietary Inf ormation
TTTech Automotive GmbH
2.0.1
13.03.2015
D-MSP-G-70-001
Version:
Date:
Document number:
End-to-End Protection Wrapper Generator
User Manual
End-to-End Protection Wrapper Generator
© 2015 TTTech Automotive GmbH
Document number: D-MSP-G-70-001
Page
2
TTTech Automotive Confidential and Proprietary
End-to-End Protection Wrapper Generator 2.0.1
Table of Contents
1 Introduction
4
................................................................................................................................... 4
1.1 E2E Protection Wrapper Generator
................................................................................................................................... 5
1.2 Tools Integration
................................................................................................................................... 5
1.3 Use Cases
2 Versions
7
3 Installation
7
4 Preprocessor
8
................................................................................................................................... 8
4.1 Preprocessor Help
.......................................................................................................................................................... 8
4.1.1 Using the Preprocessor 
.......................................................................................................................................................... 11
4.1.2 Behavior and Log Output 
.......................................................................................................................................................... 11
4.1.3 Log Message Format 
.......................................................................................................................................................... 12
4.1.4 Warning and Info Log Messages 
5 E2E Protection Wrapper Generator
14
................................................................................................................................... 14
5.1 Using the Generator
................................................................................................................................... 15
5.2 E2EConfig file
.......................................................................................................................................................... 15
5.2.1 Syntax 
.......................................................................................................................................................... 18
5.2.2 Description of Elements 
.......................................................................................................................................................... 24
5.2.3 File Content Checks 
6 Generated Code
26
................................................................................................................................... 26
6.1 API
.......................................................................................................................................................... 26
6.1.1 Initialization 
.......................................................................................................................................................... 27
6.1.2 Status 
.......................................................................................................................................................... 27
6.1.3 Transmission and Reception 
.......................................................................................................................................................... 29
6.1.4 Usage Example Code 
......................................................................................................................................................... 29
Application Sample Code
.......................................................................................................................................................... 32
6.1.5 Differences to SW-C End-to-End Communication Protection Library 
7 File Structure
44
8 Functional Specification
45
................................................................................................................................... 45
8.1 Return values
................................................................................................................................... 45
8.2 Function E2EPW_Write_<p>_<o> ()
................................................................................................................................... 47
8.3 Function E2EPW_Read_<p>_<o> ()
9 Environment Specifics
51
................................................................................................................................... 51
9.1 Vector DaVinci Developer/RTE Configurator for AUTOSAR 3.2
.......................................................................................................................................................... 51
9.1.1 Configuration Rest

[Back to top](#_top)
