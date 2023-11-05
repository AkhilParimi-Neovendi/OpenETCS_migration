/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainMessage__G_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader/ */
void RadioTrackTrainMessage__G_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
  /* inRadioTrackTrainMessage/ */
  CompressedRadioMessage_TM *inRadioTrackTrainMessage,
  outC_RadioTrackTrainMessage__G_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg *outC)
{
  kcg_copy_CompressedRadioMessage_TM(&outC->_L1, inRadioTrackTrainMessage);
  kcg_copy_Radio_TrackTrain_Header_T_TM(&outC->_L2, &outC->_L1.Header);
  kcg_copy_Radio_TrackTrain_Header_T_TM(
    &outC->outRadioTrackTrainHeader,
    &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void RadioTrackTrainMessage__G_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
  outC_RadioTrackTrainMessage__G_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg *outC)
{
  kcg_size idx;
  kcg_size idx1;

  outC->_L2.radioDevice = kcg_lit_int32(0);
  outC->_L2.receivedSystemTime = kcg_lit_int32(0);
  outC->_L2.nid_message = kcg_lit_int32(0);
  outC->_L2.t_train = kcg_lit_int32(0);
  outC->_L2.m_ack = kcg_lit_int32(0);
  outC->_L2.nid_lrbg = kcg_lit_int32(0);
  outC->_L2.t_train_reference = kcg_lit_int32(0);
  outC->_L2.nid_em = kcg_lit_int32(0);
  outC->_L2.q_scale = kcg_lit_int32(0);
  outC->_L2.d_sr = kcg_lit_int32(0);
  outC->_L2.t_sh_rqst = kcg_lit_int32(0);
  outC->_L2.d_ref = kcg_lit_int32(0);
  outC->_L2.q_dir = kcg_lit_int32(0);
  outC->_L2.d_emergencystop = kcg_lit_int32(0);
  outC->_L2.m_version = kcg_lit_int32(0);
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
  for (idx = 0; idx < 30; idx++) {
    outC->_L1.Messages.PacketHeaders[idx].nid_packet = kcg_lit_int32(0);
    outC->_L1.Messages.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L1.Messages.PacketHeaders[idx].valid = kcg_true;
    outC->_L1.Messages.PacketHeaders[idx].startAddress = kcg_lit_int32(0);
    outC->_L1.Messages.PacketHeaders[idx].endAddress = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L1.Messages.PacketData[idx1] = kcg_lit_int32(0);
  }
  outC->outRadioTrackTrainHeader.radioDevice = kcg_lit_int32(0);
  outC->outRadioTrackTrainHeader.receivedSystemTime = kcg_lit_int32(0);
  outC->outRadioTrackTrainHeader.nid_message = kcg_lit_int32(0);
  outC->outRadioTrackTrainHeader.t_train = kcg_lit_int32(0);
  outC->outRadioTrackTrainHeader.m_ack = kcg_lit_int32(0);
  outC->outRadioTrackTrainHeader.nid_lrbg = kcg_lit_int32(0);
  outC->outRadioTrackTrainHeader.t_train_reference = kcg_lit_int32(0);
  outC->outRadioTrackTrainHeader.nid_em = kcg_lit_int32(0);
  outC->outRadioTrackTrainHeader.q_scale = kcg_lit_int32(0);
  outC->outRadioTrackTrainHeader.d_sr = kcg_lit_int32(0);
  outC->outRadioTrackTrainHeader.t_sh_rqst = kcg_lit_int32(0);
  outC->outRadioTrackTrainHeader.d_ref = kcg_lit_int32(0);
  outC->outRadioTrackTrainHeader.q_dir = kcg_lit_int32(0);
  outC->outRadioTrackTrainHeader.d_emergencystop = kcg_lit_int32(0);
  outC->outRadioTrackTrainHeader.m_version = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


void RadioTrackTrainMessage__G_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
  outC_RadioTrackTrainMessage__G_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg *outC)
{
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RadioTrackTrainMessage__G_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

