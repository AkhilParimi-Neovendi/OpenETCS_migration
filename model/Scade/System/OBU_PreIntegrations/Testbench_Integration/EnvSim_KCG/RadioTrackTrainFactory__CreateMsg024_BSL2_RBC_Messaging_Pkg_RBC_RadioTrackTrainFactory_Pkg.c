/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainFactory__CreateMsg024_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg024_BSL2/ */
void RadioTrackTrainFactory__CreateMsg024_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg(
  /* in_T_TRAIN/ */
  T_TRAIN in_T_TRAIN,
  /* in_M_ACK/ */
  M_ACK in_M_ACK,
  /* in_NID_LRBG/ */
  NID_LRBG in_NID_LRBG,
  /* inPacket003/ */
  P003V1_trackside_int_T_TM_baseline2 *inPacket003,
  /* inPacket005/ */
  P005_trackside_int_T_TM *inPacket005,
  /* inPacket042/ */
  P042_trackside_int_T_TM *inPacket042,
  /* inPacket057/ */
  P057_trackside_int_T_TM *inPacket057,
  /* inPacket058/ */
  P058_trackside_int_T_TM *inPacket058,
  outC_RadioTrackTrainFactory__CreateMsg024_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg *outC)
{
  outC->_L114 = kcg_lit_int64(24);
  outC->_L129 = in_T_TRAIN;
  outC->_L126 = in_M_ACK;
  outC->_L127 = in_NID_LRBG;
  outC->_L108 = T_TRAIN_DEFAULT;
  outC->_L95 = NID_EM_DEFAULT;
  outC->_L101 = Q_SCALE_DEFAULT;
  outC->_L94 = T_TRAIN_DEFAULT;
  outC->_L96 = D_REF_DEFAULT;
  outC->_L99 = Q_DIR_DEFAULT;
  outC->_L104 = D_EMERGENCYSTOP_DEFAULT;
  outC->_L113 = M_VERSION_DEFAULT;
  /* _L100=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create#1)/ */
  RadioTrackTrainHeader__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    outC->_L114,
    outC->_L129,
    outC->_L126,
    outC->_L127,
    outC->_L108,
    outC->_L95,
    outC->_L101,
    outC->_L94,
    outC->_L96,
    outC->_L99,
    outC->_L104,
    outC->_L113,
    &outC->Context_RadioTrackTrainHeader__Create_1);
  kcg_copy_Radio_TrackTrain_Header_T_TM(
    &outC->_L100,
    &outC->Context_RadioTrackTrainHeader__Create_1.outRadioTrackTrainHeader);
  kcg_copy_P003V1_trackside_int_T_TM_baseline2(&outC->_L118, inPacket003);
  kcg_copy_P005_trackside_int_T_TM(&outC->_L119, inPacket005);
  kcg_copy_P015_trackside_int_T_TM(
    &outC->_L130,
    (P015_trackside_int_T_TM *) &P015_DEFAULT);
  kcg_copy_P021_trackside_int_T_TM(
    &outC->_L131,
    (P021_trackside_int_T_TM *) &P021_DEFAULT);
  kcg_copy_P027V1_trackside_int_T_TM_baseline2(
    &outC->_L132,
    (P027V1_trackside_int_T_TM_baseline2 *) &P027_DEFAULT);
  kcg_copy_P042_trackside_int_T_TM(&outC->_L125, inPacket042);
  kcg_copy_P057_trackside_int_T_TM(&outC->_L123, inPacket057);
  kcg_copy_P058_trackside_int_T_TM(&outC->_L124, inPacket058);
  /* _L134=(RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets#2)/ */
  SEND_MergeRadioPackets_RBC_SendMergeRadio_Pkg(
    &outC->_L100,
    &outC->_L118,
    &outC->_L119,
    &outC->_L130,
    &outC->_L131,
    &outC->_L132,
    &outC->_L125,
    &outC->_L123,
    &outC->_L124,
    &outC->Context_SEND_MergeRadioPackets_2);
  kcg_copy_CompressedRadioMessage_TM(
    &outC->_L134,
    &outC->Context_SEND_MergeRadioPackets_2.MessageOUT);
  kcg_copy_CompressedRadioMessage_TM(
    &outC->outRadioTrackTrainMessage,
    &outC->_L134);
}

#ifndef KCG_USER_DEFINED_INIT
void RadioTrackTrainFactory__CreateMsg024_BSL2_init_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg(
  outC_RadioTrackTrainFactory__CreateMsg024_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;
  static kcg_size idx8;
  static kcg_size idx9;
  static kcg_size idx10;
  static kcg_size idx11;

  outC->_L134.Header.radioDevice = kcg_lit_int64(0);
  outC->_L134.Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L134.Header.nid_message = kcg_lit_int64(0);
  outC->_L134.Header.t_train = kcg_lit_int64(0);
  outC->_L134.Header.m_ack = kcg_lit_int64(0);
  outC->_L134.Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L134.Header.t_train_reference = kcg_lit_int64(0);
  outC->_L134.Header.nid_em = kcg_lit_int64(0);
  outC->_L134.Header.q_scale = kcg_lit_int64(0);
  outC->_L134.Header.d_sr = kcg_lit_int64(0);
  outC->_L134.Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L134.Header.d_ref = kcg_lit_int64(0);
  outC->_L134.Header.q_dir = kcg_lit_int64(0);
  outC->_L134.Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L134.Header.m_version = kcg_lit_int64(0);
  for (idx = 0; idx < 30; idx++) {
    outC->_L134.Messages.PacketHeaders[idx].nid_packet = kcg_lit_int64(0);
    outC->_L134.Messages.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L134.Messages.PacketHeaders[idx].valid = kcg_true;
    outC->_L134.Messages.PacketHeaders[idx].startAddress = kcg_lit_int64(0);
    outC->_L134.Messages.PacketHeaders[idx].endAddress = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L134.Messages.PacketData[idx1] = kcg_lit_int64(0);
  }
  outC->_L132.valid = kcg_true;
  outC->_L132.NID_PACKET = kcg_lit_int64(0);
  outC->_L132.Q_DIR = kcg_lit_int64(0);
  outC->_L132.L_PACKET = kcg_lit_int64(0);
  outC->_L132.Q_SCALE = kcg_lit_int64(0);
  outC->_L132.D_STATIC = kcg_lit_int64(0);
  outC->_L132.V_STATIC = kcg_lit_int64(0);
  outC->_L132.Q_FRONT = kcg_lit_int64(0);
  outC->_L132.N_ITER_n = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 32; idx2++) {
    outC->_L132.SECTIONS_q_diff[idx2].NC_DIFF = kcg_lit_int64(0);
    outC->_L132.SECTIONS_q_diff[idx2].V_DIFF = kcg_lit_int64(0);
  }
  outC->_L132.N_ITER_k = kcg_lit_int64(0);
  for (idx4 = 0; idx4 < 32; idx4++) {
    outC->_L132.SECTIONS_SSP[idx4].D_STATIC = kcg_lit_int64(0);
    outC->_L132.SECTIONS_SSP[idx4].V_STATIC = kcg_lit_int64(0);
    outC->_L132.SECTIONS_SSP[idx4].Q_FRONT = kcg_lit_int64(0);
    outC->_L132.SECTIONS_SSP[idx4].N_ITER = kcg_lit_int64(0);
    for (idx3 = 0; idx3 < 32; idx3++) {
      outC->_L132.SECTIONS_SSP[idx4].SECTIONS_q_diff[idx3].NC_DIFF = kcg_lit_int64(0);
      outC->_L132.SECTIONS_SSP[idx4].SECTIONS_q_diff[idx3].V_DIFF = kcg_lit_int64(0);
    }
  }
  outC->_L131.valid = kcg_true;
  outC->_L131.NID_PACKET = kcg_lit_int64(0);
  outC->_L131.Q_DIR = kcg_lit_int64(0);
  outC->_L131.L_PACKET = kcg_lit_int64(0);
  outC->_L131.Q_SCALE = kcg_lit_int64(0);
  outC->_L131.D_GRADIENT = kcg_lit_int64(0);
  outC->_L131.Q_GDIR = kcg_lit_int64(0);
  outC->_L131.G_A = kcg_lit_int64(0);
  outC->_L131.N_ITER = kcg_lit_int64(0);
  for (idx5 = 0; idx5 < 32; idx5++) {
    outC->_L131.SECTIONS[idx5].D_GRADIENT = kcg_lit_int64(0);
    outC->_L131.SECTIONS[idx5].Q_GDIR = kcg_lit_int64(0);
    outC->_L131.SECTIONS[idx5].G_A = kcg_lit_int64(0);
  }
  outC->_L130.valid = kcg_true;
  outC->_L130.NID_PACKET = kcg_lit_int64(0);
  outC->_L130.Q_DIR = kcg_lit_int64(0);
  outC->_L130.L_PACKET = kcg_lit_int64(0);
  outC->_L130.Q_SCALE = kcg_lit_int64(0);
  outC->_L130.V_LOA = kcg_lit_int64(0);
  outC->_L130.T_LOA = kcg_lit_int64(0);
  outC->_L130.N_ITER = kcg_lit_int64(0);
  for (idx6 = 0; idx6 < 32; idx6++) {
    outC->_L130.SECTIONS[idx6].L_SECTION = kcg_lit_int64(0);
    outC->_L130.SECTIONS[idx6].Q_SECTIONTIMER = kcg_lit_int64(0);
    outC->_L130.SECTIONS[idx6].T_SECTIONTIMER = kcg_lit_int64(0);
    outC->_L130.SECTIONS[idx6].D_SECTIONTIMERSTOPLOC = kcg_lit_int64(0);
  }
  outC->_L130.L_ENDSECTION = kcg_lit_int64(0);
  outC->_L130.Q_SECTIONTIMER = kcg_lit_int64(0);
  outC->_L130.T_SECTIONTIMER = kcg_lit_int64(0);
  outC->_L130.D_SECTIONTIMERSTOPLOC = kcg_lit_int64(0);
  outC->_L130.Q_ENDTIMER = kcg_lit_int64(0);
  outC->_L130.T_ENDTIMER = kcg_lit_int64(0);
  outC->_L130.D_ENDTIMERSTARTLOC = kcg_lit_int64(0);
  outC->_L130.Q_DANGERPOINT = kcg_lit_int64(0);
  outC->_L130.D_DP = kcg_lit_int64(0);
  outC->_L130.V_RELEASEDP = kcg_lit_int64(0);
  outC->_L130.Q_OVERLAP = kcg_lit_int64(0);
  outC->_L130.D_STARTOL = kcg_lit_int64(0);
  outC->_L130.T_OL = kcg_lit_int64(0);
  outC->_L130.D_OL = kcg_lit_int64(0);
  outC->_L130.V_RELEASEOL = kcg_lit_int64(0);
  outC->_L129 = kcg_lit_int64(0);
  outC->_L108 = kcg_lit_int64(0);
  outC->_L127 = kcg_lit_int64(0);
  outC->_L126 = M_ACK_No_acknowledgement_required;
  outC->_L125.valid = kcg_true;
  outC->_L125.NID_PACKET = kcg_lit_int64(0);
  outC->_L125.Q_DIR = kcg_lit_int64(0);
  outC->_L125.L_PACKET = kcg_lit_int64(0);
  outC->_L125.Q_RBC = kcg_lit_int64(0);
  outC->_L125.NID_C = kcg_lit_int64(0);
  outC->_L125.NID_RBC = kcg_lit_int64(0);
  outC->_L125.NID_RADIO = kcg_lit_int64(0);
  outC->_L125.Q_SLEEPSESSION = kcg_lit_int64(0);
  outC->_L124.valid = kcg_true;
  outC->_L124.NID_PACKET = kcg_lit_int64(0);
  outC->_L124.Q_DIR = kcg_lit_int64(0);
  outC->_L124.L_PACKET = kcg_lit_int64(0);
  outC->_L124.Q_SCALE = kcg_lit_int64(0);
  outC->_L124.T_CYCLOC = kcg_lit_int64(0);
  outC->_L124.D_CYCLOC = kcg_lit_int64(0);
  outC->_L124.M_LOC = kcg_lit_int64(0);
  outC->_L124.N_ITER = kcg_lit_int64(0);
  for (idx7 = 0; idx7 < 32; idx7++) {
    outC->_L124.SECTIONS[idx7].D_LOC = kcg_lit_int64(0);
    outC->_L124.SECTIONS[idx7].Q_LGTLOC = kcg_lit_int64(0);
  }
  outC->_L123.valid = kcg_true;
  outC->_L123.NID_PACKET = kcg_lit_int64(0);
  outC->_L123.Q_DIR = kcg_lit_int64(0);
  outC->_L123.L_PACKET = kcg_lit_int64(0);
  outC->_L123.T_MAR = kcg_lit_int64(0);
  outC->_L123.T_TIMEOUTRQST = kcg_lit_int64(0);
  outC->_L123.T_CYCRQST = kcg_lit_int64(0);
  outC->_L119.valid = kcg_true;
  outC->_L119.NID_PACKET = kcg_lit_int64(0);
  outC->_L119.Q_DIR = kcg_lit_int64(0);
  outC->_L119.L_PACKET = kcg_lit_int64(0);
  outC->_L119.Q_SCALE = kcg_lit_int64(0);
  outC->_L119.D_LINK = kcg_lit_int64(0);
  outC->_L119.Q_NEWCOUNTRY = kcg_lit_int64(0);
  outC->_L119.NID_C = kcg_lit_int64(0);
  outC->_L119.NID_BG = kcg_lit_int64(0);
  outC->_L119.Q_LINKORIENTATION = kcg_lit_int64(0);
  outC->_L119.Q_LINKREACTION = kcg_lit_int64(0);
  outC->_L119.Q_LOCACC = kcg_lit_int64(0);
  outC->_L119.N_ITER = kcg_lit_int64(0);
  for (idx8 = 0; idx8 < 32; idx8++) {
    outC->_L119.SECTIONS[idx8].D_LINK = kcg_lit_int64(0);
    outC->_L119.SECTIONS[idx8].Q_NEWCOUNTRY = kcg_lit_int64(0);
    outC->_L119.SECTIONS[idx8].NID_C = kcg_lit_int64(0);
    outC->_L119.SECTIONS[idx8].NID_BG = kcg_lit_int64(0);
    outC->_L119.SECTIONS[idx8].Q_LINKORIENTATION = kcg_lit_int64(0);
    outC->_L119.SECTIONS[idx8].Q_LINKREACTION = kcg_lit_int64(0);
    outC->_L119.SECTIONS[idx8].Q_LOCACC = kcg_lit_int64(0);
  }
  outC->_L118.valid = kcg_true;
  outC->_L118.NID_PACKET = kcg_lit_int64(0);
  outC->_L118.Q_DIR = kcg_lit_int64(0);
  outC->_L118.L_PACKET = kcg_lit_int64(0);
  outC->_L118.Q_SCALE = kcg_lit_int64(0);
  outC->_L118.D_VALIDNV = kcg_lit_int64(0);
  outC->_L118.N_ITER = kcg_lit_int64(0);
  for (idx9 = 0; idx9 < 32; idx9++) {
    outC->_L118.SECTIONS[idx9] = kcg_lit_int64(0);
  }
  outC->_L118.V_NVSHUNT = kcg_lit_int64(0);
  outC->_L118.V_NVSTFF = kcg_lit_int64(0);
  outC->_L118.V_NVONSIGHT = kcg_lit_int64(0);
  outC->_L118.V_NVUNFIT = kcg_lit_int64(0);
  outC->_L118.V_NVREL = kcg_lit_int64(0);
  outC->_L118.D_NVROLL = kcg_lit_int64(0);
  outC->_L118.Q_NVSRBKTRG = kcg_lit_int64(0);
  outC->_L118.Q_NVEMRRLS = kcg_lit_int64(0);
  outC->_L118.V_NVALLOWOVTRP = kcg_lit_int64(0);
  outC->_L118.V_NVSUPOVTRP = kcg_lit_int64(0);
  outC->_L118.D_NVOVTRP = kcg_lit_int64(0);
  outC->_L118.T_NVOVTRP = kcg_lit_int64(0);
  outC->_L118.D_NVPOTRP = kcg_lit_int64(0);
  outC->_L118.M_NVCONTACT = kcg_lit_int64(0);
  outC->_L118.T_NVCONTACT = kcg_lit_int64(0);
  outC->_L118.M_NVDERUN = kcg_lit_int64(0);
  outC->_L118.D_NVSTFF = kcg_lit_int64(0);
  outC->_L118.Q_NVDRIVER_ADHES = kcg_lit_int64(0);
  outC->_L114 = kcg_lit_int64(0);
  outC->_L113 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L94 = kcg_lit_int64(0);
  outC->_L95 = kcg_lit_int64(0);
  outC->_L96 = kcg_lit_int64(0);
  outC->_L99 = Q_DIR_Reverse;
  outC->_L100.radioDevice = kcg_lit_int64(0);
  outC->_L100.receivedSystemTime = kcg_lit_int64(0);
  outC->_L100.nid_message = kcg_lit_int64(0);
  outC->_L100.t_train = kcg_lit_int64(0);
  outC->_L100.m_ack = kcg_lit_int64(0);
  outC->_L100.nid_lrbg = kcg_lit_int64(0);
  outC->_L100.t_train_reference = kcg_lit_int64(0);
  outC->_L100.nid_em = kcg_lit_int64(0);
  outC->_L100.q_scale = kcg_lit_int64(0);
  outC->_L100.d_sr = kcg_lit_int64(0);
  outC->_L100.t_sh_rqst = kcg_lit_int64(0);
  outC->_L100.d_ref = kcg_lit_int64(0);
  outC->_L100.q_dir = kcg_lit_int64(0);
  outC->_L100.d_emergencystop = kcg_lit_int64(0);
  outC->_L100.m_version = kcg_lit_int64(0);
  outC->_L101 = Q_SCALE_10_cm_scale;
  outC->_L104 = kcg_lit_int64(0);
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
  for (idx10 = 0; idx10 < 30; idx10++) {
    outC->outRadioTrackTrainMessage.Messages.PacketHeaders[idx10].nid_packet =
      kcg_lit_int64(0);
    outC->outRadioTrackTrainMessage.Messages.PacketHeaders[idx10].q_dir =
      Q_DIR_Reverse;
    outC->outRadioTrackTrainMessage.Messages.PacketHeaders[idx10].valid = kcg_true;
    outC->outRadioTrackTrainMessage.Messages.PacketHeaders[idx10].startAddress =
      kcg_lit_int64(0);
    outC->outRadioTrackTrainMessage.Messages.PacketHeaders[idx10].endAddress =
      kcg_lit_int64(0);
  }
  for (idx11 = 0; idx11 < 500; idx11++) {
    outC->outRadioTrackTrainMessage.Messages.PacketData[idx11] = kcg_lit_int64(0);
  }
  /* _L134=(RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets#2)/ */
  SEND_MergeRadioPackets_init_RBC_SendMergeRadio_Pkg(
    &outC->Context_SEND_MergeRadioPackets_2);
  /* _L100=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create#1)/ */
  RadioTrackTrainHeader__Create_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Create_1);
}
#endif /* KCG_USER_DEFINED_INIT */


void RadioTrackTrainFactory__CreateMsg024_BSL2_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg(
  outC_RadioTrackTrainFactory__CreateMsg024_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg *outC)
{
  /* _L134=(RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets#2)/ */
  SEND_MergeRadioPackets_reset_RBC_SendMergeRadio_Pkg(
    &outC->Context_SEND_MergeRadioPackets_2);
  /* _L100=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create#1)/ */
  RadioTrackTrainHeader__Create_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Create_1);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RadioTrackTrainFactory__CreateMsg024_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

