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

/* NAME TYPE ADDR: 0248: NAME(60) */
/* BASE TYPE ADDR: 017A: SCALAR(40) */
typedef unsigned long time_t;

/* NAME TYPE ADDR: 0252: NAME(61) */
/* BASE TYPE ADDR: 005F: SCALAR(10) */
typedef unsigned int ino_t;

/* NAME TYPE ADDR: 025B: NAME(62) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int dev_t;

/* NAME TYPE ADDR: 0264: NAME(63) */
/* BASE TYPE ADDR: 0097: SCALAR(16) */
typedef long off_t;

/* NAME TYPE ADDR: 0371: NAME(102) */
/* BASE TYPE ADDR: 0303: FIELD_LIST(101) */
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

/* NAME TYPE ADDR: 037F: NAME(103) */
/* BASE TYPE ADDR: 0371: NAME(102) */
typedef struct modem_info tMODEM_INFO;

/* NAME TYPE ADDR: 0A5F: NAME(121) */
/* BASE TYPE ADDR: 03CD: FIELD_LIST(120) */
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

/* NAME TYPE ADDR: 0AD1: NAME(135) */
/* BASE TYPE ADDR: 0AA1: ENUM_LIST(134) */
enum tItemTypes: unsigned char
{
    kTypeText = 0,
    kTypeImage = 1,
    kTypeTextButton = 2,
};

/* NAME TYPE ADDR: 0AE0: NAME(136) */
/* BASE TYPE ADDR: 0B59: FIELD_LIST(143) */
#pragma pack(push, 1)
/* number of fields = 5, size = 0x000c [12 bytes] */
struct tMenu
{
    /* offset = 0x0000 [0] */
    char* artFileName;
    /* offset = 0x0004 [4] */
    char* backgrName;
    /* offset = 0x0008 [8] */
    short driver;
    /* offset = 0x000a [10] */
    short current;
    /* offset = 0x000c [12] */
    struct tItemButton* item[1];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0B40: NAME(140) */
/* BASE TYPE ADDR: 0AF1: FIELD_LIST(139) */
#pragma pack(push, 1)
/* number of fields = 7, size = 0x0011 [17 bytes] */
struct tItemButton
{
    /* offset = 0x0000 [0] */
    enum tItemTypes type;
    /* offset = 0x0001 [1] */
    short text;
    /* offset = 0x0003 [3] */
    struct tMenu* nextMenu;
    /* offset = 0x0007 [7] */
    unsigned char flags;
    /* offset = 0x0008 [8] */
    unsigned char cases;
    /* offset = 0x0009 [9] */
    char* value;
    /* offset = 0x000d [13] */
    short* selection;
};
#pragma pack(pop)

/* Procedure params definition 0 - 0272: NEAR386 PROC(65) */
/* typedef void (unnamed_proc)(char* arg0); */

/* Procedure params definition 1 - 0A6F: NEAR386 PROC(123) */
/* typedef void (unnamed_proc)(struct tfrontEnd* arg0, struct tfrontEnd* arg1); */

/* Procedure params definition 2 - 0A75: NEAR386 PROC(124) */
/* typedef int (unnamed_proc)(char* arg0); */

/* Procedure params definition 3 - 0A8D: NEAR386 PROC(130) */
/* typedef char** (unnamed_proc)(char* arg0, char arg1[9], char* arg2, char arg3); */

/* Procedure params definition 4 - 0BA0: NEAR386 PROC(145) */
/* typedef int (unnamed_proc)(struct tMenu* arg0); */
