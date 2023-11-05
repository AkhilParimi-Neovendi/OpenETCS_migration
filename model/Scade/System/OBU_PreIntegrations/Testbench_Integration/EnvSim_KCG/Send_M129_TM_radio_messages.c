/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_M129_TM_radio_messages.h"

/* TM_radio_messages::Send_M129/ */
void Send_M129_TM_radio_messages(
  /* t_train_global/ */
  T_internal_Type_Obu_BasicTypes_Pkg t_train_global,
  /* MessageBus/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* Message_129_in/ */
  M_129_T_TM_radio_messages *Message_129_in,
  /* P000/ */
  P000_TM_TrainToTrack *P000,
  /* P001/ */
  P001_TM_TrainToTrack *P001,
  /* P011/ */
  P011_TM_TrainToTrack *P011,
  /* m_version/ */
  M_VERSION m_version,
  outC_Send_M129_TM_radio_messages *outC)
{
  static kcg_size idx;
  static kcg_bool noname;
  static M_VERSION _1_noname;

  outC->_L55 = kcg_lit_int32(0);
  /* _L56/ */
  for (idx = 0; idx < 8; idx++) {
    outC->_L56[idx] = outC->_L55;
  }
  kcg_copy_P011_TM_TrainToTrack(&outC->_L7, P011);
  /* _L15=(TM_TrainToTrack::C_P011_train_compr#1)/ */
  C_P011_train_compr_TM_TrainToTrack(
    &outC->_L7,
    &outC->Context_C_P011_train_compr_1);
  kcg_copy_P011_TrainTrack_int_TM_TrainToTrack(
    &outC->_L15,
    &outC->Context_C_P011_train_compr_1.P011_int);
  kcg_copy_P001_TM_TrainToTrack(&outC->_L6, P001);
  /* _L13=(TM_TrainToTrack::C_P001_train_compr#1)/ */
  C_P001_train_compr_TM_TrainToTrack(
    &outC->_L6,
    &outC->Context_C_P001_train_compr_1);
  kcg_copy_P001_TrainTrack_int_TM_TrainToTrack(
    &outC->_L13,
    &outC->Context_C_P001_train_compr_1.P001_int);
  kcg_copy_P000_TM_TrainToTrack(&outC->_L5, P000);
  /* _L11=(TM_TrainToTrack::C_P000_train_compr#1)/ */
  C_P000_train_compr_TM_TrainToTrack(
    &outC->_L5,
    &outC->Context_C_P000_train_compr_1);
  kcg_copy_P000_TrainTrack_int_TM_TrainToTrack(
    &outC->_L11,
    &outC->Context_C_P000_train_compr_1.P000_int);
  outC->_L48 = outC->_L5.valid;
  /* _L51= */
  if (outC->_L48) {
    kcg_copy_P000_TrainTrack_int_TM_TrainToTrack(&outC->_L51, &outC->_L11);
  }
  else {
    kcg_copy_P000_TrainTrack_int_TM_TrainToTrack(&outC->_L51, &outC->_L13);
  }
  kcg_copy_P000_TrainTrack_int_TM_TrainToTrack(&outC->_L53[0], &outC->_L51);
  kcg_copy_P011_TrainTrack_int_TM_TrainToTrack(&outC->_L53[17], &outC->_L15);
  kcg_copy_array_int32_42(&outC->_L54[0], &outC->_L53);
  kcg_copy_array_int32_8(&outC->_L54[42], &outC->_L56);
  kcg_copy_M_129_T_TM_radio_messages(&outC->_L62, Message_129_in);
  /* _L60=(TM_RBC_conversions::C_M129_to_header#2)/ */
  C_M129_to_header_TM_RBC_conversions(
    &outC->_L62,
    &outC->Context_C_M129_to_header_2);
  kcg_copy_M_TrainTrack_MessageHd_T_TM_radio_messages(
    &outC->_L60,
    &outC->Context_C_M129_to_header_2.Message_Header_Out);
  /* _L65=(TM_TrainToTrack::Merge_PacketsToMessage#1)/ */
  Merge_PacketsToMessage_TM_TrainToTrack(
    &outC->_L54,
    &outC->_L60,
    &outC->Context_Merge_PacketsToMessage_1);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->_L65,
    &outC->Context_Merge_PacketsToMessage_1.RadioMessage);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&outC->_L63, MessageBus);
  /* _L93=(TM_TrainTrack_Bus::CheckSpace#1)/ */
  CheckSpace_TM_TrainTrack_Bus(&outC->_L63, &outC->Context_CheckSpace_1);
  outC->_L93 = outC->Context_CheckSpace_1.Busy;
  outC->_L94 = outC->Context_CheckSpace_1.SlotsUsed;
  outC->_L98 = !outC->_L93;
  /* _L67=(TM_lib_internal::BufferMsg#1)/ */
  BufferMsg_TM_lib_internal(
    &outC->_L65,
    outC->_L98,
    &outC->Context_BufferMsg_1);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->_L67,
    &outC->Context_BufferMsg_1.Out);
  outC->_L59 = t_train_global;
  /* _L97=(TM_TrainTrack_Bus::MergeMessageToBus#1)/ */
  MergeMessageToBus_TM_TrainTrack_Bus(
    &outC->_L67,
    outC->_L94,
    &outC->_L63,
    outC->_L59,
    &outC->Context_MergeMessageToBus_1);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->_L97,
    &outC->Context_MergeMessageToBus_1.MessageBus_out);
  outC->_L100 = outC->Context_MergeMessageToBus_1.t_train_assigned;
  outC->t_train_assigned = outC->_L100;
  outC->_L64 = m_version;
  _1_noname = outC->_L64;
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->MessageBus_out,
    &outC->_L97);
  outC->_L49 = outC->_L6.valid;
  outC->_L50 = outC->_L49 & outC->_L48;
  noname = outC->_L50;
}

