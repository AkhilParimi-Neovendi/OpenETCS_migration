/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _Int2BoolVectElt_digital_int32_H_
#define _Int2BoolVectElt_digital_int32_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int32 /* AccOut/ */ AccOut_int32;
  kcg_bool /* bi/ */ bi_int32;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* _L1/ */ _L1_int32;
  kcg_int32 /* _L9/ */ _L9_int32;
  kcg_int32 /* _L10/ */ _L10_int32;
  kcg_int32 /* _L11/ */ _L11_int32;
  kcg_bool /* _L12/ */ _L12_int32;
  kcg_int32 /* _L13/ */ _L13_int32;
} outC_Int2BoolVectElt_digital_int32;

/* ===========  node initialization and cycle functions  =========== */
/* digital::Int2BoolVectElt/ */
extern void Int2BoolVectElt_digital_int32(
  /* Acc/ */
  kcg_int32 Acc_int32,
  outC_Int2BoolVectElt_digital_int32 *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Int2BoolVectElt_reset_digital_int32(
  outC_Int2BoolVectElt_digital_int32 *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Int2BoolVectElt_init_digital_int32(
  outC_Int2BoolVectElt_digital_int32 *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Int2BoolVectElt_digital_int32_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Int2BoolVectElt_digital_int32.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

