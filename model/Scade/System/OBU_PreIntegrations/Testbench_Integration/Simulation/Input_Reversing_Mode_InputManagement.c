/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Input_Reversing_Mode_InputManagement.h"

/* InputManagement::Input_Reversing_Mode/ */
void Input_Reversing_Mode_InputManagement(
  /* P_138/ */
  P138_ReversingAreaInformation_T_Packet_Types_Pkg *P_138,
  /* P_139/ */
  P139_ReversingSupervisionInformation_T_Packet_Types_Pkg *P_139,
  /* referenceLocation/ */
  L_internal_Type_Obu_BasicTypes_Pkg referenceLocation,
  outC_Input_Reversing_Mode_InputManagement *outC)
{
  static Q_DIR noname;
  static Q_DIR _1_noname;

  kcg_copy_P138_ReversingAreaInformation_T_Packet_Types_Pkg(&outC->_L12, P_138);
  outC->_L9 = outC->_L12.q_scale;
  outC->_L11 = outC->_L12.l_reversearea;
  /* _L20=(InputManagement::scaledDistance_2_distance#3)/ */
  scaledDistance_2_distance_InputManagement(
    outC->_L9,
    outC->_L11,
    &outC->Context_scaledDistance_2_distance_3);
  outC->_L20 = outC->Context_scaledDistance_2_distance_3.distance;
  kcg_copy_P139_ReversingSupervisionInformation_T_Packet_Types_Pkg(
    &outC->_L13,
    P_139);
  outC->_L4 = outC->_L13.q_scale;
  outC->_L5 = outC->_L13.d_reverse;
  /* _L19=(InputManagement::scaledDistance_2_distance#2)/ */
  scaledDistance_2_distance_InputManagement(
    outC->_L4,
    outC->_L5,
    &outC->Context_scaledDistance_2_distance_2);
  outC->_L19 = outC->Context_scaledDistance_2_distance_2.distance;
  outC->_L10 = outC->_L12.d_startreverse;
  /* _L18=(InputManagement::scaledDistance_2_distance#1)/ */
  scaledDistance_2_distance_InputManagement(
    outC->_L9,
    outC->_L10,
    &outC->Context_scaledDistance_2_distance_1);
  outC->_L18 = outC->Context_scaledDistance_2_distance_1.distance;
  outC->_L15 = referenceLocation;
  outC->_L17 = outC->_L15 + outC->_L19;
  outC->_L16 = outC->_L18 + outC->_L15;
  outC->_L2 = outC->_L13.valid;
  outC->_L7 = outC->_L12.valid;
  outC->_L14 = outC->_L7 & outC->_L2;
  outC->_L3 = outC->_L13.q_dir;
  _1_noname = outC->_L3;
  outC->_L8 = outC->_L12.q_dir;
  outC->_L6 = outC->_L13.v_reverse;
  outC->_L1.Available = outC->_L14;
  outC->_L1.Dist_Start = outC->_L16;
  outC->_L1.Length = outC->_L20;
  outC->_L1.Dist_Run = outC->_L17;
  outC->_L1.Speed = outC->_L6;
  kcg_copy_T_Reversing_Data_Level_And_Mode_Types_Pkg(
    &outC->Reversing_Data,
    &outC->_L1);
  noname = outC->_L8;
}

#ifndef KCG_USER_DEFINED_INIT
void Input_Reversing_Mode_init_InputManagement(
  outC_Input_Reversing_Mode_InputManagement *outC)
{
  outC->_L20 = kcg_lit_int64(0);
  outC->_L19 = kcg_lit_int64(0);
  outC->_L18 = kcg_lit_int64(0);
  outC->_L17 = kcg_lit_int64(0);
  outC->_L16 = kcg_lit_int64(0);
  outC->_L15 = kcg_lit_int64(0);
  outC->_L1.Available = kcg_true;
  outC->_L1.Dist_Start = kcg_lit_int64(0);
  outC->_L1.Length = kcg_lit_int64(0);
  outC->_L1.Dist_Run = kcg_lit_int64(0);
  outC->_L1.Speed = kcg_lit_int64(0);
  outC->_L6 = kcg_lit_int64(0);
  outC->_L5 = kcg_lit_int64(0);
  outC->_L4 = Q_SCALE_10_cm_scale;
  outC->_L3 = Q_DIR_Reverse;
  outC->_L2 = kcg_true;
  outC->_L11 = kcg_lit_int64(0);
  outC->_L10 = kcg_lit_int64(0);
  outC->_L9 = Q_SCALE_10_cm_scale;
  outC->_L8 = Q_DIR_Reverse;
  outC->_L7 = kcg_true;
  outC->_L12.valid = kcg_true;
  outC->_L12.q_dir = Q_DIR_Reverse;
  outC->_L12.q_scale = Q_SCALE_10_cm_scale;
  outC->_L12.d_startreverse = kcg_lit_int64(0);
  outC->_L12.l_reversearea = kcg_lit_int64(0);
  outC->_L13.valid = kcg_true;
  outC->_L13.q_dir = Q_DIR_Reverse;
  outC->_L13.q_scale = Q_SCALE_10_cm_scale;
  outC->_L13.d_reverse = kcg_lit_int64(0);
  outC->_L13.v_reverse = kcg_lit_int64(0);
  outC->_L14 = kcg_true;
  outC->Reversing_Data.Available = kcg_true;
  outC->Reversing_Data.Dist_Start = kcg_lit_int64(0);
  outC->Reversing_Data.Length = kcg_lit_int64(0);
  outC->Reversing_Data.Dist_Run = kcg_lit_int64(0);
  outC->Reversing_Data.Speed = kcg_lit_int64(0);
  /* _L18=(InputManagement::scaledDistance_2_distance#1)/ */
  scaledDistance_2_distance_init_InputManagement(
    &outC->Context_scaledDistance_2_distance_1);
  /* _L19=(InputManagement::scaledDistance_2_distance#2)/ */
  scaledDistance_2_distance_init_InputManagement(
    &outC->Context_scaledDistance_2_distance_2);
  /* _L20=(InputManagement::scaledDistance_2_distance#3)/ */
  scaledDistance_2_distance_init_InputManagement(
    &outC->Context_scaledDistance_2_distance_3);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Input_Reversing_Mode_reset_InputManagement(
  outC_Input_Reversing_Mode_InputManagement *outC)
{
  /* _L18=(InputManagement::scaledDistance_2_distance#1)/ */
  scaledDistance_2_distance_reset_InputManagement(
    &outC->Context_scaledDistance_2_distance_1);
  /* _L19=(InputManagement::scaledDistance_2_distance#2)/ */
  scaledDistance_2_distance_reset_InputManagement(
    &outC->Context_scaledDistance_2_distance_2);
  /* _L20=(InputManagement::scaledDistance_2_distance#3)/ */
  scaledDistance_2_distance_reset_InputManagement(
    &outC->Context_scaledDistance_2_distance_3);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Input_Reversing_Mode_InputManagement.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

