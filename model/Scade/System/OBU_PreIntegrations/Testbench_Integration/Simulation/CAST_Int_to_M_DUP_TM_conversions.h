/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _CAST_Int_to_M_DUP_TM_conversions_H_
#define _CAST_Int_to_M_DUP_TM_conversions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_DUP /* m_dup/ */ m_dup;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1:else:else: */ else_clock_else_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* IfBlock1:then:_L7/ */ _L7_then_IfBlock1;
  M_DUP /* IfBlock1:then:_L6/ */ _L6_then_IfBlock1;
  kcg_bool /* IfBlock1:else:else:then:_L5/ */ _L5_then_else_else_IfBlock1;
  M_DUP /* IfBlock1:else:else:then:_L4/ */ _L4_then_else_else_IfBlock1;
  M_DUP /* IfBlock1:else:else:else:_L3/ */ _L3_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:_L2/ */ _L2_else_else_else_IfBlock1;
  M_DUP /* IfBlock1:else:then:_L5/ */ _L5_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L6/ */ _L6_then_else_IfBlock1;
  kcg_int32 /* m_dup_in/ */ m_dup_in;
  kcg_bool /* error/ */ error;
  kcg_int32 /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
} outC_CAST_Int_to_M_DUP_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::CAST_Int_to_M_DUP/ */
extern void CAST_Int_to_M_DUP_TM_conversions(
  /* int_in/ */
  kcg_int32 int_in,
  outC_CAST_Int_to_M_DUP_TM_conversions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CAST_Int_to_M_DUP_reset_TM_conversions(
  outC_CAST_Int_to_M_DUP_TM_conversions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CAST_Int_to_M_DUP_init_TM_conversions(
  outC_CAST_Int_to_M_DUP_TM_conversions *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CAST_Int_to_M_DUP_TM_conversions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_Int_to_M_DUP_TM_conversions.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

