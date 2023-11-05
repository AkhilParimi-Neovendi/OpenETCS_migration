/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Kr_intLookUp_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::Kr_intLookUp/ */
void Kr_intLookUp_SDMConversionModelPkg(
  /* NationalValues/ */
  P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* trainData/ */
  trainData_T_TIU_Types_Pkg *trainData,
  outC_Kr_intLookUp_SDMConversionModelPkg *outC)
{
  static kcg_size idx;
  static kcg_int32 acc;
  static kcg_size idx1;
  static kcg_int32 noname;

  outC->_L9 = kcg_lit_int32(100);
  kcg_copy_P3_NationalValues_T_Packet_Types_Pkg(&outC->_L2, NationalValues);
  kcg_copy_nvkrintArray_T_Packet_Types_Pkg(&outC->_L1, &outC->_L2.nvkrintArray);
  kcg_copy_trainData_T_TIU_Types_Pkg(&outC->_L5, trainData);
  outC->_L4 = outC->_L5.trainLength;
  /* _L11/ */
  for (idx = 0; idx < 7; idx++) {
    outC->_L11[idx] = outC->_L4;
  }
  outC->_L10 = kcg_true;
  outC->_L6 = outC->_L9;
  /* _L8= */
  if (outC->_L10) {
    /* _L8= */
    for (idx1 = 0; idx1 < 7; idx1++) {
      acc = outC->_L6;
      /* _L8=(SDMConversionModelPkg::Kr_intIterator#1)/ */
      Kr_intIterator_SDMConversionModelPkg(
        acc,
        &outC->_L1[idx1],
        outC->_L11[idx1],
        &outC->Context_Kr_intIterator_1[idx1]);
      outC->_L6 = outC->Context_Kr_intIterator_1[idx1].m_now;
      outC->_L8 = /* _L8= */(kcg_int32) (idx1 + 1);
      /* _L8= */
      if (!outC->Context_Kr_intIterator_1[idx1].goOn) {
        break;
      }
    }
  }
  else {
    outC->_L8 = kcg_lit_int32(0);
  }
  outC->m_KrInt = outC->_L6;
  noname = outC->_L8;
}

#ifndef KCG_USER_DEFINED_INIT
void Kr_intLookUp_init_SDMConversionModelPkg(
  outC_Kr_intLookUp_SDMConversionModelPkg *outC)
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

  for (idx1 = 0; idx1 < 7; idx1++) {
    outC->_L11[idx1] = kcg_lit_int32(0);
  }
  outC->_L10 = kcg_true;
  outC->_L9 = kcg_lit_int32(0);
  outC->_L8 = kcg_lit_int32(0);
  outC->_L6 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->_L5.valid = kcg_true;
  outC->_L5.acknowledgedByDriver = kcg_true;
  outC->_L5.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L5.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L5.trainLength = kcg_lit_int32(0);
  outC->_L5.brakePerctage = kcg_lit_int32(0);
  outC->_L5.maxTrainSpeed = kcg_lit_int32(0);
  outC->_L5.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L5.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L5.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L5.axleNumber = kcg_lit_int32(0);
  outC->_L5.numberNationalSystems = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 5; idx2++) {
    outC->_L5.nationSystems[idx2] = kcg_lit_int32(0);
  }
  outC->_L5.numberTractionSystems = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 4; idx3++) {
    outC->_L5.tractionSystem[idx3].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L5.tractionSystem[idx3].nid_ctraction = kcg_lit_int32(0);
  }
  for (idx4 = 0; idx4 < 7; idx4++) {
    outC->_L1[idx4].valid = kcg_true;
    outC->_L1[idx4].l_nvkrint = L_NVKRINT_0m;
    outC->_L1[idx4].m_nvkrint = kcg_lit_float32(0.0);
  }
  outC->_L2.valid = kcg_true;
  outC->_L2.q_dir = Q_DIR_Reverse;
  outC->_L2.d_validnv = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 7; idx5++) {
    outC->_L2.nid_cArray[idx5].valid = kcg_true;
    outC->_L2.nid_cArray[idx5].nid_c = kcg_lit_int32(0);
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
  for (idx7 = 0; idx7 < 7; idx7++) {
    outC->_L2.nvkvintsetArray[idx7].valid = kcg_true;
    outC->_L2.nvkvintsetArray[idx7].q_nvkvintset = Q_NVKVINTSET_Freight_trains;
    outC->_L2.nvkvintsetArray[idx7].a_nvp12 = kcg_lit_float32(0.0);
    outC->_L2.nvkvintsetArray[idx7].a_nvp23 = kcg_lit_float32(0.0);
    for (idx6 = 0; idx6 < 7; idx6++) {
      outC->_L2.nvkvintsetArray[idx7].nvkintArray[idx6].valid = kcg_true;
      outC->_L2.nvkvintsetArray[idx7].nvkintArray[idx6].v_nvkvint = kcg_lit_int32(0);
      outC->_L2.nvkvintsetArray[idx7].nvkintArray[idx6].m_nvkvint12 =
        kcg_lit_float32(0.0);
      outC->_L2.nvkvintsetArray[idx7].nvkintArray[idx6].m_nvkvint23 =
        kcg_lit_float32(0.0);
    }
  }
  for (idx8 = 0; idx8 < 7; idx8++) {
    outC->_L2.nvkrintArray[idx8].valid = kcg_true;
    outC->_L2.nvkrintArray[idx8].l_nvkrint = L_NVKRINT_0m;
    outC->_L2.nvkrintArray[idx8].m_nvkrint = kcg_lit_float32(0.0);
  }
  outC->_L2.m_nvktint = kcg_lit_float32(0.0);
  outC->m_KrInt = kcg_lit_int32(0);
  for (idx = 0; idx < 7; idx++) {
    /* _L8=(SDMConversionModelPkg::Kr_intIterator#1)/ */
    Kr_intIterator_init_SDMConversionModelPkg(
      &outC->Context_Kr_intIterator_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Kr_intLookUp_reset_SDMConversionModelPkg(
  outC_Kr_intLookUp_SDMConversionModelPkg *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 7; idx++) {
    /* _L8=(SDMConversionModelPkg::Kr_intIterator#1)/ */
    Kr_intIterator_reset_SDMConversionModelPkg(
      &outC->Context_Kr_intIterator_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Kr_intLookUp_SDMConversionModelPkg.c
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

