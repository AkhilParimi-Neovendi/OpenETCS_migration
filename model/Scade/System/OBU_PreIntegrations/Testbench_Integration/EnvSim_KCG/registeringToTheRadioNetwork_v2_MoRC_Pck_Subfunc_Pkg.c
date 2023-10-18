/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg.h"

/* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2/ */
void registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg(
  /* atPowerUpRadioNetworkID/ */
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg *atPowerUpRadioNetworkID,
  /* newRadioNetworkIDFromDriver/ */
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg *newRadioNetworkIDFromDriver,
  /* p45_registrationOrder/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg *p45_registrationOrder,
  /* level/ */
  M_LEVEL level,
  /* eventsAndPhases/ */
  obuEventsAndPhases_T_RCM_Session_Types_Pkg *eventsAndPhases,
  /* sessionStatus/ */
  sessionStatus_T_RCM_Session_Types_Pkg *sessionStatus,
  /* connectionStatus/ */
  mobileConnectionContext_T_RCM_Types_Pkg *connectionStatus,
  /* mobileRegistrationContext/ */
  mobileRegistrationContext_T_RCM_Types_Pkg *mobileRegistrationContext,
  /* reset/ */
  kcg_bool reset,
  /* RadioNetworkID_Default/ */
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg *RadioNetworkID_Default,
  outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  /* registrationStatus/ */
  static mobileRegistrationStatus_T_RCM_Types_Pkg registrationStatus_partial;
  /* Register_SM: */
  static SSM_ST_Register_SM Register_SM_state_nxt_partial;
  /* Register_SM: */
  static kcg_bool Register_SM_reset_nxt_partial;
  /* Register_SM: */
  static SSM_TR_Register_SM Register_SM_fired_partial;
  /* registrationStatus/ */
  static mobileRegistrationStatus_T_RCM_Types_Pkg _1_registrationStatus_partial;
  /* Register_SM: */
  static SSM_ST_Register_SM _2_Register_SM_state_nxt_partial;
  /* Register_SM: */
  static kcg_bool _3_Register_SM_reset_nxt_partial;
  /* Register_SM: */
  static SSM_TR_Register_SM _4_Register_SM_fired_partial;
  /* registrationStatus/ */
  static mobileRegistrationStatus_T_RCM_Types_Pkg _5_registrationStatus_partial;
  /* Register_SM: */
  static SSM_ST_Register_SM _6_Register_SM_state_nxt_partial;
  /* Register_SM: */
  static kcg_bool _7_Register_SM_reset_nxt_partial;
  /* Register_SM: */
  static SSM_TR_Register_SM _8_Register_SM_fired_partial;
  /* registrationStatus/ */
  static mobileRegistrationStatus_T_RCM_Types_Pkg _9_registrationStatus_partial;
  /* Register_SM: */
  static SSM_ST_Register_SM _10_Register_SM_state_nxt_partial;
  /* Register_SM: */
  static kcg_bool _11_Register_SM_reset_nxt_partial;
  /* Register_SM: */
  static SSM_TR_Register_SM _12_Register_SM_fired_partial;
  /* Register_SM: */
  static SSM_ST_Register_SM Register_SM_state_act_partial;
  /* Register_SM: */
  static kcg_bool Register_SM_reset_act_partial;
  /* Register_SM: */
  static SSM_TR_Register_SM Register_SM_fired_strong_partial;
  /* Register_SM:Unregistered:<3> */
  static kcg_bool tr_3_guard_Unregistered_Register_SM;
  /* Register_SM:Unregistered:<2> */
  static kcg_bool tr_2_guard_Unregistered_Register_SM;
  /* Register_SM:Unregistered:<1> */
  static kcg_bool tr_1_guard_Unregistered_Register_SM;
  /* Register_SM: */
  static SSM_ST_Register_SM _13_Register_SM_state_act_partial;
  /* Register_SM: */
  static kcg_bool _14_Register_SM_reset_act_partial;
  /* Register_SM: */
  static SSM_TR_Register_SM _15_Register_SM_fired_strong_partial;
  /* Register_SM:Registering:<2> */
  static kcg_bool tr_2_guard_Registering_Register_SM;
  /* Register_SM:Registering:<1> */
  static kcg_bool tr_1_guard_Registering_Register_SM;
  /* Register_SM: */
  static SSM_ST_Register_SM _16_Register_SM_state_act_partial;
  /* Register_SM: */
  static kcg_bool _17_Register_SM_reset_act_partial;
  /* Register_SM: */
  static SSM_TR_Register_SM _18_Register_SM_fired_strong_partial;
  /* Register_SM:Registered:<3> */
  static kcg_bool tr_3_guard_Registered_Register_SM;
  /* Register_SM:Registered:<2> */
  static kcg_bool tr_2_guard_Registered_Register_SM;
  /* Register_SM:Registered:<1> */
  static kcg_bool tr_1_guard_Registered_Register_SM;
  /* Register_SM: */
  static SSM_ST_Register_SM _19_Register_SM_state_act_partial;
  /* Register_SM: */
  static kcg_bool _20_Register_SM_reset_act_partial;
  /* Register_SM: */
  static SSM_TR_Register_SM _21_Register_SM_fired_strong_partial;
  /* Register_SM:Reregistering:<1> */
  static kcg_bool tr_1_guard_Reregistering_Register_SM;
  /* resetDelayedOrderFlag/ */
  static kcg_bool last_resetDelayedOrderFlag;
  /* Register_SM: */
  static kcg_bool Register_SM_reset_sel;
  /* Register_SM: */
  static kcg_bool Register_SM_reset_prv;

  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->_L347,
    (P45_RadioNetworkRegistration_T_Packet_Types_Pkg *)
      &cNoP45_RadioNetworkRegistration_RCM_Types_Pkg);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->InitVal_Memory_1_struct,
    &outC->_L347);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->_L9_Memory_1_struct,
    &outC->InitVal_Memory_1_struct);
  outC->_L154 = reset;
  outC->Reset_Memory_1_struct = outC->_L154;
  outC->_L1_Memory_1_struct = outC->Reset_Memory_1_struct;
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->_L2_Memory_1_struct,
    &outC->InitVal_Memory_1_struct);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&outC->_L132, p45_registrationOrder);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L147,
    &outC->_L132.packets);
  /* _L148=(TM::Read_P045#1)/ */
  Read_P045_TM(&outC->_L147, &outC->Context_Read_P045_1);
  outC->_L148 = outC->Context_Read_P045_1.received;
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->_L149,
    &outC->Context_Read_P045_1.P045_OBU_out);
  outC->_L150 = outC->_L132.valid;
  outC->_L151 = outC->_L150 & outC->_L148;
  outC->MemCond_Memory_1_struct = outC->_L151;
  outC->_L3_Memory_1_struct = outC->MemCond_Memory_1_struct;
  /* @1/_L5= */
  if (outC->init) {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
      &outC->_L5_Memory_1_struct,
      &outC->_L9_Memory_1_struct);
  }
  else {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
      &outC->_L5_Memory_1_struct,
      &outC->_L8_Memory_1_struct);
  }
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->M_Input_Memory_1_struct,
    &outC->_L149);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->_L6_Memory_1_struct,
    &outC->M_Input_Memory_1_struct);
  /* @1/_L7= */
  if (outC->_L3_Memory_1_struct) {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
      &outC->_L7_Memory_1_struct,
      &outC->_L6_Memory_1_struct);
  }
  else {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
      &outC->_L7_Memory_1_struct,
      &outC->_L5_Memory_1_struct);
  }
  /* @1/_L8= */
  if (outC->_L1_Memory_1_struct) {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
      &outC->_L8_Memory_1_struct,
      &outC->_L2_Memory_1_struct);
  }
  else {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
      &outC->_L8_Memory_1_struct,
      &outC->_L7_Memory_1_struct);
  }
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->Out_Memory_1_struct,
    &outC->_L8_Memory_1_struct);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->_L349,
    (P45_RadioNetworkRegistration_T_Packet_Types_Pkg *)
      &cNoP45_RadioNetworkRegistration_RCM_Types_Pkg);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->InitVal_Memory_2_struct,
    &outC->_L349);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->_L9_Memory_2_struct,
    &outC->InitVal_Memory_2_struct);
  outC->_L164 = reset;
  outC->Reset_Memory_2_struct = outC->_L164;
  outC->_L1_Memory_2_struct = outC->Reset_Memory_2_struct;
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->_L2_Memory_2_struct,
    &outC->InitVal_Memory_2_struct);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->_L131,
    atPowerUpRadioNetworkID);
  outC->_L165 = outC->_L131.valid;
  outC->MemCond_Memory_2_struct = outC->_L165;
  outC->_L3_Memory_2_struct = outC->MemCond_Memory_2_struct;
  /* @2/_L5= */
  if (outC->init) {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
      &outC->_L5_Memory_2_struct,
      &outC->_L9_Memory_2_struct);
  }
  else {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
      &outC->_L5_Memory_2_struct,
      &outC->_L8_Memory_2_struct);
  }
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->M_Input_Memory_2_struct,
    &outC->_L131);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->_L6_Memory_2_struct,
    &outC->M_Input_Memory_2_struct);
  /* @2/_L7= */
  if (outC->_L3_Memory_2_struct) {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
      &outC->_L7_Memory_2_struct,
      &outC->_L6_Memory_2_struct);
  }
  else {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
      &outC->_L7_Memory_2_struct,
      &outC->_L5_Memory_2_struct);
  }
  /* @2/_L8= */
  if (outC->_L1_Memory_2_struct) {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
      &outC->_L8_Memory_2_struct,
      &outC->_L2_Memory_2_struct);
  }
  else {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
      &outC->_L8_Memory_2_struct,
      &outC->_L7_Memory_2_struct);
  }
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->Out_Memory_2_struct,
    &outC->_L8_Memory_2_struct);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->InitVal_Memory_4_struct,
    &outC->_L349);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->_L9_Memory_4_struct,
    &outC->InitVal_Memory_4_struct);
  outC->_L175 = reset;
  outC->Reset_Memory_4_struct = outC->_L175;
  outC->_L1_Memory_4_struct = outC->Reset_Memory_4_struct;
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->_L2_Memory_4_struct,
    &outC->InitVal_Memory_4_struct);
  outC->_L193 = M_LEVEL_Level_3;
  outC->_L199 = level;
  outC->_L198 = outC->_L199 == outC->_L193;
  outC->_L194 = M_LEVEL_Level_2;
  outC->_L195 = outC->_L194 == outC->_L199;
  outC->_L197 = outC->_L195 | outC->_L198;
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->_L176,
    newRadioNetworkIDFromDriver);
  outC->_L174 = outC->_L176.valid;
  outC->_L196 = outC->_L174 & outC->_L197;
  outC->MemCond_Memory_4_struct = outC->_L196;
  outC->_L3_Memory_4_struct = outC->MemCond_Memory_4_struct;
  /* @3/_L5= */
  if (outC->init) {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
      &outC->_L5_Memory_4_struct,
      &outC->_L9_Memory_4_struct);
  }
  else {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
      &outC->_L5_Memory_4_struct,
      &outC->_L8_Memory_4_struct);
  }
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->M_Input_Memory_4_struct,
    &outC->_L176);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->_L6_Memory_4_struct,
    &outC->M_Input_Memory_4_struct);
  /* @3/_L7= */
  if (outC->_L3_Memory_4_struct) {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
      &outC->_L7_Memory_4_struct,
      &outC->_L6_Memory_4_struct);
  }
  else {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
      &outC->_L7_Memory_4_struct,
      &outC->_L5_Memory_4_struct);
  }
  /* @3/_L8= */
  if (outC->_L1_Memory_4_struct) {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
      &outC->_L8_Memory_4_struct,
      &outC->_L2_Memory_4_struct);
  }
  else {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
      &outC->_L8_Memory_4_struct,
      &outC->_L7_Memory_4_struct);
  }
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->Out_Memory_4_struct,
    &outC->_L8_Memory_4_struct);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->_L182,
    RadioNetworkID_Default);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->InitVal_Memory_5_struct,
    &outC->_L182);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->_L9_Memory_5_struct,
    &outC->InitVal_Memory_5_struct);
  outC->_L177 = reset;
  outC->Reset_Memory_5_struct = outC->_L177;
  outC->_L1_Memory_5_struct = outC->Reset_Memory_5_struct;
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->_L2_Memory_5_struct,
    &outC->InitVal_Memory_5_struct);
  /* _L181=(digital::RisingEdge#7)/ */
  RisingEdge_digital(outC->_L196, &outC->Context_RisingEdge_7);
  outC->_L181 = outC->Context_RisingEdge_7.RE_Output;
  /* _L180=(digital::RisingEdge#6)/ */
  RisingEdge_digital(outC->_L165, &outC->Context_RisingEdge_6);
  outC->_L180 = outC->Context_RisingEdge_6.RE_Output;
  outC->_L185 = outC->_L180 | outC->_L181 | outC->_L151;
  outC->MemCond_Memory_5_struct = outC->_L185;
  outC->_L3_Memory_5_struct = outC->MemCond_Memory_5_struct;
  /* @4/_L5= */
  if (outC->init) {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
      &outC->_L5_Memory_5_struct,
      &outC->_L9_Memory_5_struct);
  }
  else {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
      &outC->_L5_Memory_5_struct,
      &outC->_L8_Memory_5_struct);
  }
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->_L163,
    &outC->Out_Memory_2_struct);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->_L173,
    &outC->Out_Memory_4_struct);
  /* _L183= */
  if (outC->_L181) {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
      &outC->_L183,
      &outC->_L173);
  }
  else {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
      &outC->_L183,
      &outC->_L163);
  }
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->_L153,
    &outC->Out_Memory_1_struct);
  /* _L184= */
  if (outC->_L151) {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
      &outC->_L184,
      &outC->_L153);
  }
  else {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
      &outC->_L184,
      &outC->_L183);
  }
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->M_Input_Memory_5_struct,
    &outC->_L184);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->_L6_Memory_5_struct,
    &outC->M_Input_Memory_5_struct);
  /* @4/_L7= */
  if (outC->_L3_Memory_5_struct) {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
      &outC->_L7_Memory_5_struct,
      &outC->_L6_Memory_5_struct);
  }
  else {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
      &outC->_L7_Memory_5_struct,
      &outC->_L5_Memory_5_struct);
  }
  /* @4/_L8= */
  if (outC->_L1_Memory_5_struct) {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
      &outC->_L8_Memory_5_struct,
      &outC->_L2_Memory_5_struct);
  }
  else {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
      &outC->_L8_Memory_5_struct,
      &outC->_L7_Memory_5_struct);
  }
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->Out_Memory_5_struct,
    &outC->_L8_Memory_5_struct);
  outC->_L4_FlipFlopSet_1 = outC->_L2_FlipFlopSet_1;
  last_resetDelayedOrderFlag = outC->resetDelayedOrderFlag;
  outC->_L247 = last_resetDelayedOrderFlag;
  outC->Reset_FlipFlopSet_1 = outC->_L247;
  outC->_L6_FlipFlopSet_1 = outC->Reset_FlipFlopSet_1;
  outC->_L11_FlipFlopSet_1 = !outC->_L6_FlipFlopSet_1;
  outC->_L12_FlipFlopSet_1 = outC->_L11_FlipFlopSet_1 & outC->_L4_FlipFlopSet_1;
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &outC->_L343,
    mobileRegistrationContext);
  outC->_L227 = outC->_L343.valid;
  outC->_L228 = outC->_L343.nid_mn;
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->_L178,
    &outC->Out_Memory_5_struct);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->lastReceivedRadioNetworkID_loc,
    &outC->_L178);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->_L223,
    &outC->lastReceivedRadioNetworkID_loc);
  outC->_L225 = outC->_L223.nid_mn;
  outC->_L229 = outC->_L225 != outC->_L228;
  outC->_L224 = outC->_L223.valid;
  outC->_L230 = outC->_L224 & outC->_L229 & outC->_L227;
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(&outC->_L212, sessionStatus);
  outC->_L213 = outC->_L212.valid;
  outC->_L354 = sp_maintaining_RCM_Session_Types_Pkg;
  outC->_L214 = outC->_L212.phase;
  outC->_L358 = outC->_L214 == outC->_L354;
  outC->_L355 = sp_terminating_RCM_Session_Types_Pkg;
  outC->_L218 = outC->_L214 == outC->_L355;
  outC->_L353 = sp_establishing_RCM_Session_Types_Pkg;
  outC->_L217 = outC->_L214 == outC->_L353;
  outC->_L219 = outC->_L217 | outC->_L218 | outC->_L358;
  outC->_L241 = outC->_L219 & outC->_L213;
  outC->_L303 = mcs_connected_RCM_Types_Pkg;
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &outC->_L365,
    connectionStatus);
  outC->_L299 = outC->_L365.status;
  outC->_L305 = outC->_L299 == outC->_L303;
  outC->_L302 = mcs_connecting_RCM_Types_Pkg;
  outC->_L304 = outC->_L299 == outC->_L302;
  outC->_L240 = outC->_L304 | outC->_L305;
  outC->_L300 = outC->_L365.valid;
  outC->_L242 = outC->_L300 & outC->_L240;
  outC->_L243 = outC->_L242 | outC->_L241;
  kcg_copy_obuEventsAndPhases_T_RCM_Session_Types_Pkg(
    &outC->_L368,
    eventsAndPhases);
  outC->_L369 = outC->_L368.triggerDecisionThatNoRadioNetworkIDAvailable;
  outC->_L249 = outC->_L185 | outC->_L369;
  outC->_L311 = outC->_L178.valid;
  outC->_L312 = outC->_L311 & outC->_L249;
  outC->triggerRegistrationOfMobile = outC->_L312;
  outC->_L200 = outC->triggerRegistrationOfMobile;
  outC->_L244 = outC->_L200 & outC->_L243 & outC->_L230;
  outC->Set_FlipFlopSet_1 = outC->_L244;
  outC->_L5_FlipFlopSet_1 = outC->Set_FlipFlopSet_1;
  outC->_L13_FlipFlopSet_1 = outC->_L5_FlipFlopSet_1 | outC->_L12_FlipFlopSet_1;
  outC->Init_FlipFlopSet_1 = kcg_false;
  outC->_L10_FlipFlopSet_1 = outC->Init_FlipFlopSet_1;
  /* @5/_L2= */
  if (outC->init) {
    outC->_L2_FlipFlopSet_1 = outC->_L10_FlipFlopSet_1;
  }
  else {
    outC->_L2_FlipFlopSet_1 = outC->_L13_FlipFlopSet_1;
  }
  outC->FFS_Output_FlipFlopSet_1 = outC->_L2_FlipFlopSet_1;
  outC->p45_registrationOrderReceived_p = outC->_L151;
  kcg_copy_obuEventsAndPhases_T_RCM_Session_Types_Pkg(
    &outC->_L366,
    eventsAndPhases);
  outC->_L367 = outC->_L366.atPowerDown;
  outC->_L364 = mcs_connected_RCM_Types_Pkg;
  outC->_L363 = mcs_connecting_RCM_Types_Pkg;
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &outC->_L357,
    connectionStatus);
  outC->_L360 = outC->_L357.status;
  outC->_L359 = outC->_L357.valid;
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &outC->_L345,
    mobileRegistrationContext);
  outC->_L346 = outC->_L345.mobileDeviceNo;
  outC->Register_SM_state_sel = outC->Register_SM_state_nxt;
  outC->_L253 = outC->_L360 == outC->_L364;
  outC->_L252 = outC->_L360 == outC->_L363;
  outC->_L254 = outC->_L219 | outC->_L252 | outC->_L253 | outC->_L242;
  /* _L255=(digital::FallingEdge#1)/ */
  FallingEdge_digital(outC->_L254, &outC->Context_FallingEdge_1);
  outC->_L255 = outC->Context_FallingEdge_1.FE_Output;
  outC->_L256 = outC->_L213 & outC->_L359 & outC->_L255;
  outC->safeRadioConnectionReleased = outC->_L256;
  outC->_L245 = outC->FFS_Output_FlipFlopSet_1;
  outC->orderRegistrationDelayed = outC->_L245;
  outC->_L232 = !outC->_L219;
  outC->_L220 = outC->_L213 & outC->_L232;
  outC->_L293 = mrs_registering_RCM_Types_Pkg;
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &outC->_L289,
    mobileRegistrationContext);
  outC->_L291 = outC->_L289.status;
  outC->_L297 = outC->_L291 == outC->_L293;
  outC->_L294 = mrs_registered_RCM_Types_Pkg;
  outC->_L296 = outC->_L291 == outC->_L294;
  outC->_L237 = outC->_L296 | outC->_L297;
  outC->_L222 = outC->_L237 & outC->_L230;
  outC->_L292 = mrs_unregistered_RCM_Types_Pkg;
  outC->_L295 = outC->_L291 == outC->_L292;
  outC->_L211 = outC->_L295 | outC->_L222;
  outC->_L290 = outC->_L289.valid;
  outC->_L221 = outC->_L290 & outC->_L211;
  outC->_L231 = outC->_L200 & outC->_L221 & outC->_L220;
  outC->orderRegistrationImmediately = outC->_L231;
  /* Register_SM: */
  switch (outC->Register_SM_state_sel) {
    case SSM_st_Reregistering_Register_SM :
      outC->sResetDelayedOrderFlag = kcg_false;
      break;
    case SSM_st_Registered_Register_SM :
      tr_1_guard_Registered_Register_SM = outC->orderRegistrationImmediately |
        (outC->orderRegistrationDelayed & outC->safeRadioConnectionReleased);
      outC->tr_1_clock_Registered_Register_SM = tr_1_guard_Registered_Register_SM;
      /* Register_SM:Registered:<1> */
      if (outC->tr_1_clock_Registered_Register_SM) {
        outC->sResetDelayedOrderFlag = kcg_true;
      }
      else {
        outC->sResetDelayedOrderFlag = kcg_false;
      }
      break;
    case SSM_st_Registering_Register_SM :
      tr_1_guard_Registering_Register_SM = outC->orderRegistrationImmediately |
        (outC->orderRegistrationDelayed & outC->safeRadioConnectionReleased);
      outC->tr_1_clock_Registering_Register_SM = tr_1_guard_Registering_Register_SM;
      /* Register_SM:Registering:<1> */
      if (outC->tr_1_clock_Registering_Register_SM) {
        outC->sResetDelayedOrderFlag = kcg_true;
      }
      else {
        outC->sResetDelayedOrderFlag = kcg_false;
      }
      break;
    case SSM_st_Unregistered_Register_SM :
      outC->sResetDelayedOrderFlag = kcg_false;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L335 = outC->sResetDelayedOrderFlag;
  outC->resetDelayedOrderFlag = outC->_L335;
  outC->_L333 = mrs_registered_RCM_Types_Pkg;
  outC->_L309 = mrs_unregistered_RCM_Types_Pkg;
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &outC->_L306,
    mobileRegistrationContext);
  outC->_L308 = outC->_L306.status;
  outC->_L326 = mhs_ok_RCM_Types_Pkg;
  outC->_L325 = outC->_L306.healthStatus;
  outC->_L327 = outC->_L325 == outC->_L326;
  outC->_L307 = outC->_L306.valid;
  outC->_L328 = outC->_L307 & outC->_L327;
  /* _L310= */
  if (outC->_L328) {
    outC->_L310 = outC->_L308;
  }
  else {
    outC->_L310 = outC->_L309;
  }
  outC->registrationStatusFromMobile = outC->_L310;
  /* Register_SM: */
  switch (outC->Register_SM_state_sel) {
    case SSM_st_Reregistering_Register_SM :
      tr_1_guard_Reregistering_Register_SM =
        outC->registrationStatusFromMobile == mrs_unregistered_RCM_Types_Pkg;
      if (tr_1_guard_Reregistering_Register_SM) {
        _19_Register_SM_state_act_partial = SSM_st_Registering_Register_SM;
      }
      else {
        _19_Register_SM_state_act_partial = SSM_st_Reregistering_Register_SM;
      }
      outC->Register_SM_state_act = _19_Register_SM_state_act_partial;
      break;
    case SSM_st_Registered_Register_SM :
      tr_3_guard_Registered_Register_SM = outC->registrationStatusFromMobile ==
        mrs_unregistered_RCM_Types_Pkg;
      tr_2_guard_Registered_Register_SM = outC->registrationStatusFromMobile ==
        mrs_registering_RCM_Types_Pkg;
      if (tr_1_guard_Registered_Register_SM) {
        _16_Register_SM_state_act_partial = SSM_st_Reregistering_Register_SM;
      }
      else if (tr_2_guard_Registered_Register_SM) {
        _16_Register_SM_state_act_partial = SSM_st_Registering_Register_SM;
      }
      else if (tr_3_guard_Registered_Register_SM) {
        _16_Register_SM_state_act_partial = SSM_st_Unregistered_Register_SM;
      }
      else {
        _16_Register_SM_state_act_partial = SSM_st_Registered_Register_SM;
      }
      outC->Register_SM_state_act = _16_Register_SM_state_act_partial;
      break;
    case SSM_st_Registering_Register_SM :
      tr_2_guard_Registering_Register_SM = outC->registrationStatusFromMobile ==
        mrs_registered_RCM_Types_Pkg;
      if (tr_1_guard_Registering_Register_SM) {
        _13_Register_SM_state_act_partial = SSM_st_Reregistering_Register_SM;
      }
      else if (tr_2_guard_Registering_Register_SM) {
        _13_Register_SM_state_act_partial = SSM_st_Registered_Register_SM;
      }
      else {
        _13_Register_SM_state_act_partial = SSM_st_Registering_Register_SM;
      }
      outC->Register_SM_state_act = _13_Register_SM_state_act_partial;
      break;
    case SSM_st_Unregistered_Register_SM :
      tr_3_guard_Unregistered_Register_SM =
        outC->registrationStatusFromMobile == mrs_registered_RCM_Types_Pkg;
      tr_2_guard_Unregistered_Register_SM =
        outC->registrationStatusFromMobile == mrs_registering_RCM_Types_Pkg;
      tr_1_guard_Unregistered_Register_SM = outC->orderRegistrationImmediately;
      if (tr_1_guard_Unregistered_Register_SM) {
        Register_SM_state_act_partial = SSM_st_Registering_Register_SM;
      }
      else if (tr_2_guard_Unregistered_Register_SM) {
        Register_SM_state_act_partial = SSM_st_Registering_Register_SM;
      }
      else if (tr_3_guard_Unregistered_Register_SM) {
        Register_SM_state_act_partial = SSM_st_Registered_Register_SM;
      }
      else {
        Register_SM_state_act_partial = SSM_st_Unregistered_Register_SM;
      }
      outC->Register_SM_state_act = Register_SM_state_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* Register_SM: */
  switch (outC->Register_SM_state_act) {
    case SSM_st_Reregistering_Register_SM :
      outC->_L1_Reregistering_Register_SM = mrs_registering_RCM_Types_Pkg;
      _9_registrationStatus_partial = outC->_L1_Reregistering_Register_SM;
      outC->registrationStatus = _9_registrationStatus_partial;
      break;
    case SSM_st_Registered_Register_SM :
      outC->_L1_Registered_Register_SM = mrs_registered_RCM_Types_Pkg;
      _5_registrationStatus_partial = outC->_L1_Registered_Register_SM;
      outC->registrationStatus = _5_registrationStatus_partial;
      break;
    case SSM_st_Registering_Register_SM :
      outC->_L3_Registering_Register_SM = mrs_registering_RCM_Types_Pkg;
      _1_registrationStatus_partial = outC->_L3_Registering_Register_SM;
      outC->registrationStatus = _1_registrationStatus_partial;
      break;
    case SSM_st_Unregistered_Register_SM :
      outC->_L2_Unregistered_Register_SM = mrs_unregistered_RCM_Types_Pkg;
      registrationStatus_partial = outC->_L2_Unregistered_Register_SM;
      outC->registrationStatus = registrationStatus_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L332 = outC->registrationStatus;
  outC->_L334 = outC->_L332 != outC->_L333;
  outC->rejectOrderToContactRBC_or_RIU = outC->_L334;
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(&outC->_L331, &outC->_L306);
  if (kcg_true) {
    outC->_L331.status = outC->_L332;
  }
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &outC->mobileRegistrationStatus,
    &outC->_L331);
  /* _L324=(digital::RisingEdge#8)/ */
  RisingEdge_digital(outC->_L367, &outC->Context_RisingEdge_8);
  outC->_L324 = outC->Context_RisingEdge_8.RE_Output;
  outC->memorizeTheLastRadioNetworkID = outC->_L324;
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->_L320,
    &outC->lastReceivedRadioNetworkID_loc);
  outC->_L321 = outC->_L320.nid_mn;
  outC->_L318 = mra_unregister_RCM_Types_Pkg;
  outC->_L317 = mra_register_RCM_Types_Pkg;
  /* Register_SM: */
  switch (outC->Register_SM_state_sel) {
    case SSM_st_Reregistering_Register_SM :
      outC->tr_1_clock_Reregistering_Register_SM =
        tr_1_guard_Reregistering_Register_SM;
      /* Register_SM:Reregistering:<1> */
      if (outC->tr_1_clock_Reregistering_Register_SM) {
        outC->sRegister = kcg_true;
      }
      else {
        outC->sRegister = kcg_false;
      }
      break;
    case SSM_st_Registered_Register_SM :
      outC->sRegister = kcg_false;
      break;
    case SSM_st_Registering_Register_SM :
      outC->sRegister = kcg_false;
      break;
    case SSM_st_Unregistered_Register_SM :
      outC->tr_1_clock_Unregistered_Register_SM = tr_1_guard_Unregistered_Register_SM;
      /* Register_SM:Unregistered:<1> */
      if (outC->tr_1_clock_Unregistered_Register_SM) {
        outC->sRegister = kcg_true;
      }
      else {
        outC->sRegister = kcg_false;
      }
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L313 = outC->sRegister;
  /* _L319= */
  if (outC->_L313) {
    outC->_L319 = outC->_L317;
  }
  else {
    outC->_L319 = outC->_L318;
  }
  /* Register_SM: */
  switch (outC->Register_SM_state_sel) {
    case SSM_st_Reregistering_Register_SM :
      outC->sUnregister = kcg_false;
      break;
    case SSM_st_Registered_Register_SM :
      /* Register_SM:Registered:<1> */
      if (outC->tr_1_clock_Registered_Register_SM) {
        outC->sUnregister = kcg_true;
      }
      else {
        outC->sUnregister = kcg_false;
      }
      break;
    case SSM_st_Registering_Register_SM :
      /* Register_SM:Registering:<1> */
      if (outC->tr_1_clock_Registering_Register_SM) {
        outC->sUnregister = kcg_true;
      }
      else {
        outC->sUnregister = kcg_false;
      }
      break;
    case SSM_st_Unregistered_Register_SM :
      outC->sUnregister = kcg_false;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L314 = outC->sUnregister;
  outC->_L316 = outC->_L313 | outC->_L314;
  outC->_L315.valid = outC->_L316;
  outC->_L315.mobileDeviceNo = outC->_L346;
  outC->_L315.action = outC->_L319;
  outC->_L315.network_id = outC->_L321;
  kcg_copy_mobileRegistrationCmd_T_RCM_Types_Pkg(
    &outC->mobileRegistrationCmd,
    &outC->_L315);
  /* Register_SM: */
  switch (outC->Register_SM_state_sel) {
    case SSM_st_Reregistering_Register_SM :
      if (tr_1_guard_Reregistering_Register_SM) {
        _21_Register_SM_fired_strong_partial =
          SSM_TR_Reregistering_Registering_1_Reregistering_Register_SM;
      }
      else {
        _21_Register_SM_fired_strong_partial = SSM_TR_no_trans_Register_SM;
      }
      outC->Register_SM_fired_strong = _21_Register_SM_fired_strong_partial;
      break;
    case SSM_st_Registered_Register_SM :
      if (tr_1_guard_Registered_Register_SM) {
        _18_Register_SM_fired_strong_partial =
          SSM_TR_Registered_Reregistering_1_Registered_Register_SM;
      }
      else if (tr_2_guard_Registered_Register_SM) {
        _18_Register_SM_fired_strong_partial =
          SSM_TR_Registered_Registering_2_Registered_Register_SM;
      }
      else if (tr_3_guard_Registered_Register_SM) {
        _18_Register_SM_fired_strong_partial =
          SSM_TR_Registered_Unregistered_3_Registered_Register_SM;
      }
      else {
        _18_Register_SM_fired_strong_partial = SSM_TR_no_trans_Register_SM;
      }
      outC->Register_SM_fired_strong = _18_Register_SM_fired_strong_partial;
      break;
    case SSM_st_Registering_Register_SM :
      if (tr_1_guard_Registering_Register_SM) {
        _15_Register_SM_fired_strong_partial =
          SSM_TR_Registering_Reregistering_1_Registering_Register_SM;
      }
      else if (tr_2_guard_Registering_Register_SM) {
        _15_Register_SM_fired_strong_partial =
          SSM_TR_Registering_Registered_2_Registering_Register_SM;
      }
      else {
        _15_Register_SM_fired_strong_partial = SSM_TR_no_trans_Register_SM;
      }
      outC->Register_SM_fired_strong = _15_Register_SM_fired_strong_partial;
      break;
    case SSM_st_Unregistered_Register_SM :
      if (tr_1_guard_Unregistered_Register_SM) {
        Register_SM_fired_strong_partial =
          SSM_TR_Unregistered_Registering_1_Unregistered_Register_SM;
      }
      else if (tr_2_guard_Unregistered_Register_SM) {
        Register_SM_fired_strong_partial =
          SSM_TR_Unregistered_Registering_2_Unregistered_Register_SM;
      }
      else if (tr_3_guard_Unregistered_Register_SM) {
        Register_SM_fired_strong_partial =
          SSM_TR_Unregistered_Registered_3_Unregistered_Register_SM;
      }
      else {
        Register_SM_fired_strong_partial = SSM_TR_no_trans_Register_SM;
      }
      outC->Register_SM_fired_strong = Register_SM_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* Register_SM: */
  switch (outC->Register_SM_state_act) {
    case SSM_st_Reregistering_Register_SM :
      _12_Register_SM_fired_partial = outC->Register_SM_fired_strong;
      _11_Register_SM_reset_nxt_partial = kcg_false;
      _10_Register_SM_state_nxt_partial = SSM_st_Reregistering_Register_SM;
      outC->Register_SM_state_nxt = _10_Register_SM_state_nxt_partial;
      break;
    case SSM_st_Registered_Register_SM :
      _8_Register_SM_fired_partial = outC->Register_SM_fired_strong;
      _7_Register_SM_reset_nxt_partial = kcg_false;
      _6_Register_SM_state_nxt_partial = SSM_st_Registered_Register_SM;
      outC->Register_SM_state_nxt = _6_Register_SM_state_nxt_partial;
      break;
    case SSM_st_Registering_Register_SM :
      _4_Register_SM_fired_partial = outC->Register_SM_fired_strong;
      _3_Register_SM_reset_nxt_partial = kcg_false;
      _2_Register_SM_state_nxt_partial = SSM_st_Registering_Register_SM;
      outC->Register_SM_state_nxt = _2_Register_SM_state_nxt_partial;
      break;
    case SSM_st_Unregistered_Register_SM :
      Register_SM_fired_partial = outC->Register_SM_fired_strong;
      Register_SM_reset_nxt_partial = kcg_false;
      Register_SM_state_nxt_partial = SSM_st_Unregistered_Register_SM;
      outC->Register_SM_state_nxt = Register_SM_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  Register_SM_reset_sel = outC->Register_SM_reset_nxt;
  /* Register_SM: */
  switch (outC->Register_SM_state_act) {
    case SSM_st_Reregistering_Register_SM :
      outC->Register_SM_reset_nxt = _11_Register_SM_reset_nxt_partial;
      outC->Register_SM_fired = _12_Register_SM_fired_partial;
      break;
    case SSM_st_Registered_Register_SM :
      outC->Register_SM_reset_nxt = _7_Register_SM_reset_nxt_partial;
      outC->Register_SM_fired = _8_Register_SM_fired_partial;
      break;
    case SSM_st_Registering_Register_SM :
      outC->Register_SM_reset_nxt = _3_Register_SM_reset_nxt_partial;
      outC->Register_SM_fired = _4_Register_SM_fired_partial;
      break;
    case SSM_st_Unregistered_Register_SM :
      outC->Register_SM_reset_nxt = Register_SM_reset_nxt_partial;
      outC->Register_SM_fired = Register_SM_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->Register_SM_state_sel) {
    case SSM_st_Reregistering_Register_SM :
      _20_Register_SM_reset_act_partial = tr_1_guard_Reregistering_Register_SM;
      break;
    case SSM_st_Registered_Register_SM :
      if (tr_1_guard_Registered_Register_SM) {
        _17_Register_SM_reset_act_partial = kcg_true;
      }
      else if (tr_2_guard_Registered_Register_SM) {
        _17_Register_SM_reset_act_partial = kcg_true;
      }
      else {
        _17_Register_SM_reset_act_partial = tr_3_guard_Registered_Register_SM;
      }
      break;
    case SSM_st_Registering_Register_SM :
      if (tr_1_guard_Registering_Register_SM) {
        _14_Register_SM_reset_act_partial = kcg_true;
      }
      else {
        _14_Register_SM_reset_act_partial = tr_2_guard_Registering_Register_SM;
      }
      break;
    case SSM_st_Unregistered_Register_SM :
      if (tr_1_guard_Unregistered_Register_SM) {
        Register_SM_reset_act_partial = kcg_true;
      }
      else if (tr_2_guard_Unregistered_Register_SM) {
        Register_SM_reset_act_partial = kcg_true;
      }
      else {
        Register_SM_reset_act_partial = tr_3_guard_Unregistered_Register_SM;
      }
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  Register_SM_reset_prv = outC->Register_SM_reset_act;
  /* Register_SM: */
  switch (outC->Register_SM_state_sel) {
    case SSM_st_Reregistering_Register_SM :
      outC->Register_SM_reset_act = _20_Register_SM_reset_act_partial;
      break;
    case SSM_st_Registered_Register_SM :
      outC->Register_SM_reset_act = _17_Register_SM_reset_act_partial;
      break;
    case SSM_st_Registering_Register_SM :
      outC->Register_SM_reset_act = _14_Register_SM_reset_act_partial;
      break;
    case SSM_st_Unregistered_Register_SM :
      outC->Register_SM_reset_act = Register_SM_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->lastReceivedRadioNetworkID,
    &outC->_L178);
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void registeringToTheRadioNetwork_v2_init_MoRC_Pck_Subfunc_Pkg(
  outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;

  outC->_L368.atPowerUp = kcg_true;
  outC->_L368.atPowerDown = kcg_true;
  outC->_L368.atStartOfMission = kcg_true;
  outC->_L368.modeChangeHasToBeReportedToRBC = kcg_true;
  outC->_L368.driverHasManuallyChangedLevel_to_2_or_3 = kcg_true;
  outC->_L368.trainFrontPassesStartOfAnnouncedRadioHole = kcg_true;
  outC->_L368.trainFrontReachesEndOfAnnouncedRadioHole = kcg_true;
  outC->_L368.trainFrontInsideInAnAnnouncedRadioHole = kcg_true;
  outC->_L368.trainFrontPassesALevelTransitionBorder = kcg_true;
  outC->_L368.trainFrontPassesA_RBC_RBC_border = kcg_true;
  outC->_L368.startOfMissionProcedureCompleted_in_level_2_or_3 = kcg_true;
  outC->_L368.isPartOfAnOngoingStartOfMissionProcedure = kcg_true;
  outC->_L368.startOfMissionProcedureIsGoingOn = kcg_true;
  outC->_L368.endOfMissionIsExecuted = kcg_true;
  outC->_L368.triggerDecisionThatNoRadioNetworkIDAvailable = kcg_true;
  outC->_L368.errorConditionRequiringTerminationDetected = kcg_true;
  outC->_L368.trainIsRejectedByRBC_duringStartOfMission = kcg_true;
  outC->_L368.driverClosesTheDeskduringStartOfMission = kcg_true;
  outC->_L368.trainExitedFromAnRBCArea = kcg_true;
  outC->_L368.isInCommunicationSessionWithAnRIU = kcg_true;
  outC->_L368.level_1_isLeft = kcg_true;
  outC->_L369 = kcg_true;
  outC->_L367 = kcg_true;
  outC->_L366.atPowerUp = kcg_true;
  outC->_L366.atPowerDown = kcg_true;
  outC->_L366.atStartOfMission = kcg_true;
  outC->_L366.modeChangeHasToBeReportedToRBC = kcg_true;
  outC->_L366.driverHasManuallyChangedLevel_to_2_or_3 = kcg_true;
  outC->_L366.trainFrontPassesStartOfAnnouncedRadioHole = kcg_true;
  outC->_L366.trainFrontReachesEndOfAnnouncedRadioHole = kcg_true;
  outC->_L366.trainFrontInsideInAnAnnouncedRadioHole = kcg_true;
  outC->_L366.trainFrontPassesALevelTransitionBorder = kcg_true;
  outC->_L366.trainFrontPassesA_RBC_RBC_border = kcg_true;
  outC->_L366.startOfMissionProcedureCompleted_in_level_2_or_3 = kcg_true;
  outC->_L366.isPartOfAnOngoingStartOfMissionProcedure = kcg_true;
  outC->_L366.startOfMissionProcedureIsGoingOn = kcg_true;
  outC->_L366.endOfMissionIsExecuted = kcg_true;
  outC->_L366.triggerDecisionThatNoRadioNetworkIDAvailable = kcg_true;
  outC->_L366.errorConditionRequiringTerminationDetected = kcg_true;
  outC->_L366.trainIsRejectedByRBC_duringStartOfMission = kcg_true;
  outC->_L366.driverClosesTheDeskduringStartOfMission = kcg_true;
  outC->_L366.trainExitedFromAnRBCArea = kcg_true;
  outC->_L366.isInCommunicationSessionWithAnRIU = kcg_true;
  outC->_L366.level_1_isLeft = kcg_true;
  outC->_L365.valid = kcg_true;
  outC->_L365.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L365.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L365.nid_radio = kcg_lit_int64(0);
  outC->_L365.settingUpConnectionHasFailed = kcg_true;
  outC->_L365.connectionLost = kcg_true;
  outC->_L365.isInRadioHole = kcg_true;
  outC->_L364 = mcs_disconnected_RCM_Types_Pkg;
  outC->_L363 = mcs_disconnected_RCM_Types_Pkg;
  outC->_L360 = mcs_disconnected_RCM_Types_Pkg;
  outC->_L359 = kcg_true;
  outC->_L358 = kcg_true;
  outC->_L357.valid = kcg_true;
  outC->_L357.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L357.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L357.nid_radio = kcg_lit_int64(0);
  outC->_L357.settingUpConnectionHasFailed = kcg_true;
  outC->_L357.connectionLost = kcg_true;
  outC->_L357.isInRadioHole = kcg_true;
  outC->_L355 = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L354 = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L353 = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L349.valid = kcg_true;
  outC->_L349.q_dir = Q_DIR_Reverse;
  outC->_L349.nid_mn = kcg_lit_int64(0);
  outC->_L347.valid = kcg_true;
  outC->_L347.q_dir = Q_DIR_Reverse;
  outC->_L347.nid_mn = kcg_lit_int64(0);
  outC->_L346 = kcg_lit_int64(0);
  outC->_L345.valid = kcg_true;
  outC->_L345.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L345.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L345.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L345.nid_mn = kcg_lit_int64(0);
  outC->_L343.valid = kcg_true;
  outC->_L343.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L343.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L343.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L343.nid_mn = kcg_lit_int64(0);
  outC->_L335 = kcg_true;
  outC->_L334 = kcg_true;
  outC->_L333 = mrs_unregistered_RCM_Types_Pkg;
  outC->_L332 = mrs_unregistered_RCM_Types_Pkg;
  outC->_L331.valid = kcg_true;
  outC->_L331.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L331.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L331.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L331.nid_mn = kcg_lit_int64(0);
  outC->_L328 = kcg_true;
  outC->_L327 = kcg_true;
  outC->_L326 = mhs_nok_RCM_Types_Pkg;
  outC->_L325 = mhs_nok_RCM_Types_Pkg;
  outC->_L324 = kcg_true;
  outC->_L321 = kcg_lit_int64(0);
  outC->_L320.valid = kcg_true;
  outC->_L320.q_dir = Q_DIR_Reverse;
  outC->_L320.nid_mn = kcg_lit_int64(0);
  outC->_L319 = mra_nop_RCM_Types_Pkg;
  outC->_L318 = mra_nop_RCM_Types_Pkg;
  outC->_L317 = mra_nop_RCM_Types_Pkg;
  outC->_L316 = kcg_true;
  outC->_L315.valid = kcg_true;
  outC->_L315.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L315.action = mra_nop_RCM_Types_Pkg;
  outC->_L315.network_id = kcg_lit_int64(0);
  outC->_L314 = kcg_true;
  outC->_L313 = kcg_true;
  outC->_L312 = kcg_true;
  outC->_L311 = kcg_true;
  outC->_L310 = mrs_unregistered_RCM_Types_Pkg;
  outC->_L309 = mrs_unregistered_RCM_Types_Pkg;
  outC->_L308 = mrs_unregistered_RCM_Types_Pkg;
  outC->_L307 = kcg_true;
  outC->_L306.valid = kcg_true;
  outC->_L306.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L306.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L306.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L306.nid_mn = kcg_lit_int64(0);
  outC->_L305 = kcg_true;
  outC->_L304 = kcg_true;
  outC->_L303 = mcs_disconnected_RCM_Types_Pkg;
  outC->_L302 = mcs_disconnected_RCM_Types_Pkg;
  outC->_L300 = kcg_true;
  outC->_L299 = mcs_disconnected_RCM_Types_Pkg;
  outC->_L297 = kcg_true;
  outC->_L296 = kcg_true;
  outC->_L295 = kcg_true;
  outC->_L294 = mrs_unregistered_RCM_Types_Pkg;
  outC->_L293 = mrs_unregistered_RCM_Types_Pkg;
  outC->_L292 = mrs_unregistered_RCM_Types_Pkg;
  outC->_L291 = mrs_unregistered_RCM_Types_Pkg;
  outC->_L290 = kcg_true;
  outC->_L289.valid = kcg_true;
  outC->_L289.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L289.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L289.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L289.nid_mn = kcg_lit_int64(0);
  outC->_L256 = kcg_true;
  outC->_L255 = kcg_true;
  outC->_L254 = kcg_true;
  outC->_L253 = kcg_true;
  outC->_L252 = kcg_true;
  outC->_L249 = kcg_true;
  outC->_L247 = kcg_true;
  outC->_L245 = kcg_true;
  outC->_L244 = kcg_true;
  outC->_L243 = kcg_true;
  outC->_L242 = kcg_true;
  outC->_L241 = kcg_true;
  outC->_L240 = kcg_true;
  outC->_L237 = kcg_true;
  outC->_L232 = kcg_true;
  outC->_L231 = kcg_true;
  outC->_L230 = kcg_true;
  outC->_L229 = kcg_true;
  outC->_L227 = kcg_true;
  outC->_L228 = kcg_lit_int64(0);
  outC->_L225 = kcg_lit_int64(0);
  outC->_L224 = kcg_true;
  outC->_L223.valid = kcg_true;
  outC->_L223.q_dir = Q_DIR_Reverse;
  outC->_L223.nid_mn = kcg_lit_int64(0);
  outC->_L222 = kcg_true;
  outC->_L221 = kcg_true;
  outC->_L220 = kcg_true;
  outC->_L219 = kcg_true;
  outC->_L218 = kcg_true;
  outC->_L217 = kcg_true;
  outC->_L214 = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L213 = kcg_true;
  outC->_L212.valid = kcg_true;
  outC->_L212.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L212.nid_c = kcg_lit_int64(0);
  outC->_L212.nid_rbc = kcg_lit_int64(0);
  outC->_L212.nid_radio = kcg_lit_int64(0);
  outC->_L211 = kcg_true;
  outC->_L200 = kcg_true;
  outC->_L193 = M_LEVEL_Level_0;
  outC->_L194 = M_LEVEL_Level_0;
  outC->_L195 = kcg_true;
  outC->_L196 = kcg_true;
  outC->_L197 = kcg_true;
  outC->_L198 = kcg_true;
  outC->_L199 = M_LEVEL_Level_0;
  outC->_L185 = kcg_true;
  outC->_L184.valid = kcg_true;
  outC->_L184.q_dir = Q_DIR_Reverse;
  outC->_L184.nid_mn = kcg_lit_int64(0);
  outC->_L183.valid = kcg_true;
  outC->_L183.q_dir = Q_DIR_Reverse;
  outC->_L183.nid_mn = kcg_lit_int64(0);
  outC->_L182.valid = kcg_true;
  outC->_L182.q_dir = Q_DIR_Reverse;
  outC->_L182.nid_mn = kcg_lit_int64(0);
  outC->_L181 = kcg_true;
  outC->_L180 = kcg_true;
  outC->_L177 = kcg_true;
  outC->_L178.valid = kcg_true;
  outC->_L178.q_dir = Q_DIR_Reverse;
  outC->_L178.nid_mn = kcg_lit_int64(0);
  outC->_L176.valid = kcg_true;
  outC->_L176.q_dir = Q_DIR_Reverse;
  outC->_L176.nid_mn = kcg_lit_int64(0);
  outC->_L173.valid = kcg_true;
  outC->_L173.q_dir = Q_DIR_Reverse;
  outC->_L173.nid_mn = kcg_lit_int64(0);
  outC->_L174 = kcg_true;
  outC->_L175 = kcg_true;
  outC->_L131.valid = kcg_true;
  outC->_L131.q_dir = Q_DIR_Reverse;
  outC->_L131.nid_mn = kcg_lit_int64(0);
  outC->_L165 = kcg_true;
  outC->_L163.valid = kcg_true;
  outC->_L163.q_dir = Q_DIR_Reverse;
  outC->_L163.nid_mn = kcg_lit_int64(0);
  outC->_L164 = kcg_true;
  outC->_L154 = kcg_true;
  outC->_L153.valid = kcg_true;
  outC->_L153.q_dir = Q_DIR_Reverse;
  outC->_L153.nid_mn = kcg_lit_int64(0);
  outC->_L151 = kcg_true;
  outC->_L150 = kcg_true;
  for (idx = 0; idx < 30; idx++) {
    outC->_L147.PacketHeaders[idx].nid_packet = kcg_lit_int64(0);
    outC->_L147.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L147.PacketHeaders[idx].valid = kcg_true;
    outC->_L147.PacketHeaders[idx].startAddress = kcg_lit_int64(0);
    outC->_L147.PacketHeaders[idx].endAddress = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L147.PacketData[idx1] = kcg_lit_int64(0);
  }
  outC->_L149.valid = kcg_true;
  outC->_L149.q_dir = Q_DIR_Reverse;
  outC->_L149.nid_mn = kcg_lit_int64(0);
  outC->_L148 = kcg_true;
  outC->_L132.valid = kcg_true;
  outC->_L132.source = msrc_undefined_Common_Types_Pkg;
  outC->_L132.radioMetadata.t_train_reference = kcg_true;
  outC->_L132.radioMetadata.nid_em = kcg_true;
  outC->_L132.radioMetadata.q_scale = kcg_true;
  outC->_L132.radioMetadata.d_sr = kcg_true;
  outC->_L132.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L132.radioMetadata.d_ref = kcg_true;
  outC->_L132.radioMetadata.q_dir = kcg_true;
  outC->_L132.radioMetadata.d_emergencystop = kcg_true;
  outC->_L132.radioMetadata.m_version = kcg_true;
  outC->_L132.BG_Common_Header.valid = kcg_true;
  outC->_L132.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L132.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L132.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L132.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L132.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L132.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L132.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L132.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L132.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L132.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L132.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L132.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L132.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L132.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L132.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L132.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L132.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L132.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L132.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L132.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L132.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L132.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L132.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L132.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L132.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L132.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L132.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L132.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L132.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L132.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L132.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L132.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L132.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L132.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L132.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L132.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L132.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L132.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L132.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L132.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L132.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L132.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L132.packets.PacketHeaders[idx2].nid_packet = kcg_lit_int64(0);
    outC->_L132.packets.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L132.packets.PacketHeaders[idx2].valid = kcg_true;
    outC->_L132.packets.PacketHeaders[idx2].startAddress = kcg_lit_int64(0);
    outC->_L132.packets.PacketHeaders[idx2].endAddress = kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L132.packets.PacketData[idx3] = kcg_lit_int64(0);
  }
  outC->_L132.sendingRBC.valid = kcg_true;
  outC->_L132.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L132.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L132.sendingRBC.device_id = kcg_lit_int64(0);
  outC->p45_registrationOrderReceived_p = kcg_true;
  outC->registrationStatus = mrs_unregistered_RCM_Types_Pkg;
  outC->registrationStatusFromMobile = mrs_unregistered_RCM_Types_Pkg;
  outC->safeRadioConnectionReleased = kcg_true;
  outC->orderRegistrationDelayed = kcg_true;
  outC->orderRegistrationImmediately = kcg_true;
  outC->lastReceivedRadioNetworkID_loc.valid = kcg_true;
  outC->lastReceivedRadioNetworkID_loc.q_dir = Q_DIR_Reverse;
  outC->lastReceivedRadioNetworkID_loc.nid_mn = kcg_lit_int64(0);
  outC->triggerRegistrationOfMobile = kcg_true;
  outC->Register_SM_fired = SSM_TR_no_trans_Register_SM;
  outC->Register_SM_fired_strong = SSM_TR_no_trans_Register_SM;
  outC->Register_SM_state_act = SSM_st_Unregistered_Register_SM;
  outC->Register_SM_state_sel = SSM_st_Unregistered_Register_SM;
  outC->sRegister = kcg_true;
  outC->sUnregister = kcg_true;
  outC->sResetDelayedOrderFlag = kcg_true;
  outC->tr_1_clock_Reregistering_Register_SM = kcg_true;
  outC->tr_1_clock_Registered_Register_SM = kcg_true;
  outC->tr_1_clock_Registering_Register_SM = kcg_true;
  outC->tr_1_clock_Unregistered_Register_SM = kcg_true;
  outC->_L1_Reregistering_Register_SM = mrs_unregistered_RCM_Types_Pkg;
  outC->_L1_Registered_Register_SM = mrs_unregistered_RCM_Types_Pkg;
  outC->_L3_Registering_Register_SM = mrs_unregistered_RCM_Types_Pkg;
  outC->_L2_Unregistered_Register_SM = mrs_unregistered_RCM_Types_Pkg;
  outC->_L10_FlipFlopSet_1 = kcg_true;
  outC->_L4_FlipFlopSet_1 = kcg_true;
  outC->_L5_FlipFlopSet_1 = kcg_true;
  outC->_L6_FlipFlopSet_1 = kcg_true;
  outC->_L11_FlipFlopSet_1 = kcg_true;
  outC->_L12_FlipFlopSet_1 = kcg_true;
  outC->_L13_FlipFlopSet_1 = kcg_true;
  outC->Set_FlipFlopSet_1 = kcg_true;
  outC->Reset_FlipFlopSet_1 = kcg_true;
  outC->Init_FlipFlopSet_1 = kcg_true;
  outC->FFS_Output_FlipFlopSet_1 = kcg_true;
  outC->_L7_Memory_5_struct.valid = kcg_true;
  outC->_L7_Memory_5_struct.q_dir = Q_DIR_Reverse;
  outC->_L7_Memory_5_struct.nid_mn = kcg_lit_int64(0);
  outC->_L6_Memory_5_struct.valid = kcg_true;
  outC->_L6_Memory_5_struct.q_dir = Q_DIR_Reverse;
  outC->_L6_Memory_5_struct.nid_mn = kcg_lit_int64(0);
  outC->_L5_Memory_5_struct.valid = kcg_true;
  outC->_L5_Memory_5_struct.q_dir = Q_DIR_Reverse;
  outC->_L5_Memory_5_struct.nid_mn = kcg_lit_int64(0);
  outC->_L3_Memory_5_struct = kcg_true;
  outC->_L2_Memory_5_struct.valid = kcg_true;
  outC->_L2_Memory_5_struct.q_dir = Q_DIR_Reverse;
  outC->_L2_Memory_5_struct.nid_mn = kcg_lit_int64(0);
  outC->_L1_Memory_5_struct = kcg_true;
  outC->_L9_Memory_5_struct.valid = kcg_true;
  outC->_L9_Memory_5_struct.q_dir = Q_DIR_Reverse;
  outC->_L9_Memory_5_struct.nid_mn = kcg_lit_int64(0);
  outC->M_Input_Memory_5_struct.valid = kcg_true;
  outC->M_Input_Memory_5_struct.q_dir = Q_DIR_Reverse;
  outC->M_Input_Memory_5_struct.nid_mn = kcg_lit_int64(0);
  outC->Reset_Memory_5_struct = kcg_true;
  outC->MemCond_Memory_5_struct = kcg_true;
  outC->InitVal_Memory_5_struct.valid = kcg_true;
  outC->InitVal_Memory_5_struct.q_dir = Q_DIR_Reverse;
  outC->InitVal_Memory_5_struct.nid_mn = kcg_lit_int64(0);
  outC->Out_Memory_5_struct.valid = kcg_true;
  outC->Out_Memory_5_struct.q_dir = Q_DIR_Reverse;
  outC->Out_Memory_5_struct.nid_mn = kcg_lit_int64(0);
  outC->_L7_Memory_4_struct.valid = kcg_true;
  outC->_L7_Memory_4_struct.q_dir = Q_DIR_Reverse;
  outC->_L7_Memory_4_struct.nid_mn = kcg_lit_int64(0);
  outC->_L6_Memory_4_struct.valid = kcg_true;
  outC->_L6_Memory_4_struct.q_dir = Q_DIR_Reverse;
  outC->_L6_Memory_4_struct.nid_mn = kcg_lit_int64(0);
  outC->_L5_Memory_4_struct.valid = kcg_true;
  outC->_L5_Memory_4_struct.q_dir = Q_DIR_Reverse;
  outC->_L5_Memory_4_struct.nid_mn = kcg_lit_int64(0);
  outC->_L3_Memory_4_struct = kcg_true;
  outC->_L2_Memory_4_struct.valid = kcg_true;
  outC->_L2_Memory_4_struct.q_dir = Q_DIR_Reverse;
  outC->_L2_Memory_4_struct.nid_mn = kcg_lit_int64(0);
  outC->_L1_Memory_4_struct = kcg_true;
  outC->_L9_Memory_4_struct.valid = kcg_true;
  outC->_L9_Memory_4_struct.q_dir = Q_DIR_Reverse;
  outC->_L9_Memory_4_struct.nid_mn = kcg_lit_int64(0);
  outC->M_Input_Memory_4_struct.valid = kcg_true;
  outC->M_Input_Memory_4_struct.q_dir = Q_DIR_Reverse;
  outC->M_Input_Memory_4_struct.nid_mn = kcg_lit_int64(0);
  outC->Reset_Memory_4_struct = kcg_true;
  outC->MemCond_Memory_4_struct = kcg_true;
  outC->InitVal_Memory_4_struct.valid = kcg_true;
  outC->InitVal_Memory_4_struct.q_dir = Q_DIR_Reverse;
  outC->InitVal_Memory_4_struct.nid_mn = kcg_lit_int64(0);
  outC->Out_Memory_4_struct.valid = kcg_true;
  outC->Out_Memory_4_struct.q_dir = Q_DIR_Reverse;
  outC->Out_Memory_4_struct.nid_mn = kcg_lit_int64(0);
  outC->_L7_Memory_2_struct.valid = kcg_true;
  outC->_L7_Memory_2_struct.q_dir = Q_DIR_Reverse;
  outC->_L7_Memory_2_struct.nid_mn = kcg_lit_int64(0);
  outC->_L6_Memory_2_struct.valid = kcg_true;
  outC->_L6_Memory_2_struct.q_dir = Q_DIR_Reverse;
  outC->_L6_Memory_2_struct.nid_mn = kcg_lit_int64(0);
  outC->_L5_Memory_2_struct.valid = kcg_true;
  outC->_L5_Memory_2_struct.q_dir = Q_DIR_Reverse;
  outC->_L5_Memory_2_struct.nid_mn = kcg_lit_int64(0);
  outC->_L3_Memory_2_struct = kcg_true;
  outC->_L2_Memory_2_struct.valid = kcg_true;
  outC->_L2_Memory_2_struct.q_dir = Q_DIR_Reverse;
  outC->_L2_Memory_2_struct.nid_mn = kcg_lit_int64(0);
  outC->_L1_Memory_2_struct = kcg_true;
  outC->_L9_Memory_2_struct.valid = kcg_true;
  outC->_L9_Memory_2_struct.q_dir = Q_DIR_Reverse;
  outC->_L9_Memory_2_struct.nid_mn = kcg_lit_int64(0);
  outC->M_Input_Memory_2_struct.valid = kcg_true;
  outC->M_Input_Memory_2_struct.q_dir = Q_DIR_Reverse;
  outC->M_Input_Memory_2_struct.nid_mn = kcg_lit_int64(0);
  outC->Reset_Memory_2_struct = kcg_true;
  outC->MemCond_Memory_2_struct = kcg_true;
  outC->InitVal_Memory_2_struct.valid = kcg_true;
  outC->InitVal_Memory_2_struct.q_dir = Q_DIR_Reverse;
  outC->InitVal_Memory_2_struct.nid_mn = kcg_lit_int64(0);
  outC->Out_Memory_2_struct.valid = kcg_true;
  outC->Out_Memory_2_struct.q_dir = Q_DIR_Reverse;
  outC->Out_Memory_2_struct.nid_mn = kcg_lit_int64(0);
  outC->_L7_Memory_1_struct.valid = kcg_true;
  outC->_L7_Memory_1_struct.q_dir = Q_DIR_Reverse;
  outC->_L7_Memory_1_struct.nid_mn = kcg_lit_int64(0);
  outC->_L6_Memory_1_struct.valid = kcg_true;
  outC->_L6_Memory_1_struct.q_dir = Q_DIR_Reverse;
  outC->_L6_Memory_1_struct.nid_mn = kcg_lit_int64(0);
  outC->_L5_Memory_1_struct.valid = kcg_true;
  outC->_L5_Memory_1_struct.q_dir = Q_DIR_Reverse;
  outC->_L5_Memory_1_struct.nid_mn = kcg_lit_int64(0);
  outC->_L3_Memory_1_struct = kcg_true;
  outC->_L2_Memory_1_struct.valid = kcg_true;
  outC->_L2_Memory_1_struct.q_dir = Q_DIR_Reverse;
  outC->_L2_Memory_1_struct.nid_mn = kcg_lit_int64(0);
  outC->_L1_Memory_1_struct = kcg_true;
  outC->_L9_Memory_1_struct.valid = kcg_true;
  outC->_L9_Memory_1_struct.q_dir = Q_DIR_Reverse;
  outC->_L9_Memory_1_struct.nid_mn = kcg_lit_int64(0);
  outC->M_Input_Memory_1_struct.valid = kcg_true;
  outC->M_Input_Memory_1_struct.q_dir = Q_DIR_Reverse;
  outC->M_Input_Memory_1_struct.nid_mn = kcg_lit_int64(0);
  outC->Reset_Memory_1_struct = kcg_true;
  outC->MemCond_Memory_1_struct = kcg_true;
  outC->InitVal_Memory_1_struct.valid = kcg_true;
  outC->InitVal_Memory_1_struct.q_dir = Q_DIR_Reverse;
  outC->InitVal_Memory_1_struct.nid_mn = kcg_lit_int64(0);
  outC->Out_Memory_1_struct.valid = kcg_true;
  outC->Out_Memory_1_struct.q_dir = Q_DIR_Reverse;
  outC->Out_Memory_1_struct.nid_mn = kcg_lit_int64(0);
  outC->_L2_FlipFlopSet_1 = kcg_true;
  outC->_L8_Memory_5_struct.valid = kcg_true;
  outC->_L8_Memory_5_struct.q_dir = Q_DIR_Reverse;
  outC->_L8_Memory_5_struct.nid_mn = kcg_lit_int64(0);
  outC->_L8_Memory_4_struct.valid = kcg_true;
  outC->_L8_Memory_4_struct.q_dir = Q_DIR_Reverse;
  outC->_L8_Memory_4_struct.nid_mn = kcg_lit_int64(0);
  outC->_L8_Memory_2_struct.valid = kcg_true;
  outC->_L8_Memory_2_struct.q_dir = Q_DIR_Reverse;
  outC->_L8_Memory_2_struct.nid_mn = kcg_lit_int64(0);
  outC->_L8_Memory_1_struct.valid = kcg_true;
  outC->_L8_Memory_1_struct.q_dir = Q_DIR_Reverse;
  outC->_L8_Memory_1_struct.nid_mn = kcg_lit_int64(0);
  outC->init = kcg_true;
  outC->mobileRegistrationStatus.valid = kcg_true;
  outC->mobileRegistrationStatus.mobileDeviceNo = kcg_lit_int64(0);
  outC->mobileRegistrationStatus.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->mobileRegistrationStatus.status = mrs_unregistered_RCM_Types_Pkg;
  outC->mobileRegistrationStatus.nid_mn = kcg_lit_int64(0);
  outC->mobileRegistrationCmd.valid = kcg_true;
  outC->mobileRegistrationCmd.mobileDeviceNo = kcg_lit_int64(0);
  outC->mobileRegistrationCmd.action = mra_nop_RCM_Types_Pkg;
  outC->mobileRegistrationCmd.network_id = kcg_lit_int64(0);
  outC->rejectOrderToContactRBC_or_RIU = kcg_true;
  outC->lastReceivedRadioNetworkID.valid = kcg_true;
  outC->lastReceivedRadioNetworkID.q_dir = Q_DIR_Reverse;
  outC->lastReceivedRadioNetworkID.nid_mn = kcg_lit_int64(0);
  outC->memorizeTheLastRadioNetworkID = kcg_true;
  /* _L324=(digital::RisingEdge#8)/ */
  RisingEdge_init_digital(&outC->Context_RisingEdge_8);
  /* _L255=(digital::FallingEdge#1)/ */
  FallingEdge_init_digital(&outC->Context_FallingEdge_1);
  /* _L180=(digital::RisingEdge#6)/ */
  RisingEdge_init_digital(&outC->Context_RisingEdge_6);
  /* _L181=(digital::RisingEdge#7)/ */
  RisingEdge_init_digital(&outC->Context_RisingEdge_7);
  /* _L148=(TM::Read_P045#1)/ */ Read_P045_init_TM(&outC->Context_Read_P045_1);
  outC->Register_SM_reset_act = kcg_false;
  outC->Register_SM_reset_nxt = kcg_false;
  outC->Register_SM_state_nxt = SSM_st_Unregistered_Register_SM;
  outC->resetDelayedOrderFlag = kcg_false;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void registeringToTheRadioNetwork_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->init = kcg_true;
  /* _L324=(digital::RisingEdge#8)/ */
  RisingEdge_reset_digital(&outC->Context_RisingEdge_8);
  /* _L255=(digital::FallingEdge#1)/ */
  FallingEdge_reset_digital(&outC->Context_FallingEdge_1);
  /* _L180=(digital::RisingEdge#6)/ */
  RisingEdge_reset_digital(&outC->Context_RisingEdge_6);
  /* _L181=(digital::RisingEdge#7)/ */
  RisingEdge_reset_digital(&outC->Context_RisingEdge_7);
  /* _L148=(TM::Read_P045#1)/ */ Read_P045_reset_TM(&outC->Context_Read_P045_1);
  outC->Register_SM_reset_act = kcg_false;
  outC->Register_SM_reset_nxt = kcg_false;
  outC->Register_SM_state_nxt = SSM_st_Unregistered_Register_SM;
  outC->resetDelayedOrderFlag = kcg_false;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2/
  @1: (linear::Memory#1)
  @2: (linear::Memory#2)
  @3: (linear::Memory#4)
  @4: (linear::Memory#5)
  @5: (digital::FlipFlopSet#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

