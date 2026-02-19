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

/* NAME TYPE ADDR: 00DB: NAME(25) */
/* BASE TYPE ADDR: 00D7: BYTE_INDEX ARRAY(24) */
typedef char* va_list[1];

/* NAME TYPE ADDR: 00EB: NAME(27) */
/* BASE TYPE ADDR: 00E6: NEAR386 PROC(26) */
typedef int (INTFN)(void);

/* NAME TYPE ADDR: 00F4: NAME(28) */
/* BASE TYPE ADDR: 00BE: SCALAR(20) */
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

/* NAME TYPE ADDR: 01A0: NAME(40) */
/* BASE TYPE ADDR: 0170: ENUM_LIST(39) */
enum tItemTypes: unsigned char
{
    kTypeText = 0,
    kTypeImage = 1,
    kTypeTextButton = 2,
};

/* NAME TYPE ADDR: 01AE: NAME(41) */
/* BASE TYPE ADDR: 0216: FIELD_LIST(48) */
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

/* NAME TYPE ADDR: 0207: NAME(45) */
/* BASE TYPE ADDR: 01C5: FIELD_LIST(44) */
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

/* NAME TYPE ADDR: 02AB: NAME(52) */
/* BASE TYPE ADDR: 0269: FIELD_LIST(51) */
#pragma pack(push, 1)
/* number of fields = 5, size = 0x0030 [48 bytes] */
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
    struct tItemButton* item[9];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0302: NAME(57) */
/* BASE TYPE ADDR: 02C0: FIELD_LIST(56) */
#pragma pack(push, 1)
/* number of fields = 5, size = 0x0038 [56 bytes] */
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
    struct tItemButton* item[11];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0355: NAME(61) */
/* BASE TYPE ADDR: 0313: FIELD_LIST(60) */
#pragma pack(push, 1)
/* number of fields = 5, size = 0x0018 [24 bytes] */
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
    struct tItemButton* item[3];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 03B4: NAME(68) */
/* BASE TYPE ADDR: 0372: FIELD_LIST(67) */
#pragma pack(push, 1)
/* number of fields = 5, size = 0x0020 [32 bytes] */
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
    struct tItemButton* item[5];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 040F: NAME(74) */
/* BASE TYPE ADDR: 03CD: FIELD_LIST(73) */
#pragma pack(push, 1)
/* number of fields = 5, size = 0x0020 [32 bytes] */
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
    struct tItemButton* item[5];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 045E: NAME(77) */
/* BASE TYPE ADDR: 041C: FIELD_LIST(76) */
#pragma pack(push, 1)
/* number of fields = 5, size = 0x0020 [32 bytes] */
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
    struct tItemButton* item[5];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 04AD: NAME(80) */
/* BASE TYPE ADDR: 046B: FIELD_LIST(79) */
#pragma pack(push, 1)
/* number of fields = 5, size = 0x0048 [72 bytes] */
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
    struct tItemButton* item[15];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 04FC: NAME(83) */
/* BASE TYPE ADDR: 04BA: FIELD_LIST(82) */
#pragma pack(push, 1)
/* number of fields = 5, size = 0x0050 [80 bytes] */
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
    struct tItemButton* item[17];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 054B: NAME(86) */
/* BASE TYPE ADDR: 0509: FIELD_LIST(85) */
#pragma pack(push, 1)
/* number of fields = 5, size = 0x0038 [56 bytes] */
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
    struct tItemButton* item[11];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 059A: NAME(89) */
/* BASE TYPE ADDR: 0558: FIELD_LIST(88) */
#pragma pack(push, 1)
/* number of fields = 5, size = 0x0020 [32 bytes] */
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
    struct tItemButton* item[5];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 05E9: NAME(92) */
/* BASE TYPE ADDR: 05A7: FIELD_LIST(91) */
#pragma pack(push, 1)
/* number of fields = 5, size = 0x0018 [24 bytes] */
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
    struct tItemButton* item[3];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0638: NAME(95) */
/* BASE TYPE ADDR: 05F6: FIELD_LIST(94) */
#pragma pack(push, 1)
/* number of fields = 5, size = 0x0028 [40 bytes] */
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
    struct tItemButton* item[7];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0687: NAME(98) */
/* BASE TYPE ADDR: 0645: FIELD_LIST(97) */
#pragma pack(push, 1)
/* number of fields = 5, size = 0x0028 [40 bytes] */
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
    struct tItemButton* item[7];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 06D6: NAME(101) */
/* BASE TYPE ADDR: 0694: FIELD_LIST(100) */
#pragma pack(push, 1)
/* number of fields = 5, size = 0x0028 [40 bytes] */
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
    struct tItemButton* item[7];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0725: NAME(104) */
/* BASE TYPE ADDR: 06E3: FIELD_LIST(103) */
#pragma pack(push, 1)
/* number of fields = 5, size = 0x0028 [40 bytes] */
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
    struct tItemButton* item[7];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0774: NAME(107) */
/* BASE TYPE ADDR: 0732: FIELD_LIST(106) */
#pragma pack(push, 1)
/* number of fields = 5, size = 0x001c [28 bytes] */
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
    struct tItemButton* item[4];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 07C3: NAME(110) */
