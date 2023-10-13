/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Merge_PacketsToMessage_TM_TrainToTrack.h"

/* TM_TrainToTrack::Merge_PacketsToMessage/ */
void Merge_PacketsToMessage_TM_TrainToTrack(
  /* OptionalPackets/ */
  M_TrainTrack_compressed_packets_T_TM_radio_messages *OptionalPackets,
  /* MessageHeader/ */
  M_TrainTrack_MessageHd_T_TM_radio_messages *MessageHeader,
  outC_Merge_PacketsToMessage_TM_TrainToTrack *outC)
{
  kcg_copy_M_TrainTrack_MessageHd_T_TM_radio_messages(&outC->_L2, MessageHeader);
  kcg_copy_M_TrainTrack_compressed_packets_T_TM_radio_messages(
    &outC->_L1,
    OptionalPackets);
  kcg_copy_M_TrainTrack_MessageHd_T_TM_radio_messages(
    &outC->_L4.Message,
    &outC->_L2);
  kcg_copy_M_TrainTrack_compressed_packets_T_TM_radio_messages(
    &outC->_L4.OptionalPackets,
    &outC->_L1);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->RadioMessage,
    &outC->_L4);
}

#ifndef KCG_USER_DEFINED_INIT
void Merge_PacketsToMessage_init_TM_TrainToTrack(
  outC_Merge_PacketsToMessage_TM_TrainToTrack *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;

  outC->_L4.Message.valid = kcg_true;
  outC->_L4.Message.nid_message = kcg_lit_int64(0);
  outC->_L4.Message.l_message = kcg_lit_int64(0);
  outC->_L4.Message.t_train = kcg_lit_int64(0);
  outC->_L4.Message.nid_engine = kcg_lit_int64(0);
  outC->_L4.Message.field1 = kcg_lit_int64(0);
  outC->_L4.Message.field2 = kcg_lit_int64(0);
  outC->_L4.Message.field3 = kcg_lit_int64(0);
  for (idx = 0; idx < 50; idx++) {
    outC->_L4.OptionalPackets[idx] = kcg_lit_int64(0);
  }
  outC->_L2.valid = kcg_true;
  outC->_L2.nid_message = kcg_lit_int64(0);
  outC->_L2.l_message = kcg_lit_int64(0);
  outC->_L2.t_train = kcg_lit_int64(0);
  outC->_L2.nid_engine = kcg_lit_int64(0);
  outC->_L2.field1 = kcg_lit_int64(0);
  outC->_L2.field2 = kcg_lit_int64(0);
  outC->_L2.field3 = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 50; idx1++) {
    outC->_L1[idx1] = kcg_lit_int64(0);
  }
  outC->RadioMessage.Message.valid = kcg_true;
  outC->RadioMessage.Message.nid_message = kcg_lit_int64(0);
  outC->RadioMessage.Message.l_message = kcg_lit_int64(0);
  outC->RadioMessage.Message.t_train = kcg_lit_int64(0);
  outC->RadioMessage.Message.nid_engine = kcg_lit_int64(0);
  outC->RadioMessage.Message.field1 = kcg_lit_int64(0);
  outC->RadioMessage.Message.field2 = kcg_lit_int64(0);
  outC->RadioMessage.Message.field3 = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 50; idx2++) {
    outC->RadioMessage.OptionalPackets[idx2] = kcg_lit_int64(0);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Merge_PacketsToMessage_reset_TM_TrainToTrack(
  outC_Merge_PacketsToMessage_TM_TrainToTrack *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Merge_PacketsToMessage_TM_TrainToTrack.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

