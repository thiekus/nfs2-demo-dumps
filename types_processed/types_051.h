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

/* NAME TYPE ADDR: 017B: NAME(42) */
/* BASE TYPE ADDR: 0178: NEAR386 PTR(41) */
/* 0173: NEAR386 PROC(40) */
typedef void (*Sched_tFunctionPt)(void* arg0);

/* NAME TYPE ADDR: 0190: NAME(43) */
/* BASE TYPE ADDR: 0097: SCALAR(16) */
typedef long SDWORD;
/* 019A: SCALAR(44) = unsigned long */

/* NAME TYPE ADDR: 01AA: NAME(45) */
/* BASE TYPE ADDR: 019A: SCALAR(44) */
typedef unsigned long DWORD;

/* NAME TYPE ADDR: 01B3: NAME(46) */
/* BASE TYPE ADDR: 0048: SCALAR(8) */
typedef unsigned short WORD;

/* NAME TYPE ADDR: 01BB: NAME(47) */
/* BASE TYPE ADDR: 0040: SCALAR(7) */
typedef short SWORD;

/* NAME TYPE ADDR: 01C4: NAME(48) */
/* BASE TYPE ADDR: 0022: SCALAR(5) */
typedef signed char SBYTE;

/* NAME TYPE ADDR: 01CD: NAME(49) */
/* BASE TYPE ADDR: 0030: SCALAR(6) */
typedef unsigned char UBYTE;

/* NAME TYPE ADDR: 01D6: NAME(50) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int BOOL;

/* NAME TYPE ADDR: 01DE: NAME(51) */
/* BASE TYPE ADDR: 00CD: SCALAR(22) */
typedef void Stm_Chunk;

/* NAME TYPE ADDR: 01EE: NAME(53) */
/* BASE TYPE ADDR: 01EB: NEAR386 PTR(52) */
typedef Stm_Chunk* lpStm_Chunk;

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

/* NAME TYPE ADDR: 031B: NAME(62) */
/* BASE TYPE ADDR: 024C: FIELD_LIST(61) */
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

/* NAME TYPE ADDR: 0331: NAME(63) */
/* BASE TYPE ADDR: 031B: NAME(62) */
typedef struct GameSetup_tCarData GameSetup_tCarData;

/* NAME TYPE ADDR: 035E: NAME(65) */
/* BASE TYPE ADDR: 0347: FIELD_LIST(64) */
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

/* NAME TYPE ADDR: 036A: NAME(66) */
/* BASE TYPE ADDR: 035E: NAME(65) */
typedef struct coorddef LIBCOORD;

