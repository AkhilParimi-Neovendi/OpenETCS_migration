/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:49
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

#ifndef kcg_float32
#define kcg_float32 kcg_float32
typedef double kcg_float32;
#endif /* kcg_float32 */

#ifndef kcg_size
#define kcg_size kcg_size
typedef ptrdiff_t kcg_size;
#endif /* kcg_size */

#ifndef kcg_uint32
#define kcg_uint32 kcg_uint32
typedef unsigned long long kcg_uint32;
#endif /* kcg_uint32 */

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

#ifndef kcg_int32
#define kcg_int32 kcg_int32
typedef signed long long kcg_int32;
#endif /* kcg_int32 */

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

#ifndef kcg_lit_float32
#define kcg_lit_float32(kcg_C1) ((kcg_float32) (kcg_C1))
#endif /* kcg_lit_float32 */

#ifndef kcg_lit_size
#define kcg_lit_size(kcg_C1) ((kcg_size) (kcg_C1))
#endif /* kcg_lit_size */

#ifndef kcg_lit_uint32
#define kcg_lit_uint32(kcg_C1) ((kcg_uint32) (kcg_C1))
#endif /* kcg_lit_uint32 */

#ifndef kcg_lit_uint32
#define kcg_lit_uint32(kcg_C1) ((kcg_uint32) (kcg_C1))
#endif /* kcg_lit_uint32 */

#ifndef kcg_lit_uint16
#define kcg_lit_uint16(kcg_C1) ((kcg_uint16) (kcg_C1))
#endif /* kcg_lit_uint16 */

#ifndef kcg_lit_uint8
#define kcg_lit_uint8(kcg_C1) ((kcg_uint8) (kcg_C1))
#endif /* kcg_lit_uint8 */

#ifndef kcg_lit_int32
#define kcg_lit_int32(kcg_C1) ((kcg_int32) (kcg_C1))
#endif /* kcg_lit_int32 */

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

#ifndef kcg_lsl_uint32
#define kcg_lsl_uint32(kcg_C1, kcg_C2)                                        \
  ((kcg_uint32) ((kcg_C1) << (kcg_C2)) & 0xffffffffffffffff)
#endif /* kcg_lsl_uint32 */

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

#ifndef kcg_lnot_uint32
#define kcg_lnot_uint32(kcg_C1) ((kcg_C1) ^ 0xffffffffffffffff)
#endif /* kcg_lnot_uint32 */

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

/* Q_ORIENTATION/ */
typedef enum kcg_tag_Q_ORIENTATION {
  Q_ORIENTATION_The_balise_group_has_been_passed_by_the_train_in_reverse_direction,
  _16_Q_ORIENTATION_The_balise_group_has_been_passed_by_the_train_in_nominal_direction
} Q_ORIENTATION;
/* TM::OrLine/ */
typedef enum kcg_tag_OrLine_TM { N_TM, Z_TM } OrLine_TM;
/* TM::OrBG/ */
typedef enum kcg_tag_OrBG_TM { Amsterdam_TM, Utrecht_TM } OrBG_TM;
/* US_Integration_November::TrackType/ */
typedef enum kcg_tag_TrackType_US_Integration_November {
  US_01_to_12_US_Integration_November,
  US_13_to_16_US_Integration_November,
  Sheet14_only_US_Integration_November
} TrackType_US_Integration_November;
/* RBC_Diagnostic_Pkg::DiagMsgText_E/ */
typedef enum kcg_tag_DiagMsgText_E_RBC_Diagnostic_Pkg {
  DIAG_MSG_Empty_RBC_Diagnostic_Pkg,
  DIAG_MSG_Failure_during_session_establishment_RBC_Diagnostic_Pkg
} DiagMsgText_E_RBC_Diagnostic_Pkg;
/* RBC_Diagnostic_Pkg::DiagMsgSrc_E/ */
typedef enum kcg_tag_DiagMsgSrc_E_RBC_Diagnostic_Pkg {
  DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg,
  DIAG_MSG_SRC_Process_Unconditional_Emergency_Message_RBC_Diagnostic_Pkg
} DiagMsgSrc_E_RBC_Diagnostic_Pkg;
/* RBC_Diagnostic_Pkg::DiagMsgType_E/ */
typedef enum kcg_tag_DiagMsgType_E_RBC_Diagnostic_Pkg {
  DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg,
  DIAG_MSG_TYPE_information_RBC_Diagnostic_Pkg,
  DIAG_MSG_TYPE_warning_RBC_Diagnostic_Pkg,
  DIAG_MSG_TYPE_error_RBC_Diagnostic_Pkg
} DiagMsgType_E_RBC_Diagnostic_Pkg;
/* Q_EMERGENCYSTOP/ */
typedef enum kcg_tag_Q_EMERGENCYSTOP {
  _12_Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA,
  Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_no_update_of_EOA,
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
/* API_RadioCommunication_Pkg::cmdRadioUnit_T/ */
typedef enum kcg_tag_cmdRadioUnit_T_API_RadioCommunication_Pkg {
  cmdr_not_relevant_API_RadioCommunication_Pkg,
  cmdr_connection_request_API_RadioCommunication_Pkg,
  cmdr_disconnection_request_API_RadioCommunication_Pkg,
  cmdr_reset_connection_API_RadioCommunication_Pkg,
  cmdr_networkUnregister_API_RadioCommunication_Pkg,
  cmdr_networkRegister_API_RadioCommunication_Pkg
} cmdRadioUnit_T_API_RadioCommunication_Pkg;
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
/* TIU_Types_Pkg::M_voltage_types_T/ */
typedef enum kcg_tag_M_voltage_types_T_TIU_Types_Pkg {
  line_not_fitted_with_any_traction_system_TIU_Types_Pkg,
  ac_25kV_50Hz_TIU_Types_Pkg,
  ac_15kV_16_7Hz_TIU_Types_Pkg,
  dc_3kV_TIU_Types_Pkg,
  dc_1_5kV_TIU_Types_Pkg,
  dc_600_750kV_TIU_Types_Pkg
} M_voltage_types_T_TIU_Types_Pkg;
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
/* TIU_Types_Pkg::M_Isolation_status_T/ */
typedef enum kcg_tag_M_Isolation_status_T_TIU_Types_Pkg {
  on_board_equipment_is_isolated_TIU_Types_Pkg,
  on_board_equipement_is_not_isolated_TIU_Types_Pkg,
  isolation_status_not_defined_TIU_Types_Pkg
} M_Isolation_status_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_brake_signal_command_T/ */
typedef enum kcg_tag_M_brake_signal_command_T_TIU_Types_Pkg {
  brake_signal_command_not_defined_TIU_Types_Pkg,
  apply_brake_TIU_Types_Pkg,
  release_brake_TIU_Types_Pkg
} M_brake_signal_command_T_TIU_Types_Pkg;
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
  _17_switch_off_eddy_current_brake_for_emergency_brake_TIU_Types_Pkg
} M_trackcond_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_brake_status_T/ */
typedef enum kcg_tag_M_brake_status_T_TIU_Types_Pkg {
  brake_status_not_defined_TIU_Types_Pkg,
  is_active_TIU_Types_Pkg,
  is_not_active_TIU_Types_Pkg
} M_brake_status_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_train_data_entry_type_T/ */
typedef enum kcg_tag_M_train_data_entry_type_T_TIU_Types_Pkg {
  fixed_entry_type_TIU_Types_Pkg,
  flexible_entry_type_TIU_Types_Pkg,
  switchable_entry_type_TIU_Types_Pkg,
  no_entry_type_TIU_Types_Pkg
} M_train_data_entry_type_T_TIU_Types_Pkg;
/* Common_Types_Pkg::MsgSource_T/ */
typedef enum kcg_tag_MsgSource_T_Common_Types_Pkg {
  msrc_undefined_Common_Types_Pkg,
  msrc_Euroradio_Common_Types_Pkg,
  msrc_Eurobalise_Common_Types_Pkg,
  msrc_RadioInfillUnit_Common_Types_Pkg,
  msrc_OBU_Common_Types_Pkg
} MsgSource_T_Common_Types_Pkg;
/* M_ACK/ */
typedef enum kcg_tag_M_ACK {
  M_ACK_No_acknowledgement_required,
  M_ACK_Acknowledgement_required
} M_ACK;
/* Q_LINK/ */
typedef enum kcg_tag_Q_LINK { Q_LINK_Unlinked, Q_LINK_Linked } Q_LINK;
/* M_DUP/ */
typedef enum kcg_tag_M_DUP {
  M_DUP_No_duplicates,
  M_DUP_This_balise_is_a_duplicate_of_the_next_balise,
  _15_M_DUP_This_balise_is_a_duplicate_of_the_previous_balise
} M_DUP;
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
/* Q_MEDIA/ */
typedef enum kcg_tag_Q_MEDIA { Q_MEDIA_Balise, Q_MEDIA_Loop } Q_MEDIA;
/* Q_UPDOWN/ */
typedef enum kcg_tag_Q_UPDOWN {
  Q_UPDOWN_Down_link_telegram,
  Q_UPDOWN_Up_link_telegram
} Q_UPDOWN;
/* API_RadioCommunication_Pkg::connectionStatusRadioUnit_T/ */
typedef enum kcg_tag_connectionStatusRadioUnit_T_API_RadioCommunication_Pkg {
  conn_unknown_API_RadioCommunication_Pkg,
  conn_no_connection_API_RadioCommunication_Pkg,
  conn_ConnectionUp_API_RadioCommunication_Pkg,
  conn_SetupFailed_API_RadioCommunication_Pkg
} connectionStatusRadioUnit_T_API_RadioCommunication_Pkg;
/* TIU_Types_Pkg::M_cab_signal_status_T/ */
typedef enum kcg_tag_M_cab_signal_status_T_TIU_Types_Pkg {
  cab_signal_status_not_defined_TIU_Types_Pkg,
  both_desks_are_closed_TIU_Types_Pkg,
  desk_A_is_open_TIU_Types_Pkg,
  desk_B_is_open_TIU_Types_Pkg,
  both_desks_are_open_TIU_Types_Pkg
} M_cab_signal_status_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_directioncontroller_signal_status_T/ */
typedef enum kcg_tag_M_directioncontroller_signal_status_T_TIU_Types_Pkg {
  direction_controller_in_neutral_TIU_Types_Pkg,
  direction_controller_in_forward_TIU_Types_Pkg,
  direction_controller_in_backward_TIU_Types_Pkg
} M_directioncontroller_signal_status_T_TIU_Types_Pkg;
/* MoRC_Pck::mobileHWConnectionStatus_Type/ */
typedef enum kcg_tag_mobileHWConnectionStatus_Type_MoRC_Pck {
  mhwc_notRegistered_MoRC_Pck,
  mhwc_registered_MoRC_Pck,
  mhwc_connecting_MoRC_Pck,
  mhwc_connected_MoRC_Pck,
  mhwc_registering_MoRC_Pck
} mobileHWConnectionStatus_Type_MoRC_Pck;
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
/* Q_LENGTH/ */
typedef enum kcg_tag_Q_LENGTH {
  Q_LENGTH_No_train_integrity_information_available,
  _13_Q_LENGTH_Train_integrity_confirmed_by_integrity_monitoring_device,
  Q_LENGTH_Train_integrity_confirmed_by_driver,
  Q_LENGTH_Train_integrity_lost
} Q_LENGTH;
/* Q_DLRBG/ */
typedef enum kcg_tag_Q_DLRBG {
  Q_DLRBG_Reverse,
  Q_DLRBG_Nominal,
  Q_DLRBG_Unknown
} Q_DLRBG;
/* Q_DIRLRBG/ */
typedef enum kcg_tag_Q_DIRLRBG {
  Q_DIRLRBG_Reverse,
  Q_DIRLRBG_Nominal,
  Q_DIRLRBG_Unknown
} Q_DIRLRBG;
/* M_VOLTAGE/ */
typedef enum kcg_tag_M_VOLTAGE {
  M_VOLTAGE_Line_not_fitted_with_any_traction_system,
  M_VOLTAGE_AC_25_kV_50_Hz,
  M_VOLTAGE_AC_15_kV_16_7_Hz,
  M_VOLTAGE_DC_3_kV,
  M_VOLTAGE_DC_1_5_kV,
  M_VOLTAGE_DC_600_or_750_V
} M_VOLTAGE;
/* M_AIRTIGHT/ */
typedef enum kcg_tag_M_AIRTIGHT {
  M_AIRTIGHT_Not_fitted,
  M_AIRTIGHT_Fitted
} M_AIRTIGHT;
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
/* M_LOADINGGAUGE/ */
typedef enum kcg_tag_M_LOADINGGAUGE {
  M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles,
  M_LOADINGGAUGE_G1,
  M_LOADINGGAUGE_GA,
  M_LOADINGGAUGE_GB,
  M_LOADINGGAUGE_GC
} M_LOADINGGAUGE;
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
/* NC_TRAIN/ */
typedef enum kcg_tag_NC_TRAIN {
  NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category,
  _14_NC_TRAIN_Freight_train_braked_in_P_position,
  NC_TRAIN_Freight_train_braked_in_G_position,
  NC_TRAIN_Passenger_train
} NC_TRAIN;
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
/* Q_SCALE/ */
typedef enum kcg_tag_Q_SCALE {
  Q_SCALE_10_cm_scale,
  Q_SCALE_1_m_scale,
  Q_SCALE_10_m_scale
} Q_SCALE;
/* M_VERSION/ */
typedef enum kcg_tag_M_VERSION {
  M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS,
  M_VERSION_Version_1_0_introduced_in_SRS_1_2_0_and_reused_in_SRSs_2_0_0_and_2_2_2_and_2_3_0,
  M_VERSION_Version_1_1_introduced_in_SRS_3_3_0,
  M_VERSION_Version_2_0_introduced_in_SRS_3_3_0
} M_VERSION;
/* Q_DIR/ */
typedef enum kcg_tag_Q_DIR {
  Q_DIR_Reverse,
  Q_DIR_Nominal,
  Q_DIR_Both_directions
} Q_DIR;
/* Toolbox::TrainModules::RTM/GSM_R_MobileManagement: */
typedef enum kcg_tag_SSM_TR_GSM_R_MobileManagement {
  SSM_TR_no_trans_GSM_R_MobileManagement,
  SSM_TR_Not_registered_Registering_1_Not_registered_GSM_R_MobileManagement,
  SSM_TR_Registering_Registered_1_Registering_GSM_R_MobileManagement,
  SSM_TR_Registering_Not_registered_2_Registering_GSM_R_MobileManagement,
  SSM_TR_Registered_Connecting_1_Registered_GSM_R_MobileManagement,
  SSM_TR_Registered_Not_registered_2_Registered_GSM_R_MobileManagement,
  SSM_TR_Connecting_Connected_1_Connecting_GSM_R_MobileManagement,
  SSM_TR_Connecting_Not_registered_2_Connecting_GSM_R_MobileManagement,
  SSM_TR_Connected_Registered_1_Connected_GSM_R_MobileManagement,
  SSM_TR_Connected_Not_registered_2_Connected_GSM_R_MobileManagement
} SSM_TR_GSM_R_MobileManagement;
/* Toolbox::TrainModules::RTM/GSM_R_MobileManagement: */
typedef enum kcg_tag_SSM_ST_GSM_R_MobileManagement {
  SSM_st_Not_registered_GSM_R_MobileManagement,
  SSM_st_Registering_GSM_R_MobileManagement,
  SSM_st_Registered_GSM_R_MobileManagement,
  SSM_st_Connecting_GSM_R_MobileManagement,
  SSM_st_Connected_GSM_R_MobileManagement
} SSM_ST_GSM_R_MobileManagement;
/* RBC_Model_Pkg::RBC__ProcessPositionReport/POSITION_REPORT_SM: */
typedef enum kcg_tag_SSM_TR_POSITION_REPORT_SM {
  SSM_TR_no_trans_POSITION_REPORT_SM,
  SSM_TR_IDLE_PROCESS_POSITION_REPORT_1_IDLE_POSITION_REPORT_SM,
  SSM_TR_PROCESS_POSITION_REPORT_PROCESS_POSITION_REPORT_1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM,
  _163_SSM_TR_PROCESS_POSITION_REPORT_IDLE_2_PROCESS_POSITION_REPORT_POSITION_REPORT_SM
} SSM_TR_POSITION_REPORT_SM;
/* RBC_Model_Pkg::RBC__ProcessPositionReport/POSITION_REPORT_SM: */
typedef enum kcg_tag_SSM_ST_POSITION_REPORT_SM {
  SSM_st_IDLE_POSITION_REPORT_SM,
  SSM_st_PROCESS_POSITION_REPORT_POSITION_REPORT_SM
} SSM_ST_POSITION_REPORT_SM;
/* RBC_Model_Pkg::RBC__ProcessMovementAuthority/MOVEMENT_AUTHORITY_SM: */
typedef enum kcg_tag_SSM_TR_MOVEMENT_AUTHORITY_SM {
  SSM_TR_no_trans_MOVEMENT_AUTHORITY_SM,
  SSM_TR_IDLE_SEND_MA_1_IDLE_MOVEMENT_AUTHORITY_SM,
  SSM_TR_IDLE_UPDATE_POSITION_2_IDLE_MOVEMENT_AUTHORITY_SM,
  SSM_TR_SEND_MA_TRY_PROCESS_ACKNOWLEDGEMENT_1_SEND_MA_MOVEMENT_AUTHORITY_SM,
  SSM_TR_SEND_MA_AWAIT_ACKNOWLEDGEMENT_2_SEND_MA_MOVEMENT_AUTHORITY_SM,
  SSM_TR_AWAIT_ACKNOWLEDGEMENT_TRY_PROCESS_ACKNOWLEDGEMENT_1_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_SEND_MA_1_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM,
  _164_SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_UPDATE_POSITION_2_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM,
  _165_SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_IDLE_3_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM,
  _166_SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_TRY_PROCESS_ACKNOWLEDGEMENT_4_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM,
  _167_SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_AWAIT_ACKNOWLEDGEMENT_5_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM,
  SSM_TR_AWAIT_MA_SEND_MA_1_AWAIT_MA_MOVEMENT_AUTHORITY_SM,
  SSM_TR_UPDATE_POSITION_SEND_MA_1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM,
  SSM_TR_UPDATE_POSITION_AWAIT_MA_2_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM
} SSM_TR_MOVEMENT_AUTHORITY_SM;
/* RBC_Model_Pkg::RBC__ProcessMovementAuthority/MOVEMENT_AUTHORITY_SM: */
typedef enum kcg_tag_SSM_ST_MOVEMENT_AUTHORITY_SM {
  SSM_st_IDLE_MOVEMENT_AUTHORITY_SM,
  SSM_st_SEND_MA_MOVEMENT_AUTHORITY_SM,
  SSM_st_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM,
  SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM,
  SSM_st_AWAIT_MA_MOVEMENT_AUTHORITY_SM,
  SSM_st_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM
} SSM_ST_MOVEMENT_AUTHORITY_SM;
/* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop/CONDITIONAL_EMERGENCY_STOP_SM: */
typedef enum kcg_tag_SSM_TR_CONDITIONAL_EMERGENCY_STOP_SM {
  SSM_TR_no_trans_CONDITIONAL_EMERGENCY_STOP_SM,
  SSM_TR_IDLE_SEND_CONDITIONAL_EMERGENCY_STOP_1_IDLE_CONDITIONAL_EMERGENCY_STOP_SM,
  SSM_TR_SEND_CONDITIONAL_EMERGENCY_STOP_TRY_PROCESS_ACKNOWLEDGEMENT_1_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM,
  _174_SSM_TR_SEND_CONDITIONAL_EMERGENCY_STOP_AWAIT_ACKNOWLEDGEMENT_2_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM,
  _173_SSM_TR_AWAIT_ACKNOWLEDGEMENT_TRY_PROCESS_ACKNOWLEDGEMENT_1_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM,
  _169_SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_SEND_CONDITIONAL_EMERGENCY_STOP_1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM,
  _170_SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_IDLE_2_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM,
  _171_SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_TRY_PROCESS_ACKNOWLEDGEMENT_3_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM,
  _172_SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_AWAIT_ACKNOWLEDGEMENT_4_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM
} SSM_TR_CONDITIONAL_EMERGENCY_STOP_SM;
/* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop/CONDITIONAL_EMERGENCY_STOP_SM: */
typedef enum kcg_tag_SSM_ST_CONDITIONAL_EMERGENCY_STOP_SM {
  SSM_st_IDLE_CONDITIONAL_EMERGENCY_STOP_SM,
  SSM_st_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM,
  SSM_st_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM,
  _168_SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM
} SSM_ST_CONDITIONAL_EMERGENCY_STOP_SM;
/* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop/UNCONDITIONAL_EMERGENCY_STOP_SM: */
typedef enum kcg_tag_SSM_TR_UNCONDITIONAL_EMERGENCY_STOP_SM {
  SSM_TR_no_trans_UNCONDITIONAL_EMERGENCY_STOP_SM,
  SSM_TR_IDLE_SEND_UNCONDITIONAL_EMERGENCY_STOP_1_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM,
  SSM_TR_SEND_UNCONDITIONAL_EMERGENCY_STOP_TRY_PROCESS_ACKNOWLEDGEMENT_1_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM,
  _181_SSM_TR_SEND_UNCONDITIONAL_EMERGENCY_STOP_AWAIT_ACKNOWLEDGEMENT_2_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM,
  _180_SSM_TR_AWAIT_ACKNOWLEDGEMENT_TRY_PROCESS_ACKNOWLEDGEMENT_1_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM,
  _176_SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_SEND_UNCONDITIONAL_EMERGENCY_STOP_1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM,
  _177_SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_IDLE_2_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM,
  _178_SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_TRY_PROCESS_ACKNOWLEDGEMENT_3_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM,
  _179_SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_AWAIT_ACKNOWLEDGEMENT_4_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM
} SSM_TR_UNCONDITIONAL_EMERGENCY_STOP_SM;
/* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop/UNCONDITIONAL_EMERGENCY_STOP_SM: */
typedef enum kcg_tag_SSM_ST_UNCONDITIONAL_EMERGENCY_STOP_SM {
  SSM_st_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM,
  SSM_st_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM,
  SSM_st_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM,
  _175_SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM
} SSM_ST_UNCONDITIONAL_EMERGENCY_STOP_SM;
/* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop/REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM: */
typedef enum kcg_tag_SSM_TR_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM {
  SSM_TR_no_trans_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
  SSM_TR_IDLE_SEND_REVOCATION_OF_ES_MESSAGE_1_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
  SSM_TR_SEND_REVOCATION_OF_ES_MESSAGE_TRY_PROCESS_ACKNOWLEDGEMENT_1_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
  _188_SSM_TR_SEND_REVOCATION_OF_ES_MESSAGE_AWAIT_ACKNOWLEDGEMENT_2_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
  _189_SSM_TR_SEND_REVOCATION_OF_ES_MESSAGE_IDLE_3_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
  _187_SSM_TR_AWAIT_ACKNOWLEDGEMENT_TRY_PROCESS_ACKNOWLEDGEMENT_1_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
  _183_SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_SEND_REVOCATION_OF_ES_MESSAGE_1_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
  _184_SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_IDLE_2_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
  _185_SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_TRY_PROCESS_ACKNOWLEDGEMENT_3_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
  _186_SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_AWAIT_ACKNOWLEDGEMENT_4_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM
} SSM_TR_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
/* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop/REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM: */
typedef enum kcg_tag_SSM_ST_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM {
  SSM_st_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
  SSM_st_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
  SSM_st_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
  _182_SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM
} SSM_ST_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
/* RBC_Model_Pkg::RBC__ProcessGeneralMessage/GENERAL_MESSAGE_SM: */
typedef enum kcg_tag_SSM_TR_GENERAL_MESSAGE_SM {
  SSM_TR_no_trans_GENERAL_MESSAGE_SM,
  SSM_TR_IDLE_SEND_GENERAL_MESSAGE_1_IDLE_GENERAL_MESSAGE_SM,
  SSM_TR_SEND_GENERAL_MESSAGE_TRY_PROCESS_ACKNOWLEDGEMENT_1_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM,
  SSM_TR_SEND_GENERAL_MESSAGE_AWAIT_ACKNOWLEDGEMENT_2_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM,
  SSM_TR_SEND_GENERAL_MESSAGE_IDLE_3_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM,
  _195_SSM_TR_AWAIT_ACKNOWLEDGEMENT_TRY_PROCESS_ACKNOWLEDGEMENT_1_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM,
  _191_SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_SEND_GENERAL_MESSAGE_1_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM,
  _192_SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_IDLE_2_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM,
  _193_SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_TRY_PROCESS_ACKNOWLEDGEMENT_3_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM,
  _194_SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_AWAIT_ACKNOWLEDGEMENT_4_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM
} SSM_TR_GENERAL_MESSAGE_SM;
/* RBC_Model_Pkg::RBC__ProcessGeneralMessage/GENERAL_MESSAGE_SM: */
typedef enum kcg_tag_SSM_ST_GENERAL_MESSAGE_SM {
  SSM_st_IDLE_GENERAL_MESSAGE_SM,
  SSM_st_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM,
  SSM_st_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM,
  _190_SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM
} SSM_ST_GENERAL_MESSAGE_SM;
/* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip/TRIP_AND_POST_TRIP_SM: */
typedef enum kcg_tag_SSM_TR_TRIP_AND_POST_TRIP_SM {
  SSM_TR_no_trans_TRIP_AND_POST_TRIP_SM,
  SSM_TR_IDLE_MODE_TRIP_1_IDLE_TRIP_AND_POST_TRIP_SM,
  SSM_TR_MODE_TRIP_SEND_MSG_06_1_MODE_TRIP_TRIP_AND_POST_TRIP_SM,
  SSM_TR_MODE_POST_TRIP_TRY_PROCESS_ACKNOWLEDGEMENT_1_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM,
  _197_SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_IDLE_1_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM,
  _198_SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_TRY_PROCESS_ACKNOWLEDGEMENT_2_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM,
  _199_SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_MODE_POST_TRIP_3_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM,
  SSM_TR_SEND_MSG_06_MODE_POST_TRIP_1_SEND_MSG_06_TRIP_AND_POST_TRIP_SM
} SSM_TR_TRIP_AND_POST_TRIP_SM;
/* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip/TRIP_AND_POST_TRIP_SM: */
typedef enum kcg_tag_SSM_ST_TRIP_AND_POST_TRIP_SM {
  SSM_st_IDLE_TRIP_AND_POST_TRIP_SM,
  SSM_st_MODE_TRIP_TRIP_AND_POST_TRIP_SM,
  SSM_st_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM,
  _196_SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM,
  SSM_st_SEND_MSG_06_TRIP_AND_POST_TRIP_SM
} SSM_ST_TRIP_AND_POST_TRIP_SM;
/* RBC_Model_Pkg::RBC__ProcessController/CONTROLLER_SM: */
typedef enum kcg_tag_SSM_TR_CONTROLLER_SM {
  SSM_TR_no_trans_CONTROLLER_SM,
  SSM_TR_SESSION_TERMINATED_SEND_RBC_VERSION_1_SESSION_TERMINATED_CONTROLLER_SM,
  SSM_TR_SEND_RBC_VERSION_SESSION_ESTABLISHED_1_SEND_RBC_VERSION_CONTROLLER_SM,
  SSM_TR_SEND_RBC_VERSION_AWAIT_SESSION_ESTABLISHED_REPORT_2_SEND_RBC_VERSION_CONTROLLER_SM,
  SSM_TR_AWAIT_SESSION_ESTABLISHED_REPORT_SESSION_ESTABLISHED_1_AWAIT_SESSION_ESTABLISHED_REPORT_CONTROLLER_SM,
  SSM_TR_SESSION_ESTABLISHED_SESSION_TERMINATION_REQUEST_1_SESSION_ESTABLISHED_CONTROLLER_SM,
  SSM_TR_SESSION_TERMINATION_REQUEST_SEND_RBC_VERSION_1_SESSION_TERMINATION_REQUEST_CONTROLLER_SM,
  _200_SSM_TR_SESSION_TERMINATION_REQUEST_SESSION_TERMINATED_2_SESSION_TERMINATION_REQUEST_CONTROLLER_SM
} SSM_TR_CONTROLLER_SM;
/* RBC_Model_Pkg::RBC__ProcessController/CONTROLLER_SM: */
typedef enum kcg_tag_SSM_ST_CONTROLLER_SM {
  SSM_st_SESSION_TERMINATED_CONTROLLER_SM,
  SSM_st_SEND_RBC_VERSION_CONTROLLER_SM,
  SSM_st_AWAIT_SESSION_ESTABLISHED_REPORT_CONTROLLER_SM,
  SSM_st_SESSION_ESTABLISHED_CONTROLLER_SM,
  SSM_st_SESSION_TERMINATION_REQUEST_CONTROLLER_SM
} SSM_ST_CONTROLLER_SM;
/* RBC_Model_Pkg::RBC__ProcessController/CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM: */
typedef enum kcg_tag_SSM_TR_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM {
  SSM_TR_no_trans_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM,
  SSM_TR_PROCESS_SESSION_ESTABLISHED_REPORT_PROCESS_VALIDATED_TRAIN_DATA_1_PROCESS_SESSION_ESTABLISHED_REPORT_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM,
  _202_SSM_TR_PROCESS_SESSION_ESTABLISHED_REPORT_AWAIT_VALIDATED_TRAIN_DATA_2_PROCESS_SESSION_ESTABLISHED_REPORT_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM,
  _201_SSM_TR_PROCESS_VALIDATED_TRAIN_DATA_SEND_MA_AND_POS_REP_PARAMS_1_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM,
  SSM_TR_RECEIVE_AND_TRIGGER_RBC_REQUEST_SESSION_TERMINATION_1_RECEIVE_AND_TRIGGER_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM,
  SSM_TR_START_PROCESS_SESSION_ESTABLISHED_REPORT_1_START_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM,
  SSM_TR_START_AWAIT_SESSION_TERMINATION_REQUEST_2_START_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM,
  SSM_TR_AWAIT_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_1_AWAIT_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM,
  SSM_TR_SEND_MA_AND_POS_REP_PARAMS_RECEIVE_AND_TRIGGER_1_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM,
  SSM_TR_RBC_REQUEST_SESSION_TERMINATION_AWAIT_SESSION_TERMINATION_REQUEST_1_RBC_REQUEST_SESSION_TERMINATION_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM
} SSM_TR_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
/* RBC_Model_Pkg::RBC__ProcessController/CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM: */
typedef enum kcg_tag_SSM_ST_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM {
  SSM_st_PROCESS_SESSION_ESTABLISHED_REPORT_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM,
  SSM_st_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM,
  SSM_st_RECEIVE_AND_TRIGGER_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM,
  SSM_st_START_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM,
  SSM_st_AWAIT_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM,
  SSM_st_AWAIT_SESSION_TERMINATION_REQUEST_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM,
  SSM_st_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM,
  SSM_st_RBC_REQUEST_SESSION_TERMINATION_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM
} SSM_ST_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
/* RBC_Model_Pkg::RBC__ProcessController/CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM: */
typedef enum kcg_tag_SSM_TR_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM {
  SSM_TR_no_trans_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM,
  SSM_TR_START_PROCESS_VALIDATED_TRAIN_DATA_1_START_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM,
  _212_SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_TRY_PROCESS_ACKNOWLEDGEMENT_1_TRY_PROCESS_ACKNOWLEDGEMENT_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHE,
  _213_SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_AWAIT_ACKNOWLEDGEMENT_2_TRY_PROCESS_ACKNOWLEDGEMENT_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONT,
  _211_SSM_TR_AWAIT_ACKNOWLEDGEMENT_TRY_PROCESS_ACKNOWLEDGEMENT_1_AWAIT_ACKNOWLEDGEMENT_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER,
  _209_SSM_TR_PROCESS_VALIDATED_TRAIN_DATA_TRY_PROCESS_ACKNOWLEDGEMENT_1_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLIS,
  _210_SSM_TR_PROCESS_VALIDATED_TRAIN_DATA_AWAIT_ACKNOWLEDGEMENT_2_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CO
} SSM_TR_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
/* RBC_Model_Pkg::RBC__ProcessController/CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:PROCESS_VALIDATED_TRAIN_DATA:PROCESS_VALIDATED_TRAIN_DATA_SM: */
typedef enum kcg_tag_SSM_ST_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM {
  SSM_st_START_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM,
  _207_SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM,
  SSM_st_AWAIT_ACKNOWLEDGEMENT_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM,
  _208_SSM_st_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM
} SSM_ST_PROCESS_VALIDATED_TRAIN_DATA_SM_PROCESS_VALIDATED_TRAIN_DATA_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
/* RBC_Model_Pkg::RBC__ProcessController/CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM: */
typedef enum kcg_tag_SSM_TR_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM {
  SSM_TR_no_trans_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM,
  SSM_TR_START_SEND_MA_AND_POS_REP_PARAMS_1_START_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM,
  _205_SSM_TR_SEND_MA_AND_POS_REP_PARAMS_TRY_PROCESS_ACKNOWLEDGMENT_1_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTR,
  _206_SSM_TR_SEND_MA_AND_POS_REP_PARAMS_AWAIT_ACKNOWLEDGMENT_2_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_,
  SSM_TR_AWAIT_ACKNOWLEDGMENT_TRY_PROCESS_ACKNOWLEDGMENT_1_AWAIT_ACKNOWLEDGMENT_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGMENT_TRY_PROCESS_ACKNOWLEDGMENT_1_TRY_PROCESS_ACKNOWLEDGMENT_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER,
  _204_SSM_TR_TRY_PROCESS_ACKNOWLEDGMENT_AWAIT_ACKNOWLEDGMENT_2_TRY_PROCESS_ACKNOWLEDGMENT_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_
} SSM_TR_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
/* RBC_Model_Pkg::RBC__ProcessController/CONTROLLER_SM:SESSION_ESTABLISHED:SESSION_ESTABLISHED_SM:SEND_MA_AND_POS_REP_PARAMS:SEND_MA_AMD_POS_REP_PARAMS_SM: */
typedef enum kcg_tag_SSM_ST_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM {
  SSM_st_START_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM,
  _203_SSM_st_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM,
  SSM_st_AWAIT_ACKNOWLEDGMENT_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM,
  SSM_st_TRY_PROCESS_ACKNOWLEDGMENT_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM
} SSM_ST_SEND_MA_AMD_POS_REP_PARAMS_SM_SEND_MA_AND_POS_REP_PARAMS_SESSION_ESTABLISHED_SM_SESSION_ESTABLISHED_CONTROLLER_SM;
/* Toolbox::Physics::PHYSICS_MovementSimulation/SM1: */
typedef enum kcg_tag_SSM_TR_SM1 {
  SSM_TR_no_trans_SM1,
  SSM_TR_Reset_Driving_1_Reset_SM1,
  SSM_TR_Driving_Reset_1_Driving_SM1
} SSM_TR_SM1;
/* Toolbox::Physics::PHYSICS_MovementSimulation/SM1: */
typedef enum kcg_tag_SSM_ST_SM1 {
  SSM_st_Reset_SM1,
  SSM_st_Driving_SM1
} SSM_ST_SM1;
typedef Q_DIR _24_array[33];

