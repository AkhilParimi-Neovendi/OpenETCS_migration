/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "checkTelegram_Receive_TrackSide_Msg_Pkg.h"

/* Receive_TrackSide_Msg_Pkg::checkTelegram/ */
void checkTelegram_Receive_TrackSide_Msg_Pkg(
  /* newTelegram/ */
  Telegram_T_BG_Types_Pkg *newTelegram,
  /* inTelegramArray/ */
  TelegramArray_T_BG_Types_Pkg *inTelegramArray,
  /* BGCollector/ */
  BGCollector_T_Receive_TrackSide_Msg_Pkg *BGCollector,
  outC_checkTelegram_Receive_TrackSide_Msg_Pkg *outC)
{
  kcg_copy_TelegramArray_T_BG_Types_Pkg(
    &outC->_L94,
    (TelegramArray_T_BG_Types_Pkg *) &cEmptyTelegramArray_BG_Types_Pkg);
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L2, newTelegram);
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(&outC->_L74, BGCollector);
  /* _L92=(Receive_TrackSide_Msg_Pkg::BaliseSupport::initCollector#1)/ */
  initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport(
    &outC->_L2,
    &outC->Context_initCollector_1);
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
    &outC->_L92,
    &outC->Context_initCollector_1.outCollector);
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(&outC->_L56, BGCollector);
  outC->_L67 = outC->_L56.BGMessageSent;
  outC->_L66 = kcg_lit_int32(0);
  outC->_L64 = outC->_L56.totalTelegrams;
  outC->_L65 = outC->_L64 > outC->_L66;
  outC->_L61 = outC->_L56.BG_ID;
  outC->_L32 = outC->_L2.telegramheader.nid_bg;
  outC->_L36 = outC->_L32 == outC->_L61;
  outC->_L62 = !outC->_L36;
  outC->_L63 = outC->_L62 & outC->_L65;
  outC->_L68 = outC->_L63 & outC->_L67;
  outC->newBGInitNeeded = outC->_L68;
  outC->_L73 = outC->newBGInitNeeded;
  /* _L72= */
  if (outC->_L73) {
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(&outC->_L72, &outC->_L92);
  }
  else {
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(&outC->_L72, &outC->_L74);
  }
  /* _L93=(Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB#1)/ */
  checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport(
    &outC->_L2,
    &outC->_L72,
    &outC->Context_checkSingleBB_1);
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
    &outC->_L93,
    &outC->Context_checkSingleBB_1.outCollector);
  outC->_L87 = !outC->_L67;
  outC->_L88 = outC->_L63 & outC->_L87;
  kcg_copy_TelegramArray_T_BG_Types_Pkg(&outC->_L40, inTelegramArray);
  outC->_L70 = outC->newBGInitNeeded;
  /* _L69= */
  if (outC->_L70) {
    kcg_copy_TelegramArray_T_BG_Types_Pkg(&outC->_L69, &outC->_L94);
  }
  else {
    kcg_copy_TelegramArray_T_BG_Types_Pkg(&outC->_L69, &outC->_L40);
  }
  kcg_copy_TelegramArray_T_BG_Types_Pkg(&outC->outTelegramArray, &outC->_L69);
  outC->_L55 = outC->_L2.telegramheader.n_pig;
  outC->_L4 = outC->_L2.valid;
  outC->_L31 = outC->_L4 & outC->_L36;
  /* _L41=(Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram#1)/ */
  findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport(
    outC->_L55,
    &outC->_L69,
    outC->_L31,
    &outC->Context_findTelegram_1);
  outC->_L41 = outC->Context_findTelegram_1.telegramAlreadyInGroup;
  outC->_L86 = !outC->_L41;
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
    &outC->outCollector,
    &outC->_L93);
  outC->outBGchangedEarly = outC->_L88;
  outC->outTelegramNotInGroup = outC->_L86;
}

