/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ABrakeFactory_SDMModelPkg.h"

/* SDMModelPkg::ABrakeFactory/ */
void ABrakeFactory_SDMModelPkg(
  /* trainData/ */
  trainData_T_TIU_Types_Pkg *trainData,
  /* NationalValues/ */
  P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  outC_ABrakeFactory_SDMModelPkg *outC)
{
  kcg_copy_trainData_T_TIU_Types_Pkg(&outC->_L14, trainData);
  /* _L10=(SDMConversionModelPkg::brakePercentToABrake#1)/ */
  brakePercentToABrake_SDMConversionModelPkg(
    &outC->_L14,
    &outC->Context_brakePercentToABrake_1);
  kcg_copy_a_Brake_t_SDMConversionModelPkg(
    &outC->_L10,
    &outC->Context_brakePercentToABrake_1.aBrake);
  /* _L32=(SDMConversionModelPkg::InflateABrakeService#1)/ */
  InflateABrakeService_SDMConversionModelPkg(
    &outC->_L10,
    &outC->Context_InflateABrakeService_1);
  kcg_copy_ASafe_T_CalcBrakingCurves_types(
    &outC->_L32,
    &outC->Context_InflateABrakeService_1.aBrakeService);
  kcg_copy_ASafe_T_CalcBrakingCurves_types(&outC->aBrakeService, &outC->_L32);
  kcg_copy_trainData_T_TIU_Types_Pkg(&outC->_L6, trainData);
  kcg_copy_P3_NationalValues_T_Packet_Types_Pkg(&outC->_L7, NationalValues);
  /* _L4=(SDMConversionModelPkg::A_brake_safe#1)/ */
  A_brake_safe_SDMConversionModelPkg(
    &outC->_L10,
    &outC->_L6,
    &outC->_L7,
    &outC->Context_A_brake_safe_1);
  kcg_copy_av_MergedMap_t_SDMConversionModelPkg(
    &outC->_L4,
    &outC->Context_A_brake_safe_1.aBrakeSafe_cm);
  /* _L25=(SDMConversionModelPkg::InflateABrakeSafe#1)/ */
  InflateABrakeSafe_SDMConversionModelPkg(
    &outC->_L4,
    &outC->Context_InflateABrakeSafe_1);
  kcg_copy_ASafe_T_CalcBrakingCurves_types(
    &outC->_L25,
    &outC->Context_InflateABrakeSafe_1.aBrakeSafe);
  kcg_copy_trainData_T_TIU_Types_Pkg(&outC->_L8, trainData);
  kcg_copy_P3_NationalValues_T_Packet_Types_Pkg(&outC->_L9, NationalValues);
  /* _L5=(SDMModelPkg::LimitToReducedAdhesion#1)/ */
  LimitToReducedAdhesion_SDMModelPkg(
    &outC->_L25,
    &outC->_L8,
    &outC->_L9,
    &outC->Context_LimitToReducedAdhesion_1);
  kcg_copy_ASafe_T_CalcBrakingCurves_types(
    &outC->_L5,
    &outC->Context_LimitToReducedAdhesion_1.A_brake_safe_reduced);
  kcg_copy_ASafe_T_CalcBrakingCurves_types(&outC->aBrakeSafe, &outC->_L5);
  kcg_copy_trainData_T_TIU_Types_Pkg(&outC->_L1, trainData);
  kcg_copy_P3_NationalValues_T_Packet_Types_Pkg(&outC->_L2, NationalValues);
  /* _L3=(SDMConversionModelPkg::brakeBuildUp#1)/ */
  brakeBuildUp_SDMConversionModelPkg(
    &outC->_L1,
    &outC->_L2,
    &outC->Context_brakeBuildUp_1);
  kcg_copy_t_Brake_t_SDMModelPkg(&outC->_L3, &outC->Context_brakeBuildUp_1.T_b);
  kcg_copy_t_Brake_t_SDMModelPkg(&outC->T_b, &outC->_L3);
}

