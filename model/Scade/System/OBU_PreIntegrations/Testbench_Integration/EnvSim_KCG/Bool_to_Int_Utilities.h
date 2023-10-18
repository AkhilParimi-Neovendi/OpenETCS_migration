/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _Bool_to_Int_Utilities_H_
#define _Bool_to_Int_Utilities_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int64 /* int_out/ */ int_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  kcg_int64 /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  kcg_int64 /* IfBlock1:else:else:_L2/ */ _L2_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:_L1/ */ _L1_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L2/ */ _L2_then_else_IfBlock1;
  kcg_int64 /* IfBlock1:else:then:_L1/ */ _L1_then_else_IfBlock1;
  kcg_bool /* errorLocal/ */ errorLocal;
  kcg_bool /* _L1/ */ _L1;
} outC_Bool_to_Int_Utilities;

/* ===========  node initialization and cycle functions  =========== */
/* Utilities::Bool_to_Int/ */
extern void Bool_to_Int_Utilities(
  /* bool_in/ */
  kcg_bool bool_in,
  outC_Bool_to_Int_Utilities *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Bool_to_Int_reset_Utilities(outC_Bool_to_Int_Utilities *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Bool_to_Int_init_Utilities(outC_Bool_to_Int_Utilities *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Bool_to_Int_Utilities_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Bool_to_Int_Utilities.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

