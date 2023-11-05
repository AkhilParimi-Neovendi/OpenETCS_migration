/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "changeoverSwitch_Handover_Pkg_handoverUtils_Pkg.h"

/* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch/ */
void changeoverSwitch_Handover_Pkg_handoverUtils_Pkg(
  /* handoverInprogress/ */
  kcg_bool handoverInprogress,
  /* sessionManagementAbility/ */
  abilityToHandleCommunicationSessions_Handover_Pkg sessionManagementAbility,
  outC_changeoverSwitch_Handover_Pkg_handoverUtils_Pkg *outC)
{
  /* handingOverMobile_is_mobile_1/ */
  static kcg_bool handingOverMobile_is_mobile_1_partial;
  /* SM1: */
  static _122_SSM_ST_SM1 SM1_state_nxt_partial;
  /* SM1: */
  static kcg_bool SM1_reset_nxt_partial;
  /* SM1: */
  static _123_SSM_TR_SM1 SM1_fired_partial;
  /* handingOverMobile_is_mobile_1/ */
  static kcg_bool _1_handingOverMobile_is_mobile_1_partial;
  /* SM1: */
  static _122_SSM_ST_SM1 _2_SM1_state_nxt_partial;
  /* SM1: */
  static kcg_bool _3_SM1_reset_nxt_partial;
  /* SM1: */
  static _123_SSM_TR_SM1 _4_SM1_fired_partial;
  /* SM1: */
  static _122_SSM_ST_SM1 SM1_state_act_partial;
  /* SM1: */
  static kcg_bool SM1_reset_act_partial;
  /* SM1: */
  static _123_SSM_TR_SM1 SM1_fired_strong_partial;
  /* SM1:mobile_1:<1> */
  static kcg_bool tr_1_guard_mobile_1_SM1;
  /* SM1: */
  static _122_SSM_ST_SM1 _5_SM1_state_act_partial;
  /* SM1: */
  static kcg_bool _6_SM1_reset_act_partial;
  /* SM1: */
  static _123_SSM_TR_SM1 _7_SM1_fired_strong_partial;
  /* SM1:mobile_2:<1> */
  static kcg_bool tr_1_guard_mobile_2_SM1;
  /* SM1: */
  static kcg_bool SM1_reset_sel;
  /* SM1: */
  static kcg_bool SM1_reset_prv;

  outC->_L4 = isAbleToManageTwoSessions_Handover_Pkg;
  outC->_L6 = sessionManagementAbility;
  outC->_L7 = outC->_L6 == outC->_L4;
  outC->_L1 = handoverInprogress;
  /* _L2=(digital::FallingEdge#1)/ */
  FallingEdge_digital(outC->_L1, &outC->Context_FallingEdge_1);
  outC->_L2 = outC->Context_FallingEdge_1.FE_Output;
  outC->_L5 = outC->_L7 & outC->_L2;
  outC->toogle = outC->_L5;
  outC->SM1_state_sel = outC->SM1_state_nxt;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_mobile_2_SM1 :
      tr_1_guard_mobile_2_SM1 = outC->toogle;
      if (tr_1_guard_mobile_2_SM1) {
        _5_SM1_state_act_partial = SSM_st_mobile_1_SM1;
      }
      else {
        _5_SM1_state_act_partial = SSM_st_mobile_2_SM1;
      }
      outC->SM1_state_act = _5_SM1_state_act_partial;
      if (tr_1_guard_mobile_2_SM1) {
        _7_SM1_fired_strong_partial = SSM_TR_mobile_2_mobile_1_1_mobile_2_SM1;
      }
      else {
        _7_SM1_fired_strong_partial = _160_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _7_SM1_fired_strong_partial;
      break;
    case SSM_st_mobile_1_SM1 :
      tr_1_guard_mobile_1_SM1 = outC->toogle;
      if (tr_1_guard_mobile_1_SM1) {
        SM1_state_act_partial = SSM_st_mobile_2_SM1;
      }
      else {
        SM1_state_act_partial = SSM_st_mobile_1_SM1;
      }
      outC->SM1_state_act = SM1_state_act_partial;
      if (tr_1_guard_mobile_1_SM1) {
        SM1_fired_strong_partial = SSM_TR_mobile_1_mobile_2_1_mobile_1_SM1;
      }
      else {
        SM1_fired_strong_partial = _160_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = SM1_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_mobile_2_SM1 :
      _4_SM1_fired_partial = outC->SM1_fired_strong;
      _3_SM1_reset_nxt_partial = kcg_false;
      _2_SM1_state_nxt_partial = SSM_st_mobile_2_SM1;
      outC->_L1_mobile_2_SM1 = kcg_false;
      _1_handingOverMobile_is_mobile_1_partial = outC->_L1_mobile_2_SM1;
      outC->handingOverMobile_is_mobile_1 = _1_handingOverMobile_is_mobile_1_partial;
      outC->SM1_state_nxt = _2_SM1_state_nxt_partial;
      break;
    case SSM_st_mobile_1_SM1 :
      SM1_fired_partial = outC->SM1_fired_strong;
      SM1_reset_nxt_partial = kcg_false;
      SM1_state_nxt_partial = SSM_st_mobile_1_SM1;
      outC->_L1_mobile_1_SM1 = kcg_true;
      handingOverMobile_is_mobile_1_partial = outC->_L1_mobile_1_SM1;
      outC->handingOverMobile_is_mobile_1 = handingOverMobile_is_mobile_1_partial;
      outC->SM1_state_nxt = SM1_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_sel = outC->SM1_reset_nxt;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_mobile_2_SM1 :
      outC->SM1_reset_nxt = _3_SM1_reset_nxt_partial;
      outC->SM1_fired = _4_SM1_fired_partial;
      break;
    case SSM_st_mobile_1_SM1 :
      outC->SM1_reset_nxt = SM1_reset_nxt_partial;
      outC->SM1_fired = SM1_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_mobile_2_SM1 :
      _6_SM1_reset_act_partial = tr_1_guard_mobile_2_SM1;
      break;
    case SSM_st_mobile_1_SM1 :
      SM1_reset_act_partial = tr_1_guard_mobile_1_SM1;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_prv = outC->SM1_reset_act;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_mobile_2_SM1 :
      outC->SM1_reset_act = _6_SM1_reset_act_partial;
      break;
    case SSM_st_mobile_1_SM1 :
      outC->SM1_reset_act = SM1_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void changeoverSwitch_init_Handover_Pkg_handoverUtils_Pkg(
  outC_changeoverSwitch_Handover_Pkg_handoverUtils_Pkg *outC)
{
  outC->_L7 = kcg_true;
  outC->_L6 = isAbleToManageOneSession_Handover_Pkg;
  outC->_L5 = kcg_true;
  outC->_L4 = isAbleToManageOneSession_Handover_Pkg;
  outC->_L2 = kcg_true;
  outC->_L1 = kcg_true;
  outC->toogle = kcg_true;
  outC->SM1_fired = _160_SSM_TR_no_trans_SM1;
  outC->SM1_fired_strong = _160_SSM_TR_no_trans_SM1;
  outC->SM1_state_act = SSM_st_mobile_1_SM1;
  outC->SM1_state_sel = SSM_st_mobile_1_SM1;
  outC->_L1_mobile_2_SM1 = kcg_true;
  outC->_L1_mobile_1_SM1 = kcg_true;
  outC->handingOverMobile_is_mobile_1 = kcg_true;
  /* _L2=(digital::FallingEdge#1)/ */
  FallingEdge_init_digital(&outC->Context_FallingEdge_1);
  outC->SM1_reset_act = kcg_false;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_state_nxt = SSM_st_mobile_1_SM1;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void changeoverSwitch_reset_Handover_Pkg_handoverUtils_Pkg(
  outC_changeoverSwitch_Handover_Pkg_handoverUtils_Pkg *outC)
{
  /* _L2=(digital::FallingEdge#1)/ */
  FallingEdge_reset_digital(&outC->Context_FallingEdge_1);
  outC->SM1_reset_act = kcg_false;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_state_nxt = SSM_st_mobile_1_SM1;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_changeoverSwitch_Handover_Pkg_handoverUtils_Pkg(
  SV_changeoverSwitch_Handover_Pkg_handoverUtils_Pkg *SV,
  outC_changeoverSwitch_Handover_Pkg_handoverUtils_Pkg *outC)
{
  kcg_save_SV_FallingEdge_digital(
    &SV->Context_FallingEdge_1,
    &outC->Context_FallingEdge_1);
  SV->Context_SM1_reset_nxt = outC->SM1_reset_nxt;
  SV->Context_SM1_reset_act = outC->SM1_reset_act;
  SV->Context_SM1_state_nxt = outC->SM1_state_nxt;
}

void kcg_load_SV_changeoverSwitch_Handover_Pkg_handoverUtils_Pkg(
  outC_changeoverSwitch_Handover_Pkg_handoverUtils_Pkg *outC,
  SV_changeoverSwitch_Handover_Pkg_handoverUtils_Pkg *SV)
{
  kcg_load_SV_FallingEdge_digital(
    &outC->Context_FallingEdge_1,
    &SV->Context_FallingEdge_1);
  outC->SM1_reset_nxt = SV->Context_SM1_reset_nxt;
  outC->SM1_reset_act = SV->Context_SM1_reset_act;
  outC->SM1_state_nxt = SV->Context_SM1_state_nxt;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** changeoverSwitch_Handover_Pkg_handoverUtils_Pkg.c
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

