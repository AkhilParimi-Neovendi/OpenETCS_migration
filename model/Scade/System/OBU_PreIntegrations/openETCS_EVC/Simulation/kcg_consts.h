/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _KCG_CONSTS_H_
#define _KCG_CONSTS_H_

#include "kcg_types.h"

/* MoRC_Pck::Coder_Pkg::cEmptyOutPackets/ */
extern const outPackets_T_Common_Types_Pkg cEmptyOutPackets_MoRC_Pck_Coder_Pkg;

/* RCM_Session_Types_Pkg::cInitialSessionStatus/ */
extern const sessionStatus_T_RCM_Session_Types_Pkg cInitialSessionStatus_RCM_Session_Types_Pkg;

/* RCM_Session_Types_Pkg::cNoSessionCmd/ */
extern const sessionCmd_T_RCM_Session_Types_Pkg cNoSessionCmd_RCM_Session_Types_Pkg;

/* RCM_Types_Pkg::cNoP45_RadioNetworkRegistration/ */
extern const P45_RadioNetworkRegistration_T_Packet_Types_Pkg cNoP45_RadioNetworkRegistration_RCM_Types_Pkg;

/* RCM_MsgTypes_Pkg::cNo_p42_SessionManagement/ */
extern const p42_sessionManagement_T_RCM_MsgTypes_Pkg cNo_p42_SessionManagement_RCM_MsgTypes_Pkg;

/* RCM_MsgTypes_Pkg::cNID_RADIO_useTheShortNumberStoredOnboard/ */
#define _93_cNID_RADIO_useTheShortNumberStoredOnboard_RCM_MsgTypes_Pkg        \
  (kcg_lit_int64(4294967295))

/* RCM_MsgTypes_Pkg::c_nid_RBC_contactLastKnownRBC_/ */
#define c_nid_RBC_contactLastKnownRBC__RCM_MsgTypes_Pkg (kcg_lit_int32(16383))

/* MoRC_Pck::Subfunc_Pkg::cNoOrigin/ */
extern const RBC_Id_T_Common_Types_Pkg cNoOrigin_MoRC_Pck_Subfunc_Pkg;

/* MoRC_Pck::cNoMessageToRBC/ */
extern const Radio_TrainTrack_Message_T_Radio_Types_Pkg cNoMessageToRBC_MoRC_Pck;

/* RCM_Session_Types_Pkg::cNoSessionStatus/ */
extern const sessionStatus_T_RCM_Session_Types_Pkg cNoSessionStatus_RCM_Session_Types_Pkg;

/* RCM_Types_Pkg::cNoMobileRegistrationContext/ */
extern const mobileRegistrationContext_T_RCM_Types_Pkg cNoMobileRegistrationContext_RCM_Types_Pkg;

/* RCM_Types_Pkg::cNoConnectionContext/ */
extern const mobileConnectionContext_T_RCM_Types_Pkg cNoConnectionContext_RCM_Types_Pkg;

/* TM_radio_messages::nid_meta_p001/ */
#define nid_meta_p001_TM_radio_messages (kcg_lit_int32(1))

/* TM_TrainToTrack::DIM_max_elements_P003/ */
#define DIM_max_elements_P003_TM_TrainToTrack                                 \
  (kcg_lit_int32(3) + kcg_lit_int32(5))

/* Id_Pkg::co155_Initiation_of_a_communication_session/ */
#define co155_Initiation_of_a_communication_session_Id_Pkg (kcg_lit_int32(155))

/* Id_Pkg::co156_Termination_of_a_communication_session/ */
#define co156_Termination_of_a_communication_session_Id_Pkg (kcg_lit_int32(156))

/* Id_Pkg::co159_Session_established/ */
#define co159_Session_established_Id_Pkg (kcg_lit_int32(159))

/* Id_Pkg::co154_No_Compatible_Version_Support/ */
#define co154_No_Compatible_Version_Support_Id_Pkg (kcg_lit_int32(154))

/* Handover_Pkg::handoverUtils_Pkg::cIdleBus/ */
extern const M_TrainTrackMessageBus_t_TM_TrainTrack_Bus cIdleBus_Handover_Pkg_handoverUtils_Pkg;

/* MoRC_Pck::Coder_Pkg::cNID_RBC_contactLastKnownRBC/ */
#define cNID_RBC_contactLastKnownRBC_MoRC_Pck_Coder_Pkg (kcg_lit_int32(16383))

/* MoRC_Pck::Coder_Pkg::cNID_RADIO_useTheShortNumberStoredOnboard/ */
#define cNID_RADIO_useTheShortNumberStoredOnboard_MoRC_Pck_Coder_Pkg          \
  (kcg_lit_int32(0))

/* Id_Pkg::cm39_Acknowledgement_of_termination_of_a_communication_session/ */
#define cm39_Acknowledgement_of_termination_of_a_communication_session_Id_Pkg \
  (kcg_lit_int32(39))

/* Id_Pkg::cm38_Initiation_of_a_Communication_Session/ */
#define cm38_Initiation_of_a_Communication_Session_Id_Pkg (kcg_lit_int32(38))

/* TM::DEFAULT_Headers/ */
extern const Metadata_T_Common_Types_Pkg DEFAULT_Headers_TM;

/* TM::ERROR_nid_packet/ */
#define ERROR_nid_packet_TM (kcg_lit_int32(-1))

/* TM::INT_M_VERSION_2_0/ */
#define INT_M_VERSION_2_0_TM (kcg_lit_int32(32))

/* TM::DIM_MaxElementsPacket042/ */
#define DIM_MaxElementsPacket042_TM (kcg_lit_int32(8))

/* TM::DEFAULT_BaliseData/ */
extern const CompressedPackets_T_Common_Types_Pkg DEFAULT_BaliseData_TM;

/* TM::DIM_MaxElementsPacket131/ */
#define DIM_MaxElementsPacket131_TM (kcg_lit_int32(9))

/* Handover_Pkg::cNoMessageFromTrack/ */
extern const msgFromTrack_T_RCM_MsgTypes_Pkg cNoMessageFromTrack_Handover_Pkg;

/* Handover_Pkg::cNoP131_RBCTransitionOrder/ */
extern const p131_q_rbcTransitionOrder_T_Handover_Pkg cNoP131_RBCTransitionOrder_Handover_Pkg;

/* Handover_Pkg::cMobileDeviceNo_2/ */
#define cMobileDeviceNo_2_Handover_Pkg (kcg_lit_int32(2))

/* Handover_Pkg::cMobileDeviceNo_1/ */
#define cMobileDeviceNo_1_Handover_Pkg (kcg_lit_int32(1))

/* TM_specific::DEFAULT_LinkedBGs_T/ */
extern const LinkedBGs_T_BG_Types_Pkg DEFAULT_LinkedBGs_T_TM_specific;

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::cEmptyPositionedBG/ */
extern const positionedBG_T_TrainPosition_Types_Pck cEmptyPositionedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::cBG_find_0/ */
extern const BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg cBG_find_0_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::cBGCounters_0/ */
extern const BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg cBGCounters_0_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

/* CalculateTrainPosition_Pkg::cNoOfAtLeast_8_LRBGs/ */
#define cNoOfAtLeast_8_LRBGs_CalculateTrainPosition_Pkg (kcg_lit_int32(3))

/* CalculateTrainPosition_Pkg::cNoOfAtLeast_x_unlinkedBGs/ */
#define cNoOfAtLeast_x_unlinkedBGs_CalculateTrainPosition_Pkg (kcg_lit_int32(2))

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::cNoLinkedBG_index/ */
extern const linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg cNoLinkedBG_index_CalculateTrainPosition_Pkg_BG_relocation_Pkg;

/* CalculateTrainPosition_Pkg::gp_functions_Pkg::noValidIndex/ */
#define noValidIndex_CalculateTrainPosition_Pkg_gp_functions_Pkg              \
  (kcg_lit_int32(-1))

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::cNoRefPrevBGs/ */
extern const refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg cNoRefPrevBGs_CalculateTrainPosition_Pkg_BG_relocation_Pkg;

/* CalculateTrainPosition_Pkg::cNoInfoFromLinking/ */
extern const infoFromLinking_T_TrainPosition_Types_Pck cNoInfoFromLinking_CalculateTrainPosition_Pkg;

/* CalculateTrainPosition_Pkg::cNoPassedBG/ */
extern const passedBG_T_BG_Types_Pkg cNoPassedBG_CalculateTrainPosition_Pkg;

/* TrainPosition_Types_Pck::cQLOCACC_resolution/ */
#define cQLOCACC_resolution_TrainPosition_Types_Pck (kcg_lit_int32(100))

/* Obu_BasicTypes_Pkg::cLocWithInAcc_0/ */
extern const LocWithInAcc_T_Obu_BasicTypes_Pkg cLocWithInAcc_0_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::cOdometryInitialValue/ */
extern const OdometryLocations_T_Obu_BasicTypes_Pkg cOdometryInitialValue_Obu_BasicTypes_Pkg;

/* BG_Types_Pkg::cNID_BG_unknown/ */
#define cNID_BG_unknown_BG_Types_Pkg (kcg_lit_int32(16383))

/* BG_Types_Pkg::cNID_LRBG_14Bits_Multiplicator/ */
#define cNID_LRBG_14Bits_Multiplicator_BG_Types_Pkg (kcg_lit_int32(16384))

/* BG_Types_Pkg::cNID_LRBG_unknown/ */
#define cNID_LRBG_unknown_BG_Types_Pkg (kcg_lit_int32(16777215))

/* CalculateTrainPosition_Pkg::cNoPositionedBGs/ */
extern const positionedBGs_T_TrainPosition_Types_Pck cNoPositionedBGs_CalculateTrainPosition_Pkg;

/* CalculateTrainPosition_Pkg::cNoPositionErrors/ */
extern const positionErrors_T_TrainPosition_Types_Pck cNoPositionErrors_CalculateTrainPosition_Pkg;

/* TA_MA_Request::cCycleTime/ */
#define cCycleTime_TA_MA_Request (kcg_lit_int32(20))

/* XCP_numeric::ZERO_real/ */
#define ZERO_real_XCP_numeric (kcg_lit_float32(0.0))

/* TA_MA_Request::cLocation/ */
#define cLocation_TA_MA_Request (kcg_lit_int32(0))

/* TA_MA_Request::DEFAULT_P009/ */
extern const P009_TM_TrainToTrack DEFAULT_P009_TA_MA_Request;

/* TA_MA_Request::cM_version/ */
#define cM_version_TA_MA_Request M_VERSION_Version_1_1_introduced_in_SRS_3_3_0

/* TM_conversions::INT_Q_MARQSTREASON_timer_preindication_LOA/ */
#define INT_Q_MARQSTREASON_timer_preindication_LOA_TM_conversions             \
  (kcg_lit_int32(1))

/* TM_conversions::INT_Q_MARQSTREASON_section_timer/ */
#define INT_Q_MARQSTREASON_section_timer_TM_conversions (kcg_lit_int32(2))

/* TM_conversions::INT_Q_MARQSTREASON_track_description_deleted/ */
#define INT_Q_MARQSTREASON_track_description_deleted_TM_conversions           \
  (kcg_lit_int32(3))

/* TM_conversions::INT_Q_MARQSTREASON_driver/ */
#define INT_Q_MARQSTREASON_driver_TM_conversions (kcg_lit_int32(0))

/* TM_conversions::ENUM_Q_MARQSTREASON_TAF/ */
#define ENUM_Q_MARQSTREASON_TAF_TM_conversions                                \
  Q_MARQSTREASON_TAF_up_to_level_2_or_3_transition_location

/* TM_conversions::ENUM_Q_MARQSTREASON_track_description_deleted/ */
#define ENUM_Q_MARQSTREASON_track_description_deleted_TM_conversions          \
  Q_MARQSTREASON_Track_description_deleted

/* TM_conversions::ENUM_Q_MARQSTREASON_section_timer/ */
#define ENUM_Q_MARQSTREASON_section_timer_TM_conversions                      \
  Q_MARQSTREASON_Time_before_a_section_timer_or_LOA_speed_timer_expires_reached

/* TM_conversions::ENUM_Q_MARQSTREASON_timer_preindication_LOA/ */
#define ENUM_Q_MARQSTREASON_timer_preindication_LOA_TM_conversions            \
  Q_MARQSTREASON_Time_before_reaching_preindication_location_for_the_EOA_or_LOA_reached

/* TM_conversions::ENUM_Q_MARQSTREASON_driver/ */
#define ENUM_Q_MARQSTREASON_driver_TM_conversions                             \
  Q_MARQSTREASON_Start_selected_by_driver

/* TM_TrainToTrack::DIM_max_elements_P009/ */
#define DIM_max_elements_P009_TM_TrainToTrack (kcg_lit_int32(3))

/* TA_MA_Request::cMA_RequestParam/ */
extern const P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg cMA_RequestParam_TA_MA_Request;

/* TA_Gradient_new::DEFAULT_GP_Section/ */
extern const Gradient_section_t_TrackAtlasTypes DEFAULT_GP_Section_TA_Gradient_new;

/* TrackAtlasTypes::DEFAULT_GradientSection/ */
extern const Gradient_section_t_TrackAtlasTypes DEFAULT_GradientSection_TrackAtlasTypes;

/* TrackAtlasTypes::DEFAULT_GradientProfile/ */
extern const GradientProfile_t_TrackAtlasTypes DEFAULT_GradientProfile_TrackAtlasTypes;

/* TA_EmergencyStop::cEOA_NONE/ */
#define cEOA_NONE_TA_EmergencyStop (kcg_lit_int32(0))

/* TA_EmergencyStop::cNID_TEXTMESSAGE_NONE/ */
#define cNID_TEXTMESSAGE_NONE_TA_EmergencyStop (kcg_lit_int32(0))

/* TA_EmergencyStop::cQ_MARQSREASON_NONE/ */
#define cQ_MARQSREASON_NONE_TA_EmergencyStop                                  \
  Q_MARQSTREASON_Start_selected_by_driver

/* MA_Request::cPT9_Level23/ */
extern const PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg cPT9_Level23_MA_Request;

/* MA_Request::cPT5_TrainRunningNumber/ */
extern const PT5_TrainRunningNumber_Packet_TrainTypes_Pkg cPT5_TrainRunningNumber_MA_Request;

/* MA_Request::cPT4_ErrorReporting/ */
extern const PT4_ErrorReporting_T_Packet_TrainTypes_Pkg cPT4_ErrorReporting_MA_Request;

/* MA_Request::cPT3_OBUTelephoneNumber/ */
extern const PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg cPT3_OBUTelephoneNumber_MA_Request;

/* MA_Request::cPT11_ValidateTrainData/ */
extern const PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg cPT11_ValidateTrainData_MA_Request;

/* TA_EmergencyStop::NID_EM_Store::cNID_EM_STORE_EMPTY/ */
extern const NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store cNID_EM_STORE_EMPTY_TA_EmergencyStop_NID_EM_Store;

/* TA_EmergencyStop::NID_EM_Store::cNID_EM_STORE_SIZE/ */
#define cNID_EM_STORE_SIZE_TA_EmergencyStop_NID_EM_Store (kcg_lit_int32(8))

/* TA_EmergencyStop::cNID_EM_NONE/ */
#define cNID_EM_NONE_TA_EmergencyStop (kcg_lit_int32(0))

/* Id_Pkg::cm16_Unconditional_Emergency_Stop/ */
#define cm16_Unconditional_Emergency_Stop_Id_Pkg (kcg_lit_int32(16))

/* TA_EmergencyStop::DEFAULT_M147/ */
extern const M_147_T_TM_radio_messages DEFAULT_M147_TA_EmergencyStop;

/* TA_EmergencyStop::cMSG147_NONE/ */
extern const Radio_TrainTrack_Message_T_Radio_Types_Pkg cMSG147_NONE_TA_EmergencyStop;

/* TM_conversions::INT_Q_EMERGENCYSTOP_cond_accepted_with_EOA_update/ */
#define _92_INT_Q_EMERGENCYSTOP_cond_accepted_with_EOA_update_TM_conversions  \
  (kcg_lit_int32(0))

/* TM_conversions::INT_Q_EMERGENCYSTOP_cond_accepted_with_no_EOA_update/ */
#define INT_Q_EMERGENCYSTOP_cond_accepted_with_no_EOA_update_TM_conversions   \
  (kcg_lit_int32(1))

/* TM_conversions::INT_Q_EMERGENCYSTOP_uncond_accepted/ */
#define INT_Q_EMERGENCYSTOP_uncond_accepted_TM_conversions (kcg_lit_int32(2))

/* TM_conversions::INT_Q_EMERGENCYSTOP_rejected/ */
#define INT_Q_EMERGENCYSTOP_rejected_TM_conversions (kcg_lit_int32(3))

/* TM_conversions::ENUM_Q_EMERGENCYSTOP_rejected/ */
#define ENUM_Q_EMERGENCYSTOP_rejected_TM_conversions                          \
  Q_EMERGENCYSTOP_Emergency_stop

/* TM_conversions::ENUM_Q_EMERGENCYSTOP_uncond_accepted/ */
#define ENUM_Q_EMERGENCYSTOP_uncond_accepted_TM_conversions                   \
  Q_EMERGENCYSTOP_Unconditional_Emergency_Stop_accepted

/* TM_conversions::ENUM_Q_EMERGENCYSTOP_cond_accepted_with_no_EOA_update/ */
#define _90_ENUM_Q_EMERGENCYSTOP_cond_accepted_with_no_EOA_update_TM_conversions\
  _91_Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_no_update_of_EOA

/* TM_conversions::ENUM_Q_EMERGENCYSTOP_cond_accepted_with_EOA_update/ */
#define ENUM_Q_EMERGENCYSTOP_cond_accepted_with_EOA_update_TM_conversions     \
  Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA

/* MA_Request::cM_version/ */
#define cM_version_MA_Request M_VERSION_Version_1_1_introduced_in_SRS_3_3_0

/* TA_Export::END_OF_SSP_encoding/ */
#define END_OF_SSP_encoding_TA_Export (kcg_lit_int32(-1))

/* TA_Export::END_OF_SSP/ */
#define END_OF_SSP_TA_Export (kcg_lit_int32(635))

/* TA_Export::DEFAULT_MRSP_section/ */
extern const MRSP_section_t_TrackAtlasTypes DEFAULT_MRSP_section_TA_Export;

/* TA_Export::DEFAULT_MRSP_reduction_acc/ */
extern const MRSP_reduction_acc_TA_Export DEFAULT_MRSP_reduction_acc_TA_Export;

/* TA_Export::Default_P135_legacy/ */
extern const P135_StopShuntingOnDeskOpening_T_Packet_Types_Pkg Default_P135_legacy_TA_Export;

/* TA_Export::Default_P12_legacy/ */
extern const _7_P12_Level1MovementAuthorities_T_Packet_Types_Pkg Default_P12_legacy_TA_Export;

/* TA_Export::Default_P80_legacy/ */
extern const P80_ModeProfiles_T_Packet_Types_Pkg Default_P80_legacy_TA_Export;

/* TA_Export::Default_P63_legacy/ */
extern const P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg Default_P63_legacy_TA_Export;

/* TM_radio_messages::nid_message_TrackTrain_006/ */
#define nid_message_TrackTrain_006_TM_radio_messages (kcg_lit_int32(6))

/* TM_radio_messages::nid_message_TrackTrain_028/ */
#define nid_message_TrackTrain_028_TM_radio_messages (kcg_lit_int32(28))

/* TM_radio_messages::nid_message_TrackTrain_027/ */
#define nid_message_TrackTrain_027_TM_radio_messages (kcg_lit_int32(27))

/* TM_radio_messages::nid_message_TrackTrain_002/ */
#define nid_message_TrackTrain_002_TM_radio_messages (kcg_lit_int32(2))

/* TM_radio_messages::nid_message_TrackTrain_016/ */
#define nid_message_TrackTrain_016_TM_radio_messages (kcg_lit_int32(16))

/* TM_radio_messages::nid_message_TrackTrain_015/ */
#define nid_message_TrackTrain_015_TM_radio_messages (kcg_lit_int32(15))

/* TrackAtlasTypes::DEFAULT_Location_T/ */
#define DEFAULT_Location_T_TrackAtlasTypes (kcg_lit_int32(0))

/* TrackAtlasTypes::DEFAULT_LRBG/ */
#define DEFAULT_LRBG_TrackAtlasTypes (kcg_lit_int32(354))

/* TA_Export::ZERO/ */
#define ZERO_TA_Export (kcg_lit_int32(0))

/* TA_Storage::INIT_P3V1/ */
extern const P003V1_OBU_T_TM_baseline2 INIT_P3V1_TA_Storage;

/* TM_baseline2::DIM_MaxElementsPacket003V1/ */
#define DIM_MaxElementsPacket003V1_TM_baseline2                               \
  (kcg_lit_int32(32) * kcg_lit_int32(1) + kcg_lit_int32(6) + kcg_lit_int32(18))

/* TM_conversions::ENUM_Q_NVDRIVER_ADHES_Allowed/ */
#define ENUM_Q_NVDRIVER_ADHES_Allowed_TM_conversions Q_NVDRIVER_ADHES_Allowed

/* TM_conversions::ENUM_Q_NVDRIVER_ADHES_NotAllowed/ */
#define ENUM_Q_NVDRIVER_ADHES_NotAllowed_TM_conversions                       \
  Q_NVDRIVER_ADHES_Not_allowed

/* TM_conversions::INT_Q_NVDRIVER_ADHES_NotAllowed/ */
#define INT_Q_NVDRIVER_ADHES_NotAllowed_TM_conversions (kcg_lit_int32(0))

/* TM_conversions::INT_Q_NVDRIVER_ADHES_Allowed/ */
#define INT_Q_NVDRIVER_ADHES_Allowed_TM_conversions (kcg_lit_int32(1))

/* TM_conversions::ENUM_M_NVDERUN_no/ */
#define ENUM_M_NVDERUN_no_TM_conversions M_NVDERUN_No

/* TM_conversions::ENUM_M_NVDERUN_yes/ */
#define ENUM_M_NVDERUN_yes_TM_conversions M_NVDERUN_Yes

/* TM_conversions::INT_M_NVDERUN_yes/ */
#define INT_M_NVDERUN_yes_TM_conversions (kcg_lit_int32(1))

/* TM_conversions::INT_M_NVDERUN_no/ */
#define INT_M_NVDERUN_no_TM_conversions (kcg_lit_int32(0))

/* TM_conversions::ENUM_M_NVCONTACT_Apply_service_brake/ */
#define ENUM_M_NVCONTACT_Apply_service_brake_TM_conversions                   \
  M_NVCONTACT_Apply_service_brake

/* TM_conversions::ENUM_M_NVCONTACT_No_Reaction/ */
#define ENUM_M_NVCONTACT_No_Reaction_TM_conversions M_NVCONTACT_No_Reaction

/* TM_conversions::ENUM_M_NVCONTACT_Train_trip/ */
#define ENUM_M_NVCONTACT_Train_trip_TM_conversions M_NVCONTACT_Train_trip

/* TM_conversions::INT_M_NVCONTACT_Train_trip/ */
#define INT_M_NVCONTACT_Train_trip_TM_conversions (kcg_lit_int32(0))

/* TM_conversions::INT_M_NVCONTACT_No_Reaction/ */
#define INT_M_NVCONTACT_No_Reaction_TM_conversions (kcg_lit_int32(2))

/* TM_conversions::INT_M_NVCONTACT_Apply_service_brake/ */
#define INT_M_NVCONTACT_Apply_service_brake_TM_conversions (kcg_lit_int32(1))

/* TM_conversions::ENUM_Q_NVEMRRLS_revoke_when_no_speed_exceeded/ */
#define ENUM_Q_NVEMRRLS_revoke_when_no_speed_exceeded_TM_conversions          \
  _89_Q_NVEMRRLS_Revoke_emergency_brake_command_when_permitted_speed_supervision_limit_is_no_longer_exceeded

/* TM_conversions::ENUM_Q_NVEMRRLS_revoke_at_standstill/ */
#define ENUM_Q_NVEMRRLS_revoke_at_standstill_TM_conversions                   \
  Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill

/* TM_conversions::INT_Q_NVEMRRLS_revoke_when_no_speed_exceeded/ */
#define INT_Q_NVEMRRLS_revoke_when_no_speed_exceeded_TM_conversions           \
  (kcg_lit_int32(1))

/* TM_conversions::INT_Q_NVEMRRLS_revoke_at_standstill/ */
#define INT_Q_NVEMRRLS_revoke_at_standstill_TM_conversions (kcg_lit_int32(0))

/* TM_conversions::ENUM_Q_NVSBTSMPERM_Yes/ */
#define ENUM_Q_NVSBTSMPERM_Yes_TM_conversions Q_NVSBTSMPERM_Yes

/* TM_conversions::ENUM_Q_NVSBTSMPERM_No/ */
#define ENUM_Q_NVSBTSMPERM_No_TM_conversions Q_NVSBTSMPERM_No

/* TM_conversions::INT_Q_NVSBTSMPERM_No/ */
#define INT_Q_NVSBTSMPERM_No_TM_conversions (kcg_lit_int32(0))

/* TM_conversions::INT_Q_NVSBTSMPERM_Yes/ */
#define INT_Q_NVSBTSMPERM_Yes_TM_conversions (kcg_lit_int32(1))

/* TA_SSP_new::DEFAULT_SSP_section/ */
extern const StaticSpeedSection_t_TrackAtlasTypes DEFAULT_SSP_section_TA_SSP_new;

/* TA_SSP::DEFAULT_SSP_section/ */
extern const StaticSpeedSection_t_TrackAtlasTypes DEFAULT_SSP_section_TA_SSP;

/* TM_baseline2::DEFAULT_P027v1_OBU_section/ */
extern const P027V1_section_enum_T_TM_baseline2 DEFAULT_P027v1_OBU_section_TM_baseline2;

/* TrackAtlasTypes::DEFAULT_StaticSpeedSection/ */
extern const StaticSpeedSection_t_TrackAtlasTypes DEFAULT_StaticSpeedSection_TrackAtlasTypes;

/* TrackAtlasTypes::DIM_SSP/ */
#define DIM_SSP_TrackAtlasTypes (kcg_lit_int32(50))

/* TrackAtlasTypes::DEFAULT_StaticSpeedProfile/ */
extern const StaticSpeedProfile_t_TrackAtlasTypes DEFAULT_StaticSpeedProfile_TrackAtlasTypes;

