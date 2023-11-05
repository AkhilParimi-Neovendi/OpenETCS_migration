/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _Square_mathext_float32_H_
#define _Square_mathext_float32_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float32 /* Square_Out/ */ Square_Out_float32;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float32 /* _L1/ */ _L1_float32;
  kcg_float32 /* _L2/ */ _L2_float32;
} outC_Square_mathext_float32;

/* ===========  node initialization and cycle functions  =========== */
/* mathext::Square/ */
extern void Square_mathext_float32(
  /* Square_In/ */
  kcg_float32 Square_In_float32,
  outC_Square_mathext_float32 *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Square_reset_mathext_float32(outC_Square_mathext_float32 *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Square_init_mathext_float32(outC_Square_mathext_float32 *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Square_mathext_float32_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Square_mathext_float32.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

