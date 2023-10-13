/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg.h"

/* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram/ */
void manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg(
  /* inDecodedTelegram/ */
  Telegram_T_BG_Types_Pkg *inDecodedTelegram,
  /* incenterOfBalisePosition/ */
  centerOfBalisePosition_T_BG_Types_Pkg *incenterOfBalisePosition,
  /* inTelegramStore/ */
  TelegramStore_T_Receive_TrackSide_Msg_Pkg *inTelegramStore,
  /* inputTelegramPresent/ */
  kcg_bool inputTelegramPresent,
  outC_manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg *outC)
{
  outC->_L55 = inputTelegramPresent;
  kcg_copy_TelegramStore_T_Receive_TrackSide_Msg_Pkg(
    &outC->_L46,
    inTelegramStore);
  outC->_L17 = outC->_L46.valid;
  outC->storeValid = outC->_L17;
  outC->_L28 = outC->storeValid;
  outC->_L27 = outC->_L55 | outC->_L28;
  outC->outputPresent = outC->_L27;
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L9,
    incenterOfBalisePosition);
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L19,
    &outC->_L46.position);
  outC->_L22 = outC->storeValid;
  /* _L21= */
  if (outC->_L22) {
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(&outC->_L21, &outC->_L19);
  }
  else {
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(&outC->_L21, &outC->_L9);
  }
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->outcenterOfBalisePosition,
    &outC->_L21);
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L18, &outC->_L46.telegram);
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L7, inDecodedTelegram);
  outC->_L26 = outC->storeValid;
  /* _L20= */
  if (outC->_L26) {
    kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L20, &outC->_L18);
  }
  else {
    kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L20, &outC->_L7);
  }
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->outDecodedTelegram, &outC->_L20);
  outC->_L51 = outC->storeValid;
  outC->_L52 = outC->_L51 & outC->_L55;
  outC->outNeedStore = outC->_L52;
}

