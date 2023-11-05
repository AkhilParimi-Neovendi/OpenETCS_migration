/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainMessageQueue__GetEntries_RBC_Collections_Pkg.h"

/* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetEntries/ */
void RadioTrackTrainMessageQueue__GetEntries_RBC_Collections_Pkg(
  /* inRadioTrackTrainMessageQueue/ */
  RadioTrackTrainMessageQueue_T *inRadioTrackTrainMessageQueue,
  outC_RadioTrackTrainMessageQueue__GetEntries_RBC_Collections_Pkg *outC)
{
  kcg_copy_RadioTrackTrainMessageQueue_T(
    &outC->_L1,
    inRadioTrackTrainMessageQueue);
  kcg_copy_RadioTrackTrainMessageQueueEntries_T(&outC->_L2, &outC->_L1.m_Entries);
  kcg_copy_RadioTrackTrainMessageQueueEntries_T(
    &outC->outRadioTrackTrainMessageQueueEntries,
    &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void RadioTrackTrainMessageQueue__GetEntries_init_RBC_Collections_Pkg(
  outC_RadioTrackTrainMessageQueue__GetEntries_RBC_Collections_Pkg *outC)
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

  for (idx2 = 0; idx2 < 8; idx2++) {
    outC->_L2[idx2].m_IsValid = kcg_true;
    outC->_L2[idx2].m_Entry.Header.radioDevice = kcg_lit_int32(0);
    outC->_L2[idx2].m_Entry.Header.receivedSystemTime = kcg_lit_int32(0);
    outC->_L2[idx2].m_Entry.Header.nid_message = kcg_lit_int32(0);
    outC->_L2[idx2].m_Entry.Header.t_train = kcg_lit_int32(0);
    outC->_L2[idx2].m_Entry.Header.m_ack = kcg_lit_int32(0);
    outC->_L2[idx2].m_Entry.Header.nid_lrbg = kcg_lit_int32(0);
    outC->_L2[idx2].m_Entry.Header.t_train_reference = kcg_lit_int32(0);
    outC->_L2[idx2].m_Entry.Header.nid_em = kcg_lit_int32(0);
    outC->_L2[idx2].m_Entry.Header.q_scale = kcg_lit_int32(0);
    outC->_L2[idx2].m_Entry.Header.d_sr = kcg_lit_int32(0);
    outC->_L2[idx2].m_Entry.Header.t_sh_rqst = kcg_lit_int32(0);
    outC->_L2[idx2].m_Entry.Header.d_ref = kcg_lit_int32(0);
    outC->_L2[idx2].m_Entry.Header.q_dir = kcg_lit_int32(0);
    outC->_L2[idx2].m_Entry.Header.d_emergencystop = kcg_lit_int32(0);
    outC->_L2[idx2].m_Entry.Header.m_version = kcg_lit_int32(0);
    for (idx = 0; idx < 30; idx++) {
      outC->_L2[idx2].m_Entry.Messages.PacketHeaders[idx].nid_packet =
        kcg_lit_int32(0);
      outC->_L2[idx2].m_Entry.Messages.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
      outC->_L2[idx2].m_Entry.Messages.PacketHeaders[idx].valid = kcg_true;
      outC->_L2[idx2].m_Entry.Messages.PacketHeaders[idx].startAddress =
        kcg_lit_int32(0);
      outC->_L2[idx2].m_Entry.Messages.PacketHeaders[idx].endAddress =
        kcg_lit_int32(0);
    }
    for (idx1 = 0; idx1 < 500; idx1++) {
      outC->_L2[idx2].m_Entry.Messages.PacketData[idx1] = kcg_lit_int32(0);
    }
  }
  for (idx5 = 0; idx5 < 8; idx5++) {
    outC->_L1.m_Entries[idx5].m_IsValid = kcg_true;
    outC->_L1.m_Entries[idx5].m_Entry.Header.radioDevice = kcg_lit_int32(0);
    outC->_L1.m_Entries[idx5].m_Entry.Header.receivedSystemTime = kcg_lit_int32(0);
    outC->_L1.m_Entries[idx5].m_Entry.Header.nid_message = kcg_lit_int32(0);
    outC->_L1.m_Entries[idx5].m_Entry.Header.t_train = kcg_lit_int32(0);
    outC->_L1.m_Entries[idx5].m_Entry.Header.m_ack = kcg_lit_int32(0);
    outC->_L1.m_Entries[idx5].m_Entry.Header.nid_lrbg = kcg_lit_int32(0);
    outC->_L1.m_Entries[idx5].m_Entry.Header.t_train_reference = kcg_lit_int32(0);
    outC->_L1.m_Entries[idx5].m_Entry.Header.nid_em = kcg_lit_int32(0);
    outC->_L1.m_Entries[idx5].m_Entry.Header.q_scale = kcg_lit_int32(0);
    outC->_L1.m_Entries[idx5].m_Entry.Header.d_sr = kcg_lit_int32(0);
    outC->_L1.m_Entries[idx5].m_Entry.Header.t_sh_rqst = kcg_lit_int32(0);
    outC->_L1.m_Entries[idx5].m_Entry.Header.d_ref = kcg_lit_int32(0);
    outC->_L1.m_Entries[idx5].m_Entry.Header.q_dir = kcg_lit_int32(0);
    outC->_L1.m_Entries[idx5].m_Entry.Header.d_emergencystop = kcg_lit_int32(0);
    outC->_L1.m_Entries[idx5].m_Entry.Header.m_version = kcg_lit_int32(0);
    for (idx3 = 0; idx3 < 30; idx3++) {
      outC->_L1.m_Entries[idx5].m_Entry.Messages.PacketHeaders[idx3].nid_packet =
        kcg_lit_int32(0);
      outC->_L1.m_Entries[idx5].m_Entry.Messages.PacketHeaders[idx3].q_dir =
        Q_DIR_Reverse;
      outC->_L1.m_Entries[idx5].m_Entry.Messages.PacketHeaders[idx3].valid = kcg_true;
      outC->_L1.m_Entries[idx5].m_Entry.Messages.PacketHeaders[idx3].startAddress =
        kcg_lit_int32(0);
      outC->_L1.m_Entries[idx5].m_Entry.Messages.PacketHeaders[idx3].endAddress =
        kcg_lit_int32(0);
    }
    for (idx4 = 0; idx4 < 500; idx4++) {
      outC->_L1.m_Entries[idx5].m_Entry.Messages.PacketData[idx4] = kcg_lit_int32(0);
    }
  }
  for (idx8 = 0; idx8 < 8; idx8++) {
    outC->outRadioTrackTrainMessageQueueEntries[idx8].m_IsValid = kcg_true;
    outC->outRadioTrackTrainMessageQueueEntries[idx8].m_Entry.Header.radioDevice =
      kcg_lit_int32(0);
    outC->outRadioTrackTrainMessageQueueEntries[idx8].m_Entry.Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->outRadioTrackTrainMessageQueueEntries[idx8].m_Entry.Header.nid_message =
      kcg_lit_int32(0);
    outC->outRadioTrackTrainMessageQueueEntries[idx8].m_Entry.Header.t_train =
      kcg_lit_int32(0);
    outC->outRadioTrackTrainMessageQueueEntries[idx8].m_Entry.Header.m_ack =
      kcg_lit_int32(0);
    outC->outRadioTrackTrainMessageQueueEntries[idx8].m_Entry.Header.nid_lrbg =
      kcg_lit_int32(0);
    outC->outRadioTrackTrainMessageQueueEntries[idx8].m_Entry.Header.t_train_reference =
      kcg_lit_int32(0);
    outC->outRadioTrackTrainMessageQueueEntries[idx8].m_Entry.Header.nid_em =
      kcg_lit_int32(0);
    outC->outRadioTrackTrainMessageQueueEntries[idx8].m_Entry.Header.q_scale =
      kcg_lit_int32(0);
    outC->outRadioTrackTrainMessageQueueEntries[idx8].m_Entry.Header.d_sr =
      kcg_lit_int32(0);
    outC->outRadioTrackTrainMessageQueueEntries[idx8].m_Entry.Header.t_sh_rqst =
      kcg_lit_int32(0);
    outC->outRadioTrackTrainMessageQueueEntries[idx8].m_Entry.Header.d_ref =
      kcg_lit_int32(0);
    outC->outRadioTrackTrainMessageQueueEntries[idx8].m_Entry.Header.q_dir =
      kcg_lit_int32(0);
    outC->outRadioTrackTrainMessageQueueEntries[idx8].m_Entry.Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->outRadioTrackTrainMessageQueueEntries[idx8].m_Entry.Header.m_version =
      kcg_lit_int32(0);
    for (idx6 = 0; idx6 < 30; idx6++) {
      outC->outRadioTrackTrainMessageQueueEntries[idx8].m_Entry.Messages.PacketHeaders[idx6].nid_packet =
        kcg_lit_int32(0);
      outC->outRadioTrackTrainMessageQueueEntries[idx8].m_Entry.Messages.PacketHeaders[idx6].q_dir =
        Q_DIR_Reverse;
      outC->outRadioTrackTrainMessageQueueEntries[idx8].m_Entry.Messages.PacketHeaders[idx6].valid =
        kcg_true;
      outC->outRadioTrackTrainMessageQueueEntries[idx8].m_Entry.Messages.PacketHeaders[idx6].startAddress =
        kcg_lit_int32(0);
      outC->outRadioTrackTrainMessageQueueEntries[idx8].m_Entry.Messages.PacketHeaders[idx6].endAddress =
        kcg_lit_int32(0);
    }
    for (idx7 = 0; idx7 < 500; idx7++) {
      outC->outRadioTrackTrainMessageQueueEntries[idx8].m_Entry.Messages.PacketData[idx7] =
        kcg_lit_int32(0);
    }
  }
}
#endif /* KCG_USER_DEFINED_INIT */


void RadioTrackTrainMessageQueue__GetEntries_reset_RBC_Collections_Pkg(
  outC_RadioTrackTrainMessageQueue__GetEntries_RBC_Collections_Pkg *outC)
{
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RadioTrackTrainMessageQueue__GetEntries_RBC_Collections_Pkg.c
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

