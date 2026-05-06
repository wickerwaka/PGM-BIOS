/*
 * Raw Ghidra decompiler export for pgm_p02s.u20.swab
 * Source program: /pgm_p02s.u20.swab
 * Function count: 629
 * Named global data objects: 444
 * Named undefined global labels: 90
 * Function bodies are raw DecompiledFunction.getC() output.
 * Type declarations: pgm_p02s_raw_types.h
 * Function declarations: pgm_p02s_raw_functions.h
 * Global declarations: pgm_p02s_raw_globals.h
 * Initialized ROM globals: pgm_p02s_raw_initialized_globals.c
 */

#include "pgm_p02s_raw_types.h"
#include "pgm_p02s_raw_functions.h"
#include "pgm_p02s_raw_globals.h"

/* ============================================================
 * Named uninitialized / external global data objects
 * ============================================================ */

/* Work RAM / BSS objects */
/* 00800000 WORK_RAM size=0x1400 */ PgmSpriteHardwareEntry work_ram_sprite_dma_buffer[512];
/* 00801400 WORK_RAM size=0x100 */ undefined *ram_vector_table[64];
/* 00801501 WORK_RAM size=0x1 */ byte bios_warm_restart_flag;
/* 00801502 WORK_RAM size=0x40 */ uint exception_saved_data_addr_regs[16];
/* 00801542 WORK_RAM size=0x4 */ uint exception_saved_pc_or_fault_addr;
/* 00801546 WORK_RAM size=0x2 */ ushort exception_saved_sr_or_special_status;
/* 00801548 WORK_RAM size=0x2 */ ushort exception_saved_instruction_word;
/* 0080154a WORK_RAM size=0x4 */ uint exception_saved_bus_error_pc;
/* 0080154e WORK_RAM size=0x2 */ ushort exception_saved_bus_error_sr;
/* 00801550 WORK_RAM size=0x10 */ int timer_slots[4];
/* 00801560 WORK_RAM size=0x1 */ byte active_timer_count;
/* 00801562 WORK_RAM size=0x10 */ PgmTimerCallbackSlot timer_callback_slot;
/* 00801572 WORK_RAM size=0x1 */ byte active_timer_callback_count;
/* 00801574 WORK_RAM size=0x4 */ uint input_key_state_zero_entry_prefix0;
/* 00801578 WORK_RAM size=0x4 */ uint input_key_state_1based_wHeld_base;
/* 0080157c WORK_RAM size=0x120 */ PgmInputKeyState input_key_state_table[48];
/* 0080169c WORK_RAM size=0x1 */ byte input_repeat_delay_setting;
/* 0080169e WORK_RAM size=0x2 */ ushort memory_sentinel_prng_state;
/* 008016a0 WORK_RAM size=0x28 */ PgmHeapNode heap_node_table[4];
/* 008016c8 WORK_RAM size=0x800 */ undefined2 bios_heap_area[1024];
/* 00801ec8 WORK_RAM size=0x4 */ PgmHeapNode *heap_used_list;
/* 00801ecc WORK_RAM size=0x4 */ PgmHeapNode *heap_free_list;
/* 00801ed0 WORK_RAM size=0xc */ uint palette_id_registry[3];
/* 00801edc WORK_RAM size=0x30 */ PgmPaletteDmaSlot palette_slot_table[4];
/* 00801f0c WORK_RAM size=0x1 */ byte active_palette_slot_count;
/* 00801f0e WORK_RAM size=0x148 */ PgmPaletteFadeSlot palette_fade_slots[4];
/* 00802056 WORK_RAM size=0x1 */ byte active_fade_slot_count;
/* 00802058 WORK_RAM size=0x40 */ PgmFadeCopySlot fade_copy_slots[4];
/* 00802098 WORK_RAM size=0x2 */ ushort audit_current_year;
/* 0080209a WORK_RAM size=0x2 */ ushort audit_current_month;
/* 0080209c WORK_RAM size=0x2 */ ushort audit_current_day;
/* 0080209e WORK_RAM size=0x70 */ PgmShortAuditCounter coin_audit_counter_table[7];
/* 0080210e WORK_RAM size=0xc0 */ PgmShortAuditCounter service_audit_counter_table[12];
/* 008021ce WORK_RAM size=0x1180 */ PgmGameAuditRecord game_audit_record_table[8];
/* 0080334e WORK_RAM size=0x4 */ PgmGameAuditRecord *current_game_audit_record;
/* 00803352 WORK_RAM size=0x8 */ short coin_counter_pending_pulses[4];
/* 0080335a WORK_RAM size=0x1 */ byte coin_counter_pulse_phase;
/* 0080335c WORK_RAM size=0x4 */ int coin_counter_pulse_timer;
/* 00803360 WORK_RAM size=0x2 */ ushort coin_counter_output_shadow;
/* 00803362 WORK_RAM size=0x4 */ void *vblank_callback_1;
/* 00803366 WORK_RAM size=0x4 */ void *vblank_callback_2;
/* 0080336a WORK_RAM size=0x4 */ uint vblank_counter_seed_9999;
/* 0080336e WORK_RAM size=0x4 */ uint vblank_reserved_counter_0;
/* 00803372 WORK_RAM size=0x4 */ uint vblank_reserved_counter_1;
/* 00803376 WORK_RAM size=0x4 */ uint test_start_combo_latch;
/* 0080337a WORK_RAM size=0x4 */ uint vblank_reserved_counter_2;
/* 0080337e WORK_RAM size=0x1 */ byte vblank_seen_flag;
/* 0080337f WORK_RAM size=0x1 */ byte vblank_services_inhibit;
/* 00803380 WORK_RAM size=0x1 */ byte irq4_seen_flag;
/* 00803381 WORK_RAM size=0x1 */ byte irq6_seen_flag;
/* 00803382 WORK_RAM size=0x48 */ PgmScrollRegisterState scroll_register_states[2];
/* 008033ca WORK_RAM size=0x1 */ byte scroll_update_enabled_flag;
/* 008033cb WORK_RAM size=0x1 */ byte scroll_auto_flush_enabled_flag;
/* 008033cc WORK_RAM size=0x1 */ byte sprite_zoom_table_dirty;
/* 008033ce WORK_RAM size=0x40 */ uint sprite_zoom_table_shadow[16];
/* 0080340e WORK_RAM size=0x2 */ ushort bg_scale_shadow;
/* 00803410 WORK_RAM size=0x1 */ byte bg_scale_dirty;
/* 00803412 WORK_RAM size=0x2 */ ushort zoomed_bg_scroll_y_shadow;
/* 00803414 WORK_RAM size=0x2 */ ushort zoomed_bg_scroll_x_shadow;
/* 00803416 WORK_RAM size=0x1 */ byte text_format_decimal_width;
/* 00803417 WORK_RAM size=0x1 */ byte text_format_hex_width;
/* 00803418 WORK_RAM size=0x1 */ byte text_format_binary_width;
/* 0080341a WORK_RAM size=0x1 */ byte text_draw_reserved_state;
/* 00803420 WORK_RAM size=0x22 */ char text_number_format_buffer[34];
/* 00803446 WORK_RAM size=0xa */ char audit_magic_1[10];
/* 00803450 WORK_RAM size=0xa */ char audit_magic_2[10];
/* 0080345a WORK_RAM size=0x4 */ void *bios_callback_pointer;
/* 00803460 WORK_RAM size=0x4 */ byte bios_public_status_flags[4];
/* 00803468 WORK_RAM size=0x2 */ ushort bios_menu_sound_enabled;
/* 0080346a WORK_RAM size=0x4 */ int main_menu_selection;
/* 0080346e WORK_RAM size=0x70 */ PgmFontBufferSlot font_buffer_table[8];
/* 008034de WORK_RAM size=0x2 */ ushort video_control_shadow;
/* 008034e0 WORK_RAM size=0x1 */ byte sprite_system_enabled_flag;
/* 008034e2 WORK_RAM size=0x28 */ PgmSpriteDisplaySlot sprite_display_slots[2];
/* 00803516 WORK_RAM size=0x4 */ undefined4 sprite_display_list_aux_state;
/* 0080351a WORK_RAM size=0x4 */ PgmSpriteDisplaySlot *sprite_display_list_head;
/* 0080351e WORK_RAM size=0x1 */ byte sprite_display_list_dirty;
/* 0080351f WORK_RAM size=0x1 */ byte sprite_extra_vblank_wait_enabled;
/* 0080352a WORK_RAM size=0x4 */ int sprite_extra_vblank_wait_count;
/* 00803530 WORK_RAM size=0x200 */ PgmZ80AudioCommandEntry z80_cmd_ring_storage[128];
/* 00803730 WORK_RAM size=0x1c */ PgmRingBuffer z80_audio_command_ring;
/* 0080374c WORK_RAM size=0x1 */ byte z80_cmd_sequence_mod64;
/* 0080374e WORK_RAM size=0x2 */ ushort z80_audio_ready;
/* 00803750 WORK_RAM size=0x4 */ uint z80_audio_debug_queue_state;
/* 00803754 WORK_RAM size=0x2 */ ushort sound_poll_inhibit_flag;
/* 0080375c WORK_RAM size=0x1 */ byte please_power_off_required_flag;
/* 0080375e WORK_RAM size=0x2 */ ushort sound_poll_reserved_0;
/* 00803760 WORK_RAM size=0x1 */ byte active_font_buffer_count;
/* 00803762 WORK_RAM size=0x2 */ ushort sound_poll_reserved_1;
/* 00803764 WORK_RAM size=0x2 */ ushort dipswitch_shadow;
/* 00803766 WORK_RAM size=0x2 */ ushort sound_status_poll_active;
/* 00803768 WORK_RAM size=0x2 */ ushort z80_wave_count;
/* 0080376a WORK_RAM size=0x2 */ undefined2 z80_midi_count;
/* 0080376c WORK_RAM size=0x4 */ uint bios_frame_or_boot_counter;
/* 00803770 WORK_RAM size=0x1 */ byte bios_disable_or_startup_flag;
/* 00803772 WORK_RAM size=0x2 */ ushort z80_latch3_high_nibble_shadow;
/* 00803774 WORK_RAM size=0x2 */ ushort z80_latch_low_nibble_shadow;
/* 0081fffc WORK_RAM size=0x4 */ uint bios_restart_saved_pc;
/* 00c10002 Z80_RAM size=0x2 */ ushort pgm_z80_ram_word1;
/* 00c10006 Z80_RAM size=0x4 */ PgmZ80AudioCommandEntry z80_command_mailbox;
/* 00c10042 Z80_RAM size=0x2 */ ushort z80_wave_count_mailbox;
/* 00c10052 Z80_RAM size=0x2 */ ushort z80_midi_count_mailbox;
/* 00c10070 Z80_RAM size=0x200 */ undefined4 z80_midi_index_table[128];

/* Work RAM / BSS labels without a defined data item */
/* 00800a00 WORK_RAM synthesized size=0x1 */ undefined1 work_ram_general;
/* 00801404 WORK_RAM synthesized size=0x1 */ undefined1 ram_reset_pc_vector;
/* 00801470 WORK_RAM synthesized size=0x1 */ undefined1 ram_irq4_vector;
/* 00801478 WORK_RAM synthesized size=0x1 */ undefined1 ram_irq6_vbl_vector;
/* 00801500 WORK_RAM synthesized size=0x1 */ undefined1 vblank_reentry_guard;
/* 00803442 WORK_RAM synthesized size=0x1 */ undefined1 saved_interrupt_level;
/* 0080345e WORK_RAM synthesized size=0x1 */ undefined1 force_test_menu_flag;
/* 0080345f WORK_RAM synthesized size=0x1 */ undefined1 bios_mode_flag;
/* 00803464 WORK_RAM synthesized size=0x1 */ undefined1 bios_intro_seen_flag;
/* 00803466 WORK_RAM synthesized size=0x1 */ undefined1 last_rtc_second_displayed;
/* 0080346c WORK_RAM synthesized size=0x1 */ undefined1 main_menu_selection_lowword;
/* 0080352e WORK_RAM synthesized size=0x1 */ undefined1 cart_header_valid;
/* 00803776 WORK_RAM synthesized size=0x1 */ undefined1 bios_test_or_service_flag;
/* 00c10000 Z80_RAM synthesized size=0x10000 */ undefined1 pgm_z80_ram[65536];
/* 00c15000 Z80_RAM synthesized size=0x1 */ undefined1 z80_wave_table_area;
/* 00c18000 Z80_RAM synthesized size=0x1 */ undefined1 z80_midi_data_area;

/* MMIO / volatile globals */
/* 00b00000 VIDEO_REGS size=0x8 */ extern volatile undefined2 pgm_sprite_regs[4];
/* 00b00008 VIDEO_REGS size=0x4 */ extern volatile uint pgm_video_reg_08;
/* 00b01000 VIDEO_REGS size=0x400 */ extern volatile undefined2 pgm_sprite_zoom_table[512];
/* 00b02000 VIDEO_REGS size=0x2 */ extern volatile undefined2 pgm_bg_scroll_y;
/* 00b03000 VIDEO_REGS size=0x2 */ extern volatile undefined2 pgm_bg_scroll_x;
/* 00b04000 VIDEO_REGS size=0x2 */ extern volatile ushort pgm_bg_scale;
/* 00b05000 VIDEO_REGS size=0x2 */ extern volatile undefined2 pgm_text_scroll_y;
/* 00b06000 VIDEO_REGS size=0x2 */ extern volatile undefined2 pgm_text_scroll_x;
/* 00b07000 VIDEO_REGS size=0x2 */ extern volatile undefined2 pgm_scanline;
/* 00b0e000 VIDEO_REGS size=0x2 */ extern volatile ushort pgm_video_control_flags;
/* 00c00000 Z80_RTC_IO size=0xe */ extern volatile PgmZ80RtcIoRegs pgm_z80_rtc_io;
/* 00c08000 JAMMA_IO size=0x8 */ extern volatile PgmJammaIoRegs pgm_jamma_io;

/* MMIO labels without a defined data item */
/* 00900000 VIDEO_RAM synthesized size=0x8000 */ extern volatile undefined1 pgm_video_ram[32768];
/* 00904000 VIDEO_RAM synthesized size=0x1 */ extern volatile undefined1 pgm_text_tilemap;
/* 00907000 VIDEO_RAM synthesized size=0x1 */ extern volatile undefined1 pgm_rowscroll_ram;
/* 00a00000 PALETTE_RAM synthesized size=0x2000 */ extern volatile undefined1 pgm_palette_ram[8192];
/* 00a00800 PALETTE_RAM synthesized size=0x1 */ extern volatile undefined1 pgm_bg_palette_ram;
/* 00a01000 PALETTE_RAM synthesized size=0x1 */ extern volatile undefined1 pgm_text_palette_ram;
/* 00c00002 Z80_RTC_IO synthesized size=0x1 */ extern volatile undefined1 pgm_sound_latch1;
/* 00c00004 Z80_RTC_IO synthesized size=0x1 */ extern volatile undefined1 pgm_sound_latch2;
/* 00c00006 Z80_RTC_IO synthesized size=0x1 */ extern volatile undefined1 pgm_calendar_rtc;
/* 00c00008 Z80_RTC_IO synthesized size=0x1 */ extern volatile undefined1 pgm_z80_reset;
/* 00c0000a Z80_RTC_IO synthesized size=0x1 */ extern volatile undefined1 pgm_z80_control;
/* 00c0000c Z80_RTC_IO synthesized size=0x1 */ extern volatile undefined1 pgm_sound_latch3;
/* 00c08002 JAMMA_IO synthesized size=0x1 */ extern volatile undefined1 pgm_io_p3_p4_controls;
/* 00c08004 JAMMA_IO synthesized size=0x1 */ extern volatile undefined1 pgm_io_extra_controls;
/* 00c08006 JAMMA_IO synthesized size=0x1 */ extern volatile undefined1 pgm_io_dipswitches;



/* ============================================================
 * 00000256 BiosPublicDispatch0
 * ============================================================ */


/* Public BIOS dispatch table entry 0. Selector 0..6 updates bookkeeping/audit counters: play,
   coin-in, coin-out, service, ticket, add value A, add value B/date-roll. Invalid selector prints
   HOST FUN ERROR and loops forever. */

void BiosPublicDispatch0(int selector,int value)

{
  switch(selector) {
  case 0:
    IncrementAuditPlayCounters();
    break;
  case 1:
    IncrementCoinInCounters();
    break;
  case 2:
    IncrementCoinOutCounters();
    break;
  case 3:
    IncrementServiceCounters();
    break;
  case 4:
    IncrementTicketCounters();
    break;
  case 5:
    AddAuditValueA(value);
    break;
  case 6:
    AddAuditValueBAndRollDate(value);
    break;
  default:
    PrintfTextLayer(10,10,"HOST FUN ERROR %d",selector);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  return;
}




/* ============================================================
 * 000002e2 BiosPublicDispatch1
 * ============================================================ */


/* Public BIOS dispatch table entry 1. Selector 0=IsKeyPressed, 1=ConsumeKeyPress,
   2=WaitForKeyOrCallback(key,NULL), 3=GetInputStateBase. Invalid selector prints HOST FUN ERROR and
   loops forever. */

PgmInputKeyState * BiosPublicDispatch1(int selector,int key_index)

{
  PgmInputKeyState *pPVar1;
  
  switch(selector) {
  case 0:
    pPVar1 = (PgmInputKeyState *)IsKeyPressed(key_index);
    break;
  case 1:
    pPVar1 = (PgmInputKeyState *)ConsumeKeyPress(key_index);
    break;
  case 2:
    pPVar1 = (PgmInputKeyState *)WaitForKeyOrCallback(key_index);
    break;
  case 3:
    pPVar1 = GetInputStateBase();
    break;
  default:
    PrintfTextLayer(10,10,"HOST FUN ERROR %d",selector);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  return pPVar1;
}




/* ============================================================
 * 00000358 BiosPublicAudioDispatch
 * ============================================================ */


/* Public BIOS sound dispatch. Selector 0 queues command 0x10 with low byte and 0xff; selector 1
   queues structured command 0. Invalid selector prints HOST SOUND ERROR. */

void BiosPublicAudioDispatch(int selector,ushort sound_id,uchar param)

{
  if (selector == 0) {
    QueueZ80CmdBytes(0x10,(char)sound_id,0xff);
  }
  else if (selector == 1) {
    QueueZ80AudioCommand(0,sound_id,param,0);
  }
  else {
    PrintfTextLayer(10,10,"HOST SOUND ERROR %d",selector);
  }
  return;
}




/* ============================================================
 * 000003c2 BiosPublicInit
 * ============================================================ */


void BiosPublicInit(void)

{
  ForceTestModeFlag();
  ClearStartupFlag();
  RestartBiosAfterReset();
  return;
}




/* ============================================================
 * 000003d6 BiosApiThunkStatusFlags
 * ============================================================ */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * BiosApiThunkStatusFlags(void)

{
  void *pvVar1;
  
  pvVar1 = GetBiosStatusFlags();
  return pvVar1;
}




/* ============================================================
 * 000003de BiosApiThunkFrameCounter
 * ============================================================ */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int BiosApiThunkFrameCounter(void)

{
  int iVar1;
  
  iVar1 = GetBiosFrameCounter();
  return iVar1;
}




/* ============================================================
 * 000003e6 BiosApiThunkStartupFlag
 * ============================================================ */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int BiosApiThunkStartupFlag(void)

{
  int iVar1;
  
  iVar1 = GetStartupFlag();
  return iVar1;
}




/* ============================================================
 * 000003ee BiosPublicNoop
 * ============================================================ */


void BiosPublicNoop(void)

{
  return;
}




/* ============================================================
 * 000003f0 DrawBiosPublicApiHelp
 * ============================================================ */


void DrawBiosPublicApiHelp(void)

{
  ClearTextTilemap();
  LoadDefaultTextPalettes();
  PrintfTextLayer(10,10,"HOST ENTRY  =%08X",0x200);
  PrintfTextLayer(10,0xb,"HOST MARK   =%s",0x200);
  PrintfTextLayer(10,0xc,"HOST VERSION=%s",0x230);
  PrintfTextLayer(10,0xd,"CARD ENTRY  =%08X",&cart_header_string);
  PrintfTextLayer(10,0xe,"CARD MARK   =%s",&cart_header_string);
  PrintfTextLayer(10,0xf,"CARD NAME   =%s",&cart_game_name);
  PrintfTextLayer(10,0x10,"CARD VERSION=%s",&UNK_00100231);
  WaitForKeyOrCallback(1);
  return;
}




/* ============================================================
 * 000004c6 BiosPublicApiHelpNoop
 * ============================================================ */


void BiosPublicApiHelpNoop(void)

{
  return;
}




/* ============================================================
 * 000004c8 ClearInputsOrDipMirror
 * ============================================================ */


void ClearInputsOrDipMirror(void)

{
  pgm_jamma_io.wDipswitches = 0;
  return;
}




/* ============================================================
 * 000004d0 bios_reset_entry
 * ============================================================ */


/* WARNING: This function may have set the stack pointer */
/* BIOS reset entry: sets SR/SP, clears selected hardware regs, copies BIOS default vectors from
   0x100 to RAM vector table 0x801400, then enters BIOS startup. */

void bios_reset_entry(void)

{
  short sVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  please_power_off_required_flag = 0;
  bios_disable_or_startup_flag = 1;
  bios_frame_or_boot_counter = bios_frame_or_boot_counter + 1;
  vblank_reentry_guard = 0;
  bios_restart_saved_pc = 0x4fc;
  ClearVideoControlMaybe();
  bios_restart_saved_pc = 0x502;
  InitVideoRegistersMaybe();
  bios_restart_saved_pc = 0x506;
  ClearInputsOrDipMirror();
  sVar1 = 0x3f;
  ppuVar2 = bios_default_vector_table;
  ppuVar3 = ram_vector_table;
  do {
    *ppuVar3 = *ppuVar2;
    sVar1 = sVar1 + -1;
    ppuVar2 = ppuVar2 + 1;
    ppuVar3 = ppuVar3 + 1;
  } while (sVar1 != -1);
  PostVectorCopyStartup();
  return;
}




/* ============================================================
 * 000004e6 RestartBiosAfterReset
 * ============================================================ */


/* WARNING: This function may have set the stack pointer */

void RestartBiosAfterReset(void)

{
  short sVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  vblank_reentry_guard = 0;
  bios_restart_saved_pc = 0x4fc;
  ClearVideoControlMaybe();
  bios_restart_saved_pc = 0x502;
  InitVideoRegistersMaybe();
  bios_restart_saved_pc = 0x506;
  ClearInputsOrDipMirror();
  sVar1 = 0x3f;
  ppuVar2 = bios_default_vector_table;
  ppuVar3 = ram_vector_table;
  do {
    *ppuVar3 = *ppuVar2;
    sVar1 = sVar1 + -1;
    ppuVar2 = ppuVar2 + 1;
    ppuVar3 = ppuVar3 + 1;
  } while (sVar1 != -1);
  PostVectorCopyStartup();
  return;
}




/* ============================================================
 * 00000522 InstallCartVectorsAndStart
 * ============================================================ */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Install cartridge vectors and jump to game. Copies 64 vectors from cart 0x100000 to RAM 0x801400,
   substituting BIOS defaults for zero entries, then RTS-dispatches to 0x801404. */

void InstallCartVectorsAndStart(void)

{
  short sVar1;
  undefined *puVar2;
  int *piVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  
  if (_cart_program_rom_base != -1) {
    ppuVar5 = bios_default_vector_table;
    sVar1 = 0x3f;
    piVar3 = (int *)&cart_program_rom_base;
    ppuVar4 = ram_vector_table;
    do {
      puVar2 = (undefined *)*piVar3;
      if (puVar2 == (undefined *)0x0) {
        puVar2 = *ppuVar5;
      }
      *ppuVar4 = puVar2;
      ppuVar5 = ppuVar5 + 1;
      sVar1 = sVar1 + -1;
      piVar3 = piVar3 + 1;
      ppuVar4 = ppuVar4 + 1;
    } while (sVar1 != -1);
    return;
  }
  return;
}




/* ============================================================
 * 00000562 PostVectorCopyStartup
 * ============================================================ */


void PostVectorCopyStartup(void)

{
  short sVar1;
  
  sVar1 = 99;
  do {
    sVar1 = sVar1 + -1;
  } while (sVar1 != -1);
  ResetVideoStateAndAcknowledge();
  bios_warm_restart_flag = 0;
  BiosMainStartup();
  return;
}




/* ============================================================
 * 0000057c GetColdRestartFlag
 * ============================================================ */


bool GetColdRestartFlag(void)

{
  return bios_warm_restart_flag == 0;
}




/* ============================================================
 * 0000058c WarmRestartBios
 * ============================================================ */


/* WARNING: This function may have set the stack pointer */

void WarmRestartBios(void)

{
  bios_warm_restart_flag = 1;
  bios_restart_saved_pc = 0x5a2;
  ResetVideoStateAndAcknowledgeAlt();
  BiosMainStartup();
  return;
}




/* ============================================================
 * 000005aa GetWarmRestartFlag
 * ============================================================ */


bool GetWarmRestartFlag(void)

{
  return bios_warm_restart_flag == 1;
}




/* ============================================================
 * 000005ba ExceptionVector02BusError
 * ============================================================ */


void ExceptionVector02BusError(void)

{
  return;
}




/* ============================================================
 * 000005c2 DefaultBusErrorHandler
 * ============================================================ */

/* DECOMPILATION FAILED: 
Low-level Error: Cannot properly adjust input varnodes */


/* ============================================================
 * 00000604 ExceptionVector03AddressError
 * ============================================================ */


void ExceptionVector03AddressError(void)

{
  return;
}




/* ============================================================
 * 0000060c DefaultAddressErrorHandler
 * ============================================================ */

/* DECOMPILATION FAILED: 
Low-level Error: Cannot properly adjust input varnodes */


/* ============================================================
 * 0000064e ExceptionVector04IllegalInstruction
 * ============================================================ */


void ExceptionVector04IllegalInstruction(void)

{
  return;
}




/* ============================================================
 * 00000656 DefaultIllegalInstructionHandler
 * ============================================================ */


void DefaultIllegalInstructionHandler
               (uint saved_d0,uint saved_d1,uint saved_d2,uint saved_d3,uint saved_d4,uint saved_d5,
               uint saved_d6,uint saved_d7,uint saved_a0,uint saved_a1,uint saved_a2,uint saved_a3,
               uint saved_a4,uint saved_a5,uint saved_a6,ushort exception_stack_sr,
               uint exception_stack_pc)

{
  exception_saved_sr_or_special_status = exception_stack_sr;
  exception_saved_pc_or_fault_addr = exception_stack_pc;
  exception_saved_data_addr_regs[0] = saved_d0;
  exception_saved_data_addr_regs[1] = saved_d1;
  exception_saved_data_addr_regs[2] = saved_d2;
  exception_saved_data_addr_regs[3] = saved_d3;
  exception_saved_data_addr_regs[4] = saved_d4;
  exception_saved_data_addr_regs[5] = saved_d5;
  exception_saved_data_addr_regs[6] = saved_d6;
  exception_saved_data_addr_regs[7] = saved_d7;
  exception_saved_data_addr_regs[8] = saved_a0;
  exception_saved_data_addr_regs[9] = saved_a1;
  exception_saved_data_addr_regs[10] = saved_a2;
  exception_saved_data_addr_regs[0xb] = saved_a3;
  exception_saved_data_addr_regs[0xc] = saved_a4;
  exception_saved_data_addr_regs[0xd] = saved_a5;
  exception_saved_data_addr_regs[0xe] = saved_a6;
  exception_saved_data_addr_regs[0xf] = (uint)register0x0000003c;
                    /* WARNING: Subroutine does not return */
  FatalExceptionScreen(2,exception_saved_data_addr_regs);
}




/* ============================================================
 * 00000680 ExceptionVector05ZeroDivide
 * ============================================================ */


void ExceptionVector05ZeroDivide(void)

{
  return;
}




/* ============================================================
 * 00000688 DefaultZeroDivideHandler
 * ============================================================ */


void DefaultZeroDivideHandler
               (uint saved_d0,uint saved_d1,uint saved_d2,uint saved_d3,uint saved_d4,uint saved_d5,
               uint saved_d6,uint saved_d7,uint saved_a0,uint saved_a1,uint saved_a2,uint saved_a3,
               uint saved_a4,uint saved_a5,uint saved_a6,ushort exception_stack_sr,
               uint exception_stack_pc)

{
  exception_saved_sr_or_special_status = exception_stack_sr;
  exception_saved_pc_or_fault_addr = exception_stack_pc;
  exception_saved_data_addr_regs[0] = saved_d0;
  exception_saved_data_addr_regs[1] = saved_d1;
  exception_saved_data_addr_regs[2] = saved_d2;
  exception_saved_data_addr_regs[3] = saved_d3;
  exception_saved_data_addr_regs[4] = saved_d4;
  exception_saved_data_addr_regs[5] = saved_d5;
  exception_saved_data_addr_regs[6] = saved_d6;
  exception_saved_data_addr_regs[7] = saved_d7;
  exception_saved_data_addr_regs[8] = saved_a0;
  exception_saved_data_addr_regs[9] = saved_a1;
  exception_saved_data_addr_regs[10] = saved_a2;
  exception_saved_data_addr_regs[0xb] = saved_a3;
  exception_saved_data_addr_regs[0xc] = saved_a4;
  exception_saved_data_addr_regs[0xd] = saved_a5;
  exception_saved_data_addr_regs[0xe] = saved_a6;
  exception_saved_data_addr_regs[0xf] = (uint)register0x0000003c;
                    /* WARNING: Subroutine does not return */
  FatalExceptionScreen(3,exception_saved_data_addr_regs);
}




/* ============================================================
 * 000006b2 ExceptionVector06ChkInstruction
 * ============================================================ */


void ExceptionVector06ChkInstruction(void)

{
  return;
}




/* ============================================================
 * 000006ba DefaultChkInstructionHandler
 * ============================================================ */


void DefaultChkInstructionHandler
               (uint saved_d0,uint saved_d1,uint saved_d2,uint saved_d3,uint saved_d4,uint saved_d5,
               uint saved_d6,uint saved_d7,uint saved_a0,uint saved_a1,uint saved_a2,uint saved_a3,
               uint saved_a4,uint saved_a5,uint saved_a6,ushort exception_stack_sr,
               uint exception_stack_pc)

{
  exception_saved_sr_or_special_status = exception_stack_sr;
  exception_saved_pc_or_fault_addr = exception_stack_pc;
  exception_saved_data_addr_regs[0] = saved_d0;
  exception_saved_data_addr_regs[1] = saved_d1;
  exception_saved_data_addr_regs[2] = saved_d2;
  exception_saved_data_addr_regs[3] = saved_d3;
  exception_saved_data_addr_regs[4] = saved_d4;
  exception_saved_data_addr_regs[5] = saved_d5;
  exception_saved_data_addr_regs[6] = saved_d6;
  exception_saved_data_addr_regs[7] = saved_d7;
  exception_saved_data_addr_regs[8] = saved_a0;
  exception_saved_data_addr_regs[9] = saved_a1;
  exception_saved_data_addr_regs[10] = saved_a2;
  exception_saved_data_addr_regs[0xb] = saved_a3;
  exception_saved_data_addr_regs[0xc] = saved_a4;
  exception_saved_data_addr_regs[0xd] = saved_a5;
  exception_saved_data_addr_regs[0xe] = saved_a6;
  exception_saved_data_addr_regs[0xf] = (uint)register0x0000003c;
                    /* WARNING: Subroutine does not return */
  FatalExceptionScreen(4,exception_saved_data_addr_regs);
}




/* ============================================================
 * 000006e4 ExceptionVector07Trapv
 * ============================================================ */


void ExceptionVector07Trapv(void)

{
  return;
}




/* ============================================================
 * 000006ec DefaultTrapvHandler
 * ============================================================ */


void DefaultTrapvHandler(uint saved_d0,uint saved_d1,uint saved_d2,uint saved_d3,uint saved_d4,
                        uint saved_d5,uint saved_d6,uint saved_d7,uint saved_a0,uint saved_a1,
                        uint saved_a2,uint saved_a3,uint saved_a4,uint saved_a5,uint saved_a6,
                        ushort exception_stack_sr,uint exception_stack_pc)

{
  exception_saved_sr_or_special_status = exception_stack_sr;
  exception_saved_pc_or_fault_addr = exception_stack_pc;
  exception_saved_data_addr_regs[0] = saved_d0;
  exception_saved_data_addr_regs[1] = saved_d1;
  exception_saved_data_addr_regs[2] = saved_d2;
  exception_saved_data_addr_regs[3] = saved_d3;
  exception_saved_data_addr_regs[4] = saved_d4;
  exception_saved_data_addr_regs[5] = saved_d5;
  exception_saved_data_addr_regs[6] = saved_d6;
  exception_saved_data_addr_regs[7] = saved_d7;
  exception_saved_data_addr_regs[8] = saved_a0;
  exception_saved_data_addr_regs[9] = saved_a1;
  exception_saved_data_addr_regs[10] = saved_a2;
  exception_saved_data_addr_regs[0xb] = saved_a3;
  exception_saved_data_addr_regs[0xc] = saved_a4;
  exception_saved_data_addr_regs[0xd] = saved_a5;
  exception_saved_data_addr_regs[0xe] = saved_a6;
  exception_saved_data_addr_regs[0xf] = (uint)register0x0000003c;
                    /* WARNING: Subroutine does not return */
  FatalExceptionScreen(5,exception_saved_data_addr_regs);
}




/* ============================================================
 * 00000716 ExceptionVector08PrivilegeViolation
 * ============================================================ */


void ExceptionVector08PrivilegeViolation(void)

{
  return;
}




/* ============================================================
 * 0000071e DefaultPrivilegeViolationHandler
 * ============================================================ */


void DefaultPrivilegeViolationHandler
               (uint saved_d0,uint saved_d1,uint saved_d2,uint saved_d3,uint saved_d4,uint saved_d5,
               uint saved_d6,uint saved_d7,uint saved_a0,uint saved_a1,uint saved_a2,uint saved_a3,
               uint saved_a4,uint saved_a5,uint saved_a6,ushort exception_stack_sr,
               uint exception_stack_pc)

{
  exception_saved_sr_or_special_status = exception_stack_sr;
  exception_saved_pc_or_fault_addr = exception_stack_pc;
  exception_saved_data_addr_regs[0] = saved_d0;
  exception_saved_data_addr_regs[1] = saved_d1;
  exception_saved_data_addr_regs[2] = saved_d2;
  exception_saved_data_addr_regs[3] = saved_d3;
  exception_saved_data_addr_regs[4] = saved_d4;
  exception_saved_data_addr_regs[5] = saved_d5;
  exception_saved_data_addr_regs[6] = saved_d6;
  exception_saved_data_addr_regs[7] = saved_d7;
  exception_saved_data_addr_regs[8] = saved_a0;
  exception_saved_data_addr_regs[9] = saved_a1;
  exception_saved_data_addr_regs[10] = saved_a2;
  exception_saved_data_addr_regs[0xb] = saved_a3;
  exception_saved_data_addr_regs[0xc] = saved_a4;
  exception_saved_data_addr_regs[0xd] = saved_a5;
  exception_saved_data_addr_regs[0xe] = saved_a6;
  exception_saved_data_addr_regs[0xf] = (uint)register0x0000003c;
                    /* WARNING: Subroutine does not return */
  FatalExceptionScreen(6,exception_saved_data_addr_regs);
}




/* ============================================================
 * 00000748 ExceptionVector09Trace
 * ============================================================ */


void ExceptionVector09Trace(void)

{
  return;
}




/* ============================================================
 * 00000750 DefaultTraceHandler
 * ============================================================ */


void DefaultTraceHandler(uint saved_d0,uint saved_d1,uint saved_d2,uint saved_d3,uint saved_d4,
                        uint saved_d5,uint saved_d6,uint saved_d7,uint saved_a0,uint saved_a1,
                        uint saved_a2,uint saved_a3,uint saved_a4,uint saved_a5,uint saved_a6,
                        ushort exception_stack_sr,uint exception_stack_pc)

{
  exception_saved_sr_or_special_status = exception_stack_sr;
  exception_saved_pc_or_fault_addr = exception_stack_pc;
  exception_saved_data_addr_regs[0] = saved_d0;
  exception_saved_data_addr_regs[1] = saved_d1;
  exception_saved_data_addr_regs[2] = saved_d2;
  exception_saved_data_addr_regs[3] = saved_d3;
  exception_saved_data_addr_regs[4] = saved_d4;
  exception_saved_data_addr_regs[5] = saved_d5;
  exception_saved_data_addr_regs[6] = saved_d6;
  exception_saved_data_addr_regs[7] = saved_d7;
  exception_saved_data_addr_regs[8] = saved_a0;
  exception_saved_data_addr_regs[9] = saved_a1;
  exception_saved_data_addr_regs[10] = saved_a2;
  exception_saved_data_addr_regs[0xb] = saved_a3;
  exception_saved_data_addr_regs[0xc] = saved_a4;
  exception_saved_data_addr_regs[0xd] = saved_a5;
  exception_saved_data_addr_regs[0xe] = saved_a6;
  exception_saved_data_addr_regs[0xf] = (uint)register0x0000003c;
                    /* WARNING: Subroutine does not return */
  FatalExceptionScreen(7,exception_saved_data_addr_regs);
}




/* ============================================================
 * 0000077a ExceptionVector10Line1010
 * ============================================================ */


void ExceptionVector10Line1010(void)

{
  return;
}




/* ============================================================
 * 00000782 DefaultLine1010Handler
 * ============================================================ */


void DefaultLine1010Handler
               (uint saved_d0,uint saved_d1,uint saved_d2,uint saved_d3,uint saved_d4,uint saved_d5,
               uint saved_d6,uint saved_d7,uint saved_a0,uint saved_a1,uint saved_a2,uint saved_a3,
               uint saved_a4,uint saved_a5,uint saved_a6,ushort exception_stack_sr,
               uint exception_stack_pc)

{
  exception_saved_sr_or_special_status = exception_stack_sr;
  exception_saved_pc_or_fault_addr = exception_stack_pc;
  exception_saved_data_addr_regs[0] = saved_d0;
  exception_saved_data_addr_regs[1] = saved_d1;
  exception_saved_data_addr_regs[2] = saved_d2;
  exception_saved_data_addr_regs[3] = saved_d3;
  exception_saved_data_addr_regs[4] = saved_d4;
  exception_saved_data_addr_regs[5] = saved_d5;
  exception_saved_data_addr_regs[6] = saved_d6;
  exception_saved_data_addr_regs[7] = saved_d7;
  exception_saved_data_addr_regs[8] = saved_a0;
  exception_saved_data_addr_regs[9] = saved_a1;
  exception_saved_data_addr_regs[10] = saved_a2;
  exception_saved_data_addr_regs[0xb] = saved_a3;
  exception_saved_data_addr_regs[0xc] = saved_a4;
  exception_saved_data_addr_regs[0xd] = saved_a5;
  exception_saved_data_addr_regs[0xe] = saved_a6;
  exception_saved_data_addr_regs[0xf] = (uint)register0x0000003c;
                    /* WARNING: Subroutine does not return */
  FatalExceptionScreen(8,exception_saved_data_addr_regs);
}




/* ============================================================
 * 000007ac ExceptionVector11Line1111
 * ============================================================ */


void ExceptionVector11Line1111(void)

{
  return;
}




/* ============================================================
 * 000007b4 DefaultLine1111Handler
 * ============================================================ */


void DefaultLine1111Handler
               (uint saved_d0,uint saved_d1,uint saved_d2,uint saved_d3,uint saved_d4,uint saved_d5,
               uint saved_d6,uint saved_d7,uint saved_a0,uint saved_a1,uint saved_a2,uint saved_a3,
               uint saved_a4,uint saved_a5,uint saved_a6,ushort exception_stack_sr,
               uint exception_stack_pc)

{
  exception_saved_sr_or_special_status = exception_stack_sr;
  exception_saved_pc_or_fault_addr = exception_stack_pc;
  exception_saved_data_addr_regs[0] = saved_d0;
  exception_saved_data_addr_regs[1] = saved_d1;
  exception_saved_data_addr_regs[2] = saved_d2;
  exception_saved_data_addr_regs[3] = saved_d3;
  exception_saved_data_addr_regs[4] = saved_d4;
  exception_saved_data_addr_regs[5] = saved_d5;
  exception_saved_data_addr_regs[6] = saved_d6;
  exception_saved_data_addr_regs[7] = saved_d7;
  exception_saved_data_addr_regs[8] = saved_a0;
  exception_saved_data_addr_regs[9] = saved_a1;
  exception_saved_data_addr_regs[10] = saved_a2;
  exception_saved_data_addr_regs[0xb] = saved_a3;
  exception_saved_data_addr_regs[0xc] = saved_a4;
  exception_saved_data_addr_regs[0xd] = saved_a5;
  exception_saved_data_addr_regs[0xe] = saved_a6;
  exception_saved_data_addr_regs[0xf] = (uint)register0x0000003c;
                    /* WARNING: Subroutine does not return */
  FatalExceptionScreen(9,exception_saved_data_addr_regs);
}




/* ============================================================
 * 000007de ExceptionVector24SpuriousIrq
 * ============================================================ */


void ExceptionVector24SpuriousIrq(void)

{
  return;
}




/* ============================================================
 * 000007e6 DefaultSpuriousIrqHandler
 * ============================================================ */


void DefaultSpuriousIrqHandler
               (uint saved_d0,uint saved_d1,uint saved_d2,uint saved_d3,uint saved_d4,uint saved_d5,
               uint saved_d6,uint saved_d7,uint saved_a0,uint saved_a1,uint saved_a2,uint saved_a3,
               uint saved_a4,uint saved_a5,uint saved_a6,ushort exception_stack_sr,
               uint exception_stack_pc)

{
  exception_saved_sr_or_special_status = exception_stack_sr;
  exception_saved_pc_or_fault_addr = exception_stack_pc;
  exception_saved_data_addr_regs[0] = saved_d0;
  exception_saved_data_addr_regs[1] = saved_d1;
  exception_saved_data_addr_regs[2] = saved_d2;
  exception_saved_data_addr_regs[3] = saved_d3;
  exception_saved_data_addr_regs[4] = saved_d4;
  exception_saved_data_addr_regs[5] = saved_d5;
  exception_saved_data_addr_regs[6] = saved_d6;
  exception_saved_data_addr_regs[7] = saved_d7;
  exception_saved_data_addr_regs[8] = saved_a0;
  exception_saved_data_addr_regs[9] = saved_a1;
  exception_saved_data_addr_regs[10] = saved_a2;
  exception_saved_data_addr_regs[0xb] = saved_a3;
  exception_saved_data_addr_regs[0xc] = saved_a4;
  exception_saved_data_addr_regs[0xd] = saved_a5;
  exception_saved_data_addr_regs[0xe] = saved_a6;
  exception_saved_data_addr_regs[0xf] = (uint)register0x0000003c;
                    /* WARNING: Subroutine does not return */
  FatalExceptionScreen(10,exception_saved_data_addr_regs);
}




/* ============================================================
 * 00000810 ExceptionVector25Irq1
 * ============================================================ */


void ExceptionVector25Irq1(void)

{
  return;
}




/* ============================================================
 * 00000818 DefaultIrq1Handler
 * ============================================================ */


void DefaultIrq1Handler(uint saved_d0,uint saved_d1,uint saved_d2,uint saved_d3,uint saved_d4,
                       uint saved_d5,uint saved_d6,uint saved_d7,uint saved_a0,uint saved_a1,
                       uint saved_a2,uint saved_a3,uint saved_a4,uint saved_a5,uint saved_a6,
                       ushort exception_stack_sr,uint exception_stack_pc)

{
  exception_saved_sr_or_special_status = exception_stack_sr;
  exception_saved_pc_or_fault_addr = exception_stack_pc;
  exception_saved_data_addr_regs[0] = saved_d0;
  exception_saved_data_addr_regs[1] = saved_d1;
  exception_saved_data_addr_regs[2] = saved_d2;
  exception_saved_data_addr_regs[3] = saved_d3;
  exception_saved_data_addr_regs[4] = saved_d4;
  exception_saved_data_addr_regs[5] = saved_d5;
  exception_saved_data_addr_regs[6] = saved_d6;
  exception_saved_data_addr_regs[7] = saved_d7;
  exception_saved_data_addr_regs[8] = saved_a0;
  exception_saved_data_addr_regs[9] = saved_a1;
  exception_saved_data_addr_regs[10] = saved_a2;
  exception_saved_data_addr_regs[0xb] = saved_a3;
  exception_saved_data_addr_regs[0xc] = saved_a4;
  exception_saved_data_addr_regs[0xd] = saved_a5;
  exception_saved_data_addr_regs[0xe] = saved_a6;
  exception_saved_data_addr_regs[0xf] = (uint)register0x0000003c;
                    /* WARNING: Subroutine does not return */
  FatalExceptionScreen(0xb,exception_saved_data_addr_regs);
}




/* ============================================================
 * 00000842 ExceptionVector26Irq2
 * ============================================================ */


void ExceptionVector26Irq2(void)

{
  return;
}




/* ============================================================
 * 0000084a DefaultIrq2Handler
 * ============================================================ */


void DefaultIrq2Handler(uint saved_d0,uint saved_d1,uint saved_d2,uint saved_d3,uint saved_d4,
                       uint saved_d5,uint saved_d6,uint saved_d7,uint saved_a0,uint saved_a1,
                       uint saved_a2,uint saved_a3,uint saved_a4,uint saved_a5,uint saved_a6,
                       ushort exception_stack_sr,uint exception_stack_pc)

{
  exception_saved_sr_or_special_status = exception_stack_sr;
  exception_saved_pc_or_fault_addr = exception_stack_pc;
  exception_saved_data_addr_regs[0] = saved_d0;
  exception_saved_data_addr_regs[1] = saved_d1;
  exception_saved_data_addr_regs[2] = saved_d2;
  exception_saved_data_addr_regs[3] = saved_d3;
  exception_saved_data_addr_regs[4] = saved_d4;
  exception_saved_data_addr_regs[5] = saved_d5;
  exception_saved_data_addr_regs[6] = saved_d6;
  exception_saved_data_addr_regs[7] = saved_d7;
  exception_saved_data_addr_regs[8] = saved_a0;
  exception_saved_data_addr_regs[9] = saved_a1;
  exception_saved_data_addr_regs[10] = saved_a2;
  exception_saved_data_addr_regs[0xb] = saved_a3;
  exception_saved_data_addr_regs[0xc] = saved_a4;
  exception_saved_data_addr_regs[0xd] = saved_a5;
  exception_saved_data_addr_regs[0xe] = saved_a6;
  exception_saved_data_addr_regs[0xf] = (uint)register0x0000003c;
                    /* WARNING: Subroutine does not return */
  FatalExceptionScreen(0xc,exception_saved_data_addr_regs);
}




/* ============================================================
 * 00000874 UnusedExceptionVector27Thunk
 * ============================================================ */


void UnusedExceptionVector27Thunk(void)

{
  return;
}




/* ============================================================
 * 0000087c UnusedDefaultVector27Handler
 * ============================================================ */


void UnusedDefaultVector27Handler
               (uint saved_d0,uint saved_d1,uint saved_d2,uint saved_d3,uint saved_d4,uint saved_d5,
               uint saved_d6,uint saved_d7,uint saved_a0,uint saved_a1,uint saved_a2,uint saved_a3,
               uint saved_a4,uint saved_a5,uint saved_a6,ushort exception_stack_sr,
               uint exception_stack_pc)

{
  exception_saved_sr_or_special_status = exception_stack_sr;
  exception_saved_pc_or_fault_addr = exception_stack_pc;
  exception_saved_data_addr_regs[0] = saved_d0;
  exception_saved_data_addr_regs[1] = saved_d1;
  exception_saved_data_addr_regs[2] = saved_d2;
  exception_saved_data_addr_regs[3] = saved_d3;
  exception_saved_data_addr_regs[4] = saved_d4;
  exception_saved_data_addr_regs[5] = saved_d5;
  exception_saved_data_addr_regs[6] = saved_d6;
  exception_saved_data_addr_regs[7] = saved_d7;
  exception_saved_data_addr_regs[8] = saved_a0;
  exception_saved_data_addr_regs[9] = saved_a1;
  exception_saved_data_addr_regs[10] = saved_a2;
  exception_saved_data_addr_regs[0xb] = saved_a3;
  exception_saved_data_addr_regs[0xc] = saved_a4;
  exception_saved_data_addr_regs[0xd] = saved_a5;
  exception_saved_data_addr_regs[0xe] = saved_a6;
  exception_saved_data_addr_regs[0xf] = (uint)register0x0000003c;
                    /* WARNING: Subroutine does not return */
  FatalExceptionScreen(0xd,exception_saved_data_addr_regs);
}




/* ============================================================
 * 000008a6 UnusedExceptionVector28Thunk
 * ============================================================ */


void UnusedExceptionVector28Thunk(void)

{
  return;
}




/* ============================================================
 * 000008ae UnusedDefaultVector28Handler
 * ============================================================ */


void UnusedDefaultVector28Handler
               (uint saved_d0,uint saved_d1,uint saved_d2,uint saved_d3,uint saved_d4,uint saved_d5,
               uint saved_d6,uint saved_d7,uint saved_a0,uint saved_a1,uint saved_a2,uint saved_a3,
               uint saved_a4,uint saved_a5,uint saved_a6,ushort exception_stack_sr,
               uint exception_stack_pc)

{
  exception_saved_sr_or_special_status = exception_stack_sr;
  exception_saved_pc_or_fault_addr = exception_stack_pc;
  exception_saved_data_addr_regs[0] = saved_d0;
  exception_saved_data_addr_regs[1] = saved_d1;
  exception_saved_data_addr_regs[2] = saved_d2;
  exception_saved_data_addr_regs[3] = saved_d3;
  exception_saved_data_addr_regs[4] = saved_d4;
  exception_saved_data_addr_regs[5] = saved_d5;
  exception_saved_data_addr_regs[6] = saved_d6;
  exception_saved_data_addr_regs[7] = saved_d7;
  exception_saved_data_addr_regs[8] = saved_a0;
  exception_saved_data_addr_regs[9] = saved_a1;
  exception_saved_data_addr_regs[10] = saved_a2;
  exception_saved_data_addr_regs[0xb] = saved_a3;
  exception_saved_data_addr_regs[0xc] = saved_a4;
  exception_saved_data_addr_regs[0xd] = saved_a5;
  exception_saved_data_addr_regs[0xe] = saved_a6;
  exception_saved_data_addr_regs[0xf] = (uint)register0x0000003c;
                    /* WARNING: Subroutine does not return */
  FatalExceptionScreen(0xe,exception_saved_data_addr_regs);
}




/* ============================================================
 * 000008d8 ExceptionVector29Irq5
 * ============================================================ */


void ExceptionVector29Irq5(void)

{
  return;
}




/* ============================================================
 * 000008e0 DefaultIrq5Handler
 * ============================================================ */


void DefaultIrq5Handler(uint saved_d0,uint saved_d1,uint saved_d2,uint saved_d3,uint saved_d4,
                       uint saved_d5,uint saved_d6,uint saved_d7,uint saved_a0,uint saved_a1,
                       uint saved_a2,uint saved_a3,uint saved_a4,uint saved_a5,uint saved_a6,
                       ushort exception_stack_sr,uint exception_stack_pc)

{
  exception_saved_sr_or_special_status = exception_stack_sr;
  exception_saved_pc_or_fault_addr = exception_stack_pc;
  exception_saved_data_addr_regs[0] = saved_d0;
  exception_saved_data_addr_regs[1] = saved_d1;
  exception_saved_data_addr_regs[2] = saved_d2;
  exception_saved_data_addr_regs[3] = saved_d3;
  exception_saved_data_addr_regs[4] = saved_d4;
  exception_saved_data_addr_regs[5] = saved_d5;
  exception_saved_data_addr_regs[6] = saved_d6;
  exception_saved_data_addr_regs[7] = saved_d7;
  exception_saved_data_addr_regs[8] = saved_a0;
  exception_saved_data_addr_regs[9] = saved_a1;
  exception_saved_data_addr_regs[10] = saved_a2;
  exception_saved_data_addr_regs[0xb] = saved_a3;
  exception_saved_data_addr_regs[0xc] = saved_a4;
  exception_saved_data_addr_regs[0xd] = saved_a5;
  exception_saved_data_addr_regs[0xe] = saved_a6;
  exception_saved_data_addr_regs[0xf] = (uint)register0x0000003c;
                    /* WARNING: Subroutine does not return */
  FatalExceptionScreen(0xf,exception_saved_data_addr_regs);
}




/* ============================================================
 * 0000090a UnusedExceptionVector30Thunk
 * ============================================================ */


void UnusedExceptionVector30Thunk(void)

{
  return;
}




/* ============================================================
 * 00000912 UnusedDefaultVector30Handler
 * ============================================================ */


void UnusedDefaultVector30Handler
               (uint saved_d0,uint saved_d1,uint saved_d2,uint saved_d3,uint saved_d4,uint saved_d5,
               uint saved_d6,uint saved_d7,uint saved_a0,uint saved_a1,uint saved_a2,uint saved_a3,
               uint saved_a4,uint saved_a5,uint saved_a6,ushort exception_stack_sr,
               uint exception_stack_pc)

{
  exception_saved_sr_or_special_status = exception_stack_sr;
  exception_saved_pc_or_fault_addr = exception_stack_pc;
  exception_saved_data_addr_regs[0] = saved_d0;
  exception_saved_data_addr_regs[1] = saved_d1;
  exception_saved_data_addr_regs[2] = saved_d2;
  exception_saved_data_addr_regs[3] = saved_d3;
  exception_saved_data_addr_regs[4] = saved_d4;
  exception_saved_data_addr_regs[5] = saved_d5;
  exception_saved_data_addr_regs[6] = saved_d6;
  exception_saved_data_addr_regs[7] = saved_d7;
  exception_saved_data_addr_regs[8] = saved_a0;
  exception_saved_data_addr_regs[9] = saved_a1;
  exception_saved_data_addr_regs[10] = saved_a2;
  exception_saved_data_addr_regs[0xb] = saved_a3;
  exception_saved_data_addr_regs[0xc] = saved_a4;
  exception_saved_data_addr_regs[0xd] = saved_a5;
  exception_saved_data_addr_regs[0xe] = saved_a6;
  exception_saved_data_addr_regs[0xf] = (uint)register0x0000003c;
                    /* WARNING: Subroutine does not return */
  FatalExceptionScreen(0x10,exception_saved_data_addr_regs);
}




/* ============================================================
 * 0000093c ExceptionVector31Irq7
 * ============================================================ */


void ExceptionVector31Irq7(void)

{
  return;
}




/* ============================================================
 * 00000944 DefaultIrq7Handler
 * ============================================================ */


void DefaultIrq7Handler(uint saved_d0,uint saved_d1,uint saved_d2,uint saved_d3,uint saved_d4,
                       uint saved_d5,uint saved_d6,uint saved_d7,uint saved_a0,uint saved_a1,
                       uint saved_a2,uint saved_a3,uint saved_a4,uint saved_a5,uint saved_a6,
                       ushort exception_stack_sr,uint exception_stack_pc)

{
  exception_saved_sr_or_special_status = exception_stack_sr;
  exception_saved_pc_or_fault_addr = exception_stack_pc;
  exception_saved_data_addr_regs[0] = saved_d0;
  exception_saved_data_addr_regs[1] = saved_d1;
  exception_saved_data_addr_regs[2] = saved_d2;
  exception_saved_data_addr_regs[3] = saved_d3;
  exception_saved_data_addr_regs[4] = saved_d4;
  exception_saved_data_addr_regs[5] = saved_d5;
  exception_saved_data_addr_regs[6] = saved_d6;
  exception_saved_data_addr_regs[7] = saved_d7;
  exception_saved_data_addr_regs[8] = saved_a0;
  exception_saved_data_addr_regs[9] = saved_a1;
  exception_saved_data_addr_regs[10] = saved_a2;
  exception_saved_data_addr_regs[0xb] = saved_a3;
  exception_saved_data_addr_regs[0xc] = saved_a4;
  exception_saved_data_addr_regs[0xd] = saved_a5;
  exception_saved_data_addr_regs[0xe] = saved_a6;
  exception_saved_data_addr_regs[0xf] = (uint)register0x0000003c;
                    /* WARNING: Subroutine does not return */
  FatalExceptionScreen(0x11,exception_saved_data_addr_regs);
}




/* ============================================================
 * 0000096e ExceptionVector32Trap0
 * ============================================================ */


void ExceptionVector32Trap0(void)

{
  return;
}




/* ============================================================
 * 00000976 DefaultTrap0Handler
 * ============================================================ */


void DefaultTrap0Handler(uint saved_d0,uint saved_d1,uint saved_d2,uint saved_d3,uint saved_d4,
                        uint saved_d5,uint saved_d6,uint saved_d7,uint saved_a0,uint saved_a1,
                        uint saved_a2,uint saved_a3,uint saved_a4,uint saved_a5,uint saved_a6,
                        ushort exception_stack_sr,uint exception_stack_pc)

{
  exception_saved_sr_or_special_status = exception_stack_sr;
  exception_saved_pc_or_fault_addr = exception_stack_pc;
  exception_saved_data_addr_regs[0] = saved_d0;
  exception_saved_data_addr_regs[1] = saved_d1;
  exception_saved_data_addr_regs[2] = saved_d2;
  exception_saved_data_addr_regs[3] = saved_d3;
  exception_saved_data_addr_regs[4] = saved_d4;
  exception_saved_data_addr_regs[5] = saved_d5;
  exception_saved_data_addr_regs[6] = saved_d6;
  exception_saved_data_addr_regs[7] = saved_d7;
  exception_saved_data_addr_regs[8] = saved_a0;
  exception_saved_data_addr_regs[9] = saved_a1;
  exception_saved_data_addr_regs[10] = saved_a2;
  exception_saved_data_addr_regs[0xb] = saved_a3;
  exception_saved_data_addr_regs[0xc] = saved_a4;
  exception_saved_data_addr_regs[0xd] = saved_a5;
  exception_saved_data_addr_regs[0xe] = saved_a6;
  exception_saved_data_addr_regs[0xf] = (uint)register0x0000003c;
                    /* WARNING: Subroutine does not return */
  FatalExceptionScreen(0x12,exception_saved_data_addr_regs);
}




/* ============================================================
 * 000009a0 ExceptionVector33Trap1
 * ============================================================ */


void ExceptionVector33Trap1(void)

{
  return;
}




/* ============================================================
 * 000009a8 DefaultTrap1Handler
 * ============================================================ */


void DefaultTrap1Handler(uint saved_d0,uint saved_d1,uint saved_d2,uint saved_d3,uint saved_d4,
                        uint saved_d5,uint saved_d6,uint saved_d7,uint saved_a0,uint saved_a1,
                        uint saved_a2,uint saved_a3,uint saved_a4,uint saved_a5,uint saved_a6,
                        ushort exception_stack_sr,uint exception_stack_pc)

{
  exception_saved_sr_or_special_status = exception_stack_sr;
  exception_saved_pc_or_fault_addr = exception_stack_pc;
  exception_saved_data_addr_regs[0] = saved_d0;
  exception_saved_data_addr_regs[1] = saved_d1;
  exception_saved_data_addr_regs[2] = saved_d2;
  exception_saved_data_addr_regs[3] = saved_d3;
  exception_saved_data_addr_regs[4] = saved_d4;
  exception_saved_data_addr_regs[5] = saved_d5;
  exception_saved_data_addr_regs[6] = saved_d6;
  exception_saved_data_addr_regs[7] = saved_d7;
  exception_saved_data_addr_regs[8] = saved_a0;
  exception_saved_data_addr_regs[9] = saved_a1;
  exception_saved_data_addr_regs[10] = saved_a2;
  exception_saved_data_addr_regs[0xb] = saved_a3;
  exception_saved_data_addr_regs[0xc] = saved_a4;
  exception_saved_data_addr_regs[0xd] = saved_a5;
  exception_saved_data_addr_regs[0xe] = saved_a6;
  exception_saved_data_addr_regs[0xf] = (uint)register0x0000003c;
                    /* WARNING: Subroutine does not return */
  FatalExceptionScreen(0x13,exception_saved_data_addr_regs);
}




/* ============================================================
 * 000009d2 ExceptionVector34Trap2
 * ============================================================ */


void ExceptionVector34Trap2(void)

{
  return;
}




/* ============================================================
 * 000009da DefaultTrap2Handler
 * ============================================================ */


void DefaultTrap2Handler(uint saved_d0,uint saved_d1,uint saved_d2,uint saved_d3,uint saved_d4,
                        uint saved_d5,uint saved_d6,uint saved_d7,uint saved_a0,uint saved_a1,
                        uint saved_a2,uint saved_a3,uint saved_a4,uint saved_a5,uint saved_a6,
                        ushort exception_stack_sr,uint exception_stack_pc)

{
  exception_saved_sr_or_special_status = exception_stack_sr;
  exception_saved_pc_or_fault_addr = exception_stack_pc;
  exception_saved_data_addr_regs[0] = saved_d0;
  exception_saved_data_addr_regs[1] = saved_d1;
  exception_saved_data_addr_regs[2] = saved_d2;
  exception_saved_data_addr_regs[3] = saved_d3;
  exception_saved_data_addr_regs[4] = saved_d4;
  exception_saved_data_addr_regs[5] = saved_d5;
  exception_saved_data_addr_regs[6] = saved_d6;
  exception_saved_data_addr_regs[7] = saved_d7;
  exception_saved_data_addr_regs[8] = saved_a0;
  exception_saved_data_addr_regs[9] = saved_a1;
  exception_saved_data_addr_regs[10] = saved_a2;
  exception_saved_data_addr_regs[0xb] = saved_a3;
  exception_saved_data_addr_regs[0xc] = saved_a4;
  exception_saved_data_addr_regs[0xd] = saved_a5;
  exception_saved_data_addr_regs[0xe] = saved_a6;
  exception_saved_data_addr_regs[0xf] = (uint)register0x0000003c;
                    /* WARNING: Subroutine does not return */
  FatalExceptionScreen(0x14,exception_saved_data_addr_regs);
}




/* ============================================================
 * 00000a04 ExceptionVector35Trap3
 * ============================================================ */


void ExceptionVector35Trap3(void)

{
  return;
}




/* ============================================================
 * 00000a0c DefaultTrap3Handler
 * ============================================================ */


void DefaultTrap3Handler(uint saved_d0,uint saved_d1,uint saved_d2,uint saved_d3,uint saved_d4,
                        uint saved_d5,uint saved_d6,uint saved_d7,uint saved_a0,uint saved_a1,
                        uint saved_a2,uint saved_a3,uint saved_a4,uint saved_a5,uint saved_a6,
                        ushort exception_stack_sr,uint exception_stack_pc)

{
  exception_saved_sr_or_special_status = exception_stack_sr;
  exception_saved_pc_or_fault_addr = exception_stack_pc;
  exception_saved_data_addr_regs[0] = saved_d0;
  exception_saved_data_addr_regs[1] = saved_d1;
  exception_saved_data_addr_regs[2] = saved_d2;
  exception_saved_data_addr_regs[3] = saved_d3;
  exception_saved_data_addr_regs[4] = saved_d4;
  exception_saved_data_addr_regs[5] = saved_d5;
  exception_saved_data_addr_regs[6] = saved_d6;
  exception_saved_data_addr_regs[7] = saved_d7;
  exception_saved_data_addr_regs[8] = saved_a0;
  exception_saved_data_addr_regs[9] = saved_a1;
  exception_saved_data_addr_regs[10] = saved_a2;
  exception_saved_data_addr_regs[0xb] = saved_a3;
  exception_saved_data_addr_regs[0xc] = saved_a4;
  exception_saved_data_addr_regs[0xd] = saved_a5;
  exception_saved_data_addr_regs[0xe] = saved_a6;
  exception_saved_data_addr_regs[0xf] = (uint)register0x0000003c;
                    /* WARNING: Subroutine does not return */
  FatalExceptionScreen(0x15,exception_saved_data_addr_regs);
}




/* ============================================================
 * 00000a36 ExceptionVector36Trap4
 * ============================================================ */


void ExceptionVector36Trap4(void)

{
  return;
}




/* ============================================================
 * 00000a3e DefaultTrap4Handler
 * ============================================================ */


void DefaultTrap4Handler(uint saved_d0,uint saved_d1,uint saved_d2,uint saved_d3,uint saved_d4,
                        uint saved_d5,uint saved_d6,uint saved_d7,uint saved_a0,uint saved_a1,
                        uint saved_a2,uint saved_a3,uint saved_a4,uint saved_a5,uint saved_a6,
                        ushort exception_stack_sr,uint exception_stack_pc)

{
  exception_saved_sr_or_special_status = exception_stack_sr;
  exception_saved_pc_or_fault_addr = exception_stack_pc;
  exception_saved_data_addr_regs[0] = saved_d0;
  exception_saved_data_addr_regs[1] = saved_d1;
  exception_saved_data_addr_regs[2] = saved_d2;
  exception_saved_data_addr_regs[3] = saved_d3;
  exception_saved_data_addr_regs[4] = saved_d4;
  exception_saved_data_addr_regs[5] = saved_d5;
  exception_saved_data_addr_regs[6] = saved_d6;
  exception_saved_data_addr_regs[7] = saved_d7;
  exception_saved_data_addr_regs[8] = saved_a0;
  exception_saved_data_addr_regs[9] = saved_a1;
  exception_saved_data_addr_regs[10] = saved_a2;
  exception_saved_data_addr_regs[0xb] = saved_a3;
  exception_saved_data_addr_regs[0xc] = saved_a4;
  exception_saved_data_addr_regs[0xd] = saved_a5;
  exception_saved_data_addr_regs[0xe] = saved_a6;
  exception_saved_data_addr_regs[0xf] = (uint)register0x0000003c;
                    /* WARNING: Subroutine does not return */
  FatalExceptionScreen(0x16,exception_saved_data_addr_regs);
}




/* ============================================================
 * 00000a68 ExceptionVector37Trap5
 * ============================================================ */


void ExceptionVector37Trap5(void)

{
  return;
}




/* ============================================================
 * 00000a70 DefaultTrap5Handler
 * ============================================================ */


void DefaultTrap5Handler(uint saved_d0,uint saved_d1,uint saved_d2,uint saved_d3,uint saved_d4,
                        uint saved_d5,uint saved_d6,uint saved_d7,uint saved_a0,uint saved_a1,
                        uint saved_a2,uint saved_a3,uint saved_a4,uint saved_a5,uint saved_a6,
                        ushort exception_stack_sr,uint exception_stack_pc)

{
  exception_saved_sr_or_special_status = exception_stack_sr;
  exception_saved_pc_or_fault_addr = exception_stack_pc;
  exception_saved_data_addr_regs[0] = saved_d0;
  exception_saved_data_addr_regs[1] = saved_d1;
  exception_saved_data_addr_regs[2] = saved_d2;
  exception_saved_data_addr_regs[3] = saved_d3;
  exception_saved_data_addr_regs[4] = saved_d4;
  exception_saved_data_addr_regs[5] = saved_d5;
  exception_saved_data_addr_regs[6] = saved_d6;
  exception_saved_data_addr_regs[7] = saved_d7;
  exception_saved_data_addr_regs[8] = saved_a0;
  exception_saved_data_addr_regs[9] = saved_a1;
  exception_saved_data_addr_regs[10] = saved_a2;
  exception_saved_data_addr_regs[0xb] = saved_a3;
  exception_saved_data_addr_regs[0xc] = saved_a4;
  exception_saved_data_addr_regs[0xd] = saved_a5;
  exception_saved_data_addr_regs[0xe] = saved_a6;
  exception_saved_data_addr_regs[0xf] = (uint)register0x0000003c;
                    /* WARNING: Subroutine does not return */
  FatalExceptionScreen(0x17,exception_saved_data_addr_regs);
}




/* ============================================================
 * 00000a9a ExceptionVector38Trap6
 * ============================================================ */


void ExceptionVector38Trap6(void)

{
  return;
}




/* ============================================================
 * 00000aa2 DefaultTrap6Handler
 * ============================================================ */


void DefaultTrap6Handler(uint saved_d0,uint saved_d1,uint saved_d2,uint saved_d3,uint saved_d4,
                        uint saved_d5,uint saved_d6,uint saved_d7,uint saved_a0,uint saved_a1,
                        uint saved_a2,uint saved_a3,uint saved_a4,uint saved_a5,uint saved_a6,
                        ushort exception_stack_sr,uint exception_stack_pc)

{
  exception_saved_sr_or_special_status = exception_stack_sr;
  exception_saved_pc_or_fault_addr = exception_stack_pc;
  exception_saved_data_addr_regs[0] = saved_d0;
  exception_saved_data_addr_regs[1] = saved_d1;
  exception_saved_data_addr_regs[2] = saved_d2;
  exception_saved_data_addr_regs[3] = saved_d3;
  exception_saved_data_addr_regs[4] = saved_d4;
  exception_saved_data_addr_regs[5] = saved_d5;
  exception_saved_data_addr_regs[6] = saved_d6;
  exception_saved_data_addr_regs[7] = saved_d7;
  exception_saved_data_addr_regs[8] = saved_a0;
  exception_saved_data_addr_regs[9] = saved_a1;
  exception_saved_data_addr_regs[10] = saved_a2;
  exception_saved_data_addr_regs[0xb] = saved_a3;
  exception_saved_data_addr_regs[0xc] = saved_a4;
  exception_saved_data_addr_regs[0xd] = saved_a5;
  exception_saved_data_addr_regs[0xe] = saved_a6;
  exception_saved_data_addr_regs[0xf] = (uint)register0x0000003c;
                    /* WARNING: Subroutine does not return */
  FatalExceptionScreen(0x18,exception_saved_data_addr_regs);
}




/* ============================================================
 * 00000acc ExceptionVector39Trap7
 * ============================================================ */


void ExceptionVector39Trap7(void)

{
  return;
}




/* ============================================================
 * 00000ad4 DefaultTrap7Handler
 * ============================================================ */


void DefaultTrap7Handler(uint saved_d0,uint saved_d1,uint saved_d2,uint saved_d3,uint saved_d4,
                        uint saved_d5,uint saved_d6,uint saved_d7,uint saved_a0,uint saved_a1,
                        uint saved_a2,uint saved_a3,uint saved_a4,uint saved_a5,uint saved_a6,
                        ushort exception_stack_sr,uint exception_stack_pc)

{
  exception_saved_sr_or_special_status = exception_stack_sr;
  exception_saved_pc_or_fault_addr = exception_stack_pc;
  exception_saved_data_addr_regs[0] = saved_d0;
  exception_saved_data_addr_regs[1] = saved_d1;
  exception_saved_data_addr_regs[2] = saved_d2;
  exception_saved_data_addr_regs[3] = saved_d3;
  exception_saved_data_addr_regs[4] = saved_d4;
  exception_saved_data_addr_regs[5] = saved_d5;
  exception_saved_data_addr_regs[6] = saved_d6;
  exception_saved_data_addr_regs[7] = saved_d7;
  exception_saved_data_addr_regs[8] = saved_a0;
  exception_saved_data_addr_regs[9] = saved_a1;
  exception_saved_data_addr_regs[10] = saved_a2;
  exception_saved_data_addr_regs[0xb] = saved_a3;
  exception_saved_data_addr_regs[0xc] = saved_a4;
  exception_saved_data_addr_regs[0xd] = saved_a5;
  exception_saved_data_addr_regs[0xe] = saved_a6;
  exception_saved_data_addr_regs[0xf] = (uint)register0x0000003c;
                    /* WARNING: Subroutine does not return */
  FatalExceptionScreen(0x19,exception_saved_data_addr_regs);
}




/* ============================================================
 * 00000afe ExceptionVector40Trap8
 * ============================================================ */


void ExceptionVector40Trap8(void)

{
  return;
}




/* ============================================================
 * 00000b06 DefaultTrap8Handler
 * ============================================================ */


void DefaultTrap8Handler(uint saved_d0,uint saved_d1,uint saved_d2,uint saved_d3,uint saved_d4,
                        uint saved_d5,uint saved_d6,uint saved_d7,uint saved_a0,uint saved_a1,
                        uint saved_a2,uint saved_a3,uint saved_a4,uint saved_a5,uint saved_a6,
                        ushort exception_stack_sr,uint exception_stack_pc)

{
  exception_saved_sr_or_special_status = exception_stack_sr;
  exception_saved_pc_or_fault_addr = exception_stack_pc;
  exception_saved_data_addr_regs[0] = saved_d0;
  exception_saved_data_addr_regs[1] = saved_d1;
  exception_saved_data_addr_regs[2] = saved_d2;
  exception_saved_data_addr_regs[3] = saved_d3;
  exception_saved_data_addr_regs[4] = saved_d4;
  exception_saved_data_addr_regs[5] = saved_d5;
  exception_saved_data_addr_regs[6] = saved_d6;
  exception_saved_data_addr_regs[7] = saved_d7;
  exception_saved_data_addr_regs[8] = saved_a0;
  exception_saved_data_addr_regs[9] = saved_a1;
  exception_saved_data_addr_regs[10] = saved_a2;
  exception_saved_data_addr_regs[0xb] = saved_a3;
  exception_saved_data_addr_regs[0xc] = saved_a4;
  exception_saved_data_addr_regs[0xd] = saved_a5;
  exception_saved_data_addr_regs[0xe] = saved_a6;
  exception_saved_data_addr_regs[0xf] = (uint)register0x0000003c;
                    /* WARNING: Subroutine does not return */
  FatalExceptionScreen(0x1a,exception_saved_data_addr_regs);
}




/* ============================================================
 * 00000b30 ExceptionVector41Trap9
 * ============================================================ */


void ExceptionVector41Trap9(void)

{
  return;
}




/* ============================================================
 * 00000b38 DefaultTrap9Handler
 * ============================================================ */


void DefaultTrap9Handler(uint saved_d0,uint saved_d1,uint saved_d2,uint saved_d3,uint saved_d4,
                        uint saved_d5,uint saved_d6,uint saved_d7,uint saved_a0,uint saved_a1,
                        uint saved_a2,uint saved_a3,uint saved_a4,uint saved_a5,uint saved_a6,
                        ushort exception_stack_sr,uint exception_stack_pc)

{
  exception_saved_sr_or_special_status = exception_stack_sr;
  exception_saved_pc_or_fault_addr = exception_stack_pc;
  exception_saved_data_addr_regs[0] = saved_d0;
  exception_saved_data_addr_regs[1] = saved_d1;
  exception_saved_data_addr_regs[2] = saved_d2;
  exception_saved_data_addr_regs[3] = saved_d3;
  exception_saved_data_addr_regs[4] = saved_d4;
  exception_saved_data_addr_regs[5] = saved_d5;
  exception_saved_data_addr_regs[6] = saved_d6;
  exception_saved_data_addr_regs[7] = saved_d7;
  exception_saved_data_addr_regs[8] = saved_a0;
  exception_saved_data_addr_regs[9] = saved_a1;
  exception_saved_data_addr_regs[10] = saved_a2;
  exception_saved_data_addr_regs[0xb] = saved_a3;
  exception_saved_data_addr_regs[0xc] = saved_a4;
  exception_saved_data_addr_regs[0xd] = saved_a5;
  exception_saved_data_addr_regs[0xe] = saved_a6;
  exception_saved_data_addr_regs[0xf] = (uint)register0x0000003c;
                    /* WARNING: Subroutine does not return */
  FatalExceptionScreen(0x1b,exception_saved_data_addr_regs);
}




/* ============================================================
 * 00000b62 ExceptionVector42Trap10
 * ============================================================ */


void ExceptionVector42Trap10(void)

{
  return;
}




/* ============================================================
 * 00000b6a DefaultTrap10Handler
 * ============================================================ */


void DefaultTrap10Handler
               (uint saved_d0,uint saved_d1,uint saved_d2,uint saved_d3,uint saved_d4,uint saved_d5,
               uint saved_d6,uint saved_d7,uint saved_a0,uint saved_a1,uint saved_a2,uint saved_a3,
               uint saved_a4,uint saved_a5,uint saved_a6,ushort exception_stack_sr,
               uint exception_stack_pc)

{
  exception_saved_sr_or_special_status = exception_stack_sr;
  exception_saved_pc_or_fault_addr = exception_stack_pc;
  exception_saved_data_addr_regs[0] = saved_d0;
  exception_saved_data_addr_regs[1] = saved_d1;
  exception_saved_data_addr_regs[2] = saved_d2;
  exception_saved_data_addr_regs[3] = saved_d3;
  exception_saved_data_addr_regs[4] = saved_d4;
  exception_saved_data_addr_regs[5] = saved_d5;
  exception_saved_data_addr_regs[6] = saved_d6;
  exception_saved_data_addr_regs[7] = saved_d7;
  exception_saved_data_addr_regs[8] = saved_a0;
  exception_saved_data_addr_regs[9] = saved_a1;
  exception_saved_data_addr_regs[10] = saved_a2;
  exception_saved_data_addr_regs[0xb] = saved_a3;
  exception_saved_data_addr_regs[0xc] = saved_a4;
  exception_saved_data_addr_regs[0xd] = saved_a5;
  exception_saved_data_addr_regs[0xe] = saved_a6;
  exception_saved_data_addr_regs[0xf] = (uint)register0x0000003c;
                    /* WARNING: Subroutine does not return */
  FatalExceptionScreen(0x1c,exception_saved_data_addr_regs);
}




/* ============================================================
 * 00000b94 ExceptionVector43Trap11
 * ============================================================ */


void ExceptionVector43Trap11(void)

{
  return;
}




/* ============================================================
 * 00000b9c DefaultTrap11Handler
 * ============================================================ */


void DefaultTrap11Handler
               (uint saved_d0,uint saved_d1,uint saved_d2,uint saved_d3,uint saved_d4,uint saved_d5,
               uint saved_d6,uint saved_d7,uint saved_a0,uint saved_a1,uint saved_a2,uint saved_a3,
               uint saved_a4,uint saved_a5,uint saved_a6,ushort exception_stack_sr,
               uint exception_stack_pc)

{
  exception_saved_sr_or_special_status = exception_stack_sr;
  exception_saved_pc_or_fault_addr = exception_stack_pc;
  exception_saved_data_addr_regs[0] = saved_d0;
  exception_saved_data_addr_regs[1] = saved_d1;
  exception_saved_data_addr_regs[2] = saved_d2;
  exception_saved_data_addr_regs[3] = saved_d3;
  exception_saved_data_addr_regs[4] = saved_d4;
  exception_saved_data_addr_regs[5] = saved_d5;
  exception_saved_data_addr_regs[6] = saved_d6;
  exception_saved_data_addr_regs[7] = saved_d7;
  exception_saved_data_addr_regs[8] = saved_a0;
  exception_saved_data_addr_regs[9] = saved_a1;
  exception_saved_data_addr_regs[10] = saved_a2;
  exception_saved_data_addr_regs[0xb] = saved_a3;
  exception_saved_data_addr_regs[0xc] = saved_a4;
  exception_saved_data_addr_regs[0xd] = saved_a5;
  exception_saved_data_addr_regs[0xe] = saved_a6;
  exception_saved_data_addr_regs[0xf] = (uint)register0x0000003c;
                    /* WARNING: Subroutine does not return */
  FatalExceptionScreen(0x1d,exception_saved_data_addr_regs);
}




/* ============================================================
 * 00000bc6 ExceptionVector44Trap12
 * ============================================================ */


void ExceptionVector44Trap12(void)

{
  return;
}




/* ============================================================
 * 00000bce DefaultTrap12Handler
 * ============================================================ */


void DefaultTrap12Handler
               (uint saved_d0,uint saved_d1,uint saved_d2,uint saved_d3,uint saved_d4,uint saved_d5,
               uint saved_d6,uint saved_d7,uint saved_a0,uint saved_a1,uint saved_a2,uint saved_a3,
               uint saved_a4,uint saved_a5,uint saved_a6,ushort exception_stack_sr,
               uint exception_stack_pc)

{
  exception_saved_sr_or_special_status = exception_stack_sr;
  exception_saved_pc_or_fault_addr = exception_stack_pc;
  exception_saved_data_addr_regs[0] = saved_d0;
  exception_saved_data_addr_regs[1] = saved_d1;
  exception_saved_data_addr_regs[2] = saved_d2;
  exception_saved_data_addr_regs[3] = saved_d3;
  exception_saved_data_addr_regs[4] = saved_d4;
  exception_saved_data_addr_regs[5] = saved_d5;
  exception_saved_data_addr_regs[6] = saved_d6;
  exception_saved_data_addr_regs[7] = saved_d7;
  exception_saved_data_addr_regs[8] = saved_a0;
  exception_saved_data_addr_regs[9] = saved_a1;
  exception_saved_data_addr_regs[10] = saved_a2;
  exception_saved_data_addr_regs[0xb] = saved_a3;
  exception_saved_data_addr_regs[0xc] = saved_a4;
  exception_saved_data_addr_regs[0xd] = saved_a5;
  exception_saved_data_addr_regs[0xe] = saved_a6;
  exception_saved_data_addr_regs[0xf] = (uint)register0x0000003c;
                    /* WARNING: Subroutine does not return */
  FatalExceptionScreen(0x1e,exception_saved_data_addr_regs);
}




/* ============================================================
 * 00000bf8 ExceptionVector45Trap13
 * ============================================================ */


void ExceptionVector45Trap13(void)

{
  return;
}




/* ============================================================
 * 00000c00 DefaultTrap13Handler
 * ============================================================ */


void DefaultTrap13Handler
               (uint saved_d0,uint saved_d1,uint saved_d2,uint saved_d3,uint saved_d4,uint saved_d5,
               uint saved_d6,uint saved_d7,uint saved_a0,uint saved_a1,uint saved_a2,uint saved_a3,
               uint saved_a4,uint saved_a5,uint saved_a6,ushort exception_stack_sr,
               uint exception_stack_pc)

{
  exception_saved_sr_or_special_status = exception_stack_sr;
  exception_saved_pc_or_fault_addr = exception_stack_pc;
  exception_saved_data_addr_regs[0] = saved_d0;
  exception_saved_data_addr_regs[1] = saved_d1;
  exception_saved_data_addr_regs[2] = saved_d2;
  exception_saved_data_addr_regs[3] = saved_d3;
  exception_saved_data_addr_regs[4] = saved_d4;
  exception_saved_data_addr_regs[5] = saved_d5;
  exception_saved_data_addr_regs[6] = saved_d6;
  exception_saved_data_addr_regs[7] = saved_d7;
  exception_saved_data_addr_regs[8] = saved_a0;
  exception_saved_data_addr_regs[9] = saved_a1;
  exception_saved_data_addr_regs[10] = saved_a2;
  exception_saved_data_addr_regs[0xb] = saved_a3;
  exception_saved_data_addr_regs[0xc] = saved_a4;
  exception_saved_data_addr_regs[0xd] = saved_a5;
  exception_saved_data_addr_regs[0xe] = saved_a6;
  exception_saved_data_addr_regs[0xf] = (uint)register0x0000003c;
                    /* WARNING: Subroutine does not return */
  FatalExceptionScreen(0x1f,exception_saved_data_addr_regs);
}




/* ============================================================
 * 00000c2a ExceptionVector46Trap14
 * ============================================================ */


void ExceptionVector46Trap14(void)

{
  return;
}




/* ============================================================
 * 00000c32 DefaultTrap14Handler
 * ============================================================ */


void DefaultTrap14Handler
               (uint saved_d0,uint saved_d1,uint saved_d2,uint saved_d3,uint saved_d4,uint saved_d5,
               uint saved_d6,uint saved_d7,uint saved_a0,uint saved_a1,uint saved_a2,uint saved_a3,
               uint saved_a4,uint saved_a5,uint saved_a6,ushort exception_stack_sr,
               uint exception_stack_pc)

{
  exception_saved_sr_or_special_status = exception_stack_sr;
  exception_saved_pc_or_fault_addr = exception_stack_pc;
  exception_saved_data_addr_regs[0] = saved_d0;
  exception_saved_data_addr_regs[1] = saved_d1;
  exception_saved_data_addr_regs[2] = saved_d2;
  exception_saved_data_addr_regs[3] = saved_d3;
  exception_saved_data_addr_regs[4] = saved_d4;
  exception_saved_data_addr_regs[5] = saved_d5;
  exception_saved_data_addr_regs[6] = saved_d6;
  exception_saved_data_addr_regs[7] = saved_d7;
  exception_saved_data_addr_regs[8] = saved_a0;
  exception_saved_data_addr_regs[9] = saved_a1;
  exception_saved_data_addr_regs[10] = saved_a2;
  exception_saved_data_addr_regs[0xb] = saved_a3;
  exception_saved_data_addr_regs[0xc] = saved_a4;
  exception_saved_data_addr_regs[0xd] = saved_a5;
  exception_saved_data_addr_regs[0xe] = saved_a6;
  exception_saved_data_addr_regs[0xf] = (uint)register0x0000003c;
                    /* WARNING: Subroutine does not return */
  FatalExceptionScreen(0x20,exception_saved_data_addr_regs);
}




/* ============================================================
 * 00000c5c ExceptionVector47Trap15
 * ============================================================ */


void ExceptionVector47Trap15(void)

{
  return;
}




/* ============================================================
 * 00000c64 DefaultTrap15Handler
 * ============================================================ */


void DefaultTrap15Handler
               (uint saved_d0,uint saved_d1,uint saved_d2,uint saved_d3,uint saved_d4,uint saved_d5,
               uint saved_d6,uint saved_d7,uint saved_a0,uint saved_a1,uint saved_a2,uint saved_a3,
               uint saved_a4,uint saved_a5,uint saved_a6,ushort exception_stack_sr,
               uint exception_stack_pc)

{
  exception_saved_sr_or_special_status = exception_stack_sr;
  exception_saved_pc_or_fault_addr = exception_stack_pc;
  exception_saved_data_addr_regs[0] = saved_d0;
  exception_saved_data_addr_regs[1] = saved_d1;
  exception_saved_data_addr_regs[2] = saved_d2;
  exception_saved_data_addr_regs[3] = saved_d3;
  exception_saved_data_addr_regs[4] = saved_d4;
  exception_saved_data_addr_regs[5] = saved_d5;
  exception_saved_data_addr_regs[6] = saved_d6;
  exception_saved_data_addr_regs[7] = saved_d7;
  exception_saved_data_addr_regs[8] = saved_a0;
  exception_saved_data_addr_regs[9] = saved_a1;
  exception_saved_data_addr_regs[10] = saved_a2;
  exception_saved_data_addr_regs[0xb] = saved_a3;
  exception_saved_data_addr_regs[0xc] = saved_a4;
  exception_saved_data_addr_regs[0xd] = saved_a5;
  exception_saved_data_addr_regs[0xe] = saved_a6;
  exception_saved_data_addr_regs[0xf] = (uint)register0x0000003c;
                    /* WARNING: Subroutine does not return */
  FatalExceptionScreen(0x21,exception_saved_data_addr_regs);
}




/* ============================================================
 * 00000c8e ExceptionVector27Irq3
 * ============================================================ */


void ExceptionVector27Irq3(void)

{
  return;
}




/* ============================================================
 * 00000c96 DefaultIrq3Handler
 * ============================================================ */


void DefaultIrq3Handler(void)

{
  PollSoundStatusIfIdle();
  return;
}




/* ============================================================
 * 00000ca6 ExceptionVector28Irq4Dispatcher
 * ============================================================ */


void ExceptionVector28Irq4Dispatcher(void)

{
  return;
}




/* ============================================================
 * 00000cae DefaultIrq4Handler
 * ============================================================ */


void DefaultIrq4Handler(void)

{
  AckIrq4AndSetFlag();
  return;
}




/* ============================================================
 * 00000cbe ExceptionVector30Irq6Dispatcher
 * ============================================================ */


void ExceptionVector30Irq6Dispatcher(void)

{
  return;
}




/* ============================================================
 * 00000cc6 DefaultIrq6VblankHandler
 * ============================================================ */


void DefaultIrq6VblankHandler(void)

{
  if (vblank_reentry_guard == '\0') {
    vblank_reentry_guard = 1;
    DefaultVblankServices();
    vblank_reentry_guard = '\0';
  }
  return;
}




/* ============================================================
 * 00000cec ResetVideoStateAndAcknowledge
 * ============================================================ */


void ResetVideoStateAndAcknowledge(void)

{
  vblank_reentry_guard = 0;
  ClearVideoControlMaybe();
  InitVideoRegistersMaybe();
  return;
}




/* ============================================================
 * 00000d00 ResetVideoStateAndAcknowledgeAlt
 * ============================================================ */


void ResetVideoStateAndAcknowledgeAlt(void)

{
  vblank_reentry_guard = 0;
  ClearVideoControlMaybe();
  InitVideoRegistersMaybe();
  return;
}




/* ============================================================
 * 00000d14 CopyLongBlocks16
 * ============================================================ */


void CopyLongBlocks16(undefined4 *dst,undefined4 *src,int blocks)

{
  uint remaining_blocks;
  undefined4 *last_src;
  undefined4 *last_dst;
  ushort loop_counter;
  
  if (blocks != 0) {
    remaining_blocks = blocks - 1;
    do {
      *dst = *src;
      dst[1] = src[1];
      dst[2] = src[2];
      dst[3] = src[3];
      dst[4] = src[4];
      dst[5] = src[5];
      dst[6] = src[6];
      dst[7] = src[7];
      dst[8] = src[8];
      dst[9] = src[9];
      dst[10] = src[10];
      dst[0xb] = src[0xb];
      dst[0xc] = src[0xc];
      dst[0xd] = src[0xd];
      last_src = src + 0xf;
      last_dst = dst + 0xf;
      dst[0xe] = src[0xe];
      src = src + 0x10;
      dst = dst + 0x10;
      *last_dst = *last_src;
      loop_counter = (short)remaining_blocks - 1;
      remaining_blocks = (uint)loop_counter;
    } while (loop_counter != 0xffff);
  }
  return;
}




/* ============================================================
 * 00000d56 CopyLongBlocks8
 * ============================================================ */


void CopyLongBlocks8(undefined4 *dst,undefined4 *src,int blocks)

{
  uint remaining_blocks;
  undefined4 *last_src;
  undefined4 *last_dst;
  ushort loop_counter;
  
  if (blocks != 0) {
    remaining_blocks = blocks - 1;
    do {
      *dst = *src;
      dst[1] = src[1];
      dst[2] = src[2];
      dst[3] = src[3];
      dst[4] = src[4];
      dst[5] = src[5];
      last_src = src + 7;
      last_dst = dst + 7;
      dst[6] = src[6];
      src = src + 8;
      dst = dst + 8;
      *last_dst = *last_src;
      loop_counter = (short)remaining_blocks - 1;
      remaining_blocks = (uint)loop_counter;
    } while (loop_counter != 0xffff);
  }
  return;
}




/* ============================================================
 * 00000d88 CopyLongBlocks4
 * ============================================================ */


void CopyLongBlocks4(undefined4 *dst,undefined4 *src,int blocks)

{
  uint remaining_blocks;
  undefined4 *last_src;
  undefined4 *last_dst;
  ushort loop_counter;
  
  if (blocks != 0) {
    remaining_blocks = blocks - 1;
    do {
      *dst = *src;
      dst[1] = src[1];
      last_src = src + 3;
      last_dst = dst + 3;
      dst[2] = src[2];
      src = src + 4;
      dst = dst + 4;
      *last_dst = *last_src;
      loop_counter = (short)remaining_blocks - 1;
      remaining_blocks = (uint)loop_counter;
    } while (loop_counter != 0xffff);
  }
  return;
}




/* ============================================================
 * 00000db2 CopyLongBlocks2
 * ============================================================ */


void CopyLongBlocks2(undefined4 *dst,undefined4 *src,int blocks)

{
  uint remaining_blocks;
  undefined4 *puVar1;
  undefined4 *puVar2;
  ushort loop_counter;
  
  if (blocks != 0) {
    remaining_blocks = blocks - 1;
    do {
      puVar1 = src + 1;
      puVar2 = dst + 1;
      *dst = *src;
      src = src + 2;
      dst = dst + 2;
      *puVar2 = *puVar1;
      loop_counter = (short)remaining_blocks - 1;
      remaining_blocks = (uint)loop_counter;
    } while (loop_counter != 0xffff);
  }
  return;
}




/* ============================================================
 * 00000dd8 CopyLongs
 * ============================================================ */


void CopyLongs(undefined4 *dst,undefined4 *src,int count)

{
  uint uVar1;
  ushort uVar2;
  
  if (count != 0) {
    uVar1 = count - 1;
    do {
      *dst = *src;
      uVar2 = (short)uVar1 - 1;
      uVar1 = (uint)uVar2;
      src = src + 1;
      dst = dst + 1;
    } while (uVar2 != 0xffff);
  }
  return;
}




/* ============================================================
 * 00000dfc CopyWords
 * ============================================================ */


void CopyWords(undefined2 *dst,undefined2 *src,int count)

{
  uint uVar1;
  ushort uVar2;
  
  if (count != 0) {
    uVar1 = count - 1;
    do {
      *dst = *src;
      uVar2 = (short)uVar1 - 1;
      uVar1 = (uint)uVar2;
      src = src + 1;
      dst = dst + 1;
    } while (uVar2 != 0xffff);
  }
  return;
}




/* ============================================================
 * 00000e20 CopyWordsReverse
 * ============================================================ */


void CopyWordsReverse(undefined1 *dst,undefined1 *src,int count)

{
  uint uVar1;
  ushort uVar2;
  
  if (count != 0) {
    uVar1 = count - 1;
    do {
      *dst = *src;
      uVar2 = (short)uVar1 - 1;
      uVar1 = (uint)uVar2;
      src = src + 1;
      dst = dst + 1;
    } while (uVar2 != 0xffff);
  }
  return;
}




/* ============================================================
 * 00000e44 FillLongBlocks16
 * ============================================================ */


void FillLongBlocks16(undefined4 *dst,undefined4 value,int blocks)

{
  uint remaining_blocks;
  undefined4 *last_dst;
  ushort loop_counter;
  
  if (blocks != 0) {
    remaining_blocks = blocks - 1;
    do {
      *dst = value;
      dst[1] = value;
      dst[2] = value;
      dst[3] = value;
      dst[4] = value;
      dst[5] = value;
      dst[6] = value;
      dst[7] = value;
      dst[8] = value;
      dst[9] = value;
      dst[10] = value;
      dst[0xb] = value;
      dst[0xc] = value;
      dst[0xd] = value;
      last_dst = dst + 0xf;
      dst[0xe] = value;
      dst = dst + 0x10;
      *last_dst = value;
      loop_counter = (short)remaining_blocks - 1;
      remaining_blocks = (uint)loop_counter;
    } while (loop_counter != 0xffff);
  }
  return;
}




/* ============================================================
 * 00000e86 FillLongBlocks8
 * ============================================================ */


void FillLongBlocks8(undefined4 *dst,undefined4 value,int blocks)

{
  uint remaining_blocks;
  undefined4 *last_dst;
  ushort loop_counter;
  
  if (blocks != 0) {
    remaining_blocks = blocks - 1;
    do {
      *dst = value;
      dst[1] = value;
      dst[2] = value;
      dst[3] = value;
      dst[4] = value;
      dst[5] = value;
      last_dst = dst + 7;
      dst[6] = value;
      dst = dst + 8;
      *last_dst = value;
      loop_counter = (short)remaining_blocks - 1;
      remaining_blocks = (uint)loop_counter;
    } while (loop_counter != 0xffff);
  }
  return;
}




/* ============================================================
 * 00000eb8 FillLongBlocks4
 * ============================================================ */


void FillLongBlocks4(undefined4 *dst,undefined4 value,int blocks)

{
  uint remaining_blocks;
  undefined4 *last_dst;
  ushort loop_counter;
  
  if (blocks != 0) {
    remaining_blocks = blocks - 1;
    do {
      *dst = value;
      dst[1] = value;
      last_dst = dst + 3;
      dst[2] = value;
      dst = dst + 4;
      *last_dst = value;
      loop_counter = (short)remaining_blocks - 1;
      remaining_blocks = (uint)loop_counter;
    } while (loop_counter != 0xffff);
  }
  return;
}




/* ============================================================
 * 00000ee2 FillLongBlocks2
 * ============================================================ */


void FillLongBlocks2(undefined4 *dst,undefined4 value,int blocks)

{
  uint remaining_blocks;
  undefined4 *puVar1;
  ushort loop_counter;
  
  if (blocks != 0) {
    remaining_blocks = blocks - 1;
    do {
      puVar1 = dst + 1;
      *dst = value;
      dst = dst + 2;
      *puVar1 = value;
      loop_counter = (short)remaining_blocks - 1;
      remaining_blocks = (uint)loop_counter;
    } while (loop_counter != 0xffff);
  }
  return;
}




/* ============================================================
 * 00000f08 FillLongs
 * ============================================================ */


void FillLongs(undefined4 *dst,undefined4 value,int count)

{
  uint remaining;
  ushort loop_counter;
  
  if (count != 0) {
    remaining = count - 1;
    do {
      *dst = value;
      loop_counter = (short)remaining - 1;
      remaining = (uint)loop_counter;
      dst = dst + 1;
    } while (loop_counter != 0xffff);
  }
  return;
}




/* ============================================================
 * 00000f2c FillWords
 * ============================================================ */


void FillWords(ushort *dst,ushort value,int count)

{
  uint remaining;
  ushort loop_counter;
  
  if (count != 0) {
    remaining = count - 1;
    do {
      *dst = value;
      loop_counter = (short)remaining - 1;
      remaining = (uint)loop_counter;
      dst = dst + 1;
    } while (loop_counter != 0xffff);
  }
  return;
}




/* ============================================================
 * 00000f50 FillWordsReverse
 * ============================================================ */


void FillWordsReverse(ushort *dst,ushort value,int count)

{
  uint remaining;
  ushort loop_counter;
  
  if (count != 0) {
    remaining = count - 1;
    do {
      *(char *)dst = (char)value;
      loop_counter = (short)remaining - 1;
      remaining = (uint)loop_counter;
      dst = (ushort *)((int)dst + 1);
    } while (loop_counter != 0xffff);
  }
  return;
}




/* ============================================================
 * 00000f74 AllocateTimer
 * ============================================================ */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int AllocateTimer(void)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)((int)timer_slots + (int)(short)((short)iVar1 << 2)) == -1) {
      *(undefined4 *)((int)timer_slots + (int)(short)((short)iVar1 << 2)) = 0;
      active_timer_count = active_timer_count + 1;
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  iVar1 = ResourceErrorScreen("OUT OF TIMER");
  return iVar1;
}




/* ============================================================
 * 00000fbe FreeTimer
 * ============================================================ */


void FreeTimer(int handle)

{
  if ((handle < 0) || (3 < handle)) {
    AssertFailScreen("handle>=0 && handle<MAXTIMER","c\timer.c",0x2e);
  }
  *(undefined4 *)((int)timer_slots + (int)(short)((short)handle << 2)) = 0xffffffff;
  active_timer_count = active_timer_count - 1;
  return;
}




/* ============================================================
 * 00001002 ResetTimerSystemStateUnused
 * ============================================================ */


void ResetTimerSystemStateUnused(void)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    *(undefined4 *)((int)timer_slots + (int)(short)((short)iVar1 << 2)) = 0xffffffff;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  active_timer_count = 0;
  iVar1 = 0;
  do {
    *(undefined4 *)((int)&timer_callback_slot.callback + (int)(short)((short)iVar1 << 4)) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 1);
  active_timer_callback_count = 0;
  return;
}




/* ============================================================
 * 00001046 GetTimerValue
 * ============================================================ */


int GetTimerValue(int handle)

{
  if ((handle < 0) || (3 < handle)) {
    AssertFailScreen("handle>=0 && handle<MAXTIMER","c\timer.c",0x46);
  }
  return *(int *)((int)timer_slots + (int)(short)((short)handle << 2));
}




/* ============================================================
 * 00001082 SetTimerValue
 * ============================================================ */


void SetTimerValue(int handle,int frames)

{
  if ((handle < 0) || (3 < handle)) {
    AssertFailScreen("handle>=0 && handle<MAXTIMER","c\timer.c",0x4c);
  }
  *(int *)((int)timer_slots + (int)(short)((short)handle << 2)) = frames;
  return;
}




/* ============================================================
 * 000010c4 ResetTimerSlots
 * ============================================================ */


void ResetTimerSlots(void)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    *(undefined4 *)((int)timer_slots + (int)(short)((short)iVar1 << 2)) = 0xffffffff;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  return;
}




/* ============================================================
 * 000010e4 InitTimerAndInputState
 * ============================================================ */


void InitTimerAndInputState(void)

{
  int iVar1;
  
  ResetTimerSlots();
  iVar1 = 0;
  do {
    *(undefined4 *)((int)&timer_callback_slot.callback + (int)(short)((short)iVar1 << 4)) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 1);
  active_timer_count = 0;
  active_timer_callback_count = 0;
  return;
}




/* ============================================================
 * 00001112 UpdateTimersOnVblank
 * ============================================================ */


void UpdateTimersOnVblank(void)

{
  short sVar1;
  int *piVar2;
  
  if (active_timer_count != 0) {
    piVar2 = timer_slots;
    sVar1 = 3;
    do {
      if ((*piVar2 != -1) && (*piVar2 != 0)) {
        *piVar2 = *piVar2 + -1;
      }
      piVar2 = piVar2 + 1;
      sVar1 = sVar1 + -1;
    } while (sVar1 != -1);
  }
  return;
}




/* ============================================================
 * 0000113e UpdateTimerCallbacksOnTick
 * ============================================================ */


void UpdateTimerCallbacksOnTick(void)

{
  int callback_result;
  char slot_countdown;
  PgmTimerCallbackSlot *callback_slot;
  int *timer;
  short old_countdown;
  
  if (active_timer_count != 0) {
    timer = timer_slots;
    slot_countdown = '\x04';
    while (slot_countdown != '\0') {
      if ((*timer != -1) && (*timer != 0)) {
        *timer = *timer + -1;
      }
      timer = timer + 1;
      slot_countdown = slot_countdown + -1;
    }
  }
  if (active_timer_callback_count != 0) {
    callback_slot = &timer_callback_slot;
    slot_countdown = '\x01';
    while (slot_countdown != '\0') {
      if ((callback_slot->callback != (undefined *)0x0) &&
         (old_countdown = callback_slot->wCountdown,
         callback_slot->wCountdown = callback_slot->wCountdown + -1, old_countdown == 0)) {
        callback_slot->wCountdown = callback_slot->wReload;
        callback_slot->dwTick_count = callback_slot->dwTick_count + 1;
        callback_result =
             (*(code *)callback_slot->callback)
                       (callback_slot->dwTick_count,callback_slot->dwUser_arg);
        if (callback_result != 0) {
          callback_slot->callback = (undefined *)0x0;
        }
      }
      callback_slot = callback_slot + 1;
      slot_countdown = slot_countdown + -1;
    }
  }
  return;
}




/* ============================================================
 * 000011bc WaitTimerOrCallback
 * ============================================================ */


int WaitTimerOrCallback(int frames,void *callback)

{
  int handle;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  handle = AllocateTimer();
  SetTimerValue(handle,frames);
  do {
    if (callback != (void *)0x0) {
      iVar1 = (*callback)();
      if (iVar1 != 0) {
        iVar2 = 1;
        break;
      }
    }
    iVar1 = GetTimerValue(handle);
  } while (iVar1 != 0);
  FreeTimer(handle);
  return iVar2;
}




/* ============================================================
 * 00001208 RegisterPeriodicTimerCallback
 * ============================================================ */


int RegisterPeriodicTimerCallback(void *callback,ushort reload,int user_arg)

{
  int slot_index;
  PgmTimerCallbackSlot *slot;
  
  slot = &timer_callback_slot;
  slot_index = 0;
  do {
    if (slot->callback == (undefined *)0x0) {
      slot->wReload = reload;
      slot->wCountdown = 0;
      slot->dwTick_count = 0;
      slot->dwUser_arg = user_arg;
      slot->callback = callback;
      return slot_index;
    }
    slot_index = slot_index + 1;
    slot = slot + 1;
  } while (slot_index < 1);
  slot_index = ResourceErrorScreen("OUT OF TIMER FUN");
  return slot_index;
}




/* ============================================================
 * 00001252 ClearTimerCallbackSlot
 * ============================================================ */


void ClearTimerCallbackSlot(int handle)

{
  if ((handle < 0) || (0 < handle)) {
    AssertFailScreen("handle>=0 && handle<MAXTIMERFUN","c\timer.c",0xcd);
  }
  *(undefined4 *)((int)&timer_callback_slot.callback + (int)(short)((short)handle << 4)) = 0;
  return;
}




/* ============================================================
 * 0000128e InitRingBuffer
 * ============================================================ */


void InitRingBuffer(PgmRingBuffer *ring,void *storage,int capacity,int entry_size)

{
  uint uVar1;
  
  ring->dwBuffer_start = storage;
  ring->dwCapacity = capacity;
  ring->dwWrite_ptr = ring->dwBuffer_start;
  ring->dwRead_ptr = ring->dwBuffer_start;
  ring->dwEntry_size = entry_size;
  uVar1 = MulUnsigned32(entry_size,capacity);
  ring->dwBuffer_end = ring->dwBuffer_start + uVar1;
  ring->dwUsed_count = 0;
  input_key_state_zero_entry_prefix0 = 0;
  input_key_state_1based_wHeld_base = 0;
  return;
}




/* ============================================================
 * 000012da IsRingBufferEmpty
 * ============================================================ */


bool IsRingBufferEmpty(PgmRingBuffer *ring)

{
  return ring->dwUsed_count == 0;
}




/* ============================================================
 * 000012ec IsRingBufferFull
 * ============================================================ */


bool IsRingBufferFull(PgmRingBuffer *ring)

{
  return ring->dwUsed_count == ring->dwCapacity;
}




/* ============================================================
 * 00001302 GetRingBufferFreeCount
 * ============================================================ */


int GetRingBufferFreeCount(PgmRingBuffer *ring)

{
  return ring->dwCapacity - ring->dwUsed_count;
}




/* ============================================================
 * 00001310 GetRingBufferFreeCountRaw
 * ============================================================ */


void GetRingBufferFreeCountRaw(PgmRingBuffer *param_1)

{
  GetRingBufferFreeCount(param_1);
  return;
}




/* ============================================================
 * 00001320 CheckRingBufferHasRoomFor16
 * ============================================================ */


bool CheckRingBufferHasRoomFor16(PgmRingBuffer *ring)

{
  return ring->dwUsed_count + 0x10 < (int)ring->dwCapacity;
}




/* ============================================================
 * 0000133a GetRingBufferUsedCount
 * ============================================================ */


int GetRingBufferUsedCount(PgmRingBuffer *ring)

{
  return ring->dwUsed_count;
}




/* ============================================================
 * 00001344 RingBufferPush
 * ============================================================ */


uint RingBufferPush(PgmRingBuffer *ring,byte *src)

{
  undefined3 extraout_var;
  bool full;
  uint result;
  int bytes_remaining;
  byte *dst;
  
  full = IsRingBufferFull(ring);
  if (CONCAT31(extraout_var,full) == 0) {
    EnterCriticalSection();
    bytes_remaining = ring->dwEntry_size;
    dst = (byte *)ring->dwWrite_ptr;
    while (0 < bytes_remaining) {
      *dst = *src;
      bytes_remaining = bytes_remaining + -1;
      src = src + 1;
      dst = dst + 1;
    }
    ring->dwWrite_ptr = ring->dwEntry_size + ring->dwWrite_ptr;
    ring->dwUsed_count = ring->dwUsed_count + 1;
    if (ring->dwWrite_ptr == ring->dwBuffer_end) {
      ring->dwWrite_ptr = ring->dwBuffer_start;
    }
    LeaveCriticalSection();
    result = 0;
  }
  else {
    result = 1;
  }
  return result;
}




/* ============================================================
 * 000013a0 RingBufferPop
 * ============================================================ */


uint RingBufferPop(PgmRingBuffer *ring)

{
  undefined3 extraout_var;
  bool empty;
  uint result;
  int bytes_remaining;
  undefined1 *puVar1;
  undefined1 *in_stack_00000008;
  
  empty = IsRingBufferEmpty(ring);
  if (CONCAT31(extraout_var,empty) == 0) {
    bytes_remaining = ring->dwEntry_size;
    puVar1 = (undefined1 *)ring->dwRead_ptr;
    while (0 < bytes_remaining) {
      *in_stack_00000008 = *puVar1;
      bytes_remaining = bytes_remaining + -1;
      puVar1 = puVar1 + 1;
      in_stack_00000008 = in_stack_00000008 + 1;
    }
    ring->dwRead_ptr = ring->dwEntry_size + ring->dwRead_ptr;
    ring->dwUsed_count = ring->dwUsed_count + -1;
    if (ring->dwRead_ptr == ring->dwBuffer_end) {
      ring->dwRead_ptr = ring->dwBuffer_start;
    }
    result = 0;
  }
  else {
    result = 1;
  }
  return result;
}




/* ============================================================
 * 000013f0 PushRawBytesToRing
 * ============================================================ */


undefined4 PushRawBytesToRing(PgmRingBuffer *ring,byte *src,int byte_count)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  int remaining_or_free;
  undefined4 result;
  
  remaining_or_free = GetRingBufferFreeCount(ring);
  if (remaining_or_free < byte_count) {
    result = 1;
  }
  else {
    while (remaining_or_free = byte_count + -1, byte_count != 0) {
      pbVar3 = src + 1;
      bVar2 = *src;
      pbVar1 = (byte *)ring->dwWrite_ptr;
      ring->dwWrite_ptr = ring->dwWrite_ptr + 1;
      *pbVar1 = bVar2;
      byte_count = remaining_or_free;
      src = pbVar3;
      if (ring->dwWrite_ptr == ring->dwBuffer_end) {
        ring->dwWrite_ptr = ring->dwBuffer_start;
      }
    }
    result = 0;
  }
  return result;
}




/* ============================================================
 * 00001446 PopRawBytesFromRing
 * ============================================================ */


undefined4 PopRawBytesFromRing(PgmRingBuffer *ring,byte *dst,int byte_count)

{
  byte *pbVar1;
  byte *pbVar2;
  int remaining_or_used;
  undefined4 result;
  
  remaining_or_used = GetRingBufferUsedCount(ring);
  if (remaining_or_used < byte_count) {
    result = 1;
  }
  else {
    while (remaining_or_used = byte_count + -1, byte_count != 0) {
      pbVar1 = (byte *)ring->dwRead_ptr;
      ring->dwRead_ptr = ring->dwRead_ptr + 1;
      pbVar2 = dst + 1;
      *dst = *pbVar1;
      byte_count = remaining_or_used;
      dst = pbVar2;
      if (ring->dwRead_ptr == ring->dwBuffer_end) {
        ring->dwRead_ptr = ring->dwBuffer_start;
      }
    }
    result = 0;
  }
  return result;
}




/* ============================================================
 * 0000149c PopBytesFromRingNoCallback
 * ============================================================ */


bool PopBytesFromRingNoCallback(PgmRingBuffer *ring,byte *dst,int byte_count)

{
  byte *pbVar1;
  undefined3 extraout_var;
  bool empty;
  byte *pbVar2;
  int remaining;
  
  while ((remaining = byte_count + -1, byte_count != 0 &&
         (empty = IsRingBufferEmpty(ring), CONCAT31(extraout_var,empty) == 0))) {
    pbVar1 = (byte *)ring->dwRead_ptr;
    ring->dwRead_ptr = ring->dwRead_ptr + 1;
    pbVar2 = dst + 1;
    *dst = *pbVar1;
    byte_count = remaining;
    dst = pbVar2;
    if (ring->dwRead_ptr == ring->dwBuffer_end) {
      ring->dwRead_ptr = ring->dwBuffer_start;
    }
  }
  *dst = 0;
  return remaining != 0;
}




/* ============================================================
 * 000014ec PushStringToRing
 * ============================================================ */


void PushStringToRing(PgmRingBuffer *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar3 = param_2;
  do {
    pbVar2 = pbVar3 + 1;
    bVar1 = *pbVar3;
    pbVar3 = pbVar2;
  } while (bVar1 != 0);
  PushRawBytesToRing(param_1,param_2,~((int)param_2 - (int)pbVar2));
  return;
}




/* ============================================================
 * 00001510 UpdateInputStateBits
 * ============================================================ */


void UpdateInputStateBits(PgmInputKeyState *states,uint active_bits,short count)

{
  uint uVar1;
  short sVar2;
  
  uVar1 = 1;
  sVar2 = count + -1;
  do {
    switch(states->bState) {
    case 0:
      if ((uVar1 & active_bits) != 0) {
        states->bState = 1;
      }
    case 1:
      if ((uVar1 & active_bits) == 0) {
        states->bState = 0;
      }
      else {
        states->bState = 2;
        states->wHeld_frames = 1;
      }
      break;
    case 2:
      if ((uVar1 & active_bits) == 0) {
        states->bState = 3;
        if ((states->wHeld_frames != 0) && ((ushort)states->wHeld_frames < 0xe)) {
          states->bShort_tap_latch = 1;
        }
      }
      else if (states->wHeld_frames != -1) {
        states->wHeld_frames = states->wHeld_frames + 1;
      }
      break;
    case 3:
      if ((uVar1 & active_bits) == 0) {
        states->bState = 0;
        states->wHeld_frames = 0;
        states->bNew_press_latch = 1;
      }
      else {
        states->bState = 2;
      }
    }
    states = states + 1;
    uVar1 = uVar1 * 2;
    sVar2 = sVar2 + -1;
  } while (sVar2 != -1);
  return;
}




/* ============================================================
 * 000015b8 ReadInputPortBits
 * ============================================================ */


void ReadInputPortBits(PgmInputKeyState *states,uint active_bits,int count)

{
  uint uVar1;
  
  uVar1 = 1;
  do {
    if (count == 0) {
      return;
    }
    switch(states->bState) {
    case 0:
      if ((uVar1 & active_bits) != 0) {
        states->bState = 1;
      }
    case 1:
      if ((uVar1 & active_bits) == 0) {
        states->bState = 0;
      }
      else {
        states->bState = 2;
        states->wHeld_frames = 1;
      }
      break;
    case 2:
      if ((uVar1 & active_bits) == 0) {
        states->bState = 3;
        if ((states->wHeld_frames != 0) && ((ushort)states->wHeld_frames < 0xe)) {
          states->bShort_tap_latch = 1;
        }
      }
      else if (states->wHeld_frames != -1) {
        states->wHeld_frames = states->wHeld_frames + 1;
      }
      break;
    case 3:
      if ((uVar1 & active_bits) == 0) {
        states->bState = 0;
        states->wHeld_frames = 0;
        states->bNew_press_latch = 1;
      }
      else {
        states->bState = 2;
      }
    }
    states = states + 1;
    uVar1 = uVar1 * 2;
    count = count + -1;
  } while( true );
}




/* ============================================================
 * 00001668 PollJammaInputs
 * ============================================================ */


void PollJammaInputs(void)

{
  uint uVar1;
  ushort uVar2;
  
  uVar1 = pgm_jamma_io._0_4_;
  uVar1 = ~(uVar1 << 0x10 | uVar1 >> 0x10);
  UpdateInputStateBits(input_key_state_table,uVar1,0x20);
  uVar2 = pgm_jamma_io.wExtra_controls;
  UpdateInputStateBits(input_key_state_table + 0x20,CONCAT22((short)(uVar1 >> 0x10),~uVar2),0x10);
  return;
}




/* ============================================================
 * 000016a8 InitInputKeyStates
 * ============================================================ */


void InitInputKeyStates(void)

{
  int iVar1;
  PgmInputKeyState *pPVar2;
  
  pPVar2 = input_key_state_table;
  iVar1 = 0;
  do {
    pPVar2->bState = 0;
    pPVar2->bNew_press_latch = 1;
    pPVar2->wHeld_frames = 0;
    pPVar2->bShort_tap_latch = 0;
    iVar1 = iVar1 + 1;
    pPVar2 = pPVar2 + 1;
  } while (iVar1 < 0x30);
  return;
}




/* ============================================================
 * 000016cc SetInputRepeatDelay
 * ============================================================ */


void SetInputRepeatDelay(byte param_1)

{
  input_repeat_delay_setting = param_1;
  return;
}




/* ============================================================
 * 000016d6 GetInputRepeatDelay
 * ============================================================ */


undefined1 GetInputRepeatDelay(short param_1)

{
  return *(undefined1 *)((int)&input_key_state_zero_entry_prefix0 + (short)(param_1 * 6) + 3);
}




/* ============================================================
 * 000016f4 GetAnyActiveKey
 * ============================================================ */


int GetAnyActiveKey(void)

{
  int key_index;
  PgmInputKeyState *state;
  
  key_index = HasNoPendingKeyStub();
  if (key_index == 0) {
    key_index = ReadPendingKeyStub();
  }
  else {
    state = input_key_state_table;
    key_index = 0;
    do {
      if (state->wHeld_frames != 0) {
        return key_index + 1;
      }
      key_index = key_index + 1;
      state = state + 1;
    } while (key_index < 0x30);
    key_index = 0;
  }
  return key_index;
}




/* ============================================================
 * 00001730 GetKeyStateByIndex
 * ============================================================ */


int GetKeyStateByIndex(int key_index,void *callback)

{
  int iVar1;
  
  do {
    if ((callback != (void *)0x0) && (iVar1 = (*callback)(), iVar1 != 0)) {
      return key_index;
    }
    iVar1 = GetAnyActiveKey();
  } while ((iVar1 == 0) || ((key_index != iVar1 && (key_index != 0x31))));
  return iVar1;
}




/* ============================================================
 * 00001764 IsKeyPressed
 * ============================================================ */


uint IsKeyPressed(int key_index)

{
  int iVar1;
  
  iVar1 = HasNoPendingKeyStub();
  if (iVar1 == 0) {
    iVar1 = ReadPendingKeyStub();
    if (iVar1 == key_index) {
      return 1;
    }
    ClearKeyRepeatStub(iVar1);
  }
  return (uint)*(ushort *)
                ((int)&input_key_state_1based_wHeld_base + (int)(short)((short)key_index * 6));
}




/* ============================================================
 * 000017b0 GetNextPressedKey
 * ============================================================ */


int GetNextPressedKey(void)

{
  int key_index;
  PgmInputKeyState *state;
  
  key_index = HasNoPendingKeyStub();
  if (key_index == 0) {
    key_index = ReadPendingKeyStub();
  }
  else {
    state = input_key_state_table;
    key_index = 0;
    do {
      if ((state->wHeld_frames != 0) && (state->bNew_press_latch != '\0')) {
        state->bNew_press_latch = 0;
        return key_index + 1;
      }
      key_index = key_index + 1;
      state = state + 1;
    } while (key_index < 0x30);
    key_index = 0;
  }
  return key_index;
}




/* ============================================================
 * 000017f6 WaitForKeyOrCallback
 * ============================================================ */


uint WaitForKeyOrCallback(int key_index)

{
  int iVar1;
  uint uVar2;
  code *in_stack_00000008;
  
  do {
    if ((in_stack_00000008 != (code *)0x0) && (iVar1 = (*in_stack_00000008)(), iVar1 != 0)) {
      return key_index;
    }
    uVar2 = GetNextPressedKey();
  } while ((uVar2 == 0) || ((key_index != uVar2 && (key_index != 0x31))));
  return uVar2;
}




/* ============================================================
 * 0000182a ConsumeKeyPress
 * ============================================================ */


uint ConsumeKeyPress(int key_index)

{
  int pending_key;
  uint pressed_mask;
  
  pending_key = HasNoPendingKeyStub();
  if (pending_key == 0) {
    pending_key = ReadPendingKeyStub();
    if (pending_key == key_index) {
      return 1;
    }
    ClearKeyRepeatStub(pending_key);
  }
  pending_key = key_index * 6;
  if ((*(short *)((int)&input_key_state_1based_wHeld_base + pending_key) == 0) ||
     (*(char *)((int)&input_key_state_zero_entry_prefix0 + pending_key + 3) == '\0')) {
    pressed_mask = 0;
  }
  else {
    *(undefined1 *)((int)&input_key_state_zero_entry_prefix0 + pending_key + 3) = 0;
    pressed_mask = (uint)*(ushort *)((int)&input_key_state_1based_wHeld_base + pending_key);
  }
  return pressed_mask;
}




/* ============================================================
 * 00001888 PeekKeyPress
 * ============================================================ */


ushort PeekKeyPress(int key_index)

{
  int key_offset_or_pending;
  ushort held_frames;
  
  key_offset_or_pending = HasNoPendingKeyStub();
  if ((key_offset_or_pending == 0) &&
     (key_offset_or_pending = ReadPendingKeyStub(), key_offset_or_pending == key_index)) {
    ClearKeyRepeatStub(key_offset_or_pending);
    return 1;
  }
  key_offset_or_pending = key_index * 6;
  if ((*(short *)((int)&input_key_state_1based_wHeld_base + key_offset_or_pending) == 0) ||
     (*(char *)((int)&input_key_state_zero_entry_prefix0 + key_offset_or_pending + 3) == '\0')) {
    held_frames = 0;
  }
  else {
    held_frames = *(ushort *)((int)&input_key_state_1based_wHeld_base + key_offset_or_pending);
  }
  return held_frames;
}




/* ============================================================
 * 000018e2 GetKeyPressBit
 * ============================================================ */


void GetKeyPressBit(short param_1,undefined2 param_2)

{
  *(undefined2 *)((int)&input_key_state_1based_wHeld_base + (int)(short)(param_1 * 6)) = param_2;
  return;
}




/* ============================================================
 * 000018fc GetInputStateBase
 * ============================================================ */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

PgmInputKeyState * GetInputStateBase(void)

{
  return input_key_state_table;
}




/* ============================================================
 * 00001904 SetInputStateBase
 * ============================================================ */


bool SetInputStateBase(int param_1)

{
  bool bVar1;
  
  bVar1 = *(char *)((int)&input_key_state_1based_wHeld_base + param_1 * 6 + 2) != '\0';
  if (bVar1) {
    *(undefined1 *)((int)&input_key_state_1based_wHeld_base + param_1 * 6 + 2) = 0;
  }
  return bVar1;
}




/* ============================================================
 * 0000192c GetInputCallbackPointer
 * ============================================================ */


undefined4 GetInputCallbackPointer(short param_1)

{
  return *(undefined4 *)((int)exception_string_pointer_table + (int)(short)(param_1 << 2));
}




/* ============================================================
 * 0000193e ClearKeyRepeatStub
 * ============================================================ */


void ClearKeyRepeatStub(void)

{
  return;
}




/* ============================================================
 * 00001940 ReadPendingKeyStub
 * ============================================================ */


undefined4 ReadPendingKeyStub(void)

{
  return 0;
}




/* ============================================================
 * 00001944 HasNoPendingKeyStub
 * ============================================================ */


undefined4 HasNoPendingKeyStub(void)

{
  return 1;
}




/* ============================================================
 * 00001948 DrawStackDump
 * ============================================================ */


void DrawStackDump(int tile_x,int tile_y,int stack_pointer)

{
  int row;
  ushort *stack_words;
  
  stack_words = (ushort *)(stack_pointer + -0x30);
  PrintfTilesBanked(0,tile_x + 2,tile_y + -1,'\x01',0,"STACK %08X ",stack_words);
  row = 0;
  do {
    PrintfTilesBanked(0,tile_x,tile_y + row,'\0',0,"%04X %04X %04X %04X",(uint)*stack_words,
                      (uint)stack_words[1],(uint)stack_words[2],(uint)stack_words[3]);
    row = row + 1;
    stack_words = stack_words + 4;
  } while (row < 0xc);
  return;
}




/* ============================================================
 * 000019d2 DrawExceptionRegisterDump
 * ============================================================ */


void DrawExceptionRegisterDump(int exception_index,byte *register_dump)

{
  int reg_index;
  char *rw_text;
  char *cycle_type_text;
  
  DrawStringTiles(0,1,0,'\x01',3,
                  *(char **)((int)exception_string_pointer_table +
                            (short)((short)exception_index << 2) + 0xc4));
  reg_index = 0;
  do {
    PrintfTilesBanked(0,1,reg_index + 4,'\0',0,"D%1d %08X",reg_index,
                      *(undefined4 *)(register_dump + reg_index * 4));
    PrintfTilesBanked(0,0x1b,reg_index + 4,'\0',0,"A%1d %08X",reg_index,
                      *(undefined4 *)(register_dump + reg_index * 4 + 0x20));
    reg_index = reg_index + 1;
  } while (reg_index < 8);
  PrintfTilesBanked(0,1,0xe,'\0',0,"PC %08X",*(undefined4 *)(register_dump + 0x40));
  PrintfTilesBanked(0,1,0x10,'\0',0," SR   T S  III   XNZVC");
  PrintfTilesBanked(0,1,0x11,'\0',0,"%04X  %016B",(uint)*(ushort *)(register_dump + 0x44),
                    (uint)*(ushort *)(register_dump + 0x44));
  if ((exception_index == 0) || (exception_index == 1)) {
    PrintfTilesBanked(0,1,0x13,'\0',0,"IR  %04X TYPE %04X",(uint)*(ushort *)(register_dump + 0x46),
                      (uint)*(ushort *)(register_dump + 0x4c));
    PrintfTilesBanked(0,1,0x15,'\0',0,"BUS %08X",*(undefined4 *)(register_dump + 0x48));
    if ((*(ushort *)(register_dump + 0x4c) & 0x10) == 0) {
      rw_text = "WRITE";
    }
    else {
      rw_text = "READ ";
    }
    if ((*(ushort *)(register_dump + 0x4c) & 8) == 0) {
      cycle_type_text = "NORMAL   ";
    }
    else {
      cycle_type_text = "EXCEPTION";
    }
    PrintfTilesBanked(0,1,0x17,'\0',0,"%s %s FC2 FC1 FC0",rw_text,cycle_type_text);
    PrintfTilesBanked(0,1,0x18,'\0',0,"%14s   %1d   %1d   %1d"," ",
                      (int)(*(ushort *)(register_dump + 0x4c) & 4) >> 2,
                      (int)(*(ushort *)(register_dump + 0x4c) & 2) >> 1,
                      *(ushort *)(register_dump + 0x4c) & 1);
  }
  DrawStackDump(0x1e,0xe,*(int *)(register_dump + 0x3c));
  return;
}




/* ============================================================
 * 00001bea FatalExceptionScreen
 * ============================================================ */


void FatalExceptionScreen(int param_1,byte *param_2)

{
  EnterCriticalSection();
  LoadDefaultTextPalettes();
  DrawExceptionRegisterDump(param_1,param_2);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}




/* ============================================================
 * 00001c0c InitMemorySentinel
 * ============================================================ */


void InitMemorySentinel(void)

{
  memory_sentinel_prng_state = 0x13;
  return;
}




/* ============================================================
 * 00001c16 GetMemorySentinelValue
 * ============================================================ */


void GetMemorySentinelValue(ushort param_1)

{
  memory_sentinel_prng_state = memory_sentinel_prng_state * 0x3fd + 0x29;
  DivSigned32Remainder((uint)memory_sentinel_prng_state,(uint)param_1);
  return;
}




/* ============================================================
 * 00001c46 CalculateMemorySentinelMask
 * ============================================================ */


ushort CalculateMemorySentinelMask(short param_1)

{
  memory_sentinel_prng_state = memory_sentinel_prng_state * 0x3fd + 0x29;
  return param_1 - 1U & memory_sentinel_prng_state;
}




/* ============================================================
 * 00001c74 MemoryTickStub
 * ============================================================ */


void MemoryTickStub(void)

{
  return;
}




/* ============================================================
 * 00001c76 ClearMemoryNodes
 * ============================================================ */


void ClearMemoryNodes(void)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    *(undefined4 *)((int)&heap_node_table[0].pAddress + (int)(short)((short)iVar1 * 10)) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  return;
}




/* ============================================================
 * 00001c9a AllocMemoryNode
 * ============================================================ */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

PgmHeapNode * AllocMemoryNode(void)

{
  char nodes_remaining;
  PgmHeapNode *node;
  
  node = heap_node_table;
  nodes_remaining = '\x04';
  while( true ) {
    if (nodes_remaining == '\0') {
      node = (PgmHeapNode *)ResourceErrorScreen("MEMORY NODE USE");
      return node;
    }
    if (node->pAddress == (void *)0x0) break;
    node = node + 1;
    nodes_remaining = nodes_remaining + -1;
  }
  node->pAddress = bios_heap_area;
  return node;
}




/* ============================================================
 * 00001cce ClearMemoryNode
 * ============================================================ */


void ClearMemoryNode(PgmHeapNode *node)

{
  node->pAddress = (void *)0x0;
  return;
}




/* ============================================================
 * 00001cd6 InitBiosHeap
 * ============================================================ */


void InitBiosHeap(void)

{
  ClearMemoryNodes();
  heap_free_list = AllocMemoryNode();
  heap_free_list->pAddress = bios_heap_area;
  heap_free_list->wByte_size = 0x800;
  heap_free_list->pNext = (void *)0x0;
  FillWords(bios_heap_area,0xdddd,0x400);
  heap_used_list = (PgmHeapNode *)0x0;
  return;
}




/* ============================================================
 * 00001d24 BiosMalloc
 * ============================================================ */


void * BiosMalloc(int byte_count)

{
  int rounded_size;
  undefined4 saved_interrupt_level;
  PgmHeapNode *new_or_scan_node;
  PgmHeapNode *free_node;
  PgmHeapNode *prev_free_node;
  uint aligned_size;
  
  new_or_scan_node = heap_free_list;
  rounded_size = byte_count + 1;
  if (byte_count < -1) {
    rounded_size = byte_count + 2;
  }
  aligned_size = (rounded_size >> 1) * 2;
  saved_interrupt_level = GetInterruptLevel();
  EnterCriticalSection();
  prev_free_node = (PgmHeapNode *)0x0;
  while( true ) {
    free_node = new_or_scan_node;
    if (free_node == (PgmHeapNode *)0x0) {
      ResourceErrorScreen("MEMORY USE");
      return (void *)0x0;
    }
    if ((int)aligned_size < (int)(uint)(ushort)free_node->wByte_size) break;
    if ((ushort)free_node->wByte_size == aligned_size) {
      if (prev_free_node == (PgmHeapNode *)0x0) {
        heap_free_list = free_node->pNext;
      }
      else {
        prev_free_node->pNext = free_node->pNext;
      }
      free_node->pNext = heap_used_list;
      heap_used_list = free_node;
      SetInterruptLevel(saved_interrupt_level);
      return heap_used_list->pAddress;
    }
    new_or_scan_node = free_node->pNext;
    prev_free_node = free_node;
  }
  new_or_scan_node = AllocMemoryNode();
  new_or_scan_node->pAddress = free_node->pAddress;
  new_or_scan_node->wByte_size = (short)aligned_size;
  new_or_scan_node->pNext = heap_used_list;
  heap_used_list = new_or_scan_node;
  free_node->wByte_size = free_node->wByte_size - (short)aligned_size;
  free_node->pAddress = (void *)(aligned_size + (int)free_node->pAddress);
  SetInterruptLevel(saved_interrupt_level);
  return heap_used_list->pAddress;
}




/* ============================================================
 * 00001df8 CoalesceHeapFreeNode
 * ============================================================ */


int CoalesceHeapFreeNode(PgmHeapNode *node)

{
  PgmHeapNode *pPVar1;
  
  pPVar1 = heap_free_list;
  while( true ) {
    if (pPVar1 == (PgmHeapNode *)0x0) {
      return 0;
    }
    if ((void *)((int)pPVar1->pAddress + (uint)(ushort)pPVar1->wByte_size) == node->pAddress) break;
    if ((void *)((int)node->pAddress + (uint)(ushort)node->wByte_size) == pPVar1->pAddress) {
      pPVar1->pAddress = node->pAddress;
      pPVar1->wByte_size = node->wByte_size + pPVar1->wByte_size;
      return 1;
    }
    pPVar1 = pPVar1->pNext;
  }
  pPVar1->wByte_size = node->wByte_size + pPVar1->wByte_size;
  return 1;
}




/* ============================================================
 * 00001e42 LinkHeapFreeNode
 * ============================================================ */


/* WARNING: Removing unreachable block (ram,0x00001e62) */

undefined4 LinkHeapFreeNode(void)

{
  int iVar1;
  PgmHeapNode *node;
  
  for (node = heap_free_list; node != (PgmHeapNode *)0x0; node = node->pNext) {
    iVar1 = CoalesceHeapFreeNode(node);
    if (iVar1 != 0) {
      heap_free_list = node->pNext;
      ClearMemoryNode(node);
    }
  }
  return 0;
}




/* ============================================================
 * 00001e88 BiosFree
 * ============================================================ */


void * BiosFree(void *address)

{
  int coalesced;
  void *extraout_D0;
  PgmHeapNode *node;
  PgmHeapNode *prev;
  PgmHeapNode *scan;
  
  scan = heap_used_list;
  prev = (PgmHeapNode *)0x0;
  while( true ) {
    node = scan;
    if (node == (PgmHeapNode *)0x0) {
      return (void *)0x0;
    }
    if (node->pAddress == address) break;
    scan = node->pNext;
    prev = node;
  }
  coalesced = CoalesceHeapFreeNode(node);
  if (coalesced != 0) {
    if (prev == (PgmHeapNode *)0x0) {
      heap_used_list = node->pNext;
    }
    else {
      prev->pNext = node->pNext;
    }
    ClearMemoryNode(node);
    return extraout_D0;
  }
  if (prev == (PgmHeapNode *)0x0) {
    heap_used_list = node->pNext;
  }
  else {
    prev->pNext = node->pNext;
  }
  node->pNext = heap_free_list;
  heap_free_list = node;
  return prev;
}




/* ============================================================
 * 00001f06 ResetHeapAllocator
 * ============================================================ */


void ResetHeapAllocator(void)

{
  InitBiosHeap();
  return;
}




/* ============================================================
 * 00001f0c MemoryAllocatorNoop
 * ============================================================ */


void MemoryAllocatorNoop(void)

{
  return;
}




/* ============================================================
 * 00001f0e ClearPaletteIdRegistry
 * ============================================================ */


void ClearPaletteIdRegistry(void)

{
  palette_id_registry[0] = 0;
  palette_id_registry[1] = 0;
  palette_id_registry[2] = 0;
  return;
}




/* ============================================================
 * 00001f22 AllocatePaletteId
 * ============================================================ */


int AllocatePaletteId(int palette_group)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 1;
  iVar1 = 0;
  do {
    if ((*(uint *)((int)palette_id_registry + (int)(short)(palette_group._2_2_ << 2)) & uVar2) == 0)
    {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
    uVar2 = uVar2 * 2;
  } while (iVar1 < 0x20);
  iVar1 = ResourceErrorScreen("OUT OF PALETTE ID");
  return iVar1;
}




/* ============================================================
 * 00001f68 RegisterPaletteId
 * ============================================================ */


void RegisterPaletteId(int palette_group,uint palette_id)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = (short)palette_group;
  if ((*(uint *)((int)palette_id_registry + (int)(short)(sVar2 << 2)) & 1 << (palette_id & 0x3f)) !=
      0) {
    PrintfTextLayer(10,8,"10987654321098765432109876543210");
    PrintfTextLayer(10,9,"%032B %d",
                    *(undefined4 *)((int)palette_id_registry + (int)(short)(sVar2 << 2)),palette_id)
    ;
    ResourceErrorScreen("PAL ID DUP REGISTER");
  }
  puVar1 = (uint *)((int)palette_id_registry + (int)(short)(sVar2 << 2));
  *puVar1 = 1 << (palette_id & 0x3f) | *puVar1;
  return;
}




/* ============================================================
 * 00001fe8 FindAllocatedPaletteId
 * ============================================================ */


uint FindAllocatedPaletteId(int param_1)

{
  uint palette_id;
  
  palette_id = AllocatePaletteId(param_1);
  RegisterPaletteId(param_1,palette_id);
  return palette_id;
}




/* ============================================================
 * 0000200c FreePaletteId
 * ============================================================ */


void FreePaletteId(int palette_group,uint palette_id)

{
  uint *puVar1;
  
  puVar1 = (uint *)((int)palette_id_registry + (int)(short)(palette_group._2_2_ << 2));
  *puVar1 = ~(1 << (palette_id & 0x3f)) & *puVar1;
  return;
}




/* ============================================================
 * 00002028 ClearPaletteIdSlot
 * ============================================================ */


void ClearPaletteIdSlot(void)

{
  palette_id_registry[0] = 0;
  palette_id_registry[1] = 0;
  palette_id_registry[2] = 0;
  return;
}




/* ============================================================
 * 0000203c ResetPaletteIdRegistry
 * ============================================================ */


void ResetPaletteIdRegistry(void)

{
  palette_id_registry[0] = 0;
  palette_id_registry[1] = 0;
  palette_id_registry[2] = 0;
  return;
}




/* ============================================================
 * 00002050 LoadDefaultPaletteTables
 * ============================================================ */


void LoadDefaultPaletteTables(void)

{
  PrintfTextLayer(10,0x13,"       10987654321098765432109876543210");
  PrintfTextLayer(10,0x14,"PAL ID=%032B",palette_id_registry[2]);
  return;
}




/* ============================================================
 * 00002084 InitPaletteAllocators
 * ============================================================ */


void InitPaletteAllocators(void)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    (&palette_slot_table[0].bState)[(short)((short)iVar1 * 0xc)] = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  InitFadeSlots();
  ClearPaletteIdRegistry();
  active_palette_slot_count = 0;
  return;
}




/* ============================================================
 * 000020ba AllocatePaletteSlot
 * ============================================================ */


int AllocatePaletteSlot(void)

{
  int slot_index;
  PgmPaletteDmaSlot *slot;
  
  slot_index = 0;
  slot = palette_slot_table;
  while( true ) {
    if (3 < slot_index) {
      slot_index = ResourceErrorScreen("PALETTE USE");
      return slot_index;
    }
    if (slot->bState == '\0') break;
    slot_index = slot_index + 1;
    slot = slot + 1;
  }
  slot->wWord_count = 0;
  slot->bState = 1;
  active_palette_slot_count = active_palette_slot_count + 1;
  return slot_index;
}




/* ============================================================
 * 000020f6 FlushPaletteDmaSlots
 * ============================================================ */


void FlushPaletteDmaSlots(void)

{
  short slot_countdown;
  PgmPaletteDmaSlot *slot;
  undefined4 *dst32;
  undefined4 *src32;
  
  if (active_palette_slot_count != 0) {
    slot = palette_slot_table;
    slot_countdown = 3;
    do {
      if ((slot->bState == '\x02') || (slot->bState == '\x03')) {
        if (slot->wWord_count == 0x20) {
          src32 = (undefined4 *)slot->pSource;
          dst32 = (undefined4 *)slot->pDestination;
          *dst32 = *src32;
          dst32[1] = src32[1];
          dst32[2] = src32[2];
          dst32[3] = src32[3];
          dst32[4] = src32[4];
          dst32[5] = src32[5];
          dst32[6] = src32[6];
          dst32[7] = src32[7];
          dst32[8] = src32[8];
          dst32[9] = src32[9];
          dst32[10] = src32[10];
          dst32[0xb] = src32[0xb];
          dst32[0xc] = src32[0xc];
          dst32[0xd] = src32[0xd];
          dst32[0xe] = src32[0xe];
          dst32[0xf] = src32[0xf];
        }
        else {
          CopyWords(slot->pDestination,slot->pSource,(uint)(ushort)slot->wWord_count);
        }
        slot->wWord_count = 0;
        if (slot->bState == '\x03') {
          active_palette_slot_count = active_palette_slot_count - 1;
          slot->bState = 0;
        }
      }
      slot = slot + 1;
      slot_countdown = slot_countdown + -1;
    } while (slot_countdown != -1);
  }
  return;
}




/* ============================================================
 * 00002184 SetPaletteSlotActive
 * ============================================================ */


void SetPaletteSlotActive(void)

{
  char slots_remaining;
  PgmPaletteDmaSlot *slot;
  
  if (active_palette_slot_count != 0) {
    slot = palette_slot_table;
    slots_remaining = '\x04';
    while (slots_remaining != '\0') {
      if ((slot->bState == '\x02') && (slot->wWord_count != 0)) {
        CopyWords(slot->pDestination,slot->pSource,(uint)(ushort)slot->wWord_count);
        slot->wWord_count = 0;
      }
      slot = slot + 1;
      slots_remaining = slots_remaining + -1;
    }
  }
  return;
}




/* ============================================================
 * 000021d8 UpdatePaletteFadeSlotsThunk
 * ============================================================ */


void UpdatePaletteFadeSlotsThunk(void)

{
  UpdatePaletteFades();
  return;
}




/* ============================================================
 * 000021e0 SetPaletteSlotRange
 * ============================================================ */


void SetPaletteSlotRange(int slot,undefined2 *source,undefined2 *destination,ushort word_count)

{
  palette_slot_table[slot].pDestination = destination;
  palette_slot_table[slot].pSource = source;
  palette_slot_table[slot].wWord_count = word_count;
  palette_slot_table[slot].bState = 2;
  return;
}




/* ============================================================
 * 0000220e ConfigurePaletteDmaRange
 * ============================================================ */


void ConfigurePaletteDmaRange(int slot,undefined2 *source,undefined2 *destination,ushort word_count)

{
  palette_slot_table[slot].pDestination = destination;
  palette_slot_table[slot].pSource = source;
  palette_slot_table[slot].wWord_count = word_count;
  palette_slot_table[slot].bState = 3;
  return;
}




/* ============================================================
 * 0000223c FreePaletteSlot
 * ============================================================ */


void FreePaletteSlot(int slot)

{
  active_palette_slot_count = active_palette_slot_count - 1;
  *(undefined2 *)((int)&palette_slot_table[0].wWord_count + (int)(short)((short)slot * 0xc)) = 0;
  (&palette_slot_table[0].bState)[(short)((short)slot * 0xc)] = 0;
  return;
}




/* ============================================================
 * 00002274 GetPaletteSlotState
 * ============================================================ */


void GetPaletteSlotState(void)

{
  int slot;
  
  for (slot = 0; slot < 4; slot = slot + 1) {
    FreePaletteSlot(slot);
  }
  active_palette_slot_count = 0;
  FreeAllFadeSlots();
  ResetPaletteIdRegistry();
  return;
}




/* ============================================================
 * 000022b4 IsPaletteSlotInactive
 * ============================================================ */


bool IsPaletteSlotInactive(int slot)

{
  return *(short *)((int)&palette_slot_table[0].wWord_count + (int)(short)(slot._2_2_ * 0xc)) == 0;
}




/* ============================================================
 * 000022d4 CopyPaletteSync
 * ============================================================ */


void CopyPaletteSync(undefined2 *param_1,undefined2 *param_2,ushort param_3)

{
  undefined3 extraout_var;
  int slot;
  bool bVar1;
  
  slot = AllocatePaletteSlot();
  SetPaletteSlotRange(slot,param_1,param_2,param_3);
  do {
    bVar1 = IsPaletteSlotInactive(slot);
  } while (CONCAT31(extraout_var,bVar1) == 0);
  FreePaletteSlot(slot);
  return;
}




/* ============================================================
 * 00002310 FadeSystemResetThunk
 * ============================================================ */


void FadeSystemResetThunk(void)

{
  FadeSystemNoop();
  return;
}




/* ============================================================
 * 00002318 CopyPaletteFromTable
 * ============================================================ */


void CopyPaletteFromTable(int palette_bank,uint palette_id,undefined4 source)

{
  uint palette_offset;
  uint color_count;
  
  color_count = (uint)default_palette_descriptor_table[palette_bank + 0x1a];
  palette_offset =
       MulUnsigned32((uint)default_palette_descriptor_table[palette_bank + 0x1a],palette_id);
  CopyPaletteSync(source,*(int *)(default_palette_descriptor_table + palette_bank * 4 + 0xe) +
                         palette_offset * 2,color_count);
  return;
}




/* ============================================================
 * 00002370 CopyPaletteChunkAlt
 * ============================================================ */


void CopyPaletteChunkAlt(int palette_bank,uint palette_id,int start_color,undefined4 word_count,
                        undefined4 source)

{
  uint palette_offset;
  
  palette_offset =
       MulUnsigned32((uint)default_palette_descriptor_table[palette_bank + 0x1a],palette_id);
  CopyPaletteSync(source,start_color * 2 +
                         *(int *)(default_palette_descriptor_table + palette_bank * 4 + 0xe) +
                         palette_offset * 2,word_count);
  return;
}




/* ============================================================
 * 000023c2 CopyPaletteChunk
 * ============================================================ */


void CopyPaletteChunk(int palette_bank,uint slot,undefined4 *source)

{
  int long_blocks;
  uint palette_offset;
  
  palette_offset = (uint)default_palette_descriptor_table[palette_bank + 0x1a];
  long_blocks = palette_offset * 2;
  if (SCARRY4(palette_offset,palette_offset)) {
    long_blocks = long_blocks + 0x1f;
  }
  long_blocks = long_blocks >> 5;
  palette_offset = MulUnsigned32(slot,palette_offset);
  CopyLongBlocks8((undefined4 *)
                  (*(int *)(default_palette_descriptor_table + palette_bank * 4 + 0xe) +
                  palette_offset * 2),source,long_blocks);
  return;
}




/* ============================================================
 * 0000241e TransferPaletteRegionToLayer
 * ============================================================ */


void TransferPaletteRegionToLayer
               (int palette_bank,uint palette_id,int start_color,int word_count,undefined2 *source)

{
  uint palette_offset;
  
  palette_offset =
       MulUnsigned32((uint)default_palette_descriptor_table[palette_bank + 0x1a],palette_id);
  CopyWords((undefined2 *)
            (start_color * 2 +
            *(int *)(default_palette_descriptor_table + palette_bank * 4 + 0xe) + palette_offset * 2
            ),source,word_count);
  return;
}




/* ============================================================
 * 00002472 InitFadeSlots
 * ============================================================ */


void InitFadeSlots(void)

{
  int iVar1;
  PgmPaletteFadeSlot *pPVar2;
  
  pPVar2 = palette_fade_slots;
  iVar1 = 0;
  do {
    pPVar2->bState = 0;
    pPVar2->pSource_palette = (undefined2 *)0x0;
    iVar1 = iVar1 + 1;
    pPVar2 = pPVar2 + 1;
  } while (iVar1 < 4);
  active_fade_slot_count = 0;
  ClearFadePaletteSlots();
  return;
}




/* ============================================================
 * 0000249a AllocateFadeSlot
 * ============================================================ */


int AllocateFadeSlot(void)

{
  undefined1 palette_slot;
  int slot_index;
  PgmPaletteFadeSlot *slot;
  
  slot = palette_fade_slots;
  slot_index = 0;
  do {
    if (slot->bState == '\0') {
      slot->pSource_palette = (undefined2 *)0x0;
      slot->bTick_countdown = 0;
      palette_slot = AllocatePaletteSlot();
      slot->bPalette_slot = palette_slot;
      slot->bState = 1;
      active_fade_slot_count = active_fade_slot_count + 1;
      return slot_index;
    }
    slot_index = slot_index + 1;
    slot = slot + 1;
  } while (slot_index < 4);
  slot_index = ResourceErrorScreen("FADE USE");
  return slot_index;
}




/* ============================================================
 * 000024ea ConfigurePaletteFadeSlot
 * ============================================================ */


void ConfigurePaletteFadeSlot
               (int slot,undefined2 *source,undefined1 color_count,undefined1 current_level,
               undefined1 tick_reload,undefined2 *dest,undefined1 direction_mode,
               undefined1 step_size,undefined1 target_level)

{
  palette_fade_slots[slot].bColor_count = color_count;
  palette_fade_slots[slot].bCurrent_level = current_level;
  palette_fade_slots[slot].bTick_reload = tick_reload;
  palette_fade_slots[slot].pDest_palette = dest;
  palette_fade_slots[slot].bDirection_mode = direction_mode;
  palette_fade_slots[slot].bStep_size = step_size;
  palette_fade_slots[slot].bTick_countdown = 0;
  palette_fade_slots[slot].bTarget_level = target_level;
  palette_fade_slots[slot].pSource_palette = source;
  palette_fade_slots[slot].bState = 2;
  return;
}




/* ============================================================
 * 0000253e SetupPaletteFade
 * ============================================================ */


void SetupPaletteFade(int slot,undefined2 *source,undefined1 color_count,undefined1 current_level,
                     undefined1 tick_reload,undefined2 *dest,undefined1 direction_mode,
                     undefined1 step_size,undefined1 target_level)

{
  palette_fade_slots[slot].bColor_count = color_count;
  palette_fade_slots[slot].bCurrent_level = current_level;
  palette_fade_slots[slot].bTick_reload = tick_reload;
  palette_fade_slots[slot].pDest_palette = dest;
  palette_fade_slots[slot].bDirection_mode = direction_mode;
  palette_fade_slots[slot].bStep_size = step_size;
  palette_fade_slots[slot].bTick_countdown = 0;
  palette_fade_slots[slot].bTarget_level = target_level;
  palette_fade_slots[slot].pSource_palette = source;
  palette_fade_slots[slot].bState = 3;
  return;
}




/* ============================================================
 * 00002592 StartPaletteFadeDarker
 * ============================================================ */


void StartPaletteFadeDarker
               (int fade_slot,int palette_bank,uint palette_id,undefined2 *source_palette,
               undefined1 tick_reload,undefined1 step_size)

{
  uint palette_offset;
  undefined1 direction_mode;
  undefined1 target_level;
  
  target_level = 0x20;
  direction_mode = 0;
  palette_offset =
       MulUnsigned32((uint)default_palette_descriptor_table[palette_bank + 0x1a],palette_id);
  ConfigurePaletteFadeSlot
            (fade_slot,source_palette,default_palette_descriptor_table[palette_bank + 0x1a],1,
             tick_reload,
             (undefined2 *)
             (*(int *)(default_palette_descriptor_table + palette_bank * 4 + 0xe) +
             palette_offset * 2),direction_mode,step_size,target_level);
  return;
}




/* ============================================================
 * 00002600 StartPaletteFadeDarkerVariant
 * ============================================================ */


void StartPaletteFadeDarkerVariant
               (int fade_slot,int palette_bank,uint palette_id,undefined2 *source_palette,
               undefined1 tick_reload,undefined1 step_size)

{
  uint palette_offset;
  undefined1 direction_mode;
  undefined1 target_level;
  
  target_level = 0;
  direction_mode = 1;
  palette_offset =
       MulUnsigned32((uint)default_palette_descriptor_table[palette_bank + 0x1a],palette_id);
  ConfigurePaletteFadeSlot
            (fade_slot,source_palette,default_palette_descriptor_table[palette_bank + 0x1a],0x1f,
             tick_reload,
             (undefined2 *)
             (*(int *)(default_palette_descriptor_table + palette_bank * 4 + 0xe) +
             palette_offset * 2),direction_mode,step_size,target_level);
  return;
}




/* ============================================================
 * 0000266e StartPaletteFadeBrighter
 * ============================================================ */


void StartPaletteFadeBrighter
               (int fade_slot,int palette_bank,uint palette_id,undefined2 *source_palette,
               undefined1 tick_reload,undefined1 step_size)

{
  uint palette_offset;
  undefined1 direction_mode;
  undefined1 target_level;
  
  target_level = 0x20;
  direction_mode = 0;
  palette_offset =
       MulUnsigned32((uint)default_palette_descriptor_table[palette_bank + 0x1a],palette_id);
  SetupPaletteFade(fade_slot,source_palette,default_palette_descriptor_table[palette_bank + 0x1a],1,
                   tick_reload,
                   (undefined2 *)
                   (*(int *)(default_palette_descriptor_table + palette_bank * 4 + 0xe) +
                   palette_offset * 2),direction_mode,step_size,target_level);
  return;
}




/* ============================================================
 * 000026dc StartPaletteFadeBrighterVariant
 * ============================================================ */


void StartPaletteFadeBrighterVariant
               (int fade_slot,int palette_bank,uint palette_id,undefined2 *source_palette,
               undefined1 tick_reload,undefined1 step_size)

{
  uint palette_offset;
  undefined1 direction_mode;
  undefined1 target_level;
  
  target_level = 0;
  direction_mode = 1;
  palette_offset =
       MulUnsigned32((uint)default_palette_descriptor_table[palette_bank + 0x1a],palette_id);
  SetupPaletteFade(fade_slot,source_palette,default_palette_descriptor_table[palette_bank + 0x1a],
                   0x1f,tick_reload,
                   (undefined2 *)
                   (*(int *)(default_palette_descriptor_table + palette_bank * 4 + 0xe) +
                   palette_offset * 2),direction_mode,step_size,target_level);
  return;
}




/* ============================================================
 * 0000274a ConfigureFadeSlotFlags
 * ============================================================ */


undefined4 ConfigureFadeSlotFlags(short param_1)

{
  undefined3 extraout_var;
  bool bVar2;
  undefined4 uVar1;
  
  bVar2 = IsPaletteSlotInactive
                    ((uint)*(byte *)((int)palette_fade_slots[0].pWorking_palette +
                                    (short)(param_1 * 0x52) + -7));
  if ((CONCAT31(extraout_var,bVar2) == 0) ||
     (*(int *)((int)palette_fade_slots[0].pWorking_palette + (short)(param_1 * 0x52) + -0x10) != 0))
  {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}




/* ============================================================
 * 00002790 UpdateFadesThenReturn
 * ============================================================ */


void UpdateFadesThenReturn(undefined4 param_1)

{
  int iVar1;
  
  while( true ) {
    iVar1 = ConfigureFadeSlotFlags(param_1);
    if (iVar1 != 0) break;
    UpdatePaletteFades();
  }
  return;
}




/* ============================================================
 * 000027ae WaitForAllFades
 * ============================================================ */


void WaitForAllFades(void)

{
  int iVar1;
  PgmPaletteFadeSlot *pPVar2;
  
  do {
    UpdatePaletteFades();
    pPVar2 = palette_fade_slots;
    iVar1 = 0;
    do {
      if (pPVar2->pSource_palette != (undefined2 *)0x0) break;
      iVar1 = iVar1 + 1;
      pPVar2 = pPVar2 + 1;
    } while (iVar1 < 4);
    InfiniteWaitLoop();
    if (iVar1 == 4) {
      return;
    }
  } while( true );
}




/* ============================================================
 * 000027e4 FreeFadeSlot
 * ============================================================ */


void FreeFadeSlot(int slot)

{
  if (palette_fade_slots[slot].bState != '\x03') {
    FreePaletteSlot((uint)(byte)palette_fade_slots[slot].bPalette_slot);
  }
  palette_fade_slots[slot].bState = 0;
  palette_fade_slots[slot].pSource_palette = (undefined2 *)0x0;
  active_fade_slot_count = active_fade_slot_count - 1;
  return;
}




/* ============================================================
 * 0000282c FreeAllFadeSlots
 * ============================================================ */


void FreeAllFadeSlots(void)

{
  int slot;
  PgmPaletteFadeSlot *pPVar1;
  
  pPVar1 = palette_fade_slots;
  for (slot = 0; slot < 4; slot = slot + 1) {
    if (((pPVar1->bState == '\x01') || (pPVar1->bState == '\x02')) || (pPVar1->bState == '\x03')) {
      FreeFadeSlot(slot);
    }
    pPVar1 = pPVar1 + 1;
  }
  ResetFadePaletteSystem();
  return;
}




/* ============================================================
 * 0000286c BuildFadeDarkerPalette
 * ============================================================ */


void BuildFadeDarkerPalette(PgmPaletteFadeSlot *slot)

{
  char remaining_colors;
  ushort color;
  ushort fade_level;
  ushort *dst;
  ushort *src;
  
  fade_level = (ushort)(char)slot->bCurrent_level;
  dst = slot->pWorking_palette;
  src = slot->pSource_palette;
  remaining_colors = slot->bColor_count;
  while (remaining_colors != '\0') {
    color = *src;
    if (fade_level < (color & 0x1f)) {
      color = color - fade_level;
    }
    else {
      color = color & 0xffe0;
    }
    if ((ushort)(fade_level * 0x20) < (color & 0x3e0)) {
      color = color + fade_level * -0x20;
    }
    else {
      color = color & 0xfc1f;
    }
    if ((ushort)(fade_level * 0x400) < (color & 0x7c00)) {
      color = color + fade_level * -0x400;
    }
    else {
      color = color & 0x83ff;
    }
    *dst = color;
    dst = dst + 1;
    src = src + 1;
    remaining_colors = remaining_colors + -1;
  }
  return;
}




/* ============================================================
 * 000028da BuildFadeBrighterPalette
 * ============================================================ */


void BuildFadeBrighterPalette(PgmPaletteFadeSlot *slot)

{
  char remaining_colors;
  ushort color;
  short fade_level;
  ushort *dst;
  ushort *src;
  
  fade_level = (short)(char)slot->bCurrent_level;
  dst = slot->pWorking_palette;
  src = slot->pSource_palette;
  remaining_colors = slot->bColor_count;
  while (remaining_colors != '\0') {
    color = *src;
    if ((ushort)(fade_level + (color & 0x1f)) < 0x1f) {
      color = fade_level + color;
    }
    else {
      color = color | 0x1f;
    }
    if ((ushort)(fade_level * 0x20 + (color & 0x3e0)) < 0x3e0) {
      color = fade_level * 0x20 + color;
    }
    else {
      color = color | 0x3e0;
    }
    if ((ushort)(fade_level * 0x400 + (color & 0x7c00)) < 0x7c00) {
      color = fade_level * 0x400 + color;
    }
    else {
      color = color | 0x7c00;
    }
    *dst = color;
    dst = dst + 1;
    src = src + 1;
    remaining_colors = remaining_colors + -1;
  }
  return;
}




/* ============================================================
 * 00002954 UpdatePaletteFades
 * ============================================================ */


void UpdatePaletteFades(void)

{
  char cVar1;
  char cVar2;
  PgmPaletteFadeSlot *slot;
  
  if (active_fade_slot_count != 0) {
    slot = palette_fade_slots;
    cVar2 = '\x04';
    while (cVar2 != '\0') {
      if ((slot->pSource_palette != (undefined2 *)0x0) &&
         (((slot->bState == '\x02' || (slot->bState == '\x03')) &&
          (cVar1 = slot->bTick_countdown, slot->bTick_countdown = slot->bTick_countdown + -1,
          cVar1 == '\0')))) {
        slot->bTick_countdown = slot->bTick_reload;
        if (slot->bDirection_mode == '\x03') {
          BuildFadeBrighterPalette(slot);
        }
        else {
          BuildFadeDarkerPalette(slot);
        }
        if (slot->bDirection_mode == '\x03') {
          slot->bCurrent_level = slot->bStep_size + slot->bCurrent_level;
          if ((short)(ushort)(byte)slot->bTarget_level <= (short)(char)slot->bCurrent_level)
          goto LAB_00002a10;
        }
        else if (slot->bDirection_mode == '\0') {
          slot->bCurrent_level = slot->bStep_size + slot->bCurrent_level;
          if ((short)(ushort)(byte)slot->bTarget_level <= (short)(char)slot->bCurrent_level) {
LAB_00002a10:
            slot->pSource_palette = (undefined2 *)0x0;
          }
        }
        else {
          slot->bCurrent_level = slot->bCurrent_level - slot->bStep_size;
          if ((short)(char)slot->bCurrent_level < (short)(ushort)(byte)slot->bTarget_level)
          goto LAB_00002a10;
        }
        if ((slot->pSource_palette == (undefined2 *)0x0) && (slot->bState == '\x03')) {
          ConfigurePaletteDmaRange
                    ((uint)(byte)slot->bPalette_slot,slot->pWorking_palette,slot->pDest_palette,
                     (ushort)(byte)slot->bColor_count);
          slot->bState = 0;
          active_fade_slot_count = active_fade_slot_count - 1;
        }
        else {
          SetPaletteSlotRange((uint)(byte)slot->bPalette_slot,slot->pWorking_palette,
                              slot->pDest_palette,(ushort)(byte)slot->bColor_count);
        }
      }
      slot = slot + 1;
      cVar2 = cVar2 + -1;
    }
  }
  return;
}




/* ============================================================
 * 00002a8a UpdateFadeCopyChannels
 * ============================================================ */


void UpdateFadeCopyChannels(void)

{
  int iVar1;
  char cVar2;
  PgmPaletteFadeSlot *slot;
  
  if (active_fade_slot_count != 0) {
    slot = palette_fade_slots;
    cVar2 = '\x04';
    while (cVar2 != '\0') {
      if (((slot->pSource_palette != (undefined2 *)0x0) && (slot->bState == '\x02')) &&
         (iVar1 = GetTimerValue((uint)(byte)slot->bTick_countdown), iVar1 == 0)) {
        SetTimerValue((uint)(byte)slot->bTick_countdown,(uint)(byte)slot->bTick_reload);
        if (slot->bDirection_mode == '\x03') {
          BuildFadeBrighterPalette(slot);
        }
        else {
          BuildFadeDarkerPalette(slot);
        }
        SetPaletteSlotRange((uint)(byte)slot->bPalette_slot,slot->pWorking_palette,
                            slot->pDest_palette,(ushort)(byte)slot->bColor_count);
        if (slot->bDirection_mode == '\x03') {
          slot->bCurrent_level = slot->bStep_size + slot->bCurrent_level;
          if ((short)(ushort)(byte)slot->bTarget_level <= (short)(char)slot->bCurrent_level)
          goto LAB_00002b7c;
        }
        else if (slot->bDirection_mode == '\0') {
          slot->bCurrent_level = slot->bStep_size + slot->bCurrent_level;
          if ((short)(ushort)(byte)slot->bTarget_level <= (short)(char)slot->bCurrent_level) {
LAB_00002b7c:
            slot->pSource_palette = (undefined2 *)0x0;
          }
        }
        else {
          slot->bCurrent_level = slot->bCurrent_level - slot->bStep_size;
          if ((short)(char)slot->bCurrent_level < (short)(ushort)(byte)slot->bTarget_level)
          goto LAB_00002b7c;
        }
      }
      slot = slot + 1;
      cVar2 = cVar2 + -1;
    }
  }
  return;
}




/* ============================================================
 * 00002b94 UpdateFadeCopyChannelStep
 * ============================================================ */


void UpdateFadeCopyChannelStep(void)

{
  int iVar1;
  char cVar2;
  PgmPaletteFadeSlot *slot;
  
  if (active_fade_slot_count != 0) {
    slot = palette_fade_slots;
    cVar2 = '\x04';
    while (cVar2 != '\0') {
      if (((slot->pSource_palette != (undefined2 *)0x0) && (slot->bState == '\x02')) &&
         (iVar1 = GetTimerValue((uint)(byte)slot->bTick_countdown), iVar1 == 0)) {
        SetTimerValue((uint)(byte)slot->bTick_countdown,(uint)(byte)slot->bTick_reload);
        if (slot->bDirection_mode == '\x03') {
          BuildFadeBrighterPalette(slot);
        }
        else {
          BuildFadeDarkerPalette(slot);
        }
        SetPaletteSlotRange((uint)(byte)slot->bPalette_slot,slot->pWorking_palette,
                            slot->pDest_palette,(ushort)(byte)slot->bColor_count);
        if (slot->bDirection_mode == '\x03') {
          slot->bCurrent_level = slot->bStep_size + slot->bCurrent_level;
          if ((short)(ushort)(byte)slot->bTarget_level <= (short)(char)slot->bCurrent_level)
          goto LAB_00002c86;
        }
        else if (slot->bDirection_mode == '\0') {
          slot->bCurrent_level = slot->bStep_size + slot->bCurrent_level;
          if ((short)(ushort)(byte)slot->bTarget_level <= (short)(char)slot->bCurrent_level) {
LAB_00002c86:
            slot->pSource_palette = (undefined2 *)0x0;
          }
        }
        else {
          slot->bCurrent_level = slot->bCurrent_level - slot->bStep_size;
          if ((short)(char)slot->bCurrent_level < (short)(ushort)(byte)slot->bTarget_level)
          goto LAB_00002c86;
        }
      }
      slot = slot + 1;
      cVar2 = cVar2 + -1;
    }
  }
  return;
}




/* ============================================================
 * 00002c9e FadeSystemNoop
 * ============================================================ */


void FadeSystemNoop(void)

{
  return;
}




/* ============================================================
 * 00002ca0 ClearFadePaletteSlots
 * ============================================================ */


void ClearFadePaletteSlots(void)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    (&fade_copy_slots[0].bState)[(short)((short)iVar1 << 4)] = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  return;
}




/* ============================================================
 * 00002cba ReserveFadeCopyChannel
 * ============================================================ */


int ReserveFadeCopyChannel(void)

{
  int slot_index;
  PgmFadeCopySlot *slot;
  
  slot_index = 0;
  slot = fade_copy_slots;
  while( true ) {
    if (3 < slot_index) {
      slot_index = ResourceErrorScreen("FADE PALETTE USE");
      return slot_index;
    }
    if (slot->bState == '\0') break;
    slot_index = slot_index + 1;
    slot = slot + 1;
  }
  slot->bState = 1;
  return slot_index;
}




/* ============================================================
 * 00002cec ReleaseFadeCopyChannel
 * ============================================================ */


void ReleaseFadeCopyChannel(int slot)

{
  fade_copy_slots[slot].bState = 0;
  FreePaletteId((uint)(byte)fade_copy_slots[slot].bPalette_bank,
                (uint)(byte)fade_copy_slots[slot].bPalette_id);
  return;
}




/* ============================================================
 * 00002d1c SetupFadeCopySlot
 * ============================================================ */


void SetupFadeCopySlot(int slot,int palette_bank,uchar palette_id,undefined2 *source_palette,
                      uchar mode)

{
  fade_copy_slots[slot].bPalette_bank = (char)palette_bank;
  fade_copy_slots[slot].bPalette_id = palette_id;
  fade_copy_slots[slot].bStart_color = 0;
  fade_copy_slots[slot].bColor_count = default_palette_descriptor_table[palette_bank + 0x1a];
  fade_copy_slots[slot].pSource_palette = source_palette;
  fade_copy_slots[slot].bMode = mode;
  fade_copy_slots[slot].bState = 2;
  return;
}




/* ============================================================
 * 00002d5c StartFadeCopyChannelA
 * ============================================================ */


void StartFadeCopyChannelA(int param_1,uchar param_2,undefined2 *param_3)

{
  int slot;
  uchar mode;
  
  mode = '\0';
  slot = ReserveFadeCopyChannel();
  SetupFadeCopySlot(slot,param_1,param_2,param_3,mode);
  return;
}




/* ============================================================
 * 00002d7c StartFadeCopyChannelB
 * ============================================================ */


void StartFadeCopyChannelB(int param_1,uchar param_2,undefined2 *param_3)

{
  int slot;
  uchar mode;
  
  mode = '\x01';
  slot = ReserveFadeCopyChannel();
  SetupFadeCopySlot(slot,param_1,param_2,param_3,mode);
  return;
}




/* ============================================================
 * 00002d9e StartFadePaletteSlot
 * ============================================================ */


int StartFadePaletteSlot(int palette_bank,uint palette_id,undefined2 *source)

{
  int slot;
  uint bank_or_offset;
  int palette_bank_00;
  uchar mode;
  
  mode = '\x02';
  palette_bank_00 = palette_bank;
  bank_or_offset = palette_id;
  slot = ReserveFadeCopyChannel();
  SetupFadeCopySlot(slot,palette_bank_00,(uchar)bank_or_offset,source,mode);
  RegisterPaletteId(palette_bank,palette_id);
  bank_or_offset =
       MulUnsigned32((uint)default_palette_descriptor_table[palette_bank + 0x1a],palette_id);
  fade_copy_slots[slot].pDest_palette =
       (undefined2 *)
       (*(int *)(default_palette_descriptor_table + palette_bank * 4 + 0xe) + bank_or_offset * 2);
  return slot;
}




/* ============================================================
 * 00002e16 StartFadeCopyForAllPalettes
 * ============================================================ */


void StartFadeCopyForAllPalettes(uint mode,undefined4 tick_reload,undefined4 palette_step)

{
  undefined4 fade_slot;
  uint palette_offset;
  int slot_index;
  undefined1 current_level;
  PgmFadeCopySlot *copy_slot;
  int aiStackY_8014 [8177];
  undefined1 direction_mode;
  undefined1 step_size;
  undefined1 target_level;
  int allocated_fade_slots [4];
  short slot_short;
  
  if (mode == 3) {
    current_level = 1;
  }
  else if (mode == 0) {
    current_level = 1;
  }
  else {
    current_level = 0x1f;
  }
  copy_slot = fade_copy_slots;
  for (slot_index = 0; slot_index < 4; slot_index = slot_index + 1) {
    slot_short = (short)slot_index;
    *(undefined4 *)((int)allocated_fade_slots + (int)(short)(slot_short << 2)) = 0xffffffff;
    if (copy_slot->bState == '\x02') {
      fade_slot = AllocateFadeSlot();
      *(undefined4 *)((int)allocated_fade_slots + (int)(short)(slot_short << 2)) = fade_slot;
      palette_offset = mode;
      if (copy_slot->bMode != '\x02') {
        palette_offset = (uint)(byte)copy_slot->bMode;
      }
      direction_mode = (undefined1)palette_offset;
      step_size = 1;
      target_level = (undefined1)palette_step;
      palette_offset =
           MulUnsigned32((uint)default_palette_descriptor_table
                               [(byte)copy_slot->bPalette_bank + 0x1a],
                         (uint)(byte)copy_slot->bPalette_id);
      ConfigurePaletteFadeSlot
                (*(int *)((int)allocated_fade_slots + (int)(short)(slot_short << 2)),
                 copy_slot->pSource_palette,copy_slot->bColor_count,current_level,
                 (undefined1)tick_reload,
                 (undefined2 *)
                 ((uint)(byte)copy_slot->bStart_color * 2 +
                 *(int *)(default_palette_descriptor_table +
                         (uint)(byte)copy_slot->bPalette_bank * 4 + 0xe) + palette_offset * 2),
                 direction_mode,step_size,target_level);
    }
    copy_slot = copy_slot + 1;
  }
  WaitForAllFades();
  for (slot_index = 0; slot_index < 4; slot_index = slot_index + 1) {
    if (*(int *)((int)allocated_fade_slots + (int)(short)((short)slot_index << 2)) != -1) {
      FreeFadeSlot(*(int *)((int)allocated_fade_slots + (int)(short)((short)slot_index << 2)));
    }
  }
  return;
}




/* ============================================================
 * 00002f38 StartAllPaletteFadeCopyMode0Default
 * ============================================================ */


void StartAllPaletteFadeCopyMode0Default(undefined4 param_1)

{
  StartFadeCopyForAllPalettes(0,param_1,0x20);
  return;
}




/* ============================================================
 * 00002f4e StartAllPaletteFadeCopyMode1Zero
 * ============================================================ */


void StartAllPaletteFadeCopyMode1Zero(undefined4 param_1)

{
  StartFadeCopyForAllPalettes(1,param_1,0);
  return;
}




/* ============================================================
 * 00002f64 StartAllPaletteFadeCopyMode0Range
 * ============================================================ */


void StartAllPaletteFadeCopyMode0Range(undefined4 param_1,undefined4 param_2)

{
  StartFadeCopyForAllPalettes(0,param_1,param_2);
  return;
}




/* ============================================================
 * 00002f7a StartAllPaletteFadeCopyMode1Range
 * ============================================================ */


void StartAllPaletteFadeCopyMode1Range(undefined4 param_1,undefined4 param_2)

{
  StartFadeCopyForAllPalettes(1,param_1,param_2);
  return;
}




/* ============================================================
 * 00002f92 StartAllPaletteFadeCopyMode3Default
 * ============================================================ */


void StartAllPaletteFadeCopyMode3Default(undefined4 param_1)

{
  StartFadeCopyForAllPalettes(3,param_1,0x20);
  return;
}




/* ============================================================
 * 00002faa UpdateFadePaletteCopies
 * ============================================================ */


void UpdateFadePaletteCopies(void)

{
  int iVar1;
  PgmFadeCopySlot *pPVar2;
  
  pPVar2 = fade_copy_slots;
  for (iVar1 = 0; iVar1 < 4; iVar1 = iVar1 + 1) {
    if (pPVar2->bState == '\x02') {
      CopyPaletteChunk((uint)(byte)pPVar2->bPalette_bank,(uint)(byte)pPVar2->bPalette_id,
                       (undefined4 *)pPVar2->pSource_palette);
    }
    pPVar2 = pPVar2 + 1;
  }
  return;
}




/* ============================================================
 * 00002fee WaitForFadeCopyCompletion
 * ============================================================ */


void WaitForFadeCopyCompletion(ushort fill_color)

{
  int slot_index;
  PgmFadeCopySlot *slot;
  ushort scratch_palette [32];
  
  FillWords(scratch_palette,fill_color,0x20);
  slot = fade_copy_slots;
  for (slot_index = 0; slot_index < 4; slot_index = slot_index + 1) {
    if (slot->bState == '\x02') {
      CopyPaletteChunk((uint)(byte)slot->bPalette_bank,(uint)(byte)slot->bPalette_id,
                       (undefined4 *)scratch_palette);
    }
    slot = slot + 1;
  }
  return;
}




/* ============================================================
 * 00003054 FadeWaitNoopA
 * ============================================================ */


void FadeWaitNoopA(void)

{
  return;
}




/* ============================================================
 * 00003058 FadeWaitNoopB
 * ============================================================ */


void FadeWaitNoopB(void)

{
  return;
}




/* ============================================================
 * 0000305a WaitForPaletteFadeSlot
 * ============================================================ */


void WaitForPaletteFadeSlot(undefined2 param_1)

{
  FadeWaitNoopB(0,param_1);
  return;
}




/* ============================================================
 * 0000306e WaitForFadeCopySlot
 * ============================================================ */


void WaitForFadeCopySlot(undefined2 param_1)

{
  undefined2 extraout_D0u;
  
  FadeWaitNoopA();
  FadeWaitNoopB(1,CONCAT22(extraout_D0u,param_1));
  return;
}




/* ============================================================
 * 00003088 ResetFadePaletteSystem
 * ============================================================ */


void ResetFadePaletteSystem(void)

{
  ClearFadePaletteSlots();
  ResetPaletteIdRegistry();
  return;
}




/* ============================================================
 * 00003094 ClearAllFadeCopySlots
 * ============================================================ */


void ClearAllFadeCopySlots(void)

{
  ClearFadePaletteSlots();
  return;
}




/* ============================================================
 * 0000309a StartGlobalFadeCopyMode
 * ============================================================ */


void StartGlobalFadeCopyMode
               (int copy_slot_index,uint mode,undefined1 tick_reload,undefined1 target_level)

{
  int slot;
  undefined1 start_level;
  
  if (mode == 3) {
    start_level = 1;
  }
  else if (mode == 0) {
    start_level = 1;
  }
  else {
    start_level = 0x1f;
  }
  slot = AllocateFadeSlot();
  if (fade_copy_slots[copy_slot_index].bMode != '\x02') {
    mode = (uint)(byte)fade_copy_slots[copy_slot_index].bMode;
  }
  ConfigurePaletteFadeSlot
            (slot,fade_copy_slots[copy_slot_index].pSource_palette,
             fade_copy_slots[copy_slot_index].bColor_count,start_level,tick_reload,
             (undefined2 *)
             ((uint)(byte)fade_copy_slots[copy_slot_index].bStart_color * 2 +
             *(int *)(default_palette_descriptor_table +
                     (uint)(byte)fade_copy_slots[copy_slot_index].bPalette_bank * 4 + 0xe) +
             (uint)(byte)fade_copy_slots[copy_slot_index].bPalette_id * 0x40),(char)mode,1,
             target_level);
  WaitForAllFades();
  FreeFadeSlot(slot);
  return;
}




/* ============================================================
 * 00003148 StartGlobalFadeMode0Default
 * ============================================================ */


void StartGlobalFadeMode0Default(int param_1,undefined1 param_2)

{
  StartGlobalFadeCopyMode(param_1,0,param_2,0x20);
  return;
}




/* ============================================================
 * 00003162 StartGlobalFadeMode1Zero
 * ============================================================ */


void StartGlobalFadeMode1Zero(int param_1,undefined1 param_2)

{
  StartGlobalFadeCopyMode(param_1,1,param_2,0);
  return;
}




/* ============================================================
 * 0000317c StartGlobalFadeMode0Range
 * ============================================================ */


void StartGlobalFadeMode0Range(int param_1,undefined1 param_2,undefined1 param_3)

{
  StartGlobalFadeCopyMode(param_1,0,param_2,param_3);
  return;
}




/* ============================================================
 * 00003196 StartGlobalFadeMode1Range
 * ============================================================ */


void StartGlobalFadeMode1Range(int param_1,undefined1 param_2,undefined1 param_3)

{
  StartGlobalFadeCopyMode(param_1,1,param_2,param_3);
  return;
}




/* ============================================================
 * 000031b2 StartGlobalFadeMode3Default
 * ============================================================ */


void StartGlobalFadeMode3Default(int param_1,undefined1 param_2)

{
  StartGlobalFadeCopyMode(param_1,3,param_2,0x20);
  return;
}




/* ============================================================
 * 000031ce StartGlobalFadeCopyMode2
 * ============================================================ */


void StartGlobalFadeCopyMode2(int param_1)

{
  if (fade_copy_slots[param_1].bState != '\x02') {
    AssertFailScreen("f->state==RS_ACTIVE",(char *)assert_file_fade_c_136d4,0x2ea);
  }
  CopyPaletteChunk((uint)(byte)fade_copy_slots[param_1].bPalette_bank,
                   (uint)(byte)fade_copy_slots[param_1].bPalette_id,
                   (undefined4 *)fade_copy_slots[param_1].pSource_palette);
  return;
}




/* ============================================================
 * 00003226 RunGlobalFadeLoop
 * ============================================================ */


void RunGlobalFadeLoop(int param_1,ushort param_2)

{
  ushort auStack_44 [32];
  
  FillWords(auStack_44,param_2,0x20);
  if (fade_copy_slots[param_1].bState != '\x02') {
    AssertFailScreen("f->state==RS_ACTIVE",(char *)assert_file_fade_c_136f0,0x2f5);
  }
  CopyPaletteChunk((uint)(byte)fade_copy_slots[param_1].bPalette_bank,
                   (uint)(byte)fade_copy_slots[param_1].bPalette_id,(undefined4 *)auStack_44);
  return;
}




/* ============================================================
 * 00003298 GlobalFadeNoopA
 * ============================================================ */


void GlobalFadeNoopA(void)

{
  return;
}




/* ============================================================
 * 0000329c GlobalFadeNoopB
 * ============================================================ */


void GlobalFadeNoopB(void)

{
  return;
}




/* ============================================================
 * 0000329e WaitForGlobalFadeSlot
 * ============================================================ */


void WaitForGlobalFadeSlot(undefined4 param_1,undefined2 param_2)

{
  GlobalFadeNoopB(param_1,0,param_2);
  return;
}




/* ============================================================
 * 000032b6 StartGlobalFadeWithDefaults
 * ============================================================ */


void StartGlobalFadeWithDefaults(undefined4 param_1,undefined2 param_2)

{
  undefined2 extraout_D0u;
  
  GlobalFadeNoopA(param_1);
  GlobalFadeNoopB(param_1,1,CONCAT22(extraout_D0u,param_2));
  return;
}




/* ============================================================
 * 000032de StartGlobalPaletteFade
 * ============================================================ */


void StartGlobalPaletteFade(uint mode,undefined4 tick_reload,undefined4 palette_step)

{
  undefined4 fade_slot;
  uint palette_offset;
  int slot_index;
  undefined1 current_level;
  PgmFadeCopySlot *copy_slot;
  int aiStackY_8014 [8177];
  undefined1 direction_mode;
  undefined1 step_size;
  undefined1 target_level;
  int allocated_fade_slots [4];
  short slot_short;
  
  if (mode == 3) {
    current_level = 1;
  }
  else if (mode == 0) {
    current_level = 1;
  }
  else {
    current_level = 0x1f;
  }
  copy_slot = fade_copy_slots;
  for (slot_index = 0; slot_index < 4; slot_index = slot_index + 1) {
    slot_short = (short)slot_index;
    *(undefined4 *)((int)allocated_fade_slots + (int)(short)(slot_short << 2)) = 0xffffffff;
    if (copy_slot->bState == '\x02') {
      fade_slot = AllocateFadeSlot();
      *(undefined4 *)((int)allocated_fade_slots + (int)(short)(slot_short << 2)) = fade_slot;
      palette_offset = mode;
      if (copy_slot->bMode != '\x02') {
        palette_offset = (uint)(byte)copy_slot->bMode;
      }
      direction_mode = (undefined1)palette_offset;
      step_size = 1;
      target_level = (undefined1)palette_step;
      palette_offset =
           MulUnsigned32((uint)default_palette_descriptor_table
                               [(byte)copy_slot->bPalette_bank + 0x1a],
                         (uint)(byte)copy_slot->bPalette_id);
      SetupPaletteFade(*(int *)((int)allocated_fade_slots + (int)(short)(slot_short << 2)),
                       copy_slot->pSource_palette,copy_slot->bColor_count,current_level,
                       (undefined1)tick_reload,
                       (undefined2 *)
                       ((uint)(byte)copy_slot->bStart_color * 2 +
                       *(int *)(default_palette_descriptor_table +
                               (uint)(byte)copy_slot->bPalette_bank * 4 + 0xe) + palette_offset * 2)
                       ,direction_mode,step_size,target_level);
    }
    copy_slot = copy_slot + 1;
  }
  return;
}




/* ============================================================
 * 000033ca FadeScreenToBlack
 * ============================================================ */


void FadeScreenToBlack(undefined4 param_1)

{
  StartGlobalPaletteFade(0,param_1,0x20);
  return;
}




/* ============================================================
 * 000033e0 FadePaletteToBlack
 * ============================================================ */


void FadePaletteToBlack(undefined4 param_1)

{
  StartGlobalPaletteFade(1,param_1,0);
  return;
}




/* ============================================================
 * 000033f6 FadePaletteToWhite
 * ============================================================ */


void FadePaletteToWhite(undefined4 param_1,undefined4 param_2)

{
  StartGlobalPaletteFade(0,param_1,param_2);
  return;
}




/* ============================================================
 * 0000340c FadePaletteFromBlack
 * ============================================================ */


void FadePaletteFromBlack(undefined4 param_1,undefined4 param_2)

{
  StartGlobalPaletteFade(1,param_1,param_2);
  return;
}




/* ============================================================
 * 00003424 FadePaletteFromWhite
 * ============================================================ */


void FadePaletteFromWhite(undefined4 param_1)

{
  StartGlobalPaletteFade(3,param_1,0x20);
  return;
}




/* ============================================================
 * 0000343c StartGlobalFadePresetA
 * ============================================================ */


void StartGlobalFadePresetA
               (int copy_slot_index,uint mode,undefined4 tick_reload,undefined4 palette_step)

{
  int fade_slot;
  uint palette_offset;
  undefined1 current_level;
  undefined1 direction_mode;
  undefined1 step_size;
  
  if (mode == 3) {
    current_level = 1;
  }
  else if (mode == 0) {
    current_level = 1;
  }
  else {
    current_level = 0x1f;
  }
  fade_slot = AllocateFadeSlot();
  if (fade_copy_slots[copy_slot_index].bMode != '\x02') {
    mode = (uint)(byte)fade_copy_slots[copy_slot_index].bMode;
  }
  direction_mode = (undefined1)mode;
  step_size = 1;
  palette_offset =
       MulUnsigned32((uint)default_palette_descriptor_table
                           [(byte)fade_copy_slots[copy_slot_index].bPalette_bank + 0x1a],
                     (uint)(byte)fade_copy_slots[copy_slot_index].bPalette_id);
  SetupPaletteFade(fade_slot,fade_copy_slots[copy_slot_index].pSource_palette,
                   fade_copy_slots[copy_slot_index].bColor_count,current_level,
                   (undefined1)tick_reload,
                   (undefined2 *)
                   ((uint)(byte)fade_copy_slots[copy_slot_index].bStart_color * 2 +
                   *(int *)(default_palette_descriptor_table +
                           (uint)(byte)fade_copy_slots[copy_slot_index].bPalette_bank * 4 + 0xe) +
                   palette_offset * 2),direction_mode,step_size,(undefined1)palette_step);
  return;
}




/* ============================================================
 * 000034fc StartGlobalFadePresetB
 * ============================================================ */


void StartGlobalFadePresetB(int param_1,undefined4 param_2)

{
  StartGlobalFadePresetA(param_1,0,param_2,0x20);
  return;
}




/* ============================================================
 * 00003516 StartGlobalFadePresetC
 * ============================================================ */


void StartGlobalFadePresetC(int param_1,undefined4 param_2)

{
  StartGlobalFadePresetA(param_1,1,param_2,0);
  return;
}




/* ============================================================
 * 00003530 StartGlobalFadePresetD
 * ============================================================ */


void StartGlobalFadePresetD(int param_1,undefined4 param_2,undefined4 param_3)

{
  StartGlobalFadePresetA(param_1,0,param_2,param_3);
  return;
}




/* ============================================================
 * 0000354a StartGlobalFadePresetE
 * ============================================================ */


void StartGlobalFadePresetE(int param_1,undefined4 param_2,undefined4 param_3)

{
  StartGlobalFadePresetA(param_1,1,param_2,param_3);
  return;
}




/* ============================================================
 * 00003566 StartGlobalFadePresetF
 * ============================================================ */


void StartGlobalFadePresetF(int param_1,undefined4 param_2)

{
  StartGlobalFadePresetA(param_1,3,param_2,0x20);
  return;
}




/* ============================================================
 * 00003582 ClearFadeCopyChannelsForAll
 * ============================================================ */


void ClearFadeCopyChannelsForAll(void)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 4; iVar1 = iVar1 + 1) {
  }
  return;
}




/* ============================================================
 * 000035ce UpdateFadeCopyChannelsForAll
 * ============================================================ */


void UpdateFadeCopyChannelsForAll(void)

{
  int slot_index;
  PgmFadeCopySlot *slot;
  
  slot_index = 0;
  slot = fade_copy_slots;
  do {
    if (3 < slot_index) {
      return;
    }
    if (slot->bState == '\x02') {
      if (slot->bPalette_bank == '\x02') {
        if ((0x10 < (byte)slot->bPalette_id) && ((byte)slot->bPalette_id < 0x1b)) {
LAB_0000360c:
          CopyLongBlocks16((undefined4 *)slot->pDest_palette,(undefined4 *)slot->pSource_palette,1);
        }
      }
      else if ((slot->bPalette_bank == '\x01') && (4 < (byte)slot->bPalette_id)) goto LAB_0000360c;
    }
    slot_index = slot_index + 1;
    slot = slot + 1;
  } while( true );
}




/* ============================================================
 * 00003634 StartGlobalFadeFromBlack
 * ============================================================ */


void StartGlobalFadeFromBlack(uint fill_color)

{
  int slot_index;
  PgmFadeCopySlot *slot;
  
  slot_index = 0;
  slot = fade_copy_slots;
  do {
    if (3 < slot_index) {
      return;
    }
    if (slot->bState == '\x02') {
      if (slot->bPalette_bank == '\x02') {
        if ((0x10 < (byte)slot->bPalette_id) && ((byte)slot->bPalette_id < 0x1b)) {
LAB_00003684:
          FillLongBlocks16((undefined4 *)slot->pDest_palette,
                           (fill_color & 0xffff) + fill_color * 0x10000,1);
        }
      }
      else if ((slot->bPalette_bank == '\x01') && (4 < (byte)slot->bPalette_id)) goto LAB_00003684;
    }
    slot_index = slot_index + 1;
    slot = slot + 1;
  } while( true );
}




/* ============================================================
 * 000036aa SetGlobalFadeSlotMode
 * ============================================================ */


void SetGlobalFadeSlotMode(short param_1,int param_2)

{
  if (param_2 == 0) {
    (&fade_copy_slots[0].bState)[(short)(param_1 << 4)] = 2;
  }
  else {
    (&fade_copy_slots[0].bState)[(short)(param_1 << 4)] = 4;
  }
  return;
}




/* ============================================================
 * 000036d8 StartGlobalFadeFromWhite
 * ============================================================ */


void StartGlobalFadeFromWhite(int slot_index,ushort step)

{
  short remaining_colors;
  ushort color;
  ushort *src;
  ushort *dst;
  
  src = fade_copy_slots[slot_index].pSource_palette;
  dst = fade_copy_slots[slot_index].pDest_palette;
  remaining_colors = 0x20;
  while (remaining_colors != 0) {
    color = *src;
    if (step < (color & 0x1f)) {
      color = color - step;
    }
    else {
      color = color & 0xffe0;
    }
    if ((ushort)(step * 0x20) < (color & 0x3e0)) {
      color = color + step * -0x20;
    }
    else {
      color = color & 0xfc1f;
    }
    if ((ushort)(step * 0x400) < (color & 0x7c00)) {
      color = color + step * -0x400;
    }
    else {
      color = color & 0x83ff;
    }
    *dst = color;
    src = src + 1;
    dst = dst + 1;
    remaining_colors = remaining_colors + -1;
  }
  return;
}




/* ============================================================
 * 0000374c StartGlobalFadeToBlack
 * ============================================================ */


void StartGlobalFadeToBlack(int slot_index,short step)

{
  short remaining_colors;
  ushort color;
  ushort *src;
  ushort *dst;
  
  src = fade_copy_slots[slot_index].pSource_palette;
  dst = fade_copy_slots[slot_index].pDest_palette;
  remaining_colors = 0x20;
  while (remaining_colors != 0) {
    color = *src;
    if ((ushort)(step + (color & 0x1f)) < 0x1f) {
      color = step + color;
    }
    else {
      color = color | 0x1f;
    }
    if ((ushort)(step * 0x20 + (color & 0x3e0)) < 0x3e0) {
      color = step * 0x20 + color;
    }
    else {
      color = color | 0x3e0;
    }
    if ((ushort)(step * 0x400 + (color & 0x7c00)) < 0x7c00) {
      color = step * 0x400 + color;
    }
    else {
      color = color | 0x7c00;
    }
    *dst = color;
    src = src + 1;
    dst = dst + 1;
    remaining_colors = remaining_colors + -1;
  }
  return;
}




/* ============================================================
 * 000037cc DrawBookkeepingHelp
 * ============================================================ */


void DrawBookkeepingHelp(void)

{
  DrawStringTiles(0,10,0x18,'\x03',0,"[A] BUTTON : NEXT PAGE");
  DrawStringTiles(0,10,0x1a,'\x03',0,"[B] BUTTON : EXIT");
  return;
}




/* ============================================================
 * 0000380a DrawEmptyGridCells
 * ============================================================ */


void DrawEmptyGridCells(int tile_x,int tile_y,ushort count)

{
  uint tile_offset;
  int cell_index;
  int src_tile_x;
  int src_tile_y;
  uint width_tiles;
  int height_tiles;
  
  for (cell_index = 0; cell_index < (int)(uint)count; cell_index = cell_index + 1) {
    height_tiles = 1;
    width_tiles = 1;
    src_tile_y = 0;
    src_tile_x = 0;
    tile_offset = CalcImageTileOffset(0,0x500);
    BlitImageToTilemap(0,tile_x,tile_y,&menu_arrow_image_descriptor,1,0,'\x06',(short)tile_offset,
                       src_tile_x,src_tile_y,width_tiles,height_tiles);
    tile_x = tile_x + 1;
  }
  return;
}




/* ============================================================
 * 00003870 DrawGridRowBorders
 * ============================================================ */


void DrawGridRowBorders(int tile_x,int tile_y,ushort *col_widths,uint col_count,short row_index,
                       short row_count)

{
  uint tile_offset;
  uint col_index;
  int src_tile_x;
  int src_tile_y;
  uint width_tiles;
  int height_tiles;
  
  col_index = 0;
  do {
    if ((int)((col_count & 0xffff) + 1) <= (int)col_index) {
      return;
    }
    if (row_index == 0) {
      if (col_index == 0) {
        src_tile_y = 0;
        src_tile_x = 0;
      }
      else {
        if ((col_count & 0xffff) != col_index) {
          src_tile_y = 0;
          goto LAB_0000394c;
        }
        src_tile_y = 0;
        src_tile_x = 2;
      }
    }
    else if (row_index == row_count) {
      if (col_index == 0) {
        src_tile_y = 2;
        src_tile_x = 0;
      }
      else if ((col_count & 0xffff) == col_index) {
        src_tile_y = 2;
        src_tile_x = 2;
      }
      else {
        src_tile_y = 2;
LAB_0000394c:
        src_tile_x = 1;
      }
    }
    else if (col_index == 0) {
      src_tile_y = 1;
      src_tile_x = 0;
    }
    else {
      if ((col_count & 0xffff) != col_index) {
        src_tile_y = 1;
        goto LAB_0000394c;
      }
      src_tile_y = 1;
      src_tile_x = 2;
    }
    height_tiles = 1;
    width_tiles = 1;
    tile_offset = CalcImageTileOffset(0,0x500);
    BlitImageToTilemap(0,tile_x,tile_y,&menu_arrow_image_descriptor,0,0,'\x06',(short)tile_offset,
                       src_tile_x,src_tile_y,width_tiles,height_tiles);
    tile_x = tile_x + 1;
    if ((col_count & 0xffff) != col_index) {
      DrawEmptyGridCells(tile_x,tile_y,*col_widths);
      tile_x = (uint)*col_widths + tile_x;
    }
    col_index = col_index + 1;
    col_widths = col_widths + 1;
  } while( true );
}




/* ============================================================
 * 000039b8 DrawAuditGrid
 * ============================================================ */


void DrawAuditGrid(int tile_x,int tile_y,ushort *col_widths,ushort col_count,ushort *row_heights,
                  ushort row_count)

{
  uint tile_offset;
  uint row;
  int fill_row;
  int height_tiles;
  int col;
  int src_x;
  int src_y;
  uint width_tiles;
  int x;
  
  CopyPaletteFromTable(0,6,menu_arrow_palette_words);
  row = 0;
  while( true ) {
    if ((int)(row_count + 1) <= (int)row) break;
    DrawGridRowBorders(tile_x,tile_y,col_widths,CONCAT22((short)(row_count + 1 >> 0x10),col_count),
                       (short)row,row_count);
    tile_y = tile_y + 1;
    if (row_count != row) {
      for (fill_row = 0; fill_row < (int)(uint)*row_heights; fill_row = fill_row + 1) {
        src_x = 1;
        width_tiles = 1;
        col = 0;
        x = 1;
        tile_offset = CalcImageTileOffset(0,0x500);
        BlitImageToTilemap(0,tile_x,tile_y,&menu_arrow_image_descriptor,1,0,'\x06',
                           (short)tile_offset,x,col,width_tiles,src_x);
        x = tile_x;
        for (col = 0; col < (int)(uint)col_count; col = col + 1) {
          x = (uint)col_widths[col] + x + 1;
          height_tiles = 1;
          width_tiles = 1;
          src_y = 0;
          src_x = 1;
          tile_offset = CalcImageTileOffset(0,0x500);
          BlitImageToTilemap(0,x,tile_y,&menu_arrow_image_descriptor,1,0,'\x06',(short)tile_offset,
                             src_x,src_y,width_tiles,height_tiles);
        }
        tile_y = tile_y + 1;
      }
    }
    row = row + 1;
    row_heights = row_heights + 1;
  }
  return;
}




/* ============================================================
 * 00003aea ClearBookkeepingCounters
 * ============================================================ */


void ClearBookkeepingCounters(void)

{
  int record_index;
  PgmShortAuditCounter *record;
  
  record = coin_audit_counter_table;
  for (record_index = 0; record_index < 7; record_index = record_index + 1) {
    record->wYear = 0xff;
    record->dwPlay_count = 0;
    record->dwCoin_in_count = 0;
    record->dwCoin_out_count = 0;
    record = record + 1;
  }
  record = service_audit_counter_table;
  for (record_index = 0; record_index < 0xc; record_index = record_index + 1) {
    record->wYear = 0xff;
    record->dwPlay_count = 0;
    record->dwCoin_in_count = 0;
    record->dwCoin_out_count = 0;
    record = record + 1;
  }
  return;
}




/* ============================================================
 * 00003b38 DrawCoinAuditCounters
 * ============================================================ */


void DrawCoinAuditCounters(void)

{
  int year_mod_100;
  int record_index;
  int total_coin_out;
  int total_coin_in;
  int total_play_count;
  PgmShortAuditCounter *record;
  
  total_play_count = 0;
  total_coin_in = 0;
  total_coin_out = 0;
  record = coin_audit_counter_table;
  for (record_index = 0; record_index < 7; record_index = record_index + 1) {
    if (record->wYear != 0xff) {
      year_mod_100 = DivSigned32Remainder((uint)(ushort)record->wYear,100);
      PrintfTilesBanked(0,4,record_index * 2 + 7,'\0',0,"%s-%02d-%02d",
                        *(undefined4 *)
                         ((int)rtc_month_name_table_1based +
                         (int)(short)((ushort)(byte)record->bMonth << 2)),(uint)(byte)record->bDay,
                        year_mod_100);
      PrintfTilesBanked(0,0xf,record_index * 2 + 7,'\0',1,"%7d",record->dwPlay_count);
      PrintfTilesBanked(0,0x1e,record_index * 2 + 7,'\0',1,"%7d",record->dwCoin_in_count);
      PrintfTilesBanked(0,0x2d,record_index * 2 + 7,'\0',1,"%4d",record->dwCoin_out_count);
      total_play_count = record->dwPlay_count + total_play_count;
      total_coin_in = record->dwCoin_in_count + total_coin_in;
      total_coin_out = record->dwCoin_out_count + total_coin_out;
    }
    record = record + 1;
  }
  PrintfTilesBanked(0,0xf,record_index * 2 + 7,'\0',1,"%7d",total_play_count);
  PrintfTilesBanked(0,0x1e,record_index * 2 + 7,'\0',1,"%7d",total_coin_in);
  PrintfTilesBanked(0,0x2d,record_index * 2 + 7,'\0',1,"%4d",total_coin_out);
  return;
}




/* ============================================================
 * 00003caa DrawServiceAuditCounters
 * ============================================================ */


void DrawServiceAuditCounters(int first_record_index)

{
  int day_of_month;
  int display_row;
  int record_index;
  int total_coin_in;
  int total_play_count;
  int total_coin_out;
  PgmShortAuditCounter *record;
  
  total_play_count = 0;
  total_coin_in = 0;
  total_coin_out = 0;
  if ((first_record_index != 0) && (first_record_index != 6)) {
    AssertFailScreen("m == 0 || m == 6",(char *)assert_file_book_c_1378a,0xe8);
  }
  display_row = 0;
  record = service_audit_counter_table + first_record_index;
  for (record_index = first_record_index; record_index < first_record_index + 6;
      record_index = record_index + 1) {
    if (record->wYear != 0xff) {
      day_of_month = DivSigned32Remainder((uint)(ushort)record->wYear,100);
      PrintfTilesBanked(0,2,display_row * 2 + 7,'\0',1,"%S-%02d",
                        *(undefined4 *)
                         ((int)rtc_month_name_table_1based +
                         (int)(short)((ushort)(byte)record->bMonth << 2)),day_of_month);
      PrintfTilesBanked(0,0xf,display_row * 2 + 7,'\0',1,"%7d",record->dwPlay_count);
      PrintfTilesBanked(0,0x1e,display_row * 2 + 7,'\0',1,"%7d",record->dwCoin_in_count);
      PrintfTilesBanked(0,0x2d,display_row * 2 + 7,'\0',1,"%4d",record->dwCoin_out_count);
    }
    record = record + 1;
    display_row = display_row + 1;
  }
  if (first_record_index != 0) {
    record = service_audit_counter_table;
    for (record_index = 0; record_index < 0xc; record_index = record_index + 1) {
      if (record->wYear != 0xff) {
        total_play_count = record->dwPlay_count + total_play_count;
        total_coin_in = record->dwCoin_in_count + total_coin_in;
        total_coin_out = record->dwCoin_out_count + total_coin_out;
      }
      record = record + 1;
    }
    PrintfTilesBanked(0,0xf,display_row * 2 + 7,'\0',1,"%7d",total_play_count);
    PrintfTilesBanked(0,0x1e,display_row * 2 + 7,'\0',1,"%7d",total_coin_in);
    PrintfTilesBanked(0,0x2d,display_row * 2 + 7,'\0',1,"%4d",total_coin_out);
  }
  return;
}




/* ============================================================
 * 00003e70 DrawBookkeepingPage
 * ============================================================ */


void DrawBookkeepingPage(int param_1)

{
  DrawEmptyGridCells(2,3,0x32);
  DrawAuditGrid(1,4,bookkeeping_coin_grid_col_widths,4,bookkeeping_coin_grid_row_heights,
                (ushort)param_1);
  DrawStringTiles(0,0x11,5,'\0',1,"COIN1");
  DrawStringTiles(0,0x20,5,'\0',1,"COIN2");
  DrawStringTiles(0,0x2e,5,'\0',0,"SERVICE");
  if (param_1 != 7) {
    DrawStringTiles(0,3,param_1 * 2 + 3,'\0',1,"TOTAL");
  }
  return;
}




/* ============================================================
 * 00003f32 DrawBookkeepingHelpAndWait
 * ============================================================ */


/* Bookkeeping help/page loop. Note: find_code_gaps reports interior continuation blocks at 0x3ffc
   and 0x401a, but this function decompiles across them correctly; treat as a Ghidra body-range
   artifact, not missing entrypoints. */

undefined4 DrawBookkeepingHelpAndWait(void)

{
  uint key_pressed;
  undefined4 result;
  
  ClearTextTilemap();
  DrawStringTiles(0,0x13,2,'\x03',1,"DAY INCOME");
  DrawBookkeepingPage(9);
  DrawCoinAuditCounters();
  DrawBookkeepingHelp();
  do {
    key_pressed = ConsumeKeyPress(6);
    if (key_pressed != 0) {
      QueueZ80AudioCommand(0,5,0xff,0);
      ClearTextTilemap();
      DrawStringTiles(0,0x12,2,'\x03',1,"MONTH INCOME");
      DrawBookkeepingPage(7);
      DrawServiceAuditCounters(0);
      DrawBookkeepingHelp();
      goto LAB_00003fe0;
    }
    key_pressed = ConsumeKeyPress(7);
  } while (key_pressed == 0);
  goto LAB_00004090;
  while (key_pressed = ConsumeKeyPress(7), key_pressed == 0) {
LAB_00003fe0:
    key_pressed = ConsumeKeyPress(6);
    if (key_pressed != 0) {
      QueueZ80AudioCommand(0,5,0xff,0);
      ClearTextTilemap();
      DrawStringTiles(0,0x12,2,'\x03',1,"MONTH INCOME");
      DrawBookkeepingPage(8);
      DrawServiceAuditCounters(6);
      DrawBookkeepingHelp();
      do {
        key_pressed = ConsumeKeyPress(6);
        if (key_pressed != 0) {
          QueueZ80AudioCommand(0,5,0xff,0);
          result = DrawBookkeepingHelpAndWait();
          return result;
        }
        key_pressed = ConsumeKeyPress(7);
      } while (key_pressed == 0);
      break;
    }
  }
LAB_00004090:
  QueueZ80AudioCommand(0,5,0xff,0);
  return 0;
}




/* ============================================================
 * 000040aa ClearAuditRecord
 * ============================================================ */


void ClearAuditRecord(PgmGameAuditRecord *record)

{
  int index;
  PgmGameAuditRecord *daily_record_cursor;
  PgmLongAuditCounter *monthly_record;
  
  record->bState = 0xff;
  record->dwTotal_plays = 0;
  record->dwTotal_play_time = 0;
  MemsetBytes(record->pGame_name,0,0x13);
  daily_record_cursor = record;
  for (index = 0; index < 7; index = index + 1) {
    daily_record_cursor->pDaily_records[0].dwPlay_count = 0;
    daily_record_cursor->pDaily_records[0].dwCoin_in_count = 0;
    daily_record_cursor->pDaily_records[0].dwCoin_out_count = 0;
    daily_record_cursor->pDaily_records[0].dwService_count = 0;
    daily_record_cursor->pDaily_records[0].dwTicket_count = 0;
    daily_record_cursor->pDaily_records[0].dwValue_count = 0;
    daily_record_cursor->pDaily_records[0].wYear = 0xff;
    daily_record_cursor = (PgmGameAuditRecord *)daily_record_cursor->pDaily_records;
  }
  monthly_record = record->pMonthly_records;
  for (index = 0; index < 0xc; index = index + 1) {
    monthly_record->dwPlay_count = 0;
    monthly_record->dwCoin_in_count = 0;
    monthly_record->dwCoin_out_count = 0;
    monthly_record->wYear = 0xff;
    monthly_record->dwService_count = 0;
    monthly_record->dwTicket_count = 0;
    monthly_record->dwValue_count = 0;
    monthly_record->wYear = 0xff;
    monthly_record = monthly_record + 1;
  }
  return;
}




/* ============================================================
 * 00004140 ClearAllAuditRecords
 * ============================================================ */


void ClearAllAuditRecords(void)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    ClearAuditRecord(game_audit_record_table + iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 8);
  return;
}




/* ============================================================
 * 0000416c RunBookkeepingMenu
 * ============================================================ */


void RunBookkeepingMenu(PgmGameAuditRecord *record)

{
  int year_mod_100;
  int record_index;
  int total_coin_out;
  int total_coin_in;
  int total_play_count;
  PgmLongAuditCounter *daily_records;
  
  total_play_count = 0;
  total_coin_in = 0;
  total_coin_out = 0;
  DrawStringTiles(0,2,2,'\x03',1,record->pGame_name);
  for (record_index = 0; daily_records = record->pDaily_records, record_index < 7;
      record_index = record_index + 1) {
    if (record->pDaily_records[0].wYear != 0xff) {
      year_mod_100 = DivSigned32Remainder((uint)(ushort)record->pDaily_records[0].wYear,100);
      PrintfTilesBanked(0,4,record_index * 2 + 7,'\0',0,"%s-%02d-%02d",
                        *(undefined4 *)
                         ((int)rtc_month_name_table_1based +
                         (int)(short)((ushort)(byte)record->pDaily_records[0].bMonth << 2)),
                        (uint)(byte)record->pDaily_records[0].bDay,year_mod_100);
      PrintfTilesBanked(0,0xf,record_index * 2 + 7,'\0',1,"%7d",daily_records->dwPlay_count);
      PrintfTilesBanked(0,0x1e,record_index * 2 + 7,'\0',1,"%7d",
                        record->pDaily_records[0].dwCoin_in_count);
      PrintfTilesBanked(0,0x2d,record_index * 2 + 7,'\0',1,"%4d",
                        record->pDaily_records[0].dwCoin_out_count);
      total_play_count = daily_records->dwPlay_count + total_play_count;
      total_coin_in = record->pDaily_records[0].dwCoin_in_count + total_coin_in;
      total_coin_out = record->pDaily_records[0].dwCoin_out_count + total_coin_out;
    }
    record = (PgmGameAuditRecord *)daily_records;
  }
  PrintfTilesBanked(0,0xf,record_index * 2 + 7,'\0',1,"%7d",total_play_count);
  PrintfTilesBanked(0,0x1e,record_index * 2 + 7,'\0',1,"%7d",total_coin_in);
  PrintfTilesBanked(0,0x2d,record_index * 2 + 7,'\0',1,"%4d",total_coin_out);
  return;
}




/* ============================================================
 * 00004300 RunBookkeepingPageLoop
 * ============================================================ */


void RunBookkeepingPageLoop(PgmGameAuditRecord *record,int first_month_index)

{
  int day_of_month;
  int display_row;
  int record_index;
  int total_coin_in;
  int total_play_count;
  int total_coin_out;
  PgmLongAuditCounter *month_record;
  
  total_play_count = 0;
  total_coin_in = 0;
  total_coin_out = 0;
  if ((first_month_index != 0) && (first_month_index != 6)) {
    AssertFailScreen("m == 0 || m == 6",(char *)assert_file_book_c_1382c,0x19f);
  }
  DrawStringTiles(0,2,2,'\x03',1,record->pGame_name);
  display_row = 0;
  month_record = record->pMonthly_records + first_month_index;
  for (record_index = first_month_index; record_index < first_month_index + 6;
      record_index = record_index + 1) {
    if (month_record->wYear != 0xff) {
      day_of_month = DivSigned32Remainder((uint)(ushort)month_record->wYear,100);
      PrintfTilesBanked(0,2,display_row * 2 + 7,'\0',1,"%s-%02d",
                        *(undefined4 *)
                         ((int)rtc_month_name_table_1based +
                         (int)(short)((ushort)(byte)month_record->bMonth << 2)),day_of_month);
      PrintfTilesBanked(0,0xf,display_row * 2 + 7,'\0',1,"%7d",month_record->dwPlay_count);
      PrintfTilesBanked(0,0x1e,display_row * 2 + 7,'\0',1,"%7d",month_record->dwCoin_in_count);
      PrintfTilesBanked(0,0x2d,display_row * 2 + 7,'\0',1,"%4d",month_record->dwCoin_out_count);
    }
    month_record = month_record + 1;
    display_row = display_row + 1;
  }
  if (first_month_index != 0) {
    month_record = record->pMonthly_records;
    for (record_index = 0; record_index < 0xc; record_index = record_index + 1) {
      if (month_record->wYear != 0xff) {
        total_play_count = month_record->dwPlay_count + total_play_count;
        total_coin_in = month_record->dwCoin_in_count + total_coin_in;
        total_coin_out = month_record->dwCoin_out_count + total_coin_out;
      }
      month_record = month_record + 1;
    }
    PrintfTilesBanked(0,0xf,display_row * 2 + 7,'\0',1,"%7d",total_play_count);
    PrintfTilesBanked(0,0x1e,display_row * 2 + 7,'\0',1,"%7d",total_coin_in);
    PrintfTilesBanked(0,0x2d,display_row * 2 + 7,'\0',1,"%4d",total_coin_out);
  }
  return;
}




/* ============================================================
 * 000044f0 ClearBookkeepingPage
 * ============================================================ */


void ClearBookkeepingPage(PgmLongAuditCounter *records)

{
  int year_mod_100;
  uint average_seconds;
  int display_row;
  uint average_minutes;
  int total_ticket_count;
  int total_service_count;
  uint local_8;
  
  total_service_count = 0;
  total_ticket_count = 0;
  local_8 = 0;
  DrawStringTiles(0,2,2,'\x03',1,(char *)((int)&records->dwPlay_count + 1));
  for (display_row = 0; display_row < 7; display_row = display_row + 1) {
    if (records[1].wYear != 0xff) {
      total_service_count = records[1].dwService_count + total_service_count;
      total_ticket_count = records[1].dwTicket_count + total_ticket_count;
      local_8 = records[1].dwValue_count + local_8;
      average_seconds = records[1].dwTicket_count + records[1].dwService_count;
      if (average_seconds == 0) {
        average_minutes = 0;
        average_seconds = 0;
      }
      else {
        average_seconds = DivUnsigned32(records[1].dwValue_count,average_seconds);
        average_minutes = DivUnsigned32(average_seconds,0x3c);
        average_seconds = CalculateUnsignedModulo32(average_seconds,0x3c);
      }
      year_mod_100 = DivSigned32Remainder((uint)(ushort)records[1].wYear,100);
      PrintfTilesBanked(0,4,display_row * 2 + 7,'\0',0,"%s-%02d-%02d",
                        *(undefined4 *)
                         ((int)rtc_month_name_table_1based +
                         (int)(short)((ushort)(byte)records[1].bMonth << 2)),
                        (uint)(byte)records[1].bDay,year_mod_100);
      PrintfTilesBanked(0,0xf,display_row * 2 + 7,'\0',1,"%7d",records[1].dwService_count);
      PrintfTilesBanked(0,0x1e,display_row * 2 + 7,'\0',1,"%7d",records[1].dwTicket_count);
      PrintfTilesBanked(0,0x2e,display_row * 2 + 7,'\0',0,"%4d:%02d",average_minutes,average_seconds
                       );
    }
    records = records + 1;
  }
  if (total_ticket_count + total_service_count == 0) {
    average_minutes = 0;
    average_seconds = 0;
  }
  else {
    average_seconds = DivUnsigned32(local_8,total_ticket_count + total_service_count);
    average_minutes = DivUnsigned32(average_seconds,0x3c);
    average_seconds = CalculateUnsignedModulo32(average_seconds,0x3c);
  }
  PrintfTilesBanked(0,0xf,display_row * 2 + 7,'\0',1,"%7d",total_service_count);
  PrintfTilesBanked(0,0x1e,display_row * 2 + 7,'\0',1,"%7d",total_ticket_count);
  PrintfTilesBanked(0,0x2e,display_row * 2 + 7,'\0',0,"%4d:%02d",average_minutes,average_seconds);
  return;
}




/* ============================================================
 * 000046f8 DrawBookkeepingRecordTable
 * ============================================================ */


void DrawBookkeepingRecordTable(PgmGameAuditRecord *record,int first_month_index)

{
  int day_of_month;
  uint average_time_seconds;
  int display_row;
  int record_index;
  uint average_time_minutes;
  PgmLongAuditCounter *month_record;
  uint local_14;
  int total_ticket_count;
  int total_service_count;
  
  total_service_count = 0;
  total_ticket_count = 0;
  local_14 = 0;
  if ((first_month_index != 0) && (first_month_index != 6)) {
    AssertFailScreen("m == 0 || m == 6",(char *)assert_file_book_c_13898,0x1f2);
  }
  DrawStringTiles(0,2,2,'\x03',1,record->pGame_name);
  display_row = 0;
  month_record = record->pMonthly_records + first_month_index;
  for (record_index = first_month_index; record_index < first_month_index + 6;
      record_index = record_index + 1) {
    if (month_record->wYear != 0xff) {
      average_time_seconds = month_record->dwTicket_count + month_record->dwService_count;
      if (average_time_seconds == 0) {
        average_time_minutes = 0;
        average_time_seconds = 0;
      }
      else {
        average_time_seconds = DivUnsigned32(month_record->dwValue_count,average_time_seconds);
        average_time_minutes = DivUnsigned32(average_time_seconds,0x3c);
        average_time_seconds = CalculateUnsignedModulo32(average_time_seconds,0x3c);
      }
      DivUnsigned32(month_record->dwValue_count,0x3c);
      day_of_month = DivSigned32Remainder((uint)(ushort)month_record->wYear,100);
      PrintfTilesBanked(0,2,display_row * 2 + 7,'\0',1,"%s-%02d",
                        *(undefined4 *)
                         ((int)rtc_month_name_table_1based +
                         (int)(short)((ushort)(byte)month_record->bMonth << 2)),day_of_month);
      PrintfTilesBanked(0,0xf,display_row * 2 + 7,'\0',1,"%7d",month_record->dwService_count);
      PrintfTilesBanked(0,0x1e,display_row * 2 + 7,'\0',1,"%7d",month_record->dwTicket_count);
      PrintfTilesBanked(0,0x2e,display_row * 2 + 7,'\0',0,"%4d:%02d",average_time_minutes,
                        average_time_seconds);
    }
    month_record = month_record + 1;
    display_row = display_row + 1;
  }
  if (first_month_index != 0) {
    month_record = record->pMonthly_records;
    for (record_index = 0; record_index < 0xc; record_index = record_index + 1) {
      if (month_record->wYear != 0xff) {
        total_service_count = month_record->dwService_count + total_service_count;
        total_ticket_count = month_record->dwTicket_count + total_ticket_count;
        local_14 = month_record->dwValue_count + local_14;
      }
      month_record = month_record + 1;
    }
    if (total_ticket_count + total_service_count == 0) {
      average_time_minutes = 0;
      average_time_seconds = 0;
    }
    else {
      average_time_seconds = DivUnsigned32(local_14,total_ticket_count + total_service_count);
      average_time_minutes = DivUnsigned32(average_time_seconds,0x3c);
      average_time_seconds = CalculateUnsignedModulo32(average_time_seconds,0x3c);
    }
    PrintfTilesBanked(0,0xf,display_row * 2 + 7,'\0',1,"%7d",total_service_count);
    PrintfTilesBanked(0,0x1e,display_row * 2 + 7,'\0',1,"%7d",total_ticket_count);
    PrintfTilesBanked(0,0x2e,display_row * 2 + 7,'\0',0,"%4d:%02d",average_time_minutes,
                      average_time_seconds);
  }
  return;
}




/* ============================================================
 * 0000498c BookkeepingValueHelper
 * ============================================================ */


/* Draws common bookkeeping value screen labels. Note: find_code_gaps reports continuation at 0x49fe
   after a DrawStringTiles call, but decompilation includes this tail through the RTS at 0x4a4c; not
   a separate entrypoint. */

void BookkeepingValueHelper(int param_1)

{
  DrawAuditGrid(1,4,bookkeeping_value_grid_col_widths,4,bookkeeping_value_grid_row_heights,
                (ushort)param_1);
  DrawEmptyGridCells(2,3,0x32);
  DrawStringTiles(0,0x11,5,'\0',1,"PLAY");
  DrawStringTiles(0,0x20,5,'\0',1,"CONTI.");
  DrawStringTiles(0,0x2e,5,'\0',0,"AV.TIME");
  if (param_1 != 7) {
    DrawStringTiles(0,3,param_1 * 2 + 3,'\0',1,"TOTAL");
  }
  return;
}




/* ============================================================
 * 00004a4e DrawBookkeepingSummary
 * ============================================================ */


undefined4 DrawBookkeepingSummary(int game_index)

{
  uint key_pressed;
  
  do {
    ClearTextTilemap();
    DrawStringTiles(0,0x2a,2,'\0',1,"(DAY)");
    DrawBookkeepingPage(9);
    RunBookkeepingMenu(game_audit_record_table + game_index);
    DrawBookkeepingHelp();
    while (key_pressed = ConsumeKeyPress(6), key_pressed == 0) {
      key_pressed = ConsumeKeyPress(7);
      if (key_pressed != 0) goto LAB_00004d8e;
    }
    QueueZ80AudioCommand(0,5,0xff,0);
    ClearTextTilemap();
    DrawStringTiles(0,0x26,2,'\0',1,"(MONTH)");
    DrawBookkeepingPage(7);
    RunBookkeepingPageLoop(game_audit_record_table + game_index,0);
    DrawBookkeepingHelp();
    while (key_pressed = ConsumeKeyPress(6), key_pressed == 0) {
      key_pressed = ConsumeKeyPress(7);
      if (key_pressed != 0) goto LAB_00004d8e;
    }
    QueueZ80AudioCommand(0,5,0xff,0);
    ClearTextTilemap();
    DrawStringTiles(0,0x26,2,'\0',1,"(MONTH)");
    DrawBookkeepingPage(8);
    RunBookkeepingPageLoop(game_audit_record_table + game_index,6);
    DrawBookkeepingHelp();
    while (key_pressed = ConsumeKeyPress(6), key_pressed == 0) {
      key_pressed = ConsumeKeyPress(7);
      if (key_pressed != 0) goto LAB_00004d8e;
    }
    QueueZ80AudioCommand(0,5,0xff,0);
    ClearTextTilemap();
    DrawStringTiles(0,0x2a,2,'\0',1,"(DAY)");
    BookkeepingValueHelper(9);
    ClearBookkeepingPage((PgmLongAuditCounter *)(game_audit_record_table + game_index));
    DrawBookkeepingHelp();
    while (key_pressed = ConsumeKeyPress(6), key_pressed == 0) {
      key_pressed = ConsumeKeyPress(7);
      if (key_pressed != 0) goto LAB_00004d8e;
    }
    QueueZ80AudioCommand(0,5,0xff,0);
    ClearTextTilemap();
    DrawStringTiles(0,0x26,2,'\0',1,"(MONTH)");
    BookkeepingValueHelper(7);
    DrawBookkeepingRecordTable(game_audit_record_table + game_index,0);
    DrawBookkeepingHelp();
    while (key_pressed = ConsumeKeyPress(6), key_pressed == 0) {
      key_pressed = ConsumeKeyPress(7);
      if (key_pressed != 0) goto LAB_00004d8e;
    }
    QueueZ80AudioCommand(0,5,0xff,0);
    ClearTextTilemap();
    DrawStringTiles(0,0x26,2,'\0',1,"(MONTH)");
    BookkeepingValueHelper(8);
    DrawBookkeepingRecordTable(game_audit_record_table + game_index,6);
    DrawBookkeepingHelp();
    while (key_pressed = ConsumeKeyPress(6), key_pressed == 0) {
      key_pressed = ConsumeKeyPress(7);
      if (key_pressed != 0) {
LAB_00004d8e:
        QueueZ80AudioCommand(0,5,0xff,0);
        return 0;
      }
    }
    QueueZ80AudioCommand(0,5,0xff,0);
  } while( true );
}




/* ============================================================
 * 00004daa RunBookkeepingScreen
 * ============================================================ */


undefined4 RunBookkeepingScreen(void)

{
  uint play_time_minutes;
  uint play_time_seconds;
  int record_index;
  PgmGameAuditRecord *record;
  
  ClearTextTilemap();
  DrawStringTiles(0,8,2,'\x03',1,"TOTAL INCOME OF GAMES");
  DrawEmptyGridCells(8,3,0x2a);
  DrawAuditGrid(0,4,game_income_grid_col_widths,3,game_income_grid_row_heights,9);
  DrawStringTiles(0,0x1a,5,'\0',1,"COIN");
  DrawStringTiles(0,0x2b,5,'\0',1,"TIME");
  record = game_audit_record_table;
  for (record_index = 0; record_index < 8; record_index = record_index + 1) {
    if (record->bState != -1) {
      play_time_seconds = DivUnsigned32(record->dwTotal_play_time,0x3c);
      play_time_minutes = DivUnsigned32(play_time_seconds,0x3c);
      play_time_seconds = CalculateUnsignedModulo32(play_time_seconds,0x3c);
      DrawStringTiles(0,1,record_index * 2 + 7,'\0',0,record->pGame_name);
      PrintfTilesBanked(0,0x16,record_index * 2 + 7,'\0',1,"%8d",record->dwTotal_plays);
      PrintfTilesBanked(0,0x27,record_index * 2 + 7,'\0',1,"%5d:%02d",play_time_minutes,
                        play_time_seconds);
    }
    record = record + 1;
  }
  DrawStringTiles(0,10,0x1a,'\x03',0,"[B] BUTTON : EXIT");
  WaitForKeyOrCallback(7);
  return 0;
}




/* ============================================================
 * 00004f30 InitAuditAndGameName
 * ============================================================ */


undefined4 InitAuditAndGameName(void)

{
  int iVar1;
  
  ClearBookkeepingCounters();
  ClearAllAuditRecords();
  CallCartInitRoutine(0,0);
  iVar1 = IsCartHeaderValid();
  if (iVar1 != 0) {
    SelectGameAuditRecord(&cart_game_name);
  }
  return 0;
}




/* ============================================================
 * 00004f60 RunRtcSettingsMenu
 * ============================================================ */


undefined4 RunRtcSettingsMenu(void)

{
  uint key_pressed;
  int index;
  int selection;
  PgmGameAuditRecord *name_copy_src;
  char *pcVar1;
  char current_game_name [20];
  char ch;
  
  selection = 0;
LAB_00004f6e:
  do {
    do {
      ClearTextTilemap();
      DrawStringTiles(0,7,0,'\x03',1,"CLEAR INCOME RECORD");
      DrawEmptyGridCells(3,0x13,0x2f);
      DrawEmptyGridCells(3,0x13,0x2f);
      for (index = 0; index < 9; index = index + 1) {
        DrawStringTiles(0,3,index * 2 + 2,'\0',1,
                        *(char **)((int)exception_string_pointer_table +
                                  (short)((short)index << 2) + 0x14c));
        if ((index < 8) &&
           (game_audit_record_table[0].pGame_name[(short)((short)index * 0x230) + -1] != -1)) {
          DrawStringTiles(0,0xf,index * 2 + 2,'\0',1,game_audit_record_table[index].pGame_name);
        }
      }
      selection = RunMenuSelectionLoop(3,2,exception_string_pointer_table + 0x53,9,selection,0);
      if (7 < selection) {
        return 0;
      }
    } while (game_audit_record_table[0].pGame_name[(short)((short)selection * 0x230) + -1] == -1);
    QueueZ80AudioCommand(4,6,200,0);
    DrawStringTiles(0,1,0x15,'\x03',1,"CLEAR:");
    DrawStringTiles(0,0xd,0x15,'\0',1,game_audit_record_table[selection].pGame_name);
    DrawEmptyGridCells(0xd,0x16,0x26);
    DrawStringTiles(0,1,0x17,'\x03',1,"ARE YOU SURE ?(Y/N)");
    DrawStringTiles(0,3,0x19,'\x03',1,"YES:PRESS [A] BUTTON");
    DrawStringTiles(0,3,0x1b,'\x03',1,"NO :PRESS OTHER BUTTONS");
    while (key_pressed = ConsumeKeyPress(6), key_pressed == 0) {
      key_pressed = ConsumeKeyPress(7);
      if ((((key_pressed != 0) || (key_pressed = ConsumeKeyPress(8), key_pressed != 0)) ||
          (key_pressed = ConsumeKeyPress(0x29), key_pressed != 0)) ||
         (((key_pressed = ConsumeKeyPress(2), key_pressed != 0 ||
           (key_pressed = ConsumeKeyPress(3), key_pressed != 0)) ||
          ((key_pressed = ConsumeKeyPress(4), key_pressed != 0 ||
           (key_pressed = ConsumeKeyPress(5), key_pressed != 0)))))) goto LAB_00004f6e;
    }
    pcVar1 = current_game_name;
    name_copy_src = current_game_audit_record;
    do {
      name_copy_src = (PgmGameAuditRecord *)name_copy_src->pGame_name;
      ch = *(char *)name_copy_src;
      *pcVar1 = ch;
      pcVar1 = pcVar1 + 1;
    } while (ch != '\0');
    ShiftFixedRecordsUp((byte *)(game_audit_record_table + selection),0x230,8 - selection);
    ClearAuditRecord(game_audit_record_table + 7);
    SelectGameAuditRecord(current_game_name);
    index = 0;
    do {
      QueueZ80AudioCommand(4,5,200,0);
      DrawStringTiles(0,0x13,0x12,'\x03',1,"CLEAR OK!");
      WaitTimerOrCallback(0x16,(void *)0x0);
      DrawStringTiles(0,0x13,0x12,'\x03',1,"         ");
      WaitTimerOrCallback(6,(void *)0x0);
      index = index + 1;
    } while (index < 4);
  } while( true );
}




/* ============================================================
 * 000052d6 RunBookkeepingClearMenu
 * ============================================================ */


undefined4 RunBookkeepingClearMenu(void)

{
  int index_or_result;
  int selection;
  
  selection = 0;
  while( true ) {
    while( true ) {
      ClearTextTilemap();
      DrawStringTiles(0,0x10,1,'\x03',1,"BOOK KEEPING");
      DrawEmptyGridCells(8,2,0x28);
      for (index_or_result = 0; index_or_result < 0xc; index_or_result = index_or_result + 1) {
        DrawStringTiles(0,3,index_or_result * 2 + 4,'\0',1,
                        *(char **)((int)exception_string_pointer_table +
                                  (short)((short)index_or_result << 2) + 0x170));
        if (((0 < index_or_result) && (index_or_result < 9)) &&
           (*(char *)((int)palette_fade_slots[1].pWorking_palette +
                     (short)((short)index_or_result * 0x230) + 0x2c) != -1)) {
          DrawStringTiles(0,0xf,index_or_result * 2 + 4,'\0',1,
                          (char *)((int)palette_fade_slots + index_or_result * 0x230 + 0x91));
        }
      }
      selection = RunMenuSelectionLoop(3,4,exception_string_pointer_table + 0x5c,0xc,selection,0);
      if ((selection < 1) || (8 < selection)) break;
      if (*(char *)((int)palette_fade_slots[1].pWorking_palette +
                   (short)((short)selection * 0x230) + 0x2c) != -1) {
        DrawBookkeepingSummary(selection + -1);
      }
    }
    if (selection == -1) break;
    index_or_result =
         (**(code **)((int)bookkeeping_screen_function_table + (int)(short)((short)selection << 2)))
                   ();
    if (index_or_result == 1) {
      return 0;
    }
  }
  return 0;
}




/* ============================================================
 * 00005424 ShiftFixedRecordsUp
 * ============================================================ */


void ShiftFixedRecordsUp(byte *base,int record_size,int count)

{
  uint bytes_remaining;
  int iVar1;
  uint record_index;
  byte *pbVar2;
  byte *pbVar3;
  undefined1 *stack_scratch;
  
  stack_scratch = &stack0xfffffff0;
  if (record_size == 0) {
    stack_scratch = &stack0xffffffe4;
    AssertFailScreen("size!=0",(char *)assert_file_book_c_13aa0,0x382);
  }
  for (record_index = 1; (int)record_index < count; record_index = record_index + 1) {
    *(int *)(stack_scratch + -4) = record_size;
    *(undefined4 *)(stack_scratch + -8) = 0x5460;
    bytes_remaining = MulUnsigned32(record_index,record_size);
    *(byte **)(stack_scratch + -8) = base + bytes_remaining;
    *(undefined4 *)(stack_scratch + -0xc) = 0x5470;
    bytes_remaining = MulUnsigned32(record_index - 1,record_size);
    iVar1 = *(int *)(stack_scratch + -4);
    pbVar2 = *(byte **)(stack_scratch + -8);
    pbVar3 = base + bytes_remaining;
    while (0 < iVar1) {
      *pbVar3 = *pbVar2;
      iVar1 = iVar1 + -1;
      pbVar2 = pbVar2 + 1;
      pbVar3 = pbVar3 + 1;
    }
  }
  return;
}




/* ============================================================
 * 00005492 ShiftFixedRecordsDown
 * ============================================================ */


void ShiftFixedRecordsDown(byte *base,int record_size,int count)

{
  uint offset;
  int bytes_remaining;
  uint multiplicand;
  byte *pbVar1;
  byte *pbVar2;
  
  if (record_size == 0) {
    AssertFailScreen("size!=0",(char *)assert_file_book_c_13ab0,0x38e);
  }
  if (count < 2) {
    AssertFailScreen("totalgroup>1",(char *)assert_file_book_c_13ac6,0x38f);
  }
  for (multiplicand = count - 2; -1 < (int)multiplicand; multiplicand = multiplicand - 1) {
    bytes_remaining = record_size;
    offset = MulUnsigned32(multiplicand,record_size);
    pbVar1 = base + offset;
    offset = MulUnsigned32(multiplicand + 1,record_size);
    pbVar2 = base + offset;
    while (0 < bytes_remaining) {
      *pbVar2 = *pbVar1;
      bytes_remaining = bytes_remaining + -1;
      pbVar1 = pbVar1 + 1;
      pbVar2 = pbVar2 + 1;
    }
  }
  return;
}




/* ============================================================
 * 00005520 FindOrInsertShortAuditCounter
 * ============================================================ */


PgmShortAuditCounter *
FindOrInsertShortAuditCounter(PgmShortAuditCounter *table,int count,int match_day)

{
  int record_index;
  PgmShortAuditCounter *record;
  ushort record_year;
  
  record_index = 0;
  record = table;
  do {
    if ((count <= record_index) || (record->wYear == 0xff)) {
      ShiftFixedRecordsDown((byte *)table,0x10,count);
      table->wYear = audit_current_year;
      table->bMonth = (undefined1)audit_current_month;
      table->bDay = (undefined1)audit_current_day;
      table->dwPlay_count = 0;
      table->dwCoin_in_count = 0;
      table->dwCoin_out_count = 0;
      return table;
    }
    if (match_day == 0) {
      if ((byte)record->bMonth == audit_current_month) {
        record_year = record->wYear;
        goto joined_r0x00005594;
      }
    }
    else if (((byte)record->bDay == audit_current_day) &&
            ((byte)record->bMonth == audit_current_month)) {
      record_year = record->wYear;
joined_r0x00005594:
      if (record_year == audit_current_year) {
        return record;
      }
    }
    record_index = record_index + 1;
    record = record + 1;
  } while( true );
}




/* ============================================================
 * 000055de FindOrInsertLongAuditCounter
 * ============================================================ */


PgmLongAuditCounter *
FindOrInsertLongAuditCounter(PgmLongAuditCounter *table,int count,int match_day)

{
  int record_index;
  PgmLongAuditCounter *record;
  ushort record_year;
  
  record_index = 0;
  record = table;
  do {
    if ((count <= record_index) || (record->wYear == 0xff)) {
      ShiftFixedRecordsDown((byte *)table,0x1c,count);
      table->wYear = audit_current_year;
      table->bMonth = (undefined1)audit_current_month;
      table->bDay = (undefined1)audit_current_day;
      table->dwService_count = 0;
      table->dwTicket_count = 0;
      table->dwValue_count = 0;
      table->dwPlay_count = 0;
      table->dwCoin_in_count = 0;
      table->dwCoin_out_count = 0;
      return table;
    }
    if (match_day == 0) {
      if ((byte)record->bMonth == audit_current_month) {
        record_year = record->wYear;
        goto joined_r0x00005652;
      }
    }
    else if (((byte)record->bDay == audit_current_day) &&
            ((byte)record->bMonth == audit_current_month)) {
      record_year = record->wYear;
joined_r0x00005652:
      if (record_year == audit_current_year) {
        return record;
      }
    }
    record_index = record_index + 1;
    record = record + 1;
  } while( true );
}




/* ============================================================
 * 000056a8 IncrementAuditPlayCounters
 * ============================================================ */


void IncrementAuditPlayCounters(void)

{
  PgmShortAuditCounter *short_record;
  PgmLongAuditCounter *long_record;
  
  short_record = FindOrInsertShortAuditCounter(coin_audit_counter_table,7,1);
  short_record->dwPlay_count = short_record->dwPlay_count + 1;
  short_record = FindOrInsertShortAuditCounter(service_audit_counter_table,0xc,0);
  short_record->dwPlay_count = short_record->dwPlay_count + 1;
  long_record = FindOrInsertLongAuditCounter(current_game_audit_record->pDaily_records,7,1);
  long_record->dwPlay_count = long_record->dwPlay_count + 1;
  long_record = FindOrInsertLongAuditCounter(current_game_audit_record->pMonthly_records,0xc,0);
  long_record->dwPlay_count = long_record->dwPlay_count + 1;
  current_game_audit_record->dwTotal_plays = current_game_audit_record->dwTotal_plays + 1;
  return;
}




/* ============================================================
 * 00005722 IncrementCoinInCounters
 * ============================================================ */


void IncrementCoinInCounters(void)

{
  PgmShortAuditCounter *short_record;
  PgmLongAuditCounter *long_record;
  
  short_record = FindOrInsertShortAuditCounter(coin_audit_counter_table,7,1);
  short_record->dwCoin_in_count = short_record->dwCoin_in_count + 1;
  short_record = FindOrInsertShortAuditCounter(service_audit_counter_table,0xc,0);
  short_record->dwCoin_in_count = short_record->dwCoin_in_count + 1;
  long_record = FindOrInsertLongAuditCounter(current_game_audit_record->pDaily_records,7,1);
  long_record->dwCoin_in_count = long_record->dwCoin_in_count + 1;
  long_record = FindOrInsertLongAuditCounter(current_game_audit_record->pMonthly_records,0xc,0);
  long_record->dwCoin_in_count = long_record->dwCoin_in_count + 1;
  current_game_audit_record->dwTotal_plays = current_game_audit_record->dwTotal_plays + 1;
  return;
}




/* ============================================================
 * 000057a4 IncrementCoinOutCounters
 * ============================================================ */


void IncrementCoinOutCounters(void)

{
  PgmShortAuditCounter *short_record;
  PgmLongAuditCounter *long_record;
  
  short_record = FindOrInsertShortAuditCounter(coin_audit_counter_table,7,1);
  short_record->dwCoin_out_count = short_record->dwCoin_out_count + 1;
  short_record = FindOrInsertShortAuditCounter(service_audit_counter_table,0xc,0);
  short_record->dwCoin_out_count = short_record->dwCoin_out_count + 1;
  long_record = FindOrInsertLongAuditCounter(current_game_audit_record->pDaily_records,7,1);
  long_record->dwCoin_out_count = long_record->dwCoin_out_count + 1;
  long_record = FindOrInsertLongAuditCounter(current_game_audit_record->pMonthly_records,0xc,0);
  long_record->dwCoin_out_count = long_record->dwCoin_out_count + 1;
  return;
}




/* ============================================================
 * 0000581c IncrementServiceCounters
 * ============================================================ */


void IncrementServiceCounters(void)

{
  PgmLongAuditCounter *pPVar1;
  
  pPVar1 = FindOrInsertLongAuditCounter(current_game_audit_record->pDaily_records,7,1);
  pPVar1->dwService_count = pPVar1->dwService_count + 1;
  pPVar1 = FindOrInsertLongAuditCounter(current_game_audit_record->pMonthly_records,0xc,0);
  pPVar1->dwService_count = pPVar1->dwService_count + 1;
  return;
}




/* ============================================================
 * 00005862 IncrementTicketCounters
 * ============================================================ */


void IncrementTicketCounters(void)

{
  PgmLongAuditCounter *pPVar1;
  
  pPVar1 = FindOrInsertLongAuditCounter(current_game_audit_record->pDaily_records,7,1);
  pPVar1->dwTicket_count = pPVar1->dwTicket_count + 1;
  pPVar1 = FindOrInsertLongAuditCounter(current_game_audit_record->pMonthly_records,0xc,0);
  pPVar1->dwTicket_count = pPVar1->dwTicket_count + 1;
  return;
}




/* ============================================================
 * 000058a8 AddAuditValueA
 * ============================================================ */


void AddAuditValueA(int param_1)

{
  PgmLongAuditCounter *pPVar1;
  
  pPVar1 = FindOrInsertLongAuditCounter(current_game_audit_record->pDaily_records,7,1);
  pPVar1->dwValue_count = param_1 + pPVar1->dwValue_count;
  pPVar1 = FindOrInsertLongAuditCounter(current_game_audit_record->pMonthly_records,0xc,0);
  pPVar1->dwValue_count = param_1 + pPVar1->dwValue_count;
  return;
}




/* ============================================================
 * 000058f6 AddAuditValueBAndRollDate
 * ============================================================ */


void AddAuditValueBAndRollDate(int param_1)

{
  byte abStack_c [3];
  byte local_9;
  byte local_8;
  byte local_7;
  
  current_game_audit_record->dwTotal_play_time =
       param_1 + current_game_audit_record->dwTotal_play_time;
  ReadRtcDateTime(abStack_c);
  if (local_9 != audit_current_day) {
    if (local_7 < 0x61) {
      audit_current_year = local_7 + 2000;
    }
    else {
      audit_current_year = local_7 + 0x76c;
    }
    audit_current_month = (ushort)local_8;
    audit_current_day = (ushort)local_9;
    FindOrInsertShortAuditCounter(coin_audit_counter_table,7,1);
    FindOrInsertShortAuditCounter(service_audit_counter_table,0xc,0);
    FindOrInsertLongAuditCounter(current_game_audit_record->pDaily_records,7,1);
    FindOrInsertLongAuditCounter(current_game_audit_record->pMonthly_records,0xc,0);
  }
  return;
}




/* ============================================================
 * 000059ba FindOrCreateGameAuditRecord
 * ============================================================ */


PgmGameAuditRecord * FindOrCreateGameAuditRecord(char *game_name)

{
  int compare_result;
  int record_index;
  char *pcVar1;
  PgmGameAuditRecord *record;
  char ch;
  
  record_index = 0;
  for (record = game_audit_record_table; (record_index < 8 && (record->bState == -2));
      record = record + 1) {
    compare_result = CompareCString(game_name,record->pGame_name);
    if (compare_result == 0) {
      return record;
    }
    record_index = record_index + 1;
  }
  ShiftFixedRecordsDown((byte *)game_audit_record_table,0x230,8);
  ClearAuditRecord(game_audit_record_table);
  pcVar1 = game_audit_record_table[0].pGame_name;
  do {
    ch = *game_name;
    *pcVar1 = ch;
    game_name = game_name + 1;
    pcVar1 = pcVar1 + 1;
  } while (ch != '\0');
  game_audit_record_table[0].bState = 0xfe;
  return game_audit_record_table;
}




/* ============================================================
 * 00005a34 SelectGameAuditRecord
 * ============================================================ */


void SelectGameAuditRecord(char *game_name)

{
  byte abStack_c [3];
  byte local_9;
  byte local_8;
  byte local_7;
  
  ReadRtcDateTime(abStack_c);
  if (local_7 < 0x61) {
    audit_current_year = local_7 + 2000;
  }
  else {
    audit_current_year = local_7 + 0x76c;
  }
  audit_current_month = (ushort)local_8;
  audit_current_day = (ushort)local_9;
  current_game_audit_record = FindOrCreateGameAuditRecord(game_name);
  FindOrInsertShortAuditCounter(coin_audit_counter_table,7,1);
  FindOrInsertShortAuditCounter(service_audit_counter_table,0xc,0);
  FindOrInsertLongAuditCounter(current_game_audit_record->pDaily_records,7,1);
  FindOrInsertLongAuditCounter(current_game_audit_record->pMonthly_records,0xc,0);
  return;
}




/* ============================================================
 * 00005ae6 AuditAddCoinInThunk
 * ============================================================ */


undefined4 AuditAddCoinInThunk(void)

{
  IncrementAuditPlayCounters();
  return 0;
}




/* ============================================================
 * 00005aee AuditAddCoinOutThunk
 * ============================================================ */


undefined4 AuditAddCoinOutThunk(void)

{
  IncrementCoinInCounters();
  return 0;
}




/* ============================================================
 * 00005af6 AuditAddServiceThunk
 * ============================================================ */


undefined4 AuditAddServiceThunk(void)

{
  IncrementCoinOutCounters();
  return 0;
}




/* ============================================================
 * 00005afe AuditAddTicketThunk
 * ============================================================ */


undefined4 AuditAddTicketThunk(void)

{
  IncrementServiceCounters();
  return 0;
}




/* ============================================================
 * 00005b06 AuditAddValueThunk
 * ============================================================ */


undefined4 AuditAddValueThunk(void)

{
  IncrementTicketCounters();
  return 0;
}




/* ============================================================
 * 00005b0e AuditAddDefaultValueThunk
 * ============================================================ */


undefined4 AuditAddDefaultValueThunk(void)

{
  AddAuditValueA(300);
  return 0;
}




/* ============================================================
 * 00005b1c AuditAddDefaultValueAndRollDateThunk
 * ============================================================ */


undefined4 AuditAddDefaultValueAndRollDateThunk(void)

{
  AddAuditValueBAndRollDate(300);
  return 0;
}




/* ============================================================
 * 00005b2a DrawCoinCounterScreen
 * ============================================================ */


undefined4 DrawCoinCounterScreen(void)

{
  int initial;
  int iVar1;
  
  initial = 0;
  while( true ) {
    ClearTextTilemap();
    DrawStringTiles(0,0x10,1,'\x01',1,"BOOK TEST ");
    for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
      DrawStringTiles(0,0x10,iVar1 * 2 + 6,'\0',1,
                      *(char **)((int)coin_counter_label_table + (int)(short)((short)iVar1 << 2)));
    }
    initial = RunMenuSelectionLoop(0x10,6,coin_counter_label_table,8,initial,0);
    if (initial == -1) break;
    iVar1 = (**(code **)((int)coin_counter_callback_table + (int)(short)((short)initial << 2)))();
    if (iVar1 == 1) {
      return 0;
    }
  }
  return 0;
}




/* ============================================================
 * 00005bd6 ClearCoinCounters
 * ============================================================ */


void ClearCoinCounters(void)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    *(undefined2 *)((int)coin_counter_pending_pulses + (int)(short)((short)iVar1 * 2)) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  coin_counter_pulse_phase = 0;
  coin_counter_pulse_timer = 0;
  return;
}




/* ============================================================
 * 00005bfc SetCoinCounterPulse
 * ============================================================ */


void SetCoinCounterPulse(short param_1,short param_2)

{
  short *psVar1;
  
  psVar1 = (short *)((int)coin_counter_pending_pulses + (int)(short)(param_1 * 2));
  *psVar1 = param_2 + *psVar1;
  return;
}




/* ============================================================
 * 00005c12 SetCoinCounterPulseAlt
 * ============================================================ */


void SetCoinCounterPulseAlt(short param_1,short param_2)

{
  short *psVar1;
  
  psVar1 = (short *)((int)coin_counter_pending_pulses + (int)(short)(param_1 * 2));
  *psVar1 = *psVar1 - param_2;
  return;
}




/* ============================================================
 * 00005c28 UpdateCoinCounterPulses
 * ============================================================ */


void UpdateCoinCounterPulses(void)

{
  int iVar1;
  bool bVar2;
  
  if (coin_counter_pulse_phase == 0) {
    if (coin_counter_pending_pulses[0] != 0) {
      coin_counter_pending_pulses[0] = coin_counter_pending_pulses[0] + -1;
      coin_counter_output_shadow = coin_counter_output_shadow | 1;
      coin_counter_pulse_phase = 1;
    }
    if (coin_counter_pending_pulses[1] != 0) {
      coin_counter_pending_pulses[1] = coin_counter_pending_pulses[1] + -1;
      coin_counter_output_shadow = coin_counter_output_shadow | 2;
      coin_counter_pulse_phase = 1;
    }
    if (coin_counter_pending_pulses[2] != 0) {
      coin_counter_pending_pulses[2] = coin_counter_pending_pulses[2] + -1;
      coin_counter_output_shadow = coin_counter_output_shadow | 4;
      coin_counter_pulse_phase = 1;
    }
    if (coin_counter_pending_pulses[3] != 0) {
      coin_counter_pending_pulses[3] = coin_counter_pending_pulses[3] + -1;
      coin_counter_output_shadow = coin_counter_output_shadow | 8;
      coin_counter_pulse_phase = 1;
    }
    if (coin_counter_pulse_phase == 1) {
      pgm_jamma_io.wDipswitches = coin_counter_output_shadow;
      coin_counter_pulse_timer = 9;
    }
  }
  else if (coin_counter_pulse_phase == 1) {
    bVar2 = coin_counter_pulse_timer == 0;
    coin_counter_pulse_timer = coin_counter_pulse_timer + -1;
    if (bVar2) {
      coin_counter_output_shadow = coin_counter_output_shadow & 0xfff0;
      pgm_jamma_io.wDipswitches = coin_counter_output_shadow;
      coin_counter_pulse_timer = 9;
      coin_counter_pulse_phase = 2;
    }
  }
  else if ((coin_counter_pulse_phase == 2) &&
          (iVar1 = coin_counter_pulse_timer + -1, bVar2 = coin_counter_pulse_timer == 0,
          coin_counter_pulse_timer = iVar1, bVar2)) {
    coin_counter_pulse_phase = 0;
  }
  return;
}




/* ============================================================
 * 00005d40 CoinCounterNoopA
 * ============================================================ */


void CoinCounterNoopA(void)

{
  return;
}




/* ============================================================
 * 00005d42 CoinCounterNoopB
 * ============================================================ */


void CoinCounterNoopB(void)

{
  return;
}




/* ============================================================
 * 00005d44 CoinCounterNoopC
 * ============================================================ */


void CoinCounterNoopC(void)

{
  return;
}




/* ============================================================
 * 00005d46 ClearVideoControlMaybe
 * ============================================================ */


void ClearVideoControlMaybe(void)

{
  return;
}




/* ============================================================
 * 00005d48 VblankTailHookStub
 * ============================================================ */


void VblankTailHookStub(void)

{
  return;
}




/* ============================================================
 * 00005d4e PollTestStartInputsOnVblank
 * ============================================================ */


void PollTestStartInputsOnVblank(void)

{
  undefined2 extraout_D0u;
  undefined2 extraout_D0u_00;
  ushort peeked_key;
  uint start_pressed;
  int test_key_pending;
  int start_key_pending;
  int poll_count;
  int input_context;
  
  do {
    poll_count = 0;
    do {
      PollJammaInputs();
      if (10 < *(ushort *)(input_context + 2)) break;
      peeked_key = PeekKeyPress(1);
      start_key_pending = CONCAT22(extraout_D0u,peeked_key);
      peeked_key = PeekKeyPress(9);
      test_key_pending = CONCAT22(extraout_D0u_00,peeked_key);
      poll_count = poll_count + 1;
    } while (poll_count < 100);
    if ((start_key_pending != 0) && (test_key_pending != 0)) {
      test_start_combo_latch = 0;
      ConsumeKeyPress(1);
      goto LAB_00005db0;
    }
    start_pressed = IsKeyPressed(1);
    if (start_pressed != 0) {
      return;
    }
    if (test_key_pending != 0) {
LAB_00005db0:
      ConsumeKeyPress(9);
      return;
    }
  } while( true );
}




/* ============================================================
 * 00005dc2 InitVblankState
 * ============================================================ */


void InitVblankState(void)

{
  test_start_combo_latch = 0;
  vblank_reserved_counter_2 = 0;
  vblank_services_inhibit = 0;
  vblank_seen_flag = 0;
  vblank_callback_1 = (void *)0x0;
  vblank_callback_2 = (void *)0x0;
  vblank_counter_seed_9999 = 9999;
  vblank_reserved_counter_0 = 0;
  vblank_reserved_counter_1 = 0;
  ClearVideoControlMaybe();
  return;
}




/* ============================================================
 * 00005e02 SetVblankCallbackOne
 * ============================================================ */


void SetVblankCallbackOne(void)

{
  vblank_callback_1 = (void *)0x0;
  return;
}




/* ============================================================
 * 00005e0a SetVblankCallbackOneAndReturnOld
 * ============================================================ */


void * SetVblankCallbackOneAndReturnOld(void *callback)

{
  void *pvVar1;
  
  pvVar1 = vblank_callback_1;
  vblank_callback_1 = callback;
  return pvVar1;
}




/* ============================================================
 * 00005e1c SetVblankCallbackTwo
 * ============================================================ */


void SetVblankCallbackTwo(void)

{
  vblank_callback_2 = (void *)0x0;
  return;
}




/* ============================================================
 * 00005e24 SetVblankCallbackTwoAndReturnOld
 * ============================================================ */


void * SetVblankCallbackTwoAndReturnOld(void *callback)

{
  void *pvVar1;
  
  pvVar1 = vblank_callback_2;
  vblank_callback_2 = callback;
  return pvVar1;
}




/* ============================================================
 * 00005e36 ClearVblankSeenFlag
 * ============================================================ */


void ClearVblankSeenFlag(void)

{
  vblank_seen_flag = 0;
  return;
}




/* ============================================================
 * 00005e3e GetVblankSeenFlag
 * ============================================================ */


byte GetVblankSeenFlag(void)

{
  return vblank_seen_flag;
}




/* ============================================================
 * 00005e48 InfiniteWaitLoop
 * ============================================================ */


/* WARNING: Removing unreachable block (ram,0x00005e5c) */

void InfiniteWaitLoop(void)

{
                    /* WARNING: Do nothing block with infinite loop */
  do {
  } while( true );
}




/* ============================================================
 * 00005e60 WaitForVblankOrCallback
 * ============================================================ */


void WaitForVblankOrCallback(void)

{
  int iVar1;
  
  vblank_seen_flag = 0;
  do {
    if (vblank_seen_flag != 0) {
      return;
    }
  } while ((vblank_callback_1 == (void *)0x0) || (iVar1 = (*vblank_callback_1)(), iVar1 == 0));
  vblank_callback_1 = (void *)0x0;
  return;
}




/* ============================================================
 * 00005e8e InhibitVblankServices
 * ============================================================ */


void InhibitVblankServices(void)

{
  vblank_services_inhibit = 1;
  return;
}




/* ============================================================
 * 00005e98 ClearVblankServiceInhibit
 * ============================================================ */


void ClearVblankServiceInhibit(void)

{
  vblank_services_inhibit = 0;
  return;
}




/* ============================================================
 * 00005ea0 DefaultVblankServices
 * ============================================================ */


void DefaultVblankServices(void)

{
  HandleRuntimeTestAndStartInputs();
  if (vblank_services_inhibit == 0) {
    FlushPendingScrollRegs();
    FlushZoomAndBgScale();
    FlushFontBuffers();
    FlushPaletteDmaSlots();
    if (vblank_callback_2 != (void *)0x0) {
      (*vblank_callback_2)();
    }
    UpdateTimersOnVblank();
    MemoryTickStub();
    PumpZ80CommandQueue();
    VblankTailHookStub();
  }
  PollJammaInputs();
  UpdateCoinCounterPulses();
  vblank_seen_flag = 1;
  RefreshVideoControlFlags();
  return;
}




/* ============================================================
 * 00005f08 RefreshVideoControlFlags
 * ============================================================ */


void RefreshVideoControlFlags(void)

{
  EnableVblankIrqFlag();
  return;
}




/* ============================================================
 * 00005f10 InitVideoRegistersMaybe
 * ============================================================ */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InitVideoRegistersMaybe(void)

{
  _pgm_irq4_ack = 0;
  return;
}




/* ============================================================
 * 00005f18 ClearIrqFlags
 * ============================================================ */


void ClearIrqFlags(void)

{
  irq6_seen_flag = 0;
  irq4_seen_flag = 0;
  return;
}




/* ============================================================
 * 00005f26 ClearIrq4FlagOnly
 * ============================================================ */


void ClearIrq4FlagOnly(void)

{
  irq4_seen_flag = 0;
  return;
}




/* ============================================================
 * 00005f2e GetIrq4Flag
 * ============================================================ */


byte GetIrq4Flag(void)

{
  return irq4_seen_flag;
}




/* ============================================================
 * 00005f38 WaitForIrq4Flag
 * ============================================================ */


/* WARNING: Removing unreachable block (ram,0x00005f46) */

void WaitForIrq4Flag(void)

{
                    /* WARNING: Do nothing block with infinite loop */
  do {
  } while( true );
}




/* ============================================================
 * 00005f48 SetIrq6Flag
 * ============================================================ */


void SetIrq6Flag(void)

{
  irq6_seen_flag = 1;
  return;
}




/* ============================================================
 * 00005f52 ClearIrq6FlagOnly
 * ============================================================ */


void ClearIrq6FlagOnly(void)

{
  irq6_seen_flag = 0;
  return;
}




/* ============================================================
 * 00005f5a AckIrq4AndSetFlag
 * ============================================================ */


void AckIrq4AndSetFlag(void)

{
  irq4_seen_flag = 1;
  InitVideoRegistersMaybe();
  return;
}




/* ============================================================
 * 00005f6e SetSoundPollInhibit
 * ============================================================ */


void SetSoundPollInhibit(void)

{
  sound_poll_inhibit_flag = 1;
  return;
}




/* ============================================================
 * 00005f78 ClearSoundPollInhibit
 * ============================================================ */


void ClearSoundPollInhibit(void)

{
  sound_poll_inhibit_flag = 0;
  return;
}




/* ============================================================
 * 00005f80 InitSoundPollState
 * ============================================================ */


void InitSoundPollState(void)

{
  sound_poll_reserved_1 = 0;
  sound_poll_reserved_0 = 0;
  sound_status_poll_active = 0;
  ClearSoundPollInhibit();
  return;
}




/* ============================================================
 * 00005f98 PollSoundStatusIfIdle
 * ============================================================ */


void PollSoundStatusIfIdle(void)

{
  if ((sound_poll_inhibit_flag == 0) && (sound_status_poll_active == 0)) {
    sound_status_poll_active = 1;
    PollZ80StatusLatch();
    sound_status_poll_active = 0;
  }
  return;
}




/* ============================================================
 * 00005fbe IndexScrollRegisterState
 * ============================================================ */


void IndexScrollRegisterState(int param_1,short param_2,short param_3)

{
  scroll_register_states[param_1].nY = param_2 + scroll_register_states[param_1].nY;
  scroll_register_states[param_1].nX = param_3 + scroll_register_states[param_1].nX;
  scroll_register_states[param_1].bDirty = 1;
  return;
}




/* ============================================================
 * 00005fea SetScrollRegisterPendingPair
 * ============================================================ */


void SetScrollRegisterPendingPair(short param_1,short param_2)

{
  scroll_register_states[0].nY = param_1 + scroll_register_states[0].nY;
  scroll_register_states[0].nX = param_2 + scroll_register_states[0].nX;
  scroll_register_states[0].bDirty = 1;
  return;
}




/* ============================================================
 * 00006008 AddScrollRegisterPendingPair
 * ============================================================ */


void AddScrollRegisterPendingPair(short param_1,short param_2)

{
  scroll_register_states[1].nY = param_1 + scroll_register_states[1].nY;
  scroll_register_states[1].nX = param_2 + scroll_register_states[1].nX;
  scroll_register_states[1].bDirty = 1;
  return;
}




/* ============================================================
 * 00006026 InitScrollRegisters
 * ============================================================ */


void InitScrollRegisters(void)

{
  int layer;
  PgmScrollRegisterState *slot;
  
  slot = scroll_register_states;
  layer = 0;
  do {
    slot->bScript_state = 0;
    slot->pScript = (ushort *)0x0;
    slot->nSegment_frames = 0;
    slot->nScript_index = 0;
    slot->nScript_flag_or_x = 0;
    slot->pY_reg = *(ushort **)((int)video_register_address_table + (int)(short)((short)layer << 3))
    ;
    slot->pX_reg = *(ushort **)((int)video_register_address_table + (short)((short)layer << 3) + 4);
    slot->nY = 0;
    slot->nX = 0;
    slot->bDirty = 1;
    layer = layer + 1;
    slot = slot + 1;
  } while (layer < 2);
  scroll_update_enabled_flag = 1;
  scroll_auto_flush_enabled_flag = 0;
  return;
}




/* ============================================================
 * 0000608a FlushScrollRegistersAndMarkClean
 * ============================================================ */


void FlushScrollRegistersAndMarkClean(void)

{
  InitScrollRegisters();
  scroll_update_enabled_flag = 1;
  scroll_auto_flush_enabled_flag = 0;
  return;
}




/* ============================================================
 * 0000609e ClearScrollRegisterSlot
 * ============================================================ */


void ClearScrollRegisterSlot(int param_1)

{
  scroll_register_states[param_1].bScript_state = 0;
  scroll_register_states[param_1].pScript = (ushort *)0x0;
  scroll_register_states[param_1].nSegment_frames = 0;
  scroll_register_states[param_1].nScript_index = 0;
  return;
}




/* ============================================================
 * 000060c6 ResetScrollRegistersThunk
 * ============================================================ */


void ResetScrollRegistersThunk(void)

{
  InitScrollRegisters();
  return;
}




/* ============================================================
 * 000060cc ConfigureScrollRegisterSlot
 * ============================================================ */


void ConfigureScrollRegisterSlot(int layer,ushort *script,short reload)

{
  scroll_register_states[layer].nReload = reload;
  scroll_register_states[layer].nScript_index = 0;
  scroll_register_states[layer].nSegment_frames = *script;
  scroll_register_states[layer].nCountdown = 0;
  scroll_register_states[layer].nScript_flag_or_x = 0;
  scroll_register_states[layer].bReverse_y = 0;
  scroll_register_states[layer].pScript = script;
  scroll_register_states[layer].bScript_state = 2;
  return;
}




/* ============================================================
 * 00006110 IsScrollRegisterSlotFree
 * ============================================================ */


bool IsScrollRegisterSlotFree(short param_1)

{
  return (&scroll_register_states[0].bScript_state)[(short)(param_1 * 0x24)] == 0;
}




/* ============================================================
 * 00006130 WaitForScrollRegisterSlotFree
 * ============================================================ */


void WaitForScrollRegisterSlotFree(undefined4 param_1)

{
  int iVar1;
  
  do {
    iVar1 = IsScrollRegisterSlotFree(param_1);
  } while (iVar1 == 0);
  return;
}




/* ============================================================
 * 00006146 EnableScrollRegisterAutoFlush
 * ============================================================ */


void EnableScrollRegisterAutoFlush(void)

{
  scroll_auto_flush_enabled_flag = 1;
  return;
}




/* ============================================================
 * 00006150 DisableScrollRegisterAutoFlush
 * ============================================================ */


void DisableScrollRegisterAutoFlush(void)

{
  scroll_auto_flush_enabled_flag = 0;
  return;
}




/* ============================================================
 * 00006158 FlushPendingScrollRegs
 * ============================================================ */


void FlushPendingScrollRegs(void)

{
  if (scroll_register_states[1].bDirty != 0) {
    scroll_register_states[1].bDirty = 0;
    *scroll_register_states[0].pY_reg = scroll_register_states[0].nY;
    *scroll_register_states[0].pX_reg = scroll_register_states[0].nX;
    *scroll_register_states[1].pY_reg = scroll_register_states[1].nY;
    *scroll_register_states[1].pX_reg = scroll_register_states[1].nX;
  }
  return;
}




/* ============================================================
 * 00006198 UpdatePendingScrollRegisters
 * ============================================================ */


void UpdatePendingScrollRegisters(void)

{
  short slot_count;
  ushort *script_entry;
  PgmScrollRegisterState *slot;
  short old_countdown;
  
  if (scroll_update_enabled_flag != 0) {
    slot = scroll_register_states;
    slot_count = 2;
    while (slot_count != 0) {
      if ((slot->bScript_state == 2) &&
         (old_countdown = slot->nCountdown, slot->nCountdown = slot->nCountdown + -1,
         old_countdown == 0)) {
        slot->nCountdown = slot->nReload;
        if (slot->nSegment_frames == 0) {
          slot->nScript_index = slot->nScript_index + 1;
          script_entry = slot->pScript + (uint)(ushort)slot->nScript_index * 3;
          if (*script_entry == 0x4000) {
            slot->bScript_state = 0;
            goto LAB_000062ae;
          }
          if ((*script_entry & 0x2000) == 0) {
            if ((*script_entry & 0x1000) != 0) {
              slot->nScript_flag_or_x = 0x1000;
              goto LAB_00006248;
            }
          }
          else {
            slot->nScript_flag_or_x = script_entry[1];
            slot->nScript_y = script_entry[2];
LAB_00006248:
            slot->nScript_index = slot->nScript_index + 1;
            script_entry = slot->pScript + (uint)(ushort)slot->nScript_index * 3;
          }
          if ((*script_entry & 0x8000) != 0) {
            slot->nScript_index = *script_entry & 0x7fff;
          }
          script_entry = slot->pScript + (uint)(ushort)slot->nScript_index * 3;
          slot->nSegment_frames = *script_entry;
          if (slot->bReverse_y != 0) goto LAB_0000629a;
          slot->nY = script_entry[1] + slot->nY;
        }
        else {
          script_entry = slot->pScript + (uint)(ushort)slot->nScript_index * 3;
          if (slot->bReverse_y == 0) {
            slot->nY = script_entry[1] + slot->nY;
          }
          else {
LAB_0000629a:
            slot->nY = slot->nY - script_entry[1];
          }
        }
        slot->nX = script_entry[2] + slot->nX;
        slot->nSegment_frames = slot->nSegment_frames + -1;
      }
LAB_000062ae:
      *slot->pY_reg = slot->nY;
      *slot->pX_reg = slot->nX;
      slot = slot + 1;
      slot_count = slot_count + -1;
    }
  }
  return;
}




/* ============================================================
 * 000062d2 FlushPendingScrollRegistersAlt
 * ============================================================ */


void FlushPendingScrollRegistersAlt(void)

{
  if (scroll_update_enabled_flag != 0) {
    if (scroll_register_states[0].nScript_flag_or_x == 0x1000) {
      scroll_register_states[0].nScript_flag_or_x = 0;
      QueueZ80CmdShort(0xe,scroll_register_states[0].nReserved20);
    }
    else if (scroll_register_states[0].nScript_flag_or_x != 0) {
      scroll_register_states[0].nReserved20 =
           QueueZ80AudioCommand
                     (0,scroll_register_states[0].nScript_flag_or_x,
                      (byte)scroll_register_states[0].nScript_y,0);
      scroll_register_states[0].nScript_flag_or_x = 0;
    }
    if (scroll_register_states[1].nScript_flag_or_x == 0x1000) {
      scroll_register_states[1].nScript_flag_or_x = 0;
      QueueZ80CmdShort(0xe,scroll_register_states[1].nReserved20);
    }
    else if (scroll_register_states[1].nScript_flag_or_x != 0) {
      scroll_register_states[1].nReserved20 =
           QueueZ80AudioCommand
                     (0,scroll_register_states[1].nScript_flag_or_x,
                      (byte)scroll_register_states[1].nScript_y,0);
      scroll_register_states[1].nScript_flag_or_x = 0;
    }
  }
  return;
}




/* ============================================================
 * 0000638e FlushScrollRegistersThunk
 * ============================================================ */


void FlushScrollRegistersThunk(void)

{
  FlushScrollRegistersAndMarkClean();
  return;
}




/* ============================================================
 * 00006394 SetScrollPairImmediate
 * ============================================================ */


void SetScrollPairImmediate(short param_1,undefined2 param_2,undefined2 param_3)

{
  *(undefined2 *)((int)&scroll_register_states[0].nY + (int)(short)(param_1 * 0x24)) = param_2;
  *(undefined2 *)((int)&scroll_register_states[0].nX + (int)(short)(param_1 * 0x24)) = param_3;
  (&scroll_register_states[0].bDirty)[(short)(param_1 * 0x24)] = 1;
  return;
}




/* ============================================================
 * 000063e0 SetScrollPairAndWait
 * ============================================================ */


void SetScrollPairAndWait(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  SetScrollPairImmediate(param_1,param_2,param_3);
  do {
  } while ((&scroll_register_states[0].bDirty)[(short)((short)param_1 * 0x24)] != 0);
  return;
}




/* ============================================================
 * 00006416 SetScrollPair
 * ============================================================ */


void SetScrollPair(int param_1,short param_2,short param_3)

{
  scroll_register_states[param_1].nY = param_2;
  scroll_register_states[param_1].nX = param_3;
  *scroll_register_states[param_1].pY_reg = scroll_register_states[param_1].nY;
  *scroll_register_states[param_1].pX_reg = scroll_register_states[param_1].nX;
  scroll_register_states[param_1].bDirty = 0;
  return;
}




/* ============================================================
 * 0000644c SetScrollPairAndMarkPending
 * ============================================================ */


void SetScrollPairAndMarkPending(int layer,short dy,short dx)

{
  scroll_register_states[layer].nY = dy + scroll_register_states[layer].nY;
  scroll_register_states[layer].nX = dx + scroll_register_states[layer].nX;
  *scroll_register_states[layer].pY_reg = scroll_register_states[layer].nY;
  *scroll_register_states[layer].pX_reg = scroll_register_states[layer].nX;
  scroll_register_states[layer].bDirty = 0;
  return;
}




/* ============================================================
 * 00006486 GetScrollPairY
 * ============================================================ */


undefined2 GetScrollPairY(short param_1)

{
  return *(undefined2 *)((int)&scroll_register_states[0].nY + (int)(short)(param_1 * 0x24));
}




/* ============================================================
 * 0000649e GetScrollPairX
 * ============================================================ */


undefined2 GetScrollPairX(short param_1)

{
  return *(undefined2 *)((int)&scroll_register_states[0].nX + (int)(short)(param_1 * 0x24));
}




/* ============================================================
 * 000064b6 GetScrollPairBoth
 * ============================================================ */


void GetScrollPairBoth(short param_1,undefined2 *param_2,undefined2 *param_3)

{
  *param_2 = *(undefined2 *)((int)&scroll_register_states[0].nY + (int)(short)(param_1 * 0x24));
  *param_3 = *(undefined2 *)((int)&scroll_register_states[0].nX + (int)(short)(param_1 * 0x24));
  return;
}




/* ============================================================
 * 000064f4 DisablePendingScrollFlush
 * ============================================================ */


void DisablePendingScrollFlush(void)

{
  scroll_update_enabled_flag = 0;
  return;
}




/* ============================================================
 * 000064fc EnablePendingScrollFlush
 * ============================================================ */


void EnablePendingScrollFlush(void)

{
  scroll_update_enabled_flag = 1;
  return;
}




/* ============================================================
 * 00006506 MarkScrollRegisterDirty
 * ============================================================ */


void MarkScrollRegisterDirty(short param_1)

{
  (&scroll_register_states[0].bReverse_y)[(short)(param_1 * 0x24)] = 1;
  return;
}




/* ============================================================
 * 00006520 InitZoomAndBgScale
 * ============================================================ */


void InitZoomAndBgScale(void)

{
  int iVar1;
  short sVar2;
  
  iVar1 = 0;
  do {
    sVar2 = (short)iVar1;
    *(undefined2 *)((int)sprite_zoom_table_shadow + (int)(short)(sVar2 << 2)) =
         *(undefined2 *)((int)default_sprite_zoom_table + (int)(short)(sVar2 << 2));
    *(undefined2 *)((int)sprite_zoom_table_shadow + (short)(sVar2 << 2) + 2) =
         *(undefined2 *)((int)default_sprite_zoom_table + (short)(sVar2 << 2) + 2);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  sprite_zoom_table_dirty = 1;
  bg_scale_shadow = CONCAT11((char)(bg_scale_shadow >> 8),0x10);
  bg_scale_shadow = bg_scale_shadow & 0xf81f | 0x200;
  bg_scale_dirty = 1;
  FlushZoomAndBgScale();
  return;
}




/* ============================================================
 * 000065a6 ZoomScaleNoopA
 * ============================================================ */


void ZoomScaleNoopA(void)

{
  return;
}




/* ============================================================
 * 000065a8 ZoomScaleNoopB
 * ============================================================ */


void ZoomScaleNoopB(void)

{
  return;
}




/* ============================================================
 * 000065aa FlushZoomAndBgScale
 * ============================================================ */


void FlushZoomAndBgScale(void)

{
  if (sprite_zoom_table_dirty != 0) {
    CopyLongs((undefined4 *)pgm_sprite_zoom_table,sprite_zoom_table_shadow,0x10);
    sprite_zoom_table_dirty = 0;
  }
  if (bg_scale_dirty != 0) {
    bg_scale_shadow = bg_scale_shadow | 0x400;
    pgm_bg_scale = bg_scale_shadow;
    bg_scale_dirty = 0;
  }
  return;
}




/* ============================================================
 * 000065f4 SetZoomAndBgScaleValue
 * ============================================================ */


void SetZoomAndBgScaleValue(undefined1 param_1,ushort param_2,byte param_3)

{
  bg_scale_shadow = (param_2 & 0x1f) << 5 | CONCAT11((char)(bg_scale_shadow >> 8),param_1) & 0xf81f;
  bg_scale_shadow = CONCAT11((param_3 & 1) << 2 | bg_scale_shadow._0_1_,(undefined1)bg_scale_shadow)
  ;
  bg_scale_dirty = 1;
  return;
}




/* ============================================================
 * 0000664a SetZoomControlBits
 * ============================================================ */


void SetZoomControlBits(undefined1 param_1,ushort param_2,byte param_3)

{
  bg_scale_shadow = (param_2 & 0x1f) << 5 | CONCAT11((char)(bg_scale_shadow >> 8),param_1) & 0xf81f;
  bg_scale_shadow = CONCAT11((param_3 & 1) << 2 | bg_scale_shadow._0_1_,(undefined1)bg_scale_shadow)
  ;
  bg_scale_dirty = 0;
  pgm_bg_scale = bg_scale_shadow;
  return;
}




/* ============================================================
 * 000066a8 ParseZoomBitString
 * ============================================================ */


void ParseZoomBitString(short zoom_index,undefined4 unused,char *bit_string)

{
  int bit_index;
  int packed_value;
  
  packed_value = 0;
  for (bit_index = 0; bit_index < 0x20; bit_index = bit_index + 1) {
    packed_value = packed_value * 2;
    if (*bit_string == '1') {
      packed_value = packed_value + 1;
    }
    bit_string = bit_string + 1;
  }
  *(int *)((int)sprite_zoom_table_shadow + (int)(short)(zoom_index << 2)) = packed_value;
  sprite_zoom_table_dirty = 1;
  return;
}




/* ============================================================
 * 000066e4 SetZoomBitString
 * ============================================================ */


void SetZoomBitString(short param_1,undefined4 param_2,char *param_3)

{
  ParseZoomBitString(param_1,param_2,param_3);
  return;
}




/* ============================================================
 * 000066fc SetZoomBitStringAndFlush
 * ============================================================ */


void SetZoomBitStringAndFlush(short param_1,undefined4 param_2,char *param_3)

{
  ParseZoomBitString(param_1,param_2,param_3);
  sprite_zoom_table_dirty = 0;
  CopyLongs((undefined4 *)pgm_sprite_zoom_table,sprite_zoom_table_shadow,0x10);
  return;
}




/* ============================================================
 * 00006730 CalculateZoomStep
 * ============================================================ */


undefined4 CalculateZoomStep(ushort param_1,short param_2)

{
  int iVar1;
  
  iVar1 = (uint)(ushort)(param_2 + 0x10) * (uint)param_1;
  return CONCAT22((short)((uint)iVar1 >> 0x10),(ushort)iVar1 >> 5);
}




/* ============================================================
 * 0000673e GetZoomBitMask
 * ============================================================ */


undefined4 GetZoomBitMask(short param_1)

{
  return *(undefined4 *)((int)sprite_zoom_table_shadow + (int)(short)(param_1 << 2));
}




/* ============================================================
 * 00006750 GetBgScrollPair
 * ============================================================ */


void GetBgScrollPair(void)

{
  GetScrollPairBoth(1,&zoomed_bg_scroll_y_shadow,&zoomed_bg_scroll_x_shadow);
  return;
}




/* ============================================================
 * 0000676c CalculateScaledCoordinate
 * ============================================================ */


int CalculateScaledCoordinate(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0x1f) {
    param_3 = 0x20;
  }
  iVar1 = DivSigned32Quotient((param_2 - param_1) * 0x20,param_3);
  return param_2 - iVar1;
}




/* ============================================================
 * 0000679c CalculateScaledCoordinatePair
 * ============================================================ */


void CalculateScaledCoordinatePair
               (int scroll_origin,uint coordinate,int scale,int *out_min,int *out_max)

{
  int scaled_delta;
  uint scaled_span;
  
  scaled_delta = DivSigned32Quotient(coordinate << 5,scale);
  *out_min = scaled_delta - scroll_origin;
  scaled_span = MulUnsigned32(scale - 0x20,coordinate);
  scaled_delta = DivSigned32Quotient(scaled_span,scale);
  *out_max = scroll_origin + scaled_delta;
  return;
}




/* ============================================================
 * 000067e4 CalculateZoomedBounds
 * ============================================================ */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CalculateZoomedBounds
               (int x0,int y0,uint x1,uint y1,int *out_x0,int *out_y0,int *out_x1,int *out_y1)

{
  short scroll_x;
  short scroll_y;
  
  GetScrollPairBoth(1,&scroll_y,&scroll_x);
  CalculateScaledCoordinatePair((int)scroll_y,x1,x0,out_x0,out_x1);
  CalculateScaledCoordinatePair((int)scroll_x,y1,y0,out_y0,out_y1);
  return;
}




/* ============================================================
 * 0000683a SetZoomedBgPosition
 * ============================================================ */


void SetZoomedBgPosition(undefined4 param_1,undefined4 param_2,ushort param_3,ushort param_4)

{
  SetZoomAndBgScaleValue(param_1,param_2,1);
  SetScrollPairImmediate
            (1,(int)(short)zoomed_bg_scroll_y_shadow,(int)(short)zoomed_bg_scroll_x_shadow);
  zoomed_bg_scroll_y_shadow = param_3;
  zoomed_bg_scroll_x_shadow = param_4;
  return;
}




/* ============================================================
 * 00006880 SetZoomedBgWindow
 * ============================================================ */


void SetZoomedBgWindow(undefined4 y,undefined4 x,int zoom_y,int zoom_x,undefined4 window_y,
                      undefined4 window_x)

{
  SetZoomAndBgScaleValue(zoom_y,zoom_x,1);
  SetScrollPairImmediate
            (1,(int)(short)zoomed_bg_scroll_y_shadow,(int)(short)zoomed_bg_scroll_x_shadow);
  zoomed_bg_scroll_y_shadow = CalculateScaledCoordinate(y,window_y,zoom_y + 0x10);
  zoomed_bg_scroll_x_shadow = CalculateScaledCoordinate(x,window_x,zoom_x + 0x10);
  return;
}




/* ============================================================
 * 000068f8 FlushBgScrollPair
 * ============================================================ */


void FlushBgScrollPair(void)

{
  SetScrollPairImmediate
            (1,(int)(short)zoomed_bg_scroll_y_shadow,(int)(short)zoomed_bg_scroll_x_shadow);
  return;
}




/* ============================================================
 * 0000691c FillRowScrollRam
 * ============================================================ */


void FillRowScrollRam(int param_1,int param_2,ushort param_3)

{
  FillWords((ushort *)(&pgm_rowscroll_ram + param_1 * 2),param_3,param_2);
  return;
}




/* ============================================================
 * 00006944 ClearTextTilemap
 * ============================================================ */


void ClearTextTilemap(void)

{
  FillLongBlocks16((undefined4 *)&pgm_text_tilemap,0,0x80);
  return;
}




/* ============================================================
 * 0000695c ClearBgTilemap
 * ============================================================ */


void ClearBgTilemap(void)

{
  FillLongBlocks16((undefined4 *)&pgm_video_ram,0,0x100);
  SetScrollPair(1,0,0);
  return;
}




/* ============================================================
 * 00006982 ClearSpriteState
 * ============================================================ */


void ClearSpriteState(void)

{
  FillLongBlocks16((undefined4 *)work_ram_sprite_dma_buffer,0,0x50);
  pgm_sprite_regs._0_4_ = 0;
  pgm_sprite_regs._4_4_ = 0;
  pgm_video_reg_08 = 0;
  FlushSpritesViaDma();
  return;
}




/* ============================================================
 * 000069c8 ClearRowScrollRam
 * ============================================================ */


void ClearRowScrollRam(void)

{
  FillRowScrollRam(0,0x100,0);
  return;
}




/* ============================================================
 * 000069dc ClearLayerScrollRegs
 * ============================================================ */


void ClearLayerScrollRegs(void)

{
  SetScrollPair(0,0,0);
  SetScrollPair(1,0,0);
  return;
}




/* ============================================================
 * 000069fc ClearTileSpriteLayers
 * ============================================================ */


void ClearTileSpriteLayers(void)

{
  ClearTextTilemap();
  ClearBgTilemap();
  ClearSpriteState();
  ClearLayerScrollRegs();
  ClearRowScrollRam();
  return;
}




/* ============================================================
 * 00006a12 ClearTextPalette
 * ============================================================ */


void ClearTextPalette(void)

{
  FillLongBlocks16((undefined4 *)&pgm_text_palette_ram,0,8);
  return;
}




/* ============================================================
 * 00006a2a ClearBgPalette
 * ============================================================ */


void ClearBgPalette(void)

{
  FillLongBlocks16((undefined4 *)&pgm_bg_palette_ram,0,0x20);
  return;
}




/* ============================================================
 * 00006a42 ClearSpritePalette
 * ============================================================ */


void ClearSpritePalette(void)

{
  FillLongBlocks16((undefined4 *)&pgm_palette_ram,0,0x20);
  return;
}




/* ============================================================
 * 00006a5a ClearAllPalettes
 * ============================================================ */


void ClearAllPalettes(void)

{
  ClearTextPalette();
  ClearBgPalette();
  ClearSpritePalette();
  return;
}




/* ============================================================
 * 00006a68 ClearVideoRamPalettesAndScale
 * ============================================================ */


void ClearVideoRamPalettesAndScale(void)

{
  ClearAllPalettes();
  ClearTileSpriteLayers();
  InitZoomAndBgScale();
  return;
}




/* ============================================================
 * 00006a78 DrawImageAtTilePosClipped
 * ============================================================ */


void DrawImageAtTilePosClipped(int layer,int tile_x,int tile_y,int width_tiles,int height_tiles)

{
  undefined4 *row_dst;
  uint row_stride_bytes;
  
  if (layer == 0) {
    row_stride_bytes = 0x100;
    row_dst = (undefined4 *)(&pgm_text_tilemap + (tile_x + tile_y * 0x40) * 4);
  }
  else if (layer == 1) {
    row_stride_bytes = 0x100;
    row_dst = (undefined4 *)(&pgm_video_ram + (tile_x + tile_y * 0x40) * 4);
  }
  while (height_tiles != 0) {
    FillLongs(row_dst,0,width_tiles);
    row_dst = (undefined4 *)((row_stride_bytes & 0xffff) + (int)row_dst);
    height_tiles = height_tiles + -1;
  }
  return;
}




/* ============================================================
 * 00006aec DrawImageAtTilePosWithPalette
 * ============================================================ */


void DrawImageAtTilePosWithPalette
               (int layer,int tile_x,int tile_y,int width_tiles,int height_tiles,byte palette)

{
  undefined4 *row_dst;
  uint row_stride_bytes;
  undefined4 tile_word;
  
  if (layer == 0) {
    row_stride_bytes = 0x100;
    row_dst = (undefined4 *)(&pgm_text_tilemap + (tile_x + tile_y * 0x40) * 4);
    tile_word = tile_word & 0xffffff01;
    tile_word = CONCAT31(tile_word._0_3_,(palette & 0x1f) * '\x02' | (byte)tile_word);
    tile_word = CONCAT22(0x14,tile_word._2_2_);
  }
  else if (layer == 1) {
    row_stride_bytes = 0x100;
    row_dst = (undefined4 *)(&pgm_video_ram + (tile_x + tile_y * 0x40) * 4);
    tile_word = tile_word & 0xffffff01;
    tile_word = CONCAT31(tile_word._0_3_,(palette & 0x1f) * '\x02' | (byte)tile_word);
    tile_word = CONCAT22(1,tile_word._2_2_);
  }
  while (height_tiles != 0) {
    FillLongs(row_dst,tile_word,width_tiles);
    row_dst = (undefined4 *)((row_stride_bytes & 0xffff) + (int)row_dst);
    height_tiles = height_tiles + -1;
  }
  return;
}




/* ============================================================
 * 00006bac DrawImageAtTilePos
 * ============================================================ */


void DrawImageAtTilePos(int layer,int tile_x,int tile_y,undefined2 width_tiles,
                       undefined1 height_tiles)

{
  int slot;
  undefined *dest_tilemap;
  
  if (layer == 0) {
    dest_tilemap = &pgm_text_tilemap + (tile_x + tile_y * 0x40) * 4;
  }
  else if (layer == 1) {
    dest_tilemap = &pgm_video_ram + (tile_x + tile_y * 0x40) * 4;
  }
  slot = ReserveExternalFontSurface(0);
  SetupFontBufferBlit(slot,(byte)layer,width_tiles,height_tiles,dest_tilemap,0);
  return;
}




/* ============================================================
 * 00006c14 DrawDefaultTextPaletteBlock
 * ============================================================ */


void DrawDefaultTextPaletteBlock
               (int layer,int tile_x,int tile_y,undefined4 width_tiles,undefined4 height_tiles,
               byte palette)

{
  int slot;
  undefined *dest_tilemap;
  undefined4 tile_word;
  
  if (layer == 0) {
    dest_tilemap = &pgm_text_tilemap + (tile_x + tile_y * 0x40) * 4;
    tile_word = tile_word & 0xffffff01;
    tile_word = CONCAT31(tile_word._0_3_,(palette & 0x1f) * '\x02' | (byte)tile_word);
    tile_word = CONCAT22(0x14,tile_word._2_2_);
  }
  else if (layer == 1) {
    dest_tilemap = &pgm_video_ram + (tile_x + tile_y * 0x40) * 4;
    tile_word = tile_word & 0xffffff01;
    tile_word = CONCAT31(tile_word._0_3_,(palette & 0x1f) * '\x02' | (byte)tile_word);
    tile_word = CONCAT22(1,tile_word._2_2_);
  }
  slot = ReserveExternalFontSurface(tile_word | 0x80000000);
  SetupFontBufferBlit(slot,(byte)layer,width_tiles._2_2_,(undefined1)height_tiles,dest_tilemap,0);
  return;
}




/* ============================================================
 * 00006cce LoadDefaultTextPalettes
 * ============================================================ */


void LoadDefaultTextPalettes(void)

{
  CopyPaletteChunk(0,0,(undefined4 *)default_text_palette_0);
  CopyPaletteChunk(0,1,(undefined4 *)default_text_palette_1);
  CopyPaletteChunk(0,2,(undefined4 *)default_text_palette_2);
  CopyPaletteChunk(0,3,(undefined4 *)default_text_palette_3);
  CopyPaletteChunk(0,4,(undefined4 *)default_text_palette_4);
  return;
}




/* ============================================================
 * 00006d30 DrawDefaultBgPaletteBlock
 * ============================================================ */


void DrawDefaultBgPaletteBlock(void)

{
  StartFadePaletteSlot(0,0,default_text_palette_0);
  StartFadePaletteSlot(0,1,default_text_palette_1);
  StartFadePaletteSlot(0,2,default_text_palette_2);
  StartFadePaletteSlot(0,3,default_text_palette_3);
  StartFadePaletteSlot(0,4,default_text_palette_4);
  return;
}




/* ============================================================
 * 00006d92 LoadDefaultBgPalettes
 * ============================================================ */


void LoadDefaultBgPalettes(void)

{
  CopyPaletteChunk(1,0,(undefined4 *)default_bg_palette_0);
  CopyPaletteChunk(1,1,(undefined4 *)default_bg_palette_1);
  CopyPaletteChunk(1,2,(undefined4 *)default_bg_palette_2);
  CopyPaletteChunk(1,3,(undefined4 *)default_bg_palette_3);
  CopyPaletteChunk(1,4,(undefined4 *)default_bg_palette_4);
  return;
}




/* ============================================================
 * 00006dfe InitTextDrawDefaults
 * ============================================================ */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InitTextDrawDefaults(void)

{
  text_format_decimal_width = 10;
  text_format_hex_width = 8;
  text_format_binary_width = 0x20;
  _text_draw_reserved_state = 0;
  return;
}




/* ============================================================
 * 00006e1e TextDrawNoopReturn
 * ============================================================ */


void TextDrawNoopReturn(void)

{
  return;
}




/* ============================================================
 * 00006e22 PadFormattedString
 * ============================================================ */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void PadFormattedString(char *text,uint width,int left_justify,char fill_char)

{
  uint copy_count;
  char *dst;
  char *src;
  char tmp [34];
  char ch;
  char *pad_start;
  uint text_len;
  
  src = text;
  do {
    dst = src + 1;
    ch = *src;
    src = dst;
  } while (ch != '\0');
  text_len = ~((int)text - (int)dst);
  if ((int)width < (int)text_len) {
    width = text_len;
  }
  if (width != text_len) {
    if (left_justify == 0) {
      copy_count = text_len;
      src = text;
      dst = tmp;
      while (0 < (int)copy_count) {
        *dst = *src;
        copy_count = copy_count - 1;
        src = src + 1;
        dst = dst + 1;
      }
      copy_count = text_len;
      src = tmp;
      dst = text + (width - text_len);
      while (pad_start = text, 0 < (int)copy_count) {
        *dst = *src;
        copy_count = copy_count - 1;
        src = src + 1;
        dst = dst + 1;
      }
    }
    else {
      pad_start = text + text_len;
    }
    MemsetBytes(pad_start,fill_char,width - text_len);
    text[width] = '\0';
  }
  return;
}




/* ============================================================
 * 00006ea6 DrawStringTiles
 * ============================================================ */


void DrawStringTiles(int layer,int tile_x,int tile_y,uchar palette,int glyph_set,char *text)

{
  uint image_tile_offset;
  uint tile_index;
  int iVar1;
  uint tilemap_stride_tiles;
  uint glyph_height_tiles_u32;
  int base_tile_index;
  uint glyph_width_tiles_u32;
  PgmImagePicture *glyph_picture;
  uint *tile_dst;
  uint *line_start;
  uint *cursor;
  int layer1_image_context;
  undefined1 *stack_scratch;
  uint *glyph_row_dst;
  int glyph_col;
  int glyph_row;
  byte glyph_height_tiles;
  short glyph_set_short;
  byte glyph_width_tiles;
  byte *next_text;
  
  stack_scratch = &stack0xffffffc8;
  glyph_set_short = (short)glyph_set;
  if (layer == 0) {
    glyph_width_tiles = default_palette_descriptor_table[(short)(glyph_set_short * 2)] >> 3;
    glyph_height_tiles = default_palette_descriptor_table[(short)(glyph_set_short * 2) + 1] >> 3;
    image_tile_offset = CalcImageTileOffset(0,0x500);
    stack_scratch = &stack0xffffffc8;
    tile_index = MulUnsigned32(0x40,tile_y);
    line_start = (uint *)(&pgm_text_tilemap + (tile_x + tile_index) * 4);
    glyph_picture = text_glyph_picture_table + glyph_set;
  }
  else {
    cursor = line_start;
    if (layer != 1) goto LAB_0000704e;
    glyph_width_tiles = default_palette_descriptor_table[(short)(glyph_set_short * 2)] >> 5;
    glyph_height_tiles = default_palette_descriptor_table[(short)(glyph_set_short * 2) + 1] >> 5;
    stack_scratch = &stack0xffffffc0;
    image_tile_offset = CalcImageTileOffset(1,0xb5e00);
    tile_index = MulUnsigned32(0x40,tile_y);
    line_start = (uint *)(&pgm_video_ram + (tile_x + tile_index) * 4);
    glyph_picture = *(PgmImagePicture **)(layer1_image_context + 4);
  }
  glyph_width_tiles_u32 = (uint)glyph_width_tiles;
  glyph_height_tiles_u32 = (uint)glyph_height_tiles;
  tilemap_stride_tiles = 0x40;
  base_tile_index = *(ushort *)glyph_picture->tile_index_data + image_tile_offset;
  cursor = line_start;
LAB_0000704e:
  while( true ) {
    next_text = (byte *)(text + 1);
    iVar1 = (int)(short)*text;
    if (iVar1 == 0) break;
    if (iVar1 == 10) {
      line_start = line_start + (tilemap_stride_tiles & 0xffff) * (glyph_height_tiles_u32 & 0xffff);
      cursor = line_start;
      text = (char *)next_text;
    }
    else if (iVar1 == 9) {
      palette = *next_text;
      text = text + 2;
    }
    else {
      if ((0x60 < iVar1) && (iVar1 < 0x7b)) {
        iVar1 = iVar1 + -0x20;
      }
      *(undefined4 *)(stack_scratch + -4) = 0x6fec;
      tile_index = MulUnsigned32(iVar1 - 0x20,glyph_width_tiles_u32);
      *(undefined4 *)(stack_scratch + -4) = 0x6ff4;
      tile_index = MulUnsigned32(tile_index,glyph_height_tiles_u32);
      iVar1 = base_tile_index + tile_index;
      glyph_row_dst = cursor;
      for (glyph_row = 0; glyph_row < (int)glyph_height_tiles_u32; glyph_row = glyph_row + 1) {
        tile_dst = glyph_row_dst;
        for (glyph_col = 0; glyph_col < (int)glyph_width_tiles_u32; glyph_col = glyph_col + 1) {
          *tile_dst = 0;
          *(byte *)((int)tile_dst + 3) = *(byte *)((int)tile_dst + 3) & 0xc1;
          *(byte *)((int)tile_dst + 3) = (palette & 0x1f) * '\x02' | *(byte *)((int)tile_dst + 3);
          *(short *)tile_dst = (short)iVar1;
          tile_dst = tile_dst + 1;
          iVar1 = iVar1 + 1;
        }
        glyph_row_dst = glyph_row_dst + tilemap_stride_tiles;
      }
      cursor = cursor + glyph_width_tiles_u32;
      text = (char *)next_text;
    }
  }
  return;
}




/* ============================================================
 * 0000706a DrawStringTilesWrapped
 * ============================================================ */


void DrawStringTilesWrapped
               (ushort *tile_buffer,int layer,int tile_x,int tile_y,uchar palette,int glyph_set,
               char *text)

{
  uint image_tile_offset;
  int slot;
  uint glyph_width_tiles_u32;
  int glyph_row;
  int base_tile_index;
  uint glyph_height_tiles_u32;
  char *scan;
  PgmImagePicture *glyph_picture;
  ushort *tile_dst;
  ushort *cursor;
  int layer1_image_context;
  uint buffer_width_tiles;
  undefined *dest_tilemap;
  ushort *glyph_row_dst;
  int glyph_col;
  char *pcVar1;
  char ch;
  byte glyph_height_tiles;
  short glyph_set_short;
  
  glyph_set_short = (short)glyph_set;
  cursor = tile_buffer;
  if (layer == 0) {
    glyph_width_tiles_u32 =
         (uint)(default_palette_descriptor_table[(short)(glyph_set_short * 2)] >> 3);
    glyph_height_tiles = default_palette_descriptor_table[(short)(glyph_set_short * 2) + 1] >> 3;
    pcVar1 = text;
    do {
      scan = pcVar1 + 1;
      ch = *pcVar1;
      pcVar1 = scan;
    } while (ch != '\0');
    buffer_width_tiles = MulUnsigned32(~((int)text - (int)scan),glyph_width_tiles_u32);
    image_tile_offset = CalcImageTileOffset(0,0x500);
    dest_tilemap = &pgm_text_tilemap + (tile_x + tile_y * 0x40) * 4;
    glyph_picture = text_glyph_picture_table + glyph_set;
  }
  else {
    if (layer != 1) goto LAB_0000721e;
    glyph_width_tiles_u32 =
         (uint)(default_palette_descriptor_table[(short)(glyph_set_short * 2)] >> 5);
    glyph_height_tiles = default_palette_descriptor_table[(short)(glyph_set_short * 2) + 1] >> 5;
    pcVar1 = text;
    do {
      scan = pcVar1 + 1;
      ch = *pcVar1;
      pcVar1 = scan;
    } while (ch != '\0');
    buffer_width_tiles = MulUnsigned32(~((int)text - (int)scan),glyph_width_tiles_u32);
    image_tile_offset = CalcImageTileOffset(1,0xb5e00);
    dest_tilemap = &pgm_video_ram + (tile_x + tile_y * 0x40) * 4;
    glyph_picture = *(PgmImagePicture **)(layer1_image_context + 4);
  }
  glyph_height_tiles_u32 = (uint)glyph_height_tiles;
  base_tile_index = *(ushort *)glyph_picture->tile_index_data + image_tile_offset;
LAB_0000721e:
  while( true ) {
    slot = (int)(short)*text;
    if (slot == 0) break;
    if (slot == 9) {
      palette = text[1];
      text = text + 2;
    }
    else {
      if ((0x60 < slot) && (slot < 0x7b)) {
        slot = slot + -0x20;
      }
      image_tile_offset = MulUnsigned32(slot - 0x20,glyph_width_tiles_u32);
      image_tile_offset = MulUnsigned32(image_tile_offset,glyph_height_tiles_u32);
      slot = base_tile_index + image_tile_offset;
      glyph_row_dst = cursor;
      for (glyph_row = 0; glyph_row < (int)glyph_height_tiles_u32; glyph_row = glyph_row + 1) {
        tile_dst = glyph_row_dst;
        for (glyph_col = 0; glyph_col < (int)glyph_width_tiles_u32; glyph_col = glyph_col + 1) {
          tile_dst[0] = 0;
          tile_dst[1] = 0;
          *(byte *)((int)tile_dst + 3) = *(byte *)((int)tile_dst + 3) & 0xc1;
          *(byte *)((int)tile_dst + 3) = (palette & 0x1f) * '\x02' | *(byte *)((int)tile_dst + 3);
          *tile_dst = (ushort)slot;
          tile_dst = tile_dst + 2;
          slot = slot + 1;
        }
        glyph_row_dst = glyph_row_dst + buffer_width_tiles * 2;
      }
      text = text + 1;
      cursor = cursor + glyph_width_tiles_u32 * 2;
    }
  }
  slot = ReserveExternalFontSurface(tile_buffer);
  SetupFontBufferBlit(slot,(byte)layer,(short)buffer_width_tiles,(char)glyph_height_tiles_u32,
                      dest_tilemap,0);
  return;
}




/* ============================================================
 * 00007256 FormatStringLimited
 * ============================================================ */


void FormatStringLimited(char *dest,char *format,uint *args)

{
  int is_digit_or_format_type;
  uint abs_value;
  uint width;
  char fill_char;
  uint left_justify;
  char format_ch;
  char *src;
  char *pcVar1;
  char *format_scan;
  char *formatted_text;
  bool has_left_justify;
  uint base;
  char format_buffer [82];
  char *end_scan;
  
  while (*format != '\0') {
    if ((*format == '%') && (format[1] != '\0')) {
      format_ch = format[1];
      width = 0;
      has_left_justify = format_ch == '-';
      format_scan = format;
      if (has_left_justify) {
        format_scan = format + 1;
        format_ch = format[2];
      }
      left_justify = (uint)has_left_justify;
      if (format_ch == '0') {
        fill_char = '0';
      }
      else {
        fill_char = ' ';
      }
      while (is_digit_or_format_type = IsDigitChar((int)(short)format_ch),
            is_digit_or_format_type != 0) {
        width = ((int)(short)format_ch + width * 10) - 0x30;
        format_ch = format_scan[2];
        format_scan = format_scan + 1;
      }
      is_digit_or_format_type = ToupperChar((int)(short)format_scan[1]);
      if (is_digit_or_format_type == 0x43) {
        formatted_text = format_buffer;
        format_buffer[0] = (char)*args;
        format_buffer[1] = '\0';
        args = args + 1;
      }
      else if (is_digit_or_format_type == 0x55) {
        UnsignedToAsciiBase(*args,format_buffer,10);
        formatted_text = format_buffer;
        PadFormattedString(formatted_text,width,left_justify,fill_char);
        args = args + 1;
      }
      else if ((is_digit_or_format_type == 0x44) || (is_digit_or_format_type == 0x49)) {
        abs_value = *args;
        if ((abs_value & 0x80000000) == 0) {
          UnsignedToAsciiBase(abs_value,format_buffer,10);
          formatted_text = format_buffer;
        }
        else {
          base = 10;
          formatted_text = format_buffer + 1;
          abs_value = AbsLong(abs_value);
          UnsignedToAsciiBase(abs_value,formatted_text,base);
          format_buffer[0] = '-';
          width = width - 1;
          formatted_text = format_buffer + 1;
        }
        PadFormattedString(formatted_text,width,left_justify,fill_char);
        formatted_text = format_buffer;
        args = args + 1;
      }
      else if (is_digit_or_format_type == 0x4c) {
        UnsignedToAsciiBase(*args,format_buffer,10);
        formatted_text = format_buffer;
        PadFormattedString(formatted_text,width,left_justify,fill_char);
        args = args + 1;
      }
      else if (is_digit_or_format_type == 0x58) {
        UnsignedToAsciiBase(*args,format_buffer,0x10);
        formatted_text = format_buffer;
        PadFormattedString(formatted_text,width,left_justify,fill_char);
        args = args + 1;
      }
      else if (is_digit_or_format_type == 0x42) {
        UnsignedToAsciiBase(*args,format_buffer,2);
        formatted_text = format_buffer;
        PadFormattedString(formatted_text,width,left_justify,fill_char);
        args = args + 1;
      }
      else if (is_digit_or_format_type == 0x53) {
        formatted_text = (char *)*args;
        src = format_buffer;
        do {
          format_ch = *formatted_text;
          *src = format_ch;
          formatted_text = formatted_text + 1;
          src = src + 1;
        } while (format_ch != '\0');
        formatted_text = format_buffer;
        PadFormattedString(formatted_text,width,left_justify,fill_char);
        args = args + 1;
      }
      else {
        if (is_digit_or_format_type != 0x25) {
          *dest = *format_scan;
          dest = dest + 1;
        }
        *dest = format_scan[1];
        formatted_text = (char *)0x0;
        dest = dest + 1;
      }
      src = formatted_text;
      pcVar1 = dest;
      do {
        format_ch = *src;
        *pcVar1 = format_ch;
        end_scan = formatted_text;
        src = src + 1;
        pcVar1 = pcVar1 + 1;
      } while (format_ch != '\0');
      do {
        src = end_scan + 1;
        format_ch = *end_scan;
        end_scan = src;
      } while (format_ch != '\0');
      format = format_scan + 2;
      dest = dest + ~((int)formatted_text - (int)src);
    }
    else {
      *dest = *format;
      format = format + 1;
      dest = dest + 1;
    }
  }
  *dest = '\0';
  return;
}




/* ============================================================
 * 00007500 PrintfTilesBanked
 * ============================================================ */


uint PrintfTilesBanked(int layer,int tile_x,int tile_y,uchar palette,int glyph_set,char *format,...)

{
  char *next;
  char text_buffer [140];
  char *scan;
  char ch;
  
  FormatStringLimited(text_buffer,format,(uint *)&stack0x0000001c);
  DrawStringTiles(layer,tile_x,tile_y,palette,glyph_set,text_buffer);
  scan = text_buffer;
  do {
    next = scan + 1;
    ch = *scan;
    scan = next;
  } while (ch != '\0');
  return ~((int)text_buffer - (int)next);
}




/* ============================================================
 * 0000754a PrintfTextLayer
 * ============================================================ */


uint PrintfTextLayer(int tile_x,int tile_y,char *format,...)

{
  char *next;
  char text_buffer [140];
  char *scan;
  char ch;
  
  FormatStringLimited(text_buffer,format,(uint *)&stack0x00000010);
  DrawStringTiles(0,tile_x,tile_y,'\0',0,text_buffer);
  scan = text_buffer;
  do {
    next = scan + 1;
    ch = *scan;
    scan = next;
  } while (ch != '\0');
  return ~((int)text_buffer - (int)next);
}




/* ============================================================
 * 0000758e PrintfTextLayerWithWidth
 * ============================================================ */


uint PrintfTextLayerWithWidth
               (ushort *tile_buffer,int layer,int tile_x,int tile_y,uchar palette,int glyph_set,
               char *format,...)

{
  char *next;
  char text_buffer [140];
  char *scan;
  char ch;
  
  FormatStringLimited(text_buffer,format,(uint *)&stack0x00000020);
  DrawStringTilesWrapped(tile_buffer,layer,tile_x,tile_y,palette,glyph_set,text_buffer);
  scan = text_buffer;
  do {
    next = scan + 1;
    ch = *scan;
    scan = next;
  } while (ch != '\0');
  return ~((int)text_buffer - (int)next);
}




/* ============================================================
 * 000075dc SetTextDrawPage
 * ============================================================ */


void SetTextDrawPage(byte param_1)

{
  text_format_decimal_width = param_1;
  return;
}




/* ============================================================
 * 000075e6 SetTextDrawPalette
 * ============================================================ */


void SetTextDrawPalette(byte param_1)

{
  text_format_hex_width = param_1;
  return;
}




/* ============================================================
 * 000075f0 SetTextDrawPriority
 * ============================================================ */


void SetTextDrawPriority(byte param_1)

{
  text_format_binary_width = param_1;
  return;
}




/* ============================================================
 * 000075fa FormatNumberForTextLayer
 * ============================================================ */


char * FormatNumberForTextLayer(uint value,char *dest,int base)

{
  int copy_count;
  uint width;
  char *dst;
  char *next;
  char *src;
  byte value_00;
  char padded_buffer [34];
  char ch;
  
  UnsignedToAsciiBase(value,dest,base);
  if (base == 2) {
    width = (uint)text_format_binary_width;
  }
  else if (base == 10) {
    width = (uint)text_format_decimal_width;
  }
  else if (base == 0x10) {
    width = (uint)text_format_hex_width;
  }
  else {
    width = 0;
  }
  src = dest;
  if (width != 0) {
    do {
      dst = src + 1;
      ch = *src;
      src = dst;
    } while (ch != '\0');
    if (base == 10) {
      value_00 = 0x20;
    }
    else {
      value_00 = 0x30;
    }
    MemsetBytes(padded_buffer,value_00,0x21);
    src = dest;
    do {
      next = src + 1;
      ch = *src;
      src = next;
    } while (ch != '\0');
    copy_count = ~((int)dest - (int)next) + 1;
    src = dest;
    dst = padded_buffer + (width - ~((int)dest - (int)dst));
    while (0 < copy_count) {
      *dst = *src;
      copy_count = copy_count + -1;
      src = src + 1;
      dst = dst + 1;
    }
    copy_count = width + 1;
    src = padded_buffer;
    dst = dest;
    while (0 < copy_count) {
      *dst = *src;
      copy_count = copy_count + -1;
      src = src + 1;
      dst = dst + 1;
    }
  }
  return dest;
}




/* ============================================================
 * 000076ca FormatHexWordToTextBuffer
 * ============================================================ */


void FormatHexWordToTextBuffer(undefined4 param_1)

{
  FormatNumberForTextLayer(param_1,text_number_format_buffer,0x10);
  return;
}




/* ============================================================
 * 000076e4 FormatDecimalWordToTextBuffer
 * ============================================================ */


void FormatDecimalWordToTextBuffer(undefined4 param_1)

{
  FormatNumberForTextLayer(param_1,text_number_format_buffer,10);
  return;
}




/* ============================================================
 * 000076fe FormatBinaryWordToTextBuffer
 * ============================================================ */


void FormatBinaryWordToTextBuffer(undefined4 param_1)

{
  FormatNumberForTextLayer(param_1,text_number_format_buffer,2);
  return;
}




/* ============================================================
 * 00007718 FormatHexWordToBuffer
 * ============================================================ */


void FormatHexWordToBuffer(undefined4 param_1,char *param_2)

{
  FormatNumberForTextLayer(param_1,param_2,0x10);
  return;
}




/* ============================================================
 * 00007730 FormatDecimalWordToBuffer
 * ============================================================ */


void FormatDecimalWordToBuffer(undefined4 param_1,char *param_2)

{
  FormatNumberForTextLayer(param_1,param_2,10);
  return;
}




/* ============================================================
 * 00007748 FormatBinaryWordToBuffer
 * ============================================================ */


void FormatBinaryWordToBuffer(undefined4 param_1,char *param_2)

{
  FormatNumberForTextLayer(param_1,param_2,2);
  return;
}




/* ============================================================
 * 00007760 MultiplyImageTileOffset
 * ============================================================ */


uint MultiplyImageTileOffset(PgmImageDescriptor *image,int picture_index)

{
  uint uVar1;
  
  uVar1 = MulUnsigned32((uint)(ushort)image->pPicture_table[picture_index].wWidth_tiles,
                        (uint)(ushort)image->pPicture_table[picture_index].wHeight_tiles);
  return uVar1;
}




/* ============================================================
 * 00007786 GetMaxImagePictureTileCount
 * ============================================================ */


uint GetMaxImagePictureTileCount(PgmImageDescriptor *image)

{
  uint uVar1;
  uint uVar2;
  int picture_index;
  
  uVar2 = 0;
  for (picture_index = 0; picture_index < (int)(uint)(ushort)image->wTotal_pictures;
      picture_index = picture_index + 1) {
    uVar1 = MultiplyImageTileOffset(image,picture_index);
    if ((int)uVar2 <= (int)uVar1) {
      uVar2 = uVar1;
    }
  }
  return uVar2;
}




/* ============================================================
 * 000077ba DrawPictureTilesWithAttributes
 * ============================================================ */


void DrawPictureTilesWithAttributes
               (int layer,int tile_x,int tile_y,PgmImageDescriptor *image,int picture_index,
               uint hflip,uchar palette,short tile_offset)

{
  uint *row_dst;
  uint *dst;
  ushort remaining_cols;
  int row_stride_bytes;
  short remaining_rows;
  uint *backfill_dst;
  byte *attr_src;
  short *tile_src;
  undefined4 tile_word;
  PgmImagePicture *picture;
  ushort picture_width_tiles;
  
  if ((picture_index < 0) || ((int)(uint)(ushort)image->wTotal_pictures <= picture_index)) {
    AssertFailScreen("n>=0 && n<img->totpic","cimage.c",0x2f);
  }
  if (layer == 0) {
    row_stride_bytes = 0x100;
    row_dst = (uint *)(&pgm_text_tilemap + (tile_x + tile_y * 0x40) * 4);
  }
  else if (layer == 1) {
    row_stride_bytes = 0x100;
    row_dst = (uint *)(&pgm_video_ram + (tile_x + tile_y * 0x40) * 4);
  }
  picture = image->pPicture_table + picture_index;
  picture_width_tiles = picture->wWidth_tiles;
  remaining_rows = picture->wHeight_tiles;
  attr_src = picture->attribute_xor_data;
  tile_src = (short *)picture->tile_index_data;
  tile_word = tile_word & 0xffffffc1;
  tile_word = CONCAT31(tile_word._0_3_,
                       (byte)((hflip & 1) << 6) | (palette & 0x1f) * '\x02' | (byte)tile_word & 0xbf
                      ) & 0xffffff7f;
  if (hflip == 0) {
    if (attr_src == (byte *)0x0) {
      while (dst = row_dst, remaining_cols = picture_width_tiles, remaining_rows != 0) {
        while (remaining_cols != 0) {
          tile_word = CONCAT22(tile_offset + *tile_src,tile_word._2_2_);
          *dst = tile_word;
          dst = dst + 1;
          tile_src = tile_src + 1;
          remaining_cols = remaining_cols - 1;
        }
        row_dst = (uint *)(row_stride_bytes + (int)row_dst);
        remaining_rows = remaining_rows + -1;
      }
    }
    else {
      while (dst = row_dst, remaining_cols = picture_width_tiles, remaining_rows != 0) {
        while (remaining_cols != 0) {
          tile_word = CONCAT22(tile_offset + *tile_src,tile_word._2_2_);
          *dst = tile_word;
          *(ushort *)((int)dst + 2) = (ushort)*attr_src ^ *(ushort *)((int)dst + 2);
          dst = dst + 1;
          attr_src = attr_src + 1;
          tile_src = tile_src + 1;
          remaining_cols = remaining_cols - 1;
        }
        row_dst = (uint *)(row_stride_bytes + (int)row_dst);
        remaining_rows = remaining_rows + -1;
      }
    }
  }
  else if (attr_src == (byte *)0x0) {
    dst = row_dst + picture_width_tiles;
    while (backfill_dst = dst, remaining_cols = picture_width_tiles, remaining_rows != 0) {
      while (remaining_cols != 0) {
        tile_word = CONCAT22(tile_offset + *tile_src,tile_word._2_2_);
        backfill_dst[-1] = tile_word;
        backfill_dst = backfill_dst + -1;
        tile_src = tile_src + 1;
        remaining_cols = remaining_cols - 1;
      }
      dst = (uint *)(row_stride_bytes + (int)dst);
      remaining_rows = remaining_rows + -1;
    }
  }
  else {
    dst = row_dst + picture_width_tiles;
    while (backfill_dst = dst, remaining_cols = picture_width_tiles, remaining_rows != 0) {
      while (remaining_cols != 0) {
        tile_word = CONCAT22(tile_offset + *tile_src,tile_word._2_2_);
        backfill_dst[-1] = tile_word;
        *(ushort *)((int)backfill_dst + -2) =
             (ushort)*attr_src ^ *(ushort *)((int)backfill_dst + -2);
        backfill_dst = backfill_dst + -1;
        attr_src = attr_src + 1;
        tile_src = tile_src + 1;
        remaining_cols = remaining_cols - 1;
      }
      dst = (uint *)(row_stride_bytes + (int)dst);
      remaining_rows = remaining_rows + -1;
    }
  }
  return;
}




/* ============================================================
 * 00007966 BlitImageToTilemap
 * ============================================================ */


void BlitImageToTilemap(int layer,int tile_x,int tile_y,PgmImageDescriptor *image,int picture_index,
                       uint hflip,uchar palette,short tile_offset,int src_tile_x,int src_tile_y,
                       uint width_tiles,int height_tiles)

{
  ushort uVar1;
  uint *row_dst;
  uint *dst;
  ushort remaining_width;
  uint remaining_cols;
  short row_or_col_count;
  int row_stride_bytes;
  uint *backfill_dst;
  short *tile_src;
  byte *attr_src;
  undefined4 tile_word;
  PgmImagePicture *picture;
  
  if ((picture_index < 0) || ((int)(uint)(ushort)image->wTotal_pictures <= picture_index)) {
    AssertFailScreen("n>=0 && n<img->totpic","cimage.c",0xa1);
  }
  if (layer == 0) {
    row_stride_bytes = 0x100;
    row_dst = (uint *)(&pgm_text_tilemap + (tile_x + tile_y * 0x40) * 4);
  }
  else if (layer == 1) {
    row_stride_bytes = 0x100;
    row_dst = (uint *)(&pgm_video_ram + (tile_x + tile_y * 0x40) * 4);
  }
  picture = image->pPicture_table + picture_index;
  uVar1 = picture->wWidth_tiles;
  row_or_col_count = picture->wHeight_tiles;
  remaining_cols = MulUnsigned32((uint)uVar1,src_tile_y);
  attr_src = picture->attribute_xor_data;
  tile_src = (short *)(picture->tile_index_data + (src_tile_x + remaining_cols) * 2);
  tile_word = tile_word & 0xffffffc1;
  tile_word = CONCAT31(tile_word._0_3_,
                       (byte)((hflip & 1) << 6) | (palette & 0x1f) * '\x02' | (byte)tile_word & 0xbf
                      ) & 0xffffff7f;
  if (hflip == 0) {
    if (attr_src == (byte *)0x0) {
      while (height_tiles != 0) {
        remaining_cols = width_tiles & 0xffff;
        dst = row_dst;
        while (row_or_col_count = (short)remaining_cols,
              remaining_cols = (uint)(ushort)(row_or_col_count - 1), row_or_col_count != 0) {
          tile_word = CONCAT22(tile_offset + *tile_src,tile_word._2_2_);
          *dst = tile_word;
          dst = dst + 1;
          tile_src = tile_src + 1;
        }
        row_dst = (uint *)(row_stride_bytes + (int)row_dst);
        tile_src = tile_src + (uVar1 - width_tiles);
        height_tiles = height_tiles + -1;
      }
    }
    else {
      while (height_tiles != 0) {
        remaining_cols = width_tiles & 0xffff;
        dst = row_dst;
        while (row_or_col_count = (short)remaining_cols,
              remaining_cols = (uint)(ushort)(row_or_col_count - 1), row_or_col_count != 0) {
          tile_word = CONCAT22(tile_offset + *tile_src,tile_word._2_2_);
          *dst = tile_word;
          *(ushort *)((int)dst + 2) = (ushort)*attr_src ^ *(ushort *)((int)dst + 2);
          dst = dst + 1;
          tile_src = tile_src + 1;
          attr_src = attr_src + 1;
        }
        row_dst = (uint *)(row_stride_bytes + (int)row_dst);
        tile_src = tile_src + (uVar1 - width_tiles);
        attr_src = attr_src + (uVar1 - width_tiles);
        height_tiles = height_tiles + -1;
      }
    }
  }
  else if (attr_src == (byte *)0x0) {
    dst = row_dst + width_tiles;
    while (height_tiles != 0) {
      remaining_cols = width_tiles & 0xffff;
      backfill_dst = dst;
      while (row_or_col_count = (short)remaining_cols,
            remaining_cols = (uint)(ushort)(row_or_col_count - 1), row_or_col_count != 0) {
        tile_word = CONCAT22(tile_offset + *tile_src,tile_word._2_2_);
        backfill_dst = backfill_dst + -1;
        *backfill_dst = tile_word;
        tile_src = tile_src + 1;
      }
      dst = (uint *)(row_stride_bytes + (int)dst);
      tile_src = tile_src + (uVar1 - width_tiles);
      height_tiles = height_tiles + -1;
    }
  }
  else {
    attr_src = attr_src + src_tile_x + remaining_cols;
    dst = row_dst + width_tiles;
    while (backfill_dst = dst, remaining_width = uVar1, row_or_col_count != 0) {
      while (remaining_width != 0) {
        tile_word = CONCAT22(tile_offset + *tile_src,tile_word._2_2_);
        backfill_dst[-1] = tile_word;
        *(ushort *)((int)backfill_dst + -2) =
             (ushort)*attr_src ^ *(ushort *)((int)backfill_dst + -2);
        backfill_dst = backfill_dst + -1;
        tile_src = tile_src + 1;
        attr_src = attr_src + 1;
        remaining_width = remaining_width - 1;
      }
      dst = (uint *)(row_stride_bytes + (int)dst);
      tile_src = tile_src + (uVar1 - width_tiles);
      attr_src = attr_src + (uVar1 - width_tiles);
      row_or_col_count = row_or_col_count + -1;
    }
  }
  return;
}




/* ============================================================
 * 00007b80 BlitImageTilesToLayer
 * ============================================================ */


void BlitImageTilesToLayer(int param_1,int param_2,short *param_3,short *param_4)

{
  short *psVar1;
  
  psVar1 = (short *)(*(int *)(param_1 + 4) + param_2 * 0x10);
  *param_3 = *psVar1 << 5;
  *param_4 = psVar1[1] << 5;
  return;
}




/* ============================================================
 * 00007ba8 BlitImageTilesToLayerWithClip
 * ============================================================ */


void BlitImageTilesToLayerWithClip
               (ushort *desc,ushort x,ushort y,PgmImageDescriptor *image,int picture_index,
               short hmirror,short vmirror,short attr_flag,int tile_offset,short x_zoom,short y_zoom
               ,char flip,short priority)

{
  int *picture_words;
  
  if ((picture_index < 0) || ((int)(uint)(ushort)image->wTotal_pictures <= picture_index)) {
    AssertFailScreen("n>=0 && n<img->totpic","cimage.c",0x122);
  }
  picture_words = (int *)(&image->pPicture_table->wWidth_tiles + picture_index * 5);
  *desc = x & 0x7ff | x_zoom << 0xb;
  desc[1] = y & 0x3ff | y_zoom << 0xb;
  *(int *)(desc + 2) = *picture_words + tile_offset;
  desc[2] = (priority << 7 | attr_flag << 8 | vmirror << 0xe | hmirror << 0xd) ^ desc[2];
  desc[4] = *(ushort *)(picture_words + 1);
  *(byte *)(desc + 4) = flip << 7 ^ *(byte *)(desc + 4);
  return;
}




/* ============================================================
 * 00007c62 ConfigureImageTileDescriptor
 * ============================================================ */


void ConfigureImageTileDescriptor
               (ushort *desc,ushort x,ushort y,PgmImageDescriptor *image,int picture_index,
               uint hmirror,uint vmirror,byte palette,int tile_offset,char x_zoom,char y_zoom,
               char flip,char priority)

{
  byte picture_attr_byte;
  uint picture_word0;
  ushort picture_word2;
  uint *picture_words;
  
  if ((picture_index < 0) || ((int)(uint)(ushort)image->wTotal_pictures <= picture_index)) {
    AssertFailScreen("n>=0 && n<img->totpic","cimage.c",0x132);
  }
  picture_words = (uint *)(&image->pPicture_table->wWidth_tiles + picture_index * 5);
  *desc = *desc & 0xf800;
  *desc = x & 0x7ff | *desc;
  desc[1] = desc[1] & 0xfc00;
  desc[1] = y & 0x3ff | desc[1];
  picture_attr_byte = *(byte *)picture_words;
  *(byte *)(desc + 2) = *(byte *)(desc + 2) & 0xdf;
  *(byte *)(desc + 2) =
       (byte)(((hmirror ^ (picture_attr_byte & 0x20) >> 5) & 1) << 5) | *(byte *)(desc + 2);
  picture_attr_byte = *(byte *)picture_words;
  *(byte *)(desc + 2) = *(byte *)(desc + 2) & 0xbf;
  *(byte *)(desc + 2) =
       (byte)(((vmirror ^ (picture_attr_byte & 0x40) >> 6) & 1) << 6) | *(byte *)(desc + 2);
  *(byte *)(desc + 2) = *(byte *)(desc + 2) & 0xe0;
  *(byte *)(desc + 2) = palette & 0x1f | *(byte *)(desc + 2);
  picture_attr_byte = *(byte *)(picture_words + 1);
  *(byte *)(desc + 4) = *(byte *)(desc + 4) & 0x81;
  *(byte *)(desc + 4) = (char)((picture_attr_byte & 0x7e) >> 1) * '\x02' | *(byte *)(desc + 4);
  picture_word2 = *(ushort *)(picture_words + 1);
  desc[4] = desc[4] & 0xfe00;
  desc[4] = picture_word2 & 0x1ff | desc[4];
  *(byte *)desc = *(byte *)desc & 7;
  *(byte *)desc = x_zoom << 3 | *(byte *)desc;
  *(byte *)(desc + 1) = *(byte *)(desc + 1) & 7;
  *(byte *)(desc + 1) = y_zoom << 3 | *(byte *)(desc + 1);
  *(byte *)(desc + 4) = *(byte *)(desc + 4) & 0x7f;
  *(byte *)(desc + 4) = flip << 7 | *(byte *)(desc + 4);
  picture_word0 = *picture_words;
  *(uint *)(desc + 2) = *(uint *)(desc + 2) & 0xff800000;
  *(uint *)(desc + 2) = tile_offset + (picture_word0 & 0x7fffff) & 0x7fffff | *(uint *)(desc + 2);
  *(byte *)((int)desc + 5) = *(byte *)((int)desc + 5) & 0x7f;
  *(byte *)((int)desc + 5) = priority << 7 | *(byte *)((int)desc + 5);
  return;
}




/* ============================================================
 * 00007dd2 SetImageDescriptorSize
 * ============================================================ */


void SetImageDescriptorSize(byte *packed_desc,char width_tiles,char height_tiles)

{
  *packed_desc = *packed_desc & 7;
  *packed_desc = width_tiles << 3 | *packed_desc;
  packed_desc[2] = packed_desc[2] & 7;
  packed_desc[2] = height_tiles << 3 | packed_desc[2];
  return;
}




/* ============================================================
 * 00007e00 SetImageDescriptorFlip
 * ============================================================ */


void SetImageDescriptorFlip(int param_1,char param_2)

{
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0x7f;
  *(byte *)(param_1 + 8) = param_2 << 7 | *(byte *)(param_1 + 8);
  return;
}




/* ============================================================
 * 00007e1c SetImageDescriptorMirrorFlags
 * ============================================================ */


void SetImageDescriptorMirrorFlags(byte *packed_desc,byte hflip,byte vflip)

{
  packed_desc[4] = packed_desc[4] & 0xdf;
  packed_desc[4] = (hflip & 1) << 5 | packed_desc[4];
  packed_desc[4] = packed_desc[4] & 0xbf;
  packed_desc[4] = (vflip & 1) << 6 | packed_desc[4];
  return;
}




/* ============================================================
 * 00007e4e SetImageDescriptorPosition
 * ============================================================ */


void SetImageDescriptorPosition(ushort *packed_desc,ushort x,ushort y)

{
  *packed_desc = *packed_desc & 0xf800;
  *packed_desc = x & 0x7ff | *packed_desc;
  packed_desc[1] = packed_desc[1] & 0xfc00;
  packed_desc[1] = y & 0x3ff | packed_desc[1];
  return;
}




/* ============================================================
 * 00007e78 GetImageDescriptorPosition
 * ============================================================ */


void GetImageDescriptorPosition(ushort *param_1,int *param_2,int *param_3)

{
  *param_2 = (int)((uint)*param_1 << 0x15) >> 0x15;
  *param_3 = (int)((uint)param_1[1] << 0x16) >> 0x16;
  return;
}




/* ============================================================
 * 00007ea0 OffsetImageDescriptorPosition
 * ============================================================ */


void OffsetImageDescriptorPosition(ushort *desc,short dx,short dy)

{
  ushort packed_coord;
  
  packed_coord = *desc;
  *desc = *desc & 0xf800;
  *desc = dx + (short)((int)((uint)packed_coord << 0x15) >> 0x15) & 0x7ffU | *desc;
  packed_coord = desc[1];
  desc[1] = desc[1] & 0xfc00;
  desc[1] = dy + (short)((int)((uint)packed_coord << 0x16) >> 0x16) & 0x3ffU | desc[1];
  return;
}




/* ============================================================
 * 00007ee0 SetImageDescriptorPriority
 * ============================================================ */


void SetImageDescriptorPriority(int param_1,char param_2)

{
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x7f;
  *(byte *)(param_1 + 5) = param_2 << 7 | *(byte *)(param_1 + 5);
  return;
}




/* ============================================================
 * 00007efc GetImageDescriptorPackedSize
 * ============================================================ */


void GetImageDescriptorPackedSize
               (PgmImageDescriptor *image,int picture_index,short *out_width_pixels,
               ushort *out_height_tiles)

{
  PgmImagePicture *picture_table;
  
  picture_table = image->pPicture_table;
  *out_width_pixels =
       (*(byte *)((int)&picture_table->tile_index_data + picture_index * 10) >> 1 & 0x3f) << 4;
  *out_height_tiles = *(ushort *)((int)&picture_table->tile_index_data + picture_index * 10) & 0x1ff
  ;
  return;
}




/* ============================================================
 * 00007f36 GetImageDescriptorWidthPixels
 * ============================================================ */


int GetImageDescriptorWidthPixels(int param_1,int param_2)

{
  return (*(byte *)(*(int *)(param_1 + 4) + param_2 * 10 + 4) >> 1 & 0x3f) << 4;
}




/* ============================================================
 * 00007f62 GetImageDescriptorHeightPixels
 * ============================================================ */


ushort GetImageDescriptorHeightPixels(int param_1,int param_2)

{
  return *(ushort *)(*(int *)(param_1 + 4) + param_2 * 10 + 4) & 0x1ff;
}




/* ============================================================
 * 00007f84 SetImageDescriptorPalette
 * ============================================================ */


void SetImageDescriptorPalette(int param_1,byte param_2)

{
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xe0;
  *(byte *)(param_1 + 4) = param_2 & 0x1f | *(byte *)(param_1 + 4);
  return;
}




/* ============================================================
 * 00007f9e CalcImageTileOffset
 * ============================================================ */


uint CalcImageTileOffset(int bank,uint byte_offset)

{
  uint uVar1;
  
  if ((bank < 0) || (2 < bank)) {
    AssertFailScreen("bank>=0 && bank<=MOVEBANK","cimage.c",0x189);
  }
  if (bank == 0) {
    uVar1 = byte_offset >> 5;
  }
  else if (bank == 1) {
    uVar1 = DivUnsigned32(byte_offset,0x280);
  }
  else {
    uVar1 = 2;
    if (bank == 2) {
      uVar1 = byte_offset >> 1;
    }
  }
  return uVar1;
}




/* ============================================================
 * 00008000 AssertFailScreen
 * ============================================================ */


void AssertFailScreen(char *expr,char *file,int line)

{
  EnterCriticalSection();
  LoadDefaultTextPalettes();
  PrintfTextLayer(4,2,"%s %u %s",file,line,expr);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}




/* ============================================================
 * 00008036 SetInterruptLevel
 * ============================================================ */


ushort SetInterruptLevel(uint param_1)

{
  int iVar1;
  
  iVar1 = param_1 << 8;
  return (ushort)iVar1 |
         (ushort)(byte)(((param_1 >> 0x18 & 1) != 0) * '\x10' | (iVar1 < 0) << 3 | (iVar1 == 0) << 2
                       );
}




/* ============================================================
 * 00008050 GetInterruptLevel
 * ============================================================ */


undefined4 GetInterruptLevel(void)

{
  return 0;
}




/* ============================================================
 * 00008062 EnableAllInterrupts
 * ============================================================ */


void EnableAllInterrupts(void)

{
  SetInterruptLevel(0);
  return;
}




/* ============================================================
 * 0000806c EnterCriticalSection
 * ============================================================ */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void EnterCriticalSection(void)

{
  _saved_interrupt_level = GetInterruptLevel();
  SetInterruptLevel(7);
  return;
}




/* ============================================================
 * 00008082 LeaveCriticalSection
 * ============================================================ */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void LeaveCriticalSection(void)

{
  SetInterruptLevel(_saved_interrupt_level);
  return;
}




/* ============================================================
 * 00008090 GetBiosFrameCounter
 * ============================================================ */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int GetBiosFrameCounter(void)

{
  return bios_frame_or_boot_counter;
}




/* ============================================================
 * 00008098 GetStartupFlag
 * ============================================================ */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int GetStartupFlag(void)

{
  return (uint)bios_disable_or_startup_flag;
}




/* ============================================================
 * 000080a2 ClearStartupFlag
 * ============================================================ */


void ClearStartupFlag(void)

{
  bios_disable_or_startup_flag = 0;
  return;
}




/* ============================================================
 * 000080aa SetCallbackPointer
 * ============================================================ */


void SetCallbackPointer(void *callback)

{
  bios_callback_pointer = callback;
  return;
}




/* ============================================================
 * 000080b4 ClearCallbackPointer
 * ============================================================ */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ClearCallbackPointer(void)

{
  bios_callback_pointer = (void *)0x0;
  return;
}




/* ============================================================
 * 000080bc UpdatePaletteAndSpritesOnce
 * ============================================================ */


undefined4 UpdatePaletteAndSpritesOnce(void)

{
  UpdatePaletteFadeSlotsThunk();
  FlushSpritesIfDirtyAndWait();
  return 0;
}




/* ============================================================
 * 000080cc InitBiosSubsystems
 * ============================================================ */


void InitBiosSubsystems(void)

{
  InitializeRtcHardware();
  InitVideoControlFlags();
  InitZoomAndBgScale();
  InitBiosHeap();
  InitFontBuffers();
  ClearCallbackPointer();
  ClearCoinCounters();
  ReadDipSwitchesInverted();
  InitDefaultSoundTables();
  InitSoundPollState();
  ClearIrqFlags();
  InitVblankState();
  InitInputKeyStates();
  InitTimerAndInputState();
  InitMemorySentinel();
  InitScrollRegisters();
  InitPaletteAllocators();
  InitTextDrawDefaults();
  InitSpriteListSystem();
  bios_intro_seen_flag = 0;
  bios_public_status_flags[0] = 0;
  bios_public_status_flags[1] = 0;
  bios_public_status_flags[2] = 0;
  bios_public_status_flags[3] = 0;
  EnableAllInterrupts();
  return;
}




/* ============================================================
 * 00008160 BusyWaitCountdown
 * ============================================================ */


void BusyWaitCountdown(int param_1)

{
  bool bVar1;
  
  do {
    bVar1 = param_1 != 0;
    param_1 = param_1 + -1;
  } while (bVar1);
  return;
}




/* ============================================================
 * 0000816e ResourceErrorScreen
 * ============================================================ */


int ResourceErrorScreen(char *message)

{
  LoadDefaultTextPalettes();
  PrintfTextLayer(10,10,"RESOURCE ERROR:%s",message);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}




/* ============================================================
 * 00008192 ResourceErrorDeadEpilogue
 * ============================================================ */


void ResourceErrorDeadEpilogue(void)

{
  return;
}




/* ============================================================
 * 00008196 ResourceErrorNoopReturn
 * ============================================================ */


void ResourceErrorNoopReturn(void)

{
  return;
}




/* ============================================================
 * 00008198 GetBiosStatusFlags
 * ============================================================ */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * GetBiosStatusFlags(void)

{
  return bios_public_status_flags;
}




/* ============================================================
 * 000081a0 HandleRuntimeTestAndStartInputs
 * ============================================================ */


void HandleRuntimeTestAndStartInputs(void)

{
  uint key_pressed;
  PgmInputKeyState *input_states;
  
  if (bios_intro_seen_flag != '\0') {
    key_pressed = ConsumeKeyPress(0x25);
    if ((key_pressed != 0) || (key_pressed = ConsumeKeyPress(0x2d), key_pressed != 0)) {
      force_test_menu_flag = 1;
      RestartBiosAfterReset();
    }
    input_states = GetInputStateBase();
    if (input_states[0x20].bShort_tap_latch != '\0') {
      input_states[0x20].bShort_tap_latch = 0;
      bios_public_status_flags[0] = bios_public_status_flags[0] + 1;
      EnterCriticalSection();
      InstallCartVectorsAndStart();
      EnableAllInterrupts();
    }
    if (input_states[0x21].bShort_tap_latch != '\0') {
      input_states[0x21].bShort_tap_latch = 0;
      bios_public_status_flags[1] = bios_public_status_flags[1] + 1;
      EnterCriticalSection();
      InstallCartVectorsAndStart();
      EnableAllInterrupts();
    }
    if (input_states[0x22].bShort_tap_latch != '\0') {
      input_states[0x22].bShort_tap_latch = 0;
      bios_public_status_flags[2] = bios_public_status_flags[2] + 1;
      EnterCriticalSection();
      InstallCartVectorsAndStart();
      EnableAllInterrupts();
    }
    if (input_states[0x23].bShort_tap_latch != '\0') {
      input_states[0x23].bShort_tap_latch = 0;
      bios_public_status_flags[3] = bios_public_status_flags[3] + 1;
      EnterCriticalSection();
      InstallCartVectorsAndStart();
      EnableAllInterrupts();
    }
    return;
  }
  return;
}




/* ============================================================
 * 00008260 SetDefaultRtcDate
 * ============================================================ */


void SetDefaultRtcDate(char *date_text,char *time_text)

{
  byte rtc_second;
  char rtc_minute;
  char rtc_hour;
  char rtc_day;
  char rtc_month;
  char rtc_year;
  
  rtc_second = (time_text[7] + time_text[6] * '\n') - 0x10;
  rtc_minute = time_text[4] + time_text[3] * '\n' + -0x10;
  rtc_hour = time_text[1] + *time_text * '\n' + -0x10;
  rtc_day = date_text[4] + date_text[3] * '\n' + -0x10;
  rtc_month = date_text[1] + *date_text * '\n' + -0x10;
  rtc_year = date_text[7] + date_text[6] * '\n' + -0x10;
  WriteRtcDateTime(&rtc_second);
  return;
}




/* ============================================================
 * 00008312 CheckAuditMagicStrings
 * ============================================================ */


undefined4 CheckAuditMagicStrings(void)

{
  int iVar1;
  
  iVar1 = CompareCString(audit_magic_1,"07/10/97");
  if ((iVar1 == 0) && (iVar1 = CompareCString(audit_magic_2,"16:36:08"), iVar1 == 0)) {
    return 0;
  }
  return 1;
}




/* ============================================================
 * 0000834a InitializeAuditMagicStrings
 * ============================================================ */


void InitializeAuditMagicStrings(void)

{
  char *pcVar1;
  char *pcVar2;
  char ch;
  
  pcVar1 = "07/10/97";
  pcVar2 = audit_magic_1;
  do {
    ch = *pcVar1;
    *pcVar2 = ch;
    pcVar1 = pcVar1 + 1;
    pcVar2 = pcVar2 + 1;
  } while (ch != '\0');
  pcVar1 = "16:36:08";
  pcVar2 = audit_magic_2;
  do {
    ch = *pcVar1;
    *pcVar2 = ch;
    pcVar1 = pcVar1 + 1;
    pcVar2 = pcVar2 + 1;
  } while (ch != '\0');
  InitAuditAndGameName();
  force_test_menu_flag = 0;
  bios_mode_flag = 0;
  bios_frame_or_boot_counter = 1;
  return;
}




/* ============================================================
 * 00008386 ForceTestModeFlag
 * ============================================================ */


void ForceTestModeFlag(void)

{
  force_test_menu_flag = 1;
  return;
}




/* ============================================================
 * 00008390 ForceTestModeNoopReturn
 * ============================================================ */


void ForceTestModeNoopReturn(void)

{
  return;
}




/* ============================================================
 * 00008392 SetFreePlayOrTestFlag
 * ============================================================ */


void SetFreePlayOrTestFlag(undefined4 param_1)

{
  bios_mode_flag = (undefined1)param_1;
  CallCartInitRoutine(4,param_1);
  return;
}




/* ============================================================
 * 000083ac BiosMainStartup
 * ============================================================ */


void BiosMainStartup(void)

{
  int result_or_delay;
  ushort dip_switches;
  uint key_pressed;
  
  LoadDefaultTextPalettes();
  LoadDefaultBgPalettes();
  InitBiosSubsystems();
  CheckCartHeaderValid();
  ClearVideoRamPalettesAndScale();
  LoadDefaultTextPalettes();
  ClearTextTilemap();
  ResetMainMenuSelection();
  if (please_power_off_required_flag != 0) {
    do {
      DrawStringTiles(0,8,0xb,'\x04',3,"PLEASE POWER OFF!");
      QueueZ80AudioCommand(0,3,200,0);
      WaitTimerOrCallback(0x1e,(void *)0x0);
      DrawStringTiles(0,8,0xb,'\x04',3,"                 ");
      WaitTimerOrCallback(0xf,(void *)0x0);
    } while( true );
  }
  result_or_delay = CheckAuditMagicStrings();
  if (result_or_delay != 0) {
    InitializeAuditMagicStrings();
  }
  result_or_delay = ValidateRtcDateTime();
  if (result_or_delay != 0) {
    SetDefaultRtcDate("07/10/97","16:36:08");
  }
  result_or_delay = 0;
  do {
    dip_switches = ReadDipSwitchesInverted();
    if ((dip_switches & 0x80) != 0) {
      key_pressed = IsKeyPressed(6);
      if (key_pressed != 0) {
        key_pressed = IsKeyPressed(7);
        if (key_pressed != 0) {
          force_test_menu_flag = '\0';
          bios_test_or_service_flag = 1;
          RunQcTestMenu();
        }
      }
    }
    dip_switches = ReadDipSwitchesInverted();
    if ((dip_switches & 0x80) != 0) {
      key_pressed = IsKeyPressed(7);
      if (key_pressed != 0) {
        key_pressed = IsKeyPressed(8);
        if (key_pressed != 0) {
          force_test_menu_flag = '\0';
          SetFreePlayOrTestFlag(1);
          SelectGameAuditRecord(&cart_game_name);
          goto LAB_000085b0;
        }
      }
    }
    result_or_delay = result_or_delay + 1;
  } while (result_or_delay < 100);
  bios_test_or_service_flag = 0;
  SetFreePlayOrTestFlag(0);
  if ((((byte)dipswitch_shadow & 1) == 0) && (force_test_menu_flag == '\0')) {
    bios_intro_seen_flag = 1;
    RunBiosIntroAttract();
    LoadDefaultTextPalettes();
    DrawRtcSetupScreen();
    WaitTimerOrCallback(0xb4,(void *)0x0);
  }
  bios_intro_seen_flag = 0;
  result_or_delay = IsCartHeaderValid();
  if (result_or_delay == 0) {
    force_test_menu_flag = 0;
    do {
      RunBiosMainMenu();
    } while( true );
  }
  result_or_delay = IsCartHeaderValid();
  if (result_or_delay != 0) {
    SelectGameAuditRecord(&cart_game_name);
  }
  if ((((byte)dipswitch_shadow & 1) != 0) || (force_test_menu_flag != '\0')) {
    force_test_menu_flag = '\0';
    RunBiosMainMenu();
  }
LAB_000085b0:
  EnterCriticalSection();
  InstallCartVectorsAndStart();
  EnableAllInterrupts();
  return;
}




/* ============================================================
 * 000085c2 DrawRtcSetupScreen
 * ============================================================ */


void DrawRtcSetupScreen(void)

{
  int year_base;
  byte rtc_second;
  byte rtc_minute;
  byte rtc_hour;
  byte rtc_day;
  byte rtc_month;
  byte rtc_year;
  
  DrawAuditGrid(0x10,9,rtc_setup_grid_col_widths,1,rtc_setup_grid_row_heights,2);
  ReadRtcDateTime(&rtc_second);
  if ((rtc_month == 0) || (0xc < rtc_month)) {
    rtc_month = 1;
    WriteRtcDateTime(&rtc_second);
  }
  if (rtc_year < 0x61) {
    year_base = 2000;
  }
  else {
    year_base = 0x76c;
  }
  PrintfTilesBanked(0,0x11,10,'\0',3,"%s-%02d-%4d",rtc_month_name_table_1based[rtc_month],
                    (uint)rtc_day,year_base + (uint)rtc_year);
  PrintfTilesBanked(0,0x14,0xd,'\0',3,"%02d:%02d:%02d",(uint)rtc_hour,(uint)rtc_minute,
                    (uint)rtc_second);
  last_rtc_second_displayed = rtc_second;
  return;
}




/* ============================================================
 * 000086b8 UpdateRtcDisplayIfChanged
 * ============================================================ */


void UpdateRtcDisplayIfChanged(void)

{
  int year_base;
  byte rtc_second;
  byte rtc_minute;
  byte rtc_hour;
  byte rtc_day;
  byte rtc_month;
  byte rtc_year;
  
  ReadRtcDateTime(&rtc_second);
  if ((rtc_month == 0) || (0xc < rtc_month)) {
    rtc_month = 1;
    WriteRtcDateTime(&rtc_second);
  }
  if (rtc_second != last_rtc_second_displayed) {
    if (rtc_year < 0x61) {
      year_base = 2000;
    }
    else {
      year_base = 0x76c;
    }
    DrawStringTiles(0,0xc,0x18,'\0',1,"DATE        TIME");
    PrintfTilesBanked(0,4,0x1a,'\0',1,"%s-%02d-%4d",rtc_month_name_table_1based[rtc_month],
                      (uint)rtc_day,year_base + (uint)rtc_year);
    PrintfTilesBanked(0,0x20,0x1a,'\0',1,"%02d:%02d:%02d",(uint)rtc_hour,(uint)rtc_minute,
                      (uint)rtc_second);
    last_rtc_second_displayed = rtc_second;
  }
  return;
}




/* ============================================================
 * 000087b8 RunMenuSelectionLoop
 * ============================================================ */


int RunMenuSelectionLoop(int tile_x,int tile_y,char **items,int item_count,int initial,int show_rtc)

{
  uint key_pressed;
  int current_selection;
  int next_selection;
  bool redraw_selection;
  
  redraw_selection = true;
  current_selection = initial;
  do {
    if (show_rtc != 0) {
      UpdateRtcDisplayIfChanged();
    }
    key_pressed = ConsumeKeyPress(3);
    if (key_pressed == 0) {
      key_pressed = ConsumeKeyPress(2);
      next_selection = current_selection;
      if (key_pressed != 0) {
        next_selection = item_count;
        if (0 < current_selection) {
          next_selection = current_selection;
        }
        redraw_selection = true;
        next_selection = next_selection + -1;
        initial = current_selection;
      }
    }
    else if (current_selection < item_count + -1) {
      redraw_selection = true;
      next_selection = current_selection + 1;
      initial = current_selection;
    }
    else {
      redraw_selection = true;
      next_selection = 0;
      initial = current_selection;
    }
    if (redraw_selection) {
      DrawStringTiles(0,tile_x + -3,tile_y + initial * 2,'\0',1," ");
      DrawStringTiles(0,tile_x + -3,tile_y + next_selection * 2,'\x03',1,"*");
      DrawStringTiles(0,tile_x,tile_y + initial * 2,'\0',1,items[initial]);
      DrawStringTiles(0,tile_x,tile_y + next_selection * 2,'\x03',1,items[next_selection]);
      QueueZ80AudioCommand(0,5,0xff,0);
      redraw_selection = false;
    }
    key_pressed = ConsumeKeyPress(6);
    current_selection = next_selection;
  } while (key_pressed == 0);
  QueueZ80AudioCommand(0,2,0xff,0);
  return next_selection;
}




/* ============================================================
 * 0000890e CheckBiosMenuEnabledStub
 * ============================================================ */


undefined4 CheckBiosMenuEnabledStub(void)

{
  return 1;
}




/* ============================================================
 * 00008912 TestMemoryRangePattern
 * ============================================================ */


ushort * TestMemoryRangePattern(ushort *start,int byte_count,int word_mode)

{
  ushort saved_word;
  int remaining_words;
  
  byte_count = byte_count >> 1;
  do {
    while( true ) {
      remaining_words = byte_count + -1;
      if (byte_count == 0) {
        return (ushort *)0x0;
      }
      byte_count = remaining_words;
      if (((start != &saved_word) && ((ushort **)start != &start)) &&
         ((ushort **)(start + -1) != &start)) break;
      start = start + 1;
    }
    saved_word = *start;
    *start = 0;
    if (word_mode == 0) {
      if ((*start & 0xff) != 0) {
        PrintfTilesBanked(0,1,0x14,'\x03',1,"%08b","1,%4X",*start);
        *start = saved_word;
        return start;
      }
    }
    else if (*start != 0) {
      *start = saved_word;
      return start;
    }
    if (word_mode == 0) {
      *start = 0xaa;
      if ((char)*start != -0x56) {
        PrintfTilesBanked(0,1,0x14,'\x03',1,"%08b","2,%4X",*start);
        *start = saved_word;
        return start;
      }
      *start = 0x55;
      if ((char)*start != 'U') {
        PrintfTilesBanked(0,1,0x14,'\x03',1,"%08b","3,%4X",*start);
        *start = saved_word;
        return start;
      }
    }
    else {
      *start = 0x55aa;
      if (*start != 0x55aa) {
        *start = saved_word;
        return start;
      }
    }
    *start = 0xffff;
    if (word_mode == 0) {
      if ((char)*start != -1) {
        PrintfTilesBanked(0,1,0x14,'\x03',1,"%08b","4,%4X",*start);
        *start = saved_word;
        return start;
      }
    }
    else if (*start != 0xffff) {
      *start = saved_word;
      return start;
    }
    *start = saved_word;
    start = start + 1;
  } while( true );
}




/* ============================================================
 * 00008b46 RunRamTestPage
 * ============================================================ */


undefined4 RunRamTestPage(void)

{
  ushort *bad_address;
  int test_index;
  PgmRamTestDescriptor *test;
  int tile_x;
  char *format;
  undefined *label;
  
  ClearTextTilemap();
  DrawStringTiles(0,0x12,1,'\x03',1,"RAM TEST");
  DrawEmptyGridCells(8,2,0x28);
  test_index = 0;
  test = ram_test_descriptor_table;
  do {
    if (5 < test_index) {
      if (bios_test_or_service_flag == '\0') {
        test_index = 6;
      }
      else {
        test_index = 1;
      }
      WaitForKeyOrCallback(test_index);
      return 0;
    }
    if (bios_test_or_service_flag == '\0') {
      if (test_index != 0) {
        label = test->service_mode_label;
        format = "%s";
        tile_x = 0xc;
        goto LAB_00008bdc;
      }
    }
    else {
      label = test->test_mode_label;
      format = "%s";
      tile_x = 2;
LAB_00008bdc:
      PrintfTilesBanked(0,tile_x,test_index * 2 + 5,'\x03',1,format,label);
      EnterCriticalSection();
      bad_address = TestMemoryRangePattern
                              ((ushort *)test->dwStart_address,test->dwByte_length,
                               test->dwWord_access);
      EnableAllInterrupts();
      if (bad_address != (ushort *)0x0) {
        PrintfTilesBanked(0,0xe,test_index * 2 + 6,'\0',1,"ERROR %08X",bad_address);
        WaitForKeyOrCallback(1);
        return 1;
      }
      if (bios_test_or_service_flag == '\0') {
        PrintfTilesBanked(0,0x26,test_index * 2 + 5,'\x03',1,"OK");
      }
      else {
        PrintfTilesBanked(0,0x2e,test_index * 2 + 5,'\x03',1,"OK");
      }
    }
    test_index = test_index + 1;
    test = test + 1;
  } while( true );
}




/* ============================================================
 * 00008cca DrawIoTestButtonLabel
 * ============================================================ */


void DrawIoTestButtonLabel
               (int origin_x,int origin_y,int player_index,int button_index,uchar palette)

{
  int iVar1;
  int iVar2;
  
  if (player_index == 0) {
    iVar2 = origin_x + 2;
    iVar1 = origin_y + 2;
  }
  else if (player_index == 1) {
    iVar2 = origin_x + 0x1d;
    iVar1 = origin_y + 2;
  }
  else {
    if (player_index == 2) {
      iVar2 = origin_x + 2;
    }
    else {
      iVar2 = origin_x + 0x1d;
    }
    iVar1 = origin_y + 0xc;
  }
  DrawStringTiles(0,iVar2 + (uint)(byte)io_test_button_layout_table[button_index].bX,
                  iVar1 + (uint)(byte)io_test_button_layout_table[button_index].bY,palette,0,
                  io_test_button_layout_table[button_index].label);
  return;
}




/* ============================================================
 * 00008d5a DrawIoTestJoystickGraphics
 * ============================================================ */


void DrawIoTestJoystickGraphics(int origin_x,int origin_y)

{
  uint tile_offset;
  int i;
  int joy_y;
  int joy_x;
  int player;
  int height_tiles;
  int src_tile_x;
  int src_tile_y;
  uint width_tiles;
  
  player = 0;
  do {
    if (player == 0) {
      joy_x = origin_x + 6;
      joy_y = origin_y + 3;
    }
    else if (player == 1) {
      joy_x = origin_x + 0x21;
      joy_y = origin_y + 3;
    }
    else {
      if (player == 2) {
        joy_x = origin_x + 6;
      }
      else {
        joy_x = origin_x + 0x21;
      }
      joy_y = origin_y + 0xd;
    }
    i = 0;
    do {
      height_tiles = 1;
      width_tiles = 1;
      src_tile_y = 0;
      src_tile_x = 1;
      tile_offset = CalcImageTileOffset(0,0x500);
      BlitImageToTilemap(0,joy_x + 2,i + joy_y,&menu_arrow_image_descriptor,1,0,'\x06',
                         (short)tile_offset,src_tile_x,src_tile_y,width_tiles,height_tiles);
      i = i + 1;
    } while (i < 5);
    i = 0;
    do {
      height_tiles = 1;
      width_tiles = 1;
      src_tile_y = 0;
      src_tile_x = 0;
      tile_offset = CalcImageTileOffset(0,0x500);
      BlitImageToTilemap(0,i + joy_x,joy_y + 2,&menu_arrow_image_descriptor,1,0,'\x06',
                         (short)tile_offset,src_tile_x,src_tile_y,width_tiles,height_tiles);
      i = i + 1;
    } while (i < 5);
    src_tile_y = 1;
    width_tiles = 1;
    src_tile_x = 1;
    i = 1;
    tile_offset = CalcImageTileOffset(0,0x500);
    BlitImageToTilemap(0,joy_x + 2,joy_y + 2,&menu_arrow_image_descriptor,0,0,'\x06',
                       (short)tile_offset,i,src_tile_x,width_tiles,src_tile_y);
    player = player + 1;
  } while (player < 4);
  return;
}




/* ============================================================
 * 00008e94 RunIoTestPage
 * ============================================================ */


undefined4 RunIoTestPage(void)

{
  ushort dip_bits;
  int player_row;
  uint key_pressed;
  int button_col;
  ushort last_dip_bits;
  byte *keycode_ptr;
  uchar palette;
  undefined1 unused_key_scratch [48];
  undefined4 initial_state;
  char key_latched [48];
  
  last_dip_bits = 0x55aa;
  initial_state = 1;
  ClearTextTilemap();
  LoadDefaultTextPalettes();
  CopyPaletteChunk(0,6,(undefined4 *)menu_arrow_palette_words);
  DrawAuditGrid(0,1,io_test_player12_grid_col_widths,3,io_test_player12_grid_row_heights,1);
  DrawAuditGrid(0,6,io_test_player34_grid_col_widths,2,io_test_player34_grid_row_heights,2);
  DrawIoTestJoystickGraphics(0,6);
  player_row = 0;
  do {
    unused_key_scratch[(short)player_row] = 0;
    key_latched[(short)player_row] = '\0';
    player_row = player_row + 1;
  } while (player_row < 0x30);
  DrawStringTiles(0,0xf,0,'\x03',1,"I/O TEST");
  DrawStringTiles(0,4,2,'\x03',1,"1P&2P");
  DrawStringTiles(0,0x1b,2,'\x03',1,"3P&4P");
  DrawEmptyGridCells(4,1,0x10);
  DrawStringTiles(0,0x2c,2,'\x01',0," DIPSW");
  DrawStringTiles(0,0x2c,3,'\x01',0,"12345678");
  DrawStringTiles(0,0xf,0x1b,'\x01',0,"EXIT:PRESS A+B BUTTON");
  DrawStringTiles(0,0xc,7,'\x03',1,"1P");
  DrawStringTiles(0,0x27,7,'\x03',1,"2P");
  DrawStringTiles(0,0xc,0x11,'\x03',1,"3P");
  DrawStringTiles(0,0x27,0x11,'\x03',1,"4P");
  do {
    dip_bits = ReadDipSwitchesInverted();
    dip_bits = dip_bits & 0xff;
    if (last_dip_bits != dip_bits) {
      last_dip_bits = 0;
      for (key_pressed = 0; (int)key_pressed < 8; key_pressed = key_pressed + 1) {
        last_dip_bits =
             ((ushort)((int)(uint)dip_bits >> (key_pressed & 0x3f)) & 1) <<
             (7U - (short)key_pressed & 0x3f) | last_dip_bits;
      }
      PrintfTilesBanked(0,0x2c,4,'\x04',0,"%08b",(uint)last_dip_bits);
      last_dip_bits = dip_bits;
    }
    player_row = 0;
    do {
      keycode_ptr = io_test_keycode_grid + player_row * 10;
      for (button_col = 0; button_col < 10; button_col = button_col + 1) {
        key_pressed = IsKeyPressed((uint)*keycode_ptr);
        if (key_pressed == 0) {
          key_latched[(short)(ushort)*keycode_ptr] = '\0';
          palette = '\x04';
LAB_0000913a:
          DrawIoTestButtonLabel(0,6,player_row,button_col,palette);
        }
        else if (key_latched[(short)(ushort)*keycode_ptr] == '\0') {
          QueueZ80AudioCommand(4,5,0xfa,0);
          key_latched[(short)(ushort)*keycode_ptr] = '\x01';
          palette = '\0';
          goto LAB_0000913a;
        }
        keycode_ptr = keycode_ptr + 1;
      }
      player_row = player_row + 1;
    } while (player_row < 4);
    key_pressed = IsKeyPressed(0x25);
    if (key_pressed == 0) {
      key_latched[0x25] = '\0';
      DrawStringTiles(0,2,4,'\x04',0,"TEST-KEY");
    }
    else if (key_latched[0x25] == '\0') {
      key_latched[0x25] = '\x01';
      DrawStringTiles(0,2,4,'\0',0,"TEST-KEY");
      QueueZ80AudioCommand(4,5,0xfa,0);
    }
    key_pressed = IsKeyPressed(0x26);
    if (key_pressed == 0) {
      key_latched[0x26] = '\0';
      DrawStringTiles(0,0xd,4,'\x04',0,"SERVICE");
    }
    else if (key_latched[0x26] == '\0') {
      key_latched[0x26] = '\x01';
      DrawStringTiles(0,0xd,4,'\0',0,"SERVICE");
      QueueZ80AudioCommand(4,5,0xfa,0);
    }
    key_pressed = IsKeyPressed(0x27);
    if (key_pressed == 0) {
      key_latched[0x27] = '\0';
      DrawStringTiles(0,0x17,4,'\x04',0,"TEST-KEY");
    }
    else if (key_latched[0x27] == '\0') {
      key_latched[0x27] = '\x01';
      DrawStringTiles(0,0x17,4,'\0',0,"TEST-KEY");
      QueueZ80AudioCommand(4,5,0xfa,0);
    }
    key_pressed = IsKeyPressed(0x28);
    if (key_pressed == 0) {
      key_latched[0x28] = '\0';
      DrawStringTiles(0,0x22,4,'\x04',0,"SERVICE");
    }
    else if (key_latched[0x28] == '\0') {
      key_latched[0x28] = '\x01';
      DrawStringTiles(0,0x22,4,'\0',0,"SERVICE");
      QueueZ80AudioCommand(4,5,0xfa,0);
    }
    key_pressed = IsKeyPressed(0x2d);
    if (key_pressed == 0) {
      key_latched[0x2d] = '\0';
      DrawStringTiles(0,0xf,2,'\x04',0,"TEST");
    }
    else if (key_latched[0x2d] == '\0') {
      key_latched[0x2d] = '\x01';
      DrawStringTiles(0,0xf,2,'\0',0,"TEST");
      QueueZ80AudioCommand(4,5,0xfa,0);
    }
    key_pressed = ConsumeKeyPress(6);
    if (key_pressed != 0) {
      key_pressed = ConsumeKeyPress(7);
      if (key_pressed != 0) {
        return 0;
      }
    }
  } while( true );
}




/* ============================================================
 * 000093d4 ClearBiosMenuTilemap
 * ============================================================ */


undefined4 ClearBiosMenuTilemap(void)

{
  int slot;
  undefined4 uVar1;
  undefined4 uVar2;
  
  ClearVideoRamPalettesAndScale();
  SetScrollPair(0,0xffffffff,0);
  slot = 0;
  do {
    CopyPaletteChunk(0,slot,(undefined4 *)(color_pattern_palette_words + slot));
    DrawImageAtTilePosWithPalette(0,slot * 0xb,0,0xb,0x1c,(byte)slot);
    slot = slot + 1;
  } while (slot < 5);
  uVar2 = 0;
  uVar1 = 6;
  WaitForKeyOrCallback(6);
  LoadDefaultTextPalettes(uVar1,uVar2);
  CopyPaletteChunk(0,6,(undefined4 *)menu_arrow_palette_words);
  SetScrollPair(0,0,0);
  return 0;
}




/* ============================================================
 * 0000946e RunColorPatternTestPage
 * ============================================================ */


undefined4 RunColorPatternTestPage(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  ClearTextTilemap();
  uVar1 = CalcImageTileOffset(0,0x500);
  DrawPictureTilesWithAttributes(0,0,0,&color_pattern_image_descriptor,0,0,'\x06',(short)uVar1);
  CopyPaletteChunk(0,6,(undefined4 *)&color_pattern_palette_words_overlapping_grid_data);
  uVar3 = 0;
  uVar2 = 6;
  WaitForKeyOrCallback(6);
  LoadDefaultTextPalettes(uVar2,uVar3);
  CopyPaletteChunk(0,6,(undefined4 *)menu_arrow_palette_words);
  return 0;
}




/* ============================================================
 * 000094e0 ToggleBiosMenuSound
 * ============================================================ */


undefined4 ToggleBiosMenuSound(void)

{
  bios_menu_sound_enabled = bios_menu_sound_enabled ^ 1;
  if (bios_menu_sound_enabled == 0) {
    QueueZ80CmdNoParam(0x14,0);
  }
  else {
    QueueZ80CmdBytes(0x10,2,0xff);
  }
  return 0;
}




/* ============================================================
 * 0000951a PlayBiosMenuConfirmSound
 * ============================================================ */


undefined4 PlayBiosMenuConfirmSound(void)

{
  QueueZ80AudioCommand(4,0x30,0xff,0);
  return 0;
}




/* ============================================================
 * 00009536 RunSoundTestMenu
 * ============================================================ */


undefined4 RunSoundTestMenu(void)

{
  int initial;
  int iVar1;
  
  initial = 0;
  bios_menu_sound_enabled = 0;
  do {
    ClearTextTilemap();
    DrawStringTiles(0,0x10,1,'\x03',1,"SOUND TEST ");
    DrawEmptyGridCells(8,2,0x28);
    for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
      DrawStringTiles(0,0x10,iVar1 * 2 + 6,'\0',1,
                      *(char **)((int)sound_test_menu_labels + (int)(short)((short)iVar1 << 2)));
    }
    initial = RunMenuSelectionLoop(0x10,6,sound_test_menu_labels,3,initial,0);
    if (initial == -1) break;
    iVar1 = (**(code **)((int)sound_test_menu_callbacks + (int)(short)((short)initial << 2)))();
  } while (iVar1 != 1);
  QueueZ80CmdNoParam(0x14,0);
  return 0;
}




/* ============================================================
 * 00009606 RunCounterTestMenu
 * ============================================================ */


undefined4 RunCounterTestMenu(void)

{
  int initial;
  int iVar1;
  
  initial = 0;
  ClearTextTilemap();
  DrawStringTiles(0,0x10,1,'\x03',1,"COUNTER TEST ");
  DrawEmptyGridCells(8,2,0x28);
  for (iVar1 = 0; iVar1 < 5; iVar1 = iVar1 + 1) {
    DrawStringTiles(0,0x10,iVar1 * 2 + 6,'\0',1,
                    *(char **)((int)counter_test_menu_labels + (int)(short)((short)iVar1 << 2)));
  }
  do {
    while( true ) {
      initial = RunMenuSelectionLoop(0x10,6,counter_test_menu_labels,5,initial,0);
      if (3 < initial) break;
      SetCoinCounterPulse(initial,1);
    }
    iVar1 = (**(code **)((int)counter_test_menu_callbacks + (int)(short)((short)initial << 2)))();
  } while (iVar1 != 1);
  return 0;
}




/* ============================================================
 * 000096d0 RunHardwareTestMenu
 * ============================================================ */


undefined4 RunHardwareTestMenu(void)

{
  int initial;
  int iVar1;
  
  initial = 0;
  while( true ) {
    ClearTextTilemap();
    DrawStringTiles(0,0xd,1,'\x03',1,"HARDWARE TEST");
    DrawEmptyGridCells(8,2,0x28);
    for (iVar1 = 0; iVar1 < 7; iVar1 = iVar1 + 1) {
      DrawStringTiles(0,0xd,iVar1 * 2 + 6,'\0',1,
                      *(char **)((int)hardware_test_menu_labels + (int)(short)((short)iVar1 << 2)));
    }
    initial = RunMenuSelectionLoop(0xd,6,hardware_test_menu_labels,7,initial,0);
    if (initial == -1) break;
    iVar1 = (**(code **)((int)hardware_test_menu_callbacks + (int)(short)((short)initial << 2)))();
    if (iVar1 == 1) {
      return 0;
    }
  }
  return 0;
}




/* ============================================================
 * 0000978c RunDipSwitchSettingPage
 * ============================================================ */


undefined4 RunDipSwitchSettingPage(void)

{
  ushort dip_bits;
  int row_y;
  uint dip_index_or_key;
  ushort last_dip_bits;
  undefined **state_text_table;
  uint dip_value;
  
  last_dip_bits = 0xffff;
  ClearTextTilemap();
  DrawStringTiles(0,0xc,3,'\x03',1,"DIP.SW SETTING");
  DrawEmptyGridCells(6,4,0x2a);
  DrawAuditGrid(1,6,dipswitch_grid_col_widths,10,dipswitch_grid_row_heights,6);
  row_y = 0;
  do {
    PrintfTilesBanked(0,row_y * 3 + 0x1c,7,'\x01',1,"%d",row_y + 1);
    row_y = row_y + 1;
  } while (row_y < 8);
  row_y = 0;
  do {
    DrawStringTiles(0,2,row_y * 2 + 9,'\x01',1,
                    *(char **)((int)dipswitch_setting_names + (int)(short)((short)row_y << 2)));
    row_y = row_y + 1;
  } while (row_y < 5);
  do {
    dip_bits = ReadDipSwitchesInverted();
    dip_bits = dip_bits & 0xff;
    if (dip_bits != last_dip_bits) {
      dip_index_or_key = 0;
      do {
        dip_value = (int)(uint)dip_bits >> (dip_index_or_key & 0x3f) & 1;
        row_y = dip_index_or_key * 2 + 9;
        PrintfTilesBanked(0,dip_index_or_key * 3 + 0x1c,row_y,'\x01',1,"%d",dip_value);
        if (dip_value == 0) {
          state_text_table = dipswitch_off_text_table;
        }
        else {
          state_text_table = dipswitch_on_text_table;
        }
        DrawStringTiles(0,0x15,row_y,'\x01',1,
                        *(char **)((int)state_text_table +
                                  (int)(short)((short)dip_index_or_key << 2)));
        dip_index_or_key = dip_index_or_key + 1;
        last_dip_bits = dip_bits;
      } while ((int)dip_index_or_key < 5);
    }
    dip_index_or_key = ConsumeKeyPress(6);
  } while (dip_index_or_key == 0);
  return 0;
}




/* ============================================================
 * 00009920 BiosMenuNoopStub9920
 * ============================================================ */


undefined4 BiosMenuNoopStub9920(void)

{
  ClearTextTilemap();
  CallCartInitRoutine(1,0);
  return 0;
}




/* ============================================================
 * 00009938 RunCalendarSettingMenu
 * ============================================================ */


undefined4 RunCalendarSettingMenu(void)

{
  uint key_pressed;
  int timer_value_or_x;
  bool highlight_visible;
  byte *field_bounds;
  byte *selected_field_ptr;
  byte *month_lengths;
  byte *field_value_ptrs [5];
  int blink_count;
  int datetime_changed;
  undefined4 rtc_seconds_prefix;
  byte rtc_second;
  byte rtc_minute;
  byte rtc_hour;
  byte rtc_day;
  byte rtc_month;
  byte rtc_year_and_tail [3];
  uint arrow_width;
  char *blank_text;
  int blink_timer;
  bool field_changed;
  bool redraw_datetime;
  int selected_field;
  int year_base_or_arrow_height;
  
  field_changed = false;
  highlight_visible = false;
  rtc_seconds_prefix = 0;
  redraw_datetime = true;
  datetime_changed = 0;
  ClearTextTilemap();
  DrawStringTiles(0,0xd,3,'\x03',1,"CALENDAR SETTING");
  DrawEmptyGridCells(8,4,0x28);
  DrawStringTiles(0,10,0xb,'\0',1,"DATE        TIME");
  DrawStringTiles(0,10,0x16,'\x03',0,"        SELECT : JOYSTICK");
  DrawStringTiles(0,10,0x18,'\x03',0,"        ADJUST : JOYSTICK");
  DrawStringTiles(0,10,0x1a,'\x03',0,"CONFIRM & EXIT : PRESS [A] BUTTON");
  DrawStringTiles(0,0x22,0x1a,'\0',0,"A");
  year_base_or_arrow_height = 1;
  arrow_width = 1;
  blink_timer = 0;
  selected_field = 3;
  key_pressed = CalcImageTileOffset(0,0x500);
  BlitImageToTilemap(0,0x24,0x16,&menu_arrow_image_descriptor,2,0,'\0',(short)key_pressed,
                     selected_field,blink_timer,arrow_width,year_base_or_arrow_height);
  year_base_or_arrow_height = 1;
  arrow_width = 1;
  blink_timer = 0;
  selected_field = 1;
  key_pressed = CalcImageTileOffset(0,0x500);
  BlitImageToTilemap(0,0x26,0x16,&menu_arrow_image_descriptor,2,0,'\0',(short)key_pressed,
                     selected_field,blink_timer,arrow_width,year_base_or_arrow_height);
  year_base_or_arrow_height = 1;
  arrow_width = 1;
  blink_timer = 0;
  selected_field = 0;
  key_pressed = CalcImageTileOffset(0,0x500);
  BlitImageToTilemap(0,0x24,0x18,&menu_arrow_image_descriptor,2,0,'\0',(short)key_pressed,
                     selected_field,blink_timer,arrow_width,year_base_or_arrow_height);
  year_base_or_arrow_height = 1;
  arrow_width = 1;
  blink_timer = 0;
  selected_field = 2;
  key_pressed = CalcImageTileOffset(0,0x500);
  BlitImageToTilemap(0,0x26,0x18,&menu_arrow_image_descriptor,2,0,'\0',(short)key_pressed,
                     selected_field,blink_timer,arrow_width,year_base_or_arrow_height);
  selected_field_ptr = &rtc_month;
  field_value_ptrs[1] = &rtc_day;
  field_value_ptrs[2] = rtc_year_and_tail;
  field_value_ptrs[3] = &rtc_hour;
  field_value_ptrs[4] = &rtc_minute;
  selected_field = 0;
  field_bounds = calendar_setting_field_bounds;
  field_value_ptrs[0] = selected_field_ptr;
  ReadRtcDateTime(&rtc_second);
  if ((rtc_year_and_tail[0] & 3) == 0) {
    month_lengths = rtc_leap_year_month_lengths;
  }
  else {
    month_lengths = rtc_common_year_month_lengths;
  }
  blink_timer = AllocateTimer();
  SetTimerValue(blink_timer,0);
  do {
    key_pressed = ConsumeKeyPress(4);
    if (key_pressed == 0) {
      key_pressed = ConsumeKeyPress(5);
      if (key_pressed == 0) {
        key_pressed = IsKeyPressed(3);
        if (key_pressed == 0) {
          key_pressed = IsKeyPressed(2);
          if (key_pressed != 0) {
            if (selected_field == 1) {
              if (*selected_field_ptr == 1) {
                *selected_field_ptr = month_lengths[rtc_month - 1];
              }
              else {
LAB_00009cba:
                *selected_field_ptr = *selected_field_ptr - 1;
              }
            }
            else {
              if (*selected_field_ptr != *field_bounds) goto LAB_00009cba;
              *selected_field_ptr = field_bounds[1];
            }
            goto LAB_00009cbc;
          }
        }
        else {
          if (selected_field == 1) {
            if (month_lengths[rtc_month - 1] == *selected_field_ptr) {
              *selected_field_ptr = 1;
            }
            else {
LAB_00009c80:
              *selected_field_ptr = *selected_field_ptr + 1;
            }
          }
          else {
            if (*selected_field_ptr != field_bounds[1]) goto LAB_00009c80;
            *selected_field_ptr = *field_bounds;
          }
LAB_00009cbc:
          field_changed = true;
        }
      }
      else {
        if (selected_field == 4) {
          selected_field = 0;
        }
        else {
          selected_field = selected_field + 1;
        }
        selected_field_ptr =
             *(byte **)((int)field_value_ptrs + (int)(short)((short)selected_field << 2));
        field_bounds = calendar_setting_field_bounds + selected_field * 2;
        redraw_datetime = true;
        QueueZ80AudioCommand(4,2,200,0);
        WaitTimerOrCallback(0xe,(void *)0x0);
      }
    }
    else {
      if (selected_field == 0) {
        selected_field = 4;
      }
      else {
        selected_field = selected_field + -1;
      }
      selected_field_ptr =
           *(byte **)((int)field_value_ptrs + (int)(short)((short)selected_field << 2));
      field_bounds = calendar_setting_field_bounds + selected_field * 2;
      redraw_datetime = true;
      QueueZ80AudioCommand(4,2,200,0);
      WaitTimerOrCallback(0xe,(void *)0x0);
    }
    if (rtc_year_and_tail[0] < 0x61) {
      year_base_or_arrow_height = 2000;
    }
    else {
      year_base_or_arrow_height = 0x76c;
    }
    if (redraw_datetime) {
      PrintfTilesBanked(0,3,0xe,'\0',1,"%s-%02d-%4d",rtc_month_name_table_1based[rtc_month],
                        (uint)rtc_day,year_base_or_arrow_height + (uint)rtc_year_and_tail[0]);
      PrintfTilesBanked(0,0x22,0xe,'\0',1,"%02d:%02d",(uint)rtc_hour,(uint)rtc_minute);
      redraw_datetime = false;
    }
    if (field_changed) {
      datetime_changed = 1;
      if (selected_field == 2) {
        if ((rtc_year_and_tail[0] & 3) == 0) {
          month_lengths = rtc_leap_year_month_lengths;
        }
        else {
          month_lengths = rtc_common_year_month_lengths;
        }
      }
      if (month_lengths[rtc_month - 1] < rtc_day) {
        rtc_day = month_lengths[rtc_month - 1];
      }
      SetTimerValue(blink_timer,0);
      highlight_visible = false;
      QueueZ80AudioCommand(4,5,200,0);
      field_changed = false;
      WaitTimerOrCallback(0xe,(void *)0x0);
    }
    timer_value_or_x = GetTimerValue(blink_timer);
    if (timer_value_or_x == 0) {
      highlight_visible = (bool)(highlight_visible ^ 1);
      SetTimerValue(blink_timer,0xf);
      if (highlight_visible) {
        switch(selected_field) {
        case 0:
          PrintfTilesBanked(0,3,0xe,'\x03',1,"%s",rtc_month_name_table_1based[rtc_month]);
          break;
        case 1:
          PrintfTilesBanked(0,0xb,0xe,'\x03',1,"%02d",(uint)rtc_day);
          break;
        case 2:
          PrintfTilesBanked(0,0x11,0xe,'\x03',1,"%4d",
                            year_base_or_arrow_height + (uint)rtc_year_and_tail[0]);
          break;
        case 3:
          PrintfTilesBanked(0,0x22,0xe,'\x03',1,"%02d",(uint)rtc_hour);
          break;
        case 4:
          PrintfTilesBanked(0,0x28,0xe,'\x03',1,"%02d",(uint)rtc_minute);
        }
      }
      else {
        switch(selected_field) {
        case 0:
          blank_text = "   ";
          timer_value_or_x = 3;
          break;
        case 1:
          blank_text = "  ";
          timer_value_or_x = 0xb;
          break;
        case 2:
          blank_text = "    ";
          timer_value_or_x = 0x11;
          break;
        case 3:
          blank_text = "  ";
          timer_value_or_x = 0x22;
          break;
        case 4:
          blank_text = "  ";
          timer_value_or_x = 0x28;
          break;
        default:
          goto switchD_00009e00_default;
        }
        DrawStringTiles(0,timer_value_or_x,0xe,'\0',1,blank_text);
      }
    }
switchD_00009e00_default:
    key_pressed = ConsumeKeyPress(6);
    if (key_pressed != 0) {
      if (datetime_changed != 0) {
        PrintfTilesBanked(0,3,0xe,'\0',1,"%s-%02d-%4d",rtc_month_name_table_1based[rtc_month],
                          (uint)rtc_day,year_base_or_arrow_height + (uint)rtc_year_and_tail[0]);
        PrintfTilesBanked(0,0x22,0xe,'\0',1,"%02d:%02d",(uint)rtc_hour,(uint)rtc_minute);
        WriteRtcDateTime(&rtc_second);
        QueueZ80AudioCommand(4,6,0xff,0);
        for (blink_count = 0; blink_count < 4; blink_count = blink_count + 1) {
          DrawStringTiles(0,5,0x12,'\x03',1,"CALENDAR SETTING OK!");
          WaitTimerOrCallback(0x16,(void *)0x0);
          DrawStringTiles(0,5,0x12,'\x03',1,"                    ");
          WaitTimerOrCallback(6,(void *)0x0);
        }
      }
      FreeTimer(blink_timer);
      return 0;
    }
  } while( true );
}




/* ============================================================
 * 0000a0c8 ValidateRtcDateTime
 * ============================================================ */


undefined4 ValidateRtcDateTime(void)

{
  undefined4 invalid;
  byte *month_lengths;
  byte rtc_second;
  byte rtc_minute;
  byte rtc_hour;
  byte rtc_day;
  byte rtc_month;
  byte rtc_year;
  
  ReadRtcDateTime(&rtc_second);
  if ((rtc_month == 0) || (0xc < rtc_month)) {
    invalid = 1;
  }
  else {
    if ((rtc_year & 3) == 0) {
      month_lengths = rtc_leap_year_month_lengths;
    }
    else {
      month_lengths = rtc_common_year_month_lengths;
    }
    if ((rtc_day == 0) || (month_lengths[rtc_month - 1] < rtc_day)) {
      invalid = 1;
    }
    else if (rtc_hour < 0x18) {
      if (rtc_minute < 0x3c) {
        if (rtc_second < 0x3c) {
          invalid = 0;
        }
        else {
          invalid = 1;
        }
      }
      else {
        invalid = 1;
      }
    }
    else {
      invalid = 1;
    }
  }
  return invalid;
}




/* ============================================================
 * 0000a150 ValidateRtcLeapYear
 * ============================================================ */


void ValidateRtcLeapYear(void)

{
  uint uVar1;
  undefined **ppuVar2;
  
  EnterCriticalSection();
  ppuVar2 = ram_vector_table;
  for (uVar1 = 0x1400; uVar1 < 0x8000; uVar1 = uVar1 + 1) {
    *ppuVar2 = (undefined *)0xaaaaaaaa;
    ppuVar2 = ppuVar2 + 1;
  }
  please_power_off_required_flag = 1;
  RestartBiosAfterReset();
  return;
}




/* ============================================================
 * 0000a18e RunSystemResetMenu
 * ============================================================ */


undefined4 RunSystemResetMenu(void)

{
  uint key_pressed;
  int index_or_result;
  int selection;
  
  selection = 0;
LAB_0000a196:
  do {
    while( true ) {
      ClearTextTilemap();
      DrawStringTiles(0,0xf,3,'\x03',1,"SYSTEM RESET");
      DrawEmptyGridCells(8,4,0x28);
      for (index_or_result = 0; index_or_result < 2; index_or_result = index_or_result + 1) {
        DrawStringTiles(0,4,index_or_result * 2 + 10,'\0',1,
                        *(char **)((int)system_reset_menu_labels +
                                  (int)(short)((short)index_or_result << 2)));
      }
      selection = RunMenuSelectionLoop(4,10,system_reset_menu_labels,2,selection,0);
      if (selection == 0) break;
      index_or_result =
           (**(code **)((int)system_reset_menu_callbacks + (int)(short)((short)selection << 2)))();
      if (index_or_result == 1) {
        return 0;
      }
    }
    QueueZ80AudioCommand(4,6,0xff,0);
    DrawStringTiles(0,0x10,10,'\x03',1,":ARE YOU SURE ?(Y/N)");
    DrawStringTiles(0,10,0x16,'\x03',1,"YES:PRESS [A] BUTTON");
    DrawStringTiles(0,10,0x18,'\x03',1,"NO :PRESS OTHER BUTTONS");
    while (key_pressed = ConsumeKeyPress(6), key_pressed == 0) {
      key_pressed = ConsumeKeyPress(7);
      if ((((key_pressed != 0) || (key_pressed = ConsumeKeyPress(8), key_pressed != 0)) ||
          (key_pressed = ConsumeKeyPress(0x29), key_pressed != 0)) ||
         (((key_pressed = ConsumeKeyPress(2), key_pressed != 0 ||
           (key_pressed = ConsumeKeyPress(3), key_pressed != 0)) ||
          ((key_pressed = ConsumeKeyPress(4), key_pressed != 0 ||
           (key_pressed = ConsumeKeyPress(5), key_pressed != 0)))))) goto LAB_0000a196;
    }
    InitAuditAndGameName();
    index_or_result = 0;
    do {
      QueueZ80AudioCommand(4,5,200,0);
      DrawStringTiles(0,0xc,0x10,'\x03',1,"SYSTEM RESET OK!");
      WaitTimerOrCallback(0x16,(void *)0x0);
      DrawStringTiles(0,0xc,0x10,'\x03',1,"                ");
      WaitTimerOrCallback(6,(void *)0x0);
      index_or_result = index_or_result + 1;
    } while (index_or_result < 4);
    ValidateRtcLeapYear();
  } while( true );
}




/* ============================================================
 * 0000a3e0 ResetMainMenuSelection
 * ============================================================ */


void ResetMainMenuSelection(void)

{
  main_menu_selection = 0;
  return;
}




/* ============================================================
 * 0000a3e8 RunBiosMainMenu
 * ============================================================ */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ushort RunBiosMainMenu(void)

{
  int menu_index_or_result;
  ushort dip_switches;
  
  ClearVideoRamPalettesAndScale();
  do {
    while( true ) {
      ClearTextTilemap();
      LoadDefaultTextPalettes();
      CopyPaletteChunk(0,6,(undefined4 *)menu_arrow_palette_words);
      PrintfTilesBanked(0,0x2d,2,'\x03',0,"%s-%03u",0x230,1);
      menu_index_or_result = IsCartHeaderValid();
      if (menu_index_or_result != 0) {
        DrawStringTiles(0,0x2d,3,'\x03',0,&UNK_00100231);
      }
      DrawStringTiles(0,0x12,2,'\x03',3,"MAIN MENU");
      DrawEmptyGridCells(6,4,0x2a);
      DrawEmptyGridCells(6,0x14,0x2a);
      for (menu_index_or_result = 0; menu_index_or_result < 7;
          menu_index_or_result = menu_index_or_result + 1) {
        DrawStringTiles(0,6,menu_index_or_result * 2 + 6,'\0',1,
                        *(char **)((int)main_menu_labels +
                                  (int)(short)((short)menu_index_or_result << 2)));
      }
      main_menu_selection = RunMenuSelectionLoop(6,6,main_menu_labels,7,main_menu_selection,1);
      if (main_menu_selection != -1) break;
      main_menu_selection = 0;
    }
    menu_index_or_result =
         (**(code **)((int)main_menu_callbacks + (int)(short)(main_menu_selection._2_2_ << 2)))();
  } while (menu_index_or_result != 1);
  dip_switches = ReadDipSwitchesInverted();
  if ((dip_switches & 1) != 0) {
    ClearTextTilemap();
    do {
      DrawStringTiles(0,4,0xc,'\0',1,"TEST MODE DIP.SW 1 OFF!");
      menu_index_or_result = 0;
      do {
        dip_switches = ReadDipSwitchesInverted();
        if ((dip_switches & 1) == 0) {
          return 0;
        }
        menu_index_or_result = menu_index_or_result + 1;
      } while (menu_index_or_result < 50000);
      DrawStringTiles(0,4,0xc,'\0',1,"                        ");
      menu_index_or_result = 0;
      do {
        dip_switches = ReadDipSwitchesInverted();
        if ((dip_switches & 1) == 0) {
          return 0;
        }
        menu_index_or_result = menu_index_or_result + 1;
      } while (menu_index_or_result < 20000);
    } while( true );
  }
  return 0;
}




/* ============================================================
 * 0000a5c8 ReadDipSwitchesInverted
 * ============================================================ */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ushort ReadDipSwitchesInverted(void)

{
  ushort uVar1;
  
  uVar1 = pgm_jamma_io.wDipswitches;
  dipswitch_shadow = ~uVar1;
  return ~uVar1;
}




/* ============================================================
 * 0000a5d8 InitFontBuffers
 * ============================================================ */


void InitFontBuffers(void)

{
  int iVar1;
  PgmFontBufferSlot *pPVar2;
  
  pPVar2 = font_buffer_table;
  for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
    pPVar2->bState = 0;
    pPVar2->dwSource_or_fill = 0;
    pPVar2 = pPVar2 + 1;
  }
  active_font_buffer_count = 0;
  return;
}




/* ============================================================
 * 0000a5fc AllocateFontBuffer
 * ============================================================ */


int AllocateFontBuffer(int long_count)

{
  void *buffer;
  int slot_index;
  PgmFontBufferSlot *slot;
  
  active_font_buffer_count = active_font_buffer_count + 1;
  slot_index = 0;
  slot = font_buffer_table;
  while( true ) {
    if (7 < slot_index) {
      slot_index = ResourceErrorScreen("FNT BUF USE");
      return slot_index;
    }
    if (slot->bState == '\0') break;
    slot_index = slot_index + 1;
    slot = slot + 1;
  }
  slot->bState = 1;
  buffer = BiosMalloc(long_count << 2);
  slot->dwSource_or_fill = buffer;
  slot->bFlags = slot->bFlags & 0x7f;
  return slot_index;
}




/* ============================================================
 * 0000a65c ReserveExternalFontSurface
 * ============================================================ */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ReserveExternalFontSurface(undefined4 source_or_fill)

{
  int slot_index;
  PgmFontBufferSlot *slot;
  
  active_font_buffer_count = active_font_buffer_count + 1;
  slot_index = 0;
  slot = font_buffer_table;
  while( true ) {
    if (7 < slot_index) {
      slot_index = ResourceErrorScreen("FNT BUF USE FIX");
      return slot_index;
    }
    if (slot->bState == '\0') break;
    slot_index = slot_index + 1;
    slot = slot + 1;
  }
  slot->bState = 1;
  slot->dwSource_or_fill = source_or_fill;
  slot->bFlags = slot->bFlags | 0x80;
  return slot_index;
}




/* ============================================================
 * 0000a6a4 SetupFontBufferBlit
 * ============================================================ */


void SetupFontBufferBlit(int slot,byte layer,undefined2 width,undefined1 height,
                        undefined4 dest_tilemap,byte persist)

{
  font_buffer_table[slot].wWidth = width;
  font_buffer_table[slot].bHeight = height;
  font_buffer_table[slot].dwDest_tilemap_ptr = dest_tilemap;
  font_buffer_table[slot].bFlags = font_buffer_table[slot].bFlags & 0xbf;
  font_buffer_table[slot].bFlags = (layer & 1) << 6 | font_buffer_table[slot].bFlags;
  font_buffer_table[slot].bFlags = font_buffer_table[slot].bFlags & 0xdf;
  font_buffer_table[slot].bFlags = (persist & 1) << 5 | font_buffer_table[slot].bFlags;
  font_buffer_table[slot].bState = 2;
  return;
}




/* ============================================================
 * 0000a6fe GetFontBufferSlotState
 * ============================================================ */


bool GetFontBufferSlotState(int param_1)

{
  return font_buffer_table[param_1].bState != '\x02';
}




/* ============================================================
 * 0000a722 GetFontBufferSlotSource
 * ============================================================ */


undefined4 GetFontBufferSlotSource(short param_1)

{
  return *(undefined4 *)((int)&font_buffer_table[0].dwSource_or_fill + (int)(short)(param_1 * 0xe));
}




/* ============================================================
 * 0000a73a SetupFontBufferGlyph
 * ============================================================ */


void SetupFontBufferGlyph(int param_1,int param_2,int param_3)

{
  if (param_2 != 0) {
    font_buffer_table[param_1].wWidth = (short)param_2;
  }
  if (param_3 != 0) {
    font_buffer_table[param_1].bHeight = (char)param_3;
  }
  font_buffer_table[param_1].bState = 2;
  return;
}




/* ============================================================
 * 0000a776 SetFontBufferSlotSource
 * ============================================================ */


void SetFontBufferSlotSource(int param_1,undefined4 param_2,undefined4 param_3)

{
  font_buffer_table[param_1].dwSource_or_fill = param_2;
  font_buffer_table[param_1].dwDest_tilemap_ptr = param_3;
  font_buffer_table[param_1].bState = 2;
  return;
}




/* ============================================================
 * 0000a79e SetupFontBufferTile
 * ============================================================ */


void SetupFontBufferTile(int slot,undefined4 source_or_fill,undefined4 dest_tilemap,int width,
                        int height)

{
  if (width != 0) {
    font_buffer_table[slot].wWidth = (short)width;
  }
  if (height != 0) {
    font_buffer_table[slot].bHeight = (char)height;
  }
  font_buffer_table[slot].dwSource_or_fill = source_or_fill;
  font_buffer_table[slot].dwDest_tilemap_ptr = dest_tilemap;
  font_buffer_table[slot].bState = 2;
  return;
}




/* ============================================================
 * 0000a7e6 SetupFontBufferString
 * ============================================================ */


void SetupFontBufferString(void)

{
  short row_countdown;
  ushort rows_remaining;
  short slot_countdown;
  PgmFontBufferSlot *slot;
  undefined4 *dst;
  undefined4 *src;
  
  if (active_font_buffer_count != 0) {
    slot = font_buffer_table;
    slot_countdown = 7;
    do {
      if (slot->bState == '\x02') {
        dst = (undefined4 *)slot->dwDest_tilemap_ptr;
        src = (undefined4 *)slot->dwSource_or_fill;
        rows_remaining = (ushort)(byte)slot->bHeight;
        if (src == (undefined4 *)0x0) {
          while (rows_remaining != 0) {
            FillLongs(dst,0,(uint)(ushort)slot->wWidth);
            dst = dst + 0x40;
            rows_remaining = rows_remaining - 1;
          }
        }
        else if (((uint)src & 0x80000000) == 0) {
          if (slot->wWidth == 1) {
            row_countdown = rows_remaining - 1;
            do {
              *dst = *src;
              dst = dst + 0x40;
              row_countdown = row_countdown + -1;
              src = src + 1;
            } while (row_countdown != -1);
          }
          else {
            while (rows_remaining != 0) {
              CopyLongs(dst,src,(uint)(ushort)slot->wWidth);
              dst = dst + 0x40;
              src = src + (ushort)slot->wWidth;
              rows_remaining = rows_remaining - 1;
            }
          }
        }
        else {
          while (rows_remaining != 0) {
            FillLongs(dst,(uint)src & 0x7fffffff,(uint)(ushort)slot->wWidth);
            dst = dst + 0x40;
            rows_remaining = rows_remaining - 1;
          }
        }
        if ((slot->bFlags & 0x20) == 0) {
          if ((slot->bFlags & 0x80) == 0) {
            BiosFree((void *)slot->dwSource_or_fill);
          }
          slot->bState = 0;
          active_font_buffer_count = active_font_buffer_count - 1;
        }
        else {
          slot->bState = 1;
        }
      }
      slot = slot + 1;
      slot_countdown = slot_countdown + -1;
    } while (slot_countdown != -1);
  }
  return;
}




/* ============================================================
 * 0000a8fa FlushFontBuffers
 * ============================================================ */


void FlushFontBuffers(void)

{
  undefined4 *src;
  undefined4 *dst;
  ushort rows_remaining;
  short slot_countdown;
  PgmFontBufferSlot *slot;
  
  if (active_font_buffer_count != 0) {
    slot = font_buffer_table;
    slot_countdown = 8;
    while (slot_countdown != 0) {
      if (slot->bState == '\x02') {
        dst = (undefined4 *)slot->dwDest_tilemap_ptr;
        src = (undefined4 *)slot->dwSource_or_fill;
        rows_remaining = (ushort)(byte)slot->bHeight;
        if (src == (undefined4 *)0x0) {
          while (rows_remaining != 0) {
            FillLongs(dst,0,(uint)(ushort)slot->wWidth);
            dst = dst + 0x40;
            rows_remaining = rows_remaining - 1;
          }
        }
        else if (((uint)src & 0x80000000) == 0) {
          while (rows_remaining != 0) {
            CopyLongs(dst,src,(uint)(ushort)slot->wWidth);
            dst = dst + 0x40;
            src = src + (ushort)slot->wWidth;
            rows_remaining = rows_remaining - 1;
          }
        }
        else {
          while (rows_remaining != 0) {
            FillLongs(dst,(uint)src & 0x7fffffff,(uint)(ushort)slot->wWidth);
            dst = dst + 0x40;
            rows_remaining = rows_remaining - 1;
          }
        }
        if ((slot->bFlags & 0x20) == 0) {
          if ((slot->bFlags & 0x80) == 0) {
            BiosFree((void *)slot->dwSource_or_fill);
          }
          slot->bState = 0;
          active_font_buffer_count = active_font_buffer_count - 1;
        }
        else {
          slot->bState = 1;
        }
      }
      slot = slot + 1;
      slot_countdown = slot_countdown + -1;
    }
  }
  return;
}




/* ============================================================
 * 0000a9fa FlushFontBufferSlot
 * ============================================================ */


void * FlushFontBufferSlot(int slot)

{
  void *pvVar1;
  
  active_font_buffer_count = active_font_buffer_count - 1;
  pvVar1 = (void *)(CONCAT31((int3)((uint)(slot * 0xe) >> 8),font_buffer_table[slot].bFlags) &
                   0xffffff80);
  if ((font_buffer_table[slot].bFlags & 0x80) == 0) {
    pvVar1 = BiosFree((void *)font_buffer_table[slot].dwSource_or_fill);
  }
  font_buffer_table[slot].bState = 0;
  return pvVar1;
}




/* ============================================================
 * 0000aa3a FlushFontBufferSlotAlt
 * ============================================================ */


void FlushFontBufferSlotAlt(void)

{
  int slot;
  
  for (slot = 0; slot < 8; slot = slot + 1) {
    FlushFontBufferSlot(slot);
  }
  active_font_buffer_count = 0;
  return;
}




/* ============================================================
 * 0000aa6e ClearFontBufferSlot
 * ============================================================ */


void ClearFontBufferSlot(void)

{
  int slot;
  
  for (slot = 0; slot < 8; slot = slot + 1) {
    FlushFontBufferSlot(slot);
  }
  return;
}




/* ============================================================
 * 0000aa9c RenderImageToFontBuffer
 * ============================================================ */


void RenderImageToFontBuffer
               (int layer,int tile_x,int tile_y,PgmImageDescriptor *image,int picture_index,
               uint hflip,uchar palette,short tile_offset)

{
  uint tile_count;
  int slot;
  undefined *dest_tilemap;
  uint *font_buffer_dst;
  ushort remaining_cols;
  short remaining_rows;
  uint *backfill_dst;
  short *tile_src;
  byte *attr_src;
  undefined4 tile_word;
  short next_row_count;
  PgmImagePicture *picture;
  ushort picture_width_tiles;
  
  if ((picture_index < 0) || ((int)(uint)(ushort)image->wTotal_pictures <= picture_index)) {
    AssertFailScreen("n>=0 && n<img->totpic",(char *)assert_file_fntbuf_c_142f0,0x193);
  }
  tile_count = MultiplyImageTileOffset(image,picture_index);
  slot = AllocateFontBuffer(tile_count);
  if (layer == 0) {
    dest_tilemap = &pgm_text_tilemap + (tile_x + tile_y * 0x40) * 4;
  }
  else {
    dest_tilemap = &pgm_video_ram + (tile_x + tile_y * 0x40) * 4;
  }
  font_buffer_table[slot].dwDest_tilemap_ptr = dest_tilemap;
  font_buffer_dst = (uint *)font_buffer_table[slot].dwSource_or_fill;
  picture = image->pPicture_table + picture_index;
  picture_width_tiles = picture->wWidth_tiles;
  remaining_rows = picture->wHeight_tiles;
  attr_src = picture->attribute_xor_data;
  tile_src = (short *)picture->tile_index_data;
  tile_word = tile_word & 0xffffffc1;
  tile_word = CONCAT31(tile_word._0_3_,
                       (byte)((hflip & 1) << 6) | (palette & 0x1f) * '\x02' | (byte)tile_word & 0xbf
                      ) & 0xffffff7f;
  if (hflip == 0) {
    if (attr_src == (byte *)0x0) {
      while (next_row_count = remaining_rows + -1, remaining_cols = picture_width_tiles,
            remaining_rows != 0) {
        while (remaining_rows = next_row_count, remaining_cols != 0) {
          tile_word = CONCAT22(tile_offset + *tile_src,tile_word._2_2_);
          *font_buffer_dst = tile_word;
          font_buffer_dst = font_buffer_dst + 1;
          tile_src = tile_src + 1;
          remaining_cols = remaining_cols - 1;
        }
      }
    }
    else {
      while (next_row_count = remaining_rows + -1, remaining_cols = picture_width_tiles,
            remaining_rows != 0) {
        while (remaining_rows = next_row_count, remaining_cols != 0) {
          tile_word = CONCAT22(tile_offset + *tile_src,tile_word._2_2_);
          *font_buffer_dst = tile_word;
          *(ushort *)((int)font_buffer_dst + 2) =
               (ushort)*attr_src ^ *(ushort *)((int)font_buffer_dst + 2);
          font_buffer_dst = font_buffer_dst + 1;
          tile_src = tile_src + 1;
          attr_src = attr_src + 1;
          remaining_cols = remaining_cols - 1;
        }
      }
    }
  }
  else if (attr_src == (byte *)0x0) {
    while( true ) {
      font_buffer_dst = font_buffer_dst + picture_width_tiles;
      next_row_count = remaining_rows + -1;
      backfill_dst = font_buffer_dst;
      remaining_cols = picture_width_tiles;
      if (remaining_rows == 0) break;
      while (remaining_rows = next_row_count, remaining_cols != 0) {
        tile_word = CONCAT22(tile_offset + *tile_src,tile_word._2_2_);
        backfill_dst[-1] = tile_word;
        backfill_dst = backfill_dst + -1;
        tile_src = tile_src + 1;
        remaining_cols = remaining_cols - 1;
      }
    }
  }
  else {
    while( true ) {
      font_buffer_dst = font_buffer_dst + picture_width_tiles;
      next_row_count = remaining_rows + -1;
      backfill_dst = font_buffer_dst;
      remaining_cols = picture_width_tiles;
      if (remaining_rows == 0) break;
      while (remaining_rows = next_row_count, remaining_cols != 0) {
        tile_word = CONCAT22(tile_offset + *tile_src,tile_word._2_2_);
        backfill_dst[-1] = tile_word;
        *(ushort *)((int)backfill_dst + -2) =
             (ushort)*attr_src ^ *(ushort *)((int)backfill_dst + -2);
        backfill_dst = backfill_dst + -1;
        tile_src = tile_src + 1;
        attr_src = attr_src + 1;
        remaining_cols = remaining_cols - 1;
      }
    }
  }
  SetupFontBufferBlit(slot,(byte)layer,picture->wWidth_tiles,(char)picture->wHeight_tiles,
                      font_buffer_table[slot].dwDest_tilemap_ptr,0);
  return;
}




/* ============================================================
 * 0000ac8c DrawFontBufferDebugMessageA
 * ============================================================ */


void DrawFontBufferDebugMessageA(void)

{
  PrintfTextLayer(10,0xb,"TOTAL=%3d",(uint)active_font_buffer_count);
  return;
}




/* ============================================================
 * 0000acb0 BuildColumnFontBufferFromImage
 * ============================================================ */


void BuildColumnFontBufferFromImage
               (int tile_x,int tile_y,PgmImagePicture *picture,byte hflip,byte palette,
               short tile_offset,int src_tile_x,uint alloc_long_count,short height_tiles)

{
  ushort uVar1;
  int slot;
  uint src_row_offset;
  uint *font_buffer_dst;
  byte *attr_src;
  short *tile_src;
  undefined4 tile_word;
  
  slot = AllocateFontBuffer(8);
  font_buffer_table[slot].dwDest_tilemap_ptr = &pgm_video_ram + (tile_x + tile_y * 0x40) * 4;
  font_buffer_dst = (uint *)font_buffer_table[slot].dwSource_or_fill;
  font_buffer_table[slot].wWidth = 1;
  font_buffer_table[slot].bHeight = (undefined1)height_tiles;
  uVar1 = picture->wWidth_tiles;
  src_row_offset = MulUnsigned32((uint)uVar1,alloc_long_count);
  tile_src = (short *)(picture->tile_index_data + (src_tile_x + src_row_offset) * 2);
  tile_word = tile_word & 0xffffffc1;
  tile_word = CONCAT31(tile_word._0_3_,
                       (hflip & 1) << 6 | (palette & 0x1f) * '\x02' | (byte)tile_word & 0xbf) &
              0xffffff7f;
  if (picture->attribute_xor_data == (undefined *)0x0) {
    while (height_tiles != 0) {
      tile_word = CONCAT22(tile_offset + *tile_src,tile_word._2_2_);
      *font_buffer_dst = tile_word;
      tile_src = tile_src + uVar1;
      font_buffer_dst = font_buffer_dst + 1;
      height_tiles = height_tiles + -1;
    }
  }
  else {
    attr_src = picture->attribute_xor_data + src_tile_x + src_row_offset;
    while (height_tiles != 0) {
      tile_word = CONCAT22(tile_offset + *tile_src,tile_word._2_2_);
      *font_buffer_dst = tile_word;
      *(ushort *)((int)font_buffer_dst + 2) =
           (ushort)*attr_src ^ *(ushort *)((int)font_buffer_dst + 2);
      font_buffer_dst = font_buffer_dst + 1;
      tile_src = tile_src + uVar1;
      attr_src = attr_src + uVar1;
      height_tiles = height_tiles + -1;
    }
  }
  SetupFontBufferBlit(slot,1,font_buffer_table[slot].wWidth,font_buffer_table[slot].bHeight,
                      font_buffer_table[slot].dwDest_tilemap_ptr,0);
  return;
}




/* ============================================================
 * 0000adf0 BuildRowFontBufferFromImage
 * ============================================================ */


void BuildRowFontBufferFromImage
               (int tile_x,int tile_y,PgmImagePicture *picture,byte hflip,byte palette,
               short tile_offset,int src_tile_y,uint alloc_long_count,short width_tiles)

{
  int slot;
  uint src_row_offset;
  uint *font_buffer_dst;
  byte *attr_src;
  short *tile_src;
  undefined4 tile_word;
  
  slot = AllocateFontBuffer(0x10);
  font_buffer_table[slot].dwDest_tilemap_ptr = &pgm_video_ram + (tile_x + tile_y * 0x40) * 4;
  font_buffer_dst = (uint *)font_buffer_table[slot].dwSource_or_fill;
  font_buffer_table[slot].wWidth = width_tiles;
  font_buffer_table[slot].bHeight = 1;
  src_row_offset = MulUnsigned32((uint)(ushort)picture->wWidth_tiles,alloc_long_count);
  tile_src = (short *)(picture->tile_index_data + (src_tile_y + src_row_offset) * 2);
  tile_word = tile_word & 0xffffffc1;
  tile_word = CONCAT31(tile_word._0_3_,
                       (hflip & 1) << 6 | (palette & 0x1f) * '\x02' | (byte)tile_word & 0xbf) &
              0xffffff7f;
  if (picture->attribute_xor_data == (undefined *)0x0) {
    while (width_tiles != 0) {
      tile_word = CONCAT22(tile_offset + *tile_src,tile_word._2_2_);
      *font_buffer_dst = tile_word;
      font_buffer_dst = font_buffer_dst + 1;
      tile_src = tile_src + 1;
      width_tiles = width_tiles + -1;
    }
  }
  else {
    attr_src = picture->attribute_xor_data + src_tile_y + src_row_offset;
    while (width_tiles != 0) {
      tile_word = CONCAT22(tile_offset + *tile_src,tile_word._2_2_);
      *font_buffer_dst = tile_word;
      *(ushort *)((int)font_buffer_dst + 2) =
           (ushort)*attr_src ^ *(ushort *)((int)font_buffer_dst + 2);
      font_buffer_dst = font_buffer_dst + 1;
      attr_src = attr_src + 1;
      tile_src = tile_src + 1;
      width_tiles = width_tiles + -1;
    }
  }
  SetupFontBufferBlit(slot,1,font_buffer_table[slot].wWidth,font_buffer_table[slot].bHeight,
                      font_buffer_table[slot].dwDest_tilemap_ptr,0);
  return;
}




/* ============================================================
 * 0000af1a BuildRegionFontBufferFromImage
 * ============================================================ */


void BuildRegionFontBufferFromImage
               (int layer,int tile_x,int tile_y,PgmImageDescriptor *image,int picture_index,
               uint hflip,byte palette,short tile_offset,int region_tile_offset,
               uint alloc_long_count,uint width_tiles,int height_tiles)

{
  uint alloc_size;
  int slot;
  undefined *attr_data_or_dest_tilemap;
  ushort remaining_width;
  short col_count;
  uint *row_backfill;
  uint *font_buffer_dst;
  byte *attr_src;
  short *tile_src;
  undefined4 tile_word;
  PgmImagePicture *picture;
  int source_tile_index;
  ushort temp_5f6991cd9f;
  
  if ((picture_index < 0) || ((int)(uint)(ushort)image->wTotal_pictures <= picture_index)) {
    AssertFailScreen("n>=0 && n<img->totpic",(char *)assert_file_fntbuf_c_1431a,0x28d);
  }
  alloc_size = MulUnsigned32(width_tiles,height_tiles);
  slot = AllocateFontBuffer(alloc_size);
  if (layer == 0) {
    attr_data_or_dest_tilemap = &pgm_text_tilemap + (tile_x + tile_y * 0x40) * 4;
  }
  else {
    attr_data_or_dest_tilemap = &pgm_video_ram + (tile_x + tile_y * 0x40) * 4;
  }
  font_buffer_table[slot].dwDest_tilemap_ptr = attr_data_or_dest_tilemap;
  font_buffer_dst = (uint *)font_buffer_table[slot].dwSource_or_fill;
  font_buffer_table[slot].wWidth = (short)width_tiles;
  font_buffer_table[slot].bHeight = (char)height_tiles;
  picture = image->pPicture_table + picture_index;
  temp_5f6991cd9f = picture->wWidth_tiles;
  alloc_size = MulUnsigned32((uint)temp_5f6991cd9f,alloc_long_count);
  source_tile_index = region_tile_offset + alloc_size;
  attr_data_or_dest_tilemap = picture->attribute_xor_data;
  tile_src = (short *)(picture->tile_index_data + source_tile_index * 2);
  tile_word = tile_word & 0xffffffc1;
  tile_word = CONCAT31(tile_word._0_3_,
                       (byte)((hflip & 1) << 6) | (palette & 0x1f) * '\x02' | (byte)tile_word & 0xbf
                      ) & 0xffffff7f;
  if (hflip == 0) {
    if (attr_data_or_dest_tilemap == (undefined *)0x0) {
      while (height_tiles != 0) {
        alloc_size = width_tiles & 0xffff;
        while (col_count = (short)alloc_size, alloc_size = (uint)(ushort)(col_count - 1),
              col_count != 0) {
          tile_word = CONCAT22(tile_offset + *tile_src,tile_word._2_2_);
          *font_buffer_dst = tile_word;
          font_buffer_dst = font_buffer_dst + 1;
          tile_src = tile_src + 1;
        }
        tile_src = tile_src + (temp_5f6991cd9f - width_tiles);
        height_tiles = height_tiles + -1;
      }
    }
    else {
      attr_src = attr_data_or_dest_tilemap + source_tile_index;
      while (height_tiles != 0) {
        alloc_size = width_tiles & 0xffff;
        while (col_count = (short)alloc_size, alloc_size = (uint)(ushort)(col_count - 1),
              col_count != 0) {
          tile_word = CONCAT22(tile_offset + *tile_src,tile_word._2_2_);
          *font_buffer_dst = tile_word;
          *(ushort *)((int)font_buffer_dst + 2) =
               (ushort)*attr_src ^ *(ushort *)((int)font_buffer_dst + 2);
          font_buffer_dst = font_buffer_dst + 1;
          attr_src = attr_src + 1;
          tile_src = tile_src + 1;
        }
        tile_src = tile_src + (temp_5f6991cd9f - width_tiles);
        attr_src = attr_src + (temp_5f6991cd9f - width_tiles);
        height_tiles = height_tiles + -1;
      }
    }
  }
  else if (attr_data_or_dest_tilemap == (undefined *)0x0) {
    while( true ) {
      font_buffer_dst = font_buffer_dst + width_tiles;
      if (height_tiles == 0) break;
      alloc_size = width_tiles & 0xffff;
      row_backfill = font_buffer_dst;
      while (col_count = (short)alloc_size, alloc_size = (uint)(ushort)(col_count - 1),
            col_count != 0) {
        tile_word = CONCAT22(tile_offset + *tile_src,tile_word._2_2_);
        row_backfill = row_backfill + -1;
        *row_backfill = tile_word;
        tile_src = tile_src + 1;
      }
      tile_src = tile_src + (temp_5f6991cd9f - width_tiles);
      height_tiles = height_tiles + -1;
    }
  }
  else {
    attr_src = attr_data_or_dest_tilemap + source_tile_index;
    while( true ) {
      font_buffer_dst = font_buffer_dst + width_tiles;
      row_backfill = font_buffer_dst;
      remaining_width = temp_5f6991cd9f;
      if (height_tiles == 0) break;
      while (remaining_width != 0) {
        tile_word = CONCAT22(tile_offset + *tile_src,tile_word._2_2_);
        row_backfill[-1] = tile_word;
        *(ushort *)((int)row_backfill + -2) =
             (ushort)*attr_src ^ *(ushort *)((int)row_backfill + -2);
        row_backfill = row_backfill + -1;
        attr_src = attr_src + 1;
        tile_src = tile_src + 1;
        remaining_width = remaining_width - 1;
      }
      tile_src = tile_src + (temp_5f6991cd9f - width_tiles);
      attr_src = attr_src + (temp_5f6991cd9f - width_tiles);
      height_tiles = height_tiles + -1;
    }
  }
  SetupFontBufferBlit(slot,(byte)layer,font_buffer_table[slot].wWidth,
                      font_buffer_table[slot].bHeight,font_buffer_table[slot].dwDest_tilemap_ptr,0);
  return;
}




/* ============================================================
 * 0000b1a0 RenderFullImageToExternalFontSurface
 * ============================================================ */


void RenderFullImageToExternalFontSurface
               (undefined4 external_surface,int layer,int tile_x,int tile_y,
               PgmImageDescriptor *image,int picture_index,uint hflip,byte palette,short tile_offset
               )

{
  int slot;
  undefined *dest_tilemap;
  uint *font_buffer_dst;
  ushort remaining_cols;
  short remaining_rows;
  uint *row_backfill;
  short *tile_src;
  byte *attr_src;
  undefined4 tile_word;
  short next_row_count;
  PgmImagePicture *picture;
  ushort picture_width_tiles;
  
  if ((picture_index < 0) || ((int)(uint)(ushort)image->wTotal_pictures <= picture_index)) {
    AssertFailScreen("n>=0 && n<img->totpic",(char *)assert_file_fntbuf_c_1433a,0x30c);
  }
  slot = ReserveExternalFontSurface(external_surface);
  if (layer == 0) {
    dest_tilemap = &pgm_text_tilemap + (tile_x + tile_y * 0x40) * 4;
  }
  else {
    dest_tilemap = &pgm_video_ram + (tile_x + tile_y * 0x40) * 4;
  }
  font_buffer_table[slot].dwDest_tilemap_ptr = dest_tilemap;
  font_buffer_dst = (uint *)font_buffer_table[slot].dwSource_or_fill;
  picture = image->pPicture_table + picture_index;
  picture_width_tiles = picture->wWidth_tiles;
  remaining_rows = picture->wHeight_tiles;
  attr_src = picture->attribute_xor_data;
  tile_src = (short *)picture->tile_index_data;
  tile_word = tile_word & 0xffffffc1;
  tile_word = CONCAT31(tile_word._0_3_,
                       (byte)((hflip & 1) << 6) | (palette & 0x1f) * '\x02' | (byte)tile_word & 0xbf
                      ) & 0xffffff7f;
  if (hflip == 0) {
    if (attr_src == (byte *)0x0) {
      while (next_row_count = remaining_rows + -1, remaining_cols = picture_width_tiles,
            remaining_rows != 0) {
        while (remaining_rows = next_row_count, remaining_cols != 0) {
          tile_word = CONCAT22(tile_offset + *tile_src,tile_word._2_2_);
          *font_buffer_dst = tile_word;
          font_buffer_dst = font_buffer_dst + 1;
          tile_src = tile_src + 1;
          remaining_cols = remaining_cols - 1;
        }
      }
    }
    else {
      while (next_row_count = remaining_rows + -1, remaining_cols = picture_width_tiles,
            remaining_rows != 0) {
        while (remaining_rows = next_row_count, remaining_cols != 0) {
          tile_word = CONCAT22(tile_offset + *tile_src,tile_word._2_2_);
          *font_buffer_dst = tile_word;
          *(ushort *)((int)font_buffer_dst + 2) =
               (ushort)*attr_src ^ *(ushort *)((int)font_buffer_dst + 2);
          font_buffer_dst = font_buffer_dst + 1;
          tile_src = tile_src + 1;
          attr_src = attr_src + 1;
          remaining_cols = remaining_cols - 1;
        }
      }
    }
  }
  else if (attr_src == (byte *)0x0) {
    while( true ) {
      font_buffer_dst = font_buffer_dst + picture_width_tiles;
      next_row_count = remaining_rows + -1;
      row_backfill = font_buffer_dst;
      remaining_cols = picture_width_tiles;
      if (remaining_rows == 0) break;
      while (remaining_rows = next_row_count, remaining_cols != 0) {
        tile_word = CONCAT22(tile_offset + *tile_src,tile_word._2_2_);
        row_backfill[-1] = tile_word;
        row_backfill = row_backfill + -1;
        tile_src = tile_src + 1;
        remaining_cols = remaining_cols - 1;
      }
    }
  }
  else {
    while( true ) {
      font_buffer_dst = font_buffer_dst + picture_width_tiles;
      next_row_count = remaining_rows + -1;
      row_backfill = font_buffer_dst;
      remaining_cols = picture_width_tiles;
      if (remaining_rows == 0) break;
      while (remaining_rows = next_row_count, remaining_cols != 0) {
        tile_word = CONCAT22(tile_offset + *tile_src,tile_word._2_2_);
        row_backfill[-1] = tile_word;
        *(ushort *)((int)row_backfill + -2) =
             (ushort)*attr_src ^ *(ushort *)((int)row_backfill + -2);
        row_backfill = row_backfill + -1;
        tile_src = tile_src + 1;
        attr_src = attr_src + 1;
        remaining_cols = remaining_cols - 1;
      }
    }
  }
  SetupFontBufferBlit(slot,(byte)layer,picture->wWidth_tiles,(char)picture->wHeight_tiles,
                      font_buffer_table[slot].dwDest_tilemap_ptr,0);
  return;
}




/* ============================================================
 * 0000b380 RenderImageRegionToExternalFontSurface
 * ============================================================ */


void RenderImageRegionToExternalFontSurface
               (undefined4 external_surface,int layer,int tile_x,int tile_y,
               PgmImageDescriptor *image,int picture_index,uint hflip,byte palette,short tile_offset
               ,int region_tile_offset,uint alloc_long_count,uint width_tiles,int height_tiles)

{
  int slot;
  undefined *attr_data_or_dest_tilemap;
  uint region_start_index;
  ushort remaining_width;
  short col_count;
  uint *row_backfill;
  uint *font_buffer_dst;
  short *tile_src;
  byte *attr_src;
  undefined4 tile_word;
  PgmImagePicture *picture;
  int source_tile_index;
  ushort temp_5feae5c1d7;
  
  if ((picture_index < 0) || ((int)(uint)(ushort)image->wTotal_pictures <= picture_index)) {
    AssertFailScreen("n>=0 && n<img->totpic",(char *)assert_file_fntbuf_c_1435a,0x381);
  }
  slot = ReserveExternalFontSurface(external_surface);
  if (layer == 0) {
    attr_data_or_dest_tilemap = &pgm_text_tilemap + (tile_x + tile_y * 0x40) * 4;
  }
  else {
    attr_data_or_dest_tilemap = &pgm_video_ram + (tile_x + tile_y * 0x40) * 4;
  }
  font_buffer_table[slot].dwDest_tilemap_ptr = attr_data_or_dest_tilemap;
  font_buffer_dst = (uint *)font_buffer_table[slot].dwSource_or_fill;
  font_buffer_table[slot].wWidth = (short)width_tiles;
  font_buffer_table[slot].bHeight = (char)height_tiles;
  picture = image->pPicture_table + picture_index;
  temp_5feae5c1d7 = picture->wWidth_tiles;
  region_start_index = MulUnsigned32((uint)temp_5feae5c1d7,alloc_long_count);
  source_tile_index = region_tile_offset + region_start_index;
  attr_data_or_dest_tilemap = picture->attribute_xor_data;
  tile_src = (short *)(picture->tile_index_data + source_tile_index * 2);
  tile_word = tile_word & 0xffffffc1;
  tile_word = CONCAT31(tile_word._0_3_,
                       (byte)((hflip & 1) << 6) | (palette & 0x1f) * '\x02' | (byte)tile_word & 0xbf
                      ) & 0xffffff7f;
  if (hflip == 0) {
    if (attr_data_or_dest_tilemap == (undefined *)0x0) {
      while (height_tiles != 0) {
        region_start_index = width_tiles & 0xffff;
        while (col_count = (short)region_start_index,
              region_start_index = (uint)(ushort)(col_count - 1), col_count != 0) {
          tile_word = CONCAT22(tile_offset + *tile_src,tile_word._2_2_);
          *font_buffer_dst = tile_word;
          font_buffer_dst = font_buffer_dst + 1;
          tile_src = tile_src + 1;
        }
        tile_src = tile_src + (temp_5feae5c1d7 - width_tiles);
        height_tiles = height_tiles + -1;
      }
    }
    else {
      attr_src = attr_data_or_dest_tilemap + source_tile_index;
      while (height_tiles != 0) {
        region_start_index = width_tiles & 0xffff;
        while (col_count = (short)region_start_index,
              region_start_index = (uint)(ushort)(col_count - 1), col_count != 0) {
          tile_word = CONCAT22(tile_offset + *tile_src,tile_word._2_2_);
          *font_buffer_dst = tile_word;
          *(ushort *)((int)font_buffer_dst + 2) =
               (ushort)*attr_src ^ *(ushort *)((int)font_buffer_dst + 2);
          font_buffer_dst = font_buffer_dst + 1;
          tile_src = tile_src + 1;
          attr_src = attr_src + 1;
        }
        tile_src = tile_src + (temp_5feae5c1d7 - width_tiles);
        attr_src = attr_src + (temp_5feae5c1d7 - width_tiles);
        height_tiles = height_tiles + -1;
      }
    }
  }
  else if (attr_data_or_dest_tilemap == (undefined *)0x0) {
    while( true ) {
      font_buffer_dst = font_buffer_dst + width_tiles;
      if (height_tiles == 0) break;
      region_start_index = width_tiles & 0xffff;
      row_backfill = font_buffer_dst;
      while (col_count = (short)region_start_index,
            region_start_index = (uint)(ushort)(col_count - 1), col_count != 0) {
        tile_word = CONCAT22(tile_offset + *tile_src,tile_word._2_2_);
        row_backfill = row_backfill + -1;
        *row_backfill = tile_word;
        tile_src = tile_src + 1;
      }
      tile_src = tile_src + (temp_5feae5c1d7 - width_tiles);
      height_tiles = height_tiles + -1;
    }
  }
  else {
    attr_src = attr_data_or_dest_tilemap + source_tile_index;
    while( true ) {
      font_buffer_dst = font_buffer_dst + width_tiles;
      row_backfill = font_buffer_dst;
      remaining_width = temp_5feae5c1d7;
      if (height_tiles == 0) break;
      while (remaining_width != 0) {
        tile_word = CONCAT22(tile_offset + *tile_src,tile_word._2_2_);
        row_backfill[-1] = tile_word;
        *(ushort *)((int)row_backfill + -2) =
             (ushort)*attr_src ^ *(ushort *)((int)row_backfill + -2);
        row_backfill = row_backfill + -1;
        tile_src = tile_src + 1;
        attr_src = attr_src + 1;
        remaining_width = remaining_width - 1;
      }
      tile_src = tile_src + (temp_5feae5c1d7 - width_tiles);
      attr_src = attr_src + (temp_5feae5c1d7 - width_tiles);
      height_tiles = height_tiles + -1;
    }
  }
  SetupFontBufferBlit(slot,(byte)layer,font_buffer_table[slot].wWidth,
                      font_buffer_table[slot].bHeight,font_buffer_table[slot].dwDest_tilemap_ptr,0);
  return;
}




/* ============================================================
 * 0000b5fe DrawFontBufferDebugMessageB
 * ============================================================ */


void DrawFontBufferDebugMessageB(void)

{
  PrintfTextLayer(1,0x19,"FNT BUF=%d",(uint)active_font_buffer_count);
  return;
}




/* ============================================================
 * 0000b622 InitVideoControlFlags
 * ============================================================ */


void InitVideoControlFlags(void)

{
  video_control_shadow = 0x7a;
  pgm_video_control_flags = 0x7a;
  return;
}




/* ============================================================
 * 0000b696 TriggerSpriteDma
 * ============================================================ */


void TriggerSpriteDma(void)

{
  video_control_shadow = video_control_shadow | 1;
  pgm_video_control_flags = video_control_shadow;
  return;
}




/* ============================================================
 * 0000b6aa ClearSpriteDmaShadowBit
 * ============================================================ */


void ClearSpriteDmaShadowBit(void)

{
  video_control_shadow._1_1_ = (byte)video_control_shadow & 0xfe;
  return;
}




/* ============================================================
 * 0000b6b4 EnableVblankIrqFlag
 * ============================================================ */


void EnableVblankIrqFlag(void)

{
  video_control_shadow = video_control_shadow & 0xfff7;
  pgm_video_control_flags = video_control_shadow;
  video_control_shadow = video_control_shadow | 8;
  pgm_video_control_flags = video_control_shadow;
  return;
}




/* ============================================================
 * 0000b6da SetSoundCpuFlagBit
 * ============================================================ */


void SetSoundCpuFlagBit(void)

{
  video_control_shadow = video_control_shadow | 2;
  pgm_video_control_flags = video_control_shadow;
  return;
}




/* ============================================================
 * 0000b6ee ClearSoundCpuFlagBit
 * ============================================================ */


void ClearSoundCpuFlagBit(void)

{
  video_control_shadow = video_control_shadow & 0xfffd;
  pgm_video_control_flags = video_control_shadow;
  return;
}




/* ============================================================
 * 0000b702 InitDefaultSoundTables
 * ============================================================ */


void InitDefaultSoundTables(void)

{
  InitializeZ80AudioSystem();
  UploadZ80MidiTables(&default_z80_midi_table_pointers,4);
  AppendZ80WaveTable(1,(undefined2 *)default_z80_wave_table_blob,0xa4);
  return;
}




/* ============================================================
 * 0000b732 CallSoundCommandWithInterruptsMasked
 * ============================================================ */


void CallSoundCommandWithInterruptsMasked(undefined4 *param_1,byte param_2)

{
  EnterCriticalSection();
  UploadZ80MidiTables(param_1,param_2);
  LeaveCriticalSection();
  return;
}




/* ============================================================
 * 0000b754 SoundTablesNoop
 * ============================================================ */


void SoundTablesNoop(void)

{
  return;
}




/* ============================================================
 * 0000b756 BcdToBinaryByte
 * ============================================================ */


char BcdToBinaryByte(uint param_1)

{
  return ((byte)param_1 & 0xf) + (char)((short)((int)(param_1 & 0xf0) >> 4) * 10);
}




/* ============================================================
 * 0000b77a BinaryToBcdByte
 * ============================================================ */


int BinaryToBcdByte(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DivSigned32Remainder(param_1 & 0xff,10);
  iVar2 = DivSigned32Quotient(param_1 & 0xff,10);
  return iVar1 + CONCAT31((int3)((uint)iVar2 >> 8),(char)iVar2 << 4);
}




/* ============================================================
 * 0000b7a2 WriteRtcNibble
 * ============================================================ */


void WriteRtcNibble(byte param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    pgm_z80_rtc_io.wCalendar_rtc =
         (short)((int)(uint)(param_1 & dipswitch_bit_masks[(short)uVar1]) >> (uVar1 & 0x3f));
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 4);
  return;
}




/* ============================================================
 * 0000b7ca WriteRtcByteSerial
 * ============================================================ */


void WriteRtcByteSerial(byte param_1)

{
  ushort uVar1;
  
  for (uVar1 = 0; (byte)uVar1 < 8; uVar1 = (ushort)(byte)((byte)uVar1 + 1)) {
    pgm_z80_rtc_io.wCalendar_rtc =
         (short)((int)(uint)(param_1 & dipswitch_bit_masks[(short)uVar1]) >> (uVar1 & 0x3f));
  }
  return;
}




/* ============================================================
 * 0000b800 ReadRtcByteSerial
 * ============================================================ */


void ReadRtcByteSerial(byte *dst)

{
  ushort bit_index;
  char rtc_data_bit;
  
  *dst = 0;
  for (bit_index = 0; (byte)bit_index < 8; bit_index = (ushort)(byte)((byte)bit_index + 1)) {
    rtc_data_bit = pgm_z80_rtc_io.wCalendar_rtc._1_1_;
    *dst = dipswitch_bit_masks[(short)bit_index] & rtc_data_bit << (bit_index & 0x3f) | *dst;
  }
  return;
}




/* ============================================================
 * 0000b830 ReadRtcStatusByte
 * ============================================================ */


void ReadRtcStatusByte(void)

{
  byte local_5;
  
  WriteRtcNibble(0);
  ReadRtcByteSerial(&local_5);
  if ((local_5 & 2) != 0) {
    WriteRtcNibble(0);
    WriteRtcByteSerial(0x10);
  }
  return;
}




/* ============================================================
 * 0000b85e InitRtcSerial
 * ============================================================ */


void InitRtcSerial(void)

{
  undefined4 uVar1;
  byte local_5;
  
  WriteRtcNibble(0);
  ReadRtcByteSerial(&local_5);
  uVar1 = WriteRtcNibble(0);
  WriteRtcByteSerial(CONCAT31((int3)((uint)uVar1 >> 8),local_5) & 0xfffffffe);
  uVar1 = WriteRtcNibble(0);
  WriteRtcByteSerial(CONCAT31((int3)((uint)uVar1 >> 8),local_5) & 0xfffffffc);
  WriteRtcNibble(0);
  WriteRtcByteSerial(0x10);
  return;
}




/* ============================================================
 * 0000b8aa ReadRtcDateTime
 * ============================================================ */


void ReadRtcDateTime(byte *datetime)

{
  byte bVar1;
  byte field_index;
  
  WriteRtcNibble(0xf);
  for (field_index = 0; field_index < 8; field_index = field_index + 1) {
    WriteRtcNibble(field_index + 2);
    ReadRtcByteSerial(datetime + field_index);
    bVar1 = BcdToBinaryByte(datetime[field_index]);
    datetime[field_index] = bVar1;
  }
  return;
}




/* ============================================================
 * 0000b90a WriteRtcDateTime
 * ============================================================ */


void WriteRtcDateTime(byte *datetime)

{
  byte bVar1;
  byte field_index;
  
  for (field_index = 0; field_index < 8; field_index = field_index + 1) {
    WriteRtcNibble(field_index + 2);
    bVar1 = BinaryToBcdByte(datetime[field_index]);
    datetime[field_index] = bVar1;
    WriteRtcByteSerial(datetime[field_index]);
    bVar1 = BcdToBinaryByte(datetime[field_index]);
    datetime[field_index] = bVar1;
  }
  WriteRtcNibble(0);
  WriteRtcByteSerial(0);
  WriteRtcNibble(0xe);
  WriteRtcNibble(0);
  WriteRtcByteSerial(0x10);
  return;
}




/* ============================================================
 * 0000b9a0 ReadRtcDateTimeAndValidate
 * ============================================================ */


void ReadRtcDateTimeAndValidate(int tile_x,int tile_y)

{
  byte rtc_second;
  byte rtc_minute;
  byte rtc_hour;
  byte rtc_day;
  byte rtc_month;
  byte rtc_year;
  
  ReadRtcDateTime(&rtc_second);
  PrintfTextLayer(tile_x,tile_y,"%2d-%2d-%4d %02d:%02d:%02d",(uint)rtc_month,(uint)rtc_day,
                  (uint)rtc_year,(uint)rtc_hour,(uint)rtc_minute,(uint)rtc_second);
  return;
}




/* ============================================================
 * 0000b9f4 WriteRtcDateTimeFromLocal
 * ============================================================ */


void WriteRtcDateTimeFromLocal(void)

{
  byte abStack_c [8];
  
  WriteRtcDateTime(abStack_c);
  return;
}




/* ============================================================
 * 0000ba04 InitializeRtcHardware
 * ============================================================ */


void InitializeRtcHardware(void)

{
  InitRtcSerial();
  return;
}




/* ============================================================
 * 0000ba0a RtcNoopReturn
 * ============================================================ */


void RtcNoopReturn(void)

{
  return;
}




/* ============================================================
 * 0000ba0c InitializeRtcDefaultDateTime
 * ============================================================ */


void InitializeRtcDefaultDateTime(void)

{
  int iVar1;
  byte abStack_10 [8];
  int local_8;
  
  local_8 = 0;
  abStack_10[0] = 0;
  abStack_10[1] = 0;
  abStack_10[2] = 0;
  abStack_10[3] = 0;
  abStack_10[4] = 0;
  abStack_10[5] = 0;
  abStack_10[6] = 0;
  abStack_10[7] = 0;
  InitializeRtcHardware();
  ReadRtcDateTime(abStack_10);
  ReadRtcDateTimeAndValidate(10,0x14);
  WaitForKeyOrCallback(1);
  abStack_10[2] = abStack_10[2] + 1;
  WriteRtcDateTime(abStack_10);
  do {
    ReadRtcDateTimeAndValidate(10,0x15);
    iVar1 = local_8;
    local_8 = local_8 + 1;
    PrintfTextLayer(10,10,"%d",iVar1);
  } while( true );
}




/* ============================================================
 * 0000ba84 RtcDefaultInitReturn
 * ============================================================ */


void RtcDefaultInitReturn(void)

{
  return;
}




/* ============================================================
 * 0000ba88 SpriteSystemNoopA
 * ============================================================ */


void SpriteSystemNoopA(void)

{
  return;
}




/* ============================================================
 * 0000ba8a SpriteSystemNoopB
 * ============================================================ */


void SpriteSystemNoopB(void)

{
  return;
}




/* ============================================================
 * 0000ba8c SpriteSystemNoopC
 * ============================================================ */


void SpriteSystemNoopC(void)

{
  return;
}




/* ============================================================
 * 0000ba8e SpriteSystemNoopD
 * ============================================================ */


void SpriteSystemNoopD(void)

{
  return;
}




/* ============================================================
 * 0000ba90 SetSpriteSystemEnabledFlag
 * ============================================================ */


undefined1 SetSpriteSystemEnabledFlag(void)

{
  sprite_system_enabled_flag = 1;
  return 1;
}




/* ============================================================
 * 0000baa2 SpriteSystemNoopE
 * ============================================================ */


void SpriteSystemNoopE(void)

{
  return;
}




/* ============================================================
 * 0000baa4 InitSpriteListSystem
 * ============================================================ */


void InitSpriteListSystem(void)

{
  int iVar1;
  PgmSpriteDisplaySlot *pPVar2;
  
  EndSpriteDmaPulse();
  pPVar2 = sprite_display_slots;
  for (iVar1 = 0; iVar1 < 2; iVar1 = iVar1 + 1) {
    pPVar2->bState = 0;
    pPVar2 = pPVar2 + 1;
  }
  sprite_display_list_head = (PgmSpriteDisplaySlot *)0x0;
  sprite_display_list_aux_state = 0;
  sprite_display_list_dirty = 1;
  sprite_extra_vblank_wait_enabled = 0;
  return;
}




/* ============================================================
 * 0000bae6 AllocateSpriteListSlot
 * ============================================================ */


int AllocateSpriteListSlot(void)

{
  int slot_index;
  PgmSpriteDisplaySlot *slot;
  
  slot_index = 0;
  slot = sprite_display_slots;
  while( true ) {
    if (1 < slot_index) {
      slot_index = ResourceErrorScreen("DISPLAY USE");
      return slot_index;
    }
    if (slot->bState == '\0') break;
    slot_index = slot_index + 1;
    slot = slot + 1;
  }
  slot->dwSource_ptr = 0;
  slot->bState = 1;
  slot->bControl = 0;
  slot->dwReserved = 0;
  return slot_index;
}




/* ============================================================
 * 0000bb24 InsertSpriteDisplaySorted
 * ============================================================ */


PgmSpriteDisplaySlot * InsertSpriteDisplaySorted(int slot,undefined4 source_ptr,short sort_key)

{
  PgmSpriteDisplaySlot *slot_offset;
  PgmSpriteDisplaySlot *next_slot;
  undefined2 *slot_state_ptr;
  PgmSpriteDisplaySlot *insert_after;
  PgmSpriteDisplaySlot *scan;
  
  if ((slot < 0) || (1 < slot)) {
    AssertFailScreen("h>=0 && h<MAXDISPLAY","cdisplay.c",0x54);
  }
  slot_offset = (PgmSpriteDisplaySlot *)(slot * 0x14);
  slot_state_ptr = &slot_offset[0x6690b].wSort_key;
  slot_offset[0x6690b].dwReserved = source_ptr;
  *(short *)&slot_offset[0x6690b].dwPrev = sort_key;
  next_slot = slot_offset;
  scan = sprite_display_list_head;
  if (sprite_display_list_head == (PgmSpriteDisplaySlot *)0x0) {
    *(undefined4 *)((int)&slot_offset[0x6690b].dwNext + 2) = 0x80350a;
    slot_offset[0x6690c].dwSource_ptr = 0;
    sprite_display_list_head = (PgmSpriteDisplaySlot *)slot_state_ptr;
  }
  else {
    do {
      insert_after = scan;
      if (sort_key < (short)insert_after->wSort_key) {
        insert_after = (PgmSpriteDisplaySlot *)insert_after->dwPrev;
        break;
      }
      next_slot = (PgmSpriteDisplaySlot *)insert_after->dwNext;
      scan = next_slot;
    } while (next_slot != (PgmSpriteDisplaySlot *)0x0);
    slot_offset[0x6690c].dwSource_ptr = insert_after->dwNext;
    *(PgmSpriteDisplaySlot **)((int)&slot_offset[0x6690b].dwNext + 2) = insert_after;
    insert_after->dwNext = slot_state_ptr;
    if (slot_offset[0x6690c].dwSource_ptr != 0) {
      *(undefined2 **)(slot_offset[0x6690c].dwSource_ptr + 0xc) = slot_state_ptr;
    }
  }
  *(undefined1 *)slot_state_ptr = 2;
  sprite_display_list_dirty = 1;
  return next_slot;
}




/* ============================================================
 * 0000bbda UnlinkSpriteDisplaySlot
 * ============================================================ */


void UnlinkSpriteDisplaySlot(int slot_index)

{
  PgmSpriteDisplaySlot *slot;
  
  if ((slot_index < 0) || (1 < slot_index)) {
    AssertFailScreen("h>=0 && h<MAXDISPLAY","cdisplay.c",0x83);
  }
  slot = sprite_display_slots + slot_index;
  if ((slot->bState == '\x02') || (slot->bState == -0x80)) {
    *(undefined4 *)(sprite_display_slots[slot_index].dwPrev + 0x10) =
         sprite_display_slots[slot_index].dwNext;
    if (sprite_display_slots[slot_index].dwNext != 0) {
      *(undefined4 *)(sprite_display_slots[slot_index].dwNext + 0xc) =
           sprite_display_slots[slot_index].dwPrev;
    }
    slot->bState = 1;
    sprite_display_list_dirty = 1;
  }
  return;
}




/* ============================================================
 * 0000bc50 DumpSpriteDisplayListDebug
 * ============================================================ */


void DumpSpriteDisplayListDebug(void)

{
  int display_count;
  PgmSpriteDisplaySlot *slot;
  
  display_count = 0;
  for (slot = sprite_display_list_head; slot != (PgmSpriteDisplaySlot *)0x0;
      slot = (PgmSpriteDisplaySlot *)slot->dwNext) {
    PrintfTextLayer(10,display_count + 5,"%06X",slot);
    display_count = display_count + 1;
  }
  PrintfTextLayer(10,display_count + 5,"TOTAL=%d",display_count);
  WaitForKeyOrCallback(1);
  return;
}




/* ============================================================
 * 0000bcb2 HideSpriteDisplaySlot
 * ============================================================ */


void HideSpriteDisplaySlot(int param_1)

{
  if ((param_1 < 0) || (1 < param_1)) {
    AssertFailScreen("h>=0 && h<MAXDISPLAY","cdisplay.c",0xa5);
  }
  sprite_display_slots[param_1].bState = 0x80;
  sprite_display_list_dirty = 1;
  return;
}




/* ============================================================
 * 0000bd02 ShowSpriteDisplaySlot
 * ============================================================ */


void ShowSpriteDisplaySlot(int param_1)

{
  if ((param_1 < 0) || (1 < param_1)) {
    AssertFailScreen("h>=0 && h<MAXDISPLAY","cdisplay.c",0xb0);
  }
  sprite_display_slots[param_1].bState = 2;
  sprite_display_list_dirty = 1;
  return;
}




/* ============================================================
 * 0000bd52 ClearSpriteDisplaySlot
 * ============================================================ */


void ClearSpriteDisplaySlot(int param_1)

{
  if ((param_1 < 0) || (1 < param_1)) {
    AssertFailScreen("h>=0 && h<MAXDISPLAY","cdisplay.c",0xbb);
  }
  UnlinkSpriteDisplaySlot(param_1);
  sprite_display_slots[param_1].bState = 0;
  sprite_display_list_dirty = 1;
  return;
}




/* ============================================================
 * 0000bda8 SetSpriteDisplaySourcePointer
 * ============================================================ */


void SetSpriteDisplaySourcePointer(int param_1,undefined4 param_2)

{
  if ((param_1 < 0) || (1 < param_1)) {
    AssertFailScreen("h>=0 && h<MAXDISPLAY","cdisplay.c",0xca);
  }
  sprite_display_slots[param_1].dwSource_ptr = param_2;
  return;
}




/* ============================================================
 * 0000bdf6 SetSpriteDisplaySortKey
 * ============================================================ */


void SetSpriteDisplaySortKey(int param_1,short param_2)

{
  if ((param_1 < 0) || (1 < param_1)) {
    AssertFailScreen("h>=0 && h<MAXDISPLAY","cdisplay.c",0xd4);
  }
  if (param_2 != sprite_display_slots[param_1].wSort_key) {
    UnlinkSpriteDisplaySlot(param_1);
    InsertSpriteDisplaySorted(param_1,sprite_display_slots[param_1].dwSource_ptr,param_2);
  }
  return;
}




/* ============================================================
 * 0000be5c SetSpriteDisplayControlByte
 * ============================================================ */


void SetSpriteDisplayControlByte(int param_1,undefined1 param_2)

{
  if ((param_1 < 0) || (1 < param_1)) {
    AssertFailScreen("h>=0 && h<MAXDISPLAY","cdisplay.c",0xe0);
  }
  sprite_display_slots[param_1].bControl = param_2;
  sprite_display_list_dirty = 1;
  return;
}




/* ============================================================
 * 0000beb2 MarkSpriteDisplayDirtyBySlot
 * ============================================================ */


void MarkSpriteDisplayDirtyBySlot(int param_1)

{
  if ((param_1 < 0) || (1 < param_1)) {
    AssertFailScreen("h>=0 && h<MAXDISPLAY","cdisplay.c",0xec);
  }
  sprite_display_list_dirty = 1;
  return;
}




/* ============================================================
 * 0000bf00 MarkSpriteDmaListDirty
 * ============================================================ */


void MarkSpriteDmaListDirty(void)

{
  sprite_display_list_dirty = 1;
  return;
}




/* ============================================================
 * 0000bf0a DumpSpriteBufferDebug
 * ============================================================ */


void DumpSpriteBufferDebug(void)

{
  ushort entry_count;
  PgmSpriteHardwareEntry *entry;
  
  entry_count = 0;
  for (entry = work_ram_sprite_dma_buffer;
      ((entry->wSize & 0x7e00) != 0 || ((entry->wSize & 0x1ff) != 0)); entry = entry + 1) {
    PrintfTextLayer(0,(uint)entry_count,"X=%5d Y=%5d W=%3d H=%3d HREV=%1d PAL=%2d",
                    (int)((uint)entry->wX << 0x15) >> 0x15,(int)((uint)entry->wY << 0x16) >> 0x16,
                    (*(byte *)&entry->wSize & 0x7e) >> 1,entry->wSize & 0x1ff,
                    (*(byte *)&entry->wAttr & 0x20) >> 5,*(byte *)&entry->wAttr & 0x1f);
    entry_count = entry_count + 1;
  }
  PrintfTextLayer(10,(uint)entry_count,"---TOTAL=%d---",(uint)entry_count);
  WaitForKeyOrCallback(1);
  return;
}




/* ============================================================
 * 0000bfd4 BuildSpriteDmaList
 * ============================================================ */


undefined4 BuildSpriteDmaList(void)

{
  ushort entry_count;
  PgmSpriteDisplaySlot *display_slot;
  PgmSpriteHardwareEntry *dma_entry;
  ushort *dst_size;
  ushort *src_size;
  ushort *src_entry;
  ushort word_value;
  
  dma_entry = work_ram_sprite_dma_buffer;
  for (display_slot = sprite_display_list_head; display_slot != (PgmSpriteDisplaySlot *)0x0;
      display_slot = (PgmSpriteDisplaySlot *)display_slot->dwNext) {
    if ((display_slot->bState == '\x02') && (display_slot->bControl != '\0')) {
      entry_count = (ushort)(byte)display_slot->bControl;
      src_entry = (ushort *)display_slot->dwSource_ptr;
      if (((src_entry[4] & 0x7e00) == 0) && ((src_entry[4] & 0x1ff) == 0)) {
        PrintfTextLayer(0,10,"X=%5d Y=%5d W=%3d H=%3d HREV=%1d PAL=%2d",
                        (int)((uint)*src_entry << 0x15) >> 0x15,
                        (int)((uint)src_entry[1] << 0x16) >> 0x16,
                        (*(byte *)(src_entry + 4) & 0x7e) >> 1,src_entry[4] & 0x1ff,
                        (*(byte *)(src_entry + 2) & 0x20) >> 5,*(byte *)(src_entry + 2) & 0x1f);
        WaitForKeyOrCallback(1);
      }
      while (entry_count != 0) {
        word_value = src_entry[1];
        dma_entry->wX = src_entry[0];
        dma_entry->wY = word_value;
        src_size = src_entry + 4;
        word_value = src_entry[3];
        dst_size = &dma_entry->wSize;
        dma_entry->wAttr = src_entry[2];
        dma_entry->wTile = word_value;
        src_entry = src_entry + 5;
        dma_entry = dma_entry + 1;
        *dst_size = *src_size;
        entry_count = entry_count - 1;
      }
    }
  }
  dma_entry->wX = 0;
  dma_entry->wY = 0;
  dma_entry->wAttr = 0;
  dma_entry->wTile = 0;
  dma_entry->wSize = 0;
  return 0;
}




/* ============================================================
 * 0000c0b4 StartSpriteDma
 * ============================================================ */


void StartSpriteDma(void)

{
  TriggerSpriteDma();
  return;
}




/* ============================================================
 * 0000c0bc EndSpriteDmaPulse
 * ============================================================ */


void EndSpriteDmaPulse(void)

{
  ClearSpriteDmaShadowBit();
  return;
}




/* ============================================================
 * 0000c0c4 FlushSpritesIfDirtyAndWait
 * ============================================================ */


void FlushSpritesIfDirtyAndWait(void)

{
  if (sprite_display_list_dirty != 0) {
    BuildSpriteDmaList();
    StartSpriteDma();
    sprite_display_list_dirty = 0;
  }
  WaitForVblankOrCallback();
  EndSpriteDmaPulse();
  if (sprite_extra_vblank_wait_enabled != 0) {
    if ((sprite_extra_vblank_wait_count != 0) &&
       (sprite_extra_vblank_wait_count = sprite_extra_vblank_wait_count + -1,
       sprite_extra_vblank_wait_count == 0)) {
      sprite_extra_vblank_wait_enabled = 0;
    }
    WaitForVblankOrCallback();
    WaitForVblankOrCallback();
    WaitForVblankOrCallback();
    WaitForVblankOrCallback();
  }
  return;
}




/* ============================================================
 * 0000c122 FlushSpritesViaDma
 * ============================================================ */


void FlushSpritesViaDma(void)

{
  BuildSpriteDmaList();
  StartSpriteDma();
  WaitForVblankOrCallback();
  EndSpriteDmaPulse();
  return;
}




/* ============================================================
 * 0000c136 SpriteFlushNoop
 * ============================================================ */


void SpriteFlushNoop(void)

{
  return;
}




/* ============================================================
 * 0000c138 ResetSpriteSystemWithIrqMask
 * ============================================================ */


void ResetSpriteSystemWithIrqMask(void)

{
  undefined4 uVar1;
  
  uVar1 = GetInterruptLevel();
  EnterCriticalSection();
  InitSpriteListSystem();
  SetInterruptLevel(uVar1);
  return;
}




/* ============================================================
 * 0000c15a FlushSpriteDmaListFromDisplays
 * ============================================================ */


undefined4 FlushSpriteDmaListFromDisplays(int param_1)

{
  if ((param_1 < 0) || (1 < param_1)) {
    AssertFailScreen("h>=0 && h<MAXDISPLAY","cdisplay.c",0x1a2);
  }
  return sprite_display_slots[param_1].dwReserved;
}




/* ============================================================
 * 0000c1a2 StartPgmLogoAnimation
 * ============================================================ */


void StartPgmLogoAnimation(void)

{
  sprite_extra_vblank_wait_count = -1;
  sprite_extra_vblank_wait_enabled = 1;
  return;
}




/* ============================================================
 * 0000c1b4 StopPgmLogoAnimation
 * ============================================================ */


void StopPgmLogoAnimation(void)

{
  sprite_extra_vblank_wait_enabled = 0;
  return;
}




/* ============================================================
 * 0000c1bc ResumePgmLogoAnimation
 * ============================================================ */


void ResumePgmLogoAnimation(int param_1)

{
  sprite_extra_vblank_wait_enabled = 1;
  sprite_extra_vblank_wait_count = param_1;
  return;
}




/* ============================================================
 * 0000c1ce RunPgmLogoAnimationStep
 * ============================================================ */


void RunPgmLogoAnimationStep(void)

{
  uint uVar1;
  int picture_index;
  ushort auStack_48 [32];
  int local_8;
  
  QueueZ80AudioCommand(0,1,0xff,0);
  RunBiosIntroScroll();
  FillWords(auStack_48,0xffff,0x20);
  picture_index = 0;
  do {
    uVar1 = CalcImageTileOffset(1,0xb5e00);
    RenderImageToFontBuffer(1,0,0,&pgm_logo_image_descriptor,picture_index,0,'\0',(short)uVar1);
    CopyPaletteFromTable
              (1,0,*(undefined4 *)
                    ((int)intro_logo_palette_table + (int)(short)((short)picture_index << 2)));
    WaitTimerOrCallback((uint)intro_logo_frame_delay_table[(short)picture_index],(void *)0x0);
    picture_index = picture_index + 1;
  } while (picture_index < 0x14);
  WaitTimerOrCallback(10,(void *)0x0);
  local_8 = StartFadePaletteSlot(1,0,intro_logo_palette_frame_19);
  FadePaletteFromWhite(0,2);
  WaitForAllFades();
  WaitTimerOrCallback(10,(void *)0x0);
  CopyPaletteFromTable(1,0,intro_logo_palette_frame_19);
  WaitTimerOrCallback(0x5a,(void *)0x0);
  FadeScreenToBlack(1);
  WaitForAllFades();
  ResetFadePaletteSystem();
  return;
}




/* ============================================================
 * 0000c2f6 RunPgmLogoAnimation
 * ============================================================ */


void RunPgmLogoAnimation(void)

{
  uint tile_offset_or_hflip;
  int picture_index;
  int frame_index;
  int scroll_x;
  uchar palette;
  ushort scratch_words [32];
  short tile_offset;
  
  FillWords(scratch_words,0xffff,0x20);
  SetScrollPair(0,0,0xffffffd3);
  CopyPaletteFromTable(0,0,pgm_logo_palette_words);
  frame_index = 0xf;
  scroll_x = -0x2d;
  do {
    tile_offset_or_hflip = CalcImageTileOffset(0,0x500);
    tile_offset = (short)tile_offset_or_hflip;
    palette = '\0';
    tile_offset_or_hflip = 0;
    picture_index = DivSigned32Remainder(frame_index,0x1e);
    RenderImageToFontBuffer
              (0,0x13,0x14,&pgm_logo_animation_image_descriptor,picture_index,tile_offset_or_hflip,
               palette,tile_offset);
    WaitTimerOrCallback(4,(void *)0x0);
    SetScrollPair(0,0,scroll_x);
    frame_index = frame_index + 1;
    scroll_x = scroll_x + 1;
  } while (frame_index < 0x3c);
  frame_index = 0;
  do {
    tile_offset_or_hflip = CalcImageTileOffset(0,0x500);
    RenderImageToFontBuffer
              (0,0x13,0x14,&pgm_logo_animation_image_descriptor,
               *(int *)((int)pgm_logo_animation_picture_indices +
                       (int)(short)((short)frame_index << 2)),0,'\0',(short)tile_offset_or_hflip);
    WaitTimerOrCallback(2,(void *)0x0);
    frame_index = frame_index + 1;
  } while (frame_index < 6);
  tile_offset_or_hflip = CalcImageTileOffset(0,0x500);
  RenderImageToFontBuffer
            (0,0x13,0x14,&pgm_logo_animation_image_descriptor,0x1e,0,'\0',
             (short)tile_offset_or_hflip);
  WaitTimerOrCallback(10,(void *)0x0);
  WaitTimerOrCallback(0x5a,(void *)0x0);
  StartFadePaletteSlot(0,0,pgm_logo_palette_words);
  FadeScreenToBlack(1);
  WaitForAllFades();
  ResetFadePaletteSystem();
  return;
}




/* ============================================================
 * 0000c462 RunBiosIntroScroll
 * ============================================================ */


void RunBiosIntroScroll(void)

{
  uint tile_offset;
  int scroll_or_picture_index;
  int delta_index;
  
  ClearVideoRamPalettesAndScale();
  SetScrollPair(1,0,0x60);
  StartFadePaletteSlot(1,0,intro_scroll_palette_words);
  tile_offset = CalcImageTileOffset(1,0xb5e00);
  RenderImageToFontBuffer(1,3,0,&intro_scroll_image_descriptor,0,0,'\0',(short)tile_offset);
  UpdateFadePaletteCopies();
  scroll_or_picture_index = 0x60;
  do {
    SetScrollPair(1,0,scroll_or_picture_index);
    WaitTimerOrCallback(1,(void *)0x0);
    scroll_or_picture_index = scroll_or_picture_index + -8;
  } while (0x1f < scroll_or_picture_index);
  scroll_or_picture_index = 0;
  for (delta_index = 0; delta_index < 0x12; delta_index = delta_index + 1) {
    scroll_or_picture_index =
         *(int *)((int)intro_scroll_y_delta_table + (int)(short)((short)delta_index << 2)) +
         scroll_or_picture_index;
    SetScrollPair(1,0,scroll_or_picture_index + 0x20);
    WaitTimerOrCallback(1,(void *)0x0);
  }
  WaitTimerOrCallback(0x2d,(void *)0x0);
  FillRowScrollRam(0x60,0x20,0x10);
  scroll_or_picture_index = 1;
  do {
    tile_offset = CalcImageTileOffset(1,0xb5e00);
    RenderImageToFontBuffer
              (1,2,4,&intro_scroll_image_descriptor,scroll_or_picture_index,0,'\0',
               (short)tile_offset);
    WaitTimerOrCallback(6,(void *)0x0);
    scroll_or_picture_index = scroll_or_picture_index + 1;
  } while (scroll_or_picture_index < 0xf);
  WaitTimerOrCallback(0x3c,(void *)0x0);
  return;
}




/* ============================================================
 * 0000c5b8 RunBiosIntroAttract
 * ============================================================ */


void RunBiosIntroAttract(void)

{
  QueueZ80AudioCommand(0,1,0xff,0);
  RunBiosIntroScroll();
  RunPgmLogoAnimation();
  DrawImageAtTilePos(1,3,0,9,4);
  DrawImageAtTilePos(1,2,4,0xc,1);
  DrawImageAtTilePos(0,0x13,0x14,0x10,8);
  InfiniteWaitLoop();
  return;
}




/* ============================================================
 * 0000c67c GetIntroAttractEnabledStub
 * ============================================================ */


void GetIntroAttractEnabledStub(void)

{
  RunBiosIntroScroll();
  RunPgmLogoAnimationStep();
  return;
}




/* ============================================================
 * 0000c686 RunAttractInputToggleTestPage
 * ============================================================ */


undefined4 RunAttractInputToggleTestPage(void)

{
  ushort dip_switches;
  uint key_pressed_or_dips;
  int col_mod;
  char *label_text;
  int index_or_x;
  short key_index_short;
  int key_index;
  uint last_dips;
  uchar label_palette;
  char pressed_char;
  byte toggle_state [48];
  char pressed_state [48];
  int tile_y;
  bool redraw;
  
  last_dips = 0x55aa;
  redraw = true;
  ClearTextTilemap();
  LoadDefaultTextPalettes();
  CopyPaletteFromTable(0,6,menu_arrow_palette_words);
  index_or_x = 0;
  do {
    toggle_state[(short)index_or_x] = 0;
    pressed_state[(short)index_or_x] = '\0';
    index_or_x = index_or_x + 1;
  } while (index_or_x < 0x30);
  DrawStringTiles(0,0xd,1,'\x03',1,"   I/O TEST");
  DrawStringTiles(0,0x14,3,'\x03',0," DIPSW1");
  DrawStringTiles(0,0x14,4,'\0',0,"87654321");
  DrawStringTiles(0,10,0x1a,'\x03',0,"EXIT:PRESS [START1] BUTTON");
  do {
    dip_switches = ReadDipSwitchesInverted();
    key_pressed_or_dips = dip_switches & 0xff;
    if (last_dips != key_pressed_or_dips) {
      PrintfTilesBanked(0,0x14,5,'\0',0,"%08b",key_pressed_or_dips);
      last_dips = key_pressed_or_dips;
    }
    index_or_x = 0;
    do {
      key_pressed_or_dips = ConsumeKeyPress(index_or_x + 1);
      pressed_char = (char)key_pressed_or_dips;
      key_index_short = (short)index_or_x;
      pressed_state[key_index_short] = pressed_char;
      if (pressed_state[key_index_short] != '\0') {
        toggle_state[key_index_short] = toggle_state[key_index_short] ^ 1;
        redraw = true;
      }
      index_or_x = index_or_x + 1;
    } while (index_or_x < 0x30);
    if (redraw) {
      index_or_x = 1;
      tile_y = 8;
      key_index = 0;
      do {
        col_mod = DivSigned32Remainder(key_index,4);
        if (col_mod == 0) {
          tile_y = tile_y + 1;
          index_or_x = 1;
        }
        if (toggle_state[(short)key_index] == 0) {
          label_palette = '\0';
        }
        else {
          label_palette = '\x03';
        }
        label_text = (char *)GetInputCallbackPointer(key_index + 1);
        DrawStringTiles(0,index_or_x,tile_y,label_palette,0,label_text);
        index_or_x = index_or_x + 0xd;
        key_index = key_index + 1;
      } while (key_index < 0x30);
      redraw = false;
    }
    key_pressed_or_dips = ConsumeKeyPress(1);
  } while (key_pressed_or_dips == 0);
  return 0;
}




/* ============================================================
 * 0000c82a ClearIntroAttractTilemap
 * ============================================================ */


undefined4 ClearIntroAttractTilemap(void)

{
  int slot;
  undefined4 uVar1;
  undefined4 uVar2;
  
  ClearVideoRamPalettesAndScale();
  SetScrollPair(0,0xffffffff,0);
  slot = 0;
  do {
    CopyPaletteChunk(0,slot,(undefined4 *)(intro_attract_palette_seed_words + slot));
    DrawImageAtTilePosWithPalette(0,slot * 0xb,0,0xb,0x1c,(byte)slot);
    slot = slot + 1;
  } while (slot < 5);
  uVar2 = 0;
  uVar1 = 1;
  WaitForKeyOrCallback(1);
  LoadDefaultTextPalettes(uVar1,uVar2);
  CopyPaletteFromTable(0,6,menu_arrow_palette_words);
  SetScrollPair(0,0,0);
  return 0;
}




/* ============================================================
 * 0000c8c4 RunIntroColorPatternPage
 * ============================================================ */


undefined4 RunIntroColorPatternPage(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  ClearTextTilemap();
  uVar1 = CalcImageTileOffset(0,0x500);
  DrawPictureTilesWithAttributes(0,0,0,&color_pattern_image_descriptor,0,0,'\x06',(short)uVar1);
  CopyPaletteFromTable(0,6,intro_color_pattern_palette_words);
  uVar3 = 0;
  uVar2 = 1;
  WaitForKeyOrCallback(1);
  LoadDefaultTextPalettes(uVar2,uVar3);
  CopyPaletteFromTable(0,6,menu_arrow_palette_words);
  return 0;
}




/* ============================================================
 * 0000c936 RunIntroSoundTestPage
 * ============================================================ */


undefined4 RunIntroSoundTestPage(void)

{
  int handle;
  int timer_value;
  uint key_pressed;
  int note_index;
  
  note_index = 0;
  ClearTextTilemap();
  DrawStringTiles(0,0x10,1,'\x03',1,"SOUND TEST ");
  DrawEmptyGridCells(8,2,0x28);
  QueueZ80CmdBytes(0x10,2,0xff);
  handle = AllocateTimer();
  SetTimerValue(handle,0);
  do {
    timer_value = GetTimerValue(handle);
    if (timer_value == 0) {
      QueueZ80AudioCommand(0,(ushort)intro_sound_test_note_sequence[(short)note_index],0x96,0);
      if (note_index == 8) {
        note_index = 0;
      }
      else {
        note_index = note_index + 1;
      }
      SetTimerValue(handle,0x14);
    }
    key_pressed = ConsumeKeyPress(1);
  } while (key_pressed == 0);
  FreeTimer(handle);
  QueueZ80CmdNoParam(0x14,0);
  return 0;
}




/* ============================================================
 * 0000ca24 RunIntroCounterTestPage
 * ============================================================ */


undefined4 RunIntroCounterTestPage(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  ClearTextTilemap(0);
  DrawStringTiles(0,0x10,1,'\x03',1,"COUNTER TEST ");
  DrawEmptyGridCells(8,2,0x28);
  SetCoinCounterPulse(0,1000);
  SetCoinCounterPulse(1,1000);
  SetCoinCounterPulse(2,1000);
  SetCoinCounterPulse(3,1000);
  uVar2 = 0;
  uVar1 = 1;
  WaitForKeyOrCallback(1);
  ClearCoinCounters(uVar1,uVar2);
  pgm_jamma_io.wDipswitches = 0;
  return 0;
}




/* ============================================================
 * 0000caba DrawIntroMosaicTileBlock
 * ============================================================ */


void DrawIntroMosaicTileBlock(int tile_x,int tile_y,uchar palette)

{
  uint image_tile_offset;
  uint tile_index_or_row_offset;
  int iVar1;
  int row;
  undefined4 *tile_dst;
  undefined4 *row_dst;
  uint in_stack_00000010;
  int col;
  
  image_tile_offset = CalcImageTileOffset(0,0x500);
  tile_index_or_row_offset = MulUnsigned32(0x40,tile_y);
  row_dst = (undefined4 *)(&pgm_text_tilemap + (tile_x + tile_index_or_row_offset) * 4);
  tile_index_or_row_offset = MulUnsigned32(in_stack_00000010,3);
  tile_index_or_row_offset = MulUnsigned32(tile_index_or_row_offset,3);
  iVar1 = image_tile_offset + 0x147f + tile_index_or_row_offset;
  for (row = 0; row < 3; row = row + 1) {
    tile_dst = row_dst;
    for (col = 0; col < 3; col = col + 1) {
      *tile_dst = 0;
      *(byte *)((int)tile_dst + 3) = *(byte *)((int)tile_dst + 3) & 0xc1;
      *(byte *)((int)tile_dst + 3) = (palette & 0x1f) * '\x02' | *(byte *)((int)tile_dst + 3);
      *(short *)tile_dst = (short)iVar1;
      tile_dst = tile_dst + 1;
      iVar1 = iVar1 + 1;
    }
    row_dst = row_dst + 0x40;
  }
  return;
}




/* ============================================================
 * 0000cb76 RunIntroGraphicsDemo
 * ============================================================ */


undefined4 RunIntroGraphicsDemo(void)

{
  uint key_or_tile_offset;
  int phase_or_delay;
  int tile_y_or_delay;
  int tile_x;
  
  ClearTextTilemap();
  ClearBgTilemap();
  SetScrollPair(1,0,0x1e);
  CopyPaletteFromTable(1,0,intro_scroll_palette_words);
  key_or_tile_offset = CalcImageTileOffset(1,0xb5e00);
  DrawPictureTilesWithAttributes
            (1,3,0,&intro_scroll_image_descriptor,0,0,'\0',(short)key_or_tile_offset);
  key_or_tile_offset = CalcImageTileOffset(1,0xb5e00);
  DrawPictureTilesWithAttributes
            (1,2,4,&intro_scroll_image_descriptor,0xe,0,'\0',(short)key_or_tile_offset);
  CopyPaletteFromTable(0,7,pgm_logo_palette_words);
  key_or_tile_offset = CalcImageTileOffset(0,0x500);
  DrawPictureTilesWithAttributes
            (0,0x13,0x14,&pgm_logo_animation_image_descriptor,0x1d,0,'\a',(short)key_or_tile_offset)
  ;
  phase_or_delay = 0;
  do {
    WaitTimerOrCallback(1,(void *)0x0);
    key_or_tile_offset = ConsumeKeyPress(1);
    if (key_or_tile_offset != 0) {
      ClearBgTilemap();
      SetScrollPair(1,0,0);
      return 0;
    }
    phase_or_delay = phase_or_delay + 1;
  } while (phase_or_delay < 0x28);
  QueueZ80AudioCommand(0,5,200,0);
  ClearBgTilemap();
  SetScrollPair(1,0,0);
  key_or_tile_offset = ConsumeKeyPress(1);
  if (key_or_tile_offset == 0) {
    CopyPaletteFromTable(0,7,intro_mosaic_palette_words);
    phase_or_delay = 0;
    do {
      tile_y_or_delay = 0;
      do {
        tile_x = 0;
        do {
          DrawIntroMosaicTileBlock(tile_x,tile_y_or_delay,'\a');
          tile_x = tile_x + 3;
        } while (tile_x < 0x38);
        tile_y_or_delay = tile_y_or_delay + 3;
      } while (tile_y_or_delay < 0x1c);
      tile_y_or_delay = 0;
      do {
        WaitTimerOrCallback(1,(void *)0x0);
        key_or_tile_offset = ConsumeKeyPress(1);
        if (key_or_tile_offset != 0) {
          return 0;
        }
        tile_y_or_delay = tile_y_or_delay + 1;
      } while (tile_y_or_delay < 0x1e);
      QueueZ80AudioCommand(0,5,200,0);
      phase_or_delay = phase_or_delay + 1;
    } while (phase_or_delay < 6);
  }
  return 0;
}




/* ============================================================
 * 0000cd90 RunQcCursorLoop
 * ============================================================ */


int RunQcCursorLoop(int tile_x,int tile_y,char **menu_items,int item_count,int initial_selection,
                   int show_rtc)

{
  uint key_pressed;
  int current_selection;
  int next_selection;
  bool redraw_selection;
  
  redraw_selection = true;
  current_selection = initial_selection;
  do {
    if (show_rtc != 0) {
      UpdateRtcDisplayIfChanged();
    }
    key_pressed = ConsumeKeyPress(3);
    if (key_pressed == 0) {
      key_pressed = ConsumeKeyPress(2);
      next_selection = current_selection;
      if (key_pressed != 0) {
        next_selection = item_count;
        if (0 < current_selection) {
          next_selection = current_selection;
        }
        redraw_selection = true;
        next_selection = next_selection + -1;
        initial_selection = current_selection;
      }
    }
    else if (current_selection < item_count + -1) {
      redraw_selection = true;
      next_selection = current_selection + 1;
      initial_selection = current_selection;
    }
    else {
      redraw_selection = true;
      next_selection = 0;
      initial_selection = current_selection;
    }
    if (redraw_selection) {
      DrawStringTiles(0,tile_x + -3,tile_y + initial_selection * 2,'\0',1," ");
      DrawStringTiles(0,tile_x + -3,tile_y + next_selection * 2,'\x03',1,"*");
      DrawStringTiles(0,tile_x,tile_y + initial_selection * 2,'\0',1,menu_items[initial_selection]);
      DrawStringTiles(0,tile_x,tile_y + next_selection * 2,'\x03',1,menu_items[next_selection]);
      redraw_selection = false;
    }
    key_pressed = ConsumeKeyPress(1);
    current_selection = next_selection;
  } while (key_pressed == 0);
  return next_selection;
}




/* ============================================================
 * 0000cec0 RunQcTestMenu
 * ============================================================ */


undefined4 RunQcTestMenu(void)

{
  int selection;
  int index_or_result;
  
  selection = 0;
  ClearVideoRamPalettesAndScale();
  while( true ) {
    ClearTextTilemap();
    LoadDefaultTextPalettes();
    CopyPaletteFromTable(0,6,menu_arrow_palette_words);
    DrawStringTiles(0,0x10,1,'\x03',1,"QC TEST");
    DrawEmptyGridCells(8,2,0x28);
    for (index_or_result = 0; index_or_result < 7; index_or_result = index_or_result + 1) {
      DrawStringTiles(0,0xd,index_or_result * 2 + 6,'\0',1,
                      *(char **)((int)qc_test_menu_labels +
                                (int)(short)((short)index_or_result << 2)));
    }
    selection = RunQcCursorLoop(0xd,6,qc_test_menu_labels,7,selection,1);
    if (selection == -1) break;
    index_or_result =
         (**(code **)((int)qc_test_menu_callbacks + (int)(short)((short)selection << 2)))();
    if (index_or_result == 1) {
      return 0;
    }
    selection = selection + 1;
    if (selection == 7) {
      selection = 0;
    }
  }
  return 0;
}




/* ============================================================
 * 0000cfa8 CheckCartHeaderValid
 * ============================================================ */


void CheckCartHeaderValid(void)

{
  int iVar1;
  
  iVar1 = CompareCString(&cart_header_string,"IGS PGM PLATFORM GAMES");
  cart_header_valid = iVar1 == 0;
  return;
}




/* ============================================================
 * 0000cfd2 CallCartInitRoutine
 * ============================================================ */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CallCartInitRoutine(undefined4 param_1,undefined4 param_2)

{
  if (cart_header_valid != '\0') {
    (*_cart_init_routine_ptr)(param_1,param_2);
  }
  return;
}




/* ============================================================
 * 0000cff2 IsCartHeaderValid
 * ============================================================ */


undefined1 IsCartHeaderValid(void)

{
  return cart_header_valid;
}




/* ============================================================
 * 0000cffe InitZ80SoundDriver
 * ============================================================ */


/* Z80 sound CPU init: asserts control/reset, copies embedded Z80 driver at ROM 0xec98 to Z80 RAM
   0xc10000, verifies it, releases control/reset. */

void InitZ80SoundDriver(void)

{
  int index_or_delay;
  ushort *z80_ram_word;
  
  z80_latch_low_nibble_shadow = 0xffff;
  z80_latch3_high_nibble_shadow = 0;
  MarkZ80AudioNotReady();
  pgm_z80_rtc_io.wZ80_control = 0x45d3;
  pgm_z80_rtc_io.wZ80_reset = 0xa659;
  index_or_delay = 0;
  do {
    index_or_delay = index_or_delay + 1;
  } while (index_or_delay < 5);
  FillWords((ushort *)&pgm_z80_ram,0x7676,0x8000);
  CopyWords((undefined2 *)&pgm_z80_ram,(undefined2 *)embedded_z80_sound_driver_blob,0x1a73);
  z80_ram_word = (ushort *)&pgm_z80_ram;
  index_or_delay = 0;
  do {
    if (*(ushort *)(embedded_z80_sound_driver_blob + index_or_delay * 2) != *z80_ram_word) {
      LoadDefaultTextPalettes();
      PrintfTextLayer(10,0x14,"<<<Error 68K:%x Z80Addr:%x Data: %x>>>",
                      *(undefined2 *)(embedded_z80_sound_driver_blob + index_or_delay * 2),
                      z80_ram_word,(uint)*z80_ram_word);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    z80_ram_word = z80_ram_word + 1;
    index_or_delay = index_or_delay + 1;
  } while (index_or_delay < 0x1a73);
  index_or_delay = 0;
  do {
    index_or_delay = index_or_delay + 1;
  } while (index_or_delay < 10);
  pgm_z80_rtc_io.wZ80_control = 0xa0a;
  pgm_z80_rtc_io.wZ80_reset = 0x5050;
  SetZ80AudioReadyFlag();
  return;
}




/* ============================================================
 * 0000d0e8 Copy68kToZ80Ram
 * ============================================================ */


void Copy68kToZ80Ram(undefined2 *param_1,ushort param_2,ushort param_3)

{
  int iVar1;
  
  MarkZ80AudioNotReady();
  pgm_z80_rtc_io.wZ80_control = 0x45d3;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
  } while (iVar1 < 5);
  CopyWords((undefined2 *)(&pgm_z80_ram + param_3),param_1,(uint)param_2);
  pgm_z80_rtc_io.wZ80_control = 0xa0a;
  SetZ80AudioReadyFlag();
  return;
}




/* ============================================================
 * 0000d142 Z80UploadFromRamTo68k
 * ============================================================ */


void Z80UploadFromRamTo68k(undefined2 *param_1,ushort param_2,ushort param_3)

{
  int iVar1;
  
  MarkZ80AudioNotReady();
  pgm_z80_rtc_io.wZ80_control = 0x45d3;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
  } while (iVar1 < 5);
  CopyWords(param_1,(undefined2 *)(&pgm_z80_ram + param_3),(uint)param_2);
  pgm_z80_rtc_io.wZ80_control = 0xa0a;
  SetZ80AudioReadyFlag();
  return;
}




/* ============================================================
 * 0000d19c VerifyZ80RamCopy
 * ============================================================ */


void VerifyZ80RamCopy(ushort *expected,ushort *actual,int word_count)

{
  while (word_count != 0) {
    if (*actual != *expected) {
      LoadDefaultTextPalettes();
      PrintfTextLayer(10,10,"MUSIC DOWNLOAD ERROR T=%06X(%04X) S=%06X(%04X)",expected,actual,
                      (uint)*expected,(uint)*actual);
      WaitForKeyOrCallback(1);
    }
    actual = actual + 1;
    expected = expected + 1;
    word_count = word_count + -1;
  }
  return;
}




/* ============================================================
 * 0000d20c UploadZ80MidiTables
 * ============================================================ */


short UploadZ80MidiTables(undefined4 *table,byte count)

{
  ushort *actual;
  ushort word_count;
  ushort z80_offset;
  int index_or_delay;
  short total_words;
  ushort *expected;
  ushort *index_entry;
  
  if (0x3f < count) {
    AssertFailScreen("ubTotal < conZ80MidiIndexMax",".z80cm68k2z80.c",0x185);
  }
  z80_offset = 0x8000;
  word_count = SumZ80TableWordSizes(table,count);
  if (0xfffe < word_count + 0x8000) {
    AssertFailScreen("((ULONG)uwZ80StartAddr + uwSize) < 0xffff",".z80cm68k2z80.c",0x18b);
  }
  expected = (ushort *)&z80_midi_data_area;
  total_words = 0;
  MarkZ80AudioNotReady();
  pgm_z80_rtc_io.wZ80_control = 0x45d3;
  index_or_delay = 0;
  do {
    index_or_delay = index_or_delay + 1;
  } while (index_or_delay < 5);
  z80_midi_count = (ushort)count;
  index_entry = (ushort *)z80_midi_index_table;
  z80_midi_count_mailbox = z80_midi_count;
  for (index_or_delay = 0; index_or_delay < (int)(uint)count; index_or_delay = index_or_delay + 1) {
    *index_entry = z80_offset << 8 | z80_offset >> 8;
    actual = (ushort *)*table;
    word_count = *(ushort *)(table + 1);
    CopyWords(expected,actual,(uint)word_count);
    VerifyZ80RamCopy(expected,actual,(uint)word_count);
    z80_offset = word_count * 2 + z80_offset;
    expected = expected + word_count;
    total_words = word_count + total_words;
    table = (undefined4 *)((int)table + 6);
    index_entry = index_entry + 1;
  }
  pgm_z80_rtc_io.wZ80_control = 0xa0a;
  SetZ80AudioReadyFlag();
  return total_words * 2;
}




/* ============================================================
 * 0000d326 UploadWaveTable
 * ============================================================ */


ushort UploadWaveTable(undefined2 *source_words,ushort entry_count)

{
  int delay;
  
  if (0x3ff < entry_count) {
    AssertFailScreen("uwTotal < conZ80WaveIndexMax",".z80cm68k2z80.c",0x1c5);
  }
  MarkZ80AudioNotReady();
  pgm_z80_rtc_io.wZ80_control = 0x45d3;
  delay = 0;
  do {
    delay = delay + 1;
  } while (delay < 5);
  z80_wave_count_mailbox = entry_count;
  z80_wave_count = entry_count;
  CopyWords((undefined2 *)&z80_wave_table_area,source_words,(uint)((ushort)(entry_count * 0xc) >> 1)
           );
  pgm_z80_rtc_io.wZ80_control = 0xa0a;
  SetZ80AudioReadyFlag();
  return entry_count * 0xc;
}




/* ============================================================
 * 0000d3b8 AppendZ80WaveTable
 * ============================================================ */


ushort AppendZ80WaveTable(ushort start_index,undefined2 *source_words,ushort entry_count)

{
  int delay;
  
  if (0x3ff < entry_count) {
    AssertFailScreen("uwTotal < conZ80WaveIndexMax",".z80cm68k2z80.c",0x1e0);
  }
  MarkZ80AudioNotReady();
  pgm_z80_rtc_io.wZ80_control = 0x45d3;
  delay = 0;
  do {
    delay = delay + 1;
  } while (delay < 5);
  z80_wave_count = entry_count + start_index;
  z80_wave_count_mailbox = z80_wave_count;
  CopyWords((undefined2 *)(&z80_wave_table_area + (uint)start_index * 0xc),source_words,
            (uint)((ushort)(entry_count * 0xc) >> 1));
  pgm_z80_rtc_io.wZ80_control = 0xa0a;
  SetZ80AudioReadyFlag();
  return entry_count * 0xc;
}




/* ============================================================
 * 0000d464 UploadDefaultZ80MusicData
 * ============================================================ */


undefined4 UploadDefaultZ80MusicData(undefined4 param_1,undefined4 param_2)

{
  Copy68kToZ80Ram(param_1,0x500,0x4000);
  Copy68kToZ80Ram(param_2,0x2b2,&LAB_00004a00);
  return 0xf64;
}




/* ============================================================
 * 0000d4ac DrawZ80DebugMessage
 * ============================================================ */


void DrawZ80DebugMessage(void)

{
  char local_2c;
  char local_2b;
  char acStack_2a [38];
  
  Z80UploadFromRamTo68k(&local_2c,0x14,0x10);
  DrawStringTiles(0,(uint)(ushort)(short)local_2c,(uint)(ushort)(short)local_2b,'\0',0,acStack_2a);
  return;
}




/* ============================================================
 * 0000d4f2 Z80StatusNoop
 * ============================================================ */


void Z80StatusNoop(void)

{
  return;
}




/* ============================================================
 * 0000d4f4 HandleZ80StatusByte
 * ============================================================ */


void HandleZ80StatusByte(void)

{
  Z80StatusNoop();
  return;
}




/* ============================================================
 * 0000d544 PollZ80StatusLatch
 * ============================================================ */


uint PollZ80StatusLatch(void)

{
  undefined2 upper_result;
  undefined2 extraout_D0u;
  uint latch_value;
  byte latch2_high;
  
  z80_latch3_high_nibble_shadow = 0xf0;
  pgm_z80_rtc_io.wSound_latch3 = z80_latch_low_nibble_shadow & 0xf | 0xf0;
  latch2_high = pgm_z80_rtc_io.wSound_latch2._1_1_;
  upper_result = 0;
  if (latch2_high != 0) {
    if (latch2_high == 1) {
      DrawZ80DebugMessage();
      upper_result = extraout_D0u;
    }
    else {
      latch_value = PrintfTextLayer(10,0xe,"%6d",(uint)latch2_high);
      upper_result = (undefined2)(latch_value >> 0x10);
    }
  }
  z80_latch3_high_nibble_shadow = 0;
  latch_value = CONCAT22(upper_result,z80_latch_low_nibble_shadow) & 0xffff000f;
  pgm_z80_rtc_io.wSound_latch3 = (short)latch_value;
  pgm_z80_rtc_io.wLatch0_or_status = z80_latch_low_nibble_shadow;
  return latch_value;
}




/* ============================================================
 * 0000d5d0 MarkZ80AudioNotReady
 * ============================================================ */


void MarkZ80AudioNotReady(void)

{
  z80_audio_ready = 0;
  return;
}




/* ============================================================
 * 0000d5d8 SetZ80AudioReadyFlag
 * ============================================================ */


void SetZ80AudioReadyFlag(void)

{
  z80_audio_ready = 1;
  return;
}




/* ============================================================
 * 0000d5e2 WaitForZ80AudioQueueSpace
 * ============================================================ */


void WaitForZ80AudioQueueSpace(void)

{
  undefined3 extraout_var;
  bool bVar1;
  
  do {
    bVar1 = IsRingBufferEmpty(&z80_audio_command_ring);
  } while (CONCAT31(extraout_var,bVar1) == 0);
  return;
}




/* ============================================================
 * 0000d5f6 WaitForAudioQueueSpaceStub
 * ============================================================ */


void WaitForAudioQueueSpaceStub(void)

{
  return;
}




/* ============================================================
 * 0000d600 DisabledWaitForAudioQueueDebugLoop
 * ============================================================ */


void DisabledWaitForAudioQueueDebugLoop(void)

{
  int tile_y;
  int tile_x_group;
  int entry_index;
  int ring;
  undefined4 *entry_ptr;
  char *format;
  int iVar1;
  undefined4 uVar2;
  
  do {
    uVar2 = *entry_ptr;
    format = "%2d>%08X ";
    tile_y = entry_index;
    if (entry_index < 0) {
      tile_y = entry_index + 3;
    }
    tile_y = (tile_y >> 2) + 8;
    iVar1 = entry_index;
    tile_x_group = DivSigned32Remainder(entry_index,4);
    PrintfTextLayer(tile_x_group * 9 + 3,tile_y,format,iVar1,uVar2);
    entry_index = entry_index + 1;
    entry_ptr = entry_ptr + 1;
  } while (entry_index < *(int *)(ring + 0x14));
  WaitForKeyOrCallback(1);
  return;
}




/* ============================================================
 * 0000d652 Z80AudioInitAlt
 * ============================================================ */


void Z80AudioInitAlt(void)

{
  z80_audio_debug_queue_state = 0;
  z80_cmd_sequence_mod64 = 0;
  InitZ80SoundDriver();
  UploadDefaultZ80MusicData(&default_z80_music_data_block0,&default_z80_music_data_block1);
  InitRingBuffer(&z80_audio_command_ring,z80_cmd_ring_storage,0x80,4);
  z80_audio_ready = 1;
  return;
}




/* ============================================================
 * 0000d69e InitializeZ80AudioSystem
 * ============================================================ */


void InitializeZ80AudioSystem(void)

{
  z80_audio_debug_queue_state = 0;
  z80_cmd_sequence_mod64 = 0;
  InitZ80SoundDriver();
  UploadDefaultZ80MusicData(&default_z80_music_data_block0,&default_z80_music_data_block1);
  InitRingBuffer(&z80_audio_command_ring,z80_cmd_ring_storage,0x80,4);
  z80_audio_ready = 1;
  return;
}




/* ============================================================
 * 0000d6ea PumpZ80CommandQueue
 * ============================================================ */


/* VBL audio queue pump: pops 4-byte command from ring at 0x803730, writes it to Z80 RAM 0xc10006,
   then writes latch1 0xc00002 token 1 to notify Z80. */

void PumpZ80CommandQueue(void)

{
  ushort uVar1;
  undefined3 extraout_var;
  bool bVar2;
  PgmZ80AudioCommandEntry local_8;
  
  if (z80_audio_ready != 0) {
    bVar2 = IsRingBufferEmpty(&z80_audio_command_ring);
    if (CONCAT31(extraout_var,bVar2) == 0) {
      do {
        pgm_z80_rtc_io.wSound_latch3 = z80_latch_low_nibble_shadow & 0xf | 0xf0;
        uVar1 = pgm_z80_rtc_io.wSound_latch2;
      } while ((uVar1 & 0xf0) == 0xf0);
      pgm_z80_rtc_io.wZ80_control = 0x45d3;
      z80_latch3_high_nibble_shadow = 0;
      pgm_z80_rtc_io.wSound_latch3 = z80_latch_low_nibble_shadow & 0xf;
      if ((uVar1 & 0xf0) != 0) {
        HandleZ80StatusByte(uVar1);
      }
      RingBufferPop(&z80_audio_command_ring);
      z80_command_mailbox = local_8;
      pgm_z80_rtc_io.wZ80_control = 0xa0a;
      z80_latch_low_nibble_shadow = 1;
      pgm_z80_rtc_io.wSound_latch1 = z80_latch3_high_nibble_shadow & 0xf0 | 1;
    }
  }
  return;
}




/* ============================================================
 * 0000d7d2 QueueZ80AudioCommand
 * ============================================================ */


ushort QueueZ80AudioCommand(byte command,ushort sound_id,byte param,uint extra)

{
  int sequence_mod64;
  uint extra_packet;
  uint command_packet;
  ushort packed_sound_id;
  
  sequence_mod64 = DivSigned32Remainder(z80_cmd_sequence_mod64 + 1,0x40);
  z80_cmd_sequence_mod64 = (byte)sequence_mod64;
  packed_sound_id = sound_id >> 8 & 3 | (ushort)z80_cmd_sequence_mod64 << 2 | sound_id << 8;
  command_packet = CONCAT22(CONCAT11(command,param),packed_sound_id);
  RingBufferPush(&z80_audio_command_ring,(byte *)&command_packet);
  if ((((command == 2) || (command == 3)) || (command == 4)) || (command == 5)) {
    extra_packet = (extra & 0xff00) << 8 | extra << 0x18;
    RingBufferPush(&z80_audio_command_ring,(byte *)&extra_packet);
  }
  WaitForAudioQueueSpaceStub(&z80_audio_command_ring);
  return packed_sound_id;
}




/* ============================================================
 * 0000d8b6 QueueZ80CmdShort
 * ============================================================ */


void QueueZ80CmdShort(byte command,ushort value)

{
  uint local_8;
  
  local_8 = (uint)value | (uint)command << 0x18;
  RingBufferPush(&z80_audio_command_ring,(byte *)&local_8);
  WaitForAudioQueueSpaceStub(&z80_audio_command_ring);
  return;
}




/* ============================================================
 * 0000d8f0 QueueZ80CmdWord
 * ============================================================ */


void QueueZ80CmdWord(uint command,ushort value,byte flags,uint extra_word)

{
  uint extra_packet;
  uint packet;
  
  packet = (uint)value | ((uint)flags | (command & 0xff) << 8) << 0x10;
  RingBufferPush(&z80_audio_command_ring,(byte *)&packet);
  if ((char)command == '\r') {
    extra_packet = (int)(extra_word & 0xffff) >> 8 | (extra_word & 0xffff) << 8;
    RingBufferPush(&z80_audio_command_ring,(byte *)&extra_packet);
  }
  WaitForAudioQueueSpaceStub(&z80_audio_command_ring);
  return;
}




/* ============================================================
 * 0000d982 QueueZ80CmdBytes
 * ============================================================ */


void QueueZ80CmdBytes(undefined1 param_1,byte param_2,undefined1 param_3)

{
  uint local_8;
  
  local_8 = (uint)param_2 << 8 | (uint)CONCAT11(param_1,param_3) << 0x10;
  RingBufferPush(&z80_audio_command_ring,(byte *)&local_8);
  WaitForAudioQueueSpaceStub(&z80_audio_command_ring);
  return;
}




/* ============================================================
 * 0000d9d8 QueueZ80CmdNoParam
 * ============================================================ */


void QueueZ80CmdNoParam(undefined1 param_1,undefined1 param_2)

{
  int local_8;
  
  local_8 = (uint)CONCAT11(param_1,param_2) << 0x10;
  RingBufferPush(&z80_audio_command_ring,(byte *)&local_8);
  WaitForAudioQueueSpaceStub(&z80_audio_command_ring);
  return;
}




/* ============================================================
 * 0000da1c SumZ80TableWordSizes
 * ============================================================ */


short SumZ80TableWordSizes(int param_1,byte param_2)

{
  int iVar1;
  short sVar2;
  
  sVar2 = 0;
  for (iVar1 = 0; iVar1 < (int)(uint)param_2; iVar1 = iVar1 + 1) {
    sVar2 = *(short *)(param_1 + 4) + sVar2;
    param_1 = param_1 + 6;
  }
  return sVar2 * 2;
}




/* ============================================================
 * 0000da42 AbsLong
 * ============================================================ */


int AbsLong(int param_1)

{
  if (param_1 < 0) {
    param_1 = -param_1;
  }
  return param_1;
}




/* ============================================================
 * 0000da4c MulUnsigned32ByPointer
 * ============================================================ */


uint MulUnsigned32ByPointer(uint multiplicand,uint *multiplier_ptr)

{
  uint product;
  uint multiplier;
  
  multiplier = *multiplier_ptr;
  product = (multiplicand & 0xffff) * (multiplier & 0xffff);
  if (multiplicand >> 0x10 != 0) {
    product = (multiplicand >> 0x10) * (multiplier & 0xffff) * 0x10000 + product;
  }
  if (multiplier >> 0x10 != 0) {
    product = (multiplicand & 0xffff) * (multiplier >> 0x10) * 0x10000 + product;
  }
  return product;
}




/* ============================================================
 * 0000da4e MulUnsigned32
 * ============================================================ */


uint MulUnsigned32(uint multiplicand,uint multiplier)

{
  uint product;
  
  product = (multiplicand & 0xffff) * (multiplier & 0xffff);
  if (multiplicand >> 0x10 != 0) {
    product = (multiplicand >> 0x10) * (multiplier & 0xffff) * 0x10000 + product;
  }
  if (multiplier >> 0x10 != 0) {
    product = (multiplicand & 0xffff) * (multiplier >> 0x10) * 0x10000 + product;
  }
  return product;
}




/* ============================================================
 * 0000da78 DivSigned32QuotientByPointer
 * ============================================================ */


int DivSigned32QuotientByPointer(int divisor,int *dividend_ptr)

{
  uint dividend_abs;
  byte negate_result;
  uint short_quotient;
  
  dividend_abs = *dividend_ptr;
  if ((divisor < 0x8000) && (-0x8001 < divisor)) {
    short_quotient = (int)dividend_abs / (int)(short)divisor;
    dividend_abs = (int)dividend_abs % (int)(short)divisor << 0x10 | short_quotient & 0xffff;
    if (!SBORROW4(divisor,-0x8000)) {
      return (int)(short)short_quotient;
    }
  }
  negate_result = 0;
  if ((int)dividend_abs < 0) {
    dividend_abs = -dividend_abs;
    negate_result = 0xff;
  }
  if (divisor < 0) {
    divisor = -divisor;
    negate_result = ~negate_result;
  }
  dividend_abs = DivUnsigned32(dividend_abs,divisor);
  if (negate_result != 0) {
    dividend_abs = -dividend_abs;
  }
  return dividend_abs;
}




/* ============================================================
 * 0000da7c DivSigned32Quotient
 * ============================================================ */


int DivSigned32Quotient(int dividend,int divisor)

{
  uint quotient;
  byte negate_result;
  
  if ((divisor < 0x8000) && (-0x8001 < divisor)) {
    quotient = dividend / (int)(short)divisor;
    dividend = dividend % (int)(short)divisor << 0x10 | quotient & 0xffff;
    if (!SBORROW4(divisor,-0x8000)) {
      return (int)(short)quotient;
    }
  }
  negate_result = 0;
  if (dividend < 0) {
    dividend = -dividend;
    negate_result = 0xff;
  }
  if (divisor < 0) {
    divisor = -divisor;
    negate_result = ~negate_result;
  }
  quotient = DivUnsigned32(dividend,divisor);
  if (negate_result != 0) {
    quotient = -quotient;
  }
  return quotient;
}




/* ============================================================
 * 0000dab4 DivUnsigned32ByPointer
 * ============================================================ */


uint DivUnsigned32ByPointer(uint divisor,uint *dividend_ptr)

{
  uint quotient_or_shift;
  uint remainder_or_dividend;
  short bit_index;
  bool carry;
  
  remainder_or_dividend = *dividend_ptr;
  if (0xffff < divisor) {
    quotient_or_shift = remainder_or_dividend << 0x10;
    remainder_or_dividend = remainder_or_dividend >> 0x10;
    bit_index = 0xf;
    do {
      carry = CARRY4(quotient_or_shift,quotient_or_shift);
      quotient_or_shift = quotient_or_shift * 2;
      remainder_or_dividend = remainder_or_dividend * 2 + (uint)carry;
      if (divisor <= remainder_or_dividend) {
        remainder_or_dividend = remainder_or_dividend - divisor;
        quotient_or_shift =
             CONCAT31((int3)(quotient_or_shift >> 8),(char)quotient_or_shift + '\x01');
      }
      bit_index = bit_index + -1;
    } while (bit_index != -1);
    return quotient_or_shift;
  }
  quotient_or_shift = remainder_or_dividend / (divisor & 0xffff);
  remainder_or_dividend = remainder_or_dividend % (divisor & 0xffff);
  if (SBORROW4(divisor,0x10000)) {
    return CONCAT22((short)(remainder_or_dividend / (divisor & 0xffff)),
                    (short)((remainder_or_dividend % (divisor & 0xffff) << 0x10 |
                            quotient_or_shift & 0xffff) / (divisor & 0xffff)));
  }
  return quotient_or_shift & 0xffff;
}




/* ============================================================
 * 0000dab8 DivUnsigned32
 * ============================================================ */


uint DivUnsigned32(uint dividend,uint divisor)

{
  uint quotient_or_remainder;
  uint remainder_or_quotient;
  short bit_index;
  bool carry;
  
  if (0xffff < divisor) {
    quotient_or_remainder = dividend << 0x10;
    remainder_or_quotient = dividend >> 0x10;
    bit_index = 0xf;
    do {
      carry = CARRY4(quotient_or_remainder,quotient_or_remainder);
      quotient_or_remainder = quotient_or_remainder * 2;
      remainder_or_quotient = remainder_or_quotient * 2 + (uint)carry;
      if (divisor <= remainder_or_quotient) {
        remainder_or_quotient = remainder_or_quotient - divisor;
        quotient_or_remainder =
             CONCAT31((int3)(quotient_or_remainder >> 8),(char)quotient_or_remainder + '\x01');
      }
      bit_index = bit_index + -1;
    } while (bit_index != -1);
    return quotient_or_remainder;
  }
  remainder_or_quotient = dividend / (divisor & 0xffff);
  quotient_or_remainder = dividend % (divisor & 0xffff);
  if (SBORROW4(divisor,0x10000)) {
    return CONCAT22((short)(quotient_or_remainder / (divisor & 0xffff)),
                    (short)((quotient_or_remainder % (divisor & 0xffff) << 0x10 |
                            remainder_or_quotient & 0xffff) / (divisor & 0xffff)));
  }
  return remainder_or_quotient & 0xffff;
}




/* ============================================================
 * 0000db18 CalculateUnsignedModulo32ByPointer
 * ============================================================ */


uint CalculateUnsignedModulo32ByPointer(uint divisor,uint *dividend_ptr)

{
  uint dividend;
  uint extraout_D1;
  uint remainder;
  
  dividend = *dividend_ptr;
  if (divisor < 0x10000) {
    remainder = dividend % (divisor & 0xffff);
    dividend = remainder << 0x10 | dividend / (divisor & 0xffff) & 0xffff;
    if (!SBORROW4(divisor,0x10000)) {
      return remainder;
    }
  }
  DivUnsigned32(dividend,divisor);
  return extraout_D1;
}




/* ============================================================
 * 0000db1c CalculateUnsignedModulo32
 * ============================================================ */


uint CalculateUnsignedModulo32(uint dividend,uint divisor)

{
  uint extraout_D1;
  uint remainder;
  
  if (divisor < 0x10000) {
    remainder = dividend % (divisor & 0xffff);
    dividend = remainder << 0x10 | dividend / (divisor & 0xffff) & 0xffff;
    if (!SBORROW4(divisor,0x10000)) {
      return remainder;
    }
  }
  DivUnsigned32(dividend,divisor);
  return extraout_D1;
}




/* ============================================================
 * 0000db34 DivSigned32RemainderByPointer
 * ============================================================ */


int DivSigned32RemainderByPointer(int divisor,int *dividend_ptr)

{
  uint dividend;
  int remainder;
  int extraout_D1;
  bool negate_remainder;
  
  dividend = *dividend_ptr;
  if ((divisor < 0x8000) && (-0x8001 < divisor)) {
    remainder = (int)dividend % (int)(short)divisor;
    dividend = remainder << 0x10 | (int)dividend / (int)(short)divisor & 0xffffU;
    if (!SBORROW4(divisor,-0x8000)) {
      return (int)(short)remainder;
    }
  }
  if (divisor < 0) {
    divisor = -divisor;
  }
  negate_remainder = (int)dividend < 0;
  if (negate_remainder) {
    dividend = -dividend;
  }
  DivUnsigned32(dividend,divisor);
  remainder = extraout_D1;
  if (negate_remainder) {
    remainder = -extraout_D1;
  }
  return remainder;
}




/* ============================================================
 * 0000db38 DivSigned32Remainder
 * ============================================================ */


int DivSigned32Remainder(int dividend,int divisor)

{
  int remainder;
  int extraout_D1;
  bool negate_remainder;
  
  if ((divisor < 0x8000) && (-0x8001 < divisor)) {
    remainder = dividend % (int)(short)divisor;
    dividend = remainder << 0x10 | dividend / (int)(short)divisor & 0xffffU;
    if (!SBORROW4(divisor,-0x8000)) {
      return (int)(short)remainder;
    }
  }
  if (divisor < 0) {
    divisor = -divisor;
  }
  negate_remainder = dividend < 0;
  if (negate_remainder) {
    dividend = -dividend;
  }
  DivUnsigned32(dividend,divisor);
  remainder = extraout_D1;
  if (negate_remainder) {
    remainder = -extraout_D1;
  }
  return remainder;
}




/* ============================================================
 * 0000db74 UnsignedToAsciiBase
 * ============================================================ */


int UnsignedToAsciiBase(uint value,char *dest,uint base)

{
  byte *pbVar1;
  byte digit;
  short bit_count;
  byte *out;
  char *scratch_cursor;
  char *digit_slot;
  char *digit_slot_hi;
  byte *pbVar2;
  char scratch [4];
  bool carry_bit;
  uint remainder;
  
  scratch[2] = 0;
  if ((base < 2) || (scratch_cursor = scratch + 2, 0x24 < base)) {
    base = 10;
    scratch_cursor = scratch + 2;
  }
  while (0xffff < value) {
    digit = 0;
    bit_count = 0x1f;
    do {
      carry_bit = (int)value < 0;
      value = value << 1;
      digit = digit << 1 | carry_bit;
      if ((byte)base <= digit) {
        digit = digit - (byte)base;
        value = CONCAT31((int3)(value >> 8),(char)value + '\x01');
      }
      bit_count = bit_count + -1;
    } while (bit_count != -1);
    digit_slot_hi = scratch_cursor + -2;
    scratch_cursor = scratch_cursor + -2;
    *digit_slot_hi = digit + 0x30;
  }
  for (; base <= value; value = (remainder >> 8) << 0x18 | value / (base & 0xffff) & 0xffff) {
    remainder = value % (base & 0xffff);
    digit_slot = scratch_cursor + -2;
    scratch_cursor = scratch_cursor + -2;
    *digit_slot = (char)remainder + '0';
  }
  scratch_cursor[-2] = (char)value + '0';
  pbVar1 = (byte *)(scratch_cursor + -2);
  do {
    pbVar2 = pbVar1;
    out = (byte *)dest;
    digit = *pbVar2;
    if (0x39 < digit) {
      digit = digit + 7;
    }
    *out = digit;
    dest = (char *)(out + 1);
    pbVar1 = pbVar2 + 2;
  } while (digit != 0);
  return (int)out - *(int *)(pbVar2 + 0x12);
}




/* ============================================================
 * 0000dbf6 MemsetBytes
 * ============================================================ */


void * MemsetBytes(void *dst,byte value,uint count)

{
  uint fill_word;
  uint long_count;
  short long_count_low;
  uint tail_count;
  ushort byte_counter;
  uint *write_ptr;
  
  fill_word = (uint)value;
  tail_count = count & 0xffff;
  write_ptr = dst;
  if (7 < count) {
    fill_word = CONCAT22(CONCAT11(value,value),CONCAT11(value,value));
    byte_counter = (ushort)dst & 3;
    if (((uint)dst & 3) != 0) {
      while (byte_counter = byte_counter - 1, byte_counter != 0xffff) {
        *(byte *)write_ptr = value;
        count = count - 1;
        write_ptr = (uint *)((int)write_ptr + 1);
      }
    }
    tail_count = (uint)((ushort)count & 3);
    long_count = count >> 2;
    while ((long_count_low = (short)long_count + -1,
           long_count = CONCAT22((short)(long_count >> 0x10),long_count_low), long_count_low != -1
           || (long_count = long_count - 0x10000, long_count != 0xffffffff))) {
      *write_ptr = fill_word;
      write_ptr = write_ptr + 1;
    }
  }
  while (byte_counter = (short)tail_count - 1, tail_count = (uint)byte_counter,
        byte_counter != 0xffff) {
    *(char *)write_ptr = (char)fill_word;
    write_ptr = (uint *)((int)write_ptr + 1);
  }
  return dst;
}




/* ============================================================
 * 0000dc5a CompareCString
 * ============================================================ */


int CompareCString(char *left,char *right)

{
  char left_ch;
  uint *left_scan;
  uint *right_scan;
  uint *right_next;
  uint word_value;
  
  left_scan = (uint *)left;
  right_scan = (uint *)right;
  if ((((byte)right ^ (byte)left) & 1) == 0) {
    if (((uint)left & 1) != 0) {
      left_scan = (uint *)(left + 1);
      left_ch = *left;
      right_scan = (uint *)(right + 1);
      right_next = right_scan;
      if ((left_ch != *right) || (left_ch == '\0')) goto LAB_0000dcb8;
    }
    while( true ) {
      word_value = *left_scan;
      if (word_value != *right_scan) break;
      if (((((char)word_value == '\0') || ((word_value & 0xff00) == 0)) ||
          ((char)(word_value >> 0x10) == '\0')) ||
         (left_scan = left_scan + 1, right_scan = right_scan + 1, (word_value & 0xff000000) == 0)) {
        return 0;
      }
    }
  }
  while( true ) {
    left_ch = *(char *)left_scan;
    right_next = (uint *)((int)right_scan + 1);
    if (left_ch != *(char *)right_scan) break;
    left_scan = (uint *)((int)left_scan + 1);
    right_scan = right_next;
    if (left_ch == '\0') {
      return 0;
    }
  }
LAB_0000dcb8:
  return (int)(short)(char)(left_ch - *(char *)((int)right_next + -1));
}




/* ============================================================
 * 0000dcc0 IsDigitChar
 * ============================================================ */


byte IsDigitChar(int param_1)

{
  return ascii_ctype_flags_table[param_1] & 4;
}




/* ============================================================
 * 0000dcd8 ToupperChar
 * ============================================================ */


int ToupperChar(int param_1)

{
  if ((ascii_ctype_flags_table[param_1] & 2) != 0) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}