/* Packet_TrainTypes_Pkg::PT4_ErrorReporting_T/ */
typedef struct kcg_tag_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg {
  kcg_bool valid;
  M_ERROR m_error;
} PT4_ErrorReporting_T_Packet_TrainTypes_Pkg;

/* TIU_Types_Pkg::Brake_status_T/ */
typedef struct kcg_tag_Brake_status_T_TIU_Types_Pkg {
  kcg_bool valid;
  M_brake_status_T_TIU_Types_Pkg m_regenerativebrake_st;
  M_brake_status_T_TIU_Types_Pkg m_eddycurrentbrake_st;
  M_brake_status_T_TIU_Types_Pkg m_magneticshoebrake_st;
  M_brake_status_T_TIU_Types_Pkg m_electropneumaticbrake_st;
  M_brake_status_T_TIU_Types_Pkg m_additionalbrake_st;
} Brake_status_T_TIU_Types_Pkg;

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

/* TIU_Types_Pkg::Brake_inhibition_command_T/ */
typedef struct kcg_tag_Brake_inhibition_command_T_TIU_Types_Pkg {
  kcg_bool valid;
  M_brake_inhibit_command_T_TIU_Types_Pkg m_regenerativebrake_cm;
  M_eddy_current_brake_inhibition_T_TIU_Types_Pkg m_eddycurrentbrake_cm;
  M_brake_inhibit_command_T_TIU_Types_Pkg m_magneticshoebrake_cm;
} Brake_inhibition_command_T_TIU_Types_Pkg;

typedef kcg_bool array_bool_5[5];

/* TIU_Types_Pkg::Type_I_train_commands_T/ */
typedef struct kcg_tag_Type_I_train_commands_T_TIU_Types_Pkg {
  kcg_bool valid;
  M_pantograph_command_T_TIU_Types_Pkg m_pantograph_cm;
  M_airtightness_command_T_TIU_Types_Pkg m_airtightness_cm;
  M_mainpowerswitch_command_T_TIU_Types_Pkg m_mainpowerswitch_cm;
  M_traction_cutoff_command_T_TIU_Types_Pkg m_traction_cutoff_cm;
} Type_I_train_commands_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::Brake_command_T/ */
typedef struct kcg_tag_Brake_command_T_TIU_Types_Pkg {
  kcg_bool valid;
  M_brake_signal_command_T_TIU_Types_Pkg m_servicebrake_cm;
  M_brake_signal_command_T_TIU_Types_Pkg m_emergencybrake_cm;
} Brake_command_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::Isolation_Status_T/ */
typedef struct kcg_tag_Isolation_Status_T_TIU_Types_Pkg {
  kcg_bool valid;
  M_Isolation_status_T_TIU_Types_Pkg isolation_status;
} Isolation_Status_T_TIU_Types_Pkg;

/* MoRC_Pck::mobileHWStatus_Type/ */
typedef struct kcg_tag_mobileHWStatus_Type_MoRC_Pck {
  kcg_bool valid;
  mobileHWConnectionStatus_Type_MoRC_Pck connectionStatus;
  kcg_bool settingUpConnectionHasFailed;
  kcg_bool connectionLost;
} mobileHWStatus_Type_MoRC_Pck;

/* Toolbox::odometryFactors_T/ */
typedef struct kcg_tag_odometryFactors_T_Toolbox {
  kcg_float32 o_nominal;
  kcg_float32 o_min;
  kcg_float32 o_max;
} odometryFactors_T_Toolbox;

typedef struct kcg_tag_struct_149475 {
  kcg_size idx;
  array_bool_5 items;
} struct_149475;

/* L_TAFDISPLAY/ */
typedef kcg_int32 L_TAFDISPLAY;

/* D_TAFDISPLAY/ */
typedef kcg_int32 D_TAFDISPLAY;

/* L_MESSAGE/ */
typedef kcg_int32 L_MESSAGE;

/* NID_RADIO/ */
typedef kcg_int32 NID_RADIO;

/* L_PACKET/ */
typedef kcg_int32 L_PACKET;

/* TM::nid_packet_meta/ */
typedef kcg_int32 nid_packet_meta_TM;

/* NID_TEXTMESSAGE/ */
typedef kcg_int32 NID_TEXTMESSAGE;

/* NID_LTRBG/ */
typedef kcg_int32 NID_LTRBG;

/* Packet_TrainTypes_Pkg::PT9_Level23_TransitionInformation_T/ */
typedef struct kcg_tag_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg {
  kcg_bool valid;
  NID_LTRBG transitionInformation;
} PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg;

/* Obu_BasicTypes_Pkg::Speed_T/ */
typedef kcg_int32 Speed_T_Obu_BasicTypes_Pkg;

/* Toolbox::OdometrySpeed_T/ */
typedef kcg_int32 OdometrySpeed_T_Toolbox;

/* NID_MN/ */
typedef kcg_int32 NID_MN;

/* API_RadioCommunication_Pkg::RadioManagement_T/ */
typedef struct kcg_tag_RadioManagement_T_API_RadioCommunication_Pkg {
  kcg_bool valid;
  cmdRadioUnit_T_API_RadioCommunication_Pkg cmd;
  NID_MN networkID;
} RadioManagement_T_API_RadioCommunication_Pkg;

/* TIU_Types_Pkg::NID_ctraction_T/ */
typedef kcg_int32 NID_ctraction_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::M_voltage_T/ */
typedef struct kcg_tag_M_voltage_T_TIU_Types_Pkg {
  M_voltage_types_T_TIU_Types_Pkg voltage_type;
  NID_ctraction_T_TIU_Types_Pkg NID_ctraction;
} M_voltage_T_TIU_Types_Pkg;

/* Obu_BasicTypes_Pkg::V_internal_Type/ */
typedef kcg_int32 V_internal_Type_Obu_BasicTypes_Pkg;

/* D_EMERGENCYSTOP/ */
typedef kcg_int32 D_EMERGENCYSTOP;

/* D_REF/ */
typedef kcg_int32 D_REF;

/* D_SR/ */
typedef kcg_int32 D_SR;

/* NID_EM/ */
typedef kcg_int32 NID_EM;

/* NID_RBC/ */
typedef kcg_int32 NID_RBC;

/* M_MCOUNT/ */
typedef kcg_int32 M_MCOUNT;

/* Obu_BasicTypes_Pkg::A_internal_Type/ */
typedef kcg_int32 A_internal_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::V_odometry_Type/ */
typedef kcg_int32 V_odometry_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::OdometrySpeeds_T/ */
typedef struct kcg_tag_OdometrySpeeds_T_Obu_BasicTypes_Pkg {
  V_odometry_Type_Obu_BasicTypes_Pkg v_safeNominal;
  V_odometry_Type_Obu_BasicTypes_Pkg v_rawNominal;
  V_odometry_Type_Obu_BasicTypes_Pkg v_lower;
  V_odometry_Type_Obu_BasicTypes_Pkg v_upper;
} OdometrySpeeds_T_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::L_internal_Type/ */
typedef kcg_int32 L_internal_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::LocWithInAcc_T/ */
typedef struct kcg_tag_LocWithInAcc_T_Obu_BasicTypes_Pkg {
  L_internal_Type_Obu_BasicTypes_Pkg nominal;
  L_internal_Type_Obu_BasicTypes_Pkg d_min;
  L_internal_Type_Obu_BasicTypes_Pkg d_max;
} LocWithInAcc_T_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::OdometryLocations_T/ */
typedef struct kcg_tag_OdometryLocations_T_Obu_BasicTypes_Pkg {
  L_internal_Type_Obu_BasicTypes_Pkg o_nominal;
  L_internal_Type_Obu_BasicTypes_Pkg o_min;
  L_internal_Type_Obu_BasicTypes_Pkg o_max;
} OdometryLocations_T_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::T_internal_Type/ */
typedef kcg_int32 T_internal_Type_Obu_BasicTypes_Pkg;

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

/* BG_Types_Pkg::centerOfBalisePosition_T/ */
typedef struct kcg_tag_centerOfBalisePosition_T_BG_Types_Pkg {
  odometry_T_Obu_BasicTypes_Pkg odometerOfBaliseDetection;
  LocWithInAcc_T_Obu_BasicTypes_Pkg BG_centerDetectionInaccuraccuracies;
} centerOfBalisePosition_T_BG_Types_Pkg;

/* NID_PRVLRBG/ */
typedef kcg_int32 NID_PRVLRBG;

/* V_TRAIN/ */
typedef kcg_int32 V_TRAIN;

/* L_TRAININT/ */
typedef kcg_int32 L_TRAININT;

/* L_DOUBTUNDER/ */
typedef kcg_int32 L_DOUBTUNDER;

/* L_DOUBTOVER/ */
typedef kcg_int32 L_DOUBTOVER;

/* D_LRBG/ */
typedef kcg_int32 D_LRBG;

/* NID_LRBG/ */
typedef kcg_int32 NID_LRBG;

/* Obu_BasicTypes_Pkg::BCD_T/ */
typedef kcg_int32 BCD_T_Obu_BasicTypes_Pkg;

/* Packet_TrainTypes_Pkg::telephoneNumber_T/,
   TM_conversions::C_P015_tracksim_compr/ */
typedef BCD_T_Obu_BasicTypes_Pkg telephoneNumber_T_Packet_TrainTypes_Pkg[15];

/* Packet_TrainTypes_Pkg::sNID_RADIO_T/ */
typedef struct kcg_tag_sNID_RADIO_T_Packet_TrainTypes_Pkg {
  kcg_bool valid;
  telephoneNumber_T_Packet_TrainTypes_Pkg telephoneNumber;
} sNID_RADIO_T_Packet_TrainTypes_Pkg;

/* Packet_TrainTypes_Pkg::aNID_RADIO_T/ */
typedef sNID_RADIO_T_Packet_TrainTypes_Pkg aNID_RADIO_T_Packet_TrainTypes_Pkg[1];

/* NID_CTRACTION/ */
typedef kcg_int32 NID_CTRACTION;

/* NID_NTC/ */
typedef kcg_int32 NID_NTC;

/* PosData_T/ */
typedef struct kcg_tag_PosData_T {
  NID_LRBG nid_lrbg;
  Q_SCALE q_scale;
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
  NID_PRVLRBG nid_prvlrbg;
} PosData_T;

/* NID_OPERATIONAL/ */
typedef kcg_int32 NID_OPERATIONAL;

/* Packet_TrainTypes_Pkg::PT5_TrainRunningNumber/ */
typedef struct kcg_tag_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg {
  kcg_bool valid;
  NID_OPERATIONAL TrainRunningNumber;
} PT5_TrainRunningNumber_Packet_TrainTypes_Pkg;

/* N_AXLE/ */
typedef kcg_int32 N_AXLE;

/* V_MAXTRAIN/ */
typedef kcg_int32 V_MAXTRAIN;

/* L_TRAIN/ */
typedef kcg_int32 L_TRAIN;

/* NID_ENGINE/ */
typedef kcg_int32 NID_ENGINE;

/* T_TRAIN/ */
typedef kcg_int32 T_TRAIN;

/* Clock_T/ */
typedef struct kcg_tag_Clock_T { T_TRAIN m_Value; } Clock_T;

/* NID_MESSAGE/ */
typedef kcg_int32 NID_MESSAGE;

/* TM_radio_messages::M_045_T/ */
typedef struct kcg_tag_M_045_T_TM_radio_messages {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  Q_ORIENTATION q_orientation;
} M_045_T_TM_radio_messages;

/* TM_radio_messages::M_032_T/ */
typedef struct kcg_tag_M_032_T_TM_radio_messages {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  M_VERSION m_version;
} M_032_T_TM_radio_messages;

/* Radio_Types_Pkg::Radio_TrainTrack_Header_T/ */
typedef struct kcg_tag_Radio_TrainTrack_Header_T_Radio_Types_Pkg {
  kcg_bool present;
  NID_MESSAGE nid_message;
  T_TRAIN t_train;
  NID_ENGINE nid_engine;
  Q_MARQSTREASON xQ_MARQSTREASON;
  T_TRAIN xT_TRAIN;
  NID_EM xNID_EM;
  Q_EMERGENCYSTOP xQ_EMERGENCYSTOP;
  NID_TEXTMESSAGE xNID_TEXTMESSAGE;
} Radio_TrainTrack_Header_T_Radio_Types_Pkg;

/* TM_radio_messages::M_008_T/ */
typedef struct kcg_tag_M_008_T_TM_radio_messages {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  T_TRAIN t_train_received;
} M_008_T_TM_radio_messages;

/* TM_radio_messages::M_002_T/ */
typedef struct kcg_tag_M_002_T_TM_radio_messages {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  Q_SCALE q_scale;
  D_SR d_sr;
} M_002_T_TM_radio_messages;

/* TM_radio_messages::M_033_T/ */
typedef struct kcg_tag_M_033_T_TM_radio_messages {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  Q_SCALE q_scale;
  D_REF d_ref;
} M_033_T_TM_radio_messages;

/* TM_radio_messages::M_015_T/ */
typedef struct kcg_tag_M_015_T_TM_radio_messages {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  NID_EM nid_em;
  Q_SCALE q_scale;
  D_REF d_ref;
  Q_DIR q_dir;
  D_EMERGENCYSTOP d_emergencystop;
} M_015_T_TM_radio_messages;

/* TM_radio_messages::M_034_T/ */
typedef struct kcg_tag_M_034_T_TM_radio_messages {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  Q_SCALE q_scale;
  D_REF d_ref;
  Q_DIR q_dir;
  D_TAFDISPLAY d_tafdisplay;
  L_TAFDISPLAY l_tafdisplay;
} M_034_T_TM_radio_messages;

/* NID_BG/ */
typedef kcg_int32 NID_BG;

/* D_LOC/ */
typedef kcg_int32 D_LOC;

/* Packet_Types_Pkg::IterPacket58_T/ */
typedef struct kcg_tag_IterPacket58_T_Packet_Types_Pkg {
  D_LOC d_loc;
  Q_LGTLOC q_lgtloc;
} IterPacket58_T_Packet_Types_Pkg;

typedef IterPacket58_T_Packet_Types_Pkg _22_array[32];

/* N_ITER/ */
typedef kcg_int32 N_ITER;

/* D_CYCLOC/ */
typedef kcg_int32 D_CYCLOC;

/* T_CYCLOC/ */
typedef kcg_int32 T_CYCLOC;

/* PosRepParams_T/ */
typedef struct kcg_tag_PosRepParams_T {
  Q_DIR q_dir;
  Q_SCALE q_scale;
  T_CYCLOC t_cycloc;
  D_CYCLOC d_cycloc;
  M_LOC m_loc;
  N_ITER m_NumberOfIncrementalDistancesAndQualifiers;
  _22_array m_IncrementalDistancesAndQualifiers;
} PosRepParams_T;

/* T_CYCRQST/ */
typedef kcg_int32 T_CYCRQST;

/* T_TIMEOUTRQST/ */
typedef kcg_int32 T_TIMEOUTRQST;

/* T_MAR/ */
typedef kcg_int32 T_MAR;

/* MAReqParams_T/ */
typedef struct kcg_tag_MAReqParams_T {
  Q_DIR q_dir;
  T_MAR t_mar;
  T_TIMEOUTRQST t_timeoutrqst;
  T_CYCRQST t_cycrqst;
} MAReqParams_T;

/* T_NVCONTACT/ */
typedef kcg_int32 T_NVCONTACT;

/* V_NVREL/ */
typedef kcg_int32 V_NVREL;

/* V_NVUNFIT/ */
typedef kcg_int32 V_NVUNFIT;

/* V_NVONSIGHT/ */
typedef kcg_int32 V_NVONSIGHT;

/* V_NVSTFF/ */
typedef kcg_int32 V_NVSTFF;

/* V_NVSHUNT/ */
typedef kcg_int32 V_NVSHUNT;

/* NID_C/ */
typedef kcg_int32 NID_C;

/* NationalParams_T/ */
typedef struct kcg_tag_NationalParams_T {
  NID_C nid_c;
  V_NVSHUNT v_nvshunt;
  V_NVSTFF v_nvstff;
  V_NVONSIGHT v_nvonsight;
  V_NVUNFIT v_nvunfit;
  V_NVREL v_nvrel;
  T_NVCONTACT t_nvcontact;
} NationalParams_T;

/* DynamicConfig_T/ */
typedef struct kcg_tag_DynamicConfig_T {
  M_VERSION m_version;
  NationalParams_T m_NationalParams;
  MAReqParams_T m_MAReqParams;
  PosRepParams_T m_PosRepParams;
} DynamicConfig_T;

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

/* API_Msg_Pkg::API_TelegramHeader_T/ */
typedef struct kcg_tag_API_TelegramHeader_T_API_Msg_Pkg {
  kcg_bool present;
  kcg_bool checkResult;
  kcg_bool api_bad_balise_received;
  TelegramHeader_T_BG_Types_Pkg api_header;
  centerOfBalisePosition_T_BG_Types_Pkg centerOfBalisePosition;
} API_TelegramHeader_T_API_Msg_Pkg;

/* NID_PACKET/ */
typedef kcg_int32 NID_PACKET;

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

/* TM_TrainToTrack::P005/ */
typedef struct kcg_tag_P005_TM_TrainToTrack {
  kcg_bool valid;
  NID_PACKET nid_packet;
  L_PACKET l_packet;
  NID_OPERATIONAL nid_opeartional;
} P005_TM_TrainToTrack;

/* TM_TrainToTrack::P009/ */
typedef struct kcg_tag_P009_TM_TrainToTrack {
  kcg_bool valid;
  NID_PACKET nid_packet;
  L_PACKET l_packet;
  NID_LTRBG nid_ltrbg;
} P009_TM_TrainToTrack;

/* TM_TrainToTrack::P004/ */
typedef struct kcg_tag_P004_TM_TrainToTrack {
  kcg_bool valid;
  NID_PACKET nid_packet;
  L_PACKET l_packet;
  M_ERROR m_error;
} P004_TM_TrainToTrack;

/* Common_Types_Pkg::MetadataElement_T/ */
typedef struct kcg_tag_MetadataElement_T_Common_Types_Pkg {
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  kcg_bool valid;
  kcg_int32 startAddress;
  kcg_int32 endAddress;
} MetadataElement_T_Common_Types_Pkg;

/* Common_Types_Pkg::Metadata_T/ */
typedef MetadataElement_T_Common_Types_Pkg Metadata_T_Common_Types_Pkg[30];

typedef kcg_int32 array_int32_100[100];

typedef kcg_int32 array_int32_21[21];

typedef kcg_int32 array_int32_24[24];

/* TIU_Types_Pkg::M_current_T/ */
typedef struct kcg_tag_M_current_T_TIU_Types_Pkg {
  kcg_bool no_restriction;
  kcg_int32 restriction;
} M_current_T_TIU_Types_Pkg;

typedef kcg_int32 array_int32_68[68];

/* Common_Types_Pkg::RBC_Id_T/ */
typedef struct kcg_tag_RBC_Id_T_Common_Types_Pkg {
  kcg_bool valid;
  NID_C nid_c;
  NID_RBC rbc_id;
  kcg_int32 device_id;
} RBC_Id_T_Common_Types_Pkg;

/* TM::P005_section_array_T/, TM_lib_internal::C_P005_fs_struct_to_array/ */
typedef kcg_int32 P005_section_array_T_TM[7];

/* TM::P005_OBU_sectionlist_array_T/,
   TM_lib_internal::C_P005_flatten_sections/ */
typedef P005_section_array_T_TM P005_OBU_sectionlist_array_T_TM[33];

typedef P005_OBU_sectionlist_array_T_TM array_int32_7_33_231[231];

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

/* TM::P005_section_int_T/ */
typedef struct kcg_tag_P005_section_int_T_TM {
  kcg_int32 D_LINK;
  kcg_int32 Q_NEWCOUNTRY;
  kcg_int32 NID_C;
  kcg_int32 NID_BG;
  kcg_int32 Q_LINKORIENTATION;
  kcg_int32 Q_LINKREACTION;
  kcg_int32 Q_LOCACC;
} P005_section_int_T_TM;

typedef P005_section_int_T_TM _31_array[1];

/* TM::P005_OBU_sectionlist_int_T/, TM_conversions::C_P005_tracksim_compr/ */
typedef P005_section_int_T_TM P005_OBU_sectionlist_int_T_TM[33];

/* TM::P005_trackide_sectionlist_T/ */
typedef P005_section_int_T_TM P005_trackide_sectionlist_T_TM[32];

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

/* TM::P057_trackside_int_T/ */
typedef struct kcg_tag_P057_trackside_int_T_TM {
  kcg_bool valid;
  kcg_int32 NID_PACKET;
  kcg_int32 Q_DIR;
  kcg_int32 L_PACKET;
  kcg_int32 T_MAR;
  kcg_int32 T_TIMEOUTRQST;
  kcg_int32 T_CYCRQST;
} P057_trackside_int_T_TM;

/* TM_radio_messages::M_032_int_T/ */
typedef struct kcg_tag_M_032_int_T_TM_radio_messages {
  kcg_bool valid;
  kcg_int32 nid_message;
  kcg_int32 l_message;
  kcg_int32 t_train;
  kcg_int32 m_ack;
  kcg_int32 nid_lrbg;
  kcg_int32 m_version;
} M_032_int_T_TM_radio_messages;

/* TM_radio_messages::M_008_int_T/ */
typedef struct kcg_tag_M_008_int_T_TM_radio_messages {
  kcg_bool valid;
  kcg_int32 nid_message;
  kcg_int32 l_message;
  kcg_int32 t_train;
  kcg_int32 m_ack;
  kcg_int32 nid_lrbg;
  kcg_int32 t_train_received;
} M_008_int_T_TM_radio_messages;

typedef struct kcg_tag_struct_151390 {
  kcg_bool valid;
  kcg_int32 nid_message;
  kcg_int32 l_message;
  kcg_int32 t_train;
  M_ACK m_ack;
  kcg_int32 nid_lrbg;
  kcg_int32 t_train_SH_request;
} struct_151390;

/* TM_radio_messages::M_028_T/ */
typedef struct_151390 M_028_T_TM_radio_messages;

/* TM_radio_messages::M_027_T/ */
typedef struct_151390 M_027_T_TM_radio_messages;

typedef struct kcg_tag_struct_151363 {
  kcg_bool valid;
  kcg_int32 nid_message;
  kcg_int32 l_message;
  kcg_int32 t_train;
  M_ACK m_ack;
  kcg_int32 nid_lrbg;
  kcg_int32 nid_em;
} struct_151363;

/* TM_radio_messages::M_016_T/ */
typedef struct_151363 M_016_T_TM_radio_messages;

/* TM_radio_messages::M_018_T/ */
typedef struct_151363 M_018_T_TM_radio_messages;

/* TM::P041_section_int_T/ */
typedef struct kcg_tag_P041_section_int_T_TM {
  kcg_int32 M_LEVELTR;
  kcg_int32 NID_NTC;
  kcg_int32 L_ACKLEVELTR;
} P041_section_int_T_TM;

typedef P041_section_int_T_TM _27_array[1];

/* TM::P041_trackide_sectionlist_T/ */
typedef P041_section_int_T_TM P041_trackide_sectionlist_T_TM[32];

/* TM::P041_OBU_sectionlist_int_T/, TM_conversions::C_P041_tracksim_compr/ */
typedef P041_section_int_T_TM P041_OBU_sectionlist_int_T_TM[33];

/* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets/Det_if_P011:then:,
   TM_TrainToTrack::P011_TrainTrack_int/ */
typedef kcg_int32 P011_TrainTrack_int_TM_TrainToTrack[25];

typedef kcg_int32 array_int32_104[104];

typedef kcg_int32 array_int32_499[499];

typedef kcg_int32 array_int32_72[72];

/* TM::Radio_TrackTrain_Header_T/ */
typedef struct kcg_tag_Radio_TrackTrain_Header_T_TM {
  kcg_int32 radioDevice;
  kcg_int32 receivedSystemTime;
  kcg_int32 nid_message;
  kcg_int32 t_train;
  kcg_int32 m_ack;
  kcg_int32 nid_lrbg;
  kcg_int32 t_train_reference;
  kcg_int32 nid_em;
  kcg_int32 q_scale;
  kcg_int32 d_sr;
  kcg_int32 t_sh_rqst;
  kcg_int32 d_ref;
  kcg_int32 q_dir;
  kcg_int32 d_emergencystop;
  kcg_int32 m_version;
} Radio_TrackTrain_Header_T_TM;

typedef struct kcg_tag_struct_151014 {
  kcg_int32 radioDevice;
  kcg_int32 receivedSystemTime;
  kcg_int32 nid_message;
  kcg_int32 t_train;
  M_ACK m_ack;
  kcg_int32 nid_lrbg;
  kcg_int32 t_train_reference;
  kcg_int32 nid_em;
  Q_SCALE q_scale;
  kcg_int32 d_sr;
  kcg_int32 t_sh_rqst;
  kcg_int32 d_ref;
  Q_DIR q_dir;
  kcg_int32 d_emergencystop;
  M_VERSION m_version;
} struct_151014;

