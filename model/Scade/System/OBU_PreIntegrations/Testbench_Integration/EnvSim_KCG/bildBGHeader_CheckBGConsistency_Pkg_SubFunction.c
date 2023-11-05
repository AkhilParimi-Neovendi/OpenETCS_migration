/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "bildBGHeader_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::bildBGHeader/ */
void bildBGHeader_CheckBGConsistency_Pkg_SubFunction(
  /* trackSideForCheck/ */
  TrackSide_ForCheck_T_Common_Types_Pkg *trackSideForCheck,
  /* q_nvlocacc/ */
  Q_NVLOCACC q_nvlocacc,
  outC_bildBGHeader_CheckBGConsistency_Pkg_SubFunction *outC)
{
  static N_PIG noname;
  static M_DUP _1_noname;
  static MsgSource_T_Common_Types_Pkg _2_noname;
  static RadioMessage_T_Radio_Types_Pkg _3_noname;
  static T_internal_Type_Obu_BasicTypes_Pkg _4_noname;

  kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(&outC->_L28, trackSideForCheck);
  kcg_copy_BG_Message_T_BG_Types_Pkg(&outC->_L16, &outC->_L28.telegramHeaders);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(
    &outC->_L27,
    &outC->_L16.Telegrams[0].telegramheader);
  outC->_L26 = cQqDirTrain_CheckBGConsistency_Pkg;
  outC->_L25 = cQDirLRBGunknown_CheckBGConsistency_Pkg;
  outC->_L23 = q_nvlocacc;
  outC->_L18 = outC->_L28.systemTime;
  _4_noname = outC->_L18;
  outC->_L22 = kcg_false;
  kcg_copy_RadioMessage_T_Radio_Types_Pkg(&outC->_L15, &outC->_L28.radio_Msg);
  kcg_copy_RadioMessage_T_Radio_Types_Pkg(&_3_noname, &outC->_L15);
  outC->_L17 = outC->_L28.msg_type;
  _2_noname = outC->_L17;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(
    &outC->_L21,
    &outC->_L16.centerOfBalisePosition.odometerOfBaliseDetection);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L20,
    &outC->_L16.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies);
  outC->_L7 = outC->_L27.m_dup;
  _1_noname = outC->_L7;
  outC->_L9 = outC->_L27.n_pig;
  noname = outC->_L9;
  outC->_L19 = outC->_L28.valid;
  outC->_L12 = outC->_L27.q_updown;
  outC->_L11 = outC->_L27.m_version;
  outC->_L10 = outC->_L27.q_media;
  outC->_L8 = outC->_L27.n_total;
  outC->_L6 = outC->_L27.m_mcount;
  outC->_L5 = outC->_L27.nid_c;
  outC->_L4 = outC->_L27.nid_bg;
  outC->_L3 = outC->_L27.q_link;
  outC->_L2.valid = outC->_L19;
  outC->_L2.q_updown = outC->_L12;
  outC->_L2.m_version = outC->_L11;
  outC->_L2.q_media = outC->_L10;
  outC->_L2.n_total = outC->_L8;
  outC->_L2.m_mcount = outC->_L6;
  outC->_L2.nid_c = outC->_L5;
  outC->_L2.nid_bg = outC->_L4;
  outC->_L2.q_link = outC->_L3;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L2.bgPosition, &outC->_L21);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L2.BG_centerDetectionInaccuraccuracies,
    &outC->_L20);
  outC->_L2.q_nvlocacc = outC->_L23;
  outC->_L2.noCoordinateSystemHasBeenAssigned = outC->_L22;
  outC->_L2.trainOrientationToBG = outC->_L25;
  outC->_L2.trainRunningDirectionToBG = outC->_L26;
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->bgHeader, &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void bildBGHeader_init_CheckBGConsistency_Pkg_SubFunction(
  outC_bildBGHeader_CheckBGConsistency_Pkg_SubFunction *outC)
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

  outC->_L28.valid = kcg_true;
  outC->_L28.systemTime = kcg_lit_int32(0);
  outC->_L28.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L28.telegramHeaders.present = kcg_true;
  for (idx2 = 0; idx2 < 8; idx2++) {
    outC->_L28.telegramHeaders.Telegrams[idx2].valid = kcg_true;
    outC->_L28.telegramHeaders.Telegrams[idx2].checkResult = kcg_true;
    outC->_L28.telegramHeaders.Telegrams[idx2].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L28.telegramHeaders.Telegrams[idx2].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L28.telegramHeaders.Telegrams[idx2].telegramheader.q_media =
      Q_MEDIA_Balise;
    outC->_L28.telegramHeaders.Telegrams[idx2].telegramheader.n_pig =
      N_PIG_I_am_the_1st;
    outC->_L28.telegramHeaders.Telegrams[idx2].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L28.telegramHeaders.Telegrams[idx2].telegramheader.m_dup =
      M_DUP_No_duplicates;
    outC->_L28.telegramHeaders.Telegrams[idx2].telegramheader.m_mcount =
      kcg_lit_int32(0);
    outC->_L28.telegramHeaders.Telegrams[idx2].telegramheader.nid_c =
      kcg_lit_int32(0);
    outC->_L28.telegramHeaders.Telegrams[idx2].telegramheader.nid_bg =
      kcg_lit_int32(0);
    outC->_L28.telegramHeaders.Telegrams[idx2].telegramheader.q_link =
      Q_LINK_Unlinked;
    for (idx = 0; idx < 30; idx++) {
      outC->_L28.telegramHeaders.Telegrams[idx2].packets.PacketHeaders[idx].nid_packet =
        kcg_lit_int32(0);
      outC->_L28.telegramHeaders.Telegrams[idx2].packets.PacketHeaders[idx].q_dir =
        Q_DIR_Reverse;
      outC->_L28.telegramHeaders.Telegrams[idx2].packets.PacketHeaders[idx].valid =
        kcg_true;
      outC->_L28.telegramHeaders.Telegrams[idx2].packets.PacketHeaders[idx].startAddress =
        kcg_lit_int32(0);
      outC->_L28.telegramHeaders.Telegrams[idx2].packets.PacketHeaders[idx].endAddress =
        kcg_lit_int32(0);
    }
    for (idx1 = 0; idx1 < 500; idx1++) {
      outC->_L28.telegramHeaders.Telegrams[idx2].packets.PacketData[idx1] =
        kcg_lit_int32(0);
    }
  }
  outC->_L28.telegramHeaders.numberBalises = kcg_lit_int32(0);
  outC->_L28.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L28.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->_L28.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L28.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->_L28.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->_L28.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L28.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L28.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L28.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L28.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L28.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L28.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L28.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L28.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L28.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L28.radio_Msg.present = kcg_true;
  outC->_L28.radio_Msg.consistencyError = kcg_true;
  outC->_L28.radio_Msg.header.radioDevice = kcg_lit_int32(0);
  outC->_L28.radio_Msg.header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L28.radio_Msg.header.nid_message = kcg_lit_int32(0);
  outC->_L28.radio_Msg.header.t_train = kcg_lit_int32(0);
  outC->_L28.radio_Msg.header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L28.radio_Msg.header.nid_lrbg = kcg_lit_int32(0);
  outC->_L28.radio_Msg.header.t_train_reference = kcg_lit_int32(0);
  outC->_L28.radio_Msg.header.nid_em = kcg_lit_int32(0);
  outC->_L28.radio_Msg.header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L28.radio_Msg.header.d_sr = kcg_lit_int32(0);
  outC->_L28.radio_Msg.header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L28.radio_Msg.header.d_ref = kcg_lit_int32(0);
  outC->_L28.radio_Msg.header.q_dir = Q_DIR_Reverse;
  outC->_L28.radio_Msg.header.d_emergencystop = kcg_lit_int32(0);
  outC->_L28.radio_Msg.header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L28.radio_Msg.radioMetadata.t_train_reference = kcg_true;
  outC->_L28.radio_Msg.radioMetadata.nid_em = kcg_true;
  outC->_L28.radio_Msg.radioMetadata.q_scale = kcg_true;
  outC->_L28.radio_Msg.radioMetadata.d_sr = kcg_true;
  outC->_L28.radio_Msg.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L28.radio_Msg.radioMetadata.d_ref = kcg_true;
  outC->_L28.radio_Msg.radioMetadata.q_dir = kcg_true;
  outC->_L28.radio_Msg.radioMetadata.d_emergencystop = kcg_true;
  outC->_L28.radio_Msg.radioMetadata.m_version = kcg_true;
  for (idx3 = 0; idx3 < 30; idx3++) {
    outC->_L28.radio_Msg.packets.PacketHeaders[idx3].nid_packet = kcg_lit_int32(0);
    outC->_L28.radio_Msg.packets.PacketHeaders[idx3].q_dir = Q_DIR_Reverse;
    outC->_L28.radio_Msg.packets.PacketHeaders[idx3].valid = kcg_true;
    outC->_L28.radio_Msg.packets.PacketHeaders[idx3].startAddress =
      kcg_lit_int32(0);
    outC->_L28.radio_Msg.packets.PacketHeaders[idx3].endAddress = kcg_lit_int32(0);
  }
  for (idx4 = 0; idx4 < 500; idx4++) {
    outC->_L28.radio_Msg.packets.PacketData[idx4] = kcg_lit_int32(0);
  }
  outC->_L28.radio_Msg.sendingRBC.valid = kcg_true;
  outC->_L28.radio_Msg.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L28.radio_Msg.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L28.radio_Msg.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L27.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L27.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L27.q_media = Q_MEDIA_Balise;
  outC->_L27.n_pig = N_PIG_I_am_the_1st;
  outC->_L27.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L27.m_dup = M_DUP_No_duplicates;
  outC->_L27.m_mcount = kcg_lit_int32(0);
  outC->_L27.nid_c = kcg_lit_int32(0);
  outC->_L27.nid_bg = kcg_lit_int32(0);
  outC->_L27.q_link = Q_LINK_Unlinked;
  outC->_L26 = Q_DIRTRAIN_Reverse;
  outC->_L25 = Q_DIRLRBG_Reverse;
  outC->_L23 = kcg_lit_int32(0);
  outC->_L22 = kcg_true;
  outC->_L21.valid = kcg_true;
  outC->_L21.timestamp = kcg_lit_int32(0);
  outC->_L21.odo.o_nominal = kcg_lit_int32(0);
  outC->_L21.odo.o_min = kcg_lit_int32(0);
  outC->_L21.odo.o_max = kcg_lit_int32(0);
  outC->_L21.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L21.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L21.speed.v_lower = kcg_lit_int32(0);
  outC->_L21.speed.v_upper = kcg_lit_int32(0);
  outC->_L21.acceleration = kcg_lit_int32(0);
  outC->_L21.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L21.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L20.nominal = kcg_lit_int32(0);
  outC->_L20.d_min = kcg_lit_int32(0);
  outC->_L20.d_max = kcg_lit_int32(0);
  outC->_L15.present = kcg_true;
  outC->_L15.consistencyError = kcg_true;
  outC->_L15.header.radioDevice = kcg_lit_int32(0);
  outC->_L15.header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L15.header.nid_message = kcg_lit_int32(0);
  outC->_L15.header.t_train = kcg_lit_int32(0);
  outC->_L15.header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L15.header.nid_lrbg = kcg_lit_int32(0);
  outC->_L15.header.t_train_reference = kcg_lit_int32(0);
  outC->_L15.header.nid_em = kcg_lit_int32(0);
  outC->_L15.header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L15.header.d_sr = kcg_lit_int32(0);
  outC->_L15.header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L15.header.d_ref = kcg_lit_int32(0);
  outC->_L15.header.q_dir = Q_DIR_Reverse;
  outC->_L15.header.d_emergencystop = kcg_lit_int32(0);
  outC->_L15.header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L15.radioMetadata.t_train_reference = kcg_true;
  outC->_L15.radioMetadata.nid_em = kcg_true;
  outC->_L15.radioMetadata.q_scale = kcg_true;
  outC->_L15.radioMetadata.d_sr = kcg_true;
  outC->_L15.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L15.radioMetadata.d_ref = kcg_true;
  outC->_L15.radioMetadata.q_dir = kcg_true;
  outC->_L15.radioMetadata.d_emergencystop = kcg_true;
  outC->_L15.radioMetadata.m_version = kcg_true;
  for (idx5 = 0; idx5 < 30; idx5++) {
    outC->_L15.packets.PacketHeaders[idx5].nid_packet = kcg_lit_int32(0);
    outC->_L15.packets.PacketHeaders[idx5].q_dir = Q_DIR_Reverse;
    outC->_L15.packets.PacketHeaders[idx5].valid = kcg_true;
    outC->_L15.packets.PacketHeaders[idx5].startAddress = kcg_lit_int32(0);
    outC->_L15.packets.PacketHeaders[idx5].endAddress = kcg_lit_int32(0);
  }
  for (idx6 = 0; idx6 < 500; idx6++) {
    outC->_L15.packets.PacketData[idx6] = kcg_lit_int32(0);
  }
  outC->_L15.sendingRBC.valid = kcg_true;
  outC->_L15.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L15.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L15.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L16.present = kcg_true;
  for (idx9 = 0; idx9 < 8; idx9++) {
    outC->_L16.Telegrams[idx9].valid = kcg_true;
    outC->_L16.Telegrams[idx9].checkResult = kcg_true;
    outC->_L16.Telegrams[idx9].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L16.Telegrams[idx9].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L16.Telegrams[idx9].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L16.Telegrams[idx9].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L16.Telegrams[idx9].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L16.Telegrams[idx9].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->_L16.Telegrams[idx9].telegramheader.m_mcount = kcg_lit_int32(0);
    outC->_L16.Telegrams[idx9].telegramheader.nid_c = kcg_lit_int32(0);
    outC->_L16.Telegrams[idx9].telegramheader.nid_bg = kcg_lit_int32(0);
    outC->_L16.Telegrams[idx9].telegramheader.q_link = Q_LINK_Unlinked;
    for (idx7 = 0; idx7 < 30; idx7++) {
      outC->_L16.Telegrams[idx9].packets.PacketHeaders[idx7].nid_packet =
        kcg_lit_int32(0);
      outC->_L16.Telegrams[idx9].packets.PacketHeaders[idx7].q_dir = Q_DIR_Reverse;
      outC->_L16.Telegrams[idx9].packets.PacketHeaders[idx7].valid = kcg_true;
      outC->_L16.Telegrams[idx9].packets.PacketHeaders[idx7].startAddress =
        kcg_lit_int32(0);
      outC->_L16.Telegrams[idx9].packets.PacketHeaders[idx7].endAddress =
        kcg_lit_int32(0);
    }
    for (idx8 = 0; idx8 < 500; idx8++) {
      outC->_L16.Telegrams[idx9].packets.PacketData[idx8] = kcg_lit_int32(0);
    }
  }
  outC->_L16.numberBalises = kcg_lit_int32(0);
  outC->_L16.centerOfBalisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L16.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->_L16.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L16.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->_L16.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->_L16.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L16.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L16.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L16.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L16.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L16.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L16.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L16.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L16.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L16.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L17 = msrc_undefined_Common_Types_Pkg;
  outC->_L18 = kcg_lit_int32(0);
  outC->_L19 = kcg_true;
  outC->_L3 = Q_LINK_Unlinked;
  outC->_L4 = kcg_lit_int32(0);
  outC->_L5 = kcg_lit_int32(0);
  outC->_L6 = kcg_lit_int32(0);
  outC->_L7 = M_DUP_No_duplicates;
  outC->_L8 = N_TOTAL_1_balise_in_the_group;
  outC->_L9 = N_PIG_I_am_the_1st;
  outC->_L10 = Q_MEDIA_Balise;
  outC->_L11 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L12 = Q_UPDOWN_Down_link_telegram;
  outC->_L2.valid = kcg_true;
  outC->_L2.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L2.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2.q_media = Q_MEDIA_Balise;
  outC->_L2.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L2.m_mcount = kcg_lit_int32(0);
  outC->_L2.nid_c = kcg_lit_int32(0);
  outC->_L2.nid_bg = kcg_lit_int32(0);
  outC->_L2.q_link = Q_LINK_Unlinked;
  outC->_L2.bgPosition.valid = kcg_true;
  outC->_L2.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L2.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L2.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L2.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L2.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L2.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L2.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L2.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L2.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L2.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L2.bgPosition.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L2.BG_centerDetectionInaccuraccuracies.nominal = kcg_lit_int32(0);
  outC->_L2.BG_centerDetectionInaccuraccuracies.d_min = kcg_lit_int32(0);
  outC->_L2.BG_centerDetectionInaccuraccuracies.d_max = kcg_lit_int32(0);
  outC->_L2.q_nvlocacc = kcg_lit_int32(0);
  outC->_L2.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L2.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L2.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->bgHeader.valid = kcg_true;
  outC->bgHeader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->bgHeader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->bgHeader.q_media = Q_MEDIA_Balise;
  outC->bgHeader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->bgHeader.m_mcount = kcg_lit_int32(0);
  outC->bgHeader.nid_c = kcg_lit_int32(0);
  outC->bgHeader.nid_bg = kcg_lit_int32(0);
  outC->bgHeader.q_link = Q_LINK_Unlinked;
  outC->bgHeader.bgPosition.valid = kcg_true;
  outC->bgHeader.bgPosition.timestamp = kcg_lit_int32(0);
  outC->bgHeader.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->bgHeader.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->bgHeader.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->bgHeader.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->bgHeader.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->bgHeader.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->bgHeader.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->bgHeader.bgPosition.acceleration = kcg_lit_int32(0);
  outC->bgHeader.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->bgHeader.bgPosition.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->bgHeader.BG_centerDetectionInaccuraccuracies.nominal = kcg_lit_int32(0);
  outC->bgHeader.BG_centerDetectionInaccuraccuracies.d_min = kcg_lit_int32(0);
  outC->bgHeader.BG_centerDetectionInaccuraccuracies.d_max = kcg_lit_int32(0);
  outC->bgHeader.q_nvlocacc = kcg_lit_int32(0);
  outC->bgHeader.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->bgHeader.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->bgHeader.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void bildBGHeader_reset_CheckBGConsistency_Pkg_SubFunction(
  outC_bildBGHeader_CheckBGConsistency_Pkg_SubFunction *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** bildBGHeader_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

