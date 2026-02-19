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

/* NAME TYPE ADDR: 0209: NAME(52) */
/* BASE TYPE ADDR: 01AE: FIELD_LIST(51) */
#pragma pack(push, 1)
/* number of fields = 8, size = 0x001a [26 bytes] */
struct __iobuf
{
    /* offset = 0x0000 [0] */
    unsigned char* _ptr;
    /* offset = 0x0004 [4] */
    int _cnt;
    /* offset = 0x0008 [8] */
    unsigned char* _base;
    /* offset = 0x000c [12] */
    unsigned int _flag;
    /* offset = 0x0010 [16] */
    int _handle;
    /* offset = 0x0014 [20] */
    unsigned int _bufsize;
    /* offset = 0x0018 [24] */
    unsigned char _ungotten;
    /* offset = 0x0019 [25] */
    unsigned char _tmpfchar;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0214: NAME(53) */
/* BASE TYPE ADDR: 0209: NAME(52) */
typedef struct __iobuf FILE;

/* NAME TYPE ADDR: 023B: NAME(56) */
/* BASE TYPE ADDR: 021F: FIELD_LIST(55) */
#pragma pack(push, 1)
/* number of fields = 4, size = 0x0004 [4 bytes] */
struct ARGB
{
    /* offset = 0x0000 [0] */
    unsigned char b;
    /* offset = 0x0001 [1] */
    unsigned char g;
    /* offset = 0x0002 [2] */
    unsigned char r;
    /* offset = 0x0003 [3] */
    unsigned char a;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 02B4: NAME(61) */
/* BASE TYPE ADDR: 0253: FIELD_LIST(60) */
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

/* NAME TYPE ADDR: 02C0: NAME(62) */
/* BASE TYPE ADDR: 02B4: NAME(61) */
typedef struct shapetbl SHAPE;

/* Procedure params definition 0 - 01A5: NEAR386 PROC(49) */
/* typedef void (unnamed_proc)(char* arg0, char* arg1); */

/* Procedure params definition 1 - 0246: NEAR386 PROC(58) */
/* typedef void (unnamed_proc)(char* arg0, ARGB* arg1); */

/* Procedure params definition 2 - 024C: NEAR386 PROC(59) */
/* typedef int (unnamed_proc)(int arg0, int arg1, int arg2); */

/* Procedure params definition 3 - 02CC: NEAR386 PROC(64) */
/* typedef char* (unnamed_proc)(char* arg0); */

/* Procedure params definition 4 - 02D1: NEAR386 PROC(65) */
/* typedef int (unnamed_proc)(char* arg0, char* arg1); */

/* Procedure params definition 5 - 02D7: NEAR386 PROC(66) */
/* typedef void (unnamed_proc)(ARGB* arg0, char* arg1, int arg2); */

/* Procedure params definition 6 - 02DE: NEAR386 PROC(67) */
/* typedef void (unnamed_proc)(char* arg0, ARGB* arg1, int arg2); */

/* Procedure params definition 7 - 02E8: NEAR386 PROC(69) */
/* typedef void (unnamed_proc)(int* arg0, SHAPE* arg1); */

/* Procedure params definition 8 - 02EE: NEAR386 PROC(70) */
/* typedef void (unnamed_proc)(SHAPE* arg0, char* arg1); */

/* Procedure params definition 9 - 02F4: NEAR386 PROC(71) */
/* typedef void (unnamed_proc)(char* arg0, char* arg1, char* arg2); */

/* Procedure params definition 10 - 0300: NEAR386 PROC(73) */
/* typedef void (unnamed_proc)(char* arg0, char* arg1, int arg2); */
