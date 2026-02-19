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
/* 0170: SCALAR(39) = unsigned long */

/* NAME TYPE ADDR: 0185: NAME(41) */
/* BASE TYPE ADDR: 0180: NEAR386 PROC(40) */
typedef int (Input_tDeviceCall)(unsigned long arg0);

/* NAME TYPE ADDR: 019A: NAME(42) */
/* BASE TYPE ADDR: 0097: SCALAR(16) */
typedef long SDWORD;

/* NAME TYPE ADDR: 01A4: NAME(43) */
/* BASE TYPE ADDR: 0170: SCALAR(39) */
typedef unsigned long DWORD;

/* NAME TYPE ADDR: 01AD: NAME(44) */
/* BASE TYPE ADDR: 0048: SCALAR(8) */
typedef unsigned short WORD;

/* NAME TYPE ADDR: 01B5: NAME(45) */
/* BASE TYPE ADDR: 0040: SCALAR(7) */
typedef short SWORD;

/* NAME TYPE ADDR: 01BE: NAME(46) */
/* BASE TYPE ADDR: 0022: SCALAR(5) */
typedef signed char SBYTE;

/* NAME TYPE ADDR: 01C7: NAME(47) */
/* BASE TYPE ADDR: 0030: SCALAR(6) */
typedef unsigned char UBYTE;

/* NAME TYPE ADDR: 01D0: NAME(48) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int BOOL;

/* NAME TYPE ADDR: 01D8: NAME(49) */
/* BASE TYPE ADDR: 00CD: SCALAR(22) */
typedef void Stm_Chunk;

/* NAME TYPE ADDR: 01E8: NAME(51) */
/* BASE TYPE ADDR: 01E5: NEAR386 PTR(50) */
typedef Stm_Chunk* lpStm_Chunk;

/* NAME TYPE ADDR: 0202: NAME(55) */
/* BASE TYPE ADDR: 01FF: NEAR386 PTR(54) */
/* 01FA: NEAR386 PROC(53) */
typedef void (*Sched_tFunctionPt)(void* arg0);

/* NAME TYPE ADDR: 0217: NAME(56) */
/* BASE TYPE ADDR: 0040: SCALAR(7) */
typedef short Draw_tContext;

/* NAME TYPE ADDR: 0231: NAME(59) */
/* BASE TYPE ADDR: 022E: NEAR386 PTR(58) */
/* 0228: NEAR386 PROC(57) */
typedef void (*Transformer_AnimCallbackFunc)(void* arg0, void* arg1);

/* NAME TYPE ADDR: 0255: NAME(61) */
/* BASE TYPE ADDR: 0251: BYTE_INDEX ARRAY(60) */
typedef short tAccTable[112];

/* NAME TYPE ADDR: 027F: NAME(64) */
/* BASE TYPE ADDR: 0266: FIELD_LIST(63) */
#pragma pack(push, 1)
/* number of fields = 2, size = 0x0008 [8 bytes] */
struct MinFront_tValueList
{
    /* offset = 0x0000 [0] */
    char* name;
    /* offset = 0x0004 [4] */
    int value;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 02F0: NAME(74) */
/* BASE TYPE ADDR: 02BD: FIELD_LIST(73) */
#pragma pack(push, 1)
/* number of fields = 3, size = 0x000c [12 bytes] */
struct Input_tDeviceList
{
    /* offset = 0x0000 [0] */
    char* devicename;
    /* offset = 0x0004 [4] */
    Input_tDeviceCall* devicefunc;
    /* offset = 0x0008 [8] */
    Input_tDeviceCall* startupfunc;
};
#pragma pack(pop)

/* Procedure params definition 0 - 02A2: NEAR386 PROC(68) */
/* typedef short (unnamed_proc)(char** arg0, char arg1, short arg2, char* arg3); */

/* Procedure params definition 1 - 02AA: NEAR386 PROC(69) */
/* typedef void (unnamed_proc)(char** arg0, char arg1, short arg2, char* arg3); */

/* Procedure params definition 2 - 02B5: NEAR386 PROC(71) */
/* typedef int (unnamed_proc)(char* arg0); */

/* Procedure params definition 3 - 0308: NEAR386 PROC(76) */
/* typedef int (unnamed_proc)(char** arg0, char* arg1, int arg2); */

/* Procedure params definition 4 - 031E: NEAR386 PROC(81) */
/* typedef void (unnamed_proc)(char** arg0, char* arg1, int arg2, int** arg3); */

/* Procedure params definition 5 - 032E: NEAR386 PROC(84) */
/* typedef void (unnamed_proc)(char* arg0, int** arg1); */

/* Procedure params definition 6 - 033A: NEAR386 PROC(87) */
/* typedef void (unnamed_proc)(int arg0, char** arg1, int** arg2); */

/* Procedure params definition 7 - 0341: NEAR386 PROC(88) */
/* typedef void (unnamed_proc)(int** arg0); */

/* Procedure params definition 8 - 034B: NEAR386 PROC(90) */
/* typedef int* (unnamed_proc)(int arg0, char** arg1); */
