/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "collectRadioOutput_radioOutput_Pkg.h"

/* radioOutput_Pkg::collectRadioOutput/ */
void collectRadioOutput_radioOutput_Pkg(
  /* MessageBus/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* insafeSessionEstablished/ */
  kcg_bool insafeSessionEstablished,
  /* inModeAndLevel/ */
  T_Mode_Level_Level_And_Mode_Types_Pkg *inModeAndLevel,
  /* mobileRadioStatus/ */
  morcStatus_T_RCM_Session_Types_Pkg *mobileRadioStatus,
  /* mobileConnectionCMD/ */
  mobileConnectionCmd_T_RCM_Types_Pkg *mobileConnectionCMD,
  /* mobileRegistrationCMD/ */
  mobileRegistrationCmd_T_RCM_Types_Pkg *mobileRegistrationCMD,
  /* inVersion/ */
  M_VERSION inVersion,
  /* inT_TRAIN/ */
  T_TRAIN inT_TRAIN,
  outC_collectRadioOutput_radioOutput_Pkg *outC)
{
  static M_VERSION noname;
  static T_TRAIN _1_noname;
  /* RTMisActive/ */
  static kcg_bool last_RTMisActive;

  last_RTMisActive = outC->RTMisActive;
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&outC->_L24, mobileRadioStatus);
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &outC->_L25,
    &outC->_L24.session);
  outC->_L41 = outC->_L25.phase;
  outC->_L40 = outC->_L25.valid;
  kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(&outC->_L36, mobileConnectionCMD);
  kcg_copy_mobileRegistrationCmd_T_RCM_Types_Pkg(
    &outC->_L37,
    mobileRegistrationCMD);
  /* _L22=(radioOutput_Pkg::mapCMDToRTM#1)/ */
  mapCMDToRTM_radioOutput_Pkg(
    &outC->_L36,
    &outC->_L37,
    &outC->Context_mapCMDToRTM_1);
  kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(
    &outC->_L22,
    &outC->Context_mapCMDToRTM_1.toRTM);
  outC->_L39 = outC->Context_mapCMDToRTM_1.outRadio;
  outC->_L38 = outC->Context_mapCMDToRTM_1.outMN;
  outC->outMN = outC->_L38;
  outC->outRadio = outC->_L39;
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(&outC->_L35, inModeAndLevel);
  outC->_L34 = insafeSessionEstablished;
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&outC->_L1, MessageBus);
  outC->_L30 = last_RTMisActive;
  outC->_L28 = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L27 = outC->_L41 != outC->_L28;
  /* _L29= */
  if (outC->_L40) {
    outC->_L29 = outC->_L27;
  }
  else {
    outC->_L29 = outC->_L30;
  }
  outC->RTMisActive = outC->_L29;
  outC->_L32 = outC->RTMisActive;
  /* _L31=(TM_lib_internal::BufferOutput#1)/ */
  BufferOutput_TM_lib_internal(
    &outC->_L1,
    outC->_L32,
    &outC->Context_BufferOutput_1);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->_L31,
    &outC->Context_BufferOutput_1.Out);
  /* _L33=(RadioSupport_Pkg::patchMsgFlow#1)/ */
  patchMsgFlow_RadioSupport_Pkg(
    &outC->_L31,
    outC->_L34,
    &outC->_L35,
    &outC->Context_patchMsgFlow_1);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->_L33,
    &outC->Context_patchMsgFlow_1.toRBC);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&outC->toRBC, &outC->_L33);
  kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(
    &outC->API_RTM_management,
    &outC->_L22);
  outC->_L20 = inT_TRAIN;
  outC->_L19 = inVersion;
  _1_noname = outC->_L20;
  noname = outC->_L19;
}

