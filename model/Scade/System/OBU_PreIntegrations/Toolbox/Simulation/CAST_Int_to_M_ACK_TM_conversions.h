/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:49
*************************************************************$ */
#ifndef _CAST_Int_to_M_ACK_TM_conversions_H_
#define _CAST_Int_to_M_ACK_TM_conversions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_ACK /* m_ack/ */ m_ack;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_ACK /* IfBlock1:then:_L8/ */ _L8_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L7/ */ _L7_then_IfBlock1;
  kcg_bool /* IfBlock1:else:else:_L2/ */ _L2_else_else_IfBlock1;
  M_ACK /* IfBlock1:else:else:_L1/ */ _L1_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L6/ */ _L6_then_else_IfBlock1;
  M_ACK /* IfBlock1:else:then:_L7/ */ _L7_then_else_IfBlock1;
  kcg_int32 /* m_ack_in/ */ m_ack_in;
  kcg_bool /* error/ */ error;
  kcg_bool /* _L5/ */ _L5;
  kcg_int32 /* _L4/ */ _L4;
} outC_CAST_Int_to_M_ACK_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::CAST_Int_to_M_ACK/ */
extern void CAST_Int_to_M_ACK_TM_conversions(
  /* m_ack_int/ */
  kcg_int32 m_ack_int,
  outC_CAST_Int_to_M_ACK_TM_conversions *outC);

extern void CAST_Int_to_M_ACK_reset_TM_conversions(
  outC_CAST_Int_to_M_ACK_TM_conversions *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void CAST_Int_to_M_ACK_init_TM_conversions(
  outC_CAST_Int_to_M_ACK_TM_conversions *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CAST_Int_to_M_ACK_TM_conversions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_Int_to_M_ACK_TM_conversions.h
** Generation date: 2023-09-12T13:45:49
*************************************************************$ */