/* TA_MRSP::SP_NTC/ */
extern const SSP_cat_t_TA_MRSP SP_NTC_TA_MRSP;

/* TA_MRSP::TOP_SSP_cat/ */
extern const SSP_cat_t_TA_MRSP TOP_SSP_cat_TA_MRSP;

/* TA_MRSP_new::XSSPold/ */
extern const SSP_cat_t_TA_MRSP_new XSSPold_TA_MRSP_new;

/* TA_MRSP_new::DIM_maxSSP_individual_sections/ */
#define _88_DIM_maxSSP_individual_sections_TA_MRSP_new (kcg_lit_int32(50))

/* TA_MRSP_new::DEFAULT_MRSP_Profile/ */
extern const MRSP_Profile_t_TrackAtlasTypes DEFAULT_MRSP_Profile_TA_MRSP_new;

/* TA_MRSP::DIM_maxSSP_individual_sections/ */
#define DIM_maxSSP_individual_sections_TA_MRSP (kcg_lit_int32(50))

/* TA_MRSP::DEFAULT_MRSP_Profile/ */
extern const MRSP_Profile_t_TrackAtlasTypes DEFAULT_MRSP_Profile_TA_MRSP;

/* CalculateTrainPosition_Pkg::cNoPositionedBG/ */
extern const positionedBG_T_TrainPosition_Types_Pck cNoPositionedBG_CalculateTrainPosition_Pkg;

/* CalculateTrainPosition_Pkg::cNoValidIndex/ */
#define cNoValidIndex_CalculateTrainPosition_Pkg (kcg_lit_int32(-1))

/* TA_Lib_internal::ENUM_MsgSource_Euroradio/ */
#define ENUM_MsgSource_Euroradio_TA_Lib_internal msrc_Euroradio_Common_Types_Pkg

/* TA_Lib_internal::ENUM_MsgSource_Balise/ */
#define ENUM_MsgSource_Balise_TA_Lib_internal msrc_Eurobalise_Common_Types_Pkg

/* TA_Lib_internal::DEFAULT_positioned_BG/ */
extern const positionedBG_T_TrainPosition_Types_Pck DEFAULT_positioned_BG_TA_Lib_internal;

/* TA_Lib_internal::DEFAULT_InfoFromPassing/ */
extern const passedBG_T_BG_Types_Pkg DEFAULT_InfoFromPassing_TA_Lib_internal;

/* TA_Lib_internal::DEFAULT_InfoFromLinking/ */
extern const infoFromLinking_T_TrainPosition_Types_Pck DEFAULT_InfoFromLinking_TA_Lib_internal;

/* TA_Lib_internal::DEFAULT_location/ */
extern const LocWithInAcc_T_Obu_BasicTypes_Pkg DEFAULT_location_TA_Lib_internal;

/* TA_Lib_internal::DEFAULT_q_link/ */
#define DEFAULT_q_link_TA_Lib_internal Q_LINK_Unlinked

/* TA_MA_new::DEFAULT_loc/ */
#define DEFAULT_loc_TA_MA_new (kcg_lit_int32(0))

/* TA_MA_new::keep_MA/ */
#define keep_MA_TA_MA_new replace_TA_MA_new

/* TA_MA_new::delete_MA/ */
#define delete_MA_TA_MA_new replace_TA_MA_new

/* TA_MA_new::replace_MA/ */
#define replace_MA_TA_MA_new replace_TA_MA_new

/* TrackAtlasTypes::DEFAULT_MA_section/ */
extern const _2_MovementAuthoritySection_t_TrackAtlasTypes DEFAULT_MA_section_TrackAtlasTypes;

/* TrackAtlasTypes::DEFAULT_DP/ */
extern const DP_or_OL_t_TrackAtlasTypes DEFAULT_DP_TrackAtlasTypes;

/* TM::ENUM_Q_SCALE_10m_QSCALE/ */
#define ENUM_Q_SCALE_10m_QSCALE_TM Q_SCALE_10_m_scale

/* TM::ENUM_Q_SCALE_10cm_QSCALE/ */
#define ENUM_Q_SCALE_10cm_QSCALE_TM Q_SCALE_10_cm_scale

/* TrackAtlasTypes::DEFAULT_OL/ */
extern const DP_or_OL_t_TrackAtlasTypes DEFAULT_OL_TrackAtlasTypes;

/* TA_MA_new::DefaultMA_section/ */
extern const _2_MovementAuthoritySection_t_TrackAtlasTypes DefaultMA_section_TA_MA_new;

/* TA_MA_new::DEFAULT_v_main/ */
#define DEFAULT_v_main_TA_MA_new (kcg_lit_int32(0))

/* TA_MA_new::MA_level23/ */
#define MA_level23_TA_MA_new MA_L23_TrackAtlasTypes

/* TA_MA_new::DEFAULT_AccuDistanceProfileMA/ */
extern const AccuDistanceProfileMA_TA_MA_new DEFAULT_AccuDistanceProfileMA_TA_MA_new;

/* TrackAtlasTypes::DEFAULT_Endtimer/ */
extern const Endtimer_t_TrackAtlasTypes DEFAULT_Endtimer_TrackAtlasTypes;

/* TrackAtlasTypes::DEFAULT_MovementAuthority/ */
extern const MovementAuthority_t_TrackAtlasTypes DEFAULT_MovementAuthority_TrackAtlasTypes;

/* TM_baseline2::DEFAULT_P003V1_OBU_section/ */
extern const P003V1_section_enum_T_TM_baseline2 DEFAULT_P003V1_OBU_section_TM_baseline2;

/* TrackAtlas::NTC_values_to_supervision/ */
extern const DataForSupervision_nextGen_t_TrackAtlasTypes NTC_values_to_supervision_TrackAtlas;

/* TrackAtlas::Mode_NTC/ */
#define Mode_NTC_TrackAtlas M_MODE_National_System

/* trainData_Types_pkg::cNoTrigger/ */
extern const trainData_Trigger_T_trainData_Types_pkg cNoTrigger_trainData_Types_pkg;

/* Id_Pkg::cm32_RBC_RIU_System_Version/ */
#define cm32_RBC_RIU_System_Version_Id_Pkg (kcg_lit_int32(32))

/* Id_Pkg::cm15_Conditional_Emergency_Stop/ */
#define cm15_Conditional_Emergency_Stop_Id_Pkg (kcg_lit_int32(15))

/* Id_Pkg::cm08_Acknowledgement_of_Train_Data/ */
#define cm08_Acknowledgement_of_Train_Data_Id_Pkg (kcg_lit_int32(8))

/* trainData_Types_pkg::cEmptyTrainData/ */
extern const trainData_T_TIU_Types_Pkg cEmptyTrainData_trainData_Types_pkg;

/* trainData_Types_pkg::cNoStates/ */
extern const trainDataStatus_T_trainData_Types_pkg cNoStates_trainData_Types_pkg;

/* Id_Pkg::co146_Acknowledgement/ */
#define co146_Acknowledgement_Id_Pkg (kcg_lit_int32(146))

/* ids::cp011_ValidatedTrainData/ */
#define cp011_ValidatedTrainData_ids (kcg_lit_int32(11))

/* Id_Pkg::co129_Validated_Train_Data/ */
#define co129_Validated_Train_Data_Id_Pkg (kcg_lit_int32(129))

/* TM_conversions::INT_M_VOLTAGE_AC_25_kV_50_Hz/ */
#define INT_M_VOLTAGE_AC_25_kV_50_Hz_TM_conversions (kcg_lit_int32(1))

/* TM_conversions::INT_M_VOLTAGE_AC_15_kV_16_7_Hz/ */
#define INT_M_VOLTAGE_AC_15_kV_16_7_Hz_TM_conversions (kcg_lit_int32(2))

/* TM_conversions::INT_M_VOLTAGE_DC_3_kV/ */
#define INT_M_VOLTAGE_DC_3_kV_TM_conversions (kcg_lit_int32(3))

/* TM_conversions::INT_M_VOLTAGE_DC_1_5_kV/ */
#define INT_M_VOLTAGE_DC_1_5_kV_TM_conversions (kcg_lit_int32(4))

/* TM_conversions::INT_M_VOLTAGE_DC_600_or_750_V/ */
#define INT_M_VOLTAGE_DC_600_or_750_V_TM_conversions (kcg_lit_int32(5))

/* TM_conversions::INT_M_VOLTAGE_Line_not_fitted/ */
#define INT_M_VOLTAGE_Line_not_fitted_TM_conversions (kcg_lit_int32(0))

/* TM_conversions::ENUM_M_VOLTAGE_DC_600_or_750_V/ */
#define ENUM_M_VOLTAGE_DC_600_or_750_V_TM_conversions M_VOLTAGE_DC_600_or_750_V

/* TM_conversions::ENUM_M_VOLTAGE_DC_1_5_kV/ */
#define ENUM_M_VOLTAGE_DC_1_5_kV_TM_conversions M_VOLTAGE_DC_1_5_kV

/* TM_conversions::ENUM_M_VOLTAGE_DC_3_kV/ */
#define ENUM_M_VOLTAGE_DC_3_kV_TM_conversions M_VOLTAGE_DC_3_kV

/* TM_conversions::ENUM_M_VOLTAGE_AC_15_kV_16_7_Hz/ */
#define ENUM_M_VOLTAGE_AC_15_kV_16_7_Hz_TM_conversions                        \
  M_VOLTAGE_AC_15_kV_16_7_Hz

/* TM_conversions::ENUM_M_VOLTAGE_AC_25_kV_50_Hz/ */
#define ENUM_M_VOLTAGE_AC_25_kV_50_Hz_TM_conversions M_VOLTAGE_AC_25_kV_50_Hz

/* TM_conversions::ENUM_M_VOLTAGE_Line_not_fitted/ */
#define ENUM_M_VOLTAGE_Line_not_fitted_TM_conversions                         \
  M_VOLTAGE_Line_not_fitted_with_any_traction_system

/* TM_TrainToTrack::DEFAULT_P011_voltage_sections_array_flat/ */
extern const P011_voltage_sections_array_flat_t_TM_TrainToTrack DEFAULT_P011_voltage_sections_array_flat_TM_TrainToTrack;

/* TM_conversions::DIM_L_TRAIN_min/ */
#define DIM_L_TRAIN_min_TM_conversions (kcg_lit_int32(0))

/* TM_conversions::DIM_L_TRAIN_max/ */
#define DIM_L_TRAIN_max_TM_conversions (kcg_lit_int32(4095))

/* TM_conversions::INT_NC_CDTRAIN_080mm/ */
#define INT_NC_CDTRAIN_080mm_TM_conversions (kcg_lit_int32(0))

/* TM_conversions::INT_NC_CDTRAIN_100mm/ */
#define INT_NC_CDTRAIN_100mm_TM_conversions (kcg_lit_int32(1))

/* TM_conversions::INT_NC_CDTRAIN_130mm/ */
#define INT_NC_CDTRAIN_130mm_TM_conversions (kcg_lit_int32(2))

/* TM_conversions::INT_NC_CDTRAIN_150mm/ */
#define INT_NC_CDTRAIN_150mm_TM_conversions (kcg_lit_int32(3))

/* TM_conversions::INT_NC_CDTRAIN_165mm/ */
#define INT_NC_CDTRAIN_165mm_TM_conversions (kcg_lit_int32(4))

/* TM_conversions::INT_NC_CDTRAIN_180mm/ */
#define INT_NC_CDTRAIN_180mm_TM_conversions (kcg_lit_int32(5))

/* TM_conversions::INT_NC_CDTRAIN_210mm/ */
#define INT_NC_CDTRAIN_210mm_TM_conversions (kcg_lit_int32(6))

/* TM_conversions::INT_NC_CDTRAIN_225mm/ */
#define INT_NC_CDTRAIN_225mm_TM_conversions (kcg_lit_int32(7))

/* TM_conversions::INT_NC_CDTRAIN_245mm/ */
#define INT_NC_CDTRAIN_245mm_TM_conversions (kcg_lit_int32(8))

/* TM_conversions::INT_NC_CDTRAIN_275mm/ */
#define INT_NC_CDTRAIN_275mm_TM_conversions (kcg_lit_int32(9))

/* TM_conversions::INT_NC_CDTRAIN_300mm/ */
#define INT_NC_CDTRAIN_300mm_TM_conversions (kcg_lit_int32(10))

/* TM_conversions::ENUM_NC_CDTRAIN_300mm/ */
#define ENUM_NC_CDTRAIN_300mm_TM_conversions NC_CDTRAIN_Cant_Deficiency_300_mm

/* TM_conversions::ENUM_NC_CDTRAIN_275mm/ */
#define ENUM_NC_CDTRAIN_275mm_TM_conversions NC_CDTRAIN_Cant_Deficiency_275_mm

/* TM_conversions::ENUM_NC_CDTRAIN_245mm/ */
#define ENUM_NC_CDTRAIN_245mm_TM_conversions NC_CDTRAIN_Cant_Deficiency_245_mm

/* TM_conversions::ENUM_NC_CDTRAIN_225mm/ */
#define ENUM_NC_CDTRAIN_225mm_TM_conversions NC_CDTRAIN_Cant_Deficiency_225_mm

/* TM_conversions::ENUM_NC_CDTRAIN_210mm/ */
#define ENUM_NC_CDTRAIN_210mm_TM_conversions NC_CDTRAIN_Cant_Deficiency_210_mm

/* TM_conversions::ENUM_NC_CDTRAIN_180mm/ */
#define ENUM_NC_CDTRAIN_180mm_TM_conversions NC_CDTRAIN_Cant_Deficiency_180_mm

/* TM_conversions::ENUM_NC_CDTRAIN_165mm/ */
#define ENUM_NC_CDTRAIN_165mm_TM_conversions NC_CDTRAIN_Cant_Deficiency_165_mm

/* TM_conversions::ENUM_NC_CDTRAIN_150mm/ */
#define ENUM_NC_CDTRAIN_150mm_TM_conversions NC_CDTRAIN_Cant_Deficiency_150_mm

/* TM_conversions::ENUM_NC_CDTRAIN_130mm/ */
#define ENUM_NC_CDTRAIN_130mm_TM_conversions NC_CDTRAIN_Cant_Deficiency_130_mm

/* TM_conversions::ENUM_NC_CDTRAIN_100mm/ */
#define ENUM_NC_CDTRAIN_100mm_TM_conversions NC_CDTRAIN_Cant_Deficiency_100_mm

/* TM_conversions::ENUM_NC_CDTRAIN_080mm/ */
#define ENUM_NC_CDTRAIN_080mm_TM_conversions NC_CDTRAIN_Cant_Deficiency_80_mm

/* TM_TrainToTrack::DIM_max_elements_P011/ */
#define DIM_max_elements_P011_TM_TrainToTrack                                 \
  (kcg_lit_int32(11) + kcg_lit_int32(4) * kcg_lit_int32(2) + kcg_lit_int32(1) +\
    kcg_lit_int32(5))

/* trainData_pkg::cNoBus/ */
extern const M_TrainTrackMessageBus_t_TM_TrainTrack_Bus cNoBus_trainData_pkg;

/* Id_Pkg::cm18_Revocation_of_Emergency_Stop/ */
#define cm18_Revocation_of_Emergency_Stop_Id_Pkg (kcg_lit_int32(18))

/* TM::DIM_MaxElementsPacket065/ */
#define DIM_MaxElementsPacket065_TM (kcg_lit_int32(9))

/* TM_conversions::ENUM_Q_SLEEPSESSION_ignore/ */
#define ENUM_Q_SLEEPSESSION_ignore_TM_conversions                             \
  Q_SLEEPSESSION_Ignore_session_establishment_order

/* TM_conversions::ENUM_Q_SLEEPSESSION_execute/ */
#define ENUM_Q_SLEEPSESSION_execute_TM_conversions                            \
  Q_SLEEPSESSION_Execute_session_establishment_order

/* TM_conversions::INT_Q_SLEEPSESSION_ignore/ */
#define INT_Q_SLEEPSESSION_ignore_TM_conversions (kcg_lit_int32(0))

/* TM_conversions::INT_Q_SLEEPSESSION_execute/ */
#define INT_Q_SLEEPSESSION_execute_TM_conversions (kcg_lit_int32(1))

/* TM_conversions::ENUM_Q_RBC_establish/ */
#define ENUM_Q_RBC_establish_TM_conversions                                   \
  Q_RBC_Establish_communication_session

/* TM_conversions::ENUM_Q_RBC_terminate/ */
#define ENUM_Q_RBC_terminate_TM_conversions                                   \
  Q_RBC_Terminate_communication_session

/* TM_conversions::INT_Q_RBC_terminate/ */
#define INT_Q_RBC_terminate_TM_conversions (kcg_lit_int32(0))

/* TM_conversions::INT_Q_RBC_establish/ */
#define INT_Q_RBC_establish_TM_conversions (kcg_lit_int32(1))

/* TM_lib_internal::DIM_P005_n_sections/ */
#define DIM_P005_n_sections_TM_lib_internal (kcg_lit_int32(7))

/* TM_conversions::ENUM_Q_LINKORIENTATION_nominal/ */
#define ENUM_Q_LINKORIENTATION_nominal_TM_conversions                         \
  _87_Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_nominal_direction

/* TM_conversions::ENUM_Q_LINKORIENTATION_reverse/ */
#define ENUM_Q_LINKORIENTATION_reverse_TM_conversions                         \
  Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction

/* TM_conversions::INT_Q_LINKORIENTATION_reverse/ */
#define INT_Q_LINKORIENTATION_reverse_TM_conversions (kcg_lit_int32(0))

/* TM_conversions::INT_Q_LINKORIENTATION_nominal/ */
#define INT_Q_LINKORIENTATION_nominal_TM_conversions (kcg_lit_int32(1))

/* TM_conversions::ENUM_Q_LINKREACTION_Apply_servicebrake/ */
#define ENUM_Q_LINKREACTION_Apply_servicebrake_TM_conversions                 \
  Q_LINKREACTION_Apply_service_brake

/* TM_conversions::ENUM_Q_LINKREACTION_No_Reaction/ */
#define ENUM_Q_LINKREACTION_No_Reaction_TM_conversions                        \
  Q_LINKREACTION_No_Reaction

/* TM_conversions::ENUM_Q_LINKREACTION_Train_trip/ */
#define ENUM_Q_LINKREACTION_Train_trip_TM_conversions Q_LINKREACTION_Train_trip

/* TM_conversions::INT_Q_LINKREACTION_No_Reaction/ */
#define INT_Q_LINKREACTION_No_Reaction_TM_conversions (kcg_lit_int32(2))

/* TM_conversions::INT_Q_LINKREACTION_Train_trip/ */
#define INT_Q_LINKREACTION_Train_trip_TM_conversions (kcg_lit_int32(0))

/* TM_conversions::INT_Q_LINKREACTION_Apply_servicebrake/ */
#define INT_Q_LINKREACTION_Apply_servicebrake_TM_conversions (kcg_lit_int32(1))

/* TM_conversions::ENUM_Q_NEWCOUNTRY_same/ */
#define ENUM_Q_NEWCOUNTRY_same_TM_conversions                                 \
  Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows

/* TM_conversions::ENUM_Q_NEWCOUNTRY_not_same/ */
#define ENUM_Q_NEWCOUNTRY_not_same_TM_conversions                             \
  Q_NEWCOUNTRY_Not_the_same_country__or__railway_administration_NID_C_follows

/* TM_conversions::INT_Q_NEWCOUNTRY_not_same/ */
#define INT_Q_NEWCOUNTRY_not_same_TM_conversions (kcg_lit_int32(1))

/* TM_conversions::INT_Q_NEWCOUNTRY_same/ */
#define INT_Q_NEWCOUNTRY_same_TM_conversions (kcg_lit_int32(0))

/* TM_lib_internal::DEFAULT_P005_OBU_section/ */
extern const P005_section_enum_T_TM DEFAULT_P005_OBU_section_TM_lib_internal;

/* TM::DIM_MaxElementsPacket063/ */
#define DIM_MaxElementsPacket063_TM                                           \
  (kcg_lit_int32(32) * kcg_lit_int32(3) + kcg_lit_int32(4))

/* xdebugSupport_Pkg::cNoP41Element/ */
extern const P41_LevelTransitionOrder_T_Packet_Types_Pkg cNoP41Element_xdebugSupport_Pkg;

/* Id_Pkg::cp046_Conditional_Level_Transition_Order/ */
#define cp046_Conditional_Level_Transition_Order_Id_Pkg (kcg_lit_int32(46))

/* Id_Pkg::cp041_Level_Transition_Order/ */
#define cp041_Level_Transition_Order_Id_Pkg (kcg_lit_int32(41))

/* TM_specific::DEFAULT_P046_legacy/ */
extern const _8_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg DEFAULT_P046_legacy_TM_specific;

/* TM_lib_internal::DIM_P046_n_sections/ */
#define DIM_P046_n_sections_TM_lib_internal (kcg_lit_int32(2))

/* TM::DIM_MaxElementsPacket046/ */
#define DIM_MaxElementsPacket046_TM                                           \
  ((kcg_lit_int32(32) + kcg_lit_int32(1)) * kcg_lit_int32(2) + kcg_lit_int32(4))

/* TM::DEFAULT_P046_OBU_section/ */
extern const P046_section_enum_T_TM DEFAULT_P046_OBU_section_TM;

/* TM_specific::DEFAULT_P041_legacy/ */
extern const P41_LevelTransistionOrders_T_Packet_Types_Pkg DEFAULT_P041_legacy_TM_specific;

/* TM::DEFAULT_P041_OBU_section/ */
extern const P041_section_enum_T_TM DEFAULT_P041_OBU_section_TM;

/* TM_lib_internal::DIM_P080_n_sections/ */
#define DIM_P080_n_sections_TM_lib_internal (kcg_lit_int32(6))

/* TM_conversions::ENUM_Q_MAMODE_as_SvL_and_EOA/ */
#define ENUM_Q_MAMODE_as_SvL_and_EOA_TM_conversions                           \
  Q_MAMODE_as_both_the_EOA_and_SvL

/* TM_conversions::ENUM_Q_MAMODE_as_EOA/ */
#define ENUM_Q_MAMODE_as_EOA_TM_conversions Q_MAMODE_as_the_EOA

/* TM_conversions::INT_Q_MAMODE_as_SvL_and_EOA/ */
#define INT_Q_MAMODE_as_SvL_and_EOA_TM_conversions (kcg_lit_int32(1))

/* TM_conversions::INT_Q_MAMODE_as_EOA/ */
#define INT_Q_MAMODE_as_EOA_TM_conversions (kcg_lit_int32(0))

/* TM_conversions::ENUM_M_MAMODE_limited_supervision/ */
#define ENUM_M_MAMODE_limited_supervision_TM_conversions                      \
  M_MAMODE_Limited_Supervision

/* TM_conversions::ENUM_M_MAMODE_shunting/ */
#define ENUM_M_MAMODE_shunting_TM_conversions M_MAMODE_Shunting

/* TM_conversions::ENUM_M_MAMODE_on_sight/ */
#define ENUM_M_MAMODE_on_sight_TM_conversions M_MAMODE_On_Sight

/* TM_conversions::INT_M_MAMODE_shunting/ */
#define INT_M_MAMODE_shunting_TM_conversions (kcg_lit_int32(1))

/* TM_conversions::INT_M_MAMODE_limited_supervision/ */
#define INT_M_MAMODE_limited_supervision_TM_conversions (kcg_lit_int32(2))

/* TM_conversions::INT_M_MAMODE_on_sight/ */
#define INT_M_MAMODE_on_sight_TM_conversions (kcg_lit_int32(0))

/* TM::DEFAULT_P080_OBU_section/ */
extern const P080_section_enum_T_TM DEFAULT_P080_OBU_section_TM;

/* TM::DIM_MaxElementsPacket080/ */
#define DIM_MaxElementsPacket080_TM                                           \
  (kcg_lit_int32(32) * kcg_lit_int32(6) + kcg_lit_int32(4) + kcg_lit_int32(1) +\
    kcg_lit_int32(6))

/* EVC_MEM_Support_Pkg::Default_P12_legacy/ */
extern const _7_P12_Level1MovementAuthorities_T_Packet_Types_Pkg Default_P12_legacy_EVC_MEM_Support_Pkg;

/* EVC_MEM_Support_Pkg::Default_P63_legacy/ */
extern const P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg Default_P63_legacy_EVC_MEM_Support_Pkg;

/* EVC_MEM_Support_Pkg::Default_P135_legacy/ */
extern const P135_StopShuntingOnDeskOpening_T_Packet_Types_Pkg Default_P135_legacy_EVC_MEM_Support_Pkg;

/* EVC_MEM_Support_Pkg::Default_P80_element/ */
extern const P80_ModeProfile_T_Packet_Types_Pkg Default_P80_element_EVC_MEM_Support_Pkg;

/* EVC_MEM_Support_Pkg::cNoP41/ */
extern const P41_LevelTransistionOrders_T_Packet_Types_Pkg cNoP41_EVC_MEM_Support_Pkg;

/* EVC_MEM_Support_Pkg::Default_P80_legacy/ */
extern const P80_ModeProfiles_T_Packet_Types_Pkg Default_P80_legacy_EVC_MEM_Support_Pkg;

/* EVC_MEM_Support_Pkg::cNoML/ */
extern const dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg cNoML_EVC_MEM_Support_Pkg;

/* TM_specific::DEFAULT_P021_legacy/ */
extern const P21_GradientProfiles_T_Packet_Types_Pkg DEFAULT_P021_legacy_TM_specific;

/* TM_specific::DEFAULT_P015_legacy/ */
extern const _6_P15_Level23MovementAuthorities_T_Packet_Types_Pkg DEFAULT_P015_legacy_TM_specific;

/* TM::DIM_MaxElementsPacket139/ */
#define DIM_MaxElementsPacket139_TM (kcg_lit_int32(6))

/* TM::DEFAULT_P139_legacy/ */
extern const P139_ReversingSupervisionInformation_T_Packet_Types_Pkg DEFAULT_P139_legacy_TM;

/* TM::DIM_MaxElementsPacket136/ */
#define DIM_MaxElementsPacket136_TM (kcg_lit_int32(6))

/* TM::DIM_MaxElementsPacket138/ */
#define DIM_MaxElementsPacket138_TM (kcg_lit_int32(6))

