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

/* NAME TYPE ADDR: 01E9: NAME(53) */
/* BASE TYPE ADDR: 01B9: FIELD_LIST(52) */
#pragma pack(push, 1)
/* number of fields = 4, size = 0x0010 [16 bytes] */
struct Sched_tFunctionSchedule
{
    /* offset = 0x0000 [0] */
    int priority;
    /* offset = 0x0004 [4] */
    * function;
    /* offset = 0x0008 [8] */
    void* var1;
    /* offset = 0x000c [12] */
    void* var2;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0204: NAME(54) */
/* BASE TYPE ADDR: 01E9: NAME(53) */
typedef struct Sched_tFunctionSchedule Sched_tFunctionSchedule;

/* NAME TYPE ADDR: 0256: NAME(57) */
/* BASE TYPE ADDR: 0223: FIELD_LIST(56) */
#pragma pack(push, 1)
/* number of fields = 3, size = 0x0018 [24 bytes] */
struct Sched_tSchedule
{
    /* offset = 0x0000 [0] */
    int maxNumFunctions;
    /* offset = 0x0004 [4] */
    int numFunctions;
    /* offset = 0x0008 [8] */
    Sched_tFunctionSchedule func[1];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0269: NAME(58) */
/* BASE TYPE ADDR: 0256: NAME(57) */
typedef struct Sched_tSchedule Sched_tSchedule;

/* Procedure params definition 0 - 01AB: NEAR386 PROC(50) */
/* typedef int (unnamed_proc)(int arg0, int arg1, int arg2, int arg3, int* arg4, int* arg5, int* arg6); */

/* Procedure params definition 1 - 027F: NEAR386 PROC(60) */
/* typedef Sched_tSchedule* (unnamed_proc)(char* arg0, int arg1); */

/* Procedure params definition 2 - 0285: NEAR386 PROC(61) */
/* typedef void (unnamed_proc)(Sched_tSchedule* arg0); */

/* Procedure params definition 3 - 028A: NEAR386 PROC(62) */
/* typedef void (unnamed_proc)(Sched_tSchedule* arg0, Sched_tFunctionPt arg1, void* arg2, int arg3); */

/* Procedure params definition 4 - 0292: NEAR386 PROC(63) */
/* typedef void (unnamed_proc)(Sched_tSchedule* arg0, Sched_tFunctionPt arg1, void* arg2); */
