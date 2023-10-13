/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "addTelegram_Receive_TrackSide_Msg_Pkg.h"

/* Receive_TrackSide_Msg_Pkg::addTelegram/ */
void addTelegram_Receive_TrackSide_Msg_Pkg(
  /* newTelegram/ */
  Telegram_T_BG_Types_Pkg *newTelegram,
  /* inCollector/ */
  BGCollector_T_Receive_TrackSide_Msg_Pkg *inCollector,
  /* inoldTelegramArray/ */
  TelegramArray_T_BG_Types_Pkg *inoldTelegramArray,
  /* doUpdate/ */
  kcg_bool doUpdate,
  /* inPosition/ */
  centerOfBalisePosition_T_BG_Types_Pkg *inPosition,
  outC_addTelegram_Receive_TrackSide_Msg_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  /* outCollector/ */
  static BGCollector_T_Receive_TrackSide_Msg_Pkg outCollector_partial;
  /* outTelegramArray/ */
  static TelegramArray_T_BG_Types_Pkg outTelegramArray_partial;
  /* outBGisComplete/ */
  static kcg_bool outBGisComplete_partial;
  /* outIsDuplicate/ */
  static kcg_bool outIsDuplicate_partial;
  static kcg_int64 noname;
  /* outCollector/ */
  static BGCollector_T_Receive_TrackSide_Msg_Pkg _4_outCollector_partial;
  /* outTelegramArray/ */
  static TelegramArray_T_BG_Types_Pkg _5_outTelegramArray_partial;
  /* outBGisComplete/ */
  static kcg_bool _6_outBGisComplete_partial;
  /* outIsDuplicate/ */
  static kcg_bool _7_outIsDuplicate_partial;

  outC->IfBlock1_clock = doUpdate;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outIsDuplicate_partial = kcg_false;
    kcg_copy_Telegram_T_BG_Types_Pkg(
      &outC->_L55_then_IfBlock1,
      (Telegram_T_BG_Types_Pkg *) &cEmpty_BaliseTlg_BG_Types_Pkg);
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &outC->_L47_then_IfBlock1,
      inPosition);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->_L9_then_IfBlock1,
      inCollector);
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &outC->_L50_then_IfBlock1,
      &outC->_L9_then_IfBlock1.positionFirstContact);
    /* IfBlock1:then:_L46=(Receive_TrackSide_Msg_Pkg::setIntervalBGPosition#1)/ */
    setIntervalBGPosition_Receive_TrackSide_Msg_Pkg(
      &outC->_L50_then_IfBlock1,
      &outC->_L47_then_IfBlock1,
      &outC->Context_setIntervalBGPosition_1);
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &outC->_L46_then_IfBlock1,
      &outC->Context_setIntervalBGPosition_1.outUpdateBGPosition);
    kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L45_then_IfBlock1, newTelegram);
    kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L41_then_IfBlock1, newTelegram);
    outC->_L40_then_IfBlock1 = doUpdate;
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outC->_L39_then_IfBlock1,
      inoldTelegramArray);
    /* IfBlock1:then:_L37/ */
    for (idx2 = 0; idx2 < 8; idx2++) {
      kcg_copy_Telegram_T_BG_Types_Pkg(
        &outC->_L37_then_IfBlock1[idx2],
        &outC->_L41_then_IfBlock1);
    }
    /* IfBlock1:then:_L35= */
    if (outC->_L40_then_IfBlock1) {
      /* IfBlock1:then:_L35= */
      for (idx3 = 0; idx3 < 8; idx3++) {
        /* IfBlock1:then:_L35=(Receive_TrackSide_Msg_Pkg::BaliseSupport::setFirstFree#3)/ */
        setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport(
          &outC->_L37_then_IfBlock1[idx3],
          &outC->_L39_then_IfBlock1[idx3],
          &outC->Context_setFirstFree_3[idx3]);
        kcg_copy_Telegram_T_BG_Types_Pkg(
          &outC->_L36_then_IfBlock1[idx3],
          &outC->Context_setFirstFree_3[idx3].outTelegrams);
        outC->_L35_then_IfBlock1 = /* IfBlock1:then:_L35= */(kcg_int64) (idx3 + 1);
        /* IfBlock1:then:_L35= */
        if (!outC->Context_setFirstFree_3[idx3].cont) {
          break;
        }
      }
    }
    else {
      outC->_L35_then_IfBlock1 = kcg_lit_int64(0);
    }
#ifdef KCG_MAPW_CPY

    /* IfBlock1:then:_L35= */
    for (
      idx3 = /* IfBlock1:then:_L35= */(kcg_size) outC->_L35_then_IfBlock1;
      idx3 < 8;
      idx3++) {
      kcg_copy_Telegram_T_BG_Types_Pkg(
        &outC->_L36_then_IfBlock1[idx3],
        &outC->_L55_then_IfBlock1);
    }
