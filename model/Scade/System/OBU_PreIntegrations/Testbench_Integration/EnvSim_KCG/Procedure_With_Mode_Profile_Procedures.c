/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Procedure_With_Mode_Profile_Procedures.h"

/* Procedures::Procedure_With_Mode_Profile/ */
void Procedure_With_Mode_Profile_Procedures(
  /* Current_Mode/ */
  T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* Driver_Ack_Mode_Profile/ */
  kcg_bool Driver_Ack_Mode_Profile,
  /* Mode_Profile_On_Board/ */
  T_Mode_Profile_Level_And_Mode_Types_Pkg *Mode_Profile_On_Board,
  /* Procedure_Possible/ */
  kcg_bool Procedure_Possible,
  /* Profile_Mode/ */
  T_MA_Level_And_Mode_Types_Pkg Profile_Mode,
  /* Selected_Mode/ */
  T_Mode_Level_And_Mode_Types_Pkg Selected_Mode,
  /* Supervision_Modes/ */
  kcg_bool Supervision_Modes,
  /* Train_Position/ */
  trainPosition_T_TrainPosition_Types_Pck *Train_Position,
  /* Train_Speed/ */
  Speed_T_Obu_BasicTypes_Pkg Train_Speed,
  outC_Procedure_With_Mode_Profile_Procedures *outC)
{
  static kcg_bool tmp;
  static kcg_bool tmp1;
  /* Condition_15_50_70/ */
  static kcg_bool Condition_15_50_70_partial;
  /* Condition_34_61_71/ */
  static kcg_bool Condition_34_61_71_partial;
  /* Condition_40_51_72/ */
  static kcg_bool Condition_40_51_72_partial;
  /* Condition_73_74/ */
  static kcg_bool Condition_73_74_partial;
  /* Service_Brake_Command/ */
  static kcg_bool Service_Brake_Command_partial;
  /* Loc_Timer/ */
  static kcg_int64 Loc_Timer_partial;
  /* Loc_Confirmation/ */
  static kcg_bool Loc_Confirmation_partial;
  /* SM_Mode_Profile_By_Trackside: */
  static SSM_ST_SM_Mode_Profile_By_Trackside SM_Mode_Profile_By_Trackside_state_nxt_partial;
  /* SM_Mode_Profile_By_Trackside: */
  static kcg_bool SM_Mode_Profile_By_Trackside_reset_nxt_partial;
  /* SM_Mode_Profile_By_Trackside: */
  static SSM_TR_SM_Mode_Profile_By_Trackside SM_Mode_Profile_By_Trackside_fired_partial;
  /* Condition_15_50_70/ */
  static kcg_bool _2_Condition_15_50_70_partial;
  /* Condition_34_61_71/ */
  static kcg_bool _3_Condition_34_61_71_partial;
  /* Condition_40_51_72/ */
  static kcg_bool _4_Condition_40_51_72_partial;
  /* Condition_73_74/ */
  static kcg_bool _5_Condition_73_74_partial;
  /* Service_Brake_Command/ */
  static kcg_bool _6_Service_Brake_Command_partial;
  /* Loc_Timer/ */
  static kcg_int64 _7_Loc_Timer_partial;
  /* Loc_Confirmation/ */
  static kcg_bool _8_Loc_Confirmation_partial;
  /* SM_Mode_Profile_By_Trackside: */
  static SSM_ST_SM_Mode_Profile_By_Trackside _9_SM_Mode_Profile_By_Trackside_state_nxt_partial;
  /* SM_Mode_Profile_By_Trackside: */
  static kcg_bool _10_SM_Mode_Profile_By_Trackside_reset_nxt_partial;
  /* SM_Mode_Profile_By_Trackside: */
  static SSM_TR_SM_Mode_Profile_By_Trackside _11_SM_Mode_Profile_By_Trackside_fired_partial;
  /* SM_Mode_Profile_By_Trackside:Futher_location:SM_Futher_Location: */
  static kcg_bool SM_Futher_Location_reset_prv_Futher_location_SM_Mode_Profile_By_Trackside;
  /* SM_Mode_Profile_By_Trackside:Futher_location:SM_Futher_Location: */
  static kcg_bool SM_Futher_Location_reset_sel_Futher_location_SM_Mode_Profile_By_Trackside;
  /* SM_Mode_Profile_By_Trackside:Futher_location:SM_Futher_Location: */
  static SSM_TR_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside SM_Futher_Location_fired_strong_partial_Futher_location_SM_Mode_Profile_By_Trackside;
  /* SM_Mode_Profile_By_Trackside:Futher_location:SM_Futher_Location: */
  static kcg_bool SM_Futher_Location_reset_act_partial_Futher_location_SM_Mode_Profile_By_Trackside;
  /* SM_Mode_Profile_By_Trackside:Futher_location:SM_Futher_Location: */
  static SSM_ST_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside SM_Futher_Location_state_act_partial_Futher_location_SM_Mode_Profile_By_Trackside;
  /* SM_Mode_Profile_By_Trackside:Futher_location:SM_Futher_Location:Waiting_Ack:<1> */
  static kcg_bool tr_1_guard_Waiting_Ack_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside;
  /* SM_Mode_Profile_By_Trackside:Futher_location:SM_Futher_Location: */
  static SSM_TR_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside _12_SM_Futher_Location_fired_strong_partial_Futher_location_SM_Mode_Profile_By_Trackside;
  /* SM_Mode_Profile_By_Trackside:Futher_location:SM_Futher_Location: */
  static kcg_bool _13_SM_Futher_Location_reset_act_partial_Futher_location_SM_Mode_Profile_By_Trackside;
  /* SM_Mode_Profile_By_Trackside:Futher_location:SM_Futher_Location: */
  static SSM_ST_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside _14_SM_Futher_Location_state_act_partial_Futher_location_SM_Mode_Profile_By_Trackside;
  /* SM_Mode_Profile_By_Trackside:Futher_location:SM_Futher_Location:Start_Supervision:<1> */
  static kcg_bool tr_1_guard_Start_Supervision_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside;
  /* SM_Mode_Profile_By_Trackside:Futher_location:SM_Futher_Location: */
  static SSM_TR_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside _15_SM_Futher_Location_fired_strong_partial_Futher_location_SM_Mode_Profile_By_Trackside;
  /* SM_Mode_Profile_By_Trackside:Futher_location:SM_Futher_Location: */
  static kcg_bool _16_SM_Futher_Location_reset_act_partial_Futher_location_SM_Mode_Profile_By_Trackside;
  /* SM_Mode_Profile_By_Trackside:Futher_location:SM_Futher_Location: */
  static SSM_ST_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside _17_SM_Futher_Location_state_act_partial_Futher_location_SM_Mode_Profile_By_Trackside;
  /* SM_Mode_Profile_By_Trackside:Futher_location:SM_Futher_Location:Req_Futher_Location:<1> */
  static kcg_bool tr_1_guard_Req_Futher_Location_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside;
  /* SM_Mode_Profile_By_Trackside:Futher_location:SM_Futher_Location: */
  static SSM_TR_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside _18_SM_Futher_Location_fired_strong_partial_Futher_location_SM_Mode_Profile_By_Trackside;
  /* SM_Mode_Profile_By_Trackside:Futher_location:SM_Futher_Location: */
  static kcg_bool _19_SM_Futher_Location_reset_act_partial_Futher_location_SM_Mode_Profile_By_Trackside;
  /* SM_Mode_Profile_By_Trackside:Futher_location:SM_Futher_Location: */
  static SSM_ST_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside _20_SM_Futher_Location_state_act_partial_Futher_location_SM_Mode_Profile_By_Trackside;
  /* SM_Mode_Profile_By_Trackside:Futher_location:SM_Futher_Location: */
  static SSM_TR_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside SM_Futher_Location_fired_partial_Futher_location_SM_Mode_Profile_By_Trackside;
  /* SM_Mode_Profile_By_Trackside:Futher_location:SM_Futher_Location: */
  static kcg_bool SM_Futher_Location_reset_nxt_partial_Futher_location_SM_Mode_Profile_By_Trackside;
  /* SM_Mode_Profile_By_Trackside:Futher_location:SM_Futher_Location: */
  static SSM_ST_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside SM_Futher_Location_state_nxt_partial_Futher_location_SM_Mode_Profile_By_Trackside;
  /* Condition_15_50_70/ */
  static kcg_bool _21_Condition_15_50_70_partial;
  /* SM_Mode_Profile_By_Trackside:Futher_location:SM_Futher_Location: */
  static SSM_TR_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside _22_SM_Futher_Location_fired_partial_Futher_location_SM_Mode_Profile_By_Trackside;
  /* SM_Mode_Profile_By_Trackside:Futher_location:SM_Futher_Location: */
  static kcg_bool _23_SM_Futher_Location_reset_nxt_partial_Futher_location_SM_Mode_Profile_By_Trackside;
  /* SM_Mode_Profile_By_Trackside:Futher_location:SM_Futher_Location: */
  static SSM_ST_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside _24_SM_Futher_Location_state_nxt_partial_Futher_location_SM_Mode_Profile_By_Trackside;
  /* Condition_15_50_70/ */
  static kcg_bool _25_Condition_15_50_70_partial;
  /* SM_Mode_Profile_By_Trackside:Futher_location:SM_Futher_Location: */
  static SSM_TR_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside _26_SM_Futher_Location_fired_partial_Futher_location_SM_Mode_Profile_By_Trackside;
  /* SM_Mode_Profile_By_Trackside:Futher_location:SM_Futher_Location: */
  static kcg_bool _27_SM_Futher_Location_reset_nxt_partial_Futher_location_SM_Mode_Profile_By_Trackside;
  /* SM_Mode_Profile_By_Trackside:Futher_location:SM_Futher_Location: */
  static SSM_ST_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside _28_SM_Futher_Location_state_nxt_partial_Futher_location_SM_Mode_Profile_By_Trackside;
  /* Condition_15_50_70/ */
  static kcg_bool _29_Condition_15_50_70_partial;
  /* SM_Mode_Profile_By_Trackside:Futher_location:SM_Futher_Location: */
  static SSM_TR_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside _30_SM_Futher_Location_fired_partial_Futher_location_SM_Mode_Profile_By_Trackside;
  /* SM_Mode_Profile_By_Trackside:Futher_location:SM_Futher_Location: */
  static kcg_bool _31_SM_Futher_Location_reset_nxt_partial_Futher_location_SM_Mode_Profile_By_Trackside;
  /* SM_Mode_Profile_By_Trackside:Futher_location:SM_Futher_Location: */
  static SSM_ST_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside _32_SM_Futher_Location_state_nxt_partial_Futher_location_SM_Mode_Profile_By_Trackside;
  /* Condition_15_50_70/ */
  static kcg_bool _33_Condition_15_50_70_partial;
  /* Condition_15_50_70/ */
  static kcg_bool _34_Condition_15_50_70_partial;
  /* Condition_34_61_71/ */
  static kcg_bool _35_Condition_34_61_71_partial;
  /* Condition_40_51_72/ */
  static kcg_bool _36_Condition_40_51_72_partial;
  /* Condition_73_74/ */
  static kcg_bool _37_Condition_73_74_partial;
  /* Service_Brake_Command/ */
  static kcg_bool _38_Service_Brake_Command_partial;
  /* Loc_Timer/ */
  static kcg_int64 _39_Loc_Timer_partial;
  /* Loc_Confirmation/ */
  static kcg_bool _40_Loc_Confirmation_partial;
  /* SM_Mode_Profile_By_Trackside: */
  static SSM_ST_SM_Mode_Profile_By_Trackside _41_SM_Mode_Profile_By_Trackside_state_nxt_partial;
  /* SM_Mode_Profile_By_Trackside: */
  static kcg_bool _42_SM_Mode_Profile_By_Trackside_reset_nxt_partial;
  /* SM_Mode_Profile_By_Trackside: */
  static SSM_TR_SM_Mode_Profile_By_Trackside _43_SM_Mode_Profile_By_Trackside_fired_partial;
  /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location: */
  static kcg_bool SM_Current_Location_reset_prv_Current_Location_SM_Mode_Profile_By_Trackside;
  /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location: */
  static kcg_bool SM_Current_Location_reset_sel_Current_Location_SM_Mode_Profile_By_Trackside;
  /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location:Ack_Not_Received:<1> */
  static kcg_bool tr_1_guard_Ack_Not_Received_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside;
  /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location: */
  static SSM_TR_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside SM_Current_Location_fired_strong_partial_Current_Location_SM_Mode_Profile_By_Trackside;
  /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location: */
  static kcg_bool SM_Current_Location_reset_act_partial_Current_Location_SM_Mode_Profile_By_Trackside;
  /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location: */
  static SSM_ST_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside SM_Current_Location_state_act_partial_Current_Location_SM_Mode_Profile_By_Trackside;
  /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location: */
  static SSM_TR_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside _44_SM_Current_Location_fired_strong_partial_Current_Location_SM_Mode_Profile_By_Trackside;
  /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location: */
  static kcg_bool _45_SM_Current_Location_reset_act_partial_Current_Location_SM_Mode_Profile_By_Trackside;
  /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location: */
  static SSM_ST_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside _46_SM_Current_Location_state_act_partial_Current_Location_SM_Mode_Profile_By_Trackside;
  /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location:Waiting_Ack:<1> */
  static kcg_bool tr_1_guard_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside;
  /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location: */
  static SSM_TR_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside _47_SM_Current_Location_fired_strong_partial_Current_Location_SM_Mode_Profile_By_Trackside;
  /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location: */
  static kcg_bool _48_SM_Current_Location_reset_act_partial_Current_Location_SM_Mode_Profile_By_Trackside;
  /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location: */
  static SSM_ST_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside _49_SM_Current_Location_state_act_partial_Current_Location_SM_Mode_Profile_By_Trackside;
  /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location:Switch_Autorized_Waiting_Ack:<1> */
  static kcg_bool tr_1_guard_Switch_Autorized_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trac;
  /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location:Switch_Autorized_Waiting_Ack:<2> */
  static kcg_bool tr_2_guard_Switch_Autorized_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trac;
  /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location: */
  static SSM_TR_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside _50_SM_Current_Location_fired_strong_partial_Current_Location_SM_Mode_Profile_By_Trackside;
  /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location: */
  static kcg_bool _51_SM_Current_Location_reset_act_partial_Current_Location_SM_Mode_Profile_By_Trackside;
  /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location: */
  static SSM_ST_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside _52_SM_Current_Location_state_act_partial_Current_Location_SM_Mode_Profile_By_Trackside;
  /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location:Req_Current_Location:<1> */
  static kcg_bool tr_1_guard_Req_Current_Location_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside;
  /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location:Req_Current_Location:<2> */
  static kcg_bool tr_2_guard_Req_Current_Location_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside;
  /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location: */
  static SSM_TR_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside _53_SM_Current_Location_fired_strong_partial_Current_Location_SM_Mode_Profile_By_Trackside;
  /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location: */
  static kcg_bool _54_SM_Current_Location_reset_act_partial_Current_Location_SM_Mode_Profile_By_Trackside;
  /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location: */
  static SSM_ST_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside _55_SM_Current_Location_state_act_partial_Current_Location_SM_Mode_Profile_By_Trackside;
  /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location: */
  static SSM_TR_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside SM_Current_Location_fired_partial_Current_Location_SM_Mode_Profile_By_Trackside;
  /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location: */
  static kcg_bool SM_Current_Location_reset_nxt_partial_Current_Location_SM_Mode_Profile_By_Trackside;
  /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location: */
  static SSM_ST_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside SM_Current_Location_state_nxt_partial_Current_Location_SM_Mode_Profile_By_Trackside;
  /* Loc_Confirmation/ */
  static kcg_bool _56_Loc_Confirmation_partial;
  /* Loc_Timer/ */
  static kcg_int64 _57_Loc_Timer_partial;
  /* Service_Brake_Command/ */
  static kcg_bool _58_Service_Brake_Command_partial;
  /* Condition_73_74/ */
  static kcg_bool _59_Condition_73_74_partial;
  /* Condition_40_51_72/ */
  static kcg_bool _60_Condition_40_51_72_partial;
  /* Condition_34_61_71/ */
  static kcg_bool _61_Condition_34_61_71_partial;
  /* Condition_15_50_70/ */
  static kcg_bool _62_Condition_15_50_70_partial;
  /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location: */
  static SSM_TR_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside _63_SM_Current_Location_fired_partial_Current_Location_SM_Mode_Profile_By_Trackside;
  /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location: */
  static kcg_bool _64_SM_Current_Location_reset_nxt_partial_Current_Location_SM_Mode_Profile_By_Trackside;
  /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location: */
  static SSM_ST_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside _65_SM_Current_Location_state_nxt_partial_Current_Location_SM_Mode_Profile_By_Trackside;
  /* Loc_Confirmation/ */
  static kcg_bool _66_Loc_Confirmation_partial;
  /* Loc_Timer/ */
  static kcg_int64 _67_Loc_Timer_partial;
  /* Service_Brake_Command/ */
  static kcg_bool _68_Service_Brake_Command_partial;
  /* Condition_73_74/ */
  static kcg_bool _69_Condition_73_74_partial;
  /* Condition_40_51_72/ */
  static kcg_bool _70_Condition_40_51_72_partial;
  /* Condition_34_61_71/ */
  static kcg_bool _71_Condition_34_61_71_partial;
  /* Condition_15_50_70/ */
  static kcg_bool _72_Condition_15_50_70_partial;
  /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location: */
  static SSM_TR_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside _73_SM_Current_Location_fired_partial_Current_Location_SM_Mode_Profile_By_Trackside;
  /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location: */
  static kcg_bool _74_SM_Current_Location_reset_nxt_partial_Current_Location_SM_Mode_Profile_By_Trackside;
  /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location: */
  static SSM_ST_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside _75_SM_Current_Location_state_nxt_partial_Current_Location_SM_Mode_Profile_By_Trackside;
  /* Loc_Confirmation/ */
  static kcg_bool _76_Loc_Confirmation_partial;
  /* Loc_Timer/ */
  static kcg_int64 _77_Loc_Timer_partial;
  /* Service_Brake_Command/ */
  static kcg_bool _78_Service_Brake_Command_partial;
  /* Condition_73_74/ */
  static kcg_bool _79_Condition_73_74_partial;
  /* Condition_40_51_72/ */
  static kcg_bool _80_Condition_40_51_72_partial;
  /* Condition_34_61_71/ */
  static kcg_bool _81_Condition_34_61_71_partial;
  /* Condition_15_50_70/ */
  static kcg_bool _82_Condition_15_50_70_partial;
  /* Condition_34_61_71/ */
  static kcg_bool _83_Condition_34_61_71_partial;
  /* Condition_40_51_72/ */
  static kcg_bool _84_Condition_40_51_72_partial;
  /* Condition_73_74/ */
  static kcg_bool _85_Condition_73_74_partial;
  /* Condition_34_61_71/ */
  static kcg_bool _86_Condition_34_61_71_partial;
  /* Condition_40_51_72/ */
  static kcg_bool _87_Condition_40_51_72_partial;
  /* Condition_73_74/ */
  static kcg_bool _88_Condition_73_74_partial;
  /* Condition_73_74/ */
  static kcg_bool _89_Condition_73_74_partial;
  /* Condition_40_51_72/ */
  static kcg_bool _90_Condition_40_51_72_partial;
  /* Condition_73_74/ */
  static kcg_bool _91_Condition_73_74_partial;
  /* Condition_40_51_72/ */
  static kcg_bool _92_Condition_40_51_72_partial;
  /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location: */
  static SSM_TR_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside _93_SM_Current_Location_fired_partial_Current_Location_SM_Mode_Profile_By_Trackside;
  /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location: */
  static kcg_bool _94_SM_Current_Location_reset_nxt_partial_Current_Location_SM_Mode_Profile_By_Trackside;
  /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location: */
  static SSM_ST_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside _95_SM_Current_Location_state_nxt_partial_Current_Location_SM_Mode_Profile_By_Trackside;
  /* Loc_Confirmation/ */
  static kcg_bool _96_Loc_Confirmation_partial;
  /* Loc_Timer/ */
  static kcg_int64 _97_Loc_Timer_partial;
  /* Service_Brake_Command/ */
  static kcg_bool _98_Service_Brake_Command_partial;
  /* Condition_73_74/ */
  static kcg_bool _99_Condition_73_74_partial;
  /* Condition_40_51_72/ */
  static kcg_bool _100_Condition_40_51_72_partial;
  /* Condition_34_61_71/ */
  static kcg_bool _101_Condition_34_61_71_partial;
  /* Condition_15_50_70/ */
  static kcg_bool _102_Condition_15_50_70_partial;
  /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location: */
  static SSM_TR_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside _103_SM_Current_Location_fired_partial_Current_Location_SM_Mode_Profile_By_Trackside;
  /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location: */
  static kcg_bool _104_SM_Current_Location_reset_nxt_partial_Current_Location_SM_Mode_Profile_By_Trackside;
  /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location: */
  static SSM_ST_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside _105_SM_Current_Location_state_nxt_partial_Current_Location_SM_Mode_Profile_By_Trackside;
  /* Loc_Confirmation/ */
  static kcg_bool _106_Loc_Confirmation_partial;
  /* Loc_Timer/ */
  static kcg_int64 _107_Loc_Timer_partial;
  /* Service_Brake_Command/ */
  static kcg_bool _108_Service_Brake_Command_partial;
  /* Condition_73_74/ */
  static kcg_bool _109_Condition_73_74_partial;
  /* Condition_40_51_72/ */
  static kcg_bool _110_Condition_40_51_72_partial;
  /* Condition_34_61_71/ */
  static kcg_bool _111_Condition_34_61_71_partial;
  /* Condition_15_50_70/ */
  static kcg_bool _112_Condition_15_50_70_partial;
  /* SM_Mode_Profile_By_Trackside: */
  static SSM_ST_SM_Mode_Profile_By_Trackside SM_Mode_Profile_By_Trackside_state_act_partial;
  /* SM_Mode_Profile_By_Trackside: */
  static kcg_bool SM_Mode_Profile_By_Trackside_reset_act_partial;
  /* SM_Mode_Profile_By_Trackside: */
  static SSM_TR_SM_Mode_Profile_By_Trackside SM_Mode_Profile_By_Trackside_fired_strong_partial;
  /* SM_Mode_Profile_By_Trackside:Procedure_Off:<1><2> */
  static kcg_bool tr_2_guard_1_Procedure_Off_SM_Mode_Profile_By_Trackside;
  /* SM_Mode_Profile_By_Trackside:Procedure_Off:<1><1> */
  static kcg_bool tr_1_guard_1_Procedure_Off_SM_Mode_Profile_By_Trackside;
  /* SM_Mode_Profile_By_Trackside:Procedure_Off:<1> */
  static kcg_bool tr_1_guard_Procedure_Off_SM_Mode_Profile_By_Trackside;
  /* SM_Mode_Profile_By_Trackside: */
  static SSM_ST_SM_Mode_Profile_By_Trackside _113_SM_Mode_Profile_By_Trackside_state_act_partial;
  /* SM_Mode_Profile_By_Trackside: */
  static kcg_bool _114_SM_Mode_Profile_By_Trackside_reset_act_partial;
  /* SM_Mode_Profile_By_Trackside: */
  static SSM_TR_SM_Mode_Profile_By_Trackside _115_SM_Mode_Profile_By_Trackside_fired_strong_partial;
  /* SM_Mode_Profile_By_Trackside:Futher_location:<2> */
  static kcg_bool tr_2_guard_Futher_location_SM_Mode_Profile_By_Trackside;
  /* SM_Mode_Profile_By_Trackside:Futher_location:<1> */
  static kcg_bool tr_1_guard_Futher_location_SM_Mode_Profile_By_Trackside;
  /* SM_Mode_Profile_By_Trackside: */
  static SSM_ST_SM_Mode_Profile_By_Trackside _116_SM_Mode_Profile_By_Trackside_state_act_partial;
  /* SM_Mode_Profile_By_Trackside: */
  static kcg_bool _117_SM_Mode_Profile_By_Trackside_reset_act_partial;
  /* SM_Mode_Profile_By_Trackside: */
  static SSM_TR_SM_Mode_Profile_By_Trackside _118_SM_Mode_Profile_By_Trackside_fired_strong_partial;
  /* SM_Mode_Profile_By_Trackside:Current_Location:<1> */
  static kcg_bool tr_1_guard_Current_Location_SM_Mode_Profile_By_Trackside;
  static kcg_bool noname;
  /* Loc_Confirmation/ */
  static kcg_bool last_Loc_Confirmation;
  /* Loc_Timer/ */
  static kcg_int64 last_Loc_Timer;
  /* SM_Mode_Profile_By_Trackside: */
  static kcg_bool SM_Mode_Profile_By_Trackside_reset_sel;
  /* SM_Mode_Profile_By_Trackside: */
  static kcg_bool SM_Mode_Profile_By_Trackside_reset_prv;

  last_Loc_Confirmation = outC->Loc_Confirmation;
  last_Loc_Timer = outC->Loc_Timer;
  outC->_L101 = Selected_Mode;
  kcg_copy_T_Mode_Profile_Level_And_Mode_Types_Pkg(
    &outC->_L70,
    Mode_Profile_On_Board);
  outC->_L96 = Profile_Mode;
  outC->_L64 = Train_Speed;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L102, Train_Position);
  /* _L97=(Librairies::Mode_Profile_Calculations#1)/ */
  Mode_Profile_Calculations_Librairies(
    outC->_L101,
    &outC->_L70,
    outC->_L96,
    outC->_L64,
    &outC->_L102,
    &outC->Context_Mode_Profile_Calculations_1);
  outC->_L97 =
    outC->Context_Mode_Profile_Calculations_1.Max_Safe_Front_In_Mode_Profile;
  outC->_L98 =
    outC->Context_Mode_Profile_Calculations_1.Supervision_Condition_In_Mode_Profile;
  outC->_L99 = outC->Context_Mode_Profile_Calculations_1.Awaited_Mode_Profile;
  outC->_L103 =
    outC->Context_Mode_Profile_Calculations_1.Estimated_front_End_In_Ack_Area;
  noname = outC->_L103;
  outC->SM_Mode_Profile_By_Trackside_state_sel =
    outC->SM_Mode_Profile_By_Trackside_state_nxt;
  switch (outC->SM_Mode_Profile_By_Trackside_state_sel) {
    case SSM_st_Current_Location_SM_Mode_Profile_By_Trackside :
      tr_1_guard_Current_Location_SM_Mode_Profile_By_Trackside =
        (!Procedure_Possible) & last_Loc_Confirmation;
      if (tr_1_guard_Current_Location_SM_Mode_Profile_By_Trackside) {
        _116_SM_Mode_Profile_By_Trackside_state_act_partial =
          SSM_st_Procedure_Off_SM_Mode_Profile_By_Trackside;
      }
      else {
        _116_SM_Mode_Profile_By_Trackside_state_act_partial =
          SSM_st_Current_Location_SM_Mode_Profile_By_Trackside;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  outC->Loc_Mode_Profile_Condition = outC->_L97;
  switch (outC->SM_Mode_Profile_By_Trackside_state_sel) {
    case SSM_st_Futher_location_SM_Mode_Profile_By_Trackside :
      tr_2_guard_Futher_location_SM_Mode_Profile_By_Trackside =
        outC->Loc_Mode_Profile_Condition;
      tr_1_guard_Futher_location_SM_Mode_Profile_By_Trackside = !Procedure_Possible;
      if (tr_1_guard_Futher_location_SM_Mode_Profile_By_Trackside) {
        _113_SM_Mode_Profile_By_Trackside_state_act_partial =
          SSM_st_Procedure_Off_SM_Mode_Profile_By_Trackside;
      }
      else if (tr_2_guard_Futher_location_SM_Mode_Profile_By_Trackside) {
        _113_SM_Mode_Profile_By_Trackside_state_act_partial =
          SSM_st_Current_Location_SM_Mode_Profile_By_Trackside;
      }
      else {
        _113_SM_Mode_Profile_By_Trackside_state_act_partial =
          SSM_st_Futher_location_SM_Mode_Profile_By_Trackside;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  outC->Loc_Mode_Available = outC->_L99;
  /* SM_Mode_Profile_By_Trackside: */
  switch (outC->SM_Mode_Profile_By_Trackside_state_sel) {
    case SSM_st_Current_Location_SM_Mode_Profile_By_Trackside :
      outC->SM_Mode_Profile_By_Trackside_state_act =
        _116_SM_Mode_Profile_By_Trackside_state_act_partial;
      if (tr_1_guard_Current_Location_SM_Mode_Profile_By_Trackside) {
        _118_SM_Mode_Profile_By_Trackside_fired_strong_partial =
          SSM_TR_Current_Location_Procedure_Off_1_Current_Location_SM_Mode_Profile_By_Trackside;
      }
      else {
        _118_SM_Mode_Profile_By_Trackside_fired_strong_partial =
          SSM_TR_no_trans_SM_Mode_Profile_By_Trackside;
      }
      outC->SM_Mode_Profile_By_Trackside_fired_strong =
        _118_SM_Mode_Profile_By_Trackside_fired_strong_partial;
      break;
    case SSM_st_Futher_location_SM_Mode_Profile_By_Trackside :
      outC->SM_Mode_Profile_By_Trackside_state_act =
        _113_SM_Mode_Profile_By_Trackside_state_act_partial;
      if (tr_1_guard_Futher_location_SM_Mode_Profile_By_Trackside) {
        _115_SM_Mode_Profile_By_Trackside_fired_strong_partial =
          SSM_TR_Futher_location_Procedure_Off_1_Futher_location_SM_Mode_Profile_By_Trackside;
      }
      else if (tr_2_guard_Futher_location_SM_Mode_Profile_By_Trackside) {
        _115_SM_Mode_Profile_By_Trackside_fired_strong_partial =
          SSM_TR_Futher_location_Current_Location_2_Futher_location_SM_Mode_Profile_By_Trackside;
      }
      else {
        _115_SM_Mode_Profile_By_Trackside_fired_strong_partial =
          SSM_TR_no_trans_SM_Mode_Profile_By_Trackside;
      }
      outC->SM_Mode_Profile_By_Trackside_fired_strong =
        _115_SM_Mode_Profile_By_Trackside_fired_strong_partial;
      break;
    case SSM_st_Procedure_Off_SM_Mode_Profile_By_Trackside :
      tr_1_guard_1_Procedure_Off_SM_Mode_Profile_By_Trackside =
        outC->Loc_Mode_Available & (!outC->Loc_Mode_Profile_Condition);
      tr_2_guard_1_Procedure_Off_SM_Mode_Profile_By_Trackside =
        outC->Loc_Mode_Available & outC->Loc_Mode_Profile_Condition;
      tr_1_guard_Procedure_Off_SM_Mode_Profile_By_Trackside =
        Procedure_Possible &
        (tr_1_guard_1_Procedure_Off_SM_Mode_Profile_By_Trackside |
          tr_2_guard_1_Procedure_Off_SM_Mode_Profile_By_Trackside);
      if (tr_1_guard_Procedure_Off_SM_Mode_Profile_By_Trackside) {
        if (tr_1_guard_1_Procedure_Off_SM_Mode_Profile_By_Trackside) {
          SM_Mode_Profile_By_Trackside_state_act_partial =
            SSM_st_Futher_location_SM_Mode_Profile_By_Trackside;
        }
        else {
          SM_Mode_Profile_By_Trackside_state_act_partial =
            SSM_st_Current_Location_SM_Mode_Profile_By_Trackside;
        }
      }
      else {
        SM_Mode_Profile_By_Trackside_state_act_partial =
          SSM_st_Procedure_Off_SM_Mode_Profile_By_Trackside;
      }
      outC->SM_Mode_Profile_By_Trackside_state_act =
        SM_Mode_Profile_By_Trackside_state_act_partial;
      if (tr_1_guard_Procedure_Off_SM_Mode_Profile_By_Trackside) {
        if (tr_1_guard_1_Procedure_Off_SM_Mode_Profile_By_Trackside) {
          SM_Mode_Profile_By_Trackside_fired_strong_partial =
            SSM_TR_Procedure_Off_Futher_location_1_1_Procedure_Off_SM_Mode_Profile_By_Trackside;
        }
        else {
          SM_Mode_Profile_By_Trackside_fired_strong_partial =
            SSM_TR_Procedure_Off_Current_Location_2_1_Procedure_Off_SM_Mode_Profile_By_Trackside;
        }
      }
      else {
        SM_Mode_Profile_By_Trackside_fired_strong_partial =
          SSM_TR_no_trans_SM_Mode_Profile_By_Trackside;
      }
      outC->SM_Mode_Profile_By_Trackside_fired_strong =
        SM_Mode_Profile_By_Trackside_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM_Mode_Profile_By_Trackside_state_act) {
    case SSM_st_Current_Location_SM_Mode_Profile_By_Trackside :
      _43_SM_Mode_Profile_By_Trackside_fired_partial =
        outC->SM_Mode_Profile_By_Trackside_fired_strong;
      _42_SM_Mode_Profile_By_Trackside_reset_nxt_partial = kcg_false;
      _41_SM_Mode_Profile_By_Trackside_state_nxt_partial =
        SSM_st_Current_Location_SM_Mode_Profile_By_Trackside;
      break;
    default :
      /* this branch is empty */
      break;
  }
  SM_Mode_Profile_By_Trackside_reset_prv =
    outC->SM_Mode_Profile_By_Trackside_reset_act;
  /* SM_Mode_Profile_By_Trackside: */
  switch (outC->SM_Mode_Profile_By_Trackside_state_sel) {
    case SSM_st_Current_Location_SM_Mode_Profile_By_Trackside :
      _117_SM_Mode_Profile_By_Trackside_reset_act_partial =
        tr_1_guard_Current_Location_SM_Mode_Profile_By_Trackside;
      outC->SM_Mode_Profile_By_Trackside_reset_act =
        _117_SM_Mode_Profile_By_Trackside_reset_act_partial;
      break;
    case SSM_st_Futher_location_SM_Mode_Profile_By_Trackside :
      if (tr_1_guard_Futher_location_SM_Mode_Profile_By_Trackside) {
        _114_SM_Mode_Profile_By_Trackside_reset_act_partial = kcg_true;
      }
      else {
        _114_SM_Mode_Profile_By_Trackside_reset_act_partial =
          tr_2_guard_Futher_location_SM_Mode_Profile_By_Trackside;
      }
      outC->SM_Mode_Profile_By_Trackside_reset_act =
        _114_SM_Mode_Profile_By_Trackside_reset_act_partial;
      break;
    case SSM_st_Procedure_Off_SM_Mode_Profile_By_Trackside :
      SM_Mode_Profile_By_Trackside_reset_act_partial =
        tr_1_guard_Procedure_Off_SM_Mode_Profile_By_Trackside;
      outC->SM_Mode_Profile_By_Trackside_reset_act =
        SM_Mode_Profile_By_Trackside_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM_Mode_Profile_By_Trackside_state_act) {
    case SSM_st_Current_Location_SM_Mode_Profile_By_Trackside :
      if (outC->SM_Mode_Profile_By_Trackside_reset_act) {
        outC->init = kcg_true;
      }
      /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location: */
      if (outC->init) {
        outC->SM_Current_Location_state_sel_Current_Location_SM_Mode_Profile_By_Trackside =
          SSM_st_Req_Current_Location_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside;
      }
      else {
        outC->SM_Current_Location_state_sel_Current_Location_SM_Mode_Profile_By_Trackside =
          outC->SM_Current_Location_state_nxt_Current_Location_SM_Mode_Profile_By_Trackside;
      }
      outC->SM_Current_Location_clock_Current_Location_SM_Mode_Profile_By_Trackside =
        outC->SM_Current_Location_state_sel_Current_Location_SM_Mode_Profile_By_Trackside;
      /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location: */
      switch (outC->SM_Current_Location_clock_Current_Location_SM_Mode_Profile_By_Trackside) {
        case SSM_st_Ack_Not_Received_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside :
          tr_1_guard_Ack_Not_Received_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside =
            Driver_Ack_Mode_Profile;
          if (tr_1_guard_Ack_Not_Received_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside) {
            SM_Current_Location_state_act_partial_Current_Location_SM_Mode_Profile_By_Trackside =
              SSM_st_Switch_Mode_Confirmed_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside;
          }
          else {
            SM_Current_Location_state_act_partial_Current_Location_SM_Mode_Profile_By_Trackside =
              SSM_st_Ack_Not_Received_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside;
          }
          outC->SM_Current_Location_state_act_Current_Location_SM_Mode_Profile_By_Trackside =
            SM_Current_Location_state_act_partial_Current_Location_SM_Mode_Profile_By_Trackside;
          break;
        case SSM_st_Switch_Mode_Confirmed_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside :
          _46_SM_Current_Location_state_act_partial_Current_Location_SM_Mode_Profile_By_Trackside =
            SSM_st_Switch_Mode_Confirmed_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside;
          outC->SM_Current_Location_state_act_Current_Location_SM_Mode_Profile_By_Trackside =
            _46_SM_Current_Location_state_act_partial_Current_Location_SM_Mode_Profile_By_Trackside;
          break;
        case SSM_st_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside :
          tr_1_guard_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside =
            Driver_Ack_Mode_Profile;
          if (tr_1_guard_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside) {
            _49_SM_Current_Location_state_act_partial_Current_Location_SM_Mode_Profile_By_Trackside =
              SSM_st_Switch_Mode_Confirmed_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside;
          }
          else {
            _49_SM_Current_Location_state_act_partial_Current_Location_SM_Mode_Profile_By_Trackside =
              SSM_st_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside;
          }
          outC->SM_Current_Location_state_act_Current_Location_SM_Mode_Profile_By_Trackside =
            _49_SM_Current_Location_state_act_partial_Current_Location_SM_Mode_Profile_By_Trackside;
          break;
        case SSM_st_Switch_Autorized_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Tracksid :
          tr_2_guard_Switch_Autorized_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trac =
            last_Loc_Timer > C_Driver_Ack_Delay_Level_And_Mode_Types_Pkg;
          tr_1_guard_Switch_Autorized_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trac =
            Driver_Ack_Mode_Profile;
          if (tr_1_guard_Switch_Autorized_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trac) {
            _52_SM_Current_Location_state_act_partial_Current_Location_SM_Mode_Profile_By_Trackside =
              SSM_st_Switch_Mode_Confirmed_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside;
          }
          else if (tr_2_guard_Switch_Autorized_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trac) {
            _52_SM_Current_Location_state_act_partial_Current_Location_SM_Mode_Profile_By_Trackside =
              SSM_st_Ack_Not_Received_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside;
          }
          else {
            _52_SM_Current_Location_state_act_partial_Current_Location_SM_Mode_Profile_By_Trackside =
              SSM_st_Switch_Autorized_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Tracksid;
          }
          outC->SM_Current_Location_state_act_Current_Location_SM_Mode_Profile_By_Trackside =
            _52_SM_Current_Location_state_act_partial_Current_Location_SM_Mode_Profile_By_Trackside;
          break;
        case SSM_st_Req_Current_Location_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside :
          tr_2_guard_Req_Current_Location_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside =
            (Current_Mode == SB_Level_And_Mode_Types_Pkg) | (Current_Mode ==
              PT_Level_And_Mode_Types_Pkg);
          tr_1_guard_Req_Current_Location_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside =
            (Current_Mode == UN_Level_And_Mode_Types_Pkg) | (Current_Mode ==
              SN_Level_And_Mode_Types_Pkg) | (Current_Mode ==
              SR_Level_And_Mode_Types_Pkg) | Supervision_Modes;
          if (tr_1_guard_Req_Current_Location_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside) {
            _55_SM_Current_Location_state_act_partial_Current_Location_SM_Mode_Profile_By_Trackside =
              SSM_st_Switch_Autorized_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Tracksid;
          }
          else if (tr_2_guard_Req_Current_Location_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside) {
            _55_SM_Current_Location_state_act_partial_Current_Location_SM_Mode_Profile_By_Trackside =
              SSM_st_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside;
          }
          else {
            _55_SM_Current_Location_state_act_partial_Current_Location_SM_Mode_Profile_By_Trackside =
              SSM_st_Req_Current_Location_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside;
          }
          outC->SM_Current_Location_state_act_Current_Location_SM_Mode_Profile_By_Trackside =
            _55_SM_Current_Location_state_act_partial_Current_Location_SM_Mode_Profile_By_Trackside;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      outC->_3_SM_Current_Location_clock_Current_Location_SM_Mode_Profile_By_Trackside =
        outC->SM_Current_Location_state_act_Current_Location_SM_Mode_Profile_By_Trackside;
      switch (outC->_3_SM_Current_Location_clock_Current_Location_SM_Mode_Profile_By_Trackside) {
        case SSM_st_Ack_Not_Received_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside :
          _57_Loc_Timer_partial = kcg_lit_int64(0);
          _59_Condition_73_74_partial = kcg_false;
          _60_Condition_40_51_72_partial = kcg_false;
          _61_Condition_34_61_71_partial = kcg_false;
          _62_Condition_15_50_70_partial = kcg_false;
          break;
        default :
          /* this branch is empty */
          break;
      }
      /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location: */
      switch (outC->SM_Current_Location_clock_Current_Location_SM_Mode_Profile_By_Trackside) {
        case SSM_st_Ack_Not_Received_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside :
          if (tr_1_guard_Ack_Not_Received_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside) {
            SM_Current_Location_fired_strong_partial_Current_Location_SM_Mode_Profile_By_Trackside =
              SSM_TR_Ack_Not_Received_Switch_Mode_Confirmed_1_Ack_Not_Received_SM_Current_Location_Current_Locatio;
          }
          else {
            SM_Current_Location_fired_strong_partial_Current_Location_SM_Mode_Profile_By_Trackside =
              SSM_TR_no_trans_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside;
          }
          outC->SM_Current_Location_fired_strong_Current_Location_SM_Mode_Profile_By_Trackside =
            SM_Current_Location_fired_strong_partial_Current_Location_SM_Mode_Profile_By_Trackside;
          break;
        case SSM_st_Switch_Mode_Confirmed_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside :
          _44_SM_Current_Location_fired_strong_partial_Current_Location_SM_Mode_Profile_By_Trackside =
            SSM_TR_no_trans_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside;
          outC->SM_Current_Location_fired_strong_Current_Location_SM_Mode_Profile_By_Trackside =
            _44_SM_Current_Location_fired_strong_partial_Current_Location_SM_Mode_Profile_By_Trackside;
          break;
        case SSM_st_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside :
          if (tr_1_guard_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside) {
            _47_SM_Current_Location_fired_strong_partial_Current_Location_SM_Mode_Profile_By_Trackside =
              SSM_TR_Waiting_Ack_Switch_Mode_Confirmed_1_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_;
          }
          else {
            _47_SM_Current_Location_fired_strong_partial_Current_Location_SM_Mode_Profile_By_Trackside =
              SSM_TR_no_trans_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside;
          }
          outC->SM_Current_Location_fired_strong_Current_Location_SM_Mode_Profile_By_Trackside =
            _47_SM_Current_Location_fired_strong_partial_Current_Location_SM_Mode_Profile_By_Trackside;
          break;
        case SSM_st_Switch_Autorized_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Tracksid :
          if (tr_1_guard_Switch_Autorized_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trac) {
            _50_SM_Current_Location_fired_strong_partial_Current_Location_SM_Mode_Profile_By_Trackside =
              SSM_TR_Switch_Autorized_Waiting_Ack_Switch_Mode_Confirmed_1_Switch_Autorized_Waiting_Ack_SM_Current_;
          }
          else if (tr_2_guard_Switch_Autorized_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trac) {
            _50_SM_Current_Location_fired_strong_partial_Current_Location_SM_Mode_Profile_By_Trackside =
              SSM_TR_Switch_Autorized_Waiting_Ack_Ack_Not_Received_2_Switch_Autorized_Waiting_Ack_SM_Current_Locat;
          }
          else {
            _50_SM_Current_Location_fired_strong_partial_Current_Location_SM_Mode_Profile_By_Trackside =
              SSM_TR_no_trans_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside;
          }
          outC->SM_Current_Location_fired_strong_Current_Location_SM_Mode_Profile_By_Trackside =
            _50_SM_Current_Location_fired_strong_partial_Current_Location_SM_Mode_Profile_By_Trackside;
          break;
        case SSM_st_Req_Current_Location_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside :
          if (tr_1_guard_Req_Current_Location_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside) {
            _53_SM_Current_Location_fired_strong_partial_Current_Location_SM_Mode_Profile_By_Trackside =
              SSM_TR_Req_Current_Location_Switch_Autorized_Waiting_Ack_1_Req_Current_Location_SM_Current_Location_;
          }
          else if (tr_2_guard_Req_Current_Location_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside) {
            _53_SM_Current_Location_fired_strong_partial_Current_Location_SM_Mode_Profile_By_Trackside =
              SSM_TR_Req_Current_Location_Waiting_Ack_2_Req_Current_Location_SM_Current_Location_Current_Location_;
          }
          else {
            _53_SM_Current_Location_fired_strong_partial_Current_Location_SM_Mode_Profile_By_Trackside =
              SSM_TR_no_trans_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside;
          }
          outC->SM_Current_Location_fired_strong_Current_Location_SM_Mode_Profile_By_Trackside =
            _53_SM_Current_Location_fired_strong_partial_Current_Location_SM_Mode_Profile_By_Trackside;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      switch (outC->_3_SM_Current_Location_clock_Current_Location_SM_Mode_Profile_By_Trackside) {
        case SSM_st_Ack_Not_Received_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside :
          SM_Current_Location_fired_partial_Current_Location_SM_Mode_Profile_By_Trackside =
            outC->SM_Current_Location_fired_strong_Current_Location_SM_Mode_Profile_By_Trackside;
          SM_Current_Location_reset_nxt_partial_Current_Location_SM_Mode_Profile_By_Trackside =
            kcg_false;
          SM_Current_Location_state_nxt_partial_Current_Location_SM_Mode_Profile_By_Trackside =
            SSM_st_Ack_Not_Received_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside;
          outC->_L2_Ack_Not_Received_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside =
            kcg_false;
          _56_Loc_Confirmation_partial =
            outC->_L2_Ack_Not_Received_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside;
          outC->_L1_Ack_Not_Received_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside =
            kcg_true;
          _58_Service_Brake_Command_partial =
            outC->_L1_Ack_Not_Received_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside;
          break;
        case SSM_st_Switch_Mode_Confirmed_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside :
          _66_Loc_Confirmation_partial = kcg_true;
          _67_Loc_Timer_partial = kcg_lit_int64(0);
          _68_Service_Brake_Command_partial = kcg_false;
          _69_Condition_73_74_partial = kcg_false;
          _70_Condition_40_51_72_partial = kcg_false;
          _71_Condition_34_61_71_partial = kcg_false;
          _63_SM_Current_Location_fired_partial_Current_Location_SM_Mode_Profile_By_Trackside =
            outC->SM_Current_Location_fired_strong_Current_Location_SM_Mode_Profile_By_Trackside;
          _64_SM_Current_Location_reset_nxt_partial_Current_Location_SM_Mode_Profile_By_Trackside =
            kcg_false;
          _65_SM_Current_Location_state_nxt_partial_Current_Location_SM_Mode_Profile_By_Trackside =
            SSM_st_Switch_Mode_Confirmed_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside;
          outC->_L1_Switch_Mode_Confirmed_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside =
            kcg_true;
          _72_Condition_15_50_70_partial =
            outC->_L1_Switch_Mode_Confirmed_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside;
          break;
        case SSM_st_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside :
          _76_Loc_Confirmation_partial = kcg_true;
          _77_Loc_Timer_partial = kcg_lit_int64(0);
          _78_Service_Brake_Command_partial = kcg_false;
          _79_Condition_73_74_partial = kcg_false;
          _80_Condition_40_51_72_partial = kcg_false;
          _81_Condition_34_61_71_partial = kcg_false;
          _82_Condition_15_50_70_partial = kcg_false;
          _73_SM_Current_Location_fired_partial_Current_Location_SM_Mode_Profile_By_Trackside =
            outC->SM_Current_Location_fired_strong_Current_Location_SM_Mode_Profile_By_Trackside;
          _74_SM_Current_Location_reset_nxt_partial_Current_Location_SM_Mode_Profile_By_Trackside =
            kcg_false;
          _75_SM_Current_Location_state_nxt_partial_Current_Location_SM_Mode_Profile_By_Trackside =
            SSM_st_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside;
          break;
        case SSM_st_Switch_Autorized_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Tracksid :
          _98_Service_Brake_Command_partial = kcg_false;
          _102_Condition_15_50_70_partial = kcg_false;
          _93_SM_Current_Location_fired_partial_Current_Location_SM_Mode_Profile_By_Trackside =
            outC->SM_Current_Location_fired_strong_Current_Location_SM_Mode_Profile_By_Trackside;
          _94_SM_Current_Location_reset_nxt_partial_Current_Location_SM_Mode_Profile_By_Trackside =
            kcg_false;
          _95_SM_Current_Location_state_nxt_partial_Current_Location_SM_Mode_Profile_By_Trackside =
            SSM_st_Switch_Autorized_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Tracksid;
          outC->_L6_Switch_Autorized_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside =
            kcg_false;
          _96_Loc_Confirmation_partial =
            outC->_L6_Switch_Autorized_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside;
          outC->IfBlock1_clock_Switch_Autorized_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_ =
            (Current_Mode == UN_Level_And_Mode_Types_Pkg) | (Current_Mode ==
              SN_Level_And_Mode_Types_Pkg);
          /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location:Switch_Autorized_Waiting_Ack:IfBlock1: */
          if (outC->IfBlock1_clock_Switch_Autorized_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_) {
            _85_Condition_73_74_partial = kcg_false;
            _84_Condition_40_51_72_partial = kcg_false;
            outC->_L1_then_IfBlock1_Switch_Autorized_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_ =
              kcg_true;
            _83_Condition_34_61_71_partial =
              outC->_L1_then_IfBlock1_Switch_Autorized_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_;
            _101_Condition_34_61_71_partial = _83_Condition_34_61_71_partial;
            _100_Condition_40_51_72_partial = _84_Condition_40_51_72_partial;
            _99_Condition_73_74_partial = _85_Condition_73_74_partial;
          }
          else {
            _86_Condition_34_61_71_partial = kcg_false;
            outC->else_clock_IfBlock1_Switch_Autorized_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profil =
              (Current_Mode == FS_Level_And_Mode_Types_Pkg) | (Current_Mode ==
                SR_Level_And_Mode_Types_Pkg);
            /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location:Switch_Autorized_Waiting_Ack:IfBlock1:else: */
            if (outC->else_clock_IfBlock1_Switch_Autorized_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profil) {
              _91_Condition_73_74_partial = kcg_false;
              outC->_L1_then_else_IfBlock1_Switch_Autorized_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Pro =
                kcg_true;
              _92_Condition_40_51_72_partial =
                outC->_L1_then_else_IfBlock1_Switch_Autorized_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Pro;
              _87_Condition_40_51_72_partial = _92_Condition_40_51_72_partial;
              _88_Condition_73_74_partial = _91_Condition_73_74_partial;
            }
            else {
              _90_Condition_40_51_72_partial = kcg_false;
              outC->_L1_else_else_IfBlock1_Switch_Autorized_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Pro =
                kcg_true;
              _89_Condition_73_74_partial =
                outC->_L1_else_else_IfBlock1_Switch_Autorized_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Pro;
              _87_Condition_40_51_72_partial = _90_Condition_40_51_72_partial;
              _88_Condition_73_74_partial = _89_Condition_73_74_partial;
            }
            _101_Condition_34_61_71_partial = _86_Condition_34_61_71_partial;
            _100_Condition_40_51_72_partial = _87_Condition_40_51_72_partial;
            _99_Condition_73_74_partial = _88_Condition_73_74_partial;
          }
          break;
        default :
          /* this branch is empty */
          break;
      }
      break;
    case SSM_st_Futher_location_SM_Mode_Profile_By_Trackside :
      if (outC->SM_Mode_Profile_By_Trackside_reset_act) {
        outC->init1 = kcg_true;
      }
      /* SM_Mode_Profile_By_Trackside:Futher_location:SM_Futher_Location: */
      if (outC->init1) {
        outC->SM_Futher_Location_state_sel_Futher_location_SM_Mode_Profile_By_Trackside =
          SSM_st_Req_Futher_Location_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside;
      }
      else {
        outC->SM_Futher_Location_state_sel_Futher_location_SM_Mode_Profile_By_Trackside =
          outC->SM_Futher_Location_state_nxt_Futher_location_SM_Mode_Profile_By_Trackside;
      }
      outC->SM_Futher_Location_clock_Futher_location_SM_Mode_Profile_By_Trackside =
        outC->SM_Futher_Location_state_sel_Futher_location_SM_Mode_Profile_By_Trackside;
      switch (outC->SM_Futher_Location_clock_Futher_location_SM_Mode_Profile_By_Trackside) {
        case SSM_st_Switch_Mode_Confirmed_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside :
          SM_Futher_Location_state_act_partial_Futher_location_SM_Mode_Profile_By_Trackside =
            SSM_st_Switch_Mode_Confirmed_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside;
          break;
        case SSM_st_Waiting_Ack_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside :
          tr_1_guard_Waiting_Ack_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside =
            Driver_Ack_Mode_Profile;
          if (tr_1_guard_Waiting_Ack_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside) {
            _14_SM_Futher_Location_state_act_partial_Futher_location_SM_Mode_Profile_By_Trackside =
              SSM_st_Switch_Mode_Confirmed_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside;
          }
          else {
            _14_SM_Futher_Location_state_act_partial_Futher_location_SM_Mode_Profile_By_Trackside =
              SSM_st_Waiting_Ack_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside;
          }
          break;
        default :
          /* this branch is empty */
          break;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  outC->Loc_Supervision_Condition_Covered = outC->_L98;
  /* SM_Mode_Profile_By_Trackside: */
  switch (outC->SM_Mode_Profile_By_Trackside_state_act) {
    case SSM_st_Current_Location_SM_Mode_Profile_By_Trackside :
      /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location: */
      switch (outC->SM_Current_Location_clock_Current_Location_SM_Mode_Profile_By_Trackside) {
        case SSM_st_Ack_Not_Received_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside :
          tmp = kcg_false;
          break;
        case SSM_st_Switch_Mode_Confirmed_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside :
          tmp = kcg_false;
          break;
        case SSM_st_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside :
          tmp = kcg_false;
          break;
        case SSM_st_Switch_Autorized_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Tracksid :
          tmp = kcg_false;
          break;
        case SSM_st_Req_Current_Location_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside :
          outC->tr_1_clock_Req_Current_Location_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside =
            tr_1_guard_Req_Current_Location_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside;
          /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location:Req_Current_Location:<1> */
          if (outC->tr_1_clock_Req_Current_Location_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside) {
            tmp = kcg_true;
          }
          else {
            outC->tr_2_clock_Req_Current_Location_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside =
              tr_2_guard_Req_Current_Location_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside;
            /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location:Req_Current_Location:<2> */
            if (outC->tr_2_clock_Req_Current_Location_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside) {
              tmp = kcg_true;
            }
            else {
              tmp = kcg_false;
            }
          }
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location: */
      switch (outC->_3_SM_Current_Location_clock_Current_Location_SM_Mode_Profile_By_Trackside) {
        case SSM_st_Ack_Not_Received_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside :
          tmp1 = kcg_false;
          break;
        case SSM_st_Switch_Mode_Confirmed_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside :
          tmp1 = kcg_false;
          break;
        case SSM_st_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside :
          tmp1 = kcg_true;
          break;
        case SSM_st_Switch_Autorized_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Tracksid :
          tmp1 = kcg_false;
          break;
        case SSM_st_Req_Current_Location_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside :
          tmp1 = kcg_false;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      outC->Loc_Ack_Req_To_Driver = tmp | tmp1;
      switch (outC->_3_SM_Current_Location_clock_Current_Location_SM_Mode_Profile_By_Trackside) {
        case SSM_st_Switch_Autorized_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Tracksid :
          outC->_L4_Switch_Autorized_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside =
            outC->Loc_Ack_Req_To_Driver;
          outC->_L2_Switch_Autorized_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside =
            C_Cycle_Duration_Level_And_Mode_Types_Pkg;
          break;
        default :
          /* this branch is empty */
          break;
      }
      /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location: */
      if (outC->init) {
        SM_Current_Location_reset_prv_Current_Location_SM_Mode_Profile_By_Trackside =
          kcg_false;
      }
      else {
        SM_Current_Location_reset_prv_Current_Location_SM_Mode_Profile_By_Trackside =
          outC->SM_Current_Location_reset_act_Current_Location_SM_Mode_Profile_By_Trackside;
      }
      /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location: */
      switch (outC->SM_Current_Location_clock_Current_Location_SM_Mode_Profile_By_Trackside) {
        case SSM_st_Ack_Not_Received_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside :
          SM_Current_Location_reset_act_partial_Current_Location_SM_Mode_Profile_By_Trackside =
            tr_1_guard_Ack_Not_Received_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside;
          outC->SM_Current_Location_reset_act_Current_Location_SM_Mode_Profile_By_Trackside =
            SM_Current_Location_reset_act_partial_Current_Location_SM_Mode_Profile_By_Trackside;
          break;
        case SSM_st_Switch_Mode_Confirmed_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside :
          _45_SM_Current_Location_reset_act_partial_Current_Location_SM_Mode_Profile_By_Trackside =
            kcg_false;
          outC->SM_Current_Location_reset_act_Current_Location_SM_Mode_Profile_By_Trackside =
            _45_SM_Current_Location_reset_act_partial_Current_Location_SM_Mode_Profile_By_Trackside;
          break;
        case SSM_st_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside :
          _48_SM_Current_Location_reset_act_partial_Current_Location_SM_Mode_Profile_By_Trackside =
            tr_1_guard_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside;
          outC->SM_Current_Location_reset_act_Current_Location_SM_Mode_Profile_By_Trackside =
            _48_SM_Current_Location_reset_act_partial_Current_Location_SM_Mode_Profile_By_Trackside;
          break;
        case SSM_st_Switch_Autorized_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Tracksid :
          if (tr_1_guard_Switch_Autorized_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trac) {
            _51_SM_Current_Location_reset_act_partial_Current_Location_SM_Mode_Profile_By_Trackside =
              kcg_true;
          }
          else {
            _51_SM_Current_Location_reset_act_partial_Current_Location_SM_Mode_Profile_By_Trackside =
              tr_2_guard_Switch_Autorized_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trac;
          }
          outC->SM_Current_Location_reset_act_Current_Location_SM_Mode_Profile_By_Trackside =
            _51_SM_Current_Location_reset_act_partial_Current_Location_SM_Mode_Profile_By_Trackside;
          break;
        case SSM_st_Req_Current_Location_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside :
          if (tr_1_guard_Req_Current_Location_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside) {
            _54_SM_Current_Location_reset_act_partial_Current_Location_SM_Mode_Profile_By_Trackside =
              kcg_true;
          }
          else {
            _54_SM_Current_Location_reset_act_partial_Current_Location_SM_Mode_Profile_By_Trackside =
              tr_2_guard_Req_Current_Location_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside;
          }
          outC->SM_Current_Location_reset_act_Current_Location_SM_Mode_Profile_By_Trackside =
            _54_SM_Current_Location_reset_act_partial_Current_Location_SM_Mode_Profile_By_Trackside;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      switch (outC->SM_Current_Location_state_act_Current_Location_SM_Mode_Profile_By_Trackside) {
        case SSM_st_Switch_Autorized_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Tracksid :
          if (outC->SM_Current_Location_reset_act_Current_Location_SM_Mode_Profile_By_Trackside) {
            /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location:Switch_Autorized_Waiting_Ack:_L1=(pwlinear::Counter#8)/ */
            Counter_reset_pwlinear_int64(&outC->Context_Counter_8);
          }
          break;
        default :
          /* this branch is empty */
          break;
      }
      if (outC->SM_Mode_Profile_By_Trackside_reset_act) {
        /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location:Switch_Autorized_Waiting_Ack:_L1=(pwlinear::Counter#8)/ */
        Counter_reset_pwlinear_int64(&outC->Context_Counter_8);
      }
      /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location: */
      switch (outC->_3_SM_Current_Location_clock_Current_Location_SM_Mode_Profile_By_Trackside) {
        case SSM_st_Ack_Not_Received_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside :
          _34_Condition_15_50_70_partial = _62_Condition_15_50_70_partial;
          _35_Condition_34_61_71_partial = _61_Condition_34_61_71_partial;
          _36_Condition_40_51_72_partial = _60_Condition_40_51_72_partial;
          _37_Condition_73_74_partial = _59_Condition_73_74_partial;
          _38_Service_Brake_Command_partial = _58_Service_Brake_Command_partial;
          _39_Loc_Timer_partial = _57_Loc_Timer_partial;
          _40_Loc_Confirmation_partial = _56_Loc_Confirmation_partial;
          outC->SM_Current_Location_state_nxt_Current_Location_SM_Mode_Profile_By_Trackside =
            SM_Current_Location_state_nxt_partial_Current_Location_SM_Mode_Profile_By_Trackside;
          break;
        case SSM_st_Switch_Mode_Confirmed_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside :
          _34_Condition_15_50_70_partial = _72_Condition_15_50_70_partial;
          _35_Condition_34_61_71_partial = _71_Condition_34_61_71_partial;
          _36_Condition_40_51_72_partial = _70_Condition_40_51_72_partial;
          _37_Condition_73_74_partial = _69_Condition_73_74_partial;
          _38_Service_Brake_Command_partial = _68_Service_Brake_Command_partial;
          _39_Loc_Timer_partial = _67_Loc_Timer_partial;
          _40_Loc_Confirmation_partial = _66_Loc_Confirmation_partial;
          outC->SM_Current_Location_state_nxt_Current_Location_SM_Mode_Profile_By_Trackside =
            _65_SM_Current_Location_state_nxt_partial_Current_Location_SM_Mode_Profile_By_Trackside;
          break;
        case SSM_st_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside :
          _34_Condition_15_50_70_partial = _82_Condition_15_50_70_partial;
          _35_Condition_34_61_71_partial = _81_Condition_34_61_71_partial;
          _36_Condition_40_51_72_partial = _80_Condition_40_51_72_partial;
          _37_Condition_73_74_partial = _79_Condition_73_74_partial;
          _38_Service_Brake_Command_partial = _78_Service_Brake_Command_partial;
          _39_Loc_Timer_partial = _77_Loc_Timer_partial;
          _40_Loc_Confirmation_partial = _76_Loc_Confirmation_partial;
          outC->SM_Current_Location_state_nxt_Current_Location_SM_Mode_Profile_By_Trackside =
            _75_SM_Current_Location_state_nxt_partial_Current_Location_SM_Mode_Profile_By_Trackside;
          break;
        case SSM_st_Switch_Autorized_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Tracksid :
          /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location:Switch_Autorized_Waiting_Ack:_L1=(pwlinear::Counter#8)/ */
          Counter_pwlinear_int64(
            outC->_L2_Switch_Autorized_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside,
            outC->_L4_Switch_Autorized_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside,
            &outC->Context_Counter_8);
          outC->_L1_Switch_Autorized_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside =
            outC->Context_Counter_8.Count_int64;
          _97_Loc_Timer_partial =
            outC->_L1_Switch_Autorized_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside;
          _34_Condition_15_50_70_partial = _102_Condition_15_50_70_partial;
          _35_Condition_34_61_71_partial = _101_Condition_34_61_71_partial;
          _36_Condition_40_51_72_partial = _100_Condition_40_51_72_partial;
          _37_Condition_73_74_partial = _99_Condition_73_74_partial;
          _38_Service_Brake_Command_partial = _98_Service_Brake_Command_partial;
          _39_Loc_Timer_partial = _97_Loc_Timer_partial;
          _40_Loc_Confirmation_partial = _96_Loc_Confirmation_partial;
          outC->SM_Current_Location_state_nxt_Current_Location_SM_Mode_Profile_By_Trackside =
            _95_SM_Current_Location_state_nxt_partial_Current_Location_SM_Mode_Profile_By_Trackside;
          break;
        case SSM_st_Req_Current_Location_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside :
          _106_Loc_Confirmation_partial = kcg_true;
          _107_Loc_Timer_partial = kcg_lit_int64(0);
          _108_Service_Brake_Command_partial = kcg_false;
          _109_Condition_73_74_partial = kcg_false;
          _110_Condition_40_51_72_partial = kcg_false;
          _111_Condition_34_61_71_partial = kcg_false;
          _112_Condition_15_50_70_partial = kcg_false;
          _103_SM_Current_Location_fired_partial_Current_Location_SM_Mode_Profile_By_Trackside =
            outC->SM_Current_Location_fired_strong_Current_Location_SM_Mode_Profile_By_Trackside;
          _104_SM_Current_Location_reset_nxt_partial_Current_Location_SM_Mode_Profile_By_Trackside =
            kcg_false;
          _105_SM_Current_Location_state_nxt_partial_Current_Location_SM_Mode_Profile_By_Trackside =
            SSM_st_Req_Current_Location_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside;
          _34_Condition_15_50_70_partial = _112_Condition_15_50_70_partial;
          _35_Condition_34_61_71_partial = _111_Condition_34_61_71_partial;
          _36_Condition_40_51_72_partial = _110_Condition_40_51_72_partial;
          _37_Condition_73_74_partial = _109_Condition_73_74_partial;
          _38_Service_Brake_Command_partial = _108_Service_Brake_Command_partial;
          _39_Loc_Timer_partial = _107_Loc_Timer_partial;
          _40_Loc_Confirmation_partial = _106_Loc_Confirmation_partial;
          outC->SM_Current_Location_state_nxt_Current_Location_SM_Mode_Profile_By_Trackside =
            _105_SM_Current_Location_state_nxt_partial_Current_Location_SM_Mode_Profile_By_Trackside;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location: */
      if (outC->init) {
        SM_Current_Location_reset_sel_Current_Location_SM_Mode_Profile_By_Trackside =
          kcg_false;
      }
      else {
        SM_Current_Location_reset_sel_Current_Location_SM_Mode_Profile_By_Trackside =
          outC->SM_Current_Location_reset_nxt_Current_Location_SM_Mode_Profile_By_Trackside;
      }
      /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location: */
      switch (outC->_3_SM_Current_Location_clock_Current_Location_SM_Mode_Profile_By_Trackside) {
        case SSM_st_Ack_Not_Received_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside :
          outC->SM_Current_Location_reset_nxt_Current_Location_SM_Mode_Profile_By_Trackside =
            SM_Current_Location_reset_nxt_partial_Current_Location_SM_Mode_Profile_By_Trackside;
          outC->SM_Current_Location_fired_Current_Location_SM_Mode_Profile_By_Trackside =
            SM_Current_Location_fired_partial_Current_Location_SM_Mode_Profile_By_Trackside;
          break;
        case SSM_st_Switch_Mode_Confirmed_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside :
          outC->SM_Current_Location_reset_nxt_Current_Location_SM_Mode_Profile_By_Trackside =
            _64_SM_Current_Location_reset_nxt_partial_Current_Location_SM_Mode_Profile_By_Trackside;
          outC->SM_Current_Location_fired_Current_Location_SM_Mode_Profile_By_Trackside =
            _63_SM_Current_Location_fired_partial_Current_Location_SM_Mode_Profile_By_Trackside;
          break;
        case SSM_st_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside :
          outC->SM_Current_Location_reset_nxt_Current_Location_SM_Mode_Profile_By_Trackside =
            _74_SM_Current_Location_reset_nxt_partial_Current_Location_SM_Mode_Profile_By_Trackside;
          outC->SM_Current_Location_fired_Current_Location_SM_Mode_Profile_By_Trackside =
            _73_SM_Current_Location_fired_partial_Current_Location_SM_Mode_Profile_By_Trackside;
          break;
        case SSM_st_Switch_Autorized_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Tracksid :
          outC->SM_Current_Location_reset_nxt_Current_Location_SM_Mode_Profile_By_Trackside =
            _94_SM_Current_Location_reset_nxt_partial_Current_Location_SM_Mode_Profile_By_Trackside;
          outC->SM_Current_Location_fired_Current_Location_SM_Mode_Profile_By_Trackside =
            _93_SM_Current_Location_fired_partial_Current_Location_SM_Mode_Profile_By_Trackside;
          break;
        case SSM_st_Req_Current_Location_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside :
          outC->SM_Current_Location_reset_nxt_Current_Location_SM_Mode_Profile_By_Trackside =
            _104_SM_Current_Location_reset_nxt_partial_Current_Location_SM_Mode_Profile_By_Trackside;
          outC->SM_Current_Location_fired_Current_Location_SM_Mode_Profile_By_Trackside =
            _103_SM_Current_Location_fired_partial_Current_Location_SM_Mode_Profile_By_Trackside;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      outC->Condition_15_50_70 = _34_Condition_15_50_70_partial;
      outC->Condition_34_61_71 = _35_Condition_34_61_71_partial;
      outC->Condition_40_51_72 = _36_Condition_40_51_72_partial;
      outC->Condition_73_74 = _37_Condition_73_74_partial;
      outC->Service_Brake_Command = _38_Service_Brake_Command_partial;
      outC->Loc_Timer = _39_Loc_Timer_partial;
      outC->Loc_Confirmation = _40_Loc_Confirmation_partial;
      outC->SM_Mode_Profile_By_Trackside_state_nxt =
        _41_SM_Mode_Profile_By_Trackside_state_nxt_partial;
      break;
    case SSM_st_Futher_location_SM_Mode_Profile_By_Trackside :
      /* SM_Mode_Profile_By_Trackside:Futher_location:SM_Futher_Location: */
      switch (outC->SM_Futher_Location_clock_Futher_location_SM_Mode_Profile_By_Trackside) {
        case SSM_st_Switch_Mode_Confirmed_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside :
          outC->SM_Futher_Location_state_act_Futher_location_SM_Mode_Profile_By_Trackside =
            SM_Futher_Location_state_act_partial_Futher_location_SM_Mode_Profile_By_Trackside;
          break;
        case SSM_st_Waiting_Ack_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside :
          outC->SM_Futher_Location_state_act_Futher_location_SM_Mode_Profile_By_Trackside =
            _14_SM_Futher_Location_state_act_partial_Futher_location_SM_Mode_Profile_By_Trackside;
          break;
        case SSM_st_Start_Supervision_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside :
          tr_1_guard_Start_Supervision_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside =
            outC->Loc_Supervision_Condition_Covered;
          if (tr_1_guard_Start_Supervision_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside) {
            _17_SM_Futher_Location_state_act_partial_Futher_location_SM_Mode_Profile_By_Trackside =
              SSM_st_Waiting_Ack_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside;
          }
          else {
            _17_SM_Futher_Location_state_act_partial_Futher_location_SM_Mode_Profile_By_Trackside =
              SSM_st_Start_Supervision_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside;
          }
          outC->SM_Futher_Location_state_act_Futher_location_SM_Mode_Profile_By_Trackside =
            _17_SM_Futher_Location_state_act_partial_Futher_location_SM_Mode_Profile_By_Trackside;
          break;
        case SSM_st_Req_Futher_Location_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside :
          tr_1_guard_Req_Futher_Location_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside =
            Supervision_Modes;
          if (tr_1_guard_Req_Futher_Location_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside) {
            _20_SM_Futher_Location_state_act_partial_Futher_location_SM_Mode_Profile_By_Trackside =
              SSM_st_Start_Supervision_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside;
          }
          else {
            _20_SM_Futher_Location_state_act_partial_Futher_location_SM_Mode_Profile_By_Trackside =
              SSM_st_Req_Futher_Location_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside;
          }
          outC->SM_Futher_Location_state_act_Futher_location_SM_Mode_Profile_By_Trackside =
            _20_SM_Futher_Location_state_act_partial_Futher_location_SM_Mode_Profile_By_Trackside;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      outC->_2_SM_Futher_Location_clock_Futher_location_SM_Mode_Profile_By_Trackside =
        outC->SM_Futher_Location_state_act_Futher_location_SM_Mode_Profile_By_Trackside;
      /* SM_Mode_Profile_By_Trackside:Futher_location:SM_Futher_Location: */
      switch (outC->_2_SM_Futher_Location_clock_Futher_location_SM_Mode_Profile_By_Trackside) {
        case SSM_st_Switch_Mode_Confirmed_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside :
          outC->Loc_Ack_Req_To_Driver = kcg_false;
          break;
        case SSM_st_Waiting_Ack_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside :
          outC->Loc_Ack_Req_To_Driver = kcg_true;
          break;
        case SSM_st_Start_Supervision_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside :
          outC->Loc_Ack_Req_To_Driver = kcg_false;
          break;
        case SSM_st_Req_Futher_Location_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside :
          outC->Loc_Ack_Req_To_Driver = kcg_false;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      _8_Loc_Confirmation_partial = kcg_true;
      _7_Loc_Timer_partial = kcg_lit_int64(0);
      _6_Service_Brake_Command_partial = kcg_false;
      _5_Condition_73_74_partial = kcg_false;
      _4_Condition_40_51_72_partial = kcg_false;
      _3_Condition_34_61_71_partial = kcg_false;
      _11_SM_Mode_Profile_By_Trackside_fired_partial =
        outC->SM_Mode_Profile_By_Trackside_fired_strong;
      _10_SM_Mode_Profile_By_Trackside_reset_nxt_partial = kcg_false;
      _9_SM_Mode_Profile_By_Trackside_state_nxt_partial =
        SSM_st_Futher_location_SM_Mode_Profile_By_Trackside;
      /* SM_Mode_Profile_By_Trackside:Futher_location:SM_Futher_Location: */
      switch (outC->SM_Futher_Location_clock_Futher_location_SM_Mode_Profile_By_Trackside) {
        case SSM_st_Switch_Mode_Confirmed_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside :
          SM_Futher_Location_fired_strong_partial_Futher_location_SM_Mode_Profile_By_Trackside =
            SSM_TR_no_trans_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside;
          outC->SM_Futher_Location_fired_strong_Futher_location_SM_Mode_Profile_By_Trackside =
            SM_Futher_Location_fired_strong_partial_Futher_location_SM_Mode_Profile_By_Trackside;
          break;
        case SSM_st_Waiting_Ack_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside :
          if (tr_1_guard_Waiting_Ack_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside) {
            _12_SM_Futher_Location_fired_strong_partial_Futher_location_SM_Mode_Profile_By_Trackside =
              SSM_TR_Waiting_Ack_Switch_Mode_Confirmed_1_Waiting_Ack_SM_Futher_Location_Futher_location_SM_Mode_Pr;
          }
          else {
            _12_SM_Futher_Location_fired_strong_partial_Futher_location_SM_Mode_Profile_By_Trackside =
              SSM_TR_no_trans_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside;
          }
          outC->SM_Futher_Location_fired_strong_Futher_location_SM_Mode_Profile_By_Trackside =
            _12_SM_Futher_Location_fired_strong_partial_Futher_location_SM_Mode_Profile_By_Trackside;
          break;
        case SSM_st_Start_Supervision_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside :
          if (tr_1_guard_Start_Supervision_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside) {
            _15_SM_Futher_Location_fired_strong_partial_Futher_location_SM_Mode_Profile_By_Trackside =
              SSM_TR_Start_Supervision_Waiting_Ack_1_Start_Supervision_SM_Futher_Location_Futher_location_SM_Mode_;
          }
          else {
            _15_SM_Futher_Location_fired_strong_partial_Futher_location_SM_Mode_Profile_By_Trackside =
              SSM_TR_no_trans_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside;
          }
          outC->SM_Futher_Location_fired_strong_Futher_location_SM_Mode_Profile_By_Trackside =
            _15_SM_Futher_Location_fired_strong_partial_Futher_location_SM_Mode_Profile_By_Trackside;
          break;
        case SSM_st_Req_Futher_Location_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside :
          if (tr_1_guard_Req_Futher_Location_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside) {
            _18_SM_Futher_Location_fired_strong_partial_Futher_location_SM_Mode_Profile_By_Trackside =
              SSM_TR_Req_Futher_Location_Start_Supervision_1_Req_Futher_Location_SM_Futher_Location_Futher_locatio;
          }
          else {
            _18_SM_Futher_Location_fired_strong_partial_Futher_location_SM_Mode_Profile_By_Trackside =
              SSM_TR_no_trans_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside;
          }
          outC->SM_Futher_Location_fired_strong_Futher_location_SM_Mode_Profile_By_Trackside =
            _18_SM_Futher_Location_fired_strong_partial_Futher_location_SM_Mode_Profile_By_Trackside;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      /* SM_Mode_Profile_By_Trackside:Futher_location:SM_Futher_Location: */
      switch (outC->_2_SM_Futher_Location_clock_Futher_location_SM_Mode_Profile_By_Trackside) {
        case SSM_st_Switch_Mode_Confirmed_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside :
          SM_Futher_Location_fired_partial_Futher_location_SM_Mode_Profile_By_Trackside =
            outC->SM_Futher_Location_fired_strong_Futher_location_SM_Mode_Profile_By_Trackside;
          SM_Futher_Location_reset_nxt_partial_Futher_location_SM_Mode_Profile_By_Trackside =
            kcg_false;
          SM_Futher_Location_state_nxt_partial_Futher_location_SM_Mode_Profile_By_Trackside =
            SSM_st_Switch_Mode_Confirmed_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside;
          outC->_L1_Switch_Mode_Confirmed_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside =
            kcg_true;
          _21_Condition_15_50_70_partial =
            outC->_L1_Switch_Mode_Confirmed_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside;
          _2_Condition_15_50_70_partial = _21_Condition_15_50_70_partial;
          outC->SM_Futher_Location_state_nxt_Futher_location_SM_Mode_Profile_By_Trackside =
            SM_Futher_Location_state_nxt_partial_Futher_location_SM_Mode_Profile_By_Trackside;
          break;
        case SSM_st_Waiting_Ack_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside :
          _25_Condition_15_50_70_partial = kcg_false;
          _22_SM_Futher_Location_fired_partial_Futher_location_SM_Mode_Profile_By_Trackside =
            outC->SM_Futher_Location_fired_strong_Futher_location_SM_Mode_Profile_By_Trackside;
          _23_SM_Futher_Location_reset_nxt_partial_Futher_location_SM_Mode_Profile_By_Trackside =
            kcg_false;
          _24_SM_Futher_Location_state_nxt_partial_Futher_location_SM_Mode_Profile_By_Trackside =
            SSM_st_Waiting_Ack_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside;
          _2_Condition_15_50_70_partial = _25_Condition_15_50_70_partial;
          outC->SM_Futher_Location_state_nxt_Futher_location_SM_Mode_Profile_By_Trackside =
            _24_SM_Futher_Location_state_nxt_partial_Futher_location_SM_Mode_Profile_By_Trackside;
          break;
        case SSM_st_Start_Supervision_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside :
          _29_Condition_15_50_70_partial = kcg_false;
          _26_SM_Futher_Location_fired_partial_Futher_location_SM_Mode_Profile_By_Trackside =
            outC->SM_Futher_Location_fired_strong_Futher_location_SM_Mode_Profile_By_Trackside;
          _27_SM_Futher_Location_reset_nxt_partial_Futher_location_SM_Mode_Profile_By_Trackside =
            kcg_false;
          _28_SM_Futher_Location_state_nxt_partial_Futher_location_SM_Mode_Profile_By_Trackside =
            SSM_st_Start_Supervision_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside;
          _2_Condition_15_50_70_partial = _29_Condition_15_50_70_partial;
          outC->SM_Futher_Location_state_nxt_Futher_location_SM_Mode_Profile_By_Trackside =
            _28_SM_Futher_Location_state_nxt_partial_Futher_location_SM_Mode_Profile_By_Trackside;
          break;
        case SSM_st_Req_Futher_Location_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside :
          _33_Condition_15_50_70_partial = kcg_false;
          _30_SM_Futher_Location_fired_partial_Futher_location_SM_Mode_Profile_By_Trackside =
            outC->SM_Futher_Location_fired_strong_Futher_location_SM_Mode_Profile_By_Trackside;
          _31_SM_Futher_Location_reset_nxt_partial_Futher_location_SM_Mode_Profile_By_Trackside =
            kcg_false;
          _32_SM_Futher_Location_state_nxt_partial_Futher_location_SM_Mode_Profile_By_Trackside =
            SSM_st_Req_Futher_Location_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside;
          _2_Condition_15_50_70_partial = _33_Condition_15_50_70_partial;
          outC->SM_Futher_Location_state_nxt_Futher_location_SM_Mode_Profile_By_Trackside =
            _32_SM_Futher_Location_state_nxt_partial_Futher_location_SM_Mode_Profile_By_Trackside;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      /* SM_Mode_Profile_By_Trackside:Futher_location:SM_Futher_Location: */
      if (outC->init1) {
        SM_Futher_Location_reset_sel_Futher_location_SM_Mode_Profile_By_Trackside =
          kcg_false;
      }
      else {
        SM_Futher_Location_reset_sel_Futher_location_SM_Mode_Profile_By_Trackside =
          outC->SM_Futher_Location_reset_nxt_Futher_location_SM_Mode_Profile_By_Trackside;
      }
      /* SM_Mode_Profile_By_Trackside:Futher_location:SM_Futher_Location: */
      switch (outC->_2_SM_Futher_Location_clock_Futher_location_SM_Mode_Profile_By_Trackside) {
        case SSM_st_Switch_Mode_Confirmed_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside :
          outC->SM_Futher_Location_reset_nxt_Futher_location_SM_Mode_Profile_By_Trackside =
            SM_Futher_Location_reset_nxt_partial_Futher_location_SM_Mode_Profile_By_Trackside;
          outC->SM_Futher_Location_fired_Futher_location_SM_Mode_Profile_By_Trackside =
            SM_Futher_Location_fired_partial_Futher_location_SM_Mode_Profile_By_Trackside;
          break;
        case SSM_st_Waiting_Ack_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside :
          outC->SM_Futher_Location_reset_nxt_Futher_location_SM_Mode_Profile_By_Trackside =
            _23_SM_Futher_Location_reset_nxt_partial_Futher_location_SM_Mode_Profile_By_Trackside;
          outC->SM_Futher_Location_fired_Futher_location_SM_Mode_Profile_By_Trackside =
            _22_SM_Futher_Location_fired_partial_Futher_location_SM_Mode_Profile_By_Trackside;
          break;
        case SSM_st_Start_Supervision_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside :
          outC->SM_Futher_Location_reset_nxt_Futher_location_SM_Mode_Profile_By_Trackside =
            _27_SM_Futher_Location_reset_nxt_partial_Futher_location_SM_Mode_Profile_By_Trackside;
          outC->SM_Futher_Location_fired_Futher_location_SM_Mode_Profile_By_Trackside =
            _26_SM_Futher_Location_fired_partial_Futher_location_SM_Mode_Profile_By_Trackside;
          break;
        case SSM_st_Req_Futher_Location_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside :
          outC->SM_Futher_Location_reset_nxt_Futher_location_SM_Mode_Profile_By_Trackside =
            _31_SM_Futher_Location_reset_nxt_partial_Futher_location_SM_Mode_Profile_By_Trackside;
          outC->SM_Futher_Location_fired_Futher_location_SM_Mode_Profile_By_Trackside =
            _30_SM_Futher_Location_fired_partial_Futher_location_SM_Mode_Profile_By_Trackside;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      switch (outC->SM_Futher_Location_clock_Futher_location_SM_Mode_Profile_By_Trackside) {
        case SSM_st_Switch_Mode_Confirmed_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside :
          SM_Futher_Location_reset_act_partial_Futher_location_SM_Mode_Profile_By_Trackside =
            kcg_false;
          break;
        case SSM_st_Waiting_Ack_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside :
          _13_SM_Futher_Location_reset_act_partial_Futher_location_SM_Mode_Profile_By_Trackside =
            tr_1_guard_Waiting_Ack_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside;
          break;
        case SSM_st_Start_Supervision_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside :
          _16_SM_Futher_Location_reset_act_partial_Futher_location_SM_Mode_Profile_By_Trackside =
            tr_1_guard_Start_Supervision_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside;
          break;
        case SSM_st_Req_Futher_Location_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside :
          _19_SM_Futher_Location_reset_act_partial_Futher_location_SM_Mode_Profile_By_Trackside =
            tr_1_guard_Req_Futher_Location_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      /* SM_Mode_Profile_By_Trackside:Futher_location:SM_Futher_Location: */
      if (outC->init1) {
        SM_Futher_Location_reset_prv_Futher_location_SM_Mode_Profile_By_Trackside =
          kcg_false;
      }
      else {
        SM_Futher_Location_reset_prv_Futher_location_SM_Mode_Profile_By_Trackside =
          outC->SM_Futher_Location_reset_act_Futher_location_SM_Mode_Profile_By_Trackside;
      }
      /* SM_Mode_Profile_By_Trackside:Futher_location:SM_Futher_Location: */
      switch (outC->SM_Futher_Location_clock_Futher_location_SM_Mode_Profile_By_Trackside) {
        case SSM_st_Switch_Mode_Confirmed_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside :
          outC->SM_Futher_Location_reset_act_Futher_location_SM_Mode_Profile_By_Trackside =
            SM_Futher_Location_reset_act_partial_Futher_location_SM_Mode_Profile_By_Trackside;
          break;
        case SSM_st_Waiting_Ack_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside :
          outC->SM_Futher_Location_reset_act_Futher_location_SM_Mode_Profile_By_Trackside =
            _13_SM_Futher_Location_reset_act_partial_Futher_location_SM_Mode_Profile_By_Trackside;
          break;
        case SSM_st_Start_Supervision_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside :
          outC->SM_Futher_Location_reset_act_Futher_location_SM_Mode_Profile_By_Trackside =
            _16_SM_Futher_Location_reset_act_partial_Futher_location_SM_Mode_Profile_By_Trackside;
          break;
        case SSM_st_Req_Futher_Location_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside :
          outC->SM_Futher_Location_reset_act_Futher_location_SM_Mode_Profile_By_Trackside =
            _19_SM_Futher_Location_reset_act_partial_Futher_location_SM_Mode_Profile_By_Trackside;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      outC->Condition_15_50_70 = _2_Condition_15_50_70_partial;
      outC->Condition_34_61_71 = _3_Condition_34_61_71_partial;
      outC->Condition_40_51_72 = _4_Condition_40_51_72_partial;
      outC->Condition_73_74 = _5_Condition_73_74_partial;
      outC->Service_Brake_Command = _6_Service_Brake_Command_partial;
      outC->Loc_Timer = _7_Loc_Timer_partial;
      outC->Loc_Confirmation = _8_Loc_Confirmation_partial;
      outC->SM_Mode_Profile_By_Trackside_state_nxt =
        _9_SM_Mode_Profile_By_Trackside_state_nxt_partial;
      break;
    case SSM_st_Procedure_Off_SM_Mode_Profile_By_Trackside :
      outC->Loc_Ack_Req_To_Driver = kcg_false;
      Loc_Confirmation_partial = kcg_true;
      Loc_Timer_partial = kcg_lit_int64(0);
      Service_Brake_Command_partial = kcg_false;
      Condition_73_74_partial = kcg_false;
      Condition_40_51_72_partial = kcg_false;
      Condition_34_61_71_partial = kcg_false;
      Condition_15_50_70_partial = kcg_false;
      SM_Mode_Profile_By_Trackside_fired_partial =
        outC->SM_Mode_Profile_By_Trackside_fired_strong;
      SM_Mode_Profile_By_Trackside_reset_nxt_partial = kcg_false;
      SM_Mode_Profile_By_Trackside_state_nxt_partial =
        SSM_st_Procedure_Off_SM_Mode_Profile_By_Trackside;
      outC->Condition_15_50_70 = Condition_15_50_70_partial;
      outC->Condition_34_61_71 = Condition_34_61_71_partial;
      outC->Condition_40_51_72 = Condition_40_51_72_partial;
      outC->Condition_73_74 = Condition_73_74_partial;
      outC->Service_Brake_Command = Service_Brake_Command_partial;
      outC->Loc_Timer = Loc_Timer_partial;
      outC->Loc_Confirmation = Loc_Confirmation_partial;
      outC->SM_Mode_Profile_By_Trackside_state_nxt =
        SM_Mode_Profile_By_Trackside_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM_Mode_Profile_By_Trackside_reset_sel =
    outC->SM_Mode_Profile_By_Trackside_reset_nxt;
  /* SM_Mode_Profile_By_Trackside: */
  switch (outC->SM_Mode_Profile_By_Trackside_state_act) {
    case SSM_st_Current_Location_SM_Mode_Profile_By_Trackside :
      outC->SM_Mode_Profile_By_Trackside_reset_nxt =
        _42_SM_Mode_Profile_By_Trackside_reset_nxt_partial;
      outC->SM_Mode_Profile_By_Trackside_fired =
        _43_SM_Mode_Profile_By_Trackside_fired_partial;
      break;
    case SSM_st_Futher_location_SM_Mode_Profile_By_Trackside :
      outC->SM_Mode_Profile_By_Trackside_reset_nxt =
        _10_SM_Mode_Profile_By_Trackside_reset_nxt_partial;
      outC->SM_Mode_Profile_By_Trackside_fired =
        _11_SM_Mode_Profile_By_Trackside_fired_partial;
      break;
    case SSM_st_Procedure_Off_SM_Mode_Profile_By_Trackside :
      outC->SM_Mode_Profile_By_Trackside_reset_nxt =
        SM_Mode_Profile_By_Trackside_reset_nxt_partial;
      outC->SM_Mode_Profile_By_Trackside_fired =
        SM_Mode_Profile_By_Trackside_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L81 = outC->Loc_Ack_Req_To_Driver;
  outC->Ack_Req_To_Driver = outC->_L81;
  switch (outC->SM_Mode_Profile_By_Trackside_state_act) {
    case SSM_st_Current_Location_SM_Mode_Profile_By_Trackside :
      outC->init = kcg_false;
      break;
    case SSM_st_Futher_location_SM_Mode_Profile_By_Trackside :
      outC->init1 = kcg_false;
      break;
    default :
      /* this branch is empty */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void Procedure_With_Mode_Profile_init_Procedures(
  outC_Procedure_With_Mode_Profile_Procedures *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L103 = kcg_true;
  outC->_L102.valid = kcg_true;
  outC->_L102.timestamp = kcg_lit_int64(0);
  outC->_L102.trainPositionIsUnknown = kcg_true;
  outC->_L102.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L102.trainPosition.nominal = kcg_lit_int64(0);
  outC->_L102.trainPosition.d_min = kcg_lit_int64(0);
  outC->_L102.trainPosition.d_max = kcg_lit_int64(0);
  outC->_L102.estimatedFrontEndPosition = kcg_lit_int64(0);
  outC->_L102.minSafeFrontEndPosition = kcg_lit_int64(0);
  outC->_L102.maxSafeFrontEndPostion = kcg_lit_int64(0);
  outC->_L102.LRBG.valid = kcg_true;
  outC->_L102.LRBG.nid_c = kcg_lit_int64(0);
  outC->_L102.LRBG.nid_bg = kcg_lit_int64(0);
  outC->_L102.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L102.LRBG.location.nominal = kcg_lit_int64(0);
  outC->_L102.LRBG.location.d_min = kcg_lit_int64(0);
  outC->_L102.LRBG.location.d_max = kcg_lit_int64(0);
  outC->_L102.LRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L102.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L102.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L102.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L102.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L102.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L102.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L102.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L102.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L102.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L102.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L102.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L102.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L102.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L102.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L102.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L102.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L102.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L102.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L102.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L102.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L102.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L102.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L102.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L102.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L102.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L102.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L102.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L102.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L102.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L102.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L102.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L102.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L102.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L102.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L102.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L102.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L102.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L102.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L102.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L102.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L102.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L102.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L102.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L102.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L102.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L102.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L102.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L102.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L102.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L102.LRBG.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L102.LRBG.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int64(0);
    outC->_L102.LRBG.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L102.LRBG.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L102.LRBG.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int64(0);
    outC->_L102.LRBG.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L102.LRBG.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int64(0);
    outC->_L102.LRBG.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int64(0);
    outC->_L102.LRBG.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L102.LRBG.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L102.LRBG.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int64(0);
  }
  outC->_L102.LRBG.missed = kcg_true;
  outC->_L102.prvLRBG.valid = kcg_true;
  outC->_L102.prvLRBG.nid_c = kcg_lit_int64(0);
  outC->_L102.prvLRBG.nid_bg = kcg_lit_int64(0);
  outC->_L102.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L102.prvLRBG.location.nominal = kcg_lit_int64(0);
  outC->_L102.prvLRBG.location.d_min = kcg_lit_int64(0);
  outC->_L102.prvLRBG.location.d_max = kcg_lit_int64(0);
  outC->_L102.prvLRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L102.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L102.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L102.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L102.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L102.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L102.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L102.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L102.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L102.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L102.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L102.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L102.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L102.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L102.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L102.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L102.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L102.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L102.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L102.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L102.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L102.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L102.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L102.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L102.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L102.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L102.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L102.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L102.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L102.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L102.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L102.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L102.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L102.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L102.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L102.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L102.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L102.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L102.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L102.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L102.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L102.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L102.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L102.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L102.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L102.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L102.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L102.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L102.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L102.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L102.prvLRBG.infoFromPassing.linkedBGs[idx1].valid = kcg_true;
    outC->_L102.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int64(0);
    outC->_L102.prvLRBG.infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L102.prvLRBG.infoFromPassing.linkedBGs[idx1].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L102.prvLRBG.infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int64(0);
    outC->_L102.prvLRBG.infoFromPassing.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L102.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int64(0);
    outC->_L102.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int64(0);
    outC->_L102.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L102.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L102.prvLRBG.infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int64(0);
  }
  outC->_L102.prvLRBG.missed = kcg_true;
  outC->_L102.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L102.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L102.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L102.linkingIsUsedOnboard = kcg_true;
  outC->_L102.estimatedRearEndPosition = kcg_lit_int64(0);
  outC->_L102.minSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L102.maxSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L101 = NP_Level_And_Mode_Types_Pkg;
  outC->_L97 = kcg_true;
  outC->_L98 = kcg_true;
  outC->_L99 = kcg_true;
  outC->_L96 = Profile_OS_Level_And_Mode_Types_Pkg;
  outC->_L64 = kcg_lit_int64(0);
  outC->_L70.Distance = kcg_lit_int64(0);
  outC->_L70.Mode = Profile_OS_Level_And_Mode_Types_Pkg;
  outC->_L70.Speed = kcg_lit_int64(0);
  outC->_L70.Length = kcg_lit_int64(0);
  outC->_L70.Length_Ack = kcg_lit_int64(0);
  outC->_L81 = kcg_true;
  outC->Loc_Mode_Available = kcg_true;
  outC->Loc_Mode_Profile_Condition = kcg_true;
  outC->Loc_Supervision_Condition_Covered = kcg_true;
  outC->SM_Mode_Profile_By_Trackside_fired =
    SSM_TR_no_trans_SM_Mode_Profile_By_Trackside;
  outC->SM_Mode_Profile_By_Trackside_fired_strong =
    SSM_TR_no_trans_SM_Mode_Profile_By_Trackside;
  outC->SM_Mode_Profile_By_Trackside_state_act =
    SSM_st_Procedure_Off_SM_Mode_Profile_By_Trackside;
  outC->SM_Mode_Profile_By_Trackside_state_sel =
    SSM_st_Procedure_Off_SM_Mode_Profile_By_Trackside;
  outC->Loc_Ack_Req_To_Driver = kcg_true;
  outC->_L6_Switch_Autorized_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside =
    kcg_true;
  outC->_L4_Switch_Autorized_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside =
    kcg_true;
  outC->_L2_Switch_Autorized_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside =
    kcg_lit_int64(0);
  outC->_L1_Switch_Autorized_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside =
    kcg_lit_int64(0);
  outC->IfBlock1_clock_Switch_Autorized_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_ =
    kcg_true;
  outC->_L1_then_else_IfBlock1_Switch_Autorized_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Pro =
    kcg_true;
  outC->_L1_else_else_IfBlock1_Switch_Autorized_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Pro =
    kcg_true;
  outC->else_clock_IfBlock1_Switch_Autorized_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profil =
    kcg_true;
  outC->_L1_then_IfBlock1_Switch_Autorized_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_ =
    kcg_true;
  outC->_L1_Switch_Mode_Confirmed_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside =
    kcg_true;
  outC->_L2_Ack_Not_Received_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside =
    kcg_true;
  outC->_L1_Ack_Not_Received_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside =
    kcg_true;
  outC->tr_1_clock_Req_Current_Location_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside =
    kcg_true;
  outC->tr_2_clock_Req_Current_Location_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside =
    kcg_true;
  outC->_3_SM_Current_Location_clock_Current_Location_SM_Mode_Profile_By_Trackside =
    SSM_st_Req_Current_Location_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside;
  outC->SM_Current_Location_clock_Current_Location_SM_Mode_Profile_By_Trackside =
    SSM_st_Req_Current_Location_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside;
  outC->SM_Current_Location_state_sel_Current_Location_SM_Mode_Profile_By_Trackside =
    SSM_st_Req_Current_Location_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside;
  outC->SM_Current_Location_state_act_Current_Location_SM_Mode_Profile_By_Trackside =
    SSM_st_Req_Current_Location_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside;
  outC->SM_Current_Location_fired_strong_Current_Location_SM_Mode_Profile_By_Trackside =
    SSM_TR_no_trans_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside;
  outC->SM_Current_Location_fired_Current_Location_SM_Mode_Profile_By_Trackside =
    SSM_TR_no_trans_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside;
  outC->_L1_Switch_Mode_Confirmed_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside =
    kcg_true;
  outC->_2_SM_Futher_Location_clock_Futher_location_SM_Mode_Profile_By_Trackside =
    SSM_st_Req_Futher_Location_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside;
  outC->SM_Futher_Location_clock_Futher_location_SM_Mode_Profile_By_Trackside =
    SSM_st_Req_Futher_Location_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside;
  outC->SM_Futher_Location_state_sel_Futher_location_SM_Mode_Profile_By_Trackside =
    SSM_st_Req_Futher_Location_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside;
  outC->SM_Futher_Location_state_act_Futher_location_SM_Mode_Profile_By_Trackside =
    SSM_st_Req_Futher_Location_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside;
  outC->SM_Futher_Location_fired_strong_Futher_location_SM_Mode_Profile_By_Trackside =
    SSM_TR_no_trans_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside;
  outC->SM_Futher_Location_fired_Futher_location_SM_Mode_Profile_By_Trackside =
    SSM_TR_no_trans_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside;
  outC->SM_Current_Location_state_nxt_Current_Location_SM_Mode_Profile_By_Trackside =
    SSM_st_Req_Current_Location_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside;
  outC->SM_Current_Location_reset_act_Current_Location_SM_Mode_Profile_By_Trackside =
    kcg_true;
  outC->SM_Current_Location_reset_nxt_Current_Location_SM_Mode_Profile_By_Trackside =
    kcg_true;
  outC->SM_Futher_Location_state_nxt_Futher_location_SM_Mode_Profile_By_Trackside =
    SSM_st_Req_Futher_Location_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside;
  outC->SM_Futher_Location_reset_act_Futher_location_SM_Mode_Profile_By_Trackside =
    kcg_true;
  outC->SM_Futher_Location_reset_nxt_Futher_location_SM_Mode_Profile_By_Trackside =
    kcg_true;
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  outC->Ack_Req_To_Driver = kcg_true;
  outC->Service_Brake_Command = kcg_true;
  outC->Condition_73_74 = kcg_true;
  outC->Condition_40_51_72 = kcg_true;
  outC->Condition_34_61_71 = kcg_true;
  outC->Condition_15_50_70 = kcg_true;
  /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location:Switch_Autorized_Waiting_Ack:_L1=(pwlinear::Counter#8)/ */
  Counter_init_pwlinear_int64(&outC->Context_Counter_8);
  /* _L97=(Librairies::Mode_Profile_Calculations#1)/ */
  Mode_Profile_Calculations_init_Librairies(
    &outC->Context_Mode_Profile_Calculations_1);
  outC->SM_Mode_Profile_By_Trackside_reset_nxt = kcg_false;
  outC->SM_Mode_Profile_By_Trackside_reset_act = kcg_false;
  outC->SM_Mode_Profile_By_Trackside_state_nxt =
    SSM_st_Procedure_Off_SM_Mode_Profile_By_Trackside;
  outC->Loc_Timer = kcg_lit_int64(0);
  outC->Loc_Confirmation = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Procedure_With_Mode_Profile_reset_Procedures(
  outC_Procedure_With_Mode_Profile_Procedures *outC)
{
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location:Switch_Autorized_Waiting_Ack:_L1=(pwlinear::Counter#8)/ */
  Counter_reset_pwlinear_int64(&outC->Context_Counter_8);
  /* _L97=(Librairies::Mode_Profile_Calculations#1)/ */
  Mode_Profile_Calculations_reset_Librairies(
    &outC->Context_Mode_Profile_Calculations_1);
  outC->SM_Mode_Profile_By_Trackside_reset_nxt = kcg_false;
  outC->SM_Mode_Profile_By_Trackside_reset_act = kcg_false;
  outC->SM_Mode_Profile_By_Trackside_state_nxt =
    SSM_st_Procedure_Off_SM_Mode_Profile_By_Trackside;
  outC->Loc_Timer = kcg_lit_int64(0);
  outC->Loc_Confirmation = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Procedure_With_Mode_Profile_Procedures.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

