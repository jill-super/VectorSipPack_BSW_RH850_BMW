---
title: "AN-ISC-8-1213_Compliance Documentation MISRA-C_2004"
description: "Converted Vector application note: AN-ISC-8-1213_Compliance Documentation MISRA-C_2004.pdf."
---

> **Converted from** [`Doc/ApplicationNotes/AN-ISC-8-1213_Compliance Documentation MISRA-C_2004.pdf`](../../../../../../Doc/ApplicationNotes/AN-ISC-8-1213_Compliance Documentation MISRA-C_2004.pdf) (26 pages). Machine-converted with PyMuPDF: running text and structure are preserved as Markdown, but **layout, figures, tables and formulas may differ from the original PDF**. For normative content, always consult the original PDF.

| Property | Value |
|---|---|
| Source | [`AN-ISC-8-1213_Compliance Documentation MISRA-C_2004.pdf`](../../../../../../Doc/ApplicationNotes/AN-ISC-8-1213_Compliance Documentation MISRA-C_2004.pdf) |
| Pages | 26 |
| PDF title | Compliance Documentation MISRA-C:2004 |
| Author | Andreas Raisch |

## Document outline

- 1 Overview
  - 1.1 Purpose, goal
- 2 Enforcing MISRA-C Compliance
  - 2.1 Software Engineering Context
  - 2.2 Programming Language and Coding Context
  - 2.3 Project specific MISRA Subset
  - 2.4 MISRA Compliance Matrix
  - 2.5 Hints on Compiler Selection
    - 2.5.1 Deactivated QA-C Rules for MICROSAR Product Analysis
  - 2.6 Deviation Procedure
  - 2.7 Usage of C99 Features
    - 2.7.1 Usage of Inline Functions
    - 2.7.2 Usage of C99 Data Types
    - 2.7.3 No Usage of “//” Comments
- 3 Enforcing Code Metric Compliance
  - 3.1 HIS Metric Compliance Matrix
- 4 Appendix
  - 4.1 MISRA Justification for “Project Deviations”
  - 4.2 Code Metric Justification for “Product Deviations”
- 5 Additional Resources
- 6 Contacts

## Excerpt (first pages)

Compliance Documentation MISRA-C:2004 
Version 3.0 
2017-10-09 
Application Note AN-ISC-8-1213 
Author 
Andreas Raisch 
Restrictions 
Customer Confidential – Vector decides 
Abstract 
This document explains the MISRA-C and HIS Metric compliance enforcement. It also 
contains the project specific MISRA and code metric deviations including their 
justifications. 
Table of Contents 
1 
Overview ........................................................................................................................................ 3
1.1 
Purpose, goal ....................................................................................................................... 3
2 
Enforcing MISRA-C Compliance .................................................................................................. 4
2.1 
Software Engineering Context ............................................................................................. 4
2.2 
Programming Language and Coding Context ..................................................................... 4
2.3 
Project specific MISRA Subset ............................................................................................ 4
2.4 
MISRA Compliance Matrix ................................................................................................... 4
2.5 
Hints on Compiler Selection ................................................................................................. 6
2.5.1 Deactivated QA-C Rules for MICROSAR Product Analysis ................................................ 7
2.6 
Deviation Procedure ............................................................................................................ 7
2.7 
Usage of C99 Features ........................................................................................................ 8
2.7.1 Usage of Inline Functions .................................................................................................... 8
2.7.2 Usage of C99 Data Types .................................................................................................... 9
2.7.3 No Usage of “//” Comments ................................................................................................. 9
3 
Enforcing Code Metric Compliance ..........................................................................................10
3.1 
HIS Metric Compliance Matrix ...........................................................................................10
4 
Appendix ......................................................................................................................................13
4.1 
MISRA Justification for “Project Deviations” ......................................................................13
4.2 
Code Metric Justification for “Product Deviations” .............................................................23
5 
Additional Resources .................................................................................................................26
6 
Contacts .......................................................................................................................................26
Compliance Documentation MISRA-C:2004 
Copyright © 2017 - Vector Informatik GmbH 
2 
Contact Information: www.vector.com or +49-711-80 670-0 
Revision List 
Version 
Editor 
Date 
Section 
Changes, Comments 
0.1.0 
virTsd 
2009-03-31 
all 
Initial version 
1.0.0 
visRa 
2011-04-26 
Reference
s 
References changed to new locations on server 
1.1.0 
visRa 
2012-02-17 
Deviations New project deviations added: MD_MSR_1.1_810, 
MD_MSR_1.1_828, MD_MSR_1.1_857 
2.0.0 
visRa 
2013-04-22 
all 
Document renamed due to new target “claiming 
compliance”. Completely reworked; new chapters 
“Enforcing MISRA-C Compliance” and “Enforcing 
Code Metric” added. MISRA product deviations 
moved in appendix; code metric deviations added. 
2.1.0 
visRa 
2013-12-16 
Chapter “Hints on Compiler Selection” added; new 
standard deviations added in “MISRA Justification 
for “Project Deviations”: MD_MSR_1.1_639, 
MD_MSR_5.1_777, MD_MSR_19.13_0342 
2.2.0 
visRa 
2014-03-19 
Chapter “Hints on Compiler Selection” extended; 
new standard deviations added in “MISRA 
Justification for “Project Deviations”: 
MD_MSR_1.1_715 and MD_MSR_5.1_779 
2.3.0 
visRa 
2015-02-18 
New standard deviation MD_MSR_14.2 added 
New standard deviation MD_MSR_5.7 added 
QA-C rule 850 deactivation added to chapter 2.4 
MISRA Compliance Matrix 
2.4.0 
visRa 
2016-04-08 
Chapter 2.7 Usage of C99 Features added 
2.5.0 
visRa 
2016-10-13 
New standard deviation MD_MSR_16.7 added 
Mapping to [MISRA-P1] added 
2.6.0 
visRa 
2017-02-03 
New standard deviation MD_MSR_5.6 added 
3.0.0 
visRa 
2017-10-06 
Migration to “application note” format 
Usage and justification rule 14.7 adapted to Vector 
SafeBSW “process 3”.
Compliance Documentation MISRA-C:2004 
Copyright © 2017 - Vector Informatik GmbH 
3 
Contact Information: www.vector.com or +49-711-80 670-0 
1 
Overview 
1.1 Purpose, goal 
The purpose of this document is to explain the process executed and limitations known to claim 
compliance of the product MICROSAR to “MISRA-C:2004 guidelines for the use of the C language in 
critical systems” [MISRA-C] and to HIS source code metrics [HIS-CODE]. 
In addition, the document also describes the handling of code metrics. 
The products are developed in a product-line approach, so the wording “project” in [MISRA-C] is 
mapped to “product” in this context, too. Product-line approach means that a large set of reusable 
software-components are developed and maintained to fulfill the functional needs of different OEMs 
and TIER1s for any ECU in any vehicle. 
Figure 1-1 Overall MISRA process: MISRA standard – code style guides – code – compliance matrix - … 
Own 
rules
List of 
project-
specific 
deviations
Req
Adv
CodeStyle Guide
Compliance Matrix
Code 
Verification
by tool
Verification
by review
rules
Req
Code 
Template
(+QA-C markers)
(+Specific 
deviation

[Back to top](#_top)
