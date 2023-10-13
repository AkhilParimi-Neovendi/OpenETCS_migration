/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FlashingOperator_DMI_Control_Pkg_Utils.h"

/* DMI_Control_Pkg::Utils::FlashingOperator/ */
void FlashingOperator_DMI_Control_Pkg_Utils(
  /* OnOff/ */
  kcg_bool OnOff,
  /* SystemTime/ */
  kcg_int64 SystemTime,
  /* Interval/ */
  kcg_int64 Interval,
  outC_FlashingOperator_DMI_Control_Pkg_Utils *outC)
{
  /* flashigOut/ */
  static kcg_bool flashigOut_partial;
  /* active/ */
  static kcg_bool active_partial;
  /* SM1: */
  static _116_SSM_ST_SM1 SM1_state_nxt_partial;
  /* SM1: */
  static kcg_bool SM1_reset_nxt_partial;
  /* SM1: */
  static _117_SSM_TR_SM1 SM1_fired_partial;
  /* flashigOut/ */
  static kcg_bool _1_flashigOut_partial;
  /* active/ */
  static kcg_bool _2_active_partial;
  /* SM1: */
  static _116_SSM_ST_SM1 _3_SM1_state_nxt_partial;
  /* SM1: */
  static kcg_bool _4_SM1_reset_nxt_partial;
  /* SM1: */
  static _117_SSM_TR_SM1 _5_SM1_fired_partial;
  /* SM1:start:counter/ */
  static kcg_int64 last_counter_start_SM1;
  static kcg_bool noname;
  static kcg_bool _6_noname;
  /* SM1: */
  static _116_SSM_ST_SM1 SM1_state_act_partial;
  /* SM1: */
  static kcg_bool SM1_reset_act_partial;
  /* SM1: */
  static _117_SSM_TR_SM1 SM1_fired_strong_partial;
  /* SM1:stop:<1> */
  static kcg_bool tr_1_guard_stop_SM1;
  /* SM1: */
  static _116_SSM_ST_SM1 _7_SM1_state_act_partial;
  /* SM1: */
  static kcg_bool _8_SM1_reset_act_partial;
  /* SM1: */
  static _117_SSM_TR_SM1 _9_SM1_fired_strong_partial;
  /* SM1:start:<1> */
  static kcg_bool tr_1_guard_start_SM1;
  /* SM1: */
  static kcg_bool SM1_reset_sel;
  /* SM1: */
  static kcg_bool SM1_reset_prv;

  outC->SM1_state_sel = outC->SM1_state_nxt;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_start_SM1 :
      tr_1_guard_start_SM1 = !OnOff;
      if (tr_1_guard_start_SM1) {
        _7_SM1_state_act_partial = SSM_st_stop_SM1;
      }
      else {
        _7_SM1_state_act_partial = SSM_st_start_SM1;
      }
      outC->SM1_state_act = _7_SM1_state_act_partial;
      break;
    case SSM_st_stop_SM1 :
      tr_1_guard_stop_SM1 = OnOff;
      if (tr_1_guard_stop_SM1) {
        SM1_state_act_partial = SSM_st_start_SM1;
      }
      else {
        SM1_state_act_partial = SSM_st_stop_SM1;
      }
      outC->SM1_state_act = SM1_state_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_prv = outC->SM1_reset_act;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_start_SM1 :
      _8_SM1_reset_act_partial = tr_1_guard_start_SM1;
      outC->SM1_reset_act = _8_SM1_reset_act_partial;
      break;
    case SSM_st_stop_SM1 :
      SM1_reset_act_partial = tr_1_guard_stop_SM1;
      outC->SM1_reset_act = SM1_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_start_SM1 :
      if (outC->SM1_reset_act) {
        outC->init = kcg_true;
      }
      /* SM1:start:counter/ */
      if (outC->init) {
        last_counter_start_SM1 = kcg_lit_int64(0);
      }
      else {
        last_counter_start_SM1 = outC->counter_start_SM1;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_start_SM1 :
      if (tr_1_guard_start_SM1) {
        _9_SM1_fired_strong_partial = SSM_TR_start_stop_1_start_SM1;
      }
      else {
        _9_SM1_fired_strong_partial = _163_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _9_SM1_fired_strong_partial;
      break;
    case SSM_st_stop_SM1 :
      if (tr_1_guard_stop_SM1) {
        SM1_fired_strong_partial = SSM_TR_stop_start_1_stop_SM1;
      }
      else {
        SM1_fired_strong_partial = _163_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = SM1_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_start_SM1 :
      _5_SM1_fired_partial = outC->SM1_fired_strong;
      _4_SM1_reset_nxt_partial = kcg_false;
      _3_SM1_state_nxt_partial = SSM_st_start_SM1;
      outC->_L27_start_SM1 = kcg_lit_int64(0);
      outC->_L18_start_SM1 = kcg_lit_int64(1);
      outC->_L20_start_SM1 = last_counter_start_SM1;
      outC->_L19_start_SM1 = outC->_L20_start_SM1 + outC->_L18_start_SM1;
      outC->_L24_start_SM1 = kcg_lit_int64(0);
      outC->_L23_start_SM1 = kcg_lit_int64(20);
      outC->_L22_start_SM1 = outC->_L23_start_SM1 == outC->_L20_start_SM1;
      /* SM1:start:_L21= */
      if (outC->_L22_start_SM1) {
        outC->_L21_start_SM1 = outC->_L24_start_SM1;
      }
      else {
        outC->_L21_start_SM1 = outC->_L19_start_SM1;
      }
      outC->counter_start_SM1 = outC->_L21_start_SM1;
      outC->_L25_start_SM1 = outC->counter_start_SM1;
      outC->_L26_start_SM1 = outC->_L25_start_SM1 == outC->_L27_start_SM1;
      outC->_L4_start_SM1 = kcg_false;
      outC->_L13_start_SM1 = SystemTime;
      outC->_L2_start_SM1 = kcg_true;
      outC->_L15_start_SM1 = Interval;
      if (outC->SM1_reset_act) {
        /* SM1:start:_L6=(MoRC_Pck::Utils::countDownTimer#2)/ */
        countDownTimer_reset_MoRC_Pck_Utils(&outC->Context_countDownTimer_2);
      }
      /* SM1:start:_L6=(MoRC_Pck::Utils::countDownTimer#2)/ */
      countDownTimer_MoRC_Pck_Utils(
        outC->_L4_start_SM1,
        outC->_L4_start_SM1,
        outC->_L13_start_SM1,
        outC->_L2_start_SM1,
        outC->_L15_start_SM1,
        &outC->Context_countDownTimer_2);
      outC->_L6_start_SM1 = outC->Context_countDownTimer_2.expired;
      outC->_L7_start_SM1 = outC->Context_countDownTimer_2.started;
      noname = outC->_L6_start_SM1;
      outC->_L12_start_SM1 = kcg_true;
      _2_active_partial = outC->_L12_start_SM1;
      /* SM1:start:_L3= */
      if (outC->init) {
        outC->_L3_start_SM1 = kcg_false;
      }
      else {
        outC->_L3_start_SM1 = outC->_L10_start_SM1;
      }
      outC->_L9_start_SM1 = !outC->_L3_start_SM1;
      /* SM1:start:_L10= */
      if (outC->_L26_start_SM1) {
        outC->_L10_start_SM1 = outC->_L9_start_SM1;
      }
      else {
        outC->_L10_start_SM1 = outC->_L3_start_SM1;
      }
      _6_noname = outC->_L7_start_SM1;
      _1_flashigOut_partial = outC->_L10_start_SM1;
      outC->flashigOut = _1_flashigOut_partial;
      outC->active = _2_active_partial;
      outC->SM1_state_nxt = _3_SM1_state_nxt_partial;
      break;
    case SSM_st_stop_SM1 :
      flashigOut_partial = kcg_false;
      SM1_fired_partial = outC->SM1_fired_strong;
      SM1_reset_nxt_partial = kcg_false;
      SM1_state_nxt_partial = SSM_st_stop_SM1;
      outC->_L1_stop_SM1 = kcg_false;
      active_partial = outC->_L1_stop_SM1;
      outC->flashigOut = flashigOut_partial;
      outC->active = active_partial;
      outC->SM1_state_nxt = SM1_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_sel = outC->SM1_reset_nxt;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_start_SM1 :
      outC->SM1_reset_nxt = _4_SM1_reset_nxt_partial;
      outC->SM1_fired = _5_SM1_fired_partial;
      outC->init = kcg_false;
      break;
    case SSM_st_stop_SM1 :
      outC->SM1_reset_nxt = SM1_reset_nxt_partial;
      outC->SM1_fired = SM1_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void FlashingOperator_init_DMI_Control_Pkg_Utils(
  outC_FlashingOperator_DMI_Control_Pkg_Utils *outC)
{
  outC->SM1_fired = _163_SSM_TR_no_trans_SM1;
  outC->SM1_fired_strong = _163_SSM_TR_no_trans_SM1;
  outC->SM1_state_act = SSM_st_stop_SM1;
  outC->SM1_state_sel = SSM_st_stop_SM1;
  outC->_L9_start_SM1 = kcg_true;
  outC->_L6_start_SM1 = kcg_true;
  outC->_L7_start_SM1 = kcg_true;
  outC->_L4_start_SM1 = kcg_true;
  outC->_L3_start_SM1 = kcg_true;
  outC->_L2_start_SM1 = kcg_true;
  outC->_L12_start_SM1 = kcg_true;
  outC->_L13_start_SM1 = kcg_lit_int64(0);
  outC->_L15_start_SM1 = kcg_lit_int64(0);
  outC->_L20_start_SM1 = kcg_lit_int64(0);
  outC->_L19_start_SM1 = kcg_lit_int64(0);
  outC->_L18_start_SM1 = kcg_lit_int64(0);
  outC->_L21_start_SM1 = kcg_lit_int64(0);
  outC->_L22_start_SM1 = kcg_true;
  outC->_L23_start_SM1 = kcg_lit_int64(0);
  outC->_L24_start_SM1 = kcg_lit_int64(0);
  outC->_L25_start_SM1 = kcg_lit_int64(0);
  outC->_L26_start_SM1 = kcg_true;
  outC->_L27_start_SM1 = kcg_lit_int64(0);
  outC->_L1_stop_SM1 = kcg_true;
  outC->counter_start_SM1 = kcg_lit_int64(0);
  outC->_L10_start_SM1 = kcg_true;
  outC->init = kcg_true;
  outC->active = kcg_true;
  outC->flashigOut = kcg_true;
  /* SM1:start:_L6=(MoRC_Pck::Utils::countDownTimer#2)/ */
  countDownTimer_init_MoRC_Pck_Utils(&outC->Context_countDownTimer_2);
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_state_nxt = SSM_st_stop_SM1;
}
#endif /* KCG_USER_DEFINED_INIT */


void FlashingOperator_reset_DMI_Control_Pkg_Utils(
  outC_FlashingOperator_DMI_Control_Pkg_Utils *outC)
{
  outC->init = kcg_true;
  /* SM1:start:_L6=(MoRC_Pck::Utils::countDownTimer#2)/ */
  countDownTimer_reset_MoRC_Pck_Utils(&outC->Context_countDownTimer_2);
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_state_nxt = SSM_st_stop_SM1;
}


void kcg_save_SV_FlashingOperator_DMI_Control_Pkg_Utils(
  SV_FlashingOperator_DMI_Control_Pkg_Utils *SV,
  outC_FlashingOperator_DMI_Control_Pkg_Utils *outC)
{
  kcg_save_SV_countDownTimer_MoRC_Pck_Utils(
    &SV->Context_countDownTimer_2,
    &outC->Context_countDownTimer_2);
  SV->Context_SM1_reset_nxt = outC->SM1_reset_nxt;
  SV->Context_SM1_reset_act = outC->SM1_reset_act;
  SV->Context_SM1_state_nxt = outC->SM1_state_nxt;
  SV->Context_counter = outC->counter_start_SM1;
  SV->Context__L10 = outC->_L10_start_SM1;
  SV->Context_init = outC->init;
}

void kcg_load_SV_FlashingOperator_DMI_Control_Pkg_Utils(
  outC_FlashingOperator_DMI_Control_Pkg_Utils *outC,
  SV_FlashingOperator_DMI_Control_Pkg_Utils *SV)
{
  kcg_load_SV_countDownTimer_MoRC_Pck_Utils(
    &outC->Context_countDownTimer_2,
    &SV->Context_countDownTimer_2);
  outC->SM1_reset_nxt = SV->Context_SM1_reset_nxt;
  outC->SM1_reset_act = SV->Context_SM1_reset_act;
  outC->SM1_state_nxt = SV->Context_SM1_state_nxt;
  outC->counter_start_SM1 = SV->Context_counter;
  outC->_L10_start_SM1 = SV->Context__L10;
  outC->init = SV->Context_init;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** FlashingOperator_DMI_Control_Pkg_Utils.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

