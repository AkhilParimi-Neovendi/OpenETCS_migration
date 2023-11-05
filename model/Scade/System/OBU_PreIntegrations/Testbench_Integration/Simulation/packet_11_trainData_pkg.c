/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "packet_11_trainData_pkg.h"

/* trainData_pkg::packet_11/ */
void packet_11_trainData_pkg(
  /* trainData/ */
  trainData_T_TIU_Types_Pkg *trainData,
  outC_packet_11_trainData_pkg *outC)
{
  kcg_copy_trainData_T_TIU_Types_Pkg(&outC->_L15, trainData);
  outC->_L19 = outC->_L15.maxTrainSpeed;
  /* _L61=(RadioSupport_Pkg::vIntern2Extern#1)/ */
  vIntern2Extern_RadioSupport_Pkg(outC->_L19, &outC->Context_vIntern2Extern_1);
  outC->_L61 = outC->Context_vIntern2Extern_1.v_SRS;
  outC->_L60 = kcg_lit_int32(100);
  outC->_L18 = outC->_L15.trainLength;
  outC->_L59 = outC->_L18 / outC->_L60;
  outC->_L58 = cp011_ValidatedTrainData_ids;
  outC->_L57 = kcg_lit_int32(0);
  outC->_L49 = kcg_lit_int32(1);
  outC->_L26 = outC->_L15.numberNationalSystems;
  outC->_L50 = outC->_L26 - outC->_L49;
  outC->_L44 = kcg_lit_int32(1);
  outC->_L42 = outC->_L15.numberTractionSystems;
  outC->_L43 = outC->_L42 - outC->_L44;
  outC->_L41 = outC->_L15.trainCategory;
  outC->_L40 = outC->_L15.cantDeficientcy;
  kcg_copy_aNID_NTC_T_Packet_TrainTypes_Pkg(
    &outC->_L27,
    &outC->_L15.nationSystems);
  outC->_L14 = kcg_true;
  outC->_L20 = outC->_L15.loadingGauge;
  outC->_L21 = outC->_L15.axleLoadCategory;
  outC->_L22 = outC->_L15.airtightSystem;
  outC->_L23 = outC->_L15.axleNumber;
  kcg_copy_aTractionIdentity_T_Packet_TrainTypes_Pkg(
    &outC->_L25,
    &outC->_L15.tractionSystem);
  outC->_L12.valid = outC->_L14;
  outC->_L12.nid_packet = outC->_L58;
  outC->_L12.l_packet = outC->_L57;
  outC->_L12.nc_cdtrain = outC->_L40;
  outC->_L12.nc_train = outC->_L41;
  outC->_L12.l_train = outC->_L59;
  outC->_L12.v_maxtrain = outC->_L61;
  outC->_L12.m_loadinggauge = outC->_L20;
  outC->_L12.m_axleloadcat = outC->_L21;
  outC->_L12.m_airtight = outC->_L22;
  outC->_L12.n_axle = outC->_L23;
  outC->_L12.n_iter_voltage = outC->_L43;
  kcg_copy_P011_voltage_list_TM_TrainToTrack(
    &outC->_L12.voltage_list,
    &outC->_L25);
  outC->_L12.n_iter_nid_ntc = outC->_L50;
  kcg_copy_P011_ntc_list_TM_TrainToTrack(&outC->_L12.nid_ntc_list, &outC->_L27);
  kcg_copy_P011_TM_TrainToTrack(&outC->p11, &outC->_L12);
}

#ifndef KCG_USER_DEFINED_INIT
void packet_11_init_trainData_pkg(outC_packet_11_trainData_pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;

  outC->_L61 = kcg_lit_int32(0);
  outC->_L60 = kcg_lit_int32(0);
  outC->_L59 = kcg_lit_int32(0);
  outC->_L58 = kcg_lit_int32(0);
  outC->_L57 = kcg_lit_int32(0);
  outC->_L49 = kcg_lit_int32(0);
  outC->_L50 = kcg_lit_int32(0);
  outC->_L44 = kcg_lit_int32(0);
  outC->_L43 = kcg_lit_int32(0);
  outC->_L42 = kcg_lit_int32(0);
  outC->_L41 =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L40 = NC_CDTRAIN_Cant_Deficiency_80_mm;
  for (idx = 0; idx < 5; idx++) {
    outC->_L27[idx] = kcg_lit_int32(0);
  }
  outC->_L26 = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 4; idx1++) {
    outC->_L25[idx1].m_voltage = M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L25[idx1].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L23 = kcg_lit_int32(0);
  outC->_L22 = M_AIRTIGHT_Not_fitted;
  outC->_L21 = M_AXLELOADCAT_A;
  outC->_L20 =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L19 = kcg_lit_int32(0);
  outC->_L18 = kcg_lit_int32(0);
  outC->_L15.valid = kcg_true;
  outC->_L15.acknowledgedByDriver = kcg_true;
  outC->_L15.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L15.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L15.trainLength = kcg_lit_int32(0);
  outC->_L15.brakePerctage = kcg_lit_int32(0);
  outC->_L15.maxTrainSpeed = kcg_lit_int32(0);
  outC->_L15.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L15.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L15.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L15.axleNumber = kcg_lit_int32(0);
  outC->_L15.numberNationalSystems = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 5; idx2++) {
    outC->_L15.nationSystems[idx2] = kcg_lit_int32(0);
  }
  outC->_L15.numberTractionSystems = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 4; idx3++) {
    outC->_L15.tractionSystem[idx3].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L15.tractionSystem[idx3].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L14 = kcg_true;
  outC->_L12.valid = kcg_true;
  outC->_L12.nid_packet = kcg_lit_int32(0);
  outC->_L12.l_packet = kcg_lit_int32(0);
  outC->_L12.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L12.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L12.l_train = kcg_lit_int32(0);
  outC->_L12.v_maxtrain = kcg_lit_int32(0);
  outC->_L12.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L12.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L12.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L12.n_axle = kcg_lit_int32(0);
  outC->_L12.n_iter_voltage = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 4; idx4++) {
    outC->_L12.voltage_list[idx4].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L12.voltage_list[idx4].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L12.n_iter_nid_ntc = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 5; idx5++) {
    outC->_L12.nid_ntc_list[idx5] = kcg_lit_int32(0);
  }
  outC->p11.valid = kcg_true;
  outC->p11.nid_packet = kcg_lit_int32(0);
  outC->p11.l_packet = kcg_lit_int32(0);
  outC->p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->p11.l_train = kcg_lit_int32(0);
  outC->p11.v_maxtrain = kcg_lit_int32(0);
  outC->p11.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->p11.n_axle = kcg_lit_int32(0);
  outC->p11.n_iter_voltage = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 4; idx6++) {
    outC->p11.voltage_list[idx6].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->p11.voltage_list[idx6].nid_ctraction = kcg_lit_int32(0);
  }
  outC->p11.n_iter_nid_ntc = kcg_lit_int32(0);
  for (idx7 = 0; idx7 < 5; idx7++) {
    outC->p11.nid_ntc_list[idx7] = kcg_lit_int32(0);
  }
  /* _L61=(RadioSupport_Pkg::vIntern2Extern#1)/ */
  vIntern2Extern_init_RadioSupport_Pkg(&outC->Context_vIntern2Extern_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void packet_11_reset_trainData_pkg(outC_packet_11_trainData_pkg *outC)
{
  /* _L61=(RadioSupport_Pkg::vIntern2Extern#1)/ */
  vIntern2Extern_reset_RadioSupport_Pkg(&outC->Context_vIntern2Extern_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** packet_11_trainData_pkg.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

