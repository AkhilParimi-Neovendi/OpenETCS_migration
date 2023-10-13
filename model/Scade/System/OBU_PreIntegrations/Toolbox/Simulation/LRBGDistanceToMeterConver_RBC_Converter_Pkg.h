/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */
#ifndef _LRBGDistanceToMeterConver_RBC_Converter_Pkg_H_
#define _LRBGDistanceToMeterConver_RBC_Converter_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float64 /* outDistanceToLRBGInMeters/ */ outDistanceToLRBGInMeters;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  Q_SCALE /* WhenBlock1: */ WhenBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float64 /* WhenBlock1:Q_SCALE_1_m_scale:_L2/ */ _L2_Q_SCALE_1_m_scale_WhenBlock1;
  D_LRBG /* WhenBlock1:Q_SCALE_1_m_scale:_L1/ */ _L1_Q_SCALE_1_m_scale_WhenBlock1;
  kcg_float64 /* WhenBlock1:Q_SCALE_10_cm_scale:_L4/ */ _L4_Q_SCALE_10_cm_scale_WhenBlock1;
  kcg_float64 /* WhenBlock1:Q_SCALE_10_cm_scale:_L3/ */ _L3_Q_SCALE_10_cm_scale_WhenBlock1;
  kcg_float64 /* WhenBlock1:Q_SCALE_10_cm_scale:_L2/ */ _L2_Q_SCALE_10_cm_scale_WhenBlock1;
  D_LRBG /* WhenBlock1:Q_SCALE_10_cm_scale:_L1/ */ _L1_Q_SCALE_10_cm_scale_WhenBlock1;
  kcg_float64 /* WhenBlock1:Q_SCALE_10_m_scale:_L3/ */ _L3_Q_SCALE_10_m_scale_WhenBlock1;
  kcg_float64 /* WhenBlock1:Q_SCALE_10_m_scale:_L4/ */ _L4_Q_SCALE_10_m_scale_WhenBlock1;
  D_LRBG /* WhenBlock1:Q_SCALE_10_m_scale:_L5/ */ _L5_Q_SCALE_10_m_scale_WhenBlock1;
  kcg_float64 /* WhenBlock1:Q_SCALE_10_m_scale:_L6/ */ _L6_Q_SCALE_10_m_scale_WhenBlock1;
} outC_LRBGDistanceToMeterConver_RBC_Converter_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Converter_Pkg::LRBGDistanceToMeterConverter__Convert/ */
extern void LRBGDistanceToMeterConver_RBC_Converter_Pkg(
  /* inDistanceToLRBG/ */
  D_LRBG inDistanceToLRBG,
  /* in_Q_SCALE/ */
  Q_SCALE in_Q_SCALE,
  outC_LRBGDistanceToMeterConver_RBC_Converter_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void LRBGDistanceToMeterConver_reset_RBC_Converter_Pkg(
  outC_LRBGDistanceToMeterConver_RBC_Converter_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void LRBGDistanceToMeterConver_init_RBC_Converter_Pkg(
  outC_LRBGDistanceToMeterConver_RBC_Converter_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _LRBGDistanceToMeterConver_RBC_Converter_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** LRBGDistanceToMeterConver_RBC_Converter_Pkg.h
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */

