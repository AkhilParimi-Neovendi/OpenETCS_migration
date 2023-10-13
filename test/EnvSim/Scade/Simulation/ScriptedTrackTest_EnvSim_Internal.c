/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/test/EnvSim/Scade/Simulation/config.txt
** Generation date: 2023-10-09T16:07:18
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ScriptedTrackTest_EnvSim_Internal.h"

/* EnvSim::Internal::ScriptedTrackTest/ */
void ScriptedTrackTest_EnvSim_Internal(
  inC_ScriptedTrackTest_EnvSim_Internal *inC,
  outC_ScriptedTrackTest_EnvSim_Internal *outC)
{
  outC->_L3 = inC->actualTrainPos;
  outC->_L4 = inC->radioTrainPos;
  /* _L2=(EnvSim::ScriptedTrack#1)/ */
  ScriptedTrack_EnvSim(outC->_L3, outC->_L4, &outC->_L2, &outC->_L1);
  kcg_copy_CompressedBaliseMessage_TM(&outC->baliseMessage, &outC->_L2);
  kcg_copy_CompressedRadioMessage_TM(&outC->radioMessage, &outC->_L1);
}

#ifndef KCG_USER_DEFINED_INIT
void ScriptedTrackTest_init_EnvSim_Internal(
  outC_ScriptedTrackTest_EnvSim_Internal *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;
  kcg_size idx6;
  kcg_size idx7;

  outC->_L4 = kcg_lit_float64(0.0);
  outC->_L3 = kcg_lit_float64(0.0);
  outC->_L1.Header.radioDevice = kcg_lit_int64(0);
  outC->_L1.Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L1.Header.nid_message = kcg_lit_int64(0);
  outC->_L1.Header.t_train = kcg_lit_int64(0);
  outC->_L1.Header.m_ack = kcg_lit_int64(0);
  outC->_L1.Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L1.Header.t_train_reference = kcg_lit_int64(0);
  outC->_L1.Header.nid_em = kcg_lit_int64(0);
  outC->_L1.Header.q_scale = kcg_lit_int64(0);
  outC->_L1.Header.d_sr = kcg_lit_int64(0);
  outC->_L1.Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L1.Header.d_ref = kcg_lit_int64(0);
  outC->_L1.Header.q_dir = kcg_lit_int64(0);
  outC->_L1.Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L1.Header.m_version = kcg_lit_int64(0);
  for (idx = 0; idx < 30; idx++) {
    outC->_L1.Messages.PacketHeaders[idx].nid_packet = kcg_lit_int64(0);
    outC->_L1.Messages.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L1.Messages.PacketHeaders[idx].valid = kcg_true;
    outC->_L1.Messages.PacketHeaders[idx].startAddress = kcg_lit_int64(0);
    outC->_L1.Messages.PacketHeaders[idx].endAddress = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L1.Messages.PacketData[idx1] = kcg_lit_int64(0);
  }
  outC->_L2.Header.q_updown = kcg_lit_int64(0);
  outC->_L2.Header.m_version = kcg_lit_int64(0);
  outC->_L2.Header.q_media = kcg_lit_int64(0);
  outC->_L2.Header.n_pig = kcg_lit_int64(0);
  outC->_L2.Header.n_total = kcg_lit_int64(0);
  outC->_L2.Header.m_dup = kcg_lit_int64(0);
  outC->_L2.Header.m_mcount = kcg_lit_int64(0);
  outC->_L2.Header.nid_c = kcg_lit_int64(0);
  outC->_L2.Header.nid_bg = kcg_lit_int64(0);
  outC->_L2.Header.q_link = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L2.Messages.PacketHeaders[idx2].nid_packet = kcg_lit_int64(0);
    outC->_L2.Messages.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L2.Messages.PacketHeaders[idx2].valid = kcg_true;
    outC->_L2.Messages.PacketHeaders[idx2].startAddress = kcg_lit_int64(0);
    outC->_L2.Messages.PacketHeaders[idx2].endAddress = kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L2.Messages.PacketData[idx3] = kcg_lit_int64(0);
  }
  outC->baliseMessage.Header.q_updown = kcg_lit_int64(0);
  outC->baliseMessage.Header.m_version = kcg_lit_int64(0);
  outC->baliseMessage.Header.q_media = kcg_lit_int64(0);
  outC->baliseMessage.Header.n_pig = kcg_lit_int64(0);
  outC->baliseMessage.Header.n_total = kcg_lit_int64(0);
  outC->baliseMessage.Header.m_dup = kcg_lit_int64(0);
  outC->baliseMessage.Header.m_mcount = kcg_lit_int64(0);
  outC->baliseMessage.Header.nid_c = kcg_lit_int64(0);
  outC->baliseMessage.Header.nid_bg = kcg_lit_int64(0);
  outC->baliseMessage.Header.q_link = kcg_lit_int64(0);
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->baliseMessage.Messages.PacketHeaders[idx4].nid_packet = kcg_lit_int64(0);
    outC->baliseMessage.Messages.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->baliseMessage.Messages.PacketHeaders[idx4].valid = kcg_true;
    outC->baliseMessage.Messages.PacketHeaders[idx4].startAddress =
      kcg_lit_int64(0);
    outC->baliseMessage.Messages.PacketHeaders[idx4].endAddress = kcg_lit_int64(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->baliseMessage.Messages.PacketData[idx5] = kcg_lit_int64(0);
  }
  outC->radioMessage.Header.radioDevice = kcg_lit_int64(0);
  outC->radioMessage.Header.receivedSystemTime = kcg_lit_int64(0);
  outC->radioMessage.Header.nid_message = kcg_lit_int64(0);
  outC->radioMessage.Header.t_train = kcg_lit_int64(0);
  outC->radioMessage.Header.m_ack = kcg_lit_int64(0);
  outC->radioMessage.Header.nid_lrbg = kcg_lit_int64(0);
  outC->radioMessage.Header.t_train_reference = kcg_lit_int64(0);
  outC->radioMessage.Header.nid_em = kcg_lit_int64(0);
  outC->radioMessage.Header.q_scale = kcg_lit_int64(0);
  outC->radioMessage.Header.d_sr = kcg_lit_int64(0);
  outC->radioMessage.Header.t_sh_rqst = kcg_lit_int64(0);
  outC->radioMessage.Header.d_ref = kcg_lit_int64(0);
  outC->radioMessage.Header.q_dir = kcg_lit_int64(0);
  outC->radioMessage.Header.d_emergencystop = kcg_lit_int64(0);
  outC->radioMessage.Header.m_version = kcg_lit_int64(0);
  for (idx6 = 0; idx6 < 30; idx6++) {
    outC->radioMessage.Messages.PacketHeaders[idx6].nid_packet = kcg_lit_int64(0);
    outC->radioMessage.Messages.PacketHeaders[idx6].q_dir = Q_DIR_Reverse;
    outC->radioMessage.Messages.PacketHeaders[idx6].valid = kcg_true;
    outC->radioMessage.Messages.PacketHeaders[idx6].startAddress = kcg_lit_int64(0);
    outC->radioMessage.Messages.PacketHeaders[idx6].endAddress = kcg_lit_int64(0);
  }
  for (idx7 = 0; idx7 < 500; idx7++) {
    outC->radioMessage.Messages.PacketData[idx7] = kcg_lit_int64(0);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ScriptedTrackTest_reset_EnvSim_Internal(
  outC_ScriptedTrackTest_EnvSim_Internal *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ScriptedTrackTest_EnvSim_Internal.c
** Generation date: 2023-10-09T16:07:18
*************************************************************$ */

