/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/ObuFunctions/Radio/MoRC/Simulation/config.txt
** Generation date: 2023-09-01T13:21:47
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

/* RCM_Session_Types_Pkg::safeRadioConnnectionIndicator_T/ */
typedef enum kcg_tag_safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg {
  srci_noConnection_RCM_Session_Types_Pkg,
  srci_connectionLost_setupFailed_RCM_Session_Types_Pkg,
  srci_connectionUp_RCM_Session_Types_Pkg
} safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg;
/* M_ACK/ */
typedef enum kcg_tag_M_ACK {
  M_ACK_No_acknowledgement_required,
  M_ACK_Acknowledgement_required
} M_ACK;
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
/* Q_LINK/ */
typedef enum kcg_tag_Q_LINK { Q_LINK_Unlinked, Q_LINK_Linked } Q_LINK;
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
/* M_VERSION/ */
typedef enum kcg_tag_M_VERSION {
  M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS,
  M_VERSION_Version_1_0_introduced_in_SRS_1_2_0_and_reused_in_SRSs_2_0_0_and_2_2_2_and_2_3_0,
  M_VERSION_Version_1_1_introduced_in_SRS_3_3_0,
  M_VERSION_Version_2_0_introduced_in_SRS_3_3_0
} M_VERSION;
/* Q_UPDOWN/ */
typedef enum kcg_tag_Q_UPDOWN {
  Q_UPDOWN_Down_link_telegram,
  Q_UPDOWN_Up_link_telegram
} Q_UPDOWN;
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
/* RCM_Types_Pkg::mobileRegistrationStatus_T/ */
typedef enum kcg_tag_mobileRegistrationStatus_T_RCM_Types_Pkg {
  mrs_unregistered_RCM_Types_Pkg,
  mrs_registering_RCM_Types_Pkg,
  mrs_registered_RCM_Types_Pkg
} mobileRegistrationStatus_T_RCM_Types_Pkg;
/* RCM_Session_Types_Pkg::sessionPhase_T/ */
typedef enum kcg_tag_sessionPhase_T_RCM_Session_Types_Pkg {
  sp_terminated_RCM_Session_Types_Pkg,
  sp_establishing_RCM_Session_Types_Pkg,
  sp_maintaining_RCM_Session_Types_Pkg,
  sp_terminating_RCM_Session_Types_Pkg
} sessionPhase_T_RCM_Session_Types_Pkg;
/* Common_Types_Pkg::MsgSource_T/ */
typedef enum kcg_tag_MsgSource_T_Common_Types_Pkg {
  msrc_undefined_Common_Types_Pkg,
  msrc_Euroradio_Common_Types_Pkg,
  msrc_Eurobalise_Common_Types_Pkg,
  msrc_RadioInfillUnit_Common_Types_Pkg,
  msrc_OBU_Common_Types_Pkg
} MsgSource_T_Common_Types_Pkg;
/* Q_DIR/ */
typedef enum kcg_tag_Q_DIR {
  Q_DIR_Reverse,
  Q_DIR_Nominal,
  Q_DIR_Both_directions
} Q_DIR;
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
/* NC_TRAIN/ */
typedef enum kcg_tag_NC_TRAIN {
  NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category,
  NC_TRAIN_Freight_train_braked_in_P_position,
  NC_TRAIN_Freight_train_braked_in_G_position,
  NC_TRAIN_Passenger_train
} NC_TRAIN;
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
/* Q_LENGTH/ */
typedef enum kcg_tag_Q_LENGTH {
  Q_LENGTH_No_train_integrity_information_available,
  Q_LENGTH_Train_integrity_confirmed_by_integrity_monitoring_device,
  Q_LENGTH_Train_integrity_confirmed_by_driver,
  Q_LENGTH_Train_integrity_lost
} Q_LENGTH;
/* Q_DLRBG/ */
typedef enum kcg_tag_Q_DLRBG {
  Q_DLRBG_Reverse,
  Q_DLRBG_Nominal,
  Q_DLRBG_Unknown
} Q_DLRBG;
/* Q_EMERGENCYSTOP/ */
typedef enum kcg_tag_Q_EMERGENCYSTOP {
  Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA,
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
/* Q_SCALE/ */
typedef enum kcg_tag_Q_SCALE {
  Q_SCALE_10_cm_scale,
  Q_SCALE_1_m_scale,
  Q_SCALE_10_m_scale
} Q_SCALE;
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
  SSM_TR_rep_inactive_rep_repeatUntilStopConditionMet_2_rep_inactive_repeat_SM,
  SSM_TR_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_rep_inactive_1_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM,
  SSM_TR_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_2_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM,
  SSM_TR_rep_repeatUntilStopConditionMet_rep_inactive_1_rep_repeatUntilStopConditionMet_repeat_SM,
  SSM_TR_rep_repeatUntilStopConditionMet_rep_repeatUntilStopConditionMet_2_rep_repeatUntilStopConditionMet_repeat_SM
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
  SSM_TR_Unregistered_Registering_2_Unregistered_Register_SM,
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
typedef enum kcg_tag__7_SSM_TR_SM1 {
  SSM_TR_no_trans_SM1,
  SSM_TR_idle_waitForSafeRadioConnectionSetUp_1_idle_SM1,
  SSM_TR_waitForSafeRadioConnectionSetUp_waitForSystemVersion_1_waitForSafeRadioConnectionSetUp_SM1,
  SSM_TR_waitForSafeRadioConnectionSetUp_idle_2_waitForSafeRadioConnectionSetUp_SM1,
  SSM_TR_waitForSystemVersion_idle_1_waitForSystemVersion_SM1,
  SSM_TR_waitForSystemVersion_sessionEstablished_2_waitForSystemVersion_SM1,
  SSM_TR_waitForSystemVersion_idle_3_waitForSystemVersion_SM1,
  SSM_TR_sessionEstablished_idle_1_sessionEstablished_SM1
} _7_SSM_TR_SM1;
/* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2/SM1: */
typedef enum kcg_tag__6_SSM_ST_SM1 {
  SSM_st_idle_SM1,
  SSM_st_waitForSafeRadioConnectionSetUp_SM1,
  SSM_st_waitForSystemVersion_SM1,
  SSM_st_sessionEstablished_SM1
} _6_SSM_ST_SM1;
/* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2/SM1: */
typedef enum kcg_tag__5_SSM_TR_SM1 {
  _11_SSM_TR_no_trans_SM1,
  SSM_TR_idle_sessionEstablished_1_idle_SM1,
  _10_SSM_TR_sessionEstablished_idle_1_sessionEstablished_SM1
} _5_SSM_TR_SM1;
/* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2/SM1: */
typedef enum kcg_tag__4_SSM_ST_SM1 {
  _9_SSM_st_idle_SM1,
  _8_SSM_st_sessionEstablished_SM1
} _4_SSM_ST_SM1;
/* MoRC_Pck::Subfunc_Pkg::establishSession_v2/SM1: */
typedef enum kcg_tag__3_SSM_TR_SM1 {
  _13_SSM_TR_no_trans_SM1,
  SSM_TR_idle_establishingByOBU_1_idle_SM1,
  SSM_TR_idle_establishingByRBC_2_idle_SM1,
  SSM_TR_establishingByOBU_idle_1_establishingByOBU_SM1,
  SSM_TR_establishingByRBC_idle_1_establishingByRBC_SM1
} _3_SSM_TR_SM1;
/* MoRC_Pck::Subfunc_Pkg::establishSession_v2/SM1: */
typedef enum kcg_tag__2_SSM_ST_SM1 {
  _12_SSM_st_idle_SM1,
  SSM_st_establishingByOBU_SM1,
  SSM_st_establishingByRBC_SM1
} _2_SSM_ST_SM1;
/* MoRC_Pck::Subfunc_Pkg::terminateSession_v2/SM1: */
typedef enum kcg_tag_SSM_TR_SM1 {
  _15_SSM_TR_no_trans_SM1,
  SSM_TR_idle_waitForAckTerminationOfCommunicationSessionReceived_1_idle_SM1,
  SSM_TR_waitForAckTerminationOfCommunicationSessionReceived_idle_1_waitForAckTerminationOfCommunicationSessionReceived_SM1,
  SSM_TR_waitForAckTerminationOfCommunicationSessionReceived_terminated_2_waitForAckTerminationOfCommunicationSessionReceived_SM1,
  SSM_TR_terminated_idle_1_terminated_SM1
} SSM_TR_SM1;
/* MoRC_Pck::Subfunc_Pkg::terminateSession_v2/SM1: */
typedef enum kcg_tag_SSM_ST_SM1 {
  _14_SSM_st_idle_SM1,
  SSM_st_waitForAckTerminationOfCommunicationSessionReceived_SM1,
  SSM_st_terminated_SM1
} SSM_ST_SM1;
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
  SSM_TR_WaitForOrderToTerminateTheSession_Idle_2_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM
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
  SSM_TR_ConnectionLost_SetupFailed_ConnectionUp_2_ConnectionLost_SetupFailed_connectionStatus_SM,
  SSM_TR_ConnectionUp_NoConnection_1_ConnectionUp_connectionStatus_SM,
  SSM_TR_ConnectionUp_ConnectionLost_SetupFailed_2_ConnectionUp_connectionStatus_SM
} SSM_TR_connectionStatus_SM;
/* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2/connectionStatus_SM: */
typedef enum kcg_tag_SSM_ST_connectionStatus_SM {
  SSM_st_NoConnection_connectionStatus_SM,
  SSM_st_ConnectionLost_SetupFailed_connectionStatus_SM,
  SSM_st_ConnectionUp_connectionStatus_SM
} SSM_ST_connectionStatus_SM;
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

