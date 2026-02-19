/* 001B: SCALAR(4) = char */
/* 0022: SCALAR(5) = signed char */
/* 0030: SCALAR(6) = unsigned char */
/* 0040: SCALAR(7) = short */
/* 0048: SCALAR(8) = unsigned short */
/* 0059: SCALAR(9) = int */
/* 005F: SCALAR(10) = unsigned int */

/* NAME TYPE ADDR: 006E: NAME(11) */
/* BASE TYPE ADDR: 0048: SCALAR(8) */
typedef unsigned short wchar_t;

/* NAME TYPE ADDR: 0079: NAME(12) */
/* BASE TYPE ADDR: 005F: SCALAR(10) */
typedef unsigned int size_t;
/* 0083: SCALAR(13) = unsigned long */

/* NAME TYPE ADDR: 0093: NAME(14) */
/* BASE TYPE ADDR: 0083: SCALAR(13) */
typedef unsigned long time_t;

/* NAME TYPE ADDR: 009D: NAME(15) */
/* BASE TYPE ADDR: 005F: SCALAR(10) */
typedef unsigned int ino_t;

/* NAME TYPE ADDR: 00A6: NAME(16) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int dev_t;
/* 00AF: SCALAR(17) = long */

/* NAME TYPE ADDR: 00B6: NAME(18) */
/* BASE TYPE ADDR: 00AF: SCALAR(17) */
typedef long off_t;

/* NAME TYPE ADDR: 00C6: NAME(21) */
/* BASE TYPE ADDR: 00C2: BYTE_INDEX ARRAY(20) */
typedef char* __va_list[1];

/* NAME TYPE ADDR: 00D3: NAME(22) */
/* BASE TYPE ADDR: 00AF: SCALAR(17) */
typedef long fpos_t;

/* NAME TYPE ADDR: 00DD: NAME(23) */
/* BASE TYPE ADDR: 00AF: SCALAR(17) */
typedef long fpos_t;

/* NAME TYPE ADDR: 00E7: NAME(24) */
/* BASE TYPE ADDR: 00BF: NEAR386 PTR(19) */
typedef char* MEMBLOCK;
/* 00F3: SCALAR(25) = void */

/* NAME TYPE ADDR: 0102: NAME(28) */
/* BASE TYPE ADDR: 00FF: NEAR386 PTR(27) */
/* 00FA: NEAR386 PROC(26) */
typedef void (*VOIDFN)(void);

/* NAME TYPE ADDR: 0111: NAME(30) */
/* BASE TYPE ADDR: 010C: NEAR386 PROC(29) */
typedef void (THREADPROC)(void);

/* NAME TYPE ADDR: 0125: NAME(32) */
/* BASE TYPE ADDR: 011F: NEAR386 PROC(31) */
typedef int (SYSTEMTASK)(int arg0, int arg1);

/* NAME TYPE ADDR: 0137: NAME(34) */
/* BASE TYPE ADDR: 0133: BYTE_INDEX ARRAY(33) */
typedef char* va_list[1];

/* NAME TYPE ADDR: 0147: NAME(36) */
/* BASE TYPE ADDR: 0142: NEAR386 PROC(35) */
typedef int (INTFN)(void);

/* NAME TYPE ADDR: 0150: NAME(37) */
/* BASE TYPE ADDR: 00F3: SCALAR(25) */
typedef void MVI;

/* NAME TYPE ADDR: 0157: NAME(38) */
/* BASE TYPE ADDR: 011F: NEAR386 PROC(31) */
typedef int (EACHOOKCALLBACKFUNC)(int arg0, int arg1);

/* NAME TYPE ADDR: 016E: NAME(39) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int arg_t;

/* NAME TYPE ADDR: 0177: NAME(40) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int boolean;

/* NAME TYPE ADDR: 0182: NAME(41) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int fixed88;

/* NAME TYPE ADDR: 018D: NAME(42) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int fixed824;

/* NAME TYPE ADDR: 0199: NAME(43) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int fixed248;

/* NAME TYPE ADDR: 01A5: NAME(44) */
/* BASE TYPE ADDR: 00AF: SCALAR(17) */
typedef long SDWORD;

/* NAME TYPE ADDR: 01AF: NAME(45) */
/* BASE TYPE ADDR: 0083: SCALAR(13) */
typedef unsigned long DWORD;

