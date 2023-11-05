/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _ES_Process_Conditional_TA_EmergencyStop_H_
#define _ES_Process_Conditional_TA_EmergencyStop_H_

#include "kcg_types.h"
#include "ES_AcceptOrReject_CES_TA_EmergencyStop.h"
#include "Manage_NID_EM_Store_TA_EmergencyStop_NID_EM_Store.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* cesAccepted/ */ cesAccepted;
  kcg_bool /* updateEOA/ */ updateEOA;
  L_internal_Type_Obu_BasicTypes_Pkg /* newEOA/ */ newEOA;
  kcg_bool /* cesActive/ */ cesActive;
  kcg_bool /* cesRevoked/ */ cesRevoked;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store /* store/ */ store;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Manage_NID_EM_Store_TA_EmergencyStop_NID_EM_Store /* IfBlock1:then:_L15=(TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store#1)/ */ Context_Manage_NID_EM_Store_1;
  outC_ES_AcceptOrReject_CES_TA_EmergencyStop /* IfBlock1:then:_L1=(TA_EmergencyStop::ES_AcceptOrReject_CES#2)/ */ Context_ES_AcceptOrReject_CES_2;
  outC_Manage_NID_EM_Store_TA_EmergencyStop_NID_EM_Store /* IfBlock1:else:then:_L6=(TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store#2)/ */ Context_Manage_NID_EM_Store_2;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* IfBlock1:then:_L15/ */ _L15_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L14/ */ _L14_then_IfBlock1;
  NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store /* IfBlock1:then:_L13/ */ _L13_then_IfBlock1;
  NID_EM /* IfBlock1:then:_L12/ */ _L12_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L11/ */ _L11_then_IfBlock1;
  NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store /* IfBlock1:then:_L10/ */ _L10_then_IfBlock1;
  L_internal_Type_Obu_BasicTypes_Pkg /* IfBlock1:then:_L9/ */ _L9_then_IfBlock1;
  trainPosition_T_TrainPosition_Types_Pck /* IfBlock1:then:_L8/ */ _L8_then_IfBlock1;
  D_EMERGENCYSTOP /* IfBlock1:then:_L7/ */ _L7_then_IfBlock1;
  Q_DIR /* IfBlock1:then:_L6/ */ _L6_then_IfBlock1;
  D_REF /* IfBlock1:then:_L5/ */ _L5_then_IfBlock1;
  Q_SCALE /* IfBlock1:then:_L4/ */ _L4_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  L_internal_Type_Obu_BasicTypes_Pkg /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L3/ */ _L3_then_IfBlock1;
  L_internal_Type_Obu_BasicTypes_Pkg /* IfBlock1:else:else:_L4/ */ _L4_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:_L3/ */ _L3_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:_L5/ */ _L5_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:_L6/ */ _L6_else_else_IfBlock1;
  NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store /* IfBlock1:else:then:_L1/ */ _L1_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L2/ */ _L2_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L3/ */ _L3_then_else_IfBlock1;
  NID_EM /* IfBlock1:else:then:_L4/ */ _L4_then_else_IfBlock1;
  NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store /* IfBlock1:else:then:_L5/ */ _L5_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L6/ */ _L6_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L7/ */ _L7_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L8/ */ _L8_then_else_IfBlock1;
  L_internal_Type_Obu_BasicTypes_Pkg /* IfBlock1:else:then:_L10/ */ _L10_then_else_IfBlock1;
  kcg_bool /* _L1/ */ _L1;
} outC_ES_Process_Conditional_TA_EmergencyStop;

/* ===========  node initialization and cycle functions  =========== */
/* TA_EmergencyStop::ES_Process_Conditional/ */
extern void ES_Process_Conditional_TA_EmergencyStop(
  /* nid_em/ */
  NID_EM nid_em,
  /* q_scale/ */
  Q_SCALE q_scale,
  /* d_ref/ */
  D_REF d_ref,
  /* q_dir/ */
  Q_DIR q_dir,
  /* d_emergencystop/ */
  D_EMERGENCYSTOP d_emergencystop,
  /* receivedMsg15/ */
  kcg_bool receivedMsg15,
  /* receivedMsg18/ */
  kcg_bool receivedMsg18,
  /* TrainPositionIn/ */
  trainPosition_T_TrainPosition_Types_Pck *TrainPositionIn,
  /* currentEOA/ */
  L_internal_Type_Obu_BasicTypes_Pkg currentEOA,
  outC_ES_Process_Conditional_TA_EmergencyStop *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ES_Process_Conditional_reset_TA_EmergencyStop(
  outC_ES_Process_Conditional_TA_EmergencyStop *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ES_Process_Conditional_init_TA_EmergencyStop(
  outC_ES_Process_Conditional_TA_EmergencyStop *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store /* store/ */ Context_store;
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
} SV_ES_Process_Conditional_TA_EmergencyStop;

extern void kcg_save_SV_ES_Process_Conditional_TA_EmergencyStop(
  SV_ES_Process_Conditional_TA_EmergencyStop *SV,
  outC_ES_Process_Conditional_TA_EmergencyStop *outC);
extern void kcg_load_SV_ES_Process_Conditional_TA_EmergencyStop(
  outC_ES_Process_Conditional_TA_EmergencyStop *outC,
  SV_ES_Process_Conditional_TA_EmergencyStop *SV);



#endif /* _ES_Process_Conditional_TA_EmergencyStop_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ES_Process_Conditional_TA_EmergencyStop.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

