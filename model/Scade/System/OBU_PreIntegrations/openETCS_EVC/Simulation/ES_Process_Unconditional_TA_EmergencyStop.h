/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */
#ifndef _ES_Process_Unconditional_TA_EmergencyStop_H_
#define _ES_Process_Unconditional_TA_EmergencyStop_H_

#include "kcg_types.h"
#include "Manage_NID_EM_Store_TA_EmergencyStop_NID_EM_Store.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* uesActive/ */ uesActive;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store /* store/ */ store;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Manage_NID_EM_Store_TA_EmergencyStop_NID_EM_Store /* IfBlock1:then:_L6=(TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store#2)/ */ Context_Manage_NID_EM_Store_2;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* IfBlock1:then:_L6/ */ _L6_then_IfBlock1;
  NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store /* IfBlock1:then:_L3/ */ _L3_then_IfBlock1;
  NID_EM /* IfBlock1:then:_L4/ */ _L4_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L5/ */ _L5_then_IfBlock1;
  NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store /* IfBlock1:else:_L1/ */ _L1_else_IfBlock1;
  kcg_bool /* _L13/ */ _L13;
} outC_ES_Process_Unconditional_TA_EmergencyStop;

/* ===========  node initialization and cycle functions  =========== */
/* TA_EmergencyStop::ES_Process_Unconditional/ */
extern void ES_Process_Unconditional_TA_EmergencyStop(
  /* nid_em/ */
  NID_EM nid_em,
  /* receivedMsg16/ */
  kcg_bool receivedMsg16,
  /* receivedMsg18/ */
  kcg_bool receivedMsg18,
  outC_ES_Process_Unconditional_TA_EmergencyStop *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ES_Process_Unconditional_reset_TA_EmergencyStop(
  outC_ES_Process_Unconditional_TA_EmergencyStop *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ES_Process_Unconditional_init_TA_EmergencyStop(
  outC_ES_Process_Unconditional_TA_EmergencyStop *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ES_Process_Unconditional_TA_EmergencyStop_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ES_Process_Unconditional_TA_EmergencyStop.h
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