typedef kcg_bool array_bool_30[30];

/* Packet_TrainTypes_Pkg::PT4_ErrorReporting_T/ */
typedef struct kcg_tag_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg {
  kcg_bool valid;
  M_ERROR m_error;
} PT4_ErrorReporting_T_Packet_TrainTypes_Pkg;

/* RCM_Session_Types_Pkg::safeRadioConnectionIndication_T/ */
typedef struct kcg_tag_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg {
  kcg_bool valid;
  safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg indicator;
} safeRadioConnectionIndication_T_RCM_Session_Types_Pkg;

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

/* NID_RADIO/ */
typedef kcg_int32 NID_RADIO;

/* D_EMERGENCYSTOP/ */
typedef kcg_int32 D_EMERGENCYSTOP;

/* D_REF/ */
typedef kcg_int32 D_REF;

/* D_SR/ */
typedef kcg_int32 D_SR;

/* NID_LRBG/ */
typedef kcg_int32 NID_LRBG;

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

/* Q_NVLOCACC/ */
typedef kcg_int32 Q_NVLOCACC;

/* NID_BG/ */
typedef kcg_int32 NID_BG;

/* M_MCOUNT/ */
typedef kcg_int32 M_MCOUNT;

/* NID_PACKET/ */
typedef kcg_int32 NID_PACKET;

/* Obu_BasicTypes_Pkg::T_internal_Type/ */
typedef kcg_int32 T_internal_Type_Obu_BasicTypes_Pkg;

/* MoRC_Pck::time_Type/ */
typedef kcg_int32 time_Type_MoRC_Pck;

/* NID_MN/ */
typedef kcg_int32 NID_MN;

/* Packet_Types_Pkg::P45_RadioNetworkRegistration_T/ */
typedef struct kcg_tag_P45_RadioNetworkRegistration_T_Packet_Types_Pkg {
  kcg_bool valid;
  Q_DIR q_dir;
  NID_MN nid_mn;
} P45_RadioNetworkRegistration_T_Packet_Types_Pkg;

/* NID_RBC/ */
typedef kcg_int32 NID_RBC;

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

/* RCM_Session_Types_Pkg::sessionStatus_T/ */
typedef struct kcg_tag_sessionStatus_T_RCM_Session_Types_Pkg {
  kcg_bool valid;
  sessionPhase_T_RCM_Session_Types_Pkg phase;
  NID_C nid_c;
  NID_RBC nid_rbc;
  NID_RADIO nid_radio;
} sessionStatus_T_RCM_Session_Types_Pkg;

/* NID_TEXTMESSAGE/ */
typedef kcg_int32 NID_TEXTMESSAGE;

/* NID_EM/ */
typedef kcg_int32 NID_EM;

/* NID_NTC/ */
typedef kcg_int32 NID_NTC;

/* Packet_TrainTypes_Pkg::aNID_NTC_T/ */
typedef NID_NTC aNID_NTC_T_Packet_TrainTypes_Pkg[5];

/* NID_CTRACTION/ */
typedef kcg_int32 NID_CTRACTION;

/* Packet_TrainTypes_Pkg::sTractionIdentity_T/ */
typedef struct kcg_tag_sTractionIdentity_T_Packet_TrainTypes_Pkg {
  M_VOLTAGE m_voltage;
  NID_CTRACTION nid_ctraction;
} sTractionIdentity_T_Packet_TrainTypes_Pkg;

/* Packet_TrainTypes_Pkg::aTractionIdentity_T/ */
typedef sTractionIdentity_T_Packet_TrainTypes_Pkg aTractionIdentity_T_Packet_TrainTypes_Pkg[4];

/* Obu_BasicTypes_Pkg::V_internal_Type/ */
typedef kcg_int32 V_internal_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::L_internal_Type/ */
typedef kcg_int32 L_internal_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::OdometryLocations_T/ */
typedef struct kcg_tag_OdometryLocations_T_Obu_BasicTypes_Pkg {
  L_internal_Type_Obu_BasicTypes_Pkg o_nominal;
  L_internal_Type_Obu_BasicTypes_Pkg o_min;
  L_internal_Type_Obu_BasicTypes_Pkg o_max;
} OdometryLocations_T_Obu_BasicTypes_Pkg;

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

