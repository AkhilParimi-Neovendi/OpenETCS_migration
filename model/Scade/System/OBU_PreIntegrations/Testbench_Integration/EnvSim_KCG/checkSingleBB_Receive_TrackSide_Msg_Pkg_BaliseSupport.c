/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB/ */
void checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* inTelegram/ */
  Telegram_T_BG_Types_Pkg *inTelegram,
  /* inCollector/ */
  BGCollector_T_Receive_TrackSide_Msg_Pkg *inCollector,
  outC_checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
{
  static kcg_bool noname;

  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(&outC->_L2, inCollector);
  outC->_L29 = outC->_L2.BGMessageSent;
  noname = outC->_L29;
  outC->_L30 = outC->_L2.badBaliseFlag;
  outC->_L28 = outC->_L2.C_ID;
  outC->_L27 = outC->_L2.BG_ID;
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L26,
    &outC->_L2.balisePosition);
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L25,
    &outC->_L2.positionFirstContact);
  outC->_L24 = outC->_L2.collectedTelegrams;
  outC->_L23 = outC->_L2.totalTelegrams;
  outC->_L17 = kcg_lit_int32(0);
  outC->_L15 = outC->_L2.collectedTelegrams;
  outC->_L16 = outC->_L15 == outC->_L17;
  outC->_L14 = outC->_L2.BGMessageSent;
  outC->_L21 = !outC->_L14;
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L18, inTelegram);
  outC->_L19 = outC->_L18.valid;
  outC->_L20 = !outC->_L19;
  outC->_L22 = outC->_L20 & outC->_L21 & outC->_L16;
  outC->_L3.badBaliseFlag = outC->_L30;
  outC->_L3.BGMessageSent = outC->_L22;
  outC->_L3.C_ID = outC->_L28;
  outC->_L3.BG_ID = outC->_L27;
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L3.balisePosition,
    &outC->_L26);
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L3.positionFirstContact,
    &outC->_L25);
  outC->_L3.collectedTelegrams = outC->_L24;
  outC->_L3.totalTelegrams = outC->_L23;
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
    &outC->outCollector,
    &outC->_L3);
}

