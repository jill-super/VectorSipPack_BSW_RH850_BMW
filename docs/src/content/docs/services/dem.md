---
title: "Diagnostic Event Manager"
description: "Diagnostic Event Manager — Fault memory, DTC status, debouncing and DTR/OBD interfaces.."
---

<div class="badge-row">

![origin](https://img.shields.io/badge/origin-Vector%20MICROSAR-blue)

![C](https://img.shields.io/badge/language-C-blue) ![AUTOSAR](https://img.shields.io/badge/AUTOSAR-4.x-green)

</div>

:::note[Vector MICROSAR]
This module is **Vector-provided** (proprietary MICROSAR code, DaVinci-generated where applicable). Do not edit by hand — configure it in DaVinci Configurator and regenerate. See the [SIP overview](../../sip/).
:::

## Purpose

Fault memory, DTC status, debouncing and DTR/OBD interfaces.

Source: [`BSW/Dem`](../../../../../BSW/Dem) — 1 C files, 186 headers.

## Key files

| File | Lines |
|---|---:|
| [`Dem_Cfg_Declarations.h`](../../../../../BSW/Dem/Dem_Cfg_Declarations.h) | 6824 |
| [`Dem_API_Implementation.h`](../../../../../BSW/Dem/Dem_API_Implementation.h) | 5531 |
| [`Dem_Cfg_Definitions.h`](../../../../../BSW/Dem/Dem_Cfg_Definitions.h) | 5298 |
| [`Dem_Event_Implementation.h`](../../../../../BSW/Dem/Dem_Event_Implementation.h) | 3238 |
| [`Dem_DTC_Implementation.h`](../../../../../BSW/Dem/Dem_DTC_Implementation.h) | 3032 |
| [`Dem_DcmAPI_Implementation.h`](../../../../../BSW/Dem/Dem_DcmAPI_Implementation.h) | 2631 |
| [`Dem_API_Interface.h`](../../../../../BSW/Dem/Dem_API_Interface.h) | 2602 |
| [`Dem_Data_Interface.h`](../../../../../BSW/Dem/Dem_Data_Interface.h) | 2268 |
| [`Dem_Dcm_Implementation.h`](../../../../../BSW/Dem/Dem_Dcm_Implementation.h) | 2235 |
| [`Dem_DTC_Interface.h`](../../../../../BSW/Dem/Dem_DTC_Interface.h) | 2119 |
| [`Dem_Data_Implementation.h`](../../../../../BSW/Dem/Dem_Data_Implementation.h) | 2044 |
| [`Dem_J1939DcmAPI_Implementation.h`](../../../../../BSW/Dem/Dem_J1939DcmAPI_Implementation.h) | 1833 |
| [`Dem_Event_Interface.h`](../../../../../BSW/Dem/Dem_Event_Interface.h) | 1771 |
| [`Dem_Esm_Implementation.h`](../../../../../BSW/Dem/Dem_Esm_Implementation.h) | 1715 |
| [`Dem_FilterData_Implementation.h`](../../../../../BSW/Dem/Dem_FilterData_Implementation.h) | 1698 |
| [`Dem_DcmAPI_Interface.h`](../../../../../BSW/Dem/Dem_DcmAPI_Interface.h) | 1698 |
| [`Dem_Satellite_Implementation.h`](../../../../../BSW/Dem/Dem_Satellite_Implementation.h) | 1630 |
| [`Dem_Mem_Interface.h`](../../../../../BSW/Dem/Dem_Mem_Interface.h) | 1625 |
| [`Dem_OperationCycle_Implementation.h`](../../../../../BSW/Dem/Dem_OperationCycle_Implementation.h) | 1615 |
| [`Dem_MemoryEntry_Implementation.h`](../../../../../BSW/Dem/Dem_MemoryEntry_Implementation.h) | 1563 |
| [`Dem_MemoryEntry_Interface.h`](../../../../../BSW/Dem/Dem_MemoryEntry_Interface.h) | 1552 |
| [`Dem.c`](../../../../../BSW/Dem/Dem.c) | 1413 |
| [`Dem_Mem_Implementation.h`](../../../../../BSW/Dem/Dem_Mem_Implementation.h) | 1408 |
| [`Dem_ClientAccess_Implementation.h`](../../../../../BSW/Dem/Dem_ClientAccess_Implementation.h) | 1375 |
| [`Dem_FilterData_Interface.h`](../../../../../BSW/Dem/Dem_FilterData_Interface.h) | 1368 |

_162 further C/H files in [`BSW/Dem`](../../../../../BSW/Dem)._ 


## Public API

Anchors found in the headers (see the Technical Reference for signatures):

- `Dem_Init()`
- `Dem_GetVersionInfo()`
- `Dem_MainFunction()`
- `Dem_Cbk_DtcStatusChanged()`
- `Dem_Cbk_DtcStatusChanged_Internal()`
- `Dem_Cbk_EventDataChanged()`
- `Dem_Cbk_InitMonitorForEvent()`
- `Dem_Cbk_InitMonitorForFunction()`
- `Dem_Cbk_StatusChanged()`
- `Dem_Cfg_EventAvailableByVariant()`
- `Dem_Cfg_EventCbkClearAllowed()`
- `Dem_Cfg_EventCbkData()`

Typical usage:

```c
/* Diagnostic Event Manager is initialised by EcuM during startup,
   using DaVinci-generated post-build configuration. */
Dem_Init(&Dem_Config); /* generated in GenData */
```

## Configuration

DaVinci-generated files (`Applications/*/Appl/GenData`):

- [`DemMaster_0_MemMap.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/Components/DemMaster_0_MemMap.h)
- [`DemSatellite_0_MemMap.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/Components/DemSatellite_0_MemMap.h)
- [`Dem_AdditionalIncludeCfg.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/Dem_AdditionalIncludeCfg.h)
- [`Dem_Cfg.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/Dem_Cfg.h)
- [`Dem_Lcfg.c`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/Dem_Lcfg.c)
- [`Dem_Lcfg.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/Dem_Lcfg.h)
- [`Dem_PBcfg.c`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/Dem_PBcfg.c)
- [`Dem_PBcfg.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/Dem_PBcfg.h)
- [`Dem_Swc.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/Dem_Swc.h)
- [`Dem_Swc_Types.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/Dem_Swc_Types.h)

## Dependencies

_No external intra-SIP includes detected (self-contained or config-driven)._

## Further reading

- [Converted Technical Reference](../../general/technical-references/technical-reference-dem/)
- Sources in the repository: [`BSW/Dem`](../../../../../BSW/Dem)
- BSWMD artefacts: [`BSWMD/Dem`](../../../../../BSWMD/Dem)

[Back to top](#_top)
