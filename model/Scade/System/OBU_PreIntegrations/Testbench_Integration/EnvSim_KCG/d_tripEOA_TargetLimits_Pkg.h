/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _d_tripEOA_TargetLimits_Pkg_H_
#define _d_tripEOA_TargetLimits_Pkg_H_

#include "kcg_types.h"
#include "TransformL_intToL_real_SDM_Types_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  L_internal_real_Type_SDM_Types_Pkg /* D_tripEOA/ */ D_tripEOA;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_TransformL_intToL_real_SDM_Types_Pkg /* _L34=(SDM_Types_Pkg::TransformL_intToL_real#1)/ */ Context_TransformL_intToL_real_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float64 /* @1/Ma_Output/ */ Ma_Output_Max_1_float64;
  kcg_float64 /* @1/I2/ */ I2_Max_1_float64;
  kcg_float64 /* @1/I1/ */ I1_Max_1_float64;
  kcg_float64 /* @1/_L4/ */ _L4_Max_1_float64;
  kcg_bool /* @1/_L3/ */ _L3_Max_1_float64;
  kcg_float64 /* @1/_L2/ */ _L2_Max_1_float64;
  kcg_float64 /* @1/_L1/ */ _L1_Max_1_float64;
  kcg_float64 /* @2/A_Output/ */ A_Output_Abs_2_float64;
  kcg_float64 /* @2/A_Input/ */ A_Input_Abs_2_float64;
  kcg_float64 /* @2/_L8/ */ _L8_Abs_2_float64;
  kcg_float64 /* @2/_L5/ */ _L5_Abs_2_float64;
  kcg_float64 /* @2/_L3/ */ _L3_Abs_2_float64;
  kcg_float64 /* @2/_L2/ */ _L2_Abs_2_float64;
  kcg_bool /* @2/_L1/ */ _L1_Abs_2_float64;
  kcg_float64 /* _L4/ */ _L4;
  kcg_float64 /* _L7/ */ _L7;
  kcg_float64 /* _L10/ */ _L10;
  kcg_float64 /* _L12/ */ _L12;
  kcg_float64 /* _L13/ */ _L13;
  kcg_float64 /* _L14/ */ _L14;
  L_internal_real_Type_SDM_Types_Pkg /* _L15/ */ _L15;
  kcg_float64 /* _L16/ */ _L16;
  L_internal_real_Type_SDM_Types_Pkg /* _L24/ */ _L24;
  L_internal_real_Type_SDM_Types_Pkg /* _L23/ */ _L23;
  TrainLocations_real_T_SDM_Types_Pkg /* _L22/ */ _L22;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L21/ */ _L21;
  L_internal_real_Type_SDM_Types_Pkg /* _L20/ */ _L20;
  L_internal_real_Type_SDM_Types_Pkg /* _L32/ */ _L32;
  kcg_float64 /* _L31/ */ _L31;
  kcg_float64 /* _L29/ */ _L29;
  trainData_internal_t_SDM_Types_Pkg /* _L33/ */ _L33;
  L_internal_real_Type_SDM_Types_Pkg /* _L34/ */ _L34;
} outC_d_tripEOA_TargetLimits_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* TargetLimits_Pkg::d_tripEOA/ */
extern void d_tripEOA_TargetLimits_Pkg(
  /* D_EOA/ */
  L_internal_real_Type_SDM_Types_Pkg D_EOA,
  /* trainLocations/ */
  TrainLocations_real_T_SDM_Types_Pkg *trainLocations,
  /* trainData_int/ */
  trainData_internal_t_SDM_Types_Pkg *trainData_int,
  outC_d_tripEOA_TargetLimits_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void d_tripEOA_reset_TargetLimits_Pkg(
  outC_d_tripEOA_TargetLimits_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void d_tripEOA_init_TargetLimits_Pkg(
  outC_d_tripEOA_TargetLimits_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: TargetLimits_Pkg::d_tripEOA/
  @1: (math::Max#1)
  @2: (math::Abs#2)
*/

#endif /* _d_tripEOA_TargetLimits_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** d_tripEOA_TargetLimits_Pkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

