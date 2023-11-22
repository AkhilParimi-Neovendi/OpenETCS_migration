/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _CheckSingleBG_CheckBGConsistency_Pkg_SubFunction_H_
#define _CheckSingleBG_CheckBGConsistency_Pkg_SubFunction_H_

#include "kcg_types.h"
#include "CheckOneTelegram_CheckBGConsistency_Pkg_SubFunction.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* isSingleBG/ */ isSingleBG;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CheckOneTelegram_CheckBGConsistency_Pkg_SubFunction /* IfBlock1:then:_L2=(CheckBGConsistency_Pkg::SubFunction::CheckOneTelegram#2)/ */ Context_CheckOneTelegram_2;
  outC_CheckOneTelegram_CheckBGConsistency_Pkg_SubFunction /* IfBlock1:else:then:_L20=(CheckBGConsistency_Pkg::SubFunction::CheckOneTelegram#6)/ */ Context_CheckOneTelegram_6;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* IfBlock1:then:_L10/ */ _L10_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L9/ */ _L9_then_IfBlock1;
  M_DUP /* IfBlock1:then:_L8/ */ _L8_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L6/ */ _L6_then_IfBlock1;
  N_PIG /* IfBlock1:then:_L5/ */ _L5_then_IfBlock1;
  M_DUP /* IfBlock1:then:_L4/ */ _L4_then_IfBlock1;
  N_PIG /* IfBlock1:then:_L3/ */ _L3_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  Telegram_T_BG_Types_Pkg /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  kcg_bool /* IfBlock1:else:else:_L1/ */ _L1_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L21/ */ _L21_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L20/ */ _L20_then_else_IfBlock1;
  N_PIG /* IfBlock1:else:then:_L19/ */ _L19_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L18/ */ _L18_then_else_IfBlock1;
  M_DUP /* IfBlock1:else:then:_L17/ */ _L17_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L16/ */ _L16_then_else_IfBlock1;
  N_PIG /* IfBlock1:else:then:_L14/ */ _L14_then_else_IfBlock1;
  Telegram_T_BG_Types_Pkg /* IfBlock1:else:then:_L13/ */ _L13_then_else_IfBlock1;
  M_DUP /* IfBlock1:else:then:_L22/ */ _L22_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L23/ */ _L23_then_else_IfBlock1;
  M_DUP /* IfBlock1:else:then:_L29/ */ _L29_then_else_IfBlock1;
  N_PIG /* IfBlock1:else:then:_L28/ */ _L28_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L27/ */ _L27_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L26/ */ _L26_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L25/ */ _L25_then_else_IfBlock1;
  N_PIG /* IfBlock1:else:then:_L24/ */ _L24_then_else_IfBlock1;
  M_DUP /* IfBlock1:else:then:_L30/ */ _L30_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L31/ */ _L31_then_else_IfBlock1;
  N_TOTAL /* n_total/ */ n_total;
  kcg_bool /* valid/ */ valid;
  Telegram_T_BG_Types_Pkg /* _L1/ */ _L1;
  N_TOTAL /* _L21/ */ _L21;
  kcg_bool /* _L22/ */ _L22;
} outC_CheckSingleBG_CheckBGConsistency_Pkg_SubFunction;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG/ */
extern void CheckSingleBG_CheckBGConsistency_Pkg_SubFunction(
  /* telegram_in/ */
  Telegram_T_BG_Types_Pkg *telegram_in,
  outC_CheckSingleBG_CheckBGConsistency_Pkg_SubFunction *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CheckSingleBG_reset_CheckBGConsistency_Pkg_SubFunction(
  outC_CheckSingleBG_CheckBGConsistency_Pkg_SubFunction *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CheckSingleBG_init_CheckBGConsistency_Pkg_SubFunction(
  outC_CheckSingleBG_CheckBGConsistency_Pkg_SubFunction *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CheckSingleBG_CheckBGConsistency_Pkg_SubFunction_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CheckSingleBG_CheckBGConsistency_Pkg_SubFunction.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

