/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _calcAccFromGradient_SDM_GradientAcceleration_Pkg_H_
#define _calcAccFromGradient_SDM_GradientAcceleration_Pkg_H_

#include "kcg_types.h"
#include "TransformA_intToA_real_SDM_Types_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  A_gradient_element_t_SDM_GradientAcceleration_types /* A_gradient_section/ */ A_gradient_section;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_TransformA_intToA_real_SDM_Types_Pkg /* _L31=(SDM_Types_Pkg::TransformA_intToA_real#1)/ */ Context_TransformA_intToA_real_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* --------------------- (-debug) assertions  ---------------------- */
  kcg_bool /* @1/A1= */ A1_InRangeInIn_1_int32;
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* @1/IRII_Output/ */ IRII_Output_InRangeInIn_1_int32;
  kcg_int32 /* @1/B/ */ B_InRangeInIn_1_int32;
  kcg_int32 /* @1/A/ */ A_InRangeInIn_1_int32;
  kcg_int32 /* @1/IRII_Input/ */ IRII_Input_InRangeInIn_1_int32;
  kcg_int32 /* @1/_L8/ */ _L8_InRangeInIn_1_int32;
  kcg_bool /* @1/_L4/ */ _L4_InRangeInIn_1_int32;
  kcg_bool /* @1/_L2/ */ _L2_InRangeInIn_1_int32;
  kcg_int32 /* @1/_L13/ */ _L13_InRangeInIn_1_int32;
  kcg_bool /* @1/_L12/ */ _L12_InRangeInIn_1_int32;
  kcg_int32 /* @1/_L10/ */ _L10_InRangeInIn_1_int32;
  Percentage_T_SDM_Types_Pkg /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  kcg_float32 /* _L6/ */ _L6;
  Gradient_section_real_t_SDM_GradientAcceleration_types /* _L7/ */ _L7;
  kcg_float32 /* _L9/ */ _L9;
  kcg_float32 /* _L10/ */ _L10;
  kcg_int32 /* _L15/ */ _L15;
  kcg_int32 /* _L14/ */ _L14;
  kcg_int32 /* _L16/ */ _L16;
  kcg_int32 /* _L20/ */ _L20;
  Gradient_real_t_SDM_GradientAcceleration_types /* _L24/ */ _L24;
  A_gradient_element_t_SDM_GradientAcceleration_types /* _L25/ */ _L25;
  Gradient_section_real_t_SDM_GradientAcceleration_types /* _L26/ */ _L26;
  L_internal_real_Type_SDM_Types_Pkg /* _L27/ */ _L27;
  kcg_bool /* _L28/ */ _L28;
  A_internal_Type_Obu_BasicTypes_Pkg /* _L30/ */ _L30;
  A_internal_real_Type_SDM_Types_Pkg /* _L31/ */ _L31;
  Percentage_T_SDM_Types_Pkg /* _L32/ */ _L32;
  Percentage_T_SDM_Types_Pkg /* _L33/ */ _L33;
  kcg_int32 /* _L34/ */ _L34;
  kcg_bool /* _L35/ */ _L35;
  kcg_int32 /* _L36/ */ _L36;
  kcg_int32 /* _L37/ */ _L37;
  trainData_T_TIU_Types_Pkg /* _L38/ */ _L38;
  kcg_int32 /* _L40/ */ _L40;
  kcg_float32 /* _L41/ */ _L41;
} outC_calcAccFromGradient_SDM_GradientAcceleration_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDM_GradientAcceleration_Pkg::calcAccFromGradient/ */
extern void calcAccFromGradient_SDM_GradientAcceleration_Pkg(
  /* GradientSection/ */
  Gradient_section_real_t_SDM_GradientAcceleration_types *GradientSection,
  /* trainData/ */
  trainData_T_TIU_Types_Pkg *trainData,
  outC_calcAccFromGradient_SDM_GradientAcceleration_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void calcAccFromGradient_reset_SDM_GradientAcceleration_Pkg(
  outC_calcAccFromGradient_SDM_GradientAcceleration_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void calcAccFromGradient_init_SDM_GradientAcceleration_Pkg(
  outC_calcAccFromGradient_SDM_GradientAcceleration_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: SDM_GradientAcceleration_Pkg::calcAccFromGradient/
  @1: (math::InRangeInIn#1)
*/

#endif /* _calcAccFromGradient_SDM_GradientAcceleration_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** calcAccFromGradient_SDM_GradientAcceleration_Pkg.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

