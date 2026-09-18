---
title: "Startup BMW BAC40"
description: "Converted guide: Startup_BMW_BAC40.pdf."
---

> **Converted from** [`Doc/Startup_BMW_BAC40.pdf`](../../../../../Doc/Startup_BMW_BAC40.pdf) (217 pages). Machine-converted with PyMuPDF: running text and structure are preserved as Markdown, but **layout, figures, tables and formulas may differ from the original PDF**. For normative content, always consult the original PDF.

| Property | Value |
|---|---|
| Source | [`Startup_BMW_BAC40.pdf`](../../../../../Doc/Startup_BMW_BAC40.pdf) |
| Pages | 217 |
| PDF title | Startup with BMW BAC4.x |
| Author | Vector Informatik GmbH (Klaus Emmert, Manuela Huber) |

## Document outline

- 1 About This Manual
  - 1.1 History Information
  - 1.2 Finding Information Quickly
  - 1.3 Conventions
  - 1.4 Certification
  - 1.5 Warranty
  - 1.6 Support
  - 1.7 Trademarks
  - 1.8 Errata Sheet of Hardware Manufacturers
  - 1.9 Example Code
  - 1.10 What Do You Learn from This Manual
- 2 Basics
  - 2.1 An Overall View
  - 2.2 MICROSAR - Vector's AUTOSAR Solution
  - 2.3 AUTOSAR Layer Model BMW
- I STEPbySTEP
- 1 STEP1 Setup Your Project
  - 1.1 Situation after Installation
  - 1.2 Setup Project via DaVinci Configurator Pro
    - 1.2.1 General Settings
    - 1.2.2 Project Folder Structure
    - 1.2.3 Target
    - 1.2.4 DaVinci Developer
  - 1.3 Result Project Folder - Result of the Project Setup
    - 1.3.1 Appl folder
    - 1.3.2 Config folder
    - 1.3.3 <ProjectName>.dpa
    - 1.3.4 Log Folder
  - 1.4 Start Menu - Result of the Project Setup
  - 1.5 DaVinci Configurator Pro Project
- 2 STEP2 Define Project Settings
  - 2.1 Add Input Files
    - 2.1.1 Add System Description Files
    - 2.1.2 Add Diagnostic Data Files
    - 2.1.3 State Description
    - 2.1.4 Add Standard Configuration Files
    - 2.1.5 Define Options for Input Files
    - 2.1.6 Update Configuration
  - 2.2 Define External Generation Steps and SWC Templates and Contract Phase Headers
    - 2.2.1 External Generation Steps

_228 further outline entries in the original._

## Excerpt (first pages)

