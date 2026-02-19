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

/* NAME TYPE ADDR: 018B: NAME(42) */
/* BASE TYPE ADDR: 019F: FIELD_LIST(44) */
#pragma pack(push, 1)
/* number of fields = 7, size = 0x0014 [20 bytes] */
struct Texture_tPal
{
    /* offset = 0x0000 [0] */
    int type;
    /* offset = 0x0004 [4] */
    char* shapefile;
    /* offset = 0x0008 [8] */
    char pal[256];
    /* offset = 0x0008 [8] */
    int count[256];
    /* offset = 0x0008 [8] */
    int numcolors;
    /* offset = 0x000c [12] */
    int remaptable;
    /* offset = 0x0010 [16] */
    struct Texture_tPal* next;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 01F3: NAME(45) */
/* BASE TYPE ADDR: 018B: NAME(42) */
typedef struct Texture_tPal Texture_tPal;

/* NAME TYPE ADDR: 022D: NAME(48) */
/* BASE TYPE ADDR: 0206: FIELD_LIST(47) */
#pragma pack(push, 1)
/* number of fields = 3, size = 0x000c [12 bytes] */
struct Pal_Region
{
    /* offset = 0x0000 [0] */
    int reduce;
    /* offset = 0x0004 [4] */
    int numcolors;
    /* offset = 0x0008 [8] */
    Texture_tPal* list;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 023B: NAME(49) */
/* BASE TYPE ADDR: 022D: NAME(48) */
typedef struct Pal_Region Pal_Region;

/* NAME TYPE ADDR: 0280: NAME(54) */
/* BASE TYPE ADDR: 0257: FIELD_LIST(53) */
#pragma pack(push, 1)
/* number of fields = 4, size = 0x0008 [8 bytes] */
struct Pal_tLORCC
{
    /* offset = 0x0000 [0] */
    char pal[256];
    /* offset = 0x0000 [0] */
    char yiq[256];
    /* offset = 0x0000 [0] */
    int cnt;
    /* offset = 0x0004 [4] */
    int extra;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 028E: NAME(55) */
/* BASE TYPE ADDR: 0280: NAME(54) */
typedef struct Pal_tLORCC Pal_tLORCC;

/* NAME TYPE ADDR: 02E7: NAME(65) */
/* BASE TYPE ADDR: 02CB: FIELD_LIST(64) */
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

/* NAME TYPE ADDR: 035A: NAME(69) */
/* BASE TYPE ADDR: 02F9: FIELD_LIST(68) */
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

/* NAME TYPE ADDR: 0366: NAME(70) */
/* BASE TYPE ADDR: 035A: NAME(69) */
typedef struct shapetbl SHAPE;

/* Procedure params definition 0 - 029C: NEAR386 PROC(56) */
/* typedef void (unnamed_proc)(int arg0, int arg1, int arg2); */

/* Procedure params definition 1 - 02A6: NEAR386 PROC(58) */
/* typedef void (unnamed_proc)(int arg0, Texture_tPal* arg1); */

/* Procedure params definition 2 - 02AC: NEAR386 PROC(59) */
/* typedef int (unnamed_proc)(int arg0, char* arg1, int arg2); */

/* Procedure params definition 3 - 02B3: NEAR386 PROC(60) */
/* typedef int (unnamed_proc)(int arg0, char* arg1, int arg2, int arg3); */

/* Procedure params definition 4 - 02C5: NEAR386 PROC(63) */
/* typedef void (unnamed_proc)(char* arg0, int arg1); */

/* Procedure params definition 5 - 02F4: NEAR386 PROC(67) */
/* typedef char* (unnamed_proc)(void); */

/* Procedure params definition 6 - 0372: NEAR386 PROC(72) */
/* typedef int (unnamed_proc)(int arg0, int arg1, char* arg2); */

/* Procedure params definition 7 - 037C: NEAR386 PROC(74) */
/* typedef void (unnamed_proc)(int* arg0); */

/* Procedure params definition 8 - 0385: NEAR386 PROC(76) */
/* typedef int (unnamed_proc)(char* arg0, int arg1, char* arg2, char* arg3, int arg4); */

/* Procedure params definition 9 - 0392: NEAR386 PROC(78) */
/* typedef void (unnamed_proc)(char* arg0, int arg1, char* arg2, int* arg3); */

/* Procedure params definition 10 - 039A: NEAR386 PROC(79) */
/* typedef void (unnamed_proc)(int arg0); */

/* Procedure params definition 11 - 039F: NEAR386 PROC(80) */
/* typedef int (unnamed_proc)(void); */

/* Procedure params definition 12 - 03A4: NEAR386 PROC(81) */
/* typedef char* (unnamed_proc)(int arg0); */

/* Procedure params definition 13 - 03A9: NEAR386 PROC(82) */
/* typedef void (unnamed_proc)(int arg0, char* arg1); */