#ifndef KCG_USER_DEFINED_INIT
void ABrakeFactory_init_SDMModelPkg(outC_ABrakeFactory_SDMModelPkg *outC)
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
  static kcg_size idx18;
  static kcg_size idx19;
  static kcg_size idx20;
  static kcg_size idx21;
  static kcg_size idx22;
  static kcg_size idx23;
  static kcg_size idx24;
  static kcg_size idx25;
  static kcg_size idx26;
  static kcg_size idx27;
  static kcg_size idx28;
  static kcg_size idx29;
  static kcg_size idx30;
  static kcg_size idx31;
  static kcg_size idx32;
  static kcg_size idx33;
  static kcg_size idx34;
  static kcg_size idx35;
  static kcg_size idx36;
  static kcg_size idx37;
  static kcg_size idx38;
  static kcg_size idx39;
  static kcg_size idx40;
  static kcg_size idx41;
  static kcg_size idx42;
  static kcg_size idx43;
  static kcg_size idx44;
  static kcg_size idx45;
  static kcg_size idx46;
  static kcg_size idx47;
  static kcg_size idx48;
  static kcg_size idx49;

  for (idx = 0; idx < 100; idx++) {
    outC->_L32.distance_definition[idx] = kcg_lit_float32(0.0);
  }
  for (idx1 = 0; idx1 < 14; idx1++) {
    outC->_L32.speed_definition[idx1] = kcg_lit_float32(0.0);
  }
  for (idx3 = 0; idx3 < 14; idx3++) {
    for (idx2 = 0; idx2 < 100; idx2++) {
      outC->_L32.data[idx3][idx2] = kcg_lit_float32(0.0);
    }
  }
  for (idx4 = 0; idx4 < 100; idx4++) {
    outC->_L25.distance_definition[idx4] = kcg_lit_float32(0.0);
  }
  for (idx5 = 0; idx5 < 14; idx5++) {
    outC->_L25.speed_definition[idx5] = kcg_lit_float32(0.0);
  }
  for (idx7 = 0; idx7 < 14; idx7++) {
    for (idx6 = 0; idx6 < 100; idx6++) {
      outC->_L25.data[idx7][idx6] = kcg_lit_float32(0.0);
    }
  }
  outC->_L14.valid = kcg_true;
  outC->_L14.acknowledgedByDriver = kcg_true;
  outC->_L14.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L14.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L14.trainLength = kcg_lit_int32(0);
  outC->_L14.brakePerctage = kcg_lit_int32(0);
  outC->_L14.maxTrainSpeed = kcg_lit_int32(0);
  outC->_L14.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L14.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L14.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L14.axleNumber = kcg_lit_int32(0);
  outC->_L14.numberNationalSystems = kcg_lit_int32(0);
  for (idx8 = 0; idx8 < 5; idx8++) {
    outC->_L14.nationSystems[idx8] = kcg_lit_int32(0);
  }
  outC->_L14.numberTractionSystems = kcg_lit_int32(0);
  for (idx9 = 0; idx9 < 4; idx9++) {
    outC->_L14.tractionSystem[idx9].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L14.tractionSystem[idx9].nid_ctraction = kcg_lit_int32(0);
  }
  for (idx10 = 0; idx10 < 6; idx10++) {
    outC->_L10.emergency.a[idx10] = kcg_lit_int32(0);
  }
  for (idx11 = 0; idx11 < 6; idx11++) {
    outC->_L10.emergency.v[idx11] = kcg_lit_int32(0);
  }
  for (idx12 = 0; idx12 < 6; idx12++) {
    outC->_L10.service.a[idx12] = kcg_lit_int32(0);
  }
  for (idx13 = 0; idx13 < 6; idx13++) {
    outC->_L10.service.v[idx13] = kcg_lit_int32(0);
  }
  outC->_L8.valid = kcg_true;
  outC->_L8.acknowledgedByDriver = kcg_true;
  outC->_L8.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L8.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L8.trainLength = kcg_lit_int32(0);
  outC->_L8.brakePerctage = kcg_lit_int32(0);
  outC->_L8.maxTrainSpeed = kcg_lit_int32(0);
  outC->_L8.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L8.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L8.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L8.axleNumber = kcg_lit_int32(0);
  outC->_L8.numberNationalSystems = kcg_lit_int32(0);
  for (idx14 = 0; idx14 < 5; idx14++) {
    outC->_L8.nationSystems[idx14] = kcg_lit_int32(0);
  }
  outC->_L8.numberTractionSystems = kcg_lit_int32(0);
  for (idx15 = 0; idx15 < 4; idx15++) {
    outC->_L8.tractionSystem[idx15].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L8.tractionSystem[idx15].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L9.valid = kcg_true;
  outC->_L9.q_dir = Q_DIR_Reverse;
  outC->_L9.d_validnv = kcg_lit_int32(0);
  for (idx16 = 0; idx16 < 7; idx16++) {
    outC->_L9.nid_cArray[idx16].valid = kcg_true;
    outC->_L9.nid_cArray[idx16].nid_c = kcg_lit_int32(0);
  }
  outC->_L9.v_nvshunt = kcg_lit_int32(0);
  outC->_L9.v_nvstff = kcg_lit_int32(0);
  outC->_L9.v_nvonsight = kcg_lit_int32(0);
  outC->_L9.v_nvlimsuperv = kcg_lit_int32(0);
  outC->_L9.v_nvunfit = kcg_lit_int32(0);
  outC->_L9.v_nvrel = kcg_lit_int32(0);
  outC->_L9.d_nvroll = kcg_lit_int32(0);
  outC->_L9.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->_L9.q_nvemrrls = Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->_L9.q_nvguiperm = Q_NVGUIPERM_No;
  outC->_L9.q_nvsbfbperm = Q_NVSBFBPERM_No;
  outC->_L9.q_nvinhsmicperm = Q_NVINHSMICPERM_No;
  outC->_L9.v_nvallowovtrp = kcg_lit_int32(0);
  outC->_L9.v_nvsupovtrp = kcg_lit_int32(0);
  outC->_L9.d_nvovtrp = kcg_lit_int32(0);
  outC->_L9.t_nvovtrp = kcg_lit_int32(0);
  outC->_L9.d_nvpotrp = kcg_lit_int32(0);
  outC->_L9.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->_L9.t_nvcontact = kcg_lit_int32(0);
  outC->_L9.m_nvderun = M_NVDERUN_No;
  outC->_L9.d_nvstff = kcg_lit_int32(0);
  outC->_L9.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  outC->_L9.a_nvmaxredadh1 = kcg_lit_float32(0.0);
  outC->_L9.a_nvmaxredadh2 = kcg_lit_float32(0.0);
  outC->_L9.a_nvmaxredadh3 = kcg_lit_float32(0.0);
  outC->_L9.q_nvlocacc = kcg_lit_int32(0);
  outC->_L9.m_nvavadh = kcg_lit_float32(0.0);
  outC->_L9.m_nvebcl = M_NVEBCL_Confidence_level_50;
  outC->_L9.q_nvkint = Q_NVKINT_No_integrated_correction_factors_follow;
  for (idx18 = 0; idx18 < 7; idx18++) {
    outC->_L9.nvkvintsetArray[idx18].valid = kcg_true;
    outC->_L9.nvkvintsetArray[idx18].q_nvkvintset = Q_NVKVINTSET_Freight_trains;
    outC->_L9.nvkvintsetArray[idx18].a_nvp12 = kcg_lit_float32(0.0);
    outC->_L9.nvkvintsetArray[idx18].a_nvp23 = kcg_lit_float32(0.0);
    for (idx17 = 0; idx17 < 7; idx17++) {
      outC->_L9.nvkvintsetArray[idx18].nvkintArray[idx17].valid = kcg_true;
      outC->_L9.nvkvintsetArray[idx18].nvkintArray[idx17].v_nvkvint =
        kcg_lit_int32(0);
      outC->_L9.nvkvintsetArray[idx18].nvkintArray[idx17].m_nvkvint12 =
        kcg_lit_float32(0.0);
      outC->_L9.nvkvintsetArray[idx18].nvkintArray[idx17].m_nvkvint23 =
        kcg_lit_float32(0.0);
    }
  }
  for (idx19 = 0; idx19 < 7; idx19++) {
    outC->_L9.nvkrintArray[idx19].valid = kcg_true;
    outC->_L9.nvkrintArray[idx19].l_nvkrint = L_NVKRINT_0m;
    outC->_L9.nvkrintArray[idx19].m_nvkrint = kcg_lit_float32(0.0);
  }
  outC->_L9.m_nvktint = kcg_lit_float32(0.0);
  outC->_L6.valid = kcg_true;
  outC->_L6.acknowledgedByDriver = kcg_true;
  outC->_L6.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L6.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L6.trainLength = kcg_lit_int32(0);
  outC->_L6.brakePerctage = kcg_lit_int32(0);
  outC->_L6.maxTrainSpeed = kcg_lit_int32(0);
  outC->_L6.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L6.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L6.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L6.axleNumber = kcg_lit_int32(0);
  outC->_L6.numberNationalSystems = kcg_lit_int32(0);
  for (idx20 = 0; idx20 < 5; idx20++) {
    outC->_L6.nationSystems[idx20] = kcg_lit_int32(0);
  }
  outC->_L6.numberTractionSystems = kcg_lit_int32(0);
  for (idx21 = 0; idx21 < 4; idx21++) {
    outC->_L6.tractionSystem[idx21].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L6.tractionSystem[idx21].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L7.valid = kcg_true;
  outC->_L7.q_dir = Q_DIR_Reverse;
  outC->_L7.d_validnv = kcg_lit_int32(0);
  for (idx22 = 0; idx22 < 7; idx22++) {
    outC->_L7.nid_cArray[idx22].valid = kcg_true;
    outC->_L7.nid_cArray[idx22].nid_c = kcg_lit_int32(0);
  }
  outC->_L7.v_nvshunt = kcg_lit_int32(0);
  outC->_L7.v_nvstff = kcg_lit_int32(0);
  outC->_L7.v_nvonsight = kcg_lit_int32(0);
  outC->_L7.v_nvlimsuperv = kcg_lit_int32(0);
  outC->_L7.v_nvunfit = kcg_lit_int32(0);
  outC->_L7.v_nvrel = kcg_lit_int32(0);
  outC->_L7.d_nvroll = kcg_lit_int32(0);
  outC->_L7.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->_L7.q_nvemrrls = Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->_L7.q_nvguiperm = Q_NVGUIPERM_No;
  outC->_L7.q_nvsbfbperm = Q_NVSBFBPERM_No;
  outC->_L7.q_nvinhsmicperm = Q_NVINHSMICPERM_No;
  outC->_L7.v_nvallowovtrp = kcg_lit_int32(0);
  outC->_L7.v_nvsupovtrp = kcg_lit_int32(0);
  outC->_L7.d_nvovtrp = kcg_lit_int32(0);
  outC->_L7.t_nvovtrp = kcg_lit_int32(0);
  outC->_L7.d_nvpotrp = kcg_lit_int32(0);
  outC->_L7.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->_L7.t_nvcontact = kcg_lit_int32(0);
  outC->_L7.m_nvderun = M_NVDERUN_No;
  outC->_L7.d_nvstff = kcg_lit_int32(0);
  outC->_L7.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  outC->_L7.a_nvmaxredadh1 = kcg_lit_float32(0.0);
  outC->_L7.a_nvmaxredadh2 = kcg_lit_float32(0.0);
  outC->_L7.a_nvmaxredadh3 = kcg_lit_float32(0.0);
  outC->_L7.q_nvlocacc = kcg_lit_int32(0);
  outC->_L7.m_nvavadh = kcg_lit_float32(0.0);
  outC->_L7.m_nvebcl = M_NVEBCL_Confidence_level_50;
  outC->_L7.q_nvkint = Q_NVKINT_No_integrated_correction_factors_follow;
  for (idx24 = 0; idx24 < 7; idx24++) {
    outC->_L7.nvkvintsetArray[idx24].valid = kcg_true;
    outC->_L7.nvkvintsetArray[idx24].q_nvkvintset = Q_NVKVINTSET_Freight_trains;
    outC->_L7.nvkvintsetArray[idx24].a_nvp12 = kcg_lit_float32(0.0);
    outC->_L7.nvkvintsetArray[idx24].a_nvp23 = kcg_lit_float32(0.0);
    for (idx23 = 0; idx23 < 7; idx23++) {
      outC->_L7.nvkvintsetArray[idx24].nvkintArray[idx23].valid = kcg_true;
      outC->_L7.nvkvintsetArray[idx24].nvkintArray[idx23].v_nvkvint =
        kcg_lit_int32(0);
      outC->_L7.nvkvintsetArray[idx24].nvkintArray[idx23].m_nvkvint12 =
        kcg_lit_float32(0.0);
      outC->_L7.nvkvintsetArray[idx24].nvkintArray[idx23].m_nvkvint23 =
        kcg_lit_float32(0.0);
    }
  }
  for (idx25 = 0; idx25 < 7; idx25++) {
    outC->_L7.nvkrintArray[idx25].valid = kcg_true;
    outC->_L7.nvkrintArray[idx25].l_nvkrint = L_NVKRINT_0m;
    outC->_L7.nvkrintArray[idx25].m_nvkrint = kcg_lit_float32(0.0);
  }
  outC->_L7.m_nvktint = kcg_lit_float32(0.0);
  for (idx26 = 0; idx26 < 100; idx26++) {
    outC->_L5.distance_definition[idx26] = kcg_lit_float32(0.0);
  }
  for (idx27 = 0; idx27 < 14; idx27++) {
    outC->_L5.speed_definition[idx27] = kcg_lit_float32(0.0);
  }
  for (idx29 = 0; idx29 < 14; idx29++) {
    for (idx28 = 0; idx28 < 100; idx28++) {
      outC->_L5.data[idx29][idx28] = kcg_lit_float32(0.0);
    }
  }
  for (idx30 = 0; idx30 < 13; idx30++) {
    outC->_L4.a[idx30] = kcg_lit_int32(0);
  }
  for (idx31 = 0; idx31 < 13; idx31++) {
    outC->_L4.v[idx31] = kcg_lit_int32(0);
  }
  for (idx32 = 0; idx32 < 2; idx32++) {
    outC->_L3.emergency[idx32] = kcg_lit_float32(0.0);
  }
  for (idx33 = 0; idx33 < 2; idx33++) {
    outC->_L3.service[idx33] = kcg_lit_float32(0.0);
  }
  outC->_L2.valid = kcg_true;
  outC->_L2.q_dir = Q_DIR_Reverse;
  outC->_L2.d_validnv = kcg_lit_int32(0);
  for (idx34 = 0; idx34 < 7; idx34++) {
    outC->_L2.nid_cArray[idx34].valid = kcg_true;
    outC->_L2.nid_cArray[idx34].nid_c = kcg_lit_int32(0);
  }
  outC->_L2.v_nvshunt = kcg_lit_int32(0);
  outC->_L2.v_nvstff = kcg_lit_int32(0);
  outC->_L2.v_nvonsight = kcg_lit_int32(0);
  outC->_L2.v_nvlimsuperv = kcg_lit_int32(0);
  outC->_L2.v_nvunfit = kcg_lit_int32(0);
  outC->_L2.v_nvrel = kcg_lit_int32(0);
  outC->_L2.d_nvroll = kcg_lit_int32(0);
  outC->_L2.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->_L2.q_nvemrrls = Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->_L2.q_nvguiperm = Q_NVGUIPERM_No;
  outC->_L2.q_nvsbfbperm = Q_NVSBFBPERM_No;
  outC->_L2.q_nvinhsmicperm = Q_NVINHSMICPERM_No;
  outC->_L2.v_nvallowovtrp = kcg_lit_int32(0);
  outC->_L2.v_nvsupovtrp = kcg_lit_int32(0);
  outC->_L2.d_nvovtrp = kcg_lit_int32(0);
  outC->_L2.t_nvovtrp = kcg_lit_int32(0);
  outC->_L2.d_nvpotrp = kcg_lit_int32(0);
  outC->_L2.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->_L2.t_nvcontact = kcg_lit_int32(0);
  outC->_L2.m_nvderun = M_NVDERUN_No;
  outC->_L2.d_nvstff = kcg_lit_int32(0);
  outC->_L2.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  outC->_L2.a_nvmaxredadh1 = kcg_lit_float32(0.0);
  outC->_L2.a_nvmaxredadh2 = kcg_lit_float32(0.0);
  outC->_L2.a_nvmaxredadh3 = kcg_lit_float32(0.0);
  outC->_L2.q_nvlocacc = kcg_lit_int32(0);
  outC->_L2.m_nvavadh = kcg_lit_float32(0.0);
  outC->_L2.m_nvebcl = M_NVEBCL_Confidence_level_50;
  outC->_L2.q_nvkint = Q_NVKINT_No_integrated_correction_factors_follow;
  for (idx36 = 0; idx36 < 7; idx36++) {
    outC->_L2.nvkvintsetArray[idx36].valid = kcg_true;
    outC->_L2.nvkvintsetArray[idx36].q_nvkvintset = Q_NVKVINTSET_Freight_trains;
    outC->_L2.nvkvintsetArray[idx36].a_nvp12 = kcg_lit_float32(0.0);
    outC->_L2.nvkvintsetArray[idx36].a_nvp23 = kcg_lit_float32(0.0);
    for (idx35 = 0; idx35 < 7; idx35++) {
      outC->_L2.nvkvintsetArray[idx36].nvkintArray[idx35].valid = kcg_true;
      outC->_L2.nvkvintsetArray[idx36].nvkintArray[idx35].v_nvkvint =
        kcg_lit_int32(0);
      outC->_L2.nvkvintsetArray[idx36].nvkintArray[idx35].m_nvkvint12 =
        kcg_lit_float32(0.0);
      outC->_L2.nvkvintsetArray[idx36].nvkintArray[idx35].m_nvkvint23 =
        kcg_lit_float32(0.0);
    }
  }
  for (idx37 = 0; idx37 < 7; idx37++) {
    outC->_L2.nvkrintArray[idx37].valid = kcg_true;
    outC->_L2.nvkrintArray[idx37].l_nvkrint = L_NVKRINT_0m;
    outC->_L2.nvkrintArray[idx37].m_nvkrint = kcg_lit_float32(0.0);
  }
  outC->_L2.m_nvktint = kcg_lit_float32(0.0);
  outC->_L1.valid = kcg_true;
  outC->_L1.acknowledgedByDriver = kcg_true;
  outC->_L1.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L1.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L1.trainLength = kcg_lit_int32(0);
  outC->_L1.brakePerctage = kcg_lit_int32(0);
  outC->_L1.maxTrainSpeed = kcg_lit_int32(0);
  outC->_L1.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L1.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L1.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L1.axleNumber = kcg_lit_int32(0);
  outC->_L1.numberNationalSystems = kcg_lit_int32(0);
  for (idx38 = 0; idx38 < 5; idx38++) {
    outC->_L1.nationSystems[idx38] = kcg_lit_int32(0);
  }
  outC->_L1.numberTractionSystems = kcg_lit_int32(0);
  for (idx39 = 0; idx39 < 4; idx39++) {
    outC->_L1.tractionSystem[idx39].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L1.tractionSystem[idx39].nid_ctraction = kcg_lit_int32(0);
  }
  for (idx40 = 0; idx40 < 100; idx40++) {
    outC->aBrakeService.distance_definition[idx40] = kcg_lit_float32(0.0);
  }
  for (idx41 = 0; idx41 < 14; idx41++) {
    outC->aBrakeService.speed_definition[idx41] = kcg_lit_float32(0.0);
  }
  for (idx43 = 0; idx43 < 14; idx43++) {
    for (idx42 = 0; idx42 < 100; idx42++) {
      outC->aBrakeService.data[idx43][idx42] = kcg_lit_float32(0.0);
    }
  }
  for (idx44 = 0; idx44 < 100; idx44++) {
    outC->aBrakeSafe.distance_definition[idx44] = kcg_lit_float32(0.0);
  }
  for (idx45 = 0; idx45 < 14; idx45++) {
    outC->aBrakeSafe.speed_definition[idx45] = kcg_lit_float32(0.0);
  }
  for (idx47 = 0; idx47 < 14; idx47++) {
    for (idx46 = 0; idx46 < 100; idx46++) {
      outC->aBrakeSafe.data[idx47][idx46] = kcg_lit_float32(0.0);
    }
  }
  for (idx48 = 0; idx48 < 2; idx48++) {
    outC->T_b.emergency[idx48] = kcg_lit_float32(0.0);
  }
  for (idx49 = 0; idx49 < 2; idx49++) {
    outC->T_b.service[idx49] = kcg_lit_float32(0.0);
  }
  /* _L3=(SDMConversionModelPkg::brakeBuildUp#1)/ */
  brakeBuildUp_init_SDMConversionModelPkg(&outC->Context_brakeBuildUp_1);
  /* _L5=(SDMModelPkg::LimitToReducedAdhesion#1)/ */
  LimitToReducedAdhesion_init_SDMModelPkg(
    &outC->Context_LimitToReducedAdhesion_1);
  /* _L25=(SDMConversionModelPkg::InflateABrakeSafe#1)/ */
  InflateABrakeSafe_init_SDMConversionModelPkg(
    &outC->Context_InflateABrakeSafe_1);
  /* _L4=(SDMConversionModelPkg::A_brake_safe#1)/ */
  A_brake_safe_init_SDMConversionModelPkg(&outC->Context_A_brake_safe_1);
  /* _L32=(SDMConversionModelPkg::InflateABrakeService#1)/ */
  InflateABrakeService_init_SDMConversionModelPkg(
    &outC->Context_InflateABrakeService_1);
  /* _L10=(SDMConversionModelPkg::brakePercentToABrake#1)/ */
  brakePercentToABrake_init_SDMConversionModelPkg(
    &outC->Context_brakePercentToABrake_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ABrakeFactory_reset_SDMModelPkg(outC_ABrakeFactory_SDMModelPkg *outC)
{
  /* _L3=(SDMConversionModelPkg::brakeBuildUp#1)/ */
  brakeBuildUp_reset_SDMConversionModelPkg(&outC->Context_brakeBuildUp_1);
  /* _L5=(SDMModelPkg::LimitToReducedAdhesion#1)/ */
  LimitToReducedAdhesion_reset_SDMModelPkg(
    &outC->Context_LimitToReducedAdhesion_1);
  /* _L25=(SDMConversionModelPkg::InflateABrakeSafe#1)/ */
  InflateABrakeSafe_reset_SDMConversionModelPkg(
    &outC->Context_InflateABrakeSafe_1);
  /* _L4=(SDMConversionModelPkg::A_brake_safe#1)/ */
  A_brake_safe_reset_SDMConversionModelPkg(&outC->Context_A_brake_safe_1);
  /* _L32=(SDMConversionModelPkg::InflateABrakeService#1)/ */
  InflateABrakeService_reset_SDMConversionModelPkg(
    &outC->Context_InflateABrakeService_1);
  /* _L10=(SDMConversionModelPkg::brakePercentToABrake#1)/ */
  brakePercentToABrake_reset_SDMConversionModelPkg(
    &outC->Context_brakePercentToABrake_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ABrakeFactory_SDMModelPkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

