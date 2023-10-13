/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalcA_Gradient_SDM_GradientAcceleration_Pkg.h"

/* SDM_GradientAcceleration_Pkg::CalcA_Gradient/ */
void CalcA_Gradient_SDM_GradientAcceleration_Pkg(
  /* d_est_front/ */
  L_internal_real_Type_SDM_Types_Pkg d_est_front,
  /* GradientProfile/ */
  GradientProfile_real_t_SDM_GradientAcceleration_types *GradientProfile,
  /* trainData/ */
  trainData_T_TIU_Types_Pkg *trainData,
  /* SvLPosition/ */
  L_internal_real_Type_SDM_Types_Pkg SvLPosition,
  outC_CalcA_Gradient_SDM_GradientAcceleration_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  kcg_copy_trainData_T_TIU_Types_Pkg(&outC->_L17, trainData);
  /* _L18/ */
  for (idx = 0; idx < 100; idx++) {
    kcg_copy_trainData_T_TIU_Types_Pkg(&outC->_L18[idx], &outC->_L17);
  }
  outC->_L2 = d_est_front;
  kcg_copy_GradientProfile_real_t_SDM_GradientAcceleration_types(
    &outC->_L3,
    GradientProfile);
  kcg_copy_trainData_T_TIU_Types_Pkg(&outC->_L4, trainData);
  outC->_L5 = SvLPosition;
  /* _L1=(SDM_GradientAcceleration_Pkg::TrainLengthCompensation#1)/ */
  TrainLengthCompensation_SDM_GradientAcceleration_Pkg(
    outC->_L2,
    &outC->_L3,
    &outC->_L4,
    outC->_L5,
    &outC->Context_TrainLengthCompensation_1);
  kcg_copy_GradientProfile_real_compensated_t_SDM_GradientAcceleration_types(
    &outC->_L1,
    &outC->Context_TrainLengthCompensation_1.CompensatedProfile);
  /* _L16= */
  for (idx1 = 0; idx1 < 100; idx1++) {
    /* _L16=(SDM_GradientAcceleration_Pkg::calcAccFromGradient#2)/ */
    calcAccFromGradient_SDM_GradientAcceleration_Pkg(
      &outC->_L1[idx1],
      &outC->_L18[idx1],
      &outC->Context_calcAccFromGradient_2[idx1]);
    kcg_copy_A_gradient_element_t_SDM_GradientAcceleration_types(
      &outC->_L16[idx1],
      &outC->Context_calcAccFromGradient_2[idx1].A_gradient_section);
  }
  kcg_copy_A_gradient_t_SDM_GradientAcceleration_types(
    &outC->A_gradient,
    &outC->_L16);
}

