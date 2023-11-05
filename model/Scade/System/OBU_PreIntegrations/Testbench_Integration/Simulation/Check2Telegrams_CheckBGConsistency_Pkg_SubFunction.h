/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _Check2Telegrams_CheckBGConsistency_Pkg_SubFunction_H_
#define _Check2Telegrams_CheckBGConsistency_Pkg_SubFunction_H_

#include "kcg_types.h"
#include "Check2Headers_CheckBGConsistency_Pkg_SubFunction.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* isConsistent/ */ isConsistent;
  Telegram_T_BG_Types_Pkg /* telegram_out/ */ telegram_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Check2Headers_CheckBGConsistency_Pkg_SubFunction /* _L3=(CheckBGConsistency_Pkg::SubFunction::Check2Headers#1)/ */ Context_Check2Headers_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Telegram_T_BG_Types_Pkg /* _L1/ */ _L1;
  TelegramHeader_T_BG_Types_Pkg /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
  Telegram_T_BG_Types_Pkg /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  TelegramHeader_T_BG_Types_Pkg /* _L7/ */ _L7;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
  kcg_bool /* _L10/ */ _L10;
  Telegram_T_BG_Types_Pkg /* _L85/ */ _L85;
} outC_Check2Telegrams_CheckBGConsistency_Pkg_SubFunction;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams/ */
extern void Check2Telegrams_CheckBGConsistency_Pkg_SubFunction(
  /* telegram1/ */
  Telegram_T_BG_Types_Pkg *telegram1,
  /* telegram2/ */
  Telegram_T_BG_Types_Pkg *telegram2,
  outC_Check2Telegrams_CheckBGConsistency_Pkg_SubFunction *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Check2Telegrams_reset_CheckBGConsistency_Pkg_SubFunction(
  outC_Check2Telegrams_CheckBGConsistency_Pkg_SubFunction *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Check2Telegrams_init_CheckBGConsistency_Pkg_SubFunction(
  outC_Check2Telegrams_CheckBGConsistency_Pkg_SubFunction *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Check2Telegrams_CheckBGConsistency_Pkg_SubFunction_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Check2Telegrams_CheckBGConsistency_Pkg_SubFunction.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

