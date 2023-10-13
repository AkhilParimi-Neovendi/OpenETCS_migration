/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/ObuFunctions/Radio/MoRC/Simulation/config.txt
** Generation date: 2023-09-01T13:21:47
*************************************************************$ */

#include "kcg_consts.h"

/* RCM_Types_Pkg::cNoMobileRegistrationContext/ */
const mobileRegistrationContext_T_RCM_Types_Pkg cNoMobileRegistrationContext_RCM_Types_Pkg = {
  kcg_false, kcg_lit_int32(0), mhs_nok_RCM_Types_Pkg,
  mrs_unregistered_RCM_Types_Pkg, kcg_lit_int32(0) };

/* RCM_Types_Pkg::cNoConnectionContext/ */
const mobileConnectionContext_T_RCM_Types_Pkg cNoConnectionContext_RCM_Types_Pkg = {
  kcg_false, kcg_lit_int32(0), mcs_disconnected_RCM_Types_Pkg, kcg_lit_int64(0),
  kcg_false, kcg_false, kcg_false };

/* MoRC_Pck::Coder_Pkg::cEmptyOutPackets/ */
const outPackets_T_Common_Types_Pkg cEmptyOutPackets_MoRC_Pck_Coder_Pkg = { {
    kcg_false, { kcg_lit_int32(0), kcg_lit_int32(0), Q_SCALE_10_cm_scale,
      kcg_lit_int32(0), kcg_lit_int32(0), Q_DIRLRBG_Reverse, Q_DLRBG_Reverse,
      kcg_lit_int32(0), kcg_lit_int32(0),
      Q_LENGTH_No_train_integrity_information_available, kcg_lit_int32(0),
      kcg_lit_int32(0), Q_DIRTRAIN_Reverse, M_MODE_Full_Supervision,
      M_LEVEL_Level_0, kcg_lit_int32(0) } }, { kcg_false, { kcg_lit_int32(0),
      kcg_lit_int32(0), Q_SCALE_10_cm_scale, kcg_lit_int32(0), kcg_lit_int32(0),
      kcg_lit_int32(0), Q_DIRLRBG_Reverse, Q_DLRBG_Reverse, kcg_lit_int32(0),
      kcg_lit_int32(0), Q_LENGTH_No_train_integrity_information_available,
      kcg_lit_int32(0), kcg_lit_int32(0), Q_DIRTRAIN_Reverse,
      M_MODE_Full_Supervision, M_LEVEL_Level_0, kcg_lit_int32(0) } }, {
    kcg_false, kcg_lit_int32(0), { { kcg_false, { kcg_lit_int32(0),
          kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(
            0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
          kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(
            0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0) } } } }, {
    kcg_false, M_ERROR_Balise_group_linking_consistency_error }, { kcg_false,
    kcg_lit_int32(0) }, { kcg_false, kcg_lit_int32(0) }, { kcg_false,
    NC_CDTRAIN_Cant_Deficiency_80_mm,
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category,
    kcg_lit_int32(0), kcg_lit_int32(0),
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles,
    M_AXLELOADCAT_A, M_AIRTIGHT_Not_fitted, kcg_lit_int32(0), kcg_lit_int32(0),
    { { M_VOLTAGE_Line_not_fitted_with_any_traction_system, kcg_lit_int32(0) },
      { M_VOLTAGE_Line_not_fitted_with_any_traction_system, kcg_lit_int32(0) },
      { M_VOLTAGE_Line_not_fitted_with_any_traction_system, kcg_lit_int32(0) },
      { M_VOLTAGE_Line_not_fitted_with_any_traction_system, kcg_lit_int32(
          0) } }, kcg_lit_int32(0), { kcg_lit_int32(0), kcg_lit_int32(0),
      kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0) } } };

/* RCM_Session_Types_Pkg::cInitialSessionStatus/ */
const sessionStatus_T_RCM_Session_Types_Pkg cInitialSessionStatus_RCM_Session_Types_Pkg = {
  kcg_true, sp_terminated_RCM_Session_Types_Pkg, kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int64(0) };

/* RCM_Session_Types_Pkg::cNoSessionStatus/ */
const sessionStatus_T_RCM_Session_Types_Pkg cNoSessionStatus_RCM_Session_Types_Pkg = {
  kcg_false, sp_terminated_RCM_Session_Types_Pkg, kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int64(0) };

/* RCM_Session_Types_Pkg::cNoSessionCmd/ */
const sessionCmd_T_RCM_Session_Types_Pkg cNoSessionCmd_RCM_Session_Types_Pkg = {
  kcg_false, kcg_false, kcg_false, Q_RBC_Terminate_communication_session,
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int64(0), { kcg_false,
    kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0) }, { kcg_false,
    msrc_undefined_Common_Types_Pkg, { kcg_false, kcg_lit_int32(0),
      kcg_lit_int32(0), kcg_lit_int32(0) } }, { kcg_false,
    msrc_undefined_Common_Types_Pkg, Q_DIR_Reverse,
    Q_RBC_Terminate_communication_session, kcg_lit_int32(0), kcg_lit_int32(0),
    kcg_lit_int64(0), Q_SLEEPSESSION_Ignore_session_establishment_order, {
      kcg_false, kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0) } } };