#ifndef KCG_USER_DEFINED_INIT
void checkTelegram_init_Receive_TrackSide_Msg_Pkg(
  outC_checkTelegram_Receive_TrackSide_Msg_Pkg *outC)
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

  for (idx2 = 0; idx2 < 8; idx2++) {
    outC->_L94[idx2].valid = kcg_true;
    outC->_L94[idx2].checkResult = kcg_true;
    outC->_L94[idx2].telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
    outC->_L94[idx2].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L94[idx2].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L94[idx2].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L94[idx2].telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
    outC->_L94[idx2].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->_L94[idx2].telegramheader.m_mcount = kcg_lit_int32(0);
    outC->_L94[idx2].telegramheader.nid_c = kcg_lit_int32(0);
    outC->_L94[idx2].telegramheader.nid_bg = kcg_lit_int32(0);
    outC->_L94[idx2].telegramheader.q_link = Q_LINK_Unlinked;
    for (idx = 0; idx < 30; idx++) {
      outC->_L94[idx2].packets.PacketHeaders[idx].nid_packet = kcg_lit_int32(0);
      outC->_L94[idx2].packets.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
      outC->_L94[idx2].packets.PacketHeaders[idx].valid = kcg_true;
      outC->_L94[idx2].packets.PacketHeaders[idx].startAddress = kcg_lit_int32(0);
      outC->_L94[idx2].packets.PacketHeaders[idx].endAddress = kcg_lit_int32(0);
    }
    for (idx1 = 0; idx1 < 500; idx1++) {
      outC->_L94[idx2].packets.PacketData[idx1] = kcg_lit_int32(0);
    }
  }
  outC->_L93.badBaliseFlag = kcg_true;
  outC->_L93.BGMessageSent = kcg_true;
  outC->_L93.C_ID = kcg_lit_int32(0);
  outC->_L93.BG_ID = kcg_lit_int32(0);
  outC->_L93.balisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L93.balisePosition.odometerOfBaliseDetection.timestamp = kcg_lit_int32(
      0);
  outC->_L93.balisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L93.balisePosition.odometerOfBaliseDetection.odo.o_min = kcg_lit_int32(
      0);
  outC->_L93.balisePosition.odometerOfBaliseDetection.odo.o_max = kcg_lit_int32(
      0);
  outC->_L93.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L93.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L93.balisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L93.balisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L93.balisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L93.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L93.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L93.balisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L93.balisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L93.balisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L93.positionFirstContact.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L93.positionFirstContact.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->_L93.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L93.positionFirstContact.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->_L93.positionFirstContact.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->_L93.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L93.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L93.positionFirstContact.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L93.positionFirstContact.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L93.positionFirstContact.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L93.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L93.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L93.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L93.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L93.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L93.collectedTelegrams = kcg_lit_int32(0);
  outC->_L93.totalTelegrams = kcg_lit_int32(0);
  outC->_L92.badBaliseFlag = kcg_true;
  outC->_L92.BGMessageSent = kcg_true;
  outC->_L92.C_ID = kcg_lit_int32(0);
  outC->_L92.BG_ID = kcg_lit_int32(0);
  outC->_L92.balisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L92.balisePosition.odometerOfBaliseDetection.timestamp = kcg_lit_int32(
      0);
  outC->_L92.balisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L92.balisePosition.odometerOfBaliseDetection.odo.o_min = kcg_lit_int32(
      0);
  outC->_L92.balisePosition.odometerOfBaliseDetection.odo.o_max = kcg_lit_int32(
      0);
  outC->_L92.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L92.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L92.balisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L92.balisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L92.balisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L92.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L92.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L92.balisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L92.balisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L92.balisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L92.positionFirstContact.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L92.positionFirstContact.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->_L92.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L92.positionFirstContact.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->_L92.positionFirstContact.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->_L92.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L92.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L92.positionFirstContact.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L92.positionFirstContact.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L92.positionFirstContact.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L92.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L92.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L92.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L92.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L92.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L92.collectedTelegrams = kcg_lit_int32(0);
  outC->_L92.totalTelegrams = kcg_lit_int32(0);
  outC->_L88 = kcg_true;
  outC->_L87 = kcg_true;
  outC->_L86 = kcg_true;
  outC->_L74.badBaliseFlag = kcg_true;
  outC->_L74.BGMessageSent = kcg_true;
  outC->_L74.C_ID = kcg_lit_int32(0);
  outC->_L74.BG_ID = kcg_lit_int32(0);
  outC->_L74.balisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L74.balisePosition.odometerOfBaliseDetection.timestamp = kcg_lit_int32(
      0);
  outC->_L74.balisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L74.balisePosition.odometerOfBaliseDetection.odo.o_min = kcg_lit_int32(
      0);
  outC->_L74.balisePosition.odometerOfBaliseDetection.odo.o_max = kcg_lit_int32(
      0);
  outC->_L74.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L74.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L74.balisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L74.balisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L74.balisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L74.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L74.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L74.balisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L74.balisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L74.balisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L74.positionFirstContact.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L74.positionFirstContact.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->_L74.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L74.positionFirstContact.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->_L74.positionFirstContact.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->_L74.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L74.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L74.positionFirstContact.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L74.positionFirstContact.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L74.positionFirstContact.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L74.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L74.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L74.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L74.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L74.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L74.collectedTelegrams = kcg_lit_int32(0);
  outC->_L74.totalTelegrams = kcg_lit_int32(0);
  outC->_L72.badBaliseFlag = kcg_true;
  outC->_L72.BGMessageSent = kcg_true;
  outC->_L72.C_ID = kcg_lit_int32(0);
  outC->_L72.BG_ID = kcg_lit_int32(0);
  outC->_L72.balisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L72.balisePosition.odometerOfBaliseDetection.timestamp = kcg_lit_int32(
      0);
  outC->_L72.balisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L72.balisePosition.odometerOfBaliseDetection.odo.o_min = kcg_lit_int32(
      0);
  outC->_L72.balisePosition.odometerOfBaliseDetection.odo.o_max = kcg_lit_int32(
      0);
  outC->_L72.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L72.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L72.balisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L72.balisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L72.balisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L72.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L72.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L72.balisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L72.balisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L72.balisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L72.positionFirstContact.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L72.positionFirstContact.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->_L72.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L72.positionFirstContact.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->_L72.positionFirstContact.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->_L72.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L72.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L72.positionFirstContact.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L72.positionFirstContact.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L72.positionFirstContact.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L72.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L72.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L72.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L72.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L72.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L72.collectedTelegrams = kcg_lit_int32(0);
  outC->_L72.totalTelegrams = kcg_lit_int32(0);
  outC->_L73 = kcg_true;
  outC->_L70 = kcg_true;
  for (idx5 = 0; idx5 < 8; idx5++) {
    outC->_L69[idx5].valid = kcg_true;
    outC->_L69[idx5].checkResult = kcg_true;
    outC->_L69[idx5].telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
    outC->_L69[idx5].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L69[idx5].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L69[idx5].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L69[idx5].telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
    outC->_L69[idx5].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->_L69[idx5].telegramheader.m_mcount = kcg_lit_int32(0);
    outC->_L69[idx5].telegramheader.nid_c = kcg_lit_int32(0);
    outC->_L69[idx5].telegramheader.nid_bg = kcg_lit_int32(0);
    outC->_L69[idx5].telegramheader.q_link = Q_LINK_Unlinked;
    for (idx3 = 0; idx3 < 30; idx3++) {
      outC->_L69[idx5].packets.PacketHeaders[idx3].nid_packet = kcg_lit_int32(0);
      outC->_L69[idx5].packets.PacketHeaders[idx3].q_dir = Q_DIR_Reverse;
      outC->_L69[idx5].packets.PacketHeaders[idx3].valid = kcg_true;
      outC->_L69[idx5].packets.PacketHeaders[idx3].startAddress = kcg_lit_int32(0);
      outC->_L69[idx5].packets.PacketHeaders[idx3].endAddress = kcg_lit_int32(0);
    }
    for (idx4 = 0; idx4 < 500; idx4++) {
      outC->_L69[idx5].packets.PacketData[idx4] = kcg_lit_int32(0);
    }
  }
  outC->_L68 = kcg_true;
  outC->_L67 = kcg_true;
  outC->_L66 = kcg_lit_int32(0);
  outC->_L65 = kcg_true;
  outC->_L64 = kcg_lit_int32(0);
  outC->_L63 = kcg_true;
  outC->_L62 = kcg_true;
  outC->_L61 = kcg_lit_int32(0);
  outC->_L56.badBaliseFlag = kcg_true;
  outC->_L56.BGMessageSent = kcg_true;
  outC->_L56.C_ID = kcg_lit_int32(0);
  outC->_L56.BG_ID = kcg_lit_int32(0);
  outC->_L56.balisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L56.balisePosition.odometerOfBaliseDetection.timestamp = kcg_lit_int32(
      0);
  outC->_L56.balisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L56.balisePosition.odometerOfBaliseDetection.odo.o_min = kcg_lit_int32(
      0);
  outC->_L56.balisePosition.odometerOfBaliseDetection.odo.o_max = kcg_lit_int32(
      0);
  outC->_L56.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L56.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L56.balisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L56.balisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L56.balisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L56.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L56.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L56.balisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L56.balisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L56.balisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L56.positionFirstContact.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L56.positionFirstContact.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->_L56.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L56.positionFirstContact.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->_L56.positionFirstContact.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->_L56.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L56.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L56.positionFirstContact.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L56.positionFirstContact.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L56.positionFirstContact.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L56.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L56.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L56.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L56.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L56.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L56.collectedTelegrams = kcg_lit_int32(0);
  outC->_L56.totalTelegrams = kcg_lit_int32(0);
  outC->_L55 = N_PIG_I_am_the_1st;
  outC->_L41 = kcg_true;
  for (idx8 = 0; idx8 < 8; idx8++) {
    outC->_L40[idx8].valid = kcg_true;
    outC->_L40[idx8].checkResult = kcg_true;
    outC->_L40[idx8].telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
    outC->_L40[idx8].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L40[idx8].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L40[idx8].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L40[idx8].telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
    outC->_L40[idx8].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->_L40[idx8].telegramheader.m_mcount = kcg_lit_int32(0);
    outC->_L40[idx8].telegramheader.nid_c = kcg_lit_int32(0);
    outC->_L40[idx8].telegramheader.nid_bg = kcg_lit_int32(0);
    outC->_L40[idx8].telegramheader.q_link = Q_LINK_Unlinked;
    for (idx6 = 0; idx6 < 30; idx6++) {
      outC->_L40[idx8].packets.PacketHeaders[idx6].nid_packet = kcg_lit_int32(0);
      outC->_L40[idx8].packets.PacketHeaders[idx6].q_dir = Q_DIR_Reverse;
      outC->_L40[idx8].packets.PacketHeaders[idx6].valid = kcg_true;
      outC->_L40[idx8].packets.PacketHeaders[idx6].startAddress = kcg_lit_int32(0);
      outC->_L40[idx8].packets.PacketHeaders[idx6].endAddress = kcg_lit_int32(0);
    }
    for (idx7 = 0; idx7 < 500; idx7++) {
      outC->_L40[idx8].packets.PacketData[idx7] = kcg_lit_int32(0);
    }
  }
  outC->_L36 = kcg_true;
  outC->_L32 = kcg_lit_int32(0);
  outC->_L31 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L2.valid = kcg_true;
  outC->_L2.checkResult = kcg_true;
  outC->_L2.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L2.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L2.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L2.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L2.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L2.telegramheader.m_mcount = kcg_lit_int32(0);
  outC->_L2.telegramheader.nid_c = kcg_lit_int32(0);
  outC->_L2.telegramheader.nid_bg = kcg_lit_int32(0);
  outC->_L2.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx9 = 0; idx9 < 30; idx9++) {
    outC->_L2.packets.PacketHeaders[idx9].nid_packet = kcg_lit_int32(0);
    outC->_L2.packets.PacketHeaders[idx9].q_dir = Q_DIR_Reverse;
    outC->_L2.packets.PacketHeaders[idx9].valid = kcg_true;
    outC->_L2.packets.PacketHeaders[idx9].startAddress = kcg_lit_int32(0);
    outC->_L2.packets.PacketHeaders[idx9].endAddress = kcg_lit_int32(0);
  }
  for (idx10 = 0; idx10 < 500; idx10++) {
    outC->_L2.packets.PacketData[idx10] = kcg_lit_int32(0);
  }
  outC->newBGInitNeeded = kcg_true;
  outC->outBGchangedEarly = kcg_true;
  outC->outTelegramNotInGroup = kcg_true;
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
  /* _L41=(Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram#1)/ */
  findTelegram_init_Receive_TrackSide_Msg_Pkg_BaliseSupport(
    &outC->Context_findTelegram_1);
  /* _L93=(Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB#1)/ */
  checkSingleBB_init_Receive_TrackSide_Msg_Pkg_BaliseSupport(
    &outC->Context_checkSingleBB_1);
  /* _L92=(Receive_TrackSide_Msg_Pkg::BaliseSupport::initCollector#1)/ */
  initCollector_init_Receive_TrackSide_Msg_Pkg_BaliseSupport(
    &outC->Context_initCollector_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void checkTelegram_reset_Receive_TrackSide_Msg_Pkg(
  outC_checkTelegram_Receive_TrackSide_Msg_Pkg *outC)
{
  /* _L41=(Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram#1)/ */
  findTelegram_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
    &outC->Context_findTelegram_1);
  /* _L93=(Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB#1)/ */
  checkSingleBB_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
    &outC->Context_checkSingleBB_1);
  /* _L92=(Receive_TrackSide_Msg_Pkg::BaliseSupport::initCollector#1)/ */
  initCollector_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
    &outC->Context_initCollector_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** checkTelegram_Receive_TrackSide_Msg_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

