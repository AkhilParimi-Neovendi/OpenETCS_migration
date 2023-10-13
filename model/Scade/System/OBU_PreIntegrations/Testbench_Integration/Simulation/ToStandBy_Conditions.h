/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _ToStandBy_Conditions_H_
#define _ToStandBy_Conditions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Condition2/ */ Condition2;
  kcg_bool /* Condition3/ */ Condition3;
  kcg_bool /* Condition4/ */ Condition4;
  kcg_bool /* Condition19/ */ Condition19;
  kcg_bool /* Condition22/ */ Condition22;
  kcg_bool /* Condition27/ */ Condition27;
  kcg_bool /* Condition28/ */ Condition28;
  kcg_bool /* Condition30/ */ Condition30;
  kcg_bool /* Condition47/ */ Condition47;
  kcg_bool /* End_Of_Mission_Procedure_Req/ */ End_Of_Mission_Procedure_Req;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
  kcg_bool /* _L10/ */ _L10;
  kcg_bool /* _L23/ */ _L23;
  kcg_bool /* _L24/ */ _L24;
  kcg_bool /* _L32/ */ _L32;
  kcg_bool /* _L34/ */ _L34;
  kcg_bool /* _L55/ */ _L55;
  kcg_bool /* _L62/ */ _L62;
  kcg_bool /* _L63/ */ _L63;
  kcg_bool /* _L64/ */ _L64;
  kcg_bool /* _L80/ */ _L80;
  kcg_bool /* _L79/ */ _L79;
  kcg_bool /* _L77/ */ _L77;
  kcg_bool /* _L96/ */ _L96;
  kcg_bool /* _L97/ */ _L97;
  kcg_bool /* _L98/ */ _L98;
  kcg_bool /* _L102/ */ _L102;
  kcg_bool /* _L106/ */ _L106;
  kcg_bool /* _L125/ */ _L125;
  kcg_bool /* _L146/ */ _L146;
  kcg_bool /* _L147/ */ _L147;
  kcg_bool /* _L148/ */ _L148;
  kcg_bool /* _L149/ */ _L149;
  kcg_bool /* _L150/ */ _L150;
  kcg_bool /* _L151/ */ _L151;
} outC_ToStandBy_Conditions;

/* ===========  node initialization and cycle functions  =========== */
/* Conditions::ToStandBy/ */
extern void ToStandBy_Conditions(
  /* Desk_Open/ */
  kcg_bool Desk_Open,
  /* All_Desks_Closed/ */
  kcg_bool All_Desks_Closed,
  /* Train_Standstill/ */
  kcg_bool Train_Standstill,
  /* Train_Req_SL/ */
  kcg_bool Train_Req_SL,
  /* OnBoard_Powered/ */
  kcg_bool OnBoard_Powered,
  /* Train_Permitted_PS/ */
  kcg_bool Train_Permitted_PS,
  /* Train_Permitted_NL/ */
  kcg_bool Train_Permitted_NL,
  /* Continue_Shunting_function_Active/ */
  kcg_bool Continue_Shunting_function_Active,
  /* Driver_Req_Exit_SH/ */
  kcg_bool Driver_Req_Exit_SH,
  /* Stop_Shunting_Stored/ */
  kcg_bool Stop_Shunting_Stored,
  /* On_Going_Mission/ */
  kcg_bool On_Going_Mission,
  outC_ToStandBy_Conditions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ToStandBy_reset_Conditions(outC_ToStandBy_Conditions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ToStandBy_init_Conditions(outC_ToStandBy_Conditions *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ToStandBy_Conditions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ToStandBy_Conditions.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

