/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */
#ifndef _TestEnvironmentSimulation_Toolbox_H_
#define _TestEnvironmentSimulation_Toolbox_H_

#include "kcg_types.h"
#include "Amsterdam_Utrecht_US_Integration_November.h"
#include "AFB_Toolbox_Physics.h"
#include "PHYSICS_MovementSimulation_Toolbox_Physics.h"
#include "RBC_New_RBC_Model_Pkg.h"
#include "_34_UtrechtAmsterdamScenarioS_RBC_Scenario_Pkg.h"
#include "EVC_InputBuffer_Toolbox_Functions.h"
#include "BTM_Toolbox_TrainModules.h"
#include "RTM_Toolbox_TrainModules.h"
#include "TIU_Toolbox_TrainModules.h"
#include "GUI_Settings_Toolbox_Functions.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* GUI_reset/ */ GUI_reset;
  kcg_float64 /* GUI_targetSpeed/ */ GUI_targetSpeed;
  kcg_float64 /* GUI_traction/ */ GUI_traction;
  kcg_float64 /* GUI_brake/ */ GUI_brake;
  kcg_float64 /* GUI_initialPosition/ */ GUI_initialPosition;
  kcg_float64 /* GUI_initialVelocity/ */ GUI_initialVelocity;
  kcg_int64 /* GUI_level/ */ GUI_level;
  kcg_int64 /* GUI_mode/ */ GUI_mode;
  kcg_int64 /* GUI_mobileHWStatus/ */ GUI_mobileHWStatus;
  kcg_bool /* GUI_openDesk/ */ GUI_openDesk;
  RadioManagement_T_API_RadioCommunication_Pkg /* EVC_RTM_Management/ */ EVC_RTM_Management;
  TIU_Output_msg_API_TIU_Pkg /* EVC_MessageToTIU/ */ EVC_MessageToTIU;
  kcg_int64 /* deltaSimulationTime/ */ deltaSimulationTime;
  kcg_bool /* activateBrakeBuildupTime/ */ activateBrakeBuildupTime;
  kcg_bool /* activateAirResistance/ */ activateAirResistance;
  M_TrainTrack_Message_T_TM_radio_messages /* EVC_radioMessageToRBC_nextGen/ */ EVC_radioMessageToRBC_nextGen;
} inC_TestEnvironmentSimulation_Toolbox;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* EVC_reset/ */ EVC_reset;
  odometry_T_Obu_BasicTypes_Pkg /* EVC_Odometry/ */ EVC_Odometry;
  T_internal_Type_Obu_BasicTypes_Pkg /* EVC_SystemTime/ */ EVC_SystemTime;
  API_TrackSideInput_T_API_Msg_Pkg /* EVC_fromTrack/ */ EVC_fromTrack;
  TIU_Input_msg_API_TIU_Pkg /* EVC_fromTIU/ */ EVC_fromTIU;
  mobileHWStatus_Type_MoRC_Pck /* EVC_mobileHWStatus/ */ EVC_mobileHWStatus;
  kcg_bool /* GUI_emergencyBrake/ */ GUI_emergencyBrake;
  kcg_bool /* GUI_serviceBrake/ */ GUI_serviceBrake;
  kcg_bool /* GUI_TractionCutOff/ */ GUI_TractionCutOff;
  L_internal_Type_Obu_BasicTypes_Pkg /* GUI_currentPositionInCm/ */ GUI_currentPositionInCm;
  kcg_float64 /* GUI_currentPositionInM/ */ GUI_currentPositionInM;
  kcg_float64 /* GUI_currentVelocityInKmH/ */ GUI_currentVelocityInKmH;
  kcg_bool /* EVC_cycleEVC/ */ EVC_cycleEVC;
  kcg_bool /* GUI_AFBActive/ */ GUI_AFBActive;
  /* -----------------------   local probes  ------------------------- */
  NID_MESSAGE /* nid_train_track_msg/ */ nid_train_track_msg;
  NID_BG /* nid_bg/ */ nid_bg;
  NID_MESSAGE /* nid_track_train_msg_radio/ */ nid_track_train_msg_radio;
  kcg_int64 /* RBC_triggerID/ */ RBC_triggerID;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  L_internal_Type_Obu_BasicTypes_Pkg /* API_currentPositionInCm/ */ API_currentPositionInCm;
  odometry_T_Obu_BasicTypes_Pkg /* API_currentOdometrie/ */ API_currentOdometrie;
  T_internal_Type_Obu_BasicTypes_Pkg /* API_currentTimestamp/ */ API_currentTimestamp;
  M_TrainTrack_Message_T_TM_radio_messages /* _L185/ */ _L185;
  CompressedRadioMessage_TM /* _L202/ */ _L202;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_EVC_InputBuffer_Toolbox_Functions /* _L111=(Toolbox::Functions::EVC_InputBuffer#1)/ */ Context_EVC_InputBuffer_1;
  outC_BTM_Toolbox_TrainModules /* _L105=(Toolbox::TrainModules::BTM#1)/ */ Context_BTM_1;
  outC_PHYSICS_MovementSimulation_Toolbox_Physics /* _L147=(Toolbox::Physics::PHYSICS_MovementSimulation#1)/ */ Context_PHYSICS_MovementSimulation_1;
  outC_TIU_Toolbox_TrainModules /* _L61=(Toolbox::TrainModules::TIU#1)/ */ Context_TIU_1;
  outC_GUI_Settings_Toolbox_Functions /* _L53=(Toolbox::Functions::GUI_Settings#1)/ */ Context_GUI_Settings_1;
  outC_AFB_Toolbox_Physics /* _L167=(Toolbox::Physics::AFB#1)/ */ Context_AFB_1;
  outC_RTM_Toolbox_TrainModules /* _L96=(Toolbox::TrainModules::RTM#1)/ */ Context_RTM_1;
  outC_Amsterdam_Utrecht_US_Integration_November /* _L132=(US_Integration_November::Amsterdam_Utrecht#2)/ */ Context_Amsterdam_Utrecht_2;
  outC__34_UtrechtAmsterdamScenarioS_RBC_Scenario_Pkg /* _L137=(RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper#1)/ */ Context_UtrechtAmsterdamScenarioStory00AWrapper_1;
  outC_RBC_New_RBC_Model_Pkg /* _L138=(RBC_Model_Pkg::RBC_New#1)/ */ Context_RBC_New_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* SDM_serviceBrakeActivated/ */ SDM_serviceBrakeActivated;
  kcg_bool /* SDM_emergencyBrakeActivated/ */ SDM_emergencyBrakeActivated;
  M_directioncontroller_signal_status_T_TIU_Types_Pkg /* API_tmpDirection/ */ API_tmpDirection;
  M_cab_signal_status_T_TIU_Types_Pkg /* API_tmpCabStatus/ */ API_tmpCabStatus;
  kcg_bool /* TIU_tractionCutOff/ */ TIU_tractionCutOff;
  kcg_float64 /* positionInM/ */ positionInM;
  CompressedBaliseMessage_TM /* compressedBaliseMessages/ */ compressedBaliseMessages;
  CompressedRadioMessage_TM /* compressedRadioMessage/ */ compressedRadioMessage;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L42/ */ _L42;
  odometry_T_Obu_BasicTypes_Pkg /* _L43/ */ _L43;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L46/ */ _L46;
  M_MODE /* _L53/ */ _L53;
  M_LEVEL /* _L54/ */ _L54;
  mobileHWStatus_Type_MoRC_Pck /* _L55/ */ _L55;
  M_directioncontroller_signal_status_T_TIU_Types_Pkg /* _L56/ */ _L56;
  M_cab_signal_status_T_TIU_Types_Pkg /* _L57/ */ _L57;
  connectionStatusRadioUnit_T_API_RadioCommunication_Pkg /* _L58/ */ _L58;
  kcg_bool /* _L52/ */ _L52;
  kcg_int64 /* _L51/ */ _L51;
  kcg_int64 /* _L50/ */ _L50;
  kcg_int64 /* _L49/ */ _L49;
  kcg_int64 /* _L48/ */ _L48;
  M_cab_signal_status_T_TIU_Types_Pkg /* _L66/ */ _L66;
  kcg_bool /* _L65/ */ _L65;
  TIU_Input_msg_API_TIU_Pkg /* _L61/ */ _L61;
  kcg_bool /* _L62/ */ _L62;
  kcg_bool /* _L63/ */ _L63;
  M_directioncontroller_signal_status_T_TIU_Types_Pkg /* _L60/ */ _L60;
  kcg_int64 /* _L59/ */ _L59;
  kcg_float64 /* _L69/ */ _L69;
  TIU_Output_msg_API_TIU_Pkg /* _L70/ */ _L70;
  kcg_bool /* _L73/ */ _L73;
  kcg_bool /* _L75/ */ _L75;
  API_TrackSideInput_T_API_Msg_Pkg /* _L105/ */ _L105;
  API_TrackSideInput_T_API_Msg_Pkg /* _L96/ */ _L96;
  API_TrackSideInput_T_API_Msg_Pkg /* _L111/ */ _L111;
  Radio_TrackTrain_Header_T_TM /* _L117/ */ _L117;
  CompressedPackets_T_Common_Types_Pkg /* _L118/ */ _L118;
  NID_BG /* _L130/ */ _L130;
  mobileHWStatus_Type_MoRC_Pck /* _L131/ */ _L131;
  SessionManagement_T /* _L138/ */ _L138;
  CompressedRadioMessage_TM /* _L139/ */ _L139;
  Clock_T /* _L140/ */ _L140;
  kcg_int64 /* _L137/ */ _L137;
  DynamicConfig_T /* _L141/ */ _L141;
  CompressedRadioMessage_TM /* _L142/ */ _L142;
  kcg_bool /* _L143/ */ _L143;
  kcg_bool /* _L164/ */ _L164;
  kcg_bool /* _L163/ */ _L163;
  kcg_float64 /* _L162/ */ _L162;
  kcg_int64 /* _L161/ */ _L161;
  kcg_bool /* _L160/ */ _L160;
  kcg_int64 /* _L159/ */ _L159;
  kcg_bool /* _L158/ */ _L158;
  kcg_float64 /* _L157/ */ _L157;
  kcg_float64 /* _L156/ */ _L156;
  kcg_float64 /* _L155/ */ _L155;
  kcg_bool /* _L154/ */ _L154;
  kcg_bool /* _L152/ */ _L152;
  kcg_float64 /* _L147/ */ _L147;
  kcg_float64 /* _L148/ */ _L148;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L149/ */ _L149;
  odometry_T_Obu_BasicTypes_Pkg /* _L150/ */ _L150;
  kcg_bool /* _L151/ */ _L151;
  kcg_float64 /* _L165/ */ _L165;
  NID_MESSAGE /* _L166/ */ _L166;
  kcg_float64 /* _L145/ */ _L145;
  kcg_float64 /* _L144/ */ _L144;
  kcg_float64 /* _L110/ */ _L110;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L41/ */ _L41;
  kcg_bool /* _L168/ */ _L168;
  kcg_float64 /* _L167/ */ _L167;
  kcg_float64 /* _L169/ */ _L169;
  kcg_float64 /* _L170/ */ _L170;
  kcg_float64 /* _L171/ */ _L171;
  kcg_float64 /* _L173/ */ _L173;
  kcg_bool /* _L181/ */ _L181;
  kcg_int64 /* _L182/ */ _L182;
  NID_MESSAGE /* _L183/ */ _L183;
  kcg_int64 /* _L184/ */ _L184;
  RadioManagement_T_API_RadioCommunication_Pkg /* _L189/ */ _L189;
  kcg_int64 /* _L174/ */ _L174;
  kcg_int64 /* _L178/ */ _L178;
  kcg_bool /* _L177/ */ _L177;
  kcg_int64 /* _L175/ */ _L175;
  M_TrainTrack_MessageHd_T_TM_radio_messages /* _L129/ */ _L129;
  kcg_bool /* _L190/ */ _L190;
  kcg_int64 /* _L192/ */ _L192;
  kcg_bool /* _L193/ */ _L193;
  M_TrainTrack_Message_T_TM_radio_messages /* _L195/ */ _L195;
  kcg_float64 /* _L196/ */ _L196;
  CompressedBaliseMessage_TM /* _L198/ */ _L198;
  CompressedRadioMessage_TM /* _L199/ */ _L199;
  M_TrainTrack_Message_T_TM_radio_messages /* _L200/ */ _L200;
  M_TrainTrack_Message_T_TM_radio_messages /* _L205/ */ _L205;
  M_TrainTrack_Message_T_TM_radio_messages /* _L208/ */ _L208;
  CompressedPackets_T_Common_Types_Pkg /* _L136/ */ _L136;
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg /* _L135/ */ _L135;
  CompressedBaliseMessage_TM /* _L134/ */ _L134;
  TelegramHeader_T_BG_Types_Pkg /* _L133/ */ _L133;
  CompressedPackets_T_Common_Types_Pkg /* _L132/ */ _L132;
  TrackType_US_Integration_November /* _L215/ */ _L215;
  kcg_float64 /* _L216/ */ _L216;
} outC_TestEnvironmentSimulation_Toolbox;

/* ===========  node initialization and cycle functions  =========== */
/* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete/ */
extern void TestEnvironmentSimulation_Toolbox(
  inC_TestEnvironmentSimulation_Toolbox *inC,
  outC_TestEnvironmentSimulation_Toolbox *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void TestEnvironmentSimulation_reset_Toolbox(
  outC_TestEnvironmentSimulation_Toolbox *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void TestEnvironmentSimulation_init_Toolbox(
  outC_TestEnvironmentSimulation_Toolbox *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _TestEnvironmentSimulation_Toolbox_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TestEnvironmentSimulation_Toolbox.h
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

