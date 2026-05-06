#ifndef PGM_BIOS_Z80_RAW_GLOBALS_H
#define PGM_BIOS_Z80_RAW_GLOBALS_H

#include "pgm_bios_z80_raw_types.h"

/* Generated global declarations from Ghidra labels/data. */

/* ROM constants / initialized data */
/* ram:0006 ram size=0x4 */ extern const PgmZ80CommandMailbox z80_command_mailbox;
/* ram:0040 ram size=0x2 */ extern const ushort z80_wave_table_ptr;
/* ram:0042 ram size=0x2 */ extern const ushort z80_wave_count_mailbox;
/* ram:0046 ram size=0x2 */ extern const ushort z80_command_stream_refill_count;
/* ram:0048 ram size=0x2 */ extern const ushort z80_command_stream_dispatch_count;
/* ram:0050 ram size=0x2 */ extern const ushort z80_midi_index_table_ptr;
/* ram:0052 ram size=0x2 */ extern const ushort z80_midi_count_mailbox;
/* ram:0060 ram size=0x2 */ extern const ushort z80_init_work_ptr_0060;
/* ram:0062 ram size=0x2 */ extern const ushort z80_init_work_ptr_0062;
/* ram:328e ram size=0x4 */ extern const byte z80_zero_dword_constant[4];
/* ram:3296 ram size=0xa */ extern const char z80_diag_dsg_error_string[10];
/* ram:32af ram size=0x4 */ extern const byte z80_initial_voice_mask_b[4];
/* ram:32b3 ram size=0x4 */ extern const byte z80_initial_voice_mask_a[4];
/* ram:32b7 ram size=0x4 */ extern const byte z80_voice_bit_table_base[4];
/* ram:32bb ram size=0x4 */ extern const byte z80_soundchip_reset_work_seed[4];
/* ram:32d5 ram size=0x10 */ extern const byte z80_voice_pan_table[16];
/* ram:32e5 ram size=0x40 */ extern const ushort z80_wave_frequency_table[32];

/* ROM labels without a defined data item */
/* ram:0008 ram synthesized size=0x1 */ extern const undefined1 RST1;
/* ram:0010 ram synthesized size=0x1 */ extern const undefined1 RST2;
/* ram:0011 ram synthesized size=0x1 */ extern const undefined1 z80_diag_char_output_latch;
/* ram:0018 ram synthesized size=0x1 */ extern const undefined1 RST3;
/* ram:0020 ram synthesized size=0x1 */ extern const undefined1 RST4;
/* ram:0028 ram synthesized size=0x1 */ extern const undefined1 RST5;
/* ram:0030 ram synthesized size=0x1 */ extern const undefined1 RST6;
/* ram:0070 ram synthesized size=0x1 */ extern const undefined1 z80_midi_index_table;
/* ram:32a1 ram synthesized size=0x1 */ extern const undefined1 z80_diag_chiprev_error_string;
/* ram:32bf ram synthesized size=0x1 */ extern const undefined1 z80_midi_event_handler_table;

