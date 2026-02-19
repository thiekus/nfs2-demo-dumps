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
/* BASE TYPE ADDR: 0040: SCALAR(7) */
typedef short Draw_tContext;
/* 01A1: SCALAR(44) = unsigned long */

/* NAME TYPE ADDR: 01B6: NAME(46) */
/* BASE TYPE ADDR: 01B1: NEAR386 PROC(45) */
typedef int (Input_tDeviceCall)(unsigned long arg0);

/* NAME TYPE ADDR: 01CB: NAME(47) */
/* BASE TYPE ADDR: 0097: SCALAR(16) */
typedef long SDWORD;

/* NAME TYPE ADDR: 01D5: NAME(48) */
/* BASE TYPE ADDR: 01A1: SCALAR(44) */
typedef unsigned long DWORD;

/* NAME TYPE ADDR: 01DE: NAME(49) */
/* BASE TYPE ADDR: 0048: SCALAR(8) */
typedef unsigned short WORD;

/* NAME TYPE ADDR: 01E6: NAME(50) */
/* BASE TYPE ADDR: 0040: SCALAR(7) */
typedef short SWORD;

/* NAME TYPE ADDR: 01EF: NAME(51) */
/* BASE TYPE ADDR: 0022: SCALAR(5) */
typedef signed char SBYTE;

/* NAME TYPE ADDR: 01F8: NAME(52) */
/* BASE TYPE ADDR: 0030: SCALAR(6) */
typedef unsigned char UBYTE;

/* NAME TYPE ADDR: 0201: NAME(53) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int BOOL;

/* NAME TYPE ADDR: 0209: NAME(54) */
/* BASE TYPE ADDR: 00CD: SCALAR(22) */
typedef void Stm_Chunk;

/* NAME TYPE ADDR: 0219: NAME(56) */
/* BASE TYPE ADDR: 0216: NEAR386 PTR(55) */
typedef Stm_Chunk* lpStm_Chunk;

/* NAME TYPE ADDR: 0231: NAME(59) */
/* BASE TYPE ADDR: 022E: NEAR386 PTR(58) */
/* 0228: NEAR386 PROC(57) */
typedef void (*Transformer_AnimCallbackFunc)(void* arg0, void* arg1);

/* NAME TYPE ADDR: 0255: NAME(61) */
/* BASE TYPE ADDR: 0251: BYTE_INDEX ARRAY(60) */
typedef short tAccTable[112];

