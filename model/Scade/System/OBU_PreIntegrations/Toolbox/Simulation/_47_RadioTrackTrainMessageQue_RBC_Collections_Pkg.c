/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_47_RadioTrackTrainMessageQue_RBC_Collections_Pkg.h"

/* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity_Iterable/ */
void _47_RadioTrackTrainMessageQue_RBC_Collections_Pkg(
  /* inIndex/ */
  kcg_int32 inIndex,
  /* inAccumulator/ */
  kcg_int32 inAccumulator,
  /* inRadioTrackTrainMessageQueueEntry/ */
  RadioTrackTrainMessageQueueEntry_T *inRadioTrackTrainMessageQueueEntry,
  outC__47_RadioTrackTrainMessageQue_RBC_Collections_Pkg *outC)
{
  kcg_int32 noname;

  outC->_L33 = inIndex;
  outC->_L27 = inAccumulator;
  noname = outC->_L27;
  outC->outAccumulator = outC->_L33;
  outC->_L25 = kcg_false;
  outC->_L24 = kcg_true;
  kcg_copy_RadioTrackTrainMessageQueueEntry_T(
    &outC->_L5,
    inRadioTrackTrainMessageQueueEntry);
  /* _L6=(RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__IsValid#1)/ */
  _46_RadioTrackTrainMessageQue_RBC_Collections_Pkg(
    &outC->_L5,
    &outC->Context_RadioTrackTrainMessageQueueEntry__IsValid_1);
  outC->_L6 =
    outC->Context_RadioTrackTrainMessageQueueEntry__IsValid_1.outIsValid;
  /* _L13= */
  if (outC->_L6) {
    outC->_L13 = outC->_L24;
  }
  else {
    outC->_L13 = outC->_L25;
  }
  outC->outContinue = outC->_L13;
}

#ifndef KCG_USER_DEFINED_INIT
void _47_RadioTrackTrainMessageQue_init_RBC_Collections_Pkg(
  outC__47_RadioTrackTrainMessageQue_RBC_Collections_Pkg *outC)
{
  kcg_size idx;
  kcg_size idx1;

  outC->_L33 = kcg_lit_int32(0);
  outC->_L27 = kcg_lit_int32(0);
  outC->_L25 = kcg_true;
  outC->_L24 = kcg_true;
  outC->_L13 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L5.m_IsValid = kcg_true;
  outC->_L5.m_Entry.Header.radioDevice = kcg_lit_int32(0);
  outC->_L5.m_Entry.Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L5.m_Entry.Header.nid_message = kcg_lit_int32(0);
  outC->_L5.m_Entry.Header.t_train = kcg_lit_int32(0);
  outC->_L5.m_Entry.Header.m_ack = kcg_lit_int32(0);
  outC->_L5.m_Entry.Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L5.m_Entry.Header.t_train_reference = kcg_lit_int32(0);
  outC->_L5.m_Entry.Header.nid_em = kcg_lit_int32(0);
  outC->_L5.m_Entry.Header.q_scale = kcg_lit_int32(0);
  outC->_L5.m_Entry.Header.d_sr = kcg_lit_int32(0);
  outC->_L5.m_Entry.Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L5.m_Entry.Header.d_ref = kcg_lit_int32(0);
  outC->_L5.m_Entry.Header.q_dir = kcg_lit_int32(0);
  outC->_L5.m_Entry.Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L5.m_Entry.Header.m_version = kcg_lit_int32(0);
  for (idx = 0; idx < 30; idx++) {
    outC->_L5.m_Entry.Messages.PacketHeaders[idx].nid_packet = kcg_lit_int32(0);
    outC->_L5.m_Entry.Messages.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L5.m_Entry.Messages.PacketHeaders[idx].valid = kcg_true;
    outC->_L5.m_Entry.Messages.PacketHeaders[idx].startAddress = kcg_lit_int32(0);
    outC->_L5.m_Entry.Messages.PacketHeaders[idx].endAddress = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L5.m_Entry.Messages.PacketData[idx1] = kcg_lit_int32(0);
  }
  outC->outAccumulator = kcg_lit_int32(0);
  outC->outContinue = kcg_true;
  /* _L6=(RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__IsValid#1)/ */
  _46_RadioTrackTrainMessageQue_init_RBC_Collections_Pkg(
    &outC->Context_RadioTrackTrainMessageQueueEntry__IsValid_1);
}
#endif /* KCG_USER_DEFINED_INIT */


void _47_RadioTrackTrainMessageQue_reset_RBC_Collections_Pkg(
  outC__47_RadioTrackTrainMessageQue_RBC_Collections_Pkg *outC)
{
  /* _L6=(RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__IsValid#1)/ */
  _46_RadioTrackTrainMessageQue_reset_RBC_Collections_Pkg(
    &outC->Context_RadioTrackTrainMessageQueueEntry__IsValid_1);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** _47_RadioTrackTrainMessageQue_RBC_Collections_Pkg.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

