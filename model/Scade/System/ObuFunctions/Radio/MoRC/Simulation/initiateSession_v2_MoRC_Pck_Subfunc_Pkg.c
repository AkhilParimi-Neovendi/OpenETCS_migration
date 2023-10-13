/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/ObuFunctions/Radio/MoRC/Simulation/config.txt
** Generation date: 2023-09-01T13:21:48
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "initiateSession_v2_MoRC_Pck_Subfunc_Pkg.h"

/* MoRC_Pck::Subfunc_Pkg::initiateSession_v2/ */
void initiateSession_v2_MoRC_Pck_Subfunc_Pkg(
  /* mode/ */
  M_MODE mode1,
  /* prevSessionTerminatedDueToLossOfSafeRadioConnection/ */
  kcg_bool prevSessionTerminatedDueToLossOfSafeRadioConnection,
  /* eventsAndPhases/ */
  obuEventsAndPhases_T_RCM_Session_Types_Pkg *_2_eventsAndPhases,
  /* p42_SessionManagement/ */
  p42_sessionManagement_T_RCM_MsgTypes_Pkg *p42_SessionManagement,
  /* m38_initiationOfACommunicationSessionMsg/ */
  m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg *m38_initiationOfACommunicationSessionMsg,
  /* registrationStatus/ */
  mobileRegistrationContext_T_RCM_Types_Pkg *registrationStatus,
  /* connectionStatus/ */
  mobileConnectionContext_T_RCM_Types_Pkg *connectionStatus,
  /* sessionStatus/ */
  sessionStatus_T_RCM_Session_Types_Pkg *sessionStatus,
  /* lastKnownRBC/ */
  sessionStatus_T_RCM_Session_Types_Pkg *lastKnownRBC,
  /* nid_radio_shortNumberStoredOnboard/ */
  NID_RADIO nid_radio_shortNumberStoredOnboard,
  outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  /* nid_c/ */
  static NID_C nid_c_partial;
  /* nid_rbc/ */
  static NID_RBC nid_rbc_partial;
  /* nid_radio/ */
  static NID_RADIO nid_radio_partial;
  /* origin/ */
  static RBC_Id_T_Common_Types_Pkg origin_partial;
  /* rbc_valid/ */
  static kcg_bool rbc_valid_partial;
  /* nid_c/ */
  static NID_C _3_nid_c_partial;
  /* nid_rbc/ */
  static NID_RBC _4_nid_rbc_partial;
  /* nid_radio/ */
  static NID_RADIO _5_nid_radio_partial;
  /* origin/ */
  static RBC_Id_T_Common_Types_Pkg _6_origin_partial;
  /* rbc_valid/ */
  static kcg_bool _7_rbc_valid_partial;
  /* nid_c/ */
  static NID_C _8_nid_c_partial;
  /* nid_rbc/ */
  static NID_RBC _9_nid_rbc_partial;
  /* nid_radio/ */
  static NID_RADIO _10_nid_radio_partial;
  /* origin/ */
  static RBC_Id_T_Common_Types_Pkg _11_origin_partial;
  /* rbc_valid/ */
  static kcg_bool _12_rbc_valid_partial;
  static kcg_int32 noname;
  /* nid_c/ */
  static NID_C _13_nid_c_partial;
  /* nid_rbc/ */
  static NID_RBC _14_nid_rbc_partial;
  /* nid_radio/ */
  static NID_RADIO _15_nid_radio_partial;
  /* origin/ */
  static RBC_Id_T_Common_Types_Pkg _16_origin_partial;
  /* rbc_valid/ */
  static kcg_bool _17_rbc_valid_partial;
  /* rbc_valid/ */
  static kcg_bool _18_rbc_valid_partial;
  /* origin/ */
  static RBC_Id_T_Common_Types_Pkg _19_origin_partial;
  /* nid_radio/ */
  static NID_RADIO _20_nid_radio_partial;
  /* nid_rbc/ */
  static NID_RBC _21_nid_rbc_partial;
  /* nid_c/ */
  static NID_C _22_nid_c_partial;
  static sessionPhase_T_RCM_Session_Types_Pkg _23_noname;
  /* rbc_valid/ */
  static kcg_bool _24_rbc_valid_partial;
  /* origin/ */
  static RBC_Id_T_Common_Types_Pkg _25_origin_partial;
  /* nid_radio/ */
  static NID_RADIO _26_nid_radio_partial;
  /* nid_rbc/ */
  static NID_RBC _27_nid_rbc_partial;
  /* nid_c/ */
  static NID_C _28_nid_c_partial;
  static kcg_bool _29_noname;

  outC->_L189 = mrs_registered_RCM_Types_Pkg;
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &outC->_L229,
    registrationStatus);
  outC->_L192 = outC->_L229.status;
  outC->_L190 = outC->_L192 == outC->_L189;
  outC->_L193 = outC->_L229.valid;
  outC->_L194 = outC->_L193 & outC->_L190;
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(&outC->_L99, sessionStatus);
  outC->_L114 = outC->_L99.valid;
  outC->_L132 = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L130 = outC->_L99.phase;
  outC->_L131 = outC->_L130 != outC->_L132;
  outC->_L116 = outC->_L99.nid_rbc;
  kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
    &outC->_L96,
    p42_SessionManagement);
  outC->_L109 = outC->_L96.nid_RBC;
  outC->_L118 = outC->_L109 == outC->_L116;
  outC->_L115 = outC->_L99.nid_c;
  outC->_L108 = outC->_L96.nid_c;
  outC->_L117 = outC->_L108 == outC->_L115;
  outC->_L129 = outC->_L117 & outC->_L118 & outC->_L131;
  outC->_L133 = !outC->_L129;
  outC->_L113 = Q_RBC_Establish_communication_session;
  outC->_L107 = outC->_L96.q_rbc;
  outC->_L112 = outC->_L107 == outC->_L113;
  outC->_L106 = outC->_L96.valid;
  outC->_L126 = mode1;
  /* _L210=(MoRC_Pck::Subfunc_Pkg::validate_q_sleepsession_v2)/ */
  validate_q_sleepsession_v2_MoRC_Pck_Subfunc_Pkg(
    &outC->_L96,
    outC->_L126,
    &outC->Context_validate_q_sleepsession_v2);
  outC->_L210 = outC->Context_validate_q_sleepsession_v2.execute;
  outC->_L143 = outC->_L210 & outC->_L106 & outC->_L112 & outC->_L133 &
    outC->_L114;
  outC->_L196 = outC->_L96.msgSrc;
  outC->_L199 = msrc_Euroradio_Common_Types_Pkg;
  outC->_L197 = outC->_L199 == outC->_L196;
  outC->_L200 = msrc_Eurobalise_Common_Types_Pkg;
  outC->_L202 = outC->_L200 == outC->_L196;
  outC->_L201 = msrc_RadioInfillUnit_Common_Types_Pkg;
  outC->_L203 = outC->_L201 == outC->_L196;
  outC->_L204 = outC->_L203 | outC->_L202 | outC->_L197;
  outC->_L206 = msrc_OBU_Common_Types_Pkg;
  outC->_L207 = outC->_L206 == outC->_L196;
  outC->_L214 = outC->_L207 | outC->_L204;
  outC->_L208 = outC->_L214 & outC->_L143;
  outC->initiateSessionViaP42fromOBU = outC->_L208;
  outC->_L209 = outC->initiateSessionViaP42fromOBU;
  outC->_L212 = outC->_L209 & outC->_L194;
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(&outC->_L184, sessionStatus);
  outC->_L182 = outC->_L184.valid;
  outC->_L183 = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L181 = outC->_L184.phase;
  outC->_L185 = outC->_L181 == outC->_L183;
  outC->_L187 = outC->_L185 & outC->_L182;
  outC->_L154 = prevSessionTerminatedDueToLossOfSafeRadioConnection;
  kcg_copy_obuEventsAndPhases_T_RCM_Session_Types_Pkg(
    &outC->_L152,
    _2_eventsAndPhases);
  outC->_L158 = outC->_L152.trainFrontReachesEndOfAnnouncedRadioHole;
  outC->_L153 = outC->_L152.driverHasManuallyChangedLevel_to_2_or_3;
  outC->_L156 = outC->_L152.modeChangeHasToBeReportedToRBC;
  outC->_L157 = outC->_L152.atStartOfMission;
  outC->_L159 = outC->_L152.startOfMissionProcedureCompleted_in_level_2_or_3;
  outC->_L155 = outC->_L159 | outC->_L157 | outC->_L156 | outC->_L153 |
    outC->_L158 | outC->_L154;
  outC->_L188 = outC->_L155 & outC->_L187 & outC->_L194;
  outC->_L211 = outC->_L188 | outC->_L212;
  outC->initiateSessionFromOBU = outC->_L211;
  outC->IfBlock1_clock = outC->initiateSessionFromOBU &
    (*p42_SessionManagement).valid;
  if (outC->IfBlock1_clock) {
  }
  else {
    outC->else_clock_IfBlock1 = outC->initiateSessionFromOBU;
  }
  kcg_copy_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg(
    &outC->_L97,
    m38_initiationOfACommunicationSessionMsg);
  outC->_L134 = outC->_L97.valid;
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&outC->_L135, &outC->_L97.origin);
  outC->_L136 = outC->_L135.valid;
  outC->_L138 = outC->_L135.rbc_id;
  outC->_L140 = outC->_L116 == outC->_L138;
  outC->_L137 = outC->_L135.nid_c;
  outC->_L139 = outC->_L115 == outC->_L137;
  outC->_L141 = outC->_L131 & outC->_L139 & outC->_L140;
  outC->_L142 = !outC->_L141;
  outC->_L144 = outC->_L142 & outC->_L136 & outC->_L134;
  outC->initiateSessionFromRBC = outC->_L144;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L18_then_IfBlock1 = kcg_true;
    kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
      &outC->_L8_then_IfBlock1,
      lastKnownRBC);
    outC->_L17_then_IfBlock1 = outC->_L8_then_IfBlock1.valid;
    kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
      &outC->_L1_then_IfBlock1,
      p42_SessionManagement);
    outC->_L4_then_IfBlock1 = outC->_L1_then_IfBlock1.nid_RBC;
    outC->_L5_then_IfBlock1 = c_nid_RBC_contactLastKnownRBC__RCM_MsgTypes_Pkg;
    outC->_L6_then_IfBlock1 = outC->_L5_then_IfBlock1 == outC->_L4_then_IfBlock1;
    /* IfBlock1:then:_L16= */
    if (outC->_L6_then_IfBlock1) {
      outC->_L16_then_IfBlock1 = outC->_L17_then_IfBlock1;
    }
    else {
      outC->_L16_then_IfBlock1 = outC->_L18_then_IfBlock1;
    }
    rbc_valid_partial = outC->_L16_then_IfBlock1;
    outC->rbc_valid = rbc_valid_partial;
  }
  else {
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &outC->_L1_then_else_IfBlock1,
        lastKnownRBC);
      outC->_L3_then_else_IfBlock1 = outC->_L1_then_else_IfBlock1.valid;
      _24_rbc_valid_partial = outC->_L3_then_else_IfBlock1;
      _7_rbc_valid_partial = _24_rbc_valid_partial;
    }
    else {
      outC->else_clock_else_IfBlock1 = outC->initiateSessionFromRBC &
        (*m38_initiationOfACommunicationSessionMsg).valid;
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        kcg_copy_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg(
          &outC->_L1_then_else_else_IfBlock1,
          m38_initiationOfACommunicationSessionMsg);
        kcg_copy_RBC_Id_T_Common_Types_Pkg(
          &outC->_L8_then_else_else_IfBlock1,
          &outC->_L1_then_else_else_IfBlock1.origin);
        outC->_L9_then_else_else_IfBlock1 = outC->_L8_then_else_else_IfBlock1.valid;
        _12_rbc_valid_partial = outC->_L9_then_else_else_IfBlock1;
        _18_rbc_valid_partial = _12_rbc_valid_partial;
      }
      else {
        outC->_L7_else_else_else_IfBlock1 = kcg_lit_int32(0);
        outC->Input1_NumericToInt64_1_int32 = outC->_L7_else_else_else_IfBlock1;
        outC->_L1_NumericToInt64_1_int32 = outC->Input1_NumericToInt64_1_int32;
        outC->_L2_NumericToInt64_1_int32 = /* @1/_L2= */(kcg_int64)
            outC->_L1_NumericToInt64_1_int32;
        outC->Output1_NumericToInt64_1_int32 = outC->_L2_NumericToInt64_1_int32;
        outC->_L1_else_else_else_IfBlock1 = kcg_false;
        _17_rbc_valid_partial = outC->_L1_else_else_else_IfBlock1;
        _18_rbc_valid_partial = _17_rbc_valid_partial;
      }
      _7_rbc_valid_partial = _18_rbc_valid_partial;
    }
    outC->rbc_valid = _7_rbc_valid_partial;
  }
  outC->_L228 = outC->rbc_valid;
  outC->_L216 = outC->initiateSessionFromOBU;
  outC->_L217 = outC->initiateSessionFromRBC;
  outC->_L218 = outC->_L217 | outC->_L216;
  outC->_L227 = outC->_L228 & outC->_L218;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    kcg_copy_RBC_Id_T_Common_Types_Pkg(
      &outC->_L15_then_IfBlock1,
      &outC->_L1_then_IfBlock1.origin);
    kcg_copy_RBC_Id_T_Common_Types_Pkg(&origin_partial, &outC->_L15_then_IfBlock1);
    kcg_copy_RBC_Id_T_Common_Types_Pkg(&outC->origin, &origin_partial);
  }
  else {
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      kcg_copy_RBC_Id_T_Common_Types_Pkg(
        &outC->_L13_then_else_IfBlock1,
        (RBC_Id_T_Common_Types_Pkg *) &cNoOrigin_MoRC_Pck_Subfunc_Pkg);
      kcg_copy_RBC_Id_T_Common_Types_Pkg(
        &_25_origin_partial,
        &outC->_L13_then_else_IfBlock1);
      kcg_copy_RBC_Id_T_Common_Types_Pkg(&_6_origin_partial, &_25_origin_partial);
    }
    else {
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        kcg_copy_RBC_Id_T_Common_Types_Pkg(
          &_11_origin_partial,
          &outC->_L8_then_else_else_IfBlock1);
        kcg_copy_RBC_Id_T_Common_Types_Pkg(&_19_origin_partial, &_11_origin_partial);
      }
      else {
        kcg_copy_RBC_Id_T_Common_Types_Pkg(
          &outC->_L6_else_else_else_IfBlock1,
          (RBC_Id_T_Common_Types_Pkg *) &cNoOrigin_MoRC_Pck_Subfunc_Pkg);
        kcg_copy_RBC_Id_T_Common_Types_Pkg(
          &_16_origin_partial,
          &outC->_L6_else_else_else_IfBlock1);
        kcg_copy_RBC_Id_T_Common_Types_Pkg(&_19_origin_partial, &_16_origin_partial);
      }
      kcg_copy_RBC_Id_T_Common_Types_Pkg(&_6_origin_partial, &_19_origin_partial);
    }
    kcg_copy_RBC_Id_T_Common_Types_Pkg(&outC->origin, &_6_origin_partial);
  }
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&outC->_L226, &outC->origin);
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L9_then_IfBlock1 = outC->_L8_then_IfBlock1.nid_rbc;
    /* IfBlock1:then:_L7= */
    if (outC->_L6_then_IfBlock1) {
      outC->_L7_then_IfBlock1 = outC->_L9_then_IfBlock1;
    }
    else {
      outC->_L7_then_IfBlock1 = outC->_L4_then_IfBlock1;
    }
    nid_rbc_partial = outC->_L7_then_IfBlock1;
    outC->nid_rbc = nid_rbc_partial;
  }
  else {
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L6_then_else_IfBlock1 = outC->_L1_then_else_IfBlock1.nid_rbc;
      _27_nid_rbc_partial = outC->_L6_then_else_IfBlock1;
      _4_nid_rbc_partial = _27_nid_rbc_partial;
    }
    else {
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L11_then_else_else_IfBlock1 = outC->_L8_then_else_else_IfBlock1.rbc_id;
        _9_nid_rbc_partial = outC->_L11_then_else_else_IfBlock1;
        _21_nid_rbc_partial = _9_nid_rbc_partial;
      }
      else {
        _14_nid_rbc_partial = outC->_L7_else_else_else_IfBlock1;
        _21_nid_rbc_partial = _14_nid_rbc_partial;
      }
      _4_nid_rbc_partial = _21_nid_rbc_partial;
    }
    outC->nid_rbc = _4_nid_rbc_partial;
  }
  outC->_L225 = outC->nid_rbc;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L10_then_IfBlock1 = outC->_L1_then_IfBlock1.nid_radio;
    outC->_L14_then_IfBlock1 = nid_radio_shortNumberStoredOnboard;
    outC->_L11_then_IfBlock1 =
      cNID_RADIO_useTheShortNumberStoredOnboard_RCM_MsgTypes_Pkg;
    outC->_L12_then_IfBlock1 = outC->_L11_then_IfBlock1 == outC->_L10_then_IfBlock1;
    /* IfBlock1:then:_L13= */
    if (outC->_L12_then_IfBlock1) {
      outC->_L13_then_IfBlock1 = outC->_L14_then_IfBlock1;
    }
    else {
      outC->_L13_then_IfBlock1 = outC->_L10_then_IfBlock1;
    }
    nid_radio_partial = outC->_L13_then_IfBlock1;
    outC->nid_radio = nid_radio_partial;
  }
  else {
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L7_then_else_IfBlock1 = outC->_L1_then_else_IfBlock1.nid_radio;
      _26_nid_radio_partial = outC->_L7_then_else_IfBlock1;
      _5_nid_radio_partial = _26_nid_radio_partial;
    }
    else {
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
          &outC->_L16_then_else_else_IfBlock1,
          connectionStatus);
        outC->_L14_then_else_else_IfBlock1 =
          outC->_L16_then_else_else_IfBlock1.nid_radio;
        _10_nid_radio_partial = outC->_L14_then_else_else_IfBlock1;
        _20_nid_radio_partial = _10_nid_radio_partial;
      }
      else {
        outC->_L8_else_else_else_IfBlock1 = outC->Output1_NumericToInt64_1_int32;
        _15_nid_radio_partial = outC->_L8_else_else_else_IfBlock1;
        _20_nid_radio_partial = _15_nid_radio_partial;
      }
      _5_nid_radio_partial = _20_nid_radio_partial;
    }
    outC->nid_radio = _5_nid_radio_partial;
  }
  outC->_L224 = outC->nid_radio;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L2_then_IfBlock1 = outC->_L1_then_IfBlock1.nid_c;
    nid_c_partial = outC->_L2_then_IfBlock1;
    outC->nid_c = nid_c_partial;
  }
  else {
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L5_then_else_IfBlock1 = outC->_L1_then_else_IfBlock1.nid_c;
      _28_nid_c_partial = outC->_L5_then_else_IfBlock1;
      _3_nid_c_partial = _28_nid_c_partial;
    }
    else {
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L10_then_else_else_IfBlock1 = outC->_L8_then_else_else_IfBlock1.nid_c;
        _8_nid_c_partial = outC->_L10_then_else_else_IfBlock1;
        _22_nid_c_partial = _8_nid_c_partial;
      }
      else {
        _13_nid_c_partial = outC->_L7_else_else_else_IfBlock1;
        _22_nid_c_partial = _13_nid_c_partial;
      }
      _3_nid_c_partial = _22_nid_c_partial;
    }
    outC->nid_c = _3_nid_c_partial;
  }
  outC->_L223 = outC->nid_c;
  outC->_L222 = Q_RBC_Establish_communication_session;
  if (outC->IfBlock1_clock) {
  }
  else if (outC->else_clock_IfBlock1) {
    outC->_L4_then_else_IfBlock1 = outC->_L1_then_else_IfBlock1.phase;
    _23_noname = outC->_L4_then_else_IfBlock1;
  }
  else if (outC->else_clock_else_IfBlock1) {
    outC->_L12_then_else_else_IfBlock1 =
      outC->_L8_then_else_else_IfBlock1.device_id;
    noname = outC->_L12_then_else_else_IfBlock1;
  }
  kcg_copy_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg(
    &outC->_L220,
    m38_initiationOfACommunicationSessionMsg);
  kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
    &outC->_L219,
    p42_SessionManagement);
  outC->_L215.valid = outC->_L227;
  outC->_L215.initiatedByOBU = outC->_L216;
  outC->_L215.initiatedByRBC = outC->_L217;
  outC->_L215.q_rbc = outC->_L222;
  outC->_L215.nid_c = outC->_L223;
  outC->_L215.nid_rbc = outC->_L225;
  outC->_L215.nid_radio = outC->_L224;
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&outC->_L215.origin, &outC->_L226);
  kcg_copy_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg(
    &outC->_L215.m38,
    &outC->_L220);
  kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
    &outC->_L215.p42,
    &outC->_L219);
  kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
    &outC->sessionEstablishCmd,
    &outC->_L215);
  outC->_L205 = outC->_L204 & outC->_L143;
  _29_noname = outC->_L205;
}

