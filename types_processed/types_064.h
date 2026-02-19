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

/* NAME TYPE ADDR: 01F9: NAME(54) */
/* BASE TYPE ADDR: 01F6: NEAR386 PTR(53) */
/* 01F1: NEAR386 PROC(52) */
typedef void (*Sched_tFunctionPt)(void* arg0);

/* NAME TYPE ADDR: 0217: NAME(57) */
/* BASE TYPE ADDR: 0214: NEAR386 PTR(56) */
/* 020E: NEAR386 PROC(55) */
typedef void (*Transformer_AnimCallbackFunc)(void* arg0, void* arg1);

/* NAME TYPE ADDR: 023B: NAME(59) */
/* BASE TYPE ADDR: 0237: BYTE_INDEX ARRAY(58) */
typedef short tAccTable[112];

/* NAME TYPE ADDR: 0248: NAME(60) */
/* BASE TYPE ADDR: 025E: FIELD_LIST(62) */
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

/* NAME TYPE ADDR: 0278: NAME(63) */
/* BASE TYPE ADDR: 0248: NAME(60) */
typedef struct DRender_tFacet DRender_tFacet;

/* NAME TYPE ADDR: 0295: NAME(67) */
/* BASE TYPE ADDR: 0292: NEAR386 PTR(66) */
/* 028D: NEAR386 PROC(65) */
typedef void (*Draw_DrawFacetFunction)(DRender_tFacet* arg0);

