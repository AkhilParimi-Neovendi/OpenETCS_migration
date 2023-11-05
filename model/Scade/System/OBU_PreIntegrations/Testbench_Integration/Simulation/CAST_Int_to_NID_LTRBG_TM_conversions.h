/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _CAST_Int_to_NID_LTRBG_TM_conversions_H_
#define _CAST_Int_to_NID_LTRBG_TM_conversions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  NID_LTRBG /* nid_ltrbg/ */ nid_ltrbg;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* _L1/ */ _L1;
  kcg_int32 /* _L5/ */ _L5;
  kcg_bool /* _L4/ */ _L4;
  kcg_int32 /* _L3/ */ _L3;
  kcg_bool /* _L2/ */ _L2;
} outC_CAST_Int_to_NID_LTRBG_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::CAST_Int_to_NID_LTRBG/ */
extern void CAST_Int_to_NID_LTRBG_TM_conversions(
  /* nid_ltrbg_int/ */
  kcg_int32 nid_ltrbg_int,
  outC_CAST_Int_to_NID_LTRBG_TM_conversions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CAST_Int_to_NID_LTRBG_reset_TM_conversions(
  outC_CAST_Int_to_NID_LTRBG_TM_conversions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CAST_Int_to_NID_LTRBG_init_TM_conversions(
  outC_CAST_Int_to_NID_LTRBG_TM_conversions *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CAST_Int_to_NID_LTRBG_TM_conversions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_Int_to_NID_LTRBG_TM_conversions.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

