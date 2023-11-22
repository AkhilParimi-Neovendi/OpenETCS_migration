/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrainLengthCompensation_SDM_GradientAcceleration_Pkg.h"

/* SDM_GradientAcceleration_Pkg::TrainLengthCompensation/ */
void TrainLengthCompensation_SDM_GradientAcceleration_Pkg(
  /* d_est_front/ */
  L_internal_real_Type_SDM_Types_Pkg d_est_front,
  /* GradientProfile/ */
  GradientProfile_real_t_SDM_GradientAcceleration_types *GradientProfile,
  /* trainData/ */
  trainData_T_TIU_Types_Pkg *trainData,
  /* SvLPosition/ */
  L_internal_real_Type_SDM_Types_Pkg SvLPosition,
  outC_TrainLengthCompensation_SDM_GradientAcceleration_Pkg *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  ACC_SDM_GradientAcceleration_Pkg acc;
  kcg_size idx3;
  kcg_int32 noname;

  outC->_L97 = d_est_front;
  kcg_copy_GradientProfile_real_t_SDM_GradientAcceleration_types(
    &outC->_L96,
    GradientProfile);
  outC->_L95 = d_est_front;
  kcg_copy_trainData_T_TIU_Types_Pkg(&outC->_L93, trainData);
  outC->_L91 = outC->_L93.trainLength;
  /* _L92=(SDM_Types_Pkg::TransformL_intToL_real#1)/ */
  TransformL_intToL_real_SDM_Types_Pkg(
    outC->_L91,
    &outC->Context_TransformL_intToL_real_1);
  outC->_L92 = outC->Context_TransformL_intToL_real_1.loc_real;
  outC->_L94 = outC->_L95 - outC->_L92;
  /* _L90=(SDM_GradientAcceleration_Pkg::SearchIndexInGradientProfile#1)/ */
  SearchIndexInGradientProfile_SDM_GradientAcceleration_Pkg(
    &outC->_L96,
    outC->_L94,
    &outC->_1_Context_SearchIndexInGradientProfile_1);
  outC->_L90 = outC->_1_Context_SearchIndexInGradientProfile_1.index;
  kcg_copy_GradientProfile_real_t_SDM_GradientAcceleration_types(
    &outC->_L45,
    GradientProfile);
  /* _L89=(SDM_GradientAcceleration_Pkg::SearchIndexInGradientProfile)/ */
  SearchIndexInGradientProfile_SDM_GradientAcceleration_Pkg(
    &outC->_L45,
    outC->_L97,
    &outC->Context_SearchIndexInGradientProfile);
  outC->_L89 = outC->Context_SearchIndexInGradientProfile.index;
  outC->_L21 = d_est_front;
  outC->d_est_front_index = outC->_L89;
  outC->_L52 = outC->d_est_front_index;
  outC->rear_end_index = outC->_L90;
  outC->_L66 = outC->rear_end_index;
  outC->_L12 = kcg_lit_float32(0.0);
  outC->_L13 = kcg_false;
  outC->_L11.location = outC->_L12;
  outC->_L11.gradient = outC->_L12;
  outC->_L11.valid = outC->_L13;
  /* _L18/ */
  for (idx = 0; idx < 100; idx++) {
    kcg_copy_Gradient_section_real_t_SDM_GradientAcceleration_types(
      &outC->_L18[idx],
      &outC->_L11);
  }
  kcg_copy_GradientProfile_real_compensated_t_SDM_GradientAcceleration_types(
    &outC->initilizedCompensatedProfile,
    &outC->_L18);
  kcg_copy_GradientProfile_real_compensated_t_SDM_GradientAcceleration_types(
    &outC->_L37,
    &outC->initilizedCompensatedProfile);
  outC->_L9.frontPos = outC->_L21;
  outC->_L9.frontIndex = outC->_L52;
  outC->_L9.rearPos = outC->_L94;
  outC->_L9.rearIndex = outC->_L66;
  kcg_copy_GradientProfile_real_compensated_t_SDM_GradientAcceleration_types(
    &outC->_L9.compensatedGradientProfile,
    &outC->_L37);
  outC->_L6 = SvLPosition;
  /* _L7/ */
  for (idx1 = 0; idx1 < 100; idx1++) {
    outC->_L7[idx1] = outC->_L6;
  }
  kcg_copy_GradientProfile_real_t_SDM_GradientAcceleration_types(
    &outC->_L1,
    GradientProfile);
  /* _L8/ */
  for (idx2 = 0; idx2 < 100; idx2++) {
    kcg_copy_GradientProfile_real_t_SDM_GradientAcceleration_types(
      &outC->_L8[idx2],
      &outC->_L1);
  }
  kcg_copy_GradientProfile_real_t_SDM_GradientAcceleration_types(
    &outC->_L15,
    GradientProfile);
  kcg_copy_Gradient_section_real_t_SDM_GradientAcceleration_types(
    &outC->_L16,
    &outC->_L15[0]);
  outC->_L17 = outC->_L16.valid;
  kcg_copy_ACC_SDM_GradientAcceleration_Pkg(&outC->_L3, &outC->_L9);
  /* _L5= */
  if (outC->_L17) {
    /* _L5= */
    for (idx3 = 0; idx3 < 100; idx3++) {
      kcg_copy_ACC_SDM_GradientAcceleration_Pkg(&acc, &outC->_L3);
      /* _L5=(SDM_GradientAcceleration_Pkg::internalCycle#1)/ */
      internalCycle_SDM_GradientAcceleration_Pkg(
        /* _L5= */(kcg_int32) idx3,
        &acc,
        outC->_L7[idx3],
        &outC->_L8[idx3],
        &outC->Context_internalCycle_1[idx3]);
      kcg_copy_ACC_SDM_GradientAcceleration_Pkg(
        &outC->_L3,
        &outC->Context_internalCycle_1[idx3].AccuOut);
      outC->_L5 = /* _L5= */(kcg_int32) (idx3 + 1);
      /* _L5= */
      if (!outC->Context_internalCycle_1[idx3].condition) {
        break;
      }
    }
  }
  else {
    outC->_L5 = kcg_lit_int32(0);
  }
  kcg_copy_GradientProfile_real_compensated_t_SDM_GradientAcceleration_types(
    &outC->_L88,
    &outC->_L3.compensatedGradientProfile);
  kcg_copy_GradientProfile_real_compensated_t_SDM_GradientAcceleration_types(
    &outC->CompensatedProfile,
    &outC->_L88);
  noname = outC->_L5;
}

