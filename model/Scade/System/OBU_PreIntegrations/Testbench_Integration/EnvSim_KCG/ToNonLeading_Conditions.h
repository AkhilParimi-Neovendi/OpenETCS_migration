/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _ToNonLeading_Conditions_H_
#define _ToNonLeading_Conditions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Condition46/ */ Condition46;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L11/ */ _L11;
} outC_ToNonLeading_Conditions;

/* ===========  node initialization and cycle functions  =========== */
/* Conditions::ToNonLeading/ */
extern void ToNonLeading_Conditions(
  /* Train_Permitted_NL/ */
  kcg_bool Train_Permitted_NL,
  /* Train_Standstill/ */
  kcg_bool Train_Standstill,
  /* Driver_Req_NL/ */
  kcg_bool Driver_Req_NL,
  outC_ToNonLeading_Conditions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ToNonLeading_reset_Conditions(outC_ToNonLeading_Conditions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ToNonLeading_init_Conditions(outC_ToNonLeading_Conditions *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ToNonLeading_Conditions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ToNonLeading_Conditions.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

