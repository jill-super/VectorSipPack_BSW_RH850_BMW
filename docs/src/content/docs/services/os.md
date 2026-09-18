---
title: "Operating System (MICROSAR OS Gen7)"
description: "Operating System (MICROSAR OS Gen7) — AUTOSAR multi-core OS: tasks, alarms, schedule tables, memory protection, IOC.."
---

<div class="badge-row">

![origin](https://img.shields.io/badge/origin-Vector%20MICROSAR-blue)

![C](https://img.shields.io/badge/language-C-blue) ![AUTOSAR](https://img.shields.io/badge/AUTOSAR-4.x-green)

</div>

:::note[Vector MICROSAR]
This module is **Vector-provided** (proprietary MICROSAR code, DaVinci-generated where applicable). Do not edit by hand — configure it in DaVinci Configurator and regenerate. See the [SIP overview](../../sip/).
:::

## Purpose

AUTOSAR multi-core OS: tasks, alarms, schedule tables, memory protection, IOC.

Source: [`BSW/Os`](../../../../../BSW/Os) — 44 C files, 176 headers.

## Key files

| File | Lines |
|---|---:|
| [`Os_Trap.c`](../../../../../BSW/Os/Os_Trap.c) | 13891 |
| [`Os.h`](../../../../../BSW/Os/Os.h) | 5317 |
| [`Os_Ioc.c`](../../../../../BSW/Os/Os_Ioc.c) | 4371 |
| [`Os_ScheduleTable.c`](../../../../../BSW/Os/Os_ScheduleTable.c) | 3924 |
| [`Os_Core.c`](../../../../../BSW/Os/Os_Core.c) | 3494 |
| [`Os_XSignal.c`](../../../../../BSW/Os/Os_XSignal.c) | 3088 |
| [`Os_ErrorInt.h`](../../../../../BSW/Os/Os_ErrorInt.h) | 3055 |
| [`Os_Error.h`](../../../../../BSW/Os/Os_Error.h) | 2439 |
| [`Os_XSignalInt.h`](../../../../../BSW/Os/Os_XSignalInt.h) | 2320 |
| [`Os_CoreInt.h`](../../../../../BSW/Os/Os_CoreInt.h) | 2185 |
| [`Os_ServiceFunction.c`](../../../../../BSW/Os/Os_ServiceFunction.c) | 2009 |
| [`Os_Trace.h`](../../../../../BSW/Os/Os_Trace.h) | 1751 |
| [`Os_Application.c`](../../../../../BSW/Os/Os_Application.c) | 1688 |
| [`Os_Spinlock.c`](../../../../../BSW/Os/Os_Spinlock.c) | 1639 |
| [`Os_Interrupt.c`](../../../../../BSW/Os/Os_Interrupt.c) | 1632 |
| [`Os_Task.c`](../../../../../BSW/Os/Os_Task.c) | 1620 |
| [`Os_IocInt.h`](../../../../../BSW/Os/Os_IocInt.h) | 1569 |
| [`Os_Alarm.c`](../../../../../BSW/Os/Os_Alarm.c) | 1550 |
| [`Os_Counter.c`](../../../../../BSW/Os/Os_Counter.c) | 1462 |
| [`Os_TaskInt.h`](../../../../../BSW/Os/Os_TaskInt.h) | 1443 |
| [`Os_Resource.c`](../../../../../BSW/Os/Os_Resource.c) | 1367 |
| [`Os_ThreadInt.h`](../../../../../BSW/Os/Os_ThreadInt.h) | 1317 |
| [`Os_Error.c`](../../../../../BSW/Os/Os_Error.c) | 1309 |
| [`Os_TimerInt.h`](../../../../../BSW/Os/Os_TimerInt.h) | 1225 |
| [`Os_Stack.c`](../../../../../BSW/Os/Os_Stack.c) | 1219 |

_195 further C/H files in [`BSW/Os`](../../../../../BSW/Os)._ 


## Public API

Anchors found in the headers (see the Technical Reference for signatures):

- `Os_Init()`
- `Os_GetVersionInfo()`
- `Os_AlarmActionActivateTask()`
- `Os_AlarmActionCallback()`
- `Os_AlarmActionIncrementCounter()`
- `Os_AlarmActionSetEvent()`
- `Os_AlarmCallbackType()`
- `Os_AlarmCancelAlarmLocal()`
- `Os_AlarmCheckId()`
- `Os_AlarmGetAccessingApplications()`
- `Os_AlarmGetAlarmLocal()`
- `Os_AlarmGetApplication()`

Typical usage:

```c
/* Operating System (MICROSAR OS Gen7) is initialised by EcuM during startup,
   using DaVinci-generated post-build configuration. */
Os_Init(&Os_Config); /* generated in GenData */
```

## Configuration

DaVinci-generated files (`Applications/*/Appl/GenData`):

- [`Os_OsCore_CORE0_swc_MemMap.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/Components/Os_OsCore_CORE0_swc_MemMap.h)
- [`Os_AccessCheck_Cfg.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/Os_AccessCheck_Cfg.h)
- [`Os_AccessCheck_Lcfg.c`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/Os_AccessCheck_Lcfg.c)
- [`Os_AccessCheck_Lcfg.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/Os_AccessCheck_Lcfg.h)
- [`Os_Alarm_Lcfg.c`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/Os_Alarm_Lcfg.c)
- [`Os_Alarm_Lcfg.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/Os_Alarm_Lcfg.h)
- [`Os_Application_Cfg.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/Os_Application_Cfg.h)
- [`Os_Application_Lcfg.c`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/Os_Application_Lcfg.c)
- [`Os_Application_Lcfg.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/Os_Application_Lcfg.h)
- [`Os_Barrier_Cfg.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/Os_Barrier_Cfg.h)

## Dependencies

`Std_Types.h`, `Ioc.h`

## Further reading

- [Converted Technical Reference](../../general/technical-references/technical-reference-os/)
- Sources in the repository: [`BSW/Os`](../../../../../BSW/Os)
- BSWMD artefacts: [`BSWMD/Os`](../../../../../BSWMD/Os)

[Back to top](#_top)
