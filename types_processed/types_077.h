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

/* NAME TYPE ADDR: 0181: NAME(40) */
/* BASE TYPE ADDR: 0197: FIELD_LIST(42) */
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

/* NAME TYPE ADDR: 01B1: NAME(43) */
/* BASE TYPE ADDR: 0181: NAME(40) */
typedef struct DRender_tFacet DRender_tFacet;

/* NAME TYPE ADDR: 01D5: NAME(45) */
/* BASE TYPE ADDR: 01C3: FIELD_LIST(44) */
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

/* NAME TYPE ADDR: 01E2: NAME(46) */
/* BASE TYPE ADDR: 01D5: NAME(45) */
typedef struct scoorddef SCOORD;

/* NAME TYPE ADDR: 024D: NAME(48) */
/* BASE TYPE ADDR: 01EC: FIELD_LIST(47) */
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

/* NAME TYPE ADDR: 0259: NAME(49) */
/* BASE TYPE ADDR: 024D: NAME(48) */
typedef struct shapetbl SHAPE;

/* NAME TYPE ADDR: 029A: NAME(52) */
/* BASE TYPE ADDR: 0265: FIELD_LIST(51) */
#pragma pack(push, 1)
/* number of fields = 6, size = 0x000c [12 bytes] */
struct Draw_tPixMap
{
    /* offset = 0x0000 [0] */
    SHAPE* shp;
    /* offset = 0x0004 [4] */
    char uv0;
    /* offset = 0x0005 [5] */
    char uv1;
    /* offset = 0x0006 [6] */
    char uv2;
    /* offset = 0x0007 [7] */
    char uv3;
    /* offset = 0x0008 [8] */
    char* coltbl;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 02AA: NAME(53) */
/* BASE TYPE ADDR: 029A: NAME(52) */
typedef struct Draw_tPixMap Draw_tPixMap;

/* NAME TYPE ADDR: 02DD: NAME(56) */
/* BASE TYPE ADDR: 02BD: FIELD_LIST(55) */
#pragma pack(push, 1)
/* number of fields = 4, size = 0x0004 [4 bytes] */
struct Draw_tFacet2D
{
    /* offset = 0x0000 [0] */
    char ba;
    /* offset = 0x0001 [1] */
    char br;
    /* offset = 0x0002 [2] */
    char bg;
    /* offset = 0x0003 [3] */
    char bb;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 02EE: NAME(57) */
/* BASE TYPE ADDR: 02DD: NAME(56) */
typedef struct Draw_tFacet2D Draw_tFacet2D;

/* NAME TYPE ADDR: 0337: NAME(59) */
/* BASE TYPE ADDR: 02FF: FIELD_LIST(58) */
#pragma pack(push, 1)
/* number of fields = 7, size = 0x0030 [48 bytes] */
struct DRender_tFacet2D
{
    /* offset = 0x0000 [0] */
    DRender_tFacet head;
    /* offset = 0x0008 [8] */
    SCOORD p0;
    /* offset = 0x0010 [16] */
    SCOORD p1;
    /* offset = 0x0018 [24] */
    SCOORD p2;
    /* offset = 0x0020 [32] */
    SCOORD p3;
    /* offset = 0x0028 [40] */
    Draw_tPixMap* pmx;
    /* offset = 0x002c [44] */
    Draw_tFacet2D tinfo;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 034B: NAME(60) */
/* BASE TYPE ADDR: 0337: NAME(59) */
typedef struct DRender_tFacet2D DRender_tFacet2D;

/* NAME TYPE ADDR: 03AE: NAME(74) */
/* BASE TYPE ADDR: 0397: FIELD_LIST(73) */
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

/* NAME TYPE ADDR: 03BA: NAME(75) */
/* BASE TYPE ADDR: 03AE: NAME(74) */
typedef struct coorddef LIBCOORD;

/* NAME TYPE ADDR: 03EB: NAME(77) */
/* BASE TYPE ADDR: 03C6: FIELD_LIST(76) */
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

/* NAME TYPE ADDR: 041B: NAME(79) */
/* BASE TYPE ADDR: 03F7: FIELD_LIST(78) */
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

/* NAME TYPE ADDR: 042B: NAME(80) */
/* BASE TYPE ADDR: 041B: NAME(79) */
typedef struct Draw_tVertex Draw_tVertex;

/* NAME TYPE ADDR: 0450: NAME(82) */
/* BASE TYPE ADDR: 043B: FIELD_LIST(81) */
#pragma pack(push, 1)
/* number of fields = 1, size = 0x0004 [4 bytes] */
struct Draw_tISouffle
{
    /* offset = 0x0000 [0] */
    int rndpixmap;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0462: NAME(83) */
/* BASE TYPE ADDR: 0450: NAME(82) */
typedef struct Draw_tISouffle Draw_tISouffle;

/* NAME TYPE ADDR: 04D5: NAME(85) */
/* BASE TYPE ADDR: 0474: FIELD_LIST(84) */
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

/* NAME TYPE ADDR: 04EA: NAME(86) */
/* BASE TYPE ADDR: 04D5: NAME(85) */
typedef struct DRender_tISouffle DRender_tISouffle;

/* NAME TYPE ADDR: 051B: NAME(90) */
/* BASE TYPE ADDR: 0505: FIELD_LIST(89) */
#pragma pack(push, 1)
/* number of fields = 2, size = 0x0006 [6 bytes] */
struct DRender_tTexture
{
    /* offset = 0x0000 [0] */
    Draw_tPixMap* pmx;
    /* offset = 0x0004 [4] */
    Draw_tContext ctx;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 052F: NAME(91) */
/* BASE TYPE ADDR: 051B: NAME(90) */
typedef struct DRender_tTexture DRender_tTexture;

/* NAME TYPE ADDR: 0586: NAME(93) */
/* BASE TYPE ADDR: 0543: FIELD_LIST(92) */
#pragma pack(push, 1)
/* number of fields = 8, size = 0x0022 [34 bytes] */
struct DRender_tFacet3D
{
    /* offset = 0x0000 [0] */
    DRender_tFacet head;
    /* offset = 0x0008 [8] */
    short tsub;
    /* offset = 0x000a [10] */
    short face;
    /* offset = 0x000c [12] */
    Draw_tVertex* v0;
    /* offset = 0x0010 [16] */
    Draw_tVertex* v1;
    /* offset = 0x0014 [20] */
    Draw_tVertex* v2;
    /* offset = 0x0018 [24] */
    Draw_tVertex* v3;
    /* offset = 0x001c [28] */
    DRender_tTexture texture;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 059A: NAME(94) */
/* BASE TYPE ADDR: 0586: NAME(93) */
typedef struct DRender_tFacet3D DRender_tFacet3D;

/* NAME TYPE ADDR: 05E3: NAME(96) */
/* BASE TYPE ADDR: 05AE: FIELD_LIST(95) */
#pragma pack(push, 1)
/* number of fields = 7, size = 0x00de [222 bytes] */
struct sfxsouffle
{
    /* offset = 0x0000 [0] */
    Draw_tPixMap pmx;
    /* offset = 0x000c [12] */
    Draw_tVertex v0;
    /* offset = 0x002c [44] */
    Draw_tVertex v1;
    /* offset = 0x004c [76] */
    Draw_tVertex v2;
    /* offset = 0x006c [108] */
    Draw_tVertex v3;
    /* offset = 0x008c [140] */
    DRender_tFacet3D f3d;
    /* offset = 0x00ae [174] */
    DRender_tFacet2D f2d;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 05F1: NAME(97) */
/* BASE TYPE ADDR: 05E3: NAME(96) */
typedef struct sfxsouffle sfxsouffle;

/* NAME TYPE ADDR: 061A: NAME(102) */
/* BASE TYPE ADDR: 060D: FIELD_LIST(101) */
#pragma pack(push, 1)
/* number of fields = 1, size = 0x0024 [36 bytes] */
struct matrixtdef
{
    /* offset = 0x0000 [0] */
    int m[9];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0628: NAME(103) */
/* BASE TYPE ADDR: 061A: NAME(102) */
typedef struct matrixtdef MATRIX3DT;

/* NAME TYPE ADDR: 067B: NAME(105) */
/* BASE TYPE ADDR: 0635: FIELD_LIST(104) */
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

/* NAME TYPE ADDR: 0690: NAME(106) */
/* BASE TYPE ADDR: 067B: NAME(105) */
typedef struct DRender_tCalcView DRender_tCalcView;

/* NAME TYPE ADDR: 06D9: NAME(108) */
/* BASE TYPE ADDR: 06A5: FIELD_LIST(107) */
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

/* NAME TYPE ADDR: 06EA: NAME(109) */
/* BASE TYPE ADDR: 06D9: NAME(108) */
typedef struct DRender_tView DRender_tView;

/* Procedure params definition 0 - 037B: NEAR386 PROC(68) */
/* typedef void (unnamed_proc)(char* arg0, char* arg1, Draw_tPixMap* arg2, int arg3); */

/* Procedure params definition 1 - 038C: NEAR386 PROC(71) */
/* typedef void (unnamed_proc)(int arg0, char arg1, char arg2); */

/* Procedure params definition 2 - 0602: NEAR386 PROC(99) */
/* typedef void (unnamed_proc)(DRender_tISouffle* arg0, sfxsouffle* arg1, int arg2); */

/* Procedure params definition 3 - 06FE: NEAR386 PROC(111) */
/* typedef void (unnamed_proc)(DRender_tView* arg0, DRender_tISouffle* arg1, sfxsouffle* arg2, int arg3); */

/* Procedure params definition 4 - 0709: NEAR386 PROC(113) */
/* typedef void (unnamed_proc)(DRender_tView* arg0, DRender_tISouffle* arg1); */

/* Procedure params definition 5 - 070F: NEAR386 PROC(114) */
/* typedef void (unnamed_proc)(DRender_tISouffle* arg0); */
