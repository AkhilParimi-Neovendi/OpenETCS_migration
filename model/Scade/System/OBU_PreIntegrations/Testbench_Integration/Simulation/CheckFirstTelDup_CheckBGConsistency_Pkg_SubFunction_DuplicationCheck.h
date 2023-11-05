/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _CheckFirstTelDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck_H_
#define _CheckFirstTelDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck_H_

#include "kcg_types.h"
#include "N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction.h"
#include "N_PIG2int_CheckBGConsistency_Pkg_SubFunction.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* isTheFirst/ */ isTheFirst;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction /* _L18=(CheckBGConsistency_Pkg::SubFunction::N_TOTAL2int#3)/ */ Context_N_TOTAL2int_3;
  outC_N_PIG2int_CheckBGConsistency_Pkg_SubFunction /* _L20=(CheckBGConsistency_Pkg::SubFunction::N_PIG2int#3)/ */ Context_N_PIG2int_3;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  N_TOTAL /* _L23/ */ _L23;
  TelegramHeader_T_BG_Types_Pkg /* _L22/ */ _L22;
  N_PIG /* _L21/ */ _L21;
  kcg_int32 /* _L20/ */ _L20;
  kcg_bool /* _L19/ */ _L19;
  kcg_int32 /* _L18/ */ _L18;
  kcg_bool /* _L17/ */ _L17;
  kcg_bool /* _L16/ */ _L16;
  kcg_int32 /* _L15/ */ _L15;
  kcg_int32 /* _L24/ */ _L24;
  kcg_int32 /* _L25/ */ _L25;
  M_DUP /* _L26/ */ _L26;
  M_DUP /* _L28/ */ _L28;
  M_DUP /* _L29/ */ _L29;
  kcg_bool /* _L31/ */ _L31;
  kcg_bool /* _L32/ */ _L32;
  M_DUP /* _L33/ */ _L33;
  kcg_bool /* _L34/ */ _L34;
  kcg_bool /* _L35/ */ _L35;
} outC_CheckFirstTelDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup/ */
extern void CheckFirstTelDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  /* telegramHeader_in/ */
  TelegramHeader_T_BG_Types_Pkg *telegramHeader_in,
  outC_CheckFirstTelDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CheckFirstTelDup_reset_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  outC_CheckFirstTelDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CheckFirstTelDup_init_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  outC_CheckFirstTelDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CheckFirstTelDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CheckFirstTelDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

