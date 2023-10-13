/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_M132_TM_radio_messages.h"

/* TM_radio_messages::Send_M132/ */
void Send_M132_TM_radio_messages(
  /* t_train_global/ */
  T_internal_Type_Obu_BasicTypes_Pkg t_train_global,
  /* MessageBus/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* Message_132_in/ */
  M_132_T_TM_radio_messages *Message_132_in,
  /* P000/ */
  P000_TM_TrainToTrack *P000,
  /* P001/ */
  P001_TM_TrainToTrack *P001,
  /* P009/ */
  P009_TM_TrainToTrack *P009,
  /* m_version/ */
  M_VERSION m_version,
  outC_Send_M132_TM_radio_messages *outC)
{
  static kcg_size idx;
  static kcg_bool noname;
  static M_VERSION _1_noname;

  outC->_L58 = kcg_lit_int64(0);
  /* _L57/ */
  for (idx = 0; idx < 30; idx++) {
    outC->_L57[idx] = outC->_L58;
  }
  kcg_copy_P009_TM_TrainToTrack(&outC->_L9, P009);
  /* _L15=(TM_TrainToTrack::C_P009_train_compr#1)/ */
  C_P009_train_compr_TM_TrainToTrack(
    &outC->_L9,
    &outC->Context_C_P009_train_compr_1);
  kcg_copy_P009_TrainTrack_int_TM_TrainToTrack(
    &outC->_L15,
    &outC->Context_C_P009_train_compr_1.P009_int);
  kcg_copy_P001_TM_TrainToTrack(&outC->_L8, P001);
  /* _L36=(TM_TrainToTrack::C_P001_train_compr#4)/ */
  C_P001_train_compr_TM_TrainToTrack(
    &outC->_L8,
    &outC->Context_C_P001_train_compr_4);
  kcg_copy_P001_TrainTrack_int_TM_TrainToTrack(
    &outC->_L36,
    &outC->Context_C_P001_train_compr_4.P001_int);
  kcg_copy_P000_TM_TrainToTrack(&outC->_L7, P000);
  /* _L40=(TM_TrainToTrack::C_P000_train_compr#4)/ */
  C_P000_train_compr_TM_TrainToTrack(
    &outC->_L7,
    &outC->Context_C_P000_train_compr_4);
  kcg_copy_P000_TrainTrack_int_TM_TrainToTrack(
    &outC->_L40,
    &outC->Context_C_P000_train_compr_4.P000_int);
  outC->_L38 = outC->_L7.valid;
  /* _L41= */
  if (outC->_L38) {
    kcg_copy_P000_TrainTrack_int_TM_TrainToTrack(&outC->_L41, &outC->_L40);
  }
  else {
    kcg_copy_P000_TrainTrack_int_TM_TrainToTrack(&outC->_L41, &outC->_L36);
  }
  kcg_copy_P000_TrainTrack_int_TM_TrainToTrack(&outC->_L55[0], &outC->_L41);
  kcg_copy_P009_TrainTrack_int_TM_TrainToTrack(&outC->_L55[17], &outC->_L15);
  kcg_copy_array_int64_20(&outC->_L56[0], &outC->_L55);
  kcg_copy_array_int64_30(&outC->_L56[20], &outC->_L57);
  kcg_copy_M_132_T_TM_radio_messages(&outC->_L45, Message_132_in);
  /* _L44=(TM_RBC_conversions::C_M132_to_header#2)/ */
  C_M132_to_header_TM_RBC_conversions(
    &outC->_L45,
    &outC->Context_C_M132_to_header_2);
  kcg_copy_M_TrainTrack_MessageHd_T_TM_radio_messages(
    &outC->_L44,
    &outC->Context_C_M132_to_header_2.Message_Header_Out);
  /* _L50=(TM_TrainToTrack::Merge_PacketsToMessage#1)/ */
  Merge_PacketsToMessage_TM_TrainToTrack(
    &outC->_L56,
    &outC->_L44,
    &outC->Context_Merge_PacketsToMessage_1);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->_L50,
    &outC->Context_Merge_PacketsToMessage_1.RadioMessage);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&outC->_L49, MessageBus);
  /* _L53=(TM_TrainTrack_Bus::CheckSpace#1)/ */
  CheckSpace_TM_TrainTrack_Bus(&outC->_L49, &outC->Context_CheckSpace_1);
  outC->_L53 = outC->Context_CheckSpace_1.Busy;
  outC->_L54 = outC->Context_CheckSpace_1.SlotsUsed;
  outC->_L59 = !outC->_L53;
  /* _L47=(TM_lib_internal::BufferMsg#1)/ */
  BufferMsg_TM_lib_internal(
    &outC->_L50,
    outC->_L59,
    &outC->Context_BufferMsg_1);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->_L47,
    &outC->Context_BufferMsg_1.Out);
  outC->_L46 = t_train_global;
  /* _L51=(TM_TrainTrack_Bus::MergeMessageToBus#1)/ */
  MergeMessageToBus_TM_TrainTrack_Bus(
    &outC->_L47,
    outC->_L54,
    &outC->_L49,
    outC->_L46,
    &outC->Context_MergeMessageToBus_1);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->_L51,
    &outC->Context_MergeMessageToBus_1.MessageBus_out);
  outC->_L60 = outC->Context_MergeMessageToBus_1.t_train_assigned;
  outC->t_train_assigned = outC->_L60;
  outC->_L6 = m_version;
  _1_noname = outC->_L6;
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->MessageBus_out,
    &outC->_L51);
  outC->_L34 = outC->_L8.valid;
  outC->_L37 = outC->_L34 & outC->_L38;
  noname = outC->_L37;
}