/* Obu_BasicTypes_Pkg::LocWithInAcc_T/ */
typedef struct kcg_tag_LocWithInAcc_T_Obu_BasicTypes_Pkg {
  L_internal_Type_Obu_BasicTypes_Pkg nominal;
  L_internal_Type_Obu_BasicTypes_Pkg d_min;
  L_internal_Type_Obu_BasicTypes_Pkg d_max;
} LocWithInAcc_T_Obu_BasicTypes_Pkg;

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

/* N_AXLE/ */
typedef kcg_int32 N_AXLE;

/* NID_LTRBG/ */
typedef kcg_int32 NID_LTRBG;

/* Packet_TrainTypes_Pkg::PT9_Level23_TransitionInformation_T/ */
typedef struct kcg_tag_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg {
  kcg_bool valid;
  NID_LTRBG transitionInformation;
} PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg;

/* NID_OPERATIONAL/ */
typedef kcg_int32 NID_OPERATIONAL;

/* Packet_TrainTypes_Pkg::PT5_TrainRunningNumber/ */
typedef struct kcg_tag_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg {
  kcg_bool valid;
  NID_OPERATIONAL TrainRunningNumber;
} PT5_TrainRunningNumber_Packet_TrainTypes_Pkg;

/* Obu_BasicTypes_Pkg::BCD_T/ */
typedef kcg_int32 BCD_T_Obu_BasicTypes_Pkg;

/* Packet_TrainTypes_Pkg::telephoneNumber_T/ */
typedef BCD_T_Obu_BasicTypes_Pkg telephoneNumber_T_Packet_TrainTypes_Pkg[15];

/* Packet_TrainTypes_Pkg::sNID_RADIO_T/ */
typedef struct kcg_tag_sNID_RADIO_T_Packet_TrainTypes_Pkg {
  kcg_bool valid;
  telephoneNumber_T_Packet_TrainTypes_Pkg telephoneNumber;
} sNID_RADIO_T_Packet_TrainTypes_Pkg;

/* Packet_TrainTypes_Pkg::aNID_RADIO_T/ */
typedef sNID_RADIO_T_Packet_TrainTypes_Pkg aNID_RADIO_T_Packet_TrainTypes_Pkg[1];

/* NID_ENGINE/ */
typedef kcg_int32 NID_ENGINE;

/* T_TRAIN/ */
typedef kcg_int32 T_TRAIN;

/* NID_MESSAGE/ */
typedef kcg_int32 NID_MESSAGE;

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

/* RCM_Types_Pkg::mobileRegistrationContext_T/ */
typedef struct kcg_tag_mobileRegistrationContext_T_RCM_Types_Pkg {
  kcg_bool valid;
  kcg_int32 mobileDeviceNo;
  mobileHealthStatus_T_RCM_Types_Pkg healthStatus;
  mobileRegistrationStatus_T_RCM_Types_Pkg status;
  NID_MN nid_mn;
} mobileRegistrationContext_T_RCM_Types_Pkg;

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

/* RCM_Session_Types_Pkg::morcStatus_T/ */
typedef struct kcg_tag_morcStatus_T_RCM_Session_Types_Pkg {
  mobileRegistrationContext_T_RCM_Types_Pkg registration;
  mobileConnectionContext_T_RCM_Types_Pkg connection;
  sessionStatus_T_RCM_Session_Types_Pkg session;
} morcStatus_T_RCM_Session_Types_Pkg;

/* Common_Types_Pkg::CompressedPacketData_T/,
   TM::Read_P042/,
   TM::Read_P045/,
   TM_lib_internal::RECV_ReadPacketKernel/,
   TM_lib_internal::RECV_ReadPackets/ */
typedef kcg_int32 CompressedPacketData_T_Common_Types_Pkg[500];

typedef CompressedPacketData_T_Common_Types_Pkg array_int32_500_500[500];

/* Common_Types_Pkg::CompressedPackets_T/ */
typedef struct kcg_tag_CompressedPackets_T_Common_Types_Pkg {
  Metadata_T_Common_Types_Pkg PacketHeaders;
  CompressedPacketData_T_Common_Types_Pkg PacketData;
} CompressedPackets_T_Common_Types_Pkg;

/* RCM_Types_Pkg::mobileConnectionCmd_T/ */
typedef struct kcg_tag_mobileConnectionCmd_T_RCM_Types_Pkg {
  kcg_bool valid;
  kcg_int32 mobileDeviceNo;
  mobileConnetionAction_T_RCM_Types_Pkg action;
  NID_RADIO nid_radio;
} mobileConnectionCmd_T_RCM_Types_Pkg;

typedef kcg_int32 array_int32_30[30];

/* Common_Types_Pkg::RBC_Id_T/ */
typedef struct kcg_tag_RBC_Id_T_Common_Types_Pkg {
  kcg_bool valid;
  NID_C nid_c;
  NID_RBC rbc_id;
  kcg_int32 device_id;
} RBC_Id_T_Common_Types_Pkg;

/* RCM_MsgTypes_Pkg::m39_AckOfTerminationOfACommunicationSession_T/ */
typedef struct kcg_tag_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg {
  kcg_bool valid;
  MsgSource_T_Common_Types_Pkg msgSrc;
  RBC_Id_T_Common_Types_Pkg origin;
  NID_LRBG lrbg;
} m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg;

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

/* RCM_Types_Pkg::mobileRegistrationCmd_T/ */
typedef struct kcg_tag_mobileRegistrationCmd_T_RCM_Types_Pkg {
  kcg_bool valid;
  kcg_int32 mobileDeviceNo;
  mobileRegistrationAction_T_RCM_Types_Pkg action;
  NID_MN network_id;
} mobileRegistrationCmd_T_RCM_Types_Pkg;

/* Packet_TrainTypes_Pkg::PT3_OnboardTelephoneNumbers_T/ */
typedef struct kcg_tag_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg {
  kcg_bool valid;
  kcg_int32 number;
  aNID_RADIO_T_Packet_TrainTypes_Pkg aNID_RADIO;
} PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg;

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

typedef struct kcg_tag_struct_18831 {
  kcg_bool present;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg header;
  outPackets_T_Common_Types_Pkg packets;
} struct_18831;

/* RCM_MsgTypes_Pkg::msgToTrack_T/ */
typedef struct_18831 msgToTrack_T_RCM_MsgTypes_Pkg;

/* Radio_Types_Pkg::Radio_TrainTrack_Message_T/ */
typedef struct_18831 Radio_TrainTrack_Message_T_Radio_Types_Pkg;

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

typedef struct kcg_tag_struct_19159 {
  kcg_bool valid;
  MsgSource_T_Common_Types_Pkg source;
  RadioMetadata_T_Common_Types_Pkg radioMetadata;
  BG_Header_T_BG_Types_Pkg BG_Common_Header;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg Radio_Common_Header;
  CompressedPackets_T_Common_Types_Pkg packets;
  RBC_Id_T_Common_Types_Pkg sendingRBC;
} struct_19159;

/* RCM_MsgTypes_Pkg::msgFromTrack_T/ */
typedef struct_19159 msgFromTrack_T_RCM_MsgTypes_Pkg;

/* Common_Types_Pkg::ReceivedMessage_T/ */
typedef struct_19159 ReceivedMessage_T_Common_Types_Pkg;

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

