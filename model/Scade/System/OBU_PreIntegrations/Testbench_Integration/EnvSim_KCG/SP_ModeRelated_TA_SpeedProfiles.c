/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SP_ModeRelated_TA_SpeedProfiles.h"

/* TA_SpeedProfiles::SP_ModeRelated/ */
void SP_ModeRelated_TA_SpeedProfiles(
  /* reset/ */
  kcg_bool reset,
  /* SP_available/ */
  kcg_bool SP_available,
  /* MessageIn/ */
  ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* ModeDataIn/ */
  T_Mode_Level_Level_And_Mode_Types_Pkg *ModeDataIn,
  outC_SP_ModeRelated_TA_SpeedProfiles *outC)
{
  static ReceivedMessage_T_Common_Types_Pkg noname;
  static T_Mode_Level_Level_And_Mode_Types_Pkg _1_noname;
  static kcg_bool _2_noname;
  static kcg_bool _3_noname;

  outC->_L8 = SP_available;
  _3_noname = outC->_L8;
  outC->_L7 = kcg_true;
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L5, (SSP_cat_t_TA_MRSP *) &SP_NTC_TA_MRSP);
  kcg_copy_SSP_cat_t_TA_MRSP(
    &outC->_L3,
    (SSP_cat_t_TA_MRSP *) &TOP_SSP_cat_TA_MRSP);
  /* _L6= */
  if (outC->_L7) {
    kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L6, &outC->_L3);
  }
  else {
    kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L6, &outC->_L5);
  }
  outC->_L4 = reset;
  _2_noname = outC->_L4;
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(&outC->_L2, ModeDataIn);
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(&_1_noname, &outC->_L2);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L1, MessageIn);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&noname, &outC->_L1);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->ModeRelated, &outC->_L6);
}

#ifndef KCG_USER_DEFINED_INIT
void SP_ModeRelated_init_TA_SpeedProfiles(
  outC_SP_ModeRelated_TA_SpeedProfiles *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;

  outC->_L8 = kcg_true;
  outC->_L7 = kcg_true;
  for (idx = 0; idx < 50; idx++) {
    outC->_L6[idx].target = kcg_lit_int32(0);
    outC->_L6[idx].speed = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 50; idx1++) {
    outC->_L5[idx1].target = kcg_lit_int32(0);
    outC->_L5[idx1].speed = kcg_lit_int32(0);
  }
  outC->_L4 = kcg_true;
  for (idx2 = 0; idx2 < 50; idx2++) {
    outC->_L3[idx2].target = kcg_lit_int32(0);
    outC->_L3[idx2].speed = kcg_lit_int32(0);
  }
  outC->_L2.compatibleModeAndLevel = kcg_true;
  outC->_L2.level = M_LEVEL_Level_0;
  outC->_L2.newLevel = kcg_true;
  outC->_L2.Mode = M_MODE_Full_Supervision;
  outC->_L2.newMode = kcg_true;
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
  for (idx3 = 0; idx3 < 30; idx3++) {
    outC->_L1.packets.PacketHeaders[idx3].nid_packet = kcg_lit_int32(0);
    outC->_L1.packets.PacketHeaders[idx3].q_dir = Q_DIR_Reverse;
    outC->_L1.packets.PacketHeaders[idx3].valid = kcg_true;
    outC->_L1.packets.PacketHeaders[idx3].startAddress = kcg_lit_int32(0);
    outC->_L1.packets.PacketHeaders[idx3].endAddress = kcg_lit_int32(0);
  }
  for (idx4 = 0; idx4 < 500; idx4++) {
    outC->_L1.packets.PacketData[idx4] = kcg_lit_int32(0);
  }
  outC->_L1.sendingRBC.valid = kcg_true;
  outC->_L1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L1.sendingRBC.device_id = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 50; idx5++) {
    outC->ModeRelated[idx5].target = kcg_lit_int32(0);
    outC->ModeRelated[idx5].speed = kcg_lit_int32(0);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SP_ModeRelated_reset_TA_SpeedProfiles(
  outC_SP_ModeRelated_TA_SpeedProfiles *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SP_ModeRelated_TA_SpeedProfiles.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

