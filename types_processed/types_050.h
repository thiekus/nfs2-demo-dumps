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

/* NAME TYPE ADDR: 018F: NAME(40) */
/* BASE TYPE ADDR: 0170: ENUM_LIST(39) */
enum Udff_tAccessType: unsigned char
{
    UDFF_FILE = 0,
    UDFF_MEMORY = 1,
};

/* NAME TYPE ADDR: 01A3: NAME(41) */
/* BASE TYPE ADDR: 0170: ENUM_LIST(39) */
typedef enum Udff_tAccessType Udff_tAccessType;

/* NAME TYPE ADDR: 01DB: NAME(43) */
/* BASE TYPE ADDR: 01B7: FIELD_LIST(42) */
#pragma pack(push, 1)
/* number of fields = 3, size = 0x0009 [9 bytes] */
struct Udff_tInfo
{
    /* offset = 0x0000 [0] */
    Udff_tAccessType type;
    /* offset = 0x0001 [1] */
    int handle;
    /* offset = 0x0005 [5] */
    char* memPtr;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 01E9: NAME(44) */
/* BASE TYPE ADDR: 01DB: NAME(43) */
typedef struct Udff_tInfo Udff_tInfo;

/* NAME TYPE ADDR: 01FA: NAME(46) */
/* BASE TYPE ADDR: 01F7: NEAR386 PTR(45) */
typedef Udff_tInfo* Udff_tHandle;

/* Procedure params definition 0 - 020A: NEAR386 PROC(47) */
/* typedef Udff_tHandle (unnamed_proc)(char* arg0, char* arg1, int arg2); */

/* Procedure params definition 1 - 0211: NEAR386 PROC(48) */
/* typedef void (unnamed_proc)(Udff_tHandle arg0); */

/* Procedure params definition 2 - 0216: NEAR386 PROC(49) */
/* typedef int (unnamed_proc)(Udff_tHandle arg0); */

/* Procedure params definition 3 - 021B: NEAR386 PROC(50) */
/* typedef char (unnamed_proc)(Udff_tHandle arg0); */

/* Procedure params definition 4 - 0220: NEAR386 PROC(51) */
/* typedef void (unnamed_proc)(Udff_tHandle arg0, char* arg1); */

/* Procedure params definition 5 - 0226: NEAR386 PROC(52) */
/* typedef void (unnamed_proc)(Udff_tHandle arg0, char* arg1, int arg2); */
