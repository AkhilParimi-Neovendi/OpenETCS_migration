/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SelectConditionnalTransition_LevelTransitionSelection.h"

/* LevelTransitionSelection::SelectConditionnalTransition/ */
void SelectConditionnalTransition_LevelTransitionSelection(
  /* current_level/ */
  M_LEVEL current_level,
  /* conditional_transition/ */
  T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg *conditional_transition,
  /* ERTMS_capabilities/ */
  T_ERTMS_capabilities_Level_And_Mode_Types_Pkg *ERTMS_capabilities,
  /* last_level_transition/ */
  T_LevelTransition_Level_And_Mode_Types_Pkg *last_level_transition,
  /* last_available_for_use/ */
  kcg_bool last_available_for_use,
  outC_SelectConditionnalTransition_LevelTransitionSelection *outC)
{
  kcg_size idx;
  kcg_bool acc;
  kcg_size idx1;
  /* Available_for_use/ */
  kcg_bool Available_for_use_partial;
  /* output_level_transition/ */
  T_LevelTransition_Level_And_Mode_Types_Pkg output_level_transition_partial;
  /* Available_for_use/ */
  kcg_bool _2_Available_for_use_partial;
  /* output_level_transition/ */
  T_LevelTransition_Level_And_Mode_Types_Pkg _3_output_level_transition_partial;

  outC->_L3 = kcg_false;
  outC->_L4 = current_level;
  /* _L5/ */
  for (idx = 0; idx < 7; idx++) {
    outC->_L5[idx] = outC->_L4;
  }
  kcg_copy_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg(
    &outC->_L2,
    conditional_transition);
  outC->_L1 = outC->_L3;
  /* _L1= */
  for (idx1 = 0; idx1 < 7; idx1++) {
    acc = outC->_L1;
    /* _L1=(LevelTransitionSelection::IsInPriorityTable#1)/ */
    IsInPriorityTable_LevelTransitionSelection(
      acc,
      outC->_L5[idx1],
      &outC->_L2[idx1],
      &outC->Context_IsInPriorityTable_1[idx1]);
    outC->_L1 = outC->Context_IsInPriorityTable_1[idx1].same_level_and_set;
  }
  outC->Loc_contain_current_level = outC->_L1;
  outC->IfBlock1_clock = outC->Loc_contain_current_level;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L3_then_IfBlock1 = last_available_for_use;
    Available_for_use_partial = outC->_L3_then_IfBlock1;
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &outC->_L1_then_IfBlock1,
      last_level_transition);
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &output_level_transition_partial,
      &outC->_L1_then_IfBlock1);
    outC->Available_for_use = Available_for_use_partial;
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &outC->output_level_transition,
      &output_level_transition_partial);
  }
  else {
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &outC->_L9_else_IfBlock1,
      last_level_transition);
    kcg_copy_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg(
      &outC->_L5_else_IfBlock1,
      ERTMS_capabilities);
    kcg_copy_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg(
      &outC->_L3_else_IfBlock1,
      conditional_transition);
    /* IfBlock1:else:_L8=(LevelTransitionSelection::SelectNormalTransition#1)/ */
    SelectNormalTransition_LevelTransitionSelection(
      &outC->_L9_else_IfBlock1,
      &outC->_L5_else_IfBlock1,
      &outC->_L3_else_IfBlock1,
      &outC->Context_SelectNormalTransition_1);
    outC->_L8_else_IfBlock1 =
      outC->Context_SelectNormalTransition_1.Available_for_use;
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &outC->_L1_else_IfBlock1,
      &outC->Context_SelectNormalTransition_1.output_level_transition);
    _2_Available_for_use_partial = outC->_L8_else_IfBlock1;
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &_3_output_level_transition_partial,
      &outC->_L1_else_IfBlock1);
    outC->Available_for_use = _2_Available_for_use_partial;
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &outC->output_level_transition,
      &_3_output_level_transition_partial);
  }
}

