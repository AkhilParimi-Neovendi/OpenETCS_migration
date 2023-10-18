/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_M136_TM_radio_messages.h"

/* TM_radio_messages::Send_M136/ */
void Send_M136_TM_radio_messages(
  /* t_train_global/ */
  T_internal_Type_Obu_BasicTypes_Pkg t_train_global,
  /* MessageBus/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* Message_136_in/ */
  M_136_T_TM_radio_messages *Message_136_in,
  /* P000/ */
  P000_TM_TrainToTrack *P000,
  /* P001/ */
  P001_TM_TrainToTrack *P001,
  /* P004/ */
  P004_TM_TrainToTrack *P004,
  /* P005/ */
  P005_TM_TrainToTrack *P005,
  /* P044/ */
  P044_TM_TrainToTrack *P044,
  /* m_version/ */
  M_VERSION m_version,
  outC_Send_M136_TM_radio_messages *outC)
{
  static kcg_size idx;
  static kcg_bool noname;
  static M_VERSION _1_noname;

  outC->_L47 = kcg_lit_int64(0);
  /* _L46/ */
  for (idx = 0; idx < 2; idx++) {
    outC->_L46[idx] = outC->_L47;
  }
  kcg_copy_P044_TM_TrainToTrack(&outC->_L10, P044);
  /* _L23=(TM_TrainToTrack::C_P044_train_compr#1)/ */
  C_P044_train_compr_TM_TrainToTrack(
    &outC->_L10,
    &outC->Context_C_P044_train_compr_1);
  kcg_copy_P044_TrainTrack_int_TM_TrainToTrack(
    &outC->_L23,
    &outC->Context_C_P044_train_compr_1.P044_int);
  kcg_copy_P005_TM_TrainToTrack(&outC->_L9, P005);
  /* _L21=(TM_TrainToTrack::C_P005_train_compr#1)/ */
  C_P005_train_compr_TM_TrainToTrack(
    &outC->_L9,
    &outC->Context_C_P005_train_compr_1);
  kcg_copy_P005_TrainTrack_int_TM_TrainToTrack(
    &outC->_L21,
    &outC->Context_C_P005_train_compr_1.P005_int);
  kcg_copy_P004_TM_TrainToTrack(&outC->_L8, P004);
  /* _L15=(TM_TrainToTrack::C_P004_train_compr#1)/ */
  C_P004_train_compr_TM_TrainToTrack(
    &outC->_L8,
    &outC->Context_C_P004_train_compr_1);
  kcg_copy_P004_TrainTrack_int_TM_TrainToTrack(
    &outC->_L15,
    &outC->Context_C_P004_train_compr_1.P004_int);
  kcg_copy_P001_TM_TrainToTrack(&outC->_L7, P001);
  /* _L26=(TM_TrainToTrack::C_P001_train_compr#3)/ */
  C_P001_train_compr_TM_TrainToTrack(
    &outC->_L7,
    &outC->Context_C_P001_train_compr_3);
  kcg_copy_P001_TrainTrack_int_TM_TrainToTrack(
    &outC->_L26,
    &outC->Context_C_P001_train_compr_3.P001_int);
  kcg_copy_P000_TM_TrainToTrack(&outC->_L6, P000);
  /* _L30=(TM_TrainToTrack::C_P000_train_compr#3)/ */
  C_P000_train_compr_TM_TrainToTrack(
    &outC->_L6,
    &outC->Context_C_P000_train_compr_3);
  kcg_copy_P000_TrainTrack_int_TM_TrainToTrack(
    &outC->_L30,
    &outC->Context_C_P000_train_compr_3.P000_int);
  outC->_L27 = outC->_L6.valid;
  /* _L31= */
  if (outC->_L27) {
    kcg_copy_P000_TrainTrack_int_TM_TrainToTrack(&outC->_L31, &outC->_L30);
  }
  else {
    kcg_copy_P000_TrainTrack_int_TM_TrainToTrack(&outC->_L31, &outC->_L26);
  }
  kcg_copy_P000_TrainTrack_int_TM_TrainToTrack(&outC->_L48[0], &outC->_L31);
  kcg_copy_P004_TrainTrack_int_TM_TrainToTrack(&outC->_L48[17], &outC->_L15);
  kcg_copy_array_int64_20(&outC->_L45[0], &outC->_L48);
  kcg_copy_P005_TrainTrack_int_TM_TrainToTrack(&outC->_L45[20], &outC->_L21);
  kcg_copy_array_int64_23(&outC->_L50[0], &outC->_L45);
  kcg_copy_P044_TrainTrack_int_TM_TrainToTrack(&outC->_L50[23], &outC->_L23);
  kcg_copy_array_int64_48(&outC->_L49[0], &outC->_L50);
  kcg_copy_array_int64_2(&outC->_L49[48], &outC->_L46);
  kcg_copy_M_136_T_TM_radio_messages(&outC->_L33, Message_136_in);
  /* _L34=(TM_RBC_conversions::C_M136_to_header#2)/ */
  C_M136_to_header_TM_RBC_conversions(
    &outC->_L33,
    &outC->Context_C_M136_to_header_2);
  kcg_copy_M_TrainTrack_MessageHd_T_TM_radio_messages(
    &outC->_L34,
    &outC->Context_C_M136_to_header_2.Message_Header_Out);
  /* _L43=(TM_TrainToTrack::Merge_PacketsToMessage#1)/ */
  Merge_PacketsToMessage_TM_TrainToTrack(
    &outC->_L49,
    &outC->_L34,
    &outC->Context_Merge_PacketsToMessage_1);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->_L43,
    &outC->Context_Merge_PacketsToMessage_1.RadioMessage);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&outC->_L44, MessageBus);
  /* _L39=(TM_TrainTrack_Bus::CheckSpace#1)/ */
  CheckSpace_TM_TrainTrack_Bus(&outC->_L44, &outC->Context_CheckSpace_1);
  outC->_L39 = outC->Context_CheckSpace_1.Busy;
  outC->_L40 = outC->Context_CheckSpace_1.SlotsUsed;
  outC->_L51 = !outC->_L39;
  /* _L42=(TM_lib_internal::BufferMsg#1)/ */
  BufferMsg_TM_lib_internal(
    &outC->_L43,
    outC->_L51,
    &outC->Context_BufferMsg_1);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->_L42,
    &outC->Context_BufferMsg_1.Out);
  outC->_L41 = t_train_global;
  /* _L38=(TM_TrainTrack_Bus::MergeMessageToBus#1)/ */
  MergeMessageToBus_TM_TrainTrack_Bus(
    &outC->_L42,
    outC->_L40,
    &outC->_L44,
    outC->_L41,
    &outC->Context_MergeMessageToBus_1);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->_L38,
    &outC->Context_MergeMessageToBus_1.MessageBus_out);
  outC->_L52 = outC->Context_MergeMessageToBus_1.t_train_assigned;
  outC->t_train_assigned = outC->_L52;
  outC->_L5 = m_version;
  _1_noname = outC->_L5;
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->MessageBus_out,
    &outC->_L38);
  outC->_L28 = outC->_L7.valid;
  outC->_L24 = outC->_L28 & outC->_L27;
  noname = outC->_L24;
}

