/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _CAST_Int_to_M_NVDERUN_TM_conversions_H_
#define _CAST_Int_to_M_NVDERUN_TM_conversions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_NVDERUN /* m_nvderun/ */ m_nvderun;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_NVDERUN /* IfBlock1:then:_L8/ */ _L8_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L7/ */ _L7_then_IfBlock1;
  kcg_bool /* IfBlock1:else:else:_L2/ */ _L2_else_else_IfBlock1;
  M_NVDERUN /* IfBlock1:else:else:_L1/ */ _L1_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L6/ */ _L6_then_else_IfBlock1;
  M_NVDERUN /* IfBlock1:else:then:_L7/ */ _L7_then_else_IfBlock1;
  kcg_bool /* error/ */ error;
  kcg_int32 /* m_nvderun_in/ */ m_nvderun_in;
  kcg_int32 /* _L21/ */ _L21;
  kcg_bool /* _L20/ */ _L20;
} outC_CAST_Int_to_M_NVDERUN_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::CAST_Int_to_M_NVDERUN/ */
extern void CAST_Int_to_M_NVDERUN_TM_conversions(
  /* m_nvderun_int/ */
  kcg_int32 m_nvderun_int,
  outC_CAST_Int_to_M_NVDERUN_TM_conversions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CAST_Int_to_M_NVDERUN_reset_TM_conversions(
  outC_CAST_Int_to_M_NVDERUN_TM_conversions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CAST_Int_to_M_NVDERUN_init_TM_conversions(
  outC_CAST_Int_to_M_NVDERUN_TM_conversions *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CAST_Int_to_M_NVDERUN_TM_conversions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_Int_to_M_NVDERUN_TM_conversions.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

