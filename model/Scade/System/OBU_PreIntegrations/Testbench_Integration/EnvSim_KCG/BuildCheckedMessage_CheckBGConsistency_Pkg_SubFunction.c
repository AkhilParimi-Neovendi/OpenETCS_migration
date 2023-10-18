/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage/ */
void BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction(
  /* trackSideForCheck/ */
  TrackSide_ForCheck_T_Common_Types_Pkg *trackSideForCheck,
  /* q_nvlocacc/ */
  Q_NVLOCACC q_nvlocacc,
  outC_BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction *outC)
{
  static kcg_int64 noname;
  static centerOfBalisePosition_T_BG_Types_Pkg _1_noname;

  kcg_copy_RBC_Id_T_Common_Types_Pkg(
    &outC->_L85,
    (RBC_Id_T_Common_Types_Pkg *) &cSendingRBC_CheckBGConsistency_Pkg);
  kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(&outC->_L62, trackSideForCheck);
  kcg_copy_BG_Message_T_BG_Types_Pkg(&outC->_L63, &outC->_L62.telegramHeaders);
  kcg_copy_TelegramArray_T_BG_Types_Pkg(&outC->_L43, &outC->_L63.Telegrams);
  /* _L82=(CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets_Iter#1)/ */
  MergAllPackets_Iter_CheckBGConsistency_Pkg_SubFunction_MergFunction(
    &outC->_L43,
    &outC->Context_MergAllPackets_Iter_1);
  kcg_copy_Telegram_T_BG_Types_Pkg(
    &outC->_L82,
    &outC->Context_MergAllPackets_Iter_1.telegramout);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L84, &outC->_L82.packets);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L66,
    (Radio_TrackTrain_Header_T_Radio_Types_Pkg *)
      &cNoRadioHeader_CheckBGConsistency_Pkg);
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L41,
    &outC->_L63.centerOfBalisePosition);
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(&_1_noname, &outC->_L41);
  outC->_L61 = q_nvlocacc;
  kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(&outC->_L60, trackSideForCheck);
  /* _L59=(CheckBGConsistency_Pkg::SubFunction::bildBGHeader#1)/ */
  bildBGHeader_CheckBGConsistency_Pkg_SubFunction(
    &outC->_L60,
    outC->_L61,
    &outC->Context_bildBGHeader_1);
  kcg_copy_BG_Header_T_BG_Types_Pkg(
    &outC->_L59,
    &outC->Context_bildBGHeader_1.bgHeader);
  outC->_L42 = outC->_L63.numberBalises;
  noname = outC->_L42;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &outC->_L46,
    (RadioMetadata_T_Common_Types_Pkg *) &cRadioMetadata_CheckBGConsistency_Pkg);
  outC->_L44 = outC->_L63.present;
  outC->_L38 = cEurobalise_CheckBGConsistency_Pkg;
  outC->_L40.valid = outC->_L44;
  outC->_L40.source = outC->_L38;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &outC->_L40.radioMetadata,
    &outC->_L46);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L40.BG_Common_Header, &outC->_L59);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L40.Radio_Common_Header,
    &outC->_L66);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L40.packets, &outC->_L84);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&outC->_L40.sendingRBC, &outC->_L85);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->checkedMessage, &outC->_L40);
}

