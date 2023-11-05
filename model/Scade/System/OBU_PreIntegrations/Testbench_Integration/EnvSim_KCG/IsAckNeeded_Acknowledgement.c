/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "IsAckNeeded_Acknowledgement.h"

/* Acknowledgement::IsAckNeeded/ */
void IsAckNeeded_Acknowledgement(
  /* selected_level_transition/ */
  T_LevelTransition_Level_And_Mode_Types_Pkg *selected_level_transition,
  /* last_level/ */
  M_LEVEL last_level,
  outC_IsAckNeeded_Acknowledgement *outC)
{
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &outC->_L1,
    selected_level_transition);
  kcg_copy_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg(
    &outC->_L33,
    &outC->_L1.transition);
  outC->_L31 = last_level == M_LEVEL_Level_NTC_specified_by_NID_NTC;
  outC->_L12 = outC->_L33.level;
  outC->Loc_new_level = outC->_L12;
  outC->_L30 = outC->Loc_new_level == M_LEVEL_Level_NTC_specified_by_NID_NTC;
  outC->_L32 = outC->_L30 & outC->_L31;
  outC->_L23 = outC->Loc_new_level;
  outC->_L18 = last_level;
  outC->_L19 = outC->_L18 != outC->_L23;
  outC->_L29 = outC->_L19 | outC->_L32;
  outC->_L27 = outC->Loc_new_level == M_LEVEL_Level_NTC_specified_by_NID_NTC;
  outC->_L25 = outC->Loc_new_level == M_LEVEL_Level_0;
  outC->_L16 = last_level == M_LEVEL_Level_NTC_specified_by_NID_NTC;
  outC->_L17 = outC->_L25 | outC->_L27 | outC->_L16;
  outC->_L14 = outC->_L29 & outC->_L17;
  outC->isAckNeeded = outC->_L14;
}

#ifndef KCG_USER_DEFINED_INIT
void IsAckNeeded_init_Acknowledgement(outC_IsAckNeeded_Acknowledgement *outC)
{
  outC->_L33.level = M_LEVEL_Level_0;
  outC->_L33.position = kcg_lit_int32(0);
  outC->_L33.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L33.immediateAck = kcg_true;
  outC->_L33.AckLength = kcg_lit_int32(0);
  outC->_L32 = kcg_true;
  outC->_L31 = kcg_true;
  outC->_L30 = kcg_true;
  outC->_L29 = kcg_true;
  outC->_L27 = kcg_true;
  outC->_L25 = kcg_true;
  outC->_L14 = kcg_true;
  outC->_L16 = kcg_true;
  outC->_L17 = kcg_true;
  outC->_L18 = M_LEVEL_Level_0;
  outC->_L19 = kcg_true;
  outC->_L23 = M_LEVEL_Level_0;
  outC->_L12 = M_LEVEL_Level_0;
  outC->_L1.is_set = kcg_true;
  outC->_L1.transition.level = M_LEVEL_Level_0;
  outC->_L1.transition.position = kcg_lit_int32(0);
  outC->_L1.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L1.transition.immediateAck = kcg_true;
  outC->_L1.transition.AckLength = kcg_lit_int32(0);
  outC->_L1.LRBG = kcg_lit_int32(0);
  outC->_L1.referenceLocation = kcg_lit_int32(0);
  outC->Loc_new_level = M_LEVEL_Level_0;
  outC->isAckNeeded = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void IsAckNeeded_reset_Acknowledgement(outC_IsAckNeeded_Acknowledgement *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** IsAckNeeded_Acknowledgement.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