#ifndef kcg_copy_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg
#define kcg_copy_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg(kcg_C1, kcg_C2) \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg)))
#endif /* kcg_copy_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg */

#ifndef kcg_copy_morc_configData_T_RCM_Session_Types_Pkg
#define kcg_copy_morc_configData_T_RCM_Session_Types_Pkg(kcg_C1, kcg_C2)      \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (morc_configData_T_RCM_Session_Types_Pkg)))
#endif /* kcg_copy_morc_configData_T_RCM_Session_Types_Pkg */

#ifndef kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg
#define kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(kcg_C1, kcg_C2)    \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (Radio_TrackTrain_Header_T_Radio_Types_Pkg)))
#endif /* kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg */

#ifndef kcg_copy_BG_Header_T_BG_Types_Pkg
#define kcg_copy_BG_Header_T_BG_Types_Pkg(kcg_C1, kcg_C2)                     \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (BG_Header_T_BG_Types_Pkg)))
#endif /* kcg_copy_BG_Header_T_BG_Types_Pkg */

#ifndef kcg_copy_obuEventsAndPhases_T_RCM_Session_Types_Pkg
#define kcg_copy_obuEventsAndPhases_T_RCM_Session_Types_Pkg(kcg_C1, kcg_C2)   \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (obuEventsAndPhases_T_RCM_Session_Types_Pkg)))
#endif /* kcg_copy_obuEventsAndPhases_T_RCM_Session_Types_Pkg */

#ifndef kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg
#define kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(kcg_C1, kcg_C2)           \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (sessionCmd_T_RCM_Session_Types_Pkg)))
#endif /* kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg */

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

#ifndef kcg_copy_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg
#define kcg_copy_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (safeRadioConnectionIndication_T_RCM_Session_Types_Pkg)))
#endif /* kcg_copy_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg */

#ifndef kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg
#define kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (P45_RadioNetworkRegistration_T_Packet_Types_Pkg)))
#endif /* kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg */

#ifndef kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg
#define kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg)))
#endif /* kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg */

#ifndef kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg
#define kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(kcg_C1, kcg_C2)            \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (LocWithInAcc_T_Obu_BasicTypes_Pkg)))
#endif /* kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg */

#ifndef kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg
#define kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(kcg_C1, kcg_C2)        \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (sessionStatus_T_RCM_Session_Types_Pkg)))
#endif /* kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg */

#ifndef kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg
#define kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(kcg_C1, kcg_C2)       \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (OdometryLocations_T_Obu_BasicTypes_Pkg)))
#endif /* kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg */

#ifndef kcg_copy_CompressedPackets_T_Common_Types_Pkg
#define kcg_copy_CompressedPackets_T_Common_Types_Pkg(kcg_C1, kcg_C2)         \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (CompressedPackets_T_Common_Types_Pkg)))
#endif /* kcg_copy_CompressedPackets_T_Common_Types_Pkg */

#ifndef kcg_copy_morcStatus_T_RCM_Session_Types_Pkg
#define kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(kcg_C1, kcg_C2)           \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (morcStatus_T_RCM_Session_Types_Pkg)))
#endif /* kcg_copy_morcStatus_T_RCM_Session_Types_Pkg */

#ifndef kcg_copy_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg
#define kcg_copy_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg)))
#endif /* kcg_copy_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg */

#ifndef kcg_copy_struct_18831
#define kcg_copy_struct_18831(kcg_C1, kcg_C2)                                 \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_18831)))
#endif /* kcg_copy_struct_18831 */

#ifndef kcg_copy_mobileRegistrationCmd_T_RCM_Types_Pkg
#define kcg_copy_mobileRegistrationCmd_T_RCM_Types_Pkg(kcg_C1, kcg_C2)        \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (mobileRegistrationCmd_T_RCM_Types_Pkg)))
#endif /* kcg_copy_mobileRegistrationCmd_T_RCM_Types_Pkg */

#ifndef kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg
#define kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(kcg_C1, kcg_C2) \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (PT5_TrainRunningNumber_Packet_TrainTypes_Pkg)))
#endif /* kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg */

#ifndef kcg_copy_RBC_Id_T_Common_Types_Pkg
#define kcg_copy_RBC_Id_T_Common_Types_Pkg(kcg_C1, kcg_C2)                    \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (RBC_Id_T_Common_Types_Pkg)))
#endif /* kcg_copy_RBC_Id_T_Common_Types_Pkg */

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

#ifndef kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg
#define kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg(kcg_C1, kcg_C2)          \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (OdometrySpeeds_T_Obu_BasicTypes_Pkg)))
#endif /* kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg */

#ifndef kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg
#define kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(kcg_C1, kcg_C2)   \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (PT4_ErrorReporting_T_Packet_TrainTypes_Pkg)))
#endif /* kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg */

#ifndef kcg_copy_sTractionIdentity_T_Packet_TrainTypes_Pkg
#define kcg_copy_sTractionIdentity_T_Packet_TrainTypes_Pkg(kcg_C1, kcg_C2)    \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (sTractionIdentity_T_Packet_TrainTypes_Pkg)))
#endif /* kcg_copy_sTractionIdentity_T_Packet_TrainTypes_Pkg */

#ifndef kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg
#define kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(kcg_C1, kcg_C2)          \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (mobileConnectionCmd_T_RCM_Types_Pkg)))
#endif /* kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg */

#ifndef kcg_copy_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg
#define kcg_copy_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg)))
#endif /* kcg_copy_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg */

#ifndef kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg
#define kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(kcg_C1, kcg_C2)      \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (mobileConnectionContext_T_RCM_Types_Pkg)))
#endif /* kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg */

#ifndef kcg_copy_msgToTrackTriggers_T_RCM_MsgTypes_Pkg
#define kcg_copy_msgToTrackTriggers_T_RCM_MsgTypes_Pkg(kcg_C1, kcg_C2)        \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (msgToTrackTriggers_T_RCM_MsgTypes_Pkg)))
#endif /* kcg_copy_msgToTrackTriggers_T_RCM_MsgTypes_Pkg */

#ifndef kcg_copy_RadioMetadata_T_Common_Types_Pkg
#define kcg_copy_RadioMetadata_T_Common_Types_Pkg(kcg_C1, kcg_C2)             \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (RadioMetadata_T_Common_Types_Pkg)))
#endif /* kcg_copy_RadioMetadata_T_Common_Types_Pkg */

#ifndef kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg
#define kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(kcg_C1, kcg_C2)     \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (p42_sessionManagement_T_RCM_MsgTypes_Pkg)))
#endif /* kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg */

#ifndef kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg
#define kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(kcg_C1, kcg_C2)    \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (Radio_TrainTrack_Header_T_Radio_Types_Pkg)))
#endif /* kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg */

#ifndef kcg_copy_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg
#define kcg_copy_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg(kcg_C1, kcg_C2)\
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg)))
#endif /* kcg_copy_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg */

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

#ifndef kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg
#define kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(kcg_C1, kcg_C2)    \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (mobileRegistrationContext_T_RCM_Types_Pkg)))
#endif /* kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg */

#ifndef kcg_copy_struct_19159
#define kcg_copy_struct_19159(kcg_C1, kcg_C2)                                 \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_19159)))
#endif /* kcg_copy_struct_19159 */

#ifndef kcg_copy_outPackets_T_Common_Types_Pkg
#define kcg_copy_outPackets_T_Common_Types_Pkg(kcg_C1, kcg_C2)                \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (outPackets_T_Common_Types_Pkg)))
#endif /* kcg_copy_outPackets_T_Common_Types_Pkg */

#ifndef kcg_copy_sNID_RADIO_T_Packet_TrainTypes_Pkg
#define kcg_copy_sNID_RADIO_T_Packet_TrainTypes_Pkg(kcg_C1, kcg_C2)           \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (sNID_RADIO_T_Packet_TrainTypes_Pkg)))
#endif /* kcg_copy_sNID_RADIO_T_Packet_TrainTypes_Pkg */

#ifndef kcg_copy_MetadataElement_T_Common_Types_Pkg
#define kcg_copy_MetadataElement_T_Common_Types_Pkg(kcg_C1, kcg_C2)           \
  (kcg_assign_struct(                                                         \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (MetadataElement_T_Common_Types_Pkg)))
#endif /* kcg_copy_MetadataElement_T_Common_Types_Pkg */

#ifndef kcg_copy_array_int32_30
#define kcg_copy_array_int32_30(kcg_C1, kcg_C2)                               \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_30)))
#endif /* kcg_copy_array_int32_30 */

#ifndef kcg_copy_array_int32_500_500
#define kcg_copy_array_int32_500_500(kcg_C1, kcg_C2)                          \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_500_500)))
#endif /* kcg_copy_array_int32_500_500 */

#ifndef kcg_copy_Metadata_T_Common_Types_Pkg
#define kcg_copy_Metadata_T_Common_Types_Pkg(kcg_C1, kcg_C2)                  \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (Metadata_T_Common_Types_Pkg)))
#endif /* kcg_copy_Metadata_T_Common_Types_Pkg */

#ifndef kcg_copy_telephoneNumber_T_Packet_TrainTypes_Pkg
#define kcg_copy_telephoneNumber_T_Packet_TrainTypes_Pkg(kcg_C1, kcg_C2)      \
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (telephoneNumber_T_Packet_TrainTypes_Pkg)))
#endif /* kcg_copy_telephoneNumber_T_Packet_TrainTypes_Pkg */

#ifndef kcg_copy_array_bool_30
#define kcg_copy_array_bool_30(kcg_C1, kcg_C2)                                \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_30)))
#endif /* kcg_copy_array_bool_30 */

#ifndef kcg_copy_CompressedPacketData_T_Common_Types_Pkg
#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg(kcg_C1, kcg_C2)      \
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (CompressedPacketData_T_Common_Types_Pkg)))
#endif /* kcg_copy_CompressedPacketData_T_Common_Types_Pkg */

#ifndef kcg_copy_aNID_NTC_T_Packet_TrainTypes_Pkg
#define kcg_copy_aNID_NTC_T_Packet_TrainTypes_Pkg(kcg_C1, kcg_C2)             \
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (aNID_NTC_T_Packet_TrainTypes_Pkg)))
#endif /* kcg_copy_aNID_NTC_T_Packet_TrainTypes_Pkg */

#ifndef kcg_copy_aTractionIdentity_T_Packet_TrainTypes_Pkg
#define kcg_copy_aTractionIdentity_T_Packet_TrainTypes_Pkg(kcg_C1, kcg_C2)    \
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (aTractionIdentity_T_Packet_TrainTypes_Pkg)))
#endif /* kcg_copy_aTractionIdentity_T_Packet_TrainTypes_Pkg */

#ifndef kcg_copy_aNID_RADIO_T_Packet_TrainTypes_Pkg
#define kcg_copy_aNID_RADIO_T_Packet_TrainTypes_Pkg(kcg_C1, kcg_C2)           \
  (kcg_assign_array(                                                          \
      (kcg_C1),                                                               \
      (kcg_C2),                                                               \
      sizeof (aNID_RADIO_T_Packet_TrainTypes_Pkg)))
#endif /* kcg_copy_aNID_RADIO_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg
#ifndef kcg_comp_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg
extern kcg_bool kcg_comp_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg(
  m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg *kcg_c1,
  m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg *kcg_c2);
#endif /* kcg_comp_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg */
#endif /* kcg_use_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg */

#ifdef kcg_use_morc_configData_T_RCM_Session_Types_Pkg
#ifndef kcg_comp_morc_configData_T_RCM_Session_Types_Pkg
extern kcg_bool kcg_comp_morc_configData_T_RCM_Session_Types_Pkg(
  morc_configData_T_RCM_Session_Types_Pkg *kcg_c1,
  morc_configData_T_RCM_Session_Types_Pkg *kcg_c2);
#endif /* kcg_comp_morc_configData_T_RCM_Session_Types_Pkg */
#endif /* kcg_use_morc_configData_T_RCM_Session_Types_Pkg */

#ifdef kcg_use_Radio_TrackTrain_Header_T_Radio_Types_Pkg
#ifndef kcg_comp_Radio_TrackTrain_Header_T_Radio_Types_Pkg
extern kcg_bool kcg_comp_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
  Radio_TrackTrain_Header_T_Radio_Types_Pkg *kcg_c1,
  Radio_TrackTrain_Header_T_Radio_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Radio_TrackTrain_Header_T_Radio_Types_Pkg */
#endif /* kcg_use_Radio_TrackTrain_Header_T_Radio_Types_Pkg */

#ifdef kcg_use_BG_Header_T_BG_Types_Pkg
#ifndef kcg_comp_BG_Header_T_BG_Types_Pkg
extern kcg_bool kcg_comp_BG_Header_T_BG_Types_Pkg(
  BG_Header_T_BG_Types_Pkg *kcg_c1,
  BG_Header_T_BG_Types_Pkg *kcg_c2);
#endif /* kcg_comp_BG_Header_T_BG_Types_Pkg */
#endif /* kcg_use_BG_Header_T_BG_Types_Pkg */

#ifdef kcg_use_obuEventsAndPhases_T_RCM_Session_Types_Pkg
#ifndef kcg_comp_obuEventsAndPhases_T_RCM_Session_Types_Pkg
extern kcg_bool kcg_comp_obuEventsAndPhases_T_RCM_Session_Types_Pkg(
  obuEventsAndPhases_T_RCM_Session_Types_Pkg *kcg_c1,
  obuEventsAndPhases_T_RCM_Session_Types_Pkg *kcg_c2);
#endif /* kcg_comp_obuEventsAndPhases_T_RCM_Session_Types_Pkg */
#endif /* kcg_use_obuEventsAndPhases_T_RCM_Session_Types_Pkg */

#ifdef kcg_use_sessionCmd_T_RCM_Session_Types_Pkg
#ifndef kcg_comp_sessionCmd_T_RCM_Session_Types_Pkg
extern kcg_bool kcg_comp_sessionCmd_T_RCM_Session_Types_Pkg(
  sessionCmd_T_RCM_Session_Types_Pkg *kcg_c1,
  sessionCmd_T_RCM_Session_Types_Pkg *kcg_c2);
