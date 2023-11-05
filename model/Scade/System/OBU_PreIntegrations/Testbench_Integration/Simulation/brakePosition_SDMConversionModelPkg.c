/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "brakePosition_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::brakePosition/ */
void brakePosition_SDMConversionModelPkg(
  /* trainData/ */
  trainData_T_TIU_Types_Pkg *trainData,
  outC_brakePosition_SDMConversionModelPkg *outC)
{
  kcg_copy_trainData_T_TIU_Types_Pkg(&outC->_L49, trainData);
  outC->_L50 = outC->_L49.trainLength;
  /* _L51=(SDM_Types_Pkg::TransformL_intToL_real#1)/ */
  TransformL_intToL_real_SDM_Types_Pkg(
    outC->_L50,
    &outC->Context_TransformL_intToL_real_1);
  outC->_L51 = outC->Context_TransformL_intToL_real_1.loc_real;
  outC->I2_Max_2_float32 = outC->_L51;
  outC->_L2_Max_2_float32 = outC->I2_Max_2_float32;
  outC->_L53 = cBrakePositionLengthMin_SDMConversionModelPkg;
  outC->I1_Max_2_float32 = outC->_L53;
  outC->_L1_Max_2_float32 = outC->I1_Max_2_float32;
  outC->_L3_Max_2_float32 = outC->_L1_Max_2_float32 >= outC->_L2_Max_2_float32;
  /* @1/_L4= */
  if (outC->_L3_Max_2_float32) {
    outC->_L4_Max_2_float32 = outC->_L1_Max_2_float32;
  }
  else {
    outC->_L4_Max_2_float32 = outC->_L2_Max_2_float32;
  }
  outC->Ma_Output_Max_2_float32 = outC->_L4_Max_2_float32;
  outC->_L59 = outC->Ma_Output_Max_2_float32;
  outC->_L52 = outC->_L49.trainCategory;
  /* _L58= */
  switch (outC->_L52) {
    case NC_TRAIN_Freight_train_braked_in_G_position :
      outC->_L58 = outC->_L59;
      break;
    default :
      outC->_L58 = outC->_L51;
      break;
  }
  /* _L57= */
  switch (outC->_L52) {
    case NC_TRAIN_Freight_train_braked_in_G_position :
      outC->_L57 = outC->_L51;
      break;
    default :
      outC->_L57 = outC->_L59;
      break;
  }
  kcg_copy_coeff_BrakeBasic_t_SDMConversionModelPkg(
    &outC->_L38,
    (coeff_BrakeBasic_t_SDMConversionModelPkg *)
      &cBrakePositionFreightLongSCoeff_SDMConversionModelPkg);
  kcg_copy_coeff_BrakeBasic_t_SDMConversionModelPkg(
    &outC->_L40,
    (coeff_BrakeBasic_t_SDMConversionModelPkg *)
      &cBrakePositionPassengerSCoeff_SDMConversionModelPkg);
  kcg_copy_coeff_BrakeBasic_t_SDMConversionModelPkg(
    &outC->_L41,
    (coeff_BrakeBasic_t_SDMConversionModelPkg *)
      &cBrakePositionFreightShortSCoeff_SDMConversionModelPkg);
  /* _L39= */
  switch (outC->_L52) {
    case NC_TRAIN_Passenger_train :
      kcg_copy_coeff_BrakeBasic_t_SDMConversionModelPkg(&outC->_L39, &outC->_L40);
      break;
    default :
      kcg_copy_coeff_BrakeBasic_t_SDMConversionModelPkg(&outC->_L39, &outC->_L41);
      break;
  }
  outC->_L28 = cBrakePositionLengthShort_SDMConversionModelPkg;
  outC->_L27 = outC->_L51 <= outC->_L28;
  /* _L37= */
  if (outC->_L27) {
    kcg_copy_coeff_BrakeBasic_t_SDMConversionModelPkg(&outC->_L37, &outC->_L39);
  }
  else {
    kcg_copy_coeff_BrakeBasic_t_SDMConversionModelPkg(&outC->_L37, &outC->_L38);
  }
  /* _L36=(SDMConversionModelPkg::T_BrakeBasic#3)/ */
  T_BrakeBasic_SDMConversionModelPkg(
    &outC->_L37,
    outC->_L58,
    &outC->Context_T_BrakeBasic_3);
  outC->_L36 = outC->Context_T_BrakeBasic_3.T_BB;
  outC->_L18 = kcg_lit_float32(1.0);
  outC->_L20 = cBrakePositionGCt_SDMConversionModelPkg;
  outC->_L21 = cBrakePositionPCt_SDMConversionModelPkg;
  /* _L19= */
  switch (outC->_L52) {
    case NC_TRAIN_Freight_train_braked_in_G_position :
      outC->_L19 = outC->_L20;
      break;
    default :
      outC->_L19 = outC->_L21;
      break;
  }
  outC->_L17 = outC->_L19 + outC->_L18;
  outC->_L34 = outC->_L36 * outC->_L17;
  outC->_L48[0] = outC->_L36;
  outC->_L48[1] = outC->_L34;
  kcg_copy_coeff_BrakeBasic_t_SDMConversionModelPkg(
    &outC->_L33,
    (coeff_BrakeBasic_t_SDMConversionModelPkg *)
      &cBrakePositionFreightLongECoeff_SDMConversionModelPkg);
  kcg_copy_coeff_BrakeBasic_t_SDMConversionModelPkg(
    &outC->_L31,
    (coeff_BrakeBasic_t_SDMConversionModelPkg *)
      &cBrakePositionGECoeff_SDMConversionModelPkg);
  kcg_copy_coeff_BrakeBasic_t_SDMConversionModelPkg(
    &outC->_L42,
    (coeff_BrakeBasic_t_SDMConversionModelPkg *)
      &cBrakePositionPECoeff_SDMConversionModelPkg);
  /* _L23= */
  switch (outC->_L52) {
    case NC_TRAIN_Freight_train_braked_in_G_position :
      kcg_copy_coeff_BrakeBasic_t_SDMConversionModelPkg(&outC->_L23, &outC->_L31);
      break;
    default :
      kcg_copy_coeff_BrakeBasic_t_SDMConversionModelPkg(&outC->_L23, &outC->_L42);
      break;
  }
  /* _L29= */
  if (outC->_L27) {
    kcg_copy_coeff_BrakeBasic_t_SDMConversionModelPkg(&outC->_L29, &outC->_L23);
  }
  else {
    kcg_copy_coeff_BrakeBasic_t_SDMConversionModelPkg(&outC->_L29, &outC->_L33);
  }
  /* _L10=(SDMConversionModelPkg::T_BrakeBasic#1)/ */
  T_BrakeBasic_SDMConversionModelPkg(
    &outC->_L29,
    outC->_L57,
    &outC->Context_T_BrakeBasic_1);
  outC->_L10 = outC->Context_T_BrakeBasic_1.T_BB;
  outC->_L16 = outC->_L10 * outC->_L17;
  outC->_L45[0] = outC->_L10;
  outC->_L45[1] = outC->_L16;
  kcg_copy_t_BrakeVt_t_SDMModelPkg(&outC->_L14.emergency, &outC->_L45);
  kcg_copy_t_BrakeVt_t_SDMModelPkg(&outC->_L14.service, &outC->_L48);
  kcg_copy_t_Brake_t_SDMModelPkg(&outC->T_brake_cm, &outC->_L14);
}

