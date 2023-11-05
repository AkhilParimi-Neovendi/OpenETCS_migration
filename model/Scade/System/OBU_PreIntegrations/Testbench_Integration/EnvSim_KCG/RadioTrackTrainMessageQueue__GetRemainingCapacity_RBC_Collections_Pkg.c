/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainMessageQueue__GetRemainingCapacity_RBC_Collections_Pkg.h"

/* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity/ */
void RadioTrackTrainMessageQueue__GetRemainingCapacity_RBC_Collections_Pkg(
  /* inRadioTrackTrainMessageQueue/ */
  RadioTrackTrainMessageQueue_T *inRadioTrackTrainMessageQueue,
  outC_RadioTrackTrainMessageQueue__GetRemainingCapacity_RBC_Collections_Pkg *outC)
{
  static kcg_int32 acc;
  static kcg_size idx;
  static kcg_int32 noname;

  outC->_L33 = kcg_lit_int32(0);
  outC->_L27 = kcg_lit_int32(0);
  kcg_copy_RadioTrackTrainMessageQueue_T(
    &outC->_L1,
    inRadioTrackTrainMessageQueue);
  /* _L2=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetEntries#1)/ */
  RadioTrackTrainMessageQueue__GetEntries_RBC_Collections_Pkg(
    &outC->_L1,
    &outC->Context_RadioTrackTrainMessageQueue__GetEntries_1);
  kcg_copy_RadioTrackTrainMessageQueueEntries_T(
    &outC->_L2,
    &outC->Context_RadioTrackTrainMessageQueue__GetEntries_1.outRadioTrackTrainMessageQueueEntries);
  outC->_L11 = kcg_true;
  outC->_L26 = outC->_L27;
  /* _L10= */
  if (outC->_L11) {
    /* _L10= */
    for (idx = 0; idx < 8; idx++) {
      acc = outC->_L26;
      /* _L10=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity_Iterable#1)/ */
      RadioTrackTrainMessageQueue__GetRemainingCapacity_Iterable_RBC_Collections_Pkg(
        /* _L10= */(kcg_int32) idx,
        acc,
        &outC->_L2[idx],
        &outC->Context_RadioTrackTrainMessageQueue__GetRemainingCapacity_Iterable_1[idx]);
      outC->_L26 =
        outC->Context_RadioTrackTrainMessageQueue__GetRemainingCapacity_Iterable_1[idx].outAccumulator;
      outC->_L10 = /* _L10= */(kcg_int32) (idx + 1);
      /* _L10= */
      if (!outC->Context_RadioTrackTrainMessageQueue__GetRemainingCapacity_Iterable_1[idx].outContinue) {
        break;
      }
    }
  }
  else {
    outC->_L10 = kcg_lit_int32(0);
  }
  outC->index = outC->_L26;
  outC->_L38 = outC->index;
  outC->_L32 = outC->_L38 + outC->_L33;
  outC->_L34 = RADIO_TRACK_TRAIN_MESSAGE_QUEUE_CAPACITY;
  outC->_L35 = outC->_L34 - outC->_L32;
  outC->remainingCapacity = outC->_L35;
  outC->_L54 = outC->remainingCapacity;
  outC->_L53 = outC->remainingCapacity;
  outC->_L52 = kcg_lit_int32(0);
  kcg_copy_RadioTrackTrainMessageQueueEntry_T(
    &outC->_L43,
    (RadioTrackTrainMessageQueueEntry_T *)
      &RADIO_TRACK_TRAIN_MESSAGE_QUEUE_ENTRY_DEFAULT);
  outC->_L44 = outC->index;
  if ((kcg_lit_int32(0) <= outC->_L44) & (outC->_L44 < kcg_lit_int32(8))) {
    kcg_copy_RadioTrackTrainMessageQueueEntry_T(
      &outC->_L42,
      &outC->_L2[outC->_L44]);
  }
  else {
    kcg_copy_RadioTrackTrainMessageQueueEntry_T(&outC->_L42, &outC->_L43);
  }
  /* _L45=(RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__IsValid#1)/ */
  RadioTrackTrainMessageQueueEntry__IsValid_RBC_Collections_Pkg(
    &outC->_L42,
    &outC->Context_RadioTrackTrainMessageQueueEntry__IsValid_1);
  outC->_L45 =
    outC->Context_RadioTrackTrainMessageQueueEntry__IsValid_1.outIsValid;
  /* _L51= */
  if (outC->_L45) {
    outC->_L51 = outC->_L52;
  }
  else {
    outC->_L51 = outC->_L53;
  }
  outC->_L37 = outC->index;
  outC->_L28 = RADIO_TRACK_TRAIN_MESSAGE_QUEUE_CAPACITY - kcg_lit_int32(1);
  outC->_L30 = outC->_L28 == outC->_L37;
  /* _L31= */
  if (outC->_L30) {
    outC->_L31 = outC->_L51;
  }
  else {
    outC->_L31 = outC->_L54;
  }
  outC->outRemainingCapacity = outC->_L31;
  noname = outC->_L10;
}

