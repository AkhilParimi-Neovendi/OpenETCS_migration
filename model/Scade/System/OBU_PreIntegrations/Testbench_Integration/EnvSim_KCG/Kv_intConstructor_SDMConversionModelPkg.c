/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Kv_intConstructor_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::Kv_intConstructor/ */
void Kv_intConstructor_SDMConversionModelPkg(
  /* trainData/ */
  trainData_T_TIU_Types_Pkg *trainData,
  /* NationalValues/ */
  P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* A_ebmax/ */
  A_internal_Type_Obu_BasicTypes_Pkg A_ebmax,
  /* A_brake_em/ */
  av_Map_t_SDMConversionModelPkg *A_brake_em,
  outC_Kv_intConstructor_SDMConversionModelPkg *outC)
{
  static kcg_size idx;
  static kcg_bool acc;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_bool noname;
  static kcg_int32 _7_noname;

  outC->_L70 = Q_NVKINT_Integrated_correction_factors_follow;
  kcg_copy_P3_NationalValues_T_Packet_Types_Pkg(&outC->_L4, NationalValues);
  outC->_L68 = outC->_L4.q_nvkint;
  outC->_L67 = outC->_L70 == outC->_L68;
  kcg_copy_nvkvintset_T_Packet_Types_Pkg(
    &outC->_L27,
    (nvkvintset_T_Packet_Types_Pkg *) &cEmptyKvIntSet_SDMConversionModelPkg);
  outC->_L16 = kcg_lit_int32(1);
  outC->_L32 = kcg_false;
  kcg_copy_nvkvintsetArray_T_Packet_Types_Pkg(
    &outC->_L6,
    &outC->_L4.nvkvintsetArray);
  kcg_copy_trainData_T_TIU_Types_Pkg(&outC->_L33, trainData);
  outC->_L34 = outC->_L33.trainCategory;
  /* _L35/ */
  for (idx = 0; idx < 7; idx++) {
    outC->_L35[idx] = outC->_L34;
  }
  outC->_L12 = outC->_L32;
  /* _L10= */
  if (outC->_L67) {
    /* _L10= */
    for (idx1 = 0; idx1 < 7; idx1++) {
      acc = outC->_L12;
      /* _L10=(SDMConversionModelPkg::Kv_intSetIterator#1)/ */
      Kv_intSetIterator_SDMConversionModelPkg(
        acc,
        &outC->_L6[idx1],
        outC->_L35[idx1],
        &outC->Context_Kv_intSetIterator_1[idx1]);
      outC->_L12 = outC->Context_Kv_intSetIterator_1[idx1].akku_out;
      outC->_L10 = /* _L10= */(kcg_int32) (idx1 + 1);
      /* _L10= */
      if (!outC->Context_Kv_intSetIterator_1[idx1].goOn) {
        break;
      }
    }
  }
  else {
    outC->_L10 = kcg_lit_int32(0);
  }
  outC->_L15 = outC->_L10 - outC->_L16;
  if ((kcg_lit_int32(0) <= outC->_L15) & (outC->_L15 < kcg_lit_int32(7))) {
    kcg_copy_nvkvintset_T_Packet_Types_Pkg(&outC->_L14, &outC->_L6[outC->_L15]);
  }
  else {
    kcg_copy_nvkvintset_T_Packet_Types_Pkg(&outC->_L14, &outC->_L27);
  }
  kcg_copy_nvkvintArray_T_Packet_Types_Pkg(&outC->_L43, &outC->_L14.nvkintArray);
  outC->_L9 = A_ebmax;
  /* _L44/ */
  for (idx2 = 0; idx2 < 7; idx2++) {
    outC->_L44[idx2] = outC->_L9;
  }
  outC->_L48 = outC->_L14.a_nvp12;
  /* _L57=(SDM_Types_Pkg::TransformA_realToA_int#1)/ */
  TransformA_realToA_int_SDM_Types_Pkg(
    outC->_L48,
    &outC->Context_TransformA_realToA_int_1);
  outC->_L57 = outC->Context_TransformA_realToA_int_1.acc_int;
  /* _L45/ */
  for (idx3 = 0; idx3 < 7; idx3++) {
    outC->_L45[idx3] = outC->_L57;
  }
  outC->_L49 = outC->_L14.a_nvp23;
  /* _L58=(SDM_Types_Pkg::TransformA_realToA_int#2)/ */
  TransformA_realToA_int_SDM_Types_Pkg(
    outC->_L49,
    &outC->Context_TransformA_realToA_int_2);
  outC->_L58 = outC->Context_TransformA_realToA_int_2.acc_int;
  /* _L46/ */
  for (idx4 = 0; idx4 < 7; idx4++) {
    outC->_L46[idx4] = outC->_L58;
  }
  outC->_L52 = Q_NVKVINTSET_Conventional_passenger_trains;
  outC->_L50 = outC->_L14.q_nvkvintset;
  outC->_L51 = outC->_L50 == outC->_L52;
  /* _L47/ */
  for (idx5 = 0; idx5 < 7; idx5++) {
    outC->_L47[idx5] = outC->_L51;
  }
  outC->_L55 = kcg_lit_int32(100);
  outC->_L56 = kcg_lit_int32(0);
  outC->_L42 = outC->_L14.valid;
  /* _L39= */
  if (outC->_L42) {
    /* _L39= */
    for (idx6 = 0; idx6 < 7; idx6++) {
      /* _L39=(SDMConversionModelPkg::Kv_intIterator#1)/ */
      Kv_intIterator_SDMConversionModelPkg(
        &outC->_L43[idx6],
        outC->_L44[idx6],
        outC->_L45[idx6],
        outC->_L46[idx6],
        outC->_L47[idx6],
        &outC->Context_Kv_intIterator_1[idx6]);
      outC->_L41[idx6] = outC->Context_Kv_intIterator_1[idx6].m;
      outC->_L38[idx6] = outC->Context_Kv_intIterator_1[idx6].v;
      outC->_L39 = /* _L39= */(kcg_int32) (idx6 + 1);
      /* _L39= */
      if (!outC->Context_Kv_intIterator_1[idx6].goOn) {
        break;
      }
    }
  }
  else {
    outC->_L39 = kcg_lit_int32(0);
  }
#ifdef KCG_MAPW_CPY

  /* _L39= */
  for (idx6 = /* _L39= */(kcg_size) outC->_L39; idx6 < 7; idx6++) {
    outC->_L41[idx6] = outC->_L55;
    outC->_L38[idx6] = outC->_L56;
  }
#endif /* KCG_MAPW_CPY */

  kcg_copy_m_KvSteps_t_SDMConversionModelPkg(&outC->_L66.m, &outC->_L41);
  kcg_copy_v_KvSteps_t_SDMConversionModelPkg(&outC->_L66.v, &outC->_L38);
  kcg_copy_av_Map_t_SDMConversionModelPkg(&outC->_L36, A_brake_em);
  /* _L59=(SDMConversionModelPkg::Kv_intVectorMapper#1)/ */
  Kv_intVectorMapper_SDMConversionModelPkg(
    &outC->_L66,
    &outC->_L36,
    &outC->Context_Kv_intVectorMapper_1);
  kcg_copy_av_MergedMap_t_SDMConversionModelPkg(
    &outC->_L59,
    &outC->Context_Kv_intVectorMapper_1.A_brake_safe);
  _7_noname = outC->_L39;
  kcg_copy_av_MergedMap_t_SDMConversionModelPkg(&outC->A_brake_safe, &outC->_L59);
  noname = outC->_L12;
}

