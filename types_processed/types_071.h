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

/* NAME TYPE ADDR: 01A0: NAME(42) */
/* BASE TYPE ADDR: 0184: FIELD_LIST(41) */
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

/* NAME TYPE ADDR: 01B0: NAME(44) */
/* BASE TYPE ADDR: 0184: FIELD_LIST(41) */
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

/* NAME TYPE ADDR: 01D2: NAME(46) */
/* BASE TYPE ADDR: 01BC: FIELD_LIST(45) */
#pragma pack(push, 1)
/* number of fields = 2, size = 0x001f [31 bytes] */
struct servicelist
{
    /* offset = 0x0000 [0] */
    char name[15];
    /* offset = 0x000f [15] */
    UNIQUEID id;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 01E1: NAME(47) */
/* BASE TYPE ADDR: 01D2: NAME(46) */
typedef struct servicelist SERVICELIST;

/* NAME TYPE ADDR: 01F3: NAME(49) */
/* BASE TYPE ADDR: 0205: FIELD_LIST(51) */
#pragma pack(push, 1)
/* number of fields = 1, size = 0x0004 [4 bytes] */
struct eacelement
{
    /* offset = 0x0000 [0] */
    struct eacelement* link;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0215: NAME(52) */
/* BASE TYPE ADDR: 01F3: NAME(49) */
typedef struct eacelement EACELEMENT;

/* NAME TYPE ADDR: 022B: NAME(54) */
/* BASE TYPE ADDR: 0223: FIELD_LIST(53) */
#pragma pack(push, 1)
/* number of fields = 0, size = 0x0000 [0 bytes] */
struct eac_builder
{
};
#pragma pack(pop)

/* NAME TYPE ADDR: 023A: NAME(55) */
/* BASE TYPE ADDR: 022B: NAME(54) */
typedef struct eac_builder EACBUILDER;

/* NAME TYPE ADDR: 0253: NAME(58) */
/* BASE TYPE ADDR: 024B: FIELD_LIST(57) */
#pragma pack(push, 1)
/* number of fields = 0, size = 0x0000 [0 bytes] */
struct eac_service
{
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0262: NAME(59) */
/* BASE TYPE ADDR: 0253: NAME(58) */
typedef struct eac_service EACSERVICE;

/* NAME TYPE ADDR: 027B: NAME(62) */
/* BASE TYPE ADDR: 0273: FIELD_LIST(61) */
#pragma pack(push, 1)
/* number of fields = 0, size = 0x0000 [0 bytes] */
struct netsocket
{
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0288: NAME(63) */
/* BASE TYPE ADDR: 027B: NAME(62) */
typedef struct netsocket NETSOCKET;

/* NAME TYPE ADDR: 0298: NAME(65) */
/* BASE TYPE ADDR: 03E6: NAME(80) */
typedef struct netgame NETGAME;

/* NAME TYPE ADDR: 02BB: NAME(69) */
/* BASE TYPE ADDR: 02AB: FIELD_LIST(68) */
#pragma pack(push, 1)
/* number of fields = 1, size = 0x0014 [20 bytes] */
struct NETADDRESS
{
    /* offset = 0x0000 [0] */
    char data[20];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 02D2: NAME(72) */
/* BASE TYPE ADDR: 02CC: NEAR386 PROC(71) */
typedef int (LISTEN_FUNC)(NETGAME* arg0, NETADDRESS* arg1);

/* NAME TYPE ADDR: 031A: NAME(78) */
/* BASE TYPE ADDR: 02EF: FIELD_LIST(77) */
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

/* NAME TYPE ADDR: 03E6: NAME(80) */
/* BASE TYPE ADDR: 0327: FIELD_LIST(79) */
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

/* NAME TYPE ADDR: 0426: NAME(84) */
/* BASE TYPE ADDR: 03F9: FIELD_LIST(83) */
#pragma pack(push, 1)
/* number of fields = 3, size = 0x0034 [52 bytes] */
struct NETDESC
{
    /* offset = 0x0000 [0] */
    char gamename[32];
    /* offset = 0x0020 [32] */
    int appdata[4];
    /* offset = 0x0030 [48] */
    unsigned int maxplayers;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0450: NAME(87) */
/* BASE TYPE ADDR: 0435: FIELD_LIST(86) */
#pragma pack(push, 1)
/* number of fields = 2, size = 0x001d [29 bytes] */
struct ADDCONN_INFO
{
    /* offset = 0x0000 [0] */
    char name[9];
    /* offset = 0x0009 [9] */
    NETADDRESS netAddr;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 04A5: NAME(90) */
/* BASE TYPE ADDR: 0464: FIELD_LIST(89) */
#pragma pack(push, 1)
/* number of fields = 4, size = 0x00f4 [244 bytes] */
struct CONN_QUEUE
{
    /* offset = 0x0000 [0] */
    int firstInLine;
    /* offset = 0x0004 [4] */
    int nextOpenSlot;
    /* offset = 0x0008 [8] */
    int numInQueue;
    /* offset = 0x000c [12] */
    ADDCONN_INFO connInfo[8];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 04E4: NAME(95) */
/* BASE TYPE ADDR: 04BF: FIELD_LIST(94) */
#pragma pack(push, 1)
/* number of fields = 4, size = 0x003d [61 bytes] */
struct gamelistitem
{
    /* offset = 0x0000 [0] */
    char name[9];
    /* offset = 0x0009 [9] */
    char str[16];
    /* offset = 0x0019 [25] */
    int data[4];
    /* offset = 0x0029 [41] */
    NETADDRESS ID;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 04F4: NAME(96) */
/* BASE TYPE ADDR: 04E4: NAME(95) */
typedef struct gamelistitem GAMELISTITEM;

/* NAME TYPE ADDR: 0527: NAME(100) */
/* BASE TYPE ADDR: 050B: FIELD_LIST(99) */
#pragma pack(push, 1)
/* number of fields = 2, size = 0x0006 [6 bytes] */
struct gamelist
{
    /* offset = 0x0000 [0] */
    short numGames;
    /* offset = 0x0002 [2] */
    GAMELISTITEM* game;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0533: NAME(101) */
/* BASE TYPE ADDR: 0527: NAME(100) */
typedef struct gamelist GAMELIST;

/* NAME TYPE ADDR: 05D3: NAME(115) */
/* BASE TYPE ADDR: 0572: FIELD_LIST(114) */
#pragma pack(push, 1)
/* number of fields = 9, size = 0x0011 [17 bytes] */
struct shapetbl
{
    /* offset = 0x0000 [0] */
    unsigned int type : 8;
    /* offset = 0x0000 [0] */
    int next : 24;
    /* offset = 0x0004 [4] */
    short width;
    /* offset = 0x0006 [6] */
    short height;
    /* offset = 0x0008 [8] */
    short centerx;
    /* offset = 0x000a [10] */
    short centery;
    /* offset = 0x000c [12] */
    short shapex;
    /* offset = 0x000e [14] */
    short shapey;
    /* offset = 0x0010 [16] */
    char data;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 05DF: NAME(116) */
/* BASE TYPE ADDR: 05D3: NAME(115) */
typedef struct shapetbl SHAPE;

/* NAME TYPE ADDR: 068D: NAME(120) */
/* BASE TYPE ADDR: 05EE: FIELD_LIST(119) */
#pragma pack(push, 1)
/* number of fields = 17, size = 0x0038 [56 bytes] */
struct windowtbl
{
    /* offset = 0x0000 [0] */
    long id;
    /* offset = 0x0004 [4] */
    int width;
    /* offset = 0x0008 [8] */
    int height;
    /* offset = 0x000c [12] */
    int minx;
    /* offset = 0x0010 [16] */
    int miny;
    /* offset = 0x0014 [20] */
    int maxx;
    /* offset = 0x0018 [24] */
    int maxy;
    /* offset = 0x001c [28] */
    unsigned char bpp;
    /* offset = 0x001d [29] */
    unsigned char type;
    /* offset = 0x001e [30] */
    unsigned char ram;
    /* offset = 0x001f [31] */
    unsigned char unused;
    /* offset = 0x0020 [32] */
    SHAPE* shape;
    /* offset = 0x0024 [36] */
    void* zbuffer;
    /* offset = 0x0028 [40] */
    unsigned int rowbytes;
    /* offset = 0x002c [44] */
    unsigned int* rowtbl;
    /* offset = 0x0030 [48] */
    unsigned int* bpptbl;
    /* offset = 0x0034 [52] */
    void* sysptr;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 069A: NAME(121) */
/* BASE TYPE ADDR: 068D: NAME(120) */
typedef struct windowtbl WINDOW;

/* NAME TYPE ADDR: 06B4: NAME(125) */
/* BASE TYPE ADDR: 06AC: FIELD_LIST(124) */
#pragma pack(push, 1)
/* number of fields = 0, size = 0x0000 [0 bytes] */
struct conntbl
{
};
#pragma pack(pop)

/* NAME TYPE ADDR: 06C2: NAME(127) */
/* BASE TYPE ADDR: 070E: FIELD_LIST(136) */
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

/* NAME TYPE ADDR: 06D7: NAME(130) */
/* BASE TYPE ADDR: 06D1: NEAR386 PROC(129) */
typedef int (CONNECT_FUNC)(struct pktconn* arg0);

/* NAME TYPE ADDR: 06F8: NAME(134) */
/* BASE TYPE ADDR: 06EF: NEAR386 PROC(133) */
typedef int (TRANSFER_FUNC)(struct pktconn* arg0, unsigned char* arg1);

/* NAME TYPE ADDR: 07A6: NAME(137) */
/* BASE TYPE ADDR: 06C2: NAME(127) */
typedef struct pktconn PKTCONN;

/* NAME TYPE ADDR: 07E0: NAME(142) */
/* BASE TYPE ADDR: 07BF: FIELD_LIST(141) */
#pragma pack(push, 1)
/* number of fields = 2, size = 0x0011 [17 bytes] */
struct tFOUR_FEET
{
    /* offset = 0x0000 [0] */
    char PKTINDEX;
    /* offset = 0x0001 [1] */
    short FourFeet[8];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0836: NAME(148) */
/* BASE TYPE ADDR: 0804: FIELD_LIST(147) */
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

/* Procedure params definition 0 - 053F: NEAR386 PROC(102) */
/* typedef char* (unnamed_proc)(void); */

/* Procedure params definition 1 - 054B: NEAR386 PROC(105) */
/* typedef GAMELIST* (unnamed_proc)(unsigned int arg0, char* arg1); */

/* Procedure params definition 2 - 055C: NEAR386 PROC(109) */
/* typedef int (unnamed_proc)(char* arg0); */

/* Procedure params definition 3 - 0569: NEAR386 PROC(112) */
/* typedef int (unnamed_proc)(NETADDRESS* arg0); */

/* Procedure params definition 4 - 06A7: NEAR386 PROC(123) */
/* typedef int (unnamed_proc)(void); */

/* Procedure params definition 5 - 07B5: NEAR386 PROC(139) */
/* typedef void (unnamed_proc)(PKTCONN* arg0); */

/* Procedure params definition 6 - 07EF: NEAR386 PROC(143) */
/* typedef void (unnamed_proc)(int arg0); */

/* Procedure params definition 7 - 07F4: NEAR386 PROC(144) */
/* typedef void (unnamed_proc)(PKTCONN* arg0, unsigned char* arg1); */

/* Procedure params definition 8 - 0846: NEAR386 PROC(150) */
/* typedef NETCONN* (unnamed_proc)(NETADDRESS* arg0, short arg1); */

/* Procedure params definition 9 - 084D: NEAR386 PROC(151) */
/* typedef SERVICELIST* (unnamed_proc)(unsigned int arg0, unsigned int arg1, unsigned int arg2); */

/* Procedure params definition 10 - 0857: NEAR386 PROC(153) */
/* typedef int (unnamed_proc)(UNIQUEID* arg0, char* arg1); */

/* Procedure params definition 11 - 0863: NEAR386 PROC(155) */
/* typedef int (unnamed_proc)(NETGAME* arg0, NETDESC* arg1, unsigned int arg2, NETADDRESS* arg3, enum arg4); */

/* Procedure params definition 12 - 086F: NEAR386 PROC(157) */
/* typedef int (unnamed_proc)(NETGAME* arg0, NETPLAYER* arg1, int arg2, int arg3, unsigned char arg4); */

/* Procedure params definition 13 - 0878: NEAR386 PROC(158) */
/* typedef void (unnamed_proc)(char* arg0, NETADDRESS* arg1); */

/* Procedure params definition 14 - 0881: NEAR386 PROC(160) */
/* typedef void (unnamed_proc)(ADDCONN_INFO* arg0); */
