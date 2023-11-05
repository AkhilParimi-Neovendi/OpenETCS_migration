/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _CheckModeExceptions_InformationFilter_Pkg_H_
#define _CheckModeExceptions_InformationFilter_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* outAccept/ */ outAccept;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ModeDecisionTableActionKind_DataDictionary_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
  kcg_bool /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
  kcg_bool /* _L12/ */ _L12;
  kcg_bool /* _L14/ */ _L14;
  kcg_bool /* _L15/ */ _L15;
  kcg_bool /* _L16/ */ _L16;
  kcg_bool /* _L17/ */ _L17;
  kcg_bool /* _L18/ */ _L18;
  kcg_bool /* _L19/ */ _L19;
} outC_CheckModeExceptions_InformationFilter_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::CheckModeExceptions/ */
extern void CheckModeExceptions_InformationFilter_Pkg(
  /* inAction/ */
  ModeDecisionTableActionKind_DataDictionary_Pkg inAction,
  outC_CheckModeExceptions_InformationFilter_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CheckModeExceptions_reset_InformationFilter_Pkg(
  outC_CheckModeExceptions_InformationFilter_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CheckModeExceptions_init_InformationFilter_Pkg(
  outC_CheckModeExceptions_InformationFilter_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CheckModeExceptions_InformationFilter_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CheckModeExceptions_InformationFilter_Pkg.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