/* TM_transitional::Radio_TrackTrain_Header_T/ */
typedef struct_151014 _5_Radio_TrackTrain_Header_T_TM_transitional;

/* Radio_Types_Pkg::Radio_TrackTrain_Header_T/ */
typedef struct_151014 _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg;

/* API_Msg_Pkg::API_RadioMsgHeader_T/ */
typedef struct kcg_tag_API_RadioMsgHeader_T_API_Msg_Pkg {
  kcg_bool present;
  kcg_bool apiConsistencyError;
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg Radio_Common_Header;
  RadioMetadata_T_Common_Types_Pkg Radio_MetaData;
  RBC_Id_T_Common_Types_Pkg sendingRBC_Id;
} API_RadioMsgHeader_T_API_Msg_Pkg;

/* TM::BaliseTelegramHeader_int_T/ */
typedef struct kcg_tag_BaliseTelegramHeader_int_T_TM {
  kcg_int32 q_updown;
  kcg_int32 m_version;
  kcg_int32 q_media;
  kcg_int32 n_pig;
  kcg_int32 n_total;
  kcg_int32 m_dup;
  kcg_int32 m_mcount;
  kcg_int32 nid_c;
  kcg_int32 nid_bg;
  kcg_int32 q_link;
} BaliseTelegramHeader_int_T_TM;

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

/* TM::P005_trackside_int_T/ */
typedef struct kcg_tag_P005_trackside_int_T_TM {
  kcg_bool valid;
  kcg_int32 NID_PACKET;
  kcg_int32 Q_DIR;
  kcg_int32 L_PACKET;
  kcg_int32 Q_SCALE;
  kcg_int32 D_LINK;
  kcg_int32 Q_NEWCOUNTRY;
  kcg_int32 NID_C;
  kcg_int32 NID_BG;
  kcg_int32 Q_LINKORIENTATION;
  kcg_int32 Q_LINKREACTION;
  kcg_int32 Q_LOCACC;
  kcg_int32 N_ITER;
  P005_trackide_sectionlist_T_TM SECTIONS;
} P005_trackside_int_T_TM;

/* TM_radio_messages::M_TrackTrain_Radio_T/ */
typedef struct kcg_tag_M_TrackTrain_Radio_T_TM_radio_messages {
  kcg_bool valid;
  kcg_int32 nid_message;
  kcg_int32 l_message;
  kcg_int32 t_train;
  kcg_int32 field1;
  kcg_int32 field2;
  kcg_int32 field3;
  kcg_int32 field4;
  kcg_int32 field5;
  kcg_int32 field6;
  kcg_int32 field7;
  kcg_int32 field8;
} M_TrackTrain_Radio_T_TM_radio_messages;

/* TM_radio_messages::M_015_int_T/ */
typedef struct kcg_tag_M_015_int_T_TM_radio_messages {
  kcg_bool valid;
  kcg_int32 nid_message;
  kcg_int32 l_message;
  kcg_int32 t_train;
  kcg_int32 m_ack;
  kcg_int32 nid_lrbg;
  kcg_int32 nid_em;
  kcg_int32 q_scale;
  kcg_int32 d_ref;
  kcg_int32 q_dir;
  kcg_int32 d_emergencystop;
} M_015_int_T_TM_radio_messages;

/* TM::P041_trackside_int_T/ */
typedef struct kcg_tag_P041_trackside_int_T_TM {
  kcg_bool valid;
  kcg_int32 NID_PACKET;
  kcg_int32 Q_DIR;
  kcg_int32 L_PACKET;
  kcg_int32 Q_SCALE;
  kcg_int32 D_LEVELTR;
  kcg_int32 M_LEVELTR;
  kcg_int32 NID_NTC;
  kcg_int32 L_ACKLEVELTR;
  kcg_int32 N_ITER;
  P041_trackide_sectionlist_T_TM SECTIONS;
} P041_trackside_int_T_TM;

/* TM::P065_trackside_int_T/ */
typedef struct kcg_tag_P065_trackside_int_T_TM {
  kcg_bool valid;
  kcg_int32 NID_PACKET;
  kcg_int32 Q_DIR;
  kcg_int32 L_PACKET;
  kcg_int32 Q_SCALE;
  kcg_int32 NID_TSR;
  kcg_int32 D_TSR;
  kcg_int32 L_TSR;
  kcg_int32 Q_FRONT;
  kcg_int32 V_TSR;
} P065_trackside_int_T_TM;

typedef kcg_int32 array_int32_350[350];

/* TM_TrainToTrack::Array11/, TM_TrainToTrack::C_compr_P011/ */
typedef kcg_int32 Array11_TM_TrainToTrack[11];

/* TM::P058_section_int_T/ */
typedef struct kcg_tag_P058_section_int_T_TM {
  kcg_int32 D_LOC;
  kcg_int32 Q_LGTLOC;
} P058_section_int_T_TM;

typedef P058_section_int_T_TM _21_array[32];

/* TM::P058_OBU_sectionlist_int_T/ */
typedef _21_array P058_OBU_sectionlist_int_T_TM;

/* TM::P058_trackide_sectionlist_T/ */
typedef _21_array P058_trackide_sectionlist_T_TM;

/* TM::P058_trackside_int_T/ */
typedef struct kcg_tag_P058_trackside_int_T_TM {
  kcg_bool valid;
  kcg_int32 NID_PACKET;
  kcg_int32 Q_DIR;
  kcg_int32 L_PACKET;
  kcg_int32 Q_SCALE;
  kcg_int32 T_CYCLOC;
  kcg_int32 D_CYCLOC;
  kcg_int32 M_LOC;
  kcg_int32 N_ITER;
  P058_trackide_sectionlist_T_TM SECTIONS;
} P058_trackside_int_T_TM;

/* TM::P021_section_int_T/ */
typedef struct kcg_tag_P021_section_int_T_TM {
  kcg_int32 D_GRADIENT;
  kcg_int32 Q_GDIR;
  kcg_int32 G_A;
} P021_section_int_T_TM;

typedef P021_section_int_T_TM _28_array[1];

/* TM::P021_trackide_sectionlist_T/ */
typedef P021_section_int_T_TM P021_trackide_sectionlist_T_TM[32];

/* TM::P021_trackside_int_T/ */
typedef struct kcg_tag_P021_trackside_int_T_TM {
  kcg_bool valid;
  kcg_int32 NID_PACKET;
  kcg_int32 Q_DIR;
  kcg_int32 L_PACKET;
  kcg_int32 Q_SCALE;
  kcg_int32 D_GRADIENT;
  kcg_int32 Q_GDIR;
  kcg_int32 G_A;
  kcg_int32 N_ITER;
  P021_trackide_sectionlist_T_TM SECTIONS;
} P021_trackside_int_T_TM;

/* TM::P021_OBU_sectionlist_int_T/, TM_conversions::C_P021_tracksim_compr/ */
typedef P021_section_int_T_TM P021_OBU_sectionlist_int_T_TM[33];

typedef struct kcg_tag_struct_150212 {
  M_VOLTAGE m_voltage;
  kcg_int32 nid_ctraction;
} struct_150212;

/* TM_TrainToTrack::P011_voltage/ */
typedef struct_150212 P011_voltage_TM_TrainToTrack;

/* Packet_TrainTypes_Pkg::sTractionIdentity_T/ */
typedef struct_150212 sTractionIdentity_T_Packet_TrainTypes_Pkg;

typedef struct_150212 _23_array[4];

/* TM_TrainToTrack::P011_voltage_list/ */
typedef _23_array P011_voltage_list_TM_TrainToTrack;

/* Packet_TrainTypes_Pkg::aTractionIdentity_T/ */
typedef _23_array aTractionIdentity_T_Packet_TrainTypes_Pkg;

typedef kcg_int32 array_int32_105[105];

/* Common_Types_Pkg::CompressedPacketData_T/,
   TM_conversions::C_P005_tracksim_compr/,
   TM_conversions::C_P015_tracksim_compr/,
   TM_conversions::C_P021_tracksim_compr/,
   TM_conversions::C_P041_tracksim_compr/,
   TM_conversions::C_P042_tracksim_compr/,
   TM_conversions::C_P045_tracksim_compr/,
   TM_conversions::C_P046_tracksim_compr/,
   TM_conversions::C_P057_tracksim_compr/,
   TM_conversions::C_P058_tracksim_compr/,
   TM_conversions::C_P065_tracksim_compr/,
   TM_conversions::C_P137_tracksim_compr/,
   TM_conversions::C_P255_tracksim_compr/,
   TM_conversions_baseline2::C_P003V1_tracksim_compr/,
   TM_conversions_baseline2::C_P027V1_tracksim_compr_body/,
   TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section/,
   TM_lib_internal::SEND_MessageData/ */
typedef kcg_int32 CompressedPacketData_T_Common_Types_Pkg[500];

typedef CompressedPacketData_T_Common_Types_Pkg array_int32_500_500[500];

/* Common_Types_Pkg::CompressedPackets_T/ */
typedef struct kcg_tag_CompressedPackets_T_Common_Types_Pkg {
  Metadata_T_Common_Types_Pkg PacketHeaders;
  CompressedPacketData_T_Common_Types_Pkg PacketData;
} CompressedPackets_T_Common_Types_Pkg;

/* InfraLib::B_data_internal_T/ */
typedef struct kcg_tag_B_data_internal_T_InfraLib {
  BaliseTelegramHeader_int_T_TM header;
  CompressedPackets_T_Common_Types_Pkg packets;
  kcg_int32 engineering_BG_location;
  kcg_float32 TrainPos;
  kcg_int32 pig_nom_0;
  kcg_bool balise_passed;
} B_data_internal_T_InfraLib;

/* API_Msg_Pkg::API_TrackSideInput_T/ */
typedef struct kcg_tag_API_TrackSideInput_T_API_Msg_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTimeMsgReceived;
  MsgSource_T_Common_Types_Pkg msg_type;
  API_TelegramHeader_T_API_Msg_Pkg btm_msg;
  API_RadioMsgHeader_T_API_Msg_Pkg rtm_msg;
  CompressedPackets_T_Common_Types_Pkg packets;
} API_TrackSideInput_T_API_Msg_Pkg;

typedef API_TrackSideInput_T_API_Msg_Pkg _18_array[5];

/* TM::CompressedRadioMessage/ */
typedef struct kcg_tag_CompressedRadioMessage_TM {
  Radio_TrackTrain_Header_T_TM Header;
  CompressedPackets_T_Common_Types_Pkg Messages;
} CompressedRadioMessage_TM;

/* RadioTrackTrainMessageQueueEntry_T/ */
typedef struct kcg_tag_RadioTrackTrainMessageQueueEntry_T {
  kcg_bool m_IsValid;
  CompressedRadioMessage_TM m_Entry;
} RadioTrackTrainMessageQueueEntry_T;

/* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take/IfBlock1:else:else:,
   RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take/IfBlock1:then:,
   RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut/IfBlock1:then:,
   RadioTrackTrainMessageQueueEntries_T/ */
typedef RadioTrackTrainMessageQueueEntry_T _3_RadioTrackTrainMessageQueueEntries_T[8];

/* RadioTrackTrainMessageQueue_T/ */
typedef struct kcg_tag__2_RadioTrackTrainMessageQueue_T {
  _3_RadioTrackTrainMessageQueueEntries_T m_Entries;
} _2_RadioTrackTrainMessageQueue_T;

typedef RadioTrackTrainMessageQueueEntry_T _29_array[1];

typedef RadioTrackTrainMessageQueueEntry_T array[7];

/* TM::CompressedBaliseMessage/ */
typedef struct kcg_tag_CompressedBaliseMessage_TM {
  BaliseTelegramHeader_int_T_TM Header;
  CompressedPackets_T_Common_Types_Pkg Messages;
} CompressedBaliseMessage_TM;

typedef kcg_int32 array_int32_395[395];

typedef kcg_int32 array_int32_150[150];

typedef kcg_int32 array_int32_428[428];

typedef kcg_int32 array_int32_1[1];

typedef kcg_int32 array_int32_396[396];

/* TM::P045_trackside_int_T/ */
typedef struct kcg_tag_P045_trackside_int_T_TM {
  kcg_bool valid;
  kcg_int32 NID_PACKET;
  kcg_int32 Q_DIR;
  kcg_int32 L_PACKET;
  kcg_int32 NID_MN;
} P045_trackside_int_T_TM;

/* TM_baseline2::P027V1_section_int_qdiff_T/ */
typedef struct kcg_tag_P027V1_section_int_qdiff_T_TM_baseline2 {
  kcg_int32 NC_DIFF;
  kcg_int32 V_DIFF;
} P027V1_section_int_qdiff_T_TM_baseline2;

typedef P027V1_section_int_qdiff_T_TM_baseline2 _20_array[32];

/* TM_baseline2::P027V1_OBU_sectionlist_int_qdiff_T/ */
typedef _20_array _6_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2;

/* TM_baseline2::P027V1_trackside_qdifflist_T/ */
typedef _20_array P027V1_trackside_qdifflist_T_TM_baseline2;

typedef kcg_int32 array_int32_2[2];

/* TM::P046_section_array_T/ */
typedef array_int32_2 P046_section_array_T_TM;

/* TM::P046_OBU_sectionlist_array_T/,
   TM_lib_internal::C_P046_flatten_sections/ */
typedef P046_section_array_T_TM P046_OBU_sectionlist_array_T_TM[33];

typedef P046_OBU_sectionlist_array_T_TM array_int32_2_33_99[99];

/* TM::P058_section_array_T/ */
typedef array_int32_2 P058_section_array_T_TM;

/* TM_baseline2::P027V1_section_array_qdiff_T/ */
typedef array_int32_2 P027V1_section_array_qdiff_T_TM_baseline2;

typedef array_int32_2 array_int32_2_32[32];

/* TM::P058_OBU_sectionlist_array_T/ */
typedef array_int32_2_32 P058_OBU_sectionlist_array_T_TM;

/* TM_baseline2::P027V1_OBU_sectionlist_array_qdiff_T/ */
typedef array_int32_2_32 _7_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2;

typedef array_int32_2_32 array_int32_2_32_32[32];

typedef array_int32_2_32 array_int32_2_32_64[64];

typedef kcg_int32 array_int32_432[432];

typedef kcg_int32 array_int32_400[400];

typedef kcg_int32 array_int32_444[444];

/* TIU_Types_Pkg::Passenger_door_control_info_T/ */
typedef struct kcg_tag_Passenger_door_control_info_T_TIU_Types_Pkg {
  kcg_bool valid;
  kcg_int32 door_control_info;
} Passenger_door_control_info_T_TIU_Types_Pkg;

typedef kcg_int32 array_int32_17[17];

/* TM_TrainToTrack::P001_TrainTrack_int/ */
typedef array_int32_17 P001_TrainTrack_int_TM_TrainToTrack;

/* TM_TrainToTrack::P000_TrainTrack_int/ */
typedef array_int32_17 P000_TrainTrack_int_TM_TrainToTrack;

typedef struct kcg_tag_struct_149909 {
  kcg_int32 now;
  kcg_int32 distance;
} struct_149909;

/* TIU_Types_Pkg::D_test_current_T/ */
typedef struct_149909 D_test_current_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::Change_of_allowed_current_consumption_T/ */
typedef struct kcg_tag_Change_of_allowed_current_consumption_T_TIU_Types_Pkg {
  kcg_bool valid;
  D_test_current_T_TIU_Types_Pkg d_test_current;
  M_current_T_TIU_Types_Pkg m_current;
} Change_of_allowed_current_consumption_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::D_test_traction_T/ */
typedef struct_149909 D_test_traction_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::Change_traction_system_T/ */
typedef struct kcg_tag_Change_traction_system_T_TIU_Types_Pkg {
  kcg_bool valid;
  D_test_traction_T_TIU_Types_Pkg d_test_traction;
  M_voltage_T_TIU_Types_Pkg m_voltage;
} Change_traction_system_T_TIU_Types_Pkg;

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

/* TIU_Types_Pkg::D_test_trackinit_T/ */
typedef struct_149909 D_test_trackinit_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::L_test_trackcond_T/ */
typedef struct_149909 L_test_trackcond_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::D_test_trackcond_T/ */
typedef struct_149909 D_test_trackcond_T_TIU_Types_Pkg;

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

/* TIU_Types_Pkg::D_test_distance_T/ */
typedef struct_149909 D_test_distance_T_TIU_Types_Pkg;

typedef kcg_int32 array_int32_491[491];

typedef kcg_int32 array_int32_64[64];

/* TM::P058_sections_array_flat_T/ */
typedef array_int32_64 P058_sections_array_flat_T_TM;

/* TM_baseline2::P027V1_sections_array_flat_qdiff_T/ */
typedef array_int32_64 P027V1_sections_array_flat_qdiff_T_TM_baseline2;

typedef kcg_int32 array_int32_494[494];

/* TM_baseline2::P003V1_trackide_sectionlist_T/ */
typedef kcg_int32 P003V1_trackide_sectionlist_T_TM_baseline2[32];

/* TM_baseline2::P003V1_trackside_int_T/ */
typedef struct kcg_tag_P003V1_trackside_int_T_TM_baseline2 {
  kcg_bool valid;
  kcg_int32 NID_PACKET;
  kcg_int32 Q_DIR;
  kcg_int32 L_PACKET;
  kcg_int32 Q_SCALE;
  kcg_int32 D_VALIDNV;
  kcg_int32 N_ITER;
  P003V1_trackide_sectionlist_T_TM_baseline2 SECTIONS;
  kcg_int32 V_NVSHUNT;
  kcg_int32 V_NVSTFF;
  kcg_int32 V_NVONSIGHT;
  kcg_int32 V_NVUNFIT;
  kcg_int32 V_NVREL;
  kcg_int32 D_NVROLL;
  kcg_int32 Q_NVSRBKTRG;
  kcg_int32 Q_NVEMRRLS;
  kcg_int32 V_NVALLOWOVTRP;
  kcg_int32 V_NVSUPOVTRP;
  kcg_int32 D_NVOVTRP;
  kcg_int32 T_NVOVTRP;
  kcg_int32 D_NVPOTRP;
  kcg_int32 M_NVCONTACT;
  kcg_int32 T_NVCONTACT;
  kcg_int32 M_NVDERUN;
  kcg_int32 D_NVSTFF;
  kcg_int32 Q_NVDRIVER_ADHES;
} P003V1_trackside_int_T_TM_baseline2;

/* TIU_Types_Pkg::Brake_pressure_value_T/ */
typedef struct kcg_tag_Brake_pressure_value_T_TIU_Types_Pkg {
  kcg_bool valid;
  kcg_int32 pressure;
} Brake_pressure_value_T_TIU_Types_Pkg;

typedef kcg_int32 array_int32_430[430];

typedef kcg_int32 array_int32_3[3];

/* TM::P041_section_array_T/ */
typedef array_int32_3 P041_section_array_T_TM;

/* TM_TrainToTrack::Array03/ */
typedef array_int32_3 Array03_TM_TrainToTrack;

/* TM_TrainToTrack::P005_TrainTrack_int/ */
typedef array_int32_3 P005_TrainTrack_int_TM_TrainToTrack;

/* TM_TrainToTrack::P004_TrainTrack_int/ */
typedef array_int32_3 P004_TrainTrack_int_TM_TrainToTrack;

/* TM_TrainToTrack::P009_TrainTrack_int/ */
typedef array_int32_3 P009_TrainTrack_int_TM_TrainToTrack;

/* TM::P021_section_array_T/ */
typedef array_int32_3 P021_section_array_T_TM;

typedef array_int32_3 array_int32_3_33[33];

/* TM::P041_OBU_sectionlist_array_T/ */
typedef array_int32_3_33 P041_OBU_sectionlist_array_T_TM;

/* TM::P021_OBU_sectionlist_array_T/ */
typedef array_int32_3_33 P021_OBU_sectionlist_array_T_TM;

typedef array_int32_3_33 array_int32_3_33_99[99];

typedef array_int32_3_33 array_int32_3_33_231[231];

/* TM_radio_messages::M_TrainTrack_compressed_packets_T/ */
typedef kcg_int32 M_TrainTrack_compressed_packets_T_TM_radio_messages[50];

/* TM_radio_messages::M_TrainTrack_Message_T/ */
typedef struct kcg_tag_M_TrainTrack_Message_T_TM_radio_messages {
  M_TrainTrack_MessageHd_T_TM_radio_messages Message;
  M_TrainTrack_compressed_packets_T_TM_radio_messages OptionalPackets;
} M_TrainTrack_Message_T_TM_radio_messages;

/* TM::P015_section_int_T/ */
typedef struct kcg_tag_P015_section_int_T_TM {
  kcg_int32 L_SECTION;
  kcg_int32 Q_SECTIONTIMER;
  kcg_int32 T_SECTIONTIMER;
  kcg_int32 D_SECTIONTIMERSTOPLOC;
} P015_section_int_T_TM;

typedef P015_section_int_T_TM _19_array[32];

/* TM::P015_OBU_sectionlist_int_T/ */
typedef _19_array P015_OBU_sectionlist_int_T_TM;

/* TM::P015_trackide_sectionlist_T/ */
typedef _19_array P015_trackide_sectionlist_T_TM;

/* TM::P015_trackside_int_T/ */
typedef struct kcg_tag_P015_trackside_int_T_TM {
  kcg_bool valid;
  kcg_int32 NID_PACKET;
  kcg_int32 Q_DIR;
  kcg_int32 L_PACKET;
  kcg_int32 Q_SCALE;
  kcg_int32 V_LOA;
  kcg_int32 T_LOA;
  kcg_int32 N_ITER;
  P015_trackide_sectionlist_T_TM SECTIONS;
  kcg_int32 L_ENDSECTION;
  kcg_int32 Q_SECTIONTIMER;
  kcg_int32 T_SECTIONTIMER;
  kcg_int32 D_SECTIONTIMERSTOPLOC;
  kcg_int32 Q_ENDTIMER;
  kcg_int32 T_ENDTIMER;
  kcg_int32 D_ENDTIMERSTARTLOC;
  kcg_int32 Q_DANGERPOINT;
  kcg_int32 D_DP;
  kcg_int32 V_RELEASEDP;
  kcg_int32 Q_OVERLAP;
  kcg_int32 D_STARTOL;
  kcg_int32 T_OL;
  kcg_int32 D_OL;
  kcg_int32 V_RELEASEOL;
} P015_trackside_int_T_TM;

typedef kcg_int32 array_int32_18[18];

typedef struct kcg_tag_struct_149762 {
  kcg_int32 NID_C;
  kcg_int32 NID_BG;
  kcg_int32 Pos;
  OrBG_TM Or_BG;
  OrLine_TM Or_Line;
} struct_149762;

/* Basics::BaliseGroupData/ */
typedef struct_149762 BaliseGroupData_Basics;

/* TM::BaliseGroupData/ */
typedef struct_149762 BaliseGroupData_TM;

typedef kcg_int32 array_int32_492[492];

typedef kcg_int32 array_int32_33[33];

/* TM::P015_section_array_T/,
   TM_TrainToTrack_lib_internal::C_P011_unflatten_sections_voltage/,
   TM_conversions::C_P005_tracksim_compr/,
   TM_conversions::C_P021_tracksim_compr/,
   TM_conversions::C_P045_tracksim_compr/,
   TM_conversions::C_P046_tracksim_compr/,
   TM_conversions::C_P137_tracksim_compr/,
   TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section/,
   TM_lib_internal::C_P015_fs_struct_to_array/ */
typedef kcg_int32 P015_section_array_T_TM[4];

/* TM::P015_OBU_sectionlist_array_T/,
   TM_lib_internal::C_P015_flatten_sections/ */
typedef P015_section_array_T_TM P015_OBU_sectionlist_array_T_TM[32];

typedef P015_OBU_sectionlist_array_T_TM array_int32_4_32_128[128];

/* RBC_Diagnostic_Pkg::DiagMsg_T/ */
typedef struct kcg_tag_DiagMsg_T_RBC_Diagnostic_Pkg {
  kcg_bool valid;
  kcg_int32 count;
  T_TRAIN timestamp;
  DiagMsgType_E_RBC_Diagnostic_Pkg diagType;
  DiagMsgSrc_E_RBC_Diagnostic_Pkg diagSrc;
  DiagMsgText_E_RBC_Diagnostic_Pkg diagText;
} DiagMsg_T_RBC_Diagnostic_Pkg;

typedef DiagMsg_T_RBC_Diagnostic_Pkg _25_array[16];

/* InfraLib::TrainPosRaw_T/ */
typedef struct kcg_tag_TrainPosRaw_T_InfraLib {
  kcg_float32 TrainPos_in;
  kcg_int32 OffsetTotal;
  kcg_float32 TrainPosCalibrated;
} TrainPosRaw_T_InfraLib;

/* InfraLib::TrackSectionData_T/ */
typedef struct kcg_tag_TrackSectionData_T_InfraLib {
  TrainPosRaw_T_InfraLib TrainPosRaw;
  CompressedBaliseMessage_TM BG_Message;
} TrackSectionData_T_InfraLib;

/* TM::P137_trackside_int_T/ */
typedef struct kcg_tag_P137_trackside_int_T_TM {
  kcg_bool valid;
  kcg_int32 NID_PACKET;
  kcg_int32 Q_DIR;
  kcg_int32 L_PACKET;
  kcg_int32 Q_SRSTOP;
} P137_trackside_int_T_TM;

/* TM::P005_sections_array_flat_T/ */
typedef kcg_int32 P005_sections_array_flat_T_TM[95];

/* TM_baseline2::P027V1_section_int_T/ */
typedef struct kcg_tag_P027V1_section_int_T_TM_baseline2 {
  kcg_int32 D_STATIC;
  kcg_int32 V_STATIC;
  kcg_int32 Q_FRONT;
  kcg_int32 N_ITER;
  P027V1_trackside_qdifflist_T_TM_baseline2 SECTIONS_q_diff;
} P027V1_section_int_T_TM_baseline2;

typedef P027V1_section_int_T_TM_baseline2 _30_array[1];

/* TM_baseline2::P027V1_OBU_sectionlist_int_T/,
   TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ */
typedef P027V1_section_int_T_TM_baseline2 P027V1_OBU_sectionlist_int_T_TM_baseline2[33];

/* TM_baseline2::P027V1_trackside_sectionlist_T/ */
typedef P027V1_section_int_T_TM_baseline2 P027V1_trackside_sectionlist_T_TM_baseline2[32];

/* TM_baseline2::P027V1_trackside_int_T/ */
typedef struct kcg_tag_P027V1_trackside_int_T_TM_baseline2 {
  kcg_bool valid;
  kcg_int32 NID_PACKET;
  kcg_int32 Q_DIR;
  kcg_int32 L_PACKET;
  kcg_int32 Q_SCALE;
  kcg_int32 D_STATIC;
  kcg_int32 V_STATIC;
  kcg_int32 Q_FRONT;
  kcg_int32 N_ITER_n;
  P027V1_trackside_qdifflist_T_TM_baseline2 SECTIONS_q_diff;
  kcg_int32 N_ITER_k;
  P027V1_trackside_sectionlist_T_TM_baseline2 SECTIONS_SSP;
} P027V1_trackside_int_T_TM_baseline2;

typedef kcg_int32 array_int32_22[22];

/* TM::P046_sections_array_flat_T/ */
typedef kcg_int32 P046_sections_array_flat_T_TM[66];

typedef kcg_int32 array_int32_496[496];

/* TM::P046_section_int_T/ */
typedef struct kcg_tag_P046_section_int_T_TM {
  kcg_int32 M_LEVELTR;
  kcg_int32 NID_NTC;
} P046_section_int_T_TM;

typedef P046_section_int_T_TM _26_array[1];

/* TM::P046_trackide_sectionlist_T/ */
typedef P046_section_int_T_TM P046_trackide_sectionlist_T_TM[32];

/* TM::P046_trackside_int_T/ */
typedef struct kcg_tag_P046_trackside_int_T_TM {
  kcg_bool valid;
  kcg_int32 NID_PACKET;
  kcg_int32 Q_DIR;
  kcg_int32 L_PACKET;
  kcg_int32 M_LEVELTR;
  kcg_int32 NID_NTC;
  kcg_int32 N_ITER;
  P046_trackide_sectionlist_T_TM SECTIONS;
} P046_trackside_int_T_TM;

/* TM::P046_OBU_sectionlist_int_T/, TM_conversions::C_P046_tracksim_compr/ */
typedef P046_section_int_T_TM P046_OBU_sectionlist_int_T_TM[33];

typedef kcg_int32 array_int32_5[5];

/* TM_TrainToTrack::P003_nid_radio_list_int_t/ */
typedef array_int32_5 P003_nid_radio_list_int_t_TM_TrainToTrack;

/* TM_TrainToTrack::P011_ntc_list_array_T/ */
typedef array_int32_5 P011_ntc_list_array_T_TM_TrainToTrack;

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

/* Packet_TrainTypes_Pkg::aNID_NTC_T/ */
typedef array_int32_5 aNID_NTC_T_Packet_TrainTypes_Pkg;

/* TrainData_T/ */
typedef struct kcg_tag_TrainData_T {
  NID_ENGINE nid_engine;
  kcg_int32 m_NumberOfOnboardPhoneNumbers;
  aNID_RADIO_T_Packet_TrainTypes_Pkg m_OnboardPhoneNumbers;
  T_TRAIN t_train_ref;
  NC_CDTRAIN nc_cdtrain;
  NC_TRAIN nc_train;
  L_TRAIN l_train;
  V_MAXTRAIN v_maxtrain;
  M_LOADINGGAUGE m_loadinggauge;
  M_AXLELOADCAT m_axleloadcat;
  M_AIRTIGHT m_airtight;
  N_AXLE n_axle;
  aTractionIdentity_T_Packet_TrainTypes_Pkg m_TractionIdentities;
  aNID_NTC_T_Packet_TrainTypes_Pkg m_NationalSystemIdentities;
  NID_OPERATIONAL nid_operational;
} TrainData_T;

