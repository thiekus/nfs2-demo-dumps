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

/* NAME TYPE ADDR: 00DB: NAME(25) */
/* BASE TYPE ADDR: 00D7: BYTE_INDEX ARRAY(24) */
typedef char* va_list[1];

/* NAME TYPE ADDR: 00EB: NAME(27) */
/* BASE TYPE ADDR: 00E6: NEAR386 PROC(26) */
typedef int (INTFN)(void);

/* NAME TYPE ADDR: 00F4: NAME(28) */
/* BASE TYPE ADDR: 00BE: SCALAR(20) */
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

/* NAME TYPE ADDR: 0170: NAME(39) */
/* BASE TYPE ADDR: 0097: SCALAR(16) */
typedef long SDWORD;
/* 017A: SCALAR(40) = unsigned long */

/* NAME TYPE ADDR: 018A: NAME(41) */
/* BASE TYPE ADDR: 017A: SCALAR(40) */
typedef unsigned long DWORD;

/* NAME TYPE ADDR: 0193: NAME(42) */
/* BASE TYPE ADDR: 0048: SCALAR(8) */
typedef unsigned short WORD;

/* NAME TYPE ADDR: 019B: NAME(43) */
/* BASE TYPE ADDR: 0040: SCALAR(7) */
typedef short SWORD;

/* NAME TYPE ADDR: 01A4: NAME(44) */
/* BASE TYPE ADDR: 0022: SCALAR(5) */
typedef signed char SBYTE;

/* NAME TYPE ADDR: 01AD: NAME(45) */
/* BASE TYPE ADDR: 0030: SCALAR(6) */
typedef unsigned char UBYTE;

/* NAME TYPE ADDR: 01B6: NAME(46) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int BOOL;

/* NAME TYPE ADDR: 01BE: NAME(47) */
/* BASE TYPE ADDR: 00BE: SCALAR(20) */
typedef void Stm_Chunk;

/* NAME TYPE ADDR: 01CE: NAME(49) */
/* BASE TYPE ADDR: 01CB: NEAR386 PTR(48) */
typedef Stm_Chunk* lpStm_Chunk;

/* NAME TYPE ADDR: 01E8: NAME(53) */
/* BASE TYPE ADDR: 01E5: NEAR386 PTR(52) */
/* 01E0: NEAR386 PROC(51) */
typedef void (*Sched_tFunctionPt)(void* arg0);

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

/* NAME TYPE ADDR: 02A9: NAME(61) */
/* BASE TYPE ADDR: 0248: FIELD_LIST(60) */
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

/* NAME TYPE ADDR: 02B5: NAME(62) */
/* BASE TYPE ADDR: 02A9: NAME(61) */
typedef struct shapetbl SHAPE;

/* NAME TYPE ADDR: 0363: NAME(66) */
/* BASE TYPE ADDR: 02C4: FIELD_LIST(65) */
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

/* NAME TYPE ADDR: 0370: NAME(67) */
/* BASE TYPE ADDR: 0363: NAME(66) */
typedef struct windowtbl WINDOW;

