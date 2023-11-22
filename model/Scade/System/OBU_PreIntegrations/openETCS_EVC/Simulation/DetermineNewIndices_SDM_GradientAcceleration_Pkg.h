/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _DetermineNewIndices_SDM_GradientAcceleration_Pkg_H_
#define _DetermineNewIndices_SDM_GradientAcceleration_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int32 /* frontIndex/ */ frontIndex;
  kcg_int32 /* rearIndex/ */ rearIndex;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L2/ */ _L2;
  kcg_int32 /* _L3/ */ _L3;
  kcg_int32 /* _L4/ */ _L4;
  kcg_int32 /* _L5/ */ _L5;
  kcg_int32 /* _L6/ */ _L6;
  kcg_int32 /* _L7/ */ _L7;
  kcg_int32 /* _L9/ */ _L9;
  kcg_int32 /* _L10/ */ _L10;
  ACC_SDM_GradientAcceleration_Pkg /* _L11/ */ _L11;
} outC_DetermineNewIndices_SDM_GradientAcceleration_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDM_GradientAcceleration_Pkg::DetermineNewIndices/ */
extern void DetermineNewIndices_SDM_GradientAcceleration_Pkg(
  /* Accu/ */
  ACC_SDM_GradientAcceleration_Pkg *Accu,
  /* IncFrontIdx/ */
  kcg_bool IncFrontIdx,
  outC_DetermineNewIndices_SDM_GradientAcceleration_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void DetermineNewIndices_reset_SDM_GradientAcceleration_Pkg(
  outC_DetermineNewIndices_SDM_GradientAcceleration_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void DetermineNewIndices_init_SDM_GradientAcceleration_Pkg(
  outC_DetermineNewIndices_SDM_GradientAcceleration_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _DetermineNewIndices_SDM_GradientAcceleration_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** DetermineNewIndices_SDM_GradientAcceleration_Pkg.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

