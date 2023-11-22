/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */
#ifndef _NID_EM_Store_Remove_TA_EmergencyStop_NID_EM_Store_H_
#define _NID_EM_Store_Remove_TA_EmergencyStop_NID_EM_Store_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store /* outAcc/ */ outAcc;
  NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store /* outEntry/ */ outEntry;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store /* _L6/ */ _L6;
  NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store /* _L7/ */ _L7;
  NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store /* _L5/ */ _L5;
  NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store /* _L4/ */ _L4;
  NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store /* _L3/ */ _L3;
  NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store /* _L2/ */ _L2;
  kcg_bool /* _L1/ */ _L1;
} outC_NID_EM_Store_Remove_TA_EmergencyStop_NID_EM_Store;

/* ===========  node initialization and cycle functions  =========== */
/* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Remove/ */
extern void NID_EM_Store_Remove_TA_EmergencyStop_NID_EM_Store(
  /* inAcc/ */
  NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store *inAcc,
  /* inEntry/ */
  NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store *inEntry,
  outC_NID_EM_Store_Remove_TA_EmergencyStop_NID_EM_Store *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void NID_EM_Store_Remove_reset_TA_EmergencyStop_NID_EM_Store(
  outC_NID_EM_Store_Remove_TA_EmergencyStop_NID_EM_Store *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void NID_EM_Store_Remove_init_TA_EmergencyStop_NID_EM_Store(
  outC_NID_EM_Store_Remove_TA_EmergencyStop_NID_EM_Store *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _NID_EM_Store_Remove_TA_EmergencyStop_NID_EM_Store_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** NID_EM_Store_Remove_TA_EmergencyStop_NID_EM_Store.h
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

