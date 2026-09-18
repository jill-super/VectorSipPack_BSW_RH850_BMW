---
title: "IssueReport CBD1700369"
description: "Converted delivery document: IssueReport_CBD1700369.pdf."
---

> **Converted from** [`Doc/DeliveryInformation/IssueReport_CBD1700369.pdf`](../../../../../../Doc/DeliveryInformation/IssueReport_CBD1700369.pdf) (202 pages). Machine-converted with PyMuPDF: running text and structure are preserved as Markdown, but **layout, figures, tables and formulas may differ from the original PDF**. For normative content, always consult the original PDF.

| Property | Value |
|---|---|
| Source | [`IssueReport_CBD1700369.pdf`](../../../../../../Doc/DeliveryInformation/IssueReport_CBD1700369.pdf) |
| Pages | 202 |

## Document outline

- ESCAN00097518 (CRC32 calculations deliver wrong results)
- ESCAN00097644 (RTE dereferences NULL_PTR after execution of a mapped server runnable)
- ESCAN00097829 (Service 0x22: Overwritten call stack)
- ESCAN00097901 (Rx Deferred Event Cache leads to unexpected ECU behaviour under high load)
- ESCAN00097911 (Deferred PDUs are not processed using deferred event Cache)
- ESCAN00097946 (Interrupts are still disabled when returning from ResumeOSInterrupts or ReleaseSpinlock after the corresp
- ESCAN00098052 (Undefined behavior of OS after context switch (RH850))
- ESCAN00093702 (PNC Wake-up Indication does not work as specified in AUTOSAR)
- ESCAN00094333 (Timeout Action Replace doesn't work for Rx SignalGroups with Array Access enabled)
- ESCAN00096806 (Wrong signal specific ComXf transformations in fan-out / postbuild scenario)
- ESCAN00097173 (Missing variant-specific callbacks for N:1 FanIn with queued transformed signals)
- ESCAN00097243 (FrSM debug data cannot be found in the map file)
- ESCAN00097324 (Missing TxAcknowledge in configurations with multiple variants)
- ESCAN00097662 (Configured ClearDTC finished notification does not occur)
- ESCAN00097673 (Rx Container PDUs with invalid content are forwarded to PduR)
- ESCAN00097699 (Dem_SetWIRStatus is processed and returns E_OK for unavailable events)
- ESCAN00097748 (Memory corruption of management information leads to dead lock of corresponding block)
- ESCAN00097813 (Wrong transformer buffer size for fan in use case)
- ESCAN00097848 (Dem_GetWIRStatus returns E_OK for unavailable events)
- ESCAN00097849 (Dem_GetEventEnableCondition returns E_OK for unavailable events)
- ESCAN00097850 (Dem_GetEventAvailable returns AvailableStatus 'True' for events unavailable in variant)
- ESCAN00097951 (Wrong marshalling/ unmarshalling of &lt;XInt64&gt; Signals)
- ESCAN00098037 (Some contained Tx Pdus with last-is-best semantic not appearing on the bus)
- ESCAN00061207 (DaVinci Configurator 5: Issue Reporting Procedure)
- ESCAN00089164 (The EcuM stays in RUN state even if EcuM_KillAllRunRequests has been called)
- ESCAN00091305 (EcuM with fixed state machine causes a Det error in Dem_Init because this module has been initialized two
- ESCAN00091550 (Service 0x27: Dcm allows seed/key attempt earlier than the configured security delay time)
- ESCAN00092116 (Long runtime of flash library functions can delay the Rx frame processing)
- ESCAN00095664 (Misleading description of the call sequence SetTransceiverMode and GetTransceiverWUReason at startup)
- ESCAN00096248 (Validator PDUR12501 is not shown as error for PduRDestPduRef)
- ESCAN00096249 (Validator PDUR12501 is not shown as error for PduRSrcPduRef for not supported source modules)
- ESCAN00096309 (&lt;Cdd&gt;_SyncLossErrorIndication is not called as defined within the ASR SWS)
- ESCAN00096508 (Compression produces wrong output)
- ESCAN00096510 (Signature generation produces incorrect output)
- ESCAN00096640 (Initialization state may be cached)
- ESCAN00096716 (Queued sender/receiver N:1 connections not detected)
- ESCAN00096901 (Possible incorrect interpretation of last page status)
- ESCAN00097019 (NON-RTE: Csm_MainFunction declaration is missing)
- ESCAN00097045 (Dem_SetEventAvailable returns E_OK for events unavailable in variant)
- ESCAN00097052 (Data send completed trigger fired to early when Rte_ComSendSignalProxyPeriodic is used)

_140 further outline entries in the original._

## Excerpt (first pages)

Issue Report
1
License Number
Customer
CBD1700369
Nexteer Automotive Corporation
Package: MSR BAC 4.x - ECU product "Electric Power 
Steering"
Maintenance Expiry Date
2018-08-01
SIP Version
19.06.14
SLP
Delivery Number
MSR BAC 4.x
D04
Report Creation Date
2018-01-30
Contact
In case of questions or the need for an update of the basic software delivery, please contact 
EmbeddedSupport@us.vector.com or your Vector contact person.
Table of Contents
1.
Introduction
1.1 Resolving Issues
1.2 Issue Classification
2.
New Issues
2.1 Safety Relevant Issues: 7
2.2 Runtime Issues without Workaround: 16
2.3 Runtime Issues with Workaround: 38
2.4 Not Released Functionality: 9
2.5 Apparent Issues: 93
2.6 Compiler Warnings: 17
3.
New Issues for Information: 0
4.
Report Legend
5.
3rd Party Software Issues
6.
Quality Management Contact
Issue Report
2
1. Introduction
1.1 Resolving Issues
Reported issues are not automatically fixed with the next update delivery.
If a reported issue shall be fixed, please contact Vector agree on the issues that can be fixed with 
upcoming deliveries. 
Please note that Vector may fix issues without explicit request.
1.2 Issue Classification
This Issue Report provides issues that have been detected since the last report. The issues have 
been classified to facilitate the assessment of their impact:
The chapter 'New Issues' lists issues that have been detected since the last report and which could 
not be excluded based on the use-case defined in the questionnaire. The issues are classified as 
follows:
•
Safety Related Issues: Safety related issues have impact on the functional safety of the 
software module. If this issue interferes with the functional safety concept of the ECU, this 
module (or module configuration) must not be used for serial production in a safety-related 
project. The effect of the issue to the ECU functionality and functional safety has to be 
analyzed by the user as the software usage and its configuration is not known by Vector. The 
risk of change has also to be taken into account.
•
Runtime Issues without Workaround: Runtime issues without a workaround require an 
update of the software delivery in case the issue affects the ECU overall functionality. The 
effect of an issue to the ECU functionality has to be analyzed by the customer as the software 
usage and its configuration is not known by Vector. The risk of change has also to be taken 
into account.
•
Runtime Issues with Workaround: It is not recommended to update a delivery due to a 
runtime issue with a documented workaround. The effect of an issue to the ECU functionality 
has to be analyzed by the user as the software usage and its configuration is not known by 
Vector. The risk of change has also to be taken into account.
•
Not Released Functionality: Not released functionalities (BETA) are either complete 
software modules or features in the software module that have not yet passed a complete 
development cycle (they are e.g. not or only partly tested). If a BETA issue ticket affects a 
complete software module, the software module must not be used for serial production. If a 
BETA issue ticket affects a feature in the software module, the user has to ensure that all 
BETA features are disabled as indicated for the serial production release of the ECU.
•
Apparent Issues: Apparent issues are detected immediately when using the software 
module. If an issue does not show up while working with the software module, the ECU 
project is not affected by the issue. Apparent issues may or may not have workarounds.
•
Compiler Warnings: As a service we also provide the known compiler warnings. The 
occurrence of a compiler warning may depend on the used software module configuration and 
compiler settings.
The chapter 'New Issues for Information' lists issues that are not relevant for the use-case that 
has been documented in the questionnaire provided to Vector. The issues may, however, be 
relevant for other use-cases. Additionally, issues that have been accepted or are tolerated by the 
OEM (as defined in the questionnaire) are reported here.
Issue Report
3
2. New Issues
2.1 Safety Relevant Issues
Safety related issues have impact on the functional safety of the software module. If this issue 
interferes with the functional safety concept of the ECU, this module (or module configuration) 
must not be used for serial production in a safety-related project.
The effect of the issue to the ECU functionality and functional safety has to be analyzed by the 
user as the software usage and its configuration is not known by Vector. The risk of change has 
also to be taken into account.
Index
ESCAN00097518
CRC32 calculations deliver wrong results
MemService_AsrNvM@Implementation
ESCAN00097644
RTE dereferences NULL_PTR after execution of a mapped server runnable
Rte_Core@Implementation
ESCAN00097829
Service 0x22: Overwritten call stack
Diag_Asr4Dcm@Implementation
ESCAN00097901
Rx Deferred Event Cache leads to unexpected ECU behaviour under high load
Il_AsrComCfg5@Implementation
ESCAN00097911
Deferred PDUs are not processed using deferred event Cache
Il_AsrComCfg5@Implementation
ESCAN00097946
Interrupts are still disabled when returning from ResumeOSInterrupts or 
ReleaseSpinlock after the corresponding suspension API has been interrupted
Os_CoreGen7@Implementation
ESCAN00098052
Undefined behavior of OS after context switch (RH850)
Os_PlatformRH850Gen7@Implementation
Issue Report
4
ESCAN00097518
CRC32 calculations deliver wrong results
Component@Subcomponent:
MemService_AsrNvM@Implementation
First affected version:
5.00.00
Fixed in versions:
Problem Description:
What happens (symptoms):
-------------------------------------------------------------------
CRC32s calculated internally by NVM are not as specified by AUTOSAR, i.e. the results may differ, 
depending on number of single CRC library calls done per NVM block.
Calculated values are still CRCs, but they don't match the results from using corresponding 
s

[Back to top](#_top)
