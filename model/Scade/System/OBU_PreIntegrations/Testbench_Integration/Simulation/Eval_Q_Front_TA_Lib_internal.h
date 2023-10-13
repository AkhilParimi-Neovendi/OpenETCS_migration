/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _Eval_Q_Front_TA_Lib_internal_H_
#define _Eval_Q_Front_TA_Lib_internal_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* add_train_length/ */ add_train_length;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  kcg_bool /* IfBlock1:else:_L1/ */ _L1_else_IfBlock1;
  Q_FRONT /* q_front_in/ */ q_front_in;
  Q_FRONT /* _L1/ */ _L1;
} outC_Eval_Q_Front_TA_Lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Lib_internal::Eval_Q_Front/ */
extern void Eval_Q_Front_TA_Lib_internal(
  /* q_front/ */
  Q_FRONT q_front,
  outC_Eval_Q_Front_TA_Lib_internal *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Eval_Q_Front_reset_TA_Lib_internal(
  outC_Eval_Q_Front_TA_Lib_internal *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Eval_Q_Front_init_TA_Lib_internal(
  outC_Eval_Q_Front_TA_Lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Eval_Q_Front_TA_Lib_internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Eval_Q_Front_TA_Lib_internal.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

