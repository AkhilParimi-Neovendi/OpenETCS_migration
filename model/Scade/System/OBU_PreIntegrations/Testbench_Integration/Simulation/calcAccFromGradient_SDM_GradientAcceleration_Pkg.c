/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "calcAccFromGradient_SDM_GradientAcceleration_Pkg.h"

/* SDM_GradientAcceleration_Pkg::calcAccFromGradient/ */
void calcAccFromGradient_SDM_GradientAcceleration_Pkg(
  /* GradientSection/ */
  Gradient_section_real_t_SDM_GradientAcceleration_types *GradientSection,
  /* trainData/ */
  trainData_T_TIU_Types_Pkg *trainData,
  outC_calcAccFromGradient_SDM_GradientAcceleration_Pkg *outC)
{
  static trainData_T_TIU_Types_Pkg noname;

  outC->_L37 = kcg_lit_int64(50);
  outC->B_InRangeInIn_1_int64 = outC->_L37;
  outC->_L36 = kcg_lit_int64(1);
  outC->A_InRangeInIn_1_int64 = outC->_L36;
  outC->A1_InRangeInIn_1_int64 = outC->A_InRangeInIn_1_int64 <=
    outC->B_InRangeInIn_1_int64;
  outC->_L13_InRangeInIn_1_int64 = outC->B_InRangeInIn_1_int64;
  outC->_L40 = kcg_lit_int64(0);
  outC->IRII_Input_InRangeInIn_1_int64 = outC->_L40;
  outC->_L8_InRangeInIn_1_int64 = outC->IRII_Input_InRangeInIn_1_int64;
  outC->_L12_InRangeInIn_1_int64 = outC->_L13_InRangeInIn_1_int64 >=
    outC->_L8_InRangeInIn_1_int64;
  outC->_L10_InRangeInIn_1_int64 = outC->A_InRangeInIn_1_int64;
  outC->_L4_InRangeInIn_1_int64 = outC->_L8_InRangeInIn_1_int64 >=
    outC->_L10_InRangeInIn_1_int64;
  outC->_L2_InRangeInIn_1_int64 = outC->_L12_InRangeInIn_1_int64 &
    outC->_L4_InRangeInIn_1_int64;
  outC->IRII_Output_InRangeInIn_1_int64 = outC->_L2_InRangeInIn_1_int64;
  outC->_L20 = kcg_lit_int64(10);
  outC->_L32 = M_rotating_max_SDM_Types_Pkg;
  outC->_L33 = M_rotating_min_SDM_Types_Pkg;
  outC->_L6 = kcg_lit_float64(0.0);
  kcg_copy_Gradient_section_real_t_SDM_GradientAcceleration_types(
    &outC->_L7,
    GradientSection);
  outC->_L24 = outC->_L7.gradient;
  outC->_L5 = outC->_L24 <= outC->_L6;
  /* _L4= */
  if (outC->_L5) {
    outC->_L4 = outC->_L33;
  }
  else {
    outC->_L4 = outC->_L32;
  }
  outC->_L35 = outC->IRII_Output_InRangeInIn_1_int64;
  /* _L34= */
  if (outC->_L35) {
    outC->_L34 = outC->_L40;
  }
  else {
    outC->_L34 = outC->_L4;
  }
  outC->_L16 = outC->_L34 * outC->_L20;
  outC->_L15 = kcg_lit_int64(1000);
  outC->_L14 = outC->_L15 + outC->_L16;
  outC->_L41 = /* _L41= */(kcg_float64) outC->_L14;
  kcg_copy_trainData_T_TIU_Types_Pkg(&outC->_L38, trainData);
  kcg_copy_trainData_T_TIU_Types_Pkg(&noname, &outC->_L38);
  outC->_L30 = A_gravity_SDM_Types_Pkg;
  /* _L31=(SDM_Types_Pkg::TransformA_intToA_real#1)/ */
  TransformA_intToA_real_SDM_Types_Pkg(
    outC->_L30,
    &outC->Context_TransformA_intToA_real_1);
  outC->_L31 = outC->Context_TransformA_intToA_real_1.acc_real;
  kcg_copy_Gradient_section_real_t_SDM_GradientAcceleration_types(
    &outC->_L26,
    GradientSection);
  outC->_L28 = outC->_L26.valid;
  outC->_L27 = outC->_L26.location;
  outC->_L9 = outC->_L31 * outC->_L24;
  outC->_L10 = outC->_L9 / outC->_L41;
  outC->_L25.position = outC->_L27;
  outC->_L25.gradient_acceleration = outC->_L10;
  outC->_L25.valid = outC->_L28;
  kcg_copy_A_gradient_element_t_SDM_GradientAcceleration_types(
    &outC->A_gradient_section,
    &outC->_L25);
}