#endif /* KCG_MAPW_CPY */

    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outTelegramArray_partial,
      &outC->_L36_then_IfBlock1);
    noname = outC->_L35_then_IfBlock1;
    outC->_L48_then_IfBlock1 = outC->_L9_then_IfBlock1.totalTelegrams;
    outC->_L8_then_IfBlock1 = kcg_lit_int64(1);
    outC->_L49_then_IfBlock1 = outC->_L9_then_IfBlock1.collectedTelegrams;
    outC->_L1_then_IfBlock1 = outC->_L49_then_IfBlock1 + outC->_L8_then_IfBlock1;
    outC->_L21_then_IfBlock1 = outC->_L1_then_IfBlock1 >= outC->_L48_then_IfBlock1;
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &outC->_L17_then_IfBlock1,
      inPosition);
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &outC->_L51_then_IfBlock1,
      &outC->_L9_then_IfBlock1.balisePosition);
    /* IfBlock1:then:_L15=(Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition#1)/ */
    setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg(
      &outC->_L51_then_IfBlock1,
      &outC->_L45_then_IfBlock1,
      &outC->_L17_then_IfBlock1,
      &outC->Context_setCoordinateSystemPosition_1);
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &outC->_L15_then_IfBlock1,
      &outC->Context_setCoordinateSystemPosition_1.outUpdateBGPosition);
    outBGisComplete_partial = outC->_L21_then_IfBlock1;
    outC->_L3_then_IfBlock1 = outC->_L9_then_IfBlock1.badBaliseFlag;
    outC->_L54_then_IfBlock1 = outC->_L9_then_IfBlock1.BGMessageSent;
    outC->_L53_then_IfBlock1 = outC->_L9_then_IfBlock1.C_ID;
    outC->_L52_then_IfBlock1 = outC->_L9_then_IfBlock1.BG_ID;
    outC->_L6_then_IfBlock1.badBaliseFlag = outC->_L3_then_IfBlock1;
    outC->_L6_then_IfBlock1.BGMessageSent = outC->_L54_then_IfBlock1;
    outC->_L6_then_IfBlock1.C_ID = outC->_L53_then_IfBlock1;
    outC->_L6_then_IfBlock1.BG_ID = outC->_L52_then_IfBlock1;
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &outC->_L6_then_IfBlock1.balisePosition,
      &outC->_L15_then_IfBlock1);
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &outC->_L6_then_IfBlock1.positionFirstContact,
      &outC->_L46_then_IfBlock1);
    outC->_L6_then_IfBlock1.collectedTelegrams = outC->_L1_then_IfBlock1;
    outC->_L6_then_IfBlock1.totalTelegrams = outC->_L48_then_IfBlock1;
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outCollector_partial,
      &outC->_L6_then_IfBlock1);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->outCollector,
      &outCollector_partial);
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outC->outTelegramArray,
      &outTelegramArray_partial);
    outC->outBGisComplete = outBGisComplete_partial;
    outC->outIsDuplicate = outIsDuplicate_partial;
  }
  else {
    outC->_L31_else_IfBlock1 = kcg_false;
    outC->_L30_else_IfBlock1 = kcg_lit_int64(1);
    kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L17_else_IfBlock1, newTelegram);
    /* IfBlock1:else:_L16/ */
    for (idx = 0; idx < 8; idx++) {
      kcg_copy_Telegram_T_BG_Types_Pkg(
        &outC->_L16_else_IfBlock1[idx],
        &outC->_L17_else_IfBlock1);
    }
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outC->_L13_else_IfBlock1,
      inoldTelegramArray);
    kcg_copy_Telegram_T_BG_Types_Pkg(
      &outC->_L20_else_IfBlock1,
      (Telegram_T_BG_Types_Pkg *) &cEmpty_BaliseTlg_BG_Types_Pkg);
    outC->_L22_else_IfBlock1 = kcg_false;
    outC->_L18_else_IfBlock1 = kcg_true;
    /* IfBlock1:else:_L14= */
    if (outC->_L18_else_IfBlock1) {
      /* IfBlock1:else:_L14= */
      for (idx1 = 0; idx1 < 8; idx1++) {
        /* IfBlock1:else:_L14=(Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram#1)/ */
        replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport(
          &outC->_L16_else_IfBlock1[idx1],
          &outC->_L13_else_IfBlock1[idx1],
          &outC->Context_replaceTelegram_1[idx1]);
        kcg_copy_Telegram_T_BG_Types_Pkg(
          &outC->_L15_else_IfBlock1[idx1],
          &outC->Context_replaceTelegram_1[idx1].outTelegrams);
        outC->_L21_else_IfBlock1[idx1] =
          outC->Context_replaceTelegram_1[idx1].outIsDuplicate;
        outC->_L14_else_IfBlock1 = /* IfBlock1:else:_L14= */(kcg_int64) (idx1 + 1);
        /* IfBlock1:else:_L14= */
        if (!outC->Context_replaceTelegram_1[idx1].cont) {
          break;
        }
      }
    }
    else {
      outC->_L14_else_IfBlock1 = kcg_lit_int64(0);
    }
#ifdef KCG_MAPW_CPY

    /* IfBlock1:else:_L14= */
    for (
      idx1 = /* IfBlock1:else:_L14= */(kcg_size) outC->_L14_else_IfBlock1;
      idx1 < 8;
      idx1++) {
      kcg_copy_Telegram_T_BG_Types_Pkg(
        &outC->_L15_else_IfBlock1[idx1],
        &outC->_L20_else_IfBlock1);
      outC->_L21_else_IfBlock1[idx1] = outC->_L22_else_IfBlock1;
    }