/* BASE TYPE ADDR: 0781: FIELD_LIST(109) */
#pragma pack(push, 1)
/* number of fields = 5, size = 0x002c [44 bytes] */
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
    struct tItemButton* item[8];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0812: NAME(113) */
/* BASE TYPE ADDR: 07D0: FIELD_LIST(112) */
#pragma pack(push, 1)
/* number of fields = 5, size = 0x002c [44 bytes] */
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
    struct tItemButton* item[8];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0865: NAME(117) */
/* BASE TYPE ADDR: 0823: FIELD_LIST(116) */
#pragma pack(push, 1)
/* number of fields = 5, size = 0x002c [44 bytes] */
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
    struct tItemButton* item[8];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 08B4: NAME(120) */
/* BASE TYPE ADDR: 0872: FIELD_LIST(119) */
#pragma pack(push, 1)
/* number of fields = 5, size = 0x0024 [36 bytes] */
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
    struct tItemButton* item[6];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0907: NAME(124) */
/* BASE TYPE ADDR: 08C5: FIELD_LIST(123) */
#pragma pack(push, 1)
/* number of fields = 5, size = 0x0064 [100 bytes] */
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
    struct tItemButton* item[22];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 095E: NAME(129) */
/* BASE TYPE ADDR: 091C: FIELD_LIST(128) */
#pragma pack(push, 1)
/* number of fields = 5, size = 0x001c [28 bytes] */
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
    struct tItemButton* item[4];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 09AF: NAME(132) */
/* BASE TYPE ADDR: 096C: FIELD_LIST(131) */
#pragma pack(push, 1)
/* number of fields = 5, size = 0x0014 [20 bytes] */
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
    struct tItemButton* item[2];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0A08: NAME(137) */
/* BASE TYPE ADDR: 09C5: FIELD_LIST(136) */
#pragma pack(push, 1)
/* number of fields = 5, size = 0x0034 [52 bytes] */
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
    struct tItemButton* item[10];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0A59: NAME(140) */
/* BASE TYPE ADDR: 0A16: FIELD_LIST(139) */
#pragma pack(push, 1)
/* number of fields = 5, size = 0x0034 [52 bytes] */
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
    struct tItemButton* item[10];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0AAA: NAME(143) */
/* BASE TYPE ADDR: 0A67: FIELD_LIST(142) */
#pragma pack(push, 1)
/* number of fields = 5, size = 0x0024 [36 bytes] */
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
    struct tItemButton* item[6];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0AFB: NAME(146) */
/* BASE TYPE ADDR: 0AB8: FIELD_LIST(145) */
#pragma pack(push, 1)
/* number of fields = 5, size = 0x0034 [52 bytes] */
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
    struct tItemButton* item[10];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0B4C: NAME(149) */
/* BASE TYPE ADDR: 0B09: FIELD_LIST(148) */
#pragma pack(push, 1)
/* number of fields = 5, size = 0x0034 [52 bytes] */
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
    struct tItemButton* item[10];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0B9D: NAME(152) */
/* BASE TYPE ADDR: 0B5A: FIELD_LIST(151) */
#pragma pack(push, 1)
/* number of fields = 5, size = 0x001c [28 bytes] */
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
    struct tItemButton* item[4];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0BEE: NAME(155) */
/* BASE TYPE ADDR: 0BAB: FIELD_LIST(154) */
#pragma pack(push, 1)
/* number of fields = 5, size = 0x001c [28 bytes] */
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
    struct tItemButton* item[4];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0C3F: NAME(158) */
/* BASE TYPE ADDR: 0BFC: FIELD_LIST(157) */
#pragma pack(push, 1)
/* number of fields = 5, size = 0x001c [28 bytes] */
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
    struct tItemButton* item[4];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0C90: NAME(161) */
/* BASE TYPE ADDR: 0C4D: FIELD_LIST(160) */
#pragma pack(push, 1)
/* number of fields = 5, size = 0x002c [44 bytes] */
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
    struct tItemButton* item[8];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0CE1: NAME(164) */
/* BASE TYPE ADDR: 0C9E: FIELD_LIST(163) */
#pragma pack(push, 1)
/* number of fields = 5, size = 0x002c [44 bytes] */
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
    struct tItemButton* item[8];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0D32: NAME(167) */
/* BASE TYPE ADDR: 0CEF: FIELD_LIST(166) */
#pragma pack(push, 1)
/* number of fields = 5, size = 0x0014 [20 bytes] */
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
    struct tItemButton* item[2];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0D83: NAME(170) */
/* BASE TYPE ADDR: 0D40: FIELD_LIST(169) */
#pragma pack(push, 1)
/* number of fields = 5, size = 0x0024 [36 bytes] */
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
    struct tItemButton* item[6];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 0E20: NAME(193) */
/* BASE TYPE ADDR: 0DE1: FIELD_LIST(192) */
#pragma pack(push, 1)
/* number of fields = 4, size = 0x000b [11 bytes] */
struct tItemImage
{
    /* offset = 0x0000 [0] */
    enum tItemTypes type;
    /* offset = 0x0001 [1] */
    unsigned short flags;
    /* offset = 0x0003 [3] */
    char imageNameNormal[4];
    /* offset = 0x0007 [7] */
    char imageNameHigh[4];
};
#pragma pack(pop)
