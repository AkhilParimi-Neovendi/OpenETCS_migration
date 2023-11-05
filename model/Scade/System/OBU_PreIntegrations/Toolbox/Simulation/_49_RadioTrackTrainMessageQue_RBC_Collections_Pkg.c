/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_49_RadioTrackTrainMessageQue_RBC_Collections_Pkg.h"

/* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__SetEntries/ */
void _49_RadioTrackTrainMessageQue_RBC_Collections_Pkg(
  /* inRadioTrackTrainMessageQueueEntries/ */
  _3_RadioTrackTrainMessageQueueEntries_T *inRadioTrackTrainMessageQueueEntries,
  outC__49_RadioTrackTrainMessageQue_RBC_Collections_Pkg *outC)
{
  kcg_copy__2_RadioTrackTrainMessageQueue_T(
    &outC->_L5,
    (_2_RadioTrackTrainMessageQueue_T *)
      &_9_RADIO_TRACK_TRAIN_MESSAGE_QUEUE_DEFAULT);
  kcg_copy__3_RadioTrackTrainMessageQueueEntries_T(
    &outC->_L1,
    inRadioTrackTrainMessageQueueEntries);
  kcg_copy__2_RadioTrackTrainMessageQueue_T(&outC->_L3, &outC->_L5);
  if (kcg_true) {
    kcg_copy__3_RadioTrackTrainMessageQueueEntries_T(
      &outC->_L3.m_Entries,
      &outC->_L1);
  }
  kcg_copy__2_RadioTrackTrainMessageQueue_T(
    &outC->out_RadioTrackTrainMessageQueue,
    &outC->_L3);
}