/* SessionManagement_T/ */
typedef struct kcg_tag_SessionManagement_T {
  TrainData_T m_TrainData;
  PosData_T m_PosData;
} SessionManagement_T;

/* RBC_DataBus_Pkg::RBC_Data_T/ */
typedef struct kcg_tag_RBC_Data_T_RBC_DataBus_Pkg {
  SessionManagement_T session;
  DynamicConfig_T config;
  _25_array diagnostic;
  _2_RadioTrackTrainMessageQueue_T messageQueue;
  Clock_T clockk;
  CompressedRadioMessage_TM lastSentTrackTrainMessage;
} RBC_Data_T_RBC_DataBus_Pkg;

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

/* TM::P255_trackside_int_T/ */
typedef struct kcg_tag_P255_trackside_int_T_TM {
  kcg_bool valid;
  kcg_int32 NID_PACKET;
} P255_trackside_int_T_TM;

typedef kcg_int32 array_int32_8[8];

/* TM_TrainToTrack::P003_TrainTrack_int/ */
typedef array_int32_8 P003_TrainTrack_int_TM_TrainToTrack;

/* TM_TrainToTrack::P011_voltage_sections_array_flat_t/ */
typedef array_int32_8 P011_voltage_sections_array_flat_t_TM_TrainToTrack;

typedef P011_voltage_sections_array_flat_t_TM_TrainToTrack array_int32_8_4[4];

/* TM::P015_sections_array_flat_T/ */
typedef kcg_int32 P015_sections_array_flat_T_TM[128];

typedef kcg_int32 array_int32_99[99];

/* TM::P041_sections_array_flat_T/ */
typedef array_int32_99 P041_sections_array_flat_T_TM;

/* TM::P021_sections_array_flat_T/ */
typedef array_int32_99 P021_sections_array_flat_T_TM;

/* InfraLib::R_data_internal_T/ */
typedef struct kcg_tag_R_data_internal_T_InfraLib {
  M_TrackTrain_Radio_T_TM_radio_messages message;
  CompressedPackets_T_Common_Types_Pkg packets;
  kcg_int32 trigger;
  kcg_bool message_sent;
} R_data_internal_T_InfraLib;

typedef kcg_int32 array_int32_70[70];

typedef struct kcg_tag_struct_149262 {
  kcg_bool valid;
  kcg_int32 nid_message;
  kcg_int32 l_message;
  kcg_int32 t_train;
  kcg_int32 m_ack;
  kcg_int32 nid_lrbg;
} struct_149262;

/* TM_radio_messages::M_024_int_T/ */
typedef struct_149262 M_024_int_T_TM_radio_messages;

/* TM_radio_messages::M_003_int_T/ */
typedef struct_149262 M_003_int_T_TM_radio_messages;

typedef struct kcg_tag_struct_149189 {
  kcg_bool valid;
  kcg_int32 nid_message;
  kcg_int32 l_message;
  kcg_int32 t_train;
  M_ACK m_ack;
  kcg_int32 nid_lrbg;
} struct_149189;

/* TM_radio_messages::M_038_T/ */
typedef struct_149189 M_038_T_TM_radio_messages;

/* TM_radio_messages::M_039_T/ */
typedef struct_149189 M_039_T_TM_radio_messages;

/* TM_radio_messages::M_040_T/ */
typedef struct_149189 M_040_T_TM_radio_messages;

/* TM_radio_messages::M_041_T/ */
typedef struct_149189 M_041_T_TM_radio_messages;

/* TM_radio_messages::M_043_T/ */
typedef struct_149189 M_043_T_TM_radio_messages;

/* TM_radio_messages::M_003_T/ */
typedef struct_149189 M_003_T_TM_radio_messages;

/* TM_radio_messages::M_006_T/ */
typedef struct_149189 M_006_T_TM_radio_messages;

/* TM_radio_messages::M_009_T/ */
typedef struct_149189 M_009_T_TM_radio_messages;

/* TM_radio_messages::M_024_T/ */
typedef struct_149189 M_024_T_TM_radio_messages;

typedef kcg_int32 array_int32_6[6];

/* Packet_TrainTypes_Pkg::PT3_OnboardTelephoneNumbers_T/ */
typedef struct kcg_tag_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg {
  kcg_bool valid;
  kcg_int32 number;
  aNID_RADIO_T_Packet_TrainTypes_Pkg aNID_RADIO;
} PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg;

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

/* Radio_Types_Pkg::Radio_TrainTrack_Message_T/ */
typedef struct kcg_tag_Radio_TrainTrack_Message_T_Radio_Types_Pkg {
  kcg_bool present;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg header;
  outPackets_T_Common_Types_Pkg packets;
} Radio_TrainTrack_Message_T_Radio_Types_Pkg;

typedef kcg_int32 array_int32_9[9];

typedef kcg_int32 array_int32_56[56];

#ifndef kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg
#define kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(kcg_C1, kcg_C2) \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (PT5_TrainRunningNumber_Packet_TrainTypes_Pkg)))
#endif /* kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg */

#ifndef kcg_copy_TrackSectionData_T_InfraLib
#define kcg_copy_TrackSectionData_T_InfraLib(kcg_C1, kcg_C2)                  \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (TrackSectionData_T_InfraLib)))
#endif /* kcg_copy_TrackSectionData_T_InfraLib */

#ifndef kcg_copy_RadioTrackTrainMessageQueueEntry_T
#define kcg_copy_RadioTrackTrainMessageQueueEntry_T(kcg_C1, kcg_C2)           \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (RadioTrackTrainMessageQueueEntry_T)))
#endif /* kcg_copy_RadioTrackTrainMessageQueueEntry_T */

#ifndef kcg_copy_CompressedBaliseMessage_TM
#define kcg_copy_CompressedBaliseMessage_TM(kcg_C1, kcg_C2)                   \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (CompressedBaliseMessage_TM)))
#endif /* kcg_copy_CompressedBaliseMessage_TM */

#ifndef kcg_copy_CompressedRadioMessage_TM
#define kcg_copy_CompressedRadioMessage_TM(kcg_C1, kcg_C2)                    \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (CompressedRadioMessage_TM)))
#endif /* kcg_copy_CompressedRadioMessage_TM */

#ifndef kcg_copy__2_RadioTrackTrainMessageQueue_T
#define kcg_copy__2_RadioTrackTrainMessageQueue_T(kcg_C1, kcg_C2)             \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (_2_RadioTrackTrainMessageQueue_T)))
#endif /* kcg_copy__2_RadioTrackTrainMessageQueue_T */

#ifndef kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg
#define kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg)))
#endif /* kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg */

#ifndef kcg_copy_struct_149189
#define kcg_copy_struct_149189(kcg_C1, kcg_C2)                                \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_149189)))
#endif /* kcg_copy_struct_149189 */

#ifndef kcg_copy_struct_149262
#define kcg_copy_struct_149262(kcg_C1, kcg_C2)                                \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_149262)))
#endif /* kcg_copy_struct_149262 */

#ifndef kcg_copy_R_data_internal_T_InfraLib
#define kcg_copy_R_data_internal_T_InfraLib(kcg_C1, kcg_C2)                   \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (R_data_internal_T_InfraLib)))
#endif /* kcg_copy_R_data_internal_T_InfraLib */

#ifndef kcg_copy_P004_TM_TrainToTrack
#define kcg_copy_P004_TM_TrainToTrack(kcg_C1, kcg_C2)                         \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P004_TM_TrainToTrack)))
#endif /* kcg_copy_P004_TM_TrainToTrack */

#ifndef kcg_copy_P255_trackside_int_T_TM
#define kcg_copy_P255_trackside_int_T_TM(kcg_C1, kcg_C2)                      \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P255_trackside_int_T_TM)))
#endif /* kcg_copy_P255_trackside_int_T_TM */

#ifndef kcg_copy_P046_section_int_T_TM
#define kcg_copy_P046_section_int_T_TM(kcg_C1, kcg_C2)                        \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P046_section_int_T_TM)))
#endif /* kcg_copy_P046_section_int_T_TM */

#ifndef kcg_copy_P003_TM_TrainToTrack
#define kcg_copy_P003_TM_TrainToTrack(kcg_C1, kcg_C2)                         \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P003_TM_TrainToTrack)))
#endif /* kcg_copy_P003_TM_TrainToTrack */

#ifndef kcg_copy_P027V1_section_int_T_TM_baseline2
#define kcg_copy_P027V1_section_int_T_TM_baseline2(kcg_C1, kcg_C2)            \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (P027V1_section_int_T_TM_baseline2)))
#endif /* kcg_copy_P027V1_section_int_T_TM_baseline2 */

#ifndef kcg_copy_struct_149475
#define kcg_copy_struct_149475(kcg_C1, kcg_C2)                                \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_149475)))
#endif /* kcg_copy_struct_149475 */

#ifndef kcg_copy_mobileHWStatus_Type_MoRC_Pck
#define kcg_copy_mobileHWStatus_Type_MoRC_Pck(kcg_C1, kcg_C2)                 \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (mobileHWStatus_Type_MoRC_Pck)))
#endif /* kcg_copy_mobileHWStatus_Type_MoRC_Pck */

#ifndef kcg_copy_CompressedPackets_T_Common_Types_Pkg
#define kcg_copy_CompressedPackets_T_Common_Types_Pkg(kcg_C1, kcg_C2)         \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (CompressedPackets_T_Common_Types_Pkg)))
#endif /* kcg_copy_CompressedPackets_T_Common_Types_Pkg */

#ifndef kcg_copy_P137_trackside_int_T_TM
#define kcg_copy_P137_trackside_int_T_TM(kcg_C1, kcg_C2)                      \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P137_trackside_int_T_TM)))
#endif /* kcg_copy_P137_trackside_int_T_TM */

#ifndef kcg_copy_M_voltage_T_TIU_Types_Pkg
#define kcg_copy_M_voltage_T_TIU_Types_Pkg(kcg_C1, kcg_C2)                    \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (M_voltage_T_TIU_Types_Pkg)))
#endif /* kcg_copy_M_voltage_T_TIU_Types_Pkg */

#ifndef kcg_copy_TrainPosRaw_T_InfraLib
#define kcg_copy_TrainPosRaw_T_InfraLib(kcg_C1, kcg_C2)                       \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (TrainPosRaw_T_InfraLib)))
#endif /* kcg_copy_TrainPosRaw_T_InfraLib */

#ifndef kcg_copy_DiagMsg_T_RBC_Diagnostic_Pkg
#define kcg_copy_DiagMsg_T_RBC_Diagnostic_Pkg(kcg_C1, kcg_C2)                 \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DiagMsg_T_RBC_Diagnostic_Pkg)))
#endif /* kcg_copy_DiagMsg_T_RBC_Diagnostic_Pkg */

#ifndef kcg_copy_nothing_to_resume_profile_follow_T_TIU_Types_Pkg
#define kcg_copy_nothing_to_resume_profile_follow_T_TIU_Types_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (nothing_to_resume_profile_follow_T_TIU_Types_Pkg)))
#endif /* kcg_copy_nothing_to_resume_profile_follow_T_TIU_Types_Pkg */

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

#ifndef kcg_copy_TIU_Input_msg_API_TIU_Pkg
#define kcg_copy_TIU_Input_msg_API_TIU_Pkg(kcg_C1, kcg_C2)                    \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (TIU_Input_msg_API_TIU_Pkg)))
#endif /* kcg_copy_TIU_Input_msg_API_TIU_Pkg */

#ifndef kcg_copy_TIU_Output_msg_API_TIU_Pkg
#define kcg_copy_TIU_Output_msg_API_TIU_Pkg(kcg_C1, kcg_C2)                   \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (TIU_Output_msg_API_TIU_Pkg)))
#endif /* kcg_copy_TIU_Output_msg_API_TIU_Pkg */

#ifndef kcg_copy_SessionManagement_T
#define kcg_copy_SessionManagement_T(kcg_C1, kcg_C2)                          \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (SessionManagement_T)))
#endif /* kcg_copy_SessionManagement_T */

#ifndef kcg_copy_IterPacket58_T_Packet_Types_Pkg
#define kcg_copy_IterPacket58_T_Packet_Types_Pkg(kcg_C1, kcg_C2)              \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (IterPacket58_T_Packet_Types_Pkg)))
#endif /* kcg_copy_IterPacket58_T_Packet_Types_Pkg */

#ifndef kcg_copy_RBC_Data_T_RBC_DataBus_Pkg
#define kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(kcg_C1, kcg_C2)                   \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (RBC_Data_T_RBC_DataBus_Pkg)))
#endif /* kcg_copy_RBC_Data_T_RBC_DataBus_Pkg */

#ifndef kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg
#define kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (Message_Train_Interface_to_EVC_T_TIU_Types_Pkg)))
#endif /* kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg */

#ifndef kcg_copy_API_TrackSideInput_T_API_Msg_Pkg
#define kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(kcg_C1, kcg_C2)             \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (API_TrackSideInput_T_API_Msg_Pkg)))
#endif /* kcg_copy_API_TrackSideInput_T_API_Msg_Pkg */

#ifndef kcg_copy_struct_149762
#define kcg_copy_struct_149762(kcg_C1, kcg_C2)                                \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_149762)))
#endif /* kcg_copy_struct_149762 */

#ifndef kcg_copy_P015_section_int_T_TM
#define kcg_copy_P015_section_int_T_TM(kcg_C1, kcg_C2)                        \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P015_section_int_T_TM)))
#endif /* kcg_copy_P015_section_int_T_TM */

#ifndef kcg_copy_P009_TM_TrainToTrack
#define kcg_copy_P009_TM_TrainToTrack(kcg_C1, kcg_C2)                         \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P009_TM_TrainToTrack)))
#endif /* kcg_copy_P009_TM_TrainToTrack */

#ifndef kcg_copy_Isolation_Status_T_TIU_Types_Pkg
#define kcg_copy_Isolation_Status_T_TIU_Types_Pkg(kcg_C1, kcg_C2)             \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (Isolation_Status_T_TIU_Types_Pkg)))
#endif /* kcg_copy_Isolation_Status_T_TIU_Types_Pkg */

#ifndef kcg_copy_odometryFactors_T_Toolbox
#define kcg_copy_odometryFactors_T_Toolbox(kcg_C1, kcg_C2)                    \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (odometryFactors_T_Toolbox)))
#endif /* kcg_copy_odometryFactors_T_Toolbox */

#ifndef kcg_copy_Brake_pressure_value_T_TIU_Types_Pkg
#define kcg_copy_Brake_pressure_value_T_TIU_Types_Pkg(kcg_C1, kcg_C2)         \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (Brake_pressure_value_T_TIU_Types_Pkg)))
#endif /* kcg_copy_Brake_pressure_value_T_TIU_Types_Pkg */

#ifndef kcg_copy_struct_149909
#define kcg_copy_struct_149909(kcg_C1, kcg_C2)                                \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_149909)))
#endif /* kcg_copy_struct_149909 */

#ifndef kcg_copy_Passenger_door_control_info_T_TIU_Types_Pkg
#define kcg_copy_Passenger_door_control_info_T_TIU_Types_Pkg(kcg_C1, kcg_C2)  \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (Passenger_door_control_info_T_TIU_Types_Pkg)))
#endif /* kcg_copy_Passenger_door_control_info_T_TIU_Types_Pkg */

#ifndef kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg
#define kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(kcg_C1, kcg_C2)   \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (Radio_TrainTrack_Message_T_Radio_Types_Pkg)))
#endif /* kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg */

#ifndef kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg
#define kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(kcg_C1, kcg_C2)       \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (OdometryLocations_T_Obu_BasicTypes_Pkg)))
#endif /* kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg */

#ifndef kcg_copy_M_TrainTrack_Message_T_TM_radio_messages
#define kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(kcg_C1, kcg_C2)     \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (M_TrainTrack_Message_T_TM_radio_messages)))
#endif /* kcg_copy_M_TrainTrack_Message_T_TM_radio_messages */

#ifndef kcg_copy_Clock_T
#define kcg_copy_Clock_T(kcg_C1, kcg_C2)                                      \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Clock_T)))
#endif /* kcg_copy_Clock_T */

#ifndef kcg_copy_Brake_command_T_TIU_Types_Pkg
#define kcg_copy_Brake_command_T_TIU_Types_Pkg(kcg_C1, kcg_C2)                \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Brake_command_T_TIU_Types_Pkg)))
#endif /* kcg_copy_Brake_command_T_TIU_Types_Pkg */

#ifndef kcg_copy_P027V1_section_int_qdiff_T_TM_baseline2
#define kcg_copy_P027V1_section_int_qdiff_T_TM_baseline2(kcg_C1, kcg_C2)      \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (P027V1_section_int_qdiff_T_TM_baseline2)))
#endif /* kcg_copy_P027V1_section_int_qdiff_T_TM_baseline2 */

#ifndef kcg_copy_Type_I_train_commands_T_TIU_Types_Pkg
#define kcg_copy_Type_I_train_commands_T_TIU_Types_Pkg(kcg_C1, kcg_C2)        \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (Type_I_train_commands_T_TIU_Types_Pkg)))
#endif /* kcg_copy_Type_I_train_commands_T_TIU_Types_Pkg */

#ifndef kcg_copy_P005_TM_TrainToTrack
#define kcg_copy_P005_TM_TrainToTrack(kcg_C1, kcg_C2)                         \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P005_TM_TrainToTrack)))
#endif /* kcg_copy_P005_TM_TrainToTrack */

#ifndef kcg_copy_P045_trackside_int_T_TM
#define kcg_copy_P045_trackside_int_T_TM(kcg_C1, kcg_C2)                      \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P045_trackside_int_T_TM)))
#endif /* kcg_copy_P045_trackside_int_T_TM */

#ifndef kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg
#define kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg(kcg_C1, kcg_C2)          \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (OdometrySpeeds_T_Obu_BasicTypes_Pkg)))
#endif /* kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg */

#ifndef kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg
#define kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(kcg_C1, kcg_C2)            \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (LocWithInAcc_T_Obu_BasicTypes_Pkg)))
#endif /* kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg */

#ifndef kcg_copy_Brake_inhibition_command_T_TIU_Types_Pkg
#define kcg_copy_Brake_inhibition_command_T_TIU_Types_Pkg(kcg_C1, kcg_C2)     \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (Brake_inhibition_command_T_TIU_Types_Pkg)))
#endif /* kcg_copy_Brake_inhibition_command_T_TIU_Types_Pkg */

#ifndef kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg
#define kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(kcg_C1, kcg_C2) \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (RadioManagement_T_API_RadioCommunication_Pkg)))
#endif /* kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg */

#ifndef kcg_copy_struct_150212
#define kcg_copy_struct_150212(kcg_C1, kcg_C2)                                \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_150212)))
#endif /* kcg_copy_struct_150212 */

#ifndef kcg_copy_P021_section_int_T_TM
#define kcg_copy_P021_section_int_T_TM(kcg_C1, kcg_C2)                        \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P021_section_int_T_TM)))
#endif /* kcg_copy_P021_section_int_T_TM */

#ifndef kcg_copy_P058_section_int_T_TM
#define kcg_copy_P058_section_int_T_TM(kcg_C1, kcg_C2)                        \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P058_section_int_T_TM)))
#endif /* kcg_copy_P058_section_int_T_TM */

#ifndef kcg_copy_B_data_internal_T_InfraLib
#define kcg_copy_B_data_internal_T_InfraLib(kcg_C1, kcg_C2)                   \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (B_data_internal_T_InfraLib)))
#endif /* kcg_copy_B_data_internal_T_InfraLib */

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

#ifndef kcg_copy_DynamicConfig_T
#define kcg_copy_DynamicConfig_T(kcg_C1, kcg_C2)                              \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DynamicConfig_T)))
#endif /* kcg_copy_DynamicConfig_T */

#ifndef kcg_copy_P065_trackside_int_T_TM
#define kcg_copy_P065_trackside_int_T_TM(kcg_C1, kcg_C2)                      \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P065_trackside_int_T_TM)))
#endif /* kcg_copy_P065_trackside_int_T_TM */

#ifndef kcg_copy_M_034_T_TM_radio_messages
#define kcg_copy_M_034_T_TM_radio_messages(kcg_C1, kcg_C2)                    \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (M_034_T_TM_radio_messages)))
#endif /* kcg_copy_M_034_T_TM_radio_messages */

#ifndef kcg_copy_M_015_T_TM_radio_messages
#define kcg_copy_M_015_T_TM_radio_messages(kcg_C1, kcg_C2)                    \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (M_015_T_TM_radio_messages)))
#endif /* kcg_copy_M_015_T_TM_radio_messages */

#ifndef kcg_copy_P041_trackside_int_T_TM
#define kcg_copy_P041_trackside_int_T_TM(kcg_C1, kcg_C2)                      \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P041_trackside_int_T_TM)))
#endif /* kcg_copy_P041_trackside_int_T_TM */

#ifndef kcg_copy_M_015_int_T_TM_radio_messages
#define kcg_copy_M_015_int_T_TM_radio_messages(kcg_C1, kcg_C2)                \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (M_015_int_T_TM_radio_messages)))
#endif /* kcg_copy_M_015_int_T_TM_radio_messages */

#ifndef kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages
#define kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(kcg_C1, kcg_C2)       \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (M_TrackTrain_Radio_T_TM_radio_messages)))
#endif /* kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages */

#ifndef kcg_copy_P011_TM_TrainToTrack
#define kcg_copy_P011_TM_TrainToTrack(kcg_C1, kcg_C2)                         \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P011_TM_TrainToTrack)))
#endif /* kcg_copy_P011_TM_TrainToTrack */

#ifndef kcg_copy_P000_TM_TrainToTrack
#define kcg_copy_P000_TM_TrainToTrack(kcg_C1, kcg_C2)                         \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P000_TM_TrainToTrack)))
#endif /* kcg_copy_P000_TM_TrainToTrack */

#ifndef kcg_copy_P001_TM_TrainToTrack
#define kcg_copy_P001_TM_TrainToTrack(kcg_C1, kcg_C2)                         \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P001_TM_TrainToTrack)))
#endif /* kcg_copy_P001_TM_TrainToTrack */

#ifndef kcg_copy_P015_trackside_int_T_TM
#define kcg_copy_P015_trackside_int_T_TM(kcg_C1, kcg_C2)                      \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P015_trackside_int_T_TM)))
#endif /* kcg_copy_P015_trackside_int_T_TM */

#ifndef kcg_copy_P021_trackside_int_T_TM
#define kcg_copy_P021_trackside_int_T_TM(kcg_C1, kcg_C2)                      \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P021_trackside_int_T_TM)))
#endif /* kcg_copy_P021_trackside_int_T_TM */

#ifndef kcg_copy_P027V1_trackside_int_T_TM_baseline2
#define kcg_copy_P027V1_trackside_int_T_TM_baseline2(kcg_C1, kcg_C2)          \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (P027V1_trackside_int_T_TM_baseline2)))
#endif /* kcg_copy_P027V1_trackside_int_T_TM_baseline2 */

#ifndef kcg_copy_P058_trackside_int_T_TM
#define kcg_copy_P058_trackside_int_T_TM(kcg_C1, kcg_C2)                      \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P058_trackside_int_T_TM)))
#endif /* kcg_copy_P058_trackside_int_T_TM */

#ifndef kcg_copy_P005_trackside_int_T_TM
#define kcg_copy_P005_trackside_int_T_TM(kcg_C1, kcg_C2)                      \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P005_trackside_int_T_TM)))
#endif /* kcg_copy_P005_trackside_int_T_TM */

#ifndef kcg_copy_P003V1_trackside_int_T_TM_baseline2
#define kcg_copy_P003V1_trackside_int_T_TM_baseline2(kcg_C1, kcg_C2)          \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (P003V1_trackside_int_T_TM_baseline2)))
#endif /* kcg_copy_P003V1_trackside_int_T_TM_baseline2 */

#ifndef kcg_copy_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg
#define kcg_copy_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg)))
#endif /* kcg_copy_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg */

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

#ifndef kcg_copy_BaliseTelegramHeader_int_T_TM
#define kcg_copy_BaliseTelegramHeader_int_T_TM(kcg_C1, kcg_C2)                \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (BaliseTelegramHeader_int_T_TM)))
#endif /* kcg_copy_BaliseTelegramHeader_int_T_TM */

#ifndef kcg_copy_trainData_T_TIU_Types_Pkg
#define kcg_copy_trainData_T_TIU_Types_Pkg(kcg_C1, kcg_C2)                    \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (trainData_T_TIU_Types_Pkg)))
#endif /* kcg_copy_trainData_T_TIU_Types_Pkg */

#ifndef kcg_copy_struct_151014
#define kcg_copy_struct_151014(kcg_C1, kcg_C2)                                \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_151014)))
#endif /* kcg_copy_struct_151014 */

#ifndef kcg_copy_TelegramHeader_T_BG_Types_Pkg
#define kcg_copy_TelegramHeader_T_BG_Types_Pkg(kcg_C1, kcg_C2)                \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (TelegramHeader_T_BG_Types_Pkg)))
#endif /* kcg_copy_TelegramHeader_T_BG_Types_Pkg */

#ifndef kcg_copy_PosData_T
#define kcg_copy_PosData_T(kcg_C1, kcg_C2)                                    \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (PosData_T)))
#endif /* kcg_copy_PosData_T */

#ifndef kcg_copy_TrainData_T
#define kcg_copy_TrainData_T(kcg_C1, kcg_C2)                                  \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (TrainData_T)))
#endif /* kcg_copy_TrainData_T */

#ifndef kcg_copy_Radio_TrackTrain_Header_T_TM
#define kcg_copy_Radio_TrackTrain_Header_T_TM(kcg_C1, kcg_C2)                 \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Radio_TrackTrain_Header_T_TM)))
#endif /* kcg_copy_Radio_TrackTrain_Header_T_TM */

#ifndef kcg_copy_MAReqParams_T
#define kcg_copy_MAReqParams_T(kcg_C1, kcg_C2)                                \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MAReqParams_T)))
#endif /* kcg_copy_MAReqParams_T */

#ifndef kcg_copy_sNID_RADIO_T_Packet_TrainTypes_Pkg
#define kcg_copy_sNID_RADIO_T_Packet_TrainTypes_Pkg(kcg_C1, kcg_C2)           \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (sNID_RADIO_T_Packet_TrainTypes_Pkg)))
#endif /* kcg_copy_sNID_RADIO_T_Packet_TrainTypes_Pkg */

#ifndef kcg_copy_P041_section_int_T_TM
#define kcg_copy_P041_section_int_T_TM(kcg_C1, kcg_C2)                        \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P041_section_int_T_TM)))
#endif /* kcg_copy_P041_section_int_T_TM */

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

#ifndef kcg_copy_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg
#define kcg_copy_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg)))
#endif /* kcg_copy_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg */

#ifndef kcg_copy_M_033_T_TM_radio_messages
#define kcg_copy_M_033_T_TM_radio_messages(kcg_C1, kcg_C2)                    \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (M_033_T_TM_radio_messages)))
#endif /* kcg_copy_M_033_T_TM_radio_messages */

#ifndef kcg_copy_M_002_T_TM_radio_messages
#define kcg_copy_M_002_T_TM_radio_messages(kcg_C1, kcg_C2)                    \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (M_002_T_TM_radio_messages)))
#endif /* kcg_copy_M_002_T_TM_radio_messages */

#ifndef kcg_copy_M_008_T_TM_radio_messages
#define kcg_copy_M_008_T_TM_radio_messages(kcg_C1, kcg_C2)                    \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (M_008_T_TM_radio_messages)))
#endif /* kcg_copy_M_008_T_TM_radio_messages */

#ifndef kcg_copy_struct_151363
#define kcg_copy_struct_151363(kcg_C1, kcg_C2)                                \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_151363)))
#endif /* kcg_copy_struct_151363 */

#ifndef kcg_copy_struct_151390
#define kcg_copy_struct_151390(kcg_C1, kcg_C2)                                \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_151390)))
#endif /* kcg_copy_struct_151390 */

#ifndef kcg_copy_M_008_int_T_TM_radio_messages
#define kcg_copy_M_008_int_T_TM_radio_messages(kcg_C1, kcg_C2)                \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (M_008_int_T_TM_radio_messages)))
#endif /* kcg_copy_M_008_int_T_TM_radio_messages */

#ifndef kcg_copy_M_032_int_T_TM_radio_messages
#define kcg_copy_M_032_int_T_TM_radio_messages(kcg_C1, kcg_C2)                \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (M_032_int_T_TM_radio_messages)))
#endif /* kcg_copy_M_032_int_T_TM_radio_messages */

#ifndef kcg_copy_P046_trackside_int_T_TM
#define kcg_copy_P046_trackside_int_T_TM(kcg_C1, kcg_C2)                      \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P046_trackside_int_T_TM)))
#endif /* kcg_copy_P046_trackside_int_T_TM */

#ifndef kcg_copy_P057_trackside_int_T_TM
#define kcg_copy_P057_trackside_int_T_TM(kcg_C1, kcg_C2)                      \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P057_trackside_int_T_TM)))
#endif /* kcg_copy_P057_trackside_int_T_TM */

#ifndef kcg_copy_P042_trackside_int_T_TM
#define kcg_copy_P042_trackside_int_T_TM(kcg_C1, kcg_C2)                      \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P042_trackside_int_T_TM)))
#endif /* kcg_copy_P042_trackside_int_T_TM */

#ifndef kcg_copy_P005_section_int_T_TM
#define kcg_copy_P005_section_int_T_TM(kcg_C1, kcg_C2)                        \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P005_section_int_T_TM)))
#endif /* kcg_copy_P005_section_int_T_TM */

#ifndef kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg
#define kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(kcg_C1, kcg_C2)    \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (Radio_TrainTrack_Header_T_Radio_Types_Pkg)))
#endif /* kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg */

#ifndef kcg_copy_Mode_control_and_train_status_T_TIU_Types_Pkg
#define kcg_copy_Mode_control_and_train_status_T_TIU_Types_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (Mode_control_and_train_status_T_TIU_Types_Pkg)))
#endif /* kcg_copy_Mode_control_and_train_status_T_TIU_Types_Pkg */

