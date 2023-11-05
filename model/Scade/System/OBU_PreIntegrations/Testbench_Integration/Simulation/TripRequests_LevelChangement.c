/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TripRequests_LevelChangement.h"

/* LevelChangement::TripRequests/ */
void TripRequests_LevelChangement(
  /* last_level/ */
  M_LEVEL last_level,
  /* new_level/ */
  M_LEVEL new_level,
  /* Data_From_Track_to_Level/ */
  T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg *Data_From_Track_to_Level,
  outC_TripRequests_LevelChangement *outC)
{
  /* Trip_Requested/ */
  static kcg_bool Trip_Requested_partial;
  /* Trip_Requested/ */
  static kcg_bool _1_Trip_Requested_partial;
  /* Trip_Requested/ */
  static kcg_bool _2_Trip_Requested_partial;
  /* Trip_Requested/ */
  static kcg_bool _3_Trip_Requested_partial;
  /* Trip_Requested/ */
  static kcg_bool _4_Trip_Requested_partial;
  /* Trip_Requested/ */
  static kcg_bool _5_Trip_Requested_partial;
  static T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg noname;
  static T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg _6_noname;

  outC->IfBlock1_clock = (last_level == M_LEVEL_Level_0) | (last_level ==
      M_LEVEL_Level_NTC_specified_by_NID_NTC);
  if (outC->IfBlock1_clock) {
    outC->IfBlock2_clock_then_IfBlock1 = new_level == M_LEVEL_Level_1;
    if (outC->IfBlock2_clock_then_IfBlock1) {
    }
    else {
      outC->else_clock_IfBlock2_then_IfBlock1 = (new_level == M_LEVEL_Level_2) |
        (new_level == M_LEVEL_Level_3);
      if (outC->else_clock_IfBlock2_then_IfBlock1) {
      }
      else {
        outC->_L3_else_else_IfBlock2_then_IfBlock1 = kcg_false;
        _2_Trip_Requested_partial = outC->_L3_else_else_IfBlock2_then_IfBlock1;
      }
    }
  }
  else {
    outC->_L1_else_IfBlock1 = kcg_false;
    _5_Trip_Requested_partial = outC->_L1_else_IfBlock1;
  }
  kcg_copy_T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg(
    &outC->_L1,
    Data_From_Track_to_Level);
  outC->_L4 = outC->_L1.receivedL2L3MA_track;
  outC->Loc_L2L3_MA_track = outC->_L4;
  if (outC->IfBlock1_clock) {
    if (outC->IfBlock2_clock_then_IfBlock1) {
    }
    else /* IfBlock1:then:IfBlock2:else: */
    if (outC->else_clock_IfBlock2_then_IfBlock1) {
      outC->_L1_then_else_IfBlock2_then_IfBlock1 = outC->Loc_L2L3_MA_track;
      outC->_L2_then_else_IfBlock2_then_IfBlock1 =
        !outC->_L1_then_else_IfBlock2_then_IfBlock1;
      _1_Trip_Requested_partial = outC->_L2_then_else_IfBlock2_then_IfBlock1;
      _3_Trip_Requested_partial = _1_Trip_Requested_partial;
    }
    else {
      _3_Trip_Requested_partial = _2_Trip_Requested_partial;
    }
  }
  outC->_L5 = outC->_L1.receivedL1MA_track;
  outC->Loc_L1_MA_track = outC->_L5;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    /* IfBlock1:then:IfBlock2: */
    if (outC->IfBlock2_clock_then_IfBlock1) {
      outC->_L1_then_IfBlock2_then_IfBlock1 = outC->Loc_L1_MA_track;
      outC->_L2_then_IfBlock2_then_IfBlock1 = !outC->_L1_then_IfBlock2_then_IfBlock1;
      _4_Trip_Requested_partial = outC->_L2_then_IfBlock2_then_IfBlock1;
      Trip_Requested_partial = _4_Trip_Requested_partial;
    }
    else {
      Trip_Requested_partial = _3_Trip_Requested_partial;
    }
    outC->Trip_Requested = Trip_Requested_partial;
  }
  else {
    outC->Trip_Requested = _5_Trip_Requested_partial;
  }
  kcg_copy_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg(
    &outC->_L2,
    &outC->_L1.level_transition_priority_table);
  kcg_copy_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg(
    &outC->_L3,
    &outC->_L1.conditionnalTransition);
  kcg_copy_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg(
    &_6_noname,
    &outC->_L3);
  kcg_copy_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg(
    &noname,
    &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void TripRequests_init_LevelChangement(outC_TripRequests_LevelChangement *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;

  for (idx = 0; idx < 7; idx++) {
    outC->_L1.level_transition_priority_table[idx].is_set = kcg_true;
    outC->_L1.level_transition_priority_table[idx].transition.level =
      M_LEVEL_Level_0;
    outC->_L1.level_transition_priority_table[idx].transition.position =
      kcg_lit_int32(0);
    outC->_L1.level_transition_priority_table[idx].transition.transitionType =
      M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
    outC->_L1.level_transition_priority_table[idx].transition.immediateAck =
      kcg_true;
    outC->_L1.level_transition_priority_table[idx].transition.AckLength =
      kcg_lit_int32(0);
    outC->_L1.level_transition_priority_table[idx].LRBG = kcg_lit_int32(0);
    outC->_L1.level_transition_priority_table[idx].referenceLocation =
      kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 7; idx1++) {
    outC->_L1.conditionnalTransition[idx1].is_set = kcg_true;
    outC->_L1.conditionnalTransition[idx1].transition.level = M_LEVEL_Level_0;
    outC->_L1.conditionnalTransition[idx1].transition.position = kcg_lit_int32(0);
    outC->_L1.conditionnalTransition[idx1].transition.transitionType =
      M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
    outC->_L1.conditionnalTransition[idx1].transition.immediateAck = kcg_true;
    outC->_L1.conditionnalTransition[idx1].transition.AckLength = kcg_lit_int32(0);
    outC->_L1.conditionnalTransition[idx1].LRBG = kcg_lit_int32(0);
    outC->_L1.conditionnalTransition[idx1].referenceLocation = kcg_lit_int32(0);
  }
  outC->_L1.receivedL2L3MA_track = kcg_true;
  outC->_L1.receivedL1MA_track = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_true;
  for (idx2 = 0; idx2 < 7; idx2++) {
    outC->_L3[idx2].is_set = kcg_true;
    outC->_L3[idx2].transition.level = M_LEVEL_Level_0;
    outC->_L3[idx2].transition.position = kcg_lit_int32(0);
    outC->_L3[idx2].transition.transitionType =
      M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
    outC->_L3[idx2].transition.immediateAck = kcg_true;
    outC->_L3[idx2].transition.AckLength = kcg_lit_int32(0);
    outC->_L3[idx2].LRBG = kcg_lit_int32(0);
    outC->_L3[idx2].referenceLocation = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 7; idx3++) {
    outC->_L2[idx3].is_set = kcg_true;
    outC->_L2[idx3].transition.level = M_LEVEL_Level_0;
    outC->_L2[idx3].transition.position = kcg_lit_int32(0);
    outC->_L2[idx3].transition.transitionType =
      M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
    outC->_L2[idx3].transition.immediateAck = kcg_true;
    outC->_L2[idx3].transition.AckLength = kcg_lit_int32(0);
    outC->_L2[idx3].LRBG = kcg_lit_int32(0);
    outC->_L2[idx3].referenceLocation = kcg_lit_int32(0);
  }
  outC->Loc_L1_MA_track = kcg_true;
  outC->Loc_L2L3_MA_track = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L1_else_IfBlock1 = kcg_true;
  outC->_L2_then_IfBlock2_then_IfBlock1 = kcg_true;
  outC->_L1_then_IfBlock2_then_IfBlock1 = kcg_true;
  outC->else_clock_IfBlock2_then_IfBlock1 = kcg_true;
  outC->_L3_else_else_IfBlock2_then_IfBlock1 = kcg_true;
  outC->_L1_then_else_IfBlock2_then_IfBlock1 = kcg_true;
  outC->_L2_then_else_IfBlock2_then_IfBlock1 = kcg_true;
  outC->IfBlock2_clock_then_IfBlock1 = kcg_true;
  outC->Trip_Requested = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TripRequests_reset_LevelChangement(outC_TripRequests_LevelChangement *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TripRequests_LevelChangement.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

