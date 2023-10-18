/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _CheckMVersion_CheckBGConsistency_Pkg_SubFunction_H_
#define _CheckMVersion_CheckBGConsistency_Pkg_SubFunction_H_

#include "kcg_types.h"
#include "CAST_M_VERSION_to_int_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* isSameVersion/ */ isSameVersion;
  kcg_bool /* compatibleVersion/ */ compatibleVersion;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_M_VERSION_to_int_TM_conversions /* _L3=(TM_conversions::CAST_M_VERSION_to_int#1)/ */ Context_CAST_M_VERSION_to_int_1;
  outC_CAST_M_VERSION_to_int_TM_conversions /* _L4=(TM_conversions::CAST_M_VERSION_to_int#2)/ */ Context_CAST_M_VERSION_to_int_2;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_VERSION /* _L1/ */ _L1;
  M_VERSION /* _L2/ */ _L2;
  kcg_int64 /* _L3/ */ _L3;
  kcg_int64 /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L7/ */ _L7;
} outC_CheckMVersion_CheckBGConsistency_Pkg_SubFunction;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::SubFunction::CheckMVersion/ */
extern void CheckMVersion_CheckBGConsistency_Pkg_SubFunction(
  /* trackVersion/ */
  M_VERSION trackVersion,
  /* trainVersion/ */
  M_VERSION trainVersion,
  outC_CheckMVersion_CheckBGConsistency_Pkg_SubFunction *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CheckMVersion_reset_CheckBGConsistency_Pkg_SubFunction(
  outC_CheckMVersion_CheckBGConsistency_Pkg_SubFunction *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CheckMVersion_init_CheckBGConsistency_Pkg_SubFunction(
  outC_CheckMVersion_CheckBGConsistency_Pkg_SubFunction *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CheckMVersion_CheckBGConsistency_Pkg_SubFunction_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CheckMVersion_CheckBGConsistency_Pkg_SubFunction.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

