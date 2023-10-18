/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BufferOutput_read_only_TM_lib_internal.h"

/* TM_lib_internal::BufferOutput_read_only/ */
void BufferOutput_read_only_TM_lib_internal(
  /* Buffer_In/ */
  M_TrainTrackRadioOutputBuffer_t_TM_lib_internal *Buffer_In,
  /* Stacksize_old/ */
  kcg_int64 Stacksize_old,
  /* Message_In/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *Message_In,
  outC_BufferOutput_read_only_TM_lib_internal *outC)
{
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus noname;

  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->_L22,
    (M_TrainTrack_Message_T_TM_radio_messages *)
      &EMPTY_TrainTrackMessage_TM_lib_internal);
  outC->_L8 = kcg_lit_int64(1);
  outC->_L2 = Stacksize_old;
  outC->_L9 = outC->_L2 - outC->_L8;
  outC->_L14 = kcg_lit_int64(0);
  outC->_L13 = outC->_L9 < outC->_L14;
  /* _L15= */
  if (outC->_L13) {
    outC->_L15 = outC->_L14;
  }
  else {
    outC->_L15 = outC->_L9;
  }
  outC->index = outC->_L15;
  outC->_L19 = outC->index;
  kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(&outC->_L1, Buffer_In);
  kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
    &outC->_L21,
    &outC->_L1);
  if ((kcg_lit_int64(0) <= outC->_L19) & (outC->_L19 < kcg_lit_int64(100))) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &outC->_L21[outC->_L19],
      &outC->_L22);
  }
  outC->_L18 = outC->index;
  if ((kcg_lit_int64(0) <= outC->_L18) & (outC->_L18 < kcg_lit_int64(100))) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &outC->_L12,
      &outC->_L1[outC->_L18]);
  }
  else {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &outC->_L12,
      (M_TrainTrack_Message_T_TM_radio_messages *)
        &EMPTY_TrainTrackMessage_TM_lib_internal);
  }
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->Message_out,
    &outC->_L12);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&outC->_L3, Message_In);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&noname, &outC->_L3);
  outC->Stacksize_new = outC->_L15;
  kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
    &outC->Buffer_Out,
    &outC->_L21);
}

