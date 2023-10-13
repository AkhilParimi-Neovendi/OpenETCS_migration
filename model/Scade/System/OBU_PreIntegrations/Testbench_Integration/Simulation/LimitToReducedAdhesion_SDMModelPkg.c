/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "LimitToReducedAdhesion_SDMModelPkg.h"

/* SDMModelPkg::LimitToReducedAdhesion/ */
void LimitToReducedAdhesion_SDMModelPkg(
  /* aBrakeSafe/ */
  ASafe_T_CalcBrakingCurves_types *aBrakeSafe,
  /* trainData/ */
  trainData_T_TIU_Types_Pkg *trainData,
  /* NationalValues/ */
  P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  outC_LimitToReducedAdhesion_SDMModelPkg *outC)
{
  static kcg_size idx;
  static array_int64_14 noname;
  static kcg_bool _1_noname;

  outC->_L39 = kcg_false;
  outC->_L37 = kcg_false;
  kcg_copy_P3_NationalValues_T_Packet_Types_Pkg(&outC->_L38, NationalValues);
  outC->_L35 = outC->_L38.q_nvdriver_adhes;
  /* _L36= */
  switch (outC->_L35) {
    case Q_NVDRIVER_ADHES_Allowed :
      outC->_L36 = outC->_L39;
      break;
    default :
      outC->_L36 = outC->_L37;
      break;
  }
  _1_noname = outC->_L36;
  kcg_copy_P3_NationalValues_T_Packet_Types_Pkg(&outC->_L1, NationalValues);
  outC->_L6 = outC->_L1.a_nvmaxredadh2;
  outC->_L2 = outC->_L1.a_nvmaxredadh1;
  outC->_L9 = kcg_false;
  /* _L8= */
  if (outC->_L9) {
    outC->_L8 = outC->_L2;
  }
  else {
    outC->_L8 = outC->_L6;
  }
  outC->_L7 = outC->_L1.a_nvmaxredadh3;
  kcg_copy_trainData_T_TIU_Types_Pkg(&outC->_L3, trainData);
  outC->_L4 = outC->_L3.trainCategory;
  /* _L5= */
  switch (outC->_L4) {
    case NC_TRAIN_Passenger_train :
      outC->_L5 = outC->_L8;
      break;
    default :
      outC->_L5 = outC->_L7;
      break;
  }
  /* _L24=(SDM_Types_Pkg::TransformA_realToA_int#1)/ */
  TransformA_realToA_int_SDM_Types_Pkg(
    outC->_L5,
    &outC->Context_TransformA_realToA_int_1);
  outC->_L24 = outC->Context_TransformA_realToA_int_1.acc_int;
  /* _L23/ */
  for (idx = 0; idx < 14; idx++) {
    outC->_L23[idx] = outC->_L24;
  }
  kcg_copy_array_int64_14(&noname, &outC->_L23);
  kcg_copy_ASafe_T_CalcBrakingCurves_types(&outC->_L10, aBrakeSafe);
  kcg_copy_ASafeDistanceDefinition_T_CalcBrakingCurves_types(
    &outC->_L28,
    &outC->_L10.distance_definition);
  kcg_copy_ASafeSpeedDefinition_T_CalcBrakingCurves_types(
    &outC->_L29,
    &outC->_L10.speed_definition);
  kcg_copy_ASafe_Data_T_CalcBrakingCurves_types(&outC->_L30, &outC->_L10.data);
  kcg_copy_ASafeDistanceDefinition_T_CalcBrakingCurves_types(
    &outC->_L34.distance_definition,
    &outC->_L28);
  kcg_copy_ASafeSpeedDefinition_T_CalcBrakingCurves_types(
    &outC->_L34.speed_definition,
    &outC->_L29);
  kcg_copy_ASafe_Data_T_CalcBrakingCurves_types(&outC->_L34.data, &outC->_L30);
  kcg_copy_ASafe_T_CalcBrakingCurves_types(
    &outC->A_brake_safe_reduced,
    &outC->_L34);
}

