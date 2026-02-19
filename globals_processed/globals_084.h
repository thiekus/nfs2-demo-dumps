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

// GLOBAL: 0001:00065467 MenuCom_Init_ 00466467 (code)
// GLOBAL: 0001:000654b7 MenuCom_DeInit_ 004664b7 (code)
// GLOBAL: 0001:00065524 MenuCom_SyncData_ 00466524 (code)
// GLOBAL: 0001:000657a5 MenuCom_SendPlayerData_ 004667a5 (static pubdef) (code)
// GLOBAL: 0001:0006589e MenuCom_SendGameData_ 0046689e (static pubdef) (code)
// GLOBAL: 0001:0006591d MenuCom_ReadyToRace_ 0046691d (code)
// GLOBAL: 0001:00065bd2 MenuCom_OffToRaceDataHouseKeeping_ 00466bd2 (code)
// GLOBAL: 0001:00065c92 MenuCom_Display_ 00466c92 (code)
// GLOBAL: 0001:00066050 MenuCom_RecvGameData_CALLBACK_ 00467050 (code)
// GLOBAL: 0001:000660cf MenuCom_RecvPlayerData_CALLBACK_ 004670cf (code)
// GLOBAL: 0002:000105f4 _gMenuCom_NoInput 004dd5f4 (data)
// GLOBAL: 0002:000105f8 _menucom_gamedata_mutex 004dd5f8 (static pubdef) (data)
// GLOBAL: 0002:000105fc _gMenuCom_DeleteTourny 004dd5fc (static pubdef) (data)
// GLOBAL: 0003:00033d88 _asyncPlayerData 0051cd88 (static pubdef) (bss)
// GLOBAL: 0003:00033e58 _localPlayerData 0051ce58 (static pubdef) (bss)
// GLOBAL: 0003:00033e72 _asyncGameData 0051ce72 (static pubdef) (bss)


Program entry point at 0001:000872e6