#ifndef KCG_USER_DEFINED_INIT
void SelectConditionnalTransition_init_LevelTransitionSelection(
  outC_SelectConditionnalTransition_LevelTransitionSelection *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;

  for (idx1 = 0; idx1 < 7; idx1++) {
    outC->_L5[idx1] = M_LEVEL_Level_0;
  }
  outC->_L4 = M_LEVEL_Level_0;
  outC->_L3 = kcg_true;
  for (idx2 = 0; idx2 < 7; idx2++) {
    outC->_L2[idx2].is_set = kcg_true;
    outC->_L2[idx2].transition.level = M_LEVEL_Level_0;
    outC->_L2[idx2].transition.position = kcg_lit_int32(0);
    outC->_L2[idx2].transition.transitionType =
      M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
    outC->_L2[idx2].transition.immediateAck = kcg_true;
    outC->_L2[idx2].transition.AckLength = kcg_lit_int32(0);
    outC->_L2[idx2].LRBG = kcg_lit_int32(0);
    outC->_L2[idx2].referenceLocation = kcg_lit_int32(0);
  }
  outC->_L1 = kcg_true;
  outC->Loc_contain_current_level = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L1_else_IfBlock1.is_set = kcg_true;
  outC->_L1_else_IfBlock1.transition.level = M_LEVEL_Level_0;
  outC->_L1_else_IfBlock1.transition.position = kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L1_else_IfBlock1.transition.immediateAck = kcg_true;
  outC->_L1_else_IfBlock1.transition.AckLength = kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.LRBG = kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.referenceLocation = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 7; idx3++) {
    outC->_L3_else_IfBlock1[idx3].is_set = kcg_true;
    outC->_L3_else_IfBlock1[idx3].transition.level = M_LEVEL_Level_0;
    outC->_L3_else_IfBlock1[idx3].transition.position = kcg_lit_int32(0);
    outC->_L3_else_IfBlock1[idx3].transition.transitionType =
      M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
    outC->_L3_else_IfBlock1[idx3].transition.immediateAck = kcg_true;
    outC->_L3_else_IfBlock1[idx3].transition.AckLength = kcg_lit_int32(0);
    outC->_L3_else_IfBlock1[idx3].LRBG = kcg_lit_int32(0);
    outC->_L3_else_IfBlock1[idx3].referenceLocation = kcg_lit_int32(0);
  }
  outC->_L5_else_IfBlock1.NTC = kcg_true;
  outC->_L5_else_IfBlock1.L0 = kcg_true;
  outC->_L5_else_IfBlock1.L1 = kcg_true;
  outC->_L5_else_IfBlock1.L2 = kcg_true;
  outC->_L5_else_IfBlock1.L3 = kcg_true;
  outC->_L8_else_IfBlock1 = kcg_true;
  outC->_L9_else_IfBlock1.is_set = kcg_true;
  outC->_L9_else_IfBlock1.transition.level = M_LEVEL_Level_0;
  outC->_L9_else_IfBlock1.transition.position = kcg_lit_int32(0);
  outC->_L9_else_IfBlock1.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L9_else_IfBlock1.transition.immediateAck = kcg_true;
  outC->_L9_else_IfBlock1.transition.AckLength = kcg_lit_int32(0);
  outC->_L9_else_IfBlock1.LRBG = kcg_lit_int32(0);
  outC->_L9_else_IfBlock1.referenceLocation = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.is_set = kcg_true;
  outC->_L1_then_IfBlock1.transition.level = M_LEVEL_Level_0;
  outC->_L1_then_IfBlock1.transition.position = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L1_then_IfBlock1.transition.immediateAck = kcg_true;
  outC->_L1_then_IfBlock1.transition.AckLength = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.LRBG = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.referenceLocation = kcg_lit_int32(0);
  outC->_L3_then_IfBlock1 = kcg_true;
  outC->output_level_transition.is_set = kcg_true;
  outC->output_level_transition.transition.level = M_LEVEL_Level_0;
  outC->output_level_transition.transition.position = kcg_lit_int32(0);
  outC->output_level_transition.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->output_level_transition.transition.immediateAck = kcg_true;
  outC->output_level_transition.transition.AckLength = kcg_lit_int32(0);
  outC->output_level_transition.LRBG = kcg_lit_int32(0);
  outC->output_level_transition.referenceLocation = kcg_lit_int32(0);
  outC->Available_for_use = kcg_true;
  /* IfBlock1:else:_L8=(LevelTransitionSelection::SelectNormalTransition#1)/ */
  SelectNormalTransition_init_LevelTransitionSelection(
    &outC->Context_SelectNormalTransition_1);
  for (idx = 0; idx < 7; idx++) {
    /* _L1=(LevelTransitionSelection::IsInPriorityTable#1)/ */
    IsInPriorityTable_init_LevelTransitionSelection(
      &outC->Context_IsInPriorityTable_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SelectConditionnalTransition_reset_LevelTransitionSelection(
  outC_SelectConditionnalTransition_LevelTransitionSelection *outC)
{
  kcg_size idx;

  /* IfBlock1:else:_L8=(LevelTransitionSelection::SelectNormalTransition#1)/ */
  SelectNormalTransition_reset_LevelTransitionSelection(
    &outC->Context_SelectNormalTransition_1);
  for (idx = 0; idx < 7; idx++) {
    /* _L1=(LevelTransitionSelection::IsInPriorityTable#1)/ */
    IsInPriorityTable_reset_LevelTransitionSelection(
      &outC->Context_IsInPriorityTable_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SelectConditionnalTransition_LevelTransitionSelection.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

