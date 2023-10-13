/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_M159_TM_radio_messages.h"

/* TM_radio_messages::Send_M159/ */
void Send_M159_TM_radio_messages(
  /* t_train_global/ */
  T_internal_Type_Obu_BasicTypes_Pkg t_train_global,
  /* MessageBus/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* Message_159_in/ */
  M_159_T_TM_radio_messages *Message_159_in,
  /* P003/ */
  P003_TM_TrainToTrack *P003,
  /* m_version/ */
  M_VERSION m_version,
  outC_Send_M159_TM_radio_messages *outC)
{
  static kcg_size idx;
  static M_VERSION noname;

  outC->_L10 = kcg_lit_int64(0);
  /* _L11/ */
  for (idx = 0; idx < 42; idx++) {
    outC->_L11[idx] = outC->_L10;
  }
  kcg_copy_P003_TM_TrainToTrack(&outC->_L7, P003);
  /* _L9=(TM_TrainToTrack::C_P003_train_compr#1)/ */
  C_P003_train_compr_TM_TrainToTrack(
    &outC->_L7,
    &outC->Context_C_P003_train_compr_1);
  kcg_copy_P003_TrainTrack_int_TM_TrainToTrack(
    &outC->_L9,
    &outC->Context_C_P003_train_compr_1.P003_int);
  kcg_copy_P003_TrainTrack_int_TM_TrainToTrack(&outC->_L21[0], &outC->_L9);
  kcg_copy_array_int64_42(&outC->_L21[8], &outC->_L11);
  kcg_copy_M_159_T_TM_radio_messages(&outC->_L2, Message_159_in);
  /* _L1=(TM_RBC_conversions::C_M159_to_header#1)/ */
  C_M159_to_header_TM_RBC_conversions(
    &outC->_L2,
    &outC->Context_C_M159_to_header_1);
  kcg_copy_M_TrainTrack_MessageHd_T_TM_radio_messages(
    &outC->_L1,
    &outC->Context_C_M159_to_header_1.Message_Header_Out);
  /* _L12=(TM_TrainToTrack::Merge_PacketsToMessage#1)/ */
  Merge_PacketsToMessage_TM_TrainToTrack(
    &outC->_L21,
    &outC->_L1,
    &outC->Context_Merge_PacketsToMessage_1);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->_L12,
    &outC->Context_Merge_PacketsToMessage_1.RadioMessage);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&outC->_L18, MessageBus);
  /* _L16=(TM_TrainTrack_Bus::CheckSpace#1)/ */
  CheckSpace_TM_TrainTrack_Bus(&outC->_L18, &outC->Context_CheckSpace_1);
  outC->_L16 = outC->Context_CheckSpace_1.Busy;
  outC->_L17 = outC->Context_CheckSpace_1.SlotsUsed;
  outC->_L22 = !outC->_L16;
  /* _L14=(TM_lib_internal::BufferMsg#1)/ */
  BufferMsg_TM_lib_internal(
    &outC->_L12,
    outC->_L22,
    &outC->Context_BufferMsg_1);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->_L14,
    &outC->Context_BufferMsg_1.Out);
  outC->_L15 = t_train_global;
  /* _L20=(TM_TrainTrack_Bus::MergeMessageToBus#1)/ */
  MergeMessageToBus_TM_TrainTrack_Bus(
    &outC->_L14,
    outC->_L17,
    &outC->_L18,
    outC->_L15,
    &outC->Context_MergeMessageToBus_1);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->_L20,
    &outC->Context_MergeMessageToBus_1.MessageBus_out);
  outC->_L23 = outC->Context_MergeMessageToBus_1.t_train_assigned;
  outC->t_train_assigned = outC->_L23;
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->MessageBus_out,
    &outC->_L20);
  outC->_L6 = m_version;
  noname = outC->_L6;
}

