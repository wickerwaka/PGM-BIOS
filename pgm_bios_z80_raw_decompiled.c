/*
 * Raw Ghidra decompiler export for pgm_bios_z80driver.bin
 * Source program: /pgm_bios_z80driver.bin
 * Function count: 96
 * Named global data objects: 50
 * Named undefined global labels: 16
 * Function bodies are raw DecompiledFunction.getC() output.
 * Type declarations: pgm_bios_z80_raw_types.h
 * Function declarations: pgm_bios_z80_raw_functions.h
 * Global declarations: pgm_bios_z80_raw_globals.h
 * Initialized ROM globals: pgm_bios_z80_raw_initialized_globals.c
 */

#include "pgm_bios_z80_raw_types.h"
#include "pgm_bios_z80_raw_functions.h"
#include "pgm_bios_z80_raw_globals.h"

/* ============================================================
 * Named uninitialized / external global data objects
 * ============================================================ */

/* Work RAM / BSS objects */
/* ram:3801 Z80_RUNTIME_RAM size=0xe */ PgmZ80CommandStreamState z80_primary_command_stream;
/* ram:380f Z80_RUNTIME_RAM size=0x40 */ byte z80_primary_command_buffer[64];
/* ram:394f Z80_RUNTIME_RAM size=0x1 */ byte z80_soundchip_latch_high_nibble;
/* ram:3950 Z80_RUNTIME_RAM size=0x1 */ byte z80_soundchip_latch_low_nibble;
/* ram:3951 Z80_RUNTIME_RAM size=0x1 */ byte z80_soundchip_status_nibble;
/* ram:3952 Z80_RUNTIME_RAM size=0x1 */ byte z80_soundchip_voice_status;
/* ram:3953 Z80_RUNTIME_RAM size=0x4 */ byte z80_voice_start_mask_work[4];
/* ram:3957 Z80_RUNTIME_RAM size=0x4 */ byte z80_voice_active_mask_a[4];
/* ram:395b Z80_RUNTIME_RAM size=0x4 */ byte z80_voice_active_mask_b[4];
/* ram:395f Z80_RUNTIME_RAM size=0x1 */ byte z80_irq_voice_index;
/* ram:3960 Z80_RUNTIME_RAM size=0x2 */ undefined *z80_voice_slot_cursor;
/* ram:3962 Z80_RUNTIME_RAM size=0x1 */ byte z80_voice_slot_index;
/* ram:3963 Z80_RUNTIME_RAM size=0x1 */ byte z80_irq_voice_command_flags;
/* ram:3964 Z80_RUNTIME_RAM size=0x2 */ ushort z80_soundchip_init_word0;
/* ram:3966 Z80_RUNTIME_RAM size=0x2 */ ushort z80_soundchip_init_word1;
/* ram:3968 Z80_RUNTIME_RAM size=0x2 */ ushort z80_soundchip_init_word2;
/* ram:396a Z80_RUNTIME_RAM size=0x4 */ byte z80_soundchip_register_work[4];
/* ram:396e Z80_RUNTIME_RAM size=0x120 */ PgmZ80VoiceSlotState z80_voice_slots[32];
/* ram:3a8e Z80_RUNTIME_RAM size=0x1 */ byte z80_midi_finished_subvoice_count;
/* ram:3a8f Z80_RUNTIME_RAM size=0x1 */ byte z80_midi_event_dispatch_index;
/* ram:3a90 Z80_RUNTIME_RAM size=0x1 */ byte z80_midi_current_subvoice_count;
/* ram:3a91 Z80_RUNTIME_RAM size=0x1 */ byte z80_midi_channel_index;
/* ram:3a92 Z80_RUNTIME_RAM size=0x1 */ byte z80_midi_subvoice_index;
/* ram:3aa0 Z80_RUNTIME_RAM size=0x2 */ undefined *z80_midi_subvoice_cursor;
/* ram:3aa2 Z80_RUNTIME_RAM size=0x2 */ undefined *z80_midi_channel_cursor;
/* ram:3aa8 Z80_RUNTIME_RAM size=0x2 */ undefined *z80_midi_sequence_data_base;
/* ram:3aaa Z80_RUNTIME_RAM size=0x2 */ undefined *z80_midi_sequence_index_base;
/* ram:3aac Z80_RUNTIME_RAM size=0x1ae */ PgmZ80MidiChannelState z80_midi_channels[2];
/* ram:3c5a Z80_RUNTIME_RAM size=0x2 */ undefined *z80_wave_table_runtime_base;
/* ram:3c5c Z80_RUNTIME_RAM size=0x2 */ ushort z80_wave_table_runtime_count;
/* ram:3c5e Z80_RUNTIME_RAM size=0x260 */ PgmZ80WaveChannelState z80_wave_channels[32];
/* ram:5000 Z80_RUNTIME_RAM size=0x3000 */ PgmZ80WaveTableEntry z80_wave_table_area[1024];
/* ram:8000 Z80_RUNTIME_RAM size=0x4000 */ byte z80_midi_data_area[16384];

/* Work RAM / BSS labels without a defined data item */
/* ram:fff9 Z80_RUNTIME_RAM synthesized size=0x1 */ undefined1 z80_stack_local_bounds_sentinel;
/* ram:fffb Z80_RUNTIME_RAM synthesized size=0x1 */ undefined1 z80_stack_refill_bounds_sentinel;

/* MMIO labels without a defined data item */
/* io:0000 <no block> synthesized size=0x1 */ extern volatile undefined1 z80_irq_status_port;
/* io:8000 <no block> synthesized size=0x1 */ extern volatile undefined1 z80_sound_latch_port_base;
/* io:8100 <no block> synthesized size=0x1 */ extern volatile undefined1 z80_68000_response_latch_port;
/* io:8400 <no block> synthesized size=0x1 */ extern volatile undefined1 z80_soundchip_port_base;



/* ============================================================
 * ram:0000 Z80ResetVector
 * ============================================================ */


void Z80ResetVector(byte startup_a,ushort startup_ix)

{
  setInterruptMode(1);
                    /* WARNING: Subroutine does not return */
  Z80StartupAndJumpMain(startup_a,startup_ix);
}




/* ============================================================
 * ram:0038 Z80IrqVector
 * ============================================================ */


void Z80IrqVector(void)

{
  byte bVar1;
  
  while (bVar1 = z80_irq_status_port, z80_irq_status_port != 0) {
    if ((z80_irq_status_port & 2) != 0) {
      HandleIrqBit1Service();
    }
    if ((bVar1 & 1) != 0) {
      HandleIrqBit0Service();
    }
  }
  enableMaskableInterrupts();
  return;
}




/* ============================================================
 * ram:0066 Z80NmiVector
 * ============================================================ */


void Z80NmiVector(byte saved_a,byte entry_flags)

{
  HandleZ80Nmi(saved_a,entry_flags);
  return;
}




/* ============================================================
 * ram:0100 Z80StartupAndJumpMain
 * ============================================================ */


/* WARNING: This function may have set the stack pointer */

void Z80StartupAndJumpMain(byte startup_a,ushort startup_ix)

{
  z80_irq_status_port = startup_a;
  Z80MainLoop();
  return;
}




/* ============================================================
 * ram:010b HandleZ80Irq
 * ============================================================ */


void HandleZ80Irq(void)

{
  byte bVar1;
  
  while (bVar1 = z80_irq_status_port, z80_irq_status_port != 0) {
    if ((z80_irq_status_port & 2) != 0) {
      HandleIrqBit1Service();
    }
    if ((bVar1 & 1) != 0) {
      HandleIrqBit0Service();
    }
  }
  enableMaskableInterrupts();
  return;
}




/* ============================================================
 * ram:0128 HandleZ80Nmi
 * ============================================================ */


void HandleZ80Nmi(byte saved_a,byte entry_flags)

{
  Poll68kStatusLatch(entry_flags);
  z80_irq_status_port = saved_a;
  return;
}




/* ============================================================
 * ram:0142 WritePort
 * ============================================================ */


void WritePort(ushort port,byte value)

{
  *(byte *)(port & 0xff) = value;
  return;
}




/* ============================================================
 * ram:0147 ReadPort
 * ============================================================ */


byte ReadPort(ushort port)

{
  return *(byte *)(port & 0xff);
}




/* ============================================================
 * ram:014c FormatFiveByteBcdAscii
 * ============================================================ */


/* WARNING: Removing unreachable block (ram,0x018d) */
/* WARNING: Removing unreachable block (ram,0x0185) */
/* WARNING: Removing unreachable block (ram,0x017d) */
/* WARNING: Removing unreachable block (ram,0x0175) */
/* WARNING: Removing unreachable block (ram,0x016d) */

void FormatFiveByteBcdAscii(byte *src_value,char *dst_ascii)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  char cVar6;
  char cVar7;
  byte bVar8;
  byte *pbVar9;
  
  *dst_ascii = '\0';
  dst_ascii[1] = '\0';
  dst_ascii[2] = '\0';
  dst_ascii[3] = '\0';
  dst_ascii[4] = '\0';
  pbVar9 = src_value + 3;
  cVar7 = '\x04';
  do {
    cVar6 = '\b';
    bVar8 = *pbVar9;
    do {
      bVar5 = -((char)bVar8 >> 7);
      bVar8 = bVar8 << 1;
      bVar3 = *dst_ascii;
      bVar1 = ((bVar3 & 0xf) + (bVar3 & 0xf) + bVar5 & 0x10) != 0;
      bVar2 = CARRY1(bVar3,bVar3) || CARRY1(bVar3 * '\x02',bVar5);
      cVar4 = BCDadjust(bVar3 * '\x02' + bVar5,bVar2,bVar1);
      bVar3 = BCDadjustCarry(cVar4,bVar2,bVar1);
      hasEvenParity(cVar4);
      *dst_ascii = cVar4;
      bVar5 = dst_ascii[1];
      bVar3 = bVar3 & 1;
      bVar1 = ((bVar5 & 0xf) + (bVar5 & 0xf) + bVar3 & 0x10) != 0;
      bVar2 = CARRY1(bVar5,bVar5) || CARRY1(bVar5 * '\x02',bVar3);
      cVar4 = BCDadjust(bVar5 * '\x02' + bVar3,bVar2,bVar1);
      bVar3 = BCDadjustCarry(cVar4,bVar2,bVar1);
      hasEvenParity(cVar4);
      dst_ascii[1] = cVar4;
      bVar5 = dst_ascii[2];
      bVar3 = bVar3 & 1;
      bVar1 = ((bVar5 & 0xf) + (bVar5 & 0xf) + bVar3 & 0x10) != 0;
      bVar2 = CARRY1(bVar5,bVar5) || CARRY1(bVar5 * '\x02',bVar3);
      cVar4 = BCDadjust(bVar5 * '\x02' + bVar3,bVar2,bVar1);
      bVar3 = BCDadjustCarry(cVar4,bVar2,bVar1);
      hasEvenParity(cVar4);
      dst_ascii[2] = cVar4;
      bVar5 = dst_ascii[3];
      bVar3 = bVar3 & 1;
      bVar1 = ((bVar5 & 0xf) + (bVar5 & 0xf) + bVar3 & 0x10) != 0;
      bVar2 = CARRY1(bVar5,bVar5) || CARRY1(bVar5 * '\x02',bVar3);
      cVar4 = BCDadjust(bVar5 * '\x02' + bVar3,bVar2,bVar1);
      bVar3 = BCDadjustCarry(cVar4,bVar2,bVar1);
      hasEvenParity(cVar4);
      dst_ascii[3] = cVar4;
      bVar5 = dst_ascii[4];
      bVar3 = bVar3 & 1;
      bVar1 = ((bVar5 & 0xf) + (bVar5 & 0xf) + bVar3 & 0x10) != 0;
      bVar2 = CARRY1(bVar5,bVar5) || CARRY1(bVar5 * '\x02',bVar3);
      cVar4 = BCDadjust(bVar5 * '\x02' + bVar3,bVar2,bVar1);
      BCDadjustCarry(cVar4,bVar2,bVar1);
      hasEvenParity(cVar4);
      dst_ascii[4] = cVar4;
      cVar6 = cVar6 + -1;
    } while (cVar6 != '\0');
    pbVar9 = pbVar9 + -1;
    cVar7 = cVar7 + -1;
  } while (cVar7 != '\0');
  dst_ascii[9] = (*dst_ascii & 0xfU) + 0x30;
  dst_ascii[8] = ((byte)*dst_ascii >> 4) + 0x30;
  dst_ascii[7] = (dst_ascii[1] & 0xfU) + 0x30;
  dst_ascii[6] = ((byte)dst_ascii[1] >> 4) + 0x30;
  dst_ascii[1] = (dst_ascii[4] & 0xfU) + 0x30;
  *dst_ascii = ((byte)dst_ascii[4] >> 4) + 0x30;
  dst_ascii[5] = (dst_ascii[2] & 0xfU) + 0x30;
  dst_ascii[4] = ((byte)dst_ascii[2] >> 4) + 0x30;
  bVar8 = dst_ascii[3];
  dst_ascii[3] = (bVar8 & 0xf) + 0x30;
  dst_ascii[2] = (bVar8 >> 4) + 0x30;
  dst_ascii[10] = '\0';
  cVar7 = '\n';
  do {
    if (*dst_ascii != '0') break;
    *dst_ascii = ' ';
    dst_ascii = dst_ascii + 1;
    cVar7 = cVar7 + -1;
  } while (cVar7 != '\0');
  if (cVar7 == '\0') {
    dst_ascii[-1] = '0';
  }
  return;
}




/* ============================================================
 * ram:023e ScaleByteByRegisterB
 * ============================================================ */


byte ScaleByteByRegisterB(byte input_a,ushort value_word,ushort multiplier_word)

{
  char cVar1;
  ushort uVar2;
  byte bVar3;
  
  cVar1 = (char)multiplier_word + -1;
  if (cVar1 == '\0') {
    return input_a;
  }
  uVar2 = CONCAT11((char)(multiplier_word >> 8),(char)value_word);
  do {
    value_word = value_word + uVar2 + (ushort)CARRY2(value_word,uVar2);
    cVar1 = cVar1 + -1;
  } while (cVar1 != '\0');
  bVar3 = (byte)(value_word >> 8);
  return (byte)((byte)((byte)((byte)((byte)((byte)(value_word >> 1) >> 1 |
                                           (char)((value_word >> 1) >> 8) << 7) >> 1 |
                                    (bVar3 >> 2) << 7) >> 1 | (bVar3 >> 3) << 7) >> 1 |
                      (bVar3 >> 4) << 7) >> 1 | (bVar3 >> 5) << 7) >> 1 | (bVar3 >> 6) << 7;
}




