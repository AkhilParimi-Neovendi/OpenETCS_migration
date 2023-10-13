/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "brakePercentToABrake_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::brakePercentToABrake/ */
void brakePercentToABrake_SDMConversionModelPkg(
  /* trainData/ */
  trainData_T_TIU_Types_Pkg *trainData,
  outC_brakePercentToABrake_SDMConversionModelPkg *outC)
{
  static av_Map_t_SDMConversionModelPkg op_call;

  outC->_L4 = cBrakePercentServiceMax_SDMConversionModelPkg;
  kcg_copy_trainData_T_TIU_Types_Pkg(&outC->_L9, trainData);
  outC->_L10 = outC->_L9.brakePerctage;
  outC->_L5 = outC->_L10 > outC->_L4;
  outC->every = outC->_L5;
  if (outC->every) {
    /* _L3=(SDMConversionModelPkg::brakePercentLookUp#2)/ */
    brakePercentLookUp_SDMConversionModelPkg(
      outC->_L4,
      &outC->Context_brakePercentLookUp_2);
    kcg_copy_av_Map_t_SDMConversionModelPkg(
      &op_call,
      &outC->Context_brakePercentLookUp_2.av);
  }
  /* _L1=(SDMConversionModelPkg::brakePercentLookUp#1)/ */
  brakePercentLookUp_SDMConversionModelPkg(
    outC->_L10,
    &outC->Context_brakePercentLookUp_1);
  kcg_copy_av_Map_t_SDMConversionModelPkg(
    &outC->_L1,
    &outC->Context_brakePercentLookUp_1.av);
  if (outC->every) {
    kcg_copy_av_Map_t_SDMConversionModelPkg(&outC->_L3, &op_call);
  }
  else {
    kcg_copy_av_Map_t_SDMConversionModelPkg(&outC->_L3, &outC->_L1);
  }
  kcg_copy_av_Map_t_SDMConversionModelPkg(&outC->_L8.emergency, &outC->_L1);
  kcg_copy_av_Map_t_SDMConversionModelPkg(&outC->_L8.service, &outC->_L3);
  kcg_copy_a_Brake_t_SDMConversionModelPkg(&outC->aBrake, &outC->_L8);
}

#ifndef KCG_USER_DEFINED_INIT
void brakePercentToABrake_init_SDMConversionModelPkg(
  outC_brakePercentToABrake_SDMConversionModelPkg *outC)
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

  outC->_L9.valid = kcg_true;
  outC->_L9.acknowledgedByDriver = kcg_true;
  outC->_L9.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L9.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L9.trainLength = kcg_lit_int64(0);
  outC->_L9.brakePerctage = kcg_lit_int64(0);
  outC->_L9.maxTrainSpeed = kcg_lit_int64(0);
  outC->_L9.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L9.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L9.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L9.axleNumber = kcg_lit_int64(0);
  outC->_L9.numberNationalSystems = kcg_lit_int64(0);
  for (idx = 0; idx < 5; idx++) {
    outC->_L9.nationSystems[idx] = kcg_lit_int64(0);
  }
  outC->_L9.numberTractionSystems = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 4; idx1++) {
    outC->_L9.tractionSystem[idx1].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L9.tractionSystem[idx1].nid_ctraction = kcg_lit_int64(0);
  }
  outC->_L10 = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 6; idx2++) {
    outC->_L8.emergency.a[idx2] = kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 6; idx3++) {
    outC->_L8.emergency.v[idx3] = kcg_lit_int64(0);
  }
  for (idx4 = 0; idx4 < 6; idx4++) {
    outC->_L8.service.a[idx4] = kcg_lit_int64(0);
  }
  for (idx5 = 0; idx5 < 6; idx5++) {
    outC->_L8.service.v[idx5] = kcg_lit_int64(0);
  }
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_lit_int64(0);
  for (idx6 = 0; idx6 < 6; idx6++) {
    outC->_L3.a[idx6] = kcg_lit_int64(0);
  }
  for (idx7 = 0; idx7 < 6; idx7++) {
    outC->_L3.v[idx7] = kcg_lit_int64(0);
  }
  for (idx8 = 0; idx8 < 6; idx8++) {
    outC->_L1.a[idx8] = kcg_lit_int64(0);
  }
  for (idx9 = 0; idx9 < 6; idx9++) {
    outC->_L1.v[idx9] = kcg_lit_int64(0);
  }
  outC->every = kcg_true;
  for (idx10 = 0; idx10 < 6; idx10++) {
    outC->aBrake.emergency.a[idx10] = kcg_lit_int64(0);
  }
  for (idx11 = 0; idx11 < 6; idx11++) {
    outC->aBrake.emergency.v[idx11] = kcg_lit_int64(0);
  }
  for (idx12 = 0; idx12 < 6; idx12++) {
    outC->aBrake.service.a[idx12] = kcg_lit_int64(0);
  }
  for (idx13 = 0; idx13 < 6; idx13++) {
    outC->aBrake.service.v[idx13] = kcg_lit_int64(0);
  }
  /* _L1=(SDMConversionModelPkg::brakePercentLookUp#1)/ */
  brakePercentLookUp_init_SDMConversionModelPkg(
    &outC->Context_brakePercentLookUp_1);
  /* _L3=(SDMConversionModelPkg::brakePercentLookUp#2)/ */
  brakePercentLookUp_init_SDMConversionModelPkg(
    &outC->Context_brakePercentLookUp_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void brakePercentToABrake_reset_SDMConversionModelPkg(
  outC_brakePercentToABrake_SDMConversionModelPkg *outC)
{
  /* _L1=(SDMConversionModelPkg::brakePercentLookUp#1)/ */
  brakePercentLookUp_reset_SDMConversionModelPkg(
    &outC->Context_brakePercentLookUp_1);
  /* _L3=(SDMConversionModelPkg::brakePercentLookUp#2)/ */
  brakePercentLookUp_reset_SDMConversionModelPkg(
    &outC->Context_brakePercentLookUp_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** brakePercentToABrake_SDMConversionModelPkg.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

