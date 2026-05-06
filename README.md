# PGM P02S BIOS raw decompiler exports

This directory is a standalone copy of the raw Ghidra decompiler exports for the IGS PGM P02S BIOS.

It contains two related programs:

- `pgm_p02s_*` — the main Motorola 68000 BIOS, analyzed from the word-swapped BIOS ROM `pgm_p02s.u20.swab`.
- `pgm_bios_z80_*` — the embedded Z80 sound driver extracted from the BIOS ROM and analyzed separately as `z80:LE:16:default`.

These files are **reverse-engineering reference sources**, not a clean-room rewrite and not currently intended to compile as-is. Function bodies are raw Ghidra decompiler output; readability improvements should come from improving symbols, types, prototypes, structs, labels, and storage in Ghidra, then re-exporting.

## File layout

### Main 68000 BIOS

- `pgm_p02s_raw_decompiled.c` — raw decompiled 68000 function bodies and generated RAM/BSS definitions.
- `pgm_p02s_raw_types.h` — generated typedefs and structure declarations.
- `pgm_p02s_raw_functions.h` — generated function forward declarations.
- `pgm_p02s_raw_globals.h` — generated global declarations.
- `pgm_p02s_raw_initialized_globals.c` — generated initialized ROM/global data.

### Embedded Z80 sound driver

- `pgm_bios_z80_raw_decompiled.c` — raw decompiled Z80 function bodies and generated RAM/BSS definitions.
- `pgm_bios_z80_raw_types.h` — generated typedefs and structure declarations.
- `pgm_bios_z80_raw_functions.h` — generated function forward declarations.
- `pgm_bios_z80_raw_globals.h` — generated global declarations.
- `pgm_bios_z80_raw_initialized_globals.c` — generated initialized ROM/global data.

## Provenance

Copied from the Arcade-IGSPGM_MiSTer reconstruction tree:

- `reconstruction/p02s_bios_raw/`
- `reconstruction/p02s_z80_raw/`

Ghidra remains the source of truth for names, data types, function signatures, custom register storage, globals, and comments.

## Notes

- The original P02S BIOS ROM SHA256 was recorded as:
  `289939053063e5492368ab57316c9dee2d5a52ad445e97d642a8e0060dd9a4ed`
- The extracted Z80 driver SHA256 was recorded as:
  `22f8ba25a0a341000726f3ebd26e4618782a2c3bf77859a2fa3fc5042ffc9252`
- The Z80 export currently has no `FUN_`, `func_0x`, `DAT_ram_`, `param_`, `in_`, or `extraout` placeholders in the raw C export.
