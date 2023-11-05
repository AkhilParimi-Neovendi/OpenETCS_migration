/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainFactory__CreateMsg008_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg008_BSL2/ */
void RadioTrackTrainFactory__CreateMsg008_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg(
  /* in_T_TRAIN/ */
  T_TRAIN in_T_TRAIN,
  /* in_M_ACK/ */
  M_ACK in_M_ACK,
  /* in_NID_LRBG/ */
  NID_LRBG in_NID_LRBG,
  /* in_T_TRAIN_Ref/ */
  T_TRAIN in_T_TRAIN_Ref,
  outC_RadioTrackTrainFactory__CreateMsg008_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg *outC)
{
  outC->_L16 = kcg_lit_int32(8);
  outC->_L100 = in_T_TRAIN;
  outC->_L99 = in_M_ACK;
  outC->_L97 = in_NID_LRBG;
  outC->_L98 = in_T_TRAIN_Ref;
  outC->_L36 = NID_EM_DEFAULT;
  outC->_L37 = Q_SCALE_DEFAULT;
  outC->_L38 = T_TRAIN_DEFAULT;
  outC->_L39 = D_REF_DEFAULT;
  outC->_L40 = Q_DIR_DEFAULT;
  outC->_L41 = D_EMERGENCYSTOP_DEFAULT;
  outC->_L42 = M_VERSION_DEFAULT;
  /* _L27=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create#1)/ */
  RadioTrackTrainHeader__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    outC->_L16,
    outC->_L100,
    outC->_L99,
    outC->_L97,
    outC->_L98,
    outC->_L36,
    outC->_L37,
    outC->_L38,
    outC->_L39,
    outC->_L40,
    outC->_L41,
    outC->_L42,
    &outC->Context_RadioTrackTrainHeader__Create_1);
  kcg_copy_Radio_TrackTrain_Header_T_TM(
    &outC->_L27,
    &outC->Context_RadioTrackTrainHeader__Create_1.outRadioTrackTrainHeader);
  kcg_copy_P003V1_trackside_int_T_TM_baseline2(
    &outC->_L93,
    (P003V1_trackside_int_T_TM_baseline2 *) &P003_DEFAULT);
  kcg_copy_P005_trackside_int_T_TM(
    &outC->_L94,
    (P005_trackside_int_T_TM *) &P005_DEFAULT);
  kcg_copy_P015_trackside_int_T_TM(
    &outC->_L96,
    (P015_trackside_int_T_TM *) &P015_DEFAULT);
  kcg_copy_P021_trackside_int_T_TM(
    &outC->_L90,
    (P021_trackside_int_T_TM *) &P021_DEFAULT);
  kcg_copy_P027V1_trackside_int_T_TM_baseline2(
    &outC->_L91,
    (P027V1_trackside_int_T_TM_baseline2 *) &P027_DEFAULT);
  kcg_copy_P042_trackside_int_T_TM(
    &outC->_L95,
    (P042_trackside_int_T_TM *) &P042_DEFAULT);
  kcg_copy_P057_trackside_int_T_TM(
    &outC->_L89,
    (P057_trackside_int_T_TM *) &P057_DEFAULT);
  kcg_copy_P058_trackside_int_T_TM(
    &outC->_L92,
    (P058_trackside_int_T_TM *) &P058_DEFAULT);
  /* _L102=(RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets#2)/ */
  SEND_MergeRadioPackets_RBC_SendMergeRadio_Pkg(
    &outC->_L27,
    &outC->_L93,
    &outC->_L94,
    &outC->_L96,
    &outC->_L90,
    &outC->_L91,
    &outC->_L95,
    &outC->_L89,
    &outC->_L92,
    &outC->Context_SEND_MergeRadioPackets_2);
  kcg_copy_CompressedRadioMessage_TM(
    &outC->_L102,
    &outC->Context_SEND_MergeRadioPackets_2.MessageOUT);
  kcg_copy_CompressedRadioMessage_TM(
    &outC->outRadioTrackTrainMessage,
    &outC->_L102);
}

#ifndef KCG_USER_DEFINED_INIT
void RadioTrackTrainFactory__CreateMsg008_BSL2_init_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg(
  outC_RadioTrackTrainFactory__CreateMsg008_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg *outC)
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

  outC->_L102.Header.radioDevice = kcg_lit_int32(0);
  outC->_L102.Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L102.Header.nid_message = kcg_lit_int32(0);
  outC->_L102.Header.t_train = kcg_lit_int32(0);
  outC->_L102.Header.m_ack = kcg_lit_int32(0);
  outC->_L102.Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L102.Header.t_train_reference = kcg_lit_int32(0);
  outC->_L102.Header.nid_em = kcg_lit_int32(0);
  outC->_L102.Header.q_scale = kcg_lit_int32(0);
  outC->_L102.Header.d_sr = kcg_lit_int32(0);
  outC->_L102.Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L102.Header.d_ref = kcg_lit_int32(0);
  outC->_L102.Header.q_dir = kcg_lit_int32(0);
  outC->_L102.Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L102.Header.m_version = kcg_lit_int32(0);
  for (idx = 0; idx < 30; idx++) {
    outC->_L102.Messages.PacketHeaders[idx].nid_packet = kcg_lit_int32(0);
    outC->_L102.Messages.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L102.Messages.PacketHeaders[idx].valid = kcg_true;
    outC->_L102.Messages.PacketHeaders[idx].startAddress = kcg_lit_int32(0);
    outC->_L102.Messages.PacketHeaders[idx].endAddress = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L102.Messages.PacketData[idx1] = kcg_lit_int32(0);
  }
  outC->_L100 = kcg_lit_int32(0);
  outC->_L99 = M_ACK_No_acknowledgement_required;
  outC->_L98 = kcg_lit_int32(0);
  outC->_L97 = kcg_lit_int32(0);
  outC->_L89.valid = kcg_true;
  outC->_L89.NID_PACKET = kcg_lit_int32(0);
  outC->_L89.Q_DIR = kcg_lit_int32(0);
  outC->_L89.L_PACKET = kcg_lit_int32(0);
  outC->_L89.T_MAR = kcg_lit_int32(0);
  outC->_L89.T_TIMEOUTRQST = kcg_lit_int32(0);
  outC->_L89.T_CYCRQST = kcg_lit_int32(0);
  outC->_L90.valid = kcg_true;
  outC->_L90.NID_PACKET = kcg_lit_int32(0);
  outC->_L90.Q_DIR = kcg_lit_int32(0);
  outC->_L90.L_PACKET = kcg_lit_int32(0);
  outC->_L90.Q_SCALE = kcg_lit_int32(0);
  outC->_L90.D_GRADIENT = kcg_lit_int32(0);
  outC->_L90.Q_GDIR = kcg_lit_int32(0);
  outC->_L90.G_A = kcg_lit_int32(0);
  outC->_L90.N_ITER = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 32; idx2++) {
    outC->_L90.SECTIONS[idx2].D_GRADIENT = kcg_lit_int32(0);
    outC->_L90.SECTIONS[idx2].Q_GDIR = kcg_lit_int32(0);
    outC->_L90.SECTIONS[idx2].G_A = kcg_lit_int32(0);
  }
  outC->_L91.valid = kcg_true;
  outC->_L91.NID_PACKET = kcg_lit_int32(0);
  outC->_L91.Q_DIR = kcg_lit_int32(0);
  outC->_L91.L_PACKET = kcg_lit_int32(0);
  outC->_L91.Q_SCALE = kcg_lit_int32(0);
  outC->_L91.D_STATIC = kcg_lit_int32(0);
  outC->_L91.V_STATIC = kcg_lit_int32(0);
  outC->_L91.Q_FRONT = kcg_lit_int32(0);
  outC->_L91.N_ITER_n = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 32; idx3++) {
    outC->_L91.SECTIONS_q_diff[idx3].NC_DIFF = kcg_lit_int32(0);
    outC->_L91.SECTIONS_q_diff[idx3].V_DIFF = kcg_lit_int32(0);
  }
  outC->_L91.N_ITER_k = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 32; idx5++) {
    outC->_L91.SECTIONS_SSP[idx5].D_STATIC = kcg_lit_int32(0);
    outC->_L91.SECTIONS_SSP[idx5].V_STATIC = kcg_lit_int32(0);
    outC->_L91.SECTIONS_SSP[idx5].Q_FRONT = kcg_lit_int32(0);
    outC->_L91.SECTIONS_SSP[idx5].N_ITER = kcg_lit_int32(0);
    for (idx4 = 0; idx4 < 32; idx4++) {
      outC->_L91.SECTIONS_SSP[idx5].SECTIONS_q_diff[idx4].NC_DIFF = kcg_lit_int32(0);
      outC->_L91.SECTIONS_SSP[idx5].SECTIONS_q_diff[idx4].V_DIFF = kcg_lit_int32(0);
    }
  }
  outC->_L92.valid = kcg_true;
  outC->_L92.NID_PACKET = kcg_lit_int32(0);
  outC->_L92.Q_DIR = kcg_lit_int32(0);
  outC->_L92.L_PACKET = kcg_lit_int32(0);
  outC->_L92.Q_SCALE = kcg_lit_int32(0);
  outC->_L92.T_CYCLOC = kcg_lit_int32(0);
  outC->_L92.D_CYCLOC = kcg_lit_int32(0);
  outC->_L92.M_LOC = kcg_lit_int32(0);
  outC->_L92.N_ITER = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 32; idx6++) {
    outC->_L92.SECTIONS[idx6].D_LOC = kcg_lit_int32(0);
    outC->_L92.SECTIONS[idx6].Q_LGTLOC = kcg_lit_int32(0);
  }
  outC->_L93.valid = kcg_true;
  outC->_L93.NID_PACKET = kcg_lit_int32(0);
  outC->_L93.Q_DIR = kcg_lit_int32(0);
  outC->_L93.L_PACKET = kcg_lit_int32(0);
  outC->_L93.Q_SCALE = kcg_lit_int32(0);
  outC->_L93.D_VALIDNV = kcg_lit_int32(0);
  outC->_L93.N_ITER = kcg_lit_int32(0);
  for (idx7 = 0; idx7 < 32; idx7++) {
    outC->_L93.SECTIONS[idx7] = kcg_lit_int32(0);
  }
  outC->_L93.V_NVSHUNT = kcg_lit_int32(0);
  outC->_L93.V_NVSTFF = kcg_lit_int32(0);
  outC->_L93.V_NVONSIGHT = kcg_lit_int32(0);
  outC->_L93.V_NVUNFIT = kcg_lit_int32(0);
  outC->_L93.V_NVREL = kcg_lit_int32(0);
  outC->_L93.D_NVROLL = kcg_lit_int32(0);
  outC->_L93.Q_NVSRBKTRG = kcg_lit_int32(0);
  outC->_L93.Q_NVEMRRLS = kcg_lit_int32(0);
  outC->_L93.V_NVALLOWOVTRP = kcg_lit_int32(0);
  outC->_L93.V_NVSUPOVTRP = kcg_lit_int32(0);
  outC->_L93.D_NVOVTRP = kcg_lit_int32(0);
  outC->_L93.T_NVOVTRP = kcg_lit_int32(0);
  outC->_L93.D_NVPOTRP = kcg_lit_int32(0);
  outC->_L93.M_NVCONTACT = kcg_lit_int32(0);
  outC->_L93.T_NVCONTACT = kcg_lit_int32(0);
  outC->_L93.M_NVDERUN = kcg_lit_int32(0);
  outC->_L93.D_NVSTFF = kcg_lit_int32(0);
  outC->_L93.Q_NVDRIVER_ADHES = kcg_lit_int32(0);
  outC->_L94.valid = kcg_true;
  outC->_L94.NID_PACKET = kcg_lit_int32(0);
  outC->_L94.Q_DIR = kcg_lit_int32(0);
  outC->_L94.L_PACKET = kcg_lit_int32(0);
  outC->_L94.Q_SCALE = kcg_lit_int32(0);
  outC->_L94.D_LINK = kcg_lit_int32(0);
  outC->_L94.Q_NEWCOUNTRY = kcg_lit_int32(0);
  outC->_L94.NID_C = kcg_lit_int32(0);
  outC->_L94.NID_BG = kcg_lit_int32(0);
  outC->_L94.Q_LINKORIENTATION = kcg_lit_int32(0);
  outC->_L94.Q_LINKREACTION = kcg_lit_int32(0);
  outC->_L94.Q_LOCACC = kcg_lit_int32(0);
  outC->_L94.N_ITER = kcg_lit_int32(0);
  for (idx8 = 0; idx8 < 32; idx8++) {
    outC->_L94.SECTIONS[idx8].D_LINK = kcg_lit_int32(0);
    outC->_L94.SECTIONS[idx8].Q_NEWCOUNTRY = kcg_lit_int32(0);
    outC->_L94.SECTIONS[idx8].NID_C = kcg_lit_int32(0);
    outC->_L94.SECTIONS[idx8].NID_BG = kcg_lit_int32(0);
    outC->_L94.SECTIONS[idx8].Q_LINKORIENTATION = kcg_lit_int32(0);
    outC->_L94.SECTIONS[idx8].Q_LINKREACTION = kcg_lit_int32(0);
    outC->_L94.SECTIONS[idx8].Q_LOCACC = kcg_lit_int32(0);
  }
  outC->_L95.valid = kcg_true;
  outC->_L95.NID_PACKET = kcg_lit_int32(0);
  outC->_L95.Q_DIR = kcg_lit_int32(0);
  outC->_L95.L_PACKET = kcg_lit_int32(0);
  outC->_L95.Q_RBC = kcg_lit_int32(0);
  outC->_L95.NID_C = kcg_lit_int32(0);
  outC->_L95.NID_RBC = kcg_lit_int32(0);
  outC->_L95.NID_RADIO = kcg_lit_int32(0);
  outC->_L95.Q_SLEEPSESSION = kcg_lit_int32(0);
  outC->_L96.valid = kcg_true;
  outC->_L96.NID_PACKET = kcg_lit_int32(0);
  outC->_L96.Q_DIR = kcg_lit_int32(0);
  outC->_L96.L_PACKET = kcg_lit_int32(0);
  outC->_L96.Q_SCALE = kcg_lit_int32(0);
  outC->_L96.V_LOA = kcg_lit_int32(0);
  outC->_L96.T_LOA = kcg_lit_int32(0);
  outC->_L96.N_ITER = kcg_lit_int32(0);
  for (idx9 = 0; idx9 < 32; idx9++) {
    outC->_L96.SECTIONS[idx9].L_SECTION = kcg_lit_int32(0);
    outC->_L96.SECTIONS[idx9].Q_SECTIONTIMER = kcg_lit_int32(0);
    outC->_L96.SECTIONS[idx9].T_SECTIONTIMER = kcg_lit_int32(0);
    outC->_L96.SECTIONS[idx9].D_SECTIONTIMERSTOPLOC = kcg_lit_int32(0);
  }
  outC->_L96.L_ENDSECTION = kcg_lit_int32(0);
  outC->_L96.Q_SECTIONTIMER = kcg_lit_int32(0);
  outC->_L96.T_SECTIONTIMER = kcg_lit_int32(0);
  outC->_L96.D_SECTIONTIMERSTOPLOC = kcg_lit_int32(0);
  outC->_L96.Q_ENDTIMER = kcg_lit_int32(0);
  outC->_L96.T_ENDTIMER = kcg_lit_int32(0);
  outC->_L96.D_ENDTIMERSTARTLOC = kcg_lit_int32(0);
  outC->_L96.Q_DANGERPOINT = kcg_lit_int32(0);
  outC->_L96.D_DP = kcg_lit_int32(0);
  outC->_L96.V_RELEASEDP = kcg_lit_int32(0);
  outC->_L96.Q_OVERLAP = kcg_lit_int32(0);
  outC->_L96.D_STARTOL = kcg_lit_int32(0);
  outC->_L96.T_OL = kcg_lit_int32(0);
  outC->_L96.D_OL = kcg_lit_int32(0);
  outC->_L96.V_RELEASEOL = kcg_lit_int32(0);
  outC->_L42 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L41 = kcg_lit_int32(0);
  outC->_L40 = Q_DIR_Reverse;
  outC->_L39 = kcg_lit_int32(0);
  outC->_L38 = kcg_lit_int32(0);
  outC->_L37 = Q_SCALE_10_cm_scale;
  outC->_L36 = kcg_lit_int32(0);
  outC->_L27.radioDevice = kcg_lit_int32(0);
  outC->_L27.receivedSystemTime = kcg_lit_int32(0);
  outC->_L27.nid_message = kcg_lit_int32(0);
  outC->_L27.t_train = kcg_lit_int32(0);
  outC->_L27.m_ack = kcg_lit_int32(0);
  outC->_L27.nid_lrbg = kcg_lit_int32(0);
  outC->_L27.t_train_reference = kcg_lit_int32(0);
  outC->_L27.nid_em = kcg_lit_int32(0);
  outC->_L27.q_scale = kcg_lit_int32(0);
  outC->_L27.d_sr = kcg_lit_int32(0);
  outC->_L27.t_sh_rqst = kcg_lit_int32(0);
  outC->_L27.d_ref = kcg_lit_int32(0);
  outC->_L27.q_dir = kcg_lit_int32(0);
  outC->_L27.d_emergencystop = kcg_lit_int32(0);
  outC->_L27.m_version = kcg_lit_int32(0);
  outC->_L16 = kcg_lit_int32(0);
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
  for (idx10 = 0; idx10 < 30; idx10++) {
    outC->outRadioTrackTrainMessage.Messages.PacketHeaders[idx10].nid_packet =
      kcg_lit_int32(0);
    outC->outRadioTrackTrainMessage.Messages.PacketHeaders[idx10].q_dir =
      Q_DIR_Reverse;
    outC->outRadioTrackTrainMessage.Messages.PacketHeaders[idx10].valid = kcg_true;
    outC->outRadioTrackTrainMessage.Messages.PacketHeaders[idx10].startAddress =
      kcg_lit_int32(0);
    outC->outRadioTrackTrainMessage.Messages.PacketHeaders[idx10].endAddress =
      kcg_lit_int32(0);
  }
  for (idx11 = 0; idx11 < 500; idx11++) {
    outC->outRadioTrackTrainMessage.Messages.PacketData[idx11] = kcg_lit_int32(0);
  }
  /* _L102=(RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets#2)/ */
  SEND_MergeRadioPackets_init_RBC_SendMergeRadio_Pkg(
    &outC->Context_SEND_MergeRadioPackets_2);
  /* _L27=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create#1)/ */
  RadioTrackTrainHeader__Create_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Create_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RadioTrackTrainFactory__CreateMsg008_BSL2_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg(
  outC_RadioTrackTrainFactory__CreateMsg008_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg *outC)
{
  /* _L102=(RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets#2)/ */
  SEND_MergeRadioPackets_reset_RBC_SendMergeRadio_Pkg(
    &outC->Context_SEND_MergeRadioPackets_2);
  /* _L27=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create#1)/ */
  RadioTrackTrainHeader__Create_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Create_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RadioTrackTrainFactory__CreateMsg008_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

