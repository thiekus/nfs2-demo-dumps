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
/* BASE TYPE ADDR: 0097: SCALAR(16) */
typedef long SDWORD;
/* 017A: SCALAR(40) = unsigned long */

/* NAME TYPE ADDR: 018A: NAME(41) */
/* BASE TYPE ADDR: 017A: SCALAR(40) */
typedef unsigned long DWORD;

/* NAME TYPE ADDR: 0193: NAME(42) */
/* BASE TYPE ADDR: 0048: SCALAR(8) */
typedef unsigned short WORD;

/* NAME TYPE ADDR: 019B: NAME(43) */
/* BASE TYPE ADDR: 0040: SCALAR(7) */
typedef short SWORD;

/* NAME TYPE ADDR: 01A4: NAME(44) */
/* BASE TYPE ADDR: 0022: SCALAR(5) */
typedef signed char SBYTE;

/* NAME TYPE ADDR: 01AD: NAME(45) */
/* BASE TYPE ADDR: 0030: SCALAR(6) */
typedef unsigned char UBYTE;

/* NAME TYPE ADDR: 01B6: NAME(46) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int BOOL;

/* NAME TYPE ADDR: 01BE: NAME(47) */
/* BASE TYPE ADDR: 00CD: SCALAR(22) */
typedef void Stm_Chunk;

/* NAME TYPE ADDR: 01CE: NAME(49) */
/* BASE TYPE ADDR: 01CB: NEAR386 PTR(48) */
typedef Stm_Chunk* lpStm_Chunk;

/* NAME TYPE ADDR: 01E8: NAME(53) */
/* BASE TYPE ADDR: 01E5: NEAR386 PTR(52) */
/* 01E0: NEAR386 PROC(51) */
typedef void (*Sched_tFunctionPt)(void* arg0);

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

/* NAME TYPE ADDR: 0250: NAME(62) */
/* BASE TYPE ADDR: 024C: BYTE_INDEX ARRAY(61) */
typedef int CarLogic_tObservations[18][3];

/* NAME TYPE ADDR: 0272: NAME(65) */
/* BASE TYPE ADDR: 026E: BYTE_INDEX ARRAY(64) */
typedef char grid_t[4][12];

