/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "probe_RadioOutput_RadioSupport_Pkg.h"

/* RadioSupport_Pkg::probe_RadioOutput/ */
void probe_RadioOutput_RadioSupport_Pkg(
  /* MessageBus/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  outC_probe_RadioOutput_RadioSupport_Pkg *outC)
{
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->_L28,
    (M_TrainTrack_Message_T_TM_radio_messages *) &cEmptyMsg_RadioSupport_Pkg);
  outC->_L27 = kcg_lit_int32(4);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&outC->_L1, MessageBus);
  if ((kcg_lit_int32(0) <= outC->_L27) & (outC->_L27 < kcg_lit_int32(5))) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &outC->_L30,
      &outC->_L1[outC->_L27]);
  }
  else {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&outC->_L30, &outC->_L28);
  }
  kcg_copy_M_TrainTrack_MessageHd_T_TM_radio_messages(
    &outC->_L29,
    &outC->_L30.Message);
  outC->_L31 = outC->_L29.nid_message;
  outC->msg5 = outC->_L31;
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->_L23,
    (M_TrainTrack_Message_T_TM_radio_messages *) &cEmptyMsg_RadioSupport_Pkg);
  outC->_L26 = kcg_lit_int32(3);
  if ((kcg_lit_int32(0) <= outC->_L26) & (outC->_L26 < kcg_lit_int32(5))) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &outC->_L25,
      &outC->_L1[outC->_L26]);
  }
  else {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&outC->_L25, &outC->_L23);
  }
  kcg_copy_M_TrainTrack_MessageHd_T_TM_radio_messages(
    &outC->_L24,
    &outC->_L25.Message);
  outC->_L22 = outC->_L24.nid_message;
  outC->msg4 = outC->_L22;
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->_L12,
    (M_TrainTrack_Message_T_TM_radio_messages *) &cEmptyMsg_RadioSupport_Pkg);
  outC->_L15 = kcg_lit_int32(2);
  if ((kcg_lit_int32(0) <= outC->_L15) & (outC->_L15 < kcg_lit_int32(5))) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &outC->_L13,
      &outC->_L1[outC->_L15]);
  }
  else {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&outC->_L13, &outC->_L12);
  }
  kcg_copy_M_TrainTrack_MessageHd_T_TM_radio_messages(
    &outC->_L14,
    &outC->_L13.Message);
  outC->_L16 = outC->_L14.nid_message;
  outC->msg3 = outC->_L16;
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->_L10,
    (M_TrainTrack_Message_T_TM_radio_messages *) &cEmptyMsg_RadioSupport_Pkg);
  outC->_L9 = kcg_lit_int32(1);
  if ((kcg_lit_int32(0) <= outC->_L9) & (outC->_L9 < kcg_lit_int32(5))) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &outC->_L7,
      &outC->_L1[outC->_L9]);
  }
  else {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&outC->_L7, &outC->_L10);
  }
  kcg_copy_M_TrainTrack_MessageHd_T_TM_radio_messages(
    &outC->_L8,
    &outC->_L7.Message);
  outC->_L11 = outC->_L8.nid_message;
  outC->msg2 = outC->_L11;
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->_L4,
    (M_TrainTrack_Message_T_TM_radio_messages *) &cEmptyMsg_RadioSupport_Pkg);
  outC->_L3 = kcg_lit_int32(0);
  if ((kcg_lit_int32(0) <= outC->_L3) & (outC->_L3 < kcg_lit_int32(5))) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &outC->_L2,
      &outC->_L1[outC->_L3]);
  }
  else {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&outC->_L2, &outC->_L4);
  }
  kcg_copy_M_TrainTrack_MessageHd_T_TM_radio_messages(
    &outC->_L5,
    &outC->_L2.Message);
  outC->_L6 = outC->_L5.nid_message;
  outC->msg1 = outC->_L6;
}

#ifndef KCG_USER_DEFINED_INIT
void probe_RadioOutput_init_RadioSupport_Pkg(
  outC_probe_RadioOutput_RadioSupport_Pkg *outC)
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
  kcg_size idx10;
  kcg_size idx11;

  outC->_L27 = kcg_lit_int32(0);
  outC->_L28.Message.valid = kcg_true;
  outC->_L28.Message.nid_message = kcg_lit_int32(0);
  outC->_L28.Message.l_message = kcg_lit_int32(0);
  outC->_L28.Message.t_train = kcg_lit_int32(0);
  outC->_L28.Message.nid_engine = kcg_lit_int32(0);
  outC->_L28.Message.field1 = kcg_lit_int32(0);
  outC->_L28.Message.field2 = kcg_lit_int32(0);
  outC->_L28.Message.field3 = kcg_lit_int32(0);
  for (idx = 0; idx < 50; idx++) {
    outC->_L28.OptionalPackets[idx] = kcg_lit_int32(0);
  }
  outC->_L29.valid = kcg_true;
  outC->_L29.nid_message = kcg_lit_int32(0);
  outC->_L29.l_message = kcg_lit_int32(0);
  outC->_L29.t_train = kcg_lit_int32(0);
  outC->_L29.nid_engine = kcg_lit_int32(0);
  outC->_L29.field1 = kcg_lit_int32(0);
  outC->_L29.field2 = kcg_lit_int32(0);
  outC->_L29.field3 = kcg_lit_int32(0);
  outC->_L30.Message.valid = kcg_true;
  outC->_L30.Message.nid_message = kcg_lit_int32(0);
  outC->_L30.Message.l_message = kcg_lit_int32(0);
  outC->_L30.Message.t_train = kcg_lit_int32(0);
  outC->_L30.Message.nid_engine = kcg_lit_int32(0);
  outC->_L30.Message.field1 = kcg_lit_int32(0);
  outC->_L30.Message.field2 = kcg_lit_int32(0);
  outC->_L30.Message.field3 = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 50; idx1++) {
    outC->_L30.OptionalPackets[idx1] = kcg_lit_int32(0);
  }
  outC->_L31 = kcg_lit_int32(0);
  outC->_L22 = kcg_lit_int32(0);
  outC->_L23.Message.valid = kcg_true;
  outC->_L23.Message.nid_message = kcg_lit_int32(0);
  outC->_L23.Message.l_message = kcg_lit_int32(0);
  outC->_L23.Message.t_train = kcg_lit_int32(0);
  outC->_L23.Message.nid_engine = kcg_lit_int32(0);
  outC->_L23.Message.field1 = kcg_lit_int32(0);
  outC->_L23.Message.field2 = kcg_lit_int32(0);
  outC->_L23.Message.field3 = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 50; idx2++) {
    outC->_L23.OptionalPackets[idx2] = kcg_lit_int32(0);
  }
  outC->_L24.valid = kcg_true;
  outC->_L24.nid_message = kcg_lit_int32(0);
  outC->_L24.l_message = kcg_lit_int32(0);
  outC->_L24.t_train = kcg_lit_int32(0);
  outC->_L24.nid_engine = kcg_lit_int32(0);
  outC->_L24.field1 = kcg_lit_int32(0);
  outC->_L24.field2 = kcg_lit_int32(0);
  outC->_L24.field3 = kcg_lit_int32(0);
  outC->_L25.Message.valid = kcg_true;
  outC->_L25.Message.nid_message = kcg_lit_int32(0);
  outC->_L25.Message.l_message = kcg_lit_int32(0);
  outC->_L25.Message.t_train = kcg_lit_int32(0);
  outC->_L25.Message.nid_engine = kcg_lit_int32(0);
  outC->_L25.Message.field1 = kcg_lit_int32(0);
  outC->_L25.Message.field2 = kcg_lit_int32(0);
  outC->_L25.Message.field3 = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 50; idx3++) {
    outC->_L25.OptionalPackets[idx3] = kcg_lit_int32(0);
  }
  outC->_L26 = kcg_lit_int32(0);
  outC->_L12.Message.valid = kcg_true;
  outC->_L12.Message.nid_message = kcg_lit_int32(0);
  outC->_L12.Message.l_message = kcg_lit_int32(0);
  outC->_L12.Message.t_train = kcg_lit_int32(0);
  outC->_L12.Message.nid_engine = kcg_lit_int32(0);
  outC->_L12.Message.field1 = kcg_lit_int32(0);
  outC->_L12.Message.field2 = kcg_lit_int32(0);
  outC->_L12.Message.field3 = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 50; idx4++) {
    outC->_L12.OptionalPackets[idx4] = kcg_lit_int32(0);
  }
  outC->_L13.Message.valid = kcg_true;
  outC->_L13.Message.nid_message = kcg_lit_int32(0);
  outC->_L13.Message.l_message = kcg_lit_int32(0);
  outC->_L13.Message.t_train = kcg_lit_int32(0);
  outC->_L13.Message.nid_engine = kcg_lit_int32(0);
  outC->_L13.Message.field1 = kcg_lit_int32(0);
  outC->_L13.Message.field2 = kcg_lit_int32(0);
  outC->_L13.Message.field3 = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 50; idx5++) {
    outC->_L13.OptionalPackets[idx5] = kcg_lit_int32(0);
  }
  outC->_L14.valid = kcg_true;
  outC->_L14.nid_message = kcg_lit_int32(0);
  outC->_L14.l_message = kcg_lit_int32(0);
  outC->_L14.t_train = kcg_lit_int32(0);
  outC->_L14.nid_engine = kcg_lit_int32(0);
  outC->_L14.field1 = kcg_lit_int32(0);
  outC->_L14.field2 = kcg_lit_int32(0);
  outC->_L14.field3 = kcg_lit_int32(0);
  outC->_L15 = kcg_lit_int32(0);
  outC->_L16 = kcg_lit_int32(0);
  outC->_L7.Message.valid = kcg_true;
  outC->_L7.Message.nid_message = kcg_lit_int32(0);
  outC->_L7.Message.l_message = kcg_lit_int32(0);
  outC->_L7.Message.t_train = kcg_lit_int32(0);
  outC->_L7.Message.nid_engine = kcg_lit_int32(0);
  outC->_L7.Message.field1 = kcg_lit_int32(0);
  outC->_L7.Message.field2 = kcg_lit_int32(0);
  outC->_L7.Message.field3 = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 50; idx6++) {
    outC->_L7.OptionalPackets[idx6] = kcg_lit_int32(0);
  }
  outC->_L8.valid = kcg_true;
  outC->_L8.nid_message = kcg_lit_int32(0);
  outC->_L8.l_message = kcg_lit_int32(0);
  outC->_L8.t_train = kcg_lit_int32(0);
  outC->_L8.nid_engine = kcg_lit_int32(0);
  outC->_L8.field1 = kcg_lit_int32(0);
  outC->_L8.field2 = kcg_lit_int32(0);
  outC->_L8.field3 = kcg_lit_int32(0);
  outC->_L9 = kcg_lit_int32(0);
  outC->_L10.Message.valid = kcg_true;
  outC->_L10.Message.nid_message = kcg_lit_int32(0);
  outC->_L10.Message.l_message = kcg_lit_int32(0);
  outC->_L10.Message.t_train = kcg_lit_int32(0);
  outC->_L10.Message.nid_engine = kcg_lit_int32(0);
  outC->_L10.Message.field1 = kcg_lit_int32(0);
  outC->_L10.Message.field2 = kcg_lit_int32(0);
  outC->_L10.Message.field3 = kcg_lit_int32(0);
  for (idx7 = 0; idx7 < 50; idx7++) {
    outC->_L10.OptionalPackets[idx7] = kcg_lit_int32(0);
  }
  outC->_L11 = kcg_lit_int32(0);
  outC->_L6 = kcg_lit_int32(0);
  outC->_L5.valid = kcg_true;
  outC->_L5.nid_message = kcg_lit_int32(0);
  outC->_L5.l_message = kcg_lit_int32(0);
  outC->_L5.t_train = kcg_lit_int32(0);
  outC->_L5.nid_engine = kcg_lit_int32(0);
  outC->_L5.field1 = kcg_lit_int32(0);
  outC->_L5.field2 = kcg_lit_int32(0);
  outC->_L5.field3 = kcg_lit_int32(0);
  outC->_L4.Message.valid = kcg_true;
  outC->_L4.Message.nid_message = kcg_lit_int32(0);
  outC->_L4.Message.l_message = kcg_lit_int32(0);
  outC->_L4.Message.t_train = kcg_lit_int32(0);
  outC->_L4.Message.nid_engine = kcg_lit_int32(0);
  outC->_L4.Message.field1 = kcg_lit_int32(0);
  outC->_L4.Message.field2 = kcg_lit_int32(0);
  outC->_L4.Message.field3 = kcg_lit_int32(0);
  for (idx8 = 0; idx8 < 50; idx8++) {
    outC->_L4.OptionalPackets[idx8] = kcg_lit_int32(0);
  }
  outC->_L3 = kcg_lit_int32(0);
  outC->_L2.Message.valid = kcg_true;
  outC->_L2.Message.nid_message = kcg_lit_int32(0);
  outC->_L2.Message.l_message = kcg_lit_int32(0);
  outC->_L2.Message.t_train = kcg_lit_int32(0);
  outC->_L2.Message.nid_engine = kcg_lit_int32(0);
  outC->_L2.Message.field1 = kcg_lit_int32(0);
  outC->_L2.Message.field2 = kcg_lit_int32(0);
  outC->_L2.Message.field3 = kcg_lit_int32(0);
  for (idx9 = 0; idx9 < 50; idx9++) {
    outC->_L2.OptionalPackets[idx9] = kcg_lit_int32(0);
  }
  for (idx11 = 0; idx11 < 5; idx11++) {
    outC->_L1[idx11].Message.valid = kcg_true;
    outC->_L1[idx11].Message.nid_message = kcg_lit_int32(0);
    outC->_L1[idx11].Message.l_message = kcg_lit_int32(0);
    outC->_L1[idx11].Message.t_train = kcg_lit_int32(0);
    outC->_L1[idx11].Message.nid_engine = kcg_lit_int32(0);
    outC->_L1[idx11].Message.field1 = kcg_lit_int32(0);
    outC->_L1[idx11].Message.field2 = kcg_lit_int32(0);
    outC->_L1[idx11].Message.field3 = kcg_lit_int32(0);
    for (idx10 = 0; idx10 < 50; idx10++) {
      outC->_L1[idx11].OptionalPackets[idx10] = kcg_lit_int32(0);
    }
  }
  outC->msg5 = kcg_lit_int32(0);
  outC->msg4 = kcg_lit_int32(0);
  outC->msg3 = kcg_lit_int32(0);
  outC->msg2 = kcg_lit_int32(0);
  outC->msg1 = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void probe_RadioOutput_reset_RadioSupport_Pkg(
  outC_probe_RadioOutput_RadioSupport_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** probe_RadioOutput_RadioSupport_Pkg.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

