/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "IsSelectedTransition_LevelTransitionSelection.h"

/* LevelTransitionSelection::IsSelectedTransition/ */
void IsSelectedTransition_LevelTransitionSelection(
  /* last_level_transition/ */
  T_LevelTransition_Level_And_Mode_Types_Pkg *last_level_transition,
  /* level_transition/ */
  T_LevelTransition_Level_And_Mode_Types_Pkg *level_transition,
  /* ERTMS_capabilities/ */
  T_ERTMS_capabilities_Level_And_Mode_Types_Pkg *ERTMS_capabilities,
  outC_IsSelectedTransition_LevelTransitionSelection *outC)
{
  /* selected_level_transition/ */
  T_LevelTransition_Level_And_Mode_Types_Pkg selected_level_transition_partial;
  /* selected_level_transition/ */
  T_LevelTransition_Level_And_Mode_Types_Pkg _1_selected_level_transition_partial;
  L_internal_Type_Obu_BasicTypes_Pkg noname;
  NID_LRBG _2_noname;

  kcg_copy_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg(
    &outC->_L20,
    ERTMS_capabilities);
  outC->_L18 = outC->_L20.L3;
  outC->capability_Level3 = outC->_L18;
  outC->_L19 = outC->capability_Level3;
  outC->_L17 = outC->_L20.L2;
  outC->capability_Level2 = outC->_L17;
  outC->_L26 = outC->capability_Level2;
  outC->_L16 = outC->_L20.L1;
  outC->capability_Level1 = outC->_L16;
  outC->_L13 = outC->capability_Level1;
  outC->_L15 = outC->_L20.L0;
  outC->capability_Level0 = outC->_L15;
  outC->_L22 = outC->capability_Level0;
  outC->_L14 = outC->_L20.NTC;
  outC->capability_NTC = outC->_L14;
  outC->_L24 = outC->capability_NTC;
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &outC->_L23,
    level_transition);
  kcg_copy_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg(
    &outC->_L8,
    &outC->_L23.transition);
  outC->_L25 = outC->_L8.level;
  /* _L11= */
  switch (outC->_L25) {
    case M_LEVEL_Level_3 :
      outC->_L11 = outC->_L19;
      break;
    case M_LEVEL_Level_2 :
      outC->_L11 = outC->_L26;
      break;
    case M_LEVEL_Level_1 :
      outC->_L11 = outC->_L13;
      break;
    case M_LEVEL_Level_0 :
      outC->_L11 = outC->_L22;
      break;
    case M_LEVEL_Level_NTC_specified_by_NID_NTC :
      outC->_L11 = outC->_L24;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L7 = outC->_L23.is_set;
  outC->Loc_is_valid = outC->_L7;
  outC->_L21 = outC->Loc_is_valid;
  outC->_L12 = outC->_L21 & outC->_L11;
  outC->_L27 = !outC->_L12;
  outC->SelectHigherPriority_clock = outC->Loc_is_valid;
  /* SelectHigherPriority: */
  if (outC->SelectHigherPriority_clock) {
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &outC->_L2_then_SelectHigherPriority,
      level_transition);
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &selected_level_transition_partial,
      &outC->_L2_then_SelectHigherPriority);
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &outC->selected_level_transition,
      &selected_level_transition_partial);
  }
  else {
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &outC->_L2_else_SelectHigherPriority,
      last_level_transition);
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &_1_selected_level_transition_partial,
      &outC->_L2_else_SelectHigherPriority);
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &outC->selected_level_transition,
      &_1_selected_level_transition_partial);
  }
  outC->available_transition_not_selected = outC->_L27;
  outC->_L9 = outC->_L23.LRBG;
  _2_noname = outC->_L9;
  outC->_L10 = outC->_L23.referenceLocation;
  noname = outC->_L10;
}

