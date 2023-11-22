/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "p131_rbcTransitionOrder_2_Handover_Pkg_handoverUtils_Pkg.h"

/* Handover_Pkg::handoverUtils_Pkg::p131_rbcTransitionOrder_2_p42_establishSession/ */
void p131_rbcTransitionOrder_2_Handover_Pkg_handoverUtils_Pkg(
  /* p131_transitionOrder/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg *p131_transitionOrder,
  outC_p131_rbcTransitionOrder_2_Handover_Pkg_handoverUtils_Pkg *outC)
{
  Q_SCALE noname;
  D_RBCTR _1_noname;

  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&outC->_L37, p131_transitionOrder);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L52, &outC->_L37.packets);
  /* _L53=(TM::Read_P131#1)/ */
  Read_P131_TM(&outC->_L52, &outC->Context_Read_P131_1);
  outC->_L53 = outC->Context_Read_P131_1.received;
  kcg_copy_P131_OBU_T_TM(&outC->_L54, &outC->Context_Read_P131_1.P131_OBU_out);
  outC->_L68 = outC->_L54.d_rbctr;
  _1_noname = outC->_L68;
  outC->_L67 = outC->_L54.q_scale;
  noname = outC->_L67;
  outC->_L65 = outC->_L54.valid;
  outC->_L66 = outC->_L54.q_dir;
  outC->_L81 = Q_RBC_Establish_communication_session;
  outC->_L69 = outC->_L54.nid_c;
  outC->_L70 = outC->_L54.nid_rbc;
  outC->_L71 = outC->_L54.nid_radio;
  outC->_L72 = outC->_L54.q_sleepsession;
  outC->_L135.valid = outC->_L65;
  outC->_L135.q_dir = outC->_L66;
  outC->_L135.q_rbc = outC->_L81;
  outC->_L135.nid_c = outC->_L69;
  outC->_L135.nid_rbc = outC->_L70;
  outC->_L135.nid_radio = outC->_L71;
  outC->_L135.q_sleepsession = outC->_L72;
  /* _L120=(TM_specific_send::Send_P042_no_merge#1)/ */
  Send_P042_no_merge_TM_specific_send(
    &outC->_L135,
    &outC->Context_Send_P042_no_merge_1);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L120,
    &outC->Context_Send_P042_no_merge_1.RadioPacketsOut);
  outC->_L55 = outC->_L37.valid;
  outC->_L56 = outC->_L55 & outC->_L53;
  outC->_L74 = outC->_L37.source;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &outC->_L75,
    &outC->_L37.radioMetadata);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L76, &outC->_L37.BG_Common_Header);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L77,
    &outC->_L37.Radio_Common_Header);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&outC->_L78, &outC->_L37.sendingRBC);
  outC->_L73.valid = outC->_L56;
  outC->_L73.source = outC->_L74;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &outC->_L73.radioMetadata,
    &outC->_L75);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L73.BG_Common_Header, &outC->_L76);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L73.Radio_Common_Header,
    &outC->_L77);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L73.packets,
    &outC->_L120);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&outC->_L73.sendingRBC, &outC->_L78);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &outC->p42_establishSession,
    &outC->_L73);
}

#ifndef KCG_USER_DEFINED_INIT
void p131_rbcTransitionOrder_2_init_Handover_Pkg_handoverUtils_Pkg(
  outC_p131_rbcTransitionOrder_2_Handover_Pkg_handoverUtils_Pkg *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;
  kcg_size idx6;
  kcg_size idx7;
  kcg_size idx8;
  kcg_size idx9;

  outC->_L135.valid = kcg_true;
  outC->_L135.q_dir = Q_DIR_Reverse;
  outC->_L135.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L135.nid_c = kcg_lit_int32(0);
  outC->_L135.nid_rbc = kcg_lit_int32(0);
  outC->_L135.nid_radio = kcg_lit_int64(0);
  outC->_L135.q_sleepsession = Q_SLEEPSESSION_Ignore_session_establishment_order;
  for (idx = 0; idx < 30; idx++) {
    outC->_L120.PacketHeaders[idx].nid_packet = kcg_lit_int32(0);
    outC->_L120.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L120.PacketHeaders[idx].valid = kcg_true;
    outC->_L120.PacketHeaders[idx].startAddress = kcg_lit_int32(0);
    outC->_L120.PacketHeaders[idx].endAddress = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L120.PacketData[idx1] = kcg_lit_int32(0);
  }
  outC->_L81 = Q_RBC_Terminate_communication_session;
  outC->_L78.valid = kcg_true;
  outC->_L78.nid_c = kcg_lit_int32(0);
  outC->_L78.rbc_id = kcg_lit_int32(0);
  outC->_L78.device_id = kcg_lit_int32(0);
  outC->_L77.radioDevice = kcg_lit_int32(0);
  outC->_L77.receivedSystemTime = kcg_lit_int32(0);
  outC->_L77.nid_message = kcg_lit_int32(0);
  outC->_L77.t_train = kcg_lit_int32(0);
  outC->_L77.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L77.nid_lrbg = kcg_lit_int32(0);
  outC->_L77.t_train_reference = kcg_lit_int32(0);
  outC->_L77.nid_em = kcg_lit_int32(0);
  outC->_L77.q_scale = Q_SCALE_10_cm_scale;
  outC->_L77.d_sr = kcg_lit_int32(0);
  outC->_L77.t_sh_rqst = kcg_lit_int32(0);
  outC->_L77.d_ref = kcg_lit_int32(0);
  outC->_L77.q_dir = Q_DIR_Reverse;
  outC->_L77.d_emergencystop = kcg_lit_int32(0);
  outC->_L77.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L76.valid = kcg_true;
  outC->_L76.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L76.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L76.q_media = Q_MEDIA_Balise;
  outC->_L76.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L76.m_mcount = kcg_lit_int32(0);
  outC->_L76.nid_c = kcg_lit_int32(0);
  outC->_L76.nid_bg = kcg_lit_int32(0);
  outC->_L76.q_link = Q_LINK_Unlinked;
  outC->_L76.bgPosition.valid = kcg_true;
  outC->_L76.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L76.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L76.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L76.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L76.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L76.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L76.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L76.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L76.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L76.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L76.bgPosition.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L76.BG_centerDetectionInaccuraccuracies.nominal = kcg_lit_int32(0);
  outC->_L76.BG_centerDetectionInaccuraccuracies.d_min = kcg_lit_int32(0);
  outC->_L76.BG_centerDetectionInaccuraccuracies.d_max = kcg_lit_int32(0);
  outC->_L76.q_nvlocacc = kcg_lit_int32(0);
  outC->_L76.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L76.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L76.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L75.t_train_reference = kcg_true;
  outC->_L75.nid_em = kcg_true;
  outC->_L75.q_scale = kcg_true;
  outC->_L75.d_sr = kcg_true;
  outC->_L75.t_sh_rqst = kcg_true;
  outC->_L75.d_ref = kcg_true;
  outC->_L75.q_dir = kcg_true;
  outC->_L75.d_emergencystop = kcg_true;
  outC->_L75.m_version = kcg_true;
  outC->_L74 = msrc_undefined_Common_Types_Pkg;
  outC->_L73.valid = kcg_true;
  outC->_L73.source = msrc_undefined_Common_Types_Pkg;
  outC->_L73.radioMetadata.t_train_reference = kcg_true;
  outC->_L73.radioMetadata.nid_em = kcg_true;
  outC->_L73.radioMetadata.q_scale = kcg_true;
  outC->_L73.radioMetadata.d_sr = kcg_true;
  outC->_L73.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L73.radioMetadata.d_ref = kcg_true;
  outC->_L73.radioMetadata.q_dir = kcg_true;
  outC->_L73.radioMetadata.d_emergencystop = kcg_true;
  outC->_L73.radioMetadata.m_version = kcg_true;
  outC->_L73.BG_Common_Header.valid = kcg_true;
  outC->_L73.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L73.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L73.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L73.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L73.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L73.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L73.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L73.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L73.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L73.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L73.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L73.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L73.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L73.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L73.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L73.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L73.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L73.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L73.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L73.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L73.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L73.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L73.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L73.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L73.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L73.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L73.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L73.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L73.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L73.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L73.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L73.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L73.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L73.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L73.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L73.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L73.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L73.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L73.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L73.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L73.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L73.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L73.packets.PacketHeaders[idx2].nid_packet = kcg_lit_int32(0);
    outC->_L73.packets.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L73.packets.PacketHeaders[idx2].valid = kcg_true;
    outC->_L73.packets.PacketHeaders[idx2].startAddress = kcg_lit_int32(0);
    outC->_L73.packets.PacketHeaders[idx2].endAddress = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L73.packets.PacketData[idx3] = kcg_lit_int32(0);
  }
  outC->_L73.sendingRBC.valid = kcg_true;
  outC->_L73.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L73.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L73.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L65 = kcg_true;
  outC->_L66 = Q_DIR_Reverse;
  outC->_L67 = Q_SCALE_10_cm_scale;
  outC->_L68 = kcg_lit_int32(0);
  outC->_L69 = kcg_lit_int32(0);
  outC->_L70 = kcg_lit_int32(0);
  outC->_L71 = kcg_lit_int64(0);
  outC->_L72 = Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L56 = kcg_true;
  outC->_L55 = kcg_true;
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L52.PacketHeaders[idx4].nid_packet = kcg_lit_int32(0);
    outC->_L52.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->_L52.PacketHeaders[idx4].valid = kcg_true;
    outC->_L52.PacketHeaders[idx4].startAddress = kcg_lit_int32(0);
    outC->_L52.PacketHeaders[idx4].endAddress = kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L52.PacketData[idx5] = kcg_lit_int32(0);
  }
  outC->_L54.valid = kcg_true;
  outC->_L54.q_dir = Q_DIR_Reverse;
  outC->_L54.q_scale = Q_SCALE_10_cm_scale;
  outC->_L54.d_rbctr = kcg_lit_int32(0);
  outC->_L54.nid_c = kcg_lit_int32(0);
  outC->_L54.nid_rbc = kcg_lit_int32(0);
  outC->_L54.nid_radio = kcg_lit_int64(0);
  outC->_L54.q_sleepsession = Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L53 = kcg_true;
  outC->_L37.valid = kcg_true;
  outC->_L37.source = msrc_undefined_Common_Types_Pkg;
  outC->_L37.radioMetadata.t_train_reference = kcg_true;
  outC->_L37.radioMetadata.nid_em = kcg_true;
  outC->_L37.radioMetadata.q_scale = kcg_true;
  outC->_L37.radioMetadata.d_sr = kcg_true;
  outC->_L37.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L37.radioMetadata.d_ref = kcg_true;
  outC->_L37.radioMetadata.q_dir = kcg_true;
  outC->_L37.radioMetadata.d_emergencystop = kcg_true;
  outC->_L37.radioMetadata.m_version = kcg_true;
  outC->_L37.BG_Common_Header.valid = kcg_true;
  outC->_L37.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L37.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L37.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L37.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L37.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L37.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L37.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L37.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L37.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L37.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L37.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L37.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L37.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L37.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L37.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L37.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L37.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L37.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L37.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L37.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L37.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L37.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L37.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L37.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L37.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L37.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L37.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L37.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L37.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L37.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L37.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L37.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L37.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L37.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L37.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L37.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L37.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L37.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L37.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L37.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L37.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L37.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx6 = 0; idx6 < 30; idx6++) {
    outC->_L37.packets.PacketHeaders[idx6].nid_packet = kcg_lit_int32(0);
    outC->_L37.packets.PacketHeaders[idx6].q_dir = Q_DIR_Reverse;
    outC->_L37.packets.PacketHeaders[idx6].valid = kcg_true;
    outC->_L37.packets.PacketHeaders[idx6].startAddress = kcg_lit_int32(0);
    outC->_L37.packets.PacketHeaders[idx6].endAddress = kcg_lit_int32(0);
  }
  for (idx7 = 0; idx7 < 500; idx7++) {
    outC->_L37.packets.PacketData[idx7] = kcg_lit_int32(0);
  }
  outC->_L37.sendingRBC.valid = kcg_true;
  outC->_L37.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L37.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L37.sendingRBC.device_id = kcg_lit_int32(0);
  outC->p42_establishSession.valid = kcg_true;
  outC->p42_establishSession.source = msrc_undefined_Common_Types_Pkg;
  outC->p42_establishSession.radioMetadata.t_train_reference = kcg_true;
  outC->p42_establishSession.radioMetadata.nid_em = kcg_true;
  outC->p42_establishSession.radioMetadata.q_scale = kcg_true;
  outC->p42_establishSession.radioMetadata.d_sr = kcg_true;
  outC->p42_establishSession.radioMetadata.t_sh_rqst = kcg_true;
  outC->p42_establishSession.radioMetadata.d_ref = kcg_true;
  outC->p42_establishSession.radioMetadata.q_dir = kcg_true;
  outC->p42_establishSession.radioMetadata.d_emergencystop = kcg_true;
  outC->p42_establishSession.radioMetadata.m_version = kcg_true;
  outC->p42_establishSession.BG_Common_Header.valid = kcg_true;
  outC->p42_establishSession.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->p42_establishSession.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->p42_establishSession.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->p42_establishSession.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->p42_establishSession.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->p42_establishSession.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->p42_establishSession.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->p42_establishSession.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->p42_establishSession.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->p42_establishSession.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->p42_establishSession.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->p42_establishSession.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->p42_establishSession.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->p42_establishSession.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->p42_establishSession.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->p42_establishSession.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->p42_establishSession.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->p42_establishSession.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->p42_establishSession.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->p42_establishSession.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->p42_establishSession.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->p42_establishSession.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->p42_establishSession.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->p42_establishSession.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->p42_establishSession.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->p42_establishSession.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->p42_establishSession.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->p42_establishSession.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->p42_establishSession.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->p42_establishSession.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->p42_establishSession.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->p42_establishSession.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->p42_establishSession.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->p42_establishSession.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->p42_establishSession.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->p42_establishSession.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->p42_establishSession.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->p42_establishSession.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->p42_establishSession.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->p42_establishSession.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->p42_establishSession.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->p42_establishSession.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx8 = 0; idx8 < 30; idx8++) {
    outC->p42_establishSession.packets.PacketHeaders[idx8].nid_packet =
      kcg_lit_int32(0);
    outC->p42_establishSession.packets.PacketHeaders[idx8].q_dir = Q_DIR_Reverse;
    outC->p42_establishSession.packets.PacketHeaders[idx8].valid = kcg_true;
    outC->p42_establishSession.packets.PacketHeaders[idx8].startAddress =
      kcg_lit_int32(0);
    outC->p42_establishSession.packets.PacketHeaders[idx8].endAddress =
      kcg_lit_int32(0);
  }
  for (idx9 = 0; idx9 < 500; idx9++) {
    outC->p42_establishSession.packets.PacketData[idx9] = kcg_lit_int32(0);
  }
  outC->p42_establishSession.sendingRBC.valid = kcg_true;
  outC->p42_establishSession.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->p42_establishSession.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->p42_establishSession.sendingRBC.device_id = kcg_lit_int32(0);
  /* _L120=(TM_specific_send::Send_P042_no_merge#1)/ */
  Send_P042_no_merge_init_TM_specific_send(&outC->Context_Send_P042_no_merge_1);
  /* _L53=(TM::Read_P131#1)/ */ Read_P131_init_TM(&outC->Context_Read_P131_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void p131_rbcTransitionOrder_2_reset_Handover_Pkg_handoverUtils_Pkg(
  outC_p131_rbcTransitionOrder_2_Handover_Pkg_handoverUtils_Pkg *outC)
{
  /* _L120=(TM_specific_send::Send_P042_no_merge#1)/ */
  Send_P042_no_merge_reset_TM_specific_send(
    &outC->Context_Send_P042_no_merge_1);
  /* _L53=(TM::Read_P131#1)/ */ Read_P131_reset_TM(&outC->Context_Read_P131_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** p131_rbcTransitionOrder_2_Handover_Pkg_handoverUtils_Pkg.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

