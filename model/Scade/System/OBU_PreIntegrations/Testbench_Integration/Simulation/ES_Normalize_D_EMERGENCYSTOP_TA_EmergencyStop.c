/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ES_Normalize_D_EMERGENCYSTOP_TA_EmergencyStop.h"

/* TA_EmergencyStop::ES_Normalize_D_EMERGENCYSTOP/ */
void ES_Normalize_D_EMERGENCYSTOP_TA_EmergencyStop(
  /* q_scale/ */
  Q_SCALE q_scale,
  /* d_emergencystop/ */
  D_EMERGENCYSTOP d_emergencystop,
  outC_ES_Normalize_D_EMERGENCYSTOP_TA_EmergencyStop *outC)
{
  /* d_emergencystop_normalized/ */
  static L_internal_Type_Obu_BasicTypes_Pkg d_emergencystop_normalized_partial;
  /* d_emergencystop_normalized/ */
  static L_internal_Type_Obu_BasicTypes_Pkg _1_d_emergencystop_normalized_partial;
  /* d_emergencystop_normalized/ */
  static L_internal_Type_Obu_BasicTypes_Pkg _2_d_emergencystop_normalized_partial;

  outC->WhenBlock1_clock = q_scale;
  /* WhenBlock1: */
  switch (outC->WhenBlock1_clock) {
    case Q_SCALE_10_m_scale :
      outC->_L2_Q_SCALE_10_m_scale_WhenBlock1 = kcg_lit_int64(1000);
      outC->_L1_Q_SCALE_10_m_scale_WhenBlock1 = d_emergencystop;
      outC->_L3_Q_SCALE_10_m_scale_WhenBlock1 =
        outC->_L1_Q_SCALE_10_m_scale_WhenBlock1 *
        outC->_L2_Q_SCALE_10_m_scale_WhenBlock1;
      _2_d_emergencystop_normalized_partial = outC->_L3_Q_SCALE_10_m_scale_WhenBlock1;
      outC->d_emergencystop_normalized = _2_d_emergencystop_normalized_partial;
      break;
    case Q_SCALE_1_m_scale :
      outC->_L2_Q_SCALE_1_m_scale_WhenBlock1 = kcg_lit_int64(100);
      outC->_L1_Q_SCALE_1_m_scale_WhenBlock1 = d_emergencystop;
      outC->_L3_Q_SCALE_1_m_scale_WhenBlock1 =
        outC->_L1_Q_SCALE_1_m_scale_WhenBlock1 * outC->_L2_Q_SCALE_1_m_scale_WhenBlock1;
      _1_d_emergencystop_normalized_partial = outC->_L3_Q_SCALE_1_m_scale_WhenBlock1;
      outC->d_emergencystop_normalized = _1_d_emergencystop_normalized_partial;
      break;
    case Q_SCALE_10_cm_scale :
      outC->_L3_Q_SCALE_10_cm_scale_WhenBlock1 = d_emergencystop;
      outC->_L1_Q_SCALE_10_cm_scale_WhenBlock1 = kcg_lit_int64(10);
      outC->_L2_Q_SCALE_10_cm_scale_WhenBlock1 =
        outC->_L3_Q_SCALE_10_cm_scale_WhenBlock1 *
        outC->_L1_Q_SCALE_10_cm_scale_WhenBlock1;
      d_emergencystop_normalized_partial = outC->_L2_Q_SCALE_10_cm_scale_WhenBlock1;
      outC->d_emergencystop_normalized = d_emergencystop_normalized_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void ES_Normalize_D_EMERGENCYSTOP_init_TA_EmergencyStop(
  outC_ES_Normalize_D_EMERGENCYSTOP_TA_EmergencyStop *outC)
{
  outC->WhenBlock1_clock = Q_SCALE_10_cm_scale;
  outC->_L3_Q_SCALE_10_m_scale_WhenBlock1 = kcg_lit_int64(0);
  outC->_L2_Q_SCALE_10_m_scale_WhenBlock1 = kcg_lit_int64(0);
  outC->_L1_Q_SCALE_10_m_scale_WhenBlock1 = kcg_lit_int64(0);
  outC->_L3_Q_SCALE_1_m_scale_WhenBlock1 = kcg_lit_int64(0);
  outC->_L2_Q_SCALE_1_m_scale_WhenBlock1 = kcg_lit_int64(0);
  outC->_L1_Q_SCALE_1_m_scale_WhenBlock1 = kcg_lit_int64(0);
  outC->_L3_Q_SCALE_10_cm_scale_WhenBlock1 = kcg_lit_int64(0);
  outC->_L2_Q_SCALE_10_cm_scale_WhenBlock1 = kcg_lit_int64(0);
  outC->_L1_Q_SCALE_10_cm_scale_WhenBlock1 = kcg_lit_int64(0);
  outC->d_emergencystop_normalized = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ES_Normalize_D_EMERGENCYSTOP_reset_TA_EmergencyStop(
  outC_ES_Normalize_D_EMERGENCYSTOP_TA_EmergencyStop *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ES_Normalize_D_EMERGENCYSTOP_TA_EmergencyStop.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

