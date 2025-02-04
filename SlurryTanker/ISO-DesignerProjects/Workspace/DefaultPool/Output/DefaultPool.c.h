// ISO-Designer ISO 11783   Version 5.6.1.5243 Jetter AG
// Do not change!

#define WorkingSet_0_Offset                                     1
#define Macro_Go_DM1000_Offset                                 21
#define Macro_Go_DM1001_Offset                                 34
#define DataMask_1000_Offset                                   47
#define DataMask_1001_Offset                                   67
#define SoftKeyMask_4000_Offset                                87
#define SoftKeyMask_4001_Offset                               117
#define SoftKey_5000_Offset                                   147
#define SoftKey_5001_Offset                                   160
#define SoftKey_5002_Offset                                   173
#define SoftKey_5003_Offset                                   186
#define SoftKey_5004_Offset                                   199
#define SoftKey_5005_Offset                                   212
#define SoftKey_5006_Offset                                   225
#define SoftKey_5007_Offset                                   238
#define SoftKey_5008_Offset                                   251
#define SoftKey_5009_Offset                                   264
#define SoftKey_5010_Offset                                   277
#define SoftKey_5011_Offset                                   290
#define SoftKey_5012_Offset                                   303
#define SoftKey_5013_Offset                                   310
#define SoftKey_5015_Offset                                   317
#define SoftKey_5016_Offset                                   330
#define SoftKey_5017_Offset                                   343
#define SoftKey_5018_Offset                                   350
#define SoftKey_5019_Offset                                   357
#define SoftKey_5021_Offset                                   364
#define SoftKey_5022_Offset                                   371
#define SoftKey_5023_Offset                                   378
#define Button_6000_Offset                                    385
#define Button_6001_Offset                                    406
#define OutputString_11000_Offset                             427
#define OutputString_11001_Offset                             448
#define workingset_pic_Offset                                 469
#define Automatik_ein_Offset                                 1000
#define Automatik_aus_Offset                                 1647
#define Einfuelldom_Offset                                   2294
#define EXACUT_Offset                                        2941
#define Seitenschieber_Offset                                3588
#define Heckschieber_Offset                                  4154
#define zusammenklappen_Offset                               4669
#define auseinanderklappen_Offset                            5316
#define Verteiler_heben_Offset                               5963
#define Verteiler_senken_Offset                              6610
#define Knickdeichsel_heben_Offset                           7257
#define Knickdeichsel_senken_Offset                          7820
#define lightbulb_Offset                                     8363
#define trash_icon_Offset                                    8862
#define nr1_Offset                                           9527
#define nr2_Offset                                           9928
#define FontAttributes_23000_Offset                         10357
#define AuxFunction2_31000_Offset                           10365
#define AuxFunction2_31001_Offset                           10377
#define AuxFunction2_31002_Offset                           10389
#define AuxFunction2_31003_Offset                           10401
#define AuxFunction2_31004_Offset                           10413
#define AuxFunction2_31005_Offset                           10425
#define AuxFunction2_31006_Offset                           10437
#define AuxFunction2_31007_Offset                           10449
#define AuxFunction2_31008_Offset                           10461
#define AuxFunction2_31009_Offset                           10473
#define AuxFunction2_31010_Offset                           10485
#define AuxFunction2_31011_Offset                           10497
#define AuxFunction2_31015_Offset                           10509
#define AuxFunction2_31016_Offset                           10521
#define AuxFunction2_31024_Offset                           10533
#define AuxFunction2_31025_Offset                           10545

#define ISO_OP_MEMORY_CLASS

#define ISO_OP_DefaultPool_Size  10557
extern const unsigned char ISO_OP_MEMORY_CLASS isoOP_DefaultPool[];

#define ISO_OP_DefaultPool_ObjectNumber     67
extern const unsigned long ISO_OP_MEMORY_CLASS isoOP_DefaultPool_Offset[];
extern const unsigned long ISO_OP_MEMORY_CLASS isoOP_DefaultPool_Offset_Id[];
#define ISO_OP_DefaultPool_Scale_Offset      1

#define ID_NULL  0xFFFF

