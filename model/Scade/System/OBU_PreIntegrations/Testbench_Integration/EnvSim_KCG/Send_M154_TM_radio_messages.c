/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_M154_TM_radio_messages.h"

/* TM_radio_messages::Send_M154/ */
void Send_M154_TM_radio_messages(
  /* t_train_global/ */
  T_internal_Type_Obu_BasicTypes_Pkg t_train_global,
  /* MessageBus/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* Message_154_in/ */
  M_154_T_TM_radio_messages *Message_154_in,
  /* m_version/ */
  M_VERSION m_version,
  outC_Send_M154_TM_radio_messages *outC)
{
  static kcg_size idx;
  static M_VERSION noname;

  outC->_L8 = kcg_lit_int32(0);
  /* _L7/ */
  for (idx = 0; idx < 50; idx++) {
    outC->_L7[idx] = outC->_L8;
  }
  kcg_copy_M_154_T_TM_radio_messages(&outC->_L2, Message_154_in);
  /* _L1=(TM_RBC_conversions::C_M154_to_header#1)/ */
  C_M154_to_header_TM_RBC_conversions(
    &outC->_L2,
    &outC->Context_C_M154_to_header_1);
  kcg_copy_M_TrainTrack_MessageHd_T_TM_radio_messages(
    &outC->_L1,
    &outC->Context_C_M154_to_header_1.Message_Header_Out);
  /* _L11=(TM_TrainToTrack::Merge_PacketsToMessage#1)/ */
  Merge_PacketsToMessage_TM_TrainToTrack(
    &outC->_L7,
    &outC->_L1,
    &outC->Context_Merge_PacketsToMessage_1);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->_L11,
    &outC->Context_Merge_PacketsToMessage_1.RadioMessage);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&outC->_L10, MessageBus);
  /* _L16=(TM_TrainTrack_Bus::CheckSpace#1)/ */
  CheckSpace_TM_TrainTrack_Bus(&outC->_L10, &outC->Context_CheckSpace_1);
  outC->_L16 = outC->Context_CheckSpace_1.Busy;
  outC->_L17 = outC->Context_CheckSpace_1.SlotsUsed;
  outC->_L18 = !outC->_L16;
  /* _L13=(TM_lib_internal::BufferMsg#1)/ */
  BufferMsg_TM_lib_internal(
    &outC->_L11,
    outC->_L18,
    &outC->Context_BufferMsg_1);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->_L13,
    &outC->Context_BufferMsg_1.Out);
  outC->_L14 = t_train_global;
  /* _L12=(TM_TrainTrack_Bus::MergeMessageToBus#1)/ */
  MergeMessageToBus_TM_TrainTrack_Bus(
    &outC->_L13,
    outC->_L17,
    &outC->_L10,
    outC->_L14,
    &outC->Context_MergeMessageToBus_1);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->_L12,
    &outC->Context_MergeMessageToBus_1.MessageBus_out);
  outC->_L19 = outC->Context_MergeMessageToBus_1.t_train_assigned;
  outC->t_train_assigned = outC->_L19;
  outC->_L6 = m_version;
  noname = outC->_L6;
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->MessageBus_out,
    &outC->_L12);
}

