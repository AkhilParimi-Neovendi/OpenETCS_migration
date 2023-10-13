/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "IsInPriorityTable_LevelTransitionSelection.h"

/* LevelTransitionSelection::IsInPriorityTable/ */
void IsInPriorityTable_LevelTransitionSelection(
  /* In_same_level_and_set/ */
  kcg_bool In_same_level_and_set,
  /* level/ */
  M_LEVEL level,
  /* level_transition/ */
  T_LevelTransition_Level_And_Mode_Types_Pkg *level_transition,
  outC_IsInPriorityTable_LevelTransitionSelection *outC)
{
  static NID_LRBG noname;
  static L_internal_Type_Obu_BasicTypes_Pkg _1_noname;

  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &outC->_L1,
    level_transition);
  kcg_copy_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg(
    &outC->_L3,
    &outC->_L1.transition);
  outC->_L12 = outC->_L3.level;
  outC->_L6 = level;
  outC->_L10 = outC->_L6 == outC->_L12;
  outC->_L2 = outC->_L1.is_set;
  outC->_L11 = outC->_L2 & outC->_L10;
  outC->_L13 = In_same_level_and_set;
  outC->_L14 = outC->_L13 | outC->_L11;
  outC->same_level_and_set = outC->_L14;
  outC->_L5 = outC->_L1.referenceLocation;
  _1_noname = outC->_L5;
  outC->_L4 = outC->_L1.LRBG;
  noname = outC->_L4;
}

#ifndef KCG_USER_DEFINED_INIT
void IsInPriorityTable_init_LevelTransitionSelection(
  outC_IsInPriorityTable_LevelTransitionSelection *outC)
{
  outC->_L14 = kcg_true;
  outC->_L13 = kcg_true;
  outC->_L12 = M_LEVEL_Level_0;
  outC->_L1.is_set = kcg_true;
  outC->_L1.transition.level = M_LEVEL_Level_0;
  outC->_L1.transition.position = kcg_lit_int64(0);
  outC->_L1.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L1.transition.immediateAck = kcg_true;
  outC->_L1.transition.AckLength = kcg_lit_int64(0);
  outC->_L1.LRBG = kcg_lit_int64(0);
  outC->_L1.referenceLocation = kcg_lit_int64(0);
  outC->_L5 = kcg_lit_int64(0);
  outC->_L4 = kcg_lit_int64(0);
  outC->_L3.level = M_LEVEL_Level_0;
  outC->_L3.position = kcg_lit_int64(0);
  outC->_L3.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L3.immediateAck = kcg_true;
  outC->_L3.AckLength = kcg_lit_int64(0);
  outC->_L2 = kcg_true;
  outC->_L6 = M_LEVEL_Level_0;
  outC->_L10 = kcg_true;
  outC->_L11 = kcg_true;
  outC->same_level_and_set = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void IsInPriorityTable_reset_LevelTransitionSelection(
  outC_IsInPriorityTable_LevelTransitionSelection *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** IsInPriorityTable_LevelTransitionSelection.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

