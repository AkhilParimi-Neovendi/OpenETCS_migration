/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BufferMsg_read_write_TM_lib_internal.h"

/* TM_lib_internal::BufferMsg_read_write/ */
void BufferMsg_read_write_TM_lib_internal(
  /* Buffer_In/ */
  M_TrainTrackMessage_buffer_t_TM_lib_internal *Buffer_In,
  /* Stacksize_old/ */
  kcg_int64 Stacksize_old,
  /* Message_In/ */
  M_TrainTrack_Message_T_TM_radio_messages *Message_In,
  outC_BufferMsg_read_write_TM_lib_internal *outC)
{
  static kcg_size idx;

  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->_L42,
    (M_TrainTrack_Message_T_TM_radio_messages *)
      &EMPTY_TrainTrackMessage_TM_lib_internal);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&outC->_L23, Message_In);
  outC->_L38 = Stacksize_old;
  outC->_L39 = kcg_lit_int64(0);
  outC->_L40 = outC->_L39 == outC->_L38;
  /* _L41= */
  if (outC->_L40) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&outC->_L41, &outC->_L42);
  }
  else {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&outC->_L41, &outC->_L23);
  }
  outC->_L30 = kcg_lit_int64(1);
  outC->_L15 = Stacksize_old;
  outC->_L31 = outC->_L15 - outC->_L30;
  outC->_L32 = kcg_lit_int64(0);
  outC->_L33 = outC->_L31 < outC->_L32;
  /* _L29= */
  if (outC->_L33) {
    outC->_L29 = outC->_L32;
  }
  else {
    outC->_L29 = outC->_L31;
  }
  outC->index = outC->_L29;
  outC->_L14 = outC->index;
  kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal(&outC->_L12, Buffer_In);
  if ((kcg_lit_int64(0) <= outC->_L14) & (outC->_L14 < kcg_lit_int64(5))) {
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
  /* _L37= */
  if (outC->_L40) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&outC->_L37, &outC->_L23);
  }
  else {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&outC->_L37, &outC->_L21);
  }
  /* _L26/ */
  for (idx = 0; idx < 1; idx++) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &outC->_L26[idx],
      &outC->_L41);
  }
  kcg_copy__19_array(&outC->_L24, (_19_array *) &outC->_L12[0]);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->_L25[0],
    &outC->_L26[0]);
  kcg_copy__19_array(&outC->_L25[1], &outC->_L24);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->Message_out,
    &outC->_L37);
  outC->Stacksize_new = outC->_L15;
  kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal(
    &outC->Buffer_Out,
    &outC->_L25);
}

