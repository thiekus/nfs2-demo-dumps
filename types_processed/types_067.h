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

/* NAME TYPE ADDR: 0181: NAME(40) */
/* BASE TYPE ADDR: 0097: SCALAR(16) */
typedef long SDWORD;
/* 018B: SCALAR(41) = unsigned long */

/* NAME TYPE ADDR: 019B: NAME(42) */
/* BASE TYPE ADDR: 018B: SCALAR(41) */
typedef unsigned long DWORD;

/* NAME TYPE ADDR: 01A4: NAME(43) */
/* BASE TYPE ADDR: 0048: SCALAR(8) */
typedef unsigned short WORD;

/* NAME TYPE ADDR: 01AC: NAME(44) */
/* BASE TYPE ADDR: 0040: SCALAR(7) */
typedef short SWORD;

/* NAME TYPE ADDR: 01B5: NAME(45) */
/* BASE TYPE ADDR: 0022: SCALAR(5) */
typedef signed char SBYTE;

/* NAME TYPE ADDR: 01BE: NAME(46) */
/* BASE TYPE ADDR: 0030: SCALAR(6) */
typedef unsigned char UBYTE;

/* NAME TYPE ADDR: 01C7: NAME(47) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int BOOL;

/* NAME TYPE ADDR: 01CF: NAME(48) */
/* BASE TYPE ADDR: 00CD: SCALAR(22) */
typedef void Stm_Chunk;

/* NAME TYPE ADDR: 01DF: NAME(50) */
/* BASE TYPE ADDR: 01DC: NEAR386 PTR(49) */
typedef Stm_Chunk* lpStm_Chunk;

/* NAME TYPE ADDR: 024F: NAME(52) */
/* BASE TYPE ADDR: 01EE: FIELD_LIST(51) */
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

/* NAME TYPE ADDR: 025B: NAME(53) */
/* BASE TYPE ADDR: 024F: NAME(52) */
typedef struct shapetbl SHAPE;

/* NAME TYPE ADDR: 029C: NAME(56) */
/* BASE TYPE ADDR: 0267: FIELD_LIST(55) */
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

/* NAME TYPE ADDR: 02AC: NAME(57) */
/* BASE TYPE ADDR: 029C: NAME(56) */
typedef struct Draw_tPixMap Draw_tPixMap;

/* NAME TYPE ADDR: 02DA: NAME(61) */
/* BASE TYPE ADDR: 02C3: FIELD_LIST(60) */
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

/* NAME TYPE ADDR: 02E6: NAME(62) */
/* BASE TYPE ADDR: 02DA: NAME(61) */
typedef struct coorddef LIBCOORD;

/* NAME TYPE ADDR: 030E: NAME(64) */
/* BASE TYPE ADDR: 02F2: FIELD_LIST(63) */
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

/* NAME TYPE ADDR: 0316: NAME(65) */
/* BASE TYPE ADDR: 032C: FIELD_LIST(67) */
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

/* NAME TYPE ADDR: 0346: NAME(68) */
/* BASE TYPE ADDR: 0316: NAME(65) */
typedef struct DRender_tFacet DRender_tFacet;

/* NAME TYPE ADDR: 036A: NAME(70) */
/* BASE TYPE ADDR: 0358: FIELD_LIST(69) */
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

/* NAME TYPE ADDR: 0377: NAME(71) */
/* BASE TYPE ADDR: 036A: NAME(70) */
typedef struct scoorddef SCOORD;

/* NAME TYPE ADDR: 03A9: NAME(74) */
/* BASE TYPE ADDR: 0385: FIELD_LIST(73) */
#pragma pack(push, 1)
/* number of fields = 4, size = 0x002a [42 bytes] */
struct DRender_t2DFlatFacet
{
    /* offset = 0x0000 [0] */
    DRender_tFacet head;
    /* offset = 0x0008 [8] */
    SCOORD pt[4];
    /* offset = 0x0028 [40] */
    char ci;
    /* offset = 0x0029 [41] */
    char rect;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 03C1: NAME(75) */
/* BASE TYPE ADDR: 03A9: NAME(74) */
typedef struct DRender_t2DFlatFacet DRender_t2DFlatFacet;

/* NAME TYPE ADDR: 0409: NAME(85) */
/* BASE TYPE ADDR: 03FC: FIELD_LIST(84) */
#pragma pack(push, 1)
/* number of fields = 1, size = 0x0024 [36 bytes] */
struct matrixtdef
{
    /* offset = 0x0000 [0] */
    int m[9];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0417: NAME(86) */
/* BASE TYPE ADDR: 0409: NAME(85) */
typedef struct matrixtdef MATRIX3DT;

/* NAME TYPE ADDR: 046A: NAME(88) */
/* BASE TYPE ADDR: 0424: FIELD_LIST(87) */
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

/* NAME TYPE ADDR: 047F: NAME(89) */
/* BASE TYPE ADDR: 046A: NAME(88) */
typedef struct DRender_tCalcView DRender_tCalcView;

/* NAME TYPE ADDR: 04C8: NAME(91) */
/* BASE TYPE ADDR: 0494: FIELD_LIST(90) */
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

/* NAME TYPE ADDR: 04D9: NAME(92) */
/* BASE TYPE ADDR: 04C8: NAME(91) */
typedef struct DRender_tView DRender_tView;

/* NAME TYPE ADDR: 0511: NAME(98) */
/* BASE TYPE ADDR: 04F9: FIELD_LIST(97) */
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

/* NAME TYPE ADDR: 0527: NAME(99) */
/* BASE TYPE ADDR: 0511: NAME(98) */
typedef struct DRender_tListfacet DRender_tListfacet;

/* NAME TYPE ADDR: 0562: NAME(102) */
/* BASE TYPE ADDR: 0542: FIELD_LIST(101) */
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

/* NAME TYPE ADDR: 0573: NAME(103) */
/* BASE TYPE ADDR: 0562: NAME(102) */
typedef struct Draw_tFacet2D Draw_tFacet2D;

/* NAME TYPE ADDR: 05BC: NAME(105) */
/* BASE TYPE ADDR: 0584: FIELD_LIST(104) */
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

/* NAME TYPE ADDR: 05D0: NAME(106) */
/* BASE TYPE ADDR: 05BC: NAME(105) */
typedef struct DRender_tFacet2D DRender_tFacet2D;

/* Procedure params definition 0 - 03E2: NEAR386 PROC(78) */
/* typedef void (unnamed_proc)(Draw_tPixMap* arg0); */

/* Procedure params definition 1 - 03ED: NEAR386 PROC(81) */
/* typedef void (unnamed_proc)(LIBCOORD* arg0, SCOORD* arg1, int arg2); */

/* Procedure params definition 2 - 04ED: NEAR386 PROC(94) */
/* typedef void (unnamed_proc)(DRender_tView* arg0); */

/* Procedure params definition 3 - 053D: NEAR386 PROC(100) */
/* typedef DRender_tListfacet (unnamed_proc)(DRender_tView* arg0); */
