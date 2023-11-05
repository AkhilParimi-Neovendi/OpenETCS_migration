/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _CAST_Q_EMERGENCYSTOP_to_int_TM_conversions_H_
#define _CAST_Q_EMERGENCYSTOP_to_int_TM_conversions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int32 /* q_emergencystop_int/ */ q_emergencystop_int;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else: */ else_clock_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else: */ else_clock_else_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* IfBlock1:then:_L5/ */ _L5_then_IfBlock1;
  kcg_int32 /* IfBlock1:then:_L4/ */ _L4_then_IfBlock1;
  kcg_bool /* IfBlock1:else:else:then:_L4/ */ _L4_then_else_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:else:then:_L2/ */ _L2_then_else_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:else:else:else:_L2/ */ _L2_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:_L1/ */ _L1_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:then:_L2/ */ _L2_then_else_else_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:else:else:then:_L1/ */ _L1_then_else_else_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:then:_L3/ */ _L3_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L5/ */ _L5_then_else_IfBlock1;
  kcg_bool /* error/ */ error;
  Q_EMERGENCYSTOP /* q_emergencystop_in/ */ q_emergencystop_in;
  kcg_bool /* _L13/ */ _L13;
  Q_EMERGENCYSTOP /* _L12/ */ _L12;
} outC_CAST_Q_EMERGENCYSTOP_to_int_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::CAST_Q_EMERGENCYSTOP_to_int/ */
extern void CAST_Q_EMERGENCYSTOP_to_int_TM_conversions(
  /* q_emergencystop/ */
  Q_EMERGENCYSTOP q_emergencystop,
  outC_CAST_Q_EMERGENCYSTOP_to_int_TM_conversions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CAST_Q_EMERGENCYSTOP_to_int_reset_TM_conversions(
  outC_CAST_Q_EMERGENCYSTOP_to_int_TM_conversions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CAST_Q_EMERGENCYSTOP_to_int_init_TM_conversions(
  outC_CAST_Q_EMERGENCYSTOP_to_int_TM_conversions *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CAST_Q_EMERGENCYSTOP_to_int_TM_conversions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_Q_EMERGENCYSTOP_to_int_TM_conversions.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

