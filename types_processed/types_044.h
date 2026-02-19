/* 001B: SCALAR(4) = char */
/* 0022: SCALAR(5) = signed char */
/* 0030: SCALAR(6) = unsigned char */
/* 0040: SCALAR(7) = short */
/* 0048: SCALAR(8) = unsigned short */
/* 0059: SCALAR(9) = int */
/* 005F: SCALAR(10) = unsigned int */
/* 006E: SCALAR(11) = unsigned long */

/* NAME TYPE ADDR: 0083: NAME(13) */
/* BASE TYPE ADDR: 007E: NEAR386 PROC(12) */
typedef int (Input_tDeviceCall)(unsigned long arg0);

/* NAME TYPE ADDR: 0098: NAME(14) */
/* BASE TYPE ADDR: 0048: SCALAR(8) */
typedef unsigned short wchar_t;

/* NAME TYPE ADDR: 00A3: NAME(15) */
/* BASE TYPE ADDR: 005F: SCALAR(10) */
typedef unsigned int size_t;

/* NAME TYPE ADDR: 00B4: NAME(18) */
/* BASE TYPE ADDR: 00B0: BYTE_INDEX ARRAY(17) */
typedef char* __va_list[1];
/* 00C1: SCALAR(19) = long */

/* NAME TYPE ADDR: 00C8: NAME(20) */
/* BASE TYPE ADDR: 00C1: SCALAR(19) */
typedef long fpos_t;

/* NAME TYPE ADDR: 00D2: NAME(21) */
/* BASE TYPE ADDR: 00C1: SCALAR(19) */
typedef long fpos_t;

/* NAME TYPE ADDR: 00E0: NAME(23) */
/* BASE TYPE ADDR: 00DC: BYTE_INDEX ARRAY(22) */
typedef char* va_list[1];

/* NAME TYPE ADDR: 00EB: NAME(24) */
/* BASE TYPE ADDR: 00AD: NEAR386 PTR(16) */
typedef char* MEMBLOCK;
/* 00F7: SCALAR(25) = void */

/* NAME TYPE ADDR: 0106: NAME(28) */
/* BASE TYPE ADDR: 0103: NEAR386 PTR(27) */
/* 00FE: NEAR386 PROC(26) */
typedef void (*VOIDFN)(void);

/* NAME TYPE ADDR: 0115: NAME(30) */
/* BASE TYPE ADDR: 0110: NEAR386 PROC(29) */
typedef int (INTFN)(void);

/* NAME TYPE ADDR: 011E: NAME(31) */
/* BASE TYPE ADDR: 00F7: SCALAR(25) */
typedef void MVI;

/* NAME TYPE ADDR: 012B: NAME(33) */
/* BASE TYPE ADDR: 0125: NEAR386 PROC(32) */
typedef int (EACHOOKCALLBACKFUNC)(int arg0, int arg1);

/* NAME TYPE ADDR: 0142: NAME(34) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int arg_t;

/* NAME TYPE ADDR: 0150: NAME(36) */
/* BASE TYPE ADDR: 014B: NEAR386 PROC(35) */
typedef void (THREADPROC)(void);

/* NAME TYPE ADDR: 015E: NAME(37) */
/* BASE TYPE ADDR: 0125: NEAR386 PROC(32) */
typedef int (SYSTEMTASK)(int arg0, int arg1);

/* NAME TYPE ADDR: 016C: NAME(38) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int boolean;

/* NAME TYPE ADDR: 0177: NAME(39) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int fixed88;

/* NAME TYPE ADDR: 0182: NAME(40) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int fixed824;

/* NAME TYPE ADDR: 018E: NAME(41) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int fixed248;

/* NAME TYPE ADDR: 019A: NAME(42) */
/* BASE TYPE ADDR: 00C1: SCALAR(19) */
typedef long SDWORD;

/* NAME TYPE ADDR: 01A4: NAME(43) */
/* BASE TYPE ADDR: 006E: SCALAR(11) */
typedef unsigned long DWORD;

/* NAME TYPE ADDR: 01AD: NAME(44) */
/* BASE TYPE ADDR: 0048: SCALAR(8) */
typedef unsigned short WORD;

/* NAME TYPE ADDR: 01B5: NAME(45) */
/* BASE TYPE ADDR: 0040: SCALAR(7) */
typedef short SWORD;

