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

/* NAME TYPE ADDR: 0178: NAME(41) */
/* BASE TYPE ADDR: 0174: BYTE_INDEX ARRAY(40) */
typedef char grid_t[12][4];

/* NAME TYPE ADDR: 02E3: NAME(47) */
/* BASE TYPE ADDR: 0192: FIELD_LIST(46) */
#pragma pack(push, 1)
/* number of fields = 17, size = 0x00e4 [228 bytes] */
struct personality_t
{
    /* offset = 0x0000 [0] */
    char letter;
    /* offset = 0x0001 [1] */
    char Pad1;
    /* offset = 0x0002 [2] */
    char Pad2;
    /* offset = 0x0003 [3] */
    char Pad3;
    /* offset = 0x0004 [4] */
    int OpponentGlue[21];
    /* offset = 0x0058 [88] */
    int AccOpponentGlue[21];
    /* offset = 0x00ac [172] */
    int opp_persSpeedAdj;
    /* offset = 0x00b0 [176] */
    int opp_persHandlingFactor;
    /* offset = 0x00b4 [180] */
    int opp_blockLookBehind;
    /* offset = 0x00b8 [184] */
    int opp_blockMinBlockDist;
    /* offset = 0x00bc [188] */
    int opp_maxLaneChangeSpeeds;
    /* offset = 0x00c0 [192] */
    int opp_laneChangeSpeeds;
    /* offset = 0x00c4 [196] */
    int opp_oncomingLookAhead;
    /* offset = 0x00c8 [200] */
    int opp_laneSlack[4];
    /* offset = 0x00d8 [216] */
    int opp_slackChangeProb;
    /* offset = 0x00dc [220] */
    int opp_psychoActivationHitCount;
    /* offset = 0x00e0 [224] */
    int opp_psychoTime;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 02F4: NAME(48) */
/* BASE TYPE ADDR: 02E3: NAME(47) */
typedef struct personality_t personality_t;

/* NAME TYPE ADDR: 0309: NAME(50) */
/* BASE TYPE ADDR: 0305: BYTE_INDEX ARRAY(49) */
typedef personality_t personalityList_t[13];

/* Procedure params definition 0 - 0334: NEAR386 PROC(57) */
/* typedef char* (unnamed_proc)(personality_t* arg0); */

/* Procedure params definition 1 - 0339: NEAR386 PROC(58) */
/* typedef void (unnamed_proc)(); */

/* Procedure params definition 2 - 033D: NEAR386 PROC(59) */
/* typedef int (unnamed_proc)(int arg0, int arg1); */

/* Procedure params definition 3 - 0343: NEAR386 PROC(60) */
/* typedef personality_t* (unnamed_proc)(int arg0); */
