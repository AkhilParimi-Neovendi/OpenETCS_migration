/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _CheckMode_CheckBGConsistency_Pkg_SubFunction_H_
#define _CheckMode_CheckBGConsistency_Pkg_SubFunction_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* bgConsistansyIsActive/ */ bgConsistansyIsActive;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L37/ */ _L37;
  M_MODE /* _L36/ */ _L36;
  kcg_bool /* _L35/ */ _L35;
  M_MODE /* _L34/ */ _L34;
  M_MODE /* _L33/ */ _L33;
  kcg_bool /* _L32/ */ _L32;
  M_MODE /* _L31/ */ _L31;
  M_MODE /* _L30/ */ _L30;
  M_MODE /* _L29/ */ _L29;
  M_MODE /* _L28/ */ _L28;
  kcg_bool /* _L27/ */ _L27;
  M_MODE /* _L26/ */ _L26;
  kcg_bool /* _L25/ */ _L25;
  M_MODE /* _L24/ */ _L24;
  M_MODE /* _L23/ */ _L23;
  kcg_bool /* _L22/ */ _L22;
  kcg_bool /* _L21/ */ _L21;
  kcg_bool /* _L20/ */ _L20;
  kcg_bool /* _L19/ */ _L19;
  kcg_bool /* _L18/ */ _L18;
  M_MODE /* _L17/ */ _L17;
  M_MODE /* _L16/ */ _L16;
  kcg_bool /* _L15/ */ _L15;
  kcg_bool /* _L14/ */ _L14;
  M_MODE /* _L52/ */ _L52;
  kcg_bool /* _L51/ */ _L51;
  kcg_bool /* _L50/ */ _L50;
  M_MODE /* _L49/ */ _L49;
  M_MODE /* _L48/ */ _L48;
  kcg_bool /* _L46/ */ _L46;
} outC_CheckMode_CheckBGConsistency_Pkg_SubFunction;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::SubFunction::CheckMode/ */
extern void CheckMode_CheckBGConsistency_Pkg_SubFunction(
  /* currentMode/ */
  M_MODE currentMode,
  outC_CheckMode_CheckBGConsistency_Pkg_SubFunction *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CheckMode_reset_CheckBGConsistency_Pkg_SubFunction(
  outC_CheckMode_CheckBGConsistency_Pkg_SubFunction *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CheckMode_init_CheckBGConsistency_Pkg_SubFunction(
  outC_CheckMode_CheckBGConsistency_Pkg_SubFunction *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CheckMode_CheckBGConsistency_Pkg_SubFunction_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CheckMode_CheckBGConsistency_Pkg_SubFunction.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

