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
/* 0170: SCALAR(39) = unsigned long */

/* NAME TYPE ADDR: 0185: NAME(41) */
/* BASE TYPE ADDR: 0180: NEAR386 PROC(40) */
typedef int (Input_tDeviceCall)(unsigned long arg0);

/* NAME TYPE ADDR: 01A5: NAME(45) */
/* BASE TYPE ADDR: 01A2: NEAR386 PTR(44) */
/* 019D: NEAR386 PROC(43) */
typedef void (*Sched_tFunctionPt)(void* arg0);

/* NAME TYPE ADDR: 01F7: NAME(51) */
/* BASE TYPE ADDR: 01CA: FIELD_LIST(50) */
#pragma pack(push, 1)
/* number of fields = 4, size = 0x0004 [4 bytes] */
struct Input_tResults
{
    /* offset = 0x0000 [0] */
    signed char steering;
    /* offset = 0x0001 [1] */
    unsigned char gas;
    /* offset = 0x0002 [2] */
    unsigned char brake;
    /* offset = 0x0003 [3] */
    unsigned char flags;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0256: NAME(60) */
/* BASE TYPE ADDR: 0223: FIELD_LIST(59) */
#pragma pack(push, 1)
/* number of fields = 3, size = 0x000c [12 bytes] */
struct Input_tDeviceList
{
    /* offset = 0x0000 [0] */
    char* devicename;
    /* offset = 0x0004 [4] */
    Input_tDeviceCall* devicefunc;
    /* offset = 0x0008 [8] */
    Input_tDeviceCall* startupfunc;
};
#pragma pack(pop)

/* Procedure params definition 0 - 0214: NEAR386 PROC(55) */
/* typedef int* (unnamed_proc)(void); */

/* Procedure params definition 1 - 0219: NEAR386 PROC(56) */
/* typedef void (unnamed_proc)(); */

/* Procedure params definition 2 - 026E: NEAR386 PROC(62) */
/* typedef void (unnamed_proc)(int arg0); */

/* Procedure params definition 3 - 0273: NEAR386 PROC(63) */
/* typedef char (unnamed_proc)(char arg0, int arg1); */

/* Procedure params definition 4 - 0279: NEAR386 PROC(64) */
/* typedef int (unnamed_proc)(unsigned long arg0, int arg1); */

/* Procedure params definition 5 - 027F: NEAR386 PROC(65) */
/* typedef int (unnamed_proc)(void); */
