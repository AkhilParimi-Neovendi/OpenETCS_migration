/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _Counter_pwlinear_int64_H_
#define _Counter_pwlinear_int64_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int64 /* Count/ */ Count_int64;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_int64 /* _L9/ */ _L9_int64;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int64 /* _L2/ */ _L2_int64;
  kcg_bool /* _L3/ */ _L3_int64;
  kcg_int64 /* _L4/ */ _L4_int64;
  kcg_int64 /* _L18/ */ _L18_int64;
  kcg_int64 /* _L47/ */ _L47_int64;
} outC_Counter_pwlinear_int64;

/* ===========  node initialization and cycle functions  =========== */
/* pwlinear::Counter/ */
extern void Counter_pwlinear_int64(
  /* Incr/ */
  kcg_int64 Incr_int64,
  /* Reset/ */
  kcg_bool Reset_int64,
  outC_Counter_pwlinear_int64 *outC);

extern void Counter_reset_pwlinear_int64(outC_Counter_pwlinear_int64 *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void Counter_init_pwlinear_int64(outC_Counter_pwlinear_int64 *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_int64 /* _L9/ */ Context__L9;
  kcg_bool Context_init;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
} SV_Counter_pwlinear_int64;

extern void kcg_save_SV_Counter_pwlinear_int64(
  SV_Counter_pwlinear_int64 *SV,
  outC_Counter_pwlinear_int64 *outC);
extern void kcg_load_SV_Counter_pwlinear_int64(
  outC_Counter_pwlinear_int64 *outC,
  SV_Counter_pwlinear_int64 *SV);



#endif /* _Counter_pwlinear_int64_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Counter_pwlinear_int64.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

