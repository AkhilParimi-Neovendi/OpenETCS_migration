/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _Decode_NID_LRBG_TM_H_
#define _Decode_NID_LRBG_TM_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  NID_C /* NID_C_out/ */ NID_C_out;
  NID_BG /* NID_BG_out/ */ NID_BG_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  NID_LRBG /* _L1/ */ _L1;
  kcg_int32 /* _L2/ */ _L2;
  kcg_int32 /* _L3/ */ _L3;
  kcg_int32 /* _L4/ */ _L4;
} outC_Decode_NID_LRBG_TM;

/* ===========  node initialization and cycle functions  =========== */
/* TM::Decode_NID_LRBG/ */
extern void Decode_NID_LRBG_TM(
  /* NID_LRBG_in/ */
  NID_LRBG NID_LRBG_in,
  outC_Decode_NID_LRBG_TM *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Decode_NID_LRBG_reset_TM(outC_Decode_NID_LRBG_TM *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Decode_NID_LRBG_init_TM(outC_Decode_NID_LRBG_TM *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Decode_NID_LRBG_TM_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Decode_NID_LRBG_TM.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

