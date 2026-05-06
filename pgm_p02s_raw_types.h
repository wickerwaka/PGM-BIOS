#ifndef PGM_P02S_RAW_TYPES_H
#define PGM_P02S_RAW_TYPES_H

/* Generated from Ghidra data types for pgm_p02s.u20.swab. */

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

typedef struct PgmFadeCopySlot PgmFadeCopySlot;
typedef struct PgmFontBufferSlot PgmFontBufferSlot;
typedef struct PgmGameAuditRecord PgmGameAuditRecord;
typedef struct PgmHeapNode PgmHeapNode;
typedef struct PgmImageDescriptor PgmImageDescriptor;
typedef struct PgmImagePicture PgmImagePicture;
typedef struct PgmInputKeyState PgmInputKeyState;
typedef struct PgmIoTestButtonLayout PgmIoTestButtonLayout;
typedef struct PgmJammaIoRegs PgmJammaIoRegs;
typedef struct PgmLongAuditCounter PgmLongAuditCounter;
typedef struct PgmPaletteDmaSlot PgmPaletteDmaSlot;
typedef struct PgmPaletteFadeSlot PgmPaletteFadeSlot;
typedef struct PgmRamTestDescriptor PgmRamTestDescriptor;
typedef struct PgmRingBuffer PgmRingBuffer;
typedef struct PgmScrollRegisterState PgmScrollRegisterState;
typedef struct PgmShortAuditCounter PgmShortAuditCounter;
typedef struct PgmSpriteDisplaySlot PgmSpriteDisplaySlot;
typedef struct PgmSpriteHardwareEntry PgmSpriteHardwareEntry;
typedef struct PgmTimerCallbackSlot PgmTimerCallbackSlot;
typedef struct PgmZ80AudioCommandEntry PgmZ80AudioCommandEntry;
typedef struct PgmZ80RtcIoRegs PgmZ80RtcIoRegs;

struct PgmFadeCopySlot {
  undefined1 bState; /* 0x0 */
  undefined1 bPalette_bank; /* 0x1 */
  undefined1 bPalette_id; /* 0x2 */
  undefined1 bStart_color; /* 0x3 */
  undefined1 bColor_count; /* 0x4 */
  undefined1 bReserved05; /* 0x5 */
  undefined2 *pSource_palette; /* 0x6 */
  undefined2 *pDest_palette; /* 0xa */
  undefined1 bMode; /* 0xe */
  undefined1 bReserved0f; /* 0xf */
};

struct PgmFontBufferSlot {
  undefined1 bState; /* 0x0 */
  undefined1 bFlags; /* 0x1 */
  undefined1 bHeight; /* 0x2 */
  undefined1 bReserved; /* 0x3 */
  undefined2 wWidth; /* 0x4 */
  undefined4 dwSource_or_fill; /* 0x6 */
  undefined4 dwDest_tilemap_ptr; /* 0xa */
};

struct PgmGameAuditRecord {
  undefined1 bState; /* 0x0 */
  char pGame_name[19]; /* 0x1 */
  undefined4 dwTotal_plays; /* 0x14 */
  undefined4 dwTotal_play_time; /* 0x18 */
  PgmLongAuditCounter pDaily_records[7]; /* 0x1c */
  PgmLongAuditCounter pMonthly_records[12]; /* 0xe0 */
};

struct PgmHeapNode {
  void *pAddress; /* 0x0 */
  undefined2 wByte_size; /* 0x4 */
  void *pNext; /* 0x6 */
};

struct PgmImageDescriptor {
  ushort *pPalette_data; /* 0x0 */
  PgmImagePicture *pPicture_table; /* 0x4 */
  undefined2 wTotal_pictures; /* 0x8 */
};

struct PgmImagePicture {
  undefined2 wWidth_tiles; /* 0x0 */
  undefined2 wHeight_tiles; /* 0x2 */
  undefined *tile_index_data; /* 0x4 */
  undefined *attribute_xor_data; /* 0x8 */
  undefined4 dwReserved; /* 0xc */
};

struct PgmInputKeyState {
  undefined1 bState; /* 0x0 */
  undefined1 bNew_press_latch; /* 0x1 */
  undefined2 wHeld_frames; /* 0x2 */
  undefined1 bShort_tap_latch; /* 0x4 */
  undefined1 bReserved; /* 0x5 */
};

struct PgmIoTestButtonLayout {
  undefined1 bX; /* 0x0 */
  undefined1 bY; /* 0x1 */
  undefined *label; /* 0x2 */
};

struct PgmJammaIoRegs {
  undefined2 wP1_p2_controls; /* 0x0 */
  undefined2 wP3_p4_controls; /* 0x2 */
  undefined2 wExtra_controls; /* 0x4 */
  undefined2 wDipswitches; /* 0x6 */
};

