/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "brakeBuildUp_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::brakeBuildUp/ */
void brakeBuildUp_SDMConversionModelPkg(
  /* trainData/ */
  trainData_T_TIU_Types_Pkg *trainData,
  /* NationalValues/ */
  P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  outC_brakeBuildUp_SDMConversionModelPkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  kcg_copy_trainData_T_TIU_Types_Pkg(&outC->_L19, trainData);
  kcg_copy_P3_NationalValues_T_Packet_Types_Pkg(&outC->_L1, NationalValues);
  outC->_L18 = outC->_L1.m_nvktint;
  /* _L15=(SDMConversionModelPkg::brakePosition#1)/ */
  brakePosition_SDMConversionModelPkg(
    &outC->_L19,
    &outC->Context_brakePosition_1);
  kcg_copy_t_Brake_t_SDMModelPkg(
    &outC->_L15,
    &outC->Context_brakePosition_1.T_brake_cm);
  /* _L11/ */
  for (idx = 0; idx < 2; idx++) {
    outC->_L11[idx] = outC->_L18;
  }
  kcg_copy_t_BrakeVt_t_SDMModelPkg(&outC->_L22, &outC->_L15.emergency);
  /* _L10= */
  for (idx1 = 0; idx1 < 2; idx1++) {
    outC->_L10[idx1] = outC->_L11[idx1] * outC->_L22[idx1];
  }
  kcg_copy_t_BrakeVt_t_SDMModelPkg(&outC->_L23, &outC->_L15.service);
  kcg_copy_t_BrakeVt_t_SDMModelPkg(&outC->_L14.emergency, &outC->_L10);
  kcg_copy_t_BrakeVt_t_SDMModelPkg(&outC->_L14.service, &outC->_L23);
  kcg_copy_t_Brake_t_SDMModelPkg(&outC->T_b, &outC->_L14);
}

