/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainFactory__CreateDefaultMsg_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateDefaultMsg_BSL2/ */
void RadioTrackTrainFactory__CreateDefaultMsg_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg(
  outC_RadioTrackTrainFactory__CreateDefaultMsg_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg *outC)
{
  kcg_copy_CompressedRadioMessage_TM(
    &outC->_L1,
    (CompressedRadioMessage_TM *) &RADIO_TRACK_TRAIN_MESSAGE_DEFAULT);
  kcg_copy_CompressedRadioMessage_TM(
    &outC->outRadioTrackTrainMessage,
    &outC->_L1);
}

#ifndef KCG_USER_DEFINED_INIT
void RadioTrackTrainFactory__CreateDefaultMsg_BSL2_init_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg(
  outC_RadioTrackTrainFactory__CreateDefaultMsg_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;

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
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->outRadioTrackTrainMessage.Messages.PacketHeaders[idx2].nid_packet =
      kcg_lit_int32(0);
    outC->outRadioTrackTrainMessage.Messages.PacketHeaders[idx2].q_dir =
      Q_DIR_Reverse;
    outC->outRadioTrackTrainMessage.Messages.PacketHeaders[idx2].valid = kcg_true;
    outC->outRadioTrackTrainMessage.Messages.PacketHeaders[idx2].startAddress =
      kcg_lit_int32(0);
    outC->outRadioTrackTrainMessage.Messages.PacketHeaders[idx2].endAddress =
      kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->outRadioTrackTrainMessage.Messages.PacketData[idx3] = kcg_lit_int32(0);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RadioTrackTrainFactory__CreateDefaultMsg_BSL2_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg(
  outC_RadioTrackTrainFactory__CreateDefaultMsg_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RadioTrackTrainFactory__CreateDefaultMsg_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

