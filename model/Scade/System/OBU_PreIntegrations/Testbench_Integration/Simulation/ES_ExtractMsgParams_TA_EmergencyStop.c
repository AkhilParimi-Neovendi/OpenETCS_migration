/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ES_ExtractMsgParams_TA_EmergencyStop.h"

/* TA_EmergencyStop::ES_ExtractMsgParams/ */
void ES_ExtractMsgParams_TA_EmergencyStop(
  /* messageIn/ */
  ReceivedMessage_T_Common_Types_Pkg *messageIn,
  /* receivedESMsg/ */
  kcg_bool receivedESMsg,
  outC_ES_ExtractMsgParams_TA_EmergencyStop *outC)
{
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L1, messageIn);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L2,
    &outC->_L1.Radio_Common_Header);
  outC->_L12 = outC->_L2.d_emergencystop;
  outC->_L11 = outC->_L2.q_dir;
  outC->_L10 = outC->_L2.d_ref;
  outC->d_emergencystop = outC->_L12;
  outC->q_dir = outC->_L11;
  outC->d_ref = outC->_L10;
  outC->_L7 = outC->_L2.q_scale;
  outC->q_scale = outC->_L7;
  outC->_L6 = receivedESMsg;
  outC->_L5 = cNID_EM_NONE_TA_EmergencyStop;
  outC->_L3 = outC->_L2.nid_em;
  /* _L4= */
  if (outC->_L6) {
    outC->_L4 = outC->_L3;
  }
  else {
    outC->_L4 = outC->_L5;
  }
  outC->nid_em = outC->_L4;
}

#ifndef KCG_USER_DEFINED_INIT
void ES_ExtractMsgParams_init_TA_EmergencyStop(
  outC_ES_ExtractMsgParams_TA_EmergencyStop *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L12 = kcg_lit_int32(0);
  outC->_L11 = Q_DIR_Reverse;
  outC->_L10 = kcg_lit_int32(0);
  outC->_L7 = Q_SCALE_10_cm_scale;
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
  outC->_L2.radioDevice = kcg_lit_int32(0);
  outC->_L2.receivedSystemTime = kcg_lit_int32(0);
  outC->_L2.nid_message = kcg_lit_int32(0);
  outC->_L2.t_train = kcg_lit_int32(0);
  outC->_L2.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L2.nid_lrbg = kcg_lit_int32(0);
  outC->_L2.t_train_reference = kcg_lit_int32(0);
  outC->_L2.nid_em = kcg_lit_int32(0);
  outC->_L2.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2.d_sr = kcg_lit_int32(0);
  outC->_L2.t_sh_rqst = kcg_lit_int32(0);
  outC->_L2.d_ref = kcg_lit_int32(0);
  outC->_L2.q_dir = Q_DIR_Reverse;
  outC->_L2.d_emergencystop = kcg_lit_int32(0);
  outC->_L2.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.valid = kcg_true;
  outC->_L1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L1.radioMetadata.t_train_reference = kcg_true;
  outC->_L1.radioMetadata.nid_em = kcg_true;
  outC->_L1.radioMetadata.q_scale = kcg_true;
  outC->_L1.radioMetadata.d_sr = kcg_true;
  outC->_L1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L1.radioMetadata.d_ref = kcg_true;
  outC->_L1.radioMetadata.q_dir = kcg_true;
  outC->_L1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L1.radioMetadata.m_version = kcg_true;
  outC->_L1.BG_Common_Header.valid = kcg_true;
  outC->_L1.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L1.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L1.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L1.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L1.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L1.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L1.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
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
  outC->_L1.sendingRBC.valid = kcg_true;
  outC->_L1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->d_emergencystop = kcg_lit_int32(0);
  outC->q_dir = Q_DIR_Reverse;
  outC->d_ref = kcg_lit_int32(0);
  outC->q_scale = Q_SCALE_10_cm_scale;
  outC->nid_em = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ES_ExtractMsgParams_reset_TA_EmergencyStop(
  outC_ES_ExtractMsgParams_TA_EmergencyStop *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ES_ExtractMsgParams_TA_EmergencyStop.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

