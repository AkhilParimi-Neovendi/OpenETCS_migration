/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _MergAllPackets_Iter_CheckBGConsistency_Pkg_SubFunction_MergFunction_H_
#define _MergAllPackets_Iter_CheckBGConsistency_Pkg_SubFunction_MergFunction_H_

#include "kcg_types.h"
#include "MergAllPackets_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Telegram_T_BG_Types_Pkg /* telegramout/ */ telegramout;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_MergAllPackets_CheckBGConsistency_Pkg_SubFunction_MergFunction /* _L3=(CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets#1)/ */ Context_MergAllPackets_1[7];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Telegram_T_BG_Types_Pkg /* _L1/ */ _L1;
  kcg_int32 /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  TelegramArray_T_BG_Types_Pkg /* _L5/ */ _L5;
  Telegram_T_BG_Types_Pkg /* _L6/ */ _L6;
  _200_array /* _L8/ */ _L8;
} outC_MergAllPackets_Iter_CheckBGConsistency_Pkg_SubFunction_MergFunction;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets_Iter/ */
extern void MergAllPackets_Iter_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  /* telegramArray/ */
  TelegramArray_T_BG_Types_Pkg *telegramArray,
  outC_MergAllPackets_Iter_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void MergAllPackets_Iter_reset_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  outC_MergAllPackets_Iter_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void MergAllPackets_Iter_init_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  outC_MergAllPackets_Iter_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _MergAllPackets_Iter_CheckBGConsistency_Pkg_SubFunction_MergFunction_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MergAllPackets_Iter_CheckBGConsistency_Pkg_SubFunction_MergFunction.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

