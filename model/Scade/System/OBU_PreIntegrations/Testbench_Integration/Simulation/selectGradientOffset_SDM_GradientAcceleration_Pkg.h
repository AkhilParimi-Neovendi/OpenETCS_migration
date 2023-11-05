/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _selectGradientOffset_SDM_GradientAcceleration_Pkg_H_
#define _selectGradientOffset_SDM_GradientAcceleration_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Gradient_section_real_t_SDM_GradientAcceleration_types /* GradientSect/ */ GradientSect;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* _L3/ */ _L3;
  kcg_int32 /* _L2/ */ _L2;
  GradientProfile_real_t_SDM_GradientAcceleration_types /* _L1/ */ _L1;
  Gradient_section_real_t_SDM_GradientAcceleration_types /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  Gradient_section_real_t_SDM_GradientAcceleration_types /* _L6/ */ _L6;
  kcg_float32 /* _L7/ */ _L7;
  kcg_float32 /* _L8/ */ _L8;
  kcg_int32 /* _L9/ */ _L9;
} outC_selectGradientOffset_SDM_GradientAcceleration_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDM_GradientAcceleration_Pkg::selectGradientOffset/ */
extern void selectGradientOffset_SDM_GradientAcceleration_Pkg(
  /* GradientProfile/ */
  GradientProfile_real_t_SDM_GradientAcceleration_types *GradientProfile,
  /* Index/ */
  kcg_int32 Index,
  /* Offset/ */
  kcg_int32 Offset,
  outC_selectGradientOffset_SDM_GradientAcceleration_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void selectGradientOffset_reset_SDM_GradientAcceleration_Pkg(
  outC_selectGradientOffset_SDM_GradientAcceleration_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void selectGradientOffset_init_SDM_GradientAcceleration_Pkg(
  outC_selectGradientOffset_SDM_GradientAcceleration_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _selectGradientOffset_SDM_GradientAcceleration_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** selectGradientOffset_SDM_GradientAcceleration_Pkg.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

