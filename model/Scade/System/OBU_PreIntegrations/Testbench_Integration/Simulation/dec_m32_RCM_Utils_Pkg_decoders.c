/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "dec_m32_RCM_Utils_Pkg_decoders.h"

/* RCM_Utils_Pkg::decoders::dec_m32/ */
void dec_m32_RCM_Utils_Pkg_decoders(
  /* msg_in/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg *msg_in,
  /* systemVersionFromTracksideSupported/ */
  kcg_bool systemVersionFromTracksideSupported,
  outC_dec_m32_RCM_Utils_Pkg_decoders *outC)
{
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&outC->_L1, msg_in);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L93,
    &outC->_L1.Radio_Common_Header);
  outC->_L110 = outC->_L93.m_version;
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&outC->_L114, msg_in);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&outC->_L115, &outC->_L114.sendingRBC);
  outC->_L113 = cm32_RBC_RIU_System_Version_Id_Pkg;
  outC->_L109 = outC->_L93.nid_message;
  outC->_L79 = outC->_L109 == outC->_L113;
  outC->_L89 = msrc_RadioInfillUnit_Common_Types_Pkg;
  outC->_L87 = outC->_L1.source;
  outC->_L92 = outC->_L87 == outC->_L89;
  outC->_L88 = msrc_Euroradio_Common_Types_Pkg;
  outC->_L91 = outC->_L87 == outC->_L88;
  outC->_L90 = outC->_L91 | outC->_L92;
  outC->_L17 = outC->_L1.valid;
  outC->_L77 = outC->_L17 & outC->_L90 & outC->_L79;
  outC->_L111 = systemVersionFromTracksideSupported;
  outC->_L112.valid = outC->_L77;
  outC->_L112.msgSrc = outC->_L87;
  outC->_L112.versionSupported = outC->_L111;
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&outC->_L112.origin, &outC->_L115);
  outC->_L112.m_version = outC->_L110;
  kcg_copy_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg(
    &outC->m32_RBC_or_RIU_System_Version,
    &outC->_L112);
}

