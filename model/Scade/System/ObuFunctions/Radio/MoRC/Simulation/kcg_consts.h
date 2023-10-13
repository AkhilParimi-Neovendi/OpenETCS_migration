/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/ObuFunctions/Radio/MoRC/Simulation/config.txt
** Generation date: 2023-09-01T13:21:47
*************************************************************$ */
#ifndef _KCG_CONSTS_H_
#define _KCG_CONSTS_H_

#include "kcg_types.h"

/* Id_Pkg::co155_Initiation_of_a_communication_session/ */
#define co155_Initiation_of_a_communication_session_Id_Pkg (kcg_lit_int32(155))

/* Id_Pkg::co156_Termination_of_a_communication_session/ */
#define co156_Termination_of_a_communication_session_Id_Pkg (kcg_lit_int32(156))

/* Id_Pkg::co159_Session_established/ */
#define co159_Session_established_Id_Pkg (kcg_lit_int32(159))

/* Id_Pkg::co154_No_Compatible_Version_Support/ */
#define co154_No_Compatible_Version_Support_Id_Pkg (kcg_lit_int32(154))

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

/* Id_Pkg::cm39_Acknowledgement_of_termination_of_a_communication_session/ */
#define cm39_Acknowledgement_of_termination_of_a_communication_session_Id_Pkg \
  (kcg_lit_int32(39))

/* Id_Pkg::cm38_Initiation_of_a_Communication_Session/ */
#define cm38_Initiation_of_a_Communication_Session_Id_Pkg (kcg_lit_int32(38))

/* Id_Pkg::cm32_RBC_RIU_System_Version/ */
#define cm32_RBC_RIU_System_Version_Id_Pkg (kcg_lit_int32(32))

/* RCM_Types_Pkg::cNoMobileRegistrationContext/ */
extern const mobileRegistrationContext_T_RCM_Types_Pkg cNoMobileRegistrationContext_RCM_Types_Pkg;

/* RCM_Types_Pkg::cNoConnectionContext/ */
extern const mobileConnectionContext_T_RCM_Types_Pkg cNoConnectionContext_RCM_Types_Pkg;

/* MoRC_Pck::Coder_Pkg::cEmptyOutPackets/ */
extern const outPackets_T_Common_Types_Pkg cEmptyOutPackets_MoRC_Pck_Coder_Pkg;

/* RCM_Session_Types_Pkg::cInitialSessionStatus/ */
extern const sessionStatus_T_RCM_Session_Types_Pkg cInitialSessionStatus_RCM_Session_Types_Pkg;

/* RCM_Session_Types_Pkg::cNoSessionStatus/ */
extern const sessionStatus_T_RCM_Session_Types_Pkg cNoSessionStatus_RCM_Session_Types_Pkg;

/* RCM_Session_Types_Pkg::cNoSessionCmd/ */
extern const sessionCmd_T_RCM_Session_Types_Pkg cNoSessionCmd_RCM_Session_Types_Pkg;

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

/* TM_lib_internal::DIM_offset_metadata_id/ */
#define DIM_offset_metadata_id_TM_lib_internal (kcg_lit_int32(1))

/* TM_lib_internal::DIM_offset_metadata_m_version/ */
#define DIM_offset_metadata_m_version_TM_lib_internal (kcg_lit_int32(1000))

/* TM_lib_internal::DIM_offset_metadata_q_dir/ */
#define DIM_offset_metadata_q_dir_TM_lib_internal (kcg_lit_int32(100000))

/* TM_lib_internal::DIM_offset_metadata_nid_packet/ */
#define DIM_offset_metadata_nid_packet_TM_lib_internal (kcg_lit_int32(1000000))

/* TM::DEFAULT_PHeader/ */
extern const MetadataElement_T_Common_Types_Pkg DEFAULT_PHeader_TM;

/* TM::DIM_MaxRMessages/ */
#define DIM_MaxRMessages_TM (kcg_lit_int32(30))

/* TM::DEFAULT_CompressedPackets/ */
extern const CompressedPacketData_T_Common_Types_Pkg DEFAULT_CompressedPackets_TM;

/* Common_Types_Pkg::cDIM_MaxDataElementsInRMessage/ */
#define cDIM_MaxDataElementsInRMessage_Common_Types_Pkg (kcg_lit_int32(500))

/* Common_Types_Pkg::cMetadataArraySize/ */
#define cMetadataArraySize_Common_Types_Pkg (kcg_lit_int32(30))

/* Common_Types_Pkg::cDIM_MaxRMessages/ */
#define cDIM_MaxRMessages_Common_Types_Pkg (kcg_lit_int32(30))

/* RCM_Types_Pkg::cNoP45_RadioNetworkRegistration/ */
extern const P45_RadioNetworkRegistration_T_Packet_Types_Pkg cNoP45_RadioNetworkRegistration_RCM_Types_Pkg;

/* RCM_MsgTypes_Pkg::cNo_p42_SessionManagement/ */
extern const p42_sessionManagement_T_RCM_MsgTypes_Pkg cNo_p42_SessionManagement_RCM_MsgTypes_Pkg;

/* RCM_MsgTypes_Pkg::cNID_RADIO_useTheShortNumberStoredOnboard/ */
#define cNID_RADIO_useTheShortNumberStoredOnboard_RCM_MsgTypes_Pkg            \
  (kcg_lit_int64(4294967295))

/* RCM_MsgTypes_Pkg::c_nid_RBC_contactLastKnownRBC_/ */
#define c_nid_RBC_contactLastKnownRBC__RCM_MsgTypes_Pkg (kcg_lit_int32(16383))

/* MoRC_Pck::Subfunc_Pkg::cNoOrigin/ */
extern const RBC_Id_T_Common_Types_Pkg cNoOrigin_MoRC_Pck_Subfunc_Pkg;

/* MoRC_Pck::cNoMessageToRBC/ */
extern const Radio_TrainTrack_Message_T_Radio_Types_Pkg cNoMessageToRBC_MoRC_Pck;

/* Packet_TrainTypes_Pkg::cMaxNationalSystem/ */
#define cMaxNationalSystem_Packet_TrainTypes_Pkg (kcg_lit_int32(5))

/* Packet_TrainTypes_Pkg::cMaxTractionIdentity/ */
#define cMaxTractionIdentity_Packet_TrainTypes_Pkg (kcg_lit_int32(4))

/* Packet_TrainTypes_Pkg::cDigitsInTelephoneNumber/ */
#define cDigitsInTelephoneNumber_Packet_TrainTypes_Pkg (kcg_lit_int32(15))

/* Packet_TrainTypes_Pkg::cmaxNumberTelephoneNumbers/ */
#define cmaxNumberTelephoneNumbers_Packet_TrainTypes_Pkg (kcg_lit_int32(1))

#endif /* _KCG_CONSTS_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** kcg_consts.h
** Generation date: 2023-09-01T13:21:47
*************************************************************$ */

