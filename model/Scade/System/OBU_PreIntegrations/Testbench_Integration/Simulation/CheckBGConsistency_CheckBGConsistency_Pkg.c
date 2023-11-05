/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckBGConsistency_CheckBGConsistency_Pkg.h"

/* CheckBGConsistency_Pkg::CheckBGConsistency/ */
void CheckBGConsistency_CheckBGConsistency_Pkg(
  /* storedBGs/ */
  positionedBGs_T_TrainPosition_Types_Pck *storedBGs,
  /* trainPosition/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* mMode/ */
  M_MODE mMode,
  /* trackSide_ForCheck/ */
  TrackSide_ForCheck_T_Common_Types_Pkg *trackSide_ForCheck,
  /* q_nvlocacc/ */
  Q_NVLOCACC q_nvlocacc,
  /* trainVersion/ */
  M_VERSION trainVersion,
  outC_CheckBGConsistency_CheckBGConsistency_Pkg *outC)
{
  /* passedBG_out/ */
  static ReceivedMessage_T_Common_Types_Pkg passedBG_out_partial;
  /* applyServiceBrake/ */
  static kcg_bool applyServiceBrake_partial;
  /* badBaliseMessageToDMI/ */
  static kcg_bool badBaliseMessageToDMI_partial;
  /* errorLinkedBG/ */
  static kcg_bool errorLinkedBG_partial;
  /* errorUnlinkedBG/ */
  static kcg_bool errorUnlinkedBG_partial;
  /* nid_errorBG/ */
  static NID_ERRORBG_BG_Types_Pkg nid_errorBG_partial;
  /* nid_c/ */
  static NID_C nid_c_partial;
  /* passedBG_out/ */
  static ReceivedMessage_T_Common_Types_Pkg _1_passedBG_out_partial;
  /* applyServiceBrake/ */
  static kcg_bool _2_applyServiceBrake_partial;
  /* badBaliseMessageToDMI/ */
  static kcg_bool _3_badBaliseMessageToDMI_partial;
  /* errorLinkedBG/ */
  static kcg_bool _4_errorLinkedBG_partial;
  /* errorUnlinkedBG/ */
  static kcg_bool _5_errorUnlinkedBG_partial;
  /* nid_errorBG/ */
  static NID_ERRORBG_BG_Types_Pkg _6_nid_errorBG_partial;
  /* nid_c/ */
  static NID_C _7_nid_c_partial;
  /* nid_c/ */
  static NID_C _8_nid_c_partial;
  /* nid_errorBG/ */
  static NID_ERRORBG_BG_Types_Pkg _9_nid_errorBG_partial;
  /* errorUnlinkedBG/ */
  static kcg_bool _10_errorUnlinkedBG_partial;
  /* badBaliseMessageToDMI/ */
  static kcg_bool _11_badBaliseMessageToDMI_partial;
  /* applyServiceBrake/ */
  static kcg_bool _12_applyServiceBrake_partial;
  /* passedBG_out/ */
  static ReceivedMessage_T_Common_Types_Pkg _13_passedBG_out_partial;
  /* nid_c/ */
  static NID_C _14_nid_c_partial;
  /* nid_errorBG/ */
  static NID_ERRORBG_BG_Types_Pkg _15_nid_errorBG_partial;
  /* errorUnlinkedBG/ */
  static kcg_bool _16_errorUnlinkedBG_partial;
  /* badBaliseMessageToDMI/ */
  static kcg_bool _17_badBaliseMessageToDMI_partial;
  /* applyServiceBrake/ */
  static kcg_bool _18_applyServiceBrake_partial;
  /* passedBG_out/ */
  static ReceivedMessage_T_Common_Types_Pkg _19_passedBG_out_partial;
  static kcg_bool noname;

  kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(&outC->_L39, trackSide_ForCheck);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(
    &outC->_L54,
    &outC->_L39.telegramHeaders.Telegrams[0].telegramheader);
  outC->_L56 = outC->_L54.m_version;
  outC->_L57 = trainVersion;
  /* _L50=(CheckBGConsistency_Pkg::SubFunction::CheckMVersion#1)/ */
  CheckMVersion_CheckBGConsistency_Pkg_SubFunction(
    outC->_L56,
    outC->_L57,
    &outC->Context_CheckMVersion_1);
  outC->_L50 = outC->Context_CheckMVersion_1.isSameVersion;
  outC->_L51 = outC->Context_CheckMVersion_1.compatibleVersion;
  outC->compatibleVersion = outC->_L51;
  outC->_L58 = outC->compatibleVersion;
  outC->_L59 = !outC->_L58;
  outC->incompatibleVersion = outC->_L59;
  noname = outC->_L50;
  outC->_L55 = outC->_L54.q_link;
  outC->_L24 = Q_LINK_Linked;
  outC->_L30 = outC->_L55 == outC->_L24;
  outC->isLinked = outC->_L30;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L31, trainPosition);
  outC->_L33 = outC->_L31.valid;
  outC->_L32 = outC->_L31.linkingIsUsedOnboard;
  outC->_L34 = outC->_L32 & outC->_L33;
  outC->linkingInUse = outC->_L34;
  outC->_L26 = outC->_L39.valid;
  outC->_L35 = mMode;
  /* _L14=(CheckBGConsistency_Pkg::SubFunction::CheckMode#1)/ */
  CheckMode_CheckBGConsistency_Pkg_SubFunction(
    outC->_L35,
    &outC->Context_CheckMode_1);
  outC->_L14 = outC->Context_CheckMode_1.bgConsistansyIsActive;
  outC->_L27 = outC->_L14 & outC->_L26;
  outC->startTheCheck = outC->_L27;
  outC->IfBlock1_clock = outC->startTheCheck & outC->linkingInUse &
    outC->isLinked & outC->compatibleVersion;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    errorUnlinkedBG_partial = kcg_false;
    badBaliseMessageToDMI_partial = kcg_false;
    applyServiceBrake_partial = kcg_false;
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &outC->_L18_then_IfBlock1,
      storedBGs);
    kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
      &outC->_L22_then_IfBlock1,
      trackSide_ForCheck);
    outC->_L23_then_IfBlock1 = q_nvlocacc;
    /* IfBlock1:then:_L19=(CheckBGConsistency_Pkg::CaseLinkingInUse#2)/ */
    CaseLinkingInUse_CheckBGConsistency_Pkg(
      &outC->_L18_then_IfBlock1,
      &outC->_L22_then_IfBlock1,
      outC->_L23_then_IfBlock1,
      &outC->Context_CaseLinkingInUse_2);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->_L19_then_IfBlock1,
      &outC->Context_CaseLinkingInUse_2.passedBG_out);
    outC->_L20_then_IfBlock1 = outC->Context_CaseLinkingInUse_2.errorLinkedBG;
    outC->_L25_then_IfBlock1 = outC->Context_CaseLinkingInUse_2.nid_errorBG;
    outC->_L24_then_IfBlock1 = outC->Context_CaseLinkingInUse_2.nid_c;
    nid_c_partial = outC->_L24_then_IfBlock1;
    nid_errorBG_partial = outC->_L25_then_IfBlock1;
    errorLinkedBG_partial = outC->_L20_then_IfBlock1;
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &passedBG_out_partial,
      &outC->_L19_then_IfBlock1);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->passedBG_out,
      &passedBG_out_partial);
    outC->applyServiceBrake = applyServiceBrake_partial;
    outC->badBaliseMessageToDMI = badBaliseMessageToDMI_partial;
    outC->errorLinkedBG = errorLinkedBG_partial;
    outC->errorUnlinkedBG = errorUnlinkedBG_partial;
    outC->nid_errorBG = nid_errorBG_partial;
    outC->nid_c = nid_c_partial;
  }
  else {
    _4_errorLinkedBG_partial = kcg_false;
    outC->else_clock_IfBlock1 = outC->startTheCheck & outC->compatibleVersion;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
        &outC->_L15_then_else_IfBlock1,
        trackSide_ForCheck);
      outC->_L16_then_else_IfBlock1 = q_nvlocacc;
      /* IfBlock1:else:then:_L10=(CheckBGConsistency_Pkg::CaseLinkingNotInUse#3)/ */
      CaseLinkingNotInUse_CheckBGConsistency_Pkg(
        &outC->_L15_then_else_IfBlock1,
        outC->_L16_then_else_IfBlock1,
        &outC->Context_CaseLinkingNotInUse_3);
      outC->_L10_then_else_IfBlock1 =
        outC->Context_CaseLinkingNotInUse_3.applyServiceBrake;
      outC->_L11_then_else_IfBlock1 =
        outC->Context_CaseLinkingNotInUse_3.badBaliseMessageToDMI;
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &outC->_L12_then_else_IfBlock1,
        &outC->Context_CaseLinkingNotInUse_3.passedBG_out);
      outC->_L13_then_else_IfBlock1 =
        outC->Context_CaseLinkingNotInUse_3.errorUnlinkedBG;
      outC->_L18_then_else_IfBlock1 = outC->Context_CaseLinkingNotInUse_3.nid_errorBG;
      outC->_L17_then_else_IfBlock1 = outC->Context_CaseLinkingNotInUse_3.nid_c;
      _15_nid_errorBG_partial = outC->_L18_then_else_IfBlock1;
      _14_nid_c_partial = outC->_L17_then_else_IfBlock1;
      _16_errorUnlinkedBG_partial = outC->_L13_then_else_IfBlock1;
      _18_applyServiceBrake_partial = outC->_L10_then_else_IfBlock1;
      _17_badBaliseMessageToDMI_partial = outC->_L11_then_else_IfBlock1;
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &_19_passedBG_out_partial,
        &outC->_L12_then_else_IfBlock1);
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &_1_passedBG_out_partial,
        &_19_passedBG_out_partial);
      _2_applyServiceBrake_partial = _18_applyServiceBrake_partial;
      _3_badBaliseMessageToDMI_partial = _17_badBaliseMessageToDMI_partial;
      _5_errorUnlinkedBG_partial = _16_errorUnlinkedBG_partial;
      _6_nid_errorBG_partial = _15_nid_errorBG_partial;
      _7_nid_c_partial = _14_nid_c_partial;
    }
    else {
      _8_nid_c_partial = kcg_lit_int32(0);
      _9_nid_errorBG_partial = kcg_lit_int32(16383);
      _10_errorUnlinkedBG_partial = kcg_false;
      _11_badBaliseMessageToDMI_partial = kcg_false;
      _12_applyServiceBrake_partial = kcg_false;
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &_13_passedBG_out_partial,
        (ReceivedMessage_T_Common_Types_Pkg *)
          &cRecivedMesg_PlaceHolder_CheckBGConsistency_Pkg);
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &_1_passedBG_out_partial,
        &_13_passedBG_out_partial);
      _2_applyServiceBrake_partial = _12_applyServiceBrake_partial;
      _3_badBaliseMessageToDMI_partial = _11_badBaliseMessageToDMI_partial;
      _5_errorUnlinkedBG_partial = _10_errorUnlinkedBG_partial;
      _6_nid_errorBG_partial = _9_nid_errorBG_partial;
      _7_nid_c_partial = _8_nid_c_partial;
    }
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->passedBG_out,
      &_1_passedBG_out_partial);
    outC->applyServiceBrake = _2_applyServiceBrake_partial;
    outC->badBaliseMessageToDMI = _3_badBaliseMessageToDMI_partial;
    outC->errorLinkedBG = _4_errorLinkedBG_partial;
    outC->errorUnlinkedBG = _5_errorUnlinkedBG_partial;
    outC->nid_errorBG = _6_nid_errorBG_partial;
    outC->nid_c = _7_nid_c_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void CheckBGConsistency_init_CheckBGConsistency_Pkg(
  outC_CheckBGConsistency_CheckBGConsistency_Pkg *outC)
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
  static kcg_size idx12;
  static kcg_size idx13;
  static kcg_size idx14;
  static kcg_size idx15;
  static kcg_size idx16;
  static kcg_size idx17;
  static kcg_size idx18;
  static kcg_size idx19;
  static kcg_size idx20;
  static kcg_size idx21;
  static kcg_size idx22;
  static kcg_size idx23;
  static kcg_size idx24;

  outC->_L59 = kcg_true;
  outC->_L58 = kcg_true;
  outC->_L57 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L56 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L55 = Q_LINK_Unlinked;
  outC->_L54.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L54.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L54.q_media = Q_MEDIA_Balise;
  outC->_L54.n_pig = N_PIG_I_am_the_1st;
  outC->_L54.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L54.m_dup = M_DUP_No_duplicates;
  outC->_L54.m_mcount = kcg_lit_int32(0);
  outC->_L54.nid_c = kcg_lit_int32(0);
  outC->_L54.nid_bg = kcg_lit_int32(0);
  outC->_L54.q_link = Q_LINK_Unlinked;
  outC->_L50 = kcg_true;
  outC->_L51 = kcg_true;
  outC->_L39.valid = kcg_true;
  outC->_L39.systemTime = kcg_lit_int32(0);
  outC->_L39.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L39.telegramHeaders.present = kcg_true;
  for (idx2 = 0; idx2 < 8; idx2++) {
    outC->_L39.telegramHeaders.Telegrams[idx2].valid = kcg_true;
    outC->_L39.telegramHeaders.Telegrams[idx2].checkResult = kcg_true;
    outC->_L39.telegramHeaders.Telegrams[idx2].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L39.telegramHeaders.Telegrams[idx2].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L39.telegramHeaders.Telegrams[idx2].telegramheader.q_media =
      Q_MEDIA_Balise;
    outC->_L39.telegramHeaders.Telegrams[idx2].telegramheader.n_pig =
      N_PIG_I_am_the_1st;
    outC->_L39.telegramHeaders.Telegrams[idx2].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L39.telegramHeaders.Telegrams[idx2].telegramheader.m_dup =
      M_DUP_No_duplicates;
    outC->_L39.telegramHeaders.Telegrams[idx2].telegramheader.m_mcount =
      kcg_lit_int32(0);
    outC->_L39.telegramHeaders.Telegrams[idx2].telegramheader.nid_c =
      kcg_lit_int32(0);
    outC->_L39.telegramHeaders.Telegrams[idx2].telegramheader.nid_bg =
      kcg_lit_int32(0);
    outC->_L39.telegramHeaders.Telegrams[idx2].telegramheader.q_link =
      Q_LINK_Unlinked;
    for (idx = 0; idx < 30; idx++) {
      outC->_L39.telegramHeaders.Telegrams[idx2].packets.PacketHeaders[idx].nid_packet =
        kcg_lit_int32(0);
      outC->_L39.telegramHeaders.Telegrams[idx2].packets.PacketHeaders[idx].q_dir =
        Q_DIR_Reverse;
      outC->_L39.telegramHeaders.Telegrams[idx2].packets.PacketHeaders[idx].valid =
        kcg_true;
      outC->_L39.telegramHeaders.Telegrams[idx2].packets.PacketHeaders[idx].startAddress =
        kcg_lit_int32(0);
      outC->_L39.telegramHeaders.Telegrams[idx2].packets.PacketHeaders[idx].endAddress =
        kcg_lit_int32(0);
    }
    for (idx1 = 0; idx1 < 500; idx1++) {
      outC->_L39.telegramHeaders.Telegrams[idx2].packets.PacketData[idx1] =
        kcg_lit_int32(0);
    }
  }
  outC->_L39.telegramHeaders.numberBalises = kcg_lit_int32(0);
  outC->_L39.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L39.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->_L39.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L39.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->_L39.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->_L39.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L39.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L39.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L39.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L39.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L39.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L39.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L39.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L39.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L39.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L39.radio_Msg.present = kcg_true;
  outC->_L39.radio_Msg.consistencyError = kcg_true;
  outC->_L39.radio_Msg.header.radioDevice = kcg_lit_int32(0);
  outC->_L39.radio_Msg.header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L39.radio_Msg.header.nid_message = kcg_lit_int32(0);
  outC->_L39.radio_Msg.header.t_train = kcg_lit_int32(0);
  outC->_L39.radio_Msg.header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L39.radio_Msg.header.nid_lrbg = kcg_lit_int32(0);
  outC->_L39.radio_Msg.header.t_train_reference = kcg_lit_int32(0);
  outC->_L39.radio_Msg.header.nid_em = kcg_lit_int32(0);
  outC->_L39.radio_Msg.header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L39.radio_Msg.header.d_sr = kcg_lit_int32(0);
  outC->_L39.radio_Msg.header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L39.radio_Msg.header.d_ref = kcg_lit_int32(0);
  outC->_L39.radio_Msg.header.q_dir = Q_DIR_Reverse;
  outC->_L39.radio_Msg.header.d_emergencystop = kcg_lit_int32(0);
  outC->_L39.radio_Msg.header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L39.radio_Msg.radioMetadata.t_train_reference = kcg_true;
  outC->_L39.radio_Msg.radioMetadata.nid_em = kcg_true;
  outC->_L39.radio_Msg.radioMetadata.q_scale = kcg_true;
  outC->_L39.radio_Msg.radioMetadata.d_sr = kcg_true;
  outC->_L39.radio_Msg.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L39.radio_Msg.radioMetadata.d_ref = kcg_true;
  outC->_L39.radio_Msg.radioMetadata.q_dir = kcg_true;
  outC->_L39.radio_Msg.radioMetadata.d_emergencystop = kcg_true;
  outC->_L39.radio_Msg.radioMetadata.m_version = kcg_true;
  for (idx3 = 0; idx3 < 30; idx3++) {
    outC->_L39.radio_Msg.packets.PacketHeaders[idx3].nid_packet = kcg_lit_int32(0);
    outC->_L39.radio_Msg.packets.PacketHeaders[idx3].q_dir = Q_DIR_Reverse;
    outC->_L39.radio_Msg.packets.PacketHeaders[idx3].valid = kcg_true;
    outC->_L39.radio_Msg.packets.PacketHeaders[idx3].startAddress =
      kcg_lit_int32(0);
    outC->_L39.radio_Msg.packets.PacketHeaders[idx3].endAddress = kcg_lit_int32(0);
  }
  for (idx4 = 0; idx4 < 500; idx4++) {
    outC->_L39.radio_Msg.packets.PacketData[idx4] = kcg_lit_int32(0);
  }
  outC->_L39.radio_Msg.sendingRBC.valid = kcg_true;
  outC->_L39.radio_Msg.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L39.radio_Msg.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L39.radio_Msg.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L35 = M_MODE_Full_Supervision;
  outC->_L34 = kcg_true;
  outC->_L33 = kcg_true;
  outC->_L32 = kcg_true;
  outC->_L31.valid = kcg_true;
  outC->_L31.timestamp = kcg_lit_int32(0);
  outC->_L31.trainPositionIsUnknown = kcg_true;
  outC->_L31.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L31.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L31.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L31.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L31.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L31.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L31.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L31.LRBG.valid = kcg_true;
  outC->_L31.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L31.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L31.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L31.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L31.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L31.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L31.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L31.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L31.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L31.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L31.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L31.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L31.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L31.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L31.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L31.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L31.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L31.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L31.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L31.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L31.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L31.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L31.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L31.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L31.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L31.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L31.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L31.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L31.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L31.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L31.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L31.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L31.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L31.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L31.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L31.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L31.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L31.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L31.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L31.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L31.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L31.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L31.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L31.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L31.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L31.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L31.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L31.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L31.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L31.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L31.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L31.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L31.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L31.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L31.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L31.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx5 = 0; idx5 < 33; idx5++) {
    outC->_L31.LRBG.infoFromPassing.linkedBGs[idx5].valid = kcg_true;
    outC->_L31.LRBG.infoFromPassing.linkedBGs[idx5].nid_LRBG = kcg_lit_int32(0);
    outC->_L31.LRBG.infoFromPassing.linkedBGs[idx5].q_dir = Q_DIR_Reverse;
    outC->_L31.LRBG.infoFromPassing.linkedBGs[idx5].q_scale = Q_SCALE_10_cm_scale;
    outC->_L31.LRBG.infoFromPassing.linkedBGs[idx5].d_link = kcg_lit_int32(0);
    outC->_L31.LRBG.infoFromPassing.linkedBGs[idx5].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L31.LRBG.infoFromPassing.linkedBGs[idx5].nid_c = kcg_lit_int32(0);
    outC->_L31.LRBG.infoFromPassing.linkedBGs[idx5].nid_bg = kcg_lit_int32(0);
    outC->_L31.LRBG.infoFromPassing.linkedBGs[idx5].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L31.LRBG.infoFromPassing.linkedBGs[idx5].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L31.LRBG.infoFromPassing.linkedBGs[idx5].q_locacc = kcg_lit_int32(0);
  }
  outC->_L31.LRBG.missed = kcg_true;
  outC->_L31.prvLRBG.valid = kcg_true;
  outC->_L31.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L31.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L31.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L31.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L31.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L31.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L31.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L31.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L31.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L31.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L31.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L31.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L31.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L31.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L31.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L31.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L31.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L31.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L31.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L31.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L31.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L31.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L31.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L31.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L31.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L31.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L31.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L31.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L31.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L31.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L31.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L31.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L31.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L31.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L31.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L31.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L31.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L31.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L31.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L31.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L31.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L31.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L31.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L31.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L31.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L31.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L31.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L31.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L31.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L31.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L31.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L31.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L31.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L31.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L31.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L31.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx6 = 0; idx6 < 33; idx6++) {
    outC->_L31.prvLRBG.infoFromPassing.linkedBGs[idx6].valid = kcg_true;
    outC->_L31.prvLRBG.infoFromPassing.linkedBGs[idx6].nid_LRBG = kcg_lit_int32(0);
    outC->_L31.prvLRBG.infoFromPassing.linkedBGs[idx6].q_dir = Q_DIR_Reverse;
    outC->_L31.prvLRBG.infoFromPassing.linkedBGs[idx6].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L31.prvLRBG.infoFromPassing.linkedBGs[idx6].d_link = kcg_lit_int32(0);
    outC->_L31.prvLRBG.infoFromPassing.linkedBGs[idx6].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L31.prvLRBG.infoFromPassing.linkedBGs[idx6].nid_c = kcg_lit_int32(0);
    outC->_L31.prvLRBG.infoFromPassing.linkedBGs[idx6].nid_bg = kcg_lit_int32(0);
    outC->_L31.prvLRBG.infoFromPassing.linkedBGs[idx6].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L31.prvLRBG.infoFromPassing.linkedBGs[idx6].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L31.prvLRBG.infoFromPassing.linkedBGs[idx6].q_locacc = kcg_lit_int32(0);
  }
  outC->_L31.prvLRBG.missed = kcg_true;
  outC->_L31.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L31.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L31.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L31.linkingIsUsedOnboard = kcg_true;
  outC->_L31.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L31.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L31.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L30 = kcg_true;
  outC->_L27 = kcg_true;
  outC->_L26 = kcg_true;
  outC->_L24 = Q_LINK_Unlinked;
  outC->_L14 = kcg_true;
  outC->compatibleVersion = kcg_true;
  outC->linkingInUse = kcg_true;
  outC->isLinked = kcg_true;
  outC->startTheCheck = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L18_then_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L17_then_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L16_then_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L15_then_else_IfBlock1.valid = kcg_true;
  outC->_L15_then_else_IfBlock1.systemTime = kcg_lit_int32(0);
  outC->_L15_then_else_IfBlock1.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L15_then_else_IfBlock1.telegramHeaders.present = kcg_true;
  for (idx9 = 0; idx9 < 8; idx9++) {
    outC->_L15_then_else_IfBlock1.telegramHeaders.Telegrams[idx9].valid = kcg_true;
    outC->_L15_then_else_IfBlock1.telegramHeaders.Telegrams[idx9].checkResult =
      kcg_true;
    outC->_L15_then_else_IfBlock1.telegramHeaders.Telegrams[idx9].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L15_then_else_IfBlock1.telegramHeaders.Telegrams[idx9].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L15_then_else_IfBlock1.telegramHeaders.Telegrams[idx9].telegramheader.q_media =
      Q_MEDIA_Balise;
    outC->_L15_then_else_IfBlock1.telegramHeaders.Telegrams[idx9].telegramheader.n_pig =
      N_PIG_I_am_the_1st;
    outC->_L15_then_else_IfBlock1.telegramHeaders.Telegrams[idx9].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L15_then_else_IfBlock1.telegramHeaders.Telegrams[idx9].telegramheader.m_dup =
      M_DUP_No_duplicates;
    outC->_L15_then_else_IfBlock1.telegramHeaders.Telegrams[idx9].telegramheader.m_mcount =
      kcg_lit_int32(0);
    outC->_L15_then_else_IfBlock1.telegramHeaders.Telegrams[idx9].telegramheader.nid_c =
      kcg_lit_int32(0);
    outC->_L15_then_else_IfBlock1.telegramHeaders.Telegrams[idx9].telegramheader.nid_bg =
      kcg_lit_int32(0);
    outC->_L15_then_else_IfBlock1.telegramHeaders.Telegrams[idx9].telegramheader.q_link =
      Q_LINK_Unlinked;
    for (idx7 = 0; idx7 < 30; idx7++) {
      outC->_L15_then_else_IfBlock1.telegramHeaders.Telegrams[idx9].packets.PacketHeaders[idx7].nid_packet =
        kcg_lit_int32(0);
      outC->_L15_then_else_IfBlock1.telegramHeaders.Telegrams[idx9].packets.PacketHeaders[idx7].q_dir =
        Q_DIR_Reverse;
      outC->_L15_then_else_IfBlock1.telegramHeaders.Telegrams[idx9].packets.PacketHeaders[idx7].valid =
        kcg_true;
      outC->_L15_then_else_IfBlock1.telegramHeaders.Telegrams[idx9].packets.PacketHeaders[idx7].startAddress =
        kcg_lit_int32(0);
      outC->_L15_then_else_IfBlock1.telegramHeaders.Telegrams[idx9].packets.PacketHeaders[idx7].endAddress =
        kcg_lit_int32(0);
    }
    for (idx8 = 0; idx8 < 500; idx8++) {
      outC->_L15_then_else_IfBlock1.telegramHeaders.Telegrams[idx9].packets.PacketData[idx8] =
        kcg_lit_int32(0);
    }
  }
  outC->_L15_then_else_IfBlock1.telegramHeaders.numberBalises = kcg_lit_int32(0);
  outC->_L15_then_else_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L15_then_else_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->_L15_then_else_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L15_then_else_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->_L15_then_else_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->_L15_then_else_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L15_then_else_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L15_then_else_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L15_then_else_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L15_then_else_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L15_then_else_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L15_then_else_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L15_then_else_IfBlock1.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L15_then_else_IfBlock1.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L15_then_else_IfBlock1.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L15_then_else_IfBlock1.radio_Msg.present = kcg_true;
  outC->_L15_then_else_IfBlock1.radio_Msg.consistencyError = kcg_true;
  outC->_L15_then_else_IfBlock1.radio_Msg.header.radioDevice = kcg_lit_int32(0);
  outC->_L15_then_else_IfBlock1.radio_Msg.header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L15_then_else_IfBlock1.radio_Msg.header.nid_message = kcg_lit_int32(0);
  outC->_L15_then_else_IfBlock1.radio_Msg.header.t_train = kcg_lit_int32(0);
  outC->_L15_then_else_IfBlock1.radio_Msg.header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L15_then_else_IfBlock1.radio_Msg.header.nid_lrbg = kcg_lit_int32(0);
  outC->_L15_then_else_IfBlock1.radio_Msg.header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L15_then_else_IfBlock1.radio_Msg.header.nid_em = kcg_lit_int32(0);
  outC->_L15_then_else_IfBlock1.radio_Msg.header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L15_then_else_IfBlock1.radio_Msg.header.d_sr = kcg_lit_int32(0);
  outC->_L15_then_else_IfBlock1.radio_Msg.header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L15_then_else_IfBlock1.radio_Msg.header.d_ref = kcg_lit_int32(0);
  outC->_L15_then_else_IfBlock1.radio_Msg.header.q_dir = Q_DIR_Reverse;
  outC->_L15_then_else_IfBlock1.radio_Msg.header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L15_then_else_IfBlock1.radio_Msg.header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L15_then_else_IfBlock1.radio_Msg.radioMetadata.t_train_reference =
    kcg_true;
  outC->_L15_then_else_IfBlock1.radio_Msg.radioMetadata.nid_em = kcg_true;
  outC->_L15_then_else_IfBlock1.radio_Msg.radioMetadata.q_scale = kcg_true;
  outC->_L15_then_else_IfBlock1.radio_Msg.radioMetadata.d_sr = kcg_true;
  outC->_L15_then_else_IfBlock1.radio_Msg.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L15_then_else_IfBlock1.radio_Msg.radioMetadata.d_ref = kcg_true;
  outC->_L15_then_else_IfBlock1.radio_Msg.radioMetadata.q_dir = kcg_true;
  outC->_L15_then_else_IfBlock1.radio_Msg.radioMetadata.d_emergencystop =
    kcg_true;
  outC->_L15_then_else_IfBlock1.radio_Msg.radioMetadata.m_version = kcg_true;
  for (idx10 = 0; idx10 < 30; idx10++) {
    outC->_L15_then_else_IfBlock1.radio_Msg.packets.PacketHeaders[idx10].nid_packet =
      kcg_lit_int32(0);
    outC->_L15_then_else_IfBlock1.radio_Msg.packets.PacketHeaders[idx10].q_dir =
      Q_DIR_Reverse;
    outC->_L15_then_else_IfBlock1.radio_Msg.packets.PacketHeaders[idx10].valid =
      kcg_true;
    outC->_L15_then_else_IfBlock1.radio_Msg.packets.PacketHeaders[idx10].startAddress =
      kcg_lit_int32(0);
    outC->_L15_then_else_IfBlock1.radio_Msg.packets.PacketHeaders[idx10].endAddress =
      kcg_lit_int32(0);
  }
  for (idx11 = 0; idx11 < 500; idx11++) {
    outC->_L15_then_else_IfBlock1.radio_Msg.packets.PacketData[idx11] =
      kcg_lit_int32(0);
  }
  outC->_L15_then_else_IfBlock1.radio_Msg.sendingRBC.valid = kcg_true;
  outC->_L15_then_else_IfBlock1.radio_Msg.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L15_then_else_IfBlock1.radio_Msg.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L15_then_else_IfBlock1.radio_Msg.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L13_then_else_IfBlock1 = kcg_true;
  outC->_L10_then_else_IfBlock1 = kcg_true;
  outC->_L11_then_else_IfBlock1 = kcg_true;
  outC->_L12_then_else_IfBlock1.valid = kcg_true;
  outC->_L12_then_else_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L12_then_else_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L12_then_else_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L12_then_else_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L12_then_else_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L12_then_else_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L12_then_else_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L12_then_else_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L12_then_else_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L12_then_else_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L12_then_else_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L12_then_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L12_then_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L12_then_else_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L12_then_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L12_then_else_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L12_then_else_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L12_then_else_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L12_then_else_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L12_then_else_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L12_then_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L12_then_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L12_then_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L12_then_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L12_then_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L12_then_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L12_then_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L12_then_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L12_then_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L12_then_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L12_then_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L12_then_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L12_then_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L12_then_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L12_then_else_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L12_then_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L12_then_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L12_then_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L12_then_else_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int32(
      0);
  outC->_L12_then_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L12_then_else_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int32(
      0);
  outC->_L12_then_else_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L12_then_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L12_then_else_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L12_then_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L12_then_else_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L12_then_else_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L12_then_else_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L12_then_else_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L12_then_else_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L12_then_else_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L12_then_else_IfBlock1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L12_then_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx12 = 0; idx12 < 30; idx12++) {
    outC->_L12_then_else_IfBlock1.packets.PacketHeaders[idx12].nid_packet =
      kcg_lit_int32(0);
    outC->_L12_then_else_IfBlock1.packets.PacketHeaders[idx12].q_dir =
      Q_DIR_Reverse;
    outC->_L12_then_else_IfBlock1.packets.PacketHeaders[idx12].valid = kcg_true;
    outC->_L12_then_else_IfBlock1.packets.PacketHeaders[idx12].startAddress =
      kcg_lit_int32(0);
    outC->_L12_then_else_IfBlock1.packets.PacketHeaders[idx12].endAddress =
      kcg_lit_int32(0);
  }
  for (idx13 = 0; idx13 < 500; idx13++) {
    outC->_L12_then_else_IfBlock1.packets.PacketData[idx13] = kcg_lit_int32(0);
  }
  outC->_L12_then_else_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L12_then_else_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L12_then_else_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L12_then_else_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->else_clock_IfBlock1 = kcg_true;
  for (idx15 = 0; idx15 < 41; idx15++) {
    outC->_L18_then_IfBlock1[idx15].valid = kcg_true;
    outC->_L18_then_IfBlock1[idx15].nid_c = kcg_lit_int32(0);
    outC->_L18_then_IfBlock1[idx15].nid_bg = kcg_lit_int32(0);
    outC->_L18_then_IfBlock1[idx15].q_link = Q_LINK_Unlinked;
    outC->_L18_then_IfBlock1[idx15].location.nominal = kcg_lit_int32(0);
    outC->_L18_then_IfBlock1[idx15].location.d_min = kcg_lit_int32(0);
    outC->_L18_then_IfBlock1[idx15].location.d_max = kcg_lit_int32(0);
    outC->_L18_then_IfBlock1[idx15].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L18_then_IfBlock1[idx15].infoFromLinking.valid = kcg_true;
    outC->_L18_then_IfBlock1[idx15].infoFromLinking.nid_bg_fromLinkingBG =
      kcg_lit_int32(0);
    outC->_L18_then_IfBlock1[idx15].infoFromLinking.nid_c_fromLinkingBG =
      kcg_lit_int32(0);
    outC->_L18_then_IfBlock1[idx15].infoFromLinking.expectedLocation.nominal =
      kcg_lit_int32(0);
    outC->_L18_then_IfBlock1[idx15].infoFromLinking.expectedLocation.d_min =
      kcg_lit_int32(0);
    outC->_L18_then_IfBlock1[idx15].infoFromLinking.expectedLocation.d_max =
      kcg_lit_int32(0);
    outC->_L18_then_IfBlock1[idx15].infoFromLinking.d_link.nominal =
      kcg_lit_int32(0);
    outC->_L18_then_IfBlock1[idx15].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L18_then_IfBlock1[idx15].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L18_then_IfBlock1[idx15].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L18_then_IfBlock1[idx15].infoFromLinking.linkingInfo.nid_LRBG =
      kcg_lit_int32(0);
    outC->_L18_then_IfBlock1[idx15].infoFromLinking.linkingInfo.q_dir =
      Q_DIR_Reverse;
    outC->_L18_then_IfBlock1[idx15].infoFromLinking.linkingInfo.q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L18_then_IfBlock1[idx15].infoFromLinking.linkingInfo.d_link =
      kcg_lit_int32(0);
    outC->_L18_then_IfBlock1[idx15].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L18_then_IfBlock1[idx15].infoFromLinking.linkingInfo.nid_c =
      kcg_lit_int32(0);
    outC->_L18_then_IfBlock1[idx15].infoFromLinking.linkingInfo.nid_bg =
      kcg_lit_int32(0);
    outC->_L18_then_IfBlock1[idx15].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L18_then_IfBlock1[idx15].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L18_then_IfBlock1[idx15].infoFromLinking.linkingInfo.q_locacc =
      kcg_lit_int32(0);
    outC->_L18_then_IfBlock1[idx15].infoFromPassing.valid = kcg_true;
    outC->_L18_then_IfBlock1[idx15].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L18_then_IfBlock1[idx15].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L18_then_IfBlock1[idx15].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L18_then_IfBlock1[idx15].infoFromPassing.BG_Header.q_media =
      Q_MEDIA_Balise;
    outC->_L18_then_IfBlock1[idx15].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L18_then_IfBlock1[idx15].infoFromPassing.BG_Header.m_mcount =
      kcg_lit_int32(0);
    outC->_L18_then_IfBlock1[idx15].infoFromPassing.BG_Header.nid_c =
      kcg_lit_int32(0);
    outC->_L18_then_IfBlock1[idx15].infoFromPassing.BG_Header.nid_bg =
      kcg_lit_int32(0);
    outC->_L18_then_IfBlock1[idx15].infoFromPassing.BG_Header.q_link =
      Q_LINK_Unlinked;
    outC->_L18_then_IfBlock1[idx15].infoFromPassing.BG_Header.bgPosition.valid =
      kcg_true;
    outC->_L18_then_IfBlock1[idx15].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L18_then_IfBlock1[idx15].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L18_then_IfBlock1[idx15].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L18_then_IfBlock1[idx15].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L18_then_IfBlock1[idx15].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L18_then_IfBlock1[idx15].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L18_then_IfBlock1[idx15].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L18_then_IfBlock1[idx15].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L18_then_IfBlock1[idx15].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L18_then_IfBlock1[idx15].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L18_then_IfBlock1[idx15].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L18_then_IfBlock1[idx15].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L18_then_IfBlock1[idx15].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L18_then_IfBlock1[idx15].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L18_then_IfBlock1[idx15].infoFromPassing.BG_Header.q_nvlocacc =
      kcg_lit_int32(0);
    outC->_L18_then_IfBlock1[idx15].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L18_then_IfBlock1[idx15].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L18_then_IfBlock1[idx15].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx14 = 0; idx14 < 33; idx14++) {
      outC->_L18_then_IfBlock1[idx15].infoFromPassing.linkedBGs[idx14].valid =
        kcg_true;
      outC->_L18_then_IfBlock1[idx15].infoFromPassing.linkedBGs[idx14].nid_LRBG =
        kcg_lit_int32(0);
      outC->_L18_then_IfBlock1[idx15].infoFromPassing.linkedBGs[idx14].q_dir =
        Q_DIR_Reverse;
      outC->_L18_then_IfBlock1[idx15].infoFromPassing.linkedBGs[idx14].q_scale =
        Q_SCALE_10_cm_scale;
      outC->_L18_then_IfBlock1[idx15].infoFromPassing.linkedBGs[idx14].d_link =
        kcg_lit_int32(0);
      outC->_L18_then_IfBlock1[idx15].infoFromPassing.linkedBGs[idx14].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L18_then_IfBlock1[idx15].infoFromPassing.linkedBGs[idx14].nid_c =
        kcg_lit_int32(0);
      outC->_L18_then_IfBlock1[idx15].infoFromPassing.linkedBGs[idx14].nid_bg =
        kcg_lit_int32(0);
      outC->_L18_then_IfBlock1[idx15].infoFromPassing.linkedBGs[idx14].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L18_then_IfBlock1[idx15].infoFromPassing.linkedBGs[idx14].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L18_then_IfBlock1[idx15].infoFromPassing.linkedBGs[idx14].q_locacc =
        kcg_lit_int32(0);
    }
    outC->_L18_then_IfBlock1[idx15].missed = kcg_true;
  }
  outC->_L19_then_IfBlock1.valid = kcg_true;
  outC->_L19_then_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L19_then_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L19_then_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L19_then_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L19_then_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L19_then_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L19_then_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L19_then_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L19_then_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L19_then_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L19_then_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L19_then_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L19_then_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L19_then_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L19_then_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L19_then_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L19_then_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L19_then_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L19_then_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L19_then_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L19_then_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L19_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L19_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L19_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L19_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L19_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L19_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L19_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L19_then_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L19_then_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L19_then_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L19_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L19_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L19_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L19_then_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L19_then_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L19_then_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L19_then_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L19_then_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L19_then_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L19_then_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L19_then_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L19_then_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L19_then_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L19_then_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L19_then_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L19_then_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L19_then_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L19_then_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L19_then_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L19_then_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L19_then_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L19_then_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx16 = 0; idx16 < 30; idx16++) {
    outC->_L19_then_IfBlock1.packets.PacketHeaders[idx16].nid_packet =
      kcg_lit_int32(0);
    outC->_L19_then_IfBlock1.packets.PacketHeaders[idx16].q_dir = Q_DIR_Reverse;
    outC->_L19_then_IfBlock1.packets.PacketHeaders[idx16].valid = kcg_true;
    outC->_L19_then_IfBlock1.packets.PacketHeaders[idx16].startAddress =
      kcg_lit_int32(0);
    outC->_L19_then_IfBlock1.packets.PacketHeaders[idx16].endAddress =
      kcg_lit_int32(0);
  }
  for (idx17 = 0; idx17 < 500; idx17++) {
    outC->_L19_then_IfBlock1.packets.PacketData[idx17] = kcg_lit_int32(0);
  }
  outC->_L19_then_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L19_then_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L19_then_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L19_then_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L20_then_IfBlock1 = kcg_true;
  outC->_L22_then_IfBlock1.valid = kcg_true;
  outC->_L22_then_IfBlock1.systemTime = kcg_lit_int32(0);
  outC->_L22_then_IfBlock1.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L22_then_IfBlock1.telegramHeaders.present = kcg_true;
  for (idx20 = 0; idx20 < 8; idx20++) {
    outC->_L22_then_IfBlock1.telegramHeaders.Telegrams[idx20].valid = kcg_true;
    outC->_L22_then_IfBlock1.telegramHeaders.Telegrams[idx20].checkResult =
      kcg_true;
    outC->_L22_then_IfBlock1.telegramHeaders.Telegrams[idx20].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L22_then_IfBlock1.telegramHeaders.Telegrams[idx20].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L22_then_IfBlock1.telegramHeaders.Telegrams[idx20].telegramheader.q_media =
      Q_MEDIA_Balise;
    outC->_L22_then_IfBlock1.telegramHeaders.Telegrams[idx20].telegramheader.n_pig =
      N_PIG_I_am_the_1st;
    outC->_L22_then_IfBlock1.telegramHeaders.Telegrams[idx20].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L22_then_IfBlock1.telegramHeaders.Telegrams[idx20].telegramheader.m_dup =
      M_DUP_No_duplicates;
    outC->_L22_then_IfBlock1.telegramHeaders.Telegrams[idx20].telegramheader.m_mcount =
      kcg_lit_int32(0);
    outC->_L22_then_IfBlock1.telegramHeaders.Telegrams[idx20].telegramheader.nid_c =
      kcg_lit_int32(0);
    outC->_L22_then_IfBlock1.telegramHeaders.Telegrams[idx20].telegramheader.nid_bg =
      kcg_lit_int32(0);
    outC->_L22_then_IfBlock1.telegramHeaders.Telegrams[idx20].telegramheader.q_link =
      Q_LINK_Unlinked;
    for (idx18 = 0; idx18 < 30; idx18++) {
      outC->_L22_then_IfBlock1.telegramHeaders.Telegrams[idx20].packets.PacketHeaders[idx18].nid_packet =
        kcg_lit_int32(0);
      outC->_L22_then_IfBlock1.telegramHeaders.Telegrams[idx20].packets.PacketHeaders[idx18].q_dir =
        Q_DIR_Reverse;
      outC->_L22_then_IfBlock1.telegramHeaders.Telegrams[idx20].packets.PacketHeaders[idx18].valid =
        kcg_true;
      outC->_L22_then_IfBlock1.telegramHeaders.Telegrams[idx20].packets.PacketHeaders[idx18].startAddress =
        kcg_lit_int32(0);
      outC->_L22_then_IfBlock1.telegramHeaders.Telegrams[idx20].packets.PacketHeaders[idx18].endAddress =
        kcg_lit_int32(0);
    }
    for (idx19 = 0; idx19 < 500; idx19++) {
      outC->_L22_then_IfBlock1.telegramHeaders.Telegrams[idx20].packets.PacketData[idx19] =
        kcg_lit_int32(0);
    }
  }
  outC->_L22_then_IfBlock1.telegramHeaders.numberBalises = kcg_lit_int32(0);
  outC->_L22_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L22_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->_L22_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L22_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->_L22_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->_L22_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L22_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L22_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L22_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L22_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L22_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L22_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L22_then_IfBlock1.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L22_then_IfBlock1.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L22_then_IfBlock1.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L22_then_IfBlock1.radio_Msg.present = kcg_true;
  outC->_L22_then_IfBlock1.radio_Msg.consistencyError = kcg_true;
  outC->_L22_then_IfBlock1.radio_Msg.header.radioDevice = kcg_lit_int32(0);
  outC->_L22_then_IfBlock1.radio_Msg.header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L22_then_IfBlock1.radio_Msg.header.nid_message = kcg_lit_int32(0);
  outC->_L22_then_IfBlock1.radio_Msg.header.t_train = kcg_lit_int32(0);
  outC->_L22_then_IfBlock1.radio_Msg.header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L22_then_IfBlock1.radio_Msg.header.nid_lrbg = kcg_lit_int32(0);
  outC->_L22_then_IfBlock1.radio_Msg.header.t_train_reference = kcg_lit_int32(0);
  outC->_L22_then_IfBlock1.radio_Msg.header.nid_em = kcg_lit_int32(0);
  outC->_L22_then_IfBlock1.radio_Msg.header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L22_then_IfBlock1.radio_Msg.header.d_sr = kcg_lit_int32(0);
  outC->_L22_then_IfBlock1.radio_Msg.header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L22_then_IfBlock1.radio_Msg.header.d_ref = kcg_lit_int32(0);
  outC->_L22_then_IfBlock1.radio_Msg.header.q_dir = Q_DIR_Reverse;
  outC->_L22_then_IfBlock1.radio_Msg.header.d_emergencystop = kcg_lit_int32(0);
  outC->_L22_then_IfBlock1.radio_Msg.header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L22_then_IfBlock1.radio_Msg.radioMetadata.t_train_reference = kcg_true;
  outC->_L22_then_IfBlock1.radio_Msg.radioMetadata.nid_em = kcg_true;
  outC->_L22_then_IfBlock1.radio_Msg.radioMetadata.q_scale = kcg_true;
  outC->_L22_then_IfBlock1.radio_Msg.radioMetadata.d_sr = kcg_true;
  outC->_L22_then_IfBlock1.radio_Msg.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L22_then_IfBlock1.radio_Msg.radioMetadata.d_ref = kcg_true;
  outC->_L22_then_IfBlock1.radio_Msg.radioMetadata.q_dir = kcg_true;
  outC->_L22_then_IfBlock1.radio_Msg.radioMetadata.d_emergencystop = kcg_true;
  outC->_L22_then_IfBlock1.radio_Msg.radioMetadata.m_version = kcg_true;
  for (idx21 = 0; idx21 < 30; idx21++) {
    outC->_L22_then_IfBlock1.radio_Msg.packets.PacketHeaders[idx21].nid_packet =
      kcg_lit_int32(0);
    outC->_L22_then_IfBlock1.radio_Msg.packets.PacketHeaders[idx21].q_dir =
      Q_DIR_Reverse;
    outC->_L22_then_IfBlock1.radio_Msg.packets.PacketHeaders[idx21].valid =
      kcg_true;
    outC->_L22_then_IfBlock1.radio_Msg.packets.PacketHeaders[idx21].startAddress =
      kcg_lit_int32(0);
    outC->_L22_then_IfBlock1.radio_Msg.packets.PacketHeaders[idx21].endAddress =
      kcg_lit_int32(0);
  }
  for (idx22 = 0; idx22 < 500; idx22++) {
    outC->_L22_then_IfBlock1.radio_Msg.packets.PacketData[idx22] = kcg_lit_int32(0);
  }
  outC->_L22_then_IfBlock1.radio_Msg.sendingRBC.valid = kcg_true;
  outC->_L22_then_IfBlock1.radio_Msg.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L22_then_IfBlock1.radio_Msg.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L22_then_IfBlock1.radio_Msg.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L23_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L24_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L25_then_IfBlock1 = kcg_lit_int32(0);
  outC->nid_c = kcg_lit_int32(0);
  outC->nid_errorBG = kcg_lit_int32(0);
  outC->incompatibleVersion = kcg_true;
  outC->errorUnlinkedBG = kcg_true;
  outC->errorLinkedBG = kcg_true;
  outC->badBaliseMessageToDMI = kcg_true;
  outC->applyServiceBrake = kcg_true;
  outC->passedBG_out.valid = kcg_true;
  outC->passedBG_out.source = msrc_undefined_Common_Types_Pkg;
  outC->passedBG_out.radioMetadata.t_train_reference = kcg_true;
  outC->passedBG_out.radioMetadata.nid_em = kcg_true;
  outC->passedBG_out.radioMetadata.q_scale = kcg_true;
  outC->passedBG_out.radioMetadata.d_sr = kcg_true;
  outC->passedBG_out.radioMetadata.t_sh_rqst = kcg_true;
  outC->passedBG_out.radioMetadata.d_ref = kcg_true;
  outC->passedBG_out.radioMetadata.q_dir = kcg_true;
  outC->passedBG_out.radioMetadata.d_emergencystop = kcg_true;
  outC->passedBG_out.radioMetadata.m_version = kcg_true;
  outC->passedBG_out.BG_Common_Header.valid = kcg_true;
  outC->passedBG_out.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->passedBG_out.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->passedBG_out.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->passedBG_out.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->passedBG_out.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->passedBG_out.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->passedBG_out.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->passedBG_out.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->passedBG_out.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->passedBG_out.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->passedBG_out.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->passedBG_out.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->passedBG_out.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->passedBG_out.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->passedBG_out.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->passedBG_out.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->passedBG_out.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->passedBG_out.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->passedBG_out.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->passedBG_out.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->passedBG_out.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->passedBG_out.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->passedBG_out.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->passedBG_out.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->passedBG_out.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->passedBG_out.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->passedBG_out.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->passedBG_out.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->passedBG_out.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->passedBG_out.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->passedBG_out.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->passedBG_out.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->passedBG_out.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->passedBG_out.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->passedBG_out.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->passedBG_out.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->passedBG_out.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->passedBG_out.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->passedBG_out.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->passedBG_out.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->passedBG_out.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->passedBG_out.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx23 = 0; idx23 < 30; idx23++) {
    outC->passedBG_out.packets.PacketHeaders[idx23].nid_packet = kcg_lit_int32(0);
    outC->passedBG_out.packets.PacketHeaders[idx23].q_dir = Q_DIR_Reverse;
    outC->passedBG_out.packets.PacketHeaders[idx23].valid = kcg_true;
    outC->passedBG_out.packets.PacketHeaders[idx23].startAddress = kcg_lit_int32(0);
    outC->passedBG_out.packets.PacketHeaders[idx23].endAddress = kcg_lit_int32(0);
  }
  for (idx24 = 0; idx24 < 500; idx24++) {
    outC->passedBG_out.packets.PacketData[idx24] = kcg_lit_int32(0);
  }
  outC->passedBG_out.sendingRBC.valid = kcg_true;
  outC->passedBG_out.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->passedBG_out.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->passedBG_out.sendingRBC.device_id = kcg_lit_int32(0);
  /* IfBlock1:then:_L19=(CheckBGConsistency_Pkg::CaseLinkingInUse#2)/ */
  CaseLinkingInUse_init_CheckBGConsistency_Pkg(
    &outC->Context_CaseLinkingInUse_2);
  /* IfBlock1:else:then:_L10=(CheckBGConsistency_Pkg::CaseLinkingNotInUse#3)/ */
  CaseLinkingNotInUse_init_CheckBGConsistency_Pkg(
    &outC->Context_CaseLinkingNotInUse_3);
  /* _L14=(CheckBGConsistency_Pkg::SubFunction::CheckMode#1)/ */
  CheckMode_init_CheckBGConsistency_Pkg_SubFunction(&outC->Context_CheckMode_1);
  /* _L50=(CheckBGConsistency_Pkg::SubFunction::CheckMVersion#1)/ */
  CheckMVersion_init_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_CheckMVersion_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CheckBGConsistency_reset_CheckBGConsistency_Pkg(
  outC_CheckBGConsistency_CheckBGConsistency_Pkg *outC)
{
  /* IfBlock1:then:_L19=(CheckBGConsistency_Pkg::CaseLinkingInUse#2)/ */
  CaseLinkingInUse_reset_CheckBGConsistency_Pkg(
    &outC->Context_CaseLinkingInUse_2);
  /* IfBlock1:else:then:_L10=(CheckBGConsistency_Pkg::CaseLinkingNotInUse#3)/ */
  CaseLinkingNotInUse_reset_CheckBGConsistency_Pkg(
    &outC->Context_CaseLinkingNotInUse_3);
  /* _L14=(CheckBGConsistency_Pkg::SubFunction::CheckMode#1)/ */
  CheckMode_reset_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_CheckMode_1);
  /* _L50=(CheckBGConsistency_Pkg::SubFunction::CheckMVersion#1)/ */
  CheckMVersion_reset_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_CheckMVersion_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_CheckBGConsistency_CheckBGConsistency_Pkg(
  SV_CheckBGConsistency_CheckBGConsistency_Pkg *SV,
  outC_CheckBGConsistency_CheckBGConsistency_Pkg *outC)
{
  kcg_save_SV_CaseLinkingInUse_CheckBGConsistency_Pkg(
    &SV->Context_CaseLinkingInUse_2,
    &outC->Context_CaseLinkingInUse_2);
}

void kcg_load_SV_CheckBGConsistency_CheckBGConsistency_Pkg(
  outC_CheckBGConsistency_CheckBGConsistency_Pkg *outC,
  SV_CheckBGConsistency_CheckBGConsistency_Pkg *SV)
{
  kcg_load_SV_CaseLinkingInUse_CheckBGConsistency_Pkg(
    &outC->Context_CaseLinkingInUse_2,
    &SV->Context_CaseLinkingInUse_2);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CheckBGConsistency_CheckBGConsistency_Pkg.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