#ifndef KCG_USER_DEFINED_INIT
void manageAdditionalTelegram_init_Receive_TrackSide_Msg_Pkg(
  outC_manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg *outC)
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

  outC->_L55 = kcg_true;
  outC->_L27 = kcg_true;
  outC->_L28 = kcg_true;
  outC->_L9.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L9.odometerOfBaliseDetection.timestamp = kcg_lit_int64(0);
  outC->_L9.odometerOfBaliseDetection.odo.o_nominal = kcg_lit_int64(0);
  outC->_L9.odometerOfBaliseDetection.odo.o_min = kcg_lit_int64(0);
  outC->_L9.odometerOfBaliseDetection.odo.o_max = kcg_lit_int64(0);
  outC->_L9.odometerOfBaliseDetection.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L9.odometerOfBaliseDetection.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L9.odometerOfBaliseDetection.speed.v_lower = kcg_lit_int64(0);
  outC->_L9.odometerOfBaliseDetection.speed.v_upper = kcg_lit_int64(0);
  outC->_L9.odometerOfBaliseDetection.acceleration = kcg_lit_int64(0);
  outC->_L9.odometerOfBaliseDetection.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L9.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L9.BG_centerDetectionInaccuraccuracies.nominal = kcg_lit_int64(0);
  outC->_L9.BG_centerDetectionInaccuraccuracies.d_min = kcg_lit_int64(0);
  outC->_L9.BG_centerDetectionInaccuraccuracies.d_max = kcg_lit_int64(0);
  outC->_L17 = kcg_true;
  outC->_L18.valid = kcg_true;
  outC->_L18.checkResult = kcg_true;
  outC->_L18.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L18.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L18.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L18.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L18.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L18.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L18.telegramheader.m_mcount = kcg_lit_int64(0);
  outC->_L18.telegramheader.nid_c = kcg_lit_int64(0);
  outC->_L18.telegramheader.nid_bg = kcg_lit_int64(0);
  outC->_L18.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx = 0; idx < 30; idx++) {
    outC->_L18.packets.PacketHeaders[idx].nid_packet = kcg_lit_int64(0);
    outC->_L18.packets.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L18.packets.PacketHeaders[idx].valid = kcg_true;
    outC->_L18.packets.PacketHeaders[idx].startAddress = kcg_lit_int64(0);
    outC->_L18.packets.PacketHeaders[idx].endAddress = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L18.packets.PacketData[idx1] = kcg_lit_int64(0);
  }
  outC->_L19.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L19.odometerOfBaliseDetection.timestamp = kcg_lit_int64(0);
  outC->_L19.odometerOfBaliseDetection.odo.o_nominal = kcg_lit_int64(0);
  outC->_L19.odometerOfBaliseDetection.odo.o_min = kcg_lit_int64(0);
  outC->_L19.odometerOfBaliseDetection.odo.o_max = kcg_lit_int64(0);
  outC->_L19.odometerOfBaliseDetection.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L19.odometerOfBaliseDetection.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L19.odometerOfBaliseDetection.speed.v_lower = kcg_lit_int64(0);
  outC->_L19.odometerOfBaliseDetection.speed.v_upper = kcg_lit_int64(0);
  outC->_L19.odometerOfBaliseDetection.acceleration = kcg_lit_int64(0);
  outC->_L19.odometerOfBaliseDetection.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L19.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L19.BG_centerDetectionInaccuraccuracies.nominal = kcg_lit_int64(0);
  outC->_L19.BG_centerDetectionInaccuraccuracies.d_min = kcg_lit_int64(0);
  outC->_L19.BG_centerDetectionInaccuraccuracies.d_max = kcg_lit_int64(0);
  outC->_L46.valid = kcg_true;
  outC->_L46.telegram.valid = kcg_true;
  outC->_L46.telegram.checkResult = kcg_true;
  outC->_L46.telegram.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L46.telegram.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L46.telegram.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L46.telegram.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L46.telegram.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L46.telegram.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L46.telegram.telegramheader.m_mcount = kcg_lit_int64(0);
  outC->_L46.telegram.telegramheader.nid_c = kcg_lit_int64(0);
  outC->_L46.telegram.telegramheader.nid_bg = kcg_lit_int64(0);
  outC->_L46.telegram.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L46.telegram.packets.PacketHeaders[idx2].nid_packet = kcg_lit_int64(0);
    outC->_L46.telegram.packets.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L46.telegram.packets.PacketHeaders[idx2].valid = kcg_true;
    outC->_L46.telegram.packets.PacketHeaders[idx2].startAddress = kcg_lit_int64(0);
    outC->_L46.telegram.packets.PacketHeaders[idx2].endAddress = kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L46.telegram.packets.PacketData[idx3] = kcg_lit_int64(0);
  }
  outC->_L46.position.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L46.position.odometerOfBaliseDetection.timestamp = kcg_lit_int64(0);
  outC->_L46.position.odometerOfBaliseDetection.odo.o_nominal = kcg_lit_int64(0);
  outC->_L46.position.odometerOfBaliseDetection.odo.o_min = kcg_lit_int64(0);
  outC->_L46.position.odometerOfBaliseDetection.odo.o_max = kcg_lit_int64(0);
  outC->_L46.position.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L46.position.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L46.position.odometerOfBaliseDetection.speed.v_lower = kcg_lit_int64(0);
  outC->_L46.position.odometerOfBaliseDetection.speed.v_upper = kcg_lit_int64(0);
  outC->_L46.position.odometerOfBaliseDetection.acceleration = kcg_lit_int64(0);
  outC->_L46.position.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L46.position.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L46.position.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L46.position.BG_centerDetectionInaccuraccuracies.d_min = kcg_lit_int64(
      0);
  outC->_L46.position.BG_centerDetectionInaccuraccuracies.d_max = kcg_lit_int64(
      0);
  outC->_L22 = kcg_true;
  outC->_L20.valid = kcg_true;
  outC->_L20.checkResult = kcg_true;
  outC->_L20.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L20.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L20.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L20.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L20.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L20.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L20.telegramheader.m_mcount = kcg_lit_int64(0);
  outC->_L20.telegramheader.nid_c = kcg_lit_int64(0);
  outC->_L20.telegramheader.nid_bg = kcg_lit_int64(0);
  outC->_L20.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L20.packets.PacketHeaders[idx4].nid_packet = kcg_lit_int64(0);
    outC->_L20.packets.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->_L20.packets.PacketHeaders[idx4].valid = kcg_true;
    outC->_L20.packets.PacketHeaders[idx4].startAddress = kcg_lit_int64(0);
    outC->_L20.packets.PacketHeaders[idx4].endAddress = kcg_lit_int64(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L20.packets.PacketData[idx5] = kcg_lit_int64(0);
  }
  outC->_L26 = kcg_true;
  outC->_L7.valid = kcg_true;
  outC->_L7.checkResult = kcg_true;
  outC->_L7.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L7.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L7.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L7.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L7.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L7.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L7.telegramheader.m_mcount = kcg_lit_int64(0);
  outC->_L7.telegramheader.nid_c = kcg_lit_int64(0);
  outC->_L7.telegramheader.nid_bg = kcg_lit_int64(0);
  outC->_L7.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx6 = 0; idx6 < 30; idx6++) {
    outC->_L7.packets.PacketHeaders[idx6].nid_packet = kcg_lit_int64(0);
    outC->_L7.packets.PacketHeaders[idx6].q_dir = Q_DIR_Reverse;
    outC->_L7.packets.PacketHeaders[idx6].valid = kcg_true;
    outC->_L7.packets.PacketHeaders[idx6].startAddress = kcg_lit_int64(0);
    outC->_L7.packets.PacketHeaders[idx6].endAddress = kcg_lit_int64(0);
  }
  for (idx7 = 0; idx7 < 500; idx7++) {
    outC->_L7.packets.PacketData[idx7] = kcg_lit_int64(0);
  }
  outC->_L21.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L21.odometerOfBaliseDetection.timestamp = kcg_lit_int64(0);
  outC->_L21.odometerOfBaliseDetection.odo.o_nominal = kcg_lit_int64(0);
  outC->_L21.odometerOfBaliseDetection.odo.o_min = kcg_lit_int64(0);
  outC->_L21.odometerOfBaliseDetection.odo.o_max = kcg_lit_int64(0);
  outC->_L21.odometerOfBaliseDetection.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L21.odometerOfBaliseDetection.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L21.odometerOfBaliseDetection.speed.v_lower = kcg_lit_int64(0);
  outC->_L21.odometerOfBaliseDetection.speed.v_upper = kcg_lit_int64(0);
  outC->_L21.odometerOfBaliseDetection.acceleration = kcg_lit_int64(0);
  outC->_L21.odometerOfBaliseDetection.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L21.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L21.BG_centerDetectionInaccuraccuracies.nominal = kcg_lit_int64(0);
  outC->_L21.BG_centerDetectionInaccuraccuracies.d_min = kcg_lit_int64(0);
  outC->_L21.BG_centerDetectionInaccuraccuracies.d_max = kcg_lit_int64(0);
  outC->_L51 = kcg_true;
  outC->_L52 = kcg_true;
  outC->storeValid = kcg_true;
  outC->outNeedStore = kcg_true;
  outC->outcenterOfBalisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->outcenterOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->outcenterOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->outcenterOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->outcenterOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->outcenterOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->outcenterOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->outcenterOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->outcenterOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->outcenterOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->outcenterOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->outcenterOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->outcenterOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->outcenterOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->outcenterOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->outDecodedTelegram.valid = kcg_true;
  outC->outDecodedTelegram.checkResult = kcg_true;
  outC->outDecodedTelegram.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->outDecodedTelegram.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->outDecodedTelegram.telegramheader.q_media = Q_MEDIA_Balise;
  outC->outDecodedTelegram.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->outDecodedTelegram.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->outDecodedTelegram.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->outDecodedTelegram.telegramheader.m_mcount = kcg_lit_int64(0);
  outC->outDecodedTelegram.telegramheader.nid_c = kcg_lit_int64(0);
  outC->outDecodedTelegram.telegramheader.nid_bg = kcg_lit_int64(0);
  outC->outDecodedTelegram.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx8 = 0; idx8 < 30; idx8++) {
    outC->outDecodedTelegram.packets.PacketHeaders[idx8].nid_packet =
      kcg_lit_int64(0);
    outC->outDecodedTelegram.packets.PacketHeaders[idx8].q_dir = Q_DIR_Reverse;
    outC->outDecodedTelegram.packets.PacketHeaders[idx8].valid = kcg_true;
    outC->outDecodedTelegram.packets.PacketHeaders[idx8].startAddress =
      kcg_lit_int64(0);
    outC->outDecodedTelegram.packets.PacketHeaders[idx8].endAddress =
      kcg_lit_int64(0);
  }
  for (idx9 = 0; idx9 < 500; idx9++) {
    outC->outDecodedTelegram.packets.PacketData[idx9] = kcg_lit_int64(0);
  }
  outC->outputPresent = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void manageAdditionalTelegram_reset_Receive_TrackSide_Msg_Pkg(
  outC_manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