#ifndef kcg_copy_RadioMetadata_T_Common_Types_Pkg
#define kcg_copy_RadioMetadata_T_Common_Types_Pkg(kcg_C1, kcg_C2)             \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (RadioMetadata_T_Common_Types_Pkg)))
#endif /* kcg_copy_RadioMetadata_T_Common_Types_Pkg */

#ifndef kcg_copy_M_TrainTrack_MessageHd_T_TM_radio_messages
#define kcg_copy_M_TrainTrack_MessageHd_T_TM_radio_messages(kcg_C1, kcg_C2)   \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (M_TrainTrack_MessageHd_T_TM_radio_messages)))
#endif /* kcg_copy_M_TrainTrack_MessageHd_T_TM_radio_messages */

#ifndef kcg_copy_NationalParams_T
#define kcg_copy_NationalParams_T(kcg_C1, kcg_C2)                             \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (NationalParams_T)))
#endif /* kcg_copy_NationalParams_T */

#ifndef kcg_copy_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg
#define kcg_copy_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg)))
#endif /* kcg_copy_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg */

#ifndef kcg_copy_M_032_T_TM_radio_messages
#define kcg_copy_M_032_T_TM_radio_messages(kcg_C1, kcg_C2)                    \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (M_032_T_TM_radio_messages)))
#endif /* kcg_copy_M_032_T_TM_radio_messages */

#ifndef kcg_copy_M_045_T_TM_radio_messages
#define kcg_copy_M_045_T_TM_radio_messages(kcg_C1, kcg_C2)                    \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (M_045_T_TM_radio_messages)))
#endif /* kcg_copy_M_045_T_TM_radio_messages */

#ifndef kcg_copy_odometry_T_Obu_BasicTypes_Pkg
#define kcg_copy_odometry_T_Obu_BasicTypes_Pkg(kcg_C1, kcg_C2)                \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (odometry_T_Obu_BasicTypes_Pkg)))
#endif /* kcg_copy_odometry_T_Obu_BasicTypes_Pkg */

#ifndef kcg_copy_Brake_status_T_TIU_Types_Pkg
#define kcg_copy_Brake_status_T_TIU_Types_Pkg(kcg_C1, kcg_C2)                 \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Brake_status_T_TIU_Types_Pkg)))
#endif /* kcg_copy_Brake_status_T_TIU_Types_Pkg */

#ifndef kcg_copy_outPackets_T_Common_Types_Pkg
#define kcg_copy_outPackets_T_Common_Types_Pkg(kcg_C1, kcg_C2)                \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (outPackets_T_Common_Types_Pkg)))
#endif /* kcg_copy_outPackets_T_Common_Types_Pkg */

#ifndef kcg_copy_Message_EVC_to_Train_Interface_T_TIU_Types_Pkg
#define kcg_copy_Message_EVC_to_Train_Interface_T_TIU_Types_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (Message_EVC_to_Train_Interface_T_TIU_Types_Pkg)))
#endif /* kcg_copy_Message_EVC_to_Train_Interface_T_TIU_Types_Pkg */

#ifndef kcg_copy_PosRepParams_T
#define kcg_copy_PosRepParams_T(kcg_C1, kcg_C2)                               \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (PosRepParams_T)))
#endif /* kcg_copy_PosRepParams_T */

#ifndef kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg
#define kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(kcg_C1, kcg_C2)   \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (PT4_ErrorReporting_T_Packet_TrainTypes_Pkg)))
#endif /* kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg */

#ifndef kcg_copy_RBC_Id_T_Common_Types_Pkg
#define kcg_copy_RBC_Id_T_Common_Types_Pkg(kcg_C1, kcg_C2)                    \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (RBC_Id_T_Common_Types_Pkg)))
#endif /* kcg_copy_RBC_Id_T_Common_Types_Pkg */

#ifndef kcg_copy_M_current_T_TIU_Types_Pkg
#define kcg_copy_M_current_T_TIU_Types_Pkg(kcg_C1, kcg_C2)                    \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (M_current_T_TIU_Types_Pkg)))
#endif /* kcg_copy_M_current_T_TIU_Types_Pkg */

#ifndef kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg
#define kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(kcg_C1, kcg_C2)        \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (centerOfBalisePosition_T_BG_Types_Pkg)))
#endif /* kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg */

#ifndef kcg_copy_MetadataElement_T_Common_Types_Pkg
#define kcg_copy_MetadataElement_T_Common_Types_Pkg(kcg_C1, kcg_C2)           \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (MetadataElement_T_Common_Types_Pkg)))
#endif /* kcg_copy_MetadataElement_T_Common_Types_Pkg */

#ifndef kcg_copy_P046_OBU_sectionlist_int_T_TM
#define kcg_copy_P046_OBU_sectionlist_int_T_TM(kcg_C1, kcg_C2)                \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P046_OBU_sectionlist_int_T_TM)))
#endif /* kcg_copy_P046_OBU_sectionlist_int_T_TM */

#ifndef kcg_copy_P041_OBU_sectionlist_int_T_TM
#define kcg_copy_P041_OBU_sectionlist_int_T_TM(kcg_C1, kcg_C2)                \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P041_OBU_sectionlist_int_T_TM)))
#endif /* kcg_copy_P041_OBU_sectionlist_int_T_TM */

#ifndef kcg_copy_P021_OBU_sectionlist_int_T_TM
#define kcg_copy_P021_OBU_sectionlist_int_T_TM(kcg_C1, kcg_C2)                \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P021_OBU_sectionlist_int_T_TM)))
#endif /* kcg_copy_P021_OBU_sectionlist_int_T_TM */

#ifndef kcg_copy_array_int32_56
#define kcg_copy_array_int32_56(kcg_C1, kcg_C2)                               \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_56)))
#endif /* kcg_copy_array_int32_56 */

#ifndef kcg_copy_array_int32_9
#define kcg_copy_array_int32_9(kcg_C1, kcg_C2)                                \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_9)))
#endif /* kcg_copy_array_int32_9 */

#ifndef kcg_copy_array_int32_6
#define kcg_copy_array_int32_6(kcg_C1, kcg_C2)                                \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_6)))
#endif /* kcg_copy_array_int32_6 */

#ifndef kcg_copy_array_int32_70
#define kcg_copy_array_int32_70(kcg_C1, kcg_C2)                               \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_70)))
#endif /* kcg_copy_array_int32_70 */

#ifndef kcg_copy_array_int32_2_32_64
#define kcg_copy_array_int32_2_32_64(kcg_C1, kcg_C2)                          \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_2_32_64)))
#endif /* kcg_copy_array_int32_2_32_64 */

#ifndef kcg_copy_array_int32_2_32
#define kcg_copy_array_int32_2_32(kcg_C1, kcg_C2)                             \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_2_32)))
#endif /* kcg_copy_array_int32_2_32 */

#ifndef kcg_copy_P027V1_trackside_sectionlist_T_TM_baseline2
#define kcg_copy_P027V1_trackside_sectionlist_T_TM_baseline2(kcg_C1, kcg_C2)  \
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (P027V1_trackside_sectionlist_T_TM_baseline2)))
#endif /* kcg_copy_P027V1_trackside_sectionlist_T_TM_baseline2 */

#ifndef kcg_copy_P005_trackide_sectionlist_T_TM
#define kcg_copy_P005_trackide_sectionlist_T_TM(kcg_C1, kcg_C2)               \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P005_trackide_sectionlist_T_TM)))
#endif /* kcg_copy_P005_trackide_sectionlist_T_TM */

#ifndef kcg_copy_array_int32_99
#define kcg_copy_array_int32_99(kcg_C1, kcg_C2)                               \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_99)))
#endif /* kcg_copy_array_int32_99 */

#ifndef kcg_copy_array_int32_3_33_231
#define kcg_copy_array_int32_3_33_231(kcg_C1, kcg_C2)                         \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_3_33_231)))
#endif /* kcg_copy_array_int32_3_33_231 */

#ifndef kcg_copy_array_int32_7_33_231
#define kcg_copy_array_int32_7_33_231(kcg_C1, kcg_C2)                         \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_7_33_231)))
#endif /* kcg_copy_array_int32_7_33_231 */

#ifndef kcg_copy_P015_sections_array_flat_T_TM
#define kcg_copy_P015_sections_array_flat_T_TM(kcg_C1, kcg_C2)                \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P015_sections_array_flat_T_TM)))
#endif /* kcg_copy_P015_sections_array_flat_T_TM */

#ifndef kcg_copy_array_int32_8
#define kcg_copy_array_int32_8(kcg_C1, kcg_C2)                                \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_8)))
#endif /* kcg_copy_array_int32_8 */

#ifndef kcg_copy_array_int32_5
#define kcg_copy_array_int32_5(kcg_C1, kcg_C2)                                \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_5)))
#endif /* kcg_copy_array_int32_5 */

#ifndef kcg_copy_array_int32_496
#define kcg_copy_array_int32_496(kcg_C1, kcg_C2)                              \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_496)))
#endif /* kcg_copy_array_int32_496 */

#ifndef kcg_copy_array
#define kcg_copy_array(kcg_C1, kcg_C2)                                        \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array)))
#endif /* kcg_copy_array */

#ifndef kcg_copy_P046_sections_array_flat_T_TM
#define kcg_copy_P046_sections_array_flat_T_TM(kcg_C1, kcg_C2)                \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P046_sections_array_flat_T_TM)))
#endif /* kcg_copy_P046_sections_array_flat_T_TM */

#ifndef kcg_copy__18_array
#define kcg_copy__18_array(kcg_C1, kcg_C2)                                    \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_18_array)))
#endif /* kcg_copy__18_array */

#ifndef kcg_copy_array_int32_22
#define kcg_copy_array_int32_22(kcg_C1, kcg_C2)                               \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_22)))
#endif /* kcg_copy_array_int32_22 */

#ifndef kcg_copy_array_int32_2_32_32
#define kcg_copy_array_int32_2_32_32(kcg_C1, kcg_C2)                          \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_2_32_32)))
#endif /* kcg_copy_array_int32_2_32_32 */

#ifndef kcg_copy_P046_trackide_sectionlist_T_TM
#define kcg_copy_P046_trackide_sectionlist_T_TM(kcg_C1, kcg_C2)               \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P046_trackide_sectionlist_T_TM)))
#endif /* kcg_copy_P046_trackide_sectionlist_T_TM */

#ifndef kcg_copy_P041_trackide_sectionlist_T_TM
#define kcg_copy_P041_trackide_sectionlist_T_TM(kcg_C1, kcg_C2)               \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P041_trackide_sectionlist_T_TM)))
#endif /* kcg_copy_P041_trackide_sectionlist_T_TM */

#ifndef kcg_copy__19_array
#define kcg_copy__19_array(kcg_C1, kcg_C2)                                    \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_19_array)))
#endif /* kcg_copy__19_array */

#ifndef kcg_copy_P021_trackide_sectionlist_T_TM
#define kcg_copy_P021_trackide_sectionlist_T_TM(kcg_C1, kcg_C2)               \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P021_trackide_sectionlist_T_TM)))
#endif /* kcg_copy_P021_trackide_sectionlist_T_TM */

#ifndef kcg_copy__20_array
#define kcg_copy__20_array(kcg_C1, kcg_C2)                                    \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_20_array)))
#endif /* kcg_copy__20_array */

#ifndef kcg_copy__21_array
#define kcg_copy__21_array(kcg_C1, kcg_C2)                                    \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_21_array)))
#endif /* kcg_copy__21_array */

#ifndef kcg_copy_P005_sections_array_flat_T_TM
#define kcg_copy_P005_sections_array_flat_T_TM(kcg_C1, kcg_C2)                \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P005_sections_array_flat_T_TM)))
#endif /* kcg_copy_P005_sections_array_flat_T_TM */

#ifndef kcg_copy__22_array
#define kcg_copy__22_array(kcg_C1, kcg_C2)                                    \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_22_array)))
#endif /* kcg_copy__22_array */

#ifndef kcg_copy_P015_section_array_T_TM
#define kcg_copy_P015_section_array_T_TM(kcg_C1, kcg_C2)                      \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P015_section_array_T_TM)))
#endif /* kcg_copy_P015_section_array_T_TM */

#ifndef kcg_copy_P015_OBU_sectionlist_array_T_TM
#define kcg_copy_P015_OBU_sectionlist_array_T_TM(kcg_C1, kcg_C2)              \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P015_OBU_sectionlist_array_T_TM)))
#endif /* kcg_copy_P015_OBU_sectionlist_array_T_TM */

#ifndef kcg_copy_array_int32_33
#define kcg_copy_array_int32_33(kcg_C1, kcg_C2)                               \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_33)))
#endif /* kcg_copy_array_int32_33 */

#ifndef kcg_copy_P005_OBU_sectionlist_array_T_TM
#define kcg_copy_P005_OBU_sectionlist_array_T_TM(kcg_C1, kcg_C2)              \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P005_OBU_sectionlist_array_T_TM)))
#endif /* kcg_copy_P005_OBU_sectionlist_array_T_TM */

#ifndef kcg_copy_array_int32_492
#define kcg_copy_array_int32_492(kcg_C1, kcg_C2)                              \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_492)))
#endif /* kcg_copy_array_int32_492 */

#ifndef kcg_copy_array_int32_18
#define kcg_copy_array_int32_18(kcg_C1, kcg_C2)                               \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_18)))
#endif /* kcg_copy_array_int32_18 */

#ifndef kcg_copy_M_TrainTrack_compressed_packets_T_TM_radio_messages
#define kcg_copy_M_TrainTrack_compressed_packets_T_TM_radio_messages(kcg_C1, kcg_C2)\
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (M_TrainTrack_compressed_packets_T_TM_radio_messages)))
#endif /* kcg_copy_M_TrainTrack_compressed_packets_T_TM_radio_messages */

#ifndef kcg_copy_array_int32_3
#define kcg_copy_array_int32_3(kcg_C1, kcg_C2)                                \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_3)))
#endif /* kcg_copy_array_int32_3 */

#ifndef kcg_copy_array_int32_430
#define kcg_copy_array_int32_430(kcg_C1, kcg_C2)                              \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_430)))
#endif /* kcg_copy_array_int32_430 */

#ifndef kcg_copy_array_int32_500_500
#define kcg_copy_array_int32_500_500(kcg_C1, kcg_C2)                          \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_500_500)))
#endif /* kcg_copy_array_int32_500_500 */

#ifndef kcg_copy_P003V1_trackide_sectionlist_T_TM_baseline2
#define kcg_copy_P003V1_trackide_sectionlist_T_TM_baseline2(kcg_C1, kcg_C2)   \
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (P003V1_trackide_sectionlist_T_TM_baseline2)))
#endif /* kcg_copy_P003V1_trackide_sectionlist_T_TM_baseline2 */

#ifndef kcg_copy_P005_OBU_sectionlist_int_T_TM
#define kcg_copy_P005_OBU_sectionlist_int_T_TM(kcg_C1, kcg_C2)                \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P005_OBU_sectionlist_int_T_TM)))
#endif /* kcg_copy_P005_OBU_sectionlist_int_T_TM */

#ifndef kcg_copy_P027V1_OBU_sectionlist_int_T_TM_baseline2
#define kcg_copy_P027V1_OBU_sectionlist_int_T_TM_baseline2(kcg_C1, kcg_C2)    \
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (P027V1_OBU_sectionlist_int_T_TM_baseline2)))
#endif /* kcg_copy_P027V1_OBU_sectionlist_int_T_TM_baseline2 */

#ifndef kcg_copy_array_int32_494
#define kcg_copy_array_int32_494(kcg_C1, kcg_C2)                              \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_494)))
#endif /* kcg_copy_array_int32_494 */

#ifndef kcg_copy_array_int32_64
#define kcg_copy_array_int32_64(kcg_C1, kcg_C2)                               \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_64)))
#endif /* kcg_copy_array_int32_64 */

#ifndef kcg_copy_array_int32_491
#define kcg_copy_array_int32_491(kcg_C1, kcg_C2)                              \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_491)))
#endif /* kcg_copy_array_int32_491 */

#ifndef kcg_copy_array_int32_17
#define kcg_copy_array_int32_17(kcg_C1, kcg_C2)                               \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_17)))
#endif /* kcg_copy_array_int32_17 */

#ifndef kcg_copy_array_int32_4_32_128
#define kcg_copy_array_int32_4_32_128(kcg_C1, kcg_C2)                         \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_4_32_128)))
#endif /* kcg_copy_array_int32_4_32_128 */

#ifndef kcg_copy_array_int32_444
#define kcg_copy_array_int32_444(kcg_C1, kcg_C2)                              \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_444)))
#endif /* kcg_copy_array_int32_444 */

#ifndef kcg_copy_array_int32_400
#define kcg_copy_array_int32_400(kcg_C1, kcg_C2)                              \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_400)))
#endif /* kcg_copy_array_int32_400 */

#ifndef kcg_copy_Metadata_T_Common_Types_Pkg
#define kcg_copy_Metadata_T_Common_Types_Pkg(kcg_C1, kcg_C2)                  \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (Metadata_T_Common_Types_Pkg)))
#endif /* kcg_copy_Metadata_T_Common_Types_Pkg */

#ifndef kcg_copy__23_array
#define kcg_copy__23_array(kcg_C1, kcg_C2)                                    \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_23_array)))
#endif /* kcg_copy__23_array */

#ifndef kcg_copy_array_int32_432
#define kcg_copy_array_int32_432(kcg_C1, kcg_C2)                              \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_432)))
#endif /* kcg_copy_array_int32_432 */

#ifndef kcg_copy_array_int32_2
#define kcg_copy_array_int32_2(kcg_C1, kcg_C2)                                \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_2)))
#endif /* kcg_copy_array_int32_2 */

#ifndef kcg_copy__24_array
#define kcg_copy__24_array(kcg_C1, kcg_C2)                                    \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_24_array)))
#endif /* kcg_copy__24_array */

#ifndef kcg_copy_array_int32_396
#define kcg_copy_array_int32_396(kcg_C1, kcg_C2)                              \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_396)))
#endif /* kcg_copy_array_int32_396 */

#ifndef kcg_copy_array_int32_1
#define kcg_copy_array_int32_1(kcg_C1, kcg_C2)                                \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_1)))
#endif /* kcg_copy_array_int32_1 */

#ifndef kcg_copy_array_int32_428
#define kcg_copy_array_int32_428(kcg_C1, kcg_C2)                              \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_428)))
#endif /* kcg_copy_array_int32_428 */

#ifndef kcg_copy_array_bool_5
#define kcg_copy_array_bool_5(kcg_C1, kcg_C2)                                 \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_5)))
#endif /* kcg_copy_array_bool_5 */

#ifndef kcg_copy_array_int32_150
#define kcg_copy_array_int32_150(kcg_C1, kcg_C2)                              \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_150)))
#endif /* kcg_copy_array_int32_150 */

#ifndef kcg_copy_telephoneNumber_T_Packet_TrainTypes_Pkg
#define kcg_copy_telephoneNumber_T_Packet_TrainTypes_Pkg(kcg_C1, kcg_C2)      \
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (telephoneNumber_T_Packet_TrainTypes_Pkg)))
#endif /* kcg_copy_telephoneNumber_T_Packet_TrainTypes_Pkg */

#ifndef kcg_copy__25_array
#define kcg_copy__25_array(kcg_C1, kcg_C2)                                    \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_25_array)))
#endif /* kcg_copy__25_array */

#ifndef kcg_copy_array_int32_395
#define kcg_copy_array_int32_395(kcg_C1, kcg_C2)                              \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_395)))
#endif /* kcg_copy_array_int32_395 */

#ifndef kcg_copy_array_int32_8_4
#define kcg_copy_array_int32_8_4(kcg_C1, kcg_C2)                              \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_8_4)))
#endif /* kcg_copy_array_int32_8_4 */

#ifndef kcg_copy_CompressedPacketData_T_Common_Types_Pkg
#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg(kcg_C1, kcg_C2)      \
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (CompressedPacketData_T_Common_Types_Pkg)))
#endif /* kcg_copy_CompressedPacketData_T_Common_Types_Pkg */

#ifndef kcg_copy_array_int32_105
#define kcg_copy_array_int32_105(kcg_C1, kcg_C2)                              \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_105)))
#endif /* kcg_copy_array_int32_105 */

#ifndef kcg_copy__26_array
#define kcg_copy__26_array(kcg_C1, kcg_C2)                                    \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_26_array)))
#endif /* kcg_copy__26_array */

#ifndef kcg_copy__27_array
#define kcg_copy__27_array(kcg_C1, kcg_C2)                                    \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_27_array)))
#endif /* kcg_copy__27_array */

#ifndef kcg_copy__28_array
#define kcg_copy__28_array(kcg_C1, kcg_C2)                                    \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_28_array)))
#endif /* kcg_copy__28_array */

#ifndef kcg_copy_P046_OBU_sectionlist_array_T_TM
#define kcg_copy_P046_OBU_sectionlist_array_T_TM(kcg_C1, kcg_C2)              \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P046_OBU_sectionlist_array_T_TM)))
#endif /* kcg_copy_P046_OBU_sectionlist_array_T_TM */

#ifndef kcg_copy__29_array
#define kcg_copy__29_array(kcg_C1, kcg_C2)                                    \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_29_array)))
#endif /* kcg_copy__29_array */

#ifndef kcg_copy_Array11_TM_TrainToTrack
#define kcg_copy_Array11_TM_TrainToTrack(kcg_C1, kcg_C2)                      \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (Array11_TM_TrainToTrack)))
#endif /* kcg_copy_Array11_TM_TrainToTrack */

#ifndef kcg_copy_aNID_RADIO_T_Packet_TrainTypes_Pkg
#define kcg_copy_aNID_RADIO_T_Packet_TrainTypes_Pkg(kcg_C1, kcg_C2)           \
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (aNID_RADIO_T_Packet_TrainTypes_Pkg)))
#endif /* kcg_copy_aNID_RADIO_T_Packet_TrainTypes_Pkg */

#ifndef kcg_copy_array_int32_350
#define kcg_copy_array_int32_350(kcg_C1, kcg_C2)                              \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_350)))
#endif /* kcg_copy_array_int32_350 */

#ifndef kcg_copy_array_int32_2_33_99
#define kcg_copy_array_int32_2_33_99(kcg_C1, kcg_C2)                          \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_2_33_99)))
#endif /* kcg_copy_array_int32_2_33_99 */

#ifndef kcg_copy_array_int32_3_33_99
#define kcg_copy_array_int32_3_33_99(kcg_C1, kcg_C2)                          \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_3_33_99)))
#endif /* kcg_copy_array_int32_3_33_99 */

#ifndef kcg_copy_array_int32_72
#define kcg_copy_array_int32_72(kcg_C1, kcg_C2)                               \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_72)))
#endif /* kcg_copy_array_int32_72 */

#ifndef kcg_copy_array_int32_499
#define kcg_copy_array_int32_499(kcg_C1, kcg_C2)                              \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_499)))
#endif /* kcg_copy_array_int32_499 */

#ifndef kcg_copy_array_int32_104
#define kcg_copy_array_int32_104(kcg_C1, kcg_C2)                              \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_104)))
#endif /* kcg_copy_array_int32_104 */

#ifndef kcg_copy_P011_TrainTrack_int_TM_TrainToTrack
#define kcg_copy_P011_TrainTrack_int_TM_TrainToTrack(kcg_C1, kcg_C2)          \
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (P011_TrainTrack_int_TM_TrainToTrack)))
#endif /* kcg_copy_P011_TrainTrack_int_TM_TrainToTrack */

#ifndef kcg_copy_array_int32_3_33
#define kcg_copy_array_int32_3_33(kcg_C1, kcg_C2)                             \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_3_33)))
#endif /* kcg_copy_array_int32_3_33 */

#ifndef kcg_copy_P005_section_array_T_TM
#define kcg_copy_P005_section_array_T_TM(kcg_C1, kcg_C2)                      \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P005_section_array_T_TM)))
#endif /* kcg_copy_P005_section_array_T_TM */

#ifndef kcg_copy__30_array
#define kcg_copy__30_array(kcg_C1, kcg_C2)                                    \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_30_array)))
#endif /* kcg_copy__30_array */

#ifndef kcg_copy__31_array
#define kcg_copy__31_array(kcg_C1, kcg_C2)                                    \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_31_array)))
#endif /* kcg_copy__31_array */

#ifndef kcg_copy_array_int32_68
#define kcg_copy_array_int32_68(kcg_C1, kcg_C2)                               \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_68)))
#endif /* kcg_copy_array_int32_68 */

#ifndef kcg_copy__3_RadioTrackTrainMessageQueueEntries_T
#define kcg_copy__3_RadioTrackTrainMessageQueueEntries_T(kcg_C1, kcg_C2)      \
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (_3_RadioTrackTrainMessageQueueEntries_T)))
#endif /* kcg_copy__3_RadioTrackTrainMessageQueueEntries_T */

#ifndef kcg_copy_array_int32_24
#define kcg_copy_array_int32_24(kcg_C1, kcg_C2)                               \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_24)))
#endif /* kcg_copy_array_int32_24 */

#ifndef kcg_copy_array_int32_21
#define kcg_copy_array_int32_21(kcg_C1, kcg_C2)                               \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_21)))
#endif /* kcg_copy_array_int32_21 */

#ifndef kcg_copy_array_int32_100
#define kcg_copy_array_int32_100(kcg_C1, kcg_C2)                              \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_100)))
#endif /* kcg_copy_array_int32_100 */

#ifdef kcg_use_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg
#ifndef kcg_comp_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg
extern kcg_bool kcg_comp_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(
  PT5_TrainRunningNumber_Packet_TrainTypes_Pkg *kcg_c1,
  PT5_TrainRunningNumber_Packet_TrainTypes_Pkg *kcg_c2);
#endif /* kcg_comp_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg */
#endif /* kcg_use_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg */

#ifdef kcg_use_TrackSectionData_T_InfraLib
#ifndef kcg_comp_TrackSectionData_T_InfraLib
extern kcg_bool kcg_comp_TrackSectionData_T_InfraLib(
  TrackSectionData_T_InfraLib *kcg_c1,
  TrackSectionData_T_InfraLib *kcg_c2);
#endif /* kcg_comp_TrackSectionData_T_InfraLib */
#endif /* kcg_use_TrackSectionData_T_InfraLib */

#ifdef kcg_use_RadioTrackTrainMessageQueueEntry_T
#ifndef kcg_comp_RadioTrackTrainMessageQueueEntry_T
extern kcg_bool kcg_comp_RadioTrackTrainMessageQueueEntry_T(
  RadioTrackTrainMessageQueueEntry_T *kcg_c1,
  RadioTrackTrainMessageQueueEntry_T *kcg_c2);
#endif /* kcg_comp_RadioTrackTrainMessageQueueEntry_T */
#endif /* kcg_use_RadioTrackTrainMessageQueueEntry_T */

#ifdef kcg_use_CompressedBaliseMessage_TM
#ifndef kcg_comp_CompressedBaliseMessage_TM
extern kcg_bool kcg_comp_CompressedBaliseMessage_TM(
  CompressedBaliseMessage_TM *kcg_c1,
  CompressedBaliseMessage_TM *kcg_c2);
#endif /* kcg_comp_CompressedBaliseMessage_TM */
#endif /* kcg_use_CompressedBaliseMessage_TM */

#ifdef kcg_use_CompressedRadioMessage_TM
#ifndef kcg_comp_CompressedRadioMessage_TM
extern kcg_bool kcg_comp_CompressedRadioMessage_TM(
  CompressedRadioMessage_TM *kcg_c1,
  CompressedRadioMessage_TM *kcg_c2);
#endif /* kcg_comp_CompressedRadioMessage_TM */
#endif /* kcg_use_CompressedRadioMessage_TM */

#ifdef kcg_use__2_RadioTrackTrainMessageQueue_T
#ifndef kcg_comp__2_RadioTrackTrainMessageQueue_T
extern kcg_bool kcg_comp__2_RadioTrackTrainMessageQueue_T(
  _2_RadioTrackTrainMessageQueue_T *kcg_c1,
  _2_RadioTrackTrainMessageQueue_T *kcg_c2);
#endif /* kcg_comp__2_RadioTrackTrainMessageQueue_T */
#endif /* kcg_use__2_RadioTrackTrainMessageQueue_T */

#ifdef kcg_use_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg
#ifndef kcg_comp_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg
extern kcg_bool kcg_comp_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(
  PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg *kcg_c1,
  PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg *kcg_c2);
#endif /* kcg_comp_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg */
#endif /* kcg_use_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_struct_149189
#ifndef kcg_comp_struct_149189
extern kcg_bool kcg_comp_struct_149189(
  struct_149189 *kcg_c1,
  struct_149189 *kcg_c2);
#endif /* kcg_comp_struct_149189 */
#endif /* kcg_use_struct_149189 */

#ifdef kcg_use_struct_149262
#ifndef kcg_comp_struct_149262
extern kcg_bool kcg_comp_struct_149262(
  struct_149262 *kcg_c1,
  struct_149262 *kcg_c2);
#endif /* kcg_comp_struct_149262 */
#endif /* kcg_use_struct_149262 */

#ifdef kcg_use_R_data_internal_T_InfraLib
#ifndef kcg_comp_R_data_internal_T_InfraLib
extern kcg_bool kcg_comp_R_data_internal_T_InfraLib(
  R_data_internal_T_InfraLib *kcg_c1,
  R_data_internal_T_InfraLib *kcg_c2);
#endif /* kcg_comp_R_data_internal_T_InfraLib */
#endif /* kcg_use_R_data_internal_T_InfraLib */

#ifdef kcg_use_P004_TM_TrainToTrack
#ifndef kcg_comp_P004_TM_TrainToTrack
extern kcg_bool kcg_comp_P004_TM_TrainToTrack(
  P004_TM_TrainToTrack *kcg_c1,
  P004_TM_TrainToTrack *kcg_c2);
