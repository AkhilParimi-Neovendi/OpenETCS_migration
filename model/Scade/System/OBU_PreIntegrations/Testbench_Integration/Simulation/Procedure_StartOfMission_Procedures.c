/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Procedure_StartOfMission_Procedures.h"

/* Procedures::Procedure_StartOfMission/ */
void Procedure_StartOfMission_Procedures(
  /* Current_Level/ */
  M_LEVEL Current_Level,
  /* Current_Mode/ */
  T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* Desk_Open/ */
  kcg_bool Desk_Open,
  /* Driver_Ack_LS/ */
  kcg_bool Driver_Ack_LS,
  /* Driver_Ack_OS/ */
  kcg_bool Driver_Ack_OS,
  /* Driver_Ack_SH/ */
  kcg_bool Driver_Ack_SH,
  /* Driver_Ack_SN/ */
  kcg_bool Driver_Ack_SN,
  /* Driver_Ack_SR/ */
  kcg_bool Driver_Ack_SR,
  /* Driver_Ack_UN/ */
  kcg_bool Driver_Ack_UN,
  /* Driver_Req_NL/ */
  kcg_bool Driver_Req_NL,
  /* Driver_Req_SH/ */
  kcg_bool Driver_Req_SH,
  /* Driver_Req_Start/ */
  kcg_bool Driver_Req_Start,
  /* MA_SSP_Gradiant_Available/ */
  kcg_bool MA_SSP_Gradiant_Available,
  /* Mode_Profile_On_Board/ */
  T_Mode_Profile_Level_And_Mode_Types_Pkg *Mode_Profile_On_Board,
  /* RBC_Authorizes_SR/ */
  kcg_bool RBC_Authorizes_SR,
  /* Shunting_Granted_By_RBC/ */
  kcg_bool Shunting_Granted_By_RBC,
  /* Train_Permitted_NL/ */
  kcg_bool Train_Permitted_NL,
  /* Train_Standstill/ */
  kcg_bool Train_Standstill,
  /* Valid_Train_Data_Stored/ */
  kcg_bool Valid_Train_Data_Stored,
  outC_Procedure_StartOfMission_Procedures *outC)
{
  /* Ack_LS_Req_To_Driver/ */
  static kcg_bool Ack_LS_Req_To_Driver_partial;
  /* Ack_OS_Req_To_Driver/ */
  static kcg_bool Ack_OS_Req_To_Driver_partial;
  /* Ack_SH_Req_To_Driver/ */
  static kcg_bool Ack_SH_Req_To_Driver_partial;
  /* Ack_SN_Req_To_Driver/ */
  static kcg_bool Ack_SN_Req_To_Driver_partial;
  /* Ack_SR_Req_To_Driver/ */
  static kcg_bool Ack_SR_Req_To_Driver_partial;
  /* Ack_UN_Req_To_Driver/ */
  static kcg_bool Ack_UN_Req_To_Driver_partial;
  /* Clean_BG_List_SH_Area/ */
  static kcg_bool Clean_BG_List_SH_Area_partial;
  /* Condition_5/ */
  static kcg_bool Condition_5_partial;
  /* Condition_6/ */
  static kcg_bool Condition_6_partial;
  /* Condition_8/ */
  static kcg_bool Condition_8_partial;
  /* Condition_10/ */
  static kcg_bool Condition_10_partial;
  /* Condition_15/ */
  static kcg_bool Condition_15_partial;
  /* Condition_46/ */
  static kcg_bool Condition_46_partial;
  /* Condition_50/ */
  static kcg_bool Condition_50_partial;
  /* Condition_58/ */
  static kcg_bool Condition_58_partial;
  /* Condition_60/ */
  static kcg_bool Condition_60_partial;
  /* Condition_70/ */
  static kcg_bool Condition_70_partial;
  /* EB_Requested/ */
  static kcg_bool EB_Requested_partial;
  /* End_Of_Mission_Procedure_Req/ */
  static kcg_bool End_Of_Mission_Procedure_Req_partial;
  /* MA_Req_To_RBC/ */
  static kcg_bool MA_Req_To_RBC_partial;
  /* Request_For_SH_To_RBC/ */
  static kcg_bool Request_For_SH_To_RBC_partial;
  /* SH_Refused_By_RBC_To_DMI/ */
  static kcg_bool SH_Refused_By_RBC_To_DMI_partial;
  /* SM_StartOfMissionProcedure: */
  static SSM_ST_SM_StartOfMissionProcedure SM_StartOfMissionProcedure_state_nxt_partial;
  /* SM_StartOfMissionProcedure: */
  static kcg_bool SM_StartOfMissionProcedure_reset_nxt_partial;
  /* SM_StartOfMissionProcedure: */
  static SSM_TR_SM_StartOfMissionProcedure SM_StartOfMissionProcedure_fired_partial;
  /* Ack_LS_Req_To_Driver/ */
  static kcg_bool _1_Ack_LS_Req_To_Driver_partial;
  /* Ack_OS_Req_To_Driver/ */
  static kcg_bool _2_Ack_OS_Req_To_Driver_partial;
  /* Ack_SH_Req_To_Driver/ */
  static kcg_bool _3_Ack_SH_Req_To_Driver_partial;
  /* Ack_SN_Req_To_Driver/ */
  static kcg_bool _4_Ack_SN_Req_To_Driver_partial;
  /* Ack_SR_Req_To_Driver/ */
  static kcg_bool _5_Ack_SR_Req_To_Driver_partial;
  /* Ack_UN_Req_To_Driver/ */
  static kcg_bool _6_Ack_UN_Req_To_Driver_partial;
  /* Clean_BG_List_SH_Area/ */
  static kcg_bool _7_Clean_BG_List_SH_Area_partial;
  /* Condition_5/ */
  static kcg_bool _8_Condition_5_partial;
  /* Condition_6/ */
  static kcg_bool _9_Condition_6_partial;
  /* Condition_8/ */
  static kcg_bool _10_Condition_8_partial;
  /* Condition_10/ */
  static kcg_bool _11_Condition_10_partial;
  /* Condition_15/ */
  static kcg_bool _12_Condition_15_partial;
  /* Condition_46/ */
  static kcg_bool _13_Condition_46_partial;
  /* Condition_50/ */
  static kcg_bool _14_Condition_50_partial;
  /* Condition_58/ */
  static kcg_bool _15_Condition_58_partial;
  /* Condition_60/ */
  static kcg_bool _16_Condition_60_partial;
  /* Condition_70/ */
  static kcg_bool _17_Condition_70_partial;
  /* EB_Requested/ */
  static kcg_bool _18_EB_Requested_partial;
  /* End_Of_Mission_Procedure_Req/ */
  static kcg_bool _19_End_Of_Mission_Procedure_Req_partial;
  /* MA_Req_To_RBC/ */
  static kcg_bool _20_MA_Req_To_RBC_partial;
  /* Request_For_SH_To_RBC/ */
  static kcg_bool _21_Request_For_SH_To_RBC_partial;
  /* SH_Refused_By_RBC_To_DMI/ */
  static kcg_bool _22_SH_Refused_By_RBC_To_DMI_partial;
  /* SM_StartOfMissionProcedure: */
  static SSM_ST_SM_StartOfMissionProcedure _23_SM_StartOfMissionProcedure_state_nxt_partial;
  /* SM_StartOfMissionProcedure: */
  static kcg_bool _24_SM_StartOfMissionProcedure_reset_nxt_partial;
  /* SM_StartOfMissionProcedure: */
  static SSM_TR_SM_StartOfMissionProcedure _25_SM_StartOfMissionProcedure_fired_partial;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
  static kcg_bool SM_SoM_On_reset_prv_Procedure_On_SM_StartOfMissionProcedure;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
  static kcg_bool SM_SoM_On_reset_sel_Procedure_On_SM_StartOfMissionProcedure;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
  static SSM_TR_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure SM_SoM_On_fired_strong_partial_Procedure_On_SM_StartOfMissionProcedure;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
  static kcg_bool SM_SoM_On_reset_act_partial_Procedure_On_SM_StartOfMissionProcedure;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
  static SSM_ST_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure SM_SoM_On_state_act_partial_Procedure_On_SM_StartOfMissionProcedure;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
  static SSM_TR_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure _26_SM_SoM_On_fired_strong_partial_Procedure_On_SM_StartOfMissionProcedure;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
  static kcg_bool _27_SM_SoM_On_reset_act_partial_Procedure_On_SM_StartOfMissionProcedure;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
  static SSM_ST_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure _28_SM_SoM_On_state_act_partial_Procedure_On_SM_StartOfMissionProcedure;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
  static SSM_TR_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure _29_SM_SoM_On_fired_strong_partial_Procedure_On_SM_StartOfMissionProcedure;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
  static kcg_bool _30_SM_SoM_On_reset_act_partial_Procedure_On_SM_StartOfMissionProcedure;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
  static SSM_ST_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure _31_SM_SoM_On_state_act_partial_Procedure_On_SM_StartOfMissionProcedure;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On:Level_NTC:<1> */
  static kcg_bool tr_1_guard_Level_NTC_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
  static SSM_TR_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure _32_SM_SoM_On_fired_strong_partial_Procedure_On_SM_StartOfMissionProcedure;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
  static kcg_bool _33_SM_SoM_On_reset_act_partial_Procedure_On_SM_StartOfMissionProcedure;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
  static SSM_ST_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure _34_SM_SoM_On_state_act_partial_Procedure_On_SM_StartOfMissionProcedure;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On:Level_0:<1> */
  static kcg_bool tr_1_guard_Level_0_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
  static SSM_TR_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure _35_SM_SoM_On_fired_strong_partial_Procedure_On_SM_StartOfMissionProcedure;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
  static kcg_bool _36_SM_SoM_On_reset_act_partial_Procedure_On_SM_StartOfMissionProcedure;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
  static SSM_ST_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure _37_SM_SoM_On_state_act_partial_Procedure_On_SM_StartOfMissionProcedure;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On:Waiting_Driver_Strating_Command:<1> */
  static kcg_bool tr_1_guard_Waiting_Driver_Strating_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On:Waiting_Driver_Strating_Command:<2> */
  static kcg_bool tr_2_guard_Waiting_Driver_Strating_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On:Waiting_Driver_Strating_Command:<2><1> */
  static kcg_bool tr_1_guard_2_Waiting_Driver_Strating_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On:Waiting_Driver_Strating_Command:<2><2> */
  static kcg_bool tr_2_guard_2_Waiting_Driver_Strating_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
  static SSM_TR_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure _38_SM_SoM_On_fired_strong_partial_Procedure_On_SM_StartOfMissionProcedure;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
  static kcg_bool _39_SM_SoM_On_reset_act_partial_Procedure_On_SM_StartOfMissionProcedure;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
  static SSM_ST_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure _40_SM_SoM_On_state_act_partial_Procedure_On_SM_StartOfMissionProcedure;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
  static SSM_TR_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure _41_SM_SoM_On_fired_strong_partial_Procedure_On_SM_StartOfMissionProcedure;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
  static kcg_bool _42_SM_SoM_On_reset_act_partial_Procedure_On_SM_StartOfMissionProcedure;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
  static SSM_ST_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure _43_SM_SoM_On_state_act_partial_Procedure_On_SM_StartOfMissionProcedure;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
  static SSM_TR_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure _44_SM_SoM_On_fired_strong_partial_Procedure_On_SM_StartOfMissionProcedure;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
  static kcg_bool _45_SM_SoM_On_reset_act_partial_Procedure_On_SM_StartOfMissionProcedure;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
  static SSM_ST_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure _46_SM_SoM_On_state_act_partial_Procedure_On_SM_StartOfMissionProcedure;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On:Waiting_Driver_Command:<1> */
  static kcg_bool tr_1_guard_Waiting_Driver_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On:Waiting_Driver_Command:<2> */
  static kcg_bool tr_2_guard_Waiting_Driver_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On:Waiting_Driver_Command:<3> */
  static kcg_bool tr_3_guard_Waiting_Driver_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
  static SSM_TR_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure _47_SM_SoM_On_fired_strong_partial_Procedure_On_SM_StartOfMissionProcedure;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
  static kcg_bool _48_SM_SoM_On_reset_act_partial_Procedure_On_SM_StartOfMissionProcedure;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
  static SSM_ST_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure _49_SM_SoM_On_state_act_partial_Procedure_On_SM_StartOfMissionProcedure;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
  static SSM_TR_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure SM_SoM_On_fired_partial_Procedure_On_SM_StartOfMissionProcedure;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
  static kcg_bool SM_SoM_On_reset_nxt_partial_Procedure_On_SM_StartOfMissionProcedure;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
  static SSM_ST_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure SM_SoM_On_state_nxt_partial_Procedure_On_SM_StartOfMissionProcedure;
  /* SH_Refused_By_RBC_To_DMI/ */
  static kcg_bool _50_SH_Refused_By_RBC_To_DMI_partial;
  /* Request_For_SH_To_RBC/ */
  static kcg_bool _51_Request_For_SH_To_RBC_partial;
  /* MA_Req_To_RBC/ */
  static kcg_bool _52_MA_Req_To_RBC_partial;
  /* End_Of_Mission_Procedure_Req/ */
  static kcg_bool _53_End_Of_Mission_Procedure_Req_partial;
  /* Condition_70/ */
  static kcg_bool _54_Condition_70_partial;
  /* Condition_60/ */
  static kcg_bool _55_Condition_60_partial;
  /* Condition_58/ */
  static kcg_bool _56_Condition_58_partial;
  /* Condition_50/ */
  static kcg_bool _57_Condition_50_partial;
  /* Condition_46/ */
  static kcg_bool _58_Condition_46_partial;
  /* Condition_15/ */
  static kcg_bool _59_Condition_15_partial;
  /* Condition_10/ */
  static kcg_bool _60_Condition_10_partial;
  /* Condition_8/ */
  static kcg_bool _61_Condition_8_partial;
  /* Condition_6/ */
  static kcg_bool _62_Condition_6_partial;
  /* Condition_5/ */
  static kcg_bool _63_Condition_5_partial;
  /* Clean_BG_List_SH_Area/ */
  static kcg_bool _64_Clean_BG_List_SH_Area_partial;
  /* Ack_UN_Req_To_Driver/ */
  static kcg_bool _65_Ack_UN_Req_To_Driver_partial;
  /* Ack_SR_Req_To_Driver/ */
  static kcg_bool _66_Ack_SR_Req_To_Driver_partial;
  /* Ack_SN_Req_To_Driver/ */
  static kcg_bool _67_Ack_SN_Req_To_Driver_partial;
  /* Ack_SH_Req_To_Driver/ */
  static kcg_bool _68_Ack_SH_Req_To_Driver_partial;
  /* Ack_OS_Req_To_Driver/ */
  static kcg_bool _69_Ack_OS_Req_To_Driver_partial;
  /* Ack_LS_Req_To_Driver/ */
  static kcg_bool _70_Ack_LS_Req_To_Driver_partial;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
  static SSM_TR_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure _71_SM_SoM_On_fired_partial_Procedure_On_SM_StartOfMissionProcedure;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
  static kcg_bool _72_SM_SoM_On_reset_nxt_partial_Procedure_On_SM_StartOfMissionProcedure;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
  static SSM_ST_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure _73_SM_SoM_On_state_nxt_partial_Procedure_On_SM_StartOfMissionProcedure;
  /* SH_Refused_By_RBC_To_DMI/ */
  static kcg_bool _74_SH_Refused_By_RBC_To_DMI_partial;
  /* Request_For_SH_To_RBC/ */
  static kcg_bool _75_Request_For_SH_To_RBC_partial;
  /* MA_Req_To_RBC/ */
  static kcg_bool _76_MA_Req_To_RBC_partial;
  /* End_Of_Mission_Procedure_Req/ */
  static kcg_bool _77_End_Of_Mission_Procedure_Req_partial;
  /* Condition_70/ */
  static kcg_bool _78_Condition_70_partial;
  /* Condition_60/ */
  static kcg_bool _79_Condition_60_partial;
  /* Condition_58/ */
  static kcg_bool _80_Condition_58_partial;
  /* Condition_50/ */
  static kcg_bool _81_Condition_50_partial;
  /* Condition_46/ */
  static kcg_bool _82_Condition_46_partial;
  /* Condition_15/ */
  static kcg_bool _83_Condition_15_partial;
  /* Condition_10/ */
  static kcg_bool _84_Condition_10_partial;
  /* Condition_8/ */
  static kcg_bool _85_Condition_8_partial;
  /* Condition_6/ */
  static kcg_bool _86_Condition_6_partial;
  /* Condition_5/ */
  static kcg_bool _87_Condition_5_partial;
  /* Clean_BG_List_SH_Area/ */
  static kcg_bool _88_Clean_BG_List_SH_Area_partial;
  /* Ack_UN_Req_To_Driver/ */
  static kcg_bool _89_Ack_UN_Req_To_Driver_partial;
  /* Ack_SR_Req_To_Driver/ */
  static kcg_bool _90_Ack_SR_Req_To_Driver_partial;
  /* Ack_SN_Req_To_Driver/ */
  static kcg_bool _91_Ack_SN_Req_To_Driver_partial;
  /* Ack_SH_Req_To_Driver/ */
  static kcg_bool _92_Ack_SH_Req_To_Driver_partial;
  /* Ack_OS_Req_To_Driver/ */
  static kcg_bool _93_Ack_OS_Req_To_Driver_partial;
  /* Ack_LS_Req_To_Driver/ */
  static kcg_bool _94_Ack_LS_Req_To_Driver_partial;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
  static SSM_TR_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure _95_SM_SoM_On_fired_partial_Procedure_On_SM_StartOfMissionProcedure;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
  static kcg_bool _96_SM_SoM_On_reset_nxt_partial_Procedure_On_SM_StartOfMissionProcedure;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
  static SSM_ST_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure _97_SM_SoM_On_state_nxt_partial_Procedure_On_SM_StartOfMissionProcedure;
  /* SH_Refused_By_RBC_To_DMI/ */
  static kcg_bool _98_SH_Refused_By_RBC_To_DMI_partial;
  /* Request_For_SH_To_RBC/ */
  static kcg_bool _99_Request_For_SH_To_RBC_partial;
  /* MA_Req_To_RBC/ */
  static kcg_bool _100_MA_Req_To_RBC_partial;
  /* End_Of_Mission_Procedure_Req/ */
  static kcg_bool _101_End_Of_Mission_Procedure_Req_partial;
  /* Condition_70/ */
  static kcg_bool _102_Condition_70_partial;
  /* Condition_60/ */
  static kcg_bool _103_Condition_60_partial;
  /* Condition_58/ */
  static kcg_bool _104_Condition_58_partial;
  /* Condition_50/ */
  static kcg_bool _105_Condition_50_partial;
  /* Condition_46/ */
  static kcg_bool _106_Condition_46_partial;
  /* Condition_15/ */
  static kcg_bool _107_Condition_15_partial;
  /* Condition_10/ */
  static kcg_bool _108_Condition_10_partial;
  /* Condition_8/ */
  static kcg_bool _109_Condition_8_partial;
  /* Condition_6/ */
  static kcg_bool _110_Condition_6_partial;
  /* Condition_5/ */
  static kcg_bool _111_Condition_5_partial;
  /* Clean_BG_List_SH_Area/ */
  static kcg_bool _112_Clean_BG_List_SH_Area_partial;
  /* Ack_UN_Req_To_Driver/ */
  static kcg_bool _113_Ack_UN_Req_To_Driver_partial;
  /* Ack_SR_Req_To_Driver/ */
  static kcg_bool _114_Ack_SR_Req_To_Driver_partial;
  /* Ack_SN_Req_To_Driver/ */
  static kcg_bool _115_Ack_SN_Req_To_Driver_partial;
  /* Ack_SH_Req_To_Driver/ */
  static kcg_bool _116_Ack_SH_Req_To_Driver_partial;
  /* Ack_OS_Req_To_Driver/ */
  static kcg_bool _117_Ack_OS_Req_To_Driver_partial;
  /* Ack_LS_Req_To_Driver/ */
  static kcg_bool _118_Ack_LS_Req_To_Driver_partial;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
  static SSM_TR_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure _119_SM_SoM_On_fired_partial_Procedure_On_SM_StartOfMissionProcedure;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
  static kcg_bool _120_SM_SoM_On_reset_nxt_partial_Procedure_On_SM_StartOfMissionProcedure;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
  static SSM_ST_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure _121_SM_SoM_On_state_nxt_partial_Procedure_On_SM_StartOfMissionProcedure;
  /* SH_Refused_By_RBC_To_DMI/ */
  static kcg_bool _122_SH_Refused_By_RBC_To_DMI_partial;
  /* Request_For_SH_To_RBC/ */
  static kcg_bool _123_Request_For_SH_To_RBC_partial;
  /* MA_Req_To_RBC/ */
  static kcg_bool _124_MA_Req_To_RBC_partial;
  /* End_Of_Mission_Procedure_Req/ */
  static kcg_bool _125_End_Of_Mission_Procedure_Req_partial;
  /* Condition_70/ */
  static kcg_bool _126_Condition_70_partial;
  /* Condition_60/ */
  static kcg_bool _127_Condition_60_partial;
  /* Condition_58/ */
  static kcg_bool _128_Condition_58_partial;
  /* Condition_50/ */
  static kcg_bool _129_Condition_50_partial;
  /* Condition_46/ */
  static kcg_bool _130_Condition_46_partial;
  /* Condition_15/ */
  static kcg_bool _131_Condition_15_partial;
  /* Condition_10/ */
  static kcg_bool _132_Condition_10_partial;
  /* Condition_8/ */
  static kcg_bool _133_Condition_8_partial;
  /* Condition_6/ */
  static kcg_bool _134_Condition_6_partial;
  /* Condition_5/ */
  static kcg_bool _135_Condition_5_partial;
  /* Clean_BG_List_SH_Area/ */
  static kcg_bool _136_Clean_BG_List_SH_Area_partial;
  /* Ack_UN_Req_To_Driver/ */
  static kcg_bool _137_Ack_UN_Req_To_Driver_partial;
  /* Ack_SR_Req_To_Driver/ */
  static kcg_bool _138_Ack_SR_Req_To_Driver_partial;
  /* Ack_SN_Req_To_Driver/ */
  static kcg_bool _139_Ack_SN_Req_To_Driver_partial;
  /* Ack_SH_Req_To_Driver/ */
  static kcg_bool _140_Ack_SH_Req_To_Driver_partial;
  /* Ack_OS_Req_To_Driver/ */
  static kcg_bool _141_Ack_OS_Req_To_Driver_partial;
  /* Ack_LS_Req_To_Driver/ */
  static kcg_bool _142_Ack_LS_Req_To_Driver_partial;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
  static SSM_TR_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure _143_SM_SoM_On_fired_partial_Procedure_On_SM_StartOfMissionProcedure;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
  static kcg_bool _144_SM_SoM_On_reset_nxt_partial_Procedure_On_SM_StartOfMissionProcedure;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
  static SSM_ST_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure _145_SM_SoM_On_state_nxt_partial_Procedure_On_SM_StartOfMissionProcedure;
  /* SH_Refused_By_RBC_To_DMI/ */
  static kcg_bool _146_SH_Refused_By_RBC_To_DMI_partial;
  /* Request_For_SH_To_RBC/ */
  static kcg_bool _147_Request_For_SH_To_RBC_partial;
  /* MA_Req_To_RBC/ */
  static kcg_bool _148_MA_Req_To_RBC_partial;
  /* End_Of_Mission_Procedure_Req/ */
  static kcg_bool _149_End_Of_Mission_Procedure_Req_partial;
  /* Condition_70/ */
  static kcg_bool _150_Condition_70_partial;
  /* Condition_60/ */
  static kcg_bool _151_Condition_60_partial;
  /* Condition_58/ */
  static kcg_bool _152_Condition_58_partial;
  /* Condition_50/ */
  static kcg_bool _153_Condition_50_partial;
  /* Condition_46/ */
  static kcg_bool _154_Condition_46_partial;
  /* Condition_15/ */
  static kcg_bool _155_Condition_15_partial;
  /* Condition_10/ */
  static kcg_bool _156_Condition_10_partial;
  /* Condition_8/ */
  static kcg_bool _157_Condition_8_partial;
  /* Condition_6/ */
  static kcg_bool _158_Condition_6_partial;
  /* Condition_5/ */
  static kcg_bool _159_Condition_5_partial;
  /* Clean_BG_List_SH_Area/ */
  static kcg_bool _160_Clean_BG_List_SH_Area_partial;
  /* Ack_UN_Req_To_Driver/ */
  static kcg_bool _161_Ack_UN_Req_To_Driver_partial;
  /* Ack_SR_Req_To_Driver/ */
  static kcg_bool _162_Ack_SR_Req_To_Driver_partial;
  /* Ack_SN_Req_To_Driver/ */
  static kcg_bool _163_Ack_SN_Req_To_Driver_partial;
  /* Ack_SH_Req_To_Driver/ */
  static kcg_bool _164_Ack_SH_Req_To_Driver_partial;
  /* Ack_OS_Req_To_Driver/ */
  static kcg_bool _165_Ack_OS_Req_To_Driver_partial;
  /* Ack_LS_Req_To_Driver/ */
  static kcg_bool _166_Ack_LS_Req_To_Driver_partial;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
  static SSM_TR_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure _167_SM_SoM_On_fired_partial_Procedure_On_SM_StartOfMissionProcedure;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
  static kcg_bool _168_SM_SoM_On_reset_nxt_partial_Procedure_On_SM_StartOfMissionProcedure;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
  static SSM_ST_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure _169_SM_SoM_On_state_nxt_partial_Procedure_On_SM_StartOfMissionProcedure;
  /* SH_Refused_By_RBC_To_DMI/ */
  static kcg_bool _170_SH_Refused_By_RBC_To_DMI_partial;
  /* Request_For_SH_To_RBC/ */
  static kcg_bool _171_Request_For_SH_To_RBC_partial;
  /* MA_Req_To_RBC/ */
  static kcg_bool _172_MA_Req_To_RBC_partial;
  /* End_Of_Mission_Procedure_Req/ */
  static kcg_bool _173_End_Of_Mission_Procedure_Req_partial;
  /* Condition_70/ */
  static kcg_bool _174_Condition_70_partial;
  /* Condition_60/ */
  static kcg_bool _175_Condition_60_partial;
  /* Condition_58/ */
  static kcg_bool _176_Condition_58_partial;
  /* Condition_50/ */
  static kcg_bool _177_Condition_50_partial;
  /* Condition_46/ */
  static kcg_bool _178_Condition_46_partial;
  /* Condition_15/ */
  static kcg_bool _179_Condition_15_partial;
  /* Condition_10/ */
  static kcg_bool _180_Condition_10_partial;
  /* Condition_8/ */
  static kcg_bool _181_Condition_8_partial;
  /* Condition_6/ */
  static kcg_bool _182_Condition_6_partial;
  /* Condition_5/ */
  static kcg_bool _183_Condition_5_partial;
  /* Clean_BG_List_SH_Area/ */
  static kcg_bool _184_Clean_BG_List_SH_Area_partial;
  /* Ack_UN_Req_To_Driver/ */
  static kcg_bool _185_Ack_UN_Req_To_Driver_partial;
  /* Ack_SR_Req_To_Driver/ */
  static kcg_bool _186_Ack_SR_Req_To_Driver_partial;
  /* Ack_SN_Req_To_Driver/ */
  static kcg_bool _187_Ack_SN_Req_To_Driver_partial;
  /* Ack_SH_Req_To_Driver/ */
  static kcg_bool _188_Ack_SH_Req_To_Driver_partial;
  /* Ack_OS_Req_To_Driver/ */
  static kcg_bool _189_Ack_OS_Req_To_Driver_partial;
  /* Ack_LS_Req_To_Driver/ */
  static kcg_bool _190_Ack_LS_Req_To_Driver_partial;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
  static SSM_TR_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure _191_SM_SoM_On_fired_partial_Procedure_On_SM_StartOfMissionProcedure;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
  static kcg_bool _192_SM_SoM_On_reset_nxt_partial_Procedure_On_SM_StartOfMissionProcedure;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
  static SSM_ST_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure _193_SM_SoM_On_state_nxt_partial_Procedure_On_SM_StartOfMissionProcedure;
  /* SH_Refused_By_RBC_To_DMI/ */
  static kcg_bool _194_SH_Refused_By_RBC_To_DMI_partial;
  /* Request_For_SH_To_RBC/ */
  static kcg_bool _195_Request_For_SH_To_RBC_partial;
  /* MA_Req_To_RBC/ */
  static kcg_bool _196_MA_Req_To_RBC_partial;
  /* End_Of_Mission_Procedure_Req/ */
  static kcg_bool _197_End_Of_Mission_Procedure_Req_partial;
  /* Condition_70/ */
  static kcg_bool _198_Condition_70_partial;
  /* Condition_60/ */
  static kcg_bool _199_Condition_60_partial;
  /* Condition_58/ */
  static kcg_bool _200_Condition_58_partial;
  /* Condition_50/ */
  static kcg_bool _201_Condition_50_partial;
  /* Condition_46/ */
  static kcg_bool _202_Condition_46_partial;
  /* Condition_15/ */
  static kcg_bool _203_Condition_15_partial;
  /* Condition_10/ */
  static kcg_bool _204_Condition_10_partial;
  /* Condition_8/ */
  static kcg_bool _205_Condition_8_partial;
  /* Condition_6/ */
  static kcg_bool _206_Condition_6_partial;
  /* Condition_5/ */
  static kcg_bool _207_Condition_5_partial;
  /* Clean_BG_List_SH_Area/ */
  static kcg_bool _208_Clean_BG_List_SH_Area_partial;
  /* Ack_UN_Req_To_Driver/ */
  static kcg_bool _209_Ack_UN_Req_To_Driver_partial;
  /* Ack_SR_Req_To_Driver/ */
  static kcg_bool _210_Ack_SR_Req_To_Driver_partial;
  /* Ack_SN_Req_To_Driver/ */
  static kcg_bool _211_Ack_SN_Req_To_Driver_partial;
  /* Ack_SH_Req_To_Driver/ */
  static kcg_bool _212_Ack_SH_Req_To_Driver_partial;
  /* Ack_OS_Req_To_Driver/ */
  static kcg_bool _213_Ack_OS_Req_To_Driver_partial;
  /* Ack_LS_Req_To_Driver/ */
  static kcg_bool _214_Ack_LS_Req_To_Driver_partial;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
  static SSM_TR_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure _215_SM_SoM_On_fired_partial_Procedure_On_SM_StartOfMissionProcedure;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
  static kcg_bool _216_SM_SoM_On_reset_nxt_partial_Procedure_On_SM_StartOfMissionProcedure;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
  static SSM_ST_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure _217_SM_SoM_On_state_nxt_partial_Procedure_On_SM_StartOfMissionProcedure;
  /* SH_Refused_By_RBC_To_DMI/ */
  static kcg_bool _218_SH_Refused_By_RBC_To_DMI_partial;
  /* Request_For_SH_To_RBC/ */
  static kcg_bool _219_Request_For_SH_To_RBC_partial;
  /* MA_Req_To_RBC/ */
  static kcg_bool _220_MA_Req_To_RBC_partial;
  /* End_Of_Mission_Procedure_Req/ */
  static kcg_bool _221_End_Of_Mission_Procedure_Req_partial;
  /* Condition_70/ */
  static kcg_bool _222_Condition_70_partial;
  /* Condition_60/ */
  static kcg_bool _223_Condition_60_partial;
  /* Condition_58/ */
  static kcg_bool _224_Condition_58_partial;
  /* Condition_50/ */
  static kcg_bool _225_Condition_50_partial;
  /* Condition_46/ */
  static kcg_bool _226_Condition_46_partial;
  /* Condition_15/ */
  static kcg_bool _227_Condition_15_partial;
  /* Condition_10/ */
  static kcg_bool _228_Condition_10_partial;
  /* Condition_8/ */
  static kcg_bool _229_Condition_8_partial;
  /* Condition_6/ */
  static kcg_bool _230_Condition_6_partial;
  /* Condition_5/ */
  static kcg_bool _231_Condition_5_partial;
  /* Clean_BG_List_SH_Area/ */
  static kcg_bool _232_Clean_BG_List_SH_Area_partial;
  /* Ack_UN_Req_To_Driver/ */
  static kcg_bool _233_Ack_UN_Req_To_Driver_partial;
  /* Ack_SR_Req_To_Driver/ */
  static kcg_bool _234_Ack_SR_Req_To_Driver_partial;
  /* Ack_SN_Req_To_Driver/ */
  static kcg_bool _235_Ack_SN_Req_To_Driver_partial;
  /* Ack_SH_Req_To_Driver/ */
  static kcg_bool _236_Ack_SH_Req_To_Driver_partial;
  /* Ack_OS_Req_To_Driver/ */
  static kcg_bool _237_Ack_OS_Req_To_Driver_partial;
  /* Ack_LS_Req_To_Driver/ */
  static kcg_bool _238_Ack_LS_Req_To_Driver_partial;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
  static SSM_TR_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure _239_SM_SoM_On_fired_partial_Procedure_On_SM_StartOfMissionProcedure;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
  static kcg_bool _240_SM_SoM_On_reset_nxt_partial_Procedure_On_SM_StartOfMissionProcedure;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
  static SSM_ST_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure _241_SM_SoM_On_state_nxt_partial_Procedure_On_SM_StartOfMissionProcedure;
  /* SH_Refused_By_RBC_To_DMI/ */
  static kcg_bool _242_SH_Refused_By_RBC_To_DMI_partial;
  /* Request_For_SH_To_RBC/ */
  static kcg_bool _243_Request_For_SH_To_RBC_partial;
  /* MA_Req_To_RBC/ */
  static kcg_bool _244_MA_Req_To_RBC_partial;
  /* End_Of_Mission_Procedure_Req/ */
  static kcg_bool _245_End_Of_Mission_Procedure_Req_partial;
  /* Condition_70/ */
  static kcg_bool _246_Condition_70_partial;
  /* Condition_60/ */
  static kcg_bool _247_Condition_60_partial;
  /* Condition_58/ */
  static kcg_bool _248_Condition_58_partial;
  /* Condition_50/ */
  static kcg_bool _249_Condition_50_partial;
  /* Condition_46/ */
  static kcg_bool _250_Condition_46_partial;
  /* Condition_15/ */
  static kcg_bool _251_Condition_15_partial;
  /* Condition_10/ */
  static kcg_bool _252_Condition_10_partial;
  /* Condition_8/ */
  static kcg_bool _253_Condition_8_partial;
  /* Condition_6/ */
  static kcg_bool _254_Condition_6_partial;
  /* Condition_5/ */
  static kcg_bool _255_Condition_5_partial;
  /* Clean_BG_List_SH_Area/ */
  static kcg_bool _256_Clean_BG_List_SH_Area_partial;
  /* Ack_UN_Req_To_Driver/ */
  static kcg_bool _257_Ack_UN_Req_To_Driver_partial;
  /* Ack_SR_Req_To_Driver/ */
  static kcg_bool _258_Ack_SR_Req_To_Driver_partial;
  /* Ack_SN_Req_To_Driver/ */
  static kcg_bool _259_Ack_SN_Req_To_Driver_partial;
  /* Ack_SH_Req_To_Driver/ */
  static kcg_bool _260_Ack_SH_Req_To_Driver_partial;
  /* Ack_OS_Req_To_Driver/ */
  static kcg_bool _261_Ack_OS_Req_To_Driver_partial;
  /* Ack_LS_Req_To_Driver/ */
  static kcg_bool _262_Ack_LS_Req_To_Driver_partial;
  /* Ack_LS_Req_To_Driver/ */
  static kcg_bool _263_Ack_LS_Req_To_Driver_partial;
  /* Ack_OS_Req_To_Driver/ */
  static kcg_bool _264_Ack_OS_Req_To_Driver_partial;
  /* Ack_SH_Req_To_Driver/ */
  static kcg_bool _265_Ack_SH_Req_To_Driver_partial;
  /* Ack_SN_Req_To_Driver/ */
  static kcg_bool _266_Ack_SN_Req_To_Driver_partial;
  /* Ack_SR_Req_To_Driver/ */
  static kcg_bool _267_Ack_SR_Req_To_Driver_partial;
  /* Ack_UN_Req_To_Driver/ */
  static kcg_bool _268_Ack_UN_Req_To_Driver_partial;
  /* Clean_BG_List_SH_Area/ */
  static kcg_bool _269_Clean_BG_List_SH_Area_partial;
  /* Condition_5/ */
  static kcg_bool _270_Condition_5_partial;
  /* Condition_6/ */
  static kcg_bool _271_Condition_6_partial;
  /* Condition_8/ */
  static kcg_bool _272_Condition_8_partial;
  /* Condition_10/ */
  static kcg_bool _273_Condition_10_partial;
  /* Condition_15/ */
  static kcg_bool _274_Condition_15_partial;
  /* Condition_46/ */
  static kcg_bool _275_Condition_46_partial;
  /* Condition_50/ */
  static kcg_bool _276_Condition_50_partial;
  /* Condition_58/ */
  static kcg_bool _277_Condition_58_partial;
  /* Condition_60/ */
  static kcg_bool _278_Condition_60_partial;
  /* Condition_70/ */
  static kcg_bool _279_Condition_70_partial;
  /* EB_Requested/ */
  static kcg_bool _280_EB_Requested_partial;
  /* End_Of_Mission_Procedure_Req/ */
  static kcg_bool _281_End_Of_Mission_Procedure_Req_partial;
  /* MA_Req_To_RBC/ */
  static kcg_bool _282_MA_Req_To_RBC_partial;
  /* Request_For_SH_To_RBC/ */
  static kcg_bool _283_Request_For_SH_To_RBC_partial;
  /* SH_Refused_By_RBC_To_DMI/ */
  static kcg_bool _284_SH_Refused_By_RBC_To_DMI_partial;
  /* SM_StartOfMissionProcedure: */
  static SSM_ST_SM_StartOfMissionProcedure _285_SM_StartOfMissionProcedure_state_nxt_partial;
  /* SM_StartOfMissionProcedure: */
  static kcg_bool _286_SM_StartOfMissionProcedure_reset_nxt_partial;
  /* SM_StartOfMissionProcedure: */
  static SSM_TR_SM_StartOfMissionProcedure _287_SM_StartOfMissionProcedure_fired_partial;
  /* SM_StartOfMissionProcedure: */
  static SSM_ST_SM_StartOfMissionProcedure SM_StartOfMissionProcedure_state_act_partial;
  /* SM_StartOfMissionProcedure: */
  static kcg_bool SM_StartOfMissionProcedure_reset_act_partial;
  /* SM_StartOfMissionProcedure: */
  static SSM_TR_SM_StartOfMissionProcedure SM_StartOfMissionProcedure_fired_strong_partial;
  /* SM_StartOfMissionProcedure:Procedure_Off:<1> */
  static kcg_bool tr_1_guard_Procedure_Off_SM_StartOfMissionProcedure;
  /* SM_StartOfMissionProcedure: */
  static SSM_ST_SM_StartOfMissionProcedure _288_SM_StartOfMissionProcedure_state_act_partial;
  /* SM_StartOfMissionProcedure: */
  static kcg_bool _289_SM_StartOfMissionProcedure_reset_act_partial;
  /* SM_StartOfMissionProcedure: */
  static SSM_TR_SM_StartOfMissionProcedure _290_SM_StartOfMissionProcedure_fired_strong_partial;
  /* SM_StartOfMissionProcedure:Procedure_On:<2> */
  static kcg_bool tr_2_guard_Procedure_On_SM_StartOfMissionProcedure;
  /* SM_StartOfMissionProcedure:Procedure_On:<1> */
  static kcg_bool tr_1_guard_Procedure_On_SM_StartOfMissionProcedure;
  /* SM_StartOfMissionProcedure: */
  static SSM_ST_SM_StartOfMissionProcedure _291_SM_StartOfMissionProcedure_state_act_partial;
  /* SM_StartOfMissionProcedure: */
  static kcg_bool _292_SM_StartOfMissionProcedure_reset_act_partial;
  /* SM_StartOfMissionProcedure: */
  static SSM_TR_SM_StartOfMissionProcedure _293_SM_StartOfMissionProcedure_fired_strong_partial;
  /* SM_StartOfMissionProcedure:EB_Requested:<1> */
  static kcg_bool tr_1_guard_EB_Requested_SM_StartOfMissionProcedure;
  /* SM_StartOfMissionProcedure: */
  static kcg_bool SM_StartOfMissionProcedure_reset_sel;
  /* SM_StartOfMissionProcedure: */
  static kcg_bool SM_StartOfMissionProcedure_reset_prv;

  outC->SM_StartOfMissionProcedure_state_sel =
    outC->SM_StartOfMissionProcedure_state_nxt;
  /* SM_StartOfMissionProcedure: */
  switch (outC->SM_StartOfMissionProcedure_state_sel) {
    case SSM_st_EB_Requested_SM_StartOfMissionProcedure :
      tr_1_guard_EB_Requested_SM_StartOfMissionProcedure = Train_Standstill;
      if (tr_1_guard_EB_Requested_SM_StartOfMissionProcedure) {
        _291_SM_StartOfMissionProcedure_state_act_partial =
          SSM_st_Procedure_Off_SM_StartOfMissionProcedure;
      }
      else {
        _291_SM_StartOfMissionProcedure_state_act_partial =
          SSM_st_EB_Requested_SM_StartOfMissionProcedure;
      }
      outC->SM_StartOfMissionProcedure_state_act =
        _291_SM_StartOfMissionProcedure_state_act_partial;
      break;
    case SSM_st_Procedure_On_SM_StartOfMissionProcedure :
      tr_2_guard_Procedure_On_SM_StartOfMissionProcedure = (!(Current_Mode ==
            SB_Level_And_Mode_Types_Pkg)) | (!Desk_Open);
      tr_1_guard_Procedure_On_SM_StartOfMissionProcedure = (Current_Mode ==
          SB_Level_And_Mode_Types_Pkg) & (!Train_Standstill);
      if (tr_1_guard_Procedure_On_SM_StartOfMissionProcedure) {
        _288_SM_StartOfMissionProcedure_state_act_partial =
          SSM_st_EB_Requested_SM_StartOfMissionProcedure;
      }
      else if (tr_2_guard_Procedure_On_SM_StartOfMissionProcedure) {
        _288_SM_StartOfMissionProcedure_state_act_partial =
          SSM_st_Procedure_Off_SM_StartOfMissionProcedure;
      }
      else {
        _288_SM_StartOfMissionProcedure_state_act_partial =
          SSM_st_Procedure_On_SM_StartOfMissionProcedure;
      }
      outC->SM_StartOfMissionProcedure_state_act =
        _288_SM_StartOfMissionProcedure_state_act_partial;
      break;
    case SSM_st_Procedure_Off_SM_StartOfMissionProcedure :
      tr_1_guard_Procedure_Off_SM_StartOfMissionProcedure = (Current_Mode ==
          SB_Level_And_Mode_Types_Pkg) & Train_Standstill & Desk_Open;
      if (tr_1_guard_Procedure_Off_SM_StartOfMissionProcedure) {
        SM_StartOfMissionProcedure_state_act_partial =
          SSM_st_Procedure_On_SM_StartOfMissionProcedure;
      }
      else {
        SM_StartOfMissionProcedure_state_act_partial =
          SSM_st_Procedure_Off_SM_StartOfMissionProcedure;
      }
      outC->SM_StartOfMissionProcedure_state_act =
        SM_StartOfMissionProcedure_state_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM_StartOfMissionProcedure_state_act) {
    case SSM_st_EB_Requested_SM_StartOfMissionProcedure :
      _284_SH_Refused_By_RBC_To_DMI_partial = kcg_false;
      _283_Request_For_SH_To_RBC_partial = kcg_false;
      _282_MA_Req_To_RBC_partial = kcg_false;
      _281_End_Of_Mission_Procedure_Req_partial = kcg_false;
      _279_Condition_70_partial = kcg_false;
      _278_Condition_60_partial = kcg_false;
      _277_Condition_58_partial = kcg_false;
      _276_Condition_50_partial = kcg_false;
      _275_Condition_46_partial = kcg_false;
      _274_Condition_15_partial = kcg_false;
      _273_Condition_10_partial = kcg_false;
      _272_Condition_8_partial = kcg_false;
      _271_Condition_6_partial = kcg_false;
      _270_Condition_5_partial = kcg_false;
      _269_Clean_BG_List_SH_Area_partial = kcg_false;
      _268_Ack_UN_Req_To_Driver_partial = kcg_false;
      _267_Ack_SR_Req_To_Driver_partial = kcg_false;
      _266_Ack_SN_Req_To_Driver_partial = kcg_false;
      _265_Ack_SH_Req_To_Driver_partial = kcg_false;
      _264_Ack_OS_Req_To_Driver_partial = kcg_false;
      _263_Ack_LS_Req_To_Driver_partial = kcg_false;
      break;
    default :
      /* this branch is empty */
      break;
  }
  /* SM_StartOfMissionProcedure: */
  switch (outC->SM_StartOfMissionProcedure_state_sel) {
    case SSM_st_EB_Requested_SM_StartOfMissionProcedure :
      if (tr_1_guard_EB_Requested_SM_StartOfMissionProcedure) {
        _293_SM_StartOfMissionProcedure_fired_strong_partial =
          SSM_TR_EB_Requested_Procedure_Off_1_EB_Requested_SM_StartOfMissionProcedure;
      }
      else {
        _293_SM_StartOfMissionProcedure_fired_strong_partial =
          SSM_TR_no_trans_SM_StartOfMissionProcedure;
      }
      outC->SM_StartOfMissionProcedure_fired_strong =
        _293_SM_StartOfMissionProcedure_fired_strong_partial;
      break;
    case SSM_st_Procedure_On_SM_StartOfMissionProcedure :
      if (tr_1_guard_Procedure_On_SM_StartOfMissionProcedure) {
        _290_SM_StartOfMissionProcedure_fired_strong_partial =
          SSM_TR_Procedure_On_EB_Requested_1_Procedure_On_SM_StartOfMissionProcedure;
      }
      else if (tr_2_guard_Procedure_On_SM_StartOfMissionProcedure) {
        _290_SM_StartOfMissionProcedure_fired_strong_partial =
          SSM_TR_Procedure_On_Procedure_Off_2_Procedure_On_SM_StartOfMissionProcedure;
      }
      else {
        _290_SM_StartOfMissionProcedure_fired_strong_partial =
          SSM_TR_no_trans_SM_StartOfMissionProcedure;
      }
      outC->SM_StartOfMissionProcedure_fired_strong =
        _290_SM_StartOfMissionProcedure_fired_strong_partial;
      break;
    case SSM_st_Procedure_Off_SM_StartOfMissionProcedure :
      if (tr_1_guard_Procedure_Off_SM_StartOfMissionProcedure) {
        SM_StartOfMissionProcedure_fired_strong_partial =
          SSM_TR_Procedure_Off_Procedure_On_1_Procedure_Off_SM_StartOfMissionProcedure;
      }
      else {
        SM_StartOfMissionProcedure_fired_strong_partial =
          SSM_TR_no_trans_SM_StartOfMissionProcedure;
      }
      outC->SM_StartOfMissionProcedure_fired_strong =
        SM_StartOfMissionProcedure_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM_StartOfMissionProcedure_state_act) {
    case SSM_st_EB_Requested_SM_StartOfMissionProcedure :
      _287_SM_StartOfMissionProcedure_fired_partial =
        outC->SM_StartOfMissionProcedure_fired_strong;
      _286_SM_StartOfMissionProcedure_reset_nxt_partial = kcg_false;
      _285_SM_StartOfMissionProcedure_state_nxt_partial =
        SSM_st_EB_Requested_SM_StartOfMissionProcedure;
      outC->_L1_EB_Requested_SM_StartOfMissionProcedure = kcg_true;
      _280_EB_Requested_partial = outC->_L1_EB_Requested_SM_StartOfMissionProcedure;
      break;
    case SSM_st_Procedure_On_SM_StartOfMissionProcedure :
      _18_EB_Requested_partial = kcg_false;
      _25_SM_StartOfMissionProcedure_fired_partial =
        outC->SM_StartOfMissionProcedure_fired_strong;
      _24_SM_StartOfMissionProcedure_reset_nxt_partial = kcg_false;
      _23_SM_StartOfMissionProcedure_state_nxt_partial =
        SSM_st_Procedure_On_SM_StartOfMissionProcedure;
      break;
    default :
      /* this branch is empty */
      break;
  }
  SM_StartOfMissionProcedure_reset_prv =
    outC->SM_StartOfMissionProcedure_reset_act;
  /* SM_StartOfMissionProcedure: */
  switch (outC->SM_StartOfMissionProcedure_state_sel) {
    case SSM_st_EB_Requested_SM_StartOfMissionProcedure :
      _292_SM_StartOfMissionProcedure_reset_act_partial =
        tr_1_guard_EB_Requested_SM_StartOfMissionProcedure;
      outC->SM_StartOfMissionProcedure_reset_act =
        _292_SM_StartOfMissionProcedure_reset_act_partial;
      break;
    case SSM_st_Procedure_On_SM_StartOfMissionProcedure :
      if (tr_1_guard_Procedure_On_SM_StartOfMissionProcedure) {
        _289_SM_StartOfMissionProcedure_reset_act_partial = kcg_true;
      }
      else {
        _289_SM_StartOfMissionProcedure_reset_act_partial =
          tr_2_guard_Procedure_On_SM_StartOfMissionProcedure;
      }
      outC->SM_StartOfMissionProcedure_reset_act =
        _289_SM_StartOfMissionProcedure_reset_act_partial;
      break;
    case SSM_st_Procedure_Off_SM_StartOfMissionProcedure :
      SM_StartOfMissionProcedure_reset_act_partial =
        tr_1_guard_Procedure_Off_SM_StartOfMissionProcedure;
      outC->SM_StartOfMissionProcedure_reset_act =
        SM_StartOfMissionProcedure_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM_StartOfMissionProcedure: */
  switch (outC->SM_StartOfMissionProcedure_state_act) {
    case SSM_st_EB_Requested_SM_StartOfMissionProcedure :
      outC->Ack_LS_Req_To_Driver = _263_Ack_LS_Req_To_Driver_partial;
      outC->Ack_OS_Req_To_Driver = _264_Ack_OS_Req_To_Driver_partial;
      outC->Ack_SH_Req_To_Driver = _265_Ack_SH_Req_To_Driver_partial;
      outC->Ack_SN_Req_To_Driver = _266_Ack_SN_Req_To_Driver_partial;
      outC->Ack_SR_Req_To_Driver = _267_Ack_SR_Req_To_Driver_partial;
      outC->Ack_UN_Req_To_Driver = _268_Ack_UN_Req_To_Driver_partial;
      outC->Clean_BG_List_SH_Area = _269_Clean_BG_List_SH_Area_partial;
      outC->Condition_5 = _270_Condition_5_partial;
      outC->Condition_6 = _271_Condition_6_partial;
      outC->Condition_8 = _272_Condition_8_partial;
      outC->Condition_10 = _273_Condition_10_partial;
      outC->Condition_15 = _274_Condition_15_partial;
      outC->Condition_46 = _275_Condition_46_partial;
      outC->Condition_50 = _276_Condition_50_partial;
      outC->Condition_58 = _277_Condition_58_partial;
      outC->Condition_60 = _278_Condition_60_partial;
      outC->Condition_70 = _279_Condition_70_partial;
      outC->EB_Requested = _280_EB_Requested_partial;
      outC->End_Of_Mission_Procedure_Req = _281_End_Of_Mission_Procedure_Req_partial;
      outC->MA_Req_To_RBC = _282_MA_Req_To_RBC_partial;
      outC->Request_For_SH_To_RBC = _283_Request_For_SH_To_RBC_partial;
      outC->SH_Refused_By_RBC_To_DMI = _284_SH_Refused_By_RBC_To_DMI_partial;
      outC->SM_StartOfMissionProcedure_state_nxt =
        _285_SM_StartOfMissionProcedure_state_nxt_partial;
      break;
    case SSM_st_Procedure_On_SM_StartOfMissionProcedure :
      if (outC->SM_StartOfMissionProcedure_reset_act) {
        outC->init = kcg_true;
      }
      /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
      if (outC->init) {
        outC->SM_SoM_On_state_sel_Procedure_On_SM_StartOfMissionProcedure =
          SSM_st_Waiting_Driver_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
      }
      else {
        outC->SM_SoM_On_state_sel_Procedure_On_SM_StartOfMissionProcedure =
          outC->SM_SoM_On_state_nxt_Procedure_On_SM_StartOfMissionProcedure;
      }
      outC->SM_SoM_On_clock_Procedure_On_SM_StartOfMissionProcedure =
        outC->SM_SoM_On_state_sel_Procedure_On_SM_StartOfMissionProcedure;
      /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
      switch (outC->SM_SoM_On_clock_Procedure_On_SM_StartOfMissionProcedure) {
        case SSM_st_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure :
          SM_SoM_On_state_act_partial_Procedure_On_SM_StartOfMissionProcedure =
            SSM_st_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          outC->SM_SoM_On_state_act_Procedure_On_SM_StartOfMissionProcedure =
            SM_SoM_On_state_act_partial_Procedure_On_SM_StartOfMissionProcedure;
          break;
        case SSM_st_UN_Mode_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure :
          _28_SM_SoM_On_state_act_partial_Procedure_On_SM_StartOfMissionProcedure =
            SSM_st_UN_Mode_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          outC->SM_SoM_On_state_act_Procedure_On_SM_StartOfMissionProcedure =
            _28_SM_SoM_On_state_act_partial_Procedure_On_SM_StartOfMissionProcedure;
          break;
        case SSM_st_SN_Mode_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure :
          _31_SM_SoM_On_state_act_partial_Procedure_On_SM_StartOfMissionProcedure =
            SSM_st_SN_Mode_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          outC->SM_SoM_On_state_act_Procedure_On_SM_StartOfMissionProcedure =
            _31_SM_SoM_On_state_act_partial_Procedure_On_SM_StartOfMissionProcedure;
          break;
        case SSM_st_Level_NTC_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure :
          tr_1_guard_Level_NTC_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
            Driver_Ack_SN;
          if (tr_1_guard_Level_NTC_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure) {
            _34_SM_SoM_On_state_act_partial_Procedure_On_SM_StartOfMissionProcedure =
              SSM_st_SN_Mode_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          }
          else {
            _34_SM_SoM_On_state_act_partial_Procedure_On_SM_StartOfMissionProcedure =
              SSM_st_Level_NTC_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          }
          outC->SM_SoM_On_state_act_Procedure_On_SM_StartOfMissionProcedure =
            _34_SM_SoM_On_state_act_partial_Procedure_On_SM_StartOfMissionProcedure;
          break;
        case SSM_st_Level_0_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure :
          tr_1_guard_Level_0_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
            Driver_Ack_UN;
          if (tr_1_guard_Level_0_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure) {
            _37_SM_SoM_On_state_act_partial_Procedure_On_SM_StartOfMissionProcedure =
              SSM_st_UN_Mode_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          }
          else {
            _37_SM_SoM_On_state_act_partial_Procedure_On_SM_StartOfMissionProcedure =
              SSM_st_Level_0_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          }
          outC->SM_SoM_On_state_act_Procedure_On_SM_StartOfMissionProcedure =
            _37_SM_SoM_On_state_act_partial_Procedure_On_SM_StartOfMissionProcedure;
          break;
        case SSM_st_Waiting_Driver_Strating_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure :
          tr_1_guard_2_Waiting_Driver_Strating_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
            Current_Level == M_LEVEL_Level_0;
          tr_2_guard_2_Waiting_Driver_Strating_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
            Current_Level == M_LEVEL_Level_NTC_specified_by_NID_NTC;
          tr_2_guard_Waiting_Driver_Strating_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
            Driver_Req_Start &
            (tr_1_guard_2_Waiting_Driver_Strating_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure |
              tr_2_guard_2_Waiting_Driver_Strating_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure);
          tr_1_guard_Waiting_Driver_Strating_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
            (Current_Level == M_LEVEL_Level_1) | (Current_Level == M_LEVEL_Level_2) |
            (Current_Level == M_LEVEL_Level_3);
          if (tr_1_guard_Waiting_Driver_Strating_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure) {
            _40_SM_SoM_On_state_act_partial_Procedure_On_SM_StartOfMissionProcedure =
              SSM_st_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          }
          else if (tr_2_guard_Waiting_Driver_Strating_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure) {
            if (tr_1_guard_2_Waiting_Driver_Strating_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure) {
              _40_SM_SoM_On_state_act_partial_Procedure_On_SM_StartOfMissionProcedure =
                SSM_st_Level_0_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
            }
            else {
              _40_SM_SoM_On_state_act_partial_Procedure_On_SM_StartOfMissionProcedure =
                SSM_st_Level_NTC_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
            }
          }
          else {
            _40_SM_SoM_On_state_act_partial_Procedure_On_SM_StartOfMissionProcedure =
              SSM_st_Waiting_Driver_Strating_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          }
          outC->SM_SoM_On_state_act_Procedure_On_SM_StartOfMissionProcedure =
            _40_SM_SoM_On_state_act_partial_Procedure_On_SM_StartOfMissionProcedure;
          break;
        case SSM_st_Procedure_SH_Initiated_By_Driver_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure :
          _43_SM_SoM_On_state_act_partial_Procedure_On_SM_StartOfMissionProcedure =
            SSM_st_Procedure_SH_Initiated_By_Driver_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          outC->SM_SoM_On_state_act_Procedure_On_SM_StartOfMissionProcedure =
            _43_SM_SoM_On_state_act_partial_Procedure_On_SM_StartOfMissionProcedure;
          break;
        case SSM_st_NL_Mode_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure :
          _46_SM_SoM_On_state_act_partial_Procedure_On_SM_StartOfMissionProcedure =
            SSM_st_NL_Mode_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          outC->SM_SoM_On_state_act_Procedure_On_SM_StartOfMissionProcedure =
            _46_SM_SoM_On_state_act_partial_Procedure_On_SM_StartOfMissionProcedure;
          break;
        case SSM_st_Waiting_Driver_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure :
          tr_3_guard_Waiting_Driver_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
            Valid_Train_Data_Stored;
          tr_2_guard_Waiting_Driver_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
            Driver_Req_SH;
          tr_1_guard_Waiting_Driver_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
            Driver_Req_NL & Train_Permitted_NL;
          if (tr_1_guard_Waiting_Driver_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure) {
            _49_SM_SoM_On_state_act_partial_Procedure_On_SM_StartOfMissionProcedure =
              SSM_st_NL_Mode_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          }
          else if (tr_2_guard_Waiting_Driver_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure) {
            _49_SM_SoM_On_state_act_partial_Procedure_On_SM_StartOfMissionProcedure =
              SSM_st_Procedure_SH_Initiated_By_Driver_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          }
          else if (tr_3_guard_Waiting_Driver_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure) {
            _49_SM_SoM_On_state_act_partial_Procedure_On_SM_StartOfMissionProcedure =
              SSM_st_Waiting_Driver_Strating_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          }
          else {
            _49_SM_SoM_On_state_act_partial_Procedure_On_SM_StartOfMissionProcedure =
              SSM_st_Waiting_Driver_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          }
          outC->SM_SoM_On_state_act_Procedure_On_SM_StartOfMissionProcedure =
            _49_SM_SoM_On_state_act_partial_Procedure_On_SM_StartOfMissionProcedure;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      outC->_1_SM_SoM_On_clock_Procedure_On_SM_StartOfMissionProcedure =
        outC->SM_SoM_On_state_act_Procedure_On_SM_StartOfMissionProcedure;
      switch (outC->_1_SM_SoM_On_clock_Procedure_On_SM_StartOfMissionProcedure) {
        case SSM_st_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure :
          _50_SH_Refused_By_RBC_To_DMI_partial = kcg_false;
          _51_Request_For_SH_To_RBC_partial = kcg_false;
          _53_End_Of_Mission_Procedure_Req_partial = kcg_false;
          _55_Condition_60_partial = kcg_false;
          _56_Condition_58_partial = kcg_false;
          _58_Condition_46_partial = kcg_false;
          _62_Condition_6_partial = kcg_false;
          _63_Condition_5_partial = kcg_false;
          _64_Clean_BG_List_SH_Area_partial = kcg_false;
          _65_Ack_UN_Req_To_Driver_partial = kcg_false;
          _67_Ack_SN_Req_To_Driver_partial = kcg_false;
          break;
        default :
          /* this branch is empty */
          break;
      }
      /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
      switch (outC->SM_SoM_On_clock_Procedure_On_SM_StartOfMissionProcedure) {
        case SSM_st_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure :
          SM_SoM_On_fired_strong_partial_Procedure_On_SM_StartOfMissionProcedure =
            SSM_TR_no_trans_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          outC->SM_SoM_On_fired_strong_Procedure_On_SM_StartOfMissionProcedure =
            SM_SoM_On_fired_strong_partial_Procedure_On_SM_StartOfMissionProcedure;
          break;
        case SSM_st_UN_Mode_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure :
          _26_SM_SoM_On_fired_strong_partial_Procedure_On_SM_StartOfMissionProcedure =
            SSM_TR_no_trans_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          outC->SM_SoM_On_fired_strong_Procedure_On_SM_StartOfMissionProcedure =
            _26_SM_SoM_On_fired_strong_partial_Procedure_On_SM_StartOfMissionProcedure;
          break;
        case SSM_st_SN_Mode_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure :
          _29_SM_SoM_On_fired_strong_partial_Procedure_On_SM_StartOfMissionProcedure =
            SSM_TR_no_trans_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          outC->SM_SoM_On_fired_strong_Procedure_On_SM_StartOfMissionProcedure =
            _29_SM_SoM_On_fired_strong_partial_Procedure_On_SM_StartOfMissionProcedure;
          break;
        case SSM_st_Level_NTC_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure :
          if (tr_1_guard_Level_NTC_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure) {
            _32_SM_SoM_On_fired_strong_partial_Procedure_On_SM_StartOfMissionProcedure =
              SSM_TR_Level_NTC_SN_Mode_1_Level_NTC_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          }
          else {
            _32_SM_SoM_On_fired_strong_partial_Procedure_On_SM_StartOfMissionProcedure =
              SSM_TR_no_trans_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          }
          outC->SM_SoM_On_fired_strong_Procedure_On_SM_StartOfMissionProcedure =
            _32_SM_SoM_On_fired_strong_partial_Procedure_On_SM_StartOfMissionProcedure;
          break;
        case SSM_st_Level_0_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure :
          if (tr_1_guard_Level_0_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure) {
            _35_SM_SoM_On_fired_strong_partial_Procedure_On_SM_StartOfMissionProcedure =
              SSM_TR_Level_0_UN_Mode_1_Level_0_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          }
          else {
            _35_SM_SoM_On_fired_strong_partial_Procedure_On_SM_StartOfMissionProcedure =
              SSM_TR_no_trans_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          }
          outC->SM_SoM_On_fired_strong_Procedure_On_SM_StartOfMissionProcedure =
            _35_SM_SoM_On_fired_strong_partial_Procedure_On_SM_StartOfMissionProcedure;
          break;
        case SSM_st_Waiting_Driver_Strating_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure :
          if (tr_1_guard_Waiting_Driver_Strating_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure) {
            _38_SM_SoM_On_fired_strong_partial_Procedure_On_SM_StartOfMissionProcedure =
              SSM_TR_Waiting_Driver_Strating_Command_Waiting_Driver_Selection_1_Waiting_Driver_Strating_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          }
          else if (tr_2_guard_Waiting_Driver_Strating_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure) {
            if (tr_1_guard_2_Waiting_Driver_Strating_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure) {
              _38_SM_SoM_On_fired_strong_partial_Procedure_On_SM_StartOfMissionProcedure =
                SSM_TR_Waiting_Driver_Strating_Command_Level_0_1_2_Waiting_Driver_Strating_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
            }
            else {
              _38_SM_SoM_On_fired_strong_partial_Procedure_On_SM_StartOfMissionProcedure =
                SSM_TR_Waiting_Driver_Strating_Command_Level_NTC_2_2_Waiting_Driver_Strating_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
            }
          }
          else {
            _38_SM_SoM_On_fired_strong_partial_Procedure_On_SM_StartOfMissionProcedure =
              SSM_TR_no_trans_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          }
          outC->SM_SoM_On_fired_strong_Procedure_On_SM_StartOfMissionProcedure =
            _38_SM_SoM_On_fired_strong_partial_Procedure_On_SM_StartOfMissionProcedure;
          break;
        case SSM_st_Procedure_SH_Initiated_By_Driver_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure :
          _41_SM_SoM_On_fired_strong_partial_Procedure_On_SM_StartOfMissionProcedure =
            SSM_TR_no_trans_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          outC->SM_SoM_On_fired_strong_Procedure_On_SM_StartOfMissionProcedure =
            _41_SM_SoM_On_fired_strong_partial_Procedure_On_SM_StartOfMissionProcedure;
          break;
        case SSM_st_NL_Mode_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure :
          _44_SM_SoM_On_fired_strong_partial_Procedure_On_SM_StartOfMissionProcedure =
            SSM_TR_no_trans_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          outC->SM_SoM_On_fired_strong_Procedure_On_SM_StartOfMissionProcedure =
            _44_SM_SoM_On_fired_strong_partial_Procedure_On_SM_StartOfMissionProcedure;
          break;
        case SSM_st_Waiting_Driver_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure :
          if (tr_1_guard_Waiting_Driver_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure) {
            _47_SM_SoM_On_fired_strong_partial_Procedure_On_SM_StartOfMissionProcedure =
              SSM_TR_Waiting_Driver_Command_NL_Mode_1_Waiting_Driver_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          }
          else if (tr_2_guard_Waiting_Driver_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure) {
            _47_SM_SoM_On_fired_strong_partial_Procedure_On_SM_StartOfMissionProcedure =
              SSM_TR_Waiting_Driver_Command_Procedure_SH_Initiated_By_Driver_2_Waiting_Driver_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          }
          else if (tr_3_guard_Waiting_Driver_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure) {
            _47_SM_SoM_On_fired_strong_partial_Procedure_On_SM_StartOfMissionProcedure =
              SSM_TR_Waiting_Driver_Command_Waiting_Driver_Strating_Command_3_Waiting_Driver_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          }
          else {
            _47_SM_SoM_On_fired_strong_partial_Procedure_On_SM_StartOfMissionProcedure =
              SSM_TR_no_trans_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          }
          outC->SM_SoM_On_fired_strong_Procedure_On_SM_StartOfMissionProcedure =
            _47_SM_SoM_On_fired_strong_partial_Procedure_On_SM_StartOfMissionProcedure;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      switch (outC->_1_SM_SoM_On_clock_Procedure_On_SM_StartOfMissionProcedure) {
        case SSM_st_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure :
          SM_SoM_On_fired_partial_Procedure_On_SM_StartOfMissionProcedure =
            outC->SM_SoM_On_fired_strong_Procedure_On_SM_StartOfMissionProcedure;
          SM_SoM_On_reset_nxt_partial_Procedure_On_SM_StartOfMissionProcedure = kcg_false;
          SM_SoM_On_state_nxt_partial_Procedure_On_SM_StartOfMissionProcedure =
            SSM_st_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          outC->_L11_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
            Current_Level;
          outC->_L12_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
            Driver_Ack_LS;
          outC->_L13_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
            Driver_Ack_OS;
          outC->_L16_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
            Driver_Ack_SH;
          outC->_L17_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
            Driver_Ack_SR;
          outC->_L14_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
            Driver_Req_Start;
          outC->_L18_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
            MA_SSP_Gradiant_Available;
          kcg_copy_T_Mode_Profile_Level_And_Mode_Types_Pkg(
            &outC->_L19_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure,
            Mode_Profile_On_Board);
          outC->_L20_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
            RBC_Authorizes_SR;
          break;
        default :
          /* this branch is empty */
          break;
      }
      /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
      if (outC->init) {
        SM_SoM_On_reset_prv_Procedure_On_SM_StartOfMissionProcedure = kcg_false;
      }
      else {
        SM_SoM_On_reset_prv_Procedure_On_SM_StartOfMissionProcedure =
          outC->SM_SoM_On_reset_act_Procedure_On_SM_StartOfMissionProcedure;
      }
      /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
      switch (outC->SM_SoM_On_clock_Procedure_On_SM_StartOfMissionProcedure) {
        case SSM_st_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure :
          SM_SoM_On_reset_act_partial_Procedure_On_SM_StartOfMissionProcedure = kcg_false;
          outC->SM_SoM_On_reset_act_Procedure_On_SM_StartOfMissionProcedure =
            SM_SoM_On_reset_act_partial_Procedure_On_SM_StartOfMissionProcedure;
          break;
        case SSM_st_UN_Mode_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure :
          _27_SM_SoM_On_reset_act_partial_Procedure_On_SM_StartOfMissionProcedure =
            kcg_false;
          outC->SM_SoM_On_reset_act_Procedure_On_SM_StartOfMissionProcedure =
            _27_SM_SoM_On_reset_act_partial_Procedure_On_SM_StartOfMissionProcedure;
          break;
        case SSM_st_SN_Mode_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure :
          _30_SM_SoM_On_reset_act_partial_Procedure_On_SM_StartOfMissionProcedure =
            kcg_false;
          outC->SM_SoM_On_reset_act_Procedure_On_SM_StartOfMissionProcedure =
            _30_SM_SoM_On_reset_act_partial_Procedure_On_SM_StartOfMissionProcedure;
          break;
        case SSM_st_Level_NTC_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure :
          _33_SM_SoM_On_reset_act_partial_Procedure_On_SM_StartOfMissionProcedure =
            tr_1_guard_Level_NTC_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          outC->SM_SoM_On_reset_act_Procedure_On_SM_StartOfMissionProcedure =
            _33_SM_SoM_On_reset_act_partial_Procedure_On_SM_StartOfMissionProcedure;
          break;
        case SSM_st_Level_0_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure :
          _36_SM_SoM_On_reset_act_partial_Procedure_On_SM_StartOfMissionProcedure =
            tr_1_guard_Level_0_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          outC->SM_SoM_On_reset_act_Procedure_On_SM_StartOfMissionProcedure =
            _36_SM_SoM_On_reset_act_partial_Procedure_On_SM_StartOfMissionProcedure;
          break;
        case SSM_st_Waiting_Driver_Strating_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure :
          if (tr_1_guard_Waiting_Driver_Strating_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure) {
            _39_SM_SoM_On_reset_act_partial_Procedure_On_SM_StartOfMissionProcedure =
              kcg_true;
          }
          else {
            _39_SM_SoM_On_reset_act_partial_Procedure_On_SM_StartOfMissionProcedure =
              tr_2_guard_Waiting_Driver_Strating_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          }
          outC->SM_SoM_On_reset_act_Procedure_On_SM_StartOfMissionProcedure =
            _39_SM_SoM_On_reset_act_partial_Procedure_On_SM_StartOfMissionProcedure;
          break;
        case SSM_st_Procedure_SH_Initiated_By_Driver_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure :
          _42_SM_SoM_On_reset_act_partial_Procedure_On_SM_StartOfMissionProcedure =
            kcg_false;
          outC->SM_SoM_On_reset_act_Procedure_On_SM_StartOfMissionProcedure =
            _42_SM_SoM_On_reset_act_partial_Procedure_On_SM_StartOfMissionProcedure;
          break;
        case SSM_st_NL_Mode_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure :
          _45_SM_SoM_On_reset_act_partial_Procedure_On_SM_StartOfMissionProcedure =
            kcg_false;
          outC->SM_SoM_On_reset_act_Procedure_On_SM_StartOfMissionProcedure =
            _45_SM_SoM_On_reset_act_partial_Procedure_On_SM_StartOfMissionProcedure;
          break;
        case SSM_st_Waiting_Driver_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure :
          if (tr_1_guard_Waiting_Driver_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure) {
            _48_SM_SoM_On_reset_act_partial_Procedure_On_SM_StartOfMissionProcedure =
              kcg_true;
          }
          else if (tr_2_guard_Waiting_Driver_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure) {
            _48_SM_SoM_On_reset_act_partial_Procedure_On_SM_StartOfMissionProcedure =
              kcg_true;
          }
          else {
            _48_SM_SoM_On_reset_act_partial_Procedure_On_SM_StartOfMissionProcedure =
              tr_3_guard_Waiting_Driver_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          }
          outC->SM_SoM_On_reset_act_Procedure_On_SM_StartOfMissionProcedure =
            _48_SM_SoM_On_reset_act_partial_Procedure_On_SM_StartOfMissionProcedure;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      switch (outC->SM_SoM_On_state_act_Procedure_On_SM_StartOfMissionProcedure) {
        case SSM_st_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure :
          if (outC->SM_SoM_On_reset_act_Procedure_On_SM_StartOfMissionProcedure) {
            /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On:Waiting_Driver_Selection:_L1=(Procedures::Procedure_Start_L1_L2_L3#1)/ */
            Procedure_Start_L1_L2_L3_reset_Procedures(
              &outC->Context_Procedure_Start_L1_L2_L3_1);
          }
          break;
        default :
          /* this branch is empty */
          break;
      }
      if (outC->SM_StartOfMissionProcedure_reset_act) {
        /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On:Waiting_Driver_Selection:_L1=(Procedures::Procedure_Start_L1_L2_L3#1)/ */
        Procedure_Start_L1_L2_L3_reset_Procedures(
          &outC->Context_Procedure_Start_L1_L2_L3_1);
      }
      switch (outC->_1_SM_SoM_On_clock_Procedure_On_SM_StartOfMissionProcedure) {
        case SSM_st_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure :
          /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On:Waiting_Driver_Selection:_L1=(Procedures::Procedure_Start_L1_L2_L3#1)/ */
          Procedure_Start_L1_L2_L3_Procedures(
            outC->_L11_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure,
            outC->_L12_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure,
            outC->_L13_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure,
            outC->_L16_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure,
            outC->_L17_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure,
            outC->_L14_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure,
            outC->_L18_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure,
            &outC->_L19_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure,
            outC->_L20_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure,
            &outC->Context_Procedure_Start_L1_L2_L3_1);
          outC->_L1_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
            outC->Context_Procedure_Start_L1_L2_L3_1.Ack_LS_Req_To_Driver;
          outC->_L2_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
            outC->Context_Procedure_Start_L1_L2_L3_1.Ack_OS_Req_To_Driver;
          outC->_L3_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
            outC->Context_Procedure_Start_L1_L2_L3_1.Ack_SH_Req_To_Driver;
          outC->_L4_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
            outC->Context_Procedure_Start_L1_L2_L3_1.Ack_SR_Req_To_Driver;
          outC->_L5_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
            outC->Context_Procedure_Start_L1_L2_L3_1.Condition_8;
          outC->_L6_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
            outC->Context_Procedure_Start_L1_L2_L3_1.Condition_10_31;
          outC->_L7_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
            outC->Context_Procedure_Start_L1_L2_L3_1.Condition_15;
          outC->_L8_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
            outC->Context_Procedure_Start_L1_L2_L3_1.Condition_50;
          outC->_L9_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
            outC->Context_Procedure_Start_L1_L2_L3_1.Condition_70;
          outC->_L10_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
            outC->Context_Procedure_Start_L1_L2_L3_1.MA_Req_To_RBC;
          _52_MA_Req_To_RBC_partial =
            outC->_L10_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          _54_Condition_70_partial =
            outC->_L9_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          _57_Condition_50_partial =
            outC->_L8_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          _59_Condition_15_partial =
            outC->_L7_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          _60_Condition_10_partial =
            outC->_L6_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          _61_Condition_8_partial =
            outC->_L5_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          _66_Ack_SR_Req_To_Driver_partial =
            outC->_L4_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          _68_Ack_SH_Req_To_Driver_partial =
            outC->_L3_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          _69_Ack_OS_Req_To_Driver_partial =
            outC->_L2_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          _70_Ack_LS_Req_To_Driver_partial =
            outC->_L1_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          break;
        case SSM_st_UN_Mode_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure :
          _74_SH_Refused_By_RBC_To_DMI_partial = kcg_false;
          _75_Request_For_SH_To_RBC_partial = kcg_false;
          _76_MA_Req_To_RBC_partial = kcg_false;
          _77_End_Of_Mission_Procedure_Req_partial = kcg_false;
          _78_Condition_70_partial = kcg_false;
          _80_Condition_58_partial = kcg_false;
          _81_Condition_50_partial = kcg_false;
          _82_Condition_46_partial = kcg_false;
          _83_Condition_15_partial = kcg_false;
          _84_Condition_10_partial = kcg_false;
          _85_Condition_8_partial = kcg_false;
          _86_Condition_6_partial = kcg_false;
          _87_Condition_5_partial = kcg_false;
          _88_Clean_BG_List_SH_Area_partial = kcg_false;
          _89_Ack_UN_Req_To_Driver_partial = kcg_false;
          _90_Ack_SR_Req_To_Driver_partial = kcg_false;
          _91_Ack_SN_Req_To_Driver_partial = kcg_false;
          _92_Ack_SH_Req_To_Driver_partial = kcg_false;
          _93_Ack_OS_Req_To_Driver_partial = kcg_false;
          _94_Ack_LS_Req_To_Driver_partial = kcg_false;
          _71_SM_SoM_On_fired_partial_Procedure_On_SM_StartOfMissionProcedure =
            outC->SM_SoM_On_fired_strong_Procedure_On_SM_StartOfMissionProcedure;
          _72_SM_SoM_On_reset_nxt_partial_Procedure_On_SM_StartOfMissionProcedure =
            kcg_false;
          _73_SM_SoM_On_state_nxt_partial_Procedure_On_SM_StartOfMissionProcedure =
            SSM_st_UN_Mode_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          outC->_L1_UN_Mode_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure = kcg_true;
          _79_Condition_60_partial =
            outC->_L1_UN_Mode_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          break;
        case SSM_st_SN_Mode_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure :
          _98_SH_Refused_By_RBC_To_DMI_partial = kcg_false;
          _99_Request_For_SH_To_RBC_partial = kcg_false;
          _100_MA_Req_To_RBC_partial = kcg_false;
          _101_End_Of_Mission_Procedure_Req_partial = kcg_false;
          _102_Condition_70_partial = kcg_false;
          _103_Condition_60_partial = kcg_false;
          _105_Condition_50_partial = kcg_false;
          _106_Condition_46_partial = kcg_false;
          _107_Condition_15_partial = kcg_false;
          _108_Condition_10_partial = kcg_false;
          _109_Condition_8_partial = kcg_false;
          _110_Condition_6_partial = kcg_false;
          _111_Condition_5_partial = kcg_false;
          _112_Clean_BG_List_SH_Area_partial = kcg_false;
          _113_Ack_UN_Req_To_Driver_partial = kcg_false;
          _114_Ack_SR_Req_To_Driver_partial = kcg_false;
          _115_Ack_SN_Req_To_Driver_partial = kcg_false;
          _116_Ack_SH_Req_To_Driver_partial = kcg_false;
          _117_Ack_OS_Req_To_Driver_partial = kcg_false;
          _118_Ack_LS_Req_To_Driver_partial = kcg_false;
          _95_SM_SoM_On_fired_partial_Procedure_On_SM_StartOfMissionProcedure =
            outC->SM_SoM_On_fired_strong_Procedure_On_SM_StartOfMissionProcedure;
          _96_SM_SoM_On_reset_nxt_partial_Procedure_On_SM_StartOfMissionProcedure =
            kcg_false;
          _97_SM_SoM_On_state_nxt_partial_Procedure_On_SM_StartOfMissionProcedure =
            SSM_st_SN_Mode_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          outC->_L1_SN_Mode_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure = kcg_true;
          _104_Condition_58_partial =
            outC->_L1_SN_Mode_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          break;
        case SSM_st_Level_NTC_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure :
          _122_SH_Refused_By_RBC_To_DMI_partial = kcg_false;
          _123_Request_For_SH_To_RBC_partial = kcg_false;
          _124_MA_Req_To_RBC_partial = kcg_false;
          _125_End_Of_Mission_Procedure_Req_partial = kcg_false;
          _126_Condition_70_partial = kcg_false;
          _127_Condition_60_partial = kcg_false;
          _128_Condition_58_partial = kcg_false;
          _129_Condition_50_partial = kcg_false;
          _130_Condition_46_partial = kcg_false;
          _131_Condition_15_partial = kcg_false;
          _132_Condition_10_partial = kcg_false;
          _133_Condition_8_partial = kcg_false;
          _134_Condition_6_partial = kcg_false;
          _135_Condition_5_partial = kcg_false;
          _136_Clean_BG_List_SH_Area_partial = kcg_false;
          _137_Ack_UN_Req_To_Driver_partial = kcg_false;
          _138_Ack_SR_Req_To_Driver_partial = kcg_false;
          _140_Ack_SH_Req_To_Driver_partial = kcg_false;
          _141_Ack_OS_Req_To_Driver_partial = kcg_false;
          _142_Ack_LS_Req_To_Driver_partial = kcg_false;
          _119_SM_SoM_On_fired_partial_Procedure_On_SM_StartOfMissionProcedure =
            outC->SM_SoM_On_fired_strong_Procedure_On_SM_StartOfMissionProcedure;
          _120_SM_SoM_On_reset_nxt_partial_Procedure_On_SM_StartOfMissionProcedure =
            kcg_false;
          _121_SM_SoM_On_state_nxt_partial_Procedure_On_SM_StartOfMissionProcedure =
            SSM_st_Level_NTC_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          outC->_L1_Level_NTC_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
            kcg_true;
          _139_Ack_SN_Req_To_Driver_partial =
            outC->_L1_Level_NTC_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          break;
        case SSM_st_Level_0_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure :
          _146_SH_Refused_By_RBC_To_DMI_partial = kcg_false;
          _147_Request_For_SH_To_RBC_partial = kcg_false;
          _148_MA_Req_To_RBC_partial = kcg_false;
          _149_End_Of_Mission_Procedure_Req_partial = kcg_false;
          _150_Condition_70_partial = kcg_false;
          _151_Condition_60_partial = kcg_false;
          _152_Condition_58_partial = kcg_false;
          _153_Condition_50_partial = kcg_false;
          _154_Condition_46_partial = kcg_false;
          _155_Condition_15_partial = kcg_false;
          _156_Condition_10_partial = kcg_false;
          _157_Condition_8_partial = kcg_false;
          _158_Condition_6_partial = kcg_false;
          _159_Condition_5_partial = kcg_false;
          _160_Clean_BG_List_SH_Area_partial = kcg_false;
          _162_Ack_SR_Req_To_Driver_partial = kcg_false;
          _163_Ack_SN_Req_To_Driver_partial = kcg_false;
          _164_Ack_SH_Req_To_Driver_partial = kcg_false;
          _165_Ack_OS_Req_To_Driver_partial = kcg_false;
          _166_Ack_LS_Req_To_Driver_partial = kcg_false;
          _143_SM_SoM_On_fired_partial_Procedure_On_SM_StartOfMissionProcedure =
            outC->SM_SoM_On_fired_strong_Procedure_On_SM_StartOfMissionProcedure;
          _144_SM_SoM_On_reset_nxt_partial_Procedure_On_SM_StartOfMissionProcedure =
            kcg_false;
          _145_SM_SoM_On_state_nxt_partial_Procedure_On_SM_StartOfMissionProcedure =
            SSM_st_Level_0_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          outC->_L1_Level_0_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure = kcg_true;
          _161_Ack_UN_Req_To_Driver_partial =
            outC->_L1_Level_0_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          break;
        case SSM_st_Waiting_Driver_Strating_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure :
          _170_SH_Refused_By_RBC_To_DMI_partial = kcg_false;
          _171_Request_For_SH_To_RBC_partial = kcg_false;
          _172_MA_Req_To_RBC_partial = kcg_false;
          _173_End_Of_Mission_Procedure_Req_partial = kcg_false;
          _174_Condition_70_partial = kcg_false;
          _175_Condition_60_partial = kcg_false;
          _176_Condition_58_partial = kcg_false;
          _177_Condition_50_partial = kcg_false;
          _178_Condition_46_partial = kcg_false;
          _179_Condition_15_partial = kcg_false;
          _180_Condition_10_partial = kcg_false;
          _181_Condition_8_partial = kcg_false;
          _182_Condition_6_partial = kcg_false;
          _183_Condition_5_partial = kcg_false;
          _184_Clean_BG_List_SH_Area_partial = kcg_false;
          _185_Ack_UN_Req_To_Driver_partial = kcg_false;
          _186_Ack_SR_Req_To_Driver_partial = kcg_false;
          _187_Ack_SN_Req_To_Driver_partial = kcg_false;
          _188_Ack_SH_Req_To_Driver_partial = kcg_false;
          _189_Ack_OS_Req_To_Driver_partial = kcg_false;
          _190_Ack_LS_Req_To_Driver_partial = kcg_false;
          _167_SM_SoM_On_fired_partial_Procedure_On_SM_StartOfMissionProcedure =
            outC->SM_SoM_On_fired_strong_Procedure_On_SM_StartOfMissionProcedure;
          _168_SM_SoM_On_reset_nxt_partial_Procedure_On_SM_StartOfMissionProcedure =
            kcg_false;
          _169_SM_SoM_On_state_nxt_partial_Procedure_On_SM_StartOfMissionProcedure =
            SSM_st_Waiting_Driver_Strating_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          break;
        case SSM_st_Procedure_SH_Initiated_By_Driver_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure :
          _196_MA_Req_To_RBC_partial = kcg_false;
          _198_Condition_70_partial = kcg_false;
          _199_Condition_60_partial = kcg_false;
          _200_Condition_58_partial = kcg_false;
          _201_Condition_50_partial = kcg_false;
          _202_Condition_46_partial = kcg_false;
          _203_Condition_15_partial = kcg_false;
          _204_Condition_10_partial = kcg_false;
          _205_Condition_8_partial = kcg_false;
          _209_Ack_UN_Req_To_Driver_partial = kcg_false;
          _210_Ack_SR_Req_To_Driver_partial = kcg_false;
          _211_Ack_SN_Req_To_Driver_partial = kcg_false;
          _212_Ack_SH_Req_To_Driver_partial = kcg_false;
          _213_Ack_OS_Req_To_Driver_partial = kcg_false;
          _214_Ack_LS_Req_To_Driver_partial = kcg_false;
          _191_SM_SoM_On_fired_partial_Procedure_On_SM_StartOfMissionProcedure =
            outC->SM_SoM_On_fired_strong_Procedure_On_SM_StartOfMissionProcedure;
          _192_SM_SoM_On_reset_nxt_partial_Procedure_On_SM_StartOfMissionProcedure =
            kcg_false;
          _193_SM_SoM_On_state_nxt_partial_Procedure_On_SM_StartOfMissionProcedure =
            SSM_st_Procedure_SH_Initiated_By_Driver_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          outC->_L21_Procedure_SH_Initiated_By_Driver_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
            kcg_false;
          outC->_L11_Procedure_SH_Initiated_By_Driver_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
            Current_Level;
          outC->_L12_Procedure_SH_Initiated_By_Driver_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
            Driver_Req_SH;
          outC->_L14_Procedure_SH_Initiated_By_Driver_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
            Shunting_Granted_By_RBC;
          break;
        default :
          /* this branch is empty */
          break;
      }
      switch (outC->SM_SoM_On_state_act_Procedure_On_SM_StartOfMissionProcedure) {
        case SSM_st_Procedure_SH_Initiated_By_Driver_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure :
          if (outC->SM_SoM_On_reset_act_Procedure_On_SM_StartOfMissionProcedure) {
            /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On:Procedure_SH_Initiated_By_Driver:_L15=(Procedures::SH_Initiated_By_Driver_On#1)/ */
            SH_Initiated_By_Driver_On_reset_Procedures(
              &outC->Context_SH_Initiated_By_Driver_On_1);
          }
          break;
        default :
          /* this branch is empty */
          break;
      }
      if (outC->SM_StartOfMissionProcedure_reset_act) {
        /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On:Procedure_SH_Initiated_By_Driver:_L15=(Procedures::SH_Initiated_By_Driver_On#1)/ */
        SH_Initiated_By_Driver_On_reset_Procedures(
          &outC->Context_SH_Initiated_By_Driver_On_1);
      }
      /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
      switch (outC->_1_SM_SoM_On_clock_Procedure_On_SM_StartOfMissionProcedure) {
        case SSM_st_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure :
          _1_Ack_LS_Req_To_Driver_partial = _70_Ack_LS_Req_To_Driver_partial;
          _2_Ack_OS_Req_To_Driver_partial = _69_Ack_OS_Req_To_Driver_partial;
          _3_Ack_SH_Req_To_Driver_partial = _68_Ack_SH_Req_To_Driver_partial;
          _4_Ack_SN_Req_To_Driver_partial = _67_Ack_SN_Req_To_Driver_partial;
          _5_Ack_SR_Req_To_Driver_partial = _66_Ack_SR_Req_To_Driver_partial;
          _6_Ack_UN_Req_To_Driver_partial = _65_Ack_UN_Req_To_Driver_partial;
          _7_Clean_BG_List_SH_Area_partial = _64_Clean_BG_List_SH_Area_partial;
          _8_Condition_5_partial = _63_Condition_5_partial;
          _9_Condition_6_partial = _62_Condition_6_partial;
          _10_Condition_8_partial = _61_Condition_8_partial;
          _11_Condition_10_partial = _60_Condition_10_partial;
          _12_Condition_15_partial = _59_Condition_15_partial;
          _13_Condition_46_partial = _58_Condition_46_partial;
          _14_Condition_50_partial = _57_Condition_50_partial;
          _15_Condition_58_partial = _56_Condition_58_partial;
          _16_Condition_60_partial = _55_Condition_60_partial;
          _17_Condition_70_partial = _54_Condition_70_partial;
          _19_End_Of_Mission_Procedure_Req_partial =
            _53_End_Of_Mission_Procedure_Req_partial;
          _20_MA_Req_To_RBC_partial = _52_MA_Req_To_RBC_partial;
          _21_Request_For_SH_To_RBC_partial = _51_Request_For_SH_To_RBC_partial;
          _22_SH_Refused_By_RBC_To_DMI_partial = _50_SH_Refused_By_RBC_To_DMI_partial;
          outC->SM_SoM_On_state_nxt_Procedure_On_SM_StartOfMissionProcedure =
            SM_SoM_On_state_nxt_partial_Procedure_On_SM_StartOfMissionProcedure;
          break;
        case SSM_st_UN_Mode_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure :
          _1_Ack_LS_Req_To_Driver_partial = _94_Ack_LS_Req_To_Driver_partial;
          _2_Ack_OS_Req_To_Driver_partial = _93_Ack_OS_Req_To_Driver_partial;
          _3_Ack_SH_Req_To_Driver_partial = _92_Ack_SH_Req_To_Driver_partial;
          _4_Ack_SN_Req_To_Driver_partial = _91_Ack_SN_Req_To_Driver_partial;
          _5_Ack_SR_Req_To_Driver_partial = _90_Ack_SR_Req_To_Driver_partial;
          _6_Ack_UN_Req_To_Driver_partial = _89_Ack_UN_Req_To_Driver_partial;
          _7_Clean_BG_List_SH_Area_partial = _88_Clean_BG_List_SH_Area_partial;
          _8_Condition_5_partial = _87_Condition_5_partial;
          _9_Condition_6_partial = _86_Condition_6_partial;
          _10_Condition_8_partial = _85_Condition_8_partial;
          _11_Condition_10_partial = _84_Condition_10_partial;
          _12_Condition_15_partial = _83_Condition_15_partial;
          _13_Condition_46_partial = _82_Condition_46_partial;
          _14_Condition_50_partial = _81_Condition_50_partial;
          _15_Condition_58_partial = _80_Condition_58_partial;
          _16_Condition_60_partial = _79_Condition_60_partial;
          _17_Condition_70_partial = _78_Condition_70_partial;
          _19_End_Of_Mission_Procedure_Req_partial =
            _77_End_Of_Mission_Procedure_Req_partial;
          _20_MA_Req_To_RBC_partial = _76_MA_Req_To_RBC_partial;
          _21_Request_For_SH_To_RBC_partial = _75_Request_For_SH_To_RBC_partial;
          _22_SH_Refused_By_RBC_To_DMI_partial = _74_SH_Refused_By_RBC_To_DMI_partial;
          outC->SM_SoM_On_state_nxt_Procedure_On_SM_StartOfMissionProcedure =
            _73_SM_SoM_On_state_nxt_partial_Procedure_On_SM_StartOfMissionProcedure;
          break;
        case SSM_st_SN_Mode_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure :
          _1_Ack_LS_Req_To_Driver_partial = _118_Ack_LS_Req_To_Driver_partial;
          _2_Ack_OS_Req_To_Driver_partial = _117_Ack_OS_Req_To_Driver_partial;
          _3_Ack_SH_Req_To_Driver_partial = _116_Ack_SH_Req_To_Driver_partial;
          _4_Ack_SN_Req_To_Driver_partial = _115_Ack_SN_Req_To_Driver_partial;
          _5_Ack_SR_Req_To_Driver_partial = _114_Ack_SR_Req_To_Driver_partial;
          _6_Ack_UN_Req_To_Driver_partial = _113_Ack_UN_Req_To_Driver_partial;
          _7_Clean_BG_List_SH_Area_partial = _112_Clean_BG_List_SH_Area_partial;
          _8_Condition_5_partial = _111_Condition_5_partial;
          _9_Condition_6_partial = _110_Condition_6_partial;
          _10_Condition_8_partial = _109_Condition_8_partial;
          _11_Condition_10_partial = _108_Condition_10_partial;
          _12_Condition_15_partial = _107_Condition_15_partial;
          _13_Condition_46_partial = _106_Condition_46_partial;
          _14_Condition_50_partial = _105_Condition_50_partial;
          _15_Condition_58_partial = _104_Condition_58_partial;
          _16_Condition_60_partial = _103_Condition_60_partial;
          _17_Condition_70_partial = _102_Condition_70_partial;
          _19_End_Of_Mission_Procedure_Req_partial =
            _101_End_Of_Mission_Procedure_Req_partial;
          _20_MA_Req_To_RBC_partial = _100_MA_Req_To_RBC_partial;
          _21_Request_For_SH_To_RBC_partial = _99_Request_For_SH_To_RBC_partial;
          _22_SH_Refused_By_RBC_To_DMI_partial = _98_SH_Refused_By_RBC_To_DMI_partial;
          outC->SM_SoM_On_state_nxt_Procedure_On_SM_StartOfMissionProcedure =
            _97_SM_SoM_On_state_nxt_partial_Procedure_On_SM_StartOfMissionProcedure;
          break;
        case SSM_st_Level_NTC_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure :
          _1_Ack_LS_Req_To_Driver_partial = _142_Ack_LS_Req_To_Driver_partial;
          _2_Ack_OS_Req_To_Driver_partial = _141_Ack_OS_Req_To_Driver_partial;
          _3_Ack_SH_Req_To_Driver_partial = _140_Ack_SH_Req_To_Driver_partial;
          _4_Ack_SN_Req_To_Driver_partial = _139_Ack_SN_Req_To_Driver_partial;
          _5_Ack_SR_Req_To_Driver_partial = _138_Ack_SR_Req_To_Driver_partial;
          _6_Ack_UN_Req_To_Driver_partial = _137_Ack_UN_Req_To_Driver_partial;
          _7_Clean_BG_List_SH_Area_partial = _136_Clean_BG_List_SH_Area_partial;
          _8_Condition_5_partial = _135_Condition_5_partial;
          _9_Condition_6_partial = _134_Condition_6_partial;
          _10_Condition_8_partial = _133_Condition_8_partial;
          _11_Condition_10_partial = _132_Condition_10_partial;
          _12_Condition_15_partial = _131_Condition_15_partial;
          _13_Condition_46_partial = _130_Condition_46_partial;
          _14_Condition_50_partial = _129_Condition_50_partial;
          _15_Condition_58_partial = _128_Condition_58_partial;
          _16_Condition_60_partial = _127_Condition_60_partial;
          _17_Condition_70_partial = _126_Condition_70_partial;
          _19_End_Of_Mission_Procedure_Req_partial =
            _125_End_Of_Mission_Procedure_Req_partial;
          _20_MA_Req_To_RBC_partial = _124_MA_Req_To_RBC_partial;
          _21_Request_For_SH_To_RBC_partial = _123_Request_For_SH_To_RBC_partial;
          _22_SH_Refused_By_RBC_To_DMI_partial = _122_SH_Refused_By_RBC_To_DMI_partial;
          outC->SM_SoM_On_state_nxt_Procedure_On_SM_StartOfMissionProcedure =
            _121_SM_SoM_On_state_nxt_partial_Procedure_On_SM_StartOfMissionProcedure;
          break;
        case SSM_st_Level_0_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure :
          _1_Ack_LS_Req_To_Driver_partial = _166_Ack_LS_Req_To_Driver_partial;
          _2_Ack_OS_Req_To_Driver_partial = _165_Ack_OS_Req_To_Driver_partial;
          _3_Ack_SH_Req_To_Driver_partial = _164_Ack_SH_Req_To_Driver_partial;
          _4_Ack_SN_Req_To_Driver_partial = _163_Ack_SN_Req_To_Driver_partial;
          _5_Ack_SR_Req_To_Driver_partial = _162_Ack_SR_Req_To_Driver_partial;
          _6_Ack_UN_Req_To_Driver_partial = _161_Ack_UN_Req_To_Driver_partial;
          _7_Clean_BG_List_SH_Area_partial = _160_Clean_BG_List_SH_Area_partial;
          _8_Condition_5_partial = _159_Condition_5_partial;
          _9_Condition_6_partial = _158_Condition_6_partial;
          _10_Condition_8_partial = _157_Condition_8_partial;
          _11_Condition_10_partial = _156_Condition_10_partial;
          _12_Condition_15_partial = _155_Condition_15_partial;
          _13_Condition_46_partial = _154_Condition_46_partial;
          _14_Condition_50_partial = _153_Condition_50_partial;
          _15_Condition_58_partial = _152_Condition_58_partial;
          _16_Condition_60_partial = _151_Condition_60_partial;
          _17_Condition_70_partial = _150_Condition_70_partial;
          _19_End_Of_Mission_Procedure_Req_partial =
            _149_End_Of_Mission_Procedure_Req_partial;
          _20_MA_Req_To_RBC_partial = _148_MA_Req_To_RBC_partial;
          _21_Request_For_SH_To_RBC_partial = _147_Request_For_SH_To_RBC_partial;
          _22_SH_Refused_By_RBC_To_DMI_partial = _146_SH_Refused_By_RBC_To_DMI_partial;
          outC->SM_SoM_On_state_nxt_Procedure_On_SM_StartOfMissionProcedure =
            _145_SM_SoM_On_state_nxt_partial_Procedure_On_SM_StartOfMissionProcedure;
          break;
        case SSM_st_Waiting_Driver_Strating_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure :
          _1_Ack_LS_Req_To_Driver_partial = _190_Ack_LS_Req_To_Driver_partial;
          _2_Ack_OS_Req_To_Driver_partial = _189_Ack_OS_Req_To_Driver_partial;
          _3_Ack_SH_Req_To_Driver_partial = _188_Ack_SH_Req_To_Driver_partial;
          _4_Ack_SN_Req_To_Driver_partial = _187_Ack_SN_Req_To_Driver_partial;
          _5_Ack_SR_Req_To_Driver_partial = _186_Ack_SR_Req_To_Driver_partial;
          _6_Ack_UN_Req_To_Driver_partial = _185_Ack_UN_Req_To_Driver_partial;
          _7_Clean_BG_List_SH_Area_partial = _184_Clean_BG_List_SH_Area_partial;
          _8_Condition_5_partial = _183_Condition_5_partial;
          _9_Condition_6_partial = _182_Condition_6_partial;
          _10_Condition_8_partial = _181_Condition_8_partial;
          _11_Condition_10_partial = _180_Condition_10_partial;
          _12_Condition_15_partial = _179_Condition_15_partial;
          _13_Condition_46_partial = _178_Condition_46_partial;
          _14_Condition_50_partial = _177_Condition_50_partial;
          _15_Condition_58_partial = _176_Condition_58_partial;
          _16_Condition_60_partial = _175_Condition_60_partial;
          _17_Condition_70_partial = _174_Condition_70_partial;
          _19_End_Of_Mission_Procedure_Req_partial =
            _173_End_Of_Mission_Procedure_Req_partial;
          _20_MA_Req_To_RBC_partial = _172_MA_Req_To_RBC_partial;
          _21_Request_For_SH_To_RBC_partial = _171_Request_For_SH_To_RBC_partial;
          _22_SH_Refused_By_RBC_To_DMI_partial = _170_SH_Refused_By_RBC_To_DMI_partial;
          outC->SM_SoM_On_state_nxt_Procedure_On_SM_StartOfMissionProcedure =
            _169_SM_SoM_On_state_nxt_partial_Procedure_On_SM_StartOfMissionProcedure;
          break;
        case SSM_st_Procedure_SH_Initiated_By_Driver_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure :
          /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On:Procedure_SH_Initiated_By_Driver:_L15=(Procedures::SH_Initiated_By_Driver_On#1)/ */
          SH_Initiated_By_Driver_On_Procedures(
            outC->_L11_Procedure_SH_Initiated_By_Driver_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure,
            outC->_L12_Procedure_SH_Initiated_By_Driver_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure,
            outC->_L21_Procedure_SH_Initiated_By_Driver_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure,
            outC->_L14_Procedure_SH_Initiated_By_Driver_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure,
            &outC->Context_SH_Initiated_By_Driver_On_1);
          outC->_L15_Procedure_SH_Initiated_By_Driver_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
            outC->Context_SH_Initiated_By_Driver_On_1.Clean_BG_List_SH_Area;
          outC->_L16_Procedure_SH_Initiated_By_Driver_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
            outC->Context_SH_Initiated_By_Driver_On_1.Condition5;
          outC->_L17_Procedure_SH_Initiated_By_Driver_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
            outC->Context_SH_Initiated_By_Driver_On_1.Condition6;
          outC->_L18_Procedure_SH_Initiated_By_Driver_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
            outC->Context_SH_Initiated_By_Driver_On_1.End_Of_Mission_Procedure_Req;
          outC->_L19_Procedure_SH_Initiated_By_Driver_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
            outC->Context_SH_Initiated_By_Driver_On_1.SH_Refused_By_RBC_To_DMI;
          outC->_L20_Procedure_SH_Initiated_By_Driver_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
            outC->Context_SH_Initiated_By_Driver_On_1.Request_For_SH_To_RBC;
          _195_Request_For_SH_To_RBC_partial =
            outC->_L20_Procedure_SH_Initiated_By_Driver_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          _194_SH_Refused_By_RBC_To_DMI_partial =
            outC->_L19_Procedure_SH_Initiated_By_Driver_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          _197_End_Of_Mission_Procedure_Req_partial =
            outC->_L18_Procedure_SH_Initiated_By_Driver_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          _206_Condition_6_partial =
            outC->_L17_Procedure_SH_Initiated_By_Driver_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          _207_Condition_5_partial =
            outC->_L16_Procedure_SH_Initiated_By_Driver_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          _208_Clean_BG_List_SH_Area_partial =
            outC->_L15_Procedure_SH_Initiated_By_Driver_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          _1_Ack_LS_Req_To_Driver_partial = _214_Ack_LS_Req_To_Driver_partial;
          _2_Ack_OS_Req_To_Driver_partial = _213_Ack_OS_Req_To_Driver_partial;
          _3_Ack_SH_Req_To_Driver_partial = _212_Ack_SH_Req_To_Driver_partial;
          _4_Ack_SN_Req_To_Driver_partial = _211_Ack_SN_Req_To_Driver_partial;
          _5_Ack_SR_Req_To_Driver_partial = _210_Ack_SR_Req_To_Driver_partial;
          _6_Ack_UN_Req_To_Driver_partial = _209_Ack_UN_Req_To_Driver_partial;
          _7_Clean_BG_List_SH_Area_partial = _208_Clean_BG_List_SH_Area_partial;
          _8_Condition_5_partial = _207_Condition_5_partial;
          _9_Condition_6_partial = _206_Condition_6_partial;
          _10_Condition_8_partial = _205_Condition_8_partial;
          _11_Condition_10_partial = _204_Condition_10_partial;
          _12_Condition_15_partial = _203_Condition_15_partial;
          _13_Condition_46_partial = _202_Condition_46_partial;
          _14_Condition_50_partial = _201_Condition_50_partial;
          _15_Condition_58_partial = _200_Condition_58_partial;
          _16_Condition_60_partial = _199_Condition_60_partial;
          _17_Condition_70_partial = _198_Condition_70_partial;
          _19_End_Of_Mission_Procedure_Req_partial =
            _197_End_Of_Mission_Procedure_Req_partial;
          _20_MA_Req_To_RBC_partial = _196_MA_Req_To_RBC_partial;
          _21_Request_For_SH_To_RBC_partial = _195_Request_For_SH_To_RBC_partial;
          _22_SH_Refused_By_RBC_To_DMI_partial = _194_SH_Refused_By_RBC_To_DMI_partial;
          outC->SM_SoM_On_state_nxt_Procedure_On_SM_StartOfMissionProcedure =
            _193_SM_SoM_On_state_nxt_partial_Procedure_On_SM_StartOfMissionProcedure;
          break;
        case SSM_st_NL_Mode_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure :
          _218_SH_Refused_By_RBC_To_DMI_partial = kcg_false;
          _219_Request_For_SH_To_RBC_partial = kcg_false;
          _220_MA_Req_To_RBC_partial = kcg_false;
          _221_End_Of_Mission_Procedure_Req_partial = kcg_false;
          _222_Condition_70_partial = kcg_false;
          _223_Condition_60_partial = kcg_false;
          _224_Condition_58_partial = kcg_false;
          _225_Condition_50_partial = kcg_false;
          _227_Condition_15_partial = kcg_false;
          _228_Condition_10_partial = kcg_false;
          _229_Condition_8_partial = kcg_false;
          _230_Condition_6_partial = kcg_false;
          _231_Condition_5_partial = kcg_false;
          _232_Clean_BG_List_SH_Area_partial = kcg_false;
          _233_Ack_UN_Req_To_Driver_partial = kcg_false;
          _234_Ack_SR_Req_To_Driver_partial = kcg_false;
          _235_Ack_SN_Req_To_Driver_partial = kcg_false;
          _236_Ack_SH_Req_To_Driver_partial = kcg_false;
          _237_Ack_OS_Req_To_Driver_partial = kcg_false;
          _238_Ack_LS_Req_To_Driver_partial = kcg_false;
          _215_SM_SoM_On_fired_partial_Procedure_On_SM_StartOfMissionProcedure =
            outC->SM_SoM_On_fired_strong_Procedure_On_SM_StartOfMissionProcedure;
          _216_SM_SoM_On_reset_nxt_partial_Procedure_On_SM_StartOfMissionProcedure =
            kcg_false;
          _217_SM_SoM_On_state_nxt_partial_Procedure_On_SM_StartOfMissionProcedure =
            SSM_st_NL_Mode_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          outC->_L2_NL_Mode_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure = kcg_true;
          _226_Condition_46_partial =
            outC->_L2_NL_Mode_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          _1_Ack_LS_Req_To_Driver_partial = _238_Ack_LS_Req_To_Driver_partial;
          _2_Ack_OS_Req_To_Driver_partial = _237_Ack_OS_Req_To_Driver_partial;
          _3_Ack_SH_Req_To_Driver_partial = _236_Ack_SH_Req_To_Driver_partial;
          _4_Ack_SN_Req_To_Driver_partial = _235_Ack_SN_Req_To_Driver_partial;
          _5_Ack_SR_Req_To_Driver_partial = _234_Ack_SR_Req_To_Driver_partial;
          _6_Ack_UN_Req_To_Driver_partial = _233_Ack_UN_Req_To_Driver_partial;
          _7_Clean_BG_List_SH_Area_partial = _232_Clean_BG_List_SH_Area_partial;
          _8_Condition_5_partial = _231_Condition_5_partial;
          _9_Condition_6_partial = _230_Condition_6_partial;
          _10_Condition_8_partial = _229_Condition_8_partial;
          _11_Condition_10_partial = _228_Condition_10_partial;
          _12_Condition_15_partial = _227_Condition_15_partial;
          _13_Condition_46_partial = _226_Condition_46_partial;
          _14_Condition_50_partial = _225_Condition_50_partial;
          _15_Condition_58_partial = _224_Condition_58_partial;
          _16_Condition_60_partial = _223_Condition_60_partial;
          _17_Condition_70_partial = _222_Condition_70_partial;
          _19_End_Of_Mission_Procedure_Req_partial =
            _221_End_Of_Mission_Procedure_Req_partial;
          _20_MA_Req_To_RBC_partial = _220_MA_Req_To_RBC_partial;
          _21_Request_For_SH_To_RBC_partial = _219_Request_For_SH_To_RBC_partial;
          _22_SH_Refused_By_RBC_To_DMI_partial = _218_SH_Refused_By_RBC_To_DMI_partial;
          outC->SM_SoM_On_state_nxt_Procedure_On_SM_StartOfMissionProcedure =
            _217_SM_SoM_On_state_nxt_partial_Procedure_On_SM_StartOfMissionProcedure;
          break;
        case SSM_st_Waiting_Driver_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure :
          _242_SH_Refused_By_RBC_To_DMI_partial = kcg_false;
          _243_Request_For_SH_To_RBC_partial = kcg_false;
          _244_MA_Req_To_RBC_partial = kcg_false;
          _245_End_Of_Mission_Procedure_Req_partial = kcg_false;
          _246_Condition_70_partial = kcg_false;
          _247_Condition_60_partial = kcg_false;
          _248_Condition_58_partial = kcg_false;
          _249_Condition_50_partial = kcg_false;
          _250_Condition_46_partial = kcg_false;
          _251_Condition_15_partial = kcg_false;
          _252_Condition_10_partial = kcg_false;
          _253_Condition_8_partial = kcg_false;
          _254_Condition_6_partial = kcg_false;
          _255_Condition_5_partial = kcg_false;
          _256_Clean_BG_List_SH_Area_partial = kcg_false;
          _257_Ack_UN_Req_To_Driver_partial = kcg_false;
          _258_Ack_SR_Req_To_Driver_partial = kcg_false;
          _259_Ack_SN_Req_To_Driver_partial = kcg_false;
          _260_Ack_SH_Req_To_Driver_partial = kcg_false;
          _261_Ack_OS_Req_To_Driver_partial = kcg_false;
          _262_Ack_LS_Req_To_Driver_partial = kcg_false;
          _239_SM_SoM_On_fired_partial_Procedure_On_SM_StartOfMissionProcedure =
            outC->SM_SoM_On_fired_strong_Procedure_On_SM_StartOfMissionProcedure;
          _240_SM_SoM_On_reset_nxt_partial_Procedure_On_SM_StartOfMissionProcedure =
            kcg_false;
          _241_SM_SoM_On_state_nxt_partial_Procedure_On_SM_StartOfMissionProcedure =
            SSM_st_Waiting_Driver_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
          _1_Ack_LS_Req_To_Driver_partial = _262_Ack_LS_Req_To_Driver_partial;
          _2_Ack_OS_Req_To_Driver_partial = _261_Ack_OS_Req_To_Driver_partial;
          _3_Ack_SH_Req_To_Driver_partial = _260_Ack_SH_Req_To_Driver_partial;
          _4_Ack_SN_Req_To_Driver_partial = _259_Ack_SN_Req_To_Driver_partial;
          _5_Ack_SR_Req_To_Driver_partial = _258_Ack_SR_Req_To_Driver_partial;
          _6_Ack_UN_Req_To_Driver_partial = _257_Ack_UN_Req_To_Driver_partial;
          _7_Clean_BG_List_SH_Area_partial = _256_Clean_BG_List_SH_Area_partial;
          _8_Condition_5_partial = _255_Condition_5_partial;
          _9_Condition_6_partial = _254_Condition_6_partial;
          _10_Condition_8_partial = _253_Condition_8_partial;
          _11_Condition_10_partial = _252_Condition_10_partial;
          _12_Condition_15_partial = _251_Condition_15_partial;
          _13_Condition_46_partial = _250_Condition_46_partial;
          _14_Condition_50_partial = _249_Condition_50_partial;
          _15_Condition_58_partial = _248_Condition_58_partial;
          _16_Condition_60_partial = _247_Condition_60_partial;
          _17_Condition_70_partial = _246_Condition_70_partial;
          _19_End_Of_Mission_Procedure_Req_partial =
            _245_End_Of_Mission_Procedure_Req_partial;
          _20_MA_Req_To_RBC_partial = _244_MA_Req_To_RBC_partial;
          _21_Request_For_SH_To_RBC_partial = _243_Request_For_SH_To_RBC_partial;
          _22_SH_Refused_By_RBC_To_DMI_partial = _242_SH_Refused_By_RBC_To_DMI_partial;
          outC->SM_SoM_On_state_nxt_Procedure_On_SM_StartOfMissionProcedure =
            _241_SM_SoM_On_state_nxt_partial_Procedure_On_SM_StartOfMissionProcedure;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
      if (outC->init) {
        SM_SoM_On_reset_sel_Procedure_On_SM_StartOfMissionProcedure = kcg_false;
      }
      else {
        SM_SoM_On_reset_sel_Procedure_On_SM_StartOfMissionProcedure =
          outC->SM_SoM_On_reset_nxt_Procedure_On_SM_StartOfMissionProcedure;
      }
      /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
      switch (outC->_1_SM_SoM_On_clock_Procedure_On_SM_StartOfMissionProcedure) {
        case SSM_st_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure :
          outC->SM_SoM_On_reset_nxt_Procedure_On_SM_StartOfMissionProcedure =
            SM_SoM_On_reset_nxt_partial_Procedure_On_SM_StartOfMissionProcedure;
          outC->SM_SoM_On_fired_Procedure_On_SM_StartOfMissionProcedure =
            SM_SoM_On_fired_partial_Procedure_On_SM_StartOfMissionProcedure;
          break;
        case SSM_st_UN_Mode_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure :
          outC->SM_SoM_On_reset_nxt_Procedure_On_SM_StartOfMissionProcedure =
            _72_SM_SoM_On_reset_nxt_partial_Procedure_On_SM_StartOfMissionProcedure;
          outC->SM_SoM_On_fired_Procedure_On_SM_StartOfMissionProcedure =
            _71_SM_SoM_On_fired_partial_Procedure_On_SM_StartOfMissionProcedure;
          break;
        case SSM_st_SN_Mode_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure :
          outC->SM_SoM_On_reset_nxt_Procedure_On_SM_StartOfMissionProcedure =
            _96_SM_SoM_On_reset_nxt_partial_Procedure_On_SM_StartOfMissionProcedure;
          outC->SM_SoM_On_fired_Procedure_On_SM_StartOfMissionProcedure =
            _95_SM_SoM_On_fired_partial_Procedure_On_SM_StartOfMissionProcedure;
          break;
        case SSM_st_Level_NTC_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure :
          outC->SM_SoM_On_reset_nxt_Procedure_On_SM_StartOfMissionProcedure =
            _120_SM_SoM_On_reset_nxt_partial_Procedure_On_SM_StartOfMissionProcedure;
          outC->SM_SoM_On_fired_Procedure_On_SM_StartOfMissionProcedure =
            _119_SM_SoM_On_fired_partial_Procedure_On_SM_StartOfMissionProcedure;
          break;
        case SSM_st_Level_0_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure :
          outC->SM_SoM_On_reset_nxt_Procedure_On_SM_StartOfMissionProcedure =
            _144_SM_SoM_On_reset_nxt_partial_Procedure_On_SM_StartOfMissionProcedure;
          outC->SM_SoM_On_fired_Procedure_On_SM_StartOfMissionProcedure =
            _143_SM_SoM_On_fired_partial_Procedure_On_SM_StartOfMissionProcedure;
          break;
        case SSM_st_Waiting_Driver_Strating_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure :
          outC->SM_SoM_On_reset_nxt_Procedure_On_SM_StartOfMissionProcedure =
            _168_SM_SoM_On_reset_nxt_partial_Procedure_On_SM_StartOfMissionProcedure;
          outC->SM_SoM_On_fired_Procedure_On_SM_StartOfMissionProcedure =
            _167_SM_SoM_On_fired_partial_Procedure_On_SM_StartOfMissionProcedure;
          break;
        case SSM_st_Procedure_SH_Initiated_By_Driver_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure :
          outC->SM_SoM_On_reset_nxt_Procedure_On_SM_StartOfMissionProcedure =
            _192_SM_SoM_On_reset_nxt_partial_Procedure_On_SM_StartOfMissionProcedure;
          outC->SM_SoM_On_fired_Procedure_On_SM_StartOfMissionProcedure =
            _191_SM_SoM_On_fired_partial_Procedure_On_SM_StartOfMissionProcedure;
          break;
        case SSM_st_NL_Mode_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure :
          outC->SM_SoM_On_reset_nxt_Procedure_On_SM_StartOfMissionProcedure =
            _216_SM_SoM_On_reset_nxt_partial_Procedure_On_SM_StartOfMissionProcedure;
          outC->SM_SoM_On_fired_Procedure_On_SM_StartOfMissionProcedure =
            _215_SM_SoM_On_fired_partial_Procedure_On_SM_StartOfMissionProcedure;
          break;
        case SSM_st_Waiting_Driver_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure :
          outC->SM_SoM_On_reset_nxt_Procedure_On_SM_StartOfMissionProcedure =
            _240_SM_SoM_On_reset_nxt_partial_Procedure_On_SM_StartOfMissionProcedure;
          outC->SM_SoM_On_fired_Procedure_On_SM_StartOfMissionProcedure =
            _239_SM_SoM_On_fired_partial_Procedure_On_SM_StartOfMissionProcedure;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      outC->Ack_LS_Req_To_Driver = _1_Ack_LS_Req_To_Driver_partial;
      outC->Ack_OS_Req_To_Driver = _2_Ack_OS_Req_To_Driver_partial;
      outC->Ack_SH_Req_To_Driver = _3_Ack_SH_Req_To_Driver_partial;
      outC->Ack_SN_Req_To_Driver = _4_Ack_SN_Req_To_Driver_partial;
      outC->Ack_SR_Req_To_Driver = _5_Ack_SR_Req_To_Driver_partial;
      outC->Ack_UN_Req_To_Driver = _6_Ack_UN_Req_To_Driver_partial;
      outC->Clean_BG_List_SH_Area = _7_Clean_BG_List_SH_Area_partial;
      outC->Condition_5 = _8_Condition_5_partial;
      outC->Condition_6 = _9_Condition_6_partial;
      outC->Condition_8 = _10_Condition_8_partial;
      outC->Condition_10 = _11_Condition_10_partial;
      outC->Condition_15 = _12_Condition_15_partial;
      outC->Condition_46 = _13_Condition_46_partial;
      outC->Condition_50 = _14_Condition_50_partial;
      outC->Condition_58 = _15_Condition_58_partial;
      outC->Condition_60 = _16_Condition_60_partial;
      outC->Condition_70 = _17_Condition_70_partial;
      outC->EB_Requested = _18_EB_Requested_partial;
      outC->End_Of_Mission_Procedure_Req = _19_End_Of_Mission_Procedure_Req_partial;
      outC->MA_Req_To_RBC = _20_MA_Req_To_RBC_partial;
      outC->Request_For_SH_To_RBC = _21_Request_For_SH_To_RBC_partial;
      outC->SH_Refused_By_RBC_To_DMI = _22_SH_Refused_By_RBC_To_DMI_partial;
      outC->SM_StartOfMissionProcedure_state_nxt =
        _23_SM_StartOfMissionProcedure_state_nxt_partial;
      break;
    case SSM_st_Procedure_Off_SM_StartOfMissionProcedure :
      SH_Refused_By_RBC_To_DMI_partial = kcg_false;
      Request_For_SH_To_RBC_partial = kcg_false;
      MA_Req_To_RBC_partial = kcg_false;
      End_Of_Mission_Procedure_Req_partial = kcg_false;
      EB_Requested_partial = kcg_false;
      Condition_70_partial = kcg_false;
      Condition_60_partial = kcg_false;
      Condition_58_partial = kcg_false;
      Condition_50_partial = kcg_false;
      Condition_46_partial = kcg_false;
      Condition_15_partial = kcg_false;
      Condition_10_partial = kcg_false;
      Condition_8_partial = kcg_false;
      Condition_6_partial = kcg_false;
      Condition_5_partial = kcg_false;
      Clean_BG_List_SH_Area_partial = kcg_false;
      Ack_UN_Req_To_Driver_partial = kcg_false;
      Ack_SR_Req_To_Driver_partial = kcg_false;
      Ack_SN_Req_To_Driver_partial = kcg_false;
      Ack_SH_Req_To_Driver_partial = kcg_false;
      Ack_OS_Req_To_Driver_partial = kcg_false;
      Ack_LS_Req_To_Driver_partial = kcg_false;
      SM_StartOfMissionProcedure_fired_partial =
        outC->SM_StartOfMissionProcedure_fired_strong;
      SM_StartOfMissionProcedure_reset_nxt_partial = kcg_false;
      SM_StartOfMissionProcedure_state_nxt_partial =
        SSM_st_Procedure_Off_SM_StartOfMissionProcedure;
      outC->Ack_LS_Req_To_Driver = Ack_LS_Req_To_Driver_partial;
      outC->Ack_OS_Req_To_Driver = Ack_OS_Req_To_Driver_partial;
      outC->Ack_SH_Req_To_Driver = Ack_SH_Req_To_Driver_partial;
      outC->Ack_SN_Req_To_Driver = Ack_SN_Req_To_Driver_partial;
      outC->Ack_SR_Req_To_Driver = Ack_SR_Req_To_Driver_partial;
      outC->Ack_UN_Req_To_Driver = Ack_UN_Req_To_Driver_partial;
      outC->Clean_BG_List_SH_Area = Clean_BG_List_SH_Area_partial;
      outC->Condition_5 = Condition_5_partial;
      outC->Condition_6 = Condition_6_partial;
      outC->Condition_8 = Condition_8_partial;
      outC->Condition_10 = Condition_10_partial;
      outC->Condition_15 = Condition_15_partial;
      outC->Condition_46 = Condition_46_partial;
      outC->Condition_50 = Condition_50_partial;
      outC->Condition_58 = Condition_58_partial;
      outC->Condition_60 = Condition_60_partial;
      outC->Condition_70 = Condition_70_partial;
      outC->EB_Requested = EB_Requested_partial;
      outC->End_Of_Mission_Procedure_Req = End_Of_Mission_Procedure_Req_partial;
      outC->MA_Req_To_RBC = MA_Req_To_RBC_partial;
      outC->Request_For_SH_To_RBC = Request_For_SH_To_RBC_partial;
      outC->SH_Refused_By_RBC_To_DMI = SH_Refused_By_RBC_To_DMI_partial;
      outC->SM_StartOfMissionProcedure_state_nxt =
        SM_StartOfMissionProcedure_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM_StartOfMissionProcedure_reset_sel =
    outC->SM_StartOfMissionProcedure_reset_nxt;
  /* SM_StartOfMissionProcedure: */
  switch (outC->SM_StartOfMissionProcedure_state_act) {
    case SSM_st_EB_Requested_SM_StartOfMissionProcedure :
      outC->SM_StartOfMissionProcedure_reset_nxt =
        _286_SM_StartOfMissionProcedure_reset_nxt_partial;
      outC->SM_StartOfMissionProcedure_fired =
        _287_SM_StartOfMissionProcedure_fired_partial;
      break;
    case SSM_st_Procedure_On_SM_StartOfMissionProcedure :
      outC->SM_StartOfMissionProcedure_reset_nxt =
        _24_SM_StartOfMissionProcedure_reset_nxt_partial;
      outC->SM_StartOfMissionProcedure_fired =
        _25_SM_StartOfMissionProcedure_fired_partial;
      outC->init = kcg_false;
      break;
    case SSM_st_Procedure_Off_SM_StartOfMissionProcedure :
      outC->SM_StartOfMissionProcedure_reset_nxt =
        SM_StartOfMissionProcedure_reset_nxt_partial;
      outC->SM_StartOfMissionProcedure_fired =
        SM_StartOfMissionProcedure_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void Procedure_StartOfMission_init_Procedures(
  outC_Procedure_StartOfMission_Procedures *outC)
{
  outC->SM_StartOfMissionProcedure_fired =
    SSM_TR_no_trans_SM_StartOfMissionProcedure;
  outC->SM_StartOfMissionProcedure_fired_strong =
    SSM_TR_no_trans_SM_StartOfMissionProcedure;
  outC->SM_StartOfMissionProcedure_state_act =
    SSM_st_Procedure_Off_SM_StartOfMissionProcedure;
  outC->SM_StartOfMissionProcedure_state_sel =
    SSM_st_Procedure_Off_SM_StartOfMissionProcedure;
  outC->_L1_EB_Requested_SM_StartOfMissionProcedure = kcg_true;
  outC->_L2_NL_Mode_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure = kcg_true;
  outC->_L21_Procedure_SH_Initiated_By_Driver_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
    kcg_true;
  outC->_L11_Procedure_SH_Initiated_By_Driver_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
    M_LEVEL_Level_0;
  outC->_L12_Procedure_SH_Initiated_By_Driver_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
    kcg_true;
  outC->_L14_Procedure_SH_Initiated_By_Driver_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
    kcg_true;
  outC->_L20_Procedure_SH_Initiated_By_Driver_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
    kcg_true;
  outC->_L19_Procedure_SH_Initiated_By_Driver_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
    kcg_true;
  outC->_L18_Procedure_SH_Initiated_By_Driver_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
    kcg_true;
  outC->_L17_Procedure_SH_Initiated_By_Driver_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
    kcg_true;
  outC->_L16_Procedure_SH_Initiated_By_Driver_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
    kcg_true;
  outC->_L15_Procedure_SH_Initiated_By_Driver_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
    kcg_true;
  outC->_L1_Level_0_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure = kcg_true;
  outC->_L1_Level_NTC_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
    kcg_true;
  outC->_L1_SN_Mode_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure = kcg_true;
  outC->_L1_UN_Mode_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure = kcg_true;
  outC->_L20_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
    kcg_true;
  outC->_L19_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure.Distance =
    kcg_lit_int64(0);
  outC->_L19_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure.Mode =
    Profile_OS_Level_And_Mode_Types_Pkg;
  outC->_L19_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure.Speed =
    kcg_lit_int64(0);
  outC->_L19_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure.Length =
    kcg_lit_int64(0);
  outC->_L19_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure.Length_Ack =
    kcg_lit_int64(0);
  outC->_L18_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
    kcg_true;
  outC->_L17_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
    kcg_true;
  outC->_L16_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
    kcg_true;
  outC->_L14_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
    kcg_true;
  outC->_L13_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
    kcg_true;
  outC->_L12_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
    kcg_true;
  outC->_L11_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
    M_LEVEL_Level_0;
  outC->_L1_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
    kcg_true;
  outC->_L2_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
    kcg_true;
  outC->_L3_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
    kcg_true;
  outC->_L4_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
    kcg_true;
  outC->_L5_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
    kcg_true;
  outC->_L6_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
    kcg_true;
  outC->_L7_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
    kcg_true;
  outC->_L8_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
    kcg_true;
  outC->_L9_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
    kcg_true;
  outC->_L10_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure =
    kcg_true;
  outC->_1_SM_SoM_On_clock_Procedure_On_SM_StartOfMissionProcedure =
    SSM_st_Waiting_Driver_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
  outC->SM_SoM_On_clock_Procedure_On_SM_StartOfMissionProcedure =
    SSM_st_Waiting_Driver_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
  outC->SM_SoM_On_state_sel_Procedure_On_SM_StartOfMissionProcedure =
    SSM_st_Waiting_Driver_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
  outC->SM_SoM_On_state_act_Procedure_On_SM_StartOfMissionProcedure =
    SSM_st_Waiting_Driver_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
  outC->SM_SoM_On_fired_strong_Procedure_On_SM_StartOfMissionProcedure =
    SSM_TR_no_trans_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
  outC->SM_SoM_On_fired_Procedure_On_SM_StartOfMissionProcedure =
    SSM_TR_no_trans_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
  outC->SM_SoM_On_state_nxt_Procedure_On_SM_StartOfMissionProcedure =
    SSM_st_Waiting_Driver_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
  outC->SM_SoM_On_reset_act_Procedure_On_SM_StartOfMissionProcedure = kcg_true;
  outC->SM_SoM_On_reset_nxt_Procedure_On_SM_StartOfMissionProcedure = kcg_true;
  outC->init = kcg_true;
  outC->SH_Refused_By_RBC_To_DMI = kcg_true;
  outC->Request_For_SH_To_RBC = kcg_true;
  outC->MA_Req_To_RBC = kcg_true;
  outC->End_Of_Mission_Procedure_Req = kcg_true;
  outC->EB_Requested = kcg_true;
  outC->Condition_70 = kcg_true;
  outC->Condition_60 = kcg_true;
  outC->Condition_58 = kcg_true;
  outC->Condition_50 = kcg_true;
  outC->Condition_46 = kcg_true;
  outC->Condition_15 = kcg_true;
  outC->Condition_10 = kcg_true;
  outC->Condition_8 = kcg_true;
  outC->Condition_6 = kcg_true;
  outC->Condition_5 = kcg_true;
  outC->Clean_BG_List_SH_Area = kcg_true;
  outC->Ack_UN_Req_To_Driver = kcg_true;
  outC->Ack_SR_Req_To_Driver = kcg_true;
  outC->Ack_SN_Req_To_Driver = kcg_true;
  outC->Ack_SH_Req_To_Driver = kcg_true;
  outC->Ack_OS_Req_To_Driver = kcg_true;
  outC->Ack_LS_Req_To_Driver = kcg_true;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On:Procedure_SH_Initiated_By_Driver:_L15=(Procedures::SH_Initiated_By_Driver_On#1)/ */
  SH_Initiated_By_Driver_On_init_Procedures(
    &outC->Context_SH_Initiated_By_Driver_On_1);
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On:Waiting_Driver_Selection:_L1=(Procedures::Procedure_Start_L1_L2_L3#1)/ */
  Procedure_Start_L1_L2_L3_init_Procedures(
    &outC->Context_Procedure_Start_L1_L2_L3_1);
  outC->SM_StartOfMissionProcedure_reset_nxt = kcg_false;
  outC->SM_StartOfMissionProcedure_reset_act = kcg_false;
  outC->SM_StartOfMissionProcedure_state_nxt =
    SSM_st_Procedure_Off_SM_StartOfMissionProcedure;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Procedure_StartOfMission_reset_Procedures(
  outC_Procedure_StartOfMission_Procedures *outC)
{
  outC->init = kcg_true;
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On:Procedure_SH_Initiated_By_Driver:_L15=(Procedures::SH_Initiated_By_Driver_On#1)/ */
  SH_Initiated_By_Driver_On_reset_Procedures(
    &outC->Context_SH_Initiated_By_Driver_On_1);
  /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On:Waiting_Driver_Selection:_L1=(Procedures::Procedure_Start_L1_L2_L3#1)/ */
  Procedure_Start_L1_L2_L3_reset_Procedures(
    &outC->Context_Procedure_Start_L1_L2_L3_1);
  outC->SM_StartOfMissionProcedure_reset_nxt = kcg_false;
  outC->SM_StartOfMissionProcedure_reset_act = kcg_false;
  outC->SM_StartOfMissionProcedure_state_nxt =
    SSM_st_Procedure_Off_SM_StartOfMissionProcedure;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_Procedure_StartOfMission_Procedures(
  SV_Procedure_StartOfMission_Procedures *SV,
  outC_Procedure_StartOfMission_Procedures *outC)
{
  kcg_save_SV_Procedure_Start_L1_L2_L3_Procedures(
    &SV->Context_Procedure_Start_L1_L2_L3_1,
    &outC->Context_Procedure_Start_L1_L2_L3_1);
  kcg_save_SV_SH_Initiated_By_Driver_On_Procedures(
    &SV->Context_SH_Initiated_By_Driver_On_1,
    &outC->Context_SH_Initiated_By_Driver_On_1);
  SV->Context_SM_StartOfMissionProcedure_reset_nxt =
    outC->SM_StartOfMissionProcedure_reset_nxt;
  SV->Context_SM_StartOfMissionProcedure_reset_act =
    outC->SM_StartOfMissionProcedure_reset_act;
  SV->Context_SM_StartOfMissionProcedure_state_nxt =
    outC->SM_StartOfMissionProcedure_state_nxt;
  SV->Context_SM_SoM_On_state_nxt =
    outC->SM_SoM_On_state_nxt_Procedure_On_SM_StartOfMissionProcedure;
  SV->Context_SM_SoM_On_reset_act =
    outC->SM_SoM_On_reset_act_Procedure_On_SM_StartOfMissionProcedure;
  SV->Context_SM_SoM_On_reset_nxt =
    outC->SM_SoM_On_reset_nxt_Procedure_On_SM_StartOfMissionProcedure;
  SV->Context_init = outC->init;
}

void kcg_load_SV_Procedure_StartOfMission_Procedures(
  outC_Procedure_StartOfMission_Procedures *outC,
  SV_Procedure_StartOfMission_Procedures *SV)
{
  kcg_load_SV_Procedure_Start_L1_L2_L3_Procedures(
    &outC->Context_Procedure_Start_L1_L2_L3_1,
    &SV->Context_Procedure_Start_L1_L2_L3_1);
  kcg_load_SV_SH_Initiated_By_Driver_On_Procedures(
    &outC->Context_SH_Initiated_By_Driver_On_1,
    &SV->Context_SH_Initiated_By_Driver_On_1);
  outC->SM_StartOfMissionProcedure_reset_nxt =
    SV->Context_SM_StartOfMissionProcedure_reset_nxt;
  outC->SM_StartOfMissionProcedure_reset_act =
    SV->Context_SM_StartOfMissionProcedure_reset_act;
  outC->SM_StartOfMissionProcedure_state_nxt =
    SV->Context_SM_StartOfMissionProcedure_state_nxt;
  outC->SM_SoM_On_state_nxt_Procedure_On_SM_StartOfMissionProcedure =
    SV->Context_SM_SoM_On_state_nxt;
  outC->SM_SoM_On_reset_act_Procedure_On_SM_StartOfMissionProcedure =
    SV->Context_SM_SoM_On_reset_act;
  outC->SM_SoM_On_reset_nxt_Procedure_On_SM_StartOfMissionProcedure =
    SV->Context_SM_SoM_On_reset_nxt;
  outC->init = SV->Context_init;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Procedure_StartOfMission_Procedures.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