/* TM::DEFAULT_P138_legacy/ */
extern const P138_ReversingAreaInformation_T_Packet_Types_Pkg DEFAULT_P138_legacy_TM;

/* TM_conversions::ENUM_Q_SRSTOP_go/ */
#define ENUM_Q_SRSTOP_go_TM_conversions Q_SRSTOP_Go_if_in_SR_mode

/* TM_conversions::ENUM_Q_SRSTOP_stop/ */
#define ENUM_Q_SRSTOP_stop_TM_conversions Q_SRSTOP_Stop_if_in_SR_mode

/* TM_conversions::INT_Q_SRSTOP_stop/ */
#define INT_Q_SRSTOP_stop_TM_conversions (kcg_lit_int32(0))

/* TM_conversions::INT_Q_SRSTOP_go/ */
#define INT_Q_SRSTOP_go_TM_conversions (kcg_lit_int32(1))

/* TM::DIM_MaxElementsPacket135/ */
#define DIM_MaxElementsPacket135_TM (kcg_lit_int32(3))

/* cLocationAccuracyDefault/ */
extern const LocWithInAcc_T_Obu_BasicTypes_Pkg cLocationAccuracyDefault;

/* cD_FE2RE/ */
extern const LocWithInAcc_T_Obu_BasicTypes_Pkg cD_FE2RE;

/* cD_Antenna2FE/ */
extern const LocWithInAcc_T_Obu_BasicTypes_Pkg cD_Antenna2FE;

/* cCenterDetectionAccuracyDefault/ */
extern const LocWithInAcc_T_Obu_BasicTypes_Pkg cCenterDetectionAccuracyDefault;

/* cEmptyTrainData/ */
extern const trainData_T_TIU_Types_Pkg cEmptyTrainData;

/* TIU_Types_Pkg::emptyTIUInfo/ */
extern const Message_Train_Interface_to_EVC_T_TIU_Types_Pkg emptyTIUInfo_TIU_Types_Pkg;

/* Id_Pkg::co132_MA_Request/ */
#define co132_MA_Request_Id_Pkg (kcg_lit_int32(132))

/* TM_lib_internal::DEFAULT_output_buffer/ */
extern const M_TrainTrackRadioOutputBuffer_t_TM_lib_internal DEFAULT_output_buffer_TM_lib_internal;

/* TM_lib_internal::DIM_FIFO_TrainTrackOutput/ */
#define DIM_FIFO_TrainTrackOutput_TM_lib_internal (kcg_lit_int32(100))

/* Id_Pkg::co136_Train_Position_Report/ */
#define co136_Train_Position_Report_Id_Pkg (kcg_lit_int32(136))

/* RadioSupport_Pkg::cEmptyMsg/ */
extern const M_TrainTrack_Message_T_TM_radio_messages cEmptyMsg_RadioSupport_Pkg;

/* TM_conversions::INT_Q_DIRTRAIN_nominal/ */
#define INT_Q_DIRTRAIN_nominal_TM_conversions (kcg_lit_int32(1))

/* TM_conversions::INT_Q_DIRTRAIN_reverse/ */
#define INT_Q_DIRTRAIN_reverse_TM_conversions (kcg_lit_int32(0))

/* TM_conversions::INT_Q_DIRTRAIN_unknown/ */
#define INT_Q_DIRTRAIN_unknown_TM_conversions (kcg_lit_int32(2))

/* TM_conversions::ENUM_Q_DIRTRAIN_unknown/ */
#define ENUM_Q_DIRTRAIN_unknown_TM_conversions Q_DIRTRAIN_Unknown

/* TM_conversions::ENUM_Q_DIRTRAIN_reverse/ */
#define ENUM_Q_DIRTRAIN_reverse_TM_conversions Q_DIRTRAIN_Reverse

/* TM_conversions::ENUM_Q_DIRTRAIN_nominal/ */
#define ENUM_Q_DIRTRAIN_nominal_TM_conversions Q_DIRTRAIN_Nominal

/* TM_conversions::DIM_L_TRAININT_max/ */
#define DIM_L_TRAININT_max_TM_conversions (kcg_lit_int32(32767))

/* TM_conversions::DIM_L_TRAININT_min/ */
#define DIM_L_TRAININT_min_TM_conversions (kcg_lit_int32(0))

/* TM_conversions::INT_Q_LENGTH_no_info_available/ */
#define INT_Q_LENGTH_no_info_available_TM_conversions (kcg_lit_int32(0))

/* TM_conversions::INT_Q_LENGTH_confimed_by_device/ */
#define INT_Q_LENGTH_confimed_by_device_TM_conversions (kcg_lit_int32(1))

/* TM_conversions::INT_Q_LENGTH_confimed_by_driver/ */
#define INT_Q_LENGTH_confimed_by_driver_TM_conversions (kcg_lit_int32(2))

/* TM_conversions::INT_Q_LENGTH_integrity_lost/ */
#define INT_Q_LENGTH_integrity_lost_TM_conversions (kcg_lit_int32(3))

/* TM_conversions::ENUM_Q_LENGTH_integrity_lost/ */
#define ENUM_Q_LENGTH_integrity_lost_TM_conversions                           \
  Q_LENGTH_Train_integrity_lost

/* TM_conversions::ENUM_Q_LENGTH_confimed_by_driver/ */
#define ENUM_Q_LENGTH_confimed_by_driver_TM_conversions                       \
  _86_Q_LENGTH_Train_integrity_confirmed_by_driver

/* TM_conversions::ENUM_Q_LENGTH_confimed_by_device/ */
#define ENUM_Q_LENGTH_confimed_by_device_TM_conversions                       \
  Q_LENGTH_Train_integrity_confirmed_by_integrity_monitoring_device

/* TM_conversions::ENUM_Q_LENGTH_no_info_available/ */
#define ENUM_Q_LENGTH_no_info_available_TM_conversions                        \
  Q_LENGTH_No_train_integrity_information_available

/* TM_conversions::INT_Q_DLRBG_nominal/ */
#define INT_Q_DLRBG_nominal_TM_conversions (kcg_lit_int32(1))

/* TM_conversions::INT_Q_DLRBG_reverse/ */
#define INT_Q_DLRBG_reverse_TM_conversions (kcg_lit_int32(0))

/* TM_conversions::INT_Q_DLRBG_unknown/ */
#define INT_Q_DLRBG_unknown_TM_conversions (kcg_lit_int32(2))

/* TM_conversions::ENUM_Q_DLRBG_unknown/ */
#define ENUM_Q_DLRBG_unknown_TM_conversions Q_DLRBG_Unknown

/* TM_conversions::ENUM_Q_DLRBG_reverse/ */
#define ENUM_Q_DLRBG_reverse_TM_conversions Q_DLRBG_Reverse

/* TM_conversions::ENUM_Q_DLRBG_nominal/ */
#define ENUM_Q_DLRBG_nominal_TM_conversions Q_DLRBG_Nominal

/* TM_conversions::INT_Q_DIRLRBG_nominal/ */
#define INT_Q_DIRLRBG_nominal_TM_conversions (kcg_lit_int32(1))

/* TM_conversions::INT_Q_DIRLRBG_reverse/ */
#define INT_Q_DIRLRBG_reverse_TM_conversions (kcg_lit_int32(0))

/* TM_conversions::INT_Q_DIRLRBG_unknown/ */
#define INT_Q_DIRLRBG_unknown_TM_conversions (kcg_lit_int32(2))

/* TM_conversions::ENUM_Q_DIRLRBG_unknown/ */
#define ENUM_Q_DIRLRBG_unknown_TM_conversions Q_DIRLRBG_Unknown

/* TM_conversions::ENUM_Q_DIRLRBG_reverse/ */
#define ENUM_Q_DIRLRBG_reverse_TM_conversions Q_DIRLRBG_Reverse

/* TM_conversions::ENUM_Q_DIRLRBG_nominal/ */
#define ENUM_Q_DIRLRBG_nominal_TM_conversions Q_DIRLRBG_Nominal

/* TM_TrainToTrack::DEFAULT_P044_int/ */
extern const P044_TrainTrack_int_TM_TrainToTrack DEFAULT_P044_int_TM_TrainToTrack;

/* TM_TrainToTrack::INVALID_NID_PACKET/ */
#define INVALID_NID_PACKET_TM_TrainToTrack (kcg_lit_int32(999))

/* TM_radio_messages::nid_meta_p000/ */
#define nid_meta_p000_TM_radio_messages (kcg_lit_int32(998))

/* TM_conversions::INT_M_ERROR_balise_group_linking_conistency/ */
#define INT_M_ERROR_balise_group_linking_conistency_TM_conversions            \
  (kcg_lit_int32(0))

/* TM_conversions::INT_M_ERROR_Double_linking_error/ */
#define INT_M_ERROR_Double_linking_error_TM_conversions (kcg_lit_int32(7))

/* TM_conversions::INT_M_ERROR_Double_repositioning_error/ */
#define INT_M_ERROR_Double_repositioning_error_TM_conversions (kcg_lit_int32(8))

/* TM_conversions::INT_M_ERROR_Linked_balise_group_message_consistency_error/ */
#define INT_M_ERROR_Linked_balise_group_message_consistency_error_TM_conversions\
  (kcg_lit_int32(1))

/* TM_conversions::INT_M_ERROR_Radio_message_consistency_error/ */
#define INT_M_ERROR_Radio_message_consistency_error_TM_conversions            \
  (kcg_lit_int32(3))

/* TM_conversions::INT_M_ERROR_Radio_safe_radio_connection_error/ */
#define INT_M_ERROR_Radio_safe_radio_connection_error_TM_conversions          \
  (kcg_lit_int32(5))

/* TM_conversions::INT_M_ERROR_Radio_sequence_error/ */
#define INT_M_ERROR_Radio_sequence_error_TM_conversions (kcg_lit_int32(4))

/* TM_conversions::INT_M_ERROR_Unlinked_balise_group_message_consistency_error/ */
#define INT_M_ERROR_Unlinked_balise_group_message_consistency_error_TM_conversions\
  (kcg_lit_int32(2))

/* TM_conversions::INT_M_ERROR_Safety_critical_failure/ */
#define INT_M_ERROR_Safety_critical_failure_TM_conversions (kcg_lit_int32(6))

/* TM_conversions::ENUM_M_ERROR_Unlinked_balise_group_message_consistency_error/ */
#define ENUM_M_ERROR_Unlinked_balise_group_message_consistency_error_TM_conversions\
  M_ERROR_Unlinked_balise_group_message_consistency_error

/* TM_conversions::ENUM_M_ERROR_Safety_critical_failure/ */
#define ENUM_M_ERROR_Safety_critical_failure_TM_conversions                   \
  M_ERROR_Safety_critical_failure

/* TM_conversions::ENUM_M_ERROR_Radio_sequence_error/ */
#define ENUM_M_ERROR_Radio_sequence_error_TM_conversions                      \
  M_ERROR_Radio_sequence_error

/* TM_conversions::ENUM_M_ERROR_Radio_safe_radio_connection_error/ */
#define ENUM_M_ERROR_Radio_safe_radio_connection_error_TM_conversions         \
  M_ERROR_Radio_safe_radio_connection_error

/* TM_conversions::ENUM_M_ERROR_Radio_message_consistency_error/ */
#define ENUM_M_ERROR_Radio_message_consistency_error_TM_conversions           \
  M_ERROR_Radio_message_consistency_error

/* TM_conversions::ENUM_M_ERROR_Linked_balise_group_message_consistency_erro/ */
#define ENUM_M_ERROR_Linked_balise_group_message_consistency_erro_TM_conversions\
  M_ERROR_Linked_balise_group_message_consistency_erro

/* TM_conversions::ENUM_M_ERROR_Double_repositioning_error/ */
#define ENUM_M_ERROR_Double_repositioning_error_TM_conversions                \
  M_ERROR_Double_repositioning_error

/* TM_conversions::ENUM_M_ERROR_Double_linking_error/ */
#define ENUM_M_ERROR_Double_linking_error_TM_conversions                      \
  M_ERROR_Double_linking_error

/* TM_conversions::ENUM_M_ERROR_balise_group_linking_conistency/ */
#define ENUM_M_ERROR_balise_group_linking_conistency_TM_conversions           \
  M_ERROR_Balise_group_linking_consistency_error

/* TM_TrainToTrack::DIM_max_elements_P001/ */
#define DIM_max_elements_P001_TM_TrainToTrack (kcg_lit_int32(17))

/* TM_TrainToTrack::DIM_max_elements_P000/ */
#define DIM_max_elements_P000_TM_TrainToTrack (kcg_lit_int32(17))

/* TM_TrainToTrack::DIM_max_elements_P044/ */
#define DIM_max_elements_P044_TM_TrainToTrack                                 \
  (kcg_lit_int32(11) + kcg_lit_int32(4) * kcg_lit_int32(2) + kcg_lit_int32(1) +\
    kcg_lit_int32(5))

/* TM_TrainToTrack::DIM_nid_ntc_list/ */
#define DIM_nid_ntc_list_TM_TrainToTrack (kcg_lit_int32(5))

/* TM_TrainToTrack::DIM_voltage_list/ */
#define DIM_voltage_list_TM_TrainToTrack (kcg_lit_int32(4))

/* TM_TrainToTrack::DIM_max_elements_P005/ */
#define DIM_max_elements_P005_TM_TrainToTrack (kcg_lit_int32(3))

/* TM_TrainToTrack::DIM_max_elements_P004/ */
#define DIM_max_elements_P004_TM_TrainToTrack (kcg_lit_int32(3))

/* TM_radio_messages::DEFAULT_TrainToTrackMessage/ */
extern const M_TrainTrack_Message_T_TM_radio_messages DEFAULT_TrainToTrackMessage_TM_radio_messages;

/* TM_lib_internal::DIM_FIFO_demo/ */
#define DIM_FIFO_demo_TM_lib_internal (kcg_lit_int32(5))

/* TM_lib_internal::EMPTY_TrainTrackMessage/ */
extern const M_TrainTrack_Message_T_TM_radio_messages EMPTY_TrainTrackMessage_TM_lib_internal;

/* TM_lib_internal::DEFAULT_M_TrainTrackMessage_buffer/ */
extern const M_TrainTrackMessage_buffer_t_TM_lib_internal DEFAULT_M_TrainTrackMessage_buffer_TM_lib_internal;

/* TM_lib_internal::DIM_FIFO_TrainTrackMessage/ */
#define DIM_FIFO_TrainTrackMessage_TM_lib_internal (kcg_lit_int32(5))

/* TM_radio_messages::DIM_max_payload/ */
#define DIM_max_payload_TM_radio_messages (kcg_lit_int32(50))

/* TM_TrainTrack_Bus::BusWidth/ */
#define BusWidth_TM_TrainTrack_Bus (kcg_lit_int32(50) / kcg_lit_int32(10))

/* TM_TrainTrack_Bus::Time_10ms/ */
#define Time_10ms_TM_TrainTrack_Bus (kcg_lit_int32(10))

/* TM_TrainTrack_Bus::CycleTime/ */
#define CycleTime_TM_TrainTrack_Bus (kcg_lit_int32(50))

/* ids::cp005_TrainRunningNumber/ */
#define cp005_TrainRunningNumber_ids (kcg_lit_int32(5))

/* ids::cp004_ErrorReporting/ */
#define cp004_ErrorReporting_ids (kcg_lit_int32(4))

/* radioOutput_Pkg::noP044/ */
extern const P044_TM_TrainToTrack noP044_radioOutput_Pkg;

/* radioOutput_Pkg::noP001/ */
extern const P001_TM_TrainToTrack noP001_radioOutput_Pkg;

/* radioOutput_Pkg::noP000/ */
extern const P000_TM_TrainToTrack noP000_radioOutput_Pkg;

/* ProvidePositionReport_Pkg::cMinSafeRearEnd/ */
#define cMinSafeRearEnd_ProvidePositionReport_Pkg (kcg_lit_int32(0))

/* ProvidePositionReport_Pkg::cQ_SCALE/ */
#define cQ_SCALE_ProvidePositionReport_Pkg Q_SCALE_10_cm_scale

/* ProvidePositionReport_Pkg::cInitPT9/ */
extern const PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg cInitPT9_ProvidePositionReport_Pkg;

/* ProvidePositionReport_Pkg::cInitPT11/ */
extern const PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg cInitPT11_ProvidePositionReport_Pkg;

/* ProvidePositionReport_Pkg::cInitPT3/ */
extern const PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg cInitPT3_ProvidePositionReport_Pkg;

/* ProvidePositionReport_Pkg::cTrainToTrackStatus_T/ */
extern const TrainToTrackStatus_T_BG_Types_Pkg cTrainToTrackStatus_T_ProvidePositionReport_Pkg;

/* ProvidePositionReport_Pkg::cRBC_Communication_T/ */
extern const RBC_Communication_T_ProvidePositionReport_Pkg cRBC_Communication_T_ProvidePositionReport_Pkg;

/* ProvidePositionReport_Pkg::cLocationBasedEvents_T/ */
extern const LocationBasedEvents_T_ProvidePositionReport_Pkg cLocationBasedEvents_T_ProvidePositionReport_Pkg;

/* ProvidePositionReport_Pkg::cPassedBG/ */
extern const positionedBG_T_TrainPosition_Types_Pck cPassedBG_ProvidePositionReport_Pkg;

/* ProvidePositionReport_Pkg::cPositionedBG_T/ */
extern const positionedBG_T_TrainPosition_Types_Pck cPositionedBG_T_ProvidePositionReport_Pkg;

/* ProvidePositionReport_Pkg::cTimeToElapse/ */
#define cTimeToElapse_ProvidePositionReport_Pkg (kcg_lit_int32(1000))

/* ProvidePositionReport_Pkg::cxQ_EMERGENCYSTOP/ */
#define cxQ_EMERGENCYSTOP_ProvidePositionReport_Pkg                           \
  Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA

/* ProvidePositionReport_Pkg::cxNID_TEXTMESSAGE/ */
#define cxNID_TEXTMESSAGE_ProvidePositionReport_Pkg (kcg_lit_int32(0))

/* ProvidePositionReport_Pkg::cxNID_EM/ */
#define cxNID_EM_ProvidePositionReport_Pkg (kcg_lit_int32(0))

/* ProvidePositionReport_Pkg::cxQ_MARQSTREASON/ */
#define cxQ_MARQSTREASON_ProvidePositionReport_Pkg                            \
  Q_MARQSTREASON_Start_selected_by_driver

/* ProvidePositionReport_Pkg::cxT_TRAIN/ */
#define cxT_TRAIN_ProvidePositionReport_Pkg (kcg_lit_int32(0))

/* ProvidePositionReport_Pkg::emptyPacket58/ */
extern const P58_PositionReportParameters_T_Packet_Types_Pkg emptyPacket58_ProvidePositionReport_Pkg;

/* TM_specific::DEFAULT_P058_legacy/ */
extern const P58_PositionReportParameters_T_Packet_Types_Pkg DEFAULT_P058_legacy_TM_specific;

/* TM_lib_internal::DIM_P058_n_sections/ */
#define DIM_P058_n_sections_TM_lib_internal (kcg_lit_int32(2))

/* TM_conversions::ENUM_Q_LGTLOC_min_safe_rear_end/ */
#define ENUM_Q_LGTLOC_min_safe_rear_end_TM_conversions                        \
  Q_LGTLOC_Min_safe_rear_end

/* TM_conversions::ENUM_Q_LGTLOC_max_safe_front_end/ */
#define ENUM_Q_LGTLOC_max_safe_front_end_TM_conversions                       \
  Q_LGTLOC_Max_safe_front_end

/* TM_conversions::INT_Q_LGTLOC_min_safe_rear_end/ */
#define INT_Q_LGTLOC_min_safe_rear_end_TM_conversions (kcg_lit_int32(0))

/* TM_conversions::INT_Q_LGTLOC_max_safe_front_end/ */
#define INT_Q_LGTLOC_max_safe_front_end_TM_conversions (kcg_lit_int32(1))

/* TM::DIM_MaxElementsPacket058/ */
#define DIM_MaxElementsPacket058_TM                                           \
  (kcg_lit_int32(32) * kcg_lit_int32(2) + kcg_lit_int32(8))

/* TM_conversions::ENUM_M_LOC_every_LRBG/ */
#define ENUM_M_LOC_every_LRBG_TM_conversions                                  \
  M_LOC_Every_LRBG_compliant_balise_group

/* TM_conversions::ENUM_M_LOC_not_when_LRBG/ */
#define ENUM_M_LOC_not_when_LRBG_TM_conversions                               \
  M_LOC_Do_not_send_position_report_on_passage_of_LRBG_compliant_balise_group

/* TM_conversions::ENUM_M_LOC_now/ */
#define ENUM_M_LOC_now_TM_conversions M_LOC_Now

/* TM_conversions::INT_M_LOC_now/ */
#define INT_M_LOC_now_TM_conversions (kcg_lit_int32(0))

/* TM_conversions::INT_M_LOC_not_when_LRBG/ */
#define INT_M_LOC_not_when_LRBG_TM_conversions (kcg_lit_int32(2))

/* TM_conversions::INT_M_LOC_every_LRBG/ */
#define INT_M_LOC_every_LRBG_TM_conversions (kcg_lit_int32(1))

/* TM::DEFAULT_P058_OBU_section/ */
extern const P058_section_enum_T_TM DEFAULT_P058_OBU_section_TM;

/* ProvidePositionReport_Pkg::cOdomerty/ */
extern const odometry_T_Obu_BasicTypes_Pkg cOdomerty_ProvidePositionReport_Pkg;

/* ProvidePositionReport_Pkg::cModeAndLevelStatus/ */
extern const ModeLevel2PositionReport_T_ProvidePositionReport_Pkg cModeAndLevelStatus_ProvidePositionReport_Pkg;

/* ProvidePositionReport_Pkg::emptyPacket5/ */
extern const PT5_TrainRunningNumber_Packet_TrainTypes_Pkg emptyPacket5_ProvidePositionReport_Pkg;

/* ProvidePositionReport_Pkg::emptyPacket1/ */
extern const PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg emptyPacket1_ProvidePositionReport_Pkg;

/* ProvidePositionReport_Pkg::emptyPacket0/ */
extern const PT0_PositionReport_T_Packet_TrainTypes_Pkg emptyPacket0_ProvidePositionReport_Pkg;

/* ProvidePositionReport_Pkg::emptyHeader/ */
extern const Radio_TrainTrack_Header_T_Radio_Types_Pkg emptyHeader_ProvidePositionReport_Pkg;

/* ProvidePositionReport_Pkg::emptyPacket4/ */
extern const PT4_ErrorReporting_T_Packet_TrainTypes_Pkg emptyPacket4_ProvidePositionReport_Pkg;

/* Packet_Types_Pkg::cIterPacket58/ */
#define cIterPacket58_Packet_Types_Pkg (kcg_lit_int32(2))

/* ProvidePositionReport_Pkg::cReportedBGList/ */
extern const ReportedBGList_T_ProvidePositionReport_Pkg cReportedBGList_ProvidePositionReport_Pkg;

/* ProvidePositionReport_Pkg::c_maxReportedBGs/ */
#define c_maxReportedBGs_ProvidePositionReport_Pkg (kcg_lit_int32(8))

/* Common_Types_Pkg::cNoMetaDataElement/ */
extern const MetadataElement_T_Common_Types_Pkg cNoMetaDataElement_Common_Types_Pkg;

/* Id_Pkg::cm24_General_Message/ */
#define cm24_General_Message_Id_Pkg (kcg_lit_int32(24))

/* xdebugSupport_Pkg::cNoPro/ */
extern const probesBalises_T_xdebugSupport_Pkg cNoPro_xdebugSupport_Pkg;

/* Id_Pkg::cm03_Movement_Authority/ */
#define cm03_Movement_Authority_Id_Pkg (kcg_lit_int32(3))

/* TM_baseline2::DEFAULT_P027v1_OBU_section_qdiff/ */
extern const P027V1_section_enum_qdiff_T_TM_baseline2 DEFAULT_P027v1_OBU_section_qdiff_TM_baseline2;

/* TM_lib_internal::DIM_P027V1_n_sections_qdiff/ */
#define DIM_P027V1_n_sections_qdiff_TM_lib_internal (kcg_lit_int32(7))

/* TM::DIM_MaxElementsPacket027v1_section/ */
#define DIM_MaxElementsPacket027v1_section_TM                                 \
  (kcg_lit_int32(32) * kcg_lit_int32(2) + kcg_lit_int32(4))

/* TM_conversions::ENUM_Q_FRONT_no_train_length_delay/ */
#define ENUM_Q_FRONT_no_train_length_delay_TM_conversions                     \
  Q_FRONT_No_train_length_delay_on_validity_end_point_of_profile_element

/* TM_conversions::ENUM_Q_FRONT_train_length_delay/ */
#define ENUM_Q_FRONT_train_length_delay_TM_conversions                        \
  Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element

/* TM_conversions::INT_Q_FRONT_no_train_length_delay/ */
#define INT_Q_FRONT_no_train_length_delay_TM_conversions (kcg_lit_int32(1))

/* TM_conversions::INT_Q_FRONT_train_length_delay/ */
#define INT_Q_FRONT_train_length_delay_TM_conversions (kcg_lit_int32(0))

/* TM_baseline2::DEFAULT_P027V1_section_enum/ */
extern const P027V1_section_enum_T_TM_baseline2 DEFAULT_P027V1_section_enum_TM_baseline2;

/* TM_baseline2::NID_META_P027V1_body/ */
#define NID_META_P027V1_body_TM_baseline2 (kcg_lit_int32(27016000))

/* TM_baseline2::DEFAULT_P027V1_legacy/ */
extern const P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg DEFAULT_P027V1_legacy_TM_baseline2;

/* InformationFilter_Pkg::cNoP41Element/ */
extern const P041_section_enum_T_TM cNoP41Element_InformationFilter_Pkg;

/* TM_lib_internal::DIM_P021_n_sections/ */
#define DIM_P021_n_sections_TM_lib_internal (kcg_lit_int32(3))

/* TM_conversions::ENUM_Q_GDIR_uphill/ */
#define ENUM_Q_GDIR_uphill_TM_conversions Q_GDIR_uphill

/* TM_conversions::ENUM_Q_GDIR_downhill/ */
#define ENUM_Q_GDIR_downhill_TM_conversions Q_GDIR_downhill

/* TM_conversions::INT_Q_GDIR_uphill/ */
#define INT_Q_GDIR_uphill_TM_conversions (kcg_lit_int32(1))

