/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_146_RadioTrackTrainMessa_RBC_Collections_Pkg.h"

/* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take_Iterable/ */
void _146_RadioTrackTrainMessa_RBC_Collections_Pkg(
  /* inIndex/ */
  kcg_int32 inIndex,
  /* inAccumulator/ */
  kcg_int32 inAccumulator,
  /* inRadioTrackTrainMessageQueueEntry/ */
  RadioTrackTrainMessageQueueEntry_T *inRadioTrackTrainMessageQueueEntry,
  outC__146_RadioTrackTrainMessa_RBC_Collections_Pkg *outC)
{
  kcg_int32 noname;

  kcg_copy_RadioTrackTrainMessageQueueEntry_T(
    &outC->_L3,
    inRadioTrackTrainMessageQueueEntry);
  outC->_L7 = kcg_true;
  outC->_L6 = kcg_false;
  /* _L4=(RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__IsValid#1)/ */
  _46_RadioTrackTrainMessageQue_RBC_Collections_Pkg(
    &outC->_L3,
    &outC->Context_RadioTrackTrainMessageQueueEntry__IsValid_1);
  outC->_L4 =
    outC->Context_RadioTrackTrainMessageQueueEntry__IsValid_1.outIsValid;
  /* _L5= */
  if (outC->_L4) {
    outC->_L5 = outC->_L6;
  }
  else {
    outC->_L5 = outC->_L7;
  }
  outC->outContinueIteration = outC->_L5;
  outC->_L1 = inIndex;
  outC->outAccumulator = outC->_L1;
  outC->_L2 = inAccumulator;
  noname = outC->_L2;
}

#ifndef KCG_USER_DEFINED_INIT
void _146_RadioTrackTrainMessa_init_RBC_Collections_Pkg(
  outC__146_RadioTrackTrainMessa_RBC_Collections_Pkg *outC)
{
  kcg_size idx;
  kcg_size idx1;

  outC->_L3.m_IsValid = kcg_true;
  outC->_L3.m_Entry.Header.radioDevice = kcg_lit_int32(0);
  outC->_L3.m_Entry.Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L3.m_Entry.Header.nid_message = kcg_lit_int32(0);
  outC->_L3.m_Entry.Header.t_train = kcg_lit_int32(0);
  outC->_L3.m_Entry.Header.m_ack = kcg_lit_int32(0);
  outC->_L3.m_Entry.Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L3.m_Entry.Header.t_train_reference = kcg_lit_int32(0);
  outC->_L3.m_Entry.Header.nid_em = kcg_lit_int32(0);
  outC->_L3.m_Entry.Header.q_scale = kcg_lit_int32(0);
  outC->_L3.m_Entry.Header.d_sr = kcg_lit_int32(0);
  outC->_L3.m_Entry.Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L3.m_Entry.Header.d_ref = kcg_lit_int32(0);
  outC->_L3.m_Entry.Header.q_dir = kcg_lit_int32(0);
  outC->_L3.m_Entry.Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L3.m_Entry.Header.m_version = kcg_lit_int32(0);
  for (idx = 0; idx < 30; idx++) {
    outC->_L3.m_Entry.Messages.PacketHeaders[idx].nid_packet = kcg_lit_int32(0);
    outC->_L3.m_Entry.Messages.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L3.m_Entry.Messages.PacketHeaders[idx].valid = kcg_true;
    outC->_L3.m_Entry.Messages.PacketHeaders[idx].startAddress = kcg_lit_int32(0);
    outC->_L3.m_Entry.Messages.PacketHeaders[idx].endAddress = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L3.m_Entry.Messages.PacketData[idx1] = kcg_lit_int32(0);
  }
  outC->_L7 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L2 = kcg_lit_int32(0);
  outC->_L1 = kcg_lit_int32(0);
  outC->outAccumulator = kcg_lit_int32(0);
  outC->outContinueIteration = kcg_true;
  /* _L4=(RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__IsValid#1)/ */
  _46_RadioTrackTrainMessageQue_init_RBC_Collections_Pkg(
    &outC->Context_RadioTrackTrainMessageQueueEntry__IsValid_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void _146_RadioTrackTrainMessa_reset_RBC_Collections_Pkg(
  outC__146_RadioTrackTrainMessa_RBC_Collections_Pkg *outC)
{
  /* _L4=(RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__IsValid#1)/ */
  _46_RadioTrackTrainMessageQue_reset_RBC_Collections_Pkg(
    &outC->Context_RadioTrackTrainMessageQueueEntry__IsValid_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** _146_RadioTrackTrainMessa_RBC_Collections_Pkg.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

