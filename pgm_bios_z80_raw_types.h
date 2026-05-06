#ifndef PGM_BIOS_Z80_RAW_TYPES_H
#define PGM_BIOS_Z80_RAW_TYPES_H

/* Generated from Ghidra data types for pgm_bios_z80driver.bin. */

typedef unsigned char byte;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef unsigned long long ulonglong;
typedef signed char sbyte;
typedef unsigned char uchar;
typedef unsigned char undefined;
typedef unsigned char undefined1;
typedef unsigned short undefined2;
typedef unsigned int undefined4;
typedef unsigned int code;
typedef unsigned int int3;

typedef struct PgmZ80CommandMailbox PgmZ80CommandMailbox;
typedef struct PgmZ80CommandStreamState PgmZ80CommandStreamState;
typedef struct PgmZ80MidiChannelState PgmZ80MidiChannelState;
typedef struct PgmZ80MidiIndexEntry PgmZ80MidiIndexEntry;
typedef struct PgmZ80MidiVoiceSubstate PgmZ80MidiVoiceSubstate;
typedef struct PgmZ80VoiceSlotState PgmZ80VoiceSlotState;
typedef struct PgmZ80WaveChannelState PgmZ80WaveChannelState;
typedef struct PgmZ80WaveTableEntry PgmZ80WaveTableEntry;

struct PgmZ80CommandMailbox {
  byte bCommand; /* 0x0 */
  byte bParam; /* 0x1 */
  ushort wPackedSoundId; /* 0x2 */
};

struct PgmZ80CommandStreamState {
  undefined *wBufferStart; /* 0x0 */
  undefined *wReadPtr; /* 0x2 */
  undefined *wBufferStartCopy; /* 0x4 */
  undefined *wBufferEnd; /* 0x6 */
  undefined *wSourceOrLimit; /* 0x8 */
  ushort wChunkSize; /* 0xa */
  ushort wBytesRemaining; /* 0xc */
};

struct PgmZ80MidiChannelState {
  byte bState; /* 0x0 */
  byte bSoundIdLow; /* 0x1 */
  byte bSubvoiceCount; /* 0x2 */
  byte bParameter; /* 0x3 */
  byte bDefaultTempo; /* 0x4 */
  byte bReserved5; /* 0x5 */
  byte bReserved6; /* 0x6 */
  PgmZ80MidiVoiceSubstate subvoices[16]; /* 0x7 */
};

struct PgmZ80MidiIndexEntry {
  ushort wOffset; /* 0x0 */
  ushort wLength; /* 0x2 */
};

struct PgmZ80MidiVoiceSubstate {
  byte bFlags; /* 0x0 */
  byte bDelay; /* 0x1 */
  byte bParam2; /* 0x2 */
  ushort wTickCountdown; /* 0x3 */
  byte bParam5; /* 0x5 */
  byte bParam6; /* 0x6 */
  byte bParam7; /* 0x7 */
  byte bParam8; /* 0x8 */
  byte bParam9; /* 0x9 */
  byte bParam10; /* 0xa */
  undefined *wEventPtr; /* 0xb */
};

struct PgmZ80VoiceSlotState {
  byte bOwnerSoundId; /* 0x0 */
  ushort wMidiRefCountOrKey; /* 0x1 */
  byte bHardwareVoice; /* 0x3 */
  byte bFlags; /* 0x4 */
  byte bParam5; /* 0x5 */
  byte bParam6; /* 0x6 */
  byte bParam7; /* 0x7 */
  byte bParam8; /* 0x8 */
};

struct PgmZ80WaveChannelState {
  byte bActive; /* 0x0 */
  byte bSoundIdLow; /* 0x1 */
  byte bSoundIdHigh; /* 0x2 */
  undefined *wWaveTableEntry; /* 0x3 */
  byte bVoiceSlot; /* 0x5 */
  byte bReserved6; /* 0x6 */
  ushort wCurrentOffset; /* 0x7 */
  ushort wRestartOffset; /* 0x9 */
  byte bFlags; /* 0xb */
  byte bMidiOwner; /* 0xc */
  byte bParam13; /* 0xd */
  byte bParam14; /* 0xe */
  byte bParam15; /* 0xf */
  byte bParam16; /* 0x10 */
  byte bParam17; /* 0x11 */
  byte bParam18; /* 0x12 */
};

struct PgmZ80WaveTableEntry {
  ushort wStartBankOrAddrLo; /* 0x0 */
  ushort wStartAddr; /* 0x2 */
  ushort wLoopAddr; /* 0x4 */
  ushort wEndAddr; /* 0x6 */
  ushort wFrequency; /* 0x8 */
  ushort wFlags; /* 0xa */
};

#endif /* PGM_BIOS_Z80_RAW_TYPES_H */
