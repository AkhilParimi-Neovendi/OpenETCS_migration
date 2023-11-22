/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckSpace_TM_TrainTrack_Bus.h"

/* TM_TrainTrack_Bus::CheckSpace/ */
void CheckSpace_TM_TrainTrack_Bus(
  /* MessageBus/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  outC_CheckSpace_TM_TrainTrack_Bus *outC)
{
  kcg_size idx;
  kcg_int32 acc;
  kcg_size idx1;
  kcg_int32 noname;

  outC->_L8 = BusWidth_TM_TrainTrack_Bus;
  outC->_L5 = kcg_lit_int32(0);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&outC->_L1, MessageBus);
  /* _L6/ */
  for (idx = 0; idx < 5; idx++) {
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->_L6[idx],
      &outC->_L1);
  }
  outC->_L3 = kcg_true;
  outC->_L4 = outC->_L5;
  /* _L2= */
  if (outC->_L3) {
    /* _L2= */
    for (idx1 = 0; idx1 < 5; idx1++) {
      acc = outC->_L4;
      /* _L2=(TM_TrainTrack_Bus::CheckSpaceLoop#1)/ */
      CheckSpaceLoop_TM_TrainTrack_Bus(
        /* _L2= */(kcg_int32) idx1,
        acc,
        &outC->_L6[idx1],
        &outC->Context_CheckSpaceLoop_1[idx1]);
      outC->_L4 = outC->Context_CheckSpaceLoop_1[idx1].Count;
      outC->_L2 = /* _L2= */(kcg_int32) (idx1 + 1);
      /* _L2= */
      if (!outC->Context_CheckSpaceLoop_1[idx1].cont) {
        break;
      }
    }
  }
  else {
    outC->_L2 = kcg_lit_int32(0);
  }
  outC->_L9 = outC->_L4 >= outC->_L8;
  noname = outC->_L2;
  outC->SlotsUsed = outC->_L4;
  outC->Busy = outC->_L9;
}

#ifndef KCG_USER_DEFINED_INIT
void CheckSpace_init_TM_TrainTrack_Bus(outC_CheckSpace_TM_TrainTrack_Bus *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;

  outC->_L9 = kcg_true;
  outC->_L8 = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 5; idx3++) {
    for (idx2 = 0; idx2 < 5; idx2++) {
      outC->_L6[idx3][idx2].Message.valid = kcg_true;
      outC->_L6[idx3][idx2].Message.nid_message = kcg_lit_int32(0);
      outC->_L6[idx3][idx2].Message.l_message = kcg_lit_int32(0);
      outC->_L6[idx3][idx2].Message.t_train = kcg_lit_int32(0);
      outC->_L6[idx3][idx2].Message.nid_engine = kcg_lit_int32(0);
      outC->_L6[idx3][idx2].Message.field1 = kcg_lit_int32(0);
      outC->_L6[idx3][idx2].Message.field2 = kcg_lit_int32(0);
      outC->_L6[idx3][idx2].Message.field3 = kcg_lit_int32(0);
      for (idx1 = 0; idx1 < 50; idx1++) {
        outC->_L6[idx3][idx2].OptionalPackets[idx1] = kcg_lit_int32(0);
      }
    }
  }
  outC->_L5 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->_L3 = kcg_true;
  outC->_L2 = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 5; idx5++) {
    outC->_L1[idx5].Message.valid = kcg_true;
    outC->_L1[idx5].Message.nid_message = kcg_lit_int32(0);
    outC->_L1[idx5].Message.l_message = kcg_lit_int32(0);
    outC->_L1[idx5].Message.t_train = kcg_lit_int32(0);
    outC->_L1[idx5].Message.nid_engine = kcg_lit_int32(0);
    outC->_L1[idx5].Message.field1 = kcg_lit_int32(0);
    outC->_L1[idx5].Message.field2 = kcg_lit_int32(0);
    outC->_L1[idx5].Message.field3 = kcg_lit_int32(0);
    for (idx4 = 0; idx4 < 50; idx4++) {
      outC->_L1[idx5].OptionalPackets[idx4] = kcg_lit_int32(0);
    }
  }
  outC->SlotsUsed = kcg_lit_int32(0);
  outC->Busy = kcg_true;
  for (idx = 0; idx < 5; idx++) {
    /* _L2=(TM_TrainTrack_Bus::CheckSpaceLoop#1)/ */
    CheckSpaceLoop_init_TM_TrainTrack_Bus(&outC->Context_CheckSpaceLoop_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CheckSpace_reset_TM_TrainTrack_Bus(outC_CheckSpace_TM_TrainTrack_Bus *outC)
{
  kcg_size idx;

  for (idx = 0; idx < 5; idx++) {
    /* _L2=(TM_TrainTrack_Bus::CheckSpaceLoop#1)/ */
    CheckSpaceLoop_reset_TM_TrainTrack_Bus(
      &outC->Context_CheckSpaceLoop_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CheckSpace_TM_TrainTrack_Bus.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

