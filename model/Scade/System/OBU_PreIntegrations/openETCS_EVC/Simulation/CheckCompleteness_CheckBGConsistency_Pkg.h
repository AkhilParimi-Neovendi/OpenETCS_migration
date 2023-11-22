/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _CheckCompleteness_CheckBGConsistency_Pkg_H_
#define _CheckCompleteness_CheckBGConsistency_Pkg_H_

#include "kcg_types.h"
#include "CheckSingleBG_CheckBGConsistency_Pkg_SubFunction.h"
#include "CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction.h"
#include "N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* isComplete/ */ isComplete;
  kcg_bool /* isSingleBG/ */ isSingleBG;
  Telegram_T_BG_Types_Pkg /* lastTelegram/ */ lastTelegram;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CheckSingleBG_CheckBGConsistency_Pkg_SubFunction /* IfBlock1:then:_L1=(CheckBGConsistency_Pkg::SubFunction::CheckSingleBG#1)/ */ Context_CheckSingleBG_1;
  outC_CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction /* IfBlock1:else:then:_L1=(CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck#1)/ */ Context_CompletenessFirstCheck_1;
  outC_N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction /* _L5=(CheckBGConsistency_Pkg::SubFunction::N_TOTAL2int#1)/ */ Context_N_TOTAL2int_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Telegram_T_BG_Types_Pkg /* IfBlock1:then:_L3/ */ _L3_then_IfBlock1;
  BG_Message_T_BG_Types_Pkg /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  kcg_bool /* IfBlock1:else:else:_L5/ */ _L5_else_else_IfBlock1;
  Telegram_T_BG_Types_Pkg /* IfBlock1:else:else:_L6/ */ _L6_else_else_IfBlock1;
  BG_Message_T_BG_Types_Pkg /* IfBlock1:else:then:_L4/ */ _L4_then_else_IfBlock1;
  TelegramArray_T_BG_Types_Pkg /* IfBlock1:else:then:_L3/ */ _L3_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L1/ */ _L1_then_else_IfBlock1;
  Telegram_T_BG_Types_Pkg /* IfBlock1:else:then:_L2/ */ _L2_then_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:then:_L5/ */ _L5_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L7/ */ _L7_then_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:then:_L8/ */ _L8_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L9/ */ _L9_then_else_IfBlock1;
  kcg_int32 /* numberOfBalises/ */ numberOfBalises;
  kcg_int32 /* nTotal/ */ nTotal;
  BG_Message_T_BG_Types_Pkg /* _L1/ */ _L1;
  kcg_int32 /* _L3/ */ _L3;
  N_TOTAL /* _L4/ */ _L4;
  kcg_int32 /* _L5/ */ _L5;
} outC_CheckCompleteness_CheckBGConsistency_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::CheckCompleteness/ */
extern void CheckCompleteness_CheckBGConsistency_Pkg(
  /* bgMessage/ */
  BG_Message_T_BG_Types_Pkg *bgMessage,
  outC_CheckCompleteness_CheckBGConsistency_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CheckCompleteness_reset_CheckBGConsistency_Pkg(
  outC_CheckCompleteness_CheckBGConsistency_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CheckCompleteness_init_CheckBGConsistency_Pkg(
  outC_CheckCompleteness_CheckBGConsistency_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CheckCompleteness_CheckBGConsistency_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CheckCompleteness_CheckBGConsistency_Pkg.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

