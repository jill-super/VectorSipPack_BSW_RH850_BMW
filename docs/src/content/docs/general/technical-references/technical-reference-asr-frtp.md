---
title: "Asr FrTp"
description: "Converted Vector Technical Reference: TechnicalReference_Asr_FrTp.pdf."
---

> **Converted from** [`Doc/TechnicalReferences/TechnicalReference_Asr_FrTp.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_Asr_FrTp.pdf) (36 pages). Machine-converted with PyMuPDF: running text and structure are preserved as Markdown, but **layout, figures, tables and formulas may differ from the original PDF**. For normative content, always consult the original PDF.

| Property | Value |
|---|---|
| Source | [`TechnicalReference_Asr_FrTp.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_Asr_FrTp.pdf) |
| Pages | 36 |
| PDF title | MICROSAR FrTp |
| Author | Knut Winkelbach, Oliver Reineke |

## Excerpt (first pages)

MICROSAR FrTp 
Technical Reference 
Version 2.00.04 
Authors 
Knut Winkelbach, Oliver Reineke 
Status 
Released
Technical Reference MICROSAR FrTp 
© 2017 Vector Informatik GmbH 
Version 2.00.04 
2 
based on template version 6.0.1 
Document Information 
History 
Author 
Date 
Version 
Remarks 
Knut Winkelbach 
2008-09-05 
0.1 
First version for Pre-Release. 
Klaus Bergdolt 
2008-09-16 
0.2 
Manual configuration when using ECUC files. 
Knut Winkelbach 
2009-01-26 
1.0 
Adapted to new features, explained limitations in 
more detail. 
Knut Winkelbach 
2009-03-28 
1.1 
Clarified interaction with FrIf. 
Removed feature overview. 
Knut Winkelbach 
2009-06-29 
1.2 
Added description of new features for code size 
optimization. 
Knut Winkelbach 
2009-07-07 
1.3 
Rework after review. 
Knut Winkelbach 
2009-11-20 
1.4 
Described new code optimizations in conjunction 
with their use cases. 
Adapted erroneous prototype of FrTp_Transmit() 
Extended description of GENy configurable options. 
Knut Winkelbach 
2009-12-01 
1.5 
Rework after review. 
Knut Winkelbach 
2010-04-22 
1.6 
Straightened description of "Multi Purpose Tp" 
Added error detection hints and support for "Multiple 
Identity" of Ecus.. 
Added description of feature 
"FrTp_ChangeParameterRequest"_(extended 
parameter change) and 
"FrTp_ReadParameterRequest". 
Knut Winkelbach 
2010-05-07 
1.7 
Rework after review. 
Knut Winkelbach 
2010-05-21 
1.8 
Corrected prototype of 
FrTp_ReadParameterRequest. 
Knut Winkelbach 
2010-08-20 
1.9 
Added description of optimizations for GW-
operation. 
Knut Winkelbach 
2010-08-26 
1.10 
Rework after review. 
Knut Winkelbach 
2011-02-07 
1.11 
Clarified FrIf_Transmit(), FrTp_TriggerTransmit() and 
description of E_PENDING 
Optimizations for faster Rx- and Tx-Buffer-Retrieval 
now controlled by 'FrTp Disable Fast Buf Retrieval' 
instead of 'Have Fast Segm Stf Seg Rx:' and 'Have 
Fast Unsegm Stf Unseg Rx'. 
Knut Winkelbach 
2011-02-21 
1.12 
Corrected description of 'FrTp Disable Fast Buf 
Retrieval'. 
Knut Winkelbach 
2011-05-23 
1.13 
Corrected revision history (aligned version with ALM 
tool).
Technical Reference MICROSAR FrTp 
© 2017 Vector Informatik GmbH 
Version 2.00.04 
3 
based on template version 6.0.1 
Knut Winkelbach 
2011-07-27 
1.14 
Removed description of FrIf_Transmit return code 
E_PENDING. 
Removed feature providing AUTOSAR 4 prototypes 
& corrected all features depending on the feature 
removed. 
Overworked chapter Multi Identity (new feature Multi 
Config added). 
Knut Winkelbach 
2012-01-11 
1.15 
Added description of FrTp_CancelReceive, updated 
description of FrTp_CancelTransmit, 
FrTp_ChangeParameter, removed CancelReason 
Removed section “Configuration with *.GNY project 
files” because configuration with FIBEX files is no 
longer supported by GENy. Overworked section 
“Configuration” and “Important Hints” as a 
consequence of this. 
Knut Winkelbach 
2012-07-10 
1.16 
Corrected “Contents”. 
Knut Winkelbach 
2013-02-21 
1.17 
Update to single source concept to be able to 
generate separate AUTOSAR 3 / 4 documents. 
Knut Winkelbach 
2013-05-17 
1.18 
No support of Acknowledge or Acknowledge and 
Retry. 
Knut Winkelbach 
2014-01-20 
1.19 
1. No ChangeParameter Confirmation Callback 
2. AUTOSAR-compliant prototype of 
FrTp_ChangeParameter 
3. FrTp_Shutdown cancelling all transfers optionally 
Knut Winkelbach 
2014-05-21 
1.20 
AUTOSAR 4.1.2 compliant PduR-API (Replacement 
of NotifResultType by Std_ReturnType) 
Check separation cycles in 
FrTp_ChangeParameter() vs. FrTpTimeoutCr. 
Knut Winkelbach 
2014-11-06 
2.00.00 
Separate development of AUTOSAR4 version. 
Support of postbuild selectable configurations. 
Support of runtime measurement. 
Knut Winkelbach 
2015-08-14 
2.00.01 
Added link to Technical Reference “Postbuild 
Selectable”, introduced new critical section. 
Knut Winkelbach 
2015-12-17 
2.00.02 
Updated Deviations Chapter. 
Knut Winkelbach 
2016-08-04 
2.00.03 
Re-creation based on newest Template. 
Knut Winkelbach 
2016-11-30 
2.00.04 
Added hint regarding unsupported config. variant “no 
Tx-Pdu-Pools at all”. 
Referenced Documents 
No. 
Source 
Title 
Version 
[1] 
AUTOSAR 
ISO_IS_10681-2_(E).doc 
2009-12-10 
[2] 
AUTOSAR 
AUTOSAR_SWS_FlexRayISOTransportLayer.pdf 
V4.0.0 
[3] 
AUTOSAR 
AUTOSAR_SWS_DevelopmentErrorTracer.pdf 
V3.2.0
Technical Reference MICROSAR FrTp 
© 2017 Vector Informatik GmbH 
Version 2.00.04 
4 
based on template version 6.0.1 
[4] 
AUTOSAR 
AUTOSAR_SWS_PDURouter.pdf 
V3.2.0 
[5] 
Vector 
TechnicalReference_Asr_EcuM.pdf 
See delivery 
[6] 
Vector 
TechnicalReference_Asr_Dbg.pdf 
See delivery 
[7] 
Vector 
TechnicalReference_PostBuildLoadable.pdf 
See delivery 
[8] 
Vector 
TechnicalReference_IdentityManager.pdf 
See delivery 
[9] 
Vector 
TechnicalReference_Asr4Rtm.pdf 
See delivery 
[10] Vector 
TechnicalReference_PostBuildSelectable.pdf 
See delivery 
[11] AUTOSAR 
AUTOSAR_TR_BSWModuleList.pdf 
V1.6.0 
[12] AUTOSAR 
AUTOSAR_SWS_CompilerAbstraction.pdf 
V3.2.0 
[13] Vector 
AN-ISC-8-1140_FrIf_JLE_Configuration.pdf 
See delivery 
Scope of the Document: 
This technical reference describes the general use of the FrTp basis software. 
Caution 
We have configured the programs in accordance with your specifications in the 
questionnaire. Whereas the programs do support other configurations than the one 
specified in your questionnaire, Vector´s release of the programs delivered to your 
company is expressly restricted to the configuration you have specified in the 
questionnaire.
Technical Reference MICROSAR FrTp 
© 2017 Vector Informatik GmbH 
Version 2.00.04 
5 
based on template version 6.0.1 
Contents 
1 
Component History ...................................................................................................... 8 
2 
Introduction................................................................................................................... 9 
2.1 
Architecture Overview ........................................................................

[Back to top](#_top)
