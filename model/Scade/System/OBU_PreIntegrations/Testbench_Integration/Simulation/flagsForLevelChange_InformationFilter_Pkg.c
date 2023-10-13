/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "flagsForLevelChange_InformationFilter_Pkg.h"

/* InformationFilter_Pkg::flagsForLevelChange/ */
void flagsForLevelChange_InformationFilter_Pkg(
  /* ModeLevel/ */
  T_Mode_Level_Level_And_Mode_Types_Pkg *ModeLevel,
  /* actualMessage/ */
  ReceivedMessage_T_Common_Types_Pkg *actualMessage,
  /* inFilterEvents/ */
  filterRelatedEvents_T_Common_Types_Pkg *inFilterEvents,
  outC_flagsForLevelChange_InformationFilter_Pkg *outC)
{
  static T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg tmp;
  static filterRelatedEvents_T_Common_Types_Pkg tmp1;
  static T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg op_call;
  static filterRelatedEvents_T_Common_Types_Pkg _2_op_call;

  outC->_L165 = M_MODE_Trip;
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(&outC->_L152, ModeLevel);
  outC->_L169 = outC->_L152.Mode;
  outC->_L166 = outC->_L169 == outC->_L165;
  outC->_L170 = outC->_L152.newMode;
  outC->_L168 = outC->_L170 & outC->_L166;
  outC->_L171 = outC->_L152.newLevel;
  outC->_L167 = outC->_L171 | outC->_L168;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L155, actualMessage);
  outC->_L154 = outC->_L155.valid;
  outC->_L161 = outC->_L154 | outC->_L167;
  outC->every = outC->_L161;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L158, actualMessage);
  kcg_copy_filterRelatedEvents_T_Common_Types_Pkg(&outC->_L159, inFilterEvents);
  if (outC->every) {
    /* _L157=(InformationFilter_Pkg::flagsFromMessages#1)/ */
    flagsFromMessages_InformationFilter_Pkg(
      outC->_L167,
      &outC->_L158,
      &outC->_L159,
      &outC->Context_flagsFromMessages_1);
    kcg_copy_filterRelatedEvents_T_Common_Types_Pkg(
      &_2_op_call,
      &outC->Context_flagsFromMessages_1.outFilterEvents);
    kcg_copy_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg(
      &op_call,
      &outC->Context_flagsFromMessages_1.IF_toML);
  }
  kcg_copy_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg(
    &outC->_L164,
    (T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg *)
      &cNoFlagsForML_InformationFilter_Pkg);
  if (outC->every) {
    kcg_copy_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg(
      &outC->_L163,
      &op_call);
  }
  else {
    /* _L157= */
    if (outC->init) {
      kcg_copy_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg(
        &tmp,
        &outC->_L164);
    }
    else {
      kcg_copy_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg(
        &tmp,
        &outC->_L163);
    }
    kcg_copy_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg(
      &outC->_L163,
      &tmp);
  }
  kcg_copy_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg(
    &outC->IF_toML,
    &outC->_L163);
  kcg_copy_filterRelatedEvents_T_Common_Types_Pkg(
    &outC->_L160,
    (filterRelatedEvents_T_Common_Types_Pkg *) &cEmptyEvents_InformationFilter_Pkg);
  if (outC->every) {
    kcg_copy_filterRelatedEvents_T_Common_Types_Pkg(&outC->_L157, &_2_op_call);
  }
  else {
    /* _L157= */
    if (outC->init) {
      kcg_copy_filterRelatedEvents_T_Common_Types_Pkg(&tmp1, &outC->_L160);
    }
    else {
      kcg_copy_filterRelatedEvents_T_Common_Types_Pkg(&tmp1, &outC->_L157);
    }
    kcg_copy_filterRelatedEvents_T_Common_Types_Pkg(&outC->_L157, &tmp1);
  }
  kcg_copy_filterRelatedEvents_T_Common_Types_Pkg(
    &outC->outFilterEvents,
    &outC->_L157);
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void flagsForLevelChange_init_InformationFilter_Pkg(
  outC_flagsForLevelChange_InformationFilter_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;

  outC->_L165 = M_MODE_Full_Supervision;
  outC->_L166 = kcg_true;
  outC->_L167 = kcg_true;
  outC->_L168 = kcg_true;
  outC->_L169 = M_MODE_Full_Supervision;
  outC->_L170 = kcg_true;
  outC->_L171 = kcg_true;
  outC->_L164.P12_received = kcg_true;
  outC->_L164.P15_received = kcg_true;
  outC->_L164.P21_received = kcg_true;
  outC->_L164.P27_received = kcg_true;
  outC->_L161 = kcg_true;
  outC->_L160.pendingL1Transition = kcg_true;
  outC->_L160.pendingL12L3Transition = kcg_true;
  outC->_L160.pendingAckOfTrainDataFromRBC = kcg_true;
  outC->_L160.emergencyStopAccepted = kcg_true;
  outC->_L160.lastAckTextMessageId = kcg_lit_int64(0);
  outC->_L160.pendingNTCTransition = kcg_true;
  outC->_L160.SPPAndGradientOnBoard = kcg_true;
  outC->_L160.MACoverNotFullLength = kcg_true;
  outC->_L159.pendingL1Transition = kcg_true;
  outC->_L159.pendingL12L3Transition = kcg_true;
  outC->_L159.pendingAckOfTrainDataFromRBC = kcg_true;
  outC->_L159.emergencyStopAccepted = kcg_true;
  outC->_L159.lastAckTextMessageId = kcg_lit_int64(0);
  outC->_L159.pendingNTCTransition = kcg_true;
  outC->_L159.SPPAndGradientOnBoard = kcg_true;
  outC->_L159.MACoverNotFullLength = kcg_true;
  outC->_L158.valid = kcg_true;
  outC->_L158.source = msrc_undefined_Common_Types_Pkg;
  outC->_L158.radioMetadata.t_train_reference = kcg_true;
  outC->_L158.radioMetadata.nid_em = kcg_true;
  outC->_L158.radioMetadata.q_scale = kcg_true;
  outC->_L158.radioMetadata.d_sr = kcg_true;
  outC->_L158.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L158.radioMetadata.d_ref = kcg_true;
  outC->_L158.radioMetadata.q_dir = kcg_true;
  outC->_L158.radioMetadata.d_emergencystop = kcg_true;
  outC->_L158.radioMetadata.m_version = kcg_true;
  outC->_L158.BG_Common_Header.valid = kcg_true;
  outC->_L158.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L158.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L158.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L158.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L158.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L158.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L158.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L158.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L158.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L158.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L158.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L158.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L158.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L158.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L158.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L158.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L158.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L158.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L158.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L158.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L158.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L158.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L158.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L158.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L158.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L158.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L158.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L158.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L158.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L158.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L158.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L158.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L158.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L158.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L158.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L158.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L158.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L158.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L158.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L158.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L158.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L158.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx = 0; idx < 30; idx++) {
    outC->_L158.packets.PacketHeaders[idx].nid_packet = kcg_lit_int64(0);
    outC->_L158.packets.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L158.packets.PacketHeaders[idx].valid = kcg_true;
    outC->_L158.packets.PacketHeaders[idx].startAddress = kcg_lit_int64(0);
    outC->_L158.packets.PacketHeaders[idx].endAddress = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L158.packets.PacketData[idx1] = kcg_lit_int64(0);
  }
  outC->_L158.sendingRBC.valid = kcg_true;
  outC->_L158.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L158.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L158.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L152.compatibleModeAndLevel = kcg_true;
  outC->_L152.level = M_LEVEL_Level_0;
  outC->_L152.newLevel = kcg_true;
  outC->_L152.Mode = M_MODE_Full_Supervision;
  outC->_L152.newMode = kcg_true;
  outC->_L154 = kcg_true;
  outC->_L155.valid = kcg_true;
  outC->_L155.source = msrc_undefined_Common_Types_Pkg;
  outC->_L155.radioMetadata.t_train_reference = kcg_true;
  outC->_L155.radioMetadata.nid_em = kcg_true;
  outC->_L155.radioMetadata.q_scale = kcg_true;
  outC->_L155.radioMetadata.d_sr = kcg_true;
  outC->_L155.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L155.radioMetadata.d_ref = kcg_true;
  outC->_L155.radioMetadata.q_dir = kcg_true;
  outC->_L155.radioMetadata.d_emergencystop = kcg_true;
  outC->_L155.radioMetadata.m_version = kcg_true;
  outC->_L155.BG_Common_Header.valid = kcg_true;
  outC->_L155.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L155.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L155.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L155.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L155.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L155.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L155.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L155.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L155.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L155.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L155.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L155.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L155.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L155.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L155.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L155.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L155.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L155.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L155.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L155.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L155.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L155.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L155.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L155.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L155.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L155.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L155.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L155.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L155.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L155.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L155.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L155.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L155.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L155.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L155.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L155.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L155.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L155.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L155.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L155.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L155.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L155.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L155.packets.PacketHeaders[idx2].nid_packet = kcg_lit_int64(0);
    outC->_L155.packets.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L155.packets.PacketHeaders[idx2].valid = kcg_true;
    outC->_L155.packets.PacketHeaders[idx2].startAddress = kcg_lit_int64(0);
    outC->_L155.packets.PacketHeaders[idx2].endAddress = kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L155.packets.PacketData[idx3] = kcg_lit_int64(0);
  }
  outC->_L155.sendingRBC.valid = kcg_true;
  outC->_L155.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L155.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L155.sendingRBC.device_id = kcg_lit_int64(0);
  outC->every = kcg_true;
  outC->_L163.P12_received = kcg_true;
  outC->_L163.P15_received = kcg_true;
  outC->_L163.P21_received = kcg_true;
  outC->_L163.P27_received = kcg_true;
  outC->_L157.pendingL1Transition = kcg_true;
  outC->_L157.pendingL12L3Transition = kcg_true;
  outC->_L157.pendingAckOfTrainDataFromRBC = kcg_true;
  outC->_L157.emergencyStopAccepted = kcg_true;
  outC->_L157.lastAckTextMessageId = kcg_lit_int64(0);
  outC->_L157.pendingNTCTransition = kcg_true;
  outC->_L157.SPPAndGradientOnBoard = kcg_true;
  outC->_L157.MACoverNotFullLength = kcg_true;
  outC->init = kcg_true;
  outC->IF_toML.P12_received = kcg_true;
  outC->IF_toML.P15_received = kcg_true;
  outC->IF_toML.P21_received = kcg_true;
  outC->IF_toML.P27_received = kcg_true;
  outC->outFilterEvents.pendingL1Transition = kcg_true;
  outC->outFilterEvents.pendingL12L3Transition = kcg_true;
  outC->outFilterEvents.pendingAckOfTrainDataFromRBC = kcg_true;
  outC->outFilterEvents.emergencyStopAccepted = kcg_true;
  outC->outFilterEvents.lastAckTextMessageId = kcg_lit_int64(0);
  outC->outFilterEvents.pendingNTCTransition = kcg_true;
  outC->outFilterEvents.SPPAndGradientOnBoard = kcg_true;
  outC->outFilterEvents.MACoverNotFullLength = kcg_true;
  /* _L157=(InformationFilter_Pkg::flagsFromMessages#1)/ */
  flagsFromMessages_init_InformationFilter_Pkg(
    &outC->Context_flagsFromMessages_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void flagsForLevelChange_reset_InformationFilter_Pkg(
  outC_flagsForLevelChange_InformationFilter_Pkg *outC)
{
  outC->init = kcg_true;
  /* _L157=(InformationFilter_Pkg::flagsFromMessages#1)/ */
  flagsFromMessages_reset_InformationFilter_Pkg(
    &outC->Context_flagsFromMessages_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_flagsForLevelChange_InformationFilter_Pkg(
  SV_flagsForLevelChange_InformationFilter_Pkg *SV,
  outC_flagsForLevelChange_InformationFilter_Pkg *outC)
{
  kcg_save_SV_flagsFromMessages_InformationFilter_Pkg(
    &SV->Context_flagsFromMessages_1,
    &outC->Context_flagsFromMessages_1);
  kcg_copy_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg(
    &SV->Context__L163,
    &outC->_L163);
  kcg_copy_filterRelatedEvents_T_Common_Types_Pkg(
    &SV->Context__L157,
    &outC->_L157);
  SV->Context_init = outC->init;
}

void kcg_load_SV_flagsForLevelChange_InformationFilter_Pkg(
  outC_flagsForLevelChange_InformationFilter_Pkg *outC,
  SV_flagsForLevelChange_InformationFilter_Pkg *SV)
{
  kcg_load_SV_flagsFromMessages_InformationFilter_Pkg(
    &outC->Context_flagsFromMessages_1,
    &SV->Context_flagsFromMessages_1);
  kcg_copy_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg(
    &outC->_L163,
    &SV->Context__L163);
  kcg_copy_filterRelatedEvents_T_Common_Types_Pkg(
    &outC->_L157,
    &SV->Context__L157);
  outC->init = SV->Context_init;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** flagsForLevelChange_InformationFilter_Pkg.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

