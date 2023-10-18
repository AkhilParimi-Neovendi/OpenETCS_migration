/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _CAST_Int_to_V_REVERSE_TM_conversions_H_
#define _CAST_Int_to_V_REVERSE_TM_conversions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  V_REVERSE /* v_reverse/ */ v_reverse;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int64 /* _L1/ */ _L1;
  kcg_bool /* _L9/ */ _L9;
  kcg_bool /* _L8/ */ _L8;
  kcg_int64 /* _L7/ */ _L7;
  kcg_int64 /* _L6/ */ _L6;
  kcg_int64 /* _L11/ */ _L11;
  kcg_int64 /* _L12/ */ _L12;
} outC_CAST_Int_to_V_REVERSE_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::CAST_Int_to_V_REVERSE/ */
extern void CAST_Int_to_V_REVERSE_TM_conversions(
  /* v_reverse_int/ */
  kcg_int64 v_reverse_int,
  outC_CAST_Int_to_V_REVERSE_TM_conversions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CAST_Int_to_V_REVERSE_reset_TM_conversions(
  outC_CAST_Int_to_V_REVERSE_TM_conversions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CAST_Int_to_V_REVERSE_init_TM_conversions(
  outC_CAST_Int_to_V_REVERSE_TM_conversions *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CAST_Int_to_V_REVERSE_TM_conversions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_Int_to_V_REVERSE_TM_conversions.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

