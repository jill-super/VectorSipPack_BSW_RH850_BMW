# BSW RH850 BMW

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](./LICENSE)
[![AUTOSAR](https://img.shields.io/badge/AUTOSAR-4.x-green)](./docs/src/content/docs/layers/index.md)
[![Language](https://img.shields.io/badge/language-C-blue)](#repository-structure)
[![Platform](https://img.shields.io/badge/platform-Renesas_RH850-orange)](#prerequisites)

Automotive Basic Software (BSW) for the **Renesas RH850** microcontroller, tailored for **BMW** requirements:
a **Vector MICROSAR SIP** (delivery `CBD1700369_D04`, SIP `19.06.14`) plus BMW application extensions —
core AUTOSAR services, OS abstraction, diagnostic event management, NVRAM management, the FlexRay
protocol stack, and the DaVinci-based configuration tooling.

📖 **Documentation:** interactive Astro Starlight site in [`docs/`](./docs/)
(builds to `docs/dist/` for GitHub Pages), with all 70 Vector PDFs converted to
searchable Markdown — start at [`docs/src/content/docs/index.mdx`](./docs/src/content/docs/index.mdx).

<details>
<summary><strong>Table of contents</strong></summary>

- [Features](#features)
- [Repository structure](#repository-structure)
- [AUTOSAR layers & module origins](#autosar-layers--module-origins)
- [Prerequisites](#prerequisites)
- [Build](#build)
- [Documentation](#documentation)
- [Vector SIP](#vector-sip)
- [License](#license)

</details>

## Features

- **FlexRay Protocol Support:** FlexRay communication stack and interface modules (`BSW/FrIf`),
  service integration over FlexRay, and configuration files for FlexRay PDUs and signals.
- **NVRAM Manager:** Non-volatile data administration for EEPROM/Flash
  ([BSW/NvM/NvM.c](./BSW/NvM/NvM.c)).
- **OS Abstraction:** MICROSAR OS Gen7 — tasks, alarms, schedule tables, memory protection, IOC
  ([BSW/Os](./BSW/Os)).
- **Diagnostic Event Management:** AUTOSAR DEM with fault memory and DTR/OBD interfaces
  ([BSW/Dem](./BSW/Dem)).
- **E2E Communication:** End-to-end protection profiles ([BSW/E2E](./BSW/E2E)).
- **Security:** Csm/CryIf/RH850-ICUS crypto stack plus SecOC ([BSW/Csm](./BSW/Csm)).
- **OEM Extensions:** BMW-specific applications — BLU, BM, BTLD, EPS
  ([Applications/OEM_Extensions](./Applications/OEM_Extensions)).
- **Configuration tooling:** DaVinci Configurator, RTE/E2EPW/MSSV generators, HexView, RteAnalyzer.
- **Converted docs:** all 70 Vector PDFs converted to searchable Markdown under
  [`docs/src/content/docs/general/`](./docs/src/content/docs/general/).

## Repository structure

```text
BSW/                    # Vector MICROSAR BSW modules (FrIf, NvM, Os, Dem, E2E, Com, …)
BSWMD/                  # AUTOSAR module descriptions (ARXML) per BSW module
Applications/
  OEM_Extensions/       # BMW custom applications: BLU, BM, BTLD, EPS, SWE_CFG, _Common
  MakeSupport/          # GNU Make + Cygwin build tooling
Doc/                    # Vector documentation (PDFs) — converted under docs/.../general/
  TechnicalReferences/  # Per-module references  →  general/technical-references/
  ApplicationNotes/     →  general/application-notes/
  DeliveryInformation/  →  general/delivery-information/ (+ sip/)
  ReleaseNotes/         →  general/release-notes/
  SafetyManuals/        →  general/safety-manual/
  UserManuals/          →  general/user-manuals/
DaVinciConfigurator/    # Vector configuration tool
Generators/             # RTE, E2EPW, MSSV, McDataConv, PAGe, Diag converters
IntegrationFiles/       # BMW integration patches (_patchedByVector_*)
ThirdParty/             # Renesas MCAL + Vector integration helper
Misc/                   # HexView, RteAnalyzer, MemMap/Compiler abstraction, diagnostics data
docs/                   # Astro Starlight documentation site sources
SipLicense.lic          # Vector SIP license parameters (delivery CBD1700369_D04)
BetaDisclaimer.txt      # Vector beta disclaimer
```

## AUTOSAR layers & module origins

Every module page under [`docs/src/content/docs/`](./docs/src/content/docs/) states its origin. Summary:

| Layer | Modules | Origin |
|---|---|---|
| Application Software | BLU, BM, BTLD, EPS, SWE_CFG, IntegrationFiles | BMW custom |
| Services | BswM, Cal, Crc, CryIf, Cry_30_Rh850Icus, Crypto_30_CryWrapper, Csm, Dcm, Dem, Det, E2E, EcuM, Fee_30_SmallSector, NvM, Os, WdgM | Vector MICROSAR |
| Communication | Com, ComM, E2eXf, Fr, FrIf, FrSM, FrTrcv_30_Tja1082, FrXcp, IpduM, PduR, SecOC, Tp_Iso10681, Xcp | Vector MICROSAR |
| ECU Abstraction | IoHwAb, MemIf, WdgIf | Vector MICROSAR |
| MCAL | Mcal_Rh850P1x | Renesas third-party, Vector-integrated |
| CDD | Flash/FBL wrapper | Vector-provided |
| Shared | _Common, VStdLib, SipVersionCheck | Vector-provided |
| Tooling | DaVinci, Generators, HexView, RteAnalyzer, BSWMD | Vector tooling |

> **Rule of thumb:** `BSW/`, `BSWMD/`, `Doc/`, `DaVinciConfigurator/`, `Generators/` are the
> Vector SIP (proprietary — configure in DaVinci, do not hand-edit).
> `Applications/OEM_Extensions/`, `IntegrationFiles/` are BMW custom code.

## Prerequisites

- **Hardware:** Renesas RH850 P1M (`R7F701363EAFP`)
- **Compiler:** Green Hills MULTI 6.1.6 (V2015.1.7)
- **Config tooling:** DaVinci Configurator (see the [SIP delivery](./docs/src/content/docs/sip/delivery.md) page)
- **Docs site tooling:** Node.js 20+ and npm (only for editing `docs/`)

## Build

This repository uses its existing Make/batch-based build system (no CI workflows) —
each application ships its own Makefiles with `m.bat`/`b.bat` wrappers:

1. Open the application (`.dpa`) in DaVinci Configurator and generate (`GenData`).
2. Run the generator batch files required by the application
   (e.g. [`Generators/PAGe/Bat/`](./Generators/PAGe/Bat/) `GenPAGe_*.bat`, RTE/MSSV steps).
3. Build with the Green Hills toolchain via the application Makefile, e.g.
   [`Applications/OEM_Extensions/BTLD/Appl/Makefile`](./Applications/OEM_Extensions/BTLD/Appl/Makefile)
   using [`m.bat`](./Applications/OEM_Extensions/BTLD/Appl/m.bat) / [`b.bat`](./Applications/OEM_Extensions/BTLD/Appl/b.bat).

BSW modules build through their per-module `mak/` fragments (e.g. `BSW/FrIf/mak/FrIf_rules.mak`).

## Documentation

- 🌐 **Docs site sources:** [`docs/`](./docs/) (Astro Starlight) — preview and publish:
  `cd docs && npm install && npm run dev` (preview) / `npm run build` (`dist/` output for Pages).
- 📚 **Converted Vector docs:** [`docs/src/content/docs/general/`](./docs/src/content/docs/general/)
  — all 70 PDFs (Technical References, Application Notes, manuals, delivery info) as Markdown.
- 🧩 **SIP overview:** [`docs/src/content/docs/sip/`](./docs/src/content/docs/sip/)
- 🗂️ **Layer overview:** [`docs/src/content/docs/layers/`](./docs/src/content/docs/layers/)

All documentation links are relative paths, so they resolve in any checkout without
owner-specific URLs.

## Vector SIP

This repository **is** Vector SIP delivery `CBD1700369_D04` (SIP `19.06.14`) for
MSR BAC 4.x (BMW SLP4). Details, version pinning (`v_ver.h`) and per-module
SIP pages: [`docs/src/content/docs/sip/`](./docs/src/content/docs/sip/).

## License

This repository's own content (documentation, scripts, integration examples) is under the
**MIT License** — see [LICENSE](./LICENSE).

> **Note:** Vector MICROSAR modules and Renesas/third-party artefacts keep their own terms
> (see [`SipLicense.lic`](./SipLicense.lic), [`BetaDisclaimer.txt`](./BetaDisclaimer.txt)
> and per-file headers). The MIT license does not override those terms.
