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
/* 0121: SCALAR(32) = unsigned long */

/* NAME TYPE ADDR: 0131: NAME(33) */
/* BASE TYPE ADDR: 0121: SCALAR(32) */
typedef unsigned long time_t;

/* NAME TYPE ADDR: 013B: NAME(34) */
/* BASE TYPE ADDR: 005F: SCALAR(10) */
typedef unsigned int ino_t;

/* NAME TYPE ADDR: 0144: NAME(35) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int dev_t;

/* NAME TYPE ADDR: 014D: NAME(36) */
/* BASE TYPE ADDR: 0097: SCALAR(16) */
typedef long off_t;

/* NAME TYPE ADDR: 015B: NAME(38) */
/* BASE TYPE ADDR: 0156: NEAR386 PROC(37) */
typedef void (THREADPROC)(void);

/* NAME TYPE ADDR: 0169: NAME(39) */
/* BASE TYPE ADDR: 00FB: NEAR386 PROC(29) */
typedef int (SYSTEMTASK)(int arg0, int arg1);

/* NAME TYPE ADDR: 0177: NAME(40) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int boolean;

/* NAME TYPE ADDR: 0182: NAME(41) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int fixed88;

/* NAME TYPE ADDR: 018D: NAME(42) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int fixed824;

/* NAME TYPE ADDR: 0199: NAME(43) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int fixed248;

/* NAME TYPE ADDR: 01A5: NAME(44) */
/* BASE TYPE ADDR: 0097: SCALAR(16) */
typedef long SDWORD;

/* NAME TYPE ADDR: 01AF: NAME(45) */
/* BASE TYPE ADDR: 0121: SCALAR(32) */
typedef unsigned long DWORD;

/* NAME TYPE ADDR: 01B8: NAME(46) */
/* BASE TYPE ADDR: 0048: SCALAR(8) */
typedef unsigned short WORD;

/* NAME TYPE ADDR: 01C0: NAME(47) */
/* BASE TYPE ADDR: 0040: SCALAR(7) */
typedef short SWORD;

/* NAME TYPE ADDR: 01C9: NAME(48) */
/* BASE TYPE ADDR: 0022: SCALAR(5) */
typedef signed char SBYTE;

/* NAME TYPE ADDR: 01D2: NAME(49) */
/* BASE TYPE ADDR: 0030: SCALAR(6) */
typedef unsigned char UBYTE;

/* NAME TYPE ADDR: 01DB: NAME(50) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int BOOL;

/* NAME TYPE ADDR: 01E3: NAME(51) */
/* BASE TYPE ADDR: 00BE: SCALAR(20) */
typedef void Stm_Chunk;

/* NAME TYPE ADDR: 01F3: NAME(53) */
/* BASE TYPE ADDR: 01F0: NEAR386 PTR(52) */
typedef Stm_Chunk* lpStm_Chunk;

/* NAME TYPE ADDR: 020D: NAME(57) */
/* BASE TYPE ADDR: 020A: NEAR386 PTR(56) */
/* 0205: NEAR386 PROC(55) */
typedef void (*Sched_tFunctionPt)(void* arg0);

/* NAME TYPE ADDR: 0222: NAME(58) */
/* BASE TYPE ADDR: 0040: SCALAR(7) */
typedef short Draw_tContext;

/* NAME TYPE ADDR: 023C: NAME(61) */
/* BASE TYPE ADDR: 0239: NEAR386 PTR(60) */
/* 0233: NEAR386 PROC(59) */
typedef void (*Transformer_AnimCallbackFunc)(void* arg0, void* arg1);

/* NAME TYPE ADDR: 0260: NAME(63) */
/* BASE TYPE ADDR: 025C: BYTE_INDEX ARRAY(62) */
typedef short tAccTable[112];

/* NAME TYPE ADDR: 0272: NAME(65) */
/* BASE TYPE ADDR: 026D: NEAR386 PROC(64) */
typedef int (Input_tDeviceCall)(unsigned long arg0);

