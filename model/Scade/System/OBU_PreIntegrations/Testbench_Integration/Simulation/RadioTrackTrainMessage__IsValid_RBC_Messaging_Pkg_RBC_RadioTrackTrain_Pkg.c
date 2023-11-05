/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainMessage__IsValid_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__IsValid/ */
void RadioTrackTrainMessage__IsValid_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
  /* inRadioTrackTrainMessage/ */
  CompressedRadioMessage_TM *inRadioTrackTrainMessage,
  outC_RadioTrackTrainMessage__IsValid_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg *outC)
{
  outC->_L8 = kcg_false;
  outC->_L7 = kcg_true;
  outC->_L6 = kcg_lit_int32(0);
  kcg_copy_CompressedRadioMessage_TM(&outC->_L1, inRadioTrackTrainMessage);
  /* _L2=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#1)/ */
  RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->_L1,
    &outC->Context_RadioTrackTrainMessage__GetHeader_1);
  kcg_copy_Radio_TrackTrain_Header_T_TM(
    &outC->_L2,
    &outC->Context_RadioTrackTrainMessage__GetHeader_1.outRadioTrackTrainHeader);
  /* _L3=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE#1)/ */
  RadioTrackTrainHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->_L2,
    &outC->Context_RadioTrackTrainHeader__Get_NID_MESSAGE_1);
  outC->_L3 =
    outC->Context_RadioTrackTrainHeader__Get_NID_MESSAGE_1.out_NID_MESSAGE;
  outC->_L5 = outC->_L3 > outC->_L6;
  /* _L4= */
  if (outC->_L5) {
    outC->_L4 = outC->_L7;
  }
  else {
    outC->_L4 = outC->_L8;
  }
  outC->outIsValid = outC->_L4;
}

#ifndef KCG_USER_DEFINED_INIT
void RadioTrackTrainMessage__IsValid_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
  outC_RadioTrackTrainMessage__IsValid_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L8 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L6 = kcg_lit_int32(0);
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_lit_int32(0);
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
  outC->outIsValid = kcg_true;
  /* _L3=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE#1)/ */
  RadioTrackTrainHeader__Get_NID_MESSAGE_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Get_NID_MESSAGE_1);
  /* _L2=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#1)/ */
  RadioTrackTrainMessage__GetHeader_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainMessage__GetHeader_1);
}
#endif /* KCG_USER_DEFINED_INIT */


void RadioTrackTrainMessage__IsValid_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
  outC_RadioTrackTrainMessage__IsValid_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg *outC)
{
  /* _L3=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE#1)/ */
  RadioTrackTrainHeader__Get_NID_MESSAGE_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Get_NID_MESSAGE_1);
  /* _L2=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#1)/ */
  RadioTrackTrainMessage__GetHeader_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainMessage__GetHeader_1);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RadioTrackTrainMessage__IsValid_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.c
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

