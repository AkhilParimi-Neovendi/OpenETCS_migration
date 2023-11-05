/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "detectEvokeBrake_input_from_TIU_API_Pkg.h"

/* input_from_TIU_API_Pkg::detectEvokeBrake/ */
void detectEvokeBrake_input_from_TIU_API_Pkg(
  /* brakeController/ */
  Brake_pressure_value_T_TIU_Types_Pkg *brakeController,
  /* ModeLevel/ */
  T_Mode_Level_Level_And_Mode_Types_Pkg *ModeLevel,
  /* inDriverWindowEB/ */
  kcg_bool inDriverWindowEB,
  outC_detectEvokeBrake_input_from_TIU_API_Pkg *outC)
{
  /* EB_RevokedByDriver/ */
  static kcg_bool EB_RevokedByDriver_partial;
  /* brake_Management: */
  static SSM_ST_brake_Management brake_Management_state_nxt_partial;
  /* brake_Management: */
  static kcg_bool brake_Management_reset_nxt_partial;
  /* brake_Management: */
  static SSM_TR_brake_Management brake_Management_fired_partial;
  /* brake_Management:TrainOperation:<1> */
  static kcg_bool tr_1_guard_TrainOperation_brake_Management;
  /* EB_RevokedByDriver/ */
  static kcg_bool _1_EB_RevokedByDriver_partial;
  /* brake_Management: */
  static SSM_ST_brake_Management _2_brake_Management_state_nxt_partial;
  /* brake_Management: */
  static kcg_bool _3_brake_Management_reset_nxt_partial;
  /* brake_Management: */
  static SSM_TR_brake_Management _4_brake_Management_fired_partial;
  /* brake_Management:WatchBrakeMax:<2> */
  static kcg_bool tr_2_guard_WatchBrakeMax_brake_Management;
  /* brake_Management:WatchBrakeMax:<1> */
  static kcg_bool tr_1_guard_WatchBrakeMax_brake_Management;
  /* EB_RevokedByDriver/ */
  static kcg_bool _5_EB_RevokedByDriver_partial;
  /* brake_Management: */
  static SSM_ST_brake_Management _6_brake_Management_state_nxt_partial;
  /* brake_Management: */
  static kcg_bool _7_brake_Management_reset_nxt_partial;
  /* brake_Management: */
  static SSM_TR_brake_Management _8_brake_Management_fired_partial;
  /* brake_Management:BrakeMaxDone:<2> */
  static kcg_bool tr_2_guard_BrakeMaxDone_brake_Management;
  /* brake_Management:BrakeMaxDone:<1> */
  static kcg_bool tr_1_guard_BrakeMaxDone_brake_Management;
  /* EB_RevokedByDriver/ */
  static kcg_bool _9_EB_RevokedByDriver_partial;
  /* brake_Management: */
  static SSM_ST_brake_Management _10_brake_Management_state_nxt_partial;
  /* brake_Management: */
  static kcg_bool _11_brake_Management_reset_nxt_partial;
  /* brake_Management: */
  static SSM_TR_brake_Management _12_brake_Management_fired_partial;
  /* brake_Management:BrakeMinDone:<1> */
  static kcg_bool tr_1_guard_BrakeMinDone_brake_Management;
  /* EB_RevokedByDriver/ */
  static kcg_bool _13_EB_RevokedByDriver_partial;
  /* brake_Management: */
  static SSM_ST_brake_Management _14_brake_Management_state_nxt_partial;
  /* brake_Management: */
  static kcg_bool _15_brake_Management_reset_nxt_partial;
  /* brake_Management: */
  static SSM_TR_brake_Management _16_brake_Management_fired_partial;
  /* brake_Management:Wait_forStartWindow:<2> */
  static kcg_bool tr_2_guard_Wait_forStartWindow_brake_Management;
  /* brake_Management:Wait_forStartWindow:<1> */
  static kcg_bool tr_1_guard_Wait_forStartWindow_brake_Management;
  /* EB_RevokedByDriver/ */
  static kcg_bool last_EB_RevokedByDriver;
  /* brake_Management: */
  static kcg_bool brake_Management_reset_sel;
  /* brake_Management: */
  static kcg_bool brake_Management_reset_prv;

  last_EB_RevokedByDriver = outC->EB_RevokedByDriver;
  kcg_copy_Brake_pressure_value_T_TIU_Types_Pkg(&outC->_L7, brakeController);
  outC->_L8 = outC->_L7.pressure;
  outC->_L12 = kcg_lit_int32(0);
  outC->_L11 = outC->_L12 == outC->_L8;
  outC->isMin = outC->_L11;
  outC->_L10 = kcg_lit_int32(180000);
  outC->_L9 = outC->_L8 >= outC->_L10;
  outC->isMax = outC->_L9;
  outC->_L5 = M_MODE_Post_Trip;
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(&outC->_L2, ModeLevel);
  outC->_L3 = outC->_L2.Mode;
  outC->_L4 = outC->_L3 == outC->_L5;
  outC->is_PostTrip = outC->_L4;
  outC->brake_Management_state_sel = outC->brake_Management_state_nxt;
  outC->brake_Management_state_act = outC->brake_Management_state_sel;
  /* brake_Management: */
  switch (outC->brake_Management_state_act) {
    case SSM_st_Wait_forStartWindow_brake_Management :
      _13_EB_RevokedByDriver_partial = last_EB_RevokedByDriver;
      tr_2_guard_Wait_forStartWindow_brake_Management = !outC->is_PostTrip;
      tr_1_guard_Wait_forStartWindow_brake_Management = inDriverWindowEB;
      if (tr_1_guard_Wait_forStartWindow_brake_Management) {
        _16_brake_Management_fired_partial =
          SSM_TR_Wait_forStartWindow_WatchBrakeMax_1_Wait_forStartWindow_brake_Management;
      }
      else if (tr_2_guard_Wait_forStartWindow_brake_Management) {
        _16_brake_Management_fired_partial =
          SSM_TR_Wait_forStartWindow_TrainOperation_2_Wait_forStartWindow_brake_Management;
      }
      else {
        _16_brake_Management_fired_partial = SSM_TR_no_trans_brake_Management;
      }
      if (tr_1_guard_Wait_forStartWindow_brake_Management) {
        _15_brake_Management_reset_nxt_partial = kcg_true;
      }
      else {
        _15_brake_Management_reset_nxt_partial =
          tr_2_guard_Wait_forStartWindow_brake_Management;
      }
      if (tr_1_guard_Wait_forStartWindow_brake_Management) {
        _14_brake_Management_state_nxt_partial = SSM_st_WatchBrakeMax_brake_Management;
      }
      else if (tr_2_guard_Wait_forStartWindow_brake_Management) {
        _14_brake_Management_state_nxt_partial = SSM_st_TrainOperation_brake_Management;
      }
      else {
        _14_brake_Management_state_nxt_partial =
          SSM_st_Wait_forStartWindow_brake_Management;
      }
      outC->EB_RevokedByDriver = _13_EB_RevokedByDriver_partial;
      outC->brake_Management_state_nxt = _14_brake_Management_state_nxt_partial;
      break;
    case SSM_st_BrakeMinDone_brake_Management :
      tr_1_guard_BrakeMinDone_brake_Management = !outC->is_PostTrip;
      if (tr_1_guard_BrakeMinDone_brake_Management) {
        _12_brake_Management_fired_partial =
          SSM_TR_BrakeMinDone_TrainOperation_1_BrakeMinDone_brake_Management;
      }
      else {
        _12_brake_Management_fired_partial = SSM_TR_no_trans_brake_Management;
      }
      _11_brake_Management_reset_nxt_partial =
        tr_1_guard_BrakeMinDone_brake_Management;
      if (tr_1_guard_BrakeMinDone_brake_Management) {
        _10_brake_Management_state_nxt_partial = SSM_st_TrainOperation_brake_Management;
      }
      else {
        _10_brake_Management_state_nxt_partial = SSM_st_BrakeMinDone_brake_Management;
      }
      outC->_L1_BrakeMinDone_brake_Management = kcg_true;
      _9_EB_RevokedByDriver_partial = outC->_L1_BrakeMinDone_brake_Management;
      outC->EB_RevokedByDriver = _9_EB_RevokedByDriver_partial;
      outC->brake_Management_state_nxt = _10_brake_Management_state_nxt_partial;
      break;
    case SSM_st_BrakeMaxDone_brake_Management :
      _5_EB_RevokedByDriver_partial = last_EB_RevokedByDriver;
      tr_2_guard_BrakeMaxDone_brake_Management = !outC->is_PostTrip;
      tr_1_guard_BrakeMaxDone_brake_Management = outC->isMin;
      if (tr_1_guard_BrakeMaxDone_brake_Management) {
        _8_brake_Management_fired_partial =
          SSM_TR_BrakeMaxDone_BrakeMinDone_1_BrakeMaxDone_brake_Management;
      }
      else if (tr_2_guard_BrakeMaxDone_brake_Management) {
        _8_brake_Management_fired_partial =
          SSM_TR_BrakeMaxDone_TrainOperation_2_BrakeMaxDone_brake_Management;
      }
      else {
        _8_brake_Management_fired_partial = SSM_TR_no_trans_brake_Management;
      }
      if (tr_1_guard_BrakeMaxDone_brake_Management) {
        _7_brake_Management_reset_nxt_partial = kcg_true;
      }
      else {
        _7_brake_Management_reset_nxt_partial =
          tr_2_guard_BrakeMaxDone_brake_Management;
      }
      if (tr_1_guard_BrakeMaxDone_brake_Management) {
        _6_brake_Management_state_nxt_partial = SSM_st_BrakeMinDone_brake_Management;
      }
      else if (tr_2_guard_BrakeMaxDone_brake_Management) {
        _6_brake_Management_state_nxt_partial = SSM_st_TrainOperation_brake_Management;
      }
      else {
        _6_brake_Management_state_nxt_partial = SSM_st_BrakeMaxDone_brake_Management;
      }
      outC->EB_RevokedByDriver = _5_EB_RevokedByDriver_partial;
      outC->brake_Management_state_nxt = _6_brake_Management_state_nxt_partial;
      break;
    case SSM_st_WatchBrakeMax_brake_Management :
      _1_EB_RevokedByDriver_partial = last_EB_RevokedByDriver;
      tr_2_guard_WatchBrakeMax_brake_Management = outC->isMax;
      tr_1_guard_WatchBrakeMax_brake_Management = !outC->is_PostTrip;
      if (tr_1_guard_WatchBrakeMax_brake_Management) {
        _4_brake_Management_fired_partial =
          SSM_TR_WatchBrakeMax_TrainOperation_1_WatchBrakeMax_brake_Management;
      }
      else if (tr_2_guard_WatchBrakeMax_brake_Management) {
        _4_brake_Management_fired_partial =
          SSM_TR_WatchBrakeMax_BrakeMaxDone_2_WatchBrakeMax_brake_Management;
      }
      else {
        _4_brake_Management_fired_partial = SSM_TR_no_trans_brake_Management;
      }
      if (tr_1_guard_WatchBrakeMax_brake_Management) {
        _3_brake_Management_reset_nxt_partial = kcg_true;
      }
      else {
        _3_brake_Management_reset_nxt_partial =
          tr_2_guard_WatchBrakeMax_brake_Management;
      }
      if (tr_1_guard_WatchBrakeMax_brake_Management) {
        _2_brake_Management_state_nxt_partial = SSM_st_TrainOperation_brake_Management;
      }
      else if (tr_2_guard_WatchBrakeMax_brake_Management) {
        _2_brake_Management_state_nxt_partial = SSM_st_BrakeMaxDone_brake_Management;
      }
      else {
        _2_brake_Management_state_nxt_partial = SSM_st_WatchBrakeMax_brake_Management;
      }
      outC->EB_RevokedByDriver = _1_EB_RevokedByDriver_partial;
      outC->brake_Management_state_nxt = _2_brake_Management_state_nxt_partial;
      break;
    case SSM_st_TrainOperation_brake_Management :
      EB_RevokedByDriver_partial = last_EB_RevokedByDriver;
      tr_1_guard_TrainOperation_brake_Management = outC->is_PostTrip;
      if (tr_1_guard_TrainOperation_brake_Management) {
        brake_Management_fired_partial =
          SSM_TR_TrainOperation_Wait_forStartWindow_1_TrainOperation_brake_Management;
      }
      else {
        brake_Management_fired_partial = SSM_TR_no_trans_brake_Management;
      }
      brake_Management_reset_nxt_partial = tr_1_guard_TrainOperation_brake_Management;
      if (tr_1_guard_TrainOperation_brake_Management) {
        brake_Management_state_nxt_partial =
          SSM_st_Wait_forStartWindow_brake_Management;
      }
      else {
        brake_Management_state_nxt_partial = SSM_st_TrainOperation_brake_Management;
      }
      outC->EB_RevokedByDriver = EB_RevokedByDriver_partial;
      outC->brake_Management_state_nxt = brake_Management_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  brake_Management_reset_sel = outC->brake_Management_reset_nxt;
  /* brake_Management: */
  switch (outC->brake_Management_state_act) {
    case SSM_st_Wait_forStartWindow_brake_Management :
      outC->brake_Management_reset_nxt = _15_brake_Management_reset_nxt_partial;
      outC->brake_Management_fired = _16_brake_Management_fired_partial;
      break;
    case SSM_st_BrakeMinDone_brake_Management :
      outC->brake_Management_reset_nxt = _11_brake_Management_reset_nxt_partial;
      outC->brake_Management_fired = _12_brake_Management_fired_partial;
      break;
    case SSM_st_BrakeMaxDone_brake_Management :
      outC->brake_Management_reset_nxt = _7_brake_Management_reset_nxt_partial;
      outC->brake_Management_fired = _8_brake_Management_fired_partial;
      break;
    case SSM_st_WatchBrakeMax_brake_Management :
      outC->brake_Management_reset_nxt = _3_brake_Management_reset_nxt_partial;
      outC->brake_Management_fired = _4_brake_Management_fired_partial;
      break;
    case SSM_st_TrainOperation_brake_Management :
      outC->brake_Management_reset_nxt = brake_Management_reset_nxt_partial;
      outC->brake_Management_fired = brake_Management_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->brake_Management_fired_strong = SSM_TR_no_trans_brake_Management;
  brake_Management_reset_prv = outC->brake_Management_reset_act;
  outC->brake_Management_reset_act = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void detectEvokeBrake_init_input_from_TIU_API_Pkg(
  outC_detectEvokeBrake_input_from_TIU_API_Pkg *outC)
{
  outC->_L12 = kcg_lit_int32(0);
  outC->_L11 = kcg_true;
  outC->_L10 = kcg_lit_int32(0);
  outC->_L9 = kcg_true;
  outC->_L8 = kcg_lit_int32(0);
  outC->_L7.valid = kcg_true;
  outC->_L7.pressure = kcg_lit_int32(0);
  outC->_L5 = M_MODE_Full_Supervision;
  outC->_L4 = kcg_true;
  outC->_L3 = M_MODE_Full_Supervision;
  outC->_L2.compatibleModeAndLevel = kcg_true;
  outC->_L2.level = M_LEVEL_Level_0;
  outC->_L2.newLevel = kcg_true;
  outC->_L2.Mode = M_MODE_Full_Supervision;
  outC->_L2.newMode = kcg_true;
  outC->isMin = kcg_true;
  outC->isMax = kcg_true;
  outC->is_PostTrip = kcg_true;
  outC->brake_Management_fired = SSM_TR_no_trans_brake_Management;
  outC->brake_Management_fired_strong = SSM_TR_no_trans_brake_Management;
  outC->brake_Management_state_act = SSM_st_TrainOperation_brake_Management;
  outC->brake_Management_state_sel = SSM_st_TrainOperation_brake_Management;
  outC->_L1_BrakeMinDone_brake_Management = kcg_true;
  outC->brake_Management_reset_act = kcg_false;
  outC->brake_Management_reset_nxt = kcg_false;
  outC->brake_Management_state_nxt = SSM_st_TrainOperation_brake_Management;
  outC->EB_RevokedByDriver = kcg_false;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void detectEvokeBrake_reset_input_from_TIU_API_Pkg(
  outC_detectEvokeBrake_input_from_TIU_API_Pkg *outC)
{
  outC->brake_Management_reset_act = kcg_false;
  outC->brake_Management_reset_nxt = kcg_false;
  outC->brake_Management_state_nxt = SSM_st_TrainOperation_brake_Management;
  outC->EB_RevokedByDriver = kcg_false;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** detectEvokeBrake_input_from_TIU_API_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

