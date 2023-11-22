/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _EVAL_V_Release_TA_Lib_internal_H_
#define _EVAL_V_Release_TA_Lib_internal_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  V_internal_Type_Obu_BasicTypes_Pkg /* V_out/ */ V_out;
  kcg_bool /* calc_onboard/ */ calc_onboard;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* _L1/ */ _L1;
  kcg_bool /* _L2/ */ _L2;
  kcg_int32 /* _L3/ */ _L3;
  kcg_int32 /* _L4/ */ _L4;
  kcg_int32 /* _L5/ */ _L5;
  kcg_int32 /* _L6/ */ _L6;
  kcg_int32 /* _L7/ */ _L7;
  kcg_bool /* _L9/ */ _L9;
  kcg_int32 /* _L8/ */ _L8;
  kcg_int32 /* _L10/ */ _L10;
  kcg_int32 /* _L11/ */ _L11;
} outC_EVAL_V_Release_TA_Lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Lib_internal::EVAL_V_Release/ */
extern void EVAL_V_Release_TA_Lib_internal(
  /* V_in/ */
  kcg_int32 V_in,
  /* V_NV_in/ */
  kcg_int32 V_NV_in,
  outC_EVAL_V_Release_TA_Lib_internal *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void EVAL_V_Release_reset_TA_Lib_internal(
  outC_EVAL_V_Release_TA_Lib_internal *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void EVAL_V_Release_init_TA_Lib_internal(
  outC_EVAL_V_Release_TA_Lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _EVAL_V_Release_TA_Lib_internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** EVAL_V_Release_TA_Lib_internal.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

