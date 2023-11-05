/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainMessageQueue__Take_RBC_Collections_Pkg.h"

/* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take/ */
void RadioTrackTrainMessageQueue__Take_RBC_Collections_Pkg(
  /* inRadioTrackTrainMessageQueue/ */
  RadioTrackTrainMessageQueue_T *inRadioTrackTrainMessageQueue,
  outC_RadioTrackTrainMessageQueue__Take_RBC_Collections_Pkg *outC)
{
  static kcg_size idx;
  static kcg_int32 acc;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  /* outRadioTrackTrainMessageQueue/ */
  static RadioTrackTrainMessageQueue_T outRadioTrackTrainMessageQueue_partial;
  /* outRadioTrackTrainMessageQueueEntry/ */
  static RadioTrackTrainMessageQueueEntry_T outRadioTrackTrainMessageQueueEntry_partial;
  /* outRadioTrackTrainMessageQueue/ */
  static RadioTrackTrainMessageQueue_T _5_outRadioTrackTrainMessageQueue_partial;
  /* outRadioTrackTrainMessageQueueEntry/ */
  static RadioTrackTrainMessageQueueEntry_T _6_outRadioTrackTrainMessageQueueEntry_partial;
  static kcg_int32 noname;
  /* outRadioTrackTrainMessageQueueEntry/ */
  static RadioTrackTrainMessageQueueEntry_T _7_outRadioTrackTrainMessageQueueEntry_partial;
  /* outRadioTrackTrainMessageQueue/ */
  static RadioTrackTrainMessageQueue_T _8_outRadioTrackTrainMessageQueue_partial;
  /* outRadioTrackTrainMessageQueueEntry/ */
  static RadioTrackTrainMessageQueueEntry_T _9_outRadioTrackTrainMessageQueueEntry_partial;
  /* outRadioTrackTrainMessageQueue/ */
  static RadioTrackTrainMessageQueue_T _10_outRadioTrackTrainMessageQueue_partial;

  kcg_copy_RadioTrackTrainMessageQueue_T(
    &outC->_L1,
    inRadioTrackTrainMessageQueue);
  /* _L2=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity#1)/ */
  RadioTrackTrainMessageQueue__GetRemainingCapacity_RBC_Collections_Pkg(
    &outC->_L1,
    &outC->Context_RadioTrackTrainMessageQueue__GetRemainingCapacity_1);
  outC->_L2 =
    outC->Context_RadioTrackTrainMessageQueue__GetRemainingCapacity_1.outRemainingCapacity;
  outC->remainingCapacity = outC->_L2;
  outC->IfBlock1_clock = outC->remainingCapacity == kcg_lit_int32(0);
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    kcg_copy_RadioTrackTrainMessageQueueEntry_T(
      &outC->_L8_then_IfBlock1,
      (RadioTrackTrainMessageQueueEntry_T *)
        &RADIO_TRACK_TRAIN_MESSAGE_QUEUE_ENTRY_DEFAULT);
    kcg_copy_RadioTrackTrainMessageQueueEntry_T(
      &outC->_L9_then_IfBlock1[0],
      &outC->_L8_then_IfBlock1);
    kcg_copy_RadioTrackTrainMessageQueue_T(
      &outC->_L1_then_IfBlock1,
      inRadioTrackTrainMessageQueue);
    /* IfBlock1:then:_L2=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetEntries#2)/ */
    RadioTrackTrainMessageQueue__GetEntries_RBC_Collections_Pkg(
      &outC->_L1_then_IfBlock1,
      &outC->Context_RadioTrackTrainMessageQueue__GetEntries_2);
    kcg_copy_RadioTrackTrainMessageQueueEntries_T(
      &outC->_L2_then_IfBlock1,
      &outC->Context_RadioTrackTrainMessageQueue__GetEntries_2.outRadioTrackTrainMessageQueueEntries);
    kcg_copy_array(&outC->_L3_then_IfBlock1, (array *) &outC->_L2_then_IfBlock1[0]);
    kcg_copy_array(&outC->_L7_then_IfBlock1[0], &outC->_L3_then_IfBlock1);
    kcg_copy_RadioTrackTrainMessageQueueEntry_T(
      &outC->_L7_then_IfBlock1[7],
      &outC->_L9_then_IfBlock1[0]);
    /* IfBlock1:then:_L10=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__SetEntries#1)/ */
    RadioTrackTrainMessageQueue__SetEntries_RBC_Collections_Pkg(
      &outC->_L7_then_IfBlock1,
      &outC->Context_RadioTrackTrainMessageQueue__SetEntries_1);
    kcg_copy_RadioTrackTrainMessageQueue_T(
      &outC->_L10_then_IfBlock1,
      &outC->Context_RadioTrackTrainMessageQueue__SetEntries_1.out_RadioTrackTrainMessageQueue);
    kcg_copy_RadioTrackTrainMessageQueue_T(
      &outRadioTrackTrainMessageQueue_partial,
      &outC->_L10_then_IfBlock1);
    kcg_copy_RadioTrackTrainMessageQueueEntry_T(
      &outC->_L6_then_IfBlock1,
      (RadioTrackTrainMessageQueueEntry_T *)
        &RADIO_TRACK_TRAIN_MESSAGE_QUEUE_ENTRY_DEFAULT);
    outC->_L5_then_IfBlock1 = RADIO_TRACK_TRAIN_MESSAGE_QUEUE_CAPACITY -
      kcg_lit_int32(1);
    if ((kcg_lit_int32(0) <= outC->_L5_then_IfBlock1) &
      (outC->_L5_then_IfBlock1 < kcg_lit_int32(8))) {
      kcg_copy_RadioTrackTrainMessageQueueEntry_T(
        &outC->_L4_then_IfBlock1,
        &outC->_L2_then_IfBlock1[outC->_L5_then_IfBlock1]);
    }
    else {
      kcg_copy_RadioTrackTrainMessageQueueEntry_T(
        &outC->_L4_then_IfBlock1,
        &outC->_L6_then_IfBlock1);
    }
    kcg_copy_RadioTrackTrainMessageQueueEntry_T(
      &outRadioTrackTrainMessageQueueEntry_partial,
      &outC->_L4_then_IfBlock1);
    kcg_copy_RadioTrackTrainMessageQueue_T(
      &outC->outRadioTrackTrainMessageQueue,
      &outRadioTrackTrainMessageQueue_partial);
    kcg_copy_RadioTrackTrainMessageQueueEntry_T(
      &outC->outRadioTrackTrainMessageQueueEntry,
      &outRadioTrackTrainMessageQueueEntry_partial);
  }
  else {
    outC->else_clock_IfBlock1 = outC->remainingCapacity ==
      RADIO_TRACK_TRAIN_MESSAGE_QUEUE_CAPACITY;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      kcg_copy_RadioTrackTrainMessageQueueEntry_T(
        &outC->_L24_then_else_IfBlock1,
        (RadioTrackTrainMessageQueueEntry_T *)
          &RADIO_TRACK_TRAIN_MESSAGE_QUEUE_ENTRY_DEFAULT);
      kcg_copy_RadioTrackTrainMessageQueueEntry_T(
        &_9_outRadioTrackTrainMessageQueueEntry_partial,
        &outC->_L24_then_else_IfBlock1);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &outC->_L23_then_else_IfBlock1,
        inRadioTrackTrainMessageQueue);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_10_outRadioTrackTrainMessageQueue_partial,
        &outC->_L23_then_else_IfBlock1);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_5_outRadioTrackTrainMessageQueue_partial,
        &_10_outRadioTrackTrainMessageQueue_partial);
      kcg_copy_RadioTrackTrainMessageQueueEntry_T(
        &_6_outRadioTrackTrainMessageQueueEntry_partial,
        &_9_outRadioTrackTrainMessageQueueEntry_partial);
    }
    else {
      outC->_L5_else_else_IfBlock1 = kcg_lit_int32(0);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &outC->_L7_else_else_IfBlock1,
        inRadioTrackTrainMessageQueue);
      /* IfBlock1:else:else:_L3=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetEntries#4)/ */
      RadioTrackTrainMessageQueue__GetEntries_RBC_Collections_Pkg(
        &outC->_L7_else_else_IfBlock1,
        &outC->Context_RadioTrackTrainMessageQueue__GetEntries_4);
      kcg_copy_RadioTrackTrainMessageQueueEntries_T(
        &outC->_L3_else_else_IfBlock1,
        &outC->Context_RadioTrackTrainMessageQueue__GetEntries_4.outRadioTrackTrainMessageQueueEntries);
      for (idx = 0; idx < 8; idx++) {
        kcg_copy_RadioTrackTrainMessageQueueEntry_T(
          &outC->_L1_else_else_IfBlock1[idx],
          &outC->_L3_else_else_IfBlock1[7 - idx]);
      }
      outC->_L6_else_else_IfBlock1 = kcg_true;
      outC->_L15_else_else_IfBlock1 = outC->_L5_else_else_IfBlock1;
      /* IfBlock1:else:else:_L14= */
      if (outC->_L6_else_else_IfBlock1) {
        /* IfBlock1:else:else:_L14= */
        for (idx1 = 0; idx1 < 8; idx1++) {
          acc = outC->_L15_else_else_IfBlock1;
          /* IfBlock1:else:else:_L14=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take_Iterable#2)/ */
          RadioTrackTrainMessageQueue__Take_Iterable_RBC_Collections_Pkg(
            /* IfBlock1:else:else:_L14= */(kcg_int32) idx1,
            acc,
            &outC->_L1_else_else_IfBlock1[idx1],
            &outC->Context_RadioTrackTrainMessageQueue__Take_Iterable_2[idx1]);
          outC->_L15_else_else_IfBlock1 =
            outC->Context_RadioTrackTrainMessageQueue__Take_Iterable_2[idx1].outAccumulator;
          outC->_L14_else_else_IfBlock1 =
            /* IfBlock1:else:else:_L14= */(kcg_int32) (idx1 + 1);
          /* IfBlock1:else:else:_L14= */
          if (!outC->Context_RadioTrackTrainMessageQueue__Take_Iterable_2[idx1].outContinueIteration) {
            break;
          }
        }
      }
      else {
        outC->_L14_else_else_IfBlock1 = kcg_lit_int32(0);
      }
      outC->foundIndex_else_else_IfBlock1 = outC->_L15_else_else_IfBlock1;
      outC->_L13_else_else_IfBlock1 = outC->foundIndex_else_else_IfBlock1;
      kcg_copy_RadioTrackTrainMessageQueueEntry_T(
        &outC->_L12_else_else_IfBlock1,
        (RadioTrackTrainMessageQueueEntry_T *)
          &RADIO_TRACK_TRAIN_MESSAGE_QUEUE_ENTRY_DEFAULT);
      /* IfBlock1:else:else:_L4/ */
      for (idx2 = 0; idx2 < 8; idx2++) {
        outC->_L4_else_else_IfBlock1[idx2] = outC->_L13_else_else_IfBlock1;
      }
      /* IfBlock1:else:else:_L9= */
      for (idx3 = 0; idx3 < 8; idx3++) {
        /* IfBlock1:else:else:_L9=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take_Iterable2#2)/ */
        RadioTrackTrainMessageQueue__Take_Iterable2_RBC_Collections_Pkg(
          /* IfBlock1:else:else:_L9= */(kcg_int32) idx3,
          outC->_L4_else_else_IfBlock1[idx3],
          &outC->_L1_else_else_IfBlock1[idx3],
          &outC->Context_RadioTrackTrainMessageQueue__Take_Iterable2_2[idx3]);
        kcg_copy_RadioTrackTrainMessageQueueEntry_T(
          &outC->_L9_else_else_IfBlock1[idx3],
          &outC->Context_RadioTrackTrainMessageQueue__Take_Iterable2_2[idx3].outRadioTrackTrainMessageQueueEntry);
      }
      for (idx4 = 0; idx4 < 8; idx4++) {
        kcg_copy_RadioTrackTrainMessageQueueEntry_T(
          &outC->_L8_else_else_IfBlock1[idx4],
          &outC->_L9_else_else_IfBlock1[7 - idx4]);
      }
      /* IfBlock1:else:else:_L11=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__SetEntries#3)/ */
      RadioTrackTrainMessageQueue__SetEntries_RBC_Collections_Pkg(
        &outC->_L8_else_else_IfBlock1,
        &outC->Context_RadioTrackTrainMessageQueue__SetEntries_3);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &outC->_L11_else_else_IfBlock1,
        &outC->Context_RadioTrackTrainMessageQueue__SetEntries_3.out_RadioTrackTrainMessageQueue);
      outC->_L2_else_else_IfBlock1 = outC->foundIndex_else_else_IfBlock1;
      if ((kcg_lit_int32(0) <= outC->_L2_else_else_IfBlock1) &
        (outC->_L2_else_else_IfBlock1 < kcg_lit_int32(8))) {
        kcg_copy_RadioTrackTrainMessageQueueEntry_T(
          &outC->_L10_else_else_IfBlock1,
          &outC->_L1_else_else_IfBlock1[outC->_L2_else_else_IfBlock1]);
      }
      else {
        kcg_copy_RadioTrackTrainMessageQueueEntry_T(
          &outC->_L10_else_else_IfBlock1,
          &outC->_L12_else_else_IfBlock1);
      }
      kcg_copy_RadioTrackTrainMessageQueueEntry_T(
        &_7_outRadioTrackTrainMessageQueueEntry_partial,
        &outC->_L10_else_else_IfBlock1);
      noname = outC->_L14_else_else_IfBlock1;
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_8_outRadioTrackTrainMessageQueue_partial,
        &outC->_L11_else_else_IfBlock1);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_5_outRadioTrackTrainMessageQueue_partial,
        &_8_outRadioTrackTrainMessageQueue_partial);
      kcg_copy_RadioTrackTrainMessageQueueEntry_T(
        &_6_outRadioTrackTrainMessageQueueEntry_partial,
        &_7_outRadioTrackTrainMessageQueueEntry_partial);
    }
    kcg_copy_RadioTrackTrainMessageQueue_T(
      &outC->outRadioTrackTrainMessageQueue,
      &_5_outRadioTrackTrainMessageQueue_partial);
    kcg_copy_RadioTrackTrainMessageQueueEntry_T(
      &outC->outRadioTrackTrainMessageQueueEntry,
      &_6_outRadioTrackTrainMessageQueueEntry_partial);
  }
}