/* TM_conversions::INT_Q_GDIR_downhill/ */
#define INT_Q_GDIR_downhill_TM_conversions (kcg_lit_int32(0))

/* TM_conversions::DIM_G_min/ */
#define DIM_G_min_TM_conversions (kcg_lit_int32(0))

/* TM_conversions::DIM_G_max/ */
#define DIM_G_max_TM_conversions (kcg_lit_int32(255))

/* TM::DEFAULT_P021_OBU_section/ */
extern const P021_section_enum_T_TM DEFAULT_P021_OBU_section_TM;

/* TM::DIM_MaxElementsPacket021/ */
#define DIM_MaxElementsPacket021_TM                                           \
  ((kcg_lit_int32(32) + kcg_lit_int32(1)) * kcg_lit_int32(3) + kcg_lit_int32( \
      4) + kcg_lit_int32(1))

/* TM_lib_internal::DIM_P015_n_sections/ */
#define DIM_P015_n_sections_TM_lib_internal (kcg_lit_int32(4))

/* TM::DIM_MaxElementsPacket015/ */
#define DIM_MaxElementsPacket015_TM                                           \
  (kcg_lit_int32(32) * kcg_lit_int32(4) + kcg_lit_int32(15) + kcg_lit_int32(1) +\
    kcg_lit_int32(6))

/* TM_lib_internal::DIM_P012_n_sections/ */
#define DIM_P012_n_sections_TM_lib_internal (kcg_lit_int32(4))

/* TM::DEFAULT_P015_OBU_section/ */
extern const P015_section_enum_T_TM DEFAULT_P015_OBU_section_TM;

/* TM::DIM_MaxElementsPacket012/ */
#define DIM_MaxElementsPacket012_TM                                           \
  (kcg_lit_int32(32) * kcg_lit_int32(4) + kcg_lit_int32(15) + kcg_lit_int32(1) +\
    kcg_lit_int32(7))

/* TM_conversions::ENUM_Q_ENDTIMER_no_endsection_timer_info/ */
#define ENUM_Q_ENDTIMER_no_endsection_timer_info_TM_conversions               \
  Q_ENDTIMER_No_End_section_timer_information

/* TM_conversions::ENUM_Q_ENDTIMER_endsection_timer_info_follows/ */
#define ENUM_Q_ENDTIMER_endsection_timer_info_follows_TM_conversions          \
  Q_ENDTIMER_End_section_timer_information_to_follow

/* TM_conversions::INT_Q_ENDTIMER_endsection_timer_info_follows/ */
#define INT_Q_ENDTIMER_endsection_timer_info_follows_TM_conversions           \
  (kcg_lit_int32(1))

/* TM_conversions::INT_Q_ENDTIMER_no_endsection_timer_info/ */
#define INT_Q_ENDTIMER_no_endsection_timer_info_TM_conversions                \
  (kcg_lit_int32(0))

/* TM_conversions::ENUM_Q_DANGERPOINT_no_dangerpoint_info/ */
#define ENUM_Q_DANGERPOINT_no_dangerpoint_info_TM_conversions                 \
  Q_DANGERPOINT_No_danger_point_information

/* TM_conversions::ENUM_Q_DANGERPOINT_dangerpoint_info/ */
#define ENUM_Q_DANGERPOINT_dangerpoint_info_TM_conversions                    \
  Q_DANGERPOINT_Danger_point_information_to_follow

/* TM_conversions::INT_Q_DANGERPOINT_dangerpoint_info/ */
#define INT_Q_DANGERPOINT_dangerpoint_info_TM_conversions (kcg_lit_int32(1))

/* TM_conversions::INT_Q_DANGERPOINT_no_dangerpoint_info/ */
#define INT_Q_DANGERPOINT_no_dangerpoint_info_TM_conversions (kcg_lit_int32(0))

/* TM_conversions::ENUM_Q_OVERLAP_no_overlap_info/ */
#define ENUM_Q_OVERLAP_no_overlap_info_TM_conversions                         \
  Q_OVERLAP_No_overlap_information

/* TM_conversions::ENUM_Q_OVERLAP_overlap_info/ */
#define ENUM_Q_OVERLAP_overlap_info_TM_conversions                            \
  Q_OVERLAP_Overlap_information_to_follow

/* TM_conversions::INT_Q_OVERLAP_no_overlap_info/ */
#define INT_Q_OVERLAP_no_overlap_info_TM_conversions (kcg_lit_int32(0))

/* TM_conversions::INT_Q_OVERLAP_overlap_info/ */
#define INT_Q_OVERLAP_overlap_info_TM_conversions (kcg_lit_int32(1))

/* TM_conversions::ENUM_Q_SECTIONTIMER_no_sectiontimer/ */
#define ENUM_Q_SECTIONTIMER_no_sectiontimer_TM_conversions                    \
  Q_SECTIONTIMER_No_Section_Timer_information

/* TM_conversions::ENUM_Q_SECTIONTIMER_sectiontimer/ */
#define ENUM_Q_SECTIONTIMER_sectiontimer_TM_conversions                       \
  Q_SECTIONTIMER_Section_Timer_information_to_follow

/* TM_conversions::INT_Q_SECTIONTIMER_no_sectiontimer/ */
#define INT_Q_SECTIONTIMER_no_sectiontimer_TM_conversions (kcg_lit_int32(0))

/* TM_conversions::INT_Q_SECTIONTIMER_sectiontimer/ */
#define INT_Q_SECTIONTIMER_sectiontimer_TM_conversions (kcg_lit_int32(1))

/* TM_lib_internal::DIM_offset_metadata_id/ */
#define DIM_offset_metadata_id_TM_lib_internal (kcg_lit_int32(1))

/* TM_lib_internal::DIM_offset_metadata_m_version/ */
#define DIM_offset_metadata_m_version_TM_lib_internal (kcg_lit_int32(1000))

/* TM_lib_internal::DIM_offset_metadata_q_dir/ */
#define DIM_offset_metadata_q_dir_TM_lib_internal (kcg_lit_int32(100000))

/* TM::DEFAULT_PHeader/ */
extern const MetadataElement_T_Common_Types_Pkg DEFAULT_PHeader_TM;

/* TM::DIM_MaxRMessages/ */
#define DIM_MaxRMessages_TM (kcg_lit_int32(30))

/* TM::DEFAULT_CompressedPackets/ */
extern const CompressedPacketData_T_Common_Types_Pkg DEFAULT_CompressedPackets_TM;

/* TM_lib_internal::DIM_P041_n_sections/ */
#define DIM_P041_n_sections_TM_lib_internal (kcg_lit_int32(3))

/* TM_conversions::DIM_L_min/ */
#define DIM_L_min_TM_conversions (kcg_lit_int32(0))

/* TM_conversions::DIM_L_max/ */
#define DIM_L_max_TM_conversions (kcg_lit_int32(32767))

/* TM_conversions::ENUM_M_LEVELTR_Level_0/ */
#define ENUM_M_LEVELTR_Level_0_TM_conversions M_LEVELTR_Level_0

/* TM_conversions::ENUM_M_LEVELTR_Level_1/ */
#define ENUM_M_LEVELTR_Level_1_TM_conversions M_LEVELTR_Level_1

/* TM_conversions::ENUM_M_LEVELTR_Level_2/ */
#define ENUM_M_LEVELTR_Level_2_TM_conversions M_LEVELTR_Level_2

/* TM_conversions::ENUM_M_LEVELTR_Level_3/ */
#define ENUM_M_LEVELTR_Level_3_TM_conversions M_LEVELTR_Level_3

/* TM_conversions::ENUM_M_LEVELTR_Level_NTC/ */
#define ENUM_M_LEVELTR_Level_NTC_TM_conversions                               \
  M_LEVELTR_Level_NTC_specified_by_NID_NTC

/* TM_conversions::INT_M_LEVELTR_Level_NTC/ */
#define INT_M_LEVELTR_Level_NTC_TM_conversions (kcg_lit_int32(1))

/* TM_conversions::INT_M_LEVELTR_Level_3/ */
#define INT_M_LEVELTR_Level_3_TM_conversions (kcg_lit_int32(4))

/* TM_conversions::INT_M_LEVELTR_Level_2/ */
#define INT_M_LEVELTR_Level_2_TM_conversions (kcg_lit_int32(3))

/* TM_conversions::INT_M_LEVELTR_Level_1/ */
#define INT_M_LEVELTR_Level_1_TM_conversions (kcg_lit_int32(2))

/* TM_conversions::INT_M_LEVELTR_Level_0/ */
#define INT_M_LEVELTR_Level_0_TM_conversions (kcg_lit_int32(0))

/* TM_lib_internal::DEFAULT_P041_OBU_section/ */
extern const P041_section_enum_T_TM DEFAULT_P041_OBU_section_TM_lib_internal;

/* TM::DIM_MaxElementsPacket041/ */
#define DIM_MaxElementsPacket041_TM                                           \
  ((kcg_lit_int32(32) + kcg_lit_int32(1)) * kcg_lit_int32(3) + kcg_lit_int32(6))

/* TM_conversions::ENUM_Q_DIR_nominal/ */
#define ENUM_Q_DIR_nominal_TM_conversions Q_DIR_Nominal

/* TM_conversions::ENUM_Q_DIR_reverse/ */
#define ENUM_Q_DIR_reverse_TM_conversions Q_DIR_Reverse

/* TM_conversions::ENUM_Q_DIR_both/ */
#define ENUM_Q_DIR_both_TM_conversions Q_DIR_Both_directions

/* TM_conversions::INT_Q_DIR_both/ */
#define INT_Q_DIR_both_TM_conversions (kcg_lit_int32(2))

/* TM_conversions::INT_Q_DIR_reverse/ */
#define INT_Q_DIR_reverse_TM_conversions (kcg_lit_int32(0))

/* TM_conversions::INT_Q_DIR_nomiinal/ */
#define INT_Q_DIR_nomiinal_TM_conversions (kcg_lit_int32(1))

/* TM_conversions::ENUM_Q_SCALE_1m/ */
#define ENUM_Q_SCALE_1m_TM_conversions Q_SCALE_1_m_scale

/* TM_conversions::ENUM_Q_SCALE_10m/ */
#define ENUM_Q_SCALE_10m_TM_conversions Q_SCALE_10_m_scale

/* TM_conversions::ENUM_Q_SCALE_10cm/ */
#define ENUM_Q_SCALE_10cm_TM_conversions Q_SCALE_10_cm_scale

/* TM_conversions::INT_Q_SCALE_10m/ */
#define INT_Q_SCALE_10m_TM_conversions (kcg_lit_int32(2))

/* TM_conversions::INT_Q_SCALE_1m/ */
#define INT_Q_SCALE_1m_TM_conversions (kcg_lit_int32(1))

/* TM_conversions::INT_Q_SCALE_10cm/ */
#define INT_Q_SCALE_10cm_TM_conversions (kcg_lit_int32(0))

/* InformationFilter_Pkg::cNoFlagsForML/ */
extern const T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg cNoFlagsForML_InformationFilter_Pkg;

/* InformationFilter_Pkg::cEmptyEvents/ */
extern const filterRelatedEvents_T_Common_Types_Pkg cEmptyEvents_InformationFilter_Pkg;

/* InformationFilter_Pkg::DEFAULT_TransitionBuffer_t/ */
extern const TransitionBuffer_T_InformationFilter_Pkg DEFAULT_TransitionBuffer_t_InformationFilter_Pkg;

/* InformationFilter_Pkg::DIM_TransitionBuffer/ */
#define DIM_TransitionBuffer_InformationFilter_Pkg (kcg_lit_int32(3))

/* DataDictionary_Pkg::ModeDecisionTable/ */
extern const ModeDecisionTableType_DataDictionary_Pkg ModeDecisionTable_DataDictionary_Pkg;

/* Config_Pkg::MAX_PACKAGES/ */
#define MAX_PACKAGES_Config_Pkg (kcg_lit_int32(30))

/* DataDictionary_Pkg::LevelDecisionTableFromRBC/ */
extern const LevelDecisionTableType_DataDictionary_Pkg LevelDecisionTableFromRBC_DataDictionary_Pkg;

/* DataDictionary_Pkg::LevelDecisionTableFromBalise/ */
extern const LevelDecisionTableType_DataDictionary_Pkg LevelDecisionTableFromBalise_DataDictionary_Pkg;

/* CheckEuroradioMessage::cTTrainUnknown1/ */
#define cTTrainUnknown1_CheckEuroradioMessage (kcg_lit_int32(-1))

/* TM_lib_internal::DIM_offset_metadata_nid_packet/ */
#define DIM_offset_metadata_nid_packet_TM_lib_internal (kcg_lit_int32(1000000))

/* CheckEuroradioMessage::cPermittedRadioPackets1/ */
extern const MetadataTruthtable_T1_CheckEuroradioMessage cPermittedRadioPackets1_CheckEuroradioMessage;

/* BG_Types_Pkg::cEmptyBG_Header/ */
extern const BG_Header_T_BG_Types_Pkg cEmptyBG_Header_BG_Types_Pkg;

/* ValidateDataDirection_Pkg::cEmptyLRBG/ */
extern const positionedBG_T_TrainPosition_Types_Pck cEmptyLRBG_ValidateDataDirection_Pkg;

/* CheckBGConsistency_Pkg::cNoStoredBG/ */
extern const positionedBG_T_TrainPosition_Types_Pck cNoStoredBG_CheckBGConsistency_Pkg;

/* CheckBGConsistency_Pkg::cQDirLrbgRevers/ */
#define cQDirLrbgRevers_CheckBGConsistency_Pkg Q_DIRLRBG_Reverse

/* CheckBGConsistency_Pkg::cQqDirTrainRevers/ */
#define cQqDirTrainRevers_CheckBGConsistency_Pkg Q_DIRTRAIN_Reverse

/* CheckBGConsistency_Pkg::cQqDirTrainNominal/ */
#define cQqDirTrainNominal_CheckBGConsistency_Pkg Q_DIRTRAIN_Nominal

/* CheckBGConsistency_Pkg::cQDirLrbgNominal/ */
#define cQDirLrbgNominal_CheckBGConsistency_Pkg Q_DIRLRBG_Nominal

/* CheckBGConsistency_Pkg::cMetaData/ */
extern const Metadata_T_Common_Types_Pkg cMetaData_CheckBGConsistency_Pkg;

/* CheckBGConsistency_Pkg::cMetaDataElement/ */
extern const MetadataElement_T_Common_Types_Pkg cMetaDataElement_CheckBGConsistency_Pkg;

/* CheckBGConsistency_Pkg::cQqDirTrain/ */
#define cQqDirTrain_CheckBGConsistency_Pkg Q_DIRTRAIN_Unknown

/* CheckBGConsistency_Pkg::cQDirLRBGunknown/ */
#define cQDirLRBGunknown_CheckBGConsistency_Pkg Q_DIRLRBG_Unknown

/* CheckBGConsistency_Pkg::cSendingRBC/ */
extern const RBC_Id_T_Common_Types_Pkg cSendingRBC_CheckBGConsistency_Pkg;

/* CheckBGConsistency_Pkg::cNoRadioHeader/ */
extern const Radio_TrackTrain_Header_T_Radio_Types_Pkg cNoRadioHeader_CheckBGConsistency_Pkg;

/* CheckBGConsistency_Pkg::cRadioMetadata/ */
extern const RadioMetadata_T_Common_Types_Pkg cRadioMetadata_CheckBGConsistency_Pkg;

/* CheckBGConsistency_Pkg::cEurobalise/ */
#define cEurobalise_CheckBGConsistency_Pkg msrc_Eurobalise_Common_Types_Pkg

/* CheckBGConsistency_Pkg::cTheTelegramNeverFitsAnyMessage/ */
#define cTheTelegramNeverFitsAnyMessage_CheckBGConsistency_Pkg                \
  (kcg_lit_int32(254))

/* CheckBGConsistency_Pkg::cTheTelegramFitsWithAll/ */
#define cTheTelegramFitsWithAll_CheckBGConsistency_Pkg (kcg_lit_int32(255))

/* CheckBGConsistency_Pkg::cInConsistentTelegram/ */
extern const Telegram_T_BG_Types_Pkg cInConsistentTelegram_CheckBGConsistency_Pkg;

/* CheckBGConsistency_Pkg::cTelegram/ */
extern const Telegram_T_BG_Types_Pkg cTelegram_CheckBGConsistency_Pkg;

/* CheckBGConsistency_Pkg::cRecivedMesg_PlaceHolder/ */
extern const ReceivedMessage_T_Common_Types_Pkg cRecivedMesg_PlaceHolder_CheckBGConsistency_Pkg;

/* BG_Types_Pkg::cMaxDistanceBalisesInGroup/ */
extern const OdometryLocations_T_Obu_BasicTypes_Pkg cMaxDistanceBalisesInGroup_BG_Types_Pkg;

/* Receive_TrackSide_Msg_Pkg::cEmptyStore/ */
extern const TelegramStore_T_Receive_TrackSide_Msg_Pkg cEmptyStore_Receive_TrackSide_Msg_Pkg;

/* Receive_TrackSide_Msg_Pkg::cEmptyCollector/ */
extern const BGCollector_T_Receive_TrackSide_Msg_Pkg cEmptyCollector_Receive_TrackSide_Msg_Pkg;

/* BG_Types_Pkg::cEmptyBGMessages/ */
extern const BG_Message_T_BG_Types_Pkg cEmptyBGMessages_BG_Types_Pkg;

/* BG_Types_Pkg::cEmpty_BaliseTlg/ */
extern const Telegram_T_BG_Types_Pkg cEmpty_BaliseTlg_BG_Types_Pkg;

/* BG_Types_Pkg::cEmptyTelegramArray/ */
extern const TelegramArray_T_BG_Types_Pkg cEmptyTelegramArray_BG_Types_Pkg;

/* BG_Types_Pkg::cemptyPosition/ */
extern const centerOfBalisePosition_T_BG_Types_Pkg cemptyPosition_BG_Types_Pkg;

/* Radio_Types_Pkg::cEmptyRadioMsg/ */
extern const RadioMessage_T_Radio_Types_Pkg cEmptyRadioMsg_Radio_Types_Pkg;

/* BG_Types_Pkg::cMaxNoBalises/ */
#define cMaxNoBalises_BG_Types_Pkg (kcg_lit_int32(8))

/* Common_Types_Pkg::cDefaultRM/ */
extern const ReceivedMessage_T_Common_Types_Pkg cDefaultRM_Common_Types_Pkg;

/* BG_Types_Pkg::cUnknownBG/ */
#define cUnknownBG_BG_Types_Pkg (kcg_lit_int32(16383))

/* manage_DMI_Input_Pkg::cNoLevelTransitionInfo/ */
extern const T_LevelTansitionInfo_Level_And_Mode_Types_Pkg cNoLevelTransitionInfo_manage_DMI_Input_Pkg;

/* manage_DMI_Input_Pkg::cNoDriverRequestToModes/ */
extern const DMI_DriverRequest_T_DMI_Types_Pkg cNoDriverRequestToModes_manage_DMI_Input_Pkg;

/* manage_TextMessages_Pkg::cNoDMI_ML/ */
extern const DMI_To_Modes_T_DMI_Types_Pkg cNoDMI_ML_manage_TextMessages_Pkg;

/* manage_DMI_Input_Pkg::cAckModesAndLevels/ */
extern const DMI_To_Modes_T_DMI_Types_Pkg cAckModesAndLevels_manage_DMI_Input_Pkg;

/* manage_DMI_Input_Pkg::cDMIAdhesionFactorDefault/ */
extern const DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg cDMIAdhesionFactorDefault_manage_DMI_Input_Pkg;

/* manage_DMI_Input_Pkg::cDMITrainDataAckDefault/ */
extern const DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg cDMITrainDataAckDefault_manage_DMI_Input_Pkg;

/* manage_DMI_Input_Pkg::cDMITrainDataDefault/ */
extern const DMI_Train_Data_T_DMI_Messages_Bothways_Pkg cDMITrainDataDefault_manage_DMI_Input_Pkg;

/* manage_DMI_Input_Pkg::cDMIRadioNetDataDefault/ */
extern const DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg cDMIRadioNetDataDefault_manage_DMI_Input_Pkg;

/* manage_DMI_Input_Pkg::cDMITrainRunningNumberDefault/ */
extern const DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg cDMITrainRunningNumberDefault_manage_DMI_Input_Pkg;

/* manage_DMI_Input_Pkg::cDMIDriverIdentifierDefault/ */
extern const _5_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg cDMIDriverIdentifierDefault_manage_DMI_Input_Pkg;

/* manage_DMI_Input_Pkg::cDMIIdentifierDefault/ */
extern const DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg cDMIIdentifierDefault_manage_DMI_Input_Pkg;

/* manage_DMI_Input_Pkg::cDMITextMessageAckDefault/ */
extern const DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg cDMITextMessageAckDefault_manage_DMI_Input_Pkg;

/* manage_DMI_Input_Pkg::cNoMATrigger/ */
extern const Driver2MAR_T_MA_Request cNoMATrigger_manage_DMI_Input_Pkg;

/* manage_DMI_Input_Pkg::cDMIDriverRequestDefault/ */
extern const DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg cDMIDriverRequestDefault_manage_DMI_Input_Pkg;

/* manage_DMI_Input_Pkg::cDMIIconAckDefault/ */
extern const DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg cDMIIconAckDefault_manage_DMI_Input_Pkg;

/* DATA::Packets::DMI_to_EVC::cDMI_Icon_Ack/ */
extern const DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg cDMI_Icon_Ack_DATA_Packets_DMI_to_EVC;

/* DATA::cDMI_Icon_Ack_int_array_size/ */
#define cDMI_Icon_Ack_int_array_size_DATA (kcg_lit_int32(3))

/* DATA::Packets::DMI_to_EVC::cDMI_Train_Data_Ack/ */
extern const DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg cDMI_Train_Data_Ack_DATA_Packets_DMI_to_EVC;

/* DATA::cDMI_Train_Data_Ack_int_array_size/ */
#define cDMI_Train_Data_Ack_int_array_size_DATA (kcg_lit_int32(3))

/* DATA::Packets::DMI_to_EVC::cDMI_Text_Message_Ack/ */
extern const DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg cDMI_Text_Message_Ack_DATA_Packets_DMI_to_EVC;

/* DATA::cDMI_Text_Message_Ack_int_array_size/ */
#define cDMI_Text_Message_Ack_int_array_size_DATA (kcg_lit_int32(4))

/* DATA::Packets::DMI_to_EVC::cDMI_Radio_Net_Data/ */
extern const DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg cDMI_Radio_Net_Data_DATA_Packets_DMI_to_EVC;

/* DATA::cDMI_Radio_Net_Data_int_array_size/ */
#define cDMI_Radio_Net_Data_int_array_size_DATA (kcg_lit_int32(2))

/* ENUM_DMI_Request_T_Hide_tunnel_stopping_information/ */
#define ENUM_DMI_Request_T_Hide_tunnel_stopping_information                   \
  Hide_tunnel_stopping_information_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Language_changed/ */
#define ENUM_DMI_Request_T_Language_changed Language_changed_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Level_entry_request/ */
#define ENUM_DMI_Request_T_Level_entry_request Level_entry_request_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Maintain_shunting/ */
#define ENUM_DMI_Request_T_Maintain_shunting Maintain_shunting_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Non_leading/ */
#define ENUM_DMI_Request_T_Non_leading Non_leading_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Non_leading_exit/ */
#define ENUM_DMI_Request_T_Non_leading_exit Non_leading_exit_DMI_Types_Pkg

/* ENUM_DMI_Request_T_NTC_data_entry_request/ */
#define ENUM_DMI_Request_T_NTC_data_entry_request                             \
  NTC_data_entry_request_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Override_EOA/ */
#define ENUM_DMI_Request_T_Override_EOA Override_EOA_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Override_route_unsuitability/ */
#define ENUM_DMI_Request_T_Override_route_unsuitability                       \
  Override_route_unsuitability_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Radio_network_entry_aborted/ */
#define ENUM_DMI_Request_T_Radio_network_entry_aborted                        \
  Radio_network_entry_aborted_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Remove_VBC_request/ */
#define ENUM_DMI_Request_T_Remove_VBC_request Remove_VBC_request_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Request_for_Adhesion_factor_data/ */
#define _85_ENUM_DMI_Request_T_Request_for_Adhesion_factor_data               \
  Request_for_Adhesion_factor_data_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Request_for_radio_network_entry/ */
#define _84_ENUM_DMI_Request_T_Request_for_radio_network_entry                \
  Request_for_radio_network_entry_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Request_for_SR_data/ */
#define _83_ENUM_DMI_Request_T_Request_for_SR_data                            \
  Request_for_SR_data_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Request_for_switching_train_data_entry/ */
#define _82_ENUM_DMI_Request_T_Request_for_switching_train_data_entry         \
  Request_for_switching_train_data_entry_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Request_for_system_version/ */
#define _81_ENUM_DMI_Request_T_Request_for_system_version                     \
  Request_for_system_version_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Request_for_train_data/ */
#define _80_ENUM_DMI_Request_T_Request_for_train_data                         \
  Request_for_train_data_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Request_for_train_data_view/ */
#define ENUM_DMI_Request_T_Request_for_train_data_view                        \
  Request_for_train_data_view_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Request_isolation/ */
#define ENUM_DMI_Request_T_Request_isolation Request_isolation_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Request_to_contact_last_known_RBC/ */
#define ENUM_DMI_Request_T_Request_to_contact_last_known_RBC                  \
  Request_to_contact_last_known_RBC_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Request_to_hide_geographical_information/ */
#define _79_ENUM_DMI_Request_T_Request_to_hide_geographical_information       \
  Request_to_hide_geographical_information_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Request_to_hide_supervision_data/ */
#define ENUM_DMI_Request_T_Request_to_hide_supervision_data                   \
  Request_to_hide_supervision_data_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Train_running_number_entry_aborted/ */
#define ENUM_DMI_Request_T_Train_running_number_entry_aborted                 \
  Train_running_number_entry_aborted_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Train_data_entry_aborted/ */
#define ENUM_DMI_Request_T_Train_data_entry_aborted                           \
  Train_data_entry_aborted_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Track_Ahead_Free_is_validated/ */
#define ENUM_DMI_Request_T_Track_Ahead_Free_is_validated                      \
  Track_Ahead_Free_is_validated_DMI_Types_Pkg