#ifndef KCG_USER_DEFINED_INIT
void CalcA_Gradient_init_SDM_GradientAcceleration_Pkg(
  outC_CalcA_Gradient_SDM_GradientAcceleration_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;
  static kcg_size idx8;
  static kcg_size idx9;
  static kcg_size idx10;
  static kcg_size idx11;

  for (idx3 = 0; idx3 < 100; idx3++) {
    outC->_L18[idx3].valid = kcg_true;
    outC->_L18[idx3].acknowledgedByDriver = kcg_true;
    outC->_L18[idx3].trainCategory =
      NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
    outC->_L18[idx3].cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
    outC->_L18[idx3].trainLength = kcg_lit_int64(0);
    outC->_L18[idx3].brakePerctage = kcg_lit_int64(0);
    outC->_L18[idx3].maxTrainSpeed = kcg_lit_int64(0);
    outC->_L18[idx3].loadingGauge =
      M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
    outC->_L18[idx3].axleLoadCategory = M_AXLELOADCAT_A;
    outC->_L18[idx3].airtightSystem = M_AIRTIGHT_Not_fitted;
    outC->_L18[idx3].axleNumber = kcg_lit_int64(0);
    outC->_L18[idx3].numberNationalSystems = kcg_lit_int64(0);
    for (idx1 = 0; idx1 < 5; idx1++) {
      outC->_L18[idx3].nationSystems[idx1] = kcg_lit_int64(0);
    }
    outC->_L18[idx3].numberTractionSystems = kcg_lit_int64(0);
    for (idx2 = 0; idx2 < 4; idx2++) {
      outC->_L18[idx3].tractionSystem[idx2].m_voltage =
        M_VOLTAGE_Line_not_fitted_with_any_traction_system;
      outC->_L18[idx3].tractionSystem[idx2].nid_ctraction = kcg_lit_int64(0);
    }
  }
  outC->_L17.valid = kcg_true;
  outC->_L17.acknowledgedByDriver = kcg_true;
  outC->_L17.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L17.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L17.trainLength = kcg_lit_int64(0);
  outC->_L17.brakePerctage = kcg_lit_int64(0);
  outC->_L17.maxTrainSpeed = kcg_lit_int64(0);
  outC->_L17.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L17.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L17.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L17.axleNumber = kcg_lit_int64(0);
  outC->_L17.numberNationalSystems = kcg_lit_int64(0);
  for (idx4 = 0; idx4 < 5; idx4++) {
    outC->_L17.nationSystems[idx4] = kcg_lit_int64(0);
  }
  outC->_L17.numberTractionSystems = kcg_lit_int64(0);
  for (idx5 = 0; idx5 < 4; idx5++) {
    outC->_L17.tractionSystem[idx5].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L17.tractionSystem[idx5].nid_ctraction = kcg_lit_int64(0);
  }
  for (idx6 = 0; idx6 < 100; idx6++) {
    outC->_L16[idx6].position = kcg_lit_float64(0.0);
    outC->_L16[idx6].gradient_acceleration = kcg_lit_float64(0.0);
    outC->_L16[idx6].valid = kcg_true;
  }
  outC->_L5 = kcg_lit_float64(0.0);
  outC->_L4.valid = kcg_true;
  outC->_L4.acknowledgedByDriver = kcg_true;
  outC->_L4.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L4.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L4.trainLength = kcg_lit_int64(0);
  outC->_L4.brakePerctage = kcg_lit_int64(0);
  outC->_L4.maxTrainSpeed = kcg_lit_int64(0);
  outC->_L4.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L4.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L4.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L4.axleNumber = kcg_lit_int64(0);
  outC->_L4.numberNationalSystems = kcg_lit_int64(0);
  for (idx7 = 0; idx7 < 5; idx7++) {
    outC->_L4.nationSystems[idx7] = kcg_lit_int64(0);
  }
  outC->_L4.numberTractionSystems = kcg_lit_int64(0);
  for (idx8 = 0; idx8 < 4; idx8++) {
    outC->_L4.tractionSystem[idx8].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L4.tractionSystem[idx8].nid_ctraction = kcg_lit_int64(0);
  }
  for (idx9 = 0; idx9 < 50; idx9++) {
    outC->_L3[idx9].location = kcg_lit_float64(0.0);
    outC->_L3[idx9].gradient = kcg_lit_float64(0.0);
    outC->_L3[idx9].valid = kcg_true;
  }
  outC->_L2 = kcg_lit_float64(0.0);
  for (idx10 = 0; idx10 < 100; idx10++) {
    outC->_L1[idx10].location = kcg_lit_float64(0.0);
    outC->_L1[idx10].gradient = kcg_lit_float64(0.0);
    outC->_L1[idx10].valid = kcg_true;
  }
  for (idx11 = 0; idx11 < 100; idx11++) {
    outC->A_gradient[idx11].position = kcg_lit_float64(0.0);
    outC->A_gradient[idx11].gradient_acceleration = kcg_lit_float64(0.0);
    outC->A_gradient[idx11].valid = kcg_true;
  }
  for (idx = 0; idx < 100; idx++) {
    /* _L16=(SDM_GradientAcceleration_Pkg::calcAccFromGradient#2)/ */
    calcAccFromGradient_init_SDM_GradientAcceleration_Pkg(
      &outC->Context_calcAccFromGradient_2[idx]);
  }
  /* _L1=(SDM_GradientAcceleration_Pkg::TrainLengthCompensation#1)/ */
  TrainLengthCompensation_init_SDM_GradientAcceleration_Pkg(
    &outC->Context_TrainLengthCompensation_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CalcA_Gradient_reset_SDM_GradientAcceleration_Pkg(
  outC_CalcA_Gradient_SDM_GradientAcceleration_Pkg *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 100; idx++) {
    /* _L16=(SDM_GradientAcceleration_Pkg::calcAccFromGradient#2)/ */
    calcAccFromGradient_reset_SDM_GradientAcceleration_Pkg(
      &outC->Context_calcAccFromGradient_2[idx]);
  }
  /* _L1=(SDM_GradientAcceleration_Pkg::TrainLengthCompensation#1)/ */
  TrainLengthCompensation_reset_SDM_GradientAcceleration_Pkg(
    &outC->Context_TrainLengthCompensation_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CalcA_Gradient_SDM_GradientAcceleration_Pkg.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

