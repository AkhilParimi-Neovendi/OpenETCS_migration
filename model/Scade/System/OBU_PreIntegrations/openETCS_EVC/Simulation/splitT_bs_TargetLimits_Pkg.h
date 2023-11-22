/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _splitT_bs_TargetLimits_Pkg_H_
#define _splitT_bs_TargetLimits_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  T_internal_real_Type_SDM_Types_Pkg /* bs1/ */ bs1;
  T_internal_real_Type_SDM_Types_Pkg /* bs2/ */ bs2;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  T_internal_real_Type_SDM_Types_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
  T_internal_real_Type_SDM_Types_Pkg /* _L6/ */ _L6;
  T_internal_real_Type_SDM_Types_Pkg /* _L7/ */ _L7;
  T_internal_real_Type_SDM_Types_Pkg /* _L8/ */ _L8;
  kcg_float32 /* _L9/ */ _L9;
  T_internal_real_Type_SDM_Types_Pkg /* _L10/ */ _L10;
  T_internal_real_Type_SDM_Types_Pkg /* _L11/ */ _L11;
} outC_splitT_bs_TargetLimits_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* TargetLimits_Pkg::splitT_bs/ */
extern void splitT_bs_TargetLimits_Pkg(
  /* bs/ */
  T_internal_real_Type_SDM_Types_Pkg bs,
  /* isSB_FBAvailable/ */
  kcg_bool isSB_FBAvailable,
  /* isSB_CmdAvailable/ */
  kcg_bool isSB_CmdAvailable,
  outC_splitT_bs_TargetLimits_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void splitT_bs_reset_TargetLimits_Pkg(
  outC_splitT_bs_TargetLimits_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void splitT_bs_init_TargetLimits_Pkg(
  outC_splitT_bs_TargetLimits_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _splitT_bs_TargetLimits_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** splitT_bs_TargetLimits_Pkg.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

