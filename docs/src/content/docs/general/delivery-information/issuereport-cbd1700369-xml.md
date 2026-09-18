---
title: "IssueReport_CBD1700369.xml"
description: "Delivery document: IssueReport_CBD1700369.xml."
---

> Converted from [`Doc/DeliveryInformation/IssueReport_CBD1700369.xml`](../../../../../../Doc/DeliveryInformation/IssueReport_CBD1700369.xml). Markup simplified to Markdown.

```text
1
Open Issues in 'CBD1700369'
2018-01-30
CBD1700369-D04-2018-01-30-11:00:00
CBD1700369
Nexteer Automotive Corporation
Package: MSR BAC 4.x - ECU product "Electric Power Steering"
EmbeddedSupport@us.vector.com
2018-08-01
D04
MSR BAC 4.x
19.06.14
ESCAN00097673
Il_AsrIpduMCfg5
root
High
Issue in a released product
false
Rx Container PDUs with invalid content are forwarded to PduR
What happens (symptoms):
-------------------------------------------------------------------
Defective Container PDUs with invalid layouts are forwarded to PduR via PduR_IpduMRxIndication().
The ECU continues to behave normally.

When does this happen:
-------------------------------------------------------------------
Always and immediately.

In which configuration does this happen:
-------------------------------------------------------------------
Any configuration where Postbuild Selectable is configured
AND
IpduMContainerRxPdu do not exist with the IpduMContainerRxHandleId == 0 and all IpduMContainerRxHandleIds in one Predefined Variant have Gaps in the numerical Range.
Workaround:
-------------------------------------------------------------------
No workaround available.

Resolution:
-------------------------------------------------------------------
The described issue is corrected by modification of all affected work-products.
6.01.00
8.00.02
ESCAN00097848
Diag_Asr4Dem
Implementation
High
Issue in a released product
false
Dem_GetWIRStatus returns E_OK for unavailable events
What happens (symptoms):
-------------------------------------------------------------------
API Dem_GetWIRStatus returns E_OK when called for an unavailable event. 

When does this happen:
-------------------------------------------------------------------
Always and immediately

In which configuration does this happen:
-------------------------------------------------------------------
(Dem/DemGeneral/DemUserControlledWirSupport == TRUE)
AND
(
(Dem/DemConfigSet/DemEventParameter/DemEventAvailableInVariant == FALSE for the concerned event)
OR
(Dem/DemGeneral/DemAvailabilitySupport == DEM_EVENT_AVAILABILITY and concerned event is set unavailable by API Dem_SetEventAvailable)
)
Workaround:
-------------------------------------------------------------------
No workaround available.

Resolution:
-------------------------------------------------------------------
The described issue is corrected by modification of all affected work-products.
6.02.00
12.01.04, 14.04.00
ESCAN00096806
Rte_Core
Implementation
High
Issue in a released product
false
Wrong signal specific ComXf transformations in fan-out / postbuild scenario
What happens (symptoms):
-------------------------------------------------------------------
In a fan-out scenario with signal specific transformation or in postbuild scenario with variant specific transformation
only a single ComXf transformer is used although the transformation properties differ.

When does this happen:
-------------------------------------------------------------------
This happens during runtime

In which configuration does this happen:
-------------------------------------------------------------------
ComXf is used in fan-out or postbuild scenario
Signal or variant specific transformation properties
The order of the signals within the pdu differs in the variants
Workaround:
-------------------------------------------------------------------
No workaround available.

Resolution:
-------------------------------------------------------------------
The described issue is corrected by modification of all affected work-products.
1.08.00
1.17.00
ESCAN00097849
Diag_Asr4Dem
Implementation
High
Issue in a released product
false
Dem_GetEventEnableCondition returns E_OK for unavailable events
What happens (symptoms):
-------------------------------------------------------------------
API Dem_GetEventEnableCondition returns E_OK when called for an unavailable event. 

When does this happen:
-------------------------------------------------------------------
Always and immediately

In which configuration does this happen:
-------------------------------------------------------------------
(Dem/DemGeneral/DemEnableConditionSupport)
AND
(
(Dem/DemConfigSet/DemEventParameter/DemEventAvailableInVariant == FALSE for the concerned event)
OR
(Dem/DemGeneral/DemAvailabilitySupport == DEM_EVENT_AVAILABILITY and concerned event is set unavailable by API Dem_SetEventAvailable)
)
Workaround:
-------------------------------------------------------------------
No workaround available.

Resolution:
-------------------------------------------------------------------
The described issue is corrected by modification of all affected work-products.
6.02.00
14.04.00, 12.01.04
ESCAN00097699
Diag_Asr4Dem
Implementation
High
Issue in a released product
false
Dem_SetWIRStatus is processed and returns E_OK for unavailable events
What happens (symptoms):
-------------------------------------------------------------------
API Dem_SetWIRStatus is processed and returns E_OK when called for an unavailable event. 

When does this happen:
-------------------------------------------------------------------
Always and immediately

In which configuration does this happen:
-------------------------------------------------------------------
(Dem/DemGeneral/DemUserControlledWirSupport == TRUE)
AND
(
(Dem/DemConfigSet/DemEventParameter/DemEventAvailableInVariant == FALSE for the concerned event)
OR
(Dem/DemGeneral/DemAvailabilitySupport == DEM_EVENT_AVAILABILITY and concerned event is set unavailable by API Dem_SetEventAvailable)
)
Workaround:
-------------------------------------------------------------------
No workaround available.

Resolution:
-------------------------------------------------------------------
The described issue is corrected by modification of all affected work-products.
6.02.00
12.01.04, 14.04.00
ESCAN00097850
Diag_Asr4Dem
Implementation
High
Issue in a released product
false
Dem_GetEventAvailable returns AvailableStatus 'True' for ev
```

[Back to top](#_top)
