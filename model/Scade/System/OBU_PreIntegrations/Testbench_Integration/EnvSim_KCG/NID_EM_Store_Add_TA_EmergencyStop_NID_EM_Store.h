/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _NID_EM_Store_Add_TA_EmergencyStop_NID_EM_Store_H_
#define _NID_EM_Store_Add_TA_EmergencyStop_NID_EM_Store_H_

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
  NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store /* _L1/ */ _L1;
  NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store /* _L3/ */ _L3;
  kcg_bool /* _L7/ */ _L7;
  NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store /* _L8/ */ _L8;
  NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store /* _L9/ */ _L9;
  NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store /* _L10/ */ _L10;
  NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store /* _L11/ */ _L11;
} outC_NID_EM_Store_Add_TA_EmergencyStop_NID_EM_Store;

/* ===========  node initialization and cycle functions  =========== */
/* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Add/ */
extern void NID_EM_Store_Add_TA_EmergencyStop_NID_EM_Store(
  /* inAcc/ */
  NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store *inAcc,
  /* inEntry/ */
  NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store *inEntry,
  outC_NID_EM_Store_Add_TA_EmergencyStop_NID_EM_Store *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void NID_EM_Store_Add_reset_TA_EmergencyStop_NID_EM_Store(
  outC_NID_EM_Store_Add_TA_EmergencyStop_NID_EM_Store *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void NID_EM_Store_Add_init_TA_EmergencyStop_NID_EM_Store(
  outC_NID_EM_Store_Add_TA_EmergencyStop_NID_EM_Store *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _NID_EM_Store_Add_TA_EmergencyStop_NID_EM_Store_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** NID_EM_Store_Add_TA_EmergencyStop_NID_EM_Store.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

