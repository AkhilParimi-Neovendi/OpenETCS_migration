/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg.h"

/* Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition/ */
void setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg(
  /* inOldPosition/ */
  centerOfBalisePosition_T_BG_Types_Pkg *inOldPosition,
  /* newTelegram/ */
  Telegram_T_BG_Types_Pkg *newTelegram,
  /* incenterOfBalisePosition/ */
  centerOfBalisePosition_T_BG_Types_Pkg *incenterOfBalisePosition,
  outC_setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg *outC)
{
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(&outC->_L2, inOldPosition);
  outC->_L18 = outC->_L2.odometerOfBaliseDetection.valid;
  outC->_L16 = !outC->_L18;
  outC->_L6 = N_PIG_I_am_the_1st;
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L1, newTelegram);
  outC->_L3 = outC->_L1.telegramheader.n_pig;
  outC->_L5 = outC->_L3 == outC->_L6;
  outC->_L8 = N_PIG_I_am_the_2nd;
  outC->_L9 = outC->_L8 == outC->_L3;
  outC->_L11 = M_DUP_No_duplicates;
  outC->_L10 = outC->_L1.telegramheader.m_dup;
  outC->_L12 = outC->_L10 != outC->_L11;
  outC->_L13 = outC->_L12 & outC->_L9 & outC->_L16;
  outC->_L14 = outC->_L13 | outC->_L5;
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L4,
    incenterOfBalisePosition);
  /* _L7= */
  if (outC->_L14) {
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(&outC->_L7, &outC->_L4);
  }
  else {
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(&outC->_L7, &outC->_L2);
  }
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->outUpdateBGPosition,
    &outC->_L7);
}

