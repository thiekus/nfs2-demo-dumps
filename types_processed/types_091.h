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

/* NAME TYPE ADDR: 0083: NAME(13) */
/* BASE TYPE ADDR: 0048: SCALAR(8) */
typedef unsigned short wchar_t;
/* 008E: SCALAR(14) = void */

/* NAME TYPE ADDR: 009C: NAME(17) */
/* BASE TYPE ADDR: 0099: NEAR386 PTR(16) */
/* 0095: NEAR386 PROC(15) */
typedef void (*onexit_t)();

/* NAME TYPE ADDR: 00AF: NAME(20) */
/* BASE TYPE ADDR: 00AB: BYTE_INDEX ARRAY(19) */
typedef char* __va_list[1];
/* 00BC: SCALAR(21) = long */

/* NAME TYPE ADDR: 00C3: NAME(22) */
/* BASE TYPE ADDR: 00BC: SCALAR(21) */
typedef long fpos_t;

/* NAME TYPE ADDR: 00CD: NAME(23) */
/* BASE TYPE ADDR: 00BC: SCALAR(21) */
typedef long fpos_t;

/* NAME TYPE ADDR: 00D7: NAME(24) */
/* BASE TYPE ADDR: 00A8: NEAR386 PTR(18) */
typedef char* MEMBLOCK;

/* NAME TYPE ADDR: 00EB: NAME(27) */
/* BASE TYPE ADDR: 00E8: NEAR386 PTR(26) */
/* 00E3: NEAR386 PROC(25) */
typedef void (*VOIDFN)(void);

/* NAME TYPE ADDR: 00F9: NAME(29) */
/* BASE TYPE ADDR: 00F5: BYTE_INDEX ARRAY(28) */
typedef char* va_list[1];

/* NAME TYPE ADDR: 0109: NAME(31) */
/* BASE TYPE ADDR: 0104: NEAR386 PROC(30) */
typedef int (INTFN)(void);

/* NAME TYPE ADDR: 0112: NAME(32) */
/* BASE TYPE ADDR: 008E: SCALAR(14) */
typedef void MVI;

/* NAME TYPE ADDR: 011F: NAME(34) */
/* BASE TYPE ADDR: 0119: NEAR386 PROC(33) */
typedef int (EACHOOKCALLBACKFUNC)(int arg0, int arg1);

/* NAME TYPE ADDR: 0136: NAME(35) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int arg_t;

/* NAME TYPE ADDR: 0144: NAME(37) */
/* BASE TYPE ADDR: 013F: NEAR386 PROC(36) */
typedef void (THREADPROC)(void);

/* NAME TYPE ADDR: 0152: NAME(38) */
/* BASE TYPE ADDR: 0119: NEAR386 PROC(33) */
typedef int (SYSTEMTASK)(int arg0, int arg1);

/* NAME TYPE ADDR: 0160: NAME(39) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int boolean;

/* NAME TYPE ADDR: 016B: NAME(40) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int fixed88;

/* NAME TYPE ADDR: 0176: NAME(41) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int fixed824;

/* NAME TYPE ADDR: 0182: NAME(42) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int fixed248;

/* NAME TYPE ADDR: 018E: NAME(43) */
/* BASE TYPE ADDR: 00BC: SCALAR(21) */
typedef long SDWORD;
/* 0198: SCALAR(44) = unsigned long */

/* NAME TYPE ADDR: 01A8: NAME(45) */
/* BASE TYPE ADDR: 0198: SCALAR(44) */
typedef unsigned long DWORD;

/* NAME TYPE ADDR: 01B1: NAME(46) */
/* BASE TYPE ADDR: 0048: SCALAR(8) */
typedef unsigned short WORD;

/* NAME TYPE ADDR: 01B9: NAME(47) */
/* BASE TYPE ADDR: 0040: SCALAR(7) */
typedef short SWORD;

/* NAME TYPE ADDR: 01C2: NAME(48) */
/* BASE TYPE ADDR: 0022: SCALAR(5) */
typedef signed char SBYTE;

/* NAME TYPE ADDR: 01CB: NAME(49) */
/* BASE TYPE ADDR: 0030: SCALAR(6) */
typedef unsigned char UBYTE;

/* NAME TYPE ADDR: 01D4: NAME(50) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int BOOL;

/* NAME TYPE ADDR: 01DC: NAME(51) */
/* BASE TYPE ADDR: 008E: SCALAR(14) */
typedef void Stm_Chunk;

/* NAME TYPE ADDR: 01EC: NAME(53) */
/* BASE TYPE ADDR: 01E9: NEAR386 PTR(52) */
typedef Stm_Chunk* lpStm_Chunk;

/* NAME TYPE ADDR: 0206: NAME(57) */
/* BASE TYPE ADDR: 0203: NEAR386 PTR(56) */
/* 01FE: NEAR386 PROC(55) */
typedef void (*Sched_tFunctionPt)(void* arg0);

/* NAME TYPE ADDR: 021B: NAME(58) */
/* BASE TYPE ADDR: 0040: SCALAR(7) */
typedef short Draw_tContext;

/* NAME TYPE ADDR: 0235: NAME(61) */
/* BASE TYPE ADDR: 0232: NEAR386 PTR(60) */
/* 022C: NEAR386 PROC(59) */
typedef void (*Transformer_AnimCallbackFunc)(void* arg0, void* arg1);

/* NAME TYPE ADDR: 0259: NAME(63) */
/* BASE TYPE ADDR: 0255: BYTE_INDEX ARRAY(62) */
typedef short tAccTable[112];

/* NAME TYPE ADDR: 0266: NAME(64) */
/* BASE TYPE ADDR: 0198: SCALAR(44) */
typedef unsigned long time_t;

