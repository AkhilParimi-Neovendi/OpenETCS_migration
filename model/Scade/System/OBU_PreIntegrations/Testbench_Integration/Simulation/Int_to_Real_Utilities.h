/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */
#ifndef _Int_to_Real_Utilities_H_
#define _Int_to_Real_Utilities_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float64 /* real_out/ */ real_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float64 /* _L2/ */ _L2;
  kcg_float64 /* _L3/ */ _L3;
  kcg_float64 /* _L4/ */ _L4;
  kcg_float64 /* _L5/ */ _L5;
  kcg_int64 /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
  kcg_int64 /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
  kcg_float64 /* _L13/ */ _L13;
  kcg_int64 /* _L14/ */ _L14;
} outC_Int_to_Real_Utilities;

/* ===========  node initialization and cycle functions  =========== */
/* Utilities::Int_to_Real/ */
extern void Int_to_Real_Utilities(
  /* int_in/ */
  kcg_int64 int_in,
  /* resolution_factor_in/ */
  kcg_float64 resolution_factor_in,
  /* unit_factor_in/ */
  kcg_float64 unit_factor_in,
  /* max_value/ */
  kcg_int64 max_value,
  /* min_value/ */
  kcg_int64 min_value,
  outC_Int_to_Real_Utilities *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Int_to_Real_reset_Utilities(outC_Int_to_Real_Utilities *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Int_to_Real_init_Utilities(outC_Int_to_Real_Utilities *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Int_to_Real_Utilities_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Int_to_Real_Utilities.h
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

