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

/* NAME TYPE ADDR: 01A6: NAME(41) */
/* BASE TYPE ADDR: 0181: FIELD_LIST(40) */
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

/* NAME TYPE ADDR: 01C4: NAME(43) */
/* BASE TYPE ADDR: 01B2: FIELD_LIST(42) */
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

/* NAME TYPE ADDR: 01D1: NAME(44) */
/* BASE TYPE ADDR: 01C4: NAME(43) */
typedef struct scoorddef SCOORD;

/* NAME TYPE ADDR: 01FF: NAME(46) */
/* BASE TYPE ADDR: 01DB: FIELD_LIST(45) */
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

/* NAME TYPE ADDR: 020F: NAME(47) */
/* BASE TYPE ADDR: 01FF: NAME(46) */
typedef struct Draw_tVertex Draw_tVertex;

/* NAME TYPE ADDR: 023E: NAME(51) */
/* BASE TYPE ADDR: 0227: FIELD_LIST(50) */
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

/* NAME TYPE ADDR: 024A: NAME(52) */
/* BASE TYPE ADDR: 023E: NAME(51) */
typedef struct coorddef LIBCOORD;

/* NAME TYPE ADDR: 025A: NAME(54) */
/* BASE TYPE ADDR: 0270: FIELD_LIST(56) */
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

/* NAME TYPE ADDR: 028A: NAME(57) */
/* BASE TYPE ADDR: 025A: NAME(54) */
typedef struct DRender_tFacet DRender_tFacet;

/* NAME TYPE ADDR: 0300: NAME(60) */
/* BASE TYPE ADDR: 029F: FIELD_LIST(59) */
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

/* NAME TYPE ADDR: 030C: NAME(61) */
/* BASE TYPE ADDR: 0300: NAME(60) */
typedef struct shapetbl SHAPE;

/* NAME TYPE ADDR: 034D: NAME(64) */
/* BASE TYPE ADDR: 0318: FIELD_LIST(63) */
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

/* NAME TYPE ADDR: 035D: NAME(65) */
/* BASE TYPE ADDR: 034D: NAME(64) */
typedef struct Draw_tPixMap Draw_tPixMap;

/* NAME TYPE ADDR: 0386: NAME(68) */
/* BASE TYPE ADDR: 0370: FIELD_LIST(67) */
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

/* NAME TYPE ADDR: 039A: NAME(69) */
/* BASE TYPE ADDR: 0386: NAME(68) */
typedef struct DRender_tTexture DRender_tTexture;

/* NAME TYPE ADDR: 03F1: NAME(71) */
/* BASE TYPE ADDR: 03AE: FIELD_LIST(70) */
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

/* NAME TYPE ADDR: 0405: NAME(72) */
/* BASE TYPE ADDR: 03F1: NAME(71) */
typedef struct DRender_tFacet3D DRender_tFacet3D;

/* NAME TYPE ADDR: 042A: NAME(75) */
/* BASE TYPE ADDR: 041D: FIELD_LIST(74) */
#pragma pack(push, 1)
/* number of fields = 1, size = 0x0024 [36 bytes] */
struct matrixtdef
{
    /* offset = 0x0000 [0] */
    int m[9];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0438: NAME(76) */
/* BASE TYPE ADDR: 042A: NAME(75) */
typedef struct matrixtdef MATRIX3DT;

/* NAME TYPE ADDR: 048B: NAME(78) */
/* BASE TYPE ADDR: 0445: FIELD_LIST(77) */
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

/* NAME TYPE ADDR: 04A0: NAME(79) */
/* BASE TYPE ADDR: 048B: NAME(78) */
typedef struct DRender_tCalcView DRender_tCalcView;

/* NAME TYPE ADDR: 04E9: NAME(81) */
/* BASE TYPE ADDR: 04B5: FIELD_LIST(80) */
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

/* NAME TYPE ADDR: 04FA: NAME(82) */
/* BASE TYPE ADDR: 04E9: NAME(81) */
typedef struct DRender_tView DRender_tView;

/* NAME TYPE ADDR: 0537: NAME(89) */
/* BASE TYPE ADDR: 051F: FIELD_LIST(88) */
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

/* NAME TYPE ADDR: 054D: NAME(90) */
/* BASE TYPE ADDR: 0537: NAME(89) */
typedef struct DRender_tListfacet DRender_tListfacet;

/* Procedure params definition 0 - 0514: NEAR386 PROC(86) */
/* typedef void (unnamed_proc)(DRender_tView* arg0, DRender_tFacet** arg1, DRender_tFacet** arg2, int arg3); */
