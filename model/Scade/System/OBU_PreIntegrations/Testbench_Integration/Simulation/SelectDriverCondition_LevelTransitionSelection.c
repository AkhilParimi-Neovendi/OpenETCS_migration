/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SelectDriverCondition_LevelTransitionSelection.h"

/* LevelTransitionSelection::SelectDriverCondition/ */
void SelectDriverCondition_LevelTransitionSelection(
  /* current_level/ */
  M_LEVEL current_level,
  /* train_standstill/ */
  kcg_bool train_standstill,
  /* driver_level_transition/ */
  T_LevelTransition_Level_And_Mode_Types_Pkg *driver_level_transition,
  /* last_level_transition/ */
  T_LevelTransition_Level_And_Mode_Types_Pkg *last_level_transition,
  outC_SelectDriverCondition_LevelTransitionSelection *outC)
{
  static L_internal_Type_Obu_BasicTypes_Pkg noname;
  static NID_LRBG _1_noname;

  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &outC->_L25,
    last_level_transition);
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &outC->_L3,
    driver_level_transition);
  kcg_copy_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg(
    &outC->_L19,
    &outC->_L3.transition);
  outC->_L17 = outC->_L19.level;
  outC->Driver_Transition_Level = outC->_L17;
  outC->_L31 = !(outC->Driver_Transition_Level == current_level);
  outC->_L18 = outC->_L3.is_set;
  outC->Driver_Transition_Set = outC->_L18;
  outC->_L30 = outC->Driver_Transition_Set;
  outC->_L28 = train_standstill;
  outC->_L27 = outC->_L28 & outC->_L30 & outC->_L31;
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &outC->_L24,
    driver_level_transition);
  /* _L26= */
  if (outC->_L27) {
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(&outC->_L26, &outC->_L24);
  }
  else {
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(&outC->_L26, &outC->_L25);
  }
  outC->_L20 = outC->_L3.LRBG;
  _1_noname = outC->_L20;
  outC->_L21 = outC->_L3.referenceLocation;
  noname = outC->_L21;
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &outC->driver_output_level_transition,
    &outC->_L26);
}

#ifndef KCG_USER_DEFINED_INIT
void SelectDriverCondition_init_LevelTransitionSelection(
  outC_SelectDriverCondition_LevelTransitionSelection *outC)
{
  outC->_L25.is_set = kcg_true;
  outC->_L25.transition.level = M_LEVEL_Level_0;
  outC->_L25.transition.position = kcg_lit_int32(0);
  outC->_L25.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L25.transition.immediateAck = kcg_true;
  outC->_L25.transition.AckLength = kcg_lit_int32(0);
  outC->_L25.LRBG = kcg_lit_int32(0);
  outC->_L25.referenceLocation = kcg_lit_int32(0);
  outC->_L31 = kcg_true;
  outC->_L30 = kcg_true;
  outC->_L28 = kcg_true;
  outC->_L27 = kcg_true;
  outC->_L26.is_set = kcg_true;
  outC->_L26.transition.level = M_LEVEL_Level_0;
  outC->_L26.transition.position = kcg_lit_int32(0);
  outC->_L26.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L26.transition.immediateAck = kcg_true;
  outC->_L26.transition.AckLength = kcg_lit_int32(0);
  outC->_L26.LRBG = kcg_lit_int32(0);
  outC->_L26.referenceLocation = kcg_lit_int32(0);
  outC->_L24.is_set = kcg_true;
  outC->_L24.transition.level = M_LEVEL_Level_0;
  outC->_L24.transition.position = kcg_lit_int32(0);
  outC->_L24.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L24.transition.immediateAck = kcg_true;
  outC->_L24.transition.AckLength = kcg_lit_int32(0);
  outC->_L24.LRBG = kcg_lit_int32(0);
  outC->_L24.referenceLocation = kcg_lit_int32(0);
  outC->_L17 = M_LEVEL_Level_0;
  outC->_L21 = kcg_lit_int32(0);
  outC->_L20 = kcg_lit_int32(0);
  outC->_L19.level = M_LEVEL_Level_0;
  outC->_L19.position = kcg_lit_int32(0);
  outC->_L19.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L19.immediateAck = kcg_true;
  outC->_L19.AckLength = kcg_lit_int32(0);
  outC->_L18 = kcg_true;
  outC->_L3.is_set = kcg_true;
  outC->_L3.transition.level = M_LEVEL_Level_0;
  outC->_L3.transition.position = kcg_lit_int32(0);
  outC->_L3.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L3.transition.immediateAck = kcg_true;
  outC->_L3.transition.AckLength = kcg_lit_int32(0);
  outC->_L3.LRBG = kcg_lit_int32(0);
  outC->_L3.referenceLocation = kcg_lit_int32(0);
  outC->Driver_Transition_Level = M_LEVEL_Level_0;
  outC->Driver_Transition_Set = kcg_true;
  outC->driver_output_level_transition.is_set = kcg_true;
  outC->driver_output_level_transition.transition.level = M_LEVEL_Level_0;
  outC->driver_output_level_transition.transition.position = kcg_lit_int32(0);
  outC->driver_output_level_transition.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->driver_output_level_transition.transition.immediateAck = kcg_true;
  outC->driver_output_level_transition.transition.AckLength = kcg_lit_int32(0);
  outC->driver_output_level_transition.LRBG = kcg_lit_int32(0);
  outC->driver_output_level_transition.referenceLocation = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SelectDriverCondition_reset_LevelTransitionSelection(
  outC_SelectDriverCondition_LevelTransitionSelection *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SelectDriverCondition_LevelTransitionSelection.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

