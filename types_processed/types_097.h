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

/* NAME TYPE ADDR: 008A: NAME(15) */
/* BASE TYPE ADDR: 0086: BYTE_INDEX ARRAY(14) */
typedef char* __va_list[1];
/* 0097: SCALAR(16) = long */

/* NAME TYPE ADDR: 009E: NAME(17) */
/* BASE TYPE ADDR: 0097: SCALAR(16) */
typedef long fpos_t;

/* NAME TYPE ADDR: 00A8: NAME(18) */
/* BASE TYPE ADDR: 0097: SCALAR(16) */
typedef long fpos_t;

/* NAME TYPE ADDR: 00B6: NAME(20) */
/* BASE TYPE ADDR: 00B2: BYTE_INDEX ARRAY(19) */
typedef char* va_list[1];

/* NAME TYPE ADDR: 00C1: NAME(21) */
/* BASE TYPE ADDR: 0083: NEAR386 PTR(13) */
typedef char* MEMBLOCK;
/* 00CD: SCALAR(22) = void */

/* NAME TYPE ADDR: 00DC: NAME(25) */
/* BASE TYPE ADDR: 00D9: NEAR386 PTR(24) */
/* 00D4: NEAR386 PROC(23) */
typedef void (*VOIDFN)(void);

/* NAME TYPE ADDR: 00EB: NAME(27) */
/* BASE TYPE ADDR: 00E6: NEAR386 PROC(26) */
typedef int (INTFN)(void);

/* NAME TYPE ADDR: 00F4: NAME(28) */
/* BASE TYPE ADDR: 00CD: SCALAR(22) */
typedef void MVI;

/* NAME TYPE ADDR: 0101: NAME(30) */
/* BASE TYPE ADDR: 00FB: NEAR386 PROC(29) */
typedef int (EACHOOKCALLBACKFUNC)(int arg0, int arg1);

/* NAME TYPE ADDR: 0118: NAME(31) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int arg_t;

/* NAME TYPE ADDR: 0126: NAME(33) */
/* BASE TYPE ADDR: 0121: NEAR386 PROC(32) */
typedef void (THREADPROC)(void);

/* NAME TYPE ADDR: 0134: NAME(34) */
/* BASE TYPE ADDR: 00FB: NEAR386 PROC(29) */
typedef int (SYSTEMTASK)(int arg0, int arg1);

/* NAME TYPE ADDR: 0142: NAME(35) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int boolean;

/* NAME TYPE ADDR: 014D: NAME(36) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int fixed88;

/* NAME TYPE ADDR: 0158: NAME(37) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int fixed824;

/* NAME TYPE ADDR: 0164: NAME(38) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int fixed248;

/* NAME TYPE ADDR: 0170: NAME(39) */
/* BASE TYPE ADDR: 0097: SCALAR(16) */
typedef long SDWORD;
/* 017A: SCALAR(40) = unsigned long */

/* NAME TYPE ADDR: 018A: NAME(41) */
/* BASE TYPE ADDR: 017A: SCALAR(40) */
typedef unsigned long DWORD;

/* NAME TYPE ADDR: 0193: NAME(42) */
/* BASE TYPE ADDR: 0048: SCALAR(8) */
typedef unsigned short WORD;

/* NAME TYPE ADDR: 019B: NAME(43) */
/* BASE TYPE ADDR: 0040: SCALAR(7) */
typedef short SWORD;

/* NAME TYPE ADDR: 01A4: NAME(44) */
/* BASE TYPE ADDR: 0022: SCALAR(5) */
typedef signed char SBYTE;

/* NAME TYPE ADDR: 01AD: NAME(45) */
/* BASE TYPE ADDR: 0030: SCALAR(6) */
typedef unsigned char UBYTE;

/* NAME TYPE ADDR: 01B6: NAME(46) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int BOOL;

/* NAME TYPE ADDR: 01BE: NAME(47) */
/* BASE TYPE ADDR: 00CD: SCALAR(22) */
typedef void Stm_Chunk;