/* TM::DEFAULT_PHeader/ */
const MetadataElement_T_Common_Types_Pkg DEFAULT_PHeader_TM = { kcg_lit_int32(
    0), Q_DIR_Reverse, kcg_false, kcg_lit_int32(0), kcg_lit_int32(0) };

/* TM::DEFAULT_CompressedPackets/ */
const CompressedPacketData_T_Common_Types_Pkg DEFAULT_CompressedPackets_TM = {
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0) };

/* RCM_Types_Pkg::cNoP45_RadioNetworkRegistration/ */
const P45_RadioNetworkRegistration_T_Packet_Types_Pkg cNoP45_RadioNetworkRegistration_RCM_Types_Pkg = {
  kcg_false, Q_DIR_Reverse, kcg_lit_int32(0) };

/* RCM_MsgTypes_Pkg::cNo_p42_SessionManagement/ */
const p42_sessionManagement_T_RCM_MsgTypes_Pkg cNo_p42_SessionManagement_RCM_MsgTypes_Pkg = {
  kcg_false, msrc_undefined_Common_Types_Pkg, Q_DIR_Reverse,
  Q_RBC_Terminate_communication_session, kcg_lit_int32(0), kcg_lit_int32(0),
  kcg_lit_int64(0), Q_SLEEPSESSION_Ignore_session_establishment_order, {
    kcg_false, kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0) } };

/* MoRC_Pck::Subfunc_Pkg::cNoOrigin/ */
const RBC_Id_T_Common_Types_Pkg cNoOrigin_MoRC_Pck_Subfunc_Pkg = { kcg_false,
  kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0) };

/* MoRC_Pck::cNoMessageToRBC/ */
const Radio_TrainTrack_Message_T_Radio_Types_Pkg cNoMessageToRBC_MoRC_Pck = {
  kcg_false, { kcg_false, kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
    Q_MARQSTREASON_Start_selected_by_driver, kcg_lit_int32(0), kcg_lit_int32(0),
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA,
    kcg_lit_int32(0) }, { { kcg_false, { kcg_lit_int32(0), kcg_lit_int32(0),
        Q_SCALE_10_cm_scale, kcg_lit_int32(0), kcg_lit_int32(0),
        Q_DIRLRBG_Reverse, Q_DLRBG_Reverse, kcg_lit_int32(0), kcg_lit_int32(0),
        Q_LENGTH_No_train_integrity_information_available, kcg_lit_int32(0),
        kcg_lit_int32(0), Q_DIRTRAIN_Reverse, M_MODE_Full_Supervision,
        M_LEVEL_Level_0, kcg_lit_int32(0) } }, { kcg_false, { kcg_lit_int32(0),
        kcg_lit_int32(0), Q_SCALE_10_cm_scale, kcg_lit_int32(0), kcg_lit_int32(
          0), kcg_lit_int32(0), Q_DIRLRBG_Reverse, Q_DLRBG_Reverse,
        kcg_lit_int32(0), kcg_lit_int32(0),
        Q_LENGTH_No_train_integrity_information_available, kcg_lit_int32(0),
        kcg_lit_int32(0), Q_DIRTRAIN_Reverse, M_MODE_Full_Supervision,
        M_LEVEL_Level_0, kcg_lit_int32(0) } }, { kcg_false, kcg_lit_int32(0), {
        { kcg_false, { kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
            kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(
              0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0),
            kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(
              0), kcg_lit_int32(0) } } } }, { kcg_false,
      M_ERROR_Balise_group_linking_consistency_error }, { kcg_false,
      kcg_lit_int32(0) }, { kcg_false, kcg_lit_int32(0) }, { kcg_false,
      NC_CDTRAIN_Cant_Deficiency_80_mm,
      NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category,
      kcg_lit_int32(0), kcg_lit_int32(0),
      M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles,
      M_AXLELOADCAT_A, M_AIRTIGHT_Not_fitted, kcg_lit_int32(0), kcg_lit_int32(
        0), { { M_VOLTAGE_Line_not_fitted_with_any_traction_system,
          kcg_lit_int32(0) }, {
          M_VOLTAGE_Line_not_fitted_with_any_traction_system, kcg_lit_int32(
            0) }, { M_VOLTAGE_Line_not_fitted_with_any_traction_system,
          kcg_lit_int32(0) }, {
          M_VOLTAGE_Line_not_fitted_with_any_traction_system, kcg_lit_int32(
            0) } }, kcg_lit_int32(0), { kcg_lit_int32(0), kcg_lit_int32(0),
        kcg_lit_int32(0), kcg_lit_int32(0), kcg_lit_int32(0) } } } };

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** kcg_consts.c
** Generation date: 2023-09-01T13:21:47
*************************************************************$ */

