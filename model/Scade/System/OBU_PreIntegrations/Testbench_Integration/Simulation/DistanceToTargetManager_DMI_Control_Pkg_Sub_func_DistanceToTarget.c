/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget.h"

/* DMI_Control_Pkg::Sub_func::DistanceToTarget::DistanceToTargetManager/ */
void DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget(
  /* DMI_dynamic/ */
  DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg *DMI_dynamic,
  outC_DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget *outC)
{
  static kcg_bool tmp;
  static kcg_bool tmp1;
  static kcg_bool op_call;
  static kcg_bool _2_op_call;
  /* DistanceToTarget_toDisplay/ */
  static kcg_float32 DistanceToTarget_toDisplay_partial;
  /* DistanceToTargetVisibilityDigital_toDisplay/ */
  static kcg_bool DistanceToTargetVisibilityDigital_toDisplay_partial;
  /* DistanceToTarget_toDisplay/ */
  static kcg_float32 _3_DistanceToTarget_toDisplay_partial;
  /* DistanceToTargetVisibilityDigital_toDisplay/ */
  static kcg_bool _4_DistanceToTargetVisibilityDigital_toDisplay_partial;
  /* InterpolatedDistanceToTarget_toDisplay/ */
  static kcg_float32 InterpolatedDistanceToTarget_toDisplay_partial;
  /* DistanceToTargetBarVisibility_toDisplay/ */
  static kcg_bool DistanceToTargetBarVisibility_toDisplay_partial;
  /* InterpolatedDistanceToTarget_toDisplay/ */
  static kcg_float32 _5_InterpolatedDistanceToTarget_toDisplay_partial;
  /* DistanceToTargetBarVisibility_toDisplay/ */
  static kcg_bool _6_DistanceToTargetBarVisibility_toDisplay_partial;
  /* DistanceToTargetVisibilityDigital_toDisplay/ */
  static kcg_bool last_DistanceToTargetVisibilityDigital_toDisplay;
  /* DistanceToTargetBarVisibility_toDisplay/ */
  static kcg_bool last_DistanceToTargetBarVisibility_toDisplay;
  /* InterpolatedDistanceToTarget_toDisplay/ */
  static kcg_float32 last_InterpolatedDistanceToTarget_toDisplay;
  /* DistanceToTarget_toDisplay/ */
  static kcg_float32 last_DistanceToTarget_toDisplay;

  kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg(&outC->_L7, DMI_dynamic);
  outC->_L8 = outC->_L7.valid;
  outC->every1 = outC->_L8;
  if (outC->every1) {
    /* _L6=(DMI_Control_Pkg::Sub_func::DistanceToTarget::ConditionDistanceToTargetBar#1)/ */
    ConditionDistanceToTargetBar_DMI_Control_Pkg_Sub_func_DistanceToTarget(
      &outC->_L7,
      &outC->Context_ConditionDistanceToTargetBar_1);
    op_call = outC->Context_ConditionDistanceToTargetBar_1.Condition;
  }
  kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg(&outC->_L20, DMI_dynamic);
  outC->_L21 = outC->_L20.valid;
  outC->every = outC->_L21;
  if (outC->every) {
    /* _L19=(DMI_Control_Pkg::Sub_func::DistanceToTarget::ConditionDistanceToTargetDigital#2)/ */
    ConditionDistanceToTargetDigital_DMI_Control_Pkg_Sub_func_DistanceToTarget(
      &outC->_L20,
      &outC->Context_ConditionDistanceToTargetDigital_2);
    _2_op_call = outC->Context_ConditionDistanceToTargetDigital_2.Condition;
  }
  last_DistanceToTargetVisibilityDigital_toDisplay =
    outC->DistanceToTargetVisibilityDigital_toDisplay;
  last_DistanceToTargetBarVisibility_toDisplay =
    outC->DistanceToTargetBarVisibility_toDisplay;
  last_InterpolatedDistanceToTarget_toDisplay =
    outC->InterpolatedDistanceToTarget_toDisplay;
  last_DistanceToTarget_toDisplay = outC->DistanceToTarget_toDisplay;
  outC->_L23 = kcg_lit_float32(100.0);
  kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg(&outC->_L9, DMI_dynamic);
  outC->_L10 = outC->_L9.location_brake_target;
  outC->_L11 = /* _L11= */(kcg_float32) outC->_L10;
  outC->_L22 = outC->_L11 / outC->_L23;
  if (outC->every) {
    outC->_L19 = _2_op_call;
  }
  else {
    /* _L19= */
    if (outC->init) {
      tmp = kcg_false;
    }
    else {
      tmp = outC->_L19;
    }
    outC->_L19 = tmp;
  }
  outC->ConditionDistanceToTarget = outC->_L19;
  outC->DistanceToTargetA2IfBlock_clock = outC->ConditionDistanceToTarget;
  if (outC->DistanceToTargetA2IfBlock_clock) {
    outC->_L2_then_DistanceToTargetA2IfBlock = kcg_true;
    DistanceToTargetVisibilityDigital_toDisplay_partial =
      outC->_L2_then_DistanceToTargetA2IfBlock;
  }
  else {
    _3_DistanceToTarget_toDisplay_partial = last_DistanceToTarget_toDisplay;
    outC->_L1_else_DistanceToTargetA2IfBlock = kcg_false;
    _4_DistanceToTargetVisibilityDigital_toDisplay_partial =
      outC->_L1_else_DistanceToTargetA2IfBlock;
  }
  outC->localDistanceToTarget = outC->_L22;
  /* DistanceToTargetA2IfBlock: */
  if (outC->DistanceToTargetA2IfBlock_clock) {
    outC->_L1_then_DistanceToTargetA2IfBlock = outC->localDistanceToTarget;
    DistanceToTarget_toDisplay_partial = outC->_L1_then_DistanceToTargetA2IfBlock;
    outC->DistanceToTarget_toDisplay = DistanceToTarget_toDisplay_partial;
    outC->DistanceToTargetVisibilityDigital_toDisplay =
      DistanceToTargetVisibilityDigital_toDisplay_partial;
  }
  else {
    outC->DistanceToTarget_toDisplay = _3_DistanceToTarget_toDisplay_partial;
    outC->DistanceToTargetVisibilityDigital_toDisplay =
      _4_DistanceToTargetVisibilityDigital_toDisplay_partial;
  }
  if (outC->every1) {
    outC->_L6 = op_call;
  }
  else {
    /* _L6= */
    if (outC->init) {
      tmp1 = kcg_false;
    }
    else {
      tmp1 = outC->_L6;
    }
    outC->_L6 = tmp1;
  }
  outC->ConditionTargetBar = outC->_L6;
  outC->DistanceToTargetBarIfBlock_clock = outC->ConditionTargetBar;
  /* DistanceToTargetBarIfBlock: */
  if (outC->DistanceToTargetBarIfBlock_clock) {
    outC->_L15_then_DistanceToTargetBarIfBlock = outC->localDistanceToTarget;
    outC->_L6_then_DistanceToTargetBarIfBlock = kcg_true;
    DistanceToTargetBarVisibility_toDisplay_partial =
      outC->_L6_then_DistanceToTargetBarIfBlock;
    /* DistanceToTargetBarIfBlock:then:_L2=(DMI_Control_Pkg::Sub_func::DistanceToTarget::CalculateDistanceToTarget#1)/ */
    CalculateDistanceToTarget_DMI_Control_Pkg_Sub_func_DistanceToTarget(
      outC->_L15_then_DistanceToTargetBarIfBlock,
      &outC->Context_CalculateDistanceToTarget_1);
    outC->_L2_then_DistanceToTargetBarIfBlock =
      outC->Context_CalculateDistanceToTarget_1.InterpolatedDistanceToTarget;
    InterpolatedDistanceToTarget_toDisplay_partial =
      outC->_L2_then_DistanceToTargetBarIfBlock;
    outC->InterpolatedDistanceToTarget_toDisplay =
      InterpolatedDistanceToTarget_toDisplay_partial;
    outC->DistanceToTargetBarVisibility_toDisplay =
      DistanceToTargetBarVisibility_toDisplay_partial;
  }
  else {
    _5_InterpolatedDistanceToTarget_toDisplay_partial =
      last_InterpolatedDistanceToTarget_toDisplay;
    outC->_L5_else_DistanceToTargetBarIfBlock = kcg_false;
    _6_DistanceToTargetBarVisibility_toDisplay_partial =
      outC->_L5_else_DistanceToTargetBarIfBlock;
    outC->InterpolatedDistanceToTarget_toDisplay =
      _5_InterpolatedDistanceToTarget_toDisplay_partial;
    outC->DistanceToTargetBarVisibility_toDisplay =
      _6_DistanceToTargetBarVisibility_toDisplay_partial;
  }
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void DistanceToTargetManager_init_DMI_Control_Pkg_Sub_func_DistanceToTarget(
  outC_DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget *outC)
{
  outC->_L23 = kcg_lit_float32(0.0);
  outC->_L22 = kcg_lit_float32(0.0);
  outC->_L20.valid = kcg_true;
  outC->_L20.system_clock = kcg_lit_int32(0);
  outC->_L20.v_train = kcg_lit_int32(0);
  outC->_L20.location_front_train = kcg_lit_int32(0);
  outC->_L20.location_brake_target = kcg_lit_int32(0);
  outC->_L20.v_target = kcg_lit_int32(0);
  outC->_L20.v_permitted = kcg_lit_int32(0);
  outC->_L20.v_release = kcg_lit_int32(0);
  outC->_L20.location_brake_curve_starting_point = kcg_lit_int32(0);
  outC->_L20.v_intervention = kcg_lit_int32(0);
  outC->_L20.mode = M_MODE_Full_Supervision;
  outC->_L20.level.level = M_LEVEL_Level_0;
  outC->_L20.level.nid_stm = kcg_lit_int32(0);
  outC->_L20.nid_c = kcg_lit_int32(0);
  outC->_L20.nid_c_valid = kcg_true;
  outC->_L20.m_warning = supDis_normal_DMI_Types_Pkg;
  outC->_L20.sup_status = CSM_DMI_Types_Pkg;
  outC->_L20.location_LOA = kcg_lit_int32(0);
  outC->_L20.v_LOA = kcg_lit_int32(0);
  outC->_L20.location_KP_Balise_Track = kcg_lit_int32(0);
  outC->_L20.distance_KP_Balise = kcg_lit_int32(0);
  outC->_L20.distance_to_TSA = kcg_lit_int32(0);
  outC->_L20.radioConnectionStatus = conn_unknown_API_RadioCommunication_Pkg;
  outC->_L20.distanceIndicationPoint = kcg_lit_int32(0);
  outC->_L21 = kcg_true;
  outC->_L11 = kcg_lit_float32(0.0);
  outC->_L10 = kcg_lit_int32(0);
  outC->_L9.valid = kcg_true;
  outC->_L9.system_clock = kcg_lit_int32(0);
  outC->_L9.v_train = kcg_lit_int32(0);
  outC->_L9.location_front_train = kcg_lit_int32(0);
  outC->_L9.location_brake_target = kcg_lit_int32(0);
  outC->_L9.v_target = kcg_lit_int32(0);
  outC->_L9.v_permitted = kcg_lit_int32(0);
  outC->_L9.v_release = kcg_lit_int32(0);
  outC->_L9.location_brake_curve_starting_point = kcg_lit_int32(0);
  outC->_L9.v_intervention = kcg_lit_int32(0);
  outC->_L9.mode = M_MODE_Full_Supervision;
  outC->_L9.level.level = M_LEVEL_Level_0;
  outC->_L9.level.nid_stm = kcg_lit_int32(0);
  outC->_L9.nid_c = kcg_lit_int32(0);
  outC->_L9.nid_c_valid = kcg_true;
  outC->_L9.m_warning = supDis_normal_DMI_Types_Pkg;
  outC->_L9.sup_status = CSM_DMI_Types_Pkg;
  outC->_L9.location_LOA = kcg_lit_int32(0);
  outC->_L9.v_LOA = kcg_lit_int32(0);
  outC->_L9.location_KP_Balise_Track = kcg_lit_int32(0);
  outC->_L9.distance_KP_Balise = kcg_lit_int32(0);
  outC->_L9.distance_to_TSA = kcg_lit_int32(0);
  outC->_L9.radioConnectionStatus = conn_unknown_API_RadioCommunication_Pkg;
  outC->_L9.distanceIndicationPoint = kcg_lit_int32(0);
  outC->_L8 = kcg_true;
  outC->_L7.valid = kcg_true;
  outC->_L7.system_clock = kcg_lit_int32(0);
  outC->_L7.v_train = kcg_lit_int32(0);
  outC->_L7.location_front_train = kcg_lit_int32(0);
  outC->_L7.location_brake_target = kcg_lit_int32(0);
  outC->_L7.v_target = kcg_lit_int32(0);
  outC->_L7.v_permitted = kcg_lit_int32(0);
  outC->_L7.v_release = kcg_lit_int32(0);
  outC->_L7.location_brake_curve_starting_point = kcg_lit_int32(0);
  outC->_L7.v_intervention = kcg_lit_int32(0);
  outC->_L7.mode = M_MODE_Full_Supervision;
  outC->_L7.level.level = M_LEVEL_Level_0;
  outC->_L7.level.nid_stm = kcg_lit_int32(0);
  outC->_L7.nid_c = kcg_lit_int32(0);
  outC->_L7.nid_c_valid = kcg_true;
  outC->_L7.m_warning = supDis_normal_DMI_Types_Pkg;
  outC->_L7.sup_status = CSM_DMI_Types_Pkg;
  outC->_L7.location_LOA = kcg_lit_int32(0);
  outC->_L7.v_LOA = kcg_lit_int32(0);
  outC->_L7.location_KP_Balise_Track = kcg_lit_int32(0);
  outC->_L7.distance_KP_Balise = kcg_lit_int32(0);
  outC->_L7.distance_to_TSA = kcg_lit_int32(0);
  outC->_L7.radioConnectionStatus = conn_unknown_API_RadioCommunication_Pkg;
  outC->_L7.distanceIndicationPoint = kcg_lit_int32(0);
  outC->ConditionDistanceToTarget = kcg_true;
  outC->localDistanceToTarget = kcg_lit_float32(0.0);
  outC->ConditionTargetBar = kcg_true;
  outC->DistanceToTargetBarIfBlock_clock = kcg_true;
  outC->DistanceToTargetA2IfBlock_clock = kcg_true;
  outC->every1 = kcg_true;
  outC->every = kcg_true;
  outC->_L5_else_DistanceToTargetBarIfBlock = kcg_true;
  outC->_L2_then_DistanceToTargetBarIfBlock = kcg_lit_float32(0.0);
  outC->_L6_then_DistanceToTargetBarIfBlock = kcg_true;
  outC->_L15_then_DistanceToTargetBarIfBlock = kcg_lit_float32(0.0);
  outC->_L1_else_DistanceToTargetA2IfBlock = kcg_true;
  outC->_L1_then_DistanceToTargetA2IfBlock = kcg_lit_float32(0.0);
  outC->_L2_then_DistanceToTargetA2IfBlock = kcg_true;
  outC->_L19 = kcg_true;
  outC->_L6 = kcg_true;
  outC->init = kcg_true;
  /* DistanceToTargetBarIfBlock:then:_L2=(DMI_Control_Pkg::Sub_func::DistanceToTarget::CalculateDistanceToTarget#1)/ */
  CalculateDistanceToTarget_init_DMI_Control_Pkg_Sub_func_DistanceToTarget(
    &outC->Context_CalculateDistanceToTarget_1);
  /* _L19=(DMI_Control_Pkg::Sub_func::DistanceToTarget::ConditionDistanceToTargetDigital#2)/ */
  ConditionDistanceToTargetDigital_init_DMI_Control_Pkg_Sub_func_DistanceToTarget(
    &outC->Context_ConditionDistanceToTargetDigital_2);
  /* _L6=(DMI_Control_Pkg::Sub_func::DistanceToTarget::ConditionDistanceToTargetBar#1)/ */
  ConditionDistanceToTargetBar_init_DMI_Control_Pkg_Sub_func_DistanceToTarget(
    &outC->Context_ConditionDistanceToTargetBar_1);
  outC->DistanceToTarget_toDisplay = kcg_lit_float32(0.0);
  outC->InterpolatedDistanceToTarget_toDisplay = kcg_lit_float32(0.0);
  outC->DistanceToTargetBarVisibility_toDisplay = kcg_false;
  outC->DistanceToTargetVisibilityDigital_toDisplay = kcg_false;
}
#endif /* KCG_USER_DEFINED_INIT */


void DistanceToTargetManager_reset_DMI_Control_Pkg_Sub_func_DistanceToTarget(
  outC_DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget *outC)
{
  outC->init = kcg_true;
  /* DistanceToTargetBarIfBlock:then:_L2=(DMI_Control_Pkg::Sub_func::DistanceToTarget::CalculateDistanceToTarget#1)/ */
  CalculateDistanceToTarget_reset_DMI_Control_Pkg_Sub_func_DistanceToTarget(
    &outC->Context_CalculateDistanceToTarget_1);
  /* _L19=(DMI_Control_Pkg::Sub_func::DistanceToTarget::ConditionDistanceToTargetDigital#2)/ */
  ConditionDistanceToTargetDigital_reset_DMI_Control_Pkg_Sub_func_DistanceToTarget(
    &outC->Context_ConditionDistanceToTargetDigital_2);
  /* _L6=(DMI_Control_Pkg::Sub_func::DistanceToTarget::ConditionDistanceToTargetBar#1)/ */
  ConditionDistanceToTargetBar_reset_DMI_Control_Pkg_Sub_func_DistanceToTarget(
    &outC->Context_ConditionDistanceToTargetBar_1);
  outC->DistanceToTarget_toDisplay = kcg_lit_float32(0.0);
  outC->InterpolatedDistanceToTarget_toDisplay = kcg_lit_float32(0.0);
  outC->DistanceToTargetBarVisibility_toDisplay = kcg_false;
  outC->DistanceToTargetVisibilityDigital_toDisplay = kcg_false;
}


void kcg_save_SV_DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget(
  SV_DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget *SV,
  outC_DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget *outC)
{
  kcg_save_SV_CalculateDistanceToTarget_DMI_Control_Pkg_Sub_func_DistanceToTarget(
    &SV->Context_CalculateDistanceToTarget_1,
    &outC->Context_CalculateDistanceToTarget_1);
  SV->Context_DistanceToTargetVisibilityDigital_toDisplay =
    outC->DistanceToTargetVisibilityDigital_toDisplay;
  SV->Context_DistanceToTargetBarVisibility_toDisplay =
    outC->DistanceToTargetBarVisibility_toDisplay;
  SV->Context_InterpolatedDistanceToTarget_toDisplay =
    outC->InterpolatedDistanceToTarget_toDisplay;
  SV->Context_DistanceToTarget_toDisplay = outC->DistanceToTarget_toDisplay;
  SV->Context__L19 = outC->_L19;
  SV->Context__L6 = outC->_L6;
  SV->Context_init = outC->init;
}

void kcg_load_SV_DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget(
  outC_DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget *outC,
  SV_DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget *SV)
{
  kcg_load_SV_CalculateDistanceToTarget_DMI_Control_Pkg_Sub_func_DistanceToTarget(
    &outC->Context_CalculateDistanceToTarget_1,
    &SV->Context_CalculateDistanceToTarget_1);
  outC->DistanceToTargetVisibilityDigital_toDisplay =
    SV->Context_DistanceToTargetVisibilityDigital_toDisplay;
  outC->DistanceToTargetBarVisibility_toDisplay =
    SV->Context_DistanceToTargetBarVisibility_toDisplay;
  outC->InterpolatedDistanceToTarget_toDisplay =
    SV->Context_InterpolatedDistanceToTarget_toDisplay;
  outC->DistanceToTarget_toDisplay = SV->Context_DistanceToTarget_toDisplay;
  outC->_L19 = SV->Context__L19;
  outC->_L6 = SV->Context__L6;
  outC->init = SV->Context_init;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

