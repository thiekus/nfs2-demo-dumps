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

/* NAME TYPE ADDR: 0080: NAME(14) */
/* BASE TYPE ADDR: 007C: BYTE_INDEX ARRAY(13) */
typedef char* va_list[1];
/* 008B: SCALAR(15) = unsigned long */

/* NAME TYPE ADDR: 009B: NAME(16) */
/* BASE TYPE ADDR: 008B: SCALAR(15) */
typedef unsigned long ULONG;

/* NAME TYPE ADDR: 00A7: NAME(18) */
/* BASE TYPE ADDR: 00A4: NEAR386 PTR(17) */
typedef ULONG* PULONG;

/* NAME TYPE ADDR: 00B1: NAME(19) */
/* BASE TYPE ADDR: 0048: SCALAR(8) */
typedef unsigned short USHORT;

/* NAME TYPE ADDR: 00BE: NAME(21) */
/* BASE TYPE ADDR: 00BB: NEAR386 PTR(20) */
typedef USHORT* PUSHORT;

/* NAME TYPE ADDR: 00C9: NAME(22) */
/* BASE TYPE ADDR: 0030: SCALAR(6) */
typedef unsigned char UCHAR;

/* NAME TYPE ADDR: 00D5: NAME(24) */
/* BASE TYPE ADDR: 00D2: NEAR386 PTR(23) */
typedef UCHAR* PUCHAR;

/* NAME TYPE ADDR: 00DF: NAME(25) */
/* BASE TYPE ADDR: 0079: NEAR386 PTR(12) */
typedef char* PSZ;

/* NAME TYPE ADDR: 00E6: NAME(26) */
/* BASE TYPE ADDR: 008B: SCALAR(15) */
typedef unsigned long DWORD;

/* NAME TYPE ADDR: 00EF: NAME(27) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int BOOL;

/* NAME TYPE ADDR: 00F7: NAME(28) */
/* BASE TYPE ADDR: 0030: SCALAR(6) */
typedef unsigned char BYTE;

/* NAME TYPE ADDR: 00FF: NAME(29) */
/* BASE TYPE ADDR: 0048: SCALAR(8) */
typedef unsigned short WORD;
/* 0107: SCALAR(30) = float */

/* NAME TYPE ADDR: 010F: NAME(31) */
/* BASE TYPE ADDR: 0107: SCALAR(30) */
typedef float FLOAT;

/* NAME TYPE ADDR: 011B: NAME(33) */
/* BASE TYPE ADDR: 0118: NEAR386 PTR(32) */
typedef FLOAT* PFLOAT;

/* NAME TYPE ADDR: 0128: NAME(35) */
/* BASE TYPE ADDR: 0125: NEAR386 PTR(34) */
typedef BOOL* PBOOL;

/* NAME TYPE ADDR: 0131: NAME(36) */
/* BASE TYPE ADDR: 0125: NEAR386 PTR(34) */
typedef BOOL* LPBOOL;

/* NAME TYPE ADDR: 013E: NAME(38) */
/* BASE TYPE ADDR: 013B: NEAR386 PTR(37) */
typedef BYTE* PBYTE;

/* NAME TYPE ADDR: 0147: NAME(39) */
/* BASE TYPE ADDR: 013B: NEAR386 PTR(37) */
typedef BYTE* LPBYTE;

/* NAME TYPE ADDR: 0154: NAME(41) */
/* BASE TYPE ADDR: 0151: NEAR386 PTR(40) */
typedef int* PINT;

/* NAME TYPE ADDR: 015C: NAME(42) */
/* BASE TYPE ADDR: 0151: NEAR386 PTR(40) */
typedef int* LPINT;

/* NAME TYPE ADDR: 0168: NAME(44) */
/* BASE TYPE ADDR: 0165: NEAR386 PTR(43) */
typedef WORD* PWORD;

/* NAME TYPE ADDR: 0171: NAME(45) */
/* BASE TYPE ADDR: 0165: NEAR386 PTR(43) */
typedef WORD* LPWORD;
/* 017B: SCALAR(46) = long */

/* NAME TYPE ADDR: 0185: NAME(48) */
/* BASE TYPE ADDR: 0182: NEAR386 PTR(47) */
typedef long* LPLONG;

/* NAME TYPE ADDR: 0192: NAME(50) */
/* BASE TYPE ADDR: 018F: NEAR386 PTR(49) */
typedef DWORD* PDWORD;

/* NAME TYPE ADDR: 019C: NAME(51) */
/* BASE TYPE ADDR: 018F: NEAR386 PTR(49) */
typedef DWORD* LPDWORD;
/* 01A7: SCALAR(52) = void */

/* NAME TYPE ADDR: 01B1: NAME(54) */
/* BASE TYPE ADDR: 01AE: NEAR386 PTR(53) */
typedef void* LPVOID;
/* 01BB: SCALAR(55) = void */

/* NAME TYPE ADDR: 01C5: NAME(57) */
/* BASE TYPE ADDR: 01C2: NEAR386 PTR(56) */
typedef void* LPCVOID;

/* NAME TYPE ADDR: 01D0: NAME(58) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int INT;

/* NAME TYPE ADDR: 01D7: NAME(59) */
/* BASE TYPE ADDR: 005F: SCALAR(10) */
typedef unsigned int UINT;

/* NAME TYPE ADDR: 01E2: NAME(61) */
/* BASE TYPE ADDR: 01DF: NEAR386 PTR(60) */
typedef unsigned int* PUINT;

/* NAME TYPE ADDR: 01EB: NAME(62) */
/* BASE TYPE ADDR: 01AE: NEAR386 PTR(53) */
typedef void* PVOID;

/* NAME TYPE ADDR: 01F4: NAME(63) */
/* BASE TYPE ADDR: 001B: SCALAR(4) */
typedef char CHAR;

/* NAME TYPE ADDR: 01FC: NAME(64) */
/* BASE TYPE ADDR: 0040: SCALAR(7) */
typedef short SHORT;

/* NAME TYPE ADDR: 0205: NAME(65) */
/* BASE TYPE ADDR: 017B: SCALAR(46) */
typedef long LONG;

/* NAME TYPE ADDR: 020D: NAME(66) */
/* BASE TYPE ADDR: 006E: NAME(11) */
typedef wchar_t WCHAR;

/* NAME TYPE ADDR: 0219: NAME(68) */
/* BASE TYPE ADDR: 0216: NEAR386 PTR(67) */
typedef WCHAR* PWCHAR;

/* NAME TYPE ADDR: 0223: NAME(69) */
/* BASE TYPE ADDR: 0216: NEAR386 PTR(67) */
typedef WCHAR* LPWCH;

/* NAME TYPE ADDR: 022C: NAME(70) */
/* BASE TYPE ADDR: 0216: NEAR386 PTR(67) */
typedef WCHAR* PWCH;

/* NAME TYPE ADDR: 0234: NAME(71) */
/* BASE TYPE ADDR: 006E: NAME(11) */
typedef wchar_t WCHAR;

/* NAME TYPE ADDR: 0240: NAME(73) */
/* BASE TYPE ADDR: 023D: NEAR386 PTR(72) */
typedef WCHAR* LPCWCH;

/* NAME TYPE ADDR: 024A: NAME(74) */
/* BASE TYPE ADDR: 023D: NEAR386 PTR(72) */
typedef WCHAR* PCWCH;

/* NAME TYPE ADDR: 0253: NAME(75) */
/* BASE TYPE ADDR: 0216: NEAR386 PTR(67) */
typedef WCHAR* NWPSTR;

/* NAME TYPE ADDR: 025D: NAME(76) */
/* BASE TYPE ADDR: 0216: NEAR386 PTR(67) */
typedef WCHAR* LPWSTR;

/* NAME TYPE ADDR: 0267: NAME(77) */
/* BASE TYPE ADDR: 0216: NEAR386 PTR(67) */
typedef WCHAR* PWSTR;

/* NAME TYPE ADDR: 0270: NAME(78) */
/* BASE TYPE ADDR: 023D: NEAR386 PTR(72) */
typedef WCHAR* LPCWSTR;

/* NAME TYPE ADDR: 027B: NAME(79) */
/* BASE TYPE ADDR: 023D: NEAR386 PTR(72) */
typedef WCHAR* PCWSTR;

/* NAME TYPE ADDR: 0288: NAME(81) */
/* BASE TYPE ADDR: 0285: NEAR386 PTR(80) */
typedef CHAR* PCHAR;

/* NAME TYPE ADDR: 0291: NAME(82) */
/* BASE TYPE ADDR: 0285: NEAR386 PTR(80) */
typedef CHAR* LPCH;

/* NAME TYPE ADDR: 0299: NAME(83) */
/* BASE TYPE ADDR: 0285: NEAR386 PTR(80) */
typedef CHAR* PCH;

/* NAME TYPE ADDR: 02A0: NAME(84) */
/* BASE TYPE ADDR: 001B: SCALAR(4) */
typedef char CHAR;

/* NAME TYPE ADDR: 02AB: NAME(86) */
/* BASE TYPE ADDR: 02A8: NEAR386 PTR(85) */
typedef CHAR* LPCCH;

/* NAME TYPE ADDR: 02B4: NAME(87) */
/* BASE TYPE ADDR: 02A8: NEAR386 PTR(85) */
typedef CHAR* PCCH;

/* NAME TYPE ADDR: 02BC: NAME(88) */
/* BASE TYPE ADDR: 0285: NEAR386 PTR(80) */
typedef CHAR* NPSTR;

/* NAME TYPE ADDR: 02C5: NAME(89) */
/* BASE TYPE ADDR: 0285: NEAR386 PTR(80) */
typedef CHAR* LPSTR;

/* NAME TYPE ADDR: 02CE: NAME(90) */
/* BASE TYPE ADDR: 0285: NEAR386 PTR(80) */
typedef CHAR* PSTR;

/* NAME TYPE ADDR: 02D6: NAME(91) */
/* BASE TYPE ADDR: 02A8: NEAR386 PTR(85) */
typedef CHAR* LPCSTR;

/* NAME TYPE ADDR: 02E0: NAME(92) */
/* BASE TYPE ADDR: 02A8: NEAR386 PTR(85) */
typedef CHAR* PCSTR;

/* NAME TYPE ADDR: 02E9: NAME(93) */
/* BASE TYPE ADDR: 001B: SCALAR(4) */
typedef char TCHAR;

