/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "countPacketsMsg_xdebugSupport_Pkg.h"

/* xdebugSupport_Pkg::countPacketsMsg/ */
void countPacketsMsg_xdebugSupport_Pkg(
  /* Message/ */
  ReceivedMessage_T_Common_Types_Pkg *Message,
  outC_countPacketsMsg_xdebugSupport_Pkg *outC)
{
  static kcg_int64 acc;
  static kcg_size idx;
  static kcg_int64 noname;

  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L13, Message);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L10, &outC->_L13.packets);
  outC->_L6 = kcg_lit_int64(0);
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
      outC->_L5 = /* _L5= */(kcg_int64) (idx + 1);
      /* _L5= */
      if (!outC->Context_countBasics_1[idx]._1_continue) {
        break;
      }
    }
  }
  else {
    outC->_L5 = kcg_lit_int64(0);
  }
  noname = outC->_L5;
  outC->count = outC->_L3;
}

#ifndef KCG_USER_DEFINED_INIT
void countPacketsMsg_init_xdebugSupport_Pkg(
  outC_countPacketsMsg_xdebugSupport_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;

  outC->_L13.valid = kcg_true;
  outC->_L13.source = msrc_undefined_Common_Types_Pkg;
  outC->_L13.radioMetadata.t_train_reference = kcg_true;
  outC->_L13.radioMetadata.nid_em = kcg_true;
  outC->_L13.radioMetadata.q_scale = kcg_true;
  outC->_L13.radioMetadata.d_sr = kcg_true;
  outC->_L13.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L13.radioMetadata.d_ref = kcg_true;
  outC->_L13.radioMetadata.q_dir = kcg_true;
  outC->_L13.radioMetadata.d_emergencystop = kcg_true;
  outC->_L13.radioMetadata.m_version = kcg_true;
  outC->_L13.BG_Common_Header.valid = kcg_true;
  outC->_L13.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L13.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L13.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L13.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L13.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L13.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L13.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L13.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L13.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L13.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L13.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L13.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L13.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L13.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L13.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L13.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L13.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L13.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L13.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L13.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L13.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L13.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L13.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L13.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L13.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L13.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L13.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L13.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L13.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L13.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L13.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L13.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L13.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L13.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L13.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L13.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L13.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L13.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L13.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L13.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L13.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L13.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx1 = 0; idx1 < 30; idx1++) {
    outC->_L13.packets.PacketHeaders[idx1].nid_packet = kcg_lit_int64(0);
    outC->_L13.packets.PacketHeaders[idx1].q_dir = Q_DIR_Reverse;
    outC->_L13.packets.PacketHeaders[idx1].valid = kcg_true;
    outC->_L13.packets.PacketHeaders[idx1].startAddress = kcg_lit_int64(0);
    outC->_L13.packets.PacketHeaders[idx1].endAddress = kcg_lit_int64(0);
  }
  for (idx2 = 0; idx2 < 500; idx2++) {
    outC->_L13.packets.PacketData[idx2] = kcg_lit_int64(0);
  }
  outC->_L13.sendingRBC.valid = kcg_true;
  outC->_L13.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L13.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L13.sendingRBC.device_id = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 30; idx3++) {
    outC->_L10.PacketHeaders[idx3].nid_packet = kcg_lit_int64(0);
    outC->_L10.PacketHeaders[idx3].q_dir = Q_DIR_Reverse;
    outC->_L10.PacketHeaders[idx3].valid = kcg_true;
    outC->_L10.PacketHeaders[idx3].startAddress = kcg_lit_int64(0);
    outC->_L10.PacketHeaders[idx3].endAddress = kcg_lit_int64(0);
  }
  for (idx4 = 0; idx4 < 500; idx4++) {
    outC->_L10.PacketData[idx4] = kcg_lit_int64(0);
  }
  outC->_L7 = kcg_true;
  outC->_L6 = kcg_lit_int64(0);
  outC->_L5 = kcg_lit_int64(0);
  outC->_L3 = kcg_lit_int64(0);
  for (idx5 = 0; idx5 < 30; idx5++) {
    outC->_L2[idx5].nid_packet = kcg_lit_int64(0);
    outC->_L2[idx5].q_dir = Q_DIR_Reverse;
    outC->_L2[idx5].valid = kcg_true;
    outC->_L2[idx5].startAddress = kcg_lit_int64(0);
    outC->_L2[idx5].endAddress = kcg_lit_int64(0);
  }
  outC->count = kcg_lit_int64(0);
  for (idx = 0; idx < 30; idx++) {
    /* _L5=(xdebugSupport_Pkg::countBasics#1)/ */
    countBasics_init_xdebugSupport_Pkg(&outC->Context_countBasics_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void countPacketsMsg_reset_xdebugSupport_Pkg(
  outC_countPacketsMsg_xdebugSupport_Pkg *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 30; idx++) {
    /* _L5=(xdebugSupport_Pkg::countBasics#1)/ */
    countBasics_reset_xdebugSupport_Pkg(&outC->Context_countBasics_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** countPacketsMsg_xdebugSupport_Pkg.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