#ifndef KCG_USER_DEFINED_INIT
void dec_m32_init_RCM_Utils_Pkg_decoders(
  outC_dec_m32_RCM_Utils_Pkg_decoders *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;

  outC->_L110 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L115.valid = kcg_true;
  outC->_L115.nid_c = kcg_lit_int64(0);
  outC->_L115.rbc_id = kcg_lit_int64(0);
  outC->_L115.device_id = kcg_lit_int64(0);
  outC->_L114.valid = kcg_true;
  outC->_L114.source = msrc_undefined_Common_Types_Pkg;
  outC->_L114.radioMetadata.t_train_reference = kcg_true;
  outC->_L114.radioMetadata.nid_em = kcg_true;
  outC->_L114.radioMetadata.q_scale = kcg_true;
  outC->_L114.radioMetadata.d_sr = kcg_true;
  outC->_L114.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L114.radioMetadata.d_ref = kcg_true;
  outC->_L114.radioMetadata.q_dir = kcg_true;
  outC->_L114.radioMetadata.d_emergencystop = kcg_true;
  outC->_L114.radioMetadata.m_version = kcg_true;
  outC->_L114.BG_Common_Header.valid = kcg_true;
  outC->_L114.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L114.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L114.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L114.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L114.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L114.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L114.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L114.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L114.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L114.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L114.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L114.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L114.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L114.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L114.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L114.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L114.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L114.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L114.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L114.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L114.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L114.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L114.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L114.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L114.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L114.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L114.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L114.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L114.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L114.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L114.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L114.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L114.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L114.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L114.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L114.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L114.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L114.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L114.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L114.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L114.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L114.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx = 0; idx < 30; idx++) {
    outC->_L114.packets.PacketHeaders[idx].nid_packet = kcg_lit_int64(0);
    outC->_L114.packets.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L114.packets.PacketHeaders[idx].valid = kcg_true;
    outC->_L114.packets.PacketHeaders[idx].startAddress = kcg_lit_int64(0);
    outC->_L114.packets.PacketHeaders[idx].endAddress = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L114.packets.PacketData[idx1] = kcg_lit_int64(0);
  }
  outC->_L114.sendingRBC.valid = kcg_true;
  outC->_L114.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L114.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L114.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L113 = kcg_lit_int64(0);
  outC->_L112.valid = kcg_true;
  outC->_L112.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L112.versionSupported = kcg_true;
  outC->_L112.origin.valid = kcg_true;
  outC->_L112.origin.nid_c = kcg_lit_int64(0);
  outC->_L112.origin.rbc_id = kcg_lit_int64(0);
  outC->_L112.origin.device_id = kcg_lit_int64(0);
  outC->_L112.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L111 = kcg_true;
  outC->_L109 = kcg_lit_int64(0);
  outC->_L93.radioDevice = kcg_lit_int64(0);
  outC->_L93.receivedSystemTime = kcg_lit_int64(0);
  outC->_L93.nid_message = kcg_lit_int64(0);
  outC->_L93.t_train = kcg_lit_int64(0);
  outC->_L93.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L93.nid_lrbg = kcg_lit_int64(0);
  outC->_L93.t_train_reference = kcg_lit_int64(0);
  outC->_L93.nid_em = kcg_lit_int64(0);
  outC->_L93.q_scale = Q_SCALE_10_cm_scale;
  outC->_L93.d_sr = kcg_lit_int64(0);
  outC->_L93.t_sh_rqst = kcg_lit_int64(0);
  outC->_L93.d_ref = kcg_lit_int64(0);
  outC->_L93.q_dir = Q_DIR_Reverse;
  outC->_L93.d_emergencystop = kcg_lit_int64(0);
  outC->_L93.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L88 = msrc_undefined_Common_Types_Pkg;
  outC->_L89 = msrc_undefined_Common_Types_Pkg;
  outC->_L90 = kcg_true;
  outC->_L91 = kcg_true;
  outC->_L92 = kcg_true;
  outC->_L87 = msrc_undefined_Common_Types_Pkg;
  outC->_L77 = kcg_true;
  outC->_L79 = kcg_true;
  outC->_L17 = kcg_true;
  outC->_L1.valid = kcg_true;
  outC->_L1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L1.radioMetadata.t_train_reference = kcg_true;
  outC->_L1.radioMetadata.nid_em = kcg_true;
  outC->_L1.radioMetadata.q_scale = kcg_true;
  outC->_L1.radioMetadata.d_sr = kcg_true;
  outC->_L1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L1.radioMetadata.d_ref = kcg_true;
  outC->_L1.radioMetadata.q_dir = kcg_true;
  outC->_L1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L1.radioMetadata.m_version = kcg_true;
  outC->_L1.BG_Common_Header.valid = kcg_true;
  outC->_L1.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L1.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L1.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L1.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L1.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L1.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L1.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L1.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L1.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L1.packets.PacketHeaders[idx2].nid_packet = kcg_lit_int64(0);
    outC->_L1.packets.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L1.packets.PacketHeaders[idx2].valid = kcg_true;
    outC->_L1.packets.PacketHeaders[idx2].startAddress = kcg_lit_int64(0);
    outC->_L1.packets.PacketHeaders[idx2].endAddress = kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L1.packets.PacketData[idx3] = kcg_lit_int64(0);
  }
  outC->_L1.sendingRBC.valid = kcg_true;
  outC->_L1.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L1.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L1.sendingRBC.device_id = kcg_lit_int64(0);
  outC->m32_RBC_or_RIU_System_Version.valid = kcg_true;
  outC->m32_RBC_or_RIU_System_Version.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->m32_RBC_or_RIU_System_Version.versionSupported = kcg_true;
  outC->m32_RBC_or_RIU_System_Version.origin.valid = kcg_true;
  outC->m32_RBC_or_RIU_System_Version.origin.nid_c = kcg_lit_int64(0);
  outC->m32_RBC_or_RIU_System_Version.origin.rbc_id = kcg_lit_int64(0);
  outC->m32_RBC_or_RIU_System_Version.origin.device_id = kcg_lit_int64(0);
  outC->m32_RBC_or_RIU_System_Version.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void dec_m32_reset_RCM_Utils_Pkg_decoders(
  outC_dec_m32_RCM_Utils_Pkg_decoders *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** dec_m32_RCM_Utils_Pkg_decoders.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

