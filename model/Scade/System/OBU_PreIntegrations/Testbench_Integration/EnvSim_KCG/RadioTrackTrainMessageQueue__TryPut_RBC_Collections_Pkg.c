/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg.h"

/* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut/ */
void RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg(
  /* inRadioTrackTrainMessageQueue/ */
  RadioTrackTrainMessageQueue_T *inRadioTrackTrainMessageQueue,
  /* inRadioTrackTrainMessageQueueEntry/ */
  RadioTrackTrainMessageQueueEntry_T *inRadioTrackTrainMessageQueueEntry,
  outC_RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg *outC)
{
  /* outRadioTrackTrainMessageQueue/ */
  static RadioTrackTrainMessageQueue_T outRadioTrackTrainMessageQueue_partial;
  /* outRadioTrackTrainMessageQueue/ */
  static RadioTrackTrainMessageQueue_T _1_outRadioTrackTrainMessageQueue_partial;

  outC->_L6 = kcg_lit_int64(0);
  kcg_copy_RadioTrackTrainMessageQueue_T(
    &outC->_L1,
    inRadioTrackTrainMessageQueue);
  /* _L4=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity#1)/ */
  RadioTrackTrainMessageQueue__GetRemainingCapacity_RBC_Collections_Pkg(
    &outC->_L1,
    &outC->Context_RadioTrackTrainMessageQueue__GetRemainingCapacity_1);
  outC->_L4 =
    outC->Context_RadioTrackTrainMessageQueue__GetRemainingCapacity_1.outRemainingCapacity;
  outC->_L5 = outC->_L4 > outC->_L6;
  outC->hasCapacity = outC->_L5;
  outC->IfBlock1_clock = outC->hasCapacity;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    kcg_copy_RadioTrackTrainMessageQueueEntry_T(
      &outC->_L2_then_IfBlock1,
      inRadioTrackTrainMessageQueueEntry);
    kcg_copy_RadioTrackTrainMessageQueueEntry_T(
      &outC->_L8_then_IfBlock1[0],
      &outC->_L2_then_IfBlock1);
    kcg_copy_RadioTrackTrainMessageQueue_T(
      &outC->_L3_then_IfBlock1,
      inRadioTrackTrainMessageQueue);
    /* IfBlock1:then:_L5=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetEntries#1)/ */
    RadioTrackTrainMessageQueue__GetEntries_RBC_Collections_Pkg(
      &outC->_L3_then_IfBlock1,
      &outC->Context_RadioTrackTrainMessageQueue__GetEntries_1);
    kcg_copy_RadioTrackTrainMessageQueueEntries_T(
      &outC->_L5_then_IfBlock1,
      &outC->Context_RadioTrackTrainMessageQueue__GetEntries_1.outRadioTrackTrainMessageQueueEntries);
    kcg_copy_array(&outC->_L1_then_IfBlock1, (array *) &outC->_L5_then_IfBlock1[0]);
    kcg_copy_RadioTrackTrainMessageQueueEntry_T(
      &outC->_L4_then_IfBlock1[0],
      &outC->_L8_then_IfBlock1[0]);
    kcg_copy_array(&outC->_L4_then_IfBlock1[1], &outC->_L1_then_IfBlock1);
    /* IfBlock1:then:_L6=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__SetEntries#1)/ */
    RadioTrackTrainMessageQueue__SetEntries_RBC_Collections_Pkg(
      &outC->_L4_then_IfBlock1,
      &outC->Context_RadioTrackTrainMessageQueue__SetEntries_1);
    kcg_copy_RadioTrackTrainMessageQueue_T(
      &outC->_L6_then_IfBlock1,
      &outC->Context_RadioTrackTrainMessageQueue__SetEntries_1.out_RadioTrackTrainMessageQueue);
    kcg_copy_RadioTrackTrainMessageQueue_T(
      &outRadioTrackTrainMessageQueue_partial,
      &outC->_L6_then_IfBlock1);
    kcg_copy_RadioTrackTrainMessageQueue_T(
      &outC->outRadioTrackTrainMessageQueue,
      &outRadioTrackTrainMessageQueue_partial);
  }
  else {
    kcg_copy_RadioTrackTrainMessageQueue_T(
      &outC->_L1_else_IfBlock1,
      inRadioTrackTrainMessageQueue);
    kcg_copy_RadioTrackTrainMessageQueue_T(
      &_1_outRadioTrackTrainMessageQueue_partial,
      &outC->_L1_else_IfBlock1);
    kcg_copy_RadioTrackTrainMessageQueue_T(
      &outC->outRadioTrackTrainMessageQueue,
      &_1_outRadioTrackTrainMessageQueue_partial);
  }
}

#ifndef KCG_USER_DEFINED_INIT
void RadioTrackTrainMessageQueue__TryPut_init_RBC_Collections_Pkg(
  outC_RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg *outC)
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
  static kcg_size idx20;
  static kcg_size idx21;
  static kcg_size idx22;
  static kcg_size idx23;
  static kcg_size idx24;
  static kcg_size idx25;
  static kcg_size idx26;
  static kcg_size idx27;
  static kcg_size idx28;

  outC->_L6 = kcg_lit_int64(0);
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 8; idx2++) {
    outC->_L1.m_Entries[idx2].m_IsValid = kcg_true;
    outC->_L1.m_Entries[idx2].m_Entry.Header.radioDevice = kcg_lit_int64(0);
    outC->_L1.m_Entries[idx2].m_Entry.Header.receivedSystemTime = kcg_lit_int64(0);
    outC->_L1.m_Entries[idx2].m_Entry.Header.nid_message = kcg_lit_int64(0);
    outC->_L1.m_Entries[idx2].m_Entry.Header.t_train = kcg_lit_int64(0);
    outC->_L1.m_Entries[idx2].m_Entry.Header.m_ack = kcg_lit_int64(0);
    outC->_L1.m_Entries[idx2].m_Entry.Header.nid_lrbg = kcg_lit_int64(0);
    outC->_L1.m_Entries[idx2].m_Entry.Header.t_train_reference = kcg_lit_int64(0);
    outC->_L1.m_Entries[idx2].m_Entry.Header.nid_em = kcg_lit_int64(0);
    outC->_L1.m_Entries[idx2].m_Entry.Header.q_scale = kcg_lit_int64(0);
    outC->_L1.m_Entries[idx2].m_Entry.Header.d_sr = kcg_lit_int64(0);
    outC->_L1.m_Entries[idx2].m_Entry.Header.t_sh_rqst = kcg_lit_int64(0);
    outC->_L1.m_Entries[idx2].m_Entry.Header.d_ref = kcg_lit_int64(0);
    outC->_L1.m_Entries[idx2].m_Entry.Header.q_dir = kcg_lit_int64(0);
    outC->_L1.m_Entries[idx2].m_Entry.Header.d_emergencystop = kcg_lit_int64(0);
    outC->_L1.m_Entries[idx2].m_Entry.Header.m_version = kcg_lit_int64(0);
    for (idx = 0; idx < 30; idx++) {
      outC->_L1.m_Entries[idx2].m_Entry.Messages.PacketHeaders[idx].nid_packet =
        kcg_lit_int64(0);
      outC->_L1.m_Entries[idx2].m_Entry.Messages.PacketHeaders[idx].q_dir =
        Q_DIR_Reverse;
      outC->_L1.m_Entries[idx2].m_Entry.Messages.PacketHeaders[idx].valid = kcg_true;
      outC->_L1.m_Entries[idx2].m_Entry.Messages.PacketHeaders[idx].startAddress =
        kcg_lit_int64(0);
      outC->_L1.m_Entries[idx2].m_Entry.Messages.PacketHeaders[idx].endAddress =
        kcg_lit_int64(0);
    }
    for (idx1 = 0; idx1 < 500; idx1++) {
      outC->_L1.m_Entries[idx2].m_Entry.Messages.PacketData[idx1] = kcg_lit_int64(0);
    }
  }
  outC->hasCapacity = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  for (idx5 = 0; idx5 < 8; idx5++) {
    outC->_L1_else_IfBlock1.m_Entries[idx5].m_IsValid = kcg_true;
    outC->_L1_else_IfBlock1.m_Entries[idx5].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L1_else_IfBlock1.m_Entries[idx5].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L1_else_IfBlock1.m_Entries[idx5].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L1_else_IfBlock1.m_Entries[idx5].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L1_else_IfBlock1.m_Entries[idx5].m_Entry.Header.m_ack = kcg_lit_int64(0);
    outC->_L1_else_IfBlock1.m_Entries[idx5].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L1_else_IfBlock1.m_Entries[idx5].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L1_else_IfBlock1.m_Entries[idx5].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L1_else_IfBlock1.m_Entries[idx5].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L1_else_IfBlock1.m_Entries[idx5].m_Entry.Header.d_sr = kcg_lit_int64(0);
    outC->_L1_else_IfBlock1.m_Entries[idx5].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L1_else_IfBlock1.m_Entries[idx5].m_Entry.Header.d_ref = kcg_lit_int64(0);
    outC->_L1_else_IfBlock1.m_Entries[idx5].m_Entry.Header.q_dir = kcg_lit_int64(0);
    outC->_L1_else_IfBlock1.m_Entries[idx5].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L1_else_IfBlock1.m_Entries[idx5].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx3 = 0; idx3 < 30; idx3++) {
      outC->_L1_else_IfBlock1.m_Entries[idx5].m_Entry.Messages.PacketHeaders[idx3].nid_packet =
        kcg_lit_int64(0);
      outC->_L1_else_IfBlock1.m_Entries[idx5].m_Entry.Messages.PacketHeaders[idx3].q_dir =
        Q_DIR_Reverse;
      outC->_L1_else_IfBlock1.m_Entries[idx5].m_Entry.Messages.PacketHeaders[idx3].valid =
        kcg_true;
      outC->_L1_else_IfBlock1.m_Entries[idx5].m_Entry.Messages.PacketHeaders[idx3].startAddress =
        kcg_lit_int64(0);
      outC->_L1_else_IfBlock1.m_Entries[idx5].m_Entry.Messages.PacketHeaders[idx3].endAddress =
        kcg_lit_int64(0);
    }
    for (idx4 = 0; idx4 < 500; idx4++) {
      outC->_L1_else_IfBlock1.m_Entries[idx5].m_Entry.Messages.PacketData[idx4] =
        kcg_lit_int64(0);
    }
  }
  for (idx8 = 0; idx8 < 7; idx8++) {
    outC->_L1_then_IfBlock1[idx8].m_IsValid = kcg_true;
    outC->_L1_then_IfBlock1[idx8].m_Entry.Header.radioDevice = kcg_lit_int64(0);
    outC->_L1_then_IfBlock1[idx8].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L1_then_IfBlock1[idx8].m_Entry.Header.nid_message = kcg_lit_int64(0);
    outC->_L1_then_IfBlock1[idx8].m_Entry.Header.t_train = kcg_lit_int64(0);
    outC->_L1_then_IfBlock1[idx8].m_Entry.Header.m_ack = kcg_lit_int64(0);
    outC->_L1_then_IfBlock1[idx8].m_Entry.Header.nid_lrbg = kcg_lit_int64(0);
    outC->_L1_then_IfBlock1[idx8].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L1_then_IfBlock1[idx8].m_Entry.Header.nid_em = kcg_lit_int64(0);
    outC->_L1_then_IfBlock1[idx8].m_Entry.Header.q_scale = kcg_lit_int64(0);
    outC->_L1_then_IfBlock1[idx8].m_Entry.Header.d_sr = kcg_lit_int64(0);
    outC->_L1_then_IfBlock1[idx8].m_Entry.Header.t_sh_rqst = kcg_lit_int64(0);
    outC->_L1_then_IfBlock1[idx8].m_Entry.Header.d_ref = kcg_lit_int64(0);
    outC->_L1_then_IfBlock1[idx8].m_Entry.Header.q_dir = kcg_lit_int64(0);
    outC->_L1_then_IfBlock1[idx8].m_Entry.Header.d_emergencystop = kcg_lit_int64(0);
    outC->_L1_then_IfBlock1[idx8].m_Entry.Header.m_version = kcg_lit_int64(0);
    for (idx6 = 0; idx6 < 30; idx6++) {
      outC->_L1_then_IfBlock1[idx8].m_Entry.Messages.PacketHeaders[idx6].nid_packet =
        kcg_lit_int64(0);
      outC->_L1_then_IfBlock1[idx8].m_Entry.Messages.PacketHeaders[idx6].q_dir =
        Q_DIR_Reverse;
      outC->_L1_then_IfBlock1[idx8].m_Entry.Messages.PacketHeaders[idx6].valid =
        kcg_true;
      outC->_L1_then_IfBlock1[idx8].m_Entry.Messages.PacketHeaders[idx6].startAddress =
        kcg_lit_int64(0);
      outC->_L1_then_IfBlock1[idx8].m_Entry.Messages.PacketHeaders[idx6].endAddress =
        kcg_lit_int64(0);
    }
    for (idx7 = 0; idx7 < 500; idx7++) {
      outC->_L1_then_IfBlock1[idx8].m_Entry.Messages.PacketData[idx7] =
        kcg_lit_int64(0);
    }
  }
  outC->_L2_then_IfBlock1.m_IsValid = kcg_true;
  outC->_L2_then_IfBlock1.m_Entry.Header.radioDevice = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.m_Entry.Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.m_Entry.Header.nid_message = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.m_Entry.Header.t_train = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.m_Entry.Header.m_ack = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.m_Entry.Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.m_Entry.Header.t_train_reference = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.m_Entry.Header.nid_em = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.m_Entry.Header.q_scale = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.m_Entry.Header.d_sr = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.m_Entry.Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.m_Entry.Header.d_ref = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.m_Entry.Header.q_dir = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.m_Entry.Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.m_Entry.Header.m_version = kcg_lit_int64(0);
  for (idx9 = 0; idx9 < 30; idx9++) {
    outC->_L2_then_IfBlock1.m_Entry.Messages.PacketHeaders[idx9].nid_packet =
      kcg_lit_int64(0);
    outC->_L2_then_IfBlock1.m_Entry.Messages.PacketHeaders[idx9].q_dir =
      Q_DIR_Reverse;
    outC->_L2_then_IfBlock1.m_Entry.Messages.PacketHeaders[idx9].valid = kcg_true;
    outC->_L2_then_IfBlock1.m_Entry.Messages.PacketHeaders[idx9].startAddress =
      kcg_lit_int64(0);
    outC->_L2_then_IfBlock1.m_Entry.Messages.PacketHeaders[idx9].endAddress =
      kcg_lit_int64(0);
  }
  for (idx10 = 0; idx10 < 500; idx10++) {
    outC->_L2_then_IfBlock1.m_Entry.Messages.PacketData[idx10] = kcg_lit_int64(0);
  }
  for (idx13 = 0; idx13 < 8; idx13++) {
    outC->_L3_then_IfBlock1.m_Entries[idx13].m_IsValid = kcg_true;
    outC->_L3_then_IfBlock1.m_Entries[idx13].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L3_then_IfBlock1.m_Entries[idx13].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L3_then_IfBlock1.m_Entries[idx13].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L3_then_IfBlock1.m_Entries[idx13].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L3_then_IfBlock1.m_Entries[idx13].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L3_then_IfBlock1.m_Entries[idx13].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L3_then_IfBlock1.m_Entries[idx13].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L3_then_IfBlock1.m_Entries[idx13].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L3_then_IfBlock1.m_Entries[idx13].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L3_then_IfBlock1.m_Entries[idx13].m_Entry.Header.d_sr = kcg_lit_int64(0);
    outC->_L3_then_IfBlock1.m_Entries[idx13].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L3_then_IfBlock1.m_Entries[idx13].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L3_then_IfBlock1.m_Entries[idx13].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L3_then_IfBlock1.m_Entries[idx13].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L3_then_IfBlock1.m_Entries[idx13].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx11 = 0; idx11 < 30; idx11++) {
      outC->_L3_then_IfBlock1.m_Entries[idx13].m_Entry.Messages.PacketHeaders[idx11].nid_packet =
        kcg_lit_int64(0);
      outC->_L3_then_IfBlock1.m_Entries[idx13].m_Entry.Messages.PacketHeaders[idx11].q_dir =
        Q_DIR_Reverse;
      outC->_L3_then_IfBlock1.m_Entries[idx13].m_Entry.Messages.PacketHeaders[idx11].valid =
        kcg_true;
      outC->_L3_then_IfBlock1.m_Entries[idx13].m_Entry.Messages.PacketHeaders[idx11].startAddress =
        kcg_lit_int64(0);
      outC->_L3_then_IfBlock1.m_Entries[idx13].m_Entry.Messages.PacketHeaders[idx11].endAddress =
        kcg_lit_int64(0);
    }
    for (idx12 = 0; idx12 < 500; idx12++) {
      outC->_L3_then_IfBlock1.m_Entries[idx13].m_Entry.Messages.PacketData[idx12] =
        kcg_lit_int64(0);
    }
  }
  for (idx16 = 0; idx16 < 8; idx16++) {
    outC->_L4_then_IfBlock1[idx16].m_IsValid = kcg_true;
    outC->_L4_then_IfBlock1[idx16].m_Entry.Header.radioDevice = kcg_lit_int64(0);
    outC->_L4_then_IfBlock1[idx16].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L4_then_IfBlock1[idx16].m_Entry.Header.nid_message = kcg_lit_int64(0);
    outC->_L4_then_IfBlock1[idx16].m_Entry.Header.t_train = kcg_lit_int64(0);
    outC->_L4_then_IfBlock1[idx16].m_Entry.Header.m_ack = kcg_lit_int64(0);
    outC->_L4_then_IfBlock1[idx16].m_Entry.Header.nid_lrbg = kcg_lit_int64(0);
    outC->_L4_then_IfBlock1[idx16].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L4_then_IfBlock1[idx16].m_Entry.Header.nid_em = kcg_lit_int64(0);
    outC->_L4_then_IfBlock1[idx16].m_Entry.Header.q_scale = kcg_lit_int64(0);
    outC->_L4_then_IfBlock1[idx16].m_Entry.Header.d_sr = kcg_lit_int64(0);
    outC->_L4_then_IfBlock1[idx16].m_Entry.Header.t_sh_rqst = kcg_lit_int64(0);
    outC->_L4_then_IfBlock1[idx16].m_Entry.Header.d_ref = kcg_lit_int64(0);
    outC->_L4_then_IfBlock1[idx16].m_Entry.Header.q_dir = kcg_lit_int64(0);
    outC->_L4_then_IfBlock1[idx16].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L4_then_IfBlock1[idx16].m_Entry.Header.m_version = kcg_lit_int64(0);
    for (idx14 = 0; idx14 < 30; idx14++) {
      outC->_L4_then_IfBlock1[idx16].m_Entry.Messages.PacketHeaders[idx14].nid_packet =
        kcg_lit_int64(0);
      outC->_L4_then_IfBlock1[idx16].m_Entry.Messages.PacketHeaders[idx14].q_dir =
        Q_DIR_Reverse;
      outC->_L4_then_IfBlock1[idx16].m_Entry.Messages.PacketHeaders[idx14].valid =
        kcg_true;
      outC->_L4_then_IfBlock1[idx16].m_Entry.Messages.PacketHeaders[idx14].startAddress =
        kcg_lit_int64(0);
      outC->_L4_then_IfBlock1[idx16].m_Entry.Messages.PacketHeaders[idx14].endAddress =
        kcg_lit_int64(0);
    }
    for (idx15 = 0; idx15 < 500; idx15++) {
      outC->_L4_then_IfBlock1[idx16].m_Entry.Messages.PacketData[idx15] =
        kcg_lit_int64(0);
    }
  }
  for (idx19 = 0; idx19 < 8; idx19++) {
    outC->_L5_then_IfBlock1[idx19].m_IsValid = kcg_true;
    outC->_L5_then_IfBlock1[idx19].m_Entry.Header.radioDevice = kcg_lit_int64(0);
    outC->_L5_then_IfBlock1[idx19].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L5_then_IfBlock1[idx19].m_Entry.Header.nid_message = kcg_lit_int64(0);
    outC->_L5_then_IfBlock1[idx19].m_Entry.Header.t_train = kcg_lit_int64(0);
    outC->_L5_then_IfBlock1[idx19].m_Entry.Header.m_ack = kcg_lit_int64(0);
    outC->_L5_then_IfBlock1[idx19].m_Entry.Header.nid_lrbg = kcg_lit_int64(0);
    outC->_L5_then_IfBlock1[idx19].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L5_then_IfBlock1[idx19].m_Entry.Header.nid_em = kcg_lit_int64(0);
    outC->_L5_then_IfBlock1[idx19].m_Entry.Header.q_scale = kcg_lit_int64(0);
    outC->_L5_then_IfBlock1[idx19].m_Entry.Header.d_sr = kcg_lit_int64(0);
    outC->_L5_then_IfBlock1[idx19].m_Entry.Header.t_sh_rqst = kcg_lit_int64(0);
    outC->_L5_then_IfBlock1[idx19].m_Entry.Header.d_ref = kcg_lit_int64(0);
    outC->_L5_then_IfBlock1[idx19].m_Entry.Header.q_dir = kcg_lit_int64(0);
    outC->_L5_then_IfBlock1[idx19].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L5_then_IfBlock1[idx19].m_Entry.Header.m_version = kcg_lit_int64(0);
    for (idx17 = 0; idx17 < 30; idx17++) {
      outC->_L5_then_IfBlock1[idx19].m_Entry.Messages.PacketHeaders[idx17].nid_packet =
        kcg_lit_int64(0);
      outC->_L5_then_IfBlock1[idx19].m_Entry.Messages.PacketHeaders[idx17].q_dir =
        Q_DIR_Reverse;
      outC->_L5_then_IfBlock1[idx19].m_Entry.Messages.PacketHeaders[idx17].valid =
        kcg_true;
      outC->_L5_then_IfBlock1[idx19].m_Entry.Messages.PacketHeaders[idx17].startAddress =
        kcg_lit_int64(0);
      outC->_L5_then_IfBlock1[idx19].m_Entry.Messages.PacketHeaders[idx17].endAddress =
        kcg_lit_int64(0);
    }
    for (idx18 = 0; idx18 < 500; idx18++) {
      outC->_L5_then_IfBlock1[idx19].m_Entry.Messages.PacketData[idx18] =
        kcg_lit_int64(0);
    }
  }
  for (idx22 = 0; idx22 < 8; idx22++) {
    outC->_L6_then_IfBlock1.m_Entries[idx22].m_IsValid = kcg_true;
    outC->_L6_then_IfBlock1.m_Entries[idx22].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L6_then_IfBlock1.m_Entries[idx22].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L6_then_IfBlock1.m_Entries[idx22].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L6_then_IfBlock1.m_Entries[idx22].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L6_then_IfBlock1.m_Entries[idx22].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L6_then_IfBlock1.m_Entries[idx22].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L6_then_IfBlock1.m_Entries[idx22].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L6_then_IfBlock1.m_Entries[idx22].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L6_then_IfBlock1.m_Entries[idx22].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L6_then_IfBlock1.m_Entries[idx22].m_Entry.Header.d_sr = kcg_lit_int64(0);
    outC->_L6_then_IfBlock1.m_Entries[idx22].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L6_then_IfBlock1.m_Entries[idx22].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L6_then_IfBlock1.m_Entries[idx22].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L6_then_IfBlock1.m_Entries[idx22].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L6_then_IfBlock1.m_Entries[idx22].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx20 = 0; idx20 < 30; idx20++) {
      outC->_L6_then_IfBlock1.m_Entries[idx22].m_Entry.Messages.PacketHeaders[idx20].nid_packet =
        kcg_lit_int64(0);
      outC->_L6_then_IfBlock1.m_Entries[idx22].m_Entry.Messages.PacketHeaders[idx20].q_dir =
        Q_DIR_Reverse;
      outC->_L6_then_IfBlock1.m_Entries[idx22].m_Entry.Messages.PacketHeaders[idx20].valid =
        kcg_true;
      outC->_L6_then_IfBlock1.m_Entries[idx22].m_Entry.Messages.PacketHeaders[idx20].startAddress =
        kcg_lit_int64(0);
      outC->_L6_then_IfBlock1.m_Entries[idx22].m_Entry.Messages.PacketHeaders[idx20].endAddress =
        kcg_lit_int64(0);
    }
    for (idx21 = 0; idx21 < 500; idx21++) {
      outC->_L6_then_IfBlock1.m_Entries[idx22].m_Entry.Messages.PacketData[idx21] =
        kcg_lit_int64(0);
    }
  }
  for (idx25 = 0; idx25 < 1; idx25++) {
    outC->_L8_then_IfBlock1[idx25].m_IsValid = kcg_true;
    outC->_L8_then_IfBlock1[idx25].m_Entry.Header.radioDevice = kcg_lit_int64(0);
    outC->_L8_then_IfBlock1[idx25].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L8_then_IfBlock1[idx25].m_Entry.Header.nid_message = kcg_lit_int64(0);
    outC->_L8_then_IfBlock1[idx25].m_Entry.Header.t_train = kcg_lit_int64(0);
    outC->_L8_then_IfBlock1[idx25].m_Entry.Header.m_ack = kcg_lit_int64(0);
    outC->_L8_then_IfBlock1[idx25].m_Entry.Header.nid_lrbg = kcg_lit_int64(0);
    outC->_L8_then_IfBlock1[idx25].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L8_then_IfBlock1[idx25].m_Entry.Header.nid_em = kcg_lit_int64(0);
    outC->_L8_then_IfBlock1[idx25].m_Entry.Header.q_scale = kcg_lit_int64(0);
    outC->_L8_then_IfBlock1[idx25].m_Entry.Header.d_sr = kcg_lit_int64(0);
    outC->_L8_then_IfBlock1[idx25].m_Entry.Header.t_sh_rqst = kcg_lit_int64(0);
    outC->_L8_then_IfBlock1[idx25].m_Entry.Header.d_ref = kcg_lit_int64(0);
    outC->_L8_then_IfBlock1[idx25].m_Entry.Header.q_dir = kcg_lit_int64(0);
    outC->_L8_then_IfBlock1[idx25].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L8_then_IfBlock1[idx25].m_Entry.Header.m_version = kcg_lit_int64(0);
    for (idx23 = 0; idx23 < 30; idx23++) {
      outC->_L8_then_IfBlock1[idx25].m_Entry.Messages.PacketHeaders[idx23].nid_packet =
        kcg_lit_int64(0);
      outC->_L8_then_IfBlock1[idx25].m_Entry.Messages.PacketHeaders[idx23].q_dir =
        Q_DIR_Reverse;
      outC->_L8_then_IfBlock1[idx25].m_Entry.Messages.PacketHeaders[idx23].valid =
        kcg_true;
      outC->_L8_then_IfBlock1[idx25].m_Entry.Messages.PacketHeaders[idx23].startAddress =
        kcg_lit_int64(0);
      outC->_L8_then_IfBlock1[idx25].m_Entry.Messages.PacketHeaders[idx23].endAddress =
        kcg_lit_int64(0);
    }
    for (idx24 = 0; idx24 < 500; idx24++) {
      outC->_L8_then_IfBlock1[idx25].m_Entry.Messages.PacketData[idx24] =
        kcg_lit_int64(0);
    }
  }
  for (idx28 = 0; idx28 < 8; idx28++) {
    outC->outRadioTrackTrainMessageQueue.m_Entries[idx28].m_IsValid = kcg_true;
    outC->outRadioTrackTrainMessageQueue.m_Entries[idx28].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->outRadioTrackTrainMessageQueue.m_Entries[idx28].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->outRadioTrackTrainMessageQueue.m_Entries[idx28].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->outRadioTrackTrainMessageQueue.m_Entries[idx28].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->outRadioTrackTrainMessageQueue.m_Entries[idx28].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->outRadioTrackTrainMessageQueue.m_Entries[idx28].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->outRadioTrackTrainMessageQueue.m_Entries[idx28].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->outRadioTrackTrainMessageQueue.m_Entries[idx28].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->outRadioTrackTrainMessageQueue.m_Entries[idx28].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->outRadioTrackTrainMessageQueue.m_Entries[idx28].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->outRadioTrackTrainMessageQueue.m_Entries[idx28].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->outRadioTrackTrainMessageQueue.m_Entries[idx28].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->outRadioTrackTrainMessageQueue.m_Entries[idx28].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->outRadioTrackTrainMessageQueue.m_Entries[idx28].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->outRadioTrackTrainMessageQueue.m_Entries[idx28].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx26 = 0; idx26 < 30; idx26++) {
      outC->outRadioTrackTrainMessageQueue.m_Entries[idx28].m_Entry.Messages.PacketHeaders[idx26].nid_packet =
        kcg_lit_int64(0);
      outC->outRadioTrackTrainMessageQueue.m_Entries[idx28].m_Entry.Messages.PacketHeaders[idx26].q_dir =
        Q_DIR_Reverse;
      outC->outRadioTrackTrainMessageQueue.m_Entries[idx28].m_Entry.Messages.PacketHeaders[idx26].valid =
        kcg_true;
      outC->outRadioTrackTrainMessageQueue.m_Entries[idx28].m_Entry.Messages.PacketHeaders[idx26].startAddress =
        kcg_lit_int64(0);
      outC->outRadioTrackTrainMessageQueue.m_Entries[idx28].m_Entry.Messages.PacketHeaders[idx26].endAddress =
        kcg_lit_int64(0);
    }
    for (idx27 = 0; idx27 < 500; idx27++) {
      outC->outRadioTrackTrainMessageQueue.m_Entries[idx28].m_Entry.Messages.PacketData[idx27] =
        kcg_lit_int64(0);
    }
  }
  /* IfBlock1:then:_L6=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__SetEntries#1)/ */
  RadioTrackTrainMessageQueue__SetEntries_init_RBC_Collections_Pkg(
    &outC->Context_RadioTrackTrainMessageQueue__SetEntries_1);
  /* IfBlock1:then:_L5=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetEntries#1)/ */
  RadioTrackTrainMessageQueue__GetEntries_init_RBC_Collections_Pkg(
    &outC->Context_RadioTrackTrainMessageQueue__GetEntries_1);
  /* _L4=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity#1)/ */
  RadioTrackTrainMessageQueue__GetRemainingCapacity_init_RBC_Collections_Pkg(
    &outC->Context_RadioTrackTrainMessageQueue__GetRemainingCapacity_1);
}
#endif /* KCG_USER_DEFINED_INIT */


void RadioTrackTrainMessageQueue__TryPut_reset_RBC_Collections_Pkg(
  outC_RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg *outC)
{
  /* IfBlock1:then:_L6=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__SetEntries#1)/ */
  RadioTrackTrainMessageQueue__SetEntries_reset_RBC_Collections_Pkg(
    &outC->Context_RadioTrackTrainMessageQueue__SetEntries_1);
  /* IfBlock1:then:_L5=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetEntries#1)/ */
  RadioTrackTrainMessageQueue__GetEntries_reset_RBC_Collections_Pkg(
    &outC->Context_RadioTrackTrainMessageQueue__GetEntries_1);
  /* _L4=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity#1)/ */
  RadioTrackTrainMessageQueue__GetRemainingCapacity_reset_RBC_Collections_Pkg(
    &outC->Context_RadioTrackTrainMessageQueue__GetRemainingCapacity_1);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

