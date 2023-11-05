/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "checkRBCSystemVersion_trainData_pkg.h"

/* trainData_pkg::checkRBCSystemVersion/ */
void checkRBCSystemVersion_trainData_pkg(
  /* trackMessages/ */
  ReceivedMessage_T_Common_Types_Pkg *trackMessages,
  /* lastStatus/ */
  trainDataStatus_T_trainData_Types_pkg *lastStatus,
  outC_checkRBCSystemVersion_trainData_pkg *outC)
{
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(&outC->_L28, lastStatus);
  outC->_L29 = outC->_L28.RBCsystemVersionOnboard;
  outC->_L12 = cm32_RBC_RIU_System_Version_Id_Pkg;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L8, trackMessages);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L7,
    &outC->_L8.Radio_Common_Header);
  outC->_L10 = outC->_L7.nid_message;
  outC->_L9 = outC->_L10 == outC->_L12;
  outC->_L4 = msrc_Euroradio_Common_Types_Pkg;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L1, trackMessages);
  outC->_L3 = outC->_L1.source;
  outC->_L5 = outC->_L3 == outC->_L4;
  outC->_L2 = outC->_L1.valid;
  outC->_L6 = outC->_L2 & outC->_L5 & outC->_L9;
  outC->_L26 = outC->_L6 | outC->_L29;
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(&outC->_L27, lastStatus);
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(&outC->_L30, &outC->_L27);
  if (kcg_true) {
    outC->_L30.RBCsystemVersionOnboard = outC->_L26;
  }
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(
    &outC->updatedStatus,
    &outC->_L30);
}

#ifndef KCG_USER_DEFINED_INIT
void checkRBCSystemVersion_init_trainData_pkg(
  outC_checkRBCSystemVersion_trainData_pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;

  outC->_L30.valid = kcg_true;
  outC->_L30.validatedByDriver = kcg_true;
  outC->_L30.RBCsystemVersionOnboard = kcg_true;
  outC->_L30.validatedbyRBC = kcg_true;
  outC->_L30.waitingForRBCResponse = kcg_true;
  outC->_L30.driverIsModificationTrainData = kcg_true;
  outC->_L30.timeStampValidateToRBC = kcg_lit_int32(0);
  outC->_L29 = kcg_true;
  outC->_L28.valid = kcg_true;
  outC->_L28.validatedByDriver = kcg_true;
  outC->_L28.RBCsystemVersionOnboard = kcg_true;
  outC->_L28.validatedbyRBC = kcg_true;
  outC->_L28.waitingForRBCResponse = kcg_true;
  outC->_L28.driverIsModificationTrainData = kcg_true;
  outC->_L28.timeStampValidateToRBC = kcg_lit_int32(0);
  outC->_L27.valid = kcg_true;
  outC->_L27.validatedByDriver = kcg_true;
  outC->_L27.RBCsystemVersionOnboard = kcg_true;
  outC->_L27.validatedbyRBC = kcg_true;
  outC->_L27.waitingForRBCResponse = kcg_true;
  outC->_L27.driverIsModificationTrainData = kcg_true;
  outC->_L27.timeStampValidateToRBC = kcg_lit_int32(0);
  outC->_L26 = kcg_true;
  outC->_L12 = kcg_lit_int32(0);
  outC->_L10 = kcg_lit_int32(0);
  outC->_L9 = kcg_true;
  outC->_L8.valid = kcg_true;
  outC->_L8.source = msrc_undefined_Common_Types_Pkg;
  outC->_L8.radioMetadata.t_train_reference = kcg_true;
  outC->_L8.radioMetadata.nid_em = kcg_true;
  outC->_L8.radioMetadata.q_scale = kcg_true;
  outC->_L8.radioMetadata.d_sr = kcg_true;
  outC->_L8.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L8.radioMetadata.d_ref = kcg_true;
  outC->_L8.radioMetadata.q_dir = kcg_true;
  outC->_L8.radioMetadata.d_emergencystop = kcg_true;
  outC->_L8.radioMetadata.m_version = kcg_true;
  outC->_L8.BG_Common_Header.valid = kcg_true;
  outC->_L8.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L8.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L8.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L8.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L8.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L8.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L8.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L8.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L8.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L8.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L8.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L8.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L8.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L8.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L8.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L8.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L8.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L8.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L8.BG_Common_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L8.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L8.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L8.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L8.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L8.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L8.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L8.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L8.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L8.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L8.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L8.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L8.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L8.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L8.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L8.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L8.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L8.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L8.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L8.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L8.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L8.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L8.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L8.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx = 0; idx < 30; idx++) {
    outC->_L8.packets.PacketHeaders[idx].nid_packet = kcg_lit_int32(0);
    outC->_L8.packets.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L8.packets.PacketHeaders[idx].valid = kcg_true;
    outC->_L8.packets.PacketHeaders[idx].startAddress = kcg_lit_int32(0);
    outC->_L8.packets.PacketHeaders[idx].endAddress = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L8.packets.PacketData[idx1] = kcg_lit_int32(0);
  }
  outC->_L8.sendingRBC.valid = kcg_true;
  outC->_L8.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L8.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L8.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L7.radioDevice = kcg_lit_int32(0);
  outC->_L7.receivedSystemTime = kcg_lit_int32(0);
  outC->_L7.nid_message = kcg_lit_int32(0);
  outC->_L7.t_train = kcg_lit_int32(0);
  outC->_L7.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L7.nid_lrbg = kcg_lit_int32(0);
  outC->_L7.t_train_reference = kcg_lit_int32(0);
  outC->_L7.nid_em = kcg_lit_int32(0);
  outC->_L7.q_scale = Q_SCALE_10_cm_scale;
  outC->_L7.d_sr = kcg_lit_int32(0);
  outC->_L7.t_sh_rqst = kcg_lit_int32(0);
  outC->_L7.d_ref = kcg_lit_int32(0);
  outC->_L7.q_dir = Q_DIR_Reverse;
  outC->_L7.d_emergencystop = kcg_lit_int32(0);
  outC->_L7.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L4 = msrc_undefined_Common_Types_Pkg;
  outC->_L3 = msrc_undefined_Common_Types_Pkg;
  outC->_L2 = kcg_true;
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
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L1.packets.PacketHeaders[idx2].nid_packet = kcg_lit_int32(0);
    outC->_L1.packets.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L1.packets.PacketHeaders[idx2].valid = kcg_true;
    outC->_L1.packets.PacketHeaders[idx2].startAddress = kcg_lit_int32(0);
    outC->_L1.packets.PacketHeaders[idx2].endAddress = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L1.packets.PacketData[idx3] = kcg_lit_int32(0);
  }
  outC->_L1.sendingRBC.valid = kcg_true;
  outC->_L1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->updatedStatus.valid = kcg_true;
  outC->updatedStatus.validatedByDriver = kcg_true;
  outC->updatedStatus.RBCsystemVersionOnboard = kcg_true;
  outC->updatedStatus.validatedbyRBC = kcg_true;
  outC->updatedStatus.waitingForRBCResponse = kcg_true;
  outC->updatedStatus.driverIsModificationTrainData = kcg_true;
  outC->updatedStatus.timeStampValidateToRBC = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void checkRBCSystemVersion_reset_trainData_pkg(
  outC_checkRBCSystemVersion_trainData_pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** checkRBCSystemVersion_trainData_pkg.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