/* ============================================================
 * ram:0265 ReadICSRegisterHigh
 * ============================================================ */


byte ReadICSRegisterHigh(byte response_value)

{
  bIo0001 = response_value;
  return bIo0003;
}




/* ============================================================
 * ram:026f ReadICSRegisterWord
 * ============================================================ */


ushort ReadICSRegisterWord(byte register_id)

{
  bIo0001 = register_id;
  return CONCAT11(uIo0003,uIo0002);
}




/* ============================================================
 * ram:027b WriteICSRegisterByteHigh
 * ============================================================ */


void WriteICSRegisterByteHigh(byte register_id,byte value)

{
  bIo0001 = register_id;
  bIo0003 = value;
  return;
}




/* ============================================================
 * ram:0285 WriteICSRegisterWord
 * ============================================================ */


void WriteICSRegisterWord(byte register_id,ushort value)

{
  bIo0001 = register_id;
  uIo0002 = value;
  return;
}




/* ============================================================
 * ram:0291 WriteICSRegisterByteLow
 * ============================================================ */


void WriteICSRegisterByteLow(byte register_id,byte value)

{
  bIo0001 = register_id;
  bIo0002 = value;
  return;
}




/* ============================================================
 * ram:029a ReadICSRegisterByteLow
 * ============================================================ */


byte ReadICSRegisterByteLow(byte register_id)

{
  bIo0001 = register_id;
  return bIo0002;
}




/* ============================================================
 * ram:02a3 ReadIrqStatusPort
 * ============================================================ */


byte ReadIrqStatusPort(void)

{
  return z80_irq_status_port;
}




/* ============================================================
 * ram:02a9 WriteICSSelectOscillator
 * ============================================================ */


void WriteICSSelectOscillator(byte value)

{
  uIo0001 = 0x4f;
  bIo0002 = value;
  return;
}




/* ============================================================
 * ram:02b4 JumpToZ80Reset
 * ============================================================ */


void JumpToZ80Reset(byte startup_a,ushort startup_ix)

{
  setInterruptMode(1);
                    /* WARNING: Subroutine does not return */
  Z80StartupAndJumpMain(startup_a,startup_ix);
}




/* ============================================================
 * ram:02b7 Z80WriteLatchOrIo
 * ============================================================ */


void Z80WriteLatchOrIo(ushort error_code)

{
  z80_soundchip_latch_high_nibble = (byte)error_code;
  WritePort(0x8400,z80_soundchip_latch_high_nibble & 0xf0 | z80_soundchip_latch_low_nibble & 0xf);
  DisableInterruptsWrapper();
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}




/* ============================================================
 * ram:02ed Z80DeadLoopBeforeMain
 * ============================================================ */


void Z80DeadLoopBeforeMain(void)

{
                    /* Main-loop stack-frame transition; code entry is Z80MainLoop at 0x02ef. */
  return;
}




/* ============================================================
 * ram:02ef Z80MainLoop
 * ============================================================ */


void Z80MainLoop(void)

{
  PgmZ80CommandStreamState *pPVar1;
  ushort uVar2;
  undefined1 *puVar3;
  byte abStack_1f [22];
  byte abStack_9 [7];
  undefined1 auStack_2 [2];
  
  puVar3 = auStack_2;
  CheckResetHandshake();
  InitializeMidiPlaybackState();
  InitializeWaveTableState();
  InitializeDriverState();
  ClearLocalBuffer(abStack_1f,0);
  do {
    pPVar1 = &z80_primary_command_stream;
    PollOrServiceCommandQueue(&z80_primary_command_stream);
  } while ((char)((ushort)pPVar1 >> 8) != '\0' || (char)pPVar1 != '\0');
  DispatchZ80Command(0,&z80_primary_command_stream,abStack_9);
  uVar2 = CopyBufferToSoundChip(abStack_9);
  puVar3[-8] = (char)uVar2;
  JumpTableDispatch(0x1d,(byte *)(uVar2 & 0xff),0xd72);
  return;
}




/* ============================================================
 * ram:035b HandleZ80Command00
 * ============================================================ */


void HandleZ80Command00(ushort command_frame)

{
  byte *pbVar1;
  byte *dst;
  ushort uVar2;
  byte *shift_count_ptr;
  byte abStack_8 [4];
  byte abStack_4 [4];
  
  pbVar1 = abStack_4;
  dst = abStack_8;
  LoadCommandBytesToBuffer(dst,8);
  shift_count_ptr = abStack_8;
  PrepareSoundChipWriteBuffer(dst,pbVar1,&stack0x0016);
  uVar2 = CopyBufferToSoundChip(pbVar1);
  *(char *)(command_frame - 3) = (char)uVar2;
  pbVar1 = abStack_4;
  LoadCommandBytesToBuffer(abStack_8,0x10);
  PrepareSoundChipWriteBuffer(shift_count_ptr,pbVar1,&stack0x0016);
  uVar2 = CopyBufferToSoundChip(pbVar1);
  *(char *)(command_frame - 2) = (char)uVar2;
  *(char *)(command_frame - 1) = (char)(uVar2 >> 8);
  abStack_4[2] = 0xaa;
  abStack_4[3] = 0;
  abStack_4[0] = 0xc6;
  abStack_4[1] = 3;
  StartWaveChannel((ushort)*(byte *)(command_frame - 3),*(ushort *)(command_frame - 2),0);
  Z80MainLoopContinue(command_frame);
  return;
}




/* ============================================================
 * ram:0a9f HandleZ80Command10
 * ============================================================ */


void HandleZ80Command10(ushort command_frame)

{
  byte *pbVar1;
  byte *dst;
  ushort uVar2;
  byte *shift_count_ptr;
  byte abStack_8 [4];
  byte abStack_4 [4];
  
  pbVar1 = abStack_4;
  dst = abStack_8;
  LoadCommandBytesToBuffer(dst,8);
  shift_count_ptr = abStack_8;
  PrepareSoundChipWriteBuffer(dst,pbVar1,&stack0x0016);
  uVar2 = CopyBufferToSoundChip(pbVar1);
  *(char *)(command_frame - 3) = (char)uVar2;
  pbVar1 = abStack_4;
  LoadCommandBytesToBuffer(abStack_8,0x10);
  PrepareSoundChipWriteBuffer(shift_count_ptr,pbVar1,&stack0x0016);
  uVar2 = CopyBufferToSoundChip(pbVar1);
  *(byte *)(command_frame - 0xc) = (byte)uVar2;
  *(char *)(command_frame - 0xb) = (char)(uVar2 >> 8);
  abStack_4[2] = 0;
  abStack_4[3] = 0;
  abStack_4[0] = 2;
  abStack_4[1] = 0xb;
  StartMidiSequence(0,(byte)uVar2);
  Z80MainLoopContinue(command_frame);
  return;
}




/* ============================================================
 * ram:0de6 Z80MainLoopContinue
 * ============================================================ */


void Z80MainLoopContinue(ushort command_frame)

{
  PgmZ80CommandStreamState *pPVar1;
  ushort uVar2;
  
  do {
    pPVar1 = &z80_primary_command_stream;
    PollOrServiceCommandQueue(&z80_primary_command_stream);
  } while ((char)((ushort)pPVar1 >> 8) != '\0' || (char)pPVar1 != '\0');
  DispatchZ80Command(0,&z80_primary_command_stream,&stack0x0016);
  uVar2 = CopyBufferToSoundChip(&stack0x0016);
  *(char *)(command_frame - 8) = (char)uVar2;
  JumpTableDispatch(0x1d,(byte *)(uVar2 & 0xff),0xd72);
  return;
}




/* ============================================================
 * ram:0df1 CheckResetHandshake
 * ============================================================ */


void CheckResetHandshake(void)

{
  z80_soundchip_latch_low_nibble = 0;
  z80_soundchip_status_nibble = 0;
  z80_soundchip_latch_high_nibble = 0;
  WritePort(0x8400,0);
  InitializeCommandStreamState(&z80_primary_command_stream,z80_primary_command_buffer,0x50);
  return;
}




/* ============================================================
 * ram:0e34 Poll68kStatusLatch
 * ============================================================ */


void Poll68kStatusLatch(byte entry_flags)

