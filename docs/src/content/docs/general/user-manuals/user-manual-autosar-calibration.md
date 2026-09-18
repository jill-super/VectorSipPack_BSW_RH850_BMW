---
title: "UserManual AUTOSAR Calibration"
description: "Converted user manual: UserManual_AUTOSAR_Calibration.pdf."
---

> **Converted from** [`Doc/UserManuals/UserManual_AUTOSAR_Calibration.pdf`](../../../../../../Doc/UserManuals/UserManual_AUTOSAR_Calibration.pdf) (79 pages). Machine-converted with PyMuPDF: running text and structure are preserved as Markdown, but **layout, figures, tables and formulas may differ from the original PDF**. For normative content, always consult the original PDF.

| Property | Value |
|---|---|
| Source | [`UserManual_AUTOSAR_Calibration.pdf`](../../../../../../Doc/UserManuals/UserManual_AUTOSAR_Calibration.pdf) |
| Pages | 79 |
| PDF title | User Manual AUTOSAR Calibration |
| Author | Vector Informatik GmbH |

## Document outline

- 1 Introduction
  - 1.1 Purpose of the AUTOSAR Calibration User Manual
  - 1.2 About This User Manual
    - 1.2.1 Certification
    - 1.2.2 Warranty
    - 1.2.3 Support
    - 1.2.4 Trademarks
- 2 Introduction to AUTOSAR
  - 2.1 Background
  - 2.2 Approach
  - 2.3 Basic Concept
  - 2.4 Architecture
- 3 Measuring and Calibrating of ECU Software
  - 3.1 Basics
  - 3.2 XCP Driver
    - 3.2.1 Measurement Modes
    - 3.2.2 Autoselection and Software Version Check of the A2L File
    - 3.2.3 Online Calibration
    - 3.2.4 Page Switching
    - 3.2.5 Bypassing
    - 3.2.6 Resume Mode
  - 3.3 A2L File
    - 3.3.1 Structure
      - 3.3.1.1 AML
      - 3.3.1.2 General ECU Implementation
      - 3.3.1.3 IF_DATA
      - 3.3.1.4 A2L Objects
    - 3.3.2 Mode of Functioning
- 4 OEM
  - 4.1 Objective
  - 4.2 Content of the Performance Specifications
  - 4.3 Measurement Task
  - 4.4 Calibration Task
  - 4.5 XCP Features
- 5 Supplier
  - 5.1 Preface
  - 5.2 Requirements
  - 5.3 Definition of Measurement and Calibration Parameters
    - 5.3.1 Measuring and Calibrating of AUTOSAR Software Components
    - 5.3.2 Measuring of Ports and Variables

_48 further outline entries in the original._

## Excerpt (first pages)

User Manual 
AUTOSAR Calibration 
Measuring and Calibrating of AUTOSAR 
Applications with XCP and CANape 
Version 1.0 
English
Imprint 
Vector Informatik GmbH 
Ingersheimer Straße 24 
D-70499 Stuttgart 
Vector reserves the right to modify any information and/or data in this user documentation without notice. This documentation nor any of 
its parts may be reproduced in any form or by any means without the prior written consent of Vector. To the maximum extent permitted 
under law, all technical data, texts, graphics, images and their design are protected by copyright law, various international treaties and 
other applicable law. Any unauthorized use may violate copyright and other applicable laws or regulations. 
 Copyright 2013, Vector Informatik GmbH. Printed in Germany. 