/* NAME TYPE ADDR: 0296: NAME(68) */
/* BASE TYPE ADDR: 0293: NEAR386 PTR(67) */
/* 0287: NEAR386 PROC(66) */
typedef void (*fontblit)(int arg0, int arg1, void* arg2, int arg3, int arg4, int arg5, int arg6, int arg7);

/* NAME TYPE ADDR: 02AD: NAME(72) */
/* BASE TYPE ADDR: 02AA: NEAR386 PTR(71) */
/* 02A5: NEAR386 PROC(70) */
typedef int (*getcode)(char** arg0);

/* NAME TYPE ADDR: 02BB: NAME(74) */
/* BASE TYPE ADDR: 02B8: NEAR386 PTR(73) */
/* 00C5: NEAR386 PROC(21) */
typedef void (*fontblitbegin)(void);

/* NAME TYPE ADDR: 02CF: NAME(76) */
/* BASE TYPE ADDR: 02CC: NEAR386 PTR(75) */
/* 00C5: NEAR386 PROC(21) */
typedef void (*fontblitend)(void);

/* NAME TYPE ADDR: 02EC: NAME(80) */
/* BASE TYPE ADDR: 02E9: NEAR386 PTR(79) */
/* 02E1: NEAR386 PROC(78) */
typedef void (*adjustchar)(int* arg0, int* arg1, char* arg2, int arg3);