{
  byte bVar1;
  byte bVar2;
  PgmZ80CommandStreamState *lhs;
  
  z80_soundchip_latch_high_nibble = 0xf0;
  bVar1 = entry_flags & 0x28;
  WritePort(0x8400,z80_soundchip_latch_low_nibble & 0xf | 0xf0);
  bVar2 = ReadPort(0x8200);
  z80_soundchip_status_nibble = bVar2 & 0xf;
  bVar1 = bVar1 & 0x28 | ((z80_soundchip_status_nibble - 1 & 0x10) != 0) << 4 |
          SBORROW1(z80_soundchip_status_nibble,'\x01') << 2 | 2 | z80_soundchip_status_nibble == 0 |
          (z80_soundchip_status_nibble == 1) << 6 |
          ((char)(z80_soundchip_status_nibble - 1) < '\0') << 7;
  if (z80_soundchip_status_nibble == 1) {
    lhs = &z80_primary_command_stream;
    ReadCommandStreamByte(&z80_primary_command_stream,6,bVar1);
    CompareBytesForFlags((ushort)lhs,1);
    if ((bVar1 >> 6 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      Z80WriteLatchOrIo(0x20);
    }
  }
  z80_soundchip_latch_high_nibble = 0;
  WritePort(0x8400,z80_soundchip_latch_low_nibble & 0xf);
  return;
}




/* ============================================================
 * ram:0e50 SetResponseLatchNibble
 * ============================================================ */


void SetResponseLatchNibble(byte high_mask,byte low_mask,byte latched_low_bits,byte entry_flags)

{
  byte bVar1;
  byte bVar2;
  PgmZ80CommandStreamState *lhs;
  
  bVar1 = entry_flags & 0x28;
  WritePort(0x8400,high_mask & low_mask | latched_low_bits);
  bVar2 = ReadPort(0x8200);
  z80_soundchip_status_nibble = bVar2 & 0xf;
  bVar1 = bVar1 & 0x28 | ((z80_soundchip_status_nibble - 1 & 0x10) != 0) << 4 |
          SBORROW1(z80_soundchip_status_nibble,'\x01') << 2 | 2 | z80_soundchip_status_nibble == 0 |
          (z80_soundchip_status_nibble == 1) << 6 |
          ((char)(z80_soundchip_status_nibble - 1) < '\0') << 7;
  if (z80_soundchip_status_nibble == 1) {
    lhs = &z80_primary_command_stream;
    ReadCommandStreamByte(&z80_primary_command_stream,6,bVar1);
    CompareBytesForFlags((ushort)lhs,1);
    if ((bVar1 >> 6 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      Z80WriteLatchOrIo(0x20);
    }
  }
  z80_soundchip_latch_high_nibble = 0;
  WritePort(0x8400,z80_soundchip_latch_low_nibble & 0xf);
  return;
}




/* ============================================================
 * ram:0eb9 DisplaySoundChipDiagnosticMessage
 * ============================================================ */


byte DisplaySoundChipDiagnosticMessage(char *message,ushort value,ushort display_flags)

{
  byte bVar1;
  byte bVar2;
  undefined1 *puVar3;
  char acStack_15 [11];
  undefined1 uStack_a;
  undefined1 uStack_9;
  ushort uStack_8;
  ushort uStack_6;
  char *pcStack_4;
  undefined1 local_2 [2];
  
  pcStack_4 = message;
  uStack_6 = value;
  uStack_8 = display_flags;
  puVar3 = local_2;
  bVar1 = (undefined1 *)0xc < &uStack_8;
  uStack_a = 0;
  uStack_9 = 0;
  while (CompareSignedHighBytePair(*(ushort *)(puVar3 + -8),0x28), (bVar1 & 1) != 0) {
    bVar1 = false;
    *(undefined1 *)(*(short *)(puVar3 + -8) + 0x10) = 0;
    *(short *)(puVar3 + -8) = *(short *)(puVar3 + -8) + 1;
  }
  RST2 = puVar3[-6];
  z80_diag_char_output_latch = puVar3[-4];
  puVar3[-8] = 2;
  puVar3[-7] = 0;
  while ((bVar1 = 0, **(char **)(puVar3 + -2) != '\0' &&
         (CompareSignedHighBytePair(0x28,*(ushort *)(puVar3 + -8)), !(bool)(bVar1 & 1)))) {
    *(undefined1 *)(*(short *)(puVar3 + -8) + 0x10) = **(undefined1 **)(puVar3 + -2);
    *(short *)(puVar3 + -8) = *(short *)(puVar3 + -8) + 1;
    *(short *)(puVar3 + -2) = *(short *)(puVar3 + -2) + 1;
  }
  FormatFiveByteBcdAscii(&stack0x0002,acStack_15);
  *(char **)(puVar3 + -2) = acStack_15;
  while ((bVar1 = 0, **(char **)(puVar3 + -2) != '\0' &&
         (CompareSignedHighBytePair(0x28,*(ushort *)(puVar3 + -8)), !(bool)(bVar1 & 1)))) {
    *(undefined1 *)(*(short *)(puVar3 + -8) + 0x10) = **(undefined1 **)(puVar3 + -2);
    *(short *)(puVar3 + -8) = *(short *)(puVar3 + -8) + 1;
    *(short *)(puVar3 + -2) = *(short *)(puVar3 + -2) + 1;
  }
  z80_soundchip_latch_low_nibble = 1;
  bVar1 = 0;
  WritePort(0x8300,z80_soundchip_latch_high_nibble & 0xf0 | 1);
  puVar3[-8] = 0;
  puVar3[-7] = 0;
  while (CompareWordPairForFlags(0x32,*(ushort *)(puVar3 + -8)), !(bool)(bVar1 & 1)) {
    *(short *)(puVar3 + -8) = *(short *)(puVar3 + -8) + 1;
  }
  puVar3[-8] = 0;
  puVar3[-7] = 0;
  while( true ) {
    bVar2 = ReadPort(0x8200);
    bVar1 = 0;
    if ((bVar2 & 0xf0) == 0) {
      return 0;
    }
    bVar2 = CompareHighByteThenLow(0x8000,*(ushort *)(puVar3 + -8));
    if ((bool)(bVar1 & 1)) break;
    *(short *)(puVar3 + -8) = *(short *)(puVar3 + -8) + 1;
  }
  return bVar2;
}




/* ============================================================
 * ram:1050 InitializeSoundChannels
 * ============================================================ */


byte InitializeSoundChannels(byte voice_slot)

{
  byte bVar1;
  byte bVar2;
  
  WriteICSSelectOscillator(voice_slot);
  bVar1 = ReadICSRegisterHigh(0xd);
  bVar2 = bVar1 & 0xc3;
  if ((bVar1 & 2) != 0) {
    bVar2 = bVar2 | 1;
  }
  WriteICSRegisterByteHigh(0xd,bVar2);
  WriteICSRegisterByteHigh(7,1);
  WriteICSRegisterByteHigh(8,1);
  WriteICSRegisterByteHigh(0x10,0xf);
  do {
    bVar1 = ReadICSRegisterHigh(0xd);
    bVar2 = bVar1 & 1;
  } while ((bVar1 & 1) == 0);
  WriteICSRegisterByteHigh(0xd,3);
  WriteICSRegisterByteHigh(0,0);
  return bVar2;
}




/* ============================================================
 * ram:10b9 ProgramSoundChannelRegisters
 * ============================================================ */


void ProgramSoundChannelRegisters
               (ushort voice_slot,byte *channel_state,byte *work_buffer,ushort pitch_or_step,
               byte entry_flags)

{
  byte *src;
  byte bVar1;
  ushort *result_dst;
  ushort *puVar2;
  undefined1 **dst;
  ushort value;
  undefined1 *puVar3;
  byte *pbStack_12;
  undefined1 *puStack_10;
  undefined1 *puStack_e;
  ushort uStack_c;
  ushort uStack_a;
  ushort uStack_8;
  byte *pbStack_6;
  byte *pbStack_4;
  undefined1 auStack_2 [2];
  
                    /* Sound-channel tables/data following InitializeSoundChannels. */
  puVar3 = auStack_2;
  puVar2 = &uStack_c;
  result_dst = &uStack_c;
  bVar1 = entry_flags & 0xec;
  puStack_e = (undefined1 *)0x10d3;
  uStack_c = voice_slot;
  uStack_a = voice_slot;
  uStack_8 = voice_slot;
  pbStack_6 = channel_state;
  pbStack_4 = work_buffer;
  LoadCommandBytesToBuffer((byte *)&uStack_c,pitch_or_step);
  bVar1 = bVar1 & 0xec | ((((ushort)&pbStack_12 & 0xfff) + 2 & 0x1000) != 0) << 4 |
          (undefined1 *)0xfffd < &pbStack_12;
  dst = &puStack_10;
  pbStack_12 = (byte *)&uStack_c;
  puStack_10 = (undefined1 *)puVar2;
  puStack_e = (undefined1 *)puVar2;
  LoadCommandBytesToBuffer((byte *)dst,10);
  src = pbStack_12;
  pbStack_12 = (byte *)0x10ed;
  ShiftCopyFourBytes((byte *)dst,(byte *)&uStack_c,src);
  pbStack_12 = (byte *)0x10f5;
  DivideFourByteValue((byte *)result_dst,(byte *)result_dst,z80_soundchip_register_work,bVar1);
  puStack_e = (undefined1 *)0x10ff;
  WriteICSSelectOscillator(puVar3[-6]);
  puStack_e = (undefined1 *)0x1107;
  value = CopyBufferToSoundChip((byte *)&uStack_c);
  puStack_e = (undefined1 *)0x110e;
  WriteICSRegisterWord(1,value);
  puStack_e = (undefined1 *)0x111d;
  WriteICSRegisterByteHigh(0x11,**(byte **)(puVar3 + -4));
  if ((puVar3[-2] & 0x40) == 0) {
    puStack_e = (undefined1 *)0x1137;
    WriteICSRegisterWord(0xb,*(ushort *)(*(short *)(puVar3 + -4) + 4));
    puStack_e = (undefined1 *)0x114a;
    WriteICSRegisterWord(10,*(ushort *)(*(short *)(puVar3 + -4) + 6));
  }
  else {
    puStack_e = (undefined1 *)0x115f;
    WriteICSRegisterWord(0xb,*(ushort *)(*(short *)(puVar3 + -4) + 8));
    puStack_e = (undefined1 *)0x1172;
    WriteICSRegisterWord(10,*(ushort *)(*(short *)(puVar3 + -4) + 10));
  }
  puStack_e = (undefined1 *)0x1185;
  WriteICSRegisterWord(3,*(ushort *)(*(short *)(puVar3 + -4) + 4));
  puStack_e = (undefined1 *)0x1198;
  WriteICSRegisterWord(2,*(ushort *)(*(short *)(puVar3 + -4) + 6));
  puStack_e = (undefined1 *)0x11ab;
  WriteICSRegisterWord(5,*(ushort *)(*(short *)(puVar3 + -4) + 8));
  puStack_e = (undefined1 *)0x11be;
  WriteICSRegisterWord(4,*(ushort *)(*(short *)(puVar3 + -4) + 10));
  puStack_e = (undefined1 *)0x11d0;
  WriteICSRegisterByteHigh(0xc,z80_voice_pan_table[(byte)puVar3[8]]);
  puStack_e = (undefined1 *)0x11e3;
  WriteICSRegisterWord(9,z80_wave_frequency_table[(byte)puVar3[6]]);
  puStack_e = (undefined1 *)0x11ee;
  WriteICSRegisterByteHigh(0,puVar3[-2]);
  puStack_e = (undefined1 *)0x11f7;
  WriteICSRegisterByteHigh(0xd,3);
  puStack_e = (undefined1 *)0x1200;
  WriteICSRegisterByteHigh(0x10,0);
  return;
}




/* ============================================================
 * ram:1208 ProgramSoundChannelMinimal
 * ============================================================ */


void ProgramSoundChannelMinimal(ushort voice_slot,ushort sound_id,byte entry_flags)

{
  byte bVar1;
  byte *src;
  byte bVar2;
  ushort *result_dst;
  ushort *puVar3;
  undefined1 **dst;
  ushort value;
  undefined1 *puVar4;
  byte *pbStack_10;
  undefined1 *puStack_e;
  undefined1 *puStack_c;
  ushort uStack_a;
  ushort uStack_8;
  ushort uStack_6;
  ushort uStack_4;
  undefined1 auStack_2 [2];
  
  puVar4 = auStack_2;
  puVar3 = &uStack_a;
  result_dst = &uStack_a;
  bVar1 = (byte)(sound_id >> 8) | (byte)sound_id;
  bVar2 = bVar1 ^ bVar1 >> 1;
  bVar2 = bVar2 ^ bVar2 >> 2;
  bVar2 = entry_flags & 0x28 | (bVar1 == 0) << 6 | ((char)bVar1 < '\0') << 7 |
          (((bVar2 ^ bVar2 >> 4) & 1) == 0) << 2;
  uStack_a = voice_slot;
  uStack_8 = voice_slot;
  uStack_6 = voice_slot;
  uStack_4 = sound_id;
  if (bVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    puStack_c = (undefined1 *)0x121e;
    Z80WriteLatchOrIo(0x60);
  }
  puStack_c = (undefined1 *)0x122b;
  LoadCommandBytesToBuffer((byte *)&uStack_a,sound_id);
  bVar2 = bVar2 & 0xec | ((((ushort)&pbStack_10 & 0xfff) + 2 & 0x1000) != 0) << 4 |
          (undefined1 *)0xfffd < &pbStack_10;
  dst = &puStack_e;
  pbStack_10 = (byte *)&uStack_a;
  puStack_e = (undefined1 *)puVar3;
  puStack_c = (undefined1 *)puVar3;
  LoadCommandBytesToBuffer((byte *)dst,10);
  src = pbStack_10;
  pbStack_10 = (byte *)0x1245;
  ShiftCopyFourBytes((byte *)dst,(byte *)&uStack_a,src);
  puStack_c = (undefined1 *)0x124f;
  DivideFourByteValue((byte *)result_dst,(byte *)result_dst,z80_soundchip_register_work,bVar2);
  puStack_c = (undefined1 *)0x1257;
  WriteICSSelectOscillator(puVar4[-4]);
  puStack_c = (undefined1 *)0x125f;
  value = CopyBufferToSoundChip((byte *)&uStack_a);
  puStack_c = (undefined1 *)0x1266;
  WriteICSRegisterWord(1,value);
  return;
}




/* ============================================================
 * ram:126e SetSoundChannelWaveIndex
 * ============================================================ */


void SetSoundChannelWaveIndex(byte voice_slot,ushort wave_index)

{
  undefined1 *puVar1;
  undefined1 auStack_2 [2];
  
  puVar1 = auStack_2;
  WriteICSSelectOscillator(voice_slot);
  WriteICSRegisterWord(9,z80_wave_frequency_table[(byte)puVar1[-2]]);
  return;
}




/* ============================================================
 * ram:12bb ConfigureSoundChipVoiceMode
 * ============================================================ */


void ConfigureSoundChipVoiceMode(ushort register_value,ushort mode,byte voice_slot)

{
  byte bVar1;
  byte bVar2;
  undefined1 *puVar3;
  undefined1 local_2 [2];
  
  puVar3 = local_2;
  bVar2 = ReadICSRegisterByteLow(0x43);
  puVar3[-7] = bVar2;
  bVar2 = (byte)(register_value >> 8);
  if (puVar3[-6] == '\x01') {
    WriteICSRegisterByteLow(0x40,puVar3[-4]);
    WriteICSRegisterByteLow(0x42,puVar3[-2]);
    puVar3[-7] = bVar2 | 8;
  }
  else {
    WriteICSRegisterByteLow(0x41,puVar3[-4]);
    puVar3[-2] = puVar3[-2] * ' ';
    puVar3[-7] = bVar2 & 0x1f;
    bVar1 = puVar3[-2] | bVar2 & 0x1f;
    puVar3[-7] = bVar1;
    puVar3[-7] = bVar1 | 0x10;
  }
  WriteICSRegisterByteLow(0x43,bVar2);
  return;
}




/* ============================================================
 * ram:139c InitializeVoiceAllocationTable
 * ============================================================ */


void InitializeVoiceAllocationTable(byte entry_flags)

{
  ushort uVar1;
  
  InitializeSoundChipCore(entry_flags);
  for (z80_voice_slot_index = 0; z80_voice_slot_index < 0x20;
      z80_voice_slot_index = z80_voice_slot_index + 1) {
    uVar1 = CalculateScaledOffset((ushort)z80_voice_slot_index,9);
    (&z80_voice_slots[0].bOwnerSoundId)[uVar1] = 0;
    uVar1 = CalculateScaledOffset((ushort)z80_voice_slot_index,9);
    (&z80_voice_slots[0].bHardwareVoice)[uVar1] = 0xff;
  }
  ConfigureSoundChipVoiceMode(1,0x9b,0x7a);
  return;
}




/* ============================================================
 * ram:13ee AllocateSoundVoiceSlot
 * ============================================================ */


byte AllocateSoundVoiceSlot(byte owner)

{
  z80_voice_slot_index = 0;
  for (z80_voice_slot_cursor = &z80_voice_slots[0].bOwnerSoundId;
      (z80_voice_slot_index < 0x20 && (*z80_voice_slot_cursor != '\0'));
      z80_voice_slot_cursor = z80_voice_slot_cursor + 9) {
    z80_voice_slot_index = z80_voice_slot_index + 1;
  }
  if (z80_voice_slot_index < 0x20) {
    *z80_voice_slot_cursor = owner;
  }
  else {
    z80_voice_slot_index = 0xff;
  }
  return z80_voice_slot_index;
}




/* ============================================================
 * ram:1438 SilenceAllSoundChannels
 * ============================================================ */


byte SilenceAllSoundChannels(byte voice_slot)

{
  ushort uVar1;
  
  uVar1 = CalculateScaledOffset((ushort)voice_slot,9);
  (&z80_voice_slots[0].bOwnerSoundId)[uVar1] = 0;
  return 0;
}




/* ============================================================
 * ram:1449 ReleaseSoundVoiceSlot
 * ============================================================ */


void ReleaseSoundVoiceSlot(byte voice_slot)

{
  ushort uVar1;
  
  uVar1 = CalculateScaledOffset((ushort)voice_slot,9);
  if ((&z80_voice_slots[0].bOwnerSoundId)[uVar1] != 0) {
    InitializeSoundChannels(voice_slot);
    uVar1 = CalculateScaledOffset((ushort)voice_slot,9);
    (&z80_voice_slots[0].bOwnerSoundId)[uVar1] = 0;
  }
  return;
}




/* ============================================================
 * ram:1473 ServiceSoundChannels
 * ============================================================ */


void ServiceSoundChannels(byte owner)

{
  ushort uVar1;
  
  for (z80_voice_slot_index = 0; z80_voice_slot_index < 0x20;
      z80_voice_slot_index = z80_voice_slot_index + 1) {
    uVar1 = CalculateScaledOffset((ushort)z80_voice_slot_index,9);
    if ((&z80_voice_slots[0].bOwnerSoundId)[uVar1] == owner) {
      InitializeSoundChannels(z80_voice_slot_index);
      SilenceAllSoundChannels(z80_voice_slot_index);
    }
  }
  return;
}




/* ============================================================
 * ram:14b8 InitializeMidiRuntimeGlobals
 * ============================================================ */


void InitializeMidiRuntimeGlobals(void)

{
  z80_voice_slot_cursor = &z80_voice_slots[0].bOwnerSoundId;
  for (z80_voice_slot_index = 0; z80_voice_slot_index < 0x20;
      z80_voice_slot_index = z80_voice_slot_index + 1) {
    if ((*z80_voice_slot_cursor == '\x02') || (*z80_voice_slot_cursor == '\x03')) {
      if ((char)((ushort)*(undefined2 *)(z80_voice_slot_cursor + 1) >> 8) == '\0' &&
          (char)*(undefined2 *)(z80_voice_slot_cursor + 1) == '\0') {
        InitializeSoundChannels(z80_voice_slot_index);
        *z80_voice_slot_cursor = 0;
      }
      else {
        *(short *)(z80_voice_slot_cursor + 1) = *(short *)(z80_voice_slot_cursor + 1) + -1;
      }
    }
    z80_voice_slot_cursor = z80_voice_slot_cursor + 9;
  }
  return;
}




/* ============================================================
 * ram:1519 HandleIrqBit0Service
 * ============================================================ */


void HandleIrqBit0Service(void)

{
  byte mode;
  
  mode = 0x43;
  z80_irq_voice_command_flags = ReadICSRegisterByteLow(0x43);
  if ((z80_irq_voice_command_flags & 1) == 0) {
    ReadICSRegisterByteLow(0x41);
  }
  else {
    UpdateMidiPlayback();
    StopMatchingWaveChannels(mode);
    ReadICSRegisterByteLow(0x40);
  }
  return;
}




/* ============================================================
 * ram:153b HandleIrqBit1Service
 * ============================================================ */


void HandleIrqBit1Service(void)

{
  byte bVar1;
  ushort *puVar2;
  byte *dst;
  ushort uVar3;
  byte abStack_8 [2];
  undefined2 uStack_6;
  ushort uStack_4;
  ushort uStack_2;
  
  uStack_2 = 0x1546;
  CopyBytesCounted(4,z80_voice_active_mask_b,z80_initial_voice_mask_b);
  uStack_2 = 0x1551;
  CopyBytesCounted(4,z80_voice_active_mask_a,z80_initial_voice_mask_a);
  while( true ) {
    uStack_2 = 0x1557;
    bVar1 = ReadICSRegisterHigh(0xf);
    z80_irq_voice_index = bVar1 & 0x1f;
    z80_irq_voice_command_flags = bVar1 & 0xc0;
    if (z80_irq_voice_command_flags == 0xc0) break;
    puVar2 = &uStack_4;
    dst = abStack_8;
    ClearLocalBuffer(dst,(ushort)z80_irq_voice_index);
    ShiftCopyFourBytes(dst,(byte *)puVar2,z80_voice_bit_table_base);
    CopyBytesCounted(4,z80_voice_start_mask_work,(byte *)puVar2);
    uVar3 = (ushort)z80_irq_voice_index;
    uStack_2 = 0x15a6;
    WriteICSSelectOscillator(z80_irq_voice_index);
    if ((z80_irq_voice_command_flags & 0x40) == 0) {
      puVar2 = &uStack_4;
      uStack_6 = 0x15bf;
      uStack_4 = uVar3;
      uStack_2 = uVar3;
      AndFourBytes((byte *)&uStack_4,z80_voice_active_mask_a,z80_voice_start_mask_work);
      uStack_6 = 0x15c7;
      bVar1 = CompareFourBytes(z80_zero_dword_constant,(byte *)puVar2);
      uVar3 = uStack_2;
      if (bVar1 != 0) {
        uStack_2 = 0x15d7;
        OrFourBytes(z80_voice_active_mask_a,z80_voice_active_mask_a,z80_voice_start_mask_work);
        uVar3 = 0xd;
        uStack_2 = 0x15dd;
        z80_soundchip_voice_status = ReadICSRegisterHigh(0xd);
        if ((z80_soundchip_voice_status & 8) == 0) {
          uStack_2 = 0x15ed;
          InitializeSoundChannels(z80_irq_voice_index);
          uVar3 = (ushort)z80_irq_voice_index;
          uStack_2 = 0x15f6;
          SilenceAllSoundChannels(z80_irq_voice_index);
        }
      }
    }
    if ((z80_irq_voice_command_flags & 0x80) == 0) {
      puVar2 = &uStack_4;
      uStack_6 = 0x160f;
      uStack_4 = uVar3;
      uStack_2 = uVar3;
      AndFourBytes((byte *)&uStack_4,z80_voice_active_mask_b,z80_voice_start_mask_work);
      uStack_6 = 0x1617;
      bVar1 = CompareFourBytes(z80_zero_dword_constant,(byte *)puVar2);
      if (bVar1 != 0) {
        bVar1 = 0x5b;
        uStack_2 = 0x1628;
        OrFourBytes(z80_voice_active_mask_b,z80_voice_active_mask_b,z80_voice_start_mask_work);
        uStack_2 = 0x162e;
        z80_soundchip_voice_status = ReadICSRegisterHigh(0);
        uStack_2 = 0x163a;
        bVar1 = StopWaveChannelForMidi(z80_irq_voice_index,bVar1);
        if ((bVar1 == 0) && ((z80_soundchip_voice_status & 8) == 0)) {
          uStack_2 = 0x164d;
          InitializeSoundChannels(z80_irq_voice_index);
          uStack_2 = 0x1656;
          SilenceAllSoundChannels(z80_irq_voice_index);
        }
      }
    }
  }
  return;
}




/* ============================================================
 * ram:167a VerifySoundChipOrDisplayError
 * ============================================================ */


void VerifySoundChipOrDisplayError(ushort display_flags)

{
  byte bVar1;
  ushort uStack_4;
  ushort uStack_2;
  
  uStack_2 = 0x167d;
  bVar1 = ProbeSoundChipRevision();
  if (bVar1 != 1) {
    uStack_4 = display_flags;
    uStack_2 = display_flags;
    bVar1 = ProbeSoundChipRevision();
    LoadCommandBytesToBuffer((byte *)&uStack_4,(ushort)bVar1);
    DisplaySoundChipDiagnosticMessage(&z80_diag_chiprev_error_string,1,1);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  return;
}




/* ============================================================
 * ram:16a0 InitializeSoundChipCore
 * ============================================================ */


void InitializeSoundChipCore(byte entry_flags)

{
  byte bVar1;
  ushort initial_voice_index;
  undefined2 local_2;
  
  z80_soundchip_init_word0 = 0;
  z80_soundchip_init_word1 = 0;
  z80_soundchip_init_word2 = 0;
  VerifySoundChipOrDisplayError(0);
  ResetSoundChipMixerState();
  bVar1 = entry_flags & 0xec | ((((ushort)&local_2 & 0xfff) + 1 & 0x1000) != 0) << 4 |
          (undefined1 *)0xfffe < &local_2;
  local_2._1_1_ = 3;
  initial_voice_index = 0x4c;
  WriteICSRegisterByteLow(0x4c,3);
  InitializeSoundChipVoicesAndTables(initial_voice_index,bVar1);
  bVar1 = ReadICSRegisterByteLow(0x4d);
  local_2 = CONCAT11(local_2._1_1_,bVar1) | 0xc;
  WriteICSRegisterByteLow(0x4d,bVar1 | 0xc);
  local_2 = CONCAT11(local_2._1_1_,1);
  WriteICSRegisterByteLow(0x4a,1);
  return;
}




/* ============================================================
 * ram:16f2 ProbeSoundChipRevision
 * ============================================================ */


byte ProbeSoundChipRevision(void)

{
  byte bVar1;
  
  WritePort(0x8001,0x5a);
  bVar1 = ReadPort(0x8001);
  if (bVar1 != 0x5a) {
    return 0xff;
  }
  WritePort(0x8001,0xa5);
  bVar1 = ReadPort(0x8001);
  if (bVar1 != 0xa5) {
    return 0xff;
  }
  WritePort(0x8001,0x4c);
  bVar1 = ReadPort(0x8001);
  if (bVar1 != 0x4c) {
    return 0xff;
  }
  bVar1 = ReadPort(0x8002);
  return bVar1;
}




/* ============================================================
 * ram:170b ReadSoundChipRevisionAfterMagic
 * ============================================================ */


byte ReadSoundChipRevisionAfterMagic(byte magic_value)

{
  byte bVar1;
  
  WritePort(0x8001,magic_value);
  bVar1 = ReadPort(0x8001);
  if (bVar1 != 0xa5) {
    return 0xff;
  }
  WritePort(0x8001,0x4c);
  bVar1 = ReadPort(0x8001);
  if (bVar1 != 0x4c) {
    return 0xff;
  }
  bVar1 = ReadPort(0x8002);
  return bVar1;
}




/* ============================================================
 * ram:173b ResetSoundChipMixerState
 * ============================================================ */


void ResetSoundChipMixerState(void)

{
  undefined2 local_2;
  
  WriteICSRegisterByteLow(0x4d,0);
  for (local_2 = 0x10; local_2._1_1_ != '\0' || (char)local_2 != '\0'; local_2 = local_2 + -1) {
    ReadICSRegisterByteLow(0x4d);
  }
  WriteICSRegisterByteLow(0x4d,1);
  return;
}




/* ============================================================
 * ram:1785 DisplaySoundChipErrorCode
 * ============================================================ */


void DisplaySoundChipErrorCode(ushort error_code)

{
  ushort uStack_6;
  ushort uStack_4;
  ushort local_2;
  
  uStack_6 = error_code;
  uStack_4 = error_code;
  local_2 = error_code;
  LoadCommandBytesToBuffer((byte *)&uStack_6,error_code & 0xff);
  DisplaySoundChipDiagnosticMessage(z80_diag_dsg_error_string,5,1);
  return;
}




/* ============================================================
 * ram:17a6 InitializeSoundChipVoicesAndTables
 * ============================================================ */


void InitializeSoundChipVoicesAndTables(ushort initial_voice_index,byte entry_flags)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  byte *pbStack_10;
  byte abStack_e [4];
  byte abStack_a [2];
  undefined2 uStack_8;
  ushort uStack_6;
  ushort uStack_4;
  undefined1 local_2 [2];
  
  puVar7 = local_2;
  bVar3 = entry_flags & 0xec;
  uStack_8 = 0x17b6;
  uStack_6 = initial_voice_index;
  uStack_4 = initial_voice_index;
  bVar4 = ReadICSRegisterByteLow(0x4d);
  puVar7[-2] = bVar4;
  puVar7[-3] = bVar4;
  bVar3 = bVar3 & 0x28;
  puVar7[-2] = bVar4 & 0xf7;
  uStack_8 = 0x17ca;
  WriteICSRegisterByteLow(0x4d,bVar4 & 0xf7);
  uStack_8 = 0x17d3;
  WriteICSRegisterByteHigh(0xe,0x1f);
  puVar7[-4] = 0;
  while( true ) {
    bVar4 = bVar3 & 0x28;
    if (0x1f < (byte)uStack_6) break;
    uStack_8 = 0x17ef;
    InitializeSoundChannels((byte)uStack_6);
    puVar7[-4] = (char)uStack_6 + '\x01';
    bVar3 = bVar4;
  }
  puVar7[-4] = 0;
  while( true ) {
    bVar3 = bVar3 & 0x28;
    if (0x1f < (byte)uStack_6) break;
    uStack_8 = 0x180e;
    WriteICSSelectOscillator((byte)uStack_6);
    puVar7[-1] = 0xff;
    bVar4 = bVar3;
    do {
      cVar1 = puVar7[-1];
      puVar7[-1] = cVar1 + -1;
      bVar3 = bVar4 & 0x28;
      if ((char)(cVar1 + -1) == '\0') {
        uStack_8 = 0x1823;
        DisplaySoundChipErrorCode(1);
        goto LAB_ram_1841;
      }
      uStack_8 = 0x182b;
      bVar4 = ReadICSRegisterHigh(0);
      puVar7[-2] = bVar4;
      bVar4 = bVar3 & 0x28;
    } while ((puVar7[-2] & 0x80) != 0);
    puVar7[-4] = (char)uStack_6 + '\x01';
  }
  uStack_8 = 0x183e;
  bVar4 = ReadICSRegisterHigh(0xf);
  puVar7[-2] = bVar4;
LAB_ram_1841:
  uStack_8 = 0x1847;
  WriteICSSelectOscillator(0);
  puVar7[-1] = 0xff;
  do {
    bVar2 = puVar7[-1] - 1;
    puVar7[-1] = bVar2;
    bVar4 = bVar2 ^ bVar2 >> 1;
    bVar4 = bVar4 ^ bVar4 >> 2;
    bVar3 = bVar3 & 0x28 | (bVar2 == 0) << 6 | ((char)bVar2 < '\0') << 7 |
            (((bVar4 ^ bVar4 >> 4) & 1) == 0) << 2;
    if (bVar2 == 0) {
      uStack_8 = 0x185c;
      DisplaySoundChipErrorCode(2);
      break;
    }
    uStack_8 = 0x1867;
    WriteICSRegisterByteHigh(0,0xa0);
    uStack_8 = 0x186d;
    bVar4 = ReadICSRegisterByteLow(0x4b);
    puVar7[-2] = bVar4;
    bVar4 = puVar7[-2] & 0x9f;
    bVar3 = bVar3 & 0x28 | SBORROW1(bVar4,-0x80) << 2 | (bVar4 == 0x80) << 6 |
            ((char)(bVar4 + 0x80) < '\0') << 7;
  } while (bVar4 != 0x80);
  uStack_8 = 0x1883;
  WriteICSRegisterByteHigh(0xe,0x1f);
  uStack_8 = 0x188b;
  WriteICSRegisterByteHigh(0,0);
  uStack_8 = 0x1891;
  bVar4 = ReadICSRegisterHigh(0xf);
  puVar7[-2] = bVar4;
  uStack_8 = 0x189f;
  WriteICSRegisterByteLow(0x4d,(byte)(uStack_6 >> 8));
  pbVar6 = abStack_e;
  bVar3 = bVar3 & 0xec;
  pbStack_10 = (byte *)0x18ae;
  ClearLocalBuffer(pbVar6,0x18);
  pbVar5 = z80_soundchip_register_work;
  pbStack_10 = (byte *)0x18b8;
  MultiplyFourByteValue(z80_soundchip_register_work,z80_soundchip_reset_work_seed,pbVar6,bVar3);
  bVar3 = bVar3 & 0xec | ((((ushort)&pbStack_10 & 0xfff) + 6 & 0x1000) != 0) << 4 |
          &z80_stack_local_bounds_sentinel < &pbStack_10;
  pbVar6 = abStack_a;
  pbStack_10 = pbVar5;
  ClearLocalBuffer(pbVar6,0x20);
  pbVar5 = pbStack_10;
  pbStack_10 = (byte *)0x18cb;
  DivideFourByteValue(pbVar5,pbVar5,pbVar6,bVar3);
  return;
}




/* ============================================================
 * ram:18d3 ClearMidiChannelState
 * ============================================================ */


void ClearMidiChannelState(ushort midi_channel)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  ushort uVar4;
  undefined1 *puVar5;
  ushort uStack_6;
  ushort uStack_4;
  undefined1 auStack_2 [2];
  
  puVar5 = auStack_2;
  bVar1 = (undefined1 *)0xfffd < &uStack_4;
  uStack_6 = 0;
  uStack_4 = midi_channel;
  while( true ) {
    CompareWordPairForFlags(0x10,uStack_6);
    if ((bool)(bVar1 & 1)) break;
    uVar2 = CalculateScaledOffset((ushort)(byte)puVar5[-2],0xd7);
    sVar3 = uVar2 + 0x3ab3;
    uVar2 = CalculateScaledOffset(uStack_6,0xd);
    *(undefined1 *)(uVar2 + sVar3) = 0;
    uVar2 = CalculateScaledOffset((ushort)(byte)puVar5[-2],0xd7);
    sVar3 = uVar2 + 0x3ab3;
    uVar2 = CalculateScaledOffset(uStack_6,0xd);
    *(undefined1 *)(uVar2 + sVar3 + 1) = 0x80;
    uVar2 = CalculateScaledOffset((ushort)(byte)puVar5[-2],0xd7);
    uVar4 = CalculateScaledOffset(0xd,uStack_6);
    (&z80_midi_channels[0].subvoices[0].bParam2)[uVar4 + uVar2] = 0;
    uVar2 = CalculateScaledOffset((ushort)(byte)puVar5[-2],0xd7);
    sVar3 = uVar2 + 0x3ab3;
    uVar2 = CalculateScaledOffset(uStack_6,0xd);
    *(undefined1 *)(uVar2 + sVar3 + 3) = 0;
    *(undefined1 *)(uVar2 + sVar3 + 4) = 0;
    uVar2 = CalculateScaledOffset((ushort)(byte)puVar5[-2],0xd7);
    sVar3 = uVar2 + 0x3ab3;
    uVar2 = CalculateScaledOffset(uStack_6,0xd);
    *(undefined1 *)(uVar2 + sVar3 + 9) = 0;
    *(undefined1 *)(uVar2 + sVar3 + 10) = 0;
    uVar2 = CalculateScaledOffset((ushort)(byte)puVar5[-2],0xd7);
    uVar4 = CalculateScaledOffset(0xd,uStack_6);
    uVar4 = uVar4 + uVar2 + 0x3ab3;
    bVar1 = 0xfff4 < uVar4;
    *(undefined1 *)(uVar4 + 0xb) = 0;
    *(undefined1 *)(uVar4 + 0xc) = 0;
    uStack_6 = uStack_6 + 1;
  }
  return;
}




/* ============================================================
 * ram:19c1 InitializeMidiPlaybackState
 * ============================================================ */


/* WARNING: Removing unreachable block (ram,0x1a22) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InitializeMidiPlaybackState(void)

{
  ushort uVar1;
  undefined1 *puVar2;
  undefined1 auStack_2 [2];
  
                    /* MIDI playback initialization/state routines and adjacent table data region.
                        */
  puVar2 = auStack_2;
  do {
    uVar1 = CalculateScaledOffset(0,0xd7);
    *(undefined1 *)((short)z80_midi_channels[0].subvoices + (uVar1 - 7)) = 0;
    uVar1 = CalculateScaledOffset(0,0xd7);
    *(undefined1 *)((short)z80_midi_channels[0].subvoices + (uVar1 - 4)) = 0;
    uVar1 = CalculateScaledOffset(0,0xd7);
    *(undefined1 *)((short)z80_midi_channels[0].subvoices + (uVar1 - 3)) = 2;
    ClearMidiChannelState(0);
    puVar2[-7] = 1;
  } while( true );
}




