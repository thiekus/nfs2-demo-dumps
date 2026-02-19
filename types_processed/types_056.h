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

/* NAME TYPE ADDR: 0178: NAME(41) */
/* BASE TYPE ADDR: 018A: FIELD_LIST(43) */
#pragma pack(push, 1)
/* number of fields = 1, size = 0x0004 [4 bytes] */
struct eacelement
{
    /* offset = 0x0000 [0] */
    struct eacelement* link;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 019A: NAME(44) */
/* BASE TYPE ADDR: 0178: NAME(41) */
typedef struct eacelement EACELEMENT;

/* NAME TYPE ADDR: 01B0: NAME(46) */
/* BASE TYPE ADDR: 01A8: FIELD_LIST(45) */
#pragma pack(push, 1)
/* number of fields = 0, size = 0x0000 [0 bytes] */
struct conntbl
{
};
#pragma pack(pop)

/* NAME TYPE ADDR: 01C1: NAME(49) */
/* BASE TYPE ADDR: 0206: FIELD_LIST(58) */
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

/* NAME TYPE ADDR: 01D5: NAME(52) */
/* BASE TYPE ADDR: 01D0: NEAR386 PROC(51) */
typedef int (CONNECT_FUNC)(struct pktconn* arg0);

/* NAME TYPE ADDR: 01F2: NAME(56) */
/* BASE TYPE ADDR: 01EB: NEAR386 PROC(55) */
typedef int (TRANSFER_FUNC)(struct pktconn* arg0, unsigned char* arg1, unsigned int arg2);

/* NAME TYPE ADDR: 029A: NAME(59) */
/* BASE TYPE ADDR: 01C1: NAME(49) */
typedef struct pktconn PKTCONN;

/* NAME TYPE ADDR: 02D7: NAME(63) */
/* BASE TYPE ADDR: 02AF: FIELD_LIST(62) */
#pragma pack(push, 1)
/* number of fields = 3, size = 0x0004 [4 bytes] */
struct chat_packet
{
    /* offset = 0x0000 [0] */
    char PKTINDEX;
    /* offset = 0x0001 [1] */
    char playerIndex;
    /* offset = 0x0002 [2] */
    short c;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 02E6: NAME(64) */
/* BASE TYPE ADDR: 02D7: NAME(63) */
typedef struct chat_packet CHAT_PACKET;

/* NAME TYPE ADDR: 037C: NAME(67) */
/* BASE TYPE ADDR: 02F8: FIELD_LIST(66) */
#pragma pack(push, 1)
/* number of fields = 8, size = 0x0020 [32 bytes] */
struct tEditorInfo
{
    /* offset = 0x0000 [0] */
    int numWins;
    /* offset = 0x0004 [4] */
    int numLinesPerWin;
    /* offset = 0x0008 [8] */
    int numCharsPerLine;
    /* offset = 0x000c [12] */
    int MaxScrollBack;
    /* offset = 0x0010 [16] */
    int CursorHi;
    /* offset = 0x0014 [20] */
    int CursorLo;
    /* offset = 0x0018 [24] */
    int MaxWordtoWrap;
    /* offset = 0x001c [28] */
    int allowScrolling;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 03AF: NAME(71) */
/* BASE TYPE ADDR: 0393: FIELD_LIST(70) */
#pragma pack(push, 1)
/* number of fields = 2, size = 0x0080 [128 bytes] */
struct tEditorText
{
    /* offset = 0x0000 [0] */
    int numLines;
    /* offset = 0x0004 [4] */
    char line[38][10];
};
#pragma pack(pop)

/* Procedure params definition 0 - 02A8: NEAR386 PROC(61) */
/* typedef void (unnamed_proc)(PKTCONN* arg0, char* arg1, unsigned int arg2); */

/* Procedure params definition 1 - 03C1: NEAR386 PROC(73) */
/* typedef void (unnamed_proc)(int arg0); */

/* Procedure params definition 2 - 03C6: NEAR386 PROC(74) */
/* typedef int (unnamed_proc)(int arg0, int arg1); */
