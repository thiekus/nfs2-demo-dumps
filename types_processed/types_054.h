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
/* 0170: SCALAR(39) = unsigned long */

/* NAME TYPE ADDR: 0185: NAME(41) */
/* BASE TYPE ADDR: 0180: NEAR386 PROC(40) */
typedef int (Input_tDeviceCall)(unsigned long arg0);

/* NAME TYPE ADDR: 019A: NAME(42) */
/* BASE TYPE ADDR: 01AC: FIELD_LIST(44) */
#pragma pack(push, 1)
/* number of fields = 1, size = 0x0004 [4 bytes] */
struct eacelement
{
    /* offset = 0x0000 [0] */
    struct eacelement* link;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 01BC: NAME(45) */
/* BASE TYPE ADDR: 019A: NAME(42) */
typedef struct eacelement EACELEMENT;

/* NAME TYPE ADDR: 01D2: NAME(47) */
/* BASE TYPE ADDR: 01CA: FIELD_LIST(46) */
#pragma pack(push, 1)
/* number of fields = 0, size = 0x0000 [0 bytes] */
struct conntbl
{
};
#pragma pack(pop)

/* NAME TYPE ADDR: 01E3: NAME(50) */
/* BASE TYPE ADDR: 0228: FIELD_LIST(59) */
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

/* NAME TYPE ADDR: 01F7: NAME(53) */
/* BASE TYPE ADDR: 01F2: NEAR386 PROC(52) */
typedef int (CONNECT_FUNC)(struct pktconn* arg0);

/* NAME TYPE ADDR: 0214: NAME(57) */
/* BASE TYPE ADDR: 020D: NEAR386 PROC(56) */
typedef int (TRANSFER_FUNC)(struct pktconn* arg0, unsigned char* arg1, unsigned int arg2);

/* NAME TYPE ADDR: 02BC: NAME(60) */
/* BASE TYPE ADDR: 01E3: NAME(50) */
typedef struct pktconn PKTCONN;

/* NAME TYPE ADDR: 032A: NAME(67) */
/* BASE TYPE ADDR: 02DC: FIELD_LIST(66) */
#pragma pack(push, 1)
/* number of fields = 8, size = 0x004c [76 bytes] */
struct SERIALCONN
{
    /* offset = 0x0000 [0] */
    PKTCONN pktconn;
    /* offset = 0x0030 [48] */
    int state;
    /* offset = 0x0034 [52] */
    int port;
    /* offset = 0x0038 [56] */
    int irq;
    /* offset = 0x003c [60] */
    int baud;
    /* offset = 0x0040 [64] */
    int parity;
    /* offset = 0x0044 [68] */
    int stop;
    /* offset = 0x0048 [72] */
    int frame;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 034C: NAME(70) */
/* BASE TYPE ADDR: 033C: FIELD_LIST(69) */
#pragma pack(push, 1)
/* number of fields = 1, size = 0x0014 [20 bytes] */
struct NETADDRESS
{
    /* offset = 0x0000 [0] */
    char data[20];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0362: NAME(72) */
/* BASE TYPE ADDR: 035A: FIELD_LIST(71) */
#pragma pack(push, 1)
/* number of fields = 0, size = 0x0000 [0 bytes] */
struct eac_builder
{
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0371: NAME(73) */
/* BASE TYPE ADDR: 0362: NAME(72) */
typedef struct eac_builder EACBUILDER;

/* NAME TYPE ADDR: 038A: NAME(76) */
/* BASE TYPE ADDR: 0382: FIELD_LIST(75) */
#pragma pack(push, 1)
/* number of fields = 0, size = 0x0000 [0 bytes] */
struct eac_service
{
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0399: NAME(77) */
/* BASE TYPE ADDR: 038A: NAME(76) */
typedef struct eac_service EACSERVICE;

/* NAME TYPE ADDR: 03B2: NAME(80) */
/* BASE TYPE ADDR: 03AA: FIELD_LIST(79) */
#pragma pack(push, 1)
/* number of fields = 0, size = 0x0000 [0 bytes] */
struct netsocket
{
};
#pragma pack(pop)

/* NAME TYPE ADDR: 03BF: NAME(81) */
/* BASE TYPE ADDR: 03B2: NAME(80) */
typedef struct netsocket NETSOCKET;

/* NAME TYPE ADDR: 03CF: NAME(83) */
/* BASE TYPE ADDR: 0470: FIELD_LIST(97) */
#pragma pack(push, 1)
/* number of fields = 14, size = 0x00ac [172 bytes] */
struct netgame
{
    /* offset = 0x0000 [0] */
    EACELEMENT qelem;
    /* offset = 0x0004 [4] */
    EACBUILDER* buildertbl;
    /* offset = 0x0008 [8] */
    EACSERVICE* servicetbl;
    /* offset = 0x000c [12] */
    NETSOCKET* socket;
    /* offset = 0x0010 [16] */
    LISTEN_FUNC* listener;
    /* offset = 0x0014 [20] */
    void* builderdata;
    /* offset = 0x0018 [24] */
    void* networkdata;
    /* offset = 0x001c [28] */
    NETADDRESS servaddr;
    /* offset = 0x0030 [48] */
    NETPLAYER player;
    /* offset = 0x008c [140] */
    UNIQUEID product;
    /* offset = 0x009c [156] */
    int socketopen;
    /* offset = 0x00a0 [160] */
    int sessionopen;
    /* offset = 0x00a4 [164] */
    int haveserver;
    /* offset = 0x00a8 [168] */
    unsigned int numconnections;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 03DB: NAME(84) */
/* BASE TYPE ADDR: 03CF: NAME(83) */
typedef struct netgame NETGAME;

/* NAME TYPE ADDR: 03F2: NAME(88) */
/* BASE TYPE ADDR: 03EC: NEAR386 PROC(87) */
typedef int (LISTEN_FUNC)(NETGAME* arg0, NETADDRESS* arg1);

/* NAME TYPE ADDR: 0437: NAME(93) */
/* BASE TYPE ADDR: 040C: FIELD_LIST(92) */
#pragma pack(push, 1)
/* number of fields = 3, size = 0x005c [92 bytes] */
struct NETPLAYER
{
    /* offset = 0x0000 [0] */
    NETADDRESS address;
    /* offset = 0x0014 [20] */
    char fullname[52];
    /* offset = 0x0048 [72] */
    char nickname[20];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0464: NAME(96) */
/* BASE TYPE ADDR: 0448: FIELD_LIST(95) */
#pragma pack(push, 1)
/* number of fields = 4, size = 0x0010 [16 bytes] */
struct UNIQUEID
{
    /* offset = 0x0000 [0] */
    unsigned long a;
    /* offset = 0x0004 [4] */
    unsigned short b;
    /* offset = 0x0006 [6] */
    unsigned short c;
    /* offset = 0x0008 [8] */
    unsigned char d[8];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0562: NAME(100) */
/* BASE TYPE ADDR: 0532: FIELD_LIST(99) */
#pragma pack(push, 1)
/* number of fields = 4, size = 0x004c [76 bytes] */
struct NETCONN
{
    /* offset = 0x0000 [0] */
    PKTCONN pktconn;
    /* offset = 0x0030 [48] */
    NETADDRESS address;
    /* offset = 0x0044 [68] */
    int handle;
    /* offset = 0x0048 [72] */
    struct netgame* game;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 05F7: NAME(102) */
/* BASE TYPE ADDR: 056D: FIELD_LIST(101) */
#pragma pack(push, 1)
/* number of fields = 15, size = 0x0068 [104 bytes] */
struct MODEMCONN
{
    /* offset = 0x0000 [0] */
    PKTCONN pktconn;
    /* offset = 0x0030 [48] */
    int state;
    /* offset = 0x0034 [52] */
    int port;
    /* offset = 0x0038 [56] */
    int irq;
    /* offset = 0x003c [60] */
    int baud;
    /* offset = 0x0040 [64] */
    int parity;
    /* offset = 0x0044 [68] */
    int stop;
    /* offset = 0x0048 [72] */
    int frame;
    /* offset = 0x004c [76] */
    int silent;
    /* offset = 0x0050 [80] */
    int tone;
    /* offset = 0x0054 [84] */
    char* init;
    /* offset = 0x0058 [88] */
    char* init2;
    /* offset = 0x005c [92] */
    char* init3;
    /* offset = 0x0060 [96] */
    char* dial;
    /* offset = 0x0064 [100] */
    char* pnum;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0631: NAME(104) */
/* BASE TYPE ADDR: 0604: FIELD_LIST(103) */
#pragma pack(push, 1)
/* number of fields = 4, size = 0x0068 [104 bytes] */
struct tCONN
{
    /* offset = 0x0000 [0] */
    PKTCONN pktconn;
    /* offset = 0x0000 [0] */
    SERIALCONN serial;
    /* offset = 0x0000 [0] */
    NETCONN net;
    /* offset = 0x0000 [0] */
    MODEMCONN modem;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0667: NAME(109) */
/* BASE TYPE ADDR: 0646: FIELD_LIST(108) */
#pragma pack(push, 1)
/* number of fields = 2, size = 0x0020 [32 bytes] */
struct tREMOTECONN
{
    /* offset = 0x0000 [0] */
    tCONN player[7];
    /* offset = 0x00d8 [216] */
    char playerName[9][8];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 06B7: NAME(114) */
/* BASE TYPE ADDR: 0682: ENUM_LIST(113) */
enum tCONN_TYPE: unsigned char
{
    NO_CONN = 0,
    MODEM_CONN = 1,
    SERIAL_CONN = 2,
    NET_CONN = 3,
};

/* NAME TYPE ADDR: 0727: NAME(116) */
/* BASE TYPE ADDR: 06C5: FIELD_LIST(115) */
#pragma pack(push, 1)
/* number of fields = 7, size = 0x003b [59 bytes] */
struct tCOM_STATE
{
    /* offset = 0x0000 [0] */
    short Received[10];
    /* offset = 0x0014 [20] */
    short CheckPoint[8];
    /* offset = 0x0024 [36] */
    short FourFeet[8];
    /* offset = 0x0034 [52] */
    short IsHost;
    /* offset = 0x0036 [54] */
    short LostCon;
    /* offset = 0x0038 [56] */
    short DisplayAbortMsg;
    /* offset = 0x003a [58] */
    tCONN_TYPE ConnType;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0788: NAME(121) */
/* BASE TYPE ADDR: 0741: FIELD_LIST(120) */
#pragma pack(push, 1)
/* number of fields = 5, size = 0x005d [93 bytes] */
struct tCOMPLAYERS
{
    /* offset = 0x0000 [0] */
    char PKTINDEX;
    /* offset = 0x0001 [1] */
    char name[9][8];
    /* offset = 0x0049 [73] */
    short numPlayers;
    /* offset = 0x004b [75] */
    short localIndex;
    /* offset = 0x004d [77] */
    short staticIndex[8];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 09DF: NAME(132) */
/* BASE TYPE ADDR: 07C6: ENUM_LIST(131) */
enum tCHKPNTS: unsigned char
{
    CHKPNT_NULL = 0,
    CHKPNT_READY_TO_RACE = 1,
    CHKPNT_CONTINUE_KO = 2,
    CHKPNT_PRE_GAMESETUP = 3,
    CHKPNT_POST_GAMESETUP = 4,
    CHKPNT_LOADING_1 = 5,
    CHKPNT_LOADING_2 = 6,
    CHKPNT_LOADING_3 = 7,
    CHKPNT_LOADING_4 = 8,
    CHKPNT_LOADING_5 = 9,
    CHKPNT_LOADING_6 = 10,
    CHKPNT_LOADING_7 = 11,
    CHKPNT_LOADING_8 = 12,
    CHKPNT_LOADING_9 = 13,
    CHKPNT_LOADING_10 = 14,
    CHKPNT_BEGIN_RACE = 15,
    CHKPNT_END_RACE = 16,
    CHKPNT_BEGIN_PAUSE = 17,
    CHKPNT_END_PAUSE = 18,
    CHKPNT_WAIT_FOR_YERALLS_MUSIC_TO_START = 19,
    CHKPNT_FINAL_PREGAME_SYNC = 20,
    CHKPNT_RESTART = 21,
    CHKPNT_QUIT = 22,
    CHKPNT_DROPPED = 23,
    CHKPNT_BEFORE_BUILDSTREAM = 24,
    CHKPNT_MAX = 25,
};

/* NAME TYPE ADDR: 0A0E: NAME(135) */
/* BASE TYPE ADDR: 09F3: FIELD_LIST(134) */
#pragma pack(push, 1)
/* number of fields = 2, size = 0x0003 [3 bytes] */
struct tCHKPNT_PKT
{
    /* offset = 0x0000 [0] */
    char PKTINDEX;
    /* offset = 0x0001 [1] */
    short num;
};
#pragma pack(pop)

/* Procedure params definition 0 - 02CA: NEAR386 PROC(62) */
/* typedef void (unnamed_proc)(PKTCONN* arg0, unsigned char* arg1, unsigned int arg2); */

/* Procedure params definition 1 - 0797: NEAR386 PROC(122) */
/* typedef void (unnamed_proc)(PKTCONN* arg0, void* arg1, unsigned int arg2); */

/* Procedure params definition 2 - 079E: NEAR386 PROC(123) */
/* typedef void (unnamed_proc)(int arg0); */

/* Procedure params definition 3 - 07A3: NEAR386 PROC(124) */
/* typedef void (unnamed_proc)(PKTCONN* arg0); */

/* Procedure params definition 4 - 07A8: NEAR386 PROC(125) */
/* typedef int (unnamed_proc)(PKTCONN* arg0, unsigned char* arg1, unsigned int arg2); */

/* Procedure params definition 5 - 07AF: NEAR386 PROC(126) */
/* typedef int (unnamed_proc)(PKTCONN* arg0); */

/* Procedure params definition 6 - 07B4: NEAR386 PROC(127) */
/* typedef int (unnamed_proc)(void); */

/* Procedure params definition 7 - 07B9: NEAR386 PROC(128) */
/* typedef short (unnamed_proc)(PKTCONN* arg0); */

/* Procedure params definition 8 - 07BE: NEAR386 PROC(129) */
/* typedef short (unnamed_proc)(short arg0); */

/* Procedure params definition 9 - 09EC: NEAR386 PROC(133) */
/* typedef void (unnamed_proc)(long arg0, tCHKPNTS arg1, unsigned short arg2); */