/* NAME TYPE ADDR: 02D3: NAME(70) */
/* BASE TYPE ADDR: 02B3: FIELD_LIST(69) */
#pragma pack(push, 1)
/* number of fields = 4, size = 0x0008 [8 bytes] */
struct Draw_tEnviro
{
    /* offset = 0x0000 [0] */
    short cx;
    /* offset = 0x0002 [2] */
    short cy;
    /* offset = 0x0004 [4] */
    short cw;
    /* offset = 0x0006 [6] */
    short ch;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 02E3: NAME(71) */
/* BASE TYPE ADDR: 02D3: NAME(70) */
typedef struct Draw_tEnviro Draw_tEnviro;

/* NAME TYPE ADDR: 030D: NAME(75) */
/* BASE TYPE ADDR: 02FB: FIELD_LIST(74) */
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

/* NAME TYPE ADDR: 031A: NAME(76) */
/* BASE TYPE ADDR: 030D: NAME(75) */
typedef struct scoorddef SCOORD;

/* NAME TYPE ADDR: 034D: NAME(79) */
/* BASE TYPE ADDR: 0328: FIELD_LIST(78) */
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

/* NAME TYPE ADDR: 037D: NAME(81) */
/* BASE TYPE ADDR: 0359: FIELD_LIST(80) */
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

/* NAME TYPE ADDR: 038D: NAME(82) */
/* BASE TYPE ADDR: 037D: NAME(81) */
typedef struct Draw_tVertex Draw_tVertex;

/* NAME TYPE ADDR: 0406: NAME(86) */
/* BASE TYPE ADDR: 03A5: FIELD_LIST(85) */
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

/* NAME TYPE ADDR: 0412: NAME(87) */
/* BASE TYPE ADDR: 0406: NAME(86) */
typedef struct shapetbl SHAPE;

/* NAME TYPE ADDR: 04C0: NAME(91) */
/* BASE TYPE ADDR: 0421: FIELD_LIST(90) */
#pragma pack(push, 1)
/* number of fields = 17, size = 0x0038 [56 bytes] */
struct windowtbl
{
    /* offset = 0x0000 [0] */
    long id;
    /* offset = 0x0004 [4] */
    int width;
    /* offset = 0x0008 [8] */
    int height;
    /* offset = 0x000c [12] */
    int minx;
    /* offset = 0x0010 [16] */
    int miny;
    /* offset = 0x0014 [20] */
    int maxx;
    /* offset = 0x0018 [24] */
    int maxy;
    /* offset = 0x001c [28] */
    unsigned char bpp;
    /* offset = 0x001d [29] */
    unsigned char type;
    /* offset = 0x001e [30] */
    unsigned char ram;
    /* offset = 0x001f [31] */
    unsigned char unused;
    /* offset = 0x0020 [32] */
    SHAPE* shape;
    /* offset = 0x0024 [36] */
    void* zbuffer;
    /* offset = 0x0028 [40] */
    unsigned int rowbytes;
    /* offset = 0x002c [44] */
    unsigned int* rowtbl;
    /* offset = 0x0030 [48] */
    unsigned int* bpptbl;
    /* offset = 0x0034 [52] */
    void* sysptr;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 04CD: NAME(92) */
/* BASE TYPE ADDR: 04C0: NAME(91) */
typedef struct windowtbl WINDOW;

/* NAME TYPE ADDR: 052A: NAME(102) */
/* BASE TYPE ADDR: 04F5: FIELD_LIST(101) */
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

/* NAME TYPE ADDR: 053A: NAME(103) */
/* BASE TYPE ADDR: 052A: NAME(102) */
typedef struct Draw_tPixMap Draw_tPixMap;

/* NAME TYPE ADDR: 0563: NAME(106) */
/* BASE TYPE ADDR: 054D: FIELD_LIST(105) */
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

/* NAME TYPE ADDR: 0577: NAME(107) */
/* BASE TYPE ADDR: 0563: NAME(106) */
typedef struct DRender_tTexture DRender_tTexture;

/* NAME TYPE ADDR: 05CE: NAME(109) */
/* BASE TYPE ADDR: 058B: FIELD_LIST(108) */
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

/* NAME TYPE ADDR: 05E2: NAME(110) */
/* BASE TYPE ADDR: 05CE: NAME(109) */
typedef struct DRender_tFacet3D DRender_tFacet3D;

/* NAME TYPE ADDR: 0635: NAME(121) */
/* BASE TYPE ADDR: 061E: FIELD_LIST(120) */
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

/* NAME TYPE ADDR: 0641: NAME(122) */
/* BASE TYPE ADDR: 0635: NAME(121) */
typedef struct coorddef LIBCOORD;

/* NAME TYPE ADDR: 06DB: NAME(147) */
/* BASE TYPE ADDR: 06BB: FIELD_LIST(146) */
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

/* NAME TYPE ADDR: 06ED: NAME(148) */
/* BASE TYPE ADDR: 06DB: NAME(147) */
typedef struct Draw_tFacet2D Draw_tFacet2D;

/* NAME TYPE ADDR: 0738: NAME(150) */
/* BASE TYPE ADDR: 06FF: FIELD_LIST(149) */
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

/* NAME TYPE ADDR: 074D: NAME(151) */
/* BASE TYPE ADDR: 0738: NAME(150) */
typedef struct DRender_tFacet2D DRender_tFacet2D;

/* NAME TYPE ADDR: 07A5: NAME(159) */
/* BASE TYPE ADDR: 077C: FIELD_LIST(158) */
#pragma pack(push, 1)
/* number of fields = 5, size = 0x0024 [36 bytes] */
struct DRender_t2DTileFacet
{
    /* offset = 0x0000 [0] */
    DRender_tFacet head;
    /* offset = 0x0008 [8] */
    SCOORD pt;
    /* offset = 0x0010 [16] */
    SCOORD hw;
    /* offset = 0x0018 [24] */
    SCOORD uv;
    /* offset = 0x0020 [32] */
    Draw_tPixMap* pmx;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 07BE: NAME(160) */
/* BASE TYPE ADDR: 07A5: NAME(159) */
typedef struct DRender_t2DTileFacet DRender_t2DTileFacet;

/* NAME TYPE ADDR: 080A: NAME(165) */
/* BASE TYPE ADDR: 07E5: FIELD_LIST(164) */
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

/* NAME TYPE ADDR: 0823: NAME(166) */
/* BASE TYPE ADDR: 080A: NAME(165) */
typedef struct DRender_t2DFlatFacet DRender_t2DFlatFacet;

/* NAME TYPE ADDR: 086A: NAME(172) */
/* BASE TYPE ADDR: 084E: FIELD_LIST(171) */
#pragma pack(push, 1)
/* number of fields = 4, size = 0x0004 [4 bytes] */
struct DRender_rgbcolor
{
    /* offset = 0x0000 [0] */
    char a;
    /* offset = 0x0001 [1] */
    char r;
    /* offset = 0x0002 [2] */
    char g;
    /* offset = 0x0003 [3] */
    char b;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 087F: NAME(173) */
/* BASE TYPE ADDR: 086A: NAME(172) */
typedef struct DRender_rgbcolor DRender_rgbcolor;

/* NAME TYPE ADDR: 08DA: NAME(175) */
/* BASE TYPE ADDR: 0894: FIELD_LIST(174) */
#pragma pack(push, 1)
/* number of fields = 10, size = 0x003c [60 bytes] */
struct DRender_tFacetDebug
{
    /* offset = 0x0000 [0] */
    DRender_tFacet head;
    /* offset = 0x0008 [8] */
    Draw_tVertex* v0;
    /* offset = 0x000c [12] */
    Draw_tVertex* v1;
    /* offset = 0x0010 [16] */
    Draw_tVertex* v2;
    /* offset = 0x0014 [20] */
    Draw_tVertex* v3;
    /* offset = 0x0018 [24] */
    SCOORD p0;
    /* offset = 0x0020 [32] */
    SCOORD p1;
    /* offset = 0x0028 [40] */
    SCOORD p2;
    /* offset = 0x0030 [48] */
    SCOORD p3;
    /* offset = 0x0038 [56] */
    DRender_rgbcolor c;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 08F2: NAME(176) */
/* BASE TYPE ADDR: 08DA: NAME(175) */
typedef struct DRender_tFacetDebug DRender_tFacetDebug;

/* NAME TYPE ADDR: 0942: NAME(180) */
/* BASE TYPE ADDR: 0914: FIELD_LIST(179) */
#pragma pack(push, 1)
/* number of fields = 6, size = 0x0011 [17 bytes] */
struct DRender_tFlatLineFacet
{
    /* offset = 0x0000 [0] */
    DRender_tFacet head;
    /* offset = 0x0008 [8] */
    char ci;
    /* offset = 0x0009 [9] */
    short x0;
    /* offset = 0x000b [11] */
    short y0;
    /* offset = 0x000d [13] */
    short x1;
    /* offset = 0x000f [15] */
    short y1;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 095D: NAME(181) */
/* BASE TYPE ADDR: 0942: NAME(180) */
typedef struct DRender_tFlatLineFacet DRender_tFlatLineFacet;

/* NAME TYPE ADDR: 09AA: NAME(185) */
/* BASE TYPE ADDR: 0982: FIELD_LIST(184) */
#pragma pack(push, 1)
/* number of fields = 5, size = 0x0010 [16 bytes] */
struct DRender_tSetClipFacet
{
    /* offset = 0x0000 [0] */
    DRender_tFacet head;
    /* offset = 0x0008 [8] */
    short x0;
    /* offset = 0x000a [10] */
    short y0;
    /* offset = 0x000c [12] */
    short x1;
    /* offset = 0x000e [14] */
    short y1;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 09C4: NAME(186) */
/* BASE TYPE ADDR: 09AA: NAME(185) */
typedef struct DRender_tSetClipFacet DRender_tSetClipFacet;

/* NAME TYPE ADDR: 09FE: NAME(190) */
/* BASE TYPE ADDR: 09E8: FIELD_LIST(189) */
#pragma pack(push, 1)
/* number of fields = 2, size = 0x0009 [9 bytes] */
struct Draw_tFacetCtrlDc
{
    /* offset = 0x0000 [0] */
    DRender_tFacet head;
    /* offset = 0x0008 [8] */
    char dc;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0A14: NAME(191) */
/* BASE TYPE ADDR: 09FE: NAME(190) */
typedef struct Draw_tFacetCtrlDc Draw_tFacetCtrlDc;

/* NAME TYPE ADDR: 0A4B: NAME(195) */
/* BASE TYPE ADDR: 0A34: FIELD_LIST(194) */
#pragma pack(push, 1)
/* number of fields = 2, size = 0x0009 [9 bytes] */
struct Draw_tFacetSetWin
{
    /* offset = 0x0000 [0] */
    DRender_tFacet head;
    /* offset = 0x0008 [8] */
    char win;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0A61: NAME(196) */
/* BASE TYPE ADDR: 0A4B: NAME(195) */
typedef struct Draw_tFacetSetWin Draw_tFacetSetWin;

/* NAME TYPE ADDR: 0A93: NAME(201) */
/* BASE TYPE ADDR: 0A85: FIELD_LIST(200) */
#pragma pack(push, 1)
/* number of fields = 1, size = 0x0024 [36 bytes] */
struct matrixtdef
{
    /* offset = 0x0000 [0] */
    int m[9];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0AA2: NAME(202) */
/* BASE TYPE ADDR: 0A93: NAME(201) */
typedef struct matrixtdef MATRIX3DT;

/* NAME TYPE ADDR: 0AF8: NAME(204) */
/* BASE TYPE ADDR: 0AB0: FIELD_LIST(203) */
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

/* NAME TYPE ADDR: 0B0E: NAME(205) */
/* BASE TYPE ADDR: 0AF8: NAME(204) */
typedef struct DRender_tCalcView DRender_tCalcView;

/* NAME TYPE ADDR: 0B59: NAME(207) */
/* BASE TYPE ADDR: 0B24: FIELD_LIST(206) */
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

/* NAME TYPE ADDR: 0B6B: NAME(208) */
/* BASE TYPE ADDR: 0B59: NAME(207) */
typedef struct DRender_tView DRender_tView;

/* NAME TYPE ADDR: 0BBF: NAME(216) */
/* BASE TYPE ADDR: 0BA7: FIELD_LIST(215) */
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

/* NAME TYPE ADDR: 0BD6: NAME(217) */
/* BASE TYPE ADDR: 0BBF: NAME(216) */
typedef struct DRender_tListfacet DRender_tListfacet;

/* Procedure params definition 0 - 0604: NEAR386 PROC(115) */
/* typedef void (unnamed_proc)(Draw_tContext* arg0); */

/* Procedure params definition 1 - 0609: NEAR386 PROC(116) */
/* typedef void (unnamed_proc)(int arg0, int arg1); */

/* Procedure params definition 2 - 0614: NEAR386 PROC(118) */
/* typedef void (unnamed_proc)(char* arg0); */

/* Procedure params definition 3 - 0658: NEAR386 PROC(126) */
/* typedef void (unnamed_proc)(Draw_tVertex** arg0, int arg1, int arg2); */

/* Procedure params definition 4 - 0668: NEAR386 PROC(130) */
/* typedef void (unnamed_proc)(Draw_tVertex* arg0, int arg1); */

/* Procedure params definition 5 - 0696: NEAR386 PROC(140) */
/* typedef int (unnamed_proc)(SCOORD* arg0, SCOORD* arg1, SCOORD* arg2, SCOORD* arg3); */

/* Procedure params definition 6 - 06A2: NEAR386 PROC(141) */
/* typedef int (unnamed_proc)(Draw_tVertex* arg0, Draw_tVertex* arg1, Draw_tVertex* arg2, Draw_tVertex* arg3); */

/* Procedure params definition 7 - 06AA: NEAR386 PROC(142) */
/* typedef void (unnamed_proc)(DRender_tFacet3D* arg0); */

/* Procedure params definition 8 - 0766: NEAR386 PROC(153) */
/* typedef void (unnamed_proc)(DRender_tFacet2D* arg0); */

/* Procedure params definition 9 - 07DB: NEAR386 PROC(162) */
/* typedef void (unnamed_proc)(DRender_t2DTileFacet* arg0); */

/* Procedure params definition 10 - 0840: NEAR386 PROC(168) */
/* typedef void (unnamed_proc)(DRender_t2DFlatFacet* arg0); */

/* Procedure params definition 11 - 090E: NEAR386 PROC(178) */
/* typedef void (unnamed_proc)(DRender_tFacetDebug* arg0); */

/* Procedure params definition 12 - 097C: NEAR386 PROC(183) */
/* typedef void (unnamed_proc)(DRender_tFlatLineFacet* arg0); */

/* Procedure params definition 13 - 09E2: NEAR386 PROC(188) */
/* typedef void (unnamed_proc)(DRender_tSetClipFacet* arg0); */

/* Procedure params definition 14 - 0A2E: NEAR386 PROC(193) */
/* typedef void (unnamed_proc)(Draw_tFacetCtrlDc* arg0); */

/* Procedure params definition 15 - 0A7B: NEAR386 PROC(198) */
/* typedef void (unnamed_proc)(Draw_tFacetSetWin* arg0); */

/* Procedure params definition 16 - 0B81: NEAR386 PROC(210) */
/* typedef void (unnamed_proc)(DRender_tView* arg0); */

/* Procedure params definition 17 - 0B87: NEAR386 PROC(211) */
/* typedef int (unnamed_proc)(void); */

/* Procedure params definition 18 - 0B8C: NEAR386 PROC(212) */
/* typedef void (unnamed_proc)(int arg0, int* arg1, int* arg2, int* arg3, int* arg4, enum arg5, struct Draw_tEnviro arg6, Draw_tEnviro arg7, wchar_t arg8); */

/* Procedure params definition 19 - 0B9C: NEAR386 PROC(214) */
/* typedef void (unnamed_proc)(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6); */

/* Procedure params definition 20 - 0BED: NEAR386 PROC(218) */
/* typedef DRender_tListfacet (unnamed_proc)(DRender_tView* arg0, DRender_tListfacet arg1); */

/* Procedure params definition 21 - 0BF6: NEAR386 PROC(219) */
/* typedef void (unnamed_proc)(DRender_tView* arg0, DRender_tListfacet arg1); */

/* Procedure params definition 22 - 0BFE: NEAR386 PROC(220) */
/* typedef void (unnamed_proc)(SHAPE* arg0, int arg1, int arg2, int arg3, int arg4); */
