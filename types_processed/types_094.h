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

/* NAME TYPE ADDR: 02BA: NAME(65) */
/* BASE TYPE ADDR: 0259: FIELD_LIST(64) */
#pragma pack(push, 1)
/* number of fields = 9, size = 0x0011 [17 bytes] */
struct shapetbl
{
    /* offset = 0x0000 [0] */
    unsigned int type : 8;
    /* offset = 0x0000 [0] */
    int next : 24;
    /* offset = 0x0004 [4] */
    short width;
    /* offset = 0x0006 [6] */
    short height;
    /* offset = 0x0008 [8] */
    short centerx;
    /* offset = 0x000a [10] */
    short centery;
    /* offset = 0x000c [12] */
    short shapex;
    /* offset = 0x000e [14] */
    short shapey;
    /* offset = 0x0010 [16] */
    char data;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 02C6: NAME(66) */
/* BASE TYPE ADDR: 02BA: NAME(65) */
typedef struct shapetbl SHAPE;

/* NAME TYPE ADDR: 0374: NAME(70) */
/* BASE TYPE ADDR: 02D5: FIELD_LIST(69) */
#pragma pack(push, 1)
/* number of fields = 17, size = 0x0038 [56 bytes] */
struct windowtbl
{
    /* offset = 0x0000 [0] */
    long id;
    /* offset = 0x0004 [4] */
    int width;
    /* offset = 0x0008 [8] */
    int height;
    /* offset = 0x000c [12] */
    int minx;
    /* offset = 0x0010 [16] */
    int miny;
    /* offset = 0x0014 [20] */
    int maxx;
    /* offset = 0x0018 [24] */
    int maxy;
    /* offset = 0x001c [28] */
    unsigned char bpp;
    /* offset = 0x001d [29] */
    unsigned char type;
    /* offset = 0x001e [30] */
    unsigned char ram;
    /* offset = 0x001f [31] */
    unsigned char unused;
    /* offset = 0x0020 [32] */
    SHAPE* shape;
    /* offset = 0x0024 [36] */
    void* zbuffer;
    /* offset = 0x0028 [40] */
    unsigned int rowbytes;
    /* offset = 0x002c [44] */
    unsigned int* rowtbl;
    /* offset = 0x0030 [48] */
    unsigned int* bpptbl;
    /* offset = 0x0034 [52] */
    void* sysptr;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0381: NAME(71) */
/* BASE TYPE ADDR: 0374: NAME(70) */
typedef struct windowtbl WINDOW;

/* Procedure params definition 0 - 0253: NEAR386 PROC(63) */
/* typedef int (unnamed_proc)(int arg0, char** arg1); */

/* Procedure params definition 1 - 038E: NEAR386 PROC(73) */
/* typedef void (unnamed_proc)(int arg0); */

/* Procedure params definition 2 - 0397: NEAR386 PROC(75) */
/* typedef void (unnamed_proc)(int arg0); */

/* Procedure params definition 3 - 03A0: NEAR386 PROC(77) */
/* typedef int (unnamed_proc)(); */

/* Procedure params definition 4 - 03A8: NEAR386 PROC(79) */
/* typedef int (unnamed_proc)(int arg0); */

/* Procedure params definition 5 - 03AD: NEAR386 PROC(80) */
/* typedef int (unnamed_proc)(char* arg0); */

/* Procedure params definition 6 - 03B6: NEAR386 PROC(82) */
/* typedef int (unnamed_proc)(char* arg0, short arg1, short arg2, short arg3); */

/* Procedure params definition 7 - 03CA: NEAR386 PROC(86) */
/* typedef WINDOW* (unnamed_proc)(int arg0, int arg1); */

/* Procedure params definition 8 - 03D4: NEAR386 PROC(88) */
/* typedef void (unnamed_proc)(WINDOW* arg0, int arg1); */

/* Procedure params definition 9 - 03DA: NEAR386 PROC(89) */
/* typedef int (unnamed_proc)(char* arg0, char* arg1, short arg2, short arg3, char arg4); */

/* Procedure params definition 10 - 03EF: NEAR386 PROC(93) */
/* typedef int (unnamed_proc)(int arg0); */

/* Procedure params definition 11 - 03FF: NEAR386 PROC(97) */
/* typedef int (unnamed_proc)(char** arg0, short arg1); */
