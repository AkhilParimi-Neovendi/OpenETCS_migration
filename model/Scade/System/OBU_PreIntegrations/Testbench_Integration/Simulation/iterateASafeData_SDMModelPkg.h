/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _iterateASafeData_SDMModelPkg_H_
#define _iterateASafeData_SDMModelPkg_H_

#include "kcg_types.h"
#include "iterateASafeRow_SDMModelPkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ASafeRow_T_CalcBrakingCurves_types /* ASafeRows_graded/ */ ASafeRows_graded;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_iterateASafeRow_SDMModelPkg /* _L5=(SDMModelPkg::iterateASafeRow#1)/ */ Context_iterateASafeRow_1[100];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ASafeRow_T_CalcBrakingCurves_types /* _L1/ */ _L1;
  A_gradient_t_SDM_GradientAcceleration_types /* _L2/ */ _L2;
  array_float32_100 /* _L4/ */ _L4;
  A_internal_real_Type_SDM_Types_Pkg /* _L5/ */ _L5;
  kcg_float32 /* _L7/ */ _L7;
} outC_iterateASafeData_SDMModelPkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDMModelPkg::iterateASafeData/ */
extern void iterateASafeData_SDMModelPkg(
  /* ASafeRows/ */
  ASafeRow_T_CalcBrakingCurves_types *ASafeRows,
  /* AGradient/ */
  A_gradient_t_SDM_GradientAcceleration_types *AGradient,
  outC_iterateASafeData_SDMModelPkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void iterateASafeData_reset_SDMModelPkg(
  outC_iterateASafeData_SDMModelPkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void iterateASafeData_init_SDMModelPkg(
  outC_iterateASafeData_SDMModelPkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _iterateASafeData_SDMModelPkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** iterateASafeData_SDMModelPkg.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

