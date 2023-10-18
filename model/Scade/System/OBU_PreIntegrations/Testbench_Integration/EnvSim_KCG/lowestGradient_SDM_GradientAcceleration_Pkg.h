/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _lowestGradient_SDM_GradientAcceleration_Pkg_H_
#define _lowestGradient_SDM_GradientAcceleration_Pkg_H_

#include "kcg_types.h"
#include "selectGradientOffset_SDM_GradientAcceleration_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* cond/ */ cond;
  Gradient_real_t_SDM_GradientAcceleration_types /* lowestGradientOut/ */ lowestGradientOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_selectGradientOffset_SDM_GradientAcceleration_Pkg /* _L23=(SDM_GradientAcceleration_Pkg::selectGradientOffset)/ */ Context_selectGradientOffset;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  GradientProfile_real_t_SDM_GradientAcceleration_types /* _L1/ */ _L1;
  kcg_int64 /* _L3/ */ _L3;
  Gradient_real_t_SDM_GradientAcceleration_types /* _L4/ */ _L4;
  kcg_int64 /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L9/ */ _L9;
  kcg_int64 /* _L10/ */ _L10;
  Gradient_real_t_SDM_GradientAcceleration_types /* _L15/ */ _L15;
  kcg_bool /* _L16/ */ _L16;
  kcg_bool /* _L17/ */ _L17;
  Gradient_real_t_SDM_GradientAcceleration_types /* _L18/ */ _L18;
  kcg_int64 /* _L19/ */ _L19;
  kcg_int64 /* _L20/ */ _L20;
  kcg_int64 /* _L22/ */ _L22;
  Gradient_section_real_t_SDM_GradientAcceleration_types /* _L23/ */ _L23;
} outC_lowestGradient_SDM_GradientAcceleration_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDM_GradientAcceleration_Pkg::lowestGradient/ */
extern void lowestGradient_SDM_GradientAcceleration_Pkg(
  /* Index/ */
  kcg_int64 Index,
  /* lowestGradientAccu/ */
  Gradient_real_t_SDM_GradientAcceleration_types lowestGradientAccu,
  /* GradientProfile/ */
  GradientProfile_real_t_SDM_GradientAcceleration_types *GradientProfile,
  /* BeginIndex/ */
  kcg_int64 BeginIndex,
  /* EndIndex/ */
  kcg_int64 EndIndex,
  outC_lowestGradient_SDM_GradientAcceleration_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void lowestGradient_reset_SDM_GradientAcceleration_Pkg(
  outC_lowestGradient_SDM_GradientAcceleration_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void lowestGradient_init_SDM_GradientAcceleration_Pkg(
  outC_lowestGradient_SDM_GradientAcceleration_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _lowestGradient_SDM_GradientAcceleration_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** lowestGradient_SDM_GradientAcceleration_Pkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

