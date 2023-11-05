/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "scaledDistance_2_distance_InputManagement.h"

/* InputManagement::scaledDistance_2_distance/ */
void scaledDistance_2_distance_InputManagement(
  /* q_scale/ */
  Q_SCALE q_scale,
  /* d_in/ */
  kcg_int32 d_in,
  outC_scaledDistance_2_distance_InputManagement *outC)
{
  outC->_L9 = cQ_SCALE_10_m_resolution_TrainPosition_Types_Pck;
  outC->_L2 = d_in;
  outC->_L14 = outC->_L2 * outC->_L9;
  outC->_L10 = cQ_SCALE_1_m_resolution_TrainPosition_Types_Pck;
  outC->_L13 = outC->_L2 * outC->_L10;
  outC->_L8 = cQ_SCALE_10_cm_resolution_TrainPosition_Types_Pck;
  outC->_L12 = outC->_L2 * outC->_L8;
  outC->_L1 = q_scale;
  /* _L7= */
  switch (outC->_L1) {
    case Q_SCALE_10_cm_scale :
      outC->_L7 = outC->_L12;
      break;
    case Q_SCALE_1_m_scale :
      outC->_L7 = outC->_L13;
      break;
    case Q_SCALE_10_m_scale :
      outC->_L7 = outC->_L14;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->distance = outC->_L7;
}

#ifndef KCG_USER_DEFINED_INIT
void scaledDistance_2_distance_init_InputManagement(
  outC_scaledDistance_2_distance_InputManagement *outC)
{
  outC->_L14 = kcg_lit_int32(0);
  outC->_L13 = kcg_lit_int32(0);
  outC->_L12 = kcg_lit_int32(0);
  outC->_L10 = kcg_lit_int32(0);
  outC->_L9 = kcg_lit_int32(0);
  outC->_L8 = kcg_lit_int32(0);
  outC->_L7 = kcg_lit_int32(0);
  outC->_L2 = kcg_lit_int32(0);
  outC->_L1 = Q_SCALE_10_cm_scale;
  outC->distance = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void scaledDistance_2_distance_reset_InputManagement(
  outC_scaledDistance_2_distance_InputManagement *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** scaledDistance_2_distance_InputManagement.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