/* ============================================================
 * ram:1a51 ResetMidiChannel
 * ============================================================ */


void ResetMidiChannel(byte midi_channel)

{
  byte owner;
  ushort uVar1;
  
  uVar1 = CalculateScaledOffset((ushort)midi_channel,0xd7);
  *(undefined1 *)((short)z80_midi_channels[0].subvoices + (uVar1 - 7)) = 0;
  uVar1 = CalculateScaledOffset((ushort)midi_channel,0xd7);
  *(undefined1 *)((short)z80_midi_channels[0].subvoices + (uVar1 - 4)) = 0;
  ClearMidiChannelState((ushort)midi_channel);
  DisableInterruptsWrapper();
  if (midi_channel == 0) {
    owner = 2;
  }
  else {
    owner = 3;
  }
  ServiceSoundChannels(owner);
  InitializeDriverState();
  return;
}




/* ============================================================
 * ram:1a8e MarkMidiChannelActive
 * ============================================================ */


void MarkMidiChannelActive(byte midi_channel)

{
  ushort uVar1;
  
  uVar1 = CalculateScaledOffset((ushort)midi_channel,0xd7);
  *(undefined1 *)((short)z80_midi_channels[0].subvoices + (uVar1 - 7)) = 2;
  return;
}




/* ============================================================
 * ram:1aa0 SetMidiChannelParameter
 * ============================================================ */


