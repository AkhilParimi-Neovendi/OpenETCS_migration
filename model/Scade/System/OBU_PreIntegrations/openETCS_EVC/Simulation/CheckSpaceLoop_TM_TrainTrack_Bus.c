/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckSpaceLoop_TM_TrainTrack_Bus.h"

/* TM_TrainTrack_Bus::CheckSpaceLoop/ */
void CheckSpaceLoop_TM_TrainTrack_Bus(
  /* i/ */
  kcg_int32 i,
  /* Acc/ */
  kcg_int32 Acc,
  /* Message/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *Message,
  outC_CheckSpaceLoop_TM_TrainTrack_Bus *outC)
{
  outC->_L20 = kcg_true;
  outC->_L3 = Acc;
  outC->_L18 = kcg_lit_int32(0);
  outC->_L17 = kcg_lit_int32(1);
  outC->_L2 = i;
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&outC->_L1, Message);
  if ((kcg_lit_int32(0) <= outC->_L2) & (outC->_L2 < kcg_lit_int32(5))) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &outC->_L8,
      &outC->_L1[outC->_L2]);
  }
  else {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &outC->_L8,
      (M_TrainTrack_Message_T_TM_radio_messages *)
        &DEFAULT_TrainToTrackMessage_TM_radio_messages);
  }
  outC->_L9 = outC->_L8.Message.valid;
  /* _L16= */
  if (outC->_L9) {
    outC->_L16 = outC->_L17;
  }
  else {
    outC->_L16 = outC->_L18;
  }
  outC->_L19 = outC->_L16 + outC->_L3;
  outC->Count = outC->_L19;
  outC->cont = outC->_L20;
}

#ifndef KCG_USER_DEFINED_INIT
void CheckSpaceLoop_init_TM_TrainTrack_Bus(
  outC_CheckSpaceLoop_TM_TrainTrack_Bus *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;

  outC->_L20 = kcg_true;
  outC->_L19 = kcg_lit_int32(0);
  outC->_L18 = kcg_lit_int32(0);
  outC->_L17 = kcg_lit_int32(0);
  outC->_L16 = kcg_lit_int32(0);
  outC->_L9 = kcg_true;
  outC->_L8.Message.valid = kcg_true;
  outC->_L8.Message.nid_message = kcg_lit_int32(0);
  outC->_L8.Message.l_message = kcg_lit_int32(0);
  outC->_L8.Message.t_train = kcg_lit_int32(0);
  outC->_L8.Message.nid_engine = kcg_lit_int32(0);
  outC->_L8.Message.field1 = kcg_lit_int32(0);
  outC->_L8.Message.field2 = kcg_lit_int32(0);
  outC->_L8.Message.field3 = kcg_lit_int32(0);
  for (idx = 0; idx < 50; idx++) {
    outC->_L8.OptionalPackets[idx] = kcg_lit_int32(0);
  }
  outC->_L3 = kcg_lit_int32(0);
  outC->_L2 = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 5; idx2++) {
    outC->_L1[idx2].Message.valid = kcg_true;
    outC->_L1[idx2].Message.nid_message = kcg_lit_int32(0);
    outC->_L1[idx2].Message.l_message = kcg_lit_int32(0);
    outC->_L1[idx2].Message.t_train = kcg_lit_int32(0);
    outC->_L1[idx2].Message.nid_engine = kcg_lit_int32(0);
    outC->_L1[idx2].Message.field1 = kcg_lit_int32(0);
    outC->_L1[idx2].Message.field2 = kcg_lit_int32(0);
    outC->_L1[idx2].Message.field3 = kcg_lit_int32(0);
    for (idx1 = 0; idx1 < 50; idx1++) {
      outC->_L1[idx2].OptionalPackets[idx1] = kcg_lit_int32(0);
    }
  }
  outC->Count = kcg_lit_int32(0);
  outC->cont = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CheckSpaceLoop_reset_TM_TrainTrack_Bus(
  outC_CheckSpaceLoop_TM_TrainTrack_Bus *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CheckSpaceLoop_TM_TrainTrack_Bus.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