#ifndef KCG_USER_DEFINED_INIT
void BufferOutput_read_only_init_TM_lib_internal(
  outC_BufferOutput_read_only_TM_lib_internal *outC)
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

  outC->_L22.Message.valid = kcg_true;
  outC->_L22.Message.nid_message = kcg_lit_int64(0);
  outC->_L22.Message.l_message = kcg_lit_int64(0);
  outC->_L22.Message.t_train = kcg_lit_int64(0);
  outC->_L22.Message.nid_engine = kcg_lit_int64(0);
  outC->_L22.Message.field1 = kcg_lit_int64(0);
  outC->_L22.Message.field2 = kcg_lit_int64(0);
  outC->_L22.Message.field3 = kcg_lit_int64(0);
  for (idx = 0; idx < 50; idx++) {
    outC->_L22.OptionalPackets[idx] = kcg_lit_int64(0);
  }
  for (idx2 = 0; idx2 < 100; idx2++) {
    outC->_L21[idx2].Message.valid = kcg_true;
    outC->_L21[idx2].Message.nid_message = kcg_lit_int64(0);
    outC->_L21[idx2].Message.l_message = kcg_lit_int64(0);
    outC->_L21[idx2].Message.t_train = kcg_lit_int64(0);
    outC->_L21[idx2].Message.nid_engine = kcg_lit_int64(0);
    outC->_L21[idx2].Message.field1 = kcg_lit_int64(0);
    outC->_L21[idx2].Message.field2 = kcg_lit_int64(0);
    outC->_L21[idx2].Message.field3 = kcg_lit_int64(0);
    for (idx1 = 0; idx1 < 50; idx1++) {
      outC->_L21[idx2].OptionalPackets[idx1] = kcg_lit_int64(0);
    }
  }
  outC->_L19 = kcg_lit_int64(0);
  outC->_L18 = kcg_lit_int64(0);
  outC->_L15 = kcg_lit_int64(0);
  outC->_L14 = kcg_lit_int64(0);
  outC->_L13 = kcg_true;
  outC->_L12.Message.valid = kcg_true;
  outC->_L12.Message.nid_message = kcg_lit_int64(0);
  outC->_L12.Message.l_message = kcg_lit_int64(0);
  outC->_L12.Message.t_train = kcg_lit_int64(0);
  outC->_L12.Message.nid_engine = kcg_lit_int64(0);
  outC->_L12.Message.field1 = kcg_lit_int64(0);
  outC->_L12.Message.field2 = kcg_lit_int64(0);
  outC->_L12.Message.field3 = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 50; idx3++) {
    outC->_L12.OptionalPackets[idx3] = kcg_lit_int64(0);
  }
  outC->_L9 = kcg_lit_int64(0);
  outC->_L8 = kcg_lit_int64(0);
  for (idx5 = 0; idx5 < 5; idx5++) {
    outC->_L3[idx5].Message.valid = kcg_true;
    outC->_L3[idx5].Message.nid_message = kcg_lit_int64(0);
    outC->_L3[idx5].Message.l_message = kcg_lit_int64(0);
    outC->_L3[idx5].Message.t_train = kcg_lit_int64(0);
    outC->_L3[idx5].Message.nid_engine = kcg_lit_int64(0);
    outC->_L3[idx5].Message.field1 = kcg_lit_int64(0);
    outC->_L3[idx5].Message.field2 = kcg_lit_int64(0);
    outC->_L3[idx5].Message.field3 = kcg_lit_int64(0);
    for (idx4 = 0; idx4 < 50; idx4++) {
      outC->_L3[idx5].OptionalPackets[idx4] = kcg_lit_int64(0);
    }
  }
  outC->_L2 = kcg_lit_int64(0);
  for (idx7 = 0; idx7 < 100; idx7++) {
    outC->_L1[idx7].Message.valid = kcg_true;
    outC->_L1[idx7].Message.nid_message = kcg_lit_int64(0);
    outC->_L1[idx7].Message.l_message = kcg_lit_int64(0);
    outC->_L1[idx7].Message.t_train = kcg_lit_int64(0);
    outC->_L1[idx7].Message.nid_engine = kcg_lit_int64(0);
    outC->_L1[idx7].Message.field1 = kcg_lit_int64(0);
    outC->_L1[idx7].Message.field2 = kcg_lit_int64(0);
    outC->_L1[idx7].Message.field3 = kcg_lit_int64(0);
    for (idx6 = 0; idx6 < 50; idx6++) {
      outC->_L1[idx7].OptionalPackets[idx6] = kcg_lit_int64(0);
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
  for (idx8 = 0; idx8 < 50; idx8++) {
    outC->Message_out.OptionalPackets[idx8] = kcg_lit_int64(0);
  }
  outC->Stacksize_new = kcg_lit_int64(0);
  for (idx10 = 0; idx10 < 100; idx10++) {
    outC->Buffer_Out[idx10].Message.valid = kcg_true;
    outC->Buffer_Out[idx10].Message.nid_message = kcg_lit_int64(0);
    outC->Buffer_Out[idx10].Message.l_message = kcg_lit_int64(0);
    outC->Buffer_Out[idx10].Message.t_train = kcg_lit_int64(0);
    outC->Buffer_Out[idx10].Message.nid_engine = kcg_lit_int64(0);
    outC->Buffer_Out[idx10].Message.field1 = kcg_lit_int64(0);
    outC->Buffer_Out[idx10].Message.field2 = kcg_lit_int64(0);
    outC->Buffer_Out[idx10].Message.field3 = kcg_lit_int64(0);
    for (idx9 = 0; idx9 < 50; idx9++) {
      outC->Buffer_Out[idx10].OptionalPackets[idx9] = kcg_lit_int64(0);
    }
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void BufferOutput_read_only_reset_TM_lib_internal(
  outC_BufferOutput_read_only_TM_lib_internal *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** BufferOutput_read_only_TM_lib_internal.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

