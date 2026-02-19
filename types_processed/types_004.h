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

/* NAME TYPE ADDR: 017B: NAME(42) */
/* BASE TYPE ADDR: 0178: NEAR386 PTR(41) */
/* 0173: NEAR386 PROC(40) */
typedef void (*Sched_tFunctionPt)(void* arg0);

/* NAME TYPE ADDR: 0190: NAME(43) */
/* BASE TYPE ADDR: 0097: SCALAR(16) */
typedef long SDWORD;
/* 019A: SCALAR(44) = unsigned long */

/* NAME TYPE ADDR: 01AA: NAME(45) */
/* BASE TYPE ADDR: 019A: SCALAR(44) */
typedef unsigned long DWORD;

/* NAME TYPE ADDR: 01B3: NAME(46) */
/* BASE TYPE ADDR: 0048: SCALAR(8) */
typedef unsigned short WORD;

/* NAME TYPE ADDR: 01BB: NAME(47) */
/* BASE TYPE ADDR: 0040: SCALAR(7) */
typedef short SWORD;

/* NAME TYPE ADDR: 01C4: NAME(48) */
/* BASE TYPE ADDR: 0022: SCALAR(5) */
typedef signed char SBYTE;

/* NAME TYPE ADDR: 01CD: NAME(49) */
/* BASE TYPE ADDR: 0030: SCALAR(6) */
typedef unsigned char UBYTE;

/* NAME TYPE ADDR: 01D6: NAME(50) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int BOOL;

/* NAME TYPE ADDR: 01DE: NAME(51) */
/* BASE TYPE ADDR: 00CD: SCALAR(22) */
typedef void Stm_Chunk;

/* NAME TYPE ADDR: 01EE: NAME(53) */
/* BASE TYPE ADDR: 01EB: NEAR386 PTR(52) */
typedef Stm_Chunk* lpStm_Chunk;

/* NAME TYPE ADDR: 0239: NAME(55) */
/* BASE TYPE ADDR: 01FD: FIELD_LIST(54) */
#pragma pack(push, 1)
/* number of fields = 5, size = 0x0008 [8 bytes] */
struct Stm_AnimateInst
{
    /* offset = 0x0000 [0] */
    WORD size;
    /* offset = 0x0002 [2] */
    UBYTE type;
    /* offset = 0x0003 [3] */
    UBYTE objectIndex;
    /* offset = 0x0004 [4] */
    WORD count;
    /* offset = 0x0006 [6] */
    WORD interval;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 024C: NAME(56) */
/* BASE TYPE ADDR: 0239: NAME(55) */
typedef struct Stm_AnimateInst Stm_AnimateInst;

/* NAME TYPE ADDR: 02A9: NAME(59) */
/* BASE TYPE ADDR: 0262: FIELD_LIST(58) */
#pragma pack(push, 1)
/* number of fields = 6, size = 0x0018 [24 bytes] */
struct Anim_tInstance
{
    /* offset = 0x0000 [0] */
    Stm_AnimateInst* inst;
    /* offset = 0x0004 [4] */
    int baseTicks;
    /* offset = 0x0008 [8] */
    int baseFrame;
    /* offset = 0x000c [12] */
    int type;
    /* offset = 0x0010 [16] */
    int flags;
    /* offset = 0x0014 [20] */
    int yawAngle;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 02F5: NAME(68) */
/* BASE TYPE ADDR: 02DE: FIELD_LIST(67) */
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

/* NAME TYPE ADDR: 0301: NAME(69) */
/* BASE TYPE ADDR: 02F5: NAME(68) */
typedef struct coorddef LIBCOORD;

/* NAME TYPE ADDR: 0321: NAME(73) */
/* BASE TYPE ADDR: 0314: FIELD_LIST(72) */
#pragma pack(push, 1)
/* number of fields = 1, size = 0x0024 [36 bytes] */
struct matrixtdef
{
    /* offset = 0x0000 [0] */
    int m[9];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 032F: NAME(74) */
/* BASE TYPE ADDR: 0321: NAME(73) */
typedef struct matrixtdef MATRIX3DT;

/* NAME TYPE ADDR: 0377: NAME(78) */
/* BASE TYPE ADDR: 0348: FIELD_LIST(77) */
#pragma pack(push, 1)
/* number of fields = 7, size = 0x0014 [20 bytes] */
struct Stm_AnimateFrame
{
    /* offset = 0x0000 [0] */
    SDWORD x;
    /* offset = 0x0004 [4] */
    SDWORD y;
    /* offset = 0x0008 [8] */
    SDWORD z;
    /* offset = 0x000c [12] */
    SWORD qx;
    /* offset = 0x000e [14] */
    SWORD qy;
    /* offset = 0x0010 [16] */
    SWORD qz;
    /* offset = 0x0012 [18] */
    SWORD qw;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 038B: NAME(79) */
/* BASE TYPE ADDR: 0377: NAME(78) */
typedef struct Stm_AnimateFrame Stm_AnimateFrame;

/* NAME TYPE ADDR: 03BE: NAME(82) */
/* BASE TYPE ADDR: 03A2: FIELD_LIST(81) */
#pragma pack(push, 1)
/* number of fields = 4, size = 0x0008 [8 bytes] */
struct tQuat
{
    /* offset = 0x0000 [0] */
    short x;
    /* offset = 0x0002 [2] */
    short y;
    /* offset = 0x0004 [4] */
    short z;
    /* offset = 0x0006 [6] */
    short w;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 03C7: NAME(83) */
/* BASE TYPE ADDR: 03BE: NAME(82) */
typedef struct tQuat Quatern_quat;

/* Procedure params definition 0 - 02C3: NEAR386 PROC(62) */
/* typedef int (unnamed_proc)(char* arg0); */

/* Procedure params definition 1 - 02CC: NEAR386 PROC(64) */
/* typedef int (unnamed_proc)(void); */

/* Procedure params definition 2 - 02D1: NEAR386 PROC(65) */
/* typedef int (unnamed_proc)(int arg0); */

/* Procedure params definition 3 - 02D6: NEAR386 PROC(66) */
/* typedef void (unnamed_proc)(int arg0, int arg1, int arg2, int arg3); */

/* Procedure params definition 4 - 033F: NEAR386 PROC(76) */
/* typedef int (unnamed_proc)(Stm_AnimateInst* arg0, int arg1, int arg2, LIBCOORD* arg3, MATRIX3DT* arg4); */

/* Procedure params definition 5 - 03DA: NEAR386 PROC(85) */
/* typedef void (unnamed_proc)(int arg0, int* arg1, int* arg2); */

/* Procedure params definition 6 - 03E1: NEAR386 PROC(86) */
/* typedef void (unnamed_proc)(Stm_AnimateInst* arg0, int arg1, int arg2, LIBCOORD* arg3, MATRIX3DT* arg4); */

/* Procedure params definition 7 - 03EA: NEAR386 PROC(87) */
/* typedef int (unnamed_proc)(int arg0, int arg1, int arg2, LIBCOORD* arg3, MATRIX3DT* arg4); */

/* Procedure params definition 8 - 03F3: NEAR386 PROC(88) */
/* typedef int (unnamed_proc)(int arg0, LIBCOORD* arg1, MATRIX3DT* arg2); */
