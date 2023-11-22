/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _BCD_to_Int_Utilities_H_
#define _BCD_to_Int_Utilities_H_

#include "kcg_types.h"
#include "Int_Check_Utilities.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int32 /* int_out/ */ int_out;
  kcg_bool /* error/ */ error;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Int_Check_Utilities /* _L3=(Utilities::Int_Check#1)/ */ Context_Int_Check_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* _L1/ */ _L1;
  kcg_bool /* _L3/ */ _L3;
  kcg_int32 /* _L4/ */ _L4;
  kcg_int32 /* _L5/ */ _L5;
} outC_BCD_to_Int_Utilities;

/* ===========  node initialization and cycle functions  =========== */
/* Utilities::BCD_to_Int/ */
extern void BCD_to_Int_Utilities(
  /* bcd_in/ */
  kcg_int32 bcd_in,
  outC_BCD_to_Int_Utilities *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void BCD_to_Int_reset_Utilities(outC_BCD_to_Int_Utilities *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void BCD_to_Int_init_Utilities(outC_BCD_to_Int_Utilities *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _BCD_to_Int_Utilities_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** BCD_to_Int_Utilities.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