#ifndef KCG_USER_DEFINED_INIT
void RadioTrackTrainMessageQueue__GetRemainingCapacity_init_RBC_Collections_Pkg(
  outC_RadioTrackTrainMessageQueue__GetRemainingCapacity_RBC_Collections_Pkg *outC)
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

  outC->_L54 = kcg_lit_int32(0);
  outC->_L53 = kcg_lit_int32(0);
  outC->_L52 = kcg_lit_int32(0);
  outC->_L51 = kcg_lit_int32(0);
  outC->_L45 = kcg_true;
  outC->_L44 = kcg_lit_int32(0);
  outC->_L43.m_IsValid = kcg_true;
  outC->_L43.m_Entry.Header.radioDevice = kcg_lit_int32(0);
  outC->_L43.m_Entry.Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L43.m_Entry.Header.nid_message = kcg_lit_int32(0);
  outC->_L43.m_Entry.Header.t_train = kcg_lit_int32(0);
  outC->_L43.m_Entry.Header.m_ack = kcg_lit_int32(0);
  outC->_L43.m_Entry.Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L43.m_Entry.Header.t_train_reference = kcg_lit_int32(0);
  outC->_L43.m_Entry.Header.nid_em = kcg_lit_int32(0);
  outC->_L43.m_Entry.Header.q_scale = kcg_lit_int32(0);
  outC->_L43.m_Entry.Header.d_sr = kcg_lit_int32(0);
  outC->_L43.m_Entry.Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L43.m_Entry.Header.d_ref = kcg_lit_int32(0);
  outC->_L43.m_Entry.Header.q_dir = kcg_lit_int32(0);
  outC->_L43.m_Entry.Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L43.m_Entry.Header.m_version = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 30; idx1++) {
    outC->_L43.m_Entry.Messages.PacketHeaders[idx1].nid_packet = kcg_lit_int32(0);
    outC->_L43.m_Entry.Messages.PacketHeaders[idx1].q_dir = Q_DIR_Reverse;
    outC->_L43.m_Entry.Messages.PacketHeaders[idx1].valid = kcg_true;
    outC->_L43.m_Entry.Messages.PacketHeaders[idx1].startAddress = kcg_lit_int32(0);
    outC->_L43.m_Entry.Messages.PacketHeaders[idx1].endAddress = kcg_lit_int32(0);
  }
  for (idx2 = 0; idx2 < 500; idx2++) {
    outC->_L43.m_Entry.Messages.PacketData[idx2] = kcg_lit_int32(0);
  }
  outC->_L42.m_IsValid = kcg_true;
  outC->_L42.m_Entry.Header.radioDevice = kcg_lit_int32(0);
  outC->_L42.m_Entry.Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L42.m_Entry.Header.nid_message = kcg_lit_int32(0);
  outC->_L42.m_Entry.Header.t_train = kcg_lit_int32(0);
  outC->_L42.m_Entry.Header.m_ack = kcg_lit_int32(0);
  outC->_L42.m_Entry.Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L42.m_Entry.Header.t_train_reference = kcg_lit_int32(0);
  outC->_L42.m_Entry.Header.nid_em = kcg_lit_int32(0);
  outC->_L42.m_Entry.Header.q_scale = kcg_lit_int32(0);
  outC->_L42.m_Entry.Header.d_sr = kcg_lit_int32(0);
  outC->_L42.m_Entry.Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L42.m_Entry.Header.d_ref = kcg_lit_int32(0);
  outC->_L42.m_Entry.Header.q_dir = kcg_lit_int32(0);
  outC->_L42.m_Entry.Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L42.m_Entry.Header.m_version = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 30; idx3++) {
    outC->_L42.m_Entry.Messages.PacketHeaders[idx3].nid_packet = kcg_lit_int32(0);
    outC->_L42.m_Entry.Messages.PacketHeaders[idx3].q_dir = Q_DIR_Reverse;
    outC->_L42.m_Entry.Messages.PacketHeaders[idx3].valid = kcg_true;
    outC->_L42.m_Entry.Messages.PacketHeaders[idx3].startAddress = kcg_lit_int32(0);
    outC->_L42.m_Entry.Messages.PacketHeaders[idx3].endAddress = kcg_lit_int32(0);
  }
  for (idx4 = 0; idx4 < 500; idx4++) {
    outC->_L42.m_Entry.Messages.PacketData[idx4] = kcg_lit_int32(0);
  }
  outC->_L38 = kcg_lit_int32(0);
  outC->_L37 = kcg_lit_int32(0);
  outC->_L35 = kcg_lit_int32(0);
  outC->_L34 = kcg_lit_int32(0);
  outC->_L33 = kcg_lit_int32(0);
  outC->_L32 = kcg_lit_int32(0);
  outC->_L31 = kcg_lit_int32(0);
  outC->_L30 = kcg_true;
  outC->_L28 = kcg_lit_int32(0);
  outC->_L27 = kcg_lit_int32(0);
  outC->_L26 = kcg_lit_int32(0);
  outC->_L11 = kcg_true;
  outC->_L10 = kcg_lit_int32(0);
  for (idx7 = 0; idx7 < 8; idx7++) {
    outC->_L2[idx7].m_IsValid = kcg_true;
    outC->_L2[idx7].m_Entry.Header.radioDevice = kcg_lit_int32(0);
    outC->_L2[idx7].m_Entry.Header.receivedSystemTime = kcg_lit_int32(0);
    outC->_L2[idx7].m_Entry.Header.nid_message = kcg_lit_int32(0);
    outC->_L2[idx7].m_Entry.Header.t_train = kcg_lit_int32(0);
    outC->_L2[idx7].m_Entry.Header.m_ack = kcg_lit_int32(0);
    outC->_L2[idx7].m_Entry.Header.nid_lrbg = kcg_lit_int32(0);
    outC->_L2[idx7].m_Entry.Header.t_train_reference = kcg_lit_int32(0);
    outC->_L2[idx7].m_Entry.Header.nid_em = kcg_lit_int32(0);
    outC->_L2[idx7].m_Entry.Header.q_scale = kcg_lit_int32(0);
    outC->_L2[idx7].m_Entry.Header.d_sr = kcg_lit_int32(0);
    outC->_L2[idx7].m_Entry.Header.t_sh_rqst = kcg_lit_int32(0);
    outC->_L2[idx7].m_Entry.Header.d_ref = kcg_lit_int32(0);
    outC->_L2[idx7].m_Entry.Header.q_dir = kcg_lit_int32(0);
    outC->_L2[idx7].m_Entry.Header.d_emergencystop = kcg_lit_int32(0);
    outC->_L2[idx7].m_Entry.Header.m_version = kcg_lit_int32(0);
    for (idx5 = 0; idx5 < 30; idx5++) {
      outC->_L2[idx7].m_Entry.Messages.PacketHeaders[idx5].nid_packet =
        kcg_lit_int32(0);
      outC->_L2[idx7].m_Entry.Messages.PacketHeaders[idx5].q_dir = Q_DIR_Reverse;
      outC->_L2[idx7].m_Entry.Messages.PacketHeaders[idx5].valid = kcg_true;
      outC->_L2[idx7].m_Entry.Messages.PacketHeaders[idx5].startAddress =
        kcg_lit_int32(0);
      outC->_L2[idx7].m_Entry.Messages.PacketHeaders[idx5].endAddress =
        kcg_lit_int32(0);
    }
    for (idx6 = 0; idx6 < 500; idx6++) {
      outC->_L2[idx7].m_Entry.Messages.PacketData[idx6] = kcg_lit_int32(0);
    }
  }
  for (idx10 = 0; idx10 < 8; idx10++) {
    outC->_L1.m_Entries[idx10].m_IsValid = kcg_true;
    outC->_L1.m_Entries[idx10].m_Entry.Header.radioDevice = kcg_lit_int32(0);
    outC->_L1.m_Entries[idx10].m_Entry.Header.receivedSystemTime = kcg_lit_int32(0);
    outC->_L1.m_Entries[idx10].m_Entry.Header.nid_message = kcg_lit_int32(0);
    outC->_L1.m_Entries[idx10].m_Entry.Header.t_train = kcg_lit_int32(0);
    outC->_L1.m_Entries[idx10].m_Entry.Header.m_ack = kcg_lit_int32(0);
    outC->_L1.m_Entries[idx10].m_Entry.Header.nid_lrbg = kcg_lit_int32(0);
    outC->_L1.m_Entries[idx10].m_Entry.Header.t_train_reference = kcg_lit_int32(0);
    outC->_L1.m_Entries[idx10].m_Entry.Header.nid_em = kcg_lit_int32(0);
    outC->_L1.m_Entries[idx10].m_Entry.Header.q_scale = kcg_lit_int32(0);
    outC->_L1.m_Entries[idx10].m_Entry.Header.d_sr = kcg_lit_int32(0);
    outC->_L1.m_Entries[idx10].m_Entry.Header.t_sh_rqst = kcg_lit_int32(0);
    outC->_L1.m_Entries[idx10].m_Entry.Header.d_ref = kcg_lit_int32(0);
    outC->_L1.m_Entries[idx10].m_Entry.Header.q_dir = kcg_lit_int32(0);
    outC->_L1.m_Entries[idx10].m_Entry.Header.d_emergencystop = kcg_lit_int32(0);
    outC->_L1.m_Entries[idx10].m_Entry.Header.m_version = kcg_lit_int32(0);
    for (idx8 = 0; idx8 < 30; idx8++) {
      outC->_L1.m_Entries[idx10].m_Entry.Messages.PacketHeaders[idx8].nid_packet =
        kcg_lit_int32(0);
      outC->_L1.m_Entries[idx10].m_Entry.Messages.PacketHeaders[idx8].q_dir =
        Q_DIR_Reverse;
      outC->_L1.m_Entries[idx10].m_Entry.Messages.PacketHeaders[idx8].valid =
        kcg_true;
      outC->_L1.m_Entries[idx10].m_Entry.Messages.PacketHeaders[idx8].startAddress =
        kcg_lit_int32(0);
      outC->_L1.m_Entries[idx10].m_Entry.Messages.PacketHeaders[idx8].endAddress =
        kcg_lit_int32(0);
    }
    for (idx9 = 0; idx9 < 500; idx9++) {
      outC->_L1.m_Entries[idx10].m_Entry.Messages.PacketData[idx9] = kcg_lit_int32(0);
    }
  }
  outC->remainingCapacity = kcg_lit_int32(0);
  outC->index = kcg_lit_int32(0);
  outC->outRemainingCapacity = kcg_lit_int32(0);
  /* _L45=(RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__IsValid#1)/ */
  RadioTrackTrainMessageQueueEntry__IsValid_init_RBC_Collections_Pkg(
    &outC->Context_RadioTrackTrainMessageQueueEntry__IsValid_1);
  for (idx = 0; idx < 8; idx++) {
    /* _L10=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity_Iterable#1)/ */
    RadioTrackTrainMessageQueue__GetRemainingCapacity_Iterable_init_RBC_Collections_Pkg(
      &outC->Context_RadioTrackTrainMessageQueue__GetRemainingCapacity_Iterable_1[idx]);
  }
  /* _L2=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetEntries#1)/ */
  RadioTrackTrainMessageQueue__GetEntries_init_RBC_Collections_Pkg(
    &outC->Context_RadioTrackTrainMessageQueue__GetEntries_1);
}
#endif /* KCG_USER_DEFINED_INIT */


void RadioTrackTrainMessageQueue__GetRemainingCapacity_reset_RBC_Collections_Pkg(
  outC_RadioTrackTrainMessageQueue__GetRemainingCapacity_RBC_Collections_Pkg *outC)
{
  static kcg_size idx;

  /* _L45=(RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__IsValid#1)/ */
  RadioTrackTrainMessageQueueEntry__IsValid_reset_RBC_Collections_Pkg(
    &outC->Context_RadioTrackTrainMessageQueueEntry__IsValid_1);
  for (idx = 0; idx < 8; idx++) {
    /* _L10=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity_Iterable#1)/ */
    RadioTrackTrainMessageQueue__GetRemainingCapacity_Iterable_reset_RBC_Collections_Pkg(
      &outC->Context_RadioTrackTrainMessageQueue__GetRemainingCapacity_Iterable_1[idx]);
  }
  /* _L2=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetEntries#1)/ */
  RadioTrackTrainMessageQueue__GetEntries_reset_RBC_Collections_Pkg(
    &outC->Context_RadioTrackTrainMessageQueue__GetEntries_1);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RadioTrackTrainMessageQueue__GetRemainingCapacity_RBC_Collections_Pkg.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

