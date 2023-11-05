/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainMessage__S_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__SetHeader/ */
void RadioTrackTrainMessage__S_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
  /* inRadioTrackTrainMessage/ */
  CompressedRadioMessage_TM *inRadioTrackTrainMessage,
  /* inRadioTrackTrainHeader/ */
  Radio_TrackTrain_Header_T_TM *inRadioTrackTrainHeader,
  outC_RadioTrackTrainMessage__S_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg *outC)
{
  kcg_copy_Radio_TrackTrain_Header_T_TM(&outC->_L3, inRadioTrackTrainHeader);
  kcg_copy_CompressedRadioMessage_TM(&outC->_L2, inRadioTrackTrainMessage);
  kcg_copy_CompressedRadioMessage_TM(&outC->_L1, &outC->_L2);
  if (kcg_true) {
    kcg_copy_Radio_TrackTrain_Header_T_TM(&outC->_L1.Header, &outC->_L3);
  }
  kcg_copy_CompressedRadioMessage_TM(
    &outC->outRadioTrackTrainMessage,
    &outC->_L1);
}

#ifndef KCG_USER_DEFINED_INIT
void RadioTrackTrainMessage__S_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
  outC_RadioTrackTrainMessage__S_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;

  outC->_L3.radioDevice = kcg_lit_int32(0);
  outC->_L3.receivedSystemTime = kcg_lit_int32(0);
  outC->_L3.nid_message = kcg_lit_int32(0);
  outC->_L3.t_train = kcg_lit_int32(0);
  outC->_L3.m_ack = kcg_lit_int32(0);
  outC->_L3.nid_lrbg = kcg_lit_int32(0);
  outC->_L3.t_train_reference = kcg_lit_int32(0);
  outC->_L3.nid_em = kcg_lit_int32(0);
  outC->_L3.q_scale = kcg_lit_int32(0);
  outC->_L3.d_sr = kcg_lit_int32(0);
  outC->_L3.t_sh_rqst = kcg_lit_int32(0);
  outC->_L3.d_ref = kcg_lit_int32(0);
  outC->_L3.q_dir = kcg_lit_int32(0);
  outC->_L3.d_emergencystop = kcg_lit_int32(0);
  outC->_L3.m_version = kcg_lit_int32(0);
  outC->_L2.Header.radioDevice = kcg_lit_int32(0);
  outC->_L2.Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L2.Header.nid_message = kcg_lit_int32(0);
  outC->_L2.Header.t_train = kcg_lit_int32(0);
  outC->_L2.Header.m_ack = kcg_lit_int32(0);
  outC->_L2.Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L2.Header.t_train_reference = kcg_lit_int32(0);
  outC->_L2.Header.nid_em = kcg_lit_int32(0);
  outC->_L2.Header.q_scale = kcg_lit_int32(0);
  outC->_L2.Header.d_sr = kcg_lit_int32(0);
  outC->_L2.Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L2.Header.d_ref = kcg_lit_int32(0);
  outC->_L2.Header.q_dir = kcg_lit_int32(0);
  outC->_L2.Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L2.Header.m_version = kcg_lit_int32(0);
  for (idx = 0; idx < 30; idx++) {
    outC->_L2.Messages.PacketHeaders[idx].nid_packet = kcg_lit_int32(0);
    outC->_L2.Messages.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L2.Messages.PacketHeaders[idx].valid = kcg_true;
    outC->_L2.Messages.PacketHeaders[idx].startAddress = kcg_lit_int32(0);
    outC->_L2.Messages.PacketHeaders[idx].endAddress = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L2.Messages.PacketData[idx1] = kcg_lit_int32(0);
  }
  outC->_L1.Header.radioDevice = kcg_lit_int32(0);
  outC->_L1.Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L1.Header.nid_message = kcg_lit_int32(0);
  outC->_L1.Header.t_train = kcg_lit_int32(0);
  outC->_L1.Header.m_ack = kcg_lit_int32(0);
  outC->_L1.Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L1.Header.t_train_reference = kcg_lit_int32(0);
  outC->_L1.Header.nid_em = kcg_lit_int32(0);
  outC->_L1.Header.q_scale = kcg_lit_int32(0);
  outC->_L1.Header.d_sr = kcg_lit_int32(0);
  outC->_L1.Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L1.Header.d_ref = kcg_lit_int32(0);
  outC->_L1.Header.q_dir = kcg_lit_int32(0);
  outC->_L1.Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L1.Header.m_version = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L1.Messages.PacketHeaders[idx2].nid_packet = kcg_lit_int32(0);
    outC->_L1.Messages.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L1.Messages.PacketHeaders[idx2].valid = kcg_true;
    outC->_L1.Messages.PacketHeaders[idx2].startAddress = kcg_lit_int32(0);
    outC->_L1.Messages.PacketHeaders[idx2].endAddress = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L1.Messages.PacketData[idx3] = kcg_lit_int32(0);
  }
  outC->outRadioTrackTrainMessage.Header.radioDevice = kcg_lit_int32(0);
  outC->outRadioTrackTrainMessage.Header.receivedSystemTime = kcg_lit_int32(0);
  outC->outRadioTrackTrainMessage.Header.nid_message = kcg_lit_int32(0);
  outC->outRadioTrackTrainMessage.Header.t_train = kcg_lit_int32(0);
  outC->outRadioTrackTrainMessage.Header.m_ack = kcg_lit_int32(0);
  outC->outRadioTrackTrainMessage.Header.nid_lrbg = kcg_lit_int32(0);
  outC->outRadioTrackTrainMessage.Header.t_train_reference = kcg_lit_int32(0);
  outC->outRadioTrackTrainMessage.Header.nid_em = kcg_lit_int32(0);
  outC->outRadioTrackTrainMessage.Header.q_scale = kcg_lit_int32(0);
  outC->outRadioTrackTrainMessage.Header.d_sr = kcg_lit_int32(0);
  outC->outRadioTrackTrainMessage.Header.t_sh_rqst = kcg_lit_int32(0);
  outC->outRadioTrackTrainMessage.Header.d_ref = kcg_lit_int32(0);
  outC->outRadioTrackTrainMessage.Header.q_dir = kcg_lit_int32(0);
  outC->outRadioTrackTrainMessage.Header.d_emergencystop = kcg_lit_int32(0);
  outC->outRadioTrackTrainMessage.Header.m_version = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->outRadioTrackTrainMessage.Messages.PacketHeaders[idx4].nid_packet =
      kcg_lit_int32(0);
    outC->outRadioTrackTrainMessage.Messages.PacketHeaders[idx4].q_dir =
      Q_DIR_Reverse;
    outC->outRadioTrackTrainMessage.Messages.PacketHeaders[idx4].valid = kcg_true;
    outC->outRadioTrackTrainMessage.Messages.PacketHeaders[idx4].startAddress =
      kcg_lit_int32(0);
    outC->outRadioTrackTrainMessage.Messages.PacketHeaders[idx4].endAddress =
      kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->outRadioTrackTrainMessage.Messages.PacketData[idx5] = kcg_lit_int32(0);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RadioTrackTrainMessage__S_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
  outC_RadioTrackTrainMessage__S_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RadioTrackTrainMessage__S_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

