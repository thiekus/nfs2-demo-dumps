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

/* NAME TYPE ADDR: 01F4: NAME(40) */
/* BASE TYPE ADDR: 016B: FIELD_LIST(39) */
#pragma pack(push, 1)
/* number of fields = 8, size = 0x0020 [32 bytes] */
struct Stm_TrackStream
{
    /* offset = 0x0000 [0] */
    DWORD lType;
    /* offset = 0x0004 [4] */
    DWORD lVersion;
    /* offset = 0x0008 [8] */
    DWORD lMaxMetaChunkSize;
    /* offset = 0x000c [12] */
    DWORD lMaxGeomCollSize;
    /* offset = 0x0010 [16] */
    DWORD lMaxFullSize;
    /* offset = 0x0014 [20] */
    DWORD lMaxSplitSize;
    /* offset = 0x0018 [24] */
    DWORD lMetaChunkCount;
    /* offset = 0x001c [28] */
    DWORD lChunkCount;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0207: NAME(41) */
/* BASE TYPE ADDR: 01F4: NAME(40) */
typedef struct Stm_TrackStream Stm_TrackStream;

/* NAME TYPE ADDR: 024B: NAME(49) */
/* BASE TYPE ADDR: 0234: FIELD_LIST(48) */
#pragma pack(push, 1)
/* number of fields = 3, size = 0x000c [12 bytes] */
struct Stm_COORD
{
    /* offset = 0x0000 [0] */
    int x;
    /* offset = 0x0004 [4] */
    int y;
    /* offset = 0x0008 [8] */
    int z;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 029A: NAME(53) */
/* BASE TYPE ADDR: 0260: FIELD_LIST(52) */
#pragma pack(push, 1)
/* number of fields = 4, size = 0x000c [12 bytes] */
struct Stm_MetaChunk
{
    /* offset = 0x0000 [0] */
    DWORD size;
    /* offset = 0x0004 [4] */
    WORD chunkCount;
    /* offset = 0x0006 [6] */
    WORD shapeFlag;
    /* offset = 0x0008 [8] */
    DWORD shapeOffset;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 02AB: NAME(54) */
/* BASE TYPE ADDR: 029A: NAME(53) */
typedef struct Stm_MetaChunk Stm_MetaChunk;

/* NAME TYPE ADDR: 0301: NAME(62) */
/* BASE TYPE ADDR: 02D5: FIELD_LIST(61) */
#pragma pack(push, 1)
/* number of fields = 3, size = 0x0018 [24 bytes] */
struct Stm_TrackGeometry
{
    /* offset = 0x0000 [0] */
    DWORD size;
    /* offset = 0x0004 [4] */
    WORD vertexCount[4];
    /* offset = 0x000c [12] */
    WORD quadCount[6];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0316: NAME(63) */
/* BASE TYPE ADDR: 0301: NAME(62) */
typedef struct Stm_TrackGeometry Stm_TrackGeometry;

/* NAME TYPE ADDR: 0367: NAME(70) */
/* BASE TYPE ADDR: 033F: FIELD_LIST(69) */
#pragma pack(push, 1)
/* number of fields = 3, size = 0x0008 [8 bytes] */
struct Stm_Quad
{
    /* offset = 0x0000 [0] */
    WORD material;
    /* offset = 0x0002 [2] */
    WORD light;
    /* offset = 0x0004 [4] */
    UBYTE aPoints[4];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0373: NAME(71) */
/* BASE TYPE ADDR: 0367: NAME(70) */
typedef struct Stm_Quad Stm_Quad;

/* NAME TYPE ADDR: 03AC: NAME(75) */
/* BASE TYPE ADDR: 0387: FIELD_LIST(74) */
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

/* NAME TYPE ADDR: 03C2: NAME(76) */
/* BASE TYPE ADDR: 03AC: NAME(75) */
typedef struct Stm_ItemCollection Stm_ItemCollection;

/* Procedure params definition 0 - 0220: NEAR386 PROC(44) */
/* typedef BOOL (unnamed_proc)(); */

/* Procedure params definition 1 - 0224: NEAR386 PROC(45) */
/* typedef void (unnamed_proc)(); */

/* Procedure params definition 2 - 0228: NEAR386 PROC(46) */
/* typedef int (unnamed_proc)(int arg0); */

/* Procedure params definition 3 - 022D: NEAR386 PROC(47) */
/* typedef void (unnamed_proc)(int arg0, int arg1, int* arg2); */

/* Procedure params definition 4 - 025B: NEAR386 PROC(51) */
/* typedef Stm_COORD* (unnamed_proc)(int arg0); */

/* Procedure params definition 5 - 02BF: NEAR386 PROC(56) */
/* typedef int (unnamed_proc)(Stm_MetaChunk* arg0); */

/* Procedure params definition 6 - 02C4: NEAR386 PROC(57) */
/* typedef Stm_Chunk* (unnamed_proc)(Stm_MetaChunk* arg0, int arg1); */

/* Procedure params definition 7 - 032E: NEAR386 PROC(65) */
/* typedef Stm_TrackGeometry* (unnamed_proc)(Stm_Chunk* arg0); */

/* Procedure params definition 8 - 0336: NEAR386 PROC(67) */
/* typedef SWORD* (unnamed_proc)(Stm_TrackGeometry* arg0); */

/* Procedure params definition 9 - 0382: NEAR386 PROC(73) */
/* typedef Stm_Quad* (unnamed_proc)(Stm_TrackGeometry* arg0); */

/* Procedure params definition 10 - 03DB: NEAR386 PROC(78) */
/* typedef Stm_ItemCollection* (unnamed_proc)(Stm_Chunk* arg0, int arg1); */

/* Procedure params definition 11 - 03E4: NEAR386 PROC(80) */
/* typedef int (unnamed_proc)(Stm_Chunk* arg0); */

/* Procedure params definition 12 - 03EC: NEAR386 PROC(82) */
/* typedef SDWORD* (unnamed_proc)(Stm_Chunk* arg0); */