#endif /* kcg_comp_P004_TM_TrainToTrack */
#endif /* kcg_use_P004_TM_TrainToTrack */

#ifdef kcg_use_P255_trackside_int_T_TM
#ifndef kcg_comp_P255_trackside_int_T_TM
extern kcg_bool kcg_comp_P255_trackside_int_T_TM(
  P255_trackside_int_T_TM *kcg_c1,
  P255_trackside_int_T_TM *kcg_c2);
#endif /* kcg_comp_P255_trackside_int_T_TM */
#endif /* kcg_use_P255_trackside_int_T_TM */

#ifdef kcg_use_P046_section_int_T_TM
#ifndef kcg_comp_P046_section_int_T_TM
extern kcg_bool kcg_comp_P046_section_int_T_TM(
  P046_section_int_T_TM *kcg_c1,
  P046_section_int_T_TM *kcg_c2);
#endif /* kcg_comp_P046_section_int_T_TM */
#endif /* kcg_use_P046_section_int_T_TM */

#ifdef kcg_use_P003_TM_TrainToTrack
#ifndef kcg_comp_P003_TM_TrainToTrack
extern kcg_bool kcg_comp_P003_TM_TrainToTrack(
  P003_TM_TrainToTrack *kcg_c1,
  P003_TM_TrainToTrack *kcg_c2);
#endif /* kcg_comp_P003_TM_TrainToTrack */
#endif /* kcg_use_P003_TM_TrainToTrack */

#ifdef kcg_use_P027V1_section_int_T_TM_baseline2
#ifndef kcg_comp_P027V1_section_int_T_TM_baseline2
extern kcg_bool kcg_comp_P027V1_section_int_T_TM_baseline2(
  P027V1_section_int_T_TM_baseline2 *kcg_c1,
  P027V1_section_int_T_TM_baseline2 *kcg_c2);
#endif /* kcg_comp_P027V1_section_int_T_TM_baseline2 */
#endif /* kcg_use_P027V1_section_int_T_TM_baseline2 */

#ifdef kcg_use_struct_149475
#ifndef kcg_comp_struct_149475
extern kcg_bool kcg_comp_struct_149475(
  struct_149475 *kcg_c1,
  struct_149475 *kcg_c2);
#endif /* kcg_comp_struct_149475 */
#endif /* kcg_use_struct_149475 */

#ifdef kcg_use_mobileHWStatus_Type_MoRC_Pck
#ifndef kcg_comp_mobileHWStatus_Type_MoRC_Pck
extern kcg_bool kcg_comp_mobileHWStatus_Type_MoRC_Pck(
  mobileHWStatus_Type_MoRC_Pck *kcg_c1,
  mobileHWStatus_Type_MoRC_Pck *kcg_c2);
#endif /* kcg_comp_mobileHWStatus_Type_MoRC_Pck */
#endif /* kcg_use_mobileHWStatus_Type_MoRC_Pck */

#ifdef kcg_use_CompressedPackets_T_Common_Types_Pkg
#ifndef kcg_comp_CompressedPackets_T_Common_Types_Pkg
extern kcg_bool kcg_comp_CompressedPackets_T_Common_Types_Pkg(
  CompressedPackets_T_Common_Types_Pkg *kcg_c1,
  CompressedPackets_T_Common_Types_Pkg *kcg_c2);
#endif /* kcg_comp_CompressedPackets_T_Common_Types_Pkg */
#endif /* kcg_use_CompressedPackets_T_Common_Types_Pkg */

#ifdef kcg_use_P137_trackside_int_T_TM
#ifndef kcg_comp_P137_trackside_int_T_TM
extern kcg_bool kcg_comp_P137_trackside_int_T_TM(
  P137_trackside_int_T_TM *kcg_c1,
  P137_trackside_int_T_TM *kcg_c2);
#endif /* kcg_comp_P137_trackside_int_T_TM */
#endif /* kcg_use_P137_trackside_int_T_TM */

#ifdef kcg_use_M_voltage_T_TIU_Types_Pkg
#ifndef kcg_comp_M_voltage_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_M_voltage_T_TIU_Types_Pkg(
  M_voltage_T_TIU_Types_Pkg *kcg_c1,
  M_voltage_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_M_voltage_T_TIU_Types_Pkg */
#endif /* kcg_use_M_voltage_T_TIU_Types_Pkg */

#ifdef kcg_use_TrainPosRaw_T_InfraLib
#ifndef kcg_comp_TrainPosRaw_T_InfraLib
extern kcg_bool kcg_comp_TrainPosRaw_T_InfraLib(
  TrainPosRaw_T_InfraLib *kcg_c1,
  TrainPosRaw_T_InfraLib *kcg_c2);
#endif /* kcg_comp_TrainPosRaw_T_InfraLib */
#endif /* kcg_use_TrainPosRaw_T_InfraLib */

#ifdef kcg_use_DiagMsg_T_RBC_Diagnostic_Pkg
#ifndef kcg_comp_DiagMsg_T_RBC_Diagnostic_Pkg
extern kcg_bool kcg_comp_DiagMsg_T_RBC_Diagnostic_Pkg(
  DiagMsg_T_RBC_Diagnostic_Pkg *kcg_c1,
  DiagMsg_T_RBC_Diagnostic_Pkg *kcg_c2);
#endif /* kcg_comp_DiagMsg_T_RBC_Diagnostic_Pkg */
#endif /* kcg_use_DiagMsg_T_RBC_Diagnostic_Pkg */

#ifdef kcg_use_nothing_to_resume_profile_follow_T_TIU_Types_Pkg
#ifndef kcg_comp_nothing_to_resume_profile_follow_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_nothing_to_resume_profile_follow_T_TIU_Types_Pkg(
  nothing_to_resume_profile_follow_T_TIU_Types_Pkg *kcg_c1,
  nothing_to_resume_profile_follow_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_nothing_to_resume_profile_follow_T_TIU_Types_Pkg */
#endif /* kcg_use_nothing_to_resume_profile_follow_T_TIU_Types_Pkg */

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

#ifdef kcg_use_SessionManagement_T
#ifndef kcg_comp_SessionManagement_T
extern kcg_bool kcg_comp_SessionManagement_T(
  SessionManagement_T *kcg_c1,
  SessionManagement_T *kcg_c2);
#endif /* kcg_comp_SessionManagement_T */
#endif /* kcg_use_SessionManagement_T */

#ifdef kcg_use_IterPacket58_T_Packet_Types_Pkg
#ifndef kcg_comp_IterPacket58_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_IterPacket58_T_Packet_Types_Pkg(
  IterPacket58_T_Packet_Types_Pkg *kcg_c1,
  IterPacket58_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_IterPacket58_T_Packet_Types_Pkg */
#endif /* kcg_use_IterPacket58_T_Packet_Types_Pkg */

#ifdef kcg_use_RBC_Data_T_RBC_DataBus_Pkg
#ifndef kcg_comp_RBC_Data_T_RBC_DataBus_Pkg
extern kcg_bool kcg_comp_RBC_Data_T_RBC_DataBus_Pkg(
  RBC_Data_T_RBC_DataBus_Pkg *kcg_c1,
  RBC_Data_T_RBC_DataBus_Pkg *kcg_c2);
#endif /* kcg_comp_RBC_Data_T_RBC_DataBus_Pkg */
#endif /* kcg_use_RBC_Data_T_RBC_DataBus_Pkg */

#ifdef kcg_use_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg
#ifndef kcg_comp_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(
  Message_Train_Interface_to_EVC_T_TIU_Types_Pkg *kcg_c1,
  Message_Train_Interface_to_EVC_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg */
#endif /* kcg_use_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg */

#ifdef kcg_use_API_TrackSideInput_T_API_Msg_Pkg
#ifndef kcg_comp_API_TrackSideInput_T_API_Msg_Pkg
extern kcg_bool kcg_comp_API_TrackSideInput_T_API_Msg_Pkg(
  API_TrackSideInput_T_API_Msg_Pkg *kcg_c1,
  API_TrackSideInput_T_API_Msg_Pkg *kcg_c2);
#endif /* kcg_comp_API_TrackSideInput_T_API_Msg_Pkg */
#endif /* kcg_use_API_TrackSideInput_T_API_Msg_Pkg */

#ifdef kcg_use_struct_149762
#ifndef kcg_comp_struct_149762
extern kcg_bool kcg_comp_struct_149762(
  struct_149762 *kcg_c1,
  struct_149762 *kcg_c2);
#endif /* kcg_comp_struct_149762 */
#endif /* kcg_use_struct_149762 */

#ifdef kcg_use_P015_section_int_T_TM
#ifndef kcg_comp_P015_section_int_T_TM
extern kcg_bool kcg_comp_P015_section_int_T_TM(
  P015_section_int_T_TM *kcg_c1,
  P015_section_int_T_TM *kcg_c2);
#endif /* kcg_comp_P015_section_int_T_TM */
#endif /* kcg_use_P015_section_int_T_TM */

#ifdef kcg_use_P009_TM_TrainToTrack
#ifndef kcg_comp_P009_TM_TrainToTrack
extern kcg_bool kcg_comp_P009_TM_TrainToTrack(
  P009_TM_TrainToTrack *kcg_c1,
  P009_TM_TrainToTrack *kcg_c2);
#endif /* kcg_comp_P009_TM_TrainToTrack */
#endif /* kcg_use_P009_TM_TrainToTrack */

#ifdef kcg_use_Isolation_Status_T_TIU_Types_Pkg
#ifndef kcg_comp_Isolation_Status_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_Isolation_Status_T_TIU_Types_Pkg(
  Isolation_Status_T_TIU_Types_Pkg *kcg_c1,
  Isolation_Status_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Isolation_Status_T_TIU_Types_Pkg */
#endif /* kcg_use_Isolation_Status_T_TIU_Types_Pkg */

#ifdef kcg_use_odometryFactors_T_Toolbox
#ifndef kcg_comp_odometryFactors_T_Toolbox
extern kcg_bool kcg_comp_odometryFactors_T_Toolbox(
  odometryFactors_T_Toolbox *kcg_c1,
  odometryFactors_T_Toolbox *kcg_c2);
#endif /* kcg_comp_odometryFactors_T_Toolbox */
#endif /* kcg_use_odometryFactors_T_Toolbox */

#ifdef kcg_use_Brake_pressure_value_T_TIU_Types_Pkg
#ifndef kcg_comp_Brake_pressure_value_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_Brake_pressure_value_T_TIU_Types_Pkg(
  Brake_pressure_value_T_TIU_Types_Pkg *kcg_c1,
  Brake_pressure_value_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Brake_pressure_value_T_TIU_Types_Pkg */
#endif /* kcg_use_Brake_pressure_value_T_TIU_Types_Pkg */

#ifdef kcg_use_struct_149909
#ifndef kcg_comp_struct_149909
extern kcg_bool kcg_comp_struct_149909(
  struct_149909 *kcg_c1,
  struct_149909 *kcg_c2);
#endif /* kcg_comp_struct_149909 */
#endif /* kcg_use_struct_149909 */

#ifdef kcg_use_Passenger_door_control_info_T_TIU_Types_Pkg
#ifndef kcg_comp_Passenger_door_control_info_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_Passenger_door_control_info_T_TIU_Types_Pkg(
  Passenger_door_control_info_T_TIU_Types_Pkg *kcg_c1,
  Passenger_door_control_info_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Passenger_door_control_info_T_TIU_Types_Pkg */
#endif /* kcg_use_Passenger_door_control_info_T_TIU_Types_Pkg */

#ifdef kcg_use_Radio_TrainTrack_Message_T_Radio_Types_Pkg
#ifndef kcg_comp_Radio_TrainTrack_Message_T_Radio_Types_Pkg
extern kcg_bool kcg_comp_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
  Radio_TrainTrack_Message_T_Radio_Types_Pkg *kcg_c1,
  Radio_TrainTrack_Message_T_Radio_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Radio_TrainTrack_Message_T_Radio_Types_Pkg */
#endif /* kcg_use_Radio_TrainTrack_Message_T_Radio_Types_Pkg */

#ifdef kcg_use_OdometryLocations_T_Obu_BasicTypes_Pkg
#ifndef kcg_comp_OdometryLocations_T_Obu_BasicTypes_Pkg
extern kcg_bool kcg_comp_OdometryLocations_T_Obu_BasicTypes_Pkg(
  OdometryLocations_T_Obu_BasicTypes_Pkg *kcg_c1,
  OdometryLocations_T_Obu_BasicTypes_Pkg *kcg_c2);
#endif /* kcg_comp_OdometryLocations_T_Obu_BasicTypes_Pkg */
#endif /* kcg_use_OdometryLocations_T_Obu_BasicTypes_Pkg */

#ifdef kcg_use_M_TrainTrack_Message_T_TM_radio_messages
#ifndef kcg_comp_M_TrainTrack_Message_T_TM_radio_messages
extern kcg_bool kcg_comp_M_TrainTrack_Message_T_TM_radio_messages(
  M_TrainTrack_Message_T_TM_radio_messages *kcg_c1,
  M_TrainTrack_Message_T_TM_radio_messages *kcg_c2);
#endif /* kcg_comp_M_TrainTrack_Message_T_TM_radio_messages */
#endif /* kcg_use_M_TrainTrack_Message_T_TM_radio_messages */

#ifdef kcg_use_Clock_T
#ifndef kcg_comp_Clock_T
extern kcg_bool kcg_comp_Clock_T(Clock_T *kcg_c1, Clock_T *kcg_c2);
#endif /* kcg_comp_Clock_T */
#endif /* kcg_use_Clock_T */

#ifdef kcg_use_Brake_command_T_TIU_Types_Pkg
#ifndef kcg_comp_Brake_command_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_Brake_command_T_TIU_Types_Pkg(
  Brake_command_T_TIU_Types_Pkg *kcg_c1,
  Brake_command_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Brake_command_T_TIU_Types_Pkg */
#endif /* kcg_use_Brake_command_T_TIU_Types_Pkg */

#ifdef kcg_use_P027V1_section_int_qdiff_T_TM_baseline2
#ifndef kcg_comp_P027V1_section_int_qdiff_T_TM_baseline2
extern kcg_bool kcg_comp_P027V1_section_int_qdiff_T_TM_baseline2(
  P027V1_section_int_qdiff_T_TM_baseline2 *kcg_c1,
  P027V1_section_int_qdiff_T_TM_baseline2 *kcg_c2);
#endif /* kcg_comp_P027V1_section_int_qdiff_T_TM_baseline2 */
#endif /* kcg_use_P027V1_section_int_qdiff_T_TM_baseline2 */

#ifdef kcg_use_Type_I_train_commands_T_TIU_Types_Pkg
#ifndef kcg_comp_Type_I_train_commands_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_Type_I_train_commands_T_TIU_Types_Pkg(
  Type_I_train_commands_T_TIU_Types_Pkg *kcg_c1,
  Type_I_train_commands_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Type_I_train_commands_T_TIU_Types_Pkg */
#endif /* kcg_use_Type_I_train_commands_T_TIU_Types_Pkg */

#ifdef kcg_use_P005_TM_TrainToTrack
#ifndef kcg_comp_P005_TM_TrainToTrack
extern kcg_bool kcg_comp_P005_TM_TrainToTrack(
  P005_TM_TrainToTrack *kcg_c1,
  P005_TM_TrainToTrack *kcg_c2);
#endif /* kcg_comp_P005_TM_TrainToTrack */
#endif /* kcg_use_P005_TM_TrainToTrack */

#ifdef kcg_use_P045_trackside_int_T_TM
#ifndef kcg_comp_P045_trackside_int_T_TM
extern kcg_bool kcg_comp_P045_trackside_int_T_TM(
  P045_trackside_int_T_TM *kcg_c1,
  P045_trackside_int_T_TM *kcg_c2);
#endif /* kcg_comp_P045_trackside_int_T_TM */
#endif /* kcg_use_P045_trackside_int_T_TM */

#ifdef kcg_use_OdometrySpeeds_T_Obu_BasicTypes_Pkg
#ifndef kcg_comp_OdometrySpeeds_T_Obu_BasicTypes_Pkg
extern kcg_bool kcg_comp_OdometrySpeeds_T_Obu_BasicTypes_Pkg(
  OdometrySpeeds_T_Obu_BasicTypes_Pkg *kcg_c1,
  OdometrySpeeds_T_Obu_BasicTypes_Pkg *kcg_c2);
#endif /* kcg_comp_OdometrySpeeds_T_Obu_BasicTypes_Pkg */
#endif /* kcg_use_OdometrySpeeds_T_Obu_BasicTypes_Pkg */

#ifdef kcg_use_LocWithInAcc_T_Obu_BasicTypes_Pkg
#ifndef kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg
extern kcg_bool kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg(
  LocWithInAcc_T_Obu_BasicTypes_Pkg *kcg_c1,
  LocWithInAcc_T_Obu_BasicTypes_Pkg *kcg_c2);
#endif /* kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg */
#endif /* kcg_use_LocWithInAcc_T_Obu_BasicTypes_Pkg */

#ifdef kcg_use_Brake_inhibition_command_T_TIU_Types_Pkg
#ifndef kcg_comp_Brake_inhibition_command_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_Brake_inhibition_command_T_TIU_Types_Pkg(
  Brake_inhibition_command_T_TIU_Types_Pkg *kcg_c1,
  Brake_inhibition_command_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Brake_inhibition_command_T_TIU_Types_Pkg */
#endif /* kcg_use_Brake_inhibition_command_T_TIU_Types_Pkg */

#ifdef kcg_use_RadioManagement_T_API_RadioCommunication_Pkg
#ifndef kcg_comp_RadioManagement_T_API_RadioCommunication_Pkg
extern kcg_bool kcg_comp_RadioManagement_T_API_RadioCommunication_Pkg(
  RadioManagement_T_API_RadioCommunication_Pkg *kcg_c1,
  RadioManagement_T_API_RadioCommunication_Pkg *kcg_c2);
#endif /* kcg_comp_RadioManagement_T_API_RadioCommunication_Pkg */
#endif /* kcg_use_RadioManagement_T_API_RadioCommunication_Pkg */

#ifdef kcg_use_struct_150212
#ifndef kcg_comp_struct_150212
extern kcg_bool kcg_comp_struct_150212(
  struct_150212 *kcg_c1,
  struct_150212 *kcg_c2);
#endif /* kcg_comp_struct_150212 */
#endif /* kcg_use_struct_150212 */

#ifdef kcg_use_P021_section_int_T_TM
#ifndef kcg_comp_P021_section_int_T_TM
extern kcg_bool kcg_comp_P021_section_int_T_TM(
  P021_section_int_T_TM *kcg_c1,
  P021_section_int_T_TM *kcg_c2);
#endif /* kcg_comp_P021_section_int_T_TM */
#endif /* kcg_use_P021_section_int_T_TM */

#ifdef kcg_use_P058_section_int_T_TM
#ifndef kcg_comp_P058_section_int_T_TM
extern kcg_bool kcg_comp_P058_section_int_T_TM(
  P058_section_int_T_TM *kcg_c1,
  P058_section_int_T_TM *kcg_c2);
#endif /* kcg_comp_P058_section_int_T_TM */
#endif /* kcg_use_P058_section_int_T_TM */

#ifdef kcg_use_B_data_internal_T_InfraLib
#ifndef kcg_comp_B_data_internal_T_InfraLib
extern kcg_bool kcg_comp_B_data_internal_T_InfraLib(
  B_data_internal_T_InfraLib *kcg_c1,
  B_data_internal_T_InfraLib *kcg_c2);
#endif /* kcg_comp_B_data_internal_T_InfraLib */
#endif /* kcg_use_B_data_internal_T_InfraLib */

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

#ifdef kcg_use_DynamicConfig_T
#ifndef kcg_comp_DynamicConfig_T
extern kcg_bool kcg_comp_DynamicConfig_T(
  DynamicConfig_T *kcg_c1,
  DynamicConfig_T *kcg_c2);
#endif /* kcg_comp_DynamicConfig_T */
#endif /* kcg_use_DynamicConfig_T */

#ifdef kcg_use_P065_trackside_int_T_TM
#ifndef kcg_comp_P065_trackside_int_T_TM
extern kcg_bool kcg_comp_P065_trackside_int_T_TM(
  P065_trackside_int_T_TM *kcg_c1,
  P065_trackside_int_T_TM *kcg_c2);
#endif /* kcg_comp_P065_trackside_int_T_TM */
#endif /* kcg_use_P065_trackside_int_T_TM */

#ifdef kcg_use_M_034_T_TM_radio_messages
#ifndef kcg_comp_M_034_T_TM_radio_messages
extern kcg_bool kcg_comp_M_034_T_TM_radio_messages(
  M_034_T_TM_radio_messages *kcg_c1,
  M_034_T_TM_radio_messages *kcg_c2);
#endif /* kcg_comp_M_034_T_TM_radio_messages */
#endif /* kcg_use_M_034_T_TM_radio_messages */

#ifdef kcg_use_M_015_T_TM_radio_messages
#ifndef kcg_comp_M_015_T_TM_radio_messages
extern kcg_bool kcg_comp_M_015_T_TM_radio_messages(
  M_015_T_TM_radio_messages *kcg_c1,
  M_015_T_TM_radio_messages *kcg_c2);
#endif /* kcg_comp_M_015_T_TM_radio_messages */
#endif /* kcg_use_M_015_T_TM_radio_messages */

#ifdef kcg_use_P041_trackside_int_T_TM
#ifndef kcg_comp_P041_trackside_int_T_TM
extern kcg_bool kcg_comp_P041_trackside_int_T_TM(
  P041_trackside_int_T_TM *kcg_c1,
  P041_trackside_int_T_TM *kcg_c2);
#endif /* kcg_comp_P041_trackside_int_T_TM */
#endif /* kcg_use_P041_trackside_int_T_TM */

#ifdef kcg_use_M_015_int_T_TM_radio_messages
#ifndef kcg_comp_M_015_int_T_TM_radio_messages
extern kcg_bool kcg_comp_M_015_int_T_TM_radio_messages(
  M_015_int_T_TM_radio_messages *kcg_c1,
  M_015_int_T_TM_radio_messages *kcg_c2);
#endif /* kcg_comp_M_015_int_T_TM_radio_messages */
#endif /* kcg_use_M_015_int_T_TM_radio_messages */

#ifdef kcg_use_M_TrackTrain_Radio_T_TM_radio_messages
#ifndef kcg_comp_M_TrackTrain_Radio_T_TM_radio_messages
extern kcg_bool kcg_comp_M_TrackTrain_Radio_T_TM_radio_messages(
  M_TrackTrain_Radio_T_TM_radio_messages *kcg_c1,
  M_TrackTrain_Radio_T_TM_radio_messages *kcg_c2);
#endif /* kcg_comp_M_TrackTrain_Radio_T_TM_radio_messages */
#endif /* kcg_use_M_TrackTrain_Radio_T_TM_radio_messages */

#ifdef kcg_use_P011_TM_TrainToTrack
#ifndef kcg_comp_P011_TM_TrainToTrack
extern kcg_bool kcg_comp_P011_TM_TrainToTrack(
  P011_TM_TrainToTrack *kcg_c1,
  P011_TM_TrainToTrack *kcg_c2);
#endif /* kcg_comp_P011_TM_TrainToTrack */
#endif /* kcg_use_P011_TM_TrainToTrack */

#ifdef kcg_use_P000_TM_TrainToTrack
#ifndef kcg_comp_P000_TM_TrainToTrack
extern kcg_bool kcg_comp_P000_TM_TrainToTrack(
  P000_TM_TrainToTrack *kcg_c1,
  P000_TM_TrainToTrack *kcg_c2);
#endif /* kcg_comp_P000_TM_TrainToTrack */
#endif /* kcg_use_P000_TM_TrainToTrack */

#ifdef kcg_use_P001_TM_TrainToTrack
#ifndef kcg_comp_P001_TM_TrainToTrack
extern kcg_bool kcg_comp_P001_TM_TrainToTrack(
  P001_TM_TrainToTrack *kcg_c1,
  P001_TM_TrainToTrack *kcg_c2);
#endif /* kcg_comp_P001_TM_TrainToTrack */
#endif /* kcg_use_P001_TM_TrainToTrack */

#ifdef kcg_use_P015_trackside_int_T_TM
#ifndef kcg_comp_P015_trackside_int_T_TM
extern kcg_bool kcg_comp_P015_trackside_int_T_TM(
  P015_trackside_int_T_TM *kcg_c1,
  P015_trackside_int_T_TM *kcg_c2);
#endif /* kcg_comp_P015_trackside_int_T_TM */
#endif /* kcg_use_P015_trackside_int_T_TM */

#ifdef kcg_use_P021_trackside_int_T_TM
#ifndef kcg_comp_P021_trackside_int_T_TM
extern kcg_bool kcg_comp_P021_trackside_int_T_TM(
  P021_trackside_int_T_TM *kcg_c1,
  P021_trackside_int_T_TM *kcg_c2);
#endif /* kcg_comp_P021_trackside_int_T_TM */
#endif /* kcg_use_P021_trackside_int_T_TM */

#ifdef kcg_use_P027V1_trackside_int_T_TM_baseline2
#ifndef kcg_comp_P027V1_trackside_int_T_TM_baseline2
extern kcg_bool kcg_comp_P027V1_trackside_int_T_TM_baseline2(
  P027V1_trackside_int_T_TM_baseline2 *kcg_c1,
  P027V1_trackside_int_T_TM_baseline2 *kcg_c2);
#endif /* kcg_comp_P027V1_trackside_int_T_TM_baseline2 */
#endif /* kcg_use_P027V1_trackside_int_T_TM_baseline2 */

#ifdef kcg_use_P058_trackside_int_T_TM
#ifndef kcg_comp_P058_trackside_int_T_TM
extern kcg_bool kcg_comp_P058_trackside_int_T_TM(
  P058_trackside_int_T_TM *kcg_c1,
  P058_trackside_int_T_TM *kcg_c2);
#endif /* kcg_comp_P058_trackside_int_T_TM */
#endif /* kcg_use_P058_trackside_int_T_TM */

#ifdef kcg_use_P005_trackside_int_T_TM
#ifndef kcg_comp_P005_trackside_int_T_TM
extern kcg_bool kcg_comp_P005_trackside_int_T_TM(
  P005_trackside_int_T_TM *kcg_c1,
  P005_trackside_int_T_TM *kcg_c2);
#endif /* kcg_comp_P005_trackside_int_T_TM */
#endif /* kcg_use_P005_trackside_int_T_TM */

#ifdef kcg_use_P003V1_trackside_int_T_TM_baseline2
#ifndef kcg_comp_P003V1_trackside_int_T_TM_baseline2
extern kcg_bool kcg_comp_P003V1_trackside_int_T_TM_baseline2(
  P003V1_trackside_int_T_TM_baseline2 *kcg_c1,
  P003V1_trackside_int_T_TM_baseline2 *kcg_c2);
#endif /* kcg_comp_P003V1_trackside_int_T_TM_baseline2 */
#endif /* kcg_use_P003V1_trackside_int_T_TM_baseline2 */

#ifdef kcg_use_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg
#ifndef kcg_comp_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg
extern kcg_bool kcg_comp_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(
  PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg *kcg_c1,
  PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg *kcg_c2);
#endif /* kcg_comp_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg */
#endif /* kcg_use_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg */

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

#ifdef kcg_use_BaliseTelegramHeader_int_T_TM
#ifndef kcg_comp_BaliseTelegramHeader_int_T_TM
extern kcg_bool kcg_comp_BaliseTelegramHeader_int_T_TM(
  BaliseTelegramHeader_int_T_TM *kcg_c1,
  BaliseTelegramHeader_int_T_TM *kcg_c2);
#endif /* kcg_comp_BaliseTelegramHeader_int_T_TM */
#endif /* kcg_use_BaliseTelegramHeader_int_T_TM */

#ifdef kcg_use_trainData_T_TIU_Types_Pkg
#ifndef kcg_comp_trainData_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_trainData_T_TIU_Types_Pkg(
  trainData_T_TIU_Types_Pkg *kcg_c1,
  trainData_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_trainData_T_TIU_Types_Pkg */
#endif /* kcg_use_trainData_T_TIU_Types_Pkg */

#ifdef kcg_use_struct_151014
#ifndef kcg_comp_struct_151014
extern kcg_bool kcg_comp_struct_151014(
  struct_151014 *kcg_c1,
  struct_151014 *kcg_c2);
#endif /* kcg_comp_struct_151014 */
#endif /* kcg_use_struct_151014 */

#ifdef kcg_use_TelegramHeader_T_BG_Types_Pkg
#ifndef kcg_comp_TelegramHeader_T_BG_Types_Pkg
extern kcg_bool kcg_comp_TelegramHeader_T_BG_Types_Pkg(
  TelegramHeader_T_BG_Types_Pkg *kcg_c1,
  TelegramHeader_T_BG_Types_Pkg *kcg_c2);
#endif /* kcg_comp_TelegramHeader_T_BG_Types_Pkg */
#endif /* kcg_use_TelegramHeader_T_BG_Types_Pkg */

#ifdef kcg_use_PosData_T
#ifndef kcg_comp_PosData_T
extern kcg_bool kcg_comp_PosData_T(PosData_T *kcg_c1, PosData_T *kcg_c2);
#endif /* kcg_comp_PosData_T */
#endif /* kcg_use_PosData_T */

#ifdef kcg_use_TrainData_T
#ifndef kcg_comp_TrainData_T
extern kcg_bool kcg_comp_TrainData_T(TrainData_T *kcg_c1, TrainData_T *kcg_c2);
#endif /* kcg_comp_TrainData_T */
#endif /* kcg_use_TrainData_T */

#ifdef kcg_use_Radio_TrackTrain_Header_T_TM
#ifndef kcg_comp_Radio_TrackTrain_Header_T_TM
extern kcg_bool kcg_comp_Radio_TrackTrain_Header_T_TM(
  Radio_TrackTrain_Header_T_TM *kcg_c1,
  Radio_TrackTrain_Header_T_TM *kcg_c2);
