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

/* NAME TYPE ADDR: 01A4: NAME(40) */
/* BASE TYPE ADDR: 016B: FIELD_LIST(39) */
#pragma pack(push, 1)
/* number of fields = 4, size = 0x0010 [16 bytes] */
struct Col_FileHeader
{
    /* offset = 0x0000 [0] */
    DWORD fileType;
    /* offset = 0x0004 [4] */
    DWORD version;
    /* offset = 0x0008 [8] */
    DWORD size;
    /* offset = 0x000c [12] */
    DWORD numCollections;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 01B6: NAME(41) */
/* BASE TYPE ADDR: 01A4: NAME(40) */
typedef struct Col_FileHeader Col_FileHeader;

/* NAME TYPE ADDR: 0205: NAME(48) */
/* BASE TYPE ADDR: 01E0: FIELD_LIST(47) */
#pragma pack(push, 1)
/* number of fields = 3, size = 0x0008 [8 bytes] */
struct Stm_ItemCollection
{
    /* offset = 0x0000 [0] */
    DWORD size;
    /* offset = 0x0004 [4] */
    WORD type;
    /* offset = 0x0006 [6] */
    WORD itemCount;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 021B: NAME(49) */
/* BASE TYPE ADDR: 0205: NAME(48) */
typedef struct Stm_ItemCollection Stm_ItemCollection;

/* Procedure params definition 0 - 01C8: NEAR386 PROC(42) */
/* typedef int (unnamed_proc)(char* arg0); */

/* Procedure params definition 1 - 01CD: NEAR386 PROC(43) */
/* typedef void (unnamed_proc)(int arg0); */

/* Procedure params definition 2 - 01D2: NEAR386 PROC(44) */
/* typedef int (unnamed_proc)(int arg0); */

/* Procedure params definition 3 - 01DA: NEAR386 PROC(46) */
/* typedef BOOL (unnamed_proc)(int arg0, void* arg1); */

/* Procedure params definition 4 - 0234: NEAR386 PROC(51) */
/* typedef Stm_ItemCollection* (unnamed_proc)(void* arg0, int arg1); */
