/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _CAST_M_SupervisionDisplay_to_int_DATA_Variables_H_
#define _CAST_M_SupervisionDisplay_to_int_DATA_Variables_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_SupervisionDisplay_INT_T_DATA /* m_supervisiondisplay_int/ */ m_supervisiondisplay_int;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else: */ else_clock_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else: */ else_clock_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else: */ else_clock_else_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* IfBlock1:then:_L3/ */ _L3_then_IfBlock1;
  kcg_int32 /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  kcg_bool /* IfBlock1:else:else:then:_L3/ */ _L3_then_else_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:else:then:_L1/ */ _L1_then_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:then:_L2/ */ _L2_then_else_else_else_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:else:else:else:then:_L1/ */ _L1_then_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:_L3/ */ _L3_else_else_else_else_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:else:else:else:else:_L4/ */ _L4_else_else_else_else_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:else:else:then:_L1/ */ _L1_then_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:then:_L2/ */ _L2_then_else_else_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:then:_L1/ */ _L1_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L2/ */ _L2_then_else_IfBlock1;
  kcg_bool /* error/ */ error;
  kcg_bool /* _L1/ */ _L1;
} outC_CAST_M_SupervisionDisplay_to_int_DATA_Variables;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Variables::CAST_M_SupervisionDisplay_to_int/ */
extern void CAST_M_SupervisionDisplay_to_int_DATA_Variables(
  /* m_supervisiondisplay_ct/ */
  M_SupervisionDisplay_T_DMI_Types_Pkg m_supervisiondisplay_ct,
  outC_CAST_M_SupervisionDisplay_to_int_DATA_Variables *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CAST_M_SupervisionDisplay_to_int_reset_DATA_Variables(
  outC_CAST_M_SupervisionDisplay_to_int_DATA_Variables *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CAST_M_SupervisionDisplay_to_int_init_DATA_Variables(
  outC_CAST_M_SupervisionDisplay_to_int_DATA_Variables *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CAST_M_SupervisionDisplay_to_int_DATA_Variables_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_M_SupervisionDisplay_to_int_DATA_Variables.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

