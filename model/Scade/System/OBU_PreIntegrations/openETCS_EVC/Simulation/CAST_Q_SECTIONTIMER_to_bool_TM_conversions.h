/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _CAST_Q_SECTIONTIMER_to_bool_TM_conversions_H_
#define _CAST_Q_SECTIONTIMER_to_bool_TM_conversions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* q_sectiontimer_bool/ */ q_sectiontimer_bool;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* IfBlock1:then:_L5/ */ _L5_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L4/ */ _L4_then_IfBlock1;
  kcg_bool /* IfBlock1:else:else:_L2/ */ _L2_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:_L1/ */ _L1_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L3/ */ _L3_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L5/ */ _L5_then_else_IfBlock1;
  kcg_bool /* error/ */ error;
  Q_SECTIONTIMER /* q_sectiontimer_in/ */ q_sectiontimer_in;
  kcg_bool /* _L13/ */ _L13;
  Q_SECTIONTIMER /* _L12/ */ _L12;
} outC_CAST_Q_SECTIONTIMER_to_bool_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::CAST_Q_SECTIONTIMER_to_bool/ */
extern void CAST_Q_SECTIONTIMER_to_bool_TM_conversions(
  /* q_sectiontimer/ */
  Q_SECTIONTIMER q_sectiontimer,
  outC_CAST_Q_SECTIONTIMER_to_bool_TM_conversions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CAST_Q_SECTIONTIMER_to_bool_reset_TM_conversions(
  outC_CAST_Q_SECTIONTIMER_to_bool_TM_conversions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CAST_Q_SECTIONTIMER_to_bool_init_TM_conversions(
  outC_CAST_Q_SECTIONTIMER_to_bool_TM_conversions *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CAST_Q_SECTIONTIMER_to_bool_TM_conversions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_Q_SECTIONTIMER_to_bool_TM_conversions.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

