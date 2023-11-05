/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SelectNormalTransition_LevelTransitionSelection.h"

/* LevelTransitionSelection::SelectNormalTransition/ */
void SelectNormalTransition_LevelTransitionSelection(
  /* last_level_transition/ */
  T_LevelTransition_Level_And_Mode_Types_Pkg *last_level_transition,
  /* ERTMS_capabilities/ */
  T_ERTMS_capabilities_Level_And_Mode_Types_Pkg *ERTMS_capabilities,
  /* level_transition_table/ */
  T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg *level_transition_table,
  outC_SelectNormalTransition_LevelTransitionSelection *outC)
{
  static kcg_size idx;
  static T_LevelTransition_Level_And_Mode_Types_Pkg acc;
  static kcg_size idx1;

  outC->_L36 = kcg_false;
  outC->_L35 = kcg_true;
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &outC->_L28,
    last_level_transition);
  kcg_copy_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg(
    &outC->_L29,
    level_transition_table);
  kcg_copy_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg(
    &outC->_L30,
    ERTMS_capabilities);
  /* _L31/ */
  for (idx = 0; idx < 7; idx++) {
    kcg_copy_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg(
      &outC->_L31[idx],
      &outC->_L30);
  }
  outC->_L32 = kcg_true;
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(&outC->_L25, &outC->_L28);
  /* _L27= */
  if (outC->_L32) {
    /* _L27= */
    for (idx1 = 0; idx1 < 7; idx1++) {
      kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(&acc, &outC->_L25);
      /* _L27=(LevelTransitionSelection::IsSelectedTransition#1)/ */
      IsSelectedTransition_LevelTransitionSelection(
        &acc,
        &outC->_L29[idx1],
        &outC->_L31[idx1],
        &outC->Context_IsSelectedTransition_1[idx1]);
      kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
        &outC->_L25,
        &outC->Context_IsSelectedTransition_1[idx1].selected_level_transition);
      outC->_L27 = /* _L27= */(kcg_int32) (idx1 + 1);
      /* _L27= */
      if (!outC->Context_IsSelectedTransition_1[idx1].available_transition_not_selected) {
        break;
      }
    }
  }
  else {
    outC->_L27 = kcg_lit_int32(0);
  }
  outC->Loc_index = outC->_L27;
  outC->_L34 = outC->Loc_index <
    M_Max_TransitionInPriorityTable_Level_And_Mode_Types_Pkg;
  /* _L33= */
  if (outC->_L34) {
    outC->_L33 = outC->_L35;
  }
  else {
    outC->_L33 = outC->_L36;
  }
  outC->Available_for_use = outC->_L33;
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &outC->output_level_transition,
    &outC->_L25);
}

#ifndef KCG_USER_DEFINED_INIT
void SelectNormalTransition_init_LevelTransitionSelection(
  outC_SelectNormalTransition_LevelTransitionSelection *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;

  outC->_L36 = kcg_true;
  outC->_L35 = kcg_true;
  outC->_L34 = kcg_true;
  outC->_L33 = kcg_true;
  outC->_L32 = kcg_true;
  for (idx1 = 0; idx1 < 7; idx1++) {
    outC->_L31[idx1].NTC = kcg_true;
    outC->_L31[idx1].L0 = kcg_true;
    outC->_L31[idx1].L1 = kcg_true;
    outC->_L31[idx1].L2 = kcg_true;
    outC->_L31[idx1].L3 = kcg_true;
  }
  outC->_L30.NTC = kcg_true;
  outC->_L30.L0 = kcg_true;
  outC->_L30.L1 = kcg_true;
  outC->_L30.L2 = kcg_true;
  outC->_L30.L3 = kcg_true;
  for (idx2 = 0; idx2 < 7; idx2++) {
    outC->_L29[idx2].is_set = kcg_true;
    outC->_L29[idx2].transition.level = M_LEVEL_Level_0;
    outC->_L29[idx2].transition.position = kcg_lit_int32(0);
    outC->_L29[idx2].transition.transitionType =
      M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
    outC->_L29[idx2].transition.immediateAck = kcg_true;
    outC->_L29[idx2].transition.AckLength = kcg_lit_int32(0);
    outC->_L29[idx2].LRBG = kcg_lit_int32(0);
    outC->_L29[idx2].referenceLocation = kcg_lit_int32(0);
  }
  outC->_L28.is_set = kcg_true;
  outC->_L28.transition.level = M_LEVEL_Level_0;
  outC->_L28.transition.position = kcg_lit_int32(0);
  outC->_L28.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L28.transition.immediateAck = kcg_true;
  outC->_L28.transition.AckLength = kcg_lit_int32(0);
  outC->_L28.LRBG = kcg_lit_int32(0);
  outC->_L28.referenceLocation = kcg_lit_int32(0);
  outC->_L27 = kcg_lit_int32(0);
  outC->_L25.is_set = kcg_true;
  outC->_L25.transition.level = M_LEVEL_Level_0;
  outC->_L25.transition.position = kcg_lit_int32(0);
  outC->_L25.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L25.transition.immediateAck = kcg_true;
  outC->_L25.transition.AckLength = kcg_lit_int32(0);
  outC->_L25.LRBG = kcg_lit_int32(0);
  outC->_L25.referenceLocation = kcg_lit_int32(0);
  outC->Loc_index = kcg_lit_int32(0);
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
  for (idx = 0; idx < 7; idx++) {
    /* _L27=(LevelTransitionSelection::IsSelectedTransition#1)/ */
    IsSelectedTransition_init_LevelTransitionSelection(
      &outC->Context_IsSelectedTransition_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SelectNormalTransition_reset_LevelTransitionSelection(
  outC_SelectNormalTransition_LevelTransitionSelection *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 7; idx++) {
    /* _L27=(LevelTransitionSelection::IsSelectedTransition#1)/ */
    IsSelectedTransition_reset_LevelTransitionSelection(
      &outC->Context_IsSelectedTransition_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SelectNormalTransition_LevelTransitionSelection.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