/* NAME TYPE ADDR: 0289: NAME(67) */
/* BASE TYPE ADDR: 0272: FIELD_LIST(66) */
#pragma pack(push, 1)
/* number of fields = 1, size = 0x0010 [16 bytes] */
struct tKnockout
{
    /* offset = 0x0000 [0] */
    short AdvanceFlag[8];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0397: NAME(106) */
/* BASE TYPE ADDR: 0329: FIELD_LIST(105) */
#pragma pack(push, 1)
/* number of fields = 8, size = 0x00d1 [209 bytes] */
struct modem_info
{
    /* offset = 0x0000 [0] */
    char name[40];
    /* offset = 0x0028 [40] */
    char defaultInitStr[40];
    /* offset = 0x0050 [80] */
    char userInitStr[40];
    /* offset = 0x0078 [120] */
    char settingsStr[40];
    /* offset = 0x00a0 [160] */
    char dialStr[40];
    /* offset = 0x00c8 [200] */
    int commPort;
    /* offset = 0x00cc [204] */
    int isTone;
    /* offset = 0x00d0 [208] */
    char speakerOn;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 03A5: NAME(107) */
/* BASE TYPE ADDR: 0397: NAME(106) */
typedef struct modem_info tMODEM_INFO;

/* NAME TYPE ADDR: 0A85: NAME(125) */
/* BASE TYPE ADDR: 03F3: FIELD_LIST(124) */
#pragma pack(push, 1)
/* number of fields = 113, size = 0x0299 [665 bytes] */
struct tfrontEnd
{
    /* offset = 0x0000 [0] */
    short randomSeed;
    /* offset = 0x0002 [2] */
    int randomAINameSeed;
    /* offset = 0x0006 [6] */
    char currentPlayer;
    /* offset = 0x0007 [7] */
    char gameMode;
    /* offset = 0x0008 [8] */
    char raceType;
    /* offset = 0x0009 [9] */
    char style;
    /* offset = 0x000a [10] */
    char skillLevel;
    /* offset = 0x000b [11] */
    char catchup;
    /* offset = 0x000c [12] */
    char track;
    /* offset = 0x000d [13] */
    int recordlaptime;
    /* offset = 0x0011 [17] */
    char laps;
    /* offset = 0x0012 [18] */
    char lapind;
    /* offset = 0x0013 [19] */
    char secretFlags;
    /* offset = 0x0014 [20] */
    char myCar;
    /* offset = 0x0015 [21] */
    char transmission;
    /* offset = 0x0016 [22] */
    char carColors[9];
    /* offset = 0x001f [31] */
    char showGraph;
    /* offset = 0x0020 [32] */
    char steeringSensitivity;
    /* offset = 0x0021 [33] */
    char frontDownforce;
    /* offset = 0x0022 [34] */
    char rearDownforce;
    /* offset = 0x0023 [35] */
    char gearRatios;
    /* offset = 0x0024 [36] */
    char rampSteer;
    /* offset = 0x0025 [37] */
    char brakeBias;
    /* offset = 0x0026 [38] */
    char rampGas;
    /* offset = 0x0027 [39] */
    char rampBrake;
    /* offset = 0x0028 [40] */
    char myCar2;
    /* offset = 0x0029 [41] */
    char transmission2;
    /* offset = 0x002a [42] */
    char carColors2[9];
    /* offset = 0x0033 [51] */
    char steeringSensitivity2;
    /* offset = 0x0034 [52] */
    char steeringAssist2;
    /* offset = 0x0035 [53] */
    char frontDownforce2;
    /* offset = 0x0036 [54] */
    char rearDownforce2;
    /* offset = 0x0037 [55] */
    char gearRatios2;
    /* offset = 0x0038 [56] */
    char brakeBias2;
    /* offset = 0x0039 [57] */
    char rampSteer2;
    /* offset = 0x003a [58] */
    char rampGas2;
    /* offset = 0x003b [59] */
    char rampBrake2;
    /* offset = 0x003c [60] */
    char oppCar;
    /* offset = 0x003d [61] */
    char oppNumber;
    /* offset = 0x003e [62] */
    char traffic;
    /* offset = 0x003f [63] */
    char display;
    /* offset = 0x0040 [64] */
    char language;
    /* offset = 0x0041 [65] */
    char menuVolume;
    /* offset = 0x0042 [66] */
    char simVolume;
    /* offset = 0x0043 [67] */
    char sfxVolume;
    /* offset = 0x0044 [68] */
    char audioMode;
    /* offset = 0x0045 [69] */
    char sensitivity;
    /* offset = 0x0046 [70] */
    char playerOneControl;
    /* offset = 0x0047 [71] */
    char playerTwoControl;
    /* offset = 0x0048 [72] */
    short stearingRange[2];
    /* offset = 0x004c [76] */
    short deadSpot[2];
    /* offset = 0x0050 [80] */
    short ImaxRange[2];
    /* offset = 0x0054 [84] */
    short IImaxRange[2];
    /* offset = 0x0058 [88] */
    short controlType[2];
    /* offset = 0x005c [92] */
    short controlConfig[2];
    /* offset = 0x0060 [96] */
    int keyLeft1;
    /* offset = 0x0064 [100] */
    int keyRight1;
    /* offset = 0x0068 [104] */
    int keyGas1;
    /* offset = 0x006c [108] */
    int keyBrake1;
    /* offset = 0x0070 [112] */
    int keyLookBehind1;
    /* offset = 0x0074 [116] */
    int keyCamera1;
    /* offset = 0x0078 [120] */
    int keyHandBrake1;
    /* offset = 0x007c [124] */
    int keyHorn1;
    /* offset = 0x0080 [128] */
    int keyShiftUp1;
    /* offset = 0x0084 [132] */
    int keyShiftDown1;
    /* offset = 0x0088 [136] */
    int keyLefts[2];
    /* offset = 0x0090 [144] */
    int keyRights[2];
    /* offset = 0x0098 [152] */
    int keyGass[2];
    /* offset = 0x00a0 [160] */
    int keyBrakes[2];
    /* offset = 0x00a8 [168] */
    int keyLookBehinds[2];
    /* offset = 0x00b0 [176] */
    int keyCameras[2];
    /* offset = 0x00b8 [184] */
    int keyHandBrakes[2];
    /* offset = 0x00c0 [192] */
    int keyHorns[2];
    /* offset = 0x00c8 [200] */
    int keyShiftUps[2];
    /* offset = 0x00d0 [208] */
    int keyShiftDowns[2];
    /* offset = 0x00d8 [216] */
    char playerNameList[9][8];
    /* offset = 0x0120 [288] */
    char remote;
    /* offset = 0x0121 [289] */
    char speed;
    /* offset = 0x0122 [290] */
    char windowSize;
    /* offset = 0x0123 [291] */
    char imageQuality;
    /* offset = 0x0124 [292] */
    char viewDistance;
    /* offset = 0x0125 [293] */
    char carDetail;
    /* offset = 0x0126 [294] */
    char horizon;
    /* offset = 0x0127 [295] */
    char forceDevice;
    /* offset = 0x0128 [296] */
    char forceVolume;
    /* offset = 0x0129 [297] */
    short joyLoMin[6][2];
    /* offset = 0x0141 [321] */
    short joyLoMax[6][2];
    /* offset = 0x0159 [345] */
    short joyHiMin[6][2];
    /* offset = 0x0171 [369] */
    short joyHiMax[6][2];
    /* offset = 0x0189 [393] */
    short joyButtons[2];
    /* offset = 0x018d [397] */
    short joyAxis[2];
    /* offset = 0x0191 [401] */
    char engineSounds;
    /* offset = 0x0192 [402] */
    char interactiveMusic;
    /* offset = 0x0193 [403] */
    char audioQuality;
    /* offset = 0x0194 [404] */
    char netOpponetCar;
    /* offset = 0x0195 [405] */
    char comPort;
    /* offset = 0x0196 [406] */
    char readyToRace;
    /* offset = 0x0197 [407] */
    tMODEM_INFO* modem;
    /* offset = 0x019b [411] */
    char playerName[9];
    /* offset = 0x01a4 [420] */
    char playerName2[9];
    /* offset = 0x01ad [429] */
    char phoneNumber[40];
    /* offset = 0x01d5 [469] */
    char phoneName[20];
    /* offset = 0x01e9 [489] */
    short playerCarList[8];
    /* offset = 0x01f9 [505] */
    short playerTransList[8];
    /* offset = 0x0209 [521] */
    short playerColorList[8];
    /* offset = 0x0219 [537] */
    short steeringList[8];
    /* offset = 0x0229 [553] */
    short frontDownforceList[8];
    /* offset = 0x0239 [569] */
    short rearDownforceList[8];
    /* offset = 0x0249 [585] */
    short gearRatiosList[8];
    /* offset = 0x0259 [601] */
    short brakeBiasList[8];
    /* offset = 0x0269 [617] */
    short rampSteerList[8];
    /* offset = 0x0279 [633] */
    short rampGasList[8];
    /* offset = 0x0289 [649] */
    short rampBrakeList[8];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0B5B: NAME(128) */
/* BASE TYPE ADDR: 0A96: FIELD_LIST(127) */
#pragma pack(push, 1)
/* number of fields = 11, size = 0x00b9 [185 bytes] */
struct tTournament
{
    /* offset = 0x0000 [0] */
    short dataSize;
    /* offset = 0x0002 [2] */
    struct tfrontEnd SaveFrontEnd;
    /* offset = 0x009b [155] */
    short PointTotals[12];
    /* offset = 0x00b3 [179] */
    short ProgressFlag;
    /* offset = 0x00b5 [181] */
    unsigned int Pioneer : 1;
    /* offset = 0x00b5 [181] */
    unsigned int Outback : 1;
    /* offset = 0x00b5 [181] */
    unsigned int NorthCountry : 1;
    /* offset = 0x00b5 [181] */
    unsigned int PacificSpirit : 1;
    /* offset = 0x00b5 [181] */
    unsigned int Mediterraneo : 1;
    /* offset = 0x00b5 [181] */
    unsigned int MysticPeaks : 1;
    /* offset = 0x00b5 [181] */
    unsigned int MonolithicStudios : 1;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0B9D: NAME(131) */
/* BASE TYPE ADDR: 0B6E: FIELD_LIST(130) */
#pragma pack(push, 1)
/* number of fields = 3, size = 0x000c [12 bytes] */
struct tNfsSystemInfo
{
    /* offset = 0x0000 [0] */
    int userRam;
    /* offset = 0x0004 [4] */
    int largestDos;
    /* offset = 0x0008 [8] */
    int largestXms;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0BB0: NAME(132) */
/* BASE TYPE ADDR: 0B9D: NAME(131) */
typedef struct tNfsSystemInfo tNfsSystemInfo;

/* Procedure params definition 0 - 0BCB: NEAR386 PROC(135) */
/* typedef void (unnamed_proc)(char* arg0); */

/* Procedure params definition 1 - 0BD3: NEAR386 PROC(137) */
/* typedef void (unnamed_proc)(int* arg0); */

/* Procedure params definition 2 - 0BDC: NEAR386 PROC(139) */
/* typedef void (unnamed_proc)(int arg0, char** arg1, union arg2); */
