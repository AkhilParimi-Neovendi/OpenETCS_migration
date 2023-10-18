/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _Manage_NID_EM_Store_TA_EmergencyStop_NID_EM_Store_H_
#define _Manage_NID_EM_Store_TA_EmergencyStop_NID_EM_Store_H_

#include "kcg_types.h"
#include "NID_EM_Store_Find_TA_EmergencyStop_NID_EM_Store.h"
#include "NID_EM_Store_Add_TA_EmergencyStop_NID_EM_Store.h"
#include "NID_EM_Store_Remove_TA_EmergencyStop_NID_EM_Store.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* handled/ */ handled;
  NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store /* outStore/ */ outStore;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_NID_EM_Store_Add_TA_EmergencyStop_NID_EM_Store /* IfBlock1:then:_L1=(TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Add#2)/ */ Context_NID_EM_Store_Add_2[8];
  outC_NID_EM_Store_Find_TA_EmergencyStop_NID_EM_Store /* IfBlock1:then:_L15=(TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Find#1)/ */ Context_NID_EM_Store_Find_1[8];
  outC_NID_EM_Store_Remove_TA_EmergencyStop_NID_EM_Store /* IfBlock1:else:then:_L1=(TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Remove#1)/ */ Context_NID_EM_Store_Remove_1[8];
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  _51_array /* IfBlock1:then:_L16/ */ _L16_then_IfBlock1;
  NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store /* IfBlock1:then:_L15/ */ _L15_then_IfBlock1;
  kcg_int64 /* IfBlock1:then:_L11/ */ _L11_then_IfBlock1;
  NID_EM /* IfBlock1:then:_L12/ */ _L12_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L13/ */ _L13_then_IfBlock1;
  _51_array /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store /* IfBlock1:then:_L3/ */ _L3_then_IfBlock1;
  NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store /* IfBlock1:then:_L4/ */ _L4_then_IfBlock1;
  _51_array /* IfBlock1:then:_L5/ */ _L5_then_IfBlock1;
  NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store /* IfBlock1:else:else:_L1/ */ _L1_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:_L2/ */ _L2_else_else_IfBlock1;
  _51_array /* IfBlock1:else:then:_L2/ */ _L2_then_else_IfBlock1;
  NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store /* IfBlock1:else:then:_L1/ */ _L1_then_else_IfBlock1;
  _51_array /* IfBlock1:else:then:_L4/ */ _L4_then_else_IfBlock1;
  NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store /* IfBlock1:else:then:_L3/ */ _L3_then_else_IfBlock1;
  NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store /* IfBlock1:else:then:_L5/ */ _L5_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L8/ */ _L8_then_else_IfBlock1;
  NID_EM /* IfBlock1:else:then:_L9/ */ _L9_then_else_IfBlock1;
  kcg_int64 /* IfBlock1:else:then:_L10/ */ _L10_then_else_IfBlock1;
} outC_Manage_NID_EM_Store_TA_EmergencyStop_NID_EM_Store;

/* ===========  node initialization and cycle functions  =========== */
/* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store/ */
extern void Manage_NID_EM_Store_TA_EmergencyStop_NID_EM_Store(
  /* add/ */
  kcg_bool add,
  /* remove/ */
  kcg_bool remove,
  /* nid_em/ */
  NID_EM nid_em,
  /* inStore/ */
  NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store *inStore,
  outC_Manage_NID_EM_Store_TA_EmergencyStop_NID_EM_Store *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Manage_NID_EM_Store_reset_TA_EmergencyStop_NID_EM_Store(
  outC_Manage_NID_EM_Store_TA_EmergencyStop_NID_EM_Store *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Manage_NID_EM_Store_init_TA_EmergencyStop_NID_EM_Store(
  outC_Manage_NID_EM_Store_TA_EmergencyStop_NID_EM_Store *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Manage_NID_EM_Store_TA_EmergencyStop_NID_EM_Store_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Manage_NID_EM_Store_TA_EmergencyStop_NID_EM_Store.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

