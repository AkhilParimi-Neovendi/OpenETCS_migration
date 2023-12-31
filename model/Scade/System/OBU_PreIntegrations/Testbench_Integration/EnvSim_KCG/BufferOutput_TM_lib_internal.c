/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BufferOutput_TM_lib_internal.h"

/* TM_lib_internal::BufferOutput/ */
void BufferOutput_TM_lib_internal(
  /* In/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *In,
  /* Write/ */
  kcg_bool Write,
  outC_BufferOutput_TM_lib_internal *outC)
{
  /* Out/ */
  static M_TrainTrack_Message_T_TM_radio_messages Out_partial;
  /* buffer/ */
  static M_TrainTrackRadioOutputBuffer_t_TM_lib_internal buffer_partial;
  /* stacksize/ */
  static kcg_int32 stacksize_partial;
  /* Out/ */
  static M_TrainTrack_Message_T_TM_radio_messages _1_Out_partial;
  /* buffer/ */
  static M_TrainTrackRadioOutputBuffer_t_TM_lib_internal _2_buffer_partial;
  /* stacksize/ */
  static kcg_int32 _3_stacksize_partial;
  /* Out/ */
  static M_TrainTrack_Message_T_TM_radio_messages _4_Out_partial;
  /* buffer/ */
  static M_TrainTrackRadioOutputBuffer_t_TM_lib_internal _5_buffer_partial;
  /* stacksize/ */
  static kcg_int32 _6_stacksize_partial;
  /* Out/ */
  static M_TrainTrack_Message_T_TM_radio_messages _7_Out_partial;
  /* buffer/ */
  static M_TrainTrackRadioOutputBuffer_t_TM_lib_internal _8_buffer_partial;
  /* stacksize/ */
  static kcg_int32 _9_stacksize_partial;
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus noname;
  /* stacksize/ */
  static kcg_int32 _10_stacksize_partial;
  /* buffer/ */
  static M_TrainTrackRadioOutputBuffer_t_TM_lib_internal _11_buffer_partial;
  /* Out/ */
  static M_TrainTrack_Message_T_TM_radio_messages _12_Out_partial;
  /* stacksize/ */
  static kcg_int32 _13_stacksize_partial;
  /* buffer/ */
  static M_TrainTrackRadioOutputBuffer_t_TM_lib_internal _14_buffer_partial;
  /* Out/ */
  static M_TrainTrack_Message_T_TM_radio_messages _15_Out_partial;
  static kcg_bool _16_noname;
  /* stacksize/ */
  static kcg_int32 last_stacksize;
  /* buffer/ */
  static M_TrainTrackRadioOutputBuffer_t_TM_lib_internal last_buffer;

  last_stacksize = outC->stacksize;
  kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
    &last_buffer,
    &outC->buffer);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&outC->_L1, In);
  /* _L7=(TM_TrainTrack_Bus::CheckSpace#2)/ */
  CheckSpace_TM_TrainTrack_Bus(&outC->_L1, &outC->Context_CheckSpace_2);
  outC->_L7 = outC->Context_CheckSpace_2.Busy;
  outC->_L18 = outC->Context_CheckSpace_2.SlotsUsed;
  outC->bussize = outC->_L18;
  outC->_L20 = kcg_lit_int32(0);
  outC->_L19 = outC->_L18 > outC->_L20;
  _16_noname = outC->_L7;
  outC->_L2 = Write;
  outC->_L10 = !outC->_L19;
  outC->_L11 = outC->_L10 & outC->_L2;
  outC->c_r = outC->_L11;
  outC->_L13 = !outC->_L2;
  outC->_L14 = outC->_L13 & outC->_L19;
  outC->c_w = outC->_L14;
  outC->_L8 = outC->_L2 & outC->_L19;
  outC->c_rw = outC->_L8;
  outC->IfBlock1_clock = outC->c_r == kcg_true;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
      &outC->_L2_then_IfBlock1,
      &last_buffer);
    outC->_L4_then_IfBlock1 = last_stacksize;
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->_L5_then_IfBlock1,
      In);
    /* IfBlock1:then:_L8=(TM_lib_internal::BufferOutput_read_only#1)/ */
    BufferOutput_read_only_TM_lib_internal(
      &outC->_L2_then_IfBlock1,
      outC->_L4_then_IfBlock1,
      &outC->_L5_then_IfBlock1,
      &outC->Context_BufferOutput_read_only_1);
    kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
      &outC->_L8_then_IfBlock1,
      &outC->Context_BufferOutput_read_only_1.Buffer_Out);
    outC->_L7_then_IfBlock1 = outC->Context_BufferOutput_read_only_1.Stacksize_new;
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &outC->_L6_then_IfBlock1,
      &outC->Context_BufferOutput_read_only_1.Message_out);
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &Out_partial,
      &outC->_L6_then_IfBlock1);
    stacksize_partial = outC->_L7_then_IfBlock1;
    kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
      &buffer_partial,
      &outC->_L8_then_IfBlock1);
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&outC->Out, &Out_partial);
    kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
      &outC->buffer,
      &buffer_partial);
    outC->stacksize = stacksize_partial;
  }
  else {
    outC->else_clock_IfBlock1 = outC->c_rw == kcg_true;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L8_then_else_IfBlock1 = outC->bussize;
      kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
        &outC->_L1_then_else_IfBlock1,
        &last_buffer);
      outC->_L3_then_else_IfBlock1 = last_stacksize;
      kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
        &outC->_L4_then_else_IfBlock1,
        In);
      /* IfBlock1:else:then:_L7=(TM_lib_internal::BufferOutput_read_write#1)/ */
      BufferOutput_read_write_TM_lib_internal(
        &outC->_L1_then_else_IfBlock1,
        outC->_L3_then_else_IfBlock1,
        &outC->_L4_then_else_IfBlock1,
        outC->_L8_then_else_IfBlock1,
        &outC->Context_BufferOutput_read_write_1);
      kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
        &outC->_L7_then_else_IfBlock1,
        &outC->Context_BufferOutput_read_write_1.Buffer_Out);
      outC->_L6_then_else_IfBlock1 =
        outC->Context_BufferOutput_read_write_1.Stacksize_new;
      kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
        &outC->_L5_then_else_IfBlock1,
        &outC->Context_BufferOutput_read_write_1.Message_out);
      kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
        &_15_Out_partial,
        &outC->_L5_then_else_IfBlock1);
      _13_stacksize_partial = outC->_L6_then_else_IfBlock1;
      kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
        &_14_buffer_partial,
        &outC->_L7_then_else_IfBlock1);
      kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
        &_1_Out_partial,
        &_15_Out_partial);
      kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
        &_2_buffer_partial,
        &_14_buffer_partial);
      _3_stacksize_partial = _13_stacksize_partial;
    }
    else {
      outC->else_clock_else_IfBlock1 = outC->c_w == kcg_true;
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L8_then_else_else_IfBlock1 = outC->bussize;
        kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
          &outC->_L1_then_else_else_IfBlock1,
          &last_buffer);
        outC->_L3_then_else_else_IfBlock1 = last_stacksize;
        kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
          &outC->_L4_then_else_else_IfBlock1,
          In);
        /* IfBlock1:else:else:then:_L7=(TM_lib_internal::BufferOutput_write_only#1)/ */
        BufferOutput_write_only_TM_lib_internal(
          &outC->_L1_then_else_else_IfBlock1,
          outC->_L3_then_else_else_IfBlock1,
          &outC->_L4_then_else_else_IfBlock1,
          outC->_L8_then_else_else_IfBlock1,
          &outC->Context_BufferOutput_write_only_1);
        kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
          &outC->_L7_then_else_else_IfBlock1,
          &outC->Context_BufferOutput_write_only_1.Buffer_Out);
        outC->_L6_then_else_else_IfBlock1 =
          outC->Context_BufferOutput_write_only_1.Stacksize_new;
        kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
          &outC->_L5_then_else_else_IfBlock1,
          &outC->Context_BufferOutput_write_only_1.Message_out);
        kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
          &_4_Out_partial,
          &outC->_L5_then_else_else_IfBlock1);
        _6_stacksize_partial = outC->_L6_then_else_else_IfBlock1;
        kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
          &_5_buffer_partial,
          &outC->_L7_then_else_else_IfBlock1);
        kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
          &_12_Out_partial,
          &_4_Out_partial);
        kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
          &_11_buffer_partial,
          &_5_buffer_partial);
        _10_stacksize_partial = _6_stacksize_partial;
      }
      else {
        kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
          &outC->_L6_else_else_else_IfBlock1,
          (M_TrainTrack_Message_T_TM_radio_messages *)
            &EMPTY_TrainTrackMessage_TM_lib_internal);
        kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
          &outC->_L5_else_else_else_IfBlock1,
          In);
        kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
          &noname,
          &outC->_L5_else_else_else_IfBlock1);
        kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
          &_7_Out_partial,
          &outC->_L6_else_else_else_IfBlock1);
        outC->_L4_else_else_else_IfBlock1 = last_stacksize;
        _9_stacksize_partial = outC->_L4_else_else_else_IfBlock1;
        kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
          &outC->_L1_else_else_else_IfBlock1,
          &last_buffer);
        kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
          &_8_buffer_partial,
          &outC->_L1_else_else_else_IfBlock1);
        kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
          &_12_Out_partial,
          &_7_Out_partial);
        kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
          &_11_buffer_partial,
          &_8_buffer_partial);
        _10_stacksize_partial = _9_stacksize_partial;
      }
      kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
        &_1_Out_partial,
        &_12_Out_partial);
      kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
        &_2_buffer_partial,
        &_11_buffer_partial);
      _3_stacksize_partial = _10_stacksize_partial;
    }
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&outC->Out, &_1_Out_partial);
    kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
      &outC->buffer,
      &_2_buffer_partial);
    outC->stacksize = _3_stacksize_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void BufferOutput_init_TM_lib_internal(outC_BufferOutput_TM_lib_internal *outC)
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

  outC->_L20 = kcg_lit_int32(0);
  outC->_L19 = kcg_true;
  outC->_L18 = kcg_lit_int32(0);
  outC->_L14 = kcg_true;
  outC->_L13 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L2 = kcg_true;
  for (idx1 = 0; idx1 < 5; idx1++) {
    outC->_L1[idx1].Message.valid = kcg_true;
    outC->_L1[idx1].Message.nid_message = kcg_lit_int32(0);
    outC->_L1[idx1].Message.l_message = kcg_lit_int32(0);
    outC->_L1[idx1].Message.t_train = kcg_lit_int32(0);
    outC->_L1[idx1].Message.nid_engine = kcg_lit_int32(0);
    outC->_L1[idx1].Message.field1 = kcg_lit_int32(0);
    outC->_L1[idx1].Message.field2 = kcg_lit_int32(0);
    outC->_L1[idx1].Message.field3 = kcg_lit_int32(0);
    for (idx = 0; idx < 50; idx++) {
      outC->_L1[idx1].OptionalPackets[idx] = kcg_lit_int32(0);
    }
  }
  outC->bussize = kcg_lit_int32(0);
  outC->c_rw = kcg_true;
  outC->c_w = kcg_true;
  outC->c_r = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L8_then_else_IfBlock1 = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 100; idx3++) {
    outC->_L7_then_else_IfBlock1[idx3].Message.valid = kcg_true;
    outC->_L7_then_else_IfBlock1[idx3].Message.nid_message = kcg_lit_int32(0);
    outC->_L7_then_else_IfBlock1[idx3].Message.l_message = kcg_lit_int32(0);
    outC->_L7_then_else_IfBlock1[idx3].Message.t_train = kcg_lit_int32(0);
    outC->_L7_then_else_IfBlock1[idx3].Message.nid_engine = kcg_lit_int32(0);
    outC->_L7_then_else_IfBlock1[idx3].Message.field1 = kcg_lit_int32(0);
    outC->_L7_then_else_IfBlock1[idx3].Message.field2 = kcg_lit_int32(0);
    outC->_L7_then_else_IfBlock1[idx3].Message.field3 = kcg_lit_int32(0);
    for (idx2 = 0; idx2 < 50; idx2++) {
      outC->_L7_then_else_IfBlock1[idx3].OptionalPackets[idx2] = kcg_lit_int32(0);
    }
  }
  outC->_L6_then_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L5_then_else_IfBlock1.Message.valid = kcg_true;
  outC->_L5_then_else_IfBlock1.Message.nid_message = kcg_lit_int32(0);
  outC->_L5_then_else_IfBlock1.Message.l_message = kcg_lit_int32(0);
  outC->_L5_then_else_IfBlock1.Message.t_train = kcg_lit_int32(0);
  outC->_L5_then_else_IfBlock1.Message.nid_engine = kcg_lit_int32(0);
  outC->_L5_then_else_IfBlock1.Message.field1 = kcg_lit_int32(0);
  outC->_L5_then_else_IfBlock1.Message.field2 = kcg_lit_int32(0);
  outC->_L5_then_else_IfBlock1.Message.field3 = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 50; idx4++) {
    outC->_L5_then_else_IfBlock1.OptionalPackets[idx4] = kcg_lit_int32(0);
  }
  for (idx6 = 0; idx6 < 5; idx6++) {
    outC->_L4_then_else_IfBlock1[idx6].Message.valid = kcg_true;
    outC->_L4_then_else_IfBlock1[idx6].Message.nid_message = kcg_lit_int32(0);
    outC->_L4_then_else_IfBlock1[idx6].Message.l_message = kcg_lit_int32(0);
    outC->_L4_then_else_IfBlock1[idx6].Message.t_train = kcg_lit_int32(0);
    outC->_L4_then_else_IfBlock1[idx6].Message.nid_engine = kcg_lit_int32(0);
    outC->_L4_then_else_IfBlock1[idx6].Message.field1 = kcg_lit_int32(0);
    outC->_L4_then_else_IfBlock1[idx6].Message.field2 = kcg_lit_int32(0);
    outC->_L4_then_else_IfBlock1[idx6].Message.field3 = kcg_lit_int32(0);
    for (idx5 = 0; idx5 < 50; idx5++) {
      outC->_L4_then_else_IfBlock1[idx6].OptionalPackets[idx5] = kcg_lit_int32(0);
    }
  }
  outC->_L3_then_else_IfBlock1 = kcg_lit_int32(0);
  for (idx8 = 0; idx8 < 100; idx8++) {
    outC->_L1_then_else_IfBlock1[idx8].Message.valid = kcg_true;
    outC->_L1_then_else_IfBlock1[idx8].Message.nid_message = kcg_lit_int32(0);
    outC->_L1_then_else_IfBlock1[idx8].Message.l_message = kcg_lit_int32(0);
    outC->_L1_then_else_IfBlock1[idx8].Message.t_train = kcg_lit_int32(0);
    outC->_L1_then_else_IfBlock1[idx8].Message.nid_engine = kcg_lit_int32(0);
    outC->_L1_then_else_IfBlock1[idx8].Message.field1 = kcg_lit_int32(0);
    outC->_L1_then_else_IfBlock1[idx8].Message.field2 = kcg_lit_int32(0);
    outC->_L1_then_else_IfBlock1[idx8].Message.field3 = kcg_lit_int32(0);
    for (idx7 = 0; idx7 < 50; idx7++) {
      outC->_L1_then_else_IfBlock1[idx8].OptionalPackets[idx7] = kcg_lit_int32(0);
    }
  }
  outC->else_clock_else_IfBlock1 = kcg_true;
  for (idx10 = 0; idx10 < 100; idx10++) {
    outC->_L1_else_else_else_IfBlock1[idx10].Message.valid = kcg_true;
    outC->_L1_else_else_else_IfBlock1[idx10].Message.nid_message = kcg_lit_int32(0);
    outC->_L1_else_else_else_IfBlock1[idx10].Message.l_message = kcg_lit_int32(0);
    outC->_L1_else_else_else_IfBlock1[idx10].Message.t_train = kcg_lit_int32(0);
    outC->_L1_else_else_else_IfBlock1[idx10].Message.nid_engine = kcg_lit_int32(0);
    outC->_L1_else_else_else_IfBlock1[idx10].Message.field1 = kcg_lit_int32(0);
    outC->_L1_else_else_else_IfBlock1[idx10].Message.field2 = kcg_lit_int32(0);
    outC->_L1_else_else_else_IfBlock1[idx10].Message.field3 = kcg_lit_int32(0);
    for (idx9 = 0; idx9 < 50; idx9++) {
      outC->_L1_else_else_else_IfBlock1[idx10].OptionalPackets[idx9] =
        kcg_lit_int32(0);
    }
  }
  outC->_L4_else_else_else_IfBlock1 = kcg_lit_int32(0);
  for (idx12 = 0; idx12 < 5; idx12++) {
    outC->_L5_else_else_else_IfBlock1[idx12].Message.valid = kcg_true;
    outC->_L5_else_else_else_IfBlock1[idx12].Message.nid_message = kcg_lit_int32(0);
    outC->_L5_else_else_else_IfBlock1[idx12].Message.l_message = kcg_lit_int32(0);
    outC->_L5_else_else_else_IfBlock1[idx12].Message.t_train = kcg_lit_int32(0);
    outC->_L5_else_else_else_IfBlock1[idx12].Message.nid_engine = kcg_lit_int32(0);
    outC->_L5_else_else_else_IfBlock1[idx12].Message.field1 = kcg_lit_int32(0);
    outC->_L5_else_else_else_IfBlock1[idx12].Message.field2 = kcg_lit_int32(0);
    outC->_L5_else_else_else_IfBlock1[idx12].Message.field3 = kcg_lit_int32(0);
    for (idx11 = 0; idx11 < 50; idx11++) {
      outC->_L5_else_else_else_IfBlock1[idx12].OptionalPackets[idx11] =
        kcg_lit_int32(0);
    }
  }
  outC->_L6_else_else_else_IfBlock1.Message.valid = kcg_true;
  outC->_L6_else_else_else_IfBlock1.Message.nid_message = kcg_lit_int32(0);
  outC->_L6_else_else_else_IfBlock1.Message.l_message = kcg_lit_int32(0);
  outC->_L6_else_else_else_IfBlock1.Message.t_train = kcg_lit_int32(0);
  outC->_L6_else_else_else_IfBlock1.Message.nid_engine = kcg_lit_int32(0);
  outC->_L6_else_else_else_IfBlock1.Message.field1 = kcg_lit_int32(0);
  outC->_L6_else_else_else_IfBlock1.Message.field2 = kcg_lit_int32(0);
  outC->_L6_else_else_else_IfBlock1.Message.field3 = kcg_lit_int32(0);
  for (idx13 = 0; idx13 < 50; idx13++) {
    outC->_L6_else_else_else_IfBlock1.OptionalPackets[idx13] = kcg_lit_int32(0);
  }
  for (idx15 = 0; idx15 < 100; idx15++) {
    outC->_L1_then_else_else_IfBlock1[idx15].Message.valid = kcg_true;
    outC->_L1_then_else_else_IfBlock1[idx15].Message.nid_message = kcg_lit_int32(0);
    outC->_L1_then_else_else_IfBlock1[idx15].Message.l_message = kcg_lit_int32(0);
    outC->_L1_then_else_else_IfBlock1[idx15].Message.t_train = kcg_lit_int32(0);
    outC->_L1_then_else_else_IfBlock1[idx15].Message.nid_engine = kcg_lit_int32(0);
    outC->_L1_then_else_else_IfBlock1[idx15].Message.field1 = kcg_lit_int32(0);
    outC->_L1_then_else_else_IfBlock1[idx15].Message.field2 = kcg_lit_int32(0);
    outC->_L1_then_else_else_IfBlock1[idx15].Message.field3 = kcg_lit_int32(0);
    for (idx14 = 0; idx14 < 50; idx14++) {
      outC->_L1_then_else_else_IfBlock1[idx15].OptionalPackets[idx14] =
        kcg_lit_int32(0);
    }
  }
  outC->_L3_then_else_else_IfBlock1 = kcg_lit_int32(0);
  for (idx17 = 0; idx17 < 5; idx17++) {
    outC->_L4_then_else_else_IfBlock1[idx17].Message.valid = kcg_true;
    outC->_L4_then_else_else_IfBlock1[idx17].Message.nid_message = kcg_lit_int32(0);
    outC->_L4_then_else_else_IfBlock1[idx17].Message.l_message = kcg_lit_int32(0);
    outC->_L4_then_else_else_IfBlock1[idx17].Message.t_train = kcg_lit_int32(0);
    outC->_L4_then_else_else_IfBlock1[idx17].Message.nid_engine = kcg_lit_int32(0);
    outC->_L4_then_else_else_IfBlock1[idx17].Message.field1 = kcg_lit_int32(0);
    outC->_L4_then_else_else_IfBlock1[idx17].Message.field2 = kcg_lit_int32(0);
    outC->_L4_then_else_else_IfBlock1[idx17].Message.field3 = kcg_lit_int32(0);
    for (idx16 = 0; idx16 < 50; idx16++) {
      outC->_L4_then_else_else_IfBlock1[idx17].OptionalPackets[idx16] =
        kcg_lit_int32(0);
    }
  }
  outC->_L5_then_else_else_IfBlock1.Message.valid = kcg_true;
  outC->_L5_then_else_else_IfBlock1.Message.nid_message = kcg_lit_int32(0);
  outC->_L5_then_else_else_IfBlock1.Message.l_message = kcg_lit_int32(0);
  outC->_L5_then_else_else_IfBlock1.Message.t_train = kcg_lit_int32(0);
  outC->_L5_then_else_else_IfBlock1.Message.nid_engine = kcg_lit_int32(0);
  outC->_L5_then_else_else_IfBlock1.Message.field1 = kcg_lit_int32(0);
  outC->_L5_then_else_else_IfBlock1.Message.field2 = kcg_lit_int32(0);
  outC->_L5_then_else_else_IfBlock1.Message.field3 = kcg_lit_int32(0);
  for (idx18 = 0; idx18 < 50; idx18++) {
    outC->_L5_then_else_else_IfBlock1.OptionalPackets[idx18] = kcg_lit_int32(0);
  }
  outC->_L6_then_else_else_IfBlock1 = kcg_lit_int32(0);
  for (idx20 = 0; idx20 < 100; idx20++) {
    outC->_L7_then_else_else_IfBlock1[idx20].Message.valid = kcg_true;
    outC->_L7_then_else_else_IfBlock1[idx20].Message.nid_message = kcg_lit_int32(0);
    outC->_L7_then_else_else_IfBlock1[idx20].Message.l_message = kcg_lit_int32(0);
    outC->_L7_then_else_else_IfBlock1[idx20].Message.t_train = kcg_lit_int32(0);
    outC->_L7_then_else_else_IfBlock1[idx20].Message.nid_engine = kcg_lit_int32(0);
    outC->_L7_then_else_else_IfBlock1[idx20].Message.field1 = kcg_lit_int32(0);
    outC->_L7_then_else_else_IfBlock1[idx20].Message.field2 = kcg_lit_int32(0);
    outC->_L7_then_else_else_IfBlock1[idx20].Message.field3 = kcg_lit_int32(0);
    for (idx19 = 0; idx19 < 50; idx19++) {
      outC->_L7_then_else_else_IfBlock1[idx20].OptionalPackets[idx19] =
        kcg_lit_int32(0);
    }
  }
  outC->_L8_then_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->else_clock_IfBlock1 = kcg_true;
  for (idx22 = 0; idx22 < 100; idx22++) {
    outC->_L2_then_IfBlock1[idx22].Message.valid = kcg_true;
    outC->_L2_then_IfBlock1[idx22].Message.nid_message = kcg_lit_int32(0);
    outC->_L2_then_IfBlock1[idx22].Message.l_message = kcg_lit_int32(0);
    outC->_L2_then_IfBlock1[idx22].Message.t_train = kcg_lit_int32(0);
    outC->_L2_then_IfBlock1[idx22].Message.nid_engine = kcg_lit_int32(0);
    outC->_L2_then_IfBlock1[idx22].Message.field1 = kcg_lit_int32(0);
    outC->_L2_then_IfBlock1[idx22].Message.field2 = kcg_lit_int32(0);
    outC->_L2_then_IfBlock1[idx22].Message.field3 = kcg_lit_int32(0);
    for (idx21 = 0; idx21 < 50; idx21++) {
      outC->_L2_then_IfBlock1[idx22].OptionalPackets[idx21] = kcg_lit_int32(0);
    }
  }
  outC->_L4_then_IfBlock1 = kcg_lit_int32(0);
  for (idx24 = 0; idx24 < 5; idx24++) {
    outC->_L5_then_IfBlock1[idx24].Message.valid = kcg_true;
    outC->_L5_then_IfBlock1[idx24].Message.nid_message = kcg_lit_int32(0);
    outC->_L5_then_IfBlock1[idx24].Message.l_message = kcg_lit_int32(0);
    outC->_L5_then_IfBlock1[idx24].Message.t_train = kcg_lit_int32(0);
    outC->_L5_then_IfBlock1[idx24].Message.nid_engine = kcg_lit_int32(0);
    outC->_L5_then_IfBlock1[idx24].Message.field1 = kcg_lit_int32(0);
    outC->_L5_then_IfBlock1[idx24].Message.field2 = kcg_lit_int32(0);
    outC->_L5_then_IfBlock1[idx24].Message.field3 = kcg_lit_int32(0);
    for (idx23 = 0; idx23 < 50; idx23++) {
      outC->_L5_then_IfBlock1[idx24].OptionalPackets[idx23] = kcg_lit_int32(0);
    }
  }
  outC->_L6_then_IfBlock1.Message.valid = kcg_true;
  outC->_L6_then_IfBlock1.Message.nid_message = kcg_lit_int32(0);
  outC->_L6_then_IfBlock1.Message.l_message = kcg_lit_int32(0);
  outC->_L6_then_IfBlock1.Message.t_train = kcg_lit_int32(0);
  outC->_L6_then_IfBlock1.Message.nid_engine = kcg_lit_int32(0);
  outC->_L6_then_IfBlock1.Message.field1 = kcg_lit_int32(0);
  outC->_L6_then_IfBlock1.Message.field2 = kcg_lit_int32(0);
  outC->_L6_then_IfBlock1.Message.field3 = kcg_lit_int32(0);
  for (idx25 = 0; idx25 < 50; idx25++) {
    outC->_L6_then_IfBlock1.OptionalPackets[idx25] = kcg_lit_int32(0);
  }
  outC->_L7_then_IfBlock1 = kcg_lit_int32(0);
  for (idx27 = 0; idx27 < 100; idx27++) {
    outC->_L8_then_IfBlock1[idx27].Message.valid = kcg_true;
    outC->_L8_then_IfBlock1[idx27].Message.nid_message = kcg_lit_int32(0);
    outC->_L8_then_IfBlock1[idx27].Message.l_message = kcg_lit_int32(0);
    outC->_L8_then_IfBlock1[idx27].Message.t_train = kcg_lit_int32(0);
    outC->_L8_then_IfBlock1[idx27].Message.nid_engine = kcg_lit_int32(0);
    outC->_L8_then_IfBlock1[idx27].Message.field1 = kcg_lit_int32(0);
    outC->_L8_then_IfBlock1[idx27].Message.field2 = kcg_lit_int32(0);
    outC->_L8_then_IfBlock1[idx27].Message.field3 = kcg_lit_int32(0);
    for (idx26 = 0; idx26 < 50; idx26++) {
      outC->_L8_then_IfBlock1[idx27].OptionalPackets[idx26] = kcg_lit_int32(0);
    }
  }
  outC->Out.Message.valid = kcg_true;
  outC->Out.Message.nid_message = kcg_lit_int32(0);
  outC->Out.Message.l_message = kcg_lit_int32(0);
  outC->Out.Message.t_train = kcg_lit_int32(0);
  outC->Out.Message.nid_engine = kcg_lit_int32(0);
  outC->Out.Message.field1 = kcg_lit_int32(0);
  outC->Out.Message.field2 = kcg_lit_int32(0);
  outC->Out.Message.field3 = kcg_lit_int32(0);
  for (idx28 = 0; idx28 < 50; idx28++) {
    outC->Out.OptionalPackets[idx28] = kcg_lit_int32(0);
  }
  /* IfBlock1:then:_L8=(TM_lib_internal::BufferOutput_read_only#1)/ */
  BufferOutput_read_only_init_TM_lib_internal(
    &outC->Context_BufferOutput_read_only_1);
  /* IfBlock1:else:then:_L7=(TM_lib_internal::BufferOutput_read_write#1)/ */
  BufferOutput_read_write_init_TM_lib_internal(
    &outC->Context_BufferOutput_read_write_1);
  /* IfBlock1:else:else:then:_L7=(TM_lib_internal::BufferOutput_write_only#1)/ */
  BufferOutput_write_only_init_TM_lib_internal(
    &outC->Context_BufferOutput_write_only_1);
  /* _L7=(TM_TrainTrack_Bus::CheckSpace#2)/ */
  CheckSpace_init_TM_TrainTrack_Bus(&outC->Context_CheckSpace_2);
  kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
    &outC->buffer,
    (M_TrainTrackRadioOutputBuffer_t_TM_lib_internal *)
      &DEFAULT_output_buffer_TM_lib_internal);
  outC->stacksize = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void BufferOutput_reset_TM_lib_internal(outC_BufferOutput_TM_lib_internal *outC)
{
  /* IfBlock1:then:_L8=(TM_lib_internal::BufferOutput_read_only#1)/ */
  BufferOutput_read_only_reset_TM_lib_internal(
    &outC->Context_BufferOutput_read_only_1);
  /* IfBlock1:else:then:_L7=(TM_lib_internal::BufferOutput_read_write#1)/ */
  BufferOutput_read_write_reset_TM_lib_internal(
    &outC->Context_BufferOutput_read_write_1);
  /* IfBlock1:else:else:then:_L7=(TM_lib_internal::BufferOutput_write_only#1)/ */
  BufferOutput_write_only_reset_TM_lib_internal(
    &outC->Context_BufferOutput_write_only_1);
  /* _L7=(TM_TrainTrack_Bus::CheckSpace#2)/ */
  CheckSpace_reset_TM_TrainTrack_Bus(&outC->Context_CheckSpace_2);
  kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
    &outC->buffer,
    (M_TrainTrackRadioOutputBuffer_t_TM_lib_internal *)
      &DEFAULT_output_buffer_TM_lib_internal);
  outC->stacksize = kcg_lit_int32(0);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** BufferOutput_TM_lib_internal.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

