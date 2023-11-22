/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _EVAL_Q_OVERLAP_TA_Lib_internal_H_
#define _EVAL_Q_OVERLAP_TA_Lib_internal_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* q_dp_bool/ */ q_dp_bool;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Q_OVERLAP /* _L1/ */ _L1;
  kcg_bool /* _L2/ */ _L2;
  Q_OVERLAP /* _L3/ */ _L3;
} outC_EVAL_Q_OVERLAP_TA_Lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Lib_internal::EVAL_Q_OVERLAP/ */
extern void EVAL_Q_OVERLAP_TA_Lib_internal(
  /* q_overlap/ */
  Q_OVERLAP q_overlap,
  outC_EVAL_Q_OVERLAP_TA_Lib_internal *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void EVAL_Q_OVERLAP_reset_TA_Lib_internal(
  outC_EVAL_Q_OVERLAP_TA_Lib_internal *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void EVAL_Q_OVERLAP_init_TA_Lib_internal(
  outC_EVAL_Q_OVERLAP_TA_Lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _EVAL_Q_OVERLAP_TA_Lib_internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** EVAL_Q_OVERLAP_TA_Lib_internal.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

