/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */
#ifndef _Int_Check_Utilities_H_
#define _Int_Check_Utilities_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* error/ */ error;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int64 /* _L1/ */ _L1;
  kcg_int64 /* _L2/ */ _L2;
  kcg_int64 /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
} outC_Int_Check_Utilities;

/* ===========  node initialization and cycle functions  =========== */
/* Utilities::Int_Check/ */
extern void Int_Check_Utilities(
  /* int_in/ */
  kcg_int64 int_in,
  /* max_value/ */
  kcg_int64 max_value,
  /* min_value/ */
  kcg_int64 min_value,
  outC_Int_Check_Utilities *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Int_Check_reset_Utilities(outC_Int_Check_Utilities *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Int_Check_init_Utilities(outC_Int_Check_Utilities *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Int_Check_Utilities_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Int_Check_Utilities.h
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */

