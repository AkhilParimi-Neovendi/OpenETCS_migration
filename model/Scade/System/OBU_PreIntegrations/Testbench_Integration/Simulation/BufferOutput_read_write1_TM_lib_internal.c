/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BufferOutput_read_write1_TM_lib_internal.h"

/* TM_lib_internal::BufferOutput_read_write1/ */
void BufferOutput_read_write1_TM_lib_internal(
  /* Buffer_In/ */
  M_TrainTrackRadioOutputBuffer_t_TM_lib_internal *Buffer_In,
  /* Stacksize_old/ */
  kcg_int64 Stacksize_old,
  /* Message_In/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *Message_In,
  outC_BufferOutput_read_write1_TM_lib_internal *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&outC->_L23, Message_In);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&outC->_L29, &outC->_L23[0]);
  /* _L37/ */
  for (idx = 0; idx < 1; idx++) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &outC->_L37[idx],
      &outC->_L29);
  }
  outC->_L36 = kcg_lit_int64(0);
  outC->_L34 = Stacksize_old;
  outC->_L35 = outC->_L34 == outC->_L36;
  outC->_L28 = kcg_lit_int64(1);
  outC->_L15 = Stacksize_old;
  outC->_L27 = outC->_L15 - outC->_L28;
  outC->index = outC->_L27;
  outC->_L14 = outC->index;
  kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
    &outC->_L12,
    Buffer_In);
  if ((kcg_lit_int64(0) <= outC->_L14) & (outC->_L14 < kcg_lit_int64(100))) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &outC->_L21,
      &outC->_L12[outC->_L14]);
  }
  else {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &outC->_L21,
      (M_TrainTrack_Message_T_TM_radio_messages *)
        &EMPTY_TrainTrackMessage_TM_lib_internal);
  }
  /* _L33= */
  if (outC->_L35) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&outC->_L33, &outC->_L29);
  }
  else {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&outC->_L33, &outC->_L21);
  }
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->_L30,
    (M_TrainTrack_Message_T_TM_radio_messages *)
      &EMPTY_TrainTrackMessage_TM_lib_internal);
  /* _L32/ */
  for (idx1 = 0; idx1 < 1; idx1++) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &outC->_L32[idx1],
      &outC->_L30);
  }
  /* _L31= */
  if (outC->_L35) {
    kcg_copy__39_array(&outC->_L31, &outC->_L32);
  }
  else {
    kcg_copy__39_array(&outC->_L31, &outC->_L37);
  }
  kcg_copy__50_array(&outC->_L24, (_50_array *) &outC->_L12[0]);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->_L25[0],
    &outC->_L31[0]);
  kcg_copy__50_array(&outC->_L25[1], &outC->_L24);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->Message_out,
    &outC->_L33);
  outC->Stacksize_new = outC->_L15;
  kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
    &outC->Buffer_Out,
    &outC->_L25);
}

