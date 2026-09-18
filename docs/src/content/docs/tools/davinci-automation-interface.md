---
title: "DaVinci Automation Interface"
description: "Converted DaVinci Configurator automation interface documentation."
---

> **Converted from** [`DaVinciConfigurator/Core/AutomationInterface/_doc/DVCfg_AutomationInterfaceDocumentation.pdf`](../../../../../DaVinciConfigurator/Core/AutomationInterface/_doc/DVCfg_AutomationInterfaceDocumentation.pdf) (283 pages). Machine-converted with PyMuPDF: running text and structure are preserved as Markdown, but **layout, figures, tables and formulas may differ from the original PDF**. For normative content, always consult the original PDF.

| Property | Value |
|---|---|
| Source | [`DVCfg_AutomationInterfaceDocumentation.pdf`](../../../../../DaVinciConfigurator/Core/AutomationInterface/_doc/DVCfg_AutomationInterfaceDocumentation.pdf) |
| Pages | 283 |
| PDF title | DaVinci Configurator AutomationInterface Documentation |
| Author | DaVinci Configurator Team |

## Document outline

- 1 Introduction
  - 1.1 General
  - 1.2 Facts
- 2 Getting started with Script Development
  - 2.1 General
  - 2.2 Automation Script Development Types
  - 2.3 Script File
  - 2.4 Script Project
    - 2.4.1 Script Project Development
    - 2.4.2 Java JDK Setup
    - 2.4.3 IntelliJ IDEA Setup
    - 2.4.4 Gradle Setup
- 3 AutomationInterface Architecture
  - 3.1 Components
  - 3.2 Languages
    - 3.2.1 Why Groovy
  - 3.3 Script Structure
    - 3.3.1 Scripts
    - 3.3.2 Script Tasks
    - 3.3.3 Script Locations
  - 3.4 Script loading
    - 3.4.1 Internal Script Reload Behavior
  - 3.5 Script editing
  - 3.6 Licensing
  - 3.7 Script Coding Conventions and Constraints
    - 3.7.1 Usage of static fields
    - 3.7.2 Usage of Outer Closure Scope Variables
    - 3.7.3 States over script task execution
    - 3.7.4 Usage of Threads
    - 3.7.5 Usage of DaVinci Configurator private Classes Methods or Fields
- 4 AutomationInterface API Reference
  - 4.1 Introduction
  - 4.2 Script Creation
    - 4.2.1 Script Task Creation
      - 4.2.1.1 Script Creation with IDE Code Completion Support
      - 4.2.1.2 Script Task isExecutableIf
    - 4.2.2 Description and Help
  - 4.3 Script Task Types
    - 4.3.1 Available Types
      - 4.3.1.1 Application Types

_341 further outline entries in the original._

## Excerpt (first pages)

