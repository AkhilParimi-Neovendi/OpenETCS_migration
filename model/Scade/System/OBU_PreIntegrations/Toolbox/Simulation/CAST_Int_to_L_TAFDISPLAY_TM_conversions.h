/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */
#ifndef _CAST_Int_to_L_TAFDISPLAY_TM_conversions_H_
#define _CAST_Int_to_L_TAFDISPLAY_TM_conversions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  L_TAFDISPLAY /* l_tafdisplay/ */ l_tafdisplay;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* _L1/ */ _L1;
  kcg_bool /* _L9/ */ _L9;
  kcg_bool /* _L8/ */ _L8;
  kcg_int32 /* _L10/ */ _L10;
  kcg_int32 /* _L11/ */ _L11;
} outC_CAST_Int_to_L_TAFDISPLAY_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::CAST_Int_to_L_TAFDISPLAY/ */
extern void CAST_Int_to_L_TAFDISPLAY_TM_conversions(
  /* l_tafdisplay_int/ */
  kcg_int32 l_tafdisplay_int,
  outC_CAST_Int_to_L_TAFDISPLAY_TM_conversions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CAST_Int_to_L_TAFDISPLAY_reset_TM_conversions(
  outC_CAST_Int_to_L_TAFDISPLAY_TM_conversions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CAST_Int_to_L_TAFDISPLAY_init_TM_conversions(
  outC_CAST_Int_to_L_TAFDISPLAY_TM_conversions *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CAST_Int_to_L_TAFDISPLAY_TM_conversions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_Int_to_L_TAFDISPLAY_TM_conversions.h
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */

