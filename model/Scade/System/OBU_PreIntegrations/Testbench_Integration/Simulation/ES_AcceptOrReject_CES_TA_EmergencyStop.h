/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _ES_AcceptOrReject_CES_TA_EmergencyStop_H_
#define _ES_AcceptOrReject_CES_TA_EmergencyStop_H_

#include "kcg_types.h"
#include "ES_Normalize_D_EMERGENCYSTOP_TA_EmergencyStop.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* updateEOA/ */ updateEOA;
  L_internal_Type_Obu_BasicTypes_Pkg /* newEOA/ */ newEOA;
  kcg_bool /* cesAccepted/ */ cesAccepted;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_ES_Normalize_D_EMERGENCYSTOP_TA_EmergencyStop /* _L8=(TA_EmergencyStop::ES_Normalize_D_EMERGENCYSTOP#1)/ */ Context_ES_Normalize_D_EMERGENCYSTOP_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Q_SCALE /* _L1/ */ _L1;
  D_REF /* _L2/ */ _L2;
  Q_DIR /* _L3/ */ _L3;
  D_EMERGENCYSTOP /* _L4/ */ _L4;
  trainPosition_T_TrainPosition_Types_Pck /* _L5/ */ _L5;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L8/ */ _L8;
  Location_T_Obu_BasicTypes_Pkg /* _L9/ */ _L9;
  kcg_bool /* _L12/ */ _L12;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L13/ */ _L13;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L14/ */ _L14;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L16/ */ _L16;
  kcg_bool /* _L17/ */ _L17;
  kcg_bool /* _L18/ */ _L18;
} outC_ES_AcceptOrReject_CES_TA_EmergencyStop;

/* ===========  node initialization and cycle functions  =========== */
/* TA_EmergencyStop::ES_AcceptOrReject_CES/ */
extern void ES_AcceptOrReject_CES_TA_EmergencyStop(
  /* q_scale/ */
  Q_SCALE q_scale,
  /* d_ref/ */
  D_REF d_ref,
  /* q_dir/ */
  Q_DIR q_dir,
  /* d_emergencystop/ */
  D_EMERGENCYSTOP d_emergencystop,
  /* TrainPositionIn/ */
  trainPosition_T_TrainPosition_Types_Pck *TrainPositionIn,
  /* currentEOA/ */
  L_internal_Type_Obu_BasicTypes_Pkg currentEOA,
  outC_ES_AcceptOrReject_CES_TA_EmergencyStop *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ES_AcceptOrReject_CES_reset_TA_EmergencyStop(
  outC_ES_AcceptOrReject_CES_TA_EmergencyStop *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ES_AcceptOrReject_CES_init_TA_EmergencyStop(
  outC_ES_AcceptOrReject_CES_TA_EmergencyStop *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ES_AcceptOrReject_CES_TA_EmergencyStop_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ES_AcceptOrReject_CES_TA_EmergencyStop.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