#ifndef KCG_USER_DEFINED_INIT
void Send_M154_init_TM_radio_messages(outC_Send_M154_TM_radio_messages *outC)
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

  outC->_L19 = kcg_lit_int32(0);
  outC->_L16 = kcg_true;
  outC->_L17 = kcg_lit_int32(0);
  outC->_L18 = kcg_true;
  outC->_L13.Message.valid = kcg_true;
  outC->_L13.Message.nid_message = kcg_lit_int32(0);
  outC->_L13.Message.l_message = kcg_lit_int32(0);
  outC->_L13.Message.t_train = kcg_lit_int32(0);
  outC->_L13.Message.nid_engine = kcg_lit_int32(0);
  outC->_L13.Message.field1 = kcg_lit_int32(0);
  outC->_L13.Message.field2 = kcg_lit_int32(0);
  outC->_L13.Message.field3 = kcg_lit_int32(0);
  for (idx = 0; idx < 50; idx++) {
    outC->_L13.OptionalPackets[idx] = kcg_lit_int32(0);
  }
  for (idx2 = 0; idx2 < 5; idx2++) {
    outC->_L10[idx2].Message.valid = kcg_true;
    outC->_L10[idx2].Message.nid_message = kcg_lit_int32(0);
    outC->_L10[idx2].Message.l_message = kcg_lit_int32(0);
    outC->_L10[idx2].Message.t_train = kcg_lit_int32(0);
    outC->_L10[idx2].Message.nid_engine = kcg_lit_int32(0);
    outC->_L10[idx2].Message.field1 = kcg_lit_int32(0);
    outC->_L10[idx2].Message.field2 = kcg_lit_int32(0);
    outC->_L10[idx2].Message.field3 = kcg_lit_int32(0);
    for (idx1 = 0; idx1 < 50; idx1++) {
      outC->_L10[idx2].OptionalPackets[idx1] = kcg_lit_int32(0);
    }
  }
  outC->_L11.Message.valid = kcg_true;
  outC->_L11.Message.nid_message = kcg_lit_int32(0);
  outC->_L11.Message.l_message = kcg_lit_int32(0);
  outC->_L11.Message.t_train = kcg_lit_int32(0);
  outC->_L11.Message.nid_engine = kcg_lit_int32(0);
  outC->_L11.Message.field1 = kcg_lit_int32(0);
  outC->_L11.Message.field2 = kcg_lit_int32(0);
  outC->_L11.Message.field3 = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 50; idx3++) {
    outC->_L11.OptionalPackets[idx3] = kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 5; idx5++) {
    outC->_L12[idx5].Message.valid = kcg_true;
    outC->_L12[idx5].Message.nid_message = kcg_lit_int32(0);
    outC->_L12[idx5].Message.l_message = kcg_lit_int32(0);
    outC->_L12[idx5].Message.t_train = kcg_lit_int32(0);
    outC->_L12[idx5].Message.nid_engine = kcg_lit_int32(0);
    outC->_L12[idx5].Message.field1 = kcg_lit_int32(0);
    outC->_L12[idx5].Message.field2 = kcg_lit_int32(0);
    outC->_L12[idx5].Message.field3 = kcg_lit_int32(0);
    for (idx4 = 0; idx4 < 50; idx4++) {
      outC->_L12[idx5].OptionalPackets[idx4] = kcg_lit_int32(0);
    }
  }
  outC->_L14 = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 50; idx6++) {
    outC->_L7[idx6] = kcg_lit_int32(0);
  }
  outC->_L8 = kcg_lit_int32(0);
  outC->_L1.valid = kcg_true;
  outC->_L1.nid_message = kcg_lit_int32(0);
  outC->_L1.l_message = kcg_lit_int32(0);
  outC->_L1.t_train = kcg_lit_int32(0);
  outC->_L1.nid_engine = kcg_lit_int32(0);
  outC->_L1.field1 = kcg_lit_int32(0);
  outC->_L1.field2 = kcg_lit_int32(0);
  outC->_L1.field3 = kcg_lit_int32(0);
  outC->_L2.valid = kcg_true;
  outC->_L2.nid_message = kcg_lit_int32(0);
  outC->_L2.l_message = kcg_lit_int32(0);
  outC->_L2.t_train = kcg_lit_int32(0);
  outC->_L2.nid_engine = kcg_lit_int32(0);
  outC->_L6 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->t_train_assigned = kcg_lit_int32(0);
  for (idx8 = 0; idx8 < 5; idx8++) {
    outC->MessageBus_out[idx8].Message.valid = kcg_true;
    outC->MessageBus_out[idx8].Message.nid_message = kcg_lit_int32(0);
    outC->MessageBus_out[idx8].Message.l_message = kcg_lit_int32(0);
    outC->MessageBus_out[idx8].Message.t_train = kcg_lit_int32(0);
    outC->MessageBus_out[idx8].Message.nid_engine = kcg_lit_int32(0);
    outC->MessageBus_out[idx8].Message.field1 = kcg_lit_int32(0);
    outC->MessageBus_out[idx8].Message.field2 = kcg_lit_int32(0);
    outC->MessageBus_out[idx8].Message.field3 = kcg_lit_int32(0);
    for (idx7 = 0; idx7 < 50; idx7++) {
      outC->MessageBus_out[idx8].OptionalPackets[idx7] = kcg_lit_int32(0);
    }
  }
  /* _L12=(TM_TrainTrack_Bus::MergeMessageToBus#1)/ */
  MergeMessageToBus_init_TM_TrainTrack_Bus(&outC->Context_MergeMessageToBus_1);
  /* _L13=(TM_lib_internal::BufferMsg#1)/ */
  BufferMsg_init_TM_lib_internal(&outC->Context_BufferMsg_1);
  /* _L16=(TM_TrainTrack_Bus::CheckSpace#1)/ */
  CheckSpace_init_TM_TrainTrack_Bus(&outC->Context_CheckSpace_1);
  /* _L11=(TM_TrainToTrack::Merge_PacketsToMessage#1)/ */
  Merge_PacketsToMessage_init_TM_TrainToTrack(
    &outC->Context_Merge_PacketsToMessage_1);
  /* _L1=(TM_RBC_conversions::C_M154_to_header#1)/ */
  C_M154_to_header_init_TM_RBC_conversions(&outC->Context_C_M154_to_header_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Send_M154_reset_TM_radio_messages(outC_Send_M154_TM_radio_messages *outC)
{
  /* _L12=(TM_TrainTrack_Bus::MergeMessageToBus#1)/ */
  MergeMessageToBus_reset_TM_TrainTrack_Bus(&outC->Context_MergeMessageToBus_1);
  /* _L13=(TM_lib_internal::BufferMsg#1)/ */
  BufferMsg_reset_TM_lib_internal(&outC->Context_BufferMsg_1);
  /* _L16=(TM_TrainTrack_Bus::CheckSpace#1)/ */
  CheckSpace_reset_TM_TrainTrack_Bus(&outC->Context_CheckSpace_1);
  /* _L11=(TM_TrainToTrack::Merge_PacketsToMessage#1)/ */
  Merge_PacketsToMessage_reset_TM_TrainToTrack(
    &outC->Context_Merge_PacketsToMessage_1);
  /* _L1=(TM_RBC_conversions::C_M154_to_header#1)/ */
  C_M154_to_header_reset_TM_RBC_conversions(&outC->Context_C_M154_to_header_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Send_M154_TM_radio_messages.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

