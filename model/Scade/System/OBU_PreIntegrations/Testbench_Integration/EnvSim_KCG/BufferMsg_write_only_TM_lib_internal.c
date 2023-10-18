/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BufferMsg_write_only_TM_lib_internal.h"

/* TM_lib_internal::BufferMsg_write_only/ */
void BufferMsg_write_only_TM_lib_internal(
  /* Buffer_In/ */
  M_TrainTrackMessage_buffer_t_TM_lib_internal *Buffer_In,
  /* Stacksize_old/ */
  kcg_int64 Stacksize_old,
  /* Message_In/ */
  M_TrainTrack_Message_T_TM_radio_messages *Message_In,
  outC_BufferMsg_write_only_TM_lib_internal *outC)
{
  static kcg_size idx;
  static kcg_bool noname;

  outC->_L10 = DIM_FIFO_TrainTrackMessage_TM_lib_internal;
  outC->_L8 = kcg_lit_int64(1);
  outC->_L2 = Stacksize_old;
  outC->_L7 = outC->_L2 + outC->_L8;
  outC->_L11 = outC->_L7 > outC->_L10;
  noname = outC->_L11;
  /* _L12= */
  if (outC->_L11) {
    outC->_L12 = outC->_L10;
  }
  else {
    outC->_L12 = outC->_L7;
  }
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->_L9,
    (M_TrainTrack_Message_T_TM_radio_messages *)
      &EMPTY_TrainTrackMessage_TM_lib_internal);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&outC->_L3, Message_In);
  /* _L6/ */
  for (idx = 0; idx < 1; idx++) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&outC->_L6[idx], &outC->_L3);
  }
  kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal(&outC->_L1, Buffer_In);
  kcg_copy__15_array(&outC->_L4, (_15_array *) &outC->_L1[0]);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&outC->_L5[0], &outC->_L6[0]);
  kcg_copy__15_array(&outC->_L5[1], &outC->_L4);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->Message_out,
    &outC->_L9);
  outC->Stacksize_new = outC->_L12;
  kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal(
    &outC->Buffer_Out,
    &outC->_L5);
}

