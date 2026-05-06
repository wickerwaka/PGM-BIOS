/*
 * Initialized ROM global definitions generated from Ghidra for pgm_bios_z80driver.bin
 */

#include "pgm_bios_z80_raw_types.h"
#include "pgm_bios_z80_raw_globals.h"

/* ROM constants / initialized data */
/* ram:0006 ram size=0x4 */ const PgmZ80CommandMailbox z80_command_mailbox = {.bCommand = 0x00, .bParam = 0x00, .wPackedSoundId = 0x0000};
/* ram:0040 ram size=0x2 */ const ushort z80_wave_table_ptr = 0x5000;
/* ram:0042 ram size=0x2 */ const ushort z80_wave_count_mailbox = 0x0000;
/* ram:0046 ram size=0x2 */ const ushort z80_command_stream_refill_count = 0x0000;
/* ram:0048 ram size=0x2 */ const ushort z80_command_stream_dispatch_count = 0x0000;
/* ram:0050 ram size=0x2 */ const ushort z80_midi_index_table_ptr = 0x0070;
/* ram:0052 ram size=0x2 */ const ushort z80_midi_count_mailbox = 0x0000;
/* ram:0060 ram size=0x2 */ const ushort z80_init_work_ptr_0060 = 0x4000;
/* ram:0062 ram size=0x2 */ const ushort z80_init_work_ptr_0062 = 0x4A00;
/* ram:328e ram size=0x4 */ const byte z80_zero_dword_constant[4] = "";
/* ram:3296 ram size=0xa */ const char z80_diag_dsg_error_string[10] = {'D', 's', 'g', ' ', 'E', 'r', 'r', 'o', 'r', ' '};
/* ram:32af ram size=0x4 */ const byte z80_initial_voice_mask_b[4] = "";
/* ram:32b3 ram size=0x4 */ const byte z80_initial_voice_mask_a[4] = "";
/* ram:32b7 ram size=0x4 */ const byte z80_voice_bit_table_base[4] = {0x01, 0x00, 0x00, 0x00};
/* ram:32bb ram size=0x4 */ const byte z80_soundchip_reset_work_seed[4] = {0x44, 0xAC, 0x00, 0x00};
/* ram:32d5 ram size=0x10 */ const byte z80_voice_pan_table[16] = {0x0F, 0x1F, 0x2F, 0x3F, 0x4F, 0x5F, 0x6F, 0x7F, 0x8F, 0x9F, 0xAF, 0xBF, 
  0xCF, 0xDF, 0xEF, 0xFF};
/* ram:32e5 ram size=0x40 */ const ushort z80_wave_frequency_table[32] = {0x0000, 0x7FF0, 0x8FF0, 0x9800, 0x9FF0, 0xA400, 0xA800, 0xAC00, 0xAFF0, 0xB200, 0xB400, 0xB600, 
  0xB800, 0xBA00, 0xBC00, 0xBE00, 0xBFF0, 0xC100, 0xC200, 0xC300, 0xC400, 0xC500, 0xC600, 0xC700, 
  0xC800, 0xC900, 0xCA00, 0xCB00, 0xCC00, 0xCD00, 0xCE00, 0xCF00};

/* ROM labels without a defined data item */
/* ram:0008 ram synthesized size=0x1 */ const undefined1 RST1 = 0x00;
/* ram:0010 ram synthesized size=0x1 */ const undefined1 RST2 = 0x00;
/* ram:0011 ram synthesized size=0x1 */ const undefined1 z80_diag_char_output_latch = 0x00;
/* ram:0018 ram synthesized size=0x1 */ const undefined1 RST3 = 0x00;
/* ram:0020 ram synthesized size=0x1 */ const undefined1 RST4 = 0x00;
/* ram:0028 ram synthesized size=0x1 */ const undefined1 RST5 = 0x00;
/* ram:0030 ram synthesized size=0x1 */ const undefined1 RST6 = 0x00;
/* ram:0070 ram synthesized size=0x1 */ const undefined1 z80_midi_index_table = 0x00;
/* ram:32a1 ram synthesized size=0x1 */ const undefined1 z80_diag_chiprev_error_string = 0x45;
/* ram:32bf ram synthesized size=0x1 */ const undefined1 z80_midi_event_handler_table = 0x85;

