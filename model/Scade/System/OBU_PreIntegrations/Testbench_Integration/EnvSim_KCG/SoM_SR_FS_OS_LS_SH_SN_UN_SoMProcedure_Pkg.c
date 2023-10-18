/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SoM_SR_FS_OS_LS_SH_SN_UN_SoMProcedure_Pkg.h"

/* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN/ */
void SoM_SR_FS_OS_LS_SH_SN_UN_SoMProcedure_Pkg(
  /* Status_MA_FS_SR_OS_LS_SH_from_MA_L2_Management/ */
  kcg_bool Status_MA_FS_SR_OS_LS_SH_from_MA_L2_Management,
  /* Status_Mode_Change_from_Level_and_Mode_Management/ */
  T_Mode_Level_Level_And_Mode_Types_Pkg *Status_Mode_Change_from_Level_and_Mode_Management,
  outC_SoM_SR_FS_OS_LS_SH_SN_UN_SoMProcedure_Pkg *outC)
{
  /* start_ack_to_TIU/ */
  static kcg_bool start_ack_to_TIU_partial;
  /* SM1: */
  static _126_SSM_ST_SM1 SM1_state_nxt_partial;
  /* SM1: */
  static kcg_bool SM1_reset_nxt_partial;
  /* SM1: */
  static _127_SSM_TR_SM1 SM1_fired_partial;
  /* start_ack_to_TIU/ */
  static kcg_bool _1_start_ack_to_TIU_partial;
  /* SM1: */
  static _126_SSM_ST_SM1 _2_SM1_state_nxt_partial;
  /* SM1: */
  static kcg_bool _3_SM1_reset_nxt_partial;
  /* SM1: */
  static _127_SSM_TR_SM1 _4_SM1_fired_partial;
  /* start_ack_to_TIU/ */
  static kcg_bool _5_start_ack_to_TIU_partial;
  /* SM1: */
  static _126_SSM_ST_SM1 _6_SM1_state_nxt_partial;
  /* SM1: */
  static kcg_bool _7_SM1_reset_nxt_partial;
  /* SM1: */
  static _127_SSM_TR_SM1 _8_SM1_fired_partial;
  /* start_ack_to_TIU/ */
  static kcg_bool _9_start_ack_to_TIU_partial;
  /* SM1: */
  static _126_SSM_ST_SM1 _10_SM1_state_nxt_partial;
  /* SM1: */
  static kcg_bool _11_SM1_reset_nxt_partial;
  /* SM1: */
  static _127_SSM_TR_SM1 _12_SM1_fired_partial;
  /* SM1: */
  static _126_SSM_ST_SM1 SM1_state_act_partial;
  /* SM1: */
  static kcg_bool SM1_reset_act_partial;
  /* SM1: */
  static _127_SSM_TR_SM1 SM1_fired_strong_partial;
  /* SM1:State1:<1> */
  static kcg_bool tr_1_guard_State1_SM1;
  /* SM1: */
  static _126_SSM_ST_SM1 _13_SM1_state_act_partial;
  /* SM1: */
  static kcg_bool _14_SM1_reset_act_partial;
  /* SM1: */
  static _127_SSM_TR_SM1 _15_SM1_fired_strong_partial;
  /* SM1:Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH:<1> */
  static kcg_bool tr_1_guard_Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH_SM1;
  /* SM1: */
  static _126_SSM_ST_SM1 _16_SM1_state_act_partial;
  /* SM1: */
  static kcg_bool _17_SM1_reset_act_partial;
  /* SM1: */
  static _127_SSM_TR_SM1 _18_SM1_fired_strong_partial;
  /* SM1:Wait_for_Acknowledgment_for_mode_change_SB_to_FS_from_mode_and_Level_Management:<1> */
  static kcg_bool tr_1_guard_Wait_for_Acknowledgment_for_mode_change_SB_to_FS_from_mode_and_Level_Management_SM1;
  /* SM1: */
  static _126_SSM_ST_SM1 _19_SM1_state_act_partial;
  /* SM1: */
  static kcg_bool _20_SM1_reset_act_partial;
  /* SM1: */
  static _127_SSM_TR_SM1 _21_SM1_fired_strong_partial;
  static kcg_bool noname;
  /* SM1: */
  static kcg_bool SM1_reset_sel;
  /* SM1: */
  static kcg_bool SM1_reset_prv;

  outC->_L12 = M_MODE_Full_Supervision;
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &outC->_L9,
    Status_Mode_Change_from_Level_and_Mode_Management);
  outC->_L10 = outC->_L9.Mode;
  outC->_L11 = outC->_L10 == outC->_L12;
  outC->M_Mode_FS = outC->_L11;
  outC->_L4 = Status_MA_FS_SR_OS_LS_SH_from_MA_L2_Management;
  outC->_L8 = kcg_false;
  outC->request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management = outC->_L8;
  outC->SM1_state_sel = outC->SM1_state_nxt;
  outC->acknowledge_MA_L2_FS_from_MA_L2_Management = outC->_L4;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_FS_Mode_SM1 :
      outC->requestModeChange_SB_FS_to_Mode_and_Level_Management = kcg_false;
      break;
    case SSM_st_Wait_for_Acknowledgment_for_mode_change_SB_to_FS_from_mode_and_Level_Management_SM1 :
      outC->requestModeChange_SB_FS_to_Mode_and_Level_Management = kcg_false;
      break;
    case SSM_st_Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH_SM1 :
      tr_1_guard_Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH_SM1 =
        outC->acknowledge_MA_L2_FS_from_MA_L2_Management;
      outC->tr_1_clock_Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH_SM1 =
        tr_1_guard_Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH_SM1;
      /* SM1:Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH:<1> */
      if (outC->tr_1_clock_Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH_SM1) {
        outC->requestModeChange_SB_FS_to_Mode_and_Level_Management = kcg_true;
      }
      else {
        outC->requestModeChange_SB_FS_to_Mode_and_Level_Management = kcg_false;
      }
      break;
    case SSM_st_State1_SM1 :
      outC->requestModeChange_SB_FS_to_Mode_and_Level_Management = kcg_false;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L5 = outC->requestModeChange_SB_FS_to_Mode_and_Level_Management;
  noname = outC->_L5;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_FS_Mode_SM1 :
      outC->requestMA_SoM_L2_3_FS_SR_OS_LS_SH = kcg_false;
      break;
    case SSM_st_Wait_for_Acknowledgment_for_mode_change_SB_to_FS_from_mode_and_Level_Management_SM1 :
      outC->requestMA_SoM_L2_3_FS_SR_OS_LS_SH = kcg_false;
      break;
    case SSM_st_Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH_SM1 :
      outC->requestMA_SoM_L2_3_FS_SR_OS_LS_SH = kcg_false;
      break;
    case SSM_st_State1_SM1 :
      tr_1_guard_State1_SM1 = kcg_true;
      outC->tr_1_clock_State1_SM1 = tr_1_guard_State1_SM1;
      /* SM1:State1:<1> */
      if (outC->tr_1_clock_State1_SM1) {
        outC->requestMA_SoM_L2_3_FS_SR_OS_LS_SH = kcg_true;
      }
      else {
        outC->requestMA_SoM_L2_3_FS_SR_OS_LS_SH = kcg_false;
      }
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L1 = outC->requestMA_SoM_L2_3_FS_SR_OS_LS_SH;
  outC->request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management = outC->_L1;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_FS_Mode_SM1 :
      _19_SM1_state_act_partial = SSM_st_FS_Mode_SM1;
      outC->SM1_state_act = _19_SM1_state_act_partial;
      _21_SM1_fired_strong_partial = SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _21_SM1_fired_strong_partial;
      break;
    case SSM_st_Wait_for_Acknowledgment_for_mode_change_SB_to_FS_from_mode_and_Level_Management_SM1 :
      tr_1_guard_Wait_for_Acknowledgment_for_mode_change_SB_to_FS_from_mode_and_Level_Management_SM1 =
        outC->M_Mode_FS;
      if (tr_1_guard_Wait_for_Acknowledgment_for_mode_change_SB_to_FS_from_mode_and_Level_Management_SM1) {
        _16_SM1_state_act_partial = SSM_st_FS_Mode_SM1;
      }
      else {
        _16_SM1_state_act_partial =
          SSM_st_Wait_for_Acknowledgment_for_mode_change_SB_to_FS_from_mode_and_Level_Management_SM1;
      }
      outC->SM1_state_act = _16_SM1_state_act_partial;
      if (tr_1_guard_Wait_for_Acknowledgment_for_mode_change_SB_to_FS_from_mode_and_Level_Management_SM1) {
        _18_SM1_fired_strong_partial =
          SSM_TR_Wait_for_Acknowledgment_for_mode_change_SB_to_FS_from_mode_and_Level_Management_FS_Mode_1_Wai;
      }
      else {
        _18_SM1_fired_strong_partial = SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _18_SM1_fired_strong_partial;
      break;
    case SSM_st_Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH_SM1 :
      if (tr_1_guard_Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH_SM1) {
        _13_SM1_state_act_partial =
          SSM_st_Wait_for_Acknowledgment_for_mode_change_SB_to_FS_from_mode_and_Level_Management_SM1;
      }
      else {
        _13_SM1_state_act_partial = SSM_st_Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH_SM1;
      }
      outC->SM1_state_act = _13_SM1_state_act_partial;
      if (tr_1_guard_Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH_SM1) {
        _15_SM1_fired_strong_partial =
          SSM_TR_Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH_Wait_for_Acknowledgment_for_mode_change_SB_to_FS_from;
      }
      else {
        _15_SM1_fired_strong_partial = SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _15_SM1_fired_strong_partial;
      break;
    case SSM_st_State1_SM1 :
      if (tr_1_guard_State1_SM1) {
        SM1_state_act_partial = SSM_st_Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH_SM1;
      }
      else {
        SM1_state_act_partial = SSM_st_State1_SM1;
      }
      outC->SM1_state_act = SM1_state_act_partial;
      if (tr_1_guard_State1_SM1) {
        SM1_fired_strong_partial =
          SSM_TR_State1_Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH_1_State1_SM1;
      }
      else {
        SM1_fired_strong_partial = SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = SM1_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_FS_Mode_SM1 :
      _12_SM1_fired_partial = outC->SM1_fired_strong;
      _11_SM1_reset_nxt_partial = kcg_false;
      _10_SM1_state_nxt_partial = SSM_st_FS_Mode_SM1;
      outC->_L2_FS_Mode_SM1 = kcg_true;
      _9_start_ack_to_TIU_partial = outC->_L2_FS_Mode_SM1;
      outC->start_ack_to_TIU = _9_start_ack_to_TIU_partial;
      outC->SM1_state_nxt = _10_SM1_state_nxt_partial;
      break;
    case SSM_st_Wait_for_Acknowledgment_for_mode_change_SB_to_FS_from_mode_and_Level_Management_SM1 :
      _5_start_ack_to_TIU_partial = kcg_false;
      _8_SM1_fired_partial = outC->SM1_fired_strong;
      _7_SM1_reset_nxt_partial = kcg_false;
      _6_SM1_state_nxt_partial =
        SSM_st_Wait_for_Acknowledgment_for_mode_change_SB_to_FS_from_mode_and_Level_Management_SM1;
      outC->start_ack_to_TIU = _5_start_ack_to_TIU_partial;
      outC->SM1_state_nxt = _6_SM1_state_nxt_partial;
      break;
    case SSM_st_Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH_SM1 :
      _1_start_ack_to_TIU_partial = kcg_false;
      _4_SM1_fired_partial = outC->SM1_fired_strong;
      _3_SM1_reset_nxt_partial = kcg_false;
      _2_SM1_state_nxt_partial = SSM_st_Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH_SM1;
      outC->start_ack_to_TIU = _1_start_ack_to_TIU_partial;
      outC->SM1_state_nxt = _2_SM1_state_nxt_partial;
      break;
    case SSM_st_State1_SM1 :
      start_ack_to_TIU_partial = kcg_false;
      SM1_fired_partial = outC->SM1_fired_strong;
      SM1_reset_nxt_partial = kcg_false;
      SM1_state_nxt_partial = SSM_st_State1_SM1;
      outC->start_ack_to_TIU = start_ack_to_TIU_partial;
      outC->SM1_state_nxt = SM1_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_sel = outC->SM1_reset_nxt;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_FS_Mode_SM1 :
      outC->SM1_reset_nxt = _11_SM1_reset_nxt_partial;
      outC->SM1_fired = _12_SM1_fired_partial;
      break;
    case SSM_st_Wait_for_Acknowledgment_for_mode_change_SB_to_FS_from_mode_and_Level_Management_SM1 :
      outC->SM1_reset_nxt = _7_SM1_reset_nxt_partial;
      outC->SM1_fired = _8_SM1_fired_partial;
      break;
    case SSM_st_Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH_SM1 :
      outC->SM1_reset_nxt = _3_SM1_reset_nxt_partial;
      outC->SM1_fired = _4_SM1_fired_partial;
      break;
    case SSM_st_State1_SM1 :
      outC->SM1_reset_nxt = SM1_reset_nxt_partial;
      outC->SM1_fired = SM1_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_FS_Mode_SM1 :
      _20_SM1_reset_act_partial = kcg_false;
      break;
    case SSM_st_Wait_for_Acknowledgment_for_mode_change_SB_to_FS_from_mode_and_Level_Management_SM1 :
      _17_SM1_reset_act_partial =
        tr_1_guard_Wait_for_Acknowledgment_for_mode_change_SB_to_FS_from_mode_and_Level_Management_SM1;
      break;
    case SSM_st_Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH_SM1 :
      _14_SM1_reset_act_partial =
        tr_1_guard_Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH_SM1;
      break;
    case SSM_st_State1_SM1 :
      SM1_reset_act_partial = tr_1_guard_State1_SM1;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_prv = outC->SM1_reset_act;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_FS_Mode_SM1 :
      outC->SM1_reset_act = _20_SM1_reset_act_partial;
      break;
    case SSM_st_Wait_for_Acknowledgment_for_mode_change_SB_to_FS_from_mode_and_Level_Management_SM1 :
      outC->SM1_reset_act = _17_SM1_reset_act_partial;
      break;
    case SSM_st_Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH_SM1 :
      outC->SM1_reset_act = _14_SM1_reset_act_partial;
      break;
    case SSM_st_State1_SM1 :
      outC->SM1_reset_act = SM1_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void SoM_SR_FS_OS_LS_SH_SN_UN_init_SoMProcedure_Pkg(
  outC_SoM_SR_FS_OS_LS_SH_SN_UN_SoMProcedure_Pkg *outC)
{
  outC->_L12 = M_MODE_Full_Supervision;
  outC->_L11 = kcg_true;
  outC->_L10 = M_MODE_Full_Supervision;
  outC->_L9.compatibleModeAndLevel = kcg_true;
  outC->_L9.level = M_LEVEL_Level_0;
  outC->_L9.newLevel = kcg_true;
  outC->_L9.Mode = M_MODE_Full_Supervision;
  outC->_L9.newMode = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L1 = kcg_true;
  outC->M_Mode_FS = kcg_true;
  outC->acknowledge_MA_L2_FS_from_MA_L2_Management = kcg_true;
  outC->SM1_fired = SSM_TR_no_trans_SM1;
  outC->SM1_fired_strong = SSM_TR_no_trans_SM1;
  outC->SM1_state_act = SSM_st_State1_SM1;
  outC->SM1_state_sel = SSM_st_State1_SM1;
  outC->requestMA_SoM_L2_3_FS_SR_OS_LS_SH = kcg_true;
  outC->requestModeChange_SB_FS_to_Mode_and_Level_Management = kcg_true;
  outC->tr_1_clock_Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH_SM1 = kcg_true;
  outC->tr_1_clock_State1_SM1 = kcg_true;
  outC->_L2_FS_Mode_SM1 = kcg_true;
  outC->start_ack_to_TIU = kcg_true;
  outC->request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management = kcg_true;
  outC->request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management = kcg_true;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_state_nxt = SSM_st_State1_SM1;
}
#endif /* KCG_USER_DEFINED_INIT */


void SoM_SR_FS_OS_LS_SH_SN_UN_reset_SoMProcedure_Pkg(
  outC_SoM_SR_FS_OS_LS_SH_SN_UN_SoMProcedure_Pkg *outC)
{
  outC->SM1_reset_act = kcg_false;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_state_nxt = SSM_st_State1_SM1;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SoM_SR_FS_OS_LS_SH_SN_UN_SoMProcedure_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

