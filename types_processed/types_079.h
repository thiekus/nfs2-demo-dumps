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

/* NAME TYPE ADDR: 00FE: NAME(28) */
/* BASE TYPE ADDR: 0097: SCALAR(16) */
typedef long SDWORD;
/* 0108: SCALAR(29) = unsigned long */

/* NAME TYPE ADDR: 0118: NAME(30) */
/* BASE TYPE ADDR: 0108: SCALAR(29) */
typedef unsigned long DWORD;

/* NAME TYPE ADDR: 0121: NAME(31) */
/* BASE TYPE ADDR: 0048: SCALAR(8) */
typedef unsigned short WORD;

/* NAME TYPE ADDR: 0129: NAME(32) */
/* BASE TYPE ADDR: 0040: SCALAR(7) */
typedef short SWORD;

/* NAME TYPE ADDR: 0132: NAME(33) */
/* BASE TYPE ADDR: 0022: SCALAR(5) */
typedef signed char SBYTE;

/* NAME TYPE ADDR: 013B: NAME(34) */
/* BASE TYPE ADDR: 0030: SCALAR(6) */
typedef unsigned char UBYTE;

/* NAME TYPE ADDR: 0144: NAME(35) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int BOOL;

/* NAME TYPE ADDR: 014C: NAME(36) */
/* BASE TYPE ADDR: 00BE: SCALAR(20) */
typedef void Stm_Chunk;

/* NAME TYPE ADDR: 015C: NAME(38) */
/* BASE TYPE ADDR: 0159: NEAR386 PTR(37) */
typedef Stm_Chunk* lpStm_Chunk;

/* NAME TYPE ADDR: 0199: NAME(44) */
/* BASE TYPE ADDR: 017F: ENUM_LIST(43) */
enum Stm_Direction: unsigned char
{
    Forward = 0,
    Backward = 1,
};

/* Procedure params definition 0 - 016E: NEAR386 PROC(40) */
/* typedef int (unnamed_proc)(int arg0, void* arg1, int arg2); */

/* Procedure params definition 1 - 0175: NEAR386 PROC(41) */
/* typedef int (unnamed_proc)(char* arg0); */

/* Procedure params definition 2 - 017A: NEAR386 PROC(42) */
/* typedef void (unnamed_proc)(int arg0); */

/* Procedure params definition 3 - 01AA: NEAR386 PROC(45) */
/* typedef BOOL (unnamed_proc)(int arg0, int arg1, void* arg2, enum Stm_Direction arg3); */

/* Procedure params definition 4 - 01B2: NEAR386 PROC(46) */
/* typedef char* (unnamed_proc)(int arg0, int arg1, void* arg2, enum Stm_Direction arg3); */

/* Procedure params definition 5 - 01BA: NEAR386 PROC(47) */
/* typedef BOOL (unnamed_proc)(); */
