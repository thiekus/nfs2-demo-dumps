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

/* NAME TYPE ADDR: 01EE: NAME(51) */
/* BASE TYPE ADDR: 0204: FIELD_LIST(53) */
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

/* NAME TYPE ADDR: 021E: NAME(54) */
/* BASE TYPE ADDR: 01EE: NAME(51) */
typedef struct DRender_tFacet DRender_tFacet;

/* NAME TYPE ADDR: 024B: NAME(57) */
/* BASE TYPE ADDR: 0233: FIELD_LIST(56) */
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

/* NAME TYPE ADDR: 0261: NAME(58) */
/* BASE TYPE ADDR: 024B: NAME(57) */
typedef struct DRender_tListfacet DRender_tListfacet;

/* NAME TYPE ADDR: 02A4: NAME(62) */
/* BASE TYPE ADDR: 027F: FIELD_LIST(61) */
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

/* NAME TYPE ADDR: 02C2: NAME(64) */
/* BASE TYPE ADDR: 02B0: FIELD_LIST(63) */
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

/* NAME TYPE ADDR: 02CF: NAME(65) */
/* BASE TYPE ADDR: 02C2: NAME(64) */
typedef struct scoorddef SCOORD;

/* NAME TYPE ADDR: 02FD: NAME(67) */
/* BASE TYPE ADDR: 02D9: FIELD_LIST(66) */
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

/* NAME TYPE ADDR: 030D: NAME(68) */
/* BASE TYPE ADDR: 02FD: NAME(67) */
typedef struct Draw_tVertex Draw_tVertex;

/* NAME TYPE ADDR: 0381: NAME(71) */
/* BASE TYPE ADDR: 0320: FIELD_LIST(70) */
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

/* NAME TYPE ADDR: 038D: NAME(72) */
/* BASE TYPE ADDR: 0381: NAME(71) */
typedef struct shapetbl SHAPE;

/* NAME TYPE ADDR: 03CE: NAME(75) */
/* BASE TYPE ADDR: 0399: FIELD_LIST(74) */
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

/* NAME TYPE ADDR: 03DE: NAME(76) */
/* BASE TYPE ADDR: 03CE: NAME(75) */
typedef struct Draw_tPixMap Draw_tPixMap;

/* NAME TYPE ADDR: 0407: NAME(79) */
/* BASE TYPE ADDR: 03F1: FIELD_LIST(78) */
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

/* NAME TYPE ADDR: 041B: NAME(80) */
/* BASE TYPE ADDR: 0407: NAME(79) */
typedef struct DRender_tTexture DRender_tTexture;

/* NAME TYPE ADDR: 0472: NAME(82) */
/* BASE TYPE ADDR: 042F: FIELD_LIST(81) */
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

/* NAME TYPE ADDR: 0486: NAME(83) */
/* BASE TYPE ADDR: 0472: NAME(82) */
typedef struct DRender_tFacet3D DRender_tFacet3D;

/* NAME TYPE ADDR: 04B4: NAME(86) */
/* BASE TYPE ADDR: 049D: FIELD_LIST(85) */
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

/* NAME TYPE ADDR: 04C0: NAME(87) */
/* BASE TYPE ADDR: 04B4: NAME(86) */
typedef struct coorddef LIBCOORD;

/* NAME TYPE ADDR: 0511: NAME(89) */
/* BASE TYPE ADDR: 04CC: FIELD_LIST(88) */
#pragma pack(push, 1)
/* number of fields = 7, size = 0x001c [28 bytes] */
struct Line_PFacet
{
    /* offset = 0x0000 [0] */
    int linetype;
    /* offset = 0x0004 [4] */
    int light;
    /* offset = 0x0008 [8] */
    int compositePos;
    /* offset = 0x000c [12] */
    Draw_tVertex* v0;
    /* offset = 0x0010 [16] */
    Draw_tVertex* v1;
    /* offset = 0x0014 [20] */
    Draw_tVertex* v2;
    /* offset = 0x0018 [24] */
    Draw_tVertex* v3;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0520: NAME(90) */
/* BASE TYPE ADDR: 0511: NAME(89) */
typedef struct Line_PFacet Line_PFacet;

/* NAME TYPE ADDR: 0548: NAME(96) */
/* BASE TYPE ADDR: 0545: NEAR386 PTR(95) */
/* 0535: NEAR386 PROC(93) */
typedef void (*Line_BuildLine)(Line_PFacet* arg0, int arg1, PCOORD16* arg2, PCOORD16* arg3, PCOORD16* arg4, PCOORD16* arg5);

/* NAME TYPE ADDR: 056F: NAME(100) */
/* BASE TYPE ADDR: 0562: FIELD_LIST(99) */
#pragma pack(push, 1)
/* number of fields = 1, size = 0x0024 [36 bytes] */
struct matrixtdef
{
    /* offset = 0x0000 [0] */
    int m[9];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 057D: NAME(101) */
/* BASE TYPE ADDR: 056F: NAME(100) */
typedef struct matrixtdef MATRIX3DT;

/* NAME TYPE ADDR: 05D0: NAME(103) */
/* BASE TYPE ADDR: 058A: FIELD_LIST(102) */
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

/* NAME TYPE ADDR: 05E5: NAME(104) */
/* BASE TYPE ADDR: 05D0: NAME(103) */
typedef struct DRender_tCalcView DRender_tCalcView;

/* NAME TYPE ADDR: 062E: NAME(106) */
/* BASE TYPE ADDR: 05FA: FIELD_LIST(105) */
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

/* NAME TYPE ADDR: 063F: NAME(107) */
/* BASE TYPE ADDR: 062E: NAME(106) */
typedef struct DRender_tView DRender_tView;

/* Procedure params definition 0 - 053F: NEAR386 PROC(94) */
/* typedef void (unnamed_proc)(int arg0, Line_PFacet* arg1); */

/* Procedure params definition 1 - 0653: NEAR386 PROC(109) */
/* typedef void (unnamed_proc)(DRender_tView* arg0); */