/* NAME TYPE ADDR: 03A5: NAME(68) */
/* BASE TYPE ADDR: 0376: FIELD_LIST(67) */
#pragma pack(push, 1)
/* number of fields = 4, size = 0x0051 [81 bytes] */
struct Smack_tInitData
{
    /* offset = 0x0000 [0] */
    GameSetup_tCarData carData;
    /* offset = 0x003d [61] */
    int slice;
    /* offset = 0x0041 [65] */
    LIBCOORD position;
    /* offset = 0x004d [77] */
    int yaw;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 03B8: NAME(69) */
/* BASE TYPE ADDR: 03A5: NAME(68) */
typedef struct Smack_tInitData Smack_tInitData;

/* NAME TYPE ADDR: 03FB: NAME(73) */
/* BASE TYPE ADDR: 03D3: FIELD_LIST(72) */
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

/* NAME TYPE ADDR: 0407: NAME(74) */
/* BASE TYPE ADDR: 03FB: NAME(73) */
typedef struct Stm_Quad Stm_Quad;

/* NAME TYPE ADDR: 043A: NAME(77) */
/* BASE TYPE ADDR: 0416: FIELD_LIST(76) */
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

/* NAME TYPE ADDR: 0449: NAME(78) */
/* BASE TYPE ADDR: 043A: NAME(77) */
typedef struct Stm_SimQuad Stm_SimQuad;

/* NAME TYPE ADDR: 0480: NAME(83) */
/* BASE TYPE ADDR: 0463: FIELD_LIST(82) */
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

/* NAME TYPE ADDR: 0490: NAME(84) */
/* BASE TYPE ADDR: 0480: NAME(83) */
typedef struct Stm_Rotation Stm_Rotation;

/* NAME TYPE ADDR: 04F6: NAME(87) */
/* BASE TYPE ADDR: 04A3: FIELD_LIST(86) */
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

/* NAME TYPE ADDR: 0506: NAME(88) */
/* BASE TYPE ADDR: 04F6: NAME(87) */
typedef struct Stm_SimSlice Stm_SimSlice;

/* NAME TYPE ADDR: 0534: NAME(92) */
/* BASE TYPE ADDR: 051D: FIELD_LIST(91) */
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

/* NAME TYPE ADDR: 053F: NAME(93) */
/* BASE TYPE ADDR: 0534: NAME(92) */
typedef struct COORD16 COORD16;

/* NAME TYPE ADDR: 05FE: NAME(96) */
/* BASE TYPE ADDR: 054E: FIELD_LIST(95) */
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

/* NAME TYPE ADDR: 061F: NAME(99) */
/* BASE TYPE ADDR: 0612: FIELD_LIST(98) */
#pragma pack(push, 1)
/* number of fields = 1, size = 0x0024 [36 bytes] */
struct matrixtdef
{
    /* offset = 0x0000 [0] */
    int m[9];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 062D: NAME(100) */
/* BASE TYPE ADDR: 061F: NAME(99) */
typedef struct matrixtdef MATRIX3DT;

/* NAME TYPE ADDR: 063A: NAME(101) */
/* BASE TYPE ADDR: 06ED: FIELD_LIST(107) */
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

/* NAME TYPE ADDR: 06B3: NAME(104) */
/* BASE TYPE ADDR: 064F: FIELD_LIST(103) */
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

/* NAME TYPE ADDR: 06CE: NAME(105) */
/* BASE TYPE ADDR: 06B3: NAME(104) */
typedef struct BO_tNewtonCollisionInfo BO_tNewtonCollisionInfo;

/* NAME TYPE ADDR: 0935: NAME(108) */
/* BASE TYPE ADDR: 063A: NAME(101) */
typedef struct BO_tNewtonObj BO_tNewtonObj;

/* NAME TYPE ADDR: 09DE: NAME(114) */
/* BASE TYPE ADDR: 0955: FIELD_LIST(113) */
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

/* NAME TYPE ADDR: 09EC: NAME(115) */
/* BASE TYPE ADDR: 09DE: NAME(114) */
typedef struct Car_tStats Car_tStats;

/* NAME TYPE ADDR: 0ABB: NAME(117) */
/* BASE TYPE ADDR: 09FA: FIELD_LIST(116) */
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

/* NAME TYPE ADDR: 0ACB: NAME(118) */
/* BASE TYPE ADDR: 0ABB: NAME(117) */
typedef struct Car_tControl Car_tControl;

/* NAME TYPE ADDR: 0DB8: NAME(130) */
/* BASE TYPE ADDR: 0B03: FIELD_LIST(129) */
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

/* NAME TYPE ADDR: 0DC7: NAME(131) */
/* BASE TYPE ADDR: 0DB8: NAME(130) */
typedef struct Car_tSpecs Car_tSpecs;

/* NAME TYPE ADDR: 0DDE: NAME(134) */
/* BASE TYPE ADDR: 14D0: FIELD_LIST(183) */
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

/* NAME TYPE ADDR: 0DF7: NAME(138) */
/* BASE TYPE ADDR: 117D: FIELD_LIST(166) */
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

/* NAME TYPE ADDR: 0E95: NAME(142) */
/* BASE TYPE ADDR: 0E1A: FIELD_LIST(141) */
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

/* NAME TYPE ADDR: 0EB4: NAME(143) */
/* BASE TYPE ADDR: 0E95: NAME(142) */
typedef struct Transformer_tTransformNode Transformer_tTransformNode;

/* NAME TYPE ADDR: 0ED3: NAME(144) */
/* BASE TYPE ADDR: 053F: NAME(93) */
typedef COORD16 Transformer_tVertex;

/* NAME TYPE ADDR: 0F41: NAME(149) */
/* BASE TYPE ADDR: 0EF6: FIELD_LIST(148) */
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

/* NAME TYPE ADDR: 0F58: NAME(150) */
/* BASE TYPE ADDR: 0F41: NAME(149) */
typedef struct Transformer_tFacet Transformer_tFacet;

/* NAME TYPE ADDR: 0FFA: NAME(153) */
/* BASE TYPE ADDR: 0F73: FIELD_LIST(152) */
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

/* NAME TYPE ADDR: 101B: NAME(154) */
/* BASE TYPE ADDR: 0FFA: NAME(153) */
typedef struct Transformer_tDrawControlInfo Transformer_tDrawControlInfo;

/* NAME TYPE ADDR: 1091: NAME(156) */
/* BASE TYPE ADDR: 103C: FIELD_LIST(155) */
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

/* NAME TYPE ADDR: 10A6: NAME(157) */
/* BASE TYPE ADDR: 1091: NAME(156) */
typedef struct Transformer_tObj Transformer_tObj;

/* NAME TYPE ADDR: 10E1: NAME(161) */
/* BASE TYPE ADDR: 10C4: FIELD_LIST(160) */
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

/* NAME TYPE ADDR: 10FF: NAME(162) */
/* BASE TYPE ADDR: 10E1: NAME(161) */
typedef struct Transformer_tGeometryNode Transformer_tGeometryNode;

/* NAME TYPE ADDR: 1149: NAME(164) */
/* BASE TYPE ADDR: 111D: FIELD_LIST(163) */
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

/* NAME TYPE ADDR: 1163: NAME(165) */
/* BASE TYPE ADDR: 1149: NAME(164) */
typedef struct Transformer_tAnimInfo Transformer_tAnimInfo;

/* NAME TYPE ADDR: 11D0: NAME(167) */
/* BASE TYPE ADDR: 0DF7: NAME(138) */
typedef struct Transformer_tNodeInfo Transformer_tNodeInfo;

/* NAME TYPE ADDR: 126A: NAME(171) */
/* BASE TYPE ADDR: 11F3: FIELD_LIST(170) */
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

/* NAME TYPE ADDR: 1282: NAME(172) */
/* BASE TYPE ADDR: 126A: NAME(171) */
typedef struct Cars_tCollisionInfo Cars_tCollisionInfo;

/* NAME TYPE ADDR: 12E2: NAME(174) */
/* BASE TYPE ADDR: 129A: FIELD_LIST(173) */
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

/* NAME TYPE ADDR: 12F2: NAME(175) */
/* BASE TYPE ADDR: 12E2: NAME(174) */
typedef struct Cars_tAudio Cars_tAudio;

/* NAME TYPE ADDR: 14A6: NAME(181) */
/* BASE TYPE ADDR: 1315: FIELD_LIST(180) */
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

/* NAME TYPE ADDR: 14BB: NAME(182) */
/* BASE TYPE ADDR: 14A6: NAME(181) */
typedef struct Cars_tRenderInfo Cars_tRenderInfo;

/* NAME TYPE ADDR: 1B5B: NAME(184) */
/* BASE TYPE ADDR: 0DDE: NAME(134) */
typedef struct Car_tObj Car_tObj;

/* NAME TYPE ADDR: 1B9A: NAME(190) */
/* BASE TYPE ADDR: 1B7B: ENUM_LIST(189) */
enum Udff_tAccessType: unsigned char
{
    UDFF_FILE = 0,
    UDFF_MEMORY = 1,
};

/* NAME TYPE ADDR: 1BAF: NAME(191) */
/* BASE TYPE ADDR: 1B7B: ENUM_LIST(189) */
typedef enum Udff_tAccessType Udff_tAccessType;

/* NAME TYPE ADDR: 1BE9: NAME(193) */
/* BASE TYPE ADDR: 1BC4: FIELD_LIST(192) */
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

/* NAME TYPE ADDR: 1BF8: NAME(194) */
/* BASE TYPE ADDR: 1BE9: NAME(193) */
typedef struct Udff_tInfo Udff_tInfo;

/* NAME TYPE ADDR: 1C0B: NAME(196) */
/* BASE TYPE ADDR: 1C07: NEAR386 PTR(195) */
typedef Udff_tInfo* Udff_tHandle;

/* Procedure params definition 0 - 1B6C: NEAR386 PROC(186) */
/* typedef void (unnamed_proc)(Car_tObj* arg0); */

/* Procedure params definition 1 - 1B72: NEAR386 PROC(187) */
/* typedef char* (unnamed_proc)(char* arg0); */
