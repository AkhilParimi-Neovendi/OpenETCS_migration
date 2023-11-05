/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _EVAL_Q_GDIR_TA_Lib_internal_H_
#define _EVAL_Q_GDIR_TA_Lib_internal_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  G_internal_Type_Obu_BasicTypes_Pkg /* gradient/ */ gradient;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Q_GDIR /* _L1/ */ _L1;
  G_A /* _L2/ */ _L2;
  Q_GDIR /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  kcg_int32 /* _L5/ */ _L5;
  kcg_int32 /* _L6/ */ _L6;
  kcg_int32 /* _L7/ */ _L7;
  kcg_int32 /* _L8/ */ _L8;
  kcg_bool /* _L10/ */ _L10;
  kcg_int32 /* _L11/ */ _L11;
  kcg_int32 /* _L13/ */ _L13;
} outC_EVAL_Q_GDIR_TA_Lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Lib_internal::EVAL_Q_GDIR/ */
extern void EVAL_Q_GDIR_TA_Lib_internal(
  /* q_gdir/ */
  Q_GDIR q_gdir,
  /* g_a/ */
  G_A g_a,
  outC_EVAL_Q_GDIR_TA_Lib_internal *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void EVAL_Q_GDIR_reset_TA_Lib_internal(
  outC_EVAL_Q_GDIR_TA_Lib_internal *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void EVAL_Q_GDIR_init_TA_Lib_internal(
  outC_EVAL_Q_GDIR_TA_Lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _EVAL_Q_GDIR_TA_Lib_internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** EVAL_Q_GDIR_TA_Lib_internal.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

