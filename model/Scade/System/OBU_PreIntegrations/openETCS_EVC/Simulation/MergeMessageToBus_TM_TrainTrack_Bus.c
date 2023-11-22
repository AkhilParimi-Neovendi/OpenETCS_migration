/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MergeMessageToBus_TM_TrainTrack_Bus.h"

/* TM_TrainTrack_Bus::MergeMessageToBus/ */
void MergeMessageToBus_TM_TrainTrack_Bus(
  /* Message_in/ */
  M_TrainTrack_Message_T_TM_radio_messages *Message_in,
  /* slots_used/ */
  kcg_int32 slots_used,
  /* MessageBus/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* t_train_global/ */
  T_internal_Type_Obu_BasicTypes_Pkg t_train_global,
  outC_MergeMessageToBus_TM_TrainTrack_Bus *outC)
{
  outC->_L2 = t_train_global;
  outC->_L6 = Time_10ms_TM_TrainTrack_Bus;
  outC->_L1 = slots_used;
  outC->_L4 = outC->_L1 * outC->_L6;
  outC->_L3 = outC->_L4 + outC->_L2;
  outC->t_train_assigned = outC->_L3;
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&outC->_L13, MessageBus);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&outC->_L7, Message_in);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&outC->_L12, &outC->_L7);
  if (kcg_true) {
    outC->_L12.Message.t_train = outC->_L3;
  }
  outC->_L15 = slots_used;
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&outC->_L16, &outC->_L13);
  if ((kcg_lit_int32(0) <= outC->_L15) & (outC->_L15 < kcg_lit_int32(5))) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &outC->_L16[outC->_L15],
      &outC->_L12);
  }
  outC->_L14 = outC->_L12.Message.valid;
  /* _L17= */
  if (outC->_L14) {
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&outC->_L17, &outC->_L16);
  }
  else {
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&outC->_L17, &outC->_L13);
  }
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->MessageBus_out,
    &outC->_L17);
}

#ifndef KCG_USER_DEFINED_INIT
void MergeMessageToBus_init_TM_TrainTrack_Bus(
  outC_MergeMessageToBus_TM_TrainTrack_Bus *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;
  kcg_size idx6;
  kcg_size idx7;
  kcg_size idx8;
  kcg_size idx9;

  for (idx1 = 0; idx1 < 5; idx1++) {
    outC->_L17[idx1].Message.valid = kcg_true;
    outC->_L17[idx1].Message.nid_message = kcg_lit_int32(0);
    outC->_L17[idx1].Message.l_message = kcg_lit_int32(0);
    outC->_L17[idx1].Message.t_train = kcg_lit_int32(0);
    outC->_L17[idx1].Message.nid_engine = kcg_lit_int32(0);
    outC->_L17[idx1].Message.field1 = kcg_lit_int32(0);
    outC->_L17[idx1].Message.field2 = kcg_lit_int32(0);
    outC->_L17[idx1].Message.field3 = kcg_lit_int32(0);
    for (idx = 0; idx < 50; idx++) {
      outC->_L17[idx1].OptionalPackets[idx] = kcg_lit_int32(0);
    }
  }
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->_L16[idx3].Message.valid = kcg_true;
    outC->_L16[idx3].Message.nid_message = kcg_lit_int32(0);
    outC->_L16[idx3].Message.l_message = kcg_lit_int32(0);
    outC->_L16[idx3].Message.t_train = kcg_lit_int32(0);
    outC->_L16[idx3].Message.nid_engine = kcg_lit_int32(0);
    outC->_L16[idx3].Message.field1 = kcg_lit_int32(0);
    outC->_L16[idx3].Message.field2 = kcg_lit_int32(0);
    outC->_L16[idx3].Message.field3 = kcg_lit_int32(0);
    for (idx2 = 0; idx2 < 50; idx2++) {
      outC->_L16[idx3].OptionalPackets[idx2] = kcg_lit_int32(0);
    }
  }
  outC->_L15 = kcg_lit_int32(0);
  outC->_L14 = kcg_true;
  for (idx5 = 0; idx5 < 5; idx5++) {
    outC->_L13[idx5].Message.valid = kcg_true;
    outC->_L13[idx5].Message.nid_message = kcg_lit_int32(0);
    outC->_L13[idx5].Message.l_message = kcg_lit_int32(0);
    outC->_L13[idx5].Message.t_train = kcg_lit_int32(0);
    outC->_L13[idx5].Message.nid_engine = kcg_lit_int32(0);
    outC->_L13[idx5].Message.field1 = kcg_lit_int32(0);
    outC->_L13[idx5].Message.field2 = kcg_lit_int32(0);
    outC->_L13[idx5].Message.field3 = kcg_lit_int32(0);
    for (idx4 = 0; idx4 < 50; idx4++) {
      outC->_L13[idx5].OptionalPackets[idx4] = kcg_lit_int32(0);
    }
  }
  outC->_L12.Message.valid = kcg_true;
  outC->_L12.Message.nid_message = kcg_lit_int32(0);
  outC->_L12.Message.l_message = kcg_lit_int32(0);
  outC->_L12.Message.t_train = kcg_lit_int32(0);
  outC->_L12.Message.nid_engine = kcg_lit_int32(0);
  outC->_L12.Message.field1 = kcg_lit_int32(0);
  outC->_L12.Message.field2 = kcg_lit_int32(0);
  outC->_L12.Message.field3 = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 50; idx6++) {
    outC->_L12.OptionalPackets[idx6] = kcg_lit_int32(0);
  }
  outC->_L7.Message.valid = kcg_true;
  outC->_L7.Message.nid_message = kcg_lit_int32(0);
  outC->_L7.Message.l_message = kcg_lit_int32(0);
  outC->_L7.Message.t_train = kcg_lit_int32(0);
  outC->_L7.Message.nid_engine = kcg_lit_int32(0);
  outC->_L7.Message.field1 = kcg_lit_int32(0);
  outC->_L7.Message.field2 = kcg_lit_int32(0);
  outC->_L7.Message.field3 = kcg_lit_int32(0);
  for (idx7 = 0; idx7 < 50; idx7++) {
    outC->_L7.OptionalPackets[idx7] = kcg_lit_int32(0);
  }
  outC->_L6 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
  outC->_L2 = kcg_lit_int32(0);
  outC->_L1 = kcg_lit_int32(0);
  outC->t_train_assigned = kcg_lit_int32(0);
  for (idx9 = 0; idx9 < 5; idx9++) {
    outC->MessageBus_out[idx9].Message.valid = kcg_true;
    outC->MessageBus_out[idx9].Message.nid_message = kcg_lit_int32(0);
    outC->MessageBus_out[idx9].Message.l_message = kcg_lit_int32(0);
    outC->MessageBus_out[idx9].Message.t_train = kcg_lit_int32(0);
    outC->MessageBus_out[idx9].Message.nid_engine = kcg_lit_int32(0);
    outC->MessageBus_out[idx9].Message.field1 = kcg_lit_int32(0);
    outC->MessageBus_out[idx9].Message.field2 = kcg_lit_int32(0);
    outC->MessageBus_out[idx9].Message.field3 = kcg_lit_int32(0);
    for (idx8 = 0; idx8 < 50; idx8++) {
      outC->MessageBus_out[idx9].OptionalPackets[idx8] = kcg_lit_int32(0);
    }
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void MergeMessageToBus_reset_TM_TrainTrack_Bus(
  outC_MergeMessageToBus_TM_TrainTrack_Bus *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MergeMessageToBus_TM_TrainTrack_Bus.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

