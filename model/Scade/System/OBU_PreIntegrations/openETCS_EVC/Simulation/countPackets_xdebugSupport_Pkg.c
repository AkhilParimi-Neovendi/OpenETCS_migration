/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "countPackets_xdebugSupport_Pkg.h"

/* xdebugSupport_Pkg::countPackets/ */
void countPackets_xdebugSupport_Pkg(
  /* msg/ */
  API_TrackSideInput_T_API_Msg_Pkg *msg,
  outC_countPackets_xdebugSupport_Pkg *outC)
{
  kcg_int32 acc;
  kcg_size idx;
  kcg_int32 noname;

  outC->_L12 = kcg_lit_int32(1);
  outC->_L6 = kcg_lit_int32(0);
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&outC->_L1, msg);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L10, &outC->_L1.packets);
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L2, &outC->_L10.PacketHeaders);
  outC->_L7 = kcg_true;
  outC->_L3 = outC->_L6;
  /* _L5= */
  if (outC->_L7) {
    /* _L5= */
    for (idx = 0; idx < 30; idx++) {
      acc = outC->_L3;
      /* _L5=(xdebugSupport_Pkg::countBasics#1)/ */
      countBasics_xdebugSupport_Pkg(
        acc,
        &outC->_L2[idx],
        &outC->Context_countBasics_1[idx]);
      outC->_L3 = outC->Context_countBasics_1[idx].count;
      outC->_L5 = /* _L5= */(kcg_int32) (idx + 1);
      /* _L5= */
      if (!outC->Context_countBasics_1[idx]._1_continue) {
        break;
      }
    }
  }
  else {
    outC->_L5 = kcg_lit_int32(0);
  }
  outC->_L11 = outC->_L3 - outC->_L12;
  noname = outC->_L5;
  outC->count = outC->_L11;
}

#ifndef KCG_USER_DEFINED_INIT
void countPackets_init_xdebugSupport_Pkg(
  outC_countPackets_xdebugSupport_Pkg *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;

  outC->_L12 = kcg_lit_int32(0);
  outC->_L11 = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 30; idx1++) {
    outC->_L10.PacketHeaders[idx1].nid_packet = kcg_lit_int32(0);
    outC->_L10.PacketHeaders[idx1].q_dir = Q_DIR_Reverse;
    outC->_L10.PacketHeaders[idx1].valid = kcg_true;
    outC->_L10.PacketHeaders[idx1].startAddress = kcg_lit_int32(0);
    outC->_L10.PacketHeaders[idx1].endAddress = kcg_lit_int32(0);
  }
  for (idx2 = 0; idx2 < 500; idx2++) {
    outC->_L10.PacketData[idx2] = kcg_lit_int32(0);
  }
  outC->_L7 = kcg_true;
  outC->_L6 = kcg_lit_int32(0);
  outC->_L5 = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 30; idx3++) {
    outC->_L2[idx3].nid_packet = kcg_lit_int32(0);
    outC->_L2[idx3].q_dir = Q_DIR_Reverse;
    outC->_L2[idx3].valid = kcg_true;
    outC->_L2[idx3].startAddress = kcg_lit_int32(0);
    outC->_L2[idx3].endAddress = kcg_lit_int32(0);
  }
  outC->_L1.valid = kcg_true;
  outC->_L1.systemTimeMsgReceived = kcg_lit_int32(0);
  outC->_L1.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L1.btm_msg.present = kcg_true;
  outC->_L1.btm_msg.checkResult = kcg_true;
  outC->_L1.btm_msg.api_bad_balise_received = kcg_true;
  outC->_L1.btm_msg.api_header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1.btm_msg.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.btm_msg.api_header.q_media = Q_MEDIA_Balise;
  outC->_L1.btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->_L1.btm_msg.api_header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L1.btm_msg.api_header.m_dup = M_DUP_No_duplicates;
  outC->_L1.btm_msg.api_header.m_mcount = kcg_lit_int32(0);
  outC->_L1.btm_msg.api_header.nid_c = kcg_lit_int32(0);
  outC->_L1.btm_msg.api_header.nid_bg = kcg_lit_int32(0);
  outC->_L1.btm_msg.api_header.q_link = Q_LINK_Unlinked;
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L1.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L1.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L1.rtm_msg.present = kcg_true;
  outC->_L1.rtm_msg.apiConsistencyError = kcg_true;
  outC->_L1.rtm_msg.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L1.rtm_msg.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L1.rtm_msg.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L1.rtm_msg.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L1.rtm_msg.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L1.rtm_msg.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L1.rtm_msg.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L1.rtm_msg.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L1.rtm_msg.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.rtm_msg.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L1.rtm_msg.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L1.rtm_msg.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L1.rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L1.rtm_msg.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L1.rtm_msg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
  outC->_L1.rtm_msg.Radio_MetaData.nid_em = kcg_true;
  outC->_L1.rtm_msg.Radio_MetaData.q_scale = kcg_true;
  outC->_L1.rtm_msg.Radio_MetaData.d_sr = kcg_true;
  outC->_L1.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->_L1.rtm_msg.Radio_MetaData.d_ref = kcg_true;
  outC->_L1.rtm_msg.Radio_MetaData.q_dir = kcg_true;
  outC->_L1.rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
  outC->_L1.rtm_msg.Radio_MetaData.m_version = kcg_true;
  outC->_L1.rtm_msg.sendingRBC_Id.valid = kcg_true;
  outC->_L1.rtm_msg.sendingRBC_Id.nid_c = kcg_lit_int32(0);
  outC->_L1.rtm_msg.sendingRBC_Id.rbc_id = kcg_lit_int32(0);
  outC->_L1.rtm_msg.sendingRBC_Id.device_id = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L1.packets.PacketHeaders[idx4].nid_packet = kcg_lit_int32(0);
    outC->_L1.packets.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->_L1.packets.PacketHeaders[idx4].valid = kcg_true;
    outC->_L1.packets.PacketHeaders[idx4].startAddress = kcg_lit_int32(0);
    outC->_L1.packets.PacketHeaders[idx4].endAddress = kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L1.packets.PacketData[idx5] = kcg_lit_int32(0);
  }
  outC->count = kcg_lit_int32(0);
  for (idx = 0; idx < 30; idx++) {
    /* _L5=(xdebugSupport_Pkg::countBasics#1)/ */
    countBasics_init_xdebugSupport_Pkg(&outC->Context_countBasics_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void countPackets_reset_xdebugSupport_Pkg(
  outC_countPackets_xdebugSupport_Pkg *outC)
{
  kcg_size idx;

  for (idx = 0; idx < 30; idx++) {
    /* _L5=(xdebugSupport_Pkg::countBasics#1)/ */
    countBasics_reset_xdebugSupport_Pkg(&outC->Context_countBasics_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** countPackets_xdebugSupport_Pkg.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

