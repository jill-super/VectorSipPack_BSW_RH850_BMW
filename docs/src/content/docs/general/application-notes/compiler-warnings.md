---
title: "AN-ISC-8-1184_Compiler_Warnings"
description: "Converted Vector application note: AN-ISC-8-1184_Compiler_Warnings.pdf."
---

> **Converted from** [`Doc/ApplicationNotes/AN-ISC-8-1184_Compiler_Warnings.pdf`](../../../../../../Doc/ApplicationNotes/AN-ISC-8-1184_Compiler_Warnings.pdf) (8 pages). Machine-converted with PyMuPDF: running text and structure are preserved as Markdown, but **layout, figures, tables and formulas may differ from the original PDF**. For normative content, always consult the original PDF.

| Property | Value |
|---|---|
| Source | [`AN-ISC-8-1184_Compiler_Warnings.pdf`](../../../../../../Doc/ApplicationNotes/AN-ISC-8-1184_Compiler_Warnings.pdf) |
| Pages | 8 |
| PDF title | Compiler Warnings |
| Author | Andreas Raisch |

## Excerpt (first pages)

Compiler Warnings 
Version 1.0 
2015-11-02 
Application Note AN-ISC-8-1184 
Author 
Andreas Raisch 
Restrictions 
Customer confidential – Vector decides 
Abstract 
Warning free code is an important quality goal for embedded software. Nevertheless, 
compiler warnings can occur for highly configurable software. Typical compiler 
warnings are listed and justified within this document. 
Table of Contents 
1 
Overview ........................................................................................................................................ 2
1.1 
Deviation Procedure ............................................................................................................ 3
1.2 
Default BSW Delivery Process ............................................................................................ 3
2 
Accepted Deviations ..................................................................................................................... 3
2.1 
Unused/unreferenced parameter/argument ......................................................................... 4
2.2 
Unused/unreferenced define, enum value ........................................................................... 4
2.3 
Unused/unreferenced variable ............................................................................................. 4
2.4 
Unused/unreferenced function ............................................................................................. 5
2.5 
Condition evaluates always to true/false ............................................................................. 5
2.6 
Unreachable code/statement ............................................................................................... 6
2.7 
Dead assignment / variable set but not used ....................................................................... 6
2.8 
ASM statements used .......................................................................................................... 6
3 
Additional Resources ................................................................................................................... 7
4 
Contacts ......................................................................................................................................... 8
Compiler Warnings 
Copyright © 2015 - Vector Informatik GmbH 
2 
Contact Information: www.vector.com or +49-711-80 670-0 
1 
Overview 
MICROSAR BasicSoftware (BSW) is developed in a product line approach, independent from specific 
ECU projects or compilers. MICROSAR BSW supports the AUTOSAR MemoryAbstraction and 
CompilerAbstraction concepts and supports a huge range of different compiler vendors, versions and 
options. 
MICROSAR BSW is delivered as static source code and code generators to support the ECU project 
specific adaption and optimization of the BSW behavior and feature set based on AUTOSAR 
configuration files and user defined selections. 
Additionally, MICROSAR BSW supports compile time configuration, link time configuration and post-
build configuration. 
Figure 1 MICROSAR BSW Component 
A general quality goal for MICROSAR BSW is “warning free code”. The coding style guide for 
MICROSAR BSW is based on MISRA-C:2004. Checks for MISRA compliance are an essential part of 
our development process. Based on “HIS Gemeinsames Subset der MISRA C Guidelines v2.0“ 
(http://www.automotive-his.de) all rules are active. 
Nevertheless, we accept deviations to the “warning free code” goal based on the here defined list of 
exceptions. Known and accepted deviations are reported within the delivery as ESCAN type “Warning 
in released product”. 
Document [2] explains the relationship between user-selected code generation (optimization) options 
and compiler warnings.
Compiler Warnings 
Copyright © 2015 - Vector Informatik GmbH 
3 
Contact Information: www.vector.com or +49-711-80 670-0 
1.1 Deviation Procedure 
Priority Rule 
Rationale 
1 
MICROSAR BSW shall be compiler 
warning free. Thus, compiler warnings 
shall be prevented wherever possible. 
Detection of compiler warning either during 
component development or more frequently 
when applying the customer specific 
compiler/options/BSW configuration during 
the delivery tests. 
2 
If a compiler warning is detected, the code 
shall be analyzed and, if reasonable, be 
changed/extended to become warning 
free. 
We want to prevent to deliver defect code to 
our customers. We also need to take into 
account e.g. runtime efficiency, maintainability 
and standardized code for many use-cases. 
3 
If fixing the compiler warning is not a 
solution, an ESCAN of type “Warning in 
released product” shall be created to 
document the accepted deviation also in 
the report of known issues of deliveries. 
See list of accepted deviations in this 
document. 
Table 1 Priority of measures to prevent compiler warnings 
1.2 Default BSW Delivery Process 
The configuration and compilation and linkage during the delivery test activities yield most of the 
compiler warnings, because the development tool chain and settings specified by you are used. 
The process in short is: 
> 
Customer specifies the compiler brand, version and options (via Questionnaire) and provides 
more information on the expected use-case 
> 
Delivery engineer creates example configurations of the BSW and compiles and links the outcome 
> 
Compiler warnings are analyzed and either documented as ESCAN of type “Warning in released 
product” or reported to the development teams to trigger a fix. 
> 
ESCANs of type “Issue in released product” and “Warning in released product” are reported within 
the delivery documentation as “known issues” 
2 
Accepted Deviations 
Deviations in this chapter are typically accepted as “Warning in released product” when 
> 
it has been checked that no incorrect behavior at ECU runtime occurs 
> 
no simple remedy exists 
Information 
If a compiler warning has passed the analyzing steps according Table 1 Priority of 
measures to prevent c

[Back to top](#_top)