void SetMidiChannelParameter(byte midi_channel,byte value)

{
  ushort uVar1;
  undefined1 *puVar2;
  undefined1 auStack_2 [2];
  
  puVar2 = auStack_2;
  uVar1 = CalculateScaledOffset((ushort)midi_channel,0xd7);
  *(undefined1 *)((short)z80_midi_channels[0].subvoices + (uVar1 - 4)) = puVar2[-2];
  return;
}




/* ============================================================
 * ram:1abf ScaleMidiChannelVolumeTable
 * ============================================================ */


void ScaleMidiChannelVolumeTable(ushort midi_channel,byte scale,byte limit)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  short sVar4;
  ushort uVar5;
  ushort uVar6;
  undefined1 *puVar7;
  undefined1 auStack_2 [2];
  
  puVar7 = auStack_2;
  uVar3 = CalculateScaledOffset(midi_channel & 0xff,0xd7);
  *(undefined1 *)((short)z80_midi_channels[0].subvoices + (uVar3 - 6)) = puVar7[-2];
  puVar7[-5] = 0;
  while( true ) {
    uVar3 = CalculateScaledOffset((ushort)(byte)puVar7[-4],0xd7);
    bVar1 = *(byte *)((short)z80_midi_channels[0].subvoices + (uVar3 - 5));
    bVar2 = (byte)(midi_channel >> 8);
    if ((bVar1 == bVar2) || (bVar1 < bVar2)) break;
    uVar3 = CalculateScaledOffset((ushort)(byte)puVar7[-4],0xd7);
    sVar4 = uVar3 + 0x3ab3;
    uVar3 = CalculateScaledOffset(midi_channel >> 8,0xd);
    uVar5 = CalculateScaledOffset((ushort)(byte)puVar7[-4],0xd7);
    uVar6 = CalculateScaledOffset((ushort)(byte)puVar7[-5],0xd);
    bVar1 = ScaleByteByRegisterB
                      (bVar1,(ushort)(byte)puVar7[-2],
                       (ushort)(&z80_midi_channels[0].subvoices[0].bDelay)[uVar6 + uVar5]);
    *(byte *)(uVar3 + sVar4 + 1) = bVar1;
    puVar7[-5] = bVar2 + 1;
  }
  return;
}




/* ============================================================
 * ram:1b6d StartMidiSequence
 * ============================================================ */


byte StartMidiSequence(byte midi_channel,byte sequence_id)