#ifndef KCG_USER_DEFINED_INIT
void calcAccFromGradient_init_SDM_GradientAcceleration_Pkg(
  outC_calcAccFromGradient_SDM_GradientAcceleration_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L41 = kcg_lit_float64(0.0);
  outC->_L40 = kcg_lit_int64(0);
  outC->_L38.valid = kcg_true;
  outC->_L38.acknowledgedByDriver = kcg_true;
  outC->_L38.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L38.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L38.trainLength = kcg_lit_int64(0);
  outC->_L38.brakePerctage = kcg_lit_int64(0);
  outC->_L38.maxTrainSpeed = kcg_lit_int64(0);
  outC->_L38.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L38.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L38.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L38.axleNumber = kcg_lit_int64(0);
  outC->_L38.numberNationalSystems = kcg_lit_int64(0);
  for (idx = 0; idx < 5; idx++) {
    outC->_L38.nationSystems[idx] = kcg_lit_int64(0);
  }
  outC->_L38.numberTractionSystems = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 4; idx1++) {
    outC->_L38.tractionSystem[idx1].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L38.tractionSystem[idx1].nid_ctraction = kcg_lit_int64(0);
  }
  outC->_L37 = kcg_lit_int64(0);
  outC->_L36 = kcg_lit_int64(0);
  outC->_L35 = kcg_true;
  outC->_L34 = kcg_lit_int64(0);
  outC->_L33 = kcg_lit_int64(0);
  outC->_L32 = kcg_lit_int64(0);
  outC->_L31 = kcg_lit_float64(0.0);
  outC->_L30 = kcg_lit_int64(0);
  outC->_L28 = kcg_true;
  outC->_L27 = kcg_lit_float64(0.0);
  outC->_L26.location = kcg_lit_float64(0.0);
  outC->_L26.gradient = kcg_lit_float64(0.0);
  outC->_L26.valid = kcg_true;
  outC->_L25.position = kcg_lit_float64(0.0);
  outC->_L25.gradient_acceleration = kcg_lit_float64(0.0);
  outC->_L25.valid = kcg_true;
  outC->_L24 = kcg_lit_float64(0.0);
  outC->_L20 = kcg_lit_int64(0);
  outC->_L16 = kcg_lit_int64(0);
  outC->_L14 = kcg_lit_int64(0);
  outC->_L15 = kcg_lit_int64(0);
  outC->_L10 = kcg_lit_float64(0.0);
  outC->_L9 = kcg_lit_float64(0.0);
  outC->_L7.location = kcg_lit_float64(0.0);
  outC->_L7.gradient = kcg_lit_float64(0.0);
  outC->_L7.valid = kcg_true;
  outC->_L6 = kcg_lit_float64(0.0);
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_lit_int64(0);
  outC->A1_InRangeInIn_1_int64 = kcg_true;
  outC->_L10_InRangeInIn_1_int64 = kcg_lit_int64(0);
  outC->_L12_InRangeInIn_1_int64 = kcg_true;
  outC->_L13_InRangeInIn_1_int64 = kcg_lit_int64(0);
  outC->_L2_InRangeInIn_1_int64 = kcg_true;
  outC->_L4_InRangeInIn_1_int64 = kcg_true;
  outC->_L8_InRangeInIn_1_int64 = kcg_lit_int64(0);
  outC->IRII_Input_InRangeInIn_1_int64 = kcg_lit_int64(0);
  outC->A_InRangeInIn_1_int64 = kcg_lit_int64(0);
  outC->B_InRangeInIn_1_int64 = kcg_lit_int64(0);
  outC->IRII_Output_InRangeInIn_1_int64 = kcg_true;
  outC->A_gradient_section.position = kcg_lit_float64(0.0);
  outC->A_gradient_section.gradient_acceleration = kcg_lit_float64(0.0);
  outC->A_gradient_section.valid = kcg_true;
  /* _L31=(SDM_Types_Pkg::TransformA_intToA_real#1)/ */
  TransformA_intToA_real_init_SDM_Types_Pkg(
    &outC->Context_TransformA_intToA_real_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void calcAccFromGradient_reset_SDM_GradientAcceleration_Pkg(
  outC_calcAccFromGradient_SDM_GradientAcceleration_Pkg *outC)
{
  /* _L31=(SDM_Types_Pkg::TransformA_intToA_real#1)/ */
  TransformA_intToA_real_reset_SDM_Types_Pkg(
    &outC->Context_TransformA_intToA_real_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** calcAccFromGradient_SDM_GradientAcceleration_Pkg.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

