/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "LRBGDistanceToMeterConver_RBC_Converter_Pkg.h"

/* RBC_Converter_Pkg::LRBGDistanceToMeterConverter__Convert/ */
void LRBGDistanceToMeterConver_RBC_Converter_Pkg(
  /* inDistanceToLRBG/ */
  D_LRBG inDistanceToLRBG,
  /* in_Q_SCALE/ */
  Q_SCALE in_Q_SCALE,
  outC_LRBGDistanceToMeterConver_RBC_Converter_Pkg *outC)
{
  /* outDistanceToLRBGInMeters/ */
  kcg_float32 outDistanceToLRBGInMeters_partial;
  /* outDistanceToLRBGInMeters/ */
  kcg_float32 _1_outDistanceToLRBGInMeters_partial;
  /* outDistanceToLRBGInMeters/ */
  kcg_float32 _2_outDistanceToLRBGInMeters_partial;

  outC->WhenBlock1_clock = in_Q_SCALE;
  /* WhenBlock1: */
  switch (outC->WhenBlock1_clock) {
    case Q_SCALE_10_m_scale :
      outC->_L5_Q_SCALE_10_m_scale_WhenBlock1 = inDistanceToLRBG;
      outC->_L6_Q_SCALE_10_m_scale_WhenBlock1 =
        /* WhenBlock1:Q_SCALE_10_m_scale:_L6= */(kcg_float32)
          outC->_L5_Q_SCALE_10_m_scale_WhenBlock1;
      outC->_L3_Q_SCALE_10_m_scale_WhenBlock1 = kcg_lit_float32(10.0);
      outC->_L4_Q_SCALE_10_m_scale_WhenBlock1 =
        outC->_L6_Q_SCALE_10_m_scale_WhenBlock1 *
        outC->_L3_Q_SCALE_10_m_scale_WhenBlock1;
      _2_outDistanceToLRBGInMeters_partial = outC->_L4_Q_SCALE_10_m_scale_WhenBlock1;
      outC->outDistanceToLRBGInMeters = _2_outDistanceToLRBGInMeters_partial;
      break;
    case Q_SCALE_1_m_scale :
      outC->_L1_Q_SCALE_1_m_scale_WhenBlock1 = inDistanceToLRBG;
      outC->_L2_Q_SCALE_1_m_scale_WhenBlock1 =
        /* WhenBlock1:Q_SCALE_1_m_scale:_L2= */(kcg_float32)
          outC->_L1_Q_SCALE_1_m_scale_WhenBlock1;
      outDistanceToLRBGInMeters_partial = outC->_L2_Q_SCALE_1_m_scale_WhenBlock1;
      outC->outDistanceToLRBGInMeters = outDistanceToLRBGInMeters_partial;
      break;
    case Q_SCALE_10_cm_scale :
      outC->_L4_Q_SCALE_10_cm_scale_WhenBlock1 = kcg_lit_float32(0.1);
      outC->_L1_Q_SCALE_10_cm_scale_WhenBlock1 = inDistanceToLRBG;
      outC->_L2_Q_SCALE_10_cm_scale_WhenBlock1 =
        /* WhenBlock1:Q_SCALE_10_cm_scale:_L2= */(kcg_float32)
          outC->_L1_Q_SCALE_10_cm_scale_WhenBlock1;
      outC->_L3_Q_SCALE_10_cm_scale_WhenBlock1 =
        outC->_L2_Q_SCALE_10_cm_scale_WhenBlock1 *
        outC->_L4_Q_SCALE_10_cm_scale_WhenBlock1;
      _1_outDistanceToLRBGInMeters_partial = outC->_L3_Q_SCALE_10_cm_scale_WhenBlock1;
      outC->outDistanceToLRBGInMeters = _1_outDistanceToLRBGInMeters_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void LRBGDistanceToMeterConver_init_RBC_Converter_Pkg(
  outC_LRBGDistanceToMeterConver_RBC_Converter_Pkg *outC)
{
  outC->WhenBlock1_clock = Q_SCALE_10_cm_scale;
  outC->_L6_Q_SCALE_10_m_scale_WhenBlock1 = kcg_lit_float32(0.0);
  outC->_L5_Q_SCALE_10_m_scale_WhenBlock1 = kcg_lit_int32(0);
  outC->_L4_Q_SCALE_10_m_scale_WhenBlock1 = kcg_lit_float32(0.0);
  outC->_L3_Q_SCALE_10_m_scale_WhenBlock1 = kcg_lit_float32(0.0);
  outC->_L1_Q_SCALE_10_cm_scale_WhenBlock1 = kcg_lit_int32(0);
  outC->_L2_Q_SCALE_10_cm_scale_WhenBlock1 = kcg_lit_float32(0.0);
  outC->_L3_Q_SCALE_10_cm_scale_WhenBlock1 = kcg_lit_float32(0.0);
  outC->_L4_Q_SCALE_10_cm_scale_WhenBlock1 = kcg_lit_float32(0.0);
  outC->_L1_Q_SCALE_1_m_scale_WhenBlock1 = kcg_lit_int32(0);
  outC->_L2_Q_SCALE_1_m_scale_WhenBlock1 = kcg_lit_float32(0.0);
  outC->outDistanceToLRBGInMeters = kcg_lit_float32(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void LRBGDistanceToMeterConver_reset_RBC_Converter_Pkg(
  outC_LRBGDistanceToMeterConver_RBC_Converter_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** LRBGDistanceToMeterConver_RBC_Converter_Pkg.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