#ifndef KCG_USER_DEFINED_INIT
void Send_M159_init_TM_radio_messages(outC_Send_M159_TM_radio_messages *outC)
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

  outC->_L23 = kcg_lit_int64(0);
  outC->_L16 = kcg_true;
  outC->_L17 = kcg_lit_int64(0);
  outC->_L22 = kcg_true;
  outC->_L14.Message.valid = kcg_true;
  outC->_L14.Message.nid_message = kcg_lit_int64(0);
  outC->_L14.Message.l_message = kcg_lit_int64(0);
  outC->_L14.Message.t_train = kcg_lit_int64(0);
  outC->_L14.Message.nid_engine = kcg_lit_int64(0);
  outC->_L14.Message.field1 = kcg_lit_int64(0);
  outC->_L14.Message.field2 = kcg_lit_int64(0);
  outC->_L14.Message.field3 = kcg_lit_int64(0);
  for (idx = 0; idx < 50; idx++) {
    outC->_L14.OptionalPackets[idx] = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 50; idx1++) {
    outC->_L21[idx1] = kcg_lit_int64(0);
  }
  outC->_L12.Message.valid = kcg_true;
  outC->_L12.Message.nid_message = kcg_lit_int64(0);
  outC->_L12.Message.l_message = kcg_lit_int64(0);
  outC->_L12.Message.t_train = kcg_lit_int64(0);
  outC->_L12.Message.nid_engine = kcg_lit_int64(0);
  outC->_L12.Message.field1 = kcg_lit_int64(0);
  outC->_L12.Message.field2 = kcg_lit_int64(0);
  outC->_L12.Message.field3 = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 50; idx2++) {
    outC->_L12.OptionalPackets[idx2] = kcg_lit_int64(0);
  }
  outC->_L15 = kcg_lit_int64(0);
  for (idx4 = 0; idx4 < 5; idx4++) {
    outC->_L18[idx4].Message.valid = kcg_true;
    outC->_L18[idx4].Message.nid_message = kcg_lit_int64(0);
    outC->_L18[idx4].Message.l_message = kcg_lit_int64(0);
    outC->_L18[idx4].Message.t_train = kcg_lit_int64(0);
    outC->_L18[idx4].Message.nid_engine = kcg_lit_int64(0);
    outC->_L18[idx4].Message.field1 = kcg_lit_int64(0);
    outC->_L18[idx4].Message.field2 = kcg_lit_int64(0);
    outC->_L18[idx4].Message.field3 = kcg_lit_int64(0);
    for (idx3 = 0; idx3 < 50; idx3++) {
      outC->_L18[idx4].OptionalPackets[idx3] = kcg_lit_int64(0);
    }
  }
  for (idx6 = 0; idx6 < 5; idx6++) {
    outC->_L20[idx6].Message.valid = kcg_true;
    outC->_L20[idx6].Message.nid_message = kcg_lit_int64(0);
    outC->_L20[idx6].Message.l_message = kcg_lit_int64(0);
    outC->_L20[idx6].Message.t_train = kcg_lit_int64(0);
    outC->_L20[idx6].Message.nid_engine = kcg_lit_int64(0);
    outC->_L20[idx6].Message.field1 = kcg_lit_int64(0);
    outC->_L20[idx6].Message.field2 = kcg_lit_int64(0);
    outC->_L20[idx6].Message.field3 = kcg_lit_int64(0);
    for (idx5 = 0; idx5 < 50; idx5++) {
      outC->_L20[idx6].OptionalPackets[idx5] = kcg_lit_int64(0);
    }
  }
  outC->_L10 = kcg_lit_int64(0);
  for (idx7 = 0; idx7 < 42; idx7++) {
    outC->_L11[idx7] = kcg_lit_int64(0);
  }
  for (idx8 = 0; idx8 < 8; idx8++) {
    outC->_L9[idx8] = kcg_lit_int64(0);
  }
  outC->_L7.valid = kcg_true;
  outC->_L7.nid_packet = kcg_lit_int64(0);
  outC->_L7.l_packet = kcg_lit_int64(0);
  outC->_L7.n_iter = kcg_lit_int64(0);
  for (idx9 = 0; idx9 < 5; idx9++) {
    outC->_L7.nid_radio[idx9] = kcg_lit_int64(0);
  }
  outC->_L6 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2.valid = kcg_true;
  outC->_L2.nid_message = kcg_lit_int64(0);
  outC->_L2.l_message = kcg_lit_int64(0);
  outC->_L2.t_train = kcg_lit_int64(0);
  outC->_L2.nid_engine = kcg_lit_int64(0);
  outC->_L1.valid = kcg_true;
  outC->_L1.nid_message = kcg_lit_int64(0);
  outC->_L1.l_message = kcg_lit_int64(0);
  outC->_L1.t_train = kcg_lit_int64(0);
  outC->_L1.nid_engine = kcg_lit_int64(0);
  outC->_L1.field1 = kcg_lit_int64(0);
  outC->_L1.field2 = kcg_lit_int64(0);
  outC->_L1.field3 = kcg_lit_int64(0);
  outC->t_train_assigned = kcg_lit_int64(0);
  for (idx11 = 0; idx11 < 5; idx11++) {
    outC->MessageBus_out[idx11].Message.valid = kcg_true;
    outC->MessageBus_out[idx11].Message.nid_message = kcg_lit_int64(0);
    outC->MessageBus_out[idx11].Message.l_message = kcg_lit_int64(0);
    outC->MessageBus_out[idx11].Message.t_train = kcg_lit_int64(0);
    outC->MessageBus_out[idx11].Message.nid_engine = kcg_lit_int64(0);
    outC->MessageBus_out[idx11].Message.field1 = kcg_lit_int64(0);
    outC->MessageBus_out[idx11].Message.field2 = kcg_lit_int64(0);
    outC->MessageBus_out[idx11].Message.field3 = kcg_lit_int64(0);
    for (idx10 = 0; idx10 < 50; idx10++) {
      outC->MessageBus_out[idx11].OptionalPackets[idx10] = kcg_lit_int64(0);
    }
  }
  /* _L20=(TM_TrainTrack_Bus::MergeMessageToBus#1)/ */
  MergeMessageToBus_init_TM_TrainTrack_Bus(&outC->Context_MergeMessageToBus_1);
  /* _L14=(TM_lib_internal::BufferMsg#1)/ */
  BufferMsg_init_TM_lib_internal(&outC->Context_BufferMsg_1);
  /* _L16=(TM_TrainTrack_Bus::CheckSpace#1)/ */
  CheckSpace_init_TM_TrainTrack_Bus(&outC->Context_CheckSpace_1);
  /* _L12=(TM_TrainToTrack::Merge_PacketsToMessage#1)/ */
  Merge_PacketsToMessage_init_TM_TrainToTrack(
    &outC->Context_Merge_PacketsToMessage_1);
  /* _L1=(TM_RBC_conversions::C_M159_to_header#1)/ */
  C_M159_to_header_init_TM_RBC_conversions(&outC->Context_C_M159_to_header_1);
  /* _L9=(TM_TrainToTrack::C_P003_train_compr#1)/ */
  C_P003_train_compr_init_TM_TrainToTrack(&outC->Context_C_P003_train_compr_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Send_M159_reset_TM_radio_messages(outC_Send_M159_TM_radio_messages *outC)
{
  /* _L20=(TM_TrainTrack_Bus::MergeMessageToBus#1)/ */
  MergeMessageToBus_reset_TM_TrainTrack_Bus(&outC->Context_MergeMessageToBus_1);
  /* _L14=(TM_lib_internal::BufferMsg#1)/ */
  BufferMsg_reset_TM_lib_internal(&outC->Context_BufferMsg_1);
  /* _L16=(TM_TrainTrack_Bus::CheckSpace#1)/ */
  CheckSpace_reset_TM_TrainTrack_Bus(&outC->Context_CheckSpace_1);
  /* _L12=(TM_TrainToTrack::Merge_PacketsToMessage#1)/ */
  Merge_PacketsToMessage_reset_TM_TrainToTrack(
    &outC->Context_Merge_PacketsToMessage_1);
  /* _L1=(TM_RBC_conversions::C_M159_to_header#1)/ */
  C_M159_to_header_reset_TM_RBC_conversions(&outC->Context_C_M159_to_header_1);
  /* _L9=(TM_TrainToTrack::C_P003_train_compr#1)/ */
  C_P003_train_compr_reset_TM_TrainToTrack(&outC->Context_C_P003_train_compr_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_Send_M159_TM_radio_messages(
  SV_Send_M159_TM_radio_messages *SV,
  outC_Send_M159_TM_radio_messages *outC)
{
  kcg_save_SV_BufferMsg_TM_lib_internal(
    &SV->Context_BufferMsg_1,
    &outC->Context_BufferMsg_1);
}

void kcg_load_SV_Send_M159_TM_radio_messages(
  outC_Send_M159_TM_radio_messages *outC,
  SV_Send_M159_TM_radio_messages *SV)
{
  kcg_load_SV_BufferMsg_TM_lib_internal(
    &outC->Context_BufferMsg_1,
    &SV->Context_BufferMsg_1);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Send_M159_TM_radio_messages.c
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

