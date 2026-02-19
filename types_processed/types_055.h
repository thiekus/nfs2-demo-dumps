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

/* NAME TYPE ADDR: 00E0: NAME(24) */
/* BASE TYPE ADDR: 00B1: NEAR386 PTR(18) */
typedef char* MEMBLOCK;

/* NAME TYPE ADDR: 00F4: NAME(27) */
/* BASE TYPE ADDR: 00F1: NEAR386 PTR(26) */
/* 00EC: NEAR386 PROC(25) */
typedef void (*VOIDFN)(void);

/* NAME TYPE ADDR: 0102: NAME(29) */
/* BASE TYPE ADDR: 00FE: BYTE_INDEX ARRAY(28) */
typedef char* va_list[1];

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

/* NAME TYPE ADDR: 019E: NAME(41) */
/* BASE TYPE ADDR: 0174: FIELD_LIST(40) */
#pragma pack(push, 1)
/* number of fields = 3, size = 0x000e [14 bytes] */
struct PICK_HOST_PKT
{
    /* offset = 0x0000 [0] */
    char PKTINDEX;
    /* offset = 0x0001 [1] */
    int tick;
    /* offset = 0x0005 [5] */
    char playerName[9];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0239: NAME(50) */
/* BASE TYPE ADDR: 01CB: FIELD_LIST(49) */
#pragma pack(push, 1)
/* number of fields = 8, size = 0x00d1 [209 bytes] */
struct modem_info
{
    /* offset = 0x0000 [0] */
    char name[40];
    /* offset = 0x0028 [40] */
    char defaultInitStr[40];
    /* offset = 0x0050 [80] */
    char userInitStr[40];
    /* offset = 0x0078 [120] */
    char settingsStr[40];
    /* offset = 0x00a0 [160] */
    char dialStr[40];
    /* offset = 0x00c8 [200] */
    int commPort;
    /* offset = 0x00cc [204] */
    int isTone;
    /* offset = 0x00d0 [208] */
    char speakerOn;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0247: NAME(51) */
/* BASE TYPE ADDR: 0239: NAME(50) */
typedef struct modem_info tMODEM_INFO;

/* NAME TYPE ADDR: 0282: NAME(54) */
/* BASE TYPE ADDR: 0259: FIELD_LIST(53) */
#pragma pack(push, 1)
/* number of fields = 3, size = 0x0030 [48 bytes] */
struct serial_settings
{
    /* offset = 0x0000 [0] */
    int CommPort;
    /* offset = 0x0004 [4] */
    char PhoneNum[40];
    /* offset = 0x002c [44] */
    tMODEM_INFO* modem;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0295: NAME(55) */
/* BASE TYPE ADDR: 0282: NAME(54) */
typedef struct serial_settings tSERIAL_SETTINGS;

/* NAME TYPE ADDR: 0312: NAME(59) */
/* BASE TYPE ADDR: 02B1: FIELD_LIST(58) */
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

/* NAME TYPE ADDR: 031E: NAME(60) */
/* BASE TYPE ADDR: 0312: NAME(59) */
typedef struct shapetbl SHAPE;

/* NAME TYPE ADDR: 03CF: NAME(65) */
/* BASE TYPE ADDR: 0330: FIELD_LIST(64) */
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

/* NAME TYPE ADDR: 03DC: NAME(66) */
/* BASE TYPE ADDR: 03CF: NAME(65) */
typedef struct windowtbl WINDOW;

/* NAME TYPE ADDR: 03E9: NAME(68) */
/* BASE TYPE ADDR: 03FB: FIELD_LIST(70) */
#pragma pack(push, 1)
/* number of fields = 1, size = 0x0004 [4 bytes] */
struct eacelement
{
    /* offset = 0x0000 [0] */
    struct eacelement* link;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 040B: NAME(71) */
/* BASE TYPE ADDR: 03E9: NAME(68) */
typedef struct eacelement EACELEMENT;

/* NAME TYPE ADDR: 0421: NAME(73) */
/* BASE TYPE ADDR: 0419: FIELD_LIST(72) */
#pragma pack(push, 1)
/* number of fields = 0, size = 0x0000 [0 bytes] */
struct conntbl
{
};
#pragma pack(pop)

/* NAME TYPE ADDR: 042F: NAME(75) */
/* BASE TYPE ADDR: 0474: FIELD_LIST(84) */
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

/* NAME TYPE ADDR: 0443: NAME(78) */
/* BASE TYPE ADDR: 043E: NEAR386 PROC(77) */
typedef int (CONNECT_FUNC)(struct pktconn* arg0);

/* NAME TYPE ADDR: 0460: NAME(82) */
/* BASE TYPE ADDR: 0459: NEAR386 PROC(81) */
typedef int (TRANSFER_FUNC)(struct pktconn* arg0, unsigned char* arg1, unsigned int arg2);

/* NAME TYPE ADDR: 0508: NAME(85) */
/* BASE TYPE ADDR: 042F: NAME(75) */
typedef struct pktconn PKTCONN;

/* Procedure params definition 0 - 02AC: NEAR386 PROC(57) */
/* typedef int (unnamed_proc)(tSERIAL_SETTINGS* arg0); */

/* Procedure params definition 1 - 0516: NEAR386 PROC(87) */
/* typedef void (unnamed_proc)(PKTCONN* arg0, unsigned char* arg1, unsigned int arg2); */

/* Procedure params definition 2 - 051D: NEAR386 PROC(88) */
/* typedef void (unnamed_proc)(tSERIAL_SETTINGS* arg0); */

/* Procedure params definition 3 - 0522: NEAR386 PROC(89) */
/* typedef int (unnamed_proc)(void); */