/* NAME TYPE ADDR: 0270: NAME(65) */
/* BASE TYPE ADDR: 005F: SCALAR(10) */
typedef unsigned int ino_t;

/* NAME TYPE ADDR: 0279: NAME(66) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int dev_t;

/* NAME TYPE ADDR: 0282: NAME(67) */
/* BASE TYPE ADDR: 00BC: SCALAR(21) */
typedef long off_t;

/* NAME TYPE ADDR: 028B: NAME(68) */
/* BASE TYPE ADDR: 0198: SCALAR(44) */
typedef unsigned long clock_t;

/* NAME TYPE ADDR: 0296: NAME(69) */
/* BASE TYPE ADDR: 0198: SCALAR(44) */
typedef unsigned long time_t;

/* NAME TYPE ADDR: 02DE: NAME(75) */
/* BASE TYPE ADDR: 02B0: FIELD_LIST(74) */
#pragma pack(push, 1)
/* number of fields = 4, size = 0x000c [12 bytes] */
struct RecordInfo
{
    /* offset = 0x0000 [0] */
    char name[8];
    /* offset = 0x0008 [8] */
    unsigned int skill : 1;
    /* offset = 0x0008 [8] */
    unsigned int car : 3;
    /* offset = 0x0008 [8] */
    unsigned int time : 28;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 035C: NAME(91) */
/* BASE TYPE ADDR: 032D: FIELD_LIST(90) */
#pragma pack(push, 1)
/* number of fields = 4, size = 0x0011 [17 bytes] */
struct tRecordBuffer
{
    /* offset = 0x0000 [0] */
    char sName[9];
    /* offset = 0x0009 [9] */
    short nCar;
    /* offset = 0x000b [11] */
    int nTime;
    /* offset = 0x000f [15] */
    short nPlayMode;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 040D: NAME(108) */
/* BASE TYPE ADDR: 03B2: FIELD_LIST(107) */
#pragma pack(push, 1)
/* number of fields = 8, size = 0x001a [26 bytes] */
struct __iobuf
{
    /* offset = 0x0000 [0] */
    unsigned char* _ptr;
    /* offset = 0x0004 [4] */
    int _cnt;
    /* offset = 0x0008 [8] */
    unsigned char* _base;
    /* offset = 0x000c [12] */
    unsigned int _flag;
    /* offset = 0x0010 [16] */
    int _handle;
    /* offset = 0x0014 [20] */
    unsigned int _bufsize;
    /* offset = 0x0018 [24] */
    unsigned char _ungotten;
    /* offset = 0x0019 [25] */
    unsigned char _tmpfchar;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0418: NAME(109) */
/* BASE TYPE ADDR: 040D: NAME(108) */
typedef struct __iobuf FILE;

/* NAME TYPE ADDR: 043E: NAME(113) */
/* BASE TYPE ADDR: 0427: FIELD_LIST(112) */
#pragma pack(push, 1)
/* number of fields = 3, size = 0x000c [12 bytes] */
struct coorddef
{
    /* offset = 0x0000 [0] */
    int x;
    /* offset = 0x0004 [4] */
    int y;
    /* offset = 0x0008 [8] */
    int z;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 044A: NAME(114) */
/* BASE TYPE ADDR: 043E: NAME(113) */
typedef struct coorddef LIBCOORD;

/* NAME TYPE ADDR: 0482: NAME(117) */
/* BASE TYPE ADDR: 045A: FIELD_LIST(116) */
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

/* NAME TYPE ADDR: 048E: NAME(118) */
/* BASE TYPE ADDR: 0482: NAME(117) */
typedef struct Stm_Quad Stm_Quad;

/* NAME TYPE ADDR: 04C1: NAME(121) */
/* BASE TYPE ADDR: 049D: FIELD_LIST(120) */
#pragma pack(push, 1)
/* number of fields = 2, size = 0x0002 [2 bytes] */
struct Stm_SimQuad
{
    /* offset = 0x0000 [0] */
    UBYTE rotationIndex;
    /* offset = 0x0001 [1] */
    UBYTE surface;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 04D0: NAME(122) */
/* BASE TYPE ADDR: 04C1: NAME(121) */
typedef struct Stm_SimQuad Stm_SimQuad;

/* NAME TYPE ADDR: 0507: NAME(127) */
/* BASE TYPE ADDR: 04EA: FIELD_LIST(126) */
#pragma pack(push, 1)
/* number of fields = 2, size = 0x000c [12 bytes] */
struct Stm_Rotation
{
    /* offset = 0x0000 [0] */
    SWORD normal[3];
    /* offset = 0x0006 [6] */
    SWORD forward[3];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0517: NAME(128) */
/* BASE TYPE ADDR: 0507: NAME(127) */
typedef struct Stm_Rotation Stm_Rotation;

/* NAME TYPE ADDR: 057E: NAME(131) */
/* BASE TYPE ADDR: 052B: FIELD_LIST(130) */
#pragma pack(push, 1)
/* number of fields = 5, size = 0x0008 [8 bytes] */
struct Stm_SimSlice
{
    /* offset = 0x0000 [0] */
    WORD quadIndex;
    /* offset = 0x0002 [2] */
    UBYTE quadCount;
    /* offset = 0x0003 [3] */
    UBYTE musicIndex;
    /* offset = 0x0004 [4] */
    SWORD leftLinkSlice;
    /* offset = 0x0006 [6] */
    SWORD rightLinkSlice;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 058F: NAME(132) */
/* BASE TYPE ADDR: 057E: NAME(131) */
typedef struct Stm_SimSlice Stm_SimSlice;

/* NAME TYPE ADDR: 05BF: NAME(136) */
/* BASE TYPE ADDR: 05A8: FIELD_LIST(135) */
#pragma pack(push, 1)
/* number of fields = 3, size = 0x0006 [6 bytes] */
struct COORD16
{
    /* offset = 0x0000 [0] */
    short x;
    /* offset = 0x0002 [2] */
    short y;
    /* offset = 0x0004 [4] */
    short z;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 05CB: NAME(137) */
/* BASE TYPE ADDR: 05BF: NAME(136) */
typedef struct COORD16 COORD16;

/* NAME TYPE ADDR: 0690: NAME(140) */
/* BASE TYPE ADDR: 05DC: FIELD_LIST(139) */
#pragma pack(push, 1)
/* number of fields = 15, size = 0x0080 [128 bytes] */
struct BWorldSm_Pos
{
    /* offset = 0x0000 [0] */
    LIBCOORD pos;
    /* offset = 0x000c [12] */
    int slice;
    /* offset = 0x0010 [16] */
    Stm_Quad* stmQuad;
    /* offset = 0x0014 [20] */
    Stm_SimQuad* simQuad;
    /* offset = 0x0018 [24] */
    Stm_Rotation* simQRot;
    /* offset = 0x001c [28] */
    Stm_SimSlice* simSlice;
    /* offset = 0x0020 [32] */
    LIBCOORD quadPts[4];
    /* offset = 0x0050 [80] */
    COORD16 quadPts16[4];
    /* offset = 0x0068 [104] */
    int rez;
    /* offset = 0x006c [108] */
    short sliceChanged;
    /* offset = 0x006e [110] */
    short quadChanged;
    /* offset = 0x0070 [112] */
    int quad;
    /* offset = 0x0074 [116] */
    int chunk;
    /* offset = 0x0078 [120] */
    int slot;
    /* offset = 0x007c [124] */
    int lastRezRequested;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 06B3: NAME(143) */
/* BASE TYPE ADDR: 06A5: FIELD_LIST(142) */
#pragma pack(push, 1)
/* number of fields = 1, size = 0x0024 [36 bytes] */
struct matrixtdef
{
    /* offset = 0x0000 [0] */
    int m[9];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 06C2: NAME(144) */
/* BASE TYPE ADDR: 06B3: NAME(143) */
typedef struct matrixtdef MATRIX3DT;

/* NAME TYPE ADDR: 06D0: NAME(145) */
/* BASE TYPE ADDR: 0787: FIELD_LIST(151) */
#pragma pack(push, 1)
/* number of fields = 39, size = 0x01d9 [473 bytes] */
struct BO_tNewtonObj
{
    /* offset = 0x0000 [0] */
    int objID;
    /* offset = 0x0004 [4] */
    unsigned short oldSlice;
    /* offset = 0x0006 [6] */
    unsigned short totalSlice;
    /* offset = 0x0008 [8] */
    BWorldSm_Pos simRoadInfo;
    /* offset = 0x0088 [136] */
    int distToPlayer;
    /* offset = 0x008c [140] */
    unsigned char simOptz;
    /* offset = 0x008d [141] */
    unsigned char active;
    /* offset = 0x008e [142] */
    unsigned char firstFlight;
    /* offset = 0x008f [143] */
    unsigned char reOrthoCounter;
    /* offset = 0x0090 [144] */
    unsigned char bounce;
    /* offset = 0x0091 [145] */
    int gravityMult;
    /* offset = 0x0095 [149] */
    int cumulatedRot;
    /* offset = 0x0099 [153] */
    LIBCOORD position;
    /* offset = 0x00a5 [165] */
    LIBCOORD linearVel;
    /* offset = 0x00b1 [177] */
    int mass;
    /* offset = 0x00b5 [181] */
    int massInv;
    /* offset = 0x00b9 [185] */
    int speedXZ;
    /* offset = 0x00bd [189] */
    int xRelRoadCenter;
    /* offset = 0x00c1 [193] */
    MATRIX3DT orientMat;
    /* offset = 0x00e5 [229] */
    LIBCOORD angularVel;
    /* offset = 0x00f1 [241] */
    int moInertia;
    /* offset = 0x00f5 [245] */
    int moInertiaInv;
    /* offset = 0x00f9 [249] */
    LIBCOORD orientationToGround;
    /* offset = 0x0105 [261] */
    LIBCOORD dimension;
    /* offset = 0x0111 [273] */
    int dimensionRadius;
    /* offset = 0x0115 [277] */
    MATRIX3DT roadMatrix;
    /* offset = 0x0139 [313] */
    LIBCOORD roadCenterPoint;
    /* offset = 0x0145 [325] */
    int roadYaw;
    /* offset = 0x0149 [329] */
    unsigned short flightTime;
    /* offset = 0x014b [331] */
    unsigned short deadTimer;
    /* offset = 0x014d [333] */
    int flatSpinVel;
    /* offset = 0x0151 [337] */
    int groundElevation;
    /* offset = 0x0155 [341] */
    int groundVel;
    /* offset = 0x0159 [345] */
    int objAltitude;
    /* offset = 0x015d [349] */
    BO_tNewtonCollisionInfo collision;
    /* offset = 0x017d [381] */
    int groundSurfaceType;
    /* offset = 0x0181 [385] */
    int driveSurfaceType;
    /* offset = 0x0185 [389] */
    MATRIX3DT shadowMat;
    /* offset = 0x01a9 [425] */
    LIBCOORD shadowCoord[4];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 074B: NAME(148) */
/* BASE TYPE ADDR: 06E6: FIELD_LIST(147) */
#pragma pack(push, 1)
/* number of fields = 6, size = 0x0020 [32 bytes] */
struct BO_tNewtonCollisionInfo
{
    /* offset = 0x0000 [0] */
    int impulse;
    /* offset = 0x0004 [4] */
    struct BO_tNewtonObj* otherObj;
    /* offset = 0x0008 [8] */
    int sfxType;
    /* offset = 0x000c [12] */
    int disableCollisionTimer;
    /* offset = 0x0010 [16] */
    LIBCOORD collisionPoint;
    /* offset = 0x001c [28] */
    int objOverWall;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0767: NAME(149) */
/* BASE TYPE ADDR: 074B: NAME(148) */
typedef struct BO_tNewtonCollisionInfo BO_tNewtonCollisionInfo;

/* NAME TYPE ADDR: 09D5: NAME(152) */
/* BASE TYPE ADDR: 06D0: NAME(145) */
typedef struct BO_tNewtonObj BO_tNewtonObj;

/* NAME TYPE ADDR: 0ABF: NAME(156) */
/* BASE TYPE ADDR: 09EF: FIELD_LIST(155) */
#pragma pack(push, 1)
/* number of fields = 14, size = 0x003d [61 bytes] */
struct GameSetup_tCarData
{
    /* offset = 0x0000 [0] */
    int carType;
    /* offset = 0x0004 [4] */
    int carClass;
    /* offset = 0x0008 [8] */
    int Transmission;
    /* offset = 0x000c [12] */
    int Colour;
    /* offset = 0x0010 [16] */
    int RampSteering;
    /* offset = 0x0014 [20] */
    int RampGas;
    /* offset = 0x0018 [24] */
    int RampBrake;
    /* offset = 0x001c [28] */
    int FrontDownForce;
    /* offset = 0x0020 [32] */
    int RearDownForce;
    /* offset = 0x0024 [36] */
    int SteeringSensitivity;
    /* offset = 0x0028 [40] */
    int BrakeBias;
    /* offset = 0x002c [44] */
    int GearRatio;
    /* offset = 0x0030 [48] */
    int carNameIndex;
    /* offset = 0x0034 [52] */
    char driver[9];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0AD6: NAME(157) */
/* BASE TYPE ADDR: 0ABF: NAME(156) */
typedef struct GameSetup_tCarData GameSetup_tCarData;

/* NAME TYPE ADDR: 0B84: NAME(162) */
/* BASE TYPE ADDR: 0AF9: FIELD_LIST(161) */
#pragma pack(push, 1)
/* number of fields = 11, size = 0x0064 [100 bytes] */
struct Car_tStats
{
    /* offset = 0x0000 [0] */
    int sliceTotal;
    /* offset = 0x0004 [4] */
    int sliceTime;
    /* offset = 0x0008 [8] */
    int slice;
    /* offset = 0x000c [12] */
    int lastSlice;
    /* offset = 0x0010 [16] */
    int lap;
    /* offset = 0x0014 [20] */
    int lapTime;
    /* offset = 0x0018 [24] */
    int time[8];
    /* offset = 0x0038 [56] */
    int topSpeed[8];
    /* offset = 0x0058 [88] */
    int position;
    /* offset = 0x005c [92] */
    int fatalCrashes;
    /* offset = 0x0060 [96] */
    int finishType;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0B93: NAME(163) */
/* BASE TYPE ADDR: 0B84: NAME(162) */
typedef struct Car_tStats Car_tStats;

/* NAME TYPE ADDR: 0C63: NAME(165) */
/* BASE TYPE ADDR: 0BA2: FIELD_LIST(164) */
#pragma pack(push, 1)
/* number of fields = 13, size = 0x0013 [19 bytes] */
struct Car_tControl
{
    /* offset = 0x0000 [0] */
    char desiredGasLevel;
    /* offset = 0x0001 [1] */
    char desiredBrakeLevel;
    /* offset = 0x0002 [2] */
    char desiredGear;
    /* offset = 0x0003 [3] */
    char gasLevel;
    /* offset = 0x0004 [4] */
    char brakeLevel;
    /* offset = 0x0005 [5] */
    char lastGear;
    /* offset = 0x0006 [6] */
    char gear;
    /* offset = 0x0007 [7] */
    char gearShiftTimer;
    /* offset = 0x0008 [8] */
    char handBrake;
    /* offset = 0x0009 [9] */
    char horn;
    /* offset = 0x000a [10] */
    char lookBehind;
    /* offset = 0x000b [11] */
    int desiredSteering;
    /* offset = 0x000f [15] */
    int steering;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0C74: NAME(166) */
/* BASE TYPE ADDR: 0C63: NAME(165) */
typedef struct Car_tControl Car_tControl;

/* NAME TYPE ADDR: 0F6B: NAME(178) */
/* BASE TYPE ADDR: 0CAD: FIELD_LIST(177) */
#pragma pack(push, 1)
/* number of fields = 40, size = 0x01dc [476 bytes] */
struct Car_tSpecs
{
    /* offset = 0x0000 [0] */
    int mass;
    /* offset = 0x0004 [4] */
    int numGears;
    /* offset = 0x0008 [8] */
    int gearShiftDelay;
    /* offset = 0x000c [12] */
    int velToRpmRatio[8];
    /* offset = 0x002c [44] */
    int gearEfficiency[8];
    /* offset = 0x004c [76] */
    int torqueCurve[41];
    /* offset = 0x00f0 [240] */
    int redline;
    /* offset = 0x00f4 [244] */
    int maxSpeed;
    /* offset = 0x00f8 [248] */
    int frontDriveRatio;
    /* offset = 0x00fc [252] */
    int maxBrakeAcc;
    /* offset = 0x0100 [256] */
    int frontBrakeRatio;
    /* offset = 0x0104 [260] */
    char gasIncCurve[8];
    /* offset = 0x010c [268] */
    char gasDecCurve[8];
    /* offset = 0x0114 [276] */
    char brakeIncCurve[8];
    /* offset = 0x011c [284] */
    char brakeDecCurve[8];
    /* offset = 0x0124 [292] */
    int wheelBase;
    /* offset = 0x0128 [296] */
    int frontGripBias;
    /* offset = 0x012c [300] */
    int maxSteeringAcc;
    /* offset = 0x0130 [304] */
    int turnInRamp;
    /* offset = 0x0134 [308] */
    int turnOutRamp;
    /* offset = 0x0138 [312] */
    int lateralGripMult;
    /* offset = 0x013c [316] */
    int aeroDownForce;
    /* offset = 0x0140 [320] */
    int gTransferFactor;
    /* offset = 0x0144 [324] */
    int gasOffFactor;
    /* offset = 0x0148 [328] */
    int slideMultiplier;
    /* offset = 0x014c [332] */
    int spinVelCap;
    /* offset = 0x0150 [336] */
    int slideVelCap;
    /* offset = 0x0154 [340] */
    int slideAssistFactor;
    /* offset = 0x0158 [344] */
    int pushFactor;
    /* offset = 0x015c [348] */
    int lowTurnFactor;
    /* offset = 0x0160 [352] */
    int highTurnFactor;
    /* offset = 0x0164 [356] */
    int redlineInv;
    /* offset = 0x0168 [360] */
    int gearVelInv[8];
    /* offset = 0x0188 [392] */
    int velToRpmRatioInv[8];
    /* offset = 0x01a8 [424] */
    int gearAccCoeff[8];
    /* offset = 0x01c8 [456] */
    int dragCoeff;
    /* offset = 0x01cc [460] */
    int alphaToAccRotInertia;
    /* offset = 0x01d0 [464] */
    int accToAlphaRotInertia;
    /* offset = 0x01d4 [468] */
    int lateralGripMultInv;
    /* offset = 0x01d8 [472] */
    int maxTorque;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0F7A: NAME(179) */
/* BASE TYPE ADDR: 0F6B: NAME(178) */
typedef struct Car_tSpecs Car_tSpecs;

/* NAME TYPE ADDR: 0F91: NAME(182) */
/* BASE TYPE ADDR: 1686: FIELD_LIST(231) */
#pragma pack(push, 1)
/* number of fields = 106, size = 0x0471 [1137 bytes] */
struct Car_tObj
{
    /* offset = 0x0000 [0] */
    BO_tNewtonObj N;
    /* offset = 0x00d9 [217] */
    char carName[9];
    /* offset = 0x00e2 [226] */
    int carIndex;
    /* offset = 0x00e6 [230] */
    int humanIndex;
    /* offset = 0x00ea [234] */
    int sortIndex;
    /* offset = 0x00ee [238] */
    int carFlags;
    /* offset = 0x00f2 [242] */
    int lap;
    /* offset = 0x00f6 [246] */
    int unlap;
    /* offset = 0x00fa [250] */
    int roadSurface;
    /* offset = 0x00fe [254] */
    int yaw;
    /* offset = 0x0102 [258] */
    int rampSteering;
    /* offset = 0x0106 [262] */
    int rampGas;
    /* offset = 0x010a [266] */
    int rampBrake;
    /* offset = 0x010e [270] */
    int roadSpan;
    /* offset = 0x0112 [274] */
    int glue;
    /* offset = 0x0116 [278] */
    GameSetup_tCarData* carInfo;
    /* offset = 0x011a [282] */
    Car_tStats stats;
    /* offset = 0x017e [382] */
    int crash;
    /* offset = 0x0182 [386] */
    int wrongway;
    /* offset = 0x0186 [390] */
    LIBCOORD linearAcc;
    /* offset = 0x0192 [402] */
    LIBCOORD angularAcc;
    /* offset = 0x019e [414] */
    LIBCOORD linearAcc_ch;
    /* offset = 0x01aa [426] */
    LIBCOORD linearVel_ch;
    /* offset = 0x01b6 [438] */
    LIBCOORD angularVel_ch;
    /* offset = 0x01c2 [450] */
    LIBCOORD linearAcc_rh;
    /* offset = 0x01ce [462] */
    Car_tControl control;
    /* offset = 0x01e1 [481] */
    Car_tSpecs* specs;
    /* offset = 0x01e5 [485] */
    int flywheelRpm;
    /* offset = 0x01e9 [489] */
    int wheelSpin;
    /* offset = 0x01ed [493] */
    int frontWheelSpin;
    /* offset = 0x01f1 [497] */
    int wheelLock;
    /* offset = 0x01f5 [501] */
    int timer;
    /* offset = 0x01f9 [505] */
    int velocity;
    /* offset = 0x01fd [509] */
    int maxTurnAngle;
    /* offset = 0x0201 [513] */
    int angularVel;
    /* offset = 0x0205 [517] */
    int slide;
    /* offset = 0x0209 [521] */
    int extraRenderingYaw;
    /* offset = 0x020d [525] */
    int gTransferFront;
    /* offset = 0x0211 [529] */
    int frontSkid;
    /* offset = 0x0215 [533] */
    int rearSkid;
    /* offset = 0x0219 [537] */
    int oldSkidState;
    /* offset = 0x021d [541] */
    LIBCOORD oldSkidPoint[4];
    /* offset = 0x024d [589] */
    int oldAudioSkidState;
    /* offset = 0x0251 [593] */
    int ffbMax;
    /* offset = 0x0255 [597] */
    int ffbAcc;
    /* offset = 0x0259 [601] */
    Sched_tFunctionPt funcUpdateRoadInfo;
    /* offset = 0x025d [605] */
    Sched_tFunctionPt funcReplay;
    /* offset = 0x0261 [609] */
    Sched_tFunctionPt funcControl;
    /* offset = 0x0265 [613] */
    Sched_tFunctionPt funcStats;
    /* offset = 0x0269 [617] */
    Sched_tFunctionPt funcHandlingPhysics;
    /* offset = 0x026d [621] */
    Sched_tFunctionPt funcGravityPhysics;
    /* offset = 0x0271 [625] */
    Sched_tFunctionPt funcQDPhysicsUpdateVel;
    /* offset = 0x0275 [629] */
    Sched_tFunctionPt funcQDPhysicsUpdateRot;
    /* offset = 0x0279 [633] */
    Sched_tFunctionPt funcTestMeForCollisions;
    /* offset = 0x027d [637] */
    Sched_tFunctionPt funcDoPostCollisionStuff;
    /* offset = 0x0281 [641] */
    int desiredPosition;
    /* offset = 0x0285 [645] */
    int desiredSpeed;
    /* offset = 0x0289 [649] */
    int currentSpeed;
    /* offset = 0x028d [653] */
    int speed;
    /* offset = 0x0291 [657] */
    int laneSlack;
    /* offset = 0x0295 [661] */
    int AIFlags;
    /* offset = 0x0299 [665] */
    int roadPosition;
    /* offset = 0x029d [669] */
    struct Car_tObj* basisCar;
    /* offset = 0x02a1 [673] */
    int aiShiftDuration;
    /* offset = 0x02a5 [677] */
    int aiShiftTimer;
    /* offset = 0x02a9 [681] */
    int redLine;
    /* offset = 0x02ad [685] */
    int tailgateTimer;
    /* offset = 0x02b1 [689] */
    int physicsModelTimer;
    /* offset = 0x02b5 [693] */
    int safeSpeedAdjust;
    /* offset = 0x02b9 [697] */
    int laneChangeSpeed;
    /* offset = 0x02bd [701] */
    int topSpeeds[7];
    /* offset = 0x02d9 [729] */
    int invTopSpeeds[7];
    /* offset = 0x02f5 [757] */
    tAccTable accTable;
    /* offset = 0x03d5 [981] */
    int speedFactor;
    /* offset = 0x03d9 [985] */
    int lifeCounter;
    /* offset = 0x03dd [989] */
    int highHandling;
    /* offset = 0x03e1 [993] */
    int lowHandling;
    /* offset = 0x03e5 [997] */
    int handlingMult;
    /* offset = 0x03e9 [1001] */
    int barrierThinkHarder;
    /* offset = 0x03ed [1005] */
    int laneIndex;
    /* offset = 0x03f1 [1009] */
    LIBCOORD desiredVector;
    /* offset = 0x03fd [1021] */
    int aCarWRTDesired;
    /* offset = 0x0401 [1025] */
    LIBCOORD angularAcc_ch;
    /* offset = 0x040d [1037] */
    int driveDirectionReverseTime;
    /* offset = 0x0411 [1041] */
    int driveDirection;
    /* offset = 0x0415 [1045] */
    int driveDirectionTimer;
    /* offset = 0x0419 [1049] */
    int aCar;
    /* offset = 0x041d [1053] */
    int aDesired;
    /* offset = 0x0421 [1057] */
    int aCarWRTRoad;
    /* offset = 0x0425 [1061] */
    int lateralVelocity;
    /* offset = 0x0429 [1065] */
    int psychoMode;
    /* offset = 0x042d [1069] */
    int hitCount;
    /* offset = 0x0431 [1073] */
    struct Car_tObj* target;
    /* offset = 0x0435 [1077] */
    int targetLatPos;
    /* offset = 0x0439 [1081] */
    int timeOffRoad;
    /* offset = 0x043d [1085] */
    int max_clacc;
    /* offset = 0x0441 [1089] */
    int max_aa;
    /* offset = 0x0445 [1093] */
    int aiGlue;
    /* offset = 0x0449 [1097] */
    int drag;
    /* offset = 0x044d [1101] */
    int tSpeedFactor;
    /* offset = 0x0451 [1105] */
    int slackProb;
    /* offset = 0x0455 [1109] */
    Transformer_tNodeInfo* renderDetail[4];
    /* offset = 0x0465 [1125] */
    Cars_tCollisionInfo collision;
    /* offset = 0x047d [1149] */
    int audioCount;
    /* offset = 0x0481 [1153] */
    Cars_tAudio audio[5];
    /* offset = 0x04f9 [1273] */
    Cars_tRenderInfo render;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0FAA: NAME(186) */
/* BASE TYPE ADDR: 1333: FIELD_LIST(214) */
#pragma pack(push, 1)
/* number of fields = 7, size = 0x00c8 [200 bytes] */
struct Transformer_tNodeInfo
{
    /* offset = 0x0000 [0] */
    int type;
    /* offset = 0x0004 [4] */
    struct Transformer_tNodeInfo* parentPtr;
    /* offset = 0x0008 [8] */
    int numChild;
    /* offset = 0x000c [12] */
    struct Transformer_tNodeInfo* childPtr[5];
    /* offset = 0x0020 [32] */
    Transformer_tTransformNode trans;
    /* offset = 0x008c [140] */
    Transformer_tGeometryNode geom;
    /* offset = 0x00bc [188] */
    Transformer_tAnimInfo anim;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 104A: NAME(190) */
/* BASE TYPE ADDR: 0FCD: FIELD_LIST(189) */
#pragma pack(push, 1)
/* number of fields = 5, size = 0x006c [108 bytes] */
struct Transformer_tTransformNode
{
    /* offset = 0x0000 [0] */
    MATRIX3DT orientMatRelParent;
    /* offset = 0x0024 [36] */
    LIBCOORD translationRelParent;
    /* offset = 0x0030 [48] */
    MATRIX3DT cumulatedOrientMat;
    /* offset = 0x0054 [84] */
    LIBCOORD cumulatedTranslation;
    /* offset = 0x0060 [96] */
    LIBCOORD translationalOffSet;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 1069: NAME(191) */
/* BASE TYPE ADDR: 104A: NAME(190) */
typedef struct Transformer_tTransformNode Transformer_tTransformNode;

/* NAME TYPE ADDR: 1088: NAME(192) */
/* BASE TYPE ADDR: 05CB: NAME(137) */
typedef COORD16 Transformer_tVertex;

/* NAME TYPE ADDR: 10F7: NAME(197) */
/* BASE TYPE ADDR: 10AC: FIELD_LIST(196) */
#pragma pack(push, 1)
/* number of fields = 5, size = 0x000c [12 bytes] */
struct Transformer_tFacet
{
    /* offset = 0x0000 [0] */
    unsigned char type;
    /* offset = 0x0001 [1] */
    unsigned char animOffset;
    /* offset = 0x0002 [2] */
    unsigned short textureIndex;
    /* offset = 0x0004 [4] */
    unsigned char vertexId[4];
    /* offset = 0x0008 [8] */
    char textureName[4];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 110E: NAME(198) */
/* BASE TYPE ADDR: 10F7: NAME(197) */
typedef struct Transformer_tFacet Transformer_tFacet;

/* NAME TYPE ADDR: 11B0: NAME(201) */
/* BASE TYPE ADDR: 1129: FIELD_LIST(200) */
#pragma pack(push, 1)
/* number of fields = 6, size = 0x0018 [24 bytes] */
struct Transformer_tDrawControlInfo
{
    /* offset = 0x0000 [0] */
    int zSortNeeded;
    /* offset = 0x0004 [4] */
    int partLinkPriority;
    /* offset = 0x0008 [8] */
    int minYawInvisibility;
    /* offset = 0x000c [12] */
    int maxYawInvisibility;
    /* offset = 0x0010 [16] */
    int minPitchInvisibility;
    /* offset = 0x0014 [20] */
    int maxPitchInvisibility;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 11D1: NAME(202) */
/* BASE TYPE ADDR: 11B0: NAME(201) */
typedef struct Transformer_tDrawControlInfo Transformer_tDrawControlInfo;

/* NAME TYPE ADDR: 1247: NAME(204) */
/* BASE TYPE ADDR: 11F2: FIELD_LIST(203) */
#pragma pack(push, 1)
/* number of fields = 6, size = 0x0034 [52 bytes] */
struct Transformer_tObj
{
    /* offset = 0x0000 [0] */
    int numVertex;
    /* offset = 0x0004 [4] */
    int numFacet;
    /* offset = 0x0008 [8] */
    LIBCOORD translation;
    /* offset = 0x0014 [20] */
    Transformer_tVertex* vertex;
    /* offset = 0x0018 [24] */
    Transformer_tFacet* facet;
    /* offset = 0x001c [28] */
    Transformer_tDrawControlInfo drawControl;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 125C: NAME(205) */
/* BASE TYPE ADDR: 1247: NAME(204) */
typedef struct Transformer_tObj Transformer_tObj;

/* NAME TYPE ADDR: 1297: NAME(209) */
/* BASE TYPE ADDR: 127A: FIELD_LIST(208) */
#pragma pack(push, 1)
/* number of fields = 2, size = 0x0030 [48 bytes] */
struct Transformer_tGeometryNode
{
    /* offset = 0x0000 [0] */
    int numSubObj;
    /* offset = 0x0004 [4] */
    Transformer_tObj* obj[11];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 12B5: NAME(210) */
/* BASE TYPE ADDR: 1297: NAME(209) */
typedef struct Transformer_tGeometryNode Transformer_tGeometryNode;

/* NAME TYPE ADDR: 12FF: NAME(212) */
/* BASE TYPE ADDR: 12D3: FIELD_LIST(211) */
#pragma pack(push, 1)
/* number of fields = 3, size = 0x000c [12 bytes] */
struct Transformer_tAnimInfo
{
    /* offset = 0x0000 [0] */
    Transformer_AnimCallbackFunc func;
    /* offset = 0x0004 [4] */
    void* parameter1;
    /* offset = 0x0008 [8] */
    void* parameter2;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 1319: NAME(213) */
/* BASE TYPE ADDR: 12FF: NAME(212) */
typedef struct Transformer_tAnimInfo Transformer_tAnimInfo;

/* NAME TYPE ADDR: 1386: NAME(215) */
/* BASE TYPE ADDR: 0FAA: NAME(186) */
typedef struct Transformer_tNodeInfo Transformer_tNodeInfo;

/* NAME TYPE ADDR: 1420: NAME(219) */
/* BASE TYPE ADDR: 13A9: FIELD_LIST(218) */
#pragma pack(push, 1)
/* number of fields = 6, size = 0x0018 [24 bytes] */
struct Cars_tCollisionInfo
{
    /* offset = 0x0000 [0] */
    int resetTimer;
    /* offset = 0x0004 [4] */
    int bouncePitchAmplitude;
    /* offset = 0x0008 [8] */
    int bouncePitchTimer;
    /* offset = 0x000c [12] */
    int bounceRollAmplitude;
    /* offset = 0x0010 [16] */
    int bounceRollTimer;
    /* offset = 0x0014 [20] */
    int smoking;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 1438: NAME(220) */
/* BASE TYPE ADDR: 1420: NAME(219) */
typedef struct Cars_tCollisionInfo Cars_tCollisionInfo;

/* NAME TYPE ADDR: 1498: NAME(222) */
/* BASE TYPE ADDR: 1450: FIELD_LIST(221) */
#pragma pack(push, 1)
/* number of fields = 6, size = 0x0018 [24 bytes] */
struct Cars_tAudio
{
    /* offset = 0x0000 [0] */
    int type;
    /* offset = 0x0004 [4] */
    int channel;
    /* offset = 0x0008 [8] */
    int surface1;
    /* offset = 0x000c [12] */
    int surface2;
    /* offset = 0x0010 [16] */
    int force;
    /* offset = 0x0014 [20] */
    int panangle;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 14A8: NAME(223) */
/* BASE TYPE ADDR: 1498: NAME(222) */
typedef struct Cars_tAudio Cars_tAudio;

/* NAME TYPE ADDR: 165C: NAME(229) */
/* BASE TYPE ADDR: 14CB: FIELD_LIST(228) */
#pragma pack(push, 1)
/* number of fields = 22, size = 0x0078 [120 bytes] */
struct Cars_tRenderInfo
{
    /* offset = 0x0000 [0] */
    int colorIndex;
    /* offset = 0x0004 [4] */
    char* carTextureFile;
    /* offset = 0x0008 [8] */
    int carRemapID;
    /* offset = 0x000c [12] */
    int textureStartIndex;
    /* offset = 0x0010 [16] */
    int otherTextureStartIndex[3];
    /* offset = 0x001c [28] */
    int subDivideLevel;
    /* offset = 0x0020 [32] */
    int flashingCounter;
    /* offset = 0x0024 [36] */
    int lastFlashCounterGameTick;
    /* offset = 0x0028 [40] */
    int lastTrafficColorIndex;
    /* offset = 0x002c [44] */
    Transformer_tFacet* wheelAnimFacet[4];
    /* offset = 0x003c [60] */
    int wheelSwapCount;
    /* offset = 0x0040 [64] */
    Transformer_tFacet* brakeLightFacet[4];
    /* offset = 0x0050 [80] */
    int numBrakeLight;
    /* offset = 0x0054 [84] */
    int spoilerAngle;
    /* offset = 0x0058 [88] */
    int bodyPitch;
    /* offset = 0x005c [92] */
    int bodyRoll;
    /* offset = 0x0060 [96] */
    int currentPitch;
    /* offset = 0x0064 [100] */
    int currentRoll;
    /* offset = 0x0068 [104] */
    int pitchRollFactor;
    /* offset = 0x006c [108] */
    int gravelFactor;
    /* offset = 0x0070 [112] */
    int bumpyNess;
    /* offset = 0x0074 [116] */
    int scalarSpeed;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 1671: NAME(230) */
/* BASE TYPE ADDR: 165C: NAME(229) */
typedef struct Cars_tRenderInfo Cars_tRenderInfo;

/* Procedure params definition 0 - 02FF: NEAR386 PROC(81) */
/* typedef void (unnamed_proc)(int arg0, short* arg1, short* arg2); */

/* Procedure params definition 1 - 0309: NEAR386 PROC(83) */
/* typedef void (unnamed_proc)(int arg0, int* arg1, short* arg2); */

/* Procedure params definition 2 - 0310: NEAR386 PROC(84) */
/* typedef short (unnamed_proc)(short arg0, char* arg1); */

/* Procedure params definition 3 - 031E: NEAR386 PROC(87) */
/* typedef void (unnamed_proc)(int arg0, char* arg1); */

/* Procedure params definition 4 - 0324: NEAR386 PROC(88) */
/* typedef void (unnamed_proc)(char* arg0); */

/* Procedure params definition 5 - 0370: NEAR386 PROC(93) */
/* typedef void (unnamed_proc)(struct tRecordBuffer* arg0); */

/* Procedure params definition 6 - 0375: NEAR386 PROC(94) */
/* typedef void (unnamed_proc)(short arg0, struct tRecordBuffer* arg1); */

/* Procedure params definition 7 - 038C: NEAR386 PROC(99) */
/* typedef int (unnamed_proc)(short arg0); */

/* Procedure params definition 8 - 0391: NEAR386 PROC(100) */
/* typedef short (unnamed_proc)(short arg0, short arg1, char* arg2); */

/* Procedure params definition 9 - 03A4: NEAR386 PROC(104) */
/* typedef short (unnamed_proc)(short arg0, short arg1); */

/* Procedure params definition 10 - 1D1A: NEAR386 PROC(233) */
/* typedef short (unnamed_proc)(struct Car_tObj* arg0); */

/* Procedure params definition 11 - 1D21: NEAR386 PROC(234) */
/* typedef short (unnamed_proc)(short* arg0); */

/* Procedure params definition 12 - 1D26: NEAR386 PROC(235) */
/* typedef void (unnamed_proc)(short* arg0, short* arg1); */

/* Procedure params definition 13 - 1D2C: NEAR386 PROC(236) */
/* typedef short (unnamed_proc)(void); */

/* Procedure params definition 14 - 1D31: NEAR386 PROC(237) */
/* typedef char* (unnamed_proc)(int arg0); */

/* Procedure params definition 15 - 1D3A: NEAR386 PROC(239) */
/* typedef int (unnamed_proc)(int arg0); */

/* Procedure params definition 16 - 1D47: NEAR386 PROC(242) */
/* typedef int (unnamed_proc)(); */

/* Procedure params definition 17 - 1D4B: NEAR386 PROC(243) */
/* typedef short (unnamed_proc)(struct Car_tObj* arg0); */

/* Procedure params definition 18 - 1D51: NEAR386 PROC(244) */
/* typedef void (unnamed_proc)(int arg0); */

/* Procedure params definition 19 - 1D56: NEAR386 PROC(245) */
/* typedef char* (unnamed_proc)(struct Car_tObj* arg0); */

/* Procedure params definition 20 - 1D5C: NEAR386 PROC(246) */
/* typedef short (unnamed_proc)(struct Car_tObj* arg0, short arg1); */
