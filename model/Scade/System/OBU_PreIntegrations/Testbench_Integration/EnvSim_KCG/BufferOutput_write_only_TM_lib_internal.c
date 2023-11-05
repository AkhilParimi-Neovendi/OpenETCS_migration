/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BufferOutput_write_only_TM_lib_internal.h"

/* TM_lib_internal::BufferOutput_write_only/ */
void BufferOutput_write_only_TM_lib_internal(
  /* Buffer_In/ */
  M_TrainTrackRadioOutputBuffer_t_TM_lib_internal *Buffer_In,
  /* Stacksize_old/ */
  kcg_int32 Stacksize_old,
  /* Message_In/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *Message_In,
  /* Bus_Size/ */
  kcg_int32 Bus_Size,
  outC_BufferOutput_write_only_TM_lib_internal *outC)
{
  /* Buffer_Out/ */
  static M_TrainTrackRadioOutputBuffer_t_TM_lib_internal Buffer_Out_partial;
  /* Stacksize_new/ */
  static kcg_int32 Stacksize_new_partial;
  /* Message_out/ */
  static M_TrainTrack_Message_T_TM_radio_messages Message_out_partial;
  /* Buffer_Out/ */
  static M_TrainTrackRadioOutputBuffer_t_TM_lib_internal _1_Buffer_Out_partial;
  /* Stacksize_new/ */
  static kcg_int32 _2_Stacksize_new_partial;
  /* Message_out/ */
  static M_TrainTrack_Message_T_TM_radio_messages _3_Message_out_partial;
  /* Buffer_Out/ */
  static M_TrainTrackRadioOutputBuffer_t_TM_lib_internal _4_Buffer_Out_partial;
  /* Stacksize_new/ */
  static kcg_int32 _5_Stacksize_new_partial;
  /* Message_out/ */
  static M_TrainTrack_Message_T_TM_radio_messages _6_Message_out_partial;
  /* Buffer_Out/ */
  static M_TrainTrackRadioOutputBuffer_t_TM_lib_internal _7_Buffer_Out_partial;
  /* Stacksize_new/ */
  static kcg_int32 _8_Stacksize_new_partial;
  /* Message_out/ */
  static M_TrainTrack_Message_T_TM_radio_messages _9_Message_out_partial;
  /* Message_out/ */
  static M_TrainTrack_Message_T_TM_radio_messages _10_Message_out_partial;
  /* Stacksize_new/ */
  static kcg_int32 _11_Stacksize_new_partial;
  /* Buffer_Out/ */
  static M_TrainTrackRadioOutputBuffer_t_TM_lib_internal _12_Buffer_Out_partial;
  /* Message_out/ */
  static M_TrainTrack_Message_T_TM_radio_messages _13_Message_out_partial;
  /* Stacksize_new/ */
  static kcg_int32 _14_Stacksize_new_partial;
  /* Buffer_Out/ */
  static M_TrainTrackRadioOutputBuffer_t_TM_lib_internal _15_Buffer_Out_partial;
  /* Message_out/ */
  static M_TrainTrack_Message_T_TM_radio_messages _16_Message_out_partial;
  /* Stacksize_new/ */
  static kcg_int32 _17_Stacksize_new_partial;
  /* Buffer_Out/ */
  static M_TrainTrackRadioOutputBuffer_t_TM_lib_internal _18_Buffer_Out_partial;
  /* Message_out/ */
  static M_TrainTrack_Message_T_TM_radio_messages _19_Message_out_partial;
  /* Stacksize_new/ */
  static kcg_int32 _20_Stacksize_new_partial;
  /* Buffer_Out/ */
  static M_TrainTrackRadioOutputBuffer_t_TM_lib_internal _21_Buffer_Out_partial;

  outC->IfBlock1_clock = Bus_Size == kcg_lit_int32(1);
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
      &outC->_L6_then_IfBlock1,
      Buffer_In);
    outC->_L5_then_IfBlock1 = Stacksize_old;
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->_L4_then_IfBlock1,
      Message_In);
    /* IfBlock1:then:_L1=(TM_lib_internal::BufferOutput_write_only1#1)/ */
    BufferOutput_write_only1_TM_lib_internal(
      &outC->_L6_then_IfBlock1,
      outC->_L5_then_IfBlock1,
      &outC->_L4_then_IfBlock1,
      &outC->Context_BufferOutput_write_only1_1);
    kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
      &outC->_L1_then_IfBlock1,
      &outC->Context_BufferOutput_write_only1_1.Buffer_Out);
    outC->_L2_then_IfBlock1 =
      outC->Context_BufferOutput_write_only1_1.Stacksize_new;
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &outC->_L3_then_IfBlock1,
      &outC->Context_BufferOutput_write_only1_1.Message_out);
    kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
      &Buffer_Out_partial,
      &outC->_L1_then_IfBlock1);
    Stacksize_new_partial = outC->_L2_then_IfBlock1;
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &Message_out_partial,
      &outC->_L3_then_IfBlock1);
    kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
      &outC->Buffer_Out,
      &Buffer_Out_partial);
    outC->Stacksize_new = Stacksize_new_partial;
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &outC->Message_out,
      &Message_out_partial);
  }
  else {
    outC->else_clock_IfBlock1 = Bus_Size == kcg_lit_int32(2);
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
        &outC->_L2_then_else_IfBlock1,
        Buffer_In);
      outC->_L1_then_else_IfBlock1 = Stacksize_old;
      kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
        &outC->_L3_then_else_IfBlock1,
        Message_In);
      /* IfBlock1:else:then:_L7=(TM_lib_internal::BufferOutput_write_only2#1)/ */
      BufferOutput_write_only2_TM_lib_internal(
        &outC->_L2_then_else_IfBlock1,
        outC->_L1_then_else_IfBlock1,
        &outC->_L3_then_else_IfBlock1,
        &outC->Context_BufferOutput_write_only2_1);
      kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
        &outC->_L7_then_else_IfBlock1,
        &outC->Context_BufferOutput_write_only2_1.Buffer_Out);
      outC->_L4_then_else_IfBlock1 =
        outC->Context_BufferOutput_write_only2_1.Stacksize_new;
      kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
        &outC->_L5_then_else_IfBlock1,
        &outC->Context_BufferOutput_write_only2_1.Message_out);
      kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
        &_19_Message_out_partial,
        &outC->_L5_then_else_IfBlock1);
      _20_Stacksize_new_partial = outC->_L4_then_else_IfBlock1;
      kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
        &_21_Buffer_Out_partial,
        &outC->_L7_then_else_IfBlock1);
      kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
        &_1_Buffer_Out_partial,
        &_21_Buffer_Out_partial);
      _2_Stacksize_new_partial = _20_Stacksize_new_partial;
      kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
        &_3_Message_out_partial,
        &_19_Message_out_partial);
    }
    else {
      outC->else_clock_else_IfBlock1 = Bus_Size == kcg_lit_int32(3);
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
          &outC->_L1_then_else_else_IfBlock1,
          Buffer_In);
        outC->_L2_then_else_else_IfBlock1 = Stacksize_old;
        kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
          &outC->_L3_then_else_else_IfBlock1,
          Message_In);
        /* IfBlock1:else:else:then:_L4=(TM_lib_internal::BufferOutput_write_only3#1)/ */
        BufferOutput_write_only3_TM_lib_internal(
          &outC->_L1_then_else_else_IfBlock1,
          outC->_L2_then_else_else_IfBlock1,
          &outC->_L3_then_else_else_IfBlock1,
          &outC->Context_BufferOutput_write_only3_1);
        kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
          &outC->_L4_then_else_else_IfBlock1,
          &outC->Context_BufferOutput_write_only3_1.Buffer_Out);
        outC->_L5_then_else_else_IfBlock1 =
          outC->Context_BufferOutput_write_only3_1.Stacksize_new;
        kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
          &outC->_L6_then_else_else_IfBlock1,
          &outC->Context_BufferOutput_write_only3_1.Message_out);
        kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
          &_4_Buffer_Out_partial,
          &outC->_L4_then_else_else_IfBlock1);
        kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
          &_6_Message_out_partial,
          &outC->_L6_then_else_else_IfBlock1);
        _5_Stacksize_new_partial = outC->_L5_then_else_else_IfBlock1;
        kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
          &_18_Buffer_Out_partial,
          &_4_Buffer_Out_partial);
        _17_Stacksize_new_partial = _5_Stacksize_new_partial;
        kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
          &_16_Message_out_partial,
          &_6_Message_out_partial);
      }
      else {
        outC->else_clock_else_else_IfBlock1 = Bus_Size == kcg_lit_int32(4);
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
            &outC->_L6_then_else_else_else_IfBlock1,
            Buffer_In);
          outC->_L4_then_else_else_else_IfBlock1 = Stacksize_old;
          kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
            &outC->_L5_then_else_else_else_IfBlock1,
            Message_In);
          /* IfBlock1:else:else:else:then:_L1=(TM_lib_internal::BufferOutput_write_only4#1)/ */
          BufferOutput_write_only4_TM_lib_internal(
            &outC->_L6_then_else_else_else_IfBlock1,
            outC->_L4_then_else_else_else_IfBlock1,
            &outC->_L5_then_else_else_else_IfBlock1,
            &outC->Context_BufferOutput_write_only4_1);
          kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
            &outC->_L1_then_else_else_else_IfBlock1,
            &outC->Context_BufferOutput_write_only4_1.Buffer_Out);
          outC->_L2_then_else_else_else_IfBlock1 =
            outC->Context_BufferOutput_write_only4_1.Stacksize_new;
          kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
            &outC->_L3_then_else_else_else_IfBlock1,
            &outC->Context_BufferOutput_write_only4_1.Message_out);
          kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
            &_15_Buffer_Out_partial,
            &outC->_L1_then_else_else_else_IfBlock1);
          _14_Stacksize_new_partial = outC->_L2_then_else_else_else_IfBlock1;
          kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
            &_13_Message_out_partial,
            &outC->_L3_then_else_else_else_IfBlock1);
          kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
            &_7_Buffer_Out_partial,
            &_15_Buffer_Out_partial);
          _8_Stacksize_new_partial = _14_Stacksize_new_partial;
          kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
            &_9_Message_out_partial,
            &_13_Message_out_partial);
        }
        else {
          kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
            &outC->_L6_else_else_else_else_IfBlock1,
            Buffer_In);
          outC->_L4_else_else_else_else_IfBlock1 = Stacksize_old;
          kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
            &outC->_L5_else_else_else_else_IfBlock1,
            Message_In);
          /* IfBlock1:else:else:else:else:_L1=(TM_lib_internal::BufferOutput_write_only5#1)/ */
          BufferOutput_write_only5_TM_lib_internal(
            &outC->_L6_else_else_else_else_IfBlock1,
            outC->_L4_else_else_else_else_IfBlock1,
            &outC->_L5_else_else_else_else_IfBlock1,
            &outC->Context_BufferOutput_write_only5_1);
          kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
            &outC->_L1_else_else_else_else_IfBlock1,
            &outC->Context_BufferOutput_write_only5_1.Buffer_Out);
          outC->_L2_else_else_else_else_IfBlock1 =
            outC->Context_BufferOutput_write_only5_1.Stacksize_new;
          kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
            &outC->_L3_else_else_else_else_IfBlock1,
            &outC->Context_BufferOutput_write_only5_1.Message_out);
          _11_Stacksize_new_partial = outC->_L2_else_else_else_else_IfBlock1;
          kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
            &_10_Message_out_partial,
            &outC->_L3_else_else_else_else_IfBlock1);
          kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
            &_12_Buffer_Out_partial,
            &outC->_L1_else_else_else_else_IfBlock1);
          kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
            &_7_Buffer_Out_partial,
            &_12_Buffer_Out_partial);
          _8_Stacksize_new_partial = _11_Stacksize_new_partial;
          kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
            &_9_Message_out_partial,
            &_10_Message_out_partial);
        }
        kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
          &_18_Buffer_Out_partial,
          &_7_Buffer_Out_partial);
        _17_Stacksize_new_partial = _8_Stacksize_new_partial;
        kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
          &_16_Message_out_partial,
          &_9_Message_out_partial);
      }
      kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
        &_1_Buffer_Out_partial,
        &_18_Buffer_Out_partial);
      _2_Stacksize_new_partial = _17_Stacksize_new_partial;
      kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
        &_3_Message_out_partial,
        &_16_Message_out_partial);
    }
    kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
      &outC->Buffer_Out,
      &_1_Buffer_Out_partial);
    outC->Stacksize_new = _2_Stacksize_new_partial;
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &outC->Message_out,
      &_3_Message_out_partial);
  }
}

