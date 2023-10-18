/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SoM_NTC_SN_SoMProcedure_Pkg.h"

/* SoMProcedure_Pkg::SoM_NTC_SN/ */
void SoM_NTC_SN_SoMProcedure_Pkg(
  /* Status_Mode_Change_from_Level_and_Mode_Management/ */
  T_Mode_Level_Level_And_Mode_Types_Pkg *Status_Mode_Change_from_Level_and_Mode_Management,
  outC_SoM_NTC_SN_SoMProcedure_Pkg *outC)
{
  /* start_ack_to_TIU/ */
  static kcg_bool start_ack_to_TIU_partial;
  /* Level_NTC_and_Mode_SN: */
  static SSM_ST_Level_NTC_and_Mode_SN Level_NTC_and_Mode_SN_state_nxt_partial;
  /* Level_NTC_and_Mode_SN: */
  static kcg_bool Level_NTC_and_Mode_SN_reset_nxt_partial;
  /* Level_NTC_and_Mode_SN: */
  static SSM_TR_Level_NTC_and_Mode_SN Level_NTC_and_Mode_SN_fired_partial;
  /* start_ack_to_TIU/ */
  static kcg_bool _1_start_ack_to_TIU_partial;
  /* Level_NTC_and_Mode_SN: */
  static SSM_ST_Level_NTC_and_Mode_SN _2_Level_NTC_and_Mode_SN_state_nxt_partial;
  /* Level_NTC_and_Mode_SN: */
  static kcg_bool _3_Level_NTC_and_Mode_SN_reset_nxt_partial;
  /* Level_NTC_and_Mode_SN: */
  static SSM_TR_Level_NTC_and_Mode_SN _4_Level_NTC_and_Mode_SN_fired_partial;
  /* start_ack_to_TIU/ */
  static kcg_bool _5_start_ack_to_TIU_partial;
  /* Level_NTC_and_Mode_SN: */
  static SSM_ST_Level_NTC_and_Mode_SN _6_Level_NTC_and_Mode_SN_state_nxt_partial;
  /* Level_NTC_and_Mode_SN: */
  static kcg_bool _7_Level_NTC_and_Mode_SN_reset_nxt_partial;
  /* Level_NTC_and_Mode_SN: */
  static SSM_TR_Level_NTC_and_Mode_SN _8_Level_NTC_and_Mode_SN_fired_partial;
  /* Level_NTC_and_Mode_SN: */
  static SSM_ST_Level_NTC_and_Mode_SN Level_NTC_and_Mode_SN_state_act_partial;
  /* Level_NTC_and_Mode_SN: */
  static kcg_bool Level_NTC_and_Mode_SN_reset_act_partial;
  /* Level_NTC_and_Mode_SN: */
  static SSM_TR_Level_NTC_and_Mode_SN Level_NTC_and_Mode_SN_fired_strong_partial;
  /* Level_NTC_and_Mode_SN:State1:<1> */
  static kcg_bool tr_1_guard_State1_Level_NTC_and_Mode_SN;
  /* Level_NTC_and_Mode_SN: */
  static SSM_ST_Level_NTC_and_Mode_SN _9_Level_NTC_and_Mode_SN_state_act_partial;
  /* Level_NTC_and_Mode_SN: */
  static kcg_bool _10_Level_NTC_and_Mode_SN_reset_act_partial;
  /* Level_NTC_and_Mode_SN: */
  static SSM_TR_Level_NTC_and_Mode_SN _11_Level_NTC_and_Mode_SN_fired_strong_partial;
  /* Level_NTC_and_Mode_SN:Waiting_for_Ack_of_proposed_Mode_SN_from_Driver:<1> */
  static kcg_bool tr_1_guard_Waiting_for_Ack_of_proposed_Mode_SN_from_Driver_Level_NTC_and_Mode_SN;
  /* Level_NTC_and_Mode_SN: */
  static SSM_ST_Level_NTC_and_Mode_SN _12_Level_NTC_and_Mode_SN_state_act_partial;
  /* Level_NTC_and_Mode_SN: */
  static kcg_bool _13_Level_NTC_and_Mode_SN_reset_act_partial;
  /* Level_NTC_and_Mode_SN: */
  static SSM_TR_Level_NTC_and_Mode_SN _14_Level_NTC_and_Mode_SN_fired_strong_partial;
  static kcg_bool noname;
  /* Level_NTC_and_Mode_SN: */
  static kcg_bool Level_NTC_and_Mode_SN_reset_sel;
  /* Level_NTC_and_Mode_SN: */
  static kcg_bool Level_NTC_and_Mode_SN_reset_prv;

  outC->Level_NTC_and_Mode_SN_state_sel = outC->Level_NTC_and_Mode_SN_state_nxt;
  /* Level_NTC_and_Mode_SN: */
  switch (outC->Level_NTC_and_Mode_SN_state_sel) {
    case SSM_st_Level_NTC_andMode_SN_Level_NTC_and_Mode_SN :
      outC->requestProposeModeSN_to_Level_and_Mode_Management = kcg_false;
      break;
    case SSM_st_Waiting_for_Ack_of_proposed_Mode_SN_from_Driver_Level_NTC_and_Mode_SN :
      outC->requestProposeModeSN_to_Level_and_Mode_Management = kcg_false;
      break;
    case SSM_st_State1_Level_NTC_and_Mode_SN :
      tr_1_guard_State1_Level_NTC_and_Mode_SN = kcg_true;
      outC->tr_1_clock_State1_Level_NTC_and_Mode_SN =
        tr_1_guard_State1_Level_NTC_and_Mode_SN;
      /* Level_NTC_and_Mode_SN:State1:<1> */
      if (outC->tr_1_clock_State1_Level_NTC_and_Mode_SN) {
        outC->requestProposeModeSN_to_Level_and_Mode_Management = kcg_true;
      }
      else {
        outC->requestProposeModeSN_to_Level_and_Mode_Management = kcg_false;
      }
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L1 = outC->requestProposeModeSN_to_Level_and_Mode_Management;
  noname = outC->_L1;
  outC->_L6 = M_MODE_National_System;
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &outC->_L3,
    Status_Mode_Change_from_Level_and_Mode_Management);
  outC->_L4 = outC->_L3.Mode;
  outC->_L5 = outC->_L4 == outC->_L6;
  outC->N_MODE_SN = outC->_L5;
  /* Level_NTC_and_Mode_SN: */
  switch (outC->Level_NTC_and_Mode_SN_state_sel) {
    case SSM_st_Level_NTC_andMode_SN_Level_NTC_and_Mode_SN :
      _12_Level_NTC_and_Mode_SN_state_act_partial =
        SSM_st_Level_NTC_andMode_SN_Level_NTC_and_Mode_SN;
      outC->Level_NTC_and_Mode_SN_state_act =
        _12_Level_NTC_and_Mode_SN_state_act_partial;
      _14_Level_NTC_and_Mode_SN_fired_strong_partial =
        SSM_TR_no_trans_Level_NTC_and_Mode_SN;
      outC->Level_NTC_and_Mode_SN_fired_strong =
        _14_Level_NTC_and_Mode_SN_fired_strong_partial;
      break;
    case SSM_st_Waiting_for_Ack_of_proposed_Mode_SN_from_Driver_Level_NTC_and_Mode_SN :
      tr_1_guard_Waiting_for_Ack_of_proposed_Mode_SN_from_Driver_Level_NTC_and_Mode_SN =
        outC->N_MODE_SN;
      if (tr_1_guard_Waiting_for_Ack_of_proposed_Mode_SN_from_Driver_Level_NTC_and_Mode_SN) {
        _9_Level_NTC_and_Mode_SN_state_act_partial =
          SSM_st_Level_NTC_andMode_SN_Level_NTC_and_Mode_SN;
      }
      else {
        _9_Level_NTC_and_Mode_SN_state_act_partial =
          SSM_st_Waiting_for_Ack_of_proposed_Mode_SN_from_Driver_Level_NTC_and_Mode_SN;
      }
      outC->Level_NTC_and_Mode_SN_state_act =
        _9_Level_NTC_and_Mode_SN_state_act_partial;
      if (tr_1_guard_Waiting_for_Ack_of_proposed_Mode_SN_from_Driver_Level_NTC_and_Mode_SN) {
        _11_Level_NTC_and_Mode_SN_fired_strong_partial =
          SSM_TR_Waiting_for_Ack_of_proposed_Mode_SN_from_Driver_Level_NTC_andMode_SN_1_Waiting_for_Ack_of_pro;
      }
      else {
        _11_Level_NTC_and_Mode_SN_fired_strong_partial =
          SSM_TR_no_trans_Level_NTC_and_Mode_SN;
      }
      outC->Level_NTC_and_Mode_SN_fired_strong =
        _11_Level_NTC_and_Mode_SN_fired_strong_partial;
      break;
    case SSM_st_State1_Level_NTC_and_Mode_SN :
      if (tr_1_guard_State1_Level_NTC_and_Mode_SN) {
        Level_NTC_and_Mode_SN_state_act_partial =
          SSM_st_Waiting_for_Ack_of_proposed_Mode_SN_from_Driver_Level_NTC_and_Mode_SN;
      }
      else {
        Level_NTC_and_Mode_SN_state_act_partial = SSM_st_State1_Level_NTC_and_Mode_SN;
      }
      outC->Level_NTC_and_Mode_SN_state_act = Level_NTC_and_Mode_SN_state_act_partial;
      if (tr_1_guard_State1_Level_NTC_and_Mode_SN) {
        Level_NTC_and_Mode_SN_fired_strong_partial =
          SSM_TR_State1_Waiting_for_Ack_of_proposed_Mode_SN_from_Driver_1_State1_Level_NTC_and_Mode_SN;
      }
      else {
        Level_NTC_and_Mode_SN_fired_strong_partial =
          SSM_TR_no_trans_Level_NTC_and_Mode_SN;
      }
      outC->Level_NTC_and_Mode_SN_fired_strong =
        Level_NTC_and_Mode_SN_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* Level_NTC_and_Mode_SN: */
  switch (outC->Level_NTC_and_Mode_SN_state_act) {
    case SSM_st_Level_NTC_andMode_SN_Level_NTC_and_Mode_SN :
      _8_Level_NTC_and_Mode_SN_fired_partial =
        outC->Level_NTC_and_Mode_SN_fired_strong;
      _7_Level_NTC_and_Mode_SN_reset_nxt_partial = kcg_false;
      _6_Level_NTC_and_Mode_SN_state_nxt_partial =
        SSM_st_Level_NTC_andMode_SN_Level_NTC_and_Mode_SN;
      outC->_L1_Level_NTC_andMode_SN_Level_NTC_and_Mode_SN = kcg_true;
      _5_start_ack_to_TIU_partial =
        outC->_L1_Level_NTC_andMode_SN_Level_NTC_and_Mode_SN;
      outC->start_ack_to_TIU = _5_start_ack_to_TIU_partial;
      outC->Level_NTC_and_Mode_SN_state_nxt =
        _6_Level_NTC_and_Mode_SN_state_nxt_partial;
      break;
    case SSM_st_Waiting_for_Ack_of_proposed_Mode_SN_from_Driver_Level_NTC_and_Mode_SN :
      _1_start_ack_to_TIU_partial = kcg_false;
      _4_Level_NTC_and_Mode_SN_fired_partial =
        outC->Level_NTC_and_Mode_SN_fired_strong;
      _3_Level_NTC_and_Mode_SN_reset_nxt_partial = kcg_false;
      _2_Level_NTC_and_Mode_SN_state_nxt_partial =
        SSM_st_Waiting_for_Ack_of_proposed_Mode_SN_from_Driver_Level_NTC_and_Mode_SN;
      outC->start_ack_to_TIU = _1_start_ack_to_TIU_partial;
      outC->Level_NTC_and_Mode_SN_state_nxt =
        _2_Level_NTC_and_Mode_SN_state_nxt_partial;
      break;
    case SSM_st_State1_Level_NTC_and_Mode_SN :
      start_ack_to_TIU_partial = kcg_false;
      Level_NTC_and_Mode_SN_fired_partial = outC->Level_NTC_and_Mode_SN_fired_strong;
      Level_NTC_and_Mode_SN_reset_nxt_partial = kcg_false;
      Level_NTC_and_Mode_SN_state_nxt_partial = SSM_st_State1_Level_NTC_and_Mode_SN;
      outC->start_ack_to_TIU = start_ack_to_TIU_partial;
      outC->Level_NTC_and_Mode_SN_state_nxt = Level_NTC_and_Mode_SN_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  Level_NTC_and_Mode_SN_reset_sel = outC->Level_NTC_and_Mode_SN_reset_nxt;
  /* Level_NTC_and_Mode_SN: */
  switch (outC->Level_NTC_and_Mode_SN_state_act) {
    case SSM_st_Level_NTC_andMode_SN_Level_NTC_and_Mode_SN :
      outC->Level_NTC_and_Mode_SN_reset_nxt =
        _7_Level_NTC_and_Mode_SN_reset_nxt_partial;
      outC->Level_NTC_and_Mode_SN_fired = _8_Level_NTC_and_Mode_SN_fired_partial;
      break;
    case SSM_st_Waiting_for_Ack_of_proposed_Mode_SN_from_Driver_Level_NTC_and_Mode_SN :
      outC->Level_NTC_and_Mode_SN_reset_nxt =
        _3_Level_NTC_and_Mode_SN_reset_nxt_partial;
      outC->Level_NTC_and_Mode_SN_fired = _4_Level_NTC_and_Mode_SN_fired_partial;
      break;
    case SSM_st_State1_Level_NTC_and_Mode_SN :
      outC->Level_NTC_and_Mode_SN_reset_nxt = Level_NTC_and_Mode_SN_reset_nxt_partial;
      outC->Level_NTC_and_Mode_SN_fired = Level_NTC_and_Mode_SN_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->Level_NTC_and_Mode_SN_state_sel) {
    case SSM_st_Level_NTC_andMode_SN_Level_NTC_and_Mode_SN :
      _13_Level_NTC_and_Mode_SN_reset_act_partial = kcg_false;
      break;
    case SSM_st_Waiting_for_Ack_of_proposed_Mode_SN_from_Driver_Level_NTC_and_Mode_SN :
      _10_Level_NTC_and_Mode_SN_reset_act_partial =
        tr_1_guard_Waiting_for_Ack_of_proposed_Mode_SN_from_Driver_Level_NTC_and_Mode_SN;
      break;
    case SSM_st_State1_Level_NTC_and_Mode_SN :
      Level_NTC_and_Mode_SN_reset_act_partial =
        tr_1_guard_State1_Level_NTC_and_Mode_SN;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  Level_NTC_and_Mode_SN_reset_prv = outC->Level_NTC_and_Mode_SN_reset_act;
  /* Level_NTC_and_Mode_SN: */
  switch (outC->Level_NTC_and_Mode_SN_state_sel) {
    case SSM_st_Level_NTC_andMode_SN_Level_NTC_and_Mode_SN :
      outC->Level_NTC_and_Mode_SN_reset_act =
        _13_Level_NTC_and_Mode_SN_reset_act_partial;
      break;
    case SSM_st_Waiting_for_Ack_of_proposed_Mode_SN_from_Driver_Level_NTC_and_Mode_SN :
      outC->Level_NTC_and_Mode_SN_reset_act =
        _10_Level_NTC_and_Mode_SN_reset_act_partial;
      break;
    case SSM_st_State1_Level_NTC_and_Mode_SN :
      outC->Level_NTC_and_Mode_SN_reset_act = Level_NTC_and_Mode_SN_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void SoM_NTC_SN_init_SoMProcedure_Pkg(outC_SoM_NTC_SN_SoMProcedure_Pkg *outC)
{
  outC->_L6 = M_MODE_Full_Supervision;
  outC->_L5 = kcg_true;
  outC->_L4 = M_MODE_Full_Supervision;
  outC->_L3.compatibleModeAndLevel = kcg_true;
  outC->_L3.level = M_LEVEL_Level_0;
  outC->_L3.newLevel = kcg_true;
  outC->_L3.Mode = M_MODE_Full_Supervision;
  outC->_L3.newMode = kcg_true;
  outC->_L1 = kcg_true;
  outC->N_MODE_SN = kcg_true;
  outC->Level_NTC_and_Mode_SN_fired = SSM_TR_no_trans_Level_NTC_and_Mode_SN;
  outC->Level_NTC_and_Mode_SN_fired_strong =
    SSM_TR_no_trans_Level_NTC_and_Mode_SN;
  outC->Level_NTC_and_Mode_SN_state_act = SSM_st_State1_Level_NTC_and_Mode_SN;
  outC->Level_NTC_and_Mode_SN_state_sel = SSM_st_State1_Level_NTC_and_Mode_SN;
  outC->requestProposeModeSN_to_Level_and_Mode_Management = kcg_true;
  outC->tr_1_clock_State1_Level_NTC_and_Mode_SN = kcg_true;
  outC->_L1_Level_NTC_andMode_SN_Level_NTC_and_Mode_SN = kcg_true;
  outC->start_ack_to_TIU = kcg_true;
  outC->Level_NTC_and_Mode_SN_reset_act = kcg_false;
  outC->Level_NTC_and_Mode_SN_reset_nxt = kcg_false;
  outC->Level_NTC_and_Mode_SN_state_nxt = SSM_st_State1_Level_NTC_and_Mode_SN;
}
#endif /* KCG_USER_DEFINED_INIT */


void SoM_NTC_SN_reset_SoMProcedure_Pkg(outC_SoM_NTC_SN_SoMProcedure_Pkg *outC)
{
  outC->Level_NTC_and_Mode_SN_reset_act = kcg_false;
  outC->Level_NTC_and_Mode_SN_reset_nxt = kcg_false;
  outC->Level_NTC_and_Mode_SN_state_nxt = SSM_st_State1_Level_NTC_and_Mode_SN;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SoM_NTC_SN_SoMProcedure_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

