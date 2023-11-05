/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainMessageQueueEntry__IsValid_RBC_Collections_Pkg.h"

/* RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__IsValid/ */
void RadioTrackTrainMessageQueueEntry__IsValid_RBC_Collections_Pkg(
  /* inRadioTrackTrainMessageQueueEntry/ */
  RadioTrackTrainMessageQueueEntry_T *inRadioTrackTrainMessageQueueEntry,
  outC_RadioTrackTrainMessageQueueEntry__IsValid_RBC_Collections_Pkg *outC)
{
  kcg_copy_RadioTrackTrainMessageQueueEntry_T(
    &outC->_L1,
    inRadioTrackTrainMessageQueueEntry);
  outC->_L2 = outC->_L1.m_IsValid;
  outC->outIsValid = outC->_L2;
}

#ifndef KCG_USER_DEFINED_INIT
void RadioTrackTrainMessageQueueEntry__IsValid_init_RBC_Collections_Pkg(
  outC_RadioTrackTrainMessageQueueEntry__IsValid_RBC_Collections_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L2 = kcg_true;
  outC->_L1.m_IsValid = kcg_true;
  outC->_L1.m_Entry.Header.radioDevice = kcg_lit_int32(0);
  outC->_L1.m_Entry.Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L1.m_Entry.Header.nid_message = kcg_lit_int32(0);
  outC->_L1.m_Entry.Header.t_train = kcg_lit_int32(0);
  outC->_L1.m_Entry.Header.m_ack = kcg_lit_int32(0);
  outC->_L1.m_Entry.Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L1.m_Entry.Header.t_train_reference = kcg_lit_int32(0);
  outC->_L1.m_Entry.Header.nid_em = kcg_lit_int32(0);
  outC->_L1.m_Entry.Header.q_scale = kcg_lit_int32(0);
  outC->_L1.m_Entry.Header.d_sr = kcg_lit_int32(0);
  outC->_L1.m_Entry.Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L1.m_Entry.Header.d_ref = kcg_lit_int32(0);
  outC->_L1.m_Entry.Header.q_dir = kcg_lit_int32(0);
  outC->_L1.m_Entry.Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L1.m_Entry.Header.m_version = kcg_lit_int32(0);
  for (idx = 0; idx < 30; idx++) {
    outC->_L1.m_Entry.Messages.PacketHeaders[idx].nid_packet = kcg_lit_int32(0);
    outC->_L1.m_Entry.Messages.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L1.m_Entry.Messages.PacketHeaders[idx].valid = kcg_true;
    outC->_L1.m_Entry.Messages.PacketHeaders[idx].startAddress = kcg_lit_int32(0);
    outC->_L1.m_Entry.Messages.PacketHeaders[idx].endAddress = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L1.m_Entry.Messages.PacketData[idx1] = kcg_lit_int32(0);
  }
  outC->outIsValid = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


void RadioTrackTrainMessageQueueEntry__IsValid_reset_RBC_Collections_Pkg(
  outC_RadioTrackTrainMessageQueueEntry__IsValid_RBC_Collections_Pkg *outC)
{
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RadioTrackTrainMessageQueueEntry__IsValid_RBC_Collections_Pkg.c
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

