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
/* BASE TYPE ADDR: 00CD: SCALAR(22) */
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

/* NAME TYPE ADDR: 02AD: NAME(62) */
/* BASE TYPE ADDR: 024C: FIELD_LIST(61) */
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

/* NAME TYPE ADDR: 02B9: NAME(63) */
/* BASE TYPE ADDR: 02AD: NAME(62) */
typedef struct shapetbl SHAPE;

/* NAME TYPE ADDR: 0367: NAME(67) */
/* BASE TYPE ADDR: 02C8: FIELD_LIST(66) */
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

/* NAME TYPE ADDR: 0374: NAME(68) */
/* BASE TYPE ADDR: 0367: NAME(67) */
typedef struct windowtbl WINDOW;

/* NAME TYPE ADDR: 03CA: NAME(77) */
/* BASE TYPE ADDR: 039A: ENUM_LIST(76) */
enum tItemTypes: unsigned char
{
    kTypeText = 0,
    kTypeImage = 1,
    kTypeTextButton = 2,
};

/* NAME TYPE ADDR: 03D8: NAME(78) */
/* BASE TYPE ADDR: 044A: FIELD_LIST(85) */
#pragma pack(push, 1)
/* number of fields = 5, size = 0x000c [12 bytes] */
struct tMenu
{
    /* offset = 0x0000 [0] */
    char* artFileName;
    /* offset = 0x0004 [4] */
    char* backgrName;
    /* offset = 0x0008 [8] */
    short driver;
    /* offset = 0x000a [10] */
    short current;
    /* offset = 0x000c [12] */
    struct tItemButton* item[1];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0434: NAME(82) */
/* BASE TYPE ADDR: 03E8: FIELD_LIST(81) */
#pragma pack(push, 1)
/* number of fields = 7, size = 0x0011 [17 bytes] */
struct tItemButton
{
    /* offset = 0x0000 [0] */
    enum tItemTypes type;
    /* offset = 0x0001 [1] */
    short text;
    /* offset = 0x0003 [3] */
    struct tMenu* nextMenu;
    /* offset = 0x0007 [7] */
    unsigned char flags;
    /* offset = 0x0008 [8] */
    unsigned char cases;
    /* offset = 0x0009 [9] */
    char* value;
    /* offset = 0x000d [13] */
    short* selection;
};
#pragma pack(pop)

/* Procedure params definition 0 - 0395: NEAR386 PROC(75) */
/* typedef void (unnamed_proc)(int arg0); */

/* Procedure params definition 1 - 048F: NEAR386 PROC(87) */
/* typedef int (unnamed_proc)(struct tMenu* arg0); */

/* Procedure params definition 2 - 0498: NEAR386 PROC(89) */
/* typedef void (unnamed_proc)(struct tMenu* arg0, short arg1); */

/* Procedure params definition 3 - 049E: NEAR386 PROC(90) */
/* typedef int (unnamed_proc)(int arg0); */

/* Procedure params definition 4 - 04A3: NEAR386 PROC(91) */
/* typedef void (unnamed_proc)(struct tMenu* arg0, int arg1); */

/* Procedure params definition 5 - 04B9: NEAR386 PROC(96) */
/* typedef void (unnamed_proc)(); */

/* Procedure params definition 6 - 04BD: NEAR386 PROC(97) */
/* typedef int (unnamed_proc)(struct tMenu* arg0, short arg1); */

/* Procedure params definition 7 - 04DF: NEAR386 PROC(105) */
/* typedef void (unnamed_proc)(short arg0, short arg1, short arg2, struct tMenu* arg3); */

/* Procedure params definition 8 - 04F7: NEAR386 PROC(110) */
/* typedef void (unnamed_proc)(short arg0); */
