/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Eval_LRBG_TA_Lib_internal.h"

/* TA_Lib_internal::Eval_LRBG/ */
void Eval_LRBG_TA_Lib_internal(
  /* MessageIn/ */
  ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  outC_Eval_LRBG_TA_Lib_internal *outC)
{
  /* C/ */
  static kcg_int64 C_partial;
  /* BG/ */
  static kcg_int64 BG_partial;
  /* C/ */
  static kcg_int64 _1_C_partial;
  /* BG/ */
  static kcg_int64 _2_BG_partial;
  /* BG/ */
  static kcg_int64 _3_BG_partial;
  /* C/ */
  static kcg_int64 _4_C_partial;
  /* BG/ */
  static kcg_int64 _5_BG_partial;
  /* C/ */
  static kcg_int64 _6_C_partial;

  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L1, MessageIn);
  outC->_L15 = outC->_L1.valid;
  outC->valid = outC->_L15;
  outC->_L14 = outC->_L1.source;
  outC->source = outC->_L14;
  outC->IfBlock1_clock = outC->source == ENUM_MsgSource_Balise_TA_Lib_internal;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->_L1_then_IfBlock1,
      MessageIn);
    kcg_copy_BG_Header_T_BG_Types_Pkg(
      &outC->_L20_then_IfBlock1,
      &outC->_L1_then_IfBlock1.BG_Common_Header);
    outC->_L44_then_IfBlock1 = outC->_L20_then_IfBlock1.nid_c;
    outC->_L21_then_IfBlock1 = outC->_L20_then_IfBlock1.nid_bg;
    C_partial = outC->_L44_then_IfBlock1;
    BG_partial = outC->_L21_then_IfBlock1;
    outC->C = C_partial;
    outC->BG = BG_partial;
  }
  else {
    outC->else_clock_IfBlock1 = outC->source ==
      ENUM_MsgSource_Euroradio_TA_Lib_internal;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &outC->_L2_then_else_IfBlock1,
        MessageIn);
      outC->_L1_then_else_IfBlock1 =
        outC->_L2_then_else_IfBlock1.Radio_Common_Header.nid_lrbg;
      /* IfBlock1:else:then:_L3=(TM_conversions::DECODE_NID_LRBG#2)/ */
      DECODE_NID_LRBG_TM_conversions(
        outC->_L1_then_else_IfBlock1,
        &outC->Context_DECODE_NID_LRBG_2);
      outC->_L3_then_else_IfBlock1 = outC->Context_DECODE_NID_LRBG_2.nid_c;
      outC->_L4_then_else_IfBlock1 = outC->Context_DECODE_NID_LRBG_2.nid_bg;
      _6_C_partial = outC->_L3_then_else_IfBlock1;
      _5_BG_partial = outC->_L4_then_else_IfBlock1;
      _1_C_partial = _6_C_partial;
      _2_BG_partial = _5_BG_partial;
    }
    else {
      outC->_L2_else_else_IfBlock1 = kcg_lit_int64(0);
      _4_C_partial = outC->_L2_else_else_IfBlock1;
      outC->_L1_else_else_IfBlock1 = kcg_lit_int64(0);
      _3_BG_partial = outC->_L1_else_else_IfBlock1;
      _1_C_partial = _4_C_partial;
      _2_BG_partial = _3_BG_partial;
    }
    outC->C = _1_C_partial;
    outC->BG = _2_BG_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void Eval_LRBG_init_TA_Lib_internal(outC_Eval_LRBG_TA_Lib_internal *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;

  outC->_L15 = kcg_true;
  outC->_L14 = msrc_undefined_Common_Types_Pkg;
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
  for (idx = 0; idx < 30; idx++) {
    outC->_L1.packets.PacketHeaders[idx].nid_packet = kcg_lit_int64(0);
    outC->_L1.packets.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L1.packets.PacketHeaders[idx].valid = kcg_true;
    outC->_L1.packets.PacketHeaders[idx].startAddress = kcg_lit_int64(0);
    outC->_L1.packets.PacketHeaders[idx].endAddress = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L1.packets.PacketData[idx1] = kcg_lit_int64(0);
  }
  outC->_L1.sendingRBC.valid = kcg_true;
  outC->_L1.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L1.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L1.sendingRBC.device_id = kcg_lit_int64(0);
  outC->source = msrc_undefined_Common_Types_Pkg;
  outC->IfBlock1_clock = kcg_true;
  outC->_L4_then_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L1_then_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.valid = kcg_true;
  outC->_L2_then_else_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L2_then_else_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L2_then_else_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L2_then_else_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L2_then_else_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L2_then_else_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L2_then_else_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L2_then_else_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L2_then_else_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L2_then_else_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L2_then_else_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L2_then_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L2_then_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2_then_else_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L2_then_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L2_then_else_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L2_then_else_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L2_then_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L2_then_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L2_then_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L2_then_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L2_then_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L2_then_else_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L2_then_else_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2_then_else_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L2_then_else_IfBlock1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L2_then_else_IfBlock1.packets.PacketHeaders[idx2].nid_packet =
      kcg_lit_int64(0);
    outC->_L2_then_else_IfBlock1.packets.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L2_then_else_IfBlock1.packets.PacketHeaders[idx2].valid = kcg_true;
    outC->_L2_then_else_IfBlock1.packets.PacketHeaders[idx2].startAddress =
      kcg_lit_int64(0);
    outC->_L2_then_else_IfBlock1.packets.PacketHeaders[idx2].endAddress =
      kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L2_then_else_IfBlock1.packets.PacketData[idx3] = kcg_lit_int64(0);
  }
  outC->_L2_then_else_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L2_then_else_IfBlock1.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L2_else_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1 = kcg_lit_int64(0);
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L1_then_IfBlock1.valid = kcg_true;
  outC->_L1_then_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L1_then_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L1_then_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L1_then_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L1_then_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L1_then_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L1_then_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L1_then_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L1_then_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L1_then_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L1_then_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L1_then_IfBlock1.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1_then_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1_then_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L1_then_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1_then_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L1_then_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L1_then_IfBlock1.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(
      0);
  outC->_L1_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(
      0);
  outC->_L1_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(
      0);
  outC->_L1_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1_then_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1_then_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1_then_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L1_then_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L1_then_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.Radio_Common_Header.t_train_reference = kcg_lit_int64(
      0);
  outC->_L1_then_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1_then_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L1_then_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L1_then_IfBlock1.packets.PacketHeaders[idx4].nid_packet =
      kcg_lit_int64(0);
    outC->_L1_then_IfBlock1.packets.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->_L1_then_IfBlock1.packets.PacketHeaders[idx4].valid = kcg_true;
    outC->_L1_then_IfBlock1.packets.PacketHeaders[idx4].startAddress =
      kcg_lit_int64(0);
    outC->_L1_then_IfBlock1.packets.PacketHeaders[idx4].endAddress =
      kcg_lit_int64(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L1_then_IfBlock1.packets.PacketData[idx5] = kcg_lit_int64(0);
  }
  outC->_L1_then_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L1_then_IfBlock1.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L20_then_IfBlock1.valid = kcg_true;
  outC->_L20_then_IfBlock1.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L20_then_IfBlock1.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L20_then_IfBlock1.q_media = Q_MEDIA_Balise;
  outC->_L20_then_IfBlock1.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L20_then_IfBlock1.m_mcount = kcg_lit_int64(0);
  outC->_L20_then_IfBlock1.nid_c = kcg_lit_int64(0);
  outC->_L20_then_IfBlock1.nid_bg = kcg_lit_int64(0);
  outC->_L20_then_IfBlock1.q_link = Q_LINK_Unlinked;
  outC->_L20_then_IfBlock1.bgPosition.valid = kcg_true;
  outC->_L20_then_IfBlock1.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L20_then_IfBlock1.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L20_then_IfBlock1.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L20_then_IfBlock1.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L20_then_IfBlock1.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L20_then_IfBlock1.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L20_then_IfBlock1.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L20_then_IfBlock1.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L20_then_IfBlock1.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L20_then_IfBlock1.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L20_then_IfBlock1.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L20_then_IfBlock1.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L20_then_IfBlock1.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L20_then_IfBlock1.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L20_then_IfBlock1.q_nvlocacc = kcg_lit_int64(0);
  outC->_L20_then_IfBlock1.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L20_then_IfBlock1.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L20_then_IfBlock1.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L21_then_IfBlock1 = kcg_lit_int64(0);
  outC->_L44_then_IfBlock1 = kcg_lit_int64(0);
  outC->BG = kcg_lit_int64(0);
  outC->C = kcg_lit_int64(0);
  outC->valid = kcg_true;
  /* IfBlock1:else:then:_L3=(TM_conversions::DECODE_NID_LRBG#2)/ */
  DECODE_NID_LRBG_init_TM_conversions(&outC->Context_DECODE_NID_LRBG_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Eval_LRBG_reset_TA_Lib_internal(outC_Eval_LRBG_TA_Lib_internal *outC)
{
  /* IfBlock1:else:then:_L3=(TM_conversions::DECODE_NID_LRBG#2)/ */
  DECODE_NID_LRBG_reset_TM_conversions(&outC->Context_DECODE_NID_LRBG_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Eval_LRBG_TA_Lib_internal.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

