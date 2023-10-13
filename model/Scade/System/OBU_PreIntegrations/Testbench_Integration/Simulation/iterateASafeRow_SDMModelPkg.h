/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */
#ifndef _iterateASafeRow_SDMModelPkg_H_
#define _iterateASafeRow_SDMModelPkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  A_internal_real_Type_SDM_Types_Pkg /* keep_gradient/ */ keep_gradient;
  A_internal_real_Type_SDM_Types_Pkg /* A_graded/ */ A_graded;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  A_internal_real_Type_SDM_Types_Pkg /* _L1/ */ _L1;
  A_gradient_element_t_SDM_GradientAcceleration_types /* _L2/ */ _L2;
  kcg_float64 /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  A_internal_real_Type_SDM_Types_Pkg /* _L5/ */ _L5;
  A_internal_real_Type_SDM_Types_Pkg /* _L6/ */ _L6;
  A_internal_real_Type_SDM_Types_Pkg /* _L7/ */ _L7;
} outC_iterateASafeRow_SDMModelPkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDMModelPkg::iterateASafeRow/ */
extern void iterateASafeRow_SDMModelPkg(
  /* last_gradient/ */
  A_internal_real_Type_SDM_Types_Pkg last_gradient,
  /* A/ */
  A_internal_real_Type_SDM_Types_Pkg A,
  /* AGradient/ */
  A_gradient_element_t_SDM_GradientAcceleration_types *AGradient,
  outC_iterateASafeRow_SDMModelPkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void iterateASafeRow_reset_SDMModelPkg(
  outC_iterateASafeRow_SDMModelPkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void iterateASafeRow_init_SDMModelPkg(
  outC_iterateASafeRow_SDMModelPkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _iterateASafeRow_SDMModelPkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** iterateASafeRow_SDMModelPkg.h
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */

