/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/ObuFunctions/Radio/MoRC/Simulation/config.txt
** Generation date: 2023-09-01T13:21:48
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "dec_p42_RCM_Utils_Pkg_decoders.h"

/* RCM_Utils_Pkg::decoders::dec_p42/ */
void dec_p42_RCM_Utils_Pkg_decoders(
  /* msg_in/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg *_1_msg_in,
  outC_dec_p42_RCM_Utils_Pkg_decoders *outC)
{
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&outC->_L1, _1_msg_in);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&outC->_L86, &outC->_L1.sendingRBC);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L27, &outC->_L1.packets);
  /* _L28=(TM::Read_P042#1)/ */
  Read_P042_TM(&outC->_L27, &outC->Context_Read_P042_1);
  outC->_L28 = outC->Context_Read_P042_1.received;
  kcg_copy_P42_SessionManagement_T_Packet_Types_Pkg(
    &outC->_L29,
    &outC->Context_Read_P042_1.P042_OBU_out);
  outC->_L37 = outC->_L29.valid;
  outC->_L17 = outC->_L1.valid;
  outC->_L26 = outC->_L17 & outC->_L28 & outC->_L37;
  outC->_L20 = outC->_L1.source;
  outC->_L38 = outC->_L29.q_dir;
  outC->_L39 = outC->_L29.q_rbc;
  outC->_L40 = outC->_L29.nid_c;
  outC->_L41 = outC->_L29.nid_rbc;
  outC->_L42 = outC->_L29.nid_radio;
  outC->_L43 = outC->_L29.q_sleepsession;
  outC->_L85.valid = outC->_L26;
  outC->_L85.msgSrc = outC->_L20;
  outC->_L85.q_dir = outC->_L38;
  outC->_L85.q_rbc = outC->_L39;
  outC->_L85.nid_c = outC->_L40;
  outC->_L85.nid_RBC = outC->_L41;
  outC->_L85.nid_radio = outC->_L42;
  outC->_L85.q_sleepsession = outC->_L43;
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&outC->_L85.origin, &outC->_L86);
  kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
    &outC->p42_sessionManagement,
    &outC->_L85);
}

#ifndef KCG_USER_DEFINED_INIT
void dec_p42_init_RCM_Utils_Pkg_decoders(
  outC_dec_p42_RCM_Utils_Pkg_decoders *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;

  outC->_L86.valid = kcg_true;
  outC->_L86.nid_c = kcg_lit_int32(0);
  outC->_L86.rbc_id = kcg_lit_int32(0);
  outC->_L86.device_id = kcg_lit_int32(0);
  outC->_L85.valid = kcg_true;
  outC->_L85.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L85.q_dir = Q_DIR_Reverse;
  outC->_L85.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L85.nid_c = kcg_lit_int32(0);
  outC->_L85.nid_RBC = kcg_lit_int32(0);
  outC->_L85.nid_radio = kcg_lit_int32(0);
  outC->_L85.q_sleepsession = Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L85.origin.valid = kcg_true;
  outC->_L85.origin.nid_c = kcg_lit_int32(0);
  outC->_L85.origin.rbc_id = kcg_lit_int32(0);
  outC->_L85.origin.device_id = kcg_lit_int32(0);
  outC->_L37 = kcg_true;
  outC->_L38 = Q_DIR_Reverse;
  outC->_L39 = Q_RBC_Terminate_communication_session;
  outC->_L40 = kcg_lit_int32(0);
  outC->_L41 = kcg_lit_int32(0);
  outC->_L42 = kcg_lit_int32(0);
  outC->_L43 = Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L28 = kcg_true;
  outC->_L29.valid = kcg_true;
  outC->_L29.q_dir = Q_DIR_Reverse;
  outC->_L29.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L29.nid_c = kcg_lit_int32(0);
  outC->_L29.nid_rbc = kcg_lit_int32(0);
  outC->_L29.nid_radio = kcg_lit_int32(0);
  outC->_L29.q_sleepsession = Q_SLEEPSESSION_Ignore_session_establishment_order;
  for (idx = 0; idx < 30; idx++) {
    outC->_L27.PacketHeaders[idx].nid_packet = kcg_lit_int32(0);
    outC->_L27.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L27.PacketHeaders[idx].valid = kcg_true;
    outC->_L27.PacketHeaders[idx].startAddress = kcg_lit_int32(0);
    outC->_L27.PacketHeaders[idx].endAddress = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L27.PacketData[idx1] = kcg_lit_int32(0);
  }
  outC->_L26 = kcg_true;
  outC->_L20 = msrc_undefined_Common_Types_Pkg;
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
  outC->_L1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L1.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L1.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L1.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L1.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L1.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L1.packets.PacketHeaders[idx2].nid_packet = kcg_lit_int32(0);
    outC->_L1.packets.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L1.packets.PacketHeaders[idx2].valid = kcg_true;
    outC->_L1.packets.PacketHeaders[idx2].startAddress = kcg_lit_int32(0);
    outC->_L1.packets.PacketHeaders[idx2].endAddress = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L1.packets.PacketData[idx3] = kcg_lit_int32(0);
  }
  outC->_L1.sendingRBC.valid = kcg_true;
  outC->_L1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->p42_sessionManagement.valid = kcg_true;
  outC->p42_sessionManagement.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->p42_sessionManagement.q_dir = Q_DIR_Reverse;
  outC->p42_sessionManagement.q_rbc = Q_RBC_Terminate_communication_session;
  outC->p42_sessionManagement.nid_c = kcg_lit_int32(0);
  outC->p42_sessionManagement.nid_RBC = kcg_lit_int32(0);
  outC->p42_sessionManagement.nid_radio = kcg_lit_int32(0);
  outC->p42_sessionManagement.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->p42_sessionManagement.origin.valid = kcg_true;
  outC->p42_sessionManagement.origin.nid_c = kcg_lit_int32(0);
  outC->p42_sessionManagement.origin.rbc_id = kcg_lit_int32(0);
  outC->p42_sessionManagement.origin.device_id = kcg_lit_int32(0);
  /* _L28=(TM::Read_P042#1)/ */ Read_P042_init_TM(&outC->Context_Read_P042_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void dec_p42_reset_RCM_Utils_Pkg_decoders(
  outC_dec_p42_RCM_Utils_Pkg_decoders *outC)
{
  /* _L28=(TM::Read_P042#1)/ */ Read_P042_reset_TM(&outC->Context_Read_P042_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** dec_p42_RCM_Utils_Pkg_decoders.c
** Generation date: 2023-09-01T13:21:48
*************************************************************$ */

