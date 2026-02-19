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

/* NAME TYPE ADDR: 024D: NAME(61) */
/* BASE TYPE ADDR: 0248: NEAR386 PROC(60) */
typedef int (Input_tDeviceCall)(unsigned long arg0);

/* NAME TYPE ADDR: 0262: NAME(62) */
/* BASE TYPE ADDR: 0278: FIELD_LIST(64) */
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

/* NAME TYPE ADDR: 0292: NAME(65) */
/* BASE TYPE ADDR: 0262: NAME(62) */
typedef struct DRender_tFacet DRender_tFacet;

/* NAME TYPE ADDR: 02BF: NAME(68) */
/* BASE TYPE ADDR: 02A7: FIELD_LIST(67) */
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

/* NAME TYPE ADDR: 02D5: NAME(69) */
/* BASE TYPE ADDR: 02BF: NAME(68) */
typedef struct DRender_tListfacet DRender_tListfacet;

/* NAME TYPE ADDR: 0302: NAME(71) */
/* BASE TYPE ADDR: 02EB: FIELD_LIST(70) */
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

/* NAME TYPE ADDR: 030E: NAME(72) */
/* BASE TYPE ADDR: 0302: NAME(71) */
typedef struct coorddef LIBCOORD;

/* NAME TYPE ADDR: 032B: NAME(75) */
/* BASE TYPE ADDR: 031E: FIELD_LIST(74) */
#pragma pack(push, 1)
/* number of fields = 1, size = 0x0024 [36 bytes] */
struct matrixtdef
{
    /* offset = 0x0000 [0] */
    int m[9];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0339: NAME(76) */
/* BASE TYPE ADDR: 032B: NAME(75) */
typedef struct matrixtdef MATRIX3DT;

/* NAME TYPE ADDR: 038C: NAME(78) */
/* BASE TYPE ADDR: 0346: FIELD_LIST(77) */
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

/* NAME TYPE ADDR: 03A1: NAME(79) */
/* BASE TYPE ADDR: 038C: NAME(78) */
typedef struct DRender_tCalcView DRender_tCalcView;

/* NAME TYPE ADDR: 03EA: NAME(81) */
/* BASE TYPE ADDR: 03B6: FIELD_LIST(80) */
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

/* NAME TYPE ADDR: 03FB: NAME(82) */
/* BASE TYPE ADDR: 03EA: NAME(81) */
typedef struct DRender_tView DRender_tView;

/* Procedure params definition 0 - 040F: NEAR386 PROC(84) */
/* typedef int (unnamed_proc)(char** arg0, int arg1); */

/* Procedure params definition 1 - 0415: NEAR386 PROC(85) */
/* typedef DRender_tListfacet (unnamed_proc)(void); */

/* Procedure params definition 2 - 041A: NEAR386 PROC(86) */
/* typedef DRender_tListfacet (unnamed_proc)(DRender_tFacet* arg0); */

/* Procedure params definition 3 - 041F: NEAR386 PROC(87) */
/* typedef DRender_tListfacet (unnamed_proc)(DRender_tListfacet arg0, DRender_tListfacet arg1); */

/* Procedure params definition 4 - 0428: NEAR386 PROC(89) */
/* typedef int (unnamed_proc)(DRender_tFacet** arg0, int arg1); */

/* Procedure params definition 5 - 042E: NEAR386 PROC(90) */
/* typedef void (unnamed_proc)(int arg0, int arg1, int arg2, int arg3, int arg4); */

/* Procedure params definition 6 - 0437: NEAR386 PROC(91) */
/* typedef void (unnamed_proc)(int arg0); */
