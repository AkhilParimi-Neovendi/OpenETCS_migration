/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */
#ifndef _CalcA_Gradient_SDM_GradientAcceleration_Pkg_H_
#define _CalcA_Gradient_SDM_GradientAcceleration_Pkg_H_

#include "kcg_types.h"
#include "calcAccFromGradient_SDM_GradientAcceleration_Pkg.h"
#include "TrainLengthCompensation_SDM_GradientAcceleration_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  A_gradient_t_SDM_GradientAcceleration_types /* A_gradient/ */ A_gradient;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_calcAccFromGradient_SDM_GradientAcceleration_Pkg /* _L16=(SDM_GradientAcceleration_Pkg::calcAccFromGradient#2)/ */ Context_calcAccFromGradient_2[100];
  outC_TrainLengthCompensation_SDM_GradientAcceleration_Pkg /* _L1=(SDM_GradientAcceleration_Pkg::TrainLengthCompensation#1)/ */ Context_TrainLengthCompensation_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  GradientProfile_real_compensated_t_SDM_GradientAcceleration_types /* _L1/ */ _L1;
  L_internal_real_Type_SDM_Types_Pkg /* _L2/ */ _L2;
  GradientProfile_real_t_SDM_GradientAcceleration_types /* _L3/ */ _L3;
  trainData_T_TIU_Types_Pkg /* _L4/ */ _L4;
  L_internal_real_Type_SDM_Types_Pkg /* _L5/ */ _L5;
  A_gradient_t_SDM_GradientAcceleration_types /* _L16/ */ _L16;
  trainData_T_TIU_Types_Pkg /* _L17/ */ _L17;
  _99_array /* _L18/ */ _L18;
} outC_CalcA_Gradient_SDM_GradientAcceleration_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDM_GradientAcceleration_Pkg::CalcA_Gradient/ */
extern void CalcA_Gradient_SDM_GradientAcceleration_Pkg(
  /* d_est_front/ */
  L_internal_real_Type_SDM_Types_Pkg d_est_front,
  /* GradientProfile/ */
  GradientProfile_real_t_SDM_GradientAcceleration_types *GradientProfile,
  /* trainData/ */
  trainData_T_TIU_Types_Pkg *trainData,
  /* SvLPosition/ */
  L_internal_real_Type_SDM_Types_Pkg SvLPosition,
  outC_CalcA_Gradient_SDM_GradientAcceleration_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CalcA_Gradient_reset_SDM_GradientAcceleration_Pkg(
  outC_CalcA_Gradient_SDM_GradientAcceleration_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CalcA_Gradient_init_SDM_GradientAcceleration_Pkg(
  outC_CalcA_Gradient_SDM_GradientAcceleration_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CalcA_Gradient_SDM_GradientAcceleration_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CalcA_Gradient_SDM_GradientAcceleration_Pkg.h
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */

