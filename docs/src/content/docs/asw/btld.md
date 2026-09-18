---
title: "BTLD Application (Bootloader)"
description: "BMW bootloader application with full generated BSW configuration (GenData)."
sidebar:
  order: 10
---

<div class="badge-row">

![origin](https://img.shields.io/badge/origin-BMW%20custom-green)

</div>

:::note[BMW custom]
In-house BMW application code — **not** part of the Vector MICROSAR SIP. BMW AG copyright applies.
:::

## Purpose

BMW bootloader application with full generated BSW configuration (GenData).

Source: [`Applications/OEM_Extensions/BTLD`](../../../../../Applications/OEM_Extensions/BTLD) — 129 C files, 257 headers, 231 ARXML files.

## Layout

| Entry | |
|---|---|
| [`Appl`](../../../../../Applications/OEM_Extensions/BTLD/Appl) | |
| [`BTLD.dpa`](../../../../../Applications/OEM_Extensions/BTLD/BTLD.dpa) | |
| [`BTLD.viskj.dcusr`](../../../../../Applications/OEM_Extensions/BTLD/BTLD.viskj.dcusr) | |
| [`BTLD.viskj.silent.dcusr`](../../../../../Applications/OEM_Extensions/BTLD/BTLD.viskj.silent.dcusr) | |
| [`Backups`](../../../../../Applications/OEM_Extensions/BTLD/Backups) | |
| [`Config`](../../../../../Applications/OEM_Extensions/BTLD/Config) | |
| [`Log`](../../../../../Applications/OEM_Extensions/BTLD/Log) | |

The BTLD holds the fully generated BSW configuration (`Appl/GenData`, ~262 files): ComStack, Os, Dcm/Dem, FrIf/FrTp, EcuM/BswM and more. Treat it as generated output of DaVinci Configurator + MSSV, not as hand-written code.

[Back to top](#_top)
