/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction_H_
#define _CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction_H_

#include "kcg_types.h"
#include "CheckFirstTelNotDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.h"
#include "CheckFirstTelDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.h"
#include "Check2Telegrams_CheckBGConsistency_Pkg_SubFunction.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* isComplete/ */ isComplete;
  Telegram_T_BG_Types_Pkg /* lastTelegram/ */ lastTelegram;
  kcg_int32 /* inDex/ */ inDex;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CheckFirstTelDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck /* IfBlock1:then:_L13=(CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup#3)/ */ Context_CheckFirstTelDup_3;
  outC_CheckFirstTelNotDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck /* IfBlock1:then:_L14=(CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelNotDup#2)/ */ Context_CheckFirstTelNotDup_2;
  outC_Check2Telegrams_CheckBGConsistency_Pkg_SubFunction /* IfBlock1:then:_L37=(CheckBGConsistency_Pkg::SubFunction::Check2Telegrams#6)/ */ Context_Check2Telegrams_6;
  outC_Check2Telegrams_CheckBGConsistency_Pkg_SubFunction /* IfBlock1:then:_L9=(CheckBGConsistency_Pkg::SubFunction::Check2Telegrams#5)/ */ Context_Check2Telegrams_5[7];
  outC_CheckFirstTelDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck /* _L18=(CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup#1)/ */ Context_CheckFirstTelDup_1;
  outC_CheckFirstTelNotDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck /* _L19=(CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelNotDup#1)/ */ Context_CheckFirstTelNotDup_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  TelegramArray_T_BG_Types_Pkg /* IfBlock1:then:_L43/ */ _L43_then_IfBlock1;
  kcg_int32 /* IfBlock1:then:_L42/ */ _L42_then_IfBlock1;
  kcg_int32 /* IfBlock1:then:_L41/ */ _L41_then_IfBlock1;
  Telegram_T_BG_Types_Pkg /* IfBlock1:then:_L39/ */ _L39_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L37/ */ _L37_then_IfBlock1;
  Telegram_T_BG_Types_Pkg /* IfBlock1:then:_L38/ */ _L38_then_IfBlock1;
  TelegramHeader_T_BG_Types_Pkg /* IfBlock1:then:_L16/ */ _L16_then_IfBlock1;
  Telegram_T_BG_Types_Pkg /* IfBlock1:then:_L36/ */ _L36_then_IfBlock1;
  TelegramArray_T_BG_Types_Pkg /* IfBlock1:then:_L34/ */ _L34_then_IfBlock1;
  kcg_int32 /* IfBlock1:then:_L33/ */ _L33_then_IfBlock1;
  kcg_int32 /* IfBlock1:then:_L32/ */ _L32_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L29/ */ _L29_then_IfBlock1;
  _200_array /* IfBlock1:then:_L26/ */ _L26_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L15/ */ _L15_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L14/ */ _L14_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L13/ */ _L13_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L8/ */ _L8_then_IfBlock1;
  Telegram_T_BG_Types_Pkg /* IfBlock1:then:_L10/ */ _L10_then_IfBlock1;
  kcg_int32 /* IfBlock1:then:_L9/ */ _L9_then_IfBlock1;
  TelegramArray_T_BG_Types_Pkg /* IfBlock1:then:_L11/ */ _L11_then_IfBlock1;
  Telegram_T_BG_Types_Pkg /* IfBlock1:then:_L12/ */ _L12_then_IfBlock1;
  kcg_bool /* IfBlock1:else:_L1/ */ _L1_else_IfBlock1;
  kcg_bool /* firstTelegramIsValid/ */ firstTelegramIsValid;
  TelegramArray_T_BG_Types_Pkg /* _L15/ */ _L15;
  TelegramHeader_T_BG_Types_Pkg /* _L16/ */ _L16;
  kcg_bool /* _L18/ */ _L18;
  kcg_bool /* _L19/ */ _L19;
  kcg_bool /* _L20/ */ _L20;
  kcg_bool /* _L21/ */ _L21;
  kcg_bool /* _L22/ */ _L22;
} outC_CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck/ */
extern void CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction(
  /* telegramarray_in/ */
  TelegramArray_T_BG_Types_Pkg *telegramarray_in,
  outC_CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CompletenessFirstCheck_reset_CheckBGConsistency_Pkg_SubFunction(
  outC_CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CompletenessFirstCheck_init_CheckBGConsistency_Pkg_SubFunction(
  outC_CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