#ifndef KCG_USER_DEFINED_INIT
void BufferOutput_read_write1_init_TM_lib_internal(
  outC_BufferOutput_read_write1_TM_lib_internal *outC)
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

  for (idx1 = 0; idx1 < 1; idx1++) {
    outC->_L37[idx1].Message.valid = kcg_true;
    outC->_L37[idx1].Message.nid_message = kcg_lit_int64(0);
    outC->_L37[idx1].Message.l_message = kcg_lit_int64(0);
    outC->_L37[idx1].Message.t_train = kcg_lit_int64(0);
    outC->_L37[idx1].Message.nid_engine = kcg_lit_int64(0);
    outC->_L37[idx1].Message.field1 = kcg_lit_int64(0);
    outC->_L37[idx1].Message.field2 = kcg_lit_int64(0);
    outC->_L37[idx1].Message.field3 = kcg_lit_int64(0);
    for (idx = 0; idx < 50; idx++) {
      outC->_L37[idx1].OptionalPackets[idx] = kcg_lit_int64(0);
    }
  }
  outC->_L36 = kcg_lit_int64(0);
  outC->_L35 = kcg_true;
  outC->_L34 = kcg_lit_int64(0);
  outC->_L33.Message.valid = kcg_true;
  outC->_L33.Message.nid_message = kcg_lit_int64(0);
  outC->_L33.Message.l_message = kcg_lit_int64(0);
  outC->_L33.Message.t_train = kcg_lit_int64(0);
  outC->_L33.Message.nid_engine = kcg_lit_int64(0);
  outC->_L33.Message.field1 = kcg_lit_int64(0);
  outC->_L33.Message.field2 = kcg_lit_int64(0);
  outC->_L33.Message.field3 = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 50; idx2++) {
    outC->_L33.OptionalPackets[idx2] = kcg_lit_int64(0);
  }
  for (idx4 = 0; idx4 < 1; idx4++) {
    outC->_L32[idx4].Message.valid = kcg_true;
    outC->_L32[idx4].Message.nid_message = kcg_lit_int64(0);
    outC->_L32[idx4].Message.l_message = kcg_lit_int64(0);
    outC->_L32[idx4].Message.t_train = kcg_lit_int64(0);
    outC->_L32[idx4].Message.nid_engine = kcg_lit_int64(0);
    outC->_L32[idx4].Message.field1 = kcg_lit_int64(0);
    outC->_L32[idx4].Message.field2 = kcg_lit_int64(0);
    outC->_L32[idx4].Message.field3 = kcg_lit_int64(0);
    for (idx3 = 0; idx3 < 50; idx3++) {
      outC->_L32[idx4].OptionalPackets[idx3] = kcg_lit_int64(0);
    }
  }
  for (idx6 = 0; idx6 < 1; idx6++) {
    outC->_L31[idx6].Message.valid = kcg_true;
    outC->_L31[idx6].Message.nid_message = kcg_lit_int64(0);
    outC->_L31[idx6].Message.l_message = kcg_lit_int64(0);
    outC->_L31[idx6].Message.t_train = kcg_lit_int64(0);
    outC->_L31[idx6].Message.nid_engine = kcg_lit_int64(0);
    outC->_L31[idx6].Message.field1 = kcg_lit_int64(0);
    outC->_L31[idx6].Message.field2 = kcg_lit_int64(0);
    outC->_L31[idx6].Message.field3 = kcg_lit_int64(0);
    for (idx5 = 0; idx5 < 50; idx5++) {
      outC->_L31[idx6].OptionalPackets[idx5] = kcg_lit_int64(0);
    }
  }
  outC->_L30.Message.valid = kcg_true;
  outC->_L30.Message.nid_message = kcg_lit_int64(0);
  outC->_L30.Message.l_message = kcg_lit_int64(0);
  outC->_L30.Message.t_train = kcg_lit_int64(0);
  outC->_L30.Message.nid_engine = kcg_lit_int64(0);
  outC->_L30.Message.field1 = kcg_lit_int64(0);
  outC->_L30.Message.field2 = kcg_lit_int64(0);
  outC->_L30.Message.field3 = kcg_lit_int64(0);
  for (idx7 = 0; idx7 < 50; idx7++) {
    outC->_L30.OptionalPackets[idx7] = kcg_lit_int64(0);
  }
  outC->_L29.Message.valid = kcg_true;
  outC->_L29.Message.nid_message = kcg_lit_int64(0);
  outC->_L29.Message.l_message = kcg_lit_int64(0);
  outC->_L29.Message.t_train = kcg_lit_int64(0);
  outC->_L29.Message.nid_engine = kcg_lit_int64(0);
  outC->_L29.Message.field1 = kcg_lit_int64(0);
  outC->_L29.Message.field2 = kcg_lit_int64(0);
  outC->_L29.Message.field3 = kcg_lit_int64(0);
  for (idx8 = 0; idx8 < 50; idx8++) {
    outC->_L29.OptionalPackets[idx8] = kcg_lit_int64(0);
  }
  outC->_L28 = kcg_lit_int64(0);
  outC->_L27 = kcg_lit_int64(0);
  for (idx10 = 0; idx10 < 100; idx10++) {
    outC->_L25[idx10].Message.valid = kcg_true;
    outC->_L25[idx10].Message.nid_message = kcg_lit_int64(0);
    outC->_L25[idx10].Message.l_message = kcg_lit_int64(0);
    outC->_L25[idx10].Message.t_train = kcg_lit_int64(0);
    outC->_L25[idx10].Message.nid_engine = kcg_lit_int64(0);
    outC->_L25[idx10].Message.field1 = kcg_lit_int64(0);
    outC->_L25[idx10].Message.field2 = kcg_lit_int64(0);
    outC->_L25[idx10].Message.field3 = kcg_lit_int64(0);
    for (idx9 = 0; idx9 < 50; idx9++) {
      outC->_L25[idx10].OptionalPackets[idx9] = kcg_lit_int64(0);
    }
  }
  for (idx12 = 0; idx12 < 99; idx12++) {
    outC->_L24[idx12].Message.valid = kcg_true;
    outC->_L24[idx12].Message.nid_message = kcg_lit_int64(0);
    outC->_L24[idx12].Message.l_message = kcg_lit_int64(0);
    outC->_L24[idx12].Message.t_train = kcg_lit_int64(0);
    outC->_L24[idx12].Message.nid_engine = kcg_lit_int64(0);
    outC->_L24[idx12].Message.field1 = kcg_lit_int64(0);
    outC->_L24[idx12].Message.field2 = kcg_lit_int64(0);
    outC->_L24[idx12].Message.field3 = kcg_lit_int64(0);
    for (idx11 = 0; idx11 < 50; idx11++) {
      outC->_L24[idx12].OptionalPackets[idx11] = kcg_lit_int64(0);
    }
  }
  for (idx14 = 0; idx14 < 100; idx14++) {
    outC->_L12[idx14].Message.valid = kcg_true;
    outC->_L12[idx14].Message.nid_message = kcg_lit_int64(0);
    outC->_L12[idx14].Message.l_message = kcg_lit_int64(0);
    outC->_L12[idx14].Message.t_train = kcg_lit_int64(0);
    outC->_L12[idx14].Message.nid_engine = kcg_lit_int64(0);
    outC->_L12[idx14].Message.field1 = kcg_lit_int64(0);
    outC->_L12[idx14].Message.field2 = kcg_lit_int64(0);
    outC->_L12[idx14].Message.field3 = kcg_lit_int64(0);
    for (idx13 = 0; idx13 < 50; idx13++) {
      outC->_L12[idx14].OptionalPackets[idx13] = kcg_lit_int64(0);
    }
  }
  outC->_L14 = kcg_lit_int64(0);
  outC->_L15 = kcg_lit_int64(0);
  outC->_L21.Message.valid = kcg_true;
  outC->_L21.Message.nid_message = kcg_lit_int64(0);
  outC->_L21.Message.l_message = kcg_lit_int64(0);
  outC->_L21.Message.t_train = kcg_lit_int64(0);
  outC->_L21.Message.nid_engine = kcg_lit_int64(0);
  outC->_L21.Message.field1 = kcg_lit_int64(0);
  outC->_L21.Message.field2 = kcg_lit_int64(0);
  outC->_L21.Message.field3 = kcg_lit_int64(0);
  for (idx15 = 0; idx15 < 50; idx15++) {
    outC->_L21.OptionalPackets[idx15] = kcg_lit_int64(0);
  }
  for (idx17 = 0; idx17 < 5; idx17++) {
    outC->_L23[idx17].Message.valid = kcg_true;
    outC->_L23[idx17].Message.nid_message = kcg_lit_int64(0);
    outC->_L23[idx17].Message.l_message = kcg_lit_int64(0);
    outC->_L23[idx17].Message.t_train = kcg_lit_int64(0);
    outC->_L23[idx17].Message.nid_engine = kcg_lit_int64(0);
    outC->_L23[idx17].Message.field1 = kcg_lit_int64(0);
    outC->_L23[idx17].Message.field2 = kcg_lit_int64(0);
    outC->_L23[idx17].Message.field3 = kcg_lit_int64(0);
    for (idx16 = 0; idx16 < 50; idx16++) {
      outC->_L23[idx17].OptionalPackets[idx16] = kcg_lit_int64(0);
    }
  }
  outC->index = kcg_lit_int64(0);
  outC->Message_out.Message.valid = kcg_true;
  outC->Message_out.Message.nid_message = kcg_lit_int64(0);
  outC->Message_out.Message.l_message = kcg_lit_int64(0);
  outC->Message_out.Message.t_train = kcg_lit_int64(0);
  outC->Message_out.Message.nid_engine = kcg_lit_int64(0);
  outC->Message_out.Message.field1 = kcg_lit_int64(0);
  outC->Message_out.Message.field2 = kcg_lit_int64(0);
  outC->Message_out.Message.field3 = kcg_lit_int64(0);
  for (idx18 = 0; idx18 < 50; idx18++) {
    outC->Message_out.OptionalPackets[idx18] = kcg_lit_int64(0);
  }
  outC->Stacksize_new = kcg_lit_int64(0);
  for (idx20 = 0; idx20 < 100; idx20++) {
    outC->Buffer_Out[idx20].Message.valid = kcg_true;
    outC->Buffer_Out[idx20].Message.nid_message = kcg_lit_int64(0);
    outC->Buffer_Out[idx20].Message.l_message = kcg_lit_int64(0);
    outC->Buffer_Out[idx20].Message.t_train = kcg_lit_int64(0);
    outC->Buffer_Out[idx20].Message.nid_engine = kcg_lit_int64(0);
    outC->Buffer_Out[idx20].Message.field1 = kcg_lit_int64(0);
    outC->Buffer_Out[idx20].Message.field2 = kcg_lit_int64(0);
    outC->Buffer_Out[idx20].Message.field3 = kcg_lit_int64(0);
    for (idx19 = 0; idx19 < 50; idx19++) {
      outC->Buffer_Out[idx20].OptionalPackets[idx19] = kcg_lit_int64(0);
    }
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void BufferOutput_read_write1_reset_TM_lib_internal(
  outC_BufferOutput_read_write1_TM_lib_internal *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** BufferOutput_read_write1_TM_lib_internal.c
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

