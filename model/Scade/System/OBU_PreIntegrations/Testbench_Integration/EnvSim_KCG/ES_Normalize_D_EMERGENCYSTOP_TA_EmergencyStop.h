/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _ES_Normalize_D_EMERGENCYSTOP_TA_EmergencyStop_H_
#define _ES_Normalize_D_EMERGENCYSTOP_TA_EmergencyStop_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  L_internal_Type_Obu_BasicTypes_Pkg /* d_emergencystop_normalized/ */ d_emergencystop_normalized;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  Q_SCALE /* WhenBlock1: */ WhenBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* WhenBlock1:Q_SCALE_10_cm_scale:_L1/ */ _L1_Q_SCALE_10_cm_scale_WhenBlock1;
  kcg_int32 /* WhenBlock1:Q_SCALE_10_cm_scale:_L2/ */ _L2_Q_SCALE_10_cm_scale_WhenBlock1;
  D_EMERGENCYSTOP /* WhenBlock1:Q_SCALE_10_cm_scale:_L3/ */ _L3_Q_SCALE_10_cm_scale_WhenBlock1;
  D_EMERGENCYSTOP /* WhenBlock1:Q_SCALE_1_m_scale:_L1/ */ _L1_Q_SCALE_1_m_scale_WhenBlock1;
  kcg_int32 /* WhenBlock1:Q_SCALE_1_m_scale:_L2/ */ _L2_Q_SCALE_1_m_scale_WhenBlock1;
  kcg_int32 /* WhenBlock1:Q_SCALE_1_m_scale:_L3/ */ _L3_Q_SCALE_1_m_scale_WhenBlock1;
  D_EMERGENCYSTOP /* WhenBlock1:Q_SCALE_10_m_scale:_L1/ */ _L1_Q_SCALE_10_m_scale_WhenBlock1;
  kcg_int32 /* WhenBlock1:Q_SCALE_10_m_scale:_L2/ */ _L2_Q_SCALE_10_m_scale_WhenBlock1;
  kcg_int32 /* WhenBlock1:Q_SCALE_10_m_scale:_L3/ */ _L3_Q_SCALE_10_m_scale_WhenBlock1;
} outC_ES_Normalize_D_EMERGENCYSTOP_TA_EmergencyStop;

/* ===========  node initialization and cycle functions  =========== */
/* TA_EmergencyStop::ES_Normalize_D_EMERGENCYSTOP/ */
extern void ES_Normalize_D_EMERGENCYSTOP_TA_EmergencyStop(
  /* q_scale/ */
  Q_SCALE q_scale,
  /* d_emergencystop/ */
  D_EMERGENCYSTOP d_emergencystop,
  outC_ES_Normalize_D_EMERGENCYSTOP_TA_EmergencyStop *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ES_Normalize_D_EMERGENCYSTOP_reset_TA_EmergencyStop(
  outC_ES_Normalize_D_EMERGENCYSTOP_TA_EmergencyStop *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ES_Normalize_D_EMERGENCYSTOP_init_TA_EmergencyStop(
  outC_ES_Normalize_D_EMERGENCYSTOP_TA_EmergencyStop *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ES_Normalize_D_EMERGENCYSTOP_TA_EmergencyStop_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ES_Normalize_D_EMERGENCYSTOP_TA_EmergencyStop.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

