/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_M147_TM_radio_messages.h"

/* TM_radio_messages::Send_M147/ */
void Send_M147_TM_radio_messages(
  /* t_train_global/ */
  T_internal_Type_Obu_BasicTypes_Pkg t_train_global,
  /* MessageBus/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* Message_147_in/ */
  M_147_T_TM_radio_messages *Message_147_in,
  /* P000/ */
  P000_TM_TrainToTrack *P000,
  /* P001/ */
  P001_TM_TrainToTrack *P001,
  /* m_version/ */
  M_VERSION m_version,
  outC_Send_M147_TM_radio_messages *outC)
{
  static kcg_size idx;
  static M_VERSION noname;
  static kcg_bool _1_noname;

  outC->_L93 = kcg_lit_int32(0);
  /* _L86/ */
  for (idx = 0; idx < 33; idx++) {
    outC->_L86[idx] = outC->_L93;
  }
  kcg_copy_P001_TM_TrainToTrack(&outC->_L96, P001);
  /* _L84=(TM_TrainToTrack::C_P001_train_compr#6)/ */
  C_P001_train_compr_TM_TrainToTrack(
    &outC->_L96,
    &outC->Context_C_P001_train_compr_6);
  kcg_copy_P001_TrainTrack_int_TM_TrainToTrack(
    &outC->_L84,
    &outC->Context_C_P001_train_compr_6.P001_int);
  kcg_copy_P000_TM_TrainToTrack(&outC->_L95, P000);
  /* _L83=(TM_TrainToTrack::C_P000_train_compr#6)/ */
  C_P000_train_compr_TM_TrainToTrack(
    &outC->_L95,
    &outC->Context_C_P000_train_compr_6);
  kcg_copy_P000_TrainTrack_int_TM_TrainToTrack(
    &outC->_L83,
    &outC->Context_C_P000_train_compr_6.P000_int);
  outC->_L87 = outC->_L95.valid;
  /* _L90= */
  if (outC->_L87) {
    kcg_copy_P000_TrainTrack_int_TM_TrainToTrack(&outC->_L90, &outC->_L83);
  }
  else {
    kcg_copy_P000_TrainTrack_int_TM_TrainToTrack(&outC->_L90, &outC->_L84);
  }
  kcg_copy_P000_TrainTrack_int_TM_TrainToTrack(&outC->_L92[0], &outC->_L90);
  kcg_copy_array_int32_33(&outC->_L92[17], &outC->_L86);
  kcg_copy_M_147_T_TM_radio_messages(&outC->_L2, Message_147_in);
  /* _L1=(TM_RBC_conversions::C_M147_to_header#1)/ */
  C_M147_to_header_TM_RBC_conversions(
    &outC->_L2,
    &outC->Context_C_M147_to_header_1);
  kcg_copy_M_TrainTrack_MessageHd_T_TM_radio_messages(
    &outC->_L1,
    &outC->Context_C_M147_to_header_1.Message_Header_Out);
  /* _L102=(TM_TrainToTrack::Merge_PacketsToMessage#1)/ */
  Merge_PacketsToMessage_TM_TrainToTrack(
    &outC->_L92,
    &outC->_L1,
    &outC->Context_Merge_PacketsToMessage_1);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->_L102,
    &outC->Context_Merge_PacketsToMessage_1.RadioMessage);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&outC->_L104, MessageBus);
  /* _L98=(TM_TrainTrack_Bus::CheckSpace#1)/ */
  CheckSpace_TM_TrainTrack_Bus(&outC->_L104, &outC->Context_CheckSpace_1);
  outC->_L98 = outC->Context_CheckSpace_1.Busy;
  outC->_L99 = outC->Context_CheckSpace_1.SlotsUsed;
  outC->_L105 = !outC->_L98;
  /* _L103=(TM_lib_internal::BufferMsg#1)/ */
  BufferMsg_TM_lib_internal(
    &outC->_L102,
    outC->_L105,
    &outC->Context_BufferMsg_1);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->_L103,
    &outC->Context_BufferMsg_1.Out);
  outC->_L101 = t_train_global;
  /* _L100=(TM_TrainTrack_Bus::MergeMessageToBus#1)/ */
  MergeMessageToBus_TM_TrainTrack_Bus(
    &outC->_L103,
    outC->_L99,
    &outC->_L104,
    outC->_L101,
    &outC->Context_MergeMessageToBus_1);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->_L100,
    &outC->Context_MergeMessageToBus_1.MessageBus_out);
  outC->_L106 = outC->Context_MergeMessageToBus_1.t_train_assigned;
  outC->t_train_assigned = outC->_L106;
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->MessageBus_out,
    &outC->_L100);
  outC->_L94 = m_version;
  outC->_L88 = outC->_L96.valid;
  outC->_L89 = outC->_L88 & outC->_L87;
  _1_noname = outC->_L89;
  noname = outC->_L94;
}