#endif /* kcg_comp_Radio_TrackTrain_Header_T_TM */
#endif /* kcg_use_Radio_TrackTrain_Header_T_TM */

#ifdef kcg_use_MAReqParams_T
#ifndef kcg_comp_MAReqParams_T
extern kcg_bool kcg_comp_MAReqParams_T(
  MAReqParams_T *kcg_c1,
  MAReqParams_T *kcg_c2);
#endif /* kcg_comp_MAReqParams_T */
#endif /* kcg_use_MAReqParams_T */

#ifdef kcg_use_sNID_RADIO_T_Packet_TrainTypes_Pkg
#ifndef kcg_comp_sNID_RADIO_T_Packet_TrainTypes_Pkg
extern kcg_bool kcg_comp_sNID_RADIO_T_Packet_TrainTypes_Pkg(
  sNID_RADIO_T_Packet_TrainTypes_Pkg *kcg_c1,
  sNID_RADIO_T_Packet_TrainTypes_Pkg *kcg_c2);
#endif /* kcg_comp_sNID_RADIO_T_Packet_TrainTypes_Pkg */
#endif /* kcg_use_sNID_RADIO_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_P041_section_int_T_TM
#ifndef kcg_comp_P041_section_int_T_TM
extern kcg_bool kcg_comp_P041_section_int_T_TM(
  P041_section_int_T_TM *kcg_c1,
  P041_section_int_T_TM *kcg_c2);
#endif /* kcg_comp_P041_section_int_T_TM */
#endif /* kcg_use_P041_section_int_T_TM */

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

#ifdef kcg_use_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg
#ifndef kcg_comp_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg(
  Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg *kcg_c1,
  Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg */
#endif /* kcg_use_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg */

#ifdef kcg_use_M_033_T_TM_radio_messages
#ifndef kcg_comp_M_033_T_TM_radio_messages
extern kcg_bool kcg_comp_M_033_T_TM_radio_messages(
  M_033_T_TM_radio_messages *kcg_c1,
  M_033_T_TM_radio_messages *kcg_c2);
#endif /* kcg_comp_M_033_T_TM_radio_messages */
#endif /* kcg_use_M_033_T_TM_radio_messages */

#ifdef kcg_use_M_002_T_TM_radio_messages
#ifndef kcg_comp_M_002_T_TM_radio_messages
extern kcg_bool kcg_comp_M_002_T_TM_radio_messages(
  M_002_T_TM_radio_messages *kcg_c1,
  M_002_T_TM_radio_messages *kcg_c2);
#endif /* kcg_comp_M_002_T_TM_radio_messages */
#endif /* kcg_use_M_002_T_TM_radio_messages */

#ifdef kcg_use_M_008_T_TM_radio_messages
#ifndef kcg_comp_M_008_T_TM_radio_messages
extern kcg_bool kcg_comp_M_008_T_TM_radio_messages(
  M_008_T_TM_radio_messages *kcg_c1,
  M_008_T_TM_radio_messages *kcg_c2);
#endif /* kcg_comp_M_008_T_TM_radio_messages */
#endif /* kcg_use_M_008_T_TM_radio_messages */

#ifdef kcg_use_struct_151363
#ifndef kcg_comp_struct_151363
extern kcg_bool kcg_comp_struct_151363(
  struct_151363 *kcg_c1,
  struct_151363 *kcg_c2);
#endif /* kcg_comp_struct_151363 */
#endif /* kcg_use_struct_151363 */

#ifdef kcg_use_struct_151390
#ifndef kcg_comp_struct_151390
extern kcg_bool kcg_comp_struct_151390(
  struct_151390 *kcg_c1,
  struct_151390 *kcg_c2);
#endif /* kcg_comp_struct_151390 */
#endif /* kcg_use_struct_151390 */

#ifdef kcg_use_M_008_int_T_TM_radio_messages
#ifndef kcg_comp_M_008_int_T_TM_radio_messages
extern kcg_bool kcg_comp_M_008_int_T_TM_radio_messages(
  M_008_int_T_TM_radio_messages *kcg_c1,
  M_008_int_T_TM_radio_messages *kcg_c2);
#endif /* kcg_comp_M_008_int_T_TM_radio_messages */
#endif /* kcg_use_M_008_int_T_TM_radio_messages */

#ifdef kcg_use_M_032_int_T_TM_radio_messages
#ifndef kcg_comp_M_032_int_T_TM_radio_messages
extern kcg_bool kcg_comp_M_032_int_T_TM_radio_messages(
  M_032_int_T_TM_radio_messages *kcg_c1,
  M_032_int_T_TM_radio_messages *kcg_c2);
#endif /* kcg_comp_M_032_int_T_TM_radio_messages */
#endif /* kcg_use_M_032_int_T_TM_radio_messages */

#ifdef kcg_use_P046_trackside_int_T_TM
#ifndef kcg_comp_P046_trackside_int_T_TM
extern kcg_bool kcg_comp_P046_trackside_int_T_TM(
  P046_trackside_int_T_TM *kcg_c1,
  P046_trackside_int_T_TM *kcg_c2);
#endif /* kcg_comp_P046_trackside_int_T_TM */
#endif /* kcg_use_P046_trackside_int_T_TM */

#ifdef kcg_use_P057_trackside_int_T_TM
#ifndef kcg_comp_P057_trackside_int_T_TM
extern kcg_bool kcg_comp_P057_trackside_int_T_TM(
  P057_trackside_int_T_TM *kcg_c1,
  P057_trackside_int_T_TM *kcg_c2);
#endif /* kcg_comp_P057_trackside_int_T_TM */
#endif /* kcg_use_P057_trackside_int_T_TM */

#ifdef kcg_use_P042_trackside_int_T_TM
#ifndef kcg_comp_P042_trackside_int_T_TM
extern kcg_bool kcg_comp_P042_trackside_int_T_TM(
  P042_trackside_int_T_TM *kcg_c1,
  P042_trackside_int_T_TM *kcg_c2);
#endif /* kcg_comp_P042_trackside_int_T_TM */
#endif /* kcg_use_P042_trackside_int_T_TM */

#ifdef kcg_use_P005_section_int_T_TM
#ifndef kcg_comp_P005_section_int_T_TM
extern kcg_bool kcg_comp_P005_section_int_T_TM(
  P005_section_int_T_TM *kcg_c1,
  P005_section_int_T_TM *kcg_c2);
#endif /* kcg_comp_P005_section_int_T_TM */
#endif /* kcg_use_P005_section_int_T_TM */

#ifdef kcg_use_Radio_TrainTrack_Header_T_Radio_Types_Pkg
#ifndef kcg_comp_Radio_TrainTrack_Header_T_Radio_Types_Pkg
extern kcg_bool kcg_comp_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
  Radio_TrainTrack_Header_T_Radio_Types_Pkg *kcg_c1,
  Radio_TrainTrack_Header_T_Radio_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Radio_TrainTrack_Header_T_Radio_Types_Pkg */
#endif /* kcg_use_Radio_TrainTrack_Header_T_Radio_Types_Pkg */

#ifdef kcg_use_Mode_control_and_train_status_T_TIU_Types_Pkg
#ifndef kcg_comp_Mode_control_and_train_status_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_Mode_control_and_train_status_T_TIU_Types_Pkg(
  Mode_control_and_train_status_T_TIU_Types_Pkg *kcg_c1,
  Mode_control_and_train_status_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Mode_control_and_train_status_T_TIU_Types_Pkg */
#endif /* kcg_use_Mode_control_and_train_status_T_TIU_Types_Pkg */

#ifdef kcg_use_RadioMetadata_T_Common_Types_Pkg
#ifndef kcg_comp_RadioMetadata_T_Common_Types_Pkg
extern kcg_bool kcg_comp_RadioMetadata_T_Common_Types_Pkg(
  RadioMetadata_T_Common_Types_Pkg *kcg_c1,
  RadioMetadata_T_Common_Types_Pkg *kcg_c2);
#endif /* kcg_comp_RadioMetadata_T_Common_Types_Pkg */
#endif /* kcg_use_RadioMetadata_T_Common_Types_Pkg */

#ifdef kcg_use_M_TrainTrack_MessageHd_T_TM_radio_messages
#ifndef kcg_comp_M_TrainTrack_MessageHd_T_TM_radio_messages
extern kcg_bool kcg_comp_M_TrainTrack_MessageHd_T_TM_radio_messages(
  M_TrainTrack_MessageHd_T_TM_radio_messages *kcg_c1,
  M_TrainTrack_MessageHd_T_TM_radio_messages *kcg_c2);
#endif /* kcg_comp_M_TrainTrack_MessageHd_T_TM_radio_messages */
#endif /* kcg_use_M_TrainTrack_MessageHd_T_TM_radio_messages */

#ifdef kcg_use_NationalParams_T
#ifndef kcg_comp_NationalParams_T
extern kcg_bool kcg_comp_NationalParams_T(
  NationalParams_T *kcg_c1,
  NationalParams_T *kcg_c2);
#endif /* kcg_comp_NationalParams_T */
#endif /* kcg_use_NationalParams_T */

#ifdef kcg_use_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg
#ifndef kcg_comp_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg
extern kcg_bool kcg_comp_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg(
  PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg *kcg_c1,
  PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg *kcg_c2);
#endif /* kcg_comp_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg */
#endif /* kcg_use_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_M_032_T_TM_radio_messages
#ifndef kcg_comp_M_032_T_TM_radio_messages
extern kcg_bool kcg_comp_M_032_T_TM_radio_messages(
  M_032_T_TM_radio_messages *kcg_c1,
  M_032_T_TM_radio_messages *kcg_c2);
#endif /* kcg_comp_M_032_T_TM_radio_messages */
#endif /* kcg_use_M_032_T_TM_radio_messages */

#ifdef kcg_use_M_045_T_TM_radio_messages
#ifndef kcg_comp_M_045_T_TM_radio_messages
extern kcg_bool kcg_comp_M_045_T_TM_radio_messages(
  M_045_T_TM_radio_messages *kcg_c1,
  M_045_T_TM_radio_messages *kcg_c2);
#endif /* kcg_comp_M_045_T_TM_radio_messages */
#endif /* kcg_use_M_045_T_TM_radio_messages */

#ifdef kcg_use_odometry_T_Obu_BasicTypes_Pkg
#ifndef kcg_comp_odometry_T_Obu_BasicTypes_Pkg
extern kcg_bool kcg_comp_odometry_T_Obu_BasicTypes_Pkg(
  odometry_T_Obu_BasicTypes_Pkg *kcg_c1,
  odometry_T_Obu_BasicTypes_Pkg *kcg_c2);
#endif /* kcg_comp_odometry_T_Obu_BasicTypes_Pkg */
#endif /* kcg_use_odometry_T_Obu_BasicTypes_Pkg */

#ifdef kcg_use_Brake_status_T_TIU_Types_Pkg
#ifndef kcg_comp_Brake_status_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_Brake_status_T_TIU_Types_Pkg(
  Brake_status_T_TIU_Types_Pkg *kcg_c1,
  Brake_status_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Brake_status_T_TIU_Types_Pkg */
#endif /* kcg_use_Brake_status_T_TIU_Types_Pkg */

#ifdef kcg_use_outPackets_T_Common_Types_Pkg
#ifndef kcg_comp_outPackets_T_Common_Types_Pkg
extern kcg_bool kcg_comp_outPackets_T_Common_Types_Pkg(
  outPackets_T_Common_Types_Pkg *kcg_c1,
  outPackets_T_Common_Types_Pkg *kcg_c2);
#endif /* kcg_comp_outPackets_T_Common_Types_Pkg */
#endif /* kcg_use_outPackets_T_Common_Types_Pkg */

#ifdef kcg_use_Message_EVC_to_Train_Interface_T_TIU_Types_Pkg
#ifndef kcg_comp_Message_EVC_to_Train_Interface_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_Message_EVC_to_Train_Interface_T_TIU_Types_Pkg(
  Message_EVC_to_Train_Interface_T_TIU_Types_Pkg *kcg_c1,
  Message_EVC_to_Train_Interface_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Message_EVC_to_Train_Interface_T_TIU_Types_Pkg */
#endif /* kcg_use_Message_EVC_to_Train_Interface_T_TIU_Types_Pkg */

#ifdef kcg_use_PosRepParams_T
#ifndef kcg_comp_PosRepParams_T
extern kcg_bool kcg_comp_PosRepParams_T(
  PosRepParams_T *kcg_c1,
  PosRepParams_T *kcg_c2);
#endif /* kcg_comp_PosRepParams_T */
#endif /* kcg_use_PosRepParams_T */

#ifdef kcg_use_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg
#ifndef kcg_comp_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg
extern kcg_bool kcg_comp_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(
  PT4_ErrorReporting_T_Packet_TrainTypes_Pkg *kcg_c1,
  PT4_ErrorReporting_T_Packet_TrainTypes_Pkg *kcg_c2);
#endif /* kcg_comp_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg */
#endif /* kcg_use_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_RBC_Id_T_Common_Types_Pkg
#ifndef kcg_comp_RBC_Id_T_Common_Types_Pkg
extern kcg_bool kcg_comp_RBC_Id_T_Common_Types_Pkg(
  RBC_Id_T_Common_Types_Pkg *kcg_c1,
  RBC_Id_T_Common_Types_Pkg *kcg_c2);
#endif /* kcg_comp_RBC_Id_T_Common_Types_Pkg */
#endif /* kcg_use_RBC_Id_T_Common_Types_Pkg */

#ifdef kcg_use_M_current_T_TIU_Types_Pkg
#ifndef kcg_comp_M_current_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_M_current_T_TIU_Types_Pkg(
  M_current_T_TIU_Types_Pkg *kcg_c1,
  M_current_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_M_current_T_TIU_Types_Pkg */
#endif /* kcg_use_M_current_T_TIU_Types_Pkg */

#ifdef kcg_use_centerOfBalisePosition_T_BG_Types_Pkg
#ifndef kcg_comp_centerOfBalisePosition_T_BG_Types_Pkg
extern kcg_bool kcg_comp_centerOfBalisePosition_T_BG_Types_Pkg(
  centerOfBalisePosition_T_BG_Types_Pkg *kcg_c1,
  centerOfBalisePosition_T_BG_Types_Pkg *kcg_c2);
#endif /* kcg_comp_centerOfBalisePosition_T_BG_Types_Pkg */
#endif /* kcg_use_centerOfBalisePosition_T_BG_Types_Pkg */

#ifdef kcg_use_MetadataElement_T_Common_Types_Pkg
#ifndef kcg_comp_MetadataElement_T_Common_Types_Pkg
extern kcg_bool kcg_comp_MetadataElement_T_Common_Types_Pkg(
  MetadataElement_T_Common_Types_Pkg *kcg_c1,
  MetadataElement_T_Common_Types_Pkg *kcg_c2);
#endif /* kcg_comp_MetadataElement_T_Common_Types_Pkg */
#endif /* kcg_use_MetadataElement_T_Common_Types_Pkg */

#ifdef kcg_use_P046_OBU_sectionlist_int_T_TM
#ifndef kcg_comp_P046_OBU_sectionlist_int_T_TM
extern kcg_bool kcg_comp_P046_OBU_sectionlist_int_T_TM(
  P046_OBU_sectionlist_int_T_TM *kcg_c1,
  P046_OBU_sectionlist_int_T_TM *kcg_c2);
#endif /* kcg_comp_P046_OBU_sectionlist_int_T_TM */
#endif /* kcg_use_P046_OBU_sectionlist_int_T_TM */

#ifdef kcg_use_P041_OBU_sectionlist_int_T_TM
#ifndef kcg_comp_P041_OBU_sectionlist_int_T_TM
extern kcg_bool kcg_comp_P041_OBU_sectionlist_int_T_TM(
  P041_OBU_sectionlist_int_T_TM *kcg_c1,
  P041_OBU_sectionlist_int_T_TM *kcg_c2);
#endif /* kcg_comp_P041_OBU_sectionlist_int_T_TM */
#endif /* kcg_use_P041_OBU_sectionlist_int_T_TM */

#ifdef kcg_use_P021_OBU_sectionlist_int_T_TM
#ifndef kcg_comp_P021_OBU_sectionlist_int_T_TM
extern kcg_bool kcg_comp_P021_OBU_sectionlist_int_T_TM(
  P021_OBU_sectionlist_int_T_TM *kcg_c1,
  P021_OBU_sectionlist_int_T_TM *kcg_c2);
#endif /* kcg_comp_P021_OBU_sectionlist_int_T_TM */
#endif /* kcg_use_P021_OBU_sectionlist_int_T_TM */

#ifdef kcg_use_array_int32_56
#ifndef kcg_comp_array_int32_56
extern kcg_bool kcg_comp_array_int32_56(
  array_int32_56 *kcg_c1,
  array_int32_56 *kcg_c2);
#endif /* kcg_comp_array_int32_56 */
#endif /* kcg_use_array_int32_56 */

#ifdef kcg_use_array_int32_9
#ifndef kcg_comp_array_int32_9
extern kcg_bool kcg_comp_array_int32_9(
  array_int32_9 *kcg_c1,
  array_int32_9 *kcg_c2);
#endif /* kcg_comp_array_int32_9 */
#endif /* kcg_use_array_int32_9 */

#ifdef kcg_use_array_int32_6
#ifndef kcg_comp_array_int32_6
extern kcg_bool kcg_comp_array_int32_6(
  array_int32_6 *kcg_c1,
  array_int32_6 *kcg_c2);
#endif /* kcg_comp_array_int32_6 */
#endif /* kcg_use_array_int32_6 */

#ifdef kcg_use_array_int32_70
#ifndef kcg_comp_array_int32_70
extern kcg_bool kcg_comp_array_int32_70(
  array_int32_70 *kcg_c1,
  array_int32_70 *kcg_c2);
#endif /* kcg_comp_array_int32_70 */
#endif /* kcg_use_array_int32_70 */

#ifdef kcg_use_array_int32_2_32_64
#ifndef kcg_comp_array_int32_2_32_64
extern kcg_bool kcg_comp_array_int32_2_32_64(
  array_int32_2_32_64 *kcg_c1,
  array_int32_2_32_64 *kcg_c2);
#endif /* kcg_comp_array_int32_2_32_64 */
#endif /* kcg_use_array_int32_2_32_64 */

#ifdef kcg_use_array_int32_2_32
#ifndef kcg_comp_array_int32_2_32
extern kcg_bool kcg_comp_array_int32_2_32(
  array_int32_2_32 *kcg_c1,
  array_int32_2_32 *kcg_c2);
#endif /* kcg_comp_array_int32_2_32 */
#endif /* kcg_use_array_int32_2_32 */

#ifdef kcg_use_P027V1_trackside_sectionlist_T_TM_baseline2
#ifndef kcg_comp_P027V1_trackside_sectionlist_T_TM_baseline2
extern kcg_bool kcg_comp_P027V1_trackside_sectionlist_T_TM_baseline2(
  P027V1_trackside_sectionlist_T_TM_baseline2 *kcg_c1,
  P027V1_trackside_sectionlist_T_TM_baseline2 *kcg_c2);
#endif /* kcg_comp_P027V1_trackside_sectionlist_T_TM_baseline2 */
#endif /* kcg_use_P027V1_trackside_sectionlist_T_TM_baseline2 */

#ifdef kcg_use_P005_trackide_sectionlist_T_TM
#ifndef kcg_comp_P005_trackide_sectionlist_T_TM
extern kcg_bool kcg_comp_P005_trackide_sectionlist_T_TM(
  P005_trackide_sectionlist_T_TM *kcg_c1,
  P005_trackide_sectionlist_T_TM *kcg_c2);
#endif /* kcg_comp_P005_trackide_sectionlist_T_TM */
#endif /* kcg_use_P005_trackide_sectionlist_T_TM */

#ifdef kcg_use_array_int32_99
#ifndef kcg_comp_array_int32_99
extern kcg_bool kcg_comp_array_int32_99(
  array_int32_99 *kcg_c1,
  array_int32_99 *kcg_c2);
#endif /* kcg_comp_array_int32_99 */
#endif /* kcg_use_array_int32_99 */

#ifdef kcg_use_array_int32_3_33_231
#ifndef kcg_comp_array_int32_3_33_231
extern kcg_bool kcg_comp_array_int32_3_33_231(
  array_int32_3_33_231 *kcg_c1,
  array_int32_3_33_231 *kcg_c2);
#endif /* kcg_comp_array_int32_3_33_231 */
#endif /* kcg_use_array_int32_3_33_231 */

#ifdef kcg_use_array_int32_7_33_231
#ifndef kcg_comp_array_int32_7_33_231
extern kcg_bool kcg_comp_array_int32_7_33_231(
  array_int32_7_33_231 *kcg_c1,
  array_int32_7_33_231 *kcg_c2);
#endif /* kcg_comp_array_int32_7_33_231 */
#endif /* kcg_use_array_int32_7_33_231 */

#ifdef kcg_use_P015_sections_array_flat_T_TM
#ifndef kcg_comp_P015_sections_array_flat_T_TM
extern kcg_bool kcg_comp_P015_sections_array_flat_T_TM(
  P015_sections_array_flat_T_TM *kcg_c1,
  P015_sections_array_flat_T_TM *kcg_c2);
#endif /* kcg_comp_P015_sections_array_flat_T_TM */
#endif /* kcg_use_P015_sections_array_flat_T_TM */

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

#ifdef kcg_use_array_int32_496
#ifndef kcg_comp_array_int32_496
extern kcg_bool kcg_comp_array_int32_496(
  array_int32_496 *kcg_c1,
  array_int32_496 *kcg_c2);
#endif /* kcg_comp_array_int32_496 */
#endif /* kcg_use_array_int32_496 */

#ifdef kcg_use_array
#ifndef kcg_comp_array
extern kcg_bool kcg_comp_array(array *kcg_c1, array *kcg_c2);
#endif /* kcg_comp_array */
#endif /* kcg_use_array */

#ifdef kcg_use_P046_sections_array_flat_T_TM
#ifndef kcg_comp_P046_sections_array_flat_T_TM
extern kcg_bool kcg_comp_P046_sections_array_flat_T_TM(
  P046_sections_array_flat_T_TM *kcg_c1,
  P046_sections_array_flat_T_TM *kcg_c2);
#endif /* kcg_comp_P046_sections_array_flat_T_TM */
#endif /* kcg_use_P046_sections_array_flat_T_TM */

#ifdef kcg_use__18_array
#ifndef kcg_comp__18_array
extern kcg_bool kcg_comp__18_array(_18_array *kcg_c1, _18_array *kcg_c2);
#endif /* kcg_comp__18_array */
#endif /* kcg_use__18_array */

#ifdef kcg_use_array_int32_22
#ifndef kcg_comp_array_int32_22
extern kcg_bool kcg_comp_array_int32_22(
  array_int32_22 *kcg_c1,
  array_int32_22 *kcg_c2);
#endif /* kcg_comp_array_int32_22 */
#endif /* kcg_use_array_int32_22 */

#ifdef kcg_use_array_int32_2_32_32
#ifndef kcg_comp_array_int32_2_32_32
extern kcg_bool kcg_comp_array_int32_2_32_32(
  array_int32_2_32_32 *kcg_c1,
  array_int32_2_32_32 *kcg_c2);
#endif /* kcg_comp_array_int32_2_32_32 */
#endif /* kcg_use_array_int32_2_32_32 */

#ifdef kcg_use_P046_trackide_sectionlist_T_TM
#ifndef kcg_comp_P046_trackide_sectionlist_T_TM
extern kcg_bool kcg_comp_P046_trackide_sectionlist_T_TM(
  P046_trackide_sectionlist_T_TM *kcg_c1,
  P046_trackide_sectionlist_T_TM *kcg_c2);
#endif /* kcg_comp_P046_trackide_sectionlist_T_TM */
#endif /* kcg_use_P046_trackide_sectionlist_T_TM */

#ifdef kcg_use_P041_trackide_sectionlist_T_TM
#ifndef kcg_comp_P041_trackide_sectionlist_T_TM
extern kcg_bool kcg_comp_P041_trackide_sectionlist_T_TM(
  P041_trackide_sectionlist_T_TM *kcg_c1,
  P041_trackide_sectionlist_T_TM *kcg_c2);
#endif /* kcg_comp_P041_trackide_sectionlist_T_TM */
#endif /* kcg_use_P041_trackide_sectionlist_T_TM */

#ifdef kcg_use__19_array
#ifndef kcg_comp__19_array
extern kcg_bool kcg_comp__19_array(_19_array *kcg_c1, _19_array *kcg_c2);
#endif /* kcg_comp__19_array */
#endif /* kcg_use__19_array */

#ifdef kcg_use_P021_trackide_sectionlist_T_TM
#ifndef kcg_comp_P021_trackide_sectionlist_T_TM
extern kcg_bool kcg_comp_P021_trackide_sectionlist_T_TM(
  P021_trackide_sectionlist_T_TM *kcg_c1,
  P021_trackide_sectionlist_T_TM *kcg_c2);
#endif /* kcg_comp_P021_trackide_sectionlist_T_TM */
#endif /* kcg_use_P021_trackide_sectionlist_T_TM */

#ifdef kcg_use__20_array
#ifndef kcg_comp__20_array
extern kcg_bool kcg_comp__20_array(_20_array *kcg_c1, _20_array *kcg_c2);
#endif /* kcg_comp__20_array */
#endif /* kcg_use__20_array */

#ifdef kcg_use__21_array
#ifndef kcg_comp__21_array
extern kcg_bool kcg_comp__21_array(_21_array *kcg_c1, _21_array *kcg_c2);
#endif /* kcg_comp__21_array */
#endif /* kcg_use__21_array */

#ifdef kcg_use_P005_sections_array_flat_T_TM
#ifndef kcg_comp_P005_sections_array_flat_T_TM
extern kcg_bool kcg_comp_P005_sections_array_flat_T_TM(
  P005_sections_array_flat_T_TM *kcg_c1,
  P005_sections_array_flat_T_TM *kcg_c2);
#endif /* kcg_comp_P005_sections_array_flat_T_TM */
#endif /* kcg_use_P005_sections_array_flat_T_TM */

#ifdef kcg_use__22_array
#ifndef kcg_comp__22_array
extern kcg_bool kcg_comp__22_array(_22_array *kcg_c1, _22_array *kcg_c2);
#endif /* kcg_comp__22_array */
#endif /* kcg_use__22_array */

#ifdef kcg_use_P015_section_array_T_TM
#ifndef kcg_comp_P015_section_array_T_TM
extern kcg_bool kcg_comp_P015_section_array_T_TM(
  P015_section_array_T_TM *kcg_c1,
  P015_section_array_T_TM *kcg_c2);
#endif /* kcg_comp_P015_section_array_T_TM */
#endif /* kcg_use_P015_section_array_T_TM */

#ifdef kcg_use_P015_OBU_sectionlist_array_T_TM
#ifndef kcg_comp_P015_OBU_sectionlist_array_T_TM
extern kcg_bool kcg_comp_P015_OBU_sectionlist_array_T_TM(
  P015_OBU_sectionlist_array_T_TM *kcg_c1,
  P015_OBU_sectionlist_array_T_TM *kcg_c2);
#endif /* kcg_comp_P015_OBU_sectionlist_array_T_TM */
#endif /* kcg_use_P015_OBU_sectionlist_array_T_TM */

#ifdef kcg_use_array_int32_33
#ifndef kcg_comp_array_int32_33
extern kcg_bool kcg_comp_array_int32_33(
  array_int32_33 *kcg_c1,
  array_int32_33 *kcg_c2);
#endif /* kcg_comp_array_int32_33 */
#endif /* kcg_use_array_int32_33 */

#ifdef kcg_use_P005_OBU_sectionlist_array_T_TM
#ifndef kcg_comp_P005_OBU_sectionlist_array_T_TM
extern kcg_bool kcg_comp_P005_OBU_sectionlist_array_T_TM(
  P005_OBU_sectionlist_array_T_TM *kcg_c1,
  P005_OBU_sectionlist_array_T_TM *kcg_c2);
#endif /* kcg_comp_P005_OBU_sectionlist_array_T_TM */
#endif /* kcg_use_P005_OBU_sectionlist_array_T_TM */

#ifdef kcg_use_array_int32_492
#ifndef kcg_comp_array_int32_492
extern kcg_bool kcg_comp_array_int32_492(
  array_int32_492 *kcg_c1,
  array_int32_492 *kcg_c2);
#endif /* kcg_comp_array_int32_492 */
#endif /* kcg_use_array_int32_492 */

#ifdef kcg_use_array_int32_18
#ifndef kcg_comp_array_int32_18
extern kcg_bool kcg_comp_array_int32_18(
  array_int32_18 *kcg_c1,
  array_int32_18 *kcg_c2);
#endif /* kcg_comp_array_int32_18 */
#endif /* kcg_use_array_int32_18 */

#ifdef kcg_use_M_TrainTrack_compressed_packets_T_TM_radio_messages
#ifndef kcg_comp_M_TrainTrack_compressed_packets_T_TM_radio_messages
extern kcg_bool kcg_comp_M_TrainTrack_compressed_packets_T_TM_radio_messages(
  M_TrainTrack_compressed_packets_T_TM_radio_messages *kcg_c1,
  M_TrainTrack_compressed_packets_T_TM_radio_messages *kcg_c2);
#endif /* kcg_comp_M_TrainTrack_compressed_packets_T_TM_radio_messages */
#endif /* kcg_use_M_TrainTrack_compressed_packets_T_TM_radio_messages */

#ifdef kcg_use_array_int32_3
#ifndef kcg_comp_array_int32_3
extern kcg_bool kcg_comp_array_int32_3(
  array_int32_3 *kcg_c1,
  array_int32_3 *kcg_c2);
#endif /* kcg_comp_array_int32_3 */
#endif /* kcg_use_array_int32_3 */

#ifdef kcg_use_array_int32_430
#ifndef kcg_comp_array_int32_430
extern kcg_bool kcg_comp_array_int32_430(
  array_int32_430 *kcg_c1,
  array_int32_430 *kcg_c2);
#endif /* kcg_comp_array_int32_430 */
#endif /* kcg_use_array_int32_430 */