/* ENUM_DMI_Request_T_The_Train_Integrity_request/ */
#define ENUM_DMI_Request_T_The_Train_Integrity_request                        \
  The_Train_Integrity_request_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Start_of_mission/ */
#define ENUM_DMI_Request_T_Start_of_mission Start_of_mission_DMI_Types_Pkg

/* ENUM_DMI_Request_T_SR_data_entry_aborted/ */
#define ENUM_DMI_Request_T_SR_data_entry_aborted                              \
  SR_data_entry_aborted_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Shunting_exit/ */
#define ENUM_DMI_Request_T_Shunting_exit Shunting_exit_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Shunting_entry/ */
#define ENUM_DMI_Request_T_Shunting_entry Shunting_entry_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Show_tunnel_stopping_information/ */
#define ENUM_DMI_Request_T_Show_tunnel_stopping_information                   \
  Show_tunnel_stopping_information_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Set_VBC_request/ */
#define ENUM_DMI_Request_T_Set_VBC_request Set_VBC_request_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Scroll_text_up/ */
#define _78_ENUM_DMI_Request_T_Scroll_text_up Scroll_text_up_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Scroll_text_down/ */
#define ENUM_DMI_Request_T_Scroll_text_down Scroll_text_down_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Request_to_use_short_number/ */
#define ENUM_DMI_Request_T_Request_to_use_short_number                        \
  Request_to_use_short_number_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Request_to_show_supervision_data/ */
#define _77_ENUM_DMI_Request_T_Request_to_show_supervision_data               \
  Request_to_show_supervision_data_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Request_to_show_geographical_position/ */
#define ENUM_DMI_Request_T_Request_to_show_geographical_position              \
  Request_to_show_geographical_position_DMI_Types_Pkg

/* ENUM_DMI_Request_T_End_of_NTC_data_entry/ */
#define ENUM_DMI_Request_T_End_of_NTC_data_entry                              \
  End_of_NTC_data_entry_DMI_Types_Pkg

/* INT_DMI_Request_T_Request_to_show_geographical_position/ */
#define _76_INT_DMI_Request_T_Request_to_show_geographical_position           \
  (kcg_lit_int32(16))

/* INT_DMI_Request_T_Request_to_show_supervision_data/ */
#define INT_DMI_Request_T_Request_to_show_supervision_data (kcg_lit_int32(23))

/* INT_DMI_Request_T_Request_to_use_short_number/ */
#define INT_DMI_Request_T_Request_to_use_short_number (kcg_lit_int32(28))

/* INT_DMI_Request_T_Scroll_text_down/ */
#define INT_DMI_Request_T_Scroll_text_down (kcg_lit_int32(26))

/* INT_DMI_Request_T_Scroll_text_up/ */
#define INT_DMI_Request_T_Scroll_text_up (kcg_lit_int32(25))

/* INT_DMI_Request_T_Set_VBC_request/ */
#define INT_DMI_Request_T_Set_VBC_request (kcg_lit_int32(32))

/* INT_DMI_Request_T_Show_tunnel_stopping_information/ */
#define INT_DMI_Request_T_Show_tunnel_stopping_information (kcg_lit_int32(34))

/* INT_DMI_Request_T_Shunting_entry/ */
#define INT_DMI_Request_T_Shunting_entry (kcg_lit_int32(1))

/* INT_DMI_Request_T_Shunting_exit/ */
#define INT_DMI_Request_T_Shunting_exit (kcg_lit_int32(2))

/* INT_DMI_Request_T_SR_data_entry_aborted/ */
#define INT_DMI_Request_T_SR_data_entry_aborted (kcg_lit_int32(20))

/* INT_DMI_Request_T_Start_of_mission/ */
#define INT_DMI_Request_T_Start_of_mission (kcg_lit_int32(0))

/* INT_DMI_Request_T_The_Train_Integrity_request/ */
#define INT_DMI_Request_T_The_Train_Integrity_request (kcg_lit_int32(31))

/* INT_DMI_Request_T_Track_Ahead_Free_is_validated/ */
#define INT_DMI_Request_T_Track_Ahead_Free_is_validated (kcg_lit_int32(30))

/* INT_DMI_Request_T_Train_data_entry_aborted/ */
#define INT_DMI_Request_T_Train_data_entry_aborted (kcg_lit_int32(18))

/* INT_DMI_Request_T_Train_running_number_entry_aborted/ */
#define INT_DMI_Request_T_Train_running_number_entry_aborted (kcg_lit_int32(19))

/* INT_DMI_Request_T_Request_to_hide_supervision_data/ */
#define _75_INT_DMI_Request_T_Request_to_hide_supervision_data                \
  (kcg_lit_int32(24))

/* INT_DMI_Request_T_Request_to_hide_geographical_information/ */
#define INT_DMI_Request_T_Request_to_hide_geographical_information            \
  (kcg_lit_int32(22))

/* INT_DMI_Request_T_Request_to_contact_last_known_RBC/ */
#define INT_DMI_Request_T_Request_to_contact_last_known_RBC (kcg_lit_int32(27))

/* INT_DMI_Request_T_Request_isolation/ */
#define INT_DMI_Request_T_Request_isolation (kcg_lit_int32(29))

/* INT_DMI_Request_T_Request_for_train_data_view/ */
#define _74_INT_DMI_Request_T_Request_for_train_data_view (kcg_lit_int32(15))

/* INT_DMI_Request_T_Request_for_train_data/ */
#define INT_DMI_Request_T_Request_for_train_data (kcg_lit_int32(10))

/* INT_DMI_Request_T_Request_for_system_version/ */
#define _73_INT_DMI_Request_T_Request_for_system_version (kcg_lit_int32(13))

/* INT_DMI_Request_T_Request_for_switching_train_data_entry/ */
#define INT_DMI_Request_T_Request_for_switching_train_data_entry              \
  (kcg_lit_int32(14))

/* INT_DMI_Request_T_Request_for_SR_data/ */
#define INT_DMI_Request_T_Request_for_SR_data (kcg_lit_int32(12))

/* INT_DMI_Request_T_Request_for_radio_network_entry/ */
#define INT_DMI_Request_T_Request_for_radio_network_entry (kcg_lit_int32(9))

/* INT_DMI_Request_T_Request_for_Adhesion_factor_data/ */
#define INT_DMI_Request_T_Request_for_Adhesion_factor_data (kcg_lit_int32(11))

/* INT_DMI_Request_T_Remove_VBC_request/ */
#define INT_DMI_Request_T_Remove_VBC_request (kcg_lit_int32(33))

/* INT_DMI_Request_T_Radio_network_entry_aborted/ */
#define INT_DMI_Request_T_Radio_network_entry_aborted (kcg_lit_int32(21))

/* INT_DMI_Request_T_Override_route_unsuitability/ */
#define INT_DMI_Request_T_Override_route_unsuitability (kcg_lit_int32(8))

/* INT_DMI_Request_T_Override_EOA/ */
#define INT_DMI_Request_T_Override_EOA (kcg_lit_int32(7))

/* INT_DMI_Request_T_NTC_data_entry_request/ */
#define INT_DMI_Request_T_NTC_data_entry_request (kcg_lit_int32(36))

/* INT_DMI_Request_T_Non_leading_exit/ */
#define INT_DMI_Request_T_Non_leading_exit (kcg_lit_int32(4))

/* INT_DMI_Request_T_Non_leading/ */
#define INT_DMI_Request_T_Non_leading (kcg_lit_int32(3))

/* INT_DMI_Request_T_Maintain_shunting/ */
#define INT_DMI_Request_T_Maintain_shunting (kcg_lit_int32(5))

/* INT_DMI_Request_T_Level_entry_request/ */
#define INT_DMI_Request_T_Level_entry_request (kcg_lit_int32(6))

/* INT_DMI_Request_T_Language_changed/ */
#define INT_DMI_Request_T_Language_changed (kcg_lit_int32(17))

/* INT_DMI_Request_T_Hide_tunnel_stopping_information/ */
#define INT_DMI_Request_T_Hide_tunnel_stopping_information (kcg_lit_int32(35))

/* INT_DMI_Request_T_End_of_NTC_data_entry/ */
#define INT_DMI_Request_T_End_of_NTC_data_entry (kcg_lit_int32(37))

/* DATA::Packets::DMI_to_EVC::cDMI_Driver_Request/ */
extern const DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg cDMI_Driver_Request_DATA_Packets_DMI_to_EVC;

/* DATA::cDMI_Driver_Reqest_int_array_size/ */
#define cDMI_Driver_Reqest_int_array_size_DATA (kcg_lit_int32(3))

/* ENUM_DMI_Cabin_Identifier_T_cabin_B/ */
#define _72_ENUM_DMI_Cabin_Identifier_T_cabin_B cabin_B_DMI_Types_Pkg

/* ENUM_DMI_Cabin_Identifier_T_cabin_A/ */
#define ENUM_DMI_Cabin_Identifier_T_cabin_A cabin_A_DMI_Types_Pkg

/* INT_DMI_Cabin_Identifier_T_cabin_B/ */
#define _71_INT_DMI_Cabin_Identifier_T_cabin_B (kcg_lit_int32(1))

/* INT_DMI_Cabin_Identifier_T_cabin_A/ */
#define INT_DMI_Cabin_Identifier_T_cabin_A (kcg_lit_int32(0))

/* ENUM_DMI_DMI_Identifier_T_DMI_2/ */
#define ENUM_DMI_DMI_Identifier_T_DMI_2 DMI_2_DMI_Types_Pkg

/* ENUM_DMI_DMI_Identifier_T_DMI_1/ */
#define ENUM_DMI_DMI_Identifier_T_DMI_1 DMI_1_DMI_Types_Pkg

/* INT_DMI_DMI_Identifier_T_DMI_2/ */
#define INT_DMI_DMI_Identifier_T_DMI_2 (kcg_lit_int32(1))

/* INT_DMI_DMI_Identifier_T_DMI_1/ */
#define INT_DMI_DMI_Identifier_T_DMI_1 (kcg_lit_int32(0))

/* DATA::Packets::DMI_to_EVC::cDMI_Identifier/ */
extern const DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg cDMI_Identifier_DATA_Packets_DMI_to_EVC;

/* DATA::cDMI_Identifier_int_array_size/ */
#define cDMI_Identifier_int_array_size_DATA (kcg_lit_int32(261))

/* ENUM_DMI_StatusSet_T_Starting_state/ */
#define ENUM_DMI_StatusSet_T_Starting_state Starting_state_DMI_Types_Pkg

/* ENUM_DMI_StatusSet_T_Failure_state/ */
#define ENUM_DMI_StatusSet_T_Failure_state Failure_state_DMI_Types_Pkg

/* ENUM_DMI_StatusSet_T_Running_not_active_state/ */
#define ENUM_DMI_StatusSet_T_Running_not_active_state                         \
  Running_not_active_state_DMI_Types_Pkg

/* ENUM_DMI_StatusSet_T_Train_Speed_Overflow/ */
#define ENUM_DMI_StatusSet_T_Train_Speed_Overflow                             \
  Train_Speed_Overflow_DMI_Types_Pkg

/* ENUM_DMI_StatusSet_T_Invalid_track_condition/ */
#define ENUM_DMI_StatusSet_T_Invalid_track_condition                          \
  Invalid_track_condition_DMI_Types_Pkg

/* ENUM_DMI_StatusSet_T_Invalid_predefined_text_message/ */
#define ENUM_DMI_StatusSet_T_Invalid_predefined_text_message                  \
  Invalid_predefined_text_message_DMI_Types_Pkg

/* ENUM_DMI_StatusSet_T_Invalid_text_message/ */
#define ENUM_DMI_StatusSet_T_Invalid_text_message                             \
  Invalid_text_message_DMI_Types_Pkg

/* ENUM_DMI_StatusSet_T_HW_warning_temp_reached/ */
#define ENUM_DMI_StatusSet_T_HW_warning_temp_reached                          \
  HW_warning_temp_reached_DMI_Types_Pkg

/* ENUM_DMI_StatusSet_T_TFT_OFF_temp_reached/ */
#define ENUM_DMI_StatusSet_T_TFT_OFF_temp_reached                             \
  TFT_OFF_temp_reached_DMI_Types_Pkg

/* ENUM_DMI_StatusSet_T_Device_OFF_temp_reached/ */
#define ENUM_DMI_StatusSet_T_Device_OFF_temp_reached                          \
  Device_OFF_temp_reached_DMI_Types_Pkg

/* ENUM_DMI_StatusSet_T_Over_temperature/ */
#define ENUM_DMI_StatusSet_T_Over_temperature Over_temperature_DMI_Types_Pkg

/* ENUM_DMI_StatusSet_T_Backlight_on_off/ */
#define ENUM_DMI_StatusSet_T_Backlight_on_off Backlight_on_off_DMI_Types_Pkg

/* ENUM_DMI_StatusSet_T_FAN_blocked/ */
#define ENUM_DMI_StatusSet_T_FAN_blocked FAN_blocked_DMI_Types_Pkg

/* ENUM_DMI_StatusSet_T_Power_supply_key_switch_off/ */
#define ENUM_DMI_StatusSet_T_Power_supply_key_switch_off                      \
  Power_supply_key_switch_off_DMI_Types_Pkg

/* ENUM_DMI_StatusSet_T_Watchdog_not_running/ */
#define ENUM_DMI_StatusSet_T_Watchdog_not_running                             \
  Watchdog_not_running_DMI_Types_Pkg

/* ENUM_DMI_StatusSet_T_Running_state/ */
#define ENUM_DMI_StatusSet_T_Running_state Running_state_DMI_Types_Pkg

/* INT_DMI_StatusSet_T_Watchdog_not_running/ */
#define INT_DMI_StatusSet_T_Watchdog_not_running (kcg_lit_int32(16))

/* INT_DMI_StatusSet_T_Power_supply_key_switch_off/ */
#define INT_DMI_StatusSet_T_Power_supply_key_switch_off (kcg_lit_int32(15))

/* INT_DMI_StatusSet_T_FAN_blocked/ */
#define INT_DMI_StatusSet_T_FAN_blocked (kcg_lit_int32(14))

/* INT_DMI_StatusSet_T_Backlight_on_off/ */
#define INT_DMI_StatusSet_T_Backlight_on_off (kcg_lit_int32(12))

/* INT_DMI_StatusSet_T_Over_temperature/ */
#define INT_DMI_StatusSet_T_Over_temperature (kcg_lit_int32(11))

/* INT_DMI_StatusSet_T_Device_OFF_temp_reached/ */
#define INT_DMI_StatusSet_T_Device_OFF_temp_reached (kcg_lit_int32(10))

/* INT_DMI_StatusSet_T_TFT_OFF_temp_reached/ */
#define INT_DMI_StatusSet_T_TFT_OFF_temp_reached (kcg_lit_int32(9))

/* INT_DMI_StatusSet_T_HW_warning_temp_reached/ */
#define INT_DMI_StatusSet_T_HW_warning_temp_reached (kcg_lit_int32(8))

/* INT_DMI_StatusSet_T_Invalid_text_message/ */
#define INT_DMI_StatusSet_T_Invalid_text_message (kcg_lit_int32(7))

/* INT_DMI_StatusSet_T_Invalid_predefined_text_message/ */
#define INT_DMI_StatusSet_T_Invalid_predefined_text_message (kcg_lit_int32(6))

/* INT_DMI_StatusSet_T_Invalid_track_condition/ */
#define INT_DMI_StatusSet_T_Invalid_track_condition (kcg_lit_int32(5))

/* INT_DMI_StatusSet_T_Train_Speed_Overflow/ */
#define INT_DMI_StatusSet_T_Train_Speed_Overflow (kcg_lit_int32(4))

/* INT_DMI_StatusSet_T_Running_not_active_state/ */
#define INT_DMI_StatusSet_T_Running_not_active_state (kcg_lit_int32(3))

/* INT_DMI_StatusSet_T_Failure_state/ */
#define INT_DMI_StatusSet_T_Failure_state (kcg_lit_int32(2))

/* INT_DMI_StatusSet_T_Starting_state/ */
#define INT_DMI_StatusSet_T_Starting_state (kcg_lit_int32(1))

/* INT_DMI_StatusSet_T_Running_state/ */
#define INT_DMI_StatusSet_T_Running_state (kcg_lit_int32(0))

/* DATA::Packets::DMI_to_EVC::cDMI_Status/ */
extern const DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg cDMI_Status_DATA_Packets_DMI_to_EVC;

/* DATA::cDMI_Status_int_array_size/ */
#define cDMI_Status_int_array_size_DATA (kcg_lit_int32(4))

/* DATA::Packets::Bothways::cDMI_Level_Data/ */
extern const DMI_Level_Data_T_DMI_Messages_Bothways_Pkg cDMI_Level_Data_DATA_Packets_Bothways;

/* DATA::cDMI_Level_Data_int_array_size/ */
#define cDMI_Level_Data_int_array_size_DATA (kcg_lit_int32(4))

/* TM_conversions::ENUM_M_AXLELOADCAT_C4/ */
#define ENUM_M_AXLELOADCAT_C4_TM_conversions M_AXLELOADCAT_C4

/* DATA::Packets::Bothways::cDMI_Train_Data/ */
extern const DMI_Train_Data_T_DMI_Messages_Bothways_Pkg cDMI_Train_Data_DATA_Packets_Bothways;

/* DATA::Packets::Bothways::cDMI_Adhesion_Factor_Data/ */
extern const DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg cDMI_Adhesion_Factor_Data_DATA_Packets_Bothways;

/* DATA::Packets::Bothways::cDMI_Train_Running_Number/ */
extern const DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg cDMI_Train_Running_Number_DATA_Packets_Bothways;

/* DATA::Packets::Bothways::cDMI_Driver_Identifier/ */
extern const _5_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg cDMI_Driver_Identifier_DATA_Packets_Bothways;

/* Messages::cDMI_EVC_CT/ */
extern const DMI_to_EVC_Message_T_API_DMI_Pkg cDMI_EVC_CT_Messages;

/* manage_DMI_Input_Pkg::cNo_STM/ */
#define cNo_STM_manage_DMI_Input_Pkg (kcg_lit_int32(-1))

/* SDM_Types_Pkg::M_rotating_min/ */
#define M_rotating_min_SDM_Types_Pkg (kcg_lit_int32(2))

/* SDM_Types_Pkg::M_rotating_max/ */
#define M_rotating_max_SDM_Types_Pkg (kcg_lit_int32(15))

/* SDM_Types_Pkg::A_gravity/ */
#define A_gravity_SDM_Types_Pkg (kcg_lit_int32(981))

/* SDMConversionModelPkg::cBrakePercentSpeedLookup/ */
extern const array_int32_221 cBrakePercentSpeedLookup_SDMConversionModelPkg;

/* SDMConversionModelPkg::cBrakePercentV_lim/ */
extern const array_int32_4 cBrakePercentV_lim_SDMConversionModelPkg;

/* SDMConversionModelPkg::cBrakePercentALookup/ */
extern const array_int32_6_221 cBrakePercentALookup_SDMConversionModelPkg;

/* SDMConversionModelPkg::cBrakePercentSteps/ */
#define cBrakePercentSteps_SDMConversionModelPkg                              \
  (kcg_lit_int32(250) - kcg_lit_int32(30) + kcg_lit_int32(1))

/* SDMConversionModelPkg::cBrakePercentStepsMin/ */
#define cBrakePercentStepsMin_SDMConversionModelPkg (kcg_lit_int32(30))

/* SDMConversionModelPkg::cBrakePercentStepsMax/ */
#define cBrakePercentStepsMax_SDMConversionModelPkg (kcg_lit_int32(250))

/* SDMConversionModelPkg::cBrakePercentServiceMax/ */
#define cBrakePercentServiceMax_SDMConversionModelPkg (kcg_lit_int32(135))

/* SDMConversionModelPkg::cEmptyKvIntSet/ */
extern const nvkvintset_T_Packet_Types_Pkg cEmptyKvIntSet_SDMConversionModelPkg;

/* SDMConversionModelPkg::cKvIntSetLength/ */
#define cKvIntSetLength_SDMConversionModelPkg (kcg_lit_int32(7))

/* SDMConversionModelPkg::cLKrIntLookUp/ */
extern const array_int32_32 cLKrIntLookUp_SDMConversionModelPkg;

/* SDMConversionModelPkg::cBrakePositionLengthMin/ */
#define cBrakePositionLengthMin_SDMConversionModelPkg (kcg_lit_float32(400.0))

/* SDMConversionModelPkg::cBrakePositionPECoeff/ */
extern const coeff_BrakeBasic_t_SDMConversionModelPkg cBrakePositionPECoeff_SDMConversionModelPkg;

/* SDMConversionModelPkg::cBrakePositionFreightShortSCoeff/ */
extern const coeff_BrakeBasic_t_SDMConversionModelPkg cBrakePositionFreightShortSCoeff_SDMConversionModelPkg;

/* SDMConversionModelPkg::cBrakePositionPassengerSCoeff/ */
extern const coeff_BrakeBasic_t_SDMConversionModelPkg cBrakePositionPassengerSCoeff_SDMConversionModelPkg;

/* SDMConversionModelPkg::cBrakePositionFreightLongSCoeff/ */
extern const coeff_BrakeBasic_t_SDMConversionModelPkg cBrakePositionFreightLongSCoeff_SDMConversionModelPkg;

/* SDMConversionModelPkg::cBrakePositionFreightLongECoeff/ */
extern const coeff_BrakeBasic_t_SDMConversionModelPkg cBrakePositionFreightLongECoeff_SDMConversionModelPkg;

/* SDMConversionModelPkg::cBrakePositionGECoeff/ */
extern const coeff_BrakeBasic_t_SDMConversionModelPkg cBrakePositionGECoeff_SDMConversionModelPkg;

/* SDMConversionModelPkg::cBrakePositionLengthShort/ */
#define cBrakePositionLengthShort_SDMConversionModelPkg (kcg_lit_float32(900.0))

/* SDMConversionModelPkg::cBrakePositionPCt/ */
#define cBrakePositionPCt_SDMConversionModelPkg (kcg_lit_float32(0.2))

/* SDMConversionModelPkg::cBrakePositionGCt/ */
#define cBrakePositionGCt_SDMConversionModelPkg (kcg_lit_float32(0.16))

/* SDMConversionModelPkg::cKvMergedLength/ */
#define cKvMergedLength_SDMConversionModelPkg                                 \
  (kcg_lit_int32(6) + kcg_lit_int32(7))

/* SDMConversionModelPkg::cKvIntLength/ */
#define cKvIntLength_SDMConversionModelPkg (kcg_lit_int32(7))

/* SDMConversionModelPkg::cBrakePercentSpeedSteps/ */
#define cBrakePercentSpeedSteps_SDMConversionModelPkg (kcg_lit_int32(6))

/* TargetLimits_Pkg::cMAX_Onboard_V_Release_Iterations/ */
#define cMAX_Onboard_V_Release_Iterations_TargetLimits_Pkg (kcg_lit_int32(10))

/* SDM_Types_Pkg::T_preindication/ */
#define T_preindication_SDM_Types_Pkg (kcg_lit_float32(7.0))

/* SDM_Types_Pkg::T_driver/ */
#define T_driver_SDM_Types_Pkg (kcg_lit_float32(4.0))

/* SDM_Types_Pkg::T_warning/ */
#define T_warning_SDM_Types_Pkg (kcg_lit_float32(2.0))

/* SDM_Types_Pkg::V_sbi_max/ */
#define V_sbi_max_SDM_Types_Pkg (kcg_lit_int32(5833))

/* SDM_Types_Pkg::dV_sbi_max/ */
#define dV_sbi_max_SDM_Types_Pkg (kcg_lit_int32(278))

/* SDM_Types_Pkg::dV_sbi_min/ */
#define dV_sbi_min_SDM_Types_Pkg (kcg_lit_int32(153))

/* SDM_Types_Pkg::V_sbi_min/ */
#define V_sbi_min_SDM_Types_Pkg (kcg_lit_int32(3056))

/* SDM_Types_Pkg::V_warning_max/ */
#define V_warning_max_SDM_Types_Pkg (kcg_lit_int32(3889))

/* SDM_Types_Pkg::dV_warning_max/ */
#define dV_warning_max_SDM_Types_Pkg (kcg_lit_int32(139))

/* SDM_Types_Pkg::dV_warning_min/ */
#define dV_warning_min_SDM_Types_Pkg (kcg_lit_int32(111))

/* SDM_Types_Pkg::V_warning_min/ */
#define V_warning_min_SDM_Types_Pkg (kcg_lit_int32(3056))

/* TargetManagement_pkg::emptyMRSPSection/ */
extern const MRSP_internal_section_T_TargetManagement_types emptyMRSPSection_TargetManagement_pkg;

/* TargetManagement_pkg::emptyTarget/ */
extern const Target_real_T_TargetManagement_types emptyTarget_TargetManagement_pkg;

/* SDM_Types_Pkg::V_ebi_max/ */
#define V_ebi_max_SDM_Types_Pkg (kcg_lit_int32(5833))

/* SDM_Types_Pkg::dV_ebi_max/ */
#define dV_ebi_max_SDM_Types_Pkg (kcg_lit_int32(417))

/* SDM_Types_Pkg::dV_ebi_min/ */
#define dV_ebi_min_SDM_Types_Pkg (kcg_lit_int32(208))

/* SDM_Types_Pkg::V_ebi_min/ */
#define V_ebi_min_SDM_Types_Pkg (kcg_lit_int32(3056))

/* CalcBrakingCurves_types::cMAX_BC_ARCS/ */
#define cMAX_BC_ARCS_CalcBrakingCurves_types                                  \
  (kcg_lit_int32(50) * kcg_lit_int32(2) + (kcg_lit_int32(7) + kcg_lit_int32(6) +\
      kcg_lit_int32(1)))

/* CalcBrakingCurves_types::cMAX_SPEED_VALUE_STEP/ */
#define cMAX_SPEED_VALUE_STEP_CalcBrakingCurves_types                         \
  (kcg_lit_int32(7) + kcg_lit_int32(6) + kcg_lit_int32(1))

/* CalcBrakingCurves_types::cMAX_DISTANCE_STEPS/ */
#define cMAX_DISTANCE_STEPS_CalcBrakingCurves_types                           \
  (kcg_lit_int32(50) * kcg_lit_int32(2))

