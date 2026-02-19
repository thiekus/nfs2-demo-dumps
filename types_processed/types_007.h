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
/* BASE TYPE ADDR: 017E: FIELD_LIST(41) */
#pragma pack(push, 1)
/* number of fields = 4, size = 0x0010 [16 bytes] */
struct mblock
{
    /* offset = 0x0000 [0] */
    char* buf;
    /* offset = 0x0004 [4] */
    int bufLen;
    /* offset = 0x0008 [8] */
    struct mblock* prev;
    /* offset = 0x000c [12] */
    struct mblock* next;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 01A7: NAME(42) */
/* BASE TYPE ADDR: 0170: NAME(39) */
typedef struct mblock Mem_tBlock;

/* NAME TYPE ADDR: 0219: NAME(45) */
/* BASE TYPE ADDR: 01B8: FIELD_LIST(44) */
#pragma pack(push, 1)
/* number of fields = 7, size = 0x001c [28 bytes] */
struct Mem_tData
{
    /* offset = 0x0000 [0] */
    int heapSize;
    /* offset = 0x0004 [4] */
    char* heap;
    /* offset = 0x0008 [8] */
    int numFreeBlocks;
    /* offset = 0x000c [12] */
    int numUsedBlocks;
    /* offset = 0x0010 [16] */
    int freeMem;
    /* offset = 0x0014 [20] */
    Mem_tBlock* freeList;
    /* offset = 0x0018 [24] */
    Mem_tBlock* usedList;
};
#pragma pack(pop)

/* Procedure params definition 0 - 0226: NEAR386 PROC(46) */
/* typedef int (unnamed_proc)(int arg0, int arg1); */

/* Procedure params definition 1 - 022C: NEAR386 PROC(47) */
/* typedef char* (unnamed_proc)(int arg0); */

/* Procedure params definition 2 - 0231: NEAR386 PROC(48) */
/* typedef void (unnamed_proc)(Mem_tBlock* arg0); */

/* Procedure params definition 3 - 0236: NEAR386 PROC(49) */
/* typedef void (unnamed_proc)(Mem_tBlock* arg0, Mem_tBlock* arg1); */

/* Procedure params definition 4 - 023C: NEAR386 PROC(50) */
/* typedef int (unnamed_proc)(char* arg0); */

/* Procedure params definition 5 - 0241: NEAR386 PROC(51) */
/* typedef int (unnamed_proc)(char* arg0, char* arg1, int arg2); */

/* Procedure params definition 6 - 0248: NEAR386 PROC(52) */
/* typedef int (unnamed_proc)(Mem_tBlock* arg0); */

/* Procedure params definition 7 - 024D: NEAR386 PROC(53) */
/* typedef int (unnamed_proc)(); */

/* Procedure params definition 8 - 0254: NEAR386 PROC(55) */
/* typedef int (unnamed_proc)(int* arg0, int* arg1); */

/* Procedure params definition 9 - 025A: NEAR386 PROC(56) */
/* typedef int (unnamed_proc)(Mem_tBlock* arg0, int* arg1, int* arg2); */

/* Procedure params definition 10 - 0261: NEAR386 PROC(57) */
/* typedef int (unnamed_proc)(void); */
