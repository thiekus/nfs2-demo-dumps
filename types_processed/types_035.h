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

/* NAME TYPE ADDR: 0248: NAME(60) */
/* BASE TYPE ADDR: 063E: FIELD_LIST(98) */
#pragma pack(push, 1)
/* number of fields = 7, size = 0x00c8 [200 bytes] */
struct Transformer_tNodeInfo
{
    /* offset = 0x0000 [0] */
    int type;
    /* offset = 0x0004 [4] */
    struct Transformer_tNodeInfo* parentPtr;
    /* offset = 0x0008 [8] */
    int numChild;
    /* offset = 0x000c [12] */
    struct Transformer_tNodeInfo* childPtr[5];
    /* offset = 0x0020 [32] */
    Transformer_tTransformNode trans;
    /* offset = 0x008c [140] */
    Transformer_tGeometryNode geom;
    /* offset = 0x00bc [188] */
    Transformer_tAnimInfo anim;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 027A: NAME(65) */
/* BASE TYPE ADDR: 026D: FIELD_LIST(64) */
#pragma pack(push, 1)
/* number of fields = 1, size = 0x0024 [36 bytes] */
struct matrixtdef
{
    /* offset = 0x0000 [0] */
    int m[9];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0288: NAME(66) */
/* BASE TYPE ADDR: 027A: NAME(65) */
typedef struct matrixtdef MATRIX3DT;

/* NAME TYPE ADDR: 02AC: NAME(68) */
/* BASE TYPE ADDR: 0295: FIELD_LIST(67) */
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

/* NAME TYPE ADDR: 02B8: NAME(69) */
/* BASE TYPE ADDR: 02AC: NAME(68) */
typedef struct coorddef LIBCOORD;

/* NAME TYPE ADDR: 033F: NAME(71) */
/* BASE TYPE ADDR: 02C4: FIELD_LIST(70) */
#pragma pack(push, 1)
/* number of fields = 5, size = 0x006c [108 bytes] */
struct Transformer_tTransformNode
{
    /* offset = 0x0000 [0] */
    MATRIX3DT orientMatRelParent;
    /* offset = 0x0024 [36] */
    LIBCOORD translationRelParent;
    /* offset = 0x0030 [48] */
    MATRIX3DT cumulatedOrientMat;
    /* offset = 0x0054 [84] */
    LIBCOORD cumulatedTranslation;
    /* offset = 0x0060 [96] */
    LIBCOORD translationalOffSet;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 035D: NAME(72) */
/* BASE TYPE ADDR: 033F: NAME(71) */
typedef struct Transformer_tTransformNode Transformer_tTransformNode;

/* NAME TYPE ADDR: 0392: NAME(74) */
/* BASE TYPE ADDR: 037B: FIELD_LIST(73) */
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

/* NAME TYPE ADDR: 039D: NAME(75) */
/* BASE TYPE ADDR: 0392: NAME(74) */
typedef struct COORD16 COORD16;

/* NAME TYPE ADDR: 03A8: NAME(76) */
/* BASE TYPE ADDR: 039D: NAME(75) */
typedef COORD16 Transformer_tVertex;

/* NAME TYPE ADDR: 0413: NAME(81) */
/* BASE TYPE ADDR: 03CA: FIELD_LIST(80) */
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

/* NAME TYPE ADDR: 0429: NAME(82) */
/* BASE TYPE ADDR: 0413: NAME(81) */
typedef struct Transformer_tFacet Transformer_tFacet;

/* NAME TYPE ADDR: 04C9: NAME(85) */
/* BASE TYPE ADDR: 0442: FIELD_LIST(84) */
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

/* NAME TYPE ADDR: 04E9: NAME(86) */
/* BASE TYPE ADDR: 04C9: NAME(85) */
typedef struct Transformer_tDrawControlInfo Transformer_tDrawControlInfo;

/* NAME TYPE ADDR: 055B: NAME(88) */
/* BASE TYPE ADDR: 0509: FIELD_LIST(87) */
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

/* NAME TYPE ADDR: 056F: NAME(89) */
/* BASE TYPE ADDR: 055B: NAME(88) */
typedef struct Transformer_tObj Transformer_tObj;

/* NAME TYPE ADDR: 05A6: NAME(93) */
/* BASE TYPE ADDR: 058A: FIELD_LIST(92) */
#pragma pack(push, 1)
/* number of fields = 2, size = 0x0030 [48 bytes] */
struct Transformer_tGeometryNode
{
    /* offset = 0x0000 [0] */
    int numSubObj;
    /* offset = 0x0004 [4] */
    Transformer_tObj* obj[11];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 05C3: NAME(94) */
/* BASE TYPE ADDR: 05A6: NAME(93) */
typedef struct Transformer_tGeometryNode Transformer_tGeometryNode;

/* NAME TYPE ADDR: 060C: NAME(96) */
/* BASE TYPE ADDR: 05E0: FIELD_LIST(95) */
#pragma pack(push, 1)
/* number of fields = 3, size = 0x000c [12 bytes] */
struct Transformer_tAnimInfo
{
    /* offset = 0x0000 [0] */
    Transformer_AnimCallbackFunc func;
    /* offset = 0x0004 [4] */
    void* parameter1;
    /* offset = 0x0008 [8] */
    void* parameter2;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0625: NAME(97) */
/* BASE TYPE ADDR: 060C: NAME(96) */
typedef struct Transformer_tAnimInfo Transformer_tAnimInfo;

/* NAME TYPE ADDR: 068C: NAME(99) */
/* BASE TYPE ADDR: 0248: NAME(60) */
typedef struct Transformer_tNodeInfo Transformer_tNodeInfo;

/* NAME TYPE ADDR: 06EE: NAME(103) */
/* BASE TYPE ADDR: 06AC: FIELD_LIST(102) */
#pragma pack(push, 1)
/* number of fields = 2, size = 0x0008 [8 bytes] */
struct Transformer_tDrawOptimizationInfo
{
    /* offset = 0x0000 [0] */
    int yawOfCameraRelativeToObj;
    /* offset = 0x0004 [4] */
    int pitchOfCameraRelativeToObj;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0713: NAME(104) */
/* BASE TYPE ADDR: 06EE: NAME(103) */
typedef struct Transformer_tDrawOptimizationInfo Transformer_tDrawOptimizationInfo;

/* NAME TYPE ADDR: 0738: NAME(105) */
/* BASE TYPE ADDR: 074E: FIELD_LIST(107) */
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

/* NAME TYPE ADDR: 0768: NAME(108) */
/* BASE TYPE ADDR: 0738: NAME(105) */
typedef struct DRender_tFacet DRender_tFacet;

/* NAME TYPE ADDR: 0795: NAME(111) */
/* BASE TYPE ADDR: 077D: FIELD_LIST(110) */
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

/* NAME TYPE ADDR: 07AB: NAME(112) */
/* BASE TYPE ADDR: 0795: NAME(111) */
typedef struct DRender_tListfacet DRender_tListfacet;

/* NAME TYPE ADDR: 0811: NAME(122) */
/* BASE TYPE ADDR: 07EC: FIELD_LIST(121) */
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

/* NAME TYPE ADDR: 082F: NAME(124) */
/* BASE TYPE ADDR: 081D: FIELD_LIST(123) */
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

/* NAME TYPE ADDR: 083C: NAME(125) */
/* BASE TYPE ADDR: 082F: NAME(124) */
typedef struct scoorddef SCOORD;

/* NAME TYPE ADDR: 086A: NAME(127) */
/* BASE TYPE ADDR: 0846: FIELD_LIST(126) */
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

/* NAME TYPE ADDR: 087A: NAME(128) */
/* BASE TYPE ADDR: 086A: NAME(127) */
typedef struct Draw_tVertex Draw_tVertex;

/* NAME TYPE ADDR: 08EF: NAME(131) */
/* BASE TYPE ADDR: 088E: FIELD_LIST(130) */
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

/* NAME TYPE ADDR: 08FC: NAME(132) */
/* BASE TYPE ADDR: 08EF: NAME(131) */
typedef struct shapetbl SHAPE;

/* NAME TYPE ADDR: 0940: NAME(135) */
/* BASE TYPE ADDR: 090A: FIELD_LIST(134) */
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

/* NAME TYPE ADDR: 0951: NAME(136) */
/* BASE TYPE ADDR: 0940: NAME(135) */
typedef struct Draw_tPixMap Draw_tPixMap;

/* NAME TYPE ADDR: 097D: NAME(139) */
/* BASE TYPE ADDR: 0966: FIELD_LIST(138) */
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

/* NAME TYPE ADDR: 0992: NAME(140) */
/* BASE TYPE ADDR: 097D: NAME(139) */
typedef struct DRender_tTexture DRender_tTexture;

/* NAME TYPE ADDR: 09EF: NAME(142) */
/* BASE TYPE ADDR: 09A7: FIELD_LIST(141) */
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

/* NAME TYPE ADDR: 0A04: NAME(143) */
/* BASE TYPE ADDR: 09EF: NAME(142) */
typedef struct DRender_tFacet3D DRender_tFacet3D;

/* NAME TYPE ADDR: 0A66: NAME(147) */
/* BASE TYPE ADDR: 0A20: FIELD_LIST(146) */
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

/* NAME TYPE ADDR: 0A7C: NAME(148) */
/* BASE TYPE ADDR: 0A66: NAME(147) */
typedef struct DRender_tCalcView DRender_tCalcView;

/* NAME TYPE ADDR: 0AC7: NAME(150) */
/* BASE TYPE ADDR: 0A92: FIELD_LIST(149) */
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

/* NAME TYPE ADDR: 0AD9: NAME(151) */
/* BASE TYPE ADDR: 0AC7: NAME(150) */
typedef struct DRender_tView DRender_tView;

/* Procedure params definition 0 - 07C5: NEAR386 PROC(114) */
/* typedef void (unnamed_proc)(int arg0); */

/* Procedure params definition 1 - 07CA: NEAR386 PROC(115) */
/* typedef Transformer_tNodeInfo* (unnamed_proc)(char* arg0, int arg1, int arg2); */

/* Procedure params definition 2 - 07D1: NEAR386 PROC(116) */
/* typedef Transformer_tNodeInfo* (unnamed_proc)(char* arg0); */

/* Procedure params definition 3 - 07D6: NEAR386 PROC(117) */
/* typedef Transformer_tNodeInfo* (unnamed_proc)(int arg0); */

/* Procedure params definition 4 - 07DE: NEAR386 PROC(119) */
/* typedef void (unnamed_proc)(Transformer_tNodeInfo* arg0, Transformer_tObj* arg1, Transformer_tDrawControlInfo* arg2); */

/* Procedure params definition 5 - 07E5: NEAR386 PROC(120) */
/* typedef Transformer_tNodeInfo* (unnamed_proc)(Transformer_tNodeInfo* arg0, Transformer_AnimCallbackFunc arg1, void* arg2); */

/* Procedure params definition 6 - 0AEF: NEAR386 PROC(153) */
/* typedef DRender_tFacet3D* (unnamed_proc)(LIBCOORD* arg0, DRender_tView* arg1); */

/* Procedure params definition 7 - 0AF8: NEAR386 PROC(154) */
/* typedef void (unnamed_proc)(Transformer_tNodeInfo* arg0, DRender_tView* arg1, int arg2, enum arg3); */

/* Procedure params definition 8 - 0B03: NEAR386 PROC(156) */
/* typedef void (unnamed_proc)(Transformer_tNodeInfo* arg0, DRender_tListfacet* arg1, union arg2); */
