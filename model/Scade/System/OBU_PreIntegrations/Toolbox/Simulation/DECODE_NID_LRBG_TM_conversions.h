/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */
#ifndef _DECODE_NID_LRBG_TM_conversions_H_
#define _DECODE_NID_LRBG_TM_conversions_H_

#include "kcg_types.h"
#include "CAST_Int_to_NID_BG_TM_conversions.h"
#include "CAST_Int_to_NID_C_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  NID_C /* nid_c/ */ nid_c;
  NID_BG /* nid_bg/ */ nid_bg;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_Int_to_NID_BG_TM_conversions /* _L3=(TM_conversions::CAST_Int_to_NID_BG#1)/ */ Context_CAST_Int_to_NID_BG_1;
  outC_CAST_Int_to_NID_C_TM_conversions /* _L2=(TM_conversions::CAST_Int_to_NID_C#1)/ */ Context_CAST_Int_to_NID_C_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  NID_LRBG /* _L1/ */ _L1;
  NID_C /* _L2/ */ _L2;
  NID_BG /* _L3/ */ _L3;
  kcg_int64 /* _L4/ */ _L4;
  kcg_int64 /* _L5/ */ _L5;
  kcg_int64 /* _L7/ */ _L7;
  NID_LRBG /* _L6/ */ _L6;
} outC_DECODE_NID_LRBG_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::DECODE_NID_LRBG/ */
extern void DECODE_NID_LRBG_TM_conversions(
  /* nid_lrbg/ */
  NID_LRBG nid_lrbg,
  outC_DECODE_NID_LRBG_TM_conversions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void DECODE_NID_LRBG_reset_TM_conversions(
  outC_DECODE_NID_LRBG_TM_conversions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void DECODE_NID_LRBG_init_TM_conversions(
  outC_DECODE_NID_LRBG_TM_conversions *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _DECODE_NID_LRBG_TM_conversions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** DECODE_NID_LRBG_TM_conversions.h
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */

