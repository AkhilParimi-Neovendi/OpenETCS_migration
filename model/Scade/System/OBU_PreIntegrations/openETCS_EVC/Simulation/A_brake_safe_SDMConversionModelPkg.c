/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "A_brake_safe_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::A_brake_safe/ */
void A_brake_safe_SDMConversionModelPkg(
  /* aBrake/ */
  a_Brake_t_SDMConversionModelPkg *aBrake,
  /* trainData/ */
  trainData_T_TIU_Types_Pkg *trainData,
  /* NationalValues/ */
  P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  outC_A_brake_safe_SDMConversionModelPkg *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_int32 acc;
  kcg_size idx4;

  kcg_copy_a_Brake_t_SDMConversionModelPkg(&outC->_L13, aBrake);
  kcg_copy_v_BrakeSteps_t_SDMConversionModelPkg(
    &outC->_L48,
    &outC->_L13.emergency.v);
  kcg_copy_P3_NationalValues_T_Packet_Types_Pkg(&outC->_L11, NationalValues);
  kcg_copy_trainData_T_TIU_Types_Pkg(&outC->_L12, trainData);
  /* _L10=(SDMConversionModelPkg::Kr_intLookUp#1)/ */
  Kr_intLookUp_SDMConversionModelPkg(
    &outC->_L11,
    &outC->_L12,
    &outC->Context_Kr_intLookUp_1);
  outC->_L10 = outC->Context_Kr_intLookUp_1.m_KrInt;
  /* _L17/ */
  for (idx = 0; idx < 6; idx++) {
    outC->_L17[idx] = outC->_L10;
  }
  kcg_copy_a_BrakeSteps_t_SDMConversionModelPkg(
    &outC->_L14,
    &outC->_L13.emergency.a);
  /* _L16= */
  for (idx1 = 0; idx1 < 6; idx1++) {
    outC->_L16[idx1] = outC->_L17[idx1] * outC->_L14[idx1];
  }
  outC->_L26 = kcg_lit_int32(100);
  /* _L25/ */
  for (idx2 = 0; idx2 < 6; idx2++) {
    outC->_L25[idx2] = outC->_L26;
  }
  /* _L23= */
  for (idx3 = 0; idx3 < 6; idx3++) {
    outC->_L23[idx3] = outC->_L16[idx3] / outC->_L25[idx3];
  }
  kcg_copy_a_BrakeSteps_t_SDMConversionModelPkg(&outC->_L47.a, &outC->_L23);
  kcg_copy_v_BrakeSteps_t_SDMConversionModelPkg(&outC->_L47.v, &outC->_L48);
  kcg_copy_trainData_T_TIU_Types_Pkg(&outC->_L34, trainData);
  kcg_copy_P3_NationalValues_T_Packet_Types_Pkg(&outC->_L30, NationalValues);
  outC->_L19 = kcg_lit_int32(0);
  outC->_L18 = outC->_L19;
  /* _L18= */
  for (idx4 = 0; idx4 < 6; idx4++) {
    acc = outC->_L18;
    outC->_L2_Max_1_int32[idx4] = outC->_L14[idx4];
    outC->_L1_Max_1_int32[idx4] = acc;
    outC->_L3_Max_1_int32[idx4] = outC->_L1_Max_1_int32[idx4] >=
      outC->_L2_Max_1_int32[idx4];
    /* @1/_L4= */
    if (outC->_L3_Max_1_int32[idx4]) {
      outC->_L4_Max_1_int32[idx4] = outC->_L1_Max_1_int32[idx4];
    }
    else {
      outC->_L4_Max_1_int32[idx4] = outC->_L2_Max_1_int32[idx4];
    }
    outC->_L18 = outC->_L4_Max_1_int32[idx4];
  }
  /* _L32=(SDMConversionModelPkg::Kv_intConstructor#1)/ */
  Kv_intConstructor_SDMConversionModelPkg(
    &outC->_L34,
    &outC->_L30,
    outC->_L18,
    &outC->_L47,
    &outC->Context_Kv_intConstructor_1);
  kcg_copy_av_MergedMap_t_SDMConversionModelPkg(
    &outC->_L32,
    &outC->Context_Kv_intConstructor_1.A_brake_safe);
  kcg_copy_av_MergedMap_t_SDMConversionModelPkg(
    &outC->aBrakeSafe_cm,
    &outC->_L32);
}

#ifndef KCG_USER_DEFINED_INIT
void A_brake_safe_init_SDMConversionModelPkg(
  outC_A_brake_safe_SDMConversionModelPkg *outC)
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
  kcg_size idx17;
  kcg_size idx18;
  kcg_size idx19;
  kcg_size idx20;
  kcg_size idx21;
  kcg_size idx22;
  kcg_size idx23;
  kcg_size idx24;
  kcg_size idx25;
  kcg_size idx26;
  kcg_size idx27;
  kcg_size idx28;
  kcg_size idx29;
  kcg_size idx30;
  kcg_size idx31;

  for (idx = 0; idx < 6; idx++) {
    outC->_L48[idx] = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 6; idx1++) {
    outC->_L47.a[idx1] = kcg_lit_int32(0);
  }
  for (idx2 = 0; idx2 < 6; idx2++) {
    outC->_L47.v[idx2] = kcg_lit_int32(0);
  }
  outC->_L34.valid = kcg_true;
  outC->_L34.acknowledgedByDriver = kcg_true;
  outC->_L34.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L34.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L34.trainLength = kcg_lit_int32(0);
  outC->_L34.brakePerctage = kcg_lit_int32(0);
  outC->_L34.maxTrainSpeed = kcg_lit_int32(0);
  outC->_L34.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L34.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L34.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L34.axleNumber = kcg_lit_int32(0);
  outC->_L34.numberNationalSystems = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->_L34.nationSystems[idx3] = kcg_lit_int32(0);
  }
  outC->_L34.numberTractionSystems = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 4; idx4++) {
    outC->_L34.tractionSystem[idx4].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L34.tractionSystem[idx4].nid_ctraction = kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 13; idx5++) {
    outC->_L32.a[idx5] = kcg_lit_int32(0);
  }
  for (idx6 = 0; idx6 < 13; idx6++) {
    outC->_L32.v[idx6] = kcg_lit_int32(0);
  }
  outC->_L30.valid = kcg_true;
  outC->_L30.q_dir = Q_DIR_Reverse;
  outC->_L30.d_validnv = kcg_lit_int32(0);
  for (idx7 = 0; idx7 < 7; idx7++) {
    outC->_L30.nid_cArray[idx7].valid = kcg_true;
    outC->_L30.nid_cArray[idx7].nid_c = kcg_lit_int32(0);
  }
  outC->_L30.v_nvshunt = kcg_lit_int32(0);
  outC->_L30.v_nvstff = kcg_lit_int32(0);
  outC->_L30.v_nvonsight = kcg_lit_int32(0);
  outC->_L30.v_nvlimsuperv = kcg_lit_int32(0);
  outC->_L30.v_nvunfit = kcg_lit_int32(0);
  outC->_L30.v_nvrel = kcg_lit_int32(0);
  outC->_L30.d_nvroll = kcg_lit_int32(0);
  outC->_L30.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->_L30.q_nvemrrls = Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->_L30.q_nvguiperm = Q_NVGUIPERM_No;
  outC->_L30.q_nvsbfbperm = Q_NVSBFBPERM_No;
  outC->_L30.q_nvinhsmicperm = Q_NVINHSMICPERM_No;
  outC->_L30.v_nvallowovtrp = kcg_lit_int32(0);
  outC->_L30.v_nvsupovtrp = kcg_lit_int32(0);
  outC->_L30.d_nvovtrp = kcg_lit_int32(0);
  outC->_L30.t_nvovtrp = kcg_lit_int32(0);
  outC->_L30.d_nvpotrp = kcg_lit_int32(0);
  outC->_L30.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->_L30.t_nvcontact = kcg_lit_int32(0);
  outC->_L30.m_nvderun = M_NVDERUN_No;
  outC->_L30.d_nvstff = kcg_lit_int32(0);
  outC->_L30.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  outC->_L30.a_nvmaxredadh1 = kcg_lit_float32(0.0);
  outC->_L30.a_nvmaxredadh2 = kcg_lit_float32(0.0);
  outC->_L30.a_nvmaxredadh3 = kcg_lit_float32(0.0);
  outC->_L30.q_nvlocacc = kcg_lit_int32(0);
  outC->_L30.m_nvavadh = kcg_lit_float32(0.0);
  outC->_L30.m_nvebcl = M_NVEBCL_Confidence_level_50;
  outC->_L30.q_nvkint = Q_NVKINT_No_integrated_correction_factors_follow;
  for (idx9 = 0; idx9 < 7; idx9++) {
    outC->_L30.nvkvintsetArray[idx9].valid = kcg_true;
    outC->_L30.nvkvintsetArray[idx9].q_nvkvintset = Q_NVKVINTSET_Freight_trains;
    outC->_L30.nvkvintsetArray[idx9].a_nvp12 = kcg_lit_float32(0.0);
    outC->_L30.nvkvintsetArray[idx9].a_nvp23 = kcg_lit_float32(0.0);
    for (idx8 = 0; idx8 < 7; idx8++) {
      outC->_L30.nvkvintsetArray[idx9].nvkintArray[idx8].valid = kcg_true;
      outC->_L30.nvkvintsetArray[idx9].nvkintArray[idx8].v_nvkvint = kcg_lit_int32(0);
      outC->_L30.nvkvintsetArray[idx9].nvkintArray[idx8].m_nvkvint12 =
        kcg_lit_float32(0.0);
      outC->_L30.nvkvintsetArray[idx9].nvkintArray[idx8].m_nvkvint23 =
        kcg_lit_float32(0.0);
    }
  }
  for (idx10 = 0; idx10 < 7; idx10++) {
    outC->_L30.nvkrintArray[idx10].valid = kcg_true;
    outC->_L30.nvkrintArray[idx10].l_nvkrint = L_NVKRINT_0m;
    outC->_L30.nvkrintArray[idx10].m_nvkrint = kcg_lit_float32(0.0);
  }
  outC->_L30.m_nvktint = kcg_lit_float32(0.0);
  outC->_L26 = kcg_lit_int32(0);
  for (idx11 = 0; idx11 < 6; idx11++) {
    outC->_L25[idx11] = kcg_lit_int32(0);
  }
  for (idx12 = 0; idx12 < 6; idx12++) {
    outC->_L23[idx12] = kcg_lit_int32(0);
  }
  outC->_L19 = kcg_lit_int32(0);
  outC->_L18 = kcg_lit_int32(0);
  for (idx13 = 0; idx13 < 6; idx13++) {
    outC->_L17[idx13] = kcg_lit_int32(0);
  }
  for (idx14 = 0; idx14 < 6; idx14++) {
    outC->_L16[idx14] = kcg_lit_int32(0);
  }
  for (idx15 = 0; idx15 < 6; idx15++) {
    outC->_L14[idx15] = kcg_lit_int32(0);
  }
  for (idx16 = 0; idx16 < 6; idx16++) {
    outC->_L13.emergency.a[idx16] = kcg_lit_int32(0);
  }
  for (idx17 = 0; idx17 < 6; idx17++) {
    outC->_L13.emergency.v[idx17] = kcg_lit_int32(0);
  }
  for (idx18 = 0; idx18 < 6; idx18++) {
    outC->_L13.service.a[idx18] = kcg_lit_int32(0);
  }
  for (idx19 = 0; idx19 < 6; idx19++) {
    outC->_L13.service.v[idx19] = kcg_lit_int32(0);
  }
  outC->_L12.valid = kcg_true;
  outC->_L12.acknowledgedByDriver = kcg_true;
  outC->_L12.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L12.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L12.trainLength = kcg_lit_int32(0);
  outC->_L12.brakePerctage = kcg_lit_int32(0);
  outC->_L12.maxTrainSpeed = kcg_lit_int32(0);
  outC->_L12.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L12.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L12.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L12.axleNumber = kcg_lit_int32(0);
  outC->_L12.numberNationalSystems = kcg_lit_int32(0);
  for (idx20 = 0; idx20 < 5; idx20++) {
    outC->_L12.nationSystems[idx20] = kcg_lit_int32(0);
  }
  outC->_L12.numberTractionSystems = kcg_lit_int32(0);
  for (idx21 = 0; idx21 < 4; idx21++) {
    outC->_L12.tractionSystem[idx21].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L12.tractionSystem[idx21].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L11.valid = kcg_true;
  outC->_L11.q_dir = Q_DIR_Reverse;
  outC->_L11.d_validnv = kcg_lit_int32(0);
  for (idx22 = 0; idx22 < 7; idx22++) {
    outC->_L11.nid_cArray[idx22].valid = kcg_true;
    outC->_L11.nid_cArray[idx22].nid_c = kcg_lit_int32(0);
  }
  outC->_L11.v_nvshunt = kcg_lit_int32(0);
  outC->_L11.v_nvstff = kcg_lit_int32(0);
  outC->_L11.v_nvonsight = kcg_lit_int32(0);
  outC->_L11.v_nvlimsuperv = kcg_lit_int32(0);
  outC->_L11.v_nvunfit = kcg_lit_int32(0);
  outC->_L11.v_nvrel = kcg_lit_int32(0);
  outC->_L11.d_nvroll = kcg_lit_int32(0);
  outC->_L11.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->_L11.q_nvemrrls = Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->_L11.q_nvguiperm = Q_NVGUIPERM_No;
  outC->_L11.q_nvsbfbperm = Q_NVSBFBPERM_No;
  outC->_L11.q_nvinhsmicperm = Q_NVINHSMICPERM_No;
  outC->_L11.v_nvallowovtrp = kcg_lit_int32(0);
  outC->_L11.v_nvsupovtrp = kcg_lit_int32(0);
  outC->_L11.d_nvovtrp = kcg_lit_int32(0);
  outC->_L11.t_nvovtrp = kcg_lit_int32(0);
  outC->_L11.d_nvpotrp = kcg_lit_int32(0);
  outC->_L11.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->_L11.t_nvcontact = kcg_lit_int32(0);
  outC->_L11.m_nvderun = M_NVDERUN_No;
  outC->_L11.d_nvstff = kcg_lit_int32(0);
  outC->_L11.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  outC->_L11.a_nvmaxredadh1 = kcg_lit_float32(0.0);
  outC->_L11.a_nvmaxredadh2 = kcg_lit_float32(0.0);
  outC->_L11.a_nvmaxredadh3 = kcg_lit_float32(0.0);
  outC->_L11.q_nvlocacc = kcg_lit_int32(0);
  outC->_L11.m_nvavadh = kcg_lit_float32(0.0);
  outC->_L11.m_nvebcl = M_NVEBCL_Confidence_level_50;
  outC->_L11.q_nvkint = Q_NVKINT_No_integrated_correction_factors_follow;
  for (idx24 = 0; idx24 < 7; idx24++) {
    outC->_L11.nvkvintsetArray[idx24].valid = kcg_true;
    outC->_L11.nvkvintsetArray[idx24].q_nvkvintset = Q_NVKVINTSET_Freight_trains;
    outC->_L11.nvkvintsetArray[idx24].a_nvp12 = kcg_lit_float32(0.0);
    outC->_L11.nvkvintsetArray[idx24].a_nvp23 = kcg_lit_float32(0.0);
    for (idx23 = 0; idx23 < 7; idx23++) {
      outC->_L11.nvkvintsetArray[idx24].nvkintArray[idx23].valid = kcg_true;
      outC->_L11.nvkvintsetArray[idx24].nvkintArray[idx23].v_nvkvint =
        kcg_lit_int32(0);
      outC->_L11.nvkvintsetArray[idx24].nvkintArray[idx23].m_nvkvint12 =
        kcg_lit_float32(0.0);
      outC->_L11.nvkvintsetArray[idx24].nvkintArray[idx23].m_nvkvint23 =
        kcg_lit_float32(0.0);
    }
  }
  for (idx25 = 0; idx25 < 7; idx25++) {
    outC->_L11.nvkrintArray[idx25].valid = kcg_true;
    outC->_L11.nvkrintArray[idx25].l_nvkrint = L_NVKRINT_0m;
    outC->_L11.nvkrintArray[idx25].m_nvkrint = kcg_lit_float32(0.0);
  }
  outC->_L11.m_nvktint = kcg_lit_float32(0.0);
  outC->_L10 = kcg_lit_int32(0);
  for (idx26 = 0; idx26 < 6; idx26++) {
    outC->_L1_Max_1_int32[idx26] = kcg_lit_int32(0);
  }
  for (idx27 = 0; idx27 < 6; idx27++) {
    outC->_L2_Max_1_int32[idx27] = kcg_lit_int32(0);
  }
  for (idx28 = 0; idx28 < 6; idx28++) {
    outC->_L3_Max_1_int32[idx28] = kcg_true;
  }
  for (idx29 = 0; idx29 < 6; idx29++) {
    outC->_L4_Max_1_int32[idx29] = kcg_lit_int32(0);
  }
  for (idx30 = 0; idx30 < 13; idx30++) {
    outC->aBrakeSafe_cm.a[idx30] = kcg_lit_int32(0);
  }
  for (idx31 = 0; idx31 < 13; idx31++) {
    outC->aBrakeSafe_cm.v[idx31] = kcg_lit_int32(0);
  }
  /* _L32=(SDMConversionModelPkg::Kv_intConstructor#1)/ */
  Kv_intConstructor_init_SDMConversionModelPkg(
    &outC->Context_Kv_intConstructor_1);
  /* _L10=(SDMConversionModelPkg::Kr_intLookUp#1)/ */
  Kr_intLookUp_init_SDMConversionModelPkg(&outC->Context_Kr_intLookUp_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void A_brake_safe_reset_SDMConversionModelPkg(
  outC_A_brake_safe_SDMConversionModelPkg *outC)
{
  /* _L32=(SDMConversionModelPkg::Kv_intConstructor#1)/ */
  Kv_intConstructor_reset_SDMConversionModelPkg(
    &outC->Context_Kv_intConstructor_1);
  /* _L10=(SDMConversionModelPkg::Kr_intLookUp#1)/ */
  Kr_intLookUp_reset_SDMConversionModelPkg(&outC->Context_Kr_intLookUp_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: SDMConversionModelPkg::A_brake_safe/
  @1: (math::Max#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** A_brake_safe_SDMConversionModelPkg.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