#ifndef KCG_USER_DEFINED_INIT
void _49_RadioTrackTrainMessageQue_init_RBC_Collections_Pkg(
  outC__49_RadioTrackTrainMessageQue_RBC_Collections_Pkg *outC)
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
  kcg_size idx10;
  kcg_size idx11;

  for (idx2 = 0; idx2 < 8; idx2++) {
    outC->_L5.m_Entries[idx2].m_IsValid = kcg_true;
    outC->_L5.m_Entries[idx2].m_Entry.Header.radioDevice = kcg_lit_int32(0);
    outC->_L5.m_Entries[idx2].m_Entry.Header.receivedSystemTime = kcg_lit_int32(0);
    outC->_L5.m_Entries[idx2].m_Entry.Header.nid_message = kcg_lit_int32(0);
    outC->_L5.m_Entries[idx2].m_Entry.Header.t_train = kcg_lit_int32(0);
    outC->_L5.m_Entries[idx2].m_Entry.Header.m_ack = kcg_lit_int32(0);
    outC->_L5.m_Entries[idx2].m_Entry.Header.nid_lrbg = kcg_lit_int32(0);
    outC->_L5.m_Entries[idx2].m_Entry.Header.t_train_reference = kcg_lit_int32(0);
    outC->_L5.m_Entries[idx2].m_Entry.Header.nid_em = kcg_lit_int32(0);
    outC->_L5.m_Entries[idx2].m_Entry.Header.q_scale = kcg_lit_int32(0);
    outC->_L5.m_Entries[idx2].m_Entry.Header.d_sr = kcg_lit_int32(0);
    outC->_L5.m_Entries[idx2].m_Entry.Header.t_sh_rqst = kcg_lit_int32(0);
    outC->_L5.m_Entries[idx2].m_Entry.Header.d_ref = kcg_lit_int32(0);
    outC->_L5.m_Entries[idx2].m_Entry.Header.q_dir = kcg_lit_int32(0);
    outC->_L5.m_Entries[idx2].m_Entry.Header.d_emergencystop = kcg_lit_int32(0);
    outC->_L5.m_Entries[idx2].m_Entry.Header.m_version = kcg_lit_int32(0);
    for (idx = 0; idx < 30; idx++) {
      outC->_L5.m_Entries[idx2].m_Entry.Messages.PacketHeaders[idx].nid_packet =
        kcg_lit_int32(0);
      outC->_L5.m_Entries[idx2].m_Entry.Messages.PacketHeaders[idx].q_dir =
        Q_DIR_Reverse;
      outC->_L5.m_Entries[idx2].m_Entry.Messages.PacketHeaders[idx].valid = kcg_true;
      outC->_L5.m_Entries[idx2].m_Entry.Messages.PacketHeaders[idx].startAddress =
        kcg_lit_int32(0);
      outC->_L5.m_Entries[idx2].m_Entry.Messages.PacketHeaders[idx].endAddress =
        kcg_lit_int32(0);
    }
    for (idx1 = 0; idx1 < 500; idx1++) {
      outC->_L5.m_Entries[idx2].m_Entry.Messages.PacketData[idx1] = kcg_lit_int32(0);
    }
  }
  for (idx5 = 0; idx5 < 8; idx5++) {
    outC->_L3.m_Entries[idx5].m_IsValid = kcg_true;
    outC->_L3.m_Entries[idx5].m_Entry.Header.radioDevice = kcg_lit_int32(0);
    outC->_L3.m_Entries[idx5].m_Entry.Header.receivedSystemTime = kcg_lit_int32(0);
    outC->_L3.m_Entries[idx5].m_Entry.Header.nid_message = kcg_lit_int32(0);
    outC->_L3.m_Entries[idx5].m_Entry.Header.t_train = kcg_lit_int32(0);
    outC->_L3.m_Entries[idx5].m_Entry.Header.m_ack = kcg_lit_int32(0);
    outC->_L3.m_Entries[idx5].m_Entry.Header.nid_lrbg = kcg_lit_int32(0);
    outC->_L3.m_Entries[idx5].m_Entry.Header.t_train_reference = kcg_lit_int32(0);
    outC->_L3.m_Entries[idx5].m_Entry.Header.nid_em = kcg_lit_int32(0);
    outC->_L3.m_Entries[idx5].m_Entry.Header.q_scale = kcg_lit_int32(0);
    outC->_L3.m_Entries[idx5].m_Entry.Header.d_sr = kcg_lit_int32(0);
    outC->_L3.m_Entries[idx5].m_Entry.Header.t_sh_rqst = kcg_lit_int32(0);
    outC->_L3.m_Entries[idx5].m_Entry.Header.d_ref = kcg_lit_int32(0);
    outC->_L3.m_Entries[idx5].m_Entry.Header.q_dir = kcg_lit_int32(0);
    outC->_L3.m_Entries[idx5].m_Entry.Header.d_emergencystop = kcg_lit_int32(0);
    outC->_L3.m_Entries[idx5].m_Entry.Header.m_version = kcg_lit_int32(0);
    for (idx3 = 0; idx3 < 30; idx3++) {
      outC->_L3.m_Entries[idx5].m_Entry.Messages.PacketHeaders[idx3].nid_packet =
        kcg_lit_int32(0);
      outC->_L3.m_Entries[idx5].m_Entry.Messages.PacketHeaders[idx3].q_dir =
        Q_DIR_Reverse;
      outC->_L3.m_Entries[idx5].m_Entry.Messages.PacketHeaders[idx3].valid = kcg_true;
      outC->_L3.m_Entries[idx5].m_Entry.Messages.PacketHeaders[idx3].startAddress =
        kcg_lit_int32(0);
      outC->_L3.m_Entries[idx5].m_Entry.Messages.PacketHeaders[idx3].endAddress =
        kcg_lit_int32(0);
    }
    for (idx4 = 0; idx4 < 500; idx4++) {
      outC->_L3.m_Entries[idx5].m_Entry.Messages.PacketData[idx4] = kcg_lit_int32(0);
    }
  }
  for (idx8 = 0; idx8 < 8; idx8++) {
    outC->_L1[idx8].m_IsValid = kcg_true;
    outC->_L1[idx8].m_Entry.Header.radioDevice = kcg_lit_int32(0);
    outC->_L1[idx8].m_Entry.Header.receivedSystemTime = kcg_lit_int32(0);
    outC->_L1[idx8].m_Entry.Header.nid_message = kcg_lit_int32(0);
    outC->_L1[idx8].m_Entry.Header.t_train = kcg_lit_int32(0);
    outC->_L1[idx8].m_Entry.Header.m_ack = kcg_lit_int32(0);
    outC->_L1[idx8].m_Entry.Header.nid_lrbg = kcg_lit_int32(0);
    outC->_L1[idx8].m_Entry.Header.t_train_reference = kcg_lit_int32(0);
    outC->_L1[idx8].m_Entry.Header.nid_em = kcg_lit_int32(0);
    outC->_L1[idx8].m_Entry.Header.q_scale = kcg_lit_int32(0);
    outC->_L1[idx8].m_Entry.Header.d_sr = kcg_lit_int32(0);
    outC->_L1[idx8].m_Entry.Header.t_sh_rqst = kcg_lit_int32(0);
    outC->_L1[idx8].m_Entry.Header.d_ref = kcg_lit_int32(0);
    outC->_L1[idx8].m_Entry.Header.q_dir = kcg_lit_int32(0);
    outC->_L1[idx8].m_Entry.Header.d_emergencystop = kcg_lit_int32(0);
    outC->_L1[idx8].m_Entry.Header.m_version = kcg_lit_int32(0);
    for (idx6 = 0; idx6 < 30; idx6++) {
      outC->_L1[idx8].m_Entry.Messages.PacketHeaders[idx6].nid_packet =
        kcg_lit_int32(0);
      outC->_L1[idx8].m_Entry.Messages.PacketHeaders[idx6].q_dir = Q_DIR_Reverse;
      outC->_L1[idx8].m_Entry.Messages.PacketHeaders[idx6].valid = kcg_true;
      outC->_L1[idx8].m_Entry.Messages.PacketHeaders[idx6].startAddress =
        kcg_lit_int32(0);
      outC->_L1[idx8].m_Entry.Messages.PacketHeaders[idx6].endAddress =
        kcg_lit_int32(0);
    }
    for (idx7 = 0; idx7 < 500; idx7++) {
      outC->_L1[idx8].m_Entry.Messages.PacketData[idx7] = kcg_lit_int32(0);
    }
  }
  for (idx11 = 0; idx11 < 8; idx11++) {
    outC->out_RadioTrackTrainMessageQueue.m_Entries[idx11].m_IsValid = kcg_true;
    outC->out_RadioTrackTrainMessageQueue.m_Entries[idx11].m_Entry.Header.radioDevice =
      kcg_lit_int32(0);
    outC->out_RadioTrackTrainMessageQueue.m_Entries[idx11].m_Entry.Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->out_RadioTrackTrainMessageQueue.m_Entries[idx11].m_Entry.Header.nid_message =
      kcg_lit_int32(0);
    outC->out_RadioTrackTrainMessageQueue.m_Entries[idx11].m_Entry.Header.t_train =
      kcg_lit_int32(0);
    outC->out_RadioTrackTrainMessageQueue.m_Entries[idx11].m_Entry.Header.m_ack =
      kcg_lit_int32(0);
    outC->out_RadioTrackTrainMessageQueue.m_Entries[idx11].m_Entry.Header.nid_lrbg =
      kcg_lit_int32(0);
    outC->out_RadioTrackTrainMessageQueue.m_Entries[idx11].m_Entry.Header.t_train_reference =
      kcg_lit_int32(0);
    outC->out_RadioTrackTrainMessageQueue.m_Entries[idx11].m_Entry.Header.nid_em =
      kcg_lit_int32(0);
    outC->out_RadioTrackTrainMessageQueue.m_Entries[idx11].m_Entry.Header.q_scale =
      kcg_lit_int32(0);
    outC->out_RadioTrackTrainMessageQueue.m_Entries[idx11].m_Entry.Header.d_sr =
      kcg_lit_int32(0);
    outC->out_RadioTrackTrainMessageQueue.m_Entries[idx11].m_Entry.Header.t_sh_rqst =
      kcg_lit_int32(0);
    outC->out_RadioTrackTrainMessageQueue.m_Entries[idx11].m_Entry.Header.d_ref =
      kcg_lit_int32(0);
    outC->out_RadioTrackTrainMessageQueue.m_Entries[idx11].m_Entry.Header.q_dir =
      kcg_lit_int32(0);
    outC->out_RadioTrackTrainMessageQueue.m_Entries[idx11].m_Entry.Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->out_RadioTrackTrainMessageQueue.m_Entries[idx11].m_Entry.Header.m_version =
      kcg_lit_int32(0);
    for (idx9 = 0; idx9 < 30; idx9++) {
      outC->out_RadioTrackTrainMessageQueue.m_Entries[idx11].m_Entry.Messages.PacketHeaders[idx9].nid_packet =
        kcg_lit_int32(0);
      outC->out_RadioTrackTrainMessageQueue.m_Entries[idx11].m_Entry.Messages.PacketHeaders[idx9].q_dir =
        Q_DIR_Reverse;
      outC->out_RadioTrackTrainMessageQueue.m_Entries[idx11].m_Entry.Messages.PacketHeaders[idx9].valid =
        kcg_true;
      outC->out_RadioTrackTrainMessageQueue.m_Entries[idx11].m_Entry.Messages.PacketHeaders[idx9].startAddress =
        kcg_lit_int32(0);
      outC->out_RadioTrackTrainMessageQueue.m_Entries[idx11].m_Entry.Messages.PacketHeaders[idx9].endAddress =
        kcg_lit_int32(0);
    }
    for (idx10 = 0; idx10 < 500; idx10++) {
      outC->out_RadioTrackTrainMessageQueue.m_Entries[idx11].m_Entry.Messages.PacketData[idx10] =
        kcg_lit_int32(0);
    }
  }
}
#endif /* KCG_USER_DEFINED_INIT */


void _49_RadioTrackTrainMessageQue_reset_RBC_Collections_Pkg(
  outC__49_RadioTrackTrainMessageQue_RBC_Collections_Pkg *outC)
{
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** _49_RadioTrackTrainMessageQue_RBC_Collections_Pkg.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

