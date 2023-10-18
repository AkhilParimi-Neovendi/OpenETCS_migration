/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NormalTransition_InputManagement.h"

/* InputManagement::NormalTransition/ */
void NormalTransition_InputManagement(
  /* LRBG/ */
  NID_LRBG LRBG,
  /* referenceLocation/ */
  L_internal_Type_Obu_BasicTypes_Pkg referenceLocation,
  /* P41_OneIter/ */
  P41_LevelTransitionOrder_T_Packet_Types_Pkg *P41_OneIter,
  outC_NormalTransition_InputManagement *outC)
{
  static Q_DIR noname;
  static NID_NTC _1_noname;

  outC->_L34 = referenceLocation;
  kcg_copy_P41_LevelTransitionOrder_T_Packet_Types_Pkg(&outC->_L4, P41_OneIter);
  outC->_L12 = outC->_L4.q_scale;
  outC->_L13 = outC->_L4.d_leveltr;
  /* _L19=(InputManagement::scaledDistance_2_distance#1)/ */
  scaledDistance_2_distance_InputManagement(
    outC->_L12,
    outC->_L13,
    &outC->Context_scaledDistance_2_distance_1);
  outC->_L19 = outC->Context_scaledDistance_2_distance_1.distance;
  outC->_L33 = outC->_L19 + outC->_L34;
  outC->_L16 = outC->_L4.l_ackleveltr;
  /* _L20=(InputManagement::scaledDistance_2_distance#2)/ */
  scaledDistance_2_distance_InputManagement(
    outC->_L12,
    outC->_L16,
    &outC->Context_scaledDistance_2_distance_2);
  outC->_L20 = outC->Context_scaledDistance_2_distance_2.distance;
  outC->Loc_Ack_Length = outC->_L20;
  outC->_L32 = outC->Loc_Ack_Length;
  outC->_L22 = cImmediateAck_Distance_InputManagement;
  outC->_L21 = outC->_L22 == outC->_L13;
  outC->_L10 = outC->_L4.valid;
  outC->_L23 = outC->_L10 & outC->_L21;
  outC->Loc_ImmediateAck = outC->_L23;
  outC->_L30 = outC->Loc_ImmediateAck;
  outC->_L14 = outC->_L4.m_leveltr;
  outC->Loc_Level_Transition = outC->_L14;
  outC->_L26 = outC->Loc_Level_Transition;
  /* _L18=(InputManagement::LevelTR2Level#1)/ */
  LevelTR2Level_InputManagement(outC->_L26, &outC->Context_LevelTR2Level_1);
  outC->_L18 = outC->Context_LevelTR2Level_1.OutLevel;
  outC->Loc_Req_Level = outC->_L18;
  outC->_L27 = outC->Loc_Req_Level;
  outC->_L24 = M_TransitionType_Normal_Level_And_Mode_Types_Pkg;
  outC->_L29.level = outC->_L27;
  outC->_L29.position = outC->_L33;
  outC->_L29.transitionType = outC->_L24;
  outC->_L29.immediateAck = outC->_L30;
  outC->_L29.AckLength = outC->_L32;
  outC->_L2 = LRBG;
  outC->_L3 = referenceLocation;
  outC->_L28.is_set = outC->_L10;
  kcg_copy_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg(
    &outC->_L28.transition,
    &outC->_L29);
  outC->_L28.LRBG = outC->_L2;
  outC->_L28.referenceLocation = outC->_L3;
  outC->_L15 = outC->_L4.nid_ntc;
  _1_noname = outC->_L15;
  outC->_L11 = outC->_L4.q_dir;
  noname = outC->_L11;
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &outC->One_Iter,
    &outC->_L28);
}

#ifndef KCG_USER_DEFINED_INIT
void NormalTransition_init_InputManagement(
  outC_NormalTransition_InputManagement *outC)
{
  outC->_L34 = kcg_lit_int64(0);
  outC->_L33 = kcg_lit_int64(0);
  outC->_L32 = kcg_lit_int64(0);
  outC->_L30 = kcg_true;
  outC->_L29.level = M_LEVEL_Level_0;
  outC->_L29.position = kcg_lit_int64(0);
  outC->_L29.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L29.immediateAck = kcg_true;
  outC->_L29.AckLength = kcg_lit_int64(0);
  outC->_L28.is_set = kcg_true;
  outC->_L28.transition.level = M_LEVEL_Level_0;
  outC->_L28.transition.position = kcg_lit_int64(0);
  outC->_L28.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L28.transition.immediateAck = kcg_true;
  outC->_L28.transition.AckLength = kcg_lit_int64(0);
  outC->_L28.LRBG = kcg_lit_int64(0);
  outC->_L28.referenceLocation = kcg_lit_int64(0);
  outC->_L27 = M_LEVEL_Level_0;
  outC->_L26 = M_LEVELTR_Level_0;
  outC->_L24 = M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L23 = kcg_true;
  outC->_L22 = kcg_lit_int64(0);
  outC->_L21 = kcg_true;
  outC->_L20 = kcg_lit_int64(0);
  outC->_L19 = kcg_lit_int64(0);
  outC->_L18 = M_LEVEL_Level_0;
  outC->_L16 = kcg_lit_int64(0);
  outC->_L15 = kcg_lit_int64(0);
  outC->_L14 = M_LEVELTR_Level_0;
  outC->_L13 = kcg_lit_int64(0);
  outC->_L12 = Q_SCALE_10_cm_scale;
  outC->_L11 = Q_DIR_Reverse;
  outC->_L10 = kcg_true;
  outC->_L2 = kcg_lit_int64(0);
  outC->_L3 = kcg_lit_int64(0);
  outC->_L4.valid = kcg_true;
  outC->_L4.q_dir = Q_DIR_Reverse;
  outC->_L4.q_scale = Q_SCALE_10_cm_scale;
  outC->_L4.d_leveltr = kcg_lit_int64(0);
  outC->_L4.m_leveltr = M_LEVELTR_Level_0;
  outC->_L4.nid_ntc = kcg_lit_int64(0);
  outC->_L4.l_ackleveltr = kcg_lit_int64(0);
  outC->Loc_Ack_Length = kcg_lit_int64(0);
  outC->Loc_ImmediateAck = kcg_true;
  outC->Loc_Level_Transition = M_LEVELTR_Level_0;
  outC->Loc_Req_Level = M_LEVEL_Level_0;
  outC->One_Iter.is_set = kcg_true;
  outC->One_Iter.transition.level = M_LEVEL_Level_0;
  outC->One_Iter.transition.position = kcg_lit_int64(0);
  outC->One_Iter.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->One_Iter.transition.immediateAck = kcg_true;
  outC->One_Iter.transition.AckLength = kcg_lit_int64(0);
  outC->One_Iter.LRBG = kcg_lit_int64(0);
  outC->One_Iter.referenceLocation = kcg_lit_int64(0);
  /* _L18=(InputManagement::LevelTR2Level#1)/ */
  LevelTR2Level_init_InputManagement(&outC->Context_LevelTR2Level_1);
  /* _L20=(InputManagement::scaledDistance_2_distance#2)/ */
  scaledDistance_2_distance_init_InputManagement(
    &outC->Context_scaledDistance_2_distance_2);
  /* _L19=(InputManagement::scaledDistance_2_distance#1)/ */
  scaledDistance_2_distance_init_InputManagement(
    &outC->Context_scaledDistance_2_distance_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void NormalTransition_reset_InputManagement(
  outC_NormalTransition_InputManagement *outC)
{
  /* _L18=(InputManagement::LevelTR2Level#1)/ */
  LevelTR2Level_reset_InputManagement(&outC->Context_LevelTR2Level_1);
  /* _L20=(InputManagement::scaledDistance_2_distance#2)/ */
  scaledDistance_2_distance_reset_InputManagement(
    &outC->Context_scaledDistance_2_distance_2);
  /* _L19=(InputManagement::scaledDistance_2_distance#1)/ */
  scaledDistance_2_distance_reset_InputManagement(
    &outC->Context_scaledDistance_2_distance_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** NormalTransition_InputManagement.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

