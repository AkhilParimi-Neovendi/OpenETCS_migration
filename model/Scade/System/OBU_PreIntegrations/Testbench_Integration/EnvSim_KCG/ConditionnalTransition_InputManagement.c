/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ConditionnalTransition_InputManagement.h"

/* InputManagement::ConditionnalTransition/ */
void ConditionnalTransition_InputManagement(
  /* LRBG/ */
  NID_LRBG LRBG,
  /* referenceLocation/ */
  L_internal_Type_Obu_BasicTypes_Pkg referenceLocation,
  /* Packet_46_One_Iter/ */
  P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg *Packet_46_One_Iter,
  outC_ConditionnalTransition_InputManagement *outC)
{
  static Q_DIR noname;
  static NID_NTC _1_noname;

  outC->_L21 = kcg_lit_int64(0);
  outC->_L20 = kcg_false;
  kcg_copy_P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg(
    &outC->_L4,
    Packet_46_One_Iter);
  outC->_L8 = outC->_L4.m_leveltr;
  outC->Loc_Level_Transition = outC->_L8;
  outC->_L17 = outC->Loc_Level_Transition;
  /* _L16=(InputManagement::LevelTR2Level#2)/ */
  LevelTR2Level_InputManagement(outC->_L17, &outC->Context_LevelTR2Level_2);
  outC->_L16 = outC->Context_LevelTR2Level_2.OutLevel;
  outC->Loc_Req_Level = outC->_L16;
  outC->_L18 = outC->Loc_Req_Level;
  outC->_L12 = kcg_lit_int64(0);
  outC->_L13 = M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L19.level = outC->_L18;
  outC->_L19.position = outC->_L12;
  outC->_L19.transitionType = outC->_L13;
  outC->_L19.immediateAck = outC->_L20;
  outC->_L19.AckLength = outC->_L21;
  outC->_L9 = outC->_L4.nid_ntc;
  _1_noname = outC->_L9;
  outC->_L7 = outC->_L4.q_dir;
  noname = outC->_L7;
  outC->_L6 = outC->_L4.valid;
  outC->_L1 = LRBG;
  outC->_L2 = referenceLocation;
  outC->_L10.is_set = outC->_L6;
  kcg_copy_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg(
    &outC->_L10.transition,
    &outC->_L19);
  outC->_L10.LRBG = outC->_L1;
  outC->_L10.referenceLocation = outC->_L2;
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &outC->One_Transition,
    &outC->_L10);
}

#ifndef KCG_USER_DEFINED_INIT
void ConditionnalTransition_init_InputManagement(
  outC_ConditionnalTransition_InputManagement *outC)
{
  outC->_L21 = kcg_lit_int64(0);
  outC->_L20 = kcg_true;
  outC->_L19.level = M_LEVEL_Level_0;
  outC->_L19.position = kcg_lit_int64(0);
  outC->_L19.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L19.immediateAck = kcg_true;
  outC->_L19.AckLength = kcg_lit_int64(0);
  outC->_L18 = M_LEVEL_Level_0;
  outC->_L17 = M_LEVELTR_Level_0;
  outC->_L16 = M_LEVEL_Level_0;
  outC->_L13 = M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L12 = kcg_lit_int64(0);
  outC->_L10.is_set = kcg_true;
  outC->_L10.transition.level = M_LEVEL_Level_0;
  outC->_L10.transition.position = kcg_lit_int64(0);
  outC->_L10.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L10.transition.immediateAck = kcg_true;
  outC->_L10.transition.AckLength = kcg_lit_int64(0);
  outC->_L10.LRBG = kcg_lit_int64(0);
  outC->_L10.referenceLocation = kcg_lit_int64(0);
  outC->_L9 = kcg_lit_int64(0);
  outC->_L8 = M_LEVELTR_Level_0;
  outC->_L7 = Q_DIR_Reverse;
  outC->_L6 = kcg_true;
  outC->_L1 = kcg_lit_int64(0);
  outC->_L2 = kcg_lit_int64(0);
  outC->_L4.valid = kcg_true;
  outC->_L4.q_dir = Q_DIR_Reverse;
  outC->_L4.m_leveltr = M_LEVELTR_Level_0;
  outC->_L4.nid_ntc = kcg_lit_int64(0);
  outC->Loc_Req_Level = M_LEVEL_Level_0;
  outC->Loc_Level_Transition = M_LEVELTR_Level_0;
  outC->One_Transition.is_set = kcg_true;
  outC->One_Transition.transition.level = M_LEVEL_Level_0;
  outC->One_Transition.transition.position = kcg_lit_int64(0);
  outC->One_Transition.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->One_Transition.transition.immediateAck = kcg_true;
  outC->One_Transition.transition.AckLength = kcg_lit_int64(0);
  outC->One_Transition.LRBG = kcg_lit_int64(0);
  outC->One_Transition.referenceLocation = kcg_lit_int64(0);
  /* _L16=(InputManagement::LevelTR2Level#2)/ */
  LevelTR2Level_init_InputManagement(&outC->Context_LevelTR2Level_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ConditionnalTransition_reset_InputManagement(
  outC_ConditionnalTransition_InputManagement *outC)
{
  /* _L16=(InputManagement::LevelTR2Level#2)/ */
  LevelTR2Level_reset_InputManagement(&outC->Context_LevelTR2Level_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ConditionnalTransition_InputManagement.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