/* SDM_GradientAcceleration_types::GradientMaxSectionsTrainlengthCompensated/ */
#define GradientMaxSectionsTrainlengthCompensated_SDM_GradientAcceleration_types\
  (kcg_lit_int32(50) * kcg_lit_int32(2))

/* DMI_Types_Pkg::cDMIUnknownSpeed/ */
#define cDMIUnknownSpeed_DMI_Types_Pkg (kcg_lit_int32(-1))

/* SDM_Commands_Pkg::cSDM_Types/ */
#define cSDM_Types_SDM_Commands_Pkg No_SDM_Type_SDM_Types_Pkg

/* SDM_Commands_Pkg::cSupervisionStatus/ */
#define cSupervisionStatus_SDM_Commands_Pkg Undefined_Supervision_SDM_Types_Pkg

/* Common_Types_Pkg::cDIM_MaxDataElementsInRMessage/ */
#define cDIM_MaxDataElementsInRMessage_Common_Types_Pkg (kcg_lit_int32(500))

/* Common_Types_Pkg::cMetadataArraySize/ */
#define cMetadataArraySize_Common_Types_Pkg (kcg_lit_int32(30))

/* Common_Types_Pkg::cDIM_MaxRMessages/ */
#define cDIM_MaxRMessages_Common_Types_Pkg (kcg_lit_int32(30))

/* ManageProcedure_Pkg::cSendingRBC/ */
extern const RBC_Id_T_Common_Types_Pkg cSendingRBC_ManageProcedure_Pkg;

/* ManageProcedure_Pkg::cdefault_manageT/ */
extern const radioManagementMessage_T_Common_Types_Pkg cdefault_manageT_ManageProcedure_Pkg;

/* ManageProcedure_Pkg::cpacket42_q_rbc_ni_rbc_nid_radio_q_sleepsession_to_MoRC/ */
extern const P42_SessionManagement_T_Packet_Types_Pkg cpacket42_q_rbc_ni_rbc_nid_radio_q_sleepsession_to_MoRC_ManageProcedure_Pkg;

/* ManageProcedure_Pkg::cpacket45_to_MoRC/ */
extern const P45_RadioNetworkRegistration_T_Packet_Types_Pkg cpacket45_to_MoRC_ManageProcedure_Pkg;

/* ManageProcedure_Pkg::cpacket45_nid_mn_to_MoRC/ */
#define cpacket45_nid_mn_to_MoRC_ManageProcedure_Pkg (kcg_lit_int32(1234))

/* ManageProcedure_Pkg::cpacket42_to_MoRC/ */
extern const P42_SessionManagement_T_Packet_Types_Pkg cpacket42_to_MoRC_ManageProcedure_Pkg;

/* ManageProcedure_Pkg::cNID_BG_Radio_Header/ */
extern const Radio_TrackTrain_Header_T_Radio_Types_Pkg cNID_BG_Radio_Header_ManageProcedure_Pkg;

/* TrackAtlasTypes::MAsMaxSections/ */
#define MAsMaxSections_TrackAtlasTypes (kcg_lit_int32(10))

/* API_DMI_Pkg::cMessage_DMI_to_EVC_size/ */
#define cMessage_DMI_to_EVC_size_API_DMI_Pkg (kcg_lit_int32(311))

/* RCM_Session_Types_Pkg::cNoMoRCStatus/ */
extern const morcStatus_T_RCM_Session_Types_Pkg cNoMoRCStatus_RCM_Session_Types_Pkg;

/* DMI_Types_Pkg::cEmptyTestStatusList/ */
extern const DMI_TXT_MSGList_status_T_DMI_Types_Pkg cEmptyTestStatusList_DMI_Types_Pkg;

/* DMI_Types_Pkg::cDMI_EVC_Status_Default/ */
extern const DMI_EVC_status_T_DMI_Types_Pkg cDMI_EVC_Status_Default_DMI_Types_Pkg;

/* DATA::Packets::Bothways::cDMI_Driver_Identifier_int/ */
extern const DMI_Driver_Identifier_int_array_T_DATA cDMI_Driver_Identifier_int_DATA_Packets_Bothways;

/* TM_conversions::INT_M_ADHESION_no_slippery_rail/ */
#define INT_M_ADHESION_no_slippery_rail_TM_conversions (kcg_lit_int32(1))

/* TM_conversions::INT_M_ADHESION_slippery_rail/ */
#define INT_M_ADHESION_slippery_rail_TM_conversions (kcg_lit_int32(0))

/* TM_conversions::ENUM_M_ADHESION_no_slippery_rail/ */
#define ENUM_M_ADHESION_no_slippery_rail_TM_conversions                       \
  M_ADHESION_Non_slippery_rail

/* TM_conversions::ENUM_M_ADHESION_slippery_rail/ */
#define ENUM_M_ADHESION_slippery_rail_TM_conversions M_ADHESION_Slippery_rail

/* DATA::Packets::Bothways::cDMI_Adhesion_Factor_Data_int/ */
extern const _15_DMI_Adhesion_Factor_Data_int_array_T_DATA cDMI_Adhesion_Factor_Data_int_DATA_Packets_Bothways;

/* TM_conversions::INT_M_LOADINGGAUGE_G1/ */
#define INT_M_LOADINGGAUGE_G1_TM_conversions (kcg_lit_int32(1))

/* TM_conversions::INT_M_LOADINGGAUGE_GA/ */
#define INT_M_LOADINGGAUGE_GA_TM_conversions (kcg_lit_int32(2))

/* TM_conversions::INT_M_LOADINGGAUGE_GB/ */
#define INT_M_LOADINGGAUGE_GB_TM_conversions (kcg_lit_int32(3))

/* TM_conversions::INT_M_LOADINGGAUGE_GC/ */
#define INT_M_LOADINGGAUGE_GC_TM_conversions (kcg_lit_int32(4))

/* TM_conversions::INT_M_LOADINGGAUGE_does_not_fit/ */
#define INT_M_LOADINGGAUGE_does_not_fit_TM_conversions (kcg_lit_int32(0))

/* TM_conversions::ENUM_M_LOADINGGAUGE_does_not_fit/ */
#define ENUM_M_LOADINGGAUGE_does_not_fit_TM_conversions                       \
  M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles

/* TM_conversions::ENUM_M_LOADINGGAUGE_GC/ */
#define ENUM_M_LOADINGGAUGE_GC_TM_conversions M_LOADINGGAUGE_GC

/* TM_conversions::ENUM_M_LOADINGGAUGE_GB/ */
#define ENUM_M_LOADINGGAUGE_GB_TM_conversions M_LOADINGGAUGE_GB

/* TM_conversions::ENUM_M_LOADINGGAUGE_GA/ */
#define ENUM_M_LOADINGGAUGE_GA_TM_conversions M_LOADINGGAUGE_GA

/* TM_conversions::ENUM_M_LOADINGGAUGE_G1/ */
#define ENUM_M_LOADINGGAUGE_G1_TM_conversions M_LOADINGGAUGE_G1

/* TM_conversions::INT_M_AIRTIGHT_fitted/ */
#define INT_M_AIRTIGHT_fitted_TM_conversions (kcg_lit_int32(1))

/* TM_conversions::INT_M_AIRTIGHT_not_fitted/ */
#define INT_M_AIRTIGHT_not_fitted_TM_conversions (kcg_lit_int32(0))

/* TM_conversions::ENUM_M_AIRTIGHT_not_fitted/ */
#define ENUM_M_AIRTIGHT_not_fitted_TM_conversions M_AIRTIGHT_Not_fitted

/* TM_conversions::ENUM_M_AIRTIGHT_fitted/ */
#define ENUM_M_AIRTIGHT_fitted_TM_conversions M_AIRTIGHT_Fitted

/* TM_conversions::INT_NC_TRAIN_freight_P/ */
#define INT_NC_TRAIN_freight_P_TM_conversions (kcg_lit_int32(1))

/* TM_conversions::INT_NC_TRAIN_freight_G/ */
#define INT_NC_TRAIN_freight_G_TM_conversions (kcg_lit_int32(2))

/* TM_conversions::INT_NC_TRAIN_passenger/ */
#define INT_NC_TRAIN_passenger_TM_conversions (kcg_lit_int32(3))

/* TM_conversions::INT_NC_TRAIN_no_train_categroy/ */
#define INT_NC_TRAIN_no_train_categroy_TM_conversions (kcg_lit_int32(0))

/* TM_conversions::ENUM_NC_TRAIN_passenger/ */
#define ENUM_NC_TRAIN_passenger_TM_conversions NC_TRAIN_Passenger_train

/* TM_conversions::ENUM_NC_TRAIN_freight_G/ */
#define ENUM_NC_TRAIN_freight_G_TM_conversions                                \
  _70_NC_TRAIN_Freight_train_braked_in_G_position

/* TM_conversions::ENUM_NC_TRAIN_freight_P/ */
#define ENUM_NC_TRAIN_freight_P_TM_conversions                                \
  NC_TRAIN_Freight_train_braked_in_P_position

/* TM_conversions::ENUM_NC_TRAIN_no_train_categroy/ */
#define ENUM_NC_TRAIN_no_train_categroy_TM_conversions                        \
  NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category

/* DATA::Packets::Bothways::cDMI_Train_Data_int/ */
extern const DMI_Train_Data_int_array_T_DATA cDMI_Train_Data_int_DATA_Packets_Bothways;

/* DATA::Packets::Bothways::cDMI_Train_Running_Number_int/ */
extern const _14_DMI_Train_Running_Number_int_array_T_DATA cDMI_Train_Running_Number_int_DATA_Packets_Bothways;

/* INT_Area_group_T_A/ */
#define INT_Area_group_T_A (kcg_lit_int32(0))

/* INT_Area_group_T_B/ */
#define INT_Area_group_T_B (kcg_lit_int32(1))

/* INT_Area_group_T_C/ */
#define INT_Area_group_T_C (kcg_lit_int32(2))

/* INT_Area_group_T_D/ */
#define INT_Area_group_T_D (kcg_lit_int32(3))

/* INT_Area_group_T_E/ */
#define INT_Area_group_T_E (kcg_lit_int32(4))

/* INT_Area_group_T_F/ */
#define INT_Area_group_T_F (kcg_lit_int32(5))

/* INT_Area_group_T_G/ */
#define INT_Area_group_T_G (kcg_lit_int32(6))

/* INT_Area_group_T_H/ */
#define INT_Area_group_T_H (kcg_lit_int32(7))

/* ENUM_Area_group_T_H/ */
#define ENUM_Area_group_T_H H_DMI_Types_Pkg

/* ENUM_Area_group_T_G/ */
#define ENUM_Area_group_T_G G_DMI_Types_Pkg

/* ENUM_Area_group_T_F/ */
#define ENUM_Area_group_T_F F_DMI_Types_Pkg

/* ENUM_Area_group_T_E/ */
#define ENUM_Area_group_T_E E_DMI_Types_Pkg

/* ENUM_Area_group_T_D/ */
#define ENUM_Area_group_T_D D_DMI_Types_Pkg

/* ENUM_Area_group_T_C/ */
#define ENUM_Area_group_T_C C_DMI_Types_Pkg

/* ENUM_Area_group_T_B/ */
#define ENUM_Area_group_T_B B_DMI_Types_Pkg

/* ENUM_Area_group_T_A/ */
#define ENUM_Area_group_T_A A_DMI_Types_Pkg

/* INT_Icon_group_T_level_symbol/ */
#define INT_Icon_group_T_level_symbol (kcg_lit_int32(0))

/* INT_Icon_group_T_mode_symbols/ */
#define INT_Icon_group_T_mode_symbols (kcg_lit_int32(1))

/* INT_Icon_group_T_navigation_symbols/ */
#define INT_Icon_group_T_navigation_symbols (kcg_lit_int32(5))

/* INT_Icon_group_T_order_an_announcements_symbols/ */
#define INT_Icon_group_T_order_an_announcements_symbols (kcg_lit_int32(3))

/* INT_Icon_group_T_planning_information_symbols/ */
#define INT_Icon_group_T_planning_information_symbols (kcg_lit_int32(4))

/* INT_Icon_group_T_settings_symbols/ */
#define INT_Icon_group_T_settings_symbols (kcg_lit_int32(6))

/* INT_Icon_group_T_status_symbols/ */
#define INT_Icon_group_T_status_symbols (kcg_lit_int32(2))

/* ENUM_Icon_group_T_status_symbols/ */
#define ENUM_Icon_group_T_status_symbols status_symbols_DMI_Types_Pkg

/* ENUM_Icon_group_T_settings_symbols/ */
#define ENUM_Icon_group_T_settings_symbols settings_symbols_DMI_Types_Pkg

/* ENUM_Icon_group_T_planning_information_symbols/ */
#define ENUM_Icon_group_T_planning_information_symbols                        \
  planning_information_symbols_DMI_Types_Pkg

/* ENUM_Icon_group_T_order_an_announcements_symbols/ */
#define ENUM_Icon_group_T_order_an_announcements_symbols                      \
  order_an_announcements_symbols_DMI_Types_Pkg

/* ENUM_Icon_group_T_navigation_symbols/ */
#define ENUM_Icon_group_T_navigation_symbols navigation_symbols_DMI_Types_Pkg

/* ENUM_Icon_group_T_mode_symbols/ */
#define ENUM_Icon_group_T_mode_symbols mode_symbols_DMI_Types_Pkg

/* ENUM_Icon_group_T_level_symbol/ */
#define ENUM_Icon_group_T_level_symbol level_symbol_DMI_Types_Pkg

/* INT_Icon_control_flag_T_clear_area/ */
#define INT_Icon_control_flag_T_clear_area (kcg_lit_int32(1))

/* INT_Icon_control_flag_T_show_icon_flashing_in_area/ */
#define _69_INT_Icon_control_flag_T_show_icon_flashing_in_area                \
  (kcg_lit_int32(2))

/* INT_Icon_control_flag_T_show_icon_with_yellow_flashing_frame_in_area/ */
#define _68_INT_Icon_control_flag_T_show_icon_with_yellow_flashing_frame_in_area\
  (kcg_lit_int32(3))

/* INT_Icon_control_flag_T_show_icon_in_area/ */
#define INT_Icon_control_flag_T_show_icon_in_area (kcg_lit_int32(0))

/* ENUM_Icon_control_flag_T_show_icon_with_yellow_flashing_frame_in_area/ */
#define _67_ENUM_Icon_control_flag_T_show_icon_with_yellow_flashing_frame_in_area\
  show_icon_with_yellow_flashing_frame_in_area_DMI_Types_Pkg

/* ENUM_Icon_control_flag_T_show_icon_flashing_in_area/ */
#define _66_ENUM_Icon_control_flag_T_show_icon_flashing_in_area               \
  show_icon_flashing_in_area_DMI_Types_Pkg

/* ENUM_Icon_control_flag_T_clear_area/ */
#define ENUM_Icon_control_flag_T_clear_area clear_area_DMI_Types_Pkg

/* ENUM_Icon_control_flag_T_show_icon_in_area/ */
#define ENUM_Icon_control_flag_T_show_icon_in_area                            \
  show_icon_in_area_DMI_Types_Pkg

/* DATA::Packets::EVC_to_DMI::cDMI_Icons_int/ */
extern const DMI_Icons_int_array_T_DATA cDMI_Icons_int_DATA_Packets_EVC_to_DMI;

/* DATA::Packets::EVC_to_DMI::cDMI_EVC_Radio_Net_Data_int/ */
extern const _13_DMI_EVC_Radio_Net_Data_int_array_T_DATA cDMI_EVC_Radio_Net_Data_int_DATA_Packets_EVC_to_DMI;

/* DATA::Packets::EVC_to_DMI::cDMI_EVC_Level_Data_int/ */
extern const DMI_EVC_Level_Data_int_array_T_DATA cDMI_EVC_Level_Data_int_DATA_Packets_EVC_to_DMI;

/* DATA::Packets::EVC_to_DMI::cDMI_Display_Control_int/ */
extern const DMI_Display_Control_int_array_T_DATA cDMI_Display_Control_int_DATA_Packets_EVC_to_DMI;

/* DATA::Packets::EVC_to_DMI::cDMI_System_Version_int/ */
extern const DMI_System_Version_int_array_T_DATA cDMI_System_Version_int_DATA_Packets_EVC_to_DMI;

/* TM_conversions::INT_M_VERSION_1_0/ */
#define INT_M_VERSION_1_0_TM_conversions (kcg_lit_int32(16))

/* TM_conversions::INT_M_VERSION_1_1/ */
#define INT_M_VERSION_1_1_TM_conversions (kcg_lit_int32(17))

/* TM_conversions::INT_M_VERSION_2_0/ */
#define INT_M_VERSION_2_0_TM_conversions (kcg_lit_int32(32))

/* TM_conversions::INT_M_VERSION_previous_M/ */
#define INT_M_VERSION_previous_M_TM_conversions (kcg_lit_int32(15))

/* TM_conversions::ENUM_M_VERSION_Version_2_0/ */
#define ENUM_M_VERSION_Version_2_0_TM_conversions                             \
  M_VERSION_Version_2_0_introduced_in_SRS_3_3_0

/* TM_conversions::ENUM_M_VERSION_Version_1_1/ */
#define ENUM_M_VERSION_Version_1_1_TM_conversions                             \
  M_VERSION_Version_1_1_introduced_in_SRS_3_3_0

/* TM_conversions::ENUM_M_VERSION_Version_1_0/ */
#define ENUM_M_VERSION_Version_1_0_TM_conversions                             \
  M_VERSION_Version_1_0_introduced_in_SRS_1_2_0_and_reused_in_SRSs_2_0_0_and_2_2_2_and_2_3_0

/* TM_conversions::ENUM_M_VERSION_Previous_versions/ */
#define ENUM_M_VERSION_Previous_versions_TM_conversions                       \
  M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS

/* DATA::Packets::EVC_to_DMI::cDMI_Identifier_Request_int/ */
extern const _12_DMI_Identifier_Request_int_array_T_DATA cDMI_Identifier_Request_int_DATA_Packets_EVC_to_DMI;

/* TM_conversions::INT_M_TRACKCOND_Air_tightness/ */
#define INT_M_TRACKCOND_Air_tightness_TM_conversions (kcg_lit_int32(5))

/* TM_conversions::INT_M_TRACKCOND_Powerless_section_Lower_pantograph/ */
#define _65_INT_M_TRACKCOND_Powerless_section_Lower_pantograph_TM_conversions \
  (kcg_lit_int32(3))

/* TM_conversions::INT_M_TRACKCOND_Powerless_section_switch_off_the_main_power_switch/ */
#define INT_M_TRACKCOND_Powerless_section_switch_off_the_main_power_switch_TM_conversions\
  (kcg_lit_int32(9))

/* TM_conversions::INT_M_TRACKCOND_Radio_hole_stop_supervising_T_NVCONTACT/ */
#define INT_M_TRACKCOND_Radio_hole_stop_supervising_T_NVCONTACT_TM_conversions\
  (kcg_lit_int32(4))

/* TM_conversions::INT_M_TRACKCOND_Sound_horn/ */
#define INT_M_TRACKCOND_Sound_horn_TM_conversions (kcg_lit_int32(2))

/* TM_conversions::INT_M_TRACKCOND_Switch_off_eddy_current_brake_for_emergency_brake/ */
#define _64_INT_M_TRACKCOND_Switch_off_eddy_current_brake_for_emergency_brake_TM_conversions\
  (kcg_lit_int32(10))

/* TM_conversions::INT_M_TRACKCOND_Switch_off_eddy_current_brake_for_service_brake/ */
#define INT_M_TRACKCOND_Switch_off_eddy_current_brake_for_service_brake_TM_conversions\
  (kcg_lit_int32(7))

/* TM_conversions::INT_M_TRACKCOND_Switch_off_magnetic_shoe_brake/ */
#define INT_M_TRACKCOND_Switch_off_magnetic_shoe_brake_TM_conversions         \
  (kcg_lit_int32(8))

/* TM_conversions::INT_M_TRACKCOND_Switch_off_regenerative_brake/ */
#define INT_M_TRACKCOND_Switch_off_regenerative_brake_TM_conversions          \
  (kcg_lit_int32(6))

/* TM_conversions::INT_M_TRACKCOND_Tunnel_stopping_area/ */
#define INT_M_TRACKCOND_Tunnel_stopping_area_TM_conversions (kcg_lit_int32(1))

/* TM_conversions::INT_M_TRACKCOND_Non_stopping_area/ */
#define INT_M_TRACKCOND_Non_stopping_area_TM_conversions (kcg_lit_int32(0))

/* TM_conversions::ENUM_M_TRACKCOND_Tunnel_stopping_area/ */
#define ENUM_M_TRACKCOND_Tunnel_stopping_area_TM_conversions                  \
  M_TRACKCOND_Tunnel_stopping_area_Initial_state_is_no_tunnel_stopping_area

/* TM_conversions::ENUM_M_TRACKCOND_Switch_off_regenerative_brake/ */
#define ENUM_M_TRACKCOND_Switch_off_regenerative_brake_TM_conversions         \
  M_TRACKCOND_Powerless_section_switch_off_the_main_power_switch_Initial_state_is_not_powerless_section

/* TM_conversions::ENUM_M_TRACKCOND_Switch_off_magnetic_shoe_brake/ */
#define ENUM_M_TRACKCOND_Switch_off_magnetic_shoe_brake_TM_conversions        \
  M_TRACKCOND_Switch_off_magnetic_shoe_brake_Initial_state_is_magnetic_shoe_brake_on

/* TM_conversions::ENUM_M_TRACKCOND_Switch_off_eddy_current_brake_for_service_brake/ */
#define _62_ENUM_M_TRACKCOND_Switch_off_eddy_current_brake_for_service_brake_TM_conversions\
  _63_M_TRACKCOND_Switch_off_eddy_current_brake_for_service_brake_Initial_state_is_eddy_current_brake_for_service_brake_on

/* TM_conversions::ENUM_M_TRACKCOND_Switch_off_eddy_current_brake_for_emergency_brake/ */
#define ENUM_M_TRACKCOND_Switch_off_eddy_current_brake_for_emergency_brake_TM_conversions\
  M_TRACKCOND_Switch_off_eddy_current_brake_for_emergency_brake_Initial_state_is_eddy_current_brake_for_emergency_brake_on

/* TM_conversions::ENUM_M_TRACKCOND_Sound_horn/ */
#define ENUM_M_TRACKCOND_Sound_horn_TM_conversions                            \
  M_TRACKCOND_Sound_horn_Initial_state_is_is_no_request_for_sound_horn

/* TM_conversions::ENUM_M_TRACKCOND_Radio_hole_stop_supervising_T_NVCONTACT/ */
#define ENUM_M_TRACKCOND_Radio_hole_stop_supervising_T_NVCONTACT_TM_conversions\
  M_TRACKCOND_Radio_hole_stop_supervising_T_NVCONTACT_Initial_state_is_supervise_T_NVCONTACT

/* TM_conversions::ENUM_M_TRACKCOND_Powerless_section_switch_off_the_main_power_switch/ */
#define _61_ENUM_M_TRACKCOND_Powerless_section_switch_off_the_main_power_switch_TM_conversions\
  M_TRACKCOND_Powerless_section_switch_off_the_main_power_switch_Initial_state_is_not_powerless_section

/* TM_conversions::ENUM_M_TRACKCOND_Powerless_section_Lower_pantograph/ */
#define ENUM_M_TRACKCOND_Powerless_section_Lower_pantograph_TM_conversions    \
  M_TRACKCOND_Powerless_section_Lower_pantograph_Initial_state_is_not_powerless_section

/* TM_conversions::ENUM_M_TRACKCOND_Non_stopping_area/ */
#define ENUM_M_TRACKCOND_Non_stopping_area_TM_conversions                     \
  M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted

/* TM_conversions::ENUM_M_TRACKCOND_Air_tightness/ */
#define ENUM_M_TRACKCOND_Air_tightness_TM_conversions                         \
  M_TRACKCOND_Switch_off_regenerative_brake_Initial_state_is_regenerative_brake_on

/* TM_conversions::DIM_D_max/ */
#define DIM_D_max_TM_conversions (kcg_lit_int32(32767))

/* TM_conversions::DIM_D_min/ */
#define DIM_D_min_TM_conversions (kcg_lit_int32(0))

/* DATA::Packets::EVC_to_DMI::cDMI_Track_Description_in/ */
extern const DMI_Track_Description_int_array_T cDMI_Track_Description_in_DATA_Packets_EVC_to_DMI;

/* TM_conversions::INT_Q_TEXTCONFIRM_confirmation_EB/ */
#define _60_INT_Q_TEXTCONFIRM_confirmation_EB_TM_conversions (kcg_lit_int32(3))

/* TM_conversions::INT_Q_TEXTCONFIRM_confirmation_SB/ */
#define _59_INT_Q_TEXTCONFIRM_confirmation_SB_TM_conversions (kcg_lit_int32(2))

/* TM_conversions::INT_Q_TEXTCONFIRM_no_confirmation/ */
#define INT_Q_TEXTCONFIRM_no_confirmation_TM_conversions (kcg_lit_int32(0))

/* TM_conversions::INT_Q_TEXTCONFIRM_confirmation/ */
#define INT_Q_TEXTCONFIRM_confirmation_TM_conversions (kcg_lit_int32(1))

/* TM_conversions::ENUM_Q_TEXTCONFIRM_no_confirmation/ */
#define ENUM_Q_TEXTCONFIRM_no_confirmation_TM_conversions                     \
  Q_TEXTCONFIRM_No_confirmation_required

/* TM_conversions::ENUM_Q_TEXTCONFIRM_confirmation_SB/ */
#define _57_ENUM_Q_TEXTCONFIRM_confirmation_SB_TM_conversions                 \
  _58_Q_TEXTCONFIRM_Confirmation_required_command_application_of_the_service_brake_when_display_end_condition_is_fulfilled_unless_the_text_has_already_been_acknowledged_by_the_driver

/* TM_conversions::ENUM_Q_TEXTCONFIRM_confirmation_EB/ */
#define _55_ENUM_Q_TEXTCONFIRM_confirmation_EB_TM_conversions                 \
  _56_Q_TEXTCONFIRM_Confirmation_required_command_application_of_the_emergency_brake_when_display_end_condition_is_fulfilled_unless_the_text_has_already_been_acknowledged_by_the_driver