DaVinci Conﬁgurator AutomationInterface
Development Documentation of the AutomationInterface (AI)
DaVinci Conﬁgurator Team
November 29, 2017
© 2017
Vector Informatik GmbH
Ingersheimerstr. 24
70499 Stuttgart
Contents
1
Introduction
10
1.1
General
. . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .
10
1.2
Facts . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .
10
2
Getting started with Script Development
11
2.1
General
. . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .
11
2.2
Automation Script Development Types . . . . . . . . . . . . . . . . . . . . . . . .
11
2.3
Script File . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .
11
2.4
Script Project . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .
13
2.4.1
Script Project Development . . . . . . . . . . . . . . . . . . . . . . . . . .
15
2.4.2
Java JDK Setup
. . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .
16
2.4.3
IntelliJ IDEA Setup
. . . . . . . . . . . . . . . . . . . . . . . . . . . . . .
16
2.4.4
Gradle Setup . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .
17
3
AutomationInterface Architecture
18
3.1
Components . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .
18
3.2
Languages . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .
19
3.2.1
Why Groovy
. . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .
19
3.3
Script Structure . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .
20
3.3.1
Scripts . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .
20
3.3.2
Script Tasks . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .
21
3.3.3
Script Locations
. . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .
21
3.4
Script loading . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .
21
3.4.1
Internal Script Reload Behavior . . . . . . . . . . . . . . . . . . . . . . . .
21
3.5
Script editing . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .
22
3.6
Licensing
. . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .
22
3.7
Script Coding Conventions and Constraints . . . . . . . . . . . . . . . . . . . . .
22
3.7.1
Usage of static ﬁelds . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .
23
3.7.2
Usage of Outer Closure Scope Variables . . . . . . . . . . . . . . . . . . .
24
3.7.3
States over script task execution
. . . . . . . . . . . . . . . . . . . . . . .
24
3.7.4
Usage of Threads . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .
24
3.7.5
Usage of DaVinci Conﬁgurator private Classes Methods or Fields . . . . .
24
4
AutomationInterface API Reference
25
4.1
Introduction . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .
25
4.2
Script Creation . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .
26
4.2.1
Script Task Creation . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .
26
4.2.1.1
Script Creation with IDE Code Completion Support . . . . . . .
27
4.2.1.2
Script Task isExecutableIf . . . . . . . . . . . . . . . . . . . . . .
28
4.2.2
Description and Help . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .
28
4.3
Script Task Types
. . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .
30
4.3.1
Available Types . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .
30
4.3.1.1
Application Types . . . . . . . . . . . . . . . . . . . . . . . . . .
30
4.3.1.2
Project Types
. . . . . . . . . . . . . . . . . . . . . . . . . . . .
31
4.3.1.3
UI Types . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .
32
4.3.1.4
Generation Types
. . . . . . . . . . . . . . . . . . . . . . . . . .
32
4.4
Script Task Execution . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .
34
© 2017, Vector Informatik GmbH
2 of 283
Contents
4.4.1
Execution Context . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .
34
4.4.1.1
Code Block Arguments
. . . . . . . . . . . . . . . . . . . . . . .
35
4.4.2
Task Execution Sequence
. . . . . . . . . . . . . . . . . . . . . . . . . . .
35
4.4.3
Script Path API during Execution . . . . . . . . . . . . . . . . . . . . . .
36
4.4.3.1
Path Resolution by Parent Folder
. . . . . . . . . . . . . . . . .
37
4.4.3.2
Path Resolution
. . . . . . . . . . . . . . . . . . . . . . . . . . .
37
4.4.3.3
Script Folder Path Resolution
. . . . . . . . . . . . . . . . . . .
38
4.4.3.4
Project Folder Path Resolution . . . . . . . . . . . . . . . . . . .
38
4.4.3.5
SIP Folder Path Resolution . . . . . . . . . . . . . . . . . . . . .
39
4.4.3.6
Temp Folder Path Resolution . . . . . . . . . . . . . . . . . . . .
39
4.4.3.7
Other Project and Application Paths
. . . . . . . . . . . . . . .
40
4.4.4
Script logging API . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .
40
4.4.5
User Interactions and Inputs
. . . . . . . . . . . . . . . . . . . . . . . . .
41
4.4.5.1
UserInteraction . . . . . . . . . . . . . . . . . . . . . . . . . . . .
41
4.4.5.2
Progress Indication
. . . . . . . . . . . . . . . . . . . . . . . . .
42
4.4.6
Script Error Handling . . . . . . . . . . . . . . . . . . . . . . . . . . . . .
44
4.4.6.1
Script Exceptions
. . . . . . . . . . . . . . . . . . . . . . . . . .
44
4.4.6.2
Script Task Abortion by Exception . . . . . . . . . . . . . . . . .
44
4.4.6.3
Unhandled Exceptions from Tasks . . . . . . . . . . . . . . . . .
45
4.4.7
User deﬁned Classes and Methods
. . . . . . . . . . . . . . . . . . . . . .
46
4.4.8
Usage of Automation API in own deﬁned Classes and Methods . . . . . .
47
4.4.8.1
Access the Automation API like the Script code{} Block
. . . .
47
4.4.8.2
Access the Project API of the current active Project . . . . . . .
47
4.4.9
User deﬁned Script Task Arguments . . . . . . . . . . . . . . . . . . . . .

[Back to top](#_top)
