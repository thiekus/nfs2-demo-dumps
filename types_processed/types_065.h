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
/* BASE TYPE ADDR: 017B: SCALAR(46) */
typedef long SDWORD;

/* NAME TYPE ADDR: 0F86: NAME(348) */
/* BASE TYPE ADDR: 0040: SCALAR(7) */
typedef short SWORD;

/* NAME TYPE ADDR: 0F8F: NAME(349) */
/* BASE TYPE ADDR: 0022: SCALAR(5) */
typedef signed char SBYTE;

/* NAME TYPE ADDR: 0F98: NAME(350) */
/* BASE TYPE ADDR: 0030: SCALAR(6) */
typedef unsigned char UBYTE;

/* NAME TYPE ADDR: 0FA1: NAME(351) */
/* BASE TYPE ADDR: 01A7: SCALAR(52) */
typedef void Stm_Chunk;

/* NAME TYPE ADDR: 0FB2: NAME(353) */
/* BASE TYPE ADDR: 0FAE: NEAR386 PTR(352) */
typedef Stm_Chunk* lpStm_Chunk;

/* NAME TYPE ADDR: 0FCB: NAME(356) */
/* BASE TYPE ADDR: 0FC7: NEAR386 PTR(355) */
/* 0FC2: NEAR386 PROC(354) */
typedef void (*Sched_tFunctionPt)(void* arg0);

/* NAME TYPE ADDR: 0FE1: NAME(357) */
/* BASE TYPE ADDR: 0040: SCALAR(7) */
typedef short Draw_tContext;

/* NAME TYPE ADDR: 0FFC: NAME(360) */
/* BASE TYPE ADDR: 0FF8: NEAR386 PTR(359) */
/* 0FF2: NEAR386 PROC(358) */
typedef void (*Transformer_AnimCallbackFunc)(void* arg0, void* arg1);

/* NAME TYPE ADDR: 1021: NAME(362) */
/* BASE TYPE ADDR: 101D: BYTE_INDEX ARRAY(361) */
typedef short tAccTable[112];

/* NAME TYPE ADDR: 102F: NAME(363) */
/* BASE TYPE ADDR: 0022: SCALAR(5) */
typedef signed char schar;

/* NAME TYPE ADDR: 1038: NAME(364) */
/* BASE TYPE ADDR: 0030: SCALAR(6) */
typedef unsigned char uchar;

/* NAME TYPE ADDR: 1041: NAME(365) */
/* BASE TYPE ADDR: 0059: SCALAR(9) */
typedef int sint;

/* NAME TYPE ADDR: 1049: NAME(366) */
/* BASE TYPE ADDR: 005F: SCALAR(10) */
typedef unsigned int uint;

/* NAME TYPE ADDR: 1051: NAME(367) */
/* BASE TYPE ADDR: 017B: SCALAR(46) */
typedef long slong;

/* NAME TYPE ADDR: 105A: NAME(368) */
/* BASE TYPE ADDR: 008B: SCALAR(15) */
typedef unsigned long ulong;

/* NAME TYPE ADDR: 1067: NAME(370) */
/* BASE TYPE ADDR: 1063: NEAR386 PTR(369) */
/* 0EEE: NEAR386 PROC(334) */
typedef int (*fpGetStickError)(void);

/* NAME TYPE ADDR: 1084: NAME(373) */
/* BASE TYPE ADDR: 1080: NEAR386 PTR(372) */
/* 107B: NEAR386 PROC(371) */
typedef void (*fpSetJoystickPort)(int arg0);

/* NAME TYPE ADDR: 10A4: NAME(376) */
/* BASE TYPE ADDR: 10A0: NEAR386 PTR(375) */
/* 109A: NEAR386 PROC(374) */
typedef void (*fpSetJoystickAddressIRQ)(unsigned int arg0, int arg1);

