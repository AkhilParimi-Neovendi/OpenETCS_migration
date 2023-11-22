/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "manageTelegram_Receive_TrackSide_Msg_Pkg.h"

/* Receive_TrackSide_Msg_Pkg::manageTelegram/ */
void manageTelegram_Receive_TrackSide_Msg_Pkg(
  /* newTelegram/ */
  Telegram_T_BG_Types_Pkg *newTelegram,
  /* incenterOfBalisePosition/ */
  centerOfBalisePosition_T_BG_Types_Pkg *incenterOfBalisePosition,
  /* inCollector/ */
  BGCollector_T_Receive_TrackSide_Msg_Pkg *inCollector,
  /* inoldTelegramArray/ */
  TelegramArray_T_BG_Types_Pkg *inoldTelegramArray,
  outC_manageTelegram_Receive_TrackSide_Msg_Pkg *outC)
{
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L6, newTelegram);
  kcg_copy_TelegramArray_T_BG_Types_Pkg(&outC->_L60, inoldTelegramArray);
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(&outC->_L51, inCollector);
  /* _L66=(Receive_TrackSide_Msg_Pkg::checkInit#1)/ */
  checkInit_Receive_TrackSide_Msg_Pkg(
    &outC->_L6,
    &outC->_L51,
    &outC->Context_checkInit_1);
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
    &outC->_L66,
    &outC->Context_checkInit_1.outCollector);
  /* _L63=(Receive_TrackSide_Msg_Pkg::checkTelegram#1)/ */
  checkTelegram_Receive_TrackSide_Msg_Pkg(
    &outC->_L6,
    &outC->_L60,
    &outC->_L66,
    &outC->Context_checkTelegram_1);
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
    &outC->_L63,
    &outC->Context_checkTelegram_1.outCollector);
  kcg_copy_TelegramArray_T_BG_Types_Pkg(
    &outC->_L64,
    &outC->Context_checkTelegram_1.outTelegramArray);
  outC->_L10 = outC->Context_checkTelegram_1.outTelegramNotInGroup;
  outC->_L11 = outC->Context_checkTelegram_1.outBGchangedEarly;
  outC->isNotReceivedAlready = outC->_L10;
  outC->_L69 = outC->isNotReceivedAlready;
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L47,
    incenterOfBalisePosition);
  /* _L54=(Receive_TrackSide_Msg_Pkg::addTelegram#4)/ */
  addTelegram_Receive_TrackSide_Msg_Pkg(
    &outC->_L6,
    &outC->_L63,
    &outC->_L64,
    outC->_L69,
    &outC->_L47,
    &outC->Context_addTelegram_4);
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
    &outC->_L54,
    &outC->Context_addTelegram_4.outCollector);
  kcg_copy_TelegramArray_T_BG_Types_Pkg(
    &outC->_L58,
    &outC->Context_addTelegram_4.outTelegramArray);
  outC->_L53 = outC->Context_addTelegram_4.outBGisComplete;
  outC->_L67 = outC->Context_addTelegram_4.outIsDuplicate;
  outC->_L73 = !outC->_L67;
  outC->needsReplace = outC->_L73;
  outC->_L72 = outC->needsReplace;
  outC->_L70 = outC->isNotReceivedAlready;
  outC->_L68 = outC->_L70 | outC->_L72;
  outC->_L65 = outC->_L53 | outC->_L11;
  outC->outStoresChanged = outC->_L68;
  kcg_copy_TelegramArray_T_BG_Types_Pkg(&outC->outTelegramArray, &outC->_L58);
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
    &outC->outCollector,
    &outC->_L54);
  outC->outBGisChangedEarly = outC->_L11;
  outC->outBGisComplete = outC->_L65;
}