#ifndef KCG_USER_DEFINED_INIT
void brakeBuildUp_init_SDMConversionModelPkg(
  outC_brakeBuildUp_SDMConversionModelPkg *outC)
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

  for (idx = 0; idx < 2; idx++) {
    outC->_L22[idx] = kcg_lit_float64(0.0);
  }
  for (idx1 = 0; idx1 < 2; idx1++) {
    outC->_L23[idx1] = kcg_lit_float64(0.0);
  }
  outC->_L19.valid = kcg_true;
  outC->_L19.acknowledgedByDriver = kcg_true;
  outC->_L19.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L19.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L19.trainLength = kcg_lit_int64(0);
  outC->_L19.brakePerctage = kcg_lit_int64(0);
  outC->_L19.maxTrainSpeed = kcg_lit_int64(0);
  outC->_L19.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L19.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L19.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L19.axleNumber = kcg_lit_int64(0);
  outC->_L19.numberNationalSystems = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 5; idx2++) {
    outC->_L19.nationSystems[idx2] = kcg_lit_int64(0);
  }
  outC->_L19.numberTractionSystems = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 4; idx3++) {
    outC->_L19.tractionSystem[idx3].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L19.tractionSystem[idx3].nid_ctraction = kcg_lit_int64(0);
  }
  outC->_L18 = kcg_lit_float64(0.0);
  for (idx4 = 0; idx4 < 2; idx4++) {
    outC->_L15.emergency[idx4] = kcg_lit_float64(0.0);
  }
  for (idx5 = 0; idx5 < 2; idx5++) {
    outC->_L15.service[idx5] = kcg_lit_float64(0.0);
  }
  for (idx6 = 0; idx6 < 2; idx6++) {
    outC->_L14.emergency[idx6] = kcg_lit_float64(0.0);
  }
  for (idx7 = 0; idx7 < 2; idx7++) {
    outC->_L14.service[idx7] = kcg_lit_float64(0.0);
  }
  for (idx8 = 0; idx8 < 2; idx8++) {
    outC->_L11[idx8] = kcg_lit_float64(0.0);
  }
  for (idx9 = 0; idx9 < 2; idx9++) {
    outC->_L10[idx9] = kcg_lit_float64(0.0);
  }
  outC->_L1.valid = kcg_true;
  outC->_L1.q_dir = Q_DIR_Reverse;
  outC->_L1.d_validnv = kcg_lit_int64(0);
  for (idx10 = 0; idx10 < 7; idx10++) {
    outC->_L1.nid_cArray[idx10].valid = kcg_true;
    outC->_L1.nid_cArray[idx10].nid_c = kcg_lit_int64(0);
  }
  outC->_L1.v_nvshunt = kcg_lit_int64(0);
  outC->_L1.v_nvstff = kcg_lit_int64(0);
  outC->_L1.v_nvonsight = kcg_lit_int64(0);
  outC->_L1.v_nvlimsuperv = kcg_lit_int64(0);
  outC->_L1.v_nvunfit = kcg_lit_int64(0);
  outC->_L1.v_nvrel = kcg_lit_int64(0);
  outC->_L1.d_nvroll = kcg_lit_int64(0);
  outC->_L1.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->_L1.q_nvemrrls = Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->_L1.q_nvguiperm = Q_NVGUIPERM_No;
  outC->_L1.q_nvsbfbperm = Q_NVSBFBPERM_No;
  outC->_L1.q_nvinhsmicperm = Q_NVINHSMICPERM_No;
  outC->_L1.v_nvallowovtrp = kcg_lit_int64(0);
  outC->_L1.v_nvsupovtrp = kcg_lit_int64(0);
  outC->_L1.d_nvovtrp = kcg_lit_int64(0);
  outC->_L1.t_nvovtrp = kcg_lit_int64(0);
  outC->_L1.d_nvpotrp = kcg_lit_int64(0);
  outC->_L1.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->_L1.t_nvcontact = kcg_lit_int64(0);
  outC->_L1.m_nvderun = M_NVDERUN_No;
  outC->_L1.d_nvstff = kcg_lit_int64(0);
  outC->_L1.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  outC->_L1.a_nvmaxredadh1 = kcg_lit_float64(0.0);
  outC->_L1.a_nvmaxredadh2 = kcg_lit_float64(0.0);
  outC->_L1.a_nvmaxredadh3 = kcg_lit_float64(0.0);
  outC->_L1.q_nvlocacc = kcg_lit_int64(0);
  outC->_L1.m_nvavadh = kcg_lit_float64(0.0);
  outC->_L1.m_nvebcl = M_NVEBCL_Confidence_level_50;
  outC->_L1.q_nvkint = Q_NVKINT_No_integrated_correction_factors_follow;
  for (idx12 = 0; idx12 < 7; idx12++) {
    outC->_L1.nvkvintsetArray[idx12].valid = kcg_true;
    outC->_L1.nvkvintsetArray[idx12].q_nvkvintset = Q_NVKVINTSET_Freight_trains;
    outC->_L1.nvkvintsetArray[idx12].a_nvp12 = kcg_lit_float64(0.0);
    outC->_L1.nvkvintsetArray[idx12].a_nvp23 = kcg_lit_float64(0.0);
    for (idx11 = 0; idx11 < 7; idx11++) {
      outC->_L1.nvkvintsetArray[idx12].nvkintArray[idx11].valid = kcg_true;
      outC->_L1.nvkvintsetArray[idx12].nvkintArray[idx11].v_nvkvint =
        kcg_lit_int64(0);
      outC->_L1.nvkvintsetArray[idx12].nvkintArray[idx11].m_nvkvint12 =
        kcg_lit_float64(0.0);
      outC->_L1.nvkvintsetArray[idx12].nvkintArray[idx11].m_nvkvint23 =
        kcg_lit_float64(0.0);
    }
  }
  for (idx13 = 0; idx13 < 7; idx13++) {
    outC->_L1.nvkrintArray[idx13].valid = kcg_true;
    outC->_L1.nvkrintArray[idx13].l_nvkrint = L_NVKRINT_0m;
    outC->_L1.nvkrintArray[idx13].m_nvkrint = kcg_lit_float64(0.0);
  }
  outC->_L1.m_nvktint = kcg_lit_float64(0.0);
  for (idx14 = 0; idx14 < 2; idx14++) {
    outC->T_b.emergency[idx14] = kcg_lit_float64(0.0);
  }
  for (idx15 = 0; idx15 < 2; idx15++) {
    outC->T_b.service[idx15] = kcg_lit_float64(0.0);
  }
  /* _L15=(SDMConversionModelPkg::brakePosition#1)/ */
  brakePosition_init_SDMConversionModelPkg(&outC->Context_brakePosition_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void brakeBuildUp_reset_SDMConversionModelPkg(
  outC_brakeBuildUp_SDMConversionModelPkg *outC)
{
  /* _L15=(SDMConversionModelPkg::brakePosition#1)/ */
  brakePosition_reset_SDMConversionModelPkg(&outC->Context_brakePosition_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** brakeBuildUp_SDMConversionModelPkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

