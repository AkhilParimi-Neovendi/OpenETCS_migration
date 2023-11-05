/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "AGradient_SDM_GradientAcceleration_Pkg.h"

/* SDM_GradientAcceleration_Pkg::AGradient/ */
void AGradient_SDM_GradientAcceleration_Pkg(
  /* TrainLocations/ */
  TrainLocations_real_T_SDM_Types_Pkg *TrainLocations,
  /* GradientProfile/ */
  GradientProfile_real_t_SDM_GradientAcceleration_types *GradientProfile,
  /* GradientProfile_updated/ */
  kcg_bool GradientProfile_updated,
  /* trainData/ */
  trainData_T_TIU_Types_Pkg *trainData,
  /* targetCollection/ */
  TargetCollection_T_TargetManagement_types *targetCollection,
  outC_AGradient_SDM_GradientAcceleration_Pkg *outC)
{
  static kcg_size idx;
  static A_gradient_t_SDM_GradientAcceleration_types tmp;
  static A_gradient_t_SDM_GradientAcceleration_types op_call;

  outC->_L22 = invalid_TargetManagement_types;
  kcg_copy_TargetCollection_T_TargetManagement_types(
    &outC->_L27,
    targetCollection);
  kcg_copy_Target_real_T_TargetManagement_types(
    &outC->_L24,
    &outC->_L27.SvL_LoA_target);
  outC->_L13 = outC->_L24.targetType;
  outC->_L21 = outC->_L13 != outC->_L22;
  outC->_L11 = GradientProfile_updated;
  kcg_copy_TargetCollection_T_TargetManagement_types(
    &outC->_L10,
    targetCollection);
  outC->_L25 = outC->_L10.updatedTargetList;
  outC->_L16 = outC->_L25 | outC->_L11;
  outC->_L15 = outC->_L16 & outC->_L21;
  outC->every = outC->_L15;
  kcg_copy_TrainLocations_real_T_SDM_Types_Pkg(&outC->_L2, TrainLocations);
  outC->_L23 = outC->_L2.d_est_frontendPos;
  kcg_copy_GradientProfile_real_t_SDM_GradientAcceleration_types(
    &outC->_L3,
    GradientProfile);
  kcg_copy_trainData_T_TIU_Types_Pkg(&outC->_L4, trainData);
  kcg_copy_TargetCollection_T_TargetManagement_types(
    &outC->_L29,
    targetCollection);
  kcg_copy_Target_real_T_TargetManagement_types(
    &outC->_L26,
    &outC->_L29.SvL_LoA_target);
  outC->_L12 = outC->_L26.distance;
  if (outC->every) {
    /* _L1=(SDM_GradientAcceleration_Pkg::CalcA_Gradient#1)/ */
    CalcA_Gradient_SDM_GradientAcceleration_Pkg(
      outC->_L23,
      &outC->_L3,
      &outC->_L4,
      outC->_L12,
      &outC->Context_CalcA_Gradient_1);
    kcg_copy_A_gradient_t_SDM_GradientAcceleration_types(
      &op_call,
      &outC->Context_CalcA_Gradient_1.A_gradient);
  }
  outC->_L18 = kcg_lit_float32(0.0);
  outC->_L19 = kcg_false;
  outC->_L17.position = outC->_L18;
  outC->_L17.gradient_acceleration = outC->_L18;
  outC->_L17.valid = outC->_L19;
  /* _L20/ */
  for (idx = 0; idx < 100; idx++) {
    kcg_copy_A_gradient_element_t_SDM_GradientAcceleration_types(
      &outC->_L20[idx],
      &outC->_L17);
  }
  if (outC->every) {
    kcg_copy_A_gradient_t_SDM_GradientAcceleration_types(&outC->_L1, &op_call);
  }
  else {
    /* _L1= */
    if (outC->init) {
      kcg_copy_A_gradient_t_SDM_GradientAcceleration_types(&tmp, &outC->_L20);
    }
    else {
      kcg_copy_A_gradient_t_SDM_GradientAcceleration_types(&tmp, &outC->_L1);
    }
    kcg_copy_A_gradient_t_SDM_GradientAcceleration_types(&outC->_L1, &tmp);
  }
  kcg_copy_A_gradient_t_SDM_GradientAcceleration_types(
    &outC->A_gradient,
    &outC->_L1);
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void AGradient_init_SDM_GradientAcceleration_Pkg(
  outC_AGradient_SDM_GradientAcceleration_Pkg *outC)
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

  outC->_L29.updatedTargetList = kcg_true;
  for (idx = 0; idx < 110; idx++) {
    outC->_L29.MRSP_targetList[idx].targetType = EoA_TargetManagement_types;
    outC->_L29.MRSP_targetList[idx].distance = kcg_lit_float32(0.0);
    outC->_L29.MRSP_targetList[idx].speed = kcg_lit_float32(0.0);
  }
  outC->_L29.EOA_target.targetType = EoA_TargetManagement_types;
  outC->_L29.EOA_target.distance = kcg_lit_float32(0.0);
  outC->_L29.EOA_target.speed = kcg_lit_float32(0.0);
  outC->_L29.SvL_LoA_target.targetType = EoA_TargetManagement_types;
  outC->_L29.SvL_LoA_target.distance = kcg_lit_float32(0.0);
  outC->_L29.SvL_LoA_target.speed = kcg_lit_float32(0.0);
  outC->_L27.updatedTargetList = kcg_true;
  for (idx1 = 0; idx1 < 110; idx1++) {
    outC->_L27.MRSP_targetList[idx1].targetType = EoA_TargetManagement_types;
    outC->_L27.MRSP_targetList[idx1].distance = kcg_lit_float32(0.0);
    outC->_L27.MRSP_targetList[idx1].speed = kcg_lit_float32(0.0);
  }
  outC->_L27.EOA_target.targetType = EoA_TargetManagement_types;
  outC->_L27.EOA_target.distance = kcg_lit_float32(0.0);
  outC->_L27.EOA_target.speed = kcg_lit_float32(0.0);
  outC->_L27.SvL_LoA_target.targetType = EoA_TargetManagement_types;
  outC->_L27.SvL_LoA_target.distance = kcg_lit_float32(0.0);
  outC->_L27.SvL_LoA_target.speed = kcg_lit_float32(0.0);
  outC->_L26.targetType = EoA_TargetManagement_types;
  outC->_L26.distance = kcg_lit_float32(0.0);
  outC->_L26.speed = kcg_lit_float32(0.0);
  outC->_L24.targetType = EoA_TargetManagement_types;
  outC->_L24.distance = kcg_lit_float32(0.0);
  outC->_L24.speed = kcg_lit_float32(0.0);
  outC->_L25 = kcg_true;
  outC->_L23 = kcg_lit_float32(0.0);
  outC->_L22 = EoA_TargetManagement_types;
  outC->_L21 = kcg_true;
  for (idx2 = 0; idx2 < 100; idx2++) {
    outC->_L20[idx2].position = kcg_lit_float32(0.0);
    outC->_L20[idx2].gradient_acceleration = kcg_lit_float32(0.0);
    outC->_L20[idx2].valid = kcg_true;
  }
  outC->_L19 = kcg_true;
  outC->_L18 = kcg_lit_float32(0.0);
  outC->_L17.position = kcg_lit_float32(0.0);
  outC->_L17.gradient_acceleration = kcg_lit_float32(0.0);
  outC->_L17.valid = kcg_true;
  outC->_L16 = kcg_true;
  outC->_L15 = kcg_true;
  outC->_L13 = EoA_TargetManagement_types;
  outC->_L12 = kcg_lit_float32(0.0);
  outC->_L11 = kcg_true;
  outC->_L10.updatedTargetList = kcg_true;
  for (idx3 = 0; idx3 < 110; idx3++) {
    outC->_L10.MRSP_targetList[idx3].targetType = EoA_TargetManagement_types;
    outC->_L10.MRSP_targetList[idx3].distance = kcg_lit_float32(0.0);
    outC->_L10.MRSP_targetList[idx3].speed = kcg_lit_float32(0.0);
  }
  outC->_L10.EOA_target.targetType = EoA_TargetManagement_types;
  outC->_L10.EOA_target.distance = kcg_lit_float32(0.0);
  outC->_L10.EOA_target.speed = kcg_lit_float32(0.0);
  outC->_L10.SvL_LoA_target.targetType = EoA_TargetManagement_types;
  outC->_L10.SvL_LoA_target.distance = kcg_lit_float32(0.0);
  outC->_L10.SvL_LoA_target.speed = kcg_lit_float32(0.0);
  outC->_L4.valid = kcg_true;
  outC->_L4.acknowledgedByDriver = kcg_true;
  outC->_L4.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L4.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L4.trainLength = kcg_lit_int32(0);
  outC->_L4.brakePerctage = kcg_lit_int32(0);
  outC->_L4.maxTrainSpeed = kcg_lit_int32(0);
  outC->_L4.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L4.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L4.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L4.axleNumber = kcg_lit_int32(0);
  outC->_L4.numberNationalSystems = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 5; idx4++) {
    outC->_L4.nationSystems[idx4] = kcg_lit_int32(0);
  }
  outC->_L4.numberTractionSystems = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 4; idx5++) {
    outC->_L4.tractionSystem[idx5].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L4.tractionSystem[idx5].nid_ctraction = kcg_lit_int32(0);
  }
  for (idx6 = 0; idx6 < 50; idx6++) {
    outC->_L3[idx6].location = kcg_lit_float32(0.0);
    outC->_L3[idx6].gradient = kcg_lit_float32(0.0);
    outC->_L3[idx6].valid = kcg_true;
  }
  outC->_L2.trainPositionIsValid = kcg_true;
  outC->_L2.d_est_frontendPos = kcg_lit_float32(0.0);
  outC->_L2.d_minSafeFrontEndPos = kcg_lit_float32(0.0);
  outC->_L2.d_maxSafeFrontEndPos = kcg_lit_float32(0.0);
  outC->_L2.d_LRBG = kcg_lit_float32(0.0);
  outC->_L2.d_accLRBG = kcg_lit_float32(0.0);
  outC->every = kcg_true;
  for (idx7 = 0; idx7 < 100; idx7++) {
    outC->_L1[idx7].position = kcg_lit_float32(0.0);
    outC->_L1[idx7].gradient_acceleration = kcg_lit_float32(0.0);
    outC->_L1[idx7].valid = kcg_true;
  }
  outC->init = kcg_true;
  for (idx8 = 0; idx8 < 100; idx8++) {
    outC->A_gradient[idx8].position = kcg_lit_float32(0.0);
    outC->A_gradient[idx8].gradient_acceleration = kcg_lit_float32(0.0);
    outC->A_gradient[idx8].valid = kcg_true;
  }
  /* _L1=(SDM_GradientAcceleration_Pkg::CalcA_Gradient#1)/ */
  CalcA_Gradient_init_SDM_GradientAcceleration_Pkg(
    &outC->Context_CalcA_Gradient_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void AGradient_reset_SDM_GradientAcceleration_Pkg(
  outC_AGradient_SDM_GradientAcceleration_Pkg *outC)
{
  outC->init = kcg_true;
  /* _L1=(SDM_GradientAcceleration_Pkg::CalcA_Gradient#1)/ */
  CalcA_Gradient_reset_SDM_GradientAcceleration_Pkg(
    &outC->Context_CalcA_Gradient_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** AGradient_SDM_GradientAcceleration_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