/* NAME TYPE ADDR: 03AF: NAME(116) */
/* BASE TYPE ADDR: 0382: FIELD_LIST(115) */
#pragma pack(push, 1)
/* number of fields = 3, size = 0x0005 [5 bytes] */
struct kernpair
{
    /* offset = 0x0000 [0] */
    unsigned short previouscode;
    /* offset = 0x0002 [2] */
    unsigned short code;
    /* offset = 0x0004 [4] */
    signed char kernvalue;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 03BB: NAME(117) */
/* BASE TYPE ADDR: 03AF: NAME(116) */
typedef struct kernpair KERN;

/* NAME TYPE ADDR: 051E: NAME(120) */
/* BASE TYPE ADDR: 03C6: FIELD_LIST(119) */
#pragma pack(push, 1)
/* number of fields = 30, size = 0x00b4 [180 bytes] */
struct fonttbl
{
    /* offset = 0x0000 [0] */
    long id;
    /* offset = 0x0004 [4] */
    int textx;
    /* offset = 0x0008 [8] */
    int texty;
    /* offset = 0x000c [12] */
    int centerx;
    /* offset = 0x0010 [16] */
    int centery;
    /* offset = 0x0014 [20] */
    int bpp;
    /* offset = 0x0018 [24] */
    int antialias;
    /* offset = 0x001c [28] */
    int ascent;
    /* offset = 0x0020 [32] */
    int descent;
    /* offset = 0x0024 [36] */
    int maxheight;
    /* offset = 0x0028 [40] */
    int yinc;
    /* offset = 0x002c [44] */
    int forecolour;
    /* offset = 0x0030 [48] */
    int backcolour;
    /* offset = 0x0034 [52] */
    int colourtbl[16];
    /* offset = 0x0074 [116] */
    int num;
    /* offset = 0x0078 [120] */
    int rowbytes;
    /* offset = 0x007c [124] */
    int version;
    /* offset = 0x0080 [128] */
    void* fontfile;
    /* offset = 0x0084 [132] */
    void* chartbl;
    /* offset = 0x0088 [136] */
    void* shape;
    /* offset = 0x008c [140] */
    void* drawtbl;
    /* offset = 0x0090 [144] */
    int drawtblsize;
    /* offset = 0x0094 [148] */
    fontblit blitter;
    /* offset = 0x0098 [152] */
    fontblitbegin blitbegin;
    /* offset = 0x009c [156] */
    fontblitend blitend;
    /* offset = 0x00a0 [160] */
    getcode decoder;
    /* offset = 0x00a4 [164] */
    adjustchar adjuster;
    /* offset = 0x00a8 [168] */
    int numkerns;
    /* offset = 0x00ac [172] */
    KERN* kerntable;
    /* offset = 0x00b0 [176] */
    int usecolourtbl;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0529: NAME(121) */
/* BASE TYPE ADDR: 051E: NAME(120) */
typedef struct fonttbl FONT;

/* NAME TYPE ADDR: 05C5: NAME(138) */
/* BASE TYPE ADDR: 056E: FIELD_LIST(137) */
#pragma pack(push, 1)
/* number of fields = 4, size = 0x0008 [8 bytes] */
struct _diskfree_t
{
    /* offset = 0x0000 [0] */
    unsigned short total_clusters;
    /* offset = 0x0002 [2] */
    unsigned short avail_clusters;
    /* offset = 0x0004 [4] */
    unsigned short sectors_per_cluster;
    /* offset = 0x0006 [6] */
    unsigned short bytes_per_sector;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0636: NAME(140) */
/* BASE TYPE ADDR: 05D5: FIELD_LIST(139) */
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

/* NAME TYPE ADDR: 0643: NAME(141) */
/* BASE TYPE ADDR: 0636: NAME(140) */
typedef struct shapetbl SHAPE;

/* NAME TYPE ADDR: 06E5: NAME(144) */
/* BASE TYPE ADDR: 0651: ENUM_LIST(143) */
enum t_drawType: unsigned short
{
    kMovf,
    kMovfxy,
    kMovfxya,
    kTmaskf,
    kTmaskfxy,
    kTmaskfxya,
    kFadef,
    kFadefxy,
    kFadefxya,
    kAlphaf,
    kAlphafxy,
    kAlphafxya,
};

/* Procedure params definition 0 - 0561: NEAR386 PROC(134) */
/* typedef void (unnamed_proc)(); */

/* Procedure params definition 1 - 0565: NEAR386 PROC(135) */
/* typedef int (unnamed_proc)(long arg0); */

/* Procedure params definition 2 - 06F4: NEAR386 PROC(145) */
/* typedef void (unnamed_proc)(SHAPE* arg0, t_drawType arg1, int arg2); */

/* Procedure params definition 3 - 06FE: NEAR386 PROC(146) */
/* typedef void (unnamed_proc)(char* arg0, t_drawType arg1, int arg2, int arg3, enum arg4); */

/* Procedure params definition 4 - 070A: NEAR386 PROC(148) */
/* typedef void (unnamed_proc)(unsigned char* arg0, unsigned char* arg1, long arg2); */

/* Procedure params definition 5 - 0714: NEAR386 PROC(149) */
/* typedef void (unnamed_proc)(SHAPE* arg0); */

/* Procedure params definition 6 - 071F: NEAR386 PROC(151) */
/* typedef void (unnamed_proc)(char* arg0, int arg1); */

/* Procedure params definition 7 - 0725: NEAR386 PROC(152) */
/* typedef int (unnamed_proc)(); */

/* Procedure params definition 8 - 0729: NEAR386 PROC(153) */
/* typedef int (unnamed_proc)(void); */

/* Procedure params definition 9 - 0733: NEAR386 PROC(155) */
/* typedef void (unnamed_proc)(int arg0); */

/* Procedure params definition 10 - 0738: NEAR386 PROC(156) */
/* typedef void (unnamed_proc)(short arg0, short arg1, short arg2, short arg3); */

/* Procedure params definition 11 - 0743: NEAR386 PROC(158) */
/* typedef void (unnamed_proc)(char* arg0, short arg1, short arg2); */

/* Procedure params definition 12 - 074E: NEAR386 PROC(159) */
/* typedef void (unnamed_proc)(char* arg0, short arg1, short arg2, short arg3, short arg4, short arg5); */

/* Procedure params definition 13 - 0760: NEAR386 PROC(162) */
/* typedef int (unnamed_proc)(int arg0, int* arg1, char* arg2); */