/* NAME TYPE ADDR: 02F2: NAME(94) */
/* BASE TYPE ADDR: 0079: NEAR386 PTR(12) */
typedef char* PTCHAR;

/* NAME TYPE ADDR: 02FC: NAME(95) */
/* BASE TYPE ADDR: 0030: SCALAR(6) */
typedef unsigned char TBYTE;

/* NAME TYPE ADDR: 0308: NAME(97) */
/* BASE TYPE ADDR: 0305: NEAR386 PTR(96) */
typedef unsigned char* PTBYTE;

/* NAME TYPE ADDR: 0312: NAME(98) */
/* BASE TYPE ADDR: 02C5: NAME(89) */
typedef LPSTR LPTCH;

/* NAME TYPE ADDR: 031B: NAME(99) */
/* BASE TYPE ADDR: 02C5: NAME(89) */
typedef LPSTR PTCH;

/* NAME TYPE ADDR: 0323: NAME(100) */
/* BASE TYPE ADDR: 02C5: NAME(89) */
typedef LPSTR PTSTR;

/* NAME TYPE ADDR: 032C: NAME(101) */
/* BASE TYPE ADDR: 02C5: NAME(89) */
typedef LPSTR LPTSTR;

/* NAME TYPE ADDR: 0336: NAME(102) */
/* BASE TYPE ADDR: 02D6: NAME(91) */
typedef LPCSTR LPCTSTR;

/* NAME TYPE ADDR: 0344: NAME(104) */
/* BASE TYPE ADDR: 0341: NEAR386 PTR(103) */
typedef SHORT* PSHORT;

/* NAME TYPE ADDR: 0351: NAME(106) */
/* BASE TYPE ADDR: 034E: NEAR386 PTR(105) */
typedef LONG* PLONG;

/* NAME TYPE ADDR: 035A: NAME(107) */
/* BASE TYPE ADDR: 01EB: NAME(62) */
typedef PVOID HANDLE;

/* NAME TYPE ADDR: 0367: NAME(109) */
/* BASE TYPE ADDR: 0364: NEAR386 PTR(108) */
typedef HANDLE* PHANDLE;

/* NAME TYPE ADDR: 0372: NAME(110) */
/* BASE TYPE ADDR: 001B: SCALAR(4) */
typedef char CCHAR;

/* NAME TYPE ADDR: 037B: NAME(111) */
/* BASE TYPE ADDR: 00E6: NAME(26) */
typedef DWORD LCID;

/* NAME TYPE ADDR: 0383: NAME(112) */
/* BASE TYPE ADDR: 0192: NAME(50) */
typedef PDWORD PLCID;

/* NAME TYPE ADDR: 038C: NAME(113) */
/* BASE TYPE ADDR: 00FF: NAME(29) */
typedef WORD LANGID;
/* 0396: SCALAR(114) = double */

/* NAME TYPE ADDR: 039F: NAME(115) */
/* BASE TYPE ADDR: 0396: SCALAR(114) */
typedef double LONGLONG;

/* NAME TYPE ADDR: 03AB: NAME(116) */
/* BASE TYPE ADDR: 0396: SCALAR(114) */
typedef double DWORDLONG;

/* NAME TYPE ADDR: 03BB: NAME(118) */
/* BASE TYPE ADDR: 03B8: NEAR386 PTR(117) */
typedef LONGLONG* PLONGLONG;

/* NAME TYPE ADDR: 03CB: NAME(120) */
/* BASE TYPE ADDR: 03C8: NEAR386 PTR(119) */
typedef DWORDLONG* PDWORDLONG;

/* NAME TYPE ADDR: 03D9: NAME(121) */
/* BASE TYPE ADDR: 039F: NAME(115) */
typedef LONGLONG USN;

/* NAME TYPE ADDR: 03E0: NAME(122) */
/* BASE TYPE ADDR: 00F7: NAME(28) */
typedef BYTE BOOLEAN;

/* NAME TYPE ADDR: 03EE: NAME(124) */
/* BASE TYPE ADDR: 03EB: NEAR386 PTR(123) */
typedef BOOLEAN* PBOOLEAN;

/* NAME TYPE ADDR: 03FA: NAME(125) */
/* BASE TYPE ADDR: 00E6: NAME(26) */
typedef DWORD KSPIN_LOCK;

/* NAME TYPE ADDR: 0408: NAME(126) */
/* BASE TYPE ADDR: 01EB: NAME(62) */
typedef PVOID PACCESS_TOKEN;

/* NAME TYPE ADDR: 0419: NAME(127) */
/* BASE TYPE ADDR: 01EB: NAME(62) */
typedef PVOID PSECURITY_DESCRIPTOR;

/* NAME TYPE ADDR: 0431: NAME(128) */
/* BASE TYPE ADDR: 01EB: NAME(62) */
typedef PVOID PSID;

/* NAME TYPE ADDR: 0439: NAME(129) */
/* BASE TYPE ADDR: 00E6: NAME(26) */
typedef DWORD ACCESS_MASK;

/* NAME TYPE ADDR: 044C: NAME(131) */
/* BASE TYPE ADDR: 0448: NEAR386 PTR(130) */
typedef ACCESS_MASK* PACCESS_MASK;

/* NAME TYPE ADDR: 045D: NAME(132) */
/* BASE TYPE ADDR: 00FF: NAME(29) */
typedef WORD SECURITY_DESCRIPTOR_CONTROL;

/* NAME TYPE ADDR: 047C: NAME(133) */
/* BASE TYPE ADDR: 0165: NEAR386 PTR(43) */
typedef WORD* PSECURITY_DESCRIPTOR_CONTROL;

/* NAME TYPE ADDR: 049C: NAME(134) */
/* BASE TYPE ADDR: 03E0: NAME(122) */
typedef BOOLEAN SECURITY_CONTEXT_TRACKING_MODE;

/* NAME TYPE ADDR: 04BE: NAME(135) */
/* BASE TYPE ADDR: 03EB: NEAR386 PTR(123) */
typedef BOOLEAN* PSECURITY_CONTEXT_TRACKING_MODE;

/* NAME TYPE ADDR: 04E1: NAME(136) */
/* BASE TYPE ADDR: 00E6: NAME(26) */
typedef DWORD SECURITY_INFORMATION;

/* NAME TYPE ADDR: 04F9: NAME(137) */
/* BASE TYPE ADDR: 018F: NEAR386 PTR(49) */
typedef DWORD* PSECURITY_INFORMATION;

/* NAME TYPE ADDR: 051D: NAME(140) */
/* BASE TYPE ADDR: 0519: NEAR386 PTR(139) */
/* 0512: NEAR386 PROC(138) */
typedef void (*PIMAGE_TLS_CALLBACK)(PVOID arg0, DWORD arg1, PVOID arg2);

/* NAME TYPE ADDR: 0535: NAME(141) */
/* BASE TYPE ADDR: 005F: SCALAR(10) */
typedef unsigned int size_t;

/* NAME TYPE ADDR: 053F: NAME(142) */
/* BASE TYPE ADDR: 01D7: NAME(59) */
typedef UINT WPARAM;

/* NAME TYPE ADDR: 0549: NAME(143) */
/* BASE TYPE ADDR: 0205: NAME(65) */
typedef LONG LPARAM;

/* NAME TYPE ADDR: 0553: NAME(144) */
/* BASE TYPE ADDR: 0205: NAME(65) */
typedef LONG LRESULT;

/* NAME TYPE ADDR: 055E: NAME(145) */
/* BASE TYPE ADDR: 035A: NAME(107) */
typedef HANDLE HWND;

/* NAME TYPE ADDR: 0566: NAME(146) */
/* BASE TYPE ADDR: 035A: NAME(107) */
typedef HANDLE HHOOK;

/* NAME TYPE ADDR: 056F: NAME(147) */
/* BASE TYPE ADDR: 00FF: NAME(29) */
typedef WORD ATOM;

/* NAME TYPE ADDR: 0577: NAME(148) */
/* BASE TYPE ADDR: 0364: NEAR386 PTR(108) */
typedef HANDLE* SPHANDLE;

/* NAME TYPE ADDR: 0583: NAME(149) */
/* BASE TYPE ADDR: 0364: NEAR386 PTR(108) */
typedef HANDLE* LPHANDLE;

/* NAME TYPE ADDR: 058F: NAME(150) */
/* BASE TYPE ADDR: 035A: NAME(107) */
typedef HANDLE HGLOBAL;

/* NAME TYPE ADDR: 059A: NAME(151) */
/* BASE TYPE ADDR: 035A: NAME(107) */
typedef HANDLE HLOCAL;

/* NAME TYPE ADDR: 05A4: NAME(152) */
/* BASE TYPE ADDR: 035A: NAME(107) */
typedef HANDLE GLOBALHANDLE;

/* NAME TYPE ADDR: 05B4: NAME(153) */
/* BASE TYPE ADDR: 035A: NAME(107) */
typedef HANDLE LOCALHANDLE;

/* NAME TYPE ADDR: 05CB: NAME(156) */
/* BASE TYPE ADDR: 05C7: NEAR386 PTR(155) */
/* 05C3: NEAR386 PROC(154) */
typedef int (*FARPROC)();

/* NAME TYPE ADDR: 05DB: NAME(158) */
/* BASE TYPE ADDR: 05D7: NEAR386 PTR(157) */
/* 05C3: NEAR386 PROC(154) */
typedef int (*NEARPROC)();

/* NAME TYPE ADDR: 05EC: NAME(160) */
/* BASE TYPE ADDR: 05E8: NEAR386 PTR(159) */
/* 05C3: NEAR386 PROC(154) */
typedef int (*PROC)();

/* NAME TYPE ADDR: 05F5: NAME(161) */
/* BASE TYPE ADDR: 035A: NAME(107) */
typedef HANDLE HGDIOBJ;

/* NAME TYPE ADDR: 0600: NAME(162) */
/* BASE TYPE ADDR: 035A: NAME(107) */
typedef HANDLE HACCEL;

/* NAME TYPE ADDR: 060A: NAME(163) */
/* BASE TYPE ADDR: 035A: NAME(107) */
typedef HANDLE HBITMAP;

/* NAME TYPE ADDR: 0615: NAME(164) */
/* BASE TYPE ADDR: 035A: NAME(107) */
typedef HANDLE HBRUSH;

/* NAME TYPE ADDR: 061F: NAME(165) */
/* BASE TYPE ADDR: 035A: NAME(107) */
typedef HANDLE HCOLORSPACE;

/* NAME TYPE ADDR: 062E: NAME(166) */
/* BASE TYPE ADDR: 035A: NAME(107) */
typedef HANDLE HDC;

/* NAME TYPE ADDR: 0635: NAME(167) */
/* BASE TYPE ADDR: 035A: NAME(107) */
typedef HANDLE HGLRC;

/* NAME TYPE ADDR: 063E: NAME(168) */
/* BASE TYPE ADDR: 035A: NAME(107) */
typedef HANDLE HDESK;

/* NAME TYPE ADDR: 0647: NAME(169) */
/* BASE TYPE ADDR: 035A: NAME(107) */
typedef HANDLE HENHMETAFILE;

/* NAME TYPE ADDR: 0657: NAME(170) */
/* BASE TYPE ADDR: 035A: NAME(107) */
typedef HANDLE HFONT;

/* NAME TYPE ADDR: 0660: NAME(171) */
/* BASE TYPE ADDR: 035A: NAME(107) */
typedef HANDLE HICON;

/* NAME TYPE ADDR: 0669: NAME(172) */
/* BASE TYPE ADDR: 035A: NAME(107) */
typedef HANDLE HMENU;

/* NAME TYPE ADDR: 0672: NAME(173) */
/* BASE TYPE ADDR: 035A: NAME(107) */
typedef HANDLE HMETAFILE;

/* NAME TYPE ADDR: 067F: NAME(174) */
/* BASE TYPE ADDR: 035A: NAME(107) */
typedef HANDLE HINSTANCE;

/* NAME TYPE ADDR: 068C: NAME(175) */
/* BASE TYPE ADDR: 067F: NAME(174) */
typedef HINSTANCE HMODULE;

/* NAME TYPE ADDR: 0698: NAME(176) */
/* BASE TYPE ADDR: 035A: NAME(107) */
typedef HANDLE HPALETTE;

/* NAME TYPE ADDR: 06A4: NAME(177) */
/* BASE TYPE ADDR: 035A: NAME(107) */
typedef HANDLE HPEN;

/* NAME TYPE ADDR: 06AC: NAME(178) */
/* BASE TYPE ADDR: 035A: NAME(107) */
typedef HANDLE HRGN;

/* NAME TYPE ADDR: 06B4: NAME(179) */
/* BASE TYPE ADDR: 035A: NAME(107) */
typedef HANDLE HRSRC;

/* NAME TYPE ADDR: 06BD: NAME(180) */
/* BASE TYPE ADDR: 035A: NAME(107) */
typedef HANDLE HSTR;

/* NAME TYPE ADDR: 06C5: NAME(181) */
/* BASE TYPE ADDR: 035A: NAME(107) */
typedef HANDLE HTASK;

/* NAME TYPE ADDR: 06CE: NAME(182) */
/* BASE TYPE ADDR: 035A: NAME(107) */
typedef HANDLE HWINSTA;

/* NAME TYPE ADDR: 06D9: NAME(183) */
/* BASE TYPE ADDR: 035A: NAME(107) */
typedef HANDLE HKL;

/* NAME TYPE ADDR: 06E0: NAME(184) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int HFILE;

/* NAME TYPE ADDR: 06E9: NAME(185) */
/* BASE TYPE ADDR: 0660: NAME(171) */
typedef HICON HCURSOR;

/* NAME TYPE ADDR: 06F5: NAME(186) */
/* BASE TYPE ADDR: 00E6: NAME(26) */
typedef DWORD COLORREF;

/* NAME TYPE ADDR: 0701: NAME(187) */
/* BASE TYPE ADDR: 018F: NEAR386 PTR(49) */
typedef DWORD* LPCOLORREF;

/* NAME TYPE ADDR: 0718: NAME(190) */
/* BASE TYPE ADDR: 0714: NEAR386 PTR(189) */
/* 070F: NEAR386 PROC(188) */
typedef DWORD (*PTHREAD_START_ROUTINE)(LPVOID arg0);

/* NAME TYPE ADDR: 0732: NAME(191) */
/* BASE TYPE ADDR: 0718: NAME(190) */
typedef PTHREAD_START_ROUTINE LPTHREAD_START_ROUTINE;

/* NAME TYPE ADDR: 074D: NAME(192) */
/* BASE TYPE ADDR: 008B: SCALAR(15) */
typedef unsigned long DWORD;

/* NAME TYPE ADDR: 0756: NAME(193) */
/* BASE TYPE ADDR: 01EB: NAME(62) */
typedef PVOID HANDLE;

/* NAME TYPE ADDR: 0760: NAME(194) */
/* BASE TYPE ADDR: 01AE: NEAR386 PTR(53) */
typedef void* LPVOID;

/* NAME TYPE ADDR: 076A: NAME(195) */
/* BASE TYPE ADDR: 05CB: NAME(156) */
typedef FARPROC ENUMRESTYPEPROC;

/* NAME TYPE ADDR: 077E: NAME(196) */
/* BASE TYPE ADDR: 05CB: NAME(156) */
typedef FARPROC ENUMRESNAMEPROC;

/* NAME TYPE ADDR: 0792: NAME(197) */
/* BASE TYPE ADDR: 05CB: NAME(156) */
typedef FARPROC ENUMRESLANGPROC;

/* NAME TYPE ADDR: 07A6: NAME(198) */
/* BASE TYPE ADDR: 0205: NAME(65) */
typedef LONG LCSCSTYPE;

/* NAME TYPE ADDR: 07B3: NAME(199) */
/* BASE TYPE ADDR: 0205: NAME(65) */
typedef LONG LCSGAMUTMATCH;

/* NAME TYPE ADDR: 07C4: NAME(200) */
/* BASE TYPE ADDR: 017B: SCALAR(46) */
typedef long FXPT16DOT16;

/* NAME TYPE ADDR: 07D3: NAME(201) */
/* BASE TYPE ADDR: 0182: NEAR386 PTR(47) */
typedef long* LPFXPT16DOT16;

/* NAME TYPE ADDR: 07E4: NAME(202) */
/* BASE TYPE ADDR: 017B: SCALAR(46) */
typedef long FXPT2DOT30;

/* NAME TYPE ADDR: 07F2: NAME(203) */
/* BASE TYPE ADDR: 0182: NEAR386 PTR(47) */
typedef long* LPFXPT2DOT30;

/* NAME TYPE ADDR: 0802: NAME(204) */
/* BASE TYPE ADDR: 00F7: NAME(28) */
typedef BYTE BCHAR;

/* NAME TYPE ADDR: 080B: NAME(205) */
/* BASE TYPE ADDR: 05CB: NAME(156) */
typedef FARPROC OLDFONTENUMPROC;

/* NAME TYPE ADDR: 081F: NAME(206) */
/* BASE TYPE ADDR: 05CB: NAME(156) */
typedef FARPROC FONTENUMPROCA;

/* NAME TYPE ADDR: 0831: NAME(207) */
/* BASE TYPE ADDR: 05CB: NAME(156) */
typedef FARPROC FONTENUMPROCW;

/* NAME TYPE ADDR: 0843: NAME(208) */
/* BASE TYPE ADDR: 081F: NAME(206) */
typedef FONTENUMPROCA FONTENUMPROC;

/* NAME TYPE ADDR: 0854: NAME(209) */
/* BASE TYPE ADDR: 05CB: NAME(156) */
typedef FARPROC GOBJENUMPROC;

/* NAME TYPE ADDR: 0865: NAME(210) */
/* BASE TYPE ADDR: 05CB: NAME(156) */
typedef FARPROC LINEDDAPROC;

/* NAME TYPE ADDR: 0875: NAME(211) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int INT;

/* NAME TYPE ADDR: 087C: NAME(212) */
/* BASE TYPE ADDR: 0030: SCALAR(6) */
typedef unsigned char BYTE;

/* NAME TYPE ADDR: 0884: NAME(213) */
/* BASE TYPE ADDR: 05CB: NAME(156) */
typedef FARPROC ABORTPROC;

/* NAME TYPE ADDR: 089D: NAME(216) */
/* BASE TYPE ADDR: 0899: NEAR386 PTR(215) */
/* 0892: NEAR386 PROC(214) */
typedef int (*ICMENUMPROCA)(LPSTR arg0, LPARAM arg1, char arg2);

/* NAME TYPE ADDR: 08B9: NAME(219) */
/* BASE TYPE ADDR: 08B5: NEAR386 PTR(218) */
/* 08AE: NEAR386 PROC(217) */
typedef int (*ICMENUMPROCW)(LPWSTR arg0, LPARAM arg1, char arg2);

/* NAME TYPE ADDR: 08CA: NAME(220) */
/* BASE TYPE ADDR: 035A: NAME(107) */
typedef HANDLE HDWP;

/* NAME TYPE ADDR: 08D2: NAME(221) */
/* BASE TYPE ADDR: 01A7: SCALAR(52) */
typedef void MENUTEMPLATEA;

/* NAME TYPE ADDR: 08E3: NAME(222) */
/* BASE TYPE ADDR: 01A7: SCALAR(52) */
typedef void MENUTEMPLATEW;

/* NAME TYPE ADDR: 08F4: NAME(223) */
/* BASE TYPE ADDR: 08D2: NAME(221) */
typedef MENUTEMPLATEA MENUTEMPLATE;

/* NAME TYPE ADDR: 0905: NAME(224) */
/* BASE TYPE ADDR: 01EB: NAME(62) */
typedef PVOID LPMENUTEMPLATEA;

/* NAME TYPE ADDR: 0918: NAME(225) */
/* BASE TYPE ADDR: 01EB: NAME(62) */
typedef PVOID LPMENUTEMPLATEW;

/* NAME TYPE ADDR: 092B: NAME(226) */
/* BASE TYPE ADDR: 0905: NAME(224) */
typedef LPMENUTEMPLATEA LPMENUTEMPLATE;

/* NAME TYPE ADDR: 094E: NAME(229) */
/* BASE TYPE ADDR: 094A: NEAR386 PTR(228) */
/* 093E: NEAR386 PROC(227) */
typedef LRESULT (*WNDPROC)(HWND arg0, UINT arg1, WPARAM arg2);

/* NAME TYPE ADDR: 095A: NAME(230) */
/* BASE TYPE ADDR: 05CB: NAME(156) */
typedef FARPROC DLGPROC;

/* NAME TYPE ADDR: 0966: NAME(231) */
/* BASE TYPE ADDR: 05CB: NAME(156) */
typedef FARPROC TIMERPROC;

/* NAME TYPE ADDR: 0974: NAME(232) */
/* BASE TYPE ADDR: 05CB: NAME(156) */
typedef FARPROC GRAYSTRINGPROC;

/* NAME TYPE ADDR: 0987: NAME(233) */
/* BASE TYPE ADDR: 05CB: NAME(156) */
typedef FARPROC WNDENUMPROC;

/* NAME TYPE ADDR: 0997: NAME(234) */
/* BASE TYPE ADDR: 05CB: NAME(156) */
typedef FARPROC HOOKPROC;

/* NAME TYPE ADDR: 09A4: NAME(235) */
/* BASE TYPE ADDR: 05CB: NAME(156) */
typedef FARPROC SENDASYNCPROC;

/* NAME TYPE ADDR: 09B6: NAME(236) */
/* BASE TYPE ADDR: 05CB: NAME(156) */
typedef FARPROC EDITWORDBREAKPROCA;

/* NAME TYPE ADDR: 09CD: NAME(237) */
/* BASE TYPE ADDR: 05CB: NAME(156) */
typedef FARPROC EDITWORDBREAKPROCW;

/* NAME TYPE ADDR: 09E4: NAME(238) */
/* BASE TYPE ADDR: 05CB: NAME(156) */
typedef FARPROC PROPENUMPROCA;

/* NAME TYPE ADDR: 09F6: NAME(239) */
/* BASE TYPE ADDR: 05CB: NAME(156) */
typedef FARPROC PROPENUMPROCW;

/* NAME TYPE ADDR: 0A08: NAME(240) */
/* BASE TYPE ADDR: 05CB: NAME(156) */
typedef FARPROC PROPENUMPROCEXA;

/* NAME TYPE ADDR: 0A1C: NAME(241) */
/* BASE TYPE ADDR: 05CB: NAME(156) */
typedef FARPROC PROPENUMPROCEXW;

/* NAME TYPE ADDR: 0A30: NAME(242) */
/* BASE TYPE ADDR: 05CB: NAME(156) */
typedef FARPROC DRAWSTATEPROC;

/* NAME TYPE ADDR: 0A42: NAME(243) */
/* BASE TYPE ADDR: 09E4: NAME(238) */
typedef PROPENUMPROCA PROPENUMPROC;

/* NAME TYPE ADDR: 0A53: NAME(244) */
/* BASE TYPE ADDR: 0A08: NAME(240) */
typedef PROPENUMPROCEXA PROPENUMPROCEX;

/* NAME TYPE ADDR: 0A66: NAME(245) */
/* BASE TYPE ADDR: 09B6: NAME(236) */
typedef EDITWORDBREAKPROCA EDITWORDBREAKPROC;

/* NAME TYPE ADDR: 0A7C: NAME(246) */
/* BASE TYPE ADDR: 05CB: NAME(156) */
typedef FARPROC NAMEENUMPROCA;

/* NAME TYPE ADDR: 0A8E: NAME(247) */
/* BASE TYPE ADDR: 05CB: NAME(156) */
typedef FARPROC NAMEENUMPROCW;

/* NAME TYPE ADDR: 0AA0: NAME(248) */
/* BASE TYPE ADDR: 05CB: NAME(156) */
typedef FARPROC WINSTAENUMPROCA;

/* NAME TYPE ADDR: 0AB4: NAME(249) */
/* BASE TYPE ADDR: 05CB: NAME(156) */
typedef FARPROC DESKTOPENUMPROCA;

/* NAME TYPE ADDR: 0AC9: NAME(250) */
/* BASE TYPE ADDR: 05CB: NAME(156) */
typedef FARPROC WINSTAENUMPROCW;

/* NAME TYPE ADDR: 0ADD: NAME(251) */
/* BASE TYPE ADDR: 05CB: NAME(156) */
typedef FARPROC DESKTOPENUMPROCW;

/* NAME TYPE ADDR: 0AF2: NAME(252) */
/* BASE TYPE ADDR: 0AA0: NAME(248) */
typedef WINSTAENUMPROCA WINSTAENUMPROC;

/* NAME TYPE ADDR: 0B05: NAME(253) */
/* BASE TYPE ADDR: 0AB4: NAME(249) */
typedef DESKTOPENUMPROCA DESKTOPENUMPROC;

/* NAME TYPE ADDR: 0B19: NAME(254) */
/* BASE TYPE ADDR: 01A7: SCALAR(52) */
typedef void MENUTEMPLATEA;

/* NAME TYPE ADDR: 0B2A: NAME(255) */
/* BASE TYPE ADDR: 01A7: SCALAR(52) */
typedef void MENUTEMPLATEW;

/* NAME TYPE ADDR: 0B3B: NAME(256) */
/* BASE TYPE ADDR: 00E6: NAME(26) */
typedef DWORD COLORREF;

/* NAME TYPE ADDR: 0B47: NAME(257) */
/* BASE TYPE ADDR: 035A: NAME(107) */
typedef HANDLE HWND;

/* NAME TYPE ADDR: 0B4F: NAME(258) */
/* BASE TYPE ADDR: 00E6: NAME(26) */
typedef DWORD HELPPOLY;

/* NAME TYPE ADDR: 0B5B: NAME(259) */
/* BASE TYPE ADDR: 00E6: NAME(26) */
typedef DWORD LCTYPE;

/* NAME TYPE ADDR: 0B65: NAME(260) */
/* BASE TYPE ADDR: 00E6: NAME(26) */
typedef DWORD CALTYPE;

/* NAME TYPE ADDR: 0B70: NAME(261) */
/* BASE TYPE ADDR: 00E6: NAME(26) */
typedef DWORD CALID;

/* NAME TYPE ADDR: 0B79: NAME(262) */
/* BASE TYPE ADDR: 05CB: NAME(156) */
typedef FARPROC LOCALE_ENUMPROCA;

/* NAME TYPE ADDR: 0B8E: NAME(263) */
/* BASE TYPE ADDR: 05CB: NAME(156) */
typedef FARPROC CODEPAGE_ENUMPROCA;

/* NAME TYPE ADDR: 0BA5: NAME(264) */
/* BASE TYPE ADDR: 05CB: NAME(156) */
typedef FARPROC DATEFMT_ENUMPROCA;

/* NAME TYPE ADDR: 0BBB: NAME(265) */
/* BASE TYPE ADDR: 05CB: NAME(156) */
typedef FARPROC TIMEFMT_ENUMPROCA;

/* NAME TYPE ADDR: 0BD1: NAME(266) */
/* BASE TYPE ADDR: 05CB: NAME(156) */
typedef FARPROC CALINFO_ENUMPROCA;

/* NAME TYPE ADDR: 0BE7: NAME(267) */
/* BASE TYPE ADDR: 05CB: NAME(156) */
typedef FARPROC LOCALE_ENUMPROCW;

/* NAME TYPE ADDR: 0BFC: NAME(268) */
/* BASE TYPE ADDR: 05CB: NAME(156) */
typedef FARPROC CODEPAGE_ENUMPROCW;

/* NAME TYPE ADDR: 0C13: NAME(269) */
/* BASE TYPE ADDR: 05CB: NAME(156) */
typedef FARPROC DATEFMT_ENUMPROCW;

/* NAME TYPE ADDR: 0C29: NAME(270) */
/* BASE TYPE ADDR: 05CB: NAME(156) */
typedef FARPROC TIMEFMT_ENUMPROCW;

/* NAME TYPE ADDR: 0C3F: NAME(271) */
/* BASE TYPE ADDR: 05CB: NAME(156) */
typedef FARPROC CALINFO_ENUMPROCW;

/* NAME TYPE ADDR: 0C5E: NAME(274) */
/* BASE TYPE ADDR: 0C5A: NEAR386 PTR(273) */
/* 0C55: NEAR386 PROC(272) */
typedef BOOL (*PHANDLER_ROUTINE)(DWORD arg0);

/* NAME TYPE ADDR: 0C73: NAME(275) */
/* BASE TYPE ADDR: 0048: SCALAR(8) */
typedef unsigned short WORD;

/* NAME TYPE ADDR: 0C7B: NAME(276) */
/* BASE TYPE ADDR: 0439: NAME(129) */
typedef ACCESS_MASK REGSAM;

/* NAME TYPE ADDR: 0C86: NAME(277) */
/* BASE TYPE ADDR: 035A: NAME(107) */
typedef HANDLE HKEY;

/* NAME TYPE ADDR: 0C92: NAME(279) */
/* BASE TYPE ADDR: 0C8E: NEAR386 PTR(278) */
typedef HKEY* PHKEY;

/* NAME TYPE ADDR: 0CA7: NAME(282) */
/* BASE TYPE ADDR: 0CA3: NEAR386 PTR(281) */
/* 0C9C: NEAR386 PROC(280) */
typedef UINT (*PFNGETPROFILEPATHA)(LPCSTR arg0, LPSTR arg1, UINT arg2);

/* NAME TYPE ADDR: 0CC9: NAME(285) */
/* BASE TYPE ADDR: 0CC5: NEAR386 PTR(284) */
/* 0CBE: NEAR386 PROC(283) */
typedef UINT (*PFNGETPROFILEPATHW)(LPCWSTR arg0, LPWSTR arg1, UINT arg2);

/* NAME TYPE ADDR: 0CEB: NAME(288) */
/* BASE TYPE ADDR: 0CE7: NEAR386 PTR(287) */
/* 0CE0: NEAR386 PROC(286) */
typedef UINT (*PFNRECONCILEPROFILEA)(LPCSTR arg0, LPCSTR arg1, DWORD arg2);

/* NAME TYPE ADDR: 0D0F: NAME(291) */
/* BASE TYPE ADDR: 0D0B: NEAR386 PTR(290) */
/* 0D04: NEAR386 PROC(289) */
typedef UINT (*PFNRECONCILEPROFILEW)(LPCWSTR arg0, LPCWSTR arg1, DWORD arg2);

/* NAME TYPE ADDR: 0D36: NAME(294) */
/* BASE TYPE ADDR: 0D32: NEAR386 PTR(293) */
/* 0D28: NEAR386 PROC(292) */
typedef BOOL (*PFNPROCESSPOLICIESA)(HWND arg0, LPCSTR arg1, LPCSTR arg2);

/* NAME TYPE ADDR: 0D5C: NAME(297) */
/* BASE TYPE ADDR: 0D58: NEAR386 PTR(296) */
/* 0D4E: NEAR386 PROC(295) */
typedef BOOL (*PFNPROCESSPOLICIESW)(HWND arg0, LPCWSTR arg1, LPCWSTR arg2);

/* NAME TYPE ADDR: 0D74: NAME(298) */
/* BASE TYPE ADDR: 035A: NAME(107) */
typedef HANDLE SC_HANDLE;

/* NAME TYPE ADDR: 0D85: NAME(300) */
/* BASE TYPE ADDR: 0D81: NEAR386 PTR(299) */
typedef SC_HANDLE* LPSC_HANDLE;

/* NAME TYPE ADDR: 0D95: NAME(301) */
/* BASE TYPE ADDR: 00E6: NAME(26) */
typedef DWORD SERVICE_STATUS_HANDLE;

/* NAME TYPE ADDR: 0DAE: NAME(302) */
/* BASE TYPE ADDR: 01B1: NAME(54) */
typedef LPVOID SC_LOCK;

/* NAME TYPE ADDR: 0DC7: NAME(306) */
/* BASE TYPE ADDR: 0DC3: NEAR386 PTR(305) */
/* 0DBC: NEAR386 PROC(304) */
typedef void (*LPSERVICE_MAIN_FUNCTIONW)(DWORD arg0, LPWSTR* arg1, char arg2);

/* NAME TYPE ADDR: 0DF2: NAME(310) */
/* BASE TYPE ADDR: 0DEE: NEAR386 PTR(309) */
/* 0DE7: NEAR386 PROC(308) */
typedef void (*LPSERVICE_MAIN_FUNCTIONA)(DWORD arg0, LPSTR* arg1, char arg2);

/* NAME TYPE ADDR: 0E18: NAME(313) */
/* BASE TYPE ADDR: 0E14: NEAR386 PTR(312) */
/* 0E0F: NEAR386 PROC(311) */
typedef void (*LPHANDLER_FUNCTION)(DWORD arg0);

/* NAME TYPE ADDR: 0E2F: NAME(314) */
/* BASE TYPE ADDR: 00E6: NAME(26) */
typedef DWORD HIMC;

/* NAME TYPE ADDR: 0E37: NAME(315) */
/* BASE TYPE ADDR: 00E6: NAME(26) */
typedef DWORD HIMCC;

/* NAME TYPE ADDR: 0E44: NAME(317) */
/* BASE TYPE ADDR: 0E40: NEAR386 PTR(316) */
typedef HKL* LPHKL;

/* NAME TYPE ADDR: 0E51: NAME(319) */
/* BASE TYPE ADDR: 0E4E: NEAR386 PTR(318) */
typedef UINT* LPUINT;

/* NAME TYPE ADDR: 0E68: NAME(322) */
/* BASE TYPE ADDR: 0E64: NEAR386 PTR(321) */
/* 0E5C: NEAR386 PROC(320) */
typedef int (*REGISTERWORDENUMPROCA)(LPCSTR arg0, DWORD arg1, LPCSTR arg2, LPVOID arg3);

/* NAME TYPE ADDR: 0E8E: NAME(325) */
/* BASE TYPE ADDR: 0E8A: NEAR386 PTR(324) */
/* 0E82: NEAR386 PROC(323) */
typedef int (*REGISTERWORDENUMPROCW)(LPCWSTR arg0, DWORD arg1, LPCWSTR arg2, LPVOID arg3);

/* NAME TYPE ADDR: 0EAC: NAME(327) */
/* BASE TYPE ADDR: 0EA8: BYTE_INDEX ARRAY(326) */
typedef char* __va_list[1];

/* NAME TYPE ADDR: 0EBA: NAME(328) */
/* BASE TYPE ADDR: 017B: SCALAR(46) */
typedef long fpos_t;

/* NAME TYPE ADDR: 0EC4: NAME(329) */
/* BASE TYPE ADDR: 017B: SCALAR(46) */
typedef long fpos_t;

/* NAME TYPE ADDR: 0ECE: NAME(330) */
/* BASE TYPE ADDR: 0079: NEAR386 PTR(12) */
typedef char* MEMBLOCK;

/* NAME TYPE ADDR: 0EE3: NAME(333) */
/* BASE TYPE ADDR: 0EDF: NEAR386 PTR(332) */
/* 0EDA: NEAR386 PROC(331) */
typedef void (*VOIDFN)(void);

/* NAME TYPE ADDR: 0EF3: NAME(335) */
/* BASE TYPE ADDR: 0EEE: NEAR386 PROC(334) */
typedef int (INTFN)(void);

/* NAME TYPE ADDR: 0EFD: NAME(336) */
/* BASE TYPE ADDR: 01A7: SCALAR(52) */
typedef void MVI;

/* NAME TYPE ADDR: 0F0A: NAME(338) */
/* BASE TYPE ADDR: 0F04: NEAR386 PROC(337) */
typedef int (EACHOOKCALLBACKFUNC)(int arg0, int arg1);

/* NAME TYPE ADDR: 0F22: NAME(339) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int arg_t;

/* NAME TYPE ADDR: 0F30: NAME(341) */
/* BASE TYPE ADDR: 0F2B: NEAR386 PROC(340) */
typedef void (THREADPROC)(void);

/* NAME TYPE ADDR: 0F3F: NAME(342) */
/* BASE TYPE ADDR: 0F04: NEAR386 PROC(337) */
typedef int (SYSTEMTASK)(int arg0, int arg1);

/* NAME TYPE ADDR: 0F4E: NAME(343) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int boolean;

/* NAME TYPE ADDR: 0F59: NAME(344) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int fixed88;

/* NAME TYPE ADDR: 0F64: NAME(345) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int fixed824;

/* NAME TYPE ADDR: 0F70: NAME(346) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int fixed248;

/* NAME TYPE ADDR: 0F7C: NAME(347) */
/* BASE TYPE ADDR: 0040: SCALAR(7) */
typedef short Draw_tContext;

/* NAME TYPE ADDR: 0F8D: NAME(348) */
/* BASE TYPE ADDR: 017B: SCALAR(46) */
typedef long SDWORD;

/* NAME TYPE ADDR: 0F97: NAME(349) */
/* BASE TYPE ADDR: 0040: SCALAR(7) */
typedef short SWORD;

/* NAME TYPE ADDR: 0FA0: NAME(350) */
/* BASE TYPE ADDR: 0022: SCALAR(5) */
typedef signed char SBYTE;

/* NAME TYPE ADDR: 0FA9: NAME(351) */
/* BASE TYPE ADDR: 0030: SCALAR(6) */
typedef unsigned char UBYTE;

/* NAME TYPE ADDR: 0FB2: NAME(352) */
/* BASE TYPE ADDR: 01A7: SCALAR(52) */
typedef void Stm_Chunk;

/* NAME TYPE ADDR: 0FC3: NAME(354) */
/* BASE TYPE ADDR: 0FBF: NEAR386 PTR(353) */
typedef Stm_Chunk* lpStm_Chunk;

/* NAME TYPE ADDR: 0FDC: NAME(357) */
/* BASE TYPE ADDR: 0FD8: NEAR386 PTR(356) */
/* 0FD3: NEAR386 PROC(355) */
typedef void (*Sched_tFunctionPt)(void* arg0);

/* NAME TYPE ADDR: 0FFC: NAME(360) */
/* BASE TYPE ADDR: 0FF8: NEAR386 PTR(359) */
/* 0FF2: NEAR386 PROC(358) */
typedef void (*Transformer_AnimCallbackFunc)(void* arg0, void* arg1);

/* NAME TYPE ADDR: 1021: NAME(362) */
/* BASE TYPE ADDR: 101D: BYTE_INDEX ARRAY(361) */
typedef short tAccTable[112];

