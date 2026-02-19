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
/* BASE TYPE ADDR: 00BE: SCALAR(20) */
typedef void Stm_Chunk;

/* NAME TYPE ADDR: 01DF: NAME(50) */
/* BASE TYPE ADDR: 01DC: NEAR386 PTR(49) */
typedef Stm_Chunk* lpStm_Chunk;

/* NAME TYPE ADDR: 0218: NAME(55) */
/* BASE TYPE ADDR: 0201: FIELD_LIST(54) */
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

/* NAME TYPE ADDR: 0224: NAME(56) */
/* BASE TYPE ADDR: 0218: NAME(55) */
typedef struct coorddef LIBCOORD;

/* NAME TYPE ADDR: 0241: NAME(59) */
/* BASE TYPE ADDR: 0234: FIELD_LIST(58) */
#pragma pack(push, 1)
/* number of fields = 1, size = 0x0024 [36 bytes] */
struct matrixtdef
{
    /* offset = 0x0000 [0] */
    int m[9];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 024F: NAME(60) */
/* BASE TYPE ADDR: 0241: NAME(59) */
typedef struct matrixtdef MATRIX3DT;

/* NAME TYPE ADDR: 02A2: NAME(62) */
/* BASE TYPE ADDR: 025C: FIELD_LIST(61) */
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

/* NAME TYPE ADDR: 02B7: NAME(63) */
/* BASE TYPE ADDR: 02A2: NAME(62) */
typedef struct DRender_tCalcView DRender_tCalcView;

/* NAME TYPE ADDR: 0300: NAME(65) */
/* BASE TYPE ADDR: 02CC: FIELD_LIST(64) */
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

/* NAME TYPE ADDR: 0311: NAME(66) */
/* BASE TYPE ADDR: 0300: NAME(65) */
typedef struct DRender_tView DRender_tView;

/* NAME TYPE ADDR: 035C: NAME(73) */
/* BASE TYPE ADDR: 0337: FIELD_LIST(72) */
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

/* NAME TYPE ADDR: 037A: NAME(75) */
/* BASE TYPE ADDR: 0368: FIELD_LIST(74) */
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

/* NAME TYPE ADDR: 0387: NAME(76) */
/* BASE TYPE ADDR: 037A: NAME(75) */
typedef struct scoorddef SCOORD;

/* NAME TYPE ADDR: 03B5: NAME(78) */
/* BASE TYPE ADDR: 0391: FIELD_LIST(77) */
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

/* NAME TYPE ADDR: 03C5: NAME(79) */
/* BASE TYPE ADDR: 03B5: NAME(78) */
typedef struct Draw_tVertex Draw_tVertex;

/* NAME TYPE ADDR: 03F8: NAME(83) */
/* BASE TYPE ADDR: 03E1: FIELD_LIST(82) */
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

/* NAME TYPE ADDR: 0403: NAME(84) */
/* BASE TYPE ADDR: 03F8: NAME(83) */
typedef struct COORD16 COORD16;

/* Procedure params definition 0 - 01EE: NEAR386 PROC(51) */
/* typedef void (unnamed_proc)(int arg0); */

/* Procedure params definition 1 - 01F3: NEAR386 PROC(52) */
/* typedef int (unnamed_proc)(void); */

/* Procedure params definition 2 - 01F8: NEAR386 PROC(53) */
/* typedef void (unnamed_proc)(int arg0, int arg1, int arg2, int arg3, int arg4); */

/* Procedure params definition 3 - 0325: NEAR386 PROC(68) */
/* typedef void (unnamed_proc)(DRender_tView* arg0); */

/* Procedure params definition 4 - 0330: NEAR386 PROC(71) */
/* typedef void (unnamed_proc)(LIBCOORD* arg0, MATRIX3DT* arg1, LIBCOORD* arg2); */

/* Procedure params definition 5 - 03D8: NEAR386 PROC(81) */
/* typedef void (unnamed_proc)(MATRIX3DT* arg0, LIBCOORD* arg1, int arg2, LIBCOORD* arg3, Draw_tVertex* arg4); */

/* Procedure params definition 6 - 0411: NEAR386 PROC(86) */
/* typedef void (unnamed_proc)(MATRIX3DT* arg0, LIBCOORD* arg1, int arg2, COORD16* arg3, Draw_tVertex* arg4); */