/* Work RAM / BSS objects */
/* ram:3801 Z80_RUNTIME_RAM size=0xe */ extern PgmZ80CommandStreamState z80_primary_command_stream;
/* ram:380f Z80_RUNTIME_RAM size=0x40 */ extern byte z80_primary_command_buffer[64];
/* ram:394f Z80_RUNTIME_RAM size=0x1 */ extern byte z80_soundchip_latch_high_nibble;
/* ram:3950 Z80_RUNTIME_RAM size=0x1 */ extern byte z80_soundchip_latch_low_nibble;
/* ram:3951 Z80_RUNTIME_RAM size=0x1 */ extern byte z80_soundchip_status_nibble;
/* ram:3952 Z80_RUNTIME_RAM size=0x1 */ extern byte z80_soundchip_voice_status;
/* ram:3953 Z80_RUNTIME_RAM size=0x4 */ extern byte z80_voice_start_mask_work[4];
/* ram:3957 Z80_RUNTIME_RAM size=0x4 */ extern byte z80_voice_active_mask_a[4];
/* ram:395b Z80_RUNTIME_RAM size=0x4 */ extern byte z80_voice_active_mask_b[4];
/* ram:395f Z80_RUNTIME_RAM size=0x1 */ extern byte z80_irq_voice_index;
/* ram:3960 Z80_RUNTIME_RAM size=0x2 */ extern undefined *z80_voice_slot_cursor;
/* ram:3962 Z80_RUNTIME_RAM size=0x1 */ extern byte z80_voice_slot_index;
/* ram:3963 Z80_RUNTIME_RAM size=0x1 */ extern byte z80_irq_voice_command_flags;
/* ram:3964 Z80_RUNTIME_RAM size=0x2 */ extern ushort z80_soundchip_init_word0;
/* ram:3966 Z80_RUNTIME_RAM size=0x2 */ extern ushort z80_soundchip_init_word1;
/* ram:3968 Z80_RUNTIME_RAM size=0x2 */ extern ushort z80_soundchip_init_word2;
/* ram:396a Z80_RUNTIME_RAM size=0x4 */ extern byte z80_soundchip_register_work[4];
/* ram:396e Z80_RUNTIME_RAM size=0x120 */ extern PgmZ80VoiceSlotState z80_voice_slots[32];
/* ram:3a8e Z80_RUNTIME_RAM size=0x1 */ extern byte z80_midi_finished_subvoice_count;
/* ram:3a8f Z80_RUNTIME_RAM size=0x1 */ extern byte z80_midi_event_dispatch_index;
/* ram:3a90 Z80_RUNTIME_RAM size=0x1 */ extern byte z80_midi_current_subvoice_count;
/* ram:3a91 Z80_RUNTIME_RAM size=0x1 */ extern byte z80_midi_channel_index;
/* ram:3a92 Z80_RUNTIME_RAM size=0x1 */ extern byte z80_midi_subvoice_index;
/* ram:3aa0 Z80_RUNTIME_RAM size=0x2 */ extern undefined *z80_midi_subvoice_cursor;
/* ram:3aa2 Z80_RUNTIME_RAM size=0x2 */ extern undefined *z80_midi_channel_cursor;
/* ram:3aa8 Z80_RUNTIME_RAM size=0x2 */ extern undefined *z80_midi_sequence_data_base;
/* ram:3aaa Z80_RUNTIME_RAM size=0x2 */ extern undefined *z80_midi_sequence_index_base;
/* ram:3aac Z80_RUNTIME_RAM size=0x1ae */ extern PgmZ80MidiChannelState z80_midi_channels[2];
/* ram:3c5a Z80_RUNTIME_RAM size=0x2 */ extern undefined *z80_wave_table_runtime_base;
/* ram:3c5c Z80_RUNTIME_RAM size=0x2 */ extern ushort z80_wave_table_runtime_count;
/* ram:3c5e Z80_RUNTIME_RAM size=0x260 */ extern PgmZ80WaveChannelState z80_wave_channels[32];
/* ram:5000 Z80_RUNTIME_RAM size=0x3000 */ extern PgmZ80WaveTableEntry z80_wave_table_area[1024];
/* ram:8000 Z80_RUNTIME_RAM size=0x4000 */ extern byte z80_midi_data_area[16384];

/* Work RAM / BSS labels without a defined data item */
/* ram:fff9 Z80_RUNTIME_RAM synthesized size=0x1 */ extern undefined1 z80_stack_local_bounds_sentinel;
/* ram:fffb Z80_RUNTIME_RAM synthesized size=0x1 */ extern undefined1 z80_stack_refill_bounds_sentinel;

/* MMIO labels without a defined data item */
/* io:0000 <no block> synthesized size=0x1 */ extern volatile undefined1 z80_irq_status_port;
/* io:8000 <no block> synthesized size=0x1 */ extern volatile undefined1 z80_sound_latch_port_base;
/* io:8100 <no block> synthesized size=0x1 */ extern volatile undefined1 z80_68000_response_latch_port;
/* io:8400 <no block> synthesized size=0x1 */ extern volatile undefined1 z80_soundchip_port_base;

#endif /* PGM_BIOS_Z80_RAW_GLOBALS_H */
