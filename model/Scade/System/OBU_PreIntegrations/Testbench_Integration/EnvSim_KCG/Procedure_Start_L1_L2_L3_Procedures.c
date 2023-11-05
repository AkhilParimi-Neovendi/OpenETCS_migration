/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Procedure_Start_L1_L2_L3_Procedures.h"

/* Procedures::Procedure_Start_L1_L2_L3/ */
void Procedure_Start_L1_L2_L3_Procedures(
  /* Current_Level/ */
  M_LEVEL Current_Level,
  /* Driver_Ack_LS/ */
  kcg_bool Driver_Ack_LS,
  /* Driver_Ack_OS/ */
  kcg_bool Driver_Ack_OS,
  /* Driver_Ack_SH/ */
  kcg_bool Driver_Ack_SH,
  /* Driver_Ack_SR/ */
  kcg_bool Driver_Ack_SR,
  /* Driver_Req_Start/ */
  kcg_bool Driver_Req_Start,
  /* MA_SSP_Gradiant_Available/ */
  kcg_bool MA_SSP_Gradiant_Available,
  /* Mode_Profile_On_Board/ */
  T_Mode_Profile_Level_And_Mode_Types_Pkg *Mode_Profile_On_Board,
  /* RBC_Authorizes_SR/ */
  kcg_bool RBC_Authorizes_SR,
  outC_Procedure_Start_L1_L2_L3_Procedures *outC)
{
  /* Ack_LS_Req_To_Driver/ */
  static kcg_bool Ack_LS_Req_To_Driver_partial;
  /* Ack_OS_Req_To_Driver/ */
  static kcg_bool Ack_OS_Req_To_Driver_partial;
  /* Ack_SH_Req_To_Driver/ */
  static kcg_bool Ack_SH_Req_To_Driver_partial;
  /* Ack_SR_Req_To_Driver/ */
  static kcg_bool Ack_SR_Req_To_Driver_partial;
  /* Condition_8/ */
  static kcg_bool Condition_8_partial;
  /* Condition_10_31/ */
  static kcg_bool Condition_10_31_partial;
  /* Condition_15/ */
  static kcg_bool Condition_15_partial;
  /* Condition_50/ */
  static kcg_bool Condition_50_partial;
  /* Condition_70/ */
  static kcg_bool Condition_70_partial;
  /* MA_Req_To_RBC/ */
  static kcg_bool MA_Req_To_RBC_partial;
  /* SM_Start_L1_L2_L3: */
  static SSM_ST_SM_Start_L1_L2_L3 SM_Start_L1_L2_L3_state_nxt_partial;
  /* SM_Start_L1_L2_L3: */
  static kcg_bool SM_Start_L1_L2_L3_reset_nxt_partial;
  /* SM_Start_L1_L2_L3: */
  static SSM_TR_SM_Start_L1_L2_L3 SM_Start_L1_L2_L3_fired_partial;
  /* Ack_LS_Req_To_Driver/ */
  static kcg_bool _1_Ack_LS_Req_To_Driver_partial;
  /* Ack_OS_Req_To_Driver/ */
  static kcg_bool _2_Ack_OS_Req_To_Driver_partial;
  /* Ack_SH_Req_To_Driver/ */
  static kcg_bool _3_Ack_SH_Req_To_Driver_partial;
  /* Ack_SR_Req_To_Driver/ */
  static kcg_bool _4_Ack_SR_Req_To_Driver_partial;
  /* Condition_8/ */
  static kcg_bool _5_Condition_8_partial;
  /* Condition_10_31/ */
  static kcg_bool _6_Condition_10_31_partial;
  /* Condition_15/ */
  static kcg_bool _7_Condition_15_partial;
  /* Condition_50/ */
  static kcg_bool _8_Condition_50_partial;
  /* Condition_70/ */
  static kcg_bool _9_Condition_70_partial;
  /* MA_Req_To_RBC/ */
  static kcg_bool _10_MA_Req_To_RBC_partial;
  /* SM_Start_L1_L2_L3: */
  static SSM_ST_SM_Start_L1_L2_L3 _11_SM_Start_L1_L2_L3_state_nxt_partial;
  /* SM_Start_L1_L2_L3: */
  static kcg_bool _12_SM_Start_L1_L2_L3_reset_nxt_partial;
  /* SM_Start_L1_L2_L3: */
  static SSM_TR_SM_Start_L1_L2_L3 _13_SM_Start_L1_L2_L3_fired_partial;
  /* Ack_LS_Req_To_Driver/ */
  static kcg_bool _14_Ack_LS_Req_To_Driver_partial;
  /* Ack_OS_Req_To_Driver/ */
  static kcg_bool _15_Ack_OS_Req_To_Driver_partial;
  /* Ack_SH_Req_To_Driver/ */
  static kcg_bool _16_Ack_SH_Req_To_Driver_partial;
  /* Ack_SR_Req_To_Driver/ */
  static kcg_bool _17_Ack_SR_Req_To_Driver_partial;
  /* Condition_8/ */
  static kcg_bool _18_Condition_8_partial;
  /* Condition_10_31/ */
  static kcg_bool _19_Condition_10_31_partial;
  /* Condition_15/ */
  static kcg_bool _20_Condition_15_partial;
  /* Condition_50/ */
  static kcg_bool _21_Condition_50_partial;
  /* Condition_70/ */
  static kcg_bool _22_Condition_70_partial;
  /* MA_Req_To_RBC/ */
  static kcg_bool _23_MA_Req_To_RBC_partial;
  /* SM_Start_L1_L2_L3: */
  static SSM_ST_SM_Start_L1_L2_L3 _24_SM_Start_L1_L2_L3_state_nxt_partial;
  /* SM_Start_L1_L2_L3: */
  static kcg_bool _25_SM_Start_L1_L2_L3_reset_nxt_partial;
  /* SM_Start_L1_L2_L3: */
  static SSM_TR_SM_Start_L1_L2_L3 _26_SM_Start_L1_L2_L3_fired_partial;
  /* Ack_LS_Req_To_Driver/ */
  static kcg_bool _27_Ack_LS_Req_To_Driver_partial;
  /* Ack_OS_Req_To_Driver/ */
  static kcg_bool _28_Ack_OS_Req_To_Driver_partial;
  /* Ack_SH_Req_To_Driver/ */
  static kcg_bool _29_Ack_SH_Req_To_Driver_partial;
  /* Ack_SR_Req_To_Driver/ */
  static kcg_bool _30_Ack_SR_Req_To_Driver_partial;
  /* Condition_8/ */
  static kcg_bool _31_Condition_8_partial;
  /* Condition_10_31/ */
  static kcg_bool _32_Condition_10_31_partial;
  /* Condition_15/ */
  static kcg_bool _33_Condition_15_partial;
  /* Condition_50/ */
  static kcg_bool _34_Condition_50_partial;
  /* Condition_70/ */
  static kcg_bool _35_Condition_70_partial;
  /* MA_Req_To_RBC/ */
  static kcg_bool _36_MA_Req_To_RBC_partial;
  /* SM_Start_L1_L2_L3: */
  static SSM_ST_SM_Start_L1_L2_L3 _37_SM_Start_L1_L2_L3_state_nxt_partial;
  /* SM_Start_L1_L2_L3: */
  static kcg_bool _38_SM_Start_L1_L2_L3_reset_nxt_partial;
  /* SM_Start_L1_L2_L3: */
  static SSM_TR_SM_Start_L1_L2_L3 _39_SM_Start_L1_L2_L3_fired_partial;
  /* Ack_LS_Req_To_Driver/ */
  static kcg_bool _40_Ack_LS_Req_To_Driver_partial;
  /* Ack_OS_Req_To_Driver/ */
  static kcg_bool _41_Ack_OS_Req_To_Driver_partial;
  /* Ack_SH_Req_To_Driver/ */
  static kcg_bool _42_Ack_SH_Req_To_Driver_partial;
  /* Ack_SR_Req_To_Driver/ */
  static kcg_bool _43_Ack_SR_Req_To_Driver_partial;
  /* Condition_8/ */
  static kcg_bool _44_Condition_8_partial;
  /* Condition_10_31/ */
  static kcg_bool _45_Condition_10_31_partial;
  /* Condition_15/ */
  static kcg_bool _46_Condition_15_partial;
  /* Condition_50/ */
  static kcg_bool _47_Condition_50_partial;
  /* Condition_70/ */
  static kcg_bool _48_Condition_70_partial;
  /* MA_Req_To_RBC/ */
  static kcg_bool _49_MA_Req_To_RBC_partial;
  /* SM_Start_L1_L2_L3: */
  static SSM_ST_SM_Start_L1_L2_L3 _50_SM_Start_L1_L2_L3_state_nxt_partial;
  /* SM_Start_L1_L2_L3: */
  static kcg_bool _51_SM_Start_L1_L2_L3_reset_nxt_partial;
  /* SM_Start_L1_L2_L3: */
  static SSM_TR_SM_Start_L1_L2_L3 _52_SM_Start_L1_L2_L3_fired_partial;
  /* Ack_LS_Req_To_Driver/ */
  static kcg_bool _53_Ack_LS_Req_To_Driver_partial;
  /* Ack_OS_Req_To_Driver/ */
  static kcg_bool _54_Ack_OS_Req_To_Driver_partial;
  /* Ack_SH_Req_To_Driver/ */
  static kcg_bool _55_Ack_SH_Req_To_Driver_partial;
  /* Ack_SR_Req_To_Driver/ */
  static kcg_bool _56_Ack_SR_Req_To_Driver_partial;
  /* Condition_8/ */
  static kcg_bool _57_Condition_8_partial;
  /* Condition_10_31/ */
  static kcg_bool _58_Condition_10_31_partial;
  /* Condition_15/ */
  static kcg_bool _59_Condition_15_partial;
  /* Condition_50/ */
  static kcg_bool _60_Condition_50_partial;
  /* Condition_70/ */
  static kcg_bool _61_Condition_70_partial;
  /* MA_Req_To_RBC/ */
  static kcg_bool _62_MA_Req_To_RBC_partial;
  /* SM_Start_L1_L2_L3: */
  static SSM_ST_SM_Start_L1_L2_L3 _63_SM_Start_L1_L2_L3_state_nxt_partial;
  /* SM_Start_L1_L2_L3: */
  static kcg_bool _64_SM_Start_L1_L2_L3_reset_nxt_partial;
  /* SM_Start_L1_L2_L3: */
  static SSM_TR_SM_Start_L1_L2_L3 _65_SM_Start_L1_L2_L3_fired_partial;
  /* Ack_LS_Req_To_Driver/ */
  static kcg_bool _66_Ack_LS_Req_To_Driver_partial;
  /* Ack_OS_Req_To_Driver/ */
  static kcg_bool _67_Ack_OS_Req_To_Driver_partial;
  /* Ack_SH_Req_To_Driver/ */
  static kcg_bool _68_Ack_SH_Req_To_Driver_partial;
  /* Ack_SR_Req_To_Driver/ */
  static kcg_bool _69_Ack_SR_Req_To_Driver_partial;
  /* Condition_8/ */
  static kcg_bool _70_Condition_8_partial;
  /* Condition_10_31/ */
  static kcg_bool _71_Condition_10_31_partial;
  /* Condition_15/ */
  static kcg_bool _72_Condition_15_partial;
  /* Condition_50/ */
  static kcg_bool _73_Condition_50_partial;
  /* Condition_70/ */
  static kcg_bool _74_Condition_70_partial;
  /* MA_Req_To_RBC/ */
  static kcg_bool _75_MA_Req_To_RBC_partial;
  /* SM_Start_L1_L2_L3: */
  static SSM_ST_SM_Start_L1_L2_L3 _76_SM_Start_L1_L2_L3_state_nxt_partial;
  /* SM_Start_L1_L2_L3: */
  static kcg_bool _77_SM_Start_L1_L2_L3_reset_nxt_partial;
  /* SM_Start_L1_L2_L3: */
  static SSM_TR_SM_Start_L1_L2_L3 _78_SM_Start_L1_L2_L3_fired_partial;
  /* Ack_LS_Req_To_Driver/ */
  static kcg_bool _79_Ack_LS_Req_To_Driver_partial;
  /* Ack_OS_Req_To_Driver/ */
  static kcg_bool _80_Ack_OS_Req_To_Driver_partial;
  /* Ack_SH_Req_To_Driver/ */
  static kcg_bool _81_Ack_SH_Req_To_Driver_partial;
  /* Ack_SR_Req_To_Driver/ */
  static kcg_bool _82_Ack_SR_Req_To_Driver_partial;
  /* Condition_8/ */
  static kcg_bool _83_Condition_8_partial;
  /* Condition_10_31/ */
  static kcg_bool _84_Condition_10_31_partial;
  /* Condition_15/ */
  static kcg_bool _85_Condition_15_partial;
  /* Condition_50/ */
  static kcg_bool _86_Condition_50_partial;
  /* Condition_70/ */
  static kcg_bool _87_Condition_70_partial;
  /* MA_Req_To_RBC/ */
  static kcg_bool _88_MA_Req_To_RBC_partial;
  /* SM_Start_L1_L2_L3: */
  static SSM_ST_SM_Start_L1_L2_L3 _89_SM_Start_L1_L2_L3_state_nxt_partial;
  /* SM_Start_L1_L2_L3: */
  static kcg_bool _90_SM_Start_L1_L2_L3_reset_nxt_partial;
  /* SM_Start_L1_L2_L3: */
  static SSM_TR_SM_Start_L1_L2_L3 _91_SM_Start_L1_L2_L3_fired_partial;
  /* Ack_LS_Req_To_Driver/ */
  static kcg_bool _92_Ack_LS_Req_To_Driver_partial;
  /* Ack_OS_Req_To_Driver/ */
  static kcg_bool _93_Ack_OS_Req_To_Driver_partial;
  /* Ack_SH_Req_To_Driver/ */
  static kcg_bool _94_Ack_SH_Req_To_Driver_partial;
  /* Ack_SR_Req_To_Driver/ */
  static kcg_bool _95_Ack_SR_Req_To_Driver_partial;
  /* Condition_8/ */
  static kcg_bool _96_Condition_8_partial;
  /* Condition_10_31/ */
  static kcg_bool _97_Condition_10_31_partial;
  /* Condition_15/ */
  static kcg_bool _98_Condition_15_partial;
  /* Condition_50/ */
  static kcg_bool _99_Condition_50_partial;
  /* Condition_70/ */
  static kcg_bool _100_Condition_70_partial;
  /* MA_Req_To_RBC/ */
  static kcg_bool _101_MA_Req_To_RBC_partial;
  /* SM_Start_L1_L2_L3: */
  static SSM_ST_SM_Start_L1_L2_L3 _102_SM_Start_L1_L2_L3_state_nxt_partial;
  /* SM_Start_L1_L2_L3: */
  static kcg_bool _103_SM_Start_L1_L2_L3_reset_nxt_partial;
  /* SM_Start_L1_L2_L3: */
  static SSM_TR_SM_Start_L1_L2_L3 _104_SM_Start_L1_L2_L3_fired_partial;
  /* Ack_LS_Req_To_Driver/ */
  static kcg_bool _105_Ack_LS_Req_To_Driver_partial;
  /* Ack_OS_Req_To_Driver/ */
  static kcg_bool _106_Ack_OS_Req_To_Driver_partial;
  /* Ack_SH_Req_To_Driver/ */
  static kcg_bool _107_Ack_SH_Req_To_Driver_partial;
  /* Ack_SR_Req_To_Driver/ */
  static kcg_bool _108_Ack_SR_Req_To_Driver_partial;
  /* Condition_8/ */
  static kcg_bool _109_Condition_8_partial;
  /* Condition_10_31/ */
  static kcg_bool _110_Condition_10_31_partial;
  /* Condition_15/ */
  static kcg_bool _111_Condition_15_partial;
  /* Condition_50/ */
  static kcg_bool _112_Condition_50_partial;
  /* Condition_70/ */
  static kcg_bool _113_Condition_70_partial;
  /* MA_Req_To_RBC/ */
  static kcg_bool _114_MA_Req_To_RBC_partial;
  /* SM_Start_L1_L2_L3: */
  static SSM_ST_SM_Start_L1_L2_L3 _115_SM_Start_L1_L2_L3_state_nxt_partial;
  /* SM_Start_L1_L2_L3: */
  static kcg_bool _116_SM_Start_L1_L2_L3_reset_nxt_partial;
  /* SM_Start_L1_L2_L3: */
  static SSM_TR_SM_Start_L1_L2_L3 _117_SM_Start_L1_L2_L3_fired_partial;
  /* Ack_LS_Req_To_Driver/ */
  static kcg_bool _118_Ack_LS_Req_To_Driver_partial;
  /* Ack_OS_Req_To_Driver/ */
  static kcg_bool _119_Ack_OS_Req_To_Driver_partial;
  /* Ack_SH_Req_To_Driver/ */
  static kcg_bool _120_Ack_SH_Req_To_Driver_partial;
  /* Ack_SR_Req_To_Driver/ */
  static kcg_bool _121_Ack_SR_Req_To_Driver_partial;
  /* Condition_8/ */
  static kcg_bool _122_Condition_8_partial;
  /* Condition_10_31/ */
  static kcg_bool _123_Condition_10_31_partial;
  /* Condition_15/ */
  static kcg_bool _124_Condition_15_partial;
  /* Condition_50/ */
  static kcg_bool _125_Condition_50_partial;
  /* Condition_70/ */
  static kcg_bool _126_Condition_70_partial;
  /* MA_Req_To_RBC/ */
  static kcg_bool _127_MA_Req_To_RBC_partial;
  /* SM_Start_L1_L2_L3: */
  static SSM_ST_SM_Start_L1_L2_L3 _128_SM_Start_L1_L2_L3_state_nxt_partial;
  /* SM_Start_L1_L2_L3: */
  static kcg_bool _129_SM_Start_L1_L2_L3_reset_nxt_partial;
  /* SM_Start_L1_L2_L3: */
  static SSM_TR_SM_Start_L1_L2_L3 _130_SM_Start_L1_L2_L3_fired_partial;
  /* SM_Start_L1_L2_L3: */
  static SSM_ST_SM_Start_L1_L2_L3 SM_Start_L1_L2_L3_state_act_partial;
  /* SM_Start_L1_L2_L3: */
  static kcg_bool SM_Start_L1_L2_L3_reset_act_partial;
  /* SM_Start_L1_L2_L3: */
  static SSM_TR_SM_Start_L1_L2_L3 SM_Start_L1_L2_L3_fired_strong_partial;
  /* SM_Start_L1_L2_L3:Waiting_Driver_Starting_Command:<1><2> */
  static kcg_bool tr_2_guard_1_Waiting_Driver_Starting_Command_SM_Start_L1_L2_L3;
  /* SM_Start_L1_L2_L3:Waiting_Driver_Starting_Command:<1><1> */
  static kcg_bool tr_1_guard_1_Waiting_Driver_Starting_Command_SM_Start_L1_L2_L3;
  /* SM_Start_L1_L2_L3:Waiting_Driver_Starting_Command:<1> */
  static kcg_bool tr_1_guard_Waiting_Driver_Starting_Command_SM_Start_L1_L2_L3;
  /* SM_Start_L1_L2_L3: */
  static SSM_ST_SM_Start_L1_L2_L3 _131_SM_Start_L1_L2_L3_state_act_partial;
  /* SM_Start_L1_L2_L3: */
  static kcg_bool _132_SM_Start_L1_L2_L3_reset_act_partial;
  /* SM_Start_L1_L2_L3: */
  static SSM_TR_SM_Start_L1_L2_L3 _133_SM_Start_L1_L2_L3_fired_strong_partial;
  /* SM_Start_L1_L2_L3:Level_1:<1> */
  static kcg_bool tr_1_guard_Level_1_SM_Start_L1_L2_L3;
  /* SM_Start_L1_L2_L3: */
  static SSM_ST_SM_Start_L1_L2_L3 _134_SM_Start_L1_L2_L3_state_act_partial;
  /* SM_Start_L1_L2_L3: */
  static kcg_bool _135_SM_Start_L1_L2_L3_reset_act_partial;
  /* SM_Start_L1_L2_L3: */
  static SSM_TR_SM_Start_L1_L2_L3 _136_SM_Start_L1_L2_L3_fired_strong_partial;
  /* SM_Start_L1_L2_L3:Level_2_3:<5> */
  static kcg_bool tr_5_guard_Level_2_3_SM_Start_L1_L2_L3;
  /* SM_Start_L1_L2_L3:Level_2_3:<4> */
  static kcg_bool tr_4_guard_Level_2_3_SM_Start_L1_L2_L3;
  /* SM_Start_L1_L2_L3:Level_2_3:<3> */
  static kcg_bool tr_3_guard_Level_2_3_SM_Start_L1_L2_L3;
  /* SM_Start_L1_L2_L3:Level_2_3:<2> */
  static kcg_bool tr_2_guard_Level_2_3_SM_Start_L1_L2_L3;
  /* SM_Start_L1_L2_L3:Level_2_3:<1> */
  static kcg_bool tr_1_guard_Level_2_3_SM_Start_L1_L2_L3;
  /* SM_Start_L1_L2_L3: */
  static SSM_ST_SM_Start_L1_L2_L3 _137_SM_Start_L1_L2_L3_state_act_partial;
  /* SM_Start_L1_L2_L3: */
  static kcg_bool _138_SM_Start_L1_L2_L3_reset_act_partial;
  /* SM_Start_L1_L2_L3: */
  static SSM_TR_SM_Start_L1_L2_L3 _139_SM_Start_L1_L2_L3_fired_strong_partial;
  /* SM_Start_L1_L2_L3: */
  static SSM_ST_SM_Start_L1_L2_L3 _140_SM_Start_L1_L2_L3_state_act_partial;
  /* SM_Start_L1_L2_L3: */
  static kcg_bool _141_SM_Start_L1_L2_L3_reset_act_partial;
  /* SM_Start_L1_L2_L3: */
  static SSM_TR_SM_Start_L1_L2_L3 _142_SM_Start_L1_L2_L3_fired_strong_partial;
  /* SM_Start_L1_L2_L3: */
  static SSM_ST_SM_Start_L1_L2_L3 _143_SM_Start_L1_L2_L3_state_act_partial;
  /* SM_Start_L1_L2_L3: */
  static kcg_bool _144_SM_Start_L1_L2_L3_reset_act_partial;
  /* SM_Start_L1_L2_L3: */
  static SSM_TR_SM_Start_L1_L2_L3 _145_SM_Start_L1_L2_L3_fired_strong_partial;
  /* SM_Start_L1_L2_L3: */
  static SSM_ST_SM_Start_L1_L2_L3 _146_SM_Start_L1_L2_L3_state_act_partial;
  /* SM_Start_L1_L2_L3: */
  static kcg_bool _147_SM_Start_L1_L2_L3_reset_act_partial;
  /* SM_Start_L1_L2_L3: */
  static SSM_TR_SM_Start_L1_L2_L3 _148_SM_Start_L1_L2_L3_fired_strong_partial;
  /* SM_Start_L1_L2_L3: */
  static SSM_ST_SM_Start_L1_L2_L3 _149_SM_Start_L1_L2_L3_state_act_partial;
  /* SM_Start_L1_L2_L3: */
  static kcg_bool _150_SM_Start_L1_L2_L3_reset_act_partial;
  /* SM_Start_L1_L2_L3: */
  static SSM_TR_SM_Start_L1_L2_L3 _151_SM_Start_L1_L2_L3_fired_strong_partial;
  /* SM_Start_L1_L2_L3: */
  static SSM_ST_SM_Start_L1_L2_L3 _152_SM_Start_L1_L2_L3_state_act_partial;
  /* SM_Start_L1_L2_L3: */
  static kcg_bool _153_SM_Start_L1_L2_L3_reset_act_partial;
  /* SM_Start_L1_L2_L3: */
  static SSM_TR_SM_Start_L1_L2_L3 _154_SM_Start_L1_L2_L3_fired_strong_partial;
  /* SM_Start_L1_L2_L3:Wait_For_OS:<1> */
  static kcg_bool tr_1_guard_Wait_For_OS_SM_Start_L1_L2_L3;
  /* SM_Start_L1_L2_L3: */
  static SSM_ST_SM_Start_L1_L2_L3 _155_SM_Start_L1_L2_L3_state_act_partial;
  /* SM_Start_L1_L2_L3: */
  static kcg_bool _156_SM_Start_L1_L2_L3_reset_act_partial;
  /* SM_Start_L1_L2_L3: */
  static SSM_TR_SM_Start_L1_L2_L3 _157_SM_Start_L1_L2_L3_fired_strong_partial;
  /* SM_Start_L1_L2_L3:Wait_For_SH:<1> */
  static kcg_bool tr_1_guard_Wait_For_SH_SM_Start_L1_L2_L3;
  /* SM_Start_L1_L2_L3: */
  static SSM_ST_SM_Start_L1_L2_L3 _158_SM_Start_L1_L2_L3_state_act_partial;
  /* SM_Start_L1_L2_L3: */
  static kcg_bool _159_SM_Start_L1_L2_L3_reset_act_partial;
  /* SM_Start_L1_L2_L3: */
  static SSM_TR_SM_Start_L1_L2_L3 _160_SM_Start_L1_L2_L3_fired_strong_partial;
  /* SM_Start_L1_L2_L3:Wait_For_LS:<1> */
  static kcg_bool tr_1_guard_Wait_For_LS_SM_Start_L1_L2_L3;
  /* SM_Start_L1_L2_L3: */
  static kcg_bool SM_Start_L1_L2_L3_reset_sel;
  /* SM_Start_L1_L2_L3: */
  static kcg_bool SM_Start_L1_L2_L3_reset_prv;

  kcg_copy_T_Mode_Profile_Level_And_Mode_Types_Pkg(
    &outC->_L26,
    Mode_Profile_On_Board);
  outC->_L19 = outC->_L26.Mode;
  outC->Loc_Mode_Profile = outC->_L19;
  outC->SM_Start_L1_L2_L3_state_sel = outC->SM_Start_L1_L2_L3_state_nxt;
  /* SM_Start_L1_L2_L3: */
  switch (outC->SM_Start_L1_L2_L3_state_sel) {
    case SSM_st_Wait_For_LS_SM_Start_L1_L2_L3 :
      tr_1_guard_Wait_For_LS_SM_Start_L1_L2_L3 = Driver_Ack_LS;
      if (tr_1_guard_Wait_For_LS_SM_Start_L1_L2_L3) {
        _158_SM_Start_L1_L2_L3_state_act_partial = SSM_st_LS_Mode_SM_Start_L1_L2_L3;
      }
      else {
        _158_SM_Start_L1_L2_L3_state_act_partial = SSM_st_Wait_For_LS_SM_Start_L1_L2_L3;
      }
      outC->SM_Start_L1_L2_L3_state_act = _158_SM_Start_L1_L2_L3_state_act_partial;
      break;
    case SSM_st_Wait_For_SH_SM_Start_L1_L2_L3 :
      tr_1_guard_Wait_For_SH_SM_Start_L1_L2_L3 = Driver_Ack_SH;
      if (tr_1_guard_Wait_For_SH_SM_Start_L1_L2_L3) {
        _155_SM_Start_L1_L2_L3_state_act_partial = SSM_st_SH_Mode_SM_Start_L1_L2_L3;
      }
      else {
        _155_SM_Start_L1_L2_L3_state_act_partial = SSM_st_Wait_For_SH_SM_Start_L1_L2_L3;
      }
      outC->SM_Start_L1_L2_L3_state_act = _155_SM_Start_L1_L2_L3_state_act_partial;
      break;
    case SSM_st_Wait_For_OS_SM_Start_L1_L2_L3 :
      tr_1_guard_Wait_For_OS_SM_Start_L1_L2_L3 = Driver_Ack_OS;
      if (tr_1_guard_Wait_For_OS_SM_Start_L1_L2_L3) {
        _152_SM_Start_L1_L2_L3_state_act_partial = SSM_st_OS_Mode_SM_Start_L1_L2_L3;
      }
      else {
        _152_SM_Start_L1_L2_L3_state_act_partial = SSM_st_Wait_For_OS_SM_Start_L1_L2_L3;
      }
      outC->SM_Start_L1_L2_L3_state_act = _152_SM_Start_L1_L2_L3_state_act_partial;
      break;
    case SSM_st_LS_Mode_SM_Start_L1_L2_L3 :
      _149_SM_Start_L1_L2_L3_state_act_partial = SSM_st_LS_Mode_SM_Start_L1_L2_L3;
      outC->SM_Start_L1_L2_L3_state_act = _149_SM_Start_L1_L2_L3_state_act_partial;
      break;
    case SSM_st_SH_Mode_SM_Start_L1_L2_L3 :
      _146_SM_Start_L1_L2_L3_state_act_partial = SSM_st_SH_Mode_SM_Start_L1_L2_L3;
      outC->SM_Start_L1_L2_L3_state_act = _146_SM_Start_L1_L2_L3_state_act_partial;
      break;
    case SSM_st_OS_Mode_SM_Start_L1_L2_L3 :
      _143_SM_Start_L1_L2_L3_state_act_partial = SSM_st_OS_Mode_SM_Start_L1_L2_L3;
      outC->SM_Start_L1_L2_L3_state_act = _143_SM_Start_L1_L2_L3_state_act_partial;
      break;
    case SSM_st_FS_Mode_SM_Start_L1_L2_L3 :
      _140_SM_Start_L1_L2_L3_state_act_partial = SSM_st_FS_Mode_SM_Start_L1_L2_L3;
      outC->SM_Start_L1_L2_L3_state_act = _140_SM_Start_L1_L2_L3_state_act_partial;
      break;
    case SSM_st_SR_Mode_SM_Start_L1_L2_L3 :
      _137_SM_Start_L1_L2_L3_state_act_partial = SSM_st_SR_Mode_SM_Start_L1_L2_L3;
      outC->SM_Start_L1_L2_L3_state_act = _137_SM_Start_L1_L2_L3_state_act_partial;
      break;
    case SSM_st_Level_2_3_SM_Start_L1_L2_L3 :
      tr_5_guard_Level_2_3_SM_Start_L1_L2_L3 = outC->Loc_Mode_Profile ==
        Profile_LS_Level_And_Mode_Types_Pkg;
      tr_4_guard_Level_2_3_SM_Start_L1_L2_L3 = outC->Loc_Mode_Profile ==
        Profile_SH_Level_And_Mode_Types_Pkg;
      tr_3_guard_Level_2_3_SM_Start_L1_L2_L3 = outC->Loc_Mode_Profile ==
        Profile_OS_Level_And_Mode_Types_Pkg;
      tr_2_guard_Level_2_3_SM_Start_L1_L2_L3 = MA_SSP_Gradiant_Available &
        (outC->Loc_Mode_Profile == No_Profile_Level_And_Mode_Types_Pkg);
      tr_1_guard_Level_2_3_SM_Start_L1_L2_L3 = RBC_Authorizes_SR;
      if (tr_1_guard_Level_2_3_SM_Start_L1_L2_L3) {
        _134_SM_Start_L1_L2_L3_state_act_partial = SSM_st_Level_1_SM_Start_L1_L2_L3;
      }
      else if (tr_2_guard_Level_2_3_SM_Start_L1_L2_L3) {
        _134_SM_Start_L1_L2_L3_state_act_partial = SSM_st_FS_Mode_SM_Start_L1_L2_L3;
      }
      else if (tr_3_guard_Level_2_3_SM_Start_L1_L2_L3) {
        _134_SM_Start_L1_L2_L3_state_act_partial = SSM_st_Wait_For_OS_SM_Start_L1_L2_L3;
      }
      else if (tr_4_guard_Level_2_3_SM_Start_L1_L2_L3) {
        _134_SM_Start_L1_L2_L3_state_act_partial = SSM_st_Wait_For_SH_SM_Start_L1_L2_L3;
      }
      else if (tr_5_guard_Level_2_3_SM_Start_L1_L2_L3) {
        _134_SM_Start_L1_L2_L3_state_act_partial = SSM_st_Wait_For_LS_SM_Start_L1_L2_L3;
      }
      else {
        _134_SM_Start_L1_L2_L3_state_act_partial = SSM_st_Level_2_3_SM_Start_L1_L2_L3;
      }
      outC->SM_Start_L1_L2_L3_state_act = _134_SM_Start_L1_L2_L3_state_act_partial;
      break;
    case SSM_st_Level_1_SM_Start_L1_L2_L3 :
      tr_1_guard_Level_1_SM_Start_L1_L2_L3 = Driver_Ack_SR;
      if (tr_1_guard_Level_1_SM_Start_L1_L2_L3) {
        _131_SM_Start_L1_L2_L3_state_act_partial = SSM_st_SR_Mode_SM_Start_L1_L2_L3;
      }
      else {
        _131_SM_Start_L1_L2_L3_state_act_partial = SSM_st_Level_1_SM_Start_L1_L2_L3;
      }
      outC->SM_Start_L1_L2_L3_state_act = _131_SM_Start_L1_L2_L3_state_act_partial;
      break;
    case SSM_st_Waiting_Driver_Starting_Command_SM_Start_L1_L2_L3 :
      tr_1_guard_1_Waiting_Driver_Starting_Command_SM_Start_L1_L2_L3 =
        Current_Level == M_LEVEL_Level_1;
      tr_2_guard_1_Waiting_Driver_Starting_Command_SM_Start_L1_L2_L3 =
        (Current_Level == M_LEVEL_Level_2) | (Current_Level == M_LEVEL_Level_3);
      tr_1_guard_Waiting_Driver_Starting_Command_SM_Start_L1_L2_L3 =
        Driver_Req_Start &
        (tr_1_guard_1_Waiting_Driver_Starting_Command_SM_Start_L1_L2_L3 |
          tr_2_guard_1_Waiting_Driver_Starting_Command_SM_Start_L1_L2_L3);
      if (tr_1_guard_Waiting_Driver_Starting_Command_SM_Start_L1_L2_L3) {
        if (tr_1_guard_1_Waiting_Driver_Starting_Command_SM_Start_L1_L2_L3) {
          SM_Start_L1_L2_L3_state_act_partial = SSM_st_Level_1_SM_Start_L1_L2_L3;
        }
        else {
          SM_Start_L1_L2_L3_state_act_partial = SSM_st_Level_2_3_SM_Start_L1_L2_L3;
        }
      }
      else {
        SM_Start_L1_L2_L3_state_act_partial =
          SSM_st_Waiting_Driver_Starting_Command_SM_Start_L1_L2_L3;
      }
      outC->SM_Start_L1_L2_L3_state_act = SM_Start_L1_L2_L3_state_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM_Start_L1_L2_L3_state_act) {
    case SSM_st_Wait_For_LS_SM_Start_L1_L2_L3 :
      _127_MA_Req_To_RBC_partial = kcg_false;
      _126_Condition_70_partial = kcg_false;
      _125_Condition_50_partial = kcg_false;
      _124_Condition_15_partial = kcg_false;
      _123_Condition_10_31_partial = kcg_false;
      _122_Condition_8_partial = kcg_false;
      _121_Ack_SR_Req_To_Driver_partial = kcg_false;
      _120_Ack_SH_Req_To_Driver_partial = kcg_false;
      _119_Ack_OS_Req_To_Driver_partial = kcg_false;
      break;
    default :
      /* this branch is empty */
      break;
  }
  /* SM_Start_L1_L2_L3: */
  switch (outC->SM_Start_L1_L2_L3_state_sel) {
    case SSM_st_Wait_For_LS_SM_Start_L1_L2_L3 :
      if (tr_1_guard_Wait_For_LS_SM_Start_L1_L2_L3) {
        _160_SM_Start_L1_L2_L3_fired_strong_partial =
          SSM_TR_Wait_For_LS_LS_Mode_1_Wait_For_LS_SM_Start_L1_L2_L3;
      }
      else {
        _160_SM_Start_L1_L2_L3_fired_strong_partial = SSM_TR_no_trans_SM_Start_L1_L2_L3;
      }
      outC->SM_Start_L1_L2_L3_fired_strong =
        _160_SM_Start_L1_L2_L3_fired_strong_partial;
      break;
    case SSM_st_Wait_For_SH_SM_Start_L1_L2_L3 :
      if (tr_1_guard_Wait_For_SH_SM_Start_L1_L2_L3) {
        _157_SM_Start_L1_L2_L3_fired_strong_partial =
          SSM_TR_Wait_For_SH_SH_Mode_1_Wait_For_SH_SM_Start_L1_L2_L3;
      }
      else {
        _157_SM_Start_L1_L2_L3_fired_strong_partial = SSM_TR_no_trans_SM_Start_L1_L2_L3;
      }
      outC->SM_Start_L1_L2_L3_fired_strong =
        _157_SM_Start_L1_L2_L3_fired_strong_partial;
      break;
    case SSM_st_Wait_For_OS_SM_Start_L1_L2_L3 :
      if (tr_1_guard_Wait_For_OS_SM_Start_L1_L2_L3) {
        _154_SM_Start_L1_L2_L3_fired_strong_partial =
          SSM_TR_Wait_For_OS_OS_Mode_1_Wait_For_OS_SM_Start_L1_L2_L3;
      }
      else {
        _154_SM_Start_L1_L2_L3_fired_strong_partial = SSM_TR_no_trans_SM_Start_L1_L2_L3;
      }
      outC->SM_Start_L1_L2_L3_fired_strong =
        _154_SM_Start_L1_L2_L3_fired_strong_partial;
      break;
    case SSM_st_LS_Mode_SM_Start_L1_L2_L3 :
      _151_SM_Start_L1_L2_L3_fired_strong_partial = SSM_TR_no_trans_SM_Start_L1_L2_L3;
      outC->SM_Start_L1_L2_L3_fired_strong =
        _151_SM_Start_L1_L2_L3_fired_strong_partial;
      break;
    case SSM_st_SH_Mode_SM_Start_L1_L2_L3 :
      _148_SM_Start_L1_L2_L3_fired_strong_partial = SSM_TR_no_trans_SM_Start_L1_L2_L3;
      outC->SM_Start_L1_L2_L3_fired_strong =
        _148_SM_Start_L1_L2_L3_fired_strong_partial;
      break;
    case SSM_st_OS_Mode_SM_Start_L1_L2_L3 :
      _145_SM_Start_L1_L2_L3_fired_strong_partial = SSM_TR_no_trans_SM_Start_L1_L2_L3;
      outC->SM_Start_L1_L2_L3_fired_strong =
        _145_SM_Start_L1_L2_L3_fired_strong_partial;
      break;
    case SSM_st_FS_Mode_SM_Start_L1_L2_L3 :
      _142_SM_Start_L1_L2_L3_fired_strong_partial = SSM_TR_no_trans_SM_Start_L1_L2_L3;
      outC->SM_Start_L1_L2_L3_fired_strong =
        _142_SM_Start_L1_L2_L3_fired_strong_partial;
      break;
    case SSM_st_SR_Mode_SM_Start_L1_L2_L3 :
      _139_SM_Start_L1_L2_L3_fired_strong_partial = SSM_TR_no_trans_SM_Start_L1_L2_L3;
      outC->SM_Start_L1_L2_L3_fired_strong =
        _139_SM_Start_L1_L2_L3_fired_strong_partial;
      break;
    case SSM_st_Level_2_3_SM_Start_L1_L2_L3 :
      if (tr_1_guard_Level_2_3_SM_Start_L1_L2_L3) {
        _136_SM_Start_L1_L2_L3_fired_strong_partial =
          SSM_TR_Level_2_3_Level_1_1_Level_2_3_SM_Start_L1_L2_L3;
      }
      else if (tr_2_guard_Level_2_3_SM_Start_L1_L2_L3) {
        _136_SM_Start_L1_L2_L3_fired_strong_partial =
          SSM_TR_Level_2_3_FS_Mode_2_Level_2_3_SM_Start_L1_L2_L3;
      }
      else if (tr_3_guard_Level_2_3_SM_Start_L1_L2_L3) {
        _136_SM_Start_L1_L2_L3_fired_strong_partial =
          SSM_TR_Level_2_3_Wait_For_OS_3_Level_2_3_SM_Start_L1_L2_L3;
      }
      else if (tr_4_guard_Level_2_3_SM_Start_L1_L2_L3) {
        _136_SM_Start_L1_L2_L3_fired_strong_partial =
          SSM_TR_Level_2_3_Wait_For_SH_4_Level_2_3_SM_Start_L1_L2_L3;
      }
      else if (tr_5_guard_Level_2_3_SM_Start_L1_L2_L3) {
        _136_SM_Start_L1_L2_L3_fired_strong_partial =
          SSM_TR_Level_2_3_Wait_For_LS_5_Level_2_3_SM_Start_L1_L2_L3;
      }
      else {
        _136_SM_Start_L1_L2_L3_fired_strong_partial = SSM_TR_no_trans_SM_Start_L1_L2_L3;
      }
      outC->SM_Start_L1_L2_L3_fired_strong =
        _136_SM_Start_L1_L2_L3_fired_strong_partial;
      break;
    case SSM_st_Level_1_SM_Start_L1_L2_L3 :
      if (tr_1_guard_Level_1_SM_Start_L1_L2_L3) {
        _133_SM_Start_L1_L2_L3_fired_strong_partial =
          SSM_TR_Level_1_SR_Mode_1_Level_1_SM_Start_L1_L2_L3;
      }
      else {
        _133_SM_Start_L1_L2_L3_fired_strong_partial = SSM_TR_no_trans_SM_Start_L1_L2_L3;
      }
      outC->SM_Start_L1_L2_L3_fired_strong =
        _133_SM_Start_L1_L2_L3_fired_strong_partial;
      break;
    case SSM_st_Waiting_Driver_Starting_Command_SM_Start_L1_L2_L3 :
      if (tr_1_guard_Waiting_Driver_Starting_Command_SM_Start_L1_L2_L3) {
        if (tr_1_guard_1_Waiting_Driver_Starting_Command_SM_Start_L1_L2_L3) {
          SM_Start_L1_L2_L3_fired_strong_partial =
            SSM_TR_Waiting_Driver_Starting_Command_Level_1_1_1_Waiting_Driver_Starting_Command_SM_Start_L1_L2_L3;
        }
        else {
          SM_Start_L1_L2_L3_fired_strong_partial =
            SSM_TR_Waiting_Driver_Starting_Command_Level_2_3_2_1_Waiting_Driver_Starting_Command_SM_Start_L1_L2_;
        }
      }
      else {
        SM_Start_L1_L2_L3_fired_strong_partial = SSM_TR_no_trans_SM_Start_L1_L2_L3;
      }
      outC->SM_Start_L1_L2_L3_fired_strong = SM_Start_L1_L2_L3_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM_Start_L1_L2_L3: */
  switch (outC->SM_Start_L1_L2_L3_state_act) {
    case SSM_st_Wait_For_LS_SM_Start_L1_L2_L3 :
      _130_SM_Start_L1_L2_L3_fired_partial = outC->SM_Start_L1_L2_L3_fired_strong;
      _129_SM_Start_L1_L2_L3_reset_nxt_partial = kcg_false;
      _128_SM_Start_L1_L2_L3_state_nxt_partial = SSM_st_Wait_For_LS_SM_Start_L1_L2_L3;
      outC->_L2_Wait_For_LS_SM_Start_L1_L2_L3 = kcg_true;
      _118_Ack_LS_Req_To_Driver_partial = outC->_L2_Wait_For_LS_SM_Start_L1_L2_L3;
      outC->Ack_LS_Req_To_Driver = _118_Ack_LS_Req_To_Driver_partial;
      outC->Ack_OS_Req_To_Driver = _119_Ack_OS_Req_To_Driver_partial;
      outC->Ack_SH_Req_To_Driver = _120_Ack_SH_Req_To_Driver_partial;
      outC->Ack_SR_Req_To_Driver = _121_Ack_SR_Req_To_Driver_partial;
      outC->Condition_8 = _122_Condition_8_partial;
      outC->Condition_10_31 = _123_Condition_10_31_partial;
      outC->Condition_15 = _124_Condition_15_partial;
      outC->Condition_50 = _125_Condition_50_partial;
      outC->Condition_70 = _126_Condition_70_partial;
      outC->MA_Req_To_RBC = _127_MA_Req_To_RBC_partial;
      outC->SM_Start_L1_L2_L3_state_nxt = _128_SM_Start_L1_L2_L3_state_nxt_partial;
      break;
    case SSM_st_Wait_For_SH_SM_Start_L1_L2_L3 :
      _114_MA_Req_To_RBC_partial = kcg_false;
      _113_Condition_70_partial = kcg_false;
      _112_Condition_50_partial = kcg_false;
      _111_Condition_15_partial = kcg_false;
      _110_Condition_10_31_partial = kcg_false;
      _109_Condition_8_partial = kcg_false;
      _108_Ack_SR_Req_To_Driver_partial = kcg_false;
      _106_Ack_OS_Req_To_Driver_partial = kcg_false;
      _105_Ack_LS_Req_To_Driver_partial = kcg_false;
      _117_SM_Start_L1_L2_L3_fired_partial = outC->SM_Start_L1_L2_L3_fired_strong;
      _116_SM_Start_L1_L2_L3_reset_nxt_partial = kcg_false;
      _115_SM_Start_L1_L2_L3_state_nxt_partial = SSM_st_Wait_For_SH_SM_Start_L1_L2_L3;
      outC->_L2_Wait_For_SH_SM_Start_L1_L2_L3 = kcg_true;
      _107_Ack_SH_Req_To_Driver_partial = outC->_L2_Wait_For_SH_SM_Start_L1_L2_L3;
      outC->Ack_LS_Req_To_Driver = _105_Ack_LS_Req_To_Driver_partial;
      outC->Ack_OS_Req_To_Driver = _106_Ack_OS_Req_To_Driver_partial;
      outC->Ack_SH_Req_To_Driver = _107_Ack_SH_Req_To_Driver_partial;
      outC->Ack_SR_Req_To_Driver = _108_Ack_SR_Req_To_Driver_partial;
      outC->Condition_8 = _109_Condition_8_partial;
      outC->Condition_10_31 = _110_Condition_10_31_partial;
      outC->Condition_15 = _111_Condition_15_partial;
      outC->Condition_50 = _112_Condition_50_partial;
      outC->Condition_70 = _113_Condition_70_partial;
      outC->MA_Req_To_RBC = _114_MA_Req_To_RBC_partial;
      outC->SM_Start_L1_L2_L3_state_nxt = _115_SM_Start_L1_L2_L3_state_nxt_partial;
      break;
    case SSM_st_Wait_For_OS_SM_Start_L1_L2_L3 :
      _101_MA_Req_To_RBC_partial = kcg_false;
      _100_Condition_70_partial = kcg_false;
      _99_Condition_50_partial = kcg_false;
      _98_Condition_15_partial = kcg_false;
      _97_Condition_10_31_partial = kcg_false;
      _96_Condition_8_partial = kcg_false;
      _95_Ack_SR_Req_To_Driver_partial = kcg_false;
      _94_Ack_SH_Req_To_Driver_partial = kcg_false;
      _92_Ack_LS_Req_To_Driver_partial = kcg_false;
      _104_SM_Start_L1_L2_L3_fired_partial = outC->SM_Start_L1_L2_L3_fired_strong;
      _103_SM_Start_L1_L2_L3_reset_nxt_partial = kcg_false;
      _102_SM_Start_L1_L2_L3_state_nxt_partial = SSM_st_Wait_For_OS_SM_Start_L1_L2_L3;
      outC->_L2_Wait_For_OS_SM_Start_L1_L2_L3 = kcg_true;
      _93_Ack_OS_Req_To_Driver_partial = outC->_L2_Wait_For_OS_SM_Start_L1_L2_L3;
      outC->Ack_LS_Req_To_Driver = _92_Ack_LS_Req_To_Driver_partial;
      outC->Ack_OS_Req_To_Driver = _93_Ack_OS_Req_To_Driver_partial;
      outC->Ack_SH_Req_To_Driver = _94_Ack_SH_Req_To_Driver_partial;
      outC->Ack_SR_Req_To_Driver = _95_Ack_SR_Req_To_Driver_partial;
      outC->Condition_8 = _96_Condition_8_partial;
      outC->Condition_10_31 = _97_Condition_10_31_partial;
      outC->Condition_15 = _98_Condition_15_partial;
      outC->Condition_50 = _99_Condition_50_partial;
      outC->Condition_70 = _100_Condition_70_partial;
      outC->MA_Req_To_RBC = _101_MA_Req_To_RBC_partial;
      outC->SM_Start_L1_L2_L3_state_nxt = _102_SM_Start_L1_L2_L3_state_nxt_partial;
      break;
    case SSM_st_LS_Mode_SM_Start_L1_L2_L3 :
      _88_MA_Req_To_RBC_partial = kcg_false;
      _86_Condition_50_partial = kcg_false;
      _85_Condition_15_partial = kcg_false;
      _84_Condition_10_31_partial = kcg_false;
      _83_Condition_8_partial = kcg_false;
      _82_Ack_SR_Req_To_Driver_partial = kcg_false;
      _81_Ack_SH_Req_To_Driver_partial = kcg_false;
      _80_Ack_OS_Req_To_Driver_partial = kcg_false;
      _79_Ack_LS_Req_To_Driver_partial = kcg_false;
      _91_SM_Start_L1_L2_L3_fired_partial = outC->SM_Start_L1_L2_L3_fired_strong;
      _90_SM_Start_L1_L2_L3_reset_nxt_partial = kcg_false;
      _89_SM_Start_L1_L2_L3_state_nxt_partial = SSM_st_LS_Mode_SM_Start_L1_L2_L3;
      outC->_L1_LS_Mode_SM_Start_L1_L2_L3 = kcg_true;
      _87_Condition_70_partial = outC->_L1_LS_Mode_SM_Start_L1_L2_L3;
      outC->Ack_LS_Req_To_Driver = _79_Ack_LS_Req_To_Driver_partial;
      outC->Ack_OS_Req_To_Driver = _80_Ack_OS_Req_To_Driver_partial;
      outC->Ack_SH_Req_To_Driver = _81_Ack_SH_Req_To_Driver_partial;
      outC->Ack_SR_Req_To_Driver = _82_Ack_SR_Req_To_Driver_partial;
      outC->Condition_8 = _83_Condition_8_partial;
      outC->Condition_10_31 = _84_Condition_10_31_partial;
      outC->Condition_15 = _85_Condition_15_partial;
      outC->Condition_50 = _86_Condition_50_partial;
      outC->Condition_70 = _87_Condition_70_partial;
      outC->MA_Req_To_RBC = _88_MA_Req_To_RBC_partial;
      outC->SM_Start_L1_L2_L3_state_nxt = _89_SM_Start_L1_L2_L3_state_nxt_partial;
      break;
    case SSM_st_SH_Mode_SM_Start_L1_L2_L3 :
      _75_MA_Req_To_RBC_partial = kcg_false;
      _74_Condition_70_partial = kcg_false;
      _72_Condition_15_partial = kcg_false;
      _71_Condition_10_31_partial = kcg_false;
      _70_Condition_8_partial = kcg_false;
      _69_Ack_SR_Req_To_Driver_partial = kcg_false;
      _68_Ack_SH_Req_To_Driver_partial = kcg_false;
      _67_Ack_OS_Req_To_Driver_partial = kcg_false;
      _66_Ack_LS_Req_To_Driver_partial = kcg_false;
      _78_SM_Start_L1_L2_L3_fired_partial = outC->SM_Start_L1_L2_L3_fired_strong;
      _77_SM_Start_L1_L2_L3_reset_nxt_partial = kcg_false;
      _76_SM_Start_L1_L2_L3_state_nxt_partial = SSM_st_SH_Mode_SM_Start_L1_L2_L3;
      outC->_L1_SH_Mode_SM_Start_L1_L2_L3 = kcg_true;
      _73_Condition_50_partial = outC->_L1_SH_Mode_SM_Start_L1_L2_L3;
      outC->Ack_LS_Req_To_Driver = _66_Ack_LS_Req_To_Driver_partial;
      outC->Ack_OS_Req_To_Driver = _67_Ack_OS_Req_To_Driver_partial;
      outC->Ack_SH_Req_To_Driver = _68_Ack_SH_Req_To_Driver_partial;
      outC->Ack_SR_Req_To_Driver = _69_Ack_SR_Req_To_Driver_partial;
      outC->Condition_8 = _70_Condition_8_partial;
      outC->Condition_10_31 = _71_Condition_10_31_partial;
      outC->Condition_15 = _72_Condition_15_partial;
      outC->Condition_50 = _73_Condition_50_partial;
      outC->Condition_70 = _74_Condition_70_partial;
      outC->MA_Req_To_RBC = _75_MA_Req_To_RBC_partial;
      outC->SM_Start_L1_L2_L3_state_nxt = _76_SM_Start_L1_L2_L3_state_nxt_partial;
      break;
    case SSM_st_OS_Mode_SM_Start_L1_L2_L3 :
      _62_MA_Req_To_RBC_partial = kcg_false;
      _61_Condition_70_partial = kcg_false;
      _60_Condition_50_partial = kcg_false;
      _58_Condition_10_31_partial = kcg_false;
      _57_Condition_8_partial = kcg_false;
      _56_Ack_SR_Req_To_Driver_partial = kcg_false;
      _55_Ack_SH_Req_To_Driver_partial = kcg_false;
      _54_Ack_OS_Req_To_Driver_partial = kcg_false;
      _53_Ack_LS_Req_To_Driver_partial = kcg_false;
      _65_SM_Start_L1_L2_L3_fired_partial = outC->SM_Start_L1_L2_L3_fired_strong;
      _64_SM_Start_L1_L2_L3_reset_nxt_partial = kcg_false;
      _63_SM_Start_L1_L2_L3_state_nxt_partial = SSM_st_OS_Mode_SM_Start_L1_L2_L3;
      outC->_L1_OS_Mode_SM_Start_L1_L2_L3 = kcg_true;
      _59_Condition_15_partial = outC->_L1_OS_Mode_SM_Start_L1_L2_L3;
      outC->Ack_LS_Req_To_Driver = _53_Ack_LS_Req_To_Driver_partial;
      outC->Ack_OS_Req_To_Driver = _54_Ack_OS_Req_To_Driver_partial;
      outC->Ack_SH_Req_To_Driver = _55_Ack_SH_Req_To_Driver_partial;
      outC->Ack_SR_Req_To_Driver = _56_Ack_SR_Req_To_Driver_partial;
      outC->Condition_8 = _57_Condition_8_partial;
      outC->Condition_10_31 = _58_Condition_10_31_partial;
      outC->Condition_15 = _59_Condition_15_partial;
      outC->Condition_50 = _60_Condition_50_partial;
      outC->Condition_70 = _61_Condition_70_partial;
      outC->MA_Req_To_RBC = _62_MA_Req_To_RBC_partial;
      outC->SM_Start_L1_L2_L3_state_nxt = _63_SM_Start_L1_L2_L3_state_nxt_partial;
      break;
    case SSM_st_FS_Mode_SM_Start_L1_L2_L3 :
      _49_MA_Req_To_RBC_partial = kcg_false;
      _48_Condition_70_partial = kcg_false;
      _47_Condition_50_partial = kcg_false;
      _46_Condition_15_partial = kcg_false;
      _44_Condition_8_partial = kcg_false;
      _43_Ack_SR_Req_To_Driver_partial = kcg_false;
      _42_Ack_SH_Req_To_Driver_partial = kcg_false;
      _41_Ack_OS_Req_To_Driver_partial = kcg_false;
      _40_Ack_LS_Req_To_Driver_partial = kcg_false;
      _52_SM_Start_L1_L2_L3_fired_partial = outC->SM_Start_L1_L2_L3_fired_strong;
      _51_SM_Start_L1_L2_L3_reset_nxt_partial = kcg_false;
      _50_SM_Start_L1_L2_L3_state_nxt_partial = SSM_st_FS_Mode_SM_Start_L1_L2_L3;
      outC->_L1_FS_Mode_SM_Start_L1_L2_L3 = kcg_true;
      _45_Condition_10_31_partial = outC->_L1_FS_Mode_SM_Start_L1_L2_L3;
      outC->Ack_LS_Req_To_Driver = _40_Ack_LS_Req_To_Driver_partial;
      outC->Ack_OS_Req_To_Driver = _41_Ack_OS_Req_To_Driver_partial;
      outC->Ack_SH_Req_To_Driver = _42_Ack_SH_Req_To_Driver_partial;
      outC->Ack_SR_Req_To_Driver = _43_Ack_SR_Req_To_Driver_partial;
      outC->Condition_8 = _44_Condition_8_partial;
      outC->Condition_10_31 = _45_Condition_10_31_partial;
      outC->Condition_15 = _46_Condition_15_partial;
      outC->Condition_50 = _47_Condition_50_partial;
      outC->Condition_70 = _48_Condition_70_partial;
      outC->MA_Req_To_RBC = _49_MA_Req_To_RBC_partial;
      outC->SM_Start_L1_L2_L3_state_nxt = _50_SM_Start_L1_L2_L3_state_nxt_partial;
      break;
    case SSM_st_SR_Mode_SM_Start_L1_L2_L3 :
      _36_MA_Req_To_RBC_partial = kcg_false;
      _35_Condition_70_partial = kcg_false;
      _34_Condition_50_partial = kcg_false;
      _33_Condition_15_partial = kcg_false;
      _32_Condition_10_31_partial = kcg_false;
      _30_Ack_SR_Req_To_Driver_partial = kcg_false;
      _29_Ack_SH_Req_To_Driver_partial = kcg_false;
      _28_Ack_OS_Req_To_Driver_partial = kcg_false;
      _27_Ack_LS_Req_To_Driver_partial = kcg_false;
      _39_SM_Start_L1_L2_L3_fired_partial = outC->SM_Start_L1_L2_L3_fired_strong;
      _38_SM_Start_L1_L2_L3_reset_nxt_partial = kcg_false;
      _37_SM_Start_L1_L2_L3_state_nxt_partial = SSM_st_SR_Mode_SM_Start_L1_L2_L3;
      outC->_L1_SR_Mode_SM_Start_L1_L2_L3 = kcg_true;
      _31_Condition_8_partial = outC->_L1_SR_Mode_SM_Start_L1_L2_L3;
      outC->Ack_LS_Req_To_Driver = _27_Ack_LS_Req_To_Driver_partial;
      outC->Ack_OS_Req_To_Driver = _28_Ack_OS_Req_To_Driver_partial;
      outC->Ack_SH_Req_To_Driver = _29_Ack_SH_Req_To_Driver_partial;
      outC->Ack_SR_Req_To_Driver = _30_Ack_SR_Req_To_Driver_partial;
      outC->Condition_8 = _31_Condition_8_partial;
      outC->Condition_10_31 = _32_Condition_10_31_partial;
      outC->Condition_15 = _33_Condition_15_partial;
      outC->Condition_50 = _34_Condition_50_partial;
      outC->Condition_70 = _35_Condition_70_partial;
      outC->MA_Req_To_RBC = _36_MA_Req_To_RBC_partial;
      outC->SM_Start_L1_L2_L3_state_nxt = _37_SM_Start_L1_L2_L3_state_nxt_partial;
      break;
    case SSM_st_Level_2_3_SM_Start_L1_L2_L3 :
      _22_Condition_70_partial = kcg_false;
      _21_Condition_50_partial = kcg_false;
      _20_Condition_15_partial = kcg_false;
      _19_Condition_10_31_partial = kcg_false;
      _18_Condition_8_partial = kcg_false;
      _17_Ack_SR_Req_To_Driver_partial = kcg_false;
      _16_Ack_SH_Req_To_Driver_partial = kcg_false;
      _15_Ack_OS_Req_To_Driver_partial = kcg_false;
      _14_Ack_LS_Req_To_Driver_partial = kcg_false;
      _26_SM_Start_L1_L2_L3_fired_partial = outC->SM_Start_L1_L2_L3_fired_strong;
      _25_SM_Start_L1_L2_L3_reset_nxt_partial = kcg_false;
      _24_SM_Start_L1_L2_L3_state_nxt_partial = SSM_st_Level_2_3_SM_Start_L1_L2_L3;
      outC->_L2_Level_2_3_SM_Start_L1_L2_L3 = kcg_true;
      _23_MA_Req_To_RBC_partial = outC->_L2_Level_2_3_SM_Start_L1_L2_L3;
      outC->Ack_LS_Req_To_Driver = _14_Ack_LS_Req_To_Driver_partial;
      outC->Ack_OS_Req_To_Driver = _15_Ack_OS_Req_To_Driver_partial;
      outC->Ack_SH_Req_To_Driver = _16_Ack_SH_Req_To_Driver_partial;
      outC->Ack_SR_Req_To_Driver = _17_Ack_SR_Req_To_Driver_partial;
      outC->Condition_8 = _18_Condition_8_partial;
      outC->Condition_10_31 = _19_Condition_10_31_partial;
      outC->Condition_15 = _20_Condition_15_partial;
      outC->Condition_50 = _21_Condition_50_partial;
      outC->Condition_70 = _22_Condition_70_partial;
      outC->MA_Req_To_RBC = _23_MA_Req_To_RBC_partial;
      outC->SM_Start_L1_L2_L3_state_nxt = _24_SM_Start_L1_L2_L3_state_nxt_partial;
      break;
    case SSM_st_Level_1_SM_Start_L1_L2_L3 :
      _10_MA_Req_To_RBC_partial = kcg_false;
      _9_Condition_70_partial = kcg_false;
      _8_Condition_50_partial = kcg_false;
      _7_Condition_15_partial = kcg_false;
      _6_Condition_10_31_partial = kcg_false;
      _5_Condition_8_partial = kcg_false;
      _3_Ack_SH_Req_To_Driver_partial = kcg_false;
      _2_Ack_OS_Req_To_Driver_partial = kcg_false;
      _1_Ack_LS_Req_To_Driver_partial = kcg_false;
      _13_SM_Start_L1_L2_L3_fired_partial = outC->SM_Start_L1_L2_L3_fired_strong;
      _12_SM_Start_L1_L2_L3_reset_nxt_partial = kcg_false;
      _11_SM_Start_L1_L2_L3_state_nxt_partial = SSM_st_Level_1_SM_Start_L1_L2_L3;
      outC->_L2_Level_1_SM_Start_L1_L2_L3 = kcg_true;
      _4_Ack_SR_Req_To_Driver_partial = outC->_L2_Level_1_SM_Start_L1_L2_L3;
      outC->Ack_LS_Req_To_Driver = _1_Ack_LS_Req_To_Driver_partial;
      outC->Ack_OS_Req_To_Driver = _2_Ack_OS_Req_To_Driver_partial;
      outC->Ack_SH_Req_To_Driver = _3_Ack_SH_Req_To_Driver_partial;
      outC->Ack_SR_Req_To_Driver = _4_Ack_SR_Req_To_Driver_partial;
      outC->Condition_8 = _5_Condition_8_partial;
      outC->Condition_10_31 = _6_Condition_10_31_partial;
      outC->Condition_15 = _7_Condition_15_partial;
      outC->Condition_50 = _8_Condition_50_partial;
      outC->Condition_70 = _9_Condition_70_partial;
      outC->MA_Req_To_RBC = _10_MA_Req_To_RBC_partial;
      outC->SM_Start_L1_L2_L3_state_nxt = _11_SM_Start_L1_L2_L3_state_nxt_partial;
      break;
    case SSM_st_Waiting_Driver_Starting_Command_SM_Start_L1_L2_L3 :
      MA_Req_To_RBC_partial = kcg_false;
      Condition_70_partial = kcg_false;
      Condition_50_partial = kcg_false;
      Condition_15_partial = kcg_false;
      Condition_10_31_partial = kcg_false;
      Condition_8_partial = kcg_false;
      Ack_SR_Req_To_Driver_partial = kcg_false;
      Ack_SH_Req_To_Driver_partial = kcg_false;
      Ack_OS_Req_To_Driver_partial = kcg_false;
      Ack_LS_Req_To_Driver_partial = kcg_false;
      SM_Start_L1_L2_L3_fired_partial = outC->SM_Start_L1_L2_L3_fired_strong;
      SM_Start_L1_L2_L3_reset_nxt_partial = kcg_false;
      SM_Start_L1_L2_L3_state_nxt_partial =
        SSM_st_Waiting_Driver_Starting_Command_SM_Start_L1_L2_L3;
      outC->Ack_LS_Req_To_Driver = Ack_LS_Req_To_Driver_partial;
      outC->Ack_OS_Req_To_Driver = Ack_OS_Req_To_Driver_partial;
      outC->Ack_SH_Req_To_Driver = Ack_SH_Req_To_Driver_partial;
      outC->Ack_SR_Req_To_Driver = Ack_SR_Req_To_Driver_partial;
      outC->Condition_8 = Condition_8_partial;
      outC->Condition_10_31 = Condition_10_31_partial;
      outC->Condition_15 = Condition_15_partial;
      outC->Condition_50 = Condition_50_partial;
      outC->Condition_70 = Condition_70_partial;
      outC->MA_Req_To_RBC = MA_Req_To_RBC_partial;
      outC->SM_Start_L1_L2_L3_state_nxt = SM_Start_L1_L2_L3_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM_Start_L1_L2_L3_reset_sel = outC->SM_Start_L1_L2_L3_reset_nxt;
  /* SM_Start_L1_L2_L3: */
  switch (outC->SM_Start_L1_L2_L3_state_act) {
    case SSM_st_Wait_For_LS_SM_Start_L1_L2_L3 :
      outC->SM_Start_L1_L2_L3_reset_nxt = _129_SM_Start_L1_L2_L3_reset_nxt_partial;
      outC->SM_Start_L1_L2_L3_fired = _130_SM_Start_L1_L2_L3_fired_partial;
      break;
    case SSM_st_Wait_For_SH_SM_Start_L1_L2_L3 :
      outC->SM_Start_L1_L2_L3_reset_nxt = _116_SM_Start_L1_L2_L3_reset_nxt_partial;
      outC->SM_Start_L1_L2_L3_fired = _117_SM_Start_L1_L2_L3_fired_partial;
      break;
    case SSM_st_Wait_For_OS_SM_Start_L1_L2_L3 :
      outC->SM_Start_L1_L2_L3_reset_nxt = _103_SM_Start_L1_L2_L3_reset_nxt_partial;
      outC->SM_Start_L1_L2_L3_fired = _104_SM_Start_L1_L2_L3_fired_partial;
      break;
    case SSM_st_LS_Mode_SM_Start_L1_L2_L3 :
      outC->SM_Start_L1_L2_L3_reset_nxt = _90_SM_Start_L1_L2_L3_reset_nxt_partial;
      outC->SM_Start_L1_L2_L3_fired = _91_SM_Start_L1_L2_L3_fired_partial;
      break;
    case SSM_st_SH_Mode_SM_Start_L1_L2_L3 :
      outC->SM_Start_L1_L2_L3_reset_nxt = _77_SM_Start_L1_L2_L3_reset_nxt_partial;
      outC->SM_Start_L1_L2_L3_fired = _78_SM_Start_L1_L2_L3_fired_partial;
      break;
    case SSM_st_OS_Mode_SM_Start_L1_L2_L3 :
      outC->SM_Start_L1_L2_L3_reset_nxt = _64_SM_Start_L1_L2_L3_reset_nxt_partial;
      outC->SM_Start_L1_L2_L3_fired = _65_SM_Start_L1_L2_L3_fired_partial;
      break;
    case SSM_st_FS_Mode_SM_Start_L1_L2_L3 :
      outC->SM_Start_L1_L2_L3_reset_nxt = _51_SM_Start_L1_L2_L3_reset_nxt_partial;
      outC->SM_Start_L1_L2_L3_fired = _52_SM_Start_L1_L2_L3_fired_partial;
      break;
    case SSM_st_SR_Mode_SM_Start_L1_L2_L3 :
      outC->SM_Start_L1_L2_L3_reset_nxt = _38_SM_Start_L1_L2_L3_reset_nxt_partial;
      outC->SM_Start_L1_L2_L3_fired = _39_SM_Start_L1_L2_L3_fired_partial;
      break;
    case SSM_st_Level_2_3_SM_Start_L1_L2_L3 :
      outC->SM_Start_L1_L2_L3_reset_nxt = _25_SM_Start_L1_L2_L3_reset_nxt_partial;
      outC->SM_Start_L1_L2_L3_fired = _26_SM_Start_L1_L2_L3_fired_partial;
      break;
    case SSM_st_Level_1_SM_Start_L1_L2_L3 :
      outC->SM_Start_L1_L2_L3_reset_nxt = _12_SM_Start_L1_L2_L3_reset_nxt_partial;
      outC->SM_Start_L1_L2_L3_fired = _13_SM_Start_L1_L2_L3_fired_partial;
      break;
    case SSM_st_Waiting_Driver_Starting_Command_SM_Start_L1_L2_L3 :
      outC->SM_Start_L1_L2_L3_reset_nxt = SM_Start_L1_L2_L3_reset_nxt_partial;
      outC->SM_Start_L1_L2_L3_fired = SM_Start_L1_L2_L3_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM_Start_L1_L2_L3_state_sel) {
    case SSM_st_Wait_For_LS_SM_Start_L1_L2_L3 :
      _159_SM_Start_L1_L2_L3_reset_act_partial =
        tr_1_guard_Wait_For_LS_SM_Start_L1_L2_L3;
      break;
    case SSM_st_Wait_For_SH_SM_Start_L1_L2_L3 :
      _156_SM_Start_L1_L2_L3_reset_act_partial =
        tr_1_guard_Wait_For_SH_SM_Start_L1_L2_L3;
      break;
    case SSM_st_Wait_For_OS_SM_Start_L1_L2_L3 :
      _153_SM_Start_L1_L2_L3_reset_act_partial =
        tr_1_guard_Wait_For_OS_SM_Start_L1_L2_L3;
      break;
    case SSM_st_LS_Mode_SM_Start_L1_L2_L3 :
      _150_SM_Start_L1_L2_L3_reset_act_partial = kcg_false;
      break;
    case SSM_st_SH_Mode_SM_Start_L1_L2_L3 :
      _147_SM_Start_L1_L2_L3_reset_act_partial = kcg_false;
      break;
    case SSM_st_OS_Mode_SM_Start_L1_L2_L3 :
      _144_SM_Start_L1_L2_L3_reset_act_partial = kcg_false;
      break;
    case SSM_st_FS_Mode_SM_Start_L1_L2_L3 :
      _141_SM_Start_L1_L2_L3_reset_act_partial = kcg_false;
      break;
    case SSM_st_SR_Mode_SM_Start_L1_L2_L3 :
      _138_SM_Start_L1_L2_L3_reset_act_partial = kcg_false;
      break;
    case SSM_st_Level_2_3_SM_Start_L1_L2_L3 :
      if (tr_1_guard_Level_2_3_SM_Start_L1_L2_L3) {
        _135_SM_Start_L1_L2_L3_reset_act_partial = kcg_true;
      }
      else if (tr_2_guard_Level_2_3_SM_Start_L1_L2_L3) {
        _135_SM_Start_L1_L2_L3_reset_act_partial = kcg_true;
      }
      else if (tr_3_guard_Level_2_3_SM_Start_L1_L2_L3) {
        _135_SM_Start_L1_L2_L3_reset_act_partial = kcg_true;
      }
      else if (tr_4_guard_Level_2_3_SM_Start_L1_L2_L3) {
        _135_SM_Start_L1_L2_L3_reset_act_partial = kcg_true;
      }
      else {
        _135_SM_Start_L1_L2_L3_reset_act_partial =
          tr_5_guard_Level_2_3_SM_Start_L1_L2_L3;
      }
      break;
    case SSM_st_Level_1_SM_Start_L1_L2_L3 :
      _132_SM_Start_L1_L2_L3_reset_act_partial = tr_1_guard_Level_1_SM_Start_L1_L2_L3;
      break;
    case SSM_st_Waiting_Driver_Starting_Command_SM_Start_L1_L2_L3 :
      SM_Start_L1_L2_L3_reset_act_partial =
        tr_1_guard_Waiting_Driver_Starting_Command_SM_Start_L1_L2_L3;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM_Start_L1_L2_L3_reset_prv = outC->SM_Start_L1_L2_L3_reset_act;
  /* SM_Start_L1_L2_L3: */
  switch (outC->SM_Start_L1_L2_L3_state_sel) {
    case SSM_st_Wait_For_LS_SM_Start_L1_L2_L3 :
      outC->SM_Start_L1_L2_L3_reset_act = _159_SM_Start_L1_L2_L3_reset_act_partial;
      break;
    case SSM_st_Wait_For_SH_SM_Start_L1_L2_L3 :
      outC->SM_Start_L1_L2_L3_reset_act = _156_SM_Start_L1_L2_L3_reset_act_partial;
      break;
    case SSM_st_Wait_For_OS_SM_Start_L1_L2_L3 :
      outC->SM_Start_L1_L2_L3_reset_act = _153_SM_Start_L1_L2_L3_reset_act_partial;
      break;
    case SSM_st_LS_Mode_SM_Start_L1_L2_L3 :
      outC->SM_Start_L1_L2_L3_reset_act = _150_SM_Start_L1_L2_L3_reset_act_partial;
      break;
    case SSM_st_SH_Mode_SM_Start_L1_L2_L3 :
      outC->SM_Start_L1_L2_L3_reset_act = _147_SM_Start_L1_L2_L3_reset_act_partial;
      break;
    case SSM_st_OS_Mode_SM_Start_L1_L2_L3 :
      outC->SM_Start_L1_L2_L3_reset_act = _144_SM_Start_L1_L2_L3_reset_act_partial;
      break;
    case SSM_st_FS_Mode_SM_Start_L1_L2_L3 :
      outC->SM_Start_L1_L2_L3_reset_act = _141_SM_Start_L1_L2_L3_reset_act_partial;
      break;
    case SSM_st_SR_Mode_SM_Start_L1_L2_L3 :
      outC->SM_Start_L1_L2_L3_reset_act = _138_SM_Start_L1_L2_L3_reset_act_partial;
      break;
    case SSM_st_Level_2_3_SM_Start_L1_L2_L3 :
      outC->SM_Start_L1_L2_L3_reset_act = _135_SM_Start_L1_L2_L3_reset_act_partial;
      break;
    case SSM_st_Level_1_SM_Start_L1_L2_L3 :
      outC->SM_Start_L1_L2_L3_reset_act = _132_SM_Start_L1_L2_L3_reset_act_partial;
      break;
    case SSM_st_Waiting_Driver_Starting_Command_SM_Start_L1_L2_L3 :
      outC->SM_Start_L1_L2_L3_reset_act = SM_Start_L1_L2_L3_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void Procedure_Start_L1_L2_L3_init_Procedures(
  outC_Procedure_Start_L1_L2_L3_Procedures *outC)
{
  outC->_L19 = Profile_OS_Level_And_Mode_Types_Pkg;
  outC->_L26.Distance = kcg_lit_int32(0);
  outC->_L26.Mode = Profile_OS_Level_And_Mode_Types_Pkg;
  outC->_L26.Speed = kcg_lit_int32(0);
  outC->_L26.Length = kcg_lit_int32(0);
  outC->_L26.Length_Ack = kcg_lit_int32(0);
  outC->Loc_Mode_Profile = Profile_OS_Level_And_Mode_Types_Pkg;
  outC->SM_Start_L1_L2_L3_fired = SSM_TR_no_trans_SM_Start_L1_L2_L3;
  outC->SM_Start_L1_L2_L3_fired_strong = SSM_TR_no_trans_SM_Start_L1_L2_L3;
  outC->SM_Start_L1_L2_L3_state_act =
    SSM_st_Waiting_Driver_Starting_Command_SM_Start_L1_L2_L3;
  outC->SM_Start_L1_L2_L3_state_sel =
    SSM_st_Waiting_Driver_Starting_Command_SM_Start_L1_L2_L3;
  outC->_L2_Wait_For_LS_SM_Start_L1_L2_L3 = kcg_true;
  outC->_L2_Wait_For_SH_SM_Start_L1_L2_L3 = kcg_true;
  outC->_L2_Wait_For_OS_SM_Start_L1_L2_L3 = kcg_true;
  outC->_L1_LS_Mode_SM_Start_L1_L2_L3 = kcg_true;
  outC->_L1_SH_Mode_SM_Start_L1_L2_L3 = kcg_true;
  outC->_L1_OS_Mode_SM_Start_L1_L2_L3 = kcg_true;
  outC->_L1_FS_Mode_SM_Start_L1_L2_L3 = kcg_true;
  outC->_L1_SR_Mode_SM_Start_L1_L2_L3 = kcg_true;
  outC->_L2_Level_2_3_SM_Start_L1_L2_L3 = kcg_true;
  outC->_L2_Level_1_SM_Start_L1_L2_L3 = kcg_true;
  outC->MA_Req_To_RBC = kcg_true;
  outC->Condition_70 = kcg_true;
  outC->Condition_50 = kcg_true;
  outC->Condition_15 = kcg_true;
  outC->Condition_10_31 = kcg_true;
  outC->Condition_8 = kcg_true;
  outC->Ack_SR_Req_To_Driver = kcg_true;
  outC->Ack_SH_Req_To_Driver = kcg_true;
  outC->Ack_OS_Req_To_Driver = kcg_true;
  outC->Ack_LS_Req_To_Driver = kcg_true;
  outC->SM_Start_L1_L2_L3_reset_act = kcg_false;
  outC->SM_Start_L1_L2_L3_reset_nxt = kcg_false;
  outC->SM_Start_L1_L2_L3_state_nxt =
    SSM_st_Waiting_Driver_Starting_Command_SM_Start_L1_L2_L3;
}
#endif /* KCG_USER_DEFINED_INIT */


void Procedure_Start_L1_L2_L3_reset_Procedures(
  outC_Procedure_Start_L1_L2_L3_Procedures *outC)
{
  outC->SM_Start_L1_L2_L3_reset_act = kcg_false;
  outC->SM_Start_L1_L2_L3_reset_nxt = kcg_false;
  outC->SM_Start_L1_L2_L3_state_nxt =
    SSM_st_Waiting_Driver_Starting_Command_SM_Start_L1_L2_L3;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Procedure_Start_L1_L2_L3_Procedures.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