/* NAME TYPE ADDR: 105B: NAME(364) */
/* BASE TYPE ADDR: 102F: FIELD_LIST(363) */
#pragma pack(push, 1)
/* number of fields = 3, size = 0x0008 [8 bytes] */
struct Stm_ObjectDef
{
    /* offset = 0x0000 [0] */
    DWORD size;
    /* offset = 0x0004 [4] */
    WORD vertexCount;
    /* offset = 0x0006 [6] */
    WORD quadCount;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 106D: NAME(365) */
/* BASE TYPE ADDR: 105B: NAME(364) */
typedef struct Stm_ObjectDef Stm_ObjectDef;

/* NAME TYPE ADDR: 109F: NAME(369) */
/* BASE TYPE ADDR: 1088: FIELD_LIST(368) */
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

/* NAME TYPE ADDR: 10AB: NAME(370) */
/* BASE TYPE ADDR: 109F: NAME(369) */
typedef struct COORD16 COORD16;

/* NAME TYPE ADDR: 10E2: NAME(373) */
/* BASE TYPE ADDR: 10BD: FIELD_LIST(372) */
#pragma pack(push, 1)
/* number of fields = 5, size = 0x0010 [16 bytes] */
struct PCOORD16
{
    /* offset = 0x0000 [0] */
    int x;
    /* offset = 0x0004 [4] */
    int y;
    /* offset = 0x0008 [8] */
    int z;
    /* offset = 0x000c [12] */
    short p;
    /* offset = 0x000e [14] */
    short zclip;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 1101: NAME(375) */
/* BASE TYPE ADDR: 10EF: FIELD_LIST(374) */
#pragma pack(push, 1)
/* number of fields = 2, size = 0x0008 [8 bytes] */
struct scoorddef
{
    /* offset = 0x0000 [0] */
    int x;
    /* offset = 0x0004 [4] */
    int y;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 110F: NAME(376) */
/* BASE TYPE ADDR: 1101: NAME(375) */
typedef struct scoorddef SCOORD;

/* NAME TYPE ADDR: 1140: NAME(378) */
/* BASE TYPE ADDR: 111A: FIELD_LIST(377) */
#pragma pack(push, 1)
/* number of fields = 4, size = 0x0020 [32 bytes] */
struct Draw_tVertex
{
    /* offset = 0x0000 [0] */
    PCOORD16 sv;
    /* offset = 0x0010 [16] */
    SCOORD pv;
    /* offset = 0x0018 [24] */
    int pad1;
    /* offset = 0x001c [28] */
    int pad2;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 1151: NAME(379) */
/* BASE TYPE ADDR: 1140: NAME(378) */
typedef struct Draw_tVertex Draw_tVertex;

/* NAME TYPE ADDR: 11AF: NAME(382) */
/* BASE TYPE ADDR: 1166: FIELD_LIST(381) */
#pragma pack(push, 1)
/* number of fields = 7, size = 0x001c [28 bytes] */
struct Line_PFacet
{
    /* offset = 0x0000 [0] */
    int linetype;
    /* offset = 0x0004 [4] */
    int light;
    /* offset = 0x0008 [8] */
    int compositePos;
    /* offset = 0x000c [12] */
    Draw_tVertex* v0;
    /* offset = 0x0010 [16] */
    Draw_tVertex* v1;
    /* offset = 0x0014 [20] */
    Draw_tVertex* v2;
    /* offset = 0x0018 [24] */
    Draw_tVertex* v3;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 11BF: NAME(383) */
/* BASE TYPE ADDR: 11AF: NAME(382) */
typedef struct Line_PFacet Line_PFacet;

/* NAME TYPE ADDR: 121B: NAME(388) */
/* BASE TYPE ADDR: 11DD: FIELD_LIST(387) */
#pragma pack(push, 1)
/* number of fields = 4, size = 0x0010 [16 bytes] */
struct tRezContext
{
    /* offset = 0x0000 [0] */
    int ptRez;
    /* offset = 0x0004 [4] */
    int geomRez;
    /* offset = 0x0008 [8] */
    int transPrecision;
    /* offset = 0x000c [12] */
    * quadLoopPtr;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 1291: NAME(391) */
/* BASE TYPE ADDR: 1230: FIELD_LIST(390) */
#pragma pack(push, 1)
/* number of fields = 9, size = 0x0011 [17 bytes] */
struct shapetbl
{
    /* offset = 0x0000 [0] */
    unsigned int type : 8;
    /* offset = 0x0000 [0] */
    int next : 24;
    /* offset = 0x0004 [4] */
    short width;
    /* offset = 0x0006 [6] */
    short height;
    /* offset = 0x0008 [8] */
    short centerx;
    /* offset = 0x000a [10] */
    short centery;
    /* offset = 0x000c [12] */
    short shapex;
    /* offset = 0x000e [14] */
    short shapey;
    /* offset = 0x0010 [16] */
    char data;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 129E: NAME(392) */
/* BASE TYPE ADDR: 1291: NAME(391) */
typedef struct shapetbl SHAPE;

/* NAME TYPE ADDR: 12E2: NAME(395) */
/* BASE TYPE ADDR: 12AC: FIELD_LIST(394) */
#pragma pack(push, 1)
/* number of fields = 6, size = 0x000c [12 bytes] */
struct Draw_tPixMap
{
    /* offset = 0x0000 [0] */
    SHAPE* shp;
    /* offset = 0x0004 [4] */
    char uv0;
    /* offset = 0x0005 [5] */
    char uv1;
    /* offset = 0x0006 [6] */
    char uv2;
    /* offset = 0x0007 [7] */
    char uv3;
    /* offset = 0x0008 [8] */
    char* coltbl;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 12F3: NAME(396) */
/* BASE TYPE ADDR: 12E2: NAME(395) */
typedef struct Draw_tPixMap Draw_tPixMap;

/* NAME TYPE ADDR: 1375: NAME(399) */
/* BASE TYPE ADDR: 1308: FIELD_LIST(398) */
#pragma pack(push, 1)
/* number of fields = 9, size = 0x0024 [36 bytes] */
struct BW_tArtResource
{
    /* offset = 0x0000 [0] */
    int id;
    /* offset = 0x0004 [4] */
    int momentNum;
    /* offset = 0x0008 [8] */
    char* shapeFile;
    /* offset = 0x000c [12] */
    int shapeCount;
    /* offset = 0x0010 [16] */
    Draw_tPixMap* pPmx;
    /* offset = 0x0014 [20] */
    int pmxCount;
    /* offset = 0x0018 [24] */
    int basePmxCount;
    /* offset = 0x001c [28] */
    int VRAMX;
    /* offset = 0x0020 [32] */
    int VRAMY;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 13A5: NAME(402) */
/* BASE TYPE ADDR: 138E: FIELD_LIST(401) */
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

/* NAME TYPE ADDR: 13B2: NAME(403) */
/* BASE TYPE ADDR: 13A5: NAME(402) */
typedef struct coorddef LIBCOORD;

/* NAME TYPE ADDR: 13ED: NAME(406) */
/* BASE TYPE ADDR: 13C4: FIELD_LIST(405) */
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

/* NAME TYPE ADDR: 13FA: NAME(407) */
/* BASE TYPE ADDR: 13ED: NAME(406) */
typedef struct Stm_Quad Stm_Quad;

/* NAME TYPE ADDR: 1431: NAME(410) */
/* BASE TYPE ADDR: 140B: FIELD_LIST(409) */
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

/* NAME TYPE ADDR: 1441: NAME(411) */
/* BASE TYPE ADDR: 1431: NAME(410) */
typedef struct Stm_SimQuad Stm_SimQuad;

/* NAME TYPE ADDR: 147E: NAME(416) */
/* BASE TYPE ADDR: 145F: FIELD_LIST(415) */
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

/* NAME TYPE ADDR: 148F: NAME(417) */
/* BASE TYPE ADDR: 147E: NAME(416) */
typedef struct Stm_Rotation Stm_Rotation;

/* NAME TYPE ADDR: 14FB: NAME(420) */
/* BASE TYPE ADDR: 14A4: FIELD_LIST(419) */
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

/* NAME TYPE ADDR: 150C: NAME(421) */
/* BASE TYPE ADDR: 14FB: NAME(420) */
typedef struct Stm_SimSlice Stm_SimSlice;

/* NAME TYPE ADDR: 15E2: NAME(426) */
/* BASE TYPE ADDR: 152B: FIELD_LIST(425) */
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

/* NAME TYPE ADDR: 1659: NAME(429) */
/* BASE TYPE ADDR: 15F7: FIELD_LIST(428) */
#pragma pack(push, 1)
/* number of fields = 9, size = 0x000a [10 bytes] */
struct Stm_Material
{
    /* offset = 0x0000 [0] */
    WORD shapeIndex;
    /* offset = 0x0002 [2] */
    UBYTE flag;
    /* offset = 0x0003 [3] */
    UBYTE uvFlag;
    /* offset = 0x0004 [4] */
    UBYTE r;
    /* offset = 0x0005 [5] */
    UBYTE g;
    /* offset = 0x0006 [6] */
    UBYTE b;
    /* offset = 0x0007 [7] */
    SBYTE textureCount;
    /* offset = 0x0008 [8] */
    UBYTE interval;
    /* offset = 0x0009 [9] */
    SBYTE pad;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 166A: NAME(430) */
/* BASE TYPE ADDR: 1659: NAME(429) */
typedef struct Stm_Material Stm_Material;

/* NAME TYPE ADDR: 1697: NAME(433) */
/* BASE TYPE ADDR: 167F: FIELD_LIST(432) */
#pragma pack(push, 1)
/* number of fields = 2, size = 0x0008 [8 bytes] */
struct BW_tMaterial
{
    /* offset = 0x0000 [0] */
    Stm_Material* mat;
    /* offset = 0x0004 [4] */
    Draw_tPixMap* pmx;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 17CA: NAME(436) */
/* BASE TYPE ADDR: 16AC: FIELD_LIST(435) */
#pragma pack(push, 1)
/* number of fields = 17, size = 0x00c0 [192 bytes] */
struct BW_tContext
{
    /* offset = 0x0000 [0] */
    int client;
    /* offset = 0x0004 [4] */
    BWorldSm_Pos slicePos;
    /* offset = 0x0084 [132] */
    int forceUpdate;
    /* offset = 0x0088 [136] */
    int currentChunk;
    /* offset = 0x008c [140] */
    int currentChunkSlot;
    /* offset = 0x0090 [144] */
    int currentChunkCountLimit;
    /* offset = 0x0094 [148] */
    int previousChunkCountLimit;
    /* offset = 0x0098 [152] */
    BW_tArtResource* artRes;
    /* offset = 0x009c [156] */
    BW_tMaterial* matList;
    /* offset = 0x00a0 [160] */
    int nearZClip;
    /* offset = 0x00a4 [164] */
    int farZClip;
    /* offset = 0x00a8 [168] */
    int chunkFarZClip;
    /* offset = 0x00ac [172] */
    int midDetailDist;
    /* offset = 0x00b0 [176] */
    int lowDetailDist;
    /* offset = 0x00b4 [180] */
    int maxQuadCount;
    /* offset = 0x00b8 [184] */
    int maxChunkCount;
    /* offset = 0x00bc [188] */
    int materialListInd;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 180C: NAME(439) */
/* BASE TYPE ADDR: 17DF: FIELD_LIST(438) */
#pragma pack(push, 1)
/* number of fields = 3, size = 0x0008 [8 bytes] */
struct BW_tContextMgr
{
    /* offset = 0x0000 [0] */
    int initialized;
    /* offset = 0x0004 [4] */
    int count;
    /* offset = 0x0008 [8] */
    BW_tContext contexts[4];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 184F: NAME(441) */
/* BASE TYPE ADDR: 181F: FIELD_LIST(440) */
#pragma pack(push, 1)
/* number of fields = 3, size = 0x0003 [3 bytes] */
struct BW_tSimObjStatus
{
    /* offset = 0x0000 [0] */
    signed char status;
    /* offset = 0x0001 [1] */
    signed char impactAngle;
    /* offset = 0x0002 [2] */
    signed char objectAngle;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 189E: NAME(447) */
/* BASE TYPE ADDR: 1879: FIELD_LIST(446) */
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

/* NAME TYPE ADDR: 18B5: NAME(448) */
/* BASE TYPE ADDR: 189E: NAME(447) */
typedef struct Stm_ItemCollection Stm_ItemCollection;

/* NAME TYPE ADDR: 1918: NAME(457) */
/* BASE TYPE ADDR: 18EA: FIELD_LIST(456) */
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

/* NAME TYPE ADDR: 192E: NAME(458) */
/* BASE TYPE ADDR: 1918: NAME(457) */
typedef struct Stm_TrackGeometry Stm_TrackGeometry;

/* NAME TYPE ADDR: 1A59: NAME(463) */
/* BASE TYPE ADDR: 1951: FIELD_LIST(462) */
#pragma pack(push, 1)
/* number of fields = 16, size = 0x0118 [280 bytes] */
struct BW_tChunkDat
{
    /* offset = 0x0000 [0] */
    Stm_Chunk* buf;
    /* offset = 0x0004 [4] */
    Stm_TrackGeometry* geomBuf;
    /* offset = 0x0008 [8] */
    Stm_ItemCollection* objBuf;
    /* offset = 0x000c [12] */
    Stm_ItemCollection* objDefBuf;
    /* offset = 0x0010 [16] */
    Stm_ItemCollection* objInstanceBuf;
    /* offset = 0x0014 [20] */
    Stm_ItemCollection* objInfrontInstanceBuf;
    /* offset = 0x0018 [24] */
    Stm_ItemCollection* objBehindInstanceBuf;
    /* offset = 0x001c [28] */
    Stm_ItemCollection* simSliceBuf;
    /* offset = 0x0020 [32] */
    Stm_ItemCollection* simQuadRotBuf;
    /* offset = 0x0024 [36] */
    Stm_ItemCollection* simQuadBuf;
    /* offset = 0x0028 [40] */
    Stm_ItemCollection* simObjBuf;
    /* offset = 0x002c [44] */
    Stm_ItemCollection* audioPtBuf;
    /* offset = 0x0030 [48] */
    Stm_ItemCollection* sfxBuf;
    /* offset = 0x0034 [52] */
    Stm_Quad* renderQuads[6];
    /* offset = 0x004c [76] */
    short inViewList[100];
    /* offset = 0x0114 [276] */
    int firstSimSliceInd;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 1AC6: NAME(466) */
/* BASE TYPE ADDR: 1A6F: FIELD_LIST(465) */
#pragma pack(push, 1)
/* number of fields = 5, size = 0x01b0 [432 bytes] */
struct BW_tChunkList
{
    /* offset = 0x0000 [0] */
    short slotToChunk[100];
    /* offset = 0x00c8 [200] */
    short chunkToSlot[44];
    /* offset = 0x0120 [288] */
    char chunkStatus[44];
    /* offset = 0x014c [332] */
    char* chunkSlotsBuf;
    /* offset = 0x0150 [336] */
    BW_tChunkDat chunks[100];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 1B3E: NAME(485) */
/* BASE TYPE ADDR: 1B30: FIELD_LIST(484) */
#pragma pack(push, 1)
/* number of fields = 1, size = 0x0024 [36 bytes] */
struct matrixtdef
{
    /* offset = 0x0000 [0] */
    int m[9];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 1B4D: NAME(486) */
/* BASE TYPE ADDR: 1B3E: NAME(485) */
typedef struct matrixtdef MATRIX3DT;

/* NAME TYPE ADDR: 1BA5: NAME(488) */
/* BASE TYPE ADDR: 1B5B: FIELD_LIST(487) */
#pragma pack(push, 1)
/* number of fields = 4, size = 0x0060 [96 bytes] */
struct DRender_tCalcView
{
    /* offset = 0x0000 [0] */
    LIBCOORD translation;
    /* offset = 0x000c [12] */
    MATRIX3DT mrotation;
    /* offset = 0x0030 [48] */
    LIBCOORD translationInv;
    /* offset = 0x003c [60] */
    MATRIX3DT mrotationInv;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 1BBB: NAME(489) */
/* BASE TYPE ADDR: 1BA5: NAME(488) */
typedef struct DRender_tCalcView DRender_tCalcView;

/* NAME TYPE ADDR: 1C06: NAME(491) */
/* BASE TYPE ADDR: 1BD1: FIELD_LIST(490) */
#pragma pack(push, 1)
/* number of fields = 6, size = 0x0074 [116 bytes] */
struct DRender_tView
{
    /* offset = 0x0000 [0] */
    int id;
    /* offset = 0x0004 [4] */
    int player;
    /* offset = 0x0008 [8] */
    DRender_tCalcView cview;
    /* offset = 0x0068 [104] */
    int xo;
    /* offset = 0x006c [108] */
    int yo;
    /* offset = 0x0070 [112] */
    int xdo;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 1C18: NAME(492) */
/* BASE TYPE ADDR: 1C06: NAME(491) */
typedef struct DRender_tView DRender_tView;

/* NAME TYPE ADDR: 1C4C: NAME(496) */
/* BASE TYPE ADDR: 1C35: FIELD_LIST(495) */
#pragma pack(push, 1)
/* number of fields = 3, size = 0x0003 [3 bytes] */
struct COORD8
{
    /* offset = 0x0000 [0] */
    signed char x;
    /* offset = 0x0001 [1] */
    signed char y;
    /* offset = 0x0002 [2] */
    signed char z;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 1C57: NAME(497) */
/* BASE TYPE ADDR: 1C4C: NAME(496) */
typedef struct COORD8 COORD8;

/* NAME TYPE ADDR: 1CA2: NAME(501) */
/* BASE TYPE ADDR: 1C6A: FIELD_LIST(500) */
#pragma pack(push, 1)
/* number of fields = 4, size = 0x0004 [4 bytes] */
struct Stm_Line
{
    /* offset = 0x0000 [0] */
    UBYTE firstPoint;
    /* offset = 0x0001 [1] */
    UBYTE slice;
    /* offset = 0x0002 [2] */
    UBYTE type;
    /* offset = 0x0003 [3] */
    UBYTE quadIndex;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 1CAF: NAME(502) */
/* BASE TYPE ADDR: 1CA2: NAME(501) */
typedef struct Stm_Line Stm_Line;

/* NAME TYPE ADDR: 1CCF: NAME(505) */
/* BASE TYPE ADDR: 1CE6: FIELD_LIST(507) */
#pragma pack(push, 1)
/* number of fields = 2, size = 0x0008 [8 bytes] */
struct DRender_tFacet
{
    /* offset = 0x0000 [0] */
    struct DRender_tFacet* lfacet;
    /* offset = 0x0004 [4] */
    int type;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 1D01: NAME(508) */
/* BASE TYPE ADDR: 1CCF: NAME(505) */
typedef struct DRender_tFacet DRender_tFacet;

/* NAME TYPE ADDR: 1D2C: NAME(510) */
/* BASE TYPE ADDR: 1D14: FIELD_LIST(509) */
#pragma pack(push, 1)
/* number of fields = 2, size = 0x0006 [6 bytes] */
struct DRender_tTexture
{
    /* offset = 0x0000 [0] */
    Draw_tPixMap* pmx;
    /* offset = 0x0004 [4] */
    Draw_tContext ctx;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 1D41: NAME(511) */
/* BASE TYPE ADDR: 1D2C: NAME(510) */
typedef struct DRender_tTexture DRender_tTexture;

/* NAME TYPE ADDR: 1D9F: NAME(513) */
/* BASE TYPE ADDR: 1D56: FIELD_LIST(512) */
#pragma pack(push, 1)
/* number of fields = 8, size = 0x0022 [34 bytes] */
struct DRender_tFacet3D
{
    /* offset = 0x0000 [0] */
    DRender_tFacet head;
    /* offset = 0x0008 [8] */
    short tsub;
    /* offset = 0x000a [10] */
    short face;
    /* offset = 0x000c [12] */
    Draw_tVertex* v0;
    /* offset = 0x0010 [16] */
    Draw_tVertex* v1;
    /* offset = 0x0014 [20] */
    Draw_tVertex* v2;
    /* offset = 0x0018 [24] */
    Draw_tVertex* v3;
    /* offset = 0x001c [28] */
    DRender_tTexture texture;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 1DB4: NAME(514) */
/* BASE TYPE ADDR: 1D9F: NAME(513) */
typedef struct DRender_tFacet3D DRender_tFacet3D;

/* NAME TYPE ADDR: 1DF7: NAME(519) */
/* BASE TYPE ADDR: 1DDD: FIELD_LIST(518) */
#pragma pack(push, 1)
/* number of fields = 2, size = 0x0008 [8 bytes] */
struct DRender_tListfacet
{
    /* offset = 0x0000 [0] */
    DRender_tFacet* head;
    /* offset = 0x0004 [4] */
    DRender_tFacet* tail;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 1E0E: NAME(520) */
/* BASE TYPE ADDR: 1DF7: NAME(519) */
typedef struct DRender_tListfacet DRender_tListfacet;

/* NAME TYPE ADDR: 1E97: NAME(531) */
/* BASE TYPE ADDR: 1E59: FIELD_LIST(530) */
#pragma pack(push, 1)
/* number of fields = 5, size = 0x0008 [8 bytes] */
struct Stm_AnimateInst
{
    /* offset = 0x0000 [0] */
    WORD size;
    /* offset = 0x0002 [2] */
    UBYTE type;
    /* offset = 0x0003 [3] */
    UBYTE objectIndex;
    /* offset = 0x0004 [4] */
    WORD count;
    /* offset = 0x0006 [6] */
    WORD interval;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 1EAB: NAME(532) */
/* BASE TYPE ADDR: 1E97: NAME(531) */
typedef struct Stm_AnimateInst Stm_AnimateInst;

/* NAME TYPE ADDR: 1F1B: NAME(535) */
/* BASE TYPE ADDR: 1EC3: FIELD_LIST(534) */
#pragma pack(push, 1)
/* number of fields = 9, size = 0x0014 [20 bytes] */
struct Stm_CollideInst
{
    /* offset = 0x0000 [0] */
    WORD size;
    /* offset = 0x0002 [2] */
    UBYTE type;
    /* offset = 0x0003 [3] */
    UBYTE objectIndex;
    /* offset = 0x0004 [4] */
    SDWORD x;
    /* offset = 0x0008 [8] */
    SDWORD y;
    /* offset = 0x000c [12] */
    SDWORD z;
    /* offset = 0x0010 [16] */
    UBYTE simIndex;
    /* offset = 0x0011 [17] */
    UBYTE pad;
    /* offset = 0x0012 [18] */
    WORD pad2;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 1F2F: NAME(536) */
/* BASE TYPE ADDR: 1F1B: NAME(535) */
typedef struct Stm_CollideInst Stm_CollideInst;

/* NAME TYPE ADDR: 1F9F: NAME(540) */
/* BASE TYPE ADDR: 1F4C: FIELD_LIST(539) */
#pragma pack(push, 1)
/* number of fields = 7, size = 0x0014 [20 bytes] */
struct Stm_SimObject
{
    /* offset = 0x0000 [0] */
    SDWORD point[3];
    /* offset = 0x000c [12] */
    WORD radius;
    /* offset = 0x000e [14] */
    WORD serialNum;
    /* offset = 0x0010 [16] */
    UBYTE top;
    /* offset = 0x0011 [17] */
    UBYTE bottom;
    /* offset = 0x0012 [18] */
    UBYTE instIndex;
    /* offset = 0x0013 [19] */
    UBYTE type;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 1FB1: NAME(541) */
/* BASE TYPE ADDR: 1F9F: NAME(540) */
typedef struct Stm_SimObject Stm_SimObject;

/* NAME TYPE ADDR: 2006: NAME(545) */
/* BASE TYPE ADDR: 1FCB: FIELD_LIST(544) */
#pragma pack(push, 1)
/* number of fields = 6, size = 0x0010 [16 bytes] */
struct Stm_SimpleInst
{
    /* offset = 0x0000 [0] */
    WORD size;
    /* offset = 0x0002 [2] */
    UBYTE type;
    /* offset = 0x0003 [3] */
    UBYTE objectIndex;
    /* offset = 0x0004 [4] */
    SDWORD x;
    /* offset = 0x0008 [8] */
    SDWORD y;
    /* offset = 0x000c [12] */
    SDWORD z;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 2019: NAME(546) */
/* BASE TYPE ADDR: 2006: NAME(545) */
typedef struct Stm_SimpleInst Stm_SimpleInst;

/* NAME TYPE ADDR: 207E: NAME(554) */
/* BASE TYPE ADDR: 2058: FIELD_LIST(553) */
#pragma pack(push, 1)
/* number of fields = 3, size = 0x0010 [16 bytes] */
struct Stm_SoundPt
{
    /* offset = 0x0000 [0] */
    SDWORD point[3];
    /* offset = 0x000c [12] */
    WORD type;
    /* offset = 0x000e [14] */
    WORD property;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 208E: NAME(555) */
/* BASE TYPE ADDR: 207E: NAME(554) */
typedef struct Stm_SoundPt Stm_SoundPt;

/* NAME TYPE ADDR: 20E8: NAME(567) */
/* BASE TYPE ADDR: 21A1: FIELD_LIST(573) */
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

/* NAME TYPE ADDR: 2164: NAME(570) */
/* BASE TYPE ADDR: 20FE: FIELD_LIST(569) */
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

/* NAME TYPE ADDR: 2180: NAME(571) */
/* BASE TYPE ADDR: 2164: NAME(570) */
typedef struct BO_tNewtonCollisionInfo BO_tNewtonCollisionInfo;

/* NAME TYPE ADDR: 23F5: NAME(574) */
/* BASE TYPE ADDR: 20E8: NAME(567) */
typedef struct BO_tNewtonObj BO_tNewtonObj;

/* Procedure params definition 0 - 11D5: NEAR386 PROC(385) */
/* typedef int (unnamed_proc)(); */

/* Procedure params definition 1 - 1ADC: NEAR386 PROC(468) */
/* typedef Draw_tVertex* (unnamed_proc)(int arg0); */

/* Procedure params definition 2 - 1AE2: NEAR386 PROC(469) */
/* typedef int (unnamed_proc)(int arg0); */

/* Procedure params definition 3 - 1AE7: NEAR386 PROC(470) */
/* typedef void (unnamed_proc)(int arg0); */

/* Procedure params definition 4 - 1AEC: NEAR386 PROC(471) */
/* typedef char* (unnamed_proc)(char* arg0); */

/* Procedure params definition 5 - 1AFD: NEAR386 PROC(475) */
/* typedef int (unnamed_proc)(LIBCOORD* arg0, LIBCOORD* arg1); */

/* Procedure params definition 6 - 1B08: NEAR386 PROC(477) */
/* typedef int (unnamed_proc)(short arg0, short* arg1, int arg2, unsigned short arg3); */

/* Procedure params definition 7 - 1B10: NEAR386 PROC(478) */
/* typedef Stm_ItemCollection* (unnamed_proc)(Stm_Chunk* arg0); */

/* Procedure params definition 8 - 1B1C: NEAR386 PROC(480) */
/* typedef int (unnamed_proc)(void); */

/* Procedure params definition 9 - 1B21: NEAR386 PROC(481) */
/* typedef void (unnamed_proc)(Stm_Chunk* arg0); */

/* Procedure params definition 10 - 1B28: NEAR386 PROC(482) */
/* typedef void (unnamed_proc)(); */

/* Procedure params definition 11 - 1C2E: NEAR386 PROC(494) */
/* typedef void (unnamed_proc)(DRender_tView* arg0); */

/* Procedure params definition 12 - 1CC0: NEAR386 PROC(504) */
/* typedef void (unnamed_proc)(int arg0, LIBCOORD* arg1, LIBCOORD* arg2, COORD16* arg3, Draw_tVertex* arg4, DRender_tView* arg5, USHORT arg6, PULONG arg7,  arg8, DRender_tFacet arg9, PWCHAR arg10); */

/* Procedure params definition 13 - 1DCD: NEAR386 PROC(516) */
/* typedef int (unnamed_proc)(int arg0, Stm_Quad* arg1, DRender_tFacet3D* arg2, Draw_tVertex* arg3, int arg4, char arg5, PWCH arg6, DRender_tFacet arg7); */

/* Procedure params definition 14 - 1E29: NEAR386 PROC(522) */
/* typedef void (unnamed_proc)(DRender_tView* arg0, DRender_tListfacet* arg1); */

/* Procedure params definition 15 - 1E31: NEAR386 PROC(523) */
/* typedef void (unnamed_proc)(DRender_tView* arg0); */

/* Procedure params definition 16 - 1E45: NEAR386 PROC(527) */
/* typedef void (unnamed_proc)(DRender_tView* arg0, short* arg1, DRender_tListfacet* arg2); */

/* Procedure params definition 17 - 2034: NEAR386 PROC(549) */
/* typedef int (unnamed_proc)(DRender_tView* arg0, DRender_tFacet3D** arg1, DRender_tFacet3D** arg2, int arg3, Stm_ItemCollection* arg4, Stm_ItemCollection* arg5); */

/* Procedure params definition 18 - 2044: NEAR386 PROC(550) */
/* typedef void (unnamed_proc)(int arg0, int arg1); */

/* Procedure params definition 19 - 204A: NEAR386 PROC(551) */
/* typedef int (unnamed_proc)(DRender_tView* arg0, Stm_ItemCollection* arg1); */

/* Procedure params definition 20 - 20A2: NEAR386 PROC(557) */
/* typedef char* (unnamed_proc)(char* arg0, long arg1, int arg2); */

/* Procedure params definition 21 - 20A9: NEAR386 PROC(558) */
/* typedef void (unnamed_proc)(char* arg0); */

/* Procedure params definition 22 - 20AE: NEAR386 PROC(559) */
/* typedef void (unnamed_proc)(BW_tArtResource* arg0); */

/* Procedure params definition 23 - 20B5: NEAR386 PROC(560) */
/* typedef void (unnamed_proc)(char* arg0, Draw_tPixMap* arg1, int arg2, int arg3, int arg4, char arg5); */

/* Procedure params definition 24 - 20C7: NEAR386 PROC(563) */
/* typedef void (unnamed_proc)(Stm_ItemCollection* arg0, BW_tMaterial* arg1); */

/* Procedure params definition 25 - 20CF: NEAR386 PROC(564) */
/* typedef void (unnamed_proc)(BW_tMaterial* arg0, int arg1); */

/* Procedure params definition 26 - 20D8: NEAR386 PROC(565) */
/* typedef int (unnamed_proc)(int arg0, int arg1, BW_tArtResource* arg2, BW_tMaterial* arg3, unsigned char arg4, double arg5); */

/* Procedure params definition 27 - 20E2: NEAR386 PROC(566) */
/* typedef int (unnamed_proc)(int arg0, int arg1); */

/* Procedure params definition 28 - 240B: NEAR386 PROC(576) */
/* typedef int (unnamed_proc)(BO_tNewtonObj* arg0); */

/* Procedure params definition 29 - 2416: NEAR386 PROC(578) */
/* typedef int (unnamed_proc)(COORD16* arg0); */

/* Procedure params definition 30 - 2420: NEAR386 PROC(580) */
/* typedef void (unnamed_proc)(int arg0, int arg1, int arg2, MATRIX3DT* arg3, unsigned short arg4); */

/* Procedure params definition 31 - 2429: NEAR386 PROC(581) */
/* typedef void (unnamed_proc)(int arg0, int arg1, MATRIX3DT* arg2, char arg3); */

/* Procedure params definition 32 - 2435: NEAR386 PROC(583) */
/* typedef void (unnamed_proc)(DRender_tView* arg0, int arg1, LIBCOORD* arg2, COORD16* arg3); */

/* Procedure params definition 33 - 2442: NEAR386 PROC(584) */
/* typedef void (unnamed_proc)(DRender_tView* arg0, MATRIX3DT* arg1, int arg2, LIBCOORD* arg3, COORD16* arg4); */

/* Procedure params definition 34 - 2454: NEAR386 PROC(586) */
/* typedef void (unnamed_proc)(unsigned char* arg0, int arg1); */

/* Procedure params definition 35 - 245C: NEAR386 PROC(587) */
/* typedef void* (unnamed_proc)(long arg0); */

/* Procedure params definition 36 - 2461: NEAR386 PROC(588) */
/* typedef int (unnamed_proc)(void* arg0); */

/* Procedure params definition 37 - 2466: NEAR386 PROC(589) */
/* typedef char* (unnamed_proc)(char* arg0, int arg1); */
