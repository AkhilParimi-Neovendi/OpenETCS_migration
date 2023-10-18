/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainMessageQueueEntry__GetEntry_RBC_Collections_Pkg.h"

/* RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__GetEntry/ */
void RadioTrackTrainMessageQueueEntry__GetEntry_RBC_Collections_Pkg(
  /* inRadioTrackTrainMessageQueueEntry/ */
  RadioTrackTrainMessageQueueEntry_T *inRadioTrackTrainMessageQueueEntry,
  outC_RadioTrackTrainMessageQueueEntry__GetEntry_RBC_Collections_Pkg *outC)
{
  kcg_copy_RadioTrackTrainMessageQueueEntry_T(
    &outC->_L1,
    inRadioTrackTrainMessageQueueEntry);
  kcg_copy_CompressedRadioMessage_TM(&outC->_L2, &outC->_L1.m_Entry);
  kcg_copy_CompressedRadioMessage_TM(
    &outC->outRadioTrackTrainMessage,
    &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void RadioTrackTrainMessageQueueEntry__GetEntry_init_RBC_Collections_Pkg(
  outC_RadioTrackTrainMessageQueueEntry__GetEntry_RBC_Collections_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;

  outC->_L2.Header.radioDevice = kcg_lit_int64(0);
  outC->_L2.Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L2.Header.nid_message = kcg_lit_int64(0);
  outC->_L2.Header.t_train = kcg_lit_int64(0);
  outC->_L2.Header.m_ack = kcg_lit_int64(0);
  outC->_L2.Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L2.Header.t_train_reference = kcg_lit_int64(0);
  outC->_L2.Header.nid_em = kcg_lit_int64(0);
  outC->_L2.Header.q_scale = kcg_lit_int64(0);
  outC->_L2.Header.d_sr = kcg_lit_int64(0);
  outC->_L2.Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L2.Header.d_ref = kcg_lit_int64(0);
  outC->_L2.Header.q_dir = kcg_lit_int64(0);
  outC->_L2.Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L2.Header.m_version = kcg_lit_int64(0);
  for (idx = 0; idx < 30; idx++) {
    outC->_L2.Messages.PacketHeaders[idx].nid_packet = kcg_lit_int64(0);
    outC->_L2.Messages.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L2.Messages.PacketHeaders[idx].valid = kcg_true;
    outC->_L2.Messages.PacketHeaders[idx].startAddress = kcg_lit_int64(0);
    outC->_L2.Messages.PacketHeaders[idx].endAddress = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L2.Messages.PacketData[idx1] = kcg_lit_int64(0);
  }
  outC->_L1.m_IsValid = kcg_true;
  outC->_L1.m_Entry.Header.radioDevice = kcg_lit_int64(0);
  outC->_L1.m_Entry.Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L1.m_Entry.Header.nid_message = kcg_lit_int64(0);
  outC->_L1.m_Entry.Header.t_train = kcg_lit_int64(0);
  outC->_L1.m_Entry.Header.m_ack = kcg_lit_int64(0);
  outC->_L1.m_Entry.Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L1.m_Entry.Header.t_train_reference = kcg_lit_int64(0);
  outC->_L1.m_Entry.Header.nid_em = kcg_lit_int64(0);
  outC->_L1.m_Entry.Header.q_scale = kcg_lit_int64(0);
  outC->_L1.m_Entry.Header.d_sr = kcg_lit_int64(0);
  outC->_L1.m_Entry.Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L1.m_Entry.Header.d_ref = kcg_lit_int64(0);
  outC->_L1.m_Entry.Header.q_dir = kcg_lit_int64(0);
  outC->_L1.m_Entry.Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L1.m_Entry.Header.m_version = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L1.m_Entry.Messages.PacketHeaders[idx2].nid_packet = kcg_lit_int64(0);
    outC->_L1.m_Entry.Messages.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L1.m_Entry.Messages.PacketHeaders[idx2].valid = kcg_true;
    outC->_L1.m_Entry.Messages.PacketHeaders[idx2].startAddress = kcg_lit_int64(0);
    outC->_L1.m_Entry.Messages.PacketHeaders[idx2].endAddress = kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L1.m_Entry.Messages.PacketData[idx3] = kcg_lit_int64(0);
  }
  outC->outRadioTrackTrainMessage.Header.radioDevice = kcg_lit_int64(0);
  outC->outRadioTrackTrainMessage.Header.receivedSystemTime = kcg_lit_int64(0);
  outC->outRadioTrackTrainMessage.Header.nid_message = kcg_lit_int64(0);
  outC->outRadioTrackTrainMessage.Header.t_train = kcg_lit_int64(0);
  outC->outRadioTrackTrainMessage.Header.m_ack = kcg_lit_int64(0);
  outC->outRadioTrackTrainMessage.Header.nid_lrbg = kcg_lit_int64(0);
  outC->outRadioTrackTrainMessage.Header.t_train_reference = kcg_lit_int64(0);
  outC->outRadioTrackTrainMessage.Header.nid_em = kcg_lit_int64(0);
  outC->outRadioTrackTrainMessage.Header.q_scale = kcg_lit_int64(0);
  outC->outRadioTrackTrainMessage.Header.d_sr = kcg_lit_int64(0);
  outC->outRadioTrackTrainMessage.Header.t_sh_rqst = kcg_lit_int64(0);
  outC->outRadioTrackTrainMessage.Header.d_ref = kcg_lit_int64(0);
  outC->outRadioTrackTrainMessage.Header.q_dir = kcg_lit_int64(0);
  outC->outRadioTrackTrainMessage.Header.d_emergencystop = kcg_lit_int64(0);
  outC->outRadioTrackTrainMessage.Header.m_version = kcg_lit_int64(0);
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->outRadioTrackTrainMessage.Messages.PacketHeaders[idx4].nid_packet =
      kcg_lit_int64(0);
    outC->outRadioTrackTrainMessage.Messages.PacketHeaders[idx4].q_dir =
      Q_DIR_Reverse;
    outC->outRadioTrackTrainMessage.Messages.PacketHeaders[idx4].valid = kcg_true;
    outC->outRadioTrackTrainMessage.Messages.PacketHeaders[idx4].startAddress =
      kcg_lit_int64(0);
    outC->outRadioTrackTrainMessage.Messages.PacketHeaders[idx4].endAddress =
      kcg_lit_int64(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->outRadioTrackTrainMessage.Messages.PacketData[idx5] = kcg_lit_int64(0);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RadioTrackTrainMessageQueueEntry__GetEntry_reset_RBC_Collections_Pkg(
  outC_RadioTrackTrainMessageQueueEntry__GetEntry_RBC_Collections_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RadioTrackTrainMessageQueueEntry__GetEntry_RBC_Collections_Pkg.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

