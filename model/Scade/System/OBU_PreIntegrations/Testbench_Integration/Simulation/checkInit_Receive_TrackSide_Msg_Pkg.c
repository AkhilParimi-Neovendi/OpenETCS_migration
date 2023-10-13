/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "checkInit_Receive_TrackSide_Msg_Pkg.h"

/* Receive_TrackSide_Msg_Pkg::checkInit/ */
void checkInit_Receive_TrackSide_Msg_Pkg(
  /* newTelegram/ */
  Telegram_T_BG_Types_Pkg *newTelegram,
  /* inCollector/ */
  BGCollector_T_Receive_TrackSide_Msg_Pkg *inCollector,
  outC_checkInit_Receive_TrackSide_Msg_Pkg *outC)
{
  /* outCollector/ */
  static BGCollector_T_Receive_TrackSide_Msg_Pkg outCollector_partial;
  /* outCollector/ */
  static BGCollector_T_Receive_TrackSide_Msg_Pkg _1_outCollector_partial;

  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(&outC->_L8, inCollector);
  outC->_L4 = kcg_lit_int64(0);
  outC->_L2 = outC->_L8.totalTelegrams;
  outC->_L6 = outC->_L2 > outC->_L4;
  outC->isDefined = outC->_L6;
  outC->IfBlock1_clock = outC->isDefined;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->_L1_then_IfBlock1,
      inCollector);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outCollector_partial,
      &outC->_L1_then_IfBlock1);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->outCollector,
      &outCollector_partial);
  }
  else {
    kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L19_else_IfBlock1, newTelegram);
    /* IfBlock1:else:_L20=(Receive_TrackSide_Msg_Pkg::BaliseSupport::initCollector#1)/ */
    initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport(
      &outC->_L19_else_IfBlock1,
      &outC->Context_initCollector_1);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->_L20_else_IfBlock1,
      &outC->Context_initCollector_1.outCollector);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &_1_outCollector_partial,
      &outC->_L20_else_IfBlock1);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->outCollector,
      &_1_outCollector_partial);
  }
}

#ifndef KCG_USER_DEFINED_INIT
void checkInit_init_Receive_TrackSide_Msg_Pkg(
  outC_checkInit_Receive_TrackSide_Msg_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L8.badBaliseFlag = kcg_true;
  outC->_L8.BGMessageSent = kcg_true;
  outC->_L8.C_ID = kcg_lit_int64(0);
  outC->_L8.BG_ID = kcg_lit_int64(0);
  outC->_L8.balisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L8.balisePosition.odometerOfBaliseDetection.timestamp = kcg_lit_int64(0);
  outC->_L8.balisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L8.balisePosition.odometerOfBaliseDetection.odo.o_min = kcg_lit_int64(0);
  outC->_L8.balisePosition.odometerOfBaliseDetection.odo.o_max = kcg_lit_int64(0);
  outC->_L8.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L8.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L8.balisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L8.balisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L8.balisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L8.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L8.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L8.balisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L8.balisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L8.balisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L8.positionFirstContact.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L8.positionFirstContact.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->_L8.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L8.positionFirstContact.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->_L8.positionFirstContact.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->_L8.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L8.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L8.positionFirstContact.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L8.positionFirstContact.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L8.positionFirstContact.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L8.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L8.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L8.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L8.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L8.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L8.collectedTelegrams = kcg_lit_int64(0);
  outC->_L8.totalTelegrams = kcg_lit_int64(0);
  outC->_L6 = kcg_true;
  outC->_L4 = kcg_lit_int64(0);
  outC->_L2 = kcg_lit_int64(0);
  outC->isDefined = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L19_else_IfBlock1.valid = kcg_true;
  outC->_L19_else_IfBlock1.checkResult = kcg_true;
  outC->_L19_else_IfBlock1.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L19_else_IfBlock1.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L19_else_IfBlock1.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L19_else_IfBlock1.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L19_else_IfBlock1.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L19_else_IfBlock1.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L19_else_IfBlock1.telegramheader.m_mcount = kcg_lit_int64(0);
  outC->_L19_else_IfBlock1.telegramheader.nid_c = kcg_lit_int64(0);
  outC->_L19_else_IfBlock1.telegramheader.nid_bg = kcg_lit_int64(0);
  outC->_L19_else_IfBlock1.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx = 0; idx < 30; idx++) {
    outC->_L19_else_IfBlock1.packets.PacketHeaders[idx].nid_packet =
      kcg_lit_int64(0);
    outC->_L19_else_IfBlock1.packets.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L19_else_IfBlock1.packets.PacketHeaders[idx].valid = kcg_true;
    outC->_L19_else_IfBlock1.packets.PacketHeaders[idx].startAddress =
      kcg_lit_int64(0);
    outC->_L19_else_IfBlock1.packets.PacketHeaders[idx].endAddress =
      kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L19_else_IfBlock1.packets.PacketData[idx1] = kcg_lit_int64(0);
  }
  outC->_L20_else_IfBlock1.badBaliseFlag = kcg_true;
  outC->_L20_else_IfBlock1.BGMessageSent = kcg_true;
  outC->_L20_else_IfBlock1.C_ID = kcg_lit_int64(0);
  outC->_L20_else_IfBlock1.BG_ID = kcg_lit_int64(0);
  outC->_L20_else_IfBlock1.balisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L20_else_IfBlock1.balisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->_L20_else_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L20_else_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->_L20_else_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->_L20_else_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L20_else_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L20_else_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L20_else_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L20_else_IfBlock1.balisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L20_else_IfBlock1.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L20_else_IfBlock1.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L20_else_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L20_else_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L20_else_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L20_else_IfBlock1.positionFirstContact.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L20_else_IfBlock1.positionFirstContact.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->_L20_else_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L20_else_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->_L20_else_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->_L20_else_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L20_else_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L20_else_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L20_else_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L20_else_IfBlock1.positionFirstContact.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L20_else_IfBlock1.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L20_else_IfBlock1.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L20_else_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L20_else_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L20_else_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L20_else_IfBlock1.collectedTelegrams = kcg_lit_int64(0);
  outC->_L20_else_IfBlock1.totalTelegrams = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.badBaliseFlag = kcg_true;
  outC->_L1_then_IfBlock1.BGMessageSent = kcg_true;
  outC->_L1_then_IfBlock1.C_ID = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.BG_ID = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.balisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L1_then_IfBlock1.balisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.balisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1_then_IfBlock1.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1_then_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L1_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1_then_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.collectedTelegrams = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.totalTelegrams = kcg_lit_int64(0);
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
  /* IfBlock1:else:_L20=(Receive_TrackSide_Msg_Pkg::BaliseSupport::initCollector#1)/ */
  initCollector_init_Receive_TrackSide_Msg_Pkg_BaliseSupport(
    &outC->Context_initCollector_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void checkInit_reset_Receive_TrackSide_Msg_Pkg(
  outC_checkInit_Receive_TrackSide_Msg_Pkg *outC)
{
  /* IfBlock1:else:_L20=(Receive_TrackSide_Msg_Pkg::BaliseSupport::initCollector#1)/ */
  initCollector_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
    &outC->Context_initCollector_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** checkInit_Receive_TrackSide_Msg_Pkg.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