#ifndef KCG_USER_DEFINED_INIT
void checkSingleBB_init_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L23 = kcg_lit_int32(0);
  outC->_L24 = kcg_lit_int32(0);
  outC->_L25.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L25.odometerOfBaliseDetection.timestamp = kcg_lit_int32(0);
  outC->_L25.odometerOfBaliseDetection.odo.o_nominal = kcg_lit_int32(0);
  outC->_L25.odometerOfBaliseDetection.odo.o_min = kcg_lit_int32(0);
  outC->_L25.odometerOfBaliseDetection.odo.o_max = kcg_lit_int32(0);
  outC->_L25.odometerOfBaliseDetection.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L25.odometerOfBaliseDetection.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L25.odometerOfBaliseDetection.speed.v_lower = kcg_lit_int32(0);
  outC->_L25.odometerOfBaliseDetection.speed.v_upper = kcg_lit_int32(0);
  outC->_L25.odometerOfBaliseDetection.acceleration = kcg_lit_int32(0);
  outC->_L25.odometerOfBaliseDetection.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L25.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L25.BG_centerDetectionInaccuraccuracies.nominal = kcg_lit_int32(0);
  outC->_L25.BG_centerDetectionInaccuraccuracies.d_min = kcg_lit_int32(0);
  outC->_L25.BG_centerDetectionInaccuraccuracies.d_max = kcg_lit_int32(0);
  outC->_L26.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L26.odometerOfBaliseDetection.timestamp = kcg_lit_int32(0);
  outC->_L26.odometerOfBaliseDetection.odo.o_nominal = kcg_lit_int32(0);
  outC->_L26.odometerOfBaliseDetection.odo.o_min = kcg_lit_int32(0);
  outC->_L26.odometerOfBaliseDetection.odo.o_max = kcg_lit_int32(0);
  outC->_L26.odometerOfBaliseDetection.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L26.odometerOfBaliseDetection.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L26.odometerOfBaliseDetection.speed.v_lower = kcg_lit_int32(0);
  outC->_L26.odometerOfBaliseDetection.speed.v_upper = kcg_lit_int32(0);
  outC->_L26.odometerOfBaliseDetection.acceleration = kcg_lit_int32(0);
  outC->_L26.odometerOfBaliseDetection.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L26.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L26.BG_centerDetectionInaccuraccuracies.nominal = kcg_lit_int32(0);
  outC->_L26.BG_centerDetectionInaccuraccuracies.d_min = kcg_lit_int32(0);
  outC->_L26.BG_centerDetectionInaccuraccuracies.d_max = kcg_lit_int32(0);
  outC->_L27 = kcg_lit_int32(0);
  outC->_L28 = kcg_lit_int32(0);
  outC->_L29 = kcg_true;
  outC->_L30 = kcg_true;
  outC->_L22 = kcg_true;
  outC->_L21 = kcg_true;
  outC->_L20 = kcg_true;
  outC->_L19 = kcg_true;
  outC->_L18.valid = kcg_true;
  outC->_L18.checkResult = kcg_true;
  outC->_L18.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L18.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L18.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L18.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L18.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L18.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L18.telegramheader.m_mcount = kcg_lit_int32(0);
  outC->_L18.telegramheader.nid_c = kcg_lit_int32(0);
  outC->_L18.telegramheader.nid_bg = kcg_lit_int32(0);
  outC->_L18.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx = 0; idx < 30; idx++) {
    outC->_L18.packets.PacketHeaders[idx].nid_packet = kcg_lit_int32(0);
    outC->_L18.packets.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L18.packets.PacketHeaders[idx].valid = kcg_true;
    outC->_L18.packets.PacketHeaders[idx].startAddress = kcg_lit_int32(0);
    outC->_L18.packets.PacketHeaders[idx].endAddress = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L18.packets.PacketData[idx1] = kcg_lit_int32(0);
  }
  outC->_L17 = kcg_lit_int32(0);
  outC->_L16 = kcg_true;
  outC->_L15 = kcg_lit_int32(0);
  outC->_L14 = kcg_true;
  outC->_L3.badBaliseFlag = kcg_true;
  outC->_L3.BGMessageSent = kcg_true;
  outC->_L3.C_ID = kcg_lit_int32(0);
  outC->_L3.BG_ID = kcg_lit_int32(0);
  outC->_L3.balisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L3.balisePosition.odometerOfBaliseDetection.timestamp = kcg_lit_int32(0);
  outC->_L3.balisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L3.balisePosition.odometerOfBaliseDetection.odo.o_min = kcg_lit_int32(0);
  outC->_L3.balisePosition.odometerOfBaliseDetection.odo.o_max = kcg_lit_int32(0);
  outC->_L3.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L3.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L3.balisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L3.balisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L3.balisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L3.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L3.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L3.balisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L3.balisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L3.balisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L3.positionFirstContact.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L3.positionFirstContact.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->_L3.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L3.positionFirstContact.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->_L3.positionFirstContact.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->_L3.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L3.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L3.positionFirstContact.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L3.positionFirstContact.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L3.positionFirstContact.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L3.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L3.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L3.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L3.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L3.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L3.collectedTelegrams = kcg_lit_int32(0);
  outC->_L3.totalTelegrams = kcg_lit_int32(0);
  outC->_L2.badBaliseFlag = kcg_true;
  outC->_L2.BGMessageSent = kcg_true;
  outC->_L2.C_ID = kcg_lit_int32(0);
  outC->_L2.BG_ID = kcg_lit_int32(0);
  outC->_L2.balisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L2.balisePosition.odometerOfBaliseDetection.timestamp = kcg_lit_int32(0);
  outC->_L2.balisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L2.balisePosition.odometerOfBaliseDetection.odo.o_min = kcg_lit_int32(0);
  outC->_L2.balisePosition.odometerOfBaliseDetection.odo.o_max = kcg_lit_int32(0);
  outC->_L2.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L2.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L2.balisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L2.balisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L2.balisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L2.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L2.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L2.balisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L2.balisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L2.balisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L2.positionFirstContact.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L2.positionFirstContact.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->_L2.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L2.positionFirstContact.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->_L2.positionFirstContact.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->_L2.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L2.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L2.positionFirstContact.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L2.positionFirstContact.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L2.positionFirstContact.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L2.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L2.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L2.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L2.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L2.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L2.collectedTelegrams = kcg_lit_int32(0);
  outC->_L2.totalTelegrams = kcg_lit_int32(0);
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
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void checkSingleBB_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

