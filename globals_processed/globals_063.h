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

// GLOBAL: 0001:0004f513 Device_StartUp_ 00450513 (code)
// GLOBAL: 0001:0004f599 Device_LoadCalibration_ 00450599 (code)
// GLOBAL: 0001:0004f5c3 Device_PurgeCalibration_ 004505c3 (code)
// GLOBAL: 0001:0004f5ef Device_CalibrateControl_ 004505ef (code)
// GLOBAL: 0001:0004f882 Device_SetHardCodedKeys_ 00450882 (code)
// GLOBAL: 0001:0004fa57 Device_CycleCamera_ 00450a57 (code)
// GLOBAL: 0001:0004fa9f _Device_readwinjoy 00450a9f (code)
// GLOBAL: 0001:0004fbc7 Device_TestJoy_ 00450bc7 (code)
// GLOBAL: 0001:0004fc1f Device_RawJoy_ 00450c1f (code)
// GLOBAL: 0001:0004fc94 Device_RawJoyButtons_ 00450c94 (code)
// GLOBAL: 0001:0004fcdc Device_Update_ 00450cdc (code)
// GLOBAL: 0001:0004ff07 Device_ScheduleJoy_ 00450f07 (code)
// GLOBAL: 0001:0004ff61 Device_ButtonStartUp_ 00450f61 (code)
// GLOBAL: 0001:0004ffd5 Device_Button_ 00450fd5 (code)
// GLOBAL: 0001:00050022 Device_AnalogStartUp_ 00451022 (code)
// GLOBAL: 0001:00050091 Device_Analog_ 00451091 (code)
// GLOBAL: 0001:00050186 Device_Keyboard_ 00451186 (code)
// GLOBAL: 0001:000501c4 Device_Interface_ 004511c4 (code)
// GLOBAL: 0001:000502b0 Device_Null_ 004512b0 (code)
// GLOBAL: 0002:0000f114 _Device_gDeviceList 004dc114 (data)
// GLOBAL: 0003:0002b79c _Device_gJoy 0051479c (bss)
// GLOBAL: 0003:0002bb9c _Device_gButtonMask 00514b9c (static pubdef) (bss)
// GLOBAL: 0003:0002bbdc _Device_gCalibrate 00514bdc (bss)
// GLOBAL: 0003:0002bbe0 _Device_gSimpleJoy 00514be0 (static pubdef) (bss)
// GLOBAL: 0003:0002bbe4 _Device_gNumJoy 00514be4 (static pubdef) (bss)
// GLOBAL: 0003:0002bbe8 _Device_gJoySched 00514be8 (bss)


Program entry point at 0001:000872e6