#ifndef KCG_USER_DEFINED_INIT
void Send_M147_init_TM_radio_messages(outC_Send_M147_TM_radio_messages *outC)
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

  outC->_L106 = kcg_lit_int32(0);
  outC->_L98 = kcg_true;
  outC->_L99 = kcg_lit_int32(0);
  outC->_L105 = kcg_true;
  outC->_L103.Message.valid = kcg_true;
  outC->_L103.Message.nid_message = kcg_lit_int32(0);
  outC->_L103.Message.l_message = kcg_lit_int32(0);
  outC->_L103.Message.t_train = kcg_lit_int32(0);
  outC->_L103.Message.nid_engine = kcg_lit_int32(0);
  outC->_L103.Message.field1 = kcg_lit_int32(0);
  outC->_L103.Message.field2 = kcg_lit_int32(0);
  outC->_L103.Message.field3 = kcg_lit_int32(0);
  for (idx = 0; idx < 50; idx++) {
    outC->_L103.OptionalPackets[idx] = kcg_lit_int32(0);
  }
  for (idx2 = 0; idx2 < 5; idx2++) {
    outC->_L100[idx2].Message.valid = kcg_true;
    outC->_L100[idx2].Message.nid_message = kcg_lit_int32(0);
    outC->_L100[idx2].Message.l_message = kcg_lit_int32(0);
    outC->_L100[idx2].Message.t_train = kcg_lit_int32(0);
    outC->_L100[idx2].Message.nid_engine = kcg_lit_int32(0);
    outC->_L100[idx2].Message.field1 = kcg_lit_int32(0);
    outC->_L100[idx2].Message.field2 = kcg_lit_int32(0);
    outC->_L100[idx2].Message.field3 = kcg_lit_int32(0);
    for (idx1 = 0; idx1 < 50; idx1++) {
      outC->_L100[idx2].OptionalPackets[idx1] = kcg_lit_int32(0);
    }
  }
  outC->_L101 = kcg_lit_int32(0);
  outC->_L102.Message.valid = kcg_true;
  outC->_L102.Message.nid_message = kcg_lit_int32(0);
  outC->_L102.Message.l_message = kcg_lit_int32(0);
  outC->_L102.Message.t_train = kcg_lit_int32(0);
  outC->_L102.Message.nid_engine = kcg_lit_int32(0);
  outC->_L102.Message.field1 = kcg_lit_int32(0);
  outC->_L102.Message.field2 = kcg_lit_int32(0);
  outC->_L102.Message.field3 = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 50; idx3++) {
    outC->_L102.OptionalPackets[idx3] = kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 5; idx5++) {
    outC->_L104[idx5].Message.valid = kcg_true;
    outC->_L104[idx5].Message.nid_message = kcg_lit_int32(0);
    outC->_L104[idx5].Message.l_message = kcg_lit_int32(0);
    outC->_L104[idx5].Message.t_train = kcg_lit_int32(0);
    outC->_L104[idx5].Message.nid_engine = kcg_lit_int32(0);
    outC->_L104[idx5].Message.field1 = kcg_lit_int32(0);
    outC->_L104[idx5].Message.field2 = kcg_lit_int32(0);
    outC->_L104[idx5].Message.field3 = kcg_lit_int32(0);
    for (idx4 = 0; idx4 < 50; idx4++) {
      outC->_L104[idx5].OptionalPackets[idx4] = kcg_lit_int32(0);
    }
  }
  for (idx6 = 0; idx6 < 17; idx6++) {
    outC->_L83[idx6] = kcg_lit_int32(0);
  }
  for (idx7 = 0; idx7 < 17; idx7++) {
    outC->_L84[idx7] = kcg_lit_int32(0);
  }
  for (idx8 = 0; idx8 < 33; idx8++) {
    outC->_L86[idx8] = kcg_lit_int32(0);
  }
  outC->_L87 = kcg_true;
  outC->_L88 = kcg_true;
  outC->_L89 = kcg_true;
  for (idx9 = 0; idx9 < 17; idx9++) {
    outC->_L90[idx9] = kcg_lit_int32(0);
  }
  for (idx10 = 0; idx10 < 50; idx10++) {
    outC->_L92[idx10] = kcg_lit_int32(0);
  }
  outC->_L93 = kcg_lit_int32(0);
  outC->_L94 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L95.valid = kcg_true;
  outC->_L95.nid_packet = kcg_lit_int32(0);
  outC->_L95.l_packet = kcg_lit_int32(0);
  outC->_L95.q_scale = Q_SCALE_10_cm_scale;
  outC->_L95.nid_lrbg = kcg_lit_int32(0);
  outC->_L95.d_lrbg = kcg_lit_int32(0);
  outC->_L95.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L95.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L95.l_doubtover = kcg_lit_int32(0);
  outC->_L95.l_doubtunder = kcg_lit_int32(0);
  outC->_L95.q_length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L95.l_trainint = kcg_lit_int32(0);
  outC->_L95.v_train = kcg_lit_int32(0);
  outC->_L95.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L95.m_mode = M_MODE_Full_Supervision;
  outC->_L95.m_level = M_LEVEL_Level_0;
  outC->_L95.nid_ntc = kcg_lit_int32(0);
  outC->_L96.valid = kcg_true;
  outC->_L96.nid_packet = kcg_lit_int32(0);
  outC->_L96.l_packet = kcg_lit_int32(0);
  outC->_L96.q_scale = Q_SCALE_10_cm_scale;
  outC->_L96.nid_lrbg = kcg_lit_int32(0);
  outC->_L96.nid_prvlrbg = kcg_lit_int32(0);
  outC->_L96.d_lrbg = kcg_lit_int32(0);
  outC->_L96.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L96.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L96.l_doubtover = kcg_lit_int32(0);
  outC->_L96.l_doubtunder = kcg_lit_int32(0);
  outC->_L96.q_length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L96.l_trainint = kcg_lit_int32(0);
  outC->_L96.v_train = kcg_lit_int32(0);
  outC->_L96.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L96.m_mode = M_MODE_Full_Supervision;
  outC->_L96.m_level = M_LEVEL_Level_0;
  outC->_L96.nid_ntc = kcg_lit_int32(0);
  outC->_L2.valid = kcg_true;
  outC->_L2.nid_message = kcg_lit_int32(0);
  outC->_L2.l_message = kcg_lit_int32(0);
  outC->_L2.t_train = kcg_lit_int32(0);
  outC->_L2.nid_engine = kcg_lit_int32(0);
  outC->_L2.nid_em = kcg_lit_int32(0);
  outC->_L2.q_emergencystop =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L1.valid = kcg_true;
  outC->_L1.nid_message = kcg_lit_int32(0);
  outC->_L1.l_message = kcg_lit_int32(0);
  outC->_L1.t_train = kcg_lit_int32(0);
  outC->_L1.nid_engine = kcg_lit_int32(0);
  outC->_L1.field1 = kcg_lit_int32(0);
  outC->_L1.field2 = kcg_lit_int32(0);
  outC->_L1.field3 = kcg_lit_int32(0);
  outC->t_train_assigned = kcg_lit_int32(0);
  for (idx12 = 0; idx12 < 5; idx12++) {
    outC->MessageBus_out[idx12].Message.valid = kcg_true;
    outC->MessageBus_out[idx12].Message.nid_message = kcg_lit_int32(0);
    outC->MessageBus_out[idx12].Message.l_message = kcg_lit_int32(0);
    outC->MessageBus_out[idx12].Message.t_train = kcg_lit_int32(0);
    outC->MessageBus_out[idx12].Message.nid_engine = kcg_lit_int32(0);
    outC->MessageBus_out[idx12].Message.field1 = kcg_lit_int32(0);
    outC->MessageBus_out[idx12].Message.field2 = kcg_lit_int32(0);
    outC->MessageBus_out[idx12].Message.field3 = kcg_lit_int32(0);
    for (idx11 = 0; idx11 < 50; idx11++) {
      outC->MessageBus_out[idx12].OptionalPackets[idx11] = kcg_lit_int32(0);
    }
  }
  /* _L100=(TM_TrainTrack_Bus::MergeMessageToBus#1)/ */
  MergeMessageToBus_init_TM_TrainTrack_Bus(&outC->Context_MergeMessageToBus_1);
  /* _L103=(TM_lib_internal::BufferMsg#1)/ */
  BufferMsg_init_TM_lib_internal(&outC->Context_BufferMsg_1);
  /* _L98=(TM_TrainTrack_Bus::CheckSpace#1)/ */
  CheckSpace_init_TM_TrainTrack_Bus(&outC->Context_CheckSpace_1);
  /* _L102=(TM_TrainToTrack::Merge_PacketsToMessage#1)/ */
  Merge_PacketsToMessage_init_TM_TrainToTrack(
    &outC->Context_Merge_PacketsToMessage_1);
  /* _L1=(TM_RBC_conversions::C_M147_to_header#1)/ */
  C_M147_to_header_init_TM_RBC_conversions(&outC->Context_C_M147_to_header_1);
  /* _L83=(TM_TrainToTrack::C_P000_train_compr#6)/ */
  C_P000_train_compr_init_TM_TrainToTrack(&outC->Context_C_P000_train_compr_6);
  /* _L84=(TM_TrainToTrack::C_P001_train_compr#6)/ */
  C_P001_train_compr_init_TM_TrainToTrack(&outC->Context_C_P001_train_compr_6);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Send_M147_reset_TM_radio_messages(outC_Send_M147_TM_radio_messages *outC)
{
  /* _L100=(TM_TrainTrack_Bus::MergeMessageToBus#1)/ */
  MergeMessageToBus_reset_TM_TrainTrack_Bus(&outC->Context_MergeMessageToBus_1);
  /* _L103=(TM_lib_internal::BufferMsg#1)/ */
  BufferMsg_reset_TM_lib_internal(&outC->Context_BufferMsg_1);
  /* _L98=(TM_TrainTrack_Bus::CheckSpace#1)/ */
  CheckSpace_reset_TM_TrainTrack_Bus(&outC->Context_CheckSpace_1);
  /* _L102=(TM_TrainToTrack::Merge_PacketsToMessage#1)/ */
  Merge_PacketsToMessage_reset_TM_TrainToTrack(
    &outC->Context_Merge_PacketsToMessage_1);
  /* _L1=(TM_RBC_conversions::C_M147_to_header#1)/ */
  C_M147_to_header_reset_TM_RBC_conversions(&outC->Context_C_M147_to_header_1);
  /* _L83=(TM_TrainToTrack::C_P000_train_compr#6)/ */
  C_P000_train_compr_reset_TM_TrainToTrack(&outC->Context_C_P000_train_compr_6);
  /* _L84=(TM_TrainToTrack::C_P001_train_compr#6)/ */
  C_P001_train_compr_reset_TM_TrainToTrack(&outC->Context_C_P001_train_compr_6);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Send_M147_TM_radio_messages.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