/* NAME TYPE ADDR: 10EA: NAME(379) */
/* BASE TYPE ADDR: 10C4: FIELD_LIST(378) */
#pragma pack(push, 1)
/* number of fields = 3, size = 0x000c [12 bytes] */
struct FFversion
{
    /* offset = 0x0000 [0] */
    int major;
    /* offset = 0x0004 [4] */
    int minor;
    /* offset = 0x0008 [8] */
    int subminor;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 1118: NAME(381) */
/* BASE TYPE ADDR: 10F8: FIELD_LIST(380) */
#pragma pack(push, 1)
/* number of fields = 3, size = 0x000c [12 bytes] */
struct FFdate
{
    /* offset = 0x0000 [0] */
    int month;
    /* offset = 0x0004 [4] */
    int day;
    /* offset = 0x0008 [8] */
    int year;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 119D: NAME(383) */
/* BASE TYPE ADDR: 1123: FIELD_LIST(382) */
#pragma pack(push, 1)
/* number of fields = 8, size = 0x003c [60 bytes] */
struct JoystickRecord
{
    /* offset = 0x0000 [0] */
    int ForceAxes;
    /* offset = 0x0004 [4] */
    int CommandAvailable;
    /* offset = 0x0008 [8] */
    int PositionAxes;
    /* offset = 0x000c [12] */
    int Position[4];
    /* offset = 0x001c [28] */
    FFversion Version;
    /* offset = 0x0028 [40] */
    FFdate Date;
    /* offset = 0x0034 [52] */
    unsigned long SerialNumber;
    /* offset = 0x0038 [56] */
    unsigned int ModelNumber;
};
#pragma pack(pop)

/* NAME TYPE ADDR: 11B0: NAME(384) */
/* BASE TYPE ADDR: 119D: NAME(383) */
typedef struct JoystickRecord JoystickRecord;

/* NAME TYPE ADDR: 11DA: NAME(386) */
/* BASE TYPE ADDR: 11C3: FIELD_LIST(385) */
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

/* NAME TYPE ADDR: 11E7: NAME(387) */
/* BASE TYPE ADDR: 11DA: NAME(386) */
typedef struct coorddef LIBCOORD;

/* NAME TYPE ADDR: 1222: NAME(390) */
/* BASE TYPE ADDR: 11F9: FIELD_LIST(389) */
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

/* NAME TYPE ADDR: 122F: NAME(391) */
/* BASE TYPE ADDR: 1222: NAME(390) */
typedef struct Stm_Quad Stm_Quad;

/* NAME TYPE ADDR: 1266: NAME(394) */
/* BASE TYPE ADDR: 1240: FIELD_LIST(393) */
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

/* NAME TYPE ADDR: 1276: NAME(395) */
/* BASE TYPE ADDR: 1266: NAME(394) */
typedef struct Stm_SimQuad Stm_SimQuad;

/* NAME TYPE ADDR: 12B3: NAME(400) */
/* BASE TYPE ADDR: 1294: FIELD_LIST(399) */
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

/* NAME TYPE ADDR: 12C4: NAME(401) */
/* BASE TYPE ADDR: 12B3: NAME(400) */
typedef struct Stm_Rotation Stm_Rotation;

/* NAME TYPE ADDR: 1330: NAME(404) */
/* BASE TYPE ADDR: 12D9: FIELD_LIST(403) */
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

/* NAME TYPE ADDR: 1341: NAME(405) */
/* BASE TYPE ADDR: 1330: NAME(404) */
typedef struct Stm_SimSlice Stm_SimSlice;

/* NAME TYPE ADDR: 1372: NAME(409) */
/* BASE TYPE ADDR: 135B: FIELD_LIST(408) */
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

/* NAME TYPE ADDR: 137E: NAME(410) */
/* BASE TYPE ADDR: 1372: NAME(409) */
typedef struct COORD16 COORD16;

/* NAME TYPE ADDR: 1446: NAME(413) */
/* BASE TYPE ADDR: 138F: FIELD_LIST(412) */
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

/* NAME TYPE ADDR: 1469: NAME(416) */
/* BASE TYPE ADDR: 145B: FIELD_LIST(415) */
#pragma pack(push, 1)
/* number of fields = 1, size = 0x0024 [36 bytes] */
struct matrixtdef
{
    /* offset = 0x0000 [0] */
    int m[9];
};
#pragma pack(pop)

/* NAME TYPE ADDR: 1478: NAME(417) */
/* BASE TYPE ADDR: 1469: NAME(416) */
typedef struct matrixtdef MATRIX3DT;

/* NAME TYPE ADDR: 1486: NAME(418) */
/* BASE TYPE ADDR: 153F: FIELD_LIST(424) */
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

/* NAME TYPE ADDR: 1502: NAME(421) */
/* BASE TYPE ADDR: 149C: FIELD_LIST(420) */
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

/* NAME TYPE ADDR: 151E: NAME(422) */
/* BASE TYPE ADDR: 1502: NAME(421) */
typedef struct BO_tNewtonCollisionInfo BO_tNewtonCollisionInfo;

/* NAME TYPE ADDR: 1793: NAME(425) */
/* BASE TYPE ADDR: 1486: NAME(418) */
typedef struct BO_tNewtonObj BO_tNewtonObj;

/* NAME TYPE ADDR: 187D: NAME(429) */
/* BASE TYPE ADDR: 17AD: FIELD_LIST(428) */
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

/* NAME TYPE ADDR: 1894: NAME(430) */
/* BASE TYPE ADDR: 187D: NAME(429) */
typedef struct GameSetup_tCarData GameSetup_tCarData;

/* NAME TYPE ADDR: 1942: NAME(435) */
/* BASE TYPE ADDR: 18B7: FIELD_LIST(434) */
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

/* NAME TYPE ADDR: 1951: NAME(436) */
/* BASE TYPE ADDR: 1942: NAME(435) */
typedef struct Car_tStats Car_tStats;

/* NAME TYPE ADDR: 1A21: NAME(438) */
/* BASE TYPE ADDR: 1960: FIELD_LIST(437) */
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

/* NAME TYPE ADDR: 1A32: NAME(439) */
/* BASE TYPE ADDR: 1A21: NAME(438) */
typedef struct Car_tControl Car_tControl;

/* NAME TYPE ADDR: 1D29: NAME(451) */
/* BASE TYPE ADDR: 1A6B: FIELD_LIST(450) */
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

/* NAME TYPE ADDR: 1D38: NAME(452) */
/* BASE TYPE ADDR: 1D29: NAME(451) */
typedef struct Car_tSpecs Car_tSpecs;

/* NAME TYPE ADDR: 1D50: NAME(455) */
/* BASE TYPE ADDR: 244A: FIELD_LIST(504) */
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

/* NAME TYPE ADDR: 1D69: NAME(459) */
/* BASE TYPE ADDR: 20F7: FIELD_LIST(487) */
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

/* NAME TYPE ADDR: 1E0C: NAME(463) */
/* BASE TYPE ADDR: 1D8C: FIELD_LIST(462) */
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

/* NAME TYPE ADDR: 1E2B: NAME(464) */
/* BASE TYPE ADDR: 1E0C: NAME(463) */
typedef struct Transformer_tTransformNode Transformer_tTransformNode;

/* NAME TYPE ADDR: 1E4A: NAME(465) */
/* BASE TYPE ADDR: 137E: NAME(410) */
typedef COORD16 Transformer_tVertex;

/* NAME TYPE ADDR: 1EB9: NAME(470) */
/* BASE TYPE ADDR: 1E6E: FIELD_LIST(469) */
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

/* NAME TYPE ADDR: 1ED0: NAME(471) */
/* BASE TYPE ADDR: 1EB9: NAME(470) */
typedef struct Transformer_tFacet Transformer_tFacet;

/* NAME TYPE ADDR: 1F72: NAME(474) */
/* BASE TYPE ADDR: 1EEB: FIELD_LIST(473) */
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

/* NAME TYPE ADDR: 1F93: NAME(475) */
/* BASE TYPE ADDR: 1F72: NAME(474) */
typedef struct Transformer_tDrawControlInfo Transformer_tDrawControlInfo;

/* NAME TYPE ADDR: 200A: NAME(477) */
/* BASE TYPE ADDR: 1FB4: FIELD_LIST(476) */
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

/* NAME TYPE ADDR: 201F: NAME(478) */
/* BASE TYPE ADDR: 200A: NAME(477) */
typedef struct Transformer_tObj Transformer_tObj;

/* NAME TYPE ADDR: 205A: NAME(482) */
/* BASE TYPE ADDR: 203D: FIELD_LIST(481) */
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

/* NAME TYPE ADDR: 2078: NAME(483) */
/* BASE TYPE ADDR: 205A: NAME(482) */
typedef struct Transformer_tGeometryNode Transformer_tGeometryNode;

/* NAME TYPE ADDR: 20C3: NAME(485) */
/* BASE TYPE ADDR: 2096: FIELD_LIST(484) */
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

/* NAME TYPE ADDR: 20DD: NAME(486) */
/* BASE TYPE ADDR: 20C3: NAME(485) */
typedef struct Transformer_tAnimInfo Transformer_tAnimInfo;

/* NAME TYPE ADDR: 214A: NAME(488) */
/* BASE TYPE ADDR: 1D69: NAME(459) */
typedef struct Transformer_tNodeInfo Transformer_tNodeInfo;

/* NAME TYPE ADDR: 21E4: NAME(492) */
/* BASE TYPE ADDR: 216D: FIELD_LIST(491) */
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

/* NAME TYPE ADDR: 21FC: NAME(493) */
/* BASE TYPE ADDR: 21E4: NAME(492) */
typedef struct Cars_tCollisionInfo Cars_tCollisionInfo;

/* NAME TYPE ADDR: 225C: NAME(495) */
/* BASE TYPE ADDR: 2214: FIELD_LIST(494) */
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

/* NAME TYPE ADDR: 226C: NAME(496) */
/* BASE TYPE ADDR: 225C: NAME(495) */
typedef struct Cars_tAudio Cars_tAudio;

/* NAME TYPE ADDR: 2420: NAME(502) */
/* BASE TYPE ADDR: 228F: FIELD_LIST(501) */
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

/* NAME TYPE ADDR: 2435: NAME(503) */
/* BASE TYPE ADDR: 2420: NAME(502) */
typedef struct Cars_tRenderInfo Cars_tRenderInfo;

/* NAME TYPE ADDR: 2AED: NAME(505) */
/* BASE TYPE ADDR: 1D50: NAME(455) */
typedef struct Car_tObj Car_tObj;

/* NAME TYPE ADDR: 2B12: NAME(508) */
/* BASE TYPE ADDR: 2AFE: ENUM_LIST(507) */
enum Bool: unsigned char
{
    False = 0,
    True = 1,
};

/* NAME TYPE ADDR: 2B3B: NAME(510) */
/* BASE TYPE ADDR: 2B1B: FIELD_LIST(509) */
#pragma pack(push, 1)
/* number of fields = 2, size = 0x0002 [2 bytes] */
struct JOYFORCES_ACTIVE
{
    /* offset = 0x0000 [0] */
    Bool disable;
    /* offset = 0x0001 [1] */
    Bool carFlip;
};
#pragma pack(pop)

/* Procedure params definition 0 - 2B50: NEAR386 PROC(511) */
/* typedef void (unnamed_proc)(int arg0); */

/* Procedure params definition 1 - 2B55: NEAR386 PROC(512) */
/* typedef int (unnamed_proc)(void); */

/* Procedure params definition 2 - 2B5A: NEAR386 PROC(513) */
/* typedef void (unnamed_proc)(Car_tObj* arg0, int arg1); */

/* Procedure params definition 3 - 2B62: NEAR386 PROC(514) */
/* typedef void (unnamed_proc)(Car_tObj* arg0, Car_tObj* arg1, LIBCOORD arg2); */

/* Procedure params definition 4 - 2B6D: NEAR386 PROC(515) */
/* typedef void (unnamed_proc)(Car_tObj* arg0); */

/* Procedure params definition 5 - 2B74: NEAR386 PROC(516) */
/* typedef void (unnamed_proc)(Car_tObj* arg0); */

/* Procedure params definition 6 - 2B7A: NEAR386 PROC(517) */
/* typedef int (unnamed_proc)(Car_tObj* arg0); */
