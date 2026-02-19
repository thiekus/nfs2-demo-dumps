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

/* NAME TYPE ADDR: 018D: NAME(43) */
/* BASE TYPE ADDR: 018A: NEAR386 PTR(42) */
/* 0184: NEAR386 PROC(41) */
typedef void (*Transformer_AnimCallbackFunc)(void* arg0, void* arg1);

/* NAME TYPE ADDR: 01AD: NAME(44) */
/* BASE TYPE ADDR: 0097: SCALAR(16) */
typedef long SDWORD;
/* 01B7: SCALAR(45) = unsigned long */

/* NAME TYPE ADDR: 01C7: NAME(46) */
/* BASE TYPE ADDR: 01B7: SCALAR(45) */
typedef unsigned long DWORD;

/* NAME TYPE ADDR: 01D0: NAME(47) */
/* BASE TYPE ADDR: 0048: SCALAR(8) */
typedef unsigned short WORD;

/* NAME TYPE ADDR: 01D8: NAME(48) */
/* BASE TYPE ADDR: 0040: SCALAR(7) */
typedef short SWORD;

/* NAME TYPE ADDR: 01E1: NAME(49) */
/* BASE TYPE ADDR: 0022: SCALAR(5) */
typedef signed char SBYTE;

/* NAME TYPE ADDR: 01EA: NAME(50) */
/* BASE TYPE ADDR: 0030: SCALAR(6) */
typedef unsigned char UBYTE;

/* NAME TYPE ADDR: 01F3: NAME(51) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int BOOL;

/* NAME TYPE ADDR: 01FB: NAME(52) */
/* BASE TYPE ADDR: 00CD: SCALAR(22) */
typedef void Stm_Chunk;

/* NAME TYPE ADDR: 020B: NAME(54) */
/* BASE TYPE ADDR: 0208: NEAR386 PTR(53) */
typedef Stm_Chunk* lpStm_Chunk;

/* NAME TYPE ADDR: 0222: NAME(57) */
/* BASE TYPE ADDR: 021F: NEAR386 PTR(56) */
/* 021A: NEAR386 PROC(55) */
typedef void (*Sched_tFunctionPt)(void* arg0);

/* NAME TYPE ADDR: 023B: NAME(59) */
/* BASE TYPE ADDR: 0237: BYTE_INDEX ARRAY(58) */
typedef short tAccTable[112];

/* NAME TYPE ADDR: 02A9: NAME(61) */
/* BASE TYPE ADDR: 0248: FIELD_LIST(60) */
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

/* NAME TYPE ADDR: 02B5: NAME(62) */
/* BASE TYPE ADDR: 02A9: NAME(61) */
typedef struct shapetbl SHAPE;

/* NAME TYPE ADDR: 02F6: NAME(65) */
/* BASE TYPE ADDR: 02C1: FIELD_LIST(64) */
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

/* NAME TYPE ADDR: 0306: NAME(66) */
/* BASE TYPE ADDR: 02F6: NAME(65) */
typedef struct Draw_tPixMap Draw_tPixMap;

/* NAME TYPE ADDR: 031E: NAME(69) */
/* BASE TYPE ADDR: 0334: FIELD_LIST(71) */
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

/* NAME TYPE ADDR: 034E: NAME(72) */
/* BASE TYPE ADDR: 031E: NAME(69) */
typedef struct DRender_tFacet DRender_tFacet;

/* NAME TYPE ADDR: 0385: NAME(74) */
/* BASE TYPE ADDR: 0360: FIELD_LIST(73) */
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

/* NAME TYPE ADDR: 03A3: NAME(76) */
/* BASE TYPE ADDR: 0391: FIELD_LIST(75) */
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

/* NAME TYPE ADDR: 03B0: NAME(77) */
/* BASE TYPE ADDR: 03A3: NAME(76) */
typedef struct scoorddef SCOORD;

/* NAME TYPE ADDR: 03DE: NAME(79) */
/* BASE TYPE ADDR: 03BA: FIELD_LIST(78) */
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

/* NAME TYPE ADDR: 03EE: NAME(80) */
/* BASE TYPE ADDR: 03DE: NAME(79) */
typedef struct Draw_tVertex Draw_tVertex;

/* NAME TYPE ADDR: 041A: NAME(84) */
/* BASE TYPE ADDR: 0404: FIELD_LIST(83) */
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

/* NAME TYPE ADDR: 042E: NAME(85) */
/* BASE TYPE ADDR: 041A: NAME(84) */
typedef struct DRender_tTexture DRender_tTexture;