#endif /* kcg_comp_sessionCmd_T_RCM_Session_Types_Pkg */
#endif /* kcg_use_sessionCmd_T_RCM_Session_Types_Pkg */

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

#ifdef kcg_use_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg
#ifndef kcg_comp_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg
extern kcg_bool kcg_comp_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg(
  safeRadioConnectionIndication_T_RCM_Session_Types_Pkg *kcg_c1,
  safeRadioConnectionIndication_T_RCM_Session_Types_Pkg *kcg_c2);
#endif /* kcg_comp_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg */
#endif /* kcg_use_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg */

#ifdef kcg_use_P45_RadioNetworkRegistration_T_Packet_Types_Pkg
#ifndef kcg_comp_P45_RadioNetworkRegistration_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg *kcg_c1,
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_P45_RadioNetworkRegistration_T_Packet_Types_Pkg */
#endif /* kcg_use_P45_RadioNetworkRegistration_T_Packet_Types_Pkg */

#ifdef kcg_use_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg
#ifndef kcg_comp_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg
extern kcg_bool kcg_comp_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(
  PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg *kcg_c1,
  PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg *kcg_c2);
#endif /* kcg_comp_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg */
#endif /* kcg_use_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_LocWithInAcc_T_Obu_BasicTypes_Pkg
#ifndef kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg
extern kcg_bool kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg(
  LocWithInAcc_T_Obu_BasicTypes_Pkg *kcg_c1,
  LocWithInAcc_T_Obu_BasicTypes_Pkg *kcg_c2);
#endif /* kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg */
#endif /* kcg_use_LocWithInAcc_T_Obu_BasicTypes_Pkg */

#ifndef kcg_comp_sessionStatus_T_RCM_Session_Types_Pkg
extern kcg_bool kcg_comp_sessionStatus_T_RCM_Session_Types_Pkg(
  sessionStatus_T_RCM_Session_Types_Pkg *kcg_c1,
  sessionStatus_T_RCM_Session_Types_Pkg *kcg_c2);
#define kcg_use_sessionStatus_T_RCM_Session_Types_Pkg
#endif /* kcg_comp_sessionStatus_T_RCM_Session_Types_Pkg */

#ifdef kcg_use_OdometryLocations_T_Obu_BasicTypes_Pkg
#ifndef kcg_comp_OdometryLocations_T_Obu_BasicTypes_Pkg
extern kcg_bool kcg_comp_OdometryLocations_T_Obu_BasicTypes_Pkg(
  OdometryLocations_T_Obu_BasicTypes_Pkg *kcg_c1,
  OdometryLocations_T_Obu_BasicTypes_Pkg *kcg_c2);
#endif /* kcg_comp_OdometryLocations_T_Obu_BasicTypes_Pkg */
#endif /* kcg_use_OdometryLocations_T_Obu_BasicTypes_Pkg */

#ifdef kcg_use_CompressedPackets_T_Common_Types_Pkg
#ifndef kcg_comp_CompressedPackets_T_Common_Types_Pkg
extern kcg_bool kcg_comp_CompressedPackets_T_Common_Types_Pkg(
  CompressedPackets_T_Common_Types_Pkg *kcg_c1,
  CompressedPackets_T_Common_Types_Pkg *kcg_c2);
#endif /* kcg_comp_CompressedPackets_T_Common_Types_Pkg */
#endif /* kcg_use_CompressedPackets_T_Common_Types_Pkg */

#ifdef kcg_use_morcStatus_T_RCM_Session_Types_Pkg
#ifndef kcg_comp_morcStatus_T_RCM_Session_Types_Pkg
extern kcg_bool kcg_comp_morcStatus_T_RCM_Session_Types_Pkg(
  morcStatus_T_RCM_Session_Types_Pkg *kcg_c1,
  morcStatus_T_RCM_Session_Types_Pkg *kcg_c2);
#endif /* kcg_comp_morcStatus_T_RCM_Session_Types_Pkg */
#endif /* kcg_use_morcStatus_T_RCM_Session_Types_Pkg */

#ifdef kcg_use_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg
#ifndef kcg_comp_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg
extern kcg_bool kcg_comp_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg(
  m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg *kcg_c1,
  m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg *kcg_c2);
#endif /* kcg_comp_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg */
#endif /* kcg_use_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg */

#ifdef kcg_use_struct_18831
#ifndef kcg_comp_struct_18831
extern kcg_bool kcg_comp_struct_18831(
  struct_18831 *kcg_c1,
  struct_18831 *kcg_c2);
#endif /* kcg_comp_struct_18831 */
#endif /* kcg_use_struct_18831 */

#ifdef kcg_use_mobileRegistrationCmd_T_RCM_Types_Pkg
#ifndef kcg_comp_mobileRegistrationCmd_T_RCM_Types_Pkg
extern kcg_bool kcg_comp_mobileRegistrationCmd_T_RCM_Types_Pkg(
  mobileRegistrationCmd_T_RCM_Types_Pkg *kcg_c1,
  mobileRegistrationCmd_T_RCM_Types_Pkg *kcg_c2);
#endif /* kcg_comp_mobileRegistrationCmd_T_RCM_Types_Pkg */
#endif /* kcg_use_mobileRegistrationCmd_T_RCM_Types_Pkg */

#ifdef kcg_use_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg
#ifndef kcg_comp_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg
extern kcg_bool kcg_comp_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(
  PT5_TrainRunningNumber_Packet_TrainTypes_Pkg *kcg_c1,
  PT5_TrainRunningNumber_Packet_TrainTypes_Pkg *kcg_c2);
#endif /* kcg_comp_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg */
#endif /* kcg_use_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg */

#ifdef kcg_use_RBC_Id_T_Common_Types_Pkg
#ifndef kcg_comp_RBC_Id_T_Common_Types_Pkg
extern kcg_bool kcg_comp_RBC_Id_T_Common_Types_Pkg(
  RBC_Id_T_Common_Types_Pkg *kcg_c1,
  RBC_Id_T_Common_Types_Pkg *kcg_c2);
#endif /* kcg_comp_RBC_Id_T_Common_Types_Pkg */
#endif /* kcg_use_RBC_Id_T_Common_Types_Pkg */

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

#ifdef kcg_use_OdometrySpeeds_T_Obu_BasicTypes_Pkg
#ifndef kcg_comp_OdometrySpeeds_T_Obu_BasicTypes_Pkg
extern kcg_bool kcg_comp_OdometrySpeeds_T_Obu_BasicTypes_Pkg(
  OdometrySpeeds_T_Obu_BasicTypes_Pkg *kcg_c1,
  OdometrySpeeds_T_Obu_BasicTypes_Pkg *kcg_c2);
#endif /* kcg_comp_OdometrySpeeds_T_Obu_BasicTypes_Pkg */
#endif /* kcg_use_OdometrySpeeds_T_Obu_BasicTypes_Pkg */