#ifdef kcg_use_array_int32_500_500
#ifndef kcg_comp_array_int32_500_500
extern kcg_bool kcg_comp_array_int32_500_500(
  array_int32_500_500 *kcg_c1,
  array_int32_500_500 *kcg_c2);
#endif /* kcg_comp_array_int32_500_500 */
#endif /* kcg_use_array_int32_500_500 */

#ifdef kcg_use_P003V1_trackide_sectionlist_T_TM_baseline2
#ifndef kcg_comp_P003V1_trackide_sectionlist_T_TM_baseline2
extern kcg_bool kcg_comp_P003V1_trackide_sectionlist_T_TM_baseline2(
  P003V1_trackide_sectionlist_T_TM_baseline2 *kcg_c1,
  P003V1_trackide_sectionlist_T_TM_baseline2 *kcg_c2);
#endif /* kcg_comp_P003V1_trackide_sectionlist_T_TM_baseline2 */
#endif /* kcg_use_P003V1_trackide_sectionlist_T_TM_baseline2 */

#ifdef kcg_use_P005_OBU_sectionlist_int_T_TM
#ifndef kcg_comp_P005_OBU_sectionlist_int_T_TM
extern kcg_bool kcg_comp_P005_OBU_sectionlist_int_T_TM(
  P005_OBU_sectionlist_int_T_TM *kcg_c1,
  P005_OBU_sectionlist_int_T_TM *kcg_c2);
#endif /* kcg_comp_P005_OBU_sectionlist_int_T_TM */
#endif /* kcg_use_P005_OBU_sectionlist_int_T_TM */

#ifdef kcg_use_P027V1_OBU_sectionlist_int_T_TM_baseline2
#ifndef kcg_comp_P027V1_OBU_sectionlist_int_T_TM_baseline2
extern kcg_bool kcg_comp_P027V1_OBU_sectionlist_int_T_TM_baseline2(
  P027V1_OBU_sectionlist_int_T_TM_baseline2 *kcg_c1,
  P027V1_OBU_sectionlist_int_T_TM_baseline2 *kcg_c2);
#endif /* kcg_comp_P027V1_OBU_sectionlist_int_T_TM_baseline2 */
#endif /* kcg_use_P027V1_OBU_sectionlist_int_T_TM_baseline2 */

#ifdef kcg_use_array_int32_494
#ifndef kcg_comp_array_int32_494
extern kcg_bool kcg_comp_array_int32_494(
  array_int32_494 *kcg_c1,
  array_int32_494 *kcg_c2);
#endif /* kcg_comp_array_int32_494 */
#endif /* kcg_use_array_int32_494 */

#ifdef kcg_use_array_int32_64
#ifndef kcg_comp_array_int32_64
extern kcg_bool kcg_comp_array_int32_64(
  array_int32_64 *kcg_c1,
  array_int32_64 *kcg_c2);
#endif /* kcg_comp_array_int32_64 */
#endif /* kcg_use_array_int32_64 */

#ifdef kcg_use_array_int32_491
#ifndef kcg_comp_array_int32_491
extern kcg_bool kcg_comp_array_int32_491(
  array_int32_491 *kcg_c1,
  array_int32_491 *kcg_c2);
#endif /* kcg_comp_array_int32_491 */
#endif /* kcg_use_array_int32_491 */

#ifdef kcg_use_array_int32_17
#ifndef kcg_comp_array_int32_17
extern kcg_bool kcg_comp_array_int32_17(
  array_int32_17 *kcg_c1,
  array_int32_17 *kcg_c2);
#endif /* kcg_comp_array_int32_17 */
#endif /* kcg_use_array_int32_17 */

#ifdef kcg_use_array_int32_4_32_128
#ifndef kcg_comp_array_int32_4_32_128
extern kcg_bool kcg_comp_array_int32_4_32_128(
  array_int32_4_32_128 *kcg_c1,
  array_int32_4_32_128 *kcg_c2);
#endif /* kcg_comp_array_int32_4_32_128 */
#endif /* kcg_use_array_int32_4_32_128 */

#ifdef kcg_use_array_int32_444
#ifndef kcg_comp_array_int32_444
extern kcg_bool kcg_comp_array_int32_444(
  array_int32_444 *kcg_c1,
  array_int32_444 *kcg_c2);
#endif /* kcg_comp_array_int32_444 */
#endif /* kcg_use_array_int32_444 */

#ifdef kcg_use_array_int32_400
#ifndef kcg_comp_array_int32_400
extern kcg_bool kcg_comp_array_int32_400(
  array_int32_400 *kcg_c1,
  array_int32_400 *kcg_c2);
#endif /* kcg_comp_array_int32_400 */
#endif /* kcg_use_array_int32_400 */

#ifdef kcg_use_Metadata_T_Common_Types_Pkg
#ifndef kcg_comp_Metadata_T_Common_Types_Pkg
extern kcg_bool kcg_comp_Metadata_T_Common_Types_Pkg(
  Metadata_T_Common_Types_Pkg *kcg_c1,
  Metadata_T_Common_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Metadata_T_Common_Types_Pkg */
#endif /* kcg_use_Metadata_T_Common_Types_Pkg */

#ifdef kcg_use__23_array
#ifndef kcg_comp__23_array
extern kcg_bool kcg_comp__23_array(_23_array *kcg_c1, _23_array *kcg_c2);
#endif /* kcg_comp__23_array */
#endif /* kcg_use__23_array */

#ifdef kcg_use_array_int32_432
#ifndef kcg_comp_array_int32_432
extern kcg_bool kcg_comp_array_int32_432(
  array_int32_432 *kcg_c1,
  array_int32_432 *kcg_c2);
#endif /* kcg_comp_array_int32_432 */
#endif /* kcg_use_array_int32_432 */

#ifdef kcg_use_array_int32_2
#ifndef kcg_comp_array_int32_2
extern kcg_bool kcg_comp_array_int32_2(
  array_int32_2 *kcg_c1,
  array_int32_2 *kcg_c2);
#endif /* kcg_comp_array_int32_2 */
#endif /* kcg_use_array_int32_2 */

#ifdef kcg_use__24_array
#ifndef kcg_comp__24_array
extern kcg_bool kcg_comp__24_array(_24_array *kcg_c1, _24_array *kcg_c2);
#endif /* kcg_comp__24_array */
#endif /* kcg_use__24_array */

#ifdef kcg_use_array_int32_396
#ifndef kcg_comp_array_int32_396
extern kcg_bool kcg_comp_array_int32_396(
  array_int32_396 *kcg_c1,
  array_int32_396 *kcg_c2);
#endif /* kcg_comp_array_int32_396 */
#endif /* kcg_use_array_int32_396 */

#ifdef kcg_use_array_int32_1
#ifndef kcg_comp_array_int32_1
extern kcg_bool kcg_comp_array_int32_1(
  array_int32_1 *kcg_c1,
  array_int32_1 *kcg_c2);
#endif /* kcg_comp_array_int32_1 */
#endif /* kcg_use_array_int32_1 */

#ifdef kcg_use_array_int32_428
#ifndef kcg_comp_array_int32_428
extern kcg_bool kcg_comp_array_int32_428(
  array_int32_428 *kcg_c1,
  array_int32_428 *kcg_c2);
#endif /* kcg_comp_array_int32_428 */
#endif /* kcg_use_array_int32_428 */

#ifdef kcg_use_array_bool_5
#ifndef kcg_comp_array_bool_5
extern kcg_bool kcg_comp_array_bool_5(
  array_bool_5 *kcg_c1,
  array_bool_5 *kcg_c2);
#endif /* kcg_comp_array_bool_5 */
#endif /* kcg_use_array_bool_5 */

#ifdef kcg_use_array_int32_150
#ifndef kcg_comp_array_int32_150
extern kcg_bool kcg_comp_array_int32_150(
  array_int32_150 *kcg_c1,
  array_int32_150 *kcg_c2);
#endif /* kcg_comp_array_int32_150 */
#endif /* kcg_use_array_int32_150 */

#ifdef kcg_use_telephoneNumber_T_Packet_TrainTypes_Pkg
#ifndef kcg_comp_telephoneNumber_T_Packet_TrainTypes_Pkg
extern kcg_bool kcg_comp_telephoneNumber_T_Packet_TrainTypes_Pkg(
  telephoneNumber_T_Packet_TrainTypes_Pkg *kcg_c1,
  telephoneNumber_T_Packet_TrainTypes_Pkg *kcg_c2);
#endif /* kcg_comp_telephoneNumber_T_Packet_TrainTypes_Pkg */
#endif /* kcg_use_telephoneNumber_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use__25_array
#ifndef kcg_comp__25_array
extern kcg_bool kcg_comp__25_array(_25_array *kcg_c1, _25_array *kcg_c2);
#endif /* kcg_comp__25_array */
#endif /* kcg_use__25_array */

#ifdef kcg_use_array_int32_395
#ifndef kcg_comp_array_int32_395
extern kcg_bool kcg_comp_array_int32_395(
  array_int32_395 *kcg_c1,
  array_int32_395 *kcg_c2);
#endif /* kcg_comp_array_int32_395 */
#endif /* kcg_use_array_int32_395 */

#ifdef kcg_use_array_int32_8_4
#ifndef kcg_comp_array_int32_8_4
extern kcg_bool kcg_comp_array_int32_8_4(
  array_int32_8_4 *kcg_c1,
  array_int32_8_4 *kcg_c2);
#endif /* kcg_comp_array_int32_8_4 */
#endif /* kcg_use_array_int32_8_4 */

#ifdef kcg_use_CompressedPacketData_T_Common_Types_Pkg
#ifndef kcg_comp_CompressedPacketData_T_Common_Types_Pkg
extern kcg_bool kcg_comp_CompressedPacketData_T_Common_Types_Pkg(
  CompressedPacketData_T_Common_Types_Pkg *kcg_c1,
  CompressedPacketData_T_Common_Types_Pkg *kcg_c2);
#endif /* kcg_comp_CompressedPacketData_T_Common_Types_Pkg */
#endif /* kcg_use_CompressedPacketData_T_Common_Types_Pkg */

#ifdef kcg_use_array_int32_105
#ifndef kcg_comp_array_int32_105
extern kcg_bool kcg_comp_array_int32_105(
  array_int32_105 *kcg_c1,
  array_int32_105 *kcg_c2);
#endif /* kcg_comp_array_int32_105 */
#endif /* kcg_use_array_int32_105 */

#ifdef kcg_use__26_array
#ifndef kcg_comp__26_array
extern kcg_bool kcg_comp__26_array(_26_array *kcg_c1, _26_array *kcg_c2);
#endif /* kcg_comp__26_array */
#endif /* kcg_use__26_array */

#ifdef kcg_use__27_array
#ifndef kcg_comp__27_array
extern kcg_bool kcg_comp__27_array(_27_array *kcg_c1, _27_array *kcg_c2);
#endif /* kcg_comp__27_array */
#endif /* kcg_use__27_array */

#ifdef kcg_use__28_array
#ifndef kcg_comp__28_array
extern kcg_bool kcg_comp__28_array(_28_array *kcg_c1, _28_array *kcg_c2);
#endif /* kcg_comp__28_array */
#endif /* kcg_use__28_array */

#ifdef kcg_use_P046_OBU_sectionlist_array_T_TM
#ifndef kcg_comp_P046_OBU_sectionlist_array_T_TM
extern kcg_bool kcg_comp_P046_OBU_sectionlist_array_T_TM(
  P046_OBU_sectionlist_array_T_TM *kcg_c1,
  P046_OBU_sectionlist_array_T_TM *kcg_c2);
#endif /* kcg_comp_P046_OBU_sectionlist_array_T_TM */
#endif /* kcg_use_P046_OBU_sectionlist_array_T_TM */

#ifdef kcg_use__29_array
#ifndef kcg_comp__29_array
extern kcg_bool kcg_comp__29_array(_29_array *kcg_c1, _29_array *kcg_c2);
#endif /* kcg_comp__29_array */
#endif /* kcg_use__29_array */

#ifdef kcg_use_Array11_TM_TrainToTrack
#ifndef kcg_comp_Array11_TM_TrainToTrack
extern kcg_bool kcg_comp_Array11_TM_TrainToTrack(
  Array11_TM_TrainToTrack *kcg_c1,
  Array11_TM_TrainToTrack *kcg_c2);
#endif /* kcg_comp_Array11_TM_TrainToTrack */
#endif /* kcg_use_Array11_TM_TrainToTrack */

#ifdef kcg_use_aNID_RADIO_T_Packet_TrainTypes_Pkg
#ifndef kcg_comp_aNID_RADIO_T_Packet_TrainTypes_Pkg
extern kcg_bool kcg_comp_aNID_RADIO_T_Packet_TrainTypes_Pkg(
  aNID_RADIO_T_Packet_TrainTypes_Pkg *kcg_c1,
  aNID_RADIO_T_Packet_TrainTypes_Pkg *kcg_c2);
#endif /* kcg_comp_aNID_RADIO_T_Packet_TrainTypes_Pkg */
#endif /* kcg_use_aNID_RADIO_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_array_int32_350
#ifndef kcg_comp_array_int32_350
extern kcg_bool kcg_comp_array_int32_350(
  array_int32_350 *kcg_c1,
  array_int32_350 *kcg_c2);
#endif /* kcg_comp_array_int32_350 */
#endif /* kcg_use_array_int32_350 */

#ifdef kcg_use_array_int32_2_33_99
#ifndef kcg_comp_array_int32_2_33_99
extern kcg_bool kcg_comp_array_int32_2_33_99(
  array_int32_2_33_99 *kcg_c1,
  array_int32_2_33_99 *kcg_c2);
#endif /* kcg_comp_array_int32_2_33_99 */
#endif /* kcg_use_array_int32_2_33_99 */

#ifdef kcg_use_array_int32_3_33_99
#ifndef kcg_comp_array_int32_3_33_99
extern kcg_bool kcg_comp_array_int32_3_33_99(
  array_int32_3_33_99 *kcg_c1,
  array_int32_3_33_99 *kcg_c2);
#endif /* kcg_comp_array_int32_3_33_99 */
#endif /* kcg_use_array_int32_3_33_99 */

#ifdef kcg_use_array_int32_72
#ifndef kcg_comp_array_int32_72
extern kcg_bool kcg_comp_array_int32_72(
  array_int32_72 *kcg_c1,
  array_int32_72 *kcg_c2);
#endif /* kcg_comp_array_int32_72 */
#endif /* kcg_use_array_int32_72 */

#ifdef kcg_use_array_int32_499
#ifndef kcg_comp_array_int32_499
extern kcg_bool kcg_comp_array_int32_499(
  array_int32_499 *kcg_c1,
  array_int32_499 *kcg_c2);
#endif /* kcg_comp_array_int32_499 */
#endif /* kcg_use_array_int32_499 */

#ifdef kcg_use_array_int32_104
#ifndef kcg_comp_array_int32_104
extern kcg_bool kcg_comp_array_int32_104(
  array_int32_104 *kcg_c1,
  array_int32_104 *kcg_c2);
#endif /* kcg_comp_array_int32_104 */
#endif /* kcg_use_array_int32_104 */

#ifdef kcg_use_P011_TrainTrack_int_TM_TrainToTrack
#ifndef kcg_comp_P011_TrainTrack_int_TM_TrainToTrack
extern kcg_bool kcg_comp_P011_TrainTrack_int_TM_TrainToTrack(
  P011_TrainTrack_int_TM_TrainToTrack *kcg_c1,
  P011_TrainTrack_int_TM_TrainToTrack *kcg_c2);
#endif /* kcg_comp_P011_TrainTrack_int_TM_TrainToTrack */
#endif /* kcg_use_P011_TrainTrack_int_TM_TrainToTrack */

#ifdef kcg_use_array_int32_3_33
#ifndef kcg_comp_array_int32_3_33
extern kcg_bool kcg_comp_array_int32_3_33(
  array_int32_3_33 *kcg_c1,
  array_int32_3_33 *kcg_c2);
#endif /* kcg_comp_array_int32_3_33 */
#endif /* kcg_use_array_int32_3_33 */

#ifdef kcg_use_P005_section_array_T_TM
#ifndef kcg_comp_P005_section_array_T_TM
extern kcg_bool kcg_comp_P005_section_array_T_TM(
  P005_section_array_T_TM *kcg_c1,
  P005_section_array_T_TM *kcg_c2);
#endif /* kcg_comp_P005_section_array_T_TM */
#endif /* kcg_use_P005_section_array_T_TM */

#ifdef kcg_use__30_array
#ifndef kcg_comp__30_array
extern kcg_bool kcg_comp__30_array(_30_array *kcg_c1, _30_array *kcg_c2);
#endif /* kcg_comp__30_array */
#endif /* kcg_use__30_array */

#ifdef kcg_use__31_array
#ifndef kcg_comp__31_array
extern kcg_bool kcg_comp__31_array(_31_array *kcg_c1, _31_array *kcg_c2);
#endif /* kcg_comp__31_array */
#endif /* kcg_use__31_array */

#ifdef kcg_use_array_int32_68
#ifndef kcg_comp_array_int32_68
extern kcg_bool kcg_comp_array_int32_68(
  array_int32_68 *kcg_c1,
  array_int32_68 *kcg_c2);
#endif /* kcg_comp_array_int32_68 */
#endif /* kcg_use_array_int32_68 */

#ifdef kcg_use__3_RadioTrackTrainMessageQueueEntries_T
#ifndef kcg_comp__3_RadioTrackTrainMessageQueueEntries_T
extern kcg_bool kcg_comp__3_RadioTrackTrainMessageQueueEntries_T(
  _3_RadioTrackTrainMessageQueueEntries_T *kcg_c1,
  _3_RadioTrackTrainMessageQueueEntries_T *kcg_c2);
#endif /* kcg_comp__3_RadioTrackTrainMessageQueueEntries_T */
#endif /* kcg_use__3_RadioTrackTrainMessageQueueEntries_T */

#ifdef kcg_use_array_int32_24
#ifndef kcg_comp_array_int32_24
extern kcg_bool kcg_comp_array_int32_24(
  array_int32_24 *kcg_c1,
  array_int32_24 *kcg_c2);
#endif /* kcg_comp_array_int32_24 */
#endif /* kcg_use_array_int32_24 */

#ifdef kcg_use_array_int32_21
#ifndef kcg_comp_array_int32_21
extern kcg_bool kcg_comp_array_int32_21(
  array_int32_21 *kcg_c1,
  array_int32_21 *kcg_c2);
#endif /* kcg_comp_array_int32_21 */
#endif /* kcg_use_array_int32_21 */

#ifdef kcg_use_array_int32_100
#ifndef kcg_comp_array_int32_100
extern kcg_bool kcg_comp_array_int32_100(
  array_int32_100 *kcg_c1,
  array_int32_100 *kcg_c2);
#endif /* kcg_comp_array_int32_100 */
#endif /* kcg_use_array_int32_100 */

#define kcg_comp_aNID_NTC_T_Packet_TrainTypes_Pkg kcg_comp_array_int32_5

#define kcg_copy_aNID_NTC_T_Packet_TrainTypes_Pkg kcg_copy_array_int32_5

#define kcg_comp_sTractionIdentity_T_Packet_TrainTypes_Pkg                    \
  kcg_comp_struct_150212

#define kcg_copy_sTractionIdentity_T_Packet_TrainTypes_Pkg                    \
  kcg_copy_struct_150212

#define kcg_comp_aTractionIdentity_T_Packet_TrainTypes_Pkg kcg_comp__23_array

#define kcg_copy_aTractionIdentity_T_Packet_TrainTypes_Pkg kcg_copy__23_array

#define kcg_comp__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg                 \
  kcg_comp_struct_151014

#define kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg                 \
  kcg_copy_struct_151014

#define kcg_comp_D_test_distance_T_TIU_Types_Pkg kcg_comp_struct_149909

#define kcg_copy_D_test_distance_T_TIU_Types_Pkg kcg_copy_struct_149909

#define kcg_comp_D_test_trackcond_T_TIU_Types_Pkg kcg_comp_struct_149909

#define kcg_copy_D_test_trackcond_T_TIU_Types_Pkg kcg_copy_struct_149909

#define kcg_comp_L_test_trackcond_T_TIU_Types_Pkg kcg_comp_struct_149909

#define kcg_copy_L_test_trackcond_T_TIU_Types_Pkg kcg_copy_struct_149909

#define kcg_comp_D_test_trackinit_T_TIU_Types_Pkg kcg_comp_struct_149909

#define kcg_copy_D_test_trackinit_T_TIU_Types_Pkg kcg_copy_struct_149909

#define kcg_comp_D_test_traction_T_TIU_Types_Pkg kcg_comp_struct_149909

#define kcg_copy_D_test_traction_T_TIU_Types_Pkg kcg_copy_struct_149909

#define kcg_comp_D_test_current_T_TIU_Types_Pkg kcg_comp_struct_149909

#define kcg_copy_D_test_current_T_TIU_Types_Pkg kcg_copy_struct_149909

#define kcg_comp__5_Radio_TrackTrain_Header_T_TM_transitional                 \
  kcg_comp_struct_151014

#define kcg_copy__5_Radio_TrackTrain_Header_T_TM_transitional                 \
  kcg_copy_struct_151014

#define kcg_comp_P058_trackide_sectionlist_T_TM kcg_comp__21_array

#define kcg_copy_P058_trackide_sectionlist_T_TM kcg_copy__21_array

#define kcg_comp_P027V1_trackside_qdifflist_T_TM_baseline2 kcg_comp__20_array

#define kcg_copy_P027V1_trackside_qdifflist_T_TM_baseline2 kcg_copy__20_array

#define kcg_comp_P015_trackide_sectionlist_T_TM kcg_comp__19_array

#define kcg_copy_P015_trackide_sectionlist_T_TM kcg_copy__19_array

#define kcg_comp_P027V1_sections_array_flat_qdiff_T_TM_baseline2              \
  kcg_comp_array_int32_64

#define kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2              \
  kcg_copy_array_int32_64

#define kcg_comp_P027V1_section_array_qdiff_T_TM_baseline2                    \
  kcg_comp_array_int32_2

#define kcg_copy_P027V1_section_array_qdiff_T_TM_baseline2                    \
  kcg_copy_array_int32_2

#define kcg_comp__6_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2           \
  kcg_comp__20_array

#define kcg_copy__6_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2           \
  kcg_copy__20_array

#define kcg_comp__7_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2         \
  kcg_comp_array_int32_2_32

#define kcg_copy__7_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2         \
  kcg_copy_array_int32_2_32

#define kcg_comp_P015_OBU_sectionlist_int_T_TM kcg_comp__19_array

#define kcg_copy_P015_OBU_sectionlist_int_T_TM kcg_copy__19_array

#define kcg_comp_P021_sections_array_flat_T_TM kcg_comp_array_int32_99

#define kcg_copy_P021_sections_array_flat_T_TM kcg_copy_array_int32_99

#define kcg_comp_P021_section_array_T_TM kcg_comp_array_int32_3

#define kcg_copy_P021_section_array_T_TM kcg_copy_array_int32_3

#define kcg_comp_P021_OBU_sectionlist_array_T_TM kcg_comp_array_int32_3_33

#define kcg_copy_P021_OBU_sectionlist_array_T_TM kcg_copy_array_int32_3_33

#define kcg_comp_P058_sections_array_flat_T_TM kcg_comp_array_int32_64

#define kcg_copy_P058_sections_array_flat_T_TM kcg_copy_array_int32_64

#define kcg_comp_P058_section_array_T_TM kcg_comp_array_int32_2

#define kcg_copy_P058_section_array_T_TM kcg_copy_array_int32_2

#define kcg_comp_P058_OBU_sectionlist_int_T_TM kcg_comp__21_array

#define kcg_copy_P058_OBU_sectionlist_int_T_TM kcg_copy__21_array

#define kcg_comp_P058_OBU_sectionlist_array_T_TM kcg_comp_array_int32_2_32

#define kcg_copy_P058_OBU_sectionlist_array_T_TM kcg_copy_array_int32_2_32

#define kcg_comp_P011_voltage_TM_TrainToTrack kcg_comp_struct_150212

#define kcg_copy_P011_voltage_TM_TrainToTrack kcg_copy_struct_150212

#define kcg_comp_P011_voltage_list_TM_TrainToTrack kcg_comp__23_array

#define kcg_copy_P011_voltage_list_TM_TrainToTrack kcg_copy__23_array

#define kcg_comp_P011_ntc_list_TM_TrainToTrack kcg_comp_array_int32_5

#define kcg_copy_P011_ntc_list_TM_TrainToTrack kcg_copy_array_int32_5

#define kcg_comp_P003_nid_radio_list_t_TM_TrainToTrack kcg_comp_array_int32_5

#define kcg_copy_P003_nid_radio_list_t_TM_TrainToTrack kcg_copy_array_int32_5

#define kcg_comp_P000_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int32_17

#define kcg_copy_P000_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int32_17

#define kcg_comp_P001_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int32_17

#define kcg_copy_P001_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int32_17

#define kcg_comp_P011_ntc_list_array_T_TM_TrainToTrack kcg_comp_array_int32_5

#define kcg_copy_P011_ntc_list_array_T_TM_TrainToTrack kcg_copy_array_int32_5

#define kcg_comp_P011_voltage_sections_array_flat_t_TM_TrainToTrack           \
  kcg_comp_array_int32_8

#define kcg_copy_P011_voltage_sections_array_flat_t_TM_TrainToTrack           \
  kcg_copy_array_int32_8

#define kcg_comp_P009_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int32_3

#define kcg_copy_P009_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int32_3

#define kcg_comp_P004_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int32_3

#define kcg_copy_P004_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int32_3

#define kcg_comp_P005_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int32_3

#define kcg_copy_P005_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int32_3

#define kcg_comp_P003_nid_radio_list_int_t_TM_TrainToTrack                    \
  kcg_comp_array_int32_5

#define kcg_copy_P003_nid_radio_list_int_t_TM_TrainToTrack                    \
  kcg_copy_array_int32_5

#define kcg_comp_Array03_TM_TrainToTrack kcg_comp_array_int32_3

#define kcg_copy_Array03_TM_TrainToTrack kcg_copy_array_int32_3

#define kcg_comp_P003_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int32_8

#define kcg_copy_P003_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int32_8

#define kcg_comp_M_003_int_T_TM_radio_messages kcg_comp_struct_149262

#define kcg_copy_M_003_int_T_TM_radio_messages kcg_copy_struct_149262

#define kcg_comp_BaliseGroupData_TM kcg_comp_struct_149762

#define kcg_copy_BaliseGroupData_TM kcg_copy_struct_149762

#define kcg_comp_P041_sections_array_flat_T_TM kcg_comp_array_int32_99

#define kcg_copy_P041_sections_array_flat_T_TM kcg_copy_array_int32_99

#define kcg_comp_P041_section_array_T_TM kcg_comp_array_int32_3

#define kcg_copy_P041_section_array_T_TM kcg_copy_array_int32_3

#define kcg_comp_P041_OBU_sectionlist_array_T_TM kcg_comp_array_int32_3_33

#define kcg_copy_P041_OBU_sectionlist_array_T_TM kcg_copy_array_int32_3_33

#define kcg_comp_BaliseGroupData_Basics kcg_comp_struct_149762

#define kcg_copy_BaliseGroupData_Basics kcg_copy_struct_149762

#define kcg_comp_P046_section_array_T_TM kcg_comp_array_int32_2

#define kcg_copy_P046_section_array_T_TM kcg_copy_array_int32_2

#define kcg_comp_M_024_int_T_TM_radio_messages kcg_comp_struct_149262

#define kcg_copy_M_024_int_T_TM_radio_messages kcg_copy_struct_149262

#define kcg_comp_M_027_T_TM_radio_messages kcg_comp_struct_151390

#define kcg_copy_M_027_T_TM_radio_messages kcg_copy_struct_151390

#define kcg_comp_M_024_T_TM_radio_messages kcg_comp_struct_149189

#define kcg_copy_M_024_T_TM_radio_messages kcg_copy_struct_149189

#define kcg_comp_M_018_T_TM_radio_messages kcg_comp_struct_151363

#define kcg_copy_M_018_T_TM_radio_messages kcg_copy_struct_151363

#define kcg_comp_M_016_T_TM_radio_messages kcg_comp_struct_151363

#define kcg_copy_M_016_T_TM_radio_messages kcg_copy_struct_151363

#define kcg_comp_M_009_T_TM_radio_messages kcg_comp_struct_149189

#define kcg_copy_M_009_T_TM_radio_messages kcg_copy_struct_149189

#define kcg_comp_M_006_T_TM_radio_messages kcg_comp_struct_149189

#define kcg_copy_M_006_T_TM_radio_messages kcg_copy_struct_149189

#define kcg_comp_M_003_T_TM_radio_messages kcg_comp_struct_149189

#define kcg_copy_M_003_T_TM_radio_messages kcg_copy_struct_149189

#define kcg_comp_M_043_T_TM_radio_messages kcg_comp_struct_149189

#define kcg_copy_M_043_T_TM_radio_messages kcg_copy_struct_149189

#define kcg_comp_M_041_T_TM_radio_messages kcg_comp_struct_149189

#define kcg_copy_M_041_T_TM_radio_messages kcg_copy_struct_149189

#define kcg_comp_M_040_T_TM_radio_messages kcg_comp_struct_149189

#define kcg_copy_M_040_T_TM_radio_messages kcg_copy_struct_149189

#define kcg_comp_M_039_T_TM_radio_messages kcg_comp_struct_149189

#define kcg_copy_M_039_T_TM_radio_messages kcg_copy_struct_149189

#define kcg_comp_M_038_T_TM_radio_messages kcg_comp_struct_149189

#define kcg_copy_M_038_T_TM_radio_messages kcg_copy_struct_149189

#define kcg_comp_M_028_T_TM_radio_messages kcg_comp_struct_151390

#define kcg_copy_M_028_T_TM_radio_messages kcg_copy_struct_151390

#endif /* _KCG_TYPES_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** kcg_types.h
** Generation date: 2023-09-12T13:45:49
*************************************************************$ */

