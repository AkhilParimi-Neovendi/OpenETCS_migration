/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _KCG_TYPES_H_
#define _KCG_TYPES_H_

#include "stddef.h"

#define KCG_MAPW_CPY

#include "./user_macros.h"

#ifndef kcg_char
#define kcg_char kcg_char
typedef char kcg_char;
#endif /* kcg_char */

#ifndef kcg_bool
#define kcg_bool kcg_bool
typedef unsigned char kcg_bool;
#endif /* kcg_bool */

#ifndef kcg_float32
#define kcg_float32 kcg_float32
typedef float kcg_float32;
#endif /* kcg_float32 */

#ifndef kcg_float64
#define kcg_float64 kcg_float64
typedef double kcg_float64;
#endif /* kcg_float64 */

#ifndef kcg_size
#define kcg_size kcg_size
typedef ptrdiff_t kcg_size;
#endif /* kcg_size */

#ifndef kcg_uint64
#define kcg_uint64 kcg_uint64
typedef unsigned long long kcg_uint64;
#endif /* kcg_uint64 */

#ifndef kcg_uint32
#define kcg_uint32 kcg_uint32
typedef unsigned long kcg_uint32;
#endif /* kcg_uint32 */

#ifndef kcg_uint16
#define kcg_uint16 kcg_uint16
typedef unsigned short kcg_uint16;
#endif /* kcg_uint16 */

#ifndef kcg_uint8
#define kcg_uint8 kcg_uint8
typedef unsigned char kcg_uint8;
#endif /* kcg_uint8 */

#ifndef kcg_int64
#define kcg_int64 kcg_int64
typedef signed long long kcg_int64;
#endif /* kcg_int64 */

#ifndef kcg_int32
#define kcg_int32 kcg_int32
typedef signed long kcg_int32;
#endif /* kcg_int32 */

#ifndef kcg_int16
#define kcg_int16 kcg_int16
typedef signed short kcg_int16;
#endif /* kcg_int16 */

#ifndef kcg_int8
#define kcg_int8 kcg_int8
typedef signed char kcg_int8;
#endif /* kcg_int8 */

#ifndef kcg_lit_float32
#define kcg_lit_float32(kcg_C1) ((kcg_float32) (kcg_C1))
#endif /* kcg_lit_float32 */

#ifndef kcg_lit_float64
#define kcg_lit_float64(kcg_C1) ((kcg_float64) (kcg_C1))
#endif /* kcg_lit_float64 */

#ifndef kcg_lit_size
#define kcg_lit_size(kcg_C1) ((kcg_size) (kcg_C1))
#endif /* kcg_lit_size */

#ifndef kcg_lit_uint64
#define kcg_lit_uint64(kcg_C1) ((kcg_uint64) (kcg_C1))
#endif /* kcg_lit_uint64 */

#ifndef kcg_lit_uint32
#define kcg_lit_uint32(kcg_C1) ((kcg_uint32) (kcg_C1))
#endif /* kcg_lit_uint32 */

#ifndef kcg_lit_uint16
#define kcg_lit_uint16(kcg_C1) ((kcg_uint16) (kcg_C1))
#endif /* kcg_lit_uint16 */

#ifndef kcg_lit_uint8
#define kcg_lit_uint8(kcg_C1) ((kcg_uint8) (kcg_C1))
#endif /* kcg_lit_uint8 */

#ifndef kcg_lit_int64
#define kcg_lit_int64(kcg_C1) ((kcg_int64) (kcg_C1))
#endif /* kcg_lit_int64 */

#ifndef kcg_lit_int32
#define kcg_lit_int32(kcg_C1) ((kcg_int32) (kcg_C1))
#endif /* kcg_lit_int32 */

#ifndef kcg_lit_int16
#define kcg_lit_int16(kcg_C1) ((kcg_int16) (kcg_C1))
#endif /* kcg_lit_int16 */

#ifndef kcg_lit_int8
#define kcg_lit_int8(kcg_C1) ((kcg_int8) (kcg_C1))
#endif /* kcg_lit_int8 */

#ifndef kcg_false
#define kcg_false ((kcg_bool) 0)
#endif /* kcg_false */

#ifndef kcg_true
#define kcg_true ((kcg_bool) 1)
#endif /* kcg_true */

#ifndef kcg_lsl_uint64
#define kcg_lsl_uint64(kcg_C1, kcg_C2)                                        \
  ((kcg_uint64) ((kcg_C1) << (kcg_C2)) & 0xffffffffffffffff)
#endif /* kcg_lsl_uint64 */

#ifndef kcg_lsl_uint32
#define kcg_lsl_uint32(kcg_C1, kcg_C2)                                        \
  ((kcg_uint32) ((kcg_C1) << (kcg_C2)) & 0xffffffff)
#endif /* kcg_lsl_uint32 */

#ifndef kcg_lsl_uint16
#define kcg_lsl_uint16(kcg_C1, kcg_C2)                                        \
  ((kcg_uint16) ((kcg_C1) << (kcg_C2)) & 0xffff)
#endif /* kcg_lsl_uint16 */

#ifndef kcg_lsl_uint8
#define kcg_lsl_uint8(kcg_C1, kcg_C2)                                         \
  ((kcg_uint8) ((kcg_C1) << (kcg_C2)) & 0xff)
#endif /* kcg_lsl_uint8 */

#ifndef kcg_lnot_uint64
#define kcg_lnot_uint64(kcg_C1) ((kcg_C1) ^ 0xffffffffffffffff)
#endif /* kcg_lnot_uint64 */

#ifndef kcg_lnot_uint32
#define kcg_lnot_uint32(kcg_C1) ((kcg_C1) ^ 0xffffffff)
#endif /* kcg_lnot_uint32 */

#ifndef kcg_lnot_uint16
#define kcg_lnot_uint16(kcg_C1) ((kcg_C1) ^ 0xffff)
#endif /* kcg_lnot_uint16 */

#ifndef kcg_lnot_uint8
#define kcg_lnot_uint8(kcg_C1) ((kcg_C1) ^ 0xff)
#endif /* kcg_lnot_uint8 */

#ifndef kcg_assign
#include "kcg_assign.h"
#endif /* kcg_assign */

#ifndef kcg_assign_struct
#define kcg_assign_struct kcg_assign
#endif /* kcg_assign_struct */

#ifndef kcg_assign_array
#define kcg_assign_array kcg_assign
#endif /* kcg_assign_array */

/* TA_MA_new::ActionType/ */
typedef enum kcg_tag_ActionType_TA_MA_new {
  replace_TA_MA_new,
  hold_TA_MA_new,
  delete_TA_MA_new
} ActionType_TA_MA_new;
/* MoRC_Pck::mobileHWConnectionStatus_Type/ */
typedef enum kcg_tag_mobileHWConnectionStatus_Type_MoRC_Pck {
  mhwc_notRegistered_MoRC_Pck,
  mhwc_registered_MoRC_Pck,
  mhwc_connecting_MoRC_Pck,
  mhwc_connected_MoRC_Pck,
  mhwc_registering_MoRC_Pck
} mobileHWConnectionStatus_Type_MoRC_Pck;
/* Q_LGTLOC/ */
typedef enum kcg_tag_Q_LGTLOC {
  Q_LGTLOC_Min_safe_rear_end,
  Q_LGTLOC_Max_safe_front_end
} Q_LGTLOC;
/* M_LOC/ */
typedef enum kcg_tag_M_LOC {
  M_LOC_Now,
  M_LOC_Every_LRBG_compliant_balise_group,
  M_LOC_Do_not_send_position_report_on_passage_of_LRBG_compliant_balise_group
} M_LOC;
/* Q_EMERGENCYSTOP/ */
typedef enum kcg_tag_Q_EMERGENCYSTOP {
  Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA,
  _91_Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_no_update_of_EOA,
  Q_EMERGENCYSTOP_Unconditional_Emergency_Stop_accepted,
  Q_EMERGENCYSTOP_Emergency_stop
} Q_EMERGENCYSTOP;
/* Q_MARQSTREASON/ */
typedef enum kcg_tag_Q_MARQSTREASON {
  Q_MARQSTREASON_Start_selected_by_driver,
  Q_MARQSTREASON_Time_before_reaching_preindication_location_for_the_EOA_or_LOA_reached,
  Q_MARQSTREASON_Time_before_a_section_timer_or_LOA_speed_timer_expires_reached,
  Q_MARQSTREASON_Track_description_deleted,
  Q_MARQSTREASON_TAF_up_to_level_2_or_3_transition_location
} Q_MARQSTREASON;
/* M_ERROR/ */
typedef enum kcg_tag_M_ERROR {
  M_ERROR_Balise_group_linking_consistency_error,
  M_ERROR_Linked_balise_group_message_consistency_erro,
  M_ERROR_Unlinked_balise_group_message_consistency_error,
  M_ERROR_Radio_message_consistency_error,
  M_ERROR_Radio_sequence_error,
  M_ERROR_Radio_safe_radio_connection_error,
  M_ERROR_Safety_critical_failure,
  M_ERROR_Double_linking_error,
  M_ERROR_Double_repositioning_error
} M_ERROR;
/* Handover_Pkg::abilityToHandleCommunicationSessions/ */
typedef enum kcg_tag_abilityToHandleCommunicationSessions_Handover_Pkg {
  isAbleToManageOneSession_Handover_Pkg,
  isAbleToManageTwoSessions_Handover_Pkg
} abilityToHandleCommunicationSessions_Handover_Pkg;
/* DataDictionary_Pkg::ModeDecisionTableActionKind/ */
typedef enum kcg_tag_ModeDecisionTableActionKind_DataDictionary_Pkg {
  MD_Invalid_DataDictionary_Pkg,
  MD_Accept_DataDictionary_Pkg,
  MD_Reject_DataDictionary_Pkg,
  MD_NotRelevant_DataDictionary_Pkg,
  MD_01IfFollowingExitTRMode_DataDictionary_Pkg,
  MD_02IfCabActive_DataDictionary_Pkg,
  MD_03StoreRBCIDAndPhone_DataDictionary_Pkg,
  MD_04IfValidTrainDataStored_DataDictionary_Pkg,
  MD_05OnlyLevelTransitionAnnouncements_DataDictionary_Pkg,
  MD_06RejectIfOverrideActive_DataDictionary_Pkg,
  MD_07AcceptImmediateAndConditionalLevelTransitionOrder_DataDictionary_Pkg,
  MD_08NullDistanceRBCTransition_DataDictionary_Pkg,
  MD_09MaxSafeFrontWithinSupervision_DataDictionary_Pkg,
  MD_0204Accept_DataDictionary_Pkg,
  MD_0105Accept_DataDictionary_Pkg
} ModeDecisionTableActionKind_DataDictionary_Pkg;
/* DataDictionary_Pkg::LevelDecisionTableActionKind/ */
typedef enum kcg_tag_LevelDecisionTableActionKind_DataDictionary_Pkg {
  LD_Invalid_DataDictionary_Pkg,
  LD_Accept_DataDictionary_Pkg,
  LD_Reject_DataDictionary_Pkg,
  LD_NotRelevant_DataDictionary_Pkg,
  LD_01StoreIfPendingL1Transition_DataDictionary_Pkg,
  LD_02StoreIfPendingL2L3Transition_DataDictionary_Pkg,
  LD_03RejectIfPendingAckOfTrainData_DataDictionary_Pkg,
  LD_04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength_DataDictionary_Pkg,
  LD_05RejectIfEmergencyBrakeActive_DataDictionary_Pkg,
  LD_06StoreIfPendingNTCTransition_DataDictionary_Pkg,
  LD_07RejectIfNoPendingNTCTransition_DataDictionary_Pkg,
  LD_08InhibitionOfRevocableTSR_DataDictionary_Pkg,
  LD_09RejectIfNoL2L3TransitionStored_DataDictionary_Pkg,
  LD_10ReferredLRBGWithDifferentPreviousLRBG_DataDictionary_Pkg,
  LD_11LevelTransitionOrderInSameMessage_DataDictionary_Pkg,
  LD_12RejectIfSameMessageWithDriverAck_DataDictionary_Pkg,
  LD_13RejectIfNotTogetherWithImmediateLevelTransitionOrder_DataDictionary_Pkg,
  LD_0102StoreIfPendingLevelTransition_DataDictionary_Pkg,
  LD_030405Reject_DataDictionary_Pkg
} LevelDecisionTableActionKind_DataDictionary_Pkg;
/* M_DUP/ */
typedef enum kcg_tag_M_DUP {
  M_DUP_No_duplicates,
  _94_M_DUP_This_balise_is_a_duplicate_of_the_next_balise,
  M_DUP_This_balise_is_a_duplicate_of_the_previous_balise
} M_DUP;
/* N_PIG/ */
typedef enum kcg_tag_N_PIG {
  N_PIG_I_am_the_1st,
  N_PIG_I_am_the_2nd,
  N_PIG_I_am_the_3rd,
  N_PIG_I_am_the_4th,
  N_PIG_I_am_the_5th,
  N_PIG_I_am_the_6th,
  N_PIG_I_am_the_7th,
  N_PIG_I_am_the_8th
} N_PIG;
/* DMI_Types_Pkg::DMI_StatusSet_T/ */
typedef enum kcg_tag_DMI_StatusSet_T_DMI_Types_Pkg {
  Running_state_DMI_Types_Pkg,
  Starting_state_DMI_Types_Pkg,
  Failure_state_DMI_Types_Pkg,
  Running_not_active_state_DMI_Types_Pkg,
  Train_Speed_Overflow_DMI_Types_Pkg,
  Invalid_track_condition_DMI_Types_Pkg,
  Invalid_predefined_text_message_DMI_Types_Pkg,
  Invalid_text_message_DMI_Types_Pkg,
  HW_warning_temp_reached_DMI_Types_Pkg,
  TFT_OFF_temp_reached_DMI_Types_Pkg,
  Device_OFF_temp_reached_DMI_Types_Pkg,
  Over_temperature_DMI_Types_Pkg,
  Backlight_on_off_DMI_Types_Pkg,
  FAN_blocked_DMI_Types_Pkg,
  Power_supply_key_switch_off_DMI_Types_Pkg,
  Watchdog_not_running_DMI_Types_Pkg
} DMI_StatusSet_T_DMI_Types_Pkg;
/* TargetManagement_types::TargetType_T/ */
typedef enum kcg_tag_TargetType_T_TargetManagement_types {
  EoA_TargetManagement_types,
  SvL_TargetManagement_types,
  MRSP_TargetManagement_types,
  invalid_TargetManagement_types,
  LoA_TargetManagement_types
} TargetType_T_TargetManagement_types;
/* SDM_Types_Pkg::SDM_Types_T/ */
typedef enum kcg_tag_SDM_Types_T_SDM_Types_Pkg {
  CSM_SDM_Types_Pkg,
  TSM_SDM_Types_Pkg,
  RSM_SDM_Types_Pkg,
  No_SDM_Type_SDM_Types_Pkg
} SDM_Types_T_SDM_Types_Pkg;
/* SDM_Types_Pkg::SupervisionStatus_T/ */
typedef enum kcg_tag_SupervisionStatus_T_SDM_Types_Pkg {
  Normal_Supervision_SDM_Types_Pkg,
  Indication_Supervision_SDM_Types_Pkg,
  Overspeed_Supervision_SDM_Types_Pkg,
  Warning_Supervision_SDM_Types_Pkg,
  Intervention_Supervision_SDM_Types_Pkg,
  Undefined_Supervision_SDM_Types_Pkg
} SupervisionStatus_T_SDM_Types_Pkg;
/* TrackAtlasTypes::MA_Level_t/ */
typedef enum kcg_tag_MA_Level_t_TrackAtlasTypes {
  MA_L1_TrackAtlasTypes,
  MA_L23_TrackAtlasTypes
} MA_Level_t_TrackAtlasTypes;
/* RCM_Session_Types_Pkg::safeRadioConnnectionIndicator_T/ */
typedef enum kcg_tag_safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg {
  srci_noConnection_RCM_Session_Types_Pkg,
  srci_connectionLost_setupFailed_RCM_Session_Types_Pkg,
  srci_connectionUp_RCM_Session_Types_Pkg
} safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg;
/* RCM_Types_Pkg::mobileRegistrationAction_T/ */
typedef enum kcg_tag_mobileRegistrationAction_T_RCM_Types_Pkg {
  mra_nop_RCM_Types_Pkg,
  mra_register_RCM_Types_Pkg,
  mra_unregister_RCM_Types_Pkg
} mobileRegistrationAction_T_RCM_Types_Pkg;
/* RCM_Types_Pkg::mobileConnetionAction_T/ */
typedef enum kcg_tag_mobileConnetionAction_T_RCM_Types_Pkg {
  mca_nop_RCM_Types_Pkg,
  mca_connect_RCM_Types_Pkg,
  mca_disconnect_RCM_Types_Pkg,
  mca_expectRadioHole_RCM_Types_Pkg,
  mca_unexpectRadioHole_RCM_Types_Pkg
} mobileConnetionAction_T_RCM_Types_Pkg;
/* API_RadioCommunication_Pkg::cmdRadioUnit_T/ */
typedef enum kcg_tag_cmdRadioUnit_T_API_RadioCommunication_Pkg {
  cmdr_not_relevant_API_RadioCommunication_Pkg,
  cmdr_connection_request_API_RadioCommunication_Pkg,
  cmdr_disconnection_request_API_RadioCommunication_Pkg,
  cmdr_reset_connection_API_RadioCommunication_Pkg,
  cmdr_networkUnregister_API_RadioCommunication_Pkg,
  cmdr_networkRegister_API_RadioCommunication_Pkg
} cmdRadioUnit_T_API_RadioCommunication_Pkg;
/* DMI_Types_Pkg::DMI_Request_T/ */
typedef enum kcg_tag_DMI_Request_T_DMI_Types_Pkg {
  Start_of_mission_DMI_Types_Pkg,
  Shunting_entry_DMI_Types_Pkg,
  Shunting_exit_DMI_Types_Pkg,
  Non_leading_DMI_Types_Pkg,
  Non_leading_exit_DMI_Types_Pkg,
  Maintain_shunting_DMI_Types_Pkg,
  Level_entry_request_DMI_Types_Pkg,
  Override_EOA_DMI_Types_Pkg,
  Override_route_unsuitability_DMI_Types_Pkg,
  Request_for_radio_network_entry_DMI_Types_Pkg,
  Request_for_train_data_DMI_Types_Pkg,
  Request_for_Adhesion_factor_data_DMI_Types_Pkg,
  Request_for_SR_data_DMI_Types_Pkg,
  Request_for_system_version_DMI_Types_Pkg,
  Request_for_switching_train_data_entry_DMI_Types_Pkg,
  Request_for_train_data_view_DMI_Types_Pkg,
  Request_to_show_geographical_position_DMI_Types_Pkg,
  Language_changed_DMI_Types_Pkg,
  Train_data_entry_aborted_DMI_Types_Pkg,
  Train_running_number_entry_aborted_DMI_Types_Pkg,
  SR_data_entry_aborted_DMI_Types_Pkg,
  Radio_network_entry_aborted_DMI_Types_Pkg,
  Request_to_hide_geographical_information_DMI_Types_Pkg,
  Request_to_show_supervision_data_DMI_Types_Pkg,
  Request_to_hide_supervision_data_DMI_Types_Pkg,
  Scroll_text_up_DMI_Types_Pkg,
  Scroll_text_down_DMI_Types_Pkg,
  Request_to_contact_last_known_RBC_DMI_Types_Pkg,
  Request_to_use_short_number_DMI_Types_Pkg,
  Request_isolation_DMI_Types_Pkg,
  Track_Ahead_Free_is_validated_DMI_Types_Pkg,
  The_Train_Integrity_request_DMI_Types_Pkg,
  Set_VBC_request_DMI_Types_Pkg,
  Remove_VBC_request_DMI_Types_Pkg,
  Show_tunnel_stopping_information_DMI_Types_Pkg,
  Hide_tunnel_stopping_information_DMI_Types_Pkg,
  NTC_data_entry_request_DMI_Types_Pkg,
  End_of_NTC_data_entry_DMI_Types_Pkg
} DMI_Request_T_DMI_Types_Pkg;
/* DMI_Types_Pkg::DMI_context_TXT_MSG_T/ */
typedef enum kcg_tag_DMI_context_TXT_MSG_T_DMI_Types_Pkg {
  con_undefined_DMI_Types_Pkg,
  con_levelMgmt_DMI_Types_Pkg,
  con_modeChange_DMI_Types_Pkg,
  con_trackRequest_DMI_Types_Pkg
} DMI_context_TXT_MSG_T_DMI_Types_Pkg;
/* Q_TEXTREPORT/ */
typedef enum kcg_tag_Q_TEXTREPORT {
  Q_TEXTREPORT_No_driver_acknowledgement_report_required,
  Q_TEXTREPORT_Driver_acknowledgement_report_required
} Q_TEXTREPORT;
/* DMI_Types_Pkg::Area_group_T/ */
typedef enum kcg_tag_Area_group_T_DMI_Types_Pkg {
  A_DMI_Types_Pkg,
  B_DMI_Types_Pkg,
  C_DMI_Types_Pkg,
  D_DMI_Types_Pkg,
  E_DMI_Types_Pkg,
  F_DMI_Types_Pkg,
  G_DMI_Types_Pkg,
  H_DMI_Types_Pkg
} Area_group_T_DMI_Types_Pkg;
/* DMI_Types_Pkg::Icon_group_T/ */
typedef enum kcg_tag_Icon_group_T_DMI_Types_Pkg {
  level_symbol_DMI_Types_Pkg,
  mode_symbols_DMI_Types_Pkg,
  status_symbols_DMI_Types_Pkg,
  order_an_announcements_symbols_DMI_Types_Pkg,
  planning_information_symbols_DMI_Types_Pkg,
  navigation_symbols_DMI_Types_Pkg,
  settings_symbols_DMI_Types_Pkg
} Icon_group_T_DMI_Types_Pkg;
/* DMI_Types_Pkg::Icon_control_flag_T/ */
typedef enum kcg_tag_Icon_control_flag_T_DMI_Types_Pkg {
  show_icon_in_area_DMI_Types_Pkg,
  clear_area_DMI_Types_Pkg,
  show_icon_flashing_in_area_DMI_Types_Pkg,
  show_icon_with_yellow_flashing_frame_in_area_DMI_Types_Pkg
} Icon_control_flag_T_DMI_Types_Pkg;
/* M_TRACKCOND/ */
typedef enum kcg_tag_M_TRACKCOND {
  M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted,
  M_TRACKCOND_Tunnel_stopping_area_Initial_state_is_no_tunnel_stopping_area,
  M_TRACKCOND_Sound_horn_Initial_state_is_is_no_request_for_sound_horn,
  M_TRACKCOND_Powerless_section_Lower_pantograph_Initial_state_is_not_powerless_section,
  M_TRACKCOND_Radio_hole_stop_supervising_T_NVCONTACT_Initial_state_is_supervise_T_NVCONTACT,
  M_TRACKCOND_Air_tightness_Initial_state_is_no_request_for_air_tightness,
  M_TRACKCOND_Switch_off_regenerative_brake_Initial_state_is_regenerative_brake_on,
  _63_M_TRACKCOND_Switch_off_eddy_current_brake_for_service_brake_Initial_state_is_eddy_current_brake_for_service_brake_on,
  M_TRACKCOND_Switch_off_magnetic_shoe_brake_Initial_state_is_magnetic_shoe_brake_on,
  M_TRACKCOND_Powerless_section_switch_off_the_main_power_switch_Initial_state_is_not_powerless_section,
  M_TRACKCOND_Switch_off_eddy_current_brake_for_emergency_brake_Initial_state_is_eddy_current_brake_for_emergency_brake_on
} M_TRACKCOND;
/* DMI_Types_Pkg::DMI_Q_TEXT/ */
typedef enum kcg_tag_DMI_Q_TEXT_DMI_Types_Pkg {
  balise_read_error_DMI_Types_Pkg,
  communication_error_DMI_Types_Pkg,
  entering_FS_DMI_Types_Pkg,
  entering_OS_DMI_Types_Pkg,
  no_track_condition_will_be_received_DMI_Types_Pkg,
  runaway_movement_DMI_Types_Pkg,
  SH_refused_DMI_Types_Pkg,
  trackside_not_compatible_DMI_Types_Pkg,
  train_data_changed_DMI_Types_Pkg,
  train_is_rejected_DMI_Types_Pkg,
  unauthorized_passing_of_EOA_LOA_DMI_Types_Pkg,
  no_MA_received_at_level_transition_DMI_Types_Pkg,
  SR_distance_exceeded_DMI_Types_Pkg,
  SH_stop_order_DMI_Types_Pkg,
  SR_stop_order_DMI_Types_Pkg,
  emergency_stop_DMI_Types_Pkg,
  trackside_malfunction_DMI_Types_Pkg,
  SH_request_failed_DMI_Types_Pkg,
  RV_distance_esceeded_DMI_Types_Pkg,
  no_track_description_DMI_Types_Pkg,
  STM_brake_Deman_DMI_Types_Pkg,
  route_unsuitable_axle_load_category_DMI_Types_Pkg,
  route_unsuitable_loading_gauge_DMI_Types_Pkg,
  route_unsuitable_traction_system_DMI_Types_Pkg,
  radio_network_registration_failed_DMI_Types_Pkg,
  level_crossing_not_protected_DMI_Types_Pkg,
  acknowledgment_DMI_Types_Pkg
} DMI_Q_TEXT_DMI_Types_Pkg;
/* Q_TEXTCONFIRM/ */
typedef enum kcg_tag_Q_TEXTCONFIRM {
  Q_TEXTCONFIRM_No_confirmation_required,
  Q_TEXTCONFIRM_Confirmation_required,
  _58_Q_TEXTCONFIRM_Confirmation_required_command_application_of_the_service_brake_when_display_end_condition_is_fulfilled_unless_the_text_has_already_been_acknowledged_by_the_driver,
  _56_Q_TEXTCONFIRM_Confirmation_required_command_application_of_the_emergency_brake_when_display_end_condition_is_fulfilled_unless_the_text_has_already_been_acknowledged_by_the_driver
} Q_TEXTCONFIRM;
/* Q_TEXTCLASS/ */
typedef enum kcg_tag_Q_TEXTCLASS {
  Q_TEXTCLASS_Auxiliary_Information,
  Q_TEXTCLASS_Important_Information
} Q_TEXTCLASS;
/* DMI_Types_Pkg::DMI_List_Entry_Request_T/ */
typedef enum kcg_tag_DMI_List_Entry_Request_T_DMI_Types_Pkg {
  Enter_revalidate_driver_identifier_DMI_Types_Pkg,
  Enter_revalidate_train_running_number_DMI_Types_Pkg,
  Enter_revalidate_ETCS_level_DMI_Types_Pkg,
  Enter_RBC_contact_menu_DMI_Types_Pkg,
  Validate_train_data_DMI_Types_Pkg,
  Enter_NTC_data_DMI_Types_Pkg,
  Spare_DMI_Types_Pkg,
  Enable_the_track_ahead_free_by_the_driver_DMI_Types_Pkg,
  Disable_the_Track_Ahead_free_page_DMI_Types_Pkg,
  Show_main_window_DMI_Types_Pkg,
  Hide_main_window_DMI_Types_Pkg,
  Hide_adhesion_factor_entry_window_DMI_Types_Pkg,
  Hide_staff_responsible_entry_window_DMI_Types_Pkg,
  Show_Set_VBC_validation_window_DMI_Types_Pkg,
  Show_Remove_VBC_validation_window_DMI_Types_Pkg
} DMI_List_Entry_Request_T_DMI_Types_Pkg;
/* RCM_Session_Types_Pkg::sessionPhase_T/ */
typedef enum kcg_tag_sessionPhase_T_RCM_Session_Types_Pkg {
  sp_terminated_RCM_Session_Types_Pkg,
  sp_establishing_RCM_Session_Types_Pkg,
  sp_maintaining_RCM_Session_Types_Pkg,
  sp_terminating_RCM_Session_Types_Pkg
} sessionPhase_T_RCM_Session_Types_Pkg;
/* DMI_Types_Pkg::DMI_Cabin_Identifier_T/ */
typedef enum kcg_tag_DMI_Cabin_Identifier_T_DMI_Types_Pkg {
  cabin_A_DMI_Types_Pkg,
  cabin_B_DMI_Types_Pkg
} DMI_Cabin_Identifier_T_DMI_Types_Pkg;
/* DMI_Types_Pkg::DMI_DMI_Identifier_T/ */
typedef enum kcg_tag_DMI_DMI_Identifier_T_DMI_Types_Pkg {
  DMI_1_DMI_Types_Pkg,
  DMI_2_DMI_Types_Pkg
} DMI_DMI_Identifier_T_DMI_Types_Pkg;
/* API_RadioCommunication_Pkg::connectionStatusRadioUnit_T/ */
typedef enum kcg_tag_connectionStatusRadioUnit_T_API_RadioCommunication_Pkg {
  conn_unknown_API_RadioCommunication_Pkg,
  conn_no_connection_API_RadioCommunication_Pkg,
  conn_ConnectionUp_API_RadioCommunication_Pkg,
  conn_SetupFailed_API_RadioCommunication_Pkg
} connectionStatusRadioUnit_T_API_RadioCommunication_Pkg;
/* L_NVKRINT/ */
typedef enum kcg_tag_L_NVKRINT {
  L_NVKRINT_0m,
  L_NVKRINT_25m,
  L_NVKRINT_50m,
  L_NVKRINT_75m,
  L_NVKRINT_100m,
  L_NVKRINT_150m,
  L_NVKRINT_200m,
  L_NVKRINT_300m,
  L_NVKRINT_400m,
  L_NVKRINT_500m,
  L_NVKRINT_600m,
  L_NVKRINT_700m,
  L_NVKRINT_800m,
  L_NVKRINT_900m,
  L_NVKRINT_1000m,
  L_NVKRINT_1100m,
  L_NVKRINT_1200m,
  L_NVKRINT_1300m,
  L_NVKRINT_1400m,
  L_NVKRINT_1500m,
  L_NVKRINT_1600m,
  L_NVKRINT_1700m,
  L_NVKRINT_1800m,
  L_NVKRINT_1900m,
  L_NVKRINT_2000m,
  L_NVKRINT_2100m,
  L_NVKRINT_2200m,
  L_NVKRINT_2300m,
  L_NVKRINT_2400m,
  L_NVKRINT_2500m,
  L_NVKRINT_2600m,
  L_NVKRINT_2700m
} L_NVKRINT;
/* Q_NVKVINTSET/ */
typedef enum kcg_tag_Q_NVKVINTSET {
  Q_NVKVINTSET_Freight_trains,
  Q_NVKVINTSET_Conventional_passenger_trains
} Q_NVKVINTSET;
/* Q_NVKINT/ */
typedef enum kcg_tag_Q_NVKINT {
  Q_NVKINT_No_integrated_correction_factors_follow,
  Q_NVKINT_Integrated_correction_factors_follow
} Q_NVKINT;
/* M_NVEBCL/ */
typedef enum kcg_tag_M_NVEBCL {
  M_NVEBCL_Confidence_level_50,
  M_NVEBCL_Confidence_level_90,
  M_NVEBCL_Confidence_level_99,
  M_NVEBCL_Confidence_level_99_9,
  _107_M_NVEBCL_Confidence_level_99_99,
  _108_M_NVEBCL_Confidence_level_99_999,
  _109_M_NVEBCL_Confidence_level_99_9999,
  _110_M_NVEBCL_Confidence_level_99_99999,
  _111_M_NVEBCL_Confidence_level_99_999999,
  M_NVEBCL_Confidence_level_99_9999999
} M_NVEBCL;
/* Q_NVDRIVER_ADHES/ */
typedef enum kcg_tag_Q_NVDRIVER_ADHES {
  Q_NVDRIVER_ADHES_Not_allowed,
  Q_NVDRIVER_ADHES_Allowed
} Q_NVDRIVER_ADHES;
/* M_NVDERUN/ */
typedef enum kcg_tag_M_NVDERUN { M_NVDERUN_No, M_NVDERUN_Yes } M_NVDERUN;
/* M_NVCONTACT/ */
typedef enum kcg_tag_M_NVCONTACT {
  M_NVCONTACT_Train_trip,
  M_NVCONTACT_Apply_service_brake,
  M_NVCONTACT_No_Reaction
} M_NVCONTACT;
/* Q_NVINHSMICPERM/ */
typedef enum kcg_tag_Q_NVINHSMICPERM {
  Q_NVINHSMICPERM_No,
  Q_NVINHSMICPERM_Yes
} Q_NVINHSMICPERM;
/* Q_NVSBFBPERM/ */
typedef enum kcg_tag_Q_NVSBFBPERM {
  Q_NVSBFBPERM_No,
  Q_NVSBFBPERM_Yes
} Q_NVSBFBPERM;
/* Q_NVGUIPERM/ */
typedef enum kcg_tag_Q_NVGUIPERM {
  Q_NVGUIPERM_No,
  Q_NVGUIPERM_Yes
} Q_NVGUIPERM;
/* Q_NVSBTSMPERM/ */
typedef enum kcg_tag_Q_NVSBTSMPERM {
  Q_NVSBTSMPERM_No,
  Q_NVSBTSMPERM_Yes
} Q_NVSBTSMPERM;
/* Q_NVEMRRLS/ */
typedef enum kcg_tag_Q_NVEMRRLS {
  Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill,
  _89_Q_NVEMRRLS_Revoke_emergency_brake_command_when_permitted_speed_supervision_limit_is_no_longer_exceeded
} Q_NVEMRRLS;
/* Level_And_Mode_Types_Pkg::T_TransitionType/ */
typedef enum kcg_tag_T_TransitionType_Level_And_Mode_Types_Pkg {
  M_TransitionType_Conditional_Level_And_Mode_Types_Pkg,
  M_TransitionType_DriverInit_Level_And_Mode_Types_Pkg,
  M_TransitionType_Normal_Level_And_Mode_Types_Pkg
} T_TransitionType_Level_And_Mode_Types_Pkg;
/* TIU_Types_Pkg::M_trackcond_T/ */
typedef enum kcg_tag_M_trackcond_T_TIU_Types_Pkg {
  non_stopping_area_TIU_Types_Pkg,
  tunnel_stopping_area_TIU_Types_Pkg,
  sound_horn_TIU_Types_Pkg,
  powerless_section_lower_pantograph_TIU_Types_Pkg,
  radio_hole_TIU_Types_Pkg,
  air_tightness_TIU_Types_Pkg,
  switch_off_regenerative_brake_TIU_Types_Pkg,
  switch_off_eddy_current_brake_for_service_brake_TIU_Types_Pkg,
  switch_off_magnetic_shoe_brake_TIU_Types_Pkg,
  powerless_section_switch_off_main_power_switch_TIU_Types_Pkg,
  _106_switch_off_eddy_current_brake_for_emergency_brake_TIU_Types_Pkg
} M_trackcond_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_train_data_entry_type_T/ */
typedef enum kcg_tag_M_train_data_entry_type_T_TIU_Types_Pkg {
  fixed_entry_type_TIU_Types_Pkg,
  flexible_entry_type_TIU_Types_Pkg,
  switchable_entry_type_TIU_Types_Pkg,
  no_entry_type_TIU_Types_Pkg
} M_train_data_entry_type_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_brake_status_T/ */
typedef enum kcg_tag_M_brake_status_T_TIU_Types_Pkg {
  brake_status_not_defined_TIU_Types_Pkg,
  is_active_TIU_Types_Pkg,
  is_not_active_TIU_Types_Pkg
} M_brake_status_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_traction_signal_status_T/ */
typedef enum kcg_tag_M_traction_signal_status_T_TIU_Types_Pkg {
  traction_on_TIU_Types_Pkg,
  traction_off_TIU_Types_Pkg
} M_traction_signal_status_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_trainintegrity_signal_status_T/ */
typedef enum kcg_tag_M_trainintegrity_signal_status_T_TIU_Types_Pkg {
  train_is_not_integer_TIU_Types_Pkg,
  train_is_integer_TIU_Types_Pkg
} M_trainintegrity_signal_status_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_directioncontroller_signal_status_T/ */
typedef enum kcg_tag_M_directioncontroller_signal_status_T_TIU_Types_Pkg {
  direction_controller_in_neutral_TIU_Types_Pkg,
  direction_controller_in_forward_TIU_Types_Pkg,
  direction_controller_in_backward_TIU_Types_Pkg
} M_directioncontroller_signal_status_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_nonleading_signal_status_T/ */
typedef enum kcg_tag_M_nonleading_signal_status_T_TIU_Types_Pkg {
  non_leading_signall_status_not_defined_TIU_Types_Pkg,
  non_leading_permitted_TIU_Types_Pkg,
  non_leading_not_permitted_TIU_Types_Pkg
} M_nonleading_signal_status_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_passiveshunting_signal_status_T/ */
typedef enum kcg_tag_M_passiveshunting_signal_status_T_TIU_Types_Pkg {
  passive_shunting_permitted_TIU_Types_Pkg,
  passive_shunting_not_permitted_TIU_Types_Pkg
} M_passiveshunting_signal_status_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_sleeping_signal_status_T/ */
typedef enum kcg_tag_M_sleeping_signal_status_T_TIU_Types_Pkg {
  signal_active_TIU_Types_Pkg,
  signal_not_active_TIU_Types_Pkg
} M_sleeping_signal_status_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_cab_signal_status_T/ */
typedef enum kcg_tag_M_cab_signal_status_T_TIU_Types_Pkg {
  cab_signal_status_not_defined_TIU_Types_Pkg,
  both_desks_are_closed_TIU_Types_Pkg,
  desk_A_is_open_TIU_Types_Pkg,
  desk_B_is_open_TIU_Types_Pkg,
  both_desks_are_open_TIU_Types_Pkg
} M_cab_signal_status_T_TIU_Types_Pkg;
/* M_VOLTAGE/ */
typedef enum kcg_tag_M_VOLTAGE {
  M_VOLTAGE_Line_not_fitted_with_any_traction_system,
  M_VOLTAGE_AC_25_kV_50_Hz,
  M_VOLTAGE_AC_15_kV_16_7_Hz,
  M_VOLTAGE_DC_3_kV,
  M_VOLTAGE_DC_1_5_kV,
  M_VOLTAGE_DC_600_or_750_V
} M_VOLTAGE;
/* NC_CDTRAIN/ */
typedef enum kcg_tag_NC_CDTRAIN {
  NC_CDTRAIN_Cant_Deficiency_80_mm,
  NC_CDTRAIN_Cant_Deficiency_100_mm,
  NC_CDTRAIN_Cant_Deficiency_130_mm,
  NC_CDTRAIN_Cant_Deficiency_150_mm,
  NC_CDTRAIN_Cant_Deficiency_165_mm,
  NC_CDTRAIN_Cant_Deficiency_180_mm,
  NC_CDTRAIN_Cant_Deficiency_210_mm,
  NC_CDTRAIN_Cant_Deficiency_225_mm,
  NC_CDTRAIN_Cant_Deficiency_245_mm,
  NC_CDTRAIN_Cant_Deficiency_275_mm,
  NC_CDTRAIN_Cant_Deficiency_300_mm
} NC_CDTRAIN;
/* M_LOADINGGAUGE/ */
typedef enum kcg_tag_M_LOADINGGAUGE {
  M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles,
  M_LOADINGGAUGE_G1,
  M_LOADINGGAUGE_GA,
  M_LOADINGGAUGE_GB,
  M_LOADINGGAUGE_GC
} M_LOADINGGAUGE;
/* M_AIRTIGHT/ */
typedef enum kcg_tag_M_AIRTIGHT {
  M_AIRTIGHT_Not_fitted,
  M_AIRTIGHT_Fitted
} M_AIRTIGHT;
/* NC_TRAIN/ */
typedef enum kcg_tag_NC_TRAIN {
  NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category,
  NC_TRAIN_Freight_train_braked_in_P_position,
  _70_NC_TRAIN_Freight_train_braked_in_G_position,
  NC_TRAIN_Passenger_train
} NC_TRAIN;
/* TIU_Types_Pkg::cab_ID_T/ */
typedef enum kcg_tag_cab_ID_T_TIU_Types_Pkg {
  CabUndefined_TIU_Types_Pkg,
  CabA_TIU_Types_Pkg,
  CabB_TIU_Types_Pkg
} cab_ID_T_TIU_Types_Pkg;
/* Level_And_Mode_Types_Pkg::T_MA/ */
typedef enum kcg_tag_T_MA_Level_And_Mode_Types_Pkg {
  Profile_OS_Level_And_Mode_Types_Pkg,
  Profile_LS_Level_And_Mode_Types_Pkg,
  Profile_SH_Level_And_Mode_Types_Pkg,
  No_Profile_Level_And_Mode_Types_Pkg
} T_MA_Level_And_Mode_Types_Pkg;
/* Level_And_Mode_Types_Pkg::T_Mode/ */
typedef enum kcg_tag_T_Mode_Level_And_Mode_Types_Pkg {
  NP_Level_And_Mode_Types_Pkg,
  SB_Level_And_Mode_Types_Pkg,
  PS_Level_And_Mode_Types_Pkg,
  SH_Level_And_Mode_Types_Pkg,
  FS_Level_And_Mode_Types_Pkg,
  LS_Level_And_Mode_Types_Pkg,
  SR_Level_And_Mode_Types_Pkg,
  OS_Level_And_Mode_Types_Pkg,
  SL_Level_And_Mode_Types_Pkg,
  NL_Level_And_Mode_Types_Pkg,
  UN_Level_And_Mode_Types_Pkg,
  TR_Level_And_Mode_Types_Pkg,
  PT_Level_And_Mode_Types_Pkg,
  SF_Level_And_Mode_Types_Pkg,
  IS_Level_And_Mode_Types_Pkg,
  SN_Level_And_Mode_Types_Pkg,
  RV_Level_And_Mode_Types_Pkg
} T_Mode_Level_And_Mode_Types_Pkg;
/* Q_MAMODE/ */
typedef enum kcg_tag_Q_MAMODE {
  Q_MAMODE_as_the_EOA,
  Q_MAMODE_as_both_the_EOA_and_SvL
} Q_MAMODE;
/* M_MAMODE/ */
typedef enum kcg_tag_M_MAMODE {
  M_MAMODE_On_Sight,
  M_MAMODE_Shunting,
  M_MAMODE_Limited_Supervision
} M_MAMODE;
/* Q_SRSTOP/ */
typedef enum kcg_tag_Q_SRSTOP {
  Q_SRSTOP_Stop_if_in_SR_mode,
  Q_SRSTOP_Go_if_in_SR_mode
} Q_SRSTOP;
/* NC_CDDIFF/ */
typedef enum kcg_tag_NC_CDDIFF {
  NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm,
  _96_NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_100_mm,
  _97_NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_130_mm,
  _98_NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_150_mm,
  _99_NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_165_mm,
  _100_NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_180_mm,
  _101_NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_210_mm,
  _102_NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_225_mm,
  _103_NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_245_mm,
  _104_NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_275_mm,
  _105_NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_300_mm
} NC_CDDIFF;
/* Q_DIFF/ */
typedef enum kcg_tag_Q_DIFF {
  Q_DIFF_Cant_Deficiency_specific_category,
  Q_DIFF_Other_specific_category_replaces_the_Cant_Deficiency_SSP,
  _95_Q_DIFF_Other_specific_category_does_not_replace_the_Cant_Deficiency_SSP
} Q_DIFF;
/* Q_FRONT/ */
typedef enum kcg_tag_Q_FRONT {
  Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element,
  Q_FRONT_No_train_length_delay_on_validity_end_point_of_profile_element
} Q_FRONT;
/* Q_GDIR/ */
typedef enum kcg_tag_Q_GDIR { Q_GDIR_downhill, Q_GDIR_uphill } Q_GDIR;
/* Q_ENDTIMER/ */
typedef enum kcg_tag_Q_ENDTIMER {
  Q_ENDTIMER_No_End_section_timer_information,
  Q_ENDTIMER_End_section_timer_information_to_follow
} Q_ENDTIMER;
/* Q_DANGERPOINT/ */
typedef enum kcg_tag_Q_DANGERPOINT {
  Q_DANGERPOINT_No_danger_point_information,
  Q_DANGERPOINT_Danger_point_information_to_follow
} Q_DANGERPOINT;
/* Q_OVERLAP/ */
typedef enum kcg_tag_Q_OVERLAP {
  Q_OVERLAP_No_overlap_information,
  Q_OVERLAP_Overlap_information_to_follow
} Q_OVERLAP;
/* Q_SECTIONTIMER/ */
typedef enum kcg_tag_Q_SECTIONTIMER {
  Q_SECTIONTIMER_No_Section_Timer_information,
  Q_SECTIONTIMER_Section_Timer_information_to_follow
} Q_SECTIONTIMER;
/* M_LEVELTR/ */
typedef enum kcg_tag_M_LEVELTR {
  M_LEVELTR_Level_0,
  M_LEVELTR_Level_NTC_specified_by_NID_NTC,
  M_LEVELTR_Level_1,
  M_LEVELTR_Level_2,
  M_LEVELTR_Level_3
} M_LEVELTR;
/* Q_LENGTH/ */
typedef enum kcg_tag_Q_LENGTH {
  Q_LENGTH_No_train_integrity_information_available,
  Q_LENGTH_Train_integrity_confirmed_by_integrity_monitoring_device,
  _86_Q_LENGTH_Train_integrity_confirmed_by_driver,
  Q_LENGTH_Train_integrity_lost
} Q_LENGTH;
/* M_LEVEL/ */
typedef enum kcg_tag_M_LEVEL {
  M_LEVEL_Level_0,
  M_LEVEL_Level_NTC_specified_by_NID_NTC,
  M_LEVEL_Level_1,
  M_LEVEL_Level_2,
  M_LEVEL_Level_3
} M_LEVEL;
/* M_MODE/ */
typedef enum kcg_tag_M_MODE {
  M_MODE_Full_Supervision,
  M_MODE_On_Sight,
  M_MODE_Staff_Responsible,
  M_MODE_Shunting,
  M_MODE_Unfitted,
  M_MODE_Sleeping,
  M_MODE_Stand_By,
  M_MODE_Trip,
  M_MODE_Post_Trip,
  M_MODE_System_Failure,
  M_MODE_Isolation,
  M_MODE_Non_Leading,
  M_MODE_Limited_Supervision,
  M_MODE_National_System,
  M_MODE_Reversing,
  M_MODE_Passive_Shunting,
  M_MODE_No_Power
} M_MODE;
/* DMI_Types_Pkg::M_SUPERVISION_STATUS/ */
typedef enum kcg_tag_M_SUPERVISION_STATUS_DMI_Types_Pkg {
  CSM_DMI_Types_Pkg,
  PIM_DMI_Types_Pkg,
  TSM_DMI_Types_Pkg,
  RSM_DMI_Types_Pkg,
  supervision_status_unknown_DMI_Types_Pkg
} M_SUPERVISION_STATUS_DMI_Types_Pkg;
/* DMI_Types_Pkg::M_SupervisionDisplay_T/ */
typedef enum kcg_tag_M_SupervisionDisplay_T_DMI_Types_Pkg {
  supDis_normal_DMI_Types_Pkg,
  supDis_indication_DMI_Types_Pkg,
  supDis_overspeed_DMI_Types_Pkg,
  supDis_warning_DMI_Types_Pkg,
  supDis_intervention_DMI_Types_Pkg
} M_SupervisionDisplay_T_DMI_Types_Pkg;
/* TIU_Types_Pkg::M_brake_signal_command_T/ */
typedef enum kcg_tag_M_brake_signal_command_T_TIU_Types_Pkg {
  brake_signal_command_not_defined_TIU_Types_Pkg,
  apply_brake_TIU_Types_Pkg,
  release_brake_TIU_Types_Pkg
} M_brake_signal_command_T_TIU_Types_Pkg;
/* Q_DLRBG/ */
typedef enum kcg_tag_Q_DLRBG {
  Q_DLRBG_Reverse,
  Q_DLRBG_Nominal,
  Q_DLRBG_Unknown
} Q_DLRBG;
/* Common_Types_Pkg::MsgSource_T/ */
typedef enum kcg_tag_MsgSource_T_Common_Types_Pkg {
  msrc_undefined_Common_Types_Pkg,
  msrc_Euroradio_Common_Types_Pkg,
  msrc_Eurobalise_Common_Types_Pkg,
  msrc_RadioInfillUnit_Common_Types_Pkg,
  msrc_OBU_Common_Types_Pkg
} MsgSource_T_Common_Types_Pkg;
/* Q_SLEEPSESSION/ */
typedef enum kcg_tag_Q_SLEEPSESSION {
  Q_SLEEPSESSION_Ignore_session_establishment_order,
  Q_SLEEPSESSION_Execute_session_establishment_order
} Q_SLEEPSESSION;
/* Q_RBC/ */
typedef enum kcg_tag_Q_RBC {
  Q_RBC_Terminate_communication_session,
  Q_RBC_Establish_communication_session
} Q_RBC;
/* M_ACK/ */
typedef enum kcg_tag_M_ACK {
  M_ACK_No_acknowledgement_required,
  M_ACK_Acknowledgement_required
} M_ACK;
/* RCM_Types_Pkg::mobileRegistrationStatus_T/ */
typedef enum kcg_tag_mobileRegistrationStatus_T_RCM_Types_Pkg {
  mrs_unregistered_RCM_Types_Pkg,
  mrs_registering_RCM_Types_Pkg,
  mrs_registered_RCM_Types_Pkg
} mobileRegistrationStatus_T_RCM_Types_Pkg;
/* RCM_Types_Pkg::mobileHealthStatus_T/ */
typedef enum kcg_tag_mobileHealthStatus_T_RCM_Types_Pkg {
  mhs_nok_RCM_Types_Pkg,
  mhs_ok_RCM_Types_Pkg
} mobileHealthStatus_T_RCM_Types_Pkg;
/* RCM_Types_Pkg::mobileConnectionStatus_T/ */
typedef enum kcg_tag_mobileConnectionStatus_T_RCM_Types_Pkg {
  mcs_disconnected_RCM_Types_Pkg,
  mcs_connecting_RCM_Types_Pkg,
  mcs_connected_RCM_Types_Pkg
} mobileConnectionStatus_T_RCM_Types_Pkg;
/* TIU_Types_Pkg::M_Isolation_status_T/ */
typedef enum kcg_tag_M_Isolation_status_T_TIU_Types_Pkg {
  on_board_equipment_is_isolated_TIU_Types_Pkg,
  on_board_equipement_is_not_isolated_TIU_Types_Pkg,
  isolation_status_not_defined_TIU_Types_Pkg
} M_Isolation_status_T_TIU_Types_Pkg;
/* Obu_BasicTypes_Pkg::odoMotionDirection_T/ */
typedef enum kcg_tag_odoMotionDirection_T_Obu_BasicTypes_Pkg {
  unknownDirection_Obu_BasicTypes_Pkg,
  cabAFirst_Obu_BasicTypes_Pkg,
  cabBFirst_Obu_BasicTypes_Pkg
} odoMotionDirection_T_Obu_BasicTypes_Pkg;
/* Obu_BasicTypes_Pkg::odoMotionState_T/ */
typedef enum kcg_tag_odoMotionState_T_Obu_BasicTypes_Pkg {
  noMotion_Obu_BasicTypes_Pkg,
  Motion_Obu_BasicTypes_Pkg
} odoMotionState_T_Obu_BasicTypes_Pkg;
/* Q_DIRTRAIN/ */
typedef enum kcg_tag_Q_DIRTRAIN {
  Q_DIRTRAIN_Reverse,
  Q_DIRTRAIN_Nominal,
  Q_DIRTRAIN_Unknown
} Q_DIRTRAIN;
/* Q_DIRLRBG/ */
typedef enum kcg_tag_Q_DIRLRBG {
  Q_DIRLRBG_Reverse,
  Q_DIRLRBG_Nominal,
  Q_DIRLRBG_Unknown
} Q_DIRLRBG;
/* N_TOTAL/ */
typedef enum kcg_tag_N_TOTAL {
  N_TOTAL_1_balise_in_the_group,
  N_TOTAL_2_balises_in_the_group,
  N_TOTAL_3_balises_in_the_group,
  N_TOTAL_4_balises_in_the_group,
  N_TOTAL_5_balises_in_the_group,
  N_TOTAL_6_balises_in_the_group,
  N_TOTAL_7_balises_in_the_group,
  N_TOTAL_8_balises_in_the_group
} N_TOTAL;
/* Q_MEDIA/ */
typedef enum kcg_tag_Q_MEDIA { Q_MEDIA_Balise, Q_MEDIA_Loop } Q_MEDIA;
/* Q_UPDOWN/ */
typedef enum kcg_tag_Q_UPDOWN {
  Q_UPDOWN_Down_link_telegram,
  Q_UPDOWN_Up_link_telegram
} Q_UPDOWN;
/* Q_LINKREACTION/ */
typedef enum kcg_tag_Q_LINKREACTION {
  Q_LINKREACTION_Train_trip,
  Q_LINKREACTION_Apply_service_brake,
  Q_LINKREACTION_No_Reaction
} Q_LINKREACTION;
/* Q_LINKORIENTATION/ */
typedef enum kcg_tag_Q_LINKORIENTATION {
  Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction,
  _87_Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_nominal_direction
} Q_LINKORIENTATION;
/* Q_NEWCOUNTRY/ */
typedef enum kcg_tag_Q_NEWCOUNTRY {
  Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows,
  Q_NEWCOUNTRY_Not_the_same_country__or__railway_administration_NID_C_follows
} Q_NEWCOUNTRY;
/* Q_SCALE/ */
typedef enum kcg_tag_Q_SCALE {
  Q_SCALE_10_cm_scale,
  Q_SCALE_1_m_scale,
  Q_SCALE_10_m_scale
} Q_SCALE;
/* Q_DIR/ */
typedef enum kcg_tag_Q_DIR {
  Q_DIR_Reverse,
  Q_DIR_Nominal,
  Q_DIR_Both_directions
} Q_DIR;
/* Q_LINK/ */
typedef enum kcg_tag_Q_LINK { Q_LINK_Unlinked, Q_LINK_Linked } Q_LINK;
/* M_VERSION/ */
typedef enum kcg_tag_M_VERSION {
  M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS,
  M_VERSION_Version_1_0_introduced_in_SRS_1_2_0_and_reused_in_SRSs_2_0_0_and_2_2_2_and_2_3_0,
  M_VERSION_Version_1_1_introduced_in_SRS_3_3_0,
  M_VERSION_Version_2_0_introduced_in_SRS_3_3_0
} M_VERSION;
/* TIU_Types_Pkg::M_traction_cutoff_command_T/ */
typedef enum kcg_tag_M_traction_cutoff_command_T_TIU_Types_Pkg {
  traction_cutoff_command_not_defined_TIU_Types_Pkg,
  apply_traction_cutoff_TIU_Types_Pkg,
  release_traction_cutoff_TIU_Types_Pkg
} M_traction_cutoff_command_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_mainpowerswitch_command_T/ */
typedef enum kcg_tag_M_mainpowerswitch_command_T_TIU_Types_Pkg {
  open_main_power_swicth_TIU_Types_Pkg,
  close_main_power_switch_TIU_Types_Pkg
} M_mainpowerswitch_command_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_airtightness_command_T/ */
typedef enum kcg_tag_M_airtightness_command_T_TIU_Types_Pkg {
  airtightness_command_not_defined_TIU_Types_Pkg,
  tunnel_condition_active_TIU_Types_Pkg,
  tunnel_condition_not_active_TIU_Types_Pkg
} M_airtightness_command_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_pantograph_command_T/ */
typedef enum kcg_tag_M_pantograph_command_T_TIU_Types_Pkg {
  pantograph_command_not_defined_TIU_Types_Pkg,
  lower_pantograph_TIU_Types_Pkg,
  raise_pantograph_TIU_Types_Pkg
} M_pantograph_command_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_eddy_current_brake_inhibition_T/ */
typedef enum kcg_tag_M_eddy_current_brake_inhibition_T_TIU_Types_Pkg {
  eddy_current_brake_inhibition_not_defined_TIU_Types_Pkg,
  inhibit_for_service_brake_TIU_Types_Pkg,
  inhibit_for_emergency_brake_TIU_Types_Pkg,
  inhibit_for_both_service_emergency_brake_TIU_Types_Pkg,
  do_not_inhibit_for_service_brake_TIU_Types_Pkg,
  do_not_inhibit_for_emergency_brake_TIU_Types_Pkg,
  do_not_inhibit_for_both_service_emergency_brake_TIU_Types_Pkg
} M_eddy_current_brake_inhibition_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_brake_inhibit_command_T/ */
typedef enum kcg_tag_M_brake_inhibit_command_T_TIU_Types_Pkg {
  brake_inhibit_not_defined_TIU_Types_Pkg,
  inhibit_brake_TIU_Types_Pkg,
  do_not_inhibit_brake_TIU_Types_Pkg
} M_brake_inhibit_command_T_TIU_Types_Pkg;
/* M_AXLELOADCAT/ */
typedef enum kcg_tag_M_AXLELOADCAT {
  M_AXLELOADCAT_A,
  M_AXLELOADCAT_HS17,
  M_AXLELOADCAT_B1,
  M_AXLELOADCAT_B2,
  M_AXLELOADCAT_C2,
  M_AXLELOADCAT_C3,
  M_AXLELOADCAT_C4,
  M_AXLELOADCAT_D2,
  M_AXLELOADCAT_D3,
  M_AXLELOADCAT_D4,
  M_AXLELOADCAT_D4XL,
  M_AXLELOADCAT_E4,
  M_AXLELOADCAT_E5
} M_AXLELOADCAT;
/* M_ADHESION/ */
typedef enum kcg_tag_M_ADHESION {
  M_ADHESION_Slippery_rail,
  M_ADHESION_Non_slippery_rail
} M_ADHESION;
/* TIU_Types_Pkg::M_voltage_types_T/ */
typedef enum kcg_tag_M_voltage_types_T_TIU_Types_Pkg {
  line_not_fitted_with_any_traction_system_TIU_Types_Pkg,
  ac_25kV_50Hz_TIU_Types_Pkg,
  ac_15kV_16_7Hz_TIU_Types_Pkg,
  dc_3kV_TIU_Types_Pkg,
  dc_1_5kV_TIU_Types_Pkg,
  dc_600_750kV_TIU_Types_Pkg
} M_voltage_types_T_TIU_Types_Pkg;
/* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN/SM1: */
typedef enum kcg_tag__222_SSM_TR_SM1 {
  SSM_TR_no_trans_SM1,
  SSM_TR_State1_Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH_1_State1_SM1,
  SSM_TR_Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH_Wait_for_Acknowledgment_for_mode_change_SB_to_FS_from_mode_and_Level_Management_1_Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH_SM1,
  SSM_TR_Wait_for_Acknowledgment_for_mode_change_SB_to_FS_from_mode_and_Level_Management_FS_Mode_1_Wait_for_Acknowledgment_for_mode_change_SB_to_FS_from_mode_and_Level_Management_SM1
} _222_SSM_TR_SM1;
/* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN/SM1: */
typedef enum kcg_tag__221_SSM_ST_SM1 {
  SSM_st_State1_SM1,
  SSM_st_Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH_SM1,
  SSM_st_Wait_for_Acknowledgment_for_mode_change_SB_to_FS_from_mode_and_Level_Management_SM1,
  SSM_st_FS_Mode_SM1
} _221_SSM_ST_SM1;
/* SoMProcedure_Pkg::SoM_NTC_SN/Level_NTC_and_Mode_SN: */
typedef enum kcg_tag_SSM_TR_Level_NTC_and_Mode_SN {
  SSM_TR_no_trans_Level_NTC_and_Mode_SN,
  SSM_TR_State1_Waiting_for_Ack_of_proposed_Mode_SN_from_Driver_1_State1_Level_NTC_and_Mode_SN,
  SSM_TR_Waiting_for_Ack_of_proposed_Mode_SN_from_Driver_Level_NTC_andMode_SN_1_Waiting_for_Ack_of_proposed_Mode_SN_from_Driver_Level_NTC_and_Mode_SN
} SSM_TR_Level_NTC_and_Mode_SN;
/* SoMProcedure_Pkg::SoM_NTC_SN/Level_NTC_and_Mode_SN: */
typedef enum kcg_tag_SSM_ST_Level_NTC_and_Mode_SN {
  SSM_st_State1_Level_NTC_and_Mode_SN,
  SSM_st_Waiting_for_Ack_of_proposed_Mode_SN_from_Driver_Level_NTC_and_Mode_SN,
  SSM_st_Level_NTC_andMode_SN_Level_NTC_and_Mode_SN
} SSM_ST_Level_NTC_and_Mode_SN;
/* ManageProcedure_Pkg::Master_Procedure/SM1: */
typedef enum kcg_tag__220_SSM_TR_SM1 {
  _234_SSM_TR_no_trans_SM1,
  SSM_TR_NP_Awakness_of_Train_1_NP_SM1,
  SSM_TR_Awakness_of_Train_NP_1_Awakness_of_Train_SM1,
  SSM_TR_Awakness_of_Train_SoM_L2_3_FS_SR_OS_LS_SH_2_Awakness_of_Train_SM1,
  SSM_TR_Awakness_of_Train_SoM_NTC_SN_3_Awakness_of_Train_SM1
} _220_SSM_TR_SM1;
/* ManageProcedure_Pkg::Master_Procedure/SM1: */
typedef enum kcg_tag__219_SSM_ST_SM1 {
  SSM_st_NP_SM1,
  SSM_st_Awakness_of_Train_SM1,
  SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1,
  SSM_st_SoM_NTC_SN_SM1
} _219_SSM_ST_SM1;
/* ManageProcedure_Pkg::Master_Procedure/SM1:Awakness_of_Train:SM3: */
typedef enum kcg_tag_SSM_TR_SM3_Awakness_of_Train_SM1 {
  SSM_TR_no_trans_SM3_Awakness_of_Train_SM1,
  SSM_TR_Waition_for_Driver_ID_first_Validation_for_Train_Number_1_Waition_for_Driver_ID_SM3_Awakness_of_Train_SM1,
  SSM_TR_first_Validation_for_Train_Number_request_Level_1_first_Validation_for_Train_Number_SM3_Awakness_of_Train_SM1,
  _236_SSM_TR_first_Validation_for_Train_Number_Waiting_for_driver_selection_E10_E11_or_E12_2_first_Validation_for_Train_Number_SM3_Awakness_of_Train_SM1,
  _237_SSM_TR_first_Validation_for_Train_Number_Validation_of_Train_Data_from_Driver_3_first_Validation_for_Train_Number_SM3_Awakness_of_Train_SM1,
  SSM_TR_request_Level_Waiting_for_Mobile_terminal_registration_1_request_Level_SM3_Awakness_of_Train_SM1,
  SSM_TR_Waiting_for_RBC_Establishment_Acknowlege_of_Position_from_RBC_1_Waiting_for_RBC_Establishment_SM3_Awakness_of_Train_SM1,
  SSM_TR_Acknowlege_of_Position_from_RBC_Validation_of_Train_Data_from_Driver_1_Acknowlege_of_Position_from_RBC_SM3_Awakness_of_Train_SM1,
  SSM_TR_Validation_of_Train_Data_from_Driver_Second_Validation_of_Train_Number_from_Driver_1_Validation_of_Train_Data_from_Driver_SM3_Awakness_of_Train_SM1,
  SSM_TR_Second_Validation_of_Train_Number_from_Driver_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_1_Second_Validation_of_Train_Number_from_Driver_SM3_Awakness_of_Train_SM1,
  _235_SSM_TR_Second_Validation_of_Train_Number_from_Driver_Waiting_of_Start_from_Driver_2_Second_Validation_of_Train_Number_from_Driver_SM3_Awakness_of_Train_SM1,
  SSM_TR_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_Waiting_of_Start_from_Driver_1_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM3_Awakness_of_Train_SM1,
  SSM_TR_SB_Waition_for_Driver_ID_1_SB_SM3_Awakness_of_Train_SM1,
  SSM_TR_Waiting_for_Mobile_terminal_registration_Waiting_for_RBC_Establishment_1_Waiting_for_Mobile_terminal_registration_SM3_Awakness_of_Train_SM1,
  SSM_TR_Waiting_for_driver_selection_E10_E11_or_E12_Validation_of_Train_Data_from_Driver_1_Waiting_for_driver_selection_E10_E11_or_E12_SM3_Awakness_of_Train_SM1
} SSM_TR_SM3_Awakness_of_Train_SM1;
/* ManageProcedure_Pkg::Master_Procedure/SM1:Awakness_of_Train:SM3: */
typedef enum kcg_tag_SSM_ST_SM3_Awakness_of_Train_SM1 {
  SSM_st_Waition_for_Driver_ID_SM3_Awakness_of_Train_SM1,
  SSM_st_first_Validation_for_Train_Number_SM3_Awakness_of_Train_SM1,
  SSM_st_request_Level_SM3_Awakness_of_Train_SM1,
  SSM_st_Waiting_for_RBC_Establishment_SM3_Awakness_of_Train_SM1,
  SSM_st_Acknowlege_of_Position_from_RBC_SM3_Awakness_of_Train_SM1,
  SSM_st_Validation_of_Train_Data_from_Driver_SM3_Awakness_of_Train_SM1,
  SSM_st_Second_Validation_of_Train_Number_from_Driver_SM3_Awakness_of_Train_SM1,
  SSM_st_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM3_Awakness_of_Train_SM1,
  SSM_st_Waiting_of_Start_from_Driver_SM3_Awakness_of_Train_SM1,
  SSM_st_SB_SM3_Awakness_of_Train_SM1,
  SSM_st_Waiting_for_Mobile_terminal_registration_SM3_Awakness_of_Train_SM1,
  SSM_st_Waiting_for_driver_selection_E10_E11_or_E12_SM3_Awakness_of_Train_SM1
} SSM_ST_SM3_Awakness_of_Train_SM1;
/* SDM_Commands_Pkg::CmdTrainSupervisionStatus/modeInterplay: */
typedef enum kcg_tag_SSM_TR_modeInterplay {
  SSM_TR_no_trans_modeInterplay,
  SSM_TR_CSM_TSM_1_CSM_modeInterplay,
  SSM_TR_CSM_RSM_2_CSM_modeInterplay,
  SSM_TR_TSM_RSM_1_TSM_modeInterplay,
  SSM_TR_TSM_CSM_2_TSM_modeInterplay,
  SSM_TR_RSM_CSM_1_RSM_modeInterplay,
  SSM_TR_RSM_TSM_2_RSM_modeInterplay
} SSM_TR_modeInterplay;
/* SDM_Commands_Pkg::CmdTrainSupervisionStatus/modeInterplay: */
typedef enum kcg_tag_SSM_ST_modeInterplay {
  SSM_st_CSM_modeInterplay,
  SSM_st_TSM_modeInterplay,
  SSM_st_RSM_modeInterplay
} SSM_ST_modeInterplay;
/* SDM_Commands_Pkg::CmdTrainSupervisionStatus/modeInterplay:CSM:CSM: */
typedef enum kcg_tag_SSM_TR_CSM_CSM_modeInterplay {
  SSM_TR_no_trans_CSM_CSM_modeInterplay,
  SSM_TR_Init_NormalStatus_1_Init_CSM_CSM_modeInterplay,
  SSM_TR_Init_OverspeedStatus_2_Init_CSM_CSM_modeInterplay,
  SSM_TR_Init_WarningStatus_3_Init_CSM_CSM_modeInterplay,
  _241_SSM_TR_Init_InterventionStatus_4_Init_CSM_CSM_modeInterplay,
  SSM_TR_Init_NormalStatus_5_Init_CSM_CSM_modeInterplay,
  SSM_TR_Init_NormalStatus_6_Init_CSM_CSM_modeInterplay,
  SSM_TR_Init_OverspeedStatus_7_Init_CSM_CSM_modeInterplay,
  SSM_TR_Init_WarningStatus_8_Init_CSM_CSM_modeInterplay,
  _242_SSM_TR_Init_InterventionStatus_9_Init_CSM_CSM_modeInterplay,
  SSM_TR_NormalStatus_InterventionStatus_1_NormalStatus_CSM_CSM_modeInterplay,
  SSM_TR_NormalStatus_WarningStatus_2_NormalStatus_CSM_CSM_modeInterplay,
  SSM_TR_NormalStatus_OverspeedStatus_3_NormalStatus_CSM_CSM_modeInterplay,
  SSM_TR_OverspeedStatus_InterventionStatus_1_OverspeedStatus_CSM_CSM_modeInterplay,
  SSM_TR_OverspeedStatus_NormalStatus_2_OverspeedStatus_CSM_CSM_modeInterplay,
  SSM_TR_OverspeedStatus_WarningStatus_3_OverspeedStatus_CSM_CSM_modeInterplay,
  SSM_TR_WarningStatus_InterventionStatus_1_WarningStatus_CSM_CSM_modeInterplay,
  SSM_TR_WarningStatus_NormalStatus_2_WarningStatus_CSM_CSM_modeInterplay,
  SSM_TR_InterventionStatus_NormalStatus_1_InterventionStatus_CSM_CSM_modeInterplay,
  _240_SSM_TR_InterventionStatus_NormalStatus_2_InterventionStatus_CSM_CSM_modeInterplay
} SSM_TR_CSM_CSM_modeInterplay;
/* SDM_Commands_Pkg::CmdTrainSupervisionStatus/modeInterplay:CSM:CSM: */
typedef enum kcg_tag_SSM_ST_CSM_CSM_modeInterplay {
  SSM_st_Init_CSM_CSM_modeInterplay,
  SSM_st_NormalStatus_CSM_CSM_modeInterplay,
  SSM_st_OverspeedStatus_CSM_CSM_modeInterplay,
  SSM_st_WarningStatus_CSM_CSM_modeInterplay,
  SSM_st_InterventionStatus_CSM_CSM_modeInterplay
} SSM_ST_CSM_CSM_modeInterplay;
/* SDM_Commands_Pkg::CmdTrainSupervisionStatus/modeInterplay:TSM:SM4: */
typedef enum kcg_tag_SSM_TR_SM4_TSM_modeInterplay {
  SSM_TR_no_trans_SM4_TSM_modeInterplay,
  SSM_TR_init_Normal_1_init_SM4_TSM_modeInterplay,
  SSM_TR_init_Intervention_2_init_SM4_TSM_modeInterplay,
  SSM_TR_init_Intervention_3_init_SM4_TSM_modeInterplay,
  SSM_TR_init_Warning_4_init_SM4_TSM_modeInterplay,
  SSM_TR_init_Overspeed_5_init_SM4_TSM_modeInterplay,
  SSM_TR_init_Indication_6_init_SM4_TSM_modeInterplay,
  SSM_TR_Normal_Intervention_1_Normal_SM4_TSM_modeInterplay,
  SSM_TR_Normal_Intervention_2_Normal_SM4_TSM_modeInterplay,
  SSM_TR_Normal_Warning_3_Normal_SM4_TSM_modeInterplay,
  SSM_TR_Normal_Overspeed_4_Normal_SM4_TSM_modeInterplay,
  SSM_TR_Normal_Indication_5_Normal_SM4_TSM_modeInterplay,
  SSM_TR_Indication_Normal_1_Indication_SM4_TSM_modeInterplay,
  SSM_TR_Indication_Intervention_2_Indication_SM4_TSM_modeInterplay,
  _239_SSM_TR_Indication_Intervention_3_Indication_SM4_TSM_modeInterplay,
  SSM_TR_Indication_Warning_4_Indication_SM4_TSM_modeInterplay,
  SSM_TR_Indication_Overspeed_5_Indication_SM4_TSM_modeInterplay,
  SSM_TR_Overspeed_Normal_1_Overspeed_SM4_TSM_modeInterplay,
  SSM_TR_Overspeed_Intervention_2_Overspeed_SM4_TSM_modeInterplay,
  SSM_TR_Overspeed_Intervention_3_Overspeed_SM4_TSM_modeInterplay,
  SSM_TR_Overspeed_Indication_4_Overspeed_SM4_TSM_modeInterplay,
  SSM_TR_Overspeed_Warning_5_Overspeed_SM4_TSM_modeInterplay,
  SSM_TR_Warning_Intervention_1_Warning_SM4_TSM_modeInterplay,
  SSM_TR_Warning_Intervention_2_Warning_SM4_TSM_modeInterplay,
  SSM_TR_Warning_Normal_3_Warning_SM4_TSM_modeInterplay,
  SSM_TR_Warning_Indication_4_Warning_SM4_TSM_modeInterplay,
  SSM_TR_Intervention_Normal_1_Intervention_SM4_TSM_modeInterplay,
  SSM_TR_Intervention_Normal_2_Intervention_SM4_TSM_modeInterplay,
  SSM_TR_Intervention_Indication_3_Intervention_SM4_TSM_modeInterplay
} SSM_TR_SM4_TSM_modeInterplay;
/* SDM_Commands_Pkg::CmdTrainSupervisionStatus/modeInterplay:TSM:SM4: */
typedef enum kcg_tag_SSM_ST_SM4_TSM_modeInterplay {
  SSM_st_init_SM4_TSM_modeInterplay,
  SSM_st_Normal_SM4_TSM_modeInterplay,
  SSM_st_Indication_SM4_TSM_modeInterplay,
  SSM_st_Overspeed_SM4_TSM_modeInterplay,
  SSM_st_Warning_SM4_TSM_modeInterplay,
  SSM_st_Intervention_SM4_TSM_modeInterplay
} SSM_ST_SM4_TSM_modeInterplay;
/* SDM_Commands_Pkg::CmdTrainSupervisionStatus/modeInterplay:RSM:RSM: */
typedef enum kcg_tag_SSM_TR_RSM_RSM_modeInterplay {
  SSM_TR_no_trans_RSM_RSM_modeInterplay,
  SSM_TR_Init_IndicationStatus_1_Init_RSM_RSM_modeInterplay,
  SSM_TR_Init_InterventionStatus_2_Init_RSM_RSM_modeInterplay,
  SSM_TR_Init_IndicationStatus_3_Init_RSM_RSM_modeInterplay,
  SSM_TR_Init_IndicationStatus_4_Init_RSM_RSM_modeInterplay,
  _238_SSM_TR_Init_InterventionStatus_5_Init_RSM_RSM_modeInterplay,
  SSM_TR_IndicationStatus_InterventionStatus_1_IndicationStatus_RSM_RSM_modeInterplay,
  SSM_TR_InterventionStatus_IndicationStatus_1_InterventionStatus_RSM_RSM_modeInterplay
} SSM_TR_RSM_RSM_modeInterplay;
/* SDM_Commands_Pkg::CmdTrainSupervisionStatus/modeInterplay:RSM:RSM: */
typedef enum kcg_tag_SSM_ST_RSM_RSM_modeInterplay {
  SSM_st_Init_RSM_RSM_modeInterplay,
  SSM_st_IndicationStatus_RSM_RSM_modeInterplay,
  SSM_st_InterventionStatus_RSM_RSM_modeInterplay
} SSM_ST_RSM_RSM_modeInterplay;
/* InformationFilter_Pkg::InformationFilter/SM1: */
typedef enum kcg_tag__218_SSM_TR_SM1 {
  _244_SSM_TR_no_trans_SM1,
  SSM_TR_State1_State2_1_State1_SM1,
  SSM_TR_State2_State3_1_State2_SM1,
  SSM_TR_State3_State2_1_State3_SM1
} _218_SSM_TR_SM1;
/* InformationFilter_Pkg::InformationFilter/SM1: */
typedef enum kcg_tag__217_SSM_ST_SM1 {
  _243_SSM_st_State1_SM1,
  SSM_st_State2_SM1,
  SSM_st_State3_SM1
} _217_SSM_ST_SM1;
/* input_from_TIU_API_Pkg::detectEvokeBrake/brake_Management: */
typedef enum kcg_tag_SSM_TR_brake_Management {
  SSM_TR_no_trans_brake_Management,
  SSM_TR_TrainOperation_Wait_forStartWindow_1_TrainOperation_brake_Management,
  SSM_TR_WatchBrakeMax_TrainOperation_1_WatchBrakeMax_brake_Management,
  SSM_TR_WatchBrakeMax_BrakeMaxDone_2_WatchBrakeMax_brake_Management,
  SSM_TR_BrakeMaxDone_BrakeMinDone_1_BrakeMaxDone_brake_Management,
  SSM_TR_BrakeMaxDone_TrainOperation_2_BrakeMaxDone_brake_Management,
  SSM_TR_BrakeMinDone_TrainOperation_1_BrakeMinDone_brake_Management,
  SSM_TR_Wait_forStartWindow_WatchBrakeMax_1_Wait_forStartWindow_brake_Management,
  SSM_TR_Wait_forStartWindow_TrainOperation_2_Wait_forStartWindow_brake_Management
} SSM_TR_brake_Management;
/* input_from_TIU_API_Pkg::detectEvokeBrake/brake_Management: */
typedef enum kcg_tag_SSM_ST_brake_Management {
  SSM_st_TrainOperation_brake_Management,
  SSM_st_WatchBrakeMax_brake_Management,
  SSM_st_BrakeMaxDone_brake_Management,
  SSM_st_BrakeMinDone_brake_Management,
  SSM_st_Wait_forStartWindow_brake_Management
} SSM_ST_brake_Management;
/* Procedures::SH_Initiated_By_Driver_On/SM_SH_Initiated_By_Driver: */
typedef enum kcg_tag_SSM_TR_SM_SH_Initiated_By_Driver {
  SSM_TR_no_trans_SM_SH_Initiated_By_Driver,
  SSM_TR_SH_procedure_possible_SH_Authorized_L0_L1_LNTC_1_1_SH_procedure_possible_SM_SH_Initiated_By_Driver,
  SSM_TR_SH_procedure_possible_Issue_SH_Request_L2_L3_2_1_SH_procedure_possible_SM_SH_Initiated_By_Driver,
  SSM_TR_Issue_SH_Request_L2_L3_SH_Authorized_L2_L3_1_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver,
  _245_SSM_TR_Issue_SH_Request_L2_L3_SH_procedure_possible_2_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver
} SSM_TR_SM_SH_Initiated_By_Driver;
/* Procedures::SH_Initiated_By_Driver_On/SM_SH_Initiated_By_Driver: */
typedef enum kcg_tag_SSM_ST_SM_SH_Initiated_By_Driver {
  SSM_st_SH_procedure_possible_SM_SH_Initiated_By_Driver,
  SSM_st_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver,
  SSM_st_SH_Authorized_L0_L1_LNTC_SM_SH_Initiated_By_Driver,
  SSM_st_SH_Authorized_L2_L3_SM_SH_Initiated_By_Driver
} SSM_ST_SM_SH_Initiated_By_Driver;
/* Procedures::Procedure_SH_Initiated_By_Driver/SH_Initiated_By_Driver: */
typedef enum kcg_tag_SSM_TR_SH_Initiated_By_Driver {
  SSM_TR_no_trans_SH_Initiated_By_Driver,
  SSM_TR_SH_initiated_by_driver_procedure_off_S0_SH_initiated_by_driver_procedure_on_1_SH_initiated_by_driver_procedure_off_SH_Initiated_By_Driver,
  SSM_TR_S0_SH_initiated_by_driver_procedure_on_SH_initiated_by_driver_procedure_off_1_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver
} SSM_TR_SH_Initiated_By_Driver;
/* Procedures::Procedure_SH_Initiated_By_Driver/SH_Initiated_By_Driver: */
typedef enum kcg_tag_SSM_ST_SH_Initiated_By_Driver {
  SSM_st_SH_initiated_by_driver_procedure_off_SH_Initiated_By_Driver,
  SSM_st_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver
} SSM_ST_SH_Initiated_By_Driver;
/* Procedures::Procedure_With_Mode_Profile/SM_Mode_Profile_By_Trackside: */
typedef enum kcg_tag_SSM_TR_SM_Mode_Profile_By_Trackside {
  SSM_TR_no_trans_SM_Mode_Profile_By_Trackside,
  SSM_TR_Procedure_Off_Futher_location_1_1_Procedure_Off_SM_Mode_Profile_By_Trackside,
  SSM_TR_Procedure_Off_Current_Location_2_1_Procedure_Off_SM_Mode_Profile_By_Trackside,
  SSM_TR_Futher_location_Procedure_Off_1_Futher_location_SM_Mode_Profile_By_Trackside,
  SSM_TR_Futher_location_Current_Location_2_Futher_location_SM_Mode_Profile_By_Trackside,
  SSM_TR_Current_Location_Procedure_Off_1_Current_Location_SM_Mode_Profile_By_Trackside
} SSM_TR_SM_Mode_Profile_By_Trackside;
/* Procedures::Procedure_With_Mode_Profile/SM_Mode_Profile_By_Trackside: */
typedef enum kcg_tag_SSM_ST_SM_Mode_Profile_By_Trackside {
  SSM_st_Procedure_Off_SM_Mode_Profile_By_Trackside,
  SSM_st_Futher_location_SM_Mode_Profile_By_Trackside,
  SSM_st_Current_Location_SM_Mode_Profile_By_Trackside
} SSM_ST_SM_Mode_Profile_By_Trackside;
/* Procedures::Procedure_With_Mode_Profile/SM_Mode_Profile_By_Trackside:Futher_location:SM_Futher_Location: */
typedef enum kcg_tag_SSM_TR_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside {
  SSM_TR_no_trans_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside,
  SSM_TR_Req_Futher_Location_Start_Supervision_1_Req_Futher_Location_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside,
  SSM_TR_Start_Supervision_Waiting_Ack_1_Start_Supervision_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside,
  _248_SSM_TR_Waiting_Ack_Switch_Mode_Confirmed_1_Waiting_Ack_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside
} SSM_TR_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside;
/* Procedures::Procedure_With_Mode_Profile/SM_Mode_Profile_By_Trackside:Futher_location:SM_Futher_Location: */
typedef enum kcg_tag_SSM_ST_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside {
  SSM_st_Req_Futher_Location_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside,
  SSM_st_Start_Supervision_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside,
  SSM_st_Waiting_Ack_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside,
  _247_SSM_st_Switch_Mode_Confirmed_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside
} SSM_ST_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside;
/* Procedures::Procedure_With_Mode_Profile/SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location: */
typedef enum kcg_tag_SSM_TR_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside {
  SSM_TR_no_trans_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside,
  SSM_TR_Req_Current_Location_Switch_Autorized_Waiting_Ack_1_Req_Current_Location_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside,
  SSM_TR_Req_Current_Location_Waiting_Ack_2_Req_Current_Location_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside,
  SSM_TR_Switch_Autorized_Waiting_Ack_Switch_Mode_Confirmed_1_Switch_Autorized_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside,
  _246_SSM_TR_Switch_Autorized_Waiting_Ack_Ack_Not_Received_2_Switch_Autorized_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside,
  SSM_TR_Waiting_Ack_Switch_Mode_Confirmed_1_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside,
  SSM_TR_Ack_Not_Received_Switch_Mode_Confirmed_1_Ack_Not_Received_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside
} SSM_TR_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside;
/* Procedures::Procedure_With_Mode_Profile/SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location: */
typedef enum kcg_tag_SSM_ST_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside {
  SSM_st_Req_Current_Location_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside,
  SSM_st_Switch_Autorized_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside,
  SSM_st_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside,
  SSM_st_Switch_Mode_Confirmed_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside,
  SSM_st_Ack_Not_Received_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside
} SSM_ST_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside;
/* Procedures::Procedure_Start_L1_L2_L3/SM_Start_L1_L2_L3: */
typedef enum kcg_tag_SSM_TR_SM_Start_L1_L2_L3 {
  SSM_TR_no_trans_SM_Start_L1_L2_L3,
  SSM_TR_Waiting_Driver_Starting_Command_Level_1_1_1_Waiting_Driver_Starting_Command_SM_Start_L1_L2_L3,
  _249_SSM_TR_Waiting_Driver_Starting_Command_Level_2_3_2_1_Waiting_Driver_Starting_Command_SM_Start_L1_L2_L3,
  SSM_TR_Level_1_SR_Mode_1_Level_1_SM_Start_L1_L2_L3,
  SSM_TR_Level_2_3_Level_1_1_Level_2_3_SM_Start_L1_L2_L3,
  SSM_TR_Level_2_3_FS_Mode_2_Level_2_3_SM_Start_L1_L2_L3,
  SSM_TR_Level_2_3_Wait_For_OS_3_Level_2_3_SM_Start_L1_L2_L3,
  SSM_TR_Level_2_3_Wait_For_SH_4_Level_2_3_SM_Start_L1_L2_L3,
  SSM_TR_Level_2_3_Wait_For_LS_5_Level_2_3_SM_Start_L1_L2_L3,
  SSM_TR_Wait_For_OS_OS_Mode_1_Wait_For_OS_SM_Start_L1_L2_L3,
  SSM_TR_Wait_For_SH_SH_Mode_1_Wait_For_SH_SM_Start_L1_L2_L3,
  SSM_TR_Wait_For_LS_LS_Mode_1_Wait_For_LS_SM_Start_L1_L2_L3
} SSM_TR_SM_Start_L1_L2_L3;
/* Procedures::Procedure_Start_L1_L2_L3/SM_Start_L1_L2_L3: */
typedef enum kcg_tag_SSM_ST_SM_Start_L1_L2_L3 {
  SSM_st_Waiting_Driver_Starting_Command_SM_Start_L1_L2_L3,
  SSM_st_Level_1_SM_Start_L1_L2_L3,
  SSM_st_Level_2_3_SM_Start_L1_L2_L3,
  SSM_st_SR_Mode_SM_Start_L1_L2_L3,
  SSM_st_FS_Mode_SM_Start_L1_L2_L3,
  SSM_st_OS_Mode_SM_Start_L1_L2_L3,
  SSM_st_SH_Mode_SM_Start_L1_L2_L3,
  SSM_st_LS_Mode_SM_Start_L1_L2_L3,
  SSM_st_Wait_For_OS_SM_Start_L1_L2_L3,
  SSM_st_Wait_For_SH_SM_Start_L1_L2_L3,
  SSM_st_Wait_For_LS_SM_Start_L1_L2_L3
} SSM_ST_SM_Start_L1_L2_L3;
/* Procedures::Procedure_StartOfMission/SM_StartOfMissionProcedure: */
typedef enum kcg_tag_SSM_TR_SM_StartOfMissionProcedure {
  SSM_TR_no_trans_SM_StartOfMissionProcedure,
  SSM_TR_Procedure_Off_Procedure_On_1_Procedure_Off_SM_StartOfMissionProcedure,
  SSM_TR_Procedure_On_EB_Requested_1_Procedure_On_SM_StartOfMissionProcedure,
  SSM_TR_Procedure_On_Procedure_Off_2_Procedure_On_SM_StartOfMissionProcedure,
  SSM_TR_EB_Requested_Procedure_Off_1_EB_Requested_SM_StartOfMissionProcedure
} SSM_TR_SM_StartOfMissionProcedure;
/* Procedures::Procedure_StartOfMission/SM_StartOfMissionProcedure: */
typedef enum kcg_tag_SSM_ST_SM_StartOfMissionProcedure {
  SSM_st_Procedure_Off_SM_StartOfMissionProcedure,
  SSM_st_Procedure_On_SM_StartOfMissionProcedure,
  SSM_st_EB_Requested_SM_StartOfMissionProcedure
} SSM_ST_SM_StartOfMissionProcedure;
/* Procedures::Procedure_StartOfMission/SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
typedef enum kcg_tag_SSM_TR_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure {
  SSM_TR_no_trans_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure,
  SSM_TR_Waiting_Driver_Command_NL_Mode_1_Waiting_Driver_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure,
  SSM_TR_Waiting_Driver_Command_Procedure_SH_Initiated_By_Driver_2_Waiting_Driver_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure,
  SSM_TR_Waiting_Driver_Command_Waiting_Driver_Strating_Command_3_Waiting_Driver_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure,
  SSM_TR_Waiting_Driver_Strating_Command_Waiting_Driver_Selection_1_Waiting_Driver_Strating_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure,
  _250_SSM_TR_Waiting_Driver_Strating_Command_Level_0_1_2_Waiting_Driver_Strating_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure,
  _251_SSM_TR_Waiting_Driver_Strating_Command_Level_NTC_2_2_Waiting_Driver_Strating_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure,
  SSM_TR_Level_0_UN_Mode_1_Level_0_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure,
  SSM_TR_Level_NTC_SN_Mode_1_Level_NTC_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure
} SSM_TR_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
/* Procedures::Procedure_StartOfMission/SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */
typedef enum kcg_tag_SSM_ST_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure {
  SSM_st_Waiting_Driver_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure,
  SSM_st_NL_Mode_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure,
  SSM_st_Procedure_SH_Initiated_By_Driver_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure,
  SSM_st_Waiting_Driver_Strating_Command_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure,
  SSM_st_Level_0_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure,
  SSM_st_Level_NTC_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure,
  SSM_st_SN_Mode_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure,
  SSM_st_UN_Mode_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure,
  SSM_st_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure
} SSM_ST_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
/* Procedures::Procedure_Train_Trip/SM_Train_Trip: */
typedef enum kcg_tag_SSM_TR_SM_Train_Trip {
  SSM_TR_no_trans_SM_Train_Trip,
  SSM_TR_Train_Trip_procedure_off_Trip_Mode_1_Train_Trip_procedure_off_SM_Train_Trip,
  SSM_TR_Trip_Mode_Trip_Mode_Waiting_Ack_1_Trip_Mode_SM_Train_Trip,
  SSM_TR_Trip_Mode_Waiting_Ack_Post_Trip_Mode_1_1_Trip_Mode_Waiting_Ack_SM_Train_Trip,
  SSM_TR_Trip_Mode_Waiting_Ack_SH_Mode_2_1_Trip_Mode_Waiting_Ack_SM_Train_Trip,
  SSM_TR_Trip_Mode_Waiting_Ack_UN_Mode_1_3_1_Trip_Mode_Waiting_Ack_SM_Train_Trip,
  SSM_TR_Trip_Mode_Waiting_Ack_SN_Mode_2_3_1_Trip_Mode_Waiting_Ack_SM_Train_Trip,
  SSM_TR_Post_Trip_Mode_Waiting_Driver_Selection_1_Post_Trip_Mode_SM_Train_Trip,
  SSM_TR_Post_Trip_Mode_Wait_RBC_Ack_2_Post_Trip_Mode_SM_Train_Trip,
  SSM_TR_Post_Trip_Mode_Procedure_SH_Initiated_By_Driver_3_Post_Trip_Mode_SM_Train_Trip,
  SSM_TR_Waiting_Driver_Selection_Procedure_SH_Initiated_By_Driver_1_Waiting_Driver_Selection_SM_Train_Trip,
  SSM_TR_Wait_RBC_Ack_Waiting_Driver_Selection_1_Wait_RBC_Ack_SM_Train_Trip
} SSM_TR_SM_Train_Trip;
/* Procedures::Procedure_Train_Trip/SM_Train_Trip: */
typedef enum kcg_tag_SSM_ST_SM_Train_Trip {
  SSM_st_Train_Trip_procedure_off_SM_Train_Trip,
  SSM_st_Trip_Mode_SM_Train_Trip,
  SSM_st_Trip_Mode_Waiting_Ack_SM_Train_Trip,
  SSM_st_Post_Trip_Mode_SM_Train_Trip,
  SSM_st_SH_Mode_SM_Train_Trip,
  SSM_st_UN_Mode_SM_Train_Trip,
  SSM_st_SN_Mode_SM_Train_Trip,
  _253_SSM_st_Waiting_Driver_Selection_SM_Train_Trip,
  SSM_st_Wait_RBC_Ack_SM_Train_Trip,
  _252_SSM_st_Procedure_SH_Initiated_By_Driver_SM_Train_Trip
} SSM_ST_SM_Train_Trip;
/* Procedures::Procedure_Train_Reversing/SM_Train_Reversing: */
typedef enum kcg_tag_SSM_TR_SM_Train_Reversing {
  SSM_TR_no_trans_SM_Train_Reversing,
  SSM_TR_Reversing_Procedure_Off_Reversing_Data_Available_1_Reversing_Procedure_Off_SM_Train_Reversing,
  SSM_TR_Reversing_Condition_RV_Mode_1_Reversing_Condition_SM_Train_Reversing,
  SSM_TR_Reversing_Condition_Reversing_Procedure_Off_2_Reversing_Condition_SM_Train_Reversing,
  _255_SSM_TR_Reversing_Condition_Reversing_Data_Available_3_Reversing_Condition_SM_Train_Reversing,
  SSM_TR_Reversing_Data_Available_Reversing_Condition_1_Reversing_Data_Available_SM_Train_Reversing,
  _254_SSM_TR_Reversing_Data_Available_Reversing_Procedure_Off_2_Reversing_Data_Available_SM_Train_Reversing
} SSM_TR_SM_Train_Reversing;
/* Procedures::Procedure_Train_Reversing/SM_Train_Reversing: */
typedef enum kcg_tag_SSM_ST_SM_Train_Reversing {
  SSM_st_Reversing_Procedure_Off_SM_Train_Reversing,
  SSM_st_Reversing_Condition_SM_Train_Reversing,
  SSM_st_RV_Mode_SM_Train_Reversing,
  SSM_st_Reversing_Data_Available_SM_Train_Reversing
} SSM_ST_SM_Train_Reversing;
/* OutputToRBC::ExitLevel2or3/SM1: */
typedef enum kcg_tag__216_SSM_TR_SM1 {
  _256_SSM_TR_no_trans_SM1,
  SSM_TR_BeforeChange_State2_1_BeforeChange_SM1,
  SSM_TR_State2_BeforeChange_1_State2_SM1
} _216_SSM_TR_SM1;
/* OutputToRBC::ExitLevel2or3/SM1: */
typedef enum kcg_tag__215_SSM_ST_SM1 {
  SSM_st_BeforeChange_SM1,
  _257_SSM_st_State2_SM1
} _215_SSM_ST_SM1;
/* Acknowledgement::RequestAck/SM1: */
typedef enum kcg_tag__214_SSM_TR_SM1 {
  _258_SSM_TR_no_trans_SM1,
  SSM_TR_Waiting_LaunchRequest_1_Waiting_SM1,
  SSM_TR_LaunchRequest_Waiting_1_LaunchRequest_SM1,
  SSM_TR_LaunchRequest_AckReceived_2_LaunchRequest_SM1,
  SSM_TR_AckReceived_Waiting_1_AckReceived_SM1
} _214_SSM_TR_SM1;
/* Acknowledgement::RequestAck/SM1: */
typedef enum kcg_tag__213_SSM_ST_SM1 {
  SSM_st_Waiting_SM1,
  SSM_st_LaunchRequest_SM1,
  SSM_st_AckReceived_SM1
} _213_SSM_ST_SM1;
/* TA_MA_Request::MA_Request_Supervision/SM1: */
typedef enum kcg_tag__212_SSM_TR_SM1 {
  _259_SSM_TR_no_trans_SM1,
  SSM_TR_init_NoReqPending_1_init_SM1,
  SSM_TR_NoReqPending_ReqPending_1_NoReqPending_SM1,
  SSM_TR_ReqPending_NoReqPending_1_ReqPending_SM1
} _212_SSM_TR_SM1;
/* TA_MA_Request::MA_Request_Supervision/SM1: */
typedef enum kcg_tag__211_SSM_ST_SM1 {
  SSM_st_init_SM1,
  SSM_st_NoReqPending_SM1,
  SSM_st_ReqPending_SM1
} _211_SSM_ST_SM1;
/* MoRC_Pck::Utils::countDownTimer/TimerStatus_SM: */
typedef enum kcg_tag_SSM_TR_TimerStatus_SM {
  SSM_TR_no_trans_TimerStatus_SM,
  SSM_TR_Stopped_Stopped_1_Stopped_TimerStatus_SM,
  SSM_TR_Stopped_Counting_2_Stopped_TimerStatus_SM,
  SSM_TR_Counting_Stopped_1_Counting_TimerStatus_SM,
  SSM_TR_Counting_Counting_2_Counting_TimerStatus_SM,
  SSM_TR_Counting_Counting_3_Counting_TimerStatus_SM,
  SSM_TR_Counting_Expired_4_Counting_TimerStatus_SM,
  SSM_TR_Expired_Stopped_1_Expired_TimerStatus_SM,
  SSM_TR_Expired_Counting_2_Expired_TimerStatus_SM
} SSM_TR_TimerStatus_SM;
/* MoRC_Pck::Utils::countDownTimer/TimerStatus_SM: */
typedef enum kcg_tag_SSM_ST_TimerStatus_SM {
  SSM_st_Stopped_TimerStatus_SM,
  SSM_st_Counting_TimerStatus_SM,
  SSM_st_Expired_TimerStatus_SM
} SSM_ST_TimerStatus_SM;
/* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2/repeat_SM: */
typedef enum kcg_tag_SSM_TR_repeat_SM {
  SSM_TR_no_trans_repeat_SM,
  SSM_TR_rep_inactive_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_1_rep_inactive_repeat_SM,
  _262_SSM_TR_rep_inactive_rep_repeatUntilStopConditionMet_2_rep_inactive_repeat_SM,
  SSM_TR_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_rep_inactive_1_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM,
  _261_SSM_TR_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_2_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM,
  SSM_TR_rep_repeatUntilStopConditionMet_rep_inactive_1_rep_repeatUntilStopConditionMet_repeat_SM,
  _260_SSM_TR_rep_repeatUntilStopConditionMet_rep_repeatUntilStopConditionMet_2_rep_repeatUntilStopConditionMet_repeat_SM
} SSM_TR_repeat_SM;
/* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2/repeat_SM: */
typedef enum kcg_tag_SSM_ST_repeat_SM {
  SSM_st_rep_inactive_repeat_SM,
  SSM_st_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM,
  SSM_st_rep_repeatUntilStopConditionMet_repeat_SM
} SSM_ST_repeat_SM;
/* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2/Register_SM: */
typedef enum kcg_tag_SSM_TR_Register_SM {
  SSM_TR_no_trans_Register_SM,
  SSM_TR_Unregistered_Registering_1_Unregistered_Register_SM,
  _263_SSM_TR_Unregistered_Registering_2_Unregistered_Register_SM,
  SSM_TR_Unregistered_Registered_3_Unregistered_Register_SM,
  SSM_TR_Registering_Reregistering_1_Registering_Register_SM,
  SSM_TR_Registering_Registered_2_Registering_Register_SM,
  SSM_TR_Registered_Reregistering_1_Registered_Register_SM,
  SSM_TR_Registered_Registering_2_Registered_Register_SM,
  SSM_TR_Registered_Unregistered_3_Registered_Register_SM,
  SSM_TR_Reregistering_Registering_1_Reregistering_Register_SM
} SSM_TR_Register_SM;
/* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2/Register_SM: */
typedef enum kcg_tag_SSM_ST_Register_SM {
  SSM_st_Unregistered_Register_SM,
  SSM_st_Registering_Register_SM,
  SSM_st_Registered_Register_SM,
  SSM_st_Reregistering_Register_SM
} SSM_ST_Register_SM;
/* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2/SM1: */
typedef enum kcg_tag__210_SSM_TR_SM1 {
  _264_SSM_TR_no_trans_SM1,
  SSM_TR_idle_waitForSafeRadioConnectionSetUp_1_idle_SM1,
  SSM_TR_waitForSafeRadioConnectionSetUp_waitForSystemVersion_1_waitForSafeRadioConnectionSetUp_SM1,
  _266_SSM_TR_waitForSafeRadioConnectionSetUp_idle_2_waitForSafeRadioConnectionSetUp_SM1,
  SSM_TR_waitForSystemVersion_idle_1_waitForSystemVersion_SM1,
  SSM_TR_waitForSystemVersion_sessionEstablished_2_waitForSystemVersion_SM1,
  _265_SSM_TR_waitForSystemVersion_idle_3_waitForSystemVersion_SM1,
  SSM_TR_sessionEstablished_idle_1_sessionEstablished_SM1
} _210_SSM_TR_SM1;
/* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2/SM1: */
typedef enum kcg_tag__209_SSM_ST_SM1 {
  SSM_st_idle_SM1,
  SSM_st_waitForSafeRadioConnectionSetUp_SM1,
  SSM_st_waitForSystemVersion_SM1,
  SSM_st_sessionEstablished_SM1
} _209_SSM_ST_SM1;
/* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2/SM1: */
typedef enum kcg_tag__208_SSM_TR_SM1 {
  _270_SSM_TR_no_trans_SM1,
  SSM_TR_idle_sessionEstablished_1_idle_SM1,
  _269_SSM_TR_sessionEstablished_idle_1_sessionEstablished_SM1
} _208_SSM_TR_SM1;
/* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2/SM1: */
typedef enum kcg_tag__207_SSM_ST_SM1 {
  _268_SSM_st_idle_SM1,
  _267_SSM_st_sessionEstablished_SM1
} _207_SSM_ST_SM1;
/* MoRC_Pck::Subfunc_Pkg::establishSession_v2/SM1: */
typedef enum kcg_tag__206_SSM_TR_SM1 {
  _272_SSM_TR_no_trans_SM1,
  SSM_TR_idle_establishingByOBU_1_idle_SM1,
  SSM_TR_idle_establishingByRBC_2_idle_SM1,
  SSM_TR_establishingByOBU_idle_1_establishingByOBU_SM1,
  SSM_TR_establishingByRBC_idle_1_establishingByRBC_SM1
} _206_SSM_TR_SM1;
/* MoRC_Pck::Subfunc_Pkg::establishSession_v2/SM1: */
typedef enum kcg_tag__205_SSM_ST_SM1 {
  _271_SSM_st_idle_SM1,
  SSM_st_establishingByOBU_SM1,
  SSM_st_establishingByRBC_SM1
} _205_SSM_ST_SM1;
/* MoRC_Pck::Subfunc_Pkg::terminateSession_v2/SM1: */
typedef enum kcg_tag__204_SSM_TR_SM1 {
  _274_SSM_TR_no_trans_SM1,
  SSM_TR_idle_waitForAckTerminationOfCommunicationSessionReceived_1_idle_SM1,
  SSM_TR_waitForAckTerminationOfCommunicationSessionReceived_idle_1_waitForAckTerminationOfCommunicationSessionReceived_SM1,
  _275_SSM_TR_waitForAckTerminationOfCommunicationSessionReceived_terminated_2_waitForAckTerminationOfCommunicationSessionReceived_SM1,
  SSM_TR_terminated_idle_1_terminated_SM1
} _204_SSM_TR_SM1;
/* MoRC_Pck::Subfunc_Pkg::terminateSession_v2/SM1: */
typedef enum kcg_tag__203_SSM_ST_SM1 {
  _273_SSM_st_idle_SM1,
  SSM_st_waitForAckTerminationOfCommunicationSessionReceived_SM1,
  SSM_st_terminated_SM1
} _203_SSM_ST_SM1;
/* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2/Session_SM: */
typedef enum kcg_tag_SSM_TR_Session_SM {
  SSM_TR_no_trans_Session_SM,
  SSM_TR_sessionTerminated_establishingSession_1_sessionTerminated_Session_SM,
  SSM_TR_establishingSession_terminatingSession_1_establishingSession_Session_SM,
  SSM_TR_establishingSession_maintainingSession_2_establishingSession_Session_SM,
  SSM_TR_maintainingSession_terminatingSession_1_maintainingSession_Session_SM,
  SSM_TR_terminatingSession_sessionTerminated_1_terminatingSession_Session_SM
} SSM_TR_Session_SM;
/* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2/Session_SM: */
typedef enum kcg_tag_SSM_ST_Session_SM {
  SSM_st_sessionTerminated_Session_SM,
  SSM_st_establishingSession_Session_SM,
  SSM_st_maintainingSession_Session_SM,
  SSM_st_terminatingSession_Session_SM
} SSM_ST_Session_SM;
/* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2/TrainExitedFromRBCArea_SM: */
typedef enum kcg_tag_SSM_TR_TrainExitedFromRBCArea_SM {
  SSM_TR_no_trans_TrainExitedFromRBCArea_SM,
  SSM_TR_Idle_Idle_1_Idle_TrainExitedFromRBCArea_SM,
  SSM_TR_Idle_WaitForOrderToTerminateTheSession_2_Idle_TrainExitedFromRBCArea_SM,
  SSM_TR_WaitForOrderToTerminateTheSession_Idle_1_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM,
  _276_SSM_TR_WaitForOrderToTerminateTheSession_Idle_2_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM
} SSM_TR_TrainExitedFromRBCArea_SM;
/* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2/TrainExitedFromRBCArea_SM: */
typedef enum kcg_tag_SSM_ST_TrainExitedFromRBCArea_SM {
  SSM_st_Idle_TrainExitedFromRBCArea_SM,
  SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM
} SSM_ST_TrainExitedFromRBCArea_SM;
/* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2/connectionStatus_SM: */
typedef enum kcg_tag_SSM_TR_connectionStatus_SM {
  SSM_TR_no_trans_connectionStatus_SM,
  SSM_TR_NoConnection_ConnectionUp_1_NoConnection_connectionStatus_SM,
  SSM_TR_NoConnection_ConnectionLost_SetupFailed_2_NoConnection_connectionStatus_SM,
  SSM_TR_ConnectionLost_SetupFailed_NoConnection_1_ConnectionLost_SetupFailed_connectionStatus_SM,
  _277_SSM_TR_ConnectionLost_SetupFailed_ConnectionUp_2_ConnectionLost_SetupFailed_connectionStatus_SM,
  SSM_TR_ConnectionUp_NoConnection_1_ConnectionUp_connectionStatus_SM,
  SSM_TR_ConnectionUp_ConnectionLost_SetupFailed_2_ConnectionUp_connectionStatus_SM
} SSM_TR_connectionStatus_SM;
/* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2/connectionStatus_SM: */
typedef enum kcg_tag_SSM_ST_connectionStatus_SM {
  SSM_st_NoConnection_connectionStatus_SM,
  SSM_st_ConnectionLost_SetupFailed_connectionStatus_SM,
  SSM_st_ConnectionUp_connectionStatus_SM
} SSM_ST_connectionStatus_SM;
/* Handover_Pkg::handoverUtils_Pkg::handOverSequencer/IfBlock1:else:handOver_with_1_Session_SM: */
typedef enum kcg_tag_SSM_TR_handOver_with_1_Session_SM_else_IfBlock1 {
  SSM_TR_no_trans_handOver_with_1_Session_SM_else_IfBlock1,
  _305_SSM_TR_WaitForTransitionOrder_WaitForMaxSafeFrontEndPassing_1_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1,
  _303_SSM_TR_WaitForMaxSafeFrontEndPassing_WaitForTransitionOrder_1_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1,
  _304_SSM_TR_WaitForMaxSafeFrontEndPassing_WaitForMinSafeRearEndPassing_2_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1,
  _301_SSM_TR_WaitForMinSafeRearEndPassing_WaitForTransitionOrder_1_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1,
  _302_SSM_TR_WaitForMinSafeRearEndPassing_WaitForTerminationOrderFromHandingOverRBC_2_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1,
  _299_SSM_TR_WaitForSessionWithAcceptingRBCEstablished_WaitForTransitionOrder_1_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1,
  _300_SSM_TR_WaitForSessionWithAcceptingRBCEstablished_WaitForTransitionOrder_2_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1,
  _297_SSM_TR_WaitForTerminationOrderFromHandingOverRBC_WaitForTransitionOrder_1_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1,
  _298_SSM_TR_WaitForTerminationOrderFromHandingOverRBC_WaitForHandingOverRBCTerminated_2_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1,
  _295_SSM_TR_WaitForHandingOverRBCTerminated_WaitForTransitionOrder_1_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1,
  _296_SSM_TR_WaitForHandingOverRBCTerminated_RegisterAcceptingRBC_2_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1,
  SSM_TR_RegisterAcceptingRBC_WaitForTransitionOrder_1_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1,
  _294_SSM_TR_RegisterAcceptingRBC_WaitForHandingOverRBCRegistered_2_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1,
  _292_SSM_TR_WaitForHandingOverRBCRegistered_WaitForTransitionOrder_1_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1,
  _293_SSM_TR_WaitForHandingOverRBCRegistered_EstablishSessionWithAcceptingRBC_2_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1,
  SSM_TR_EstablishSessionWithAcceptingRBC_WaitForTransitionOrder_1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1,
  _291_SSM_TR_EstablishSessionWithAcceptingRBC_WaitForSessionWithAcceptingRBCEstablished_2_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1
} SSM_TR_handOver_with_1_Session_SM_else_IfBlock1;
/* Handover_Pkg::handoverUtils_Pkg::handOverSequencer/IfBlock1:else:handOver_with_1_Session_SM: */
typedef enum kcg_tag_SSM_ST_handOver_with_1_Session_SM_else_IfBlock1 {
  _279_SSM_st_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1,
  _278_SSM_st_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1,
  _280_SSM_st_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1,
  _283_SSM_st_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1,
  _282_SSM_st_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1,
  _281_SSM_st_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1,
  SSM_st_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1,
  _284_SSM_st_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1,
  SSM_st_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1
} SSM_ST_handOver_with_1_Session_SM_else_IfBlock1;
/* Handover_Pkg::handoverUtils_Pkg::handOverSequencer/IfBlock1:then:handOver_with_2_Sessions_SM: */
typedef enum kcg_tag_SSM_TR_handOver_with_2_Sessions_SM_then_IfBlock1 {
  SSM_TR_no_trans_handOver_with_2_Sessions_SM_then_IfBlock1,
  SSM_TR_WaitForTransitionOrder_WaitForSessionWithAcceptingRBCEstablished_1_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1,
  SSM_TR_WaitForMaxSafeFrontEndPassing_WaitForTransitionOrder_1_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1,
  _290_SSM_TR_WaitForMaxSafeFrontEndPassing_WaitForMinSafeRearEndPassing_2_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1,
  SSM_TR_WaitForMinSafeRearEndPassing_WaitForTransitionOrder_1_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1,
  _289_SSM_TR_WaitForMinSafeRearEndPassing_WaitForTerminationOrderFromHandingOverRBC_2_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1,
  SSM_TR_WaitForSessionWithAcceptingRBCEstablished_WaitForMaxSafeFrontEndPassing_1_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1,
  SSM_TR_WaitForTerminationOrderFromHandingOverRBC_WaitForTransitionOrder_1_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1,
  _288_SSM_TR_WaitForTerminationOrderFromHandingOverRBC_WaitForHandingOverRBCTerminated_2_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1,
  SSM_TR_WaitForHandingOverRBCTerminated_WaitForTransitionOrder_1_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1,
  _287_SSM_TR_WaitForHandingOverRBCTerminated_ReregisterHandingOverRBC_2_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1,
  SSM_TR_ReregisterHandingOverRBC_WaitForTransitionOrder_1_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1,
  _286_SSM_TR_ReregisterHandingOverRBC_WaitForHandingOverRBCRegistered_2_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1,
  SSM_TR_WaitForHandingOverRBCRegistered_WaitForTransitionOrder_1_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1,
  _285_SSM_TR_WaitForHandingOverRBCRegistered_WaitForTransitionOrder_2_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1
} SSM_TR_handOver_with_2_Sessions_SM_then_IfBlock1;
/* Handover_Pkg::handoverUtils_Pkg::handOverSequencer/IfBlock1:then:handOver_with_2_Sessions_SM: */
typedef enum kcg_tag_SSM_ST_handOver_with_2_Sessions_SM_then_IfBlock1 {
  SSM_st_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1,
  SSM_st_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1,
  SSM_st_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1,
  SSM_st_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1,
  SSM_st_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1,
  SSM_st_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1,
  SSM_st_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1,
  SSM_st_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1
} SSM_ST_handOver_with_2_Sessions_SM_then_IfBlock1;
/* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch/SM1: */
typedef enum kcg_tag__202_SSM_TR_SM1 {
  _306_SSM_TR_no_trans_SM1,
  SSM_TR_mobile_1_mobile_2_1_mobile_1_SM1,
  SSM_TR_mobile_2_mobile_1_1_mobile_2_SM1
} _202_SSM_TR_SM1;
/* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch/SM1: */
typedef enum kcg_tag__201_SSM_ST_SM1 {
  SSM_st_mobile_1_SM1,
  SSM_st_mobile_2_SM1
} _201_SSM_ST_SM1;
/* RCM_Utils_Pkg::encoders::mergeMsgToBus/SM1: */
typedef enum kcg_tag_SSM_TR_SM1 {
  _307_SSM_TR_no_trans_SM1,
  SSM_TR_notRequested_notRequested_1_notRequested_SM1,
  SSM_TR_notRequested_requested_2_notRequested_SM1,
  SSM_TR_requested_notRequested_1_requested_SM1
} SSM_TR_SM1;
/* RCM_Utils_Pkg::encoders::mergeMsgToBus/SM1: */
typedef enum kcg_tag_SSM_ST_SM1 {
  SSM_st_notRequested_SM1,
  SSM_st_requested_SM1
} SSM_ST_SM1;
/* EVC_MEM_Support_Pkg::Procedure_TRIP/Revoke_Procedure: */
typedef enum kcg_tag_SSM_TR_Revoke_Procedure {
  SSM_TR_no_trans_Revoke_Procedure,
  SSM_TR_no_PostTrip_waitingRBC_Msg18_1_no_PostTrip_Revoke_Procedure,
  SSM_TR_waitingRBC_Msg18_no_PostTrip_1_waitingRBC_Msg18_Revoke_Procedure,
  SSM_TR_waitingRBC_Msg18_waitingDriverRevoke_2_waitingRBC_Msg18_Revoke_Procedure,
  SSM_TR_waitingDriverRevoke_no_PostTrip_1_waitingDriverRevoke_Revoke_Procedure,
  SSM_TR_waitingDriverRevoke_waitingModeChange_2_waitingDriverRevoke_Revoke_Procedure,
  SSM_TR_waitingModeChange_no_PostTrip_1_waitingModeChange_Revoke_Procedure
} SSM_TR_Revoke_Procedure;
/* EVC_MEM_Support_Pkg::Procedure_TRIP/Revoke_Procedure: */
typedef enum kcg_tag_SSM_ST_Revoke_Procedure {
  SSM_st_no_PostTrip_Revoke_Procedure,
  SSM_st_waitingRBC_Msg18_Revoke_Procedure,
  SSM_st_waitingDriverRevoke_Revoke_Procedure,
  SSM_st_waitingModeChange_Revoke_Procedure
} SSM_ST_Revoke_Procedure;
/* ProvidePositionReport_Pkg::BG_Orientation_T/ */
typedef Q_DIRLRBG BG_Orientation_T_ProvidePositionReport_Pkg;

typedef Q_SCALE _195_array[10];

typedef MsgSource_T_Common_Types_Pkg _194_array[30];

typedef Q_DIR _177_array[33];

typedef N_PIG _174_array[8];

typedef Q_SCALE _173_array[33];

typedef M_LEVEL _167_array[7];

typedef Q_DIR _165_array[3];

typedef Q_SCALE _162_array[3];

typedef Q_SCALE _154_array[50];

typedef M_LEVEL _150_array[30];

typedef ModeDecisionTableActionKind_DataDictionary_Pkg _149_array[17];

/* DataDictionary_Pkg::ModeDecisionTableType/ */
typedef _149_array ModeDecisionTableType_DataDictionary_Pkg[256];

typedef Q_DIRTRAIN _140_array[30];

typedef NC_TRAIN _129_array[7];

typedef M_MODE _119_array[30];

typedef LevelDecisionTableActionKind_DataDictionary_Pkg _118_array[5];

/* DataDictionary_Pkg::LevelDecisionTableType/ */
typedef _118_array LevelDecisionTableType_DataDictionary_Pkg[256];

typedef Q_DIR _115_array[7];

typedef Q_SCALE array[7];

/* DATA::Variables::CAST_int_to_DriverIdentfier/,
   DMI_Messages_Bothways_Pkg::driverIdentifier_T/ */
typedef kcg_char driverIdentifier_T_DMI_Messages_Bothways_Pkg[9];

/* DATA::Variables::CAST_int_to_DMI_TEXT/, DMI_Types_Pkg::DMI_TEXT/ */
typedef kcg_char DMI_TEXT_DMI_Types_Pkg[255];

/* TrackAtlasTypes::FromTIU_t/ */
typedef kcg_bool FromTIU_t_TrackAtlasTypes;

/* SDM_Commands_Pkg::EB_command_T/ */
typedef kcg_bool EB_command_T_SDM_Commands_Pkg;

typedef kcg_bool array_bool_100[100];

/* manage_DMI_Output_Pkg::dmiOutputs_T/ */
typedef struct kcg_tag_dmiOutputs_T_manage_DMI_Output_Pkg {
  kcg_bool NO_initrequestSent;
  kcg_bool secondValidationRequested;
} dmiOutputs_T_manage_DMI_Output_Pkg;

/* Level_And_Mode_Types_Pkg::T_AcknoledgementRequest/ */
typedef struct kcg_tag_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg {
  kcg_bool valid;
  M_MODE whichMode;
  kcg_bool SH_Req_RefusedByRBC;
  kcg_bool LevelNeedsAck;
} T_AcknoledgementRequest_Level_And_Mode_Types_Pkg;

/* TIU_Types_Pkg::Brake_command_T/ */
typedef struct kcg_tag_Brake_command_T_TIU_Types_Pkg {
  kcg_bool valid;
  M_brake_signal_command_T_TIU_Types_Pkg m_servicebrake_cm;
  M_brake_signal_command_T_TIU_Types_Pkg m_emergencybrake_cm;
} Brake_command_T_TIU_Types_Pkg;

/* trainData_Types_pkg::trainData_Events_T/ */
typedef struct kcg_tag_trainData_Events_T_trainData_Types_pkg {
  kcg_bool trainStandStill;
  kcg_bool driverRequestModify;
  kcg_bool communicationSessionEstablished;
  kcg_bool safeRadioConnectionLost;
  kcg_bool approachingRBCarea;
  kcg_bool MoRCreadyFlag;
} trainData_Events_T_trainData_Types_pkg;

/* Packet_TrainTypes_Pkg::PT4_ErrorReporting_T/ */
typedef struct kcg_tag_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg {
  kcg_bool valid;
  M_ERROR m_error;
} PT4_ErrorReporting_T_Packet_TrainTypes_Pkg;

typedef kcg_bool array_bool_113[113];

/* TIU_Types_Pkg::Isolation_Status_T/ */
typedef struct kcg_tag_Isolation_Status_T_TIU_Types_Pkg {
  kcg_bool valid;
  M_Isolation_status_T_TIU_Types_Pkg isolation_status;
} Isolation_Status_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::Mode_control_and_train_status_T/ */
typedef struct kcg_tag_Mode_control_and_train_status_T_TIU_Types_Pkg {
  kcg_bool valid;
  M_sleeping_signal_status_T_TIU_Types_Pkg m_sleeping_st;
  M_passiveshunting_signal_status_T_TIU_Types_Pkg m_passiveshunting_st;
  M_nonleading_signal_status_T_TIU_Types_Pkg m_nonleading_st;
  M_cab_signal_status_T_TIU_Types_Pkg m_cab_st;
  M_directioncontroller_signal_status_T_TIU_Types_Pkg m_directioncontroller_st;
  M_trainintegrity_signal_status_T_TIU_Types_Pkg m_trainintegrity_st;
  M_traction_signal_status_T_TIU_Types_Pkg m_traction_st;
} Mode_control_and_train_status_T_TIU_Types_Pkg;

/* Level_And_Mode_Types_Pkg::T_Data_To_DMI/ */
typedef struct kcg_tag_T_Data_To_DMI_Level_And_Mode_Types_Pkg {
  kcg_bool Ack_LS;
  kcg_bool Ack_OS;
  kcg_bool Ack_RV;
  kcg_bool Ack_SH;
  kcg_bool Ack_SN;
  kcg_bool Ack_SR;
  kcg_bool Ack_TR;
  kcg_bool Ack_UN;
  kcg_bool SH_Refused_By_RBC;
} T_Data_To_DMI_Level_And_Mode_Types_Pkg;

/* Common_Types_Pkg::RadioMetadata_T/ */
typedef struct kcg_tag_RadioMetadata_T_Common_Types_Pkg {
  kcg_bool t_train_reference;
  kcg_bool nid_em;
  kcg_bool q_scale;
  kcg_bool d_sr;
  kcg_bool t_sh_rqst;
  kcg_bool d_ref;
  kcg_bool q_dir;
  kcg_bool d_emergencystop;
  kcg_bool m_version;
} RadioMetadata_T_Common_Types_Pkg;

/* RCM_MsgTypes_Pkg::msgToTrackTriggers_T/ */
typedef struct kcg_tag_msgToTrackTriggers_T_RCM_MsgTypes_Pkg {
  kcg_bool m155_initiationOfACommunicationSession;
  kcg_bool m156_terminationOfACommunicationSession;
  kcg_bool m159_sessionEstablished;
  kcg_bool m154_noCompatibleVersionSupported;
} msgToTrackTriggers_T_RCM_MsgTypes_Pkg;

/* Level_And_Mode_Types_Pkg::T_Data_To_BG_Management/ */
typedef struct kcg_tag_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg {
  kcg_bool EoM_Procedure_req;
  kcg_bool Clean_BG_List_SH_Area;
  kcg_bool MA_Req;
  kcg_bool Req_for_SH_from_Driver;
  kcg_bool Connection_to_RBC_req;
  kcg_bool Position_Repport_Needed;
} T_Data_To_BG_Management_Level_And_Mode_Types_Pkg;

/* Level_And_Mode_Types_Pkg::T_Data_From_DMI/ */
typedef struct kcg_tag_T_Data_From_DMI_Level_And_Mode_Types_Pkg {
  kcg_bool Ack_LS;
  kcg_bool Ack_OS;
  kcg_bool Ack_RV;
  kcg_bool Ack_SH;
  kcg_bool Ack_SN;
  kcg_bool Ack_SR;
  kcg_bool Ack_TR;
  kcg_bool Ack_UN;
  kcg_bool Req_Exit_SH;
  kcg_bool Req_NL;
  kcg_bool Req_Override;
  kcg_bool Req_SH;
  kcg_bool Req_Start;
  kcg_bool ETCS_Isolated;
} T_Data_From_DMI_Level_And_Mode_Types_Pkg;

/* DMI_Types_Pkg::DMI_Available_Menu_T/ */
typedef struct kcg_tag_DMI_Available_Menu_T_DMI_Types_Pkg {
  kcg_bool Menu_button_start_of_mission;
  kcg_bool Menu_button_shunting;
  kcg_bool Menu_button_shunting_exit;
  kcg_bool Menu_button_non_leading;
  kcg_bool Menu_button_exit_non_leading;
  kcg_bool Menu_button_maintain_shunting;
  kcg_bool Menu_button_driver_ID;
  kcg_bool Menu_button_train_running_number;
  kcg_bool Menu_button_ETCS_level;
  kcg_bool Menu_button_train_data_modification;
  kcg_bool Menu_button_train_data_view;
  kcg_bool Menu_button_staff_responsible_data;
  kcg_bool Menu_button_language_selection;
  kcg_bool Menu_button_override_EOA;
  kcg_bool Menu_button_override_route_suitability;
  kcg_bool Menu_button_adhesion_factor;
  kcg_bool Menu_button_system_version;
  kcg_bool Menu_button_volume;
  kcg_bool Menu_button_luminance;
  kcg_bool Menu_button_train_integrity;
  kcg_bool Menu_button_isolation;
  kcg_bool Show_hourglass;
  kcg_bool Menu_button_use_short_number;
  kcg_bool Menu_button_enter_RBC_data;
  kcg_bool Menu_button_radio_network_ID;
  kcg_bool Menu_button_contact_last_RBC;
  kcg_bool Button_switch_for_train_data;
  kcg_bool Fix_train_data_entry;
  kcg_bool Menu_button_Set_VBC;
  kcg_bool Menu_button_Remove_VBC;
} DMI_Available_Menu_T_DMI_Types_Pkg;

/* RCM_Session_Types_Pkg::obuEventsAndPhases_T/ */
typedef struct kcg_tag_obuEventsAndPhases_T_RCM_Session_Types_Pkg {
  kcg_bool atPowerUp;
  kcg_bool atPowerDown;
  kcg_bool atStartOfMission;
  kcg_bool modeChangeHasToBeReportedToRBC;
  kcg_bool driverHasManuallyChangedLevel_to_2_or_3;
  kcg_bool trainFrontPassesStartOfAnnouncedRadioHole;
  kcg_bool trainFrontReachesEndOfAnnouncedRadioHole;
  kcg_bool trainFrontInsideInAnAnnouncedRadioHole;
  kcg_bool trainFrontPassesALevelTransitionBorder;
  kcg_bool trainFrontPassesA_RBC_RBC_border;
  kcg_bool startOfMissionProcedureCompleted_in_level_2_or_3;
  kcg_bool isPartOfAnOngoingStartOfMissionProcedure;
  kcg_bool startOfMissionProcedureIsGoingOn;
  kcg_bool endOfMissionIsExecuted;
  kcg_bool triggerDecisionThatNoRadioNetworkIDAvailable;
  kcg_bool errorConditionRequiringTerminationDetected;
  kcg_bool trainIsRejectedByRBC_duringStartOfMission;
  kcg_bool driverClosesTheDeskduringStartOfMission;
  kcg_bool trainExitedFromAnRBCArea;
  kcg_bool isInCommunicationSessionWithAnRIU;
  kcg_bool level_1_isLeft;
} obuEventsAndPhases_T_RCM_Session_Types_Pkg;

/* SDM_Commands_Pkg::TSM_triggerCond_T/ */
typedef struct kcg_tag_TSM_triggerCond_T_SDM_Commands_Pkg {
  kcg_bool t1;
  kcg_bool t2;
  kcg_bool t3;
  kcg_bool t4;
  kcg_bool t5;
  kcg_bool t6;
  kcg_bool t7;
  kcg_bool t8;
  kcg_bool t9;
  kcg_bool t10;
  kcg_bool t11;
  kcg_bool t12;
  kcg_bool t13;
  kcg_bool t14;
} TSM_triggerCond_T_SDM_Commands_Pkg;

/* CalcBrakingCurves_Pkg::internalOperators::popLeadingArc/,
   CalcBrakingCurves_types::ParabolaCurveValid_T/,
   CalcBrakingCurves_types::makeEmptyParabolaCurve/ */
typedef kcg_bool ParabolaCurveValid_T_CalcBrakingCurves_types[114];

/* Level_And_Mode_Types_Pkg::T_Data_From_Speed_Supervision/ */
typedef struct kcg_tag_T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg {
  kcg_bool Estim_front_End_overpass_SR_Dist;
  kcg_bool Estim_Front_End_Rear_SSP;
  kcg_bool Override_Function_Active;
  kcg_bool EOA_Antenna_Overpass;
  kcg_bool EOA_Front_End;
  kcg_bool Train_Speed_Under_Overide_Limit;
} T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg;

/* TIU_Types_Pkg::TIU_trainStatus_T/ */
typedef struct kcg_tag_TIU_trainStatus_T_TIU_Types_Pkg {
  kcg_bool valid;
  kcg_bool deskOpen;
  cab_ID_T_TIU_Types_Pkg ownCab;
  cab_ID_T_TIU_Types_Pkg activeCab;
} TIU_trainStatus_T_TIU_Types_Pkg;

typedef kcg_bool array_bool_1[1];

/* trainData_Types_pkg::trainData_Trigger_T/ */
typedef struct kcg_tag_trainData_Trigger_T_trainData_Types_pkg {
  kcg_bool brakeTrigger;
  kcg_bool driverRequestModify;
  kcg_bool shortenLocationBasedInformation;
  kcg_bool deleteMA;
  kcg_bool trainLengthIncreased;
} trainData_Trigger_T_trainData_Types_pkg;

/* TIU_Types_Pkg::TIU_commandStatus_T/ */
typedef struct kcg_tag_TIU_commandStatus_T_TIU_Types_Pkg {
  kcg_bool valid;
  kcg_bool emergencyBrakeActive;
  kcg_bool isolationStatus;
} TIU_commandStatus_T_TIU_Types_Pkg;

/* ProvidePositionReport_Pkg::RBC_Communication_T/ */
typedef struct kcg_tag_RBC_Communication_T_ProvidePositionReport_Pkg {
  kcg_bool newSessionEstablished;
} RBC_Communication_T_ProvidePositionReport_Pkg;

typedef struct kcg_tag_struct_275228 {
  kcg_bool valid;
  Q_DIR q_dir;
} struct_275228;

/* TM::P135_OBU_T/ */
typedef struct_275228 P135_OBU_T_TM;

/* Packet_Types_Pkg::P135_StopShuntingOnDeskOpening_T/ */
typedef struct_275228 P135_StopShuntingOnDeskOpening_T_Packet_Types_Pkg;

/* Level_And_Mode_Types_Pkg::T_Data_From_Track_Mess/ */
typedef struct kcg_tag_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg {
  kcg_bool Mess_15;
  kcg_bool Mess_16;
  kcg_bool Mess_2;
  kcg_bool Mess_27;
  kcg_bool Mess_28;
  kcg_bool Mess_6;
} T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg;

/* Level_And_Mode_Types_Pkg::T_Mode_Level/ */
typedef struct kcg_tag_T_Mode_Level_Level_And_Mode_Types_Pkg {
  kcg_bool compatibleModeAndLevel;
  M_LEVEL level;
  kcg_bool newLevel;
  M_MODE Mode;
  kcg_bool newMode;
} T_Mode_Level_Level_And_Mode_Types_Pkg;

/* SDM_Commands_Pkg::TSM_revokeCond_T/ */
typedef struct kcg_tag_TSM_revokeCond_T_SDM_Commands_Pkg {
  kcg_bool r0;
  kcg_bool r1;
  kcg_bool r2;
  kcg_bool r3;
} TSM_revokeCond_T_SDM_Commands_Pkg;

/* TIU_Types_Pkg::Brake_inhibition_command_T/ */
typedef struct kcg_tag_Brake_inhibition_command_T_TIU_Types_Pkg {
  kcg_bool valid;
  M_brake_inhibit_command_T_TIU_Types_Pkg m_regenerativebrake_cm;
  M_eddy_current_brake_inhibition_T_TIU_Types_Pkg m_eddycurrentbrake_cm;
  M_brake_inhibit_command_T_TIU_Types_Pkg m_magneticshoebrake_cm;
} Brake_inhibition_command_T_TIU_Types_Pkg;

/* SDM_Commands_Pkg::CalcTriggerCondForTSM/, SDM_Commands_Pkg::MyArray/ */
typedef kcg_bool MyArray_SDM_Commands_Pkg[14];

/* Level_And_Mode_Types_Pkg::T_ERTMS_capabilities/ */
typedef struct kcg_tag_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg {
  kcg_bool NTC;
  kcg_bool L0;
  kcg_bool L1;
  kcg_bool L2;
  kcg_bool L3;
} T_ERTMS_capabilities_Level_And_Mode_Types_Pkg;

typedef T_ERTMS_capabilities_Level_And_Mode_Types_Pkg _181_array[7];

typedef struct kcg_tag_struct_274867 {
  kcg_bool trackAheadFree;
  kcg_bool driverSelectsStart;
} struct_274867;

/* TA_MA_Request::Driver2MAR_T/ */
typedef struct_274867 Driver2MAR_T_TA_MA_Request;

/* MA_Request::Driver2MAR_T/ */
typedef struct_274867 Driver2MAR_T_MA_Request;

/* Level_And_Mode_Types_Pkg::T_Data_From_Track_MASSPGradient_Available/ */
typedef struct kcg_tag_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg {
  kcg_bool P12_received;
  kcg_bool P15_received;
  kcg_bool P21_received;
  kcg_bool P27_received;
} T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg;

/* TIU_Types_Pkg::Type_I_train_commands_T/ */
typedef struct kcg_tag_Type_I_train_commands_T_TIU_Types_Pkg {
  kcg_bool valid;
  M_pantograph_command_T_TIU_Types_Pkg m_pantograph_cm;
  M_airtightness_command_T_TIU_Types_Pkg m_airtightness_cm;
  M_mainpowerswitch_command_T_TIU_Types_Pkg m_mainpowerswitch_cm;
  M_traction_cutoff_command_T_TIU_Types_Pkg m_traction_cutoff_cm;
} Type_I_train_commands_T_TIU_Types_Pkg;

/* ProvidePositionReport_Pkg::ErrorMessage_T/ */
typedef struct kcg_tag_ErrorMessage_T_ProvidePositionReport_Pkg {
  kcg_bool present;
  M_ERROR errorType;
} ErrorMessage_T_ProvidePositionReport_Pkg;

typedef ErrorMessage_T_ProvidePositionReport_Pkg _138_array[9];

/* TM_baseline2::P027V1_OBU_body_enum_T/ */
typedef struct kcg_tag_P027V1_OBU_body_enum_T_TM_baseline2 {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
} P027V1_OBU_body_enum_T_TM_baseline2;

typedef kcg_bool array_bool_4[4];

/* MoRC_Pck::mobileHWStatus_Type/ */
typedef struct kcg_tag_mobileHWStatus_Type_MoRC_Pck {
  kcg_bool valid;
  mobileHWConnectionStatus_Type_MoRC_Pck connectionStatus;
  kcg_bool settingUpConnectionHasFailed;
  kcg_bool connectionLost;
} mobileHWStatus_Type_MoRC_Pck;

/* Level_And_Mode_Types_Pkg::T_Data_From_STM/ */
typedef struct kcg_tag_T_Data_From_STM_Level_And_Mode_Types_Pkg {
  kcg_bool Interface_To_National_System;
  kcg_bool National_trip_Order;
} T_Data_From_STM_Level_And_Mode_Types_Pkg;

typedef kcg_bool array_bool_256[256];

/* CheckEuroradioMessage::MetadataTruthtable_T1/ */
typedef array_bool_256 MetadataTruthtable_T1_CheckEuroradioMessage[46];

typedef MetadataTruthtable_T1_CheckEuroradioMessage array_bool_256_46_30[30];

/* DMI_Types_Pkg::DMI_DriverRequest_T/ */
typedef struct kcg_tag_DMI_DriverRequest_T_DMI_Types_Pkg {
  kcg_bool valid;
  kcg_bool Req_Exit_SH;
  kcg_bool Req_NL;
  kcg_bool Req_Override;
  kcg_bool Req_SH;
  kcg_bool Req_Start;
  kcg_bool ETCS_Isolated;
} DMI_DriverRequest_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_DriverAck_T/ */
typedef struct kcg_tag_DMI_DriverAck_T_DMI_Types_Pkg {
  kcg_bool valid;
  M_MODE whichMode;
  kcg_bool acknowledgement;
} DMI_DriverAck_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_To_Modes_T/ */
typedef struct kcg_tag_DMI_To_Modes_T_DMI_Types_Pkg {
  kcg_bool valid;
  DMI_DriverAck_T_DMI_Types_Pkg DriverAck;
  DMI_DriverRequest_T_DMI_Types_Pkg DriverRequest;
  kcg_bool LevelAck;
} DMI_To_Modes_T_DMI_Types_Pkg;

typedef kcg_bool array_bool_6[6];

/* Packet_Types_Pkg::P137_StopIfInStaffResponsible_T/ */
typedef struct kcg_tag_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SRSTOP q_srstop;
} P137_StopIfInStaffResponsible_T_Packet_Types_Pkg;

/* RCM_Session_Types_Pkg::safeRadioConnectionIndication_T/ */
typedef struct kcg_tag_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg {
  kcg_bool valid;
  safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg indicator;
} safeRadioConnectionIndication_T_RCM_Session_Types_Pkg;

/* ProvidePositionReport_Pkg::LocationBasedEvents_T/ */
typedef struct kcg_tag_LocationBasedEvents_T_ProvidePositionReport_Pkg {
  kcg_bool minSafeRearEndPassed;
  kcg_bool maxSafeFrontEndPassed;
} LocationBasedEvents_T_ProvidePositionReport_Pkg;

typedef kcg_bool array_bool_41[41];

typedef kcg_bool array_bool_110[110];

typedef kcg_bool array_bool_7[7];

typedef kcg_bool array_bool_30[30];

/* ProvidePositionReport_Pkg::ModeLevel2PositionReport_T/ */
typedef struct kcg_tag_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg {
  M_MODE currMode;
  M_LEVEL currLevel;
  kcg_bool levelTransitionBorderPassed;
} ModeLevel2PositionReport_T_ProvidePositionReport_Pkg;

/* TIU_Types_Pkg::Brake_status_T/ */
typedef struct kcg_tag_Brake_status_T_TIU_Types_Pkg {
  kcg_bool valid;
  M_brake_status_T_TIU_Types_Pkg m_regenerativebrake_st;
  M_brake_status_T_TIU_Types_Pkg m_eddycurrentbrake_st;
  M_brake_status_T_TIU_Types_Pkg m_magneticshoebrake_st;
  M_brake_status_T_TIU_Types_Pkg m_electropneumaticbrake_st;
  M_brake_status_T_TIU_Types_Pkg m_additionalbrake_st;
} Brake_status_T_TIU_Types_Pkg;

typedef kcg_bool array_bool_8[8];

/* SDM_Types_Pkg::T_internal_real_Type/ */
typedef kcg_float32 T_internal_real_Type_SDM_Types_Pkg;

/* SDMConversionModelPkg::brakeBuildUp/,
   SDMConversionModelPkg::brakePosition/,
   SDMModelPkg::t_BrakeVt_t/ */
typedef T_internal_real_Type_SDM_Types_Pkg t_BrakeVt_t_SDMModelPkg[2];

/* SDMModelPkg::t_Brake_t/ */
typedef struct kcg_tag_t_Brake_t_SDMModelPkg {
  t_BrakeVt_t_SDMModelPkg emergency;
  t_BrakeVt_t_SDMModelPkg service;
} t_Brake_t_SDMModelPkg;

typedef t_Brake_t_SDMModelPkg _135_array[110];

/* TargetLimits_Pkg::T_trac_t/ */
typedef struct kcg_tag_T_trac_t_TargetLimits_Pkg {
  T_internal_real_Type_SDM_Types_Pkg Traction;
  T_internal_real_Type_SDM_Types_Pkg berem;
  T_internal_real_Type_SDM_Types_Pkg bs;
  T_internal_real_Type_SDM_Types_Pkg bs1;
  T_internal_real_Type_SDM_Types_Pkg bs2;
  kcg_bool inhComp;
  T_internal_real_Type_SDM_Types_Pkg indication;
} T_trac_t_TargetLimits_Pkg;

typedef T_trac_t_TargetLimits_Pkg _198_array[110];

typedef T_trac_t_TargetLimits_Pkg _116_array[10];

/* SDM_Types_Pkg::A_internal_real_Type/ */
typedef kcg_float32 A_internal_real_Type_SDM_Types_Pkg;

/* SDM_GradientAcceleration_types::Gradient_real_t/ */
typedef kcg_float32 Gradient_real_t_SDM_GradientAcceleration_types;

/* SDM_Types_Pkg::V_internal_real_Type/ */
typedef kcg_float32 V_internal_real_Type_SDM_Types_Pkg;

/* CalcBrakingCurves_Pkg::Step_Function_operators::getSpeedStepFromSpeed/,
   CalcBrakingCurves_types::ASafeSpeedDefinition_T/,
   SDMConversionModelPkg::InflateABrakeSafe/,
   SDMConversionModelPkg::InflateABrakeService/ */
typedef V_internal_real_Type_SDM_Types_Pkg ASafeSpeedDefinition_T_CalcBrakingCurves_types[14];

/* SDM_Types_Pkg::L_internal_real_Type/ */
typedef kcg_float32 L_internal_real_Type_SDM_Types_Pkg;

typedef L_internal_real_Type_SDM_Types_Pkg array_float32_50[50];

/* TargetManagement_types::MRSP_internal_section_T/ */
typedef struct kcg_tag_MRSP_internal_section_T_TargetManagement_types {
  L_internal_real_Type_SDM_Types_Pkg Loc_Abs;
  V_internal_real_Type_SDM_Types_Pkg MRS;
  kcg_bool valid;
} MRSP_internal_section_T_TargetManagement_types;

/* SDM_Input_Wrappers::SDM_InputWrapper/,
   TargetManagement_types::MRSP_internal_T/ */
typedef MRSP_internal_section_T_TargetManagement_types MRSP_internal_T_TargetManagement_types[110];

typedef MRSP_internal_T_TargetManagement_types _184_array[110];

/* SDM_GradientAcceleration_types::Gradient_section_real_t/ */
typedef struct kcg_tag_Gradient_section_real_t_SDM_GradientAcceleration_types {
  L_internal_real_Type_SDM_Types_Pkg location;
  Gradient_real_t_SDM_GradientAcceleration_types gradient;
  kcg_bool valid;
} Gradient_section_real_t_SDM_GradientAcceleration_types;

/* SDM_GradientAcceleration_types::GradientProfile_real_t/,
   SDM_Input_Wrappers::SDM_InputWrapper/ */
typedef Gradient_section_real_t_SDM_GradientAcceleration_types GradientProfile_real_t_SDM_GradientAcceleration_types[50];

typedef GradientProfile_real_t_SDM_GradientAcceleration_types _192_array[100];

typedef GradientProfile_real_t_SDM_GradientAcceleration_types _114_array[50];

/* SDM_GradientAcceleration_Pkg::TrainLengthCompensation/,
   SDM_GradientAcceleration_types::GradientProfile_real_compensated_t/ */
typedef Gradient_section_real_t_SDM_GradientAcceleration_types GradientProfile_real_compensated_t_SDM_GradientAcceleration_types[100];

/* SDM_GradientAcceleration_types::A_gradient_element_t/ */
typedef struct kcg_tag_A_gradient_element_t_SDM_GradientAcceleration_types {
  L_internal_real_Type_SDM_Types_Pkg position;
  A_internal_real_Type_SDM_Types_Pkg gradient_acceleration;
  kcg_bool valid;
} A_gradient_element_t_SDM_GradientAcceleration_types;

/* SDM_GradientAcceleration_Pkg::AGradient/,
   SDM_GradientAcceleration_Pkg::CalcA_Gradient/,
   SDM_GradientAcceleration_types::A_gradient_t/ */
typedef A_gradient_element_t_SDM_GradientAcceleration_types A_gradient_t_SDM_GradientAcceleration_types[100];

typedef A_gradient_t_SDM_GradientAcceleration_types _193_array[14];

/* TargetLimits_Pkg::bec_t/ */
typedef struct kcg_tag_bec_t_TargetLimits_Pkg {
  V_internal_real_Type_SDM_Types_Pkg v;
  L_internal_real_Type_SDM_Types_Pkg d;
} bec_t_TargetLimits_Pkg;

/* TargetManagement_types::EOA_real_T/ */
typedef struct kcg_tag_EOA_real_T_TargetManagement_types {
  L_internal_real_Type_SDM_Types_Pkg Location;
  V_internal_real_Type_SDM_Types_Pkg TargetSpeed;
} EOA_real_T_TargetManagement_types;

/* TargetManagement_types::Target_real_T/ */
typedef struct kcg_tag_Target_real_T_TargetManagement_types {
  TargetType_T_TargetManagement_types targetType;
  L_internal_real_Type_SDM_Types_Pkg distance;
  V_internal_real_Type_SDM_Types_Pkg speed;
} Target_real_T_TargetManagement_types;

typedef Target_real_T_TargetManagement_types _161_array[109];

typedef Target_real_T_TargetManagement_types _137_array[1];

/* TargetManagement_pkg::internalOperators::extractTargetsFromMRSP/,
   TargetManagement_pkg::internalOperators::removeOverpassedMRSPint/,
   TargetManagement_types::Target_list_MRSP_real_T/ */
typedef Target_real_T_TargetManagement_types Target_list_MRSP_real_T_TargetManagement_types[110];

/* TargetManagement_types::TargetCollection_T/ */
typedef struct kcg_tag_TargetCollection_T_TargetManagement_types {
  kcg_bool updatedTargetList;
  Target_list_MRSP_real_T_TargetManagement_types MRSP_targetList;
  Target_real_T_TargetManagement_types EOA_target;
  Target_real_T_TargetManagement_types SvL_LoA_target;
} TargetCollection_T_TargetManagement_types;

/* TargetManagement_types::MA_section_real_T/ */
typedef struct kcg_tag_MA_section_real_T_TargetManagement_types {
  kcg_bool valid;
  V_internal_real_Type_SDM_Types_Pkg v_main;
  EOA_real_T_TargetManagement_types EOA;
  kcg_bool DP_valid;
  L_internal_real_Type_SDM_Types_Pkg DangerPoint;
  kcg_bool OL_valid;
  L_internal_real_Type_SDM_Types_Pkg Overlap;
  kcg_bool q_calculate_release;
  V_internal_real_Type_SDM_Types_Pkg ReleaseSpeed;
  MA_Level_t_TrackAtlasTypes level;
} MA_section_real_T_TargetManagement_types;

/* CalcBrakingCurves_types::ParabolaArc_T/ */
typedef struct kcg_tag_ParabolaArc_T_CalcBrakingCurves_types {
  L_internal_real_Type_SDM_Types_Pkg distance;
  V_internal_real_Type_SDM_Types_Pkg speed;
  A_internal_real_Type_SDM_Types_Pkg acceleration;
} ParabolaArc_T_CalcBrakingCurves_types;

/* SDM_Types_Pkg::TrainLocations_real_T/ */
typedef struct kcg_tag_TrainLocations_real_T_SDM_Types_Pkg {
  kcg_bool trainPositionIsValid;
  L_internal_real_Type_SDM_Types_Pkg d_est_frontendPos;
  L_internal_real_Type_SDM_Types_Pkg d_minSafeFrontEndPos;
  L_internal_real_Type_SDM_Types_Pkg d_maxSafeFrontEndPos;
  L_internal_real_Type_SDM_Types_Pkg d_LRBG;
  L_internal_real_Type_SDM_Types_Pkg d_accLRBG;
} TrainLocations_real_T_SDM_Types_Pkg;

/* M_NVKRINT/ */
typedef kcg_float32 M_NVKRINT;

/* Packet_Types_Pkg::nvkrint_T/ */
typedef struct kcg_tag_nvkrint_T_Packet_Types_Pkg {
  kcg_bool valid;
  L_NVKRINT l_nvkrint;
  M_NVKRINT m_nvkrint;
} nvkrint_T_Packet_Types_Pkg;

/* Packet_Types_Pkg::nvkrintArray_T/ */
typedef nvkrint_T_Packet_Types_Pkg nvkrintArray_T_Packet_Types_Pkg[7];

/* M_NVKVINT/ */
typedef kcg_float32 M_NVKVINT;

/* A_NVP23/ */
typedef kcg_float32 A_NVP23;

/* A_NVP12/ */
typedef kcg_float32 A_NVP12;

/* M_NVKTINT/ */
typedef kcg_float32 M_NVKTINT;

/* M_NVAVADH/ */
typedef kcg_float32 M_NVAVADH;

/* A_NVMAXREDADH3/ */
typedef kcg_float32 A_NVMAXREDADH3;

/* A_NVMAXREDADH2/ */
typedef kcg_float32 A_NVMAXREDADH2;

/* A_NVMAXREDADH1/ */
typedef kcg_float32 A_NVMAXREDADH1;

typedef kcg_float32 array_float32_100[100];

/* CalcBrakingCurves_types::ASafeDistanceDefinition_T/ */
typedef array_float32_100 ASafeDistanceDefinition_T_CalcBrakingCurves_types;

/* CalcBrakingCurves_types::ASafeRow_T/ */
typedef array_float32_100 ASafeRow_T_CalcBrakingCurves_types;

/* CalcBrakingCurves_types::ASafe_Data_T/,
   SDMConversionModelPkg::InflateABrakeSafe/,
   SDMConversionModelPkg::InflateABrakeService/,
   SDMModelPkg::addGradient/ */
typedef ASafeRow_T_CalcBrakingCurves_types ASafe_Data_T_CalcBrakingCurves_types[14];

/* CalcBrakingCurves_types::ASafe_T/ */
typedef struct kcg_tag_ASafe_T_CalcBrakingCurves_types {
  ASafeDistanceDefinition_T_CalcBrakingCurves_types distance_definition;
  ASafeSpeedDefinition_T_CalcBrakingCurves_types speed_definition;
  ASafe_Data_T_CalcBrakingCurves_types data;
} ASafe_T_CalcBrakingCurves_types;

typedef ASafe_T_CalcBrakingCurves_types _134_array[110];

typedef ASafe_T_CalcBrakingCurves_types _120_array[113];

typedef array_float32_100 array_float32_100_6[6];

typedef array_float32_100 array_float32_100_8[8];

typedef array_float32_100 array_float32_100_1[1];

typedef array_float32_100 array_float32_100_13[13];

typedef kcg_float32 array_float32_8[8];

typedef kcg_float32 array_float32_114[114];

/* CalcBrakingCurves_types::ParabolaCurveAccelerations_T/ */
typedef array_float32_114 ParabolaCurveAccelerations_T_CalcBrakingCurves_types;

/* CalcBrakingCurves_types::ParabolaCurveSpeeds_T/ */
typedef array_float32_114 ParabolaCurveSpeeds_T_CalcBrakingCurves_types;

/* CalcBrakingCurves_types::ParabolaCurveDistances_T/ */
typedef array_float32_114 ParabolaCurveDistances_T_CalcBrakingCurves_types;

/* CalcBrakingCurves_types::ParabolaCurve_T/ */
typedef struct kcg_tag_ParabolaCurve_T_CalcBrakingCurves_types {
  ParabolaCurveDistances_T_CalcBrakingCurves_types distances;
  ParabolaCurveSpeeds_T_CalcBrakingCurves_types speeds;
  ParabolaCurveAccelerations_T_CalcBrakingCurves_types accelerations;
  ParabolaCurveValid_T_CalcBrakingCurves_types valid;
} ParabolaCurve_T_CalcBrakingCurves_types;

typedef ParabolaCurve_T_CalcBrakingCurves_types _185_array[10];

/* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration/,
   CalcBrakingCurves_types::ParabolaCurve_list_MRSP_T/,
   TargetLimits_Pkg::MRSPPreindicationSelector/,
   TargetLimits_Pkg::TargetSelector/ */
typedef ParabolaCurve_T_CalcBrakingCurves_types ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types[110];

/* CalcBrakingCurves_types::CurveCollection_T/ */
typedef struct kcg_tag_CurveCollection_T_CalcBrakingCurves_types {
  ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types MRSP_EBD_curves;
  ParabolaCurve_T_CalcBrakingCurves_types EOA_SBD_curve;
  ParabolaCurve_T_CalcBrakingCurves_types SvL_LoA_EBD_curve;
  ParabolaCurve_T_CalcBrakingCurves_types GUI_curve;
  kcg_bool GUI_curve_enabled;
} CurveCollection_T_CalcBrakingCurves_types;

typedef struct kcg_tag_struct_275282 {
  kcg_bool valid;
  L_NVKRINT l_nvkrint_l;
  kcg_float32 m_nvkrint_l;
} struct_275282;

/* TM::P003_OBU_l_section_enum_T/ */
typedef struct_275282 P003_OBU_l_section_enum_T_TM;

/* TM_baseline2::P203V1_OBU_l_section_enum_T/ */
typedef struct_275282 P203V1_OBU_l_section_enum_T_TM_baseline2;

typedef struct_275282 _158_array[32];

/* TM::P003_OBU_l_sectionlist_enum_T/ */
typedef _158_array P003_OBU_l_sectionlist_enum_T_TM;

/* TM_baseline2::P203V1_OBU_l_sectionlist_enum_T/ */
typedef _158_array P203V1_OBU_l_sectionlist_enum_T_TM_baseline2;

typedef kcg_float32 array_float32_13[13];

typedef kcg_float32 array_float32_10[10];

typedef kcg_float32 array_float32_1[1];

typedef kcg_float32 array_float32_110[110];

typedef kcg_float32 array_float32_113[113];

typedef kcg_float32 array_float32_6[6];

typedef kcg_float32 array_float32_3[3];

/* SDMConversionModelPkg::coeff_BrakeBasic_t/ */
typedef array_float32_3 coeff_BrakeBasic_t_SDMConversionModelPkg;

/* TargetLimits_Pkg::TractionDeltaTriple/ */
typedef array_float32_3 TractionDeltaTriple_TargetLimits_Pkg;

typedef struct kcg_tag_struct_274389 {
  kcg_size idx;
  array_bool_4 items;
} struct_274389;

/* NID_RADIO/ */
typedef kcg_int64 NID_RADIO;

/* MoRC_Pck::time_Type/ */
typedef kcg_int32 time_Type_MoRC_Pck;

/* TM::nid_packet_meta/ */
typedef kcg_int32 nid_packet_meta_TM;

/* D_RBCTR/ */
typedef kcg_int32 D_RBCTR;

/* T_CYCRQST/ */
typedef kcg_int32 T_CYCRQST;

/* T_TIMEOUTRQST/ */
typedef kcg_int32 T_TIMEOUTRQST;

/* T_MAR/ */
typedef kcg_int32 T_MAR;

/* Packet_Types_Pkg::P57_MovementAuthorityRequestParameters_T/ */
typedef struct kcg_tag_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg {
  kcg_bool valid;
  Q_DIR q_dir;
  T_MAR t_mar;
  T_TIMEOUTRQST t_timeoutrqst;
  T_CYCRQST t_cycrqst;
} P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg;

/* TA_MRSP_new::SSP_s_section_t/ */
typedef kcg_int32 SSP_s_section_t_TA_MRSP_new;

/* TA_MRSP_new::SSP_t_section_t/ */
typedef kcg_int32 SSP_t_section_t_TA_MRSP_new;

/* TA_MRSP::SSP_s_section_t/ */
typedef kcg_int32 SSP_s_section_t_TA_MRSP;

/* TA_MRSP::SSP_t_section_t/ */
typedef kcg_int32 SSP_t_section_t_TA_MRSP;

/* V_MAXTRAIN/ */
typedef kcg_int32 V_MAXTRAIN;

/* V_TSR/ */
typedef kcg_int32 V_TSR;

/* L_TSR/ */
typedef kcg_int32 L_TSR;

/* D_TSR/ */
typedef kcg_int32 D_TSR;

/* NID_TSR/ */
typedef kcg_int32 NID_TSR;

/* TM::P065_OBU_T/ */
typedef struct kcg_tag_P065_OBU_T_TM {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  NID_TSR nid_tsr;
  D_TSR d_tsr;
  L_TSR l_tsr;
  Q_FRONT q_front;
  V_TSR v_tsr;
} P065_OBU_T_TM;

/* L_MESSAGE/ */
typedef kcg_int32 L_MESSAGE;

/* NID_XUSER/ */
typedef kcg_int32 NID_XUSER;

/* NID_PRVLRBG/ */
typedef kcg_int32 NID_PRVLRBG;

/* D_LRBG/ */
typedef kcg_int32 D_LRBG;

/* V_TRAIN/ */
typedef kcg_int32 V_TRAIN;

/* L_DOUBTUNDER/ */
typedef kcg_int32 L_DOUBTUNDER;

/* L_TRAININT/ */
typedef kcg_int32 L_TRAININT;

/* L_DOUBTOVER/ */
typedef kcg_int32 L_DOUBTOVER;

/* ProvidePositionReport_Pkg::SystemTime_T/ */
typedef kcg_int32 SystemTime_T_ProvidePositionReport_Pkg;

/* D_LOC/ */
typedef kcg_int32 D_LOC;

/* Packet_Types_Pkg::IterPacket58_T/ */
typedef struct kcg_tag_IterPacket58_T_Packet_Types_Pkg {
  D_LOC d_loc;
  Q_LGTLOC q_lgtloc;
} IterPacket58_T_Packet_Types_Pkg;

/* Packet_Types_Pkg::IterPacket58List_T/, TM_conversions::C_P058_to_legacy_t/ */
typedef IterPacket58_T_Packet_Types_Pkg IterPacket58List_T_Packet_Types_Pkg[2];

/* TM::P058_section_enum_T/ */
typedef struct kcg_tag_P058_section_enum_T_TM {
  kcg_bool valid;
  D_LOC d_loc;
  Q_LGTLOC q_lgtloc;
} P058_section_enum_T_TM;

/* TM::P058_OBU_sectionlist_enum_T/,
   TM_lib_internal::C_P058_unflatten_sections/ */
typedef P058_section_enum_T_TM P058_OBU_sectionlist_enum_T_TM[32];

typedef P058_OBU_sectionlist_enum_T_TM _189_array[2];

/* D_CYCLOC/ */
typedef kcg_int32 D_CYCLOC;

/* T_CYCLOC/ */
typedef kcg_int32 T_CYCLOC;

/* N_AXLE/ */
typedef kcg_int32 N_AXLE;

/* NID_LTRBG/ */
typedef kcg_int32 NID_LTRBG;

/* Packet_TrainTypes_Pkg::PT9_Level23_TransitionInformation_T/ */
typedef struct kcg_tag_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg {
  kcg_bool valid;
  NID_LTRBG transitionInformation;
} PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg;

/* SDM_Types_Pkg::Percentage_T/ */
typedef kcg_int32 Percentage_T_SDM_Types_Pkg;

/* DATA::Area_group_INT_T/ */
typedef kcg_int32 Area_group_INT_T_DATA;

/* DATA::Icon_group_INT_T/ */
typedef kcg_int32 Icon_group_INT_T_DATA;

/* DATA::DMI_m_icon_flashing_freq_INT_T/ */
typedef kcg_int32 DMI_m_icon_flashing_freq_INT_T_DATA;

/* DATA::Icon_control_flag_INT_T/ */
typedef kcg_int32 Icon_control_flag_INT_T_DATA;

/* DATA::DMI_loadingGauge_INT_T/ */
typedef kcg_int32 DMI_loadingGauge_INT_T_DATA;

/* DATA::DMI_airtightSystem_INT_T/ */
typedef kcg_int32 DMI_airtightSystem_INT_T_DATA;

/* DATA::DMI_vMax_id_INT_T/ */
typedef kcg_int32 DMI_vMax_id_INT_T_DATA;

/* DATA::DMI_brakeModel_id_INT_T/ */
typedef kcg_int32 DMI_brakeModel_id_INT_T_DATA;

/* DATA::DMI_train_length_INT_T/ */
typedef kcg_int32 DMI_train_length_INT_T_DATA;

/* DATA::DMI_train_id_INT_T/ */
typedef kcg_int32 DMI_train_id_INT_T_DATA;

/* DATA::DMI_List_Entry_Request_INT_T/ */
typedef kcg_int32 DMI_List_Entry_Request_INT_T_DATA;

/* DATA::DMI_Available_Menu_INT_T/ */
typedef kcg_int32 DMI_Available_Menu_INT_T_DATA;

/* DATA::connectionStatusRadioUnit_INT_T/ */
typedef kcg_int32 connectionStatusRadioUnit_INT_T_DATA;

/* DATA::M_SUPERVISION_STATUS_INT_T/ */
typedef kcg_int32 M_SUPERVISION_STATUS_INT_T_DATA;

/* DATA::M_SupervisionDisplay_INT_T/ */
typedef kcg_int32 M_SupervisionDisplay_INT_T_DATA;

/* NID_TEXTMESSAGE/ */
typedef kcg_int32 NID_TEXTMESSAGE;

/* D_TRACKCOND/ */
typedef kcg_int32 D_TRACKCOND;

/* DMI_Types_Pkg::DMI_trackConditionElement_T/ */
typedef struct kcg_tag_DMI_trackConditionElement_T_DMI_Types_Pkg {
  D_TRACKCOND d_trackcond;
  M_TRACKCOND m_trackcond;
} DMI_trackConditionElement_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_trackConditionArray_T/ */
typedef DMI_trackConditionElement_T_DMI_Types_Pkg DMI_trackConditionArray_T_DMI_Types_Pkg[32];

/* Obu_BasicTypes_Pkg::G_internal_Type/ */
typedef kcg_int32 G_internal_Type_Obu_BasicTypes_Pkg;

/* DMI_Types_Pkg::DMI_TextMessage_ID_T/ */
typedef kcg_int32 DMI_TextMessage_ID_T_DMI_Types_Pkg;

/* L_TEXT/ */
typedef kcg_int32 L_TEXT;

/* DMI_Types_Pkg::M_BRAKEPERCT/ */
typedef kcg_int32 M_BRAKEPERCT_DMI_Types_Pkg;

/* Obu_BasicTypes_Pkg::BCD_T/ */
typedef kcg_int32 BCD_T_Obu_BasicTypes_Pkg;

/* L_PACKET/ */
typedef kcg_int32 L_PACKET;

/* N_ITER/ */
typedef kcg_int32 N_ITER;

/* TM::P058_OBU_T/ */
typedef struct kcg_tag_P058_OBU_T_TM {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  T_CYCLOC t_cycloc;
  D_CYCLOC d_cycloc;
  M_LOC m_loc;
  N_ITER n_iter;
  P058_OBU_sectionlist_enum_T_TM sections;
} P058_OBU_T_TM;

/* V_NVKVINT/ */
typedef kcg_int32 V_NVKVINT;

/* Packet_Types_Pkg::nvkvint_T/ */
typedef struct kcg_tag_nvkvint_T_Packet_Types_Pkg {
  kcg_bool valid;
  V_NVKVINT v_nvkvint;
  M_NVKVINT m_nvkvint12;
  M_NVKVINT m_nvkvint23;
} nvkvint_T_Packet_Types_Pkg;

/* Packet_Types_Pkg::nvkvintArray_T/ */
typedef nvkvint_T_Packet_Types_Pkg nvkvintArray_T_Packet_Types_Pkg[7];

/* Packet_Types_Pkg::nvkvintset_T/ */
typedef struct kcg_tag_nvkvintset_T_Packet_Types_Pkg {
  kcg_bool valid;
  Q_NVKVINTSET q_nvkvintset;
  A_NVP12 a_nvp12;
  A_NVP23 a_nvp23;
  nvkvintArray_T_Packet_Types_Pkg nvkintArray;
} nvkvintset_T_Packet_Types_Pkg;

/* Packet_Types_Pkg::nvkvintsetArray_T/ */
typedef nvkvintset_T_Packet_Types_Pkg nvkvintsetArray_T_Packet_Types_Pkg[7];

/* D_NVSTFF/ */
typedef kcg_int32 D_NVSTFF;

/* D_NVPOTRP/ */
typedef kcg_int32 D_NVPOTRP;

/* T_NVOVTRP/ */
typedef kcg_int32 T_NVOVTRP;

/* D_NVOVTRP/ */
typedef kcg_int32 D_NVOVTRP;

/* V_NVSUPOVTRP/ */
typedef kcg_int32 V_NVSUPOVTRP;

/* V_NVALLOWOVTRP/ */
typedef kcg_int32 V_NVALLOWOVTRP;

/* D_NVROLL/ */
typedef kcg_int32 D_NVROLL;

/* V_NVREL/ */
typedef kcg_int32 V_NVREL;

/* V_NVUNFIT/ */
typedef kcg_int32 V_NVUNFIT;

/* V_NVLIMSUPERV/ */
typedef kcg_int32 V_NVLIMSUPERV;

/* V_NVONSIGHT/ */
typedef kcg_int32 V_NVONSIGHT;

/* V_NVSTFF/ */
typedef kcg_int32 V_NVSTFF;

/* V_NVSHUNT/ */
typedef kcg_int32 V_NVSHUNT;

/* D_VALIDNV/ */
typedef kcg_int32 D_VALIDNV;

/* M_POSITION/ */
typedef kcg_int32 M_POSITION;

/* NID_CTRACTION/ */
typedef kcg_int32 NID_CTRACTION;

/* Obu_BasicTypes_Pkg::Speed_T/ */
typedef kcg_int32 Speed_T_Obu_BasicTypes_Pkg;

/* NID_PACKET/ */
typedef kcg_int32 NID_PACKET;

/* TM_TrainToTrack::P004/ */
typedef struct kcg_tag_P004_TM_TrainToTrack {
  kcg_bool valid;
  NID_PACKET nid_packet;
  L_PACKET l_packet;
  M_ERROR m_error;
} P004_TM_TrainToTrack;

/* Packet_Types_Pkg::P58_PositionReportParameters_T/ */
typedef struct kcg_tag_P58_PositionReportParameters_T_Packet_Types_Pkg {
  kcg_bool valid;
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  L_PACKET l_packet;
  Q_SCALE q_scale;
  T_CYCLOC t_cycloc;
  D_CYCLOC d_cycloc;
  M_LOC m_loc;
  N_ITER n_iter;
  IterPacket58List_T_Packet_Types_Pkg iterPacket58List;
} P58_PositionReportParameters_T_Packet_Types_Pkg;

/* TM_TrainToTrack::P009/ */
typedef struct kcg_tag_P009_TM_TrainToTrack {
  kcg_bool valid;
  NID_PACKET nid_packet;
  L_PACKET l_packet;
  NID_LTRBG nid_ltrbg;
} P009_TM_TrainToTrack;

/* T_NVCONTACT/ */
typedef kcg_int32 T_NVCONTACT;

/* L_ACKMAMODE/ */
typedef kcg_int32 L_ACKMAMODE;

/* L_MAMODE/ */
typedef kcg_int32 L_MAMODE;

/* V_MAMODE/ */
typedef kcg_int32 V_MAMODE;

/* D_MAMODE/ */
typedef kcg_int32 D_MAMODE;

/* TM::P080_section_enum_T/ */
typedef struct kcg_tag_P080_section_enum_T_TM {
  kcg_bool valid;
  D_MAMODE d_mamode;
  M_MAMODE m_mamode;
  V_MAMODE v_mamode;
  L_MAMODE l_mamode;
  L_ACKMAMODE l_ackmamode;
  Q_MAMODE q_mamode;
} P080_section_enum_T_TM;

/* TM::P080_OBU_sectionlist_enum_T/,
   TM_lib_internal::C_P080_unflatten_sections/ */
typedef P080_section_enum_T_TM P080_OBU_sectionlist_enum_T_TM[33];

/* TM::P080_OBU_T/ */
typedef struct kcg_tag_P080_OBU_T_TM {
  kcg_bool valid;
  Q_DIR q_dir;
  L_PACKET l_packet;
  Q_SCALE q_scale;
  N_ITER n_iter;
  P080_OBU_sectionlist_enum_T_TM sections;
} P080_OBU_T_TM;

typedef P080_section_enum_T_TM _128_array[3];

/* Packet_Types_Pkg::P80_ModeProfile_T/ */
typedef struct kcg_tag_P80_ModeProfile_T_Packet_Types_Pkg {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_MAMODE d_mamode;
  M_MAMODE m_mamode;
  V_MAMODE v_mamode;
  L_MAMODE l_mamode;
  L_ACKMAMODE l_ackmamode;
  Q_MAMODE q_mamode;
} P80_ModeProfile_T_Packet_Types_Pkg;

/* EVC_MEM_Support_Pkg::MEM_convertP80/,
   Packet_Types_Pkg::P80_ModeProfiles_T/ */
typedef P80_ModeProfile_T_Packet_Types_Pkg P80_ModeProfiles_T_Packet_Types_Pkg[3];

/* G_A/ */
typedef kcg_int32 G_A;

/* D_GRADIENT/ */
typedef kcg_int32 D_GRADIENT;

/* TM::P021_section_enum_T/ */
typedef struct kcg_tag_P021_section_enum_T_TM {
  kcg_bool valid;
  D_GRADIENT d_gradient;
  Q_GDIR q_gdir;
  G_A g_a;
} P021_section_enum_T_TM;

/* TA_Gradient_new::GP_Convert_P21_to_DistanceProfile/,
   TM::P021_OBU_sectionlist_enum_T/,
   TM_lib_internal::C_P021_unflatten_sections/ */
typedef P021_section_enum_T_TM P021_OBU_sectionlist_enum_T_TM[33];

/* TM::P021_OBU_T/ */
typedef struct kcg_tag_P021_OBU_T_TM {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  N_ITER n_iter;
  P021_OBU_sectionlist_enum_T_TM sections;
} P021_OBU_T_TM;

typedef P021_OBU_T_TM _180_array[7];

typedef P021_OBU_sectionlist_enum_T_TM _146_array[7];

typedef P021_OBU_sectionlist_enum_T_TM _123_array[50];

/* Packet_Types_Pkg::P21_GradientProfile_T/ */
typedef struct kcg_tag_P21_GradientProfile_T_Packet_Types_Pkg {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_GRADIENT d_gradient;
  Q_GDIR q_gdir;
  G_A g_a;
} P21_GradientProfile_T_Packet_Types_Pkg;

/* Packet_Types_Pkg::P21_GradientProfiles_T/,
   TM_conversions::C_P021_to_legacy_t/ */
typedef P21_GradientProfile_T_Packet_Types_Pkg P21_GradientProfiles_T_Packet_Types_Pkg[7];

/* V_REVERSE/ */
typedef kcg_int32 V_REVERSE;

/* D_REVERSE/ */
typedef kcg_int32 D_REVERSE;

/* L_REVERSEAREA/ */
typedef kcg_int32 L_REVERSEAREA;

/* D_STARTREVERSE/ */
typedef kcg_int32 D_STARTREVERSE;

/* V_RELEASEOL/ */
typedef kcg_int32 V_RELEASEOL;

/* T_OL/ */
typedef kcg_int32 T_OL;

/* D_STARTOL/ */
typedef kcg_int32 D_STARTOL;

/* V_RELEASEDP/ */
typedef kcg_int32 V_RELEASEDP;

/* D_ENDTIMERSTARTLOC/ */
typedef kcg_int32 D_ENDTIMERSTARTLOC;

/* L_ENDSECTION/ */
typedef kcg_int32 L_ENDSECTION;

/* V_MAIN/ */
typedef kcg_int32 V_MAIN;

/* T_LOA/ */
typedef kcg_int32 T_LOA;

/* D_SECTIONTIMERSTOPLOC/ */
typedef kcg_int32 D_SECTIONTIMERSTOPLOC;

/* T_SECTIONTIMER/ */
typedef kcg_int32 T_SECTIONTIMER;

/* L_SECTION/ */
typedef kcg_int32 L_SECTION;

/* T_ENDTIMER/ */
typedef kcg_int32 T_ENDTIMER;

/* V_LOA/ */
typedef kcg_int32 V_LOA;

/* D_OL/ */
typedef kcg_int32 D_OL;

/* D_DP/ */
typedef kcg_int32 D_DP;

/* Packet_Types_Pkg::P12_Level1MovementAuthority_T/ */
typedef struct kcg_tag_P12_Level1MovementAuthority_T_Packet_Types_Pkg {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  V_MAIN v_main;
  V_LOA v_loa;
  T_LOA t_loa;
  L_SECTION l_section;
  Q_SECTIONTIMER q_sectiontimer_k;
  T_SECTIONTIMER t_sectiontimer_k;
  D_SECTIONTIMERSTOPLOC d_sectiontimerstoploc_k;
  L_ENDSECTION l_endsection;
  Q_SECTIONTIMER q_sectiontimer;
  T_SECTIONTIMER t_sectiontimer;
  D_SECTIONTIMERSTOPLOC d_sectiontimerstoploc;
  Q_ENDTIMER q_endtimer;
  T_ENDTIMER t_endtimer;
  D_ENDTIMERSTARTLOC d_endtimerstartloc;
  Q_DANGERPOINT q_dangerpoint;
  D_DP d_dp;
  V_RELEASEDP v_releasedp;
  Q_OVERLAP q_overlap;
  D_STARTOL d_startol;
  T_OL t_ol;
  D_OL d_ol;
  V_RELEASEOL v_releaseol;
} P12_Level1MovementAuthority_T_Packet_Types_Pkg;

/* Packet_Types_Pkg::P12_Level1MovementAuthorities_T/ */
typedef P12_Level1MovementAuthority_T_Packet_Types_Pkg _7_P12_Level1MovementAuthorities_T_Packet_Types_Pkg[5];

/* Packet_Types_Pkg::P15_Level23MovementAuthority_T/ */
typedef struct kcg_tag_P15_Level23MovementAuthority_T_Packet_Types_Pkg {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  V_LOA v_loa;
  T_LOA t_loa;
  L_SECTION l_section;
  Q_SECTIONTIMER q_sectiontimer_k;
  T_SECTIONTIMER t_sectiontimer_k;
  D_SECTIONTIMERSTOPLOC d_sectiontimerstoploc_k;
  L_ENDSECTION l_endsection;
  Q_SECTIONTIMER q_sectiontimer;
  T_SECTIONTIMER t_sectiontimer;
  D_SECTIONTIMERSTOPLOC d_sectiontimerstoploc;
  Q_ENDTIMER q_endtimer;
  T_ENDTIMER t_endtimer;
  D_ENDTIMERSTARTLOC d_endtimerstartloc;
  Q_DANGERPOINT q_dangerpoint;
  D_DP d_dp;
  V_RELEASEDP v_releasedp;
  Q_OVERLAP q_overlap;
  D_STARTOL d_startol;
  T_OL t_ol;
  D_OL d_ol;
  V_RELEASEOL v_releaseol;
} P15_Level23MovementAuthority_T_Packet_Types_Pkg;

/* Packet_Types_Pkg::P15_Level23MovementAuthorities_T/,
   TM_conversions::C_P015_to_legacy_t/ */
typedef P15_Level23MovementAuthority_T_Packet_Types_Pkg _6_P15_Level23MovementAuthorities_T_Packet_Types_Pkg[5];

/* D_LEVELTR/ */
typedef kcg_int32 D_LEVELTR;

/* L_ACKLEVELTR/ */
typedef kcg_int32 L_ACKLEVELTR;

/* V_DIFF/ */
typedef kcg_int32 V_DIFF;

/* NC_DIFF/ */
typedef kcg_int32 NC_DIFF;

/* Packet_Types_Pkg::Diff_T/ */
typedef struct kcg_tag_Diff_T_Packet_Types_Pkg {
  kcg_bool valid;
  Q_DIFF q_diff;
  NC_CDDIFF nc_cddiff;
  NC_DIFF nc_diff;
  V_DIFF v_diff;
} Diff_T_Packet_Types_Pkg;

/* Packet_Types_Pkg::DiffArray_T/ */
typedef Diff_T_Packet_Types_Pkg DiffArray_T_Packet_Types_Pkg[7];

/* TM_baseline2::P027V1_section_enum_qdiff_T/ */
typedef struct kcg_tag_P027V1_section_enum_qdiff_T_TM_baseline2 {
  kcg_bool valid;
  NC_DIFF nc_diff;
  V_DIFF v_diff;
} P027V1_section_enum_qdiff_T_TM_baseline2;

/* TM_baseline2::P027V1_OBU_sectionlist_enum_qdiff_T/,
   TM_lib_internal::C_P027V1_unflatten_sections_qdiff/ */
typedef P027V1_section_enum_qdiff_T_TM_baseline2 _3_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2[32];

/* V_STATIC/ */
typedef kcg_int32 V_STATIC;

/* D_STATIC/ */
typedef kcg_int32 D_STATIC;

/* Packet_Types_Pkg::SSP_T/ */
typedef struct kcg_tag_SSP_T_Packet_Types_Pkg {
  kcg_bool valid;
  D_STATIC d_static;
  V_STATIC v_static;
  Q_FRONT q_front;
  DiffArray_T_Packet_Types_Pkg diffArray;
} SSP_T_Packet_Types_Pkg;

/* Packet_Types_Pkg::SSPArray_T/ */
typedef SSP_T_Packet_Types_Pkg SSPArray_T_Packet_Types_Pkg[7];

/* Packet_Types_Pkg::P27_InternationalStaticSpeedProfile_T/ */
typedef struct kcg_tag_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_STATIC d_static;
  V_STATIC v_static;
  Q_FRONT q_front;
  DiffArray_T_Packet_Types_Pkg diffArray;
  SSPArray_T_Packet_Types_Pkg SSPArray;
} P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg;

/* TM_baseline2::P027V1_section_enum_T/ */
typedef struct kcg_tag_P027V1_section_enum_T_TM_baseline2 {
  kcg_bool valid;
  D_STATIC d_static;
  V_STATIC v_static;
  Q_FRONT q_front;
  N_ITER n_iter;
  _3_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 SECTIONS_q_diff;
} P027V1_section_enum_T_TM_baseline2;

/* TM_baseline2::P027V1_OBU_sectionlist_enum_T/, TM_baseline2::Read_P027V1/ */
typedef P027V1_section_enum_T_TM_baseline2 P027V1_OBU_sectionlist_enum_T_TM_baseline2[33];

/* TM_baseline2::P027V1_OBU_T/ */
typedef struct kcg_tag_P027V1_OBU_T_TM_baseline2 {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  P027V1_OBU_sectionlist_enum_T_TM_baseline2 sections;
} P027V1_OBU_T_TM_baseline2;

typedef P027V1_OBU_sectionlist_enum_T_TM_baseline2 _124_array[50];

/* DMI_Types_Pkg::NID_STM/ */
typedef kcg_int32 NID_STM_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_level_T/ */
typedef struct kcg_tag_DMI_level_T_DMI_Types_Pkg {
  M_LEVEL level;
  NID_STM_DMI_Types_Pkg nid_stm;
} DMI_level_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_level_array_T/ */
typedef DMI_level_T_DMI_Types_Pkg DMI_level_array_T_DMI_Types_Pkg[32];

/* NID_NTC/ */
typedef kcg_int32 NID_NTC;

/* TM::P046_section_enum_T/ */
typedef struct kcg_tag_P046_section_enum_T_TM {
  kcg_bool valid;
  M_LEVELTR m_leveltr;
  NID_NTC nid_ntc;
} P046_section_enum_T_TM;

/* TM::P046_OBU_sectionlist_enum_T/,
   TM_lib_internal::C_P046_unflatten_sections/ */
typedef P046_section_enum_T_TM P046_OBU_sectionlist_enum_T_TM[33];

/* TM::P046_OBU_T/ */
typedef struct kcg_tag_P046_OBU_T_TM {
  kcg_bool valid;
  Q_DIR q_dir;
  N_ITER n_iter;
  P046_OBU_sectionlist_enum_T_TM sections;
} P046_OBU_T_TM;

typedef P046_OBU_sectionlist_enum_T_TM _144_array[7];

/* Packet_Types_Pkg::P41_LevelTransitionOrder_T/ */
typedef struct kcg_tag_P41_LevelTransitionOrder_T_Packet_Types_Pkg {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_LEVELTR d_leveltr;
  M_LEVELTR m_leveltr;
  NID_NTC nid_ntc;
  L_ACKLEVELTR l_ackleveltr;
} P41_LevelTransitionOrder_T_Packet_Types_Pkg;

/* Packet_Types_Pkg::P41_LevelTransistionOrders_T/,
   TM_conversions::C_P041_to_legacy_t/ */
typedef P41_LevelTransitionOrder_T_Packet_Types_Pkg P41_LevelTransistionOrders_T_Packet_Types_Pkg[7];

/* BG_Types_Pkg::TrainToTrackStatus_T/ */
typedef struct kcg_tag_TrainToTrackStatus_T_BG_Types_Pkg {
  NID_NTC nid_ntc;
  Q_LENGTH q_length;
} TrainToTrackStatus_T_BG_Types_Pkg;

/* Packet_Types_Pkg::P46_ConditionalLevelTransitionOrder_T/ */
typedef struct kcg_tag_P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg {
  kcg_bool valid;
  Q_DIR q_dir;
  M_LEVELTR m_leveltr;
  NID_NTC nid_ntc;
} P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg;

/* Packet_Types_Pkg::P46_ConditionalLevelTransitionOrders_T/,
   TM_conversions::C_P046_to_legacy_t/ */
typedef P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg _8_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg[7];

/* TM::P041_section_enum_T/ */
typedef struct kcg_tag_P041_section_enum_T_TM {
  kcg_bool valid;
  M_LEVELTR m_leveltr;
  NID_NTC nid_ntc;
  L_ACKLEVELTR l_ackleveltr;
} P041_section_enum_T_TM;

/* TM::P041_OBU_sectionlist_enum_T/,
   TM_lib_internal::C_P041_unflatten_sections/ */
typedef P041_section_enum_T_TM P041_OBU_sectionlist_enum_T_TM[33];

typedef P041_OBU_sectionlist_enum_T_TM _145_array[7];

/* TM::P041_OBU_T/ */
typedef struct kcg_tag_P041_OBU_T_TM {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_LEVELTR d_leveltr;
  N_ITER n_iter;
  P041_OBU_sectionlist_enum_T_TM sections;
} P041_OBU_T_TM;

/* L_TRAIN/ */
typedef kcg_int32 L_TRAIN;

/* NID_ENGINE/ */
typedef kcg_int32 NID_ENGINE;

/* Obu_BasicTypes_Pkg::Location_T/ */
typedef kcg_int32 Location_T_Obu_BasicTypes_Pkg;

/* Level_And_Mode_Types_Pkg::T_Mode_Profile/ */
typedef struct kcg_tag_T_Mode_Profile_Level_And_Mode_Types_Pkg {
  Location_T_Obu_BasicTypes_Pkg Distance;
  T_MA_Level_And_Mode_Types_Pkg Mode;
  Speed_T_Obu_BasicTypes_Pkg Speed;
  Location_T_Obu_BasicTypes_Pkg Length;
  Location_T_Obu_BasicTypes_Pkg Length_Ack;
} T_Mode_Profile_Level_And_Mode_Types_Pkg;

/* InputManagement::Input_Modes/,
   Level_And_Mode_Types_Pkg::T_Mode_Profile_Table/ */
typedef T_Mode_Profile_Level_And_Mode_Types_Pkg T_Mode_Profile_Table_Level_And_Mode_Types_Pkg[3];

/* Level_And_Mode_Types_Pkg::T_Reversing_Data/ */
typedef struct kcg_tag_T_Reversing_Data_Level_And_Mode_Types_Pkg {
  kcg_bool Available;
  Location_T_Obu_BasicTypes_Pkg Dist_Start;
  Location_T_Obu_BasicTypes_Pkg Length;
  Location_T_Obu_BasicTypes_Pkg Dist_Run;
  Speed_T_Obu_BasicTypes_Pkg Speed;
} T_Reversing_Data_Level_And_Mode_Types_Pkg;

/* Level_And_Mode_Types_Pkg::T_Data_From_Track_To_Mode/ */
typedef struct kcg_tag_T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg {
  kcg_bool MA_SSP_Gradient_Available;
  T_Mode_Profile_Table_Level_And_Mode_Types_Pkg Mode_Profile_On_Board;
  kcg_bool Shunting_granted_By_RBC;
  kcg_bool Trip_Order_Given_By_Balise;
  kcg_bool List_Bg_Related_To_SR_Empty;
  kcg_bool Stop_If_In_shunting;
  kcg_bool Stop_If_In_SR;
  kcg_bool RBC_Ack_TR_EB_Revocked;
  kcg_bool RBC_Authorized_SR;
  T_Reversing_Data_Level_And_Mode_Types_Pkg Reversing_Data;
  kcg_bool Emergency_Stop_Message_Received;
} T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg;

/* Level_And_Mode_Types_Pkg::T_LevelTansitionInfo/ */
typedef struct kcg_tag_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg {
  M_LEVEL level;
  M_POSITION position;
  T_TransitionType_Level_And_Mode_Types_Pkg transitionType;
  kcg_bool immediateAck;
  Location_T_Obu_BasicTypes_Pkg AckLength;
} T_LevelTansitionInfo_Level_And_Mode_Types_Pkg;

/* D_EMERGENCYSTOP/ */
typedef kcg_int32 D_EMERGENCYSTOP;

/* D_REF/ */
typedef kcg_int32 D_REF;

/* D_SR/ */
typedef kcg_int32 D_SR;

/* NID_EM/ */
typedef kcg_int32 NID_EM;

/* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Add/,
   TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Item_T/,
   TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Remove/ */
typedef struct kcg_tag_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store {
  NID_EM nid_em;
  kcg_bool valid;
} NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store;

typedef NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store _151_array[8];

/* T_TRAIN/ */
typedef kcg_int32 T_TRAIN;

/* trainData_Types_pkg::trainDataStatus_T/ */
typedef struct kcg_tag_trainDataStatus_T_trainData_Types_pkg {
  kcg_bool valid;
  kcg_bool validatedByDriver;
  kcg_bool RBCsystemVersionOnboard;
  kcg_bool validatedbyRBC;
  kcg_bool waitingForRBCResponse;
  kcg_bool driverIsModificationTrainData;
  T_TRAIN timeStampValidateToRBC;
} trainDataStatus_T_trainData_Types_pkg;

/* NID_MESSAGE/ */
typedef kcg_int32 NID_MESSAGE;

/* TM_radio_messages::M_147_T/ */
typedef struct kcg_tag_M_147_T_TM_radio_messages {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  NID_ENGINE nid_engine;
  NID_EM nid_em;
  Q_EMERGENCYSTOP q_emergencystop;
} M_147_T_TM_radio_messages;

/* TM_radio_messages::M_132_T/ */
typedef struct kcg_tag_M_132_T_TM_radio_messages {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  NID_ENGINE nid_engine;
  Q_MARQSTREASON q_marqstreason;
} M_132_T_TM_radio_messages;

/* TM_radio_messages::M_146_T/ */
typedef struct kcg_tag_M_146_T_TM_radio_messages {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  NID_ENGINE nid_engine;
  T_TRAIN t_train_req;
} M_146_T_TM_radio_messages;

/* NID_RBC/ */
typedef kcg_int32 NID_RBC;

/* BG_Types_Pkg::NID_ERRORBG/ */
typedef kcg_int32 NID_ERRORBG_BG_Types_Pkg;

/* Q_LOCACC/ */
typedef kcg_int32 Q_LOCACC;

/* D_LINK/ */
typedef kcg_int32 D_LINK;

/* NID_LRBG/ */
typedef kcg_int32 NID_LRBG;

/* TM_TrainToTrack::P000/ */
typedef struct kcg_tag_P000_TM_TrainToTrack {
  kcg_bool valid;
  NID_PACKET nid_packet;
  L_PACKET l_packet;
  Q_SCALE q_scale;
  NID_LRBG nid_lrbg;
  D_LRBG d_lrbg;
  Q_DIRLRBG q_dirlrbg;
  Q_DLRBG q_dlrbg;
  L_DOUBTOVER l_doubtover;
  L_DOUBTUNDER l_doubtunder;
  Q_LENGTH q_length;
  L_TRAININT l_trainint;
  V_TRAIN v_train;
  Q_DIRTRAIN q_dirtrain;
  M_MODE m_mode;
  M_LEVEL m_level;
  NID_NTC nid_ntc;
} P000_TM_TrainToTrack;

/* TM_TrainToTrack::P001/ */
typedef struct kcg_tag_P001_TM_TrainToTrack {
  kcg_bool valid;
  NID_PACKET nid_packet;
  L_PACKET l_packet;
  Q_SCALE q_scale;
  NID_LRBG nid_lrbg;
  NID_PRVLRBG nid_prvlrbg;
  D_LRBG d_lrbg;
  Q_DIRLRBG q_dirlrbg;
  Q_DLRBG q_dlrbg;
  L_DOUBTOVER l_doubtover;
  L_DOUBTUNDER l_doubtunder;
  Q_LENGTH q_length;
  L_TRAININT l_trainint;
  V_TRAIN v_train;
  Q_DIRTRAIN q_dirtrain;
  M_MODE m_mode;
  M_LEVEL m_level;
  NID_NTC nid_ntc;
} P001_TM_TrainToTrack;

/* Obu_BasicTypes_Pkg::A_internal_Type/ */
typedef kcg_int32 A_internal_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::V_odometry_Type/ */
typedef kcg_int32 V_odometry_Type_Obu_BasicTypes_Pkg;

/* SDM_Types_Pkg::Speeds_T/ */
typedef struct kcg_tag_Speeds_T_SDM_Types_Pkg {
  V_odometry_Type_Obu_BasicTypes_Pkg V_est;
  V_odometry_Type_Obu_BasicTypes_Pkg V_MRSP;
  V_odometry_Type_Obu_BasicTypes_Pkg V_release;
  V_odometry_Type_Obu_BasicTypes_Pkg V_target;
  V_odometry_Type_Obu_BasicTypes_Pkg v_p_mrdt;
  V_odometry_Type_Obu_BasicTypes_Pkg v_p_dmi;
  V_odometry_Type_Obu_BasicTypes_Pkg v_sbi_mrdt;
  V_odometry_Type_Obu_BasicTypes_Pkg v_FLOI_dmi;
  V_odometry_Type_Obu_BasicTypes_Pkg dV_warning_V_MRSP;
  V_odometry_Type_Obu_BasicTypes_Pkg dV_warning_V_target;
  V_odometry_Type_Obu_BasicTypes_Pkg dV_sbi_V_MRSP;
  V_odometry_Type_Obu_BasicTypes_Pkg dV_sbi_V_target;
  V_odometry_Type_Obu_BasicTypes_Pkg dV_ebi_V_MRSP;
  V_odometry_Type_Obu_BasicTypes_Pkg dV_ebi_V_target;
  kcg_bool OdoStandStill;
} Speeds_T_SDM_Types_Pkg;

/* Obu_BasicTypes_Pkg::OdometrySpeeds_T/ */
typedef struct kcg_tag_OdometrySpeeds_T_Obu_BasicTypes_Pkg {
  V_odometry_Type_Obu_BasicTypes_Pkg v_safeNominal;
  V_odometry_Type_Obu_BasicTypes_Pkg v_rawNominal;
  V_odometry_Type_Obu_BasicTypes_Pkg v_lower;
  V_odometry_Type_Obu_BasicTypes_Pkg v_upper;
} OdometrySpeeds_T_Obu_BasicTypes_Pkg;

/* Q_NVLOCACC/ */
typedef kcg_int32 Q_NVLOCACC;

/* TM_baseline2::P003_permanent_data_T/ */
typedef struct kcg_tag_P003_permanent_data_T_TM_baseline2 {
  Q_NVLOCACC q_nvlocacc;
  V_NVLIMSUPERV v_nvlimsuperv;
} P003_permanent_data_T_TM_baseline2;

/* M_MCOUNT/ */
typedef kcg_int32 M_MCOUNT;

/* NID_BG/ */
typedef kcg_int32 NID_BG;

/* NID_C/ */
typedef kcg_int32 NID_C;

/* Packet_Types_Pkg::P42_SessionManagement_T/ */
typedef struct kcg_tag_P42_SessionManagement_T_Packet_Types_Pkg {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_RBC q_rbc;
  NID_C nid_c;
  NID_RBC nid_rbc;
  NID_RADIO nid_radio;
  Q_SLEEPSESSION q_sleepsession;
} P42_SessionManagement_T_Packet_Types_Pkg;

/* Common_Types_Pkg::MSG_Errors_T/ */
typedef struct kcg_tag_MSG_Errors_T_Common_Types_Pkg {
  kcg_bool linkedBGError;
  kcg_bool unlinkedBGError;
  kcg_bool BG_versionIncompatible;
  kcg_bool radioSequenceError;
  kcg_bool tNvContactError;
  kcg_bool otherTimingError;
  kcg_bool radioMessageConsistencyError;
  NID_C nid_c;
  NID_ERRORBG_BG_Types_Pkg nid_errorbg;
} MSG_Errors_T_Common_Types_Pkg;

/* Level_And_Mode_Types_Pkg::T_Data_From_F2_functions/ */
typedef struct kcg_tag_T_Data_From_F2_functions_Level_And_Mode_Types_Pkg {
  MSG_Errors_T_Common_Types_Pkg Common_Errors;
  kcg_bool Failure_Occured;
  kcg_bool Continue_Shunting_Active;
  kcg_bool Stop_Shunting_Stored;
} T_Data_From_F2_functions_Level_And_Mode_Types_Pkg;

/* TM::P005_section_enum_T/ */
typedef struct kcg_tag_P005_section_enum_T_TM {
  kcg_bool valid;
  D_LINK d_link;
  Q_NEWCOUNTRY q_newcountry;
  NID_C nid_c;
  NID_BG nid_bg;
  Q_LINKORIENTATION q_linkorientation;
  Q_LINKREACTION q_linkreaction;
  Q_LOCACC q_locacc;
} P005_section_enum_T_TM;

/* TM::P005_OBU_sectionlist_enum_T/,
   TM_conversions::C_P005_ForCalcTrainPos/,
   TM_lib_internal::C_P005_unflatten_sections/ */
typedef P005_section_enum_T_TM P005_OBU_sectionlist_enum_T_TM[33];

/* TM::P005_OBU_T/ */
typedef struct kcg_tag_P005_OBU_T_TM {
  kcg_bool valid;
  Q_DIR q_dir;
  L_PACKET l_packet;
  Q_SCALE q_scale;
  N_ITER n_iter;
  P005_OBU_sectionlist_enum_T_TM sections;
} P005_OBU_T_TM;

/* BG_Types_Pkg::LinkedBG_T/ */
typedef struct kcg_tag_LinkedBG_T_BG_Types_Pkg {
  kcg_bool valid;
  NID_LRBG nid_LRBG;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_LINK d_link;
  Q_NEWCOUNTRY q_newcountry;
  NID_C nid_c;
  NID_BG nid_bg;
  Q_LINKORIENTATION q_linkorientation;
  Q_LINKREACTION q_linkreaction;
  Q_LOCACC q_locacc;
} LinkedBG_T_BG_Types_Pkg;

/* BG_Types_Pkg::LinkedBGs_T/, TM_conversions::C_P005_ForCalcTrainPos/ */
typedef LinkedBG_T_BG_Types_Pkg LinkedBGs_T_BG_Types_Pkg[33];

/* BG_Types_Pkg::TelegramHeader_T/ */
typedef struct kcg_tag_TelegramHeader_T_BG_Types_Pkg {
  Q_UPDOWN q_updown;
  M_VERSION m_version;
  Q_MEDIA q_media;
  N_PIG n_pig;
  N_TOTAL n_total;
  M_DUP m_dup;
  M_MCOUNT m_mcount;
  NID_C nid_c;
  NID_BG nid_bg;
  Q_LINK q_link;
} TelegramHeader_T_BG_Types_Pkg;

/* xdebugSupport_Pkg::probesBalises_T/ */
typedef struct kcg_tag_probesBalises_T_xdebugSupport_Pkg {
  kcg_bool isChanged;
  NID_BG bg_id;
  NID_C nid_c;
  MSG_Errors_T_Common_Types_Pkg errors;
} probesBalises_T_xdebugSupport_Pkg;

/* Packet_Types_Pkg::P63_BaliseInSRAuthority_T/ */
typedef struct kcg_tag_P63_BaliseInSRAuthority_T_Packet_Types_Pkg {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_NEWCOUNTRY q_newcountry;
  NID_C nid_c;
  NID_BG nid_bg;
} P63_BaliseInSRAuthority_T_Packet_Types_Pkg;

/* Packet_Types_Pkg::P63_ListofBalisesinSRAuthority_T/ */
typedef P63_BaliseInSRAuthority_T_Packet_Types_Pkg P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg[7];

/* DMI_Types_Pkg::nationValuesForDMI_T/ */
typedef struct kcg_tag_nationValuesForDMI_T_DMI_Types_Pkg {
  kcg_bool valid;
  NID_C nid_c;
  kcg_bool nid_c_valid;
} nationValuesForDMI_T_DMI_Types_Pkg;

/* RCM_Session_Types_Pkg::sessionStatus_T/ */
typedef struct kcg_tag_sessionStatus_T_RCM_Session_Types_Pkg {
  kcg_bool valid;
  sessionPhase_T_RCM_Session_Types_Pkg phase;
  NID_C nid_c;
  NID_RBC nid_rbc;
  NID_RADIO nid_radio;
} sessionStatus_T_RCM_Session_Types_Pkg;

/* Obu_BasicTypes_Pkg::L_internal_Type/ */
typedef kcg_int32 L_internal_Type_Obu_BasicTypes_Pkg;

typedef L_internal_Type_Obu_BasicTypes_Pkg array_int32_110[110];

/* EVC_MEM_Support_Pkg::dataCollectionForLevelTransition_T/ */
typedef struct kcg_tag_dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg {
  P41_LevelTransistionOrders_T_Packet_Types_Pkg p41;
  _8_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg p46;
  P80_ModeProfiles_T_Packet_Types_Pkg p80;
  kcg_bool p12_received;
  kcg_bool p15_received;
  kcg_bool p21_received;
  kcg_bool p27_received;
  NID_LRBG LRBG;
  L_internal_Type_Obu_BasicTypes_Pkg referenceLocation;
} dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg;

/* SDM_Types_Pkg::SDM_Locations_T/ */
typedef struct kcg_tag_SDM_Locations_T_SDM_Types_Pkg {
  L_internal_Type_Obu_BasicTypes_Pkg SBD_preindication_location;
  L_internal_Type_Obu_BasicTypes_Pkg EBD_preindication_location;
  L_internal_Type_Obu_BasicTypes_Pkg EBD_RSM_start_location;
  L_internal_Type_Obu_BasicTypes_Pkg SBD_RSM_start_location;
  L_internal_Type_Obu_BasicTypes_Pkg d_I_of_V_est;
  L_internal_Type_Obu_BasicTypes_Pkg d_I_of_V_MRSP;
  L_internal_Type_Obu_BasicTypes_Pkg d_P_of_V_est;
  L_internal_Type_Obu_BasicTypes_Pkg d_W_of_V_est;
  L_internal_Type_Obu_BasicTypes_Pkg d_FLOI_of_V_est;
  L_internal_Type_Obu_BasicTypes_Pkg d_EBI_of_V_est;
  L_internal_Type_Obu_BasicTypes_Pkg FLOI_of_V_est;
  L_internal_Type_Obu_BasicTypes_Pkg SBI1_of_V_est;
  L_internal_Type_Obu_BasicTypes_Pkg SBI2_of_V_est;
  L_internal_Type_Obu_BasicTypes_Pkg d_target;
  L_internal_Type_Obu_BasicTypes_Pkg d_eoa;
  L_internal_Type_Obu_BasicTypes_Pkg d_svl;
  kcg_bool Preindication_EBD_location_valid;
  kcg_bool Preindication_SBD_location_valid;
  kcg_bool RSM_start_location_EBD_valid;
  kcg_bool RSM_start_location_SBD_valid;
} SDM_Locations_T_SDM_Types_Pkg;

/* SDM_Types_Pkg::SDM_Commands_T/ */
typedef struct kcg_tag_SDM_Commands_T_SDM_Types_Pkg {
  kcg_bool valid;
  V_odometry_Type_Obu_BasicTypes_Pkg estimatedSpeed;
  kcg_bool valid_v_est;
  V_odometry_Type_Obu_BasicTypes_Pkg permittedSpeed;
  kcg_bool valid_v_permitted;
  V_odometry_Type_Obu_BasicTypes_Pkg releaseSpeed;
  kcg_bool valid_v_release;
  V_odometry_Type_Obu_BasicTypes_Pkg mrdtSpeed;
  kcg_bool valid_v_mrdt;
  V_odometry_Type_Obu_BasicTypes_Pkg sbiSpeed;
  kcg_bool valid_v_sbi;
  L_internal_Type_Obu_BasicTypes_Pkg targetDistance;
  kcg_bool valid_targetDistance;
  SupervisionStatus_T_SDM_Types_Pkg supervisionStatus;
  SDM_Types_T_SDM_Types_Pkg sdmType;
  SupervisionStatus_T_SDM_Types_Pkg revokedSupervisionStatus;
  SupervisionStatus_T_SDM_Types_Pkg triggeredSupervisionStatus;
  kcg_bool revokedSB;
  kcg_bool triggeredSB;
  kcg_bool revokedEB;
  kcg_bool triggeredEB;
  kcg_bool revokedTCO;
  kcg_bool triggeredTCO;
  kcg_bool ebCmd;
} SDM_Commands_T_SDM_Types_Pkg;

/* TrackAtlasTypes::Gradient_section_t/ */
typedef struct kcg_tag_Gradient_section_t_TrackAtlasTypes {
  kcg_bool valid;
  L_internal_Type_Obu_BasicTypes_Pkg Loc_Absolute;
  L_internal_Type_Obu_BasicTypes_Pkg Loc_LRBG;
  G_internal_Type_Obu_BasicTypes_Pkg Gradient;
  L_internal_Type_Obu_BasicTypes_Pkg L_Gradient;
} Gradient_section_t_TrackAtlasTypes;

/* TrackAtlasTypes::GradientProfile_t/ */
typedef Gradient_section_t_TrackAtlasTypes GradientProfile_t_TrackAtlasTypes[50];

typedef GradientProfile_t_TrackAtlasTypes _112_array[50];

/* Obu_BasicTypes_Pkg::OdometryLocations_T/ */
typedef struct kcg_tag_OdometryLocations_T_Obu_BasicTypes_Pkg {
  L_internal_Type_Obu_BasicTypes_Pkg o_nominal;
  L_internal_Type_Obu_BasicTypes_Pkg o_min;
  L_internal_Type_Obu_BasicTypes_Pkg o_max;
} OdometryLocations_T_Obu_BasicTypes_Pkg;

typedef OdometryLocations_T_Obu_BasicTypes_Pkg _163_array[8];

/* Obu_BasicTypes_Pkg::LocWithInAcc_T/ */
typedef struct kcg_tag_LocWithInAcc_T_Obu_BasicTypes_Pkg {
  L_internal_Type_Obu_BasicTypes_Pkg nominal;
  L_internal_Type_Obu_BasicTypes_Pkg d_min;
  L_internal_Type_Obu_BasicTypes_Pkg d_max;
} LocWithInAcc_T_Obu_BasicTypes_Pkg;

/* TrainPosition_Types_Pck::infoFromLinking_T/ */
typedef struct kcg_tag_infoFromLinking_T_TrainPosition_Types_Pck {
  kcg_bool valid;
  NID_BG nid_bg_fromLinkingBG;
  NID_C nid_c_fromLinkingBG;
  LocWithInAcc_T_Obu_BasicTypes_Pkg expectedLocation;
  LocWithInAcc_T_Obu_BasicTypes_Pkg d_link;
  LinkedBG_T_BG_Types_Pkg linkingInfo;
} infoFromLinking_T_TrainPosition_Types_Pck;

typedef LocWithInAcc_T_Obu_BasicTypes_Pkg _130_array[41];

/* ProvidePositionReport_Pkg::ReportedBG_T/ */
typedef struct kcg_tag_ReportedBG_T_ProvidePositionReport_Pkg {
  kcg_bool valid;
  NID_BG nidBG;
  LocWithInAcc_T_Obu_BasicTypes_Pkg location;
} ReportedBG_T_ProvidePositionReport_Pkg;

/* ProvidePositionReport_Pkg::AddBGToFIFO/,
   ProvidePositionReport_Pkg::BG_hasBeenReported/,
   ProvidePositionReport_Pkg::ProvidePositionReport/,
   ProvidePositionReport_Pkg::ReportedBGList_T/ */
typedef ReportedBG_T_ProvidePositionReport_Pkg ReportedBGList_T_ProvidePositionReport_Pkg[8];

/* Level_And_Mode_Types_Pkg::T_LevelTransition/ */
typedef struct kcg_tag_T_LevelTransition_Level_And_Mode_Types_Pkg {
  kcg_bool is_set;
  T_LevelTansitionInfo_Level_And_Mode_Types_Pkg transition;
  NID_LRBG LRBG;
  L_internal_Type_Obu_BasicTypes_Pkg referenceLocation;
} T_LevelTransition_Level_And_Mode_Types_Pkg;

/* InputManagement::Input_Level_Transition/,
   Level_And_Mode_Types_Pkg::T_LevelTransition_PriorityTable/ */
typedef T_LevelTransition_Level_And_Mode_Types_Pkg T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg[7];

/* Level_And_Mode_Types_Pkg::T_Data_From_Track_To_Level/ */
typedef struct kcg_tag_T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg {
  T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg level_transition_priority_table;
  T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg conditionnalTransition;
  kcg_bool receivedL2L3MA_track;
  kcg_bool receivedL1MA_track;
} T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg;

/* Level_And_Mode_Types_Pkg::T_AnnouncedLevel/ */
typedef struct kcg_tag_T_AnnouncedLevel_Level_And_Mode_Types_Pkg {
  T_LevelTransition_Level_And_Mode_Types_Pkg LevelTransition;
  kcg_bool IsAvailableForUse;
} T_AnnouncedLevel_Level_And_Mode_Types_Pkg;

/* Obu_BasicTypes_Pkg::V_internal_Type/ */
typedef kcg_int32 V_internal_Type_Obu_BasicTypes_Pkg;

/* TrackAtlasTypes::StaticSpeedSection_t/ */
typedef struct kcg_tag_StaticSpeedSection_t_TrackAtlasTypes {
  kcg_bool valid;
  L_internal_Type_Obu_BasicTypes_Pkg d_static_abs;
  L_internal_Type_Obu_BasicTypes_Pkg d_static_LRBG;
  kcg_bool q_train_length_corr;
  V_internal_Type_Obu_BasicTypes_Pkg v_static;
} StaticSpeedSection_t_TrackAtlasTypes;

/* TrackAtlasTypes::StaticSpeedProfile_t/ */
typedef StaticSpeedSection_t_TrackAtlasTypes StaticSpeedProfile_t_TrackAtlasTypes[50];

typedef StaticSpeedProfile_t_TrackAtlasTypes _170_array[110];

typedef StaticSpeedProfile_t_TrackAtlasTypes _113_array[50];

/* DMI_Types_Pkg::speedSupervisionForDMI_T/ */
typedef struct kcg_tag_speedSupervisionForDMI_T_DMI_Types_Pkg {
  kcg_bool valid;
  V_internal_Type_Obu_BasicTypes_Pkg targetSpeed;
  V_internal_Type_Obu_BasicTypes_Pkg permittedSpeed;
  V_internal_Type_Obu_BasicTypes_Pkg releaseSpeed;
  L_internal_Type_Obu_BasicTypes_Pkg locationBrakeTarget;
  L_internal_Type_Obu_BasicTypes_Pkg location_brake_curve_starting_point;
  V_internal_Type_Obu_BasicTypes_Pkg interventionSpeed;
  M_SUPERVISION_STATUS_DMI_Types_Pkg sup_status;
  M_SupervisionDisplay_T_DMI_Types_Pkg supervisionDisplay;
  L_internal_Type_Obu_BasicTypes_Pkg distanceIndicationPoint;
} speedSupervisionForDMI_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::movementAuthorityForDMI_T/ */
typedef struct kcg_tag_movementAuthorityForDMI_T_DMI_Types_Pkg {
  kcg_bool valid;
  L_internal_Type_Obu_BasicTypes_Pkg location_LOA;
  V_internal_Type_Obu_BasicTypes_Pkg v_LOA;
} movementAuthorityForDMI_T_DMI_Types_Pkg;

/* TrackAtlasTypes::DP_or_OL_t/ */
typedef struct kcg_tag_DP_or_OL_t_TrackAtlasTypes {
  L_internal_Type_Obu_BasicTypes_Pkg d_DP_or_OL;
  V_internal_Type_Obu_BasicTypes_Pkg v_release;
  kcg_bool calc_v_release_onboard;
} DP_or_OL_t_TrackAtlasTypes;

/* TargetManagement_types::Target_T/ */
typedef struct kcg_tag_Target_T_TargetManagement_types {
  TargetType_T_TargetManagement_types targetType;
  L_internal_Type_Obu_BasicTypes_Pkg distance;
  V_internal_Type_Obu_BasicTypes_Pkg speed;
  kcg_bool valid;
} Target_T_TargetManagement_types;

/* DMI_Types_Pkg::BCD/ */
typedef kcg_int32 BCD_DMI_Types_Pkg;

/* NID_MN/ */
typedef kcg_int32 NID_MN;

/* Packet_Types_Pkg::P45_RadioNetworkRegistration_T/ */
typedef struct kcg_tag_P45_RadioNetworkRegistration_T_Packet_Types_Pkg {
  kcg_bool valid;
  Q_DIR q_dir;
  NID_MN nid_mn;
} P45_RadioNetworkRegistration_T_Packet_Types_Pkg;

/* MoRC_Pck::radioNetWorkIDs_T/ */
typedef struct kcg_tag_radioNetWorkIDs_T_MoRC_Pck {
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg defaultID;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg memorizedID;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg ID_fromDriver;
} radioNetWorkIDs_T_MoRC_Pck;

/* API_RadioCommunication_Pkg::RadioManagement_T/ */
typedef struct kcg_tag_RadioManagement_T_API_RadioCommunication_Pkg {
  kcg_bool valid;
  cmdRadioUnit_T_API_RadioCommunication_Pkg cmd;
  NID_MN networkID;
} RadioManagement_T_API_RadioCommunication_Pkg;

/* NID_OPERATIONAL/ */
typedef kcg_int32 NID_OPERATIONAL;

/* TrainPosition_Types_Pck::trainProperties_T/ */
typedef struct kcg_tag_trainProperties_T_TrainPosition_Types_Pck {
  NID_ENGINE nid_engine;
  NID_OPERATIONAL nid_operational;
  L_TRAIN l_train;
  LocWithInAcc_T_Obu_BasicTypes_Pkg d_baliseAntenna_2_frontend;
  LocWithInAcc_T_Obu_BasicTypes_Pkg d_frontend_2_rearend;
  LocWithInAcc_T_Obu_BasicTypes_Pkg locationAccuracy_DefaultValue;
  LocWithInAcc_T_Obu_BasicTypes_Pkg centerDetectionAcc_DefaultValue;
} trainProperties_T_TrainPosition_Types_Pck;

typedef trainProperties_T_TrainPosition_Types_Pck _166_array[41];

typedef trainProperties_T_TrainPosition_Types_Pck _152_array[33];

/* TM_TrainToTrack::P005/ */
typedef struct kcg_tag_P005_TM_TrainToTrack {
  kcg_bool valid;
  NID_PACKET nid_packet;
  L_PACKET l_packet;
  NID_OPERATIONAL nid_opeartional;
} P005_TM_TrainToTrack;

/* Packet_TrainTypes_Pkg::PT5_TrainRunningNumber/ */
typedef struct kcg_tag_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg {
  kcg_bool valid;
  NID_OPERATIONAL TrainRunningNumber;
} PT5_TrainRunningNumber_Packet_TrainTypes_Pkg;

/* Obu_BasicTypes_Pkg::T_internal_Type/ */
typedef kcg_int32 T_internal_Type_Obu_BasicTypes_Pkg;

/* DMI_Messages_Bothways_Pkg::DMI_Driver_Identifier_T/ */
typedef struct kcg_tag__5_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  driverIdentifier_T_DMI_Messages_Bothways_Pkg driverIdentifier;
} _5_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg;

/* Obu_BasicTypes_Pkg::odometry_T/ */
typedef struct kcg_tag_odometry_T_Obu_BasicTypes_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg timestamp;
  OdometryLocations_T_Obu_BasicTypes_Pkg odo;
  OdometrySpeeds_T_Obu_BasicTypes_Pkg speed;
  A_internal_Type_Obu_BasicTypes_Pkg acceleration;
  odoMotionState_T_Obu_BasicTypes_Pkg motionState;
  odoMotionDirection_T_Obu_BasicTypes_Pkg motionDirection;
} odometry_T_Obu_BasicTypes_Pkg;

typedef odometry_T_Obu_BasicTypes_Pkg _196_array[110];

/* BG_Types_Pkg::BG_Header_T/ */
typedef struct kcg_tag_BG_Header_T_BG_Types_Pkg {
  kcg_bool valid;
  Q_UPDOWN q_updown;
  M_VERSION m_version;
  Q_MEDIA q_media;
  N_TOTAL n_total;
  M_MCOUNT m_mcount;
  NID_C nid_c;
  NID_BG nid_bg;
  Q_LINK q_link;
  odometry_T_Obu_BasicTypes_Pkg bgPosition;
  LocWithInAcc_T_Obu_BasicTypes_Pkg BG_centerDetectionInaccuraccuracies;
  Q_NVLOCACC q_nvlocacc;
  kcg_bool noCoordinateSystemHasBeenAssigned;
  Q_DIRLRBG trainOrientationToBG;
  Q_DIRTRAIN trainRunningDirectionToBG;
} BG_Header_T_BG_Types_Pkg;

/* BG_Types_Pkg::passedBG_T/ */
typedef struct kcg_tag_passedBG_T_BG_Types_Pkg {
  kcg_bool valid;
  BG_Header_T_BG_Types_Pkg BG_Header;
  LinkedBGs_T_BG_Types_Pkg linkedBGs;
} passedBG_T_BG_Types_Pkg;

/* BG_Types_Pkg::centerOfBalisePosition_T/ */
typedef struct kcg_tag_centerOfBalisePosition_T_BG_Types_Pkg {
  odometry_T_Obu_BasicTypes_Pkg odometerOfBaliseDetection;
  LocWithInAcc_T_Obu_BasicTypes_Pkg BG_centerDetectionInaccuraccuracies;
} centerOfBalisePosition_T_BG_Types_Pkg;

/* API_Msg_Pkg::API_TelegramHeader_T/ */
typedef struct kcg_tag_API_TelegramHeader_T_API_Msg_Pkg {
  kcg_bool present;
  kcg_bool checkResult;
  kcg_bool api_bad_balise_received;
  TelegramHeader_T_BG_Types_Pkg api_header;
  centerOfBalisePosition_T_BG_Types_Pkg centerOfBalisePosition;
} API_TelegramHeader_T_API_Msg_Pkg;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Identifier_T/ */
typedef struct kcg_tag_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  DMI_DMI_Identifier_T_DMI_Types_Pkg DMI_Identifier;
  DMI_Cabin_Identifier_T_DMI_Types_Pkg Cabin_Identifier;
  L_TEXT l_name;
  DMI_TEXT_DMI_Types_Pkg DMI_name;
  M_VERSION m_version;
} DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg;

/* DMI_Types_Pkg::DMI_EVC_status_T/ */
typedef struct kcg_tag_DMI_EVC_status_T_DMI_Types_Pkg {
  kcg_bool DMI_Active;
  kcg_bool DMI_Error;
  kcg_bool DMI_DriverIdValidated;
  kcg_bool DMI_LevelSelectedByDirver;
  kcg_bool DMI_TrainRunningNumberFirstValidation;
  kcg_bool DMI_TrainRunningNumberValidated;
  kcg_bool DMI_TrainDataValidated;
  kcg_bool DMI_StartReceived;
  DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg DMI_Identifier;
} DMI_EVC_status_T_DMI_Types_Pkg;

/* DMI_Messages_Bothways_Pkg::DMI_Train_Data_T/ */
typedef struct kcg_tag_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  NC_TRAIN trainCategory;
  L_internal_Type_Obu_BasicTypes_Pkg l_train;
  M_BRAKEPERCT_DMI_Types_Pkg m_brakeperct;
  V_internal_Type_Obu_BasicTypes_Pkg v_maxTrain;
  M_AXLELOADCAT m_axleLoad;
  M_AIRTIGHT m_airTight;
  M_LOADINGGAUGE m_loadingGauge;
} DMI_Train_Data_T_DMI_Messages_Bothways_Pkg;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Identifier_Request_T/ */
typedef struct kcg_tag_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  M_VERSION ERTMS_Version;
  M_VERSION EVC_Version;
  L_TEXT l_name;
  DMI_TEXT_DMI_Types_Pkg x_name;
  L_TEXT l_extra;
} DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Text_Message_T/ */
typedef struct kcg_tag_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  DMI_TextMessage_ID_T_DMI_Types_Pkg textMessage_ID;
  DMI_Q_TEXT_DMI_Types_Pkg q_text;
  L_TEXT l_text;
  DMI_TEXT_DMI_Types_Pkg x_text;
  Q_TEXTCLASS q_textClass;
  Q_TEXTCONFIRM q_textConfirm;
} DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg;

/* DMI_Types_Pkg::DMI_TXT_MSG_status_T/ */
typedef struct kcg_tag_DMI_TXT_MSG_status_T_DMI_Types_Pkg {
  kcg_bool valid;
  DMI_TextMessage_ID_T_DMI_Types_Pkg dmi_textMessageID;
  T_internal_Type_Obu_BasicTypes_Pkg timeStamp;
  Q_TEXTREPORT textReport;
  DMI_context_TXT_MSG_T_DMI_Types_Pkg context;
  NID_TEXTMESSAGE nid_textmessage;
  M_LEVEL whichLevel;
  M_MODE whichMode;
} DMI_TXT_MSG_status_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_TXT_MSGList_status_T/,
   manage_TextMessages_Pkg::clearStatus/,
   manage_TextMessages_Pkg::findForCheck/,
   manage_TextMessages_Pkg::saveStatus/ */
typedef DMI_TXT_MSG_status_T_DMI_Types_Pkg DMI_TXT_MSGList_status_T_DMI_Types_Pkg[31];

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Dynamic_T/ */
typedef struct kcg_tag_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  V_internal_Type_Obu_BasicTypes_Pkg v_train;
  L_internal_Type_Obu_BasicTypes_Pkg location_front_train;
  L_internal_Type_Obu_BasicTypes_Pkg location_brake_target;
  V_internal_Type_Obu_BasicTypes_Pkg v_target;
  V_internal_Type_Obu_BasicTypes_Pkg v_permitted;
  V_internal_Type_Obu_BasicTypes_Pkg v_release;
  L_internal_Type_Obu_BasicTypes_Pkg location_brake_curve_starting_point;
  V_internal_Type_Obu_BasicTypes_Pkg v_intervention;
  M_MODE mode;
  DMI_level_T_DMI_Types_Pkg level;
  NID_C nid_c;
  kcg_bool nid_c_valid;
  M_SupervisionDisplay_T_DMI_Types_Pkg m_warning;
  M_SUPERVISION_STATUS_DMI_Types_Pkg sup_status;
  L_internal_Type_Obu_BasicTypes_Pkg location_LOA;
  V_internal_Type_Obu_BasicTypes_Pkg v_LOA;
  L_internal_Type_Obu_BasicTypes_Pkg location_KP_Balise_Track;
  L_internal_Type_Obu_BasicTypes_Pkg distance_KP_Balise;
  L_internal_Type_Obu_BasicTypes_Pkg distance_to_TSA;
  connectionStatusRadioUnit_T_API_RadioCommunication_Pkg radioConnectionStatus;
  L_internal_Type_Obu_BasicTypes_Pkg distanceIndicationPoint;
} DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Entry_Request_T/ */
typedef struct kcg_tag_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  DMI_List_Entry_Request_T_DMI_Types_Pkg entry_request;
} DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Display_Control_T/ */
typedef struct kcg_tag_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg {
  kcg_bool valid;
  kcg_bool cab_is_active;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
} DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Driver_Request_T/ */
typedef struct kcg_tag_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  DMI_Request_T_DMI_Types_Pkg m_request;
} DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_EVC_Radio_Net_Data_T/ */
typedef struct kcg_tag_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  NID_MN nid_mn;
} DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Train_Data_Ack_T/ */
typedef struct kcg_tag_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  kcg_bool acknowledged;
} DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Radio_Net_Data_T/ */
typedef struct kcg_tag_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
} DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_System_Version_T/ */
typedef struct kcg_tag_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  M_VERSION system_version;
} DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg;

/* DMI_Messages_Bothways_Pkg::DMI_Adhesion_Factor_Data_T/ */
typedef struct kcg_tag_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  M_ADHESION adhesionFactor;
} DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Text_Message_Ack_T/ */
typedef struct kcg_tag_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  DMI_TextMessage_ID_T_DMI_Types_Pkg textMessage_ID;
  kcg_bool acknowledged;
} DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg;

/* TrackAtlasTypes::MovementAuthoritySection_t/ */
typedef struct kcg_tag__2_MovementAuthoritySection_t_TrackAtlasTypes {
  kcg_bool valid;
  kcg_bool q_endsection;
  L_internal_Type_Obu_BasicTypes_Pkg l_section;
  kcg_bool q_sectiontimer;
  T_internal_Type_Obu_BasicTypes_Pkg t_sectiontimer;
  L_internal_Type_Obu_BasicTypes_Pkg d_sectiontimerstoploc;
} _2_MovementAuthoritySection_t_TrackAtlasTypes;

/* TrackAtlasTypes::MovementAuthoritySectionlist_t/ */
typedef _2_MovementAuthoritySection_t_TrackAtlasTypes MovementAuthoritySectionlist_t_TrackAtlasTypes[10];

typedef MovementAuthoritySectionlist_t_TrackAtlasTypes _178_array[10];

/* TA_MA_new::AccuDistanceProfileMA/ */
typedef struct kcg_tag_AccuDistanceProfileMA_TA_MA_new {
  MovementAuthoritySectionlist_t_TrackAtlasTypes sections;
  L_internal_Type_Obu_BasicTypes_Pkg d_endsection;
} AccuDistanceProfileMA_TA_MA_new;

/* SDM_Types_Pkg::trainData_internal_t/ */
typedef struct kcg_tag_trainData_internal_t_SDM_Types_Pkg {
  kcg_bool isSB_FBAvailable;
  kcg_bool isSB_CmdAvailable;
  kcg_bool isTCOAvailable;
  T_internal_Type_Obu_BasicTypes_Pkg T_traction_cut_off;
  L_internal_Type_Obu_BasicTypes_Pkg offsetAntennaL1;
  T_internal_Type_Obu_BasicTypes_Pkg T_b_limit;
} trainData_internal_t_SDM_Types_Pkg;

typedef trainData_internal_t_SDM_Types_Pkg _197_array[110];

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Menu_Request_T/ */
typedef struct kcg_tag_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  DMI_Available_Menu_T_DMI_Types_Pkg available_menu;
} DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg;

/* TrackAtlasTypes::Endtimer_t/ */
typedef struct kcg_tag_Endtimer_t_TrackAtlasTypes {
  T_internal_Type_Obu_BasicTypes_Pkg t_endtimer;
  L_internal_Type_Obu_BasicTypes_Pkg d_endtimerstoploc;
} Endtimer_t_TrackAtlasTypes;

/* TrackAtlasTypes::MovementAuthority_t/ */
typedef struct kcg_tag_MovementAuthority_t_TrackAtlasTypes {
  kcg_bool valid;
  MA_Level_t_TrackAtlasTypes Level;
  Q_DIR q_dir;
  V_internal_Type_Obu_BasicTypes_Pkg v_main;
  V_internal_Type_Obu_BasicTypes_Pkg v_loa;
  kcg_bool t_loa_unlimited;
  T_internal_Type_Obu_BasicTypes_Pkg t_loa;
  N_ITER n_iter;
  MovementAuthoritySectionlist_t_TrackAtlasTypes sections;
  kcg_bool q_dangerpoint;
  DP_or_OL_t_TrackAtlasTypes dangerpoint;
  kcg_bool q_overlap;
  DP_or_OL_t_TrackAtlasTypes overlap;
  kcg_bool q_endtimer;
  Endtimer_t_TrackAtlasTypes endtimer_t;
} MovementAuthority_t_TrackAtlasTypes;

/* DMI_Messages_Bothways_Pkg::DMI_Train_Running_Number_T/ */
typedef struct kcg_tag_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  NID_OPERATIONAL trainRunningNumber;
} DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg;

/* DMI_Messages_Bothways_Pkg::DMI_Level_Data_T/ */
typedef struct kcg_tag_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  DMI_level_T_DMI_Types_Pkg level;
} DMI_Level_Data_T_DMI_Messages_Bothways_Pkg;

/* TIU_Types_Pkg::NID_ctraction_T/ */
typedef kcg_int32 NID_ctraction_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::M_voltage_T/ */
typedef struct kcg_tag_M_voltage_T_TIU_Types_Pkg {
  M_voltage_types_T_TIU_Types_Pkg voltage_type;
  NID_ctraction_T_TIU_Types_Pkg NID_ctraction;
} M_voltage_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::M_current_T/ */
typedef struct kcg_tag_M_current_T_TIU_Types_Pkg {
  kcg_bool no_restriction;
  kcg_int32 restriction;
} M_current_T_TIU_Types_Pkg;

/* TargetManagement_pkg::extractTargetsMRSPACC/ */
typedef struct kcg_tag_extractTargetsMRSPACC_TargetManagement_pkg {
  Target_list_MRSP_real_T_TargetManagement_types targetList;
  kcg_int32 lastInsertedTargetIndex;
} extractTargetsMRSPACC_TargetManagement_pkg;

/* TM::P046_sections_array_flat_T/, TM_conversions::C_P046_compr_onboard/ */
typedef kcg_int32 P046_sections_array_flat_T_TM[66];

typedef P046_sections_array_flat_T_TM array_int32_66_33[33];

typedef struct kcg_tag_struct_279611 {
  kcg_bool valid;
  kcg_int32 nid_message;
  kcg_int32 l_message;
  kcg_int32 t_train;
  kcg_int32 nid_engine;
} struct_279611;

/* TM_radio_messages::M_155_T/ */
typedef struct_279611 M_155_T_TM_radio_messages;

/* TM_radio_messages::M_156_T/ */
typedef struct_279611 M_156_T_TM_radio_messages;

/* TM_radio_messages::M_159_T/ */
typedef struct_279611 M_159_T_TM_radio_messages;

/* TM_radio_messages::M_154_T/ */
typedef struct_279611 M_154_T_TM_radio_messages;

/* TM_radio_messages::M_129_T/ */
typedef struct_279611 M_129_T_TM_radio_messages;

/* TM_radio_messages::M_136_T/ */
typedef struct_279611 M_136_T_TM_radio_messages;

/* SDM_GradientAcceleration_Pkg::ACC/ */
typedef struct kcg_tag_ACC_SDM_GradientAcceleration_Pkg {
  L_internal_real_Type_SDM_Types_Pkg frontPos;
  kcg_int32 frontIndex;
  L_internal_real_Type_SDM_Types_Pkg rearPos;
  kcg_int32 rearIndex;
  GradientProfile_real_compensated_t_SDM_GradientAcceleration_types compensatedGradientProfile;
} ACC_SDM_GradientAcceleration_Pkg;

typedef kcg_int32 array_int32_964[964];

typedef kcg_int32 array_int32_48[48];

/* Common_Types_Pkg::MetadataElement_T/ */
typedef struct kcg_tag_MetadataElement_T_Common_Types_Pkg {
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  kcg_bool valid;
  kcg_int32 startAddress;
  kcg_int32 endAddress;
} MetadataElement_T_Common_Types_Pkg;

typedef MetadataElement_T_Common_Types_Pkg _182_array[29];

/* Common_Types_Pkg::Metadata_T/,
   InformationFilter_Pkg::FirstFilter::FirstFilter/,
   InformationFilter_Pkg::SecondFilter::DetermineBufferMessage/,
   InformationFilter_Pkg::ThirdFilter::ThirdFilter/,
   ValidateDataDirectionGeneral_Pkg::validateDataDirection_General/ */
typedef MetadataElement_T_Common_Types_Pkg Metadata_T_Common_Types_Pkg[30];

typedef Metadata_T_Common_Types_Pkg _148_array[30];

typedef kcg_int32 array_int32_961[961];

typedef kcg_int32 array_int32_128[128];

/* TM::P015_sections_array_flat_T/ */
typedef array_int32_128 P015_sections_array_flat_T_TM;

/* TM::P012_sections_array_flat_T/ */
typedef array_int32_128 P012_sections_array_flat_T_TM;

typedef array_int32_128 array_int32_128_32[32];

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::linkedBG_index_T/ */
typedef struct kcg_tag_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg {
  kcg_int32 previousLinkedBG_idx;
  kcg_int32 currentIndex;
  kcg_int32 subsequentLinkedBG_idx;
} linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg;

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBGs/,
   CalculateTrainPosition_Pkg::BG_relocation_Pkg::linkedBGs_indices_T/ */
typedef linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg[41];

typedef kcg_int32 array_int32_131[131];

typedef struct kcg_tag_struct_279212 {
  kcg_bool valid;
  kcg_int32 Loc_Abs;
  kcg_int32 Loc_LRBG;
  kcg_int32 MRS;
} struct_279212;

/* TrackAtlasTypes::MRSP_section_t/ */
typedef struct_279212 MRSP_section_t_TrackAtlasTypes;

/* TA_Export::MRSP_to_DMI/, TrackAtlasTypes::MRSP_Profile_t/ */
typedef MRSP_section_t_TrackAtlasTypes MRSP_Profile_t_TrackAtlasTypes[110];

typedef MRSP_Profile_t_TrackAtlasTypes _183_array[110];

/* TrackAtlasTypes::DataForSupervision_nextGen_t/ */
typedef struct kcg_tag_DataForSupervision_nextGen_t_TrackAtlasTypes {
  kcg_bool freshMA;
  MovementAuthority_t_TrackAtlasTypes MA;
  kcg_bool freshGradientProfile;
  GradientProfile_t_TrackAtlasTypes GradientProfile;
  kcg_bool freshMRSP;
  MRSP_Profile_t_TrackAtlasTypes MRSP;
} DataForSupervision_nextGen_t_TrackAtlasTypes;

/* DMI_Types_Pkg::DMI_speedProfileElement_T/ */
typedef struct_279212 DMI_speedProfileElement_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_SpeedProfileArray_T/,
   manage_DMI_Output_Pkg::copyTrackDescription/ */
typedef DMI_speedProfileElement_T_DMI_Types_Pkg DMI_SpeedProfileArray_T_DMI_Types_Pkg[32];

/* DMI_Types_Pkg::DMI_speedProfile_T/ */
typedef struct kcg_tag_DMI_speedProfile_T_DMI_Types_Pkg {
  kcg_bool profileChanged;
  DMI_SpeedProfileArray_T_DMI_Types_Pkg speedProfiles;
} DMI_speedProfile_T_DMI_Types_Pkg;

typedef kcg_int32 array_int32_42[42];

typedef kcg_int32 array_int32_33[33];

typedef kcg_int32 array_int32_30[30];

typedef struct kcg_tag_struct_279025 {
  kcg_bool valid;
  kcg_int32 nid_c;
} struct_279025;

/* TM_baseline2::P003V1_section_enum_T/ */
typedef struct_279025 P003V1_section_enum_T_TM_baseline2;

typedef P003V1_section_enum_T_TM_baseline2 _136_array[1];

/* TM::P003_OBU_nid_c_section_enum_T/ */
typedef struct_279025 P003_OBU_nid_c_section_enum_T_TM;

/* Packet_Types_Pkg::nidC_T/ */
typedef struct_279025 nidC_T_Packet_Types_Pkg;

/* Packet_Types_Pkg::nidCArray_T/ */
typedef nidC_T_Packet_Types_Pkg nidCArray_T_Packet_Types_Pkg[7];

/* Packet_Types_Pkg::P3_NationalValues_T/ */
typedef struct kcg_tag_P3_NationalValues_T_Packet_Types_Pkg {
  kcg_bool valid;
  Q_DIR q_dir;
  D_VALIDNV d_validnv;
  nidCArray_T_Packet_Types_Pkg nid_cArray;
  V_NVSHUNT v_nvshunt;
  V_NVSTFF v_nvstff;
  V_NVONSIGHT v_nvonsight;
  V_NVLIMSUPERV v_nvlimsuperv;
  V_NVUNFIT v_nvunfit;
  V_NVREL v_nvrel;
  D_NVROLL d_nvroll;
  Q_NVSBTSMPERM q_nvsbtsmperm;
  Q_NVEMRRLS q_nvemrrls;
  Q_NVGUIPERM q_nvguiperm;
  Q_NVSBFBPERM q_nvsbfbperm;
  Q_NVINHSMICPERM q_nvinhsmicperm;
  V_NVALLOWOVTRP v_nvallowovtrp;
  V_NVSUPOVTRP v_nvsupovtrp;
  D_NVOVTRP d_nvovtrp;
  T_NVOVTRP t_nvovtrp;
  D_NVPOTRP d_nvpotrp;
  M_NVCONTACT m_nvcontact;
  T_NVCONTACT t_nvcontact;
  M_NVDERUN m_nvderun;
  D_NVSTFF d_nvstff;
  Q_NVDRIVER_ADHES q_nvdriver_adhes;
  A_NVMAXREDADH1 a_nvmaxredadh1;
  A_NVMAXREDADH2 a_nvmaxredadh2;
  A_NVMAXREDADH3 a_nvmaxredadh3;
  Q_NVLOCACC q_nvlocacc;
  M_NVAVADH m_nvavadh;
  M_NVEBCL m_nvebcl;
  Q_NVKINT q_nvkint;
  nvkvintsetArray_T_Packet_Types_Pkg nvkvintsetArray;
  nvkrintArray_T_Packet_Types_Pkg nvkrintArray;
  M_NVKTINT m_nvktint;
} P3_NationalValues_T_Packet_Types_Pkg;

typedef struct_279025 _191_array[31];

typedef struct_279025 _157_array[32];

/* TM_baseline2::P003V1_sectionlist_enum_T/ */
typedef _157_array P003V1_sectionlist_enum_T_TM_baseline2;

/* TM_baseline2::P003V1_OBU_T/ */
typedef struct kcg_tag_P003V1_OBU_T_TM_baseline2 {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_VALIDNV d_validnv;
  N_ITER n_iter;
  P003V1_sectionlist_enum_T_TM_baseline2 SECTIONS;
  V_NVSHUNT v_nvshunt;
  V_NVSTFF v_nvstff;
  V_NVONSIGHT v_nvonsight;
  V_NVUNFIT v_nvunfit;
  V_NVREL v_nvrel;
  D_NVROLL d_nvroll;
  Q_NVSBTSMPERM q_nvsbtsmperm;
  Q_NVEMRRLS q_nvemrrls;
  V_NVALLOWOVTRP v_nvallowovtrp;
  V_NVSUPOVTRP v_nvsopovtrp;
  D_NVOVTRP d_nvovtrp;
  T_NVOVTRP t_nvovtrp;
  D_NVPOTRP d_nvpotrp;
  M_NVCONTACT m_nvcontact;
  T_NVCONTACT t_nvcontact;
  M_NVDERUN m_nvderun;
  D_NVSTFF d_nvstff;
  Q_NVDRIVER_ADHES q_nvdriver_adhes;
} P003V1_OBU_T_TM_baseline2;

/* TM::P003_OBU_nid_c_sectionlist_enum_T/ */
typedef _157_array _16_P003_OBU_nid_c_sectionlist_enum_T_TM;

typedef struct kcg_tag_struct_278986 {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  kcg_int32 d_reverse;
  kcg_int32 v_reverse;
} struct_278986;

/* TM::P139_OBU_T/ */
typedef struct_278986 P139_OBU_T_TM;

/* Packet_Types_Pkg::P139_ReversingSupervisionInformation_T/ */
typedef struct_278986 P139_ReversingSupervisionInformation_T_Packet_Types_Pkg;

typedef kcg_int32 array_int32_24[24];

/* TM::Array24/ */
typedef array_int32_24 Array24_TM;

/* DATA::DMI_Dynamic_int_array_T/ */
typedef array_int32_24 DMI_Dynamic_int_array_T_DATA;

/* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store/IfBlock1:else:then:,
   TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store/IfBlock1:then:,
   TA_EmergencyStop::NID_EM_Store::NID_EM_STORE_Acc_T/,
   TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Add/,
   TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Find/,
   TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Remove/ */
typedef struct kcg_tag_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store {
  kcg_bool handled;
  NID_EM nid_em;
  kcg_int32 nfree;
} NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store;

/* TM::P005_sections_array_flat_T/, TM_conversions::C_P005_compr_onboard/ */
typedef kcg_int32 P005_sections_array_flat_T_TM[95];

typedef P005_sections_array_flat_T_TM array_int32_95_33[33];

/* TrainPosition_Types_Pck::positionedBG_T/ */
typedef struct kcg_tag_positionedBG_T_TrainPosition_Types_Pck {
  kcg_bool valid;
  NID_C nid_c;
  NID_BG nid_bg;
  Q_LINK q_link;
  LocWithInAcc_T_Obu_BasicTypes_Pkg location;
  kcg_int32 seqNoOnTrack;
  infoFromLinking_T_TrainPosition_Types_Pck infoFromLinking;
  passedBG_T_BG_Types_Pkg infoFromPassing;
  kcg_bool missed;
} positionedBG_T_TrainPosition_Types_Pck;

/* TrainPosition_Types_Pck::positionErrors_T/ */
typedef struct kcg_tag_positionErrors_T_TrainPosition_Types_Pck {
  kcg_bool outOfMemSpace;
  kcg_bool passedBG_foundNotWhereExpected;
  kcg_bool positionCalculation_inconsistent;
  kcg_bool linkedBGMissed;
  kcg_bool BGpassedInUnexpectedDirection;
  kcg_bool BG_LinkingConsistencyError;
  kcg_bool twoConsecutiveLinkedBGs_missed;
  kcg_bool doubleRepositioningError;
  positionedBG_T_TrainPosition_Types_Pck bg;
} positionErrors_T_TrainPosition_Types_Pck;

/* TrainPosition_Types_Pck::trainPosition_T/ */
typedef struct kcg_tag_trainPosition_T_TrainPosition_Types_Pck {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg timestamp;
  kcg_bool trainPositionIsUnknown;
  kcg_bool noCoordinateSystemHasBeenAssigned;
  LocWithInAcc_T_Obu_BasicTypes_Pkg trainPosition;
  Location_T_Obu_BasicTypes_Pkg estimatedFrontEndPosition;
  Location_T_Obu_BasicTypes_Pkg minSafeFrontEndPosition;
  Location_T_Obu_BasicTypes_Pkg maxSafeFrontEndPostion;
  positionedBG_T_TrainPosition_Types_Pck LRBG;
  positionedBG_T_TrainPosition_Types_Pck prvLRBG;
  Q_DLRBG nominalOrReverseToLRBG;
  Q_DIRLRBG trainOrientationToLRBG;
  Q_DIRTRAIN trainRunningDirectionToLRBG;
  kcg_bool linkingIsUsedOnboard;
  Location_T_Obu_BasicTypes_Pkg estimatedRearEndPosition;
  Location_T_Obu_BasicTypes_Pkg minSafeRearEndPosition;
  Location_T_Obu_BasicTypes_Pkg maxSafeRearEndPosition;
} trainPosition_T_TrainPosition_Types_Pck;

/* Level_And_Mode_Types_Pkg::T_Data_From_Localisation/ */
typedef struct kcg_tag_T_Data_From_Localisation_Level_And_Mode_Types_Pkg {
  kcg_bool BG_In_List_Expected_BG_In_SR;
  kcg_bool BG_In_List_Expected_BG_In_SH;
  positionErrors_T_TrainPosition_Types_Pck PositionErrors;
  trainPosition_T_TrainPosition_Types_Pck Train_Position;
  Speed_T_Obu_BasicTypes_Pkg Train_Speed;
  kcg_bool Train_Standstill;
} T_Data_From_Localisation_Level_And_Mode_Types_Pkg;

typedef trainPosition_T_TrainPosition_Types_Pck _133_array[30];

/* TrainPosition_Types_Pck::trainPositionInfo_T/ */
typedef struct kcg_tag_trainPositionInfo_T_TrainPosition_Types_Pck {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg timestamp;
  LocWithInAcc_T_Obu_BasicTypes_Pkg trainPosition;
  LocWithInAcc_T_Obu_BasicTypes_Pkg trainPositionDerivedFromLastLinkedBG;
  LocWithInAcc_T_Obu_BasicTypes_Pkg trainPositionDerivedFromLastUnlinkedBG;
  positionedBG_T_TrainPosition_Types_Pck prevPassedLinkedBG;
  positionedBG_T_TrainPosition_Types_Pck lastPassedLinkedBG;
  positionedBG_T_TrainPosition_Types_Pck lastPassedUnlinkedBG;
  Speed_T_Obu_BasicTypes_Pkg speed;
  kcg_bool linkingIsUsedOnboard;
} trainPositionInfo_T_TrainPosition_Types_Pck;

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations/,
   CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead/,
   CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern/,
   CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex/,
   CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex/,
   CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id/,
   CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack/,
   CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex/,
   CalculateTrainPosition_Pkg::BG_utilities_Pkg::trimSeqNoOnTrack/,
   CalculateTrainPosition_Pkg::addAnnouncedBGs/,
   CalculateTrainPosition_Pkg::passing_a_BG/,
   TrainPosition_Types_Pck::positionedBGs_T/ */
typedef positionedBG_T_TrainPosition_Types_Pck positionedBGs_T_TrainPosition_Types_Pck[41];

typedef positionedBGs_T_TrainPosition_Types_Pck _164_array[41];

/* CalculateTrainPosition_Pkg::positionedBGs_w_overrun_T/ */
typedef struct kcg_tag_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg {
  positionedBGs_T_TrainPosition_Types_Pck BGs;
  kcg_bool overrun;
} positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg;

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::refBGs_T/ */
typedef struct kcg_tag_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg {
  positionedBG_T_TrainPosition_Types_Pck refBG;
  positionedBG_T_TrainPosition_Types_Pck prevLinkedBG;
  positionedBG_T_TrainPosition_Types_Pck prevUnlinkedBG;
  kcg_bool recalculate;
  LocWithInAcc_T_Obu_BasicTypes_Pkg sumOfBestDistances;
} refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg;

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs/,
   TrainPosition_Types_Pck::linkedBGs_asPositionedBGs_T/ */
typedef positionedBG_T_TrainPosition_Types_Pck linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck[33];

typedef positionedBG_T_TrainPosition_Types_Pck _142_array[1];

typedef positionedBG_T_TrainPosition_Types_Pck _141_array[40];

typedef positionedBG_T_TrainPosition_Types_Pck _131_array[8];

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Icons_T/ */
typedef struct kcg_tag_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  Icon_control_flag_T_DMI_Types_Pkg DMI_m_icon_control_flag;
  kcg_float32 DMI_m_icon_flashing_freq;
  Icon_group_T_DMI_Types_Pkg DMI_nid_icon_group;
  kcg_int32 DMI_nid_icon_rank;
  Area_group_T_DMI_Types_Pkg DMI_nid_area_group;
  kcg_int32 DMI_nid_area_rank;
  kcg_int32 DMI_nid_icon_identifier;
} DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg;

/* Common_Types_Pkg::filterRelatedEvents_T/ */
typedef struct kcg_tag_filterRelatedEvents_T_Common_Types_Pkg {
  kcg_bool pendingL1Transition;
  kcg_bool pendingL12L3Transition;
  kcg_bool pendingAckOfTrainDataFromRBC;
  kcg_bool emergencyStopAccepted;
  kcg_int32 lastAckTextMessageId;
  kcg_bool pendingNTCTransition;
  kcg_bool SPPAndGradientOnBoard;
  kcg_bool MACoverNotFullLength;
} filterRelatedEvents_T_Common_Types_Pkg;

/* TargetLimits_Pkg::TargetIteratorAkku/ */
typedef struct kcg_tag_TargetIteratorAkku_TargetLimits_Pkg {
  L_internal_real_Type_SDM_Types_Pkg SBI2;
  kcg_int32 index;
  TargetType_T_TargetManagement_types ttype;
  bec_t_TargetLimits_Pkg bec;
  V_internal_real_Type_SDM_Types_Pkg V_est;
  T_trac_t_TargetLimits_Pkg T;
  V_internal_real_Type_SDM_Types_Pkg V_ura;
  V_internal_real_Type_SDM_Types_Pkg V_P_MRDT_ebd;
  kcg_int32 V_P_MRDT_index;
} TargetIteratorAkku_TargetLimits_Pkg;

/* Receive_TrackSide_Msg_Pkg::BGCollector_T/ */
typedef struct kcg_tag_BGCollector_T_Receive_TrackSide_Msg_Pkg {
  kcg_bool badBaliseFlag;
  kcg_bool BGMessageSent;
  NID_C C_ID;
  NID_BG BG_ID;
  centerOfBalisePosition_T_BG_Types_Pkg balisePosition;
  centerOfBalisePosition_T_BG_Types_Pkg positionFirstContact;
  kcg_int32 collectedTelegrams;
  kcg_int32 totalTelegrams;
} BGCollector_T_Receive_TrackSide_Msg_Pkg;

typedef struct kcg_tag_struct_278116 {
  kcg_bool present;
  kcg_int32 nid_message;
  kcg_int32 t_train;
  kcg_int32 nid_engine;
  Q_MARQSTREASON xQ_MARQSTREASON;
  kcg_int32 xT_TRAIN;
  kcg_int32 xNID_EM;
  Q_EMERGENCYSTOP xQ_EMERGENCYSTOP;
  kcg_int32 xNID_TEXTMESSAGE;
} struct_278116;

/* TM_transitional::Radio_TrainTrack_Header_T/ */
typedef struct_278116 _17_Radio_TrainTrack_Header_T_TM_transitional;

/* Radio_Types_Pkg::Radio_TrainTrack_Header_T/ */
typedef struct_278116 Radio_TrainTrack_Header_T_Radio_Types_Pkg;

/* TM_radio_messages::M_TrainTrack_MessageHd_T/ */
typedef struct kcg_tag_M_TrainTrack_MessageHd_T_TM_radio_messages {
  kcg_bool valid;
  kcg_int32 nid_message;
  kcg_int32 l_message;
  kcg_int32 t_train;
  kcg_int32 nid_engine;
  kcg_int32 field1;
  kcg_int32 field2;
  kcg_int32 field3;
} M_TrainTrack_MessageHd_T_TM_radio_messages;

typedef struct kcg_tag_struct_277960 {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  kcg_int32 d_rbctr;
  kcg_int32 nid_c;
  kcg_int32 nid_rbc;
  kcg_int64 nid_radio;
  Q_SLEEPSESSION q_sleepsession;
} struct_277960;

/* TM::P131_OBU_T/ */
typedef struct_277960 P131_OBU_T_TM;

/* Packet_Types_Pkg::P131_RBCTransitionOrder_T/ */
typedef struct_277960 P131_RBCTransitionOrder_T_Packet_Types_Pkg;

/* Handover_Pkg::p131_q_rbcTransitionOrder_T/ */
typedef struct kcg_tag_p131_q_rbcTransitionOrder_T_Handover_Pkg {
  kcg_bool valid;
  MsgSource_T_Common_Types_Pkg source;
  NID_LRBG nid_lrbg;
  LocWithInAcc_T_Obu_BasicTypes_Pkg location;
  kcg_bool contactLastKnownRBC;
  kcg_bool useTheShortNumberStoredOnboard;
  P131_RBCTransitionOrder_T_Packet_Types_Pkg order;
} p131_q_rbcTransitionOrder_T_Handover_Pkg;

/* TM::P042_trackside_int_T/ */
typedef struct kcg_tag_P042_trackside_int_T_TM {
  kcg_bool valid;
  kcg_int32 NID_PACKET;
  kcg_int32 Q_DIR;
  kcg_int32 L_PACKET;
  kcg_int32 Q_RBC;
  kcg_int32 NID_C;
  kcg_int32 NID_RBC;
  kcg_int32 NID_RADIO;
  kcg_int32 Q_SLEEPSESSION;
} P042_trackside_int_T_TM;

typedef kcg_int32 array_int32_15[15];

/* TM::Array15/ */
typedef array_int32_15 Array15_TM;

/* Packet_TrainTypes_Pkg::telephoneNumber_T/ */
typedef array_int32_15 telephoneNumber_T_Packet_TrainTypes_Pkg;

/* Packet_TrainTypes_Pkg::sNID_RADIO_T/ */
typedef struct kcg_tag_sNID_RADIO_T_Packet_TrainTypes_Pkg {
  kcg_bool valid;
  telephoneNumber_T_Packet_TrainTypes_Pkg telephoneNumber;
} sNID_RADIO_T_Packet_TrainTypes_Pkg;

/* Packet_TrainTypes_Pkg::aNID_RADIO_T/ */
typedef sNID_RADIO_T_Packet_TrainTypes_Pkg aNID_RADIO_T_Packet_TrainTypes_Pkg[1];

/* Packet_TrainTypes_Pkg::PT3_OnboardTelephoneNumbers_T/ */
typedef struct kcg_tag_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg {
  kcg_bool valid;
  kcg_int32 number;
  aNID_RADIO_T_Packet_TrainTypes_Pkg aNID_RADIO;
} PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg;

/* Radio_Types_Pkg::Radio_TrackTrain_Header_T/ */
typedef struct kcg_tag_Radio_TrackTrain_Header_T_Radio_Types_Pkg {
  kcg_int32 radioDevice;
  T_internal_Type_Obu_BasicTypes_Pkg receivedSystemTime;
  NID_MESSAGE nid_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  T_TRAIN t_train_reference;
  NID_EM nid_em;
  Q_SCALE q_scale;
  D_SR d_sr;
  T_TRAIN t_sh_rqst;
  D_REF d_ref;
  Q_DIR q_dir;
  D_EMERGENCYSTOP d_emergencystop;
  M_VERSION m_version;
} Radio_TrackTrain_Header_T_Radio_Types_Pkg;

/* TrainToTrack::Position_Report/ */
typedef struct kcg_tag_Position_Report_TrainToTrack {
  kcg_int32 NID_PACKET;
  kcg_int32 L_PACKET;
  Q_SCALE qscale;
  kcg_int32 NID_LRBG;
  kcg_int32 D_LRBG;
  Q_DIRLRBG dirlrbg;
  Q_DLRBG dlrbg;
  kcg_int32 L_DOUBTOVER;
  kcg_int32 L_DOUBTUNDER;
  Q_LENGTH length;
  kcg_int32 L_TRAININT;
  kcg_int32 V_TRAIN;
  Q_DIRTRAIN dirtrain;
  M_MODE mode;
  M_LEVEL level;
  kcg_int32 NID_NTC;
} Position_Report_TrainToTrack;

/* Packet_TrainTypes_Pkg::PT0_PositionReport_T/ */
typedef struct kcg_tag_PT0_PositionReport_T_Packet_TrainTypes_Pkg {
  kcg_bool valid;
  Position_Report_TrainToTrack packet0;
} PT0_PositionReport_T_Packet_TrainTypes_Pkg;

/* TrainToTrack::Position_Report_based_on_two_balise_groups/ */
typedef struct kcg_tag_Position_Report_based_on_two_balise_groups_TrainToTrack {
  kcg_int32 NID_PACKET;
  kcg_int32 L_PACKET;
  Q_SCALE qscale;
  kcg_int32 NID_LRBG;
  kcg_int32 NID_PRVLRBG;
  kcg_int32 D_LRBG;
  Q_DIRLRBG dirlrbg;
  Q_DLRBG dlrbg;
  kcg_int32 L_DOUBTOVER;
  kcg_int32 L_DOUBTUNDER;
  Q_LENGTH length;
  kcg_int32 L_TRAININT;
  kcg_int32 V_TRAIN;
  Q_DIRTRAIN dirtrain;
  M_MODE mode;
  M_LEVEL level;
  kcg_int32 NID_NTC;
} Position_Report_based_on_two_balise_groups_TrainToTrack;

/* Packet_TrainTypes_Pkg::PT1_PositionReport_2BG_T/ */
typedef struct kcg_tag_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg {
  kcg_bool valid;
  Position_Report_based_on_two_balise_groups_TrainToTrack packet1;
} PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg;

/* RCM_Session_Types_Pkg::morc_configData_T/ */
typedef struct kcg_tag_morc_configData_T_RCM_Session_Types_Pkg {
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg radioNetworkID_Default;
  NID_RADIO nid_radio_shortNumberStoredOnboard;
  kcg_int32 noOfRetriesOfSendingTerminationMessage;
  T_internal_Type_Obu_BasicTypes_Pkg maxWaitingTimeForAckMessageReceived;
  T_internal_Type_Obu_BasicTypes_Pkg maxWaitingTimeUntilTerminationOrderReceived;
  kcg_int32 noOfRetriesUntilTerminationOrderIsReceived;
  T_internal_Type_Obu_BasicTypes_Pkg connectionStatusTimerInterval;
  PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg onboardPhoneNumbers;
  NID_ENGINE nid_engine;
  T_internal_Type_Obu_BasicTypes_Pkg maxTimeToMaintainCommSession;
  kcg_int32 noOfTriesToEstablishASafeRadioConnection;
} morc_configData_T_RCM_Session_Types_Pkg;

typedef kcg_int32 array_int32_6[6];

/* TM::Array06/ */
typedef array_int32_6 Array06_TM;

/* SDMConversionModelPkg::v_BrakeSteps_t/ */
typedef array_int32_6 v_BrakeSteps_t_SDMConversionModelPkg;

/* SDMConversionModelPkg::a_BrakeSteps_t/ */
typedef array_int32_6 a_BrakeSteps_t_SDMConversionModelPkg;

/* SDMConversionModelPkg::av_Map_t/ */
typedef struct kcg_tag_av_Map_t_SDMConversionModelPkg {
  a_BrakeSteps_t_SDMConversionModelPkg a;
  v_BrakeSteps_t_SDMConversionModelPkg v;
} av_Map_t_SDMConversionModelPkg;

typedef av_Map_t_SDMConversionModelPkg _168_array[13];

/* SDMConversionModelPkg::a_Brake_t/ */
typedef struct kcg_tag_a_Brake_t_SDMConversionModelPkg {
  av_Map_t_SDMConversionModelPkg emergency;
  av_Map_t_SDMConversionModelPkg service;
} a_Brake_t_SDMConversionModelPkg;

typedef array_int32_6 array_int32_6_221[221];

typedef kcg_int32 array_int32_261[261];

/* DATA::DMI_Identifier_int_array_T/ */
typedef array_int32_261 DMI_Identifier_int_array_T_DATA;

/* DATA::DMI_Identifier_Request_int_array_T/ */
typedef array_int32_261 _12_DMI_Identifier_Request_int_array_T_DATA;

/* API_DMI_Pkg::EVC_to_DMI_Message_int_T/, Messages::CAST_EVC_to_DMI_to_int/ */
typedef kcg_int32 EVC_to_DMI_Message_int_T_API_DMI_Pkg[999];

typedef kcg_int32 array_int32_9[9];

/* TM::Array09/ */
typedef array_int32_9 Array09_TM;

/* DATA::DriverIdentifier_INT_T/ */
typedef array_int32_9 DriverIdentifier_INT_T_DATA;

/* DATA::DMI_Icons_int_array_T/ */
typedef array_int32_9 DMI_Icons_int_array_T_DATA;

/* DATA::DMI_Train_Data_int_array_T/ */
typedef array_int32_9 DMI_Train_Data_int_array_T_DATA;

/* DATA::DMI_EVC_Coded_Train_Data_int_array_T/ */
typedef array_int32_9 _11_DMI_EVC_Coded_Train_Data_int_array_T_DATA;

/* DATA::DMI_TEXT_INT_Array_T/,
   DATA::Packets::DMI_to_EVC::C_int_to_DMI_identifier/,
   DATA::Variables::CAST_DMI_TEXT_to_int/ */
typedef kcg_int32 DMI_TEXT_INT_Array_T_DATA[255];

typedef struct kcg_tag_struct_276076 {
  kcg_bool valid;
  kcg_int32 v_nvkvint_k_m;
  kcg_float32 m_nvkvint_km_12;
  kcg_float32 m_nvkvint_km_23;
} struct_276076;

/* TM::P003_OBU_k_m_section_enum_T/ */
typedef struct_276076 P003_OBU_k_m_section_enum_T_TM;

/* TM_baseline2::P203V1_OBU_k_m_section_enum_T/ */
typedef struct_276076 P203V1_OBU_k_m_section_enum_T_TM_baseline2;

typedef struct_276076 _159_array[32];

/* TM::P003_OBU_k_m_sectionlist_enum_T/ */
typedef _159_array P003_OBU_k_m_sectionlist_enum_T_TM;

/* TM_baseline2::P203V1_OBU_k_m_sectionlist_enum_T/ */
typedef _159_array _9_P203V1_OBU_k_m_sectionlist_enum_T_TM_baseline2;

typedef struct kcg_tag_struct_278367 {
  kcg_bool valid;
  Q_NVKVINTSET q_nvkvintset_k;
  kcg_float32 a_nvp12_k;
  kcg_float32 a_nvp23_k;
  kcg_int32 v_nvkvint_k;
  kcg_float32 m_nvkvint_k_12;
  kcg_float32 m_nvkvint_k_23;
  kcg_int32 n_iter_k_m;
  _159_array n_iter_k_m_list;
} struct_278367;

/* TM::P003_OBU_k_section_enum_T/ */
typedef struct_278367 P003_OBU_k_section_enum_T_TM;

/* TM_baseline2::P203V1_OBU_k_section_enum_T/ */
typedef struct_278367 P203V1_OBU_k_section_enum_T_TM_baseline2;

typedef struct_278367 _117_array[32];

/* TM::P003_OBU_k_sectionlist_enum_T/ */
typedef _117_array P003_OBU_k_sectionlist_enum_T_TM;

/* TM_baseline2::P203V1_OBU_k_sectionlist_enum_T/ */
typedef _117_array P203V1_OBU_k_sectionlist_enum_T_TM_baseline2;

typedef kcg_int32 array_int32_3[3];

/* TM_TrainToTrack::P009_TrainTrack_int/ */
typedef array_int32_3 P009_TrainTrack_int_TM_TrainToTrack;

/* TM_TrainToTrack::P005_TrainTrack_int/ */
typedef array_int32_3 P005_TrainTrack_int_TM_TrainToTrack;

/* TM_TrainToTrack::P004_TrainTrack_int/ */
typedef array_int32_3 P004_TrainTrack_int_TM_TrainToTrack;

/* TM::Array03/ */
typedef array_int32_3 Array03_TM;

/* DATA::DMI_Icon_Ack_int_array_T/ */
typedef array_int32_3 DMI_Icon_Ack_int_array_T_DATA;

/* DATA::DMI_Train_Data_Ack_int_array_T/ */
typedef array_int32_3 DMI_Train_Data_Ack_int_array_T_DATA;

/* DATA::DMI_Driver_Request_int_array_T/ */
typedef array_int32_3 DMI_Driver_Request_int_array_T_DATA;

/* DATA::DMI_Adhesion_Factor_Data_int_array_T/ */
typedef array_int32_3 _15_DMI_Adhesion_Factor_Data_int_array_T_DATA;

/* DATA::DMI_Train_Running_Number_int_array_T/ */
typedef array_int32_3 _14_DMI_Train_Running_Number_int_array_T_DATA;

/* DATA::DMI_EVC_Radio_Net_Data_int_array_T/ */
typedef array_int32_3 _13_DMI_EVC_Radio_Net_Data_int_array_T_DATA;

/* DATA::DMI_Display_Control_int_array_T/ */
typedef array_int32_3 DMI_Display_Control_int_array_T_DATA;

/* DATA::DMI_System_Version_int_array_T/ */
typedef array_int32_3 DMI_System_Version_int_array_T_DATA;

/* DATA::DMI_Entry_Request_int_array_T/ */
typedef array_int32_3 DMI_Entry_Request_int_array_T_DATA;

/* DATA::DMI_Menu_Request_int_array_T/ */
typedef array_int32_3 DMI_Menu_Request_int_array_T_DATA;

/* RCM_Types_Pkg::mobileRegistrationCmd_T/ */
typedef struct kcg_tag_mobileRegistrationCmd_T_RCM_Types_Pkg {
  kcg_bool valid;
  kcg_int32 mobileDeviceNo;
  mobileRegistrationAction_T_RCM_Types_Pkg action;
  NID_MN network_id;
} mobileRegistrationCmd_T_RCM_Types_Pkg;

/* CalcBrakingCurves_Pkg::BCAccumulator_type/ */
typedef struct kcg_tag_BCAccumulator_type_CalcBrakingCurves_Pkg {
  L_internal_real_Type_SDM_Types_Pkg distance;
  V_internal_real_Type_SDM_Types_Pkg speed;
  kcg_int32 distanceIndex;
  kcg_int32 speedIndex;
  ParabolaCurve_T_CalcBrakingCurves_types BC;
} BCAccumulator_type_CalcBrakingCurves_Pkg;

typedef kcg_int32 array_int32_492[492];

/* TA_Export::MRSP_reduction_acc/ */
typedef struct kcg_tag_MRSP_reduction_acc_TA_Export {
  kcg_int32 write_index;
  MRSP_Profile_t_TrackAtlasTypes MRSP;
} MRSP_reduction_acc_TA_Export;

typedef kcg_int32 array_int32_990[990];

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Status_T/ */
typedef struct kcg_tag_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  DMI_StatusSet_T_DMI_Types_Pkg statusSet;
  kcg_int32 nAlive;
} DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg;

typedef kcg_int32 array_int32_987[987];

/* DMI_Types_Pkg::DMI_LevelList_T/ */
typedef struct kcg_tag_DMI_LevelList_T_DMI_Types_Pkg {
  kcg_int32 number;
  DMI_level_array_T_DMI_Types_Pkg levelList;
} DMI_LevelList_T_DMI_Types_Pkg;

/* API_PersistanceStorage_Pkg::ps_dataForStartOfMission_T/ */
typedef struct kcg_tag_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg {
  kcg_bool valid;
  M_LEVEL lastActiveLevel;
  NID_NTC lastActiveNTC;
  DMI_LevelList_T_DMI_Types_Pkg availableLevelsList;
} ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_EVC_Level_Data_T/ */
typedef struct kcg_tag_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  DMI_LevelList_T_DMI_Types_Pkg levelList;
} DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg;

/* DMI_Types_Pkg::DMI_trackCondition_T/ */
typedef struct kcg_tag_DMI_trackCondition_T_DMI_Types_Pkg {
  kcg_int32 nIter;
  DMI_trackConditionArray_T_DMI_Types_Pkg trackCondition;
} DMI_trackCondition_T_DMI_Types_Pkg;

typedef kcg_int32 array_int32_978[978];

typedef struct kcg_tag_struct_275675 {
  kcg_int32 now;
  kcg_int32 distance;
} struct_275675;

/* TIU_Types_Pkg::D_test_trackinit_T/ */
typedef struct_275675 D_test_trackinit_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::L_test_trackcond_T/ */
typedef struct_275675 L_test_trackcond_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::D_test_trackcond_T/ */
typedef struct_275675 D_test_trackcond_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::nothing_to_resume_profile_follow_T/ */
typedef struct kcg_tag_nothing_to_resume_profile_follow_T_TIU_Types_Pkg {
  D_test_trackcond_T_TIU_Types_Pkg d_test_trackcond;
  L_test_trackcond_T_TIU_Types_Pkg l_test_trackcond;
  M_trackcond_T_TIU_Types_Pkg m_trackcond;
} nothing_to_resume_profile_follow_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::Type_I_train_and_brake_inhibition_with_distance_commands_T/ */
typedef struct kcg_tag_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg {
  kcg_bool valid;
  nothing_to_resume_profile_follow_T_TIU_Types_Pkg nothing_to_resume_profile_follow;
  D_test_trackinit_T_TIU_Types_Pkg empty_profile_initial_state_to_be_resumed;
} Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::D_test_current_T/ */
typedef struct_275675 D_test_current_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::Change_of_allowed_current_consumption_T/ */
typedef struct kcg_tag_Change_of_allowed_current_consumption_T_TIU_Types_Pkg {
  kcg_bool valid;
  D_test_current_T_TIU_Types_Pkg d_test_current;
  M_current_T_TIU_Types_Pkg m_current;
} Change_of_allowed_current_consumption_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::D_test_traction_T/ */
typedef struct_275675 D_test_traction_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::Change_traction_system_T/ */
typedef struct kcg_tag_Change_traction_system_T_TIU_Types_Pkg {
  kcg_bool valid;
  D_test_traction_T_TIU_Types_Pkg d_test_traction;
  M_voltage_T_TIU_Types_Pkg m_voltage;
} Change_traction_system_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::D_test_distance_T/ */
typedef struct_275675 D_test_distance_T_TIU_Types_Pkg;

typedef kcg_int32 array_int32_65[65];

/* DATA::DMI_LevelList_int_array_T/ */
typedef array_int32_65 DMI_LevelList_int_array_T_DATA;

/* DMI_trackCondition_int_array_T/ */
typedef array_int32_65 DMI_trackCondition_int_array_T;

typedef kcg_int32 array_int32_975[975];

/* API_DMI_Pkg::DMI_to_EVC_Message_int_T/ */
typedef kcg_int32 DMI_to_EVC_Message_int_T_API_DMI_Pkg[311];

/* RCM_Types_Pkg::mobileConnectionCmd_T/ */
typedef struct kcg_tag_mobileConnectionCmd_T_RCM_Types_Pkg {
  kcg_bool valid;
  kcg_int32 mobileDeviceNo;
  mobileConnetionAction_T_RCM_Types_Pkg action;
  NID_RADIO nid_radio;
} mobileConnectionCmd_T_RCM_Types_Pkg;

typedef kcg_int32 array_int32_302[302];

/* SDM_GradientAcceleration_Pkg::internalCycle/,
   TA_Export::GradientProfile_to_DMI/,
   TA_Gradient_new::GP_Merge_New_P21_to_Profile/,
   TA_Gradient_new::GP_Normalize_Profile/,
   TA_Gradient_new::GP_Truncate_at_BG/,
   TA_Lib_internal::FindStartOfNewGradientProfileAbs/,
   TA_Lib_internal::FindStartOfNewSpeedProfileAbs/,
   TA_Lib_internal::MoveGPSectionsAbsolute_new/,
   TA_Lib_internal::MoveSSPSectionsAbsolute_new/,
   TA_MA_new::MA_Normalize_MA_LRBG/,
   TA_SSP_new::SSP_Merge_New_P27V1_to_Profile/,
   TA_SSP_new::SSP_Normalize_Profile/,
   TA_SSP_new::SSP_Truncate_at_BG/,
   TM_radio_messages::M_TrainTrack_compressed_packets_T/,
   TM_radio_messages::Send_M129/,
   TM_radio_messages::Send_M132/,
   TM_radio_messages::Send_M136/,
   TM_radio_messages::Send_M146/,
   TM_radio_messages::Send_M147/,
   TM_radio_messages::Send_M154/,
   TM_radio_messages::Send_M155/,
   TM_radio_messages::Send_M156/,
   TM_radio_messages::Send_M159/ */
typedef kcg_int32 M_TrainTrack_compressed_packets_T_TM_radio_messages[50];

/* TM_radio_messages::M_TrainTrack_Message_T/ */
typedef struct kcg_tag_M_TrainTrack_Message_T_TM_radio_messages {
  M_TrainTrack_MessageHd_T_TM_radio_messages Message;
  M_TrainTrack_compressed_packets_T_TM_radio_messages OptionalPackets;
} M_TrainTrack_Message_T_TM_radio_messages;

typedef M_TrainTrack_Message_T_TM_radio_messages _187_array[95];

typedef M_TrainTrack_Message_T_TM_radio_messages _186_array[2];

typedef M_TrainTrack_Message_T_TM_radio_messages _176_array[5];

/* TM_lib_internal::M_TrainTrackMessage_buffer_t/ */
typedef _176_array M_TrainTrackMessage_buffer_t_TM_lib_internal;

/* TM_TrainTrack_Bus::M_TrainTrackMessageBus_t/ */
typedef _176_array M_TrainTrackMessageBus_t_TM_TrainTrack_Bus;

typedef _176_array _126_array[5];

typedef M_TrainTrack_Message_T_TM_radio_messages _171_array[98];

typedef M_TrainTrack_Message_T_TM_radio_messages _155_array[96];

typedef M_TrainTrack_Message_T_TM_radio_messages _153_array[3];

typedef M_TrainTrack_Message_T_TM_radio_messages _147_array[99];

typedef M_TrainTrack_Message_T_TM_radio_messages _139_array[1];

typedef M_TrainTrack_Message_T_TM_radio_messages _125_array[4];

typedef M_TrainTrack_Message_T_TM_radio_messages _121_array[97];

/* TM_lib_internal::BufferOutput_read_write1/,
   TM_lib_internal::BufferOutput_read_write2/,
   TM_lib_internal::BufferOutput_read_write3/,
   TM_lib_internal::BufferOutput_read_write4/,
   TM_lib_internal::BufferOutput_read_write5/,
   TM_lib_internal::BufferOutput_write_only1/,
   TM_lib_internal::BufferOutput_write_only2/,
   TM_lib_internal::BufferOutput_write_only3/,
   TM_lib_internal::BufferOutput_write_only4/,
   TM_lib_internal::BufferOutput_write_only5/,
   TM_lib_internal::M_TrainTrackRadioOutputBuffer_t/ */
typedef M_TrainTrack_Message_T_TM_radio_messages M_TrainTrackRadioOutputBuffer_t_TM_lib_internal[100];

typedef kcg_int32 array_int32_41[41];

typedef struct kcg_tag_struct_275303 {
  kcg_bool valid;
  kcg_int32 begin_section;
  kcg_int32 end_section;
  kcg_int32 gradient;
} struct_275303;

/* TrackAtlasTypes::GradientProfile_for_DMI_section_t/ */
typedef struct_275303 _10_GradientProfile_for_DMI_section_t_TrackAtlasTypes;

/* TA_Export::GradientProfile_to_DMI/,
   TrackAtlasTypes::GradientProfile_for_DMI_t/ */
typedef _10_GradientProfile_for_DMI_section_t_TrackAtlasTypes GradientProfile_for_DMI_t_TrackAtlasTypes[50];

/* TrackAtlasTypes::DataForDMI_t/ */
typedef struct kcg_tag_DataForDMI_t_TrackAtlasTypes {
  GradientProfile_for_DMI_t_TrackAtlasTypes GradientProfile;
  kcg_bool Gradient_profile_updated;
  MRSP_Profile_t_TrackAtlasTypes MRSP;
  kcg_bool MRSP_updated;
} DataForDMI_t_TrackAtlasTypes;

/* DMI_Types_Pkg::DMI_gradientProfileElement_T/ */
typedef struct_275303 DMI_gradientProfileElement_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_gradientProfileArray_T/,
   manage_DMI_Output_Pkg::copyTrackDescription/ */
typedef DMI_gradientProfileElement_T_DMI_Types_Pkg DMI_gradientProfileArray_T_DMI_Types_Pkg[32];

/* DMI_Types_Pkg::DMI_gradientProfile_T/ */
typedef struct kcg_tag_DMI_gradientProfile_T_DMI_Types_Pkg {
  kcg_bool profileChanged;
  DMI_gradientProfileArray_T_DMI_Types_Pkg gradientProfiles;
} DMI_gradientProfile_T_DMI_Types_Pkg;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Track_Description_T/ */
typedef struct kcg_tag__4_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  DMI_speedProfile_T_DMI_Types_Pkg speedProfiles;
  DMI_gradientProfile_T_DMI_Types_Pkg gradientProfiles;
  DMI_trackCondition_T_DMI_Types_Pkg trackConditions;
} _4_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg;

/* TM::P080_sections_array_flat_T/, TM_conversions::C_P080_compr_onboard/ */
typedef kcg_int32 P080_sections_array_flat_T_TM[198];

typedef P080_sections_array_flat_T_TM array_int32_198_33[33];

typedef kcg_int32 array_int32_32[32];

/* TM_baseline2::P003V1_OBU_sectionlist_int_T/ */
typedef array_int32_32 P003V1_OBU_sectionlist_int_T_TM_baseline2;

typedef P003V1_OBU_sectionlist_int_T_TM_baseline2 array_int32_32_32[32];

/* SDMConversionModelPkg::LKrIntLookUp_t/ */
typedef array_int32_32 LKrIntLookUp_t_SDMConversionModelPkg;

typedef struct kcg_tag_struct_275034 {
  M_VOLTAGE m_voltage;
  kcg_int32 nid_ctraction;
} struct_275034;

/* TM_TrainToTrack::P011_voltage/ */
typedef struct_275034 P011_voltage_TM_TrainToTrack;

/* Packet_TrainTypes_Pkg::sTractionIdentity_T/ */
typedef struct_275034 sTractionIdentity_T_Packet_TrainTypes_Pkg;

typedef struct_275034 _122_array[4];

/* TM_TrainToTrack::P011_voltage_list/ */
typedef _122_array P011_voltage_list_TM_TrainToTrack;

/* Packet_TrainTypes_Pkg::aTractionIdentity_T/ */
typedef _122_array aTractionIdentity_T_Packet_TrainTypes_Pkg;

typedef kcg_int32 array_int32_20[20];

/* TIU_Types_Pkg::Brake_pressure_value_T/ */
typedef struct kcg_tag_Brake_pressure_value_T_TIU_Types_Pkg {
  kcg_bool valid;
  kcg_int32 pressure;
} Brake_pressure_value_T_TIU_Types_Pkg;

typedef struct kcg_tag_struct_274908 {
  kcg_bool valid;
  kcg_int32 v_nvkvint_n;
  kcg_float32 m_nvkvint_n_12;
  kcg_float32 m_nvkvint_n_23;
} struct_274908;

/* TM::P003_OBU_n_section_enum_T/ */
typedef struct_274908 P003_OBU_n_section_enum_T_TM;

/* TM_baseline2::P203V1_OBU_n_section_enum_T/ */
typedef struct_274908 P203V1_OBU_n_section_enum_T_TM_baseline2;

typedef struct_274908 _160_array[32];

/* TM::P003_OBU_n_sectionlist_enum_T/ */
typedef _160_array P003_OBU_n_sectionlist_enum_T_TM;

/* TM::P003_OBU_T/ */
typedef struct kcg_tag_P003_OBU_T_TM {
  kcg_bool valid;
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_VALIDNV d_validnv;
  NID_C nid_c;
  N_ITER n_iter_nid_c;
  _16_P003_OBU_nid_c_sectionlist_enum_T_TM nid_c_list;
  V_NVSHUNT v_nvshunt;
  V_NVSTFF v_nvstff;
  V_NVONSIGHT v_nvonsight;
  V_NVLIMSUPERV v_nvlimsuperv;
  V_NVUNFIT v_nvunfit;
  V_NVREL v_nvrel;
  D_NVROLL d_nvroll;
  Q_NVSBTSMPERM q_nvsbtsmperm;
  Q_NVEMRRLS q_nvemrrls;
  Q_NVGUIPERM q_nvguiperm;
  Q_NVSBFBPERM q_nvsbfbperm;
  Q_NVINHSMICPERM q_nvinhsnicperm;
  V_NVALLOWOVTRP v_nvallowovtrp;
  V_NVSUPOVTRP v_nvsupovtrp;
  D_NVOVTRP d_nvovtrp;
  T_NVOVTRP t_nvovtrp;
  D_NVPOTRP d_nvpotrp;
  M_NVCONTACT m_nvcontact;
  T_NVCONTACT t_nvcontact;
  M_NVDERUN m_nvderun;
  D_NVSTFF d_nvstff;
  Q_NVDRIVER_ADHES q_nvdriver_adhes;
  A_NVMAXREDADH1 a_nvmaxredadh1;
  A_NVMAXREDADH2 a_nvmaxredadh2;
  A_NVMAXREDADH3 a_nvmaxredadh3;
  Q_NVLOCACC q_nvlocacc;
  M_NVAVADH m_nvavadh;
  M_NVEBCL m_nvebcl;
  Q_NVKINT q_nvkint;
  Q_NVKVINTSET q_nvkvintset;
  A_NVP12 a_nvp12;
  A_NVP23 a_nvp23;
  V_NVKVINT v_nvkvint;
  M_NVKVINT m_nvkvint_12;
  M_NVKVINT m_nvkvint_23;
  N_ITER n_iter_n;
  P003_OBU_n_sectionlist_enum_T_TM n_iter_n_list;
  N_ITER n_iter_k;
  P003_OBU_k_sectionlist_enum_T_TM n_iter_k_list;
  L_NVKRINT l_nvkrint;
  M_NVKRINT m_nvkrint;
  N_ITER n_iter_l;
  P003_OBU_l_sectionlist_enum_T_TM n_iter_l_list;
  M_NVKTINT m_nvktint;
} P003_OBU_T_TM;

typedef P003_OBU_T_TM _127_array[3];

/* TM_baseline2::P203V1_OBU_n_sectionlist_enum_T/ */
typedef _160_array P203V1_OBU_n_sectionlist_enum_T_TM_baseline2;

/* TM_baseline2::P203V1_OBU_T/ */
typedef struct kcg_tag_P203V1_OBU_T_TM_baseline2 {
  kcg_bool valid;
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  Q_NVGUIPERM q_nvguiperm;
  Q_NVSBFBPERM q_nvsbfbperm;
  Q_NVINHSMICPERM q_nvinhsnicperm;
  A_NVMAXREDADH1 a_nvmaxredadh1;
  A_NVMAXREDADH2 a_nvmaxredadh2;
  A_NVMAXREDADH3 a_nvmaxredadh3;
  M_NVAVADH m_nvavadh;
  M_NVEBCL m_nvebcl;
  Q_NVKINT q_nvkint;
  Q_NVKVINTSET q_nvkvintset;
  A_NVP12 a_nvp12;
  A_NVP23 a_nvp23;
  V_NVKVINT v_nvkvint;
  M_NVKVINT m_nvkvint_12;
  M_NVKVINT m_nvkvint_23;
  N_ITER n_iter_n;
  P203V1_OBU_n_sectionlist_enum_T_TM_baseline2 n_iter_n_list;
  N_ITER n_iter_k;
  P203V1_OBU_k_sectionlist_enum_T_TM_baseline2 n_iter_k_list;
  L_NVKRINT l_nvkrint;
  M_NVKRINT m_nvkrint;
  N_ITER n_iter_l;
  P203V1_OBU_l_sectionlist_enum_T_TM_baseline2 n_iter_l_list;
  M_NVKTINT m_nvktint;
} P203V1_OBU_T_TM_baseline2;

typedef kcg_int32 array_int32_23[23];

typedef kcg_int32 array_int32_14[14];

typedef kcg_int32 array_int32_100[100];

typedef struct kcg_tag_struct_274806 {
  kcg_bool valid;
  kcg_int32 l_section;
  Q_SECTIONTIMER q_sectiontimer;
  kcg_int32 t_sectiontimer;
  kcg_int32 d_sectiontimerstoploc;
} struct_274806;

/* TM::P012_section_enum_T/ */
typedef struct_274806 P012_section_enum_T_TM;

/* TM::P015_section_enum_T/ */
typedef struct_274806 P015_section_enum_T_TM;

/* TM::P015_OBU_sectionlist_enum_T/,
   TM_lib_internal::C_P012_unflatten_sections/,
   TM_lib_internal::C_P015_unflatten_sections/ */
typedef P015_section_enum_T_TM P015_OBU_sectionlist_enum_T_TM[32];

typedef P015_OBU_sectionlist_enum_T_TM _190_array[10];

/* TM::P012_OBU_T/ */
typedef struct kcg_tag_P012_OBU_T_TM {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  V_MAIN v_main;
  V_LOA v_loa;
  T_LOA t_loa;
  N_ITER n_iter;
  P015_OBU_sectionlist_enum_T_TM sections;
  L_ENDSECTION l_endsection;
  Q_SECTIONTIMER q_sectiontimer;
  T_SECTIONTIMER t_sectiontimer;
  D_SECTIONTIMERSTOPLOC d_sectiontimerstoploc;
  Q_ENDTIMER q_endtimer;
  T_ENDTIMER t_endtimer;
  D_ENDTIMERSTARTLOC d_endtimerstartloc;
  Q_DANGERPOINT q_dangerpoint;
  D_DP d_dp;
  V_RELEASEDP v_releasedp;
  Q_OVERLAP q_overlap;
  D_STARTOL d_startol;
  T_OL t_ol;
  D_OL d_ol;
  V_RELEASEOL v_releaseol;
} P012_OBU_T_TM;

/* TM::P015_OBU_T/ */
typedef struct kcg_tag_P015_OBU_T_TM {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  V_LOA v_loa;
  T_LOA t_loa;
  N_ITER n_iter;
  P015_OBU_sectionlist_enum_T_TM sections;
  L_ENDSECTION l_endsection;
  Q_SECTIONTIMER q_sectiontimer;
  T_SECTIONTIMER t_sectiontimer;
  D_SECTIONTIMERSTOPLOC d_sectiontimerstoploc;
  Q_ENDTIMER q_endtimer;
  T_ENDTIMER t_endtimer;
  D_ENDTIMERSTARTLOC d_endtimerstartloc;
  Q_DANGERPOINT q_dangerpoint;
  D_DP d_dp;
  V_RELEASEDP v_releasedp;
  Q_OVERLAP q_overlap;
  D_STARTOL d_startol;
  T_OL t_ol;
  D_OL d_ol;
  V_RELEASEOL v_releaseol;
} P015_OBU_T_TM;

typedef P015_OBU_T_TM _199_array[5];

typedef P015_OBU_sectionlist_enum_T_TM _156_array[5];

typedef kcg_int32 array_int32_17[17];

/* TM_TrainToTrack::P000_TrainTrack_int/ */
typedef array_int32_17 P000_TrainTrack_int_TM_TrainToTrack;

/* TM_TrainToTrack::P001_TrainTrack_int/ */
typedef array_int32_17 P001_TrainTrack_int_TM_TrainToTrack;

typedef kcg_int32 array_int32_260[260];

/* DATA::DMI_Driver_Identifier_int_array_T/,
   DATA::Packets::Bothways::C_DMI_Driver_Identifier_to_int/,
   Messages::CAST_int_to_DMI_to_EVC/,
   TM_TrainToTrack::C_P011_train_compr/ */
typedef kcg_int32 DMI_Driver_Identifier_int_array_T_DATA[11];

typedef struct kcg_tag_struct_274688 {
  kcg_int32 target;
  kcg_int32 speed;
} struct_274688;

/* TA_MRSP_new::SSP_section_t/ */
typedef struct_274688 SSP_section_t_TA_MRSP_new;

/* TA_MRSP::SSP_section_t/ */
typedef struct_274688 SSP_section_t_TA_MRSP;

typedef struct_274688 _179_array[50];

/* TA_MRSP_new::SSP_cat_t/ */
typedef _179_array SSP_cat_t_TA_MRSP_new;

/* TA_MRSP::SSP_cat_t/ */
typedef _179_array SSP_cat_t_TA_MRSP;

typedef _179_array _175_array[11];

/* TA_MRSP_new::SSP_matrix_t/ */
typedef _175_array SSP_matrix_t_TA_MRSP_new;

/* TA_MRSP::SSP_matrix_t/ */
typedef _175_array SSP_matrix_t_TA_MRSP;

/* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_T/ */
typedef struct kcg_tag_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store {
  kcg_int32 nfree;
  _151_array items;
} NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store;

typedef kcg_int32 array_int32_97[97];

/* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets/IfBlock1:else:else:then:,
   Common_Types_Pkg::CompressedPacketData_T/,
   TM::Read_P005/,
   TM::Read_P012/,
   TM::Read_P015/,
   TM::Read_P021/,
   TM::Read_P041/,
   TM::Read_P042/,
   TM::Read_P045/,
   TM::Read_P046/,
   TM::Read_P057/,
   TM::Read_P058/,
   TM::Read_P065/,
   TM::Read_P080/,
   TM::Read_P131/,
   TM::Read_P135/,
   TM::Read_P137/,
   TM::Read_P138/,
   TM::Read_P139/,
   TM_baseline2::Read_P003V1/,
   TM_baseline2::Read_P027V1/,
   TM_baseline2::Read_P027V1_sections/,
   TM_conversions::C_P042_tracksim_compr/,
   TM_lib_internal::RECV_ReadPacketKernel/,
   TM_lib_internal::RECV_ReadPackets/,
   TM_lib_internal::SEND_MessageData/ */
typedef kcg_int32 CompressedPacketData_T_Common_Types_Pkg[500];

/* Common_Types_Pkg::CompressedPackets_T/ */
typedef struct kcg_tag_CompressedPackets_T_Common_Types_Pkg {
  Metadata_T_Common_Types_Pkg PacketHeaders;
  CompressedPacketData_T_Common_Types_Pkg PacketData;
} CompressedPackets_T_Common_Types_Pkg;

/* BG_Types_Pkg::Telegram_T/ */
typedef struct kcg_tag_Telegram_T_BG_Types_Pkg {
  kcg_bool valid;
  kcg_bool checkResult;
  TelegramHeader_T_BG_Types_Pkg telegramheader;
  CompressedPackets_T_Common_Types_Pkg packets;
} Telegram_T_BG_Types_Pkg;

typedef Telegram_T_BG_Types_Pkg _200_array[7];

/* BG_Types_Pkg::TelegramArray_T/,
   Receive_TrackSide_Msg_Pkg::addTelegram/IfBlock1:else:,
   Receive_TrackSide_Msg_Pkg::addTelegram/IfBlock1:then: */
typedef Telegram_T_BG_Types_Pkg TelegramArray_T_BG_Types_Pkg[8];

/* BG_Types_Pkg::BG_Message_T/ */
typedef struct kcg_tag_BG_Message_T_BG_Types_Pkg {
  kcg_bool present;
  TelegramArray_T_BG_Types_Pkg Telegrams;
  kcg_int32 numberBalises;
  centerOfBalisePosition_T_BG_Types_Pkg centerOfBalisePosition;
} BG_Message_T_BG_Types_Pkg;

/* Receive_TrackSide_Msg_Pkg::TelegramStore_T/ */
typedef struct kcg_tag_TelegramStore_T_Receive_TrackSide_Msg_Pkg {
  kcg_bool valid;
  Telegram_T_BG_Types_Pkg telegram;
  centerOfBalisePosition_T_BG_Types_Pkg position;
} TelegramStore_T_Receive_TrackSide_Msg_Pkg;

typedef CompressedPackets_T_Common_Types_Pkg _132_array[33];

typedef CompressedPacketData_T_Common_Types_Pkg array_int32_500_500[500];

typedef kcg_int32 array_int32_5[5];

/* TM_TrainToTrack::P003_nid_radio_list_int_t/ */
typedef array_int32_5 P003_nid_radio_list_int_t_TM_TrainToTrack;

/* TM_TrainToTrack::P011_ntc_list_array_T/ */
typedef array_int32_5 P011_ntc_list_array_T_TM_TrainToTrack;

/* TM_TrainToTrack::P011_ntc_list/ */
typedef array_int32_5 P011_ntc_list_TM_TrainToTrack;

/* TM_TrainToTrack::P011/ */
typedef struct kcg_tag_P011_TM_TrainToTrack {
  kcg_bool valid;
  NID_PACKET nid_packet;
  L_PACKET l_packet;
  NC_CDTRAIN nc_cdtrain;
  NC_TRAIN nc_train;
  L_TRAIN l_train;
  V_MAXTRAIN v_maxtrain;
  M_LOADINGGAUGE m_loadinggauge;
  M_AXLELOADCAT m_axleloadcat;
  M_AIRTIGHT m_airtight;
  N_AXLE n_axle;
  N_ITER n_iter_voltage;
  P011_voltage_list_TM_TrainToTrack voltage_list;
  N_ITER n_iter_nid_ntc;
  P011_ntc_list_TM_TrainToTrack nid_ntc_list;
} P011_TM_TrainToTrack;

/* TM::Array05/ */
typedef array_int32_5 Array05_TM;

/* TM_TrainToTrack::P003_nid_radio_list_t/ */
typedef array_int32_5 P003_nid_radio_list_t_TM_TrainToTrack;

/* TM_TrainToTrack::P003/ */
typedef struct kcg_tag_P003_TM_TrainToTrack {
  kcg_bool valid;
  NID_PACKET nid_packet;
  L_PACKET l_packet;
  N_ITER n_iter;
  P003_nid_radio_list_t_TM_TrainToTrack nid_radio;
} P003_TM_TrainToTrack;

/* Packet_TrainTypes_Pkg::aNID_NTC_T/ */
typedef array_int32_5 aNID_NTC_T_Packet_TrainTypes_Pkg;

/* TIU_Types_Pkg::trainData_T/ */
typedef struct kcg_tag_trainData_T_TIU_Types_Pkg {
  kcg_bool valid;
  kcg_bool acknowledgedByDriver;
  NC_TRAIN trainCategory;
  NC_CDTRAIN cantDeficientcy;
  L_internal_Type_Obu_BasicTypes_Pkg trainLength;
  kcg_int32 brakePerctage;
  V_internal_Type_Obu_BasicTypes_Pkg maxTrainSpeed;
  M_LOADINGGAUGE loadingGauge;
  M_AXLELOADCAT axleLoadCategory;
  M_AIRTIGHT airtightSystem;
  kcg_int32 axleNumber;
  kcg_int32 numberNationalSystems;
  aNID_NTC_T_Packet_TrainTypes_Pkg nationSystems;
  kcg_int32 numberTractionSystems;
  aTractionIdentity_T_Packet_TrainTypes_Pkg tractionSystem;
} trainData_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::Message_Train_Interface_to_EVC_T/ */
typedef struct kcg_tag_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg {
  Mode_control_and_train_status_T_TIU_Types_Pkg train_status;
  Brake_status_T_TIU_Types_Pkg brake_status;
  Brake_pressure_value_T_TIU_Types_Pkg brake_pressure;
  M_train_data_entry_type_T_TIU_Types_Pkg train_data_entry_type;
  trainData_T_TIU_Types_Pkg train_data_info;
  Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg type_I_train_and_brake_inhibition;
} Message_Train_Interface_to_EVC_T_TIU_Types_Pkg;

/* API_TIU_Pkg::TIU_Input_msg/ */
typedef struct kcg_tag_TIU_Input_msg_API_TIU_Pkg {
  kcg_bool valid;
  Message_Train_Interface_to_EVC_T_TIU_Types_Pkg info;
} TIU_Input_msg_API_TIU_Pkg;

typedef trainData_T_TIU_Types_Pkg _188_array[100];

/* Packet_TrainTypes_Pkg::PT11_ValidatedTrainData_T/ */
typedef struct kcg_tag_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg {
  kcg_bool valid;
  NC_CDTRAIN nc_cdtrain;
  NC_TRAIN nc_train;
  L_internal_Type_Obu_BasicTypes_Pkg l_train;
  V_internal_Type_Obu_BasicTypes_Pkg v_maxtrain;
  M_LOADINGGAUGE m_loadinggoage;
  M_AXLELOADCAT m_axleloadcat;
  M_AIRTIGHT m_airtight;
  N_AXLE n_axle;
  kcg_int32 nIter_tractionIdentity;
  aTractionIdentity_T_Packet_TrainTypes_Pkg tractionIdentity;
  kcg_int32 nIter_ntc;
  aNID_NTC_T_Packet_TrainTypes_Pkg nid_ntc;
} PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg;

/* Common_Types_Pkg::outPackets_T/ */
typedef struct kcg_tag_outPackets_T_Common_Types_Pkg {
  PT0_PositionReport_T_Packet_TrainTypes_Pkg p0;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg p1;
  PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg p3;
  PT4_ErrorReporting_T_Packet_TrainTypes_Pkg p4;
  PT5_TrainRunningNumber_Packet_TrainTypes_Pkg p5;
  PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg p9;
  PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg p11;
} outPackets_T_Common_Types_Pkg;

typedef struct kcg_tag_struct_273626 {
  kcg_bool present;
  struct_278116 header;
  outPackets_T_Common_Types_Pkg packets;
} struct_273626;

/* RCM_MsgTypes_Pkg::msgToTrack_T/ */
typedef struct_273626 msgToTrack_T_RCM_MsgTypes_Pkg;

/* TM_transitional::Radio_TrainTrack_Message_T/ */
typedef struct_273626 _18_Radio_TrainTrack_Message_T_TM_transitional;

/* Radio_Types_Pkg::Radio_TrainTrack_Message_T/ */
typedef struct_273626 Radio_TrainTrack_Message_T_Radio_Types_Pkg;

typedef kcg_int32 array_int32_8[8];

/* TM_TrainToTrack::P003_TrainTrack_int/ */
typedef array_int32_8 P003_TrainTrack_int_TM_TrainToTrack;

/* TM_TrainToTrack::P011_voltage_sections_array_flat_t/ */
typedef array_int32_8 P011_voltage_sections_array_flat_t_TM_TrainToTrack;

/* TM::Array08/ */
typedef array_int32_8 Array08_TM;

/* TIU_Types_Pkg::Passenger_door_control_info_T/ */
typedef struct kcg_tag_Passenger_door_control_info_T_TIU_Types_Pkg {
  kcg_bool valid;
  kcg_int32 door_control_info;
} Passenger_door_control_info_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::Message_EVC_to_Train_Interface_T/ */
typedef struct kcg_tag_Message_EVC_to_Train_Interface_T_TIU_Types_Pkg {
  Isolation_Status_T_TIU_Types_Pkg isolation_status;
  Brake_command_T_TIU_Types_Pkg brake_command;
  Brake_inhibition_command_T_TIU_Types_Pkg brake_inhibition;
  Type_I_train_commands_T_TIU_Types_Pkg type_I_train_commands;
  Change_traction_system_T_TIU_Types_Pkg change_traction_system;
  Passenger_door_control_info_T_TIU_Types_Pkg passenger_door_control_info;
  Change_of_allowed_current_consumption_T_TIU_Types_Pkg change_of_allowed_current_consumption;
} Message_EVC_to_Train_Interface_T_TIU_Types_Pkg;

/* API_TIU_Pkg::TIU_Output_msg/ */
typedef struct kcg_tag_TIU_Output_msg_API_TIU_Pkg {
  kcg_bool valid;
  Message_EVC_to_Train_Interface_T_TIU_Types_Pkg info;
} TIU_Output_msg_API_TIU_Pkg;

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::BG_find_T/ */
typedef struct kcg_tag_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg {
  kcg_int32 index;
  kcg_int32 noOfFoundBGs;
  kcg_bool BGFound;
} BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

typedef kcg_int32 array_int32_2[2];

/* TM_TrainToTrack::P011_voltage_section_array_T/ */
typedef array_int32_2 P011_voltage_section_array_T_TM_TrainToTrack;

/* TM_TrainToTrack::P011_voltage_sectionlist_array_T/,
   TM_TrainToTrack_lib_internal::C_P011_flatten_sections_voltage/ */
typedef P011_voltage_section_array_T_TM_TrainToTrack P011_voltage_sectionlist_array_T_TM_TrainToTrack[4];

typedef P011_voltage_sectionlist_array_T_TM_TrainToTrack array_int32_2_4_8[8];

/* DATA::DMI_Radio_Net_Data_int_array_T/ */
typedef array_int32_2 DMI_Radio_Net_Data_int_array_T_DATA;

/* DATA::Packets::EVC_to_DMI::CAST_DMI_Track_Description_to_int/,
   DMI_Track_Description_int_array_T/ */
typedef kcg_int32 DMI_Track_Description_int_array_T[325];

/* DATA::DMI_EVC_Level_Data_int_array_T/,
   DATA::Packets::EVC_to_DMI::CAST_DMI_EVC_Level_Data_to_int1/ */
typedef kcg_int32 DMI_EVC_Level_Data_int_array_T_DATA[67];

typedef kcg_int32 array_int32_894[894];

/* DMI_Types_Pkg::DMI_train_id_T/ */
typedef struct kcg_tag_DMI_train_id_T_DMI_Types_Pkg {
  kcg_int32 number;
  BCD_DMI_Types_Pkg dig1;
  BCD_DMI_Types_Pkg dig2;
  BCD_DMI_Types_Pkg dig3;
  BCD_DMI_Types_Pkg dig4;
  BCD_DMI_Types_Pkg dig5;
} DMI_train_id_T_DMI_Types_Pkg;

/* Handover_Pkg::connection_ids_T/ */
typedef struct kcg_tag_connection_ids_T_Handover_Pkg {
  kcg_bool valid;
  kcg_int32 mobileDeviceNo;
  NID_C nid_c;
  NID_RBC nid_RBC;
  NID_RADIO nid_radio;
  NID_MN nid_mn;
} connection_ids_T_Handover_Pkg;

typedef kcg_int32 array_int32_64[64];

/* TM::P058_sections_array_flat_T/ */
typedef array_int32_64 P058_sections_array_flat_T_TM;

/* TM_baseline2::P027V1_sections_array_flat_qdiff_T/ */
typedef array_int32_64 P027V1_sections_array_flat_qdiff_T_TM_baseline2;

typedef array_int32_64 array_int32_64_32[32];

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::BG_counters_T/ */
typedef struct kcg_tag_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg {
  kcg_int32 unlinkedBGsCount;
  kcg_int32 linkedBGsCount;
  kcg_int32 totalBGsCount;
  kcg_int32 passedUnlinkedBGsCount;
  kcg_int32 passedLinkedBGsCount;
  kcg_int32 passedTotalBGsCount;
} BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

/* RCM_Types_Pkg::mobileConnectionContext_T/ */
typedef struct kcg_tag_mobileConnectionContext_T_RCM_Types_Pkg {
  kcg_bool valid;
  kcg_int32 mobileDeviceNo;
  mobileConnectionStatus_T_RCM_Types_Pkg status;
  NID_RADIO nid_radio;
  kcg_bool settingUpConnectionHasFailed;
  kcg_bool connectionLost;
  kcg_bool isInRadioHole;
} mobileConnectionContext_T_RCM_Types_Pkg;

typedef kcg_int32 array_int32_888[888];

typedef kcg_int32 array_int32_891[891];

/* DMI_Types_Pkg::DMI_train_length_T/ */
typedef struct kcg_tag_DMI_train_length_T_DMI_Types_Pkg {
  kcg_int32 number;
  BCD_DMI_Types_Pkg dig1;
  BCD_DMI_Types_Pkg dig2;
  BCD_DMI_Types_Pkg dig3;
  BCD_DMI_Types_Pkg dig4;
} DMI_train_length_T_DMI_Types_Pkg;

typedef struct kcg_tag_struct_273993 {
  kcg_int32 number;
  kcg_int32 dig1;
  kcg_int32 dig2;
  kcg_int32 dig3;
} struct_273993;

/* DMI_Types_Pkg::DMI_loadingGauge_T/ */
typedef struct_273993 DMI_loadingGauge_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_airtightSystem_T/ */
typedef struct_273993 DMI_airtightSystem_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_vMax_id_T/ */
typedef struct_273993 DMI_vMax_id_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_brakeModel_id_T/ */
typedef struct_273993 DMI_brakeModel_id_T_DMI_Types_Pkg;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_EVC_Coded_Train_Data_T/ */
typedef struct kcg_tag_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  DMI_train_id_T_DMI_Types_Pkg trainID;
  DMI_train_length_T_DMI_Types_Pkg trainLength;
  DMI_brakeModel_id_T_DMI_Types_Pkg brakeModel;
  DMI_vMax_id_T_DMI_Types_Pkg vmax;
  M_AXLELOADCAT mAxleLoad;
  DMI_airtightSystem_T_DMI_Types_Pkg airTightSystem;
  DMI_loadingGauge_T_DMI_Types_Pkg mLoadingGauge;
} DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg;

/* API_DMI_Pkg::EVC_to_DMI_Message_T/ */
typedef struct kcg_tag_EVC_to_DMI_Message_T_API_DMI_Pkg {
  kcg_bool present;
  DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg dynamic;
  DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg menu_request;
  DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg entry_request;
  DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg evc_coded_train_data;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg textMessage;
  _4_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg trackDescription;
  DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg identifierRequest;
  DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg systemVersion;
  DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg displayControl;
  DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg EVC_levelData;
  DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg EVC_radioNetData;
  _5_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg driverIdentifier;
  DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg trainRunningNumber;
  DMI_Train_Data_T_DMI_Messages_Bothways_Pkg trainData;
  DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg adhesionFactor;
  DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg iconRequest;
} EVC_to_DMI_Message_T_API_DMI_Pkg;

typedef kcg_int32 array_int32_221[221];

typedef kcg_int32 array_int32_129[129];

/* DATA::DMI_speedProfile_int_array_T/ */
typedef array_int32_129 DMI_speedProfile_int_array_T_DATA;

/* DMI_gradientProfile_int_arrayT/ */
typedef array_int32_129 DMI_gradientProfile_int_arrayT;

typedef kcg_int32 array_int32_627[627];

typedef kcg_int32 array_int32_40[40];

typedef kcg_int32 array_int32_28[28];

typedef kcg_int32 array_int32_114[114];

typedef kcg_int32 array_int32_31[31];

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Icon_Ack_T/ */
typedef struct kcg_tag_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  kcg_int32 DMI_nid_icon_identifier;
} DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg;

/* API_DMI_Pkg::DMI_to_EVC_Message_T/ */
typedef struct kcg_tag_DMI_to_EVC_Message_T_API_DMI_Pkg {
  kcg_bool present;
  DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg status;
  DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg identifier;
  DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg driverRequest;
  _5_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg driverIdentifier;
  DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg trainRunningNumber;
  DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg radioNetData;
  DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg textMessageAck;
  DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg trainDataAck;
  DMI_Train_Data_T_DMI_Messages_Bothways_Pkg trainData;
  DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg adhesionFactor;
  DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg iconAck;
  DMI_Level_Data_T_DMI_Messages_Bothways_Pkg selectedLevel;
} DMI_to_EVC_Message_T_API_DMI_Pkg;

typedef kcg_int32 array_int32_25[25];

/* TM_TrainToTrack::P011_TrainTrack_int/ */
typedef array_int32_25 P011_TrainTrack_int_TM_TrainToTrack;

/* TM_TrainToTrack::P044_TrainTrack_int/ */
typedef array_int32_25 P044_TrainTrack_int_TM_TrainToTrack;

/* Common_Types_Pkg::RBC_Id_T/ */
typedef struct kcg_tag_RBC_Id_T_Common_Types_Pkg {
  kcg_bool valid;
  NID_C nid_c;
  NID_RBC rbc_id;
  kcg_int32 device_id;
} RBC_Id_T_Common_Types_Pkg;

/* Common_Types_Pkg::radioManagementMessage_T/ */
typedef struct kcg_tag_radioManagementMessage_T_Common_Types_Pkg {
  kcg_bool valid;
  MsgSource_T_Common_Types_Pkg messageSource;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg Radio_Common_Header;
  P42_SessionManagement_T_Packet_Types_Pkg p42;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg p45;
  RBC_Id_T_Common_Types_Pkg sendingRBC;
} radioManagementMessage_T_Common_Types_Pkg;

/* Radio_Types_Pkg::RadioMessage_T/ */
typedef struct kcg_tag_RadioMessage_T_Radio_Types_Pkg {
  kcg_bool present;
  kcg_bool consistencyError;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg header;
  RadioMetadata_T_Common_Types_Pkg radioMetadata;
  CompressedPackets_T_Common_Types_Pkg packets;
  RBC_Id_T_Common_Types_Pkg sendingRBC;
} RadioMessage_T_Radio_Types_Pkg;

/* Common_Types_Pkg::TrackSide_ForCheck_T/ */
typedef struct kcg_tag_TrackSide_ForCheck_T_Common_Types_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  MsgSource_T_Common_Types_Pkg msg_type;
  BG_Message_T_BG_Types_Pkg telegramHeaders;
  RadioMessage_T_Radio_Types_Pkg radio_Msg;
} TrackSide_ForCheck_T_Common_Types_Pkg;

typedef struct kcg_tag_struct_278835 {
  kcg_bool valid;
  MsgSource_T_Common_Types_Pkg source;
  RadioMetadata_T_Common_Types_Pkg radioMetadata;
  BG_Header_T_BG_Types_Pkg BG_Common_Header;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg Radio_Common_Header;
  CompressedPackets_T_Common_Types_Pkg packets;
  RBC_Id_T_Common_Types_Pkg sendingRBC;
} struct_278835;

/* RCM_MsgTypes_Pkg::msgFromTrack_T/ */
typedef struct_278835 msgFromTrack_T_RCM_MsgTypes_Pkg;

/* Common_Types_Pkg::ReceivedMessage_T/ */
typedef struct_278835 ReceivedMessage_T_Common_Types_Pkg;

/* InformationFilter_Pkg::TransitionBuffer_T/,
   InformationFilter_Pkg::TransitionBuffer_read_write/,
   InformationFilter_Pkg::TransitionBuffer_write_only/ */
typedef ReceivedMessage_T_Common_Types_Pkg TransitionBuffer_T_InformationFilter_Pkg[3];

typedef struct_278835 _172_array[2];

typedef struct_278835 _143_array[1];

/* RCM_MsgTypes_Pkg::p42_sessionManagement_T/ */
typedef struct kcg_tag_p42_sessionManagement_T_RCM_MsgTypes_Pkg {
  kcg_bool valid;
  MsgSource_T_Common_Types_Pkg msgSrc;
  Q_DIR q_dir;
  Q_RBC q_rbc;
  NID_C nid_c;
  NID_RBC nid_RBC;
  NID_RADIO nid_radio;
  Q_SLEEPSESSION q_sleepsession;
  RBC_Id_T_Common_Types_Pkg origin;
} p42_sessionManagement_T_RCM_MsgTypes_Pkg;

/* API_Msg_Pkg::API_RadioMsgHeader_T/ */
typedef struct kcg_tag_API_RadioMsgHeader_T_API_Msg_Pkg {
  kcg_bool present;
  kcg_bool apiConsistencyError;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg Radio_Common_Header;
  RadioMetadata_T_Common_Types_Pkg Radio_MetaData;
  RBC_Id_T_Common_Types_Pkg sendingRBC_Id;
} API_RadioMsgHeader_T_API_Msg_Pkg;

/* API_Msg_Pkg::API_TrackSideInput_T/ */
typedef struct kcg_tag_API_TrackSideInput_T_API_Msg_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTimeMsgReceived;
  MsgSource_T_Common_Types_Pkg msg_type;
  API_TelegramHeader_T_API_Msg_Pkg btm_msg;
  API_RadioMsgHeader_T_API_Msg_Pkg rtm_msg;
  CompressedPackets_T_Common_Types_Pkg packets;
} API_TrackSideInput_T_API_Msg_Pkg;

/* RCM_MsgTypes_Pkg::p45_radioNetworkRegistration_T/ */
typedef struct kcg_tag_p45_radioNetworkRegistration_T_RCM_MsgTypes_Pkg {
  kcg_bool valid;
  MsgSource_T_Common_Types_Pkg msgSrc;
  Q_DIR q_dir;
  NID_MN nid_mn;
  RBC_Id_T_Common_Types_Pkg origin;
} p45_radioNetworkRegistration_T_RCM_MsgTypes_Pkg;

/* RCM_MsgTypes_Pkg::m38_initiationOfACommunicationSession_T/ */
typedef struct kcg_tag_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg {
  kcg_bool valid;
  MsgSource_T_Common_Types_Pkg msgSrc;
  RBC_Id_T_Common_Types_Pkg origin;
} m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg;

/* RCM_Session_Types_Pkg::sessionCmd_T/ */
typedef struct kcg_tag_sessionCmd_T_RCM_Session_Types_Pkg {
  kcg_bool valid;
  kcg_bool initiatedByOBU;
  kcg_bool initiatedByRBC;
  Q_RBC q_rbc;
  NID_C nid_c;
  NID_RBC nid_rbc;
  NID_RADIO nid_radio;
  RBC_Id_T_Common_Types_Pkg origin;
  m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg m38;
  p42_sessionManagement_T_RCM_MsgTypes_Pkg p42;
} sessionCmd_T_RCM_Session_Types_Pkg;

/* RCM_MsgTypes_Pkg::m32_RBC_RIU_SystemVersion_T/ */
typedef struct kcg_tag_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg {
  kcg_bool valid;
  MsgSource_T_Common_Types_Pkg msgSrc;
  kcg_bool versionSupported;
  RBC_Id_T_Common_Types_Pkg origin;
  M_VERSION m_version;
} m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg;

/* RCM_MsgTypes_Pkg::m39_AckOfTerminationOfACommunicationSession_T/ */
typedef struct kcg_tag_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg {
  kcg_bool valid;
  MsgSource_T_Common_Types_Pkg msgSrc;
  RBC_Id_T_Common_Types_Pkg origin;
  NID_LRBG lrbg;
} m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg;

typedef kcg_int32 array_int32_13[13];

/* SDMConversionModelPkg::v_MergedSteps_t/ */
typedef array_int32_13 v_MergedSteps_t_SDMConversionModelPkg;

/* SDMConversionModelPkg::a_MergedSteps_t/ */
typedef array_int32_13 a_MergedSteps_t_SDMConversionModelPkg;

/* SDMConversionModelPkg::av_MergedMap_t/ */
typedef struct kcg_tag_av_MergedMap_t_SDMConversionModelPkg {
  a_MergedSteps_t_SDMConversionModelPkg a;
  v_MergedSteps_t_SDMConversionModelPkg v;
} av_MergedMap_t_SDMConversionModelPkg;

/* RCM_Types_Pkg::mobileRegistrationContext_T/ */
typedef struct kcg_tag_mobileRegistrationContext_T_RCM_Types_Pkg {
  kcg_bool valid;
  kcg_int32 mobileDeviceNo;
  mobileHealthStatus_T_RCM_Types_Pkg healthStatus;
  mobileRegistrationStatus_T_RCM_Types_Pkg status;
  NID_MN nid_mn;
} mobileRegistrationContext_T_RCM_Types_Pkg;

/* RCM_Session_Types_Pkg::morcStatus_T/ */
typedef struct kcg_tag_morcStatus_T_RCM_Session_Types_Pkg {
  mobileRegistrationContext_T_RCM_Types_Pkg registration;
  mobileConnectionContext_T_RCM_Types_Pkg connection;
  sessionStatus_T_RCM_Session_Types_Pkg session;
} morcStatus_T_RCM_Session_Types_Pkg;

typedef kcg_int32 array_int32_99[99];

/* TM::P021_sections_array_flat_T/ */
typedef array_int32_99 P021_sections_array_flat_T_TM;

/* TM::P041_sections_array_flat_T/ */
typedef array_int32_99 P041_sections_array_flat_T_TM;

typedef array_int32_99 array_int32_99_33[33];

typedef kcg_int32 array_int32_7[7];

/* TM::Array07/ */
typedef array_int32_7 Array07_TM;

/* SDMConversionModelPkg::v_KvSteps_t/ */
typedef array_int32_7 v_KvSteps_t_SDMConversionModelPkg;

/* SDMConversionModelPkg::m_KvSteps_t/ */
typedef array_int32_7 m_KvSteps_t_SDMConversionModelPkg;

/* SDMConversionModelPkg::mv_Map_t/ */
typedef struct kcg_tag_mv_Map_t_SDMConversionModelPkg {
  m_KvSteps_t_SDMConversionModelPkg m;
  v_KvSteps_t_SDMConversionModelPkg v;
} mv_Map_t_SDMConversionModelPkg;

typedef mv_Map_t_SDMConversionModelPkg _169_array[13];

/* DATA::DMI_Text_Message_int_array_T/,
   DATA::Packets::EVC_to_DMI::CAST_DMI_Text_Message_to_int1/ */
typedef kcg_int32 DMI_Text_Message_int_array_T_DATA[262];

typedef struct kcg_tag_struct_273277 {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  kcg_int32 d_startreverse;
  kcg_int32 l_reversearea;
} struct_273277;

/* TM::P138_OBU_T/ */
typedef struct_273277 P138_OBU_T_TM;

/* Packet_Types_Pkg::P138_ReversingAreaInformation_T/ */
typedef struct_273277 P138_ReversingAreaInformation_T_Packet_Types_Pkg;

/* Level_And_Mode_Types_Pkg::T_Data_From_Track_Packet/ */
typedef struct kcg_tag_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg {
  _7_P12_Level1MovementAuthorities_T_Packet_Types_Pkg P_12;
  P135_StopShuntingOnDeskOpening_T_Packet_Types_Pkg P_135;
  P137_StopIfInStaffResponsible_T_Packet_Types_Pkg P_137;
  P138_ReversingAreaInformation_T_Packet_Types_Pkg P_138;
  P139_ReversingSupervisionInformation_T_Packet_Types_Pkg P_139;
  _6_P15_Level23MovementAuthorities_T_Packet_Types_Pkg P_15;
  P21_GradientProfiles_T_Packet_Types_Pkg P_21;
  P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg P_27;
  P41_LevelTransistionOrders_T_Packet_Types_Pkg P_41;
  _8_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg P_46;
  P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg P_63;
  P80_ModeProfiles_T_Packet_Types_Pkg P_80;
  NID_LRBG LRBG;
  Location_T_Obu_BasicTypes_Pkg referenceLocation;
} T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg;

/* TrackAtlasTypes::DataForModeAndLevel_t/ */
typedef struct kcg_tag_DataForModeAndLevel_t_TrackAtlasTypes {
  T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg train_packets;
  T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg train_messages;
  kcg_bool p12;
  kcg_bool p15;
  kcg_bool p21;
  kcg_bool p27;
} DataForModeAndLevel_t_TrackAtlasTypes;

typedef kcg_int32 array_int32_10[10];

typedef kcg_int32 array_int32_4[4];

/* TM::Array04/ */
typedef array_int32_4 Array04_TM;

/* DATA::DMI_Text_Message_Ack_int_array_T/ */
typedef array_int32_4 DMI_Text_Message_Ack_int_array_T_DATA;

/* DATA::DMI_Status_int_array_T/ */
typedef array_int32_4 DMI_Status_int_array_T_DATA;

/* DATA::DMI_Level_Data_int_array_T/ */
typedef array_int32_4 DMI_Level_Data_int_array_T_DATA;

/* DATA::Packets::EVC_to_DMI::CAST_DMI_Identifier_Request_to_int1/,
   DATA::Variables::CAST_DMI_LevelList_to_int/,
   DATA::Variables::CAST_DMI_gradientProfile_to_int/,
   DATA::Variables::CAST_DMI_speedProfile_to_int/,
   DATA::Variables::CAST_DMI_trackCondition_to_int/,
   Messages::CAST_EVC_to_DMI_to_int/,
   TM_TrainToTrack::C_P011_train_compr/,
   TM_TrainToTrack::P044_other_data/,
   TM_conversions::C_P005_compr_onboard/,
   TM_conversions::C_P080_compr_onboard/ */
typedef kcg_int32 P044_other_data_TM_TrainToTrack[1];

/* TM_TrainToTrack::P044/ */
typedef struct kcg_tag_P044_TM_TrainToTrack {
  kcg_bool valid;
  NID_PACKET nid_packet;
  L_PACKET l_packet;
  NID_XUSER nid_xuser;
  P044_other_data_TM_TrainToTrack external_data;
} P044_TM_TrainToTrack;

#ifndef kcg_copy_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg
#define kcg_copy_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg)))
#endif /* kcg_copy_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg */

#ifndef kcg_copy_TrainLocations_real_T_SDM_Types_Pkg
#define kcg_copy_TrainLocations_real_T_SDM_Types_Pkg(kcg_C1, kcg_C2)          \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (TrainLocations_real_T_SDM_Types_Pkg)))
#endif /* kcg_copy_TrainLocations_real_T_SDM_Types_Pkg */

#ifndef kcg_copy_P005_OBU_T_TM
#define kcg_copy_P005_OBU_T_TM(kcg_C1, kcg_C2)                                \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P005_OBU_T_TM)))
#endif /* kcg_copy_P005_OBU_T_TM */

#ifndef kcg_copy_P080_OBU_T_TM
#define kcg_copy_P080_OBU_T_TM(kcg_C1, kcg_C2)                                \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P080_OBU_T_TM)))
#endif /* kcg_copy_P080_OBU_T_TM */

#ifndef kcg_copy_P027V1_section_enum_T_TM_baseline2
#define kcg_copy_P027V1_section_enum_T_TM_baseline2(kcg_C1, kcg_C2)           \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (P027V1_section_enum_T_TM_baseline2)))
#endif /* kcg_copy_P027V1_section_enum_T_TM_baseline2 */

#ifndef kcg_copy_P041_OBU_T_TM
#define kcg_copy_P041_OBU_T_TM(kcg_C1, kcg_C2)                                \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P041_OBU_T_TM)))
#endif /* kcg_copy_P041_OBU_T_TM */

#ifndef kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes
#define kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes(kcg_C1, kcg_C2) \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (DataForSupervision_nextGen_t_TrackAtlasTypes)))
#endif /* kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes */

#ifndef kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg
#define kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg(kcg_C1, kcg_C2)       \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (ReportedBG_T_ProvidePositionReport_Pkg)))
#endif /* kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg */

#ifndef kcg_copy_TelegramStore_T_Receive_TrackSide_Msg_Pkg
#define kcg_copy_TelegramStore_T_Receive_TrackSide_Msg_Pkg(kcg_C1, kcg_C2)    \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (TelegramStore_T_Receive_TrackSide_Msg_Pkg)))
#endif /* kcg_copy_TelegramStore_T_Receive_TrackSide_Msg_Pkg */

#ifndef kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg
#define kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(kcg_C1, kcg_C2)   \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (DMI_Level_Data_T_DMI_Messages_Bothways_Pkg)))
#endif /* kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg */

#ifndef kcg_copy_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg
#define kcg_copy_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg)))
#endif /* kcg_copy_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifndef kcg_copy_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg
#define kcg_copy_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg)))
#endif /* kcg_copy_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg */

#ifndef kcg_copy_radioNetWorkIDs_T_MoRC_Pck
#define kcg_copy_radioNetWorkIDs_T_MoRC_Pck(kcg_C1, kcg_C2)                   \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (radioNetWorkIDs_T_MoRC_Pck)))
#endif /* kcg_copy_radioNetWorkIDs_T_MoRC_Pck */

#ifndef kcg_copy_Change_of_allowed_current_consumption_T_TIU_Types_Pkg
#define kcg_copy_Change_of_allowed_current_consumption_T_TIU_Types_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (Change_of_allowed_current_consumption_T_TIU_Types_Pkg)))
#endif /* kcg_copy_Change_of_allowed_current_consumption_T_TIU_Types_Pkg */

#ifndef kcg_copy_Change_traction_system_T_TIU_Types_Pkg
#define kcg_copy_Change_traction_system_T_TIU_Types_Pkg(kcg_C1, kcg_C2)       \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (Change_traction_system_T_TIU_Types_Pkg)))
#endif /* kcg_copy_Change_traction_system_T_TIU_Types_Pkg */

#ifndef kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg
#define kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(kcg_C1, kcg_C2)        \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (sessionStatus_T_RCM_Session_Types_Pkg)))
#endif /* kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg */

#ifndef kcg_copy_P003_permanent_data_T_TM_baseline2
#define kcg_copy_P003_permanent_data_T_TM_baseline2(kcg_C1, kcg_C2)           \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (P003_permanent_data_T_TM_baseline2)))
#endif /* kcg_copy_P003_permanent_data_T_TM_baseline2 */

#ifndef kcg_copy_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg
#define kcg_copy_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg(kcg_C1, kcg_C2) \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg)))
#endif /* kcg_copy_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg */

#ifndef kcg_copy_P041_section_enum_T_TM
#define kcg_copy_P041_section_enum_T_TM(kcg_C1, kcg_C2)                       \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P041_section_enum_T_TM)))
#endif /* kcg_copy_P041_section_enum_T_TM */

#ifndef kcg_copy_Brake_status_T_TIU_Types_Pkg
#define kcg_copy_Brake_status_T_TIU_Types_Pkg(kcg_C1, kcg_C2)                 \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Brake_status_T_TIU_Types_Pkg)))
#endif /* kcg_copy_Brake_status_T_TIU_Types_Pkg */

#ifndef kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg
#define kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg)))
#endif /* kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg */

#ifndef kcg_copy_Endtimer_t_TrackAtlasTypes
#define kcg_copy_Endtimer_t_TrackAtlasTypes(kcg_C1, kcg_C2)                   \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Endtimer_t_TrackAtlasTypes)))
#endif /* kcg_copy_Endtimer_t_TrackAtlasTypes */

#ifndef kcg_copy_struct_273277
#define kcg_copy_struct_273277(kcg_C1, kcg_C2)                                \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_273277)))
#endif /* kcg_copy_struct_273277 */

#ifndef kcg_copy_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg
#define kcg_copy_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (ModeLevel2PositionReport_T_ProvidePositionReport_Pkg)))
#endif /* kcg_copy_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg */

#ifndef kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg
#define kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2)   \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (T_LevelTransition_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_P027V1_section_enum_qdiff_T_TM_baseline2
#define kcg_copy_P027V1_section_enum_qdiff_T_TM_baseline2(kcg_C1, kcg_C2)     \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (P027V1_section_enum_qdiff_T_TM_baseline2)))
#endif /* kcg_copy_P027V1_section_enum_qdiff_T_TM_baseline2 */

#ifndef kcg_copy_t_Brake_t_SDMModelPkg
#define kcg_copy_t_Brake_t_SDMModelPkg(kcg_C1, kcg_C2)                        \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (t_Brake_t_SDMModelPkg)))
#endif /* kcg_copy_t_Brake_t_SDMModelPkg */

#ifndef kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg
#define kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(kcg_C1, kcg_C2)    \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (mobileRegistrationContext_T_RCM_Types_Pkg)))
#endif /* kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg */

#ifndef kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg
#define kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(kcg_C1, kcg_C2)            \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (LocWithInAcc_T_Obu_BasicTypes_Pkg)))
#endif /* kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg */

#ifndef kcg_copy_RBC_Id_T_Common_Types_Pkg
#define kcg_copy_RBC_Id_T_Common_Types_Pkg(kcg_C1, kcg_C2)                    \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (RBC_Id_T_Common_Types_Pkg)))
#endif /* kcg_copy_RBC_Id_T_Common_Types_Pkg */

#ifndef kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg
#define kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(kcg_C1, kcg_C2)        \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (centerOfBalisePosition_T_BG_Types_Pkg)))
#endif /* kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg */

#ifndef kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg
#define kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg(kcg_C1, kcg_C2)          \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (OdometrySpeeds_T_Obu_BasicTypes_Pkg)))
#endif /* kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg */

#ifndef kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg
#define kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(kcg_C1, kcg_C2)   \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg)))
#endif /* kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg */

#ifndef kcg_copy_a_Brake_t_SDMConversionModelPkg
#define kcg_copy_a_Brake_t_SDMConversionModelPkg(kcg_C1, kcg_C2)              \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (a_Brake_t_SDMConversionModelPkg)))
#endif /* kcg_copy_a_Brake_t_SDMConversionModelPkg */

#ifndef kcg_copy_LocationBasedEvents_T_ProvidePositionReport_Pkg
#define kcg_copy_LocationBasedEvents_T_ProvidePositionReport_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (LocationBasedEvents_T_ProvidePositionReport_Pkg)))
#endif /* kcg_copy_LocationBasedEvents_T_ProvidePositionReport_Pkg */

#ifndef kcg_copy_P058_section_enum_T_TM
#define kcg_copy_P058_section_enum_T_TM(kcg_C1, kcg_C2)                       \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P058_section_enum_T_TM)))
#endif /* kcg_copy_P058_section_enum_T_TM */

#ifndef kcg_copy_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg
#define kcg_copy_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg)))
#endif /* kcg_copy_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg */

#ifndef kcg_copy_struct_273626
#define kcg_copy_struct_273626(kcg_C1, kcg_C2)                                \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_273626)))
#endif /* kcg_copy_struct_273626 */

#ifndef kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg
#define kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg)))
#endif /* kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifndef kcg_copy_morcStatus_T_RCM_Session_Types_Pkg
#define kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(kcg_C1, kcg_C2)           \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (morcStatus_T_RCM_Session_Types_Pkg)))
#endif /* kcg_copy_morcStatus_T_RCM_Session_Types_Pkg */

#ifndef kcg_copy_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg
#define kcg_copy_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (safeRadioConnectionIndication_T_RCM_Session_Types_Pkg)))
#endif /* kcg_copy_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg */

#ifndef kcg_copy_ParabolaArc_T_CalcBrakingCurves_types
#define kcg_copy_ParabolaArc_T_CalcBrakingCurves_types(kcg_C1, kcg_C2)        \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (ParabolaArc_T_CalcBrakingCurves_types)))
#endif /* kcg_copy_ParabolaArc_T_CalcBrakingCurves_types */

#ifndef kcg_copy_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg
#define kcg_copy_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (P137_StopIfInStaffResponsible_T_Packet_Types_Pkg)))
#endif /* kcg_copy_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg */

#ifndef kcg_copy_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store
#define kcg_copy_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store)))
#endif /* kcg_copy_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store */

#ifndef kcg_copy_P009_TM_TrainToTrack
#define kcg_copy_P009_TM_TrainToTrack(kcg_C1, kcg_C2)                         \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P009_TM_TrainToTrack)))
#endif /* kcg_copy_P009_TM_TrainToTrack */

#ifndef kcg_copy_DMI_DriverAck_T_DMI_Types_Pkg
#define kcg_copy_DMI_DriverAck_T_DMI_Types_Pkg(kcg_C1, kcg_C2)                \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_DriverAck_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_DriverAck_T_DMI_Types_Pkg */

#ifndef kcg_copy_P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg
#define kcg_copy_P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg)))
#endif /* kcg_copy_P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg */

#ifndef kcg_copy_T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg
#define kcg_copy_T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_TIU_Input_msg_API_TIU_Pkg
#define kcg_copy_TIU_Input_msg_API_TIU_Pkg(kcg_C1, kcg_C2)                    \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (TIU_Input_msg_API_TIU_Pkg)))
#endif /* kcg_copy_TIU_Input_msg_API_TIU_Pkg */

#ifndef kcg_copy_TIU_Output_msg_API_TIU_Pkg
#define kcg_copy_TIU_Output_msg_API_TIU_Pkg(kcg_C1, kcg_C2)                   \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (TIU_Output_msg_API_TIU_Pkg)))
#endif /* kcg_copy_TIU_Output_msg_API_TIU_Pkg */

#ifndef kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg
#define kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg)))
#endif /* kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg */

#ifndef kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg
#define kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(kcg_C1, kcg_C2)   \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (PT0_PositionReport_T_Packet_TrainTypes_Pkg)))
#endif /* kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg */

#ifndef kcg_copy_struct_273993
#define kcg_copy_struct_273993(kcg_C1, kcg_C2)                                \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_273993)))
#endif /* kcg_copy_struct_273993 */

#ifndef kcg_copy_IterPacket58_T_Packet_Types_Pkg
#define kcg_copy_IterPacket58_T_Packet_Types_Pkg(kcg_C1, kcg_C2)              \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (IterPacket58_T_Packet_Types_Pkg)))
#endif /* kcg_copy_IterPacket58_T_Packet_Types_Pkg */

#ifndef kcg_copy_DMI_train_length_T_DMI_Types_Pkg
#define kcg_copy_DMI_train_length_T_DMI_Types_Pkg(kcg_C1, kcg_C2)             \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (DMI_train_length_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_train_length_T_DMI_Types_Pkg */

#ifndef kcg_copy_DMI_DriverRequest_T_DMI_Types_Pkg
#define kcg_copy_DMI_DriverRequest_T_DMI_Types_Pkg(kcg_C1, kcg_C2)            \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (DMI_DriverRequest_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_DriverRequest_T_DMI_Types_Pkg */

#ifndef kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg
#define kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(kcg_C1, kcg_C2)      \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (mobileConnectionContext_T_RCM_Types_Pkg)))
#endif /* kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg */

#ifndef kcg_copy_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg
#define kcg_copy_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg)))
#endif /* kcg_copy_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg */

#ifndef kcg_copy_M_146_T_TM_radio_messages
#define kcg_copy_M_146_T_TM_radio_messages(kcg_C1, kcg_C2)                    \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (M_146_T_TM_radio_messages)))
#endif /* kcg_copy_M_146_T_TM_radio_messages */

#ifndef kcg_copy_trainData_internal_t_SDM_Types_Pkg
#define kcg_copy_trainData_internal_t_SDM_Types_Pkg(kcg_C1, kcg_C2)           \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (trainData_internal_t_SDM_Types_Pkg)))
#endif /* kcg_copy_trainData_internal_t_SDM_Types_Pkg */

#ifndef kcg_copy__2_MovementAuthoritySection_t_TrackAtlasTypes
#define kcg_copy__2_MovementAuthoritySection_t_TrackAtlasTypes(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (_2_MovementAuthoritySection_t_TrackAtlasTypes)))
#endif /* kcg_copy__2_MovementAuthoritySection_t_TrackAtlasTypes */

#ifndef kcg_copy_P21_GradientProfile_T_Packet_Types_Pkg
#define kcg_copy_P21_GradientProfile_T_Packet_Types_Pkg(kcg_C1, kcg_C2)       \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (P21_GradientProfile_T_Packet_Types_Pkg)))
#endif /* kcg_copy_P21_GradientProfile_T_Packet_Types_Pkg */

#ifndef kcg_copy_connection_ids_T_Handover_Pkg
#define kcg_copy_connection_ids_T_Handover_Pkg(kcg_C1, kcg_C2)                \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (connection_ids_T_Handover_Pkg)))
#endif /* kcg_copy_connection_ids_T_Handover_Pkg */

#ifndef kcg_copy_DMI_train_id_T_DMI_Types_Pkg
#define kcg_copy_DMI_train_id_T_DMI_Types_Pkg(kcg_C1, kcg_C2)                 \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_train_id_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_train_id_T_DMI_Types_Pkg */

#ifndef kcg_copy_av_Map_t_SDMConversionModelPkg
#define kcg_copy_av_Map_t_SDMConversionModelPkg(kcg_C1, kcg_C2)               \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (av_Map_t_SDMConversionModelPkg)))
#endif /* kcg_copy_av_Map_t_SDMConversionModelPkg */

#ifndef kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg
#define kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(kcg_C1, kcg_C2)                 \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_To_Modes_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg */

#ifndef kcg_copy_nvkvint_T_Packet_Types_Pkg
#define kcg_copy_nvkvint_T_Packet_Types_Pkg(kcg_C1, kcg_C2)                   \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (nvkvint_T_Packet_Types_Pkg)))
#endif /* kcg_copy_nvkvint_T_Packet_Types_Pkg */

#ifndef kcg_copy_P021_section_enum_T_TM
#define kcg_copy_P021_section_enum_T_TM(kcg_C1, kcg_C2)                       \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P021_section_enum_T_TM)))
#endif /* kcg_copy_P021_section_enum_T_TM */

#ifndef kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg
#define kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg)))
#endif /* kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg */

#ifndef kcg_copy_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg
#define kcg_copy_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg)))
#endif /* kcg_copy_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg */

#ifndef kcg_copy_struct_274389
#define kcg_copy_struct_274389(kcg_C1, kcg_C2)                                \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_274389)))
#endif /* kcg_copy_struct_274389 */

#ifndef kcg_copy_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg
#define kcg_copy_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (T_LevelTansitionInfo_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_mv_Map_t_SDMConversionModelPkg
#define kcg_copy_mv_Map_t_SDMConversionModelPkg(kcg_C1, kcg_C2)               \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (mv_Map_t_SDMConversionModelPkg)))
#endif /* kcg_copy_mv_Map_t_SDMConversionModelPkg */

#ifndef kcg_copy_T_Data_From_STM_Level_And_Mode_Types_Pkg
#define kcg_copy_T_Data_From_STM_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2)     \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (T_Data_From_STM_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_Data_From_STM_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg
#define kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(kcg_C1, kcg_C2) \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (PT5_TrainRunningNumber_Packet_TrainTypes_Pkg)))
#endif /* kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg */

#ifndef kcg_copy_nationValuesForDMI_T_DMI_Types_Pkg
#define kcg_copy_nationValuesForDMI_T_DMI_Types_Pkg(kcg_C1, kcg_C2)           \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (nationValuesForDMI_T_DMI_Types_Pkg)))
#endif /* kcg_copy_nationValuesForDMI_T_DMI_Types_Pkg */

#ifndef kcg_copy_mobileHWStatus_Type_MoRC_Pck
#define kcg_copy_mobileHWStatus_Type_MoRC_Pck(kcg_C1, kcg_C2)                 \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (mobileHWStatus_Type_MoRC_Pck)))
#endif /* kcg_copy_mobileHWStatus_Type_MoRC_Pck */

#ifndef kcg_copy_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg
#define kcg_copy_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg)))
#endif /* kcg_copy_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg */

#ifndef kcg_copy_Passenger_door_control_info_T_TIU_Types_Pkg
#define kcg_copy_Passenger_door_control_info_T_TIU_Types_Pkg(kcg_C1, kcg_C2)  \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (Passenger_door_control_info_T_TIU_Types_Pkg)))
#endif /* kcg_copy_Passenger_door_control_info_T_TIU_Types_Pkg */

#ifndef kcg_copy_P046_OBU_T_TM
#define kcg_copy_P046_OBU_T_TM(kcg_C1, kcg_C2)                                \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P046_OBU_T_TM)))
#endif /* kcg_copy_P046_OBU_T_TM */

#ifndef kcg_copy_P027V1_OBU_T_TM_baseline2
#define kcg_copy_P027V1_OBU_T_TM_baseline2(kcg_C1, kcg_C2)                    \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P027V1_OBU_T_TM_baseline2)))
#endif /* kcg_copy_P027V1_OBU_T_TM_baseline2 */

#ifndef kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types
#define kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(kcg_C1, kcg_C2)      \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (ParabolaCurve_T_CalcBrakingCurves_types)))
#endif /* kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types */

#ifndef kcg_copy_Target_T_TargetManagement_types
#define kcg_copy_Target_T_TargetManagement_types(kcg_C1, kcg_C2)              \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (Target_T_TargetManagement_types)))
#endif /* kcg_copy_Target_T_TargetManagement_types */

#ifndef kcg_copy_P027V1_OBU_body_enum_T_TM_baseline2
#define kcg_copy_P027V1_OBU_body_enum_T_TM_baseline2(kcg_C1, kcg_C2)          \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (P027V1_OBU_body_enum_T_TM_baseline2)))
#endif /* kcg_copy_P027V1_OBU_body_enum_T_TM_baseline2 */

#ifndef kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store
#define kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(kcg_C1, kcg_C2) \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store)))
#endif /* kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store */

#ifndef kcg_copy_struct_274688
#define kcg_copy_struct_274688(kcg_C1, kcg_C2)                                \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_274688)))
#endif /* kcg_copy_struct_274688 */

#ifndef kcg_copy_BG_Message_T_BG_Types_Pkg
#define kcg_copy_BG_Message_T_BG_Types_Pkg(kcg_C1, kcg_C2)                    \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (BG_Message_T_BG_Types_Pkg)))
#endif /* kcg_copy_BG_Message_T_BG_Types_Pkg */

#ifndef kcg_copy_Telegram_T_BG_Types_Pkg
#define kcg_copy_Telegram_T_BG_Types_Pkg(kcg_C1, kcg_C2)                      \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Telegram_T_BG_Types_Pkg)))
#endif /* kcg_copy_Telegram_T_BG_Types_Pkg */

#ifndef kcg_copy_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg
#define kcg_copy_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg)))
#endif /* kcg_copy_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg */

#ifndef kcg_copy_ErrorMessage_T_ProvidePositionReport_Pkg
#define kcg_copy_ErrorMessage_T_ProvidePositionReport_Pkg(kcg_C1, kcg_C2)     \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (ErrorMessage_T_ProvidePositionReport_Pkg)))
#endif /* kcg_copy_ErrorMessage_T_ProvidePositionReport_Pkg */

#ifndef kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg
#define kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg)))
#endif /* kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg */

#ifndef kcg_copy_Type_I_train_commands_T_TIU_Types_Pkg
#define kcg_copy_Type_I_train_commands_T_TIU_Types_Pkg(kcg_C1, kcg_C2)        \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (Type_I_train_commands_T_TIU_Types_Pkg)))
#endif /* kcg_copy_Type_I_train_commands_T_TIU_Types_Pkg */

#ifndef kcg_copy_struct_274806
#define kcg_copy_struct_274806(kcg_C1, kcg_C2)                                \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_274806)))
#endif /* kcg_copy_struct_274806 */

#ifndef kcg_copy_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg
#define kcg_copy_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_struct_274867
#define kcg_copy_struct_274867(kcg_C1, kcg_C2)                                \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_274867)))
#endif /* kcg_copy_struct_274867 */

#ifndef kcg_copy_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg
#define kcg_copy_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (T_ERTMS_capabilities_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_AccuDistanceProfileMA_TA_MA_new
#define kcg_copy_AccuDistanceProfileMA_TA_MA_new(kcg_C1, kcg_C2)              \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (AccuDistanceProfileMA_TA_MA_new)))
#endif /* kcg_copy_AccuDistanceProfileMA_TA_MA_new */

#ifndef kcg_copy_struct_274908
#define kcg_copy_struct_274908(kcg_C1, kcg_C2)                                \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_274908)))
#endif /* kcg_copy_struct_274908 */

#ifndef kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg
#define kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg)))
#endif /* kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg */

#ifndef kcg_copy_Brake_pressure_value_T_TIU_Types_Pkg
#define kcg_copy_Brake_pressure_value_T_TIU_Types_Pkg(kcg_C1, kcg_C2)         \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (Brake_pressure_value_T_TIU_Types_Pkg)))
#endif /* kcg_copy_Brake_pressure_value_T_TIU_Types_Pkg */

#ifndef kcg_copy_Diff_T_Packet_Types_Pkg
#define kcg_copy_Diff_T_Packet_Types_Pkg(kcg_C1, kcg_C2)                      \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Diff_T_Packet_Types_Pkg)))
#endif /* kcg_copy_Diff_T_Packet_Types_Pkg */

#ifndef kcg_copy_DMI_trackConditionElement_T_DMI_Types_Pkg
#define kcg_copy_DMI_trackConditionElement_T_DMI_Types_Pkg(kcg_C1, kcg_C2)    \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (DMI_trackConditionElement_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_trackConditionElement_T_DMI_Types_Pkg */

#ifndef kcg_copy_struct_275034
#define kcg_copy_struct_275034(kcg_C1, kcg_C2)                                \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_275034)))
#endif /* kcg_copy_struct_275034 */

#ifndef kcg_copy_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg
#define kcg_copy_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg)))
#endif /* kcg_copy_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg */

#ifndef kcg_copy_T_Data_From_F2_functions_Level_And_Mode_Types_Pkg
#define kcg_copy_T_Data_From_F2_functions_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (T_Data_From_F2_functions_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_Data_From_F2_functions_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg
#define kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(kcg_C1, kcg_C2) \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (RadioManagement_T_API_RadioCommunication_Pkg)))
#endif /* kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg */

#ifndef kcg_copy_Brake_inhibition_command_T_TIU_Types_Pkg
#define kcg_copy_Brake_inhibition_command_T_TIU_Types_Pkg(kcg_C1, kcg_C2)     \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (Brake_inhibition_command_T_TIU_Types_Pkg)))
#endif /* kcg_copy_Brake_inhibition_command_T_TIU_Types_Pkg */

#ifndef kcg_copy_TSM_revokeCond_T_SDM_Commands_Pkg
#define kcg_copy_TSM_revokeCond_T_SDM_Commands_Pkg(kcg_C1, kcg_C2)            \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (TSM_revokeCond_T_SDM_Commands_Pkg)))
#endif /* kcg_copy_TSM_revokeCond_T_SDM_Commands_Pkg */

#ifndef kcg_copy_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg
#define kcg_copy_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg)))
#endif /* kcg_copy_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifndef kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg
#define kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2)        \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (T_Mode_Level_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_P63_BaliseInSRAuthority_T_Packet_Types_Pkg
#define kcg_copy_P63_BaliseInSRAuthority_T_Packet_Types_Pkg(kcg_C1, kcg_C2)   \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (P63_BaliseInSRAuthority_T_Packet_Types_Pkg)))
#endif /* kcg_copy_P63_BaliseInSRAuthority_T_Packet_Types_Pkg */

#ifndef kcg_copy_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg
#define kcg_copy_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg
#define kcg_copy_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg)))
#endif /* kcg_copy_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg */

#ifndef kcg_copy_struct_275228
#define kcg_copy_struct_275228(kcg_C1, kcg_C2)                                \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_275228)))
#endif /* kcg_copy_struct_275228 */

#ifndef kcg_copy_DP_or_OL_t_TrackAtlasTypes
#define kcg_copy_DP_or_OL_t_TrackAtlasTypes(kcg_C1, kcg_C2)                   \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DP_or_OL_t_TrackAtlasTypes)))
#endif /* kcg_copy_DP_or_OL_t_TrackAtlasTypes */

#ifndef kcg_copy_probesBalises_T_xdebugSupport_Pkg
#define kcg_copy_probesBalises_T_xdebugSupport_Pkg(kcg_C1, kcg_C2)            \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (probesBalises_T_xdebugSupport_Pkg)))
#endif /* kcg_copy_probesBalises_T_xdebugSupport_Pkg */

#ifndef kcg_copy_TargetCollection_T_TargetManagement_types
#define kcg_copy_TargetCollection_T_TargetManagement_types(kcg_C1, kcg_C2)    \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (TargetCollection_T_TargetManagement_types)))
#endif /* kcg_copy_TargetCollection_T_TargetManagement_types */

#ifndef kcg_copy_struct_275282
#define kcg_copy_struct_275282(kcg_C1, kcg_C2)                                \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_275282)))
#endif /* kcg_copy_struct_275282 */

#ifndef kcg_copy_struct_275303
#define kcg_copy_struct_275303(kcg_C1, kcg_C2)                                \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_275303)))
#endif /* kcg_copy_struct_275303 */

#ifndef kcg_copy_CurveCollection_T_CalcBrakingCurves_types
#define kcg_copy_CurveCollection_T_CalcBrakingCurves_types(kcg_C1, kcg_C2)    \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (CurveCollection_T_CalcBrakingCurves_types)))
#endif /* kcg_copy_CurveCollection_T_CalcBrakingCurves_types */

#ifndef kcg_copy_DataForModeAndLevel_t_TrackAtlasTypes
#define kcg_copy_DataForModeAndLevel_t_TrackAtlasTypes(kcg_C1, kcg_C2)        \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (DataForModeAndLevel_t_TrackAtlasTypes)))
#endif /* kcg_copy_DataForModeAndLevel_t_TrackAtlasTypes */

#ifndef kcg_copy_RBC_Communication_T_ProvidePositionReport_Pkg
#define kcg_copy_RBC_Communication_T_ProvidePositionReport_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (RBC_Communication_T_ProvidePositionReport_Pkg)))
#endif /* kcg_copy_RBC_Communication_T_ProvidePositionReport_Pkg */

#ifndef kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg
#define kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg)))
#endif /* kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg */

#ifndef kcg_copy_TIU_commandStatus_T_TIU_Types_Pkg
#define kcg_copy_TIU_commandStatus_T_TIU_Types_Pkg(kcg_C1, kcg_C2)            \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (TIU_commandStatus_T_TIU_Types_Pkg)))
#endif /* kcg_copy_TIU_commandStatus_T_TIU_Types_Pkg */

#ifndef kcg_copy_M_voltage_T_TIU_Types_Pkg
#define kcg_copy_M_voltage_T_TIU_Types_Pkg(kcg_C1, kcg_C2)                    \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (M_voltage_T_TIU_Types_Pkg)))
#endif /* kcg_copy_M_voltage_T_TIU_Types_Pkg */

#ifndef kcg_copy_M_TrainTrack_Message_T_TM_radio_messages
#define kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(kcg_C1, kcg_C2)     \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (M_TrainTrack_Message_T_TM_radio_messages)))
#endif /* kcg_copy_M_TrainTrack_Message_T_TM_radio_messages */

#ifndef kcg_copy_T_AnnouncedLevel_Level_And_Mode_Types_Pkg
#define kcg_copy_T_AnnouncedLevel_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2)    \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (T_AnnouncedLevel_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_AnnouncedLevel_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg
#define kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(kcg_C1, kcg_C2)       \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (OdometryLocations_T_Obu_BasicTypes_Pkg)))
#endif /* kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg */

#ifndef kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg
#define kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(kcg_C1, kcg_C2)          \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (mobileConnectionCmd_T_RCM_Types_Pkg)))
#endif /* kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg */

#ifndef kcg_copy_trainData_Trigger_T_trainData_Types_pkg
#define kcg_copy_trainData_Trigger_T_trainData_Types_pkg(kcg_C1, kcg_C2)      \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (trainData_Trigger_T_trainData_Types_pkg)))
#endif /* kcg_copy_trainData_Trigger_T_trainData_Types_pkg */

#ifndef kcg_copy_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg
#define kcg_copy_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg)))
#endif /* kcg_copy_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifndef kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg
#define kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (P45_RadioNetworkRegistration_T_Packet_Types_Pkg)))
#endif /* kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg */

#ifndef kcg_copy_struct_275675
#define kcg_copy_struct_275675(kcg_C1, kcg_C2)                                \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_275675)))
#endif /* kcg_copy_struct_275675 */

#ifndef kcg_copy_Gradient_section_t_TrackAtlasTypes
#define kcg_copy_Gradient_section_t_TrackAtlasTypes(kcg_C1, kcg_C2)           \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (Gradient_section_t_TrackAtlasTypes)))
#endif /* kcg_copy_Gradient_section_t_TrackAtlasTypes */

#ifndef kcg_copy_DMI_trackCondition_T_DMI_Types_Pkg
#define kcg_copy_DMI_trackCondition_T_DMI_Types_Pkg(kcg_C1, kcg_C2)           \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (DMI_trackCondition_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_trackCondition_T_DMI_Types_Pkg */

#ifndef kcg_copy_DMI_gradientProfile_T_DMI_Types_Pkg
#define kcg_copy_DMI_gradientProfile_T_DMI_Types_Pkg(kcg_C1, kcg_C2)          \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (DMI_gradientProfile_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_gradientProfile_T_DMI_Types_Pkg */

#ifndef kcg_copy_DMI_speedProfile_T_DMI_Types_Pkg
#define kcg_copy_DMI_speedProfile_T_DMI_Types_Pkg(kcg_C1, kcg_C2)             \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (DMI_speedProfile_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_speedProfile_T_DMI_Types_Pkg */

#ifndef kcg_copy_DMI_LevelList_T_DMI_Types_Pkg
#define kcg_copy_DMI_LevelList_T_DMI_Types_Pkg(kcg_C1, kcg_C2)                \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_LevelList_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_LevelList_T_DMI_Types_Pkg */

#ifndef kcg_copy_av_MergedMap_t_SDMConversionModelPkg
#define kcg_copy_av_MergedMap_t_SDMConversionModelPkg(kcg_C1, kcg_C2)         \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (av_MergedMap_t_SDMConversionModelPkg)))
#endif /* kcg_copy_av_MergedMap_t_SDMConversionModelPkg */

#ifndef kcg_copy_P005_TM_TrainToTrack
#define kcg_copy_P005_TM_TrainToTrack(kcg_C1, kcg_C2)                         \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P005_TM_TrainToTrack)))
#endif /* kcg_copy_P005_TM_TrainToTrack */

#ifndef kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg
#define kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg(kcg_C1, kcg_C2)              \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (TIU_trainStatus_T_TIU_Types_Pkg)))
#endif /* kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg */

#ifndef kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg
#define kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg)))
#endif /* kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg */

#ifndef kcg_copy_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg
#define kcg_copy_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg(kcg_C1, kcg_C2)     \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg)))
#endif /* kcg_copy_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg */

#ifndef kcg_copy_TrainToTrackStatus_T_BG_Types_Pkg
#define kcg_copy_TrainToTrackStatus_T_BG_Types_Pkg(kcg_C1, kcg_C2)            \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (TrainToTrackStatus_T_BG_Types_Pkg)))
#endif /* kcg_copy_TrainToTrackStatus_T_BG_Types_Pkg */

#ifndef kcg_copy_DMI_level_T_DMI_Types_Pkg
#define kcg_copy_DMI_level_T_DMI_Types_Pkg(kcg_C1, kcg_C2)                    \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_level_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_level_T_DMI_Types_Pkg */

#ifndef kcg_copy_MRSP_reduction_acc_TA_Export
#define kcg_copy_MRSP_reduction_acc_TA_Export(kcg_C1, kcg_C2)                 \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MRSP_reduction_acc_TA_Export)))
#endif /* kcg_copy_MRSP_reduction_acc_TA_Export */

#ifndef kcg_copy_p45_radioNetworkRegistration_T_RCM_MsgTypes_Pkg
#define kcg_copy_p45_radioNetworkRegistration_T_RCM_MsgTypes_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (p45_radioNetworkRegistration_T_RCM_MsgTypes_Pkg)))
#endif /* kcg_copy_p45_radioNetworkRegistration_T_RCM_MsgTypes_Pkg */

#ifndef kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg
#define kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg)))
#endif /* kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg */

#ifndef kcg_copy_API_RadioMsgHeader_T_API_Msg_Pkg
#define kcg_copy_API_RadioMsgHeader_T_API_Msg_Pkg(kcg_C1, kcg_C2)             \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (API_RadioMsgHeader_T_API_Msg_Pkg)))
#endif /* kcg_copy_API_RadioMsgHeader_T_API_Msg_Pkg */

#ifndef kcg_copy_API_TelegramHeader_T_API_Msg_Pkg
#define kcg_copy_API_TelegramHeader_T_API_Msg_Pkg(kcg_C1, kcg_C2)             \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (API_TelegramHeader_T_API_Msg_Pkg)))
#endif /* kcg_copy_API_TelegramHeader_T_API_Msg_Pkg */

#ifndef kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg
#define kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(kcg_C1, kcg_C2)        \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (TrackSide_ForCheck_T_Common_Types_Pkg)))
#endif /* kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg */

#ifndef kcg_copy_BCAccumulator_type_CalcBrakingCurves_Pkg
#define kcg_copy_BCAccumulator_type_CalcBrakingCurves_Pkg(kcg_C1, kcg_C2)     \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (BCAccumulator_type_CalcBrakingCurves_Pkg)))
#endif /* kcg_copy_BCAccumulator_type_CalcBrakingCurves_Pkg */

#ifndef kcg_copy__4_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg
#define kcg_copy__4_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (_4_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg)))
#endif /* kcg_copy__4_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifndef kcg_copy_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg
#define kcg_copy_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg)))
#endif /* kcg_copy_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifndef kcg_copy_mobileRegistrationCmd_T_RCM_Types_Pkg
#define kcg_copy_mobileRegistrationCmd_T_RCM_Types_Pkg(kcg_C1, kcg_C2)        \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (mobileRegistrationCmd_T_RCM_Types_Pkg)))
#endif /* kcg_copy_mobileRegistrationCmd_T_RCM_Types_Pkg */

#ifndef kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg
#define kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg)))
#endif /* kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifndef kcg_copy_T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg
#define kcg_copy_T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_movementAuthorityForDMI_T_DMI_Types_Pkg
#define kcg_copy_movementAuthorityForDMI_T_DMI_Types_Pkg(kcg_C1, kcg_C2)      \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (movementAuthorityForDMI_T_DMI_Types_Pkg)))
#endif /* kcg_copy_movementAuthorityForDMI_T_DMI_Types_Pkg */

#ifndef kcg_copy_struct_276076
#define kcg_copy_struct_276076(kcg_C1, kcg_C2)                                \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_276076)))
#endif /* kcg_copy_struct_276076 */

#ifndef kcg_copy_nvkrint_T_Packet_Types_Pkg
#define kcg_copy_nvkrint_T_Packet_Types_Pkg(kcg_C1, kcg_C2)                   \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (nvkrint_T_Packet_Types_Pkg)))
#endif /* kcg_copy_nvkrint_T_Packet_Types_Pkg */

#ifndef kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg
#define kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(kcg_C1, kcg_C2)           \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (sessionCmd_T_RCM_Session_Types_Pkg)))
#endif /* kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg */

#ifndef kcg_copy_trainPositionInfo_T_TrainPosition_Types_Pck
#define kcg_copy_trainPositionInfo_T_TrainPosition_Types_Pck(kcg_C1, kcg_C2)  \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (trainPositionInfo_T_TrainPosition_Types_Pck)))
#endif /* kcg_copy_trainPositionInfo_T_TrainPosition_Types_Pck */

#ifndef kcg_copy_P003V1_OBU_T_TM_baseline2
#define kcg_copy_P003V1_OBU_T_TM_baseline2(kcg_C1, kcg_C2)                    \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P003V1_OBU_T_TM_baseline2)))
#endif /* kcg_copy_P003V1_OBU_T_TM_baseline2 */

#ifndef kcg_copy_P011_TM_TrainToTrack
#define kcg_copy_P011_TM_TrainToTrack(kcg_C1, kcg_C2)                         \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P011_TM_TrainToTrack)))
#endif /* kcg_copy_P011_TM_TrainToTrack */

#ifndef kcg_copy_P001_TM_TrainToTrack
#define kcg_copy_P001_TM_TrainToTrack(kcg_C1, kcg_C2)                         \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P001_TM_TrainToTrack)))
#endif /* kcg_copy_P001_TM_TrainToTrack */

#ifndef kcg_copy_P000_TM_TrainToTrack
#define kcg_copy_P000_TM_TrainToTrack(kcg_C1, kcg_C2)                         \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P000_TM_TrainToTrack)))
#endif /* kcg_copy_P000_TM_TrainToTrack */

#ifndef kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg
#define kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (P58_PositionReportParameters_T_Packet_Types_Pkg)))
#endif /* kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg */

#ifndef kcg_copy_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg
#define kcg_copy_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg)))
#endif /* kcg_copy_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg */

#ifndef kcg_copy_P003_OBU_T_TM
#define kcg_copy_P003_OBU_T_TM(kcg_C1, kcg_C2)                                \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P003_OBU_T_TM)))
#endif /* kcg_copy_P003_OBU_T_TM */

#ifndef kcg_copy_P015_OBU_T_TM
#define kcg_copy_P015_OBU_T_TM(kcg_C1, kcg_C2)                                \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P015_OBU_T_TM)))
#endif /* kcg_copy_P015_OBU_T_TM */

#ifndef kcg_copy_P012_OBU_T_TM
#define kcg_copy_P012_OBU_T_TM(kcg_C1, kcg_C2)                                \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P012_OBU_T_TM)))
#endif /* kcg_copy_P012_OBU_T_TM */

#ifndef kcg_copy_TelegramHeader_T_BG_Types_Pkg
#define kcg_copy_TelegramHeader_T_BG_Types_Pkg(kcg_C1, kcg_C2)                \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (TelegramHeader_T_BG_Types_Pkg)))
#endif /* kcg_copy_TelegramHeader_T_BG_Types_Pkg */

#ifndef kcg_copy_DMI_to_EVC_Message_T_API_DMI_Pkg
#define kcg_copy_DMI_to_EVC_Message_T_API_DMI_Pkg(kcg_C1, kcg_C2)             \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (DMI_to_EVC_Message_T_API_DMI_Pkg)))
#endif /* kcg_copy_DMI_to_EVC_Message_T_API_DMI_Pkg */

#ifndef kcg_copy_MA_section_real_T_TargetManagement_types
#define kcg_copy_MA_section_real_T_TargetManagement_types(kcg_C1, kcg_C2)     \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (MA_section_real_T_TargetManagement_types)))
#endif /* kcg_copy_MA_section_real_T_TargetManagement_types */

#ifndef kcg_copy_SDM_Commands_T_SDM_Types_Pkg
#define kcg_copy_SDM_Commands_T_SDM_Types_Pkg(kcg_C1, kcg_C2)                 \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (SDM_Commands_T_SDM_Types_Pkg)))
#endif /* kcg_copy_SDM_Commands_T_SDM_Types_Pkg */

#ifndef kcg_copy_SDM_Locations_T_SDM_Types_Pkg
#define kcg_copy_SDM_Locations_T_SDM_Types_Pkg(kcg_C1, kcg_C2)                \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (SDM_Locations_T_SDM_Types_Pkg)))
#endif /* kcg_copy_SDM_Locations_T_SDM_Types_Pkg */

#ifndef kcg_copy_Speeds_T_SDM_Types_Pkg
#define kcg_copy_Speeds_T_SDM_Types_Pkg(kcg_C1, kcg_C2)                       \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Speeds_T_SDM_Types_Pkg)))
#endif /* kcg_copy_Speeds_T_SDM_Types_Pkg */

#ifndef kcg_copy_TSM_triggerCond_T_SDM_Commands_Pkg
#define kcg_copy_TSM_triggerCond_T_SDM_Commands_Pkg(kcg_C1, kcg_C2)           \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (TSM_triggerCond_T_SDM_Commands_Pkg)))
#endif /* kcg_copy_TSM_triggerCond_T_SDM_Commands_Pkg */

#ifndef kcg_copy_MovementAuthority_t_TrackAtlasTypes
#define kcg_copy_MovementAuthority_t_TrackAtlasTypes(kcg_C1, kcg_C2)          \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (MovementAuthority_t_TrackAtlasTypes)))
#endif /* kcg_copy_MovementAuthority_t_TrackAtlasTypes */

#ifndef kcg_copy_obuEventsAndPhases_T_RCM_Session_Types_Pkg
#define kcg_copy_obuEventsAndPhases_T_RCM_Session_Types_Pkg(kcg_C1, kcg_C2)   \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (obuEventsAndPhases_T_RCM_Session_Types_Pkg)))
#endif /* kcg_copy_obuEventsAndPhases_T_RCM_Session_Types_Pkg */

#ifndef kcg_copy_EVC_to_DMI_Message_T_API_DMI_Pkg
#define kcg_copy_EVC_to_DMI_Message_T_API_DMI_Pkg(kcg_C1, kcg_C2)             \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (EVC_to_DMI_Message_T_API_DMI_Pkg)))
#endif /* kcg_copy_EVC_to_DMI_Message_T_API_DMI_Pkg */

#ifndef kcg_copy_DMI_Available_Menu_T_DMI_Types_Pkg
#define kcg_copy_DMI_Available_Menu_T_DMI_Types_Pkg(kcg_C1, kcg_C2)           \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (DMI_Available_Menu_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_Available_Menu_T_DMI_Types_Pkg */

#ifndef kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg
#define kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg(kcg_C1, kcg_C2)    \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg)))
#endif /* kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifndef kcg_copy_morc_configData_T_RCM_Session_Types_Pkg
#define kcg_copy_morc_configData_T_RCM_Session_Types_Pkg(kcg_C1, kcg_C2)      \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (morc_configData_T_RCM_Session_Types_Pkg)))
#endif /* kcg_copy_morc_configData_T_RCM_Session_Types_Pkg */

#ifndef kcg_copy_P203V1_OBU_T_TM_baseline2
#define kcg_copy_P203V1_OBU_T_TM_baseline2(kcg_C1, kcg_C2)                    \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P203V1_OBU_T_TM_baseline2)))
#endif /* kcg_copy_P203V1_OBU_T_TM_baseline2 */

#ifndef kcg_copy_P3_NationalValues_T_Packet_Types_Pkg
#define kcg_copy_P3_NationalValues_T_Packet_Types_Pkg(kcg_C1, kcg_C2)         \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (P3_NationalValues_T_Packet_Types_Pkg)))
#endif /* kcg_copy_P3_NationalValues_T_Packet_Types_Pkg */

#ifndef kcg_copy_T_Data_From_DMI_Level_And_Mode_Types_Pkg
#define kcg_copy_T_Data_From_DMI_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2)     \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (T_Data_From_DMI_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_Data_From_DMI_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg
#define kcg_copy_T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_trainData_T_TIU_Types_Pkg
#define kcg_copy_trainData_T_TIU_Types_Pkg(kcg_C1, kcg_C2)                    \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (trainData_T_TIU_Types_Pkg)))
#endif /* kcg_copy_trainData_T_TIU_Types_Pkg */

#ifndef kcg_copy_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg
#define kcg_copy_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_P15_Level23MovementAuthority_T_Packet_Types_Pkg
#define kcg_copy_P15_Level23MovementAuthority_T_Packet_Types_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (P15_Level23MovementAuthority_T_Packet_Types_Pkg)))
#endif /* kcg_copy_P15_Level23MovementAuthority_T_Packet_Types_Pkg */

#ifndef kcg_copy_P12_Level1MovementAuthority_T_Packet_Types_Pkg
#define kcg_copy_P12_Level1MovementAuthority_T_Packet_Types_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (P12_Level1MovementAuthority_T_Packet_Types_Pkg)))
#endif /* kcg_copy_P12_Level1MovementAuthority_T_Packet_Types_Pkg */

#ifndef kcg_copy_Position_Report_based_on_two_balise_groups_TrainToTrack
#define kcg_copy_Position_Report_based_on_two_balise_groups_TrainToTrack(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (Position_Report_based_on_two_balise_groups_TrainToTrack)))
#endif /* kcg_copy_Position_Report_based_on_two_balise_groups_TrainToTrack */

#ifndef kcg_copy_Position_Report_TrainToTrack
#define kcg_copy_Position_Report_TrainToTrack(kcg_C1, kcg_C2)                 \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Position_Report_TrainToTrack)))
#endif /* kcg_copy_Position_Report_TrainToTrack */

#ifndef kcg_copy_speedSupervisionForDMI_T_DMI_Types_Pkg
#define kcg_copy_speedSupervisionForDMI_T_DMI_Types_Pkg(kcg_C1, kcg_C2)       \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (speedSupervisionForDMI_T_DMI_Types_Pkg)))
#endif /* kcg_copy_speedSupervisionForDMI_T_DMI_Types_Pkg */

#ifndef kcg_copy_trainPosition_T_TrainPosition_Types_Pck
#define kcg_copy_trainPosition_T_TrainPosition_Types_Pck(kcg_C1, kcg_C2)      \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (trainPosition_T_TrainPosition_Types_Pck)))
#endif /* kcg_copy_trainPosition_T_TrainPosition_Types_Pck */

#ifndef kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg
#define kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(kcg_C1, kcg_C2)    \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (Radio_TrackTrain_Header_T_Radio_Types_Pkg)))
#endif /* kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg */

#ifndef kcg_copy_LinkedBG_T_BG_Types_Pkg
#define kcg_copy_LinkedBG_T_BG_Types_Pkg(kcg_C1, kcg_C2)                      \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (LinkedBG_T_BG_Types_Pkg)))
#endif /* kcg_copy_LinkedBG_T_BG_Types_Pkg */

#ifndef kcg_copy_BG_Header_T_BG_Types_Pkg
#define kcg_copy_BG_Header_T_BG_Types_Pkg(kcg_C1, kcg_C2)                     \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (BG_Header_T_BG_Types_Pkg)))
#endif /* kcg_copy_BG_Header_T_BG_Types_Pkg */

#ifndef kcg_copy_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg
#define kcg_copy_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (T_Data_To_BG_Management_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_M_132_T_TM_radio_messages
#define kcg_copy_M_132_T_TM_radio_messages(kcg_C1, kcg_C2)                    \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (M_132_T_TM_radio_messages)))
#endif /* kcg_copy_M_132_T_TM_radio_messages */

#ifndef kcg_copy_StaticSpeedSection_t_TrackAtlasTypes
#define kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(kcg_C1, kcg_C2)         \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (StaticSpeedSection_t_TrackAtlasTypes)))
#endif /* kcg_copy_StaticSpeedSection_t_TrackAtlasTypes */

#ifndef kcg_copy_sNID_RADIO_T_Packet_TrainTypes_Pkg
#define kcg_copy_sNID_RADIO_T_Packet_TrainTypes_Pkg(kcg_C1, kcg_C2)           \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (sNID_RADIO_T_Packet_TrainTypes_Pkg)))
#endif /* kcg_copy_sNID_RADIO_T_Packet_TrainTypes_Pkg */

#ifndef kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg
#define kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(kcg_C1, kcg_C2)     \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (p42_sessionManagement_T_RCM_MsgTypes_Pkg)))
#endif /* kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg */

#ifndef kcg_copy_msgToTrackTriggers_T_RCM_MsgTypes_Pkg
#define kcg_copy_msgToTrackTriggers_T_RCM_MsgTypes_Pkg(kcg_C1, kcg_C2)        \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (msgToTrackTriggers_T_RCM_MsgTypes_Pkg)))
#endif /* kcg_copy_msgToTrackTriggers_T_RCM_MsgTypes_Pkg */

#ifndef kcg_copy_P042_trackside_int_T_TM
#define kcg_copy_P042_trackside_int_T_TM(kcg_C1, kcg_C2)                      \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P042_trackside_int_T_TM)))
#endif /* kcg_copy_P042_trackside_int_T_TM */

#ifndef kcg_copy_struct_277960
#define kcg_copy_struct_277960(kcg_C1, kcg_C2)                                \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_277960)))
#endif /* kcg_copy_struct_277960 */

#ifndef kcg_copy_trainDataStatus_T_trainData_Types_pkg
#define kcg_copy_trainDataStatus_T_trainData_Types_pkg(kcg_C1, kcg_C2)        \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (trainDataStatus_T_trainData_Types_pkg)))
#endif /* kcg_copy_trainDataStatus_T_trainData_Types_pkg */

#ifndef kcg_copy_P065_OBU_T_TM
#define kcg_copy_P065_OBU_T_TM(kcg_C1, kcg_C2)                                \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P065_OBU_T_TM)))
#endif /* kcg_copy_P065_OBU_T_TM */

#ifndef kcg_copy_P005_section_enum_T_TM
#define kcg_copy_P005_section_enum_T_TM(kcg_C1, kcg_C2)                       \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P005_section_enum_T_TM)))
#endif /* kcg_copy_P005_section_enum_T_TM */

#ifndef kcg_copy_dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg
#define kcg_copy_dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg)))
#endif /* kcg_copy_dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg */

#ifndef kcg_copy_M_TrainTrack_MessageHd_T_TM_radio_messages
#define kcg_copy_M_TrainTrack_MessageHd_T_TM_radio_messages(kcg_C1, kcg_C2)   \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (M_TrainTrack_MessageHd_T_TM_radio_messages)))
#endif /* kcg_copy_M_TrainTrack_MessageHd_T_TM_radio_messages */

#ifndef kcg_copy_P058_OBU_T_TM
#define kcg_copy_P058_OBU_T_TM(kcg_C1, kcg_C2)                                \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P058_OBU_T_TM)))
#endif /* kcg_copy_P058_OBU_T_TM */

#ifndef kcg_copy_struct_278116
#define kcg_copy_struct_278116(kcg_C1, kcg_C2)                                \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_278116)))
#endif /* kcg_copy_struct_278116 */

#ifndef kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg
#define kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(kcg_C1, kcg_C2)      \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (BGCollector_T_Receive_TrackSide_Msg_Pkg)))
#endif /* kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg */

#ifndef kcg_copy_TargetIteratorAkku_TargetLimits_Pkg
#define kcg_copy_TargetIteratorAkku_TargetLimits_Pkg(kcg_C1, kcg_C2)          \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (TargetIteratorAkku_TargetLimits_Pkg)))
#endif /* kcg_copy_TargetIteratorAkku_TargetLimits_Pkg */

#ifndef kcg_copy_filterRelatedEvents_T_Common_Types_Pkg
#define kcg_copy_filterRelatedEvents_T_Common_Types_Pkg(kcg_C1, kcg_C2)       \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (filterRelatedEvents_T_Common_Types_Pkg)))
#endif /* kcg_copy_filterRelatedEvents_T_Common_Types_Pkg */

#ifndef kcg_copy_RadioMetadata_T_Common_Types_Pkg
#define kcg_copy_RadioMetadata_T_Common_Types_Pkg(kcg_C1, kcg_C2)             \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (RadioMetadata_T_Common_Types_Pkg)))
#endif /* kcg_copy_RadioMetadata_T_Common_Types_Pkg */

#ifndef kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg
#define kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(kcg_C1, kcg_C2)           \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (DMI_TXT_MSG_status_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg */

#ifndef kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg
#define kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(kcg_C1, kcg_C2)      \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg)))
#endif /* kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifndef kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg
#define kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg)))
#endif /* kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifndef kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg
#define kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg)))
#endif /* kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifndef kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg
#define kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(kcg_C1, kcg_C2)               \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_EVC_status_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg */

#ifndef kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg
#define kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(kcg_C1, kcg_C2)   \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (DMI_Train_Data_T_DMI_Messages_Bothways_Pkg)))
#endif /* kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg */

#ifndef kcg_copy_struct_278367
#define kcg_copy_struct_278367(kcg_C1, kcg_C2)                                \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_278367)))
#endif /* kcg_copy_struct_278367 */

#ifndef kcg_copy_T_Data_To_DMI_Level_And_Mode_Types_Pkg
#define kcg_copy_T_Data_To_DMI_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2)       \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (T_Data_To_DMI_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_Data_To_DMI_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_Mode_control_and_train_status_T_TIU_Types_Pkg
#define kcg_copy_Mode_control_and_train_status_T_TIU_Types_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (Mode_control_and_train_status_T_TIU_Types_Pkg)))
#endif /* kcg_copy_Mode_control_and_train_status_T_TIU_Types_Pkg */

#ifndef kcg_copy_P80_ModeProfile_T_Packet_Types_Pkg
#define kcg_copy_P80_ModeProfile_T_Packet_Types_Pkg(kcg_C1, kcg_C2)           \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (P80_ModeProfile_T_Packet_Types_Pkg)))
#endif /* kcg_copy_P80_ModeProfile_T_Packet_Types_Pkg */

#ifndef kcg_copy_P41_LevelTransitionOrder_T_Packet_Types_Pkg
#define kcg_copy_P41_LevelTransitionOrder_T_Packet_Types_Pkg(kcg_C1, kcg_C2)  \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (P41_LevelTransitionOrder_T_Packet_Types_Pkg)))
#endif /* kcg_copy_P41_LevelTransitionOrder_T_Packet_Types_Pkg */

#ifndef kcg_copy_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg
#define kcg_copy_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg)))
#endif /* kcg_copy_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg */

#ifndef kcg_copy_MSG_Errors_T_Common_Types_Pkg
#define kcg_copy_MSG_Errors_T_Common_Types_Pkg(kcg_C1, kcg_C2)                \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MSG_Errors_T_Common_Types_Pkg)))
#endif /* kcg_copy_MSG_Errors_T_Common_Types_Pkg */

#ifndef kcg_copy_positionErrors_T_TrainPosition_Types_Pck
#define kcg_copy_positionErrors_T_TrainPosition_Types_Pck(kcg_C1, kcg_C2)     \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (positionErrors_T_TrainPosition_Types_Pck)))
#endif /* kcg_copy_positionErrors_T_TrainPosition_Types_Pck */

#ifndef kcg_copy_positionedBG_T_TrainPosition_Types_Pck
#define kcg_copy_positionedBG_T_TrainPosition_Types_Pck(kcg_C1, kcg_C2)       \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (positionedBG_T_TrainPosition_Types_Pck)))
#endif /* kcg_copy_positionedBG_T_TrainPosition_Types_Pck */

#ifndef kcg_copy_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg
#define kcg_copy_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg)))
#endif /* kcg_copy_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifndef kcg_copy_T_trac_t_TargetLimits_Pkg
#define kcg_copy_T_trac_t_TargetLimits_Pkg(kcg_C1, kcg_C2)                    \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_trac_t_TargetLimits_Pkg)))
#endif /* kcg_copy_T_trac_t_TargetLimits_Pkg */

#ifndef kcg_copy_M_147_T_TM_radio_messages
#define kcg_copy_M_147_T_TM_radio_messages(kcg_C1, kcg_C2)                    \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (M_147_T_TM_radio_messages)))
#endif /* kcg_copy_M_147_T_TM_radio_messages */

#ifndef kcg_copy_P080_section_enum_T_TM
#define kcg_copy_P080_section_enum_T_TM(kcg_C1, kcg_C2)                       \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P080_section_enum_T_TM)))
#endif /* kcg_copy_P080_section_enum_T_TM */

#ifndef kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg
#define kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(kcg_C1, kcg_C2) \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg)))
#endif /* kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg */

#ifndef kcg_copy_P42_SessionManagement_T_Packet_Types_Pkg
#define kcg_copy_P42_SessionManagement_T_Packet_Types_Pkg(kcg_C1, kcg_C2)     \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (P42_SessionManagement_T_Packet_Types_Pkg)))
#endif /* kcg_copy_P42_SessionManagement_T_Packet_Types_Pkg */

#ifndef kcg_copy_odometry_T_Obu_BasicTypes_Pkg
#define kcg_copy_odometry_T_Obu_BasicTypes_Pkg(kcg_C1, kcg_C2)                \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (odometry_T_Obu_BasicTypes_Pkg)))
#endif /* kcg_copy_odometry_T_Obu_BasicTypes_Pkg */

#ifndef kcg_copy_P004_TM_TrainToTrack
#define kcg_copy_P004_TM_TrainToTrack(kcg_C1, kcg_C2)                         \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P004_TM_TrainToTrack)))
#endif /* kcg_copy_P004_TM_TrainToTrack */

#ifndef kcg_copy_p131_q_rbcTransitionOrder_T_Handover_Pkg
#define kcg_copy_p131_q_rbcTransitionOrder_T_Handover_Pkg(kcg_C1, kcg_C2)     \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (p131_q_rbcTransitionOrder_T_Handover_Pkg)))
#endif /* kcg_copy_p131_q_rbcTransitionOrder_T_Handover_Pkg */

#ifndef kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store
#define kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store)))
#endif /* kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store */

#ifndef kcg_copy_outPackets_T_Common_Types_Pkg
#define kcg_copy_outPackets_T_Common_Types_Pkg(kcg_C1, kcg_C2)                \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (outPackets_T_Common_Types_Pkg)))
#endif /* kcg_copy_outPackets_T_Common_Types_Pkg */

#ifndef kcg_copy_struct_278835
#define kcg_copy_struct_278835(kcg_C1, kcg_C2)                                \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_278835)))
#endif /* kcg_copy_struct_278835 */

#ifndef kcg_copy_Message_EVC_to_Train_Interface_T_TIU_Types_Pkg
#define kcg_copy_Message_EVC_to_Train_Interface_T_TIU_Types_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (Message_EVC_to_Train_Interface_T_TIU_Types_Pkg)))
#endif /* kcg_copy_Message_EVC_to_Train_Interface_T_TIU_Types_Pkg */

#ifndef kcg_copy_trainProperties_T_TrainPosition_Types_Pck
#define kcg_copy_trainProperties_T_TrainPosition_Types_Pck(kcg_C1, kcg_C2)    \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (trainProperties_T_TrainPosition_Types_Pck)))
#endif /* kcg_copy_trainProperties_T_TrainPosition_Types_Pck */

#ifndef kcg_copy_nothing_to_resume_profile_follow_T_TIU_Types_Pkg
#define kcg_copy_nothing_to_resume_profile_follow_T_TIU_Types_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (nothing_to_resume_profile_follow_T_TIU_Types_Pkg)))
#endif /* kcg_copy_nothing_to_resume_profile_follow_T_TIU_Types_Pkg */

#ifndef kcg_copy_Isolation_Status_T_TIU_Types_Pkg
#define kcg_copy_Isolation_Status_T_TIU_Types_Pkg(kcg_C1, kcg_C2)             \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (Isolation_Status_T_TIU_Types_Pkg)))
#endif /* kcg_copy_Isolation_Status_T_TIU_Types_Pkg */

#ifndef kcg_copy_T_Data_From_Localisation_Level_And_Mode_Types_Pkg
#define kcg_copy_T_Data_From_Localisation_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (T_Data_From_Localisation_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_Data_From_Localisation_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_Target_real_T_TargetManagement_types
#define kcg_copy_Target_real_T_TargetManagement_types(kcg_C1, kcg_C2)         \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (Target_real_T_TargetManagement_types)))
#endif /* kcg_copy_Target_real_T_TargetManagement_types */

#ifndef kcg_copy_struct_278986
#define kcg_copy_struct_278986(kcg_C1, kcg_C2)                                \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_278986)))
#endif /* kcg_copy_struct_278986 */

#ifndef kcg_copy_struct_279025
#define kcg_copy_struct_279025(kcg_C1, kcg_C2)                                \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_279025)))
#endif /* kcg_copy_struct_279025 */

#ifndef kcg_copy_T_Reversing_Data_Level_And_Mode_Types_Pkg
#define kcg_copy_T_Reversing_Data_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2)    \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (T_Reversing_Data_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_Reversing_Data_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg
#define kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(kcg_C1, kcg_C2)   \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (PT4_ErrorReporting_T_Packet_TrainTypes_Pkg)))
#endif /* kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg */

#ifndef kcg_copy_trainData_Events_T_trainData_Types_pkg
#define kcg_copy_trainData_Events_T_trainData_Types_pkg(kcg_C1, kcg_C2)       \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (trainData_Events_T_trainData_Types_pkg)))
#endif /* kcg_copy_trainData_Events_T_trainData_Types_pkg */

#ifndef kcg_copy_struct_279212
#define kcg_copy_struct_279212(kcg_C1, kcg_C2)                                \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_279212)))
#endif /* kcg_copy_struct_279212 */

#ifndef kcg_copy_P046_section_enum_T_TM
#define kcg_copy_P046_section_enum_T_TM(kcg_C1, kcg_C2)                       \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P046_section_enum_T_TM)))
#endif /* kcg_copy_P046_section_enum_T_TM */

#ifndef kcg_copy_CompressedPackets_T_Common_Types_Pkg
#define kcg_copy_CompressedPackets_T_Common_Types_Pkg(kcg_C1, kcg_C2)         \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (CompressedPackets_T_Common_Types_Pkg)))
#endif /* kcg_copy_CompressedPackets_T_Common_Types_Pkg */

#ifndef kcg_copy_EOA_real_T_TargetManagement_types
#define kcg_copy_EOA_real_T_TargetManagement_types(kcg_C1, kcg_C2)            \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (EOA_real_T_TargetManagement_types)))
#endif /* kcg_copy_EOA_real_T_TargetManagement_types */

#ifndef kcg_copy_Brake_command_T_TIU_Types_Pkg
#define kcg_copy_Brake_command_T_TIU_Types_Pkg(kcg_C1, kcg_C2)                \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Brake_command_T_TIU_Types_Pkg)))
#endif /* kcg_copy_Brake_command_T_TIU_Types_Pkg */

#ifndef kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg
#define kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg)))
#endif /* kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg */

#ifndef kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg
#define kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg)))
#endif /* kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg */

#ifndef kcg_copy_bec_t_TargetLimits_Pkg
#define kcg_copy_bec_t_TargetLimits_Pkg(kcg_C1, kcg_C2)                       \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (bec_t_TargetLimits_Pkg)))
#endif /* kcg_copy_bec_t_TargetLimits_Pkg */

#ifndef kcg_copy_MetadataElement_T_Common_Types_Pkg
#define kcg_copy_MetadataElement_T_Common_Types_Pkg(kcg_C1, kcg_C2)           \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (MetadataElement_T_Common_Types_Pkg)))
#endif /* kcg_copy_MetadataElement_T_Common_Types_Pkg */

#ifndef kcg_copy_T_Mode_Profile_Level_And_Mode_Types_Pkg
#define kcg_copy_T_Mode_Profile_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2)      \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (T_Mode_Profile_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_Mode_Profile_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy__5_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg
#define kcg_copy__5_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (_5_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg)))
#endif /* kcg_copy__5_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg */

#ifndef kcg_copy_ASafe_T_CalcBrakingCurves_types
#define kcg_copy_ASafe_T_CalcBrakingCurves_types(kcg_C1, kcg_C2)              \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (ASafe_T_CalcBrakingCurves_types)))
#endif /* kcg_copy_ASafe_T_CalcBrakingCurves_types */

#ifndef kcg_copy_DataForDMI_t_TrackAtlasTypes
#define kcg_copy_DataForDMI_t_TrackAtlasTypes(kcg_C1, kcg_C2)                 \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DataForDMI_t_TrackAtlasTypes)))
#endif /* kcg_copy_DataForDMI_t_TrackAtlasTypes */

#ifndef kcg_copy_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg
#define kcg_copy_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (T_AcknoledgementRequest_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_A_gradient_element_t_SDM_GradientAcceleration_types
#define kcg_copy_A_gradient_element_t_SDM_GradientAcceleration_types(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (A_gradient_element_t_SDM_GradientAcceleration_types)))
#endif /* kcg_copy_A_gradient_element_t_SDM_GradientAcceleration_types */

#ifndef kcg_copy_Gradient_section_real_t_SDM_GradientAcceleration_types
#define kcg_copy_Gradient_section_real_t_SDM_GradientAcceleration_types(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (Gradient_section_real_t_SDM_GradientAcceleration_types)))
#endif /* kcg_copy_Gradient_section_real_t_SDM_GradientAcceleration_types */

#ifndef kcg_copy_MRSP_internal_section_T_TargetManagement_types
#define kcg_copy_MRSP_internal_section_T_TargetManagement_types(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (MRSP_internal_section_T_TargetManagement_types)))
#endif /* kcg_copy_MRSP_internal_section_T_TargetManagement_types */

#ifndef kcg_copy_P044_TM_TrainToTrack
#define kcg_copy_P044_TM_TrainToTrack(kcg_C1, kcg_C2)                         \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P044_TM_TrainToTrack)))
#endif /* kcg_copy_P044_TM_TrainToTrack */

#ifndef kcg_copy_P021_OBU_T_TM
#define kcg_copy_P021_OBU_T_TM(kcg_C1, kcg_C2)                                \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P021_OBU_T_TM)))
#endif /* kcg_copy_P021_OBU_T_TM */

#ifndef kcg_copy_ACC_SDM_GradientAcceleration_Pkg
#define kcg_copy_ACC_SDM_GradientAcceleration_Pkg(kcg_C1, kcg_C2)             \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (ACC_SDM_GradientAcceleration_Pkg)))
#endif /* kcg_copy_ACC_SDM_GradientAcceleration_Pkg */

#ifndef kcg_copy_P003_TM_TrainToTrack
#define kcg_copy_P003_TM_TrainToTrack(kcg_C1, kcg_C2)                         \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P003_TM_TrainToTrack)))
#endif /* kcg_copy_P003_TM_TrainToTrack */

#ifndef kcg_copy_nvkvintset_T_Packet_Types_Pkg
#define kcg_copy_nvkvintset_T_Packet_Types_Pkg(kcg_C1, kcg_C2)                \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (nvkvintset_T_Packet_Types_Pkg)))
#endif /* kcg_copy_nvkvintset_T_Packet_Types_Pkg */

#ifndef kcg_copy_SSP_T_Packet_Types_Pkg
#define kcg_copy_SSP_T_Packet_Types_Pkg(kcg_C1, kcg_C2)                       \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (SSP_T_Packet_Types_Pkg)))
#endif /* kcg_copy_SSP_T_Packet_Types_Pkg */

#ifndef kcg_copy_struct_279611
#define kcg_copy_struct_279611(kcg_C1, kcg_C2)                                \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_279611)))
#endif /* kcg_copy_struct_279611 */

#ifndef kcg_copy_API_TrackSideInput_T_API_Msg_Pkg
#define kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(kcg_C1, kcg_C2)             \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (API_TrackSideInput_T_API_Msg_Pkg)))
#endif /* kcg_copy_API_TrackSideInput_T_API_Msg_Pkg */

#ifndef kcg_copy_RadioMessage_T_Radio_Types_Pkg
#define kcg_copy_RadioMessage_T_Radio_Types_Pkg(kcg_C1, kcg_C2)               \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (RadioMessage_T_Radio_Types_Pkg)))
#endif /* kcg_copy_RadioMessage_T_Radio_Types_Pkg */

#ifndef kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg
#define kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (Message_Train_Interface_to_EVC_T_TIU_Types_Pkg)))
#endif /* kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg */

#ifndef kcg_copy_radioManagementMessage_T_Common_Types_Pkg
#define kcg_copy_radioManagementMessage_T_Common_Types_Pkg(kcg_C1, kcg_C2)    \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (radioManagementMessage_T_Common_Types_Pkg)))
#endif /* kcg_copy_radioManagementMessage_T_Common_Types_Pkg */

#ifndef kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck
#define kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck(kcg_C1, kcg_C2)    \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (infoFromLinking_T_TrainPosition_Types_Pck)))
#endif /* kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck */

#ifndef kcg_copy_dmiOutputs_T_manage_DMI_Output_Pkg
#define kcg_copy_dmiOutputs_T_manage_DMI_Output_Pkg(kcg_C1, kcg_C2)           \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (dmiOutputs_T_manage_DMI_Output_Pkg)))
#endif /* kcg_copy_dmiOutputs_T_manage_DMI_Output_Pkg */

#ifndef kcg_copy_extractTargetsMRSPACC_TargetManagement_pkg
#define kcg_copy_extractTargetsMRSPACC_TargetManagement_pkg(kcg_C1, kcg_C2)   \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (extractTargetsMRSPACC_TargetManagement_pkg)))
#endif /* kcg_copy_extractTargetsMRSPACC_TargetManagement_pkg */

#ifndef kcg_copy_M_current_T_TIU_Types_Pkg
#define kcg_copy_M_current_T_TIU_Types_Pkg(kcg_C1, kcg_C2)                    \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (M_current_T_TIU_Types_Pkg)))
#endif /* kcg_copy_M_current_T_TIU_Types_Pkg */

#ifndef kcg_copy_passedBG_T_BG_Types_Pkg
#define kcg_copy_passedBG_T_BG_Types_Pkg(kcg_C1, kcg_C2)                      \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (passedBG_T_BG_Types_Pkg)))
#endif /* kcg_copy_passedBG_T_BG_Types_Pkg */

#ifndef kcg_copy_array
#define kcg_copy_array(kcg_C1, kcg_C2)                                        \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array)))
#endif /* kcg_copy_array */

#ifndef kcg_copy_array_bool_8
#define kcg_copy_array_bool_8(kcg_C1, kcg_C2)                                 \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_8)))
#endif /* kcg_copy_array_bool_8 */

#ifndef kcg_copy_P044_other_data_TM_TrainToTrack
#define kcg_copy_P044_other_data_TM_TrainToTrack(kcg_C1, kcg_C2)              \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P044_other_data_TM_TrainToTrack)))
#endif /* kcg_copy_P044_other_data_TM_TrainToTrack */

#ifndef kcg_copy_GradientProfile_real_compensated_t_SDM_GradientAcceleration_types
#define kcg_copy_GradientProfile_real_compensated_t_SDM_GradientAcceleration_types(kcg_C1, kcg_C2)\
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (GradientProfile_real_compensated_t_SDM_GradientAcceleration_types)))
#endif /* kcg_copy_GradientProfile_real_compensated_t_SDM_GradientAcceleration_types */

#ifndef kcg_copy_A_gradient_t_SDM_GradientAcceleration_types
#define kcg_copy_A_gradient_t_SDM_GradientAcceleration_types(kcg_C1, kcg_C2)  \
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (A_gradient_t_SDM_GradientAcceleration_types)))
#endif /* kcg_copy_A_gradient_t_SDM_GradientAcceleration_types */

#ifndef kcg_copy__112_array
#define kcg_copy__112_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_112_array)))
#endif /* kcg_copy__112_array */

#ifndef kcg_copy__113_array
#define kcg_copy__113_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_113_array)))
#endif /* kcg_copy__113_array */

#ifndef kcg_copy__114_array
#define kcg_copy__114_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_114_array)))
#endif /* kcg_copy__114_array */

#ifndef kcg_copy__115_array
#define kcg_copy__115_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_115_array)))
#endif /* kcg_copy__115_array */

#ifndef kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal
#define kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(kcg_C1, kcg_C2)\
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (M_TrainTrackRadioOutputBuffer_t_TM_lib_internal)))
#endif /* kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal */

#ifndef kcg_copy_array_int32_4
#define kcg_copy_array_int32_4(kcg_C1, kcg_C2)                                \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_4)))
#endif /* kcg_copy_array_int32_4 */

#ifndef kcg_copy__116_array
#define kcg_copy__116_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_116_array)))
#endif /* kcg_copy__116_array */

#ifndef kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes
#define kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(kcg_C1, kcg_C2)\
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (MovementAuthoritySectionlist_t_TrackAtlasTypes)))
#endif /* kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes */

#ifndef kcg_copy_array_int32_10
#define kcg_copy_array_int32_10(kcg_C1, kcg_C2)                               \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_10)))
#endif /* kcg_copy_array_int32_10 */

#ifndef kcg_copy_P015_OBU_sectionlist_enum_T_TM
#define kcg_copy_P015_OBU_sectionlist_enum_T_TM(kcg_C1, kcg_C2)               \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P015_OBU_sectionlist_enum_T_TM)))
#endif /* kcg_copy_P015_OBU_sectionlist_enum_T_TM */

#ifndef kcg_copy__117_array
#define kcg_copy__117_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_117_array)))
#endif /* kcg_copy__117_array */

#ifndef kcg_copy__118_array
#define kcg_copy__118_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_118_array)))
#endif /* kcg_copy__118_array */

#ifndef kcg_copy_DMI_Text_Message_int_array_T_DATA
#define kcg_copy_DMI_Text_Message_int_array_T_DATA(kcg_C1, kcg_C2)            \
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (DMI_Text_Message_int_array_T_DATA)))
#endif /* kcg_copy_DMI_Text_Message_int_array_T_DATA */

#ifndef kcg_copy__119_array
#define kcg_copy__119_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_119_array)))
#endif /* kcg_copy__119_array */

#ifndef kcg_copy_array_int32_7
#define kcg_copy_array_int32_7(kcg_C1, kcg_C2)                                \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_7)))
#endif /* kcg_copy_array_int32_7 */

#ifndef kcg_copy_array_bool_30
#define kcg_copy_array_bool_30(kcg_C1, kcg_C2)                                \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_30)))
#endif /* kcg_copy_array_bool_30 */

#ifndef kcg_copy_array_int32_99
#define kcg_copy_array_int32_99(kcg_C1, kcg_C2)                               \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_99)))
#endif /* kcg_copy_array_int32_99 */

#ifndef kcg_copy_array_bool_7
#define kcg_copy_array_bool_7(kcg_C1, kcg_C2)                                 \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_7)))
#endif /* kcg_copy_array_bool_7 */

#ifndef kcg_copy_array_float32_100_13
#define kcg_copy_array_float32_100_13(kcg_C1, kcg_C2)                         \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_float32_100_13)))
#endif /* kcg_copy_array_float32_100_13 */

#ifndef kcg_copy_array_int32_13
#define kcg_copy_array_int32_13(kcg_C1, kcg_C2)                               \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_13)))
#endif /* kcg_copy_array_int32_13 */

#ifndef kcg_copy_P011_voltage_sectionlist_array_T_TM_TrainToTrack
#define kcg_copy_P011_voltage_sectionlist_array_T_TM_TrainToTrack(kcg_C1, kcg_C2)\
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (P011_voltage_sectionlist_array_T_TM_TrainToTrack)))
#endif /* kcg_copy_P011_voltage_sectionlist_array_T_TM_TrainToTrack */

#ifndef kcg_copy__120_array
#define kcg_copy__120_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_120_array)))
#endif /* kcg_copy__120_array */

#ifndef kcg_copy_array_bool_110
#define kcg_copy_array_bool_110(kcg_C1, kcg_C2)                               \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_110)))
#endif /* kcg_copy_array_bool_110 */

#ifndef kcg_copy__121_array
#define kcg_copy__121_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_121_array)))
#endif /* kcg_copy__121_array */

#ifndef kcg_copy_array_bool_41
#define kcg_copy_array_bool_41(kcg_C1, kcg_C2)                                \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_41)))
#endif /* kcg_copy_array_bool_41 */

#ifndef kcg_copy_array_float32_3
#define kcg_copy_array_float32_3(kcg_C1, kcg_C2)                              \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_float32_3)))
#endif /* kcg_copy_array_float32_3 */

#ifndef kcg_copy_DMI_TEXT_DMI_Types_Pkg
#define kcg_copy_DMI_TEXT_DMI_Types_Pkg(kcg_C1, kcg_C2)                       \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (DMI_TEXT_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_TEXT_DMI_Types_Pkg */

#ifndef kcg_copy__122_array
#define kcg_copy__122_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_122_array)))
#endif /* kcg_copy__122_array */

#ifndef kcg_copy_array_int32_25
#define kcg_copy_array_int32_25(kcg_C1, kcg_C2)                               \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_25)))
#endif /* kcg_copy_array_int32_25 */

#ifndef kcg_copy__123_array
#define kcg_copy__123_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_123_array)))
#endif /* kcg_copy__123_array */

#ifndef kcg_copy__124_array
#define kcg_copy__124_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_124_array)))
#endif /* kcg_copy__124_array */

#ifndef kcg_copy__125_array
#define kcg_copy__125_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_125_array)))
#endif /* kcg_copy__125_array */

#ifndef kcg_copy_array_int32_31
#define kcg_copy_array_int32_31(kcg_C1, kcg_C2)                               \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_31)))
#endif /* kcg_copy_array_int32_31 */

#ifndef kcg_copy_array_float32_6
#define kcg_copy_array_float32_6(kcg_C1, kcg_C2)                              \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_float32_6)))
#endif /* kcg_copy_array_float32_6 */

#ifndef kcg_copy_array_int32_114
#define kcg_copy_array_int32_114(kcg_C1, kcg_C2)                              \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_114)))
#endif /* kcg_copy_array_int32_114 */

#ifndef kcg_copy_array_int32_28
#define kcg_copy_array_int32_28(kcg_C1, kcg_C2)                               \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_28)))
#endif /* kcg_copy_array_int32_28 */

#ifndef kcg_copy__126_array
#define kcg_copy__126_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_126_array)))
#endif /* kcg_copy__126_array */

#ifndef kcg_copy__127_array
#define kcg_copy__127_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_127_array)))
#endif /* kcg_copy__127_array */

#ifndef kcg_copy__128_array
#define kcg_copy__128_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_128_array)))
#endif /* kcg_copy__128_array */

#ifndef kcg_copy_TransitionBuffer_T_InformationFilter_Pkg
#define kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(kcg_C1, kcg_C2)     \
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (TransitionBuffer_T_InformationFilter_Pkg)))
#endif /* kcg_copy_TransitionBuffer_T_InformationFilter_Pkg */

#ifndef kcg_copy_T_Mode_Profile_Table_Level_And_Mode_Types_Pkg
#define kcg_copy_T_Mode_Profile_Table_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (T_Mode_Profile_Table_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_Mode_Profile_Table_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_P80_ModeProfiles_T_Packet_Types_Pkg
#define kcg_copy_P80_ModeProfiles_T_Packet_Types_Pkg(kcg_C1, kcg_C2)          \
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (P80_ModeProfiles_T_Packet_Types_Pkg)))
#endif /* kcg_copy_P80_ModeProfiles_T_Packet_Types_Pkg */

#ifndef kcg_copy_array_bool_6
#define kcg_copy_array_bool_6(kcg_C1, kcg_C2)                                 \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_6)))
#endif /* kcg_copy_array_bool_6 */

#ifndef kcg_copy__129_array
#define kcg_copy__129_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_129_array)))
#endif /* kcg_copy__129_array */

#ifndef kcg_copy_array_int32_40
#define kcg_copy_array_int32_40(kcg_C1, kcg_C2)                               \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_40)))
#endif /* kcg_copy_array_int32_40 */

#ifndef kcg_copy__130_array
#define kcg_copy__130_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_130_array)))
#endif /* kcg_copy__130_array */

#ifndef kcg_copy_linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg
#define kcg_copy_linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg)))
#endif /* kcg_copy_linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg */

#ifndef kcg_copy_array_int32_627
#define kcg_copy_array_int32_627(kcg_C1, kcg_C2)                              \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_627)))
#endif /* kcg_copy_array_int32_627 */

#ifndef kcg_copy_P046_OBU_sectionlist_enum_T_TM
#define kcg_copy_P046_OBU_sectionlist_enum_T_TM(kcg_C1, kcg_C2)               \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P046_OBU_sectionlist_enum_T_TM)))
#endif /* kcg_copy_P046_OBU_sectionlist_enum_T_TM */

#ifndef kcg_copy_P021_OBU_sectionlist_enum_T_TM
#define kcg_copy_P021_OBU_sectionlist_enum_T_TM(kcg_C1, kcg_C2)               \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P021_OBU_sectionlist_enum_T_TM)))
#endif /* kcg_copy_P021_OBU_sectionlist_enum_T_TM */

#ifndef kcg_copy_P041_OBU_sectionlist_enum_T_TM
#define kcg_copy_P041_OBU_sectionlist_enum_T_TM(kcg_C1, kcg_C2)               \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P041_OBU_sectionlist_enum_T_TM)))
#endif /* kcg_copy_P041_OBU_sectionlist_enum_T_TM */

#ifndef kcg_copy_array_int32_129
#define kcg_copy_array_int32_129(kcg_C1, kcg_C2)                              \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_129)))
#endif /* kcg_copy_array_int32_129 */

#ifndef kcg_copy__131_array
#define kcg_copy__131_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_131_array)))
#endif /* kcg_copy__131_array */

#ifndef kcg_copy__132_array
#define kcg_copy__132_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_132_array)))
#endif /* kcg_copy__132_array */

#ifndef kcg_copy_array_float32_113
#define kcg_copy_array_float32_113(kcg_C1, kcg_C2)                            \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_float32_113)))
#endif /* kcg_copy_array_float32_113 */

#ifndef kcg_copy_array_int32_221
#define kcg_copy_array_int32_221(kcg_C1, kcg_C2)                              \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_221)))
#endif /* kcg_copy_array_int32_221 */

#ifndef kcg_copy__133_array
#define kcg_copy__133_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_133_array)))
#endif /* kcg_copy__133_array */

#ifndef kcg_copy_Metadata_T_Common_Types_Pkg
#define kcg_copy_Metadata_T_Common_Types_Pkg(kcg_C1, kcg_C2)                  \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (Metadata_T_Common_Types_Pkg)))
#endif /* kcg_copy_Metadata_T_Common_Types_Pkg */

#ifndef kcg_copy_array_bool_256_46_30
#define kcg_copy_array_bool_256_46_30(kcg_C1, kcg_C2)                         \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_256_46_30)))
#endif /* kcg_copy_array_bool_256_46_30 */

#ifndef kcg_copy__134_array
#define kcg_copy__134_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_134_array)))
#endif /* kcg_copy__134_array */

#ifndef kcg_copy_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types
#define kcg_copy_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types(kcg_C1, kcg_C2)\
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types)))
#endif /* kcg_copy_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types */

#ifndef kcg_copy_MRSP_internal_T_TargetManagement_types
#define kcg_copy_MRSP_internal_T_TargetManagement_types(kcg_C1, kcg_C2)       \
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (MRSP_internal_T_TargetManagement_types)))
#endif /* kcg_copy_MRSP_internal_T_TargetManagement_types */

#ifndef kcg_copy_Target_list_MRSP_real_T_TargetManagement_types
#define kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(kcg_C1, kcg_C2)\
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (Target_list_MRSP_real_T_TargetManagement_types)))
#endif /* kcg_copy_Target_list_MRSP_real_T_TargetManagement_types */

#ifndef kcg_copy_MRSP_Profile_t_TrackAtlasTypes
#define kcg_copy_MRSP_Profile_t_TrackAtlasTypes(kcg_C1, kcg_C2)               \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MRSP_Profile_t_TrackAtlasTypes)))
#endif /* kcg_copy_MRSP_Profile_t_TrackAtlasTypes */

#ifndef kcg_copy_array_int32_128_32
#define kcg_copy_array_int32_128_32(kcg_C1, kcg_C2)                           \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_128_32)))
#endif /* kcg_copy_array_int32_128_32 */

#ifndef kcg_copy_array_float32_110
#define kcg_copy_array_float32_110(kcg_C1, kcg_C2)                            \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_float32_110)))
#endif /* kcg_copy_array_float32_110 */

#ifndef kcg_copy__135_array
#define kcg_copy__135_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_135_array)))
#endif /* kcg_copy__135_array */

#ifndef kcg_copy_array_int32_891
#define kcg_copy_array_int32_891(kcg_C1, kcg_C2)                              \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_891)))
#endif /* kcg_copy_array_int32_891 */

#ifndef kcg_copy__136_array
#define kcg_copy__136_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_136_array)))
#endif /* kcg_copy__136_array */

#ifndef kcg_copy__137_array
#define kcg_copy__137_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_137_array)))
#endif /* kcg_copy__137_array */

#ifndef kcg_copy__138_array
#define kcg_copy__138_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_138_array)))
#endif /* kcg_copy__138_array */

#ifndef kcg_copy_array_int32_888
#define kcg_copy_array_int32_888(kcg_C1, kcg_C2)                              \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_888)))
#endif /* kcg_copy_array_int32_888 */

#ifndef kcg_copy_MetadataTruthtable_T1_CheckEuroradioMessage
#define kcg_copy_MetadataTruthtable_T1_CheckEuroradioMessage(kcg_C1, kcg_C2)  \
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (MetadataTruthtable_T1_CheckEuroradioMessage)))
#endif /* kcg_copy_MetadataTruthtable_T1_CheckEuroradioMessage */

#ifndef kcg_copy_array_int32_64
#define kcg_copy_array_int32_64(kcg_C1, kcg_C2)                               \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_64)))
#endif /* kcg_copy_array_int32_64 */

#ifndef kcg_copy_array_int32_32_32
#define kcg_copy_array_int32_32_32(kcg_C1, kcg_C2)                            \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_32_32)))
#endif /* kcg_copy_array_int32_32_32 */

#ifndef kcg_copy__139_array
#define kcg_copy__139_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_139_array)))
#endif /* kcg_copy__139_array */

#ifndef kcg_copy_aNID_RADIO_T_Packet_TrainTypes_Pkg
#define kcg_copy_aNID_RADIO_T_Packet_TrainTypes_Pkg(kcg_C1, kcg_C2)           \
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (aNID_RADIO_T_Packet_TrainTypes_Pkg)))
#endif /* kcg_copy_aNID_RADIO_T_Packet_TrainTypes_Pkg */

#ifndef kcg_copy__140_array
#define kcg_copy__140_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_140_array)))
#endif /* kcg_copy__140_array */

#ifndef kcg_copy_array_int32_894
#define kcg_copy_array_int32_894(kcg_C1, kcg_C2)                              \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_894)))
#endif /* kcg_copy_array_int32_894 */

#ifndef kcg_copy_ModeDecisionTableType_DataDictionary_Pkg
#define kcg_copy_ModeDecisionTableType_DataDictionary_Pkg(kcg_C1, kcg_C2)     \
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (ModeDecisionTableType_DataDictionary_Pkg)))
#endif /* kcg_copy_ModeDecisionTableType_DataDictionary_Pkg */

#ifndef kcg_copy_array_bool_256
#define kcg_copy_array_bool_256(kcg_C1, kcg_C2)                               \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_256)))
#endif /* kcg_copy_array_bool_256 */

#ifndef kcg_copy_DMI_EVC_Level_Data_int_array_T_DATA
#define kcg_copy_DMI_EVC_Level_Data_int_array_T_DATA(kcg_C1, kcg_C2)          \
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (DMI_EVC_Level_Data_int_array_T_DATA)))
#endif /* kcg_copy_DMI_EVC_Level_Data_int_array_T_DATA */

#ifndef kcg_copy__141_array
#define kcg_copy__141_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_141_array)))
#endif /* kcg_copy__141_array */

#ifndef kcg_copy_DMI_Track_Description_int_array_T
#define kcg_copy_DMI_Track_Description_int_array_T(kcg_C1, kcg_C2)            \
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (DMI_Track_Description_int_array_T)))
#endif /* kcg_copy_DMI_Track_Description_int_array_T */

#ifndef kcg_copy__142_array
#define kcg_copy__142_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_142_array)))
#endif /* kcg_copy__142_array */

#ifndef kcg_copy__143_array
#define kcg_copy__143_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_143_array)))
#endif /* kcg_copy__143_array */

#ifndef kcg_copy__144_array
#define kcg_copy__144_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_144_array)))
#endif /* kcg_copy__144_array */

#ifndef kcg_copy__145_array
#define kcg_copy__145_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_145_array)))
#endif /* kcg_copy__145_array */

#ifndef kcg_copy__146_array
#define kcg_copy__146_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_146_array)))
#endif /* kcg_copy__146_array */

#ifndef kcg_copy_array_bool_4
#define kcg_copy_array_bool_4(kcg_C1, kcg_C2)                                 \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_4)))
#endif /* kcg_copy_array_bool_4 */

#ifndef kcg_copy_array_int32_2
#define kcg_copy_array_int32_2(kcg_C1, kcg_C2)                                \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_2)))
#endif /* kcg_copy_array_int32_2 */

#ifndef kcg_copy_array_int32_8
#define kcg_copy_array_int32_8(kcg_C1, kcg_C2)                                \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_8)))
#endif /* kcg_copy_array_int32_8 */

#ifndef kcg_copy_array_int32_5
#define kcg_copy_array_int32_5(kcg_C1, kcg_C2)                                \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_5)))
#endif /* kcg_copy_array_int32_5 */

#ifndef kcg_copy_CompressedPacketData_T_Common_Types_Pkg
#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg(kcg_C1, kcg_C2)      \
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (CompressedPacketData_T_Common_Types_Pkg)))
#endif /* kcg_copy_CompressedPacketData_T_Common_Types_Pkg */

#ifndef kcg_copy__147_array
#define kcg_copy__147_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_147_array)))
#endif /* kcg_copy__147_array */

#ifndef kcg_copy_array_int32_97
#define kcg_copy_array_int32_97(kcg_C1, kcg_C2)                               \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_97)))
#endif /* kcg_copy_array_int32_97 */

#ifndef kcg_copy_array_int32_95_33
#define kcg_copy_array_int32_95_33(kcg_C1, kcg_C2)                            \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_95_33)))
#endif /* kcg_copy_array_int32_95_33 */

#ifndef kcg_copy_DMI_Driver_Identifier_int_array_T_DATA
#define kcg_copy_DMI_Driver_Identifier_int_array_T_DATA(kcg_C1, kcg_C2)       \
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (DMI_Driver_Identifier_int_array_T_DATA)))
#endif /* kcg_copy_DMI_Driver_Identifier_int_array_T_DATA */

#ifndef kcg_copy__148_array
#define kcg_copy__148_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_148_array)))
#endif /* kcg_copy__148_array */

#ifndef kcg_copy_array_int32_260
#define kcg_copy_array_int32_260(kcg_C1, kcg_C2)                              \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_260)))
#endif /* kcg_copy_array_int32_260 */

#ifndef kcg_copy_array_int32_17
#define kcg_copy_array_int32_17(kcg_C1, kcg_C2)                               \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_17)))
#endif /* kcg_copy_array_int32_17 */

#ifndef kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes
#define kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(kcg_C1, kcg_C2)         \
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (StaticSpeedProfile_t_TrackAtlasTypes)))
#endif /* kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes */

#ifndef kcg_copy_GradientProfile_t_TrackAtlasTypes
#define kcg_copy_GradientProfile_t_TrackAtlasTypes(kcg_C1, kcg_C2)            \
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (GradientProfile_t_TrackAtlasTypes)))
#endif /* kcg_copy_GradientProfile_t_TrackAtlasTypes */

#ifndef kcg_copy_array_int32_100
#define kcg_copy_array_int32_100(kcg_C1, kcg_C2)                              \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_100)))
#endif /* kcg_copy_array_int32_100 */

#ifndef kcg_copy_array_int32_14
#define kcg_copy_array_int32_14(kcg_C1, kcg_C2)                               \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_14)))
#endif /* kcg_copy_array_int32_14 */

#ifndef kcg_copy_array_float32_1
#define kcg_copy_array_float32_1(kcg_C1, kcg_C2)                              \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_float32_1)))
#endif /* kcg_copy_array_float32_1 */

#ifndef kcg_copy_array_int32_23
#define kcg_copy_array_int32_23(kcg_C1, kcg_C2)                               \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_23)))
#endif /* kcg_copy_array_int32_23 */

#ifndef kcg_copy__149_array
#define kcg_copy__149_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_149_array)))
#endif /* kcg_copy__149_array */

#ifndef kcg_copy_array_int32_20
#define kcg_copy_array_int32_20(kcg_C1, kcg_C2)                               \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_20)))
#endif /* kcg_copy_array_int32_20 */

#ifndef kcg_copy__150_array
#define kcg_copy__150_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_150_array)))
#endif /* kcg_copy__150_array */

#ifndef kcg_copy__151_array
#define kcg_copy__151_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_151_array)))
#endif /* kcg_copy__151_array */

#ifndef kcg_copy__152_array
#define kcg_copy__152_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_152_array)))
#endif /* kcg_copy__152_array */

#ifndef kcg_copy_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck
#define kcg_copy_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck(kcg_C1, kcg_C2)\
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck)))
#endif /* kcg_copy_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck */

#ifndef kcg_copy_P005_OBU_sectionlist_enum_T_TM
#define kcg_copy_P005_OBU_sectionlist_enum_T_TM(kcg_C1, kcg_C2)               \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P005_OBU_sectionlist_enum_T_TM)))
#endif /* kcg_copy_P005_OBU_sectionlist_enum_T_TM */

#ifndef kcg_copy_P080_OBU_sectionlist_enum_T_TM
#define kcg_copy_P080_OBU_sectionlist_enum_T_TM(kcg_C1, kcg_C2)               \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P080_OBU_sectionlist_enum_T_TM)))
#endif /* kcg_copy_P080_OBU_sectionlist_enum_T_TM */

#ifndef kcg_copy_P027V1_OBU_sectionlist_enum_T_TM_baseline2
#define kcg_copy_P027V1_OBU_sectionlist_enum_T_TM_baseline2(kcg_C1, kcg_C2)   \
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (P027V1_OBU_sectionlist_enum_T_TM_baseline2)))
#endif /* kcg_copy_P027V1_OBU_sectionlist_enum_T_TM_baseline2 */

#ifndef kcg_copy_LinkedBGs_T_BG_Types_Pkg
#define kcg_copy_LinkedBGs_T_BG_Types_Pkg(kcg_C1, kcg_C2)                     \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (LinkedBGs_T_BG_Types_Pkg)))
#endif /* kcg_copy_LinkedBGs_T_BG_Types_Pkg */

#ifndef kcg_copy_MyArray_SDM_Commands_Pkg
#define kcg_copy_MyArray_SDM_Commands_Pkg(kcg_C1, kcg_C2)                     \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MyArray_SDM_Commands_Pkg)))
#endif /* kcg_copy_MyArray_SDM_Commands_Pkg */

#ifndef kcg_copy_array_float32_10
#define kcg_copy_array_float32_10(kcg_C1, kcg_C2)                             \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_float32_10)))
#endif /* kcg_copy_array_float32_10 */

#ifndef kcg_copy_array_int32_32
#define kcg_copy_array_int32_32(kcg_C1, kcg_C2)                               \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_32)))
#endif /* kcg_copy_array_int32_32 */

#ifndef kcg_copy_P080_sections_array_flat_T_TM
#define kcg_copy_P080_sections_array_flat_T_TM(kcg_C1, kcg_C2)                \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P080_sections_array_flat_T_TM)))
#endif /* kcg_copy_P080_sections_array_flat_T_TM */

#ifndef kcg_copy__153_array
#define kcg_copy__153_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_153_array)))
#endif /* kcg_copy__153_array */

#ifndef kcg_copy_array_float32_13
#define kcg_copy_array_float32_13(kcg_C1, kcg_C2)                             \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_float32_13)))
#endif /* kcg_copy_array_float32_13 */

#ifndef kcg_copy__154_array
#define kcg_copy__154_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_154_array)))
#endif /* kcg_copy__154_array */

#ifndef kcg_copy__155_array
#define kcg_copy__155_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_155_array)))
#endif /* kcg_copy__155_array */

#ifndef kcg_copy_array_int32_41
#define kcg_copy_array_int32_41(kcg_C1, kcg_C2)                               \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_41)))
#endif /* kcg_copy_array_int32_41 */

#ifndef kcg_copy_M_TrainTrack_compressed_packets_T_TM_radio_messages
#define kcg_copy_M_TrainTrack_compressed_packets_T_TM_radio_messages(kcg_C1, kcg_C2)\
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (M_TrainTrack_compressed_packets_T_TM_radio_messages)))
#endif /* kcg_copy_M_TrainTrack_compressed_packets_T_TM_radio_messages */

#ifndef kcg_copy_array_int32_302
#define kcg_copy_array_int32_302(kcg_C1, kcg_C2)                              \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_302)))
#endif /* kcg_copy_array_int32_302 */

#ifndef kcg_copy__156_array
#define kcg_copy__156_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_156_array)))
#endif /* kcg_copy__156_array */

#ifndef kcg_copy_array_float32_100_1
#define kcg_copy_array_float32_100_1(kcg_C1, kcg_C2)                          \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_float32_100_1)))
#endif /* kcg_copy_array_float32_100_1 */

#ifndef kcg_copy_array_float32_114
#define kcg_copy_array_float32_114(kcg_C1, kcg_C2)                            \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_float32_114)))
#endif /* kcg_copy_array_float32_114 */

#ifndef kcg_copy_P058_OBU_sectionlist_enum_T_TM
#define kcg_copy_P058_OBU_sectionlist_enum_T_TM(kcg_C1, kcg_C2)               \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P058_OBU_sectionlist_enum_T_TM)))
#endif /* kcg_copy_P058_OBU_sectionlist_enum_T_TM */

#ifndef kcg_copy__157_array
#define kcg_copy__157_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_157_array)))
#endif /* kcg_copy__157_array */

#ifndef kcg_copy__3_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2
#define kcg_copy__3_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2(kcg_C1, kcg_C2)\
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (_3_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2)))
#endif /* kcg_copy__3_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 */

#ifndef kcg_copy_DMI_gradientProfileArray_T_DMI_Types_Pkg
#define kcg_copy_DMI_gradientProfileArray_T_DMI_Types_Pkg(kcg_C1, kcg_C2)     \
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (DMI_gradientProfileArray_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_gradientProfileArray_T_DMI_Types_Pkg */

#ifndef kcg_copy_DMI_SpeedProfileArray_T_DMI_Types_Pkg
#define kcg_copy_DMI_SpeedProfileArray_T_DMI_Types_Pkg(kcg_C1, kcg_C2)        \
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (DMI_SpeedProfileArray_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_SpeedProfileArray_T_DMI_Types_Pkg */

#ifndef kcg_copy__158_array
#define kcg_copy__158_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_158_array)))
#endif /* kcg_copy__158_array */

#ifndef kcg_copy__159_array
#define kcg_copy__159_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_159_array)))
#endif /* kcg_copy__159_array */

#ifndef kcg_copy__160_array
#define kcg_copy__160_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_160_array)))
#endif /* kcg_copy__160_array */

#ifndef kcg_copy_DMI_level_array_T_DMI_Types_Pkg
#define kcg_copy_DMI_level_array_T_DMI_Types_Pkg(kcg_C1, kcg_C2)              \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (DMI_level_array_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_level_array_T_DMI_Types_Pkg */

#ifndef kcg_copy_DMI_trackConditionArray_T_DMI_Types_Pkg
#define kcg_copy_DMI_trackConditionArray_T_DMI_Types_Pkg(kcg_C1, kcg_C2)      \
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (DMI_trackConditionArray_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_trackConditionArray_T_DMI_Types_Pkg */

#ifndef kcg_copy_DMI_to_EVC_Message_int_T_API_DMI_Pkg
#define kcg_copy_DMI_to_EVC_Message_int_T_API_DMI_Pkg(kcg_C1, kcg_C2)         \
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (DMI_to_EVC_Message_int_T_API_DMI_Pkg)))
#endif /* kcg_copy_DMI_to_EVC_Message_int_T_API_DMI_Pkg */

#ifndef kcg_copy__161_array
#define kcg_copy__161_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_161_array)))
#endif /* kcg_copy__161_array */

#ifndef kcg_copy_array_int32_975
#define kcg_copy_array_int32_975(kcg_C1, kcg_C2)                              \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_975)))
#endif /* kcg_copy_array_int32_975 */

#ifndef kcg_copy_array_int32_99_33
#define kcg_copy_array_int32_99_33(kcg_C1, kcg_C2)                            \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_99_33)))
#endif /* kcg_copy_array_int32_99_33 */

#ifndef kcg_copy_array_bool_1
#define kcg_copy_array_bool_1(kcg_C1, kcg_C2)                                 \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_1)))
#endif /* kcg_copy_array_bool_1 */

#ifndef kcg_copy_array_int32_65
#define kcg_copy_array_int32_65(kcg_C1, kcg_C2)                               \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_65)))
#endif /* kcg_copy_array_int32_65 */

#ifndef kcg_copy_array_int32_500_500
#define kcg_copy_array_int32_500_500(kcg_C1, kcg_C2)                          \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_500_500)))
#endif /* kcg_copy_array_int32_500_500 */

#ifndef kcg_copy__162_array
#define kcg_copy__162_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_162_array)))
#endif /* kcg_copy__162_array */

#ifndef kcg_copy__163_array
#define kcg_copy__163_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_163_array)))
#endif /* kcg_copy__163_array */

#ifndef kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg
#define kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(kcg_C1, kcg_C2)   \
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (ReportedBGList_T_ProvidePositionReport_Pkg)))
#endif /* kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg */

#ifndef kcg_copy_TelegramArray_T_BG_Types_Pkg
#define kcg_copy_TelegramArray_T_BG_Types_Pkg(kcg_C1, kcg_C2)                 \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (TelegramArray_T_BG_Types_Pkg)))
#endif /* kcg_copy_TelegramArray_T_BG_Types_Pkg */

#ifndef kcg_copy__164_array
#define kcg_copy__164_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_164_array)))
#endif /* kcg_copy__164_array */

#ifndef kcg_copy_array_int32_978
#define kcg_copy_array_int32_978(kcg_C1, kcg_C2)                              \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_978)))
#endif /* kcg_copy_array_int32_978 */

#ifndef kcg_copy_array_int32_987
#define kcg_copy_array_int32_987(kcg_C1, kcg_C2)                              \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_987)))
#endif /* kcg_copy_array_int32_987 */

#ifndef kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg
#define kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(kcg_C1, kcg_C2)       \
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (DMI_TXT_MSGList_status_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg */

#ifndef kcg_copy__165_array
#define kcg_copy__165_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_165_array)))
#endif /* kcg_copy__165_array */

#ifndef kcg_copy_driverIdentifier_T_DMI_Messages_Bothways_Pkg
#define kcg_copy_driverIdentifier_T_DMI_Messages_Bothways_Pkg(kcg_C1, kcg_C2) \
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (driverIdentifier_T_DMI_Messages_Bothways_Pkg)))
#endif /* kcg_copy_driverIdentifier_T_DMI_Messages_Bothways_Pkg */

#ifndef kcg_copy_array_int32_990
#define kcg_copy_array_int32_990(kcg_C1, kcg_C2)                              \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_990)))
#endif /* kcg_copy_array_int32_990 */

#ifndef kcg_copy_LevelDecisionTableType_DataDictionary_Pkg
#define kcg_copy_LevelDecisionTableType_DataDictionary_Pkg(kcg_C1, kcg_C2)    \
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (LevelDecisionTableType_DataDictionary_Pkg)))
#endif /* kcg_copy_LevelDecisionTableType_DataDictionary_Pkg */

#ifndef kcg_copy_array_int32_492
#define kcg_copy_array_int32_492(kcg_C1, kcg_C2)                              \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_492)))
#endif /* kcg_copy_array_int32_492 */

#ifndef kcg_copy_array_int32_3
#define kcg_copy_array_int32_3(kcg_C1, kcg_C2)                                \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_3)))
#endif /* kcg_copy_array_int32_3 */

#ifndef kcg_copy_DMI_TEXT_INT_Array_T_DATA
#define kcg_copy_DMI_TEXT_INT_Array_T_DATA(kcg_C1, kcg_C2)                    \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (DMI_TEXT_INT_Array_T_DATA)))
#endif /* kcg_copy_DMI_TEXT_INT_Array_T_DATA */

#ifndef kcg_copy_array_float32_100_8
#define kcg_copy_array_float32_100_8(kcg_C1, kcg_C2)                          \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_float32_100_8)))
#endif /* kcg_copy_array_float32_100_8 */

#ifndef kcg_copy_array_int32_9
#define kcg_copy_array_int32_9(kcg_C1, kcg_C2)                                \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_9)))
#endif /* kcg_copy_array_int32_9 */

#ifndef kcg_copy_ParabolaCurveValid_T_CalcBrakingCurves_types
#define kcg_copy_ParabolaCurveValid_T_CalcBrakingCurves_types(kcg_C1, kcg_C2) \
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (ParabolaCurveValid_T_CalcBrakingCurves_types)))
#endif /* kcg_copy_ParabolaCurveValid_T_CalcBrakingCurves_types */

#ifndef kcg_copy__166_array
#define kcg_copy__166_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_166_array)))
#endif /* kcg_copy__166_array */

#ifndef kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg
#define kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(kcg_C1, kcg_C2)         \
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (EVC_to_DMI_Message_int_T_API_DMI_Pkg)))
#endif /* kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg */

#ifndef kcg_copy_positionedBGs_T_TrainPosition_Types_Pck
#define kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(kcg_C1, kcg_C2)      \
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (positionedBGs_T_TrainPosition_Types_Pck)))
#endif /* kcg_copy_positionedBGs_T_TrainPosition_Types_Pck */

#ifndef kcg_copy_array_int32_261
#define kcg_copy_array_int32_261(kcg_C1, kcg_C2)                              \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_261)))
#endif /* kcg_copy_array_int32_261 */

#ifndef kcg_copy__167_array
#define kcg_copy__167_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_167_array)))
#endif /* kcg_copy__167_array */

#ifndef kcg_copy_array_int32_6
#define kcg_copy_array_int32_6(kcg_C1, kcg_C2)                                \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_6)))
#endif /* kcg_copy_array_int32_6 */

#ifndef kcg_copy__168_array
#define kcg_copy__168_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_168_array)))
#endif /* kcg_copy__168_array */

#ifndef kcg_copy__169_array
#define kcg_copy__169_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_169_array)))
#endif /* kcg_copy__169_array */

#ifndef kcg_copy_array_int32_198_33
#define kcg_copy_array_int32_198_33(kcg_C1, kcg_C2)                           \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_198_33)))
#endif /* kcg_copy_array_int32_198_33 */

#ifndef kcg_copy_array_int32_15
#define kcg_copy_array_int32_15(kcg_C1, kcg_C2)                               \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_15)))
#endif /* kcg_copy_array_int32_15 */

#ifndef kcg_copy__170_array
#define kcg_copy__170_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_170_array)))
#endif /* kcg_copy__170_array */

#ifndef kcg_copy_P005_sections_array_flat_T_TM
#define kcg_copy_P005_sections_array_flat_T_TM(kcg_C1, kcg_C2)                \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P005_sections_array_flat_T_TM)))
#endif /* kcg_copy_P005_sections_array_flat_T_TM */

#ifndef kcg_copy__171_array
#define kcg_copy__171_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_171_array)))
#endif /* kcg_copy__171_array */

#ifndef kcg_copy_array_int32_2_4_8
#define kcg_copy_array_int32_2_4_8(kcg_C1, kcg_C2)                            \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_2_4_8)))
#endif /* kcg_copy_array_int32_2_4_8 */

#ifndef kcg_copy__172_array
#define kcg_copy__172_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_172_array)))
#endif /* kcg_copy__172_array */

#ifndef kcg_copy__173_array
#define kcg_copy__173_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_173_array)))
#endif /* kcg_copy__173_array */

#ifndef kcg_copy__174_array
#define kcg_copy__174_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_174_array)))
#endif /* kcg_copy__174_array */

#ifndef kcg_copy__175_array
#define kcg_copy__175_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_175_array)))
#endif /* kcg_copy__175_array */

#ifndef kcg_copy__176_array
#define kcg_copy__176_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_176_array)))
#endif /* kcg_copy__176_array */

#ifndef kcg_copy_t_BrakeVt_t_SDMModelPkg
#define kcg_copy_t_BrakeVt_t_SDMModelPkg(kcg_C1, kcg_C2)                      \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (t_BrakeVt_t_SDMModelPkg)))
#endif /* kcg_copy_t_BrakeVt_t_SDMModelPkg */

#ifndef kcg_copy_array_int32_24
#define kcg_copy_array_int32_24(kcg_C1, kcg_C2)                               \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_24)))
#endif /* kcg_copy_array_int32_24 */

#ifndef kcg_copy__177_array
#define kcg_copy__177_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_177_array)))
#endif /* kcg_copy__177_array */

#ifndef kcg_copy__178_array
#define kcg_copy__178_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_178_array)))
#endif /* kcg_copy__178_array */

#ifndef kcg_copy_array_float32_8
#define kcg_copy_array_float32_8(kcg_C1, kcg_C2)                              \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_float32_8)))
#endif /* kcg_copy_array_float32_8 */

#ifndef kcg_copy__179_array
#define kcg_copy__179_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_179_array)))
#endif /* kcg_copy__179_array */

#ifndef kcg_copy_GradientProfile_real_t_SDM_GradientAcceleration_types
#define kcg_copy_GradientProfile_real_t_SDM_GradientAcceleration_types(kcg_C1, kcg_C2)\
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (GradientProfile_real_t_SDM_GradientAcceleration_types)))
#endif /* kcg_copy_GradientProfile_real_t_SDM_GradientAcceleration_types */

#ifndef kcg_copy_GradientProfile_for_DMI_t_TrackAtlasTypes
#define kcg_copy_GradientProfile_for_DMI_t_TrackAtlasTypes(kcg_C1, kcg_C2)    \
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (GradientProfile_for_DMI_t_TrackAtlasTypes)))
#endif /* kcg_copy_GradientProfile_for_DMI_t_TrackAtlasTypes */

#ifndef kcg_copy_array_bool_113
#define kcg_copy_array_bool_113(kcg_C1, kcg_C2)                               \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_113)))
#endif /* kcg_copy_array_bool_113 */

#ifndef kcg_copy_array_int32_30
#define kcg_copy_array_int32_30(kcg_C1, kcg_C2)                               \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_30)))
#endif /* kcg_copy_array_int32_30 */

#ifndef kcg_copy__180_array
#define kcg_copy__180_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_180_array)))
#endif /* kcg_copy__180_array */

#ifndef kcg_copy__181_array
#define kcg_copy__181_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_181_array)))
#endif /* kcg_copy__181_array */

#ifndef kcg_copy_nvkvintsetArray_T_Packet_Types_Pkg
#define kcg_copy_nvkvintsetArray_T_Packet_Types_Pkg(kcg_C1, kcg_C2)           \
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (nvkvintsetArray_T_Packet_Types_Pkg)))
#endif /* kcg_copy_nvkvintsetArray_T_Packet_Types_Pkg */

#ifndef kcg_copy_P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg
#define kcg_copy_P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg)))
#endif /* kcg_copy_P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg */

#ifndef kcg_copy_P21_GradientProfiles_T_Packet_Types_Pkg
#define kcg_copy_P21_GradientProfiles_T_Packet_Types_Pkg(kcg_C1, kcg_C2)      \
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (P21_GradientProfiles_T_Packet_Types_Pkg)))
#endif /* kcg_copy_P21_GradientProfiles_T_Packet_Types_Pkg */

#ifndef kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg
#define kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (P41_LevelTransistionOrders_T_Packet_Types_Pkg)))
#endif /* kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg */

#ifndef kcg_copy_SSPArray_T_Packet_Types_Pkg
#define kcg_copy_SSPArray_T_Packet_Types_Pkg(kcg_C1, kcg_C2)                  \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (SSPArray_T_Packet_Types_Pkg)))
#endif /* kcg_copy_SSPArray_T_Packet_Types_Pkg */

#ifndef kcg_copy_DiffArray_T_Packet_Types_Pkg
#define kcg_copy_DiffArray_T_Packet_Types_Pkg(kcg_C1, kcg_C2)                 \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (DiffArray_T_Packet_Types_Pkg)))
#endif /* kcg_copy_DiffArray_T_Packet_Types_Pkg */

#ifndef kcg_copy_array_int32_110
#define kcg_copy_array_int32_110(kcg_C1, kcg_C2)                              \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_110)))
#endif /* kcg_copy_array_int32_110 */

#ifndef kcg_copy__182_array
#define kcg_copy__182_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_182_array)))
#endif /* kcg_copy__182_array */

#ifndef kcg_copy_array_int32_33
#define kcg_copy_array_int32_33(kcg_C1, kcg_C2)                               \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_33)))
#endif /* kcg_copy_array_int32_33 */

#ifndef kcg_copy_array_int32_42
#define kcg_copy_array_int32_42(kcg_C1, kcg_C2)                               \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_42)))
#endif /* kcg_copy_array_int32_42 */

#ifndef kcg_copy__183_array
#define kcg_copy__183_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_183_array)))
#endif /* kcg_copy__183_array */

#ifndef kcg_copy__184_array
#define kcg_copy__184_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_184_array)))
#endif /* kcg_copy__184_array */

#ifndef kcg_copy_array_float32_100
#define kcg_copy_array_float32_100(kcg_C1, kcg_C2)                            \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_float32_100)))
#endif /* kcg_copy_array_float32_100 */

#ifndef kcg_copy__185_array
#define kcg_copy__185_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_185_array)))
#endif /* kcg_copy__185_array */

#ifndef kcg_copy_ASafeSpeedDefinition_T_CalcBrakingCurves_types
#define kcg_copy_ASafeSpeedDefinition_T_CalcBrakingCurves_types(kcg_C1, kcg_C2)\
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (ASafeSpeedDefinition_T_CalcBrakingCurves_types)))
#endif /* kcg_copy_ASafeSpeedDefinition_T_CalcBrakingCurves_types */

#ifndef kcg_copy_IterPacket58List_T_Packet_Types_Pkg
#define kcg_copy_IterPacket58List_T_Packet_Types_Pkg(kcg_C1, kcg_C2)          \
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (IterPacket58List_T_Packet_Types_Pkg)))
#endif /* kcg_copy_IterPacket58List_T_Packet_Types_Pkg */

#ifndef kcg_copy_array_int32_131
#define kcg_copy_array_int32_131(kcg_C1, kcg_C2)                              \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_131)))
#endif /* kcg_copy_array_int32_131 */

#ifndef kcg_copy__186_array
#define kcg_copy__186_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_186_array)))
#endif /* kcg_copy__186_array */

#ifndef kcg_copy_array_int32_128
#define kcg_copy_array_int32_128(kcg_C1, kcg_C2)                              \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_128)))
#endif /* kcg_copy_array_int32_128 */

#ifndef kcg_copy_array_int32_961
#define kcg_copy_array_int32_961(kcg_C1, kcg_C2)                              \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_961)))
#endif /* kcg_copy_array_int32_961 */

#ifndef kcg_copy__187_array
#define kcg_copy__187_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_187_array)))
#endif /* kcg_copy__187_array */

#ifndef kcg_copy_array_int32_66_33
#define kcg_copy_array_int32_66_33(kcg_C1, kcg_C2)                            \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_66_33)))
#endif /* kcg_copy_array_int32_66_33 */

#ifndef kcg_copy_array_int32_48
#define kcg_copy_array_int32_48(kcg_C1, kcg_C2)                               \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_48)))
#endif /* kcg_copy_array_int32_48 */

#ifndef kcg_copy_array_int32_964
#define kcg_copy_array_int32_964(kcg_C1, kcg_C2)                              \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_964)))
#endif /* kcg_copy_array_int32_964 */

#ifndef kcg_copy__188_array
#define kcg_copy__188_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_188_array)))
#endif /* kcg_copy__188_array */

#ifndef kcg_copy__189_array
#define kcg_copy__189_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_189_array)))
#endif /* kcg_copy__189_array */

#ifndef kcg_copy_array_int32_64_32
#define kcg_copy_array_int32_64_32(kcg_C1, kcg_C2)                            \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_64_32)))
#endif /* kcg_copy_array_int32_64_32 */

#ifndef kcg_copy__190_array
#define kcg_copy__190_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_190_array)))
#endif /* kcg_copy__190_array */

#ifndef kcg_copy__191_array
#define kcg_copy__191_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_191_array)))
#endif /* kcg_copy__191_array */

#ifndef kcg_copy_array_float32_100_6
#define kcg_copy_array_float32_100_6(kcg_C1, kcg_C2)                          \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_float32_100_6)))
#endif /* kcg_copy_array_float32_100_6 */

#ifndef kcg_copy_array_int32_6_221
#define kcg_copy_array_int32_6_221(kcg_C1, kcg_C2)                            \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_6_221)))
#endif /* kcg_copy_array_int32_6_221 */

#ifndef kcg_copy__192_array
#define kcg_copy__192_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_192_array)))
#endif /* kcg_copy__192_array */

#ifndef kcg_copy_ASafe_Data_T_CalcBrakingCurves_types
#define kcg_copy_ASafe_Data_T_CalcBrakingCurves_types(kcg_C1, kcg_C2)         \
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (ASafe_Data_T_CalcBrakingCurves_types)))
#endif /* kcg_copy_ASafe_Data_T_CalcBrakingCurves_types */

#ifndef kcg_copy_P046_sections_array_flat_T_TM
#define kcg_copy_P046_sections_array_flat_T_TM(kcg_C1, kcg_C2)                \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P046_sections_array_flat_T_TM)))
#endif /* kcg_copy_P046_sections_array_flat_T_TM */

#ifndef kcg_copy__193_array
#define kcg_copy__193_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_193_array)))
#endif /* kcg_copy__193_array */

#ifndef kcg_copy__194_array
#define kcg_copy__194_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_194_array)))
#endif /* kcg_copy__194_array */

#ifndef kcg_copy_array_float32_50
#define kcg_copy_array_float32_50(kcg_C1, kcg_C2)                             \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_float32_50)))
#endif /* kcg_copy_array_float32_50 */

#ifndef kcg_copy_array_bool_100
#define kcg_copy_array_bool_100(kcg_C1, kcg_C2)                               \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_100)))
#endif /* kcg_copy_array_bool_100 */

#ifndef kcg_copy__195_array
#define kcg_copy__195_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_195_array)))
#endif /* kcg_copy__195_array */

#ifndef kcg_copy__196_array
#define kcg_copy__196_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_196_array)))
#endif /* kcg_copy__196_array */

#ifndef kcg_copy__197_array
#define kcg_copy__197_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_197_array)))
#endif /* kcg_copy__197_array */

#ifndef kcg_copy__198_array
#define kcg_copy__198_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_198_array)))
#endif /* kcg_copy__198_array */

#ifndef kcg_copy__199_array
#define kcg_copy__199_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_199_array)))
#endif /* kcg_copy__199_array */

#ifndef kcg_copy__200_array
#define kcg_copy__200_array(kcg_C1, kcg_C2)                                   \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_200_array)))
#endif /* kcg_copy__200_array */

#ifndef kcg_copy__6_P15_Level23MovementAuthorities_T_Packet_Types_Pkg
#define kcg_copy__6_P15_Level23MovementAuthorities_T_Packet_Types_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (_6_P15_Level23MovementAuthorities_T_Packet_Types_Pkg)))
#endif /* kcg_copy__6_P15_Level23MovementAuthorities_T_Packet_Types_Pkg */

#ifndef kcg_copy__7_P12_Level1MovementAuthorities_T_Packet_Types_Pkg
#define kcg_copy__7_P12_Level1MovementAuthorities_T_Packet_Types_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (_7_P12_Level1MovementAuthorities_T_Packet_Types_Pkg)))
#endif /* kcg_copy__7_P12_Level1MovementAuthorities_T_Packet_Types_Pkg */

#ifndef kcg_copy_nvkrintArray_T_Packet_Types_Pkg
#define kcg_copy_nvkrintArray_T_Packet_Types_Pkg(kcg_C1, kcg_C2)              \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (nvkrintArray_T_Packet_Types_Pkg)))
#endif /* kcg_copy_nvkrintArray_T_Packet_Types_Pkg */

#ifndef kcg_copy_nvkvintArray_T_Packet_Types_Pkg
#define kcg_copy_nvkvintArray_T_Packet_Types_Pkg(kcg_C1, kcg_C2)              \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (nvkvintArray_T_Packet_Types_Pkg)))
#endif /* kcg_copy_nvkvintArray_T_Packet_Types_Pkg */

#ifndef kcg_copy_nidCArray_T_Packet_Types_Pkg
#define kcg_copy_nidCArray_T_Packet_Types_Pkg(kcg_C1, kcg_C2)                 \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (nidCArray_T_Packet_Types_Pkg)))
#endif /* kcg_copy_nidCArray_T_Packet_Types_Pkg */

#ifndef kcg_copy_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg
#define kcg_copy_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy__8_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg
#define kcg_copy__8_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (_8_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg)))
#endif /* kcg_copy__8_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg */

#ifdef kcg_use_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg
#ifndef kcg_comp_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg
extern kcg_bool kcg_comp_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg(
  m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg *kcg_c1,
  m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg *kcg_c2);
#endif /* kcg_comp_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg */
#endif /* kcg_use_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg */

#ifdef kcg_use_TrainLocations_real_T_SDM_Types_Pkg
#ifndef kcg_comp_TrainLocations_real_T_SDM_Types_Pkg
extern kcg_bool kcg_comp_TrainLocations_real_T_SDM_Types_Pkg(
  TrainLocations_real_T_SDM_Types_Pkg *kcg_c1,
  TrainLocations_real_T_SDM_Types_Pkg *kcg_c2);
#endif /* kcg_comp_TrainLocations_real_T_SDM_Types_Pkg */
#endif /* kcg_use_TrainLocations_real_T_SDM_Types_Pkg */

#ifdef kcg_use_P005_OBU_T_TM
#ifndef kcg_comp_P005_OBU_T_TM
extern kcg_bool kcg_comp_P005_OBU_T_TM(
  P005_OBU_T_TM *kcg_c1,
  P005_OBU_T_TM *kcg_c2);
#endif /* kcg_comp_P005_OBU_T_TM */
#endif /* kcg_use_P005_OBU_T_TM */

#ifdef kcg_use_P080_OBU_T_TM
#ifndef kcg_comp_P080_OBU_T_TM
extern kcg_bool kcg_comp_P080_OBU_T_TM(
  P080_OBU_T_TM *kcg_c1,
  P080_OBU_T_TM *kcg_c2);
#endif /* kcg_comp_P080_OBU_T_TM */
#endif /* kcg_use_P080_OBU_T_TM */

#ifdef kcg_use_P027V1_section_enum_T_TM_baseline2
#ifndef kcg_comp_P027V1_section_enum_T_TM_baseline2
extern kcg_bool kcg_comp_P027V1_section_enum_T_TM_baseline2(
  P027V1_section_enum_T_TM_baseline2 *kcg_c1,
  P027V1_section_enum_T_TM_baseline2 *kcg_c2);
#endif /* kcg_comp_P027V1_section_enum_T_TM_baseline2 */
#endif /* kcg_use_P027V1_section_enum_T_TM_baseline2 */

#ifdef kcg_use_P041_OBU_T_TM
#ifndef kcg_comp_P041_OBU_T_TM
extern kcg_bool kcg_comp_P041_OBU_T_TM(
  P041_OBU_T_TM *kcg_c1,
  P041_OBU_T_TM *kcg_c2);
#endif /* kcg_comp_P041_OBU_T_TM */
#endif /* kcg_use_P041_OBU_T_TM */

#ifdef kcg_use_DataForSupervision_nextGen_t_TrackAtlasTypes
#ifndef kcg_comp_DataForSupervision_nextGen_t_TrackAtlasTypes
extern kcg_bool kcg_comp_DataForSupervision_nextGen_t_TrackAtlasTypes(
  DataForSupervision_nextGen_t_TrackAtlasTypes *kcg_c1,
  DataForSupervision_nextGen_t_TrackAtlasTypes *kcg_c2);
#endif /* kcg_comp_DataForSupervision_nextGen_t_TrackAtlasTypes */
#endif /* kcg_use_DataForSupervision_nextGen_t_TrackAtlasTypes */

#ifdef kcg_use_ReportedBG_T_ProvidePositionReport_Pkg
#ifndef kcg_comp_ReportedBG_T_ProvidePositionReport_Pkg
extern kcg_bool kcg_comp_ReportedBG_T_ProvidePositionReport_Pkg(
  ReportedBG_T_ProvidePositionReport_Pkg *kcg_c1,
  ReportedBG_T_ProvidePositionReport_Pkg *kcg_c2);
#endif /* kcg_comp_ReportedBG_T_ProvidePositionReport_Pkg */
#endif /* kcg_use_ReportedBG_T_ProvidePositionReport_Pkg */

#ifdef kcg_use_TelegramStore_T_Receive_TrackSide_Msg_Pkg
#ifndef kcg_comp_TelegramStore_T_Receive_TrackSide_Msg_Pkg
extern kcg_bool kcg_comp_TelegramStore_T_Receive_TrackSide_Msg_Pkg(
  TelegramStore_T_Receive_TrackSide_Msg_Pkg *kcg_c1,
  TelegramStore_T_Receive_TrackSide_Msg_Pkg *kcg_c2);
#endif /* kcg_comp_TelegramStore_T_Receive_TrackSide_Msg_Pkg */
#endif /* kcg_use_TelegramStore_T_Receive_TrackSide_Msg_Pkg */

#ifdef kcg_use_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg
#ifndef kcg_comp_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg
extern kcg_bool kcg_comp_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(
  DMI_Level_Data_T_DMI_Messages_Bothways_Pkg *kcg_c1,
  DMI_Level_Data_T_DMI_Messages_Bothways_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg */
#endif /* kcg_use_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg */

#ifdef kcg_use_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg
#ifndef kcg_comp_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg
extern kcg_bool kcg_comp_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
  DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c1,
  DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg */
#endif /* kcg_use_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifdef kcg_use_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg
#ifndef kcg_comp_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg(
  Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg *kcg_c1,
  Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg */
#endif /* kcg_use_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg */

#ifdef kcg_use_radioNetWorkIDs_T_MoRC_Pck
#ifndef kcg_comp_radioNetWorkIDs_T_MoRC_Pck
extern kcg_bool kcg_comp_radioNetWorkIDs_T_MoRC_Pck(
  radioNetWorkIDs_T_MoRC_Pck *kcg_c1,
  radioNetWorkIDs_T_MoRC_Pck *kcg_c2);
#endif /* kcg_comp_radioNetWorkIDs_T_MoRC_Pck */
#endif /* kcg_use_radioNetWorkIDs_T_MoRC_Pck */

#ifdef kcg_use_Change_of_allowed_current_consumption_T_TIU_Types_Pkg
#ifndef kcg_comp_Change_of_allowed_current_consumption_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_Change_of_allowed_current_consumption_T_TIU_Types_Pkg(
  Change_of_allowed_current_consumption_T_TIU_Types_Pkg *kcg_c1,
  Change_of_allowed_current_consumption_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Change_of_allowed_current_consumption_T_TIU_Types_Pkg */
#endif /* kcg_use_Change_of_allowed_current_consumption_T_TIU_Types_Pkg */

#ifdef kcg_use_Change_traction_system_T_TIU_Types_Pkg
#ifndef kcg_comp_Change_traction_system_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_Change_traction_system_T_TIU_Types_Pkg(
  Change_traction_system_T_TIU_Types_Pkg *kcg_c1,
  Change_traction_system_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Change_traction_system_T_TIU_Types_Pkg */
#endif /* kcg_use_Change_traction_system_T_TIU_Types_Pkg */

#ifndef kcg_comp_sessionStatus_T_RCM_Session_Types_Pkg
extern kcg_bool kcg_comp_sessionStatus_T_RCM_Session_Types_Pkg(
  sessionStatus_T_RCM_Session_Types_Pkg *kcg_c1,
  sessionStatus_T_RCM_Session_Types_Pkg *kcg_c2);
#define kcg_use_sessionStatus_T_RCM_Session_Types_Pkg
#endif /* kcg_comp_sessionStatus_T_RCM_Session_Types_Pkg */

#ifdef kcg_use_P003_permanent_data_T_TM_baseline2
#ifndef kcg_comp_P003_permanent_data_T_TM_baseline2
extern kcg_bool kcg_comp_P003_permanent_data_T_TM_baseline2(
  P003_permanent_data_T_TM_baseline2 *kcg_c1,
  P003_permanent_data_T_TM_baseline2 *kcg_c2);
#endif /* kcg_comp_P003_permanent_data_T_TM_baseline2 */
#endif /* kcg_use_P003_permanent_data_T_TM_baseline2 */

#ifdef kcg_use_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg
#ifndef kcg_comp_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg
extern kcg_bool kcg_comp_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg(
  m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg *kcg_c1,
  m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg *kcg_c2);
#endif /* kcg_comp_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg */
#endif /* kcg_use_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg */

#ifdef kcg_use_P041_section_enum_T_TM
#ifndef kcg_comp_P041_section_enum_T_TM
extern kcg_bool kcg_comp_P041_section_enum_T_TM(
  P041_section_enum_T_TM *kcg_c1,
  P041_section_enum_T_TM *kcg_c2);
#endif /* kcg_comp_P041_section_enum_T_TM */
#endif /* kcg_use_P041_section_enum_T_TM */

#ifdef kcg_use_Brake_status_T_TIU_Types_Pkg
#ifndef kcg_comp_Brake_status_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_Brake_status_T_TIU_Types_Pkg(
  Brake_status_T_TIU_Types_Pkg *kcg_c1,
  Brake_status_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Brake_status_T_TIU_Types_Pkg */
#endif /* kcg_use_Brake_status_T_TIU_Types_Pkg */

#ifdef kcg_use_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg
#ifndef kcg_comp_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg
extern kcg_bool kcg_comp_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
  DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg *kcg_c1,
  DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg */
#endif /* kcg_use_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg */

#ifdef kcg_use_Endtimer_t_TrackAtlasTypes
#ifndef kcg_comp_Endtimer_t_TrackAtlasTypes
extern kcg_bool kcg_comp_Endtimer_t_TrackAtlasTypes(
  Endtimer_t_TrackAtlasTypes *kcg_c1,
  Endtimer_t_TrackAtlasTypes *kcg_c2);
#endif /* kcg_comp_Endtimer_t_TrackAtlasTypes */
#endif /* kcg_use_Endtimer_t_TrackAtlasTypes */

#ifdef kcg_use_struct_273277
#ifndef kcg_comp_struct_273277
extern kcg_bool kcg_comp_struct_273277(
  struct_273277 *kcg_c1,
  struct_273277 *kcg_c2);
#endif /* kcg_comp_struct_273277 */
#endif /* kcg_use_struct_273277 */

#ifdef kcg_use_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg
#ifndef kcg_comp_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg
extern kcg_bool kcg_comp_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg(
  ModeLevel2PositionReport_T_ProvidePositionReport_Pkg *kcg_c1,
  ModeLevel2PositionReport_T_ProvidePositionReport_Pkg *kcg_c2);
#endif /* kcg_comp_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg */
#endif /* kcg_use_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg */

#ifdef kcg_use_T_LevelTransition_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_LevelTransition_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_LevelTransition_Level_And_Mode_Types_Pkg(
  T_LevelTransition_Level_And_Mode_Types_Pkg *kcg_c1,
  T_LevelTransition_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_LevelTransition_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_LevelTransition_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_P027V1_section_enum_qdiff_T_TM_baseline2
#ifndef kcg_comp_P027V1_section_enum_qdiff_T_TM_baseline2
extern kcg_bool kcg_comp_P027V1_section_enum_qdiff_T_TM_baseline2(
  P027V1_section_enum_qdiff_T_TM_baseline2 *kcg_c1,
  P027V1_section_enum_qdiff_T_TM_baseline2 *kcg_c2);
#endif /* kcg_comp_P027V1_section_enum_qdiff_T_TM_baseline2 */
#endif /* kcg_use_P027V1_section_enum_qdiff_T_TM_baseline2 */

#ifdef kcg_use_t_Brake_t_SDMModelPkg
#ifndef kcg_comp_t_Brake_t_SDMModelPkg
extern kcg_bool kcg_comp_t_Brake_t_SDMModelPkg(
  t_Brake_t_SDMModelPkg *kcg_c1,
  t_Brake_t_SDMModelPkg *kcg_c2);
#endif /* kcg_comp_t_Brake_t_SDMModelPkg */
#endif /* kcg_use_t_Brake_t_SDMModelPkg */

#ifndef kcg_comp_mobileRegistrationContext_T_RCM_Types_Pkg
extern kcg_bool kcg_comp_mobileRegistrationContext_T_RCM_Types_Pkg(
  mobileRegistrationContext_T_RCM_Types_Pkg *kcg_c1,
  mobileRegistrationContext_T_RCM_Types_Pkg *kcg_c2);
#define kcg_use_mobileRegistrationContext_T_RCM_Types_Pkg
#endif /* kcg_comp_mobileRegistrationContext_T_RCM_Types_Pkg */

#ifndef kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg
extern kcg_bool kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg(
  LocWithInAcc_T_Obu_BasicTypes_Pkg *kcg_c1,
  LocWithInAcc_T_Obu_BasicTypes_Pkg *kcg_c2);
#define kcg_use_LocWithInAcc_T_Obu_BasicTypes_Pkg
#endif /* kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg */

#ifndef kcg_comp_RBC_Id_T_Common_Types_Pkg
extern kcg_bool kcg_comp_RBC_Id_T_Common_Types_Pkg(
  RBC_Id_T_Common_Types_Pkg *kcg_c1,
  RBC_Id_T_Common_Types_Pkg *kcg_c2);
#define kcg_use_RBC_Id_T_Common_Types_Pkg
#endif /* kcg_comp_RBC_Id_T_Common_Types_Pkg */

#ifdef kcg_use_centerOfBalisePosition_T_BG_Types_Pkg
#ifndef kcg_comp_centerOfBalisePosition_T_BG_Types_Pkg
extern kcg_bool kcg_comp_centerOfBalisePosition_T_BG_Types_Pkg(
  centerOfBalisePosition_T_BG_Types_Pkg *kcg_c1,
  centerOfBalisePosition_T_BG_Types_Pkg *kcg_c2);
#endif /* kcg_comp_centerOfBalisePosition_T_BG_Types_Pkg */
#endif /* kcg_use_centerOfBalisePosition_T_BG_Types_Pkg */

#ifndef kcg_comp_OdometrySpeeds_T_Obu_BasicTypes_Pkg
extern kcg_bool kcg_comp_OdometrySpeeds_T_Obu_BasicTypes_Pkg(
  OdometrySpeeds_T_Obu_BasicTypes_Pkg *kcg_c1,
  OdometrySpeeds_T_Obu_BasicTypes_Pkg *kcg_c2);
#define kcg_use_OdometrySpeeds_T_Obu_BasicTypes_Pkg
#endif /* kcg_comp_OdometrySpeeds_T_Obu_BasicTypes_Pkg */

#ifdef kcg_use_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg
#ifndef kcg_comp_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg
extern kcg_bool kcg_comp_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
  DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c1,
  DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg */
#endif /* kcg_use_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg */

#ifdef kcg_use_a_Brake_t_SDMConversionModelPkg
#ifndef kcg_comp_a_Brake_t_SDMConversionModelPkg
extern kcg_bool kcg_comp_a_Brake_t_SDMConversionModelPkg(
  a_Brake_t_SDMConversionModelPkg *kcg_c1,
  a_Brake_t_SDMConversionModelPkg *kcg_c2);
#endif /* kcg_comp_a_Brake_t_SDMConversionModelPkg */
#endif /* kcg_use_a_Brake_t_SDMConversionModelPkg */

#ifdef kcg_use_LocationBasedEvents_T_ProvidePositionReport_Pkg
#ifndef kcg_comp_LocationBasedEvents_T_ProvidePositionReport_Pkg
extern kcg_bool kcg_comp_LocationBasedEvents_T_ProvidePositionReport_Pkg(
  LocationBasedEvents_T_ProvidePositionReport_Pkg *kcg_c1,
  LocationBasedEvents_T_ProvidePositionReport_Pkg *kcg_c2);
#endif /* kcg_comp_LocationBasedEvents_T_ProvidePositionReport_Pkg */
#endif /* kcg_use_LocationBasedEvents_T_ProvidePositionReport_Pkg */

#ifdef kcg_use_P058_section_enum_T_TM
#ifndef kcg_comp_P058_section_enum_T_TM
extern kcg_bool kcg_comp_P058_section_enum_T_TM(
  P058_section_enum_T_TM *kcg_c1,
  P058_section_enum_T_TM *kcg_c2);
#endif /* kcg_comp_P058_section_enum_T_TM */
#endif /* kcg_use_P058_section_enum_T_TM */

#ifdef kcg_use_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg
#ifndef kcg_comp_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg
extern kcg_bool kcg_comp_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg(
  m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg *kcg_c1,
  m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg *kcg_c2);
#endif /* kcg_comp_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg */
#endif /* kcg_use_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg */

#ifdef kcg_use_struct_273626
#ifndef kcg_comp_struct_273626
extern kcg_bool kcg_comp_struct_273626(
  struct_273626 *kcg_c1,
  struct_273626 *kcg_c2);
#endif /* kcg_comp_struct_273626 */
#endif /* kcg_use_struct_273626 */

#ifdef kcg_use_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg
#ifndef kcg_comp_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg
extern kcg_bool kcg_comp_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
  DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c1,
  DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg */
#endif /* kcg_use_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifdef kcg_use_morcStatus_T_RCM_Session_Types_Pkg
#ifndef kcg_comp_morcStatus_T_RCM_Session_Types_Pkg
extern kcg_bool kcg_comp_morcStatus_T_RCM_Session_Types_Pkg(
  morcStatus_T_RCM_Session_Types_Pkg *kcg_c1,
  morcStatus_T_RCM_Session_Types_Pkg *kcg_c2);
#endif /* kcg_comp_morcStatus_T_RCM_Session_Types_Pkg */
#endif /* kcg_use_morcStatus_T_RCM_Session_Types_Pkg */

#ifdef kcg_use_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg
#ifndef kcg_comp_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg
extern kcg_bool kcg_comp_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg(
  safeRadioConnectionIndication_T_RCM_Session_Types_Pkg *kcg_c1,
  safeRadioConnectionIndication_T_RCM_Session_Types_Pkg *kcg_c2);
#endif /* kcg_comp_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg */
#endif /* kcg_use_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg */

#ifdef kcg_use_ParabolaArc_T_CalcBrakingCurves_types
#ifndef kcg_comp_ParabolaArc_T_CalcBrakingCurves_types
extern kcg_bool kcg_comp_ParabolaArc_T_CalcBrakingCurves_types(
  ParabolaArc_T_CalcBrakingCurves_types *kcg_c1,
  ParabolaArc_T_CalcBrakingCurves_types *kcg_c2);
#endif /* kcg_comp_ParabolaArc_T_CalcBrakingCurves_types */
#endif /* kcg_use_ParabolaArc_T_CalcBrakingCurves_types */

#ifdef kcg_use_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg
#ifndef kcg_comp_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg(
  P137_StopIfInStaffResponsible_T_Packet_Types_Pkg *kcg_c1,
  P137_StopIfInStaffResponsible_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg */
#endif /* kcg_use_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg */

#ifdef kcg_use_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store
#ifndef kcg_comp_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store
extern kcg_bool kcg_comp_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store(
  NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store *kcg_c1,
  NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store *kcg_c2);
#endif /* kcg_comp_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store */
#endif /* kcg_use_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store */

#ifdef kcg_use_P009_TM_TrainToTrack
#ifndef kcg_comp_P009_TM_TrainToTrack
extern kcg_bool kcg_comp_P009_TM_TrainToTrack(
  P009_TM_TrainToTrack *kcg_c1,
  P009_TM_TrainToTrack *kcg_c2);
#endif /* kcg_comp_P009_TM_TrainToTrack */
#endif /* kcg_use_P009_TM_TrainToTrack */

#ifdef kcg_use_DMI_DriverAck_T_DMI_Types_Pkg
#ifndef kcg_comp_DMI_DriverAck_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_DMI_DriverAck_T_DMI_Types_Pkg(
  DMI_DriverAck_T_DMI_Types_Pkg *kcg_c1,
  DMI_DriverAck_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_DriverAck_T_DMI_Types_Pkg */
#endif /* kcg_use_DMI_DriverAck_T_DMI_Types_Pkg */

#ifdef kcg_use_P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg
#ifndef kcg_comp_P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg(
  P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg *kcg_c1,
  P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg */
#endif /* kcg_use_P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg */

#ifdef kcg_use_T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg(
  T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_TIU_Input_msg_API_TIU_Pkg
#ifndef kcg_comp_TIU_Input_msg_API_TIU_Pkg
extern kcg_bool kcg_comp_TIU_Input_msg_API_TIU_Pkg(
  TIU_Input_msg_API_TIU_Pkg *kcg_c1,
  TIU_Input_msg_API_TIU_Pkg *kcg_c2);
#endif /* kcg_comp_TIU_Input_msg_API_TIU_Pkg */
#endif /* kcg_use_TIU_Input_msg_API_TIU_Pkg */

#ifdef kcg_use_TIU_Output_msg_API_TIU_Pkg
#ifndef kcg_comp_TIU_Output_msg_API_TIU_Pkg
extern kcg_bool kcg_comp_TIU_Output_msg_API_TIU_Pkg(
  TIU_Output_msg_API_TIU_Pkg *kcg_c1,
  TIU_Output_msg_API_TIU_Pkg *kcg_c2);
#endif /* kcg_comp_TIU_Output_msg_API_TIU_Pkg */
#endif /* kcg_use_TIU_Output_msg_API_TIU_Pkg */

#ifdef kcg_use_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg
#ifndef kcg_comp_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg
extern kcg_bool kcg_comp_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *kcg_c1,
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *kcg_c2);
#endif /* kcg_comp_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg */
#endif /* kcg_use_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_PT0_PositionReport_T_Packet_TrainTypes_Pkg
#ifndef kcg_comp_PT0_PositionReport_T_Packet_TrainTypes_Pkg
extern kcg_bool kcg_comp_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
  PT0_PositionReport_T_Packet_TrainTypes_Pkg *kcg_c1,
  PT0_PositionReport_T_Packet_TrainTypes_Pkg *kcg_c2);
#endif /* kcg_comp_PT0_PositionReport_T_Packet_TrainTypes_Pkg */
#endif /* kcg_use_PT0_PositionReport_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_struct_273993
#ifndef kcg_comp_struct_273993
extern kcg_bool kcg_comp_struct_273993(
  struct_273993 *kcg_c1,
  struct_273993 *kcg_c2);
#endif /* kcg_comp_struct_273993 */
#endif /* kcg_use_struct_273993 */

#ifdef kcg_use_IterPacket58_T_Packet_Types_Pkg
#ifndef kcg_comp_IterPacket58_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_IterPacket58_T_Packet_Types_Pkg(
  IterPacket58_T_Packet_Types_Pkg *kcg_c1,
  IterPacket58_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_IterPacket58_T_Packet_Types_Pkg */
#endif /* kcg_use_IterPacket58_T_Packet_Types_Pkg */

#ifdef kcg_use_DMI_train_length_T_DMI_Types_Pkg
#ifndef kcg_comp_DMI_train_length_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_DMI_train_length_T_DMI_Types_Pkg(
  DMI_train_length_T_DMI_Types_Pkg *kcg_c1,
  DMI_train_length_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_train_length_T_DMI_Types_Pkg */
#endif /* kcg_use_DMI_train_length_T_DMI_Types_Pkg */

#ifdef kcg_use_DMI_DriverRequest_T_DMI_Types_Pkg
#ifndef kcg_comp_DMI_DriverRequest_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_DMI_DriverRequest_T_DMI_Types_Pkg(
  DMI_DriverRequest_T_DMI_Types_Pkg *kcg_c1,
  DMI_DriverRequest_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_DriverRequest_T_DMI_Types_Pkg */
#endif /* kcg_use_DMI_DriverRequest_T_DMI_Types_Pkg */

#ifndef kcg_comp_mobileConnectionContext_T_RCM_Types_Pkg
extern kcg_bool kcg_comp_mobileConnectionContext_T_RCM_Types_Pkg(
  mobileConnectionContext_T_RCM_Types_Pkg *kcg_c1,
  mobileConnectionContext_T_RCM_Types_Pkg *kcg_c2);
#define kcg_use_mobileConnectionContext_T_RCM_Types_Pkg
#endif /* kcg_comp_mobileConnectionContext_T_RCM_Types_Pkg */

#ifdef kcg_use_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg
#ifndef kcg_comp_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg
extern kcg_bool kcg_comp_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg *kcg_c1,
  BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg *kcg_c2);
#endif /* kcg_comp_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg */
#endif /* kcg_use_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg */

#ifdef kcg_use_M_146_T_TM_radio_messages
#ifndef kcg_comp_M_146_T_TM_radio_messages
extern kcg_bool kcg_comp_M_146_T_TM_radio_messages(
  M_146_T_TM_radio_messages *kcg_c1,
  M_146_T_TM_radio_messages *kcg_c2);
#endif /* kcg_comp_M_146_T_TM_radio_messages */
#endif /* kcg_use_M_146_T_TM_radio_messages */

#ifdef kcg_use_trainData_internal_t_SDM_Types_Pkg
#ifndef kcg_comp_trainData_internal_t_SDM_Types_Pkg
extern kcg_bool kcg_comp_trainData_internal_t_SDM_Types_Pkg(
  trainData_internal_t_SDM_Types_Pkg *kcg_c1,
  trainData_internal_t_SDM_Types_Pkg *kcg_c2);
#endif /* kcg_comp_trainData_internal_t_SDM_Types_Pkg */
#endif /* kcg_use_trainData_internal_t_SDM_Types_Pkg */

#ifdef kcg_use__2_MovementAuthoritySection_t_TrackAtlasTypes
#ifndef kcg_comp__2_MovementAuthoritySection_t_TrackAtlasTypes
extern kcg_bool kcg_comp__2_MovementAuthoritySection_t_TrackAtlasTypes(
  _2_MovementAuthoritySection_t_TrackAtlasTypes *kcg_c1,
  _2_MovementAuthoritySection_t_TrackAtlasTypes *kcg_c2);
#endif /* kcg_comp__2_MovementAuthoritySection_t_TrackAtlasTypes */
#endif /* kcg_use__2_MovementAuthoritySection_t_TrackAtlasTypes */

#ifdef kcg_use_P21_GradientProfile_T_Packet_Types_Pkg
#ifndef kcg_comp_P21_GradientProfile_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_P21_GradientProfile_T_Packet_Types_Pkg(
  P21_GradientProfile_T_Packet_Types_Pkg *kcg_c1,
  P21_GradientProfile_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_P21_GradientProfile_T_Packet_Types_Pkg */
#endif /* kcg_use_P21_GradientProfile_T_Packet_Types_Pkg */

#ifdef kcg_use_connection_ids_T_Handover_Pkg
#ifndef kcg_comp_connection_ids_T_Handover_Pkg
extern kcg_bool kcg_comp_connection_ids_T_Handover_Pkg(
  connection_ids_T_Handover_Pkg *kcg_c1,
  connection_ids_T_Handover_Pkg *kcg_c2);
#endif /* kcg_comp_connection_ids_T_Handover_Pkg */
#endif /* kcg_use_connection_ids_T_Handover_Pkg */

#ifdef kcg_use_DMI_train_id_T_DMI_Types_Pkg
#ifndef kcg_comp_DMI_train_id_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_DMI_train_id_T_DMI_Types_Pkg(
  DMI_train_id_T_DMI_Types_Pkg *kcg_c1,
  DMI_train_id_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_train_id_T_DMI_Types_Pkg */
#endif /* kcg_use_DMI_train_id_T_DMI_Types_Pkg */

#ifdef kcg_use_av_Map_t_SDMConversionModelPkg
#ifndef kcg_comp_av_Map_t_SDMConversionModelPkg
extern kcg_bool kcg_comp_av_Map_t_SDMConversionModelPkg(
  av_Map_t_SDMConversionModelPkg *kcg_c1,
  av_Map_t_SDMConversionModelPkg *kcg_c2);
#endif /* kcg_comp_av_Map_t_SDMConversionModelPkg */
#endif /* kcg_use_av_Map_t_SDMConversionModelPkg */

#ifdef kcg_use_DMI_To_Modes_T_DMI_Types_Pkg
#ifndef kcg_comp_DMI_To_Modes_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_DMI_To_Modes_T_DMI_Types_Pkg(
  DMI_To_Modes_T_DMI_Types_Pkg *kcg_c1,
  DMI_To_Modes_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_To_Modes_T_DMI_Types_Pkg */
#endif /* kcg_use_DMI_To_Modes_T_DMI_Types_Pkg */

#ifdef kcg_use_nvkvint_T_Packet_Types_Pkg
#ifndef kcg_comp_nvkvint_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_nvkvint_T_Packet_Types_Pkg(
  nvkvint_T_Packet_Types_Pkg *kcg_c1,
  nvkvint_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_nvkvint_T_Packet_Types_Pkg */
#endif /* kcg_use_nvkvint_T_Packet_Types_Pkg */

#ifdef kcg_use_P021_section_enum_T_TM
#ifndef kcg_comp_P021_section_enum_T_TM
extern kcg_bool kcg_comp_P021_section_enum_T_TM(
  P021_section_enum_T_TM *kcg_c1,
  P021_section_enum_T_TM *kcg_c2);
#endif /* kcg_comp_P021_section_enum_T_TM */
#endif /* kcg_use_P021_section_enum_T_TM */

#ifdef kcg_use_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg
#ifndef kcg_comp_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg(
  P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg *kcg_c1,
  P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg */
#endif /* kcg_use_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg */

#ifdef kcg_use_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg
#ifndef kcg_comp_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg
extern kcg_bool kcg_comp_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg(
  PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg *kcg_c1,
  PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg *kcg_c2);
#endif /* kcg_comp_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg */
#endif /* kcg_use_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_struct_274389
#ifndef kcg_comp_struct_274389
extern kcg_bool kcg_comp_struct_274389(
  struct_274389 *kcg_c1,
  struct_274389 *kcg_c2);
#endif /* kcg_comp_struct_274389 */
#endif /* kcg_use_struct_274389 */

#ifdef kcg_use_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg(
  T_LevelTansitionInfo_Level_And_Mode_Types_Pkg *kcg_c1,
  T_LevelTansitionInfo_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_mv_Map_t_SDMConversionModelPkg
#ifndef kcg_comp_mv_Map_t_SDMConversionModelPkg
extern kcg_bool kcg_comp_mv_Map_t_SDMConversionModelPkg(
  mv_Map_t_SDMConversionModelPkg *kcg_c1,
  mv_Map_t_SDMConversionModelPkg *kcg_c2);
#endif /* kcg_comp_mv_Map_t_SDMConversionModelPkg */
#endif /* kcg_use_mv_Map_t_SDMConversionModelPkg */

#ifdef kcg_use_T_Data_From_STM_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_Data_From_STM_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_Data_From_STM_Level_And_Mode_Types_Pkg(
  T_Data_From_STM_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Data_From_STM_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_Data_From_STM_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_Data_From_STM_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg
#ifndef kcg_comp_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg
extern kcg_bool kcg_comp_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(
  PT5_TrainRunningNumber_Packet_TrainTypes_Pkg *kcg_c1,
  PT5_TrainRunningNumber_Packet_TrainTypes_Pkg *kcg_c2);
#endif /* kcg_comp_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg */
#endif /* kcg_use_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg */

#ifdef kcg_use_nationValuesForDMI_T_DMI_Types_Pkg
#ifndef kcg_comp_nationValuesForDMI_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_nationValuesForDMI_T_DMI_Types_Pkg(
  nationValuesForDMI_T_DMI_Types_Pkg *kcg_c1,
  nationValuesForDMI_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_nationValuesForDMI_T_DMI_Types_Pkg */
#endif /* kcg_use_nationValuesForDMI_T_DMI_Types_Pkg */

#ifdef kcg_use_mobileHWStatus_Type_MoRC_Pck
#ifndef kcg_comp_mobileHWStatus_Type_MoRC_Pck
extern kcg_bool kcg_comp_mobileHWStatus_Type_MoRC_Pck(
  mobileHWStatus_Type_MoRC_Pck *kcg_c1,
  mobileHWStatus_Type_MoRC_Pck *kcg_c2);
#endif /* kcg_comp_mobileHWStatus_Type_MoRC_Pck */
#endif /* kcg_use_mobileHWStatus_Type_MoRC_Pck */

#ifdef kcg_use_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg
#ifndef kcg_comp_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg
extern kcg_bool kcg_comp_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg *kcg_c1,
  BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg *kcg_c2);
#endif /* kcg_comp_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg */
#endif /* kcg_use_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg */

#ifdef kcg_use_Passenger_door_control_info_T_TIU_Types_Pkg
#ifndef kcg_comp_Passenger_door_control_info_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_Passenger_door_control_info_T_TIU_Types_Pkg(
  Passenger_door_control_info_T_TIU_Types_Pkg *kcg_c1,
  Passenger_door_control_info_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Passenger_door_control_info_T_TIU_Types_Pkg */
#endif /* kcg_use_Passenger_door_control_info_T_TIU_Types_Pkg */

#ifdef kcg_use_P046_OBU_T_TM
#ifndef kcg_comp_P046_OBU_T_TM
extern kcg_bool kcg_comp_P046_OBU_T_TM(
  P046_OBU_T_TM *kcg_c1,
  P046_OBU_T_TM *kcg_c2);
#endif /* kcg_comp_P046_OBU_T_TM */
#endif /* kcg_use_P046_OBU_T_TM */

#ifdef kcg_use_P027V1_OBU_T_TM_baseline2
#ifndef kcg_comp_P027V1_OBU_T_TM_baseline2
extern kcg_bool kcg_comp_P027V1_OBU_T_TM_baseline2(
  P027V1_OBU_T_TM_baseline2 *kcg_c1,
  P027V1_OBU_T_TM_baseline2 *kcg_c2);
#endif /* kcg_comp_P027V1_OBU_T_TM_baseline2 */
#endif /* kcg_use_P027V1_OBU_T_TM_baseline2 */

#ifdef kcg_use_ParabolaCurve_T_CalcBrakingCurves_types
#ifndef kcg_comp_ParabolaCurve_T_CalcBrakingCurves_types
extern kcg_bool kcg_comp_ParabolaCurve_T_CalcBrakingCurves_types(
  ParabolaCurve_T_CalcBrakingCurves_types *kcg_c1,
  ParabolaCurve_T_CalcBrakingCurves_types *kcg_c2);
#endif /* kcg_comp_ParabolaCurve_T_CalcBrakingCurves_types */
#endif /* kcg_use_ParabolaCurve_T_CalcBrakingCurves_types */

#ifdef kcg_use_Target_T_TargetManagement_types
#ifndef kcg_comp_Target_T_TargetManagement_types
extern kcg_bool kcg_comp_Target_T_TargetManagement_types(
  Target_T_TargetManagement_types *kcg_c1,
  Target_T_TargetManagement_types *kcg_c2);
#endif /* kcg_comp_Target_T_TargetManagement_types */
#endif /* kcg_use_Target_T_TargetManagement_types */

#ifdef kcg_use_P027V1_OBU_body_enum_T_TM_baseline2
#ifndef kcg_comp_P027V1_OBU_body_enum_T_TM_baseline2
extern kcg_bool kcg_comp_P027V1_OBU_body_enum_T_TM_baseline2(
  P027V1_OBU_body_enum_T_TM_baseline2 *kcg_c1,
  P027V1_OBU_body_enum_T_TM_baseline2 *kcg_c2);
#endif /* kcg_comp_P027V1_OBU_body_enum_T_TM_baseline2 */
#endif /* kcg_use_P027V1_OBU_body_enum_T_TM_baseline2 */

#ifdef kcg_use_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store
#ifndef kcg_comp_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store
extern kcg_bool kcg_comp_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
  NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store *kcg_c1,
  NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store *kcg_c2);
#endif /* kcg_comp_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store */
#endif /* kcg_use_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store */

#ifdef kcg_use_struct_274688
#ifndef kcg_comp_struct_274688
extern kcg_bool kcg_comp_struct_274688(
  struct_274688 *kcg_c1,
  struct_274688 *kcg_c2);
#endif /* kcg_comp_struct_274688 */
#endif /* kcg_use_struct_274688 */

#ifdef kcg_use_BG_Message_T_BG_Types_Pkg
#ifndef kcg_comp_BG_Message_T_BG_Types_Pkg
extern kcg_bool kcg_comp_BG_Message_T_BG_Types_Pkg(
  BG_Message_T_BG_Types_Pkg *kcg_c1,
  BG_Message_T_BG_Types_Pkg *kcg_c2);
#endif /* kcg_comp_BG_Message_T_BG_Types_Pkg */
#endif /* kcg_use_BG_Message_T_BG_Types_Pkg */

#ifdef kcg_use_Telegram_T_BG_Types_Pkg
#ifndef kcg_comp_Telegram_T_BG_Types_Pkg
extern kcg_bool kcg_comp_Telegram_T_BG_Types_Pkg(
  Telegram_T_BG_Types_Pkg *kcg_c1,
  Telegram_T_BG_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Telegram_T_BG_Types_Pkg */
#endif /* kcg_use_Telegram_T_BG_Types_Pkg */

#ifdef kcg_use_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg
#ifndef kcg_comp_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg
extern kcg_bool kcg_comp_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg(
  ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg *kcg_c1,
  ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg *kcg_c2);
#endif /* kcg_comp_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg */
#endif /* kcg_use_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg */

#ifdef kcg_use_ErrorMessage_T_ProvidePositionReport_Pkg
#ifndef kcg_comp_ErrorMessage_T_ProvidePositionReport_Pkg
extern kcg_bool kcg_comp_ErrorMessage_T_ProvidePositionReport_Pkg(
  ErrorMessage_T_ProvidePositionReport_Pkg *kcg_c1,
  ErrorMessage_T_ProvidePositionReport_Pkg *kcg_c2);
#endif /* kcg_comp_ErrorMessage_T_ProvidePositionReport_Pkg */
#endif /* kcg_use_ErrorMessage_T_ProvidePositionReport_Pkg */

#ifdef kcg_use_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg
#ifndef kcg_comp_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg
extern kcg_bool kcg_comp_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
  DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c1,
  DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg */
#endif /* kcg_use_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg */

#ifdef kcg_use_Type_I_train_commands_T_TIU_Types_Pkg
#ifndef kcg_comp_Type_I_train_commands_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_Type_I_train_commands_T_TIU_Types_Pkg(
  Type_I_train_commands_T_TIU_Types_Pkg *kcg_c1,
  Type_I_train_commands_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Type_I_train_commands_T_TIU_Types_Pkg */
#endif /* kcg_use_Type_I_train_commands_T_TIU_Types_Pkg */

#ifdef kcg_use_struct_274806
#ifndef kcg_comp_struct_274806
extern kcg_bool kcg_comp_struct_274806(
  struct_274806 *kcg_c1,
  struct_274806 *kcg_c2);
#endif /* kcg_comp_struct_274806 */
#endif /* kcg_use_struct_274806 */

#ifdef kcg_use_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg(
  T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_struct_274867
#ifndef kcg_comp_struct_274867
extern kcg_bool kcg_comp_struct_274867(
  struct_274867 *kcg_c1,
  struct_274867 *kcg_c2);
#endif /* kcg_comp_struct_274867 */
#endif /* kcg_use_struct_274867 */

#ifdef kcg_use_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg(
  T_ERTMS_capabilities_Level_And_Mode_Types_Pkg *kcg_c1,
  T_ERTMS_capabilities_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_AccuDistanceProfileMA_TA_MA_new
#ifndef kcg_comp_AccuDistanceProfileMA_TA_MA_new
extern kcg_bool kcg_comp_AccuDistanceProfileMA_TA_MA_new(
  AccuDistanceProfileMA_TA_MA_new *kcg_c1,
  AccuDistanceProfileMA_TA_MA_new *kcg_c2);
#endif /* kcg_comp_AccuDistanceProfileMA_TA_MA_new */
#endif /* kcg_use_AccuDistanceProfileMA_TA_MA_new */

#ifdef kcg_use_struct_274908
#ifndef kcg_comp_struct_274908
extern kcg_bool kcg_comp_struct_274908(
  struct_274908 *kcg_c1,
  struct_274908 *kcg_c2);
#endif /* kcg_comp_struct_274908 */
#endif /* kcg_use_struct_274908 */

#ifdef kcg_use_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg
#ifndef kcg_comp_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg
extern kcg_bool kcg_comp_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg(
  DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg *kcg_c1,
  DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg */
#endif /* kcg_use_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg */

#ifdef kcg_use_Brake_pressure_value_T_TIU_Types_Pkg
#ifndef kcg_comp_Brake_pressure_value_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_Brake_pressure_value_T_TIU_Types_Pkg(
  Brake_pressure_value_T_TIU_Types_Pkg *kcg_c1,
  Brake_pressure_value_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Brake_pressure_value_T_TIU_Types_Pkg */
#endif /* kcg_use_Brake_pressure_value_T_TIU_Types_Pkg */

#ifdef kcg_use_Diff_T_Packet_Types_Pkg
#ifndef kcg_comp_Diff_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_Diff_T_Packet_Types_Pkg(
  Diff_T_Packet_Types_Pkg *kcg_c1,
  Diff_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Diff_T_Packet_Types_Pkg */
#endif /* kcg_use_Diff_T_Packet_Types_Pkg */

#ifdef kcg_use_DMI_trackConditionElement_T_DMI_Types_Pkg
#ifndef kcg_comp_DMI_trackConditionElement_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_DMI_trackConditionElement_T_DMI_Types_Pkg(
  DMI_trackConditionElement_T_DMI_Types_Pkg *kcg_c1,
  DMI_trackConditionElement_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_trackConditionElement_T_DMI_Types_Pkg */
#endif /* kcg_use_DMI_trackConditionElement_T_DMI_Types_Pkg */

#ifdef kcg_use_struct_275034
#ifndef kcg_comp_struct_275034
extern kcg_bool kcg_comp_struct_275034(
  struct_275034 *kcg_c1,
  struct_275034 *kcg_c2);
#endif /* kcg_comp_struct_275034 */
#endif /* kcg_use_struct_275034 */

#ifdef kcg_use_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg
#ifndef kcg_comp_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg
extern kcg_bool kcg_comp_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg(
  positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg *kcg_c1,
  positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg *kcg_c2);
#endif /* kcg_comp_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg */
#endif /* kcg_use_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg */

#ifdef kcg_use_T_Data_From_F2_functions_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_Data_From_F2_functions_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_Data_From_F2_functions_Level_And_Mode_Types_Pkg(
  T_Data_From_F2_functions_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Data_From_F2_functions_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_Data_From_F2_functions_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_Data_From_F2_functions_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_RadioManagement_T_API_RadioCommunication_Pkg
#ifndef kcg_comp_RadioManagement_T_API_RadioCommunication_Pkg
extern kcg_bool kcg_comp_RadioManagement_T_API_RadioCommunication_Pkg(
  RadioManagement_T_API_RadioCommunication_Pkg *kcg_c1,
  RadioManagement_T_API_RadioCommunication_Pkg *kcg_c2);
#endif /* kcg_comp_RadioManagement_T_API_RadioCommunication_Pkg */
#endif /* kcg_use_RadioManagement_T_API_RadioCommunication_Pkg */

#ifdef kcg_use_Brake_inhibition_command_T_TIU_Types_Pkg
#ifndef kcg_comp_Brake_inhibition_command_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_Brake_inhibition_command_T_TIU_Types_Pkg(
  Brake_inhibition_command_T_TIU_Types_Pkg *kcg_c1,
  Brake_inhibition_command_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Brake_inhibition_command_T_TIU_Types_Pkg */
#endif /* kcg_use_Brake_inhibition_command_T_TIU_Types_Pkg */

#ifdef kcg_use_TSM_revokeCond_T_SDM_Commands_Pkg
#ifndef kcg_comp_TSM_revokeCond_T_SDM_Commands_Pkg
extern kcg_bool kcg_comp_TSM_revokeCond_T_SDM_Commands_Pkg(
  TSM_revokeCond_T_SDM_Commands_Pkg *kcg_c1,
  TSM_revokeCond_T_SDM_Commands_Pkg *kcg_c2);
#endif /* kcg_comp_TSM_revokeCond_T_SDM_Commands_Pkg */
#endif /* kcg_use_TSM_revokeCond_T_SDM_Commands_Pkg */

#ifdef kcg_use_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg
#ifndef kcg_comp_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg
extern kcg_bool kcg_comp_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg(
  DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c1,
  DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg */
#endif /* kcg_use_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifdef kcg_use_T_Mode_Level_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_Mode_Level_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_Mode_Level_Level_And_Mode_Types_Pkg(
  T_Mode_Level_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Mode_Level_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_Mode_Level_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_Mode_Level_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_P63_BaliseInSRAuthority_T_Packet_Types_Pkg
#ifndef kcg_comp_P63_BaliseInSRAuthority_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_P63_BaliseInSRAuthority_T_Packet_Types_Pkg(
  P63_BaliseInSRAuthority_T_Packet_Types_Pkg *kcg_c1,
  P63_BaliseInSRAuthority_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_P63_BaliseInSRAuthority_T_Packet_Types_Pkg */
#endif /* kcg_use_P63_BaliseInSRAuthority_T_Packet_Types_Pkg */

#ifdef kcg_use_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg(
  T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg
#ifndef kcg_comp_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg
extern kcg_bool kcg_comp_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg(
  DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c1,
  DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg */
#endif /* kcg_use_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg */

#ifdef kcg_use_struct_275228
#ifndef kcg_comp_struct_275228
extern kcg_bool kcg_comp_struct_275228(
  struct_275228 *kcg_c1,
  struct_275228 *kcg_c2);
#endif /* kcg_comp_struct_275228 */
#endif /* kcg_use_struct_275228 */

#ifdef kcg_use_DP_or_OL_t_TrackAtlasTypes
#ifndef kcg_comp_DP_or_OL_t_TrackAtlasTypes
extern kcg_bool kcg_comp_DP_or_OL_t_TrackAtlasTypes(
  DP_or_OL_t_TrackAtlasTypes *kcg_c1,
  DP_or_OL_t_TrackAtlasTypes *kcg_c2);
#endif /* kcg_comp_DP_or_OL_t_TrackAtlasTypes */
#endif /* kcg_use_DP_or_OL_t_TrackAtlasTypes */

#ifdef kcg_use_probesBalises_T_xdebugSupport_Pkg
#ifndef kcg_comp_probesBalises_T_xdebugSupport_Pkg
extern kcg_bool kcg_comp_probesBalises_T_xdebugSupport_Pkg(
  probesBalises_T_xdebugSupport_Pkg *kcg_c1,
  probesBalises_T_xdebugSupport_Pkg *kcg_c2);
#endif /* kcg_comp_probesBalises_T_xdebugSupport_Pkg */
#endif /* kcg_use_probesBalises_T_xdebugSupport_Pkg */

#ifdef kcg_use_TargetCollection_T_TargetManagement_types
#ifndef kcg_comp_TargetCollection_T_TargetManagement_types
extern kcg_bool kcg_comp_TargetCollection_T_TargetManagement_types(
  TargetCollection_T_TargetManagement_types *kcg_c1,
  TargetCollection_T_TargetManagement_types *kcg_c2);
#endif /* kcg_comp_TargetCollection_T_TargetManagement_types */
#endif /* kcg_use_TargetCollection_T_TargetManagement_types */

#ifdef kcg_use_struct_275282
#ifndef kcg_comp_struct_275282
extern kcg_bool kcg_comp_struct_275282(
  struct_275282 *kcg_c1,
  struct_275282 *kcg_c2);
#endif /* kcg_comp_struct_275282 */
#endif /* kcg_use_struct_275282 */

#ifdef kcg_use_struct_275303
#ifndef kcg_comp_struct_275303
extern kcg_bool kcg_comp_struct_275303(
  struct_275303 *kcg_c1,
  struct_275303 *kcg_c2);
#endif /* kcg_comp_struct_275303 */
#endif /* kcg_use_struct_275303 */

#ifdef kcg_use_CurveCollection_T_CalcBrakingCurves_types
#ifndef kcg_comp_CurveCollection_T_CalcBrakingCurves_types
extern kcg_bool kcg_comp_CurveCollection_T_CalcBrakingCurves_types(
  CurveCollection_T_CalcBrakingCurves_types *kcg_c1,
  CurveCollection_T_CalcBrakingCurves_types *kcg_c2);
#endif /* kcg_comp_CurveCollection_T_CalcBrakingCurves_types */
#endif /* kcg_use_CurveCollection_T_CalcBrakingCurves_types */

#ifdef kcg_use_DataForModeAndLevel_t_TrackAtlasTypes
#ifndef kcg_comp_DataForModeAndLevel_t_TrackAtlasTypes
extern kcg_bool kcg_comp_DataForModeAndLevel_t_TrackAtlasTypes(
  DataForModeAndLevel_t_TrackAtlasTypes *kcg_c1,
  DataForModeAndLevel_t_TrackAtlasTypes *kcg_c2);
#endif /* kcg_comp_DataForModeAndLevel_t_TrackAtlasTypes */
#endif /* kcg_use_DataForModeAndLevel_t_TrackAtlasTypes */

#ifdef kcg_use_RBC_Communication_T_ProvidePositionReport_Pkg
#ifndef kcg_comp_RBC_Communication_T_ProvidePositionReport_Pkg
extern kcg_bool kcg_comp_RBC_Communication_T_ProvidePositionReport_Pkg(
  RBC_Communication_T_ProvidePositionReport_Pkg *kcg_c1,
  RBC_Communication_T_ProvidePositionReport_Pkg *kcg_c2);
#endif /* kcg_comp_RBC_Communication_T_ProvidePositionReport_Pkg */
#endif /* kcg_use_RBC_Communication_T_ProvidePositionReport_Pkg */

#ifdef kcg_use_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg
#ifndef kcg_comp_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg
extern kcg_bool kcg_comp_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
  DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c1,
  DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg */
#endif /* kcg_use_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg */

#ifdef kcg_use_TIU_commandStatus_T_TIU_Types_Pkg
#ifndef kcg_comp_TIU_commandStatus_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_TIU_commandStatus_T_TIU_Types_Pkg(
  TIU_commandStatus_T_TIU_Types_Pkg *kcg_c1,
  TIU_commandStatus_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_TIU_commandStatus_T_TIU_Types_Pkg */
#endif /* kcg_use_TIU_commandStatus_T_TIU_Types_Pkg */

#ifdef kcg_use_M_voltage_T_TIU_Types_Pkg
#ifndef kcg_comp_M_voltage_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_M_voltage_T_TIU_Types_Pkg(
  M_voltage_T_TIU_Types_Pkg *kcg_c1,
  M_voltage_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_M_voltage_T_TIU_Types_Pkg */
#endif /* kcg_use_M_voltage_T_TIU_Types_Pkg */

#ifdef kcg_use_M_TrainTrack_Message_T_TM_radio_messages
#ifndef kcg_comp_M_TrainTrack_Message_T_TM_radio_messages
extern kcg_bool kcg_comp_M_TrainTrack_Message_T_TM_radio_messages(
  M_TrainTrack_Message_T_TM_radio_messages *kcg_c1,
  M_TrainTrack_Message_T_TM_radio_messages *kcg_c2);
#endif /* kcg_comp_M_TrainTrack_Message_T_TM_radio_messages */
#endif /* kcg_use_M_TrainTrack_Message_T_TM_radio_messages */

#ifdef kcg_use_T_AnnouncedLevel_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_AnnouncedLevel_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_AnnouncedLevel_Level_And_Mode_Types_Pkg(
  T_AnnouncedLevel_Level_And_Mode_Types_Pkg *kcg_c1,
  T_AnnouncedLevel_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_AnnouncedLevel_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_AnnouncedLevel_Level_And_Mode_Types_Pkg */

#ifndef kcg_comp_OdometryLocations_T_Obu_BasicTypes_Pkg
extern kcg_bool kcg_comp_OdometryLocations_T_Obu_BasicTypes_Pkg(
  OdometryLocations_T_Obu_BasicTypes_Pkg *kcg_c1,
  OdometryLocations_T_Obu_BasicTypes_Pkg *kcg_c2);
#define kcg_use_OdometryLocations_T_Obu_BasicTypes_Pkg
#endif /* kcg_comp_OdometryLocations_T_Obu_BasicTypes_Pkg */

#ifdef kcg_use_mobileConnectionCmd_T_RCM_Types_Pkg
#ifndef kcg_comp_mobileConnectionCmd_T_RCM_Types_Pkg
extern kcg_bool kcg_comp_mobileConnectionCmd_T_RCM_Types_Pkg(
  mobileConnectionCmd_T_RCM_Types_Pkg *kcg_c1,
  mobileConnectionCmd_T_RCM_Types_Pkg *kcg_c2);
#endif /* kcg_comp_mobileConnectionCmd_T_RCM_Types_Pkg */
#endif /* kcg_use_mobileConnectionCmd_T_RCM_Types_Pkg */

#ifdef kcg_use_trainData_Trigger_T_trainData_Types_pkg
#ifndef kcg_comp_trainData_Trigger_T_trainData_Types_pkg
extern kcg_bool kcg_comp_trainData_Trigger_T_trainData_Types_pkg(
  trainData_Trigger_T_trainData_Types_pkg *kcg_c1,
  trainData_Trigger_T_trainData_Types_pkg *kcg_c2);
#endif /* kcg_comp_trainData_Trigger_T_trainData_Types_pkg */
#endif /* kcg_use_trainData_Trigger_T_trainData_Types_pkg */

#ifdef kcg_use_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg
#ifndef kcg_comp_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg
extern kcg_bool kcg_comp_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
  DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c1,
  DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg */
#endif /* kcg_use_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifdef kcg_use_P45_RadioNetworkRegistration_T_Packet_Types_Pkg
#ifndef kcg_comp_P45_RadioNetworkRegistration_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg *kcg_c1,
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_P45_RadioNetworkRegistration_T_Packet_Types_Pkg */
#endif /* kcg_use_P45_RadioNetworkRegistration_T_Packet_Types_Pkg */

#ifdef kcg_use_struct_275675
#ifndef kcg_comp_struct_275675
extern kcg_bool kcg_comp_struct_275675(
  struct_275675 *kcg_c1,
  struct_275675 *kcg_c2);
#endif /* kcg_comp_struct_275675 */
#endif /* kcg_use_struct_275675 */

#ifdef kcg_use_Gradient_section_t_TrackAtlasTypes
#ifndef kcg_comp_Gradient_section_t_TrackAtlasTypes
extern kcg_bool kcg_comp_Gradient_section_t_TrackAtlasTypes(
  Gradient_section_t_TrackAtlasTypes *kcg_c1,
  Gradient_section_t_TrackAtlasTypes *kcg_c2);
#endif /* kcg_comp_Gradient_section_t_TrackAtlasTypes */
#endif /* kcg_use_Gradient_section_t_TrackAtlasTypes */

#ifdef kcg_use_DMI_trackCondition_T_DMI_Types_Pkg
#ifndef kcg_comp_DMI_trackCondition_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_DMI_trackCondition_T_DMI_Types_Pkg(
  DMI_trackCondition_T_DMI_Types_Pkg *kcg_c1,
  DMI_trackCondition_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_trackCondition_T_DMI_Types_Pkg */
#endif /* kcg_use_DMI_trackCondition_T_DMI_Types_Pkg */

#ifdef kcg_use_DMI_gradientProfile_T_DMI_Types_Pkg
#ifndef kcg_comp_DMI_gradientProfile_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_DMI_gradientProfile_T_DMI_Types_Pkg(
  DMI_gradientProfile_T_DMI_Types_Pkg *kcg_c1,
  DMI_gradientProfile_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_gradientProfile_T_DMI_Types_Pkg */
#endif /* kcg_use_DMI_gradientProfile_T_DMI_Types_Pkg */

#ifdef kcg_use_DMI_speedProfile_T_DMI_Types_Pkg
#ifndef kcg_comp_DMI_speedProfile_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_DMI_speedProfile_T_DMI_Types_Pkg(
  DMI_speedProfile_T_DMI_Types_Pkg *kcg_c1,
  DMI_speedProfile_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_speedProfile_T_DMI_Types_Pkg */
#endif /* kcg_use_DMI_speedProfile_T_DMI_Types_Pkg */

#ifdef kcg_use_DMI_LevelList_T_DMI_Types_Pkg
#ifndef kcg_comp_DMI_LevelList_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_DMI_LevelList_T_DMI_Types_Pkg(
  DMI_LevelList_T_DMI_Types_Pkg *kcg_c1,
  DMI_LevelList_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_LevelList_T_DMI_Types_Pkg */
#endif /* kcg_use_DMI_LevelList_T_DMI_Types_Pkg */

#ifdef kcg_use_av_MergedMap_t_SDMConversionModelPkg
#ifndef kcg_comp_av_MergedMap_t_SDMConversionModelPkg
extern kcg_bool kcg_comp_av_MergedMap_t_SDMConversionModelPkg(
  av_MergedMap_t_SDMConversionModelPkg *kcg_c1,
  av_MergedMap_t_SDMConversionModelPkg *kcg_c2);
#endif /* kcg_comp_av_MergedMap_t_SDMConversionModelPkg */
#endif /* kcg_use_av_MergedMap_t_SDMConversionModelPkg */

#ifdef kcg_use_P005_TM_TrainToTrack
#ifndef kcg_comp_P005_TM_TrainToTrack
extern kcg_bool kcg_comp_P005_TM_TrainToTrack(
  P005_TM_TrainToTrack *kcg_c1,
  P005_TM_TrainToTrack *kcg_c2);
#endif /* kcg_comp_P005_TM_TrainToTrack */
#endif /* kcg_use_P005_TM_TrainToTrack */

#ifdef kcg_use_TIU_trainStatus_T_TIU_Types_Pkg
#ifndef kcg_comp_TIU_trainStatus_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_TIU_trainStatus_T_TIU_Types_Pkg(
  TIU_trainStatus_T_TIU_Types_Pkg *kcg_c1,
  TIU_trainStatus_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_TIU_trainStatus_T_TIU_Types_Pkg */
#endif /* kcg_use_TIU_trainStatus_T_TIU_Types_Pkg */

#ifdef kcg_use_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg
#ifndef kcg_comp_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg
extern kcg_bool kcg_comp_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
  DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c1,
  DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg */
#endif /* kcg_use_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg */

#ifdef kcg_use_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg
#ifndef kcg_comp_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg
extern kcg_bool kcg_comp_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg(
  DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c1,
  DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg */
#endif /* kcg_use_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg */

#ifdef kcg_use_TrainToTrackStatus_T_BG_Types_Pkg
#ifndef kcg_comp_TrainToTrackStatus_T_BG_Types_Pkg
extern kcg_bool kcg_comp_TrainToTrackStatus_T_BG_Types_Pkg(
  TrainToTrackStatus_T_BG_Types_Pkg *kcg_c1,
  TrainToTrackStatus_T_BG_Types_Pkg *kcg_c2);
#endif /* kcg_comp_TrainToTrackStatus_T_BG_Types_Pkg */
#endif /* kcg_use_TrainToTrackStatus_T_BG_Types_Pkg */

#ifdef kcg_use_DMI_level_T_DMI_Types_Pkg
#ifndef kcg_comp_DMI_level_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_DMI_level_T_DMI_Types_Pkg(
  DMI_level_T_DMI_Types_Pkg *kcg_c1,
  DMI_level_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_level_T_DMI_Types_Pkg */
#endif /* kcg_use_DMI_level_T_DMI_Types_Pkg */

#ifdef kcg_use_MRSP_reduction_acc_TA_Export
#ifndef kcg_comp_MRSP_reduction_acc_TA_Export
extern kcg_bool kcg_comp_MRSP_reduction_acc_TA_Export(
  MRSP_reduction_acc_TA_Export *kcg_c1,
  MRSP_reduction_acc_TA_Export *kcg_c2);
#endif /* kcg_comp_MRSP_reduction_acc_TA_Export */
#endif /* kcg_use_MRSP_reduction_acc_TA_Export */

#ifdef kcg_use_p45_radioNetworkRegistration_T_RCM_MsgTypes_Pkg
#ifndef kcg_comp_p45_radioNetworkRegistration_T_RCM_MsgTypes_Pkg
extern kcg_bool kcg_comp_p45_radioNetworkRegistration_T_RCM_MsgTypes_Pkg(
  p45_radioNetworkRegistration_T_RCM_MsgTypes_Pkg *kcg_c1,
  p45_radioNetworkRegistration_T_RCM_MsgTypes_Pkg *kcg_c2);
#endif /* kcg_comp_p45_radioNetworkRegistration_T_RCM_MsgTypes_Pkg */
#endif /* kcg_use_p45_radioNetworkRegistration_T_RCM_MsgTypes_Pkg */

#ifdef kcg_use_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg
#ifndef kcg_comp_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg
extern kcg_bool kcg_comp_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *kcg_c1,
  refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *kcg_c2);
#endif /* kcg_comp_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg */
#endif /* kcg_use_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg */

#ifdef kcg_use_API_RadioMsgHeader_T_API_Msg_Pkg
#ifndef kcg_comp_API_RadioMsgHeader_T_API_Msg_Pkg
extern kcg_bool kcg_comp_API_RadioMsgHeader_T_API_Msg_Pkg(
  API_RadioMsgHeader_T_API_Msg_Pkg *kcg_c1,
  API_RadioMsgHeader_T_API_Msg_Pkg *kcg_c2);
#endif /* kcg_comp_API_RadioMsgHeader_T_API_Msg_Pkg */
#endif /* kcg_use_API_RadioMsgHeader_T_API_Msg_Pkg */

#ifdef kcg_use_API_TelegramHeader_T_API_Msg_Pkg
#ifndef kcg_comp_API_TelegramHeader_T_API_Msg_Pkg
extern kcg_bool kcg_comp_API_TelegramHeader_T_API_Msg_Pkg(
  API_TelegramHeader_T_API_Msg_Pkg *kcg_c1,
  API_TelegramHeader_T_API_Msg_Pkg *kcg_c2);
#endif /* kcg_comp_API_TelegramHeader_T_API_Msg_Pkg */
#endif /* kcg_use_API_TelegramHeader_T_API_Msg_Pkg */

#ifdef kcg_use_TrackSide_ForCheck_T_Common_Types_Pkg
#ifndef kcg_comp_TrackSide_ForCheck_T_Common_Types_Pkg
extern kcg_bool kcg_comp_TrackSide_ForCheck_T_Common_Types_Pkg(
  TrackSide_ForCheck_T_Common_Types_Pkg *kcg_c1,
  TrackSide_ForCheck_T_Common_Types_Pkg *kcg_c2);
#endif /* kcg_comp_TrackSide_ForCheck_T_Common_Types_Pkg */
#endif /* kcg_use_TrackSide_ForCheck_T_Common_Types_Pkg */

#ifdef kcg_use_BCAccumulator_type_CalcBrakingCurves_Pkg
#ifndef kcg_comp_BCAccumulator_type_CalcBrakingCurves_Pkg
extern kcg_bool kcg_comp_BCAccumulator_type_CalcBrakingCurves_Pkg(
  BCAccumulator_type_CalcBrakingCurves_Pkg *kcg_c1,
  BCAccumulator_type_CalcBrakingCurves_Pkg *kcg_c2);
#endif /* kcg_comp_BCAccumulator_type_CalcBrakingCurves_Pkg */
#endif /* kcg_use_BCAccumulator_type_CalcBrakingCurves_Pkg */

#ifdef kcg_use__4_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg
#ifndef kcg_comp__4_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg
extern kcg_bool kcg_comp__4_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg(
  _4_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c1,
  _4_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c2);
#endif /* kcg_comp__4_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg */
#endif /* kcg_use__4_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifdef kcg_use_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg
#ifndef kcg_comp_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg
extern kcg_bool kcg_comp_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg(
  DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c1,
  DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg */
#endif /* kcg_use_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifdef kcg_use_mobileRegistrationCmd_T_RCM_Types_Pkg
#ifndef kcg_comp_mobileRegistrationCmd_T_RCM_Types_Pkg
extern kcg_bool kcg_comp_mobileRegistrationCmd_T_RCM_Types_Pkg(
  mobileRegistrationCmd_T_RCM_Types_Pkg *kcg_c1,
  mobileRegistrationCmd_T_RCM_Types_Pkg *kcg_c2);
#endif /* kcg_comp_mobileRegistrationCmd_T_RCM_Types_Pkg */
#endif /* kcg_use_mobileRegistrationCmd_T_RCM_Types_Pkg */

#ifdef kcg_use_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg
#ifndef kcg_comp_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg
extern kcg_bool kcg_comp_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
  DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c1,
  DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg */
#endif /* kcg_use_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifdef kcg_use_T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg(
  T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_movementAuthorityForDMI_T_DMI_Types_Pkg
#ifndef kcg_comp_movementAuthorityForDMI_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_movementAuthorityForDMI_T_DMI_Types_Pkg(
  movementAuthorityForDMI_T_DMI_Types_Pkg *kcg_c1,
  movementAuthorityForDMI_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_movementAuthorityForDMI_T_DMI_Types_Pkg */
#endif /* kcg_use_movementAuthorityForDMI_T_DMI_Types_Pkg */

#ifdef kcg_use_struct_276076
#ifndef kcg_comp_struct_276076
extern kcg_bool kcg_comp_struct_276076(
  struct_276076 *kcg_c1,
  struct_276076 *kcg_c2);
#endif /* kcg_comp_struct_276076 */
#endif /* kcg_use_struct_276076 */

#ifdef kcg_use_nvkrint_T_Packet_Types_Pkg
#ifndef kcg_comp_nvkrint_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_nvkrint_T_Packet_Types_Pkg(
  nvkrint_T_Packet_Types_Pkg *kcg_c1,
  nvkrint_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_nvkrint_T_Packet_Types_Pkg */
#endif /* kcg_use_nvkrint_T_Packet_Types_Pkg */

#ifdef kcg_use_sessionCmd_T_RCM_Session_Types_Pkg
#ifndef kcg_comp_sessionCmd_T_RCM_Session_Types_Pkg
extern kcg_bool kcg_comp_sessionCmd_T_RCM_Session_Types_Pkg(
  sessionCmd_T_RCM_Session_Types_Pkg *kcg_c1,
  sessionCmd_T_RCM_Session_Types_Pkg *kcg_c2);
#endif /* kcg_comp_sessionCmd_T_RCM_Session_Types_Pkg */
#endif /* kcg_use_sessionCmd_T_RCM_Session_Types_Pkg */

#ifdef kcg_use_trainPositionInfo_T_TrainPosition_Types_Pck
#ifndef kcg_comp_trainPositionInfo_T_TrainPosition_Types_Pck
extern kcg_bool kcg_comp_trainPositionInfo_T_TrainPosition_Types_Pck(
  trainPositionInfo_T_TrainPosition_Types_Pck *kcg_c1,
  trainPositionInfo_T_TrainPosition_Types_Pck *kcg_c2);
#endif /* kcg_comp_trainPositionInfo_T_TrainPosition_Types_Pck */
#endif /* kcg_use_trainPositionInfo_T_TrainPosition_Types_Pck */

#ifdef kcg_use_P003V1_OBU_T_TM_baseline2
#ifndef kcg_comp_P003V1_OBU_T_TM_baseline2
extern kcg_bool kcg_comp_P003V1_OBU_T_TM_baseline2(
  P003V1_OBU_T_TM_baseline2 *kcg_c1,
  P003V1_OBU_T_TM_baseline2 *kcg_c2);
#endif /* kcg_comp_P003V1_OBU_T_TM_baseline2 */
#endif /* kcg_use_P003V1_OBU_T_TM_baseline2 */

#ifdef kcg_use_P011_TM_TrainToTrack
#ifndef kcg_comp_P011_TM_TrainToTrack
extern kcg_bool kcg_comp_P011_TM_TrainToTrack(
  P011_TM_TrainToTrack *kcg_c1,
  P011_TM_TrainToTrack *kcg_c2);
#endif /* kcg_comp_P011_TM_TrainToTrack */
#endif /* kcg_use_P011_TM_TrainToTrack */

#ifdef kcg_use_P001_TM_TrainToTrack
#ifndef kcg_comp_P001_TM_TrainToTrack
extern kcg_bool kcg_comp_P001_TM_TrainToTrack(
  P001_TM_TrainToTrack *kcg_c1,
  P001_TM_TrainToTrack *kcg_c2);
#endif /* kcg_comp_P001_TM_TrainToTrack */
#endif /* kcg_use_P001_TM_TrainToTrack */

#ifdef kcg_use_P000_TM_TrainToTrack
#ifndef kcg_comp_P000_TM_TrainToTrack
extern kcg_bool kcg_comp_P000_TM_TrainToTrack(
  P000_TM_TrainToTrack *kcg_c1,
  P000_TM_TrainToTrack *kcg_c2);
#endif /* kcg_comp_P000_TM_TrainToTrack */
#endif /* kcg_use_P000_TM_TrainToTrack */

#ifdef kcg_use_P58_PositionReportParameters_T_Packet_Types_Pkg
#ifndef kcg_comp_P58_PositionReportParameters_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_P58_PositionReportParameters_T_Packet_Types_Pkg(
  P58_PositionReportParameters_T_Packet_Types_Pkg *kcg_c1,
  P58_PositionReportParameters_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_P58_PositionReportParameters_T_Packet_Types_Pkg */
#endif /* kcg_use_P58_PositionReportParameters_T_Packet_Types_Pkg */

#ifdef kcg_use_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg
#ifndef kcg_comp_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg
extern kcg_bool kcg_comp_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(
  PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg *kcg_c1,
  PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg *kcg_c2);
#endif /* kcg_comp_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg */
#endif /* kcg_use_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_P003_OBU_T_TM
#ifndef kcg_comp_P003_OBU_T_TM
extern kcg_bool kcg_comp_P003_OBU_T_TM(
  P003_OBU_T_TM *kcg_c1,
  P003_OBU_T_TM *kcg_c2);
#endif /* kcg_comp_P003_OBU_T_TM */
#endif /* kcg_use_P003_OBU_T_TM */

#ifdef kcg_use_P015_OBU_T_TM
#ifndef kcg_comp_P015_OBU_T_TM
extern kcg_bool kcg_comp_P015_OBU_T_TM(
  P015_OBU_T_TM *kcg_c1,
  P015_OBU_T_TM *kcg_c2);
#endif /* kcg_comp_P015_OBU_T_TM */
#endif /* kcg_use_P015_OBU_T_TM */

#ifdef kcg_use_P012_OBU_T_TM
#ifndef kcg_comp_P012_OBU_T_TM
extern kcg_bool kcg_comp_P012_OBU_T_TM(
  P012_OBU_T_TM *kcg_c1,
  P012_OBU_T_TM *kcg_c2);
#endif /* kcg_comp_P012_OBU_T_TM */
#endif /* kcg_use_P012_OBU_T_TM */

#ifndef kcg_comp_TelegramHeader_T_BG_Types_Pkg
extern kcg_bool kcg_comp_TelegramHeader_T_BG_Types_Pkg(
  TelegramHeader_T_BG_Types_Pkg *kcg_c1,
  TelegramHeader_T_BG_Types_Pkg *kcg_c2);
#define kcg_use_TelegramHeader_T_BG_Types_Pkg
#endif /* kcg_comp_TelegramHeader_T_BG_Types_Pkg */

#ifdef kcg_use_DMI_to_EVC_Message_T_API_DMI_Pkg
#ifndef kcg_comp_DMI_to_EVC_Message_T_API_DMI_Pkg
extern kcg_bool kcg_comp_DMI_to_EVC_Message_T_API_DMI_Pkg(
  DMI_to_EVC_Message_T_API_DMI_Pkg *kcg_c1,
  DMI_to_EVC_Message_T_API_DMI_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_to_EVC_Message_T_API_DMI_Pkg */
#endif /* kcg_use_DMI_to_EVC_Message_T_API_DMI_Pkg */

#ifdef kcg_use_MA_section_real_T_TargetManagement_types
#ifndef kcg_comp_MA_section_real_T_TargetManagement_types
extern kcg_bool kcg_comp_MA_section_real_T_TargetManagement_types(
  MA_section_real_T_TargetManagement_types *kcg_c1,
  MA_section_real_T_TargetManagement_types *kcg_c2);
#endif /* kcg_comp_MA_section_real_T_TargetManagement_types */
#endif /* kcg_use_MA_section_real_T_TargetManagement_types */

#ifdef kcg_use_SDM_Commands_T_SDM_Types_Pkg
#ifndef kcg_comp_SDM_Commands_T_SDM_Types_Pkg
extern kcg_bool kcg_comp_SDM_Commands_T_SDM_Types_Pkg(
  SDM_Commands_T_SDM_Types_Pkg *kcg_c1,
  SDM_Commands_T_SDM_Types_Pkg *kcg_c2);
#endif /* kcg_comp_SDM_Commands_T_SDM_Types_Pkg */
#endif /* kcg_use_SDM_Commands_T_SDM_Types_Pkg */

#ifdef kcg_use_SDM_Locations_T_SDM_Types_Pkg
#ifndef kcg_comp_SDM_Locations_T_SDM_Types_Pkg
extern kcg_bool kcg_comp_SDM_Locations_T_SDM_Types_Pkg(
  SDM_Locations_T_SDM_Types_Pkg *kcg_c1,
  SDM_Locations_T_SDM_Types_Pkg *kcg_c2);
#endif /* kcg_comp_SDM_Locations_T_SDM_Types_Pkg */
#endif /* kcg_use_SDM_Locations_T_SDM_Types_Pkg */

#ifdef kcg_use_Speeds_T_SDM_Types_Pkg
#ifndef kcg_comp_Speeds_T_SDM_Types_Pkg
extern kcg_bool kcg_comp_Speeds_T_SDM_Types_Pkg(
  Speeds_T_SDM_Types_Pkg *kcg_c1,
  Speeds_T_SDM_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Speeds_T_SDM_Types_Pkg */
#endif /* kcg_use_Speeds_T_SDM_Types_Pkg */

#ifdef kcg_use_TSM_triggerCond_T_SDM_Commands_Pkg
#ifndef kcg_comp_TSM_triggerCond_T_SDM_Commands_Pkg
extern kcg_bool kcg_comp_TSM_triggerCond_T_SDM_Commands_Pkg(
  TSM_triggerCond_T_SDM_Commands_Pkg *kcg_c1,
  TSM_triggerCond_T_SDM_Commands_Pkg *kcg_c2);
#endif /* kcg_comp_TSM_triggerCond_T_SDM_Commands_Pkg */
#endif /* kcg_use_TSM_triggerCond_T_SDM_Commands_Pkg */

#ifdef kcg_use_MovementAuthority_t_TrackAtlasTypes
#ifndef kcg_comp_MovementAuthority_t_TrackAtlasTypes
extern kcg_bool kcg_comp_MovementAuthority_t_TrackAtlasTypes(
  MovementAuthority_t_TrackAtlasTypes *kcg_c1,
  MovementAuthority_t_TrackAtlasTypes *kcg_c2);
#endif /* kcg_comp_MovementAuthority_t_TrackAtlasTypes */
#endif /* kcg_use_MovementAuthority_t_TrackAtlasTypes */

#ifdef kcg_use_obuEventsAndPhases_T_RCM_Session_Types_Pkg
#ifndef kcg_comp_obuEventsAndPhases_T_RCM_Session_Types_Pkg
extern kcg_bool kcg_comp_obuEventsAndPhases_T_RCM_Session_Types_Pkg(
  obuEventsAndPhases_T_RCM_Session_Types_Pkg *kcg_c1,
  obuEventsAndPhases_T_RCM_Session_Types_Pkg *kcg_c2);
#endif /* kcg_comp_obuEventsAndPhases_T_RCM_Session_Types_Pkg */
#endif /* kcg_use_obuEventsAndPhases_T_RCM_Session_Types_Pkg */

#ifdef kcg_use_EVC_to_DMI_Message_T_API_DMI_Pkg
#ifndef kcg_comp_EVC_to_DMI_Message_T_API_DMI_Pkg
extern kcg_bool kcg_comp_EVC_to_DMI_Message_T_API_DMI_Pkg(
  EVC_to_DMI_Message_T_API_DMI_Pkg *kcg_c1,
  EVC_to_DMI_Message_T_API_DMI_Pkg *kcg_c2);
#endif /* kcg_comp_EVC_to_DMI_Message_T_API_DMI_Pkg */
#endif /* kcg_use_EVC_to_DMI_Message_T_API_DMI_Pkg */

#ifdef kcg_use_DMI_Available_Menu_T_DMI_Types_Pkg
#ifndef kcg_comp_DMI_Available_Menu_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_DMI_Available_Menu_T_DMI_Types_Pkg(
  DMI_Available_Menu_T_DMI_Types_Pkg *kcg_c1,
  DMI_Available_Menu_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_Available_Menu_T_DMI_Types_Pkg */
#endif /* kcg_use_DMI_Available_Menu_T_DMI_Types_Pkg */

#ifdef kcg_use_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg
#ifndef kcg_comp_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg
extern kcg_bool kcg_comp_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg(
  DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c1,
  DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg */
#endif /* kcg_use_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifdef kcg_use_morc_configData_T_RCM_Session_Types_Pkg
#ifndef kcg_comp_morc_configData_T_RCM_Session_Types_Pkg
extern kcg_bool kcg_comp_morc_configData_T_RCM_Session_Types_Pkg(
  morc_configData_T_RCM_Session_Types_Pkg *kcg_c1,
  morc_configData_T_RCM_Session_Types_Pkg *kcg_c2);
#endif /* kcg_comp_morc_configData_T_RCM_Session_Types_Pkg */
#endif /* kcg_use_morc_configData_T_RCM_Session_Types_Pkg */

#ifdef kcg_use_P203V1_OBU_T_TM_baseline2
#ifndef kcg_comp_P203V1_OBU_T_TM_baseline2
extern kcg_bool kcg_comp_P203V1_OBU_T_TM_baseline2(
  P203V1_OBU_T_TM_baseline2 *kcg_c1,
  P203V1_OBU_T_TM_baseline2 *kcg_c2);
#endif /* kcg_comp_P203V1_OBU_T_TM_baseline2 */
#endif /* kcg_use_P203V1_OBU_T_TM_baseline2 */

#ifdef kcg_use_P3_NationalValues_T_Packet_Types_Pkg
#ifndef kcg_comp_P3_NationalValues_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_P3_NationalValues_T_Packet_Types_Pkg(
  P3_NationalValues_T_Packet_Types_Pkg *kcg_c1,
  P3_NationalValues_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_P3_NationalValues_T_Packet_Types_Pkg */
#endif /* kcg_use_P3_NationalValues_T_Packet_Types_Pkg */

#ifdef kcg_use_T_Data_From_DMI_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_Data_From_DMI_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_Data_From_DMI_Level_And_Mode_Types_Pkg(
  T_Data_From_DMI_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Data_From_DMI_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_Data_From_DMI_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_Data_From_DMI_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg(
  T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_trainData_T_TIU_Types_Pkg
#ifndef kcg_comp_trainData_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_trainData_T_TIU_Types_Pkg(
  trainData_T_TIU_Types_Pkg *kcg_c1,
  trainData_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_trainData_T_TIU_Types_Pkg */
#endif /* kcg_use_trainData_T_TIU_Types_Pkg */

#ifdef kcg_use_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg(
  T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_P15_Level23MovementAuthority_T_Packet_Types_Pkg
#ifndef kcg_comp_P15_Level23MovementAuthority_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_P15_Level23MovementAuthority_T_Packet_Types_Pkg(
  P15_Level23MovementAuthority_T_Packet_Types_Pkg *kcg_c1,
  P15_Level23MovementAuthority_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_P15_Level23MovementAuthority_T_Packet_Types_Pkg */
#endif /* kcg_use_P15_Level23MovementAuthority_T_Packet_Types_Pkg */

#ifdef kcg_use_P12_Level1MovementAuthority_T_Packet_Types_Pkg
#ifndef kcg_comp_P12_Level1MovementAuthority_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_P12_Level1MovementAuthority_T_Packet_Types_Pkg(
  P12_Level1MovementAuthority_T_Packet_Types_Pkg *kcg_c1,
  P12_Level1MovementAuthority_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_P12_Level1MovementAuthority_T_Packet_Types_Pkg */
#endif /* kcg_use_P12_Level1MovementAuthority_T_Packet_Types_Pkg */

#ifdef kcg_use_Position_Report_based_on_two_balise_groups_TrainToTrack
#ifndef kcg_comp_Position_Report_based_on_two_balise_groups_TrainToTrack
extern kcg_bool kcg_comp_Position_Report_based_on_two_balise_groups_TrainToTrack(
  Position_Report_based_on_two_balise_groups_TrainToTrack *kcg_c1,
  Position_Report_based_on_two_balise_groups_TrainToTrack *kcg_c2);
#endif /* kcg_comp_Position_Report_based_on_two_balise_groups_TrainToTrack */
#endif /* kcg_use_Position_Report_based_on_two_balise_groups_TrainToTrack */

#ifdef kcg_use_Position_Report_TrainToTrack
#ifndef kcg_comp_Position_Report_TrainToTrack
extern kcg_bool kcg_comp_Position_Report_TrainToTrack(
  Position_Report_TrainToTrack *kcg_c1,
  Position_Report_TrainToTrack *kcg_c2);
#endif /* kcg_comp_Position_Report_TrainToTrack */
#endif /* kcg_use_Position_Report_TrainToTrack */

#ifdef kcg_use_speedSupervisionForDMI_T_DMI_Types_Pkg
#ifndef kcg_comp_speedSupervisionForDMI_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_speedSupervisionForDMI_T_DMI_Types_Pkg(
  speedSupervisionForDMI_T_DMI_Types_Pkg *kcg_c1,
  speedSupervisionForDMI_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_speedSupervisionForDMI_T_DMI_Types_Pkg */
#endif /* kcg_use_speedSupervisionForDMI_T_DMI_Types_Pkg */

#ifdef kcg_use_trainPosition_T_TrainPosition_Types_Pck
#ifndef kcg_comp_trainPosition_T_TrainPosition_Types_Pck
extern kcg_bool kcg_comp_trainPosition_T_TrainPosition_Types_Pck(
  trainPosition_T_TrainPosition_Types_Pck *kcg_c1,
  trainPosition_T_TrainPosition_Types_Pck *kcg_c2);
#endif /* kcg_comp_trainPosition_T_TrainPosition_Types_Pck */
#endif /* kcg_use_trainPosition_T_TrainPosition_Types_Pck */

#ifndef kcg_comp_Radio_TrackTrain_Header_T_Radio_Types_Pkg
extern kcg_bool kcg_comp_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
  Radio_TrackTrain_Header_T_Radio_Types_Pkg *kcg_c1,
  Radio_TrackTrain_Header_T_Radio_Types_Pkg *kcg_c2);
#define kcg_use_Radio_TrackTrain_Header_T_Radio_Types_Pkg
#endif /* kcg_comp_Radio_TrackTrain_Header_T_Radio_Types_Pkg */

#ifndef kcg_comp_LinkedBG_T_BG_Types_Pkg
extern kcg_bool kcg_comp_LinkedBG_T_BG_Types_Pkg(
  LinkedBG_T_BG_Types_Pkg *kcg_c1,
  LinkedBG_T_BG_Types_Pkg *kcg_c2);
#define kcg_use_LinkedBG_T_BG_Types_Pkg
#endif /* kcg_comp_LinkedBG_T_BG_Types_Pkg */

#ifndef kcg_comp_BG_Header_T_BG_Types_Pkg
extern kcg_bool kcg_comp_BG_Header_T_BG_Types_Pkg(
  BG_Header_T_BG_Types_Pkg *kcg_c1,
  BG_Header_T_BG_Types_Pkg *kcg_c2);
#define kcg_use_BG_Header_T_BG_Types_Pkg
#endif /* kcg_comp_BG_Header_T_BG_Types_Pkg */

#ifdef kcg_use_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg(
  T_Data_To_BG_Management_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Data_To_BG_Management_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_M_132_T_TM_radio_messages
#ifndef kcg_comp_M_132_T_TM_radio_messages
extern kcg_bool kcg_comp_M_132_T_TM_radio_messages(
  M_132_T_TM_radio_messages *kcg_c1,
  M_132_T_TM_radio_messages *kcg_c2);
#endif /* kcg_comp_M_132_T_TM_radio_messages */
#endif /* kcg_use_M_132_T_TM_radio_messages */

#ifdef kcg_use_StaticSpeedSection_t_TrackAtlasTypes
#ifndef kcg_comp_StaticSpeedSection_t_TrackAtlasTypes
extern kcg_bool kcg_comp_StaticSpeedSection_t_TrackAtlasTypes(
  StaticSpeedSection_t_TrackAtlasTypes *kcg_c1,
  StaticSpeedSection_t_TrackAtlasTypes *kcg_c2);
#endif /* kcg_comp_StaticSpeedSection_t_TrackAtlasTypes */
#endif /* kcg_use_StaticSpeedSection_t_TrackAtlasTypes */

#ifdef kcg_use_sNID_RADIO_T_Packet_TrainTypes_Pkg
#ifndef kcg_comp_sNID_RADIO_T_Packet_TrainTypes_Pkg
extern kcg_bool kcg_comp_sNID_RADIO_T_Packet_TrainTypes_Pkg(
  sNID_RADIO_T_Packet_TrainTypes_Pkg *kcg_c1,
  sNID_RADIO_T_Packet_TrainTypes_Pkg *kcg_c2);
#endif /* kcg_comp_sNID_RADIO_T_Packet_TrainTypes_Pkg */
#endif /* kcg_use_sNID_RADIO_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_p42_sessionManagement_T_RCM_MsgTypes_Pkg
#ifndef kcg_comp_p42_sessionManagement_T_RCM_MsgTypes_Pkg
extern kcg_bool kcg_comp_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
  p42_sessionManagement_T_RCM_MsgTypes_Pkg *kcg_c1,
  p42_sessionManagement_T_RCM_MsgTypes_Pkg *kcg_c2);
#endif /* kcg_comp_p42_sessionManagement_T_RCM_MsgTypes_Pkg */
#endif /* kcg_use_p42_sessionManagement_T_RCM_MsgTypes_Pkg */

#ifdef kcg_use_msgToTrackTriggers_T_RCM_MsgTypes_Pkg
#ifndef kcg_comp_msgToTrackTriggers_T_RCM_MsgTypes_Pkg
extern kcg_bool kcg_comp_msgToTrackTriggers_T_RCM_MsgTypes_Pkg(
  msgToTrackTriggers_T_RCM_MsgTypes_Pkg *kcg_c1,
  msgToTrackTriggers_T_RCM_MsgTypes_Pkg *kcg_c2);
#endif /* kcg_comp_msgToTrackTriggers_T_RCM_MsgTypes_Pkg */
#endif /* kcg_use_msgToTrackTriggers_T_RCM_MsgTypes_Pkg */

#ifdef kcg_use_P042_trackside_int_T_TM
#ifndef kcg_comp_P042_trackside_int_T_TM
extern kcg_bool kcg_comp_P042_trackside_int_T_TM(
  P042_trackside_int_T_TM *kcg_c1,
  P042_trackside_int_T_TM *kcg_c2);
#endif /* kcg_comp_P042_trackside_int_T_TM */
#endif /* kcg_use_P042_trackside_int_T_TM */

#ifdef kcg_use_struct_277960
#ifndef kcg_comp_struct_277960
extern kcg_bool kcg_comp_struct_277960(
  struct_277960 *kcg_c1,
  struct_277960 *kcg_c2);
#endif /* kcg_comp_struct_277960 */
#endif /* kcg_use_struct_277960 */

#ifdef kcg_use_trainDataStatus_T_trainData_Types_pkg
#ifndef kcg_comp_trainDataStatus_T_trainData_Types_pkg
extern kcg_bool kcg_comp_trainDataStatus_T_trainData_Types_pkg(
  trainDataStatus_T_trainData_Types_pkg *kcg_c1,
  trainDataStatus_T_trainData_Types_pkg *kcg_c2);
#endif /* kcg_comp_trainDataStatus_T_trainData_Types_pkg */
#endif /* kcg_use_trainDataStatus_T_trainData_Types_pkg */

#ifdef kcg_use_P065_OBU_T_TM
#ifndef kcg_comp_P065_OBU_T_TM
extern kcg_bool kcg_comp_P065_OBU_T_TM(
  P065_OBU_T_TM *kcg_c1,
  P065_OBU_T_TM *kcg_c2);
#endif /* kcg_comp_P065_OBU_T_TM */
#endif /* kcg_use_P065_OBU_T_TM */

#ifdef kcg_use_P005_section_enum_T_TM
#ifndef kcg_comp_P005_section_enum_T_TM
extern kcg_bool kcg_comp_P005_section_enum_T_TM(
  P005_section_enum_T_TM *kcg_c1,
  P005_section_enum_T_TM *kcg_c2);
#endif /* kcg_comp_P005_section_enum_T_TM */
#endif /* kcg_use_P005_section_enum_T_TM */

#ifdef kcg_use_dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg
#ifndef kcg_comp_dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg
extern kcg_bool kcg_comp_dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg(
  dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg *kcg_c1,
  dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg *kcg_c2);
#endif /* kcg_comp_dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg */
#endif /* kcg_use_dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg */

#ifdef kcg_use_M_TrainTrack_MessageHd_T_TM_radio_messages
#ifndef kcg_comp_M_TrainTrack_MessageHd_T_TM_radio_messages
extern kcg_bool kcg_comp_M_TrainTrack_MessageHd_T_TM_radio_messages(
  M_TrainTrack_MessageHd_T_TM_radio_messages *kcg_c1,
  M_TrainTrack_MessageHd_T_TM_radio_messages *kcg_c2);
#endif /* kcg_comp_M_TrainTrack_MessageHd_T_TM_radio_messages */
#endif /* kcg_use_M_TrainTrack_MessageHd_T_TM_radio_messages */

#ifdef kcg_use_P058_OBU_T_TM
#ifndef kcg_comp_P058_OBU_T_TM
extern kcg_bool kcg_comp_P058_OBU_T_TM(
  P058_OBU_T_TM *kcg_c1,
  P058_OBU_T_TM *kcg_c2);
#endif /* kcg_comp_P058_OBU_T_TM */
#endif /* kcg_use_P058_OBU_T_TM */

#ifdef kcg_use_struct_278116
#ifndef kcg_comp_struct_278116
extern kcg_bool kcg_comp_struct_278116(
  struct_278116 *kcg_c1,
  struct_278116 *kcg_c2);
#endif /* kcg_comp_struct_278116 */
#endif /* kcg_use_struct_278116 */

#ifdef kcg_use_BGCollector_T_Receive_TrackSide_Msg_Pkg
#ifndef kcg_comp_BGCollector_T_Receive_TrackSide_Msg_Pkg
extern kcg_bool kcg_comp_BGCollector_T_Receive_TrackSide_Msg_Pkg(
  BGCollector_T_Receive_TrackSide_Msg_Pkg *kcg_c1,
  BGCollector_T_Receive_TrackSide_Msg_Pkg *kcg_c2);
#endif /* kcg_comp_BGCollector_T_Receive_TrackSide_Msg_Pkg */
#endif /* kcg_use_BGCollector_T_Receive_TrackSide_Msg_Pkg */

#ifdef kcg_use_TargetIteratorAkku_TargetLimits_Pkg
#ifndef kcg_comp_TargetIteratorAkku_TargetLimits_Pkg
extern kcg_bool kcg_comp_TargetIteratorAkku_TargetLimits_Pkg(
  TargetIteratorAkku_TargetLimits_Pkg *kcg_c1,
  TargetIteratorAkku_TargetLimits_Pkg *kcg_c2);
#endif /* kcg_comp_TargetIteratorAkku_TargetLimits_Pkg */
#endif /* kcg_use_TargetIteratorAkku_TargetLimits_Pkg */

#ifdef kcg_use_filterRelatedEvents_T_Common_Types_Pkg
#ifndef kcg_comp_filterRelatedEvents_T_Common_Types_Pkg
extern kcg_bool kcg_comp_filterRelatedEvents_T_Common_Types_Pkg(
  filterRelatedEvents_T_Common_Types_Pkg *kcg_c1,
  filterRelatedEvents_T_Common_Types_Pkg *kcg_c2);
#endif /* kcg_comp_filterRelatedEvents_T_Common_Types_Pkg */
#endif /* kcg_use_filterRelatedEvents_T_Common_Types_Pkg */

#ifndef kcg_comp_RadioMetadata_T_Common_Types_Pkg
extern kcg_bool kcg_comp_RadioMetadata_T_Common_Types_Pkg(
  RadioMetadata_T_Common_Types_Pkg *kcg_c1,
  RadioMetadata_T_Common_Types_Pkg *kcg_c2);
#define kcg_use_RadioMetadata_T_Common_Types_Pkg
#endif /* kcg_comp_RadioMetadata_T_Common_Types_Pkg */

#ifdef kcg_use_DMI_TXT_MSG_status_T_DMI_Types_Pkg
#ifndef kcg_comp_DMI_TXT_MSG_status_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_DMI_TXT_MSG_status_T_DMI_Types_Pkg(
  DMI_TXT_MSG_status_T_DMI_Types_Pkg *kcg_c1,
  DMI_TXT_MSG_status_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_TXT_MSG_status_T_DMI_Types_Pkg */
#endif /* kcg_use_DMI_TXT_MSG_status_T_DMI_Types_Pkg */

#ifdef kcg_use_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg
#ifndef kcg_comp_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg
extern kcg_bool kcg_comp_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(
  DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c1,
  DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg */
#endif /* kcg_use_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifdef kcg_use_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg
#ifndef kcg_comp_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg
extern kcg_bool kcg_comp_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c1,
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg */
#endif /* kcg_use_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifdef kcg_use_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg
#ifndef kcg_comp_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg
extern kcg_bool kcg_comp_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
  DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c1,
  DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg */
#endif /* kcg_use_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifdef kcg_use_DMI_EVC_status_T_DMI_Types_Pkg
#ifndef kcg_comp_DMI_EVC_status_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_DMI_EVC_status_T_DMI_Types_Pkg(
  DMI_EVC_status_T_DMI_Types_Pkg *kcg_c1,
  DMI_EVC_status_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_EVC_status_T_DMI_Types_Pkg */
#endif /* kcg_use_DMI_EVC_status_T_DMI_Types_Pkg */

#ifdef kcg_use_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg
#ifndef kcg_comp_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg
extern kcg_bool kcg_comp_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
  DMI_Train_Data_T_DMI_Messages_Bothways_Pkg *kcg_c1,
  DMI_Train_Data_T_DMI_Messages_Bothways_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg */
#endif /* kcg_use_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg */

#ifdef kcg_use_struct_278367
#ifndef kcg_comp_struct_278367
extern kcg_bool kcg_comp_struct_278367(
  struct_278367 *kcg_c1,
  struct_278367 *kcg_c2);
#endif /* kcg_comp_struct_278367 */
#endif /* kcg_use_struct_278367 */

#ifdef kcg_use_T_Data_To_DMI_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_Data_To_DMI_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_Data_To_DMI_Level_And_Mode_Types_Pkg(
  T_Data_To_DMI_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Data_To_DMI_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_Data_To_DMI_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_Data_To_DMI_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_Mode_control_and_train_status_T_TIU_Types_Pkg
#ifndef kcg_comp_Mode_control_and_train_status_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_Mode_control_and_train_status_T_TIU_Types_Pkg(
  Mode_control_and_train_status_T_TIU_Types_Pkg *kcg_c1,
  Mode_control_and_train_status_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Mode_control_and_train_status_T_TIU_Types_Pkg */
#endif /* kcg_use_Mode_control_and_train_status_T_TIU_Types_Pkg */

#ifdef kcg_use_P80_ModeProfile_T_Packet_Types_Pkg
#ifndef kcg_comp_P80_ModeProfile_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_P80_ModeProfile_T_Packet_Types_Pkg(
  P80_ModeProfile_T_Packet_Types_Pkg *kcg_c1,
  P80_ModeProfile_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_P80_ModeProfile_T_Packet_Types_Pkg */
#endif /* kcg_use_P80_ModeProfile_T_Packet_Types_Pkg */

#ifdef kcg_use_P41_LevelTransitionOrder_T_Packet_Types_Pkg
#ifndef kcg_comp_P41_LevelTransitionOrder_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_P41_LevelTransitionOrder_T_Packet_Types_Pkg(
  P41_LevelTransitionOrder_T_Packet_Types_Pkg *kcg_c1,
  P41_LevelTransitionOrder_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_P41_LevelTransitionOrder_T_Packet_Types_Pkg */
#endif /* kcg_use_P41_LevelTransitionOrder_T_Packet_Types_Pkg */

#ifdef kcg_use_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg
#ifndef kcg_comp_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg(
  P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg *kcg_c1,
  P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg */
#endif /* kcg_use_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg */

#ifdef kcg_use_MSG_Errors_T_Common_Types_Pkg
#ifndef kcg_comp_MSG_Errors_T_Common_Types_Pkg
extern kcg_bool kcg_comp_MSG_Errors_T_Common_Types_Pkg(
  MSG_Errors_T_Common_Types_Pkg *kcg_c1,
  MSG_Errors_T_Common_Types_Pkg *kcg_c2);
#endif /* kcg_comp_MSG_Errors_T_Common_Types_Pkg */
#endif /* kcg_use_MSG_Errors_T_Common_Types_Pkg */

#ifdef kcg_use_positionErrors_T_TrainPosition_Types_Pck
#ifndef kcg_comp_positionErrors_T_TrainPosition_Types_Pck
extern kcg_bool kcg_comp_positionErrors_T_TrainPosition_Types_Pck(
  positionErrors_T_TrainPosition_Types_Pck *kcg_c1,
  positionErrors_T_TrainPosition_Types_Pck *kcg_c2);
#endif /* kcg_comp_positionErrors_T_TrainPosition_Types_Pck */
#endif /* kcg_use_positionErrors_T_TrainPosition_Types_Pck */

#ifndef kcg_comp_positionedBG_T_TrainPosition_Types_Pck
extern kcg_bool kcg_comp_positionedBG_T_TrainPosition_Types_Pck(
  positionedBG_T_TrainPosition_Types_Pck *kcg_c1,
  positionedBG_T_TrainPosition_Types_Pck *kcg_c2);
#define kcg_use_positionedBG_T_TrainPosition_Types_Pck
#endif /* kcg_comp_positionedBG_T_TrainPosition_Types_Pck */

#ifdef kcg_use_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg
#ifndef kcg_comp_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg
extern kcg_bool kcg_comp_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
  DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c1,
  DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg */
#endif /* kcg_use_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifdef kcg_use_T_trac_t_TargetLimits_Pkg
#ifndef kcg_comp_T_trac_t_TargetLimits_Pkg
extern kcg_bool kcg_comp_T_trac_t_TargetLimits_Pkg(
  T_trac_t_TargetLimits_Pkg *kcg_c1,
  T_trac_t_TargetLimits_Pkg *kcg_c2);
#endif /* kcg_comp_T_trac_t_TargetLimits_Pkg */
#endif /* kcg_use_T_trac_t_TargetLimits_Pkg */

#ifdef kcg_use_M_147_T_TM_radio_messages
#ifndef kcg_comp_M_147_T_TM_radio_messages
extern kcg_bool kcg_comp_M_147_T_TM_radio_messages(
  M_147_T_TM_radio_messages *kcg_c1,
  M_147_T_TM_radio_messages *kcg_c2);
#endif /* kcg_comp_M_147_T_TM_radio_messages */
#endif /* kcg_use_M_147_T_TM_radio_messages */

#ifdef kcg_use_P080_section_enum_T_TM
#ifndef kcg_comp_P080_section_enum_T_TM
extern kcg_bool kcg_comp_P080_section_enum_T_TM(
  P080_section_enum_T_TM *kcg_c1,
  P080_section_enum_T_TM *kcg_c2);
#endif /* kcg_comp_P080_section_enum_T_TM */
#endif /* kcg_use_P080_section_enum_T_TM */

#ifdef kcg_use_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg
#ifndef kcg_comp_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg
extern kcg_bool kcg_comp_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(
  DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c1,
  DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg */
#endif /* kcg_use_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg */

#ifdef kcg_use_P42_SessionManagement_T_Packet_Types_Pkg
#ifndef kcg_comp_P42_SessionManagement_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_P42_SessionManagement_T_Packet_Types_Pkg(
  P42_SessionManagement_T_Packet_Types_Pkg *kcg_c1,
  P42_SessionManagement_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_P42_SessionManagement_T_Packet_Types_Pkg */
#endif /* kcg_use_P42_SessionManagement_T_Packet_Types_Pkg */

#ifndef kcg_comp_odometry_T_Obu_BasicTypes_Pkg
extern kcg_bool kcg_comp_odometry_T_Obu_BasicTypes_Pkg(
  odometry_T_Obu_BasicTypes_Pkg *kcg_c1,
  odometry_T_Obu_BasicTypes_Pkg *kcg_c2);
#define kcg_use_odometry_T_Obu_BasicTypes_Pkg
#endif /* kcg_comp_odometry_T_Obu_BasicTypes_Pkg */

#ifdef kcg_use_P004_TM_TrainToTrack
#ifndef kcg_comp_P004_TM_TrainToTrack
extern kcg_bool kcg_comp_P004_TM_TrainToTrack(
  P004_TM_TrainToTrack *kcg_c1,
  P004_TM_TrainToTrack *kcg_c2);
#endif /* kcg_comp_P004_TM_TrainToTrack */
#endif /* kcg_use_P004_TM_TrainToTrack */

#ifdef kcg_use_p131_q_rbcTransitionOrder_T_Handover_Pkg
#ifndef kcg_comp_p131_q_rbcTransitionOrder_T_Handover_Pkg
extern kcg_bool kcg_comp_p131_q_rbcTransitionOrder_T_Handover_Pkg(
  p131_q_rbcTransitionOrder_T_Handover_Pkg *kcg_c1,
  p131_q_rbcTransitionOrder_T_Handover_Pkg *kcg_c2);
#endif /* kcg_comp_p131_q_rbcTransitionOrder_T_Handover_Pkg */
#endif /* kcg_use_p131_q_rbcTransitionOrder_T_Handover_Pkg */

#ifdef kcg_use_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store
#ifndef kcg_comp_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store
extern kcg_bool kcg_comp_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(
  NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store *kcg_c1,
  NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store *kcg_c2);
#endif /* kcg_comp_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store */
#endif /* kcg_use_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store */

#ifdef kcg_use_outPackets_T_Common_Types_Pkg
#ifndef kcg_comp_outPackets_T_Common_Types_Pkg
extern kcg_bool kcg_comp_outPackets_T_Common_Types_Pkg(
  outPackets_T_Common_Types_Pkg *kcg_c1,
  outPackets_T_Common_Types_Pkg *kcg_c2);
#endif /* kcg_comp_outPackets_T_Common_Types_Pkg */
#endif /* kcg_use_outPackets_T_Common_Types_Pkg */

#ifndef kcg_comp_struct_278835
extern kcg_bool kcg_comp_struct_278835(
  struct_278835 *kcg_c1,
  struct_278835 *kcg_c2);
#define kcg_use_struct_278835
#endif /* kcg_comp_struct_278835 */

#ifdef kcg_use_Message_EVC_to_Train_Interface_T_TIU_Types_Pkg
#ifndef kcg_comp_Message_EVC_to_Train_Interface_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_Message_EVC_to_Train_Interface_T_TIU_Types_Pkg(
  Message_EVC_to_Train_Interface_T_TIU_Types_Pkg *kcg_c1,
  Message_EVC_to_Train_Interface_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Message_EVC_to_Train_Interface_T_TIU_Types_Pkg */
#endif /* kcg_use_Message_EVC_to_Train_Interface_T_TIU_Types_Pkg */

#ifdef kcg_use_trainProperties_T_TrainPosition_Types_Pck
#ifndef kcg_comp_trainProperties_T_TrainPosition_Types_Pck
extern kcg_bool kcg_comp_trainProperties_T_TrainPosition_Types_Pck(
  trainProperties_T_TrainPosition_Types_Pck *kcg_c1,
  trainProperties_T_TrainPosition_Types_Pck *kcg_c2);
#endif /* kcg_comp_trainProperties_T_TrainPosition_Types_Pck */
#endif /* kcg_use_trainProperties_T_TrainPosition_Types_Pck */

#ifdef kcg_use_nothing_to_resume_profile_follow_T_TIU_Types_Pkg
#ifndef kcg_comp_nothing_to_resume_profile_follow_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_nothing_to_resume_profile_follow_T_TIU_Types_Pkg(
  nothing_to_resume_profile_follow_T_TIU_Types_Pkg *kcg_c1,
  nothing_to_resume_profile_follow_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_nothing_to_resume_profile_follow_T_TIU_Types_Pkg */
#endif /* kcg_use_nothing_to_resume_profile_follow_T_TIU_Types_Pkg */

#ifdef kcg_use_Isolation_Status_T_TIU_Types_Pkg
#ifndef kcg_comp_Isolation_Status_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_Isolation_Status_T_TIU_Types_Pkg(
  Isolation_Status_T_TIU_Types_Pkg *kcg_c1,
  Isolation_Status_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Isolation_Status_T_TIU_Types_Pkg */
#endif /* kcg_use_Isolation_Status_T_TIU_Types_Pkg */

#ifdef kcg_use_T_Data_From_Localisation_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_Data_From_Localisation_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_Data_From_Localisation_Level_And_Mode_Types_Pkg(
  T_Data_From_Localisation_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Data_From_Localisation_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_Data_From_Localisation_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_Data_From_Localisation_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_Target_real_T_TargetManagement_types
#ifndef kcg_comp_Target_real_T_TargetManagement_types
extern kcg_bool kcg_comp_Target_real_T_TargetManagement_types(
  Target_real_T_TargetManagement_types *kcg_c1,
  Target_real_T_TargetManagement_types *kcg_c2);
#endif /* kcg_comp_Target_real_T_TargetManagement_types */
#endif /* kcg_use_Target_real_T_TargetManagement_types */

#ifdef kcg_use_struct_278986
#ifndef kcg_comp_struct_278986
extern kcg_bool kcg_comp_struct_278986(
  struct_278986 *kcg_c1,
  struct_278986 *kcg_c2);
#endif /* kcg_comp_struct_278986 */
#endif /* kcg_use_struct_278986 */

#ifdef kcg_use_struct_279025
#ifndef kcg_comp_struct_279025
extern kcg_bool kcg_comp_struct_279025(
  struct_279025 *kcg_c1,
  struct_279025 *kcg_c2);
#endif /* kcg_comp_struct_279025 */
#endif /* kcg_use_struct_279025 */

#ifdef kcg_use_T_Reversing_Data_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_Reversing_Data_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_Reversing_Data_Level_And_Mode_Types_Pkg(
  T_Reversing_Data_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Reversing_Data_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_Reversing_Data_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_Reversing_Data_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg
#ifndef kcg_comp_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg
extern kcg_bool kcg_comp_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(
  PT4_ErrorReporting_T_Packet_TrainTypes_Pkg *kcg_c1,
  PT4_ErrorReporting_T_Packet_TrainTypes_Pkg *kcg_c2);
#endif /* kcg_comp_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg */
#endif /* kcg_use_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_trainData_Events_T_trainData_Types_pkg
#ifndef kcg_comp_trainData_Events_T_trainData_Types_pkg
extern kcg_bool kcg_comp_trainData_Events_T_trainData_Types_pkg(
  trainData_Events_T_trainData_Types_pkg *kcg_c1,
  trainData_Events_T_trainData_Types_pkg *kcg_c2);
#endif /* kcg_comp_trainData_Events_T_trainData_Types_pkg */
#endif /* kcg_use_trainData_Events_T_trainData_Types_pkg */

#ifdef kcg_use_struct_279212
#ifndef kcg_comp_struct_279212
extern kcg_bool kcg_comp_struct_279212(
  struct_279212 *kcg_c1,
  struct_279212 *kcg_c2);
#endif /* kcg_comp_struct_279212 */
#endif /* kcg_use_struct_279212 */

#ifdef kcg_use_P046_section_enum_T_TM
#ifndef kcg_comp_P046_section_enum_T_TM
extern kcg_bool kcg_comp_P046_section_enum_T_TM(
  P046_section_enum_T_TM *kcg_c1,
  P046_section_enum_T_TM *kcg_c2);
#endif /* kcg_comp_P046_section_enum_T_TM */
#endif /* kcg_use_P046_section_enum_T_TM */

#ifndef kcg_comp_CompressedPackets_T_Common_Types_Pkg
extern kcg_bool kcg_comp_CompressedPackets_T_Common_Types_Pkg(
  CompressedPackets_T_Common_Types_Pkg *kcg_c1,
  CompressedPackets_T_Common_Types_Pkg *kcg_c2);
#define kcg_use_CompressedPackets_T_Common_Types_Pkg
#endif /* kcg_comp_CompressedPackets_T_Common_Types_Pkg */

#ifdef kcg_use_EOA_real_T_TargetManagement_types
#ifndef kcg_comp_EOA_real_T_TargetManagement_types
extern kcg_bool kcg_comp_EOA_real_T_TargetManagement_types(
  EOA_real_T_TargetManagement_types *kcg_c1,
  EOA_real_T_TargetManagement_types *kcg_c2);
#endif /* kcg_comp_EOA_real_T_TargetManagement_types */
#endif /* kcg_use_EOA_real_T_TargetManagement_types */

#ifndef kcg_comp_Brake_command_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_Brake_command_T_TIU_Types_Pkg(
  Brake_command_T_TIU_Types_Pkg *kcg_c1,
  Brake_command_T_TIU_Types_Pkg *kcg_c2);
#define kcg_use_Brake_command_T_TIU_Types_Pkg
#endif /* kcg_comp_Brake_command_T_TIU_Types_Pkg */

#ifdef kcg_use_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg
#ifndef kcg_comp_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg
extern kcg_bool kcg_comp_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *kcg_c1,
  linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *kcg_c2);
#endif /* kcg_comp_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg */
#endif /* kcg_use_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg */

#ifdef kcg_use_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg
#ifndef kcg_comp_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg
extern kcg_bool kcg_comp_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(
  PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg *kcg_c1,
  PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg *kcg_c2);
#endif /* kcg_comp_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg */
#endif /* kcg_use_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_bec_t_TargetLimits_Pkg
#ifndef kcg_comp_bec_t_TargetLimits_Pkg
extern kcg_bool kcg_comp_bec_t_TargetLimits_Pkg(
  bec_t_TargetLimits_Pkg *kcg_c1,
  bec_t_TargetLimits_Pkg *kcg_c2);
#endif /* kcg_comp_bec_t_TargetLimits_Pkg */
#endif /* kcg_use_bec_t_TargetLimits_Pkg */

#ifndef kcg_comp_MetadataElement_T_Common_Types_Pkg
extern kcg_bool kcg_comp_MetadataElement_T_Common_Types_Pkg(
  MetadataElement_T_Common_Types_Pkg *kcg_c1,
  MetadataElement_T_Common_Types_Pkg *kcg_c2);
#define kcg_use_MetadataElement_T_Common_Types_Pkg
#endif /* kcg_comp_MetadataElement_T_Common_Types_Pkg */

#ifdef kcg_use_T_Mode_Profile_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_Mode_Profile_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_Mode_Profile_Level_And_Mode_Types_Pkg(
  T_Mode_Profile_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Mode_Profile_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_Mode_Profile_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_Mode_Profile_Level_And_Mode_Types_Pkg */

#ifdef kcg_use__5_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg
#ifndef kcg_comp__5_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg
extern kcg_bool kcg_comp__5_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
  _5_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg *kcg_c1,
  _5_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg *kcg_c2);
#endif /* kcg_comp__5_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg */
#endif /* kcg_use__5_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg */

#ifdef kcg_use_ASafe_T_CalcBrakingCurves_types
#ifndef kcg_comp_ASafe_T_CalcBrakingCurves_types
extern kcg_bool kcg_comp_ASafe_T_CalcBrakingCurves_types(
  ASafe_T_CalcBrakingCurves_types *kcg_c1,
  ASafe_T_CalcBrakingCurves_types *kcg_c2);
#endif /* kcg_comp_ASafe_T_CalcBrakingCurves_types */
#endif /* kcg_use_ASafe_T_CalcBrakingCurves_types */

#ifdef kcg_use_DataForDMI_t_TrackAtlasTypes
#ifndef kcg_comp_DataForDMI_t_TrackAtlasTypes
extern kcg_bool kcg_comp_DataForDMI_t_TrackAtlasTypes(
  DataForDMI_t_TrackAtlasTypes *kcg_c1,
  DataForDMI_t_TrackAtlasTypes *kcg_c2);
#endif /* kcg_comp_DataForDMI_t_TrackAtlasTypes */
#endif /* kcg_use_DataForDMI_t_TrackAtlasTypes */

#ifdef kcg_use_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg(
  T_AcknoledgementRequest_Level_And_Mode_Types_Pkg *kcg_c1,
  T_AcknoledgementRequest_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_A_gradient_element_t_SDM_GradientAcceleration_types
#ifndef kcg_comp_A_gradient_element_t_SDM_GradientAcceleration_types
extern kcg_bool kcg_comp_A_gradient_element_t_SDM_GradientAcceleration_types(
  A_gradient_element_t_SDM_GradientAcceleration_types *kcg_c1,
  A_gradient_element_t_SDM_GradientAcceleration_types *kcg_c2);
#endif /* kcg_comp_A_gradient_element_t_SDM_GradientAcceleration_types */
#endif /* kcg_use_A_gradient_element_t_SDM_GradientAcceleration_types */

#ifdef kcg_use_Gradient_section_real_t_SDM_GradientAcceleration_types
#ifndef kcg_comp_Gradient_section_real_t_SDM_GradientAcceleration_types
extern kcg_bool kcg_comp_Gradient_section_real_t_SDM_GradientAcceleration_types(
  Gradient_section_real_t_SDM_GradientAcceleration_types *kcg_c1,
  Gradient_section_real_t_SDM_GradientAcceleration_types *kcg_c2);
#endif /* kcg_comp_Gradient_section_real_t_SDM_GradientAcceleration_types */
#endif /* kcg_use_Gradient_section_real_t_SDM_GradientAcceleration_types */

#ifdef kcg_use_MRSP_internal_section_T_TargetManagement_types
#ifndef kcg_comp_MRSP_internal_section_T_TargetManagement_types
extern kcg_bool kcg_comp_MRSP_internal_section_T_TargetManagement_types(
  MRSP_internal_section_T_TargetManagement_types *kcg_c1,
  MRSP_internal_section_T_TargetManagement_types *kcg_c2);
#endif /* kcg_comp_MRSP_internal_section_T_TargetManagement_types */
#endif /* kcg_use_MRSP_internal_section_T_TargetManagement_types */

#ifdef kcg_use_P044_TM_TrainToTrack
#ifndef kcg_comp_P044_TM_TrainToTrack
extern kcg_bool kcg_comp_P044_TM_TrainToTrack(
  P044_TM_TrainToTrack *kcg_c1,
  P044_TM_TrainToTrack *kcg_c2);
#endif /* kcg_comp_P044_TM_TrainToTrack */
#endif /* kcg_use_P044_TM_TrainToTrack */

#ifdef kcg_use_P021_OBU_T_TM
#ifndef kcg_comp_P021_OBU_T_TM
extern kcg_bool kcg_comp_P021_OBU_T_TM(
  P021_OBU_T_TM *kcg_c1,
  P021_OBU_T_TM *kcg_c2);
#endif /* kcg_comp_P021_OBU_T_TM */
#endif /* kcg_use_P021_OBU_T_TM */

#ifdef kcg_use_ACC_SDM_GradientAcceleration_Pkg
#ifndef kcg_comp_ACC_SDM_GradientAcceleration_Pkg
extern kcg_bool kcg_comp_ACC_SDM_GradientAcceleration_Pkg(
  ACC_SDM_GradientAcceleration_Pkg *kcg_c1,
  ACC_SDM_GradientAcceleration_Pkg *kcg_c2);
#endif /* kcg_comp_ACC_SDM_GradientAcceleration_Pkg */
#endif /* kcg_use_ACC_SDM_GradientAcceleration_Pkg */

#ifdef kcg_use_P003_TM_TrainToTrack
#ifndef kcg_comp_P003_TM_TrainToTrack
extern kcg_bool kcg_comp_P003_TM_TrainToTrack(
  P003_TM_TrainToTrack *kcg_c1,
  P003_TM_TrainToTrack *kcg_c2);
#endif /* kcg_comp_P003_TM_TrainToTrack */
#endif /* kcg_use_P003_TM_TrainToTrack */

#ifdef kcg_use_nvkvintset_T_Packet_Types_Pkg
#ifndef kcg_comp_nvkvintset_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_nvkvintset_T_Packet_Types_Pkg(
  nvkvintset_T_Packet_Types_Pkg *kcg_c1,
  nvkvintset_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_nvkvintset_T_Packet_Types_Pkg */
#endif /* kcg_use_nvkvintset_T_Packet_Types_Pkg */

#ifdef kcg_use_SSP_T_Packet_Types_Pkg
#ifndef kcg_comp_SSP_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_SSP_T_Packet_Types_Pkg(
  SSP_T_Packet_Types_Pkg *kcg_c1,
  SSP_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_SSP_T_Packet_Types_Pkg */
#endif /* kcg_use_SSP_T_Packet_Types_Pkg */

#ifdef kcg_use_struct_279611
#ifndef kcg_comp_struct_279611
extern kcg_bool kcg_comp_struct_279611(
  struct_279611 *kcg_c1,
  struct_279611 *kcg_c2);
#endif /* kcg_comp_struct_279611 */
#endif /* kcg_use_struct_279611 */

#ifdef kcg_use_API_TrackSideInput_T_API_Msg_Pkg
#ifndef kcg_comp_API_TrackSideInput_T_API_Msg_Pkg
extern kcg_bool kcg_comp_API_TrackSideInput_T_API_Msg_Pkg(
  API_TrackSideInput_T_API_Msg_Pkg *kcg_c1,
  API_TrackSideInput_T_API_Msg_Pkg *kcg_c2);
#endif /* kcg_comp_API_TrackSideInput_T_API_Msg_Pkg */
#endif /* kcg_use_API_TrackSideInput_T_API_Msg_Pkg */

#ifdef kcg_use_RadioMessage_T_Radio_Types_Pkg
#ifndef kcg_comp_RadioMessage_T_Radio_Types_Pkg
extern kcg_bool kcg_comp_RadioMessage_T_Radio_Types_Pkg(
  RadioMessage_T_Radio_Types_Pkg *kcg_c1,
  RadioMessage_T_Radio_Types_Pkg *kcg_c2);
#endif /* kcg_comp_RadioMessage_T_Radio_Types_Pkg */
#endif /* kcg_use_RadioMessage_T_Radio_Types_Pkg */

#ifdef kcg_use_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg
#ifndef kcg_comp_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(
  Message_Train_Interface_to_EVC_T_TIU_Types_Pkg *kcg_c1,
  Message_Train_Interface_to_EVC_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg */
#endif /* kcg_use_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg */

#ifdef kcg_use_radioManagementMessage_T_Common_Types_Pkg
#ifndef kcg_comp_radioManagementMessage_T_Common_Types_Pkg
extern kcg_bool kcg_comp_radioManagementMessage_T_Common_Types_Pkg(
  radioManagementMessage_T_Common_Types_Pkg *kcg_c1,
  radioManagementMessage_T_Common_Types_Pkg *kcg_c2);
#endif /* kcg_comp_radioManagementMessage_T_Common_Types_Pkg */
#endif /* kcg_use_radioManagementMessage_T_Common_Types_Pkg */

#ifndef kcg_comp_infoFromLinking_T_TrainPosition_Types_Pck
extern kcg_bool kcg_comp_infoFromLinking_T_TrainPosition_Types_Pck(
  infoFromLinking_T_TrainPosition_Types_Pck *kcg_c1,
  infoFromLinking_T_TrainPosition_Types_Pck *kcg_c2);
#define kcg_use_infoFromLinking_T_TrainPosition_Types_Pck
#endif /* kcg_comp_infoFromLinking_T_TrainPosition_Types_Pck */

#ifdef kcg_use_dmiOutputs_T_manage_DMI_Output_Pkg
#ifndef kcg_comp_dmiOutputs_T_manage_DMI_Output_Pkg
extern kcg_bool kcg_comp_dmiOutputs_T_manage_DMI_Output_Pkg(
  dmiOutputs_T_manage_DMI_Output_Pkg *kcg_c1,
  dmiOutputs_T_manage_DMI_Output_Pkg *kcg_c2);
#endif /* kcg_comp_dmiOutputs_T_manage_DMI_Output_Pkg */
#endif /* kcg_use_dmiOutputs_T_manage_DMI_Output_Pkg */

#ifdef kcg_use_extractTargetsMRSPACC_TargetManagement_pkg
#ifndef kcg_comp_extractTargetsMRSPACC_TargetManagement_pkg
extern kcg_bool kcg_comp_extractTargetsMRSPACC_TargetManagement_pkg(
  extractTargetsMRSPACC_TargetManagement_pkg *kcg_c1,
  extractTargetsMRSPACC_TargetManagement_pkg *kcg_c2);
#endif /* kcg_comp_extractTargetsMRSPACC_TargetManagement_pkg */
#endif /* kcg_use_extractTargetsMRSPACC_TargetManagement_pkg */

#ifdef kcg_use_M_current_T_TIU_Types_Pkg
#ifndef kcg_comp_M_current_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_M_current_T_TIU_Types_Pkg(
  M_current_T_TIU_Types_Pkg *kcg_c1,
  M_current_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_M_current_T_TIU_Types_Pkg */
#endif /* kcg_use_M_current_T_TIU_Types_Pkg */

#ifndef kcg_comp_passedBG_T_BG_Types_Pkg
extern kcg_bool kcg_comp_passedBG_T_BG_Types_Pkg(
  passedBG_T_BG_Types_Pkg *kcg_c1,
  passedBG_T_BG_Types_Pkg *kcg_c2);
#define kcg_use_passedBG_T_BG_Types_Pkg
#endif /* kcg_comp_passedBG_T_BG_Types_Pkg */

#ifdef kcg_use_array
#ifndef kcg_comp_array
extern kcg_bool kcg_comp_array(array *kcg_c1, array *kcg_c2);
#endif /* kcg_comp_array */
#endif /* kcg_use_array */

#ifdef kcg_use_array_bool_8
#ifndef kcg_comp_array_bool_8
extern kcg_bool kcg_comp_array_bool_8(
  array_bool_8 *kcg_c1,
  array_bool_8 *kcg_c2);
#endif /* kcg_comp_array_bool_8 */
#endif /* kcg_use_array_bool_8 */

#ifdef kcg_use_P044_other_data_TM_TrainToTrack
#ifndef kcg_comp_P044_other_data_TM_TrainToTrack
extern kcg_bool kcg_comp_P044_other_data_TM_TrainToTrack(
  P044_other_data_TM_TrainToTrack *kcg_c1,
  P044_other_data_TM_TrainToTrack *kcg_c2);
#endif /* kcg_comp_P044_other_data_TM_TrainToTrack */
#endif /* kcg_use_P044_other_data_TM_TrainToTrack */

#ifdef kcg_use_GradientProfile_real_compensated_t_SDM_GradientAcceleration_types
#ifndef kcg_comp_GradientProfile_real_compensated_t_SDM_GradientAcceleration_types
extern kcg_bool kcg_comp_GradientProfile_real_compensated_t_SDM_GradientAcceleration_types(
  GradientProfile_real_compensated_t_SDM_GradientAcceleration_types *kcg_c1,
  GradientProfile_real_compensated_t_SDM_GradientAcceleration_types *kcg_c2);
#endif /* kcg_comp_GradientProfile_real_compensated_t_SDM_GradientAcceleration_types */
#endif /* kcg_use_GradientProfile_real_compensated_t_SDM_GradientAcceleration_types */

#ifdef kcg_use_A_gradient_t_SDM_GradientAcceleration_types
#ifndef kcg_comp_A_gradient_t_SDM_GradientAcceleration_types
extern kcg_bool kcg_comp_A_gradient_t_SDM_GradientAcceleration_types(
  A_gradient_t_SDM_GradientAcceleration_types *kcg_c1,
  A_gradient_t_SDM_GradientAcceleration_types *kcg_c2);
#endif /* kcg_comp_A_gradient_t_SDM_GradientAcceleration_types */
#endif /* kcg_use_A_gradient_t_SDM_GradientAcceleration_types */

#ifdef kcg_use__112_array
#ifndef kcg_comp__112_array
extern kcg_bool kcg_comp__112_array(_112_array *kcg_c1, _112_array *kcg_c2);
#endif /* kcg_comp__112_array */
#endif /* kcg_use__112_array */

#ifdef kcg_use__113_array
#ifndef kcg_comp__113_array
extern kcg_bool kcg_comp__113_array(_113_array *kcg_c1, _113_array *kcg_c2);
#endif /* kcg_comp__113_array */
#endif /* kcg_use__113_array */

#ifdef kcg_use__114_array
#ifndef kcg_comp__114_array
extern kcg_bool kcg_comp__114_array(_114_array *kcg_c1, _114_array *kcg_c2);
#endif /* kcg_comp__114_array */
#endif /* kcg_use__114_array */

#ifdef kcg_use__115_array
#ifndef kcg_comp__115_array
extern kcg_bool kcg_comp__115_array(_115_array *kcg_c1, _115_array *kcg_c2);
#endif /* kcg_comp__115_array */
#endif /* kcg_use__115_array */

#ifdef kcg_use_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal
#ifndef kcg_comp_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal
extern kcg_bool kcg_comp_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
  M_TrainTrackRadioOutputBuffer_t_TM_lib_internal *kcg_c1,
  M_TrainTrackRadioOutputBuffer_t_TM_lib_internal *kcg_c2);
#endif /* kcg_comp_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal */
#endif /* kcg_use_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal */

#ifdef kcg_use_array_int32_4
#ifndef kcg_comp_array_int32_4
extern kcg_bool kcg_comp_array_int32_4(
  array_int32_4 *kcg_c1,
  array_int32_4 *kcg_c2);
#endif /* kcg_comp_array_int32_4 */
#endif /* kcg_use_array_int32_4 */

#ifdef kcg_use__116_array
#ifndef kcg_comp__116_array
extern kcg_bool kcg_comp__116_array(_116_array *kcg_c1, _116_array *kcg_c2);
#endif /* kcg_comp__116_array */
#endif /* kcg_use__116_array */

#ifdef kcg_use_MovementAuthoritySectionlist_t_TrackAtlasTypes
#ifndef kcg_comp_MovementAuthoritySectionlist_t_TrackAtlasTypes
extern kcg_bool kcg_comp_MovementAuthoritySectionlist_t_TrackAtlasTypes(
  MovementAuthoritySectionlist_t_TrackAtlasTypes *kcg_c1,
  MovementAuthoritySectionlist_t_TrackAtlasTypes *kcg_c2);
#endif /* kcg_comp_MovementAuthoritySectionlist_t_TrackAtlasTypes */
#endif /* kcg_use_MovementAuthoritySectionlist_t_TrackAtlasTypes */

#ifdef kcg_use_array_int32_10
#ifndef kcg_comp_array_int32_10
extern kcg_bool kcg_comp_array_int32_10(
  array_int32_10 *kcg_c1,
  array_int32_10 *kcg_c2);
#endif /* kcg_comp_array_int32_10 */
#endif /* kcg_use_array_int32_10 */

#ifdef kcg_use_P015_OBU_sectionlist_enum_T_TM
#ifndef kcg_comp_P015_OBU_sectionlist_enum_T_TM
extern kcg_bool kcg_comp_P015_OBU_sectionlist_enum_T_TM(
  P015_OBU_sectionlist_enum_T_TM *kcg_c1,
  P015_OBU_sectionlist_enum_T_TM *kcg_c2);
#endif /* kcg_comp_P015_OBU_sectionlist_enum_T_TM */
#endif /* kcg_use_P015_OBU_sectionlist_enum_T_TM */

#ifdef kcg_use__117_array
#ifndef kcg_comp__117_array
extern kcg_bool kcg_comp__117_array(_117_array *kcg_c1, _117_array *kcg_c2);
#endif /* kcg_comp__117_array */
#endif /* kcg_use__117_array */

#ifdef kcg_use__118_array
#ifndef kcg_comp__118_array
extern kcg_bool kcg_comp__118_array(_118_array *kcg_c1, _118_array *kcg_c2);
#endif /* kcg_comp__118_array */
#endif /* kcg_use__118_array */

#ifdef kcg_use_DMI_Text_Message_int_array_T_DATA
#ifndef kcg_comp_DMI_Text_Message_int_array_T_DATA
extern kcg_bool kcg_comp_DMI_Text_Message_int_array_T_DATA(
  DMI_Text_Message_int_array_T_DATA *kcg_c1,
  DMI_Text_Message_int_array_T_DATA *kcg_c2);
#endif /* kcg_comp_DMI_Text_Message_int_array_T_DATA */
#endif /* kcg_use_DMI_Text_Message_int_array_T_DATA */

#ifdef kcg_use__119_array
#ifndef kcg_comp__119_array
extern kcg_bool kcg_comp__119_array(_119_array *kcg_c1, _119_array *kcg_c2);
#endif /* kcg_comp__119_array */
#endif /* kcg_use__119_array */

#ifdef kcg_use_array_int32_7
#ifndef kcg_comp_array_int32_7
extern kcg_bool kcg_comp_array_int32_7(
  array_int32_7 *kcg_c1,
  array_int32_7 *kcg_c2);
#endif /* kcg_comp_array_int32_7 */
#endif /* kcg_use_array_int32_7 */

#ifdef kcg_use_array_bool_30
#ifndef kcg_comp_array_bool_30
extern kcg_bool kcg_comp_array_bool_30(
  array_bool_30 *kcg_c1,
  array_bool_30 *kcg_c2);
#endif /* kcg_comp_array_bool_30 */
#endif /* kcg_use_array_bool_30 */

#ifdef kcg_use_array_int32_99
#ifndef kcg_comp_array_int32_99
extern kcg_bool kcg_comp_array_int32_99(
  array_int32_99 *kcg_c1,
  array_int32_99 *kcg_c2);
#endif /* kcg_comp_array_int32_99 */
#endif /* kcg_use_array_int32_99 */

#ifdef kcg_use_array_bool_7
#ifndef kcg_comp_array_bool_7
extern kcg_bool kcg_comp_array_bool_7(
  array_bool_7 *kcg_c1,
  array_bool_7 *kcg_c2);
#endif /* kcg_comp_array_bool_7 */
#endif /* kcg_use_array_bool_7 */

#ifdef kcg_use_array_float32_100_13
#ifndef kcg_comp_array_float32_100_13
extern kcg_bool kcg_comp_array_float32_100_13(
  array_float32_100_13 *kcg_c1,
  array_float32_100_13 *kcg_c2);
#endif /* kcg_comp_array_float32_100_13 */
#endif /* kcg_use_array_float32_100_13 */

#ifdef kcg_use_array_int32_13
#ifndef kcg_comp_array_int32_13
extern kcg_bool kcg_comp_array_int32_13(
  array_int32_13 *kcg_c1,
  array_int32_13 *kcg_c2);
#endif /* kcg_comp_array_int32_13 */
#endif /* kcg_use_array_int32_13 */

#ifdef kcg_use_P011_voltage_sectionlist_array_T_TM_TrainToTrack
#ifndef kcg_comp_P011_voltage_sectionlist_array_T_TM_TrainToTrack
extern kcg_bool kcg_comp_P011_voltage_sectionlist_array_T_TM_TrainToTrack(
  P011_voltage_sectionlist_array_T_TM_TrainToTrack *kcg_c1,
  P011_voltage_sectionlist_array_T_TM_TrainToTrack *kcg_c2);
#endif /* kcg_comp_P011_voltage_sectionlist_array_T_TM_TrainToTrack */
#endif /* kcg_use_P011_voltage_sectionlist_array_T_TM_TrainToTrack */

#ifdef kcg_use__120_array
#ifndef kcg_comp__120_array
extern kcg_bool kcg_comp__120_array(_120_array *kcg_c1, _120_array *kcg_c2);
#endif /* kcg_comp__120_array */
#endif /* kcg_use__120_array */

#ifdef kcg_use_array_bool_110
#ifndef kcg_comp_array_bool_110
extern kcg_bool kcg_comp_array_bool_110(
  array_bool_110 *kcg_c1,
  array_bool_110 *kcg_c2);
#endif /* kcg_comp_array_bool_110 */
#endif /* kcg_use_array_bool_110 */

#ifdef kcg_use__121_array
#ifndef kcg_comp__121_array
extern kcg_bool kcg_comp__121_array(_121_array *kcg_c1, _121_array *kcg_c2);
#endif /* kcg_comp__121_array */
#endif /* kcg_use__121_array */

#ifdef kcg_use_array_bool_41
#ifndef kcg_comp_array_bool_41
extern kcg_bool kcg_comp_array_bool_41(
  array_bool_41 *kcg_c1,
  array_bool_41 *kcg_c2);
#endif /* kcg_comp_array_bool_41 */
#endif /* kcg_use_array_bool_41 */

#ifdef kcg_use_array_float32_3
#ifndef kcg_comp_array_float32_3
extern kcg_bool kcg_comp_array_float32_3(
  array_float32_3 *kcg_c1,
  array_float32_3 *kcg_c2);
#endif /* kcg_comp_array_float32_3 */
#endif /* kcg_use_array_float32_3 */

#ifdef kcg_use_DMI_TEXT_DMI_Types_Pkg
#ifndef kcg_comp_DMI_TEXT_DMI_Types_Pkg
extern kcg_bool kcg_comp_DMI_TEXT_DMI_Types_Pkg(
  DMI_TEXT_DMI_Types_Pkg *kcg_c1,
  DMI_TEXT_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_TEXT_DMI_Types_Pkg */
#endif /* kcg_use_DMI_TEXT_DMI_Types_Pkg */

#ifdef kcg_use__122_array
#ifndef kcg_comp__122_array
extern kcg_bool kcg_comp__122_array(_122_array *kcg_c1, _122_array *kcg_c2);
#endif /* kcg_comp__122_array */
#endif /* kcg_use__122_array */

#ifdef kcg_use_array_int32_25
#ifndef kcg_comp_array_int32_25
extern kcg_bool kcg_comp_array_int32_25(
  array_int32_25 *kcg_c1,
  array_int32_25 *kcg_c2);
#endif /* kcg_comp_array_int32_25 */
#endif /* kcg_use_array_int32_25 */

#ifdef kcg_use__123_array
#ifndef kcg_comp__123_array
extern kcg_bool kcg_comp__123_array(_123_array *kcg_c1, _123_array *kcg_c2);
#endif /* kcg_comp__123_array */
#endif /* kcg_use__123_array */

#ifdef kcg_use__124_array
#ifndef kcg_comp__124_array
extern kcg_bool kcg_comp__124_array(_124_array *kcg_c1, _124_array *kcg_c2);
#endif /* kcg_comp__124_array */
#endif /* kcg_use__124_array */

#ifdef kcg_use__125_array
#ifndef kcg_comp__125_array
extern kcg_bool kcg_comp__125_array(_125_array *kcg_c1, _125_array *kcg_c2);
#endif /* kcg_comp__125_array */
#endif /* kcg_use__125_array */

#ifdef kcg_use_array_int32_31
#ifndef kcg_comp_array_int32_31
extern kcg_bool kcg_comp_array_int32_31(
  array_int32_31 *kcg_c1,
  array_int32_31 *kcg_c2);
#endif /* kcg_comp_array_int32_31 */
#endif /* kcg_use_array_int32_31 */

#ifdef kcg_use_array_float32_6
#ifndef kcg_comp_array_float32_6
extern kcg_bool kcg_comp_array_float32_6(
  array_float32_6 *kcg_c1,
  array_float32_6 *kcg_c2);
#endif /* kcg_comp_array_float32_6 */
#endif /* kcg_use_array_float32_6 */

#ifdef kcg_use_array_int32_114
#ifndef kcg_comp_array_int32_114
extern kcg_bool kcg_comp_array_int32_114(
  array_int32_114 *kcg_c1,
  array_int32_114 *kcg_c2);
#endif /* kcg_comp_array_int32_114 */
#endif /* kcg_use_array_int32_114 */

#ifdef kcg_use_array_int32_28
#ifndef kcg_comp_array_int32_28
extern kcg_bool kcg_comp_array_int32_28(
  array_int32_28 *kcg_c1,
  array_int32_28 *kcg_c2);
#endif /* kcg_comp_array_int32_28 */
#endif /* kcg_use_array_int32_28 */

#ifdef kcg_use__126_array
#ifndef kcg_comp__126_array
extern kcg_bool kcg_comp__126_array(_126_array *kcg_c1, _126_array *kcg_c2);
#endif /* kcg_comp__126_array */
#endif /* kcg_use__126_array */

#ifdef kcg_use__127_array
#ifndef kcg_comp__127_array
extern kcg_bool kcg_comp__127_array(_127_array *kcg_c1, _127_array *kcg_c2);
#endif /* kcg_comp__127_array */
#endif /* kcg_use__127_array */

#ifdef kcg_use__128_array
#ifndef kcg_comp__128_array
extern kcg_bool kcg_comp__128_array(_128_array *kcg_c1, _128_array *kcg_c2);
#endif /* kcg_comp__128_array */
#endif /* kcg_use__128_array */

#ifdef kcg_use_TransitionBuffer_T_InformationFilter_Pkg
#ifndef kcg_comp_TransitionBuffer_T_InformationFilter_Pkg
extern kcg_bool kcg_comp_TransitionBuffer_T_InformationFilter_Pkg(
  TransitionBuffer_T_InformationFilter_Pkg *kcg_c1,
  TransitionBuffer_T_InformationFilter_Pkg *kcg_c2);
#endif /* kcg_comp_TransitionBuffer_T_InformationFilter_Pkg */
#endif /* kcg_use_TransitionBuffer_T_InformationFilter_Pkg */

#ifdef kcg_use_T_Mode_Profile_Table_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_Mode_Profile_Table_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_Mode_Profile_Table_Level_And_Mode_Types_Pkg(
  T_Mode_Profile_Table_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Mode_Profile_Table_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_Mode_Profile_Table_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_Mode_Profile_Table_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_P80_ModeProfiles_T_Packet_Types_Pkg
#ifndef kcg_comp_P80_ModeProfiles_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_P80_ModeProfiles_T_Packet_Types_Pkg(
  P80_ModeProfiles_T_Packet_Types_Pkg *kcg_c1,
  P80_ModeProfiles_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_P80_ModeProfiles_T_Packet_Types_Pkg */
#endif /* kcg_use_P80_ModeProfiles_T_Packet_Types_Pkg */

#ifdef kcg_use_array_bool_6
#ifndef kcg_comp_array_bool_6
extern kcg_bool kcg_comp_array_bool_6(
  array_bool_6 *kcg_c1,
  array_bool_6 *kcg_c2);
#endif /* kcg_comp_array_bool_6 */
#endif /* kcg_use_array_bool_6 */

#ifdef kcg_use__129_array
#ifndef kcg_comp__129_array
extern kcg_bool kcg_comp__129_array(_129_array *kcg_c1, _129_array *kcg_c2);
#endif /* kcg_comp__129_array */
#endif /* kcg_use__129_array */

#ifdef kcg_use_array_int32_40
#ifndef kcg_comp_array_int32_40
extern kcg_bool kcg_comp_array_int32_40(
  array_int32_40 *kcg_c1,
  array_int32_40 *kcg_c2);
#endif /* kcg_comp_array_int32_40 */
#endif /* kcg_use_array_int32_40 */

#ifdef kcg_use__130_array
#ifndef kcg_comp__130_array
extern kcg_bool kcg_comp__130_array(_130_array *kcg_c1, _130_array *kcg_c2);
#endif /* kcg_comp__130_array */
#endif /* kcg_use__130_array */

#ifdef kcg_use_linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg
#ifndef kcg_comp_linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg
extern kcg_bool kcg_comp_linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *kcg_c1,
  linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *kcg_c2);
#endif /* kcg_comp_linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg */
#endif /* kcg_use_linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg */

#ifdef kcg_use_array_int32_627
#ifndef kcg_comp_array_int32_627
extern kcg_bool kcg_comp_array_int32_627(
  array_int32_627 *kcg_c1,
  array_int32_627 *kcg_c2);
#endif /* kcg_comp_array_int32_627 */
#endif /* kcg_use_array_int32_627 */

#ifdef kcg_use_P046_OBU_sectionlist_enum_T_TM
#ifndef kcg_comp_P046_OBU_sectionlist_enum_T_TM
extern kcg_bool kcg_comp_P046_OBU_sectionlist_enum_T_TM(
  P046_OBU_sectionlist_enum_T_TM *kcg_c1,
  P046_OBU_sectionlist_enum_T_TM *kcg_c2);
#endif /* kcg_comp_P046_OBU_sectionlist_enum_T_TM */
#endif /* kcg_use_P046_OBU_sectionlist_enum_T_TM */

#ifdef kcg_use_P021_OBU_sectionlist_enum_T_TM
#ifndef kcg_comp_P021_OBU_sectionlist_enum_T_TM
extern kcg_bool kcg_comp_P021_OBU_sectionlist_enum_T_TM(
  P021_OBU_sectionlist_enum_T_TM *kcg_c1,
  P021_OBU_sectionlist_enum_T_TM *kcg_c2);
#endif /* kcg_comp_P021_OBU_sectionlist_enum_T_TM */
#endif /* kcg_use_P021_OBU_sectionlist_enum_T_TM */

#ifdef kcg_use_P041_OBU_sectionlist_enum_T_TM
#ifndef kcg_comp_P041_OBU_sectionlist_enum_T_TM
extern kcg_bool kcg_comp_P041_OBU_sectionlist_enum_T_TM(
  P041_OBU_sectionlist_enum_T_TM *kcg_c1,
  P041_OBU_sectionlist_enum_T_TM *kcg_c2);
#endif /* kcg_comp_P041_OBU_sectionlist_enum_T_TM */
#endif /* kcg_use_P041_OBU_sectionlist_enum_T_TM */

#ifdef kcg_use_array_int32_129
#ifndef kcg_comp_array_int32_129
extern kcg_bool kcg_comp_array_int32_129(
  array_int32_129 *kcg_c1,
  array_int32_129 *kcg_c2);
#endif /* kcg_comp_array_int32_129 */
#endif /* kcg_use_array_int32_129 */

#ifdef kcg_use__131_array
#ifndef kcg_comp__131_array
extern kcg_bool kcg_comp__131_array(_131_array *kcg_c1, _131_array *kcg_c2);
#endif /* kcg_comp__131_array */
#endif /* kcg_use__131_array */

#ifdef kcg_use__132_array
#ifndef kcg_comp__132_array
extern kcg_bool kcg_comp__132_array(_132_array *kcg_c1, _132_array *kcg_c2);
#endif /* kcg_comp__132_array */
#endif /* kcg_use__132_array */

#ifdef kcg_use_array_float32_113
#ifndef kcg_comp_array_float32_113
extern kcg_bool kcg_comp_array_float32_113(
  array_float32_113 *kcg_c1,
  array_float32_113 *kcg_c2);
#endif /* kcg_comp_array_float32_113 */
#endif /* kcg_use_array_float32_113 */

#ifdef kcg_use_array_int32_221
#ifndef kcg_comp_array_int32_221
extern kcg_bool kcg_comp_array_int32_221(
  array_int32_221 *kcg_c1,
  array_int32_221 *kcg_c2);
#endif /* kcg_comp_array_int32_221 */
#endif /* kcg_use_array_int32_221 */

#ifdef kcg_use__133_array
#ifndef kcg_comp__133_array
extern kcg_bool kcg_comp__133_array(_133_array *kcg_c1, _133_array *kcg_c2);
#endif /* kcg_comp__133_array */
#endif /* kcg_use__133_array */

#ifndef kcg_comp_Metadata_T_Common_Types_Pkg
extern kcg_bool kcg_comp_Metadata_T_Common_Types_Pkg(
  Metadata_T_Common_Types_Pkg *kcg_c1,
  Metadata_T_Common_Types_Pkg *kcg_c2);
#define kcg_use_Metadata_T_Common_Types_Pkg
#endif /* kcg_comp_Metadata_T_Common_Types_Pkg */

#ifdef kcg_use_array_bool_256_46_30
#ifndef kcg_comp_array_bool_256_46_30
extern kcg_bool kcg_comp_array_bool_256_46_30(
  array_bool_256_46_30 *kcg_c1,
  array_bool_256_46_30 *kcg_c2);
#endif /* kcg_comp_array_bool_256_46_30 */
#endif /* kcg_use_array_bool_256_46_30 */

#ifdef kcg_use__134_array
#ifndef kcg_comp__134_array
extern kcg_bool kcg_comp__134_array(_134_array *kcg_c1, _134_array *kcg_c2);
#endif /* kcg_comp__134_array */
#endif /* kcg_use__134_array */

#ifdef kcg_use_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types
#ifndef kcg_comp_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types
extern kcg_bool kcg_comp_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types(
  ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types *kcg_c1,
  ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types *kcg_c2);
#endif /* kcg_comp_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types */
#endif /* kcg_use_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types */

#ifdef kcg_use_MRSP_internal_T_TargetManagement_types
#ifndef kcg_comp_MRSP_internal_T_TargetManagement_types
extern kcg_bool kcg_comp_MRSP_internal_T_TargetManagement_types(
  MRSP_internal_T_TargetManagement_types *kcg_c1,
  MRSP_internal_T_TargetManagement_types *kcg_c2);
#endif /* kcg_comp_MRSP_internal_T_TargetManagement_types */
#endif /* kcg_use_MRSP_internal_T_TargetManagement_types */

#ifdef kcg_use_Target_list_MRSP_real_T_TargetManagement_types
#ifndef kcg_comp_Target_list_MRSP_real_T_TargetManagement_types
extern kcg_bool kcg_comp_Target_list_MRSP_real_T_TargetManagement_types(
  Target_list_MRSP_real_T_TargetManagement_types *kcg_c1,
  Target_list_MRSP_real_T_TargetManagement_types *kcg_c2);
#endif /* kcg_comp_Target_list_MRSP_real_T_TargetManagement_types */
#endif /* kcg_use_Target_list_MRSP_real_T_TargetManagement_types */

#ifdef kcg_use_MRSP_Profile_t_TrackAtlasTypes
#ifndef kcg_comp_MRSP_Profile_t_TrackAtlasTypes
extern kcg_bool kcg_comp_MRSP_Profile_t_TrackAtlasTypes(
  MRSP_Profile_t_TrackAtlasTypes *kcg_c1,
  MRSP_Profile_t_TrackAtlasTypes *kcg_c2);
#endif /* kcg_comp_MRSP_Profile_t_TrackAtlasTypes */
#endif /* kcg_use_MRSP_Profile_t_TrackAtlasTypes */

#ifdef kcg_use_array_int32_128_32
#ifndef kcg_comp_array_int32_128_32
extern kcg_bool kcg_comp_array_int32_128_32(
  array_int32_128_32 *kcg_c1,
  array_int32_128_32 *kcg_c2);
#endif /* kcg_comp_array_int32_128_32 */
#endif /* kcg_use_array_int32_128_32 */

#ifdef kcg_use_array_float32_110
#ifndef kcg_comp_array_float32_110
extern kcg_bool kcg_comp_array_float32_110(
  array_float32_110 *kcg_c1,
  array_float32_110 *kcg_c2);
#endif /* kcg_comp_array_float32_110 */
#endif /* kcg_use_array_float32_110 */

#ifdef kcg_use__135_array
#ifndef kcg_comp__135_array
extern kcg_bool kcg_comp__135_array(_135_array *kcg_c1, _135_array *kcg_c2);
#endif /* kcg_comp__135_array */
#endif /* kcg_use__135_array */

#ifdef kcg_use_array_int32_891
#ifndef kcg_comp_array_int32_891
extern kcg_bool kcg_comp_array_int32_891(
  array_int32_891 *kcg_c1,
  array_int32_891 *kcg_c2);
#endif /* kcg_comp_array_int32_891 */
#endif /* kcg_use_array_int32_891 */

#ifdef kcg_use__136_array
#ifndef kcg_comp__136_array
extern kcg_bool kcg_comp__136_array(_136_array *kcg_c1, _136_array *kcg_c2);
#endif /* kcg_comp__136_array */
#endif /* kcg_use__136_array */

#ifdef kcg_use__137_array
#ifndef kcg_comp__137_array
extern kcg_bool kcg_comp__137_array(_137_array *kcg_c1, _137_array *kcg_c2);
#endif /* kcg_comp__137_array */
#endif /* kcg_use__137_array */

#ifdef kcg_use__138_array
#ifndef kcg_comp__138_array
extern kcg_bool kcg_comp__138_array(_138_array *kcg_c1, _138_array *kcg_c2);
#endif /* kcg_comp__138_array */
#endif /* kcg_use__138_array */

#ifdef kcg_use_array_int32_888
#ifndef kcg_comp_array_int32_888
extern kcg_bool kcg_comp_array_int32_888(
  array_int32_888 *kcg_c1,
  array_int32_888 *kcg_c2);
#endif /* kcg_comp_array_int32_888 */
#endif /* kcg_use_array_int32_888 */

#ifdef kcg_use_MetadataTruthtable_T1_CheckEuroradioMessage
#ifndef kcg_comp_MetadataTruthtable_T1_CheckEuroradioMessage
extern kcg_bool kcg_comp_MetadataTruthtable_T1_CheckEuroradioMessage(
  MetadataTruthtable_T1_CheckEuroradioMessage *kcg_c1,
  MetadataTruthtable_T1_CheckEuroradioMessage *kcg_c2);
#endif /* kcg_comp_MetadataTruthtable_T1_CheckEuroradioMessage */
#endif /* kcg_use_MetadataTruthtable_T1_CheckEuroradioMessage */

#ifdef kcg_use_array_int32_64
#ifndef kcg_comp_array_int32_64
extern kcg_bool kcg_comp_array_int32_64(
  array_int32_64 *kcg_c1,
  array_int32_64 *kcg_c2);
#endif /* kcg_comp_array_int32_64 */
#endif /* kcg_use_array_int32_64 */

#ifdef kcg_use_array_int32_32_32
#ifndef kcg_comp_array_int32_32_32
extern kcg_bool kcg_comp_array_int32_32_32(
  array_int32_32_32 *kcg_c1,
  array_int32_32_32 *kcg_c2);
#endif /* kcg_comp_array_int32_32_32 */
#endif /* kcg_use_array_int32_32_32 */

#ifdef kcg_use__139_array
#ifndef kcg_comp__139_array
extern kcg_bool kcg_comp__139_array(_139_array *kcg_c1, _139_array *kcg_c2);
#endif /* kcg_comp__139_array */
#endif /* kcg_use__139_array */

#ifdef kcg_use_aNID_RADIO_T_Packet_TrainTypes_Pkg
#ifndef kcg_comp_aNID_RADIO_T_Packet_TrainTypes_Pkg
extern kcg_bool kcg_comp_aNID_RADIO_T_Packet_TrainTypes_Pkg(
  aNID_RADIO_T_Packet_TrainTypes_Pkg *kcg_c1,
  aNID_RADIO_T_Packet_TrainTypes_Pkg *kcg_c2);
#endif /* kcg_comp_aNID_RADIO_T_Packet_TrainTypes_Pkg */
#endif /* kcg_use_aNID_RADIO_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use__140_array
#ifndef kcg_comp__140_array
extern kcg_bool kcg_comp__140_array(_140_array *kcg_c1, _140_array *kcg_c2);
#endif /* kcg_comp__140_array */
#endif /* kcg_use__140_array */

#ifdef kcg_use_array_int32_894
#ifndef kcg_comp_array_int32_894
extern kcg_bool kcg_comp_array_int32_894(
  array_int32_894 *kcg_c1,
  array_int32_894 *kcg_c2);
#endif /* kcg_comp_array_int32_894 */
#endif /* kcg_use_array_int32_894 */

#ifdef kcg_use_ModeDecisionTableType_DataDictionary_Pkg
#ifndef kcg_comp_ModeDecisionTableType_DataDictionary_Pkg
extern kcg_bool kcg_comp_ModeDecisionTableType_DataDictionary_Pkg(
  ModeDecisionTableType_DataDictionary_Pkg *kcg_c1,
  ModeDecisionTableType_DataDictionary_Pkg *kcg_c2);
#endif /* kcg_comp_ModeDecisionTableType_DataDictionary_Pkg */
#endif /* kcg_use_ModeDecisionTableType_DataDictionary_Pkg */

#ifdef kcg_use_array_bool_256
#ifndef kcg_comp_array_bool_256
extern kcg_bool kcg_comp_array_bool_256(
  array_bool_256 *kcg_c1,
  array_bool_256 *kcg_c2);
#endif /* kcg_comp_array_bool_256 */
#endif /* kcg_use_array_bool_256 */

#ifdef kcg_use_DMI_EVC_Level_Data_int_array_T_DATA
#ifndef kcg_comp_DMI_EVC_Level_Data_int_array_T_DATA
extern kcg_bool kcg_comp_DMI_EVC_Level_Data_int_array_T_DATA(
  DMI_EVC_Level_Data_int_array_T_DATA *kcg_c1,
  DMI_EVC_Level_Data_int_array_T_DATA *kcg_c2);
#endif /* kcg_comp_DMI_EVC_Level_Data_int_array_T_DATA */
#endif /* kcg_use_DMI_EVC_Level_Data_int_array_T_DATA */

#ifdef kcg_use__141_array
#ifndef kcg_comp__141_array
extern kcg_bool kcg_comp__141_array(_141_array *kcg_c1, _141_array *kcg_c2);
#endif /* kcg_comp__141_array */
#endif /* kcg_use__141_array */

#ifdef kcg_use_DMI_Track_Description_int_array_T
#ifndef kcg_comp_DMI_Track_Description_int_array_T
extern kcg_bool kcg_comp_DMI_Track_Description_int_array_T(
  DMI_Track_Description_int_array_T *kcg_c1,
  DMI_Track_Description_int_array_T *kcg_c2);
#endif /* kcg_comp_DMI_Track_Description_int_array_T */
#endif /* kcg_use_DMI_Track_Description_int_array_T */

#ifdef kcg_use__142_array
#ifndef kcg_comp__142_array
extern kcg_bool kcg_comp__142_array(_142_array *kcg_c1, _142_array *kcg_c2);
#endif /* kcg_comp__142_array */
#endif /* kcg_use__142_array */

#ifdef kcg_use__143_array
#ifndef kcg_comp__143_array
extern kcg_bool kcg_comp__143_array(_143_array *kcg_c1, _143_array *kcg_c2);
#endif /* kcg_comp__143_array */
#endif /* kcg_use__143_array */

#ifdef kcg_use__144_array
#ifndef kcg_comp__144_array
extern kcg_bool kcg_comp__144_array(_144_array *kcg_c1, _144_array *kcg_c2);
#endif /* kcg_comp__144_array */
#endif /* kcg_use__144_array */

#ifdef kcg_use__145_array
#ifndef kcg_comp__145_array
extern kcg_bool kcg_comp__145_array(_145_array *kcg_c1, _145_array *kcg_c2);
#endif /* kcg_comp__145_array */
#endif /* kcg_use__145_array */

#ifdef kcg_use__146_array
#ifndef kcg_comp__146_array
extern kcg_bool kcg_comp__146_array(_146_array *kcg_c1, _146_array *kcg_c2);
#endif /* kcg_comp__146_array */
#endif /* kcg_use__146_array */

#ifdef kcg_use_array_bool_4
#ifndef kcg_comp_array_bool_4
extern kcg_bool kcg_comp_array_bool_4(
  array_bool_4 *kcg_c1,
  array_bool_4 *kcg_c2);
#endif /* kcg_comp_array_bool_4 */
#endif /* kcg_use_array_bool_4 */

#ifdef kcg_use_array_int32_2
#ifndef kcg_comp_array_int32_2
extern kcg_bool kcg_comp_array_int32_2(
  array_int32_2 *kcg_c1,
  array_int32_2 *kcg_c2);
#endif /* kcg_comp_array_int32_2 */
#endif /* kcg_use_array_int32_2 */

#ifdef kcg_use_array_int32_8
#ifndef kcg_comp_array_int32_8
extern kcg_bool kcg_comp_array_int32_8(
  array_int32_8 *kcg_c1,
  array_int32_8 *kcg_c2);
#endif /* kcg_comp_array_int32_8 */
#endif /* kcg_use_array_int32_8 */

#ifdef kcg_use_array_int32_5
#ifndef kcg_comp_array_int32_5
extern kcg_bool kcg_comp_array_int32_5(
  array_int32_5 *kcg_c1,
  array_int32_5 *kcg_c2);
#endif /* kcg_comp_array_int32_5 */
#endif /* kcg_use_array_int32_5 */

#ifndef kcg_comp_CompressedPacketData_T_Common_Types_Pkg
extern kcg_bool kcg_comp_CompressedPacketData_T_Common_Types_Pkg(
  CompressedPacketData_T_Common_Types_Pkg *kcg_c1,
  CompressedPacketData_T_Common_Types_Pkg *kcg_c2);
#define kcg_use_CompressedPacketData_T_Common_Types_Pkg
#endif /* kcg_comp_CompressedPacketData_T_Common_Types_Pkg */

#ifdef kcg_use__147_array
#ifndef kcg_comp__147_array
extern kcg_bool kcg_comp__147_array(_147_array *kcg_c1, _147_array *kcg_c2);
#endif /* kcg_comp__147_array */
#endif /* kcg_use__147_array */

#ifdef kcg_use_array_int32_97
#ifndef kcg_comp_array_int32_97
extern kcg_bool kcg_comp_array_int32_97(
  array_int32_97 *kcg_c1,
  array_int32_97 *kcg_c2);
#endif /* kcg_comp_array_int32_97 */
#endif /* kcg_use_array_int32_97 */

#ifdef kcg_use_array_int32_95_33
#ifndef kcg_comp_array_int32_95_33
extern kcg_bool kcg_comp_array_int32_95_33(
  array_int32_95_33 *kcg_c1,
  array_int32_95_33 *kcg_c2);
#endif /* kcg_comp_array_int32_95_33 */
#endif /* kcg_use_array_int32_95_33 */

#ifdef kcg_use_DMI_Driver_Identifier_int_array_T_DATA
#ifndef kcg_comp_DMI_Driver_Identifier_int_array_T_DATA
extern kcg_bool kcg_comp_DMI_Driver_Identifier_int_array_T_DATA(
  DMI_Driver_Identifier_int_array_T_DATA *kcg_c1,
  DMI_Driver_Identifier_int_array_T_DATA *kcg_c2);
#endif /* kcg_comp_DMI_Driver_Identifier_int_array_T_DATA */
#endif /* kcg_use_DMI_Driver_Identifier_int_array_T_DATA */

#ifdef kcg_use__148_array
#ifndef kcg_comp__148_array
extern kcg_bool kcg_comp__148_array(_148_array *kcg_c1, _148_array *kcg_c2);
#endif /* kcg_comp__148_array */
#endif /* kcg_use__148_array */

#ifdef kcg_use_array_int32_260
#ifndef kcg_comp_array_int32_260
extern kcg_bool kcg_comp_array_int32_260(
  array_int32_260 *kcg_c1,
  array_int32_260 *kcg_c2);
#endif /* kcg_comp_array_int32_260 */
#endif /* kcg_use_array_int32_260 */

#ifdef kcg_use_array_int32_17
#ifndef kcg_comp_array_int32_17
extern kcg_bool kcg_comp_array_int32_17(
  array_int32_17 *kcg_c1,
  array_int32_17 *kcg_c2);
#endif /* kcg_comp_array_int32_17 */
#endif /* kcg_use_array_int32_17 */

#ifdef kcg_use_StaticSpeedProfile_t_TrackAtlasTypes
#ifndef kcg_comp_StaticSpeedProfile_t_TrackAtlasTypes
extern kcg_bool kcg_comp_StaticSpeedProfile_t_TrackAtlasTypes(
  StaticSpeedProfile_t_TrackAtlasTypes *kcg_c1,
  StaticSpeedProfile_t_TrackAtlasTypes *kcg_c2);
#endif /* kcg_comp_StaticSpeedProfile_t_TrackAtlasTypes */
#endif /* kcg_use_StaticSpeedProfile_t_TrackAtlasTypes */

#ifdef kcg_use_GradientProfile_t_TrackAtlasTypes
#ifndef kcg_comp_GradientProfile_t_TrackAtlasTypes
extern kcg_bool kcg_comp_GradientProfile_t_TrackAtlasTypes(
  GradientProfile_t_TrackAtlasTypes *kcg_c1,
  GradientProfile_t_TrackAtlasTypes *kcg_c2);
#endif /* kcg_comp_GradientProfile_t_TrackAtlasTypes */
#endif /* kcg_use_GradientProfile_t_TrackAtlasTypes */

#ifdef kcg_use_array_int32_100
#ifndef kcg_comp_array_int32_100
extern kcg_bool kcg_comp_array_int32_100(
  array_int32_100 *kcg_c1,
  array_int32_100 *kcg_c2);
#endif /* kcg_comp_array_int32_100 */
#endif /* kcg_use_array_int32_100 */

#ifdef kcg_use_array_int32_14
#ifndef kcg_comp_array_int32_14
extern kcg_bool kcg_comp_array_int32_14(
  array_int32_14 *kcg_c1,
  array_int32_14 *kcg_c2);
#endif /* kcg_comp_array_int32_14 */
#endif /* kcg_use_array_int32_14 */

#ifdef kcg_use_array_float32_1
#ifndef kcg_comp_array_float32_1
extern kcg_bool kcg_comp_array_float32_1(
  array_float32_1 *kcg_c1,
  array_float32_1 *kcg_c2);
#endif /* kcg_comp_array_float32_1 */
#endif /* kcg_use_array_float32_1 */

#ifdef kcg_use_array_int32_23
#ifndef kcg_comp_array_int32_23
extern kcg_bool kcg_comp_array_int32_23(
  array_int32_23 *kcg_c1,
  array_int32_23 *kcg_c2);
#endif /* kcg_comp_array_int32_23 */
#endif /* kcg_use_array_int32_23 */

#ifdef kcg_use__149_array
#ifndef kcg_comp__149_array
extern kcg_bool kcg_comp__149_array(_149_array *kcg_c1, _149_array *kcg_c2);
#endif /* kcg_comp__149_array */
#endif /* kcg_use__149_array */

#ifdef kcg_use_array_int32_20
#ifndef kcg_comp_array_int32_20
extern kcg_bool kcg_comp_array_int32_20(
  array_int32_20 *kcg_c1,
  array_int32_20 *kcg_c2);
#endif /* kcg_comp_array_int32_20 */
#endif /* kcg_use_array_int32_20 */

#ifdef kcg_use__150_array
#ifndef kcg_comp__150_array
extern kcg_bool kcg_comp__150_array(_150_array *kcg_c1, _150_array *kcg_c2);
#endif /* kcg_comp__150_array */
#endif /* kcg_use__150_array */

#ifdef kcg_use__151_array
#ifndef kcg_comp__151_array
extern kcg_bool kcg_comp__151_array(_151_array *kcg_c1, _151_array *kcg_c2);
#endif /* kcg_comp__151_array */
#endif /* kcg_use__151_array */

#ifdef kcg_use__152_array
#ifndef kcg_comp__152_array
extern kcg_bool kcg_comp__152_array(_152_array *kcg_c1, _152_array *kcg_c2);
#endif /* kcg_comp__152_array */
#endif /* kcg_use__152_array */

#ifdef kcg_use_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck
#ifndef kcg_comp_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck
extern kcg_bool kcg_comp_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck(
  linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck *kcg_c1,
  linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck *kcg_c2);
#endif /* kcg_comp_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck */
#endif /* kcg_use_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck */

#ifdef kcg_use_P005_OBU_sectionlist_enum_T_TM
#ifndef kcg_comp_P005_OBU_sectionlist_enum_T_TM
extern kcg_bool kcg_comp_P005_OBU_sectionlist_enum_T_TM(
  P005_OBU_sectionlist_enum_T_TM *kcg_c1,
  P005_OBU_sectionlist_enum_T_TM *kcg_c2);
#endif /* kcg_comp_P005_OBU_sectionlist_enum_T_TM */
#endif /* kcg_use_P005_OBU_sectionlist_enum_T_TM */

#ifdef kcg_use_P080_OBU_sectionlist_enum_T_TM
#ifndef kcg_comp_P080_OBU_sectionlist_enum_T_TM
extern kcg_bool kcg_comp_P080_OBU_sectionlist_enum_T_TM(
  P080_OBU_sectionlist_enum_T_TM *kcg_c1,
  P080_OBU_sectionlist_enum_T_TM *kcg_c2);
#endif /* kcg_comp_P080_OBU_sectionlist_enum_T_TM */
#endif /* kcg_use_P080_OBU_sectionlist_enum_T_TM */

#ifdef kcg_use_P027V1_OBU_sectionlist_enum_T_TM_baseline2
#ifndef kcg_comp_P027V1_OBU_sectionlist_enum_T_TM_baseline2
extern kcg_bool kcg_comp_P027V1_OBU_sectionlist_enum_T_TM_baseline2(
  P027V1_OBU_sectionlist_enum_T_TM_baseline2 *kcg_c1,
  P027V1_OBU_sectionlist_enum_T_TM_baseline2 *kcg_c2);
#endif /* kcg_comp_P027V1_OBU_sectionlist_enum_T_TM_baseline2 */
#endif /* kcg_use_P027V1_OBU_sectionlist_enum_T_TM_baseline2 */

#ifndef kcg_comp_LinkedBGs_T_BG_Types_Pkg
extern kcg_bool kcg_comp_LinkedBGs_T_BG_Types_Pkg(
  LinkedBGs_T_BG_Types_Pkg *kcg_c1,
  LinkedBGs_T_BG_Types_Pkg *kcg_c2);
#define kcg_use_LinkedBGs_T_BG_Types_Pkg
#endif /* kcg_comp_LinkedBGs_T_BG_Types_Pkg */

#ifdef kcg_use_MyArray_SDM_Commands_Pkg
#ifndef kcg_comp_MyArray_SDM_Commands_Pkg
extern kcg_bool kcg_comp_MyArray_SDM_Commands_Pkg(
  MyArray_SDM_Commands_Pkg *kcg_c1,
  MyArray_SDM_Commands_Pkg *kcg_c2);
#endif /* kcg_comp_MyArray_SDM_Commands_Pkg */
#endif /* kcg_use_MyArray_SDM_Commands_Pkg */

#ifdef kcg_use_array_float32_10
#ifndef kcg_comp_array_float32_10
extern kcg_bool kcg_comp_array_float32_10(
  array_float32_10 *kcg_c1,
  array_float32_10 *kcg_c2);
#endif /* kcg_comp_array_float32_10 */
#endif /* kcg_use_array_float32_10 */

#ifdef kcg_use_array_int32_32
#ifndef kcg_comp_array_int32_32
extern kcg_bool kcg_comp_array_int32_32(
  array_int32_32 *kcg_c1,
  array_int32_32 *kcg_c2);
#endif /* kcg_comp_array_int32_32 */
#endif /* kcg_use_array_int32_32 */

#ifdef kcg_use_P080_sections_array_flat_T_TM
#ifndef kcg_comp_P080_sections_array_flat_T_TM
extern kcg_bool kcg_comp_P080_sections_array_flat_T_TM(
  P080_sections_array_flat_T_TM *kcg_c1,
  P080_sections_array_flat_T_TM *kcg_c2);
#endif /* kcg_comp_P080_sections_array_flat_T_TM */
#endif /* kcg_use_P080_sections_array_flat_T_TM */

#ifdef kcg_use__153_array
#ifndef kcg_comp__153_array
extern kcg_bool kcg_comp__153_array(_153_array *kcg_c1, _153_array *kcg_c2);
#endif /* kcg_comp__153_array */
#endif /* kcg_use__153_array */

#ifdef kcg_use_array_float32_13
#ifndef kcg_comp_array_float32_13
extern kcg_bool kcg_comp_array_float32_13(
  array_float32_13 *kcg_c1,
  array_float32_13 *kcg_c2);
#endif /* kcg_comp_array_float32_13 */
#endif /* kcg_use_array_float32_13 */

#ifdef kcg_use__154_array
#ifndef kcg_comp__154_array
extern kcg_bool kcg_comp__154_array(_154_array *kcg_c1, _154_array *kcg_c2);
#endif /* kcg_comp__154_array */
#endif /* kcg_use__154_array */

#ifdef kcg_use__155_array
#ifndef kcg_comp__155_array
extern kcg_bool kcg_comp__155_array(_155_array *kcg_c1, _155_array *kcg_c2);
#endif /* kcg_comp__155_array */
#endif /* kcg_use__155_array */

#ifdef kcg_use_array_int32_41
#ifndef kcg_comp_array_int32_41
extern kcg_bool kcg_comp_array_int32_41(
  array_int32_41 *kcg_c1,
  array_int32_41 *kcg_c2);
#endif /* kcg_comp_array_int32_41 */
#endif /* kcg_use_array_int32_41 */

#ifdef kcg_use_M_TrainTrack_compressed_packets_T_TM_radio_messages
#ifndef kcg_comp_M_TrainTrack_compressed_packets_T_TM_radio_messages
extern kcg_bool kcg_comp_M_TrainTrack_compressed_packets_T_TM_radio_messages(
  M_TrainTrack_compressed_packets_T_TM_radio_messages *kcg_c1,
  M_TrainTrack_compressed_packets_T_TM_radio_messages *kcg_c2);
#endif /* kcg_comp_M_TrainTrack_compressed_packets_T_TM_radio_messages */
#endif /* kcg_use_M_TrainTrack_compressed_packets_T_TM_radio_messages */

#ifdef kcg_use_array_int32_302
#ifndef kcg_comp_array_int32_302
extern kcg_bool kcg_comp_array_int32_302(
  array_int32_302 *kcg_c1,
  array_int32_302 *kcg_c2);
#endif /* kcg_comp_array_int32_302 */
#endif /* kcg_use_array_int32_302 */

#ifdef kcg_use__156_array
#ifndef kcg_comp__156_array
extern kcg_bool kcg_comp__156_array(_156_array *kcg_c1, _156_array *kcg_c2);
#endif /* kcg_comp__156_array */
#endif /* kcg_use__156_array */

#ifdef kcg_use_array_float32_100_1
#ifndef kcg_comp_array_float32_100_1
extern kcg_bool kcg_comp_array_float32_100_1(
  array_float32_100_1 *kcg_c1,
  array_float32_100_1 *kcg_c2);
#endif /* kcg_comp_array_float32_100_1 */
#endif /* kcg_use_array_float32_100_1 */

#ifdef kcg_use_array_float32_114
#ifndef kcg_comp_array_float32_114
extern kcg_bool kcg_comp_array_float32_114(
  array_float32_114 *kcg_c1,
  array_float32_114 *kcg_c2);
#endif /* kcg_comp_array_float32_114 */
#endif /* kcg_use_array_float32_114 */

#ifdef kcg_use_P058_OBU_sectionlist_enum_T_TM
#ifndef kcg_comp_P058_OBU_sectionlist_enum_T_TM
extern kcg_bool kcg_comp_P058_OBU_sectionlist_enum_T_TM(
  P058_OBU_sectionlist_enum_T_TM *kcg_c1,
  P058_OBU_sectionlist_enum_T_TM *kcg_c2);
#endif /* kcg_comp_P058_OBU_sectionlist_enum_T_TM */
#endif /* kcg_use_P058_OBU_sectionlist_enum_T_TM */

#ifdef kcg_use__157_array
#ifndef kcg_comp__157_array
extern kcg_bool kcg_comp__157_array(_157_array *kcg_c1, _157_array *kcg_c2);
#endif /* kcg_comp__157_array */
#endif /* kcg_use__157_array */

#ifdef kcg_use__3_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2
#ifndef kcg_comp__3_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2
extern kcg_bool kcg_comp__3_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2(
  _3_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 *kcg_c1,
  _3_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 *kcg_c2);
#endif /* kcg_comp__3_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 */
#endif /* kcg_use__3_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 */

#ifdef kcg_use_DMI_gradientProfileArray_T_DMI_Types_Pkg
#ifndef kcg_comp_DMI_gradientProfileArray_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_DMI_gradientProfileArray_T_DMI_Types_Pkg(
  DMI_gradientProfileArray_T_DMI_Types_Pkg *kcg_c1,
  DMI_gradientProfileArray_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_gradientProfileArray_T_DMI_Types_Pkg */
#endif /* kcg_use_DMI_gradientProfileArray_T_DMI_Types_Pkg */

#ifdef kcg_use_DMI_SpeedProfileArray_T_DMI_Types_Pkg
#ifndef kcg_comp_DMI_SpeedProfileArray_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_DMI_SpeedProfileArray_T_DMI_Types_Pkg(
  DMI_SpeedProfileArray_T_DMI_Types_Pkg *kcg_c1,
  DMI_SpeedProfileArray_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_SpeedProfileArray_T_DMI_Types_Pkg */
#endif /* kcg_use_DMI_SpeedProfileArray_T_DMI_Types_Pkg */

#ifdef kcg_use__158_array
#ifndef kcg_comp__158_array
extern kcg_bool kcg_comp__158_array(_158_array *kcg_c1, _158_array *kcg_c2);
#endif /* kcg_comp__158_array */
#endif /* kcg_use__158_array */

#ifdef kcg_use__159_array
#ifndef kcg_comp__159_array
extern kcg_bool kcg_comp__159_array(_159_array *kcg_c1, _159_array *kcg_c2);
#endif /* kcg_comp__159_array */
#endif /* kcg_use__159_array */

#ifdef kcg_use__160_array
#ifndef kcg_comp__160_array
extern kcg_bool kcg_comp__160_array(_160_array *kcg_c1, _160_array *kcg_c2);
#endif /* kcg_comp__160_array */
#endif /* kcg_use__160_array */

#ifdef kcg_use_DMI_level_array_T_DMI_Types_Pkg
#ifndef kcg_comp_DMI_level_array_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_DMI_level_array_T_DMI_Types_Pkg(
  DMI_level_array_T_DMI_Types_Pkg *kcg_c1,
  DMI_level_array_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_level_array_T_DMI_Types_Pkg */
#endif /* kcg_use_DMI_level_array_T_DMI_Types_Pkg */

#ifdef kcg_use_DMI_trackConditionArray_T_DMI_Types_Pkg
#ifndef kcg_comp_DMI_trackConditionArray_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_DMI_trackConditionArray_T_DMI_Types_Pkg(
  DMI_trackConditionArray_T_DMI_Types_Pkg *kcg_c1,
  DMI_trackConditionArray_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_trackConditionArray_T_DMI_Types_Pkg */
#endif /* kcg_use_DMI_trackConditionArray_T_DMI_Types_Pkg */

#ifdef kcg_use_DMI_to_EVC_Message_int_T_API_DMI_Pkg
#ifndef kcg_comp_DMI_to_EVC_Message_int_T_API_DMI_Pkg
extern kcg_bool kcg_comp_DMI_to_EVC_Message_int_T_API_DMI_Pkg(
  DMI_to_EVC_Message_int_T_API_DMI_Pkg *kcg_c1,
  DMI_to_EVC_Message_int_T_API_DMI_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_to_EVC_Message_int_T_API_DMI_Pkg */
#endif /* kcg_use_DMI_to_EVC_Message_int_T_API_DMI_Pkg */

#ifdef kcg_use__161_array
#ifndef kcg_comp__161_array
extern kcg_bool kcg_comp__161_array(_161_array *kcg_c1, _161_array *kcg_c2);
#endif /* kcg_comp__161_array */
#endif /* kcg_use__161_array */

#ifdef kcg_use_array_int32_975
#ifndef kcg_comp_array_int32_975
extern kcg_bool kcg_comp_array_int32_975(
  array_int32_975 *kcg_c1,
  array_int32_975 *kcg_c2);
#endif /* kcg_comp_array_int32_975 */
#endif /* kcg_use_array_int32_975 */

#ifdef kcg_use_array_int32_99_33
#ifndef kcg_comp_array_int32_99_33
extern kcg_bool kcg_comp_array_int32_99_33(
  array_int32_99_33 *kcg_c1,
  array_int32_99_33 *kcg_c2);
#endif /* kcg_comp_array_int32_99_33 */
#endif /* kcg_use_array_int32_99_33 */

#ifdef kcg_use_array_bool_1
#ifndef kcg_comp_array_bool_1
extern kcg_bool kcg_comp_array_bool_1(
  array_bool_1 *kcg_c1,
  array_bool_1 *kcg_c2);
#endif /* kcg_comp_array_bool_1 */
#endif /* kcg_use_array_bool_1 */

#ifdef kcg_use_array_int32_65
#ifndef kcg_comp_array_int32_65
extern kcg_bool kcg_comp_array_int32_65(
  array_int32_65 *kcg_c1,
  array_int32_65 *kcg_c2);
#endif /* kcg_comp_array_int32_65 */
#endif /* kcg_use_array_int32_65 */

#ifdef kcg_use_array_int32_500_500
#ifndef kcg_comp_array_int32_500_500
extern kcg_bool kcg_comp_array_int32_500_500(
  array_int32_500_500 *kcg_c1,
  array_int32_500_500 *kcg_c2);
#endif /* kcg_comp_array_int32_500_500 */
#endif /* kcg_use_array_int32_500_500 */

#ifdef kcg_use__162_array
#ifndef kcg_comp__162_array
extern kcg_bool kcg_comp__162_array(_162_array *kcg_c1, _162_array *kcg_c2);
#endif /* kcg_comp__162_array */
#endif /* kcg_use__162_array */

#ifdef kcg_use__163_array
#ifndef kcg_comp__163_array
extern kcg_bool kcg_comp__163_array(_163_array *kcg_c1, _163_array *kcg_c2);
#endif /* kcg_comp__163_array */
#endif /* kcg_use__163_array */

#ifdef kcg_use_ReportedBGList_T_ProvidePositionReport_Pkg
#ifndef kcg_comp_ReportedBGList_T_ProvidePositionReport_Pkg
extern kcg_bool kcg_comp_ReportedBGList_T_ProvidePositionReport_Pkg(
  ReportedBGList_T_ProvidePositionReport_Pkg *kcg_c1,
  ReportedBGList_T_ProvidePositionReport_Pkg *kcg_c2);
#endif /* kcg_comp_ReportedBGList_T_ProvidePositionReport_Pkg */
#endif /* kcg_use_ReportedBGList_T_ProvidePositionReport_Pkg */

#ifdef kcg_use_TelegramArray_T_BG_Types_Pkg
#ifndef kcg_comp_TelegramArray_T_BG_Types_Pkg
extern kcg_bool kcg_comp_TelegramArray_T_BG_Types_Pkg(
  TelegramArray_T_BG_Types_Pkg *kcg_c1,
  TelegramArray_T_BG_Types_Pkg *kcg_c2);
#endif /* kcg_comp_TelegramArray_T_BG_Types_Pkg */
#endif /* kcg_use_TelegramArray_T_BG_Types_Pkg */

#ifdef kcg_use__164_array
#ifndef kcg_comp__164_array
extern kcg_bool kcg_comp__164_array(_164_array *kcg_c1, _164_array *kcg_c2);
#endif /* kcg_comp__164_array */
#endif /* kcg_use__164_array */

#ifdef kcg_use_array_int32_978
#ifndef kcg_comp_array_int32_978
extern kcg_bool kcg_comp_array_int32_978(
  array_int32_978 *kcg_c1,
  array_int32_978 *kcg_c2);
#endif /* kcg_comp_array_int32_978 */
#endif /* kcg_use_array_int32_978 */

#ifdef kcg_use_array_int32_987
#ifndef kcg_comp_array_int32_987
extern kcg_bool kcg_comp_array_int32_987(
  array_int32_987 *kcg_c1,
  array_int32_987 *kcg_c2);
#endif /* kcg_comp_array_int32_987 */
#endif /* kcg_use_array_int32_987 */

#ifdef kcg_use_DMI_TXT_MSGList_status_T_DMI_Types_Pkg
#ifndef kcg_comp_DMI_TXT_MSGList_status_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg *kcg_c1,
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_TXT_MSGList_status_T_DMI_Types_Pkg */
#endif /* kcg_use_DMI_TXT_MSGList_status_T_DMI_Types_Pkg */

#ifdef kcg_use__165_array
#ifndef kcg_comp__165_array
extern kcg_bool kcg_comp__165_array(_165_array *kcg_c1, _165_array *kcg_c2);
#endif /* kcg_comp__165_array */
#endif /* kcg_use__165_array */

#ifdef kcg_use_driverIdentifier_T_DMI_Messages_Bothways_Pkg
#ifndef kcg_comp_driverIdentifier_T_DMI_Messages_Bothways_Pkg
extern kcg_bool kcg_comp_driverIdentifier_T_DMI_Messages_Bothways_Pkg(
  driverIdentifier_T_DMI_Messages_Bothways_Pkg *kcg_c1,
  driverIdentifier_T_DMI_Messages_Bothways_Pkg *kcg_c2);
#endif /* kcg_comp_driverIdentifier_T_DMI_Messages_Bothways_Pkg */
#endif /* kcg_use_driverIdentifier_T_DMI_Messages_Bothways_Pkg */

#ifdef kcg_use_array_int32_990
#ifndef kcg_comp_array_int32_990
extern kcg_bool kcg_comp_array_int32_990(
  array_int32_990 *kcg_c1,
  array_int32_990 *kcg_c2);
#endif /* kcg_comp_array_int32_990 */
#endif /* kcg_use_array_int32_990 */

#ifdef kcg_use_LevelDecisionTableType_DataDictionary_Pkg
#ifndef kcg_comp_LevelDecisionTableType_DataDictionary_Pkg
extern kcg_bool kcg_comp_LevelDecisionTableType_DataDictionary_Pkg(
  LevelDecisionTableType_DataDictionary_Pkg *kcg_c1,
  LevelDecisionTableType_DataDictionary_Pkg *kcg_c2);
#endif /* kcg_comp_LevelDecisionTableType_DataDictionary_Pkg */
#endif /* kcg_use_LevelDecisionTableType_DataDictionary_Pkg */

#ifdef kcg_use_array_int32_492
#ifndef kcg_comp_array_int32_492
extern kcg_bool kcg_comp_array_int32_492(
  array_int32_492 *kcg_c1,
  array_int32_492 *kcg_c2);
#endif /* kcg_comp_array_int32_492 */
#endif /* kcg_use_array_int32_492 */

#ifdef kcg_use_array_int32_3
#ifndef kcg_comp_array_int32_3
extern kcg_bool kcg_comp_array_int32_3(
  array_int32_3 *kcg_c1,
  array_int32_3 *kcg_c2);
#endif /* kcg_comp_array_int32_3 */
#endif /* kcg_use_array_int32_3 */

#ifdef kcg_use_DMI_TEXT_INT_Array_T_DATA
#ifndef kcg_comp_DMI_TEXT_INT_Array_T_DATA
extern kcg_bool kcg_comp_DMI_TEXT_INT_Array_T_DATA(
  DMI_TEXT_INT_Array_T_DATA *kcg_c1,
  DMI_TEXT_INT_Array_T_DATA *kcg_c2);
#endif /* kcg_comp_DMI_TEXT_INT_Array_T_DATA */
#endif /* kcg_use_DMI_TEXT_INT_Array_T_DATA */

#ifdef kcg_use_array_float32_100_8
#ifndef kcg_comp_array_float32_100_8
extern kcg_bool kcg_comp_array_float32_100_8(
  array_float32_100_8 *kcg_c1,
  array_float32_100_8 *kcg_c2);
#endif /* kcg_comp_array_float32_100_8 */
#endif /* kcg_use_array_float32_100_8 */

#ifdef kcg_use_array_int32_9
#ifndef kcg_comp_array_int32_9
extern kcg_bool kcg_comp_array_int32_9(
  array_int32_9 *kcg_c1,
  array_int32_9 *kcg_c2);
#endif /* kcg_comp_array_int32_9 */
#endif /* kcg_use_array_int32_9 */

#ifdef kcg_use_ParabolaCurveValid_T_CalcBrakingCurves_types
#ifndef kcg_comp_ParabolaCurveValid_T_CalcBrakingCurves_types
extern kcg_bool kcg_comp_ParabolaCurveValid_T_CalcBrakingCurves_types(
  ParabolaCurveValid_T_CalcBrakingCurves_types *kcg_c1,
  ParabolaCurveValid_T_CalcBrakingCurves_types *kcg_c2);
#endif /* kcg_comp_ParabolaCurveValid_T_CalcBrakingCurves_types */
#endif /* kcg_use_ParabolaCurveValid_T_CalcBrakingCurves_types */

#ifdef kcg_use__166_array
#ifndef kcg_comp__166_array
extern kcg_bool kcg_comp__166_array(_166_array *kcg_c1, _166_array *kcg_c2);
#endif /* kcg_comp__166_array */
#endif /* kcg_use__166_array */

#ifdef kcg_use_EVC_to_DMI_Message_int_T_API_DMI_Pkg
#ifndef kcg_comp_EVC_to_DMI_Message_int_T_API_DMI_Pkg
extern kcg_bool kcg_comp_EVC_to_DMI_Message_int_T_API_DMI_Pkg(
  EVC_to_DMI_Message_int_T_API_DMI_Pkg *kcg_c1,
  EVC_to_DMI_Message_int_T_API_DMI_Pkg *kcg_c2);
#endif /* kcg_comp_EVC_to_DMI_Message_int_T_API_DMI_Pkg */
#endif /* kcg_use_EVC_to_DMI_Message_int_T_API_DMI_Pkg */

#ifdef kcg_use_positionedBGs_T_TrainPosition_Types_Pck
#ifndef kcg_comp_positionedBGs_T_TrainPosition_Types_Pck
extern kcg_bool kcg_comp_positionedBGs_T_TrainPosition_Types_Pck(
  positionedBGs_T_TrainPosition_Types_Pck *kcg_c1,
  positionedBGs_T_TrainPosition_Types_Pck *kcg_c2);
#endif /* kcg_comp_positionedBGs_T_TrainPosition_Types_Pck */
#endif /* kcg_use_positionedBGs_T_TrainPosition_Types_Pck */

#ifdef kcg_use_array_int32_261
#ifndef kcg_comp_array_int32_261
extern kcg_bool kcg_comp_array_int32_261(
  array_int32_261 *kcg_c1,
  array_int32_261 *kcg_c2);
#endif /* kcg_comp_array_int32_261 */
#endif /* kcg_use_array_int32_261 */

#ifdef kcg_use__167_array
#ifndef kcg_comp__167_array
extern kcg_bool kcg_comp__167_array(_167_array *kcg_c1, _167_array *kcg_c2);
#endif /* kcg_comp__167_array */
#endif /* kcg_use__167_array */

#ifdef kcg_use_array_int32_6
#ifndef kcg_comp_array_int32_6
extern kcg_bool kcg_comp_array_int32_6(
  array_int32_6 *kcg_c1,
  array_int32_6 *kcg_c2);
#endif /* kcg_comp_array_int32_6 */
#endif /* kcg_use_array_int32_6 */

#ifdef kcg_use__168_array
#ifndef kcg_comp__168_array
extern kcg_bool kcg_comp__168_array(_168_array *kcg_c1, _168_array *kcg_c2);
#endif /* kcg_comp__168_array */
#endif /* kcg_use__168_array */

#ifdef kcg_use__169_array
#ifndef kcg_comp__169_array
extern kcg_bool kcg_comp__169_array(_169_array *kcg_c1, _169_array *kcg_c2);
#endif /* kcg_comp__169_array */
#endif /* kcg_use__169_array */

#ifdef kcg_use_array_int32_198_33
#ifndef kcg_comp_array_int32_198_33
extern kcg_bool kcg_comp_array_int32_198_33(
  array_int32_198_33 *kcg_c1,
  array_int32_198_33 *kcg_c2);
#endif /* kcg_comp_array_int32_198_33 */
#endif /* kcg_use_array_int32_198_33 */

#ifdef kcg_use_array_int32_15
#ifndef kcg_comp_array_int32_15
extern kcg_bool kcg_comp_array_int32_15(
  array_int32_15 *kcg_c1,
  array_int32_15 *kcg_c2);
#endif /* kcg_comp_array_int32_15 */
#endif /* kcg_use_array_int32_15 */

#ifdef kcg_use__170_array
#ifndef kcg_comp__170_array
extern kcg_bool kcg_comp__170_array(_170_array *kcg_c1, _170_array *kcg_c2);
#endif /* kcg_comp__170_array */
#endif /* kcg_use__170_array */

#ifdef kcg_use_P005_sections_array_flat_T_TM
#ifndef kcg_comp_P005_sections_array_flat_T_TM
extern kcg_bool kcg_comp_P005_sections_array_flat_T_TM(
  P005_sections_array_flat_T_TM *kcg_c1,
  P005_sections_array_flat_T_TM *kcg_c2);
#endif /* kcg_comp_P005_sections_array_flat_T_TM */
#endif /* kcg_use_P005_sections_array_flat_T_TM */

#ifdef kcg_use__171_array
#ifndef kcg_comp__171_array
extern kcg_bool kcg_comp__171_array(_171_array *kcg_c1, _171_array *kcg_c2);
#endif /* kcg_comp__171_array */
#endif /* kcg_use__171_array */

#ifdef kcg_use_array_int32_2_4_8
#ifndef kcg_comp_array_int32_2_4_8
extern kcg_bool kcg_comp_array_int32_2_4_8(
  array_int32_2_4_8 *kcg_c1,
  array_int32_2_4_8 *kcg_c2);
#endif /* kcg_comp_array_int32_2_4_8 */
#endif /* kcg_use_array_int32_2_4_8 */

#ifdef kcg_use__172_array
#ifndef kcg_comp__172_array
extern kcg_bool kcg_comp__172_array(_172_array *kcg_c1, _172_array *kcg_c2);
#endif /* kcg_comp__172_array */
#endif /* kcg_use__172_array */

#ifdef kcg_use__173_array
#ifndef kcg_comp__173_array
extern kcg_bool kcg_comp__173_array(_173_array *kcg_c1, _173_array *kcg_c2);
#endif /* kcg_comp__173_array */
#endif /* kcg_use__173_array */

#ifdef kcg_use__174_array
#ifndef kcg_comp__174_array
extern kcg_bool kcg_comp__174_array(_174_array *kcg_c1, _174_array *kcg_c2);
#endif /* kcg_comp__174_array */
#endif /* kcg_use__174_array */

#ifdef kcg_use__175_array
#ifndef kcg_comp__175_array
extern kcg_bool kcg_comp__175_array(_175_array *kcg_c1, _175_array *kcg_c2);
#endif /* kcg_comp__175_array */
#endif /* kcg_use__175_array */

#ifdef kcg_use__176_array
#ifndef kcg_comp__176_array
extern kcg_bool kcg_comp__176_array(_176_array *kcg_c1, _176_array *kcg_c2);
#endif /* kcg_comp__176_array */
#endif /* kcg_use__176_array */

#ifdef kcg_use_t_BrakeVt_t_SDMModelPkg
#ifndef kcg_comp_t_BrakeVt_t_SDMModelPkg
extern kcg_bool kcg_comp_t_BrakeVt_t_SDMModelPkg(
  t_BrakeVt_t_SDMModelPkg *kcg_c1,
  t_BrakeVt_t_SDMModelPkg *kcg_c2);
#endif /* kcg_comp_t_BrakeVt_t_SDMModelPkg */
#endif /* kcg_use_t_BrakeVt_t_SDMModelPkg */

#ifdef kcg_use_array_int32_24
#ifndef kcg_comp_array_int32_24
extern kcg_bool kcg_comp_array_int32_24(
  array_int32_24 *kcg_c1,
  array_int32_24 *kcg_c2);
#endif /* kcg_comp_array_int32_24 */
#endif /* kcg_use_array_int32_24 */

#ifdef kcg_use__177_array
#ifndef kcg_comp__177_array
extern kcg_bool kcg_comp__177_array(_177_array *kcg_c1, _177_array *kcg_c2);
#endif /* kcg_comp__177_array */
#endif /* kcg_use__177_array */

#ifdef kcg_use__178_array
#ifndef kcg_comp__178_array
extern kcg_bool kcg_comp__178_array(_178_array *kcg_c1, _178_array *kcg_c2);
#endif /* kcg_comp__178_array */
#endif /* kcg_use__178_array */

#ifdef kcg_use_array_float32_8
#ifndef kcg_comp_array_float32_8
extern kcg_bool kcg_comp_array_float32_8(
  array_float32_8 *kcg_c1,
  array_float32_8 *kcg_c2);
#endif /* kcg_comp_array_float32_8 */
#endif /* kcg_use_array_float32_8 */

#ifdef kcg_use__179_array
#ifndef kcg_comp__179_array
extern kcg_bool kcg_comp__179_array(_179_array *kcg_c1, _179_array *kcg_c2);
#endif /* kcg_comp__179_array */
#endif /* kcg_use__179_array */

#ifdef kcg_use_GradientProfile_real_t_SDM_GradientAcceleration_types
#ifndef kcg_comp_GradientProfile_real_t_SDM_GradientAcceleration_types
extern kcg_bool kcg_comp_GradientProfile_real_t_SDM_GradientAcceleration_types(
  GradientProfile_real_t_SDM_GradientAcceleration_types *kcg_c1,
  GradientProfile_real_t_SDM_GradientAcceleration_types *kcg_c2);
#endif /* kcg_comp_GradientProfile_real_t_SDM_GradientAcceleration_types */
#endif /* kcg_use_GradientProfile_real_t_SDM_GradientAcceleration_types */

#ifdef kcg_use_GradientProfile_for_DMI_t_TrackAtlasTypes
#ifndef kcg_comp_GradientProfile_for_DMI_t_TrackAtlasTypes
extern kcg_bool kcg_comp_GradientProfile_for_DMI_t_TrackAtlasTypes(
  GradientProfile_for_DMI_t_TrackAtlasTypes *kcg_c1,
  GradientProfile_for_DMI_t_TrackAtlasTypes *kcg_c2);
#endif /* kcg_comp_GradientProfile_for_DMI_t_TrackAtlasTypes */
#endif /* kcg_use_GradientProfile_for_DMI_t_TrackAtlasTypes */

#ifdef kcg_use_array_bool_113
#ifndef kcg_comp_array_bool_113
extern kcg_bool kcg_comp_array_bool_113(
  array_bool_113 *kcg_c1,
  array_bool_113 *kcg_c2);
#endif /* kcg_comp_array_bool_113 */
#endif /* kcg_use_array_bool_113 */

#ifdef kcg_use_array_int32_30
#ifndef kcg_comp_array_int32_30
extern kcg_bool kcg_comp_array_int32_30(
  array_int32_30 *kcg_c1,
  array_int32_30 *kcg_c2);
#endif /* kcg_comp_array_int32_30 */
#endif /* kcg_use_array_int32_30 */

#ifdef kcg_use__180_array
#ifndef kcg_comp__180_array
extern kcg_bool kcg_comp__180_array(_180_array *kcg_c1, _180_array *kcg_c2);
#endif /* kcg_comp__180_array */
#endif /* kcg_use__180_array */

#ifdef kcg_use__181_array
#ifndef kcg_comp__181_array
extern kcg_bool kcg_comp__181_array(_181_array *kcg_c1, _181_array *kcg_c2);
#endif /* kcg_comp__181_array */
#endif /* kcg_use__181_array */

#ifdef kcg_use_nvkvintsetArray_T_Packet_Types_Pkg
#ifndef kcg_comp_nvkvintsetArray_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_nvkvintsetArray_T_Packet_Types_Pkg(
  nvkvintsetArray_T_Packet_Types_Pkg *kcg_c1,
  nvkvintsetArray_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_nvkvintsetArray_T_Packet_Types_Pkg */
#endif /* kcg_use_nvkvintsetArray_T_Packet_Types_Pkg */

#ifdef kcg_use_P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg
#ifndef kcg_comp_P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg(
  P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg *kcg_c1,
  P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg */
#endif /* kcg_use_P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg */

#ifdef kcg_use_P21_GradientProfiles_T_Packet_Types_Pkg
#ifndef kcg_comp_P21_GradientProfiles_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_P21_GradientProfiles_T_Packet_Types_Pkg(
  P21_GradientProfiles_T_Packet_Types_Pkg *kcg_c1,
  P21_GradientProfiles_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_P21_GradientProfiles_T_Packet_Types_Pkg */
#endif /* kcg_use_P21_GradientProfiles_T_Packet_Types_Pkg */

#ifdef kcg_use_P41_LevelTransistionOrders_T_Packet_Types_Pkg
#ifndef kcg_comp_P41_LevelTransistionOrders_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
  P41_LevelTransistionOrders_T_Packet_Types_Pkg *kcg_c1,
  P41_LevelTransistionOrders_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_P41_LevelTransistionOrders_T_Packet_Types_Pkg */
#endif /* kcg_use_P41_LevelTransistionOrders_T_Packet_Types_Pkg */

#ifdef kcg_use_SSPArray_T_Packet_Types_Pkg
#ifndef kcg_comp_SSPArray_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_SSPArray_T_Packet_Types_Pkg(
  SSPArray_T_Packet_Types_Pkg *kcg_c1,
  SSPArray_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_SSPArray_T_Packet_Types_Pkg */
#endif /* kcg_use_SSPArray_T_Packet_Types_Pkg */

#ifdef kcg_use_DiffArray_T_Packet_Types_Pkg
#ifndef kcg_comp_DiffArray_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_DiffArray_T_Packet_Types_Pkg(
  DiffArray_T_Packet_Types_Pkg *kcg_c1,
  DiffArray_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DiffArray_T_Packet_Types_Pkg */
#endif /* kcg_use_DiffArray_T_Packet_Types_Pkg */

#ifdef kcg_use_array_int32_110
#ifndef kcg_comp_array_int32_110
extern kcg_bool kcg_comp_array_int32_110(
  array_int32_110 *kcg_c1,
  array_int32_110 *kcg_c2);
#endif /* kcg_comp_array_int32_110 */
#endif /* kcg_use_array_int32_110 */

#ifdef kcg_use__182_array
#ifndef kcg_comp__182_array
extern kcg_bool kcg_comp__182_array(_182_array *kcg_c1, _182_array *kcg_c2);
#endif /* kcg_comp__182_array */
#endif /* kcg_use__182_array */

#ifdef kcg_use_array_int32_33
#ifndef kcg_comp_array_int32_33
extern kcg_bool kcg_comp_array_int32_33(
  array_int32_33 *kcg_c1,
  array_int32_33 *kcg_c2);
#endif /* kcg_comp_array_int32_33 */
#endif /* kcg_use_array_int32_33 */

#ifdef kcg_use_array_int32_42
#ifndef kcg_comp_array_int32_42
extern kcg_bool kcg_comp_array_int32_42(
  array_int32_42 *kcg_c1,
  array_int32_42 *kcg_c2);
#endif /* kcg_comp_array_int32_42 */
#endif /* kcg_use_array_int32_42 */

#ifdef kcg_use__183_array
#ifndef kcg_comp__183_array
extern kcg_bool kcg_comp__183_array(_183_array *kcg_c1, _183_array *kcg_c2);
#endif /* kcg_comp__183_array */
#endif /* kcg_use__183_array */

#ifdef kcg_use__184_array
#ifndef kcg_comp__184_array
extern kcg_bool kcg_comp__184_array(_184_array *kcg_c1, _184_array *kcg_c2);
#endif /* kcg_comp__184_array */
#endif /* kcg_use__184_array */

#ifdef kcg_use_array_float32_100
#ifndef kcg_comp_array_float32_100
extern kcg_bool kcg_comp_array_float32_100(
  array_float32_100 *kcg_c1,
  array_float32_100 *kcg_c2);
#endif /* kcg_comp_array_float32_100 */
#endif /* kcg_use_array_float32_100 */

#ifdef kcg_use__185_array
#ifndef kcg_comp__185_array
extern kcg_bool kcg_comp__185_array(_185_array *kcg_c1, _185_array *kcg_c2);
#endif /* kcg_comp__185_array */
#endif /* kcg_use__185_array */

#ifdef kcg_use_ASafeSpeedDefinition_T_CalcBrakingCurves_types
#ifndef kcg_comp_ASafeSpeedDefinition_T_CalcBrakingCurves_types
extern kcg_bool kcg_comp_ASafeSpeedDefinition_T_CalcBrakingCurves_types(
  ASafeSpeedDefinition_T_CalcBrakingCurves_types *kcg_c1,
  ASafeSpeedDefinition_T_CalcBrakingCurves_types *kcg_c2);
#endif /* kcg_comp_ASafeSpeedDefinition_T_CalcBrakingCurves_types */
#endif /* kcg_use_ASafeSpeedDefinition_T_CalcBrakingCurves_types */

#ifdef kcg_use_IterPacket58List_T_Packet_Types_Pkg
#ifndef kcg_comp_IterPacket58List_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_IterPacket58List_T_Packet_Types_Pkg(
  IterPacket58List_T_Packet_Types_Pkg *kcg_c1,
  IterPacket58List_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_IterPacket58List_T_Packet_Types_Pkg */
#endif /* kcg_use_IterPacket58List_T_Packet_Types_Pkg */

#ifdef kcg_use_array_int32_131
#ifndef kcg_comp_array_int32_131
extern kcg_bool kcg_comp_array_int32_131(
  array_int32_131 *kcg_c1,
  array_int32_131 *kcg_c2);
#endif /* kcg_comp_array_int32_131 */
#endif /* kcg_use_array_int32_131 */

#ifdef kcg_use__186_array
#ifndef kcg_comp__186_array
extern kcg_bool kcg_comp__186_array(_186_array *kcg_c1, _186_array *kcg_c2);
#endif /* kcg_comp__186_array */
#endif /* kcg_use__186_array */

#ifdef kcg_use_array_int32_128
#ifndef kcg_comp_array_int32_128
extern kcg_bool kcg_comp_array_int32_128(
  array_int32_128 *kcg_c1,
  array_int32_128 *kcg_c2);
#endif /* kcg_comp_array_int32_128 */
#endif /* kcg_use_array_int32_128 */

#ifdef kcg_use_array_int32_961
#ifndef kcg_comp_array_int32_961
extern kcg_bool kcg_comp_array_int32_961(
  array_int32_961 *kcg_c1,
  array_int32_961 *kcg_c2);
#endif /* kcg_comp_array_int32_961 */
#endif /* kcg_use_array_int32_961 */

#ifdef kcg_use__187_array
#ifndef kcg_comp__187_array
extern kcg_bool kcg_comp__187_array(_187_array *kcg_c1, _187_array *kcg_c2);
#endif /* kcg_comp__187_array */
#endif /* kcg_use__187_array */

#ifdef kcg_use_array_int32_66_33
#ifndef kcg_comp_array_int32_66_33
extern kcg_bool kcg_comp_array_int32_66_33(
  array_int32_66_33 *kcg_c1,
  array_int32_66_33 *kcg_c2);
#endif /* kcg_comp_array_int32_66_33 */
#endif /* kcg_use_array_int32_66_33 */

#ifdef kcg_use_array_int32_48
#ifndef kcg_comp_array_int32_48
extern kcg_bool kcg_comp_array_int32_48(
  array_int32_48 *kcg_c1,
  array_int32_48 *kcg_c2);
#endif /* kcg_comp_array_int32_48 */
#endif /* kcg_use_array_int32_48 */

#ifdef kcg_use_array_int32_964
#ifndef kcg_comp_array_int32_964
extern kcg_bool kcg_comp_array_int32_964(
  array_int32_964 *kcg_c1,
  array_int32_964 *kcg_c2);
#endif /* kcg_comp_array_int32_964 */
#endif /* kcg_use_array_int32_964 */

#ifdef kcg_use__188_array
#ifndef kcg_comp__188_array
extern kcg_bool kcg_comp__188_array(_188_array *kcg_c1, _188_array *kcg_c2);
#endif /* kcg_comp__188_array */
#endif /* kcg_use__188_array */

#ifdef kcg_use__189_array
#ifndef kcg_comp__189_array
extern kcg_bool kcg_comp__189_array(_189_array *kcg_c1, _189_array *kcg_c2);
#endif /* kcg_comp__189_array */
#endif /* kcg_use__189_array */

#ifdef kcg_use_array_int32_64_32
#ifndef kcg_comp_array_int32_64_32
extern kcg_bool kcg_comp_array_int32_64_32(
  array_int32_64_32 *kcg_c1,
  array_int32_64_32 *kcg_c2);
#endif /* kcg_comp_array_int32_64_32 */
#endif /* kcg_use_array_int32_64_32 */

#ifdef kcg_use__190_array
#ifndef kcg_comp__190_array
extern kcg_bool kcg_comp__190_array(_190_array *kcg_c1, _190_array *kcg_c2);
#endif /* kcg_comp__190_array */
#endif /* kcg_use__190_array */

#ifdef kcg_use__191_array
#ifndef kcg_comp__191_array
extern kcg_bool kcg_comp__191_array(_191_array *kcg_c1, _191_array *kcg_c2);
#endif /* kcg_comp__191_array */
#endif /* kcg_use__191_array */

#ifdef kcg_use_array_float32_100_6
#ifndef kcg_comp_array_float32_100_6
extern kcg_bool kcg_comp_array_float32_100_6(
  array_float32_100_6 *kcg_c1,
  array_float32_100_6 *kcg_c2);
#endif /* kcg_comp_array_float32_100_6 */
#endif /* kcg_use_array_float32_100_6 */

#ifdef kcg_use_array_int32_6_221
#ifndef kcg_comp_array_int32_6_221
extern kcg_bool kcg_comp_array_int32_6_221(
  array_int32_6_221 *kcg_c1,
  array_int32_6_221 *kcg_c2);
#endif /* kcg_comp_array_int32_6_221 */
#endif /* kcg_use_array_int32_6_221 */

#ifdef kcg_use__192_array
#ifndef kcg_comp__192_array
extern kcg_bool kcg_comp__192_array(_192_array *kcg_c1, _192_array *kcg_c2);
#endif /* kcg_comp__192_array */
#endif /* kcg_use__192_array */

#ifdef kcg_use_ASafe_Data_T_CalcBrakingCurves_types
#ifndef kcg_comp_ASafe_Data_T_CalcBrakingCurves_types
extern kcg_bool kcg_comp_ASafe_Data_T_CalcBrakingCurves_types(
  ASafe_Data_T_CalcBrakingCurves_types *kcg_c1,
  ASafe_Data_T_CalcBrakingCurves_types *kcg_c2);
#endif /* kcg_comp_ASafe_Data_T_CalcBrakingCurves_types */
#endif /* kcg_use_ASafe_Data_T_CalcBrakingCurves_types */

#ifdef kcg_use_P046_sections_array_flat_T_TM
#ifndef kcg_comp_P046_sections_array_flat_T_TM
extern kcg_bool kcg_comp_P046_sections_array_flat_T_TM(
  P046_sections_array_flat_T_TM *kcg_c1,
  P046_sections_array_flat_T_TM *kcg_c2);
#endif /* kcg_comp_P046_sections_array_flat_T_TM */
#endif /* kcg_use_P046_sections_array_flat_T_TM */

#ifdef kcg_use__193_array
#ifndef kcg_comp__193_array
extern kcg_bool kcg_comp__193_array(_193_array *kcg_c1, _193_array *kcg_c2);
#endif /* kcg_comp__193_array */
#endif /* kcg_use__193_array */

#ifdef kcg_use__194_array
#ifndef kcg_comp__194_array
extern kcg_bool kcg_comp__194_array(_194_array *kcg_c1, _194_array *kcg_c2);
#endif /* kcg_comp__194_array */
#endif /* kcg_use__194_array */

#ifdef kcg_use_array_float32_50
#ifndef kcg_comp_array_float32_50
extern kcg_bool kcg_comp_array_float32_50(
  array_float32_50 *kcg_c1,
  array_float32_50 *kcg_c2);
#endif /* kcg_comp_array_float32_50 */
#endif /* kcg_use_array_float32_50 */

#ifdef kcg_use_array_bool_100
#ifndef kcg_comp_array_bool_100
extern kcg_bool kcg_comp_array_bool_100(
  array_bool_100 *kcg_c1,
  array_bool_100 *kcg_c2);
#endif /* kcg_comp_array_bool_100 */
#endif /* kcg_use_array_bool_100 */

#ifdef kcg_use__195_array
#ifndef kcg_comp__195_array
extern kcg_bool kcg_comp__195_array(_195_array *kcg_c1, _195_array *kcg_c2);
#endif /* kcg_comp__195_array */
#endif /* kcg_use__195_array */

#ifdef kcg_use__196_array
#ifndef kcg_comp__196_array
extern kcg_bool kcg_comp__196_array(_196_array *kcg_c1, _196_array *kcg_c2);
#endif /* kcg_comp__196_array */
#endif /* kcg_use__196_array */

#ifdef kcg_use__197_array
#ifndef kcg_comp__197_array
extern kcg_bool kcg_comp__197_array(_197_array *kcg_c1, _197_array *kcg_c2);
#endif /* kcg_comp__197_array */
#endif /* kcg_use__197_array */

#ifdef kcg_use__198_array
#ifndef kcg_comp__198_array
extern kcg_bool kcg_comp__198_array(_198_array *kcg_c1, _198_array *kcg_c2);
#endif /* kcg_comp__198_array */
#endif /* kcg_use__198_array */

#ifdef kcg_use__199_array
#ifndef kcg_comp__199_array
extern kcg_bool kcg_comp__199_array(_199_array *kcg_c1, _199_array *kcg_c2);
#endif /* kcg_comp__199_array */
#endif /* kcg_use__199_array */

#ifdef kcg_use__200_array
#ifndef kcg_comp__200_array
extern kcg_bool kcg_comp__200_array(_200_array *kcg_c1, _200_array *kcg_c2);
#endif /* kcg_comp__200_array */
#endif /* kcg_use__200_array */

#ifdef kcg_use__6_P15_Level23MovementAuthorities_T_Packet_Types_Pkg
#ifndef kcg_comp__6_P15_Level23MovementAuthorities_T_Packet_Types_Pkg
extern kcg_bool kcg_comp__6_P15_Level23MovementAuthorities_T_Packet_Types_Pkg(
  _6_P15_Level23MovementAuthorities_T_Packet_Types_Pkg *kcg_c1,
  _6_P15_Level23MovementAuthorities_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp__6_P15_Level23MovementAuthorities_T_Packet_Types_Pkg */
#endif /* kcg_use__6_P15_Level23MovementAuthorities_T_Packet_Types_Pkg */

#ifdef kcg_use__7_P12_Level1MovementAuthorities_T_Packet_Types_Pkg
#ifndef kcg_comp__7_P12_Level1MovementAuthorities_T_Packet_Types_Pkg
extern kcg_bool kcg_comp__7_P12_Level1MovementAuthorities_T_Packet_Types_Pkg(
  _7_P12_Level1MovementAuthorities_T_Packet_Types_Pkg *kcg_c1,
  _7_P12_Level1MovementAuthorities_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp__7_P12_Level1MovementAuthorities_T_Packet_Types_Pkg */
#endif /* kcg_use__7_P12_Level1MovementAuthorities_T_Packet_Types_Pkg */

#ifdef kcg_use_nvkrintArray_T_Packet_Types_Pkg
#ifndef kcg_comp_nvkrintArray_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_nvkrintArray_T_Packet_Types_Pkg(
  nvkrintArray_T_Packet_Types_Pkg *kcg_c1,
  nvkrintArray_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_nvkrintArray_T_Packet_Types_Pkg */
#endif /* kcg_use_nvkrintArray_T_Packet_Types_Pkg */

#ifdef kcg_use_nvkvintArray_T_Packet_Types_Pkg
#ifndef kcg_comp_nvkvintArray_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_nvkvintArray_T_Packet_Types_Pkg(
  nvkvintArray_T_Packet_Types_Pkg *kcg_c1,
  nvkvintArray_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_nvkvintArray_T_Packet_Types_Pkg */
#endif /* kcg_use_nvkvintArray_T_Packet_Types_Pkg */

#ifdef kcg_use_nidCArray_T_Packet_Types_Pkg
#ifndef kcg_comp_nidCArray_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_nidCArray_T_Packet_Types_Pkg(
  nidCArray_T_Packet_Types_Pkg *kcg_c1,
  nidCArray_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_nidCArray_T_Packet_Types_Pkg */
#endif /* kcg_use_nidCArray_T_Packet_Types_Pkg */

#ifdef kcg_use_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg(
  T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg *kcg_c1,
  T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg */

#ifdef kcg_use__8_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg
#ifndef kcg_comp__8_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg
extern kcg_bool kcg_comp__8_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg(
  _8_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg *kcg_c1,
  _8_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp__8_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg */
#endif /* kcg_use__8_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg */

#define kcg_comp_D_test_distance_T_TIU_Types_Pkg kcg_comp_struct_275675

#define kcg_copy_D_test_distance_T_TIU_Types_Pkg kcg_copy_struct_275675

#define kcg_comp_D_test_traction_T_TIU_Types_Pkg kcg_comp_struct_275675

#define kcg_copy_D_test_traction_T_TIU_Types_Pkg kcg_copy_struct_275675

#define kcg_comp_D_test_current_T_TIU_Types_Pkg kcg_comp_struct_275675

#define kcg_copy_D_test_current_T_TIU_Types_Pkg kcg_copy_struct_275675

#define kcg_comp_DMI_brakeModel_id_T_DMI_Types_Pkg kcg_comp_struct_273993

#define kcg_copy_DMI_brakeModel_id_T_DMI_Types_Pkg kcg_copy_struct_273993

#define kcg_comp_DMI_vMax_id_T_DMI_Types_Pkg kcg_comp_struct_273993

#define kcg_copy_DMI_vMax_id_T_DMI_Types_Pkg kcg_copy_struct_273993

#define kcg_comp_DMI_airtightSystem_T_DMI_Types_Pkg kcg_comp_struct_273993

#define kcg_copy_DMI_airtightSystem_T_DMI_Types_Pkg kcg_copy_struct_273993

#define kcg_comp_DMI_loadingGauge_T_DMI_Types_Pkg kcg_comp_struct_273993

#define kcg_copy_DMI_loadingGauge_T_DMI_Types_Pkg kcg_copy_struct_273993

#define kcg_comp_P135_StopShuntingOnDeskOpening_T_Packet_Types_Pkg            \
  kcg_comp_struct_275228

#define kcg_copy_P135_StopShuntingOnDeskOpening_T_Packet_Types_Pkg            \
  kcg_copy_struct_275228

#define kcg_comp_P138_ReversingAreaInformation_T_Packet_Types_Pkg             \
  kcg_comp_struct_273277

#define kcg_copy_P138_ReversingAreaInformation_T_Packet_Types_Pkg             \
  kcg_copy_struct_273277

#define kcg_comp_P139_ReversingSupervisionInformation_T_Packet_Types_Pkg      \
  kcg_comp_struct_278986

#define kcg_copy_P139_ReversingSupervisionInformation_T_Packet_Types_Pkg      \
  kcg_copy_struct_278986

#define kcg_comp_aNID_NTC_T_Packet_TrainTypes_Pkg kcg_comp_array_int32_5

#define kcg_copy_aNID_NTC_T_Packet_TrainTypes_Pkg kcg_copy_array_int32_5

#define kcg_comp_sTractionIdentity_T_Packet_TrainTypes_Pkg                    \
  kcg_comp_struct_275034

#define kcg_copy_sTractionIdentity_T_Packet_TrainTypes_Pkg                    \
  kcg_copy_struct_275034

#define kcg_comp_aTractionIdentity_T_Packet_TrainTypes_Pkg kcg_comp__122_array

#define kcg_copy_aTractionIdentity_T_Packet_TrainTypes_Pkg kcg_copy__122_array

#define kcg_comp_D_test_trackcond_T_TIU_Types_Pkg kcg_comp_struct_275675

#define kcg_copy_D_test_trackcond_T_TIU_Types_Pkg kcg_copy_struct_275675

#define kcg_comp_L_test_trackcond_T_TIU_Types_Pkg kcg_comp_struct_275675

#define kcg_copy_L_test_trackcond_T_TIU_Types_Pkg kcg_copy_struct_275675

#define kcg_comp_D_test_trackinit_T_TIU_Types_Pkg kcg_comp_struct_275675

#define kcg_copy_D_test_trackinit_T_TIU_Types_Pkg kcg_copy_struct_275675

#define kcg_comp_nidC_T_Packet_Types_Pkg kcg_comp_struct_279025

#define kcg_copy_nidC_T_Packet_Types_Pkg kcg_copy_struct_279025

#define kcg_comp_P203V1_OBU_n_section_enum_T_TM_baseline2 kcg_comp_struct_274908

#define kcg_copy_P203V1_OBU_n_section_enum_T_TM_baseline2 kcg_copy_struct_274908

#define kcg_comp_P203V1_OBU_n_sectionlist_enum_T_TM_baseline2                 \
  kcg_comp__160_array

#define kcg_copy_P203V1_OBU_n_sectionlist_enum_T_TM_baseline2                 \
  kcg_copy__160_array

#define kcg_comp_P203V1_OBU_k_m_section_enum_T_TM_baseline2                   \
  kcg_comp_struct_276076

#define kcg_copy_P203V1_OBU_k_m_section_enum_T_TM_baseline2                   \
  kcg_copy_struct_276076

#define kcg_comp__9_P203V1_OBU_k_m_sectionlist_enum_T_TM_baseline2            \
  kcg_comp__159_array

#define kcg_copy__9_P203V1_OBU_k_m_sectionlist_enum_T_TM_baseline2            \
  kcg_copy__159_array

#define kcg_comp_P203V1_OBU_k_section_enum_T_TM_baseline2 kcg_comp_struct_278367

#define kcg_copy_P203V1_OBU_k_section_enum_T_TM_baseline2 kcg_copy_struct_278367

#define kcg_comp_P203V1_OBU_k_sectionlist_enum_T_TM_baseline2                 \
  kcg_comp__117_array

#define kcg_copy_P203V1_OBU_k_sectionlist_enum_T_TM_baseline2                 \
  kcg_copy__117_array

#define kcg_comp_P203V1_OBU_l_section_enum_T_TM_baseline2 kcg_comp_struct_275282

#define kcg_copy_P203V1_OBU_l_section_enum_T_TM_baseline2 kcg_copy_struct_275282

#define kcg_comp_P203V1_OBU_l_sectionlist_enum_T_TM_baseline2                 \
  kcg_comp__158_array

#define kcg_copy_P203V1_OBU_l_sectionlist_enum_T_TM_baseline2                 \
  kcg_copy__158_array

#define kcg_comp_P003_nid_radio_list_t_TM_TrainToTrack kcg_comp_array_int32_5

#define kcg_copy_P003_nid_radio_list_t_TM_TrainToTrack kcg_copy_array_int32_5

#define kcg_comp_telephoneNumber_T_Packet_TrainTypes_Pkg kcg_comp_array_int32_15

#define kcg_copy_telephoneNumber_T_Packet_TrainTypes_Pkg kcg_copy_array_int32_15

#define kcg_comp_DMI_speedProfileElement_T_DMI_Types_Pkg kcg_comp_struct_279212

#define kcg_copy_DMI_speedProfileElement_T_DMI_Types_Pkg kcg_copy_struct_279212

#define kcg_comp_DMI_gradientProfileElement_T_DMI_Types_Pkg                   \
  kcg_comp_struct_275303

#define kcg_copy_DMI_gradientProfileElement_T_DMI_Types_Pkg                   \
  kcg_copy_struct_275303

#define kcg_comp_MRSP_section_t_TrackAtlasTypes kcg_comp_struct_279212

#define kcg_copy_MRSP_section_t_TrackAtlasTypes kcg_copy_struct_279212

#define kcg_comp__10_GradientProfile_for_DMI_section_t_TrackAtlasTypes        \
  kcg_comp_struct_275303

#define kcg_copy__10_GradientProfile_for_DMI_section_t_TrackAtlasTypes        \
  kcg_copy_struct_275303

#define kcg_comp_DMI_Dynamic_int_array_T_DATA kcg_comp_array_int32_24

#define kcg_copy_DMI_Dynamic_int_array_T_DATA kcg_copy_array_int32_24

#define kcg_comp_DMI_Menu_Request_int_array_T_DATA kcg_comp_array_int32_3

#define kcg_copy_DMI_Menu_Request_int_array_T_DATA kcg_copy_array_int32_3

#define kcg_comp_DMI_Entry_Request_int_array_T_DATA kcg_comp_array_int32_3

#define kcg_copy_DMI_Entry_Request_int_array_T_DATA kcg_copy_array_int32_3

#define kcg_comp__11_DMI_EVC_Coded_Train_Data_int_array_T_DATA                \
  kcg_comp_array_int32_9

#define kcg_copy__11_DMI_EVC_Coded_Train_Data_int_array_T_DATA                \
  kcg_copy_array_int32_9

#define kcg_comp__12_DMI_Identifier_Request_int_array_T_DATA                  \
  kcg_comp_array_int32_261

#define kcg_copy__12_DMI_Identifier_Request_int_array_T_DATA                  \
  kcg_copy_array_int32_261

#define kcg_comp_DMI_System_Version_int_array_T_DATA kcg_comp_array_int32_3

#define kcg_copy_DMI_System_Version_int_array_T_DATA kcg_copy_array_int32_3

#define kcg_comp_DMI_Display_Control_int_array_T_DATA kcg_comp_array_int32_3

#define kcg_copy_DMI_Display_Control_int_array_T_DATA kcg_copy_array_int32_3

#define kcg_comp__13_DMI_EVC_Radio_Net_Data_int_array_T_DATA                  \
  kcg_comp_array_int32_3

#define kcg_copy__13_DMI_EVC_Radio_Net_Data_int_array_T_DATA                  \
  kcg_copy_array_int32_3

#define kcg_comp__14_DMI_Train_Running_Number_int_array_T_DATA                \
  kcg_comp_array_int32_3

#define kcg_copy__14_DMI_Train_Running_Number_int_array_T_DATA                \
  kcg_copy_array_int32_3

#define kcg_comp_DMI_Train_Data_int_array_T_DATA kcg_comp_array_int32_9

#define kcg_copy_DMI_Train_Data_int_array_T_DATA kcg_copy_array_int32_9

#define kcg_comp__15_DMI_Adhesion_Factor_Data_int_array_T_DATA                \
  kcg_comp_array_int32_3

#define kcg_copy__15_DMI_Adhesion_Factor_Data_int_array_T_DATA                \
  kcg_copy_array_int32_3

#define kcg_comp_DMI_Icons_int_array_T_DATA kcg_comp_array_int32_9

#define kcg_copy_DMI_Icons_int_array_T_DATA kcg_copy_array_int32_9

#define kcg_comp_DMI_trackCondition_int_array_T kcg_comp_array_int32_65

#define kcg_copy_DMI_trackCondition_int_array_T kcg_copy_array_int32_65

#define kcg_comp_DMI_gradientProfile_int_arrayT kcg_comp_array_int32_129

#define kcg_copy_DMI_gradientProfile_int_arrayT kcg_copy_array_int32_129

#define kcg_comp_DMI_speedProfile_int_array_T_DATA kcg_comp_array_int32_129

#define kcg_copy_DMI_speedProfile_int_array_T_DATA kcg_copy_array_int32_129

#define kcg_comp_DMI_LevelList_int_array_T_DATA kcg_comp_array_int32_65

#define kcg_copy_DMI_LevelList_int_array_T_DATA kcg_copy_array_int32_65

#define kcg_comp_DriverIdentifier_INT_T_DATA kcg_comp_array_int32_9

#define kcg_copy_DriverIdentifier_INT_T_DATA kcg_copy_array_int32_9

#define kcg_comp_ReceivedMessage_T_Common_Types_Pkg kcg_comp_struct_278835

#define kcg_copy_ReceivedMessage_T_Common_Types_Pkg kcg_copy_struct_278835

#define kcg_comp_ParabolaCurveDistances_T_CalcBrakingCurves_types             \
  kcg_comp_array_float32_114

#define kcg_copy_ParabolaCurveDistances_T_CalcBrakingCurves_types             \
  kcg_copy_array_float32_114

#define kcg_comp_ParabolaCurveSpeeds_T_CalcBrakingCurves_types                \
  kcg_comp_array_float32_114

#define kcg_copy_ParabolaCurveSpeeds_T_CalcBrakingCurves_types                \
  kcg_copy_array_float32_114

#define kcg_comp_ParabolaCurveAccelerations_T_CalcBrakingCurves_types         \
  kcg_comp_array_float32_114

#define kcg_copy_ParabolaCurveAccelerations_T_CalcBrakingCurves_types         \
  kcg_copy_array_float32_114

#define kcg_comp_ASafeRow_T_CalcBrakingCurves_types kcg_comp_array_float32_100

#define kcg_copy_ASafeRow_T_CalcBrakingCurves_types kcg_copy_array_float32_100

#define kcg_comp_ASafeDistanceDefinition_T_CalcBrakingCurves_types            \
  kcg_comp_array_float32_100

#define kcg_copy_ASafeDistanceDefinition_T_CalcBrakingCurves_types            \
  kcg_copy_array_float32_100

#define kcg_comp_TractionDeltaTriple_TargetLimits_Pkg kcg_comp_array_float32_3

#define kcg_copy_TractionDeltaTriple_TargetLimits_Pkg kcg_copy_array_float32_3

#define kcg_comp_a_MergedSteps_t_SDMConversionModelPkg kcg_comp_array_int32_13

#define kcg_copy_a_MergedSteps_t_SDMConversionModelPkg kcg_copy_array_int32_13

#define kcg_comp_v_MergedSteps_t_SDMConversionModelPkg kcg_comp_array_int32_13

#define kcg_copy_v_MergedSteps_t_SDMConversionModelPkg kcg_copy_array_int32_13

#define kcg_comp_a_BrakeSteps_t_SDMConversionModelPkg kcg_comp_array_int32_6

#define kcg_copy_a_BrakeSteps_t_SDMConversionModelPkg kcg_copy_array_int32_6

#define kcg_comp_v_BrakeSteps_t_SDMConversionModelPkg kcg_comp_array_int32_6

#define kcg_copy_v_BrakeSteps_t_SDMConversionModelPkg kcg_copy_array_int32_6

#define kcg_comp_coeff_BrakeBasic_t_SDMConversionModelPkg                     \
  kcg_comp_array_float32_3

#define kcg_copy_coeff_BrakeBasic_t_SDMConversionModelPkg                     \
  kcg_copy_array_float32_3

#define kcg_comp_LKrIntLookUp_t_SDMConversionModelPkg kcg_comp_array_int32_32

#define kcg_copy_LKrIntLookUp_t_SDMConversionModelPkg kcg_copy_array_int32_32

#define kcg_comp_m_KvSteps_t_SDMConversionModelPkg kcg_comp_array_int32_7

#define kcg_copy_m_KvSteps_t_SDMConversionModelPkg kcg_copy_array_int32_7

#define kcg_comp_v_KvSteps_t_SDMConversionModelPkg kcg_comp_array_int32_7

#define kcg_copy_v_KvSteps_t_SDMConversionModelPkg kcg_copy_array_int32_7

#define kcg_comp_DMI_Level_Data_int_array_T_DATA kcg_comp_array_int32_4

#define kcg_copy_DMI_Level_Data_int_array_T_DATA kcg_copy_array_int32_4

#define kcg_comp_DMI_Status_int_array_T_DATA kcg_comp_array_int32_4

#define kcg_copy_DMI_Status_int_array_T_DATA kcg_copy_array_int32_4

#define kcg_comp_DMI_Identifier_int_array_T_DATA kcg_comp_array_int32_261

#define kcg_copy_DMI_Identifier_int_array_T_DATA kcg_copy_array_int32_261

#define kcg_comp_DMI_Driver_Request_int_array_T_DATA kcg_comp_array_int32_3

#define kcg_copy_DMI_Driver_Request_int_array_T_DATA kcg_copy_array_int32_3

#define kcg_comp_DMI_Radio_Net_Data_int_array_T_DATA kcg_comp_array_int32_2

#define kcg_copy_DMI_Radio_Net_Data_int_array_T_DATA kcg_copy_array_int32_2

#define kcg_comp_DMI_Text_Message_Ack_int_array_T_DATA kcg_comp_array_int32_4

#define kcg_copy_DMI_Text_Message_Ack_int_array_T_DATA kcg_copy_array_int32_4

#define kcg_comp_DMI_Train_Data_Ack_int_array_T_DATA kcg_comp_array_int32_3

#define kcg_copy_DMI_Train_Data_Ack_int_array_T_DATA kcg_copy_array_int32_3

#define kcg_comp_DMI_Icon_Ack_int_array_T_DATA kcg_comp_array_int32_3

#define kcg_copy_DMI_Icon_Ack_int_array_T_DATA kcg_copy_array_int32_3

#define kcg_comp_Driver2MAR_T_MA_Request kcg_comp_struct_274867

#define kcg_copy_Driver2MAR_T_MA_Request kcg_copy_struct_274867

#define kcg_comp_P015_section_enum_T_TM kcg_comp_struct_274806

#define kcg_copy_P015_section_enum_T_TM kcg_copy_struct_274806

#define kcg_comp_P041_sections_array_flat_T_TM kcg_comp_array_int32_99

#define kcg_copy_P041_sections_array_flat_T_TM kcg_copy_array_int32_99

#define kcg_comp_Array07_TM kcg_comp_array_int32_7

#define kcg_copy_Array07_TM kcg_copy_array_int32_7

#define kcg_comp_Array15_TM kcg_comp_array_int32_15

#define kcg_copy_Array15_TM kcg_copy_array_int32_15

#define kcg_comp_P012_sections_array_flat_T_TM kcg_comp_array_int32_128

#define kcg_copy_P012_sections_array_flat_T_TM kcg_copy_array_int32_128

#define kcg_comp_P012_section_enum_T_TM kcg_comp_struct_274806

#define kcg_copy_P012_section_enum_T_TM kcg_copy_struct_274806

#define kcg_comp_Array06_TM kcg_comp_array_int32_6

#define kcg_copy_Array06_TM kcg_copy_array_int32_6

#define kcg_comp_P015_sections_array_flat_T_TM kcg_comp_array_int32_128

#define kcg_copy_P015_sections_array_flat_T_TM kcg_copy_array_int32_128

#define kcg_comp_Array05_TM kcg_comp_array_int32_5

#define kcg_copy_Array05_TM kcg_copy_array_int32_5

#define kcg_comp_P021_sections_array_flat_T_TM kcg_comp_array_int32_99

#define kcg_copy_P021_sections_array_flat_T_TM kcg_copy_array_int32_99

#define kcg_comp_Array03_TM kcg_comp_array_int32_3

#define kcg_copy_Array03_TM kcg_copy_array_int32_3

#define kcg_comp_P027V1_sections_array_flat_qdiff_T_TM_baseline2              \
  kcg_comp_array_int32_64

#define kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2              \
  kcg_copy_array_int32_64

#define kcg_comp_P003_OBU_nid_c_section_enum_T_TM kcg_comp_struct_279025

#define kcg_copy_P003_OBU_nid_c_section_enum_T_TM kcg_copy_struct_279025

#define kcg_comp__16_P003_OBU_nid_c_sectionlist_enum_T_TM kcg_comp__157_array

#define kcg_copy__16_P003_OBU_nid_c_sectionlist_enum_T_TM kcg_copy__157_array

#define kcg_comp_P003_OBU_n_section_enum_T_TM kcg_comp_struct_274908

#define kcg_copy_P003_OBU_n_section_enum_T_TM kcg_copy_struct_274908

#define kcg_comp_P003_OBU_n_sectionlist_enum_T_TM kcg_comp__160_array

#define kcg_copy_P003_OBU_n_sectionlist_enum_T_TM kcg_copy__160_array

#define kcg_comp_P003_OBU_k_m_section_enum_T_TM kcg_comp_struct_276076

#define kcg_copy_P003_OBU_k_m_section_enum_T_TM kcg_copy_struct_276076

#define kcg_comp_P003_OBU_k_m_sectionlist_enum_T_TM kcg_comp__159_array

#define kcg_copy_P003_OBU_k_m_sectionlist_enum_T_TM kcg_copy__159_array

#define kcg_comp_P003_OBU_k_section_enum_T_TM kcg_comp_struct_278367

#define kcg_copy_P003_OBU_k_section_enum_T_TM kcg_copy_struct_278367

#define kcg_comp_P003_OBU_k_sectionlist_enum_T_TM kcg_comp__117_array

#define kcg_copy_P003_OBU_k_sectionlist_enum_T_TM kcg_copy__117_array

#define kcg_comp_P003_OBU_l_section_enum_T_TM kcg_comp_struct_275282

#define kcg_copy_P003_OBU_l_section_enum_T_TM kcg_copy_struct_275282

#define kcg_comp_P003_OBU_l_sectionlist_enum_T_TM kcg_comp__158_array

#define kcg_copy_P003_OBU_l_sectionlist_enum_T_TM kcg_copy__158_array

#define kcg_comp_Radio_TrainTrack_Header_T_Radio_Types_Pkg                    \
  kcg_comp_struct_278116

#define kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg                    \
  kcg_copy_struct_278116

#define kcg_comp_Radio_TrainTrack_Message_T_Radio_Types_Pkg                   \
  kcg_comp_struct_273626

#define kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg                   \
  kcg_copy_struct_273626

#define kcg_comp_Array08_TM kcg_comp_array_int32_8

#define kcg_copy_Array08_TM kcg_copy_array_int32_8

#define kcg_comp_P058_sections_array_flat_T_TM kcg_comp_array_int32_64

#define kcg_copy_P058_sections_array_flat_T_TM kcg_copy_array_int32_64

#define kcg_comp_M_136_T_TM_radio_messages kcg_comp_struct_279611

#define kcg_copy_M_136_T_TM_radio_messages kcg_copy_struct_279611

#define kcg_comp_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus kcg_comp__176_array

#define kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus kcg_copy__176_array

#define kcg_comp_M_TrainTrackMessage_buffer_t_TM_lib_internal                 \
  kcg_comp__176_array

#define kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal                 \
  kcg_copy__176_array

#define kcg_comp_P004_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int32_3

#define kcg_copy_P004_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int32_3

#define kcg_comp_P005_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int32_3

#define kcg_copy_P005_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int32_3

#define kcg_comp_P044_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int32_25

#define kcg_copy_P044_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int32_25

#define kcg_comp_P001_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int32_17

#define kcg_copy_P001_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int32_17

#define kcg_comp_P000_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int32_17

#define kcg_copy_P000_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int32_17

#define kcg_comp_P135_OBU_T_TM kcg_comp_struct_275228

#define kcg_copy_P135_OBU_T_TM kcg_copy_struct_275228

#define kcg_comp_P138_OBU_T_TM kcg_comp_struct_273277

#define kcg_copy_P138_OBU_T_TM kcg_copy_struct_273277

#define kcg_comp_P139_OBU_T_TM kcg_comp_struct_278986

#define kcg_copy_P139_OBU_T_TM kcg_copy_struct_278986

#define kcg_comp_Array04_TM kcg_comp_array_int32_4

#define kcg_copy_Array04_TM kcg_copy_array_int32_4

#define kcg_comp_Array09_TM kcg_comp_array_int32_9

#define kcg_copy_Array09_TM kcg_copy_array_int32_9

#define kcg_comp_M_129_T_TM_radio_messages kcg_comp_struct_279611

#define kcg_copy_M_129_T_TM_radio_messages kcg_copy_struct_279611

#define kcg_comp_P011_voltage_TM_TrainToTrack kcg_comp_struct_275034

#define kcg_copy_P011_voltage_TM_TrainToTrack kcg_copy_struct_275034

#define kcg_comp_P011_voltage_list_TM_TrainToTrack kcg_comp__122_array

#define kcg_copy_P011_voltage_list_TM_TrainToTrack kcg_copy__122_array

#define kcg_comp_P011_ntc_list_TM_TrainToTrack kcg_comp_array_int32_5

#define kcg_copy_P011_ntc_list_TM_TrainToTrack kcg_copy_array_int32_5

#define kcg_comp_P011_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int32_25

#define kcg_copy_P011_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int32_25

#define kcg_comp_P011_voltage_sections_array_flat_t_TM_TrainToTrack           \
  kcg_comp_array_int32_8

#define kcg_copy_P011_voltage_sections_array_flat_t_TM_TrainToTrack           \
  kcg_copy_array_int32_8

#define kcg_comp_P011_ntc_list_array_T_TM_TrainToTrack kcg_comp_array_int32_5

#define kcg_copy_P011_ntc_list_array_T_TM_TrainToTrack kcg_copy_array_int32_5

#define kcg_comp_P011_voltage_section_array_T_TM_TrainToTrack                 \
  kcg_comp_array_int32_2

#define kcg_copy_P011_voltage_section_array_T_TM_TrainToTrack                 \
  kcg_copy_array_int32_2

#define kcg_comp_P003V1_section_enum_T_TM_baseline2 kcg_comp_struct_279025

#define kcg_copy_P003V1_section_enum_T_TM_baseline2 kcg_copy_struct_279025

#define kcg_comp_P003V1_sectionlist_enum_T_TM_baseline2 kcg_comp__157_array

#define kcg_copy_P003V1_sectionlist_enum_T_TM_baseline2 kcg_copy__157_array

#define kcg_comp_SSP_section_t_TA_MRSP kcg_comp_struct_274688

#define kcg_copy_SSP_section_t_TA_MRSP kcg_copy_struct_274688

#define kcg_comp_SSP_cat_t_TA_MRSP kcg_comp__179_array

#define kcg_copy_SSP_cat_t_TA_MRSP kcg_copy__179_array

#define kcg_comp_SSP_matrix_t_TA_MRSP kcg_comp__175_array

#define kcg_copy_SSP_matrix_t_TA_MRSP kcg_copy__175_array

#define kcg_comp_SSP_section_t_TA_MRSP_new kcg_comp_struct_274688

#define kcg_copy_SSP_section_t_TA_MRSP_new kcg_copy_struct_274688

#define kcg_comp_SSP_cat_t_TA_MRSP_new kcg_comp__179_array

#define kcg_copy_SSP_cat_t_TA_MRSP_new kcg_copy__179_array

#define kcg_comp_SSP_matrix_t_TA_MRSP_new kcg_comp__175_array

#define kcg_copy_SSP_matrix_t_TA_MRSP_new kcg_copy__175_array

#define kcg_comp_Array24_TM kcg_comp_array_int32_24

#define kcg_copy_Array24_TM kcg_copy_array_int32_24

#define kcg_comp_P003V1_OBU_sectionlist_int_T_TM_baseline2                    \
  kcg_comp_array_int32_32

#define kcg_copy_P003V1_OBU_sectionlist_int_T_TM_baseline2                    \
  kcg_copy_array_int32_32

#define kcg_comp__17_Radio_TrainTrack_Header_T_TM_transitional                \
  kcg_comp_struct_278116

#define kcg_copy__17_Radio_TrainTrack_Header_T_TM_transitional                \
  kcg_copy_struct_278116

#define kcg_comp__18_Radio_TrainTrack_Message_T_TM_transitional               \
  kcg_comp_struct_273626

#define kcg_copy__18_Radio_TrainTrack_Message_T_TM_transitional               \
  kcg_copy_struct_273626

#define kcg_comp_Driver2MAR_T_TA_MA_Request kcg_comp_struct_274867

#define kcg_copy_Driver2MAR_T_TA_MA_Request kcg_copy_struct_274867

#define kcg_comp_P009_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int32_3

#define kcg_copy_P009_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int32_3

#define kcg_comp_P131_RBCTransitionOrder_T_Packet_Types_Pkg                   \
  kcg_comp_struct_277960

#define kcg_copy_P131_RBCTransitionOrder_T_Packet_Types_Pkg                   \
  kcg_copy_struct_277960

#define kcg_comp_msgFromTrack_T_RCM_MsgTypes_Pkg kcg_comp_struct_278835

#define kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg kcg_copy_struct_278835

#define kcg_comp_P131_OBU_T_TM kcg_comp_struct_277960

#define kcg_copy_P131_OBU_T_TM kcg_copy_struct_277960

#define kcg_comp_M_154_T_TM_radio_messages kcg_comp_struct_279611

#define kcg_copy_M_154_T_TM_radio_messages kcg_copy_struct_279611

#define kcg_comp_M_159_T_TM_radio_messages kcg_comp_struct_279611

#define kcg_copy_M_159_T_TM_radio_messages kcg_copy_struct_279611

#define kcg_comp_M_156_T_TM_radio_messages kcg_comp_struct_279611

#define kcg_copy_M_156_T_TM_radio_messages kcg_copy_struct_279611

#define kcg_comp_M_155_T_TM_radio_messages kcg_comp_struct_279611

#define kcg_copy_M_155_T_TM_radio_messages kcg_copy_struct_279611

#define kcg_comp_P003_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int32_8

#define kcg_copy_P003_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int32_8

#define kcg_comp_P003_nid_radio_list_int_t_TM_TrainToTrack                    \
  kcg_comp_array_int32_5

#define kcg_copy_P003_nid_radio_list_int_t_TM_TrainToTrack                    \
  kcg_copy_array_int32_5

#define kcg_comp_msgToTrack_T_RCM_MsgTypes_Pkg kcg_comp_struct_273626

#define kcg_copy_msgToTrack_T_RCM_MsgTypes_Pkg kcg_copy_struct_273626

#endif /* _KCG_TYPES_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** kcg_types.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

