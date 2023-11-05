/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getLRBGFromMsg_xdebugSupport_Pkg.h"

/* xdebugSupport_Pkg::getLRBGFromMsg/ */
void getLRBGFromMsg_xdebugSupport_Pkg(
  /* actualMessage/ */
  ReceivedMessage_T_Common_Types_Pkg *actualMessage,
  outC_getLRBGFromMsg_xdebugSupport_Pkg *outC)
{
  outC->_L34 = kcg_lit_int32(100000);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L6, actualMessage);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L22, &outC->_L6.BG_Common_Header);
  outC->_L23 = outC->_L22.nid_c;
  outC->_L32 = outC->_L23 * outC->_L34;
  outC->_L21 = outC->_L22.nid_bg;
  outC->_L33 = outC->_L21 + outC->_L32;
  outC->_L25 = kcg_lit_int32(0);
  outC->_L19 = msrc_Eurobalise_Common_Types_Pkg;
  outC->_L18 = outC->_L6.source;
  outC->_L20 = outC->_L18 == outC->_L19;
  /* _L24= */
  if (outC->_L20) {
    outC->_L24 = outC->_L33;
  }
  else {
    outC->_L24 = outC->_L25;
  }
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L3,
    &outC->_L6.Radio_Common_Header);
  outC->_L4 = outC->_L3.nid_lrbg;
  outC->_L8 = msrc_Euroradio_Common_Types_Pkg;
  outC->_L5 = outC->_L6.source;
  outC->_L7 = outC->_L5 == outC->_L8;
  /* _L17= */
  if (outC->_L7) {
    outC->_L17 = outC->_L4;
  }
  else {
    outC->_L17 = outC->_L24;
  }
  outC->LRBG = outC->_L17;
}

#ifndef KCG_USER_DEFINED_INIT
void getLRBGFromMsg_init_xdebugSupport_Pkg(
  outC_getLRBGFromMsg_xdebugSupport_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L34 = kcg_lit_int32(0);
  outC->_L33 = kcg_lit_int32(0);
  outC->_L32 = kcg_lit_int32(0);
  outC->_L25 = kcg_lit_int32(0);
  outC->_L24 = kcg_lit_int32(0);
  outC->_L23 = kcg_lit_int32(0);
  outC->_L21 = kcg_lit_int32(0);
  outC->_L22.valid = kcg_true;
  outC->_L22.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L22.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L22.q_media = Q_MEDIA_Balise;
  outC->_L22.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L22.m_mcount = kcg_lit_int32(0);
  outC->_L22.nid_c = kcg_lit_int32(0);
  outC->_L22.nid_bg = kcg_lit_int32(0);
  outC->_L22.q_link = Q_LINK_Unlinked;
  outC->_L22.bgPosition.valid = kcg_true;
  outC->_L22.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L22.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L22.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L22.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L22.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L22.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L22.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L22.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L22.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L22.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L22.bgPosition.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L22.BG_centerDetectionInaccuraccuracies.nominal = kcg_lit_int32(0);
  outC->_L22.BG_centerDetectionInaccuraccuracies.d_min = kcg_lit_int32(0);
  outC->_L22.BG_centerDetectionInaccuraccuracies.d_max = kcg_lit_int32(0);
  outC->_L22.q_nvlocacc = kcg_lit_int32(0);
  outC->_L22.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L22.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L22.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L18 = msrc_undefined_Common_Types_Pkg;
  outC->_L19 = msrc_undefined_Common_Types_Pkg;
  outC->_L20 = kcg_true;
  outC->_L17 = kcg_lit_int32(0);
  outC->_L3.radioDevice = kcg_lit_int32(0);
  outC->_L3.receivedSystemTime = kcg_lit_int32(0);
  outC->_L3.nid_message = kcg_lit_int32(0);
  outC->_L3.t_train = kcg_lit_int32(0);
  outC->_L3.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L3.nid_lrbg = kcg_lit_int32(0);
  outC->_L3.t_train_reference = kcg_lit_int32(0);
  outC->_L3.nid_em = kcg_lit_int32(0);
  outC->_L3.q_scale = Q_SCALE_10_cm_scale;
  outC->_L3.d_sr = kcg_lit_int32(0);
  outC->_L3.t_sh_rqst = kcg_lit_int32(0);
  outC->_L3.d_ref = kcg_lit_int32(0);
  outC->_L3.q_dir = Q_DIR_Reverse;
  outC->_L3.d_emergencystop = kcg_lit_int32(0);
  outC->_L3.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L4 = kcg_lit_int32(0);
  outC->_L5 = msrc_undefined_Common_Types_Pkg;
  outC->_L6.valid = kcg_true;
  outC->_L6.source = msrc_undefined_Common_Types_Pkg;
  outC->_L6.radioMetadata.t_train_reference = kcg_true;
  outC->_L6.radioMetadata.nid_em = kcg_true;
  outC->_L6.radioMetadata.q_scale = kcg_true;
  outC->_L6.radioMetadata.d_sr = kcg_true;
  outC->_L6.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L6.radioMetadata.d_ref = kcg_true;
  outC->_L6.radioMetadata.q_dir = kcg_true;
  outC->_L6.radioMetadata.d_emergencystop = kcg_true;
  outC->_L6.radioMetadata.m_version = kcg_true;
  outC->_L6.BG_Common_Header.valid = kcg_true;
  outC->_L6.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L6.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L6.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L6.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L6.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L6.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L6.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L6.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L6.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L6.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L6.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L6.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L6.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L6.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L6.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L6.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L6.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L6.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L6.BG_Common_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L6.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L6.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L6.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L6.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L6.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L6.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L6.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L6.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L6.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L6.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L6.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L6.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L6.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L6.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L6.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L6.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L6.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L6.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L6.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L6.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L6.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L6.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L6.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx = 0; idx < 30; idx++) {
    outC->_L6.packets.PacketHeaders[idx].nid_packet = kcg_lit_int32(0);
    outC->_L6.packets.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L6.packets.PacketHeaders[idx].valid = kcg_true;
    outC->_L6.packets.PacketHeaders[idx].startAddress = kcg_lit_int32(0);
    outC->_L6.packets.PacketHeaders[idx].endAddress = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L6.packets.PacketData[idx1] = kcg_lit_int32(0);
  }
  outC->_L6.sendingRBC.valid = kcg_true;
  outC->_L6.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L6.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L6.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L7 = kcg_true;
  outC->_L8 = msrc_undefined_Common_Types_Pkg;
  outC->LRBG = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void getLRBGFromMsg_reset_xdebugSupport_Pkg(
  outC_getLRBGFromMsg_xdebugSupport_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** getLRBGFromMsg_xdebugSupport_Pkg.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

