/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "setProbesBalises_xdebugSupport_Pkg.h"

/* xdebugSupport_Pkg::setProbesBalises/ */
void setProbesBalises_xdebugSupport_Pkg(
  /* inMsg/ */
  ReceivedMessage_T_Common_Types_Pkg *inMsg,
  /* inErrors/ */
  MSG_Errors_T_Common_Types_Pkg *inErrors,
  outC_setProbesBalises_xdebugSupport_Pkg *outC)
{
  /* baliseInfo/ */
  probesBalises_T_xdebugSupport_Pkg baliseInfo_partial;
  /* bgID/ */
  NID_BG bgID_partial;
  /* baliseInfo/ */
  probesBalises_T_xdebugSupport_Pkg _1_baliseInfo_partial;
  /* bgID/ */
  NID_BG _2_bgID_partial;
  /* bgID/ */
  NID_BG last_bgID;
  /* baliseInfo/ */
  probesBalises_T_xdebugSupport_Pkg last_baliseInfo;

  last_bgID = outC->bgID;
  kcg_copy_probesBalises_T_xdebugSupport_Pkg(&last_baliseInfo, &outC->baliseInfo);
  outC->_L51 = last_bgID;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L1, inMsg);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L49, &outC->_L1.BG_Common_Header);
  outC->_L50 = outC->_L49.nid_bg;
  outC->_L48 = kcg_false;
  outC->_L23 = outC->_L50 != outC->_L51;
  outC->_L46 = msrc_Eurobalise_Common_Types_Pkg;
  outC->_L43 = outC->_L1.source;
  outC->_L45 = outC->_L43 == outC->_L46;
  outC->_L20 = outC->_L1.valid;
  outC->_L28 = outC->_L20 & outC->_L45;
  /* _L47= */
  if (outC->_L28) {
    outC->_L47 = outC->_L23;
  }
  else {
    outC->_L47 = outC->_L48;
  }
  outC->changedBG = outC->_L47;
  outC->IfBlock1_clock = outC->changedBG;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L5_then_IfBlock1, inMsg);
    kcg_copy_BG_Header_T_BG_Types_Pkg(
      &outC->_L6_then_IfBlock1,
      &outC->_L5_then_IfBlock1.BG_Common_Header);
    outC->_L7_then_IfBlock1 = outC->_L6_then_IfBlock1.nid_bg;
    bgID_partial = outC->_L7_then_IfBlock1;
    kcg_copy_MSG_Errors_T_Common_Types_Pkg(&outC->_L9_then_IfBlock1, inErrors);
    outC->_L8_then_IfBlock1 = outC->_L6_then_IfBlock1.nid_c;
    outC->_L4_then_IfBlock1 = kcg_true;
    outC->_L3_then_IfBlock1.isChanged = outC->_L4_then_IfBlock1;
    outC->_L3_then_IfBlock1.bg_id = outC->_L7_then_IfBlock1;
    outC->_L3_then_IfBlock1.nid_c = outC->_L8_then_IfBlock1;
    kcg_copy_MSG_Errors_T_Common_Types_Pkg(
      &outC->_L3_then_IfBlock1.errors,
      &outC->_L9_then_IfBlock1);
    kcg_copy_probesBalises_T_xdebugSupport_Pkg(
      &baliseInfo_partial,
      &outC->_L3_then_IfBlock1);
    kcg_copy_probesBalises_T_xdebugSupport_Pkg(
      &outC->baliseInfo,
      &baliseInfo_partial);
    outC->bgID = bgID_partial;
  }
  else {
    outC->_L4_else_IfBlock1 = last_bgID;
    _2_bgID_partial = outC->_L4_else_IfBlock1;
    outC->_L3_else_IfBlock1 = kcg_false;
    kcg_copy_probesBalises_T_xdebugSupport_Pkg(
      &outC->_L1_else_IfBlock1,
      &last_baliseInfo);
    kcg_copy_probesBalises_T_xdebugSupport_Pkg(
      &outC->_L2_else_IfBlock1,
      &outC->_L1_else_IfBlock1);
    if (kcg_true) {
      outC->_L2_else_IfBlock1.isChanged = outC->_L3_else_IfBlock1;
    }
    kcg_copy_probesBalises_T_xdebugSupport_Pkg(
      &_1_baliseInfo_partial,
      &outC->_L2_else_IfBlock1);
    kcg_copy_probesBalises_T_xdebugSupport_Pkg(
      &outC->baliseInfo,
      &_1_baliseInfo_partial);
    outC->bgID = _2_bgID_partial;
  }
  kcg_copy_probesBalises_T_xdebugSupport_Pkg(&outC->_L31, &outC->baliseInfo);
  kcg_copy_probesBalises_T_xdebugSupport_Pkg(
    &outC->baliseInformation,
    &outC->_L31);
}