#ifndef KCG_USER_DEFINED_INIT
void manageTelegram_init_Receive_TrackSide_Msg_Pkg(
  outC_manageTelegram_Receive_TrackSide_Msg_Pkg *outC)
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
  kcg_size idx10;
  kcg_size idx11;
  kcg_size idx12;
  kcg_size idx13;

  outC->_L73 = kcg_true;
  outC->_L72 = kcg_true;
  outC->_L70 = kcg_true;
  outC->_L69 = kcg_true;
  outC->_L68 = kcg_true;
  outC->_L67 = kcg_true;
  outC->_L66.badBaliseFlag = kcg_true;
  outC->_L66.BGMessageSent = kcg_true;
  outC->_L66.C_ID = kcg_lit_int32(0);
  outC->_L66.BG_ID = kcg_lit_int32(0);
  outC->_L66.balisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L66.balisePosition.odometerOfBaliseDetection.timestamp = kcg_lit_int32(
      0);
  outC->_L66.balisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L66.balisePosition.odometerOfBaliseDetection.odo.o_min = kcg_lit_int32(
      0);
  outC->_L66.balisePosition.odometerOfBaliseDetection.odo.o_max = kcg_lit_int32(
      0);
  outC->_L66.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L66.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L66.balisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L66.balisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L66.balisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L66.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L66.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L66.balisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L66.balisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L66.balisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L66.positionFirstContact.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L66.positionFirstContact.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->_L66.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L66.positionFirstContact.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->_L66.positionFirstContact.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->_L66.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L66.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L66.positionFirstContact.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L66.positionFirstContact.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L66.positionFirstContact.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L66.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L66.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L66.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L66.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L66.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L66.collectedTelegrams = kcg_lit_int32(0);
  outC->_L66.totalTelegrams = kcg_lit_int32(0);
  outC->_L65 = kcg_true;
  for (idx2 = 0; idx2 < 8; idx2++) {
    outC->_L64[idx2].valid = kcg_true;
    outC->_L64[idx2].checkResult = kcg_true;
    outC->_L64[idx2].telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
    outC->_L64[idx2].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L64[idx2].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L64[idx2].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L64[idx2].telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
    outC->_L64[idx2].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->_L64[idx2].telegramheader.m_mcount = kcg_lit_int32(0);
    outC->_L64[idx2].telegramheader.nid_c = kcg_lit_int32(0);
    outC->_L64[idx2].telegramheader.nid_bg = kcg_lit_int32(0);
    outC->_L64[idx2].telegramheader.q_link = Q_LINK_Unlinked;
    for (idx = 0; idx < 30; idx++) {
      outC->_L64[idx2].packets.PacketHeaders[idx].nid_packet = kcg_lit_int32(0);
      outC->_L64[idx2].packets.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
      outC->_L64[idx2].packets.PacketHeaders[idx].valid = kcg_true;
      outC->_L64[idx2].packets.PacketHeaders[idx].startAddress = kcg_lit_int32(0);
      outC->_L64[idx2].packets.PacketHeaders[idx].endAddress = kcg_lit_int32(0);
    }
    for (idx1 = 0; idx1 < 500; idx1++) {
      outC->_L64[idx2].packets.PacketData[idx1] = kcg_lit_int32(0);
    }
  }
  outC->_L63.badBaliseFlag = kcg_true;
  outC->_L63.BGMessageSent = kcg_true;
  outC->_L63.C_ID = kcg_lit_int32(0);
  outC->_L63.BG_ID = kcg_lit_int32(0);
  outC->_L63.balisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L63.balisePosition.odometerOfBaliseDetection.timestamp = kcg_lit_int32(
      0);
  outC->_L63.balisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L63.balisePosition.odometerOfBaliseDetection.odo.o_min = kcg_lit_int32(
      0);
  outC->_L63.balisePosition.odometerOfBaliseDetection.odo.o_max = kcg_lit_int32(
      0);
  outC->_L63.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L63.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L63.balisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L63.balisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L63.balisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L63.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L63.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L63.balisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L63.balisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L63.balisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L63.positionFirstContact.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L63.positionFirstContact.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->_L63.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L63.positionFirstContact.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->_L63.positionFirstContact.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->_L63.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L63.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L63.positionFirstContact.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L63.positionFirstContact.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L63.positionFirstContact.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L63.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L63.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L63.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L63.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L63.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L63.collectedTelegrams = kcg_lit_int32(0);
  outC->_L63.totalTelegrams = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 8; idx5++) {
    outC->_L60[idx5].valid = kcg_true;
    outC->_L60[idx5].checkResult = kcg_true;
    outC->_L60[idx5].telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
    outC->_L60[idx5].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L60[idx5].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L60[idx5].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L60[idx5].telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
    outC->_L60[idx5].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->_L60[idx5].telegramheader.m_mcount = kcg_lit_int32(0);
    outC->_L60[idx5].telegramheader.nid_c = kcg_lit_int32(0);
    outC->_L60[idx5].telegramheader.nid_bg = kcg_lit_int32(0);
    outC->_L60[idx5].telegramheader.q_link = Q_LINK_Unlinked;
    for (idx3 = 0; idx3 < 30; idx3++) {
      outC->_L60[idx5].packets.PacketHeaders[idx3].nid_packet = kcg_lit_int32(0);
      outC->_L60[idx5].packets.PacketHeaders[idx3].q_dir = Q_DIR_Reverse;
      outC->_L60[idx5].packets.PacketHeaders[idx3].valid = kcg_true;
      outC->_L60[idx5].packets.PacketHeaders[idx3].startAddress = kcg_lit_int32(0);
      outC->_L60[idx5].packets.PacketHeaders[idx3].endAddress = kcg_lit_int32(0);
    }
    for (idx4 = 0; idx4 < 500; idx4++) {
      outC->_L60[idx5].packets.PacketData[idx4] = kcg_lit_int32(0);
    }
  }
  for (idx8 = 0; idx8 < 8; idx8++) {
    outC->_L58[idx8].valid = kcg_true;
    outC->_L58[idx8].checkResult = kcg_true;
    outC->_L58[idx8].telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
    outC->_L58[idx8].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L58[idx8].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L58[idx8].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L58[idx8].telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
    outC->_L58[idx8].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->_L58[idx8].telegramheader.m_mcount = kcg_lit_int32(0);
    outC->_L58[idx8].telegramheader.nid_c = kcg_lit_int32(0);
    outC->_L58[idx8].telegramheader.nid_bg = kcg_lit_int32(0);
    outC->_L58[idx8].telegramheader.q_link = Q_LINK_Unlinked;
    for (idx6 = 0; idx6 < 30; idx6++) {
      outC->_L58[idx8].packets.PacketHeaders[idx6].nid_packet = kcg_lit_int32(0);
      outC->_L58[idx8].packets.PacketHeaders[idx6].q_dir = Q_DIR_Reverse;
      outC->_L58[idx8].packets.PacketHeaders[idx6].valid = kcg_true;
      outC->_L58[idx8].packets.PacketHeaders[idx6].startAddress = kcg_lit_int32(0);
      outC->_L58[idx8].packets.PacketHeaders[idx6].endAddress = kcg_lit_int32(0);
    }
    for (idx7 = 0; idx7 < 500; idx7++) {
      outC->_L58[idx8].packets.PacketData[idx7] = kcg_lit_int32(0);
    }
  }
  outC->_L53 = kcg_true;
  outC->_L54.badBaliseFlag = kcg_true;
  outC->_L54.BGMessageSent = kcg_true;
  outC->_L54.C_ID = kcg_lit_int32(0);
  outC->_L54.BG_ID = kcg_lit_int32(0);
  outC->_L54.balisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L54.balisePosition.odometerOfBaliseDetection.timestamp = kcg_lit_int32(
      0);
  outC->_L54.balisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L54.balisePosition.odometerOfBaliseDetection.odo.o_min = kcg_lit_int32(
      0);
  outC->_L54.balisePosition.odometerOfBaliseDetection.odo.o_max = kcg_lit_int32(
      0);
  outC->_L54.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L54.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L54.balisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L54.balisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L54.balisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L54.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L54.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L54.balisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L54.balisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L54.balisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L54.positionFirstContact.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L54.positionFirstContact.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->_L54.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L54.positionFirstContact.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->_L54.positionFirstContact.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->_L54.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L54.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L54.positionFirstContact.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L54.positionFirstContact.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L54.positionFirstContact.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L54.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L54.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L54.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L54.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L54.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L54.collectedTelegrams = kcg_lit_int32(0);
  outC->_L54.totalTelegrams = kcg_lit_int32(0);
  outC->_L51.badBaliseFlag = kcg_true;
  outC->_L51.BGMessageSent = kcg_true;
  outC->_L51.C_ID = kcg_lit_int32(0);
  outC->_L51.BG_ID = kcg_lit_int32(0);
  outC->_L51.balisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L51.balisePosition.odometerOfBaliseDetection.timestamp = kcg_lit_int32(
      0);
  outC->_L51.balisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L51.balisePosition.odometerOfBaliseDetection.odo.o_min = kcg_lit_int32(
      0);
  outC->_L51.balisePosition.odometerOfBaliseDetection.odo.o_max = kcg_lit_int32(
      0);
  outC->_L51.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L51.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L51.balisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L51.balisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L51.balisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L51.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L51.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L51.balisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L51.balisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L51.balisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L51.positionFirstContact.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L51.positionFirstContact.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->_L51.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L51.positionFirstContact.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->_L51.positionFirstContact.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->_L51.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L51.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L51.positionFirstContact.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L51.positionFirstContact.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L51.positionFirstContact.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L51.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L51.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L51.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L51.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L51.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L51.collectedTelegrams = kcg_lit_int32(0);
  outC->_L51.totalTelegrams = kcg_lit_int32(0);
  outC->_L47.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L47.odometerOfBaliseDetection.timestamp = kcg_lit_int32(0);
  outC->_L47.odometerOfBaliseDetection.odo.o_nominal = kcg_lit_int32(0);
  outC->_L47.odometerOfBaliseDetection.odo.o_min = kcg_lit_int32(0);
  outC->_L47.odometerOfBaliseDetection.odo.o_max = kcg_lit_int32(0);
  outC->_L47.odometerOfBaliseDetection.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L47.odometerOfBaliseDetection.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L47.odometerOfBaliseDetection.speed.v_lower = kcg_lit_int32(0);
  outC->_L47.odometerOfBaliseDetection.speed.v_upper = kcg_lit_int32(0);
  outC->_L47.odometerOfBaliseDetection.acceleration = kcg_lit_int32(0);
  outC->_L47.odometerOfBaliseDetection.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L47.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L47.BG_centerDetectionInaccuraccuracies.nominal = kcg_lit_int32(0);
  outC->_L47.BG_centerDetectionInaccuraccuracies.d_min = kcg_lit_int32(0);
  outC->_L47.BG_centerDetectionInaccuraccuracies.d_max = kcg_lit_int32(0);
  outC->_L10 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L6.valid = kcg_true;
  outC->_L6.checkResult = kcg_true;
  outC->_L6.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L6.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L6.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L6.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L6.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L6.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L6.telegramheader.m_mcount = kcg_lit_int32(0);
  outC->_L6.telegramheader.nid_c = kcg_lit_int32(0);
  outC->_L6.telegramheader.nid_bg = kcg_lit_int32(0);
  outC->_L6.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx9 = 0; idx9 < 30; idx9++) {
    outC->_L6.packets.PacketHeaders[idx9].nid_packet = kcg_lit_int32(0);
    outC->_L6.packets.PacketHeaders[idx9].q_dir = Q_DIR_Reverse;
    outC->_L6.packets.PacketHeaders[idx9].valid = kcg_true;
    outC->_L6.packets.PacketHeaders[idx9].startAddress = kcg_lit_int32(0);
    outC->_L6.packets.PacketHeaders[idx9].endAddress = kcg_lit_int32(0);
  }
  for (idx10 = 0; idx10 < 500; idx10++) {
    outC->_L6.packets.PacketData[idx10] = kcg_lit_int32(0);
  }
  outC->needsReplace = kcg_true;
  outC->isNotReceivedAlready = kcg_true;
  outC->outStoresChanged = kcg_true;
  for (idx13 = 0; idx13 < 8; idx13++) {
    outC->outTelegramArray[idx13].valid = kcg_true;
    outC->outTelegramArray[idx13].checkResult = kcg_true;
    outC->outTelegramArray[idx13].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->outTelegramArray[idx13].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->outTelegramArray[idx13].telegramheader.q_media = Q_MEDIA_Balise;
    outC->outTelegramArray[idx13].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->outTelegramArray[idx13].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->outTelegramArray[idx13].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->outTelegramArray[idx13].telegramheader.m_mcount = kcg_lit_int32(0);
    outC->outTelegramArray[idx13].telegramheader.nid_c = kcg_lit_int32(0);
    outC->outTelegramArray[idx13].telegramheader.nid_bg = kcg_lit_int32(0);
    outC->outTelegramArray[idx13].telegramheader.q_link = Q_LINK_Unlinked;
    for (idx11 = 0; idx11 < 30; idx11++) {
      outC->outTelegramArray[idx13].packets.PacketHeaders[idx11].nid_packet =
        kcg_lit_int32(0);
      outC->outTelegramArray[idx13].packets.PacketHeaders[idx11].q_dir =
        Q_DIR_Reverse;
      outC->outTelegramArray[idx13].packets.PacketHeaders[idx11].valid = kcg_true;
      outC->outTelegramArray[idx13].packets.PacketHeaders[idx11].startAddress =
        kcg_lit_int32(0);
      outC->outTelegramArray[idx13].packets.PacketHeaders[idx11].endAddress =
        kcg_lit_int32(0);
    }
    for (idx12 = 0; idx12 < 500; idx12++) {
      outC->outTelegramArray[idx13].packets.PacketData[idx12] = kcg_lit_int32(0);
    }
  }
  outC->outCollector.badBaliseFlag = kcg_true;
  outC->outCollector.BGMessageSent = kcg_true;
  outC->outCollector.C_ID = kcg_lit_int32(0);
  outC->outCollector.BG_ID = kcg_lit_int32(0);
  outC->outCollector.balisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->outCollector.balisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->outCollector.balisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->outCollector.balisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->outCollector.balisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->outCollector.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->outCollector.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->outCollector.balisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->outCollector.balisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->outCollector.balisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->outCollector.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->outCollector.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->outCollector.balisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->outCollector.balisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->outCollector.balisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->outCollector.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->outCollector.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->outCollector.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->outCollector.collectedTelegrams = kcg_lit_int32(0);
  outC->outCollector.totalTelegrams = kcg_lit_int32(0);
  outC->outBGisChangedEarly = kcg_true;
  outC->outBGisComplete = kcg_true;
  /* _L54=(Receive_TrackSide_Msg_Pkg::addTelegram#4)/ */
  addTelegram_init_Receive_TrackSide_Msg_Pkg(&outC->Context_addTelegram_4);
  /* _L63=(Receive_TrackSide_Msg_Pkg::checkTelegram#1)/ */
  checkTelegram_init_Receive_TrackSide_Msg_Pkg(&outC->Context_checkTelegram_1);
  /* _L66=(Receive_TrackSide_Msg_Pkg::checkInit#1)/ */
  checkInit_init_Receive_TrackSide_Msg_Pkg(&outC->Context_checkInit_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void manageTelegram_reset_Receive_TrackSide_Msg_Pkg(
  outC_manageTelegram_Receive_TrackSide_Msg_Pkg *outC)
{
  /* _L54=(Receive_TrackSide_Msg_Pkg::addTelegram#4)/ */
  addTelegram_reset_Receive_TrackSide_Msg_Pkg(&outC->Context_addTelegram_4);
  /* _L63=(Receive_TrackSide_Msg_Pkg::checkTelegram#1)/ */
  checkTelegram_reset_Receive_TrackSide_Msg_Pkg(&outC->Context_checkTelegram_1);
  /* _L66=(Receive_TrackSide_Msg_Pkg::checkInit#1)/ */
  checkInit_reset_Receive_TrackSide_Msg_Pkg(&outC->Context_checkInit_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** manageTelegram_Receive_TrackSide_Msg_Pkg.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

