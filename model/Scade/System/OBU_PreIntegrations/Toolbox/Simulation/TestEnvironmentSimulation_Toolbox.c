/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TestEnvironmentSimulation_Toolbox.h"

/* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete/ */
void TestEnvironmentSimulation_Toolbox(
  inC_TestEnvironmentSimulation_Toolbox *inC,
  outC_TestEnvironmentSimulation_Toolbox *outC)
{
  M_MODE noname;
  M_LEVEL _1_noname;
  connectionStatusRadioUnit_T_API_RadioCommunication_Pkg _2_noname;
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg _3_noname;
  mobileHWStatus_Type_MoRC_Pck _4_noname;
  kcg_bool _5_noname;
  kcg_float64 _6_noname;
  CompressedPackets_T_Common_Types_Pkg _7_noname;
  CompressedBaliseMessage_TM _8_noname;
  CompressedRadioMessage_TM _9_noname;
  M_TrainTrack_Message_T_TM_radio_messages _10_noname;
  /* API_currentTimestamp/ */
  T_internal_Type_Obu_BasicTypes_Pkg last_API_currentTimestamp;
  /* API_currentOdometrie/ */
  odometry_T_Obu_BasicTypes_Pkg last_API_currentOdometrie;
  /* API_currentPositionInCm/ */
  L_internal_Type_Obu_BasicTypes_Pkg last_API_currentPositionInCm;
  /* GUI_currentVelocityInKmH/ */
  kcg_float64 last_GUI_currentVelocityInKmH;

  last_API_currentTimestamp = outC->API_currentTimestamp;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(
    &last_API_currentOdometrie,
    &outC->API_currentOdometrie);
  last_API_currentPositionInCm = outC->API_currentPositionInCm;
  /* GUI_currentVelocityInKmH/ */
  if (outC->init) {
    last_GUI_currentVelocityInKmH = inC->GUI_initialVelocity;
  }
  else {
    last_GUI_currentVelocityInKmH = outC->GUI_currentVelocityInKmH;
  }
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->_L200,
    &inC->EVC_radioMessageToRBC_nextGen);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&_10_noname, &outC->_L200);
  kcg_copy_DynamicConfig_T(
    &outC->_L141,
    (DynamicConfig_T *) &DYNAMIC_CONFIG_UTRECHT_AMSTERDAM);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->_L208,
    (M_TrainTrack_Message_T_TM_radio_messages *)
      &cEmptyRadioMessageToRBC_Message_nextGen_Toolbox);
  /* _L205= */
  if (outC->init) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&outC->_L205, &outC->_L208);
  }
  else {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&outC->_L205, &outC->_L185);
  }
  /* _L142= */
  if (outC->init) {
    kcg_copy_CompressedRadioMessage_TM(
      &outC->_L142,
      (CompressedRadioMessage_TM *) &RADIO_TRACK_TRAIN_MESSAGE_DEFAULT);
  }
  else {
    kcg_copy_CompressedRadioMessage_TM(&outC->_L142, &outC->_L202);
  }
  /* _L138=(RBC_Model_Pkg::RBC_New#1)/ */
  RBC_New_RBC_Model_Pkg(
    &outC->_L141,
    &outC->_L205,
    &outC->_L142,
    &outC->Context_RBC_New_1);
  kcg_copy_SessionManagement_T(
    &outC->_L138,
    &outC->Context_RBC_New_1.outSessionManagement);
  kcg_copy_CompressedRadioMessage_TM(
    &outC->_L139,
    &outC->Context_RBC_New_1.outRadioTrackTrainMessage);
  kcg_copy_Clock_T(&outC->_L140, &outC->Context_RBC_New_1.outClock);
  kcg_copy_CompressedRadioMessage_TM(&outC->compressedRadioMessage, &outC->_L139);
  kcg_copy_CompressedRadioMessage_TM(&outC->_L199, &outC->compressedRadioMessage);
  kcg_copy_CompressedRadioMessage_TM(&_9_noname, &outC->_L199);
  outC->_L145 = kcg_lit_float64(100.0);
  outC->_L41 = last_API_currentPositionInCm;
  outC->_L110 = /* _L110= */(kcg_float64) outC->_L41;
  outC->_L144 = outC->_L110 / outC->_L145;
  /* _L137=(RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper#1)/ */
  _34_UtrechtAmsterdamScenarioS_RBC_Scenario_Pkg(
    &outC->_L138,
    &outC->_L140,
    &outC->Context_UtrechtAmsterdamScenarioStory00AWrapper_1);
  outC->_L137 =
    outC->Context_UtrechtAmsterdamScenarioStory00AWrapper_1.outTriggerId;
  outC->_L215 = US_01_to_12_US_Integration_November;
  /* _L132=(US_Integration_November::Amsterdam_Utrecht#2)/ */
  Amsterdam_Utrecht_US_Integration_November(
    outC->_L144,
    outC->_L137,
    outC->_L215,
    &outC->Context_Amsterdam_Utrecht_2);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L132,
    &outC->Context_Amsterdam_Utrecht_2.Balise_Packets);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(
    &outC->_L133,
    &outC->Context_Amsterdam_Utrecht_2.Balise_Header);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L134,
    &outC->Context_Amsterdam_Utrecht_2.CompressedBaliseMessage);
  kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L135,
    &outC->Context_Amsterdam_Utrecht_2.RadioTrackTrainHeader_out);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L136,
    &outC->Context_Amsterdam_Utrecht_2.Compressed_Packets_out);
  kcg_copy_CompressedRadioMessage_TM(
    &outC->_L202,
    &outC->Context_Amsterdam_Utrecht_2.Compressed_Radio_Message_out);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->compressedBaliseMessages,
    &outC->_L134);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L198,
    &outC->compressedBaliseMessages);
  kcg_copy_CompressedBaliseMessage_TM(&_8_noname, &outC->_L198);
  outC->_L216 = last_GUI_currentVelocityInKmH;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_7_noname, &outC->_L136);
  outC->positionInM = outC->_L144;
  outC->_L196 = outC->positionInM;
  _6_noname = outC->_L196;
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->_L195,
    &inC->EVC_radioMessageToRBC_nextGen);
  outC->_L178 = kcg_lit_int64(136);
  kcg_copy_M_TrainTrack_MessageHd_T_TM_radio_messages(
    &outC->_L129,
    &outC->_L195.Message);
  outC->_L192 = outC->_L129.nid_message;
  outC->_L177 = outC->_L192 != outC->_L178;
  outC->_L190 = outC->_L129.valid;
  outC->_L193 = outC->_L190 & outC->_L177;
  outC->_L175 = kcg_lit_int64(0);
  /* _L174= */
  if (outC->_L193) {
    outC->_L174 = outC->_L192;
  }
  else {
    outC->_L174 = outC->_L175;
  }
  outC->nid_train_track_msg = outC->_L174;
  kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(
    &outC->_L189,
    &inC->EVC_RTM_Management);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->_L185,
    &inC->EVC_radioMessageToRBC_nextGen);
  outC->_L184 = kcg_lit_int64(0);
  outC->_L46 = last_API_currentTimestamp;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L118,
    &outC->_L139.Messages);
  kcg_copy_Radio_TrackTrain_Header_T_TM(&outC->_L117, &outC->_L139.Header);
  /* _L96=(Toolbox::TrainModules::RTM#1)/ */
  RTM_Toolbox_TrainModules(
    outC->_L46,
    &outC->_L118,
    &outC->_L117,
    &outC->_L189,
    &outC->Context_RTM_1);
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
    &outC->_L96,
    &outC->Context_RTM_1.TrackMessage);
  kcg_copy_mobileHWStatus_Type_MoRC_Pck(
    &outC->_L131,
    &outC->Context_RTM_1.mobileHWStatus);
  outC->_L166 = outC->_L96.rtm_msg.Radio_Common_Header.nid_message;
  outC->_L182 = kcg_lit_int64(24);
  outC->_L181 = outC->_L166 != outC->_L182;
  /* _L183= */
  if (outC->_L181) {
    outC->_L183 = outC->_L166;
  }
  else {
    outC->_L183 = outC->_L184;
  }
  outC->nid_track_train_msg_radio = outC->_L183;
  outC->_L173 = inC->GUI_traction;
  outC->_L171 = inC->GUI_brake;
  outC->_L170 = inC->GUI_traction;
  outC->_L169 = inC->GUI_targetSpeed;
  /* _L167=(Toolbox::Physics::AFB#1)/ */
  AFB_Toolbox_Physics(
    outC->_L169,
    outC->_L170,
    outC->_L171,
    outC->_L216,
    &outC->Context_AFB_1);
  outC->_L167 = outC->Context_AFB_1.calculatedAcceleration;
  outC->_L168 = outC->Context_AFB_1.afbActive;
  outC->GUI_AFBActive = outC->_L168;
  outC->RBC_triggerID = outC->_L137;
  outC->_L165 = cMaximumAcceleration_Toolbox;
  kcg_copy_TIU_Output_msg_API_TIU_Pkg(&outC->_L70, &inC->EVC_MessageToTIU);
  outC->_L49 = inC->GUI_mode;
  outC->_L48 = inC->GUI_level;
  outC->_L51 = inC->GUI_mobileHWStatus;
  outC->_L50 = kcg_lit_int64(0);
  outC->_L52 = inC->GUI_openDesk;
  /* _L53=(Toolbox::Functions::GUI_Settings#1)/ */
  GUI_Settings_Toolbox_Functions(
    outC->_L49,
    outC->_L48,
    outC->_L51,
    outC->_L50,
    outC->_L52,
    &outC->Context_GUI_Settings_1);
  outC->_L53 = outC->Context_GUI_Settings_1.modeOut;
  outC->_L54 = outC->Context_GUI_Settings_1.levelOut;
  kcg_copy_mobileHWStatus_Type_MoRC_Pck(
    &outC->_L55,
    &outC->Context_GUI_Settings_1.mobileHWStatusOut);
  outC->_L56 = outC->Context_GUI_Settings_1.directionOut;
  outC->_L57 = outC->Context_GUI_Settings_1.cabStatusOut;
  outC->_L58 = outC->Context_GUI_Settings_1.apiConnectionStatus;
  outC->API_tmpCabStatus = outC->_L57;
  outC->_L66 = outC->API_tmpCabStatus;
  outC->API_tmpDirection = outC->_L56;
  outC->_L60 = outC->API_tmpDirection;
  outC->_L69 = kcg_lit_float64(0.0);
  outC->_L65 = outC->_L173 > outC->_L69;
  outC->_L59 = kcg_lit_int64(190);
  /* _L61=(Toolbox::TrainModules::TIU#1)/ */
  TIU_Toolbox_TrainModules(
    &outC->_L70,
    outC->_L66,
    outC->_L60,
    outC->_L65,
    outC->_L59,
    &outC->Context_TIU_1);
  kcg_copy_TIU_Input_msg_API_TIU_Pkg(
    &outC->_L61,
    &outC->Context_TIU_1.output_To_EVC);
  outC->_L62 = outC->Context_TIU_1.serviceBrakeActivated_To_Environment;
  outC->_L63 = outC->Context_TIU_1.emergencyBrakeActivated_To_Environment;
  outC->_L73 = outC->Context_TIU_1.tractionCutOff_To_Environment;
  outC->TIU_tractionCutOff = outC->_L73;
  outC->_L164 = outC->TIU_tractionCutOff;
  outC->_L163 = inC->activateAirResistance;
  outC->_L162 = kcg_lit_float64(100.0);
  outC->_L160 = inC->GUI_reset;
  outC->SDM_serviceBrakeActivated = outC->_L62;
  outC->_L152 = outC->SDM_serviceBrakeActivated;
  outC->SDM_emergencyBrakeActivated = outC->_L63;
  outC->_L158 = outC->SDM_emergencyBrakeActivated;
  outC->_L156 = inC->GUI_initialPosition;
  outC->_L157 = inC->GUI_initialVelocity;
  outC->_L161 = inC->deltaSimulationTime;
  outC->_L154 = inC->activateBrakeBuildupTime;
  /* _L147=(Toolbox::Physics::PHYSICS_MovementSimulation#1)/ */
  PHYSICS_MovementSimulation_Toolbox_Physics(
    outC->_L160,
    outC->_L167,
    outC->_L164,
    outC->_L152,
    outC->_L158,
    outC->_L156,
    outC->_L157,
    outC->_L161,
    outC->_L154,
    outC->_L163,
    outC->_L165,
    &outC->Context_PHYSICS_MovementSimulation_1);
  outC->_L147 = outC->Context_PHYSICS_MovementSimulation_1.position;
  outC->_L148 = outC->Context_PHYSICS_MovementSimulation_1.velocity;
  outC->_L149 = outC->Context_PHYSICS_MovementSimulation_1.timestamp;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(
    &outC->_L150,
    &outC->Context_PHYSICS_MovementSimulation_1.odometry);
  outC->_L151 = outC->Context_PHYSICS_MovementSimulation_1.resetOut;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(
    &outC->API_currentOdometrie,
    &outC->_L150);
  outC->GUI_currentPositionInM = outC->_L147;
  outC->_L155 = outC->_L162 * outC->_L147;
  outC->_L159 = /* _L159= */(kcg_int64) outC->_L155;
  outC->API_currentPositionInCm = outC->_L159;
  outC->GUI_currentVelocityInKmH = outC->_L148;
  outC->EVC_SystemTime = outC->_L149;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->EVC_Odometry, &outC->_L150);
  _5_noname = outC->_L151;
  outC->GUI_currentPositionInCm = outC->_L159;
  outC->API_currentTimestamp = outC->_L149;
  outC->_L143 = kcg_true;
  outC->EVC_cycleEVC = outC->_L143;
  kcg_copy_mobileHWStatus_Type_MoRC_Pck(&_4_noname, &outC->_L55);
  kcg_copy_mobileHWStatus_Type_MoRC_Pck(&outC->EVC_mobileHWStatus, &outC->_L131);
  kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(&_3_noname, &outC->_L135);
  outC->_L130 = outC->_L133.nid_bg;
  outC->nid_bg = outC->_L130;
  _2_noname = outC->_L58;
  _1_noname = outC->_L54;
  noname = outC->_L53;
  outC->_L42 = last_API_currentTimestamp;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L43, &last_API_currentOdometrie);
  /* _L105=(Toolbox::TrainModules::BTM#1)/ */
  BTM_Toolbox_TrainModules(
    outC->_L42,
    &outC->_L43,
    &outC->_L132,
    &outC->_L133,
    &outC->Context_BTM_1);
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
    &outC->_L105,
    &outC->Context_BTM_1.TrackMessage);
  /* _L111=(Toolbox::Functions::EVC_InputBuffer#1)/ */
  EVC_InputBuffer_Toolbox_Functions(
    &outC->_L105,
    &outC->_L96,
    &outC->Context_EVC_InputBuffer_1);
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
    &outC->_L111,
    &outC->Context_EVC_InputBuffer_1.TrackMessageToEVC);
  outC->_L75 = inC->GUI_reset;
  outC->EVC_reset = outC->_L75;
  outC->GUI_TractionCutOff = outC->_L73;
  kcg_copy_TIU_Input_msg_API_TIU_Pkg(&outC->EVC_fromTIU, &outC->_L61);
  outC->GUI_serviceBrake = outC->_L62;
  outC->GUI_emergencyBrake = outC->_L63;
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&outC->EVC_fromTrack, &outC->_L111);
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void TestEnvironmentSimulation_init_Toolbox(
  outC_TestEnvironmentSimulation_Toolbox *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;
  kcg_size idx6;
  kcg_size idx7;
  kcg_size idx8;
  kcg_size idx9;
  kcg_size idx10;
  kcg_size idx11;
  kcg_size idx12;
  kcg_size idx13;
  kcg_size idx14;
  kcg_size idx15;
  kcg_size idx16;
  kcg_size idx17;
  kcg_size idx18;
  kcg_size idx19;
  kcg_size idx20;
  kcg_size idx21;
  kcg_size idx22;
  kcg_size idx23;
  kcg_size idx24;
  kcg_size idx25;
  kcg_size idx26;
  kcg_size idx27;
  kcg_size idx28;
  kcg_size idx29;
  kcg_size idx30;
  kcg_size idx31;
  kcg_size idx32;
  kcg_size idx33;
  kcg_size idx34;
  kcg_size idx35;
  kcg_size idx36;
  kcg_size idx37;
  kcg_size idx38;
  kcg_size idx39;
  kcg_size idx40;
  kcg_size idx41;
  kcg_size idx42;
  kcg_size idx43;

  outC->_L216 = kcg_lit_float64(0.0);
  outC->_L215 = US_01_to_12_US_Integration_November;
  for (idx = 0; idx < 30; idx++) {
    outC->_L132.PacketHeaders[idx].nid_packet = kcg_lit_int64(0);
    outC->_L132.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L132.PacketHeaders[idx].valid = kcg_true;
    outC->_L132.PacketHeaders[idx].startAddress = kcg_lit_int64(0);
    outC->_L132.PacketHeaders[idx].endAddress = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L132.PacketData[idx1] = kcg_lit_int64(0);
  }
  outC->_L133.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L133.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L133.q_media = Q_MEDIA_Balise;
  outC->_L133.n_pig = N_PIG_I_am_the_1st;
  outC->_L133.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L133.m_dup = M_DUP_No_duplicates;
  outC->_L133.m_mcount = kcg_lit_int64(0);
  outC->_L133.nid_c = kcg_lit_int64(0);
  outC->_L133.nid_bg = kcg_lit_int64(0);
  outC->_L133.q_link = Q_LINK_Unlinked;
  outC->_L134.Header.q_updown = kcg_lit_int64(0);
  outC->_L134.Header.m_version = kcg_lit_int64(0);
  outC->_L134.Header.q_media = kcg_lit_int64(0);
  outC->_L134.Header.n_pig = kcg_lit_int64(0);
  outC->_L134.Header.n_total = kcg_lit_int64(0);
  outC->_L134.Header.m_dup = kcg_lit_int64(0);
  outC->_L134.Header.m_mcount = kcg_lit_int64(0);
  outC->_L134.Header.nid_c = kcg_lit_int64(0);
  outC->_L134.Header.nid_bg = kcg_lit_int64(0);
  outC->_L134.Header.q_link = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L134.Messages.PacketHeaders[idx2].nid_packet = kcg_lit_int64(0);
    outC->_L134.Messages.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L134.Messages.PacketHeaders[idx2].valid = kcg_true;
    outC->_L134.Messages.PacketHeaders[idx2].startAddress = kcg_lit_int64(0);
    outC->_L134.Messages.PacketHeaders[idx2].endAddress = kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L134.Messages.PacketData[idx3] = kcg_lit_int64(0);
  }
  outC->_L135.radioDevice = kcg_lit_int64(0);
  outC->_L135.receivedSystemTime = kcg_lit_int64(0);
  outC->_L135.nid_message = kcg_lit_int64(0);
  outC->_L135.t_train = kcg_lit_int64(0);
  outC->_L135.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L135.nid_lrbg = kcg_lit_int64(0);
  outC->_L135.t_train_reference = kcg_lit_int64(0);
  outC->_L135.nid_em = kcg_lit_int64(0);
  outC->_L135.q_scale = Q_SCALE_10_cm_scale;
  outC->_L135.d_sr = kcg_lit_int64(0);
  outC->_L135.t_sh_rqst = kcg_lit_int64(0);
  outC->_L135.d_ref = kcg_lit_int64(0);
  outC->_L135.q_dir = Q_DIR_Reverse;
  outC->_L135.d_emergencystop = kcg_lit_int64(0);
  outC->_L135.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L136.PacketHeaders[idx4].nid_packet = kcg_lit_int64(0);
    outC->_L136.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->_L136.PacketHeaders[idx4].valid = kcg_true;
    outC->_L136.PacketHeaders[idx4].startAddress = kcg_lit_int64(0);
    outC->_L136.PacketHeaders[idx4].endAddress = kcg_lit_int64(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L136.PacketData[idx5] = kcg_lit_int64(0);
  }
  outC->_L208.Message.valid = kcg_true;
  outC->_L208.Message.nid_message = kcg_lit_int64(0);
  outC->_L208.Message.l_message = kcg_lit_int64(0);
  outC->_L208.Message.t_train = kcg_lit_int64(0);
  outC->_L208.Message.nid_engine = kcg_lit_int64(0);
  outC->_L208.Message.field1 = kcg_lit_int64(0);
  outC->_L208.Message.field2 = kcg_lit_int64(0);
  outC->_L208.Message.field3 = kcg_lit_int64(0);
  for (idx6 = 0; idx6 < 50; idx6++) {
    outC->_L208.OptionalPackets[idx6] = kcg_lit_int64(0);
  }
  outC->_L205.Message.valid = kcg_true;
  outC->_L205.Message.nid_message = kcg_lit_int64(0);
  outC->_L205.Message.l_message = kcg_lit_int64(0);
  outC->_L205.Message.t_train = kcg_lit_int64(0);
  outC->_L205.Message.nid_engine = kcg_lit_int64(0);
  outC->_L205.Message.field1 = kcg_lit_int64(0);
  outC->_L205.Message.field2 = kcg_lit_int64(0);
  outC->_L205.Message.field3 = kcg_lit_int64(0);
  for (idx7 = 0; idx7 < 50; idx7++) {
    outC->_L205.OptionalPackets[idx7] = kcg_lit_int64(0);
  }
  outC->_L200.Message.valid = kcg_true;
  outC->_L200.Message.nid_message = kcg_lit_int64(0);
  outC->_L200.Message.l_message = kcg_lit_int64(0);
  outC->_L200.Message.t_train = kcg_lit_int64(0);
  outC->_L200.Message.nid_engine = kcg_lit_int64(0);
  outC->_L200.Message.field1 = kcg_lit_int64(0);
  outC->_L200.Message.field2 = kcg_lit_int64(0);
  outC->_L200.Message.field3 = kcg_lit_int64(0);
  for (idx8 = 0; idx8 < 50; idx8++) {
    outC->_L200.OptionalPackets[idx8] = kcg_lit_int64(0);
  }
  outC->_L199.Header.radioDevice = kcg_lit_int64(0);
  outC->_L199.Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L199.Header.nid_message = kcg_lit_int64(0);
  outC->_L199.Header.t_train = kcg_lit_int64(0);
  outC->_L199.Header.m_ack = kcg_lit_int64(0);
  outC->_L199.Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L199.Header.t_train_reference = kcg_lit_int64(0);
  outC->_L199.Header.nid_em = kcg_lit_int64(0);
  outC->_L199.Header.q_scale = kcg_lit_int64(0);
  outC->_L199.Header.d_sr = kcg_lit_int64(0);
  outC->_L199.Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L199.Header.d_ref = kcg_lit_int64(0);
  outC->_L199.Header.q_dir = kcg_lit_int64(0);
  outC->_L199.Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L199.Header.m_version = kcg_lit_int64(0);
  for (idx9 = 0; idx9 < 30; idx9++) {
    outC->_L199.Messages.PacketHeaders[idx9].nid_packet = kcg_lit_int64(0);
    outC->_L199.Messages.PacketHeaders[idx9].q_dir = Q_DIR_Reverse;
    outC->_L199.Messages.PacketHeaders[idx9].valid = kcg_true;
    outC->_L199.Messages.PacketHeaders[idx9].startAddress = kcg_lit_int64(0);
    outC->_L199.Messages.PacketHeaders[idx9].endAddress = kcg_lit_int64(0);
  }
  for (idx10 = 0; idx10 < 500; idx10++) {
    outC->_L199.Messages.PacketData[idx10] = kcg_lit_int64(0);
  }
  outC->_L198.Header.q_updown = kcg_lit_int64(0);
  outC->_L198.Header.m_version = kcg_lit_int64(0);
  outC->_L198.Header.q_media = kcg_lit_int64(0);
  outC->_L198.Header.n_pig = kcg_lit_int64(0);
  outC->_L198.Header.n_total = kcg_lit_int64(0);
  outC->_L198.Header.m_dup = kcg_lit_int64(0);
  outC->_L198.Header.m_mcount = kcg_lit_int64(0);
  outC->_L198.Header.nid_c = kcg_lit_int64(0);
  outC->_L198.Header.nid_bg = kcg_lit_int64(0);
  outC->_L198.Header.q_link = kcg_lit_int64(0);
  for (idx11 = 0; idx11 < 30; idx11++) {
    outC->_L198.Messages.PacketHeaders[idx11].nid_packet = kcg_lit_int64(0);
    outC->_L198.Messages.PacketHeaders[idx11].q_dir = Q_DIR_Reverse;
    outC->_L198.Messages.PacketHeaders[idx11].valid = kcg_true;
    outC->_L198.Messages.PacketHeaders[idx11].startAddress = kcg_lit_int64(0);
    outC->_L198.Messages.PacketHeaders[idx11].endAddress = kcg_lit_int64(0);
  }
  for (idx12 = 0; idx12 < 500; idx12++) {
    outC->_L198.Messages.PacketData[idx12] = kcg_lit_int64(0);
  }
  outC->_L196 = kcg_lit_float64(0.0);
  outC->_L195.Message.valid = kcg_true;
  outC->_L195.Message.nid_message = kcg_lit_int64(0);
  outC->_L195.Message.l_message = kcg_lit_int64(0);
  outC->_L195.Message.t_train = kcg_lit_int64(0);
  outC->_L195.Message.nid_engine = kcg_lit_int64(0);
  outC->_L195.Message.field1 = kcg_lit_int64(0);
  outC->_L195.Message.field2 = kcg_lit_int64(0);
  outC->_L195.Message.field3 = kcg_lit_int64(0);
  for (idx13 = 0; idx13 < 50; idx13++) {
    outC->_L195.OptionalPackets[idx13] = kcg_lit_int64(0);
  }
  outC->_L193 = kcg_true;
  outC->_L192 = kcg_lit_int64(0);
  outC->_L190 = kcg_true;
  outC->_L129.valid = kcg_true;
  outC->_L129.nid_message = kcg_lit_int64(0);
  outC->_L129.l_message = kcg_lit_int64(0);
  outC->_L129.t_train = kcg_lit_int64(0);
  outC->_L129.nid_engine = kcg_lit_int64(0);
  outC->_L129.field1 = kcg_lit_int64(0);
  outC->_L129.field2 = kcg_lit_int64(0);
  outC->_L129.field3 = kcg_lit_int64(0);
  outC->_L175 = kcg_lit_int64(0);
  outC->_L177 = kcg_true;
  outC->_L178 = kcg_lit_int64(0);
  outC->_L174 = kcg_lit_int64(0);
  outC->_L189.valid = kcg_true;
  outC->_L189.cmd = cmdr_not_relevant_API_RadioCommunication_Pkg;
  outC->_L189.networkID = kcg_lit_int64(0);
  outC->_L184 = kcg_lit_int64(0);
  outC->_L183 = kcg_lit_int64(0);
  outC->_L182 = kcg_lit_int64(0);
  outC->_L181 = kcg_true;
  outC->_L173 = kcg_lit_float64(0.0);
  outC->_L171 = kcg_lit_float64(0.0);
  outC->_L170 = kcg_lit_float64(0.0);
  outC->_L169 = kcg_lit_float64(0.0);
  outC->_L167 = kcg_lit_float64(0.0);
  outC->_L168 = kcg_true;
  outC->_L41 = kcg_lit_int64(0);
  outC->_L110 = kcg_lit_float64(0.0);
  outC->_L144 = kcg_lit_float64(0.0);
  outC->_L145 = kcg_lit_float64(0.0);
  outC->_L166 = kcg_lit_int64(0);
  outC->_L165 = kcg_lit_float64(0.0);
  outC->_L151 = kcg_true;
  outC->_L150.valid = kcg_true;
  outC->_L150.timestamp = kcg_lit_int64(0);
  outC->_L150.odo.o_nominal = kcg_lit_int64(0);
  outC->_L150.odo.o_min = kcg_lit_int64(0);
  outC->_L150.odo.o_max = kcg_lit_int64(0);
  outC->_L150.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L150.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L150.speed.v_lower = kcg_lit_int64(0);
  outC->_L150.speed.v_upper = kcg_lit_int64(0);
  outC->_L150.acceleration = kcg_lit_int64(0);
  outC->_L150.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L150.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L149 = kcg_lit_int64(0);
  outC->_L148 = kcg_lit_float64(0.0);
  outC->_L147 = kcg_lit_float64(0.0);
  outC->_L152 = kcg_true;
  outC->_L154 = kcg_true;
  outC->_L155 = kcg_lit_float64(0.0);
  outC->_L156 = kcg_lit_float64(0.0);
  outC->_L157 = kcg_lit_float64(0.0);
  outC->_L158 = kcg_true;
  outC->_L159 = kcg_lit_int64(0);
  outC->_L160 = kcg_true;
  outC->_L161 = kcg_lit_int64(0);
  outC->_L162 = kcg_lit_float64(0.0);
  outC->_L163 = kcg_true;
  outC->_L164 = kcg_true;
  outC->_L143 = kcg_true;
  outC->_L142.Header.radioDevice = kcg_lit_int64(0);
  outC->_L142.Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L142.Header.nid_message = kcg_lit_int64(0);
  outC->_L142.Header.t_train = kcg_lit_int64(0);
  outC->_L142.Header.m_ack = kcg_lit_int64(0);
  outC->_L142.Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L142.Header.t_train_reference = kcg_lit_int64(0);
  outC->_L142.Header.nid_em = kcg_lit_int64(0);
  outC->_L142.Header.q_scale = kcg_lit_int64(0);
  outC->_L142.Header.d_sr = kcg_lit_int64(0);
  outC->_L142.Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L142.Header.d_ref = kcg_lit_int64(0);
  outC->_L142.Header.q_dir = kcg_lit_int64(0);
  outC->_L142.Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L142.Header.m_version = kcg_lit_int64(0);
  for (idx14 = 0; idx14 < 30; idx14++) {
    outC->_L142.Messages.PacketHeaders[idx14].nid_packet = kcg_lit_int64(0);
    outC->_L142.Messages.PacketHeaders[idx14].q_dir = Q_DIR_Reverse;
    outC->_L142.Messages.PacketHeaders[idx14].valid = kcg_true;
    outC->_L142.Messages.PacketHeaders[idx14].startAddress = kcg_lit_int64(0);
    outC->_L142.Messages.PacketHeaders[idx14].endAddress = kcg_lit_int64(0);
  }
  for (idx15 = 0; idx15 < 500; idx15++) {
    outC->_L142.Messages.PacketData[idx15] = kcg_lit_int64(0);
  }
  outC->_L141.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L141.m_NationalParams.nid_c = kcg_lit_int64(0);
  outC->_L141.m_NationalParams.v_nvshunt = kcg_lit_int64(0);
  outC->_L141.m_NationalParams.v_nvstff = kcg_lit_int64(0);
  outC->_L141.m_NationalParams.v_nvonsight = kcg_lit_int64(0);
  outC->_L141.m_NationalParams.v_nvunfit = kcg_lit_int64(0);
  outC->_L141.m_NationalParams.v_nvrel = kcg_lit_int64(0);
  outC->_L141.m_NationalParams.t_nvcontact = kcg_lit_int64(0);
  outC->_L141.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->_L141.m_MAReqParams.t_mar = kcg_lit_int64(0);
  outC->_L141.m_MAReqParams.t_timeoutrqst = kcg_lit_int64(0);
  outC->_L141.m_MAReqParams.t_cycrqst = kcg_lit_int64(0);
  outC->_L141.m_PosRepParams.q_dir = Q_DIR_Reverse;
  outC->_L141.m_PosRepParams.q_scale = Q_SCALE_10_cm_scale;
  outC->_L141.m_PosRepParams.t_cycloc = kcg_lit_int64(0);
  outC->_L141.m_PosRepParams.d_cycloc = kcg_lit_int64(0);
  outC->_L141.m_PosRepParams.m_loc = M_LOC_Now;
  outC->_L141.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx16 = 0; idx16 < 32; idx16++) {
    outC->_L141.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx16].d_loc =
      kcg_lit_int64(0);
    outC->_L141.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx16].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  outC->_L137 = kcg_lit_int64(0);
  outC->_L140.m_Value = kcg_lit_int64(0);
  outC->_L139.Header.radioDevice = kcg_lit_int64(0);
  outC->_L139.Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L139.Header.nid_message = kcg_lit_int64(0);
  outC->_L139.Header.t_train = kcg_lit_int64(0);
  outC->_L139.Header.m_ack = kcg_lit_int64(0);
  outC->_L139.Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L139.Header.t_train_reference = kcg_lit_int64(0);
  outC->_L139.Header.nid_em = kcg_lit_int64(0);
  outC->_L139.Header.q_scale = kcg_lit_int64(0);
  outC->_L139.Header.d_sr = kcg_lit_int64(0);
  outC->_L139.Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L139.Header.d_ref = kcg_lit_int64(0);
  outC->_L139.Header.q_dir = kcg_lit_int64(0);
  outC->_L139.Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L139.Header.m_version = kcg_lit_int64(0);
  for (idx17 = 0; idx17 < 30; idx17++) {
    outC->_L139.Messages.PacketHeaders[idx17].nid_packet = kcg_lit_int64(0);
    outC->_L139.Messages.PacketHeaders[idx17].q_dir = Q_DIR_Reverse;
    outC->_L139.Messages.PacketHeaders[idx17].valid = kcg_true;
    outC->_L139.Messages.PacketHeaders[idx17].startAddress = kcg_lit_int64(0);
    outC->_L139.Messages.PacketHeaders[idx17].endAddress = kcg_lit_int64(0);
  }
  for (idx18 = 0; idx18 < 500; idx18++) {
    outC->_L139.Messages.PacketData[idx18] = kcg_lit_int64(0);
  }
  outC->_L138.m_TrainData.nid_engine = kcg_lit_int64(0);
  outC->_L138.m_TrainData.m_NumberOfOnboardPhoneNumbers = kcg_lit_int64(0);
  for (idx20 = 0; idx20 < 1; idx20++) {
    outC->_L138.m_TrainData.m_OnboardPhoneNumbers[idx20].valid = kcg_true;
    for (idx19 = 0; idx19 < 15; idx19++) {
      outC->_L138.m_TrainData.m_OnboardPhoneNumbers[idx20].telephoneNumber[idx19] =
        kcg_lit_int64(0);
    }
  }
  outC->_L138.m_TrainData.t_train_ref = kcg_lit_int64(0);
  outC->_L138.m_TrainData.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L138.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L138.m_TrainData.l_train = kcg_lit_int64(0);
  outC->_L138.m_TrainData.v_maxtrain = kcg_lit_int64(0);
  outC->_L138.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L138.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L138.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L138.m_TrainData.n_axle = kcg_lit_int64(0);
  for (idx21 = 0; idx21 < 4; idx21++) {
    outC->_L138.m_TrainData.m_TractionIdentities[idx21].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L138.m_TrainData.m_TractionIdentities[idx21].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx22 = 0; idx22 < 5; idx22++) {
    outC->_L138.m_TrainData.m_NationalSystemIdentities[idx22] = kcg_lit_int64(0);
  }
  outC->_L138.m_TrainData.nid_operational = kcg_lit_int64(0);
  outC->_L138.m_PosData.nid_lrbg = kcg_lit_int64(0);
  outC->_L138.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L138.m_PosData.d_lrbg = kcg_lit_int64(0);
  outC->_L138.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L138.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L138.m_PosData.l_doubtover = kcg_lit_int64(0);
  outC->_L138.m_PosData.l_doubtunder = kcg_lit_int64(0);
  outC->_L138.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L138.m_PosData.l_trainint = kcg_lit_int64(0);
  outC->_L138.m_PosData.v_train = kcg_lit_int64(0);
  outC->_L138.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L138.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L138.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L138.m_PosData.nid_ntc = kcg_lit_int64(0);
  outC->_L138.m_PosData.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L131.valid = kcg_true;
  outC->_L131.connectionStatus = mhwc_notRegistered_MoRC_Pck;
  outC->_L131.settingUpConnectionHasFailed = kcg_true;
  outC->_L131.connectionLost = kcg_true;
  outC->_L130 = kcg_lit_int64(0);
  for (idx23 = 0; idx23 < 30; idx23++) {
    outC->_L118.PacketHeaders[idx23].nid_packet = kcg_lit_int64(0);
    outC->_L118.PacketHeaders[idx23].q_dir = Q_DIR_Reverse;
    outC->_L118.PacketHeaders[idx23].valid = kcg_true;
    outC->_L118.PacketHeaders[idx23].startAddress = kcg_lit_int64(0);
    outC->_L118.PacketHeaders[idx23].endAddress = kcg_lit_int64(0);
  }
  for (idx24 = 0; idx24 < 500; idx24++) {
    outC->_L118.PacketData[idx24] = kcg_lit_int64(0);
  }
  outC->_L117.radioDevice = kcg_lit_int64(0);
  outC->_L117.receivedSystemTime = kcg_lit_int64(0);
  outC->_L117.nid_message = kcg_lit_int64(0);
  outC->_L117.t_train = kcg_lit_int64(0);
  outC->_L117.m_ack = kcg_lit_int64(0);
  outC->_L117.nid_lrbg = kcg_lit_int64(0);
  outC->_L117.t_train_reference = kcg_lit_int64(0);
  outC->_L117.nid_em = kcg_lit_int64(0);
  outC->_L117.q_scale = kcg_lit_int64(0);
  outC->_L117.d_sr = kcg_lit_int64(0);
  outC->_L117.t_sh_rqst = kcg_lit_int64(0);
  outC->_L117.d_ref = kcg_lit_int64(0);
  outC->_L117.q_dir = kcg_lit_int64(0);
  outC->_L117.d_emergencystop = kcg_lit_int64(0);
  outC->_L117.m_version = kcg_lit_int64(0);
  outC->_L111.valid = kcg_true;
  outC->_L111.systemTimeMsgReceived = kcg_lit_int64(0);
  outC->_L111.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L111.btm_msg.present = kcg_true;
  outC->_L111.btm_msg.checkResult = kcg_true;
  outC->_L111.btm_msg.api_bad_balise_received = kcg_true;
  outC->_L111.btm_msg.api_header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L111.btm_msg.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L111.btm_msg.api_header.q_media = Q_MEDIA_Balise;
  outC->_L111.btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->_L111.btm_msg.api_header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L111.btm_msg.api_header.m_dup = M_DUP_No_duplicates;
  outC->_L111.btm_msg.api_header.m_mcount = kcg_lit_int64(0);
  outC->_L111.btm_msg.api_header.nid_c = kcg_lit_int64(0);
  outC->_L111.btm_msg.api_header.nid_bg = kcg_lit_int64(0);
  outC->_L111.btm_msg.api_header.q_link = Q_LINK_Unlinked;
  outC->_L111.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L111.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->_L111.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L111.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->_L111.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->_L111.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L111.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L111.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L111.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L111.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L111.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L111.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L111.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L111.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L111.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L111.rtm_msg.present = kcg_true;
  outC->_L111.rtm_msg.apiConsistencyError = kcg_true;
  outC->_L111.rtm_msg.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L111.rtm_msg.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L111.rtm_msg.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L111.rtm_msg.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L111.rtm_msg.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L111.rtm_msg.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L111.rtm_msg.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L111.rtm_msg.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L111.rtm_msg.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L111.rtm_msg.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L111.rtm_msg.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L111.rtm_msg.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L111.rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L111.rtm_msg.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L111.rtm_msg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L111.rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
  outC->_L111.rtm_msg.Radio_MetaData.nid_em = kcg_true;
  outC->_L111.rtm_msg.Radio_MetaData.q_scale = kcg_true;
  outC->_L111.rtm_msg.Radio_MetaData.d_sr = kcg_true;
  outC->_L111.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->_L111.rtm_msg.Radio_MetaData.d_ref = kcg_true;
  outC->_L111.rtm_msg.Radio_MetaData.q_dir = kcg_true;
  outC->_L111.rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
  outC->_L111.rtm_msg.Radio_MetaData.m_version = kcg_true;
  outC->_L111.rtm_msg.sendingRBC_Id.valid = kcg_true;
  outC->_L111.rtm_msg.sendingRBC_Id.nid_c = kcg_lit_int64(0);
  outC->_L111.rtm_msg.sendingRBC_Id.rbc_id = kcg_lit_int64(0);
  outC->_L111.rtm_msg.sendingRBC_Id.device_id = kcg_lit_int64(0);
  for (idx25 = 0; idx25 < 30; idx25++) {
    outC->_L111.packets.PacketHeaders[idx25].nid_packet = kcg_lit_int64(0);
    outC->_L111.packets.PacketHeaders[idx25].q_dir = Q_DIR_Reverse;
    outC->_L111.packets.PacketHeaders[idx25].valid = kcg_true;
    outC->_L111.packets.PacketHeaders[idx25].startAddress = kcg_lit_int64(0);
    outC->_L111.packets.PacketHeaders[idx25].endAddress = kcg_lit_int64(0);
  }
  for (idx26 = 0; idx26 < 500; idx26++) {
    outC->_L111.packets.PacketData[idx26] = kcg_lit_int64(0);
  }
  outC->_L96.valid = kcg_true;
  outC->_L96.systemTimeMsgReceived = kcg_lit_int64(0);
  outC->_L96.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L96.btm_msg.present = kcg_true;
  outC->_L96.btm_msg.checkResult = kcg_true;
  outC->_L96.btm_msg.api_bad_balise_received = kcg_true;
  outC->_L96.btm_msg.api_header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L96.btm_msg.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L96.btm_msg.api_header.q_media = Q_MEDIA_Balise;
  outC->_L96.btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->_L96.btm_msg.api_header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L96.btm_msg.api_header.m_dup = M_DUP_No_duplicates;
  outC->_L96.btm_msg.api_header.m_mcount = kcg_lit_int64(0);
  outC->_L96.btm_msg.api_header.nid_c = kcg_lit_int64(0);
  outC->_L96.btm_msg.api_header.nid_bg = kcg_lit_int64(0);
  outC->_L96.btm_msg.api_header.q_link = Q_LINK_Unlinked;
  outC->_L96.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L96.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->_L96.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L96.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->_L96.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->_L96.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L96.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L96.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L96.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L96.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L96.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L96.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L96.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L96.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L96.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L96.rtm_msg.present = kcg_true;
  outC->_L96.rtm_msg.apiConsistencyError = kcg_true;
  outC->_L96.rtm_msg.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L96.rtm_msg.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L96.rtm_msg.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L96.rtm_msg.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L96.rtm_msg.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L96.rtm_msg.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L96.rtm_msg.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L96.rtm_msg.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L96.rtm_msg.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L96.rtm_msg.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L96.rtm_msg.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L96.rtm_msg.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L96.rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L96.rtm_msg.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L96.rtm_msg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L96.rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
  outC->_L96.rtm_msg.Radio_MetaData.nid_em = kcg_true;
  outC->_L96.rtm_msg.Radio_MetaData.q_scale = kcg_true;
  outC->_L96.rtm_msg.Radio_MetaData.d_sr = kcg_true;
  outC->_L96.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->_L96.rtm_msg.Radio_MetaData.d_ref = kcg_true;
  outC->_L96.rtm_msg.Radio_MetaData.q_dir = kcg_true;
  outC->_L96.rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
  outC->_L96.rtm_msg.Radio_MetaData.m_version = kcg_true;
  outC->_L96.rtm_msg.sendingRBC_Id.valid = kcg_true;
  outC->_L96.rtm_msg.sendingRBC_Id.nid_c = kcg_lit_int64(0);
  outC->_L96.rtm_msg.sendingRBC_Id.rbc_id = kcg_lit_int64(0);
  outC->_L96.rtm_msg.sendingRBC_Id.device_id = kcg_lit_int64(0);
  for (idx27 = 0; idx27 < 30; idx27++) {
    outC->_L96.packets.PacketHeaders[idx27].nid_packet = kcg_lit_int64(0);
    outC->_L96.packets.PacketHeaders[idx27].q_dir = Q_DIR_Reverse;
    outC->_L96.packets.PacketHeaders[idx27].valid = kcg_true;
    outC->_L96.packets.PacketHeaders[idx27].startAddress = kcg_lit_int64(0);
    outC->_L96.packets.PacketHeaders[idx27].endAddress = kcg_lit_int64(0);
  }
  for (idx28 = 0; idx28 < 500; idx28++) {
    outC->_L96.packets.PacketData[idx28] = kcg_lit_int64(0);
  }
  outC->_L105.valid = kcg_true;
  outC->_L105.systemTimeMsgReceived = kcg_lit_int64(0);
  outC->_L105.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L105.btm_msg.present = kcg_true;
  outC->_L105.btm_msg.checkResult = kcg_true;
  outC->_L105.btm_msg.api_bad_balise_received = kcg_true;
  outC->_L105.btm_msg.api_header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L105.btm_msg.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L105.btm_msg.api_header.q_media = Q_MEDIA_Balise;
  outC->_L105.btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->_L105.btm_msg.api_header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L105.btm_msg.api_header.m_dup = M_DUP_No_duplicates;
  outC->_L105.btm_msg.api_header.m_mcount = kcg_lit_int64(0);
  outC->_L105.btm_msg.api_header.nid_c = kcg_lit_int64(0);
  outC->_L105.btm_msg.api_header.nid_bg = kcg_lit_int64(0);
  outC->_L105.btm_msg.api_header.q_link = Q_LINK_Unlinked;
  outC->_L105.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L105.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->_L105.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L105.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->_L105.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->_L105.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L105.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L105.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L105.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L105.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L105.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L105.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L105.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L105.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L105.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L105.rtm_msg.present = kcg_true;
  outC->_L105.rtm_msg.apiConsistencyError = kcg_true;
  outC->_L105.rtm_msg.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L105.rtm_msg.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L105.rtm_msg.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L105.rtm_msg.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L105.rtm_msg.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L105.rtm_msg.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L105.rtm_msg.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L105.rtm_msg.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L105.rtm_msg.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L105.rtm_msg.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L105.rtm_msg.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L105.rtm_msg.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L105.rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L105.rtm_msg.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L105.rtm_msg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L105.rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
  outC->_L105.rtm_msg.Radio_MetaData.nid_em = kcg_true;
  outC->_L105.rtm_msg.Radio_MetaData.q_scale = kcg_true;
  outC->_L105.rtm_msg.Radio_MetaData.d_sr = kcg_true;
  outC->_L105.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->_L105.rtm_msg.Radio_MetaData.d_ref = kcg_true;
  outC->_L105.rtm_msg.Radio_MetaData.q_dir = kcg_true;
  outC->_L105.rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
  outC->_L105.rtm_msg.Radio_MetaData.m_version = kcg_true;
  outC->_L105.rtm_msg.sendingRBC_Id.valid = kcg_true;
  outC->_L105.rtm_msg.sendingRBC_Id.nid_c = kcg_lit_int64(0);
  outC->_L105.rtm_msg.sendingRBC_Id.rbc_id = kcg_lit_int64(0);
  outC->_L105.rtm_msg.sendingRBC_Id.device_id = kcg_lit_int64(0);
  for (idx29 = 0; idx29 < 30; idx29++) {
    outC->_L105.packets.PacketHeaders[idx29].nid_packet = kcg_lit_int64(0);
    outC->_L105.packets.PacketHeaders[idx29].q_dir = Q_DIR_Reverse;
    outC->_L105.packets.PacketHeaders[idx29].valid = kcg_true;
    outC->_L105.packets.PacketHeaders[idx29].startAddress = kcg_lit_int64(0);
    outC->_L105.packets.PacketHeaders[idx29].endAddress = kcg_lit_int64(0);
  }
  for (idx30 = 0; idx30 < 500; idx30++) {
    outC->_L105.packets.PacketData[idx30] = kcg_lit_int64(0);
  }
  outC->_L75 = kcg_true;
  outC->_L73 = kcg_true;
  outC->_L70.valid = kcg_true;
  outC->_L70.info.isolation_status.valid = kcg_true;
  outC->_L70.info.isolation_status.isolation_status =
    on_board_equipment_is_isolated_TIU_Types_Pkg;
  outC->_L70.info.brake_command.valid = kcg_true;
  outC->_L70.info.brake_command.m_servicebrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L70.info.brake_command.m_emergencybrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L70.info.brake_inhibition.valid = kcg_true;
  outC->_L70.info.brake_inhibition.m_regenerativebrake_cm =
    brake_inhibit_not_defined_TIU_Types_Pkg;
  outC->_L70.info.brake_inhibition.m_eddycurrentbrake_cm =
    eddy_current_brake_inhibition_not_defined_TIU_Types_Pkg;
  outC->_L70.info.brake_inhibition.m_magneticshoebrake_cm =
    brake_inhibit_not_defined_TIU_Types_Pkg;
  outC->_L70.info.type_I_train_commands.valid = kcg_true;
  outC->_L70.info.type_I_train_commands.m_pantograph_cm =
    pantograph_command_not_defined_TIU_Types_Pkg;
  outC->_L70.info.type_I_train_commands.m_airtightness_cm =
    airtightness_command_not_defined_TIU_Types_Pkg;
  outC->_L70.info.type_I_train_commands.m_mainpowerswitch_cm =
    open_main_power_swicth_TIU_Types_Pkg;
  outC->_L70.info.type_I_train_commands.m_traction_cutoff_cm =
    traction_cutoff_command_not_defined_TIU_Types_Pkg;
  outC->_L70.info.change_traction_system.valid = kcg_true;
  outC->_L70.info.change_traction_system.d_test_traction.now = kcg_lit_int64(0);
  outC->_L70.info.change_traction_system.d_test_traction.distance =
    kcg_lit_int64(0);
  outC->_L70.info.change_traction_system.m_voltage.voltage_type =
    line_not_fitted_with_any_traction_system_TIU_Types_Pkg;
  outC->_L70.info.change_traction_system.m_voltage.NID_ctraction =
    kcg_lit_int64(0);
  outC->_L70.info.passenger_door_control_info.valid = kcg_true;
  outC->_L70.info.passenger_door_control_info.door_control_info = kcg_lit_int64(
      0);
  outC->_L70.info.change_of_allowed_current_consumption.valid = kcg_true;
  outC->_L70.info.change_of_allowed_current_consumption.d_test_current.now =
    kcg_lit_int64(0);
  outC->_L70.info.change_of_allowed_current_consumption.d_test_current.distance =
    kcg_lit_int64(0);
  outC->_L70.info.change_of_allowed_current_consumption.m_current.no_restriction =
    kcg_true;
  outC->_L70.info.change_of_allowed_current_consumption.m_current.restriction =
    kcg_lit_int64(0);
  outC->_L69 = kcg_lit_float64(0.0);
  outC->_L59 = kcg_lit_int64(0);
  outC->_L60 = direction_controller_in_neutral_TIU_Types_Pkg;
  outC->_L63 = kcg_true;
  outC->_L62 = kcg_true;
  outC->_L61.valid = kcg_true;
  outC->_L61.info.train_status.valid = kcg_true;
  outC->_L61.info.train_status.m_sleeping_st = signal_active_TIU_Types_Pkg;
  outC->_L61.info.train_status.m_passiveshunting_st =
    passive_shunting_permitted_TIU_Types_Pkg;
  outC->_L61.info.train_status.m_nonleading_st =
    non_leading_signall_status_not_defined_TIU_Types_Pkg;
  outC->_L61.info.train_status.m_cab_st =
    cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L61.info.train_status.m_directioncontroller_st =
    direction_controller_in_neutral_TIU_Types_Pkg;
  outC->_L61.info.train_status.m_trainintegrity_st =
    train_is_not_integer_TIU_Types_Pkg;
  outC->_L61.info.train_status.m_traction_st = traction_on_TIU_Types_Pkg;
  outC->_L61.info.brake_status.valid = kcg_true;
  outC->_L61.info.brake_status.m_regenerativebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L61.info.brake_status.m_eddycurrentbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L61.info.brake_status.m_magneticshoebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L61.info.brake_status.m_electropneumaticbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L61.info.brake_status.m_additionalbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L61.info.brake_pressure.valid = kcg_true;
  outC->_L61.info.brake_pressure.pressure = kcg_lit_int64(0);
  outC->_L61.info.train_data_entry_type = fixed_entry_type_TIU_Types_Pkg;
  outC->_L61.info.train_data_info.valid = kcg_true;
  outC->_L61.info.train_data_info.acknowledgedByDriver = kcg_true;
  outC->_L61.info.train_data_info.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L61.info.train_data_info.cantDeficientcy =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L61.info.train_data_info.trainLength = kcg_lit_int64(0);
  outC->_L61.info.train_data_info.brakePerctage = kcg_lit_int64(0);
  outC->_L61.info.train_data_info.maxTrainSpeed = kcg_lit_int64(0);
  outC->_L61.info.train_data_info.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L61.info.train_data_info.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L61.info.train_data_info.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L61.info.train_data_info.axleNumber = kcg_lit_int64(0);
  outC->_L61.info.train_data_info.numberNationalSystems = kcg_lit_int64(0);
  for (idx31 = 0; idx31 < 5; idx31++) {
    outC->_L61.info.train_data_info.nationSystems[idx31] = kcg_lit_int64(0);
  }
  outC->_L61.info.train_data_info.numberTractionSystems = kcg_lit_int64(0);
  for (idx32 = 0; idx32 < 4; idx32++) {
    outC->_L61.info.train_data_info.tractionSystem[idx32].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L61.info.train_data_info.tractionSystem[idx32].nid_ctraction =
      kcg_lit_int64(0);
  }
  outC->_L61.info.type_I_train_and_brake_inhibition.valid = kcg_true;
  outC->_L61.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.now =
    kcg_lit_int64(0);
  outC->_L61.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.distance =
    kcg_lit_int64(0);
  outC->_L61.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.now =
    kcg_lit_int64(0);
  outC->_L61.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.distance =
    kcg_lit_int64(0);
  outC->_L61.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  outC->_L61.info.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.now =
    kcg_lit_int64(0);
  outC->_L61.info.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.distance =
    kcg_lit_int64(0);
  outC->_L65 = kcg_true;
  outC->_L66 = cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L48 = kcg_lit_int64(0);
  outC->_L49 = kcg_lit_int64(0);
  outC->_L50 = kcg_lit_int64(0);
  outC->_L51 = kcg_lit_int64(0);
  outC->_L52 = kcg_true;
  outC->_L58 = conn_unknown_API_RadioCommunication_Pkg;
  outC->_L57 = cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L56 = direction_controller_in_neutral_TIU_Types_Pkg;
  outC->_L55.valid = kcg_true;
  outC->_L55.connectionStatus = mhwc_notRegistered_MoRC_Pck;
  outC->_L55.settingUpConnectionHasFailed = kcg_true;
  outC->_L55.connectionLost = kcg_true;
  outC->_L54 = M_LEVEL_Level_0;
  outC->_L53 = M_MODE_Full_Supervision;
  outC->_L46 = kcg_lit_int64(0);
  outC->_L43.valid = kcg_true;
  outC->_L43.timestamp = kcg_lit_int64(0);
  outC->_L43.odo.o_nominal = kcg_lit_int64(0);
  outC->_L43.odo.o_min = kcg_lit_int64(0);
  outC->_L43.odo.o_max = kcg_lit_int64(0);
  outC->_L43.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L43.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L43.speed.v_lower = kcg_lit_int64(0);
  outC->_L43.speed.v_upper = kcg_lit_int64(0);
  outC->_L43.acceleration = kcg_lit_int64(0);
  outC->_L43.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L43.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L42 = kcg_lit_int64(0);
  outC->compressedRadioMessage.Header.radioDevice = kcg_lit_int64(0);
  outC->compressedRadioMessage.Header.receivedSystemTime = kcg_lit_int64(0);
  outC->compressedRadioMessage.Header.nid_message = kcg_lit_int64(0);
  outC->compressedRadioMessage.Header.t_train = kcg_lit_int64(0);
  outC->compressedRadioMessage.Header.m_ack = kcg_lit_int64(0);
  outC->compressedRadioMessage.Header.nid_lrbg = kcg_lit_int64(0);
  outC->compressedRadioMessage.Header.t_train_reference = kcg_lit_int64(0);
  outC->compressedRadioMessage.Header.nid_em = kcg_lit_int64(0);
  outC->compressedRadioMessage.Header.q_scale = kcg_lit_int64(0);
  outC->compressedRadioMessage.Header.d_sr = kcg_lit_int64(0);
  outC->compressedRadioMessage.Header.t_sh_rqst = kcg_lit_int64(0);
  outC->compressedRadioMessage.Header.d_ref = kcg_lit_int64(0);
  outC->compressedRadioMessage.Header.q_dir = kcg_lit_int64(0);
  outC->compressedRadioMessage.Header.d_emergencystop = kcg_lit_int64(0);
  outC->compressedRadioMessage.Header.m_version = kcg_lit_int64(0);
  for (idx33 = 0; idx33 < 30; idx33++) {
    outC->compressedRadioMessage.Messages.PacketHeaders[idx33].nid_packet =
      kcg_lit_int64(0);
    outC->compressedRadioMessage.Messages.PacketHeaders[idx33].q_dir =
      Q_DIR_Reverse;
    outC->compressedRadioMessage.Messages.PacketHeaders[idx33].valid = kcg_true;
    outC->compressedRadioMessage.Messages.PacketHeaders[idx33].startAddress =
      kcg_lit_int64(0);
    outC->compressedRadioMessage.Messages.PacketHeaders[idx33].endAddress =
      kcg_lit_int64(0);
  }
  for (idx34 = 0; idx34 < 500; idx34++) {
    outC->compressedRadioMessage.Messages.PacketData[idx34] = kcg_lit_int64(0);
  }
  outC->compressedBaliseMessages.Header.q_updown = kcg_lit_int64(0);
  outC->compressedBaliseMessages.Header.m_version = kcg_lit_int64(0);
  outC->compressedBaliseMessages.Header.q_media = kcg_lit_int64(0);
  outC->compressedBaliseMessages.Header.n_pig = kcg_lit_int64(0);
  outC->compressedBaliseMessages.Header.n_total = kcg_lit_int64(0);
  outC->compressedBaliseMessages.Header.m_dup = kcg_lit_int64(0);
  outC->compressedBaliseMessages.Header.m_mcount = kcg_lit_int64(0);
  outC->compressedBaliseMessages.Header.nid_c = kcg_lit_int64(0);
  outC->compressedBaliseMessages.Header.nid_bg = kcg_lit_int64(0);
  outC->compressedBaliseMessages.Header.q_link = kcg_lit_int64(0);
  for (idx35 = 0; idx35 < 30; idx35++) {
    outC->compressedBaliseMessages.Messages.PacketHeaders[idx35].nid_packet =
      kcg_lit_int64(0);
    outC->compressedBaliseMessages.Messages.PacketHeaders[idx35].q_dir =
      Q_DIR_Reverse;
    outC->compressedBaliseMessages.Messages.PacketHeaders[idx35].valid = kcg_true;
    outC->compressedBaliseMessages.Messages.PacketHeaders[idx35].startAddress =
      kcg_lit_int64(0);
    outC->compressedBaliseMessages.Messages.PacketHeaders[idx35].endAddress =
      kcg_lit_int64(0);
  }
  for (idx36 = 0; idx36 < 500; idx36++) {
    outC->compressedBaliseMessages.Messages.PacketData[idx36] = kcg_lit_int64(0);
  }
  outC->positionInM = kcg_lit_float64(0.0);
  outC->RBC_triggerID = kcg_lit_int64(0);
  outC->nid_track_train_msg_radio = kcg_lit_int64(0);
  outC->nid_bg = kcg_lit_int64(0);
  outC->nid_train_track_msg = kcg_lit_int64(0);
  outC->TIU_tractionCutOff = kcg_true;
  outC->API_tmpCabStatus = cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->API_tmpDirection = direction_controller_in_neutral_TIU_Types_Pkg;
  outC->SDM_emergencyBrakeActivated = kcg_true;
  outC->SDM_serviceBrakeActivated = kcg_true;
  outC->_L202.Header.radioDevice = kcg_lit_int64(0);
  outC->_L202.Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L202.Header.nid_message = kcg_lit_int64(0);
  outC->_L202.Header.t_train = kcg_lit_int64(0);
  outC->_L202.Header.m_ack = kcg_lit_int64(0);
  outC->_L202.Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L202.Header.t_train_reference = kcg_lit_int64(0);
  outC->_L202.Header.nid_em = kcg_lit_int64(0);
  outC->_L202.Header.q_scale = kcg_lit_int64(0);
  outC->_L202.Header.d_sr = kcg_lit_int64(0);
  outC->_L202.Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L202.Header.d_ref = kcg_lit_int64(0);
  outC->_L202.Header.q_dir = kcg_lit_int64(0);
  outC->_L202.Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L202.Header.m_version = kcg_lit_int64(0);
  for (idx37 = 0; idx37 < 30; idx37++) {
    outC->_L202.Messages.PacketHeaders[idx37].nid_packet = kcg_lit_int64(0);
    outC->_L202.Messages.PacketHeaders[idx37].q_dir = Q_DIR_Reverse;
    outC->_L202.Messages.PacketHeaders[idx37].valid = kcg_true;
    outC->_L202.Messages.PacketHeaders[idx37].startAddress = kcg_lit_int64(0);
    outC->_L202.Messages.PacketHeaders[idx37].endAddress = kcg_lit_int64(0);
  }
  for (idx38 = 0; idx38 < 500; idx38++) {
    outC->_L202.Messages.PacketData[idx38] = kcg_lit_int64(0);
  }
  outC->_L185.Message.valid = kcg_true;
  outC->_L185.Message.nid_message = kcg_lit_int64(0);
  outC->_L185.Message.l_message = kcg_lit_int64(0);
  outC->_L185.Message.t_train = kcg_lit_int64(0);
  outC->_L185.Message.nid_engine = kcg_lit_int64(0);
  outC->_L185.Message.field1 = kcg_lit_int64(0);
  outC->_L185.Message.field2 = kcg_lit_int64(0);
  outC->_L185.Message.field3 = kcg_lit_int64(0);
  for (idx39 = 0; idx39 < 50; idx39++) {
    outC->_L185.OptionalPackets[idx39] = kcg_lit_int64(0);
  }
  outC->init = kcg_true;
  outC->GUI_AFBActive = kcg_true;
  outC->EVC_cycleEVC = kcg_true;
  outC->GUI_currentVelocityInKmH = kcg_lit_float64(0.0);
  outC->GUI_currentPositionInM = kcg_lit_float64(0.0);
  outC->GUI_currentPositionInCm = kcg_lit_int64(0);
  outC->GUI_TractionCutOff = kcg_true;
  outC->GUI_serviceBrake = kcg_true;
  outC->GUI_emergencyBrake = kcg_true;
  outC->EVC_mobileHWStatus.valid = kcg_true;
  outC->EVC_mobileHWStatus.connectionStatus = mhwc_notRegistered_MoRC_Pck;
  outC->EVC_mobileHWStatus.settingUpConnectionHasFailed = kcg_true;
  outC->EVC_mobileHWStatus.connectionLost = kcg_true;
  outC->EVC_fromTIU.valid = kcg_true;
  outC->EVC_fromTIU.info.train_status.valid = kcg_true;
  outC->EVC_fromTIU.info.train_status.m_sleeping_st = signal_active_TIU_Types_Pkg;
  outC->EVC_fromTIU.info.train_status.m_passiveshunting_st =
    passive_shunting_permitted_TIU_Types_Pkg;
  outC->EVC_fromTIU.info.train_status.m_nonleading_st =
    non_leading_signall_status_not_defined_TIU_Types_Pkg;
  outC->EVC_fromTIU.info.train_status.m_cab_st =
    cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->EVC_fromTIU.info.train_status.m_directioncontroller_st =
    direction_controller_in_neutral_TIU_Types_Pkg;
  outC->EVC_fromTIU.info.train_status.m_trainintegrity_st =
    train_is_not_integer_TIU_Types_Pkg;
  outC->EVC_fromTIU.info.train_status.m_traction_st = traction_on_TIU_Types_Pkg;
  outC->EVC_fromTIU.info.brake_status.valid = kcg_true;
  outC->EVC_fromTIU.info.brake_status.m_regenerativebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->EVC_fromTIU.info.brake_status.m_eddycurrentbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->EVC_fromTIU.info.brake_status.m_magneticshoebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->EVC_fromTIU.info.brake_status.m_electropneumaticbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->EVC_fromTIU.info.brake_status.m_additionalbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->EVC_fromTIU.info.brake_pressure.valid = kcg_true;
  outC->EVC_fromTIU.info.brake_pressure.pressure = kcg_lit_int64(0);
  outC->EVC_fromTIU.info.train_data_entry_type = fixed_entry_type_TIU_Types_Pkg;
  outC->EVC_fromTIU.info.train_data_info.valid = kcg_true;
  outC->EVC_fromTIU.info.train_data_info.acknowledgedByDriver = kcg_true;
  outC->EVC_fromTIU.info.train_data_info.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->EVC_fromTIU.info.train_data_info.cantDeficientcy =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->EVC_fromTIU.info.train_data_info.trainLength = kcg_lit_int64(0);
  outC->EVC_fromTIU.info.train_data_info.brakePerctage = kcg_lit_int64(0);
  outC->EVC_fromTIU.info.train_data_info.maxTrainSpeed = kcg_lit_int64(0);
  outC->EVC_fromTIU.info.train_data_info.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->EVC_fromTIU.info.train_data_info.axleLoadCategory = M_AXLELOADCAT_A;
  outC->EVC_fromTIU.info.train_data_info.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->EVC_fromTIU.info.train_data_info.axleNumber = kcg_lit_int64(0);
  outC->EVC_fromTIU.info.train_data_info.numberNationalSystems = kcg_lit_int64(0);
  for (idx40 = 0; idx40 < 5; idx40++) {
    outC->EVC_fromTIU.info.train_data_info.nationSystems[idx40] = kcg_lit_int64(0);
  }
  outC->EVC_fromTIU.info.train_data_info.numberTractionSystems = kcg_lit_int64(0);
  for (idx41 = 0; idx41 < 4; idx41++) {
    outC->EVC_fromTIU.info.train_data_info.tractionSystem[idx41].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->EVC_fromTIU.info.train_data_info.tractionSystem[idx41].nid_ctraction =
      kcg_lit_int64(0);
  }
  outC->EVC_fromTIU.info.type_I_train_and_brake_inhibition.valid = kcg_true;
  outC->EVC_fromTIU.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.now =
    kcg_lit_int64(0);
  outC->EVC_fromTIU.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.distance =
    kcg_lit_int64(0);
  outC->EVC_fromTIU.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.now =
    kcg_lit_int64(0);
  outC->EVC_fromTIU.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.distance =
    kcg_lit_int64(0);
  outC->EVC_fromTIU.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  outC->EVC_fromTIU.info.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.now =
    kcg_lit_int64(0);
  outC->EVC_fromTIU.info.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.distance =
    kcg_lit_int64(0);
  outC->EVC_fromTrack.valid = kcg_true;
  outC->EVC_fromTrack.systemTimeMsgReceived = kcg_lit_int64(0);
  outC->EVC_fromTrack.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->EVC_fromTrack.btm_msg.present = kcg_true;
  outC->EVC_fromTrack.btm_msg.checkResult = kcg_true;
  outC->EVC_fromTrack.btm_msg.api_bad_balise_received = kcg_true;
  outC->EVC_fromTrack.btm_msg.api_header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->EVC_fromTrack.btm_msg.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->EVC_fromTrack.btm_msg.api_header.q_media = Q_MEDIA_Balise;
  outC->EVC_fromTrack.btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->EVC_fromTrack.btm_msg.api_header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->EVC_fromTrack.btm_msg.api_header.m_dup = M_DUP_No_duplicates;
  outC->EVC_fromTrack.btm_msg.api_header.m_mcount = kcg_lit_int64(0);
  outC->EVC_fromTrack.btm_msg.api_header.nid_c = kcg_lit_int64(0);
  outC->EVC_fromTrack.btm_msg.api_header.nid_bg = kcg_lit_int64(0);
  outC->EVC_fromTrack.btm_msg.api_header.q_link = Q_LINK_Unlinked;
  outC->EVC_fromTrack.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->EVC_fromTrack.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->EVC_fromTrack.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->EVC_fromTrack.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->EVC_fromTrack.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->EVC_fromTrack.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->EVC_fromTrack.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->EVC_fromTrack.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->EVC_fromTrack.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->EVC_fromTrack.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->EVC_fromTrack.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->EVC_fromTrack.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->EVC_fromTrack.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->EVC_fromTrack.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->EVC_fromTrack.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->EVC_fromTrack.rtm_msg.present = kcg_true;
  outC->EVC_fromTrack.rtm_msg.apiConsistencyError = kcg_true;
  outC->EVC_fromTrack.rtm_msg.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->EVC_fromTrack.rtm_msg.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->EVC_fromTrack.rtm_msg.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->EVC_fromTrack.rtm_msg.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->EVC_fromTrack.rtm_msg.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->EVC_fromTrack.rtm_msg.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->EVC_fromTrack.rtm_msg.Radio_Common_Header.t_train_reference =
    kcg_lit_int64(0);
  outC->EVC_fromTrack.rtm_msg.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->EVC_fromTrack.rtm_msg.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->EVC_fromTrack.rtm_msg.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->EVC_fromTrack.rtm_msg.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->EVC_fromTrack.rtm_msg.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->EVC_fromTrack.rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->EVC_fromTrack.rtm_msg.Radio_Common_Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->EVC_fromTrack.rtm_msg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->EVC_fromTrack.rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
  outC->EVC_fromTrack.rtm_msg.Radio_MetaData.nid_em = kcg_true;
  outC->EVC_fromTrack.rtm_msg.Radio_MetaData.q_scale = kcg_true;
  outC->EVC_fromTrack.rtm_msg.Radio_MetaData.d_sr = kcg_true;
  outC->EVC_fromTrack.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->EVC_fromTrack.rtm_msg.Radio_MetaData.d_ref = kcg_true;
  outC->EVC_fromTrack.rtm_msg.Radio_MetaData.q_dir = kcg_true;
  outC->EVC_fromTrack.rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
  outC->EVC_fromTrack.rtm_msg.Radio_MetaData.m_version = kcg_true;
  outC->EVC_fromTrack.rtm_msg.sendingRBC_Id.valid = kcg_true;
  outC->EVC_fromTrack.rtm_msg.sendingRBC_Id.nid_c = kcg_lit_int64(0);
  outC->EVC_fromTrack.rtm_msg.sendingRBC_Id.rbc_id = kcg_lit_int64(0);
  outC->EVC_fromTrack.rtm_msg.sendingRBC_Id.device_id = kcg_lit_int64(0);
  for (idx42 = 0; idx42 < 30; idx42++) {
    outC->EVC_fromTrack.packets.PacketHeaders[idx42].nid_packet = kcg_lit_int64(0);
    outC->EVC_fromTrack.packets.PacketHeaders[idx42].q_dir = Q_DIR_Reverse;
    outC->EVC_fromTrack.packets.PacketHeaders[idx42].valid = kcg_true;
    outC->EVC_fromTrack.packets.PacketHeaders[idx42].startAddress =
      kcg_lit_int64(0);
    outC->EVC_fromTrack.packets.PacketHeaders[idx42].endAddress = kcg_lit_int64(0);
  }
  for (idx43 = 0; idx43 < 500; idx43++) {
    outC->EVC_fromTrack.packets.PacketData[idx43] = kcg_lit_int64(0);
  }
  outC->EVC_SystemTime = kcg_lit_int64(0);
  outC->EVC_Odometry.valid = kcg_true;
  outC->EVC_Odometry.timestamp = kcg_lit_int64(0);
  outC->EVC_Odometry.odo.o_nominal = kcg_lit_int64(0);
  outC->EVC_Odometry.odo.o_min = kcg_lit_int64(0);
  outC->EVC_Odometry.odo.o_max = kcg_lit_int64(0);
  outC->EVC_Odometry.speed.v_safeNominal = kcg_lit_int64(0);
  outC->EVC_Odometry.speed.v_rawNominal = kcg_lit_int64(0);
  outC->EVC_Odometry.speed.v_lower = kcg_lit_int64(0);
  outC->EVC_Odometry.speed.v_upper = kcg_lit_int64(0);
  outC->EVC_Odometry.acceleration = kcg_lit_int64(0);
  outC->EVC_Odometry.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->EVC_Odometry.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->EVC_reset = kcg_true;
  /* _L111=(Toolbox::Functions::EVC_InputBuffer#1)/ */
  EVC_InputBuffer_init_Toolbox_Functions(&outC->Context_EVC_InputBuffer_1);
  /* _L105=(Toolbox::TrainModules::BTM#1)/ */
  BTM_init_Toolbox_TrainModules(&outC->Context_BTM_1);
  /* _L147=(Toolbox::Physics::PHYSICS_MovementSimulation#1)/ */
  PHYSICS_MovementSimulation_init_Toolbox_Physics(
    &outC->Context_PHYSICS_MovementSimulation_1);
  /* _L61=(Toolbox::TrainModules::TIU#1)/ */
  TIU_init_Toolbox_TrainModules(&outC->Context_TIU_1);
  /* _L53=(Toolbox::Functions::GUI_Settings#1)/ */
  GUI_Settings_init_Toolbox_Functions(&outC->Context_GUI_Settings_1);
  /* _L167=(Toolbox::Physics::AFB#1)/ */
  AFB_init_Toolbox_Physics(&outC->Context_AFB_1);
  /* _L96=(Toolbox::TrainModules::RTM#1)/ */
  RTM_init_Toolbox_TrainModules(&outC->Context_RTM_1);
  /* _L132=(US_Integration_November::Amsterdam_Utrecht#2)/ */
  Amsterdam_Utrecht_init_US_Integration_November(
    &outC->Context_Amsterdam_Utrecht_2);
  /* _L137=(RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper#1)/ */
  _34_UtrechtAmsterdamScenarioS_init_RBC_Scenario_Pkg(
    &outC->Context_UtrechtAmsterdamScenarioStory00AWrapper_1);
  /* _L138=(RBC_Model_Pkg::RBC_New#1)/ */
  RBC_New_init_RBC_Model_Pkg(&outC->Context_RBC_New_1);
  outC->API_currentPositionInCm = kcg_lit_int64(0);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(
    &outC->API_currentOdometrie,
    (odometry_T_Obu_BasicTypes_Pkg *) &cInitialOdometrieValue_Toolbox);
  outC->API_currentTimestamp = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TestEnvironmentSimulation_reset_Toolbox(
  outC_TestEnvironmentSimulation_Toolbox *outC)
{
  outC->init = kcg_true;
  /* _L111=(Toolbox::Functions::EVC_InputBuffer#1)/ */
  EVC_InputBuffer_reset_Toolbox_Functions(&outC->Context_EVC_InputBuffer_1);
  /* _L105=(Toolbox::TrainModules::BTM#1)/ */
  BTM_reset_Toolbox_TrainModules(&outC->Context_BTM_1);
  /* _L147=(Toolbox::Physics::PHYSICS_MovementSimulation#1)/ */
  PHYSICS_MovementSimulation_reset_Toolbox_Physics(
    &outC->Context_PHYSICS_MovementSimulation_1);
  /* _L61=(Toolbox::TrainModules::TIU#1)/ */
  TIU_reset_Toolbox_TrainModules(&outC->Context_TIU_1);
  /* _L53=(Toolbox::Functions::GUI_Settings#1)/ */
  GUI_Settings_reset_Toolbox_Functions(&outC->Context_GUI_Settings_1);
  /* _L167=(Toolbox::Physics::AFB#1)/ */
  AFB_reset_Toolbox_Physics(&outC->Context_AFB_1);
  /* _L96=(Toolbox::TrainModules::RTM#1)/ */
  RTM_reset_Toolbox_TrainModules(&outC->Context_RTM_1);
  /* _L132=(US_Integration_November::Amsterdam_Utrecht#2)/ */
  Amsterdam_Utrecht_reset_US_Integration_November(
    &outC->Context_Amsterdam_Utrecht_2);
  /* _L137=(RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper#1)/ */
  _34_UtrechtAmsterdamScenarioS_reset_RBC_Scenario_Pkg(
    &outC->Context_UtrechtAmsterdamScenarioStory00AWrapper_1);
  /* _L138=(RBC_Model_Pkg::RBC_New#1)/ */
  RBC_New_reset_RBC_Model_Pkg(&outC->Context_RBC_New_1);
  outC->API_currentPositionInCm = kcg_lit_int64(0);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(
    &outC->API_currentOdometrie,
    (odometry_T_Obu_BasicTypes_Pkg *) &cInitialOdometrieValue_Toolbox);
  outC->API_currentTimestamp = kcg_lit_int64(0);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TestEnvironmentSimulation_Toolbox.c
** Generation date: 2023-09-12T13:45:52
*************************************************************$ */

