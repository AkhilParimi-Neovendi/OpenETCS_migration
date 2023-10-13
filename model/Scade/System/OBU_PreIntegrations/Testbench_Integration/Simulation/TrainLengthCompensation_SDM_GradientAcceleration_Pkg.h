/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */
#ifndef _TrainLengthCompensation_SDM_GradientAcceleration_Pkg_H_
#define _TrainLengthCompensation_SDM_GradientAcceleration_Pkg_H_

#include "kcg_types.h"
#include "SearchIndexInGradientProfile_SDM_GradientAcceleration_Pkg.h"
#include "internalCycle_SDM_GradientAcceleration_Pkg.h"
#include "TransformL_intToL_real_SDM_Types_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  GradientProfile_real_compensated_t_SDM_GradientAcceleration_types /* CompensatedProfile/ */ CompensatedProfile;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_internalCycle_SDM_GradientAcceleration_Pkg /* _L5=(SDM_GradientAcceleration_Pkg::internalCycle#1)/ */ Context_internalCycle_1[100];
  outC_SearchIndexInGradientProfile_SDM_GradientAcceleration_Pkg /* _L89=(SDM_GradientAcceleration_Pkg::SearchIndexInGradientProfile)/ */ Context_SearchIndexInGradientProfile;
  outC_SearchIndexInGradientProfile_SDM_GradientAcceleration_Pkg /* _L90=(SDM_GradientAcceleration_Pkg::SearchIndexInGradientProfile#1)/ */ Context_SearchIndexInGradientProfile_1;
  outC_TransformL_intToL_real_SDM_Types_Pkg /* _L92=(SDM_Types_Pkg::TransformL_intToL_real#1)/ */ Context_TransformL_intToL_real_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  GradientProfile_real_compensated_t_SDM_GradientAcceleration_types /* initilizedCompensatedProfile/ */ initilizedCompensatedProfile;
  kcg_int64 /* d_est_front_index/ */ d_est_front_index;
  kcg_int64 /* rear_end_index/ */ rear_end_index;
  GradientProfile_real_t_SDM_GradientAcceleration_types /* _L1/ */ _L1;
  ACC_SDM_GradientAcceleration_Pkg /* _L3/ */ _L3;
  kcg_int64 /* _L5/ */ _L5;
  L_internal_real_Type_SDM_Types_Pkg /* _L6/ */ _L6;
  array_float64_100 /* _L7/ */ _L7;
  _103_array /* _L8/ */ _L8;
  ACC_SDM_GradientAcceleration_Pkg /* _L9/ */ _L9;
  Gradient_section_real_t_SDM_GradientAcceleration_types /* _L11/ */ _L11;
  kcg_float64 /* _L12/ */ _L12;
  kcg_bool /* _L13/ */ _L13;
  GradientProfile_real_t_SDM_GradientAcceleration_types /* _L15/ */ _L15;
  Gradient_section_real_t_SDM_GradientAcceleration_types /* _L16/ */ _L16;
  kcg_bool /* _L17/ */ _L17;
  GradientProfile_real_compensated_t_SDM_GradientAcceleration_types /* _L18/ */ _L18;
  L_internal_real_Type_SDM_Types_Pkg /* _L21/ */ _L21;
  GradientProfile_real_compensated_t_SDM_GradientAcceleration_types /* _L37/ */ _L37;
  GradientProfile_real_t_SDM_GradientAcceleration_types /* _L45/ */ _L45;
  kcg_int64 /* _L52/ */ _L52;
  kcg_int64 /* _L66/ */ _L66;
  GradientProfile_real_compensated_t_SDM_GradientAcceleration_types /* _L88/ */ _L88;
  kcg_int64 /* _L89/ */ _L89;
  kcg_int64 /* _L90/ */ _L90;
  L_internal_real_Type_SDM_Types_Pkg /* _L92/ */ _L92;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L91/ */ _L91;
  trainData_T_TIU_Types_Pkg /* _L93/ */ _L93;
  kcg_float64 /* _L94/ */ _L94;
  L_internal_real_Type_SDM_Types_Pkg /* _L95/ */ _L95;
  GradientProfile_real_t_SDM_GradientAcceleration_types /* _L96/ */ _L96;
  L_internal_real_Type_SDM_Types_Pkg /* _L97/ */ _L97;
} outC_TrainLengthCompensation_SDM_GradientAcceleration_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDM_GradientAcceleration_Pkg::TrainLengthCompensation/ */
extern void TrainLengthCompensation_SDM_GradientAcceleration_Pkg(
  /* d_est_front/ */
  L_internal_real_Type_SDM_Types_Pkg d_est_front,
  /* GradientProfile/ */
  GradientProfile_real_t_SDM_GradientAcceleration_types *GradientProfile,
  /* trainData/ */
  trainData_T_TIU_Types_Pkg *trainData,
  /* SvLPosition/ */
  L_internal_real_Type_SDM_Types_Pkg SvLPosition,
  outC_TrainLengthCompensation_SDM_GradientAcceleration_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void TrainLengthCompensation_reset_SDM_GradientAcceleration_Pkg(
  outC_TrainLengthCompensation_SDM_GradientAcceleration_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void TrainLengthCompensation_init_SDM_GradientAcceleration_Pkg(
  outC_TrainLengthCompensation_SDM_GradientAcceleration_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _TrainLengthCompensation_SDM_GradientAcceleration_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TrainLengthCompensation_SDM_GradientAcceleration_Pkg.h
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */

