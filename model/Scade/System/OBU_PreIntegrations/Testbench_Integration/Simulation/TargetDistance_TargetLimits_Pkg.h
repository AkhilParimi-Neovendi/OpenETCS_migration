/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */
#ifndef _TargetDistance_TargetLimits_Pkg_H_
#define _TargetDistance_TargetLimits_Pkg_H_

#include "kcg_types.h"
#include "limitPositive_SDM_Types_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  L_internal_real_Type_SDM_Types_Pkg /* targetDistance/ */ targetDistance;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_limitPositive_SDM_Types_Pkg /* _L23=(SDM_Types_Pkg::limitPositive#1)/ */ Context_limitPositive_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float64 /* @1/Mi_Output/ */ Mi_Output_Min_1_float64;
  kcg_float64 /* @1/I2/ */ I2_Min_1_float64;
  kcg_float64 /* @1/I1/ */ I1_Min_1_float64;
  kcg_bool /* @1/_L25/ */ _L25_Min_1_float64;
  kcg_float64 /* @1/_L24/ */ _L24_Min_1_float64;
  kcg_float64 /* @1/_L22/ */ _L22_Min_1_float64;
  kcg_float64 /* @1/_L21/ */ _L21_Min_1_float64;
  kcg_bool /* _L15/ */ _L15;
  kcg_float64 /* _L23/ */ _L23;
  kcg_float64 /* _L24/ */ _L24;
  L_internal_real_Type_SDM_Types_Pkg /* _L31/ */ _L31;
  kcg_float64 /* _L30/ */ _L30;
  L_internal_real_Type_SDM_Types_Pkg /* _L29/ */ _L29;
  kcg_float64 /* _L28/ */ _L28;
  L_internal_real_Type_SDM_Types_Pkg /* _L27/ */ _L27;
  kcg_float64 /* _L26/ */ _L26;
  L_internal_real_Type_SDM_Types_Pkg /* _L25/ */ _L25;
  L_internal_real_Type_SDM_Types_Pkg /* _L34/ */ _L34;
  L_internal_real_Type_SDM_Types_Pkg /* _L33/ */ _L33;
  kcg_float64 /* _L32/ */ _L32;
} outC_TargetDistance_TargetLimits_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* TargetLimits_Pkg::TargetDistance/ */
extern void TargetDistance_TargetLimits_Pkg(
  /* d_P_of_V_target/ */
  L_internal_real_Type_SDM_Types_Pkg d_P_of_V_target,
  /* d_maxsafefront/ */
  L_internal_real_Type_SDM_Types_Pkg d_maxsafefront,
  /* d_estfront/ */
  L_internal_real_Type_SDM_Types_Pkg d_estfront,
  /* d_svl/ */
  L_internal_real_Type_SDM_Types_Pkg d_svl,
  /* d_eoa/ */
  L_internal_real_Type_SDM_Types_Pkg d_eoa,
  /* isEoAorSvL/ */
  kcg_bool isEoAorSvL,
  outC_TargetDistance_TargetLimits_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void TargetDistance_reset_TargetLimits_Pkg(
  outC_TargetDistance_TargetLimits_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void TargetDistance_init_TargetLimits_Pkg(
  outC_TargetDistance_TargetLimits_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: TargetLimits_Pkg::TargetDistance/
  @1: (math::Min#1)
*/

#endif /* _TargetDistance_TargetLimits_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TargetDistance_TargetLimits_Pkg.h
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */

