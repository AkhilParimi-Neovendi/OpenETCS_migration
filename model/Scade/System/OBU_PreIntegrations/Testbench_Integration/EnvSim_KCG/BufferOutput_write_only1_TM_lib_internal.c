/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BufferOutput_write_only1_TM_lib_internal.h"

/* TM_lib_internal::BufferOutput_write_only1/ */
void BufferOutput_write_only1_TM_lib_internal(
  /* Buffer_In/ */
  M_TrainTrackRadioOutputBuffer_t_TM_lib_internal *Buffer_In,
  /* Stacksize_old/ */
  kcg_int32 Stacksize_old,
  /* Message_In/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *Message_In,
  outC_BufferOutput_write_only1_TM_lib_internal *outC)
{
  static kcg_bool noname;

  outC->_L10 = DIM_FIFO_TrainTrackOutput_TM_lib_internal;
  outC->_L8 = kcg_lit_int32(1);
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
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&outC->_L3, Message_In);
  kcg_copy__35_array(&outC->_L6, (_35_array *) &outC->_L3[0]);
  kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(&outC->_L1, Buffer_In);
  kcg_copy__46_array(&outC->_L4, (_46_array *) &outC->_L1[0]);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&outC->_L5[0], &outC->_L6[0]);
  kcg_copy__46_array(&outC->_L5[1], &outC->_L4);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->Message_out,
    &outC->_L9);
  outC->Stacksize_new = outC->_L12;
  kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
    &outC->Buffer_Out,
    &outC->_L5);
}

#ifndef KCG_USER_DEFINED_INIT
void BufferOutput_write_only1_init_TM_lib_internal(
  outC_BufferOutput_write_only1_TM_lib_internal *outC)
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

  outC->_L12 = kcg_lit_int32(0);
  outC->_L11 = kcg_true;
  outC->_L10 = kcg_lit_int32(0);
  outC->_L9.Message.valid = kcg_true;
  outC->_L9.Message.nid_message = kcg_lit_int32(0);
  outC->_L9.Message.l_message = kcg_lit_int32(0);
  outC->_L9.Message.t_train = kcg_lit_int32(0);
  outC->_L9.Message.nid_engine = kcg_lit_int32(0);
  outC->_L9.Message.field1 = kcg_lit_int32(0);
  outC->_L9.Message.field2 = kcg_lit_int32(0);
  outC->_L9.Message.field3 = kcg_lit_int32(0);
  for (idx = 0; idx < 50; idx++) {
    outC->_L9.OptionalPackets[idx] = kcg_lit_int32(0);
  }
  outC->_L8 = kcg_lit_int32(0);
  outC->_L7 = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 1; idx2++) {
    outC->_L6[idx2].Message.valid = kcg_true;
    outC->_L6[idx2].Message.nid_message = kcg_lit_int32(0);
    outC->_L6[idx2].Message.l_message = kcg_lit_int32(0);
    outC->_L6[idx2].Message.t_train = kcg_lit_int32(0);
    outC->_L6[idx2].Message.nid_engine = kcg_lit_int32(0);
    outC->_L6[idx2].Message.field1 = kcg_lit_int32(0);
    outC->_L6[idx2].Message.field2 = kcg_lit_int32(0);
    outC->_L6[idx2].Message.field3 = kcg_lit_int32(0);
    for (idx1 = 0; idx1 < 50; idx1++) {
      outC->_L6[idx2].OptionalPackets[idx1] = kcg_lit_int32(0);
    }
  }
  for (idx4 = 0; idx4 < 100; idx4++) {
    outC->_L5[idx4].Message.valid = kcg_true;
    outC->_L5[idx4].Message.nid_message = kcg_lit_int32(0);
    outC->_L5[idx4].Message.l_message = kcg_lit_int32(0);
    outC->_L5[idx4].Message.t_train = kcg_lit_int32(0);
    outC->_L5[idx4].Message.nid_engine = kcg_lit_int32(0);
    outC->_L5[idx4].Message.field1 = kcg_lit_int32(0);
    outC->_L5[idx4].Message.field2 = kcg_lit_int32(0);
    outC->_L5[idx4].Message.field3 = kcg_lit_int32(0);
    for (idx3 = 0; idx3 < 50; idx3++) {
      outC->_L5[idx4].OptionalPackets[idx3] = kcg_lit_int32(0);
    }
  }
  for (idx6 = 0; idx6 < 99; idx6++) {
    outC->_L4[idx6].Message.valid = kcg_true;
    outC->_L4[idx6].Message.nid_message = kcg_lit_int32(0);
    outC->_L4[idx6].Message.l_message = kcg_lit_int32(0);
    outC->_L4[idx6].Message.t_train = kcg_lit_int32(0);
    outC->_L4[idx6].Message.nid_engine = kcg_lit_int32(0);
    outC->_L4[idx6].Message.field1 = kcg_lit_int32(0);
    outC->_L4[idx6].Message.field2 = kcg_lit_int32(0);
    outC->_L4[idx6].Message.field3 = kcg_lit_int32(0);
    for (idx5 = 0; idx5 < 50; idx5++) {
      outC->_L4[idx6].OptionalPackets[idx5] = kcg_lit_int32(0);
    }
  }
  for (idx8 = 0; idx8 < 5; idx8++) {
    outC->_L3[idx8].Message.valid = kcg_true;
    outC->_L3[idx8].Message.nid_message = kcg_lit_int32(0);
    outC->_L3[idx8].Message.l_message = kcg_lit_int32(0);
    outC->_L3[idx8].Message.t_train = kcg_lit_int32(0);
    outC->_L3[idx8].Message.nid_engine = kcg_lit_int32(0);
    outC->_L3[idx8].Message.field1 = kcg_lit_int32(0);
    outC->_L3[idx8].Message.field2 = kcg_lit_int32(0);
    outC->_L3[idx8].Message.field3 = kcg_lit_int32(0);
    for (idx7 = 0; idx7 < 50; idx7++) {
      outC->_L3[idx8].OptionalPackets[idx7] = kcg_lit_int32(0);
    }
  }
  outC->_L2 = kcg_lit_int32(0);
  for (idx10 = 0; idx10 < 100; idx10++) {
    outC->_L1[idx10].Message.valid = kcg_true;
    outC->_L1[idx10].Message.nid_message = kcg_lit_int32(0);
    outC->_L1[idx10].Message.l_message = kcg_lit_int32(0);
    outC->_L1[idx10].Message.t_train = kcg_lit_int32(0);
    outC->_L1[idx10].Message.nid_engine = kcg_lit_int32(0);
    outC->_L1[idx10].Message.field1 = kcg_lit_int32(0);
    outC->_L1[idx10].Message.field2 = kcg_lit_int32(0);
    outC->_L1[idx10].Message.field3 = kcg_lit_int32(0);
    for (idx9 = 0; idx9 < 50; idx9++) {
      outC->_L1[idx10].OptionalPackets[idx9] = kcg_lit_int32(0);
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
  for (idx11 = 0; idx11 < 50; idx11++) {
    outC->Message_out.OptionalPackets[idx11] = kcg_lit_int32(0);
  }
  outC->Stacksize_new = kcg_lit_int32(0);
  for (idx13 = 0; idx13 < 100; idx13++) {
    outC->Buffer_Out[idx13].Message.valid = kcg_true;
    outC->Buffer_Out[idx13].Message.nid_message = kcg_lit_int32(0);
    outC->Buffer_Out[idx13].Message.l_message = kcg_lit_int32(0);
    outC->Buffer_Out[idx13].Message.t_train = kcg_lit_int32(0);
    outC->Buffer_Out[idx13].Message.nid_engine = kcg_lit_int32(0);
    outC->Buffer_Out[idx13].Message.field1 = kcg_lit_int32(0);
    outC->Buffer_Out[idx13].Message.field2 = kcg_lit_int32(0);
    outC->Buffer_Out[idx13].Message.field3 = kcg_lit_int32(0);
    for (idx12 = 0; idx12 < 50; idx12++) {
      outC->Buffer_Out[idx13].OptionalPackets[idx12] = kcg_lit_int32(0);
    }
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void BufferOutput_write_only1_reset_TM_lib_internal(
  outC_BufferOutput_write_only1_TM_lib_internal *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** BufferOutput_write_only1_TM_lib_internal.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

