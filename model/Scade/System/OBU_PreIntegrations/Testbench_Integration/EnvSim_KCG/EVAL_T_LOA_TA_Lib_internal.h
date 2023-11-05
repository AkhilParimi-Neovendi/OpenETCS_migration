/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _EVAL_T_LOA_TA_Lib_internal_H_
#define _EVAL_T_LOA_TA_Lib_internal_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* t_loa_unlimited/ */ t_loa_unlimited;
  T_internal_Type_Obu_BasicTypes_Pkg /* t_loa_out/ */ t_loa_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P015_OBU_T_TM /* _L1/ */ _L1;
  kcg_int32 /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  kcg_int32 /* _L5/ */ _L5;
  kcg_int32 /* _L6/ */ _L6;
  kcg_int32 /* _L7/ */ _L7;
  kcg_int32 /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
  kcg_int32 /* _L10/ */ _L10;
  T_LOA /* _L11/ */ _L11;
} outC_EVAL_T_LOA_TA_Lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Lib_internal::EVAL_T_LOA/ */
extern void EVAL_T_LOA_TA_Lib_internal(
  /* t_loa/ */
  P015_OBU_T_TM *t_loa,
  outC_EVAL_T_LOA_TA_Lib_internal *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void EVAL_T_LOA_reset_TA_Lib_internal(
  outC_EVAL_T_LOA_TA_Lib_internal *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void EVAL_T_LOA_init_TA_Lib_internal(
  outC_EVAL_T_LOA_TA_Lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _EVAL_T_LOA_TA_Lib_internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** EVAL_T_LOA_TA_Lib_internal.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

