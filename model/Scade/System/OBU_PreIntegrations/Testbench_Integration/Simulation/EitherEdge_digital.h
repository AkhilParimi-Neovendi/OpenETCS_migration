/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:58
*************************************************************$ */
#ifndef _EitherEdge_digital_H_
#define _EitherEdge_digital_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* EE_Output/ */ EE_Output;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_bool /* _L1/ */ _L1;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
} outC_EitherEdge_digital;

/* ===========  node initialization and cycle functions  =========== */
/* digital::EitherEdge/ */
extern void EitherEdge_digital(
  /* EE_Input/ */
  kcg_bool EE_Input,
  outC_EitherEdge_digital *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void EitherEdge_reset_digital(outC_EitherEdge_digital *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void EitherEdge_init_digital(outC_EitherEdge_digital *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* _L1/ */ Context__L1;
  kcg_bool Context_init;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
} SV_EitherEdge_digital;

extern void kcg_save_SV_EitherEdge_digital(
  SV_EitherEdge_digital *SV,
  outC_EitherEdge_digital *outC);
extern void kcg_load_SV_EitherEdge_digital(
  outC_EitherEdge_digital *outC,
  SV_EitherEdge_digital *SV);



#endif /* _EitherEdge_digital_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** EitherEdge_digital.h
** Generation date: 2023-10-12T15:09:58
*************************************************************$ */