#ifndef KCG_USER_DEFINED_INIT
void Send_M136_init_TM_radio_messages(outC_Send_M136_TM_radio_messages *outC)
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

  outC->_L52 = kcg_lit_int64(0);
  outC->_L39 = kcg_true;
  outC->_L40 = kcg_lit_int64(0);
  outC->_L51 = kcg_true;
  outC->_L42.Message.valid = kcg_true;
  outC->_L42.Message.nid_message = kcg_lit_int64(0);
  outC->_L42.Message.l_message = kcg_lit_int64(0);
  outC->_L42.Message.t_train = kcg_lit_int64(0);
  outC->_L42.Message.nid_engine = kcg_lit_int64(0);
  outC->_L42.Message.field1 = kcg_lit_int64(0);
  outC->_L42.Message.field2 = kcg_lit_int64(0);
  outC->_L42.Message.field3 = kcg_lit_int64(0);
  for (idx = 0; idx < 50; idx++) {
    outC->_L42.OptionalPackets[idx] = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 50; idx1++) {
    outC->_L49[idx1] = kcg_lit_int64(0);
  }
  for (idx2 = 0; idx2 < 48; idx2++) {
    outC->_L50[idx2] = kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 23; idx3++) {
    outC->_L45[idx3] = kcg_lit_int64(0);
  }
  for (idx4 = 0; idx4 < 2; idx4++) {
    outC->_L46[idx4] = kcg_lit_int64(0);
  }
  outC->_L47 = kcg_lit_int64(0);
  for (idx5 = 0; idx5 < 20; idx5++) {
    outC->_L48[idx5] = kcg_lit_int64(0);
  }
  for (idx7 = 0; idx7 < 5; idx7++) {
    outC->_L38[idx7].Message.valid = kcg_true;
    outC->_L38[idx7].Message.nid_message = kcg_lit_int64(0);
    outC->_L38[idx7].Message.l_message = kcg_lit_int64(0);
    outC->_L38[idx7].Message.t_train = kcg_lit_int64(0);
    outC->_L38[idx7].Message.nid_engine = kcg_lit_int64(0);
    outC->_L38[idx7].Message.field1 = kcg_lit_int64(0);
    outC->_L38[idx7].Message.field2 = kcg_lit_int64(0);
    outC->_L38[idx7].Message.field3 = kcg_lit_int64(0);
    for (idx6 = 0; idx6 < 50; idx6++) {
      outC->_L38[idx7].OptionalPackets[idx6] = kcg_lit_int64(0);
    }
  }
  outC->_L41 = kcg_lit_int64(0);
  outC->_L43.Message.valid = kcg_true;
  outC->_L43.Message.nid_message = kcg_lit_int64(0);
  outC->_L43.Message.l_message = kcg_lit_int64(0);
  outC->_L43.Message.t_train = kcg_lit_int64(0);
  outC->_L43.Message.nid_engine = kcg_lit_int64(0);
  outC->_L43.Message.field1 = kcg_lit_int64(0);
  outC->_L43.Message.field2 = kcg_lit_int64(0);
  outC->_L43.Message.field3 = kcg_lit_int64(0);
  for (idx8 = 0; idx8 < 50; idx8++) {
    outC->_L43.OptionalPackets[idx8] = kcg_lit_int64(0);
  }
  for (idx10 = 0; idx10 < 5; idx10++) {
    outC->_L44[idx10].Message.valid = kcg_true;
    outC->_L44[idx10].Message.nid_message = kcg_lit_int64(0);
    outC->_L44[idx10].Message.l_message = kcg_lit_int64(0);
    outC->_L44[idx10].Message.t_train = kcg_lit_int64(0);
    outC->_L44[idx10].Message.nid_engine = kcg_lit_int64(0);
    outC->_L44[idx10].Message.field1 = kcg_lit_int64(0);
    outC->_L44[idx10].Message.field2 = kcg_lit_int64(0);
    outC->_L44[idx10].Message.field3 = kcg_lit_int64(0);
    for (idx9 = 0; idx9 < 50; idx9++) {
      outC->_L44[idx10].OptionalPackets[idx9] = kcg_lit_int64(0);
    }
  }
  outC->_L33.valid = kcg_true;
  outC->_L33.nid_message = kcg_lit_int64(0);
  outC->_L33.l_message = kcg_lit_int64(0);
  outC->_L33.t_train = kcg_lit_int64(0);
  outC->_L33.nid_engine = kcg_lit_int64(0);
  outC->_L34.valid = kcg_true;
  outC->_L34.nid_message = kcg_lit_int64(0);
  outC->_L34.l_message = kcg_lit_int64(0);
  outC->_L34.t_train = kcg_lit_int64(0);
  outC->_L34.nid_engine = kcg_lit_int64(0);
  outC->_L34.field1 = kcg_lit_int64(0);
  outC->_L34.field2 = kcg_lit_int64(0);
  outC->_L34.field3 = kcg_lit_int64(0);
  outC->_L24 = kcg_true;
  for (idx11 = 0; idx11 < 17; idx11++) {
    outC->_L26[idx11] = kcg_lit_int64(0);
  }
  outC->_L27 = kcg_true;
  outC->_L28 = kcg_true;
  for (idx12 = 0; idx12 < 17; idx12++) {
    outC->_L30[idx12] = kcg_lit_int64(0);
  }
  for (idx13 = 0; idx13 < 17; idx13++) {
    outC->_L31[idx13] = kcg_lit_int64(0);
  }
  for (idx14 = 0; idx14 < 3; idx14++) {
    outC->_L21[idx14] = kcg_lit_int64(0);
  }
  for (idx15 = 0; idx15 < 25; idx15++) {
    outC->_L23[idx15] = kcg_lit_int64(0);
  }
  for (idx16 = 0; idx16 < 3; idx16++) {
    outC->_L15[idx16] = kcg_lit_int64(0);
  }
  outC->_L10.valid = kcg_true;
  outC->_L10.nid_packet = kcg_lit_int64(0);
  outC->_L10.l_packet = kcg_lit_int64(0);
  outC->_L10.nid_xuser = kcg_lit_int64(0);
  for (idx17 = 0; idx17 < 1; idx17++) {
    outC->_L10.external_data[idx17] = kcg_lit_int64(0);
  }
  outC->_L9.valid = kcg_true;
  outC->_L9.nid_packet = kcg_lit_int64(0);
  outC->_L9.l_packet = kcg_lit_int64(0);
  outC->_L9.nid_opeartional = kcg_lit_int64(0);
  outC->_L8.valid = kcg_true;
  outC->_L8.nid_packet = kcg_lit_int64(0);
  outC->_L8.l_packet = kcg_lit_int64(0);
  outC->_L8.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L7.valid = kcg_true;
  outC->_L7.nid_packet = kcg_lit_int64(0);
  outC->_L7.l_packet = kcg_lit_int64(0);
  outC->_L7.q_scale = Q_SCALE_10_cm_scale;
  outC->_L7.nid_lrbg = kcg_lit_int64(0);
  outC->_L7.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L7.d_lrbg = kcg_lit_int64(0);
  outC->_L7.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L7.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L7.l_doubtover = kcg_lit_int64(0);
  outC->_L7.l_doubtunder = kcg_lit_int64(0);
  outC->_L7.q_length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L7.l_trainint = kcg_lit_int64(0);
  outC->_L7.v_train = kcg_lit_int64(0);
  outC->_L7.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L7.m_mode = M_MODE_Full_Supervision;
  outC->_L7.m_level = M_LEVEL_Level_0;
  outC->_L7.nid_ntc = kcg_lit_int64(0);
  outC->_L6.valid = kcg_true;
  outC->_L6.nid_packet = kcg_lit_int64(0);
  outC->_L6.l_packet = kcg_lit_int64(0);
  outC->_L6.q_scale = Q_SCALE_10_cm_scale;
  outC->_L6.nid_lrbg = kcg_lit_int64(0);
  outC->_L6.d_lrbg = kcg_lit_int64(0);
  outC->_L6.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L6.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L6.l_doubtover = kcg_lit_int64(0);
  outC->_L6.l_doubtunder = kcg_lit_int64(0);
  outC->_L6.q_length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L6.l_trainint = kcg_lit_int64(0);
  outC->_L6.v_train = kcg_lit_int64(0);
  outC->_L6.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L6.m_mode = M_MODE_Full_Supervision;
  outC->_L6.m_level = M_LEVEL_Level_0;
  outC->_L6.nid_ntc = kcg_lit_int64(0);
  outC->_L5 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->t_train_assigned = kcg_lit_int64(0);
  for (idx19 = 0; idx19 < 5; idx19++) {
    outC->MessageBus_out[idx19].Message.valid = kcg_true;
    outC->MessageBus_out[idx19].Message.nid_message = kcg_lit_int64(0);
    outC->MessageBus_out[idx19].Message.l_message = kcg_lit_int64(0);
    outC->MessageBus_out[idx19].Message.t_train = kcg_lit_int64(0);
    outC->MessageBus_out[idx19].Message.nid_engine = kcg_lit_int64(0);
    outC->MessageBus_out[idx19].Message.field1 = kcg_lit_int64(0);
    outC->MessageBus_out[idx19].Message.field2 = kcg_lit_int64(0);
    outC->MessageBus_out[idx19].Message.field3 = kcg_lit_int64(0);
    for (idx18 = 0; idx18 < 50; idx18++) {
      outC->MessageBus_out[idx19].OptionalPackets[idx18] = kcg_lit_int64(0);
    }
  }
  /* _L38=(TM_TrainTrack_Bus::MergeMessageToBus#1)/ */
  MergeMessageToBus_init_TM_TrainTrack_Bus(&outC->Context_MergeMessageToBus_1);
  /* _L42=(TM_lib_internal::BufferMsg#1)/ */
  BufferMsg_init_TM_lib_internal(&outC->Context_BufferMsg_1);
  /* _L39=(TM_TrainTrack_Bus::CheckSpace#1)/ */
  CheckSpace_init_TM_TrainTrack_Bus(&outC->Context_CheckSpace_1);
  /* _L43=(TM_TrainToTrack::Merge_PacketsToMessage#1)/ */
  Merge_PacketsToMessage_init_TM_TrainToTrack(
    &outC->Context_Merge_PacketsToMessage_1);
  /* _L34=(TM_RBC_conversions::C_M136_to_header#2)/ */
  C_M136_to_header_init_TM_RBC_conversions(&outC->Context_C_M136_to_header_2);
  /* _L30=(TM_TrainToTrack::C_P000_train_compr#3)/ */
  C_P000_train_compr_init_TM_TrainToTrack(&outC->Context_C_P000_train_compr_3);
  /* _L26=(TM_TrainToTrack::C_P001_train_compr#3)/ */
  C_P001_train_compr_init_TM_TrainToTrack(&outC->Context_C_P001_train_compr_3);
  /* _L15=(TM_TrainToTrack::C_P004_train_compr#1)/ */
  C_P004_train_compr_init_TM_TrainToTrack(&outC->Context_C_P004_train_compr_1);
  /* _L21=(TM_TrainToTrack::C_P005_train_compr#1)/ */
  C_P005_train_compr_init_TM_TrainToTrack(&outC->Context_C_P005_train_compr_1);
  /* _L23=(TM_TrainToTrack::C_P044_train_compr#1)/ */
  C_P044_train_compr_init_TM_TrainToTrack(&outC->Context_C_P044_train_compr_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Send_M136_reset_TM_radio_messages(outC_Send_M136_TM_radio_messages *outC)
{
  /* _L38=(TM_TrainTrack_Bus::MergeMessageToBus#1)/ */
  MergeMessageToBus_reset_TM_TrainTrack_Bus(&outC->Context_MergeMessageToBus_1);
  /* _L42=(TM_lib_internal::BufferMsg#1)/ */
  BufferMsg_reset_TM_lib_internal(&outC->Context_BufferMsg_1);
  /* _L39=(TM_TrainTrack_Bus::CheckSpace#1)/ */
  CheckSpace_reset_TM_TrainTrack_Bus(&outC->Context_CheckSpace_1);
  /* _L43=(TM_TrainToTrack::Merge_PacketsToMessage#1)/ */
  Merge_PacketsToMessage_reset_TM_TrainToTrack(
    &outC->Context_Merge_PacketsToMessage_1);
  /* _L34=(TM_RBC_conversions::C_M136_to_header#2)/ */
  C_M136_to_header_reset_TM_RBC_conversions(&outC->Context_C_M136_to_header_2);
  /* _L30=(TM_TrainToTrack::C_P000_train_compr#3)/ */
  C_P000_train_compr_reset_TM_TrainToTrack(&outC->Context_C_P000_train_compr_3);
  /* _L26=(TM_TrainToTrack::C_P001_train_compr#3)/ */
  C_P001_train_compr_reset_TM_TrainToTrack(&outC->Context_C_P001_train_compr_3);
  /* _L15=(TM_TrainToTrack::C_P004_train_compr#1)/ */
  C_P004_train_compr_reset_TM_TrainToTrack(&outC->Context_C_P004_train_compr_1);
  /* _L21=(TM_TrainToTrack::C_P005_train_compr#1)/ */
  C_P005_train_compr_reset_TM_TrainToTrack(&outC->Context_C_P005_train_compr_1);
  /* _L23=(TM_TrainToTrack::C_P044_train_compr#1)/ */
  C_P044_train_compr_reset_TM_TrainToTrack(&outC->Context_C_P044_train_compr_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Send_M136_TM_radio_messages.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