#ifndef KCG_USER_DEFINED_INIT
void IsSelectedTransition_init_LevelTransitionSelection(
  outC_IsSelectedTransition_LevelTransitionSelection *outC)
{
  outC->_L27 = kcg_true;
  outC->_L10 = kcg_lit_int32(0);
  outC->_L9 = kcg_lit_int32(0);
  outC->_L8.level = M_LEVEL_Level_0;
  outC->_L8.position = kcg_lit_int32(0);
  outC->_L8.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L8.immediateAck = kcg_true;
  outC->_L8.AckLength = kcg_lit_int32(0);
  outC->_L7 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L12 = kcg_true;
  outC->_L13 = kcg_true;
  outC->_L18 = kcg_true;
  outC->_L17 = kcg_true;
  outC->_L16 = kcg_true;
  outC->_L15 = kcg_true;
  outC->_L14 = kcg_true;
  outC->_L19 = kcg_true;
  outC->_L20.NTC = kcg_true;
  outC->_L20.L0 = kcg_true;
  outC->_L20.L1 = kcg_true;
  outC->_L20.L2 = kcg_true;
  outC->_L20.L3 = kcg_true;
  outC->_L21 = kcg_true;
  outC->_L22 = kcg_true;
  outC->_L23.is_set = kcg_true;
  outC->_L23.transition.level = M_LEVEL_Level_0;
  outC->_L23.transition.position = kcg_lit_int32(0);
  outC->_L23.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L23.transition.immediateAck = kcg_true;
  outC->_L23.transition.AckLength = kcg_lit_int32(0);
  outC->_L23.LRBG = kcg_lit_int32(0);
  outC->_L23.referenceLocation = kcg_lit_int32(0);
  outC->_L24 = kcg_true;
  outC->_L25 = M_LEVEL_Level_0;
  outC->_L26 = kcg_true;
  outC->capability_Level0 = kcg_true;
  outC->capability_NTC = kcg_true;
  outC->capability_Level3 = kcg_true;
  outC->capability_Level2 = kcg_true;
  outC->capability_Level1 = kcg_true;
  outC->Loc_is_valid = kcg_true;
  outC->SelectHigherPriority_clock = kcg_true;
  outC->_L2_else_SelectHigherPriority.is_set = kcg_true;
  outC->_L2_else_SelectHigherPriority.transition.level = M_LEVEL_Level_0;
  outC->_L2_else_SelectHigherPriority.transition.position = kcg_lit_int32(0);
  outC->_L2_else_SelectHigherPriority.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L2_else_SelectHigherPriority.transition.immediateAck = kcg_true;
  outC->_L2_else_SelectHigherPriority.transition.AckLength = kcg_lit_int32(0);
  outC->_L2_else_SelectHigherPriority.LRBG = kcg_lit_int32(0);
  outC->_L2_else_SelectHigherPriority.referenceLocation = kcg_lit_int32(0);
  outC->_L2_then_SelectHigherPriority.is_set = kcg_true;
  outC->_L2_then_SelectHigherPriority.transition.level = M_LEVEL_Level_0;
  outC->_L2_then_SelectHigherPriority.transition.position = kcg_lit_int32(0);
  outC->_L2_then_SelectHigherPriority.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L2_then_SelectHigherPriority.transition.immediateAck = kcg_true;
  outC->_L2_then_SelectHigherPriority.transition.AckLength = kcg_lit_int32(0);
  outC->_L2_then_SelectHigherPriority.LRBG = kcg_lit_int32(0);
  outC->_L2_then_SelectHigherPriority.referenceLocation = kcg_lit_int32(0);
  outC->selected_level_transition.is_set = kcg_true;
  outC->selected_level_transition.transition.level = M_LEVEL_Level_0;
  outC->selected_level_transition.transition.position = kcg_lit_int32(0);
  outC->selected_level_transition.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->selected_level_transition.transition.immediateAck = kcg_true;
  outC->selected_level_transition.transition.AckLength = kcg_lit_int32(0);
  outC->selected_level_transition.LRBG = kcg_lit_int32(0);
  outC->selected_level_transition.referenceLocation = kcg_lit_int32(0);
  outC->available_transition_not_selected = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void IsSelectedTransition_reset_LevelTransitionSelection(
  outC_IsSelectedTransition_LevelTransitionSelection *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** IsSelectedTransition_LevelTransitionSelection.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

