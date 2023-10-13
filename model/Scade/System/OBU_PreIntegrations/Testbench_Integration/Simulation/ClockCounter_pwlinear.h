/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */
#ifndef _ClockCounter_pwlinear_H_
#define _ClockCounter_pwlinear_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int32 /* Count/ */ Count;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_int32 /* _L1/ */ _L1;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* _L2/ */ _L2;
  kcg_int32 /* _L6/ */ _L6;
  kcg_int32 /* _L7/ */ _L7;
  kcg_int32 /* _L8/ */ _L8;
  kcg_int32 /* _L11/ */ _L11;
  kcg_bool /* _L13/ */ _L13;
  kcg_int32 /* _L16/ */ _L16;
} outC_ClockCounter_pwlinear;

/* ===========  node initialization and cycle functions  =========== */
/* pwlinear::ClockCounter/ */
extern void ClockCounter_pwlinear(
  /* Reset/ */
  kcg_bool Reset,
  outC_ClockCounter_pwlinear *outC);

extern void ClockCounter_reset_pwlinear(outC_ClockCounter_pwlinear *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void ClockCounter_init_pwlinear(outC_ClockCounter_pwlinear *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_int32 /* _L1/ */ Context__L1;
  kcg_bool Context_init;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
} SV_ClockCounter_pwlinear;

extern void kcg_save_SV_ClockCounter_pwlinear(
  SV_ClockCounter_pwlinear *SV,
  outC_ClockCounter_pwlinear *outC);
extern void kcg_load_SV_ClockCounter_pwlinear(
  outC_ClockCounter_pwlinear *outC,
  SV_ClockCounter_pwlinear *SV);



#endif /* _ClockCounter_pwlinear_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ClockCounter_pwlinear.h
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

