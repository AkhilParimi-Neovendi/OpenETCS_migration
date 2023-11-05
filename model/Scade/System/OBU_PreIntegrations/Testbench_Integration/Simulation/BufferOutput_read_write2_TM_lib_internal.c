/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BufferOutput_read_write2_TM_lib_internal.h"

/* TM_lib_internal::BufferOutput_read_write2/ */
void BufferOutput_read_write2_TM_lib_internal(
  /* Buffer_In/ */
  M_TrainTrackRadioOutputBuffer_t_TM_lib_internal *Buffer_In,
  /* Stacksize_old/ */
  kcg_int32 Stacksize_old,
  /* Message_In/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *Message_In,
  outC_BufferOutput_read_write2_TM_lib_internal *outC)
{
  static kcg_size idx;

  outC->_L28 = kcg_lit_int32(1);
  outC->_L15 = Stacksize_old;
  outC->_L27 = outC->_L15 - outC->_L28;
  outC->index = outC->_L27;
  outC->_L14 = outC->index;
  kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
    &outC->_L12,
    Buffer_In);
  if ((kcg_lit_int32(0) <= outC->_L14) & (outC->_L14 < kcg_lit_int32(100))) {
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
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&outC->_L23, Message_In);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&outC->_L37, &outC->_L23[0]);
  outC->_L35 = kcg_lit_int32(0);
  outC->_L33 = Stacksize_old;
  outC->_L34 = outC->_L33 == outC->_L35;
  /* _L42= */
  if (outC->_L34) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&outC->_L42, &outC->_L37);
  }
  else {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&outC->_L42, &outC->_L21);
  }
  kcg_copy__95_array(&outC->_L29, (_95_array *) &outC->_L23[0]);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->_L38,
    (M_TrainTrack_Message_T_TM_radio_messages *)
      &EMPTY_TrainTrackMessage_TM_lib_internal);
  /* _L40/ */
  for (idx = 0; idx < 1; idx++) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &outC->_L40[idx],
      &outC->_L38);
  }
  kcg_copy__39_array(&outC->_L36, (_39_array *) &outC->_L23[1]);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->_L39[0],
    &outC->_L36[0]);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->_L39[1],
    &outC->_L40[0]);
  /* _L41= */
  if (outC->_L34) {
    kcg_copy__95_array(&outC->_L41, &outC->_L39);
  }
  else {
    kcg_copy__95_array(&outC->_L41, &outC->_L29);
  }
  outC->_L32 = kcg_lit_int32(1);
  outC->_L31 = outC->_L15 + outC->_L32;
  kcg_copy__79_array(&outC->_L24, (_79_array *) &outC->_L12[0]);
  kcg_copy__95_array(&outC->_L25[0], &outC->_L41);
  kcg_copy__79_array(&outC->_L25[2], &outC->_L24);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->Message_out,
    &outC->_L42);
  outC->Stacksize_new = outC->_L31;
  kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
    &outC->Buffer_Out,
    &outC->_L25);
}

#ifndef KCG_USER_DEFINED_INIT
void BufferOutput_read_write2_init_TM_lib_internal(
  outC_BufferOutput_read_write2_TM_lib_internal *outC)
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

  outC->_L42.Message.valid = kcg_true;
  outC->_L42.Message.nid_message = kcg_lit_int32(0);
  outC->_L42.Message.l_message = kcg_lit_int32(0);
  outC->_L42.Message.t_train = kcg_lit_int32(0);
  outC->_L42.Message.nid_engine = kcg_lit_int32(0);
  outC->_L42.Message.field1 = kcg_lit_int32(0);
  outC->_L42.Message.field2 = kcg_lit_int32(0);
  outC->_L42.Message.field3 = kcg_lit_int32(0);
  for (idx = 0; idx < 50; idx++) {
    outC->_L42.OptionalPackets[idx] = kcg_lit_int32(0);
  }
  for (idx2 = 0; idx2 < 2; idx2++) {
    outC->_L41[idx2].Message.valid = kcg_true;
    outC->_L41[idx2].Message.nid_message = kcg_lit_int32(0);
    outC->_L41[idx2].Message.l_message = kcg_lit_int32(0);
    outC->_L41[idx2].Message.t_train = kcg_lit_int32(0);
    outC->_L41[idx2].Message.nid_engine = kcg_lit_int32(0);
    outC->_L41[idx2].Message.field1 = kcg_lit_int32(0);
    outC->_L41[idx2].Message.field2 = kcg_lit_int32(0);
    outC->_L41[idx2].Message.field3 = kcg_lit_int32(0);
    for (idx1 = 0; idx1 < 50; idx1++) {
      outC->_L41[idx2].OptionalPackets[idx1] = kcg_lit_int32(0);
    }
  }
  for (idx4 = 0; idx4 < 1; idx4++) {
    outC->_L40[idx4].Message.valid = kcg_true;
    outC->_L40[idx4].Message.nid_message = kcg_lit_int32(0);
    outC->_L40[idx4].Message.l_message = kcg_lit_int32(0);
    outC->_L40[idx4].Message.t_train = kcg_lit_int32(0);
    outC->_L40[idx4].Message.nid_engine = kcg_lit_int32(0);
    outC->_L40[idx4].Message.field1 = kcg_lit_int32(0);
    outC->_L40[idx4].Message.field2 = kcg_lit_int32(0);
    outC->_L40[idx4].Message.field3 = kcg_lit_int32(0);
    for (idx3 = 0; idx3 < 50; idx3++) {
      outC->_L40[idx4].OptionalPackets[idx3] = kcg_lit_int32(0);
    }
  }
  for (idx6 = 0; idx6 < 2; idx6++) {
    outC->_L39[idx6].Message.valid = kcg_true;
    outC->_L39[idx6].Message.nid_message = kcg_lit_int32(0);
    outC->_L39[idx6].Message.l_message = kcg_lit_int32(0);
    outC->_L39[idx6].Message.t_train = kcg_lit_int32(0);
    outC->_L39[idx6].Message.nid_engine = kcg_lit_int32(0);
    outC->_L39[idx6].Message.field1 = kcg_lit_int32(0);
    outC->_L39[idx6].Message.field2 = kcg_lit_int32(0);
    outC->_L39[idx6].Message.field3 = kcg_lit_int32(0);
    for (idx5 = 0; idx5 < 50; idx5++) {
      outC->_L39[idx6].OptionalPackets[idx5] = kcg_lit_int32(0);
    }
  }
  outC->_L38.Message.valid = kcg_true;
  outC->_L38.Message.nid_message = kcg_lit_int32(0);
  outC->_L38.Message.l_message = kcg_lit_int32(0);
  outC->_L38.Message.t_train = kcg_lit_int32(0);
  outC->_L38.Message.nid_engine = kcg_lit_int32(0);
  outC->_L38.Message.field1 = kcg_lit_int32(0);
  outC->_L38.Message.field2 = kcg_lit_int32(0);
  outC->_L38.Message.field3 = kcg_lit_int32(0);
  for (idx7 = 0; idx7 < 50; idx7++) {
    outC->_L38.OptionalPackets[idx7] = kcg_lit_int32(0);
  }
  outC->_L37.Message.valid = kcg_true;
  outC->_L37.Message.nid_message = kcg_lit_int32(0);
  outC->_L37.Message.l_message = kcg_lit_int32(0);
  outC->_L37.Message.t_train = kcg_lit_int32(0);
  outC->_L37.Message.nid_engine = kcg_lit_int32(0);
  outC->_L37.Message.field1 = kcg_lit_int32(0);
  outC->_L37.Message.field2 = kcg_lit_int32(0);
  outC->_L37.Message.field3 = kcg_lit_int32(0);
  for (idx8 = 0; idx8 < 50; idx8++) {
    outC->_L37.OptionalPackets[idx8] = kcg_lit_int32(0);
  }
  for (idx10 = 0; idx10 < 1; idx10++) {
    outC->_L36[idx10].Message.valid = kcg_true;
    outC->_L36[idx10].Message.nid_message = kcg_lit_int32(0);
    outC->_L36[idx10].Message.l_message = kcg_lit_int32(0);
    outC->_L36[idx10].Message.t_train = kcg_lit_int32(0);
    outC->_L36[idx10].Message.nid_engine = kcg_lit_int32(0);
    outC->_L36[idx10].Message.field1 = kcg_lit_int32(0);
    outC->_L36[idx10].Message.field2 = kcg_lit_int32(0);
    outC->_L36[idx10].Message.field3 = kcg_lit_int32(0);
    for (idx9 = 0; idx9 < 50; idx9++) {
      outC->_L36[idx10].OptionalPackets[idx9] = kcg_lit_int32(0);
    }
  }
  outC->_L35 = kcg_lit_int32(0);
  outC->_L34 = kcg_true;
  outC->_L33 = kcg_lit_int32(0);
  outC->_L32 = kcg_lit_int32(0);
  outC->_L31 = kcg_lit_int32(0);
  for (idx12 = 0; idx12 < 2; idx12++) {
    outC->_L29[idx12].Message.valid = kcg_true;
    outC->_L29[idx12].Message.nid_message = kcg_lit_int32(0);
    outC->_L29[idx12].Message.l_message = kcg_lit_int32(0);
    outC->_L29[idx12].Message.t_train = kcg_lit_int32(0);
    outC->_L29[idx12].Message.nid_engine = kcg_lit_int32(0);
    outC->_L29[idx12].Message.field1 = kcg_lit_int32(0);
    outC->_L29[idx12].Message.field2 = kcg_lit_int32(0);
    outC->_L29[idx12].Message.field3 = kcg_lit_int32(0);
    for (idx11 = 0; idx11 < 50; idx11++) {
      outC->_L29[idx12].OptionalPackets[idx11] = kcg_lit_int32(0);
    }
  }
  outC->_L28 = kcg_lit_int32(0);
  outC->_L27 = kcg_lit_int32(0);
  for (idx14 = 0; idx14 < 100; idx14++) {
    outC->_L25[idx14].Message.valid = kcg_true;
    outC->_L25[idx14].Message.nid_message = kcg_lit_int32(0);
    outC->_L25[idx14].Message.l_message = kcg_lit_int32(0);
    outC->_L25[idx14].Message.t_train = kcg_lit_int32(0);
    outC->_L25[idx14].Message.nid_engine = kcg_lit_int32(0);
    outC->_L25[idx14].Message.field1 = kcg_lit_int32(0);
    outC->_L25[idx14].Message.field2 = kcg_lit_int32(0);
    outC->_L25[idx14].Message.field3 = kcg_lit_int32(0);
    for (idx13 = 0; idx13 < 50; idx13++) {
      outC->_L25[idx14].OptionalPackets[idx13] = kcg_lit_int32(0);
    }
  }
  for (idx16 = 0; idx16 < 98; idx16++) {
    outC->_L24[idx16].Message.valid = kcg_true;
    outC->_L24[idx16].Message.nid_message = kcg_lit_int32(0);
    outC->_L24[idx16].Message.l_message = kcg_lit_int32(0);
    outC->_L24[idx16].Message.t_train = kcg_lit_int32(0);
    outC->_L24[idx16].Message.nid_engine = kcg_lit_int32(0);
    outC->_L24[idx16].Message.field1 = kcg_lit_int32(0);
    outC->_L24[idx16].Message.field2 = kcg_lit_int32(0);
    outC->_L24[idx16].Message.field3 = kcg_lit_int32(0);
    for (idx15 = 0; idx15 < 50; idx15++) {
      outC->_L24[idx16].OptionalPackets[idx15] = kcg_lit_int32(0);
    }
  }
  for (idx18 = 0; idx18 < 100; idx18++) {
    outC->_L12[idx18].Message.valid = kcg_true;
    outC->_L12[idx18].Message.nid_message = kcg_lit_int32(0);
    outC->_L12[idx18].Message.l_message = kcg_lit_int32(0);
    outC->_L12[idx18].Message.t_train = kcg_lit_int32(0);
    outC->_L12[idx18].Message.nid_engine = kcg_lit_int32(0);
    outC->_L12[idx18].Message.field1 = kcg_lit_int32(0);
    outC->_L12[idx18].Message.field2 = kcg_lit_int32(0);
    outC->_L12[idx18].Message.field3 = kcg_lit_int32(0);
    for (idx17 = 0; idx17 < 50; idx17++) {
      outC->_L12[idx18].OptionalPackets[idx17] = kcg_lit_int32(0);
    }
  }
  outC->_L14 = kcg_lit_int32(0);
  outC->_L15 = kcg_lit_int32(0);
  outC->_L21.Message.valid = kcg_true;
  outC->_L21.Message.nid_message = kcg_lit_int32(0);
  outC->_L21.Message.l_message = kcg_lit_int32(0);
  outC->_L21.Message.t_train = kcg_lit_int32(0);
  outC->_L21.Message.nid_engine = kcg_lit_int32(0);
  outC->_L21.Message.field1 = kcg_lit_int32(0);
  outC->_L21.Message.field2 = kcg_lit_int32(0);
  outC->_L21.Message.field3 = kcg_lit_int32(0);
  for (idx19 = 0; idx19 < 50; idx19++) {
    outC->_L21.OptionalPackets[idx19] = kcg_lit_int32(0);
  }
  for (idx21 = 0; idx21 < 5; idx21++) {
    outC->_L23[idx21].Message.valid = kcg_true;
    outC->_L23[idx21].Message.nid_message = kcg_lit_int32(0);
    outC->_L23[idx21].Message.l_message = kcg_lit_int32(0);
    outC->_L23[idx21].Message.t_train = kcg_lit_int32(0);
    outC->_L23[idx21].Message.nid_engine = kcg_lit_int32(0);
    outC->_L23[idx21].Message.field1 = kcg_lit_int32(0);
    outC->_L23[idx21].Message.field2 = kcg_lit_int32(0);
    outC->_L23[idx21].Message.field3 = kcg_lit_int32(0);
    for (idx20 = 0; idx20 < 50; idx20++) {
      outC->_L23[idx21].OptionalPackets[idx20] = kcg_lit_int32(0);
    }
  }
  outC->index = kcg_lit_int32(0);
  outC->Message_out.Message.valid = kcg_true;
  outC->Message_out.Message.nid_message = kcg_lit_int32(0);
  outC->Message_out.Message.l_message = kcg_lit_int32(0);
  outC->Message_out.Message.t_train = kcg_lit_int32(0);
  outC->Message_out.Message.nid_engine = kcg_lit_int32(0);
  outC->Message_out.Message.field1 = kcg_lit_int32(0);
  outC->Message_out.Message.field2 = kcg_lit_int32(0);
  outC->Message_out.Message.field3 = kcg_lit_int32(0);
  for (idx22 = 0; idx22 < 50; idx22++) {
    outC->Message_out.OptionalPackets[idx22] = kcg_lit_int32(0);
  }
  outC->Stacksize_new = kcg_lit_int32(0);
  for (idx24 = 0; idx24 < 100; idx24++) {
    outC->Buffer_Out[idx24].Message.valid = kcg_true;
    outC->Buffer_Out[idx24].Message.nid_message = kcg_lit_int32(0);
    outC->Buffer_Out[idx24].Message.l_message = kcg_lit_int32(0);
    outC->Buffer_Out[idx24].Message.t_train = kcg_lit_int32(0);
    outC->Buffer_Out[idx24].Message.nid_engine = kcg_lit_int32(0);
    outC->Buffer_Out[idx24].Message.field1 = kcg_lit_int32(0);
    outC->Buffer_Out[idx24].Message.field2 = kcg_lit_int32(0);
    outC->Buffer_Out[idx24].Message.field3 = kcg_lit_int32(0);
    for (idx23 = 0; idx23 < 50; idx23++) {
      outC->Buffer_Out[idx24].OptionalPackets[idx23] = kcg_lit_int32(0);
    }
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void BufferOutput_read_write2_reset_TM_lib_internal(
  outC_BufferOutput_read_write2_TM_lib_internal *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** BufferOutput_read_write2_TM_lib_internal.c
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