struct PgmLongAuditCounter {
  undefined4 dwPlay_count; /* 0x0 */
  undefined4 dwCoin_in_count; /* 0x4 */
  undefined4 dwCoin_out_count; /* 0x8 */
  undefined4 dwService_count; /* 0xc */
  undefined4 dwTicket_count; /* 0x10 */
  undefined4 dwValue_count; /* 0x14 */
  undefined2 wYear; /* 0x18 */
  undefined1 bMonth; /* 0x1a */
  undefined1 bDay; /* 0x1b */
};

struct PgmPaletteDmaSlot {
  undefined1 bState; /* 0x0 */
  undefined1 bReserved; /* 0x1 */
  undefined2 *pSource; /* 0x2 */
  undefined2 *pDestination; /* 0x6 */
  undefined2 wWord_count; /* 0xa */
};

struct PgmPaletteFadeSlot {
  undefined1 bState; /* 0x0 */
  undefined1 bTarget_level; /* 0x1 */
  undefined2 *pSource_palette; /* 0x2 */
  undefined1 bColor_count; /* 0x6 */
  undefined1 bCurrent_level; /* 0x7 */
  undefined1 bTick_reload; /* 0x8 */
  undefined1 bStep_size; /* 0x9 */
  undefined1 bTick_countdown; /* 0xa */
  undefined1 bPalette_slot; /* 0xb */
  undefined1 bDirection_mode; /* 0xc */
  undefined1 bReserved0d; /* 0xd */
  undefined2 *pDest_palette; /* 0xe */
  undefined2 pWorking_palette[32]; /* 0x12 */
};

struct PgmRamTestDescriptor {
  undefined *service_mode_label; /* 0x0 */
  undefined *test_mode_label; /* 0x4 */
  undefined4 dwStart_address; /* 0x8 */
  undefined4 dwByte_length; /* 0xc */
  undefined4 dwWord_access; /* 0x10 */
};

struct PgmRingBuffer {
  undefined4 dwBuffer_start; /* 0x0 */
  undefined4 dwRead_ptr; /* 0x4 */
  undefined4 dwWrite_ptr; /* 0x8 */
  undefined4 dwBuffer_end; /* 0xc */
  undefined4 dwEntry_size; /* 0x10 */
  undefined4 dwCapacity; /* 0x14 */
  undefined4 dwUsed_count; /* 0x18 */
};

struct PgmScrollRegisterState {
  byte bDirty; /* 0x0 */
  byte bPad1; /* 0x1 */
  short nY; /* 0x2 */
  ushort *pY_reg; /* 0x4 */
  short nX; /* 0x8 */
  ushort *pX_reg; /* 0xa */
  byte bScript_state; /* 0xe */
  byte bPad0f; /* 0xf */
  ushort *pScript; /* 0x10 */
  short nCountdown; /* 0x14 */
  short nReload; /* 0x16 */
  short nSegment_frames; /* 0x18 */
  short nScript_index; /* 0x1a */
  short nScript_flag_or_x; /* 0x1c */
  short nScript_y; /* 0x1e */
  short nReserved20; /* 0x20 */
  byte bReverse_y; /* 0x22 */
  byte bPad23; /* 0x23 */
};

struct PgmShortAuditCounter {
  undefined4 dwPlay_count; /* 0x0 */
  undefined4 dwCoin_in_count; /* 0x4 */
  undefined4 dwCoin_out_count; /* 0x8 */
  undefined2 wYear; /* 0xc */
  undefined1 bMonth; /* 0xe */
  undefined1 bDay; /* 0xf */
};

struct PgmSpriteDisplaySlot {
  undefined1 bState; /* 0x0 */
  undefined1 bControl; /* 0x1 */
  undefined4 dwSource_ptr; /* 0x2 */
  undefined2 wSort_key; /* 0x6 */
  undefined4 dwReserved; /* 0x8 */
  undefined4 dwPrev; /* 0xc */
  undefined4 dwNext; /* 0x10 */
};

struct PgmSpriteHardwareEntry {
  ushort wX; /* 0x0 */
  ushort wY; /* 0x2 */
  ushort wAttr; /* 0x4 */
  ushort wTile; /* 0x6 */
  ushort wSize; /* 0x8 */
};

struct PgmTimerCallbackSlot {
  undefined2 wCountdown; /* 0x0 */
  undefined2 wReload; /* 0x2 */
  undefined4 dwTick_count; /* 0x4 */
  undefined *callback; /* 0x8 */
  undefined4 dwUser_arg; /* 0xc */
};

struct PgmZ80AudioCommandEntry {
  undefined1 bCommand; /* 0x0 */
  undefined1 bParam_hi; /* 0x1 */
  undefined1 bParam_mid; /* 0x2 */
  undefined1 bParam_lo; /* 0x3 */
};

struct PgmZ80RtcIoRegs {
  undefined2 wLatch0_or_status; /* 0x0 */
  undefined2 wSound_latch1; /* 0x2 */
  undefined2 wSound_latch2; /* 0x4 */
  undefined2 wCalendar_rtc; /* 0x6 */
  undefined2 wZ80_reset; /* 0x8 */
  undefined2 wZ80_control; /* 0xa */
  undefined2 wSound_latch3; /* 0xc */
};

#endif /* PGM_P02S_RAW_TYPES_H */
