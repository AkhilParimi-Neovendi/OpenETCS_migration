/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_145_RadioTrackTrainMessa_RBC_Collections_Pkg.h"

/* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take_Iterable2/ */
void _145_RadioTrackTrainMessa_RBC_Collections_Pkg(
  /* inIndex/ */
  kcg_int32 inIndex,
  /* inComparisonIndex/ */
  kcg_int32 inComparisonIndex,
  /* inRadioTrackTrainMessageQueueEntry/ */
  RadioTrackTrainMessageQueueEntry_T *inRadioTrackTrainMessageQueueEntry,
  outC__145_RadioTrackTrainMessa_RBC_Collections_Pkg *outC)
{
  outC->_L13 = inComparisonIndex;
  kcg_copy_RadioTrackTrainMessageQueueEntry_T(
    &outC->_L5,
    inRadioTrackTrainMessageQueueEntry);
  kcg_copy_RadioTrackTrainMessageQueueEntry_T(
    &outC->_L6,
    (RadioTrackTrainMessageQueueEntry_T *)
      &_8_RADIO_TRACK_TRAIN_MESSAGE_QUEUE_ENTRY_DEFAULT);
  outC->_L1 = inIndex;
  outC->_L3 = outC->_L1 == outC->_L13;
  /* _L4= */
  if (outC->_L3) {
    kcg_copy_RadioTrackTrainMessageQueueEntry_T(&outC->_L4, &outC->_L6);
  }
  else {
    kcg_copy_RadioTrackTrainMessageQueueEntry_T(&outC->_L4, &outC->_L5);
  }
  kcg_copy_RadioTrackTrainMessageQueueEntry_T(
    &outC->outRadioTrackTrainMessageQueueEntry,
    &outC->_L4);
}

#ifndef KCG_USER_DEFINED_INIT
void _145_RadioTrackTrainMessa_init_RBC_Collections_Pkg(
  outC__145_RadioTrackTrainMessa_RBC_Collections_Pkg *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;
  kcg_size idx6;
  kcg_size idx7;

  outC->_L13 = kcg_lit_int32(0);
  outC->_L6.m_IsValid = kcg_true;
  outC->_L6.m_Entry.Header.radioDevice = kcg_lit_int32(0);
  outC->_L6.m_Entry.Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L6.m_Entry.Header.nid_message = kcg_lit_int32(0);
  outC->_L6.m_Entry.Header.t_train = kcg_lit_int32(0);
  outC->_L6.m_Entry.Header.m_ack = kcg_lit_int32(0);
  outC->_L6.m_Entry.Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L6.m_Entry.Header.t_train_reference = kcg_lit_int32(0);
  outC->_L6.m_Entry.Header.nid_em = kcg_lit_int32(0);
  outC->_L6.m_Entry.Header.q_scale = kcg_lit_int32(0);
  outC->_L6.m_Entry.Header.d_sr = kcg_lit_int32(0);
  outC->_L6.m_Entry.Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L6.m_Entry.Header.d_ref = kcg_lit_int32(0);
  outC->_L6.m_Entry.Header.q_dir = kcg_lit_int32(0);
  outC->_L6.m_Entry.Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L6.m_Entry.Header.m_version = kcg_lit_int32(0);
  for (idx = 0; idx < 30; idx++) {
    outC->_L6.m_Entry.Messages.PacketHeaders[idx].nid_packet = kcg_lit_int32(0);
    outC->_L6.m_Entry.Messages.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L6.m_Entry.Messages.PacketHeaders[idx].valid = kcg_true;
    outC->_L6.m_Entry.Messages.PacketHeaders[idx].startAddress = kcg_lit_int32(0);
    outC->_L6.m_Entry.Messages.PacketHeaders[idx].endAddress = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L6.m_Entry.Messages.PacketData[idx1] = kcg_lit_int32(0);
  }
  outC->_L5.m_IsValid = kcg_true;
  outC->_L5.m_Entry.Header.radioDevice = kcg_lit_int32(0);
  outC->_L5.m_Entry.Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L5.m_Entry.Header.nid_message = kcg_lit_int32(0);
  outC->_L5.m_Entry.Header.t_train = kcg_lit_int32(0);
  outC->_L5.m_Entry.Header.m_ack = kcg_lit_int32(0);
  outC->_L5.m_Entry.Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L5.m_Entry.Header.t_train_reference = kcg_lit_int32(0);
  outC->_L5.m_Entry.Header.nid_em = kcg_lit_int32(0);
  outC->_L5.m_Entry.Header.q_scale = kcg_lit_int32(0);
  outC->_L5.m_Entry.Header.d_sr = kcg_lit_int32(0);
  outC->_L5.m_Entry.Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L5.m_Entry.Header.d_ref = kcg_lit_int32(0);
  outC->_L5.m_Entry.Header.q_dir = kcg_lit_int32(0);
  outC->_L5.m_Entry.Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L5.m_Entry.Header.m_version = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L5.m_Entry.Messages.PacketHeaders[idx2].nid_packet = kcg_lit_int32(0);
    outC->_L5.m_Entry.Messages.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L5.m_Entry.Messages.PacketHeaders[idx2].valid = kcg_true;
    outC->_L5.m_Entry.Messages.PacketHeaders[idx2].startAddress = kcg_lit_int32(0);
    outC->_L5.m_Entry.Messages.PacketHeaders[idx2].endAddress = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L5.m_Entry.Messages.PacketData[idx3] = kcg_lit_int32(0);
  }
  outC->_L4.m_IsValid = kcg_true;
  outC->_L4.m_Entry.Header.radioDevice = kcg_lit_int32(0);
  outC->_L4.m_Entry.Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L4.m_Entry.Header.nid_message = kcg_lit_int32(0);
  outC->_L4.m_Entry.Header.t_train = kcg_lit_int32(0);
  outC->_L4.m_Entry.Header.m_ack = kcg_lit_int32(0);
  outC->_L4.m_Entry.Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L4.m_Entry.Header.t_train_reference = kcg_lit_int32(0);
  outC->_L4.m_Entry.Header.nid_em = kcg_lit_int32(0);
  outC->_L4.m_Entry.Header.q_scale = kcg_lit_int32(0);
  outC->_L4.m_Entry.Header.d_sr = kcg_lit_int32(0);
  outC->_L4.m_Entry.Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L4.m_Entry.Header.d_ref = kcg_lit_int32(0);
  outC->_L4.m_Entry.Header.q_dir = kcg_lit_int32(0);
  outC->_L4.m_Entry.Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L4.m_Entry.Header.m_version = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L4.m_Entry.Messages.PacketHeaders[idx4].nid_packet = kcg_lit_int32(0);
    outC->_L4.m_Entry.Messages.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->_L4.m_Entry.Messages.PacketHeaders[idx4].valid = kcg_true;
    outC->_L4.m_Entry.Messages.PacketHeaders[idx4].startAddress = kcg_lit_int32(0);
    outC->_L4.m_Entry.Messages.PacketHeaders[idx4].endAddress = kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L4.m_Entry.Messages.PacketData[idx5] = kcg_lit_int32(0);
  }
  outC->_L3 = kcg_true;
  outC->_L1 = kcg_lit_int32(0);
  outC->outRadioTrackTrainMessageQueueEntry.m_IsValid = kcg_true;
  outC->outRadioTrackTrainMessageQueueEntry.m_Entry.Header.radioDevice =
    kcg_lit_int32(0);
  outC->outRadioTrackTrainMessageQueueEntry.m_Entry.Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->outRadioTrackTrainMessageQueueEntry.m_Entry.Header.nid_message =
    kcg_lit_int32(0);
  outC->outRadioTrackTrainMessageQueueEntry.m_Entry.Header.t_train =
    kcg_lit_int32(0);
  outC->outRadioTrackTrainMessageQueueEntry.m_Entry.Header.m_ack =
    kcg_lit_int32(0);
  outC->outRadioTrackTrainMessageQueueEntry.m_Entry.Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->outRadioTrackTrainMessageQueueEntry.m_Entry.Header.t_train_reference =
    kcg_lit_int32(0);
  outC->outRadioTrackTrainMessageQueueEntry.m_Entry.Header.nid_em =
    kcg_lit_int32(0);
  outC->outRadioTrackTrainMessageQueueEntry.m_Entry.Header.q_scale =
    kcg_lit_int32(0);
  outC->outRadioTrackTrainMessageQueueEntry.m_Entry.Header.d_sr = kcg_lit_int32(
      0);
  outC->outRadioTrackTrainMessageQueueEntry.m_Entry.Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->outRadioTrackTrainMessageQueueEntry.m_Entry.Header.d_ref =
    kcg_lit_int32(0);
  outC->outRadioTrackTrainMessageQueueEntry.m_Entry.Header.q_dir =
    kcg_lit_int32(0);
  outC->outRadioTrackTrainMessageQueueEntry.m_Entry.Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->outRadioTrackTrainMessageQueueEntry.m_Entry.Header.m_version =
    kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 30; idx6++) {
    outC->outRadioTrackTrainMessageQueueEntry.m_Entry.Messages.PacketHeaders[idx6].nid_packet =
      kcg_lit_int32(0);
    outC->outRadioTrackTrainMessageQueueEntry.m_Entry.Messages.PacketHeaders[idx6].q_dir =
      Q_DIR_Reverse;
    outC->outRadioTrackTrainMessageQueueEntry.m_Entry.Messages.PacketHeaders[idx6].valid =
      kcg_true;
    outC->outRadioTrackTrainMessageQueueEntry.m_Entry.Messages.PacketHeaders[idx6].startAddress =
      kcg_lit_int32(0);
    outC->outRadioTrackTrainMessageQueueEntry.m_Entry.Messages.PacketHeaders[idx6].endAddress =
      kcg_lit_int32(0);
  }
  for (idx7 = 0; idx7 < 500; idx7++) {
    outC->outRadioTrackTrainMessageQueueEntry.m_Entry.Messages.PacketData[idx7] =
      kcg_lit_int32(0);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void _145_RadioTrackTrainMessa_reset_RBC_Collections_Pkg(
  outC__145_RadioTrackTrainMessa_RBC_Collections_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** _145_RadioTrackTrainMessa_RBC_Collections_Pkg.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

