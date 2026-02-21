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

/* NAME TYPE ADDR: 01AF: NAME(44) */
/* BASE TYPE ADDR: 019D: FIELD_LIST(43) */
#pragma pack(push, 1)
/* number of fields = 2, size = 0x0008 [8 bytes] */
struct GameSetup_tList
{
    /* offset = 0x0000 [0] */
    int v;
    /* offset = 0x0004 [4] */
    int* p;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0267: NAME(50) */
/* BASE TYPE ADDR: 01D2: FIELD_LIST(49) */
#pragma pack(push, 1)
/* number of fields = 10, size = 0x0028 [40 bytes] */
struct GameSetup_tUserSetting
{
    /* offset = 0x0000 [0] */
    int language;
    /* offset = 0x0004 [4] */
    int display;
    /* offset = 0x0008 [8] */
    int bestlap;
    /* offset = 0x000c [12] */
    int windowSize;
    /* offset = 0x0010 [16] */
    int graphicsDetail;
    /* offset = 0x0014 [20] */
    int viewDistance;
    /* offset = 0x0018 [24] */
    int horizonDisplay;
    /* offset = 0x001c [28] */
    int musicLevel;
    /* offset = 0x0020 [32] */
    int sfxLevel;
    /* offset = 0x0024 [36] */
    int interactive;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0281: NAME(51) */
/* BASE TYPE ADDR: 0267: NAME(50) */
typedef struct GameSetup_tUserSetting GameSetup_tUserSetting;

/* NAME TYPE ADDR: 036E: NAME(54) */
/* BASE TYPE ADDR: 029F: FIELD_LIST(53) */
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

/* NAME TYPE ADDR: 0384: NAME(55) */
/* BASE TYPE ADDR: 036E: NAME(54) */
typedef struct GameSetup_tCarData GameSetup_tCarData;

/* NAME TYPE ADDR: 051F: NAME(64) */
/* BASE TYPE ADDR: 03B6: FIELD_LIST(63) */
#pragma pack(push, 1)
/* number of fields = 24, size = 0x0174 [372 bytes] */
struct GameSetup_tData
{
    /* offset = 0x0000 [0] */
    int raceType;
    /* offset = 0x0004 [4] */
    int numLaps;
    /* offset = 0x0008 [8] */
    int skill;
    /* offset = 0x000c [12] */
    int style;
    /* offset = 0x0010 [16] */
    int commMode;
    /* offset = 0x0014 [20] */
    int localCar;
    /* offset = 0x0018 [24] */
    int catchupLogic;
    /* offset = 0x001c [28] */
    int replayMode;
    /* offset = 0x0020 [32] */
    int sgge;
    /* offset = 0x0024 [36] */
    int track;
    /* offset = 0x0028 [40] */
    int WeatherNTime;
    /* offset = 0x002c [44] */
    int randSeed;
    /* offset = 0x0030 [48] */
    GameSetup_tUserSetting userSetting;
    /* offset = 0x0058 [88] */
    int numCars;
    /* offset = 0x005c [92] */
    int numPlayerRaceCars;
    /* offset = 0x0060 [96] */
    int numOpponentRaceCars;
    /* offset = 0x0064 [100] */
    int opponentCarType;
    /* offset = 0x0068 [104] */
    GameSetup_tCarData carInfo[16];
    /* offset = 0x0138 [312] */
    int startingLineup[16];
    /* offset = 0x0178 [376] */
    int personalityIndexes[16];
    /* offset = 0x01b8 [440] */
    int numSmackables;
    /* offset = 0x01bc [444] */
    short PointTotals[12];
    /* offset = 0x01d4 [468] */
    short KnockoutAdvanceFlag[8];
    /* offset = 0x01e4 [484] */
    short NameList[8][9];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0532: NAME(65) */
/* BASE TYPE ADDR: 051F: NAME(64) */
typedef struct GameSetup_tData GameSetup_tData;

/* Procedure params definition 0 - 0545: NEAR386 PROC(66) */
/* typedef void (unnamed_proc)(int* arg0); */