/* NAME TYPE ADDR: 03A0: NAME(72) */
/* BASE TYPE ADDR: 0388: FIELD_LIST(71) */
#pragma pack(push, 1)
/* number of fields = 2, size = 0x0008 [8 bytes] */
struct chunkhdrstruct
{
    /* offset = 0x0000 [0] */
    int type;
    /* offset = 0x0004 [4] */
    int size;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 03B2: NAME(73) */
/* BASE TYPE ADDR: 03A0: NAME(72) */
typedef struct chunkhdrstruct CHUNKHDR;

/* NAME TYPE ADDR: 03C6: NAME(76) */
/* BASE TYPE ADDR: 0432: FIELD_LIST(81) */
#pragma pack(push, 1)
/* number of fields = 40, size = 0x00b0 [176 bytes] */
struct cdstreamstruct
{
    /* offset = 0x0000 [0] */
    long id;
    /* offset = 0x0004 [4] */
    char* start;
    /* offset = 0x0008 [8] */
    char* end;
    /* offset = 0x000c [12] */
    char* write;
    /* offset = 0x0010 [16] */
    char* header;
    /* offset = 0x0014 [20] */
    char* get;
    /* offset = 0x0018 [24] */
    char* release;
    /* offset = 0x001c [28] */
    int handle;
    /* offset = 0x0020 [32] */
    int state;
    /* offset = 0x0024 [36] */
    int control;
    /* offset = 0x0028 [40] */
    int status;
    /* offset = 0x002c [44] */
    int abort;
    /* offset = 0x0030 [48] */
    int datahascrc;
    /* offset = 0x0034 [52] */
    int crcerrors;
    /* offset = 0x0038 [56] */
    int crcretries;
    /* offset = 0x003c [60] */
    int buffersize;
    /* offset = 0x0040 [64] */
    int blocksize;
    /* offset = 0x0044 [68] */
    int readsize;
    /* offset = 0x0048 [72] */
    int chunksize;
    /* offset = 0x004c [76] */
    int relocationsize;
    /* offset = 0x0050 [80] */
    long fileoffset;
    /* offset = 0x0054 [84] */
    int fileend;
    /* offset = 0x0058 [88] */
    long filesize;
    /* offset = 0x005c [92] */
    int dataoffset;
    /* offset = 0x0060 [96] */
    int seekposition;
    /* offset = 0x0064 [100] */
    int seekoffset;
    /* offset = 0x0068 [104] */
    int idtype;
    /* offset = 0x006c [108] */
    int idmask;
    /* offset = 0x0070 [112] */
    struct cdstreamstruct* nextstream;
    /* offset = 0x0074 [116] */
    void* emptyblock;
    /* offset = 0x0078 [120] */
    void* head;
    /* offset = 0x007c [124] */
    void* tail;
    /* offset = 0x0080 [128] */
    void* block;
    /* offset = 0x0084 [132] */
    THREAD thread;
    /* offset = 0x0098 [152] */
    int blockcount;
    /* offset = 0x009c [156] */
    int readsignal;
    /* offset = 0x00a0 [160] */
    int releasesignal;
    /* offset = 0x00a4 [164] */
    int mutex;
    /* offset = 0x00a8 [168] */
    int filler;
    /* offset = 0x00ac [172] */
    int streamfull;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0418: NAME(79) */
/* BASE TYPE ADDR: 03DC: FIELD_LIST(78) */
#pragma pack(push, 1)
/* number of fields = 5, size = 0x0014 [20 bytes] */
struct threadstruct
{
    /* offset = 0x0000 [0] */
    int item;
    /* offset = 0x0004 [4] */
    int stacksize;
    /* offset = 0x0008 [8] */
    int priority;
    /* offset = 0x000c [12] */
    int processor;
    /* offset = 0x0010 [16] */
    int id;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0428: NAME(80) */
/* BASE TYPE ADDR: 0418: NAME(79) */
typedef struct threadstruct THREAD;

/* NAME TYPE ADDR: 0607: NAME(82) */
/* BASE TYPE ADDR: 03C6: NAME(76) */
typedef struct cdstreamstruct CDSTREAM;

/* Procedure params definition 0 - 037D: NEAR386 PROC(69) */
/* typedef int (unnamed_proc)(void); */

/* Procedure params definition 1 - 0382: NEAR386 PROC(70) */
/* typedef void (unnamed_proc)(int arg0, int arg1); */

/* Procedure params definition 2 - 03C1: NEAR386 PROC(75) */
/* typedef void (unnamed_proc)(CHUNKHDR* arg0); */

/* Procedure params definition 3 - 0616: NEAR386 PROC(84) */
/* typedef CHUNKHDR* (unnamed_proc)(CDSTREAM* arg0); */

/* Procedure params definition 4 - 061B: NEAR386 PROC(85) */
/* typedef int (unnamed_proc)(char* arg0); */