/* NAME TYPE ADDR: 01BE: NAME(46) */
/* BASE TYPE ADDR: 0022: SCALAR(5) */
typedef signed char SBYTE;

/* NAME TYPE ADDR: 01C7: NAME(47) */
/* BASE TYPE ADDR: 0030: SCALAR(6) */
typedef unsigned char UBYTE;

/* NAME TYPE ADDR: 01D0: NAME(48) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int BOOL;

/* NAME TYPE ADDR: 01D8: NAME(49) */
/* BASE TYPE ADDR: 00F7: SCALAR(25) */
typedef void Stm_Chunk;

/* NAME TYPE ADDR: 01E8: NAME(51) */
/* BASE TYPE ADDR: 01E5: NEAR386 PTR(50) */
typedef Stm_Chunk* lpStm_Chunk;

/* NAME TYPE ADDR: 0202: NAME(55) */
/* BASE TYPE ADDR: 01FF: NEAR386 PTR(54) */
/* 01FA: NEAR386 PROC(53) */
typedef void (*Sched_tFunctionPt)(void* arg0);

/* NAME TYPE ADDR: 0217: NAME(56) */
/* BASE TYPE ADDR: 0040: SCALAR(7) */
typedef short Draw_tContext;

/* NAME TYPE ADDR: 0231: NAME(59) */
/* BASE TYPE ADDR: 022E: NEAR386 PTR(58) */
/* 0228: NEAR386 PROC(57) */
typedef void (*Transformer_AnimCallbackFunc)(void* arg0, void* arg1);

/* NAME TYPE ADDR: 0255: NAME(61) */
/* BASE TYPE ADDR: 0251: BYTE_INDEX ARRAY(60) */
typedef short tAccTable[112];

/* NAME TYPE ADDR: 028F: NAME(63) */
/* BASE TYPE ADDR: 0262: FIELD_LIST(62) */
#pragma pack(push, 1)
/* number of fields = 4, size = 0x0004 [4 bytes] */
struct Input_tResults
{
    /* offset = 0x0000 [0] */
    signed char steering;
    /* offset = 0x0001 [1] */
    unsigned char gas;
    /* offset = 0x0002 [2] */
    unsigned char brake;
    /* offset = 0x0003 [3] */
    unsigned char flags;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 02DC: NAME(68) */
/* BASE TYPE ADDR: 02AD: ENUM_LIST(67) */
enum VALIDITY: unsigned char
{
    kINVALID = 0,
    kVALID = 1,
    kPREDICTED = 2,
    kRESIM = 3,
};

/* NAME TYPE ADDR: 032D: NAME(73) */
/* BASE TYPE ADDR: 02F4: FIELD_LIST(72) */
#pragma pack(push, 1)
/* number of fields = 4, size = 0x0024 [36 bytes] */
struct sim_queue
{
    /* offset = 0x0000 [0] */
    Input_tResults Buffer[128][8];
    /* offset = 0x0000 [0] */
    VALIDITY Validity[128][8];
    /* offset = 0x0000 [0] */
    int HeadTime;
    /* offset = 0x0004 [4] */
    int TailTime[8];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 033A: NAME(74) */
/* BASE TYPE ADDR: 032D: NAME(73) */
typedef struct sim_queue SIM_QUEUE;

/* Procedure params definition 0 - 034A: NEAR386 PROC(76) */
/* typedef boolean (unnamed_proc)(int arg0, Input_tResults* arg1); */

/* Procedure params definition 1 - 0350: NEAR386 PROC(77) */
/* typedef void (unnamed_proc)(int arg0, Input_tResults* arg1); */

/* Procedure params definition 2 - 0356: NEAR386 PROC(78) */
/* typedef void (unnamed_proc)(int arg0); */

/* Procedure params definition 3 - 035B: NEAR386 PROC(79) */
/* typedef void (unnamed_proc)(Input_tResults* arg0); */

/* Procedure params definition 4 - 0360: NEAR386 PROC(80) */
/* typedef int (unnamed_proc)(void); */

/* Procedure params definition 5 - 0365: NEAR386 PROC(81) */
/* typedef signed char (unnamed_proc)(void); */

/* Procedure params definition 6 - 036A: NEAR386 PROC(82) */
/* typedef boolean (unnamed_proc)(int arg0); */