#ifndef KCG_USER_DEFINED_INIT
void Send_M129_init_TM_radio_messages(outC_Send_M129_TM_radio_messages *outC)
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

  outC->_L100 = kcg_lit_int32(0);
  outC->_L93 = kcg_true;
  outC->_L94 = kcg_lit_int32(0);
  outC->_L98 = kcg_true;
  outC->_L67.Message.valid = kcg_true;
  outC->_L67.Message.nid_message = kcg_lit_int32(0);
  outC->_L67.Message.l_message = kcg_lit_int32(0);
  outC->_L67.Message.t_train = kcg_lit_int32(0);
  outC->_L67.Message.nid_engine = kcg_lit_int32(0);
  outC->_L67.Message.field1 = kcg_lit_int32(0);
  outC->_L67.Message.field2 = kcg_lit_int32(0);
  outC->_L67.Message.field3 = kcg_lit_int32(0);
  for (idx = 0; idx < 50; idx++) {
    outC->_L67.OptionalPackets[idx] = kcg_lit_int32(0);
  }
  for (idx2 = 0; idx2 < 5; idx2++) {
    outC->_L97[idx2].Message.valid = kcg_true;
    outC->_L97[idx2].Message.nid_message = kcg_lit_int32(0);
    outC->_L97[idx2].Message.l_message = kcg_lit_int32(0);
    outC->_L97[idx2].Message.t_train = kcg_lit_int32(0);
    outC->_L97[idx2].Message.nid_engine = kcg_lit_int32(0);
    outC->_L97[idx2].Message.field1 = kcg_lit_int32(0);
    outC->_L97[idx2].Message.field2 = kcg_lit_int32(0);
    outC->_L97[idx2].Message.field3 = kcg_lit_int32(0);
    for (idx1 = 0; idx1 < 50; idx1++) {
      outC->_L97[idx2].OptionalPackets[idx1] = kcg_lit_int32(0);
    }
  }
  outC->_L65.Message.valid = kcg_true;
  outC->_L65.Message.nid_message = kcg_lit_int32(0);
  outC->_L65.Message.l_message = kcg_lit_int32(0);
  outC->_L65.Message.t_train = kcg_lit_int32(0);
  outC->_L65.Message.nid_engine = kcg_lit_int32(0);
  outC->_L65.Message.field1 = kcg_lit_int32(0);
  outC->_L65.Message.field2 = kcg_lit_int32(0);
  outC->_L65.Message.field3 = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 50; idx3++) {
    outC->_L65.OptionalPackets[idx3] = kcg_lit_int32(0);
  }
  outC->_L59 = kcg_lit_int32(0);
  outC->_L60.valid = kcg_true;
  outC->_L60.nid_message = kcg_lit_int32(0);
  outC->_L60.l_message = kcg_lit_int32(0);
  outC->_L60.t_train = kcg_lit_int32(0);
  outC->_L60.nid_engine = kcg_lit_int32(0);
  outC->_L60.field1 = kcg_lit_int32(0);
  outC->_L60.field2 = kcg_lit_int32(0);
  outC->_L60.field3 = kcg_lit_int32(0);
  outC->_L62.valid = kcg_true;
  outC->_L62.nid_message = kcg_lit_int32(0);
  outC->_L62.l_message = kcg_lit_int32(0);
  outC->_L62.t_train = kcg_lit_int32(0);
  outC->_L62.nid_engine = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 5; idx5++) {
    outC->_L63[idx5].Message.valid = kcg_true;
    outC->_L63[idx5].Message.nid_message = kcg_lit_int32(0);
    outC->_L63[idx5].Message.l_message = kcg_lit_int32(0);
    outC->_L63[idx5].Message.t_train = kcg_lit_int32(0);
    outC->_L63[idx5].Message.nid_engine = kcg_lit_int32(0);
    outC->_L63[idx5].Message.field1 = kcg_lit_int32(0);
    outC->_L63[idx5].Message.field2 = kcg_lit_int32(0);
    outC->_L63[idx5].Message.field3 = kcg_lit_int32(0);
    for (idx4 = 0; idx4 < 50; idx4++) {
      outC->_L63[idx5].OptionalPackets[idx4] = kcg_lit_int32(0);
    }
  }
  outC->_L64 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx6 = 0; idx6 < 8; idx6++) {
    outC->_L56[idx6] = kcg_lit_int32(0);
  }
  outC->_L55 = kcg_lit_int32(0);
  for (idx7 = 0; idx7 < 50; idx7++) {
    outC->_L54[idx7] = kcg_lit_int32(0);
  }
  for (idx8 = 0; idx8 < 42; idx8++) {
    outC->_L53[idx8] = kcg_lit_int32(0);
  }
  for (idx9 = 0; idx9 < 17; idx9++) {
    outC->_L51[idx9] = kcg_lit_int32(0);
  }
  outC->_L50 = kcg_true;
  outC->_L49 = kcg_true;
  outC->_L48 = kcg_true;
  for (idx10 = 0; idx10 < 25; idx10++) {
    outC->_L15[idx10] = kcg_lit_int32(0);
  }
  for (idx11 = 0; idx11 < 17; idx11++) {
    outC->_L13[idx11] = kcg_lit_int32(0);
  }
  for (idx12 = 0; idx12 < 17; idx12++) {
    outC->_L11[idx12] = kcg_lit_int32(0);
  }
  outC->_L7.valid = kcg_true;
  outC->_L7.nid_packet = kcg_lit_int32(0);
  outC->_L7.l_packet = kcg_lit_int32(0);
  outC->_L7.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L7.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L7.l_train = kcg_lit_int32(0);
  outC->_L7.v_maxtrain = kcg_lit_int32(0);
  outC->_L7.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L7.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L7.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L7.n_axle = kcg_lit_int32(0);
  outC->_L7.n_iter_voltage = kcg_lit_int32(0);
  for (idx13 = 0; idx13 < 4; idx13++) {
    outC->_L7.voltage_list[idx13].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L7.voltage_list[idx13].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L7.n_iter_nid_ntc = kcg_lit_int32(0);
  for (idx14 = 0; idx14 < 5; idx14++) {
    outC->_L7.nid_ntc_list[idx14] = kcg_lit_int32(0);
  }
  outC->_L6.valid = kcg_true;
  outC->_L6.nid_packet = kcg_lit_int32(0);
  outC->_L6.l_packet = kcg_lit_int32(0);
  outC->_L6.q_scale = Q_SCALE_10_cm_scale;
  outC->_L6.nid_lrbg = kcg_lit_int32(0);
  outC->_L6.nid_prvlrbg = kcg_lit_int32(0);
  outC->_L6.d_lrbg = kcg_lit_int32(0);
  outC->_L6.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L6.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L6.l_doubtover = kcg_lit_int32(0);
  outC->_L6.l_doubtunder = kcg_lit_int32(0);
  outC->_L6.q_length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L6.l_trainint = kcg_lit_int32(0);
  outC->_L6.v_train = kcg_lit_int32(0);
  outC->_L6.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L6.m_mode = M_MODE_Full_Supervision;
  outC->_L6.m_level = M_LEVEL_Level_0;
  outC->_L6.nid_ntc = kcg_lit_int32(0);
  outC->_L5.valid = kcg_true;
  outC->_L5.nid_packet = kcg_lit_int32(0);
  outC->_L5.l_packet = kcg_lit_int32(0);
  outC->_L5.q_scale = Q_SCALE_10_cm_scale;
  outC->_L5.nid_lrbg = kcg_lit_int32(0);
  outC->_L5.d_lrbg = kcg_lit_int32(0);
  outC->_L5.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L5.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L5.l_doubtover = kcg_lit_int32(0);
  outC->_L5.l_doubtunder = kcg_lit_int32(0);
  outC->_L5.q_length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L5.l_trainint = kcg_lit_int32(0);
  outC->_L5.v_train = kcg_lit_int32(0);
  outC->_L5.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L5.m_mode = M_MODE_Full_Supervision;
  outC->_L5.m_level = M_LEVEL_Level_0;
  outC->_L5.nid_ntc = kcg_lit_int32(0);
  outC->t_train_assigned = kcg_lit_int32(0);
  for (idx16 = 0; idx16 < 5; idx16++) {
    outC->MessageBus_out[idx16].Message.valid = kcg_true;
    outC->MessageBus_out[idx16].Message.nid_message = kcg_lit_int32(0);
    outC->MessageBus_out[idx16].Message.l_message = kcg_lit_int32(0);
    outC->MessageBus_out[idx16].Message.t_train = kcg_lit_int32(0);
    outC->MessageBus_out[idx16].Message.nid_engine = kcg_lit_int32(0);
    outC->MessageBus_out[idx16].Message.field1 = kcg_lit_int32(0);
    outC->MessageBus_out[idx16].Message.field2 = kcg_lit_int32(0);
    outC->MessageBus_out[idx16].Message.field3 = kcg_lit_int32(0);
    for (idx15 = 0; idx15 < 50; idx15++) {
      outC->MessageBus_out[idx16].OptionalPackets[idx15] = kcg_lit_int32(0);
    }
  }
  /* _L97=(TM_TrainTrack_Bus::MergeMessageToBus#1)/ */
  MergeMessageToBus_init_TM_TrainTrack_Bus(&outC->Context_MergeMessageToBus_1);
  /* _L67=(TM_lib_internal::BufferMsg#1)/ */
  BufferMsg_init_TM_lib_internal(&outC->Context_BufferMsg_1);
  /* _L93=(TM_TrainTrack_Bus::CheckSpace#1)/ */
  CheckSpace_init_TM_TrainTrack_Bus(&outC->Context_CheckSpace_1);
  /* _L65=(TM_TrainToTrack::Merge_PacketsToMessage#1)/ */
  Merge_PacketsToMessage_init_TM_TrainToTrack(
    &outC->Context_Merge_PacketsToMessage_1);
  /* _L60=(TM_RBC_conversions::C_M129_to_header#2)/ */
  C_M129_to_header_init_TM_RBC_conversions(&outC->Context_C_M129_to_header_2);
  /* _L11=(TM_TrainToTrack::C_P000_train_compr#1)/ */
  C_P000_train_compr_init_TM_TrainToTrack(&outC->Context_C_P000_train_compr_1);
  /* _L13=(TM_TrainToTrack::C_P001_train_compr#1)/ */
  C_P001_train_compr_init_TM_TrainToTrack(&outC->Context_C_P001_train_compr_1);
  /* _L15=(TM_TrainToTrack::C_P011_train_compr#1)/ */
  C_P011_train_compr_init_TM_TrainToTrack(&outC->Context_C_P011_train_compr_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Send_M129_reset_TM_radio_messages(outC_Send_M129_TM_radio_messages *outC)
{
  /* _L97=(TM_TrainTrack_Bus::MergeMessageToBus#1)/ */
  MergeMessageToBus_reset_TM_TrainTrack_Bus(&outC->Context_MergeMessageToBus_1);
  /* _L67=(TM_lib_internal::BufferMsg#1)/ */
  BufferMsg_reset_TM_lib_internal(&outC->Context_BufferMsg_1);
  /* _L93=(TM_TrainTrack_Bus::CheckSpace#1)/ */
  CheckSpace_reset_TM_TrainTrack_Bus(&outC->Context_CheckSpace_1);
  /* _L65=(TM_TrainToTrack::Merge_PacketsToMessage#1)/ */
  Merge_PacketsToMessage_reset_TM_TrainToTrack(
    &outC->Context_Merge_PacketsToMessage_1);
  /* _L60=(TM_RBC_conversions::C_M129_to_header#2)/ */
  C_M129_to_header_reset_TM_RBC_conversions(&outC->Context_C_M129_to_header_2);
  /* _L11=(TM_TrainToTrack::C_P000_train_compr#1)/ */
  C_P000_train_compr_reset_TM_TrainToTrack(&outC->Context_C_P000_train_compr_1);
  /* _L13=(TM_TrainToTrack::C_P001_train_compr#1)/ */
  C_P001_train_compr_reset_TM_TrainToTrack(&outC->Context_C_P001_train_compr_1);
  /* _L15=(TM_TrainToTrack::C_P011_train_compr#1)/ */
  C_P011_train_compr_reset_TM_TrainToTrack(&outC->Context_C_P011_train_compr_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Send_M129_TM_radio_messages.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

