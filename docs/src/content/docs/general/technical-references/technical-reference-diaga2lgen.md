---
title: "DiagA2lGen"
description: "Converted Vector Technical Reference: TechnicalReference_DiagA2lGen.pdf."
---

> **Converted from** [`Doc/TechnicalReferences/TechnicalReference_DiagA2lGen.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_DiagA2lGen.pdf) (10 pages). Machine-converted with PyMuPDF: running text and structure are preserved as Markdown, but **layout, figures, tables and formulas may differ from the original PDF**. For normative content, always consult the original PDF.

| Property | Value |
|---|---|
| Source | [`TechnicalReference_DiagA2lGen.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_DiagA2lGen.pdf) |
| Pages | 10 |
| PDF title | MICROSAR Diag A2l Gen |
| Author | Alexander Ditte |

## Document outline

- 1 Component History
- 2 Introduction
- 3 Functional Description
  - 3.1 Features
- 4 Limitations
  - 4.1 DEM
- 5 Glossary and Abbreviations
  - 5.1 Glossary
  - 5.2 Abbreviations
- 6 Contact

## Excerpt (first pages)

MICROSAR Diag A2l Gen 
Technical Reference 
A2l fragment file generator for DEM, DCM and FIM 
Version 1.02.00 
Authors 
Alexander Ditte 
Status 
Released
Technical Reference MICROSAR Diag A2l Gen 
2017, Vector Informatik GmbH 
Version: 1.02.00 
based on template version 4.8.3 
2 / 10 
Document Information 
History 
Author 
Date 
Version 
Remarks 
Alexander Ditte 
2012-04-13 
01.00.00 
initial version 
Alexander Ditte 
2013-06-12 
01.01.00 
added support for AR4 DCM 
Alexander Ditte 
2013-09-25 
01.01.01 
update of chapter 3.1 
Alexander Ditte 
2017-03-03 
01.02.00 
added chapter 4 Limitations 
Reference Documents 
No. 
Source 
Title 
Version 
- 
- 
- 
- 
Scope of the Document 
This technical reference describes the specific use of the diagnostic A2l fragment file 
generator for the DEM, DCM and FIM modules. 
Caution 
We have configured the programs in accordance with your specifications in the 
questionnaire. Whereas the programs do support other configurations than the one 
specified in your questionnaire, Vector´s release of the programs delivered to your 
company is expressly restricted to the configuration you have specified in the 
questionnaire.
Technical Reference MICROSAR Diag A2l Gen 
2017, Vector Informatik GmbH 
Version: 1.02.00 
based on template version 4.8.3 
3 / 10 
Contents 
1 
Component History ........................................................................................................ 5 
2 
Introduction .................................................................................................................... 6 
3 
Functional Description .................................................................................................. 7 
3.1 
Features .......................................................................................................... 7 
4 
Limitations ...................................................................................................................... 8 
4.1 
DEM ................................................................................................................ 8 
5 
Glossary and Abbreviations .......................................................................................... 9 
5.1 
Glossary .......................................................................................................... 9 
5.2 
Abbreviations .................................................................................................. 9 
6 
Contact .......................................................................................................................... 10
Technical Reference MICROSAR Diag A2l Gen 
2017, Vector Informatik GmbH 
Version: 1.02.00 
based on template version 4.8.3 
4 / 10 
Tables 
Table 1-1 
Component history...................................................................................... 5 
Table 2-1 
Supported components and specifications .................................................. 6 
Table 3-1 
Command line arguments ........................................................................... 7 
Table 5-1 
Glossary ..................................................................................................... 9 
Table 5-2 
Abbreviations .............................................................................................. 9
Technical Reference MICROSAR Diag A2l Gen 
2017, Vector Informatik GmbH 
Version: 1.02.00 
based on template version 4.8.3 
5 / 10 
1 
Component History 
The component history gives an overview over the important milestones that are 
supported in the different versions of the component. 
Component Version New Features 
01.00.00 
> Initial version 
01.01.00 
> Added support for selective generation of measurement or calibration 
fragment content only 
01.02.00 
> Added support for AUTOSAR 4 DCM 
> Type definition template is generated in an own file 
Table 1-1 
Component history
Technical Reference MICROSAR Diag A2l Gen 
2017, Vector Informatik GmbH 
Version: 1.02.00 
based on template version 4.8.3 
6 / 10 
2 
Introduction 
This document describes the functionality, API and configuration of the diagnostic A2l 
fragment generator module. 
This generator shall support the customer to calibrate pre-defined symbols of the following 
modules: 
Specification 
Component 
MICROSAR 3 
MICROSAR 4 
DEM 
 
DCM 
 
 
FIM 
 
Table 2-1 
Supported components and specifications
Technical Reference MICROSAR Diag A2l Gen 
2017, Vector Informatik GmbH 
Version: 1.02.00 
based on template version 4.8.3 
7 / 10 
3 
Functional Description 
3.1 
Features 
The generator can be controlled via command line options. It scans the given source code 
folders for configuration files of the supported modules. If a known symbol is available and 
also the correct size could be resolved an entry in the A2l fragment file will be generated. 
For a list of the supported calibratable and measurable symbols refer to the technical 
reference of the respective module. 
For this tool to work correctly all paths for the configuration files (header and source) and 
the static files must be passed. 
The following command line options are supported: 
Argument 
Optional 
Description 
Default 
[-c Component] 
Yes 
Only the specified component is 
taken into account 
Dem: Diagnostic Event Manager 
only 
Dcm: Diagnostic Communication 
Manager only 
FiM: Function Inhibition Manager 
only 
All components are 
taken into account 
[-f] 
Yes 
Overwrite an existing output a2l 
fragment file without confirmation 
A confirmation from the 
user is required 
[-h] 
Yes 
Shows a help message 
- 
[input …] 
No 
Source code folder(s) to scan 
Please add the folders for the 
static and generated files 
- 
[-l] 
Yes 
Write a log file 
no file is generated 
[-mc 
MeasurementCalibration] 
Yes 
Set the content of the output file. 
0: Measurement and Calibration 
1: Measurement only 
2: Calibration only 
Measurement and 
Calibration symbols 
[-nr] 
Yes 
If set the given folders are not 
recursiv

[Back to top](#_top)