#ifndef KCG_USER_DEFINED_INIT
void brakePosition_init_SDMConversionModelPkg(
  outC_brakePosition_SDMConversionModelPkg *outC)
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
  static kcg_size idx12;
  static kcg_size idx13;
  static kcg_size idx14;
  static kcg_size idx15;
  static kcg_size idx16;
  static kcg_size idx17;

  outC->_L59 = kcg_lit_float32(0.0);
  outC->_L58 = kcg_lit_float32(0.0);
  outC->_L57 = kcg_lit_float32(0.0);
  outC->_L53 = kcg_lit_float32(0.0);
  outC->_L52 =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L51 = kcg_lit_float32(0.0);
  outC->_L50 = kcg_lit_int32(0);
  outC->_L49.valid = kcg_true;
  outC->_L49.acknowledgedByDriver = kcg_true;
  outC->_L49.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L49.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L49.trainLength = kcg_lit_int32(0);
  outC->_L49.brakePerctage = kcg_lit_int32(0);
  outC->_L49.maxTrainSpeed = kcg_lit_int32(0);
  outC->_L49.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L49.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L49.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L49.axleNumber = kcg_lit_int32(0);
  outC->_L49.numberNationalSystems = kcg_lit_int32(0);
  for (idx = 0; idx < 5; idx++) {
    outC->_L49.nationSystems[idx] = kcg_lit_int32(0);
  }
  outC->_L49.numberTractionSystems = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 4; idx1++) {
    outC->_L49.tractionSystem[idx1].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L49.tractionSystem[idx1].nid_ctraction = kcg_lit_int32(0);
  }
  for (idx2 = 0; idx2 < 2; idx2++) {
    outC->_L48[idx2] = kcg_lit_float32(0.0);
  }
  for (idx3 = 0; idx3 < 2; idx3++) {
    outC->_L45[idx3] = kcg_lit_float32(0.0);
  }
  for (idx4 = 0; idx4 < 3; idx4++) {
    outC->_L42[idx4] = kcg_lit_float32(0.0);
  }
  for (idx5 = 0; idx5 < 3; idx5++) {
    outC->_L41[idx5] = kcg_lit_float32(0.0);
  }
  for (idx6 = 0; idx6 < 3; idx6++) {
    outC->_L40[idx6] = kcg_lit_float32(0.0);
  }
  for (idx7 = 0; idx7 < 3; idx7++) {
    outC->_L39[idx7] = kcg_lit_float32(0.0);
  }
  for (idx8 = 0; idx8 < 3; idx8++) {
    outC->_L38[idx8] = kcg_lit_float32(0.0);
  }
  for (idx9 = 0; idx9 < 3; idx9++) {
    outC->_L37[idx9] = kcg_lit_float32(0.0);
  }
  outC->_L36 = kcg_lit_float32(0.0);
  outC->_L34 = kcg_lit_float32(0.0);
  for (idx10 = 0; idx10 < 3; idx10++) {
    outC->_L33[idx10] = kcg_lit_float32(0.0);
  }
  for (idx11 = 0; idx11 < 3; idx11++) {
    outC->_L31[idx11] = kcg_lit_float32(0.0);
  }
  for (idx12 = 0; idx12 < 3; idx12++) {
    outC->_L29[idx12] = kcg_lit_float32(0.0);
  }
  outC->_L28 = kcg_lit_float32(0.0);
  outC->_L27 = kcg_true;
  for (idx13 = 0; idx13 < 3; idx13++) {
    outC->_L23[idx13] = kcg_lit_float32(0.0);
  }
  outC->_L21 = kcg_lit_float32(0.0);
  outC->_L20 = kcg_lit_float32(0.0);
  outC->_L19 = kcg_lit_float32(0.0);
  outC->_L18 = kcg_lit_float32(0.0);
  outC->_L17 = kcg_lit_float32(0.0);
  outC->_L16 = kcg_lit_float32(0.0);
  for (idx14 = 0; idx14 < 2; idx14++) {
    outC->_L14.emergency[idx14] = kcg_lit_float32(0.0);
  }
  for (idx15 = 0; idx15 < 2; idx15++) {
    outC->_L14.service[idx15] = kcg_lit_float32(0.0);
  }
  outC->_L10 = kcg_lit_float32(0.0);
  outC->_L1_Max_2_float32 = kcg_lit_float32(0.0);
  outC->_L2_Max_2_float32 = kcg_lit_float32(0.0);
  outC->_L3_Max_2_float32 = kcg_true;
  outC->_L4_Max_2_float32 = kcg_lit_float32(0.0);
  outC->I1_Max_2_float32 = kcg_lit_float32(0.0);
  outC->I2_Max_2_float32 = kcg_lit_float32(0.0);
  outC->Ma_Output_Max_2_float32 = kcg_lit_float32(0.0);
  for (idx16 = 0; idx16 < 2; idx16++) {
    outC->T_brake_cm.emergency[idx16] = kcg_lit_float32(0.0);
  }
  for (idx17 = 0; idx17 < 2; idx17++) {
    outC->T_brake_cm.service[idx17] = kcg_lit_float32(0.0);
  }
  /* _L10=(SDMConversionModelPkg::T_BrakeBasic#1)/ */
  T_BrakeBasic_init_SDMConversionModelPkg(&outC->Context_T_BrakeBasic_1);
  /* _L36=(SDMConversionModelPkg::T_BrakeBasic#3)/ */
  T_BrakeBasic_init_SDMConversionModelPkg(&outC->Context_T_BrakeBasic_3);
  /* _L51=(SDM_Types_Pkg::TransformL_intToL_real#1)/ */
  TransformL_intToL_real_init_SDM_Types_Pkg(
    &outC->Context_TransformL_intToL_real_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void brakePosition_reset_SDMConversionModelPkg(
  outC_brakePosition_SDMConversionModelPkg *outC)
{
  /* _L10=(SDMConversionModelPkg::T_BrakeBasic#1)/ */
  T_BrakeBasic_reset_SDMConversionModelPkg(&outC->Context_T_BrakeBasic_1);
  /* _L36=(SDMConversionModelPkg::T_BrakeBasic#3)/ */
  T_BrakeBasic_reset_SDMConversionModelPkg(&outC->Context_T_BrakeBasic_3);
  /* _L51=(SDM_Types_Pkg::TransformL_intToL_real#1)/ */
  TransformL_intToL_real_reset_SDM_Types_Pkg(
    &outC->Context_TransformL_intToL_real_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: SDMConversionModelPkg::brakePosition/
  @1: (math::Max#2)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** brakePosition_SDMConversionModelPkg.c
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