#ifndef KCG_USER_DEFINED_INIT
void initiateSession_v2_init_MoRC_Pck_Subfunc_Pkg(
  outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->_L229.valid = kcg_true;
  outC->_L229.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L229.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L229.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L229.nid_mn = kcg_lit_int32(0);
  outC->_L228 = kcg_true;
  outC->_L227 = kcg_true;
  outC->_L226.valid = kcg_true;
  outC->_L226.nid_c = kcg_lit_int32(0);
  outC->_L226.rbc_id = kcg_lit_int32(0);
  outC->_L226.device_id = kcg_lit_int32(0);
  outC->_L225 = kcg_lit_int32(0);
  outC->_L224 = kcg_lit_int64(0);
  outC->_L223 = kcg_lit_int32(0);
  outC->_L222 = Q_RBC_Terminate_communication_session;
  outC->_L220.valid = kcg_true;
  outC->_L220.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L220.origin.valid = kcg_true;
  outC->_L220.origin.nid_c = kcg_lit_int32(0);
  outC->_L220.origin.rbc_id = kcg_lit_int32(0);
  outC->_L220.origin.device_id = kcg_lit_int32(0);
  outC->_L219.valid = kcg_true;
  outC->_L219.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L219.q_dir = Q_DIR_Reverse;
  outC->_L219.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L219.nid_c = kcg_lit_int32(0);
  outC->_L219.nid_RBC = kcg_lit_int32(0);
  outC->_L219.nid_radio = kcg_lit_int64(0);
  outC->_L219.q_sleepsession = Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L219.origin.valid = kcg_true;
  outC->_L219.origin.nid_c = kcg_lit_int32(0);
  outC->_L219.origin.rbc_id = kcg_lit_int32(0);
  outC->_L219.origin.device_id = kcg_lit_int32(0);
  outC->_L218 = kcg_true;
  outC->_L217 = kcg_true;
  outC->_L216 = kcg_true;
  outC->_L215.valid = kcg_true;
  outC->_L215.initiatedByOBU = kcg_true;
  outC->_L215.initiatedByRBC = kcg_true;
  outC->_L215.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L215.nid_c = kcg_lit_int32(0);
  outC->_L215.nid_rbc = kcg_lit_int32(0);
  outC->_L215.nid_radio = kcg_lit_int64(0);
  outC->_L215.origin.valid = kcg_true;
  outC->_L215.origin.nid_c = kcg_lit_int32(0);
  outC->_L215.origin.rbc_id = kcg_lit_int32(0);
  outC->_L215.origin.device_id = kcg_lit_int32(0);
  outC->_L215.m38.valid = kcg_true;
  outC->_L215.m38.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L215.m38.origin.valid = kcg_true;
  outC->_L215.m38.origin.nid_c = kcg_lit_int32(0);
  outC->_L215.m38.origin.rbc_id = kcg_lit_int32(0);
  outC->_L215.m38.origin.device_id = kcg_lit_int32(0);
  outC->_L215.p42.valid = kcg_true;
  outC->_L215.p42.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L215.p42.q_dir = Q_DIR_Reverse;
  outC->_L215.p42.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L215.p42.nid_c = kcg_lit_int32(0);
  outC->_L215.p42.nid_RBC = kcg_lit_int32(0);
  outC->_L215.p42.nid_radio = kcg_lit_int64(0);
  outC->_L215.p42.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L215.p42.origin.valid = kcg_true;
  outC->_L215.p42.origin.nid_c = kcg_lit_int32(0);
  outC->_L215.p42.origin.rbc_id = kcg_lit_int32(0);
  outC->_L215.p42.origin.device_id = kcg_lit_int32(0);
  outC->_L214 = kcg_true;
  outC->_L212 = kcg_true;
  outC->_L211 = kcg_true;
  outC->_L210 = kcg_true;
  outC->_L209 = kcg_true;
  outC->_L208 = kcg_true;
  outC->_L207 = kcg_true;
  outC->_L206 = msrc_undefined_Common_Types_Pkg;
  outC->_L205 = kcg_true;
  outC->_L204 = kcg_true;
  outC->_L203 = kcg_true;
  outC->_L202 = kcg_true;
  outC->_L201 = msrc_undefined_Common_Types_Pkg;
  outC->_L200 = msrc_undefined_Common_Types_Pkg;
  outC->_L199 = msrc_undefined_Common_Types_Pkg;
  outC->_L197 = kcg_true;
  outC->_L196 = msrc_undefined_Common_Types_Pkg;
  outC->_L189 = mrs_unregistered_RCM_Types_Pkg;
  outC->_L190 = kcg_true;
  outC->_L192 = mrs_unregistered_RCM_Types_Pkg;
  outC->_L193 = kcg_true;
  outC->_L194 = kcg_true;
  outC->_L188 = kcg_true;
  outC->_L187 = kcg_true;
  outC->_L181 = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L182 = kcg_true;
  outC->_L183 = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L184.valid = kcg_true;
  outC->_L184.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L184.nid_c = kcg_lit_int32(0);
  outC->_L184.nid_rbc = kcg_lit_int32(0);
  outC->_L184.nid_radio = kcg_lit_int64(0);
  outC->_L185 = kcg_true;
  outC->_L152.atPowerUp = kcg_true;
  outC->_L152.atPowerDown = kcg_true;
  outC->_L152.atStartOfMission = kcg_true;
  outC->_L152.modeChangeHasToBeReportedToRBC = kcg_true;
  outC->_L152.driverHasManuallyChangedLevel_to_2_or_3 = kcg_true;
  outC->_L152.trainFrontPassesStartOfAnnouncedRadioHole = kcg_true;
  outC->_L152.trainFrontReachesEndOfAnnouncedRadioHole = kcg_true;
  outC->_L152.trainFrontInsideInAnAnnouncedRadioHole = kcg_true;
  outC->_L152.trainFrontPassesALevelTransitionBorder = kcg_true;
  outC->_L152.trainFrontPassesA_RBC_RBC_border = kcg_true;
  outC->_L152.startOfMissionProcedureCompleted_in_level_2_or_3 = kcg_true;
  outC->_L152.isPartOfAnOngoingStartOfMissionProcedure = kcg_true;
  outC->_L152.startOfMissionProcedureIsGoingOn = kcg_true;
  outC->_L152.endOfMissionIsExecuted = kcg_true;
  outC->_L152.triggerDecisionThatNoRadioNetworkIDAvailable = kcg_true;
  outC->_L152.errorConditionRequiringTerminationDetected = kcg_true;
  outC->_L152.trainIsRejectedByRBC_duringStartOfMission = kcg_true;
  outC->_L152.driverClosesTheDeskduringStartOfMission = kcg_true;
  outC->_L152.trainExitedFromAnRBCArea = kcg_true;
  outC->_L152.isInCommunicationSessionWithAnRIU = kcg_true;
  outC->_L152.level_1_isLeft = kcg_true;
  outC->_L153 = kcg_true;
  outC->_L154 = kcg_true;
  outC->_L155 = kcg_true;
  outC->_L156 = kcg_true;
  outC->_L157 = kcg_true;
  outC->_L158 = kcg_true;
  outC->_L159 = kcg_true;
  outC->_L144 = kcg_true;
  outC->_L143 = kcg_true;
  outC->_L142 = kcg_true;
  outC->_L141 = kcg_true;
  outC->_L140 = kcg_true;
  outC->_L139 = kcg_true;
  outC->_L138 = kcg_lit_int32(0);
  outC->_L137 = kcg_lit_int32(0);
  outC->_L136 = kcg_true;
  outC->_L135.valid = kcg_true;
  outC->_L135.nid_c = kcg_lit_int32(0);
  outC->_L135.rbc_id = kcg_lit_int32(0);
  outC->_L135.device_id = kcg_lit_int32(0);
  outC->_L134 = kcg_true;
  outC->_L133 = kcg_true;
  outC->_L132 = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L131 = kcg_true;
  outC->_L130 = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L129 = kcg_true;
  outC->_L126 = M_MODE_Full_Supervision;
  outC->_L118 = kcg_true;
  outC->_L117 = kcg_true;
  outC->_L116 = kcg_lit_int32(0);
  outC->_L115 = kcg_lit_int32(0);
  outC->_L114 = kcg_true;
  outC->_L113 = Q_RBC_Terminate_communication_session;
  outC->_L112 = kcg_true;
  outC->_L109 = kcg_lit_int32(0);
  outC->_L108 = kcg_lit_int32(0);
  outC->_L107 = Q_RBC_Terminate_communication_session;
  outC->_L106 = kcg_true;
  outC->_L99.valid = kcg_true;
  outC->_L99.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L99.nid_c = kcg_lit_int32(0);
  outC->_L99.nid_rbc = kcg_lit_int32(0);
  outC->_L99.nid_radio = kcg_lit_int64(0);
  outC->_L97.valid = kcg_true;
  outC->_L97.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L97.origin.valid = kcg_true;
  outC->_L97.origin.nid_c = kcg_lit_int32(0);
  outC->_L97.origin.rbc_id = kcg_lit_int32(0);
  outC->_L97.origin.device_id = kcg_lit_int32(0);
  outC->_L96.valid = kcg_true;
  outC->_L96.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L96.q_dir = Q_DIR_Reverse;
  outC->_L96.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L96.nid_c = kcg_lit_int32(0);
  outC->_L96.nid_RBC = kcg_lit_int32(0);
  outC->_L96.nid_radio = kcg_lit_int64(0);
  outC->_L96.q_sleepsession = Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L96.origin.valid = kcg_true;
  outC->_L96.origin.nid_c = kcg_lit_int32(0);
  outC->_L96.origin.rbc_id = kcg_lit_int32(0);
  outC->_L96.origin.device_id = kcg_lit_int32(0);
  outC->rbc_valid = kcg_true;
  outC->origin.valid = kcg_true;
  outC->origin.nid_c = kcg_lit_int32(0);
  outC->origin.rbc_id = kcg_lit_int32(0);
  outC->origin.device_id = kcg_lit_int32(0);
  outC->nid_radio = kcg_lit_int64(0);
  outC->nid_rbc = kcg_lit_int32(0);
  outC->nid_c = kcg_lit_int32(0);
  outC->initiateSessionFromRBC = kcg_true;
  outC->initiateSessionFromOBU = kcg_true;
  outC->initiateSessionViaP42fromOBU = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L13_then_else_IfBlock1.valid = kcg_true;
  outC->_L13_then_else_IfBlock1.nid_c = kcg_lit_int32(0);
  outC->_L13_then_else_IfBlock1.rbc_id = kcg_lit_int32(0);
  outC->_L13_then_else_IfBlock1.device_id = kcg_lit_int32(0);
  outC->_L3_then_else_IfBlock1 = kcg_true;
  outC->_L4_then_else_IfBlock1 = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L5_then_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L6_then_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L7_then_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L1_then_else_IfBlock1.valid = kcg_true;
  outC->_L1_then_else_IfBlock1.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L1_then_else_IfBlock1.nid_c = kcg_lit_int32(0);
  outC->_L1_then_else_IfBlock1.nid_rbc = kcg_lit_int32(0);
  outC->_L1_then_else_IfBlock1.nid_radio = kcg_lit_int64(0);
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L1_else_else_else_IfBlock1 = kcg_true;
  outC->_L6_else_else_else_IfBlock1.valid = kcg_true;
  outC->_L6_else_else_else_IfBlock1.nid_c = kcg_lit_int32(0);
  outC->_L6_else_else_else_IfBlock1.rbc_id = kcg_lit_int32(0);
  outC->_L6_else_else_else_IfBlock1.device_id = kcg_lit_int32(0);
  outC->_L7_else_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L8_else_else_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L1_then_else_else_IfBlock1.valid = kcg_true;
  outC->_L1_then_else_else_IfBlock1.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L1_then_else_else_IfBlock1.origin.valid = kcg_true;
  outC->_L1_then_else_else_IfBlock1.origin.nid_c = kcg_lit_int32(0);
  outC->_L1_then_else_else_IfBlock1.origin.rbc_id = kcg_lit_int32(0);
  outC->_L1_then_else_else_IfBlock1.origin.device_id = kcg_lit_int32(0);
  outC->_L8_then_else_else_IfBlock1.valid = kcg_true;
  outC->_L8_then_else_else_IfBlock1.nid_c = kcg_lit_int32(0);
  outC->_L8_then_else_else_IfBlock1.rbc_id = kcg_lit_int32(0);
  outC->_L8_then_else_else_IfBlock1.device_id = kcg_lit_int32(0);
  outC->_L12_then_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L11_then_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L10_then_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L9_then_else_else_IfBlock1 = kcg_true;
  outC->_L14_then_else_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L16_then_else_else_IfBlock1.valid = kcg_true;
  outC->_L16_then_else_else_IfBlock1.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L16_then_else_else_IfBlock1.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L16_then_else_else_IfBlock1.nid_radio = kcg_lit_int64(0);
  outC->_L16_then_else_else_IfBlock1.settingUpConnectionHasFailed = kcg_true;
  outC->_L16_then_else_else_IfBlock1.connectionLost = kcg_true;
  outC->_L16_then_else_else_IfBlock1.isInRadioHole = kcg_true;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L1_then_IfBlock1.valid = kcg_true;
  outC->_L1_then_IfBlock1.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L1_then_IfBlock1.q_dir = Q_DIR_Reverse;
  outC->_L1_then_IfBlock1.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L1_then_IfBlock1.nid_c = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.nid_RBC = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.nid_radio = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L1_then_IfBlock1.origin.valid = kcg_true;
  outC->_L1_then_IfBlock1.origin.nid_c = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.origin.rbc_id = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.origin.device_id = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L4_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L6_then_IfBlock1 = kcg_true;
  outC->_L7_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.valid = kcg_true;
  outC->_L8_then_IfBlock1.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L8_then_IfBlock1.nid_c = kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.nid_rbc = kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.nid_radio = kcg_lit_int64(0);
  outC->_L9_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L10_then_IfBlock1 = kcg_lit_int64(0);
  outC->_L11_then_IfBlock1 = kcg_lit_int64(0);
  outC->_L12_then_IfBlock1 = kcg_true;
  outC->_L13_then_IfBlock1 = kcg_lit_int64(0);
  outC->_L14_then_IfBlock1 = kcg_lit_int64(0);
  outC->_L15_then_IfBlock1.valid = kcg_true;
  outC->_L15_then_IfBlock1.nid_c = kcg_lit_int32(0);
  outC->_L15_then_IfBlock1.rbc_id = kcg_lit_int32(0);
  outC->_L15_then_IfBlock1.device_id = kcg_lit_int32(0);
  outC->_L16_then_IfBlock1 = kcg_true;
  outC->_L17_then_IfBlock1 = kcg_true;
  outC->_L18_then_IfBlock1 = kcg_true;
  outC->_L1_NumericToInt64_1_int32 = kcg_lit_int32(0);
  outC->_L2_NumericToInt64_1_int32 = kcg_lit_int64(0);
  outC->Input1_NumericToInt64_1_int32 = kcg_lit_int32(0);
  outC->Output1_NumericToInt64_1_int32 = kcg_lit_int64(0);
  outC->sessionEstablishCmd.valid = kcg_true;
  outC->sessionEstablishCmd.initiatedByOBU = kcg_true;
  outC->sessionEstablishCmd.initiatedByRBC = kcg_true;
  outC->sessionEstablishCmd.q_rbc = Q_RBC_Terminate_communication_session;
  outC->sessionEstablishCmd.nid_c = kcg_lit_int32(0);
  outC->sessionEstablishCmd.nid_rbc = kcg_lit_int32(0);
  outC->sessionEstablishCmd.nid_radio = kcg_lit_int64(0);
  outC->sessionEstablishCmd.origin.valid = kcg_true;
  outC->sessionEstablishCmd.origin.nid_c = kcg_lit_int32(0);
  outC->sessionEstablishCmd.origin.rbc_id = kcg_lit_int32(0);
  outC->sessionEstablishCmd.origin.device_id = kcg_lit_int32(0);
  outC->sessionEstablishCmd.m38.valid = kcg_true;
  outC->sessionEstablishCmd.m38.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->sessionEstablishCmd.m38.origin.valid = kcg_true;
  outC->sessionEstablishCmd.m38.origin.nid_c = kcg_lit_int32(0);
  outC->sessionEstablishCmd.m38.origin.rbc_id = kcg_lit_int32(0);
  outC->sessionEstablishCmd.m38.origin.device_id = kcg_lit_int32(0);
  outC->sessionEstablishCmd.p42.valid = kcg_true;
  outC->sessionEstablishCmd.p42.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->sessionEstablishCmd.p42.q_dir = Q_DIR_Reverse;
  outC->sessionEstablishCmd.p42.q_rbc = Q_RBC_Terminate_communication_session;
  outC->sessionEstablishCmd.p42.nid_c = kcg_lit_int32(0);
  outC->sessionEstablishCmd.p42.nid_RBC = kcg_lit_int32(0);
  outC->sessionEstablishCmd.p42.nid_radio = kcg_lit_int64(0);
  outC->sessionEstablishCmd.p42.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->sessionEstablishCmd.p42.origin.valid = kcg_true;
  outC->sessionEstablishCmd.p42.origin.nid_c = kcg_lit_int32(0);
  outC->sessionEstablishCmd.p42.origin.rbc_id = kcg_lit_int32(0);
  outC->sessionEstablishCmd.p42.origin.device_id = kcg_lit_int32(0);
  /* _L210=(MoRC_Pck::Subfunc_Pkg::validate_q_sleepsession_v2)/ */
  validate_q_sleepsession_v2_init_MoRC_Pck_Subfunc_Pkg(
    &outC->Context_validate_q_sleepsession_v2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void initiateSession_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  /* _L210=(MoRC_Pck::Subfunc_Pkg::validate_q_sleepsession_v2)/ */
  validate_q_sleepsession_v2_reset_MoRC_Pck_Subfunc_Pkg(
    &outC->Context_validate_q_sleepsession_v2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: MoRC_Pck::Subfunc_Pkg::initiateSession_v2/
  @1: (math::NumericToInt64#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** initiateSession_v2_MoRC_Pck_Subfunc_Pkg.c
** Generation date: 2023-09-01T13:21:48
*************************************************************$ */