#ifndef KCG_USER_DEFINED_INIT
void TrainLengthCompensation_init_SDM_GradientAcceleration_Pkg(
  outC_TrainLengthCompensation_SDM_GradientAcceleration_Pkg *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;
  kcg_size idx6;
  kcg_size idx7;
  kcg_size idx8;
  kcg_size idx9;
  kcg_size idx10;
  kcg_size idx11;
  kcg_size idx12;
  kcg_size idx13;
  kcg_size idx14;
  kcg_size idx15;
  kcg_size idx16;

  outC->_L97 = kcg_lit_float32(0.0);
  for (idx1 = 0; idx1 < 50; idx1++) {
    outC->_L96[idx1].location = kcg_lit_float32(0.0);
    outC->_L96[idx1].gradient = kcg_lit_float32(0.0);
    outC->_L96[idx1].valid = kcg_true;
  }
  outC->_L95 = kcg_lit_float32(0.0);
  outC->_L94 = kcg_lit_float32(0.0);
  outC->_L93.valid = kcg_true;
  outC->_L93.acknowledgedByDriver = kcg_true;
  outC->_L93.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L93.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L93.trainLength = kcg_lit_int32(0);
  outC->_L93.brakePerctage = kcg_lit_int32(0);
  outC->_L93.maxTrainSpeed = kcg_lit_int32(0);
  outC->_L93.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L93.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L93.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L93.axleNumber = kcg_lit_int32(0);
  outC->_L93.numberNationalSystems = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 5; idx2++) {
    outC->_L93.nationSystems[idx2] = kcg_lit_int32(0);
  }
  outC->_L93.numberTractionSystems = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 4; idx3++) {
    outC->_L93.tractionSystem[idx3].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L93.tractionSystem[idx3].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L91 = kcg_lit_int32(0);
  outC->_L92 = kcg_lit_float32(0.0);
  outC->_L90 = kcg_lit_int32(0);
  outC->_L89 = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 100; idx4++) {
    outC->_L88[idx4].location = kcg_lit_float32(0.0);
    outC->_L88[idx4].gradient = kcg_lit_float32(0.0);
    outC->_L88[idx4].valid = kcg_true;
  }
  outC->_L66 = kcg_lit_int32(0);
  outC->_L52 = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 50; idx5++) {
    outC->_L45[idx5].location = kcg_lit_float32(0.0);
    outC->_L45[idx5].gradient = kcg_lit_float32(0.0);
    outC->_L45[idx5].valid = kcg_true;
  }
  for (idx6 = 0; idx6 < 100; idx6++) {
    outC->_L37[idx6].location = kcg_lit_float32(0.0);
    outC->_L37[idx6].gradient = kcg_lit_float32(0.0);
    outC->_L37[idx6].valid = kcg_true;
  }
  outC->_L21 = kcg_lit_float32(0.0);
  for (idx7 = 0; idx7 < 100; idx7++) {
    outC->_L18[idx7].location = kcg_lit_float32(0.0);
    outC->_L18[idx7].gradient = kcg_lit_float32(0.0);
    outC->_L18[idx7].valid = kcg_true;
  }
  outC->_L17 = kcg_true;
  outC->_L16.location = kcg_lit_float32(0.0);
  outC->_L16.gradient = kcg_lit_float32(0.0);
  outC->_L16.valid = kcg_true;
  for (idx8 = 0; idx8 < 50; idx8++) {
    outC->_L15[idx8].location = kcg_lit_float32(0.0);
    outC->_L15[idx8].gradient = kcg_lit_float32(0.0);
    outC->_L15[idx8].valid = kcg_true;
  }
  outC->_L13 = kcg_true;
  outC->_L12 = kcg_lit_float32(0.0);
  outC->_L11.location = kcg_lit_float32(0.0);
  outC->_L11.gradient = kcg_lit_float32(0.0);
  outC->_L11.valid = kcg_true;
  outC->_L9.frontPos = kcg_lit_float32(0.0);
  outC->_L9.frontIndex = kcg_lit_int32(0);
  outC->_L9.rearPos = kcg_lit_float32(0.0);
  outC->_L9.rearIndex = kcg_lit_int32(0);
  for (idx9 = 0; idx9 < 100; idx9++) {
    outC->_L9.compensatedGradientProfile[idx9].location = kcg_lit_float32(0.0);
    outC->_L9.compensatedGradientProfile[idx9].gradient = kcg_lit_float32(0.0);
    outC->_L9.compensatedGradientProfile[idx9].valid = kcg_true;
  }
  for (idx11 = 0; idx11 < 100; idx11++) {
    for (idx10 = 0; idx10 < 50; idx10++) {
      outC->_L8[idx11][idx10].location = kcg_lit_float32(0.0);
      outC->_L8[idx11][idx10].gradient = kcg_lit_float32(0.0);
      outC->_L8[idx11][idx10].valid = kcg_true;
    }
  }
  for (idx12 = 0; idx12 < 100; idx12++) {
    outC->_L7[idx12] = kcg_lit_float32(0.0);
  }
  outC->_L6 = kcg_lit_float32(0.0);
  outC->_L5 = kcg_lit_int32(0);
  outC->_L3.frontPos = kcg_lit_float32(0.0);
  outC->_L3.frontIndex = kcg_lit_int32(0);
  outC->_L3.rearPos = kcg_lit_float32(0.0);
  outC->_L3.rearIndex = kcg_lit_int32(0);
  for (idx13 = 0; idx13 < 100; idx13++) {
    outC->_L3.compensatedGradientProfile[idx13].location = kcg_lit_float32(0.0);
    outC->_L3.compensatedGradientProfile[idx13].gradient = kcg_lit_float32(0.0);
    outC->_L3.compensatedGradientProfile[idx13].valid = kcg_true;
  }
  for (idx14 = 0; idx14 < 50; idx14++) {
    outC->_L1[idx14].location = kcg_lit_float32(0.0);
    outC->_L1[idx14].gradient = kcg_lit_float32(0.0);
    outC->_L1[idx14].valid = kcg_true;
  }
  outC->rear_end_index = kcg_lit_int32(0);
  outC->d_est_front_index = kcg_lit_int32(0);
  for (idx15 = 0; idx15 < 100; idx15++) {
    outC->initilizedCompensatedProfile[idx15].location = kcg_lit_float32(0.0);
    outC->initilizedCompensatedProfile[idx15].gradient = kcg_lit_float32(0.0);
    outC->initilizedCompensatedProfile[idx15].valid = kcg_true;
  }
  for (idx16 = 0; idx16 < 100; idx16++) {
    outC->CompensatedProfile[idx16].location = kcg_lit_float32(0.0);
    outC->CompensatedProfile[idx16].gradient = kcg_lit_float32(0.0);
    outC->CompensatedProfile[idx16].valid = kcg_true;
  }
  for (idx = 0; idx < 100; idx++) {
    /* _L5=(SDM_GradientAcceleration_Pkg::internalCycle#1)/ */
    internalCycle_init_SDM_GradientAcceleration_Pkg(
      &outC->Context_internalCycle_1[idx]);
  }
  /* _L89=(SDM_GradientAcceleration_Pkg::SearchIndexInGradientProfile)/ */
  SearchIndexInGradientProfile_init_SDM_GradientAcceleration_Pkg(
    &outC->Context_SearchIndexInGradientProfile);
  /* _L90=(SDM_GradientAcceleration_Pkg::SearchIndexInGradientProfile#1)/ */
  SearchIndexInGradientProfile_init_SDM_GradientAcceleration_Pkg(
    &outC->_1_Context_SearchIndexInGradientProfile_1);
  /* _L92=(SDM_Types_Pkg::TransformL_intToL_real#1)/ */
  TransformL_intToL_real_init_SDM_Types_Pkg(
    &outC->Context_TransformL_intToL_real_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TrainLengthCompensation_reset_SDM_GradientAcceleration_Pkg(
  outC_TrainLengthCompensation_SDM_GradientAcceleration_Pkg *outC)
{
  kcg_size idx;

  for (idx = 0; idx < 100; idx++) {
    /* _L5=(SDM_GradientAcceleration_Pkg::internalCycle#1)/ */
    internalCycle_reset_SDM_GradientAcceleration_Pkg(
      &outC->Context_internalCycle_1[idx]);
  }
  /* _L89=(SDM_GradientAcceleration_Pkg::SearchIndexInGradientProfile)/ */
  SearchIndexInGradientProfile_reset_SDM_GradientAcceleration_Pkg(
    &outC->Context_SearchIndexInGradientProfile);
  /* _L90=(SDM_GradientAcceleration_Pkg::SearchIndexInGradientProfile#1)/ */
  SearchIndexInGradientProfile_reset_SDM_GradientAcceleration_Pkg(
    &outC->_1_Context_SearchIndexInGradientProfile_1);
  /* _L92=(SDM_Types_Pkg::TransformL_intToL_real#1)/ */
  TransformL_intToL_real_reset_SDM_Types_Pkg(
    &outC->Context_TransformL_intToL_real_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TrainLengthCompensation_SDM_GradientAcceleration_Pkg.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