#ifndef KCG_USER_DEFINED_INIT
void LimitToReducedAdhesion_init_SDMModelPkg(
  outC_LimitToReducedAdhesion_SDMModelPkg *outC)
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

  outC->_L39 = kcg_true;
  outC->_L38.valid = kcg_true;
  outC->_L38.q_dir = Q_DIR_Reverse;
  outC->_L38.d_validnv = kcg_lit_int64(0);
  for (idx = 0; idx < 7; idx++) {
    outC->_L38.nid_cArray[idx].valid = kcg_true;
    outC->_L38.nid_cArray[idx].nid_c = kcg_lit_int64(0);
  }
  outC->_L38.v_nvshunt = kcg_lit_int64(0);
  outC->_L38.v_nvstff = kcg_lit_int64(0);
  outC->_L38.v_nvonsight = kcg_lit_int64(0);
  outC->_L38.v_nvlimsuperv = kcg_lit_int64(0);
  outC->_L38.v_nvunfit = kcg_lit_int64(0);
  outC->_L38.v_nvrel = kcg_lit_int64(0);
  outC->_L38.d_nvroll = kcg_lit_int64(0);
  outC->_L38.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->_L38.q_nvemrrls = Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->_L38.q_nvguiperm = Q_NVGUIPERM_No;
  outC->_L38.q_nvsbfbperm = Q_NVSBFBPERM_No;
  outC->_L38.q_nvinhsmicperm = Q_NVINHSMICPERM_No;
  outC->_L38.v_nvallowovtrp = kcg_lit_int64(0);
  outC->_L38.v_nvsupovtrp = kcg_lit_int64(0);
  outC->_L38.d_nvovtrp = kcg_lit_int64(0);
  outC->_L38.t_nvovtrp = kcg_lit_int64(0);
  outC->_L38.d_nvpotrp = kcg_lit_int64(0);
  outC->_L38.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->_L38.t_nvcontact = kcg_lit_int64(0);
  outC->_L38.m_nvderun = M_NVDERUN_No;
  outC->_L38.d_nvstff = kcg_lit_int64(0);
  outC->_L38.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  outC->_L38.a_nvmaxredadh1 = kcg_lit_float64(0.0);
  outC->_L38.a_nvmaxredadh2 = kcg_lit_float64(0.0);
  outC->_L38.a_nvmaxredadh3 = kcg_lit_float64(0.0);
  outC->_L38.q_nvlocacc = kcg_lit_int64(0);
  outC->_L38.m_nvavadh = kcg_lit_float64(0.0);
  outC->_L38.m_nvebcl = M_NVEBCL_Confidence_level_50;
  outC->_L38.q_nvkint = Q_NVKINT_No_integrated_correction_factors_follow;
  for (idx2 = 0; idx2 < 7; idx2++) {
    outC->_L38.nvkvintsetArray[idx2].valid = kcg_true;
    outC->_L38.nvkvintsetArray[idx2].q_nvkvintset = Q_NVKVINTSET_Freight_trains;
    outC->_L38.nvkvintsetArray[idx2].a_nvp12 = kcg_lit_float64(0.0);
    outC->_L38.nvkvintsetArray[idx2].a_nvp23 = kcg_lit_float64(0.0);
    for (idx1 = 0; idx1 < 7; idx1++) {
      outC->_L38.nvkvintsetArray[idx2].nvkintArray[idx1].valid = kcg_true;
      outC->_L38.nvkvintsetArray[idx2].nvkintArray[idx1].v_nvkvint = kcg_lit_int64(0);
      outC->_L38.nvkvintsetArray[idx2].nvkintArray[idx1].m_nvkvint12 =
        kcg_lit_float64(0.0);
      outC->_L38.nvkvintsetArray[idx2].nvkintArray[idx1].m_nvkvint23 =
        kcg_lit_float64(0.0);
    }
  }
  for (idx3 = 0; idx3 < 7; idx3++) {
    outC->_L38.nvkrintArray[idx3].valid = kcg_true;
    outC->_L38.nvkrintArray[idx3].l_nvkrint = L_NVKRINT_0m;
    outC->_L38.nvkrintArray[idx3].m_nvkrint = kcg_lit_float64(0.0);
  }
  outC->_L38.m_nvktint = kcg_lit_float64(0.0);
  outC->_L37 = kcg_true;
  outC->_L36 = kcg_true;
  outC->_L35 = Q_NVDRIVER_ADHES_Not_allowed;
  for (idx4 = 0; idx4 < 100; idx4++) {
    outC->_L34.distance_definition[idx4] = kcg_lit_float64(0.0);
  }
  for (idx5 = 0; idx5 < 14; idx5++) {
    outC->_L34.speed_definition[idx5] = kcg_lit_float64(0.0);
  }
  for (idx7 = 0; idx7 < 14; idx7++) {
    for (idx6 = 0; idx6 < 100; idx6++) {
      outC->_L34.data[idx7][idx6] = kcg_lit_float64(0.0);
    }
  }
  for (idx8 = 0; idx8 < 100; idx8++) {
    outC->_L28[idx8] = kcg_lit_float64(0.0);
  }
  for (idx9 = 0; idx9 < 14; idx9++) {
    outC->_L29[idx9] = kcg_lit_float64(0.0);
  }
  for (idx11 = 0; idx11 < 14; idx11++) {
    for (idx10 = 0; idx10 < 100; idx10++) {
      outC->_L30[idx11][idx10] = kcg_lit_float64(0.0);
    }
  }
  for (idx12 = 0; idx12 < 14; idx12++) {
    outC->_L23[idx12] = kcg_lit_int64(0);
  }
  outC->_L24 = kcg_lit_int64(0);
  for (idx13 = 0; idx13 < 100; idx13++) {
    outC->_L10.distance_definition[idx13] = kcg_lit_float64(0.0);
  }
  for (idx14 = 0; idx14 < 14; idx14++) {
    outC->_L10.speed_definition[idx14] = kcg_lit_float64(0.0);
  }
  for (idx16 = 0; idx16 < 14; idx16++) {
    for (idx15 = 0; idx15 < 100; idx15++) {
      outC->_L10.data[idx16][idx15] = kcg_lit_float64(0.0);
    }
  }
  outC->_L9 = kcg_true;
  outC->_L8 = kcg_lit_float64(0.0);
  outC->_L7 = kcg_lit_float64(0.0);
  outC->_L6 = kcg_lit_float64(0.0);
  outC->_L5 = kcg_lit_float64(0.0);
  outC->_L1.valid = kcg_true;
  outC->_L1.q_dir = Q_DIR_Reverse;
  outC->_L1.d_validnv = kcg_lit_int64(0);
  for (idx17 = 0; idx17 < 7; idx17++) {
    outC->_L1.nid_cArray[idx17].valid = kcg_true;
    outC->_L1.nid_cArray[idx17].nid_c = kcg_lit_int64(0);
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
  for (idx19 = 0; idx19 < 7; idx19++) {
    outC->_L1.nvkvintsetArray[idx19].valid = kcg_true;
    outC->_L1.nvkvintsetArray[idx19].q_nvkvintset = Q_NVKVINTSET_Freight_trains;
    outC->_L1.nvkvintsetArray[idx19].a_nvp12 = kcg_lit_float64(0.0);
    outC->_L1.nvkvintsetArray[idx19].a_nvp23 = kcg_lit_float64(0.0);
    for (idx18 = 0; idx18 < 7; idx18++) {
      outC->_L1.nvkvintsetArray[idx19].nvkintArray[idx18].valid = kcg_true;
      outC->_L1.nvkvintsetArray[idx19].nvkintArray[idx18].v_nvkvint =
        kcg_lit_int64(0);
      outC->_L1.nvkvintsetArray[idx19].nvkintArray[idx18].m_nvkvint12 =
        kcg_lit_float64(0.0);
      outC->_L1.nvkvintsetArray[idx19].nvkintArray[idx18].m_nvkvint23 =
        kcg_lit_float64(0.0);
    }
  }
  for (idx20 = 0; idx20 < 7; idx20++) {
    outC->_L1.nvkrintArray[idx20].valid = kcg_true;
    outC->_L1.nvkrintArray[idx20].l_nvkrint = L_NVKRINT_0m;
    outC->_L1.nvkrintArray[idx20].m_nvkrint = kcg_lit_float64(0.0);
  }
  outC->_L1.m_nvktint = kcg_lit_float64(0.0);
  outC->_L2 = kcg_lit_float64(0.0);
  outC->_L3.valid = kcg_true;
  outC->_L3.acknowledgedByDriver = kcg_true;
  outC->_L3.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L3.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L3.trainLength = kcg_lit_int64(0);
  outC->_L3.brakePerctage = kcg_lit_int64(0);
  outC->_L3.maxTrainSpeed = kcg_lit_int64(0);
  outC->_L3.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L3.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L3.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L3.axleNumber = kcg_lit_int64(0);
  outC->_L3.numberNationalSystems = kcg_lit_int64(0);
  for (idx21 = 0; idx21 < 5; idx21++) {
    outC->_L3.nationSystems[idx21] = kcg_lit_int64(0);
  }
  outC->_L3.numberTractionSystems = kcg_lit_int64(0);
  for (idx22 = 0; idx22 < 4; idx22++) {
    outC->_L3.tractionSystem[idx22].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L3.tractionSystem[idx22].nid_ctraction = kcg_lit_int64(0);
  }
  outC->_L4 =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  for (idx23 = 0; idx23 < 100; idx23++) {
    outC->A_brake_safe_reduced.distance_definition[idx23] = kcg_lit_float64(0.0);
  }
  for (idx24 = 0; idx24 < 14; idx24++) {
    outC->A_brake_safe_reduced.speed_definition[idx24] = kcg_lit_float64(0.0);
  }
  for (idx26 = 0; idx26 < 14; idx26++) {
    for (idx25 = 0; idx25 < 100; idx25++) {
      outC->A_brake_safe_reduced.data[idx26][idx25] = kcg_lit_float64(0.0);
    }
  }
  /* _L24=(SDM_Types_Pkg::TransformA_realToA_int#1)/ */
  TransformA_realToA_int_init_SDM_Types_Pkg(
    &outC->Context_TransformA_realToA_int_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void LimitToReducedAdhesion_reset_SDMModelPkg(
  outC_LimitToReducedAdhesion_SDMModelPkg *outC)
{
  /* _L24=(SDM_Types_Pkg::TransformA_realToA_int#1)/ */
  TransformA_realToA_int_reset_SDM_Types_Pkg(
    &outC->Context_TransformA_realToA_int_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** LimitToReducedAdhesion_SDMModelPkg.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

