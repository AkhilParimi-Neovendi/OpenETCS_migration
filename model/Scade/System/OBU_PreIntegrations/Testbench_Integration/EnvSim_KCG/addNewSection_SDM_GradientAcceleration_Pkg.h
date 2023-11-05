/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _addNewSection_SDM_GradientAcceleration_Pkg_H_
#define _addNewSection_SDM_GradientAcceleration_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  GradientProfile_real_compensated_t_SDM_GradientAcceleration_types /* modifiedProfile/ */ modifiedProfile;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Gradient_real_t_SDM_GradientAcceleration_types /* _L3/ */ _L3;
  ACC_SDM_GradientAcceleration_Pkg /* _L2/ */ _L2;
  kcg_int32 /* _L1/ */ _L1;
  GradientProfile_real_compensated_t_SDM_GradientAcceleration_types /* _L4/ */ _L4;
  GradientProfile_real_compensated_t_SDM_GradientAcceleration_types /* _L5/ */ _L5;
  Gradient_section_real_t_SDM_GradientAcceleration_types /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
  L_internal_real_Type_SDM_Types_Pkg /* _L8/ */ _L8;
  ACC_SDM_GradientAcceleration_Pkg /* _L9/ */ _L9;
} outC_addNewSection_SDM_GradientAcceleration_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDM_GradientAcceleration_Pkg::addNewSection/ */
extern void addNewSection_SDM_GradientAcceleration_Pkg(
  /* newGradientSection/ */
  Gradient_real_t_SDM_GradientAcceleration_types newGradientSection,
  /* index/ */
  kcg_int32 index,
  /* Accu/ */
  ACC_SDM_GradientAcceleration_Pkg *Accu,
  outC_addNewSection_SDM_GradientAcceleration_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void addNewSection_reset_SDM_GradientAcceleration_Pkg(
  outC_addNewSection_SDM_GradientAcceleration_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void addNewSection_init_SDM_GradientAcceleration_Pkg(
  outC_addNewSection_SDM_GradientAcceleration_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _addNewSection_SDM_GradientAcceleration_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** addNewSection_SDM_GradientAcceleration_Pkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