#ifndef KCG_USER_DEFINED_INIT
void Send_M132_init_TM_radio_messages(outC_Send_M132_TM_radio_messages *outC)
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

  outC->_L60 = kcg_lit_int64(0);
  outC->_L53 = kcg_true;
  outC->_L54 = kcg_lit_int64(0);
  outC->_L59 = kcg_true;
  outC->_L47.Message.valid = kcg_true;
  outC->_L47.Message.nid_message = kcg_lit_int64(0);
  outC->_L47.Message.l_message = kcg_lit_int64(0);
  outC->_L47.Message.t_train = kcg_lit_int64(0);
  outC->_L47.Message.nid_engine = kcg_lit_int64(0);
  outC->_L47.Message.field1 = kcg_lit_int64(0);
  outC->_L47.Message.field2 = kcg_lit_int64(0);
  outC->_L47.Message.field3 = kcg_lit_int64(0);
  for (idx = 0; idx < 50; idx++) {
    outC->_L47.OptionalPackets[idx] = kcg_lit_int64(0);
  }
  outC->_L58 = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 20; idx1++) {
    outC->_L55[idx1] = kcg_lit_int64(0);
  }
  for (idx2 = 0; idx2 < 50; idx2++) {
    outC->_L56[idx2] = kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 30; idx3++) {
    outC->_L57[idx3] = kcg_lit_int64(0);
  }
  outC->_L46 = kcg_lit_int64(0);
  for (idx5 = 0; idx5 < 5; idx5++) {
    outC->_L49[idx5].Message.valid = kcg_true;
    outC->_L49[idx5].Message.nid_message = kcg_lit_int64(0);
    outC->_L49[idx5].Message.l_message = kcg_lit_int64(0);
    outC->_L49[idx5].Message.t_train = kcg_lit_int64(0);
    outC->_L49[idx5].Message.nid_engine = kcg_lit_int64(0);
    outC->_L49[idx5].Message.field1 = kcg_lit_int64(0);
    outC->_L49[idx5].Message.field2 = kcg_lit_int64(0);
    outC->_L49[idx5].Message.field3 = kcg_lit_int64(0);
    for (idx4 = 0; idx4 < 50; idx4++) {
      outC->_L49[idx5].OptionalPackets[idx4] = kcg_lit_int64(0);
    }
  }
  outC->_L50.Message.valid = kcg_true;
  outC->_L50.Message.nid_message = kcg_lit_int64(0);
  outC->_L50.Message.l_message = kcg_lit_int64(0);
  outC->_L50.Message.t_train = kcg_lit_int64(0);
  outC->_L50.Message.nid_engine = kcg_lit_int64(0);
  outC->_L50.Message.field1 = kcg_lit_int64(0);
  outC->_L50.Message.field2 = kcg_lit_int64(0);
  outC->_L50.Message.field3 = kcg_lit_int64(0);
  for (idx6 = 0; idx6 < 50; idx6++) {
    outC->_L50.OptionalPackets[idx6] = kcg_lit_int64(0);
  }
  for (idx8 = 0; idx8 < 5; idx8++) {
    outC->_L51[idx8].Message.valid = kcg_true;
    outC->_L51[idx8].Message.nid_message = kcg_lit_int64(0);
    outC->_L51[idx8].Message.l_message = kcg_lit_int64(0);
    outC->_L51[idx8].Message.t_train = kcg_lit_int64(0);
    outC->_L51[idx8].Message.nid_engine = kcg_lit_int64(0);
    outC->_L51[idx8].Message.field1 = kcg_lit_int64(0);
    outC->_L51[idx8].Message.field2 = kcg_lit_int64(0);
    outC->_L51[idx8].Message.field3 = kcg_lit_int64(0);
    for (idx7 = 0; idx7 < 50; idx7++) {
      outC->_L51[idx8].OptionalPackets[idx7] = kcg_lit_int64(0);
    }
  }
  outC->_L44.valid = kcg_true;
  outC->_L44.nid_message = kcg_lit_int64(0);
  outC->_L44.l_message = kcg_lit_int64(0);
  outC->_L44.t_train = kcg_lit_int64(0);
  outC->_L44.nid_engine = kcg_lit_int64(0);
  outC->_L44.field1 = kcg_lit_int64(0);
  outC->_L44.field2 = kcg_lit_int64(0);
  outC->_L44.field3 = kcg_lit_int64(0);
  outC->_L45.valid = kcg_true;
  outC->_L45.nid_message = kcg_lit_int64(0);
  outC->_L45.l_message = kcg_lit_int64(0);
  outC->_L45.t_train = kcg_lit_int64(0);
  outC->_L45.nid_engine = kcg_lit_int64(0);
  outC->_L45.q_marqstreason = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L34 = kcg_true;
  for (idx9 = 0; idx9 < 17; idx9++) {
    outC->_L36[idx9] = kcg_lit_int64(0);
  }
  outC->_L37 = kcg_true;
  outC->_L38 = kcg_true;
  for (idx10 = 0; idx10 < 17; idx10++) {
    outC->_L40[idx10] = kcg_lit_int64(0);
  }
  for (idx11 = 0; idx11 < 17; idx11++) {
    outC->_L41[idx11] = kcg_lit_int64(0);
  }
  for (idx12 = 0; idx12 < 3; idx12++) {
    outC->_L15[idx12] = kcg_lit_int64(0);
  }
  outC->_L9.valid = kcg_true;
  outC->_L9.nid_packet = kcg_lit_int64(0);
  outC->_L9.l_packet = kcg_lit_int64(0);
  outC->_L9.nid_ltrbg = kcg_lit_int64(0);
  outC->_L8.valid = kcg_true;
  outC->_L8.nid_packet = kcg_lit_int64(0);
  outC->_L8.l_packet = kcg_lit_int64(0);
  outC->_L8.q_scale = Q_SCALE_10_cm_scale;
  outC->_L8.nid_lrbg = kcg_lit_int64(0);
  outC->_L8.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L8.d_lrbg = kcg_lit_int64(0);
  outC->_L8.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L8.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L8.l_doubtover = kcg_lit_int64(0);
  outC->_L8.l_doubtunder = kcg_lit_int64(0);
  outC->_L8.q_length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L8.l_trainint = kcg_lit_int64(0);
  outC->_L8.v_train = kcg_lit_int64(0);
  outC->_L8.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L8.m_mode = M_MODE_Full_Supervision;
  outC->_L8.m_level = M_LEVEL_Level_0;
  outC->_L8.nid_ntc = kcg_lit_int64(0);
  outC->_L7.valid = kcg_true;
  outC->_L7.nid_packet = kcg_lit_int64(0);
  outC->_L7.l_packet = kcg_lit_int64(0);
  outC->_L7.q_scale = Q_SCALE_10_cm_scale;
  outC->_L7.nid_lrbg = kcg_lit_int64(0);
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
  outC->_L6 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->t_train_assigned = kcg_lit_int64(0);
  for (idx14 = 0; idx14 < 5; idx14++) {
    outC->MessageBus_out[idx14].Message.valid = kcg_true;
    outC->MessageBus_out[idx14].Message.nid_message = kcg_lit_int64(0);
    outC->MessageBus_out[idx14].Message.l_message = kcg_lit_int64(0);
    outC->MessageBus_out[idx14].Message.t_train = kcg_lit_int64(0);
    outC->MessageBus_out[idx14].Message.nid_engine = kcg_lit_int64(0);
    outC->MessageBus_out[idx14].Message.field1 = kcg_lit_int64(0);
    outC->MessageBus_out[idx14].Message.field2 = kcg_lit_int64(0);
    outC->MessageBus_out[idx14].Message.field3 = kcg_lit_int64(0);
    for (idx13 = 0; idx13 < 50; idx13++) {
      outC->MessageBus_out[idx14].OptionalPackets[idx13] = kcg_lit_int64(0);
    }
  }
  /* _L51=(TM_TrainTrack_Bus::MergeMessageToBus#1)/ */
  MergeMessageToBus_init_TM_TrainTrack_Bus(&outC->Context_MergeMessageToBus_1);
  /* _L47=(TM_lib_internal::BufferMsg#1)/ */
  BufferMsg_init_TM_lib_internal(&outC->Context_BufferMsg_1);
  /* _L53=(TM_TrainTrack_Bus::CheckSpace#1)/ */
  CheckSpace_init_TM_TrainTrack_Bus(&outC->Context_CheckSpace_1);
  /* _L50=(TM_TrainToTrack::Merge_PacketsToMessage#1)/ */
  Merge_PacketsToMessage_init_TM_TrainToTrack(
    &outC->Context_Merge_PacketsToMessage_1);
  /* _L44=(TM_RBC_conversions::C_M132_to_header#2)/ */
  C_M132_to_header_init_TM_RBC_conversions(&outC->Context_C_M132_to_header_2);
  /* _L40=(TM_TrainToTrack::C_P000_train_compr#4)/ */
  C_P000_train_compr_init_TM_TrainToTrack(&outC->Context_C_P000_train_compr_4);
  /* _L36=(TM_TrainToTrack::C_P001_train_compr#4)/ */
  C_P001_train_compr_init_TM_TrainToTrack(&outC->Context_C_P001_train_compr_4);
  /* _L15=(TM_TrainToTrack::C_P009_train_compr#1)/ */
  C_P009_train_compr_init_TM_TrainToTrack(&outC->Context_C_P009_train_compr_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Send_M132_reset_TM_radio_messages(outC_Send_M132_TM_radio_messages *outC)
{
  /* _L51=(TM_TrainTrack_Bus::MergeMessageToBus#1)/ */
  MergeMessageToBus_reset_TM_TrainTrack_Bus(&outC->Context_MergeMessageToBus_1);
  /* _L47=(TM_lib_internal::BufferMsg#1)/ */
  BufferMsg_reset_TM_lib_internal(&outC->Context_BufferMsg_1);
  /* _L53=(TM_TrainTrack_Bus::CheckSpace#1)/ */
  CheckSpace_reset_TM_TrainTrack_Bus(&outC->Context_CheckSpace_1);
  /* _L50=(TM_TrainToTrack::Merge_PacketsToMessage#1)/ */
  Merge_PacketsToMessage_reset_TM_TrainToTrack(
    &outC->Context_Merge_PacketsToMessage_1);
  /* _L44=(TM_RBC_conversions::C_M132_to_header#2)/ */
  C_M132_to_header_reset_TM_RBC_conversions(&outC->Context_C_M132_to_header_2);
  /* _L40=(TM_TrainToTrack::C_P000_train_compr#4)/ */
  C_P000_train_compr_reset_TM_TrainToTrack(&outC->Context_C_P000_train_compr_4);
  /* _L36=(TM_TrainToTrack::C_P001_train_compr#4)/ */
  C_P001_train_compr_reset_TM_TrainToTrack(&outC->Context_C_P001_train_compr_4);
  /* _L15=(TM_TrainToTrack::C_P009_train_compr#1)/ */
  C_P009_train_compr_reset_TM_TrainToTrack(&outC->Context_C_P009_train_compr_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_Send_M132_TM_radio_messages(
  SV_Send_M132_TM_radio_messages *SV,
  outC_Send_M132_TM_radio_messages *outC)
{
  kcg_save_SV_BufferMsg_TM_lib_internal(
    &SV->Context_BufferMsg_1,
    &outC->Context_BufferMsg_1);
}

void kcg_load_SV_Send_M132_TM_radio_messages(
  outC_Send_M132_TM_radio_messages *outC,
  SV_Send_M132_TM_radio_messages *SV)
{
  kcg_load_SV_BufferMsg_TM_lib_internal(
    &outC->Context_BufferMsg_1,
    &SV->Context_BufferMsg_1);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Send_M132_TM_radio_messages.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

