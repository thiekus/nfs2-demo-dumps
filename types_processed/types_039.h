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

/* NAME TYPE ADDR: 0191: NAME(44) */
/* BASE TYPE ADDR: 01A7: FIELD_LIST(46) */
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

/* NAME TYPE ADDR: 01C1: NAME(47) */
/* BASE TYPE ADDR: 0191: NAME(44) */
typedef struct DRender_tFacet DRender_tFacet;

/* NAME TYPE ADDR: 01D6: NAME(49) */
/* BASE TYPE ADDR: 01D3: NEAR386 PTR(48) */
typedef DRender_tFacet* DRender_tFacetPtr;

/* NAME TYPE ADDR: 021E: NAME(54) */
/* BASE TYPE ADDR: 01F9: FIELD_LIST(53) */
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

/* NAME TYPE ADDR: 023C: NAME(56) */
/* BASE TYPE ADDR: 022A: FIELD_LIST(55) */
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

/* NAME TYPE ADDR: 0249: NAME(57) */
/* BASE TYPE ADDR: 023C: NAME(56) */
typedef struct scoorddef SCOORD;

/* NAME TYPE ADDR: 0277: NAME(59) */
/* BASE TYPE ADDR: 0253: FIELD_LIST(58) */
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

/* NAME TYPE ADDR: 0287: NAME(60) */
/* BASE TYPE ADDR: 0277: NAME(59) */
typedef struct Draw_tVertex Draw_tVertex;

/* NAME TYPE ADDR: 02FB: NAME(63) */
/* BASE TYPE ADDR: 029A: FIELD_LIST(62) */
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

/* NAME TYPE ADDR: 0307: NAME(64) */
/* BASE TYPE ADDR: 02FB: NAME(63) */
typedef struct shapetbl SHAPE;

/* NAME TYPE ADDR: 0348: NAME(67) */
/* BASE TYPE ADDR: 0313: FIELD_LIST(66) */
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

/* NAME TYPE ADDR: 0358: NAME(68) */
/* BASE TYPE ADDR: 0348: NAME(67) */
typedef struct Draw_tPixMap Draw_tPixMap;

/* NAME TYPE ADDR: 0381: NAME(71) */
/* BASE TYPE ADDR: 036B: FIELD_LIST(70) */
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

/* NAME TYPE ADDR: 0395: NAME(72) */
/* BASE TYPE ADDR: 0381: NAME(71) */
typedef struct DRender_tTexture DRender_tTexture;

/* NAME TYPE ADDR: 03EC: NAME(74) */
/* BASE TYPE ADDR: 03A9: FIELD_LIST(73) */
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

/* NAME TYPE ADDR: 0400: NAME(75) */
/* BASE TYPE ADDR: 03EC: NAME(74) */
typedef struct DRender_tFacet3D DRender_tFacet3D;

/* NAME TYPE ADDR: 042F: NAME(78) */
/* BASE TYPE ADDR: 0417: FIELD_LIST(77) */
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

/* NAME TYPE ADDR: 0445: NAME(79) */
/* BASE TYPE ADDR: 042F: NAME(78) */
typedef struct DRender_tListfacet DRender_tListfacet;

/* NAME TYPE ADDR: 04A5: NAME(89) */
/* BASE TYPE ADDR: 048E: FIELD_LIST(88) */
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

/* NAME TYPE ADDR: 04B1: NAME(90) */
/* BASE TYPE ADDR: 04A5: NAME(89) */
typedef struct coorddef LIBCOORD;

/* Procedure params definition 0 - 01EE: NEAR386 PROC(51) */
/* typedef int (unnamed_proc)(int arg0); */

/* Procedure params definition 1 - 01F3: NEAR386 PROC(52) */
/* typedef void (unnamed_proc)(int arg0, DRender_tFacet* arg1); */

/* Procedure params definition 2 - 045B: NEAR386 PROC(80) */
/* typedef void (unnamed_proc)(DRender_tListfacet arg0, int arg1, int arg2); */

/* Procedure params definition 3 - 0462: NEAR386 PROC(81) */
/* typedef int (unnamed_proc)(Draw_tVertex* arg0, Draw_tVertex* arg1, Draw_tVertex* arg2, Draw_tVertex* arg3, int arg4, DRender_tFacet* arg5); */

/* Procedure params definition 4 - 046C: NEAR386 PROC(82) */
/* typedef int (unnamed_proc)(Draw_tVertex* arg0, Draw_tVertex* arg1, Draw_tVertex* arg2, Draw_tVertex* arg3, int arg4, DRender_tListfacet arg5, int arg6); */

/* Procedure params definition 5 - 0477: NEAR386 PROC(83) */
/* typedef DRender_tListfacet (unnamed_proc)(void); */

/* Procedure params definition 6 - 047C: NEAR386 PROC(84) */
/* typedef char (unnamed_proc)(char arg0); */

/* Procedure params definition 7 - 0484: NEAR386 PROC(86) */
/* typedef int (unnamed_proc)(char** arg0); */

/* Procedure params definition 8 - 04C0: NEAR386 PROC(92) */
/* typedef int (unnamed_proc)(LIBCOORD* arg0, LIBCOORD* arg1, int arg2); */

/* Procedure params definition 9 - 04CA: NEAR386 PROC(94) */
/* typedef void (unnamed_proc)(int* arg0, int* arg1, int arg2, int* arg3, int* arg4, int* arg5); */

/* Procedure params definition 10 - 04D4: NEAR386 PROC(95) */
/* typedef void (unnamed_proc)(int* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8); */