#define TYPEID_WORKSET        0
#define TYPEID_DATAMASK       1
#define TYPEID_ALARMMASK      2
#define TYPEID_CONTAINER      3
#define TYPEID_SKEYMASK       4
#define TYPEID_SOFTKEY        5
#define TYPEID_BUTTON         6
#define TYPEID_INBOOL         7
#define TYPEID_INSTR          8
#define TYPEID_INNUM          9
#define TYPEID_INLIST        10
#define TYPEID_OUTSTR        11
#define TYPEID_OUTNUM        12
#define TYPEID_OUTLINE       13
#define TYPEID_OUTRECT       14
#define TYPEID_OUTELLIPSE    15
#define TYPEID_OUTPOLY       16
#define TYPEID_OUTMETER      17
#define TYPEID_OUTLINBAR     18
#define TYPEID_OUTARCBAR     19
#define TYPEID_OUTPICT       20
#define TYPEID_VARNUM        21
#define TYPEID_VARSTR        22
#define TYPEID_FONTATTR      23
#define TYPEID_LINEATTR      24
#define TYPEID_FILLATTR      25
#define TYPEID_INPATTR       26
#define TYPEID_OBJPTR        27
#define TYPEID_MACRO         28
#define TYPEID_AUXFUNC       29
#define TYPEID_AUXINP        30
#define TYPEID_AUXFUNC2      31
#define TYPEID_AUXINP2       32
#define TYPEID_AUXPTR        33
#define TYPEID_WINMASK       34
#define TYPEID_KEYGROUP      35
#define TYPEID_GRPHCTXT      36
#define TYPEID_OUTLIST       37
#define TYPEID_EXTINPATTR    38
#define TYPEID_COLORMAP      39
#define TYPEID_OBJLBLREF     40
#define TYPEID_EXTOBJDEF     41
#define TYPEID_EXTREFNAME    42
#define TYPEID_EXTOBJPTR     43
#define TYPEID_ANIMATION     44
#define TYPEID_COLORPAL      45
#define TYPEID_GRAPHDATA     46
#define TYPEID_WSSPECIAL     47
#define TYPEID_SCALEGRAPH    48

#define EV_REFRESH            0
#define EV_ACT                1
#define EV_DEACT              2
#define EV_SHOW               3
#define EV_HIDE               4
#define EV_ENABLE             5
#define EV_DISABLE            6
#define EV_CHGACTMASK         7
#define EV_CHGSKEYMASK        8
#define EV_CHGATTR            9
#define EV_CHGBKCOLOR        10
#define EV_CHGFONTATTR       11
#define EV_CHGLINEATTR       12
#define EV_CHGFILLATTR       13
#define EV_CHGCHILDLOC       14
#define EV_CHGSIZE           15
#define EV_CHGVAL            16
#define EV_CHGPRIOR          17
#define EV_CHGENDPNT         18
#define EV_SELINPUT          19
#define EV_DESELINPUT        20
#define EV_ESC               21
#define EV_ENTERVAL          22
#define EV_ENTERCHGVAL       23
#define EV_KEYPRESS          24
#define EV_KEYRELEASE        25
#define EV_CHGCHILDPOS       26

#define CMD_HIDE_SHOW               160
#define CMD_ENABLE_DISABLE          161
#define CMD_SELECT_INPUT_OBJECT     162
#define CMD_CONTROL_AUDIO_DEVICE    163
#define CMD_SET_AUDIO_VOLUME        164
#define CMD_CHANGE_CHILD_LOCATION   165
#define CMD_CHANGE_SIZE             166
#define CMD_CHANGE_BACKGROUND_COLOR 167
#define CMD_CHANGE_NUMERIC_VALUE    168
#define CMD_CHANGE_END_POINT        169
#define CMD_CHANGE_FONT_ATTRIBUTES  170
#define CMD_CHANGE_LINE_ATTRIBUTES  171
#define CMD_CHANGE_FILL_ATTRIBUTES  172
#define CMD_CHANGE_ACTIVE_MASK      173
#define CMD_CHANGE_SOFT_KEY_MASK    174
#define CMD_CHANGE_ATTRIBUTE        175
#define CMD_CHANGE_PRIORITY         176
#define CMD_CHANGE_LIST_ITEM        177
#define CMD_CHANGE_STRING_VALUE     179
#define CMD_CHANGE_CHILD_POSITION   180
#define CMD_SET_OBJECT_LABEL        181
#define CMD_CHANGE_POLYGON_POINT    182
#define CMD_CHANGE_POLYGON_SCALE    183
#define CMD_GRAPHICS_CONTEXT        184
#define CMD_GET_ATTRIBUTE           185
#define CMD_SELECT_COLOURMAP_OR_PALETTE 186
#define CMD_EXECUTE_EXTENDED_MACRO  188
#define CMD_LOCK_UNLOCK_MASK        189
#define CMD_EXECUTE_MACRO           190

#define COLOR_BLACK       0
#define COLOR_WHITE       1
#define COLOR_GREEN       2
#define COLOR_TEAL        3
#define COLOR_MAROON      4
#define COLOR_PURPLE      5
#define COLOR_OLIVE       6
#define COLOR_SILVER      7
#define COLOR_GREY        8
#define COLOR_BLUE        9
#define COLOR_LIME       10
#define COLOR_CYAN       11
#define COLOR_RED        12
#define COLOR_MAGENTA    13
#define COLOR_YELLOW     14
#define COLOR_NAVY       15

#define FLOAT_1      0x00, 0x00, 0x80, 0x3F
#define FLOAT_10     0x00, 0x00, 0x20, 0x41
#define FLOAT_100    0x00, 0x00, 0xC8, 0x42
#define FLOAT_1000   0x00, 0x00, 0x7A, 0x44
#define FLOAT_0_1    0xCD, 0xCC, 0xCC, 0x3D
#define FLOAT_0_01   0x0A, 0xD7, 0x23, 0x3C
#define FLOAT_0_001  0x6F, 0x12, 0x83, 0x3A