#ifndef KCG_USER_DEFINED_INIT
void Kv_intConstructor_init_SDMConversionModelPkg(
  outC_Kv_intConstructor_SDMConversionModelPkg *outC)
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

  outC->_L67 = kcg_true;
  outC->_L68 = Q_NVKINT_No_integrated_correction_factors_follow;
  outC->_L70 = Q_NVKINT_No_integrated_correction_factors_follow;
  for (idx2 = 0; idx2 < 7; idx2++) {
    outC->_L66.m[idx2] = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 7; idx3++) {
    outC->_L66.v[idx3] = kcg_lit_int32(0);
  }
  for (idx4 = 0; idx4 < 13; idx4++) {
    outC->_L59.a[idx4] = kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 13; idx5++) {
    outC->_L59.v[idx5] = kcg_lit_int32(0);
  }
  outC->_L58 = kcg_lit_int32(0);
  outC->_L57 = kcg_lit_int32(0);
  outC->_L56 = kcg_lit_int32(0);
  outC->_L55 = kcg_lit_int32(0);
  outC->_L52 = Q_NVKVINTSET_Freight_trains;
  outC->_L51 = kcg_true;
  outC->_L50 = Q_NVKVINTSET_Freight_trains;
  outC->_L49 = kcg_lit_float32(0.0);
  outC->_L48 = kcg_lit_float32(0.0);
  for (idx6 = 0; idx6 < 7; idx6++) {
    outC->_L47[idx6] = kcg_true;
  }
  for (idx7 = 0; idx7 < 7; idx7++) {
    outC->_L46[idx7] = kcg_lit_int32(0);
  }
  for (idx8 = 0; idx8 < 7; idx8++) {
    outC->_L45[idx8] = kcg_lit_int32(0);
  }
  for (idx9 = 0; idx9 < 7; idx9++) {
    outC->_L44[idx9] = kcg_lit_int32(0);
  }
  for (idx10 = 0; idx10 < 7; idx10++) {
    outC->_L43[idx10].valid = kcg_true;
    outC->_L43[idx10].v_nvkvint = kcg_lit_int32(0);
    outC->_L43[idx10].m_nvkvint12 = kcg_lit_float32(0.0);
    outC->_L43[idx10].m_nvkvint23 = kcg_lit_float32(0.0);
  }
  outC->_L42 = kcg_true;
  for (idx11 = 0; idx11 < 7; idx11++) {
    outC->_L41[idx11] = kcg_lit_int32(0);
  }
  outC->_L39 = kcg_lit_int32(0);
  for (idx12 = 0; idx12 < 7; idx12++) {
    outC->_L38[idx12] = kcg_lit_int32(0);
  }
  for (idx13 = 0; idx13 < 6; idx13++) {
    outC->_L36.a[idx13] = kcg_lit_int32(0);
  }
  for (idx14 = 0; idx14 < 6; idx14++) {
    outC->_L36.v[idx14] = kcg_lit_int32(0);
  }
  for (idx15 = 0; idx15 < 7; idx15++) {
    outC->_L35[idx15] =
      NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  }
  outC->_L33.valid = kcg_true;
  outC->_L33.acknowledgedByDriver = kcg_true;
  outC->_L33.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L33.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L33.trainLength = kcg_lit_int32(0);
  outC->_L33.brakePerctage = kcg_lit_int32(0);
  outC->_L33.maxTrainSpeed = kcg_lit_int32(0);
  outC->_L33.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L33.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L33.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L33.axleNumber = kcg_lit_int32(0);
  outC->_L33.numberNationalSystems = kcg_lit_int32(0);
  for (idx16 = 0; idx16 < 5; idx16++) {
    outC->_L33.nationSystems[idx16] = kcg_lit_int32(0);
  }
  outC->_L33.numberTractionSystems = kcg_lit_int32(0);
  for (idx17 = 0; idx17 < 4; idx17++) {
    outC->_L33.tractionSystem[idx17].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L33.tractionSystem[idx17].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L34 =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L32 = kcg_true;
  outC->_L27.valid = kcg_true;
  outC->_L27.q_nvkvintset = Q_NVKVINTSET_Freight_trains;
  outC->_L27.a_nvp12 = kcg_lit_float32(0.0);
  outC->_L27.a_nvp23 = kcg_lit_float32(0.0);
  for (idx18 = 0; idx18 < 7; idx18++) {
    outC->_L27.nvkintArray[idx18].valid = kcg_true;
    outC->_L27.nvkintArray[idx18].v_nvkvint = kcg_lit_int32(0);
    outC->_L27.nvkintArray[idx18].m_nvkvint12 = kcg_lit_float32(0.0);
    outC->_L27.nvkintArray[idx18].m_nvkvint23 = kcg_lit_float32(0.0);
  }
  outC->_L16 = kcg_lit_int32(0);
  outC->_L15 = kcg_lit_int32(0);
  outC->_L14.valid = kcg_true;
  outC->_L14.q_nvkvintset = Q_NVKVINTSET_Freight_trains;
  outC->_L14.a_nvp12 = kcg_lit_float32(0.0);
  outC->_L14.a_nvp23 = kcg_lit_float32(0.0);
  for (idx19 = 0; idx19 < 7; idx19++) {
    outC->_L14.nvkintArray[idx19].valid = kcg_true;
    outC->_L14.nvkintArray[idx19].v_nvkvint = kcg_lit_int32(0);
    outC->_L14.nvkintArray[idx19].m_nvkvint12 = kcg_lit_float32(0.0);
    outC->_L14.nvkintArray[idx19].m_nvkvint23 = kcg_lit_float32(0.0);
  }
  outC->_L12 = kcg_true;
  outC->_L10 = kcg_lit_int32(0);
  outC->_L9 = kcg_lit_int32(0);
  outC->_L4.valid = kcg_true;
  outC->_L4.q_dir = Q_DIR_Reverse;
  outC->_L4.d_validnv = kcg_lit_int32(0);
  for (idx20 = 0; idx20 < 7; idx20++) {
    outC->_L4.nid_cArray[idx20].valid = kcg_true;
    outC->_L4.nid_cArray[idx20].nid_c = kcg_lit_int32(0);
  }
  outC->_L4.v_nvshunt = kcg_lit_int32(0);
  outC->_L4.v_nvstff = kcg_lit_int32(0);
  outC->_L4.v_nvonsight = kcg_lit_int32(0);
  outC->_L4.v_nvlimsuperv = kcg_lit_int32(0);
  outC->_L4.v_nvunfit = kcg_lit_int32(0);
  outC->_L4.v_nvrel = kcg_lit_int32(0);
  outC->_L4.d_nvroll = kcg_lit_int32(0);
  outC->_L4.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->_L4.q_nvemrrls = Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->_L4.q_nvguiperm = Q_NVGUIPERM_No;
  outC->_L4.q_nvsbfbperm = Q_NVSBFBPERM_No;
  outC->_L4.q_nvinhsmicperm = Q_NVINHSMICPERM_No;
  outC->_L4.v_nvallowovtrp = kcg_lit_int32(0);
  outC->_L4.v_nvsupovtrp = kcg_lit_int32(0);
  outC->_L4.d_nvovtrp = kcg_lit_int32(0);
  outC->_L4.t_nvovtrp = kcg_lit_int32(0);
  outC->_L4.d_nvpotrp = kcg_lit_int32(0);
  outC->_L4.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->_L4.t_nvcontact = kcg_lit_int32(0);
  outC->_L4.m_nvderun = M_NVDERUN_No;
  outC->_L4.d_nvstff = kcg_lit_int32(0);
  outC->_L4.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  outC->_L4.a_nvmaxredadh1 = kcg_lit_float32(0.0);
  outC->_L4.a_nvmaxredadh2 = kcg_lit_float32(0.0);
  outC->_L4.a_nvmaxredadh3 = kcg_lit_float32(0.0);
  outC->_L4.q_nvlocacc = kcg_lit_int32(0);
  outC->_L4.m_nvavadh = kcg_lit_float32(0.0);
  outC->_L4.m_nvebcl = M_NVEBCL_Confidence_level_50;
  outC->_L4.q_nvkint = Q_NVKINT_No_integrated_correction_factors_follow;
  for (idx22 = 0; idx22 < 7; idx22++) {
    outC->_L4.nvkvintsetArray[idx22].valid = kcg_true;
    outC->_L4.nvkvintsetArray[idx22].q_nvkvintset = Q_NVKVINTSET_Freight_trains;
    outC->_L4.nvkvintsetArray[idx22].a_nvp12 = kcg_lit_float32(0.0);
    outC->_L4.nvkvintsetArray[idx22].a_nvp23 = kcg_lit_float32(0.0);
    for (idx21 = 0; idx21 < 7; idx21++) {
      outC->_L4.nvkvintsetArray[idx22].nvkintArray[idx21].valid = kcg_true;
      outC->_L4.nvkvintsetArray[idx22].nvkintArray[idx21].v_nvkvint =
        kcg_lit_int32(0);
      outC->_L4.nvkvintsetArray[idx22].nvkintArray[idx21].m_nvkvint12 =
        kcg_lit_float32(0.0);
      outC->_L4.nvkvintsetArray[idx22].nvkintArray[idx21].m_nvkvint23 =
        kcg_lit_float32(0.0);
    }
  }
  for (idx23 = 0; idx23 < 7; idx23++) {
    outC->_L4.nvkrintArray[idx23].valid = kcg_true;
    outC->_L4.nvkrintArray[idx23].l_nvkrint = L_NVKRINT_0m;
    outC->_L4.nvkrintArray[idx23].m_nvkrint = kcg_lit_float32(0.0);
  }
  outC->_L4.m_nvktint = kcg_lit_float32(0.0);
  for (idx25 = 0; idx25 < 7; idx25++) {
    outC->_L6[idx25].valid = kcg_true;
    outC->_L6[idx25].q_nvkvintset = Q_NVKVINTSET_Freight_trains;
    outC->_L6[idx25].a_nvp12 = kcg_lit_float32(0.0);
    outC->_L6[idx25].a_nvp23 = kcg_lit_float32(0.0);
    for (idx24 = 0; idx24 < 7; idx24++) {
      outC->_L6[idx25].nvkintArray[idx24].valid = kcg_true;
      outC->_L6[idx25].nvkintArray[idx24].v_nvkvint = kcg_lit_int32(0);
      outC->_L6[idx25].nvkintArray[idx24].m_nvkvint12 = kcg_lit_float32(0.0);
      outC->_L6[idx25].nvkintArray[idx24].m_nvkvint23 = kcg_lit_float32(0.0);
    }
  }
  for (idx26 = 0; idx26 < 13; idx26++) {
    outC->A_brake_safe.a[idx26] = kcg_lit_int32(0);
  }
  for (idx27 = 0; idx27 < 13; idx27++) {
    outC->A_brake_safe.v[idx27] = kcg_lit_int32(0);
  }
  /* _L59=(SDMConversionModelPkg::Kv_intVectorMapper#1)/ */
  Kv_intVectorMapper_init_SDMConversionModelPkg(
    &outC->Context_Kv_intVectorMapper_1);
  for (idx1 = 0; idx1 < 7; idx1++) {
    /* _L39=(SDMConversionModelPkg::Kv_intIterator#1)/ */
    Kv_intIterator_init_SDMConversionModelPkg(
      &outC->Context_Kv_intIterator_1[idx1]);
  }
  /* _L58=(SDM_Types_Pkg::TransformA_realToA_int#2)/ */
  TransformA_realToA_int_init_SDM_Types_Pkg(
    &outC->Context_TransformA_realToA_int_2);
  /* _L57=(SDM_Types_Pkg::TransformA_realToA_int#1)/ */
  TransformA_realToA_int_init_SDM_Types_Pkg(
    &outC->Context_TransformA_realToA_int_1);
  for (idx = 0; idx < 7; idx++) {
    /* _L10=(SDMConversionModelPkg::Kv_intSetIterator#1)/ */
    Kv_intSetIterator_init_SDMConversionModelPkg(
      &outC->Context_Kv_intSetIterator_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Kv_intConstructor_reset_SDMConversionModelPkg(
  outC_Kv_intConstructor_SDMConversionModelPkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  /* _L59=(SDMConversionModelPkg::Kv_intVectorMapper#1)/ */
  Kv_intVectorMapper_reset_SDMConversionModelPkg(
    &outC->Context_Kv_intVectorMapper_1);
  for (idx1 = 0; idx1 < 7; idx1++) {
    /* _L39=(SDMConversionModelPkg::Kv_intIterator#1)/ */
    Kv_intIterator_reset_SDMConversionModelPkg(
      &outC->Context_Kv_intIterator_1[idx1]);
  }
  /* _L58=(SDM_Types_Pkg::TransformA_realToA_int#2)/ */
  TransformA_realToA_int_reset_SDM_Types_Pkg(
    &outC->Context_TransformA_realToA_int_2);
  /* _L57=(SDM_Types_Pkg::TransformA_realToA_int#1)/ */
  TransformA_realToA_int_reset_SDM_Types_Pkg(
    &outC->Context_TransformA_realToA_int_1);
  for (idx = 0; idx < 7; idx++) {
    /* _L10=(SDMConversionModelPkg::Kv_intSetIterator#1)/ */
    Kv_intSetIterator_reset_SDMConversionModelPkg(
      &outC->Context_Kv_intSetIterator_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Kv_intConstructor_SDMConversionModelPkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

