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

/* NAME TYPE ADDR: 019A: NAME(37) */
/* BASE TYPE ADDR: 014C: FIELD_LIST(36) */
#pragma pack(push, 1)
/* number of fields = 6, size = 0x0018 [24 bytes] */
struct Sim_FileHeader
{
    /* offset = 0x0000 [0] */
    DWORD fileType;
    /* offset = 0x0004 [4] */
    DWORD version;
    /* offset = 0x0008 [8] */
    DWORD size;
    /* offset = 0x000c [12] */
    DWORD numSlices;
    /* offset = 0x0010 [16] */
    DWORD numObjects;
    /* offset = 0x0014 [20] */
    DWORD numEdges;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 01AC: NAME(38) */
/* BASE TYPE ADDR: 019A: NAME(37) */
typedef struct Sim_FileHeader Sim_FileHeader;

/* NAME TYPE ADDR: 02BB: NAME(49) */
/* BASE TYPE ADDR: 01E6: FIELD_LIST(48) */
#pragma pack(push, 1)
/* number of fields = 15, size = 0x0024 [36 bytes] */
struct Sim_Slice
{
    /* offset = 0x0000 [0] */
    SDWORD center[3];
    /* offset = 0x000c [12] */
    SBYTE normal[3];
    /* offset = 0x000f [15] */
    SBYTE forward[3];
    /* offset = 0x0012 [18] */
    SBYTE right[3];
    /* offset = 0x0015 [21] */
    SBYTE pad;
    /* offset = 0x0016 [22] */
    WORD chunkIndex;
    /* offset = 0x0018 [24] */
    WORD pavedProfile;
    /* offset = 0x001a [26] */
    SWORD leftLinkSlice;
    /* offset = 0x001c [28] */
    SWORD rightLinkSlice;
    /* offset = 0x001e [30] */
    UBYTE leftDrive;
    /* offset = 0x001f [31] */
    UBYTE rightDrive;
    /* offset = 0x0020 [32] */
    UBYTE barrierType;
    /* offset = 0x0021 [33] */
    UBYTE laneCount;
    /* offset = 0x0022 [34] */
    UBYTE avgPavedWidthLf;
    /* offset = 0x0023 [35] */
    UBYTE avgPavedWidthRt;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 02C8: NAME(50) */
/* BASE TYPE ADDR: 02BB: NAME(49) */
typedef struct Sim_Slice Sim_Slice;

/* NAME TYPE ADDR: 0308: NAME(56) */
/* BASE TYPE ADDR: 02E5: FIELD_LIST(55) */
#pragma pack(push, 1)
/* number of fields = 3, size = 0x0010 [16 bytes] */
struct Sim_Object
{
    /* offset = 0x0000 [0] */
    SDWORD corner[3];
    /* offset = 0x000c [12] */
    UBYTE type;
    /* offset = 0x000d [13] */
    UBYTE bound[3];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0316: NAME(57) */
/* BASE TYPE ADDR: 0308: NAME(56) */
typedef struct Sim_Object Sim_Object;

/* NAME TYPE ADDR: 0350: NAME(64) */
/* BASE TYPE ADDR: 0338: FIELD_LIST(63) */
#pragma pack(push, 1)
/* number of fields = 2, size = 0x0004 [4 bytes] */
struct Sim_Region
{
    /* offset = 0x0000 [0] */
    WORD start;
    /* offset = 0x0002 [2] */
    WORD end;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 035E: NAME(65) */
/* BASE TYPE ADDR: 0350: NAME(64) */
typedef struct Sim_Region Sim_Region;

/* NAME TYPE ADDR: 0414: NAME(68) */
/* BASE TYPE ADDR: 0370: FIELD_LIST(67) */
#pragma pack(push, 1)
/* number of fields = 11, size = 0x0026 [38 bytes] */
struct Sim_Edge
{
    /* offset = 0x0000 [0] */
    WORD startSlice;
    /* offset = 0x0002 [2] */
    WORD endSlice;
    /* offset = 0x0004 [4] */
    WORD numSlices;
    /* offset = 0x0006 [6] */
    UBYTE numFwdAI;
    /* offset = 0x0007 [7] */
    UBYTE aFwdAI[4];
    /* offset = 0x000b [11] */
    UBYTE numBackConnect;
    /* offset = 0x000c [12] */
    UBYTE aBackConnect[4];
    /* offset = 0x0010 [16] */
    UBYTE numFwdConnect;
    /* offset = 0x0011 [17] */
    UBYTE aFwdConnect[4];
    /* offset = 0x0015 [21] */
    UBYTE numNeighbours;
    /* offset = 0x0016 [22] */
    Sim_Region aRegions[4];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0420: NAME(69) */
/* BASE TYPE ADDR: 0414: NAME(68) */
typedef struct Sim_Edge Sim_Edge;

/* Procedure params definition 0 - 01BE: NEAR386 PROC(39) */
/* typedef int (unnamed_proc)(char* arg0); */

/* Procedure params definition 1 - 01C3: NEAR386 PROC(40) */
/* typedef void (unnamed_proc)(int arg0); */

/* Procedure params definition 2 - 01C8: NEAR386 PROC(41) */
/* typedef int (unnamed_proc)(int arg0); */

/* Procedure params definition 3 - 01D0: NEAR386 PROC(43) */
/* typedef BOOL (unnamed_proc)(int arg0, void* arg1); */

/* Procedure params definition 4 - 02D8: NEAR386 PROC(52) */
/* typedef Sim_Slice* (unnamed_proc)(void* arg0); */

/* Procedure params definition 5 - 0327: NEAR386 PROC(59) */
/* typedef Sim_Object* (unnamed_proc)(void* arg0); */

/* Procedure params definition 6 - 042F: NEAR386 PROC(71) */
/* typedef Sim_Edge* (unnamed_proc)(void* arg0); */