#ifdef kcg_use_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg
#ifndef kcg_comp_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg
extern kcg_bool kcg_comp_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(
  PT4_ErrorReporting_T_Packet_TrainTypes_Pkg *kcg_c1,
  PT4_ErrorReporting_T_Packet_TrainTypes_Pkg *kcg_c2);
#endif /* kcg_comp_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg */
#endif /* kcg_use_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_sTractionIdentity_T_Packet_TrainTypes_Pkg
#ifndef kcg_comp_sTractionIdentity_T_Packet_TrainTypes_Pkg
extern kcg_bool kcg_comp_sTractionIdentity_T_Packet_TrainTypes_Pkg(
  sTractionIdentity_T_Packet_TrainTypes_Pkg *kcg_c1,
  sTractionIdentity_T_Packet_TrainTypes_Pkg *kcg_c2);
#endif /* kcg_comp_sTractionIdentity_T_Packet_TrainTypes_Pkg */
#endif /* kcg_use_sTractionIdentity_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_mobileConnectionCmd_T_RCM_Types_Pkg
#ifndef kcg_comp_mobileConnectionCmd_T_RCM_Types_Pkg
extern kcg_bool kcg_comp_mobileConnectionCmd_T_RCM_Types_Pkg(
  mobileConnectionCmd_T_RCM_Types_Pkg *kcg_c1,
  mobileConnectionCmd_T_RCM_Types_Pkg *kcg_c2);
#endif /* kcg_comp_mobileConnectionCmd_T_RCM_Types_Pkg */
#endif /* kcg_use_mobileConnectionCmd_T_RCM_Types_Pkg */

#ifdef kcg_use_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg
#ifndef kcg_comp_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg
extern kcg_bool kcg_comp_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg(
  PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg *kcg_c1,
  PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg *kcg_c2);
#endif /* kcg_comp_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg */
#endif /* kcg_use_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg */

#ifndef kcg_comp_mobileConnectionContext_T_RCM_Types_Pkg
extern kcg_bool kcg_comp_mobileConnectionContext_T_RCM_Types_Pkg(
  mobileConnectionContext_T_RCM_Types_Pkg *kcg_c1,
  mobileConnectionContext_T_RCM_Types_Pkg *kcg_c2);
#define kcg_use_mobileConnectionContext_T_RCM_Types_Pkg
#endif /* kcg_comp_mobileConnectionContext_T_RCM_Types_Pkg */

#ifdef kcg_use_msgToTrackTriggers_T_RCM_MsgTypes_Pkg
#ifndef kcg_comp_msgToTrackTriggers_T_RCM_MsgTypes_Pkg
extern kcg_bool kcg_comp_msgToTrackTriggers_T_RCM_MsgTypes_Pkg(
  msgToTrackTriggers_T_RCM_MsgTypes_Pkg *kcg_c1,
  msgToTrackTriggers_T_RCM_MsgTypes_Pkg *kcg_c2);
#endif /* kcg_comp_msgToTrackTriggers_T_RCM_MsgTypes_Pkg */
#endif /* kcg_use_msgToTrackTriggers_T_RCM_MsgTypes_Pkg */

#ifdef kcg_use_RadioMetadata_T_Common_Types_Pkg
#ifndef kcg_comp_RadioMetadata_T_Common_Types_Pkg
extern kcg_bool kcg_comp_RadioMetadata_T_Common_Types_Pkg(
  RadioMetadata_T_Common_Types_Pkg *kcg_c1,
  RadioMetadata_T_Common_Types_Pkg *kcg_c2);
#endif /* kcg_comp_RadioMetadata_T_Common_Types_Pkg */
#endif /* kcg_use_RadioMetadata_T_Common_Types_Pkg */

#ifdef kcg_use_p42_sessionManagement_T_RCM_MsgTypes_Pkg
#ifndef kcg_comp_p42_sessionManagement_T_RCM_MsgTypes_Pkg
extern kcg_bool kcg_comp_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
  p42_sessionManagement_T_RCM_MsgTypes_Pkg *kcg_c1,
  p42_sessionManagement_T_RCM_MsgTypes_Pkg *kcg_c2);
#endif /* kcg_comp_p42_sessionManagement_T_RCM_MsgTypes_Pkg */
#endif /* kcg_use_p42_sessionManagement_T_RCM_MsgTypes_Pkg */

#ifdef kcg_use_Radio_TrainTrack_Header_T_Radio_Types_Pkg
#ifndef kcg_comp_Radio_TrainTrack_Header_T_Radio_Types_Pkg
extern kcg_bool kcg_comp_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
  Radio_TrainTrack_Header_T_Radio_Types_Pkg *kcg_c1,
  Radio_TrainTrack_Header_T_Radio_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Radio_TrainTrack_Header_T_Radio_Types_Pkg */
#endif /* kcg_use_Radio_TrainTrack_Header_T_Radio_Types_Pkg */

#ifdef kcg_use_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg
#ifndef kcg_comp_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg
extern kcg_bool kcg_comp_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg(
  m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg *kcg_c1,
  m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg *kcg_c2);
#endif /* kcg_comp_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg */
#endif /* kcg_use_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg */

#ifdef kcg_use_P42_SessionManagement_T_Packet_Types_Pkg
#ifndef kcg_comp_P42_SessionManagement_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_P42_SessionManagement_T_Packet_Types_Pkg(
  P42_SessionManagement_T_Packet_Types_Pkg *kcg_c1,
  P42_SessionManagement_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_P42_SessionManagement_T_Packet_Types_Pkg */
#endif /* kcg_use_P42_SessionManagement_T_Packet_Types_Pkg */

#ifdef kcg_use_odometry_T_Obu_BasicTypes_Pkg
#ifndef kcg_comp_odometry_T_Obu_BasicTypes_Pkg
extern kcg_bool kcg_comp_odometry_T_Obu_BasicTypes_Pkg(
  odometry_T_Obu_BasicTypes_Pkg *kcg_c1,
  odometry_T_Obu_BasicTypes_Pkg *kcg_c2);
#endif /* kcg_comp_odometry_T_Obu_BasicTypes_Pkg */
#endif /* kcg_use_odometry_T_Obu_BasicTypes_Pkg */

#ifndef kcg_comp_mobileRegistrationContext_T_RCM_Types_Pkg
extern kcg_bool kcg_comp_mobileRegistrationContext_T_RCM_Types_Pkg(
  mobileRegistrationContext_T_RCM_Types_Pkg *kcg_c1,
  mobileRegistrationContext_T_RCM_Types_Pkg *kcg_c2);
#define kcg_use_mobileRegistrationContext_T_RCM_Types_Pkg
#endif /* kcg_comp_mobileRegistrationContext_T_RCM_Types_Pkg */

#ifdef kcg_use_struct_19159
#ifndef kcg_comp_struct_19159
extern kcg_bool kcg_comp_struct_19159(
  struct_19159 *kcg_c1,
  struct_19159 *kcg_c2);
#endif /* kcg_comp_struct_19159 */
#endif /* kcg_use_struct_19159 */

