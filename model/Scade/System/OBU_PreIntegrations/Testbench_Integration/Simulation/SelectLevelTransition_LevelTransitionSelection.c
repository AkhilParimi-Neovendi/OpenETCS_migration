/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SelectLevelTransition_LevelTransitionSelection.h"

/* LevelTransitionSelection::SelectLevelTransition/ */
void SelectLevelTransition_LevelTransitionSelection(
  /* current_level/ */
  M_LEVEL current_level,
  /* train_standstill/ */
  kcg_bool train_standstill,
  /* driver_level_transition/ */
  T_LevelTransition_Level_And_Mode_Types_Pkg *driver_level_transition,
  /* ERTMS_capabilities/ */
  T_ERTMS_capabilities_Level_And_Mode_Types_Pkg *ERTMS_capabilities,
  /* Data_From_Track_to_Level/ */
  T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg *Data_From_Track_to_Level,
  outC_SelectLevelTransition_LevelTransitionSelection *outC)
{
  /* selected_level_transition/ */
  static T_LevelTransition_Level_And_Mode_Types_Pkg selected_level_transition_partial;
  /* IsAvailableForUse/ */
  static kcg_bool IsAvailableForUse_partial;
  /* selected_level_transition/ */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _1_selected_level_transition_partial;
  /* IsAvailableForUse/ */
  static kcg_bool _2_IsAvailableForUse_partial;
  /* selected_level_transition/ */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _3_selected_level_transition_partial;
  /* IsAvailableForUse/ */
  static kcg_bool _4_IsAvailableForUse_partial;
  /* selected_level_transition/ */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _5_selected_level_transition_partial;
  /* IsAvailableForUse/ */
  static kcg_bool _6_IsAvailableForUse_partial;
  /* IsAvailableForUse/ */
  static kcg_bool _7_IsAvailableForUse_partial;
  /* selected_level_transition/ */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _8_selected_level_transition_partial;
  /* IsAvailableForUse/ */
  static kcg_bool _9_IsAvailableForUse_partial;
  /* selected_level_transition/ */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _10_selected_level_transition_partial;
  static kcg_bool noname;
  static kcg_bool _11_noname;
  /* IsAvailableForUse/ */
  static kcg_bool last_IsAvailableForUse;
  /* selected_level_transition/ */
  static T_LevelTransition_Level_And_Mode_Types_Pkg last_selected_level_transition;

  last_IsAvailableForUse = outC->IsAvailableForUse;
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &last_selected_level_transition,
    &outC->selected_level_transition);
  kcg_copy_T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg(
    &outC->_L27,
    Data_From_Track_to_Level);
  kcg_copy_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg(
    &outC->_L29,
    &outC->_L27.conditionnalTransition);
  kcg_copy_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg(
    &outC->Loc_conditionnal_transition_table,
    &outC->_L29);
  kcg_copy_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg(
    &outC->_L33,
    &outC->Loc_conditionnal_transition_table);
  kcg_copy_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg(
    &outC->_L28,
    &outC->_L27.level_transition_priority_table);
  kcg_copy_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg(
    &outC->Loc_normal_transition_table,
    &outC->_L28);
  kcg_copy_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg(
    &outC->_L32,
    &outC->Loc_normal_transition_table);
  outC->_L31 = outC->_L27.receivedL1MA_track;
  _11_noname = outC->_L31;
  outC->_L30 = outC->_L27.receivedL2L3MA_track;
  noname = outC->_L30;
  outC->_L26 = kcg_false;
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &outC->_L16,
    &last_selected_level_transition);
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(&outC->_L25, &outC->_L16);
  if (kcg_true) {
    outC->_L25.is_set = outC->_L26;
  }
  outC->_L24 = last_IsAvailableForUse;
  outC->_L4 = current_level;
  kcg_copy_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg(
    &outC->_L9,
    ERTMS_capabilities);
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &outC->last_level_transition,
    &outC->_L25);
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &outC->_L18,
    &outC->last_level_transition);
  /* _L22=(LevelTransitionSelection::SelectConditionnalTransition#1)/ */
  SelectConditionnalTransition_LevelTransitionSelection(
    outC->_L4,
    &outC->_L33,
    &outC->_L9,
    &outC->_L18,
    outC->_L24,
    &outC->Context_SelectConditionnalTransition_1);
  outC->_L22 = outC->Context_SelectConditionnalTransition_1.Available_for_use;
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &outC->_L1,
    &outC->Context_SelectConditionnalTransition_1.output_level_transition);
  outC->Loc_Conditionnal_Available = outC->_L22;
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &outC->_L23,
    &outC->last_level_transition);
  /* _L21=(LevelTransitionSelection::SelectNormalTransition#1)/ */
  SelectNormalTransition_LevelTransitionSelection(
    &outC->_L23,
    &outC->_L9,
    &outC->_L32,
    &outC->Context_SelectNormalTransition_1);
  outC->_L21 = outC->Context_SelectNormalTransition_1.Available_for_use;
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &outC->_L3,
    &outC->Context_SelectNormalTransition_1.output_level_transition);
  outC->Loc_Normal_Available = outC->_L21;
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &outC->_L17,
    &outC->last_level_transition);
  outC->_L10 = outC->_L1.is_set;
  outC->Loc_conditionnal_set = outC->_L10;
  outC->IfBlock1_clock = outC->Loc_conditionnal_set;
  outC->_L12 = outC->_L3.is_set;
  outC->Loc_normal_set = outC->_L12;
  if (outC->IfBlock1_clock) {
  }
  else {
    outC->else_clock_IfBlock1 = outC->Loc_normal_set;
  }
  outC->_L7 = train_standstill;
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &outC->_L8,
    driver_level_transition);
  /* _L2=(LevelTransitionSelection::SelectDriverCondition#1)/ */
  SelectDriverCondition_LevelTransitionSelection(
    outC->_L4,
    outC->_L7,
    &outC->_L8,
    &outC->_L17,
    &outC->Context_SelectDriverCondition_1);
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &outC->_L2,
    &outC->Context_SelectDriverCondition_1.driver_output_level_transition);
  outC->_L11 = outC->_L2.is_set;
  outC->Loc_driver_set = outC->_L11;
  if (outC->IfBlock1_clock) {
  }
  else if (outC->else_clock_IfBlock1) {
  }
  else {
    outC->else_clock_else_IfBlock1 = outC->Loc_driver_set;
    if (outC->else_clock_else_IfBlock1) {
      outC->_L3_then_else_else_IfBlock1 = kcg_true;
      _4_IsAvailableForUse_partial = outC->_L3_then_else_else_IfBlock1;
    }
    else {
      outC->_L3_else_else_else_IfBlock1 = last_IsAvailableForUse;
      _6_IsAvailableForUse_partial = outC->_L3_else_else_else_IfBlock1;
      kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
        &outC->_L2_else_else_else_IfBlock1,
        &outC->last_level_transition);
      kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
        &_5_selected_level_transition_partial,
        &outC->_L2_else_else_else_IfBlock1);
    }
  }
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &outC->Loc_driver,
    &outC->_L2);
  if (outC->IfBlock1_clock) {
  }
  else if (outC->else_clock_IfBlock1) {
    outC->_L3_then_else_IfBlock1 = outC->Loc_Normal_Available;
    _9_IsAvailableForUse_partial = outC->_L3_then_else_IfBlock1;
  }
  else /* IfBlock1:else:else: */
  if (outC->else_clock_else_IfBlock1) {
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &outC->_L2_then_else_else_IfBlock1,
      &outC->Loc_driver);
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &_3_selected_level_transition_partial,
      &outC->_L2_then_else_else_IfBlock1);
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &_8_selected_level_transition_partial,
      &_3_selected_level_transition_partial);
    _7_IsAvailableForUse_partial = _4_IsAvailableForUse_partial;
  }
  else {
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &_8_selected_level_transition_partial,
      &_5_selected_level_transition_partial);
    _7_IsAvailableForUse_partial = _6_IsAvailableForUse_partial;
  }
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &outC->Loc_Normal,
    &outC->_L3);
  if (outC->IfBlock1_clock) {
    outC->_L3_then_IfBlock1 = outC->Loc_Conditionnal_Available;
    IsAvailableForUse_partial = outC->_L3_then_IfBlock1;
  }
  else /* IfBlock1:else: */
  if (outC->else_clock_IfBlock1) {
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &outC->_L2_then_else_IfBlock1,
      &outC->Loc_Normal);
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &_10_selected_level_transition_partial,
      &outC->_L2_then_else_IfBlock1);
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &_1_selected_level_transition_partial,
      &_10_selected_level_transition_partial);
    _2_IsAvailableForUse_partial = _9_IsAvailableForUse_partial;
  }
  else {
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &_1_selected_level_transition_partial,
      &_8_selected_level_transition_partial);
    _2_IsAvailableForUse_partial = _7_IsAvailableForUse_partial;
  }
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &outC->Loc_conditionnal,
    &outC->_L1);
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &outC->_L2_then_IfBlock1,
      &outC->Loc_conditionnal);
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &selected_level_transition_partial,
      &outC->_L2_then_IfBlock1);
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &outC->selected_level_transition,
      &selected_level_transition_partial);
    outC->IsAvailableForUse = IsAvailableForUse_partial;
  }
  else {
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &outC->selected_level_transition,
      &_1_selected_level_transition_partial);
    outC->IsAvailableForUse = _2_IsAvailableForUse_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void SelectLevelTransition_init_LevelTransitionSelection(
  outC_SelectLevelTransition_LevelTransitionSelection *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;

  for (idx = 0; idx < 7; idx++) {
    outC->_L33[idx].is_set = kcg_true;
    outC->_L33[idx].transition.level = M_LEVEL_Level_0;
    outC->_L33[idx].transition.position = kcg_lit_int32(0);
    outC->_L33[idx].transition.transitionType =
      M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
    outC->_L33[idx].transition.immediateAck = kcg_true;
    outC->_L33[idx].transition.AckLength = kcg_lit_int32(0);
    outC->_L33[idx].LRBG = kcg_lit_int32(0);
    outC->_L33[idx].referenceLocation = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 7; idx1++) {
    outC->_L32[idx1].is_set = kcg_true;
    outC->_L32[idx1].transition.level = M_LEVEL_Level_0;
    outC->_L32[idx1].transition.position = kcg_lit_int32(0);
    outC->_L32[idx1].transition.transitionType =
      M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
    outC->_L32[idx1].transition.immediateAck = kcg_true;
    outC->_L32[idx1].transition.AckLength = kcg_lit_int32(0);
    outC->_L32[idx1].LRBG = kcg_lit_int32(0);
    outC->_L32[idx1].referenceLocation = kcg_lit_int32(0);
  }
  for (idx2 = 0; idx2 < 7; idx2++) {
    outC->_L27.level_transition_priority_table[idx2].is_set = kcg_true;
    outC->_L27.level_transition_priority_table[idx2].transition.level =
      M_LEVEL_Level_0;
    outC->_L27.level_transition_priority_table[idx2].transition.position =
      kcg_lit_int32(0);
    outC->_L27.level_transition_priority_table[idx2].transition.transitionType =
      M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
    outC->_L27.level_transition_priority_table[idx2].transition.immediateAck =
      kcg_true;
    outC->_L27.level_transition_priority_table[idx2].transition.AckLength =
      kcg_lit_int32(0);
    outC->_L27.level_transition_priority_table[idx2].LRBG = kcg_lit_int32(0);
    outC->_L27.level_transition_priority_table[idx2].referenceLocation =
      kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 7; idx3++) {
    outC->_L27.conditionnalTransition[idx3].is_set = kcg_true;
    outC->_L27.conditionnalTransition[idx3].transition.level = M_LEVEL_Level_0;
    outC->_L27.conditionnalTransition[idx3].transition.position = kcg_lit_int32(0);
    outC->_L27.conditionnalTransition[idx3].transition.transitionType =
      M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
    outC->_L27.conditionnalTransition[idx3].transition.immediateAck = kcg_true;
    outC->_L27.conditionnalTransition[idx3].transition.AckLength = kcg_lit_int32(0);
    outC->_L27.conditionnalTransition[idx3].LRBG = kcg_lit_int32(0);
    outC->_L27.conditionnalTransition[idx3].referenceLocation = kcg_lit_int32(0);
  }
  outC->_L27.receivedL2L3MA_track = kcg_true;
  outC->_L27.receivedL1MA_track = kcg_true;
  outC->_L31 = kcg_true;
  outC->_L30 = kcg_true;
  for (idx4 = 0; idx4 < 7; idx4++) {
    outC->_L29[idx4].is_set = kcg_true;
    outC->_L29[idx4].transition.level = M_LEVEL_Level_0;
    outC->_L29[idx4].transition.position = kcg_lit_int32(0);
    outC->_L29[idx4].transition.transitionType =
      M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
    outC->_L29[idx4].transition.immediateAck = kcg_true;
    outC->_L29[idx4].transition.AckLength = kcg_lit_int32(0);
    outC->_L29[idx4].LRBG = kcg_lit_int32(0);
    outC->_L29[idx4].referenceLocation = kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 7; idx5++) {
    outC->_L28[idx5].is_set = kcg_true;
    outC->_L28[idx5].transition.level = M_LEVEL_Level_0;
    outC->_L28[idx5].transition.position = kcg_lit_int32(0);
    outC->_L28[idx5].transition.transitionType =
      M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
    outC->_L28[idx5].transition.immediateAck = kcg_true;
    outC->_L28[idx5].transition.AckLength = kcg_lit_int32(0);
    outC->_L28[idx5].LRBG = kcg_lit_int32(0);
    outC->_L28[idx5].referenceLocation = kcg_lit_int32(0);
  }
  outC->_L26 = kcg_true;
  outC->_L25.is_set = kcg_true;
  outC->_L25.transition.level = M_LEVEL_Level_0;
  outC->_L25.transition.position = kcg_lit_int32(0);
  outC->_L25.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L25.transition.immediateAck = kcg_true;
  outC->_L25.transition.AckLength = kcg_lit_int32(0);
  outC->_L25.LRBG = kcg_lit_int32(0);
  outC->_L25.referenceLocation = kcg_lit_int32(0);
  outC->_L24 = kcg_true;
  outC->_L23.is_set = kcg_true;
  outC->_L23.transition.level = M_LEVEL_Level_0;
  outC->_L23.transition.position = kcg_lit_int32(0);
  outC->_L23.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L23.transition.immediateAck = kcg_true;
  outC->_L23.transition.AckLength = kcg_lit_int32(0);
  outC->_L23.LRBG = kcg_lit_int32(0);
  outC->_L23.referenceLocation = kcg_lit_int32(0);
  outC->_L22 = kcg_true;
  outC->_L21 = kcg_true;
  outC->_L18.is_set = kcg_true;
  outC->_L18.transition.level = M_LEVEL_Level_0;
  outC->_L18.transition.position = kcg_lit_int32(0);
  outC->_L18.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L18.transition.immediateAck = kcg_true;
  outC->_L18.transition.AckLength = kcg_lit_int32(0);
  outC->_L18.LRBG = kcg_lit_int32(0);
  outC->_L18.referenceLocation = kcg_lit_int32(0);
  outC->_L17.is_set = kcg_true;
  outC->_L17.transition.level = M_LEVEL_Level_0;
  outC->_L17.transition.position = kcg_lit_int32(0);
  outC->_L17.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L17.transition.immediateAck = kcg_true;
  outC->_L17.transition.AckLength = kcg_lit_int32(0);
  outC->_L17.LRBG = kcg_lit_int32(0);
  outC->_L17.referenceLocation = kcg_lit_int32(0);
  outC->_L16.is_set = kcg_true;
  outC->_L16.transition.level = M_LEVEL_Level_0;
  outC->_L16.transition.position = kcg_lit_int32(0);
  outC->_L16.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L16.transition.immediateAck = kcg_true;
  outC->_L16.transition.AckLength = kcg_lit_int32(0);
  outC->_L16.LRBG = kcg_lit_int32(0);
  outC->_L16.referenceLocation = kcg_lit_int32(0);
  outC->_L12 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L9.NTC = kcg_true;
  outC->_L9.L0 = kcg_true;
  outC->_L9.L1 = kcg_true;
  outC->_L9.L2 = kcg_true;
  outC->_L9.L3 = kcg_true;
  outC->_L8.is_set = kcg_true;
  outC->_L8.transition.level = M_LEVEL_Level_0;
  outC->_L8.transition.position = kcg_lit_int32(0);
  outC->_L8.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L8.transition.immediateAck = kcg_true;
  outC->_L8.transition.AckLength = kcg_lit_int32(0);
  outC->_L8.LRBG = kcg_lit_int32(0);
  outC->_L8.referenceLocation = kcg_lit_int32(0);
  outC->_L7 = kcg_true;
  outC->_L4 = M_LEVEL_Level_0;
  outC->_L3.is_set = kcg_true;
  outC->_L3.transition.level = M_LEVEL_Level_0;
  outC->_L3.transition.position = kcg_lit_int32(0);
  outC->_L3.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L3.transition.immediateAck = kcg_true;
  outC->_L3.transition.AckLength = kcg_lit_int32(0);
  outC->_L3.LRBG = kcg_lit_int32(0);
  outC->_L3.referenceLocation = kcg_lit_int32(0);
  outC->_L2.is_set = kcg_true;
  outC->_L2.transition.level = M_LEVEL_Level_0;
  outC->_L2.transition.position = kcg_lit_int32(0);
  outC->_L2.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L2.transition.immediateAck = kcg_true;
  outC->_L2.transition.AckLength = kcg_lit_int32(0);
  outC->_L2.LRBG = kcg_lit_int32(0);
  outC->_L2.referenceLocation = kcg_lit_int32(0);
  outC->_L1.is_set = kcg_true;
  outC->_L1.transition.level = M_LEVEL_Level_0;
  outC->_L1.transition.position = kcg_lit_int32(0);
  outC->_L1.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L1.transition.immediateAck = kcg_true;
  outC->_L1.transition.AckLength = kcg_lit_int32(0);
  outC->_L1.LRBG = kcg_lit_int32(0);
  outC->_L1.referenceLocation = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 7; idx6++) {
    outC->Loc_conditionnal_transition_table[idx6].is_set = kcg_true;
    outC->Loc_conditionnal_transition_table[idx6].transition.level =
      M_LEVEL_Level_0;
    outC->Loc_conditionnal_transition_table[idx6].transition.position =
      kcg_lit_int32(0);
    outC->Loc_conditionnal_transition_table[idx6].transition.transitionType =
      M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
    outC->Loc_conditionnal_transition_table[idx6].transition.immediateAck =
      kcg_true;
    outC->Loc_conditionnal_transition_table[idx6].transition.AckLength =
      kcg_lit_int32(0);
    outC->Loc_conditionnal_transition_table[idx6].LRBG = kcg_lit_int32(0);
    outC->Loc_conditionnal_transition_table[idx6].referenceLocation =
      kcg_lit_int32(0);
  }
  for (idx7 = 0; idx7 < 7; idx7++) {
    outC->Loc_normal_transition_table[idx7].is_set = kcg_true;
    outC->Loc_normal_transition_table[idx7].transition.level = M_LEVEL_Level_0;
    outC->Loc_normal_transition_table[idx7].transition.position = kcg_lit_int32(0);
    outC->Loc_normal_transition_table[idx7].transition.transitionType =
      M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
    outC->Loc_normal_transition_table[idx7].transition.immediateAck = kcg_true;
    outC->Loc_normal_transition_table[idx7].transition.AckLength = kcg_lit_int32(0);
    outC->Loc_normal_transition_table[idx7].LRBG = kcg_lit_int32(0);
    outC->Loc_normal_transition_table[idx7].referenceLocation = kcg_lit_int32(0);
  }
  outC->Loc_Conditionnal_Available = kcg_true;
  outC->Loc_Normal_Available = kcg_true;
  outC->last_level_transition.is_set = kcg_true;
  outC->last_level_transition.transition.level = M_LEVEL_Level_0;
  outC->last_level_transition.transition.position = kcg_lit_int32(0);
  outC->last_level_transition.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->last_level_transition.transition.immediateAck = kcg_true;
  outC->last_level_transition.transition.AckLength = kcg_lit_int32(0);
  outC->last_level_transition.LRBG = kcg_lit_int32(0);
  outC->last_level_transition.referenceLocation = kcg_lit_int32(0);
  outC->Loc_Normal.is_set = kcg_true;
  outC->Loc_Normal.transition.level = M_LEVEL_Level_0;
  outC->Loc_Normal.transition.position = kcg_lit_int32(0);
  outC->Loc_Normal.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->Loc_Normal.transition.immediateAck = kcg_true;
  outC->Loc_Normal.transition.AckLength = kcg_lit_int32(0);
  outC->Loc_Normal.LRBG = kcg_lit_int32(0);
  outC->Loc_Normal.referenceLocation = kcg_lit_int32(0);
  outC->Loc_driver.is_set = kcg_true;
  outC->Loc_driver.transition.level = M_LEVEL_Level_0;
  outC->Loc_driver.transition.position = kcg_lit_int32(0);
  outC->Loc_driver.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->Loc_driver.transition.immediateAck = kcg_true;
  outC->Loc_driver.transition.AckLength = kcg_lit_int32(0);
  outC->Loc_driver.LRBG = kcg_lit_int32(0);
  outC->Loc_driver.referenceLocation = kcg_lit_int32(0);
  outC->Loc_conditionnal.is_set = kcg_true;
  outC->Loc_conditionnal.transition.level = M_LEVEL_Level_0;
  outC->Loc_conditionnal.transition.position = kcg_lit_int32(0);
  outC->Loc_conditionnal.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->Loc_conditionnal.transition.immediateAck = kcg_true;
  outC->Loc_conditionnal.transition.AckLength = kcg_lit_int32(0);
  outC->Loc_conditionnal.LRBG = kcg_lit_int32(0);
  outC->Loc_conditionnal.referenceLocation = kcg_lit_int32(0);
  outC->Loc_normal_set = kcg_true;
  outC->Loc_driver_set = kcg_true;
  outC->Loc_conditionnal_set = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L3_then_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_IfBlock1.is_set = kcg_true;
  outC->_L2_then_else_IfBlock1.transition.level = M_LEVEL_Level_0;
  outC->_L2_then_else_IfBlock1.transition.position = kcg_lit_int32(0);
  outC->_L2_then_else_IfBlock1.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L2_then_else_IfBlock1.transition.immediateAck = kcg_true;
  outC->_L2_then_else_IfBlock1.transition.AckLength = kcg_lit_int32(0);
  outC->_L2_then_else_IfBlock1.LRBG = kcg_lit_int32(0);
  outC->_L2_then_else_IfBlock1.referenceLocation = kcg_lit_int32(0);
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L2_else_else_else_IfBlock1.is_set = kcg_true;
  outC->_L2_else_else_else_IfBlock1.transition.level = M_LEVEL_Level_0;
  outC->_L2_else_else_else_IfBlock1.transition.position = kcg_lit_int32(0);
  outC->_L2_else_else_else_IfBlock1.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L2_else_else_else_IfBlock1.transition.immediateAck = kcg_true;
  outC->_L2_else_else_else_IfBlock1.transition.AckLength = kcg_lit_int32(0);
  outC->_L2_else_else_else_IfBlock1.LRBG = kcg_lit_int32(0);
  outC->_L2_else_else_else_IfBlock1.referenceLocation = kcg_lit_int32(0);
  outC->_L3_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_IfBlock1.is_set = kcg_true;
  outC->_L2_then_else_else_IfBlock1.transition.level = M_LEVEL_Level_0;
  outC->_L2_then_else_else_IfBlock1.transition.position = kcg_lit_int32(0);
  outC->_L2_then_else_else_IfBlock1.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L2_then_else_else_IfBlock1.transition.immediateAck = kcg_true;
  outC->_L2_then_else_else_IfBlock1.transition.AckLength = kcg_lit_int32(0);
  outC->_L2_then_else_else_IfBlock1.LRBG = kcg_lit_int32(0);
  outC->_L2_then_else_else_IfBlock1.referenceLocation = kcg_lit_int32(0);
  outC->_L3_then_else_else_IfBlock1 = kcg_true;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L2_then_IfBlock1.is_set = kcg_true;
  outC->_L2_then_IfBlock1.transition.level = M_LEVEL_Level_0;
  outC->_L2_then_IfBlock1.transition.position = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L2_then_IfBlock1.transition.immediateAck = kcg_true;
  outC->_L2_then_IfBlock1.transition.AckLength = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.LRBG = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.referenceLocation = kcg_lit_int32(0);
  outC->_L3_then_IfBlock1 = kcg_true;
  /* _L2=(LevelTransitionSelection::SelectDriverCondition#1)/ */
  SelectDriverCondition_init_LevelTransitionSelection(
    &outC->Context_SelectDriverCondition_1);
  /* _L21=(LevelTransitionSelection::SelectNormalTransition#1)/ */
  SelectNormalTransition_init_LevelTransitionSelection(
    &outC->Context_SelectNormalTransition_1);
  /* _L22=(LevelTransitionSelection::SelectConditionnalTransition#1)/ */
  SelectConditionnalTransition_init_LevelTransitionSelection(
    &outC->Context_SelectConditionnalTransition_1);
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &outC->selected_level_transition,
    (T_LevelTransition_Level_And_Mode_Types_Pkg *)
      &M_Default_Transition_Level_And_Mode_Types_Pkg);
  outC->IsAvailableForUse = kcg_false;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SelectLevelTransition_reset_LevelTransitionSelection(
  outC_SelectLevelTransition_LevelTransitionSelection *outC)
{
  /* _L2=(LevelTransitionSelection::SelectDriverCondition#1)/ */
  SelectDriverCondition_reset_LevelTransitionSelection(
    &outC->Context_SelectDriverCondition_1);
  /* _L21=(LevelTransitionSelection::SelectNormalTransition#1)/ */
  SelectNormalTransition_reset_LevelTransitionSelection(
    &outC->Context_SelectNormalTransition_1);
  /* _L22=(LevelTransitionSelection::SelectConditionnalTransition#1)/ */
  SelectConditionnalTransition_reset_LevelTransitionSelection(
    &outC->Context_SelectConditionnalTransition_1);
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &outC->selected_level_transition,
    (T_LevelTransition_Level_And_Mode_Types_Pkg *)
      &M_Default_Transition_Level_And_Mode_Types_Pkg);
  outC->IsAvailableForUse = kcg_false;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_SelectLevelTransition_LevelTransitionSelection(
  SV_SelectLevelTransition_LevelTransitionSelection *SV,
  outC_SelectLevelTransition_LevelTransitionSelection *outC)
{
  SV->Context_IsAvailableForUse = outC->IsAvailableForUse;
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &SV->Context_selected_level_transition,
    &outC->selected_level_transition);
}

void kcg_load_SV_SelectLevelTransition_LevelTransitionSelection(
  outC_SelectLevelTransition_LevelTransitionSelection *outC,
  SV_SelectLevelTransition_LevelTransitionSelection *SV)
{
  outC->IsAvailableForUse = SV->Context_IsAvailableForUse;
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &outC->selected_level_transition,
    &SV->Context_selected_level_transition);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SelectLevelTransition_LevelTransitionSelection.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

