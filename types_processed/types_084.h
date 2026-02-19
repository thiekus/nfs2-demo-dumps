/* 001B: SCALAR(4) = char */
/* 0022: SCALAR(5) = signed char */
/* 0030: SCALAR(6) = unsigned char */
/* 0040: SCALAR(7) = short */
/* 0048: SCALAR(8) = unsigned short */
/* 0059: SCALAR(9) = int */
/* 005F: SCALAR(10) = unsigned int */
/* 006E: SCALAR(11) = void */

/* NAME TYPE ADDR: 007A: NAME(13) */
/* BASE TYPE ADDR: 0075: NEAR386 PROC(12) */
typedef void (THREADPROC)(void);

/* NAME TYPE ADDR: 008E: NAME(15) */
/* BASE TYPE ADDR: 0088: NEAR386 PROC(14) */
typedef int (SYSTEMTASK)(int arg0, int arg1);

/* NAME TYPE ADDR: 009C: NAME(16) */
/* BASE TYPE ADDR: 0048: SCALAR(8) */
typedef unsigned short wchar_t;

/* NAME TYPE ADDR: 00A7: NAME(17) */
/* BASE TYPE ADDR: 005F: SCALAR(10) */
typedef unsigned int size_t;

/* NAME TYPE ADDR: 00B8: NAME(20) */
/* BASE TYPE ADDR: 00B4: BYTE_INDEX ARRAY(19) */
typedef char* __va_list[1];
/* 00C5: SCALAR(21) = long */

/* NAME TYPE ADDR: 00CC: NAME(22) */
/* BASE TYPE ADDR: 00C5: SCALAR(21) */
typedef long fpos_t;

/* NAME TYPE ADDR: 00D6: NAME(23) */
/* BASE TYPE ADDR: 00C5: SCALAR(21) */
typedef long fpos_t;

/* NAME TYPE ADDR: 00E4: NAME(25) */
/* BASE TYPE ADDR: 00E0: BYTE_INDEX ARRAY(24) */
typedef char* va_list[1];

/* NAME TYPE ADDR: 00EF: NAME(26) */
/* BASE TYPE ADDR: 00B1: NEAR386 PTR(18) */
typedef char* MEMBLOCK;

/* NAME TYPE ADDR: 0103: NAME(29) */
/* BASE TYPE ADDR: 0100: NEAR386 PTR(28) */
/* 00FB: NEAR386 PROC(27) */
typedef void (*VOIDFN)(void);

/* NAME TYPE ADDR: 0112: NAME(31) */
/* BASE TYPE ADDR: 010D: NEAR386 PROC(30) */
typedef int (INTFN)(void);

/* NAME TYPE ADDR: 011B: NAME(32) */
/* BASE TYPE ADDR: 006E: SCALAR(11) */
typedef void MVI;

/* NAME TYPE ADDR: 0122: NAME(33) */
/* BASE TYPE ADDR: 0088: NEAR386 PROC(14) */
typedef int (EACHOOKCALLBACKFUNC)(int arg0, int arg1);