#ifndef KCG_USER_DEFINED_INIT
void BufferOutput_write_only_init_TM_lib_internal(
  outC_BufferOutput_write_only_TM_lib_internal *outC)
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

  outC->IfBlock1_clock = kcg_true;
  for (idx1 = 0; idx1 < 100; idx1++) {
    outC->_L7_then_else_IfBlock1[idx1].Message.valid = kcg_true;
    outC->_L7_then_else_IfBlock1[idx1].Message.nid_message = kcg_lit_int32(0);
    outC->_L7_then_else_IfBlock1[idx1].Message.l_message = kcg_lit_int32(0);
    outC->_L7_then_else_IfBlock1[idx1].Message.t_train = kcg_lit_int32(0);
    outC->_L7_then_else_IfBlock1[idx1].Message.nid_engine = kcg_lit_int32(0);
    outC->_L7_then_else_IfBlock1[idx1].Message.field1 = kcg_lit_int32(0);
    outC->_L7_then_else_IfBlock1[idx1].Message.field2 = kcg_lit_int32(0);
    outC->_L7_then_else_IfBlock1[idx1].Message.field3 = kcg_lit_int32(0);
    for (idx = 0; idx < 50; idx++) {
      outC->_L7_then_else_IfBlock1[idx1].OptionalPackets[idx] = kcg_lit_int32(0);
    }
  }
  outC->_L1_then_else_IfBlock1 = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 100; idx3++) {
    outC->_L2_then_else_IfBlock1[idx3].Message.valid = kcg_true;
    outC->_L2_then_else_IfBlock1[idx3].Message.nid_message = kcg_lit_int32(0);
    outC->_L2_then_else_IfBlock1[idx3].Message.l_message = kcg_lit_int32(0);
    outC->_L2_then_else_IfBlock1[idx3].Message.t_train = kcg_lit_int32(0);
    outC->_L2_then_else_IfBlock1[idx3].Message.nid_engine = kcg_lit_int32(0);
    outC->_L2_then_else_IfBlock1[idx3].Message.field1 = kcg_lit_int32(0);
    outC->_L2_then_else_IfBlock1[idx3].Message.field2 = kcg_lit_int32(0);
    outC->_L2_then_else_IfBlock1[idx3].Message.field3 = kcg_lit_int32(0);
    for (idx2 = 0; idx2 < 50; idx2++) {
      outC->_L2_then_else_IfBlock1[idx3].OptionalPackets[idx2] = kcg_lit_int32(0);
    }
  }
  for (idx5 = 0; idx5 < 5; idx5++) {
    outC->_L3_then_else_IfBlock1[idx5].Message.valid = kcg_true;
    outC->_L3_then_else_IfBlock1[idx5].Message.nid_message = kcg_lit_int32(0);
    outC->_L3_then_else_IfBlock1[idx5].Message.l_message = kcg_lit_int32(0);
    outC->_L3_then_else_IfBlock1[idx5].Message.t_train = kcg_lit_int32(0);
    outC->_L3_then_else_IfBlock1[idx5].Message.nid_engine = kcg_lit_int32(0);
    outC->_L3_then_else_IfBlock1[idx5].Message.field1 = kcg_lit_int32(0);
    outC->_L3_then_else_IfBlock1[idx5].Message.field2 = kcg_lit_int32(0);
    outC->_L3_then_else_IfBlock1[idx5].Message.field3 = kcg_lit_int32(0);
    for (idx4 = 0; idx4 < 50; idx4++) {
      outC->_L3_then_else_IfBlock1[idx5].OptionalPackets[idx4] = kcg_lit_int32(0);
    }
  }
  outC->_L5_then_else_IfBlock1.Message.valid = kcg_true;
  outC->_L5_then_else_IfBlock1.Message.nid_message = kcg_lit_int32(0);
  outC->_L5_then_else_IfBlock1.Message.l_message = kcg_lit_int32(0);
  outC->_L5_then_else_IfBlock1.Message.t_train = kcg_lit_int32(0);
  outC->_L5_then_else_IfBlock1.Message.nid_engine = kcg_lit_int32(0);
  outC->_L5_then_else_IfBlock1.Message.field1 = kcg_lit_int32(0);
  outC->_L5_then_else_IfBlock1.Message.field2 = kcg_lit_int32(0);
  outC->_L5_then_else_IfBlock1.Message.field3 = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 50; idx6++) {
    outC->_L5_then_else_IfBlock1.OptionalPackets[idx6] = kcg_lit_int32(0);
  }
  outC->_L4_then_else_IfBlock1 = kcg_lit_int32(0);
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L3_then_else_else_else_IfBlock1.Message.valid = kcg_true;
  outC->_L3_then_else_else_else_IfBlock1.Message.nid_message = kcg_lit_int32(0);
  outC->_L3_then_else_else_else_IfBlock1.Message.l_message = kcg_lit_int32(0);
  outC->_L3_then_else_else_else_IfBlock1.Message.t_train = kcg_lit_int32(0);
  outC->_L3_then_else_else_else_IfBlock1.Message.nid_engine = kcg_lit_int32(0);
  outC->_L3_then_else_else_else_IfBlock1.Message.field1 = kcg_lit_int32(0);
  outC->_L3_then_else_else_else_IfBlock1.Message.field2 = kcg_lit_int32(0);
  outC->_L3_then_else_else_else_IfBlock1.Message.field3 = kcg_lit_int32(0);
  for (idx7 = 0; idx7 < 50; idx7++) {
    outC->_L3_then_else_else_else_IfBlock1.OptionalPackets[idx7] = kcg_lit_int32(0);
  }
  outC->_L2_then_else_else_else_IfBlock1 = kcg_lit_int32(0);
  for (idx9 = 0; idx9 < 100; idx9++) {
    outC->_L1_then_else_else_else_IfBlock1[idx9].Message.valid = kcg_true;
    outC->_L1_then_else_else_else_IfBlock1[idx9].Message.nid_message =
      kcg_lit_int32(0);
    outC->_L1_then_else_else_else_IfBlock1[idx9].Message.l_message =
      kcg_lit_int32(0);
    outC->_L1_then_else_else_else_IfBlock1[idx9].Message.t_train = kcg_lit_int32(0);
    outC->_L1_then_else_else_else_IfBlock1[idx9].Message.nid_engine =
      kcg_lit_int32(0);
    outC->_L1_then_else_else_else_IfBlock1[idx9].Message.field1 = kcg_lit_int32(0);
    outC->_L1_then_else_else_else_IfBlock1[idx9].Message.field2 = kcg_lit_int32(0);
    outC->_L1_then_else_else_else_IfBlock1[idx9].Message.field3 = kcg_lit_int32(0);
    for (idx8 = 0; idx8 < 50; idx8++) {
      outC->_L1_then_else_else_else_IfBlock1[idx9].OptionalPackets[idx8] =
        kcg_lit_int32(0);
    }
  }
  outC->_L4_then_else_else_else_IfBlock1 = kcg_lit_int32(0);
  for (idx11 = 0; idx11 < 5; idx11++) {
    outC->_L5_then_else_else_else_IfBlock1[idx11].Message.valid = kcg_true;
    outC->_L5_then_else_else_else_IfBlock1[idx11].Message.nid_message =
      kcg_lit_int32(0);
    outC->_L5_then_else_else_else_IfBlock1[idx11].Message.l_message =
      kcg_lit_int32(0);
    outC->_L5_then_else_else_else_IfBlock1[idx11].Message.t_train =
      kcg_lit_int32(0);
    outC->_L5_then_else_else_else_IfBlock1[idx11].Message.nid_engine =
      kcg_lit_int32(0);
    outC->_L5_then_else_else_else_IfBlock1[idx11].Message.field1 = kcg_lit_int32(0);
    outC->_L5_then_else_else_else_IfBlock1[idx11].Message.field2 = kcg_lit_int32(0);
    outC->_L5_then_else_else_else_IfBlock1[idx11].Message.field3 = kcg_lit_int32(0);
    for (idx10 = 0; idx10 < 50; idx10++) {
      outC->_L5_then_else_else_else_IfBlock1[idx11].OptionalPackets[idx10] =
        kcg_lit_int32(0);
    }
  }
  for (idx13 = 0; idx13 < 100; idx13++) {
    outC->_L6_then_else_else_else_IfBlock1[idx13].Message.valid = kcg_true;
    outC->_L6_then_else_else_else_IfBlock1[idx13].Message.nid_message =
      kcg_lit_int32(0);
    outC->_L6_then_else_else_else_IfBlock1[idx13].Message.l_message =
      kcg_lit_int32(0);
    outC->_L6_then_else_else_else_IfBlock1[idx13].Message.t_train =
      kcg_lit_int32(0);
    outC->_L6_then_else_else_else_IfBlock1[idx13].Message.nid_engine =
      kcg_lit_int32(0);
    outC->_L6_then_else_else_else_IfBlock1[idx13].Message.field1 = kcg_lit_int32(0);
    outC->_L6_then_else_else_else_IfBlock1[idx13].Message.field2 = kcg_lit_int32(0);
    outC->_L6_then_else_else_else_IfBlock1[idx13].Message.field3 = kcg_lit_int32(0);
    for (idx12 = 0; idx12 < 50; idx12++) {
      outC->_L6_then_else_else_else_IfBlock1[idx13].OptionalPackets[idx12] =
        kcg_lit_int32(0);
    }
  }
  outC->_L3_else_else_else_else_IfBlock1.Message.valid = kcg_true;
  outC->_L3_else_else_else_else_IfBlock1.Message.nid_message = kcg_lit_int32(0);
  outC->_L3_else_else_else_else_IfBlock1.Message.l_message = kcg_lit_int32(0);
  outC->_L3_else_else_else_else_IfBlock1.Message.t_train = kcg_lit_int32(0);
  outC->_L3_else_else_else_else_IfBlock1.Message.nid_engine = kcg_lit_int32(0);
  outC->_L3_else_else_else_else_IfBlock1.Message.field1 = kcg_lit_int32(0);
  outC->_L3_else_else_else_else_IfBlock1.Message.field2 = kcg_lit_int32(0);
  outC->_L3_else_else_else_else_IfBlock1.Message.field3 = kcg_lit_int32(0);
  for (idx14 = 0; idx14 < 50; idx14++) {
    outC->_L3_else_else_else_else_IfBlock1.OptionalPackets[idx14] =
      kcg_lit_int32(0);
  }
  outC->_L2_else_else_else_else_IfBlock1 = kcg_lit_int32(0);
  for (idx16 = 0; idx16 < 100; idx16++) {
    outC->_L1_else_else_else_else_IfBlock1[idx16].Message.valid = kcg_true;
    outC->_L1_else_else_else_else_IfBlock1[idx16].Message.nid_message =
      kcg_lit_int32(0);
    outC->_L1_else_else_else_else_IfBlock1[idx16].Message.l_message =
      kcg_lit_int32(0);
    outC->_L1_else_else_else_else_IfBlock1[idx16].Message.t_train =
      kcg_lit_int32(0);
    outC->_L1_else_else_else_else_IfBlock1[idx16].Message.nid_engine =
      kcg_lit_int32(0);
    outC->_L1_else_else_else_else_IfBlock1[idx16].Message.field1 = kcg_lit_int32(0);
    outC->_L1_else_else_else_else_IfBlock1[idx16].Message.field2 = kcg_lit_int32(0);
    outC->_L1_else_else_else_else_IfBlock1[idx16].Message.field3 = kcg_lit_int32(0);
    for (idx15 = 0; idx15 < 50; idx15++) {
      outC->_L1_else_else_else_else_IfBlock1[idx16].OptionalPackets[idx15] =
        kcg_lit_int32(0);
    }
  }
  outC->_L4_else_else_else_else_IfBlock1 = kcg_lit_int32(0);
  for (idx18 = 0; idx18 < 5; idx18++) {
    outC->_L5_else_else_else_else_IfBlock1[idx18].Message.valid = kcg_true;
    outC->_L5_else_else_else_else_IfBlock1[idx18].Message.nid_message =
      kcg_lit_int32(0);
    outC->_L5_else_else_else_else_IfBlock1[idx18].Message.l_message =
      kcg_lit_int32(0);
    outC->_L5_else_else_else_else_IfBlock1[idx18].Message.t_train =
      kcg_lit_int32(0);
    outC->_L5_else_else_else_else_IfBlock1[idx18].Message.nid_engine =
      kcg_lit_int32(0);
    outC->_L5_else_else_else_else_IfBlock1[idx18].Message.field1 = kcg_lit_int32(0);
    outC->_L5_else_else_else_else_IfBlock1[idx18].Message.field2 = kcg_lit_int32(0);
    outC->_L5_else_else_else_else_IfBlock1[idx18].Message.field3 = kcg_lit_int32(0);
    for (idx17 = 0; idx17 < 50; idx17++) {
      outC->_L5_else_else_else_else_IfBlock1[idx18].OptionalPackets[idx17] =
        kcg_lit_int32(0);
    }
  }
  for (idx20 = 0; idx20 < 100; idx20++) {
    outC->_L6_else_else_else_else_IfBlock1[idx20].Message.valid = kcg_true;
    outC->_L6_else_else_else_else_IfBlock1[idx20].Message.nid_message =
      kcg_lit_int32(0);
    outC->_L6_else_else_else_else_IfBlock1[idx20].Message.l_message =
      kcg_lit_int32(0);
    outC->_L6_else_else_else_else_IfBlock1[idx20].Message.t_train =
      kcg_lit_int32(0);
    outC->_L6_else_else_else_else_IfBlock1[idx20].Message.nid_engine =
      kcg_lit_int32(0);
    outC->_L6_else_else_else_else_IfBlock1[idx20].Message.field1 = kcg_lit_int32(0);
    outC->_L6_else_else_else_else_IfBlock1[idx20].Message.field2 = kcg_lit_int32(0);
    outC->_L6_else_else_else_else_IfBlock1[idx20].Message.field3 = kcg_lit_int32(0);
    for (idx19 = 0; idx19 < 50; idx19++) {
      outC->_L6_else_else_else_else_IfBlock1[idx20].OptionalPackets[idx19] =
        kcg_lit_int32(0);
    }
  }
  outC->else_clock_else_else_IfBlock1 = kcg_true;
  for (idx22 = 0; idx22 < 100; idx22++) {
    outC->_L4_then_else_else_IfBlock1[idx22].Message.valid = kcg_true;
    outC->_L4_then_else_else_IfBlock1[idx22].Message.nid_message = kcg_lit_int32(0);
    outC->_L4_then_else_else_IfBlock1[idx22].Message.l_message = kcg_lit_int32(0);
    outC->_L4_then_else_else_IfBlock1[idx22].Message.t_train = kcg_lit_int32(0);
    outC->_L4_then_else_else_IfBlock1[idx22].Message.nid_engine = kcg_lit_int32(0);
    outC->_L4_then_else_else_IfBlock1[idx22].Message.field1 = kcg_lit_int32(0);
    outC->_L4_then_else_else_IfBlock1[idx22].Message.field2 = kcg_lit_int32(0);
    outC->_L4_then_else_else_IfBlock1[idx22].Message.field3 = kcg_lit_int32(0);
    for (idx21 = 0; idx21 < 50; idx21++) {
      outC->_L4_then_else_else_IfBlock1[idx22].OptionalPackets[idx21] =
        kcg_lit_int32(0);
    }
  }
  outC->_L5_then_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L6_then_else_else_IfBlock1.Message.valid = kcg_true;
  outC->_L6_then_else_else_IfBlock1.Message.nid_message = kcg_lit_int32(0);
  outC->_L6_then_else_else_IfBlock1.Message.l_message = kcg_lit_int32(0);
  outC->_L6_then_else_else_IfBlock1.Message.t_train = kcg_lit_int32(0);
  outC->_L6_then_else_else_IfBlock1.Message.nid_engine = kcg_lit_int32(0);
  outC->_L6_then_else_else_IfBlock1.Message.field1 = kcg_lit_int32(0);
  outC->_L6_then_else_else_IfBlock1.Message.field2 = kcg_lit_int32(0);
  outC->_L6_then_else_else_IfBlock1.Message.field3 = kcg_lit_int32(0);
  for (idx23 = 0; idx23 < 50; idx23++) {
    outC->_L6_then_else_else_IfBlock1.OptionalPackets[idx23] = kcg_lit_int32(0);
  }
  for (idx25 = 0; idx25 < 5; idx25++) {
    outC->_L3_then_else_else_IfBlock1[idx25].Message.valid = kcg_true;
    outC->_L3_then_else_else_IfBlock1[idx25].Message.nid_message = kcg_lit_int32(0);
    outC->_L3_then_else_else_IfBlock1[idx25].Message.l_message = kcg_lit_int32(0);
    outC->_L3_then_else_else_IfBlock1[idx25].Message.t_train = kcg_lit_int32(0);
    outC->_L3_then_else_else_IfBlock1[idx25].Message.nid_engine = kcg_lit_int32(0);
    outC->_L3_then_else_else_IfBlock1[idx25].Message.field1 = kcg_lit_int32(0);
    outC->_L3_then_else_else_IfBlock1[idx25].Message.field2 = kcg_lit_int32(0);
    outC->_L3_then_else_else_IfBlock1[idx25].Message.field3 = kcg_lit_int32(0);
    for (idx24 = 0; idx24 < 50; idx24++) {
      outC->_L3_then_else_else_IfBlock1[idx25].OptionalPackets[idx24] =
        kcg_lit_int32(0);
    }
  }
  outC->_L2_then_else_else_IfBlock1 = kcg_lit_int32(0);
  for (idx27 = 0; idx27 < 100; idx27++) {
    outC->_L1_then_else_else_IfBlock1[idx27].Message.valid = kcg_true;
    outC->_L1_then_else_else_IfBlock1[idx27].Message.nid_message = kcg_lit_int32(0);
    outC->_L1_then_else_else_IfBlock1[idx27].Message.l_message = kcg_lit_int32(0);
    outC->_L1_then_else_else_IfBlock1[idx27].Message.t_train = kcg_lit_int32(0);
    outC->_L1_then_else_else_IfBlock1[idx27].Message.nid_engine = kcg_lit_int32(0);
    outC->_L1_then_else_else_IfBlock1[idx27].Message.field1 = kcg_lit_int32(0);
    outC->_L1_then_else_else_IfBlock1[idx27].Message.field2 = kcg_lit_int32(0);
    outC->_L1_then_else_else_IfBlock1[idx27].Message.field3 = kcg_lit_int32(0);
    for (idx26 = 0; idx26 < 50; idx26++) {
      outC->_L1_then_else_else_IfBlock1[idx27].OptionalPackets[idx26] =
        kcg_lit_int32(0);
    }
  }
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L3_then_IfBlock1.Message.valid = kcg_true;
  outC->_L3_then_IfBlock1.Message.nid_message = kcg_lit_int32(0);
  outC->_L3_then_IfBlock1.Message.l_message = kcg_lit_int32(0);
  outC->_L3_then_IfBlock1.Message.t_train = kcg_lit_int32(0);
  outC->_L3_then_IfBlock1.Message.nid_engine = kcg_lit_int32(0);
  outC->_L3_then_IfBlock1.Message.field1 = kcg_lit_int32(0);
  outC->_L3_then_IfBlock1.Message.field2 = kcg_lit_int32(0);
  outC->_L3_then_IfBlock1.Message.field3 = kcg_lit_int32(0);
  for (idx28 = 0; idx28 < 50; idx28++) {
    outC->_L3_then_IfBlock1.OptionalPackets[idx28] = kcg_lit_int32(0);
  }
  outC->_L2_then_IfBlock1 = kcg_lit_int32(0);
  for (idx30 = 0; idx30 < 100; idx30++) {
    outC->_L1_then_IfBlock1[idx30].Message.valid = kcg_true;
    outC->_L1_then_IfBlock1[idx30].Message.nid_message = kcg_lit_int32(0);
    outC->_L1_then_IfBlock1[idx30].Message.l_message = kcg_lit_int32(0);
    outC->_L1_then_IfBlock1[idx30].Message.t_train = kcg_lit_int32(0);
    outC->_L1_then_IfBlock1[idx30].Message.nid_engine = kcg_lit_int32(0);
    outC->_L1_then_IfBlock1[idx30].Message.field1 = kcg_lit_int32(0);
    outC->_L1_then_IfBlock1[idx30].Message.field2 = kcg_lit_int32(0);
    outC->_L1_then_IfBlock1[idx30].Message.field3 = kcg_lit_int32(0);
    for (idx29 = 0; idx29 < 50; idx29++) {
      outC->_L1_then_IfBlock1[idx30].OptionalPackets[idx29] = kcg_lit_int32(0);
    }
  }
  for (idx32 = 0; idx32 < 5; idx32++) {
    outC->_L4_then_IfBlock1[idx32].Message.valid = kcg_true;
    outC->_L4_then_IfBlock1[idx32].Message.nid_message = kcg_lit_int32(0);
    outC->_L4_then_IfBlock1[idx32].Message.l_message = kcg_lit_int32(0);
    outC->_L4_then_IfBlock1[idx32].Message.t_train = kcg_lit_int32(0);
    outC->_L4_then_IfBlock1[idx32].Message.nid_engine = kcg_lit_int32(0);
    outC->_L4_then_IfBlock1[idx32].Message.field1 = kcg_lit_int32(0);
    outC->_L4_then_IfBlock1[idx32].Message.field2 = kcg_lit_int32(0);
    outC->_L4_then_IfBlock1[idx32].Message.field3 = kcg_lit_int32(0);
    for (idx31 = 0; idx31 < 50; idx31++) {
      outC->_L4_then_IfBlock1[idx32].OptionalPackets[idx31] = kcg_lit_int32(0);
    }
  }
  outC->_L5_then_IfBlock1 = kcg_lit_int32(0);
  for (idx34 = 0; idx34 < 100; idx34++) {
    outC->_L6_then_IfBlock1[idx34].Message.valid = kcg_true;
    outC->_L6_then_IfBlock1[idx34].Message.nid_message = kcg_lit_int32(0);
    outC->_L6_then_IfBlock1[idx34].Message.l_message = kcg_lit_int32(0);
    outC->_L6_then_IfBlock1[idx34].Message.t_train = kcg_lit_int32(0);
    outC->_L6_then_IfBlock1[idx34].Message.nid_engine = kcg_lit_int32(0);
    outC->_L6_then_IfBlock1[idx34].Message.field1 = kcg_lit_int32(0);
    outC->_L6_then_IfBlock1[idx34].Message.field2 = kcg_lit_int32(0);
    outC->_L6_then_IfBlock1[idx34].Message.field3 = kcg_lit_int32(0);
    for (idx33 = 0; idx33 < 50; idx33++) {
      outC->_L6_then_IfBlock1[idx34].OptionalPackets[idx33] = kcg_lit_int32(0);
    }
  }
  outC->Message_out.Message.valid = kcg_true;
  outC->Message_out.Message.nid_message = kcg_lit_int32(0);
  outC->Message_out.Message.l_message = kcg_lit_int32(0);
  outC->Message_out.Message.t_train = kcg_lit_int32(0);
  outC->Message_out.Message.nid_engine = kcg_lit_int32(0);
  outC->Message_out.Message.field1 = kcg_lit_int32(0);
  outC->Message_out.Message.field2 = kcg_lit_int32(0);
  outC->Message_out.Message.field3 = kcg_lit_int32(0);
  for (idx35 = 0; idx35 < 50; idx35++) {
    outC->Message_out.OptionalPackets[idx35] = kcg_lit_int32(0);
  }
  outC->Stacksize_new = kcg_lit_int32(0);
  for (idx37 = 0; idx37 < 100; idx37++) {
    outC->Buffer_Out[idx37].Message.valid = kcg_true;
    outC->Buffer_Out[idx37].Message.nid_message = kcg_lit_int32(0);
    outC->Buffer_Out[idx37].Message.l_message = kcg_lit_int32(0);
    outC->Buffer_Out[idx37].Message.t_train = kcg_lit_int32(0);
    outC->Buffer_Out[idx37].Message.nid_engine = kcg_lit_int32(0);
    outC->Buffer_Out[idx37].Message.field1 = kcg_lit_int32(0);
    outC->Buffer_Out[idx37].Message.field2 = kcg_lit_int32(0);
    outC->Buffer_Out[idx37].Message.field3 = kcg_lit_int32(0);
    for (idx36 = 0; idx36 < 50; idx36++) {
      outC->Buffer_Out[idx37].OptionalPackets[idx36] = kcg_lit_int32(0);
    }
  }
  /* IfBlock1:then:_L1=(TM_lib_internal::BufferOutput_write_only1#1)/ */
  BufferOutput_write_only1_init_TM_lib_internal(
    &outC->Context_BufferOutput_write_only1_1);
  /* IfBlock1:else:then:_L7=(TM_lib_internal::BufferOutput_write_only2#1)/ */
  BufferOutput_write_only2_init_TM_lib_internal(
    &outC->Context_BufferOutput_write_only2_1);
  /* IfBlock1:else:else:then:_L4=(TM_lib_internal::BufferOutput_write_only3#1)/ */
  BufferOutput_write_only3_init_TM_lib_internal(
    &outC->Context_BufferOutput_write_only3_1);
  /* IfBlock1:else:else:else:then:_L1=(TM_lib_internal::BufferOutput_write_only4#1)/ */
  BufferOutput_write_only4_init_TM_lib_internal(
    &outC->Context_BufferOutput_write_only4_1);
  /* IfBlock1:else:else:else:else:_L1=(TM_lib_internal::BufferOutput_write_only5#1)/ */
  BufferOutput_write_only5_init_TM_lib_internal(
    &outC->Context_BufferOutput_write_only5_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void BufferOutput_write_only_reset_TM_lib_internal(
  outC_BufferOutput_write_only_TM_lib_internal *outC)
{
  /* IfBlock1:then:_L1=(TM_lib_internal::BufferOutput_write_only1#1)/ */
  BufferOutput_write_only1_reset_TM_lib_internal(
    &outC->Context_BufferOutput_write_only1_1);
  /* IfBlock1:else:then:_L7=(TM_lib_internal::BufferOutput_write_only2#1)/ */
  BufferOutput_write_only2_reset_TM_lib_internal(
    &outC->Context_BufferOutput_write_only2_1);
  /* IfBlock1:else:else:then:_L4=(TM_lib_internal::BufferOutput_write_only3#1)/ */
  BufferOutput_write_only3_reset_TM_lib_internal(
    &outC->Context_BufferOutput_write_only3_1);
  /* IfBlock1:else:else:else:then:_L1=(TM_lib_internal::BufferOutput_write_only4#1)/ */
  BufferOutput_write_only4_reset_TM_lib_internal(
    &outC->Context_BufferOutput_write_only4_1);
  /* IfBlock1:else:else:else:else:_L1=(TM_lib_internal::BufferOutput_write_only5#1)/ */
  BufferOutput_write_only5_reset_TM_lib_internal(
    &outC->Context_BufferOutput_write_only5_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** BufferOutput_write_only_TM_lib_internal.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

