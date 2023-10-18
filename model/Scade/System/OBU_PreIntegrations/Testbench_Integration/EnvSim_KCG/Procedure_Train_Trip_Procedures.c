/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Procedure_Train_Trip_Procedures.h"

/* Procedures::Procedure_Train_Trip/ */
void Procedure_Train_Trip_Procedures(
  /* Condition_To_Trip/ */
  kcg_bool Condition_To_Trip,
  /* Current_Level/ */
  M_LEVEL Current_Level,
  /* Current_Mode/ */
  T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* Driver_Ack_LS/ */
  kcg_bool Driver_Ack_LS,
  /* Driver_Ack_OS/ */
  kcg_bool Driver_Ack_OS,
  /* Driver_Ack_SH/ */
  kcg_bool Driver_Ack_SH,
  /* Driver_Ack_SR/ */
  kcg_bool Driver_Ack_SR,
  /* Driver_Ack_TR/ */
  kcg_bool Driver_Ack_TR,
  /* Driver_Req_SH/ */
  kcg_bool Driver_Req_SH,
  /* Driver_Req_Start/ */
  kcg_bool Driver_Req_Start,
  /* MA_SSP_Gradiant_Available/ */
  kcg_bool MA_SSP_Gradiant_Available,
  /* Mode_Profile_On_Board/ */
  T_Mode_Profile_Level_And_Mode_Types_Pkg *Mode_Profile_On_Board,
  /* On_Going_Mission/ */
  kcg_bool On_Going_Mission,
  /* RCB_Ack_And_EB_Revocked/ */
  kcg_bool RCB_Ack_And_EB_Revocked,
  /* RBC_Authorizes_SR/ */
  kcg_bool RBC_Authorizes_SR,
  /* Shunting_Granted_By_RBC/ */
  kcg_bool Shunting_Granted_By_RBC,
  /* Train_Standstill/ */
  kcg_bool Train_Standstill,
  /* Valid_Train_Data_Stored/ */
  kcg_bool Valid_Train_Data_Stored,
  outC_Procedure_Train_Trip_Procedures *outC)
{
  /* Ack_LS_Req_To_Driver/ */
  static kcg_bool Ack_LS_Req_To_Driver_partial;
  /* Ack_OS_Req_To_Driver/ */
  static kcg_bool Ack_OS_Req_To_Driver_partial;
  /* Ack_SH_Req_To_Driver/ */
  static kcg_bool Ack_SH_Req_To_Driver_partial;
  /* Ack_SR_Req_To_Driver/ */
  static kcg_bool Ack_SR_Req_To_Driver_partial;
  /* Ack_TR_Req_To_Driver/ */
  static kcg_bool Ack_TR_Req_To_Driver_partial;
  /* Clean_BG_List_SH_Area/ */
  static kcg_bool Clean_BG_List_SH_Area_partial;
  /* Condition_Trip/ */
  static kcg_bool Condition_Trip_partial;
  /* Condition_5/ */
  static kcg_bool Condition_5_partial;
  /* Condition_6/ */
  static kcg_bool Condition_6_partial;
  /* Condition_7/ */
  static kcg_bool Condition_7_partial;
  /* Condition_8/ */
  static kcg_bool Condition_8_partial;
  /* Condition_31/ */
  static kcg_bool Condition_31_partial;
  /* Condition_15/ */
  static kcg_bool Condition_15_partial;
  /* Condition_50/ */
  static kcg_bool Condition_50_partial;
  /* Condition_62/ */
  static kcg_bool Condition_62_partial;
  /* Condition_63/ */
  static kcg_bool Condition_63_partial;
  /* Condition_68/ */
  static kcg_bool Condition_68_partial;
  /* Condition_70/ */
  static kcg_bool Condition_70_partial;
  /* End_Of_Mission_Procedure_Req/ */
  static kcg_bool End_Of_Mission_Procedure_Req_partial;
  /* MA_Req_To_RBC/ */
  static kcg_bool MA_Req_To_RBC_partial;
  /* Request_For_SH_To_RBC/ */
  static kcg_bool Request_For_SH_To_RBC_partial;
  /* SH_Refused_By_RBC_To_DMI/ */
  static kcg_bool SH_Refused_By_RBC_To_DMI_partial;
  /* SM_Train_Trip: */
  static SSM_ST_SM_Train_Trip SM_Train_Trip_state_nxt_partial;
  /* SM_Train_Trip: */
  static kcg_bool SM_Train_Trip_reset_nxt_partial;
  /* SM_Train_Trip: */
  static SSM_TR_SM_Train_Trip SM_Train_Trip_fired_partial;
  /* Ack_LS_Req_To_Driver/ */
  static kcg_bool _1_Ack_LS_Req_To_Driver_partial;
  /* Ack_OS_Req_To_Driver/ */
  static kcg_bool _2_Ack_OS_Req_To_Driver_partial;
  /* Ack_SH_Req_To_Driver/ */
  static kcg_bool _3_Ack_SH_Req_To_Driver_partial;
  /* Ack_SR_Req_To_Driver/ */
  static kcg_bool _4_Ack_SR_Req_To_Driver_partial;
  /* Ack_TR_Req_To_Driver/ */
  static kcg_bool _5_Ack_TR_Req_To_Driver_partial;
  /* Clean_BG_List_SH_Area/ */
  static kcg_bool _6_Clean_BG_List_SH_Area_partial;
  /* Condition_Trip/ */
  static kcg_bool _7_Condition_Trip_partial;
  /* Condition_5/ */
  static kcg_bool _8_Condition_5_partial;
  /* Condition_6/ */
  static kcg_bool _9_Condition_6_partial;
  /* Condition_7/ */
  static kcg_bool _10_Condition_7_partial;
  /* Condition_8/ */
  static kcg_bool _11_Condition_8_partial;
  /* Condition_31/ */
  static kcg_bool _12_Condition_31_partial;
  /* Condition_15/ */
  static kcg_bool _13_Condition_15_partial;
  /* Condition_50/ */
  static kcg_bool _14_Condition_50_partial;
  /* Condition_62/ */
  static kcg_bool _15_Condition_62_partial;
  /* Condition_63/ */
  static kcg_bool _16_Condition_63_partial;
  /* Condition_68/ */
  static kcg_bool _17_Condition_68_partial;
  /* Condition_70/ */
  static kcg_bool _18_Condition_70_partial;
  /* End_Of_Mission_Procedure_Req/ */
  static kcg_bool _19_End_Of_Mission_Procedure_Req_partial;
  /* MA_Req_To_RBC/ */
  static kcg_bool _20_MA_Req_To_RBC_partial;
  /* Request_For_SH_To_RBC/ */
  static kcg_bool _21_Request_For_SH_To_RBC_partial;
  /* SH_Refused_By_RBC_To_DMI/ */
  static kcg_bool _22_SH_Refused_By_RBC_To_DMI_partial;
  /* SM_Train_Trip: */
  static SSM_ST_SM_Train_Trip _23_SM_Train_Trip_state_nxt_partial;
  /* SM_Train_Trip: */
  static kcg_bool _24_SM_Train_Trip_reset_nxt_partial;
  /* SM_Train_Trip: */
  static SSM_TR_SM_Train_Trip _25_SM_Train_Trip_fired_partial;
  /* Ack_LS_Req_To_Driver/ */
  static kcg_bool _26_Ack_LS_Req_To_Driver_partial;
  /* Ack_OS_Req_To_Driver/ */
  static kcg_bool _27_Ack_OS_Req_To_Driver_partial;
  /* Ack_SH_Req_To_Driver/ */
  static kcg_bool _28_Ack_SH_Req_To_Driver_partial;
  /* Ack_SR_Req_To_Driver/ */
  static kcg_bool _29_Ack_SR_Req_To_Driver_partial;
  /* Ack_TR_Req_To_Driver/ */
  static kcg_bool _30_Ack_TR_Req_To_Driver_partial;
  /* Clean_BG_List_SH_Area/ */
  static kcg_bool _31_Clean_BG_List_SH_Area_partial;
  /* Condition_Trip/ */
  static kcg_bool _32_Condition_Trip_partial;
  /* Condition_5/ */
  static kcg_bool _33_Condition_5_partial;
  /* Condition_6/ */
  static kcg_bool _34_Condition_6_partial;
  /* Condition_7/ */
  static kcg_bool _35_Condition_7_partial;
  /* Condition_8/ */
  static kcg_bool _36_Condition_8_partial;
  /* Condition_31/ */
  static kcg_bool _37_Condition_31_partial;
  /* Condition_15/ */
  static kcg_bool _38_Condition_15_partial;
  /* Condition_50/ */
  static kcg_bool _39_Condition_50_partial;
  /* Condition_62/ */
  static kcg_bool _40_Condition_62_partial;
  /* Condition_63/ */
  static kcg_bool _41_Condition_63_partial;
  /* Condition_68/ */
  static kcg_bool _42_Condition_68_partial;
  /* Condition_70/ */
  static kcg_bool _43_Condition_70_partial;
  /* End_Of_Mission_Procedure_Req/ */
  static kcg_bool _44_End_Of_Mission_Procedure_Req_partial;
  /* MA_Req_To_RBC/ */
  static kcg_bool _45_MA_Req_To_RBC_partial;
  /* Request_For_SH_To_RBC/ */
  static kcg_bool _46_Request_For_SH_To_RBC_partial;
  /* SH_Refused_By_RBC_To_DMI/ */
  static kcg_bool _47_SH_Refused_By_RBC_To_DMI_partial;
  /* SM_Train_Trip: */
  static SSM_ST_SM_Train_Trip _48_SM_Train_Trip_state_nxt_partial;
  /* SM_Train_Trip: */
  static kcg_bool _49_SM_Train_Trip_reset_nxt_partial;
  /* SM_Train_Trip: */
  static SSM_TR_SM_Train_Trip _50_SM_Train_Trip_fired_partial;
  /* Ack_LS_Req_To_Driver/ */
  static kcg_bool _51_Ack_LS_Req_To_Driver_partial;
  /* Ack_OS_Req_To_Driver/ */
  static kcg_bool _52_Ack_OS_Req_To_Driver_partial;
  /* Ack_SH_Req_To_Driver/ */
  static kcg_bool _53_Ack_SH_Req_To_Driver_partial;
  /* Ack_SR_Req_To_Driver/ */
  static kcg_bool _54_Ack_SR_Req_To_Driver_partial;
  /* Ack_TR_Req_To_Driver/ */
  static kcg_bool _55_Ack_TR_Req_To_Driver_partial;
  /* Clean_BG_List_SH_Area/ */
  static kcg_bool _56_Clean_BG_List_SH_Area_partial;
  /* Condition_Trip/ */
  static kcg_bool _57_Condition_Trip_partial;
  /* Condition_5/ */
  static kcg_bool _58_Condition_5_partial;
  /* Condition_6/ */
  static kcg_bool _59_Condition_6_partial;
  /* Condition_7/ */
  static kcg_bool _60_Condition_7_partial;
  /* Condition_8/ */
  static kcg_bool _61_Condition_8_partial;
  /* Condition_31/ */
  static kcg_bool _62_Condition_31_partial;
  /* Condition_15/ */
  static kcg_bool _63_Condition_15_partial;
  /* Condition_50/ */
  static kcg_bool _64_Condition_50_partial;
  /* Condition_62/ */
  static kcg_bool _65_Condition_62_partial;
  /* Condition_63/ */
  static kcg_bool _66_Condition_63_partial;
  /* Condition_68/ */
  static kcg_bool _67_Condition_68_partial;
  /* Condition_70/ */
  static kcg_bool _68_Condition_70_partial;
  /* End_Of_Mission_Procedure_Req/ */
  static kcg_bool _69_End_Of_Mission_Procedure_Req_partial;
  /* MA_Req_To_RBC/ */
  static kcg_bool _70_MA_Req_To_RBC_partial;
  /* Request_For_SH_To_RBC/ */
  static kcg_bool _71_Request_For_SH_To_RBC_partial;
  /* SH_Refused_By_RBC_To_DMI/ */
  static kcg_bool _72_SH_Refused_By_RBC_To_DMI_partial;
  /* SM_Train_Trip: */
  static SSM_ST_SM_Train_Trip _73_SM_Train_Trip_state_nxt_partial;
  /* SM_Train_Trip: */
  static kcg_bool _74_SM_Train_Trip_reset_nxt_partial;
  /* SM_Train_Trip: */
  static SSM_TR_SM_Train_Trip _75_SM_Train_Trip_fired_partial;
  /* Ack_LS_Req_To_Driver/ */
  static kcg_bool _76_Ack_LS_Req_To_Driver_partial;
  /* Ack_OS_Req_To_Driver/ */
  static kcg_bool _77_Ack_OS_Req_To_Driver_partial;
  /* Ack_SH_Req_To_Driver/ */
  static kcg_bool _78_Ack_SH_Req_To_Driver_partial;
  /* Ack_SR_Req_To_Driver/ */
  static kcg_bool _79_Ack_SR_Req_To_Driver_partial;
  /* Ack_TR_Req_To_Driver/ */
  static kcg_bool _80_Ack_TR_Req_To_Driver_partial;
  /* Clean_BG_List_SH_Area/ */
  static kcg_bool _81_Clean_BG_List_SH_Area_partial;
  /* Condition_Trip/ */
  static kcg_bool _82_Condition_Trip_partial;
  /* Condition_5/ */
  static kcg_bool _83_Condition_5_partial;
  /* Condition_6/ */
  static kcg_bool _84_Condition_6_partial;
  /* Condition_7/ */
  static kcg_bool _85_Condition_7_partial;
  /* Condition_8/ */
  static kcg_bool _86_Condition_8_partial;
  /* Condition_31/ */
  static kcg_bool _87_Condition_31_partial;
  /* Condition_15/ */
  static kcg_bool _88_Condition_15_partial;
  /* Condition_50/ */
  static kcg_bool _89_Condition_50_partial;
  /* Condition_62/ */
  static kcg_bool _90_Condition_62_partial;
  /* Condition_63/ */
  static kcg_bool _91_Condition_63_partial;
  /* Condition_68/ */
  static kcg_bool _92_Condition_68_partial;
  /* Condition_70/ */
  static kcg_bool _93_Condition_70_partial;
  /* End_Of_Mission_Procedure_Req/ */
  static kcg_bool _94_End_Of_Mission_Procedure_Req_partial;
  /* MA_Req_To_RBC/ */
  static kcg_bool _95_MA_Req_To_RBC_partial;
  /* Request_For_SH_To_RBC/ */
  static kcg_bool _96_Request_For_SH_To_RBC_partial;
  /* SH_Refused_By_RBC_To_DMI/ */
  static kcg_bool _97_SH_Refused_By_RBC_To_DMI_partial;
  /* SM_Train_Trip: */
  static SSM_ST_SM_Train_Trip _98_SM_Train_Trip_state_nxt_partial;
  /* SM_Train_Trip: */
  static kcg_bool _99_SM_Train_Trip_reset_nxt_partial;
  /* SM_Train_Trip: */
  static SSM_TR_SM_Train_Trip _100_SM_Train_Trip_fired_partial;
  /* Ack_LS_Req_To_Driver/ */
  static kcg_bool _101_Ack_LS_Req_To_Driver_partial;
  /* Ack_OS_Req_To_Driver/ */
  static kcg_bool _102_Ack_OS_Req_To_Driver_partial;
  /* Ack_SH_Req_To_Driver/ */
  static kcg_bool _103_Ack_SH_Req_To_Driver_partial;
  /* Ack_SR_Req_To_Driver/ */
  static kcg_bool _104_Ack_SR_Req_To_Driver_partial;
  /* Ack_TR_Req_To_Driver/ */
  static kcg_bool _105_Ack_TR_Req_To_Driver_partial;
  /* Clean_BG_List_SH_Area/ */
  static kcg_bool _106_Clean_BG_List_SH_Area_partial;
  /* Condition_Trip/ */
  static kcg_bool _107_Condition_Trip_partial;
  /* Condition_5/ */
  static kcg_bool _108_Condition_5_partial;
  /* Condition_6/ */
  static kcg_bool _109_Condition_6_partial;
  /* Condition_7/ */
  static kcg_bool _110_Condition_7_partial;
  /* Condition_8/ */
  static kcg_bool _111_Condition_8_partial;
  /* Condition_31/ */
  static kcg_bool _112_Condition_31_partial;
  /* Condition_15/ */
  static kcg_bool _113_Condition_15_partial;
  /* Condition_50/ */
  static kcg_bool _114_Condition_50_partial;
  /* Condition_62/ */
  static kcg_bool _115_Condition_62_partial;
  /* Condition_63/ */
  static kcg_bool _116_Condition_63_partial;
  /* Condition_68/ */
  static kcg_bool _117_Condition_68_partial;
  /* Condition_70/ */
  static kcg_bool _118_Condition_70_partial;
  /* End_Of_Mission_Procedure_Req/ */
  static kcg_bool _119_End_Of_Mission_Procedure_Req_partial;
  /* MA_Req_To_RBC/ */
  static kcg_bool _120_MA_Req_To_RBC_partial;
  /* Request_For_SH_To_RBC/ */
  static kcg_bool _121_Request_For_SH_To_RBC_partial;
  /* SH_Refused_By_RBC_To_DMI/ */
  static kcg_bool _122_SH_Refused_By_RBC_To_DMI_partial;
  /* SM_Train_Trip: */
  static SSM_ST_SM_Train_Trip _123_SM_Train_Trip_state_nxt_partial;
  /* SM_Train_Trip: */
  static kcg_bool _124_SM_Train_Trip_reset_nxt_partial;
  /* SM_Train_Trip: */
  static SSM_TR_SM_Train_Trip _125_SM_Train_Trip_fired_partial;
  /* Ack_LS_Req_To_Driver/ */
  static kcg_bool _126_Ack_LS_Req_To_Driver_partial;
  /* Ack_OS_Req_To_Driver/ */
  static kcg_bool _127_Ack_OS_Req_To_Driver_partial;
  /* Ack_SH_Req_To_Driver/ */
  static kcg_bool _128_Ack_SH_Req_To_Driver_partial;
  /* Ack_SR_Req_To_Driver/ */
  static kcg_bool _129_Ack_SR_Req_To_Driver_partial;
  /* Ack_TR_Req_To_Driver/ */
  static kcg_bool _130_Ack_TR_Req_To_Driver_partial;
  /* Clean_BG_List_SH_Area/ */
  static kcg_bool _131_Clean_BG_List_SH_Area_partial;
  /* Condition_Trip/ */
  static kcg_bool _132_Condition_Trip_partial;
  /* Condition_5/ */
  static kcg_bool _133_Condition_5_partial;
  /* Condition_6/ */
  static kcg_bool _134_Condition_6_partial;
  /* Condition_7/ */
  static kcg_bool _135_Condition_7_partial;
  /* Condition_8/ */
  static kcg_bool _136_Condition_8_partial;
  /* Condition_31/ */
  static kcg_bool _137_Condition_31_partial;
  /* Condition_15/ */
  static kcg_bool _138_Condition_15_partial;
  /* Condition_50/ */
  static kcg_bool _139_Condition_50_partial;
  /* Condition_62/ */
  static kcg_bool _140_Condition_62_partial;
  /* Condition_63/ */
  static kcg_bool _141_Condition_63_partial;
  /* Condition_68/ */
  static kcg_bool _142_Condition_68_partial;
  /* Condition_70/ */
  static kcg_bool _143_Condition_70_partial;
  /* End_Of_Mission_Procedure_Req/ */
  static kcg_bool _144_End_Of_Mission_Procedure_Req_partial;
  /* MA_Req_To_RBC/ */
  static kcg_bool _145_MA_Req_To_RBC_partial;
  /* Request_For_SH_To_RBC/ */
  static kcg_bool _146_Request_For_SH_To_RBC_partial;
  /* SH_Refused_By_RBC_To_DMI/ */
  static kcg_bool _147_SH_Refused_By_RBC_To_DMI_partial;
  /* SM_Train_Trip: */
  static SSM_ST_SM_Train_Trip _148_SM_Train_Trip_state_nxt_partial;
  /* SM_Train_Trip: */
  static kcg_bool _149_SM_Train_Trip_reset_nxt_partial;
  /* SM_Train_Trip: */
  static SSM_TR_SM_Train_Trip _150_SM_Train_Trip_fired_partial;
  /* Ack_LS_Req_To_Driver/ */
  static kcg_bool _151_Ack_LS_Req_To_Driver_partial;
  /* Ack_OS_Req_To_Driver/ */
  static kcg_bool _152_Ack_OS_Req_To_Driver_partial;
  /* Ack_SH_Req_To_Driver/ */
  static kcg_bool _153_Ack_SH_Req_To_Driver_partial;
  /* Ack_SR_Req_To_Driver/ */
  static kcg_bool _154_Ack_SR_Req_To_Driver_partial;
  /* Ack_TR_Req_To_Driver/ */
  static kcg_bool _155_Ack_TR_Req_To_Driver_partial;
  /* Clean_BG_List_SH_Area/ */
  static kcg_bool _156_Clean_BG_List_SH_Area_partial;
  /* Condition_Trip/ */
  static kcg_bool _157_Condition_Trip_partial;
  /* Condition_5/ */
  static kcg_bool _158_Condition_5_partial;
  /* Condition_6/ */
  static kcg_bool _159_Condition_6_partial;
  /* Condition_7/ */
  static kcg_bool _160_Condition_7_partial;
  /* Condition_8/ */
  static kcg_bool _161_Condition_8_partial;
  /* Condition_31/ */
  static kcg_bool _162_Condition_31_partial;
  /* Condition_15/ */
  static kcg_bool _163_Condition_15_partial;
  /* Condition_50/ */
  static kcg_bool _164_Condition_50_partial;
  /* Condition_62/ */
  static kcg_bool _165_Condition_62_partial;
  /* Condition_63/ */
  static kcg_bool _166_Condition_63_partial;
  /* Condition_68/ */
  static kcg_bool _167_Condition_68_partial;
  /* Condition_70/ */
  static kcg_bool _168_Condition_70_partial;
  /* End_Of_Mission_Procedure_Req/ */
  static kcg_bool _169_End_Of_Mission_Procedure_Req_partial;
  /* MA_Req_To_RBC/ */
  static kcg_bool _170_MA_Req_To_RBC_partial;
  /* Request_For_SH_To_RBC/ */
  static kcg_bool _171_Request_For_SH_To_RBC_partial;
  /* SH_Refused_By_RBC_To_DMI/ */
  static kcg_bool _172_SH_Refused_By_RBC_To_DMI_partial;
  /* SM_Train_Trip: */
  static SSM_ST_SM_Train_Trip _173_SM_Train_Trip_state_nxt_partial;
  /* SM_Train_Trip: */
  static kcg_bool _174_SM_Train_Trip_reset_nxt_partial;
  /* SM_Train_Trip: */
  static SSM_TR_SM_Train_Trip _175_SM_Train_Trip_fired_partial;
  /* Ack_LS_Req_To_Driver/ */
  static kcg_bool _176_Ack_LS_Req_To_Driver_partial;
  /* Ack_OS_Req_To_Driver/ */
  static kcg_bool _177_Ack_OS_Req_To_Driver_partial;
  /* Ack_SH_Req_To_Driver/ */
  static kcg_bool _178_Ack_SH_Req_To_Driver_partial;
  /* Ack_SR_Req_To_Driver/ */
  static kcg_bool _179_Ack_SR_Req_To_Driver_partial;
  /* Ack_TR_Req_To_Driver/ */
  static kcg_bool _180_Ack_TR_Req_To_Driver_partial;
  /* Clean_BG_List_SH_Area/ */
  static kcg_bool _181_Clean_BG_List_SH_Area_partial;
  /* Condition_Trip/ */
  static kcg_bool _182_Condition_Trip_partial;
  /* Condition_5/ */
  static kcg_bool _183_Condition_5_partial;
  /* Condition_6/ */
  static kcg_bool _184_Condition_6_partial;
  /* Condition_7/ */
  static kcg_bool _185_Condition_7_partial;
  /* Condition_8/ */
  static kcg_bool _186_Condition_8_partial;
  /* Condition_31/ */
  static kcg_bool _187_Condition_31_partial;
  /* Condition_15/ */
  static kcg_bool _188_Condition_15_partial;
  /* Condition_50/ */
  static kcg_bool _189_Condition_50_partial;
  /* Condition_62/ */
  static kcg_bool _190_Condition_62_partial;
  /* Condition_63/ */
  static kcg_bool _191_Condition_63_partial;
  /* Condition_68/ */
  static kcg_bool _192_Condition_68_partial;
  /* Condition_70/ */
  static kcg_bool _193_Condition_70_partial;
  /* End_Of_Mission_Procedure_Req/ */
  static kcg_bool _194_End_Of_Mission_Procedure_Req_partial;
  /* MA_Req_To_RBC/ */
  static kcg_bool _195_MA_Req_To_RBC_partial;
  /* Request_For_SH_To_RBC/ */
  static kcg_bool _196_Request_For_SH_To_RBC_partial;
  /* SH_Refused_By_RBC_To_DMI/ */
  static kcg_bool _197_SH_Refused_By_RBC_To_DMI_partial;
  /* SM_Train_Trip: */
  static SSM_ST_SM_Train_Trip _198_SM_Train_Trip_state_nxt_partial;
  /* SM_Train_Trip: */
  static kcg_bool _199_SM_Train_Trip_reset_nxt_partial;
  /* SM_Train_Trip: */
  static SSM_TR_SM_Train_Trip _200_SM_Train_Trip_fired_partial;
  /* Ack_LS_Req_To_Driver/ */
  static kcg_bool _201_Ack_LS_Req_To_Driver_partial;
  /* Ack_OS_Req_To_Driver/ */
  static kcg_bool _202_Ack_OS_Req_To_Driver_partial;
  /* Ack_SH_Req_To_Driver/ */
  static kcg_bool _203_Ack_SH_Req_To_Driver_partial;
  /* Ack_SR_Req_To_Driver/ */
  static kcg_bool _204_Ack_SR_Req_To_Driver_partial;
  /* Ack_TR_Req_To_Driver/ */
  static kcg_bool _205_Ack_TR_Req_To_Driver_partial;
  /* Clean_BG_List_SH_Area/ */
  static kcg_bool _206_Clean_BG_List_SH_Area_partial;
  /* Condition_Trip/ */
  static kcg_bool _207_Condition_Trip_partial;
  /* Condition_5/ */
  static kcg_bool _208_Condition_5_partial;
  /* Condition_6/ */
  static kcg_bool _209_Condition_6_partial;
  /* Condition_7/ */
  static kcg_bool _210_Condition_7_partial;
  /* Condition_8/ */
  static kcg_bool _211_Condition_8_partial;
  /* Condition_31/ */
  static kcg_bool _212_Condition_31_partial;
  /* Condition_15/ */
  static kcg_bool _213_Condition_15_partial;
  /* Condition_50/ */
  static kcg_bool _214_Condition_50_partial;
  /* Condition_62/ */
  static kcg_bool _215_Condition_62_partial;
  /* Condition_63/ */
  static kcg_bool _216_Condition_63_partial;
  /* Condition_68/ */
  static kcg_bool _217_Condition_68_partial;
  /* Condition_70/ */
  static kcg_bool _218_Condition_70_partial;
  /* End_Of_Mission_Procedure_Req/ */
  static kcg_bool _219_End_Of_Mission_Procedure_Req_partial;
  /* MA_Req_To_RBC/ */
  static kcg_bool _220_MA_Req_To_RBC_partial;
  /* Request_For_SH_To_RBC/ */
  static kcg_bool _221_Request_For_SH_To_RBC_partial;
  /* SH_Refused_By_RBC_To_DMI/ */
  static kcg_bool _222_SH_Refused_By_RBC_To_DMI_partial;
  /* SM_Train_Trip: */
  static SSM_ST_SM_Train_Trip _223_SM_Train_Trip_state_nxt_partial;
  /* SM_Train_Trip: */
  static kcg_bool _224_SM_Train_Trip_reset_nxt_partial;
  /* SM_Train_Trip: */
  static SSM_TR_SM_Train_Trip _225_SM_Train_Trip_fired_partial;
  /* SM_Train_Trip: */
  static SSM_ST_SM_Train_Trip SM_Train_Trip_state_act_partial;
  /* SM_Train_Trip: */
  static kcg_bool SM_Train_Trip_reset_act_partial;
  /* SM_Train_Trip: */
  static SSM_TR_SM_Train_Trip SM_Train_Trip_fired_strong_partial;
  /* SM_Train_Trip:Train_Trip_procedure_off:<1> */
  static kcg_bool tr_1_guard_Train_Trip_procedure_off_SM_Train_Trip;
  /* SM_Train_Trip: */
  static SSM_ST_SM_Train_Trip _226_SM_Train_Trip_state_act_partial;
  /* SM_Train_Trip: */
  static kcg_bool _227_SM_Train_Trip_reset_act_partial;
  /* SM_Train_Trip: */
  static SSM_TR_SM_Train_Trip _228_SM_Train_Trip_fired_strong_partial;
  /* SM_Train_Trip:Trip_Mode:<1> */
  static kcg_bool tr_1_guard_Trip_Mode_SM_Train_Trip;
  /* SM_Train_Trip: */
  static SSM_ST_SM_Train_Trip _229_SM_Train_Trip_state_act_partial;
  /* SM_Train_Trip: */
  static kcg_bool _230_SM_Train_Trip_reset_act_partial;
  /* SM_Train_Trip: */
  static SSM_TR_SM_Train_Trip _231_SM_Train_Trip_fired_strong_partial;
  /* SM_Train_Trip:Trip_Mode_Waiting_Ack:<1><3><2> */
  static kcg_bool tr_2_guard_3_1_Trip_Mode_Waiting_Ack_SM_Train_Trip;
  /* SM_Train_Trip:Trip_Mode_Waiting_Ack:<1><3><1> */
  static kcg_bool tr_1_guard_3_1_Trip_Mode_Waiting_Ack_SM_Train_Trip;
  /* SM_Train_Trip:Trip_Mode_Waiting_Ack:<1><3> */
  static kcg_bool tr_3_guard_1_Trip_Mode_Waiting_Ack_SM_Train_Trip;
  /* SM_Train_Trip:Trip_Mode_Waiting_Ack:<1><2> */
  static kcg_bool tr_2_guard_1_Trip_Mode_Waiting_Ack_SM_Train_Trip;
  /* SM_Train_Trip:Trip_Mode_Waiting_Ack:<1><1> */
  static kcg_bool tr_1_guard_1_Trip_Mode_Waiting_Ack_SM_Train_Trip;
  /* SM_Train_Trip:Trip_Mode_Waiting_Ack:<1> */
  static kcg_bool tr_1_guard_Trip_Mode_Waiting_Ack_SM_Train_Trip;
  /* SM_Train_Trip: */
  static SSM_ST_SM_Train_Trip _232_SM_Train_Trip_state_act_partial;
  /* SM_Train_Trip: */
  static kcg_bool _233_SM_Train_Trip_reset_act_partial;
  /* SM_Train_Trip: */
  static SSM_TR_SM_Train_Trip _234_SM_Train_Trip_fired_strong_partial;
  /* SM_Train_Trip:Post_Trip_Mode:<3> */
  static kcg_bool tr_3_guard_Post_Trip_Mode_SM_Train_Trip;
  /* SM_Train_Trip:Post_Trip_Mode:<2> */
  static kcg_bool tr_2_guard_Post_Trip_Mode_SM_Train_Trip;
  /* SM_Train_Trip:Post_Trip_Mode:<1> */
  static kcg_bool tr_1_guard_Post_Trip_Mode_SM_Train_Trip;
  /* SM_Train_Trip: */
  static SSM_ST_SM_Train_Trip _235_SM_Train_Trip_state_act_partial;
  /* SM_Train_Trip: */
  static kcg_bool _236_SM_Train_Trip_reset_act_partial;
  /* SM_Train_Trip: */
  static SSM_TR_SM_Train_Trip _237_SM_Train_Trip_fired_strong_partial;
  /* SM_Train_Trip: */
  static SSM_ST_SM_Train_Trip _238_SM_Train_Trip_state_act_partial;
  /* SM_Train_Trip: */
  static kcg_bool _239_SM_Train_Trip_reset_act_partial;
  /* SM_Train_Trip: */
  static SSM_TR_SM_Train_Trip _240_SM_Train_Trip_fired_strong_partial;
  /* SM_Train_Trip: */
  static SSM_ST_SM_Train_Trip _241_SM_Train_Trip_state_act_partial;
  /* SM_Train_Trip: */
  static kcg_bool _242_SM_Train_Trip_reset_act_partial;
  /* SM_Train_Trip: */
  static SSM_TR_SM_Train_Trip _243_SM_Train_Trip_fired_strong_partial;
  /* SM_Train_Trip: */
  static SSM_ST_SM_Train_Trip _244_SM_Train_Trip_state_act_partial;
  /* SM_Train_Trip: */
  static kcg_bool _245_SM_Train_Trip_reset_act_partial;
  /* SM_Train_Trip: */
  static SSM_TR_SM_Train_Trip _246_SM_Train_Trip_fired_strong_partial;
  /* SM_Train_Trip:Waiting_Driver_Selection:<1> */
  static kcg_bool tr_1_guard_Waiting_Driver_Selection_SM_Train_Trip;
  /* SM_Train_Trip: */
  static SSM_ST_SM_Train_Trip _247_SM_Train_Trip_state_act_partial;
  /* SM_Train_Trip: */
  static kcg_bool _248_SM_Train_Trip_reset_act_partial;
  /* SM_Train_Trip: */
  static SSM_TR_SM_Train_Trip _249_SM_Train_Trip_fired_strong_partial;
  /* SM_Train_Trip:Wait_RBC_Ack:<1> */
  static kcg_bool tr_1_guard_Wait_RBC_Ack_SM_Train_Trip;
  /* SM_Train_Trip: */
  static SSM_ST_SM_Train_Trip _250_SM_Train_Trip_state_act_partial;
  /* SM_Train_Trip: */
  static kcg_bool _251_SM_Train_Trip_reset_act_partial;
  /* SM_Train_Trip: */
  static SSM_TR_SM_Train_Trip _252_SM_Train_Trip_fired_strong_partial;
  /* SM_Train_Trip: */
  static kcg_bool SM_Train_Trip_reset_sel;
  /* SM_Train_Trip: */
  static kcg_bool SM_Train_Trip_reset_prv;

  outC->SM_Train_Trip_state_sel = outC->SM_Train_Trip_state_nxt;
  switch (outC->SM_Train_Trip_state_sel) {
    case SSM_st_Procedure_SH_Initiated_By_Driver_SM_Train_Trip :
      _250_SM_Train_Trip_state_act_partial =
        SSM_st_Procedure_SH_Initiated_By_Driver_SM_Train_Trip;
      break;
    case SSM_st_Wait_RBC_Ack_SM_Train_Trip :
      tr_1_guard_Wait_RBC_Ack_SM_Train_Trip = RCB_Ack_And_EB_Revocked;
      if (tr_1_guard_Wait_RBC_Ack_SM_Train_Trip) {
        _247_SM_Train_Trip_state_act_partial =
          SSM_st_Waiting_Driver_Selection_SM_Train_Trip;
      }
      else {
        _247_SM_Train_Trip_state_act_partial = SSM_st_Wait_RBC_Ack_SM_Train_Trip;
      }
      break;
    case SSM_st_Waiting_Driver_Selection_SM_Train_Trip :
      tr_1_guard_Waiting_Driver_Selection_SM_Train_Trip = Driver_Req_SH;
      if (tr_1_guard_Waiting_Driver_Selection_SM_Train_Trip) {
        _244_SM_Train_Trip_state_act_partial =
          SSM_st_Procedure_SH_Initiated_By_Driver_SM_Train_Trip;
      }
      else {
        _244_SM_Train_Trip_state_act_partial =
          SSM_st_Waiting_Driver_Selection_SM_Train_Trip;
      }
      break;
    case SSM_st_SN_Mode_SM_Train_Trip :
      _241_SM_Train_Trip_state_act_partial = SSM_st_SN_Mode_SM_Train_Trip;
      break;
    case SSM_st_UN_Mode_SM_Train_Trip :
      _238_SM_Train_Trip_state_act_partial = SSM_st_UN_Mode_SM_Train_Trip;
      break;
    case SSM_st_SH_Mode_SM_Train_Trip :
      _235_SM_Train_Trip_state_act_partial = SSM_st_SH_Mode_SM_Train_Trip;
      break;
    case SSM_st_Post_Trip_Mode_SM_Train_Trip :
      tr_3_guard_Post_Trip_Mode_SM_Train_Trip = Driver_Req_SH;
      tr_2_guard_Post_Trip_Mode_SM_Train_Trip = (Current_Level ==
          M_LEVEL_Level_2) | (Current_Level == M_LEVEL_Level_3);
      tr_1_guard_Post_Trip_Mode_SM_Train_Trip = Current_Level == M_LEVEL_Level_1;
      if (tr_1_guard_Post_Trip_Mode_SM_Train_Trip) {
        _232_SM_Train_Trip_state_act_partial =
          SSM_st_Waiting_Driver_Selection_SM_Train_Trip;
      }
      else if (tr_2_guard_Post_Trip_Mode_SM_Train_Trip) {
        _232_SM_Train_Trip_state_act_partial = SSM_st_Wait_RBC_Ack_SM_Train_Trip;
      }
      else if (tr_3_guard_Post_Trip_Mode_SM_Train_Trip) {
        _232_SM_Train_Trip_state_act_partial =
          SSM_st_Procedure_SH_Initiated_By_Driver_SM_Train_Trip;
      }
      else {
        _232_SM_Train_Trip_state_act_partial = SSM_st_Post_Trip_Mode_SM_Train_Trip;
      }
      break;
    case SSM_st_Trip_Mode_Waiting_Ack_SM_Train_Trip :
      tr_1_guard_3_1_Trip_Mode_Waiting_Ack_SM_Train_Trip = Current_Level ==
        M_LEVEL_Level_0;
      tr_2_guard_1_Trip_Mode_Waiting_Ack_SM_Train_Trip =
        (!Valid_Train_Data_Stored) & ((Current_Level == M_LEVEL_Level_0) |
          (Current_Level == M_LEVEL_Level_NTC_specified_by_NID_NTC));
      tr_1_guard_1_Trip_Mode_Waiting_Ack_SM_Train_Trip = (Current_Level ==
          M_LEVEL_Level_1) | (Current_Level == M_LEVEL_Level_2) |
        (Current_Level == M_LEVEL_Level_3);
      tr_2_guard_3_1_Trip_Mode_Waiting_Ack_SM_Train_Trip = Current_Level ==
        M_LEVEL_Level_NTC_specified_by_NID_NTC;
      tr_3_guard_1_Trip_Mode_Waiting_Ack_SM_Train_Trip =
        Valid_Train_Data_Stored &
        (tr_1_guard_3_1_Trip_Mode_Waiting_Ack_SM_Train_Trip |
          tr_2_guard_3_1_Trip_Mode_Waiting_Ack_SM_Train_Trip);
      tr_1_guard_Trip_Mode_Waiting_Ack_SM_Train_Trip = Driver_Ack_TR &
        (tr_1_guard_1_Trip_Mode_Waiting_Ack_SM_Train_Trip |
          (tr_2_guard_1_Trip_Mode_Waiting_Ack_SM_Train_Trip |
            tr_3_guard_1_Trip_Mode_Waiting_Ack_SM_Train_Trip));
      if (tr_1_guard_Trip_Mode_Waiting_Ack_SM_Train_Trip) {
        if (tr_1_guard_1_Trip_Mode_Waiting_Ack_SM_Train_Trip) {
          _229_SM_Train_Trip_state_act_partial = SSM_st_Post_Trip_Mode_SM_Train_Trip;
        }
        else if (tr_2_guard_1_Trip_Mode_Waiting_Ack_SM_Train_Trip) {
          _229_SM_Train_Trip_state_act_partial = SSM_st_SH_Mode_SM_Train_Trip;
        }
        else if (tr_1_guard_3_1_Trip_Mode_Waiting_Ack_SM_Train_Trip) {
          _229_SM_Train_Trip_state_act_partial = SSM_st_UN_Mode_SM_Train_Trip;
        }
        else {
          _229_SM_Train_Trip_state_act_partial = SSM_st_SN_Mode_SM_Train_Trip;
        }
      }
      else {
        _229_SM_Train_Trip_state_act_partial =
          SSM_st_Trip_Mode_Waiting_Ack_SM_Train_Trip;
      }
      break;
    case SSM_st_Trip_Mode_SM_Train_Trip :
      tr_1_guard_Trip_Mode_SM_Train_Trip = Train_Standstill;
      if (tr_1_guard_Trip_Mode_SM_Train_Trip) {
        _226_SM_Train_Trip_state_act_partial =
          SSM_st_Trip_Mode_Waiting_Ack_SM_Train_Trip;
      }
      else {
        _226_SM_Train_Trip_state_act_partial = SSM_st_Trip_Mode_SM_Train_Trip;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  outC->_L2 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L15 = kcg_true;
  outC->_L16 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L17 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L13 = kcg_false;
  outC->_L11 = Current_Mode;
  /* _L5= */
  switch (outC->_L11) {
    case FS_Level_And_Mode_Types_Pkg :
      outC->_L5 = outC->_L2;
      break;
    case LS_Level_And_Mode_Types_Pkg :
      outC->_L5 = outC->_L4;
      break;
    case OS_Level_And_Mode_Types_Pkg :
      outC->_L5 = outC->_L15;
      break;
    case SR_Level_And_Mode_Types_Pkg :
      outC->_L5 = outC->_L16;
      break;
    case SN_Level_And_Mode_Types_Pkg :
      outC->_L5 = outC->_L3;
      break;
    case UN_Level_And_Mode_Types_Pkg :
      outC->_L5 = outC->_L17;
      break;
    case SH_Level_And_Mode_Types_Pkg :
      outC->_L5 = outC->_L7;
      break;
    case SB_Level_And_Mode_Types_Pkg :
      outC->_L5 = outC->_L10;
      break;
    default :
      outC->_L5 = outC->_L13;
      break;
  }
  outC->Loc_Procedure_Possible = outC->_L5;
  /* SM_Train_Trip: */
  switch (outC->SM_Train_Trip_state_sel) {
    case SSM_st_Procedure_SH_Initiated_By_Driver_SM_Train_Trip :
      outC->SM_Train_Trip_state_act = _250_SM_Train_Trip_state_act_partial;
      break;
    case SSM_st_Wait_RBC_Ack_SM_Train_Trip :
      outC->SM_Train_Trip_state_act = _247_SM_Train_Trip_state_act_partial;
      break;
    case SSM_st_Waiting_Driver_Selection_SM_Train_Trip :
      outC->SM_Train_Trip_state_act = _244_SM_Train_Trip_state_act_partial;
      break;
    case SSM_st_SN_Mode_SM_Train_Trip :
      outC->SM_Train_Trip_state_act = _241_SM_Train_Trip_state_act_partial;
      break;
    case SSM_st_UN_Mode_SM_Train_Trip :
      outC->SM_Train_Trip_state_act = _238_SM_Train_Trip_state_act_partial;
      break;
    case SSM_st_SH_Mode_SM_Train_Trip :
      outC->SM_Train_Trip_state_act = _235_SM_Train_Trip_state_act_partial;
      break;
    case SSM_st_Post_Trip_Mode_SM_Train_Trip :
      outC->SM_Train_Trip_state_act = _232_SM_Train_Trip_state_act_partial;
      break;
    case SSM_st_Trip_Mode_Waiting_Ack_SM_Train_Trip :
      outC->SM_Train_Trip_state_act = _229_SM_Train_Trip_state_act_partial;
      break;
    case SSM_st_Trip_Mode_SM_Train_Trip :
      outC->SM_Train_Trip_state_act = _226_SM_Train_Trip_state_act_partial;
      break;
    case SSM_st_Train_Trip_procedure_off_SM_Train_Trip :
      tr_1_guard_Train_Trip_procedure_off_SM_Train_Trip =
        outC->Loc_Procedure_Possible & Condition_To_Trip;
      if (tr_1_guard_Train_Trip_procedure_off_SM_Train_Trip) {
        SM_Train_Trip_state_act_partial = SSM_st_Trip_Mode_SM_Train_Trip;
      }
      else {
        SM_Train_Trip_state_act_partial = SSM_st_Train_Trip_procedure_off_SM_Train_Trip;
      }
      outC->SM_Train_Trip_state_act = SM_Train_Trip_state_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM_Train_Trip_state_act) {
    case SSM_st_Procedure_SH_Initiated_By_Driver_SM_Train_Trip :
      _220_MA_Req_To_RBC_partial = kcg_false;
      _218_Condition_70_partial = kcg_false;
      _217_Condition_68_partial = kcg_false;
      _216_Condition_63_partial = kcg_false;
      _215_Condition_62_partial = kcg_false;
      _214_Condition_50_partial = kcg_false;
      _213_Condition_15_partial = kcg_false;
      _212_Condition_31_partial = kcg_false;
      _211_Condition_8_partial = kcg_false;
      _210_Condition_7_partial = kcg_false;
      _207_Condition_Trip_partial = kcg_false;
      _205_Ack_TR_Req_To_Driver_partial = kcg_false;
      _204_Ack_SR_Req_To_Driver_partial = kcg_false;
      _203_Ack_SH_Req_To_Driver_partial = kcg_false;
      _202_Ack_OS_Req_To_Driver_partial = kcg_false;
      _201_Ack_LS_Req_To_Driver_partial = kcg_false;
      break;
    default :
      /* this branch is empty */
      break;
  }
  /* SM_Train_Trip: */
  switch (outC->SM_Train_Trip_state_sel) {
    case SSM_st_Procedure_SH_Initiated_By_Driver_SM_Train_Trip :
      _252_SM_Train_Trip_fired_strong_partial = SSM_TR_no_trans_SM_Train_Trip;
      outC->SM_Train_Trip_fired_strong = _252_SM_Train_Trip_fired_strong_partial;
      break;
    case SSM_st_Wait_RBC_Ack_SM_Train_Trip :
      if (tr_1_guard_Wait_RBC_Ack_SM_Train_Trip) {
        _249_SM_Train_Trip_fired_strong_partial =
          SSM_TR_Wait_RBC_Ack_Waiting_Driver_Selection_1_Wait_RBC_Ack_SM_Train_Trip;
      }
      else {
        _249_SM_Train_Trip_fired_strong_partial = SSM_TR_no_trans_SM_Train_Trip;
      }
      outC->SM_Train_Trip_fired_strong = _249_SM_Train_Trip_fired_strong_partial;
      break;
    case SSM_st_Waiting_Driver_Selection_SM_Train_Trip :
      if (tr_1_guard_Waiting_Driver_Selection_SM_Train_Trip) {
        _246_SM_Train_Trip_fired_strong_partial =
          SSM_TR_Waiting_Driver_Selection_Procedure_SH_Initiated_By_Driver_1_Waiting_Driver_Selection_SM_Train;
      }
      else {
        _246_SM_Train_Trip_fired_strong_partial = SSM_TR_no_trans_SM_Train_Trip;
      }
      outC->SM_Train_Trip_fired_strong = _246_SM_Train_Trip_fired_strong_partial;
      break;
    case SSM_st_SN_Mode_SM_Train_Trip :
      _243_SM_Train_Trip_fired_strong_partial = SSM_TR_no_trans_SM_Train_Trip;
      outC->SM_Train_Trip_fired_strong = _243_SM_Train_Trip_fired_strong_partial;
      break;
    case SSM_st_UN_Mode_SM_Train_Trip :
      _240_SM_Train_Trip_fired_strong_partial = SSM_TR_no_trans_SM_Train_Trip;
      outC->SM_Train_Trip_fired_strong = _240_SM_Train_Trip_fired_strong_partial;
      break;
    case SSM_st_SH_Mode_SM_Train_Trip :
      _237_SM_Train_Trip_fired_strong_partial = SSM_TR_no_trans_SM_Train_Trip;
      outC->SM_Train_Trip_fired_strong = _237_SM_Train_Trip_fired_strong_partial;
      break;
    case SSM_st_Post_Trip_Mode_SM_Train_Trip :
      if (tr_1_guard_Post_Trip_Mode_SM_Train_Trip) {
        _234_SM_Train_Trip_fired_strong_partial =
          SSM_TR_Post_Trip_Mode_Waiting_Driver_Selection_1_Post_Trip_Mode_SM_Train_Trip;
      }
      else if (tr_2_guard_Post_Trip_Mode_SM_Train_Trip) {
        _234_SM_Train_Trip_fired_strong_partial =
          SSM_TR_Post_Trip_Mode_Wait_RBC_Ack_2_Post_Trip_Mode_SM_Train_Trip;
      }
      else if (tr_3_guard_Post_Trip_Mode_SM_Train_Trip) {
        _234_SM_Train_Trip_fired_strong_partial =
          SSM_TR_Post_Trip_Mode_Procedure_SH_Initiated_By_Driver_3_Post_Trip_Mode_SM_Train_Trip;
      }
      else {
        _234_SM_Train_Trip_fired_strong_partial = SSM_TR_no_trans_SM_Train_Trip;
      }
      outC->SM_Train_Trip_fired_strong = _234_SM_Train_Trip_fired_strong_partial;
      break;
    case SSM_st_Trip_Mode_Waiting_Ack_SM_Train_Trip :
      if (tr_1_guard_Trip_Mode_Waiting_Ack_SM_Train_Trip) {
        if (tr_1_guard_1_Trip_Mode_Waiting_Ack_SM_Train_Trip) {
          _231_SM_Train_Trip_fired_strong_partial =
            SSM_TR_Trip_Mode_Waiting_Ack_Post_Trip_Mode_1_1_Trip_Mode_Waiting_Ack_SM_Train_Trip;
        }
        else if (tr_2_guard_1_Trip_Mode_Waiting_Ack_SM_Train_Trip) {
          _231_SM_Train_Trip_fired_strong_partial =
            SSM_TR_Trip_Mode_Waiting_Ack_SH_Mode_2_1_Trip_Mode_Waiting_Ack_SM_Train_Trip;
        }
        else if (tr_1_guard_3_1_Trip_Mode_Waiting_Ack_SM_Train_Trip) {
          _231_SM_Train_Trip_fired_strong_partial =
            SSM_TR_Trip_Mode_Waiting_Ack_UN_Mode_1_3_1_Trip_Mode_Waiting_Ack_SM_Train_Trip;
        }
        else {
          _231_SM_Train_Trip_fired_strong_partial =
            SSM_TR_Trip_Mode_Waiting_Ack_SN_Mode_2_3_1_Trip_Mode_Waiting_Ack_SM_Train_Trip;
        }
      }
      else {
        _231_SM_Train_Trip_fired_strong_partial = SSM_TR_no_trans_SM_Train_Trip;
      }
      outC->SM_Train_Trip_fired_strong = _231_SM_Train_Trip_fired_strong_partial;
      break;
    case SSM_st_Trip_Mode_SM_Train_Trip :
      if (tr_1_guard_Trip_Mode_SM_Train_Trip) {
        _228_SM_Train_Trip_fired_strong_partial =
          SSM_TR_Trip_Mode_Trip_Mode_Waiting_Ack_1_Trip_Mode_SM_Train_Trip;
      }
      else {
        _228_SM_Train_Trip_fired_strong_partial = SSM_TR_no_trans_SM_Train_Trip;
      }
      outC->SM_Train_Trip_fired_strong = _228_SM_Train_Trip_fired_strong_partial;
      break;
    case SSM_st_Train_Trip_procedure_off_SM_Train_Trip :
      if (tr_1_guard_Train_Trip_procedure_off_SM_Train_Trip) {
        SM_Train_Trip_fired_strong_partial =
          SSM_TR_Train_Trip_procedure_off_Trip_Mode_1_Train_Trip_procedure_off_SM_Train_Trip;
      }
      else {
        SM_Train_Trip_fired_strong_partial = SSM_TR_no_trans_SM_Train_Trip;
      }
      outC->SM_Train_Trip_fired_strong = SM_Train_Trip_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM_Train_Trip_state_act) {
    case SSM_st_Procedure_SH_Initiated_By_Driver_SM_Train_Trip :
      _225_SM_Train_Trip_fired_partial = outC->SM_Train_Trip_fired_strong;
      _224_SM_Train_Trip_reset_nxt_partial = kcg_false;
      _223_SM_Train_Trip_state_nxt_partial =
        SSM_st_Procedure_SH_Initiated_By_Driver_SM_Train_Trip;
      outC->_L11_Procedure_SH_Initiated_By_Driver_SM_Train_Trip = Current_Level;
      outC->_L12_Procedure_SH_Initiated_By_Driver_SM_Train_Trip = Driver_Req_SH;
      outC->_L13_Procedure_SH_Initiated_By_Driver_SM_Train_Trip = On_Going_Mission;
      outC->_L14_Procedure_SH_Initiated_By_Driver_SM_Train_Trip =
        Shunting_Granted_By_RBC;
      break;
    default :
      /* this branch is empty */
      break;
  }
  SM_Train_Trip_reset_prv = outC->SM_Train_Trip_reset_act;
  /* SM_Train_Trip: */
  switch (outC->SM_Train_Trip_state_sel) {
    case SSM_st_Procedure_SH_Initiated_By_Driver_SM_Train_Trip :
      _251_SM_Train_Trip_reset_act_partial = kcg_false;
      outC->SM_Train_Trip_reset_act = _251_SM_Train_Trip_reset_act_partial;
      break;
    case SSM_st_Wait_RBC_Ack_SM_Train_Trip :
      _248_SM_Train_Trip_reset_act_partial = tr_1_guard_Wait_RBC_Ack_SM_Train_Trip;
      outC->SM_Train_Trip_reset_act = _248_SM_Train_Trip_reset_act_partial;
      break;
    case SSM_st_Waiting_Driver_Selection_SM_Train_Trip :
      _245_SM_Train_Trip_reset_act_partial =
        tr_1_guard_Waiting_Driver_Selection_SM_Train_Trip;
      outC->SM_Train_Trip_reset_act = _245_SM_Train_Trip_reset_act_partial;
      break;
    case SSM_st_SN_Mode_SM_Train_Trip :
      _242_SM_Train_Trip_reset_act_partial = kcg_false;
      outC->SM_Train_Trip_reset_act = _242_SM_Train_Trip_reset_act_partial;
      break;
    case SSM_st_UN_Mode_SM_Train_Trip :
      _239_SM_Train_Trip_reset_act_partial = kcg_false;
      outC->SM_Train_Trip_reset_act = _239_SM_Train_Trip_reset_act_partial;
      break;
    case SSM_st_SH_Mode_SM_Train_Trip :
      _236_SM_Train_Trip_reset_act_partial = kcg_false;
      outC->SM_Train_Trip_reset_act = _236_SM_Train_Trip_reset_act_partial;
      break;
    case SSM_st_Post_Trip_Mode_SM_Train_Trip :
      if (tr_1_guard_Post_Trip_Mode_SM_Train_Trip) {
        _233_SM_Train_Trip_reset_act_partial = kcg_true;
      }
      else if (tr_2_guard_Post_Trip_Mode_SM_Train_Trip) {
        _233_SM_Train_Trip_reset_act_partial = kcg_true;
      }
      else {
        _233_SM_Train_Trip_reset_act_partial = tr_3_guard_Post_Trip_Mode_SM_Train_Trip;
      }
      outC->SM_Train_Trip_reset_act = _233_SM_Train_Trip_reset_act_partial;
      break;
    case SSM_st_Trip_Mode_Waiting_Ack_SM_Train_Trip :
      _230_SM_Train_Trip_reset_act_partial =
        tr_1_guard_Trip_Mode_Waiting_Ack_SM_Train_Trip;
      outC->SM_Train_Trip_reset_act = _230_SM_Train_Trip_reset_act_partial;
      break;
    case SSM_st_Trip_Mode_SM_Train_Trip :
      _227_SM_Train_Trip_reset_act_partial = tr_1_guard_Trip_Mode_SM_Train_Trip;
      outC->SM_Train_Trip_reset_act = _227_SM_Train_Trip_reset_act_partial;
      break;
    case SSM_st_Train_Trip_procedure_off_SM_Train_Trip :
      SM_Train_Trip_reset_act_partial =
        tr_1_guard_Train_Trip_procedure_off_SM_Train_Trip;
      outC->SM_Train_Trip_reset_act = SM_Train_Trip_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM_Train_Trip: */
  switch (outC->SM_Train_Trip_state_act) {
    case SSM_st_Procedure_SH_Initiated_By_Driver_SM_Train_Trip :
      if (outC->SM_Train_Trip_reset_act) {
        /* SM_Train_Trip:Procedure_SH_Initiated_By_Driver:_L15=(Procedures::SH_Initiated_By_Driver_On#1)/ */
        SH_Initiated_By_Driver_On_reset_Procedures(
          &outC->Context_SH_Initiated_By_Driver_On_1);
      }
      /* SM_Train_Trip:Procedure_SH_Initiated_By_Driver:_L15=(Procedures::SH_Initiated_By_Driver_On#1)/ */
      SH_Initiated_By_Driver_On_Procedures(
        outC->_L11_Procedure_SH_Initiated_By_Driver_SM_Train_Trip,
        outC->_L12_Procedure_SH_Initiated_By_Driver_SM_Train_Trip,
        outC->_L13_Procedure_SH_Initiated_By_Driver_SM_Train_Trip,
        outC->_L14_Procedure_SH_Initiated_By_Driver_SM_Train_Trip,
        &outC->Context_SH_Initiated_By_Driver_On_1);
      outC->_L15_Procedure_SH_Initiated_By_Driver_SM_Train_Trip =
        outC->Context_SH_Initiated_By_Driver_On_1.Clean_BG_List_SH_Area;
      outC->_L16_Procedure_SH_Initiated_By_Driver_SM_Train_Trip =
        outC->Context_SH_Initiated_By_Driver_On_1.Condition5;
      outC->_L17_Procedure_SH_Initiated_By_Driver_SM_Train_Trip =
        outC->Context_SH_Initiated_By_Driver_On_1.Condition6;
      outC->_L18_Procedure_SH_Initiated_By_Driver_SM_Train_Trip =
        outC->Context_SH_Initiated_By_Driver_On_1.End_Of_Mission_Procedure_Req;
      outC->_L19_Procedure_SH_Initiated_By_Driver_SM_Train_Trip =
        outC->Context_SH_Initiated_By_Driver_On_1.SH_Refused_By_RBC_To_DMI;
      outC->_L20_Procedure_SH_Initiated_By_Driver_SM_Train_Trip =
        outC->Context_SH_Initiated_By_Driver_On_1.Request_For_SH_To_RBC;
      _222_SH_Refused_By_RBC_To_DMI_partial =
        outC->_L19_Procedure_SH_Initiated_By_Driver_SM_Train_Trip;
      _221_Request_For_SH_To_RBC_partial =
        outC->_L20_Procedure_SH_Initiated_By_Driver_SM_Train_Trip;
      _219_End_Of_Mission_Procedure_Req_partial =
        outC->_L18_Procedure_SH_Initiated_By_Driver_SM_Train_Trip;
      _209_Condition_6_partial =
        outC->_L17_Procedure_SH_Initiated_By_Driver_SM_Train_Trip;
      _208_Condition_5_partial =
        outC->_L16_Procedure_SH_Initiated_By_Driver_SM_Train_Trip;
      _206_Clean_BG_List_SH_Area_partial =
        outC->_L15_Procedure_SH_Initiated_By_Driver_SM_Train_Trip;
      outC->Ack_LS_Req_To_Driver = _201_Ack_LS_Req_To_Driver_partial;
      outC->Ack_OS_Req_To_Driver = _202_Ack_OS_Req_To_Driver_partial;
      outC->Ack_SH_Req_To_Driver = _203_Ack_SH_Req_To_Driver_partial;
      outC->Ack_SR_Req_To_Driver = _204_Ack_SR_Req_To_Driver_partial;
      outC->Ack_TR_Req_To_Driver = _205_Ack_TR_Req_To_Driver_partial;
      outC->Clean_BG_List_SH_Area = _206_Clean_BG_List_SH_Area_partial;
      outC->Condition_Trip = _207_Condition_Trip_partial;
      outC->Condition_5 = _208_Condition_5_partial;
      outC->Condition_6 = _209_Condition_6_partial;
      outC->Condition_7 = _210_Condition_7_partial;
      outC->Condition_8 = _211_Condition_8_partial;
      outC->Condition_31 = _212_Condition_31_partial;
      outC->Condition_15 = _213_Condition_15_partial;
      outC->Condition_50 = _214_Condition_50_partial;
      outC->Condition_62 = _215_Condition_62_partial;
      outC->Condition_63 = _216_Condition_63_partial;
      outC->Condition_68 = _217_Condition_68_partial;
      outC->Condition_70 = _218_Condition_70_partial;
      outC->End_Of_Mission_Procedure_Req = _219_End_Of_Mission_Procedure_Req_partial;
      outC->MA_Req_To_RBC = _220_MA_Req_To_RBC_partial;
      outC->Request_For_SH_To_RBC = _221_Request_For_SH_To_RBC_partial;
      outC->SH_Refused_By_RBC_To_DMI = _222_SH_Refused_By_RBC_To_DMI_partial;
      outC->SM_Train_Trip_state_nxt = _223_SM_Train_Trip_state_nxt_partial;
      break;
    case SSM_st_Wait_RBC_Ack_SM_Train_Trip :
      _197_SH_Refused_By_RBC_To_DMI_partial = kcg_false;
      _196_Request_For_SH_To_RBC_partial = kcg_false;
      _195_MA_Req_To_RBC_partial = kcg_false;
      _194_End_Of_Mission_Procedure_Req_partial = kcg_false;
      _193_Condition_70_partial = kcg_false;
      _192_Condition_68_partial = kcg_false;
      _191_Condition_63_partial = kcg_false;
      _190_Condition_62_partial = kcg_false;
      _189_Condition_50_partial = kcg_false;
      _188_Condition_15_partial = kcg_false;
      _187_Condition_31_partial = kcg_false;
      _186_Condition_8_partial = kcg_false;
      _185_Condition_7_partial = kcg_false;
      _184_Condition_6_partial = kcg_false;
      _183_Condition_5_partial = kcg_false;
      _182_Condition_Trip_partial = kcg_false;
      _181_Clean_BG_List_SH_Area_partial = kcg_false;
      _180_Ack_TR_Req_To_Driver_partial = kcg_false;
      _179_Ack_SR_Req_To_Driver_partial = kcg_false;
      _178_Ack_SH_Req_To_Driver_partial = kcg_false;
      _177_Ack_OS_Req_To_Driver_partial = kcg_false;
      _176_Ack_LS_Req_To_Driver_partial = kcg_false;
      _200_SM_Train_Trip_fired_partial = outC->SM_Train_Trip_fired_strong;
      _199_SM_Train_Trip_reset_nxt_partial = kcg_false;
      _198_SM_Train_Trip_state_nxt_partial = SSM_st_Wait_RBC_Ack_SM_Train_Trip;
      outC->Ack_LS_Req_To_Driver = _176_Ack_LS_Req_To_Driver_partial;
      outC->Ack_OS_Req_To_Driver = _177_Ack_OS_Req_To_Driver_partial;
      outC->Ack_SH_Req_To_Driver = _178_Ack_SH_Req_To_Driver_partial;
      outC->Ack_SR_Req_To_Driver = _179_Ack_SR_Req_To_Driver_partial;
      outC->Ack_TR_Req_To_Driver = _180_Ack_TR_Req_To_Driver_partial;
      outC->Clean_BG_List_SH_Area = _181_Clean_BG_List_SH_Area_partial;
      outC->Condition_Trip = _182_Condition_Trip_partial;
      outC->Condition_5 = _183_Condition_5_partial;
      outC->Condition_6 = _184_Condition_6_partial;
      outC->Condition_7 = _185_Condition_7_partial;
      outC->Condition_8 = _186_Condition_8_partial;
      outC->Condition_31 = _187_Condition_31_partial;
      outC->Condition_15 = _188_Condition_15_partial;
      outC->Condition_50 = _189_Condition_50_partial;
      outC->Condition_62 = _190_Condition_62_partial;
      outC->Condition_63 = _191_Condition_63_partial;
      outC->Condition_68 = _192_Condition_68_partial;
      outC->Condition_70 = _193_Condition_70_partial;
      outC->End_Of_Mission_Procedure_Req = _194_End_Of_Mission_Procedure_Req_partial;
      outC->MA_Req_To_RBC = _195_MA_Req_To_RBC_partial;
      outC->Request_For_SH_To_RBC = _196_Request_For_SH_To_RBC_partial;
      outC->SH_Refused_By_RBC_To_DMI = _197_SH_Refused_By_RBC_To_DMI_partial;
      outC->SM_Train_Trip_state_nxt = _198_SM_Train_Trip_state_nxt_partial;
      break;
    case SSM_st_Waiting_Driver_Selection_SM_Train_Trip :
      _172_SH_Refused_By_RBC_To_DMI_partial = kcg_false;
      _171_Request_For_SH_To_RBC_partial = kcg_false;
      _169_End_Of_Mission_Procedure_Req_partial = kcg_false;
      _167_Condition_68_partial = kcg_false;
      _166_Condition_63_partial = kcg_false;
      _165_Condition_62_partial = kcg_false;
      _160_Condition_7_partial = kcg_false;
      _159_Condition_6_partial = kcg_false;
      _158_Condition_5_partial = kcg_false;
      _157_Condition_Trip_partial = kcg_false;
      _156_Clean_BG_List_SH_Area_partial = kcg_false;
      _155_Ack_TR_Req_To_Driver_partial = kcg_false;
      _175_SM_Train_Trip_fired_partial = outC->SM_Train_Trip_fired_strong;
      _174_SM_Train_Trip_reset_nxt_partial = kcg_false;
      _173_SM_Train_Trip_state_nxt_partial =
        SSM_st_Waiting_Driver_Selection_SM_Train_Trip;
      outC->_L11_Waiting_Driver_Selection_SM_Train_Trip = Current_Level;
      outC->_L12_Waiting_Driver_Selection_SM_Train_Trip = Driver_Ack_LS;
      outC->_L13_Waiting_Driver_Selection_SM_Train_Trip = Driver_Ack_OS;
      outC->_L16_Waiting_Driver_Selection_SM_Train_Trip = Driver_Ack_SH;
      outC->_L17_Waiting_Driver_Selection_SM_Train_Trip = Driver_Ack_SR;
      outC->_L14_Waiting_Driver_Selection_SM_Train_Trip = Driver_Req_Start;
      outC->_L18_Waiting_Driver_Selection_SM_Train_Trip = MA_SSP_Gradiant_Available;
      kcg_copy_T_Mode_Profile_Level_And_Mode_Types_Pkg(
        &outC->_L19_Waiting_Driver_Selection_SM_Train_Trip,
        Mode_Profile_On_Board);
      outC->_L20_Waiting_Driver_Selection_SM_Train_Trip = RBC_Authorizes_SR;
      if (outC->SM_Train_Trip_reset_act) {
        /* SM_Train_Trip:Waiting_Driver_Selection:_L1=(Procedures::Procedure_Start_L1_L2_L3#1)/ */
        Procedure_Start_L1_L2_L3_reset_Procedures(
          &outC->Context_Procedure_Start_L1_L2_L3_1);
      }
      /* SM_Train_Trip:Waiting_Driver_Selection:_L1=(Procedures::Procedure_Start_L1_L2_L3#1)/ */
      Procedure_Start_L1_L2_L3_Procedures(
        outC->_L11_Waiting_Driver_Selection_SM_Train_Trip,
        outC->_L12_Waiting_Driver_Selection_SM_Train_Trip,
        outC->_L13_Waiting_Driver_Selection_SM_Train_Trip,
        outC->_L16_Waiting_Driver_Selection_SM_Train_Trip,
        outC->_L17_Waiting_Driver_Selection_SM_Train_Trip,
        outC->_L14_Waiting_Driver_Selection_SM_Train_Trip,
        outC->_L18_Waiting_Driver_Selection_SM_Train_Trip,
        &outC->_L19_Waiting_Driver_Selection_SM_Train_Trip,
        outC->_L20_Waiting_Driver_Selection_SM_Train_Trip,
        &outC->Context_Procedure_Start_L1_L2_L3_1);
      outC->_L1_Waiting_Driver_Selection_SM_Train_Trip =
        outC->Context_Procedure_Start_L1_L2_L3_1.Ack_LS_Req_To_Driver;
      outC->_L2_Waiting_Driver_Selection_SM_Train_Trip =
        outC->Context_Procedure_Start_L1_L2_L3_1.Ack_OS_Req_To_Driver;
      outC->_L3_Waiting_Driver_Selection_SM_Train_Trip =
        outC->Context_Procedure_Start_L1_L2_L3_1.Ack_SH_Req_To_Driver;
      outC->_L4_Waiting_Driver_Selection_SM_Train_Trip =
        outC->Context_Procedure_Start_L1_L2_L3_1.Ack_SR_Req_To_Driver;
      outC->_L5_Waiting_Driver_Selection_SM_Train_Trip =
        outC->Context_Procedure_Start_L1_L2_L3_1.Condition_8;
      outC->_L6_Waiting_Driver_Selection_SM_Train_Trip =
        outC->Context_Procedure_Start_L1_L2_L3_1.Condition_10_31;
      outC->_L7_Waiting_Driver_Selection_SM_Train_Trip =
        outC->Context_Procedure_Start_L1_L2_L3_1.Condition_15;
      outC->_L8_Waiting_Driver_Selection_SM_Train_Trip =
        outC->Context_Procedure_Start_L1_L2_L3_1.Condition_50;
      outC->_L9_Waiting_Driver_Selection_SM_Train_Trip =
        outC->Context_Procedure_Start_L1_L2_L3_1.Condition_70;
      outC->_L10_Waiting_Driver_Selection_SM_Train_Trip =
        outC->Context_Procedure_Start_L1_L2_L3_1.MA_Req_To_RBC;
      _170_MA_Req_To_RBC_partial = outC->_L10_Waiting_Driver_Selection_SM_Train_Trip;
      _168_Condition_70_partial = outC->_L9_Waiting_Driver_Selection_SM_Train_Trip;
      _164_Condition_50_partial = outC->_L8_Waiting_Driver_Selection_SM_Train_Trip;
      _163_Condition_15_partial = outC->_L7_Waiting_Driver_Selection_SM_Train_Trip;
      _162_Condition_31_partial = outC->_L6_Waiting_Driver_Selection_SM_Train_Trip;
      _161_Condition_8_partial = outC->_L5_Waiting_Driver_Selection_SM_Train_Trip;
      _154_Ack_SR_Req_To_Driver_partial =
        outC->_L4_Waiting_Driver_Selection_SM_Train_Trip;
      _153_Ack_SH_Req_To_Driver_partial =
        outC->_L3_Waiting_Driver_Selection_SM_Train_Trip;
      _152_Ack_OS_Req_To_Driver_partial =
        outC->_L2_Waiting_Driver_Selection_SM_Train_Trip;
      _151_Ack_LS_Req_To_Driver_partial =
        outC->_L1_Waiting_Driver_Selection_SM_Train_Trip;
      outC->Ack_LS_Req_To_Driver = _151_Ack_LS_Req_To_Driver_partial;
      outC->Ack_OS_Req_To_Driver = _152_Ack_OS_Req_To_Driver_partial;
      outC->Ack_SH_Req_To_Driver = _153_Ack_SH_Req_To_Driver_partial;
      outC->Ack_SR_Req_To_Driver = _154_Ack_SR_Req_To_Driver_partial;
      outC->Ack_TR_Req_To_Driver = _155_Ack_TR_Req_To_Driver_partial;
      outC->Clean_BG_List_SH_Area = _156_Clean_BG_List_SH_Area_partial;
      outC->Condition_Trip = _157_Condition_Trip_partial;
      outC->Condition_5 = _158_Condition_5_partial;
      outC->Condition_6 = _159_Condition_6_partial;
      outC->Condition_7 = _160_Condition_7_partial;
      outC->Condition_8 = _161_Condition_8_partial;
      outC->Condition_31 = _162_Condition_31_partial;
      outC->Condition_15 = _163_Condition_15_partial;
      outC->Condition_50 = _164_Condition_50_partial;
      outC->Condition_62 = _165_Condition_62_partial;
      outC->Condition_63 = _166_Condition_63_partial;
      outC->Condition_68 = _167_Condition_68_partial;
      outC->Condition_70 = _168_Condition_70_partial;
      outC->End_Of_Mission_Procedure_Req = _169_End_Of_Mission_Procedure_Req_partial;
      outC->MA_Req_To_RBC = _170_MA_Req_To_RBC_partial;
      outC->Request_For_SH_To_RBC = _171_Request_For_SH_To_RBC_partial;
      outC->SH_Refused_By_RBC_To_DMI = _172_SH_Refused_By_RBC_To_DMI_partial;
      outC->SM_Train_Trip_state_nxt = _173_SM_Train_Trip_state_nxt_partial;
      break;
    case SSM_st_SN_Mode_SM_Train_Trip :
      _147_SH_Refused_By_RBC_To_DMI_partial = kcg_false;
      _146_Request_For_SH_To_RBC_partial = kcg_false;
      _145_MA_Req_To_RBC_partial = kcg_false;
      _144_End_Of_Mission_Procedure_Req_partial = kcg_false;
      _143_Condition_70_partial = kcg_false;
      _142_Condition_68_partial = kcg_false;
      _140_Condition_62_partial = kcg_false;
      _139_Condition_50_partial = kcg_false;
      _138_Condition_15_partial = kcg_false;
      _137_Condition_31_partial = kcg_false;
      _136_Condition_8_partial = kcg_false;
      _135_Condition_7_partial = kcg_false;
      _134_Condition_6_partial = kcg_false;
      _133_Condition_5_partial = kcg_false;
      _132_Condition_Trip_partial = kcg_false;
      _131_Clean_BG_List_SH_Area_partial = kcg_false;
      _130_Ack_TR_Req_To_Driver_partial = kcg_false;
      _129_Ack_SR_Req_To_Driver_partial = kcg_false;
      _128_Ack_SH_Req_To_Driver_partial = kcg_false;
      _127_Ack_OS_Req_To_Driver_partial = kcg_false;
      _126_Ack_LS_Req_To_Driver_partial = kcg_false;
      _150_SM_Train_Trip_fired_partial = outC->SM_Train_Trip_fired_strong;
      _149_SM_Train_Trip_reset_nxt_partial = kcg_false;
      _148_SM_Train_Trip_state_nxt_partial = SSM_st_SN_Mode_SM_Train_Trip;
      outC->_L1_SN_Mode_SM_Train_Trip = kcg_true;
      _141_Condition_63_partial = outC->_L1_SN_Mode_SM_Train_Trip;
      outC->Ack_LS_Req_To_Driver = _126_Ack_LS_Req_To_Driver_partial;
      outC->Ack_OS_Req_To_Driver = _127_Ack_OS_Req_To_Driver_partial;
      outC->Ack_SH_Req_To_Driver = _128_Ack_SH_Req_To_Driver_partial;
      outC->Ack_SR_Req_To_Driver = _129_Ack_SR_Req_To_Driver_partial;
      outC->Ack_TR_Req_To_Driver = _130_Ack_TR_Req_To_Driver_partial;
      outC->Clean_BG_List_SH_Area = _131_Clean_BG_List_SH_Area_partial;
      outC->Condition_Trip = _132_Condition_Trip_partial;
      outC->Condition_5 = _133_Condition_5_partial;
      outC->Condition_6 = _134_Condition_6_partial;
      outC->Condition_7 = _135_Condition_7_partial;
      outC->Condition_8 = _136_Condition_8_partial;
      outC->Condition_31 = _137_Condition_31_partial;
      outC->Condition_15 = _138_Condition_15_partial;
      outC->Condition_50 = _139_Condition_50_partial;
      outC->Condition_62 = _140_Condition_62_partial;
      outC->Condition_63 = _141_Condition_63_partial;
      outC->Condition_68 = _142_Condition_68_partial;
      outC->Condition_70 = _143_Condition_70_partial;
      outC->End_Of_Mission_Procedure_Req = _144_End_Of_Mission_Procedure_Req_partial;
      outC->MA_Req_To_RBC = _145_MA_Req_To_RBC_partial;
      outC->Request_For_SH_To_RBC = _146_Request_For_SH_To_RBC_partial;
      outC->SH_Refused_By_RBC_To_DMI = _147_SH_Refused_By_RBC_To_DMI_partial;
      outC->SM_Train_Trip_state_nxt = _148_SM_Train_Trip_state_nxt_partial;
      break;
    case SSM_st_UN_Mode_SM_Train_Trip :
      _122_SH_Refused_By_RBC_To_DMI_partial = kcg_false;
      _121_Request_For_SH_To_RBC_partial = kcg_false;
      _120_MA_Req_To_RBC_partial = kcg_false;
      _119_End_Of_Mission_Procedure_Req_partial = kcg_false;
      _118_Condition_70_partial = kcg_false;
      _117_Condition_68_partial = kcg_false;
      _116_Condition_63_partial = kcg_false;
      _114_Condition_50_partial = kcg_false;
      _113_Condition_15_partial = kcg_false;
      _112_Condition_31_partial = kcg_false;
      _111_Condition_8_partial = kcg_false;
      _110_Condition_7_partial = kcg_false;
      _109_Condition_6_partial = kcg_false;
      _108_Condition_5_partial = kcg_false;
      _107_Condition_Trip_partial = kcg_false;
      _106_Clean_BG_List_SH_Area_partial = kcg_false;
      _105_Ack_TR_Req_To_Driver_partial = kcg_false;
      _104_Ack_SR_Req_To_Driver_partial = kcg_false;
      _103_Ack_SH_Req_To_Driver_partial = kcg_false;
      _102_Ack_OS_Req_To_Driver_partial = kcg_false;
      _101_Ack_LS_Req_To_Driver_partial = kcg_false;
      _125_SM_Train_Trip_fired_partial = outC->SM_Train_Trip_fired_strong;
      _124_SM_Train_Trip_reset_nxt_partial = kcg_false;
      _123_SM_Train_Trip_state_nxt_partial = SSM_st_UN_Mode_SM_Train_Trip;
      outC->_L1_UN_Mode_SM_Train_Trip = kcg_true;
      _115_Condition_62_partial = outC->_L1_UN_Mode_SM_Train_Trip;
      outC->Ack_LS_Req_To_Driver = _101_Ack_LS_Req_To_Driver_partial;
      outC->Ack_OS_Req_To_Driver = _102_Ack_OS_Req_To_Driver_partial;
      outC->Ack_SH_Req_To_Driver = _103_Ack_SH_Req_To_Driver_partial;
      outC->Ack_SR_Req_To_Driver = _104_Ack_SR_Req_To_Driver_partial;
      outC->Ack_TR_Req_To_Driver = _105_Ack_TR_Req_To_Driver_partial;
      outC->Clean_BG_List_SH_Area = _106_Clean_BG_List_SH_Area_partial;
      outC->Condition_Trip = _107_Condition_Trip_partial;
      outC->Condition_5 = _108_Condition_5_partial;
      outC->Condition_6 = _109_Condition_6_partial;
      outC->Condition_7 = _110_Condition_7_partial;
      outC->Condition_8 = _111_Condition_8_partial;
      outC->Condition_31 = _112_Condition_31_partial;
      outC->Condition_15 = _113_Condition_15_partial;
      outC->Condition_50 = _114_Condition_50_partial;
      outC->Condition_62 = _115_Condition_62_partial;
      outC->Condition_63 = _116_Condition_63_partial;
      outC->Condition_68 = _117_Condition_68_partial;
      outC->Condition_70 = _118_Condition_70_partial;
      outC->End_Of_Mission_Procedure_Req = _119_End_Of_Mission_Procedure_Req_partial;
      outC->MA_Req_To_RBC = _120_MA_Req_To_RBC_partial;
      outC->Request_For_SH_To_RBC = _121_Request_For_SH_To_RBC_partial;
      outC->SH_Refused_By_RBC_To_DMI = _122_SH_Refused_By_RBC_To_DMI_partial;
      outC->SM_Train_Trip_state_nxt = _123_SM_Train_Trip_state_nxt_partial;
      break;
    case SSM_st_SH_Mode_SM_Train_Trip :
      _97_SH_Refused_By_RBC_To_DMI_partial = kcg_false;
      _96_Request_For_SH_To_RBC_partial = kcg_false;
      _95_MA_Req_To_RBC_partial = kcg_false;
      _94_End_Of_Mission_Procedure_Req_partial = kcg_false;
      _93_Condition_70_partial = kcg_false;
      _91_Condition_63_partial = kcg_false;
      _90_Condition_62_partial = kcg_false;
      _89_Condition_50_partial = kcg_false;
      _88_Condition_15_partial = kcg_false;
      _87_Condition_31_partial = kcg_false;
      _86_Condition_8_partial = kcg_false;
      _85_Condition_7_partial = kcg_false;
      _84_Condition_6_partial = kcg_false;
      _83_Condition_5_partial = kcg_false;
      _82_Condition_Trip_partial = kcg_false;
      _81_Clean_BG_List_SH_Area_partial = kcg_false;
      _80_Ack_TR_Req_To_Driver_partial = kcg_false;
      _79_Ack_SR_Req_To_Driver_partial = kcg_false;
      _78_Ack_SH_Req_To_Driver_partial = kcg_false;
      _77_Ack_OS_Req_To_Driver_partial = kcg_false;
      _76_Ack_LS_Req_To_Driver_partial = kcg_false;
      _100_SM_Train_Trip_fired_partial = outC->SM_Train_Trip_fired_strong;
      _99_SM_Train_Trip_reset_nxt_partial = kcg_false;
      _98_SM_Train_Trip_state_nxt_partial = SSM_st_SH_Mode_SM_Train_Trip;
      outC->_L1_SH_Mode_SM_Train_Trip = kcg_true;
      _92_Condition_68_partial = outC->_L1_SH_Mode_SM_Train_Trip;
      outC->Ack_LS_Req_To_Driver = _76_Ack_LS_Req_To_Driver_partial;
      outC->Ack_OS_Req_To_Driver = _77_Ack_OS_Req_To_Driver_partial;
      outC->Ack_SH_Req_To_Driver = _78_Ack_SH_Req_To_Driver_partial;
      outC->Ack_SR_Req_To_Driver = _79_Ack_SR_Req_To_Driver_partial;
      outC->Ack_TR_Req_To_Driver = _80_Ack_TR_Req_To_Driver_partial;
      outC->Clean_BG_List_SH_Area = _81_Clean_BG_List_SH_Area_partial;
      outC->Condition_Trip = _82_Condition_Trip_partial;
      outC->Condition_5 = _83_Condition_5_partial;
      outC->Condition_6 = _84_Condition_6_partial;
      outC->Condition_7 = _85_Condition_7_partial;
      outC->Condition_8 = _86_Condition_8_partial;
      outC->Condition_31 = _87_Condition_31_partial;
      outC->Condition_15 = _88_Condition_15_partial;
      outC->Condition_50 = _89_Condition_50_partial;
      outC->Condition_62 = _90_Condition_62_partial;
      outC->Condition_63 = _91_Condition_63_partial;
      outC->Condition_68 = _92_Condition_68_partial;
      outC->Condition_70 = _93_Condition_70_partial;
      outC->End_Of_Mission_Procedure_Req = _94_End_Of_Mission_Procedure_Req_partial;
      outC->MA_Req_To_RBC = _95_MA_Req_To_RBC_partial;
      outC->Request_For_SH_To_RBC = _96_Request_For_SH_To_RBC_partial;
      outC->SH_Refused_By_RBC_To_DMI = _97_SH_Refused_By_RBC_To_DMI_partial;
      outC->SM_Train_Trip_state_nxt = _98_SM_Train_Trip_state_nxt_partial;
      break;
    case SSM_st_Post_Trip_Mode_SM_Train_Trip :
      _72_SH_Refused_By_RBC_To_DMI_partial = kcg_false;
      _71_Request_For_SH_To_RBC_partial = kcg_false;
      _70_MA_Req_To_RBC_partial = kcg_false;
      _69_End_Of_Mission_Procedure_Req_partial = kcg_false;
      _68_Condition_70_partial = kcg_false;
      _67_Condition_68_partial = kcg_false;
      _66_Condition_63_partial = kcg_false;
      _65_Condition_62_partial = kcg_false;
      _64_Condition_50_partial = kcg_false;
      _63_Condition_15_partial = kcg_false;
      _62_Condition_31_partial = kcg_false;
      _61_Condition_8_partial = kcg_false;
      _59_Condition_6_partial = kcg_false;
      _58_Condition_5_partial = kcg_false;
      _57_Condition_Trip_partial = kcg_false;
      _56_Clean_BG_List_SH_Area_partial = kcg_false;
      _55_Ack_TR_Req_To_Driver_partial = kcg_false;
      _54_Ack_SR_Req_To_Driver_partial = kcg_false;
      _53_Ack_SH_Req_To_Driver_partial = kcg_false;
      _52_Ack_OS_Req_To_Driver_partial = kcg_false;
      _51_Ack_LS_Req_To_Driver_partial = kcg_false;
      _75_SM_Train_Trip_fired_partial = outC->SM_Train_Trip_fired_strong;
      _74_SM_Train_Trip_reset_nxt_partial = kcg_false;
      _73_SM_Train_Trip_state_nxt_partial = SSM_st_Post_Trip_Mode_SM_Train_Trip;
      outC->_L1_Post_Trip_Mode_SM_Train_Trip = kcg_true;
      _60_Condition_7_partial = outC->_L1_Post_Trip_Mode_SM_Train_Trip;
      outC->Ack_LS_Req_To_Driver = _51_Ack_LS_Req_To_Driver_partial;
      outC->Ack_OS_Req_To_Driver = _52_Ack_OS_Req_To_Driver_partial;
      outC->Ack_SH_Req_To_Driver = _53_Ack_SH_Req_To_Driver_partial;
      outC->Ack_SR_Req_To_Driver = _54_Ack_SR_Req_To_Driver_partial;
      outC->Ack_TR_Req_To_Driver = _55_Ack_TR_Req_To_Driver_partial;
      outC->Clean_BG_List_SH_Area = _56_Clean_BG_List_SH_Area_partial;
      outC->Condition_Trip = _57_Condition_Trip_partial;
      outC->Condition_5 = _58_Condition_5_partial;
      outC->Condition_6 = _59_Condition_6_partial;
      outC->Condition_7 = _60_Condition_7_partial;
      outC->Condition_8 = _61_Condition_8_partial;
      outC->Condition_31 = _62_Condition_31_partial;
      outC->Condition_15 = _63_Condition_15_partial;
      outC->Condition_50 = _64_Condition_50_partial;
      outC->Condition_62 = _65_Condition_62_partial;
      outC->Condition_63 = _66_Condition_63_partial;
      outC->Condition_68 = _67_Condition_68_partial;
      outC->Condition_70 = _68_Condition_70_partial;
      outC->End_Of_Mission_Procedure_Req = _69_End_Of_Mission_Procedure_Req_partial;
      outC->MA_Req_To_RBC = _70_MA_Req_To_RBC_partial;
      outC->Request_For_SH_To_RBC = _71_Request_For_SH_To_RBC_partial;
      outC->SH_Refused_By_RBC_To_DMI = _72_SH_Refused_By_RBC_To_DMI_partial;
      outC->SM_Train_Trip_state_nxt = _73_SM_Train_Trip_state_nxt_partial;
      break;
    case SSM_st_Trip_Mode_Waiting_Ack_SM_Train_Trip :
      _47_SH_Refused_By_RBC_To_DMI_partial = kcg_false;
      _46_Request_For_SH_To_RBC_partial = kcg_false;
      _45_MA_Req_To_RBC_partial = kcg_false;
      _44_End_Of_Mission_Procedure_Req_partial = kcg_false;
      _43_Condition_70_partial = kcg_false;
      _42_Condition_68_partial = kcg_false;
      _41_Condition_63_partial = kcg_false;
      _40_Condition_62_partial = kcg_false;
      _39_Condition_50_partial = kcg_false;
      _38_Condition_15_partial = kcg_false;
      _37_Condition_31_partial = kcg_false;
      _36_Condition_8_partial = kcg_false;
      _35_Condition_7_partial = kcg_false;
      _34_Condition_6_partial = kcg_false;
      _33_Condition_5_partial = kcg_false;
      _31_Clean_BG_List_SH_Area_partial = kcg_false;
      _29_Ack_SR_Req_To_Driver_partial = kcg_false;
      _28_Ack_SH_Req_To_Driver_partial = kcg_false;
      _27_Ack_OS_Req_To_Driver_partial = kcg_false;
      _26_Ack_LS_Req_To_Driver_partial = kcg_false;
      _50_SM_Train_Trip_fired_partial = outC->SM_Train_Trip_fired_strong;
      _49_SM_Train_Trip_reset_nxt_partial = kcg_false;
      _48_SM_Train_Trip_state_nxt_partial =
        SSM_st_Trip_Mode_Waiting_Ack_SM_Train_Trip;
      outC->_L4_Trip_Mode_Waiting_Ack_SM_Train_Trip = kcg_true;
      _30_Ack_TR_Req_To_Driver_partial =
        outC->_L4_Trip_Mode_Waiting_Ack_SM_Train_Trip;
      outC->_L3_Trip_Mode_Waiting_Ack_SM_Train_Trip = kcg_true;
      _32_Condition_Trip_partial = outC->_L3_Trip_Mode_Waiting_Ack_SM_Train_Trip;
      outC->Ack_LS_Req_To_Driver = _26_Ack_LS_Req_To_Driver_partial;
      outC->Ack_OS_Req_To_Driver = _27_Ack_OS_Req_To_Driver_partial;
      outC->Ack_SH_Req_To_Driver = _28_Ack_SH_Req_To_Driver_partial;
      outC->Ack_SR_Req_To_Driver = _29_Ack_SR_Req_To_Driver_partial;
      outC->Ack_TR_Req_To_Driver = _30_Ack_TR_Req_To_Driver_partial;
      outC->Clean_BG_List_SH_Area = _31_Clean_BG_List_SH_Area_partial;
      outC->Condition_Trip = _32_Condition_Trip_partial;
      outC->Condition_5 = _33_Condition_5_partial;
      outC->Condition_6 = _34_Condition_6_partial;
      outC->Condition_7 = _35_Condition_7_partial;
      outC->Condition_8 = _36_Condition_8_partial;
      outC->Condition_31 = _37_Condition_31_partial;
      outC->Condition_15 = _38_Condition_15_partial;
      outC->Condition_50 = _39_Condition_50_partial;
      outC->Condition_62 = _40_Condition_62_partial;
      outC->Condition_63 = _41_Condition_63_partial;
      outC->Condition_68 = _42_Condition_68_partial;
      outC->Condition_70 = _43_Condition_70_partial;
      outC->End_Of_Mission_Procedure_Req = _44_End_Of_Mission_Procedure_Req_partial;
      outC->MA_Req_To_RBC = _45_MA_Req_To_RBC_partial;
      outC->Request_For_SH_To_RBC = _46_Request_For_SH_To_RBC_partial;
      outC->SH_Refused_By_RBC_To_DMI = _47_SH_Refused_By_RBC_To_DMI_partial;
      outC->SM_Train_Trip_state_nxt = _48_SM_Train_Trip_state_nxt_partial;
      break;
    case SSM_st_Trip_Mode_SM_Train_Trip :
      _22_SH_Refused_By_RBC_To_DMI_partial = kcg_false;
      _21_Request_For_SH_To_RBC_partial = kcg_false;
      _20_MA_Req_To_RBC_partial = kcg_false;
      _19_End_Of_Mission_Procedure_Req_partial = kcg_false;
      _18_Condition_70_partial = kcg_false;
      _17_Condition_68_partial = kcg_false;
      _16_Condition_63_partial = kcg_false;
      _15_Condition_62_partial = kcg_false;
      _14_Condition_50_partial = kcg_false;
      _13_Condition_15_partial = kcg_false;
      _12_Condition_31_partial = kcg_false;
      _11_Condition_8_partial = kcg_false;
      _10_Condition_7_partial = kcg_false;
      _9_Condition_6_partial = kcg_false;
      _8_Condition_5_partial = kcg_false;
      _6_Clean_BG_List_SH_Area_partial = kcg_false;
      _5_Ack_TR_Req_To_Driver_partial = kcg_false;
      _4_Ack_SR_Req_To_Driver_partial = kcg_false;
      _3_Ack_SH_Req_To_Driver_partial = kcg_false;
      _2_Ack_OS_Req_To_Driver_partial = kcg_false;
      _1_Ack_LS_Req_To_Driver_partial = kcg_false;
      _25_SM_Train_Trip_fired_partial = outC->SM_Train_Trip_fired_strong;
      _24_SM_Train_Trip_reset_nxt_partial = kcg_false;
      _23_SM_Train_Trip_state_nxt_partial = SSM_st_Trip_Mode_SM_Train_Trip;
      outC->_L1_Trip_Mode_SM_Train_Trip = kcg_true;
      _7_Condition_Trip_partial = outC->_L1_Trip_Mode_SM_Train_Trip;
      outC->Ack_LS_Req_To_Driver = _1_Ack_LS_Req_To_Driver_partial;
      outC->Ack_OS_Req_To_Driver = _2_Ack_OS_Req_To_Driver_partial;
      outC->Ack_SH_Req_To_Driver = _3_Ack_SH_Req_To_Driver_partial;
      outC->Ack_SR_Req_To_Driver = _4_Ack_SR_Req_To_Driver_partial;
      outC->Ack_TR_Req_To_Driver = _5_Ack_TR_Req_To_Driver_partial;
      outC->Clean_BG_List_SH_Area = _6_Clean_BG_List_SH_Area_partial;
      outC->Condition_Trip = _7_Condition_Trip_partial;
      outC->Condition_5 = _8_Condition_5_partial;
      outC->Condition_6 = _9_Condition_6_partial;
      outC->Condition_7 = _10_Condition_7_partial;
      outC->Condition_8 = _11_Condition_8_partial;
      outC->Condition_31 = _12_Condition_31_partial;
      outC->Condition_15 = _13_Condition_15_partial;
      outC->Condition_50 = _14_Condition_50_partial;
      outC->Condition_62 = _15_Condition_62_partial;
      outC->Condition_63 = _16_Condition_63_partial;
      outC->Condition_68 = _17_Condition_68_partial;
      outC->Condition_70 = _18_Condition_70_partial;
      outC->End_Of_Mission_Procedure_Req = _19_End_Of_Mission_Procedure_Req_partial;
      outC->MA_Req_To_RBC = _20_MA_Req_To_RBC_partial;
      outC->Request_For_SH_To_RBC = _21_Request_For_SH_To_RBC_partial;
      outC->SH_Refused_By_RBC_To_DMI = _22_SH_Refused_By_RBC_To_DMI_partial;
      outC->SM_Train_Trip_state_nxt = _23_SM_Train_Trip_state_nxt_partial;
      break;
    case SSM_st_Train_Trip_procedure_off_SM_Train_Trip :
      SH_Refused_By_RBC_To_DMI_partial = kcg_false;
      Request_For_SH_To_RBC_partial = kcg_false;
      MA_Req_To_RBC_partial = kcg_false;
      End_Of_Mission_Procedure_Req_partial = kcg_false;
      Condition_70_partial = kcg_false;
      Condition_68_partial = kcg_false;
      Condition_63_partial = kcg_false;
      Condition_62_partial = kcg_false;
      Condition_50_partial = kcg_false;
      Condition_15_partial = kcg_false;
      Condition_31_partial = kcg_false;
      Condition_8_partial = kcg_false;
      Condition_7_partial = kcg_false;
      Condition_6_partial = kcg_false;
      Condition_5_partial = kcg_false;
      Condition_Trip_partial = kcg_false;
      Clean_BG_List_SH_Area_partial = kcg_false;
      Ack_TR_Req_To_Driver_partial = kcg_false;
      Ack_SR_Req_To_Driver_partial = kcg_false;
      Ack_SH_Req_To_Driver_partial = kcg_false;
      Ack_OS_Req_To_Driver_partial = kcg_false;
      Ack_LS_Req_To_Driver_partial = kcg_false;
      SM_Train_Trip_fired_partial = outC->SM_Train_Trip_fired_strong;
      SM_Train_Trip_reset_nxt_partial = kcg_false;
      SM_Train_Trip_state_nxt_partial = SSM_st_Train_Trip_procedure_off_SM_Train_Trip;
      outC->Ack_LS_Req_To_Driver = Ack_LS_Req_To_Driver_partial;
      outC->Ack_OS_Req_To_Driver = Ack_OS_Req_To_Driver_partial;
      outC->Ack_SH_Req_To_Driver = Ack_SH_Req_To_Driver_partial;
      outC->Ack_SR_Req_To_Driver = Ack_SR_Req_To_Driver_partial;
      outC->Ack_TR_Req_To_Driver = Ack_TR_Req_To_Driver_partial;
      outC->Clean_BG_List_SH_Area = Clean_BG_List_SH_Area_partial;
      outC->Condition_Trip = Condition_Trip_partial;
      outC->Condition_5 = Condition_5_partial;
      outC->Condition_6 = Condition_6_partial;
      outC->Condition_7 = Condition_7_partial;
      outC->Condition_8 = Condition_8_partial;
      outC->Condition_31 = Condition_31_partial;
      outC->Condition_15 = Condition_15_partial;
      outC->Condition_50 = Condition_50_partial;
      outC->Condition_62 = Condition_62_partial;
      outC->Condition_63 = Condition_63_partial;
      outC->Condition_68 = Condition_68_partial;
      outC->Condition_70 = Condition_70_partial;
      outC->End_Of_Mission_Procedure_Req = End_Of_Mission_Procedure_Req_partial;
      outC->MA_Req_To_RBC = MA_Req_To_RBC_partial;
      outC->Request_For_SH_To_RBC = Request_For_SH_To_RBC_partial;
      outC->SH_Refused_By_RBC_To_DMI = SH_Refused_By_RBC_To_DMI_partial;
      outC->SM_Train_Trip_state_nxt = SM_Train_Trip_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM_Train_Trip_reset_sel = outC->SM_Train_Trip_reset_nxt;
  /* SM_Train_Trip: */
  switch (outC->SM_Train_Trip_state_act) {
    case SSM_st_Procedure_SH_Initiated_By_Driver_SM_Train_Trip :
      outC->SM_Train_Trip_reset_nxt = _224_SM_Train_Trip_reset_nxt_partial;
      outC->SM_Train_Trip_fired = _225_SM_Train_Trip_fired_partial;
      break;
    case SSM_st_Wait_RBC_Ack_SM_Train_Trip :
      outC->SM_Train_Trip_reset_nxt = _199_SM_Train_Trip_reset_nxt_partial;
      outC->SM_Train_Trip_fired = _200_SM_Train_Trip_fired_partial;
      break;
    case SSM_st_Waiting_Driver_Selection_SM_Train_Trip :
      outC->SM_Train_Trip_reset_nxt = _174_SM_Train_Trip_reset_nxt_partial;
      outC->SM_Train_Trip_fired = _175_SM_Train_Trip_fired_partial;
      break;
    case SSM_st_SN_Mode_SM_Train_Trip :
      outC->SM_Train_Trip_reset_nxt = _149_SM_Train_Trip_reset_nxt_partial;
      outC->SM_Train_Trip_fired = _150_SM_Train_Trip_fired_partial;
      break;
    case SSM_st_UN_Mode_SM_Train_Trip :
      outC->SM_Train_Trip_reset_nxt = _124_SM_Train_Trip_reset_nxt_partial;
      outC->SM_Train_Trip_fired = _125_SM_Train_Trip_fired_partial;
      break;
    case SSM_st_SH_Mode_SM_Train_Trip :
      outC->SM_Train_Trip_reset_nxt = _99_SM_Train_Trip_reset_nxt_partial;
      outC->SM_Train_Trip_fired = _100_SM_Train_Trip_fired_partial;
      break;
    case SSM_st_Post_Trip_Mode_SM_Train_Trip :
      outC->SM_Train_Trip_reset_nxt = _74_SM_Train_Trip_reset_nxt_partial;
      outC->SM_Train_Trip_fired = _75_SM_Train_Trip_fired_partial;
      break;
    case SSM_st_Trip_Mode_Waiting_Ack_SM_Train_Trip :
      outC->SM_Train_Trip_reset_nxt = _49_SM_Train_Trip_reset_nxt_partial;
      outC->SM_Train_Trip_fired = _50_SM_Train_Trip_fired_partial;
      break;
    case SSM_st_Trip_Mode_SM_Train_Trip :
      outC->SM_Train_Trip_reset_nxt = _24_SM_Train_Trip_reset_nxt_partial;
      outC->SM_Train_Trip_fired = _25_SM_Train_Trip_fired_partial;
      break;
    case SSM_st_Train_Trip_procedure_off_SM_Train_Trip :
      outC->SM_Train_Trip_reset_nxt = SM_Train_Trip_reset_nxt_partial;
      outC->SM_Train_Trip_fired = SM_Train_Trip_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void Procedure_Train_Trip_init_Procedures(
  outC_Procedure_Train_Trip_Procedures *outC)
{
  outC->_L2 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L11 = NP_Level_And_Mode_Types_Pkg;
  outC->_L13 = kcg_true;
  outC->_L15 = kcg_true;
  outC->_L16 = kcg_true;
  outC->_L17 = kcg_true;
  outC->Loc_Procedure_Possible = kcg_true;
  outC->SM_Train_Trip_fired = SSM_TR_no_trans_SM_Train_Trip;
  outC->SM_Train_Trip_fired_strong = SSM_TR_no_trans_SM_Train_Trip;
  outC->SM_Train_Trip_state_act = SSM_st_Train_Trip_procedure_off_SM_Train_Trip;
  outC->SM_Train_Trip_state_sel = SSM_st_Train_Trip_procedure_off_SM_Train_Trip;
  outC->_L15_Procedure_SH_Initiated_By_Driver_SM_Train_Trip = kcg_true;
  outC->_L16_Procedure_SH_Initiated_By_Driver_SM_Train_Trip = kcg_true;
  outC->_L17_Procedure_SH_Initiated_By_Driver_SM_Train_Trip = kcg_true;
  outC->_L18_Procedure_SH_Initiated_By_Driver_SM_Train_Trip = kcg_true;
  outC->_L19_Procedure_SH_Initiated_By_Driver_SM_Train_Trip = kcg_true;
  outC->_L20_Procedure_SH_Initiated_By_Driver_SM_Train_Trip = kcg_true;
  outC->_L14_Procedure_SH_Initiated_By_Driver_SM_Train_Trip = kcg_true;
  outC->_L13_Procedure_SH_Initiated_By_Driver_SM_Train_Trip = kcg_true;
  outC->_L12_Procedure_SH_Initiated_By_Driver_SM_Train_Trip = kcg_true;
  outC->_L11_Procedure_SH_Initiated_By_Driver_SM_Train_Trip = M_LEVEL_Level_0;
  outC->_L10_Waiting_Driver_Selection_SM_Train_Trip = kcg_true;
  outC->_L9_Waiting_Driver_Selection_SM_Train_Trip = kcg_true;
  outC->_L8_Waiting_Driver_Selection_SM_Train_Trip = kcg_true;
  outC->_L7_Waiting_Driver_Selection_SM_Train_Trip = kcg_true;
  outC->_L6_Waiting_Driver_Selection_SM_Train_Trip = kcg_true;
  outC->_L5_Waiting_Driver_Selection_SM_Train_Trip = kcg_true;
  outC->_L4_Waiting_Driver_Selection_SM_Train_Trip = kcg_true;
  outC->_L3_Waiting_Driver_Selection_SM_Train_Trip = kcg_true;
  outC->_L2_Waiting_Driver_Selection_SM_Train_Trip = kcg_true;
  outC->_L1_Waiting_Driver_Selection_SM_Train_Trip = kcg_true;
  outC->_L11_Waiting_Driver_Selection_SM_Train_Trip = M_LEVEL_Level_0;
  outC->_L12_Waiting_Driver_Selection_SM_Train_Trip = kcg_true;
  outC->_L13_Waiting_Driver_Selection_SM_Train_Trip = kcg_true;
  outC->_L14_Waiting_Driver_Selection_SM_Train_Trip = kcg_true;
  outC->_L16_Waiting_Driver_Selection_SM_Train_Trip = kcg_true;
  outC->_L17_Waiting_Driver_Selection_SM_Train_Trip = kcg_true;
  outC->_L18_Waiting_Driver_Selection_SM_Train_Trip = kcg_true;
  outC->_L19_Waiting_Driver_Selection_SM_Train_Trip.Distance = kcg_lit_int64(0);
  outC->_L19_Waiting_Driver_Selection_SM_Train_Trip.Mode =
    Profile_OS_Level_And_Mode_Types_Pkg;
  outC->_L19_Waiting_Driver_Selection_SM_Train_Trip.Speed = kcg_lit_int64(0);
  outC->_L19_Waiting_Driver_Selection_SM_Train_Trip.Length = kcg_lit_int64(0);
  outC->_L19_Waiting_Driver_Selection_SM_Train_Trip.Length_Ack = kcg_lit_int64(0);
  outC->_L20_Waiting_Driver_Selection_SM_Train_Trip = kcg_true;
  outC->_L1_SN_Mode_SM_Train_Trip = kcg_true;
  outC->_L1_UN_Mode_SM_Train_Trip = kcg_true;
  outC->_L1_SH_Mode_SM_Train_Trip = kcg_true;
  outC->_L1_Post_Trip_Mode_SM_Train_Trip = kcg_true;
  outC->_L3_Trip_Mode_Waiting_Ack_SM_Train_Trip = kcg_true;
  outC->_L4_Trip_Mode_Waiting_Ack_SM_Train_Trip = kcg_true;
  outC->_L1_Trip_Mode_SM_Train_Trip = kcg_true;
  outC->SH_Refused_By_RBC_To_DMI = kcg_true;
  outC->Request_For_SH_To_RBC = kcg_true;
  outC->MA_Req_To_RBC = kcg_true;
  outC->End_Of_Mission_Procedure_Req = kcg_true;
  outC->Condition_70 = kcg_true;
  outC->Condition_68 = kcg_true;
  outC->Condition_63 = kcg_true;
  outC->Condition_62 = kcg_true;
  outC->Condition_50 = kcg_true;
  outC->Condition_15 = kcg_true;
  outC->Condition_31 = kcg_true;
  outC->Condition_8 = kcg_true;
  outC->Condition_7 = kcg_true;
  outC->Condition_6 = kcg_true;
  outC->Condition_5 = kcg_true;
  outC->Condition_Trip = kcg_true;
  outC->Clean_BG_List_SH_Area = kcg_true;
  outC->Ack_TR_Req_To_Driver = kcg_true;
  outC->Ack_SR_Req_To_Driver = kcg_true;
  outC->Ack_SH_Req_To_Driver = kcg_true;
  outC->Ack_OS_Req_To_Driver = kcg_true;
  outC->Ack_LS_Req_To_Driver = kcg_true;
  /* SM_Train_Trip:Waiting_Driver_Selection:_L1=(Procedures::Procedure_Start_L1_L2_L3#1)/ */
  Procedure_Start_L1_L2_L3_init_Procedures(
    &outC->Context_Procedure_Start_L1_L2_L3_1);
  /* SM_Train_Trip:Procedure_SH_Initiated_By_Driver:_L15=(Procedures::SH_Initiated_By_Driver_On#1)/ */
  SH_Initiated_By_Driver_On_init_Procedures(
    &outC->Context_SH_Initiated_By_Driver_On_1);
  outC->SM_Train_Trip_reset_nxt = kcg_false;
  outC->SM_Train_Trip_reset_act = kcg_false;
  outC->SM_Train_Trip_state_nxt = SSM_st_Train_Trip_procedure_off_SM_Train_Trip;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Procedure_Train_Trip_reset_Procedures(
  outC_Procedure_Train_Trip_Procedures *outC)
{
  /* SM_Train_Trip:Waiting_Driver_Selection:_L1=(Procedures::Procedure_Start_L1_L2_L3#1)/ */
  Procedure_Start_L1_L2_L3_reset_Procedures(
    &outC->Context_Procedure_Start_L1_L2_L3_1);
  /* SM_Train_Trip:Procedure_SH_Initiated_By_Driver:_L15=(Procedures::SH_Initiated_By_Driver_On#1)/ */
  SH_Initiated_By_Driver_On_reset_Procedures(
    &outC->Context_SH_Initiated_By_Driver_On_1);
  outC->SM_Train_Trip_reset_nxt = kcg_false;
  outC->SM_Train_Trip_reset_act = kcg_false;
  outC->SM_Train_Trip_state_nxt = SSM_st_Train_Trip_procedure_off_SM_Train_Trip;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Procedure_Train_Trip_Procedures.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