/* NAME TYPE ADDR: 0139: NAME(34) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int arg_t;

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

/* NAME TYPE ADDR: 020B: NAME(41) */
/* BASE TYPE ADDR: 0174: FIELD_LIST(40) */
#pragma pack(push, 1)
/* number of fields = 11, size = 0x000b [11 bytes] */
struct tCAR_DATA
{
    /* offset = 0x0000 [0] */
    char CarType;
    /* offset = 0x0001 [1] */
    char Trany;
    /* offset = 0x0002 [2] */
    char Color;
    /* offset = 0x0003 [3] */
    char RampSteering;
    /* offset = 0x0004 [4] */
    char RampGas;
    /* offset = 0x0005 [5] */
    char RampBrake;
    /* offset = 0x0006 [6] */
    char FrontDownForce;
    /* offset = 0x0007 [7] */
    char RearDownForce;
    /* offset = 0x0008 [8] */
    char Steering;
    /* offset = 0x0009 [9] */
    char BrakeBias;
    /* offset = 0x000a [10] */
    char GearRatios;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 025E: NAME(43) */
/* BASE TYPE ADDR: 0218: FIELD_LIST(42) */
#pragma pack(push, 1)
/* number of fields = 5, size = 0x001a [26 bytes] */
struct tCOM_PLAYER_DATA
{
    /* offset = 0x0000 [0] */
    char PKTINDEX;
    /* offset = 0x0001 [1] */
    int playerIndex;
    /* offset = 0x0005 [5] */
    char readyToRace;
    /* offset = 0x0006 [6] */
    char playerName[9];
    /* offset = 0x000f [15] */
    tCAR_DATA ci;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 02DD: NAME(46) */
/* BASE TYPE ADDR: 0276: FIELD_LIST(45) */
#pragma pack(push, 1)
/* number of fields = 9, size = 0x000a [10 bytes] */
struct tCOM_GAME_DATA
{
    /* offset = 0x0000 [0] */
    char PKTINDEX;
    /* offset = 0x0001 [1] */
    char raceType;
    /* offset = 0x0002 [2] */
    char style;
    /* offset = 0x0003 [3] */
    char track;
    /* offset = 0x0004 [4] */
    char laps;
    /* offset = 0x0005 [5] */
    char lapind;
    /* offset = 0x0006 [6] */
    char oppCar;
    /* offset = 0x0007 [7] */
    char traffic;
    /* offset = 0x0008 [8] */
    short randomSeed;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 02F9: NAME(49) */
/* BASE TYPE ADDR: 030B: FIELD_LIST(51) */
#pragma pack(push, 1)
/* number of fields = 1, size = 0x0004 [4 bytes] */
struct eacelement
{
    /* offset = 0x0000 [0] */
    struct eacelement* link;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 031B: NAME(52) */
/* BASE TYPE ADDR: 02F9: NAME(49) */
typedef struct eacelement EACELEMENT;

/* NAME TYPE ADDR: 0331: NAME(54) */
/* BASE TYPE ADDR: 0329: FIELD_LIST(53) */
#pragma pack(push, 1)
/* number of fields = 0, size = 0x0000 [0 bytes] */
struct conntbl
{
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0342: NAME(57) */
/* BASE TYPE ADDR: 0387: FIELD_LIST(66) */
#pragma pack(push, 1)
/* number of fields = 12, size = 0x0030 [48 bytes] */
struct pktconn
{
    /* offset = 0x0000 [0] */
    EACELEMENT qelem;
    /* offset = 0x0004 [4] */
    int active;
    /* offset = 0x0008 [8] */
    unsigned int opentype;
    /* offset = 0x000c [12] */
    struct conntbl* connvect;
    /* offset = 0x0010 [16] */
    void* packetdata;
    /* offset = 0x0014 [20] */
    CONNECT_FUNC* userabort;
    /* offset = 0x0018 [24] */
    CONNECT_FUNC* connclosed;
    /* offset = 0x001c [28] */
    CONNECT_FUNC* conntimeout;
    /* offset = 0x0020 [32] */
    TRANSFER_FUNC* receive;
    /* offset = 0x0024 [36] */
    unsigned int t_ack;
    /* offset = 0x0028 [40] */
    unsigned int t_nak;
    /* offset = 0x002c [44] */
    unsigned int t_resend;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0356: NAME(60) */
/* BASE TYPE ADDR: 0351: NEAR386 PROC(59) */
typedef int (CONNECT_FUNC)(struct pktconn* arg0);

/* NAME TYPE ADDR: 0373: NAME(64) */
/* BASE TYPE ADDR: 036C: NEAR386 PROC(63) */
typedef int (TRANSFER_FUNC)(struct pktconn* arg0, unsigned char* arg1, unsigned int arg2);

/* NAME TYPE ADDR: 041B: NAME(67) */
/* BASE TYPE ADDR: 0342: NAME(57) */
typedef struct pktconn PKTCONN;

/* Procedure params definition 0 - 02EF: NEAR386 PROC(47) */
/* typedef int (unnamed_proc)(int arg0); */

/* Procedure params definition 1 - 02F4: NEAR386 PROC(48) */
/* typedef int (unnamed_proc)(void); */

/* Procedure params definition 2 - 0429: NEAR386 PROC(69) */
/* typedef void (unnamed_proc)(PKTCONN* arg0, unsigned char* arg1, unsigned int arg2); */
