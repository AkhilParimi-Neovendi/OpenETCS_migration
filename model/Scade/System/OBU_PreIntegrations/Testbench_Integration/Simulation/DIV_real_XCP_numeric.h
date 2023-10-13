/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:58
*************************************************************$ */
#ifndef _DIV_real_XCP_numeric_H_
#define _DIV_real_XCP_numeric_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float64 /* Result/ */ Result;
  kcg_bool /* Exception/ */ Exception;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float64 /* _L1/ */ _L1;
  kcg_float64 /* _L2/ */ _L2;
  kcg_float64 /* _L3/ */ _L3;
  kcg_float64 /* _L4/ */ _L4;
  kcg_float64 /* _L5/ */ _L5;
  kcg_float64 /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
} outC_DIV_real_XCP_numeric;

/* ===========  node initialization and cycle functions  =========== */
/* XCP_numeric::DIV_real/ */
extern void DIV_real_XCP_numeric(
  /* Dividend/ */
  kcg_float64 Dividend,
  /* Divisor/ */
  kcg_float64 Divisor,
  /* Default/ */
  kcg_float64 Default,
  outC_DIV_real_XCP_numeric *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void DIV_real_reset_XCP_numeric(outC_DIV_real_XCP_numeric *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void DIV_real_init_XCP_numeric(outC_DIV_real_XCP_numeric *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _DIV_real_XCP_numeric_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** DIV_real_XCP_numeric.h
** Generation date: 2023-10-12T15:09:58
*************************************************************$ */