#ifndef KCG_USER_DEFINED_INIT
void RadioTrackTrainMessageQueue__Take_init_RBC_Collections_Pkg(
  outC_RadioTrackTrainMessageQueue__Take_RBC_Collections_Pkg *outC)
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
  static kcg_size idx29;
  static kcg_size idx30;
  static kcg_size idx31;
  static kcg_size idx32;
  static kcg_size idx33;
  static kcg_size idx34;
  static kcg_size idx35;
  static kcg_size idx36;
  static kcg_size idx37;
  static kcg_size idx38;
  static kcg_size idx39;
  static kcg_size idx40;
  static kcg_size idx41;
  static kcg_size idx42;
  static kcg_size idx43;
  static kcg_size idx44;
  static kcg_size idx45;
  static kcg_size idx46;
  static kcg_size idx47;
  static kcg_size idx48;
  static kcg_size idx49;
  static kcg_size idx50;
  static kcg_size idx51;
  static kcg_size idx52;
  static kcg_size idx53;
  static kcg_size idx54;
  static kcg_size idx55;
  static kcg_size idx56;
  static kcg_size idx57;
  static kcg_size idx58;
  static kcg_size idx59;
  static kcg_size idx60;
  static kcg_size idx61;

  outC->_L2 = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 8; idx4++) {
    outC->_L1.m_Entries[idx4].m_IsValid = kcg_true;
    outC->_L1.m_Entries[idx4].m_Entry.Header.radioDevice = kcg_lit_int32(0);
    outC->_L1.m_Entries[idx4].m_Entry.Header.receivedSystemTime = kcg_lit_int32(0);
    outC->_L1.m_Entries[idx4].m_Entry.Header.nid_message = kcg_lit_int32(0);
    outC->_L1.m_Entries[idx4].m_Entry.Header.t_train = kcg_lit_int32(0);
    outC->_L1.m_Entries[idx4].m_Entry.Header.m_ack = kcg_lit_int32(0);
    outC->_L1.m_Entries[idx4].m_Entry.Header.nid_lrbg = kcg_lit_int32(0);
    outC->_L1.m_Entries[idx4].m_Entry.Header.t_train_reference = kcg_lit_int32(0);
    outC->_L1.m_Entries[idx4].m_Entry.Header.nid_em = kcg_lit_int32(0);
    outC->_L1.m_Entries[idx4].m_Entry.Header.q_scale = kcg_lit_int32(0);
    outC->_L1.m_Entries[idx4].m_Entry.Header.d_sr = kcg_lit_int32(0);
    outC->_L1.m_Entries[idx4].m_Entry.Header.t_sh_rqst = kcg_lit_int32(0);
    outC->_L1.m_Entries[idx4].m_Entry.Header.d_ref = kcg_lit_int32(0);
    outC->_L1.m_Entries[idx4].m_Entry.Header.q_dir = kcg_lit_int32(0);
    outC->_L1.m_Entries[idx4].m_Entry.Header.d_emergencystop = kcg_lit_int32(0);
    outC->_L1.m_Entries[idx4].m_Entry.Header.m_version = kcg_lit_int32(0);
    for (idx2 = 0; idx2 < 30; idx2++) {
      outC->_L1.m_Entries[idx4].m_Entry.Messages.PacketHeaders[idx2].nid_packet =
        kcg_lit_int32(0);
      outC->_L1.m_Entries[idx4].m_Entry.Messages.PacketHeaders[idx2].q_dir =
        Q_DIR_Reverse;
      outC->_L1.m_Entries[idx4].m_Entry.Messages.PacketHeaders[idx2].valid = kcg_true;
      outC->_L1.m_Entries[idx4].m_Entry.Messages.PacketHeaders[idx2].startAddress =
        kcg_lit_int32(0);
      outC->_L1.m_Entries[idx4].m_Entry.Messages.PacketHeaders[idx2].endAddress =
        kcg_lit_int32(0);
    }
    for (idx3 = 0; idx3 < 500; idx3++) {
      outC->_L1.m_Entries[idx4].m_Entry.Messages.PacketData[idx3] = kcg_lit_int32(0);
    }
  }
  outC->remainingCapacity = kcg_lit_int32(0);
  outC->IfBlock1_clock = kcg_true;
  outC->_L24_then_else_IfBlock1.m_IsValid = kcg_true;
  outC->_L24_then_else_IfBlock1.m_Entry.Header.radioDevice = kcg_lit_int32(0);
  outC->_L24_then_else_IfBlock1.m_Entry.Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L24_then_else_IfBlock1.m_Entry.Header.nid_message = kcg_lit_int32(0);
  outC->_L24_then_else_IfBlock1.m_Entry.Header.t_train = kcg_lit_int32(0);
  outC->_L24_then_else_IfBlock1.m_Entry.Header.m_ack = kcg_lit_int32(0);
  outC->_L24_then_else_IfBlock1.m_Entry.Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L24_then_else_IfBlock1.m_Entry.Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L24_then_else_IfBlock1.m_Entry.Header.nid_em = kcg_lit_int32(0);
  outC->_L24_then_else_IfBlock1.m_Entry.Header.q_scale = kcg_lit_int32(0);
  outC->_L24_then_else_IfBlock1.m_Entry.Header.d_sr = kcg_lit_int32(0);
  outC->_L24_then_else_IfBlock1.m_Entry.Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L24_then_else_IfBlock1.m_Entry.Header.d_ref = kcg_lit_int32(0);
  outC->_L24_then_else_IfBlock1.m_Entry.Header.q_dir = kcg_lit_int32(0);
  outC->_L24_then_else_IfBlock1.m_Entry.Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L24_then_else_IfBlock1.m_Entry.Header.m_version = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 30; idx5++) {
    outC->_L24_then_else_IfBlock1.m_Entry.Messages.PacketHeaders[idx5].nid_packet =
      kcg_lit_int32(0);
    outC->_L24_then_else_IfBlock1.m_Entry.Messages.PacketHeaders[idx5].q_dir =
      Q_DIR_Reverse;
    outC->_L24_then_else_IfBlock1.m_Entry.Messages.PacketHeaders[idx5].valid =
      kcg_true;
    outC->_L24_then_else_IfBlock1.m_Entry.Messages.PacketHeaders[idx5].startAddress =
      kcg_lit_int32(0);
    outC->_L24_then_else_IfBlock1.m_Entry.Messages.PacketHeaders[idx5].endAddress =
      kcg_lit_int32(0);
  }
  for (idx6 = 0; idx6 < 500; idx6++) {
    outC->_L24_then_else_IfBlock1.m_Entry.Messages.PacketData[idx6] =
      kcg_lit_int32(0);
  }
  for (idx9 = 0; idx9 < 8; idx9++) {
    outC->_L23_then_else_IfBlock1.m_Entries[idx9].m_IsValid = kcg_true;
    outC->_L23_then_else_IfBlock1.m_Entries[idx9].m_Entry.Header.radioDevice =
      kcg_lit_int32(0);
    outC->_L23_then_else_IfBlock1.m_Entries[idx9].m_Entry.Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->_L23_then_else_IfBlock1.m_Entries[idx9].m_Entry.Header.nid_message =
      kcg_lit_int32(0);
    outC->_L23_then_else_IfBlock1.m_Entries[idx9].m_Entry.Header.t_train =
      kcg_lit_int32(0);
    outC->_L23_then_else_IfBlock1.m_Entries[idx9].m_Entry.Header.m_ack =
      kcg_lit_int32(0);
    outC->_L23_then_else_IfBlock1.m_Entries[idx9].m_Entry.Header.nid_lrbg =
      kcg_lit_int32(0);
    outC->_L23_then_else_IfBlock1.m_Entries[idx9].m_Entry.Header.t_train_reference =
      kcg_lit_int32(0);
    outC->_L23_then_else_IfBlock1.m_Entries[idx9].m_Entry.Header.nid_em =
      kcg_lit_int32(0);
    outC->_L23_then_else_IfBlock1.m_Entries[idx9].m_Entry.Header.q_scale =
      kcg_lit_int32(0);
    outC->_L23_then_else_IfBlock1.m_Entries[idx9].m_Entry.Header.d_sr =
      kcg_lit_int32(0);
    outC->_L23_then_else_IfBlock1.m_Entries[idx9].m_Entry.Header.t_sh_rqst =
      kcg_lit_int32(0);
    outC->_L23_then_else_IfBlock1.m_Entries[idx9].m_Entry.Header.d_ref =
      kcg_lit_int32(0);
    outC->_L23_then_else_IfBlock1.m_Entries[idx9].m_Entry.Header.q_dir =
      kcg_lit_int32(0);
    outC->_L23_then_else_IfBlock1.m_Entries[idx9].m_Entry.Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->_L23_then_else_IfBlock1.m_Entries[idx9].m_Entry.Header.m_version =
      kcg_lit_int32(0);
    for (idx7 = 0; idx7 < 30; idx7++) {
      outC->_L23_then_else_IfBlock1.m_Entries[idx9].m_Entry.Messages.PacketHeaders[idx7].nid_packet =
        kcg_lit_int32(0);
      outC->_L23_then_else_IfBlock1.m_Entries[idx9].m_Entry.Messages.PacketHeaders[idx7].q_dir =
        Q_DIR_Reverse;
      outC->_L23_then_else_IfBlock1.m_Entries[idx9].m_Entry.Messages.PacketHeaders[idx7].valid =
        kcg_true;
      outC->_L23_then_else_IfBlock1.m_Entries[idx9].m_Entry.Messages.PacketHeaders[idx7].startAddress =
        kcg_lit_int32(0);
      outC->_L23_then_else_IfBlock1.m_Entries[idx9].m_Entry.Messages.PacketHeaders[idx7].endAddress =
        kcg_lit_int32(0);
    }
    for (idx8 = 0; idx8 < 500; idx8++) {
      outC->_L23_then_else_IfBlock1.m_Entries[idx9].m_Entry.Messages.PacketData[idx8] =
        kcg_lit_int32(0);
    }
  }
  for (idx12 = 0; idx12 < 8; idx12++) {
    outC->_L1_else_else_IfBlock1[idx12].m_IsValid = kcg_true;
    outC->_L1_else_else_IfBlock1[idx12].m_Entry.Header.radioDevice =
      kcg_lit_int32(0);
    outC->_L1_else_else_IfBlock1[idx12].m_Entry.Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->_L1_else_else_IfBlock1[idx12].m_Entry.Header.nid_message =
      kcg_lit_int32(0);
    outC->_L1_else_else_IfBlock1[idx12].m_Entry.Header.t_train = kcg_lit_int32(0);
    outC->_L1_else_else_IfBlock1[idx12].m_Entry.Header.m_ack = kcg_lit_int32(0);
    outC->_L1_else_else_IfBlock1[idx12].m_Entry.Header.nid_lrbg = kcg_lit_int32(0);
    outC->_L1_else_else_IfBlock1[idx12].m_Entry.Header.t_train_reference =
      kcg_lit_int32(0);
    outC->_L1_else_else_IfBlock1[idx12].m_Entry.Header.nid_em = kcg_lit_int32(0);
    outC->_L1_else_else_IfBlock1[idx12].m_Entry.Header.q_scale = kcg_lit_int32(0);
    outC->_L1_else_else_IfBlock1[idx12].m_Entry.Header.d_sr = kcg_lit_int32(0);
    outC->_L1_else_else_IfBlock1[idx12].m_Entry.Header.t_sh_rqst = kcg_lit_int32(0);
    outC->_L1_else_else_IfBlock1[idx12].m_Entry.Header.d_ref = kcg_lit_int32(0);
    outC->_L1_else_else_IfBlock1[idx12].m_Entry.Header.q_dir = kcg_lit_int32(0);
    outC->_L1_else_else_IfBlock1[idx12].m_Entry.Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->_L1_else_else_IfBlock1[idx12].m_Entry.Header.m_version = kcg_lit_int32(0);
    for (idx10 = 0; idx10 < 30; idx10++) {
      outC->_L1_else_else_IfBlock1[idx12].m_Entry.Messages.PacketHeaders[idx10].nid_packet =
        kcg_lit_int32(0);
      outC->_L1_else_else_IfBlock1[idx12].m_Entry.Messages.PacketHeaders[idx10].q_dir =
        Q_DIR_Reverse;
      outC->_L1_else_else_IfBlock1[idx12].m_Entry.Messages.PacketHeaders[idx10].valid =
        kcg_true;
      outC->_L1_else_else_IfBlock1[idx12].m_Entry.Messages.PacketHeaders[idx10].startAddress =
        kcg_lit_int32(0);
      outC->_L1_else_else_IfBlock1[idx12].m_Entry.Messages.PacketHeaders[idx10].endAddress =
        kcg_lit_int32(0);
    }
    for (idx11 = 0; idx11 < 500; idx11++) {
      outC->_L1_else_else_IfBlock1[idx12].m_Entry.Messages.PacketData[idx11] =
        kcg_lit_int32(0);
    }
  }
  outC->_L2_else_else_IfBlock1 = kcg_lit_int32(0);
  for (idx15 = 0; idx15 < 8; idx15++) {
    outC->_L3_else_else_IfBlock1[idx15].m_IsValid = kcg_true;
    outC->_L3_else_else_IfBlock1[idx15].m_Entry.Header.radioDevice =
      kcg_lit_int32(0);
    outC->_L3_else_else_IfBlock1[idx15].m_Entry.Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->_L3_else_else_IfBlock1[idx15].m_Entry.Header.nid_message =
      kcg_lit_int32(0);
    outC->_L3_else_else_IfBlock1[idx15].m_Entry.Header.t_train = kcg_lit_int32(0);
    outC->_L3_else_else_IfBlock1[idx15].m_Entry.Header.m_ack = kcg_lit_int32(0);
    outC->_L3_else_else_IfBlock1[idx15].m_Entry.Header.nid_lrbg = kcg_lit_int32(0);
    outC->_L3_else_else_IfBlock1[idx15].m_Entry.Header.t_train_reference =
      kcg_lit_int32(0);
    outC->_L3_else_else_IfBlock1[idx15].m_Entry.Header.nid_em = kcg_lit_int32(0);
    outC->_L3_else_else_IfBlock1[idx15].m_Entry.Header.q_scale = kcg_lit_int32(0);
    outC->_L3_else_else_IfBlock1[idx15].m_Entry.Header.d_sr = kcg_lit_int32(0);
    outC->_L3_else_else_IfBlock1[idx15].m_Entry.Header.t_sh_rqst = kcg_lit_int32(0);
    outC->_L3_else_else_IfBlock1[idx15].m_Entry.Header.d_ref = kcg_lit_int32(0);
    outC->_L3_else_else_IfBlock1[idx15].m_Entry.Header.q_dir = kcg_lit_int32(0);
    outC->_L3_else_else_IfBlock1[idx15].m_Entry.Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->_L3_else_else_IfBlock1[idx15].m_Entry.Header.m_version = kcg_lit_int32(0);
    for (idx13 = 0; idx13 < 30; idx13++) {
      outC->_L3_else_else_IfBlock1[idx15].m_Entry.Messages.PacketHeaders[idx13].nid_packet =
        kcg_lit_int32(0);
      outC->_L3_else_else_IfBlock1[idx15].m_Entry.Messages.PacketHeaders[idx13].q_dir =
        Q_DIR_Reverse;
      outC->_L3_else_else_IfBlock1[idx15].m_Entry.Messages.PacketHeaders[idx13].valid =
        kcg_true;
      outC->_L3_else_else_IfBlock1[idx15].m_Entry.Messages.PacketHeaders[idx13].startAddress =
        kcg_lit_int32(0);
      outC->_L3_else_else_IfBlock1[idx15].m_Entry.Messages.PacketHeaders[idx13].endAddress =
        kcg_lit_int32(0);
    }
    for (idx14 = 0; idx14 < 500; idx14++) {
      outC->_L3_else_else_IfBlock1[idx15].m_Entry.Messages.PacketData[idx14] =
        kcg_lit_int32(0);
    }
  }
  for (idx16 = 0; idx16 < 8; idx16++) {
    outC->_L4_else_else_IfBlock1[idx16] = kcg_lit_int32(0);
  }
  outC->_L5_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L6_else_else_IfBlock1 = kcg_true;
  for (idx19 = 0; idx19 < 8; idx19++) {
    outC->_L7_else_else_IfBlock1.m_Entries[idx19].m_IsValid = kcg_true;
    outC->_L7_else_else_IfBlock1.m_Entries[idx19].m_Entry.Header.radioDevice =
      kcg_lit_int32(0);
    outC->_L7_else_else_IfBlock1.m_Entries[idx19].m_Entry.Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->_L7_else_else_IfBlock1.m_Entries[idx19].m_Entry.Header.nid_message =
      kcg_lit_int32(0);
    outC->_L7_else_else_IfBlock1.m_Entries[idx19].m_Entry.Header.t_train =
      kcg_lit_int32(0);
    outC->_L7_else_else_IfBlock1.m_Entries[idx19].m_Entry.Header.m_ack =
      kcg_lit_int32(0);
    outC->_L7_else_else_IfBlock1.m_Entries[idx19].m_Entry.Header.nid_lrbg =
      kcg_lit_int32(0);
    outC->_L7_else_else_IfBlock1.m_Entries[idx19].m_Entry.Header.t_train_reference =
      kcg_lit_int32(0);
    outC->_L7_else_else_IfBlock1.m_Entries[idx19].m_Entry.Header.nid_em =
      kcg_lit_int32(0);
    outC->_L7_else_else_IfBlock1.m_Entries[idx19].m_Entry.Header.q_scale =
      kcg_lit_int32(0);
    outC->_L7_else_else_IfBlock1.m_Entries[idx19].m_Entry.Header.d_sr =
      kcg_lit_int32(0);
    outC->_L7_else_else_IfBlock1.m_Entries[idx19].m_Entry.Header.t_sh_rqst =
      kcg_lit_int32(0);
    outC->_L7_else_else_IfBlock1.m_Entries[idx19].m_Entry.Header.d_ref =
      kcg_lit_int32(0);
    outC->_L7_else_else_IfBlock1.m_Entries[idx19].m_Entry.Header.q_dir =
      kcg_lit_int32(0);
    outC->_L7_else_else_IfBlock1.m_Entries[idx19].m_Entry.Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->_L7_else_else_IfBlock1.m_Entries[idx19].m_Entry.Header.m_version =
      kcg_lit_int32(0);
    for (idx17 = 0; idx17 < 30; idx17++) {
      outC->_L7_else_else_IfBlock1.m_Entries[idx19].m_Entry.Messages.PacketHeaders[idx17].nid_packet =
        kcg_lit_int32(0);
      outC->_L7_else_else_IfBlock1.m_Entries[idx19].m_Entry.Messages.PacketHeaders[idx17].q_dir =
        Q_DIR_Reverse;
      outC->_L7_else_else_IfBlock1.m_Entries[idx19].m_Entry.Messages.PacketHeaders[idx17].valid =
        kcg_true;
      outC->_L7_else_else_IfBlock1.m_Entries[idx19].m_Entry.Messages.PacketHeaders[idx17].startAddress =
        kcg_lit_int32(0);
      outC->_L7_else_else_IfBlock1.m_Entries[idx19].m_Entry.Messages.PacketHeaders[idx17].endAddress =
        kcg_lit_int32(0);
    }
    for (idx18 = 0; idx18 < 500; idx18++) {
      outC->_L7_else_else_IfBlock1.m_Entries[idx19].m_Entry.Messages.PacketData[idx18] =
        kcg_lit_int32(0);
    }
  }
  for (idx22 = 0; idx22 < 8; idx22++) {
    outC->_L8_else_else_IfBlock1[idx22].m_IsValid = kcg_true;
    outC->_L8_else_else_IfBlock1[idx22].m_Entry.Header.radioDevice =
      kcg_lit_int32(0);
    outC->_L8_else_else_IfBlock1[idx22].m_Entry.Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->_L8_else_else_IfBlock1[idx22].m_Entry.Header.nid_message =
      kcg_lit_int32(0);
    outC->_L8_else_else_IfBlock1[idx22].m_Entry.Header.t_train = kcg_lit_int32(0);
    outC->_L8_else_else_IfBlock1[idx22].m_Entry.Header.m_ack = kcg_lit_int32(0);
    outC->_L8_else_else_IfBlock1[idx22].m_Entry.Header.nid_lrbg = kcg_lit_int32(0);
    outC->_L8_else_else_IfBlock1[idx22].m_Entry.Header.t_train_reference =
      kcg_lit_int32(0);
    outC->_L8_else_else_IfBlock1[idx22].m_Entry.Header.nid_em = kcg_lit_int32(0);
    outC->_L8_else_else_IfBlock1[idx22].m_Entry.Header.q_scale = kcg_lit_int32(0);
    outC->_L8_else_else_IfBlock1[idx22].m_Entry.Header.d_sr = kcg_lit_int32(0);
    outC->_L8_else_else_IfBlock1[idx22].m_Entry.Header.t_sh_rqst = kcg_lit_int32(0);
    outC->_L8_else_else_IfBlock1[idx22].m_Entry.Header.d_ref = kcg_lit_int32(0);
    outC->_L8_else_else_IfBlock1[idx22].m_Entry.Header.q_dir = kcg_lit_int32(0);
    outC->_L8_else_else_IfBlock1[idx22].m_Entry.Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->_L8_else_else_IfBlock1[idx22].m_Entry.Header.m_version = kcg_lit_int32(0);
    for (idx20 = 0; idx20 < 30; idx20++) {
      outC->_L8_else_else_IfBlock1[idx22].m_Entry.Messages.PacketHeaders[idx20].nid_packet =
        kcg_lit_int32(0);
      outC->_L8_else_else_IfBlock1[idx22].m_Entry.Messages.PacketHeaders[idx20].q_dir =
        Q_DIR_Reverse;
      outC->_L8_else_else_IfBlock1[idx22].m_Entry.Messages.PacketHeaders[idx20].valid =
        kcg_true;
      outC->_L8_else_else_IfBlock1[idx22].m_Entry.Messages.PacketHeaders[idx20].startAddress =
        kcg_lit_int32(0);
      outC->_L8_else_else_IfBlock1[idx22].m_Entry.Messages.PacketHeaders[idx20].endAddress =
        kcg_lit_int32(0);
    }
    for (idx21 = 0; idx21 < 500; idx21++) {
      outC->_L8_else_else_IfBlock1[idx22].m_Entry.Messages.PacketData[idx21] =
        kcg_lit_int32(0);
    }
  }
  for (idx25 = 0; idx25 < 8; idx25++) {
    outC->_L9_else_else_IfBlock1[idx25].m_IsValid = kcg_true;
    outC->_L9_else_else_IfBlock1[idx25].m_Entry.Header.radioDevice =
      kcg_lit_int32(0);
    outC->_L9_else_else_IfBlock1[idx25].m_Entry.Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->_L9_else_else_IfBlock1[idx25].m_Entry.Header.nid_message =
      kcg_lit_int32(0);
    outC->_L9_else_else_IfBlock1[idx25].m_Entry.Header.t_train = kcg_lit_int32(0);
    outC->_L9_else_else_IfBlock1[idx25].m_Entry.Header.m_ack = kcg_lit_int32(0);
    outC->_L9_else_else_IfBlock1[idx25].m_Entry.Header.nid_lrbg = kcg_lit_int32(0);
    outC->_L9_else_else_IfBlock1[idx25].m_Entry.Header.t_train_reference =
      kcg_lit_int32(0);
    outC->_L9_else_else_IfBlock1[idx25].m_Entry.Header.nid_em = kcg_lit_int32(0);
    outC->_L9_else_else_IfBlock1[idx25].m_Entry.Header.q_scale = kcg_lit_int32(0);
    outC->_L9_else_else_IfBlock1[idx25].m_Entry.Header.d_sr = kcg_lit_int32(0);
    outC->_L9_else_else_IfBlock1[idx25].m_Entry.Header.t_sh_rqst = kcg_lit_int32(0);
    outC->_L9_else_else_IfBlock1[idx25].m_Entry.Header.d_ref = kcg_lit_int32(0);
    outC->_L9_else_else_IfBlock1[idx25].m_Entry.Header.q_dir = kcg_lit_int32(0);
    outC->_L9_else_else_IfBlock1[idx25].m_Entry.Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->_L9_else_else_IfBlock1[idx25].m_Entry.Header.m_version = kcg_lit_int32(0);
    for (idx23 = 0; idx23 < 30; idx23++) {
      outC->_L9_else_else_IfBlock1[idx25].m_Entry.Messages.PacketHeaders[idx23].nid_packet =
        kcg_lit_int32(0);
      outC->_L9_else_else_IfBlock1[idx25].m_Entry.Messages.PacketHeaders[idx23].q_dir =
        Q_DIR_Reverse;
      outC->_L9_else_else_IfBlock1[idx25].m_Entry.Messages.PacketHeaders[idx23].valid =
        kcg_true;
      outC->_L9_else_else_IfBlock1[idx25].m_Entry.Messages.PacketHeaders[idx23].startAddress =
        kcg_lit_int32(0);
      outC->_L9_else_else_IfBlock1[idx25].m_Entry.Messages.PacketHeaders[idx23].endAddress =
        kcg_lit_int32(0);
    }
    for (idx24 = 0; idx24 < 500; idx24++) {
      outC->_L9_else_else_IfBlock1[idx25].m_Entry.Messages.PacketData[idx24] =
        kcg_lit_int32(0);
    }
  }
  outC->_L10_else_else_IfBlock1.m_IsValid = kcg_true;
  outC->_L10_else_else_IfBlock1.m_Entry.Header.radioDevice = kcg_lit_int32(0);
  outC->_L10_else_else_IfBlock1.m_Entry.Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L10_else_else_IfBlock1.m_Entry.Header.nid_message = kcg_lit_int32(0);
  outC->_L10_else_else_IfBlock1.m_Entry.Header.t_train = kcg_lit_int32(0);
  outC->_L10_else_else_IfBlock1.m_Entry.Header.m_ack = kcg_lit_int32(0);
  outC->_L10_else_else_IfBlock1.m_Entry.Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L10_else_else_IfBlock1.m_Entry.Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L10_else_else_IfBlock1.m_Entry.Header.nid_em = kcg_lit_int32(0);
  outC->_L10_else_else_IfBlock1.m_Entry.Header.q_scale = kcg_lit_int32(0);
  outC->_L10_else_else_IfBlock1.m_Entry.Header.d_sr = kcg_lit_int32(0);
  outC->_L10_else_else_IfBlock1.m_Entry.Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L10_else_else_IfBlock1.m_Entry.Header.d_ref = kcg_lit_int32(0);
  outC->_L10_else_else_IfBlock1.m_Entry.Header.q_dir = kcg_lit_int32(0);
  outC->_L10_else_else_IfBlock1.m_Entry.Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L10_else_else_IfBlock1.m_Entry.Header.m_version = kcg_lit_int32(0);
  for (idx26 = 0; idx26 < 30; idx26++) {
    outC->_L10_else_else_IfBlock1.m_Entry.Messages.PacketHeaders[idx26].nid_packet =
      kcg_lit_int32(0);
    outC->_L10_else_else_IfBlock1.m_Entry.Messages.PacketHeaders[idx26].q_dir =
      Q_DIR_Reverse;
    outC->_L10_else_else_IfBlock1.m_Entry.Messages.PacketHeaders[idx26].valid =
      kcg_true;
    outC->_L10_else_else_IfBlock1.m_Entry.Messages.PacketHeaders[idx26].startAddress =
      kcg_lit_int32(0);
    outC->_L10_else_else_IfBlock1.m_Entry.Messages.PacketHeaders[idx26].endAddress =
      kcg_lit_int32(0);
  }
  for (idx27 = 0; idx27 < 500; idx27++) {
    outC->_L10_else_else_IfBlock1.m_Entry.Messages.PacketData[idx27] =
      kcg_lit_int32(0);
  }
  for (idx30 = 0; idx30 < 8; idx30++) {
    outC->_L11_else_else_IfBlock1.m_Entries[idx30].m_IsValid = kcg_true;
    outC->_L11_else_else_IfBlock1.m_Entries[idx30].m_Entry.Header.radioDevice =
      kcg_lit_int32(0);
    outC->_L11_else_else_IfBlock1.m_Entries[idx30].m_Entry.Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->_L11_else_else_IfBlock1.m_Entries[idx30].m_Entry.Header.nid_message =
      kcg_lit_int32(0);
    outC->_L11_else_else_IfBlock1.m_Entries[idx30].m_Entry.Header.t_train =
      kcg_lit_int32(0);
    outC->_L11_else_else_IfBlock1.m_Entries[idx30].m_Entry.Header.m_ack =
      kcg_lit_int32(0);
    outC->_L11_else_else_IfBlock1.m_Entries[idx30].m_Entry.Header.nid_lrbg =
      kcg_lit_int32(0);
    outC->_L11_else_else_IfBlock1.m_Entries[idx30].m_Entry.Header.t_train_reference =
      kcg_lit_int32(0);
    outC->_L11_else_else_IfBlock1.m_Entries[idx30].m_Entry.Header.nid_em =
      kcg_lit_int32(0);
    outC->_L11_else_else_IfBlock1.m_Entries[idx30].m_Entry.Header.q_scale =
      kcg_lit_int32(0);
    outC->_L11_else_else_IfBlock1.m_Entries[idx30].m_Entry.Header.d_sr =
      kcg_lit_int32(0);
    outC->_L11_else_else_IfBlock1.m_Entries[idx30].m_Entry.Header.t_sh_rqst =
      kcg_lit_int32(0);
    outC->_L11_else_else_IfBlock1.m_Entries[idx30].m_Entry.Header.d_ref =
      kcg_lit_int32(0);
    outC->_L11_else_else_IfBlock1.m_Entries[idx30].m_Entry.Header.q_dir =
      kcg_lit_int32(0);
    outC->_L11_else_else_IfBlock1.m_Entries[idx30].m_Entry.Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->_L11_else_else_IfBlock1.m_Entries[idx30].m_Entry.Header.m_version =
      kcg_lit_int32(0);
    for (idx28 = 0; idx28 < 30; idx28++) {
      outC->_L11_else_else_IfBlock1.m_Entries[idx30].m_Entry.Messages.PacketHeaders[idx28].nid_packet =
        kcg_lit_int32(0);
      outC->_L11_else_else_IfBlock1.m_Entries[idx30].m_Entry.Messages.PacketHeaders[idx28].q_dir =
        Q_DIR_Reverse;
      outC->_L11_else_else_IfBlock1.m_Entries[idx30].m_Entry.Messages.PacketHeaders[idx28].valid =
        kcg_true;
      outC->_L11_else_else_IfBlock1.m_Entries[idx30].m_Entry.Messages.PacketHeaders[idx28].startAddress =
        kcg_lit_int32(0);
      outC->_L11_else_else_IfBlock1.m_Entries[idx30].m_Entry.Messages.PacketHeaders[idx28].endAddress =
        kcg_lit_int32(0);
    }
    for (idx29 = 0; idx29 < 500; idx29++) {
      outC->_L11_else_else_IfBlock1.m_Entries[idx30].m_Entry.Messages.PacketData[idx29] =
        kcg_lit_int32(0);
    }
  }
  outC->_L12_else_else_IfBlock1.m_IsValid = kcg_true;
  outC->_L12_else_else_IfBlock1.m_Entry.Header.radioDevice = kcg_lit_int32(0);
  outC->_L12_else_else_IfBlock1.m_Entry.Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L12_else_else_IfBlock1.m_Entry.Header.nid_message = kcg_lit_int32(0);
  outC->_L12_else_else_IfBlock1.m_Entry.Header.t_train = kcg_lit_int32(0);
  outC->_L12_else_else_IfBlock1.m_Entry.Header.m_ack = kcg_lit_int32(0);
  outC->_L12_else_else_IfBlock1.m_Entry.Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L12_else_else_IfBlock1.m_Entry.Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L12_else_else_IfBlock1.m_Entry.Header.nid_em = kcg_lit_int32(0);
  outC->_L12_else_else_IfBlock1.m_Entry.Header.q_scale = kcg_lit_int32(0);
  outC->_L12_else_else_IfBlock1.m_Entry.Header.d_sr = kcg_lit_int32(0);
  outC->_L12_else_else_IfBlock1.m_Entry.Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L12_else_else_IfBlock1.m_Entry.Header.d_ref = kcg_lit_int32(0);
  outC->_L12_else_else_IfBlock1.m_Entry.Header.q_dir = kcg_lit_int32(0);
  outC->_L12_else_else_IfBlock1.m_Entry.Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L12_else_else_IfBlock1.m_Entry.Header.m_version = kcg_lit_int32(0);
  for (idx31 = 0; idx31 < 30; idx31++) {
    outC->_L12_else_else_IfBlock1.m_Entry.Messages.PacketHeaders[idx31].nid_packet =
      kcg_lit_int32(0);
    outC->_L12_else_else_IfBlock1.m_Entry.Messages.PacketHeaders[idx31].q_dir =
      Q_DIR_Reverse;
    outC->_L12_else_else_IfBlock1.m_Entry.Messages.PacketHeaders[idx31].valid =
      kcg_true;
    outC->_L12_else_else_IfBlock1.m_Entry.Messages.PacketHeaders[idx31].startAddress =
      kcg_lit_int32(0);
    outC->_L12_else_else_IfBlock1.m_Entry.Messages.PacketHeaders[idx31].endAddress =
      kcg_lit_int32(0);
  }
  for (idx32 = 0; idx32 < 500; idx32++) {
    outC->_L12_else_else_IfBlock1.m_Entry.Messages.PacketData[idx32] =
      kcg_lit_int32(0);
  }
  outC->_L13_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L15_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L14_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->foundIndex_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->else_clock_IfBlock1 = kcg_true;
  for (idx35 = 0; idx35 < 8; idx35++) {
    outC->_L1_then_IfBlock1.m_Entries[idx35].m_IsValid = kcg_true;
    outC->_L1_then_IfBlock1.m_Entries[idx35].m_Entry.Header.radioDevice =
      kcg_lit_int32(0);
    outC->_L1_then_IfBlock1.m_Entries[idx35].m_Entry.Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->_L1_then_IfBlock1.m_Entries[idx35].m_Entry.Header.nid_message =
      kcg_lit_int32(0);
    outC->_L1_then_IfBlock1.m_Entries[idx35].m_Entry.Header.t_train =
      kcg_lit_int32(0);
    outC->_L1_then_IfBlock1.m_Entries[idx35].m_Entry.Header.m_ack =
      kcg_lit_int32(0);
    outC->_L1_then_IfBlock1.m_Entries[idx35].m_Entry.Header.nid_lrbg =
      kcg_lit_int32(0);
    outC->_L1_then_IfBlock1.m_Entries[idx35].m_Entry.Header.t_train_reference =
      kcg_lit_int32(0);
    outC->_L1_then_IfBlock1.m_Entries[idx35].m_Entry.Header.nid_em =
      kcg_lit_int32(0);
    outC->_L1_then_IfBlock1.m_Entries[idx35].m_Entry.Header.q_scale =
      kcg_lit_int32(0);
    outC->_L1_then_IfBlock1.m_Entries[idx35].m_Entry.Header.d_sr = kcg_lit_int32(0);
    outC->_L1_then_IfBlock1.m_Entries[idx35].m_Entry.Header.t_sh_rqst =
      kcg_lit_int32(0);
    outC->_L1_then_IfBlock1.m_Entries[idx35].m_Entry.Header.d_ref =
      kcg_lit_int32(0);
    outC->_L1_then_IfBlock1.m_Entries[idx35].m_Entry.Header.q_dir =
      kcg_lit_int32(0);
    outC->_L1_then_IfBlock1.m_Entries[idx35].m_Entry.Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->_L1_then_IfBlock1.m_Entries[idx35].m_Entry.Header.m_version =
      kcg_lit_int32(0);
    for (idx33 = 0; idx33 < 30; idx33++) {
      outC->_L1_then_IfBlock1.m_Entries[idx35].m_Entry.Messages.PacketHeaders[idx33].nid_packet =
        kcg_lit_int32(0);
      outC->_L1_then_IfBlock1.m_Entries[idx35].m_Entry.Messages.PacketHeaders[idx33].q_dir =
        Q_DIR_Reverse;
      outC->_L1_then_IfBlock1.m_Entries[idx35].m_Entry.Messages.PacketHeaders[idx33].valid =
        kcg_true;
      outC->_L1_then_IfBlock1.m_Entries[idx35].m_Entry.Messages.PacketHeaders[idx33].startAddress =
        kcg_lit_int32(0);
      outC->_L1_then_IfBlock1.m_Entries[idx35].m_Entry.Messages.PacketHeaders[idx33].endAddress =
        kcg_lit_int32(0);
    }
    for (idx34 = 0; idx34 < 500; idx34++) {
      outC->_L1_then_IfBlock1.m_Entries[idx35].m_Entry.Messages.PacketData[idx34] =
        kcg_lit_int32(0);
    }
  }
  for (idx38 = 0; idx38 < 8; idx38++) {
    outC->_L2_then_IfBlock1[idx38].m_IsValid = kcg_true;
    outC->_L2_then_IfBlock1[idx38].m_Entry.Header.radioDevice = kcg_lit_int32(0);
    outC->_L2_then_IfBlock1[idx38].m_Entry.Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->_L2_then_IfBlock1[idx38].m_Entry.Header.nid_message = kcg_lit_int32(0);
    outC->_L2_then_IfBlock1[idx38].m_Entry.Header.t_train = kcg_lit_int32(0);
    outC->_L2_then_IfBlock1[idx38].m_Entry.Header.m_ack = kcg_lit_int32(0);
    outC->_L2_then_IfBlock1[idx38].m_Entry.Header.nid_lrbg = kcg_lit_int32(0);
    outC->_L2_then_IfBlock1[idx38].m_Entry.Header.t_train_reference =
      kcg_lit_int32(0);
    outC->_L2_then_IfBlock1[idx38].m_Entry.Header.nid_em = kcg_lit_int32(0);
    outC->_L2_then_IfBlock1[idx38].m_Entry.Header.q_scale = kcg_lit_int32(0);
    outC->_L2_then_IfBlock1[idx38].m_Entry.Header.d_sr = kcg_lit_int32(0);
    outC->_L2_then_IfBlock1[idx38].m_Entry.Header.t_sh_rqst = kcg_lit_int32(0);
    outC->_L2_then_IfBlock1[idx38].m_Entry.Header.d_ref = kcg_lit_int32(0);
    outC->_L2_then_IfBlock1[idx38].m_Entry.Header.q_dir = kcg_lit_int32(0);
    outC->_L2_then_IfBlock1[idx38].m_Entry.Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->_L2_then_IfBlock1[idx38].m_Entry.Header.m_version = kcg_lit_int32(0);
    for (idx36 = 0; idx36 < 30; idx36++) {
      outC->_L2_then_IfBlock1[idx38].m_Entry.Messages.PacketHeaders[idx36].nid_packet =
        kcg_lit_int32(0);
      outC->_L2_then_IfBlock1[idx38].m_Entry.Messages.PacketHeaders[idx36].q_dir =
        Q_DIR_Reverse;
      outC->_L2_then_IfBlock1[idx38].m_Entry.Messages.PacketHeaders[idx36].valid =
        kcg_true;
      outC->_L2_then_IfBlock1[idx38].m_Entry.Messages.PacketHeaders[idx36].startAddress =
        kcg_lit_int32(0);
      outC->_L2_then_IfBlock1[idx38].m_Entry.Messages.PacketHeaders[idx36].endAddress =
        kcg_lit_int32(0);
    }
    for (idx37 = 0; idx37 < 500; idx37++) {
      outC->_L2_then_IfBlock1[idx38].m_Entry.Messages.PacketData[idx37] =
        kcg_lit_int32(0);
    }
  }
  for (idx41 = 0; idx41 < 7; idx41++) {
    outC->_L3_then_IfBlock1[idx41].m_IsValid = kcg_true;
    outC->_L3_then_IfBlock1[idx41].m_Entry.Header.radioDevice = kcg_lit_int32(0);
    outC->_L3_then_IfBlock1[idx41].m_Entry.Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->_L3_then_IfBlock1[idx41].m_Entry.Header.nid_message = kcg_lit_int32(0);
    outC->_L3_then_IfBlock1[idx41].m_Entry.Header.t_train = kcg_lit_int32(0);
    outC->_L3_then_IfBlock1[idx41].m_Entry.Header.m_ack = kcg_lit_int32(0);
    outC->_L3_then_IfBlock1[idx41].m_Entry.Header.nid_lrbg = kcg_lit_int32(0);
    outC->_L3_then_IfBlock1[idx41].m_Entry.Header.t_train_reference =
      kcg_lit_int32(0);
    outC->_L3_then_IfBlock1[idx41].m_Entry.Header.nid_em = kcg_lit_int32(0);
    outC->_L3_then_IfBlock1[idx41].m_Entry.Header.q_scale = kcg_lit_int32(0);
    outC->_L3_then_IfBlock1[idx41].m_Entry.Header.d_sr = kcg_lit_int32(0);
    outC->_L3_then_IfBlock1[idx41].m_Entry.Header.t_sh_rqst = kcg_lit_int32(0);
    outC->_L3_then_IfBlock1[idx41].m_Entry.Header.d_ref = kcg_lit_int32(0);
    outC->_L3_then_IfBlock1[idx41].m_Entry.Header.q_dir = kcg_lit_int32(0);
    outC->_L3_then_IfBlock1[idx41].m_Entry.Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->_L3_then_IfBlock1[idx41].m_Entry.Header.m_version = kcg_lit_int32(0);
    for (idx39 = 0; idx39 < 30; idx39++) {
      outC->_L3_then_IfBlock1[idx41].m_Entry.Messages.PacketHeaders[idx39].nid_packet =
        kcg_lit_int32(0);
      outC->_L3_then_IfBlock1[idx41].m_Entry.Messages.PacketHeaders[idx39].q_dir =
        Q_DIR_Reverse;
      outC->_L3_then_IfBlock1[idx41].m_Entry.Messages.PacketHeaders[idx39].valid =
        kcg_true;
      outC->_L3_then_IfBlock1[idx41].m_Entry.Messages.PacketHeaders[idx39].startAddress =
        kcg_lit_int32(0);
      outC->_L3_then_IfBlock1[idx41].m_Entry.Messages.PacketHeaders[idx39].endAddress =
        kcg_lit_int32(0);
    }
    for (idx40 = 0; idx40 < 500; idx40++) {
      outC->_L3_then_IfBlock1[idx41].m_Entry.Messages.PacketData[idx40] =
        kcg_lit_int32(0);
    }
  }
  outC->_L4_then_IfBlock1.m_IsValid = kcg_true;
  outC->_L4_then_IfBlock1.m_Entry.Header.radioDevice = kcg_lit_int32(0);
  outC->_L4_then_IfBlock1.m_Entry.Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L4_then_IfBlock1.m_Entry.Header.nid_message = kcg_lit_int32(0);
  outC->_L4_then_IfBlock1.m_Entry.Header.t_train = kcg_lit_int32(0);
  outC->_L4_then_IfBlock1.m_Entry.Header.m_ack = kcg_lit_int32(0);
  outC->_L4_then_IfBlock1.m_Entry.Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L4_then_IfBlock1.m_Entry.Header.t_train_reference = kcg_lit_int32(0);
  outC->_L4_then_IfBlock1.m_Entry.Header.nid_em = kcg_lit_int32(0);
  outC->_L4_then_IfBlock1.m_Entry.Header.q_scale = kcg_lit_int32(0);
  outC->_L4_then_IfBlock1.m_Entry.Header.d_sr = kcg_lit_int32(0);
  outC->_L4_then_IfBlock1.m_Entry.Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L4_then_IfBlock1.m_Entry.Header.d_ref = kcg_lit_int32(0);
  outC->_L4_then_IfBlock1.m_Entry.Header.q_dir = kcg_lit_int32(0);
  outC->_L4_then_IfBlock1.m_Entry.Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L4_then_IfBlock1.m_Entry.Header.m_version = kcg_lit_int32(0);
  for (idx42 = 0; idx42 < 30; idx42++) {
    outC->_L4_then_IfBlock1.m_Entry.Messages.PacketHeaders[idx42].nid_packet =
      kcg_lit_int32(0);
    outC->_L4_then_IfBlock1.m_Entry.Messages.PacketHeaders[idx42].q_dir =
      Q_DIR_Reverse;
    outC->_L4_then_IfBlock1.m_Entry.Messages.PacketHeaders[idx42].valid = kcg_true;
    outC->_L4_then_IfBlock1.m_Entry.Messages.PacketHeaders[idx42].startAddress =
      kcg_lit_int32(0);
    outC->_L4_then_IfBlock1.m_Entry.Messages.PacketHeaders[idx42].endAddress =
      kcg_lit_int32(0);
  }
  for (idx43 = 0; idx43 < 500; idx43++) {
    outC->_L4_then_IfBlock1.m_Entry.Messages.PacketData[idx43] = kcg_lit_int32(0);
  }
  outC->_L5_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L6_then_IfBlock1.m_IsValid = kcg_true;
  outC->_L6_then_IfBlock1.m_Entry.Header.radioDevice = kcg_lit_int32(0);
  outC->_L6_then_IfBlock1.m_Entry.Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L6_then_IfBlock1.m_Entry.Header.nid_message = kcg_lit_int32(0);
  outC->_L6_then_IfBlock1.m_Entry.Header.t_train = kcg_lit_int32(0);
  outC->_L6_then_IfBlock1.m_Entry.Header.m_ack = kcg_lit_int32(0);
  outC->_L6_then_IfBlock1.m_Entry.Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L6_then_IfBlock1.m_Entry.Header.t_train_reference = kcg_lit_int32(0);
  outC->_L6_then_IfBlock1.m_Entry.Header.nid_em = kcg_lit_int32(0);
  outC->_L6_then_IfBlock1.m_Entry.Header.q_scale = kcg_lit_int32(0);
  outC->_L6_then_IfBlock1.m_Entry.Header.d_sr = kcg_lit_int32(0);
  outC->_L6_then_IfBlock1.m_Entry.Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L6_then_IfBlock1.m_Entry.Header.d_ref = kcg_lit_int32(0);
  outC->_L6_then_IfBlock1.m_Entry.Header.q_dir = kcg_lit_int32(0);
  outC->_L6_then_IfBlock1.m_Entry.Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L6_then_IfBlock1.m_Entry.Header.m_version = kcg_lit_int32(0);
  for (idx44 = 0; idx44 < 30; idx44++) {
    outC->_L6_then_IfBlock1.m_Entry.Messages.PacketHeaders[idx44].nid_packet =
      kcg_lit_int32(0);
    outC->_L6_then_IfBlock1.m_Entry.Messages.PacketHeaders[idx44].q_dir =
      Q_DIR_Reverse;
    outC->_L6_then_IfBlock1.m_Entry.Messages.PacketHeaders[idx44].valid = kcg_true;
    outC->_L6_then_IfBlock1.m_Entry.Messages.PacketHeaders[idx44].startAddress =
      kcg_lit_int32(0);
    outC->_L6_then_IfBlock1.m_Entry.Messages.PacketHeaders[idx44].endAddress =
      kcg_lit_int32(0);
  }
  for (idx45 = 0; idx45 < 500; idx45++) {
    outC->_L6_then_IfBlock1.m_Entry.Messages.PacketData[idx45] = kcg_lit_int32(0);
  }
  for (idx48 = 0; idx48 < 8; idx48++) {
    outC->_L7_then_IfBlock1[idx48].m_IsValid = kcg_true;
    outC->_L7_then_IfBlock1[idx48].m_Entry.Header.radioDevice = kcg_lit_int32(0);
    outC->_L7_then_IfBlock1[idx48].m_Entry.Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->_L7_then_IfBlock1[idx48].m_Entry.Header.nid_message = kcg_lit_int32(0);
    outC->_L7_then_IfBlock1[idx48].m_Entry.Header.t_train = kcg_lit_int32(0);
    outC->_L7_then_IfBlock1[idx48].m_Entry.Header.m_ack = kcg_lit_int32(0);
    outC->_L7_then_IfBlock1[idx48].m_Entry.Header.nid_lrbg = kcg_lit_int32(0);
    outC->_L7_then_IfBlock1[idx48].m_Entry.Header.t_train_reference =
      kcg_lit_int32(0);
    outC->_L7_then_IfBlock1[idx48].m_Entry.Header.nid_em = kcg_lit_int32(0);
    outC->_L7_then_IfBlock1[idx48].m_Entry.Header.q_scale = kcg_lit_int32(0);
    outC->_L7_then_IfBlock1[idx48].m_Entry.Header.d_sr = kcg_lit_int32(0);
    outC->_L7_then_IfBlock1[idx48].m_Entry.Header.t_sh_rqst = kcg_lit_int32(0);
    outC->_L7_then_IfBlock1[idx48].m_Entry.Header.d_ref = kcg_lit_int32(0);
    outC->_L7_then_IfBlock1[idx48].m_Entry.Header.q_dir = kcg_lit_int32(0);
    outC->_L7_then_IfBlock1[idx48].m_Entry.Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->_L7_then_IfBlock1[idx48].m_Entry.Header.m_version = kcg_lit_int32(0);
    for (idx46 = 0; idx46 < 30; idx46++) {
      outC->_L7_then_IfBlock1[idx48].m_Entry.Messages.PacketHeaders[idx46].nid_packet =
        kcg_lit_int32(0);
      outC->_L7_then_IfBlock1[idx48].m_Entry.Messages.PacketHeaders[idx46].q_dir =
        Q_DIR_Reverse;
      outC->_L7_then_IfBlock1[idx48].m_Entry.Messages.PacketHeaders[idx46].valid =
        kcg_true;
      outC->_L7_then_IfBlock1[idx48].m_Entry.Messages.PacketHeaders[idx46].startAddress =
        kcg_lit_int32(0);
      outC->_L7_then_IfBlock1[idx48].m_Entry.Messages.PacketHeaders[idx46].endAddress =
        kcg_lit_int32(0);
    }
    for (idx47 = 0; idx47 < 500; idx47++) {
      outC->_L7_then_IfBlock1[idx48].m_Entry.Messages.PacketData[idx47] =
        kcg_lit_int32(0);
    }
  }
  outC->_L8_then_IfBlock1.m_IsValid = kcg_true;
  outC->_L8_then_IfBlock1.m_Entry.Header.radioDevice = kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.m_Entry.Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.m_Entry.Header.nid_message = kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.m_Entry.Header.t_train = kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.m_Entry.Header.m_ack = kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.m_Entry.Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.m_Entry.Header.t_train_reference = kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.m_Entry.Header.nid_em = kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.m_Entry.Header.q_scale = kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.m_Entry.Header.d_sr = kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.m_Entry.Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.m_Entry.Header.d_ref = kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.m_Entry.Header.q_dir = kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.m_Entry.Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.m_Entry.Header.m_version = kcg_lit_int32(0);
  for (idx49 = 0; idx49 < 30; idx49++) {
    outC->_L8_then_IfBlock1.m_Entry.Messages.PacketHeaders[idx49].nid_packet =
      kcg_lit_int32(0);
    outC->_L8_then_IfBlock1.m_Entry.Messages.PacketHeaders[idx49].q_dir =
      Q_DIR_Reverse;
    outC->_L8_then_IfBlock1.m_Entry.Messages.PacketHeaders[idx49].valid = kcg_true;
    outC->_L8_then_IfBlock1.m_Entry.Messages.PacketHeaders[idx49].startAddress =
      kcg_lit_int32(0);
    outC->_L8_then_IfBlock1.m_Entry.Messages.PacketHeaders[idx49].endAddress =
      kcg_lit_int32(0);
  }
  for (idx50 = 0; idx50 < 500; idx50++) {
    outC->_L8_then_IfBlock1.m_Entry.Messages.PacketData[idx50] = kcg_lit_int32(0);
  }
  for (idx53 = 0; idx53 < 1; idx53++) {
    outC->_L9_then_IfBlock1[idx53].m_IsValid = kcg_true;
    outC->_L9_then_IfBlock1[idx53].m_Entry.Header.radioDevice = kcg_lit_int32(0);
    outC->_L9_then_IfBlock1[idx53].m_Entry.Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->_L9_then_IfBlock1[idx53].m_Entry.Header.nid_message = kcg_lit_int32(0);
    outC->_L9_then_IfBlock1[idx53].m_Entry.Header.t_train = kcg_lit_int32(0);
    outC->_L9_then_IfBlock1[idx53].m_Entry.Header.m_ack = kcg_lit_int32(0);
    outC->_L9_then_IfBlock1[idx53].m_Entry.Header.nid_lrbg = kcg_lit_int32(0);
    outC->_L9_then_IfBlock1[idx53].m_Entry.Header.t_train_reference =
      kcg_lit_int32(0);
    outC->_L9_then_IfBlock1[idx53].m_Entry.Header.nid_em = kcg_lit_int32(0);
    outC->_L9_then_IfBlock1[idx53].m_Entry.Header.q_scale = kcg_lit_int32(0);
    outC->_L9_then_IfBlock1[idx53].m_Entry.Header.d_sr = kcg_lit_int32(0);
    outC->_L9_then_IfBlock1[idx53].m_Entry.Header.t_sh_rqst = kcg_lit_int32(0);
    outC->_L9_then_IfBlock1[idx53].m_Entry.Header.d_ref = kcg_lit_int32(0);
    outC->_L9_then_IfBlock1[idx53].m_Entry.Header.q_dir = kcg_lit_int32(0);
    outC->_L9_then_IfBlock1[idx53].m_Entry.Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->_L9_then_IfBlock1[idx53].m_Entry.Header.m_version = kcg_lit_int32(0);
    for (idx51 = 0; idx51 < 30; idx51++) {
      outC->_L9_then_IfBlock1[idx53].m_Entry.Messages.PacketHeaders[idx51].nid_packet =
        kcg_lit_int32(0);
      outC->_L9_then_IfBlock1[idx53].m_Entry.Messages.PacketHeaders[idx51].q_dir =
        Q_DIR_Reverse;
      outC->_L9_then_IfBlock1[idx53].m_Entry.Messages.PacketHeaders[idx51].valid =
        kcg_true;
      outC->_L9_then_IfBlock1[idx53].m_Entry.Messages.PacketHeaders[idx51].startAddress =
        kcg_lit_int32(0);
      outC->_L9_then_IfBlock1[idx53].m_Entry.Messages.PacketHeaders[idx51].endAddress =
        kcg_lit_int32(0);
    }
    for (idx52 = 0; idx52 < 500; idx52++) {
      outC->_L9_then_IfBlock1[idx53].m_Entry.Messages.PacketData[idx52] =
        kcg_lit_int32(0);
    }
  }
  for (idx56 = 0; idx56 < 8; idx56++) {
    outC->_L10_then_IfBlock1.m_Entries[idx56].m_IsValid = kcg_true;
    outC->_L10_then_IfBlock1.m_Entries[idx56].m_Entry.Header.radioDevice =
      kcg_lit_int32(0);
    outC->_L10_then_IfBlock1.m_Entries[idx56].m_Entry.Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->_L10_then_IfBlock1.m_Entries[idx56].m_Entry.Header.nid_message =
      kcg_lit_int32(0);
    outC->_L10_then_IfBlock1.m_Entries[idx56].m_Entry.Header.t_train =
      kcg_lit_int32(0);
    outC->_L10_then_IfBlock1.m_Entries[idx56].m_Entry.Header.m_ack =
      kcg_lit_int32(0);
    outC->_L10_then_IfBlock1.m_Entries[idx56].m_Entry.Header.nid_lrbg =
      kcg_lit_int32(0);
    outC->_L10_then_IfBlock1.m_Entries[idx56].m_Entry.Header.t_train_reference =
      kcg_lit_int32(0);
    outC->_L10_then_IfBlock1.m_Entries[idx56].m_Entry.Header.nid_em =
      kcg_lit_int32(0);
    outC->_L10_then_IfBlock1.m_Entries[idx56].m_Entry.Header.q_scale =
      kcg_lit_int32(0);
    outC->_L10_then_IfBlock1.m_Entries[idx56].m_Entry.Header.d_sr =
      kcg_lit_int32(0);
    outC->_L10_then_IfBlock1.m_Entries[idx56].m_Entry.Header.t_sh_rqst =
      kcg_lit_int32(0);
    outC->_L10_then_IfBlock1.m_Entries[idx56].m_Entry.Header.d_ref =
      kcg_lit_int32(0);
    outC->_L10_then_IfBlock1.m_Entries[idx56].m_Entry.Header.q_dir =
      kcg_lit_int32(0);
    outC->_L10_then_IfBlock1.m_Entries[idx56].m_Entry.Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->_L10_then_IfBlock1.m_Entries[idx56].m_Entry.Header.m_version =
      kcg_lit_int32(0);
    for (idx54 = 0; idx54 < 30; idx54++) {
      outC->_L10_then_IfBlock1.m_Entries[idx56].m_Entry.Messages.PacketHeaders[idx54].nid_packet =
        kcg_lit_int32(0);
      outC->_L10_then_IfBlock1.m_Entries[idx56].m_Entry.Messages.PacketHeaders[idx54].q_dir =
        Q_DIR_Reverse;
      outC->_L10_then_IfBlock1.m_Entries[idx56].m_Entry.Messages.PacketHeaders[idx54].valid =
        kcg_true;
      outC->_L10_then_IfBlock1.m_Entries[idx56].m_Entry.Messages.PacketHeaders[idx54].startAddress =
        kcg_lit_int32(0);
      outC->_L10_then_IfBlock1.m_Entries[idx56].m_Entry.Messages.PacketHeaders[idx54].endAddress =
        kcg_lit_int32(0);
    }
    for (idx55 = 0; idx55 < 500; idx55++) {
      outC->_L10_then_IfBlock1.m_Entries[idx56].m_Entry.Messages.PacketData[idx55] =
        kcg_lit_int32(0);
    }
  }
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
  for (idx57 = 0; idx57 < 30; idx57++) {
    outC->outRadioTrackTrainMessageQueueEntry.m_Entry.Messages.PacketHeaders[idx57].nid_packet =
      kcg_lit_int32(0);
    outC->outRadioTrackTrainMessageQueueEntry.m_Entry.Messages.PacketHeaders[idx57].q_dir =
      Q_DIR_Reverse;
    outC->outRadioTrackTrainMessageQueueEntry.m_Entry.Messages.PacketHeaders[idx57].valid =
      kcg_true;
    outC->outRadioTrackTrainMessageQueueEntry.m_Entry.Messages.PacketHeaders[idx57].startAddress =
      kcg_lit_int32(0);
    outC->outRadioTrackTrainMessageQueueEntry.m_Entry.Messages.PacketHeaders[idx57].endAddress =
      kcg_lit_int32(0);
  }
  for (idx58 = 0; idx58 < 500; idx58++) {
    outC->outRadioTrackTrainMessageQueueEntry.m_Entry.Messages.PacketData[idx58] =
      kcg_lit_int32(0);
  }
  for (idx61 = 0; idx61 < 8; idx61++) {
    outC->outRadioTrackTrainMessageQueue.m_Entries[idx61].m_IsValid = kcg_true;
    outC->outRadioTrackTrainMessageQueue.m_Entries[idx61].m_Entry.Header.radioDevice =
      kcg_lit_int32(0);
    outC->outRadioTrackTrainMessageQueue.m_Entries[idx61].m_Entry.Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->outRadioTrackTrainMessageQueue.m_Entries[idx61].m_Entry.Header.nid_message =
      kcg_lit_int32(0);
    outC->outRadioTrackTrainMessageQueue.m_Entries[idx61].m_Entry.Header.t_train =
      kcg_lit_int32(0);
    outC->outRadioTrackTrainMessageQueue.m_Entries[idx61].m_Entry.Header.m_ack =
      kcg_lit_int32(0);
    outC->outRadioTrackTrainMessageQueue.m_Entries[idx61].m_Entry.Header.nid_lrbg =
      kcg_lit_int32(0);
    outC->outRadioTrackTrainMessageQueue.m_Entries[idx61].m_Entry.Header.t_train_reference =
      kcg_lit_int32(0);
    outC->outRadioTrackTrainMessageQueue.m_Entries[idx61].m_Entry.Header.nid_em =
      kcg_lit_int32(0);
    outC->outRadioTrackTrainMessageQueue.m_Entries[idx61].m_Entry.Header.q_scale =
      kcg_lit_int32(0);
    outC->outRadioTrackTrainMessageQueue.m_Entries[idx61].m_Entry.Header.d_sr =
      kcg_lit_int32(0);
    outC->outRadioTrackTrainMessageQueue.m_Entries[idx61].m_Entry.Header.t_sh_rqst =
      kcg_lit_int32(0);
    outC->outRadioTrackTrainMessageQueue.m_Entries[idx61].m_Entry.Header.d_ref =
      kcg_lit_int32(0);
    outC->outRadioTrackTrainMessageQueue.m_Entries[idx61].m_Entry.Header.q_dir =
      kcg_lit_int32(0);
    outC->outRadioTrackTrainMessageQueue.m_Entries[idx61].m_Entry.Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->outRadioTrackTrainMessageQueue.m_Entries[idx61].m_Entry.Header.m_version =
      kcg_lit_int32(0);
    for (idx59 = 0; idx59 < 30; idx59++) {
      outC->outRadioTrackTrainMessageQueue.m_Entries[idx61].m_Entry.Messages.PacketHeaders[idx59].nid_packet =
        kcg_lit_int32(0);
      outC->outRadioTrackTrainMessageQueue.m_Entries[idx61].m_Entry.Messages.PacketHeaders[idx59].q_dir =
        Q_DIR_Reverse;
      outC->outRadioTrackTrainMessageQueue.m_Entries[idx61].m_Entry.Messages.PacketHeaders[idx59].valid =
        kcg_true;
      outC->outRadioTrackTrainMessageQueue.m_Entries[idx61].m_Entry.Messages.PacketHeaders[idx59].startAddress =
        kcg_lit_int32(0);
      outC->outRadioTrackTrainMessageQueue.m_Entries[idx61].m_Entry.Messages.PacketHeaders[idx59].endAddress =
        kcg_lit_int32(0);
    }
    for (idx60 = 0; idx60 < 500; idx60++) {
      outC->outRadioTrackTrainMessageQueue.m_Entries[idx61].m_Entry.Messages.PacketData[idx60] =
        kcg_lit_int32(0);
    }
  }
  /* IfBlock1:then:_L10=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__SetEntries#1)/ */
  RadioTrackTrainMessageQueue__SetEntries_init_RBC_Collections_Pkg(
    &outC->Context_RadioTrackTrainMessageQueue__SetEntries_1);
  /* IfBlock1:then:_L2=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetEntries#2)/ */
  RadioTrackTrainMessageQueue__GetEntries_init_RBC_Collections_Pkg(
    &outC->Context_RadioTrackTrainMessageQueue__GetEntries_2);
  /* IfBlock1:else:else:_L11=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__SetEntries#3)/ */
  RadioTrackTrainMessageQueue__SetEntries_init_RBC_Collections_Pkg(
    &outC->Context_RadioTrackTrainMessageQueue__SetEntries_3);
  for (idx1 = 0; idx1 < 8; idx1++) {
    /* IfBlock1:else:else:_L9=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take_Iterable2#2)/ */
    RadioTrackTrainMessageQueue__Take_Iterable2_init_RBC_Collections_Pkg(
      &outC->Context_RadioTrackTrainMessageQueue__Take_Iterable2_2[idx1]);
  }
  for (idx = 0; idx < 8; idx++) {
    /* IfBlock1:else:else:_L14=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take_Iterable#2)/ */
    RadioTrackTrainMessageQueue__Take_Iterable_init_RBC_Collections_Pkg(
      &outC->Context_RadioTrackTrainMessageQueue__Take_Iterable_2[idx]);
  }
  /* IfBlock1:else:else:_L3=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetEntries#4)/ */
  RadioTrackTrainMessageQueue__GetEntries_init_RBC_Collections_Pkg(
    &outC->Context_RadioTrackTrainMessageQueue__GetEntries_4);
  /* _L2=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity#1)/ */
  RadioTrackTrainMessageQueue__GetRemainingCapacity_init_RBC_Collections_Pkg(
    &outC->Context_RadioTrackTrainMessageQueue__GetRemainingCapacity_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RadioTrackTrainMessageQueue__Take_reset_RBC_Collections_Pkg(
  outC_RadioTrackTrainMessageQueue__Take_RBC_Collections_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  /* IfBlock1:then:_L10=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__SetEntries#1)/ */
  RadioTrackTrainMessageQueue__SetEntries_reset_RBC_Collections_Pkg(
    &outC->Context_RadioTrackTrainMessageQueue__SetEntries_1);
  /* IfBlock1:then:_L2=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetEntries#2)/ */
  RadioTrackTrainMessageQueue__GetEntries_reset_RBC_Collections_Pkg(
    &outC->Context_RadioTrackTrainMessageQueue__GetEntries_2);
  /* IfBlock1:else:else:_L11=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__SetEntries#3)/ */
  RadioTrackTrainMessageQueue__SetEntries_reset_RBC_Collections_Pkg(
    &outC->Context_RadioTrackTrainMessageQueue__SetEntries_3);
  for (idx1 = 0; idx1 < 8; idx1++) {
    /* IfBlock1:else:else:_L9=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take_Iterable2#2)/ */
    RadioTrackTrainMessageQueue__Take_Iterable2_reset_RBC_Collections_Pkg(
      &outC->Context_RadioTrackTrainMessageQueue__Take_Iterable2_2[idx1]);
  }
  for (idx = 0; idx < 8; idx++) {
    /* IfBlock1:else:else:_L14=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take_Iterable#2)/ */
    RadioTrackTrainMessageQueue__Take_Iterable_reset_RBC_Collections_Pkg(
      &outC->Context_RadioTrackTrainMessageQueue__Take_Iterable_2[idx]);
  }
  /* IfBlock1:else:else:_L3=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetEntries#4)/ */
  RadioTrackTrainMessageQueue__GetEntries_reset_RBC_Collections_Pkg(
    &outC->Context_RadioTrackTrainMessageQueue__GetEntries_4);
  /* _L2=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity#1)/ */
  RadioTrackTrainMessageQueue__GetRemainingCapacity_reset_RBC_Collections_Pkg(
    &outC->Context_RadioTrackTrainMessageQueue__GetRemainingCapacity_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RadioTrackTrainMessageQueue__Take_RBC_Collections_Pkg.c
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