Startup with BMW BAC4.x
Version 13.0.1
for MICROSAR 4 Release 19
© Vector Informatik GmbH
Version 13.0.1 for Release 19
- 2-
Content
1 About This Manual
11
1.1 History Information
11
1.2 Finding Information Quickly
11
1.3 Conventions
11
1.4 Certification
12
1.5 Warranty
12
1.6 Support
13
1.7 Trademarks
13
1.8 Errata Sheet of Hardware Manufacturers
14
1.9 Example Code
14
1.10 What Do You Learn from This Manual
14
2 Basics
16
2.1 An Overall View
16
2.2 MICROSAR - Vector's AUTOSAR Solution
17
2.3 AUTOSAR Layer Model BMW
17
I STEPbySTEP
19
1 STEP1 Setup Your Project
20
1.1 Situation after Installation
20
1.2 Setup Project via DaVinci Configurator Pro
20
1.2.1 General Settings
21
1.2.2 Project Folder Structure
21
1.2.3 Target
21
1.2.4 DaVinci Developer
22
1.3 Result Project Folder - Result of the Project Setup
23
1.3.1 Appl folder
23
1.3.2 Config folder
23
1.3.3 <ProjectName>.dpa
24
1.3.4 Log Folder
24
1.4 Start Menu - Result of the Project Setup
25
1.5 DaVinci Configurator Pro Project
25
Content
User Manual Startup with BMW BAC4.x
2 STEP2 Define Project Settings
26
2.1 Add Input Files
26
2.1.1 Add System Description Files
26
2.1.2 Add Diagnostic Data Files
28
2.1.3 State Description
30
2.1.4 Add Standard Configuration Files
32
2.1.5 Define Options for Input Files
32
2.1.6 Update Configuration
32
2.2 Define External Generation Steps and SWC Templates and Contract Phase Headers
35
2.2.1 External Generation Steps
35
2.2.2 SWC Templates and Contract Phase Headers
36
2.3 Add or Update BAC Modules
37
2.4 Activate Your BSW Modules
37
2.5 Add ECUC File References
38
2.6 Change Project Settings
38
2.6.1 Postbuild Support
39
3 STEP3 Validation
40
3.1 Start Solve All Mechanism
40
3.2 Live Validation - Solving Actions
40
4 STEP4 Start BSW Configuration
42
4.1 Start Configuration with Configuration Editors
42
4.2 Base Services
42
4.2.1 Default Error Tracer
42
4.2.2 General Purpose Timer (GPT)
42
4.2.3 RAM Test
42
4.3 Communication
43
4.3.1 Communication General
43
4.3.2 Bus Controller
43
4.3.3 PDUs
43
4.3.4 Signals
44
© Vector Informatik GmbH
Version 13.0.1 for Release 19
- 3-
Content
User Manual Startup with BMW BAC4.x
© Vector Informatik GmbH
Version 13.0.1 for Release 19
- 4-
4.3.5 Socket Adapter Users
44
4.3.6 Transport Protocol
44
4.4 Diagnostics
44
4.4.1 Diagnostic Data Identifiers
44
4.4.2 Diagnostic Event Data
44
4.4.3 Diagnostic Events
44
4.4.4 Production Error Handling
45
4.4.5 Add Diagnostic Data ID Assistant
45
4.4.6 Automap Diagnostic Data Objects
46
4.4.7 Setup Event Memory Blocks
46
4.5 I/O
46
4.5.1 IO Hardware Abstraction
46
4.6 Memory
46
4.6.1 Memory General
46
4.6.2 Memory Blocks
46
4.6.3 Optimize Fee
47
4.7 Mode Management Editors
47
4.7.1 BSW Management
47
4.7.2 Activate Interrupts of Peripherals Devices
50
4.7.3 ECU Management
53
4.7.4 Initialization
53
4.7.5 Watchdogs
53
4.8 Network Management
54
4.8.1 Network Management General
54
4.8.2 Communication Users
54
4.8.3 Partial Networking
54
4.9 Runtime System
55
4.9.1 Runtime System General
55
4.9.2 ECU Software Components
55
4.9.3 Module Internal Behavior
56
Content
User Manual Startup with BMW BAC4.x
4.9.4 OS Configuration
56
4.9.5 Task Mapping
56
4.10 Go on with Basic Editor
57
4.11 Start Solving Actions
57
4.12 Start On-demand Validation
57
4.13 BSW Configuration finished
59
5 STEP5 Design Software Components
60
5.1 Switch to DaVinci Developer
60
5.2 Design Software Components
61
6 STEP6 Mappings
62
6.1 Perform Data Mapping within DaVinci Developer or DaVinci Configurator?
62
6.2 Data Mapping within the DaVinci Developer
62
6.2.1 Data Mapping Automatically - DaVinci Developer
62
6.2.2 Data Mapping Manually - DaVinci Developer
64
6.2.3 DaVinci Developer - Save and close
66
6.3 Switch (back) to DaVinci Configurator
66
6.4 Synchronize System Description
66
6.5 Add Component Connection
66
6.6 Service Mapping
67
6.6.1 Service Mapping via Service Component
67
6.6.2 Service Mapping (overview)
68
6.7 Add Data Mapping
69
6.8 Add Memory Mapping
71
6.9 Add Task Mapping
71
6.9.1 Task Mapping Assistant
72
6.9.2 Task Mapping
73
7 STEP7 Code Generation
75
7.1 Generate SWC Templates and Contract Phase Headers
75
7.2 Start Code Generation
75
7.3 Generation Process finished!
77
© Vector Informatik GmbH
Version 13.0.1 for Release 19
- 5-
Content
User Manual Startup with BMW BAC4.x
© Vector Informatik GmbH
Version 13.0.1 for Release 19
- 6-
8 STEP8 Add Runnable Code
78
8.1 Component Template
78
8.2 Implement Code
79
9 STEP9 Compile, Link and Test Your Project
80
9.1 Finish your project with compiling and linking
80
9.2 No error frames? Congratulations, that’s it!
80
II Concept
81
1 General Overview
82
1.1 Software Component
84
1.1.1 Atomic components
84
1.1.2 Compositions
84
1.2 Runnables
84
1.3 Ports
85
1.3.1 Application Port Interfaces
85
1.3.2 Service Port Interfaces
85
1.4 Data Element Types
85
1.5 Connections
85
1.6 RTE
86
1.7 BSW – Basic Software Modules
86
1.8 Software, Tools and Files
86
1.9 Structure of the SIP Folder
88
2 Set-Up New Project
91
2.1 DaVinci Configurator
91
2.1.1 The Main Window of DaVinci Configurator Pro
91
2.1.2 Editors and Assistants
93
3 Define Project Settings
96
3.1 Input files
96
3.1.1 System Description Files
96
3.1.2 SYSEX
96
3.1.3 ECUEX
96
Content
User Manual Startup with BMW BAC4.x
3.1.4 Legacy Data Base files (DBC, LDF, FIBEX, …)
96
3.1.5 Diagnostic Data Files
97
3.1.6 CDD / ODX
97
3.1.7 State Description
97
3.1.8 Standard Configuration Files
98
3.2 External Generation Steps
98
3.3 Activate BSW
98
4 Validation
99
4.1 Validation Concept
99
5 BSW Configuration with Configuration Editors
100
5.1 DaVinci Configurator Pro Editors
100
6 Software Component (SWC) Design
101
6.1 Data Exchange between DaVinci Developer and DaVinci Configurator Pro
101
6.2 About Application Components, Ports, Connections, Runnables and More…
101
6.3 Application Components
102
6.3.1 The Object Browser – Types, Packages and Files
102
6.3.2 New Application Components
106
6.3.3 Understand Types, Prototypes and Interfaces
110
6.4 Ports, Port Init V

[Back to top](#_top)
