---
title: "Flash Driver Wrapper / FBL"
description: "Flash Driver Wrapper / FBL — Vector FBL flash wrapper (fbl_flio, flashdrv) for RH850 plus bootloader build scripts.."
---

<div class="badge-row">

![origin](https://img.shields.io/badge/origin-Vector%20MICROSAR-blue)

![C](https://img.shields.io/badge/language-C-blue) ![AUTOSAR](https://img.shields.io/badge/AUTOSAR-4.x-green)

</div>

:::note[Vector MICROSAR]
This module is **Vector-provided** (proprietary MICROSAR code, DaVinci-generated where applicable). Do not edit by hand — configure it in DaVinci Configurator and regenerate. See the [SIP overview](../../sip/).
:::

## Purpose

Vector FBL flash wrapper (fbl_flio, flashdrv) for RH850 plus bootloader build scripts.

Source: [`BSW/Flash`](../../../../../BSW/Flash) — 9 C files, 23 headers.

## Key files

| File | Lines |
|---|---:|
| [`r_fcl_hw_access.c`](../../../../../BSW/Flash/FlashLib/r_fcl_hw_access.c) | 2694 |
| [`r_fcl_user_if.c`](../../../../../BSW/Flash/FlashLib/r_fcl_user_if.c) | 1020 |
| [`v_def.h`](../../../../../BSW/Flash/v_def.h) | 962 |
| [`flashdrv.c`](../../../../../BSW/Flash/flashdrv.c) | 764 |
| [`fbl_sfr.h`](../../../../../BSW/Flash/fbl_sfr.h) | 623 |
| [`fbl_flio.c`](../../../../../BSW/Flash/fbl_flio.c) | 482 |
| [`flashrom.c`](../../../../../BSW/Flash/flashrom.c) | 440 |
| [`fbl_def.h`](../../../../../BSW/Flash/fbl_def.h) | 328 |
| [`r_fcl_global.h`](../../../../../BSW/Flash/FlashLib/r_fcl_global.h) | 302 |
| [`r_fcl_env.h`](../../../../../BSW/Flash/FlashLib/r_fcl_env.h) | 232 |
| [`flashdrv.h`](../../../../../BSW/Flash/flashdrv.h) | 209 |
| [`fbl_apfb.c`](../../../../../BSW/Flash/fbl_apfb.c) | 202 |
| [`_fbl_apfb.c`](../../../../../BSW/Flash/Template/_fbl_apfb.c) | 202 |
| [`v_cfg_fbl.h`](../../../../../BSW/Flash/v_cfg_fbl.h) | 198 |
| [`r_fcl_types.h`](../../../../../BSW/Flash/FlashLib/r_fcl_types.h) | 177 |
| [`flash_if.c`](../../../../../BSW/Flash/flash_if.c) | 158 |
| [`fbl_apfb.h`](../../../../../BSW/Flash/fbl_apfb.h) | 131 |
| [`_fbl_apfb.h`](../../../../../BSW/Flash/Template/_fbl_apfb.h) | 131 |
| [`flash.h`](../../../../../BSW/Flash/flash.h) | 127 |
| [`fbl_assert.h`](../../../../../BSW/Flash/fbl_assert.h) | 119 |
| [`r_typedefs.h`](../../../../../BSW/Flash/FlashLib/r_typedefs.h) | 104 |
| [`iotypes.h`](../../../../../BSW/Flash/iotypes.h) | 101 |
| [`r_fcl.h`](../../../../../BSW/Flash/FlashLib/r_fcl.h) | 98 |
| [`fbl_inc.h`](../../../../../BSW/Flash/fbl_inc.h) | 96 |
| [`fbl_flio.h`](../../../../../BSW/Flash/fbl_flio.h) | 86 |

_7 further C/H files in [`BSW/Flash`](../../../../../BSW/Flash)._ 


## Public API

Anchors found in the headers (see the Technical Reference for signatures):

- `Flash_GlobalRestore()`
- `Flash_GlobalSuspend()`

Typical usage:

```c
/* Flash Driver Wrapper / FBL is initialised by EcuM during startup,
   using DaVinci-generated post-build configuration. */
Flash_GlobalRestore(&Flash_Config); /* generated in GenData */
```

## Configuration

_No generated `GenData` files matched this module prefix in `Applications/`._

## Dependencies

`MemMap.h`, `fbl_inc.h`, `memmap.h`, `v_cfg.h`, `v_def.h`, `fbl_def.h`, `fbl_wd.h`, `Std_Types.h`

## Further reading

- Sources in the repository: [`BSW/Flash`](../../../../../BSW/Flash)
- BSWMD artefacts: _none shipped for this module (see [`BSWMD/`](../../../../../BSWMD))._

[Back to top](#_top)
