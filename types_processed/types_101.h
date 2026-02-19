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

/* NAME TYPE ADDR: 00DC: NAME(25) */
/* BASE TYPE ADDR: 00D7: NEAR386 PROC(24) */
typedef void (THREADPROC)(void);

/* NAME TYPE ADDR: 00F0: NAME(27) */
/* BASE TYPE ADDR: 00EA: NEAR386 PROC(26) */
typedef int (SYSTEMTASK)(int arg0, int arg1);
/* 00FE: SCALAR(28) = unsigned long */

/* NAME TYPE ADDR: 010E: NAME(29) */
/* BASE TYPE ADDR: 00FE: SCALAR(28) */
typedef unsigned long time_t;

/* NAME TYPE ADDR: 0118: NAME(30) */
/* BASE TYPE ADDR: 005F: SCALAR(10) */
typedef unsigned int ino_t;

/* NAME TYPE ADDR: 0121: NAME(31) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int dev_t;

/* NAME TYPE ADDR: 012A: NAME(32) */
/* BASE TYPE ADDR: 0097: SCALAR(16) */
typedef long off_t;

/* NAME TYPE ADDR: 0133: NAME(33) */
/* BASE TYPE ADDR: 0048: SCALAR(8) */
typedef unsigned short wchar_t;

/* NAME TYPE ADDR: 0145: NAME(36) */
/* BASE TYPE ADDR: 0142: NEAR386 PTR(35) */
/* 013E: NEAR386 PROC(34) */
typedef void (*onexit_t)();

/* NAME TYPE ADDR: 0155: NAME(38) */
/* BASE TYPE ADDR: 0151: BYTE_INDEX ARRAY(37) */
typedef char* va_list[1];

/* NAME TYPE ADDR: 0165: NAME(40) */
/* BASE TYPE ADDR: 0160: NEAR386 PROC(39) */
typedef int (INTFN)(void);

/* NAME TYPE ADDR: 016E: NAME(41) */
/* BASE TYPE ADDR: 00BE: SCALAR(20) */
typedef void MVI;

/* NAME TYPE ADDR: 0175: NAME(42) */
/* BASE TYPE ADDR: 00EA: NEAR386 PROC(26) */
typedef int (EACHOOKCALLBACKFUNC)(int arg0, int arg1);

/* NAME TYPE ADDR: 018C: NAME(43) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int arg_t;

/* NAME TYPE ADDR: 0195: NAME(44) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int boolean;

/* NAME TYPE ADDR: 01A0: NAME(45) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int fixed88;

/* NAME TYPE ADDR: 01AB: NAME(46) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int fixed824;

/* NAME TYPE ADDR: 01B7: NAME(47) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int fixed248;

/* Procedure params definition 0 - 01C3: NEAR386 PROC(48) */
/* typedef void (unnamed_proc)(char* arg0, char* arg1); */