{
  undefined2 uVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  ushort uVar7;
  undefined1 *puVar8;
  ushort uVar9;
  undefined1 *puVar10;
  undefined1 auStack_2 [2];
  
  puVar10 = auStack_2;
  ResetMidiChannel(midi_channel);
  uVar7 = CalculateScaledOffset(0xd7,(ushort)(byte)puVar10[-6]);
  bVar2 = 0xc553 < uVar7;
  puVar8 = (undefined1 *)((short)z80_midi_channels[0].subvoices + (uVar7 - 7));
  ReturnZeroStub(*(ushort *)z80_midi_sequence_data_base,(ushort)(byte)puVar10[-4]);
  if ((bVar2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    Z80WriteLatchOrIo(0x40);
  }
  uVar1 = *(undefined2 *)(z80_midi_sequence_index_base + (ushort)(byte)puVar10[-4] * 2);
  uVar5 = (undefined1)uVar1;
  puVar10[-0xf] = uVar5;
  uVar6 = (undefined1)((ushort)uVar1 >> 8);
  puVar10[-0xe] = uVar6;
  puVar10[-0x11] = uVar5;
  puVar10[-0x10] = uVar6;
  *(undefined1 *)((short)z80_midi_channels[0].subvoices + (uVar7 - 2)) = uVar5;
  *(undefined1 *)((short)z80_midi_channels[0].subvoices + (uVar7 - 1)) = uVar6;
  puVar10[-8] = 0;
  puVar10[-0xb] = 0;
  puVar10[-10] = 0;
  cVar3 = **(char **)(puVar10 + -0xf);
  DelayLoop(8);
  puVar10[-9] = cVar3;
  if (cVar3 != -0x7d) {
    bVar2 = (byte)puVar10[-8] < 0x10;
    if ((bool)bVar2) {
      bVar4 = CompareHighByteThenLow(0xa0,*(ushort *)(puVar10 + -0xb));
      if ((bVar2 & 1) == 0) {
        *(short *)(puVar10 + -0xb) = *(short *)(puVar10 + -0xb) + 1;
        JumpTableDispatch(2,(byte *)(ushort)(byte)puVar10[-9],0x1d11);
        return bVar4;
      }
    }
    return 1;
  }
  *(undefined1 *)((short)z80_midi_channels[0].subvoices + (uVar7 - 5)) = puVar10[-8];
  *(undefined1 *)((short)z80_midi_channels[0].subvoices + (uVar7 - 6)) = puVar10[-2];
  puVar10[-7] = 0;
  while ((puVar10[-8] != puVar10[-7] && ((byte)puVar10[-7] <= (byte)puVar10[-8]))) {
    uVar7 = CalculateScaledOffset((ushort)(byte)puVar10[-7],0xd);
    puVar8[uVar7 + 10] = 0;
    puVar8[uVar7 + 0xb] = 0;
    uVar7 = CalculateScaledOffset((ushort)(byte)puVar10[-7],0xd);
    puVar8[uVar7 + 9] = 0;
    uVar7 = CalculateScaledOffset((ushort)(byte)puVar10[-7],0xd);
    uVar9 = CalculateScaledOffset((ushort)(byte)puVar10[-7],0xd);
    uVar1 = *(undefined2 *)(uVar9 + *(short *)(puVar10 + -0x13) + 0x10);
    puVar8[uVar7 + 0x12] = (char)uVar1;
    puVar8[uVar7 + 0x13] = (char)((ushort)uVar1 >> 8);
    puVar10[-7] = puVar10[-7] + '\x01';
  }
  if (puVar10[4] == '\0') {
    *puVar8 = 0xff;
  }
  else {
    *puVar8 = 1;
  }
  return 0;
}




/* ============================================================
 * ram:2330 UpdateMidiPlayback
 * ============================================================ */


void UpdateMidiPlayback(void)

{
  byte bVar1;
  
  InitializeMidiRuntimeGlobals();
  z80_midi_channel_index = 0;
  z80_midi_channel_cursor = &z80_midi_channels[0].bState;
  do {
    if (1 < z80_midi_channel_index) {
      return;
    }
    if (*z80_midi_channel_cursor != '\0') {
      z80_midi_current_subvoice_count = z80_midi_channel_cursor[2];
      z80_midi_finished_subvoice_count = 0;
      z80_midi_subvoice_cursor = z80_midi_channel_cursor + 7;
      for (z80_midi_subvoice_index = 0;
          (z80_midi_current_subvoice_count != z80_midi_subvoice_index &&
          (z80_midi_subvoice_index <= z80_midi_current_subvoice_count));
          z80_midi_subvoice_index = z80_midi_subvoice_index + 1) {
        if ((*z80_midi_subvoice_cursor & 1) == 0) {
          if (*z80_midi_channel_cursor == '\x02') {
            if (z80_midi_subvoice_cursor[1] == '\0') {
              z80_midi_finished_subvoice_count = z80_midi_finished_subvoice_count + 1;
            }
            else {
              z80_midi_subvoice_cursor[1] = z80_midi_subvoice_cursor[1] + -1;
            }
            if ((z80_midi_current_subvoice_count == z80_midi_finished_subvoice_count) ||
               (z80_midi_current_subvoice_count < z80_midi_finished_subvoice_count)) {
              *z80_midi_channel_cursor = 0;
            }
          }
          if (((char)((ushort)*(undefined2 *)(z80_midi_subvoice_cursor + 3) >> 8) == '\0' &&
               (char)*(undefined2 *)(z80_midi_subvoice_cursor + 3) == '\0') ||
             (*(short *)(z80_midi_subvoice_cursor + 3) =
                   *(short *)(z80_midi_subvoice_cursor + 3) + -1,
             (char)((ushort)*(undefined2 *)(z80_midi_subvoice_cursor + 3) >> 8) == '\0' &&
             (char)*(undefined2 *)(z80_midi_subvoice_cursor + 3) == '\0')) {
            bVar1 = **(byte **)(z80_midi_subvoice_cursor + 0xb);
            DelayLoop(8);
            if ((bVar1 == 0xef) || (bVar1 < 0xef)) {
              if ((bVar1 == 0x7f) || (bVar1 < 0x7f)) {
                if ((*z80_midi_subvoice_cursor & 8) == 0) {
                  z80_midi_event_dispatch_index = 1;
                }
                else {
                  z80_midi_event_dispatch_index = 2;
                }
              }
              else {
                z80_midi_event_dispatch_index = bVar1 & 0x7f;
                if ((z80_midi_event_dispatch_index != 9) && (8 < z80_midi_event_dispatch_index)) {
                    /* WARNING: Subroutine does not return */
                  Z80WriteLatchOrIo(0x70);
                }
              }
            }
            else {
              z80_midi_event_dispatch_index = 0;
            }
                    /* WARNING: Could not recover jumptable at 0x246f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(&z80_midi_event_handler_table + (ushort)z80_midi_event_dispatch_index * 2))
                      ();
            return;
          }
        }
        z80_midi_subvoice_cursor = z80_midi_subvoice_cursor + 0xd;
      }
    }
    z80_midi_channel_index = z80_midi_channel_index + 1;
    z80_midi_channel_cursor = z80_midi_channel_cursor + 0xd7;
  } while( true );
}




/* ============================================================
 * ram:2485 InitializeWaveTableState
 * ============================================================ */


/* WARNING: Removing unreachable block (ram,0x24ca) */

void InitializeWaveTableState(void)

{
  ushort uVar1;
  undefined1 *puVar2;
  undefined1 auStack_2 [2];
  
  puVar2 = auStack_2;
  do {
    uVar1 = CalculateScaledOffset(0,0x13);
    (&z80_wave_channels[0].bActive)[uVar1] = 0;
    uVar1 = CalculateScaledOffset(0,0x13);
    (&z80_wave_channels[0].bFlags)[uVar1] = 0;
    puVar2[-5] = 1;
  } while( true );
}




/* ============================================================
 * ram:24e2 FindFreeWaveChannel
 * ============================================================ */


byte FindFreeWaveChannel(void)

{
  ushort uVar1;
  byte local_1;
  
  local_1 = 0;
  while( true ) {
    if (0x1f < local_1) {
      return 0xff;
    }
    uVar1 = CalculateScaledOffset((ushort)local_1,0x13);
    if ((&z80_wave_channels[0].bActive)[uVar1] == 0) break;
    local_1 = local_1 + 1;
  }
  return local_1;
}




/* ============================================================
 * ram:251c AllocateWaveChannel
 * ============================================================ */


byte AllocateWaveChannel(ushort sound_id,ushort wave_index)

{
  undefined1 uVar1;
  undefined2 uVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  undefined1 *puVar6;
  undefined1 local_2 [2];
  
  puVar6 = local_2;
  bVar3 = FindFreeWaveChannel();
  puVar6[-7] = bVar3;
  if (bVar3 == 0xff) {
    return 0xff;
  }
  uVar4 = CalculateScaledOffset(wave_index >> 8,0x13);
  uVar1 = puVar6[-3];
  (&z80_wave_channels[0].bSoundIdHigh)[uVar4] = puVar6[-4];
  *(undefined1 *)((short)&z80_wave_channels[0].wWaveTableEntry + uVar4) = uVar1;
  puVar6[-6] = puVar6[-4];
  puVar6[-5] = puVar6[-3] & 3;
  uVar4 = CalculateScaledOffset(wave_index >> 8,0x13);
  uVar5 = CalculateScaledOffset(0xc,*(ushort *)(puVar6 + -6));
  bVar3 = CARRY2(z80_wave_table_runtime_count,uVar5);
  *(word *)(&z80_wave_channels[0].bVoiceSlot + uVar4) = z80_wave_table_runtime_count + uVar5;
  ReturnZeroStub(*(ushort *)z80_wave_table_runtime_base,*(ushort *)(puVar6 + -6));
  if ((bVar3 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    Z80WriteLatchOrIo(0x50);
  }
  uVar4 = CalculateScaledOffset(wave_index >> 8,0x13);
  *(undefined1 *)((short)&z80_wave_channels[0].wCurrentOffset + uVar4) = puVar6[-2];
  *(undefined1 *)((short)&z80_wave_channels[0].wCurrentOffset + uVar4 + 1) = 0;
  uVar4 = CalculateScaledOffset(wave_index >> 8,0x13);
  uVar5 = CalculateScaledOffset(wave_index >> 8,0x13);
  uVar2 = *(undefined2 *)(*(short *)(&z80_wave_channels[0].bVoiceSlot + uVar5) + 2);
  *(char *)((short)&z80_wave_channels[0].wRestartOffset + uVar4) = (char)uVar2;
  *(char *)((short)&z80_wave_channels[0].wRestartOffset + uVar4 + 1) = (char)((ushort)uVar2 >> 8);
  uVar4 = CalculateScaledOffset(wave_index >> 8,0x13);
  uVar2 = *(undefined2 *)((short)&z80_wave_channels[0].wRestartOffset + uVar4);
  if ((char)((ushort)uVar2 >> 8) == '\0' && (char)uVar2 == '\0') {
                    /* WARNING: Subroutine does not return */
    Z80WriteLatchOrIo(0x60);
  }
  return (byte)(wave_index >> 8);
}




/* ============================================================
 * ram:2611 StartWaveChannel
 * ============================================================ */


void StartWaveChannel(ushort sound_id,ushort wave_index,byte flags)

{
  byte bVar1;
  ushort uVar2;
  undefined1 *puVar3;
  undefined1 local_2 [2];
  
  puVar3 = local_2;
  bVar1 = AllocateWaveChannel(sound_id & 0xff,wave_index);
  puVar3[-7] = bVar1;
  if (bVar1 == 0xff) {
    return;
  }
  uVar2 = CalculateScaledOffset(wave_index >> 8,0x13);
  (&z80_wave_channels[0].bFlags)[uVar2] = 0;
  if (puVar3[-2] != '\0') {
    uVar2 = CalculateScaledOffset(wave_index >> 8,0x13);
    (&z80_wave_channels[0].bFlags)[uVar2] = (&z80_wave_channels[0].bFlags)[uVar2] | 2;
  }
  uVar2 = CalculateScaledOffset(wave_index >> 8,0x13);
  (&z80_wave_channels[0].bActive)[uVar2] = 1;
  if (puVar3[4] == 'U') {
    uVar2 = CalculateScaledOffset(wave_index >> 8,0x13);
    (&z80_wave_channels[0].bFlags)[uVar2] = (&z80_wave_channels[0].bFlags)[uVar2] | 0x10;
  }
  return;
}




/* ============================================================
 * ram:268f StartWaveChannelAbsolute
 * ============================================================ */


void StartWaveChannelAbsolute(ushort sound_id,ushort wave_index,ushort flags)

{
  undefined1 uVar1;
  byte bVar2;
  ushort uVar3;
  undefined1 *puVar4;
  undefined1 local_2 [2];
  
  puVar4 = local_2;
  if (flags == 0) {
                    /* WARNING: Subroutine does not return */
    Z80WriteLatchOrIo(0x60);
  }
  bVar2 = AllocateWaveChannel(sound_id & 0xff,wave_index);
  puVar4[-7] = bVar2;
  if (bVar2 == 0xff) {
    return;
  }
  uVar3 = CalculateScaledOffset(wave_index >> 8,0x13);
  uVar1 = puVar4[-1];
  *(undefined1 *)((short)&z80_wave_channels[0].wRestartOffset + uVar3) = puVar4[-2];
  *(undefined1 *)((short)&z80_wave_channels[0].wRestartOffset + uVar3 + 1) = uVar1;
  uVar3 = CalculateScaledOffset(wave_index >> 8,0x13);
  (&z80_wave_channels[0].bFlags)[uVar3] = 0;
  if (puVar4[4] != '\0') {
    uVar3 = CalculateScaledOffset(wave_index >> 8,0x13);
    (&z80_wave_channels[0].bFlags)[uVar3] = (&z80_wave_channels[0].bFlags)[uVar3] | 2;
  }
  uVar3 = CalculateScaledOffset(wave_index >> 8,0x13);
  (&z80_wave_channels[0].bActive)[uVar3] = 1;
  if (puVar4[6] == 'U') {
    uVar3 = CalculateScaledOffset(wave_index >> 8,0x13);
    (&z80_wave_channels[0].bFlags)[uVar3] = (&z80_wave_channels[0].bFlags)[uVar3] | 0x10;
  }
  return;
}




/* ============================================================
 * ram:2738 StartWaveChannelRelative
 * ============================================================ */


void StartWaveChannelRelative(ushort sound_id,ushort wave_index,byte flags)

{
  undefined2 uVar1;
  byte bVar2;
  ushort uVar3;
  short *psVar4;
  undefined1 *puVar5;
  undefined1 local_2 [2];
  
  puVar5 = local_2;
  bVar2 = AllocateWaveChannel(sound_id & 0xff,wave_index);
  puVar5[-7] = bVar2;
  if (bVar2 == 0xff) {
    return;
  }
  uVar3 = CalculateScaledOffset(wave_index >> 8,0x13);
  psVar4 = (short *)((short)&z80_wave_channels[0].wRestartOffset + uVar3);
  *psVar4 = *psVar4 + *(short *)(puVar5 + -2);
  uVar3 = CalculateScaledOffset(wave_index >> 8,0x13);
  uVar1 = *(undefined2 *)((short)&z80_wave_channels[0].wRestartOffset + uVar3);
  if ((char)((ushort)uVar1 >> 8) == '\0' && (char)uVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
    Z80WriteLatchOrIo(0x60);
  }
  uVar3 = CalculateScaledOffset(wave_index >> 8,0x13);
  (&z80_wave_channels[0].bFlags)[uVar3] = 0;
  if (puVar5[4] != '\0') {
    uVar3 = CalculateScaledOffset(wave_index >> 8,0x13);
    (&z80_wave_channels[0].bFlags)[uVar3] = (&z80_wave_channels[0].bFlags)[uVar3] | 2;
  }
  uVar3 = CalculateScaledOffset(wave_index >> 8,0x13);
  (&z80_wave_channels[0].bActive)[uVar3] = 1;
  if (puVar5[6] == 'U') {
    uVar3 = CalculateScaledOffset(wave_index >> 8,0x13);
    (&z80_wave_channels[0].bFlags)[uVar3] = (&z80_wave_channels[0].bFlags)[uVar3] | 0x10;
  }
  return;
}




/* ============================================================
 * ram:27f2 RestartWaveChannelByKey
 * ============================================================ */


void RestartWaveChannelByKey(ushort sound_id,ushort wave_index,byte entry_flags)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  undefined1 *puVar5;
  ushort uStack_8;
  undefined1 local_2 [2];
  
  puVar5 = local_2;
  uStack_8 = wave_index & 0xff;
  do {
    bVar2 = entry_flags & 0x28;
    uVar4 = CalculateScaledOffset(0,0x13);
    bVar3 = (&z80_wave_channels[0].bActive)[uVar4];
    bVar1 = bVar3 ^ bVar3 >> 1;
    bVar1 = bVar1 ^ bVar1 >> 2;
    entry_flags = bVar2 & 0x28 | (bVar3 == 0) << 6 | ((char)bVar3 < '\0') << 7 |
                  (((bVar1 ^ bVar1 >> 4) & 1) == 0) << 2;
    if (bVar3 != 0) {
      uVar4 = CalculateScaledOffset(0,0x13);
      entry_flags = entry_flags & 0xec;
      CompareBytesForFlags
                (*(ushort *)(&z80_wave_channels[0].bSoundIdHigh + uVar4),*(ushort *)(puVar5 + -4));
      if ((entry_flags >> 6 & 1) != 0) {
        uVar4 = CalculateScaledOffset(0x13,0);
        bVar2 = entry_flags & 0xec | (((uVar4 & 0xfff) + 0xc62 & 0x1000) != 0) << 4 | 0xc39d < uVar4
        ;
        puVar5[-6] = *(undefined1 *)((short)&z80_wave_channels[0].wWaveTableEntry + uVar4 + 1);
        DisableInterruptsWrapper();
        ProgramSoundChannelMinimal(uStack_8,*(ushort *)(puVar5 + -2),bVar2);
        InitializeDriverState();
        return;
      }
    }
    puVar5[-5] = 1;
  } while( true );
}




/* ============================================================
 * ram:2878 UpdateWaveChannelByKey
 * ============================================================ */


void UpdateWaveChannelByKey(ushort sound_id,ushort wave_index)

{
  bool bVar1;
  byte bVar2;
  ushort uVar3;
  undefined1 *puVar4;
  undefined1 local_2 [2];
  
  puVar4 = local_2;
  do {
    uVar3 = CalculateScaledOffset(0,0x13);
    bVar1 = (&z80_wave_channels[0].bActive)[uVar3] == 0;
    bVar2 = bVar1 << 6;
    if (!bVar1) {
      uVar3 = CalculateScaledOffset(0,0x13);
      bVar2 = bVar2 & 0xec;
      CompareBytesForFlags
                (*(ushort *)(&z80_wave_channels[0].bSoundIdHigh + uVar3),*(ushort *)(puVar4 + -4));
      if ((bVar2 >> 6 & 1) != 0) {
        uVar3 = CalculateScaledOffset(0x13,0);
        puVar4[-6] = *(undefined1 *)((short)&z80_wave_channels[0].wWaveTableEntry + uVar3 + 1);
        DisableInterruptsWrapper();
        SetSoundChannelWaveIndex((byte)wave_index,(ushort)(byte)puVar4[-2]);
        InitializeDriverState();
        return;
      }
    }
    puVar4[-5] = 1;
  } while( true );
}




/* ============================================================
 * ram:28fc StopWaveChannelsBySoundId
 * ============================================================ */


void StopWaveChannelsBySoundId(ushort sound_id)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  
  bVar2 = 0;
  do {
    if (0x1f < bVar2) {
      return;
    }
    uVar4 = CalculateScaledOffset((ushort)bVar2,0x13);
    bVar1 = (&z80_wave_channels[0].bActive)[uVar4] == 0;
    bVar3 = bVar1 << 6;
    if (!bVar1) {
      uVar4 = CalculateScaledOffset((ushort)bVar2,0x13);
      bVar3 = bVar3 & 0xec;
      CompareBytesForFlags(sound_id,*(ushort *)(&z80_wave_channels[0].bSoundIdHigh + uVar4));
      if ((bVar3 >> 6 & 1) != 0) {
        DisableInterruptsWrapper();
        uVar4 = CalculateScaledOffset((ushort)bVar2,0x13);
        ReleaseSoundVoiceSlot(*(byte *)((short)&z80_wave_channels[0].wWaveTableEntry + uVar4 + 1));
        uVar4 = CalculateScaledOffset((ushort)bVar2,0x13);
        (&z80_wave_channels[0].bActive)[uVar4] = 0;
        InitializeDriverState();
        return;
      }
    }
    bVar2 = bVar2 + 1;
  } while( true );
}




/* ============================================================
 * ram:2981 StopAllActiveWaveChannels
 * ============================================================ */


void StopAllActiveWaveChannels(void)

{
  ushort uVar1;
  byte local_1;
  
  for (local_1 = 0; local_1 < 0x20; local_1 = local_1 + 1) {
    uVar1 = CalculateScaledOffset((ushort)local_1,0x13);
    if ((&z80_wave_channels[0].bActive)[uVar1] != 0) {
      DisableInterruptsWrapper();
      uVar1 = CalculateScaledOffset((ushort)local_1,0x13);
      ReleaseSoundVoiceSlot(*(byte *)((short)&z80_wave_channels[0].wWaveTableEntry + uVar1 + 1));
      uVar1 = CalculateScaledOffset((ushort)local_1,0x13);
      (&z80_wave_channels[0].bActive)[uVar1] = 0;
      InitializeDriverState();
    }
  }
  return;
}




/* ============================================================
 * ram:29e2 StopWaveChannelForMidi
 * ============================================================ */


byte StopWaveChannelForMidi(byte voice_slot,byte midi_channel)

{
  undefined2 uVar1;
  byte bVar2;
  ushort uVar3;
  short *psVar4;
  undefined1 *puVar5;
  undefined1 auStack_2 [2];
  
  puVar5 = auStack_2;
  uVar3 = CalculateScaledOffset((ushort)voice_slot,9);
  if ((&z80_voice_slots[0].bOwnerSoundId)[uVar3] == 4) {
    puVar5[-7] = 1;
    uVar3 = CalculateScaledOffset((ushort)(byte)puVar5[-2],9);
    uVar1 = *(undefined2 *)((short)&z80_voice_slots[0].wMidiRefCountOrKey + uVar3);
    bVar2 = 0;
    if ((char)((ushort)uVar1 >> 8) == '\0' && (char)uVar1 == '\0') {
      InitializeSoundChannels(puVar5[-2]);
      puVar5[-4] = 0;
      puVar5[-3] = 0;
      puVar5[-6] = 0x5e;
      puVar5[-5] = 0x3c;
      while (CompareWordPairForFlags(0x20,*(ushort *)(puVar5 + -4)), !(bool)(bVar2 & 1)) {
        if ((**(char **)(puVar5 + -6) != '\0') && ((*(char **)(puVar5 + -6))[4] == puVar5[-2])) {
          SilenceAllSoundChannels(puVar5[-2]);
          **(undefined1 **)(puVar5 + -6) = 0;
          return 0;
        }
        *(short *)(puVar5 + -4) = *(short *)(puVar5 + -4) + 1;
        bVar2 = 0xffec < *(ushort *)(puVar5 + -6);
        *(ushort *)(puVar5 + -6) = *(ushort *)(puVar5 + -6) + 0x13;
      }
    }
    else {
      uVar3 = CalculateScaledOffset((ushort)(byte)puVar5[-2],9);
      psVar4 = (short *)((short)&z80_voice_slots[0].wMidiRefCountOrKey + uVar3);
      *psVar4 = *psVar4 + -1;
    }
  }
  return 0;
}




/* ============================================================
 * ram:2ab8 StopMatchingWaveChannels
 * ============================================================ */


void StopMatchingWaveChannels(byte mode)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined1 auStack_2 [2];
  
  puVar2 = auStack_2;
  bVar1 = (undefined1 *)0xa < auStack_2;
  while( true ) {
    CompareWordPairForFlags(0x20,*(ushort *)(puVar2 + -2));
    if ((bool)(bVar1 & 1)) {
      return;
    }
    if (**(char **)(puVar2 + -9) != '\0') break;
    *(short *)(puVar2 + -2) = *(short *)(puVar2 + -2) + 1;
    bVar1 = 0xffec < *(ushort *)(puVar2 + -9);
    *(ushort *)(puVar2 + -9) = *(ushort *)(puVar2 + -9) + 0x13;
  }
  JumpTableDispatch(2,(byte *)(ushort)**(byte **)(puVar2 + -9),0x2c68);
  return;
}




/* ============================================================
 * ram:2c7b InitializeCommandStreamState
 * ============================================================ */


void InitializeCommandStreamState(PgmZ80CommandStreamState *state,byte *buffer,ushort chunk_size)

{
  undefined1 uVar1;
  undefined1 uVar2;
  ushort uVar3;
  undefined1 *puVar4;
  undefined1 uStack0002;
  undefined1 uStack0003;
  undefined1 auStack_2 [2];
  
  puVar4 = auStack_2;
  state->wBufferStart = buffer;
  state->wChunkSize = chunk_size;
  uVar1 = SUB21(state->wBufferStart,0);
  *(undefined1 *)&state->wBufferStartCopy = uVar1;
  uVar2 = (undefined1)((ushort)state->wBufferStart >> 8);
  *(undefined1 *)((short)&state->wBufferStartCopy + 1) = uVar2;
  *(undefined1 *)&state->wReadPtr = uVar1;
  *(undefined1 *)((short)&state->wReadPtr + 1) = uVar2;
  *(undefined1 *)&state->wSourceOrLimit = uStack0002;
  *(undefined1 *)((short)&state->wSourceOrLimit + 1) = uStack0003;
  uVar3 = CalculateScaledOffset(chunk_size,_uStack0002);
  state->wBufferEnd = (undefined *)(**(short **)(puVar4 + -6) + uVar3);
  *(undefined1 *)&state->wBytesRemaining = 0;
  *(undefined1 *)((short)&state->wBytesRemaining + 1) = 0;
  z80_command_stream_refill_count = 0;
  z80_command_stream_dispatch_count = 0;
  return;
}




/* ============================================================
 * ram:2d05 PollOrServiceCommandQueue
 * ============================================================ */


byte PollOrServiceCommandQueue(PgmZ80CommandStreamState *state)

{
  return (char)(state->wBytesRemaining >> 8) == '\0' && (char)state->wBytesRemaining == '\0';
}




/* ============================================================
 * ram:2d1a CheckCommandStreamAvailable
 * ============================================================ */


byte CheckCommandStreamAvailable(PgmZ80CommandStreamState *state,byte entry_flags)

{
  byte bVar1;
  
  bVar1 = entry_flags & 0xec;
  CompareBytesForFlags(state->wBytesRemaining,state->wChunkSize);
  return (bVar1 >> 6 & 1) != 0;
}




/* ============================================================
 * ram:2d5e ReadCommandStreamByte
 * ============================================================ */


void ReadCommandStreamByte(PgmZ80CommandStreamState *state,ushort count,byte entry_flags)

{
  undefined2 uVar1;
  short sVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  undefined1 *puVar6;
  ushort uStack_8;
  PgmZ80CommandStreamState *pPStack_6;
  ushort uStack_4;
  undefined1 auStack_2 [2];
  
  puVar6 = auStack_2;
  pPStack_6 = state;
  uStack_4 = count;
  CheckCommandStreamAvailable
            (state,entry_flags & 0xec | ((((ushort)&pPStack_6 & 0xfff) + 4 & 0x1000) != 0) << 4 |
                   &z80_stack_refill_bounds_sentinel < &pPStack_6);
  bVar3 = (char)((ushort)state >> 8) == '\0';
  bVar4 = (char)state == '\0';
  bVar5 = (bVar3 && bVar4) << 6;
  if (!bVar3 || !bVar4) {
    return;
  }
  z80_command_stream_refill_count = z80_command_stream_refill_count + 1;
  uStack_8 = 0;
  while( true ) {
    bVar5 = bVar5 & 0xec | 0xfff7 < *(ushort *)(puVar6 + -4);
    ReturnZeroStub(*(ushort *)(*(ushort *)(puVar6 + -4) + 8),uStack_8);
    if ((bool)(bVar5 & 1)) break;
    **(undefined1 **)(*(short *)(puVar6 + -4) + 4) = **(undefined1 **)(puVar6 + -2);
    *(short *)(puVar6 + -2) = *(short *)(puVar6 + -2) + 1;
    *(short *)(*(short *)(puVar6 + -4) + 4) = *(short *)(*(short *)(puVar6 + -4) + 4) + 1;
    uStack_8 = uStack_8 + 1;
  }
  *(short *)(*(short *)(puVar6 + -4) + 0xc) = *(short *)(*(short *)(puVar6 + -4) + 0xc) + 1;
  bVar5 = bVar5 & 0xec;
  CompareBytesForFlags
            (*(ushort *)(*(short *)(puVar6 + -4) + 4),*(ushort *)(*(short *)(puVar6 + -4) + 6));
  if ((bVar5 >> 6 & 1) != 0) {
    sVar2 = *(short *)(puVar6 + -4);
    uVar1 = **(undefined2 **)(puVar6 + -4);
    *(char *)(sVar2 + 4) = (char)uVar1;
    *(char *)(sVar2 + 5) = (char)((ushort)uVar1 >> 8);
  }
  return;
}




/* ============================================================
 * ram:2e33 DispatchCommandStreamUntilEmpty
 * ============================================================ */


void DispatchCommandStreamUntilEmpty(byte command,PgmZ80CommandStreamState *state,byte *buffer)

{
  PgmZ80CommandStreamState *pPVar1;
  undefined1 *puVar2;
  undefined1 local_2 [2];
  
  puVar2 = local_2;
  do {
    pPVar1 = state;
    DispatchZ80Command(command,state,*(byte **)(puVar2 + -4));
    command = (byte)((ushort)pPVar1 >> 8) | (byte)pPVar1;
  } while (command != 0);
  return;
}




/* ============================================================
 * ram:2e55 DispatchZ80Command
 * ============================================================ */


/* WARNING: Removing unreachable block (ram,0x2f13) */

byte DispatchZ80Command(byte command,PgmZ80CommandStreamState *state,byte *buffer)

{
  undefined2 uVar1;
  short sVar2;
  byte bVar3;
  byte bVar4;
  undefined1 *puVar5;
  undefined1 local_2 [2];
  
  puVar5 = local_2;
  PollOrServiceCommandQueue(state);
  bVar3 = (byte)((ushort)state >> 8) | (byte)state;
  if (bVar3 == 0) {
    z80_soundchip_latch_high_nibble = 0xf0;
    WritePort(0x8400,z80_soundchip_latch_low_nibble & 0xf | 0xf0);
    z80_soundchip_latch_high_nibble = 0xf0;
    WritePort(0x8400,z80_soundchip_latch_low_nibble & 0xf | 0xf0);
    z80_soundchip_latch_high_nibble = 0xf0;
    WritePort(0x8400,z80_soundchip_latch_low_nibble & 0xf | 0xf0);
    bVar3 = ReadPort(0x8200);
    puVar5[-7] = bVar3 & 0xf;
    *(short *)(*(short *)(puVar5 + -4) + 0xc) = *(short *)(*(short *)(puVar5 + -4) + 0xc) + -1;
    z80_soundchip_latch_high_nibble = 0;
    bVar3 = 0x40;
    WritePort(0x8400,z80_soundchip_latch_low_nibble & 0xf);
    z80_command_stream_dispatch_count = z80_command_stream_dispatch_count + 1;
    puVar5[-6] = 0;
    puVar5[-5] = 0;
    while( true ) {
      bVar3 = bVar3 & 0xec | 0xfff7 < *(ushort *)(puVar5 + -4);
      ReturnZeroStub(*(ushort *)(*(ushort *)(puVar5 + -4) + 8),*(ushort *)(puVar5 + -6));
      if ((bool)(bVar3 & 1)) break;
      **(undefined1 **)(puVar5 + -2) = **(undefined1 **)(*(short *)(puVar5 + -4) + 2);
      *(short *)(puVar5 + -2) = *(short *)(puVar5 + -2) + 1;
      *(short *)(*(short *)(puVar5 + -4) + 2) = *(short *)(*(short *)(puVar5 + -4) + 2) + 1;
      *(short *)(puVar5 + -6) = *(short *)(puVar5 + -6) + 1;
    }
    bVar3 = bVar3 & 0xec;
    bVar4 = *(byte *)(*(short *)(puVar5 + -4) + 2);
    CompareBytesForFlags
              (*(ushort *)(*(short *)(puVar5 + -4) + 2),*(ushort *)(*(short *)(puVar5 + -4) + 6));
    if ((bVar3 >> 6 & 1) != 0) {
      sVar2 = *(short *)(puVar5 + -4);
      uVar1 = **(undefined2 **)(puVar5 + -4);
      *(char *)(sVar2 + 2) = (char)uVar1;
      *(char *)(sVar2 + 3) = (char)((ushort)uVar1 >> 8);
    }
    return bVar4;
  }
  return bVar3;
}




/* ============================================================
 * ram:3042 DelayLoop
 * ============================================================ */


void DelayLoop(byte count)

{
  char cVar1;
  
  cVar1 = count - 1;
  if (-1 < cVar1) {
    do {
      cVar1 = cVar1 + -1;
    } while (-1 < cVar1);
    return;
  }
  return;
}




/* ============================================================
 * ram:3050 ClearLocalBuffer
 * ============================================================ */


void ClearLocalBuffer(byte *dst,ushort value)

{
  byte bVar1;
  
  *(ushort *)dst = value;
  bVar1 = (byte)(value >> 8);
  bVar1 = -CARRY1(bVar1,bVar1);
  dst[2] = bVar1;
  dst[3] = bVar1;
  return;
}




/* ============================================================
 * ram:305d LoadCommandBytesToBuffer
 * ============================================================ */


void LoadCommandBytesToBuffer(byte *dst,ushort value)

{
  *(ushort *)dst = value;
  dst[2] = 0;
  dst[3] = 0;
  return;
}




/* ============================================================
 * ram:3068 MultiplyFourByteValue
 * ============================================================ */


void MultiplyFourByteValue(byte *dst_product,byte *multiplicand,byte *multiplier,byte entry_flags)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  byte bVar5;
  byte bVar6;
  short sVar7;
  byte *pbVar8;
  char cVar9;
  char cVar11;
  byte *pbVar10;
  byte *pbStack_e;
  undefined2 uStack_c;
  byte *pbStack_a;
  byte local_8 [2];
  byte *pbStack_6;
  byte local_4 [4];
  
  uStack_c = local_4;
  local_4[0] = 0;
  local_4[1] = 0;
  local_4[2] = 0;
  local_4[3] = 0;
  sVar7 = 4;
  pbVar8 = local_8;
  pbStack_e = multiplicand;
  pbStack_a = dst_product;
  do {
    *pbVar8 = *multiplier;
    pbVar8 = pbVar8 + 1;
    multiplier = multiplier + 1;
    sVar7 = sVar7 + -1;
  } while (sVar7 != 0);
  bVar3 = entry_flags & 0x28 | 0x40 | &z80_stack_local_bounds_sentinel < &pbStack_e;
  bVar2 = 0x20;
  do {
    bVar5 = bVar2;
    bVar1 = bVar3;
    cVar9 = '\x04';
    cVar11 = '\x04';
    pbVar8 = uStack_c;
    bVar2 = 0;
    do {
      bVar3 = *pbVar8 >> 7;
      *pbVar8 = *pbVar8 << 1 | bVar2;
      pbVar8 = pbVar8 + 1;
      cVar9 = cVar9 + -1;
      pbVar10 = local_8;
      bVar2 = bVar3;
    } while (cVar9 != '\0');
    do {
      bVar2 = -((char)*pbVar10 >> 7);
      *pbVar10 = *pbVar10 << 1 | bVar3 & 1;
      cVar11 = cVar11 + -1;
      pbVar10 = pbVar10 + 1;
      bVar3 = bVar2;
    } while (cVar11 != '\0');
    if (bVar2 != 0) {
      cVar9 = '\x04';
      pbVar8 = uStack_c;
      pbVar10 = pbStack_e;
      bVar4 = false;
      do {
        bVar6 = *pbVar8;
        bVar3 = *pbVar10;
        bVar2 = bVar6 + bVar3;
        *pbVar8 = bVar2 + bVar4;
        pbVar8 = pbVar8 + 1;
        pbVar10 = pbVar10 + 1;
        cVar9 = cVar9 + -1;
        bVar4 = CARRY1(bVar6,bVar3) || CARRY1(bVar2,bVar4);
      } while (cVar9 != '\0');
    }
    bVar2 = bVar5 - 1;
    bVar3 = bVar1 & 0x29 | (((bVar5 & 0xf) - 1 & 0x10) != 0) << 4 | SBORROW1(bVar5,'\x01') << 2 | 2
            | (bVar2 == 0) << 6 | ((char)bVar2 < '\0') << 7;
  } while (bVar2 != 0);
  pbStack_6 = pbStack_a;
  local_8[0] = 0xcf;
  local_8[1] = 0x30;
  pbStack_e = local_8;
  uStack_c._0_1_ = bVar1;
  uStack_c._1_1_ = bVar5;
  CopyBytesCounted(4,pbStack_a,local_4);
  return;
}




/* ============================================================
 * ram:30d7 DivideFourByteValue
 * ============================================================ */


/* WARNING: Removing unreachable block (ram,0x30fb) */
/* WARNING: Removing unreachable block (ram,0x3102) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void DivideFourByteValue(byte *result_dst,byte *dividend_or_quotient,byte *divisor,byte entry_flags)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  byte bVar4;
  char cVar5;
  char cVar7;
  short sVar6;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined2 local_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined2 uStack_6;
  undefined2 uStack_4;
  byte *local_2;
  
  uStack_4 = (ushort)(entry_flags & 0x28 | 0x44);
  local_2 = result_dst;
  uStack_6 = 0;
  uStack_8 = 0;
  uStack_a = *(undefined2 *)(dividend_or_quotient + 2);
  local_c = *(undefined2 *)dividend_or_quotient;
  pbVar11 = (byte *)&local_c;
  cVar5 = ' ';
  do {
    pbVar8 = pbVar11;
    bVar2 = 0;
    cVar7 = '\b';
    do {
      pbVar9 = pbVar8;
      bVar1 = *pbVar9;
      *pbVar9 = bVar1 << 1 | bVar2;
      cVar7 = cVar7 + -1;
      pbVar8 = pbVar9 + 1;
      bVar2 = bVar1 >> 7;
    } while (cVar7 != '\0');
    bVar2 = 0xfc;
    pbVar9 = pbVar9 + -3;
    bVar3 = false;
    pbVar8 = pbVar9;
    pbVar10 = divisor;
    do {
      *pbVar8 = (*pbVar8 - *pbVar10) - bVar3;
      pbVar8 = pbVar8 + 1;
      pbVar10 = pbVar10 + 1;
      bVar3 = 0xfe < bVar2;
      bVar2 = bVar2 + 1;
    } while (bVar2 != 0);
    if (bVar3) {
      cVar7 = '\x04';
      pbVar8 = divisor;
      bVar3 = false;
      do {
        bVar4 = *pbVar8;
        bVar1 = *pbVar9;
        bVar2 = bVar4 + bVar1;
        *pbVar9 = bVar2 + bVar3;
        pbVar8 = pbVar8 + 1;
        pbVar9 = pbVar9 + 1;
        cVar7 = cVar7 + -1;
        bVar3 = CARRY1(bVar4,bVar1) || CARRY1(bVar2,bVar3);
      } while (cVar7 != '\0');
    }
    cVar5 = cVar5 + -1;
  } while (cVar5 != '\0');
  if ((uStack_4 & 0x400) != 0) {
    pbVar11 = (byte *)CONCAT11((char)((ushort)pbVar11 >> 8) +
                               CARRY1(uStack_4._1_1_ & 4,(byte)pbVar11),
                               (uStack_4._1_1_ & 4) + (byte)pbVar11);
  }
  if ((uStack_4 & 0x100) == 0) {
    sVar6 = CONCAT11(uStack_4._1_1_ & 1,4);
    do {
      *local_2 = *pbVar11;
      local_2 = local_2 + 1;
      pbVar11 = pbVar11 + 1;
      sVar6 = sVar6 + -1;
    } while (sVar6 != 0);
  }
  else {
    cVar5 = '\x04';
    bVar3 = false;
    do {
      bVar2 = *pbVar11;
      bVar1 = -bVar2;
      *local_2 = bVar1 - bVar3;
      pbVar11 = pbVar11 + 1;
      local_2 = local_2 + 1;
      cVar5 = cVar5 + -1;
      bVar3 = bVar2 != 0 || bVar1 < bVar3;
    } while (cVar5 != '\0');
  }
  return;
}




/* ============================================================
 * ram:3171 CompareFourBytes
 * ============================================================ */


byte CompareFourBytes(byte *lhs,byte *rhs)

{
  char cVar1;
  
  cVar1 = '\x04';
  do {
    if (*rhs != *lhs) {
      return 0;
    }
    rhs = rhs + 1;
    lhs = lhs + 1;
    cVar1 = cVar1 + -1;
  } while (cVar1 != '\0');
  return 1;
}




/* ============================================================
 * ram:317f CopyBufferToSoundChip
 * ============================================================ */


ushort CopyBufferToSoundChip(byte *src)

{
  return *(ushort *)src;
}




/* ============================================================
 * ram:3186 ShiftCopyFourBytes
 * ============================================================ */


void ShiftCopyFourBytes(byte *shift_count_ptr,byte *dst,byte *src)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte bVar4;
  char cVar5;
  
  bVar4 = *shift_count_ptr;
  cVar5 = '\x04';
  pbVar3 = dst;
  do {
    *pbVar3 = *src;
    pbVar3 = pbVar3 + 1;
    src = src + 1;
    cVar5 = cVar5 + -1;
  } while (cVar5 != '\0');
  while (bVar4 = bVar4 - 1, -1 < (char)bVar4) {
    cVar5 = '\x04';
    bVar1 = 0;
    pbVar3 = dst;
    do {
      bVar2 = *pbVar3;
      *pbVar3 = bVar2 << 1 | bVar1;
      pbVar3 = pbVar3 + 1;
      cVar5 = cVar5 + -1;
      bVar1 = bVar2 >> 7;
    } while (cVar5 != '\0');
  }
  return;
}




/* ============================================================
 * ram:31a9 PrepareSoundChipWriteBuffer
 * ============================================================ */


void PrepareSoundChipWriteBuffer(byte *shift_count_ptr,byte *dst,byte *src)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte bVar4;
  char cVar5;
  
  bVar4 = *shift_count_ptr;
  cVar5 = '\x04';
  do {
    *dst = *src;
    dst = dst + 1;
    src = src + 1;
    cVar5 = cVar5 + -1;
  } while (cVar5 != '\0');
  while( true ) {
    bVar4 = bVar4 - 1;
    if ((char)bVar4 < '\0') break;
    cVar5 = '\x04';
    pbVar3 = dst;
    bVar1 = 0;
    do {
      pbVar3 = pbVar3 + -1;
      bVar2 = *pbVar3;
      *pbVar3 = bVar2 >> 1 | bVar1 << 7;
      cVar5 = cVar5 + -1;
      bVar1 = bVar2 & 1;
    } while (cVar5 != '\0');
  }
  return;
}




/* ============================================================
 * ram:31d1 AndFourBytes
 * ============================================================ */


void AndFourBytes(byte *dst,byte *lhs,byte *rhs)

{
  char cVar1;
  
  cVar1 = '\x04';
  do {
    *dst = *lhs & *rhs;
    dst = dst + 1;
    lhs = lhs + 1;
    rhs = rhs + 1;
    cVar1 = cVar1 + -1;
  } while (cVar1 != '\0');
  return;
}




/* ============================================================
 * ram:31e1 OrFourBytes
 * ============================================================ */


void OrFourBytes(byte *dst,byte *lhs,byte *rhs)

{
  char cVar1;
  
  cVar1 = '\x04';
  do {
    *dst = *lhs | *rhs;
    dst = dst + 1;
    lhs = lhs + 1;
    rhs = rhs + 1;
    cVar1 = cVar1 + -1;
  } while (cVar1 != '\0');
  return;
}




/* ============================================================
 * ram:31f1 JumpTableDispatch
 * ============================================================ */


void JumpTableDispatch(ushort entry_count,byte *table,ushort key)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  pcVar4 = (char *)(key - 3);
  do {
    pcVar3 = pcVar4;
    cVar1 = (char)entry_count + -1;
    cVar2 = (char)(entry_count >> 8);
    if ((cVar1 < '\0') && (cVar2 = cVar2 + -1, cVar2 < '\0')) {
                    /* WARNING: Could not recover jumptable at 0x31fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    entry_count = CONCAT11(cVar2,cVar1);
    pcVar4 = pcVar3 + 4;
  } while (((char)table != pcVar3[3]) || ((char)((ushort)table >> 8) != *pcVar4));
                    /* WARNING: Could not recover jumptable at 0x3212. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pcVar3 + 5))(UNRECOVERED_JUMPTABLE);
  return;
}




/* ============================================================
 * ram:3213 CopyBytesCounted
 * ============================================================ */


void CopyBytesCounted(byte count,byte *dst,byte *src)

{
  ushort uVar1;
  
  uVar1 = (ushort)count;
  do {
    *dst = *src;
    dst = dst + 1;
    src = src + 1;
    uVar1 = uVar1 - 1;
  } while (uVar1 != 0);
  return;
}




/* ============================================================
 * ram:3219 DisableInterruptsWrapper
 * ============================================================ */


void DisableInterruptsWrapper(void)

{
  disableMaskableInterrupts();
  return;
}




/* ============================================================
 * ram:321b InitializeDriverState
 * ============================================================ */


void InitializeDriverState(void)

{
  enableMaskableInterrupts();
  return;
}




/* ============================================================
 * ram:321d CompareBytesForFlags
 * ============================================================ */


void CompareBytesForFlags(ushort lhs,ushort rhs)

{
  if ((char)lhs != (char)rhs) {
    return;
  }
  return;
}




/* ============================================================
 * ram:3223 CompareSignedHighBytePair
 * ============================================================ */


byte CompareSignedHighBytePair(ushort lhs,ushort rhs)

{
  byte bVar1;
  byte bVar2;
  
  bVar2 = (byte)(lhs >> 8);
  bVar1 = bVar2 ^ (byte)(rhs >> 8);
  if (bVar1 == 0) {
    return (byte)lhs;
  }
  if (-1 < (char)bVar1) {
    return bVar2;
  }
  return bVar2 << 1;
}




/* ============================================================
 * ram:3233 CompareWordPairForFlags
 * ============================================================ */


byte CompareWordPairForFlags(ushort lhs,ushort rhs)

{
  byte bVar1;
  byte bVar2;
  
  bVar2 = (byte)(lhs >> 8);
  bVar1 = bVar2 ^ (byte)(rhs >> 8);
  if (bVar1 == 0) {
    bVar1 = (byte)lhs;
    if ((byte)lhs != (byte)rhs) {
      return bVar1;
    }
    return bVar1;
  }
  if (-1 < (char)bVar1) {
    return bVar2;
  }
  return bVar2 << 1;
}




/* ============================================================
 * ram:3245 CalculateScaledOffset
 * ============================================================ */


ushort CalculateScaledOffset(ushort index,ushort stride)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte index_low_byte;
  char cVar5;
  ushort uVar6;
  ushort uVar7;
  
  uVar6 = stride;
  if ((char)(stride >> 8) == '\0') {
    uVar6 = index;
    index = stride;
  }
  bVar4 = (byte)index;
  bVar1 = (char)(index >> 8) == '\0';
  if (bVar1) {
    bVar3 = bVar1 << 6 | ((short)index < 0) << 7 | 1;
    index = 0;
    cVar5 = '\x04';
    if (-1 < (char)bVar3) goto LAB_ram_3264;
  }
  index_low_byte = (byte)index;
  bVar4 = (byte)(index >> 8);
  uVar7 = 0;
  cVar5 = '\x04';
  do {
    bVar3 = CARRY2(uVar7,uVar7);
    index = uVar7 * 2;
LAB_ram_3264:
    while( true ) {
      bVar3 = bVar4 << 1 | bVar3 & 1;
      if ((char)bVar4 < '\0') {
        index = index + uVar6;
      }
      uVar7 = index * 2;
      bVar2 = bVar3 << 1;
      bVar4 = bVar2 | CARRY2(index,index);
      if ((char)bVar3 < '\0') {
        uVar7 = uVar7 + uVar6;
      }
      cVar5 = cVar5 + -1;
      if (cVar5 != '\0') break;
      if (((bool)(bVar2 >> 7)) || (index_low_byte == 0)) {
        return uVar7;
      }
      index = uVar7 * 2;
      bVar3 = 1;
      cVar5 = '\x04';
      bVar4 = index_low_byte;
    }
  } while( true );
}




/* ============================================================
 * ram:3280 CompareHighByteThenLow
 * ============================================================ */


byte CompareHighByteThenLow(ushort lhs,ushort rhs)

{
  byte bVar1;
  
  bVar1 = (byte)(lhs >> 8);
  if (bVar1 != (byte)(rhs >> 8)) {
    return bVar1;
  }
  return (byte)lhs;
}




/* ============================================================
 * ram:3286 ReturnZeroStub
 * ============================================================ */


void ReturnZeroStub(ushort lhs,ushort rhs)

{
  if ((char)(lhs >> 8) != (char)(rhs >> 8)) {
    return;
  }
  if ((char)lhs != (char)rhs) {
    return;
  }
  return;
}


