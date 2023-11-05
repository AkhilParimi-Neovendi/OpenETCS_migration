/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "dec_m38_RCM_Utils_Pkg_decoders.h"

/* RCM_Utils_Pkg::decoders::dec_m38/ */
void dec_m38_RCM_Utils_Pkg_decoders(
  /* msg_in/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg *msg_in,
  outC_dec_m38_RCM_Utils_Pkg_decoders *outC)
{
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&outC->_L1, msg_in);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&outC->_L77, &outC->_L1.sendingRBC);
  outC->_L74 = cm38_Initiation_of_a_Communication_Session_Id_Pkg;
  outC->_L73 = outC->_L1.Radio_Common_Header.nid_message;
  outC->_L75 = outC->_L73 == outC->_L74;
  outC->_L70 = msrc_RadioInfillUnit_Common_Types_Pkg;
  outC->_L20 = outC->_L1.source;
  outC->_L67 = outC->_L20 == outC->_L70;
  outC->_L71 = msrc_Euroradio_Common_Types_Pkg;
  outC->_L68 = outC->_L20 == outC->_L71;
  outC->_L72 = outC->_L68 | outC->_L67;
  outC->_L17 = outC->_L1.valid;
  outC->_L69 = outC->_L17 & outC->_L72 & outC->_L75;
  outC->_L76.valid = outC->_L69;
  outC->_L76.msgSrc = outC->_L20;
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&outC->_L76.origin, &outC->_L77);
  kcg_copy_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg(
    &outC->m38_initiationOfComSession,
    &outC->_L76);
}

#ifndef KCG_USER_DEFINED_INIT
void dec_m38_init_RCM_Utils_Pkg_decoders(
  outC_dec_m38_RCM_Utils_Pkg_decoders *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L77.valid = kcg_true;
  outC->_L77.nid_c = kcg_lit_int32(0);
  outC->_L77.rbc_id = kcg_lit_int32(0);
  outC->_L77.device_id = kcg_lit_int32(0);
  outC->_L76.valid = kcg_true;
  outC->_L76.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L76.origin.valid = kcg_true;
  outC->_L76.origin.nid_c = kcg_lit_int32(0);
  outC->_L76.origin.rbc_id = kcg_lit_int32(0);
  outC->_L76.origin.device_id = kcg_lit_int32(0);
  outC->_L75 = kcg_true;
  outC->_L74 = kcg_lit_int32(0);
  outC->_L73 = kcg_lit_int32(0);
  outC->_L67 = kcg_true;
  outC->_L68 = kcg_true;
  outC->_L69 = kcg_true;
  outC->_L70 = msrc_undefined_Common_Types_Pkg;
  outC->_L71 = msrc_undefined_Common_Types_Pkg;
  outC->_L72 = kcg_true;
  outC->_L20 = msrc_undefined_Common_Types_Pkg;
  outC->_L17 = kcg_true;
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
  outC->m38_initiationOfComSession.valid = kcg_true;
  outC->m38_initiationOfComSession.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->m38_initiationOfComSession.origin.valid = kcg_true;
  outC->m38_initiationOfComSession.origin.nid_c = kcg_lit_int32(0);
  outC->m38_initiationOfComSession.origin.rbc_id = kcg_lit_int32(0);
  outC->m38_initiationOfComSession.origin.device_id = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void dec_m38_reset_RCM_Utils_Pkg_decoders(
  outC_dec_m38_RCM_Utils_Pkg_decoders *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** dec_m38_RCM_Utils_Pkg_decoders.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

