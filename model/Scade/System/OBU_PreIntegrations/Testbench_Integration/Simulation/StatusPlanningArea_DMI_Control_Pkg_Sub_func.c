/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "StatusPlanningArea_DMI_Control_Pkg_Sub_func.h"

/* DMI_Control_Pkg::Sub_func::StatusPlanningArea/ */
void StatusPlanningArea_DMI_Control_Pkg_Sub_func(
  /* ModeIndex/ */
  kcg_int32 ModeIndex,
  /* Hide/ */
  kcg_bool Hide,
  /* show/ */
  kcg_bool show,
  /* MousePressed/ */
  kcg_bool MousePressed,
  outC_StatusPlanningArea_DMI_Control_Pkg_Sub_func *outC)
{
  /* Visibility/ */
  static kcg_bool Visibility_partial;
  /* PlanningAreaStatus: */
  static SSM_ST_PlanningAreaStatus PlanningAreaStatus_state_nxt_partial;
  /* PlanningAreaStatus: */
  static kcg_bool PlanningAreaStatus_reset_nxt_partial;
  /* PlanningAreaStatus: */
  static SSM_TR_PlanningAreaStatus PlanningAreaStatus_fired_partial;
  /* Visibility/ */
  static kcg_bool _1_Visibility_partial;
  /* PlanningAreaStatus: */
  static SSM_ST_PlanningAreaStatus _2_PlanningAreaStatus_state_nxt_partial;
  /* PlanningAreaStatus: */
  static kcg_bool _3_PlanningAreaStatus_reset_nxt_partial;
  /* PlanningAreaStatus: */
  static SSM_TR_PlanningAreaStatus _4_PlanningAreaStatus_fired_partial;
  /* PlanningAreaStatus: */
  static SSM_ST_PlanningAreaStatus PlanningAreaStatus_state_act_partial;
  /* PlanningAreaStatus: */
  static kcg_bool PlanningAreaStatus_reset_act_partial;
  /* PlanningAreaStatus: */
  static SSM_TR_PlanningAreaStatus PlanningAreaStatus_fired_strong_partial;
  /* PlanningAreaStatus:NotVisible:<1> */
  static kcg_bool tr_1_guard_NotVisible_PlanningAreaStatus;
  /* PlanningAreaStatus: */
  static SSM_ST_PlanningAreaStatus _5_PlanningAreaStatus_state_act_partial;
  /* PlanningAreaStatus: */
  static kcg_bool _6_PlanningAreaStatus_reset_act_partial;
  /* PlanningAreaStatus: */
  static SSM_TR_PlanningAreaStatus _7_PlanningAreaStatus_fired_strong_partial;
  /* PlanningAreaStatus:Visible:<1> */
  static kcg_bool tr_1_guard_Visible_PlanningAreaStatus;
  static kcg_bool noname;
  static kcg_bool _8_noname;
  static kcg_bool _9_noname;
  /* PlanningAreaStatus: */
  static kcg_bool PlanningAreaStatus_reset_sel;
  /* PlanningAreaStatus: */
  static kcg_bool PlanningAreaStatus_reset_prv;

  outC->_L6 = MousePressed;
  _9_noname = outC->_L6;
  outC->_L13 = kcg_true;
  outC->_L3 = show;
  _8_noname = outC->_L3;
  outC->_L12 = kcg_false;
  outC->_L2 = Hide;
  noname = outC->_L2;
  outC->_L5 = cMODE_Full_Supervision_DMI_Control_Pkg;
  outC->_L1 = ModeIndex;
  outC->_L4 = outC->_L1 == outC->_L5;
  outC->_L11 = !outC->_L4;
  outC->_L9 = outC->_L12 & outC->_L13;
  outC->_L10 = outC->_L9 | outC->_L11;
  outC->HidingState = outC->_L10;
  outC->_L7 = outC->_L4 & outC->_L13 & outC->_L13;
  outC->ShowingState = outC->_L7;
  outC->PlanningAreaStatus_state_sel = outC->PlanningAreaStatus_state_nxt;
  /* PlanningAreaStatus: */
  switch (outC->PlanningAreaStatus_state_sel) {
    case SSM_st_Visible_PlanningAreaStatus :
      tr_1_guard_Visible_PlanningAreaStatus = outC->HidingState;
      if (tr_1_guard_Visible_PlanningAreaStatus) {
        _5_PlanningAreaStatus_state_act_partial = SSM_st_NotVisible_PlanningAreaStatus;
      }
      else {
        _5_PlanningAreaStatus_state_act_partial = SSM_st_Visible_PlanningAreaStatus;
      }
      outC->PlanningAreaStatus_state_act = _5_PlanningAreaStatus_state_act_partial;
      if (tr_1_guard_Visible_PlanningAreaStatus) {
        _7_PlanningAreaStatus_fired_strong_partial =
          SSM_TR_Visible_NotVisible_1_Visible_PlanningAreaStatus;
      }
      else {
        _7_PlanningAreaStatus_fired_strong_partial = SSM_TR_no_trans_PlanningAreaStatus;
      }
      outC->PlanningAreaStatus_fired_strong =
        _7_PlanningAreaStatus_fired_strong_partial;
      break;
    case SSM_st_NotVisible_PlanningAreaStatus :
      tr_1_guard_NotVisible_PlanningAreaStatus = outC->ShowingState;
      if (tr_1_guard_NotVisible_PlanningAreaStatus) {
        PlanningAreaStatus_state_act_partial = SSM_st_Visible_PlanningAreaStatus;
      }
      else {
        PlanningAreaStatus_state_act_partial = SSM_st_NotVisible_PlanningAreaStatus;
      }
      outC->PlanningAreaStatus_state_act = PlanningAreaStatus_state_act_partial;
      if (tr_1_guard_NotVisible_PlanningAreaStatus) {
        PlanningAreaStatus_fired_strong_partial =
          SSM_TR_NotVisible_Visible_1_NotVisible_PlanningAreaStatus;
      }
      else {
        PlanningAreaStatus_fired_strong_partial = SSM_TR_no_trans_PlanningAreaStatus;
      }
      outC->PlanningAreaStatus_fired_strong = PlanningAreaStatus_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* PlanningAreaStatus: */
  switch (outC->PlanningAreaStatus_state_act) {
    case SSM_st_Visible_PlanningAreaStatus :
      _4_PlanningAreaStatus_fired_partial = outC->PlanningAreaStatus_fired_strong;
      _3_PlanningAreaStatus_reset_nxt_partial = kcg_false;
      _2_PlanningAreaStatus_state_nxt_partial = SSM_st_Visible_PlanningAreaStatus;
      outC->_L2_Visible_PlanningAreaStatus = kcg_true;
      _1_Visibility_partial = outC->_L2_Visible_PlanningAreaStatus;
      outC->Visibility = _1_Visibility_partial;
      outC->PlanningAreaStatus_state_nxt = _2_PlanningAreaStatus_state_nxt_partial;
      break;
    case SSM_st_NotVisible_PlanningAreaStatus :
      PlanningAreaStatus_fired_partial = outC->PlanningAreaStatus_fired_strong;
      PlanningAreaStatus_reset_nxt_partial = kcg_false;
      PlanningAreaStatus_state_nxt_partial = SSM_st_NotVisible_PlanningAreaStatus;
      outC->_L2_NotVisible_PlanningAreaStatus = kcg_false;
      Visibility_partial = outC->_L2_NotVisible_PlanningAreaStatus;
      outC->Visibility = Visibility_partial;
      outC->PlanningAreaStatus_state_nxt = PlanningAreaStatus_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  PlanningAreaStatus_reset_sel = outC->PlanningAreaStatus_reset_nxt;
  /* PlanningAreaStatus: */
  switch (outC->PlanningAreaStatus_state_act) {
    case SSM_st_Visible_PlanningAreaStatus :
      outC->PlanningAreaStatus_reset_nxt = _3_PlanningAreaStatus_reset_nxt_partial;
      outC->PlanningAreaStatus_fired = _4_PlanningAreaStatus_fired_partial;
      break;
    case SSM_st_NotVisible_PlanningAreaStatus :
      outC->PlanningAreaStatus_reset_nxt = PlanningAreaStatus_reset_nxt_partial;
      outC->PlanningAreaStatus_fired = PlanningAreaStatus_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->PlanningAreaStatus_state_sel) {
    case SSM_st_Visible_PlanningAreaStatus :
      _6_PlanningAreaStatus_reset_act_partial = tr_1_guard_Visible_PlanningAreaStatus;
      break;
    case SSM_st_NotVisible_PlanningAreaStatus :
      PlanningAreaStatus_reset_act_partial = tr_1_guard_NotVisible_PlanningAreaStatus;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  PlanningAreaStatus_reset_prv = outC->PlanningAreaStatus_reset_act;
  /* PlanningAreaStatus: */
  switch (outC->PlanningAreaStatus_state_sel) {
    case SSM_st_Visible_PlanningAreaStatus :
      outC->PlanningAreaStatus_reset_act = _6_PlanningAreaStatus_reset_act_partial;
      break;
    case SSM_st_NotVisible_PlanningAreaStatus :
      outC->PlanningAreaStatus_reset_act = PlanningAreaStatus_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void StatusPlanningArea_init_DMI_Control_Pkg_Sub_func(
  outC_StatusPlanningArea_DMI_Control_Pkg_Sub_func *outC)
{
  outC->_L13 = kcg_true;
  outC->_L12 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_lit_int32(0);
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L2 = kcg_true;
  outC->_L1 = kcg_lit_int32(0);
  outC->HidingState = kcg_true;
  outC->ShowingState = kcg_true;
  outC->PlanningAreaStatus_fired = SSM_TR_no_trans_PlanningAreaStatus;
  outC->PlanningAreaStatus_fired_strong = SSM_TR_no_trans_PlanningAreaStatus;
  outC->PlanningAreaStatus_state_act = SSM_st_NotVisible_PlanningAreaStatus;
  outC->PlanningAreaStatus_state_sel = SSM_st_NotVisible_PlanningAreaStatus;
  outC->_L2_Visible_PlanningAreaStatus = kcg_true;
  outC->_L2_NotVisible_PlanningAreaStatus = kcg_true;
  outC->Visibility = kcg_true;
  outC->PlanningAreaStatus_reset_act = kcg_false;
  outC->PlanningAreaStatus_reset_nxt = kcg_false;
  outC->PlanningAreaStatus_state_nxt = SSM_st_NotVisible_PlanningAreaStatus;
}
#endif /* KCG_USER_DEFINED_INIT */


void StatusPlanningArea_reset_DMI_Control_Pkg_Sub_func(
  outC_StatusPlanningArea_DMI_Control_Pkg_Sub_func *outC)
{
  outC->PlanningAreaStatus_reset_act = kcg_false;
  outC->PlanningAreaStatus_reset_nxt = kcg_false;
  outC->PlanningAreaStatus_state_nxt = SSM_st_NotVisible_PlanningAreaStatus;
}


void kcg_save_SV_StatusPlanningArea_DMI_Control_Pkg_Sub_func(
  SV_StatusPlanningArea_DMI_Control_Pkg_Sub_func *SV,
  outC_StatusPlanningArea_DMI_Control_Pkg_Sub_func *outC)
{
  SV->Context_PlanningAreaStatus_reset_nxt = outC->PlanningAreaStatus_reset_nxt;
  SV->Context_PlanningAreaStatus_reset_act = outC->PlanningAreaStatus_reset_act;
  SV->Context_PlanningAreaStatus_state_nxt = outC->PlanningAreaStatus_state_nxt;
}

void kcg_load_SV_StatusPlanningArea_DMI_Control_Pkg_Sub_func(
  outC_StatusPlanningArea_DMI_Control_Pkg_Sub_func *outC,
  SV_StatusPlanningArea_DMI_Control_Pkg_Sub_func *SV)
{
  outC->PlanningAreaStatus_reset_nxt = SV->Context_PlanningAreaStatus_reset_nxt;
  outC->PlanningAreaStatus_reset_act = SV->Context_PlanningAreaStatus_reset_act;
  outC->PlanningAreaStatus_state_nxt = SV->Context_PlanningAreaStatus_state_nxt;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** StatusPlanningArea_DMI_Control_Pkg_Sub_func.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

