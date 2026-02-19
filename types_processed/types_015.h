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

/* NAME TYPE ADDR: 00B2: NAME(19) */
/* BASE TYPE ADDR: 0083: NEAR386 PTR(13) */
typedef char* MEMBLOCK;
/* 00BE: SCALAR(20) = void */

/* NAME TYPE ADDR: 00CD: NAME(23) */
/* BASE TYPE ADDR: 00CA: NEAR386 PTR(22) */
/* 00C5: NEAR386 PROC(21) */
typedef void (*VOIDFN)(void);

/* NAME TYPE ADDR: 00DB: NAME(25) */
/* BASE TYPE ADDR: 00D7: BYTE_INDEX ARRAY(24) */
typedef char* va_list[1];

/* NAME TYPE ADDR: 00EB: NAME(27) */
/* BASE TYPE ADDR: 00E6: NEAR386 PROC(26) */
typedef int (INTFN)(void);

/* NAME TYPE ADDR: 00F4: NAME(28) */
/* BASE TYPE ADDR: 00BE: SCALAR(20) */
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
/* BASE TYPE ADDR: 0040: SCALAR(7) */
typedef short Draw_tContext;

/* NAME TYPE ADDR: 018D: NAME(43) */
/* BASE TYPE ADDR: 018A: NEAR386 PTR(42) */
/* 0184: NEAR386 PROC(41) */
typedef void (*Transformer_AnimCallbackFunc)(void* arg0, void* arg1);

/* NAME TYPE ADDR: 01AD: NAME(44) */
/* BASE TYPE ADDR: 0097: SCALAR(16) */
typedef long SDWORD;
/* 01B7: SCALAR(45) = unsigned long */

/* NAME TYPE ADDR: 01C7: NAME(46) */
/* BASE TYPE ADDR: 01B7: SCALAR(45) */
typedef unsigned long DWORD;

/* NAME TYPE ADDR: 01D0: NAME(47) */
/* BASE TYPE ADDR: 0048: SCALAR(8) */
typedef unsigned short WORD;

/* NAME TYPE ADDR: 01D8: NAME(48) */
/* BASE TYPE ADDR: 0040: SCALAR(7) */
typedef short SWORD;

/* NAME TYPE ADDR: 01E1: NAME(49) */
/* BASE TYPE ADDR: 0022: SCALAR(5) */
typedef signed char SBYTE;

/* NAME TYPE ADDR: 01EA: NAME(50) */
/* BASE TYPE ADDR: 0030: SCALAR(6) */
typedef unsigned char UBYTE;

/* NAME TYPE ADDR: 01F3: NAME(51) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int BOOL;

/* NAME TYPE ADDR: 01FB: NAME(52) */
/* BASE TYPE ADDR: 00BE: SCALAR(20) */
typedef void Stm_Chunk;

/* NAME TYPE ADDR: 020B: NAME(54) */
/* BASE TYPE ADDR: 0208: NEAR386 PTR(53) */
typedef Stm_Chunk* lpStm_Chunk;

/* NAME TYPE ADDR: 0222: NAME(57) */
/* BASE TYPE ADDR: 021F: NEAR386 PTR(56) */
/* 021A: NEAR386 PROC(55) */
typedef void (*Sched_tFunctionPt)(void* arg0);

/* NAME TYPE ADDR: 023B: NAME(59) */
/* BASE TYPE ADDR: 0237: BYTE_INDEX ARRAY(58) */
typedef short tAccTable[112];

/* NAME TYPE ADDR: 0268: NAME(62) */
/* BASE TYPE ADDR: 024C: FIELD_LIST(61) */
#pragma pack(push, 1)
/* number of fields = 4, size = 0x0010 [16 bytes] */
struct Color_tColor
{
    /* offset = 0x0000 [0] */
    int h;
    /* offset = 0x0004 [4] */
    int s;
    /* offset = 0x0008 [8] */
    int v;
    /* offset = 0x000c [12] */
    int t;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0278: NAME(63) */
/* BASE TYPE ADDR: 0268: NAME(62) */
typedef struct Color_tColor Color_tColor;

/* NAME TYPE ADDR: 029E: NAME(66) */
/* BASE TYPE ADDR: 028C: FIELD_LIST(65) */
#pragma pack(push, 1)
/* number of fields = 2, size = 0x0008 [8 bytes] */
struct VT
{
    /* offset = 0x0000 [0] */
    int v;
    /* offset = 0x0004 [4] */
    int t;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 02A4: NAME(67) */
/* BASE TYPE ADDR: 029E: NAME(66) */
typedef struct VT VT;

/* Procedure params definition 0 - 02AD: NEAR386 PROC(69) */
/* typedef int (unnamed_proc)(int arg0); */

/* Procedure params definition 1 - 02B5: NEAR386 PROC(71) */
/* typedef void (unnamed_proc)(int arg0, int* arg1, int* arg2, int* arg3, int* arg4); */

/* Procedure params definition 2 - 02C2: NEAR386 PROC(73) */
/* typedef void (unnamed_proc)(int arg0, int arg1, int* arg2, int* arg3); */

/* Procedure params definition 3 - 02CE: NEAR386 PROC(75) */
/* typedef void (unnamed_proc)(int* arg0, int arg1, int* arg2, char* arg3); */

/* Procedure params definition 4 - 02DA: NEAR386 PROC(77) */
/* typedef void (unnamed_proc)(int arg0, int arg1, char* arg2, int arg3); */

/* Procedure params definition 5 - 02E6: NEAR386 PROC(79) */
/* typedef void (unnamed_proc)(int arg0, int arg1, int arg2, int* arg3, int* arg4, int* arg5); */
