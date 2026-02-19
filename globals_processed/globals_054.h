 nfsw

 Preferred load address is 00400000

 Start         Length     Name                   Class
 0001:00401000 000cb600h .text                   CODE
 0002:004cd000 0001b200h .data                   DATA
 0003:004e9000 0004f400h .bss                    BSS


Detailed map of segments

 0001:00000000 000cb600 C=CODE     S=BEGTEXT  G=(none)   M=nfsw   ACBP=A9
 0002:00000000 0001b200 C=DATA     S=DGROUP   G=DGROUP   M=nfsw   ACBP=A9
 0003:00000000 0004f400 C=BSS      S=.bss     G=DGROUP   M=nfsw   ACBP=A9


  Address        Publics by Name

// GLOBAL: 0001:00048f56 PACKET_Send_ 00449f56 (code)
// GLOBAL: 0001:0004924c PACKET_InitGlobals_ 0044a24c (code)
// GLOBAL: 0001:00049297 PACKET_InitCallBacks_ 0044a297 (code)
// GLOBAL: 0001:000492d9 _PACKET_Receive_CALLBACK 0044a2d9 (code)
// GLOBAL: 0001:00049362 _PACKET_ConnClosed_CALLBACK 0044a362 (code)
// GLOBAL: 0001:000493c3 _PACKET_UserAbort_CALLBACK 0044a3c3 (code)
// GLOBAL: 0001:0004941d PACKET_Initialize_ 0044a41d (code)
// GLOBAL: 0001:000494d0 PACKET_UserAbortConnection_ 0044a4d0 (code)
// GLOBAL: 0001:00049516 PACKET_Disconnect_ 0044a516 (code)
// GLOBAL: 0001:0004955a PACKET_GetCompressedIndex_ 0044a55a (code)
// GLOBAL: 0001:000495b7 PACKET_GetStaticIndex_ 0044a5b7 (code)
// GLOBAL: 0001:0004960e PACKET_SetIndexes_ 0044a60e (code)
// GLOBAL: 0001:0004977a PACKET_UpdatePlayers_CALLBACK_ 0044a77a (code)
// GLOBAL: 0001:00049816 PACKET_GetPlayers_ 0044a816 (code)
// GLOBAL: 0001:0004986f PACKET_CheckPoint_ 0044a86f (code)
// GLOBAL: 0001:00049ad0 PACKET_Checkpoint_CALLBACK_ 0044aad0 (code)
// GLOBAL: 0002:0000ef4c _menucom_playerdata_mutex 004dbf4c (data)
// GLOBAL: 0002:0000ef50 _packet_chkpnt_mutex 004dbf50 (data)
// GLOBAL: 0002:0000ef54 _PacketCallBacks 004dbf54 (data)
// GLOBAL: 0003:0002a4dc _gIndexedPktConns 005134dc (bss)
// GLOBAL: 0003:0002a4fc _RemoteConn 005134fc (bss)
// GLOBAL: 0003:0002a81c _gotgPlayers 0051381c (static pubdef) (bss)
// GLOBAL: 0003:0002a820 _gSendPktFailed 00513820 (bss)
// GLOBAL: 0003:0002a824 _gComState 00513824 (bss)
// GLOBAL: 0003:0002a85f _gPlayers 0051385f (bss)


Program entry point at 0001:000872e6
