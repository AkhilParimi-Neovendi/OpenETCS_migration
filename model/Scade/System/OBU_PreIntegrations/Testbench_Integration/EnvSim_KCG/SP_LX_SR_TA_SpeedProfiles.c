/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SP_LX_SR_TA_SpeedProfiles.h"

/* TA_SpeedProfiles::SP_LX_SR/ */
void SP_LX_SR_TA_SpeedProfiles(
  /* reset/ */
  kcg_bool reset,
  /* PacketsIn/ */
  ReceivedMessage_T_Common_Types_Pkg *PacketsIn,
  outC_SP_LX_SR_TA_SpeedProfiles *outC)
{
  static ReceivedMessage_T_Common_Types_Pkg noname;
  static kcg_bool _1_noname;

  outC->_L6 = reset;
  _1_noname = outC->_L6;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L4, PacketsIn);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&noname, &outC->_L4);
  kcg_copy_SSP_cat_t_TA_MRSP(
    &outC->_L5,
    (SSP_cat_t_TA_MRSP *) &TOP_SSP_cat_TA_MRSP);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->LX_SR, &outC->_L5);
}

#ifndef KCG_USER_DEFINED_INIT
void SP_LX_SR_init_TA_SpeedProfiles(outC_SP_LX_SR_TA_SpeedProfiles *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;

  outC->_L6 = kcg_true;
  for (idx = 0; idx < 50; idx++) {
    outC->_L5[idx].target = kcg_lit_int32(0);
    outC->_L5[idx].speed = kcg_lit_int32(0);
  }
  outC->_L4.valid = kcg_true;
  outC->_L4.source = msrc_undefined_Common_Types_Pkg;
  outC->_L4.radioMetadata.t_train_reference = kcg_true;
  outC->_L4.radioMetadata.nid_em = kcg_true;
  outC->_L4.radioMetadata.q_scale = kcg_true;
  outC->_L4.radioMetadata.d_sr = kcg_true;
  outC->_L4.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L4.radioMetadata.d_ref = kcg_true;
  outC->_L4.radioMetadata.q_dir = kcg_true;
  outC->_L4.radioMetadata.d_emergencystop = kcg_true;
  outC->_L4.radioMetadata.m_version = kcg_true;
  outC->_L4.BG_Common_Header.valid = kcg_true;
  outC->_L4.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L4.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L4.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L4.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L4.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L4.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L4.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L4.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L4.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L4.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L4.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L4.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L4.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L4.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L4.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L4.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L4.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L4.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L4.BG_Common_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L4.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L4.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L4.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L4.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L4.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L4.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L4.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L4.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L4.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L4.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L4.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L4.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L4.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L4.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L4.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L4.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L4.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L4.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L4.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L4.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L4.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L4.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L4.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx1 = 0; idx1 < 30; idx1++) {
    outC->_L4.packets.PacketHeaders[idx1].nid_packet = kcg_lit_int32(0);
    outC->_L4.packets.PacketHeaders[idx1].q_dir = Q_DIR_Reverse;
    outC->_L4.packets.PacketHeaders[idx1].valid = kcg_true;
    outC->_L4.packets.PacketHeaders[idx1].startAddress = kcg_lit_int32(0);
    outC->_L4.packets.PacketHeaders[idx1].endAddress = kcg_lit_int32(0);
  }
  for (idx2 = 0; idx2 < 500; idx2++) {
    outC->_L4.packets.PacketData[idx2] = kcg_lit_int32(0);
  }
  outC->_L4.sendingRBC.valid = kcg_true;
  outC->_L4.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L4.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L4.sendingRBC.device_id = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 50; idx3++) {
    outC->LX_SR[idx3].target = kcg_lit_int32(0);
    outC->LX_SR[idx3].speed = kcg_lit_int32(0);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SP_LX_SR_reset_TA_SpeedProfiles(outC_SP_LX_SR_TA_SpeedProfiles *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SP_LX_SR_TA_SpeedProfiles.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