/* NAME TYPE ADDR: 01B8: NAME(46) */
/* BASE TYPE ADDR: 0048: SCALAR(8) */
typedef unsigned short WORD;

/* NAME TYPE ADDR: 01C0: NAME(47) */
/* BASE TYPE ADDR: 0040: SCALAR(7) */
typedef short SWORD;

/* NAME TYPE ADDR: 01C9: NAME(48) */
/* BASE TYPE ADDR: 0022: SCALAR(5) */
typedef signed char SBYTE;

/* NAME TYPE ADDR: 01D2: NAME(49) */
/* BASE TYPE ADDR: 0030: SCALAR(6) */
typedef unsigned char UBYTE;

/* NAME TYPE ADDR: 01DB: NAME(50) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int BOOL;

/* NAME TYPE ADDR: 01E3: NAME(51) */
/* BASE TYPE ADDR: 00F3: SCALAR(25) */
typedef void Stm_Chunk;

/* NAME TYPE ADDR: 01F3: NAME(53) */
/* BASE TYPE ADDR: 01F0: NEAR386 PTR(52) */
typedef Stm_Chunk* lpStm_Chunk;

/* NAME TYPE ADDR: 020D: NAME(57) */
/* BASE TYPE ADDR: 020A: NEAR386 PTR(56) */
/* 0205: NEAR386 PROC(55) */
typedef void (*Sched_tFunctionPt)(void* arg0);

/* NAME TYPE ADDR: 0222: NAME(58) */
/* BASE TYPE ADDR: 0040: SCALAR(7) */
typedef short Draw_tContext;

/* NAME TYPE ADDR: 023C: NAME(61) */
/* BASE TYPE ADDR: 0239: NEAR386 PTR(60) */
/* 0233: NEAR386 PROC(59) */
typedef void (*Transformer_AnimCallbackFunc)(void* arg0, void* arg1);

/* NAME TYPE ADDR: 0260: NAME(63) */
/* BASE TYPE ADDR: 025C: BYTE_INDEX ARRAY(62) */
typedef short tAccTable[112];

/* NAME TYPE ADDR: 029D: NAME(65) */
/* BASE TYPE ADDR: 026D: ENUM_LIST(64) */
enum tItemTypes: unsigned char
{
    kTypeText = 0,
    kTypeImage = 1,
    kTypeTextButton = 2,
};

/* NAME TYPE ADDR: 02AB: NAME(66) */
/* BASE TYPE ADDR: 031D: FIELD_LIST(73) */
#pragma pack(push, 1)
/* number of fields = 5, size = 0x000c [12 bytes] */
struct tMenu
{
    /* offset = 0x0000 [0] */
    char* artFileName;
    /* offset = 0x0004 [4] */
    char* backgrName;
    /* offset = 0x0008 [8] */
    short driver;
    /* offset = 0x000a [10] */
    short current;
    /* offset = 0x000c [12] */
    struct tItemButton* item[1];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0307: NAME(70) */
/* BASE TYPE ADDR: 02BB: FIELD_LIST(69) */
#pragma pack(push, 1)
/* number of fields = 7, size = 0x0011 [17 bytes] */
struct tItemButton
{
    /* offset = 0x0000 [0] */
    enum tItemTypes type;
    /* offset = 0x0001 [1] */
    short text;
    /* offset = 0x0003 [3] */
    struct tMenu* nextMenu;
    /* offset = 0x0007 [7] */
    unsigned char flags;
    /* offset = 0x0008 [8] */
    unsigned char cases;
    /* offset = 0x0009 [9] */
    char* value;
    /* offset = 0x000d [13] */
    short* selection;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 03A6: NAME(81) */
/* BASE TYPE ADDR: 0377: FIELD_LIST(80) */
#pragma pack(push, 1)
/* number of fields = 4, size = 0x0011 [17 bytes] */
struct tRecordBuffer
{
    /* offset = 0x0000 [0] */
    char sName[9];
    /* offset = 0x0009 [9] */
    short nCar;
    /* offset = 0x000b [11] */
    int nTime;
    /* offset = 0x000f [15] */
    short nPlayMode;
};
#pragma pack(pop)

/* Procedure params definition 0 - 0362: NEAR386 PROC(75) */
/* typedef int (unnamed_proc)(struct tMenu* arg0); */

/* Procedure params definition 1 - 03DA: NEAR386 PROC(91) */
/* typedef void (unnamed_proc)(short arg0); */