#ifndef KCG_USER_DEFINED_INIT
void setCoordinateSystemPosition_init_Receive_TrackSide_Msg_Pkg(
  outC_setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg *outC)
{
  kcg_size idx;
  kcg_size idx1;

  outC->_L18 = kcg_true;
  outC->_L16 = kcg_true;
  outC->_L14 = kcg_true;
  outC->_L13 = kcg_true;
  outC->_L12 = kcg_true;
  outC->_L11 = M_DUP_No_duplicates;
  outC->_L10 = M_DUP_No_duplicates;
  outC->_L8 = N_PIG_I_am_the_1st;
  outC->_L9 = kcg_true;
  outC->_L7.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L7.odometerOfBaliseDetection.timestamp = kcg_lit_int32(0);
  outC->_L7.odometerOfBaliseDetection.odo.o_nominal = kcg_lit_int32(0);
  outC->_L7.odometerOfBaliseDetection.odo.o_min = kcg_lit_int32(0);
  outC->_L7.odometerOfBaliseDetection.odo.o_max = kcg_lit_int32(0);
  outC->_L7.odometerOfBaliseDetection.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L7.odometerOfBaliseDetection.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L7.odometerOfBaliseDetection.speed.v_lower = kcg_lit_int32(0);
  outC->_L7.odometerOfBaliseDetection.speed.v_upper = kcg_lit_int32(0);
  outC->_L7.odometerOfBaliseDetection.acceleration = kcg_lit_int32(0);
  outC->_L7.odometerOfBaliseDetection.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L7.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L7.BG_centerDetectionInaccuraccuracies.nominal = kcg_lit_int32(0);
  outC->_L7.BG_centerDetectionInaccuraccuracies.d_min = kcg_lit_int32(0);
  outC->_L7.BG_centerDetectionInaccuraccuracies.d_max = kcg_lit_int32(0);
  outC->_L6 = N_PIG_I_am_the_1st;
  outC->_L5 = kcg_true;
  outC->_L4.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L4.odometerOfBaliseDetection.timestamp = kcg_lit_int32(0);
  outC->_L4.odometerOfBaliseDetection.odo.o_nominal = kcg_lit_int32(0);
  outC->_L4.odometerOfBaliseDetection.odo.o_min = kcg_lit_int32(0);
  outC->_L4.odometerOfBaliseDetection.odo.o_max = kcg_lit_int32(0);
  outC->_L4.odometerOfBaliseDetection.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L4.odometerOfBaliseDetection.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L4.odometerOfBaliseDetection.speed.v_lower = kcg_lit_int32(0);
  outC->_L4.odometerOfBaliseDetection.speed.v_upper = kcg_lit_int32(0);
  outC->_L4.odometerOfBaliseDetection.acceleration = kcg_lit_int32(0);
  outC->_L4.odometerOfBaliseDetection.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L4.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L4.BG_centerDetectionInaccuraccuracies.nominal = kcg_lit_int32(0);
  outC->_L4.BG_centerDetectionInaccuraccuracies.d_min = kcg_lit_int32(0);
  outC->_L4.BG_centerDetectionInaccuraccuracies.d_max = kcg_lit_int32(0);
  outC->_L3 = N_PIG_I_am_the_1st;
  outC->_L2.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L2.odometerOfBaliseDetection.timestamp = kcg_lit_int32(0);
  outC->_L2.odometerOfBaliseDetection.odo.o_nominal = kcg_lit_int32(0);
  outC->_L2.odometerOfBaliseDetection.odo.o_min = kcg_lit_int32(0);
  outC->_L2.odometerOfBaliseDetection.odo.o_max = kcg_lit_int32(0);
  outC->_L2.odometerOfBaliseDetection.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L2.odometerOfBaliseDetection.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L2.odometerOfBaliseDetection.speed.v_lower = kcg_lit_int32(0);
  outC->_L2.odometerOfBaliseDetection.speed.v_upper = kcg_lit_int32(0);
  outC->_L2.odometerOfBaliseDetection.acceleration = kcg_lit_int32(0);
  outC->_L2.odometerOfBaliseDetection.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L2.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L2.BG_centerDetectionInaccuraccuracies.nominal = kcg_lit_int32(0);
  outC->_L2.BG_centerDetectionInaccuraccuracies.d_min = kcg_lit_int32(0);
  outC->_L2.BG_centerDetectionInaccuraccuracies.d_max = kcg_lit_int32(0);
  outC->_L1.valid = kcg_true;
  outC->_L1.checkResult = kcg_true;
  outC->_L1.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L1.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L1.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L1.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L1.telegramheader.m_mcount = kcg_lit_int32(0);
  outC->_L1.telegramheader.nid_c = kcg_lit_int32(0);
  outC->_L1.telegramheader.nid_bg = kcg_lit_int32(0);
  outC->_L1.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx = 0; idx < 30; idx++) {
    outC->_L1.packets.PacketHeaders[idx].nid_packet = kcg_lit_int32(0);
    outC->_L1.packets.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L1.packets.PacketHeaders[idx].valid = kcg_true;
    outC->_L1.packets.PacketHeaders[idx].startAddress = kcg_lit_int32(0);
    outC->_L1.packets.PacketHeaders[idx].endAddress = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L1.packets.PacketData[idx1] = kcg_lit_int32(0);
  }
  outC->outUpdateBGPosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->outUpdateBGPosition.odometerOfBaliseDetection.timestamp = kcg_lit_int32(
      0);
  outC->outUpdateBGPosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->outUpdateBGPosition.odometerOfBaliseDetection.odo.o_min = kcg_lit_int32(
      0);
  outC->outUpdateBGPosition.odometerOfBaliseDetection.odo.o_max = kcg_lit_int32(
      0);
  outC->outUpdateBGPosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->outUpdateBGPosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->outUpdateBGPosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->outUpdateBGPosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->outUpdateBGPosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->outUpdateBGPosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->outUpdateBGPosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->outUpdateBGPosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->outUpdateBGPosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->outUpdateBGPosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void setCoordinateSystemPosition_reset_Receive_TrackSide_Msg_Pkg(
  outC_setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

