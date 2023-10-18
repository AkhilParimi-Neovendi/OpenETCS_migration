/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P011_train_compr_TM_TrainToTrack.h"

/* TM_TrainToTrack::C_P011_train_compr/ */
void C_P011_train_compr_TM_TrainToTrack(
  /* P011_in/ */
  P011_TM_TrainToTrack *P011_in,
  outC_C_P011_train_compr_TM_TrainToTrack *outC)
{
  static kcg_size idx;
  static kcg_bool noname;

  kcg_copy_P011_TM_TrainToTrack(&outC->_L1, P011_in);
  kcg_copy_P011_ntc_list_TM_TrainToTrack(&outC->_L89, &outC->_L1.nid_ntc_list);
  /* _L114=(TM_TrainToTrack_lib_internal::C_P011_flatten_sections_ntc#1)/ */
  C_P011_flatten_sections_ntc_TM_TrainToTrack_lib_internal(
    &outC->_L89,
    &outC->Context_C_P011_flatten_sections_ntc_1);
  kcg_copy_P011_ntc_list_array_T_TM_TrainToTrack(
    &outC->_L114,
    &outC->Context_C_P011_flatten_sections_ntc_1.Flattened);
  kcg_copy_P011_voltage_list_TM_TrainToTrack(
    &outC->_L91,
    &outC->_L1.voltage_list);
  /* _L113=(TM_TrainToTrack_lib_internal::C_P011_flatten_sections_voltage#1)/ */
  C_P011_flatten_sections_voltage_TM_TrainToTrack_lib_internal(
    &outC->_L91,
    &outC->Context_C_P011_flatten_sections_voltage_1);
  kcg_copy_P011_voltage_sections_array_flat_t_TM_TrainToTrack(
    &outC->_L113,
    &outC->Context_C_P011_flatten_sections_voltage_1.Flattened);
  outC->_L90 = outC->_L1.n_iter_nid_ntc;
  /* _L108=(TM_conversions::CAST_N_ITER_to_int#2)/ */
  CAST_N_ITER_to_int_TM_conversions(
    outC->_L90,
    &outC->Context_CAST_N_ITER_to_int_2);
  outC->_L108 = outC->Context_CAST_N_ITER_to_int_2.n_iter_int;
  /* _L109/ */
  for (idx = 0; idx < 1; idx++) {
    outC->_L109[idx] = outC->_L108;
  }
  kcg_copy_P011_voltage_sections_array_flat_t_TM_TrainToTrack(
    &outC->_L111[0],
    &outC->_L113);
  outC->_L111[8] = outC->_L109[0];
  outC->_L3 = outC->_L1.nid_packet;
  /* _L69=(TM_conversions::CAST_NID_PACKET_to_int#1)/ */
  CAST_NID_PACKET_to_int_TM_conversions(
    outC->_L3,
    &outC->Context_CAST_NID_PACKET_to_int_1);
  outC->_L69 = outC->Context_CAST_NID_PACKET_to_int_1.nid_packet_int;
  outC->_L4 = outC->_L1.l_packet;
  /* _L70=(TM_conversions::CAST_L_PACKET_to_int#1)/ */
  CAST_L_PACKET_to_int_TM_conversions(
    outC->_L4,
    &outC->Context_CAST_L_PACKET_to_int_1);
  outC->_L70 = outC->Context_CAST_L_PACKET_to_int_1.l_packet_int;
  outC->_L5 = outC->_L1.nc_cdtrain;
  /* _L71=(TM_conversions::CAST_NC_CDTRAIN_to_int#1)/ */
  CAST_NC_CDTRAIN_to_int_TM_conversions(
    outC->_L5,
    &outC->Context_CAST_NC_CDTRAIN_to_int_1);
  outC->_L71 = outC->Context_CAST_NC_CDTRAIN_to_int_1.nc_cdtrain_int;
  outC->_L99 = outC->_L1.nc_train;
  /* _L100=(TM_conversions::CAST_NC_TRAIN_to_int#1)/ */
  CAST_NC_TRAIN_to_int_TM_conversions(
    outC->_L99,
    &outC->Context_CAST_NC_TRAIN_to_int_1);
  outC->_L100 = outC->Context_CAST_NC_TRAIN_to_int_1.nc_train_int;
  outC->_L98 = outC->_L1.l_train;
  /* _L101=(TM_conversions::CAST_L_TRAIN_to_int#1)/ */
  CAST_L_TRAIN_to_int_TM_conversions(
    outC->_L98,
    &outC->Context_CAST_L_TRAIN_to_int_1);
  outC->_L101 = outC->Context_CAST_L_TRAIN_to_int_1.l_train_int;
  outC->_L97 = outC->_L1.v_maxtrain;
  /* _L102=(TM_conversions::CAST_V_MAXTRAIN_to_int#1)/ */
  CAST_V_MAXTRAIN_to_int_TM_conversions(
    outC->_L97,
    &outC->Context_CAST_V_MAXTRAIN_to_int_1);
  outC->_L102 = outC->Context_CAST_V_MAXTRAIN_to_int_1.v_maxtrain_int;
  outC->_L96 = outC->_L1.m_loadinggauge;
  /* _L103=(TM_conversions::CAST_M_LOADINGGAUGE_to_int#1)/ */
  CAST_M_LOADINGGAUGE_to_int_TM_conversions(
    outC->_L96,
    &outC->Context_CAST_M_LOADINGGAUGE_to_int_1);
  outC->_L103 = outC->Context_CAST_M_LOADINGGAUGE_to_int_1.m_loadinggauge_int;
  outC->_L95 = outC->_L1.m_axleloadcat;
  /* _L104=(TM_conversions::CAST_M_AXLELOADCAT_to_int#1)/ */
  CAST_M_AXLELOADCAT_to_int_TM_conversions(
    outC->_L95,
    &outC->Context_CAST_M_AXLELOADCAT_to_int_1);
  outC->_L104 = outC->Context_CAST_M_AXLELOADCAT_to_int_1.m_axleloadcat_int;
  outC->_L94 = outC->_L1.m_airtight;
  /* _L105=(TM_conversions::CAST_M_AIRTIGHT_to_int#1)/ */
  CAST_M_AIRTIGHT_to_int_TM_conversions(
    outC->_L94,
    &outC->Context_CAST_M_AIRTIGHT_to_int_1);
  outC->_L105 = outC->Context_CAST_M_AIRTIGHT_to_int_1.m_airtight_int;
  outC->_L93 = outC->_L1.n_axle;
  /* _L106=(TM_conversions::CAST_N_AXLE_to_int#1)/ */
  CAST_N_AXLE_to_int_TM_conversions(
    outC->_L93,
    &outC->Context_CAST_N_AXLE_to_int_1);
  outC->_L106 = outC->Context_CAST_N_AXLE_to_int_1.n_axle_int;
  outC->_L92 = outC->_L1.n_iter_voltage;
  /* _L107=(TM_conversions::CAST_N_ITER_to_int#1)/ */
  CAST_N_ITER_to_int_TM_conversions(
    outC->_L92,
    &outC->Context_CAST_N_ITER_to_int_1);
  outC->_L107 = outC->Context_CAST_N_ITER_to_int_1.n_iter_int;
  outC->_L68[0] = outC->_L69;
  outC->_L68[1] = outC->_L70;
  outC->_L68[2] = outC->_L71;
  outC->_L68[3] = outC->_L100;
  outC->_L68[4] = outC->_L101;
  outC->_L68[5] = outC->_L102;
  outC->_L68[6] = outC->_L103;
  outC->_L68[7] = outC->_L104;
  outC->_L68[8] = outC->_L105;
  outC->_L68[9] = outC->_L106;
  outC->_L68[10] = outC->_L107;
  kcg_copy_array_int64_11(&outC->_L110[0], &outC->_L68);
  kcg_copy_array_int64_9(&outC->_L110[11], &outC->_L111);
  kcg_copy_array_int64_20(&outC->_L88[0], &outC->_L110);
  kcg_copy_P011_ntc_list_array_T_TM_TrainToTrack(&outC->_L88[20], &outC->_L114);
  outC->_L2 = outC->_L1.valid;
  noname = outC->_L2;
  kcg_copy_P011_TrainTrack_int_TM_TrainToTrack(&outC->P011_int, &outC->_L88);
}