#ifndef KCG_USER_DEFINED_INIT
void BufferMsg_write_only_init_TM_lib_internal(
  outC_BufferMsg_write_only_TM_lib_internal *outC)
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

  outC->_L12 = kcg_lit_int64(0);
  outC->_L11 = kcg_true;
  outC->_L10 = kcg_lit_int64(0);
  outC->_L9.Message.valid = kcg_true;
  outC->_L9.Message.nid_message = kcg_lit_int64(0);
  outC->_L9.Message.l_message = kcg_lit_int64(0);
  outC->_L9.Message.t_train = kcg_lit_int64(0);
  outC->_L9.Message.nid_engine = kcg_lit_int64(0);
  outC->_L9.Message.field1 = kcg_lit_int64(0);
  outC->_L9.Message.field2 = kcg_lit_int64(0);
  outC->_L9.Message.field3 = kcg_lit_int64(0);
  for (idx = 0; idx < 50; idx++) {
    outC->_L9.OptionalPackets[idx] = kcg_lit_int64(0);
  }
  outC->_L8 = kcg_lit_int64(0);
  outC->_L7 = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 1; idx2++) {
    outC->_L6[idx2].Message.valid = kcg_true;
    outC->_L6[idx2].Message.nid_message = kcg_lit_int64(0);
    outC->_L6[idx2].Message.l_message = kcg_lit_int64(0);
    outC->_L6[idx2].Message.t_train = kcg_lit_int64(0);
    outC->_L6[idx2].Message.nid_engine = kcg_lit_int64(0);
    outC->_L6[idx2].Message.field1 = kcg_lit_int64(0);
    outC->_L6[idx2].Message.field2 = kcg_lit_int64(0);
    outC->_L6[idx2].Message.field3 = kcg_lit_int64(0);
    for (idx1 = 0; idx1 < 50; idx1++) {
      outC->_L6[idx2].OptionalPackets[idx1] = kcg_lit_int64(0);
    }
  }
  for (idx4 = 0; idx4 < 5; idx4++) {
    outC->_L5[idx4].Message.valid = kcg_true;
    outC->_L5[idx4].Message.nid_message = kcg_lit_int64(0);
    outC->_L5[idx4].Message.l_message = kcg_lit_int64(0);
    outC->_L5[idx4].Message.t_train = kcg_lit_int64(0);
    outC->_L5[idx4].Message.nid_engine = kcg_lit_int64(0);
    outC->_L5[idx4].Message.field1 = kcg_lit_int64(0);
    outC->_L5[idx4].Message.field2 = kcg_lit_int64(0);
    outC->_L5[idx4].Message.field3 = kcg_lit_int64(0);
    for (idx3 = 0; idx3 < 50; idx3++) {
      outC->_L5[idx4].OptionalPackets[idx3] = kcg_lit_int64(0);
    }
  }
  for (idx6 = 0; idx6 < 4; idx6++) {
    outC->_L4[idx6].Message.valid = kcg_true;
    outC->_L4[idx6].Message.nid_message = kcg_lit_int64(0);
    outC->_L4[idx6].Message.l_message = kcg_lit_int64(0);
    outC->_L4[idx6].Message.t_train = kcg_lit_int64(0);
    outC->_L4[idx6].Message.nid_engine = kcg_lit_int64(0);
    outC->_L4[idx6].Message.field1 = kcg_lit_int64(0);
    outC->_L4[idx6].Message.field2 = kcg_lit_int64(0);
    outC->_L4[idx6].Message.field3 = kcg_lit_int64(0);
    for (idx5 = 0; idx5 < 50; idx5++) {
      outC->_L4[idx6].OptionalPackets[idx5] = kcg_lit_int64(0);
    }
  }
  outC->_L3.Message.valid = kcg_true;
  outC->_L3.Message.nid_message = kcg_lit_int64(0);
  outC->_L3.Message.l_message = kcg_lit_int64(0);
  outC->_L3.Message.t_train = kcg_lit_int64(0);
  outC->_L3.Message.nid_engine = kcg_lit_int64(0);
  outC->_L3.Message.field1 = kcg_lit_int64(0);
  outC->_L3.Message.field2 = kcg_lit_int64(0);
  outC->_L3.Message.field3 = kcg_lit_int64(0);
  for (idx7 = 0; idx7 < 50; idx7++) {
    outC->_L3.OptionalPackets[idx7] = kcg_lit_int64(0);
  }
  outC->_L2 = kcg_lit_int64(0);
  for (idx9 = 0; idx9 < 5; idx9++) {
    outC->_L1[idx9].Message.valid = kcg_true;
    outC->_L1[idx9].Message.nid_message = kcg_lit_int64(0);
    outC->_L1[idx9].Message.l_message = kcg_lit_int64(0);
    outC->_L1[idx9].Message.t_train = kcg_lit_int64(0);
    outC->_L1[idx9].Message.nid_engine = kcg_lit_int64(0);
    outC->_L1[idx9].Message.field1 = kcg_lit_int64(0);
    outC->_L1[idx9].Message.field2 = kcg_lit_int64(0);
    outC->_L1[idx9].Message.field3 = kcg_lit_int64(0);
    for (idx8 = 0; idx8 < 50; idx8++) {
      outC->_L1[idx9].OptionalPackets[idx8] = kcg_lit_int64(0);
    }
  }
  outC->Message_out.Message.valid = kcg_true;
  outC->Message_out.Message.nid_message = kcg_lit_int64(0);
  outC->Message_out.Message.l_message = kcg_lit_int64(0);
  outC->Message_out.Message.t_train = kcg_lit_int64(0);
  outC->Message_out.Message.nid_engine = kcg_lit_int64(0);
  outC->Message_out.Message.field1 = kcg_lit_int64(0);
  outC->Message_out.Message.field2 = kcg_lit_int64(0);
  outC->Message_out.Message.field3 = kcg_lit_int64(0);
  for (idx10 = 0; idx10 < 50; idx10++) {
    outC->Message_out.OptionalPackets[idx10] = kcg_lit_int64(0);
  }
  outC->Stacksize_new = kcg_lit_int64(0);
  for (idx12 = 0; idx12 < 5; idx12++) {
    outC->Buffer_Out[idx12].Message.valid = kcg_true;
    outC->Buffer_Out[idx12].Message.nid_message = kcg_lit_int64(0);
    outC->Buffer_Out[idx12].Message.l_message = kcg_lit_int64(0);
    outC->Buffer_Out[idx12].Message.t_train = kcg_lit_int64(0);
    outC->Buffer_Out[idx12].Message.nid_engine = kcg_lit_int64(0);
    outC->Buffer_Out[idx12].Message.field1 = kcg_lit_int64(0);
    outC->Buffer_Out[idx12].Message.field2 = kcg_lit_int64(0);
    outC->Buffer_Out[idx12].Message.field3 = kcg_lit_int64(0);
    for (idx11 = 0; idx11 < 50; idx11++) {
      outC->Buffer_Out[idx12].OptionalPackets[idx11] = kcg_lit_int64(0);
    }
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void BufferMsg_write_only_reset_TM_lib_internal(
  outC_BufferMsg_write_only_TM_lib_internal *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** BufferMsg_write_only_TM_lib_internal.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

