/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */
#ifndef _addGradient_SDMModelPkg_H_
#define _addGradient_SDMModelPkg_H_

#include "kcg_types.h"
#include "iterateASafeData_SDMModelPkg.h"
#include "collectGradientLocations_SDMModelPkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ASafe_T_CalcBrakingCurves_types /* aSafe/ */ aSafe;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_collectGradientLocations_SDMModelPkg /* _L17=(SDMModelPkg::collectGradientLocations#1)/ */ Context_collectGradientLocations_1[100];
  outC_iterateASafeData_SDMModelPkg /* _L32=(SDMModelPkg::iterateASafeData#1)/ */ Context_iterateASafeData_1[14];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  A_gradient_t_SDM_GradientAcceleration_types /* _L2/ */ _L2;
  ASafe_T_CalcBrakingCurves_types /* _L12/ */ _L12;
  ASafeSpeedDefinition_T_CalcBrakingCurves_types /* _L13/ */ _L13;
  L_internal_real_Type_SDM_Types_Pkg /* _L17/ */ _L17;
  kcg_float64 /* _L20/ */ _L20;
  ASafe_Data_T_CalcBrakingCurves_types /* _L26/ */ _L26;
  ASafe_T_CalcBrakingCurves_types /* _L27/ */ _L27;
  array_float64_100 /* _L28/ */ _L28;
  ASafe_T_CalcBrakingCurves_types /* _L29/ */ _L29;
  _104_array /* _L30/ */ _L30;
  A_gradient_t_SDM_GradientAcceleration_types /* _L31/ */ _L31;
  ASafe_Data_T_CalcBrakingCurves_types /* _L32/ */ _L32;
} outC_addGradient_SDMModelPkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDMModelPkg::addGradient/ */
extern void addGradient_SDMModelPkg(
  /* aBrakeSafe/ */
  ASafe_T_CalcBrakingCurves_types *aBrakeSafe,
  /* aGradient/ */
  A_gradient_t_SDM_GradientAcceleration_types *aGradient,
  outC_addGradient_SDMModelPkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void addGradient_reset_SDMModelPkg(outC_addGradient_SDMModelPkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void addGradient_init_SDMModelPkg(outC_addGradient_SDMModelPkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _addGradient_SDMModelPkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** addGradient_SDMModelPkg.h
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */

