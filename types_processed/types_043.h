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
/* 00D7: SCALAR(24) = unsigned long */

/* NAME TYPE ADDR: 00EC: NAME(26) */
/* BASE TYPE ADDR: 00E7: NEAR386 PROC(25) */
typedef int (Input_tDeviceCall)(unsigned long arg0);

/* NAME TYPE ADDR: 0106: NAME(28) */
/* BASE TYPE ADDR: 0101: NEAR386 PROC(27) */
typedef void (THREADPROC)(void);

/* NAME TYPE ADDR: 011A: NAME(30) */
/* BASE TYPE ADDR: 0114: NEAR386 PROC(29) */
typedef int (SYSTEMTASK)(int arg0, int arg1);

/* NAME TYPE ADDR: 012C: NAME(32) */
/* BASE TYPE ADDR: 0128: BYTE_INDEX ARRAY(31) */
typedef char* va_list[1];

/* NAME TYPE ADDR: 013C: NAME(34) */
/* BASE TYPE ADDR: 0137: NEAR386 PROC(33) */
typedef int (INTFN)(void);

/* NAME TYPE ADDR: 0145: NAME(35) */
/* BASE TYPE ADDR: 00BE: SCALAR(20) */
typedef void MVI;

/* NAME TYPE ADDR: 014C: NAME(36) */
/* BASE TYPE ADDR: 0114: NEAR386 PROC(29) */
typedef int (EACHOOKCALLBACKFUNC)(int arg0, int arg1);

/* NAME TYPE ADDR: 0163: NAME(37) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int arg_t;

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
/* BASE TYPE ADDR: 0040: SCALAR(7) */
typedef short Draw_tContext;

/* NAME TYPE ADDR: 01AB: NAME(43) */
/* BASE TYPE ADDR: 0097: SCALAR(16) */
typedef long SDWORD;

/* NAME TYPE ADDR: 01B5: NAME(44) */
/* BASE TYPE ADDR: 00D7: SCALAR(24) */
typedef unsigned long DWORD;

/* NAME TYPE ADDR: 01BE: NAME(45) */
/* BASE TYPE ADDR: 0048: SCALAR(8) */
typedef unsigned short WORD;

/* NAME TYPE ADDR: 01C6: NAME(46) */
/* BASE TYPE ADDR: 0040: SCALAR(7) */
typedef short SWORD;

/* NAME TYPE ADDR: 01CF: NAME(47) */
/* BASE TYPE ADDR: 0022: SCALAR(5) */
typedef signed char SBYTE;

/* NAME TYPE ADDR: 01D8: NAME(48) */
/* BASE TYPE ADDR: 0030: SCALAR(6) */
typedef unsigned char UBYTE;

/* NAME TYPE ADDR: 01E1: NAME(49) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int BOOL;

/* NAME TYPE ADDR: 01E9: NAME(50) */
/* BASE TYPE ADDR: 00BE: SCALAR(20) */
typedef void Stm_Chunk;

/* NAME TYPE ADDR: 01F9: NAME(52) */
/* BASE TYPE ADDR: 01F6: NEAR386 PTR(51) */
typedef Stm_Chunk* lpStm_Chunk;

/* NAME TYPE ADDR: 0213: NAME(56) */
/* BASE TYPE ADDR: 0210: NEAR386 PTR(55) */
/* 020B: NEAR386 PROC(54) */
typedef void (*Sched_tFunctionPt)(void* arg0);

/* NAME TYPE ADDR: 0231: NAME(59) */
/* BASE TYPE ADDR: 022E: NEAR386 PTR(58) */
/* 0228: NEAR386 PROC(57) */
typedef void (*Transformer_AnimCallbackFunc)(void* arg0, void* arg1);

/* NAME TYPE ADDR: 0255: NAME(61) */
/* BASE TYPE ADDR: 0251: BYTE_INDEX ARRAY(60) */
typedef short tAccTable[112];

/* NAME TYPE ADDR: 028E: NAME(63) */
/* BASE TYPE ADDR: 0262: ENUM_LIST(62) */
enum tPAUSE_ACTION: unsigned char
{
    kPAUSE = 0,
    kUNPAUSE = 1,
    kRESTART = 2,
    kQUIT = 3,
};

/* NAME TYPE ADDR: 02CE: NAME(65) */
/* BASE TYPE ADDR: 029F: FIELD_LIST(64) */
#pragma pack(push, 1)
/* number of fields = 3, size = 0x0006 [6 bytes] */
struct tPAUSE_PKT
{
    /* offset = 0x0000 [0] */
    char PKTINDEX;
    /* offset = 0x0001 [1] */
    tPAUSE_ACTION action;
    /* offset = 0x0002 [2] */
    unsigned int TickToPauseOn;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 02E1: NAME(67) */
/* BASE TYPE ADDR: 02F3: FIELD_LIST(69) */
#pragma pack(push, 1)
/* number of fields = 1, size = 0x0004 [4 bytes] */
struct eacelement
{
    /* offset = 0x0000 [0] */
    struct eacelement* link;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0303: NAME(70) */
/* BASE TYPE ADDR: 02E1: NAME(67) */
typedef struct eacelement EACELEMENT;

/* NAME TYPE ADDR: 0319: NAME(72) */
/* BASE TYPE ADDR: 0311: FIELD_LIST(71) */
#pragma pack(push, 1)
/* number of fields = 0, size = 0x0000 [0 bytes] */
struct conntbl
{
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0327: NAME(74) */
/* BASE TYPE ADDR: 036C: FIELD_LIST(83) */
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

/* NAME TYPE ADDR: 033B: NAME(77) */
/* BASE TYPE ADDR: 0336: NEAR386 PROC(76) */
typedef int (CONNECT_FUNC)(struct pktconn* arg0);

/* NAME TYPE ADDR: 0358: NAME(81) */
/* BASE TYPE ADDR: 0351: NEAR386 PROC(80) */
typedef int (TRANSFER_FUNC)(struct pktconn* arg0, unsigned char* arg1, unsigned int arg2);

/* NAME TYPE ADDR: 0400: NAME(84) */
/* BASE TYPE ADDR: 0327: NAME(74) */
typedef struct pktconn PKTCONN;

/* NAME TYPE ADDR: 043C: NAME(91) */
/* BASE TYPE ADDR: 0420: FIELD_LIST(90) */
#pragma pack(push, 1)
/* number of fields = 2, size = 0x0063 [99 bytes] */
struct tGAME_SETUP_PKT
{
    /* offset = 0x0000 [0] */
    char PKTINDEX;
    /* offset = 0x0001 [1] */
    char data[98];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 04E4: NAME(93) */
/* BASE TYPE ADDR: 044F: FIELD_LIST(92) */
#pragma pack(push, 1)
/* number of fields = 10, size = 0x0028 [40 bytes] */
struct GameSetup_tUserSetting
{
    /* offset = 0x0000 [0] */
    int language;
    /* offset = 0x0004 [4] */
    int display;
    /* offset = 0x0008 [8] */
    int bestlap;
    /* offset = 0x000c [12] */
    int windowSize;
    /* offset = 0x0010 [16] */
    int graphicsDetail;
    /* offset = 0x0014 [20] */
    int viewDistance;
    /* offset = 0x0018 [24] */
    int horizonDisplay;
    /* offset = 0x001c [28] */
    int musicLevel;
    /* offset = 0x0020 [32] */
    int sfxLevel;
    /* offset = 0x0024 [36] */
    int interactive;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 04FE: NAME(94) */
/* BASE TYPE ADDR: 04E4: NAME(93) */
typedef struct GameSetup_tUserSetting GameSetup_tUserSetting;

/* NAME TYPE ADDR: 0548: NAME(97) */
/* BASE TYPE ADDR: 051B: FIELD_LIST(96) */
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

/* NAME TYPE ADDR: 0579: NAME(100) */
/* BASE TYPE ADDR: 055E: FIELD_LIST(99) */
#pragma pack(push, 1)
/* number of fields = 2, size = 0x0021 [33 bytes] */
struct tSERVER_INPUT
{
    /* offset = 0x0000 [0] */
    char PKTINDEX;
    /* offset = 0x0001 [1] */
    Input_tResults val[8];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 05B3: NAME(102) */
/* BASE TYPE ADDR: 058A: FIELD_LIST(101) */
#pragma pack(push, 1)
/* number of fields = 3, size = 0x0006 [6 bytes] */
struct tCLIENT_INPUT
{
    /* offset = 0x0000 [0] */
    char PKTINDEX;
    /* offset = 0x0001 [1] */
    signed char ticksAhead;
    /* offset = 0x0002 [2] */
    Input_tResults val;
};
#pragma pack(pop)

/* Procedure params definition 0 - 02DC: NEAR386 PROC(66) */
/* typedef int (unnamed_proc)(int arg0); */

/* Procedure params definition 1 - 040E: NEAR386 PROC(86) */
/* typedef void (unnamed_proc)(PKTCONN* arg0, unsigned char* arg1, unsigned int arg2); */

/* Procedure params definition 2 - 05C7: NEAR386 PROC(104) */
/* typedef void (unnamed_proc)(Input_tResults* arg0); */