#endif /* KCG_MAPW_CPY */

    outC->_L29_else_IfBlock1 = outC->_L14_else_IfBlock1 - outC->_L30_else_IfBlock1;
    if ((kcg_lit_int64(0) <= outC->_L29_else_IfBlock1) &
      (outC->_L29_else_IfBlock1 < kcg_lit_int64(8))) {
      outC->_L27_else_IfBlock1 = outC->_L21_else_IfBlock1[outC->_L29_else_IfBlock1];
    }
    else {
      outC->_L27_else_IfBlock1 = outC->_L31_else_IfBlock1;
    }
    outC->_L33_else_IfBlock1 = !outC->_L27_else_IfBlock1;
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->_L1_else_IfBlock1,
      inCollector);
    outC->_L9_else_IfBlock1 = outC->_L1_else_IfBlock1.BGMessageSent;
    outC->_L10_else_IfBlock1 = !outC->_L9_else_IfBlock1;
    outC->_L5_else_IfBlock1 = outC->_L1_else_IfBlock1.totalTelegrams;
    outC->_L4_else_IfBlock1 = outC->_L1_else_IfBlock1.collectedTelegrams;
    outC->_L8_else_IfBlock1 = outC->_L4_else_IfBlock1 >= outC->_L5_else_IfBlock1;
    outC->_L11_else_IfBlock1 = outC->_L8_else_IfBlock1 & outC->_L10_else_IfBlock1;
    outC->_L32_else_IfBlock1 = outC->_L33_else_IfBlock1 & outC->_L11_else_IfBlock1;
    _7_outIsDuplicate_partial = outC->_L27_else_IfBlock1;
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &_5_outTelegramArray_partial,
      &outC->_L15_else_IfBlock1);
    _6_outBGisComplete_partial = outC->_L32_else_IfBlock1;
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &_4_outCollector_partial,
      &outC->_L1_else_IfBlock1);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->outCollector,
      &_4_outCollector_partial);
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outC->outTelegramArray,
      &_5_outTelegramArray_partial);
    outC->outBGisComplete = _6_outBGisComplete_partial;
    outC->outIsDuplicate = _7_outIsDuplicate_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void addTelegram_init_Receive_TrackSide_Msg_Pkg(
  outC_addTelegram_Receive_TrackSide_Msg_Pkg *outC)
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
  static kcg_size idx25;
  static kcg_size idx26;
  static kcg_size idx27;
  static kcg_size idx28;
  static kcg_size idx29;
  static kcg_size idx30;
  static kcg_size idx31;
  static kcg_size idx32;
  static kcg_size idx33;

  outC->IfBlock1_clock = kcg_true;
  outC->_L1_else_IfBlock1.badBaliseFlag = kcg_true;
  outC->_L1_else_IfBlock1.BGMessageSent = kcg_true;
  outC->_L1_else_IfBlock1.C_ID = kcg_lit_int64(0);
  outC->_L1_else_IfBlock1.BG_ID = kcg_lit_int64(0);
  outC->_L1_else_IfBlock1.balisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L1_else_IfBlock1.balisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->_L1_else_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L1_else_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->_L1_else_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->_L1_else_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L1_else_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L1_else_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L1_else_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L1_else_IfBlock1.balisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L1_else_IfBlock1.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1_else_IfBlock1.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1_else_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L1_else_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L1_else_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L1_else_IfBlock1.positionFirstContact.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L1_else_IfBlock1.positionFirstContact.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->_L1_else_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L1_else_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->_L1_else_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->_L1_else_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L1_else_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L1_else_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L1_else_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L1_else_IfBlock1.positionFirstContact.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L1_else_IfBlock1.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1_else_IfBlock1.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1_else_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L1_else_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L1_else_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L1_else_IfBlock1.collectedTelegrams = kcg_lit_int64(0);
  outC->_L1_else_IfBlock1.totalTelegrams = kcg_lit_int64(0);
  outC->_L4_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L5_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L8_else_IfBlock1 = kcg_true;
  outC->_L9_else_IfBlock1 = kcg_true;
  outC->_L10_else_IfBlock1 = kcg_true;
  outC->_L11_else_IfBlock1 = kcg_true;
  for (idx4 = 0; idx4 < 8; idx4++) {
    outC->_L13_else_IfBlock1[idx4].valid = kcg_true;
    outC->_L13_else_IfBlock1[idx4].checkResult = kcg_true;
    outC->_L13_else_IfBlock1[idx4].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L13_else_IfBlock1[idx4].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L13_else_IfBlock1[idx4].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L13_else_IfBlock1[idx4].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L13_else_IfBlock1[idx4].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L13_else_IfBlock1[idx4].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->_L13_else_IfBlock1[idx4].telegramheader.m_mcount = kcg_lit_int64(0);
    outC->_L13_else_IfBlock1[idx4].telegramheader.nid_c = kcg_lit_int64(0);
    outC->_L13_else_IfBlock1[idx4].telegramheader.nid_bg = kcg_lit_int64(0);
    outC->_L13_else_IfBlock1[idx4].telegramheader.q_link = Q_LINK_Unlinked;
    for (idx2 = 0; idx2 < 30; idx2++) {
      outC->_L13_else_IfBlock1[idx4].packets.PacketHeaders[idx2].nid_packet =
        kcg_lit_int64(0);
      outC->_L13_else_IfBlock1[idx4].packets.PacketHeaders[idx2].q_dir =
        Q_DIR_Reverse;
      outC->_L13_else_IfBlock1[idx4].packets.PacketHeaders[idx2].valid = kcg_true;
      outC->_L13_else_IfBlock1[idx4].packets.PacketHeaders[idx2].startAddress =
        kcg_lit_int64(0);
      outC->_L13_else_IfBlock1[idx4].packets.PacketHeaders[idx2].endAddress =
        kcg_lit_int64(0);
    }
    for (idx3 = 0; idx3 < 500; idx3++) {
      outC->_L13_else_IfBlock1[idx4].packets.PacketData[idx3] = kcg_lit_int64(0);
    }
  }
  outC->_L14_else_IfBlock1 = kcg_lit_int64(0);
  for (idx7 = 0; idx7 < 8; idx7++) {
    outC->_L15_else_IfBlock1[idx7].valid = kcg_true;
    outC->_L15_else_IfBlock1[idx7].checkResult = kcg_true;
    outC->_L15_else_IfBlock1[idx7].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L15_else_IfBlock1[idx7].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L15_else_IfBlock1[idx7].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L15_else_IfBlock1[idx7].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L15_else_IfBlock1[idx7].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L15_else_IfBlock1[idx7].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->_L15_else_IfBlock1[idx7].telegramheader.m_mcount = kcg_lit_int64(0);
    outC->_L15_else_IfBlock1[idx7].telegramheader.nid_c = kcg_lit_int64(0);
    outC->_L15_else_IfBlock1[idx7].telegramheader.nid_bg = kcg_lit_int64(0);
    outC->_L15_else_IfBlock1[idx7].telegramheader.q_link = Q_LINK_Unlinked;
    for (idx5 = 0; idx5 < 30; idx5++) {
      outC->_L15_else_IfBlock1[idx7].packets.PacketHeaders[idx5].nid_packet =
        kcg_lit_int64(0);
      outC->_L15_else_IfBlock1[idx7].packets.PacketHeaders[idx5].q_dir =
        Q_DIR_Reverse;
      outC->_L15_else_IfBlock1[idx7].packets.PacketHeaders[idx5].valid = kcg_true;
      outC->_L15_else_IfBlock1[idx7].packets.PacketHeaders[idx5].startAddress =
        kcg_lit_int64(0);
      outC->_L15_else_IfBlock1[idx7].packets.PacketHeaders[idx5].endAddress =
        kcg_lit_int64(0);
    }
    for (idx6 = 0; idx6 < 500; idx6++) {
      outC->_L15_else_IfBlock1[idx7].packets.PacketData[idx6] = kcg_lit_int64(0);
    }
  }
  outC->_L17_else_IfBlock1.valid = kcg_true;
  outC->_L17_else_IfBlock1.checkResult = kcg_true;
  outC->_L17_else_IfBlock1.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L17_else_IfBlock1.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L17_else_IfBlock1.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L17_else_IfBlock1.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L17_else_IfBlock1.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L17_else_IfBlock1.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L17_else_IfBlock1.telegramheader.m_mcount = kcg_lit_int64(0);
  outC->_L17_else_IfBlock1.telegramheader.nid_c = kcg_lit_int64(0);
  outC->_L17_else_IfBlock1.telegramheader.nid_bg = kcg_lit_int64(0);
  outC->_L17_else_IfBlock1.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx8 = 0; idx8 < 30; idx8++) {
    outC->_L17_else_IfBlock1.packets.PacketHeaders[idx8].nid_packet =
      kcg_lit_int64(0);
    outC->_L17_else_IfBlock1.packets.PacketHeaders[idx8].q_dir = Q_DIR_Reverse;
    outC->_L17_else_IfBlock1.packets.PacketHeaders[idx8].valid = kcg_true;
    outC->_L17_else_IfBlock1.packets.PacketHeaders[idx8].startAddress =
      kcg_lit_int64(0);
    outC->_L17_else_IfBlock1.packets.PacketHeaders[idx8].endAddress =
      kcg_lit_int64(0);
  }
  for (idx9 = 0; idx9 < 500; idx9++) {
    outC->_L17_else_IfBlock1.packets.PacketData[idx9] = kcg_lit_int64(0);
  }
  for (idx12 = 0; idx12 < 8; idx12++) {
    outC->_L16_else_IfBlock1[idx12].valid = kcg_true;
    outC->_L16_else_IfBlock1[idx12].checkResult = kcg_true;
    outC->_L16_else_IfBlock1[idx12].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L16_else_IfBlock1[idx12].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L16_else_IfBlock1[idx12].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L16_else_IfBlock1[idx12].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L16_else_IfBlock1[idx12].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L16_else_IfBlock1[idx12].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->_L16_else_IfBlock1[idx12].telegramheader.m_mcount = kcg_lit_int64(0);
    outC->_L16_else_IfBlock1[idx12].telegramheader.nid_c = kcg_lit_int64(0);
    outC->_L16_else_IfBlock1[idx12].telegramheader.nid_bg = kcg_lit_int64(0);
    outC->_L16_else_IfBlock1[idx12].telegramheader.q_link = Q_LINK_Unlinked;
    for (idx10 = 0; idx10 < 30; idx10++) {
      outC->_L16_else_IfBlock1[idx12].packets.PacketHeaders[idx10].nid_packet =
        kcg_lit_int64(0);
      outC->_L16_else_IfBlock1[idx12].packets.PacketHeaders[idx10].q_dir =
        Q_DIR_Reverse;
      outC->_L16_else_IfBlock1[idx12].packets.PacketHeaders[idx10].valid = kcg_true;
      outC->_L16_else_IfBlock1[idx12].packets.PacketHeaders[idx10].startAddress =
        kcg_lit_int64(0);
      outC->_L16_else_IfBlock1[idx12].packets.PacketHeaders[idx10].endAddress =
        kcg_lit_int64(0);
    }
    for (idx11 = 0; idx11 < 500; idx11++) {
      outC->_L16_else_IfBlock1[idx12].packets.PacketData[idx11] = kcg_lit_int64(0);
    }
  }
  outC->_L18_else_IfBlock1 = kcg_true;
  outC->_L20_else_IfBlock1.valid = kcg_true;
  outC->_L20_else_IfBlock1.checkResult = kcg_true;
  outC->_L20_else_IfBlock1.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L20_else_IfBlock1.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L20_else_IfBlock1.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L20_else_IfBlock1.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L20_else_IfBlock1.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L20_else_IfBlock1.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L20_else_IfBlock1.telegramheader.m_mcount = kcg_lit_int64(0);
  outC->_L20_else_IfBlock1.telegramheader.nid_c = kcg_lit_int64(0);
  outC->_L20_else_IfBlock1.telegramheader.nid_bg = kcg_lit_int64(0);
  outC->_L20_else_IfBlock1.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx13 = 0; idx13 < 30; idx13++) {
    outC->_L20_else_IfBlock1.packets.PacketHeaders[idx13].nid_packet =
      kcg_lit_int64(0);
    outC->_L20_else_IfBlock1.packets.PacketHeaders[idx13].q_dir = Q_DIR_Reverse;
    outC->_L20_else_IfBlock1.packets.PacketHeaders[idx13].valid = kcg_true;
    outC->_L20_else_IfBlock1.packets.PacketHeaders[idx13].startAddress =
      kcg_lit_int64(0);
    outC->_L20_else_IfBlock1.packets.PacketHeaders[idx13].endAddress =
      kcg_lit_int64(0);
  }
  for (idx14 = 0; idx14 < 500; idx14++) {
    outC->_L20_else_IfBlock1.packets.PacketData[idx14] = kcg_lit_int64(0);
  }
  for (idx15 = 0; idx15 < 8; idx15++) {
    outC->_L21_else_IfBlock1[idx15] = kcg_true;
  }
  outC->_L22_else_IfBlock1 = kcg_true;
  outC->_L27_else_IfBlock1 = kcg_true;
  outC->_L29_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L30_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L31_else_IfBlock1 = kcg_true;
  outC->_L32_else_IfBlock1 = kcg_true;
  outC->_L33_else_IfBlock1 = kcg_true;
  outC->_L9_then_IfBlock1.badBaliseFlag = kcg_true;
  outC->_L9_then_IfBlock1.BGMessageSent = kcg_true;
  outC->_L9_then_IfBlock1.C_ID = kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.BG_ID = kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.balisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L9_then_IfBlock1.balisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.balisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L9_then_IfBlock1.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L9_then_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L9_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L9_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L9_then_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.collectedTelegrams = kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.totalTelegrams = kcg_lit_int64(0);
  outC->_L8_then_IfBlock1 = kcg_lit_int64(0);
  outC->_L6_then_IfBlock1.badBaliseFlag = kcg_true;
  outC->_L6_then_IfBlock1.BGMessageSent = kcg_true;
  outC->_L6_then_IfBlock1.C_ID = kcg_lit_int64(0);
  outC->_L6_then_IfBlock1.BG_ID = kcg_lit_int64(0);
  outC->_L6_then_IfBlock1.balisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L6_then_IfBlock1.balisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1.balisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L6_then_IfBlock1.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L6_then_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L6_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L6_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L6_then_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1.collectedTelegrams = kcg_lit_int64(0);
  outC->_L6_then_IfBlock1.totalTelegrams = kcg_lit_int64(0);
  outC->_L3_then_IfBlock1 = kcg_true;
  outC->_L1_then_IfBlock1 = kcg_lit_int64(0);
  outC->_L15_then_IfBlock1.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L15_then_IfBlock1.odometerOfBaliseDetection.timestamp = kcg_lit_int64(0);
  outC->_L15_then_IfBlock1.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L15_then_IfBlock1.odometerOfBaliseDetection.odo.o_min = kcg_lit_int64(0);
  outC->_L15_then_IfBlock1.odometerOfBaliseDetection.odo.o_max = kcg_lit_int64(0);
  outC->_L15_then_IfBlock1.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L15_then_IfBlock1.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L15_then_IfBlock1.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L15_then_IfBlock1.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L15_then_IfBlock1.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L15_then_IfBlock1.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L15_then_IfBlock1.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L15_then_IfBlock1.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L15_then_IfBlock1.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L15_then_IfBlock1.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L17_then_IfBlock1.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L17_then_IfBlock1.odometerOfBaliseDetection.timestamp = kcg_lit_int64(0);
  outC->_L17_then_IfBlock1.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L17_then_IfBlock1.odometerOfBaliseDetection.odo.o_min = kcg_lit_int64(0);
  outC->_L17_then_IfBlock1.odometerOfBaliseDetection.odo.o_max = kcg_lit_int64(0);
  outC->_L17_then_IfBlock1.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L17_then_IfBlock1.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L17_then_IfBlock1.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L17_then_IfBlock1.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L17_then_IfBlock1.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L17_then_IfBlock1.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L17_then_IfBlock1.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L17_then_IfBlock1.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L17_then_IfBlock1.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L17_then_IfBlock1.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L21_then_IfBlock1 = kcg_true;
  outC->_L41_then_IfBlock1.valid = kcg_true;
  outC->_L41_then_IfBlock1.checkResult = kcg_true;
  outC->_L41_then_IfBlock1.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L41_then_IfBlock1.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L41_then_IfBlock1.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L41_then_IfBlock1.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L41_then_IfBlock1.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L41_then_IfBlock1.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L41_then_IfBlock1.telegramheader.m_mcount = kcg_lit_int64(0);
  outC->_L41_then_IfBlock1.telegramheader.nid_c = kcg_lit_int64(0);
  outC->_L41_then_IfBlock1.telegramheader.nid_bg = kcg_lit_int64(0);
  outC->_L41_then_IfBlock1.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx16 = 0; idx16 < 30; idx16++) {
    outC->_L41_then_IfBlock1.packets.PacketHeaders[idx16].nid_packet =
      kcg_lit_int64(0);
    outC->_L41_then_IfBlock1.packets.PacketHeaders[idx16].q_dir = Q_DIR_Reverse;
    outC->_L41_then_IfBlock1.packets.PacketHeaders[idx16].valid = kcg_true;
    outC->_L41_then_IfBlock1.packets.PacketHeaders[idx16].startAddress =
      kcg_lit_int64(0);
    outC->_L41_then_IfBlock1.packets.PacketHeaders[idx16].endAddress =
      kcg_lit_int64(0);
  }
  for (idx17 = 0; idx17 < 500; idx17++) {
    outC->_L41_then_IfBlock1.packets.PacketData[idx17] = kcg_lit_int64(0);
  }
  outC->_L40_then_IfBlock1 = kcg_true;
  for (idx20 = 0; idx20 < 8; idx20++) {
    outC->_L39_then_IfBlock1[idx20].valid = kcg_true;
    outC->_L39_then_IfBlock1[idx20].checkResult = kcg_true;
    outC->_L39_then_IfBlock1[idx20].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L39_then_IfBlock1[idx20].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L39_then_IfBlock1[idx20].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L39_then_IfBlock1[idx20].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L39_then_IfBlock1[idx20].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L39_then_IfBlock1[idx20].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->_L39_then_IfBlock1[idx20].telegramheader.m_mcount = kcg_lit_int64(0);
    outC->_L39_then_IfBlock1[idx20].telegramheader.nid_c = kcg_lit_int64(0);
    outC->_L39_then_IfBlock1[idx20].telegramheader.nid_bg = kcg_lit_int64(0);
    outC->_L39_then_IfBlock1[idx20].telegramheader.q_link = Q_LINK_Unlinked;
    for (idx18 = 0; idx18 < 30; idx18++) {
      outC->_L39_then_IfBlock1[idx20].packets.PacketHeaders[idx18].nid_packet =
        kcg_lit_int64(0);
      outC->_L39_then_IfBlock1[idx20].packets.PacketHeaders[idx18].q_dir =
        Q_DIR_Reverse;
      outC->_L39_then_IfBlock1[idx20].packets.PacketHeaders[idx18].valid = kcg_true;
      outC->_L39_then_IfBlock1[idx20].packets.PacketHeaders[idx18].startAddress =
        kcg_lit_int64(0);
      outC->_L39_then_IfBlock1[idx20].packets.PacketHeaders[idx18].endAddress =
        kcg_lit_int64(0);
    }
    for (idx19 = 0; idx19 < 500; idx19++) {
      outC->_L39_then_IfBlock1[idx20].packets.PacketData[idx19] = kcg_lit_int64(0);
    }
  }
  for (idx23 = 0; idx23 < 8; idx23++) {
    outC->_L37_then_IfBlock1[idx23].valid = kcg_true;
    outC->_L37_then_IfBlock1[idx23].checkResult = kcg_true;
    outC->_L37_then_IfBlock1[idx23].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L37_then_IfBlock1[idx23].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L37_then_IfBlock1[idx23].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L37_then_IfBlock1[idx23].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L37_then_IfBlock1[idx23].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L37_then_IfBlock1[idx23].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->_L37_then_IfBlock1[idx23].telegramheader.m_mcount = kcg_lit_int64(0);
    outC->_L37_then_IfBlock1[idx23].telegramheader.nid_c = kcg_lit_int64(0);
    outC->_L37_then_IfBlock1[idx23].telegramheader.nid_bg = kcg_lit_int64(0);
    outC->_L37_then_IfBlock1[idx23].telegramheader.q_link = Q_LINK_Unlinked;
    for (idx21 = 0; idx21 < 30; idx21++) {
      outC->_L37_then_IfBlock1[idx23].packets.PacketHeaders[idx21].nid_packet =
        kcg_lit_int64(0);
      outC->_L37_then_IfBlock1[idx23].packets.PacketHeaders[idx21].q_dir =
        Q_DIR_Reverse;
      outC->_L37_then_IfBlock1[idx23].packets.PacketHeaders[idx21].valid = kcg_true;
      outC->_L37_then_IfBlock1[idx23].packets.PacketHeaders[idx21].startAddress =
        kcg_lit_int64(0);
      outC->_L37_then_IfBlock1[idx23].packets.PacketHeaders[idx21].endAddress =
        kcg_lit_int64(0);
    }
    for (idx22 = 0; idx22 < 500; idx22++) {
      outC->_L37_then_IfBlock1[idx23].packets.PacketData[idx22] = kcg_lit_int64(0);
    }
  }
  outC->_L35_then_IfBlock1 = kcg_lit_int64(0);
  for (idx26 = 0; idx26 < 8; idx26++) {
    outC->_L36_then_IfBlock1[idx26].valid = kcg_true;
    outC->_L36_then_IfBlock1[idx26].checkResult = kcg_true;
    outC->_L36_then_IfBlock1[idx26].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L36_then_IfBlock1[idx26].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L36_then_IfBlock1[idx26].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L36_then_IfBlock1[idx26].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L36_then_IfBlock1[idx26].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L36_then_IfBlock1[idx26].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->_L36_then_IfBlock1[idx26].telegramheader.m_mcount = kcg_lit_int64(0);
    outC->_L36_then_IfBlock1[idx26].telegramheader.nid_c = kcg_lit_int64(0);
    outC->_L36_then_IfBlock1[idx26].telegramheader.nid_bg = kcg_lit_int64(0);
    outC->_L36_then_IfBlock1[idx26].telegramheader.q_link = Q_LINK_Unlinked;
    for (idx24 = 0; idx24 < 30; idx24++) {
      outC->_L36_then_IfBlock1[idx26].packets.PacketHeaders[idx24].nid_packet =
        kcg_lit_int64(0);
      outC->_L36_then_IfBlock1[idx26].packets.PacketHeaders[idx24].q_dir =
        Q_DIR_Reverse;
      outC->_L36_then_IfBlock1[idx26].packets.PacketHeaders[idx24].valid = kcg_true;
      outC->_L36_then_IfBlock1[idx26].packets.PacketHeaders[idx24].startAddress =
        kcg_lit_int64(0);
      outC->_L36_then_IfBlock1[idx26].packets.PacketHeaders[idx24].endAddress =
        kcg_lit_int64(0);
    }
    for (idx25 = 0; idx25 < 500; idx25++) {
      outC->_L36_then_IfBlock1[idx26].packets.PacketData[idx25] = kcg_lit_int64(0);
    }
  }
  outC->_L45_then_IfBlock1.valid = kcg_true;
  outC->_L45_then_IfBlock1.checkResult = kcg_true;
  outC->_L45_then_IfBlock1.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L45_then_IfBlock1.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L45_then_IfBlock1.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L45_then_IfBlock1.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L45_then_IfBlock1.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L45_then_IfBlock1.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L45_then_IfBlock1.telegramheader.m_mcount = kcg_lit_int64(0);
  outC->_L45_then_IfBlock1.telegramheader.nid_c = kcg_lit_int64(0);
  outC->_L45_then_IfBlock1.telegramheader.nid_bg = kcg_lit_int64(0);
  outC->_L45_then_IfBlock1.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx27 = 0; idx27 < 30; idx27++) {
    outC->_L45_then_IfBlock1.packets.PacketHeaders[idx27].nid_packet =
      kcg_lit_int64(0);
    outC->_L45_then_IfBlock1.packets.PacketHeaders[idx27].q_dir = Q_DIR_Reverse;
    outC->_L45_then_IfBlock1.packets.PacketHeaders[idx27].valid = kcg_true;
    outC->_L45_then_IfBlock1.packets.PacketHeaders[idx27].startAddress =
      kcg_lit_int64(0);
    outC->_L45_then_IfBlock1.packets.PacketHeaders[idx27].endAddress =
      kcg_lit_int64(0);
  }
  for (idx28 = 0; idx28 < 500; idx28++) {
    outC->_L45_then_IfBlock1.packets.PacketData[idx28] = kcg_lit_int64(0);
  }
  outC->_L46_then_IfBlock1.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L46_then_IfBlock1.odometerOfBaliseDetection.timestamp = kcg_lit_int64(0);
  outC->_L46_then_IfBlock1.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L46_then_IfBlock1.odometerOfBaliseDetection.odo.o_min = kcg_lit_int64(0);
  outC->_L46_then_IfBlock1.odometerOfBaliseDetection.odo.o_max = kcg_lit_int64(0);
  outC->_L46_then_IfBlock1.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L46_then_IfBlock1.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L46_then_IfBlock1.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L46_then_IfBlock1.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L46_then_IfBlock1.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L46_then_IfBlock1.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L46_then_IfBlock1.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L46_then_IfBlock1.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L46_then_IfBlock1.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L46_then_IfBlock1.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L47_then_IfBlock1.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L47_then_IfBlock1.odometerOfBaliseDetection.timestamp = kcg_lit_int64(0);
  outC->_L47_then_IfBlock1.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L47_then_IfBlock1.odometerOfBaliseDetection.odo.o_min = kcg_lit_int64(0);
  outC->_L47_then_IfBlock1.odometerOfBaliseDetection.odo.o_max = kcg_lit_int64(0);
  outC->_L47_then_IfBlock1.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L47_then_IfBlock1.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L47_then_IfBlock1.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L47_then_IfBlock1.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L47_then_IfBlock1.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L47_then_IfBlock1.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L47_then_IfBlock1.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L47_then_IfBlock1.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L47_then_IfBlock1.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L47_then_IfBlock1.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L54_then_IfBlock1 = kcg_true;
  outC->_L53_then_IfBlock1 = kcg_lit_int64(0);
  outC->_L52_then_IfBlock1 = kcg_lit_int64(0);
  outC->_L51_then_IfBlock1.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L51_then_IfBlock1.odometerOfBaliseDetection.timestamp = kcg_lit_int64(0);
  outC->_L51_then_IfBlock1.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L51_then_IfBlock1.odometerOfBaliseDetection.odo.o_min = kcg_lit_int64(0);
  outC->_L51_then_IfBlock1.odometerOfBaliseDetection.odo.o_max = kcg_lit_int64(0);
  outC->_L51_then_IfBlock1.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L51_then_IfBlock1.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L51_then_IfBlock1.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L51_then_IfBlock1.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L51_then_IfBlock1.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L51_then_IfBlock1.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L51_then_IfBlock1.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L51_then_IfBlock1.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L51_then_IfBlock1.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L51_then_IfBlock1.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L50_then_IfBlock1.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L50_then_IfBlock1.odometerOfBaliseDetection.timestamp = kcg_lit_int64(0);
  outC->_L50_then_IfBlock1.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L50_then_IfBlock1.odometerOfBaliseDetection.odo.o_min = kcg_lit_int64(0);
  outC->_L50_then_IfBlock1.odometerOfBaliseDetection.odo.o_max = kcg_lit_int64(0);
  outC->_L50_then_IfBlock1.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L50_then_IfBlock1.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L50_then_IfBlock1.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L50_then_IfBlock1.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L50_then_IfBlock1.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L50_then_IfBlock1.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L50_then_IfBlock1.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L50_then_IfBlock1.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L50_then_IfBlock1.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L50_then_IfBlock1.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L49_then_IfBlock1 = kcg_lit_int64(0);
  outC->_L48_then_IfBlock1 = kcg_lit_int64(0);
  outC->_L55_then_IfBlock1.valid = kcg_true;
  outC->_L55_then_IfBlock1.checkResult = kcg_true;
  outC->_L55_then_IfBlock1.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L55_then_IfBlock1.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L55_then_IfBlock1.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L55_then_IfBlock1.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L55_then_IfBlock1.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L55_then_IfBlock1.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L55_then_IfBlock1.telegramheader.m_mcount = kcg_lit_int64(0);
  outC->_L55_then_IfBlock1.telegramheader.nid_c = kcg_lit_int64(0);
  outC->_L55_then_IfBlock1.telegramheader.nid_bg = kcg_lit_int64(0);
  outC->_L55_then_IfBlock1.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx29 = 0; idx29 < 30; idx29++) {
    outC->_L55_then_IfBlock1.packets.PacketHeaders[idx29].nid_packet =
      kcg_lit_int64(0);
    outC->_L55_then_IfBlock1.packets.PacketHeaders[idx29].q_dir = Q_DIR_Reverse;
    outC->_L55_then_IfBlock1.packets.PacketHeaders[idx29].valid = kcg_true;
    outC->_L55_then_IfBlock1.packets.PacketHeaders[idx29].startAddress =
      kcg_lit_int64(0);
    outC->_L55_then_IfBlock1.packets.PacketHeaders[idx29].endAddress =
      kcg_lit_int64(0);
  }
  for (idx30 = 0; idx30 < 500; idx30++) {
    outC->_L55_then_IfBlock1.packets.PacketData[idx30] = kcg_lit_int64(0);
  }
  outC->outIsDuplicate = kcg_true;
  outC->outBGisComplete = kcg_true;
  for (idx33 = 0; idx33 < 8; idx33++) {
    outC->outTelegramArray[idx33].valid = kcg_true;
    outC->outTelegramArray[idx33].checkResult = kcg_true;
    outC->outTelegramArray[idx33].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->outTelegramArray[idx33].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->outTelegramArray[idx33].telegramheader.q_media = Q_MEDIA_Balise;
    outC->outTelegramArray[idx33].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->outTelegramArray[idx33].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->outTelegramArray[idx33].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->outTelegramArray[idx33].telegramheader.m_mcount = kcg_lit_int64(0);
    outC->outTelegramArray[idx33].telegramheader.nid_c = kcg_lit_int64(0);
    outC->outTelegramArray[idx33].telegramheader.nid_bg = kcg_lit_int64(0);
    outC->outTelegramArray[idx33].telegramheader.q_link = Q_LINK_Unlinked;
    for (idx31 = 0; idx31 < 30; idx31++) {
      outC->outTelegramArray[idx33].packets.PacketHeaders[idx31].nid_packet =
        kcg_lit_int64(0);
      outC->outTelegramArray[idx33].packets.PacketHeaders[idx31].q_dir =
        Q_DIR_Reverse;
      outC->outTelegramArray[idx33].packets.PacketHeaders[idx31].valid = kcg_true;
      outC->outTelegramArray[idx33].packets.PacketHeaders[idx31].startAddress =
        kcg_lit_int64(0);
      outC->outTelegramArray[idx33].packets.PacketHeaders[idx31].endAddress =
        kcg_lit_int64(0);
    }
    for (idx32 = 0; idx32 < 500; idx32++) {
      outC->outTelegramArray[idx33].packets.PacketData[idx32] = kcg_lit_int64(0);
    }
  }
  outC->outCollector.badBaliseFlag = kcg_true;
  outC->outCollector.BGMessageSent = kcg_true;
  outC->outCollector.C_ID = kcg_lit_int64(0);
  outC->outCollector.BG_ID = kcg_lit_int64(0);
  outC->outCollector.balisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->outCollector.balisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->outCollector.balisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->outCollector.balisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->outCollector.balisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->outCollector.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->outCollector.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->outCollector.balisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->outCollector.balisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->outCollector.balisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->outCollector.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->outCollector.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->outCollector.balisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->outCollector.balisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->outCollector.balisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->outCollector.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->outCollector.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->outCollector.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->outCollector.collectedTelegrams = kcg_lit_int64(0);
  outC->outCollector.totalTelegrams = kcg_lit_int64(0);
  /* IfBlock1:then:_L15=(Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition#1)/ */
  setCoordinateSystemPosition_init_Receive_TrackSide_Msg_Pkg(
    &outC->Context_setCoordinateSystemPosition_1);
  for (idx1 = 0; idx1 < 8; idx1++) {
    /* IfBlock1:then:_L35=(Receive_TrackSide_Msg_Pkg::BaliseSupport::setFirstFree#3)/ */
    setFirstFree_init_Receive_TrackSide_Msg_Pkg_BaliseSupport(
      &outC->Context_setFirstFree_3[idx1]);
  }
  /* IfBlock1:then:_L46=(Receive_TrackSide_Msg_Pkg::setIntervalBGPosition#1)/ */
  setIntervalBGPosition_init_Receive_TrackSide_Msg_Pkg(
    &outC->Context_setIntervalBGPosition_1);
  for (idx = 0; idx < 8; idx++) {
    /* IfBlock1:else:_L14=(Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram#1)/ */
    replaceTelegram_init_Receive_TrackSide_Msg_Pkg_BaliseSupport(
      &outC->Context_replaceTelegram_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void addTelegram_reset_Receive_TrackSide_Msg_Pkg(
  outC_addTelegram_Receive_TrackSide_Msg_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  /* IfBlock1:then:_L15=(Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition#1)/ */
  setCoordinateSystemPosition_reset_Receive_TrackSide_Msg_Pkg(
    &outC->Context_setCoordinateSystemPosition_1);
  for (idx1 = 0; idx1 < 8; idx1++) {
    /* IfBlock1:then:_L35=(Receive_TrackSide_Msg_Pkg::BaliseSupport::setFirstFree#3)/ */
    setFirstFree_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
      &outC->Context_setFirstFree_3[idx1]);
  }
  /* IfBlock1:then:_L46=(Receive_TrackSide_Msg_Pkg::setIntervalBGPosition#1)/ */
  setIntervalBGPosition_reset_Receive_TrackSide_Msg_Pkg(
    &outC->Context_setIntervalBGPosition_1);
  for (idx = 0; idx < 8; idx++) {
    /* IfBlock1:else:_L14=(Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram#1)/ */
    replaceTelegram_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
      &outC->Context_replaceTelegram_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** addTelegram_Receive_TrackSide_Msg_Pkg.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

