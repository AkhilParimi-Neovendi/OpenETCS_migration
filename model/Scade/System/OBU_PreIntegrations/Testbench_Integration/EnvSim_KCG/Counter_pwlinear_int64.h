/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _Counter_pwlinear_int32_H_
#define _Counter_pwlinear_int32_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int32 /* Count/ */ Count_int32;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_int32 /* _L9/ */ _L9_int32;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* _L2/ */ _L2_int32;
  kcg_bool /* _L3/ */ _L3_int32;
  kcg_int32 /* _L4/ */ _L4_int32;
  kcg_int32 /* _L18/ */ _L18_int32;
  kcg_int32 /* _L47/ */ _L47_int32;
} outC_Counter_pwlinear_int32;

/* ===========  node initialization and cycle functions  =========== */
/* pwlinear::Counter/ */
extern void Counter_pwlinear_int32(
  /* Incr/ */
  kcg_int32 Incr_int32,
  /* Reset/ */
  kcg_bool Reset_int32,
  outC_Counter_pwlinear_int32 *outC);

extern void Counter_reset_pwlinear_int32(outC_Counter_pwlinear_int32 *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void Counter_init_pwlinear_int32(outC_Counter_pwlinear_int32 *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Counter_pwlinear_int32_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Counter_pwlinear_int32.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

