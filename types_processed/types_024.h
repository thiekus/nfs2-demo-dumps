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
/* BASE TYPE ADDR: 0040: SCALAR(7) */
typedef short Draw_tContext;

/* NAME TYPE ADDR: 0198: NAME(41) */
/* BASE TYPE ADDR: 0181: FIELD_LIST(40) */
#pragma pack(push, 1)
/* number of fields = 3, size = 0x000c [12 bytes] */
struct coorddef
{
    /* offset = 0x0000 [0] */
    int x;
    /* offset = 0x0004 [4] */
    int y;
    /* offset = 0x0008 [8] */
    int z;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 01A4: NAME(42) */
/* BASE TYPE ADDR: 0198: NAME(41) */
typedef struct coorddef LIBCOORD;

/* NAME TYPE ADDR: 01C4: NAME(46) */
/* BASE TYPE ADDR: 01B7: FIELD_LIST(45) */
#pragma pack(push, 1)
/* number of fields = 1, size = 0x0024 [36 bytes] */
struct matrixtdef
{
    /* offset = 0x0000 [0] */
    int m[9];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 01D2: NAME(47) */
/* BASE TYPE ADDR: 01C4: NAME(46) */
typedef struct matrixtdef MATRIX3DT;

/* NAME TYPE ADDR: 0231: NAME(51) */
/* BASE TYPE ADDR: 01EB: FIELD_LIST(50) */
#pragma pack(push, 1)
/* number of fields = 4, size = 0x0060 [96 bytes] */
struct DRender_tCalcView
{
    /* offset = 0x0000 [0] */
    LIBCOORD translation;
    /* offset = 0x000c [12] */
    MATRIX3DT mrotation;
    /* offset = 0x0030 [48] */
    LIBCOORD translationInv;
    /* offset = 0x003c [60] */
    MATRIX3DT mrotationInv;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0246: NAME(52) */
/* BASE TYPE ADDR: 0231: NAME(51) */
typedef struct DRender_tCalcView DRender_tCalcView;

/* NAME TYPE ADDR: 028F: NAME(54) */
/* BASE TYPE ADDR: 025B: FIELD_LIST(53) */
#pragma pack(push, 1)
/* number of fields = 6, size = 0x0074 [116 bytes] */
struct DRender_tView
{
    /* offset = 0x0000 [0] */
    int id;
    /* offset = 0x0004 [4] */
    int player;
    /* offset = 0x0008 [8] */
    DRender_tCalcView cview;
    /* offset = 0x0068 [104] */
    int xo;
    /* offset = 0x006c [108] */
    int yo;
    /* offset = 0x0070 [112] */
    int xdo;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 02A0: NAME(55) */
/* BASE TYPE ADDR: 028F: NAME(54) */
typedef struct DRender_tView DRender_tView;

/* NAME TYPE ADDR: 02CE: NAME(59) */
/* BASE TYPE ADDR: 02BC: FIELD_LIST(58) */
#pragma pack(push, 1)
/* number of fields = 2, size = 0x0008 [8 bytes] */
struct scoorddef
{
    /* offset = 0x0000 [0] */
    int x;
    /* offset = 0x0004 [4] */
    int y;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 02DB: NAME(60) */
/* BASE TYPE ADDR: 02CE: NAME(59) */
typedef struct scoorddef SCOORD;

/* NAME TYPE ADDR: 0302: NAME(66) */
/* BASE TYPE ADDR: 0318: FIELD_LIST(68) */
#pragma pack(push, 1)
/* number of fields = 2, size = 0x0008 [8 bytes] */
struct DRender_tFacet
{
    /* offset = 0x0000 [0] */
    struct DRender_tFacet* lfacet;
    /* offset = 0x0004 [4] */
    int type;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0332: NAME(69) */
/* BASE TYPE ADDR: 0302: NAME(66) */
typedef struct DRender_tFacet DRender_tFacet;

/* NAME TYPE ADDR: 035F: NAME(72) */
/* BASE TYPE ADDR: 0347: FIELD_LIST(71) */
#pragma pack(push, 1)
/* number of fields = 2, size = 0x0008 [8 bytes] */
struct DRender_tListfacet
{
    /* offset = 0x0000 [0] */
    DRender_tFacet* head;
    /* offset = 0x0004 [4] */
    DRender_tFacet* tail;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0375: NAME(73) */
/* BASE TYPE ADDR: 035F: NAME(72) */
typedef struct DRender_tListfacet DRender_tListfacet;

/* Procedure params definition 0 - 01E2: NEAR386 PROC(49) */
/* typedef void (unnamed_proc)(MATRIX3DT* arg0, LIBCOORD* arg1, int arg2, LIBCOORD* arg3, LIBCOORD* arg4); */

/* Procedure params definition 1 - 02B4: NEAR386 PROC(57) */
/* typedef void (unnamed_proc)(DRender_tView* arg0, int arg1, LIBCOORD* arg2, LIBCOORD* arg3); */

/* Procedure params definition 2 - 02E8: NEAR386 PROC(62) */
/* typedef void (unnamed_proc)(int arg0, LIBCOORD* arg1, SCOORD* arg2, SCOORD* arg3); */

/* Procedure params definition 3 - 02F0: NEAR386 PROC(63) */
/* typedef int (unnamed_proc)(SCOORD* arg0); */

/* Procedure params definition 4 - 02F8: NEAR386 PROC(65) */
/* typedef void (unnamed_proc)(SCOORD* arg0, SCOORD* arg1, SCOORD* arg2, int* arg3, int arg4, int arg5); */

/* Procedure params definition 5 - 038B: NEAR386 PROC(74) */
/* typedef DRender_tListfacet (unnamed_proc)(DRender_tView* arg0); */