#ifdef kcg_use_outPackets_T_Common_Types_Pkg
#ifndef kcg_comp_outPackets_T_Common_Types_Pkg
extern kcg_bool kcg_comp_outPackets_T_Common_Types_Pkg(
  outPackets_T_Common_Types_Pkg *kcg_c1,
  outPackets_T_Common_Types_Pkg *kcg_c2);
#endif /* kcg_comp_outPackets_T_Common_Types_Pkg */
#endif /* kcg_use_outPackets_T_Common_Types_Pkg */

#ifdef kcg_use_sNID_RADIO_T_Packet_TrainTypes_Pkg
#ifndef kcg_comp_sNID_RADIO_T_Packet_TrainTypes_Pkg
extern kcg_bool kcg_comp_sNID_RADIO_T_Packet_TrainTypes_Pkg(
  sNID_RADIO_T_Packet_TrainTypes_Pkg *kcg_c1,
  sNID_RADIO_T_Packet_TrainTypes_Pkg *kcg_c2);
#endif /* kcg_comp_sNID_RADIO_T_Packet_TrainTypes_Pkg */
#endif /* kcg_use_sNID_RADIO_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_MetadataElement_T_Common_Types_Pkg
#ifndef kcg_comp_MetadataElement_T_Common_Types_Pkg
extern kcg_bool kcg_comp_MetadataElement_T_Common_Types_Pkg(
  MetadataElement_T_Common_Types_Pkg *kcg_c1,
  MetadataElement_T_Common_Types_Pkg *kcg_c2);
#endif /* kcg_comp_MetadataElement_T_Common_Types_Pkg */
#endif /* kcg_use_MetadataElement_T_Common_Types_Pkg */

#ifdef kcg_use_array_int32_30
#ifndef kcg_comp_array_int32_30
extern kcg_bool kcg_comp_array_int32_30(
  array_int32_30 *kcg_c1,
  array_int32_30 *kcg_c2);
#endif /* kcg_comp_array_int32_30 */
#endif /* kcg_use_array_int32_30 */

#ifdef kcg_use_array_int32_500_500
#ifndef kcg_comp_array_int32_500_500
extern kcg_bool kcg_comp_array_int32_500_500(
  array_int32_500_500 *kcg_c1,
  array_int32_500_500 *kcg_c2);
#endif /* kcg_comp_array_int32_500_500 */
#endif /* kcg_use_array_int32_500_500 */

#ifdef kcg_use_Metadata_T_Common_Types_Pkg
#ifndef kcg_comp_Metadata_T_Common_Types_Pkg
extern kcg_bool kcg_comp_Metadata_T_Common_Types_Pkg(
  Metadata_T_Common_Types_Pkg *kcg_c1,
  Metadata_T_Common_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Metadata_T_Common_Types_Pkg */
#endif /* kcg_use_Metadata_T_Common_Types_Pkg */

#ifdef kcg_use_telephoneNumber_T_Packet_TrainTypes_Pkg
#ifndef kcg_comp_telephoneNumber_T_Packet_TrainTypes_Pkg
extern kcg_bool kcg_comp_telephoneNumber_T_Packet_TrainTypes_Pkg(
  telephoneNumber_T_Packet_TrainTypes_Pkg *kcg_c1,
  telephoneNumber_T_Packet_TrainTypes_Pkg *kcg_c2);
#endif /* kcg_comp_telephoneNumber_T_Packet_TrainTypes_Pkg */
#endif /* kcg_use_telephoneNumber_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_array_bool_30
#ifndef kcg_comp_array_bool_30
extern kcg_bool kcg_comp_array_bool_30(
  array_bool_30 *kcg_c1,
  array_bool_30 *kcg_c2);
#endif /* kcg_comp_array_bool_30 */
#endif /* kcg_use_array_bool_30 */

#ifdef kcg_use_CompressedPacketData_T_Common_Types_Pkg
#ifndef kcg_comp_CompressedPacketData_T_Common_Types_Pkg
extern kcg_bool kcg_comp_CompressedPacketData_T_Common_Types_Pkg(
  CompressedPacketData_T_Common_Types_Pkg *kcg_c1,
  CompressedPacketData_T_Common_Types_Pkg *kcg_c2);
#endif /* kcg_comp_CompressedPacketData_T_Common_Types_Pkg */
#endif /* kcg_use_CompressedPacketData_T_Common_Types_Pkg */

#ifdef kcg_use_aNID_NTC_T_Packet_TrainTypes_Pkg
#ifndef kcg_comp_aNID_NTC_T_Packet_TrainTypes_Pkg
extern kcg_bool kcg_comp_aNID_NTC_T_Packet_TrainTypes_Pkg(
  aNID_NTC_T_Packet_TrainTypes_Pkg *kcg_c1,
  aNID_NTC_T_Packet_TrainTypes_Pkg *kcg_c2);
#endif /* kcg_comp_aNID_NTC_T_Packet_TrainTypes_Pkg */
#endif /* kcg_use_aNID_NTC_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_aTractionIdentity_T_Packet_TrainTypes_Pkg
#ifndef kcg_comp_aTractionIdentity_T_Packet_TrainTypes_Pkg
extern kcg_bool kcg_comp_aTractionIdentity_T_Packet_TrainTypes_Pkg(
  aTractionIdentity_T_Packet_TrainTypes_Pkg *kcg_c1,
  aTractionIdentity_T_Packet_TrainTypes_Pkg *kcg_c2);
#endif /* kcg_comp_aTractionIdentity_T_Packet_TrainTypes_Pkg */
#endif /* kcg_use_aTractionIdentity_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_aNID_RADIO_T_Packet_TrainTypes_Pkg
#ifndef kcg_comp_aNID_RADIO_T_Packet_TrainTypes_Pkg
extern kcg_bool kcg_comp_aNID_RADIO_T_Packet_TrainTypes_Pkg(
  aNID_RADIO_T_Packet_TrainTypes_Pkg *kcg_c1,
  aNID_RADIO_T_Packet_TrainTypes_Pkg *kcg_c2);
#endif /* kcg_comp_aNID_RADIO_T_Packet_TrainTypes_Pkg */
#endif /* kcg_use_aNID_RADIO_T_Packet_TrainTypes_Pkg */

#define kcg_comp_Radio_TrainTrack_Message_T_Radio_Types_Pkg                   \
  kcg_comp_struct_18831

#define kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg                   \
  kcg_copy_struct_18831

#define kcg_comp_ReceivedMessage_T_Common_Types_Pkg kcg_comp_struct_19159

#define kcg_copy_ReceivedMessage_T_Common_Types_Pkg kcg_copy_struct_19159

#define kcg_comp_msgFromTrack_T_RCM_MsgTypes_Pkg kcg_comp_struct_19159

#define kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg kcg_copy_struct_19159

#define kcg_comp_msgToTrack_T_RCM_MsgTypes_Pkg kcg_comp_struct_18831

#define kcg_copy_msgToTrack_T_RCM_MsgTypes_Pkg kcg_copy_struct_18831

#endif /* _KCG_TYPES_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** kcg_types.h
** Generation date: 2023-09-01T13:21:47
*************************************************************$ */

