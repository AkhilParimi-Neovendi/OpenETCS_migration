/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */
#ifndef _FlipFlopJK_digital_H_
#define _FlipFlopJK_digital_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Output/ */ Output;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L10/ */ _L10;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L18/ */ _L18;
  kcg_bool /* _L20/ */ _L20;
  kcg_bool /* _L21/ */ _L21;
  kcg_bool /* _L22/ */ _L22;
  kcg_bool /* _L23/ */ _L23;
  kcg_bool /* _L24/ */ _L24;
} outC_FlipFlopJK_digital;

/* ===========  node initialization and cycle functions  =========== */
/* digital::FlipFlopJK/ */
extern void FlipFlopJK_digital(
  /* Set/ */
  kcg_bool Set,
  /* Reset/ */
  kcg_bool Reset,
  /* Init/ */
  kcg_bool Init,
  outC_FlipFlopJK_digital *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void FlipFlopJK_reset_digital(outC_FlipFlopJK_digital *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void FlipFlopJK_init_digital(outC_FlipFlopJK_digital *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* ----------------------  memorised outputs  ---------------------- */
  kcg_bool /* Output/ */ Context_Output;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool Context_init;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
} SV_FlipFlopJK_digital;

extern void kcg_save_SV_FlipFlopJK_digital(
  SV_FlipFlopJK_digital *SV,
  outC_FlipFlopJK_digital *outC);
extern void kcg_load_SV_FlipFlopJK_digital(
  outC_FlipFlopJK_digital *outC,
  SV_FlipFlopJK_digital *SV);



#endif /* _FlipFlopJK_digital_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** FlipFlopJK_digital.h
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */

