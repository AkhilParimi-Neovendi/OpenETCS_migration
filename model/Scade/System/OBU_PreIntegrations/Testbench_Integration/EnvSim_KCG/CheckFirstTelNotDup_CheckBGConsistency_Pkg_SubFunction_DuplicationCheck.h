/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _CheckFirstTelNotDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck_H_
#define _CheckFirstTelNotDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck_H_

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
  outC_N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction /* _L5=(CheckBGConsistency_Pkg::SubFunction::N_TOTAL2int#1)/ */ Context_N_TOTAL2int_1;
  outC_N_PIG2int_CheckBGConsistency_Pkg_SubFunction /* _L4=(CheckBGConsistency_Pkg::SubFunction::N_PIG2int#1)/ */ Context_N_PIG2int_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  TelegramHeader_T_BG_Types_Pkg /* _L1/ */ _L1;
  N_TOTAL /* _L2/ */ _L2;
  N_PIG /* _L3/ */ _L3;
  kcg_int32 /* _L4/ */ _L4;
  kcg_int32 /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
  kcg_int32 /* _L9/ */ _L9;
} outC_CheckFirstTelNotDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelNotDup/ */
extern void CheckFirstTelNotDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  /* telegramHeader_in/ */
  TelegramHeader_T_BG_Types_Pkg *telegramHeader_in,
  outC_CheckFirstTelNotDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CheckFirstTelNotDup_reset_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  outC_CheckFirstTelNotDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CheckFirstTelNotDup_init_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  outC_CheckFirstTelNotDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CheckFirstTelNotDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CheckFirstTelNotDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

