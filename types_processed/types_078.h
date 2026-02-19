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

/* NAME TYPE ADDR: 01C7: NAME(44) */
/* BASE TYPE ADDR: 01B0: FIELD_LIST(43) */
#pragma pack(push, 1)
/* number of fields = 3, size = 0x0006 [6 bytes] */
struct COORD16
{
    /* offset = 0x0000 [0] */
    short x;
    /* offset = 0x0002 [2] */
    short y;
    /* offset = 0x0004 [4] */
    short z;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 01D2: NAME(45) */
/* BASE TYPE ADDR: 01C7: NAME(44) */
typedef struct COORD16 COORD16;

/* NAME TYPE ADDR: 0207: NAME(49) */
/* BASE TYPE ADDR: 01E5: FIELD_LIST(48) */
#pragma pack(push, 1)
/* number of fields = 4, size = 0x00a0 [160 bytes] */
struct Skidmark_Chunk
{
    /* offset = 0x0000 [0] */
    LIBCOORD cp;
    /* offset = 0x000c [12] */
    int n;
    /* offset = 0x0010 [16] */
    COORD16 svx[64];
    /* offset = 0x0090 [144] */
    char rnd[16];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0219: NAME(50) */
/* BASE TYPE ADDR: 0207: NAME(49) */
typedef struct Skidmark_Chunk Skidmark_Chunk;

/* NAME TYPE ADDR: 0245: NAME(56) */
/* BASE TYPE ADDR: 025B: FIELD_LIST(58) */
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

/* NAME TYPE ADDR: 0275: NAME(59) */
/* BASE TYPE ADDR: 0245: NAME(56) */
typedef struct DRender_tFacet DRender_tFacet;

/* NAME TYPE ADDR: 02AC: NAME(61) */
/* BASE TYPE ADDR: 0287: FIELD_LIST(60) */
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

/* NAME TYPE ADDR: 02CA: NAME(63) */
/* BASE TYPE ADDR: 02B8: FIELD_LIST(62) */
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

/* NAME TYPE ADDR: 02D7: NAME(64) */
/* BASE TYPE ADDR: 02CA: NAME(63) */
typedef struct scoorddef SCOORD;

/* NAME TYPE ADDR: 0305: NAME(66) */
/* BASE TYPE ADDR: 02E1: FIELD_LIST(65) */
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

/* NAME TYPE ADDR: 0315: NAME(67) */
/* BASE TYPE ADDR: 0305: NAME(66) */
typedef struct Draw_tVertex Draw_tVertex;

/* NAME TYPE ADDR: 0389: NAME(70) */
/* BASE TYPE ADDR: 0328: FIELD_LIST(69) */
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

/* NAME TYPE ADDR: 0395: NAME(71) */
/* BASE TYPE ADDR: 0389: NAME(70) */
typedef struct shapetbl SHAPE;

/* NAME TYPE ADDR: 03D6: NAME(74) */
/* BASE TYPE ADDR: 03A1: FIELD_LIST(73) */
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

/* NAME TYPE ADDR: 03E6: NAME(75) */
/* BASE TYPE ADDR: 03D6: NAME(74) */
typedef struct Draw_tPixMap Draw_tPixMap;

/* NAME TYPE ADDR: 040F: NAME(78) */
/* BASE TYPE ADDR: 03F9: FIELD_LIST(77) */
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

/* NAME TYPE ADDR: 0423: NAME(79) */
/* BASE TYPE ADDR: 040F: NAME(78) */
typedef struct DRender_tTexture DRender_tTexture;

/* NAME TYPE ADDR: 047A: NAME(81) */
/* BASE TYPE ADDR: 0437: FIELD_LIST(80) */
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

/* NAME TYPE ADDR: 048E: NAME(82) */
/* BASE TYPE ADDR: 047A: NAME(81) */
typedef struct DRender_tFacet3D DRender_tFacet3D;

/* NAME TYPE ADDR: 04C0: NAME(86) */
/* BASE TYPE ADDR: 04A8: FIELD_LIST(85) */
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

/* NAME TYPE ADDR: 04D6: NAME(87) */
/* BASE TYPE ADDR: 04C0: NAME(86) */
typedef struct DRender_tListfacet DRender_tListfacet;

/* NAME TYPE ADDR: 04FD: NAME(90) */
/* BASE TYPE ADDR: 04F0: FIELD_LIST(89) */
#pragma pack(push, 1)
/* number of fields = 1, size = 0x0024 [36 bytes] */
struct matrixtdef
{
    /* offset = 0x0000 [0] */
    int m[9];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 050B: NAME(91) */
/* BASE TYPE ADDR: 04FD: NAME(90) */
typedef struct matrixtdef MATRIX3DT;

/* NAME TYPE ADDR: 055E: NAME(93) */
/* BASE TYPE ADDR: 0518: FIELD_LIST(92) */
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

/* NAME TYPE ADDR: 0573: NAME(94) */
/* BASE TYPE ADDR: 055E: NAME(93) */
typedef struct DRender_tCalcView DRender_tCalcView;

/* NAME TYPE ADDR: 05BC: NAME(96) */
/* BASE TYPE ADDR: 0588: FIELD_LIST(95) */
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

/* NAME TYPE ADDR: 05CD: NAME(97) */
/* BASE TYPE ADDR: 05BC: NAME(96) */
typedef struct DRender_tView DRender_tView;

/* Procedure params definition 0 - 0234: NEAR386 PROC(54) */
/* typedef void (unnamed_proc)(COORD16* arg0, LIBCOORD* arg1, LIBCOORD* arg2, LIBCOORD* arg3); */

/* Procedure params definition 1 - 023C: NEAR386 PROC(55) */
/* typedef void (unnamed_proc)(int arg0, int arg1, LIBCOORD* arg2, LIBCOORD* arg3, int arg4); */

/* Procedure params definition 2 - 05E1: NEAR386 PROC(99) */
/* typedef void (unnamed_proc)(DRender_tView* arg0); */