#ifndef KCG_USER_DEFINED_INIT
void C_P011_train_compr_init_TM_TrainToTrack(
  outC_C_P011_train_compr_TM_TrainToTrack *outC)
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

  for (idx = 0; idx < 5; idx++) {
    outC->_L114[idx] = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 8; idx1++) {
    outC->_L113[idx1] = kcg_lit_int64(0);
  }
  for (idx2 = 0; idx2 < 9; idx2++) {
    outC->_L111[idx2] = kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 20; idx3++) {
    outC->_L110[idx3] = kcg_lit_int64(0);
  }
  for (idx4 = 0; idx4 < 1; idx4++) {
    outC->_L109[idx4] = kcg_lit_int64(0);
  }
  outC->_L108 = kcg_lit_int64(0);
  outC->_L107 = kcg_lit_int64(0);
  outC->_L106 = kcg_lit_int64(0);
  outC->_L105 = kcg_lit_int64(0);
  outC->_L104 = kcg_lit_int64(0);
  outC->_L103 = kcg_lit_int64(0);
  outC->_L102 = kcg_lit_int64(0);
  outC->_L101 = kcg_lit_int64(0);
  outC->_L100 = kcg_lit_int64(0);
  for (idx5 = 0; idx5 < 5; idx5++) {
    outC->_L89[idx5] = kcg_lit_int64(0);
  }
  outC->_L90 = kcg_lit_int64(0);
  for (idx6 = 0; idx6 < 4; idx6++) {
    outC->_L91[idx6].m_voltage = M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L91[idx6].nid_ctraction = kcg_lit_int64(0);
  }
  outC->_L92 = kcg_lit_int64(0);
  outC->_L93 = kcg_lit_int64(0);
  outC->_L94 = M_AIRTIGHT_Not_fitted;
  outC->_L95 = M_AXLELOADCAT_A;
  outC->_L96 =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L97 = kcg_lit_int64(0);
  outC->_L98 = kcg_lit_int64(0);
  outC->_L99 =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  for (idx7 = 0; idx7 < 25; idx7++) {
    outC->_L88[idx7] = kcg_lit_int64(0);
  }
  outC->_L71 = kcg_lit_int64(0);
  outC->_L70 = kcg_lit_int64(0);
  outC->_L69 = kcg_lit_int64(0);
  for (idx8 = 0; idx8 < 11; idx8++) {
    outC->_L68[idx8] = kcg_lit_int64(0);
  }
  outC->_L2 = kcg_true;
  outC->_L3 = kcg_lit_int64(0);
  outC->_L4 = kcg_lit_int64(0);
  outC->_L5 = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L1.valid = kcg_true;
  outC->_L1.nid_packet = kcg_lit_int64(0);
  outC->_L1.l_packet = kcg_lit_int64(0);
  outC->_L1.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L1.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L1.l_train = kcg_lit_int64(0);
  outC->_L1.v_maxtrain = kcg_lit_int64(0);
  outC->_L1.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L1.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L1.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L1.n_axle = kcg_lit_int64(0);
  outC->_L1.n_iter_voltage = kcg_lit_int64(0);
  for (idx9 = 0; idx9 < 4; idx9++) {
    outC->_L1.voltage_list[idx9].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L1.voltage_list[idx9].nid_ctraction = kcg_lit_int64(0);
  }
  outC->_L1.n_iter_nid_ntc = kcg_lit_int64(0);
  for (idx10 = 0; idx10 < 5; idx10++) {
    outC->_L1.nid_ntc_list[idx10] = kcg_lit_int64(0);
  }
  for (idx11 = 0; idx11 < 25; idx11++) {
    outC->P011_int[idx11] = kcg_lit_int64(0);
  }
  /* _L107=(TM_conversions::CAST_N_ITER_to_int#1)/ */
  CAST_N_ITER_to_int_init_TM_conversions(&outC->Context_CAST_N_ITER_to_int_1);
  /* _L106=(TM_conversions::CAST_N_AXLE_to_int#1)/ */
  CAST_N_AXLE_to_int_init_TM_conversions(&outC->Context_CAST_N_AXLE_to_int_1);
  /* _L105=(TM_conversions::CAST_M_AIRTIGHT_to_int#1)/ */
  CAST_M_AIRTIGHT_to_int_init_TM_conversions(
    &outC->Context_CAST_M_AIRTIGHT_to_int_1);
  /* _L104=(TM_conversions::CAST_M_AXLELOADCAT_to_int#1)/ */
  CAST_M_AXLELOADCAT_to_int_init_TM_conversions(
    &outC->Context_CAST_M_AXLELOADCAT_to_int_1);
  /* _L103=(TM_conversions::CAST_M_LOADINGGAUGE_to_int#1)/ */
  CAST_M_LOADINGGAUGE_to_int_init_TM_conversions(
    &outC->Context_CAST_M_LOADINGGAUGE_to_int_1);
  /* _L102=(TM_conversions::CAST_V_MAXTRAIN_to_int#1)/ */
  CAST_V_MAXTRAIN_to_int_init_TM_conversions(
    &outC->Context_CAST_V_MAXTRAIN_to_int_1);
  /* _L101=(TM_conversions::CAST_L_TRAIN_to_int#1)/ */
  CAST_L_TRAIN_to_int_init_TM_conversions(&outC->Context_CAST_L_TRAIN_to_int_1);
  /* _L100=(TM_conversions::CAST_NC_TRAIN_to_int#1)/ */
  CAST_NC_TRAIN_to_int_init_TM_conversions(
    &outC->Context_CAST_NC_TRAIN_to_int_1);
  /* _L71=(TM_conversions::CAST_NC_CDTRAIN_to_int#1)/ */
  CAST_NC_CDTRAIN_to_int_init_TM_conversions(
    &outC->Context_CAST_NC_CDTRAIN_to_int_1);
  /* _L70=(TM_conversions::CAST_L_PACKET_to_int#1)/ */
  CAST_L_PACKET_to_int_init_TM_conversions(
    &outC->Context_CAST_L_PACKET_to_int_1);
  /* _L69=(TM_conversions::CAST_NID_PACKET_to_int#1)/ */
  CAST_NID_PACKET_to_int_init_TM_conversions(
    &outC->Context_CAST_NID_PACKET_to_int_1);
  /* _L108=(TM_conversions::CAST_N_ITER_to_int#2)/ */
  CAST_N_ITER_to_int_init_TM_conversions(&outC->Context_CAST_N_ITER_to_int_2);
  /* _L113=(TM_TrainToTrack_lib_internal::C_P011_flatten_sections_voltage#1)/ */
  C_P011_flatten_sections_voltage_init_TM_TrainToTrack_lib_internal(
    &outC->Context_C_P011_flatten_sections_voltage_1);
  /* _L114=(TM_TrainToTrack_lib_internal::C_P011_flatten_sections_ntc#1)/ */
  C_P011_flatten_sections_ntc_init_TM_TrainToTrack_lib_internal(
    &outC->Context_C_P011_flatten_sections_ntc_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_P011_train_compr_reset_TM_TrainToTrack(
  outC_C_P011_train_compr_TM_TrainToTrack *outC)
{
  /* _L107=(TM_conversions::CAST_N_ITER_to_int#1)/ */
  CAST_N_ITER_to_int_reset_TM_conversions(&outC->Context_CAST_N_ITER_to_int_1);
  /* _L106=(TM_conversions::CAST_N_AXLE_to_int#1)/ */
  CAST_N_AXLE_to_int_reset_TM_conversions(&outC->Context_CAST_N_AXLE_to_int_1);
  /* _L105=(TM_conversions::CAST_M_AIRTIGHT_to_int#1)/ */
  CAST_M_AIRTIGHT_to_int_reset_TM_conversions(
    &outC->Context_CAST_M_AIRTIGHT_to_int_1);
  /* _L104=(TM_conversions::CAST_M_AXLELOADCAT_to_int#1)/ */
  CAST_M_AXLELOADCAT_to_int_reset_TM_conversions(
    &outC->Context_CAST_M_AXLELOADCAT_to_int_1);
  /* _L103=(TM_conversions::CAST_M_LOADINGGAUGE_to_int#1)/ */
  CAST_M_LOADINGGAUGE_to_int_reset_TM_conversions(
    &outC->Context_CAST_M_LOADINGGAUGE_to_int_1);
  /* _L102=(TM_conversions::CAST_V_MAXTRAIN_to_int#1)/ */
  CAST_V_MAXTRAIN_to_int_reset_TM_conversions(
    &outC->Context_CAST_V_MAXTRAIN_to_int_1);
  /* _L101=(TM_conversions::CAST_L_TRAIN_to_int#1)/ */
  CAST_L_TRAIN_to_int_reset_TM_conversions(
    &outC->Context_CAST_L_TRAIN_to_int_1);
  /* _L100=(TM_conversions::CAST_NC_TRAIN_to_int#1)/ */
  CAST_NC_TRAIN_to_int_reset_TM_conversions(
    &outC->Context_CAST_NC_TRAIN_to_int_1);
  /* _L71=(TM_conversions::CAST_NC_CDTRAIN_to_int#1)/ */
  CAST_NC_CDTRAIN_to_int_reset_TM_conversions(
    &outC->Context_CAST_NC_CDTRAIN_to_int_1);
  /* _L70=(TM_conversions::CAST_L_PACKET_to_int#1)/ */
  CAST_L_PACKET_to_int_reset_TM_conversions(
    &outC->Context_CAST_L_PACKET_to_int_1);
  /* _L69=(TM_conversions::CAST_NID_PACKET_to_int#1)/ */
  CAST_NID_PACKET_to_int_reset_TM_conversions(
    &outC->Context_CAST_NID_PACKET_to_int_1);
  /* _L108=(TM_conversions::CAST_N_ITER_to_int#2)/ */
  CAST_N_ITER_to_int_reset_TM_conversions(&outC->Context_CAST_N_ITER_to_int_2);
  /* _L113=(TM_TrainToTrack_lib_internal::C_P011_flatten_sections_voltage#1)/ */
  C_P011_flatten_sections_voltage_reset_TM_TrainToTrack_lib_internal(
    &outC->Context_C_P011_flatten_sections_voltage_1);
  /* _L114=(TM_TrainToTrack_lib_internal::C_P011_flatten_sections_ntc#1)/ */
  C_P011_flatten_sections_ntc_reset_TM_TrainToTrack_lib_internal(
    &outC->Context_C_P011_flatten_sections_ntc_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P011_train_compr_TM_TrainToTrack.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

