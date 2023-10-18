/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _CheckTelegramHeader_CheckBGConsistency_Pkg_SubFunction_H_
#define _CheckTelegramHeader_CheckBGConsistency_Pkg_SubFunction_H_

#include "kcg_types.h"
#include "N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction.h"
#include "N_PIG2int_CheckBGConsistency_Pkg_SubFunction.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* isConsistent/ */ isConsistent;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_N_PIG2int_CheckBGConsistency_Pkg_SubFunction /* _L47=(CheckBGConsistency_Pkg::SubFunction::N_PIG2int#1)/ */ Context_N_PIG2int_1;
  outC_N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction /* _L48=(CheckBGConsistency_Pkg::SubFunction::N_TOTAL2int#1)/ */ Context_N_TOTAL2int_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  TelegramHeader_T_BG_Types_Pkg /* _L13/ */ _L13;
  kcg_bool /* _L29/ */ _L29;
  kcg_bool /* _L30/ */ _L30;
  kcg_bool /* _L33/ */ _L33;
  Q_UPDOWN /* _L43/ */ _L43;
  M_VERSION /* _L42/ */ _L42;
  Q_MEDIA /* _L41/ */ _L41;
  N_PIG /* _L40/ */ _L40;
  N_TOTAL /* _L39/ */ _L39;
  M_DUP /* _L38/ */ _L38;
  M_MCOUNT /* _L37/ */ _L37;
  NID_C /* _L36/ */ _L36;
  NID_BG /* _L35/ */ _L35;
  Q_LINK /* _L34/ */ _L34;
  kcg_int64 /* _L44/ */ _L44;
  kcg_bool /* _L45/ */ _L45;
  kcg_bool /* _L46/ */ _L46;
  kcg_int64 /* _L47/ */ _L47;
  kcg_int64 /* _L48/ */ _L48;
  kcg_int64 /* _L49/ */ _L49;
  kcg_int64 /* _L50/ */ _L50;
} outC_CheckTelegramHeader_CheckBGConsistency_Pkg_SubFunction;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader/ */
extern void CheckTelegramHeader_CheckBGConsistency_Pkg_SubFunction(
  /* telegramHeader_in/ */
  TelegramHeader_T_BG_Types_Pkg *telegramHeader_in,
  outC_CheckTelegramHeader_CheckBGConsistency_Pkg_SubFunction *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CheckTelegramHeader_reset_CheckBGConsistency_Pkg_SubFunction(
  outC_CheckTelegramHeader_CheckBGConsistency_Pkg_SubFunction *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CheckTelegramHeader_init_CheckBGConsistency_Pkg_SubFunction(
  outC_CheckTelegramHeader_CheckBGConsistency_Pkg_SubFunction *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CheckTelegramHeader_CheckBGConsistency_Pkg_SubFunction_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CheckTelegramHeader_CheckBGConsistency_Pkg_SubFunction.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

