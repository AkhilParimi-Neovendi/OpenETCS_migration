/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _Int_to_Bool_Utilities_H_
#define _Int_to_Bool_Utilities_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* bool_out/ */ bool_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  kcg_bool /* IfBlock1:else:else:_L2/ */ _L2_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:_L1/ */ _L1_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L2/ */ _L2_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L1/ */ _L1_then_else_IfBlock1;
  kcg_bool /* err/ */ err;
  kcg_bool /* _L1/ */ _L1;
} outC_Int_to_Bool_Utilities;

/* ===========  node initialization and cycle functions  =========== */
/* Utilities::Int_to_Bool/ */
extern void Int_to_Bool_Utilities(
  /* int_in/ */
  kcg_int32 int_in,
  outC_Int_to_Bool_Utilities *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Int_to_Bool_reset_Utilities(outC_Int_to_Bool_Utilities *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Int_to_Bool_init_Utilities(outC_Int_to_Bool_Utilities *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Int_to_Bool_Utilities_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Int_to_Bool_Utilities.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