#ifndef KCG_USER_DEFINED_INIT
void setProbesBalises_init_xdebugSupport_Pkg(
  outC_setProbesBalises_xdebugSupport_Pkg *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;

  outC->_L51 = kcg_lit_int32(0);
  outC->_L50 = kcg_lit_int32(0);
  outC->_L49.valid = kcg_true;
  outC->_L49.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L49.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L49.q_media = Q_MEDIA_Balise;
  outC->_L49.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L49.m_mcount = kcg_lit_int32(0);
  outC->_L49.nid_c = kcg_lit_int32(0);
  outC->_L49.nid_bg = kcg_lit_int32(0);
  outC->_L49.q_link = Q_LINK_Unlinked;
  outC->_L49.bgPosition.valid = kcg_true;
  outC->_L49.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L49.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L49.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L49.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L49.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L49.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L49.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L49.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L49.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L49.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L49.bgPosition.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L49.BG_centerDetectionInaccuraccuracies.nominal = kcg_lit_int32(0);
  outC->_L49.BG_centerDetectionInaccuraccuracies.d_min = kcg_lit_int32(0);
  outC->_L49.BG_centerDetectionInaccuraccuracies.d_max = kcg_lit_int32(0);
  outC->_L49.q_nvlocacc = kcg_lit_int32(0);
  outC->_L49.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L49.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L49.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L48 = kcg_true;
  outC->_L47 = kcg_true;
  outC->_L46 = msrc_undefined_Common_Types_Pkg;
  outC->_L45 = kcg_true;
  outC->_L43 = msrc_undefined_Common_Types_Pkg;
  outC->_L31.isChanged = kcg_true;
  outC->_L31.bg_id = kcg_lit_int32(0);
  outC->_L31.nid_c = kcg_lit_int32(0);
  outC->_L31.errors.linkedBGError = kcg_true;
  outC->_L31.errors.unlinkedBGError = kcg_true;
  outC->_L31.errors.BG_versionIncompatible = kcg_true;
  outC->_L31.errors.radioSequenceError = kcg_true;
  outC->_L31.errors.tNvContactError = kcg_true;
  outC->_L31.errors.otherTimingError = kcg_true;
  outC->_L31.errors.radioMessageConsistencyError = kcg_true;
  outC->_L31.errors.nid_c = kcg_lit_int32(0);
  outC->_L31.errors.nid_errorbg = kcg_lit_int32(0);
  outC->_L28 = kcg_true;
  outC->_L23 = kcg_true;
  outC->_L20 = kcg_true;
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
  for (idx = 0; idx < 30; idx++) {
    outC->_L1.packets.PacketHeaders[idx].nid_packet = kcg_lit_int32(0);
    outC->_L1.packets.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L1.packets.PacketHeaders[idx].valid = kcg_true;
    outC->_L1.packets.PacketHeaders[idx].startAddress = kcg_lit_int32(0);
    outC->_L1.packets.PacketHeaders[idx].endAddress = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L1.packets.PacketData[idx1] = kcg_lit_int32(0);
  }
  outC->_L1.sendingRBC.valid = kcg_true;
  outC->_L1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->changedBG = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L1_else_IfBlock1.isChanged = kcg_true;
  outC->_L1_else_IfBlock1.bg_id = kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.nid_c = kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.errors.linkedBGError = kcg_true;
  outC->_L1_else_IfBlock1.errors.unlinkedBGError = kcg_true;
  outC->_L1_else_IfBlock1.errors.BG_versionIncompatible = kcg_true;
  outC->_L1_else_IfBlock1.errors.radioSequenceError = kcg_true;
  outC->_L1_else_IfBlock1.errors.tNvContactError = kcg_true;
  outC->_L1_else_IfBlock1.errors.otherTimingError = kcg_true;
  outC->_L1_else_IfBlock1.errors.radioMessageConsistencyError = kcg_true;
  outC->_L1_else_IfBlock1.errors.nid_c = kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.errors.nid_errorbg = kcg_lit_int32(0);
  outC->_L2_else_IfBlock1.isChanged = kcg_true;
  outC->_L2_else_IfBlock1.bg_id = kcg_lit_int32(0);
  outC->_L2_else_IfBlock1.nid_c = kcg_lit_int32(0);
  outC->_L2_else_IfBlock1.errors.linkedBGError = kcg_true;
  outC->_L2_else_IfBlock1.errors.unlinkedBGError = kcg_true;
  outC->_L2_else_IfBlock1.errors.BG_versionIncompatible = kcg_true;
  outC->_L2_else_IfBlock1.errors.radioSequenceError = kcg_true;
  outC->_L2_else_IfBlock1.errors.tNvContactError = kcg_true;
  outC->_L2_else_IfBlock1.errors.otherTimingError = kcg_true;
  outC->_L2_else_IfBlock1.errors.radioMessageConsistencyError = kcg_true;
  outC->_L2_else_IfBlock1.errors.nid_c = kcg_lit_int32(0);
  outC->_L2_else_IfBlock1.errors.nid_errorbg = kcg_lit_int32(0);
  outC->_L3_else_IfBlock1 = kcg_true;
  outC->_L4_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L3_then_IfBlock1.isChanged = kcg_true;
  outC->_L3_then_IfBlock1.bg_id = kcg_lit_int32(0);
  outC->_L3_then_IfBlock1.nid_c = kcg_lit_int32(0);
  outC->_L3_then_IfBlock1.errors.linkedBGError = kcg_true;
  outC->_L3_then_IfBlock1.errors.unlinkedBGError = kcg_true;
  outC->_L3_then_IfBlock1.errors.BG_versionIncompatible = kcg_true;
  outC->_L3_then_IfBlock1.errors.radioSequenceError = kcg_true;
  outC->_L3_then_IfBlock1.errors.tNvContactError = kcg_true;
  outC->_L3_then_IfBlock1.errors.otherTimingError = kcg_true;
  outC->_L3_then_IfBlock1.errors.radioMessageConsistencyError = kcg_true;
  outC->_L3_then_IfBlock1.errors.nid_c = kcg_lit_int32(0);
  outC->_L3_then_IfBlock1.errors.nid_errorbg = kcg_lit_int32(0);
  outC->_L4_then_IfBlock1 = kcg_true;
  outC->_L5_then_IfBlock1.valid = kcg_true;
  outC->_L5_then_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L5_then_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L5_then_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L5_then_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L5_then_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L5_then_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L5_then_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L5_then_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L5_then_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L5_then_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L5_then_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L5_then_IfBlock1.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L5_then_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L5_then_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L5_then_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L5_then_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L5_then_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L5_then_IfBlock1.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(
      0);
  outC->_L5_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(
      0);
  outC->_L5_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(
      0);
  outC->_L5_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L5_then_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L5_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L5_then_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L5_then_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L5_then_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L5_then_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.Radio_Common_Header.t_train_reference = kcg_lit_int32(
      0);
  outC->_L5_then_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L5_then_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L5_then_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L5_then_IfBlock1.packets.PacketHeaders[idx2].nid_packet =
      kcg_lit_int32(0);
    outC->_L5_then_IfBlock1.packets.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L5_then_IfBlock1.packets.PacketHeaders[idx2].valid = kcg_true;
    outC->_L5_then_IfBlock1.packets.PacketHeaders[idx2].startAddress =
      kcg_lit_int32(0);
    outC->_L5_then_IfBlock1.packets.PacketHeaders[idx2].endAddress =
      kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L5_then_IfBlock1.packets.PacketData[idx3] = kcg_lit_int32(0);
  }
  outC->_L5_then_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L5_then_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L6_then_IfBlock1.valid = kcg_true;
  outC->_L6_then_IfBlock1.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L6_then_IfBlock1.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L6_then_IfBlock1.q_media = Q_MEDIA_Balise;
  outC->_L6_then_IfBlock1.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L6_then_IfBlock1.m_mcount = kcg_lit_int32(0);
  outC->_L6_then_IfBlock1.nid_c = kcg_lit_int32(0);
  outC->_L6_then_IfBlock1.nid_bg = kcg_lit_int32(0);
  outC->_L6_then_IfBlock1.q_link = Q_LINK_Unlinked;
  outC->_L6_then_IfBlock1.bgPosition.valid = kcg_true;
  outC->_L6_then_IfBlock1.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L6_then_IfBlock1.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L6_then_IfBlock1.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L6_then_IfBlock1.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L6_then_IfBlock1.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L6_then_IfBlock1.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L6_then_IfBlock1.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L6_then_IfBlock1.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L6_then_IfBlock1.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L6_then_IfBlock1.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L6_then_IfBlock1.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L6_then_IfBlock1.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L6_then_IfBlock1.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L6_then_IfBlock1.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L6_then_IfBlock1.q_nvlocacc = kcg_lit_int32(0);
  outC->_L6_then_IfBlock1.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L6_then_IfBlock1.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L6_then_IfBlock1.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L7_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L8_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L9_then_IfBlock1.linkedBGError = kcg_true;
  outC->_L9_then_IfBlock1.unlinkedBGError = kcg_true;
  outC->_L9_then_IfBlock1.BG_versionIncompatible = kcg_true;
  outC->_L9_then_IfBlock1.radioSequenceError = kcg_true;
  outC->_L9_then_IfBlock1.tNvContactError = kcg_true;
  outC->_L9_then_IfBlock1.otherTimingError = kcg_true;
  outC->_L9_then_IfBlock1.radioMessageConsistencyError = kcg_true;
  outC->_L9_then_IfBlock1.nid_c = kcg_lit_int32(0);
  outC->_L9_then_IfBlock1.nid_errorbg = kcg_lit_int32(0);
  outC->baliseInformation.isChanged = kcg_true;
  outC->baliseInformation.bg_id = kcg_lit_int32(0);
  outC->baliseInformation.nid_c = kcg_lit_int32(0);
  outC->baliseInformation.errors.linkedBGError = kcg_true;
  outC->baliseInformation.errors.unlinkedBGError = kcg_true;
  outC->baliseInformation.errors.BG_versionIncompatible = kcg_true;
  outC->baliseInformation.errors.radioSequenceError = kcg_true;
  outC->baliseInformation.errors.tNvContactError = kcg_true;
  outC->baliseInformation.errors.otherTimingError = kcg_true;
  outC->baliseInformation.errors.radioMessageConsistencyError = kcg_true;
  outC->baliseInformation.errors.nid_c = kcg_lit_int32(0);
  outC->baliseInformation.errors.nid_errorbg = kcg_lit_int32(0);
  kcg_copy_probesBalises_T_xdebugSupport_Pkg(
    &outC->baliseInfo,
    (probesBalises_T_xdebugSupport_Pkg *) &cNoPro_xdebugSupport_Pkg);
  outC->bgID = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void setProbesBalises_reset_xdebugSupport_Pkg(
  outC_setProbesBalises_xdebugSupport_Pkg *outC)
{
  kcg_copy_probesBalises_T_xdebugSupport_Pkg(
    &outC->baliseInfo,
    (probesBalises_T_xdebugSupport_Pkg *) &cNoPro_xdebugSupport_Pkg);
  outC->bgID = kcg_lit_int32(0);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** setProbesBalises_xdebugSupport_Pkg.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

