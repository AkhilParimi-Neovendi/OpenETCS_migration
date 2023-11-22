/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _CheckOneTelegram_CheckBGConsistency_Pkg_SubFunction_H_
#define _CheckOneTelegram_CheckBGConsistency_Pkg_SubFunction_H_

#include "kcg_types.h"
#include "CheckTelegramHeader_CheckBGConsistency_Pkg_SubFunction.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* isConsistent/ */ isConsistent;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CheckTelegramHeader_CheckBGConsistency_Pkg_SubFunction /* _L44=(CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader#1)/ */ Context_CheckTelegramHeader_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Telegram_T_BG_Types_Pkg /* _L13/ */ _L13;
  kcg_bool /* _L29/ */ _L29;
  kcg_bool /* _L44/ */ _L44;
  kcg_bool /* _L45/ */ _L45;
  kcg_bool /* _L52/ */ _L52;
  TelegramHeader_T_BG_Types_Pkg /* _L51/ */ _L51;
  CompressedPackets_T_Common_Types_Pkg /* _L50/ */ _L50;
} outC_CheckOneTelegram_CheckBGConsistency_Pkg_SubFunction;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::SubFunction::CheckOneTelegram/ */
extern void CheckOneTelegram_CheckBGConsistency_Pkg_SubFunction(
  /* telegram_in/ */
  Telegram_T_BG_Types_Pkg *telegram_in,
  outC_CheckOneTelegram_CheckBGConsistency_Pkg_SubFunction *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CheckOneTelegram_reset_CheckBGConsistency_Pkg_SubFunction(
  outC_CheckOneTelegram_CheckBGConsistency_Pkg_SubFunction *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CheckOneTelegram_init_CheckBGConsistency_Pkg_SubFunction(
  outC_CheckOneTelegram_CheckBGConsistency_Pkg_SubFunction *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CheckOneTelegram_CheckBGConsistency_Pkg_SubFunction_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CheckOneTelegram_CheckBGConsistency_Pkg_SubFunction.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

