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

/* NAME TYPE ADDR: 018C: NAME(43) */
/* BASE TYPE ADDR: 0189: NEAR386 PTR(42) */
/* 0184: NEAR386 PROC(41) */
typedef void (*Sched_tFunctionPt)(void* arg0);

/* NAME TYPE ADDR: 01B8: NAME(45) */
/* BASE TYPE ADDR: 01A1: FIELD_LIST(44) */
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

/* NAME TYPE ADDR: 01C4: NAME(46) */
/* BASE TYPE ADDR: 01B8: NAME(45) */
typedef struct coorddef LIBCOORD;

/* NAME TYPE ADDR: 01F5: NAME(48) */
/* BASE TYPE ADDR: 01D0: FIELD_LIST(47) */
#pragma pack(push, 1)
/* number of fields = 5, size = 0x0010 [16 bytes] */
struct PCOORD16
{
    /* offset = 0x0000 [0] */
    int x;
    /* offset = 0x0004 [4] */
    int y;
    /* offset = 0x0008 [8] */
    int z;
    /* offset = 0x000c [12] */
    short p;
    /* offset = 0x000e [14] */
    short zclip;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0213: NAME(50) */
/* BASE TYPE ADDR: 0201: FIELD_LIST(49) */
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

/* NAME TYPE ADDR: 0220: NAME(51) */
/* BASE TYPE ADDR: 0213: NAME(50) */
typedef struct scoorddef SCOORD;

/* NAME TYPE ADDR: 024E: NAME(53) */
/* BASE TYPE ADDR: 022A: FIELD_LIST(52) */
#pragma pack(push, 1)
/* number of fields = 4, size = 0x0020 [32 bytes] */
struct Draw_tVertex
{
    /* offset = 0x0000 [0] */
    PCOORD16 sv;
    /* offset = 0x0010 [16] */
    SCOORD pv;
    /* offset = 0x0018 [24] */
    int pad1;
    /* offset = 0x001c [28] */
    int pad2;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 025E: NAME(54) */
/* BASE TYPE ADDR: 024E: NAME(53) */
typedef struct Draw_tVertex Draw_tVertex;

/* NAME TYPE ADDR: 0283: NAME(56) */
/* BASE TYPE ADDR: 026E: FIELD_LIST(55) */
#pragma pack(push, 1)
/* number of fields = 1, size = 0x0004 [4 bytes] */
struct Draw_tISouffle
{
    /* offset = 0x0000 [0] */
    int rndpixmap;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0295: NAME(57) */
/* BASE TYPE ADDR: 0283: NAME(56) */
typedef struct Draw_tISouffle Draw_tISouffle;

/* NAME TYPE ADDR: 0308: NAME(59) */
/* BASE TYPE ADDR: 02A7: FIELD_LIST(58) */
#pragma pack(push, 1)
/* number of fields = 10, size = 0x004b [75 bytes] */
struct DRender_tISouffle
{
    /* offset = 0x0000 [0] */
    char type;
    /* offset = 0x0001 [1] */
    char id;
    /* offset = 0x0002 [2] */
    char wind;
    /* offset = 0x0003 [3] */
    int cycle;
    /* offset = 0x0007 [7] */
    int angle;
    /* offset = 0x000b [11] */
    int aspeed;
    /* offset = 0x000f [15] */
    LIBCOORD source;
    /* offset = 0x001b [27] */
    LIBCOORD motion;
    /* offset = 0x0027 [39] */
    Draw_tVertex trans;
    /* offset = 0x0047 [71] */
    Draw_tISouffle sfxsku;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 031D: NAME(60) */
/* BASE TYPE ADDR: 0308: NAME(59) */
typedef struct DRender_tISouffle DRender_tISouffle;

/* NAME TYPE ADDR: 0359: NAME(68) */
/* BASE TYPE ADDR: 034C: FIELD_LIST(67) */
#pragma pack(push, 1)
/* number of fields = 1, size = 0x0024 [36 bytes] */
struct matrixtdef
{
    /* offset = 0x0000 [0] */
    int m[9];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0367: NAME(69) */
/* BASE TYPE ADDR: 0359: NAME(68) */
typedef struct matrixtdef MATRIX3DT;

/* NAME TYPE ADDR: 03BA: NAME(71) */
/* BASE TYPE ADDR: 0374: FIELD_LIST(70) */
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

/* NAME TYPE ADDR: 03CF: NAME(72) */
/* BASE TYPE ADDR: 03BA: NAME(71) */
typedef struct DRender_tCalcView DRender_tCalcView;

/* NAME TYPE ADDR: 0418: NAME(74) */
/* BASE TYPE ADDR: 03E4: FIELD_LIST(73) */
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

/* NAME TYPE ADDR: 0429: NAME(75) */
/* BASE TYPE ADDR: 0418: NAME(74) */
typedef struct DRender_tView DRender_tView;

/* Procedure params definition 0 - 0339: NEAR386 PROC(63) */
/* typedef void (unnamed_proc)(DRender_tISouffle* arg0); */

/* Procedure params definition 1 - 0341: NEAR386 PROC(65) */
/* typedef DRender_tISouffle* (unnamed_proc)(LIBCOORD* arg0, int arg1, LIBCOORD* arg2); */

/* Procedure params definition 2 - 043D: NEAR386 PROC(77) */
/* typedef void (unnamed_proc)(DRender_tView* arg0); */
