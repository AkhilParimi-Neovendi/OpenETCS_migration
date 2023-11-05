/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_compr_P011_TM_TrainToTrack.h"

/* TM_TrainToTrack::C_compr_P011/ */
void C_compr_P011_TM_TrainToTrack(
  /* P011_int/ */
  P011_TrainTrack_int_TM_TrainToTrack *P011_int,
  outC_C_compr_P011_TM_TrainToTrack *outC)
{
  kcg_bool noname_CAST_Int_to_NID_PACKET_1;
  kcg_bool _1_noname_CAST_Int_to_NID_PACKET_1;
  kcg_bool noname_CAST_Int_to_L_PACKET_1;
  kcg_bool _2_noname_CAST_Int_to_L_PACKET_1;
  kcg_bool noname_CAST_Int_to_N_ITER_1;
  kcg_bool _3_noname_CAST_Int_to_N_ITER_1;
  kcg_bool noname_CAST_Int_to_N_ITER_2;
  kcg_bool _4_noname_CAST_Int_to_N_ITER_2;
  P011_ntc_list_TM_TrainToTrack op_call;
  P011_voltage_list_TM_TrainToTrack _5_op_call;

  outC->_L5_CAST_Int_to_NID_PACKET_1 = kcg_lit_int32(0);
  kcg_copy_P011_TrainTrack_int_TM_TrainToTrack(&outC->_L1, P011_int);
  kcg_copy_Array11_TM_TrainToTrack(
    &outC->_L127,
    (Array11_TM_TrainToTrack *) &outC->_L1[0]);
  outC->_L139 = outC->_L127[0];
  /* _L150=(TM_TrainToTrack::Decode_NID_PACKET#1)/ */
  Decode_NID_PACKET_TM_TrainToTrack(
    outC->_L139,
    kcg_lit_int32(11),
    &outC->Context_Decode_NID_PACKET_1);
  outC->_L150 = outC->Context_Decode_NID_PACKET_1.Valid;
  /* _L151=(TM_TrainToTrack::Filter_Variable#1)/ */
  Filter_Variable_TM_TrainToTrack(
    outC->_L150,
    outC->_L139,
    &outC->Context_Filter_Variable_1);
  outC->_L151 = outC->Context_Filter_Variable_1.int_out;
  outC->nid_packet_int_CAST_Int_to_NID_PACKET_1 = outC->_L151;
  outC->_L1_CAST_Int_to_NID_PACKET_1 =
    outC->nid_packet_int_CAST_Int_to_NID_PACKET_1;
  outC->_L4_CAST_Int_to_NID_PACKET_1 = outC->_L1_CAST_Int_to_NID_PACKET_1 <
    outC->_L5_CAST_Int_to_NID_PACKET_1;
  outC->_L3_CAST_Int_to_NID_PACKET_1 = kcg_lit_int32(256);
  outC->_L2_CAST_Int_to_NID_PACKET_1 = outC->_L1_CAST_Int_to_NID_PACKET_1 >
    outC->_L3_CAST_Int_to_NID_PACKET_1;
  noname_CAST_Int_to_NID_PACKET_1 = outC->_L2_CAST_Int_to_NID_PACKET_1;
  _1_noname_CAST_Int_to_NID_PACKET_1 = outC->_L4_CAST_Int_to_NID_PACKET_1;
  outC->nid_packet_CAST_Int_to_NID_PACKET_1 = outC->_L1_CAST_Int_to_NID_PACKET_1;
  outC->_L13_CAST_Int_to_L_PACKET_1 = kcg_lit_int32(8191);
  outC->_L12_CAST_Int_to_L_PACKET_1 = kcg_lit_int32(0);
  outC->_L140 = outC->_L127[1];
  /* _L152=(TM_TrainToTrack::Filter_Variable#2)/ */
  Filter_Variable_TM_TrainToTrack(
    outC->_L150,
    outC->_L140,
    &outC->Context_Filter_Variable_2);
  outC->_L152 = outC->Context_Filter_Variable_2.int_out;
  outC->l_packet_int_CAST_Int_to_L_PACKET_1 = outC->_L152;
  outC->_L1_CAST_Int_to_L_PACKET_1 = outC->l_packet_int_CAST_Int_to_L_PACKET_1;
  outC->l_packet_CAST_Int_to_L_PACKET_1 = outC->_L1_CAST_Int_to_L_PACKET_1;
  outC->_L9_CAST_Int_to_L_PACKET_1 = outC->_L1_CAST_Int_to_L_PACKET_1 >
    outC->_L13_CAST_Int_to_L_PACKET_1;
  outC->_L8_CAST_Int_to_L_PACKET_1 = outC->_L1_CAST_Int_to_L_PACKET_1 <
    outC->_L12_CAST_Int_to_L_PACKET_1;
  noname_CAST_Int_to_L_PACKET_1 = outC->_L8_CAST_Int_to_L_PACKET_1;
  _2_noname_CAST_Int_to_L_PACKET_1 = outC->_L9_CAST_Int_to_L_PACKET_1;
  outC->_L11_CAST_Int_to_N_ITER_1 = kcg_lit_int32(0);
  outC->_L149 = outC->_L127[10];
  /* _L162=(TM_TrainToTrack::Filter_Variable#12)/ */
  Filter_Variable_TM_TrainToTrack(
    outC->_L150,
    outC->_L149,
    &outC->Context_Filter_Variable_12);
  outC->_L162 = outC->Context_Filter_Variable_12.int_out;
  outC->n_iter_int_CAST_Int_to_N_ITER_1 = outC->_L162;
  outC->_L1_CAST_Int_to_N_ITER_1 = outC->n_iter_int_CAST_Int_to_N_ITER_1;
  outC->_L10_CAST_Int_to_N_ITER_1 = outC->_L1_CAST_Int_to_N_ITER_1 <
    outC->_L11_CAST_Int_to_N_ITER_1;
  noname_CAST_Int_to_N_ITER_1 = outC->_L10_CAST_Int_to_N_ITER_1;
  outC->_L9_CAST_Int_to_N_ITER_1 = kcg_lit_int32(31);
  outC->_L12_CAST_Int_to_N_ITER_1 = outC->_L1_CAST_Int_to_N_ITER_1 >
    outC->_L9_CAST_Int_to_N_ITER_1;
  _3_noname_CAST_Int_to_N_ITER_1 = outC->_L12_CAST_Int_to_N_ITER_1;
  outC->n_iter_CAST_Int_to_N_ITER_1 = outC->_L1_CAST_Int_to_N_ITER_1;
  outC->_L11_CAST_Int_to_N_ITER_2 = kcg_lit_int32(0);
  outC->_L164 = outC->_L1[19];
  /* _L163=(TM_TrainToTrack::Filter_Variable#13)/ */
  Filter_Variable_TM_TrainToTrack(
    outC->_L150,
    outC->_L164,
    &outC->Context_Filter_Variable_13);
  outC->_L163 = outC->Context_Filter_Variable_13.int_out;
  outC->n_iter_int_CAST_Int_to_N_ITER_2 = outC->_L163;
  outC->_L1_CAST_Int_to_N_ITER_2 = outC->n_iter_int_CAST_Int_to_N_ITER_2;
  outC->_L10_CAST_Int_to_N_ITER_2 = outC->_L1_CAST_Int_to_N_ITER_2 <
    outC->_L11_CAST_Int_to_N_ITER_2;
  noname_CAST_Int_to_N_ITER_2 = outC->_L10_CAST_Int_to_N_ITER_2;
  outC->_L9_CAST_Int_to_N_ITER_2 = kcg_lit_int32(31);
  outC->_L12_CAST_Int_to_N_ITER_2 = outC->_L1_CAST_Int_to_N_ITER_2 >
    outC->_L9_CAST_Int_to_N_ITER_2;
  _4_noname_CAST_Int_to_N_ITER_2 = outC->_L12_CAST_Int_to_N_ITER_2;
  outC->n_iter_CAST_Int_to_N_ITER_2 = outC->_L1_CAST_Int_to_N_ITER_2;
  outC->every2 = outC->_L150;
  kcg_copy_array_int32_5(&outC->_L166, (array_int32_5 *) &outC->_L1[20]);
  if (outC->every2) {
    /* _L114=(TM_TrainToTrack_lib_internal::C_P011_unflatten_sections_ntc#1)/ */
    C_P011_unflatten_sections_ntc_TM_TrainToTrack_lib_internal(
      &outC->_L166,
      &outC->_1_Context_C_P011_unflatten_sections_ntc_1);
    kcg_copy_P011_ntc_list_TM_TrainToTrack(
      &op_call,
      &outC->_1_Context_C_P011_unflatten_sections_ntc_1.sections);
  }
  outC->every = outC->_L150;
  kcg_copy_array_int32_8(&outC->_L165, (array_int32_8 *) &outC->_L1[11]);
  if (outC->every) {
    /* _L113=(TM_TrainToTrack_lib_internal::C_P011_unflatten_sections_voltage#1)/ */
    _149_C_P011_unflatten_sec_TM_TrainToTrack_lib_internal(
      &outC->_L165,
      &outC->Context_C_P011_unflatten_sections_voltage_1);
    kcg_copy_P011_voltage_list_TM_TrainToTrack(
      &_5_op_call,
      &outC->Context_C_P011_unflatten_sections_voltage_1.sections);
    kcg_copy_P011_voltage_list_TM_TrainToTrack(&outC->_L113, &_5_op_call);
  }
  else {
    kcg_copy_P011_voltage_list_TM_TrainToTrack(
      &outC->_L113,
      (P011_voltage_list_TM_TrainToTrack *)
        &DEFAULT_P011_voltage_list_TM_TrainToTrack);
  }
  outC->_L148 = outC->_L127[9];
  /* _L161=(TM_TrainToTrack::Filter_Variable#11)/ */
  Filter_Variable_TM_TrainToTrack(
    outC->_L150,
    outC->_L148,
    &outC->Context_Filter_Variable_11);
  outC->_L161 = outC->Context_Filter_Variable_11.int_out;
  outC->_L146 = outC->_L127[7];
  /* _L160=(TM_TrainToTrack::Filter_Variable#10)/ */
  Filter_Variable_TM_TrainToTrack(
    outC->_L150,
    outC->_L146,
    &outC->Context_Filter_Variable_10);
  outC->_L160 = outC->Context_Filter_Variable_10.int_out;
  outC->_L147 = outC->_L127[8];
  /* _L159=(TM_TrainToTrack::Filter_Variable#9)/ */
  Filter_Variable_TM_TrainToTrack(
    outC->_L150,
    outC->_L147,
    &outC->Context_Filter_Variable_9);
  outC->_L159 = outC->Context_Filter_Variable_9.int_out;
  outC->_L145 = outC->_L127[6];
  /* _L158=(TM_TrainToTrack::Filter_Variable#8)/ */
  Filter_Variable_TM_TrainToTrack(
    outC->_L150,
    outC->_L145,
    &outC->Context_Filter_Variable_8);
  outC->_L158 = outC->Context_Filter_Variable_8.int_out;
  outC->_L144 = outC->_L127[5];
  /* _L157=(TM_TrainToTrack::Filter_Variable#7)/ */
  Filter_Variable_TM_TrainToTrack(
    outC->_L150,
    outC->_L144,
    &outC->Context_Filter_Variable_7);
  outC->_L157 = outC->Context_Filter_Variable_7.int_out;
  outC->_L143 = outC->_L127[4];
  /* _L156=(TM_TrainToTrack::Filter_Variable#6)/ */
  Filter_Variable_TM_TrainToTrack(
    outC->_L150,
    outC->_L143,
    &outC->Context_Filter_Variable_6);
  outC->_L156 = outC->Context_Filter_Variable_6.int_out;
  outC->_L142 = outC->_L127[3];
  /* _L154=(TM_TrainToTrack::Filter_Variable#4)/ */
  Filter_Variable_TM_TrainToTrack(
    outC->_L150,
    outC->_L142,
    &outC->Context_Filter_Variable_4);
  outC->_L154 = outC->Context_Filter_Variable_4.int_out;
  outC->_L141 = outC->_L127[2];
  /* _L153=(TM_TrainToTrack::Filter_Variable#3)/ */
  Filter_Variable_TM_TrainToTrack(
    outC->_L150,
    outC->_L141,
    &outC->Context_Filter_Variable_3);
  outC->_L153 = outC->Context_Filter_Variable_3.int_out;
  outC->_L69 = outC->nid_packet_CAST_Int_to_NID_PACKET_1;
  outC->_L70 = outC->l_packet_CAST_Int_to_L_PACKET_1;
  /* _L71=(TM_conversions::CAST_Int_to_NC_CDTRAIN#1)/ */
  CAST_Int_to_NC_CDTRAIN_TM_conversions(
    outC->_L153,
    &outC->Context_CAST_Int_to_NC_CDTRAIN_1);
  outC->_L71 = outC->Context_CAST_Int_to_NC_CDTRAIN_1.nc_cdtrain;
  /* _L100=(TM_conversions::CAST_Int_to_NC_TRAIN#1)/ */
  CAST_Int_to_NC_TRAIN_TM_conversions(
    outC->_L154,
    &outC->Context_CAST_Int_to_NC_TRAIN_1);
  outC->_L100 = outC->Context_CAST_Int_to_NC_TRAIN_1.nc_train;
  /* _L101=(TM_conversions::CAST_Int_to_L_TRAIN#1)/ */
  CAST_Int_to_L_TRAIN_TM_conversions(
    outC->_L156,
    &outC->Context_CAST_Int_to_L_TRAIN_1);
  outC->_L101 = outC->Context_CAST_Int_to_L_TRAIN_1.l_train;
  /* _L102=(TM_conversions::CAST_Int_to_V_MAXTRAIN#1)/ */
  CAST_Int_to_V_MAXTRAIN_TM_conversions(
    outC->_L157,
    &outC->Context_CAST_Int_to_V_MAXTRAIN_1);
  outC->_L102 = outC->Context_CAST_Int_to_V_MAXTRAIN_1.v_maxtrain;
  /* _L103=(TM_conversions::CAST_Int_to_M_LOADINGGAUGE#1)/ */
  CAST_Int_to_M_LOADINGGAUGE_TM_conversions(
    outC->_L158,
    &outC->Context_CAST_Int_to_M_LOADINGGAUGE_1);
  outC->_L103 = outC->Context_CAST_Int_to_M_LOADINGGAUGE_1.m_loadinggauge;
  /* _L104=(TM_conversions::CAST_Int_to_M_AXLELOADCAT#1)/ */
  CAST_Int_to_M_AXLELOADCAT_TM_conversions(
    outC->_L160,
    &outC->Context_CAST_Int_to_M_AXLELOADCAT_1);
  outC->_L104 = outC->Context_CAST_Int_to_M_AXLELOADCAT_1.m_axleloadcat;
  /* _L105=(TM_conversions::CAST_Int_to_M_AIRTIGHT#1)/ */
  CAST_Int_to_M_AIRTIGHT_TM_conversions(
    outC->_L159,
    &outC->Context_CAST_Int_to_M_AIRTIGHT_1);
  outC->_L105 = outC->Context_CAST_Int_to_M_AIRTIGHT_1.m_airtight;
  /* _L106=(TM_conversions::CAST_Int_to_N_AXLE#1)/ */
  CAST_Int_to_N_AXLE_TM_conversions(
    outC->_L161,
    &outC->Context_CAST_Int_to_N_AXLE_1);
  outC->_L106 = outC->Context_CAST_Int_to_N_AXLE_1.n_axle;
  outC->_L107 = outC->n_iter_CAST_Int_to_N_ITER_1;
  outC->_L108 = outC->n_iter_CAST_Int_to_N_ITER_2;
  if (outC->every2) {
    kcg_copy_P011_ntc_list_TM_TrainToTrack(&outC->_L114, &op_call);
  }
  else {
    kcg_copy_P011_ntc_list_TM_TrainToTrack(
      &outC->_L114,
      (P011_ntc_list_TM_TrainToTrack *) &DEFAULT_P011_ntc_list_TM_TrainToTrack);
  }
  outC->_L116.valid = outC->_L150;
  outC->_L116.nid_packet = outC->_L69;
  outC->_L116.l_packet = outC->_L70;
  outC->_L116.nc_cdtrain = outC->_L71;
  outC->_L116.nc_train = outC->_L100;
  outC->_L116.l_train = outC->_L101;
  outC->_L116.v_maxtrain = outC->_L102;
  outC->_L116.m_loadinggauge = outC->_L103;
  outC->_L116.m_axleloadcat = outC->_L104;
  outC->_L116.m_airtight = outC->_L105;
  outC->_L116.n_axle = outC->_L106;
  outC->_L116.n_iter_voltage = outC->_L107;
  kcg_copy_P011_voltage_list_TM_TrainToTrack(
    &outC->_L116.voltage_list,
    &outC->_L113);
  outC->_L116.n_iter_nid_ntc = outC->_L108;
  kcg_copy_P011_ntc_list_TM_TrainToTrack(&outC->_L116.nid_ntc_list, &outC->_L114);
  kcg_copy_P011_TM_TrainToTrack(&outC->P011_out, &outC->_L116);
}

