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

/* NAME TYPE ADDR: 01FD: NAME(54) */
/* BASE TYPE ADDR: 0040: SCALAR(7) */
typedef short Draw_tContext;

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

/* NAME TYPE ADDR: 02CB: NAME(63) */
/* BASE TYPE ADDR: 0262: FIELD_LIST(62) */
#pragma pack(push, 1)
/* number of fields = 6, size = 0x0018 [24 bytes] */
struct Sim_tSimSystemVar
{
    /* offset = 0x0000 [0] */
    int restartGame;
    /* offset = 0x0004 [4] */
    int endSimGame;
    /* offset = 0x0008 [8] */
    int pauseSim;
    /* offset = 0x000c [12] */
    int quickPauseSim;
    /* offset = 0x0010 [16] */
    int goalClockTicks;
    /* offset = 0x0014 [20] */
    int currentClockTicks;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 02E0: NAME(64) */
/* BASE TYPE ADDR: 02CB: NAME(63) */
typedef struct Sim_tSimSystemVar Sim_tSimSystemVar;

/* NAME TYPE ADDR: 0328: NAME(67) */
/* BASE TYPE ADDR: 02F8: FIELD_LIST(66) */
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

/* NAME TYPE ADDR: 0343: NAME(68) */
/* BASE TYPE ADDR: 0328: NAME(67) */
typedef struct Sched_tFunctionSchedule Sched_tFunctionSchedule;

/* NAME TYPE ADDR: 0395: NAME(71) */
/* BASE TYPE ADDR: 0362: FIELD_LIST(70) */
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

/* NAME TYPE ADDR: 03A8: NAME(72) */
/* BASE TYPE ADDR: 0395: NAME(71) */
typedef struct Sched_tSchedule Sched_tSchedule;

/* NAME TYPE ADDR: 040E: NAME(75) */
/* BASE TYPE ADDR: 03BE: FIELD_LIST(74) */
#pragma pack(push, 1)
/* number of fields = 5, size = 0x0014 [20 bytes] */
struct Sim_tSimGlobalVar
{
    /* offset = 0x0000 [0] */
    int gameStarted;
    /* offset = 0x0004 [4] */
    int gameTicks;
    /* offset = 0x0008 [8] */
    int time32Hz;
    /* offset = 0x000c [12] */
    Sched_tSchedule* schedule64Hz;
    /* offset = 0x0010 [16] */
    Sched_tSchedule* schedule32Hz;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0423: NAME(76) */
/* BASE TYPE ADDR: 040E: NAME(75) */
typedef struct Sim_tSimGlobalVar Sim_tSimGlobalVar;

/* Procedure params definition 0 - 043C: NEAR386 PROC(78) */
/* typedef void (unnamed_proc)(int arg0); */

/* Procedure params definition 1 - 0441: NEAR386 PROC(79) */
/* typedef int (unnamed_proc)(int arg0); */