/* TM_conversions::ENUM_Q_TEXTCONFIRM_confirmation/ */
#define ENUM_Q_TEXTCONFIRM_confirmation_TM_conversions                        \
  Q_TEXTCONFIRM_Confirmation_required

/* TM_conversions::INT_Q_TEXTCLASS_aux/ */
#define INT_Q_TEXTCLASS_aux_TM_conversions (kcg_lit_int32(0))

/* TM_conversions::INT_Q_TEXTCLASS_important/ */
#define INT_Q_TEXTCLASS_important_TM_conversions (kcg_lit_int32(1))

/* TM_conversions::ENUM_Q_TEXTCLASS_aux/ */
#define ENUM_Q_TEXTCLASS_aux_TM_conversions Q_TEXTCLASS_Auxiliary_Information

/* TM_conversions::ENUM_Q_TEXTCLASS_important/ */
#define ENUM_Q_TEXTCLASS_important_TM_conversions                             \
  Q_TEXTCLASS_Important_Information

/* INT_DMI_Q_TEXT_acknowledgment/ */
#define INT_DMI_Q_TEXT_acknowledgment (kcg_lit_int32(26))

/* INT_DMI_Q_TEXT_balise_read_error/ */
#define INT_DMI_Q_TEXT_balise_read_error (kcg_lit_int32(0))

/* INT_DMI_Q_TEXT_communication_error/ */
#define INT_DMI_Q_TEXT_communication_error (kcg_lit_int32(1))

/* INT_DMI_Q_TEXT_emergency_stop/ */
#define INT_DMI_Q_TEXT_emergency_stop (kcg_lit_int32(15))

/* INT_DMI_Q_TEXT_entering_FS/ */
#define INT_DMI_Q_TEXT_entering_FS (kcg_lit_int32(2))

/* INT_DMI_Q_TEXT_entering_OS/ */
#define INT_DMI_Q_TEXT_entering_OS (kcg_lit_int32(3))

/* INT_DMI_Q_TEXT_level_crossing_not_protected/ */
#define INT_DMI_Q_TEXT_level_crossing_not_protected (kcg_lit_int32(25))

/* INT_DMI_Q_TEXT_no_MA_received_at_level_transition/ */
#define INT_DMI_Q_TEXT_no_MA_received_at_level_transition (kcg_lit_int32(11))

/* INT_DMI_Q_TEXT_no_track_condition_will_be_received/ */
#define INT_DMI_Q_TEXT_no_track_condition_will_be_received (kcg_lit_int32(4))

/* INT_DMI_Q_TEXT_no_track_description/ */
#define INT_DMI_Q_TEXT_no_track_description (kcg_lit_int32(19))

/* INT_DMI_Q_TEXT_radio_network_registration_failed/ */
#define INT_DMI_Q_TEXT_radio_network_registration_failed (kcg_lit_int32(24))

/* INT_DMI_Q_TEXT_route_unsuitable_axle_load_category/ */
#define _54_INT_DMI_Q_TEXT_route_unsuitable_axle_load_category                \
  (kcg_lit_int32(21))

/* INT_DMI_Q_TEXT_route_unsuitable_loading_gauge/ */
#define _53_INT_DMI_Q_TEXT_route_unsuitable_loading_gauge (kcg_lit_int32(22))

/* INT_DMI_Q_TEXT_route_unsuitable_traction_system/ */
#define INT_DMI_Q_TEXT_route_unsuitable_traction_system (kcg_lit_int32(23))

/* INT_DMI_Q_TEXT_runaway_movement/ */
#define INT_DMI_Q_TEXT_runaway_movement (kcg_lit_int32(5))

/* INT_DMI_Q_TEXT_RV_distance_esceeded/ */
#define INT_DMI_Q_TEXT_RV_distance_esceeded (kcg_lit_int32(18))

/* INT_DMI_Q_TEXT_SH_refused/ */
#define INT_DMI_Q_TEXT_SH_refused (kcg_lit_int32(6))

/* INT_DMI_Q_TEXT_SH_request_failed/ */
#define INT_DMI_Q_TEXT_SH_request_failed (kcg_lit_int32(17))

/* INT_DMI_Q_TEXT_SH_stop_order/ */
#define INT_DMI_Q_TEXT_SH_stop_order (kcg_lit_int32(13))

/* INT_DMI_Q_TEXT_SR_distance_exceeded/ */
#define INT_DMI_Q_TEXT_SR_distance_exceeded (kcg_lit_int32(12))

/* INT_DMI_Q_TEXT_SR_stop_order/ */
#define INT_DMI_Q_TEXT_SR_stop_order (kcg_lit_int32(14))

/* INT_DMI_Q_TEXT_STM_brake_Deman/ */
#define INT_DMI_Q_TEXT_STM_brake_Deman (kcg_lit_int32(20))

/* INT_DMI_Q_TEXT_trackside_malfunction/ */
#define INT_DMI_Q_TEXT_trackside_malfunction (kcg_lit_int32(16))

/* INT_DMI_Q_TEXT_trackside_not_compatible/ */
#define INT_DMI_Q_TEXT_trackside_not_compatible (kcg_lit_int32(7))

/* INT_DMI_Q_TEXT_train_data_changed/ */
#define INT_DMI_Q_TEXT_train_data_changed (kcg_lit_int32(8))

/* INT_DMI_Q_TEXT_train_is_rejected/ */
#define INT_DMI_Q_TEXT_train_is_rejected (kcg_lit_int32(9))

/* INT_DMI_Q_TEXT_unauthorized_passing_of_EOA_LOA/ */
#define INT_DMI_Q_TEXT_unauthorized_passing_of_EOA_LOA (kcg_lit_int32(10))

/* ENUM_DMI_Q_TEXT_unauthorized_passing_of_EOA_LOA/ */
#define ENUM_DMI_Q_TEXT_unauthorized_passing_of_EOA_LOA                       \
  unauthorized_passing_of_EOA_LOA_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_train_is_rejected/ */
#define ENUM_DMI_Q_TEXT_train_is_rejected train_is_rejected_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_train_data_changed/ */
#define ENUM_DMI_Q_TEXT_train_data_changed train_data_changed_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_trackside_not_compatible/ */
#define ENUM_DMI_Q_TEXT_trackside_not_compatible                              \
  trackside_not_compatible_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_trackside_malfunction/ */
#define ENUM_DMI_Q_TEXT_trackside_malfunction                                 \
  trackside_malfunction_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_STM_brake_Deman/ */
#define ENUM_DMI_Q_TEXT_STM_brake_Deman STM_brake_Deman_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_SR_stop_order/ */
#define ENUM_DMI_Q_TEXT_SR_stop_order SR_stop_order_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_SR_distance_exceeded/ */
#define ENUM_DMI_Q_TEXT_SR_distance_exceeded SR_distance_exceeded_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_SH_stop_order/ */
#define ENUM_DMI_Q_TEXT_SH_stop_order SH_stop_order_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_SH_request_failed/ */
#define ENUM_DMI_Q_TEXT_SH_request_failed SH_request_failed_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_SH_refused/ */
#define ENUM_DMI_Q_TEXT_SH_refused SH_refused_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_RV_distance_esceeded/ */
#define ENUM_DMI_Q_TEXT_RV_distance_esceeded RV_distance_esceeded_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_runaway_movement/ */
#define ENUM_DMI_Q_TEXT_runaway_movement runaway_movement_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_route_unsuitable_traction_system/ */
#define _52_ENUM_DMI_Q_TEXT_route_unsuitable_traction_system                  \
  route_unsuitable_traction_system_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_route_unsuitable_loading_gauge/ */
#define _51_ENUM_DMI_Q_TEXT_route_unsuitable_loading_gauge                    \
  route_unsuitable_loading_gauge_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_route_unsuitable_axle_load_category/ */
#define ENUM_DMI_Q_TEXT_route_unsuitable_axle_load_category                   \
  route_unsuitable_axle_load_category_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_radio_network_registration_failed/ */
#define ENUM_DMI_Q_TEXT_radio_network_registration_failed                     \
  radio_network_registration_failed_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_no_track_description/ */
#define ENUM_DMI_Q_TEXT_no_track_description no_track_description_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_no_track_condition_will_be_received/ */
#define ENUM_DMI_Q_TEXT_no_track_condition_will_be_received                   \
  no_track_condition_will_be_received_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_no_MA_received_at_level_transition/ */
#define ENUM_DMI_Q_TEXT_no_MA_received_at_level_transition                    \
  no_MA_received_at_level_transition_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_level_crossing_not_protected/ */
#define ENUM_DMI_Q_TEXT_level_crossing_not_protected                          \
  level_crossing_not_protected_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_entering_OS/ */
#define ENUM_DMI_Q_TEXT_entering_OS entering_OS_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_entering_FS/ */
#define ENUM_DMI_Q_TEXT_entering_FS entering_FS_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_emergency_stop/ */
#define ENUM_DMI_Q_TEXT_emergency_stop emergency_stop_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_communication_error/ */
#define ENUM_DMI_Q_TEXT_communication_error communication_error_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_balise_read_error/ */
#define ENUM_DMI_Q_TEXT_balise_read_error balise_read_error_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_acknowledgment/ */
#define ENUM_DMI_Q_TEXT_acknowledgment acknowledgment_DMI_Types_Pkg

/* DATA::Packets::EVC_to_DMI::cDMI_Text_Message_int/ */
extern const DMI_Text_Message_int_array_T_DATA cDMI_Text_Message_int_DATA_Packets_EVC_to_DMI;

/* TM_conversions::INT_M_AXLELOADCAT_A/ */
#define INT_M_AXLELOADCAT_A_TM_conversions (kcg_lit_int32(0))

/* TM_conversions::INT_M_AXLELOADCAT_B1/ */
#define INT_M_AXLELOADCAT_B1_TM_conversions (kcg_lit_int32(2))

/* TM_conversions::INT_M_AXLELOADCAT_B2/ */
#define INT_M_AXLELOADCAT_B2_TM_conversions (kcg_lit_int32(3))

/* TM_conversions::INT_M_AXLELOADCAT_C2/ */
#define INT_M_AXLELOADCAT_C2_TM_conversions (kcg_lit_int32(4))

/* TM_conversions::INT_M_AXLELOADCAT_C3/ */
#define INT_M_AXLELOADCAT_C3_TM_conversions (kcg_lit_int32(5))

/* TM_conversions::INT_M_AXLELOADCAT_C4/ */
#define INT_M_AXLELOADCAT_C4_TM_conversions (kcg_lit_int32(6))

/* TM_conversions::INT_M_AXLELOADCAT_D2/ */
#define INT_M_AXLELOADCAT_D2_TM_conversions (kcg_lit_int32(7))

/* TM_conversions::INT_M_AXLELOADCAT_D3/ */
#define INT_M_AXLELOADCAT_D3_TM_conversions (kcg_lit_int32(8))

/* TM_conversions::INT_M_AXLELOADCAT_D4/ */
#define INT_M_AXLELOADCAT_D4_TM_conversions (kcg_lit_int32(9))

/* TM_conversions::INT_M_AXLELOADCAT_D4XL/ */
#define INT_M_AXLELOADCAT_D4XL_TM_conversions (kcg_lit_int32(10))

/* TM_conversions::INT_M_AXLELOADCAT_E4/ */
#define INT_M_AXLELOADCAT_E4_TM_conversions (kcg_lit_int32(11))

/* TM_conversions::INT_M_AXLELOADCAT_HS17/ */
#define INT_M_AXLELOADCAT_HS17_TM_conversions (kcg_lit_int32(1))

/* TM_conversions::INT_M_AXLELOADCAT_E5/ */
#define INT_M_AXLELOADCAT_E5_TM_conversions (kcg_lit_int32(12))

/* TM_conversions::ENUM_M_AXLELOADCAT_HS17/ */
#define ENUM_M_AXLELOADCAT_HS17_TM_conversions M_AXLELOADCAT_HS17

/* TM_conversions::ENUM_M_AXLELOADCAT_E5/ */
#define ENUM_M_AXLELOADCAT_E5_TM_conversions M_AXLELOADCAT_E5

/* TM_conversions::ENUM_M_AXLELOADCAT_E4/ */
#define ENUM_M_AXLELOADCAT_E4_TM_conversions M_AXLELOADCAT_E4

/* TM_conversions::ENUM_M_AXLELOADCAT_D4XL/ */
#define ENUM_M_AXLELOADCAT_D4XL_TM_conversions M_AXLELOADCAT_D4XL

/* TM_conversions::ENUM_M_AXLELOADCAT_D4/ */
#define ENUM_M_AXLELOADCAT_D4_TM_conversions M_AXLELOADCAT_D4

/* TM_conversions::ENUM_M_AXLELOADCAT_D3/ */
#define ENUM_M_AXLELOADCAT_D3_TM_conversions M_AXLELOADCAT_D3

/* TM_conversions::ENUM_M_AXLELOADCAT_D2/ */
#define ENUM_M_AXLELOADCAT_D2_TM_conversions M_AXLELOADCAT_D2

/* TM_conversions::ENUM_M_AXLELOADCAT_C3/ */
#define ENUM_M_AXLELOADCAT_C3_TM_conversions M_AXLELOADCAT_C3

/* TM_conversions::ENUM_M_AXLELOADCAT_C2/ */
#define ENUM_M_AXLELOADCAT_C2_TM_conversions M_AXLELOADCAT_C2

/* TM_conversions::ENUM_M_AXLELOADCAT_B2/ */
#define ENUM_M_AXLELOADCAT_B2_TM_conversions M_AXLELOADCAT_B2

/* TM_conversions::ENUM_M_AXLELOADCAT_B1/ */
#define ENUM_M_AXLELOADCAT_B1_TM_conversions M_AXLELOADCAT_B1

/* TM_conversions::ENUM_M_AXLELOADCAT_A/ */
#define ENUM_M_AXLELOADCAT_A_TM_conversions M_AXLELOADCAT_A

/* DATA::Packets::EVC_to_DMI::cDMI_EVC_Coded_Train_Data_int/ */
extern const _11_DMI_EVC_Coded_Train_Data_int_array_T_DATA cDMI_EVC_Coded_Train_Data_int_DATA_Packets_EVC_to_DMI;

/* INT_DMI_List_Entry_Request_T_Enter_revalidate_driver_identifier/ */
#define _50_INT_DMI_List_Entry_Request_T_Enter_revalidate_driver_identifier   \
  (kcg_lit_int32(0))

/* INT_DMI_List_Entry_Request_T_Enter_revalidate_train_running_number/ */
#define _49_INT_DMI_List_Entry_Request_T_Enter_revalidate_train_running_number\
  (kcg_lit_int32(1))

/* INT_DMI_List_Entry_Request_T_Enter_revalidate_ETCS_level/ */
#define _48_INT_DMI_List_Entry_Request_T_Enter_revalidate_ETCS_level          \
  (kcg_lit_int32(2))

/* INT_DMI_List_Entry_Request_T_Enter_RBC_contact_menu/ */
#define _47_INT_DMI_List_Entry_Request_T_Enter_RBC_contact_menu               \
  (kcg_lit_int32(3))

/* INT_DMI_List_Entry_Request_T_Validate_train_data/ */
#define INT_DMI_List_Entry_Request_T_Validate_train_data (kcg_lit_int32(4))

/* INT_DMI_List_Entry_Request_T_Enter_NTC_data/ */
#define _46_INT_DMI_List_Entry_Request_T_Enter_NTC_data (kcg_lit_int32(5))

/* INT_DMI_List_Entry_Request_T_Spare/ */
#define INT_DMI_List_Entry_Request_T_Spare (kcg_lit_int32(6))

/* INT_DMI_List_Entry_Request_T_Enable_the_track_ahead_free_by_the_driver/ */
#define INT_DMI_List_Entry_Request_T_Enable_the_track_ahead_free_by_the_driver\
  (kcg_lit_int32(7))

/* INT_DMI_List_Entry_Request_T_Disable_the_Track_Ahead_free_page/ */
#define INT_DMI_List_Entry_Request_T_Disable_the_Track_Ahead_free_page        \
  (kcg_lit_int32(8))

/* INT_DMI_List_Entry_Request_T_Show_main_window/ */
#define _45_INT_DMI_List_Entry_Request_T_Show_main_window (kcg_lit_int32(9))

/* INT_DMI_List_Entry_Request_T_Hide_main_window/ */
#define _44_INT_DMI_List_Entry_Request_T_Hide_main_window (kcg_lit_int32(10))

/* INT_DMI_List_Entry_Request_T_Hide_adhesion_factor_entry_window/ */
#define _43_INT_DMI_List_Entry_Request_T_Hide_adhesion_factor_entry_window    \
  (kcg_lit_int32(11))

/* INT_DMI_List_Entry_Request_T_Hide_staff_responsible_entry_window/ */
#define INT_DMI_List_Entry_Request_T_Hide_staff_responsible_entry_window      \
  (kcg_lit_int32(12))

/* INT_DMI_List_Entry_Request_T_Show_Set_VBC_validation_window/ */
#define _42_INT_DMI_List_Entry_Request_T_Show_Set_VBC_validation_window       \
  (kcg_lit_int32(13))

/* INT_DMI_List_Entry_Request_T_Show_Remove_VBC_validation_window/ */
#define INT_DMI_List_Entry_Request_T_Show_Remove_VBC_validation_window        \
  (kcg_lit_int32(14))

/* ENUM_DMI_List_Entry_Request_T_Show_Remove_VBC_validation_window/ */
#define _41_ENUM_DMI_List_Entry_Request_T_Show_Remove_VBC_validation_window   \
  Show_Remove_VBC_validation_window_DMI_Types_Pkg

/* ENUM_DMI_List_Entry_Request_T_Show_Set_VBC_validation_window/ */
#define _40_ENUM_DMI_List_Entry_Request_T_Show_Set_VBC_validation_window      \
  Show_Set_VBC_validation_window_DMI_Types_Pkg

/* ENUM_DMI_List_Entry_Request_T_Hide_adhesion_factor_entry_window/ */
#define _39_ENUM_DMI_List_Entry_Request_T_Hide_adhesion_factor_entry_window   \
  Hide_adhesion_factor_entry_window_DMI_Types_Pkg

/* ENUM_DMI_List_Entry_Request_T_Hide_main_window/ */
#define ENUM_DMI_List_Entry_Request_T_Hide_main_window                        \
  Hide_main_window_DMI_Types_Pkg

/* ENUM_DMI_List_Entry_Request_T_Show_main_window/ */
#define _38_ENUM_DMI_List_Entry_Request_T_Show_main_window                    \
  Show_main_window_DMI_Types_Pkg

/* ENUM_DMI_List_Entry_Request_T_Disable_the_Track_Ahead_free_page/ */
#define ENUM_DMI_List_Entry_Request_T_Disable_the_Track_Ahead_free_page       \
  Disable_the_Track_Ahead_free_page_DMI_Types_Pkg

/* ENUM_DMI_List_Entry_Request_T_Enable_the_track_ahead_free_by_the_driver/ */
#define _37_ENUM_DMI_List_Entry_Request_T_Enable_the_track_ahead_free_by_the_driver\
  Enable_the_track_ahead_free_by_the_driver_DMI_Types_Pkg

/* ENUM_DMI_List_Entry_Request_T_Spare/ */
#define ENUM_DMI_List_Entry_Request_T_Spare Spare_DMI_Types_Pkg

/* ENUM_DMI_List_Entry_Request_T_Enter_NTC_data/ */
#define _36_ENUM_DMI_List_Entry_Request_T_Enter_NTC_data                      \
  Enter_NTC_data_DMI_Types_Pkg

/* ENUM_DMI_List_Entry_Request_T_Validate_train_data/ */
#define ENUM_DMI_List_Entry_Request_T_Validate_train_data                     \
  Validate_train_data_DMI_Types_Pkg

/* ENUM_DMI_List_Entry_Request_T_Enter_RBC_contact_menu/ */
#define _35_ENUM_DMI_List_Entry_Request_T_Enter_RBC_contact_menu              \
  Enter_RBC_contact_menu_DMI_Types_Pkg

/* ENUM_DMI_List_Entry_Request_T_Enter_revalidate_ETCS_level/ */
#define _34_ENUM_DMI_List_Entry_Request_T_Enter_revalidate_ETCS_level         \
  Enter_revalidate_ETCS_level_DMI_Types_Pkg

/* ENUM_DMI_List_Entry_Request_T_Enter_revalidate_train_running_number/ */
#define _33_ENUM_DMI_List_Entry_Request_T_Enter_revalidate_train_running_number\
  Enter_revalidate_train_running_number_DMI_Types_Pkg

/* ENUM_DMI_List_Entry_Request_T_Enter_revalidate_driver_identifier/ */
#define ENUM_DMI_List_Entry_Request_T_Enter_revalidate_driver_identifier      \
  Enter_revalidate_driver_identifier_DMI_Types_Pkg

/* DATA::Packets::EVC_to_DMI::cDMI_Entry_Request_int/ */
extern const DMI_Entry_Request_int_array_T_DATA cDMI_Entry_Request_int_DATA_Packets_EVC_to_DMI;

/* DATA::Packets::EVC_to_DMI::cDMI_Menu_Request_int/ */
extern const DMI_Menu_Request_int_array_T_DATA cDMI_Menu_Request_int_DATA_Packets_EVC_to_DMI;

/* TM_conversions::INT_M_MODE_Full_Supervision/ */
#define INT_M_MODE_Full_Supervision_TM_conversions (kcg_lit_int32(0))

/* TM_conversions::INT_M_MODE_Isolation/ */
#define INT_M_MODE_Isolation_TM_conversions (kcg_lit_int32(10))

/* TM_conversions::INT_M_MODE_Limited_Supervision/ */
#define INT_M_MODE_Limited_Supervision_TM_conversions (kcg_lit_int32(12))

/* TM_conversions::INT_M_MODE_National_System/ */
#define INT_M_MODE_National_System_TM_conversions (kcg_lit_int32(13))

/* TM_conversions::INT_M_MODE_Non_Leading/ */
#define INT_M_MODE_Non_Leading_TM_conversions (kcg_lit_int32(11))

/* TM_conversions::INT_M_MODE_On_Sight/ */
#define INT_M_MODE_On_Sight_TM_conversions (kcg_lit_int32(1))

/* TM_conversions::INT_M_MODE_Passive_Shunting/ */
#define INT_M_MODE_Passive_Shunting_TM_conversions (kcg_lit_int32(15))

/* TM_conversions::INT_M_MODE_Post_Trip/ */
#define INT_M_MODE_Post_Trip_TM_conversions (kcg_lit_int32(8))

/* TM_conversions::INT_M_MODE_Reversing/ */
#define INT_M_MODE_Reversing_TM_conversions (kcg_lit_int32(14))

/* TM_conversions::INT_M_MODE_Shunting/ */
#define INT_M_MODE_Shunting_TM_conversions (kcg_lit_int32(3))

/* TM_conversions::INT_M_MODE_Sleeping/ */
#define INT_M_MODE_Sleeping_TM_conversions (kcg_lit_int32(5))

/* TM_conversions::INT_M_MODE_Staff_Responsible/ */
#define INT_M_MODE_Staff_Responsible_TM_conversions (kcg_lit_int32(2))

/* TM_conversions::INT_M_MODE_Stand_By/ */
#define INT_M_MODE_Stand_By_TM_conversions (kcg_lit_int32(6))

/* TM_conversions::INT_M_MODE_Trip/ */
#define INT_M_MODE_Trip_TM_conversions (kcg_lit_int32(7))

/* TM_conversions::INT_M_MODE_Unfitted/ */
#define INT_M_MODE_Unfitted_TM_conversions (kcg_lit_int32(4))

/* TM_conversions::INT_M_MODE_System_Failure/ */
#define INT_M_MODE_System_Failure_TM_conversions (kcg_lit_int32(9))

/* TM_conversions::ENUM_M_MODE_Unfitted/ */
#define ENUM_M_MODE_Unfitted_TM_conversions M_MODE_Unfitted

/* TM_conversions::ENUM_M_MODE_Trip/ */
#define ENUM_M_MODE_Trip_TM_conversions M_MODE_Trip

/* TM_conversions::ENUM_M_MODE_System_Failure/ */
#define ENUM_M_MODE_System_Failure_TM_conversions M_MODE_System_Failure

/* TM_conversions::ENUM_M_MODE_Stand_By/ */
#define ENUM_M_MODE_Stand_By_TM_conversions M_MODE_Stand_By

/* TM_conversions::ENUM_M_MODE_Staff_Responsible/ */
#define ENUM_M_MODE_Staff_Responsible_TM_conversions M_MODE_Staff_Responsible

/* TM_conversions::ENUM_M_MODE_Sleeping/ */
#define ENUM_M_MODE_Sleeping_TM_conversions M_MODE_Sleeping

/* TM_conversions::ENUM_M_MODE_Shunting/ */
#define ENUM_M_MODE_Shunting_TM_conversions M_MODE_Shunting

/* TM_conversions::ENUM_M_MODE_Reversing/ */
#define ENUM_M_MODE_Reversing_TM_conversions M_MODE_Reversing

/* TM_conversions::ENUM_M_MODE_Post_Trip/ */
#define ENUM_M_MODE_Post_Trip_TM_conversions M_MODE_Post_Trip

/* TM_conversions::ENUM_M_MODE_Passive_Shunting/ */
#define ENUM_M_MODE_Passive_Shunting_TM_conversions M_MODE_No_Power

/* TM_conversions::ENUM_M_MODE_On_Sight/ */
#define ENUM_M_MODE_On_Sight_TM_conversions M_MODE_On_Sight

/* TM_conversions::ENUM_M_MODE_Non_Leading/ */
#define ENUM_M_MODE_Non_Leading_TM_conversions M_MODE_Non_Leading

/* TM_conversions::ENUM_M_MODE_National_System/ */
#define ENUM_M_MODE_National_System_TM_conversions M_MODE_National_System

/* TM_conversions::ENUM_M_MODE_Limited_Supervision/ */
#define ENUM_M_MODE_Limited_Supervision_TM_conversions                        \
  M_MODE_Limited_Supervision

/* TM_conversions::ENUM_M_MODE_Isolation/ */
#define ENUM_M_MODE_Isolation_TM_conversions M_MODE_Isolation

/* TM_conversions::ENUM_M_MODE_Full_Supervision/ */
#define ENUM_M_MODE_Full_Supervision_TM_conversions M_MODE_Full_Supervision

/* INT_connectionStatusRadioUnit_T_conn_no_connection/ */
#define _32_INT_connectionStatusRadioUnit_T_conn_no_connection                \
  (kcg_lit_int32(1))

/* INT_connectionStatusRadioUnit_T_conn_ConnectionUp/ */
#define _31_INT_connectionStatusRadioUnit_T_conn_ConnectionUp (kcg_lit_int32(2))

/* INT_connectionStatusRadioUnit_T_conn_SetupFailed/ */
#define _30_INT_connectionStatusRadioUnit_T_conn_SetupFailed (kcg_lit_int32(3))

/* INT_connectionStatusRadioUnit_T_conn_unknown/ */
#define INT_connectionStatusRadioUnit_T_conn_unknown (kcg_lit_int32(0))

/* ENUM_connectionStatusRadioUnit_T_conn_SetupFailed/ */
#define _29_ENUM_connectionStatusRadioUnit_T_conn_SetupFailed                 \
  conn_SetupFailed_API_RadioCommunication_Pkg

/* ENUM_connectionStatusRadioUnit_T_conn_ConnectionUp/ */
#define _28_ENUM_connectionStatusRadioUnit_T_conn_ConnectionUp                \
  conn_ConnectionUp_API_RadioCommunication_Pkg

/* ENUM_connectionStatusRadioUnit_T_conn_no_connection/ */
#define _27_ENUM_connectionStatusRadioUnit_T_conn_no_connection               \
  conn_no_connection_API_RadioCommunication_Pkg

/* ENUM_connectionStatusRadioUnit_T_conn_unknown/ */
#define ENUM_connectionStatusRadioUnit_T_conn_unknown                         \
  conn_unknown_API_RadioCommunication_Pkg

/* INT_M_SUPERVISION_STATUS_PIM/ */
#define INT_M_SUPERVISION_STATUS_PIM (kcg_lit_int32(1))

/* INT_M_SUPERVISION_STATUS_TSM/ */
#define INT_M_SUPERVISION_STATUS_TSM (kcg_lit_int32(2))

/* INT_M_SUPERVISION_STATUS_RSM/ */
#define INT_M_SUPERVISION_STATUS_RSM (kcg_lit_int32(3))

/* INT_M_SUPERVISION_STATUS_supervision_status_unknown/ */
#define INT_M_SUPERVISION_STATUS_supervision_status_unknown (kcg_lit_int32(4))

/* INT_M_SUPERVISION_STATUS_CSM/ */
#define INT_M_SUPERVISION_STATUS_CSM (kcg_lit_int32(0))

/* ENUM_M_SUPERVISION_STATUS_supervision_status_unknown/ */
#define ENUM_M_SUPERVISION_STATUS_supervision_status_unknown                  \
  supervision_status_unknown_DMI_Types_Pkg

/* ENUM_M_SUPERVISION_STATUS_RSM/ */
#define ENUM_M_SUPERVISION_STATUS_RSM RSM_DMI_Types_Pkg

/* ENUM_M_SUPERVISION_STATUS_TSM/ */
#define ENUM_M_SUPERVISION_STATUS_TSM TSM_DMI_Types_Pkg

/* ENUM_M_SUPERVISION_STATUS_PIM/ */
#define ENUM_M_SUPERVISION_STATUS_PIM PIM_DMI_Types_Pkg

/* ENUM_M_SUPERVISION_STATUS_CSM/ */
#define ENUM_M_SUPERVISION_STATUS_CSM CSM_DMI_Types_Pkg

/* INT_M_SupervisionDisplay_T_supDis_indication/ */
#define _26_INT_M_SupervisionDisplay_T_supDis_indication (kcg_lit_int32(1))

/* INT_M_SupervisionDisplay_T_supDis_overspeed/ */
#define _25_INT_M_SupervisionDisplay_T_supDis_overspeed (kcg_lit_int32(2))

/* INT_M_SupervisionDisplay_T_supDis_warning/ */
#define _24_INT_M_SupervisionDisplay_T_supDis_warning (kcg_lit_int32(3))

/* INT_M_SupervisionDisplay_T_supDis_intervention/ */
#define _23_INT_M_SupervisionDisplay_T_supDis_intervention (kcg_lit_int32(4))

/* INT_M_SupervisionDisplay_T_supDis_normal/ */
#define INT_M_SupervisionDisplay_T_supDis_normal (kcg_lit_int32(0))

/* ENUM_M_SupervisionDisplay_T_supDis_intervention/ */
#define _22_ENUM_M_SupervisionDisplay_T_supDis_intervention                   \
  supDis_intervention_DMI_Types_Pkg

/* ENUM_M_SupervisionDisplay_T_supDis_warning/ */
#define _21_ENUM_M_SupervisionDisplay_T_supDis_warning                        \
  supDis_warning_DMI_Types_Pkg

/* ENUM_M_SupervisionDisplay_T_supDis_overspeed/ */
#define _20_ENUM_M_SupervisionDisplay_T_supDis_overspeed                      \
  supDis_overspeed_DMI_Types_Pkg

/* ENUM_M_SupervisionDisplay_T_supDis_indication/ */
#define _19_ENUM_M_SupervisionDisplay_T_supDis_indication                     \
  supDis_indication_DMI_Types_Pkg

/* ENUM_M_SupervisionDisplay_T_supDis_normal/ */
#define ENUM_M_SupervisionDisplay_T_supDis_normal supDis_normal_DMI_Types_Pkg

/* TM_conversions::INT_M_LEVEL_Level_0/ */
#define INT_M_LEVEL_Level_0_TM_conversions (kcg_lit_int32(0))

/* TM_conversions::INT_M_LEVEL_Level_1/ */
#define INT_M_LEVEL_Level_1_TM_conversions (kcg_lit_int32(2))

/* TM_conversions::INT_M_LEVEL_Level_2/ */
#define INT_M_LEVEL_Level_2_TM_conversions (kcg_lit_int32(3))

/* TM_conversions::INT_M_LEVEL_Level_3/ */
#define INT_M_LEVEL_Level_3_TM_conversions (kcg_lit_int32(4))

/* TM_conversions::INT_M_LEVEL_Level_NTC/ */
#define INT_M_LEVEL_Level_NTC_TM_conversions (kcg_lit_int32(1))

/* TM_conversions::ENUM_M_LEVEL_Level_NTC/ */
#define ENUM_M_LEVEL_Level_NTC_TM_conversions                                 \
  M_LEVEL_Level_NTC_specified_by_NID_NTC

/* TM_conversions::ENUM_M_LEVEL_Level_3/ */
#define ENUM_M_LEVEL_Level_3_TM_conversions M_LEVEL_Level_3

/* TM_conversions::ENUM_M_LEVEL_Level_2/ */
#define ENUM_M_LEVEL_Level_2_TM_conversions M_LEVEL_Level_2

/* TM_conversions::ENUM_M_LEVEL_Level_1/ */
#define ENUM_M_LEVEL_Level_1_TM_conversions M_LEVEL_Level_1

/* TM_conversions::ENUM_M_LEVEL_Level_0/ */
#define ENUM_M_LEVEL_Level_0_TM_conversions M_LEVEL_Level_0

/* DATA::Packets::EVC_to_DMI::cDMI_Dynamic_int/ */
extern const DMI_Dynamic_int_array_T_DATA cDMI_Dynamic_int_DATA_Packets_EVC_to_DMI;

/* DATA::cDMI_Driver_Identifier_int_array_size/ */
#define cDMI_Driver_Identifier_int_array_size_DATA (kcg_lit_int32(11))

/* DATA::cDMI_Adhesion_Factor_Data_int_array_size/ */
#define cDMI_Adhesion_Factor_Data_int_array_size_DATA (kcg_lit_int32(3))

/* DATA::cDMI_Train_Data_int_array_size/ */
#define cDMI_Train_Data_int_array_size_DATA (kcg_lit_int32(9))

/* DATA::cDMI_Train_Running_Number_int_array_size/ */
#define cDMI_Train_Running_Number_int_array_size_DATA (kcg_lit_int32(3))

/* DATA::cDMI_Display_Control_int_array_size/ */
#define cDMI_Display_Control_int_array_size_DATA (kcg_lit_int32(3))

/* DATA::cDMI_System_Version_int_array_size/ */
#define cDMI_System_Version_int_array_size_DATA (kcg_lit_int32(3))

/* DATA::cDMI_Identifier_Request_int_array_size/ */
#define cDMI_Identifier_Request_int_array_size_DATA (kcg_lit_int32(261))

/* DATA::cDMI_EVC_Coded_Train_Data_int_array_size/ */
#define cDMI_EVC_Coded_Train_Data_int_array_size_DATA (kcg_lit_int32(9))

/* DATA::cDMI_Entry_Request_int_array_size/ */
#define cDMI_Entry_Request_int_array_size_DATA (kcg_lit_int32(3))

/* DATA::cDMI_Menu_Request_int_array_size/ */
#define cDMI_Menu_Request_int_array_size_DATA (kcg_lit_int32(3))

/* DATA::cDMI_Dynamic_int_array_size/ */
#define cDMI_Dynamic_int_array_size_DATA (kcg_lit_int32(24))

/* Messages::cEVC_DMI_int_array/ */
extern const EVC_to_DMI_Message_int_T_API_DMI_Pkg cEVC_DMI_int_array_Messages;

/* DMI_Types_Pkg::cFreeTestStatusElement/ */
extern const DMI_TXT_MSG_status_T_DMI_Types_Pkg cFreeTestStatusElement_DMI_Types_Pkg;

/* manage_TextMessages_Pkg::cText_Mode_TR/ */
extern const DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg cText_Mode_TR_manage_TextMessages_Pkg;

/* manage_TextMessages_Pkg::cText_Mode_UN/ */
extern const DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg cText_Mode_UN_manage_TextMessages_Pkg;

/* manage_TextMessages_Pkg::cText_Mode_SN/ */
extern const DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg cText_Mode_SN_manage_TextMessages_Pkg;

/* manage_TextMessages_Pkg::cText_Mode_LS/ */
extern const DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg cText_Mode_LS_manage_TextMessages_Pkg;

/* manage_TextMessages_Pkg::cText_Mode_SH/ */
extern const DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg cText_Mode_SH_manage_TextMessages_Pkg;

/* manage_TextMessages_Pkg::cText_Mode_OS/ */
extern const DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg cText_Mode_OS_manage_TextMessages_Pkg;

/* manage_TextMessages_Pkg::cText_Mode_SR/ */
extern const DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg cText_Mode_SR_manage_TextMessages_Pkg;

/* manage_TextMessages_Pkg::cText_Level_NTC/ */
extern const DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg cText_Level_NTC_manage_TextMessages_Pkg;

/* manage_TextMessages_Pkg::cText_Level_3/ */
extern const DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg cText_Level_3_manage_TextMessages_Pkg;

/* manage_TextMessages_Pkg::cText_Level_2/ */
extern const DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg cText_Level_2_manage_TextMessages_Pkg;

/* manage_TextMessages_Pkg::cText_Level_1/ */
extern const DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg cText_Level_1_manage_TextMessages_Pkg;

/* manage_TextMessages_Pkg::cText_Level_0/ */
extern const DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg cText_Level_0_manage_TextMessages_Pkg;

/* manage_DMI_Output_Pkg::cTextSpecial_BG/ */
extern const DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg cTextSpecial_BG_manage_DMI_Output_Pkg;

/* manage_DMI_Output_Pkg::cDefaultText/ */
extern const DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg cDefaultText_manage_DMI_Output_Pkg;

/* API_DMI_Pkg::cMessage_EVC_to_DMI_size/ */
#define cMessage_EVC_to_DMI_size_API_DMI_Pkg (kcg_lit_int32(999))

/* DMI_Types_Pkg::cDMI_TextMsgListSize/ */
#define cDMI_TextMsgListSize_DMI_Types_Pkg (kcg_lit_int32(31))

/* manage_DMI_Output_Pkg::cEVCIdentifierRequest/ */
extern const DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg cEVCIdentifierRequest_manage_DMI_Output_Pkg;

/* manage_DMI_Output_Pkg::cEmptyIdentifierRequest/ */
extern const DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg cEmptyIdentifierRequest_manage_DMI_Output_Pkg;

/* TrackAtlasTypes::MRSPMaxSections/ */
#define MRSPMaxSections_TrackAtlasTypes (kcg_lit_int32(110))

/* TrackAtlasTypes::GradientMaxSections/ */
#define GradientMaxSections_TrackAtlasTypes (kcg_lit_int32(50))

/* TrackAtlasTypes::DIM_GP/ */
#define DIM_GP_TrackAtlasTypes (kcg_lit_int32(50))

/* manage_DMI_Output_Pkg::cEmptyGradientProfileElement/ */
extern const DMI_gradientProfileElement_T_DMI_Types_Pkg cEmptyGradientProfileElement_manage_DMI_Output_Pkg;

/* manage_DMI_Output_Pkg::cEmptySpeedProfileElement/ */
extern const DMI_speedProfileElement_T_DMI_Types_Pkg cEmptySpeedProfileElement_manage_DMI_Output_Pkg;

/* manage_DMI_Output_Pkg::cNoTrackCondition/ */
extern const DMI_trackCondition_T_DMI_Types_Pkg cNoTrackCondition_manage_DMI_Output_Pkg;

/* manage_DMI_Output_Pkg::cEmptyLevelData/ */
extern const DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg cEmptyLevelData_manage_DMI_Output_Pkg;

/* manage_DMI_Output_Pkg::cEmptyVersion/ */
extern const DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg cEmptyVersion_manage_DMI_Output_Pkg;

/* manage_DMI_Output_Pkg::cInitBrakeCommand/ */
extern const Brake_command_T_TIU_Types_Pkg cInitBrakeCommand_manage_DMI_Output_Pkg;

/* manage_DMI_Output_Pkg::cIconRequestEB/ */
extern const DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg cIconRequestEB_manage_DMI_Output_Pkg;

/* manage_DMI_Output_Pkg::cIconClearEB/ */
extern const DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg cIconClearEB_manage_DMI_Output_Pkg;

/* manage_DMI_Output_Pkg::cEmptyIconRequest/ */
extern const DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg cEmptyIconRequest_manage_DMI_Output_Pkg;

/* manage_DMI_Output_Pkg::cMenuLevel/ */
extern const DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg cMenuLevel_manage_DMI_Output_Pkg;

/* manage_DMI_Output_Pkg::cMenuStart/ */
extern const DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg cMenuStart_manage_DMI_Output_Pkg;

/* manage_DMI_Output_Pkg::cMenuTrainData/ */
extern const DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg cMenuTrainData_manage_DMI_Output_Pkg;

/* manage_DMI_Output_Pkg::cNoMenu/ */
extern const DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg cNoMenu_manage_DMI_Output_Pkg;

/* DMI_Types_Pkg::cDMI_maxTrackCondProfile/ */
#define cDMI_maxTrackCondProfile_DMI_Types_Pkg (kcg_lit_int32(32))

/* DMI_Types_Pkg::cDMI_maxGradientProfile/ */
#define cDMI_maxGradientProfile_DMI_Types_Pkg (kcg_lit_int32(32))

/* DMI_Types_Pkg::cDMI_maxSpeedProfile/ */
#define cDMI_maxSpeedProfile_DMI_Types_Pkg (kcg_lit_int32(32))

/* manage_DMI_Output_Pkg::cSendInitRequest/ */
extern const DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg cSendInitRequest_manage_DMI_Output_Pkg;

/* manage_DMI_Output_Pkg::cEmptyInitRequest/ */
extern const DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg cEmptyInitRequest_manage_DMI_Output_Pkg;

/* manage_DMI_Output_Pkg::cOutputStatus/ */
extern const dmiOutputs_T_manage_DMI_Output_Pkg cOutputStatus_manage_DMI_Output_Pkg;

/* DMI_Types_Pkg::cDMI_charsInText/ */
#define cDMI_charsInText_DMI_Types_Pkg (kcg_lit_int32(255))

/* manage_DMI_Output_Pkg::ctimeInterval/ */
#define ctimeInterval_manage_DMI_Output_Pkg (kcg_lit_int32(30))

/* manage_DMI_Output_Pkg::cInitModeLevel/ */
extern const T_Mode_Level_Level_And_Mode_Types_Pkg cInitModeLevel_manage_DMI_Output_Pkg;

/* manage_DMI_Output_Pkg::cDefaultDynamic/ */
extern const DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg cDefaultDynamic_manage_DMI_Output_Pkg;

/* manage_DMI_Output_Pkg::cDefaultTrainData/ */
extern const DMI_Train_Data_T_DMI_Messages_Bothways_Pkg cDefaultTrainData_manage_DMI_Output_Pkg;

/* cEmptyBrakeCmd/ */
extern const Brake_command_T_TIU_Types_Pkg cEmptyBrakeCmd;

/* EVC_PermanentData_Pkg::cMoRC_ConfigData/ */
extern const morc_configData_T_RCM_Session_Types_Pkg cMoRC_ConfigData_EVC_PermanentData_Pkg;

/* Packet_TrainTypes_Pkg::cDigitsInTelephoneNumber/ */
#define cDigitsInTelephoneNumber_Packet_TrainTypes_Pkg (kcg_lit_int32(15))

/* Packet_TrainTypes_Pkg::cmaxNumberTelephoneNumbers/ */
#define cmaxNumberTelephoneNumbers_Packet_TrainTypes_Pkg (kcg_lit_int32(1))

/* EVC_PermanentData_Pkg::cMoRC_own_P3ng/ */
extern const P003_TM_TrainToTrack cMoRC_own_P3ng_EVC_PermanentData_Pkg;

/* TM_TrainToTrack::DIM_nid_radio_list/ */
#define DIM_nid_radio_list_TM_TrainToTrack (kcg_lit_int32(5))

/* EVC_PermanentData_Pkg::cP203_PermanentData/ */
extern const P203V1_OBU_T_TM_baseline2 cP203_PermanentData_EVC_PermanentData_Pkg;

/* TM::DIM_N_ITER/ */
#define DIM_N_ITER_TM (kcg_lit_int32(32))

/* EVC_PermanentData_Pkg::cP003_PermanentData/ */
extern const P003_permanent_data_T_TM_baseline2 cP003_PermanentData_EVC_PermanentData_Pkg;

/* EVC_PermanentData_Pkg::cP3NationalValuesUtrechtAmsterdam/ */
extern const P3_NationalValues_T_Packet_Types_Pkg cP3NationalValuesUtrechtAmsterdam_EVC_PermanentData_Pkg;

/* TrainPosition_Types_Pck::cQ_SCALE_10_m_resolution/ */
#define cQ_SCALE_10_m_resolution_TrainPosition_Types_Pck (kcg_lit_int32(1000))

/* TrainPosition_Types_Pck::cQ_SCALE_1_m_resolution/ */
#define cQ_SCALE_1_m_resolution_TrainPosition_Types_Pck (kcg_lit_int32(100))

/* TrainPosition_Types_Pck::cQ_SCALE_10_cm_resolution/ */
#define cQ_SCALE_10_cm_resolution_TrainPosition_Types_Pck (kcg_lit_int32(10))

/* InputManagement::cImmediateAck_Distance/ */
#define cImmediateAck_Distance_InputManagement (kcg_lit_int32(32767))

/* Level_And_Mode_Types_Pkg::M_Default_Transition/ */
extern const T_LevelTransition_Level_And_Mode_Types_Pkg M_Default_Transition_Level_And_Mode_Types_Pkg;

/* Level_And_Mode_Types_Pkg::M_Max_TransitionInPriorityTable/ */
#define M_Max_TransitionInPriorityTable_Level_And_Mode_Types_Pkg              \
  (kcg_lit_int32(7))

/* Level_And_Mode_Types_Pkg::M_Max_ModeProfile/ */
#define M_Max_ModeProfile_Level_And_Mode_Types_Pkg (kcg_lit_int32(3))

/* Packet_TrainTypes_Pkg::cMaxTractionIdentity/ */
#define cMaxTractionIdentity_Packet_TrainTypes_Pkg (kcg_lit_int32(4))

/* Packet_TrainTypes_Pkg::cMaxNationalSystem/ */
#define cMaxNationalSystem_Packet_TrainTypes_Pkg (kcg_lit_int32(5))

/* Level_And_Mode_Types_Pkg::C_Driver_Ack_Delay/ */
#define C_Driver_Ack_Delay_Level_And_Mode_Types_Pkg (kcg_lit_int32(5000))

/* Level_And_Mode_Types_Pkg::C_Cycle_Duration/ */
#define C_Cycle_Duration_Level_And_Mode_Types_Pkg (kcg_lit_int32(300))

/* cNoPacketsForML/ */
extern const T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg cNoPacketsForML;

/* Packet_Types_Pkg::cNIterMaxModeProfiles/ */
#define cNIterMaxModeProfiles_Packet_Types_Pkg (kcg_lit_int32(3))

/* Packet_Types_Pkg::cNIterMaxMA/ */
#define cNIterMaxMA_Packet_Types_Pkg (kcg_lit_int32(5))

/* Packet_Types_Pkg::cNIterMax/ */
#define cNIterMax_Packet_Types_Pkg (kcg_lit_int32(7))

/* cNoP1/ */
extern const PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg cNoP1;

/* cNoP0/ */
extern const PT0_PositionReport_T_Packet_TrainTypes_Pkg cNoP0;

/* cNoTDEvents/ */
extern const trainData_Events_T_trainData_Types_pkg cNoTDEvents;

/* cNo_Levels/ */
extern const DMI_LevelList_T_DMI_Types_Pkg cNo_Levels;

/* cNoPersistentData/ */
extern const ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg cNoPersistentData;

/* DMI_Types_Pkg::cDMI_maxLevels/ */
#define cDMI_maxLevels_DMI_Types_Pkg (kcg_lit_int32(32))

/* cMLInitialModesAndLevel/ */
extern const T_Mode_Level_Level_And_Mode_Types_Pkg cMLInitialModesAndLevel;

/* cEmptyTrainProperties/ */
extern const trainProperties_T_TrainPosition_Types_Pck cEmptyTrainProperties;

/* cEmptyPositionedBGs/ */
extern const positionedBGs_T_TrainPosition_Types_Pck cEmptyPositionedBGs;

/* TrainPosition_Types_Pck::cMaxNoOfStoredBGs/ */
#define cMaxNoOfStoredBGs_TrainPosition_Types_Pck                             \
  (kcg_lit_int32(1) * kcg_lit_int32(33) + kcg_lit_int32(8))

/* cNoSupervisingRBC/ */
extern const connection_ids_T_Handover_Pkg cNoSupervisingRBC;

/* cEmptySpeedForDMI/ */
extern const speedSupervisionForDMI_T_DMI_Types_Pkg cEmptySpeedForDMI;

/* cEmptyBrakeCommand/ */
extern const Brake_command_T_TIU_Types_Pkg cEmptyBrakeCommand;

/* cEmptyTrainPosition/ */
extern const trainPosition_T_TrainPosition_Types_Pck cEmptyTrainPosition;

/* cNoRadioCmd/ */
extern const radioManagementMessage_T_Common_Types_Pkg cNoRadioCmd;

/* cNoMsgErrors/ */
extern const MSG_Errors_T_Common_Types_Pkg cNoMsgErrors;

/* cNoPositioningErrors/ */
extern const positionErrors_T_TrainPosition_Types_Pck cNoPositioningErrors;

/* cNoMobileRegistrationContext/ */
extern const mobileRegistrationContext_T_RCM_Types_Pkg cNoMobileRegistrationContext;

/* cNoMobileConnectionContext/ */
extern const mobileConnectionContext_T_RCM_Types_Pkg cNoMobileConnectionContext;

/* cEmptyRadioNetworkIds/ */
extern const radioNetWorkIDs_T_MoRC_Pck cEmptyRadioNetworkIds;

/* cEmptyData_From_STM/ */
extern const T_Data_From_STM_Level_And_Mode_Types_Pkg cEmptyData_From_STM;

/* cEmtpyIsolationStatus/ */
extern const Isolation_Status_T_TIU_Types_Pkg cEmtpyIsolationStatus;

/* cEmptyPassedBG/ */
extern const passedBG_T_BG_Types_Pkg cEmptyPassedBG;

/* BG_Types_Pkg::cMaxNoOfLinkedBGs/ */
#define cMaxNoOfLinkedBGs_BG_Types_Pkg (kcg_lit_int32(33))

/* cOwnVersion/ */
#define cOwnVersion M_VERSION_Version_2_0_introduced_in_SRS_3_3_0

/* cEmptyTrainCommand/ */
extern const Type_I_train_commands_T_TIU_Types_Pkg cEmptyTrainCommand;

/* cEmptyBrakeInhibitionCommand/ */
extern const Brake_inhibition_command_T_TIU_Types_Pkg cEmptyBrakeInhibitionCommand;

/* cEmptyLocationBasedEvents/ */
extern const LocationBasedEvents_T_ProvidePositionReport_Pkg cEmptyLocationBasedEvents;

/* cEmptyDMIMA/ */
extern const movementAuthorityForDMI_T_DMI_Types_Pkg cEmptyDMIMA;

/* cEmptyDMIEVCcodedTrainData/ */
extern const DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg cEmptyDMIEVCcodedTrainData;

/* cEmptyDMIDisplayControl/ */
extern const DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg cEmptyDMIDisplayControl;

/* cEmptyDMIRadioNet/ */
extern const DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg cEmptyDMIRadioNet;

/* cEmptyDMIDriverIdentifier/ */
extern const _5_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg cEmptyDMIDriverIdentifier;

/* DMI_Messages_Bothways_Pkg::cDiverIdentifierLength/ */
#define cDiverIdentifierLength_DMI_Messages_Bothways_Pkg (kcg_lit_int32(9))

/* cEmptyDMITrainRunningNumber/ */
extern const DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg cEmptyDMITrainRunningNumber;

/* cEmptyDMIAdhesionFactorData/ */
extern const DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg cEmptyDMIAdhesionFactorData;

/* cEmptyChangeOfAllowedCurrentConsumption/ */
extern const Change_of_allowed_current_consumption_T_TIU_Types_Pkg cEmptyChangeOfAllowedCurrentConsumption;

/* cPassengerDoorControlInfo/ */
extern const Passenger_door_control_info_T_TIU_Types_Pkg cPassengerDoorControlInfo;

/* cEmptyChangeTractionSystem/ */
extern const Change_traction_system_T_TIU_Types_Pkg cEmptyChangeTractionSystem;

#endif /* _KCG_CONSTS_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** kcg_consts.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