All rights reserved.
User Manual AUTOSAR Calibration 
Contents 
© Vector Informatik GmbH 
Version 1.0 
- I - 
Contents 
1 
Introduction 
3 
1.1 
Purpose of the AUTOSAR Calibration User Manual 
4 
1.2 
About This User Manual 
5 
1.2.1 
Certification 
6 
1.2.2 
Warranty 
6 
1.2.3 
Support 
6 
1.2.4 
Trademarks 
6 
2 
Introduction to AUTOSAR 
7 
2.1 
Background 
8 
2.2 
Approach 
9 
2.3 
Basic Concept 
10 
2.4 
Architecture 
11 
3 
Measuring and Calibrating of ECU Software 
13 
3.1 
Basics 
14 
3.2 
XCP Driver 
15 
3.2.1 
Measurement Modes 
17 
3.2.2 
Autoselection and Software Version Check of the A2L File 
18 
3.2.3 
Online Calibration 
19 
3.2.4 
Page Switching 
19 
3.2.5 
Bypassing 
20 
3.2.6 
Resume Mode 
21 
3.3 
A2L File 
22 
3.3.1 
Structure 
23 
3.3.2 
Mode of Functioning 
32 
4 
OEM 
33 
4.1 
Objective 
34 
4.2 
Content of the Performance Specifications 
34 
4.3 
Measurement Task 
34 
4.4 
Calibration Task 
35 
4.5 
XCP Features 
35 
5 
Supplier 
36 
5.1 
Preface 
37 
5.2 
Requirements 
37 
5.3 
Definition of Measurement and Calibration Parameters 
37 
5.3.1 
Measuring and Calibrating of AUTOSAR Software Components 
38 
5.3.2 
Measuring of Ports and Variables 
38 
5.3.3 
XCP Events 
39 
5.3.4 
Software Component with Calibration Parameters 
40 
5.3.5 
Calibration Parameters for Multiple Software Components 
40 
5.3.6 
Configuration of the RTE (Runtime Environment) 
41 
5.3.7 
Measuring and Calibrating Without the Support of the RTE 
41 
5.3.8 
Debugging of the BSW (Basic Software) 
42
User Manual AUTOSAR Calibration 
Contents 
© Vector Informatik GmbH 
Version 1.0 
- II - 
5.4 
Configuration of the XCP Module 
42 
5.4.1 
DAQ List Configuration 
43 
5.4.2 
Tool-Driven DAQ Timestamp Option 
44 
5.4.3 
XCP Event Information 
44 
5.4.4 
Software Version Check 
44 
5.4.5 
Use of the XCP Component in the Implementation 
46 
5.4.6 
Recommendations for the Configuration of the XCP Module 
46 
5.5 
Configuration of the Driver Modules 
48 
5.5.1 
CAN Module MICROSAR XCP 
48 
5.6 
Configuration of the Memory Management 
48 
5.6.1 
Configuration for Resume Mode 
48 
5.7 
Creating an A2L File 
49 
5.7.1 
Creation of a Master A2L File 
49 
5.7.2 
Expansion of the Master A2L File 
51 
5.7.3 
Working with ASAP2 Tool-Set 
52 
5.7.4 
Working with CANape and the ASAP2 Editor 
54 
5.8 
Fast Access to the ECU Via the VX Module 
55 
5.9 
Additional Topics 
56 
6 
Delivery Test/Quick Start 
57 
7 
CANape Introduction 
58 
7.1 
Creation of a Project 
59 
7.2 
Device Configuration 
60 
7.2.1 
Devices 
61 
7.2.2 
Networks 
62 
7.2.3 
Vector Hardware 
62 
7.2.4 
XCP Features in CANape 
63 
7.3 
Online Measurement Configuration 
64 
7.3.1 
Measurement Options 
64 
7.3.2 
Measurement Signals 
65 
7.3.3 
Recorder List 
67 
7.3.4 
Event List 
69 
7.4 
Working with Parameter Set Files 
69 
7.5 
Dataset Management 
70 
7.5.1 
Tool-Based in CANape 11.0 and Higher 
70 
7.6 
Offline Evaluation 
72 
7.7 
Flashing 
74 
8 
Addresses 
75 
9 
Abbreviations 
76
User Manual AUTOSAR Calibration 
Introduction 
© Vector Informatik GmbH 
Version 1.0 
- 3 - 
1 Introduction 
In this chapter you will find the following information: 
1.1 
Purpose of the AUTOSAR Calibration User Manual 
 page 4 
1.2 
About This User Manual 
 page 5 
Certification 
Warranty 
Support 
Trademarks
User Manual AUTOSAR Calibration 
Introduction 
© Vector Informatik GmbH 
Version 1.0 
- 4 - 
1.1 
Purpose of the AUTOSAR Calibration User Manual 
AUTOSAR Standard 
The AUTOSAR Standard describes methods that enable standardized development 
of reusable and replaceable software components within vehicles. This approach 
minimizes the development effort for electronic control unit (ECU) software. The 
software is then optimized using CANape. 
Calibration and 
measurement 
parameters 
Since the software developer cannot yet optimize the parameters for a control 
algorithm of the ECU at the time of implementation, these parameters are defined in 
the software as calibration parameters. The calibration parameters are ultimately 
variables in the source code that reside in RAM memory and remain unchanged by 
the algorithm itself. They can then be calibrated using CANape. To record the effects 
of the calibration process, additional measurement parameters are defined in the 
software. These parameters are also variables in the source code and reside in RAM 
memory. In contrast to calibration parameters, however, measurement parameters 
are continually changed by the ECU algorithm and reflect the current value. This 
makes the effects of the calibration process visible and allows the behavior of the 
ECU to be optimized. For example, the wheel speed (calibration parameter) of a 
driving dynamics control system is changed and the measuring equipment measures 
the corresponding sensor values (measurement parameters) in order to acquire the 
change in behavior of the algorithm. 
CCP/XCP protocols 
with A2L file 
In order to access the ECU-internal measurement and calibration parameters during 
runtime, the CCP and XCP protocols are used. A fundamental component of these 
address-oriented protocols is an A2L file. This file facilitates data handling, since it 
enables the symbolic selection of data ob

[Back to top](#_top)