/* NAME TYPE ADDR: 01CE: NAME(49) */
/* BASE TYPE ADDR: 01CB: NEAR386 PTR(48) */
typedef Stm_Chunk* lpStm_Chunk;

/* NAME TYPE ADDR: 01E8: NAME(53) */
/* BASE TYPE ADDR: 01E5: NEAR386 PTR(52) */
/* 01E0: NEAR386 PROC(51) */
typedef void (*Sched_tFunctionPt)(void* arg0);

/* NAME TYPE ADDR: 01FD: NAME(54) */
/* BASE TYPE ADDR: 0040: SCALAR(7) */
typedef short Draw_tContext;

/* NAME TYPE ADDR: 0217: NAME(57) */
/* BASE TYPE ADDR: 0214: NEAR386 PTR(56) */
/* 020E: NEAR386 PROC(55) */
typedef void (*Transformer_AnimCallbackFunc)(void* arg0, void* arg1);

/* NAME TYPE ADDR: 023B: NAME(59) */
/* BASE TYPE ADDR: 0237: BYTE_INDEX ARRAY(58) */
typedef short tAccTable[112];

/* NAME TYPE ADDR: 024D: NAME(61) */
/* BASE TYPE ADDR: 0248: NEAR386 PROC(60) */
typedef int (Input_tDeviceCall)(unsigned long arg0);

/* NAME TYPE ADDR: 02BA: NAME(68) */
/* BASE TYPE ADDR: 0275: ENUM_LIST(67) */
enum tDevice: unsigned char
{
    kDeviceNull = 0,
    kDeviceAnalog = 1,
    kDeviceButton = 2,
    kDeviceKeyboard = 3,
};

/* NAME TYPE ADDR: 0306: NAME(73) */
/* BASE TYPE ADDR: 02D6: ENUM_LIST(72) */
enum tItemTypes: unsigned char
{
    kTypeText = 0,
    kTypeImage = 1,
    kTypeTextButton = 2,
};

/* NAME TYPE ADDR: 0314: NAME(74) */
/* BASE TYPE ADDR: 037C: FIELD_LIST(81) */
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

/* NAME TYPE ADDR: 036D: NAME(78) */
/* BASE TYPE ADDR: 032B: FIELD_LIST(77) */
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

/* Procedure params definition 0 - 02C5: NEAR386 PROC(69) */
/* typedef int (unnamed_proc)(enum tDevice arg0, int arg1); */

/* Procedure params definition 1 - 02CB: NEAR386 PROC(70) */
/* typedef int (unnamed_proc)(int arg0); */

/* Procedure params definition 2 - 02D0: NEAR386 PROC(71) */
/* typedef void (unnamed_proc)(int arg0, char* arg1); */

/* Procedure params definition 3 - 03CB: NEAR386 PROC(83) */
/* typedef void (unnamed_proc)(struct tItemButton* arg0, int arg1, int arg2, int arg3); */

/* Procedure params definition 4 - 03DB: NEAR386 PROC(86) */
/* typedef void (unnamed_proc)(int arg0, struct tMenu* arg1); */

/* Procedure params definition 5 - 03E1: NEAR386 PROC(87) */
/* typedef int (unnamed_proc)(); */

/* Procedure params definition 6 - 03E5: NEAR386 PROC(88) */
/* typedef int (unnamed_proc)(void); */

/* Procedure params definition 7 - 03EE: NEAR386 PROC(90) */
/* typedef int (unnamed_proc)(struct tMenu* arg0, struct tItemButton* arg1); */

/* Procedure params definition 8 - 03F4: NEAR386 PROC(91) */
/* typedef int (unnamed_proc)(struct tMenu* arg0); */

/* Procedure params definition 9 - 0401: NEAR386 PROC(94) */
/* typedef void (unnamed_proc)(); */