#ifndef KCG_USER_DEFINED_INIT
void C_compr_P011_init_TM_TrainToTrack(outC_C_compr_P011_TM_TrainToTrack *outC)
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

  for (idx = 0; idx < 4; idx++) {
    outC->_L113[idx].m_voltage = M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L113[idx].nid_ctraction = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 5; idx1++) {
    outC->_L166[idx1] = kcg_lit_int32(0);
  }
  for (idx2 = 0; idx2 < 8; idx2++) {
    outC->_L165[idx2] = kcg_lit_int32(0);
  }
  outC->_L164 = kcg_lit_int32(0);
  outC->_L163 = kcg_lit_int32(0);
  outC->_L162 = kcg_lit_int32(0);
  outC->_L161 = kcg_lit_int32(0);
  outC->_L160 = kcg_lit_int32(0);
  outC->_L159 = kcg_lit_int32(0);
  outC->_L158 = kcg_lit_int32(0);
  outC->_L157 = kcg_lit_int32(0);
  outC->_L156 = kcg_lit_int32(0);
  outC->_L154 = kcg_lit_int32(0);
  outC->_L153 = kcg_lit_int32(0);
  outC->_L152 = kcg_lit_int32(0);
  outC->_L151 = kcg_lit_int32(0);
  outC->_L150 = kcg_true;
  outC->_L139 = kcg_lit_int32(0);
  outC->_L140 = kcg_lit_int32(0);
  outC->_L141 = kcg_lit_int32(0);
  outC->_L142 = kcg_lit_int32(0);
  outC->_L143 = kcg_lit_int32(0);
  outC->_L144 = kcg_lit_int32(0);
  outC->_L145 = kcg_lit_int32(0);
  outC->_L146 = kcg_lit_int32(0);
  outC->_L147 = kcg_lit_int32(0);
  outC->_L148 = kcg_lit_int32(0);
  outC->_L149 = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 11; idx3++) {
    outC->_L127[idx3] = kcg_lit_int32(0);
  }
  outC->_L116.valid = kcg_true;
  outC->_L116.nid_packet = kcg_lit_int32(0);
  outC->_L116.l_packet = kcg_lit_int32(0);
  outC->_L116.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L116.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L116.l_train = kcg_lit_int32(0);
  outC->_L116.v_maxtrain = kcg_lit_int32(0);
  outC->_L116.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L116.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L116.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L116.n_axle = kcg_lit_int32(0);
  outC->_L116.n_iter_voltage = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 4; idx4++) {
    outC->_L116.voltage_list[idx4].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L116.voltage_list[idx4].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L116.n_iter_nid_ntc = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 5; idx5++) {
    outC->_L116.nid_ntc_list[idx5] = kcg_lit_int32(0);
  }
  for (idx6 = 0; idx6 < 5; idx6++) {
    outC->_L114[idx6] = kcg_lit_int32(0);
  }
  outC->_L108 = kcg_lit_int32(0);
  outC->_L107 = kcg_lit_int32(0);
  outC->_L106 = kcg_lit_int32(0);
  outC->_L105 = M_AIRTIGHT_Not_fitted;
  outC->_L104 = M_AXLELOADCAT_A;
  outC->_L103 =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L102 = kcg_lit_int32(0);
  outC->_L101 = kcg_lit_int32(0);
  outC->_L100 =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L71 = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L70 = kcg_lit_int32(0);
  outC->_L69 = kcg_lit_int32(0);
  for (idx7 = 0; idx7 < 25; idx7++) {
    outC->_L1[idx7] = kcg_lit_int32(0);
  }
  outC->every2 = kcg_true;
  outC->every = kcg_true;
  outC->_L1_CAST_Int_to_N_ITER_2 = kcg_lit_int32(0);
  outC->_L12_CAST_Int_to_N_ITER_2 = kcg_true;
  outC->_L11_CAST_Int_to_N_ITER_2 = kcg_lit_int32(0);
  outC->_L10_CAST_Int_to_N_ITER_2 = kcg_true;
  outC->_L9_CAST_Int_to_N_ITER_2 = kcg_lit_int32(0);
  outC->n_iter_int_CAST_Int_to_N_ITER_2 = kcg_lit_int32(0);
  outC->n_iter_CAST_Int_to_N_ITER_2 = kcg_lit_int32(0);
  outC->_L1_CAST_Int_to_N_ITER_1 = kcg_lit_int32(0);
  outC->_L12_CAST_Int_to_N_ITER_1 = kcg_true;
  outC->_L11_CAST_Int_to_N_ITER_1 = kcg_lit_int32(0);
  outC->_L10_CAST_Int_to_N_ITER_1 = kcg_true;
  outC->_L9_CAST_Int_to_N_ITER_1 = kcg_lit_int32(0);
  outC->n_iter_int_CAST_Int_to_N_ITER_1 = kcg_lit_int32(0);
  outC->n_iter_CAST_Int_to_N_ITER_1 = kcg_lit_int32(0);
  outC->_L1_CAST_Int_to_L_PACKET_1 = kcg_lit_int32(0);
  outC->_L9_CAST_Int_to_L_PACKET_1 = kcg_true;
  outC->_L8_CAST_Int_to_L_PACKET_1 = kcg_true;
  outC->_L12_CAST_Int_to_L_PACKET_1 = kcg_lit_int32(0);
  outC->_L13_CAST_Int_to_L_PACKET_1 = kcg_lit_int32(0);
  outC->l_packet_int_CAST_Int_to_L_PACKET_1 = kcg_lit_int32(0);
  outC->l_packet_CAST_Int_to_L_PACKET_1 = kcg_lit_int32(0);
  outC->_L1_CAST_Int_to_NID_PACKET_1 = kcg_lit_int32(0);
  outC->_L5_CAST_Int_to_NID_PACKET_1 = kcg_lit_int32(0);
  outC->_L4_CAST_Int_to_NID_PACKET_1 = kcg_true;
  outC->_L3_CAST_Int_to_NID_PACKET_1 = kcg_lit_int32(0);
  outC->_L2_CAST_Int_to_NID_PACKET_1 = kcg_true;
  outC->nid_packet_int_CAST_Int_to_NID_PACKET_1 = kcg_lit_int32(0);
  outC->nid_packet_CAST_Int_to_NID_PACKET_1 = kcg_lit_int32(0);
  outC->P011_out.valid = kcg_true;
  outC->P011_out.nid_packet = kcg_lit_int32(0);
  outC->P011_out.l_packet = kcg_lit_int32(0);
  outC->P011_out.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->P011_out.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->P011_out.l_train = kcg_lit_int32(0);
  outC->P011_out.v_maxtrain = kcg_lit_int32(0);
  outC->P011_out.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->P011_out.m_axleloadcat = M_AXLELOADCAT_A;
  outC->P011_out.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->P011_out.n_axle = kcg_lit_int32(0);
  outC->P011_out.n_iter_voltage = kcg_lit_int32(0);
  for (idx8 = 0; idx8 < 4; idx8++) {
    outC->P011_out.voltage_list[idx8].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->P011_out.voltage_list[idx8].nid_ctraction = kcg_lit_int32(0);
  }
  outC->P011_out.n_iter_nid_ntc = kcg_lit_int32(0);
  for (idx9 = 0; idx9 < 5; idx9++) {
    outC->P011_out.nid_ntc_list[idx9] = kcg_lit_int32(0);
  }
  /* _L106=(TM_conversions::CAST_Int_to_N_AXLE#1)/ */
  CAST_Int_to_N_AXLE_init_TM_conversions(&outC->Context_CAST_Int_to_N_AXLE_1);
  /* _L105=(TM_conversions::CAST_Int_to_M_AIRTIGHT#1)/ */
  CAST_Int_to_M_AIRTIGHT_init_TM_conversions(
    &outC->Context_CAST_Int_to_M_AIRTIGHT_1);
  /* _L104=(TM_conversions::CAST_Int_to_M_AXLELOADCAT#1)/ */
  CAST_Int_to_M_AXLELOADCAT_init_TM_conversions(
    &outC->Context_CAST_Int_to_M_AXLELOADCAT_1);
  /* _L103=(TM_conversions::CAST_Int_to_M_LOADINGGAUGE#1)/ */
  CAST_Int_to_M_LOADINGGAUGE_init_TM_conversions(
    &outC->Context_CAST_Int_to_M_LOADINGGAUGE_1);
  /* _L102=(TM_conversions::CAST_Int_to_V_MAXTRAIN#1)/ */
  CAST_Int_to_V_MAXTRAIN_init_TM_conversions(
    &outC->Context_CAST_Int_to_V_MAXTRAIN_1);
  /* _L101=(TM_conversions::CAST_Int_to_L_TRAIN#1)/ */
  CAST_Int_to_L_TRAIN_init_TM_conversions(&outC->Context_CAST_Int_to_L_TRAIN_1);
  /* _L100=(TM_conversions::CAST_Int_to_NC_TRAIN#1)/ */
  CAST_Int_to_NC_TRAIN_init_TM_conversions(
    &outC->Context_CAST_Int_to_NC_TRAIN_1);
  /* _L71=(TM_conversions::CAST_Int_to_NC_CDTRAIN#1)/ */
  CAST_Int_to_NC_CDTRAIN_init_TM_conversions(
    &outC->Context_CAST_Int_to_NC_CDTRAIN_1);
  /* _L153=(TM_TrainToTrack::Filter_Variable#3)/ */
  Filter_Variable_init_TM_TrainToTrack(&outC->Context_Filter_Variable_3);
  /* _L154=(TM_TrainToTrack::Filter_Variable#4)/ */
  Filter_Variable_init_TM_TrainToTrack(&outC->Context_Filter_Variable_4);
  /* _L156=(TM_TrainToTrack::Filter_Variable#6)/ */
  Filter_Variable_init_TM_TrainToTrack(&outC->Context_Filter_Variable_6);
  /* _L157=(TM_TrainToTrack::Filter_Variable#7)/ */
  Filter_Variable_init_TM_TrainToTrack(&outC->Context_Filter_Variable_7);
  /* _L158=(TM_TrainToTrack::Filter_Variable#8)/ */
  Filter_Variable_init_TM_TrainToTrack(&outC->Context_Filter_Variable_8);
  /* _L159=(TM_TrainToTrack::Filter_Variable#9)/ */
  Filter_Variable_init_TM_TrainToTrack(&outC->Context_Filter_Variable_9);
  /* _L160=(TM_TrainToTrack::Filter_Variable#10)/ */
  Filter_Variable_init_TM_TrainToTrack(&outC->Context_Filter_Variable_10);
  /* _L161=(TM_TrainToTrack::Filter_Variable#11)/ */
  Filter_Variable_init_TM_TrainToTrack(&outC->Context_Filter_Variable_11);
  /* _L113=(TM_TrainToTrack_lib_internal::C_P011_unflatten_sections_voltage#1)/ */
  _149_C_P011_unflatten_sec_init_TM_TrainToTrack_lib_internal(
    &outC->Context_C_P011_unflatten_sections_voltage_1);
  /* _L114=(TM_TrainToTrack_lib_internal::C_P011_unflatten_sections_ntc#1)/ */
  C_P011_unflatten_sections_ntc_init_TM_TrainToTrack_lib_internal(
    &outC->_1_Context_C_P011_unflatten_sections_ntc_1);
  /* _L163=(TM_TrainToTrack::Filter_Variable#13)/ */
  Filter_Variable_init_TM_TrainToTrack(&outC->Context_Filter_Variable_13);
  /* _L162=(TM_TrainToTrack::Filter_Variable#12)/ */
  Filter_Variable_init_TM_TrainToTrack(&outC->Context_Filter_Variable_12);
  /* _L152=(TM_TrainToTrack::Filter_Variable#2)/ */
  Filter_Variable_init_TM_TrainToTrack(&outC->Context_Filter_Variable_2);
  /* _L151=(TM_TrainToTrack::Filter_Variable#1)/ */
  Filter_Variable_init_TM_TrainToTrack(&outC->Context_Filter_Variable_1);
  /* _L150=(TM_TrainToTrack::Decode_NID_PACKET#1)/ */
  Decode_NID_PACKET_init_TM_TrainToTrack(&outC->Context_Decode_NID_PACKET_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_compr_P011_reset_TM_TrainToTrack(outC_C_compr_P011_TM_TrainToTrack *outC)
{
  /* _L106=(TM_conversions::CAST_Int_to_N_AXLE#1)/ */
  CAST_Int_to_N_AXLE_reset_TM_conversions(&outC->Context_CAST_Int_to_N_AXLE_1);
  /* _L105=(TM_conversions::CAST_Int_to_M_AIRTIGHT#1)/ */
  CAST_Int_to_M_AIRTIGHT_reset_TM_conversions(
    &outC->Context_CAST_Int_to_M_AIRTIGHT_1);
  /* _L104=(TM_conversions::CAST_Int_to_M_AXLELOADCAT#1)/ */
  CAST_Int_to_M_AXLELOADCAT_reset_TM_conversions(
    &outC->Context_CAST_Int_to_M_AXLELOADCAT_1);
  /* _L103=(TM_conversions::CAST_Int_to_M_LOADINGGAUGE#1)/ */
  CAST_Int_to_M_LOADINGGAUGE_reset_TM_conversions(
    &outC->Context_CAST_Int_to_M_LOADINGGAUGE_1);
  /* _L102=(TM_conversions::CAST_Int_to_V_MAXTRAIN#1)/ */
  CAST_Int_to_V_MAXTRAIN_reset_TM_conversions(
    &outC->Context_CAST_Int_to_V_MAXTRAIN_1);
  /* _L101=(TM_conversions::CAST_Int_to_L_TRAIN#1)/ */
  CAST_Int_to_L_TRAIN_reset_TM_conversions(
    &outC->Context_CAST_Int_to_L_TRAIN_1);
  /* _L100=(TM_conversions::CAST_Int_to_NC_TRAIN#1)/ */
  CAST_Int_to_NC_TRAIN_reset_TM_conversions(
    &outC->Context_CAST_Int_to_NC_TRAIN_1);
  /* _L71=(TM_conversions::CAST_Int_to_NC_CDTRAIN#1)/ */
  CAST_Int_to_NC_CDTRAIN_reset_TM_conversions(
    &outC->Context_CAST_Int_to_NC_CDTRAIN_1);
  /* _L153=(TM_TrainToTrack::Filter_Variable#3)/ */
  Filter_Variable_reset_TM_TrainToTrack(&outC->Context_Filter_Variable_3);
  /* _L154=(TM_TrainToTrack::Filter_Variable#4)/ */
  Filter_Variable_reset_TM_TrainToTrack(&outC->Context_Filter_Variable_4);
  /* _L156=(TM_TrainToTrack::Filter_Variable#6)/ */
  Filter_Variable_reset_TM_TrainToTrack(&outC->Context_Filter_Variable_6);
  /* _L157=(TM_TrainToTrack::Filter_Variable#7)/ */
  Filter_Variable_reset_TM_TrainToTrack(&outC->Context_Filter_Variable_7);
  /* _L158=(TM_TrainToTrack::Filter_Variable#8)/ */
  Filter_Variable_reset_TM_TrainToTrack(&outC->Context_Filter_Variable_8);
  /* _L159=(TM_TrainToTrack::Filter_Variable#9)/ */
  Filter_Variable_reset_TM_TrainToTrack(&outC->Context_Filter_Variable_9);
  /* _L160=(TM_TrainToTrack::Filter_Variable#10)/ */
  Filter_Variable_reset_TM_TrainToTrack(&outC->Context_Filter_Variable_10);
  /* _L161=(TM_TrainToTrack::Filter_Variable#11)/ */
  Filter_Variable_reset_TM_TrainToTrack(&outC->Context_Filter_Variable_11);
  /* _L113=(TM_TrainToTrack_lib_internal::C_P011_unflatten_sections_voltage#1)/ */
  _149_C_P011_unflatten_sec_reset_TM_TrainToTrack_lib_internal(
    &outC->Context_C_P011_unflatten_sections_voltage_1);
  /* _L114=(TM_TrainToTrack_lib_internal::C_P011_unflatten_sections_ntc#1)/ */
  C_P011_unflatten_sections_ntc_reset_TM_TrainToTrack_lib_internal(
    &outC->_1_Context_C_P011_unflatten_sections_ntc_1);
  /* _L163=(TM_TrainToTrack::Filter_Variable#13)/ */
  Filter_Variable_reset_TM_TrainToTrack(&outC->Context_Filter_Variable_13);
  /* _L162=(TM_TrainToTrack::Filter_Variable#12)/ */
  Filter_Variable_reset_TM_TrainToTrack(&outC->Context_Filter_Variable_12);
  /* _L152=(TM_TrainToTrack::Filter_Variable#2)/ */
  Filter_Variable_reset_TM_TrainToTrack(&outC->Context_Filter_Variable_2);
  /* _L151=(TM_TrainToTrack::Filter_Variable#1)/ */
  Filter_Variable_reset_TM_TrainToTrack(&outC->Context_Filter_Variable_1);
  /* _L150=(TM_TrainToTrack::Decode_NID_PACKET#1)/ */
  Decode_NID_PACKET_reset_TM_TrainToTrack(&outC->Context_Decode_NID_PACKET_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_compr_P011_TM_TrainToTrack.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

