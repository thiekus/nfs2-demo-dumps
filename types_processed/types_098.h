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

/* NAME TYPE ADDR: 0276: NAME(63) */
/* BASE TYPE ADDR: 0250: FIELD_LIST(62) */
#pragma pack(push, 1)
/* number of fields = 4, size = 0x0010 [16 bytes] */
struct LUMPYHEAD
{
    /* offset = 0x0000 [0] */
    unsigned long type;
    /* offset = 0x0004 [4] */
    unsigned long len;
    /* offset = 0x0008 [8] */
    unsigned long num;
    /* offset = 0x000c [12] */
    unsigned long hlen;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 032E: NAME(67) */
/* BASE TYPE ADDR: 028A: FIELD_LIST(66) */
#pragma pack(push, 1)
/* number of fields = 11, size = 0x0023 [35 bytes] */
struct SPEECHINFO
{
    /* offset = 0x0000 [0] */
    char name[4];
    /* offset = 0x0004 [4] */
    int multiplay;
    /* offset = 0x0008 [8] */
    int nHandle;
    /* offset = 0x000c [12] */
    int nSoundHandle;
    /* offset = 0x0010 [16] */
    char areLoading;
    /* offset = 0x0011 [17] */
    char soundIsPlaying;
    /* offset = 0x0012 [18] */
    char playNextOne;
    /* offset = 0x0013 [19] */
    char* pBankHeader;
    /* offset = 0x0017 [23] */
    char* sSpeechData;
    /* offset = 0x001b [27] */
    char* lastSpeechData;
    /* offset = 0x001f [31] */
    int vivHandle;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 03C2: NAME(72) */
/* BASE TYPE ADDR: 0349: FIELD_LIST(71) */
#pragma pack(push, 1)
/* number of fields = 11, size = 0x0010 [16 bytes] */
struct SNDPLAYOPTS
{
    /* offset = 0x0000 [0] */
    int patnum;
    /* offset = 0x0004 [4] */
    signed char bhandle;
    /* offset = 0x0005 [5] */
    signed char keynum;
    /* offset = 0x0006 [6] */
    signed char velocity;
    /* offset = 0x0007 [7] */
    signed char pan;
    /* offset = 0x0008 [8] */
    signed char vol;
    /* offset = 0x0009 [9] */
    signed char bend;
    /* offset = 0x000a [10] */
    signed char fxlevel0;
    /* offset = 0x000b [11] */
    signed char use3dpos;
    /* offset = 0x000c [12] */
    unsigned short azimuth;
    /* offset = 0x000e [14] */
    short elevation;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0416: NAME(80) */
/* BASE TYPE ADDR: 03F2: FIELD_LIST(79) */
#pragma pack(push, 1)
/* number of fields = 3, size = 0x0009 [9 bytes] */
struct FILEINFO
{
    /* offset = 0x0000 [0] */
    unsigned int offset;
    /* offset = 0x0004 [4] */
    unsigned int length;
    /* offset = 0x0008 [8] */
    char name[1];
};
#pragma pack(pop)

/* Procedure params definition 0 - 033F: NEAR386 PROC(69) */
/* typedef int (unnamed_proc)(struct SPEECHINFO* arg0); */

/* Procedure params definition 1 - 0344: NEAR386 PROC(70) */
/* typedef void (unnamed_proc)(struct SPEECHINFO* arg0); */

/* Procedure params definition 2 - 03D1: NEAR386 PROC(73) */
/* typedef void (unnamed_proc)(int arg0); */

/* Procedure params definition 3 - 03D6: NEAR386 PROC(74) */
/* typedef short (unnamed_proc)(char* arg0); */

/* Procedure params definition 4 - 03DE: NEAR386 PROC(76) */
/* typedef char* (unnamed_proc)(char* arg0, int arg1, int arg2, int* arg3); */

/* Procedure params definition 5 - 03E6: NEAR386 PROC(77) */
/* typedef void (unnamed_proc)(struct LUMPYHEAD* arg0, char* arg1, int* arg2, int* arg3); */

/* Procedure params definition 6 - 0425: NEAR386 PROC(82) */
/* typedef LUMPYHEAD* (unnamed_proc)(char* arg0); */

/* Procedure params definition 7 - 042A: NEAR386 PROC(83) */
/* typedef void (unnamed_proc)(int arg0, int arg1); */