#ifndef KCG_USER_DEFINED_INIT
void BuildCheckedMessage_init_CheckBGConsistency_Pkg_SubFunction(
  outC_BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction *outC)
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

  outC->_L85.valid = kcg_true;
  outC->_L85.nid_c = kcg_lit_int64(0);
  outC->_L85.rbc_id = kcg_lit_int64(0);
  outC->_L85.device_id = kcg_lit_int64(0);
  for (idx = 0; idx < 30; idx++) {
    outC->_L84.PacketHeaders[idx].nid_packet = kcg_lit_int64(0);
    outC->_L84.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L84.PacketHeaders[idx].valid = kcg_true;
    outC->_L84.PacketHeaders[idx].startAddress = kcg_lit_int64(0);
    outC->_L84.PacketHeaders[idx].endAddress = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L84.PacketData[idx1] = kcg_lit_int64(0);
  }
  outC->_L82.valid = kcg_true;
  outC->_L82.checkResult = kcg_true;
  outC->_L82.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L82.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L82.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L82.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L82.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L82.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L82.telegramheader.m_mcount = kcg_lit_int64(0);
  outC->_L82.telegramheader.nid_c = kcg_lit_int64(0);
  outC->_L82.telegramheader.nid_bg = kcg_lit_int64(0);
  outC->_L82.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L82.packets.PacketHeaders[idx2].nid_packet = kcg_lit_int64(0);
    outC->_L82.packets.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L82.packets.PacketHeaders[idx2].valid = kcg_true;
    outC->_L82.packets.PacketHeaders[idx2].startAddress = kcg_lit_int64(0);
    outC->_L82.packets.PacketHeaders[idx2].endAddress = kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L82.packets.PacketData[idx3] = kcg_lit_int64(0);
  }
  outC->_L66.radioDevice = kcg_lit_int64(0);
  outC->_L66.receivedSystemTime = kcg_lit_int64(0);
  outC->_L66.nid_message = kcg_lit_int64(0);
  outC->_L66.t_train = kcg_lit_int64(0);
  outC->_L66.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L66.nid_lrbg = kcg_lit_int64(0);
  outC->_L66.t_train_reference = kcg_lit_int64(0);
  outC->_L66.nid_em = kcg_lit_int64(0);
  outC->_L66.q_scale = Q_SCALE_10_cm_scale;
  outC->_L66.d_sr = kcg_lit_int64(0);
  outC->_L66.t_sh_rqst = kcg_lit_int64(0);
  outC->_L66.d_ref = kcg_lit_int64(0);
  outC->_L66.q_dir = Q_DIR_Reverse;
  outC->_L66.d_emergencystop = kcg_lit_int64(0);
  outC->_L66.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L63.present = kcg_true;
  for (idx6 = 0; idx6 < 8; idx6++) {
    outC->_L63.Telegrams[idx6].valid = kcg_true;
    outC->_L63.Telegrams[idx6].checkResult = kcg_true;
    outC->_L63.Telegrams[idx6].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L63.Telegrams[idx6].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L63.Telegrams[idx6].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L63.Telegrams[idx6].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L63.Telegrams[idx6].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L63.Telegrams[idx6].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->_L63.Telegrams[idx6].telegramheader.m_mcount = kcg_lit_int64(0);
    outC->_L63.Telegrams[idx6].telegramheader.nid_c = kcg_lit_int64(0);
    outC->_L63.Telegrams[idx6].telegramheader.nid_bg = kcg_lit_int64(0);
    outC->_L63.Telegrams[idx6].telegramheader.q_link = Q_LINK_Unlinked;
    for (idx4 = 0; idx4 < 30; idx4++) {
      outC->_L63.Telegrams[idx6].packets.PacketHeaders[idx4].nid_packet =
        kcg_lit_int64(0);
      outC->_L63.Telegrams[idx6].packets.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
      outC->_L63.Telegrams[idx6].packets.PacketHeaders[idx4].valid = kcg_true;
      outC->_L63.Telegrams[idx6].packets.PacketHeaders[idx4].startAddress =
        kcg_lit_int64(0);
      outC->_L63.Telegrams[idx6].packets.PacketHeaders[idx4].endAddress =
        kcg_lit_int64(0);
    }
    for (idx5 = 0; idx5 < 500; idx5++) {
      outC->_L63.Telegrams[idx6].packets.PacketData[idx5] = kcg_lit_int64(0);
    }
  }
  outC->_L63.numberBalises = kcg_lit_int64(0);
  outC->_L63.centerOfBalisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L63.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->_L63.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L63.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->_L63.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->_L63.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L63.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L63.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L63.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L63.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L63.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L63.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L63.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L63.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L63.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L62.valid = kcg_true;
  outC->_L62.systemTime = kcg_lit_int64(0);
  outC->_L62.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L62.telegramHeaders.present = kcg_true;
  for (idx9 = 0; idx9 < 8; idx9++) {
    outC->_L62.telegramHeaders.Telegrams[idx9].valid = kcg_true;
    outC->_L62.telegramHeaders.Telegrams[idx9].checkResult = kcg_true;
    outC->_L62.telegramHeaders.Telegrams[idx9].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L62.telegramHeaders.Telegrams[idx9].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L62.telegramHeaders.Telegrams[idx9].telegramheader.q_media =
      Q_MEDIA_Balise;
    outC->_L62.telegramHeaders.Telegrams[idx9].telegramheader.n_pig =
      N_PIG_I_am_the_1st;
    outC->_L62.telegramHeaders.Telegrams[idx9].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L62.telegramHeaders.Telegrams[idx9].telegramheader.m_dup =
      M_DUP_No_duplicates;
    outC->_L62.telegramHeaders.Telegrams[idx9].telegramheader.m_mcount =
      kcg_lit_int64(0);
    outC->_L62.telegramHeaders.Telegrams[idx9].telegramheader.nid_c =
      kcg_lit_int64(0);
    outC->_L62.telegramHeaders.Telegrams[idx9].telegramheader.nid_bg =
      kcg_lit_int64(0);
    outC->_L62.telegramHeaders.Telegrams[idx9].telegramheader.q_link =
      Q_LINK_Unlinked;
    for (idx7 = 0; idx7 < 30; idx7++) {
      outC->_L62.telegramHeaders.Telegrams[idx9].packets.PacketHeaders[idx7].nid_packet =
        kcg_lit_int64(0);
      outC->_L62.telegramHeaders.Telegrams[idx9].packets.PacketHeaders[idx7].q_dir =
        Q_DIR_Reverse;
      outC->_L62.telegramHeaders.Telegrams[idx9].packets.PacketHeaders[idx7].valid =
        kcg_true;
      outC->_L62.telegramHeaders.Telegrams[idx9].packets.PacketHeaders[idx7].startAddress =
        kcg_lit_int64(0);
      outC->_L62.telegramHeaders.Telegrams[idx9].packets.PacketHeaders[idx7].endAddress =
        kcg_lit_int64(0);
    }
    for (idx8 = 0; idx8 < 500; idx8++) {
      outC->_L62.telegramHeaders.Telegrams[idx9].packets.PacketData[idx8] =
        kcg_lit_int64(0);
    }
  }
  outC->_L62.telegramHeaders.numberBalises = kcg_lit_int64(0);
  outC->_L62.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L62.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->_L62.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L62.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->_L62.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->_L62.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L62.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L62.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L62.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L62.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L62.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L62.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L62.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L62.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L62.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L62.radio_Msg.present = kcg_true;
  outC->_L62.radio_Msg.consistencyError = kcg_true;
  outC->_L62.radio_Msg.header.radioDevice = kcg_lit_int64(0);
  outC->_L62.radio_Msg.header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L62.radio_Msg.header.nid_message = kcg_lit_int64(0);
  outC->_L62.radio_Msg.header.t_train = kcg_lit_int64(0);
  outC->_L62.radio_Msg.header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L62.radio_Msg.header.nid_lrbg = kcg_lit_int64(0);
  outC->_L62.radio_Msg.header.t_train_reference = kcg_lit_int64(0);
  outC->_L62.radio_Msg.header.nid_em = kcg_lit_int64(0);
  outC->_L62.radio_Msg.header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L62.radio_Msg.header.d_sr = kcg_lit_int64(0);
  outC->_L62.radio_Msg.header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L62.radio_Msg.header.d_ref = kcg_lit_int64(0);
  outC->_L62.radio_Msg.header.q_dir = Q_DIR_Reverse;
  outC->_L62.radio_Msg.header.d_emergencystop = kcg_lit_int64(0);
  outC->_L62.radio_Msg.header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L62.radio_Msg.radioMetadata.t_train_reference = kcg_true;
  outC->_L62.radio_Msg.radioMetadata.nid_em = kcg_true;
  outC->_L62.radio_Msg.radioMetadata.q_scale = kcg_true;
  outC->_L62.radio_Msg.radioMetadata.d_sr = kcg_true;
  outC->_L62.radio_Msg.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L62.radio_Msg.radioMetadata.d_ref = kcg_true;
  outC->_L62.radio_Msg.radioMetadata.q_dir = kcg_true;
  outC->_L62.radio_Msg.radioMetadata.d_emergencystop = kcg_true;
  outC->_L62.radio_Msg.radioMetadata.m_version = kcg_true;
  for (idx10 = 0; idx10 < 30; idx10++) {
    outC->_L62.radio_Msg.packets.PacketHeaders[idx10].nid_packet = kcg_lit_int64(0);
    outC->_L62.radio_Msg.packets.PacketHeaders[idx10].q_dir = Q_DIR_Reverse;
    outC->_L62.radio_Msg.packets.PacketHeaders[idx10].valid = kcg_true;
    outC->_L62.radio_Msg.packets.PacketHeaders[idx10].startAddress =
      kcg_lit_int64(0);
    outC->_L62.radio_Msg.packets.PacketHeaders[idx10].endAddress = kcg_lit_int64(0);
  }
  for (idx11 = 0; idx11 < 500; idx11++) {
    outC->_L62.radio_Msg.packets.PacketData[idx11] = kcg_lit_int64(0);
  }
  outC->_L62.radio_Msg.sendingRBC.valid = kcg_true;
  outC->_L62.radio_Msg.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L62.radio_Msg.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L62.radio_Msg.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L61 = kcg_lit_int64(0);
  outC->_L60.valid = kcg_true;
  outC->_L60.systemTime = kcg_lit_int64(0);
  outC->_L60.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L60.telegramHeaders.present = kcg_true;
  for (idx14 = 0; idx14 < 8; idx14++) {
    outC->_L60.telegramHeaders.Telegrams[idx14].valid = kcg_true;
    outC->_L60.telegramHeaders.Telegrams[idx14].checkResult = kcg_true;
    outC->_L60.telegramHeaders.Telegrams[idx14].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L60.telegramHeaders.Telegrams[idx14].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L60.telegramHeaders.Telegrams[idx14].telegramheader.q_media =
      Q_MEDIA_Balise;
    outC->_L60.telegramHeaders.Telegrams[idx14].telegramheader.n_pig =
      N_PIG_I_am_the_1st;
    outC->_L60.telegramHeaders.Telegrams[idx14].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L60.telegramHeaders.Telegrams[idx14].telegramheader.m_dup =
      M_DUP_No_duplicates;
    outC->_L60.telegramHeaders.Telegrams[idx14].telegramheader.m_mcount =
      kcg_lit_int64(0);
    outC->_L60.telegramHeaders.Telegrams[idx14].telegramheader.nid_c =
      kcg_lit_int64(0);
    outC->_L60.telegramHeaders.Telegrams[idx14].telegramheader.nid_bg =
      kcg_lit_int64(0);
    outC->_L60.telegramHeaders.Telegrams[idx14].telegramheader.q_link =
      Q_LINK_Unlinked;
    for (idx12 = 0; idx12 < 30; idx12++) {
      outC->_L60.telegramHeaders.Telegrams[idx14].packets.PacketHeaders[idx12].nid_packet =
        kcg_lit_int64(0);
      outC->_L60.telegramHeaders.Telegrams[idx14].packets.PacketHeaders[idx12].q_dir =
        Q_DIR_Reverse;
      outC->_L60.telegramHeaders.Telegrams[idx14].packets.PacketHeaders[idx12].valid =
        kcg_true;
      outC->_L60.telegramHeaders.Telegrams[idx14].packets.PacketHeaders[idx12].startAddress =
        kcg_lit_int64(0);
      outC->_L60.telegramHeaders.Telegrams[idx14].packets.PacketHeaders[idx12].endAddress =
        kcg_lit_int64(0);
    }
    for (idx13 = 0; idx13 < 500; idx13++) {
      outC->_L60.telegramHeaders.Telegrams[idx14].packets.PacketData[idx13] =
        kcg_lit_int64(0);
    }
  }
  outC->_L60.telegramHeaders.numberBalises = kcg_lit_int64(0);
  outC->_L60.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L60.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->_L60.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L60.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->_L60.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->_L60.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L60.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L60.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L60.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L60.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L60.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L60.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L60.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L60.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L60.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L60.radio_Msg.present = kcg_true;
  outC->_L60.radio_Msg.consistencyError = kcg_true;
  outC->_L60.radio_Msg.header.radioDevice = kcg_lit_int64(0);
  outC->_L60.radio_Msg.header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L60.radio_Msg.header.nid_message = kcg_lit_int64(0);
  outC->_L60.radio_Msg.header.t_train = kcg_lit_int64(0);
  outC->_L60.radio_Msg.header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L60.radio_Msg.header.nid_lrbg = kcg_lit_int64(0);
  outC->_L60.radio_Msg.header.t_train_reference = kcg_lit_int64(0);
  outC->_L60.radio_Msg.header.nid_em = kcg_lit_int64(0);
  outC->_L60.radio_Msg.header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L60.radio_Msg.header.d_sr = kcg_lit_int64(0);
  outC->_L60.radio_Msg.header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L60.radio_Msg.header.d_ref = kcg_lit_int64(0);
  outC->_L60.radio_Msg.header.q_dir = Q_DIR_Reverse;
  outC->_L60.radio_Msg.header.d_emergencystop = kcg_lit_int64(0);
  outC->_L60.radio_Msg.header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L60.radio_Msg.radioMetadata.t_train_reference = kcg_true;
  outC->_L60.radio_Msg.radioMetadata.nid_em = kcg_true;
  outC->_L60.radio_Msg.radioMetadata.q_scale = kcg_true;
  outC->_L60.radio_Msg.radioMetadata.d_sr = kcg_true;
  outC->_L60.radio_Msg.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L60.radio_Msg.radioMetadata.d_ref = kcg_true;
  outC->_L60.radio_Msg.radioMetadata.q_dir = kcg_true;
  outC->_L60.radio_Msg.radioMetadata.d_emergencystop = kcg_true;
  outC->_L60.radio_Msg.radioMetadata.m_version = kcg_true;
  for (idx15 = 0; idx15 < 30; idx15++) {
    outC->_L60.radio_Msg.packets.PacketHeaders[idx15].nid_packet = kcg_lit_int64(0);
    outC->_L60.radio_Msg.packets.PacketHeaders[idx15].q_dir = Q_DIR_Reverse;
    outC->_L60.radio_Msg.packets.PacketHeaders[idx15].valid = kcg_true;
    outC->_L60.radio_Msg.packets.PacketHeaders[idx15].startAddress =
      kcg_lit_int64(0);
    outC->_L60.radio_Msg.packets.PacketHeaders[idx15].endAddress = kcg_lit_int64(0);
  }
  for (idx16 = 0; idx16 < 500; idx16++) {
    outC->_L60.radio_Msg.packets.PacketData[idx16] = kcg_lit_int64(0);
  }
  outC->_L60.radio_Msg.sendingRBC.valid = kcg_true;
  outC->_L60.radio_Msg.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L60.radio_Msg.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L60.radio_Msg.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L59.valid = kcg_true;
  outC->_L59.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L59.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L59.q_media = Q_MEDIA_Balise;
  outC->_L59.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L59.m_mcount = kcg_lit_int64(0);
  outC->_L59.nid_c = kcg_lit_int64(0);
  outC->_L59.nid_bg = kcg_lit_int64(0);
  outC->_L59.q_link = Q_LINK_Unlinked;
  outC->_L59.bgPosition.valid = kcg_true;
  outC->_L59.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L59.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L59.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L59.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L59.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L59.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L59.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L59.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L59.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L59.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L59.bgPosition.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L59.BG_centerDetectionInaccuraccuracies.nominal = kcg_lit_int64(0);
  outC->_L59.BG_centerDetectionInaccuraccuracies.d_min = kcg_lit_int64(0);
  outC->_L59.BG_centerDetectionInaccuraccuracies.d_max = kcg_lit_int64(0);
  outC->_L59.q_nvlocacc = kcg_lit_int64(0);
  outC->_L59.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L59.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L59.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L46.t_train_reference = kcg_true;
  outC->_L46.nid_em = kcg_true;
  outC->_L46.q_scale = kcg_true;
  outC->_L46.d_sr = kcg_true;
  outC->_L46.t_sh_rqst = kcg_true;
  outC->_L46.d_ref = kcg_true;
  outC->_L46.q_dir = kcg_true;
  outC->_L46.d_emergencystop = kcg_true;
  outC->_L46.m_version = kcg_true;
  outC->_L41.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L41.odometerOfBaliseDetection.timestamp = kcg_lit_int64(0);
  outC->_L41.odometerOfBaliseDetection.odo.o_nominal = kcg_lit_int64(0);
  outC->_L41.odometerOfBaliseDetection.odo.o_min = kcg_lit_int64(0);
  outC->_L41.odometerOfBaliseDetection.odo.o_max = kcg_lit_int64(0);
  outC->_L41.odometerOfBaliseDetection.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L41.odometerOfBaliseDetection.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L41.odometerOfBaliseDetection.speed.v_lower = kcg_lit_int64(0);
  outC->_L41.odometerOfBaliseDetection.speed.v_upper = kcg_lit_int64(0);
  outC->_L41.odometerOfBaliseDetection.acceleration = kcg_lit_int64(0);
  outC->_L41.odometerOfBaliseDetection.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L41.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L41.BG_centerDetectionInaccuraccuracies.nominal = kcg_lit_int64(0);
  outC->_L41.BG_centerDetectionInaccuraccuracies.d_min = kcg_lit_int64(0);
  outC->_L41.BG_centerDetectionInaccuraccuracies.d_max = kcg_lit_int64(0);
  outC->_L42 = kcg_lit_int64(0);
  for (idx19 = 0; idx19 < 8; idx19++) {
    outC->_L43[idx19].valid = kcg_true;
    outC->_L43[idx19].checkResult = kcg_true;
    outC->_L43[idx19].telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
    outC->_L43[idx19].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L43[idx19].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L43[idx19].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L43[idx19].telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
    outC->_L43[idx19].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->_L43[idx19].telegramheader.m_mcount = kcg_lit_int64(0);
    outC->_L43[idx19].telegramheader.nid_c = kcg_lit_int64(0);
    outC->_L43[idx19].telegramheader.nid_bg = kcg_lit_int64(0);
    outC->_L43[idx19].telegramheader.q_link = Q_LINK_Unlinked;
    for (idx17 = 0; idx17 < 30; idx17++) {
      outC->_L43[idx19].packets.PacketHeaders[idx17].nid_packet = kcg_lit_int64(0);
      outC->_L43[idx19].packets.PacketHeaders[idx17].q_dir = Q_DIR_Reverse;
      outC->_L43[idx19].packets.PacketHeaders[idx17].valid = kcg_true;
      outC->_L43[idx19].packets.PacketHeaders[idx17].startAddress = kcg_lit_int64(0);
      outC->_L43[idx19].packets.PacketHeaders[idx17].endAddress = kcg_lit_int64(0);
    }
    for (idx18 = 0; idx18 < 500; idx18++) {
      outC->_L43[idx19].packets.PacketData[idx18] = kcg_lit_int64(0);
    }
  }
  outC->_L44 = kcg_true;
  outC->_L40.valid = kcg_true;
  outC->_L40.source = msrc_undefined_Common_Types_Pkg;
  outC->_L40.radioMetadata.t_train_reference = kcg_true;
  outC->_L40.radioMetadata.nid_em = kcg_true;
  outC->_L40.radioMetadata.q_scale = kcg_true;
  outC->_L40.radioMetadata.d_sr = kcg_true;
  outC->_L40.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L40.radioMetadata.d_ref = kcg_true;
  outC->_L40.radioMetadata.q_dir = kcg_true;
  outC->_L40.radioMetadata.d_emergencystop = kcg_true;
  outC->_L40.radioMetadata.m_version = kcg_true;
  outC->_L40.BG_Common_Header.valid = kcg_true;
  outC->_L40.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L40.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L40.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L40.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L40.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L40.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L40.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L40.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L40.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L40.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L40.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L40.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L40.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L40.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L40.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L40.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L40.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L40.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L40.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L40.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L40.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L40.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L40.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L40.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L40.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L40.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L40.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L40.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L40.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L40.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L40.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L40.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L40.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L40.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L40.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L40.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L40.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L40.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L40.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L40.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L40.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L40.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx20 = 0; idx20 < 30; idx20++) {
    outC->_L40.packets.PacketHeaders[idx20].nid_packet = kcg_lit_int64(0);
    outC->_L40.packets.PacketHeaders[idx20].q_dir = Q_DIR_Reverse;
    outC->_L40.packets.PacketHeaders[idx20].valid = kcg_true;
    outC->_L40.packets.PacketHeaders[idx20].startAddress = kcg_lit_int64(0);
    outC->_L40.packets.PacketHeaders[idx20].endAddress = kcg_lit_int64(0);
  }
  for (idx21 = 0; idx21 < 500; idx21++) {
    outC->_L40.packets.PacketData[idx21] = kcg_lit_int64(0);
  }
  outC->_L40.sendingRBC.valid = kcg_true;
  outC->_L40.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L40.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L40.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L38 = msrc_undefined_Common_Types_Pkg;
  outC->checkedMessage.valid = kcg_true;
  outC->checkedMessage.source = msrc_undefined_Common_Types_Pkg;
  outC->checkedMessage.radioMetadata.t_train_reference = kcg_true;
  outC->checkedMessage.radioMetadata.nid_em = kcg_true;
  outC->checkedMessage.radioMetadata.q_scale = kcg_true;
  outC->checkedMessage.radioMetadata.d_sr = kcg_true;
  outC->checkedMessage.radioMetadata.t_sh_rqst = kcg_true;
  outC->checkedMessage.radioMetadata.d_ref = kcg_true;
  outC->checkedMessage.radioMetadata.q_dir = kcg_true;
  outC->checkedMessage.radioMetadata.d_emergencystop = kcg_true;
  outC->checkedMessage.radioMetadata.m_version = kcg_true;
  outC->checkedMessage.BG_Common_Header.valid = kcg_true;
  outC->checkedMessage.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->checkedMessage.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->checkedMessage.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->checkedMessage.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->checkedMessage.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->checkedMessage.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->checkedMessage.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->checkedMessage.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->checkedMessage.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->checkedMessage.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->checkedMessage.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->checkedMessage.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->checkedMessage.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->checkedMessage.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->checkedMessage.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->checkedMessage.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->checkedMessage.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->checkedMessage.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(
      0);
  outC->checkedMessage.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->checkedMessage.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->checkedMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->checkedMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->checkedMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->checkedMessage.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->checkedMessage.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->checkedMessage.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->checkedMessage.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->checkedMessage.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->checkedMessage.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->checkedMessage.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->checkedMessage.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->checkedMessage.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->checkedMessage.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->checkedMessage.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->checkedMessage.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->checkedMessage.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->checkedMessage.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->checkedMessage.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->checkedMessage.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->checkedMessage.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->checkedMessage.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->checkedMessage.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx22 = 0; idx22 < 30; idx22++) {
    outC->checkedMessage.packets.PacketHeaders[idx22].nid_packet = kcg_lit_int64(0);
    outC->checkedMessage.packets.PacketHeaders[idx22].q_dir = Q_DIR_Reverse;
    outC->checkedMessage.packets.PacketHeaders[idx22].valid = kcg_true;
    outC->checkedMessage.packets.PacketHeaders[idx22].startAddress =
      kcg_lit_int64(0);
    outC->checkedMessage.packets.PacketHeaders[idx22].endAddress = kcg_lit_int64(0);
  }
  for (idx23 = 0; idx23 < 500; idx23++) {
    outC->checkedMessage.packets.PacketData[idx23] = kcg_lit_int64(0);
  }
  outC->checkedMessage.sendingRBC.valid = kcg_true;
  outC->checkedMessage.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->checkedMessage.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->checkedMessage.sendingRBC.device_id = kcg_lit_int64(0);
  /* _L59=(CheckBGConsistency_Pkg::SubFunction::bildBGHeader#1)/ */
  bildBGHeader_init_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_bildBGHeader_1);
  /* _L82=(CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets_Iter#1)/ */
  MergAllPackets_Iter_init_CheckBGConsistency_Pkg_SubFunction_MergFunction(
    &outC->Context_MergAllPackets_Iter_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void BuildCheckedMessage_reset_CheckBGConsistency_Pkg_SubFunction(
  outC_BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction *outC)
{
  /* _L59=(CheckBGConsistency_Pkg::SubFunction::bildBGHeader#1)/ */
  bildBGHeader_reset_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_bildBGHeader_1);
  /* _L82=(CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets_Iter#1)/ */
  MergAllPackets_Iter_reset_CheckBGConsistency_Pkg_SubFunction_MergFunction(
    &outC->Context_MergAllPackets_Iter_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

