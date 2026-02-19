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
/* BASE TYPE ADDR: 0048: SCALAR(8) */
typedef unsigned short wchar_t;
/* 00BD: SCALAR(20) = void */

/* NAME TYPE ADDR: 00CB: NAME(23) */
/* BASE TYPE ADDR: 00C8: NEAR386 PTR(22) */
/* 00C4: NEAR386 PROC(21) */
typedef void (*onexit_t)();

/* NAME TYPE ADDR: 00D7: NAME(24) */
/* BASE TYPE ADDR: 0083: NEAR386 PTR(13) */
typedef char* MEMBLOCK;

/* NAME TYPE ADDR: 00EB: NAME(27) */
/* BASE TYPE ADDR: 00E8: NEAR386 PTR(26) */
/* 00E3: NEAR386 PROC(25) */
typedef void (*VOIDFN)(void);

/* NAME TYPE ADDR: 00FA: NAME(29) */
/* BASE TYPE ADDR: 00F5: NEAR386 PROC(28) */
typedef void (THREADPROC)(void);

/* NAME TYPE ADDR: 010E: NAME(31) */
/* BASE TYPE ADDR: 0108: NEAR386 PROC(30) */
typedef int (SYSTEMTASK)(int arg0, int arg1);

/* NAME TYPE ADDR: 012E: NAME(35) */
/* BASE TYPE ADDR: 012B: NEAR386 PTR(34) */
/* 011F: NEAR386 PROC(33) */
typedef void (*fontblit)(int arg0, int arg1, void* arg2, int arg3, int arg4, int arg5, int arg6, int arg7);

/* NAME TYPE ADDR: 0145: NAME(39) */
/* BASE TYPE ADDR: 0142: NEAR386 PTR(38) */
/* 013D: NEAR386 PROC(37) */
typedef int (*getcode)(char** arg0);

/* NAME TYPE ADDR: 0153: NAME(41) */
/* BASE TYPE ADDR: 0150: NEAR386 PTR(40) */
/* 00E3: NEAR386 PROC(25) */
typedef void (*fontblitbegin)(void);

/* NAME TYPE ADDR: 0167: NAME(43) */
/* BASE TYPE ADDR: 0164: NEAR386 PTR(42) */
/* 00E3: NEAR386 PROC(25) */
typedef void (*fontblitend)(void);

/* NAME TYPE ADDR: 0184: NAME(47) */
/* BASE TYPE ADDR: 0181: NEAR386 PTR(46) */
/* 0179: NEAR386 PROC(45) */
typedef void (*adjustchar)(int* arg0, int* arg1, char* arg2, int arg3);

/* NAME TYPE ADDR: 0196: NAME(49) */
/* BASE TYPE ADDR: 0192: BYTE_INDEX ARRAY(48) */
typedef char* va_list[1];

/* NAME TYPE ADDR: 01A6: NAME(51) */
/* BASE TYPE ADDR: 01A1: NEAR386 PROC(50) */
typedef int (INTFN)(void);

/* NAME TYPE ADDR: 01AF: NAME(52) */
/* BASE TYPE ADDR: 00BD: SCALAR(20) */
typedef void MVI;

/* NAME TYPE ADDR: 01B6: NAME(53) */
/* BASE TYPE ADDR: 0108: NEAR386 PROC(30) */
typedef int (EACHOOKCALLBACKFUNC)(int arg0, int arg1);

/* NAME TYPE ADDR: 01CD: NAME(54) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int arg_t;

/* NAME TYPE ADDR: 01D6: NAME(55) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int boolean;

/* NAME TYPE ADDR: 01E1: NAME(56) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int fixed88;

/* NAME TYPE ADDR: 01EC: NAME(57) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int fixed824;

/* NAME TYPE ADDR: 01F8: NAME(58) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int fixed248;

/* NAME TYPE ADDR: 0204: NAME(59) */
/* BASE TYPE ADDR: 0040: SCALAR(7) */
typedef short Draw_tContext;

/* NAME TYPE ADDR: 0219: NAME(61) */
/* BASE TYPE ADDR: 022F: FIELD_LIST(63) */
#pragma pack(push, 1)
/* number of fields = 8, size = 0x0028 [40 bytes] */
struct memblockstruct
{
    /* offset = 0x0000 [0] */
    char* adr;
    /* offset = 0x0004 [4] */
    char name[12];
    /* offset = 0x0010 [16] */
    long blocksize;
    /* offset = 0x0014 [20] */
    long datasize;
    /* offset = 0x0018 [24] */
    unsigned int type;
    /* offset = 0x001c [28] */
    unsigned int sequence;
    /* offset = 0x0020 [32] */
    struct memblockstruct* next;
    /* offset = 0x0024 [36] */
    struct memblockstruct* prev;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0283: NAME(64) */
/* BASE TYPE ADDR: 0219: NAME(61) */
typedef struct memblockstruct LIBMEMBLOCK;
/* 029F: SCALAR(68) = unsigned long */

/* Procedure params definition 0 - 0295: NEAR386 PROC(66) */
/* typedef LIBMEMBLOCK* (unnamed_proc)(void); */

/* Procedure params definition 1 - 029A: NEAR386 PROC(67) */
/* typedef int (unnamed_proc)(void); */

/* Procedure params definition 2 - 02B5: NEAR386 PROC(71) */
/* typedef void (unnamed_proc)(int arg0, char** arg1, unsigned long* arg2, unsigned long* arg3, unsigned long* arg4, unsigned int* arg5, unsigned int* arg6, unsigned long* arg7); */

/* Procedure params definition 3 - 02C1: NEAR386 PROC(72) */
/* typedef void (unnamed_proc)(int arg0, int arg1); */

/* Procedure params definition 4 - 02CC: NEAR386 PROC(74) */
/* typedef void (unnamed_proc)(int arg0); */

/* Procedure params definition 5 - 02D1: NEAR386 PROC(75) */
/* typedef void (unnamed_proc)(int arg0, char* arg1, long arg2, int arg3); */

/* Procedure params definition 6 - 02DC: NEAR386 PROC(77) */
/* typedef void (unnamed_proc)(int arg0, MEMBLOCK* arg1); */

/* Procedure params definition 7 - 02E2: NEAR386 PROC(78) */
/* typedef void (unnamed_proc)(int arg0, char* arg1); */

/* Procedure params definition 8 - 02E8: NEAR386 PROC(79) */
/* typedef void (unnamed_proc)(unsigned long arg0, char* arg1); */

/* Procedure params definition 9 - 02EE: NEAR386 PROC(80) */
/* typedef void (unnamed_proc)(unsigned long* arg0, unsigned long* arg1, unsigned long* arg2, unsigned long* arg3); */