#ifndef KCG_USER_DEFINED_INIT
void BufferMsg_read_write_init_TM_lib_internal(
  outC_BufferMsg_read_write_TM_lib_internal *outC)
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

  outC->_L42.Message.valid = kcg_true;
  outC->_L42.Message.nid_message = kcg_lit_int64(0);
  outC->_L42.Message.l_message = kcg_lit_int64(0);
  outC->_L42.Message.t_train = kcg_lit_int64(0);
  outC->_L42.Message.nid_engine = kcg_lit_int64(0);
  outC->_L42.Message.field1 = kcg_lit_int64(0);
  outC->_L42.Message.field2 = kcg_lit_int64(0);
  outC->_L42.Message.field3 = kcg_lit_int64(0);
  for (idx = 0; idx < 50; idx++) {
    outC->_L42.OptionalPackets[idx] = kcg_lit_int64(0);
  }
  outC->_L41.Message.valid = kcg_true;
  outC->_L41.Message.nid_message = kcg_lit_int64(0);
  outC->_L41.Message.l_message = kcg_lit_int64(0);
  outC->_L41.Message.t_train = kcg_lit_int64(0);
  outC->_L41.Message.nid_engine = kcg_lit_int64(0);
  outC->_L41.Message.field1 = kcg_lit_int64(0);
  outC->_L41.Message.field2 = kcg_lit_int64(0);
  outC->_L41.Message.field3 = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 50; idx1++) {
    outC->_L41.OptionalPackets[idx1] = kcg_lit_int64(0);
  }
  outC->_L39 = kcg_lit_int64(0);
  outC->_L40 = kcg_true;
  outC->_L38 = kcg_lit_int64(0);
  outC->_L37.Message.valid = kcg_true;
  outC->_L37.Message.nid_message = kcg_lit_int64(0);
  outC->_L37.Message.l_message = kcg_lit_int64(0);
  outC->_L37.Message.t_train = kcg_lit_int64(0);
  outC->_L37.Message.nid_engine = kcg_lit_int64(0);
  outC->_L37.Message.field1 = kcg_lit_int64(0);
  outC->_L37.Message.field2 = kcg_lit_int64(0);
  outC->_L37.Message.field3 = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 50; idx2++) {
    outC->_L37.OptionalPackets[idx2] = kcg_lit_int64(0);
  }
  outC->_L29 = kcg_lit_int64(0);
  outC->_L30 = kcg_lit_int64(0);
  outC->_L31 = kcg_lit_int64(0);
  outC->_L32 = kcg_lit_int64(0);
  outC->_L33 = kcg_true;
  for (idx4 = 0; idx4 < 1; idx4++) {
    outC->_L26[idx4].Message.valid = kcg_true;
    outC->_L26[idx4].Message.nid_message = kcg_lit_int64(0);
    outC->_L26[idx4].Message.l_message = kcg_lit_int64(0);
    outC->_L26[idx4].Message.t_train = kcg_lit_int64(0);
    outC->_L26[idx4].Message.nid_engine = kcg_lit_int64(0);
    outC->_L26[idx4].Message.field1 = kcg_lit_int64(0);
    outC->_L26[idx4].Message.field2 = kcg_lit_int64(0);
    outC->_L26[idx4].Message.field3 = kcg_lit_int64(0);
    for (idx3 = 0; idx3 < 50; idx3++) {
      outC->_L26[idx4].OptionalPackets[idx3] = kcg_lit_int64(0);
    }
  }
  for (idx6 = 0; idx6 < 5; idx6++) {
    outC->_L25[idx6].Message.valid = kcg_true;
    outC->_L25[idx6].Message.nid_message = kcg_lit_int64(0);
    outC->_L25[idx6].Message.l_message = kcg_lit_int64(0);
    outC->_L25[idx6].Message.t_train = kcg_lit_int64(0);
    outC->_L25[idx6].Message.nid_engine = kcg_lit_int64(0);
    outC->_L25[idx6].Message.field1 = kcg_lit_int64(0);
    outC->_L25[idx6].Message.field2 = kcg_lit_int64(0);
    outC->_L25[idx6].Message.field3 = kcg_lit_int64(0);
    for (idx5 = 0; idx5 < 50; idx5++) {
      outC->_L25[idx6].OptionalPackets[idx5] = kcg_lit_int64(0);
    }
  }
  for (idx8 = 0; idx8 < 4; idx8++) {
    outC->_L24[idx8].Message.valid = kcg_true;
    outC->_L24[idx8].Message.nid_message = kcg_lit_int64(0);
    outC->_L24[idx8].Message.l_message = kcg_lit_int64(0);
    outC->_L24[idx8].Message.t_train = kcg_lit_int64(0);
    outC->_L24[idx8].Message.nid_engine = kcg_lit_int64(0);
    outC->_L24[idx8].Message.field1 = kcg_lit_int64(0);
    outC->_L24[idx8].Message.field2 = kcg_lit_int64(0);
    outC->_L24[idx8].Message.field3 = kcg_lit_int64(0);
    for (idx7 = 0; idx7 < 50; idx7++) {
      outC->_L24[idx8].OptionalPackets[idx7] = kcg_lit_int64(0);
    }
  }
  for (idx10 = 0; idx10 < 5; idx10++) {
    outC->_L12[idx10].Message.valid = kcg_true;
    outC->_L12[idx10].Message.nid_message = kcg_lit_int64(0);
    outC->_L12[idx10].Message.l_message = kcg_lit_int64(0);
    outC->_L12[idx10].Message.t_train = kcg_lit_int64(0);
    outC->_L12[idx10].Message.nid_engine = kcg_lit_int64(0);
    outC->_L12[idx10].Message.field1 = kcg_lit_int64(0);
    outC->_L12[idx10].Message.field2 = kcg_lit_int64(0);
    outC->_L12[idx10].Message.field3 = kcg_lit_int64(0);
    for (idx9 = 0; idx9 < 50; idx9++) {
      outC->_L12[idx10].OptionalPackets[idx9] = kcg_lit_int64(0);
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
  for (idx11 = 0; idx11 < 50; idx11++) {
    outC->_L21.OptionalPackets[idx11] = kcg_lit_int64(0);
  }
  outC->_L23.Message.valid = kcg_true;
  outC->_L23.Message.nid_message = kcg_lit_int64(0);
  outC->_L23.Message.l_message = kcg_lit_int64(0);
  outC->_L23.Message.t_train = kcg_lit_int64(0);
  outC->_L23.Message.nid_engine = kcg_lit_int64(0);
  outC->_L23.Message.field1 = kcg_lit_int64(0);
  outC->_L23.Message.field2 = kcg_lit_int64(0);
  outC->_L23.Message.field3 = kcg_lit_int64(0);
  for (idx12 = 0; idx12 < 50; idx12++) {
    outC->_L23.OptionalPackets[idx12] = kcg_lit_int64(0);
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
  for (idx13 = 0; idx13 < 50; idx13++) {
    outC->Message_out.OptionalPackets[idx13] = kcg_lit_int64(0);
  }
  outC->Stacksize_new = kcg_lit_int64(0);
  for (idx15 = 0; idx15 < 5; idx15++) {
    outC->Buffer_Out[idx15].Message.valid = kcg_true;
    outC->Buffer_Out[idx15].Message.nid_message = kcg_lit_int64(0);
    outC->Buffer_Out[idx15].Message.l_message = kcg_lit_int64(0);
    outC->Buffer_Out[idx15].Message.t_train = kcg_lit_int64(0);
    outC->Buffer_Out[idx15].Message.nid_engine = kcg_lit_int64(0);
    outC->Buffer_Out[idx15].Message.field1 = kcg_lit_int64(0);
    outC->Buffer_Out[idx15].Message.field2 = kcg_lit_int64(0);
    outC->Buffer_Out[idx15].Message.field3 = kcg_lit_int64(0);
    for (idx14 = 0; idx14 < 50; idx14++) {
      outC->Buffer_Out[idx15].OptionalPackets[idx14] = kcg_lit_int64(0);
    }
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void BufferMsg_read_write_reset_TM_lib_internal(
  outC_BufferMsg_read_write_TM_lib_internal *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** BufferMsg_read_write_TM_lib_internal.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

