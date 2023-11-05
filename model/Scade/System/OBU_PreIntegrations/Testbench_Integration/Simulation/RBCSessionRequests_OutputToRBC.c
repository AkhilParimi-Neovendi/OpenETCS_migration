/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBCSessionRequests_OutputToRBC.h"

/* OutputToRBC::RBCSessionRequests/ */
void RBCSessionRequests_OutputToRBC(
  /* last_level/ */
  M_LEVEL last_level,
  /* selected_level_transition/ */
  T_LevelTransition_Level_And_Mode_Types_Pkg *selected_level_transition,
  outC_RBCSessionRequests_OutputToRBC *outC)
{
  static NID_LRBG noname;
  static L_internal_Type_Obu_BasicTypes_Pkg _1_noname;

  outC->_L19 = last_level;
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &outC->_L12,
    selected_level_transition);
  kcg_copy_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg(
    &outC->_L15,
    &outC->_L12.transition);
  outC->_L17 = outC->_L15.level;
  outC->_L16 = outC->_L12.is_set;
  /* _L18= */
  if (outC->_L16) {
    outC->_L18 = outC->_L17;
  }
  else {
    outC->_L18 = outC->_L19;
  }
  outC->Loc_new_level = outC->_L18;
  outC->_L20 = outC->Loc_new_level;
  outC->_L13 = outC->_L12.referenceLocation;
  _1_noname = outC->_L13;
  outC->_L14 = outC->_L12.LRBG;
  noname = outC->_L14;
  outC->_L1 = last_level;
  outC->_L9 = last_level == M_LEVEL_Level_NTC_specified_by_NID_NTC;
  outC->_L8 = last_level == M_LEVEL_Level_1;
  outC->_L7 = last_level == M_LEVEL_Level_0;
  outC->_L11 = outC->_L7 | outC->_L8 | outC->_L9;
  outC->_L6 = outC->Loc_new_level == M_LEVEL_Level_3;
  outC->_L5 = outC->Loc_new_level == M_LEVEL_Level_2;
  outC->_L10 = outC->_L5 | outC->_L6;
  outC->_L4 = outC->_L1 != outC->_L20;
  outC->_L3 = outC->_L4 & outC->_L10 & outC->_L11;
  outC->Connection_to_RBC_Requested = outC->_L3;
}

#ifndef KCG_USER_DEFINED_INIT
void RBCSessionRequests_init_OutputToRBC(
  outC_RBCSessionRequests_OutputToRBC *outC)
{
  outC->_L20 = M_LEVEL_Level_0;
  outC->_L19 = M_LEVEL_Level_0;
  outC->_L18 = M_LEVEL_Level_0;
  outC->_L17 = M_LEVEL_Level_0;
  outC->_L13 = kcg_lit_int32(0);
  outC->_L14 = kcg_lit_int32(0);
  outC->_L15.level = M_LEVEL_Level_0;
  outC->_L15.position = kcg_lit_int32(0);
  outC->_L15.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L15.immediateAck = kcg_true;
  outC->_L15.AckLength = kcg_lit_int32(0);
  outC->_L16 = kcg_true;
  outC->_L12.is_set = kcg_true;
  outC->_L12.transition.level = M_LEVEL_Level_0;
  outC->_L12.transition.position = kcg_lit_int32(0);
  outC->_L12.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L12.transition.immediateAck = kcg_true;
  outC->_L12.transition.AckLength = kcg_lit_int32(0);
  outC->_L12.LRBG = kcg_lit_int32(0);
  outC->_L12.referenceLocation = kcg_lit_int32(0);
  outC->_L1 = M_LEVEL_Level_0;
  outC->_L11 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_true;
  outC->Loc_new_level = M_LEVEL_Level_0;
  outC->Connection_to_RBC_Requested = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RBCSessionRequests_reset_OutputToRBC(
  outC_RBCSessionRequests_OutputToRBC *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RBCSessionRequests_OutputToRBC.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

