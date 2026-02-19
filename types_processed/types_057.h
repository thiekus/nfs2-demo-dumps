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

/* NAME TYPE ADDR: 01F4: NAME(40) */
/* BASE TYPE ADDR: 0170: FIELD_LIST(39) */
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

/* NAME TYPE ADDR: 0239: NAME(43) */
/* BASE TYPE ADDR: 0207: FIELD_LIST(42) */
#pragma pack(push, 1)
/* number of fields = 4, size = 0x0032 [50 bytes] */
struct tEditorLine
{
    /* offset = 0x0000 [0] */
    int visualHead;
    /* offset = 0x0004 [4] */
    int head;
    /* offset = 0x0008 [8] */
    int tail;
    /* offset = 0x000c [12] */
    char lineBuff[38];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 027A: NAME(46) */
/* BASE TYPE ADDR: 024C: FIELD_LIST(45) */
#pragma pack(push, 1)
/* number of fields = 4, size = 0x0000 [0 bytes] */
struct tEditorWindow
{
    /* offset = 0x0000 [0] */
    int visualHead;
    /* offset = 0x0004 [4] */
    int head;
    /* offset = 0x0008 [8] */
    int tail;
    /* offset = 0x000c [12] */
    tEditorLine line[10];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 02CD: NAME(49) */
/* BASE TYPE ADDR: 028F: FIELD_LIST(48) */
#pragma pack(push, 1)
/* number of fields = 4, size = 0x0028 [40 bytes] */
struct tEditor
{
    /* offset = 0x0000 [0] */
    int CPLwScrollback;
    /* offset = 0x0004 [4] */
    int LPWwScrollback;
    /* offset = 0x0008 [8] */
    tEditorInfo info;
    /* offset = 0x0028 [40] */
    tEditorWindow window[8];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 02FF: NAME(54) */
/* BASE TYPE ADDR: 02E3: FIELD_LIST(53) */
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

/* NAME TYPE ADDR: 0311: NAME(56) */
/* BASE TYPE ADDR: 0170: FIELD_LIST(39) */
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

/* Procedure params definition 0 - 0323: NEAR386 PROC(58) */
/* typedef void (unnamed_proc)(tEditorInfo* arg0); */

/* Procedure params definition 1 - 0328: NEAR386 PROC(59) */
/* typedef void (unnamed_proc)(int arg0); */

/* Procedure params definition 2 - 032D: NEAR386 PROC(60) */
/* typedef void (unnamed_proc)(int arg0, int arg1); */

/* Procedure params definition 3 - 0339: NEAR386 PROC(63) */
/* typedef int (unnamed_proc)(int arg0, char* arg1); */

/* Procedure params definition 4 - 033F: NEAR386 PROC(64) */
/* typedef int (unnamed_proc)(int arg0, char arg1); */

/* Procedure params definition 5 - 0345: NEAR386 PROC(65) */
/* typedef int (unnamed_proc)(int arg0); */

/* Procedure params definition 6 - 034D: NEAR386 PROC(67) */
/* typedef tEditorText* (unnamed_proc)(int arg0); */
