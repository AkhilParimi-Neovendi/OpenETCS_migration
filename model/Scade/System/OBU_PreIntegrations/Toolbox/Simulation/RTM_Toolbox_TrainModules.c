/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RTM_Toolbox_TrainModules.h"

/* Toolbox::TrainModules::RTM/ */
void RTM_Toolbox_TrainModules(
  /* systemTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  /* Packets/ */
  CompressedPackets_T_Common_Types_Pkg *Packets,
  /* RadioHeader/ */
  Radio_TrackTrain_Header_T_TM *RadioHeader,
  /* RadioManagementMessage/ */
  RadioManagement_T_API_RadioCommunication_Pkg *RadioManagementMessage,
  outC_RTM_Toolbox_TrainModules *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_bool tmp;
  kcg_bool tmp2;
  /* mobileHWStatus/ */
  mobileHWStatus_Type_MoRC_Pck mobileHWStatus_partial;
  /* registrationFinished/ */
  kcg_bool registrationFinished_partial;
  /* connectionEstablished/ */
  kcg_bool connectionEstablished_partial;
  /* GSM_R_MobileManagement: */
  SSM_ST_GSM_R_MobileManagement GSM_R_MobileManagement_state_nxt_partial;
  /* GSM_R_MobileManagement: */
  kcg_bool GSM_R_MobileManagement_reset_nxt_partial;
  /* GSM_R_MobileManagement: */
  SSM_TR_GSM_R_MobileManagement GSM_R_MobileManagement_fired_partial;
  /* mobileHWStatus/ */
  mobileHWStatus_Type_MoRC_Pck _3_mobileHWStatus_partial;
  /* registrationFinished/ */
  kcg_bool _4_registrationFinished_partial;
  /* connectionEstablished/ */
  kcg_bool _5_connectionEstablished_partial;
  /* GSM_R_MobileManagement: */
  SSM_ST_GSM_R_MobileManagement _6_GSM_R_MobileManagement_state_nxt_partial;
  /* GSM_R_MobileManagement: */
  kcg_bool _7_GSM_R_MobileManagement_reset_nxt_partial;
  /* GSM_R_MobileManagement: */
  SSM_TR_GSM_R_MobileManagement _8_GSM_R_MobileManagement_fired_partial;
  /* mobileHWStatus/ */
  mobileHWStatus_Type_MoRC_Pck _9_mobileHWStatus_partial;
  /* registrationFinished/ */
  kcg_bool _10_registrationFinished_partial;
  /* connectionEstablished/ */
  kcg_bool _11_connectionEstablished_partial;
  /* GSM_R_MobileManagement: */
  SSM_ST_GSM_R_MobileManagement _12_GSM_R_MobileManagement_state_nxt_partial;
  /* GSM_R_MobileManagement: */
  kcg_bool _13_GSM_R_MobileManagement_reset_nxt_partial;
  /* GSM_R_MobileManagement: */
  SSM_TR_GSM_R_MobileManagement _14_GSM_R_MobileManagement_fired_partial;
  /* mobileHWStatus/ */
  mobileHWStatus_Type_MoRC_Pck _15_mobileHWStatus_partial;
  /* registrationFinished/ */
  kcg_bool _16_registrationFinished_partial;
  /* connectionEstablished/ */
  kcg_bool _17_connectionEstablished_partial;
  /* GSM_R_MobileManagement: */
  SSM_ST_GSM_R_MobileManagement _18_GSM_R_MobileManagement_state_nxt_partial;
  /* GSM_R_MobileManagement: */
  kcg_bool _19_GSM_R_MobileManagement_reset_nxt_partial;
  /* GSM_R_MobileManagement: */
  SSM_TR_GSM_R_MobileManagement _20_GSM_R_MobileManagement_fired_partial;
  /* mobileHWStatus/ */
  mobileHWStatus_Type_MoRC_Pck _21_mobileHWStatus_partial;
  /* registrationFinished/ */
  kcg_bool _22_registrationFinished_partial;
  /* connectionEstablished/ */
  kcg_bool _23_connectionEstablished_partial;
  /* GSM_R_MobileManagement: */
  SSM_ST_GSM_R_MobileManagement _24_GSM_R_MobileManagement_state_nxt_partial;
  /* GSM_R_MobileManagement: */
  kcg_bool _25_GSM_R_MobileManagement_reset_nxt_partial;
  /* GSM_R_MobileManagement: */
  SSM_TR_GSM_R_MobileManagement _26_GSM_R_MobileManagement_fired_partial;
  /* GSM_R_MobileManagement: */
  SSM_ST_GSM_R_MobileManagement GSM_R_MobileManagement_state_act_partial;
  /* GSM_R_MobileManagement: */
  kcg_bool GSM_R_MobileManagement_reset_act_partial;
  /* GSM_R_MobileManagement: */
  SSM_TR_GSM_R_MobileManagement GSM_R_MobileManagement_fired_strong_partial;
  /* GSM_R_MobileManagement:Not_registered:<1> */
  kcg_bool tr_1_guard_Not_registered_GSM_R_MobileManagement;
  /* GSM_R_MobileManagement: */
  SSM_ST_GSM_R_MobileManagement _27_GSM_R_MobileManagement_state_act_partial;
  /* GSM_R_MobileManagement: */
  kcg_bool _28_GSM_R_MobileManagement_reset_act_partial;
  /* GSM_R_MobileManagement: */
  SSM_TR_GSM_R_MobileManagement _29_GSM_R_MobileManagement_fired_strong_partial;
  /* GSM_R_MobileManagement:Registering:<2> */
  kcg_bool tr_2_guard_Registering_GSM_R_MobileManagement;
  /* GSM_R_MobileManagement:Registering:<1> */
  kcg_bool tr_1_guard_Registering_GSM_R_MobileManagement;
  /* GSM_R_MobileManagement: */
  SSM_ST_GSM_R_MobileManagement _30_GSM_R_MobileManagement_state_act_partial;
  /* GSM_R_MobileManagement: */
  kcg_bool _31_GSM_R_MobileManagement_reset_act_partial;
  /* GSM_R_MobileManagement: */
  SSM_TR_GSM_R_MobileManagement _32_GSM_R_MobileManagement_fired_strong_partial;
  /* GSM_R_MobileManagement:Registered:<2> */
  kcg_bool tr_2_guard_Registered_GSM_R_MobileManagement;
  /* GSM_R_MobileManagement:Registered:<1> */
  kcg_bool tr_1_guard_Registered_GSM_R_MobileManagement;
  /* GSM_R_MobileManagement: */
  SSM_ST_GSM_R_MobileManagement _33_GSM_R_MobileManagement_state_act_partial;
  /* GSM_R_MobileManagement: */
  kcg_bool _34_GSM_R_MobileManagement_reset_act_partial;
  /* GSM_R_MobileManagement: */
  SSM_TR_GSM_R_MobileManagement _35_GSM_R_MobileManagement_fired_strong_partial;
  /* GSM_R_MobileManagement:Connecting:<2> */
  kcg_bool tr_2_guard_Connecting_GSM_R_MobileManagement;
  /* GSM_R_MobileManagement:Connecting:<1> */
  kcg_bool tr_1_guard_Connecting_GSM_R_MobileManagement;
  /* GSM_R_MobileManagement: */
  SSM_ST_GSM_R_MobileManagement _36_GSM_R_MobileManagement_state_act_partial;
  /* GSM_R_MobileManagement: */
  kcg_bool _37_GSM_R_MobileManagement_reset_act_partial;
  /* GSM_R_MobileManagement: */
  SSM_TR_GSM_R_MobileManagement _38_GSM_R_MobileManagement_fired_strong_partial;
  /* GSM_R_MobileManagement:Connected:<2> */
  kcg_bool tr_2_guard_Connected_GSM_R_MobileManagement;
  /* GSM_R_MobileManagement:Connected:<1> */
  kcg_bool tr_1_guard_Connected_GSM_R_MobileManagement;
  /* radioMetadata/ */
  RadioMetadata_T_Common_Types_Pkg radioMetadata_partial;
  /* radioMetadata/ */
  RadioMetadata_T_Common_Types_Pkg _39_radioMetadata_partial;
  /* radioMetadata/ */
  RadioMetadata_T_Common_Types_Pkg _40_radioMetadata_partial;
  /* radioMetadata/ */
  RadioMetadata_T_Common_Types_Pkg _41_radioMetadata_partial;
  /* radioMetadata/ */
  RadioMetadata_T_Common_Types_Pkg _42_radioMetadata_partial;
  /* radioMetadata/ */
  RadioMetadata_T_Common_Types_Pkg _43_radioMetadata_partial;
  /* radioMetadata/ */
  RadioMetadata_T_Common_Types_Pkg _44_radioMetadata_partial;
  /* radioMetadata/ */
  RadioMetadata_T_Common_Types_Pkg _45_radioMetadata_partial;
  /* radioMetadata/ */
  RadioMetadata_T_Common_Types_Pkg _46_radioMetadata_partial;
  /* radioMetadata/ */
  RadioMetadata_T_Common_Types_Pkg _47_radioMetadata_partial;
  /* radioMetadata/ */
  RadioMetadata_T_Common_Types_Pkg _48_radioMetadata_partial;
  /* radioMetadata/ */
  RadioMetadata_T_Common_Types_Pkg _49_radioMetadata_partial;
  /* radioMetadata/ */
  RadioMetadata_T_Common_Types_Pkg _50_radioMetadata_partial;
  /* radioMetadata/ */
  RadioMetadata_T_Common_Types_Pkg _51_radioMetadata_partial;
  /* radioMetadata/ */
  RadioMetadata_T_Common_Types_Pkg _52_radioMetadata_partial;
  /* radioMetadata/ */
  RadioMetadata_T_Common_Types_Pkg _53_radioMetadata_partial;
  /* radioMetadata/ */
  RadioMetadata_T_Common_Types_Pkg _54_radioMetadata_partial;
  /* radioMetadata/ */
  RadioMetadata_T_Common_Types_Pkg _55_radioMetadata_partial;
  /* radioMetadata/ */
  RadioMetadata_T_Common_Types_Pkg _56_radioMetadata_partial;
  /* radioMetadata/ */
  RadioMetadata_T_Common_Types_Pkg _57_radioMetadata_partial;
  /* radioMetadata/ */
  RadioMetadata_T_Common_Types_Pkg _58_radioMetadata_partial;
  /* radioMetadata/ */
  RadioMetadata_T_Common_Types_Pkg _59_radioMetadata_partial;
  /* radioMetadata/ */
  RadioMetadata_T_Common_Types_Pkg _60_radioMetadata_partial;
  /* radioMetadata/ */
  RadioMetadata_T_Common_Types_Pkg _61_radioMetadata_partial;
  /* radioMetadata/ */
  RadioMetadata_T_Common_Types_Pkg _62_radioMetadata_partial;
  /* radioMetadata/ */
  RadioMetadata_T_Common_Types_Pkg _63_radioMetadata_partial;
  /* radioMetadata/ */
  RadioMetadata_T_Common_Types_Pkg _64_radioMetadata_partial;
  /* radioMetadata/ */
  RadioMetadata_T_Common_Types_Pkg _65_radioMetadata_partial;
  /* radioMetadata/ */
  RadioMetadata_T_Common_Types_Pkg _66_radioMetadata_partial;
  /* radioMetadata/ */
  RadioMetadata_T_Common_Types_Pkg _67_radioMetadata_partial;
  /* radioMetadata/ */
  RadioMetadata_T_Common_Types_Pkg _68_radioMetadata_partial;
  /* radioMetadata/ */
  RadioMetadata_T_Common_Types_Pkg _69_radioMetadata_partial;
  /* radioMetadata/ */
  RadioMetadata_T_Common_Types_Pkg _70_radioMetadata_partial;
  /* radioMetadata/ */
  RadioMetadata_T_Common_Types_Pkg _71_radioMetadata_partial;
  /* radioMetadata/ */
  RadioMetadata_T_Common_Types_Pkg _72_radioMetadata_partial;
  /* radioMetadata/ */
  RadioMetadata_T_Common_Types_Pkg _73_radioMetadata_partial;
  /* radioMetadata/ */
  RadioMetadata_T_Common_Types_Pkg _74_radioMetadata_partial;
  /* radioMetadata/ */
  RadioMetadata_T_Common_Types_Pkg _75_radioMetadata_partial;
  /* radioMetadata/ */
  RadioMetadata_T_Common_Types_Pkg _76_radioMetadata_partial;
  /* radioMetadata/ */
  RadioMetadata_T_Common_Types_Pkg _77_radioMetadata_partial;
  /* radioMetadata/ */
  RadioMetadata_T_Common_Types_Pkg _78_radioMetadata_partial;
  /* radioMetadata/ */
  RadioMetadata_T_Common_Types_Pkg _79_radioMetadata_partial;
  /* connectionEstablished/ */
  kcg_bool last_connectionEstablished;
  /* registrationFinished/ */
  kcg_bool last_registrationFinished;
  /* mobileHWStatus/ */
  mobileHWStatus_Type_MoRC_Pck last_mobileHWStatus;
  /* GSM_R_MobileManagement: */
  kcg_bool GSM_R_MobileManagement_reset_sel;
  /* GSM_R_MobileManagement: */
  kcg_bool GSM_R_MobileManagement_reset_prv;

  last_connectionEstablished = outC->connectionEstablished;
  last_registrationFinished = outC->registrationFinished;
  kcg_copy_mobileHWStatus_Type_MoRC_Pck(
    &last_mobileHWStatus,
    &outC->mobileHWStatus);
  outC->_L55 = kcg_lit_int64(0);
  outC->_L54 = kcg_true;
  outC->_L53.valid = outC->_L54;
  outC->_L53.nid_c = outC->_L55;
  outC->_L53.rbc_id = outC->_L55;
  outC->_L53.device_id = outC->_L55;
  outC->GSM_R_MobileManagement_state_sel = outC->GSM_R_MobileManagement_state_nxt;
  /* GSM_R_MobileManagement: */
  switch (outC->GSM_R_MobileManagement_state_sel) {
    case SSM_st_Connected_GSM_R_MobileManagement :
      tr_2_guard_Connected_GSM_R_MobileManagement =
        (*RadioManagementMessage).valid & ((*RadioManagementMessage).cmd ==
          cmdr_reset_connection_API_RadioCommunication_Pkg);
      tr_1_guard_Connected_GSM_R_MobileManagement =
        (*RadioManagementMessage).valid & ((*RadioManagementMessage).cmd ==
          cmdr_disconnection_request_API_RadioCommunication_Pkg);
      if (tr_1_guard_Connected_GSM_R_MobileManagement) {
        _36_GSM_R_MobileManagement_state_act_partial =
          SSM_st_Registered_GSM_R_MobileManagement;
      }
      else if (tr_2_guard_Connected_GSM_R_MobileManagement) {
        _36_GSM_R_MobileManagement_state_act_partial =
          SSM_st_Not_registered_GSM_R_MobileManagement;
      }
      else {
        _36_GSM_R_MobileManagement_state_act_partial =
          SSM_st_Connected_GSM_R_MobileManagement;
      }
      outC->GSM_R_MobileManagement_state_act =
        _36_GSM_R_MobileManagement_state_act_partial;
      break;
    case SSM_st_Connecting_GSM_R_MobileManagement :
      tr_2_guard_Connecting_GSM_R_MobileManagement =
        (*RadioManagementMessage).valid & ((*RadioManagementMessage).cmd ==
          cmdr_reset_connection_API_RadioCommunication_Pkg);
      tr_1_guard_Connecting_GSM_R_MobileManagement = last_connectionEstablished;
      if (tr_1_guard_Connecting_GSM_R_MobileManagement) {
        _33_GSM_R_MobileManagement_state_act_partial =
          SSM_st_Connected_GSM_R_MobileManagement;
      }
      else if (tr_2_guard_Connecting_GSM_R_MobileManagement) {
        _33_GSM_R_MobileManagement_state_act_partial =
          SSM_st_Not_registered_GSM_R_MobileManagement;
      }
      else {
        _33_GSM_R_MobileManagement_state_act_partial =
          SSM_st_Connecting_GSM_R_MobileManagement;
      }
      outC->GSM_R_MobileManagement_state_act =
        _33_GSM_R_MobileManagement_state_act_partial;
      break;
    case SSM_st_Registered_GSM_R_MobileManagement :
      tr_2_guard_Registered_GSM_R_MobileManagement =
        ((*RadioManagementMessage).valid & ((*RadioManagementMessage).cmd ==
            cmdr_reset_connection_API_RadioCommunication_Pkg)) |
        ((*RadioManagementMessage).cmd ==
          cmdr_networkUnregister_API_RadioCommunication_Pkg);
      tr_1_guard_Registered_GSM_R_MobileManagement =
        (*RadioManagementMessage).valid & ((*RadioManagementMessage).cmd ==
          cmdr_connection_request_API_RadioCommunication_Pkg);
      if (tr_1_guard_Registered_GSM_R_MobileManagement) {
        _30_GSM_R_MobileManagement_state_act_partial =
          SSM_st_Connecting_GSM_R_MobileManagement;
      }
      else if (tr_2_guard_Registered_GSM_R_MobileManagement) {
        _30_GSM_R_MobileManagement_state_act_partial =
          SSM_st_Not_registered_GSM_R_MobileManagement;
      }
      else {
        _30_GSM_R_MobileManagement_state_act_partial =
          SSM_st_Registered_GSM_R_MobileManagement;
      }
      outC->GSM_R_MobileManagement_state_act =
        _30_GSM_R_MobileManagement_state_act_partial;
      break;
    case SSM_st_Registering_GSM_R_MobileManagement :
      tr_2_guard_Registering_GSM_R_MobileManagement =
        (*RadioManagementMessage).valid & ((*RadioManagementMessage).cmd ==
          cmdr_reset_connection_API_RadioCommunication_Pkg);
      tr_1_guard_Registering_GSM_R_MobileManagement = last_registrationFinished;
      if (tr_1_guard_Registering_GSM_R_MobileManagement) {
        _27_GSM_R_MobileManagement_state_act_partial =
          SSM_st_Registered_GSM_R_MobileManagement;
      }
      else if (tr_2_guard_Registering_GSM_R_MobileManagement) {
        _27_GSM_R_MobileManagement_state_act_partial =
          SSM_st_Not_registered_GSM_R_MobileManagement;
      }
      else {
        _27_GSM_R_MobileManagement_state_act_partial =
          SSM_st_Registering_GSM_R_MobileManagement;
      }
      outC->GSM_R_MobileManagement_state_act =
        _27_GSM_R_MobileManagement_state_act_partial;
      break;
    case SSM_st_Not_registered_GSM_R_MobileManagement :
      tr_1_guard_Not_registered_GSM_R_MobileManagement =
        (*RadioManagementMessage).valid & ((*RadioManagementMessage).cmd ==
          cmdr_networkRegister_API_RadioCommunication_Pkg);
      if (tr_1_guard_Not_registered_GSM_R_MobileManagement) {
        GSM_R_MobileManagement_state_act_partial =
          SSM_st_Registering_GSM_R_MobileManagement;
      }
      else {
        GSM_R_MobileManagement_state_act_partial =
          SSM_st_Not_registered_GSM_R_MobileManagement;
      }
      outC->GSM_R_MobileManagement_state_act =
        GSM_R_MobileManagement_state_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->GSM_R_MobileManagement_state_act) {
    case SSM_st_Connected_GSM_R_MobileManagement :
      _23_connectionEstablished_partial = last_connectionEstablished;
      _22_registrationFinished_partial = last_registrationFinished;
      break;
    default :
      /* this branch is empty */
      break;
  }
  /* GSM_R_MobileManagement: */
  switch (outC->GSM_R_MobileManagement_state_sel) {
    case SSM_st_Connected_GSM_R_MobileManagement :
      if (tr_1_guard_Connected_GSM_R_MobileManagement) {
        _38_GSM_R_MobileManagement_fired_strong_partial =
          SSM_TR_Connected_Registered_1_Connected_GSM_R_MobileManagement;
      }
      else if (tr_2_guard_Connected_GSM_R_MobileManagement) {
        _38_GSM_R_MobileManagement_fired_strong_partial =
          SSM_TR_Connected_Not_registered_2_Connected_GSM_R_MobileManagement;
      }
      else {
        _38_GSM_R_MobileManagement_fired_strong_partial =
          SSM_TR_no_trans_GSM_R_MobileManagement;
      }
      outC->GSM_R_MobileManagement_fired_strong =
        _38_GSM_R_MobileManagement_fired_strong_partial;
      break;
    case SSM_st_Connecting_GSM_R_MobileManagement :
      if (tr_1_guard_Connecting_GSM_R_MobileManagement) {
        _35_GSM_R_MobileManagement_fired_strong_partial =
          SSM_TR_Connecting_Connected_1_Connecting_GSM_R_MobileManagement;
      }
      else if (tr_2_guard_Connecting_GSM_R_MobileManagement) {
        _35_GSM_R_MobileManagement_fired_strong_partial =
          SSM_TR_Connecting_Not_registered_2_Connecting_GSM_R_MobileManagement;
      }
      else {
        _35_GSM_R_MobileManagement_fired_strong_partial =
          SSM_TR_no_trans_GSM_R_MobileManagement;
      }
      outC->GSM_R_MobileManagement_fired_strong =
        _35_GSM_R_MobileManagement_fired_strong_partial;
      break;
    case SSM_st_Registered_GSM_R_MobileManagement :
      if (tr_1_guard_Registered_GSM_R_MobileManagement) {
        _32_GSM_R_MobileManagement_fired_strong_partial =
          SSM_TR_Registered_Connecting_1_Registered_GSM_R_MobileManagement;
      }
      else if (tr_2_guard_Registered_GSM_R_MobileManagement) {
        _32_GSM_R_MobileManagement_fired_strong_partial =
          SSM_TR_Registered_Not_registered_2_Registered_GSM_R_MobileManagement;
      }
      else {
        _32_GSM_R_MobileManagement_fired_strong_partial =
          SSM_TR_no_trans_GSM_R_MobileManagement;
      }
      outC->GSM_R_MobileManagement_fired_strong =
        _32_GSM_R_MobileManagement_fired_strong_partial;
      break;
    case SSM_st_Registering_GSM_R_MobileManagement :
      if (tr_1_guard_Registering_GSM_R_MobileManagement) {
        _29_GSM_R_MobileManagement_fired_strong_partial =
          SSM_TR_Registering_Registered_1_Registering_GSM_R_MobileManagement;
      }
      else if (tr_2_guard_Registering_GSM_R_MobileManagement) {
        _29_GSM_R_MobileManagement_fired_strong_partial =
          SSM_TR_Registering_Not_registered_2_Registering_GSM_R_MobileManagement;
      }
      else {
        _29_GSM_R_MobileManagement_fired_strong_partial =
          SSM_TR_no_trans_GSM_R_MobileManagement;
      }
      outC->GSM_R_MobileManagement_fired_strong =
        _29_GSM_R_MobileManagement_fired_strong_partial;
      break;
    case SSM_st_Not_registered_GSM_R_MobileManagement :
      if (tr_1_guard_Not_registered_GSM_R_MobileManagement) {
        GSM_R_MobileManagement_fired_strong_partial =
          SSM_TR_Not_registered_Registering_1_Not_registered_GSM_R_MobileManagement;
      }
      else {
        GSM_R_MobileManagement_fired_strong_partial =
          SSM_TR_no_trans_GSM_R_MobileManagement;
      }
      outC->GSM_R_MobileManagement_fired_strong =
        GSM_R_MobileManagement_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->GSM_R_MobileManagement_state_act) {
    case SSM_st_Connected_GSM_R_MobileManagement :
      _26_GSM_R_MobileManagement_fired_partial =
        outC->GSM_R_MobileManagement_fired_strong;
      _25_GSM_R_MobileManagement_reset_nxt_partial = kcg_false;
      _24_GSM_R_MobileManagement_state_nxt_partial =
        SSM_st_Connected_GSM_R_MobileManagement;
      kcg_copy_mobileHWStatus_Type_MoRC_Pck(
        &outC->_L1_Connected_GSM_R_MobileManagement,
        (mobileHWStatus_Type_MoRC_Pck *) &cMobileHWStatus_Connected_MoRC_Pck);
      kcg_copy_mobileHWStatus_Type_MoRC_Pck(
        &_21_mobileHWStatus_partial,
        &outC->_L1_Connected_GSM_R_MobileManagement);
      break;
    case SSM_st_Connecting_GSM_R_MobileManagement :
      _16_registrationFinished_partial = last_registrationFinished;
      _20_GSM_R_MobileManagement_fired_partial =
        outC->GSM_R_MobileManagement_fired_strong;
      _19_GSM_R_MobileManagement_reset_nxt_partial = kcg_false;
      _18_GSM_R_MobileManagement_state_nxt_partial =
        SSM_st_Connecting_GSM_R_MobileManagement;
      tmp = kcg_false;
      break;
    default :
      /* this branch is empty */
      break;
  }
  GSM_R_MobileManagement_reset_prv = outC->GSM_R_MobileManagement_reset_act;
  /* GSM_R_MobileManagement: */
  switch (outC->GSM_R_MobileManagement_state_sel) {
    case SSM_st_Connected_GSM_R_MobileManagement :
      if (tr_1_guard_Connected_GSM_R_MobileManagement) {
        _37_GSM_R_MobileManagement_reset_act_partial = kcg_true;
      }
      else {
        _37_GSM_R_MobileManagement_reset_act_partial =
          tr_2_guard_Connected_GSM_R_MobileManagement;
      }
      outC->GSM_R_MobileManagement_reset_act =
        _37_GSM_R_MobileManagement_reset_act_partial;
      break;
    case SSM_st_Connecting_GSM_R_MobileManagement :
      if (tr_1_guard_Connecting_GSM_R_MobileManagement) {
        _34_GSM_R_MobileManagement_reset_act_partial = kcg_true;
      }
      else {
        _34_GSM_R_MobileManagement_reset_act_partial =
          tr_2_guard_Connecting_GSM_R_MobileManagement;
      }
      outC->GSM_R_MobileManagement_reset_act =
        _34_GSM_R_MobileManagement_reset_act_partial;
      break;
    case SSM_st_Registered_GSM_R_MobileManagement :
      if (tr_1_guard_Registered_GSM_R_MobileManagement) {
        _31_GSM_R_MobileManagement_reset_act_partial = kcg_true;
      }
      else {
        _31_GSM_R_MobileManagement_reset_act_partial =
          tr_2_guard_Registered_GSM_R_MobileManagement;
      }
      outC->GSM_R_MobileManagement_reset_act =
        _31_GSM_R_MobileManagement_reset_act_partial;
      break;
    case SSM_st_Registering_GSM_R_MobileManagement :
      if (tr_1_guard_Registering_GSM_R_MobileManagement) {
        _28_GSM_R_MobileManagement_reset_act_partial = kcg_true;
      }
      else {
        _28_GSM_R_MobileManagement_reset_act_partial =
          tr_2_guard_Registering_GSM_R_MobileManagement;
      }
      outC->GSM_R_MobileManagement_reset_act =
        _28_GSM_R_MobileManagement_reset_act_partial;
      break;
    case SSM_st_Not_registered_GSM_R_MobileManagement :
      GSM_R_MobileManagement_reset_act_partial =
        tr_1_guard_Not_registered_GSM_R_MobileManagement;
      outC->GSM_R_MobileManagement_reset_act =
        GSM_R_MobileManagement_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* GSM_R_MobileManagement: */
  switch (outC->GSM_R_MobileManagement_state_act) {
    case SSM_st_Connected_GSM_R_MobileManagement :
      kcg_copy_mobileHWStatus_Type_MoRC_Pck(
        &outC->mobileHWStatus,
        &_21_mobileHWStatus_partial);
      outC->registrationFinished = _22_registrationFinished_partial;
      outC->connectionEstablished = _23_connectionEstablished_partial;
      outC->GSM_R_MobileManagement_state_nxt =
        _24_GSM_R_MobileManagement_state_nxt_partial;
      break;
    case SSM_st_Connecting_GSM_R_MobileManagement :
      if (outC->GSM_R_MobileManagement_reset_act) {
        outC->init = kcg_true;
      }
      /* GSM_R_MobileManagement:Connecting:_L2= */
      if (outC->init) {
        /* GSM_R_MobileManagement:Connecting:_L2= */
        for (idx = 0; idx < 5; idx++) {
          outC->fby_4.items[idx] = tmp;
        }
        outC->fby_4.idx = 0;
      }
      outC->_L2_Connecting_GSM_R_MobileManagement =
        outC->fby_4.items[outC->fby_4.idx];
      _17_connectionEstablished_partial = outC->_L2_Connecting_GSM_R_MobileManagement;
      outC->_L3_Connecting_GSM_R_MobileManagement = kcg_true;
      outC->fby_4.items[outC->fby_4.idx] =
        outC->_L3_Connecting_GSM_R_MobileManagement;
      outC->fby_4.idx = (outC->fby_4.idx + 1) % 5;
      kcg_copy_mobileHWStatus_Type_MoRC_Pck(
        &outC->_L1_Connecting_GSM_R_MobileManagement,
        (mobileHWStatus_Type_MoRC_Pck *) &cMobileHWStatus_Registered_MoRC_Pck);
      kcg_copy_mobileHWStatus_Type_MoRC_Pck(
        &_15_mobileHWStatus_partial,
        &outC->_L1_Connecting_GSM_R_MobileManagement);
      kcg_copy_mobileHWStatus_Type_MoRC_Pck(
        &outC->mobileHWStatus,
        &_15_mobileHWStatus_partial);
      outC->registrationFinished = _16_registrationFinished_partial;
      outC->connectionEstablished = _17_connectionEstablished_partial;
      outC->GSM_R_MobileManagement_state_nxt =
        _18_GSM_R_MobileManagement_state_nxt_partial;
      break;
    case SSM_st_Registered_GSM_R_MobileManagement :
      _11_connectionEstablished_partial = last_connectionEstablished;
      _10_registrationFinished_partial = last_registrationFinished;
      _14_GSM_R_MobileManagement_fired_partial =
        outC->GSM_R_MobileManagement_fired_strong;
      _13_GSM_R_MobileManagement_reset_nxt_partial = kcg_false;
      _12_GSM_R_MobileManagement_state_nxt_partial =
        SSM_st_Registered_GSM_R_MobileManagement;
      kcg_copy_mobileHWStatus_Type_MoRC_Pck(
        &outC->_L1_Registered_GSM_R_MobileManagement,
        (mobileHWStatus_Type_MoRC_Pck *) &cMobileHWStatus_Registered_MoRC_Pck);
      kcg_copy_mobileHWStatus_Type_MoRC_Pck(
        &_9_mobileHWStatus_partial,
        &outC->_L1_Registered_GSM_R_MobileManagement);
      kcg_copy_mobileHWStatus_Type_MoRC_Pck(
        &outC->mobileHWStatus,
        &_9_mobileHWStatus_partial);
      outC->registrationFinished = _10_registrationFinished_partial;
      outC->connectionEstablished = _11_connectionEstablished_partial;
      outC->GSM_R_MobileManagement_state_nxt =
        _12_GSM_R_MobileManagement_state_nxt_partial;
      break;
    case SSM_st_Registering_GSM_R_MobileManagement :
      _5_connectionEstablished_partial = last_connectionEstablished;
      _8_GSM_R_MobileManagement_fired_partial =
        outC->GSM_R_MobileManagement_fired_strong;
      _7_GSM_R_MobileManagement_reset_nxt_partial = kcg_false;
      _6_GSM_R_MobileManagement_state_nxt_partial =
        SSM_st_Registering_GSM_R_MobileManagement;
      tmp2 = kcg_false;
      if (outC->GSM_R_MobileManagement_reset_act) {
        outC->init1 = kcg_true;
      }
      /* GSM_R_MobileManagement:Registering:_L2= */
      if (outC->init1) {
        /* GSM_R_MobileManagement:Registering:_L2= */
        for (idx1 = 0; idx1 < 5; idx1++) {
          outC->fby_3.items[idx1] = tmp2;
        }
        outC->fby_3.idx = 0;
      }
      outC->_L2_Registering_GSM_R_MobileManagement =
        outC->fby_3.items[outC->fby_3.idx];
      _4_registrationFinished_partial = outC->_L2_Registering_GSM_R_MobileManagement;
      outC->_L3_Registering_GSM_R_MobileManagement = kcg_true;
      outC->fby_3.items[outC->fby_3.idx] =
        outC->_L3_Registering_GSM_R_MobileManagement;
      outC->fby_3.idx = (outC->fby_3.idx + 1) % 5;
      kcg_copy_mobileHWStatus_Type_MoRC_Pck(
        &outC->_L1_Registering_GSM_R_MobileManagement,
        (mobileHWStatus_Type_MoRC_Pck *) &cMobileHWStatus_notRegistered_MoRC_Pck);
      kcg_copy_mobileHWStatus_Type_MoRC_Pck(
        &_3_mobileHWStatus_partial,
        &outC->_L1_Registering_GSM_R_MobileManagement);
      kcg_copy_mobileHWStatus_Type_MoRC_Pck(
        &outC->mobileHWStatus,
        &_3_mobileHWStatus_partial);
      outC->registrationFinished = _4_registrationFinished_partial;
      outC->connectionEstablished = _5_connectionEstablished_partial;
      outC->GSM_R_MobileManagement_state_nxt =
        _6_GSM_R_MobileManagement_state_nxt_partial;
      break;
    case SSM_st_Not_registered_GSM_R_MobileManagement :
      connectionEstablished_partial = last_connectionEstablished;
      registrationFinished_partial = last_registrationFinished;
      GSM_R_MobileManagement_fired_partial =
        outC->GSM_R_MobileManagement_fired_strong;
      GSM_R_MobileManagement_reset_nxt_partial = kcg_false;
      GSM_R_MobileManagement_state_nxt_partial =
        SSM_st_Not_registered_GSM_R_MobileManagement;
      kcg_copy_mobileHWStatus_Type_MoRC_Pck(
        &outC->_L1_Not_registered_GSM_R_MobileManagement,
        (mobileHWStatus_Type_MoRC_Pck *) &cMobileHWStatus_notRegistered_MoRC_Pck);
      kcg_copy_mobileHWStatus_Type_MoRC_Pck(
        &mobileHWStatus_partial,
        &outC->_L1_Not_registered_GSM_R_MobileManagement);
      kcg_copy_mobileHWStatus_Type_MoRC_Pck(
        &outC->mobileHWStatus,
        &mobileHWStatus_partial);
      outC->registrationFinished = registrationFinished_partial;
      outC->connectionEstablished = connectionEstablished_partial;
      outC->GSM_R_MobileManagement_state_nxt =
        GSM_R_MobileManagement_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  GSM_R_MobileManagement_reset_sel = outC->GSM_R_MobileManagement_reset_nxt;
  /* GSM_R_MobileManagement: */
  switch (outC->GSM_R_MobileManagement_state_act) {
    case SSM_st_Connected_GSM_R_MobileManagement :
      outC->GSM_R_MobileManagement_reset_nxt =
        _25_GSM_R_MobileManagement_reset_nxt_partial;
      outC->GSM_R_MobileManagement_fired = _26_GSM_R_MobileManagement_fired_partial;
      break;
    case SSM_st_Connecting_GSM_R_MobileManagement :
      outC->GSM_R_MobileManagement_reset_nxt =
        _19_GSM_R_MobileManagement_reset_nxt_partial;
      outC->GSM_R_MobileManagement_fired = _20_GSM_R_MobileManagement_fired_partial;
      break;
    case SSM_st_Registered_GSM_R_MobileManagement :
      outC->GSM_R_MobileManagement_reset_nxt =
        _13_GSM_R_MobileManagement_reset_nxt_partial;
      outC->GSM_R_MobileManagement_fired = _14_GSM_R_MobileManagement_fired_partial;
      break;
    case SSM_st_Registering_GSM_R_MobileManagement :
      outC->GSM_R_MobileManagement_reset_nxt =
        _7_GSM_R_MobileManagement_reset_nxt_partial;
      outC->GSM_R_MobileManagement_fired = _8_GSM_R_MobileManagement_fired_partial;
      break;
    case SSM_st_Not_registered_GSM_R_MobileManagement :
      outC->GSM_R_MobileManagement_reset_nxt =
        GSM_R_MobileManagement_reset_nxt_partial;
      outC->GSM_R_MobileManagement_fired = GSM_R_MobileManagement_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  kcg_copy_Radio_TrackTrain_Header_T_TM(&outC->_L6, RadioHeader);
  /* _L51=(TM_conversions::C_Int_TrackTrainMessage#1)/ */
  C_Int_TrackTrainMessage_TM_conversions(
    &outC->_L6,
    &outC->Context_C_Int_TrackTrainMessage_1);
  kcg_copy__5_Radio_TrackTrain_Header_T_TM_transitional(
    &outC->_L51,
    &outC->Context_C_Int_TrackTrainMessage_1.Message_Out);
  outC->_L52 = outC->_L51.nid_message;
  outC->IfBlock1_clock = (*RadioHeader).nid_message == kcg_lit_int64(2);
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L3_then_IfBlock1 = kcg_true;
    outC->_L4_then_IfBlock1 = kcg_false;
    outC->_L1_then_IfBlock1.t_train_reference = outC->_L4_then_IfBlock1;
    outC->_L1_then_IfBlock1.nid_em = outC->_L4_then_IfBlock1;
    outC->_L1_then_IfBlock1.q_scale = outC->_L3_then_IfBlock1;
    outC->_L1_then_IfBlock1.d_sr = outC->_L3_then_IfBlock1;
    outC->_L1_then_IfBlock1.t_sh_rqst = outC->_L4_then_IfBlock1;
    outC->_L1_then_IfBlock1.d_ref = outC->_L4_then_IfBlock1;
    outC->_L1_then_IfBlock1.q_dir = outC->_L4_then_IfBlock1;
    outC->_L1_then_IfBlock1.d_emergencystop = outC->_L4_then_IfBlock1;
    outC->_L1_then_IfBlock1.m_version = outC->_L4_then_IfBlock1;
    kcg_copy_RadioMetadata_T_Common_Types_Pkg(
      &radioMetadata_partial,
      &outC->_L1_then_IfBlock1);
    kcg_copy_RadioMetadata_T_Common_Types_Pkg(
      &outC->radioMetadata,
      &radioMetadata_partial);
  }
  else {
    outC->else_clock_IfBlock1 = (*RadioHeader).nid_message == kcg_lit_int64(3);
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L3_then_else_IfBlock1 = kcg_false;
      outC->_L1_then_else_IfBlock1.t_train_reference = outC->_L3_then_else_IfBlock1;
      outC->_L1_then_else_IfBlock1.nid_em = outC->_L3_then_else_IfBlock1;
      outC->_L1_then_else_IfBlock1.q_scale = outC->_L3_then_else_IfBlock1;
      outC->_L1_then_else_IfBlock1.d_sr = outC->_L3_then_else_IfBlock1;
      outC->_L1_then_else_IfBlock1.t_sh_rqst = outC->_L3_then_else_IfBlock1;
      outC->_L1_then_else_IfBlock1.d_ref = outC->_L3_then_else_IfBlock1;
      outC->_L1_then_else_IfBlock1.q_dir = outC->_L3_then_else_IfBlock1;
      outC->_L1_then_else_IfBlock1.d_emergencystop = outC->_L3_then_else_IfBlock1;
      outC->_L1_then_else_IfBlock1.m_version = outC->_L3_then_else_IfBlock1;
      kcg_copy_RadioMetadata_T_Common_Types_Pkg(
        &_79_radioMetadata_partial,
        &outC->_L1_then_else_IfBlock1);
      kcg_copy_RadioMetadata_T_Common_Types_Pkg(
        &_39_radioMetadata_partial,
        &_79_radioMetadata_partial);
    }
    else {
      outC->else_clock_else_IfBlock1 = (*RadioHeader).nid_message == kcg_lit_int64(6);
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L1_then_else_else_IfBlock1 = kcg_false;
        outC->_L2_then_else_else_IfBlock1.t_train_reference =
          outC->_L1_then_else_else_IfBlock1;
        outC->_L2_then_else_else_IfBlock1.nid_em = outC->_L1_then_else_else_IfBlock1;
        outC->_L2_then_else_else_IfBlock1.q_scale = outC->_L1_then_else_else_IfBlock1;
        outC->_L2_then_else_else_IfBlock1.d_sr = outC->_L1_then_else_else_IfBlock1;
        outC->_L2_then_else_else_IfBlock1.t_sh_rqst = outC->_L1_then_else_else_IfBlock1;
        outC->_L2_then_else_else_IfBlock1.d_ref = outC->_L1_then_else_else_IfBlock1;
        outC->_L2_then_else_else_IfBlock1.q_dir = outC->_L1_then_else_else_IfBlock1;
        outC->_L2_then_else_else_IfBlock1.d_emergencystop =
          outC->_L1_then_else_else_IfBlock1;
        outC->_L2_then_else_else_IfBlock1.m_version = outC->_L1_then_else_else_IfBlock1;
        kcg_copy_RadioMetadata_T_Common_Types_Pkg(
          &_40_radioMetadata_partial,
          &outC->_L2_then_else_else_IfBlock1);
        kcg_copy_RadioMetadata_T_Common_Types_Pkg(
          &_78_radioMetadata_partial,
          &_40_radioMetadata_partial);
      }
      else {
        outC->else_clock_else_else_IfBlock1 = (*RadioHeader).nid_message ==
          kcg_lit_int64(8);
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          outC->_L3_then_else_else_else_IfBlock1 = kcg_true;
          outC->_L1_then_else_else_else_IfBlock1 = kcg_false;
          outC->_L2_then_else_else_else_IfBlock1.t_train_reference =
            outC->_L3_then_else_else_else_IfBlock1;
          outC->_L2_then_else_else_else_IfBlock1.nid_em =
            outC->_L1_then_else_else_else_IfBlock1;
          outC->_L2_then_else_else_else_IfBlock1.q_scale =
            outC->_L1_then_else_else_else_IfBlock1;
          outC->_L2_then_else_else_else_IfBlock1.d_sr =
            outC->_L1_then_else_else_else_IfBlock1;
          outC->_L2_then_else_else_else_IfBlock1.t_sh_rqst =
            outC->_L1_then_else_else_else_IfBlock1;
          outC->_L2_then_else_else_else_IfBlock1.d_ref =
            outC->_L1_then_else_else_else_IfBlock1;
          outC->_L2_then_else_else_else_IfBlock1.q_dir =
            outC->_L1_then_else_else_else_IfBlock1;
          outC->_L2_then_else_else_else_IfBlock1.d_emergencystop =
            outC->_L1_then_else_else_else_IfBlock1;
          outC->_L2_then_else_else_else_IfBlock1.m_version =
            outC->_L1_then_else_else_else_IfBlock1;
          kcg_copy_RadioMetadata_T_Common_Types_Pkg(
            &_77_radioMetadata_partial,
            &outC->_L2_then_else_else_else_IfBlock1);
          kcg_copy_RadioMetadata_T_Common_Types_Pkg(
            &_41_radioMetadata_partial,
            &_77_radioMetadata_partial);
        }
        else {
          outC->else_clock_else_else_else_IfBlock1 =
            (*RadioHeader).nid_message == kcg_lit_int64(9);
          /* IfBlock1:else:else:else:else: */
          if (outC->else_clock_else_else_else_IfBlock1) {
            outC->_L2_then_else_else_else_else_IfBlock1 = kcg_false;
            outC->_L1_then_else_else_else_else_IfBlock1.t_train_reference =
              outC->_L2_then_else_else_else_else_IfBlock1;
            outC->_L1_then_else_else_else_else_IfBlock1.nid_em =
              outC->_L2_then_else_else_else_else_IfBlock1;
            outC->_L1_then_else_else_else_else_IfBlock1.q_scale =
              outC->_L2_then_else_else_else_else_IfBlock1;
            outC->_L1_then_else_else_else_else_IfBlock1.d_sr =
              outC->_L2_then_else_else_else_else_IfBlock1;
            outC->_L1_then_else_else_else_else_IfBlock1.t_sh_rqst =
              outC->_L2_then_else_else_else_else_IfBlock1;
            outC->_L1_then_else_else_else_else_IfBlock1.d_ref =
              outC->_L2_then_else_else_else_else_IfBlock1;
            outC->_L1_then_else_else_else_else_IfBlock1.q_dir =
              outC->_L2_then_else_else_else_else_IfBlock1;
            outC->_L1_then_else_else_else_else_IfBlock1.d_emergencystop =
              outC->_L2_then_else_else_else_else_IfBlock1;
            outC->_L1_then_else_else_else_else_IfBlock1.m_version =
              outC->_L2_then_else_else_else_else_IfBlock1;
            kcg_copy_RadioMetadata_T_Common_Types_Pkg(
              &_42_radioMetadata_partial,
              &outC->_L1_then_else_else_else_else_IfBlock1);
            kcg_copy_RadioMetadata_T_Common_Types_Pkg(
              &_76_radioMetadata_partial,
              &_42_radioMetadata_partial);
          }
          else {
            outC->else_clock_else_else_else_else_IfBlock1 =
              (*RadioHeader).nid_message == kcg_lit_int64(15);
            /* IfBlock1:else:else:else:else:else: */
            if (outC->else_clock_else_else_else_else_IfBlock1) {
              outC->_L353_then_else_else_else_else_else_IfBlock1 = kcg_true;
              outC->_L151_then_else_else_else_else_else_IfBlock1 = kcg_false;
              outC->_L252_then_else_else_else_else_else_IfBlock1.t_train_reference =
                outC->_L151_then_else_else_else_else_else_IfBlock1;
              outC->_L252_then_else_else_else_else_else_IfBlock1.nid_em =
                outC->_L353_then_else_else_else_else_else_IfBlock1;
              outC->_L252_then_else_else_else_else_else_IfBlock1.q_scale =
                outC->_L353_then_else_else_else_else_else_IfBlock1;
              outC->_L252_then_else_else_else_else_else_IfBlock1.d_sr =
                outC->_L151_then_else_else_else_else_else_IfBlock1;
              outC->_L252_then_else_else_else_else_else_IfBlock1.t_sh_rqst =
                outC->_L151_then_else_else_else_else_else_IfBlock1;
              outC->_L252_then_else_else_else_else_else_IfBlock1.d_ref =
                outC->_L353_then_else_else_else_else_else_IfBlock1;
              outC->_L252_then_else_else_else_else_else_IfBlock1.q_dir =
                outC->_L353_then_else_else_else_else_else_IfBlock1;
              outC->_L252_then_else_else_else_else_else_IfBlock1.d_emergencystop =
                outC->_L353_then_else_else_else_else_else_IfBlock1;
              outC->_L252_then_else_else_else_else_else_IfBlock1.m_version =
                outC->_L151_then_else_else_else_else_else_IfBlock1;
              kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                &_75_radioMetadata_partial,
                &outC->_L252_then_else_else_else_else_else_IfBlock1);
              kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                &_43_radioMetadata_partial,
                &_75_radioMetadata_partial);
            }
            else {
              outC->_16_else_clock_else_else_else_else_else_IfBlock1 =
                (*RadioHeader).nid_message == kcg_lit_int64(16);
              /* IfBlock1:else:else:else:else:else:else: */
              if (outC->_16_else_clock_else_else_else_else_else_IfBlock1) {
                outC->_L3_then_else_else_else_else_else_else_IfBlock1 = kcg_true;
                outC->_L1_then_else_else_else_else_else_else_IfBlock1 = kcg_false;
                outC->_L2_then_else_else_else_else_else_else_IfBlock1.t_train_reference =
                  outC->_L1_then_else_else_else_else_else_else_IfBlock1;
                outC->_L2_then_else_else_else_else_else_else_IfBlock1.nid_em =
                  outC->_L3_then_else_else_else_else_else_else_IfBlock1;
                outC->_L2_then_else_else_else_else_else_else_IfBlock1.q_scale =
                  outC->_L1_then_else_else_else_else_else_else_IfBlock1;
                outC->_L2_then_else_else_else_else_else_else_IfBlock1.d_sr =
                  outC->_L1_then_else_else_else_else_else_else_IfBlock1;
                outC->_L2_then_else_else_else_else_else_else_IfBlock1.t_sh_rqst =
                  outC->_L1_then_else_else_else_else_else_else_IfBlock1;
                outC->_L2_then_else_else_else_else_else_else_IfBlock1.d_ref =
                  outC->_L1_then_else_else_else_else_else_else_IfBlock1;
                outC->_L2_then_else_else_else_else_else_else_IfBlock1.q_dir =
                  outC->_L1_then_else_else_else_else_else_else_IfBlock1;
                outC->_L2_then_else_else_else_else_else_else_IfBlock1.d_emergencystop =
                  outC->_L1_then_else_else_else_else_else_else_IfBlock1;
                outC->_L2_then_else_else_else_else_else_else_IfBlock1.m_version =
                  outC->_L1_then_else_else_else_else_else_else_IfBlock1;
                kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                  &_44_radioMetadata_partial,
                  &outC->_L2_then_else_else_else_else_else_else_IfBlock1);
                kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                  &_74_radioMetadata_partial,
                  &_44_radioMetadata_partial);
              }
              else {
                outC->_2_else_clock_else_else_else_else_else_else_IfBlock1 =
                  (*RadioHeader).nid_message == kcg_lit_int64(18);
                /* IfBlock1:else:else:else:else:else:else:else: */
                if (outC->_2_else_clock_else_else_else_else_else_else_IfBlock1) {
                  outC->_L348_then_else_else_else_else_else_else_else_IfBlock1 = kcg_false;
                  outC->_L150_then_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
                  outC->_L249_then_else_else_else_else_else_else_else_IfBlock1.t_train_reference =
                    outC->_L348_then_else_else_else_else_else_else_else_IfBlock1;
                  outC->_L249_then_else_else_else_else_else_else_else_IfBlock1.nid_em =
                    outC->_L150_then_else_else_else_else_else_else_else_IfBlock1;
                  outC->_L249_then_else_else_else_else_else_else_else_IfBlock1.q_scale =
                    outC->_L348_then_else_else_else_else_else_else_else_IfBlock1;
                  outC->_L249_then_else_else_else_else_else_else_else_IfBlock1.d_sr =
                    outC->_L348_then_else_else_else_else_else_else_else_IfBlock1;
                  outC->_L249_then_else_else_else_else_else_else_else_IfBlock1.t_sh_rqst =
                    outC->_L348_then_else_else_else_else_else_else_else_IfBlock1;
                  outC->_L249_then_else_else_else_else_else_else_else_IfBlock1.d_ref =
                    outC->_L348_then_else_else_else_else_else_else_else_IfBlock1;
                  outC->_L249_then_else_else_else_else_else_else_else_IfBlock1.q_dir =
                    outC->_L348_then_else_else_else_else_else_else_else_IfBlock1;
                  outC->_L249_then_else_else_else_else_else_else_else_IfBlock1.d_emergencystop =
                    outC->_L348_then_else_else_else_else_else_else_else_IfBlock1;
                  outC->_L249_then_else_else_else_else_else_else_else_IfBlock1.m_version =
                    outC->_L348_then_else_else_else_else_else_else_else_IfBlock1;
                  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                    &_73_radioMetadata_partial,
                    &outC->_L249_then_else_else_else_else_else_else_else_IfBlock1);
                  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                    &_45_radioMetadata_partial,
                    &_73_radioMetadata_partial);
                }
                else {
                  outC->_15_else_clock_else_else_else_else_else_else_else_IfBlock1 =
                    (*RadioHeader).nid_message == kcg_lit_int64(24);
                  /* IfBlock1:else:else:else:else:else:else:else:else: */
                  if (outC->_15_else_clock_else_else_else_else_else_else_else_IfBlock1) {
                    outC->_L217_then_else_else_else_else_else_else_else_else_IfBlock1 = kcg_false;
                    outC->_L318_then_else_else_else_else_else_else_else_else_IfBlock1.t_train_reference =
                      outC->_L217_then_else_else_else_else_else_else_else_else_IfBlock1;
                    outC->_L318_then_else_else_else_else_else_else_else_else_IfBlock1.nid_em =
                      outC->_L217_then_else_else_else_else_else_else_else_else_IfBlock1;
                    outC->_L318_then_else_else_else_else_else_else_else_else_IfBlock1.q_scale =
                      outC->_L217_then_else_else_else_else_else_else_else_else_IfBlock1;
                    outC->_L318_then_else_else_else_else_else_else_else_else_IfBlock1.d_sr =
                      outC->_L217_then_else_else_else_else_else_else_else_else_IfBlock1;
                    outC->_L318_then_else_else_else_else_else_else_else_else_IfBlock1.t_sh_rqst =
                      outC->_L217_then_else_else_else_else_else_else_else_else_IfBlock1;
                    outC->_L318_then_else_else_else_else_else_else_else_else_IfBlock1.d_ref =
                      outC->_L217_then_else_else_else_else_else_else_else_else_IfBlock1;
                    outC->_L318_then_else_else_else_else_else_else_else_else_IfBlock1.q_dir =
                      outC->_L217_then_else_else_else_else_else_else_else_else_IfBlock1;
                    outC->_L318_then_else_else_else_else_else_else_else_else_IfBlock1.d_emergencystop =
                      outC->_L217_then_else_else_else_else_else_else_else_else_IfBlock1;
                    outC->_L318_then_else_else_else_else_else_else_else_else_IfBlock1.m_version =
                      outC->_L217_then_else_else_else_else_else_else_else_else_IfBlock1;
                    kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                      &_46_radioMetadata_partial,
                      &outC->_L318_then_else_else_else_else_else_else_else_else_IfBlock1);
                    kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                      &_72_radioMetadata_partial,
                      &_46_radioMetadata_partial);
                  }
                  else {
                    outC->_3_else_clock_else_else_else_else_else_else_else_else_IfBlock1 =
                      (*RadioHeader).nid_message == kcg_lit_int64(27);
                    /* IfBlock1:else:else:else:else:else:else:else:else:else: */
                    if (outC->_3_else_clock_else_else_else_else_else_else_else_else_IfBlock1) {
                      outC->_L347_then_else_else_else_else_else_else_else_else_else_IfBlock1 =
                        kcg_true;
                      outC->_L245_then_else_else_else_else_else_else_else_else_else_IfBlock1 =
                        kcg_false;
                      outC->_L146_then_else_else_else_else_else_else_else_else_else_IfBlock1.t_train_reference =
                        outC->_L347_then_else_else_else_else_else_else_else_else_else_IfBlock1;
                      outC->_L146_then_else_else_else_else_else_else_else_else_else_IfBlock1.nid_em =
                        outC->_L245_then_else_else_else_else_else_else_else_else_else_IfBlock1;
                      outC->_L146_then_else_else_else_else_else_else_else_else_else_IfBlock1.q_scale =
                        outC->_L245_then_else_else_else_else_else_else_else_else_else_IfBlock1;
                      outC->_L146_then_else_else_else_else_else_else_else_else_else_IfBlock1.d_sr =
                        outC->_L245_then_else_else_else_else_else_else_else_else_else_IfBlock1;
                      outC->_L146_then_else_else_else_else_else_else_else_else_else_IfBlock1.t_sh_rqst =
                        outC->_L245_then_else_else_else_else_else_else_else_else_else_IfBlock1;
                      outC->_L146_then_else_else_else_else_else_else_else_else_else_IfBlock1.d_ref =
                        outC->_L245_then_else_else_else_else_else_else_else_else_else_IfBlock1;
                      outC->_L146_then_else_else_else_else_else_else_else_else_else_IfBlock1.q_dir =
                        outC->_L245_then_else_else_else_else_else_else_else_else_else_IfBlock1;
                      outC->_L146_then_else_else_else_else_else_else_else_else_else_IfBlock1.d_emergencystop =
                        outC->_L245_then_else_else_else_else_else_else_else_else_else_IfBlock1;
                      outC->_L146_then_else_else_else_else_else_else_else_else_else_IfBlock1.m_version =
                        outC->_L245_then_else_else_else_else_else_else_else_else_else_IfBlock1;
                      kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                        &_71_radioMetadata_partial,
                        &outC->_L146_then_else_else_else_else_else_else_else_else_else_IfBlock1);
                      kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                        &_47_radioMetadata_partial,
                        &_71_radioMetadata_partial);
                    }
                    else {
                      outC->_14_else_clock_else_else_else_else_else_else_else_else_else_IfBlock1 =
                        (*RadioHeader).nid_message == kcg_lit_int64(28);
                      /* IfBlock1:else:else:else:else:else:else:else:else:else:else: */
                      if (outC->_14_else_clock_else_else_else_else_else_else_else_else_else_IfBlock1) {
                        outC->_L119_then_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                          kcg_true;
                        outC->_L220_then_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                          kcg_false;
                        outC->_L321_then_else_else_else_else_else_else_else_else_else_else_IfBlock1.t_train_reference =
                          outC->_L119_then_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                        outC->_L321_then_else_else_else_else_else_else_else_else_else_else_IfBlock1.nid_em =
                          outC->_L220_then_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                        outC->_L321_then_else_else_else_else_else_else_else_else_else_else_IfBlock1.q_scale =
                          outC->_L220_then_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                        outC->_L321_then_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_sr =
                          outC->_L220_then_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                        outC->_L321_then_else_else_else_else_else_else_else_else_else_else_IfBlock1.t_sh_rqst =
                          outC->_L220_then_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                        outC->_L321_then_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_ref =
                          outC->_L220_then_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                        outC->_L321_then_else_else_else_else_else_else_else_else_else_else_IfBlock1.q_dir =
                          outC->_L220_then_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                        outC->_L321_then_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_emergencystop =
                          outC->_L220_then_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                        outC->_L321_then_else_else_else_else_else_else_else_else_else_else_IfBlock1.m_version =
                          outC->_L220_then_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                        kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                          &_48_radioMetadata_partial,
                          &outC->_L321_then_else_else_else_else_else_else_else_else_else_else_IfBlock1);
                        kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                          &_70_radioMetadata_partial,
                          &_48_radioMetadata_partial);
                      }
                      else {
                        outC->_4_else_clock_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                          (*RadioHeader).nid_message == kcg_lit_int64(32);
                        /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else: */
                        if (outC->_4_else_clock_else_else_else_else_else_else_else_else_else_else_IfBlock1) {
                          outC->_L342_then_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                            kcg_true;
                          outC->_L243_then_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                            kcg_false;
                          outC->_L144_then_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.t_train_reference =
                            outC->_L243_then_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                          outC->_L144_then_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.nid_em =
                            outC->_L243_then_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                          outC->_L144_then_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.q_scale =
                            outC->_L243_then_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                          outC->_L144_then_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_sr =
                            outC->_L243_then_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                          outC->_L144_then_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.t_sh_rqst =
                            outC->_L243_then_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                          outC->_L144_then_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_ref =
                            outC->_L243_then_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                          outC->_L144_then_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.q_dir =
                            outC->_L243_then_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                          outC->_L144_then_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_emergencystop =
                            outC->_L243_then_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                          outC->_L144_then_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.m_version =
                            outC->_L342_then_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                          kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                            &_69_radioMetadata_partial,
                            &outC->_L144_then_else_else_else_else_else_else_else_else_else_else_else_IfBlock1);
                          kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                            &_49_radioMetadata_partial,
                            &_69_radioMetadata_partial);
                        }
                        else {
                          outC->_13_else_clock_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                            (*RadioHeader).nid_message == kcg_lit_int64(33);
                          /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else:else: */
                          if (outC->_13_else_clock_else_else_else_else_else_else_else_else_else_else_else_IfBlock1) {
                            outC->_L324_then_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                              kcg_true;
                            outC->_L223_then_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                              kcg_false;
                            outC->_L122_then_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.t_train_reference =
                              outC->_L223_then_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                            outC->_L122_then_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.nid_em =
                              outC->_L223_then_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                            outC->_L122_then_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.q_scale =
                              outC->_L324_then_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                            outC->_L122_then_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_sr =
                              outC->_L223_then_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                            outC->_L122_then_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.t_sh_rqst =
                              outC->_L223_then_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                            outC->_L122_then_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_ref =
                              outC->_L324_then_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                            outC->_L122_then_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.q_dir =
                              outC->_L223_then_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                            outC->_L122_then_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_emergencystop =
                              outC->_L223_then_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                            outC->_L122_then_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.m_version =
                              outC->_L223_then_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                            kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                              &_50_radioMetadata_partial,
                              &outC->_L122_then_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1);
                            kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                              &_68_radioMetadata_partial,
                              &_50_radioMetadata_partial);
                          }
                          else {
                            outC->_5_else_clock_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                              (*RadioHeader).nid_message == kcg_lit_int64(34);
                            /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else:else:else: */
                            if (outC->_5_else_clock_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1) {
                              outC->_L240_then_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                                kcg_false;
                              outC->_L339_then_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                                kcg_true;
                              outC->_L141_then_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.t_train_reference =
                                outC->_L240_then_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                              outC->_L141_then_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.nid_em =
                                outC->_L240_then_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                              outC->_L141_then_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.q_scale =
                                outC->_L339_then_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                              outC->_L141_then_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_sr =
                                outC->_L240_then_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                              outC->_L141_then_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.t_sh_rqst =
                                outC->_L240_then_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                              outC->_L141_then_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_ref =
                                outC->_L339_then_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                              outC->_L141_then_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.q_dir =
                                outC->_L339_then_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                              outC->_L141_then_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_emergencystop =
                                outC->_L240_then_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                              outC->_L141_then_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.m_version =
                                outC->_L240_then_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                              kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                                &_67_radioMetadata_partial,
                                &outC->_L141_then_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1);
                              kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                                &_51_radioMetadata_partial,
                                &_67_radioMetadata_partial);
                            }
                            else {
                              outC->_12_else_clock_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                                (*RadioHeader).nid_message == kcg_lit_int64(37);
                              /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else:else:else:else: */
                              if (outC->_12_else_clock_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1) {
                                outC->_L226_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                                  kcg_false;
                                outC->_L125_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.t_train_reference =
                                  outC->_L226_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                outC->_L125_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.nid_em =
                                  outC->_L226_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                outC->_L125_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.q_scale =
                                  outC->_L226_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                outC->_L125_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_sr =
                                  outC->_L226_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                outC->_L125_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.t_sh_rqst =
                                  outC->_L226_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                outC->_L125_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_ref =
                                  outC->_L226_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                outC->_L125_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.q_dir =
                                  outC->_L226_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                outC->_L125_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_emergencystop =
                                  outC->_L226_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                outC->_L125_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.m_version =
                                  outC->_L226_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                                  &_52_radioMetadata_partial,
                                  &outC->_L125_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1);
                                kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                                  &_66_radioMetadata_partial,
                                  &_52_radioMetadata_partial);
                              }
                              else {
                                outC->_6_else_clock_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                                  (*RadioHeader).nid_message == kcg_lit_int64(38);
                                /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else: */
                                if (outC->_6_else_clock_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1) {
                                  outC->_L237_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                                    kcg_false;
                                  outC->_L138_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.t_train_reference =
                                    outC->_L237_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                  outC->_L138_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.nid_em =
                                    outC->_L237_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                  outC->_L138_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.q_scale =
                                    outC->_L237_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                  outC->_L138_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_sr =
                                    outC->_L237_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                  outC->_L138_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.t_sh_rqst =
                                    outC->_L237_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                  outC->_L138_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_ref =
                                    outC->_L237_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                  outC->_L138_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.q_dir =
                                    outC->_L237_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                  outC->_L138_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_emergencystop =
                                    outC->_L237_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                  outC->_L138_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.m_version =
                                    outC->_L237_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                                    &_65_radioMetadata_partial,
                                    &outC->_L138_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1);
                                  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                                    &_53_radioMetadata_partial,
                                    &_65_radioMetadata_partial);
                                }
                                else {
                                  outC->_11_else_clock_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                                    (*RadioHeader).nid_message == kcg_lit_int64(39);
                                  /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else: */
                                  if (outC->_11_else_clock_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1) {
                                    outC->_L127_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                                      kcg_false;
                                    outC->_L228_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.t_train_reference =
                                      outC->_L127_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                    outC->_L228_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.nid_em =
                                      outC->_L127_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                    outC->_L228_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.q_scale =
                                      outC->_L127_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                    outC->_L228_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_sr =
                                      outC->_L127_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                    outC->_L228_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.t_sh_rqst =
                                      outC->_L127_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                    outC->_L228_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_ref =
                                      outC->_L127_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                    outC->_L228_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.q_dir =
                                      outC->_L127_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                    outC->_L228_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_emergencystop =
                                      outC->_L127_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                    outC->_L228_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.m_version =
                                      outC->_L127_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                    kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                                      &_54_radioMetadata_partial,
                                      &outC->_L228_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1);
                                    kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                                      &_64_radioMetadata_partial,
                                      &_54_radioMetadata_partial);
                                  }
                                  else {
                                    outC->_7_else_clock_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                                      (*RadioHeader).nid_message == kcg_lit_int64(40);
                                    /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else: */
                                    if (outC->_7_else_clock_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1) {
                                      outC->_L235_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                                        kcg_false;
                                      outC->_L136_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.t_train_reference =
                                        outC->_L235_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                      outC->_L136_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.nid_em =
                                        outC->_L235_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                      outC->_L136_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.q_scale =
                                        outC->_L235_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                      outC->_L136_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_sr =
                                        outC->_L235_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                      outC->_L136_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.t_sh_rqst =
                                        outC->_L235_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                      outC->_L136_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_ref =
                                        outC->_L235_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                      outC->_L136_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.q_dir =
                                        outC->_L235_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                      outC->_L136_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_emergencystop =
                                        outC->_L235_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                      outC->_L136_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.m_version =
                                        outC->_L235_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                      kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                                        &_63_radioMetadata_partial,
                                        &outC->_L136_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1);
                                      kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                                        &_55_radioMetadata_partial,
                                        &_63_radioMetadata_partial);
                                    }
                                    else {
                                      outC->_10_else_clock_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                                        (*RadioHeader).nid_message == kcg_lit_int64(41);
                                      /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else: */
                                      if (outC->_10_else_clock_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1) {
                                        outC->_L230_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                                          kcg_false;
                                        outC->_L129_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.t_train_reference =
                                          outC->_L230_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                        outC->_L129_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.nid_em =
                                          outC->_L230_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                        outC->_L129_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.q_scale =
                                          outC->_L230_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                        outC->_L129_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_sr =
                                          outC->_L230_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                        outC->_L129_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.t_sh_rqst =
                                          outC->_L230_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                        outC->_L129_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_ref =
                                          outC->_L230_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                        outC->_L129_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.q_dir =
                                          outC->_L230_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                        outC->_L129_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_emergencystop =
                                          outC->_L230_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                        outC->_L129_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.m_version =
                                          outC->_L230_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                        kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                                          &_56_radioMetadata_partial,
                                          &outC->_L129_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1);
                                        kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                                          &_62_radioMetadata_partial,
                                          &_56_radioMetadata_partial);
                                      }
                                      else {
                                        outC->_8_else_clock_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                                          (*RadioHeader).nid_message == kcg_lit_int64(43);
                                        /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else: */
                                        if (outC->_8_else_clock_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1) {
                                          outC->_L233_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                                            kcg_false;
                                          outC->_L134_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.t_train_reference =
                                            outC->_L233_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                          outC->_L134_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.nid_em =
                                            outC->_L233_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                          outC->_L134_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.q_scale =
                                            outC->_L233_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                          outC->_L134_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_sr =
                                            outC->_L233_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                          outC->_L134_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.t_sh_rqst =
                                            outC->_L233_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                          outC->_L134_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_ref =
                                            outC->_L233_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                          outC->_L134_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.q_dir =
                                            outC->_L233_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                          outC->_L134_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_emergencystop =
                                            outC->_L233_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                          outC->_L134_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.m_version =
                                            outC->_L233_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                          kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                                            &_61_radioMetadata_partial,
                                            &outC->_L134_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1);
                                          kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                                            &_57_radioMetadata_partial,
                                            &_61_radioMetadata_partial);
                                        }
                                        else {
                                          outC->_9_else_clock_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                                            (*RadioHeader).nid_message == kcg_lit_int64(45);
                                          /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else: */
                                          if (outC->_9_else_clock_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1) {
                                            outC->_L232_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                                              kcg_false;
                                            outC->_L131_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.t_train_reference =
                                              outC->_L232_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                            outC->_L131_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.nid_em =
                                              outC->_L232_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                            outC->_L131_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.q_scale =
                                              outC->_L232_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                            outC->_L131_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_sr =
                                              outC->_L232_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                            outC->_L131_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.t_sh_rqst =
                                              outC->_L232_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                            outC->_L131_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_ref =
                                              outC->_L232_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                            outC->_L131_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.q_dir =
                                              outC->_L232_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                            outC->_L131_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_emergencystop =
                                              outC->_L232_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                            outC->_L131_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.m_version =
                                              outC->_L232_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                            kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                                              &_58_radioMetadata_partial,
                                              &outC->_L131_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1);
                                            kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                                              &_60_radioMetadata_partial,
                                              &_58_radioMetadata_partial);
                                          }
                                          else {
                                            outC->_L2_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                                              kcg_false;
                                            outC->_L1_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.t_train_reference =
                                              outC->_L2_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                            outC->_L1_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.nid_em =
                                              outC->_L2_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                            outC->_L1_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.q_scale =
                                              outC->_L2_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                            outC->_L1_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_sr =
                                              outC->_L2_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                            outC->_L1_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.t_sh_rqst =
                                              outC->_L2_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                            outC->_L1_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_ref =
                                              outC->_L2_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                            outC->_L1_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.q_dir =
                                              outC->_L2_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                            outC->_L1_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_emergencystop =
                                              outC->_L2_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                            outC->_L1_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.m_version =
                                              outC->_L2_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                            kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                                              &_59_radioMetadata_partial,
                                              &outC->_L1_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1);
                                            kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                                              &_60_radioMetadata_partial,
                                              &_59_radioMetadata_partial);
                                          }
                                          kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                                            &_57_radioMetadata_partial,
                                            &_60_radioMetadata_partial);
                                        }
                                        kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                                          &_62_radioMetadata_partial,
                                          &_57_radioMetadata_partial);
                                      }
                                      kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                                        &_55_radioMetadata_partial,
                                        &_62_radioMetadata_partial);
                                    }
                                    kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                                      &_64_radioMetadata_partial,
                                      &_55_radioMetadata_partial);
                                  }
                                  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                                    &_53_radioMetadata_partial,
                                    &_64_radioMetadata_partial);
                                }
                                kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                                  &_66_radioMetadata_partial,
                                  &_53_radioMetadata_partial);
                              }
                              kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                                &_51_radioMetadata_partial,
                                &_66_radioMetadata_partial);
                            }
                            kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                              &_68_radioMetadata_partial,
                              &_51_radioMetadata_partial);
                          }
                          kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                            &_49_radioMetadata_partial,
                            &_68_radioMetadata_partial);
                        }
                        kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                          &_70_radioMetadata_partial,
                          &_49_radioMetadata_partial);
                      }
                      kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                        &_47_radioMetadata_partial,
                        &_70_radioMetadata_partial);
                    }
                    kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                      &_72_radioMetadata_partial,
                      &_47_radioMetadata_partial);
                  }
                  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                    &_45_radioMetadata_partial,
                    &_72_radioMetadata_partial);
                }
                kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                  &_74_radioMetadata_partial,
                  &_45_radioMetadata_partial);
              }
              kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                &_43_radioMetadata_partial,
                &_74_radioMetadata_partial);
            }
            kcg_copy_RadioMetadata_T_Common_Types_Pkg(
              &_76_radioMetadata_partial,
              &_43_radioMetadata_partial);
          }
          kcg_copy_RadioMetadata_T_Common_Types_Pkg(
            &_41_radioMetadata_partial,
            &_76_radioMetadata_partial);
        }
        kcg_copy_RadioMetadata_T_Common_Types_Pkg(
          &_78_radioMetadata_partial,
          &_41_radioMetadata_partial);
      }
      kcg_copy_RadioMetadata_T_Common_Types_Pkg(
        &_39_radioMetadata_partial,
        &_78_radioMetadata_partial);
    }
    kcg_copy_RadioMetadata_T_Common_Types_Pkg(
      &outC->radioMetadata,
      &_39_radioMetadata_partial);
  }
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(&outC->_L37, &outC->radioMetadata);
  outC->_L32 = kcg_false;
  outC->_L31 = kcg_lit_int64(0);
  outC->_L30 = outC->_L52 != outC->_L31;
  outC->_L29.present = outC->_L30;
  outC->_L29.apiConsistencyError = outC->_L32;
  kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L29.Radio_Common_Header,
    &outC->_L51);
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &outC->_L29.Radio_MetaData,
    &outC->_L37);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&outC->_L29.sendingRBC_Id, &outC->_L53);
  outC->_L5 = systemTime;
  outC->_L4 = msrc_Euroradio_Common_Types_Pkg;
  kcg_copy_API_TelegramHeader_T_API_Msg_Pkg(
    &outC->_L3,
    (API_TelegramHeader_T_API_Msg_Pkg *) &cEmptyBtmMessageHeader_Toolbox);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L2, Packets);
  outC->_L1.valid = outC->_L30;
  outC->_L1.systemTimeMsgReceived = outC->_L5;
  outC->_L1.msg_type = outC->_L4;
  kcg_copy_API_TelegramHeader_T_API_Msg_Pkg(&outC->_L1.btm_msg, &outC->_L3);
  kcg_copy_API_RadioMsgHeader_T_API_Msg_Pkg(&outC->_L1.rtm_msg, &outC->_L29);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L1.packets, &outC->_L2);
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&outC->TrackMessage, &outC->_L1);
  switch (outC->GSM_R_MobileManagement_state_act) {
    case SSM_st_Connecting_GSM_R_MobileManagement :
      outC->init = kcg_false;
      break;
    case SSM_st_Registering_GSM_R_MobileManagement :
      outC->init1 = kcg_false;
      break;
    default :
      /* this branch is empty */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void RTM_init_Toolbox_TrainModules(outC_RTM_Toolbox_TrainModules *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;
  kcg_size idx6;
  kcg_size idx7;

  outC->_L55 = kcg_lit_int64(0);
  outC->_L54 = kcg_true;
  outC->_L53.valid = kcg_true;
  outC->_L53.nid_c = kcg_lit_int64(0);
  outC->_L53.rbc_id = kcg_lit_int64(0);
  outC->_L53.device_id = kcg_lit_int64(0);
  outC->_L52 = kcg_lit_int64(0);
  outC->_L51.radioDevice = kcg_lit_int64(0);
  outC->_L51.receivedSystemTime = kcg_lit_int64(0);
  outC->_L51.nid_message = kcg_lit_int64(0);
  outC->_L51.t_train = kcg_lit_int64(0);
  outC->_L51.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L51.nid_lrbg = kcg_lit_int64(0);
  outC->_L51.t_train_reference = kcg_lit_int64(0);
  outC->_L51.nid_em = kcg_lit_int64(0);
  outC->_L51.q_scale = Q_SCALE_10_cm_scale;
  outC->_L51.d_sr = kcg_lit_int64(0);
  outC->_L51.t_sh_rqst = kcg_lit_int64(0);
  outC->_L51.d_ref = kcg_lit_int64(0);
  outC->_L51.q_dir = Q_DIR_Reverse;
  outC->_L51.d_emergencystop = kcg_lit_int64(0);
  outC->_L51.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L37.t_train_reference = kcg_true;
  outC->_L37.nid_em = kcg_true;
  outC->_L37.q_scale = kcg_true;
  outC->_L37.d_sr = kcg_true;
  outC->_L37.t_sh_rqst = kcg_true;
  outC->_L37.d_ref = kcg_true;
  outC->_L37.q_dir = kcg_true;
  outC->_L37.d_emergencystop = kcg_true;
  outC->_L37.m_version = kcg_true;
  outC->_L32 = kcg_true;
  outC->_L31 = kcg_lit_int64(0);
  outC->_L30 = kcg_true;
  outC->_L29.present = kcg_true;
  outC->_L29.apiConsistencyError = kcg_true;
  outC->_L29.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L29.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L29.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L29.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L29.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L29.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L29.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L29.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L29.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L29.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L29.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L29.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L29.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L29.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L29.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L29.Radio_MetaData.t_train_reference = kcg_true;
  outC->_L29.Radio_MetaData.nid_em = kcg_true;
  outC->_L29.Radio_MetaData.q_scale = kcg_true;
  outC->_L29.Radio_MetaData.d_sr = kcg_true;
  outC->_L29.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->_L29.Radio_MetaData.d_ref = kcg_true;
  outC->_L29.Radio_MetaData.q_dir = kcg_true;
  outC->_L29.Radio_MetaData.d_emergencystop = kcg_true;
  outC->_L29.Radio_MetaData.m_version = kcg_true;
  outC->_L29.sendingRBC_Id.valid = kcg_true;
  outC->_L29.sendingRBC_Id.nid_c = kcg_lit_int64(0);
  outC->_L29.sendingRBC_Id.rbc_id = kcg_lit_int64(0);
  outC->_L29.sendingRBC_Id.device_id = kcg_lit_int64(0);
  outC->_L6.radioDevice = kcg_lit_int64(0);
  outC->_L6.receivedSystemTime = kcg_lit_int64(0);
  outC->_L6.nid_message = kcg_lit_int64(0);
  outC->_L6.t_train = kcg_lit_int64(0);
  outC->_L6.m_ack = kcg_lit_int64(0);
  outC->_L6.nid_lrbg = kcg_lit_int64(0);
  outC->_L6.t_train_reference = kcg_lit_int64(0);
  outC->_L6.nid_em = kcg_lit_int64(0);
  outC->_L6.q_scale = kcg_lit_int64(0);
  outC->_L6.d_sr = kcg_lit_int64(0);
  outC->_L6.t_sh_rqst = kcg_lit_int64(0);
  outC->_L6.d_ref = kcg_lit_int64(0);
  outC->_L6.q_dir = kcg_lit_int64(0);
  outC->_L6.d_emergencystop = kcg_lit_int64(0);
  outC->_L6.m_version = kcg_lit_int64(0);
  outC->_L5 = kcg_lit_int64(0);
  outC->_L4 = msrc_undefined_Common_Types_Pkg;
  outC->_L3.present = kcg_true;
  outC->_L3.checkResult = kcg_true;
  outC->_L3.api_bad_balise_received = kcg_true;
  outC->_L3.api_header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L3.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L3.api_header.q_media = Q_MEDIA_Balise;
  outC->_L3.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->_L3.api_header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L3.api_header.m_dup = M_DUP_No_duplicates;
  outC->_L3.api_header.m_mcount = kcg_lit_int64(0);
  outC->_L3.api_header.nid_c = kcg_lit_int64(0);
  outC->_L3.api_header.nid_bg = kcg_lit_int64(0);
  outC->_L3.api_header.q_link = Q_LINK_Unlinked;
  outC->_L3.centerOfBalisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L3.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->_L3.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L3.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->_L3.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->_L3.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L3.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L3.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L3.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L3.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L3.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L3.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L3.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L3.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L3.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  for (idx = 0; idx < 30; idx++) {
    outC->_L2.PacketHeaders[idx].nid_packet = kcg_lit_int64(0);
    outC->_L2.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L2.PacketHeaders[idx].valid = kcg_true;
    outC->_L2.PacketHeaders[idx].startAddress = kcg_lit_int64(0);
    outC->_L2.PacketHeaders[idx].endAddress = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L2.PacketData[idx1] = kcg_lit_int64(0);
  }
  outC->_L1.valid = kcg_true;
  outC->_L1.systemTimeMsgReceived = kcg_lit_int64(0);
  outC->_L1.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L1.btm_msg.present = kcg_true;
  outC->_L1.btm_msg.checkResult = kcg_true;
  outC->_L1.btm_msg.api_bad_balise_received = kcg_true;
  outC->_L1.btm_msg.api_header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1.btm_msg.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.btm_msg.api_header.q_media = Q_MEDIA_Balise;
  outC->_L1.btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->_L1.btm_msg.api_header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L1.btm_msg.api_header.m_dup = M_DUP_No_duplicates;
  outC->_L1.btm_msg.api_header.m_mcount = kcg_lit_int64(0);
  outC->_L1.btm_msg.api_header.nid_c = kcg_lit_int64(0);
  outC->_L1.btm_msg.api_header.nid_bg = kcg_lit_int64(0);
  outC->_L1.btm_msg.api_header.q_link = Q_LINK_Unlinked;
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L1.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L1.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L1.rtm_msg.present = kcg_true;
  outC->_L1.rtm_msg.apiConsistencyError = kcg_true;
  outC->_L1.rtm_msg.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L1.rtm_msg.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L1.rtm_msg.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L1.rtm_msg.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L1.rtm_msg.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L1.rtm_msg.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L1.rtm_msg.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L1.rtm_msg.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L1.rtm_msg.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.rtm_msg.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L1.rtm_msg.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L1.rtm_msg.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L1.rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L1.rtm_msg.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L1.rtm_msg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
  outC->_L1.rtm_msg.Radio_MetaData.nid_em = kcg_true;
  outC->_L1.rtm_msg.Radio_MetaData.q_scale = kcg_true;
  outC->_L1.rtm_msg.Radio_MetaData.d_sr = kcg_true;
  outC->_L1.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->_L1.rtm_msg.Radio_MetaData.d_ref = kcg_true;
  outC->_L1.rtm_msg.Radio_MetaData.q_dir = kcg_true;
  outC->_L1.rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
  outC->_L1.rtm_msg.Radio_MetaData.m_version = kcg_true;
  outC->_L1.rtm_msg.sendingRBC_Id.valid = kcg_true;
  outC->_L1.rtm_msg.sendingRBC_Id.nid_c = kcg_lit_int64(0);
  outC->_L1.rtm_msg.sendingRBC_Id.rbc_id = kcg_lit_int64(0);
  outC->_L1.rtm_msg.sendingRBC_Id.device_id = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L1.packets.PacketHeaders[idx2].nid_packet = kcg_lit_int64(0);
    outC->_L1.packets.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L1.packets.PacketHeaders[idx2].valid = kcg_true;
    outC->_L1.packets.PacketHeaders[idx2].startAddress = kcg_lit_int64(0);
    outC->_L1.packets.PacketHeaders[idx2].endAddress = kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L1.packets.PacketData[idx3] = kcg_lit_int64(0);
  }
  outC->radioMetadata.t_train_reference = kcg_true;
  outC->radioMetadata.nid_em = kcg_true;
  outC->radioMetadata.q_scale = kcg_true;
  outC->radioMetadata.d_sr = kcg_true;
  outC->radioMetadata.t_sh_rqst = kcg_true;
  outC->radioMetadata.d_ref = kcg_true;
  outC->radioMetadata.q_dir = kcg_true;
  outC->radioMetadata.d_emergencystop = kcg_true;
  outC->radioMetadata.m_version = kcg_true;
  outC->GSM_R_MobileManagement_fired = SSM_TR_no_trans_GSM_R_MobileManagement;
  outC->GSM_R_MobileManagement_fired_strong =
    SSM_TR_no_trans_GSM_R_MobileManagement;
  outC->GSM_R_MobileManagement_state_act =
    SSM_st_Not_registered_GSM_R_MobileManagement;
  outC->GSM_R_MobileManagement_state_sel =
    SSM_st_Not_registered_GSM_R_MobileManagement;
  outC->IfBlock1_clock = kcg_true;
  outC->_L1_then_else_IfBlock1.t_train_reference = kcg_true;
  outC->_L1_then_else_IfBlock1.nid_em = kcg_true;
  outC->_L1_then_else_IfBlock1.q_scale = kcg_true;
  outC->_L1_then_else_IfBlock1.d_sr = kcg_true;
  outC->_L1_then_else_IfBlock1.t_sh_rqst = kcg_true;
  outC->_L1_then_else_IfBlock1.d_ref = kcg_true;
  outC->_L1_then_else_IfBlock1.q_dir = kcg_true;
  outC->_L1_then_else_IfBlock1.d_emergencystop = kcg_true;
  outC->_L1_then_else_IfBlock1.m_version = kcg_true;
  outC->_L3_then_else_IfBlock1 = kcg_true;
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L3_then_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_IfBlock1.t_train_reference = kcg_true;
  outC->_L2_then_else_else_else_IfBlock1.nid_em = kcg_true;
  outC->_L2_then_else_else_else_IfBlock1.q_scale = kcg_true;
  outC->_L2_then_else_else_else_IfBlock1.d_sr = kcg_true;
  outC->_L2_then_else_else_else_IfBlock1.t_sh_rqst = kcg_true;
  outC->_L2_then_else_else_else_IfBlock1.d_ref = kcg_true;
  outC->_L2_then_else_else_else_IfBlock1.q_dir = kcg_true;
  outC->_L2_then_else_else_else_IfBlock1.d_emergencystop = kcg_true;
  outC->_L2_then_else_else_else_IfBlock1.m_version = kcg_true;
  outC->else_clock_else_else_else_IfBlock1 = kcg_true;
  outC->_L353_then_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L252_then_else_else_else_else_else_IfBlock1.t_train_reference = kcg_true;
  outC->_L252_then_else_else_else_else_else_IfBlock1.nid_em = kcg_true;
  outC->_L252_then_else_else_else_else_else_IfBlock1.q_scale = kcg_true;
  outC->_L252_then_else_else_else_else_else_IfBlock1.d_sr = kcg_true;
  outC->_L252_then_else_else_else_else_else_IfBlock1.t_sh_rqst = kcg_true;
  outC->_L252_then_else_else_else_else_else_IfBlock1.d_ref = kcg_true;
  outC->_L252_then_else_else_else_else_else_IfBlock1.q_dir = kcg_true;
  outC->_L252_then_else_else_else_else_else_IfBlock1.d_emergencystop = kcg_true;
  outC->_L252_then_else_else_else_else_else_IfBlock1.m_version = kcg_true;
  outC->_L151_then_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_16_else_clock_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L150_then_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L249_then_else_else_else_else_else_else_else_IfBlock1.t_train_reference =
    kcg_true;
  outC->_L249_then_else_else_else_else_else_else_else_IfBlock1.nid_em = kcg_true;
  outC->_L249_then_else_else_else_else_else_else_else_IfBlock1.q_scale = kcg_true;
  outC->_L249_then_else_else_else_else_else_else_else_IfBlock1.d_sr = kcg_true;
  outC->_L249_then_else_else_else_else_else_else_else_IfBlock1.t_sh_rqst =
    kcg_true;
  outC->_L249_then_else_else_else_else_else_else_else_IfBlock1.d_ref = kcg_true;
  outC->_L249_then_else_else_else_else_else_else_else_IfBlock1.q_dir = kcg_true;
  outC->_L249_then_else_else_else_else_else_else_else_IfBlock1.d_emergencystop =
    kcg_true;
  outC->_L249_then_else_else_else_else_else_else_else_IfBlock1.m_version =
    kcg_true;
  outC->_L348_then_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_15_else_clock_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L347_then_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_L146_then_else_else_else_else_else_else_else_else_else_IfBlock1.t_train_reference =
    kcg_true;
  outC->_L146_then_else_else_else_else_else_else_else_else_else_IfBlock1.nid_em =
    kcg_true;
  outC->_L146_then_else_else_else_else_else_else_else_else_else_IfBlock1.q_scale =
    kcg_true;
  outC->_L146_then_else_else_else_else_else_else_else_else_else_IfBlock1.d_sr =
    kcg_true;
  outC->_L146_then_else_else_else_else_else_else_else_else_else_IfBlock1.t_sh_rqst =
    kcg_true;
  outC->_L146_then_else_else_else_else_else_else_else_else_else_IfBlock1.d_ref =
    kcg_true;
  outC->_L146_then_else_else_else_else_else_else_else_else_else_IfBlock1.q_dir =
    kcg_true;
  outC->_L146_then_else_else_else_else_else_else_else_else_else_IfBlock1.d_emergencystop =
    kcg_true;
  outC->_L146_then_else_else_else_else_else_else_else_else_else_IfBlock1.m_version =
    kcg_true;
  outC->_L245_then_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_14_else_clock_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_L144_then_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.t_train_reference =
    kcg_true;
  outC->_L144_then_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.nid_em =
    kcg_true;
  outC->_L144_then_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.q_scale =
    kcg_true;
  outC->_L144_then_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_sr =
    kcg_true;
  outC->_L144_then_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.t_sh_rqst =
    kcg_true;
  outC->_L144_then_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_ref =
    kcg_true;
  outC->_L144_then_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.q_dir =
    kcg_true;
  outC->_L144_then_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_emergencystop =
    kcg_true;
  outC->_L144_then_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.m_version =
    kcg_true;
  outC->_L243_then_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_L342_then_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_13_else_clock_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_L141_then_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.t_train_reference =
    kcg_true;
  outC->_L141_then_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.nid_em =
    kcg_true;
  outC->_L141_then_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.q_scale =
    kcg_true;
  outC->_L141_then_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_sr =
    kcg_true;
  outC->_L141_then_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.t_sh_rqst =
    kcg_true;
  outC->_L141_then_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_ref =
    kcg_true;
  outC->_L141_then_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.q_dir =
    kcg_true;
  outC->_L141_then_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_emergencystop =
    kcg_true;
  outC->_L141_then_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.m_version =
    kcg_true;
  outC->_L240_then_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_L339_then_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_12_else_clock_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_L138_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.t_train_reference =
    kcg_true;
  outC->_L138_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.nid_em =
    kcg_true;
  outC->_L138_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.q_scale =
    kcg_true;
  outC->_L138_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_sr =
    kcg_true;
  outC->_L138_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.t_sh_rqst =
    kcg_true;
  outC->_L138_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_ref =
    kcg_true;
  outC->_L138_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.q_dir =
    kcg_true;
  outC->_L138_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_emergencystop =
    kcg_true;
  outC->_L138_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.m_version =
    kcg_true;
  outC->_L237_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_11_else_clock_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_L136_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.t_train_reference =
    kcg_true;
  outC->_L136_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.nid_em =
    kcg_true;
  outC->_L136_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.q_scale =
    kcg_true;
  outC->_L136_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_sr =
    kcg_true;
  outC->_L136_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.t_sh_rqst =
    kcg_true;
  outC->_L136_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_ref =
    kcg_true;
  outC->_L136_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.q_dir =
    kcg_true;
  outC->_L136_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_emergencystop =
    kcg_true;
  outC->_L136_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.m_version =
    kcg_true;
  outC->_L235_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_10_else_clock_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_L134_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.t_train_reference =
    kcg_true;
  outC->_L134_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.nid_em =
    kcg_true;
  outC->_L134_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.q_scale =
    kcg_true;
  outC->_L134_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_sr =
    kcg_true;
  outC->_L134_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.t_sh_rqst =
    kcg_true;
  outC->_L134_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_ref =
    kcg_true;
  outC->_L134_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.q_dir =
    kcg_true;
  outC->_L134_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_emergencystop =
    kcg_true;
  outC->_L134_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.m_version =
    kcg_true;
  outC->_L233_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_9_else_clock_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_L2_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_L1_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.t_train_reference =
    kcg_true;
  outC->_L1_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.nid_em =
    kcg_true;
  outC->_L1_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.q_scale =
    kcg_true;
  outC->_L1_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_sr =
    kcg_true;
  outC->_L1_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.t_sh_rqst =
    kcg_true;
  outC->_L1_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_ref =
    kcg_true;
  outC->_L1_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.q_dir =
    kcg_true;
  outC->_L1_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_emergencystop =
    kcg_true;
  outC->_L1_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.m_version =
    kcg_true;
  outC->_L232_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_L131_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.t_train_reference =
    kcg_true;
  outC->_L131_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.nid_em =
    kcg_true;
  outC->_L131_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.q_scale =
    kcg_true;
  outC->_L131_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_sr =
    kcg_true;
  outC->_L131_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.t_sh_rqst =
    kcg_true;
  outC->_L131_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_ref =
    kcg_true;
  outC->_L131_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.q_dir =
    kcg_true;
  outC->_L131_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_emergencystop =
    kcg_true;
  outC->_L131_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.m_version =
    kcg_true;
  outC->_8_else_clock_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_L230_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_L129_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.t_train_reference =
    kcg_true;
  outC->_L129_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.nid_em =
    kcg_true;
  outC->_L129_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.q_scale =
    kcg_true;
  outC->_L129_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_sr =
    kcg_true;
  outC->_L129_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.t_sh_rqst =
    kcg_true;
  outC->_L129_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_ref =
    kcg_true;
  outC->_L129_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.q_dir =
    kcg_true;
  outC->_L129_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_emergencystop =
    kcg_true;
  outC->_L129_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.m_version =
    kcg_true;
  outC->_7_else_clock_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_L228_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.t_train_reference =
    kcg_true;
  outC->_L228_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.nid_em =
    kcg_true;
  outC->_L228_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.q_scale =
    kcg_true;
  outC->_L228_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_sr =
    kcg_true;
  outC->_L228_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.t_sh_rqst =
    kcg_true;
  outC->_L228_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_ref =
    kcg_true;
  outC->_L228_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.q_dir =
    kcg_true;
  outC->_L228_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_emergencystop =
    kcg_true;
  outC->_L228_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.m_version =
    kcg_true;
  outC->_L127_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_6_else_clock_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_L226_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_L125_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.t_train_reference =
    kcg_true;
  outC->_L125_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.nid_em =
    kcg_true;
  outC->_L125_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.q_scale =
    kcg_true;
  outC->_L125_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_sr =
    kcg_true;
  outC->_L125_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.t_sh_rqst =
    kcg_true;
  outC->_L125_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_ref =
    kcg_true;
  outC->_L125_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.q_dir =
    kcg_true;
  outC->_L125_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_emergencystop =
    kcg_true;
  outC->_L125_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.m_version =
    kcg_true;
  outC->_5_else_clock_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_L324_then_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_L223_then_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_L122_then_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.t_train_reference =
    kcg_true;
  outC->_L122_then_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.nid_em =
    kcg_true;
  outC->_L122_then_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.q_scale =
    kcg_true;
  outC->_L122_then_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_sr =
    kcg_true;
  outC->_L122_then_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.t_sh_rqst =
    kcg_true;
  outC->_L122_then_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_ref =
    kcg_true;
  outC->_L122_then_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.q_dir =
    kcg_true;
  outC->_L122_then_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_emergencystop =
    kcg_true;
  outC->_L122_then_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1.m_version =
    kcg_true;
  outC->_4_else_clock_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_L321_then_else_else_else_else_else_else_else_else_else_else_IfBlock1.t_train_reference =
    kcg_true;
  outC->_L321_then_else_else_else_else_else_else_else_else_else_else_IfBlock1.nid_em =
    kcg_true;
  outC->_L321_then_else_else_else_else_else_else_else_else_else_else_IfBlock1.q_scale =
    kcg_true;
  outC->_L321_then_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_sr =
    kcg_true;
  outC->_L321_then_else_else_else_else_else_else_else_else_else_else_IfBlock1.t_sh_rqst =
    kcg_true;
  outC->_L321_then_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_ref =
    kcg_true;
  outC->_L321_then_else_else_else_else_else_else_else_else_else_else_IfBlock1.q_dir =
    kcg_true;
  outC->_L321_then_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_emergencystop =
    kcg_true;
  outC->_L321_then_else_else_else_else_else_else_else_else_else_else_IfBlock1.m_version =
    kcg_true;
  outC->_L220_then_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_L119_then_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_3_else_clock_else_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L318_then_else_else_else_else_else_else_else_else_IfBlock1.t_train_reference =
    kcg_true;
  outC->_L318_then_else_else_else_else_else_else_else_else_IfBlock1.nid_em =
    kcg_true;
  outC->_L318_then_else_else_else_else_else_else_else_else_IfBlock1.q_scale =
    kcg_true;
  outC->_L318_then_else_else_else_else_else_else_else_else_IfBlock1.d_sr =
    kcg_true;
  outC->_L318_then_else_else_else_else_else_else_else_else_IfBlock1.t_sh_rqst =
    kcg_true;
  outC->_L318_then_else_else_else_else_else_else_else_else_IfBlock1.d_ref =
    kcg_true;
  outC->_L318_then_else_else_else_else_else_else_else_else_IfBlock1.q_dir =
    kcg_true;
  outC->_L318_then_else_else_else_else_else_else_else_else_IfBlock1.d_emergencystop =
    kcg_true;
  outC->_L318_then_else_else_else_else_else_else_else_else_IfBlock1.m_version =
    kcg_true;
  outC->_L217_then_else_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_2_else_clock_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L3_then_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_else_else_else_IfBlock1.t_train_reference =
    kcg_true;
  outC->_L2_then_else_else_else_else_else_else_IfBlock1.nid_em = kcg_true;
  outC->_L2_then_else_else_else_else_else_else_IfBlock1.q_scale = kcg_true;
  outC->_L2_then_else_else_else_else_else_else_IfBlock1.d_sr = kcg_true;
  outC->_L2_then_else_else_else_else_else_else_IfBlock1.t_sh_rqst = kcg_true;
  outC->_L2_then_else_else_else_else_else_else_IfBlock1.d_ref = kcg_true;
  outC->_L2_then_else_else_else_else_else_else_IfBlock1.q_dir = kcg_true;
  outC->_L2_then_else_else_else_else_else_else_IfBlock1.d_emergencystop =
    kcg_true;
  outC->_L2_then_else_else_else_else_else_else_IfBlock1.m_version = kcg_true;
  outC->_L1_then_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->else_clock_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_else_IfBlock1.t_train_reference = kcg_true;
  outC->_L1_then_else_else_else_else_IfBlock1.nid_em = kcg_true;
  outC->_L1_then_else_else_else_else_IfBlock1.q_scale = kcg_true;
  outC->_L1_then_else_else_else_else_IfBlock1.d_sr = kcg_true;
  outC->_L1_then_else_else_else_else_IfBlock1.t_sh_rqst = kcg_true;
  outC->_L1_then_else_else_else_else_IfBlock1.d_ref = kcg_true;
  outC->_L1_then_else_else_else_else_IfBlock1.q_dir = kcg_true;
  outC->_L1_then_else_else_else_else_IfBlock1.d_emergencystop = kcg_true;
  outC->_L1_then_else_else_else_else_IfBlock1.m_version = kcg_true;
  outC->else_clock_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_IfBlock1.t_train_reference = kcg_true;
  outC->_L2_then_else_else_IfBlock1.nid_em = kcg_true;
  outC->_L2_then_else_else_IfBlock1.q_scale = kcg_true;
  outC->_L2_then_else_else_IfBlock1.d_sr = kcg_true;
  outC->_L2_then_else_else_IfBlock1.t_sh_rqst = kcg_true;
  outC->_L2_then_else_else_IfBlock1.d_ref = kcg_true;
  outC->_L2_then_else_else_IfBlock1.q_dir = kcg_true;
  outC->_L2_then_else_else_IfBlock1.d_emergencystop = kcg_true;
  outC->_L2_then_else_else_IfBlock1.m_version = kcg_true;
  outC->_L1_then_else_else_IfBlock1 = kcg_true;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L1_then_IfBlock1.t_train_reference = kcg_true;
  outC->_L1_then_IfBlock1.nid_em = kcg_true;
  outC->_L1_then_IfBlock1.q_scale = kcg_true;
  outC->_L1_then_IfBlock1.d_sr = kcg_true;
  outC->_L1_then_IfBlock1.t_sh_rqst = kcg_true;
  outC->_L1_then_IfBlock1.d_ref = kcg_true;
  outC->_L1_then_IfBlock1.q_dir = kcg_true;
  outC->_L1_then_IfBlock1.d_emergencystop = kcg_true;
  outC->_L1_then_IfBlock1.m_version = kcg_true;
  outC->_L4_then_IfBlock1 = kcg_true;
  outC->_L3_then_IfBlock1 = kcg_true;
  outC->_L1_Connected_GSM_R_MobileManagement.valid = kcg_true;
  outC->_L1_Connected_GSM_R_MobileManagement.connectionStatus =
    mhwc_notRegistered_MoRC_Pck;
  outC->_L1_Connected_GSM_R_MobileManagement.settingUpConnectionHasFailed =
    kcg_true;
  outC->_L1_Connected_GSM_R_MobileManagement.connectionLost = kcg_true;
  outC->_L1_Connecting_GSM_R_MobileManagement.valid = kcg_true;
  outC->_L1_Connecting_GSM_R_MobileManagement.connectionStatus =
    mhwc_notRegistered_MoRC_Pck;
  outC->_L1_Connecting_GSM_R_MobileManagement.settingUpConnectionHasFailed =
    kcg_true;
  outC->_L1_Connecting_GSM_R_MobileManagement.connectionLost = kcg_true;
  outC->_L3_Connecting_GSM_R_MobileManagement = kcg_true;
  outC->_L2_Connecting_GSM_R_MobileManagement = kcg_true;
  outC->_L1_Registered_GSM_R_MobileManagement.valid = kcg_true;
  outC->_L1_Registered_GSM_R_MobileManagement.connectionStatus =
    mhwc_notRegistered_MoRC_Pck;
  outC->_L1_Registered_GSM_R_MobileManagement.settingUpConnectionHasFailed =
    kcg_true;
  outC->_L1_Registered_GSM_R_MobileManagement.connectionLost = kcg_true;
  outC->_L1_Registering_GSM_R_MobileManagement.valid = kcg_true;
  outC->_L1_Registering_GSM_R_MobileManagement.connectionStatus =
    mhwc_notRegistered_MoRC_Pck;
  outC->_L1_Registering_GSM_R_MobileManagement.settingUpConnectionHasFailed =
    kcg_true;
  outC->_L1_Registering_GSM_R_MobileManagement.connectionLost = kcg_true;
  outC->_L2_Registering_GSM_R_MobileManagement = kcg_true;
  outC->_L3_Registering_GSM_R_MobileManagement = kcg_true;
  outC->_L1_Not_registered_GSM_R_MobileManagement.valid = kcg_true;
  outC->_L1_Not_registered_GSM_R_MobileManagement.connectionStatus =
    mhwc_notRegistered_MoRC_Pck;
  outC->_L1_Not_registered_GSM_R_MobileManagement.settingUpConnectionHasFailed =
    kcg_true;
  outC->_L1_Not_registered_GSM_R_MobileManagement.connectionLost = kcg_true;
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  outC->fby_3.idx = 0;
  for (idx4 = 0; idx4 < 5; idx4++) {
    outC->fby_3.items[idx4] = kcg_true;
  }
  outC->fby_4.idx = 0;
  for (idx5 = 0; idx5 < 5; idx5++) {
    outC->fby_4.items[idx5] = kcg_true;
  }
  outC->TrackMessage.valid = kcg_true;
  outC->TrackMessage.systemTimeMsgReceived = kcg_lit_int64(0);
  outC->TrackMessage.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->TrackMessage.btm_msg.present = kcg_true;
  outC->TrackMessage.btm_msg.checkResult = kcg_true;
  outC->TrackMessage.btm_msg.api_bad_balise_received = kcg_true;
  outC->TrackMessage.btm_msg.api_header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->TrackMessage.btm_msg.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->TrackMessage.btm_msg.api_header.q_media = Q_MEDIA_Balise;
  outC->TrackMessage.btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->TrackMessage.btm_msg.api_header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->TrackMessage.btm_msg.api_header.m_dup = M_DUP_No_duplicates;
  outC->TrackMessage.btm_msg.api_header.m_mcount = kcg_lit_int64(0);
  outC->TrackMessage.btm_msg.api_header.nid_c = kcg_lit_int64(0);
  outC->TrackMessage.btm_msg.api_header.nid_bg = kcg_lit_int64(0);
  outC->TrackMessage.btm_msg.api_header.q_link = Q_LINK_Unlinked;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->TrackMessage.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->TrackMessage.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->TrackMessage.rtm_msg.present = kcg_true;
  outC->TrackMessage.rtm_msg.apiConsistencyError = kcg_true;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->TrackMessage.rtm_msg.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->TrackMessage.rtm_msg.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->TrackMessage.rtm_msg.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->TrackMessage.rtm_msg.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->TrackMessage.rtm_msg.Radio_Common_Header.t_train_reference =
    kcg_lit_int64(0);
  outC->TrackMessage.rtm_msg.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->TrackMessage.rtm_msg.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->TrackMessage.rtm_msg.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->TrackMessage.rtm_msg.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->TrackMessage.rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->TrackMessage.rtm_msg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->TrackMessage.rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
  outC->TrackMessage.rtm_msg.Radio_MetaData.nid_em = kcg_true;
  outC->TrackMessage.rtm_msg.Radio_MetaData.q_scale = kcg_true;
  outC->TrackMessage.rtm_msg.Radio_MetaData.d_sr = kcg_true;
  outC->TrackMessage.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->TrackMessage.rtm_msg.Radio_MetaData.d_ref = kcg_true;
  outC->TrackMessage.rtm_msg.Radio_MetaData.q_dir = kcg_true;
  outC->TrackMessage.rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
  outC->TrackMessage.rtm_msg.Radio_MetaData.m_version = kcg_true;
  outC->TrackMessage.rtm_msg.sendingRBC_Id.valid = kcg_true;
  outC->TrackMessage.rtm_msg.sendingRBC_Id.nid_c = kcg_lit_int64(0);
  outC->TrackMessage.rtm_msg.sendingRBC_Id.rbc_id = kcg_lit_int64(0);
  outC->TrackMessage.rtm_msg.sendingRBC_Id.device_id = kcg_lit_int64(0);
  for (idx6 = 0; idx6 < 30; idx6++) {
    outC->TrackMessage.packets.PacketHeaders[idx6].nid_packet = kcg_lit_int64(0);
    outC->TrackMessage.packets.PacketHeaders[idx6].q_dir = Q_DIR_Reverse;
    outC->TrackMessage.packets.PacketHeaders[idx6].valid = kcg_true;
    outC->TrackMessage.packets.PacketHeaders[idx6].startAddress = kcg_lit_int64(0);
    outC->TrackMessage.packets.PacketHeaders[idx6].endAddress = kcg_lit_int64(0);
  }
  for (idx7 = 0; idx7 < 500; idx7++) {
    outC->TrackMessage.packets.PacketData[idx7] = kcg_lit_int64(0);
  }
  /* _L51=(TM_conversions::C_Int_TrackTrainMessage#1)/ */
  C_Int_TrackTrainMessage_init_TM_conversions(
    &outC->Context_C_Int_TrackTrainMessage_1);
  outC->GSM_R_MobileManagement_reset_nxt = kcg_false;
  outC->GSM_R_MobileManagement_reset_act = kcg_false;
  outC->GSM_R_MobileManagement_state_nxt =
    SSM_st_Not_registered_GSM_R_MobileManagement;
  kcg_copy_mobileHWStatus_Type_MoRC_Pck(
    &outC->mobileHWStatus,
    (mobileHWStatus_Type_MoRC_Pck *) &cMobileHWStatus_notRegistered_MoRC_Pck);
  outC->registrationFinished = kcg_false;
  outC->connectionEstablished = kcg_false;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RTM_reset_Toolbox_TrainModules(outC_RTM_Toolbox_TrainModules *outC)
{
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  /* _L51=(TM_conversions::C_Int_TrackTrainMessage#1)/ */
  C_Int_TrackTrainMessage_reset_TM_conversions(
    &outC->Context_C_Int_TrackTrainMessage_1);
  outC->GSM_R_MobileManagement_reset_nxt = kcg_false;
  outC->GSM_R_MobileManagement_reset_act = kcg_false;
  outC->GSM_R_MobileManagement_state_nxt =
    SSM_st_Not_registered_GSM_R_MobileManagement;
  kcg_copy_mobileHWStatus_Type_MoRC_Pck(
    &outC->mobileHWStatus,
    (mobileHWStatus_Type_MoRC_Pck *) &cMobileHWStatus_notRegistered_MoRC_Pck);
  outC->registrationFinished = kcg_false;
  outC->connectionEstablished = kcg_false;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RTM_Toolbox_TrainModules.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