/* NAME TYPE ADDR: 0485: NAME(87) */
/* BASE TYPE ADDR: 0442: FIELD_LIST(86) */
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

/* NAME TYPE ADDR: 0499: NAME(88) */
/* BASE TYPE ADDR: 0485: NAME(87) */
typedef struct DRender_tFacet3D DRender_tFacet3D;

/* NAME TYPE ADDR: 04C7: NAME(91) */
/* BASE TYPE ADDR: 04B0: FIELD_LIST(90) */
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

/* NAME TYPE ADDR: 04D3: NAME(92) */
/* BASE TYPE ADDR: 04C7: NAME(91) */
typedef struct coorddef LIBCOORD;

/* NAME TYPE ADDR: 04F6: NAME(94) */
/* BASE TYPE ADDR: 04DF: FIELD_LIST(93) */
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

/* NAME TYPE ADDR: 0501: NAME(95) */
/* BASE TYPE ADDR: 04F6: NAME(94) */
typedef struct COORD16 COORD16;

/* NAME TYPE ADDR: 050C: NAME(96) */
/* BASE TYPE ADDR: 0501: NAME(95) */
typedef COORD16 Transformer_tVertex;

/* NAME TYPE ADDR: 0577: NAME(101) */
/* BASE TYPE ADDR: 052E: FIELD_LIST(100) */
#pragma pack(push, 1)
/* number of fields = 5, size = 0x000c [12 bytes] */
struct Transformer_tFacet
{
    /* offset = 0x0000 [0] */
    unsigned char type;
    /* offset = 0x0001 [1] */
    unsigned char animOffset;
    /* offset = 0x0002 [2] */
    unsigned short textureIndex;
    /* offset = 0x0004 [4] */
    unsigned char vertexId[4];
    /* offset = 0x0008 [8] */
    char textureName[4];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 058D: NAME(102) */
/* BASE TYPE ADDR: 0577: NAME(101) */
typedef struct Transformer_tFacet Transformer_tFacet;

/* NAME TYPE ADDR: 062D: NAME(105) */
/* BASE TYPE ADDR: 05A6: FIELD_LIST(104) */
#pragma pack(push, 1)
/* number of fields = 6, size = 0x0018 [24 bytes] */
struct Transformer_tDrawControlInfo
{
    /* offset = 0x0000 [0] */
    int zSortNeeded;
    /* offset = 0x0004 [4] */
    int partLinkPriority;
    /* offset = 0x0008 [8] */
    int minYawInvisibility;
    /* offset = 0x000c [12] */
    int maxYawInvisibility;
    /* offset = 0x0010 [16] */
    int minPitchInvisibility;
    /* offset = 0x0014 [20] */
    int maxPitchInvisibility;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 064D: NAME(106) */
/* BASE TYPE ADDR: 062D: NAME(105) */
typedef struct Transformer_tDrawControlInfo Transformer_tDrawControlInfo;

/* NAME TYPE ADDR: 06BF: NAME(108) */
/* BASE TYPE ADDR: 066D: FIELD_LIST(107) */
#pragma pack(push, 1)
/* number of fields = 6, size = 0x0034 [52 bytes] */
struct Transformer_tObj
{
    /* offset = 0x0000 [0] */
    int numVertex;
    /* offset = 0x0004 [4] */
    int numFacet;
    /* offset = 0x0008 [8] */
    LIBCOORD translation;
    /* offset = 0x0014 [20] */
    Transformer_tVertex* vertex;
    /* offset = 0x0018 [24] */
    Transformer_tFacet* facet;
    /* offset = 0x001c [28] */
    Transformer_tDrawControlInfo drawControl;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 06D3: NAME(109) */
/* BASE TYPE ADDR: 06BF: NAME(108) */
typedef struct Transformer_tObj Transformer_tObj;

/* NAME TYPE ADDR: 06FB: NAME(113) */
/* BASE TYPE ADDR: 06EE: FIELD_LIST(112) */
#pragma pack(push, 1)
/* number of fields = 1, size = 0x0024 [36 bytes] */
struct matrixtdef
{
    /* offset = 0x0000 [0] */
    int m[9];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0709: NAME(114) */
/* BASE TYPE ADDR: 06FB: NAME(113) */
typedef struct matrixtdef MATRIX3DT;

/* Procedure params definition 0 - 0316: NEAR386 PROC(67) */
/* typedef void (unnamed_proc)(short arg0); */

/* Procedure params definition 1 - 071C: NEAR386 PROC(117) */
/* typedef void (unnamed_proc)(Transformer_tObj* arg0, MATRIX3DT* arg1, LIBCOORD* arg2, int arg3, int arg4); */