/* NAME TYPE ADDR: 03D9: NAME(70) */
/* BASE TYPE ADDR: 0288: FIELD_LIST(69) */
#pragma pack(push, 1)
/* number of fields = 17, size = 0x00e4 [228 bytes] */
struct personality_t
{
    /* offset = 0x0000 [0] */
    char letter;
    /* offset = 0x0001 [1] */
    char Pad1;
    /* offset = 0x0002 [2] */
    char Pad2;
    /* offset = 0x0003 [3] */
    char Pad3;
    /* offset = 0x0004 [4] */
    int OpponentGlue[21];
    /* offset = 0x0058 [88] */
    int AccOpponentGlue[21];
    /* offset = 0x00ac [172] */
    int opp_persSpeedAdj;
    /* offset = 0x00b0 [176] */
    int opp_persHandlingFactor;
    /* offset = 0x00b4 [180] */
    int opp_blockLookBehind;
    /* offset = 0x00b8 [184] */
    int opp_blockMinBlockDist;
    /* offset = 0x00bc [188] */
    int opp_maxLaneChangeSpeeds;
    /* offset = 0x00c0 [192] */
    int opp_laneChangeSpeeds;
    /* offset = 0x00c4 [196] */
    int opp_oncomingLookAhead;
    /* offset = 0x00c8 [200] */
    int opp_laneSlack[4];
    /* offset = 0x00d8 [216] */
    int opp_slackChangeProb;
    /* offset = 0x00dc [220] */
    int opp_psychoActivationHitCount;
    /* offset = 0x00e0 [224] */
    int opp_psychoTime;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 03EA: NAME(71) */
/* BASE TYPE ADDR: 03D9: NAME(70) */
typedef struct personality_t personality_t;

/* NAME TYPE ADDR: 048F: NAME(78) */
/* BASE TYPE ADDR: 040E: FIELD_LIST(77) */
#pragma pack(push, 1)
/* number of fields = 6, size = 0x0030 [48 bytes] */
struct AI_Config_t
{
    /* offset = 0x0000 [0] */
    int opp_desired_ahead;
    /* offset = 0x0004 [4] */
    int purgatory_timeMask;
    /* offset = 0x0008 [8] */
    int purgatory_maxCars;
    /* offset = 0x000c [12] */
    int traffic_speedAdjust[4];
    /* offset = 0x001c [28] */
    int traffic_baseSpeed;
    /* offset = 0x0020 [32] */
    int laneSlack[4];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 049E: NAME(79) */
/* BASE TYPE ADDR: 048F: NAME(78) */
typedef struct AI_Config_t AI_Config_t;

/* NAME TYPE ADDR: 04C9: NAME(82) */
/* BASE TYPE ADDR: 04B2: FIELD_LIST(81) */
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

/* NAME TYPE ADDR: 04D5: NAME(83) */
/* BASE TYPE ADDR: 04C9: NAME(82) */
typedef struct coorddef LIBCOORD;

/* NAME TYPE ADDR: 050D: NAME(86) */
/* BASE TYPE ADDR: 04E5: FIELD_LIST(85) */
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

/* NAME TYPE ADDR: 0519: NAME(87) */
/* BASE TYPE ADDR: 050D: NAME(86) */
typedef struct Stm_Quad Stm_Quad;

/* NAME TYPE ADDR: 054C: NAME(90) */
/* BASE TYPE ADDR: 0528: FIELD_LIST(89) */
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

/* NAME TYPE ADDR: 055B: NAME(91) */
/* BASE TYPE ADDR: 054C: NAME(90) */
typedef struct Stm_SimQuad Stm_SimQuad;

/* NAME TYPE ADDR: 0592: NAME(96) */
/* BASE TYPE ADDR: 0575: FIELD_LIST(95) */
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

/* NAME TYPE ADDR: 05A2: NAME(97) */
/* BASE TYPE ADDR: 0592: NAME(96) */
typedef struct Stm_Rotation Stm_Rotation;

/* NAME TYPE ADDR: 0608: NAME(100) */
/* BASE TYPE ADDR: 05B5: FIELD_LIST(99) */
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

/* NAME TYPE ADDR: 0618: NAME(101) */
/* BASE TYPE ADDR: 0608: NAME(100) */
typedef struct Stm_SimSlice Stm_SimSlice;

/* NAME TYPE ADDR: 0646: NAME(105) */
/* BASE TYPE ADDR: 062F: FIELD_LIST(104) */
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

/* NAME TYPE ADDR: 0651: NAME(106) */
/* BASE TYPE ADDR: 0646: NAME(105) */
typedef struct COORD16 COORD16;

/* NAME TYPE ADDR: 0710: NAME(109) */
/* BASE TYPE ADDR: 0660: FIELD_LIST(108) */
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

/* NAME TYPE ADDR: 0731: NAME(112) */
/* BASE TYPE ADDR: 0724: FIELD_LIST(111) */
#pragma pack(push, 1)
/* number of fields = 1, size = 0x0024 [36 bytes] */
struct matrixtdef
{
    /* offset = 0x0000 [0] */
    int m[9];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 073F: NAME(113) */
/* BASE TYPE ADDR: 0731: NAME(112) */
typedef struct matrixtdef MATRIX3DT;

/* NAME TYPE ADDR: 074C: NAME(114) */
/* BASE TYPE ADDR: 07FF: FIELD_LIST(120) */
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

/* NAME TYPE ADDR: 07C5: NAME(117) */
/* BASE TYPE ADDR: 0761: FIELD_LIST(116) */
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

/* NAME TYPE ADDR: 07E0: NAME(118) */
/* BASE TYPE ADDR: 07C5: NAME(117) */
typedef struct BO_tNewtonCollisionInfo BO_tNewtonCollisionInfo;

/* NAME TYPE ADDR: 0A47: NAME(121) */
/* BASE TYPE ADDR: 074C: NAME(114) */
typedef struct BO_tNewtonObj BO_tNewtonObj;

/* NAME TYPE ADDR: 0B2F: NAME(125) */
/* BASE TYPE ADDR: 0A60: FIELD_LIST(124) */
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

/* NAME TYPE ADDR: 0B45: NAME(126) */
/* BASE TYPE ADDR: 0B2F: NAME(125) */
typedef struct GameSetup_tCarData GameSetup_tCarData;

/* NAME TYPE ADDR: 0BF1: NAME(131) */
/* BASE TYPE ADDR: 0B66: FIELD_LIST(130) */
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

/* NAME TYPE ADDR: 0C00: NAME(132) */
/* BASE TYPE ADDR: 0BF1: NAME(131) */
typedef struct Car_tStats Car_tStats;

/* NAME TYPE ADDR: 0CD0: NAME(134) */
/* BASE TYPE ADDR: 0C0F: FIELD_LIST(133) */
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

/* NAME TYPE ADDR: 0CE1: NAME(135) */
/* BASE TYPE ADDR: 0CD0: NAME(134) */
typedef struct Car_tControl Car_tControl;

/* NAME TYPE ADDR: 0FD8: NAME(147) */
/* BASE TYPE ADDR: 0D1A: FIELD_LIST(146) */
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

/* NAME TYPE ADDR: 0FE7: NAME(148) */
/* BASE TYPE ADDR: 0FD8: NAME(147) */
typedef struct Car_tSpecs Car_tSpecs;

/* NAME TYPE ADDR: 0FFE: NAME(151) */
/* BASE TYPE ADDR: 16F0: FIELD_LIST(200) */
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

/* NAME TYPE ADDR: 1017: NAME(155) */
/* BASE TYPE ADDR: 139D: FIELD_LIST(183) */
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

/* NAME TYPE ADDR: 10B5: NAME(159) */
/* BASE TYPE ADDR: 103A: FIELD_LIST(158) */
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

/* NAME TYPE ADDR: 10D4: NAME(160) */
/* BASE TYPE ADDR: 10B5: NAME(159) */
typedef struct Transformer_tTransformNode Transformer_tTransformNode;

/* NAME TYPE ADDR: 10F3: NAME(161) */
/* BASE TYPE ADDR: 0651: NAME(106) */
typedef COORD16 Transformer_tVertex;

/* NAME TYPE ADDR: 1161: NAME(166) */
/* BASE TYPE ADDR: 1116: FIELD_LIST(165) */
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

/* NAME TYPE ADDR: 1178: NAME(167) */
/* BASE TYPE ADDR: 1161: NAME(166) */
typedef struct Transformer_tFacet Transformer_tFacet;

/* NAME TYPE ADDR: 121A: NAME(170) */
/* BASE TYPE ADDR: 1193: FIELD_LIST(169) */
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

/* NAME TYPE ADDR: 123B: NAME(171) */
/* BASE TYPE ADDR: 121A: NAME(170) */
typedef struct Transformer_tDrawControlInfo Transformer_tDrawControlInfo;

/* NAME TYPE ADDR: 12B1: NAME(173) */
/* BASE TYPE ADDR: 125C: FIELD_LIST(172) */
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

/* NAME TYPE ADDR: 12C6: NAME(174) */
/* BASE TYPE ADDR: 12B1: NAME(173) */
typedef struct Transformer_tObj Transformer_tObj;

/* NAME TYPE ADDR: 1301: NAME(178) */
/* BASE TYPE ADDR: 12E4: FIELD_LIST(177) */
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

/* NAME TYPE ADDR: 131F: NAME(179) */
/* BASE TYPE ADDR: 1301: NAME(178) */
typedef struct Transformer_tGeometryNode Transformer_tGeometryNode;

/* NAME TYPE ADDR: 1369: NAME(181) */
/* BASE TYPE ADDR: 133D: FIELD_LIST(180) */
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

/* NAME TYPE ADDR: 1383: NAME(182) */
/* BASE TYPE ADDR: 1369: NAME(181) */
typedef struct Transformer_tAnimInfo Transformer_tAnimInfo;

/* NAME TYPE ADDR: 13F0: NAME(184) */
/* BASE TYPE ADDR: 1017: NAME(155) */
typedef struct Transformer_tNodeInfo Transformer_tNodeInfo;

/* NAME TYPE ADDR: 148A: NAME(188) */
/* BASE TYPE ADDR: 1413: FIELD_LIST(187) */
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

/* NAME TYPE ADDR: 14A2: NAME(189) */
/* BASE TYPE ADDR: 148A: NAME(188) */
typedef struct Cars_tCollisionInfo Cars_tCollisionInfo;

/* NAME TYPE ADDR: 1502: NAME(191) */
/* BASE TYPE ADDR: 14BA: FIELD_LIST(190) */
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

/* NAME TYPE ADDR: 1512: NAME(192) */
/* BASE TYPE ADDR: 1502: NAME(191) */
typedef struct Cars_tAudio Cars_tAudio;

/* NAME TYPE ADDR: 16C6: NAME(198) */
/* BASE TYPE ADDR: 1535: FIELD_LIST(197) */
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

/* NAME TYPE ADDR: 16DB: NAME(199) */
/* BASE TYPE ADDR: 16C6: NAME(198) */
typedef struct Cars_tRenderInfo Cars_tRenderInfo;

/* NAME TYPE ADDR: 1D7D: NAME(201) */
/* BASE TYPE ADDR: 0FFE: NAME(151) */
typedef struct Car_tObj Car_tObj;

/* NAME TYPE ADDR: 1EED: NAME(211) */
/* BASE TYPE ADDR: 1E31: FIELD_LIST(210) */
#pragma pack(push, 1)
/* number of fields = 11, size = 0x002c [44 bytes] */
struct AIPhysic_ModelConfig_t
{
    /* offset = 0x0000 [0] */
    int dlpos_to_dlvel;
    /* offset = 0x0004 [4] */
    int max_dlvel;
    /* offset = 0x0008 [8] */
    int dlvel_to_clacc;
    /* offset = 0x000c [12] */
    int max_clacc;
    /* offset = 0x0010 [16] */
    int dangle_to_dav;
    /* offset = 0x0014 [20] */
    int max_dav;
    /* offset = 0x0018 [24] */
    int dav_to_aa;
    /* offset = 0x001c [28] */
    int max_aa;
    /* offset = 0x0020 [32] */
    int vel_limit_range;
    /* offset = 0x0024 [36] */
    int lat_vel_limit_factor;
    /* offset = 0x0028 [40] */
    int ang_vel_limit_factor;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 1F08: NAME(212) */
/* BASE TYPE ADDR: 1EED: NAME(211) */
typedef struct AIPhysic_ModelConfig_t AIPhysic_ModelConfig_t;

/* NAME TYPE ADDR: 1FA1: NAME(214) */
/* BASE TYPE ADDR: 1F23: FIELD_LIST(213) */
#pragma pack(push, 1)
/* number of fields = 7, size = 0x006c [108 bytes] */
struct AIPhysic_Config_t
{
    /* offset = 0x0000 [0] */
    int latvelcalc_lookahead;
    /* offset = 0x0004 [4] */
    int min_lookahead;
    /* offset = 0x0008 [8] */
    int max_lookahead;
    /* offset = 0x000c [12] */
    int look_ahead_factor;
    /* offset = 0x0010 [16] */
    int skid_value;
    /* offset = 0x0014 [20] */
    AIPhysic_ModelConfig_t ICModel;
    /* offset = 0x0040 [64] */
    AIPhysic_ModelConfig_t OOCModel;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 1FB7: NAME(215) */
/* BASE TYPE ADDR: 1FA1: NAME(214) */
typedef struct AIPhysic_Config_t AIPhysic_Config_t;

/* NAME TYPE ADDR: 2048: NAME(227) */
/* BASE TYPE ADDR: 2003: ENUM_LIST(226) */
enum pGameTypes_t: unsigned char
{
    PGT_KO = 0,
    PGT_TOURN = 1,
    PGT_SRACE_1OPP = 2,
    PGT_SRACE_MPP = 3,
    PGT_BAD = 4,
};

/* NAME TYPE ADDR: 2059: NAME(228) */
/* BASE TYPE ADDR: 2003: ENUM_LIST(226) */
typedef enum pGameTypes_t pGameTypes_t;

/* NAME TYPE ADDR: 2089: NAME(230) */
/* BASE TYPE ADDR: 206A: ENUM_LIST(229) */
enum Udff_tAccessType: unsigned char
{
    UDFF_FILE = 0,
    UDFF_MEMORY = 1,
};

/* NAME TYPE ADDR: 209E: NAME(231) */
/* BASE TYPE ADDR: 206A: ENUM_LIST(229) */
typedef enum Udff_tAccessType Udff_tAccessType;

/* NAME TYPE ADDR: 20D8: NAME(233) */
/* BASE TYPE ADDR: 20B3: FIELD_LIST(232) */
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

/* NAME TYPE ADDR: 20E7: NAME(234) */
/* BASE TYPE ADDR: 20D8: NAME(233) */
typedef struct Udff_tInfo Udff_tInfo;

/* NAME TYPE ADDR: 20FA: NAME(236) */
/* BASE TYPE ADDR: 20F6: NEAR386 PTR(235) */
typedef Udff_tInfo* Udff_tHandle;

/* NAME TYPE ADDR: 2188: NAME(250) */
/* BASE TYPE ADDR: 2142: FIELD_LIST(249) */
#pragma pack(push, 1)
/* number of fields = 6, size = 0x0060 [96 bytes] */
struct glueConfigStruct
{
    /* offset = 0x0000 [0] */
    int overall[2];
    /* offset = 0x0008 [8] */
    int laps[3][2];
    /* offset = 0x0020 [32] */
    int style[2][2];
    /* offset = 0x0030 [48] */
    int skill[2][2];
    /* offset = 0x0040 [64] */
    int traffic[2][2];
    /* offset = 0x0050 [80] */
    int opps[2][2];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 219D: NAME(251) */
/* BASE TYPE ADDR: 2188: NAME(250) */
typedef struct glueConfigStruct glueConfigStruct;

/* Procedure params definition 0 - 1FD6: NEAR386 PROC(218) */
/* typedef int (unnamed_proc)(int arg0); */

/* Procedure params definition 1 - 1FDB: NEAR386 PROC(219) */
/* typedef int (unnamed_proc)(void); */

/* Procedure params definition 2 - 1FE0: NEAR386 PROC(220) */
/* typedef void (unnamed_proc)(Car_tObj* arg0); */

/* Procedure params definition 3 - 1FE6: NEAR386 PROC(221) */
/* typedef int (unnamed_proc)(int arg0, int arg1); */

/* Procedure params definition 4 - 1FEC: NEAR386 PROC(222) */
/* typedef int (unnamed_proc)(Car_tObj* arg0, Car_tObj* arg1); */

/* Procedure params definition 5 - 1FF4: NEAR386 PROC(223) */
/* typedef void (unnamed_proc)(Car_tObj* arg0); */

/* Procedure params definition 6 - 1FFF: NEAR386 PROC(225) */
/* typedef int (unnamed_proc)(); */

/* Procedure params definition 7 - 210B: NEAR386 PROC(237) */
/* typedef void (unnamed_proc)(Udff_tHandle arg0); */

/* Procedure params definition 8 - 21C7: NEAR386 PROC(257) */
/* typedef void (unnamed_proc)(Car_tObj* arg0, Udff_tHandle arg1); */

/* Procedure params definition 9 - 21D2: NEAR386 PROC(259) */
/* typedef int (unnamed_proc)(LIBCOORD* arg0, Car_tObj* arg1); */

/* Procedure params definition 10 - 21DA: NEAR386 PROC(260) */
/* typedef int (unnamed_proc)(Car_tObj* arg0); */

/* Procedure params definition 11 - 21E0: NEAR386 PROC(261) */
/* typedef int (unnamed_proc)(Car_tObj* arg0); */

/* Procedure params definition 12 - 21E7: NEAR386 PROC(262) */
/* typedef void (unnamed_proc)(Car_tObj* arg0, Car_tObj* arg1); */