#ifndef KCG_USER_DEFINED_INIT
void collectRadioOutput_init_radioOutput_Pkg(
  outC_collectRadioOutput_radioOutput_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;

  outC->_L41 = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L40 = kcg_true;
  outC->_L39 = kcg_lit_int64(0);
  outC->_L38 = kcg_lit_int64(0);
  outC->_L37.valid = kcg_true;
  outC->_L37.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L37.action = mra_nop_RCM_Types_Pkg;
  outC->_L37.network_id = kcg_lit_int64(0);
  outC->_L36.valid = kcg_true;
  outC->_L36.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L36.action = mca_nop_RCM_Types_Pkg;
  outC->_L36.nid_radio = kcg_lit_int64(0);
  outC->_L35.compatibleModeAndLevel = kcg_true;
  outC->_L35.level = M_LEVEL_Level_0;
  outC->_L35.newLevel = kcg_true;
  outC->_L35.Mode = M_MODE_Full_Supervision;
  outC->_L35.newMode = kcg_true;
  outC->_L34 = kcg_true;
  outC->_L33.Message.valid = kcg_true;
  outC->_L33.Message.nid_message = kcg_lit_int64(0);
  outC->_L33.Message.l_message = kcg_lit_int64(0);
  outC->_L33.Message.t_train = kcg_lit_int64(0);
  outC->_L33.Message.nid_engine = kcg_lit_int64(0);
  outC->_L33.Message.field1 = kcg_lit_int64(0);
  outC->_L33.Message.field2 = kcg_lit_int64(0);
  outC->_L33.Message.field3 = kcg_lit_int64(0);
  for (idx = 0; idx < 50; idx++) {
    outC->_L33.OptionalPackets[idx] = kcg_lit_int64(0);
  }
  outC->_L32 = kcg_true;
  outC->_L31.Message.valid = kcg_true;
  outC->_L31.Message.nid_message = kcg_lit_int64(0);
  outC->_L31.Message.l_message = kcg_lit_int64(0);
  outC->_L31.Message.t_train = kcg_lit_int64(0);
  outC->_L31.Message.nid_engine = kcg_lit_int64(0);
  outC->_L31.Message.field1 = kcg_lit_int64(0);
  outC->_L31.Message.field2 = kcg_lit_int64(0);
  outC->_L31.Message.field3 = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 50; idx1++) {
    outC->_L31.OptionalPackets[idx1] = kcg_lit_int64(0);
  }
  outC->_L30 = kcg_true;
  outC->_L29 = kcg_true;
  outC->_L28 = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L27 = kcg_true;
  outC->_L25.valid = kcg_true;
  outC->_L25.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L25.nid_c = kcg_lit_int64(0);
  outC->_L25.nid_rbc = kcg_lit_int64(0);
  outC->_L25.nid_radio = kcg_lit_int64(0);
  outC->_L24.registration.valid = kcg_true;
  outC->_L24.registration.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L24.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L24.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L24.registration.nid_mn = kcg_lit_int64(0);
  outC->_L24.connection.valid = kcg_true;
  outC->_L24.connection.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L24.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L24.connection.nid_radio = kcg_lit_int64(0);
  outC->_L24.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L24.connection.connectionLost = kcg_true;
  outC->_L24.connection.isInRadioHole = kcg_true;
  outC->_L24.session.valid = kcg_true;
  outC->_L24.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L24.session.nid_c = kcg_lit_int64(0);
  outC->_L24.session.nid_rbc = kcg_lit_int64(0);
  outC->_L24.session.nid_radio = kcg_lit_int64(0);
  outC->_L22.valid = kcg_true;
  outC->_L22.cmd = cmdr_not_relevant_API_RadioCommunication_Pkg;
  outC->_L22.networkID = kcg_lit_int64(0);
  outC->_L20 = kcg_lit_int64(0);
  outC->_L19 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->_L1[idx3].Message.valid = kcg_true;
    outC->_L1[idx3].Message.nid_message = kcg_lit_int64(0);
    outC->_L1[idx3].Message.l_message = kcg_lit_int64(0);
    outC->_L1[idx3].Message.t_train = kcg_lit_int64(0);
    outC->_L1[idx3].Message.nid_engine = kcg_lit_int64(0);
    outC->_L1[idx3].Message.field1 = kcg_lit_int64(0);
    outC->_L1[idx3].Message.field2 = kcg_lit_int64(0);
    outC->_L1[idx3].Message.field3 = kcg_lit_int64(0);
    for (idx2 = 0; idx2 < 50; idx2++) {
      outC->_L1[idx3].OptionalPackets[idx2] = kcg_lit_int64(0);
    }
  }
  outC->outMN = kcg_lit_int64(0);
  outC->outRadio = kcg_lit_int64(0);
  outC->API_RTM_management.valid = kcg_true;
  outC->API_RTM_management.cmd = cmdr_not_relevant_API_RadioCommunication_Pkg;
  outC->API_RTM_management.networkID = kcg_lit_int64(0);
  outC->toRBC.Message.valid = kcg_true;
  outC->toRBC.Message.nid_message = kcg_lit_int64(0);
  outC->toRBC.Message.l_message = kcg_lit_int64(0);
  outC->toRBC.Message.t_train = kcg_lit_int64(0);
  outC->toRBC.Message.nid_engine = kcg_lit_int64(0);
  outC->toRBC.Message.field1 = kcg_lit_int64(0);
  outC->toRBC.Message.field2 = kcg_lit_int64(0);
  outC->toRBC.Message.field3 = kcg_lit_int64(0);
  for (idx4 = 0; idx4 < 50; idx4++) {
    outC->toRBC.OptionalPackets[idx4] = kcg_lit_int64(0);
  }
  /* _L33=(RadioSupport_Pkg::patchMsgFlow#1)/ */
  patchMsgFlow_init_RadioSupport_Pkg(&outC->Context_patchMsgFlow_1);
  /* _L31=(TM_lib_internal::BufferOutput#1)/ */
  BufferOutput_init_TM_lib_internal(&outC->Context_BufferOutput_1);
  /* _L22=(radioOutput_Pkg::mapCMDToRTM#1)/ */
  mapCMDToRTM_init_radioOutput_Pkg(&outC->Context_mapCMDToRTM_1);
  outC->RTMisActive = kcg_false;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void collectRadioOutput_reset_radioOutput_Pkg(
  outC_collectRadioOutput_radioOutput_Pkg *outC)
{
  /* _L33=(RadioSupport_Pkg::patchMsgFlow#1)/ */
  patchMsgFlow_reset_RadioSupport_Pkg(&outC->Context_patchMsgFlow_1);
  /* _L31=(TM_lib_internal::BufferOutput#1)/ */
  BufferOutput_reset_TM_lib_internal(&outC->Context_BufferOutput_1);
  /* _L22=(radioOutput_Pkg::mapCMDToRTM#1)/ */
  mapCMDToRTM_reset_radioOutput_Pkg(&outC->Context_mapCMDToRTM_1);
  outC->RTMisActive = kcg_false;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_collectRadioOutput_radioOutput_Pkg(
  SV_collectRadioOutput_radioOutput_Pkg *SV,
  outC_collectRadioOutput_radioOutput_Pkg *outC)
{
  kcg_save_SV_mapCMDToRTM_radioOutput_Pkg(
    &SV->Context_mapCMDToRTM_1,
    &outC->Context_mapCMDToRTM_1);
  kcg_save_SV_BufferOutput_TM_lib_internal(
    &SV->Context_BufferOutput_1,
    &outC->Context_BufferOutput_1);
  SV->Context_RTMisActive = outC->RTMisActive;
}

void kcg_load_SV_collectRadioOutput_radioOutput_Pkg(
  outC_collectRadioOutput_radioOutput_Pkg *outC,
  SV_collectRadioOutput_radioOutput_Pkg *SV)
{
  kcg_load_SV_mapCMDToRTM_radioOutput_Pkg(
    &outC->Context_mapCMDToRTM_1,
    &SV->Context_mapCMDToRTM_1);
  kcg_load_SV_BufferOutput_TM_lib_internal(
    &outC->Context_BufferOutput_1,
    &SV->Context_BufferOutput_1);
  outC->RTMisActive = SV->Context_RTMisActive;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** collectRadioOutput_radioOutput_Pkg.c
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

