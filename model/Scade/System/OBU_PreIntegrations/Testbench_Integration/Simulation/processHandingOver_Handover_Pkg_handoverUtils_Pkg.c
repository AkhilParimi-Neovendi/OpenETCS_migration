/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "processHandingOver_Handover_Pkg_handoverUtils_Pkg.h"

/* Handover_Pkg::handoverUtils_Pkg::processHandingOver/ */
void processHandingOver_Handover_Pkg_handoverUtils_Pkg(
  /* mode/ */
  M_MODE mode,
  /* morcStatus_1/ */
  morcStatus_T_RCM_Session_Types_Pkg *morcStatus_1,
  /* morcStatus_2/ */
  morcStatus_T_RCM_Session_Types_Pkg *morcStatus_2,
  /* dataFromTrack_in/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg *dataFromTrack_in,
  /* trainPosition/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* BGs/ */
  positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* sessionManagementAbility/ */
  abilityToHandleCommunicationSessions_Handover_Pkg sessionManagementAbility,
  /* trainProperties/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_processHandingOver_Handover_Pkg_handoverUtils_Pkg *outC)
{
  static msgFromTrack_T_RCM_MsgTypes_Pkg noname;
  static msgFromTrack_T_RCM_MsgTypes_Pkg _1_noname;
  static kcg_bool _2_noname;
  static kcg_bool _3_noname;
  static kcg_bool _4_noname;
  /* handoverFinished/ */
  static kcg_bool last_handoverFinished;
  /* useInformationFromAcceptingRBC_loc/ */
  static kcg_bool last_useInformationFromAcceptingRBC_loc;
  /* handoverInprogress/ */
  static kcg_bool last_handoverInprogress;

  kcg_copy_p131_q_rbcTransitionOrder_T_Handover_Pkg(
    &outC->_L202,
    (p131_q_rbcTransitionOrder_T_Handover_Pkg *)
      &cNoP131_RBCTransitionOrder_Handover_Pkg);
  kcg_copy_p131_q_rbcTransitionOrder_T_Handover_Pkg(
    &outC->InitVal_Memory_1_struct,
    &outC->_L202);
  kcg_copy_p131_q_rbcTransitionOrder_T_Handover_Pkg(
    &outC->_L9_Memory_1_struct,
    &outC->InitVal_Memory_1_struct);
  last_handoverFinished = outC->handoverFinished;
  outC->_L206 = last_handoverFinished;
  outC->Reset_Memory_1_struct = outC->_L206;
  outC->_L1_Memory_1_struct = outC->Reset_Memory_1_struct;
  kcg_copy_p131_q_rbcTransitionOrder_T_Handover_Pkg(
    &outC->_L2_Memory_1_struct,
    &outC->InitVal_Memory_1_struct);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&outC->_L124, dataFromTrack_in);
  last_useInformationFromAcceptingRBC_loc =
    outC->useInformationFromAcceptingRBC_loc;
  outC->_L81 = last_useInformationFromAcceptingRBC_loc;
  last_handoverInprogress = outC->handoverInprogress;
  outC->_L242 = last_handoverInprogress;
  /* _L241=(Handover_Pkg::handoverUtils_Pkg::changeoverSwitch#3)/ */
  changeoverSwitch_Handover_Pkg_handoverUtils_Pkg(
    outC->_L242,
    sessionManagementAbility,
    &outC->Context_changeoverSwitch_3);
  outC->_L241 = outC->Context_changeoverSwitch_3.handingOverMobile_is_mobile_1;
  outC->handingOverMobile_is_mobile_1_loc = outC->_L241;
  outC->_L77 = outC->handingOverMobile_is_mobile_1_loc;
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&outC->_L249, morcStatus_1);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&outC->_L250, morcStatus_2);
  /* _L78=(Handover_Pkg::handoverUtils_Pkg::splitInputData#2)/ */
  splitInputData_Handover_Pkg_handoverUtils_Pkg(
    &outC->_L124,
    outC->_L81,
    outC->_L77,
    &outC->_L249,
    &outC->_L250,
    sessionManagementAbility,
    &outC->Context_splitInputData_2);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &outC->_L78,
    &outC->Context_splitInputData_2.dataFromHandingOverMobile);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &outC->_L79,
    &outC->Context_splitInputData_2.dataFromAcceptingMobile);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &outC->_L122,
    &outC->Context_splitInputData_2.dataFromBalise);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &outC->_L123,
    &outC->Context_splitInputData_2.dataFromTrack_out);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&outC->dataFromTrack, &outC->_L123);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&outC->_L126, &outC->dataFromTrack);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &outC->dataFromHandingOverMobile,
    &outC->_L78);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &outC->_L72,
    &outC->dataFromHandingOverMobile);
  /* _L53=(Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds#1)/ */
  fishHandoverCmds_Handover_Pkg_handoverUtils_Pkg(
    &outC->_L126,
    &outC->_L72,
    &outC->Context_fishHandoverCmds_1);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &outC->_L53,
    &outC->Context_fishHandoverCmds_1.p45_radioNetworkRegistrationOrder);
  kcg_copy_p131_q_rbcTransitionOrder_T_Handover_Pkg(
    &outC->_L54,
    &outC->Context_fishHandoverCmds_1.p131_RBCTransitionOrder_decoced);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &outC->_L243,
    &outC->Context_fishHandoverCmds_1.p131_RBCTransitionOrder);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &outC->_L55,
    &outC->Context_fishHandoverCmds_1.p42_terminateCmd_from_handingOverRBC);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &outC->_L226,
    &outC->Context_fishHandoverCmds_1.sessionCmdsFromTrack);
  kcg_copy_p131_q_rbcTransitionOrder_T_Handover_Pkg(
    &outC->p131_RBCTransitionOrder_dec,
    &outC->_L54);
  kcg_copy_p131_q_rbcTransitionOrder_T_Handover_Pkg(
    &outC->_L131,
    &outC->p131_RBCTransitionOrder_dec);
  outC->_L203 = outC->_L131.valid;
  outC->MemCond_Memory_1_struct = outC->_L203;
  outC->_L3_Memory_1_struct = outC->MemCond_Memory_1_struct;
  /* @1/_L5= */
  if (outC->init) {
    kcg_copy_p131_q_rbcTransitionOrder_T_Handover_Pkg(
      &outC->_L5_Memory_1_struct,
      &outC->_L9_Memory_1_struct);
  }
  else {
    kcg_copy_p131_q_rbcTransitionOrder_T_Handover_Pkg(
      &outC->_L5_Memory_1_struct,
      &outC->_L8_Memory_1_struct);
  }
  kcg_copy_p131_q_rbcTransitionOrder_T_Handover_Pkg(
    &outC->M_Input_Memory_1_struct,
    &outC->_L131);
  kcg_copy_p131_q_rbcTransitionOrder_T_Handover_Pkg(
    &outC->_L6_Memory_1_struct,
    &outC->M_Input_Memory_1_struct);
  /* @1/_L7= */
  if (outC->_L3_Memory_1_struct) {
    kcg_copy_p131_q_rbcTransitionOrder_T_Handover_Pkg(
      &outC->_L7_Memory_1_struct,
      &outC->_L6_Memory_1_struct);
  }
  else {
    kcg_copy_p131_q_rbcTransitionOrder_T_Handover_Pkg(
      &outC->_L7_Memory_1_struct,
      &outC->_L5_Memory_1_struct);
  }
  /* @1/_L8= */
  if (outC->_L1_Memory_1_struct) {
    kcg_copy_p131_q_rbcTransitionOrder_T_Handover_Pkg(
      &outC->_L8_Memory_1_struct,
      &outC->_L2_Memory_1_struct);
  }
  else {
    kcg_copy_p131_q_rbcTransitionOrder_T_Handover_Pkg(
      &outC->_L8_Memory_1_struct,
      &outC->_L7_Memory_1_struct);
  }
  kcg_copy_p131_q_rbcTransitionOrder_T_Handover_Pkg(
    &outC->Out_Memory_1_struct,
    &outC->_L8_Memory_1_struct);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&outC->_L251, morcStatus_1);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&outC->_L252, morcStatus_2);
  outC->_L50 = outC->handingOverMobile_is_mobile_1_loc;
  /* _L44=(Handover_Pkg::handoverUtils_Pkg::radioStatusRouter#1)/ */
  radioStatusRouter_Handover_Pkg_handoverUtils_Pkg(
    &outC->_L251,
    &outC->_L252,
    outC->_L50,
    sessionManagementAbility,
    &outC->Context_radioStatusRouter_1);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
    &outC->_L44,
    &outC->Context_radioStatusRouter_1.morcStatusFromAcceptingRBC);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
    &outC->_L45,
    &outC->Context_radioStatusRouter_1.morcStatusFromHandingOverRBC);
  kcg_copy_p131_q_rbcTransitionOrder_T_Handover_Pkg(
    &outC->_L200,
    &outC->Out_Memory_1_struct);
  outC->_L162 = outC->_L200.valid;
  outC->_L163 = outC->_L200.nid_lrbg;
  /* _L175=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::NIDLRBG_2_nidC_nidBG#1)/ */
  NIDLRBG_2_nidC_nidBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    outC->_L162,
    outC->_L163,
    &outC->Context_NIDLRBG_2_nidC_nidBG_1);
  outC->_L175 = outC->Context_NIDLRBG_2_nidC_nidBG_1.nidC;
  outC->_L176 = outC->Context_NIDLRBG_2_nidC_nidBG_1.nidBG;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L186,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cNoPositionedBG_CalculateTrainPosition_Pkg);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L187, &outC->_L186);
  if (kcg_true) {
    outC->_L187.valid = outC->_L162;
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L188, &outC->_L187);
  if (kcg_true) {
    outC->_L188.nid_c = outC->_L175;
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L189, &outC->_L188);
  if (kcg_true) {
    outC->_L189.nid_bg = outC->_L176;
  }
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L190, BGs);
  kcg_copy_P131_RBCTransitionOrder_T_Packet_Types_Pkg(
    &outC->_L164,
    &outC->_L200.order);
  outC->_L165 = outC->_L164.valid;
  outC->_L196 = outC->_L162 & outC->_L165;
  /* _L172=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id#1)/ */
  indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L189,
    &outC->_L190,
    outC->_L196,
    &outC->Context_indexOfBG_by_id_1);
  outC->_L172 = outC->Context_indexOfBG_by_id_1.indexOfBG;
  outC->_L173 = outC->Context_indexOfBG_by_id_1.BG_found;
  outC->_L174 = outC->Context_indexOfBG_by_id_1.indexValid;
  if ((kcg_lit_int64(0) <= outC->_L172) & (outC->_L172 < kcg_lit_int64(41))) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L191,
      &outC->_L190[outC->_L172]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L191,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L192, &outC->_L191.location);
  outC->_L166 = outC->_L164.q_scale;
  outC->_L167 = outC->_L164.d_rbctr;
  outC->_L195 = kcg_lit_int64(0);
  /* _L193=(BasicLocationFunctions_Pkg::scaledDLINK_2_dlink#1)/ */
  scaledDLINK_2_dlink_BasicLocationFunctions_Pkg(
    outC->_L166,
    outC->_L167,
    outC->_L195,
    &outC->Context_scaledDLINK_2_dlink_1);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L193,
    &outC->Context_scaledDLINK_2_dlink_1.distance);
  /* _L197=(BasicLocationFunctions_Pkg::add_2_Distances#1)/ */
  add_2_Distances_BasicLocationFunctions_Pkg(
    &outC->_L192,
    &outC->_L193,
    &outC->Context_add_2_Distances_1);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L197,
    &outC->Context_add_2_Distances_1.distance);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->locationOfRBCTransition,
    &outC->_L197);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L219,
    &outC->locationOfRBCTransition);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L90, trainPosition);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L169,
    &outC->_L90.trainPosition);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->_L209,
    trainProperties);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L210,
    &outC->_L209.d_baliseAntenna_2_frontend);
  /* _L212=(BasicLocationFunctions_Pkg::add_2_Distances#2)/ */
  add_2_Distances_BasicLocationFunctions_Pkg(
    &outC->_L169,
    &outC->_L210,
    &outC->Context_add_2_Distances_2);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L212,
    &outC->Context_add_2_Distances_2.distance);
  /* _L222=(BasicLocationFunctions_Pkg::locReachedOrPassed#1)/ */
  locReachedOrPassed_BasicLocationFunctions_Pkg(
    &outC->_L219,
    &outC->_L212,
    &outC->Context_locReachedOrPassed_1);
  outC->_L222 = outC->Context_locReachedOrPassed_1.hit;
  outC->_L119 = outC->_L90.valid;
  outC->_L224 = outC->_L119 & outC->_L222 & outC->_L196 & outC->_L173;
  outC->maxSafeFrontEndPassesHandOverLocation = outC->_L224;
  outC->_L207 = outC->maxSafeFrontEndPassesHandOverLocation;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L211,
    &outC->_L209.d_frontend_2_rearend);
  /* _L213=(BasicLocationFunctions_Pkg::sub_2_distances#1)/ */
  sub_2_distances_BasicLocationFunctions_Pkg(
    &outC->_L212,
    &outC->_L211,
    &outC->Context_sub_2_distances_1);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L213,
    &outC->Context_sub_2_distances_1.distance);
  /* _L223=(BasicLocationFunctions_Pkg::locReachedOrPassed#2)/ */
  locReachedOrPassed_BasicLocationFunctions_Pkg(
    &outC->_L219,
    &outC->_L213,
    &outC->Context_locReachedOrPassed_2);
  outC->_L223 = outC->Context_locReachedOrPassed_2.hit;
  outC->_L225 = outC->_L119 & outC->_L223 & outC->_L196 & outC->_L173;
  outC->minSafeReadEndPassesHandOverLocation = outC->_L225;
  outC->_L208 = outC->minSafeReadEndPassesHandOverLocation;
  outC->_L41 = mode;
  /* _L89=(Handover_Pkg::handoverUtils_Pkg::handOverSequencer#1)/ */
  handOverSequencer_Handover_Pkg_handoverUtils_Pkg(
    &outC->_L53,
    &outC->_L243,
    &outC->_L55,
    &outC->_L44,
    &outC->_L45,
    outC->_L207,
    outC->_L208,
    outC->_L41,
    sessionManagementAbility,
    &outC->Context_handOverSequencer_1);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &outC->_L89,
    &outC->Context_handOverSequencer_1.p42_sessionCmd_for_acceptingRBC);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &outC->_L1,
    &outC->Context_handOverSequencer_1.p42_sessionCmd_for_handingOverRBC);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &outC->_L2,
    &outC->Context_handOverSequencer_1.p45_radioNetworkRegistrationOrder_for_handingOverRBC);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &outC->_L246,
    &outC->Context_handOverSequencer_1.p45_radioNetworkRegistrationOrder_for_acceptingRBC);
  outC->_L3 =
    outC->Context_handOverSequencer_1.sendPositionReport_2_handingOverRBC;
  outC->_L4 = outC->Context_handOverSequencer_1.sendPositionReport_2_acceptingRBC;
  outC->_L5 = outC->Context_handOverSequencer_1.sendTrainData_2_acceptingRBC;
  outC->_L6 = outC->Context_handOverSequencer_1.useInformationFromAcceptingRBC;
  outC->_L8 = outC->Context_handOverSequencer_1.bufferInformationFromAcceptingRBC;
  outC->_L14 = outC->Context_handOverSequencer_1.handoverInprogress;
  outC->_L204 = outC->Context_handOverSequencer_1.handoverFinished;
  outC->_L253 = outC->Context_handOverSequencer_1.notReady;
  /* _L255=(digital::EitherEdge#2)/ */
  EitherEdge_digital(outC->_L204, &outC->Context_EitherEdge_2);
  outC->_L255 = outC->Context_EitherEdge_2.EE_Output;
  /* _L254=(digital::EitherEdge#1)/ */
  EitherEdge_digital(outC->_L14, &outC->Context_EitherEdge_1);
  outC->_L254 = outC->Context_EitherEdge_1.EE_Output;
  outC->sNotReady = outC->_L253 | outC->_L254 | outC->_L255;
  outC->_L256 = outC->sNotReady;
  outC->notReady = outC->_L256;
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&outC->_L248, morcStatus_2);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&outC->_L247, morcStatus_1);
  outC->trainPassesA_RBC_RBC_border_WithItsFrontEnd = outC->_L224;
  outC->_L49 = outC->handingOverMobile_is_mobile_1_loc;
  /* _L37=(Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out#1)/ */
  mobileCtrlCmdRouter_out_Handover_Pkg_handoverUtils_Pkg(
    &outC->_L226,
    &outC->_L89,
    &outC->_L1,
    &outC->_L2,
    &outC->_L246,
    outC->_L49,
    outC->_L6,
    sessionManagementAbility,
    &outC->Context_mobileCtrlCmdRouter_out_1);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &outC->_L37,
    &outC->Context_mobileCtrlCmdRouter_out_1.p45_radioNetworkRegistrationOrder_1);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &outC->_L35,
    &outC->Context_mobileCtrlCmdRouter_out_1.p42_sessionCmd_for_RBC_1);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &outC->_L228,
    &outC->Context_mobileCtrlCmdRouter_out_1.additionalSessionCmdsFromTrack_for_RBC_1);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &outC->_L38,
    &outC->Context_mobileCtrlCmdRouter_out_1.p45_radioNetworkRegistrationOrder_2);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &outC->_L36,
    &outC->Context_mobileCtrlCmdRouter_out_1.p42_sessionCmd_for_RBC_2);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &outC->_L229,
    &outC->Context_mobileCtrlCmdRouter_out_1.additionalSessionCmdsFromTrack_for_RBC_2);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&outC->_L43, morcStatus_2);
  outC->_L128 = cMobileDeviceNo_2_Handover_Pkg;
  /* _L245=(Handover_Pkg::handoverUtils_Pkg::processRadioCtrlCmds_v2#1)/ */
  processRadioCtrlCmds_v2_Handover_Pkg_handoverUtils_Pkg(
    &outC->_L38,
    &outC->_L36,
    &outC->_L229,
    &outC->_L43,
    outC->_L128,
    &outC->Context_processRadioCtrlCmds_v2_1);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &outC->_L245,
    &outC->Context_processRadioCtrlCmds_v2_1.sessionCmds_2_MoRC);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &outC->sessionCmds_2_MoRC_2,
    &outC->_L245);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&outC->_L42, morcStatus_1);
  outC->_L127 = cMobileDeviceNo_1_Handover_Pkg;
  /* _L244=(Handover_Pkg::handoverUtils_Pkg::processRadioCtrlCmds_v2#2)/ */
  processRadioCtrlCmds_v2_Handover_Pkg_handoverUtils_Pkg(
    &outC->_L37,
    &outC->_L35,
    &outC->_L228,
    &outC->_L42,
    outC->_L127,
    &outC->Context_processRadioCtrlCmds_v2_2);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &outC->_L244,
    &outC->Context_processRadioCtrlCmds_v2_2.sessionCmds_2_MoRC);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &outC->sessionCmds_2_MoRC_1,
    &outC->_L244);
  outC->handingOverMobile_is_mobile_1 = outC->_L241;
  outC->useInformationFromAcceptingRBC = outC->_L6;
  outC->_L239 = outC->handingOverMobile_is_mobile_1_loc;
  outC->useInformationFromAcceptingRBC_loc = outC->_L6;
  outC->_L240 = outC->useInformationFromAcceptingRBC_loc;
  /* _L234=(Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC#1)/ */
  determineSupervisingRBC_Handover_Pkg_handoverUtils_Pkg(
    &outC->_L247,
    &outC->_L248,
    outC->_L239,
    outC->_L240,
    sessionManagementAbility,
    &outC->Context_determineSupervisingRBC_1);
  kcg_copy_connection_ids_T_Handover_Pkg(
    &outC->_L234,
    &outC->Context_determineSupervisingRBC_1.supervisingRBC);
  outC->_L235 = outC->Context_determineSupervisingRBC_1.supervising_isMobile_1;
  outC->_L236 = outC->Context_determineSupervisingRBC_1.supervising_isMobile_2;
  _4_noname = outC->_L236;
  _3_noname = outC->_L235;
  kcg_copy_connection_ids_T_Handover_Pkg(&outC->supervisingRBC, &outC->_L234);
  outC->handoverFinished = outC->_L204;
  _2_noname = outC->_L174;
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&outC->dataFromBalise, &outC->_L122);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&outC->_L130, &outC->dataFromBalise);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_1_noname, &outC->_L130);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &outC->dataFromAcceptingMobile,
    &outC->_L79);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &outC->_L129,
    &outC->dataFromAcceptingMobile);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&noname, &outC->_L129);
  outC->bufferInformationFromAcceptingRBC = outC->_L8;
  outC->sendTrainData_2_acceptingRBC = outC->_L5;
  outC->sendPositionReport_2_acceptingRBC = outC->_L4;
  outC->sendPositionReport_2_handingOverRBC = outC->_L3;
  outC->handoverInprogress = outC->_L14;
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void processHandingOver_init_Handover_Pkg_handoverUtils_Pkg(
  outC_processHandingOver_Handover_Pkg_handoverUtils_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;
  static kcg_size idx8;
  static kcg_size idx9;
  static kcg_size idx10;
  static kcg_size idx11;
  static kcg_size idx12;
  static kcg_size idx13;
  static kcg_size idx14;
  static kcg_size idx15;
  static kcg_size idx16;
  static kcg_size idx17;
  static kcg_size idx18;
  static kcg_size idx19;
  static kcg_size idx20;
  static kcg_size idx21;
  static kcg_size idx22;
  static kcg_size idx23;
  static kcg_size idx24;
  static kcg_size idx25;
  static kcg_size idx26;
  static kcg_size idx27;
  static kcg_size idx28;
  static kcg_size idx29;
  static kcg_size idx30;
  static kcg_size idx31;
  static kcg_size idx32;
  static kcg_size idx33;
  static kcg_size idx34;
  static kcg_size idx35;
  static kcg_size idx36;
  static kcg_size idx37;
  static kcg_size idx38;
  static kcg_size idx39;
  static kcg_size idx40;
  static kcg_size idx41;
  static kcg_size idx42;
  static kcg_size idx43;
  static kcg_size idx44;
  static kcg_size idx45;
  static kcg_size idx46;
  static kcg_size idx47;
  static kcg_size idx48;
  static kcg_size idx49;
  static kcg_size idx50;
  static kcg_size idx51;
  static kcg_size idx52;
  static kcg_size idx53;
  static kcg_size idx54;
  static kcg_size idx55;
  static kcg_size idx56;
  static kcg_size idx57;
  static kcg_size idx58;
  static kcg_size idx59;
  static kcg_size idx60;
  static kcg_size idx61;
  static kcg_size idx62;
  static kcg_size idx63;
  static kcg_size idx64;
  static kcg_size idx65;
  static kcg_size idx66;
  static kcg_size idx67;
  static kcg_size idx68;
  static kcg_size idx69;
  static kcg_size idx70;

  outC->_L256 = kcg_true;
  outC->_L255 = kcg_true;
  outC->_L254 = kcg_true;
  outC->_L253 = kcg_true;
  outC->_L252.registration.valid = kcg_true;
  outC->_L252.registration.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L252.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L252.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L252.registration.nid_mn = kcg_lit_int64(0);
  outC->_L252.connection.valid = kcg_true;
  outC->_L252.connection.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L252.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L252.connection.nid_radio = kcg_lit_int64(0);
  outC->_L252.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L252.connection.connectionLost = kcg_true;
  outC->_L252.connection.isInRadioHole = kcg_true;
  outC->_L252.session.valid = kcg_true;
  outC->_L252.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L252.session.nid_c = kcg_lit_int64(0);
  outC->_L252.session.nid_rbc = kcg_lit_int64(0);
  outC->_L252.session.nid_radio = kcg_lit_int64(0);
  outC->_L251.registration.valid = kcg_true;
  outC->_L251.registration.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L251.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L251.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L251.registration.nid_mn = kcg_lit_int64(0);
  outC->_L251.connection.valid = kcg_true;
  outC->_L251.connection.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L251.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L251.connection.nid_radio = kcg_lit_int64(0);
  outC->_L251.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L251.connection.connectionLost = kcg_true;
  outC->_L251.connection.isInRadioHole = kcg_true;
  outC->_L251.session.valid = kcg_true;
  outC->_L251.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L251.session.nid_c = kcg_lit_int64(0);
  outC->_L251.session.nid_rbc = kcg_lit_int64(0);
  outC->_L251.session.nid_radio = kcg_lit_int64(0);
  outC->_L250.registration.valid = kcg_true;
  outC->_L250.registration.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L250.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L250.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L250.registration.nid_mn = kcg_lit_int64(0);
  outC->_L250.connection.valid = kcg_true;
  outC->_L250.connection.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L250.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L250.connection.nid_radio = kcg_lit_int64(0);
  outC->_L250.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L250.connection.connectionLost = kcg_true;
  outC->_L250.connection.isInRadioHole = kcg_true;
  outC->_L250.session.valid = kcg_true;
  outC->_L250.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L250.session.nid_c = kcg_lit_int64(0);
  outC->_L250.session.nid_rbc = kcg_lit_int64(0);
  outC->_L250.session.nid_radio = kcg_lit_int64(0);
  outC->_L249.registration.valid = kcg_true;
  outC->_L249.registration.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L249.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L249.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L249.registration.nid_mn = kcg_lit_int64(0);
  outC->_L249.connection.valid = kcg_true;
  outC->_L249.connection.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L249.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L249.connection.nid_radio = kcg_lit_int64(0);
  outC->_L249.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L249.connection.connectionLost = kcg_true;
  outC->_L249.connection.isInRadioHole = kcg_true;
  outC->_L249.session.valid = kcg_true;
  outC->_L249.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L249.session.nid_c = kcg_lit_int64(0);
  outC->_L249.session.nid_rbc = kcg_lit_int64(0);
  outC->_L249.session.nid_radio = kcg_lit_int64(0);
  outC->_L248.registration.valid = kcg_true;
  outC->_L248.registration.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L248.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L248.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L248.registration.nid_mn = kcg_lit_int64(0);
  outC->_L248.connection.valid = kcg_true;
  outC->_L248.connection.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L248.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L248.connection.nid_radio = kcg_lit_int64(0);
  outC->_L248.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L248.connection.connectionLost = kcg_true;
  outC->_L248.connection.isInRadioHole = kcg_true;
  outC->_L248.session.valid = kcg_true;
  outC->_L248.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L248.session.nid_c = kcg_lit_int64(0);
  outC->_L248.session.nid_rbc = kcg_lit_int64(0);
  outC->_L248.session.nid_radio = kcg_lit_int64(0);
  outC->_L247.registration.valid = kcg_true;
  outC->_L247.registration.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L247.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L247.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L247.registration.nid_mn = kcg_lit_int64(0);
  outC->_L247.connection.valid = kcg_true;
  outC->_L247.connection.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L247.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L247.connection.nid_radio = kcg_lit_int64(0);
  outC->_L247.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L247.connection.connectionLost = kcg_true;
  outC->_L247.connection.isInRadioHole = kcg_true;
  outC->_L247.session.valid = kcg_true;
  outC->_L247.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L247.session.nid_c = kcg_lit_int64(0);
  outC->_L247.session.nid_rbc = kcg_lit_int64(0);
  outC->_L247.session.nid_radio = kcg_lit_int64(0);
  outC->_L246.valid = kcg_true;
  outC->_L246.source = msrc_undefined_Common_Types_Pkg;
  outC->_L246.radioMetadata.t_train_reference = kcg_true;
  outC->_L246.radioMetadata.nid_em = kcg_true;
  outC->_L246.radioMetadata.q_scale = kcg_true;
  outC->_L246.radioMetadata.d_sr = kcg_true;
  outC->_L246.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L246.radioMetadata.d_ref = kcg_true;
  outC->_L246.radioMetadata.q_dir = kcg_true;
  outC->_L246.radioMetadata.d_emergencystop = kcg_true;
  outC->_L246.radioMetadata.m_version = kcg_true;
  outC->_L246.BG_Common_Header.valid = kcg_true;
  outC->_L246.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L246.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L246.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L246.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L246.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L246.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L246.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L246.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L246.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L246.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L246.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L246.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L246.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L246.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L246.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L246.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L246.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L246.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L246.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L246.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L246.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L246.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L246.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L246.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L246.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L246.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L246.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L246.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L246.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L246.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L246.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L246.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L246.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L246.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L246.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L246.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L246.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L246.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L246.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L246.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L246.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L246.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx = 0; idx < 30; idx++) {
    outC->_L246.packets.PacketHeaders[idx].nid_packet = kcg_lit_int64(0);
    outC->_L246.packets.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L246.packets.PacketHeaders[idx].valid = kcg_true;
    outC->_L246.packets.PacketHeaders[idx].startAddress = kcg_lit_int64(0);
    outC->_L246.packets.PacketHeaders[idx].endAddress = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L246.packets.PacketData[idx1] = kcg_lit_int64(0);
  }
  outC->_L246.sendingRBC.valid = kcg_true;
  outC->_L246.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L246.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L246.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L245.valid = kcg_true;
  outC->_L245.source = msrc_undefined_Common_Types_Pkg;
  outC->_L245.radioMetadata.t_train_reference = kcg_true;
  outC->_L245.radioMetadata.nid_em = kcg_true;
  outC->_L245.radioMetadata.q_scale = kcg_true;
  outC->_L245.radioMetadata.d_sr = kcg_true;
  outC->_L245.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L245.radioMetadata.d_ref = kcg_true;
  outC->_L245.radioMetadata.q_dir = kcg_true;
  outC->_L245.radioMetadata.d_emergencystop = kcg_true;
  outC->_L245.radioMetadata.m_version = kcg_true;
  outC->_L245.BG_Common_Header.valid = kcg_true;
  outC->_L245.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L245.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L245.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L245.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L245.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L245.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L245.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L245.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L245.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L245.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L245.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L245.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L245.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L245.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L245.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L245.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L245.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L245.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L245.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L245.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L245.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L245.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L245.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L245.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L245.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L245.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L245.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L245.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L245.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L245.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L245.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L245.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L245.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L245.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L245.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L245.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L245.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L245.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L245.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L245.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L245.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L245.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L245.packets.PacketHeaders[idx2].nid_packet = kcg_lit_int64(0);
    outC->_L245.packets.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L245.packets.PacketHeaders[idx2].valid = kcg_true;
    outC->_L245.packets.PacketHeaders[idx2].startAddress = kcg_lit_int64(0);
    outC->_L245.packets.PacketHeaders[idx2].endAddress = kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L245.packets.PacketData[idx3] = kcg_lit_int64(0);
  }
  outC->_L245.sendingRBC.valid = kcg_true;
  outC->_L245.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L245.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L245.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L244.valid = kcg_true;
  outC->_L244.source = msrc_undefined_Common_Types_Pkg;
  outC->_L244.radioMetadata.t_train_reference = kcg_true;
  outC->_L244.radioMetadata.nid_em = kcg_true;
  outC->_L244.radioMetadata.q_scale = kcg_true;
  outC->_L244.radioMetadata.d_sr = kcg_true;
  outC->_L244.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L244.radioMetadata.d_ref = kcg_true;
  outC->_L244.radioMetadata.q_dir = kcg_true;
  outC->_L244.radioMetadata.d_emergencystop = kcg_true;
  outC->_L244.radioMetadata.m_version = kcg_true;
  outC->_L244.BG_Common_Header.valid = kcg_true;
  outC->_L244.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L244.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L244.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L244.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L244.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L244.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L244.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L244.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L244.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L244.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L244.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L244.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L244.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L244.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L244.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L244.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L244.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L244.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L244.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L244.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L244.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L244.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L244.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L244.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L244.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L244.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L244.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L244.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L244.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L244.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L244.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L244.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L244.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L244.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L244.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L244.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L244.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L244.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L244.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L244.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L244.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L244.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L244.packets.PacketHeaders[idx4].nid_packet = kcg_lit_int64(0);
    outC->_L244.packets.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->_L244.packets.PacketHeaders[idx4].valid = kcg_true;
    outC->_L244.packets.PacketHeaders[idx4].startAddress = kcg_lit_int64(0);
    outC->_L244.packets.PacketHeaders[idx4].endAddress = kcg_lit_int64(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L244.packets.PacketData[idx5] = kcg_lit_int64(0);
  }
  outC->_L244.sendingRBC.valid = kcg_true;
  outC->_L244.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L244.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L244.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L243.valid = kcg_true;
  outC->_L243.source = msrc_undefined_Common_Types_Pkg;
  outC->_L243.radioMetadata.t_train_reference = kcg_true;
  outC->_L243.radioMetadata.nid_em = kcg_true;
  outC->_L243.radioMetadata.q_scale = kcg_true;
  outC->_L243.radioMetadata.d_sr = kcg_true;
  outC->_L243.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L243.radioMetadata.d_ref = kcg_true;
  outC->_L243.radioMetadata.q_dir = kcg_true;
  outC->_L243.radioMetadata.d_emergencystop = kcg_true;
  outC->_L243.radioMetadata.m_version = kcg_true;
  outC->_L243.BG_Common_Header.valid = kcg_true;
  outC->_L243.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L243.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L243.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L243.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L243.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L243.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L243.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L243.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L243.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L243.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L243.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L243.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L243.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L243.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L243.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L243.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L243.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L243.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L243.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L243.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L243.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L243.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L243.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L243.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L243.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L243.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L243.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L243.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L243.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L243.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L243.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L243.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L243.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L243.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L243.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L243.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L243.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L243.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L243.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L243.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L243.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L243.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx6 = 0; idx6 < 30; idx6++) {
    outC->_L243.packets.PacketHeaders[idx6].nid_packet = kcg_lit_int64(0);
    outC->_L243.packets.PacketHeaders[idx6].q_dir = Q_DIR_Reverse;
    outC->_L243.packets.PacketHeaders[idx6].valid = kcg_true;
    outC->_L243.packets.PacketHeaders[idx6].startAddress = kcg_lit_int64(0);
    outC->_L243.packets.PacketHeaders[idx6].endAddress = kcg_lit_int64(0);
  }
  for (idx7 = 0; idx7 < 500; idx7++) {
    outC->_L243.packets.PacketData[idx7] = kcg_lit_int64(0);
  }
  outC->_L243.sendingRBC.valid = kcg_true;
  outC->_L243.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L243.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L243.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L241 = kcg_true;
  outC->_L242 = kcg_true;
  outC->_L240 = kcg_true;
  outC->_L239 = kcg_true;
  outC->_L234.valid = kcg_true;
  outC->_L234.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L234.nid_c = kcg_lit_int64(0);
  outC->_L234.nid_RBC = kcg_lit_int64(0);
  outC->_L234.nid_radio = kcg_lit_int64(0);
  outC->_L234.nid_mn = kcg_lit_int64(0);
  outC->_L235 = kcg_true;
  outC->_L236 = kcg_true;
  outC->_L229.valid = kcg_true;
  outC->_L229.source = msrc_undefined_Common_Types_Pkg;
  outC->_L229.radioMetadata.t_train_reference = kcg_true;
  outC->_L229.radioMetadata.nid_em = kcg_true;
  outC->_L229.radioMetadata.q_scale = kcg_true;
  outC->_L229.radioMetadata.d_sr = kcg_true;
  outC->_L229.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L229.radioMetadata.d_ref = kcg_true;
  outC->_L229.radioMetadata.q_dir = kcg_true;
  outC->_L229.radioMetadata.d_emergencystop = kcg_true;
  outC->_L229.radioMetadata.m_version = kcg_true;
  outC->_L229.BG_Common_Header.valid = kcg_true;
  outC->_L229.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L229.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L229.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L229.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L229.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L229.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L229.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L229.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L229.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L229.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L229.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L229.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L229.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L229.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L229.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L229.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L229.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L229.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L229.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L229.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L229.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L229.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L229.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L229.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L229.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L229.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L229.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L229.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L229.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L229.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L229.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L229.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L229.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L229.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L229.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L229.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L229.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L229.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L229.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L229.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L229.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L229.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx8 = 0; idx8 < 30; idx8++) {
    outC->_L229.packets.PacketHeaders[idx8].nid_packet = kcg_lit_int64(0);
    outC->_L229.packets.PacketHeaders[idx8].q_dir = Q_DIR_Reverse;
    outC->_L229.packets.PacketHeaders[idx8].valid = kcg_true;
    outC->_L229.packets.PacketHeaders[idx8].startAddress = kcg_lit_int64(0);
    outC->_L229.packets.PacketHeaders[idx8].endAddress = kcg_lit_int64(0);
  }
  for (idx9 = 0; idx9 < 500; idx9++) {
    outC->_L229.packets.PacketData[idx9] = kcg_lit_int64(0);
  }
  outC->_L229.sendingRBC.valid = kcg_true;
  outC->_L229.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L229.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L229.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L228.valid = kcg_true;
  outC->_L228.source = msrc_undefined_Common_Types_Pkg;
  outC->_L228.radioMetadata.t_train_reference = kcg_true;
  outC->_L228.radioMetadata.nid_em = kcg_true;
  outC->_L228.radioMetadata.q_scale = kcg_true;
  outC->_L228.radioMetadata.d_sr = kcg_true;
  outC->_L228.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L228.radioMetadata.d_ref = kcg_true;
  outC->_L228.radioMetadata.q_dir = kcg_true;
  outC->_L228.radioMetadata.d_emergencystop = kcg_true;
  outC->_L228.radioMetadata.m_version = kcg_true;
  outC->_L228.BG_Common_Header.valid = kcg_true;
  outC->_L228.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L228.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L228.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L228.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L228.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L228.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L228.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L228.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L228.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L228.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L228.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L228.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L228.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L228.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L228.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L228.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L228.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L228.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L228.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L228.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L228.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L228.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L228.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L228.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L228.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L228.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L228.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L228.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L228.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L228.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L228.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L228.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L228.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L228.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L228.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L228.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L228.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L228.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L228.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L228.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L228.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L228.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx10 = 0; idx10 < 30; idx10++) {
    outC->_L228.packets.PacketHeaders[idx10].nid_packet = kcg_lit_int64(0);
    outC->_L228.packets.PacketHeaders[idx10].q_dir = Q_DIR_Reverse;
    outC->_L228.packets.PacketHeaders[idx10].valid = kcg_true;
    outC->_L228.packets.PacketHeaders[idx10].startAddress = kcg_lit_int64(0);
    outC->_L228.packets.PacketHeaders[idx10].endAddress = kcg_lit_int64(0);
  }
  for (idx11 = 0; idx11 < 500; idx11++) {
    outC->_L228.packets.PacketData[idx11] = kcg_lit_int64(0);
  }
  outC->_L228.sendingRBC.valid = kcg_true;
  outC->_L228.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L228.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L228.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L226.valid = kcg_true;
  outC->_L226.source = msrc_undefined_Common_Types_Pkg;
  outC->_L226.radioMetadata.t_train_reference = kcg_true;
  outC->_L226.radioMetadata.nid_em = kcg_true;
  outC->_L226.radioMetadata.q_scale = kcg_true;
  outC->_L226.radioMetadata.d_sr = kcg_true;
  outC->_L226.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L226.radioMetadata.d_ref = kcg_true;
  outC->_L226.radioMetadata.q_dir = kcg_true;
  outC->_L226.radioMetadata.d_emergencystop = kcg_true;
  outC->_L226.radioMetadata.m_version = kcg_true;
  outC->_L226.BG_Common_Header.valid = kcg_true;
  outC->_L226.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L226.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L226.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L226.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L226.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L226.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L226.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L226.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L226.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L226.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L226.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L226.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L226.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L226.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L226.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L226.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L226.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L226.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L226.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L226.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L226.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L226.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L226.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L226.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L226.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L226.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L226.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L226.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L226.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L226.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L226.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L226.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L226.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L226.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L226.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L226.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L226.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L226.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L226.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L226.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L226.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L226.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx12 = 0; idx12 < 30; idx12++) {
    outC->_L226.packets.PacketHeaders[idx12].nid_packet = kcg_lit_int64(0);
    outC->_L226.packets.PacketHeaders[idx12].q_dir = Q_DIR_Reverse;
    outC->_L226.packets.PacketHeaders[idx12].valid = kcg_true;
    outC->_L226.packets.PacketHeaders[idx12].startAddress = kcg_lit_int64(0);
    outC->_L226.packets.PacketHeaders[idx12].endAddress = kcg_lit_int64(0);
  }
  for (idx13 = 0; idx13 < 500; idx13++) {
    outC->_L226.packets.PacketData[idx13] = kcg_lit_int64(0);
  }
  outC->_L226.sendingRBC.valid = kcg_true;
  outC->_L226.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L226.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L226.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L225 = kcg_true;
  outC->_L224 = kcg_true;
  outC->_L223 = kcg_true;
  outC->_L222 = kcg_true;
  outC->_L219.nominal = kcg_lit_int64(0);
  outC->_L219.d_min = kcg_lit_int64(0);
  outC->_L219.d_max = kcg_lit_int64(0);
  outC->_L213.nominal = kcg_lit_int64(0);
  outC->_L213.d_min = kcg_lit_int64(0);
  outC->_L213.d_max = kcg_lit_int64(0);
  outC->_L212.nominal = kcg_lit_int64(0);
  outC->_L212.d_min = kcg_lit_int64(0);
  outC->_L212.d_max = kcg_lit_int64(0);
  outC->_L211.nominal = kcg_lit_int64(0);
  outC->_L211.d_min = kcg_lit_int64(0);
  outC->_L211.d_max = kcg_lit_int64(0);
  outC->_L210.nominal = kcg_lit_int64(0);
  outC->_L210.d_min = kcg_lit_int64(0);
  outC->_L210.d_max = kcg_lit_int64(0);
  outC->_L209.nid_engine = kcg_lit_int64(0);
  outC->_L209.nid_operational = kcg_lit_int64(0);
  outC->_L209.l_train = kcg_lit_int64(0);
  outC->_L209.d_baliseAntenna_2_frontend.nominal = kcg_lit_int64(0);
  outC->_L209.d_baliseAntenna_2_frontend.d_min = kcg_lit_int64(0);
  outC->_L209.d_baliseAntenna_2_frontend.d_max = kcg_lit_int64(0);
  outC->_L209.d_frontend_2_rearend.nominal = kcg_lit_int64(0);
  outC->_L209.d_frontend_2_rearend.d_min = kcg_lit_int64(0);
  outC->_L209.d_frontend_2_rearend.d_max = kcg_lit_int64(0);
  outC->_L209.locationAccuracy_DefaultValue.nominal = kcg_lit_int64(0);
  outC->_L209.locationAccuracy_DefaultValue.d_min = kcg_lit_int64(0);
  outC->_L209.locationAccuracy_DefaultValue.d_max = kcg_lit_int64(0);
  outC->_L209.centerDetectionAcc_DefaultValue.nominal = kcg_lit_int64(0);
  outC->_L209.centerDetectionAcc_DefaultValue.d_min = kcg_lit_int64(0);
  outC->_L209.centerDetectionAcc_DefaultValue.d_max = kcg_lit_int64(0);
  outC->_L208 = kcg_true;
  outC->_L207 = kcg_true;
  outC->_L206 = kcg_true;
  outC->_L204 = kcg_true;
  outC->_L203 = kcg_true;
  outC->_L202.valid = kcg_true;
  outC->_L202.source = msrc_undefined_Common_Types_Pkg;
  outC->_L202.nid_lrbg = kcg_lit_int64(0);
  outC->_L202.location.nominal = kcg_lit_int64(0);
  outC->_L202.location.d_min = kcg_lit_int64(0);
  outC->_L202.location.d_max = kcg_lit_int64(0);
  outC->_L202.contactLastKnownRBC = kcg_true;
  outC->_L202.useTheShortNumberStoredOnboard = kcg_true;
  outC->_L202.order.valid = kcg_true;
  outC->_L202.order.q_dir = Q_DIR_Reverse;
  outC->_L202.order.q_scale = Q_SCALE_10_cm_scale;
  outC->_L202.order.d_rbctr = kcg_lit_int64(0);
  outC->_L202.order.nid_c = kcg_lit_int64(0);
  outC->_L202.order.nid_rbc = kcg_lit_int64(0);
  outC->_L202.order.nid_radio = kcg_lit_int64(0);
  outC->_L202.order.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L200.valid = kcg_true;
  outC->_L200.source = msrc_undefined_Common_Types_Pkg;
  outC->_L200.nid_lrbg = kcg_lit_int64(0);
  outC->_L200.location.nominal = kcg_lit_int64(0);
  outC->_L200.location.d_min = kcg_lit_int64(0);
  outC->_L200.location.d_max = kcg_lit_int64(0);
  outC->_L200.contactLastKnownRBC = kcg_true;
  outC->_L200.useTheShortNumberStoredOnboard = kcg_true;
  outC->_L200.order.valid = kcg_true;
  outC->_L200.order.q_dir = Q_DIR_Reverse;
  outC->_L200.order.q_scale = Q_SCALE_10_cm_scale;
  outC->_L200.order.d_rbctr = kcg_lit_int64(0);
  outC->_L200.order.nid_c = kcg_lit_int64(0);
  outC->_L200.order.nid_rbc = kcg_lit_int64(0);
  outC->_L200.order.nid_radio = kcg_lit_int64(0);
  outC->_L200.order.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L197.nominal = kcg_lit_int64(0);
  outC->_L197.d_min = kcg_lit_int64(0);
  outC->_L197.d_max = kcg_lit_int64(0);
  outC->_L196 = kcg_true;
  outC->_L195 = kcg_lit_int64(0);
  outC->_L193.nominal = kcg_lit_int64(0);
  outC->_L193.d_min = kcg_lit_int64(0);
  outC->_L193.d_max = kcg_lit_int64(0);
  outC->_L192.nominal = kcg_lit_int64(0);
  outC->_L192.d_min = kcg_lit_int64(0);
  outC->_L192.d_max = kcg_lit_int64(0);
  outC->_L191.valid = kcg_true;
  outC->_L191.nid_c = kcg_lit_int64(0);
  outC->_L191.nid_bg = kcg_lit_int64(0);
  outC->_L191.q_link = Q_LINK_Unlinked;
  outC->_L191.location.nominal = kcg_lit_int64(0);
  outC->_L191.location.d_min = kcg_lit_int64(0);
  outC->_L191.location.d_max = kcg_lit_int64(0);
  outC->_L191.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L191.infoFromLinking.valid = kcg_true;
  outC->_L191.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L191.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L191.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L191.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L191.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L191.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L191.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L191.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L191.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L191.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L191.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L191.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L191.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L191.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L191.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L191.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L191.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L191.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L191.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L191.infoFromPassing.valid = kcg_true;
  outC->_L191.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L191.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L191.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L191.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L191.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L191.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L191.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L191.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L191.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L191.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L191.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L191.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L191.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L191.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L191.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L191.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L191.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L191.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L191.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(
      0);
  outC->_L191.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L191.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L191.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L191.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L191.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L191.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L191.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L191.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L191.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx14 = 0; idx14 < 33; idx14++) {
    outC->_L191.infoFromPassing.linkedBGs[idx14].valid = kcg_true;
    outC->_L191.infoFromPassing.linkedBGs[idx14].nid_LRBG = kcg_lit_int64(0);
    outC->_L191.infoFromPassing.linkedBGs[idx14].q_dir = Q_DIR_Reverse;
    outC->_L191.infoFromPassing.linkedBGs[idx14].q_scale = Q_SCALE_10_cm_scale;
    outC->_L191.infoFromPassing.linkedBGs[idx14].d_link = kcg_lit_int64(0);
    outC->_L191.infoFromPassing.linkedBGs[idx14].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L191.infoFromPassing.linkedBGs[idx14].nid_c = kcg_lit_int64(0);
    outC->_L191.infoFromPassing.linkedBGs[idx14].nid_bg = kcg_lit_int64(0);
    outC->_L191.infoFromPassing.linkedBGs[idx14].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L191.infoFromPassing.linkedBGs[idx14].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L191.infoFromPassing.linkedBGs[idx14].q_locacc = kcg_lit_int64(0);
  }
  outC->_L191.missed = kcg_true;
  for (idx16 = 0; idx16 < 41; idx16++) {
    outC->_L190[idx16].valid = kcg_true;
    outC->_L190[idx16].nid_c = kcg_lit_int64(0);
    outC->_L190[idx16].nid_bg = kcg_lit_int64(0);
    outC->_L190[idx16].q_link = Q_LINK_Unlinked;
    outC->_L190[idx16].location.nominal = kcg_lit_int64(0);
    outC->_L190[idx16].location.d_min = kcg_lit_int64(0);
    outC->_L190[idx16].location.d_max = kcg_lit_int64(0);
    outC->_L190[idx16].seqNoOnTrack = kcg_lit_int64(0);
    outC->_L190[idx16].infoFromLinking.valid = kcg_true;
    outC->_L190[idx16].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
    outC->_L190[idx16].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
    outC->_L190[idx16].infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
    outC->_L190[idx16].infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
    outC->_L190[idx16].infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
    outC->_L190[idx16].infoFromLinking.d_link.nominal = kcg_lit_int64(0);
    outC->_L190[idx16].infoFromLinking.d_link.d_min = kcg_lit_int64(0);
    outC->_L190[idx16].infoFromLinking.d_link.d_max = kcg_lit_int64(0);
    outC->_L190[idx16].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L190[idx16].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
    outC->_L190[idx16].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L190[idx16].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L190[idx16].infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
    outC->_L190[idx16].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L190[idx16].infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
    outC->_L190[idx16].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
    outC->_L190[idx16].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L190[idx16].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L190[idx16].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
    outC->_L190[idx16].infoFromPassing.valid = kcg_true;
    outC->_L190[idx16].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L190[idx16].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L190[idx16].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L190[idx16].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L190[idx16].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L190[idx16].infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
    outC->_L190[idx16].infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
    outC->_L190[idx16].infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
    outC->_L190[idx16].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L190[idx16].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L190[idx16].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int64(0);
    outC->_L190[idx16].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int64(0);
    outC->_L190[idx16].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int64(0);
    outC->_L190[idx16].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int64(0);
    outC->_L190[idx16].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->_L190[idx16].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->_L190[idx16].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int64(0);
    outC->_L190[idx16].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int64(0);
    outC->_L190[idx16].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int64(0);
    outC->_L190[idx16].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L190[idx16].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L190[idx16].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->_L190[idx16].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->_L190[idx16].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->_L190[idx16].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
    outC->_L190[idx16].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L190[idx16].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L190[idx16].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx15 = 0; idx15 < 33; idx15++) {
      outC->_L190[idx16].infoFromPassing.linkedBGs[idx15].valid = kcg_true;
      outC->_L190[idx16].infoFromPassing.linkedBGs[idx15].nid_LRBG = kcg_lit_int64(0);
      outC->_L190[idx16].infoFromPassing.linkedBGs[idx15].q_dir = Q_DIR_Reverse;
      outC->_L190[idx16].infoFromPassing.linkedBGs[idx15].q_scale =
        Q_SCALE_10_cm_scale;
      outC->_L190[idx16].infoFromPassing.linkedBGs[idx15].d_link = kcg_lit_int64(0);
      outC->_L190[idx16].infoFromPassing.linkedBGs[idx15].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L190[idx16].infoFromPassing.linkedBGs[idx15].nid_c = kcg_lit_int64(0);
      outC->_L190[idx16].infoFromPassing.linkedBGs[idx15].nid_bg = kcg_lit_int64(0);
      outC->_L190[idx16].infoFromPassing.linkedBGs[idx15].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L190[idx16].infoFromPassing.linkedBGs[idx15].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L190[idx16].infoFromPassing.linkedBGs[idx15].q_locacc = kcg_lit_int64(0);
    }
    outC->_L190[idx16].missed = kcg_true;
  }
  outC->_L189.valid = kcg_true;
  outC->_L189.nid_c = kcg_lit_int64(0);
  outC->_L189.nid_bg = kcg_lit_int64(0);
  outC->_L189.q_link = Q_LINK_Unlinked;
  outC->_L189.location.nominal = kcg_lit_int64(0);
  outC->_L189.location.d_min = kcg_lit_int64(0);
  outC->_L189.location.d_max = kcg_lit_int64(0);
  outC->_L189.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L189.infoFromLinking.valid = kcg_true;
  outC->_L189.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L189.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L189.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L189.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L189.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L189.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L189.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L189.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L189.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L189.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L189.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L189.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L189.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L189.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L189.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L189.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L189.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L189.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L189.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L189.infoFromPassing.valid = kcg_true;
  outC->_L189.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L189.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L189.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L189.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L189.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L189.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L189.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L189.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L189.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L189.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L189.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L189.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L189.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L189.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L189.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L189.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L189.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L189.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L189.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(
      0);
  outC->_L189.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L189.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L189.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L189.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L189.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L189.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L189.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L189.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L189.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx17 = 0; idx17 < 33; idx17++) {
    outC->_L189.infoFromPassing.linkedBGs[idx17].valid = kcg_true;
    outC->_L189.infoFromPassing.linkedBGs[idx17].nid_LRBG = kcg_lit_int64(0);
    outC->_L189.infoFromPassing.linkedBGs[idx17].q_dir = Q_DIR_Reverse;
    outC->_L189.infoFromPassing.linkedBGs[idx17].q_scale = Q_SCALE_10_cm_scale;
    outC->_L189.infoFromPassing.linkedBGs[idx17].d_link = kcg_lit_int64(0);
    outC->_L189.infoFromPassing.linkedBGs[idx17].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L189.infoFromPassing.linkedBGs[idx17].nid_c = kcg_lit_int64(0);
    outC->_L189.infoFromPassing.linkedBGs[idx17].nid_bg = kcg_lit_int64(0);
    outC->_L189.infoFromPassing.linkedBGs[idx17].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L189.infoFromPassing.linkedBGs[idx17].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L189.infoFromPassing.linkedBGs[idx17].q_locacc = kcg_lit_int64(0);
  }
  outC->_L189.missed = kcg_true;
  outC->_L188.valid = kcg_true;
  outC->_L188.nid_c = kcg_lit_int64(0);
  outC->_L188.nid_bg = kcg_lit_int64(0);
  outC->_L188.q_link = Q_LINK_Unlinked;
  outC->_L188.location.nominal = kcg_lit_int64(0);
  outC->_L188.location.d_min = kcg_lit_int64(0);
  outC->_L188.location.d_max = kcg_lit_int64(0);
  outC->_L188.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L188.infoFromLinking.valid = kcg_true;
  outC->_L188.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L188.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L188.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L188.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L188.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L188.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L188.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L188.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L188.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L188.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L188.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L188.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L188.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L188.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L188.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L188.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L188.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L188.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L188.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L188.infoFromPassing.valid = kcg_true;
  outC->_L188.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L188.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L188.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L188.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L188.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L188.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L188.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L188.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L188.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L188.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L188.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L188.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L188.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L188.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L188.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L188.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L188.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L188.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L188.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(
      0);
  outC->_L188.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L188.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L188.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L188.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L188.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L188.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L188.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L188.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L188.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx18 = 0; idx18 < 33; idx18++) {
    outC->_L188.infoFromPassing.linkedBGs[idx18].valid = kcg_true;
    outC->_L188.infoFromPassing.linkedBGs[idx18].nid_LRBG = kcg_lit_int64(0);
    outC->_L188.infoFromPassing.linkedBGs[idx18].q_dir = Q_DIR_Reverse;
    outC->_L188.infoFromPassing.linkedBGs[idx18].q_scale = Q_SCALE_10_cm_scale;
    outC->_L188.infoFromPassing.linkedBGs[idx18].d_link = kcg_lit_int64(0);
    outC->_L188.infoFromPassing.linkedBGs[idx18].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L188.infoFromPassing.linkedBGs[idx18].nid_c = kcg_lit_int64(0);
    outC->_L188.infoFromPassing.linkedBGs[idx18].nid_bg = kcg_lit_int64(0);
    outC->_L188.infoFromPassing.linkedBGs[idx18].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L188.infoFromPassing.linkedBGs[idx18].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L188.infoFromPassing.linkedBGs[idx18].q_locacc = kcg_lit_int64(0);
  }
  outC->_L188.missed = kcg_true;
  outC->_L187.valid = kcg_true;
  outC->_L187.nid_c = kcg_lit_int64(0);
  outC->_L187.nid_bg = kcg_lit_int64(0);
  outC->_L187.q_link = Q_LINK_Unlinked;
  outC->_L187.location.nominal = kcg_lit_int64(0);
  outC->_L187.location.d_min = kcg_lit_int64(0);
  outC->_L187.location.d_max = kcg_lit_int64(0);
  outC->_L187.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L187.infoFromLinking.valid = kcg_true;
  outC->_L187.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L187.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L187.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L187.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L187.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L187.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L187.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L187.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L187.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L187.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L187.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L187.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L187.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L187.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L187.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L187.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L187.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L187.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L187.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L187.infoFromPassing.valid = kcg_true;
  outC->_L187.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L187.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L187.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L187.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L187.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L187.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L187.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L187.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L187.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L187.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L187.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L187.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L187.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L187.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L187.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L187.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L187.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L187.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L187.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(
      0);
  outC->_L187.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L187.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L187.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L187.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L187.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L187.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L187.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L187.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L187.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx19 = 0; idx19 < 33; idx19++) {
    outC->_L187.infoFromPassing.linkedBGs[idx19].valid = kcg_true;
    outC->_L187.infoFromPassing.linkedBGs[idx19].nid_LRBG = kcg_lit_int64(0);
    outC->_L187.infoFromPassing.linkedBGs[idx19].q_dir = Q_DIR_Reverse;
    outC->_L187.infoFromPassing.linkedBGs[idx19].q_scale = Q_SCALE_10_cm_scale;
    outC->_L187.infoFromPassing.linkedBGs[idx19].d_link = kcg_lit_int64(0);
    outC->_L187.infoFromPassing.linkedBGs[idx19].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L187.infoFromPassing.linkedBGs[idx19].nid_c = kcg_lit_int64(0);
    outC->_L187.infoFromPassing.linkedBGs[idx19].nid_bg = kcg_lit_int64(0);
    outC->_L187.infoFromPassing.linkedBGs[idx19].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L187.infoFromPassing.linkedBGs[idx19].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L187.infoFromPassing.linkedBGs[idx19].q_locacc = kcg_lit_int64(0);
  }
  outC->_L187.missed = kcg_true;
  outC->_L186.valid = kcg_true;
  outC->_L186.nid_c = kcg_lit_int64(0);
  outC->_L186.nid_bg = kcg_lit_int64(0);
  outC->_L186.q_link = Q_LINK_Unlinked;
  outC->_L186.location.nominal = kcg_lit_int64(0);
  outC->_L186.location.d_min = kcg_lit_int64(0);
  outC->_L186.location.d_max = kcg_lit_int64(0);
  outC->_L186.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L186.infoFromLinking.valid = kcg_true;
  outC->_L186.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L186.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L186.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L186.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L186.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L186.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L186.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L186.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L186.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L186.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L186.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L186.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L186.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L186.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L186.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L186.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L186.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L186.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L186.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L186.infoFromPassing.valid = kcg_true;
  outC->_L186.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L186.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L186.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L186.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L186.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L186.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L186.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L186.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L186.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L186.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L186.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L186.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L186.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L186.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L186.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L186.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L186.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L186.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L186.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(
      0);
  outC->_L186.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L186.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L186.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L186.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L186.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L186.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L186.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L186.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L186.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx20 = 0; idx20 < 33; idx20++) {
    outC->_L186.infoFromPassing.linkedBGs[idx20].valid = kcg_true;
    outC->_L186.infoFromPassing.linkedBGs[idx20].nid_LRBG = kcg_lit_int64(0);
    outC->_L186.infoFromPassing.linkedBGs[idx20].q_dir = Q_DIR_Reverse;
    outC->_L186.infoFromPassing.linkedBGs[idx20].q_scale = Q_SCALE_10_cm_scale;
    outC->_L186.infoFromPassing.linkedBGs[idx20].d_link = kcg_lit_int64(0);
    outC->_L186.infoFromPassing.linkedBGs[idx20].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L186.infoFromPassing.linkedBGs[idx20].nid_c = kcg_lit_int64(0);
    outC->_L186.infoFromPassing.linkedBGs[idx20].nid_bg = kcg_lit_int64(0);
    outC->_L186.infoFromPassing.linkedBGs[idx20].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L186.infoFromPassing.linkedBGs[idx20].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L186.infoFromPassing.linkedBGs[idx20].q_locacc = kcg_lit_int64(0);
  }
  outC->_L186.missed = kcg_true;
  outC->_L175 = kcg_lit_int64(0);
  outC->_L176 = kcg_lit_int64(0);
  outC->_L172 = kcg_lit_int64(0);
  outC->_L173 = kcg_true;
  outC->_L174 = kcg_true;
  outC->_L169.nominal = kcg_lit_int64(0);
  outC->_L169.d_min = kcg_lit_int64(0);
  outC->_L169.d_max = kcg_lit_int64(0);
  outC->_L167 = kcg_lit_int64(0);
  outC->_L166 = Q_SCALE_10_cm_scale;
  outC->_L165 = kcg_true;
  outC->_L164.valid = kcg_true;
  outC->_L164.q_dir = Q_DIR_Reverse;
  outC->_L164.q_scale = Q_SCALE_10_cm_scale;
  outC->_L164.d_rbctr = kcg_lit_int64(0);
  outC->_L164.nid_c = kcg_lit_int64(0);
  outC->_L164.nid_rbc = kcg_lit_int64(0);
  outC->_L164.nid_radio = kcg_lit_int64(0);
  outC->_L164.q_sleepsession = Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L163 = kcg_lit_int64(0);
  outC->_L162 = kcg_true;
  outC->_L131.valid = kcg_true;
  outC->_L131.source = msrc_undefined_Common_Types_Pkg;
  outC->_L131.nid_lrbg = kcg_lit_int64(0);
  outC->_L131.location.nominal = kcg_lit_int64(0);
  outC->_L131.location.d_min = kcg_lit_int64(0);
  outC->_L131.location.d_max = kcg_lit_int64(0);
  outC->_L131.contactLastKnownRBC = kcg_true;
  outC->_L131.useTheShortNumberStoredOnboard = kcg_true;
  outC->_L131.order.valid = kcg_true;
  outC->_L131.order.q_dir = Q_DIR_Reverse;
  outC->_L131.order.q_scale = Q_SCALE_10_cm_scale;
  outC->_L131.order.d_rbctr = kcg_lit_int64(0);
  outC->_L131.order.nid_c = kcg_lit_int64(0);
  outC->_L131.order.nid_rbc = kcg_lit_int64(0);
  outC->_L131.order.nid_radio = kcg_lit_int64(0);
  outC->_L131.order.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L130.valid = kcg_true;
  outC->_L130.source = msrc_undefined_Common_Types_Pkg;
  outC->_L130.radioMetadata.t_train_reference = kcg_true;
  outC->_L130.radioMetadata.nid_em = kcg_true;
  outC->_L130.radioMetadata.q_scale = kcg_true;
  outC->_L130.radioMetadata.d_sr = kcg_true;
  outC->_L130.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L130.radioMetadata.d_ref = kcg_true;
  outC->_L130.radioMetadata.q_dir = kcg_true;
  outC->_L130.radioMetadata.d_emergencystop = kcg_true;
  outC->_L130.radioMetadata.m_version = kcg_true;
  outC->_L130.BG_Common_Header.valid = kcg_true;
  outC->_L130.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L130.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L130.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L130.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L130.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L130.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L130.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L130.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L130.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L130.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L130.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L130.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L130.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L130.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L130.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L130.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L130.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L130.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L130.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L130.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L130.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L130.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L130.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L130.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L130.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L130.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L130.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L130.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L130.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L130.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L130.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L130.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L130.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L130.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L130.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L130.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L130.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L130.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L130.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L130.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L130.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L130.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx21 = 0; idx21 < 30; idx21++) {
    outC->_L130.packets.PacketHeaders[idx21].nid_packet = kcg_lit_int64(0);
    outC->_L130.packets.PacketHeaders[idx21].q_dir = Q_DIR_Reverse;
    outC->_L130.packets.PacketHeaders[idx21].valid = kcg_true;
    outC->_L130.packets.PacketHeaders[idx21].startAddress = kcg_lit_int64(0);
    outC->_L130.packets.PacketHeaders[idx21].endAddress = kcg_lit_int64(0);
  }
  for (idx22 = 0; idx22 < 500; idx22++) {
    outC->_L130.packets.PacketData[idx22] = kcg_lit_int64(0);
  }
  outC->_L130.sendingRBC.valid = kcg_true;
  outC->_L130.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L130.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L130.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L129.valid = kcg_true;
  outC->_L129.source = msrc_undefined_Common_Types_Pkg;
  outC->_L129.radioMetadata.t_train_reference = kcg_true;
  outC->_L129.radioMetadata.nid_em = kcg_true;
  outC->_L129.radioMetadata.q_scale = kcg_true;
  outC->_L129.radioMetadata.d_sr = kcg_true;
  outC->_L129.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L129.radioMetadata.d_ref = kcg_true;
  outC->_L129.radioMetadata.q_dir = kcg_true;
  outC->_L129.radioMetadata.d_emergencystop = kcg_true;
  outC->_L129.radioMetadata.m_version = kcg_true;
  outC->_L129.BG_Common_Header.valid = kcg_true;
  outC->_L129.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L129.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L129.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L129.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L129.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L129.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L129.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L129.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L129.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L129.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L129.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L129.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L129.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L129.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L129.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L129.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L129.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L129.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L129.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L129.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L129.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L129.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L129.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L129.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L129.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L129.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L129.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L129.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L129.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L129.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L129.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L129.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L129.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L129.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L129.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L129.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L129.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L129.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L129.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L129.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L129.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L129.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx23 = 0; idx23 < 30; idx23++) {
    outC->_L129.packets.PacketHeaders[idx23].nid_packet = kcg_lit_int64(0);
    outC->_L129.packets.PacketHeaders[idx23].q_dir = Q_DIR_Reverse;
    outC->_L129.packets.PacketHeaders[idx23].valid = kcg_true;
    outC->_L129.packets.PacketHeaders[idx23].startAddress = kcg_lit_int64(0);
    outC->_L129.packets.PacketHeaders[idx23].endAddress = kcg_lit_int64(0);
  }
  for (idx24 = 0; idx24 < 500; idx24++) {
    outC->_L129.packets.PacketData[idx24] = kcg_lit_int64(0);
  }
  outC->_L129.sendingRBC.valid = kcg_true;
  outC->_L129.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L129.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L129.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L128 = kcg_lit_int64(0);
  outC->_L127 = kcg_lit_int64(0);
  outC->_L126.valid = kcg_true;
  outC->_L126.source = msrc_undefined_Common_Types_Pkg;
  outC->_L126.radioMetadata.t_train_reference = kcg_true;
  outC->_L126.radioMetadata.nid_em = kcg_true;
  outC->_L126.radioMetadata.q_scale = kcg_true;
  outC->_L126.radioMetadata.d_sr = kcg_true;
  outC->_L126.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L126.radioMetadata.d_ref = kcg_true;
  outC->_L126.radioMetadata.q_dir = kcg_true;
  outC->_L126.radioMetadata.d_emergencystop = kcg_true;
  outC->_L126.radioMetadata.m_version = kcg_true;
  outC->_L126.BG_Common_Header.valid = kcg_true;
  outC->_L126.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L126.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L126.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L126.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L126.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L126.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L126.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L126.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L126.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L126.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L126.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L126.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L126.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L126.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L126.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L126.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L126.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L126.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L126.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L126.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L126.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L126.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L126.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L126.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L126.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L126.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L126.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L126.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L126.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L126.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L126.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L126.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L126.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L126.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L126.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L126.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L126.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L126.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L126.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L126.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L126.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L126.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx25 = 0; idx25 < 30; idx25++) {
    outC->_L126.packets.PacketHeaders[idx25].nid_packet = kcg_lit_int64(0);
    outC->_L126.packets.PacketHeaders[idx25].q_dir = Q_DIR_Reverse;
    outC->_L126.packets.PacketHeaders[idx25].valid = kcg_true;
    outC->_L126.packets.PacketHeaders[idx25].startAddress = kcg_lit_int64(0);
    outC->_L126.packets.PacketHeaders[idx25].endAddress = kcg_lit_int64(0);
  }
  for (idx26 = 0; idx26 < 500; idx26++) {
    outC->_L126.packets.PacketData[idx26] = kcg_lit_int64(0);
  }
  outC->_L126.sendingRBC.valid = kcg_true;
  outC->_L126.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L126.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L126.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L124.valid = kcg_true;
  outC->_L124.source = msrc_undefined_Common_Types_Pkg;
  outC->_L124.radioMetadata.t_train_reference = kcg_true;
  outC->_L124.radioMetadata.nid_em = kcg_true;
  outC->_L124.radioMetadata.q_scale = kcg_true;
  outC->_L124.radioMetadata.d_sr = kcg_true;
  outC->_L124.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L124.radioMetadata.d_ref = kcg_true;
  outC->_L124.radioMetadata.q_dir = kcg_true;
  outC->_L124.radioMetadata.d_emergencystop = kcg_true;
  outC->_L124.radioMetadata.m_version = kcg_true;
  outC->_L124.BG_Common_Header.valid = kcg_true;
  outC->_L124.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L124.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L124.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L124.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L124.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L124.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L124.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L124.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L124.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L124.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L124.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L124.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L124.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L124.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L124.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L124.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L124.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L124.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L124.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L124.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L124.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L124.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L124.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L124.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L124.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L124.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L124.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L124.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L124.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L124.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L124.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L124.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L124.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L124.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L124.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L124.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L124.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L124.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L124.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L124.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L124.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L124.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx27 = 0; idx27 < 30; idx27++) {
    outC->_L124.packets.PacketHeaders[idx27].nid_packet = kcg_lit_int64(0);
    outC->_L124.packets.PacketHeaders[idx27].q_dir = Q_DIR_Reverse;
    outC->_L124.packets.PacketHeaders[idx27].valid = kcg_true;
    outC->_L124.packets.PacketHeaders[idx27].startAddress = kcg_lit_int64(0);
    outC->_L124.packets.PacketHeaders[idx27].endAddress = kcg_lit_int64(0);
  }
  for (idx28 = 0; idx28 < 500; idx28++) {
    outC->_L124.packets.PacketData[idx28] = kcg_lit_int64(0);
  }
  outC->_L124.sendingRBC.valid = kcg_true;
  outC->_L124.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L124.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L124.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L123.valid = kcg_true;
  outC->_L123.source = msrc_undefined_Common_Types_Pkg;
  outC->_L123.radioMetadata.t_train_reference = kcg_true;
  outC->_L123.radioMetadata.nid_em = kcg_true;
  outC->_L123.radioMetadata.q_scale = kcg_true;
  outC->_L123.radioMetadata.d_sr = kcg_true;
  outC->_L123.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L123.radioMetadata.d_ref = kcg_true;
  outC->_L123.radioMetadata.q_dir = kcg_true;
  outC->_L123.radioMetadata.d_emergencystop = kcg_true;
  outC->_L123.radioMetadata.m_version = kcg_true;
  outC->_L123.BG_Common_Header.valid = kcg_true;
  outC->_L123.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L123.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L123.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L123.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L123.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L123.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L123.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L123.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L123.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L123.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L123.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L123.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L123.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L123.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L123.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L123.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L123.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L123.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L123.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L123.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L123.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L123.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L123.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L123.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L123.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L123.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L123.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L123.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L123.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L123.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L123.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L123.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L123.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L123.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L123.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L123.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L123.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L123.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L123.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L123.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L123.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L123.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx29 = 0; idx29 < 30; idx29++) {
    outC->_L123.packets.PacketHeaders[idx29].nid_packet = kcg_lit_int64(0);
    outC->_L123.packets.PacketHeaders[idx29].q_dir = Q_DIR_Reverse;
    outC->_L123.packets.PacketHeaders[idx29].valid = kcg_true;
    outC->_L123.packets.PacketHeaders[idx29].startAddress = kcg_lit_int64(0);
    outC->_L123.packets.PacketHeaders[idx29].endAddress = kcg_lit_int64(0);
  }
  for (idx30 = 0; idx30 < 500; idx30++) {
    outC->_L123.packets.PacketData[idx30] = kcg_lit_int64(0);
  }
  outC->_L123.sendingRBC.valid = kcg_true;
  outC->_L123.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L123.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L123.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L122.valid = kcg_true;
  outC->_L122.source = msrc_undefined_Common_Types_Pkg;
  outC->_L122.radioMetadata.t_train_reference = kcg_true;
  outC->_L122.radioMetadata.nid_em = kcg_true;
  outC->_L122.radioMetadata.q_scale = kcg_true;
  outC->_L122.radioMetadata.d_sr = kcg_true;
  outC->_L122.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L122.radioMetadata.d_ref = kcg_true;
  outC->_L122.radioMetadata.q_dir = kcg_true;
  outC->_L122.radioMetadata.d_emergencystop = kcg_true;
  outC->_L122.radioMetadata.m_version = kcg_true;
  outC->_L122.BG_Common_Header.valid = kcg_true;
  outC->_L122.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L122.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L122.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L122.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L122.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L122.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L122.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L122.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L122.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L122.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L122.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L122.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L122.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L122.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L122.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L122.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L122.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L122.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L122.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L122.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L122.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L122.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L122.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L122.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L122.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L122.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L122.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L122.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L122.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L122.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L122.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L122.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L122.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L122.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L122.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L122.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L122.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L122.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L122.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L122.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L122.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L122.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx31 = 0; idx31 < 30; idx31++) {
    outC->_L122.packets.PacketHeaders[idx31].nid_packet = kcg_lit_int64(0);
    outC->_L122.packets.PacketHeaders[idx31].q_dir = Q_DIR_Reverse;
    outC->_L122.packets.PacketHeaders[idx31].valid = kcg_true;
    outC->_L122.packets.PacketHeaders[idx31].startAddress = kcg_lit_int64(0);
    outC->_L122.packets.PacketHeaders[idx31].endAddress = kcg_lit_int64(0);
  }
  for (idx32 = 0; idx32 < 500; idx32++) {
    outC->_L122.packets.PacketData[idx32] = kcg_lit_int64(0);
  }
  outC->_L122.sendingRBC.valid = kcg_true;
  outC->_L122.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L122.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L122.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L119 = kcg_true;
  outC->_L90.valid = kcg_true;
  outC->_L90.timestamp = kcg_lit_int64(0);
  outC->_L90.trainPositionIsUnknown = kcg_true;
  outC->_L90.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L90.trainPosition.nominal = kcg_lit_int64(0);
  outC->_L90.trainPosition.d_min = kcg_lit_int64(0);
  outC->_L90.trainPosition.d_max = kcg_lit_int64(0);
  outC->_L90.estimatedFrontEndPosition = kcg_lit_int64(0);
  outC->_L90.minSafeFrontEndPosition = kcg_lit_int64(0);
  outC->_L90.maxSafeFrontEndPostion = kcg_lit_int64(0);
  outC->_L90.LRBG.valid = kcg_true;
  outC->_L90.LRBG.nid_c = kcg_lit_int64(0);
  outC->_L90.LRBG.nid_bg = kcg_lit_int64(0);
  outC->_L90.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L90.LRBG.location.nominal = kcg_lit_int64(0);
  outC->_L90.LRBG.location.d_min = kcg_lit_int64(0);
  outC->_L90.LRBG.location.d_max = kcg_lit_int64(0);
  outC->_L90.LRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L90.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L90.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L90.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L90.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L90.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L90.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L90.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L90.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L90.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L90.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L90.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L90.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L90.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L90.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L90.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L90.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L90.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L90.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L90.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L90.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L90.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L90.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L90.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L90.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L90.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L90.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L90.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L90.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L90.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L90.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L90.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L90.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L90.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L90.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L90.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L90.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L90.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L90.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L90.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L90.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L90.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L90.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L90.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L90.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L90.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L90.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L90.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L90.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L90.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx33 = 0; idx33 < 33; idx33++) {
    outC->_L90.LRBG.infoFromPassing.linkedBGs[idx33].valid = kcg_true;
    outC->_L90.LRBG.infoFromPassing.linkedBGs[idx33].nid_LRBG = kcg_lit_int64(0);
    outC->_L90.LRBG.infoFromPassing.linkedBGs[idx33].q_dir = Q_DIR_Reverse;
    outC->_L90.LRBG.infoFromPassing.linkedBGs[idx33].q_scale = Q_SCALE_10_cm_scale;
    outC->_L90.LRBG.infoFromPassing.linkedBGs[idx33].d_link = kcg_lit_int64(0);
    outC->_L90.LRBG.infoFromPassing.linkedBGs[idx33].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L90.LRBG.infoFromPassing.linkedBGs[idx33].nid_c = kcg_lit_int64(0);
    outC->_L90.LRBG.infoFromPassing.linkedBGs[idx33].nid_bg = kcg_lit_int64(0);
    outC->_L90.LRBG.infoFromPassing.linkedBGs[idx33].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L90.LRBG.infoFromPassing.linkedBGs[idx33].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L90.LRBG.infoFromPassing.linkedBGs[idx33].q_locacc = kcg_lit_int64(0);
  }
  outC->_L90.LRBG.missed = kcg_true;
  outC->_L90.prvLRBG.valid = kcg_true;
  outC->_L90.prvLRBG.nid_c = kcg_lit_int64(0);
  outC->_L90.prvLRBG.nid_bg = kcg_lit_int64(0);
  outC->_L90.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L90.prvLRBG.location.nominal = kcg_lit_int64(0);
  outC->_L90.prvLRBG.location.d_min = kcg_lit_int64(0);
  outC->_L90.prvLRBG.location.d_max = kcg_lit_int64(0);
  outC->_L90.prvLRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L90.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L90.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L90.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L90.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L90.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L90.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L90.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L90.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L90.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L90.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L90.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L90.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L90.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L90.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L90.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L90.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L90.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L90.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L90.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L90.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L90.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L90.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L90.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L90.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L90.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L90.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L90.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L90.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L90.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L90.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L90.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L90.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L90.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L90.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L90.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L90.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L90.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L90.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L90.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L90.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L90.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L90.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L90.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L90.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L90.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L90.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L90.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L90.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L90.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx34 = 0; idx34 < 33; idx34++) {
    outC->_L90.prvLRBG.infoFromPassing.linkedBGs[idx34].valid = kcg_true;
    outC->_L90.prvLRBG.infoFromPassing.linkedBGs[idx34].nid_LRBG = kcg_lit_int64(0);
    outC->_L90.prvLRBG.infoFromPassing.linkedBGs[idx34].q_dir = Q_DIR_Reverse;
    outC->_L90.prvLRBG.infoFromPassing.linkedBGs[idx34].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L90.prvLRBG.infoFromPassing.linkedBGs[idx34].d_link = kcg_lit_int64(0);
    outC->_L90.prvLRBG.infoFromPassing.linkedBGs[idx34].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L90.prvLRBG.infoFromPassing.linkedBGs[idx34].nid_c = kcg_lit_int64(0);
    outC->_L90.prvLRBG.infoFromPassing.linkedBGs[idx34].nid_bg = kcg_lit_int64(0);
    outC->_L90.prvLRBG.infoFromPassing.linkedBGs[idx34].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L90.prvLRBG.infoFromPassing.linkedBGs[idx34].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L90.prvLRBG.infoFromPassing.linkedBGs[idx34].q_locacc = kcg_lit_int64(0);
  }
  outC->_L90.prvLRBG.missed = kcg_true;
  outC->_L90.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L90.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L90.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L90.linkingIsUsedOnboard = kcg_true;
  outC->_L90.estimatedRearEndPosition = kcg_lit_int64(0);
  outC->_L90.minSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L90.maxSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L89.valid = kcg_true;
  outC->_L89.source = msrc_undefined_Common_Types_Pkg;
  outC->_L89.radioMetadata.t_train_reference = kcg_true;
  outC->_L89.radioMetadata.nid_em = kcg_true;
  outC->_L89.radioMetadata.q_scale = kcg_true;
  outC->_L89.radioMetadata.d_sr = kcg_true;
  outC->_L89.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L89.radioMetadata.d_ref = kcg_true;
  outC->_L89.radioMetadata.q_dir = kcg_true;
  outC->_L89.radioMetadata.d_emergencystop = kcg_true;
  outC->_L89.radioMetadata.m_version = kcg_true;
  outC->_L89.BG_Common_Header.valid = kcg_true;
  outC->_L89.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L89.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L89.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L89.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L89.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L89.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L89.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L89.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L89.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L89.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L89.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L89.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L89.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L89.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L89.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L89.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L89.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L89.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L89.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L89.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L89.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L89.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L89.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L89.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L89.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L89.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L89.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L89.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L89.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L89.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L89.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L89.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L89.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L89.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L89.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L89.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L89.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L89.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L89.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L89.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L89.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L89.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx35 = 0; idx35 < 30; idx35++) {
    outC->_L89.packets.PacketHeaders[idx35].nid_packet = kcg_lit_int64(0);
    outC->_L89.packets.PacketHeaders[idx35].q_dir = Q_DIR_Reverse;
    outC->_L89.packets.PacketHeaders[idx35].valid = kcg_true;
    outC->_L89.packets.PacketHeaders[idx35].startAddress = kcg_lit_int64(0);
    outC->_L89.packets.PacketHeaders[idx35].endAddress = kcg_lit_int64(0);
  }
  for (idx36 = 0; idx36 < 500; idx36++) {
    outC->_L89.packets.PacketData[idx36] = kcg_lit_int64(0);
  }
  outC->_L89.sendingRBC.valid = kcg_true;
  outC->_L89.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L89.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L89.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L77 = kcg_true;
  outC->_L79.valid = kcg_true;
  outC->_L79.source = msrc_undefined_Common_Types_Pkg;
  outC->_L79.radioMetadata.t_train_reference = kcg_true;
  outC->_L79.radioMetadata.nid_em = kcg_true;
  outC->_L79.radioMetadata.q_scale = kcg_true;
  outC->_L79.radioMetadata.d_sr = kcg_true;
  outC->_L79.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L79.radioMetadata.d_ref = kcg_true;
  outC->_L79.radioMetadata.q_dir = kcg_true;
  outC->_L79.radioMetadata.d_emergencystop = kcg_true;
  outC->_L79.radioMetadata.m_version = kcg_true;
  outC->_L79.BG_Common_Header.valid = kcg_true;
  outC->_L79.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L79.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L79.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L79.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L79.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L79.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L79.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L79.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L79.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L79.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L79.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L79.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L79.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L79.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L79.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L79.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L79.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L79.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L79.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L79.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L79.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L79.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L79.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L79.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L79.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L79.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L79.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L79.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L79.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L79.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L79.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L79.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L79.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L79.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L79.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L79.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L79.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L79.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L79.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L79.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L79.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L79.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx37 = 0; idx37 < 30; idx37++) {
    outC->_L79.packets.PacketHeaders[idx37].nid_packet = kcg_lit_int64(0);
    outC->_L79.packets.PacketHeaders[idx37].q_dir = Q_DIR_Reverse;
    outC->_L79.packets.PacketHeaders[idx37].valid = kcg_true;
    outC->_L79.packets.PacketHeaders[idx37].startAddress = kcg_lit_int64(0);
    outC->_L79.packets.PacketHeaders[idx37].endAddress = kcg_lit_int64(0);
  }
  for (idx38 = 0; idx38 < 500; idx38++) {
    outC->_L79.packets.PacketData[idx38] = kcg_lit_int64(0);
  }
  outC->_L79.sendingRBC.valid = kcg_true;
  outC->_L79.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L79.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L79.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L78.valid = kcg_true;
  outC->_L78.source = msrc_undefined_Common_Types_Pkg;
  outC->_L78.radioMetadata.t_train_reference = kcg_true;
  outC->_L78.radioMetadata.nid_em = kcg_true;
  outC->_L78.radioMetadata.q_scale = kcg_true;
  outC->_L78.radioMetadata.d_sr = kcg_true;
  outC->_L78.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L78.radioMetadata.d_ref = kcg_true;
  outC->_L78.radioMetadata.q_dir = kcg_true;
  outC->_L78.radioMetadata.d_emergencystop = kcg_true;
  outC->_L78.radioMetadata.m_version = kcg_true;
  outC->_L78.BG_Common_Header.valid = kcg_true;
  outC->_L78.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L78.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L78.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L78.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L78.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L78.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L78.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L78.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L78.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L78.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L78.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L78.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L78.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L78.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L78.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L78.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L78.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L78.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L78.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L78.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L78.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L78.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L78.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L78.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L78.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L78.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L78.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L78.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L78.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L78.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L78.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L78.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L78.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L78.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L78.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L78.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L78.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L78.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L78.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L78.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L78.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L78.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx39 = 0; idx39 < 30; idx39++) {
    outC->_L78.packets.PacketHeaders[idx39].nid_packet = kcg_lit_int64(0);
    outC->_L78.packets.PacketHeaders[idx39].q_dir = Q_DIR_Reverse;
    outC->_L78.packets.PacketHeaders[idx39].valid = kcg_true;
    outC->_L78.packets.PacketHeaders[idx39].startAddress = kcg_lit_int64(0);
    outC->_L78.packets.PacketHeaders[idx39].endAddress = kcg_lit_int64(0);
  }
  for (idx40 = 0; idx40 < 500; idx40++) {
    outC->_L78.packets.PacketData[idx40] = kcg_lit_int64(0);
  }
  outC->_L78.sendingRBC.valid = kcg_true;
  outC->_L78.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L78.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L78.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L81 = kcg_true;
  outC->_L72.valid = kcg_true;
  outC->_L72.source = msrc_undefined_Common_Types_Pkg;
  outC->_L72.radioMetadata.t_train_reference = kcg_true;
  outC->_L72.radioMetadata.nid_em = kcg_true;
  outC->_L72.radioMetadata.q_scale = kcg_true;
  outC->_L72.radioMetadata.d_sr = kcg_true;
  outC->_L72.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L72.radioMetadata.d_ref = kcg_true;
  outC->_L72.radioMetadata.q_dir = kcg_true;
  outC->_L72.radioMetadata.d_emergencystop = kcg_true;
  outC->_L72.radioMetadata.m_version = kcg_true;
  outC->_L72.BG_Common_Header.valid = kcg_true;
  outC->_L72.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L72.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L72.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L72.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L72.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L72.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L72.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L72.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L72.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L72.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L72.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L72.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L72.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L72.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L72.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L72.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L72.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L72.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L72.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L72.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L72.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L72.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L72.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L72.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L72.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L72.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L72.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L72.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L72.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L72.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L72.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L72.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L72.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L72.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L72.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L72.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L72.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L72.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L72.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L72.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L72.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L72.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx41 = 0; idx41 < 30; idx41++) {
    outC->_L72.packets.PacketHeaders[idx41].nid_packet = kcg_lit_int64(0);
    outC->_L72.packets.PacketHeaders[idx41].q_dir = Q_DIR_Reverse;
    outC->_L72.packets.PacketHeaders[idx41].valid = kcg_true;
    outC->_L72.packets.PacketHeaders[idx41].startAddress = kcg_lit_int64(0);
    outC->_L72.packets.PacketHeaders[idx41].endAddress = kcg_lit_int64(0);
  }
  for (idx42 = 0; idx42 < 500; idx42++) {
    outC->_L72.packets.PacketData[idx42] = kcg_lit_int64(0);
  }
  outC->_L72.sendingRBC.valid = kcg_true;
  outC->_L72.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L72.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L72.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L53.valid = kcg_true;
  outC->_L53.source = msrc_undefined_Common_Types_Pkg;
  outC->_L53.radioMetadata.t_train_reference = kcg_true;
  outC->_L53.radioMetadata.nid_em = kcg_true;
  outC->_L53.radioMetadata.q_scale = kcg_true;
  outC->_L53.radioMetadata.d_sr = kcg_true;
  outC->_L53.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L53.radioMetadata.d_ref = kcg_true;
  outC->_L53.radioMetadata.q_dir = kcg_true;
  outC->_L53.radioMetadata.d_emergencystop = kcg_true;
  outC->_L53.radioMetadata.m_version = kcg_true;
  outC->_L53.BG_Common_Header.valid = kcg_true;
  outC->_L53.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L53.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L53.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L53.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L53.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L53.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L53.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L53.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L53.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L53.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L53.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L53.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L53.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L53.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L53.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L53.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L53.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L53.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L53.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L53.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L53.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L53.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L53.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L53.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L53.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L53.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L53.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L53.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L53.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L53.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L53.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L53.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L53.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L53.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L53.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L53.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L53.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L53.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L53.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L53.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L53.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L53.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx43 = 0; idx43 < 30; idx43++) {
    outC->_L53.packets.PacketHeaders[idx43].nid_packet = kcg_lit_int64(0);
    outC->_L53.packets.PacketHeaders[idx43].q_dir = Q_DIR_Reverse;
    outC->_L53.packets.PacketHeaders[idx43].valid = kcg_true;
    outC->_L53.packets.PacketHeaders[idx43].startAddress = kcg_lit_int64(0);
    outC->_L53.packets.PacketHeaders[idx43].endAddress = kcg_lit_int64(0);
  }
  for (idx44 = 0; idx44 < 500; idx44++) {
    outC->_L53.packets.PacketData[idx44] = kcg_lit_int64(0);
  }
  outC->_L53.sendingRBC.valid = kcg_true;
  outC->_L53.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L53.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L53.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L54.valid = kcg_true;
  outC->_L54.source = msrc_undefined_Common_Types_Pkg;
  outC->_L54.nid_lrbg = kcg_lit_int64(0);
  outC->_L54.location.nominal = kcg_lit_int64(0);
  outC->_L54.location.d_min = kcg_lit_int64(0);
  outC->_L54.location.d_max = kcg_lit_int64(0);
  outC->_L54.contactLastKnownRBC = kcg_true;
  outC->_L54.useTheShortNumberStoredOnboard = kcg_true;
  outC->_L54.order.valid = kcg_true;
  outC->_L54.order.q_dir = Q_DIR_Reverse;
  outC->_L54.order.q_scale = Q_SCALE_10_cm_scale;
  outC->_L54.order.d_rbctr = kcg_lit_int64(0);
  outC->_L54.order.nid_c = kcg_lit_int64(0);
  outC->_L54.order.nid_rbc = kcg_lit_int64(0);
  outC->_L54.order.nid_radio = kcg_lit_int64(0);
  outC->_L54.order.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L55.valid = kcg_true;
  outC->_L55.source = msrc_undefined_Common_Types_Pkg;
  outC->_L55.radioMetadata.t_train_reference = kcg_true;
  outC->_L55.radioMetadata.nid_em = kcg_true;
  outC->_L55.radioMetadata.q_scale = kcg_true;
  outC->_L55.radioMetadata.d_sr = kcg_true;
  outC->_L55.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L55.radioMetadata.d_ref = kcg_true;
  outC->_L55.radioMetadata.q_dir = kcg_true;
  outC->_L55.radioMetadata.d_emergencystop = kcg_true;
  outC->_L55.radioMetadata.m_version = kcg_true;
  outC->_L55.BG_Common_Header.valid = kcg_true;
  outC->_L55.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L55.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L55.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L55.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L55.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L55.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L55.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L55.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L55.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L55.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L55.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L55.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L55.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L55.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L55.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L55.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L55.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L55.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L55.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L55.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L55.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L55.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L55.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L55.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L55.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L55.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L55.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L55.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L55.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L55.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L55.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L55.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L55.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L55.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L55.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L55.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L55.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L55.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L55.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L55.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L55.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L55.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx45 = 0; idx45 < 30; idx45++) {
    outC->_L55.packets.PacketHeaders[idx45].nid_packet = kcg_lit_int64(0);
    outC->_L55.packets.PacketHeaders[idx45].q_dir = Q_DIR_Reverse;
    outC->_L55.packets.PacketHeaders[idx45].valid = kcg_true;
    outC->_L55.packets.PacketHeaders[idx45].startAddress = kcg_lit_int64(0);
    outC->_L55.packets.PacketHeaders[idx45].endAddress = kcg_lit_int64(0);
  }
  for (idx46 = 0; idx46 < 500; idx46++) {
    outC->_L55.packets.PacketData[idx46] = kcg_lit_int64(0);
  }
  outC->_L55.sendingRBC.valid = kcg_true;
  outC->_L55.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L55.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L55.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L50 = kcg_true;
  outC->_L49 = kcg_true;
  outC->_L44.registration.valid = kcg_true;
  outC->_L44.registration.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L44.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L44.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L44.registration.nid_mn = kcg_lit_int64(0);
  outC->_L44.connection.valid = kcg_true;
  outC->_L44.connection.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L44.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L44.connection.nid_radio = kcg_lit_int64(0);
  outC->_L44.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L44.connection.connectionLost = kcg_true;
  outC->_L44.connection.isInRadioHole = kcg_true;
  outC->_L44.session.valid = kcg_true;
  outC->_L44.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L44.session.nid_c = kcg_lit_int64(0);
  outC->_L44.session.nid_rbc = kcg_lit_int64(0);
  outC->_L44.session.nid_radio = kcg_lit_int64(0);
  outC->_L45.registration.valid = kcg_true;
  outC->_L45.registration.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L45.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L45.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L45.registration.nid_mn = kcg_lit_int64(0);
  outC->_L45.connection.valid = kcg_true;
  outC->_L45.connection.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L45.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L45.connection.nid_radio = kcg_lit_int64(0);
  outC->_L45.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L45.connection.connectionLost = kcg_true;
  outC->_L45.connection.isInRadioHole = kcg_true;
  outC->_L45.session.valid = kcg_true;
  outC->_L45.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L45.session.nid_c = kcg_lit_int64(0);
  outC->_L45.session.nid_rbc = kcg_lit_int64(0);
  outC->_L45.session.nid_radio = kcg_lit_int64(0);
  outC->_L43.registration.valid = kcg_true;
  outC->_L43.registration.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L43.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L43.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L43.registration.nid_mn = kcg_lit_int64(0);
  outC->_L43.connection.valid = kcg_true;
  outC->_L43.connection.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L43.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L43.connection.nid_radio = kcg_lit_int64(0);
  outC->_L43.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L43.connection.connectionLost = kcg_true;
  outC->_L43.connection.isInRadioHole = kcg_true;
  outC->_L43.session.valid = kcg_true;
  outC->_L43.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L43.session.nid_c = kcg_lit_int64(0);
  outC->_L43.session.nid_rbc = kcg_lit_int64(0);
  outC->_L43.session.nid_radio = kcg_lit_int64(0);
  outC->_L42.registration.valid = kcg_true;
  outC->_L42.registration.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L42.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L42.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L42.registration.nid_mn = kcg_lit_int64(0);
  outC->_L42.connection.valid = kcg_true;
  outC->_L42.connection.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L42.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L42.connection.nid_radio = kcg_lit_int64(0);
  outC->_L42.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L42.connection.connectionLost = kcg_true;
  outC->_L42.connection.isInRadioHole = kcg_true;
  outC->_L42.session.valid = kcg_true;
  outC->_L42.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L42.session.nid_c = kcg_lit_int64(0);
  outC->_L42.session.nid_rbc = kcg_lit_int64(0);
  outC->_L42.session.nid_radio = kcg_lit_int64(0);
  outC->_L41 = M_MODE_Full_Supervision;
  outC->_L35.valid = kcg_true;
  outC->_L35.source = msrc_undefined_Common_Types_Pkg;
  outC->_L35.radioMetadata.t_train_reference = kcg_true;
  outC->_L35.radioMetadata.nid_em = kcg_true;
  outC->_L35.radioMetadata.q_scale = kcg_true;
  outC->_L35.radioMetadata.d_sr = kcg_true;
  outC->_L35.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L35.radioMetadata.d_ref = kcg_true;
  outC->_L35.radioMetadata.q_dir = kcg_true;
  outC->_L35.radioMetadata.d_emergencystop = kcg_true;
  outC->_L35.radioMetadata.m_version = kcg_true;
  outC->_L35.BG_Common_Header.valid = kcg_true;
  outC->_L35.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L35.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L35.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L35.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L35.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L35.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L35.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L35.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L35.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L35.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L35.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L35.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L35.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L35.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L35.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L35.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L35.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L35.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L35.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L35.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L35.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L35.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L35.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L35.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L35.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L35.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L35.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L35.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L35.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L35.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L35.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L35.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L35.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L35.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L35.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L35.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L35.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L35.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L35.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L35.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L35.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L35.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx47 = 0; idx47 < 30; idx47++) {
    outC->_L35.packets.PacketHeaders[idx47].nid_packet = kcg_lit_int64(0);
    outC->_L35.packets.PacketHeaders[idx47].q_dir = Q_DIR_Reverse;
    outC->_L35.packets.PacketHeaders[idx47].valid = kcg_true;
    outC->_L35.packets.PacketHeaders[idx47].startAddress = kcg_lit_int64(0);
    outC->_L35.packets.PacketHeaders[idx47].endAddress = kcg_lit_int64(0);
  }
  for (idx48 = 0; idx48 < 500; idx48++) {
    outC->_L35.packets.PacketData[idx48] = kcg_lit_int64(0);
  }
  outC->_L35.sendingRBC.valid = kcg_true;
  outC->_L35.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L35.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L35.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L36.valid = kcg_true;
  outC->_L36.source = msrc_undefined_Common_Types_Pkg;
  outC->_L36.radioMetadata.t_train_reference = kcg_true;
  outC->_L36.radioMetadata.nid_em = kcg_true;
  outC->_L36.radioMetadata.q_scale = kcg_true;
  outC->_L36.radioMetadata.d_sr = kcg_true;
  outC->_L36.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L36.radioMetadata.d_ref = kcg_true;
  outC->_L36.radioMetadata.q_dir = kcg_true;
  outC->_L36.radioMetadata.d_emergencystop = kcg_true;
  outC->_L36.radioMetadata.m_version = kcg_true;
  outC->_L36.BG_Common_Header.valid = kcg_true;
  outC->_L36.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L36.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L36.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L36.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L36.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L36.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L36.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L36.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L36.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L36.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L36.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L36.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L36.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L36.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L36.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L36.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L36.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L36.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L36.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L36.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L36.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L36.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L36.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L36.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L36.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L36.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L36.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L36.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L36.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L36.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L36.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L36.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L36.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L36.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L36.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L36.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L36.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L36.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L36.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L36.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L36.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L36.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx49 = 0; idx49 < 30; idx49++) {
    outC->_L36.packets.PacketHeaders[idx49].nid_packet = kcg_lit_int64(0);
    outC->_L36.packets.PacketHeaders[idx49].q_dir = Q_DIR_Reverse;
    outC->_L36.packets.PacketHeaders[idx49].valid = kcg_true;
    outC->_L36.packets.PacketHeaders[idx49].startAddress = kcg_lit_int64(0);
    outC->_L36.packets.PacketHeaders[idx49].endAddress = kcg_lit_int64(0);
  }
  for (idx50 = 0; idx50 < 500; idx50++) {
    outC->_L36.packets.PacketData[idx50] = kcg_lit_int64(0);
  }
  outC->_L36.sendingRBC.valid = kcg_true;
  outC->_L36.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L36.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L36.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L37.valid = kcg_true;
  outC->_L37.source = msrc_undefined_Common_Types_Pkg;
  outC->_L37.radioMetadata.t_train_reference = kcg_true;
  outC->_L37.radioMetadata.nid_em = kcg_true;
  outC->_L37.radioMetadata.q_scale = kcg_true;
  outC->_L37.radioMetadata.d_sr = kcg_true;
  outC->_L37.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L37.radioMetadata.d_ref = kcg_true;
  outC->_L37.radioMetadata.q_dir = kcg_true;
  outC->_L37.radioMetadata.d_emergencystop = kcg_true;
  outC->_L37.radioMetadata.m_version = kcg_true;
  outC->_L37.BG_Common_Header.valid = kcg_true;
  outC->_L37.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L37.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L37.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L37.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L37.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L37.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L37.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L37.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L37.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L37.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L37.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L37.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L37.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L37.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L37.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L37.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L37.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L37.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L37.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L37.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L37.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L37.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L37.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L37.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L37.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L37.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L37.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L37.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L37.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L37.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L37.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L37.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L37.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L37.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L37.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L37.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L37.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L37.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L37.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L37.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L37.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L37.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx51 = 0; idx51 < 30; idx51++) {
    outC->_L37.packets.PacketHeaders[idx51].nid_packet = kcg_lit_int64(0);
    outC->_L37.packets.PacketHeaders[idx51].q_dir = Q_DIR_Reverse;
    outC->_L37.packets.PacketHeaders[idx51].valid = kcg_true;
    outC->_L37.packets.PacketHeaders[idx51].startAddress = kcg_lit_int64(0);
    outC->_L37.packets.PacketHeaders[idx51].endAddress = kcg_lit_int64(0);
  }
  for (idx52 = 0; idx52 < 500; idx52++) {
    outC->_L37.packets.PacketData[idx52] = kcg_lit_int64(0);
  }
  outC->_L37.sendingRBC.valid = kcg_true;
  outC->_L37.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L37.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L37.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L38.valid = kcg_true;
  outC->_L38.source = msrc_undefined_Common_Types_Pkg;
  outC->_L38.radioMetadata.t_train_reference = kcg_true;
  outC->_L38.radioMetadata.nid_em = kcg_true;
  outC->_L38.radioMetadata.q_scale = kcg_true;
  outC->_L38.radioMetadata.d_sr = kcg_true;
  outC->_L38.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L38.radioMetadata.d_ref = kcg_true;
  outC->_L38.radioMetadata.q_dir = kcg_true;
  outC->_L38.radioMetadata.d_emergencystop = kcg_true;
  outC->_L38.radioMetadata.m_version = kcg_true;
  outC->_L38.BG_Common_Header.valid = kcg_true;
  outC->_L38.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L38.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L38.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L38.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L38.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L38.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L38.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L38.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L38.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L38.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L38.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L38.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L38.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L38.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L38.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L38.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L38.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L38.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L38.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L38.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L38.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L38.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L38.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L38.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L38.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L38.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L38.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L38.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L38.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L38.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L38.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L38.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L38.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L38.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L38.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L38.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L38.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L38.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L38.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L38.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L38.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L38.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx53 = 0; idx53 < 30; idx53++) {
    outC->_L38.packets.PacketHeaders[idx53].nid_packet = kcg_lit_int64(0);
    outC->_L38.packets.PacketHeaders[idx53].q_dir = Q_DIR_Reverse;
    outC->_L38.packets.PacketHeaders[idx53].valid = kcg_true;
    outC->_L38.packets.PacketHeaders[idx53].startAddress = kcg_lit_int64(0);
    outC->_L38.packets.PacketHeaders[idx53].endAddress = kcg_lit_int64(0);
  }
  for (idx54 = 0; idx54 < 500; idx54++) {
    outC->_L38.packets.PacketData[idx54] = kcg_lit_int64(0);
  }
  outC->_L38.sendingRBC.valid = kcg_true;
  outC->_L38.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L38.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L38.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L14 = kcg_true;
  outC->_L1.valid = kcg_true;
  outC->_L1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L1.radioMetadata.t_train_reference = kcg_true;
  outC->_L1.radioMetadata.nid_em = kcg_true;
  outC->_L1.radioMetadata.q_scale = kcg_true;
  outC->_L1.radioMetadata.d_sr = kcg_true;
  outC->_L1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L1.radioMetadata.d_ref = kcg_true;
  outC->_L1.radioMetadata.q_dir = kcg_true;
  outC->_L1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L1.radioMetadata.m_version = kcg_true;
  outC->_L1.BG_Common_Header.valid = kcg_true;
  outC->_L1.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L1.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L1.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L1.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L1.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L1.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L1.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L1.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L1.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx55 = 0; idx55 < 30; idx55++) {
    outC->_L1.packets.PacketHeaders[idx55].nid_packet = kcg_lit_int64(0);
    outC->_L1.packets.PacketHeaders[idx55].q_dir = Q_DIR_Reverse;
    outC->_L1.packets.PacketHeaders[idx55].valid = kcg_true;
    outC->_L1.packets.PacketHeaders[idx55].startAddress = kcg_lit_int64(0);
    outC->_L1.packets.PacketHeaders[idx55].endAddress = kcg_lit_int64(0);
  }
  for (idx56 = 0; idx56 < 500; idx56++) {
    outC->_L1.packets.PacketData[idx56] = kcg_lit_int64(0);
  }
  outC->_L1.sendingRBC.valid = kcg_true;
  outC->_L1.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L1.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L1.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L2.valid = kcg_true;
  outC->_L2.source = msrc_undefined_Common_Types_Pkg;
  outC->_L2.radioMetadata.t_train_reference = kcg_true;
  outC->_L2.radioMetadata.nid_em = kcg_true;
  outC->_L2.radioMetadata.q_scale = kcg_true;
  outC->_L2.radioMetadata.d_sr = kcg_true;
  outC->_L2.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L2.radioMetadata.d_ref = kcg_true;
  outC->_L2.radioMetadata.q_dir = kcg_true;
  outC->_L2.radioMetadata.d_emergencystop = kcg_true;
  outC->_L2.radioMetadata.m_version = kcg_true;
  outC->_L2.BG_Common_Header.valid = kcg_true;
  outC->_L2.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L2.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L2.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L2.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L2.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L2.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L2.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L2.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L2.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L2.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L2.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L2.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L2.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L2.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L2.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L2.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L2.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L2.BG_Common_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L2.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L2.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L2.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L2.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L2.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L2.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L2.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L2.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L2.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L2.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L2.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L2.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L2.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L2.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L2.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L2.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L2.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L2.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L2.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L2.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L2.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L2.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx57 = 0; idx57 < 30; idx57++) {
    outC->_L2.packets.PacketHeaders[idx57].nid_packet = kcg_lit_int64(0);
    outC->_L2.packets.PacketHeaders[idx57].q_dir = Q_DIR_Reverse;
    outC->_L2.packets.PacketHeaders[idx57].valid = kcg_true;
    outC->_L2.packets.PacketHeaders[idx57].startAddress = kcg_lit_int64(0);
    outC->_L2.packets.PacketHeaders[idx57].endAddress = kcg_lit_int64(0);
  }
  for (idx58 = 0; idx58 < 500; idx58++) {
    outC->_L2.packets.PacketData[idx58] = kcg_lit_int64(0);
  }
  outC->_L2.sendingRBC.valid = kcg_true;
  outC->_L2.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L2.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L2.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L3 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L8 = kcg_true;
  outC->minSafeReadEndPassesHandOverLocation = kcg_true;
  outC->maxSafeFrontEndPassesHandOverLocation = kcg_true;
  outC->locationOfRBCTransition.nominal = kcg_lit_int64(0);
  outC->locationOfRBCTransition.d_min = kcg_lit_int64(0);
  outC->locationOfRBCTransition.d_max = kcg_lit_int64(0);
  outC->p131_RBCTransitionOrder_dec.valid = kcg_true;
  outC->p131_RBCTransitionOrder_dec.source = msrc_undefined_Common_Types_Pkg;
  outC->p131_RBCTransitionOrder_dec.nid_lrbg = kcg_lit_int64(0);
  outC->p131_RBCTransitionOrder_dec.location.nominal = kcg_lit_int64(0);
  outC->p131_RBCTransitionOrder_dec.location.d_min = kcg_lit_int64(0);
  outC->p131_RBCTransitionOrder_dec.location.d_max = kcg_lit_int64(0);
  outC->p131_RBCTransitionOrder_dec.contactLastKnownRBC = kcg_true;
  outC->p131_RBCTransitionOrder_dec.useTheShortNumberStoredOnboard = kcg_true;
  outC->p131_RBCTransitionOrder_dec.order.valid = kcg_true;
  outC->p131_RBCTransitionOrder_dec.order.q_dir = Q_DIR_Reverse;
  outC->p131_RBCTransitionOrder_dec.order.q_scale = Q_SCALE_10_cm_scale;
  outC->p131_RBCTransitionOrder_dec.order.d_rbctr = kcg_lit_int64(0);
  outC->p131_RBCTransitionOrder_dec.order.nid_c = kcg_lit_int64(0);
  outC->p131_RBCTransitionOrder_dec.order.nid_rbc = kcg_lit_int64(0);
  outC->p131_RBCTransitionOrder_dec.order.nid_radio = kcg_lit_int64(0);
  outC->p131_RBCTransitionOrder_dec.order.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->dataFromBalise.valid = kcg_true;
  outC->dataFromBalise.source = msrc_undefined_Common_Types_Pkg;
  outC->dataFromBalise.radioMetadata.t_train_reference = kcg_true;
  outC->dataFromBalise.radioMetadata.nid_em = kcg_true;
  outC->dataFromBalise.radioMetadata.q_scale = kcg_true;
  outC->dataFromBalise.radioMetadata.d_sr = kcg_true;
  outC->dataFromBalise.radioMetadata.t_sh_rqst = kcg_true;
  outC->dataFromBalise.radioMetadata.d_ref = kcg_true;
  outC->dataFromBalise.radioMetadata.q_dir = kcg_true;
  outC->dataFromBalise.radioMetadata.d_emergencystop = kcg_true;
  outC->dataFromBalise.radioMetadata.m_version = kcg_true;
  outC->dataFromBalise.BG_Common_Header.valid = kcg_true;
  outC->dataFromBalise.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->dataFromBalise.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->dataFromBalise.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->dataFromBalise.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->dataFromBalise.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->dataFromBalise.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->dataFromBalise.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->dataFromBalise.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->dataFromBalise.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->dataFromBalise.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->dataFromBalise.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->dataFromBalise.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->dataFromBalise.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->dataFromBalise.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->dataFromBalise.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->dataFromBalise.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->dataFromBalise.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->dataFromBalise.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(
      0);
  outC->dataFromBalise.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->dataFromBalise.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->dataFromBalise.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->dataFromBalise.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->dataFromBalise.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->dataFromBalise.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->dataFromBalise.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->dataFromBalise.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->dataFromBalise.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->dataFromBalise.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->dataFromBalise.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->dataFromBalise.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->dataFromBalise.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->dataFromBalise.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->dataFromBalise.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->dataFromBalise.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->dataFromBalise.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->dataFromBalise.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->dataFromBalise.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->dataFromBalise.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->dataFromBalise.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->dataFromBalise.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->dataFromBalise.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->dataFromBalise.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx59 = 0; idx59 < 30; idx59++) {
    outC->dataFromBalise.packets.PacketHeaders[idx59].nid_packet = kcg_lit_int64(0);
    outC->dataFromBalise.packets.PacketHeaders[idx59].q_dir = Q_DIR_Reverse;
    outC->dataFromBalise.packets.PacketHeaders[idx59].valid = kcg_true;
    outC->dataFromBalise.packets.PacketHeaders[idx59].startAddress =
      kcg_lit_int64(0);
    outC->dataFromBalise.packets.PacketHeaders[idx59].endAddress = kcg_lit_int64(0);
  }
  for (idx60 = 0; idx60 < 500; idx60++) {
    outC->dataFromBalise.packets.PacketData[idx60] = kcg_lit_int64(0);
  }
  outC->dataFromBalise.sendingRBC.valid = kcg_true;
  outC->dataFromBalise.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->dataFromBalise.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->dataFromBalise.sendingRBC.device_id = kcg_lit_int64(0);
  outC->dataFromTrack.valid = kcg_true;
  outC->dataFromTrack.source = msrc_undefined_Common_Types_Pkg;
  outC->dataFromTrack.radioMetadata.t_train_reference = kcg_true;
  outC->dataFromTrack.radioMetadata.nid_em = kcg_true;
  outC->dataFromTrack.radioMetadata.q_scale = kcg_true;
  outC->dataFromTrack.radioMetadata.d_sr = kcg_true;
  outC->dataFromTrack.radioMetadata.t_sh_rqst = kcg_true;
  outC->dataFromTrack.radioMetadata.d_ref = kcg_true;
  outC->dataFromTrack.radioMetadata.q_dir = kcg_true;
  outC->dataFromTrack.radioMetadata.d_emergencystop = kcg_true;
  outC->dataFromTrack.radioMetadata.m_version = kcg_true;
  outC->dataFromTrack.BG_Common_Header.valid = kcg_true;
  outC->dataFromTrack.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->dataFromTrack.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->dataFromTrack.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->dataFromTrack.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->dataFromTrack.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->dataFromTrack.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->dataFromTrack.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->dataFromTrack.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->dataFromTrack.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->dataFromTrack.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->dataFromTrack.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(
      0);
  outC->dataFromTrack.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->dataFromTrack.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->dataFromTrack.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->dataFromTrack.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->dataFromTrack.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(
      0);
  outC->dataFromTrack.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(
      0);
  outC->dataFromTrack.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->dataFromTrack.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->dataFromTrack.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->dataFromTrack.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->dataFromTrack.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->dataFromTrack.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->dataFromTrack.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->dataFromTrack.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->dataFromTrack.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->dataFromTrack.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->dataFromTrack.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->dataFromTrack.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->dataFromTrack.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->dataFromTrack.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->dataFromTrack.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->dataFromTrack.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->dataFromTrack.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->dataFromTrack.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->dataFromTrack.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->dataFromTrack.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->dataFromTrack.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->dataFromTrack.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->dataFromTrack.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->dataFromTrack.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->dataFromTrack.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx61 = 0; idx61 < 30; idx61++) {
    outC->dataFromTrack.packets.PacketHeaders[idx61].nid_packet = kcg_lit_int64(0);
    outC->dataFromTrack.packets.PacketHeaders[idx61].q_dir = Q_DIR_Reverse;
    outC->dataFromTrack.packets.PacketHeaders[idx61].valid = kcg_true;
    outC->dataFromTrack.packets.PacketHeaders[idx61].startAddress =
      kcg_lit_int64(0);
    outC->dataFromTrack.packets.PacketHeaders[idx61].endAddress = kcg_lit_int64(0);
  }
  for (idx62 = 0; idx62 < 500; idx62++) {
    outC->dataFromTrack.packets.PacketData[idx62] = kcg_lit_int64(0);
  }
  outC->dataFromTrack.sendingRBC.valid = kcg_true;
  outC->dataFromTrack.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->dataFromTrack.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->dataFromTrack.sendingRBC.device_id = kcg_lit_int64(0);
  outC->dataFromAcceptingMobile.valid = kcg_true;
  outC->dataFromAcceptingMobile.source = msrc_undefined_Common_Types_Pkg;
  outC->dataFromAcceptingMobile.radioMetadata.t_train_reference = kcg_true;
  outC->dataFromAcceptingMobile.radioMetadata.nid_em = kcg_true;
  outC->dataFromAcceptingMobile.radioMetadata.q_scale = kcg_true;
  outC->dataFromAcceptingMobile.radioMetadata.d_sr = kcg_true;
  outC->dataFromAcceptingMobile.radioMetadata.t_sh_rqst = kcg_true;
  outC->dataFromAcceptingMobile.radioMetadata.d_ref = kcg_true;
  outC->dataFromAcceptingMobile.radioMetadata.q_dir = kcg_true;
  outC->dataFromAcceptingMobile.radioMetadata.d_emergencystop = kcg_true;
  outC->dataFromAcceptingMobile.radioMetadata.m_version = kcg_true;
  outC->dataFromAcceptingMobile.BG_Common_Header.valid = kcg_true;
  outC->dataFromAcceptingMobile.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->dataFromAcceptingMobile.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->dataFromAcceptingMobile.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->dataFromAcceptingMobile.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->dataFromAcceptingMobile.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->dataFromAcceptingMobile.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->dataFromAcceptingMobile.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->dataFromAcceptingMobile.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->dataFromAcceptingMobile.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->dataFromAcceptingMobile.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->dataFromAcceptingMobile.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->dataFromAcceptingMobile.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->dataFromAcceptingMobile.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->dataFromAcceptingMobile.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->dataFromAcceptingMobile.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->dataFromAcceptingMobile.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->dataFromAcceptingMobile.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->dataFromAcceptingMobile.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->dataFromAcceptingMobile.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->dataFromAcceptingMobile.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->dataFromAcceptingMobile.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->dataFromAcceptingMobile.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->dataFromAcceptingMobile.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->dataFromAcceptingMobile.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->dataFromAcceptingMobile.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->dataFromAcceptingMobile.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->dataFromAcceptingMobile.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->dataFromAcceptingMobile.Radio_Common_Header.radioDevice = kcg_lit_int64(
      0);
  outC->dataFromAcceptingMobile.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->dataFromAcceptingMobile.Radio_Common_Header.nid_message = kcg_lit_int64(
      0);
  outC->dataFromAcceptingMobile.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->dataFromAcceptingMobile.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->dataFromAcceptingMobile.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->dataFromAcceptingMobile.Radio_Common_Header.t_train_reference =
    kcg_lit_int64(0);
  outC->dataFromAcceptingMobile.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->dataFromAcceptingMobile.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->dataFromAcceptingMobile.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->dataFromAcceptingMobile.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->dataFromAcceptingMobile.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->dataFromAcceptingMobile.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->dataFromAcceptingMobile.Radio_Common_Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->dataFromAcceptingMobile.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx63 = 0; idx63 < 30; idx63++) {
    outC->dataFromAcceptingMobile.packets.PacketHeaders[idx63].nid_packet =
      kcg_lit_int64(0);
    outC->dataFromAcceptingMobile.packets.PacketHeaders[idx63].q_dir =
      Q_DIR_Reverse;
    outC->dataFromAcceptingMobile.packets.PacketHeaders[idx63].valid = kcg_true;
    outC->dataFromAcceptingMobile.packets.PacketHeaders[idx63].startAddress =
      kcg_lit_int64(0);
    outC->dataFromAcceptingMobile.packets.PacketHeaders[idx63].endAddress =
      kcg_lit_int64(0);
  }
  for (idx64 = 0; idx64 < 500; idx64++) {
    outC->dataFromAcceptingMobile.packets.PacketData[idx64] = kcg_lit_int64(0);
  }
  outC->dataFromAcceptingMobile.sendingRBC.valid = kcg_true;
  outC->dataFromAcceptingMobile.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->dataFromAcceptingMobile.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->dataFromAcceptingMobile.sendingRBC.device_id = kcg_lit_int64(0);
  outC->dataFromHandingOverMobile.valid = kcg_true;
  outC->dataFromHandingOverMobile.source = msrc_undefined_Common_Types_Pkg;
  outC->dataFromHandingOverMobile.radioMetadata.t_train_reference = kcg_true;
  outC->dataFromHandingOverMobile.radioMetadata.nid_em = kcg_true;
  outC->dataFromHandingOverMobile.radioMetadata.q_scale = kcg_true;
  outC->dataFromHandingOverMobile.radioMetadata.d_sr = kcg_true;
  outC->dataFromHandingOverMobile.radioMetadata.t_sh_rqst = kcg_true;
  outC->dataFromHandingOverMobile.radioMetadata.d_ref = kcg_true;
  outC->dataFromHandingOverMobile.radioMetadata.q_dir = kcg_true;
  outC->dataFromHandingOverMobile.radioMetadata.d_emergencystop = kcg_true;
  outC->dataFromHandingOverMobile.radioMetadata.m_version = kcg_true;
  outC->dataFromHandingOverMobile.BG_Common_Header.valid = kcg_true;
  outC->dataFromHandingOverMobile.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->dataFromHandingOverMobile.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->dataFromHandingOverMobile.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->dataFromHandingOverMobile.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->dataFromHandingOverMobile.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->dataFromHandingOverMobile.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->dataFromHandingOverMobile.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->dataFromHandingOverMobile.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->dataFromHandingOverMobile.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->dataFromHandingOverMobile.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->dataFromHandingOverMobile.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->dataFromHandingOverMobile.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->dataFromHandingOverMobile.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->dataFromHandingOverMobile.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->dataFromHandingOverMobile.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->dataFromHandingOverMobile.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->dataFromHandingOverMobile.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->dataFromHandingOverMobile.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->dataFromHandingOverMobile.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->dataFromHandingOverMobile.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->dataFromHandingOverMobile.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->dataFromHandingOverMobile.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->dataFromHandingOverMobile.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->dataFromHandingOverMobile.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->dataFromHandingOverMobile.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->dataFromHandingOverMobile.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->dataFromHandingOverMobile.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->dataFromHandingOverMobile.Radio_Common_Header.radioDevice =
    kcg_lit_int64(0);
  outC->dataFromHandingOverMobile.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->dataFromHandingOverMobile.Radio_Common_Header.nid_message =
    kcg_lit_int64(0);
  outC->dataFromHandingOverMobile.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->dataFromHandingOverMobile.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->dataFromHandingOverMobile.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->dataFromHandingOverMobile.Radio_Common_Header.t_train_reference =
    kcg_lit_int64(0);
  outC->dataFromHandingOverMobile.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->dataFromHandingOverMobile.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->dataFromHandingOverMobile.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->dataFromHandingOverMobile.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(
      0);
  outC->dataFromHandingOverMobile.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->dataFromHandingOverMobile.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->dataFromHandingOverMobile.Radio_Common_Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->dataFromHandingOverMobile.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx65 = 0; idx65 < 30; idx65++) {
    outC->dataFromHandingOverMobile.packets.PacketHeaders[idx65].nid_packet =
      kcg_lit_int64(0);
    outC->dataFromHandingOverMobile.packets.PacketHeaders[idx65].q_dir =
      Q_DIR_Reverse;
    outC->dataFromHandingOverMobile.packets.PacketHeaders[idx65].valid = kcg_true;
    outC->dataFromHandingOverMobile.packets.PacketHeaders[idx65].startAddress =
      kcg_lit_int64(0);
    outC->dataFromHandingOverMobile.packets.PacketHeaders[idx65].endAddress =
      kcg_lit_int64(0);
  }
  for (idx66 = 0; idx66 < 500; idx66++) {
    outC->dataFromHandingOverMobile.packets.PacketData[idx66] = kcg_lit_int64(0);
  }
  outC->dataFromHandingOverMobile.sendingRBC.valid = kcg_true;
  outC->dataFromHandingOverMobile.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->dataFromHandingOverMobile.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->dataFromHandingOverMobile.sendingRBC.device_id = kcg_lit_int64(0);
  outC->handingOverMobile_is_mobile_1_loc = kcg_true;
  outC->sNotReady = kcg_true;
  outC->_L7_Memory_1_struct.valid = kcg_true;
  outC->_L7_Memory_1_struct.source = msrc_undefined_Common_Types_Pkg;
  outC->_L7_Memory_1_struct.nid_lrbg = kcg_lit_int64(0);
  outC->_L7_Memory_1_struct.location.nominal = kcg_lit_int64(0);
  outC->_L7_Memory_1_struct.location.d_min = kcg_lit_int64(0);
  outC->_L7_Memory_1_struct.location.d_max = kcg_lit_int64(0);
  outC->_L7_Memory_1_struct.contactLastKnownRBC = kcg_true;
  outC->_L7_Memory_1_struct.useTheShortNumberStoredOnboard = kcg_true;
  outC->_L7_Memory_1_struct.order.valid = kcg_true;
  outC->_L7_Memory_1_struct.order.q_dir = Q_DIR_Reverse;
  outC->_L7_Memory_1_struct.order.q_scale = Q_SCALE_10_cm_scale;
  outC->_L7_Memory_1_struct.order.d_rbctr = kcg_lit_int64(0);
  outC->_L7_Memory_1_struct.order.nid_c = kcg_lit_int64(0);
  outC->_L7_Memory_1_struct.order.nid_rbc = kcg_lit_int64(0);
  outC->_L7_Memory_1_struct.order.nid_radio = kcg_lit_int64(0);
  outC->_L7_Memory_1_struct.order.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L6_Memory_1_struct.valid = kcg_true;
  outC->_L6_Memory_1_struct.source = msrc_undefined_Common_Types_Pkg;
  outC->_L6_Memory_1_struct.nid_lrbg = kcg_lit_int64(0);
  outC->_L6_Memory_1_struct.location.nominal = kcg_lit_int64(0);
  outC->_L6_Memory_1_struct.location.d_min = kcg_lit_int64(0);
  outC->_L6_Memory_1_struct.location.d_max = kcg_lit_int64(0);
  outC->_L6_Memory_1_struct.contactLastKnownRBC = kcg_true;
  outC->_L6_Memory_1_struct.useTheShortNumberStoredOnboard = kcg_true;
  outC->_L6_Memory_1_struct.order.valid = kcg_true;
  outC->_L6_Memory_1_struct.order.q_dir = Q_DIR_Reverse;
  outC->_L6_Memory_1_struct.order.q_scale = Q_SCALE_10_cm_scale;
  outC->_L6_Memory_1_struct.order.d_rbctr = kcg_lit_int64(0);
  outC->_L6_Memory_1_struct.order.nid_c = kcg_lit_int64(0);
  outC->_L6_Memory_1_struct.order.nid_rbc = kcg_lit_int64(0);
  outC->_L6_Memory_1_struct.order.nid_radio = kcg_lit_int64(0);
  outC->_L6_Memory_1_struct.order.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L5_Memory_1_struct.valid = kcg_true;
  outC->_L5_Memory_1_struct.source = msrc_undefined_Common_Types_Pkg;
  outC->_L5_Memory_1_struct.nid_lrbg = kcg_lit_int64(0);
  outC->_L5_Memory_1_struct.location.nominal = kcg_lit_int64(0);
  outC->_L5_Memory_1_struct.location.d_min = kcg_lit_int64(0);
  outC->_L5_Memory_1_struct.location.d_max = kcg_lit_int64(0);
  outC->_L5_Memory_1_struct.contactLastKnownRBC = kcg_true;
  outC->_L5_Memory_1_struct.useTheShortNumberStoredOnboard = kcg_true;
  outC->_L5_Memory_1_struct.order.valid = kcg_true;
  outC->_L5_Memory_1_struct.order.q_dir = Q_DIR_Reverse;
  outC->_L5_Memory_1_struct.order.q_scale = Q_SCALE_10_cm_scale;
  outC->_L5_Memory_1_struct.order.d_rbctr = kcg_lit_int64(0);
  outC->_L5_Memory_1_struct.order.nid_c = kcg_lit_int64(0);
  outC->_L5_Memory_1_struct.order.nid_rbc = kcg_lit_int64(0);
  outC->_L5_Memory_1_struct.order.nid_radio = kcg_lit_int64(0);
  outC->_L5_Memory_1_struct.order.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L3_Memory_1_struct = kcg_true;
  outC->_L2_Memory_1_struct.valid = kcg_true;
  outC->_L2_Memory_1_struct.source = msrc_undefined_Common_Types_Pkg;
  outC->_L2_Memory_1_struct.nid_lrbg = kcg_lit_int64(0);
  outC->_L2_Memory_1_struct.location.nominal = kcg_lit_int64(0);
  outC->_L2_Memory_1_struct.location.d_min = kcg_lit_int64(0);
  outC->_L2_Memory_1_struct.location.d_max = kcg_lit_int64(0);
  outC->_L2_Memory_1_struct.contactLastKnownRBC = kcg_true;
  outC->_L2_Memory_1_struct.useTheShortNumberStoredOnboard = kcg_true;
  outC->_L2_Memory_1_struct.order.valid = kcg_true;
  outC->_L2_Memory_1_struct.order.q_dir = Q_DIR_Reverse;
  outC->_L2_Memory_1_struct.order.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2_Memory_1_struct.order.d_rbctr = kcg_lit_int64(0);
  outC->_L2_Memory_1_struct.order.nid_c = kcg_lit_int64(0);
  outC->_L2_Memory_1_struct.order.nid_rbc = kcg_lit_int64(0);
  outC->_L2_Memory_1_struct.order.nid_radio = kcg_lit_int64(0);
  outC->_L2_Memory_1_struct.order.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L1_Memory_1_struct = kcg_true;
  outC->_L9_Memory_1_struct.valid = kcg_true;
  outC->_L9_Memory_1_struct.source = msrc_undefined_Common_Types_Pkg;
  outC->_L9_Memory_1_struct.nid_lrbg = kcg_lit_int64(0);
  outC->_L9_Memory_1_struct.location.nominal = kcg_lit_int64(0);
  outC->_L9_Memory_1_struct.location.d_min = kcg_lit_int64(0);
  outC->_L9_Memory_1_struct.location.d_max = kcg_lit_int64(0);
  outC->_L9_Memory_1_struct.contactLastKnownRBC = kcg_true;
  outC->_L9_Memory_1_struct.useTheShortNumberStoredOnboard = kcg_true;
  outC->_L9_Memory_1_struct.order.valid = kcg_true;
  outC->_L9_Memory_1_struct.order.q_dir = Q_DIR_Reverse;
  outC->_L9_Memory_1_struct.order.q_scale = Q_SCALE_10_cm_scale;
  outC->_L9_Memory_1_struct.order.d_rbctr = kcg_lit_int64(0);
  outC->_L9_Memory_1_struct.order.nid_c = kcg_lit_int64(0);
  outC->_L9_Memory_1_struct.order.nid_rbc = kcg_lit_int64(0);
  outC->_L9_Memory_1_struct.order.nid_radio = kcg_lit_int64(0);
  outC->_L9_Memory_1_struct.order.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->M_Input_Memory_1_struct.valid = kcg_true;
  outC->M_Input_Memory_1_struct.source = msrc_undefined_Common_Types_Pkg;
  outC->M_Input_Memory_1_struct.nid_lrbg = kcg_lit_int64(0);
  outC->M_Input_Memory_1_struct.location.nominal = kcg_lit_int64(0);
  outC->M_Input_Memory_1_struct.location.d_min = kcg_lit_int64(0);
  outC->M_Input_Memory_1_struct.location.d_max = kcg_lit_int64(0);
  outC->M_Input_Memory_1_struct.contactLastKnownRBC = kcg_true;
  outC->M_Input_Memory_1_struct.useTheShortNumberStoredOnboard = kcg_true;
  outC->M_Input_Memory_1_struct.order.valid = kcg_true;
  outC->M_Input_Memory_1_struct.order.q_dir = Q_DIR_Reverse;
  outC->M_Input_Memory_1_struct.order.q_scale = Q_SCALE_10_cm_scale;
  outC->M_Input_Memory_1_struct.order.d_rbctr = kcg_lit_int64(0);
  outC->M_Input_Memory_1_struct.order.nid_c = kcg_lit_int64(0);
  outC->M_Input_Memory_1_struct.order.nid_rbc = kcg_lit_int64(0);
  outC->M_Input_Memory_1_struct.order.nid_radio = kcg_lit_int64(0);
  outC->M_Input_Memory_1_struct.order.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->Reset_Memory_1_struct = kcg_true;
  outC->MemCond_Memory_1_struct = kcg_true;
  outC->InitVal_Memory_1_struct.valid = kcg_true;
  outC->InitVal_Memory_1_struct.source = msrc_undefined_Common_Types_Pkg;
  outC->InitVal_Memory_1_struct.nid_lrbg = kcg_lit_int64(0);
  outC->InitVal_Memory_1_struct.location.nominal = kcg_lit_int64(0);
  outC->InitVal_Memory_1_struct.location.d_min = kcg_lit_int64(0);
  outC->InitVal_Memory_1_struct.location.d_max = kcg_lit_int64(0);
  outC->InitVal_Memory_1_struct.contactLastKnownRBC = kcg_true;
  outC->InitVal_Memory_1_struct.useTheShortNumberStoredOnboard = kcg_true;
  outC->InitVal_Memory_1_struct.order.valid = kcg_true;
  outC->InitVal_Memory_1_struct.order.q_dir = Q_DIR_Reverse;
  outC->InitVal_Memory_1_struct.order.q_scale = Q_SCALE_10_cm_scale;
  outC->InitVal_Memory_1_struct.order.d_rbctr = kcg_lit_int64(0);
  outC->InitVal_Memory_1_struct.order.nid_c = kcg_lit_int64(0);
  outC->InitVal_Memory_1_struct.order.nid_rbc = kcg_lit_int64(0);
  outC->InitVal_Memory_1_struct.order.nid_radio = kcg_lit_int64(0);
  outC->InitVal_Memory_1_struct.order.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->Out_Memory_1_struct.valid = kcg_true;
  outC->Out_Memory_1_struct.source = msrc_undefined_Common_Types_Pkg;
  outC->Out_Memory_1_struct.nid_lrbg = kcg_lit_int64(0);
  outC->Out_Memory_1_struct.location.nominal = kcg_lit_int64(0);
  outC->Out_Memory_1_struct.location.d_min = kcg_lit_int64(0);
  outC->Out_Memory_1_struct.location.d_max = kcg_lit_int64(0);
  outC->Out_Memory_1_struct.contactLastKnownRBC = kcg_true;
  outC->Out_Memory_1_struct.useTheShortNumberStoredOnboard = kcg_true;
  outC->Out_Memory_1_struct.order.valid = kcg_true;
  outC->Out_Memory_1_struct.order.q_dir = Q_DIR_Reverse;
  outC->Out_Memory_1_struct.order.q_scale = Q_SCALE_10_cm_scale;
  outC->Out_Memory_1_struct.order.d_rbctr = kcg_lit_int64(0);
  outC->Out_Memory_1_struct.order.nid_c = kcg_lit_int64(0);
  outC->Out_Memory_1_struct.order.nid_rbc = kcg_lit_int64(0);
  outC->Out_Memory_1_struct.order.nid_radio = kcg_lit_int64(0);
  outC->Out_Memory_1_struct.order.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L8_Memory_1_struct.valid = kcg_true;
  outC->_L8_Memory_1_struct.source = msrc_undefined_Common_Types_Pkg;
  outC->_L8_Memory_1_struct.nid_lrbg = kcg_lit_int64(0);
  outC->_L8_Memory_1_struct.location.nominal = kcg_lit_int64(0);
  outC->_L8_Memory_1_struct.location.d_min = kcg_lit_int64(0);
  outC->_L8_Memory_1_struct.location.d_max = kcg_lit_int64(0);
  outC->_L8_Memory_1_struct.contactLastKnownRBC = kcg_true;
  outC->_L8_Memory_1_struct.useTheShortNumberStoredOnboard = kcg_true;
  outC->_L8_Memory_1_struct.order.valid = kcg_true;
  outC->_L8_Memory_1_struct.order.q_dir = Q_DIR_Reverse;
  outC->_L8_Memory_1_struct.order.q_scale = Q_SCALE_10_cm_scale;
  outC->_L8_Memory_1_struct.order.d_rbctr = kcg_lit_int64(0);
  outC->_L8_Memory_1_struct.order.nid_c = kcg_lit_int64(0);
  outC->_L8_Memory_1_struct.order.nid_rbc = kcg_lit_int64(0);
  outC->_L8_Memory_1_struct.order.nid_radio = kcg_lit_int64(0);
  outC->_L8_Memory_1_struct.order.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->init = kcg_true;
  outC->notReady = kcg_true;
  outC->trainPassesA_RBC_RBC_border_WithItsFrontEnd = kcg_true;
  outC->handingOverMobile_is_mobile_1 = kcg_true;
  outC->useInformationFromAcceptingRBC = kcg_true;
  outC->supervisingRBC.valid = kcg_true;
  outC->supervisingRBC.mobileDeviceNo = kcg_lit_int64(0);
  outC->supervisingRBC.nid_c = kcg_lit_int64(0);
  outC->supervisingRBC.nid_RBC = kcg_lit_int64(0);
  outC->supervisingRBC.nid_radio = kcg_lit_int64(0);
  outC->supervisingRBC.nid_mn = kcg_lit_int64(0);
  outC->bufferInformationFromAcceptingRBC = kcg_true;
  outC->sendTrainData_2_acceptingRBC = kcg_true;
  outC->sendPositionReport_2_acceptingRBC = kcg_true;
  outC->sendPositionReport_2_handingOverRBC = kcg_true;
  outC->sessionCmds_2_MoRC_2.valid = kcg_true;
  outC->sessionCmds_2_MoRC_2.source = msrc_undefined_Common_Types_Pkg;
  outC->sessionCmds_2_MoRC_2.radioMetadata.t_train_reference = kcg_true;
  outC->sessionCmds_2_MoRC_2.radioMetadata.nid_em = kcg_true;
  outC->sessionCmds_2_MoRC_2.radioMetadata.q_scale = kcg_true;
  outC->sessionCmds_2_MoRC_2.radioMetadata.d_sr = kcg_true;
  outC->sessionCmds_2_MoRC_2.radioMetadata.t_sh_rqst = kcg_true;
  outC->sessionCmds_2_MoRC_2.radioMetadata.d_ref = kcg_true;
  outC->sessionCmds_2_MoRC_2.radioMetadata.q_dir = kcg_true;
  outC->sessionCmds_2_MoRC_2.radioMetadata.d_emergencystop = kcg_true;
  outC->sessionCmds_2_MoRC_2.radioMetadata.m_version = kcg_true;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.valid = kcg_true;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->sessionCmds_2_MoRC_2.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC_2.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC_2.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC_2.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC_2.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->sessionCmds_2_MoRC_2.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC_2.Radio_Common_Header.t_train_reference =
    kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC_2.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC_2.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->sessionCmds_2_MoRC_2.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC_2.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC_2.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC_2.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->sessionCmds_2_MoRC_2.Radio_Common_Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC_2.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx67 = 0; idx67 < 30; idx67++) {
    outC->sessionCmds_2_MoRC_2.packets.PacketHeaders[idx67].nid_packet =
      kcg_lit_int64(0);
    outC->sessionCmds_2_MoRC_2.packets.PacketHeaders[idx67].q_dir = Q_DIR_Reverse;
    outC->sessionCmds_2_MoRC_2.packets.PacketHeaders[idx67].valid = kcg_true;
    outC->sessionCmds_2_MoRC_2.packets.PacketHeaders[idx67].startAddress =
      kcg_lit_int64(0);
    outC->sessionCmds_2_MoRC_2.packets.PacketHeaders[idx67].endAddress =
      kcg_lit_int64(0);
  }
  for (idx68 = 0; idx68 < 500; idx68++) {
    outC->sessionCmds_2_MoRC_2.packets.PacketData[idx68] = kcg_lit_int64(0);
  }
  outC->sessionCmds_2_MoRC_2.sendingRBC.valid = kcg_true;
  outC->sessionCmds_2_MoRC_2.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC_2.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC_2.sendingRBC.device_id = kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC_1.valid = kcg_true;
  outC->sessionCmds_2_MoRC_1.source = msrc_undefined_Common_Types_Pkg;
  outC->sessionCmds_2_MoRC_1.radioMetadata.t_train_reference = kcg_true;
  outC->sessionCmds_2_MoRC_1.radioMetadata.nid_em = kcg_true;
  outC->sessionCmds_2_MoRC_1.radioMetadata.q_scale = kcg_true;
  outC->sessionCmds_2_MoRC_1.radioMetadata.d_sr = kcg_true;
  outC->sessionCmds_2_MoRC_1.radioMetadata.t_sh_rqst = kcg_true;
  outC->sessionCmds_2_MoRC_1.radioMetadata.d_ref = kcg_true;
  outC->sessionCmds_2_MoRC_1.radioMetadata.q_dir = kcg_true;
  outC->sessionCmds_2_MoRC_1.radioMetadata.d_emergencystop = kcg_true;
  outC->sessionCmds_2_MoRC_1.radioMetadata.m_version = kcg_true;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.valid = kcg_true;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->sessionCmds_2_MoRC_1.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC_1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC_1.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC_1.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC_1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->sessionCmds_2_MoRC_1.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC_1.Radio_Common_Header.t_train_reference =
    kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC_1.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC_1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->sessionCmds_2_MoRC_1.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC_1.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC_1.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC_1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->sessionCmds_2_MoRC_1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC_1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx69 = 0; idx69 < 30; idx69++) {
    outC->sessionCmds_2_MoRC_1.packets.PacketHeaders[idx69].nid_packet =
      kcg_lit_int64(0);
    outC->sessionCmds_2_MoRC_1.packets.PacketHeaders[idx69].q_dir = Q_DIR_Reverse;
    outC->sessionCmds_2_MoRC_1.packets.PacketHeaders[idx69].valid = kcg_true;
    outC->sessionCmds_2_MoRC_1.packets.PacketHeaders[idx69].startAddress =
      kcg_lit_int64(0);
    outC->sessionCmds_2_MoRC_1.packets.PacketHeaders[idx69].endAddress =
      kcg_lit_int64(0);
  }
  for (idx70 = 0; idx70 < 500; idx70++) {
    outC->sessionCmds_2_MoRC_1.packets.PacketData[idx70] = kcg_lit_int64(0);
  }
  outC->sessionCmds_2_MoRC_1.sendingRBC.valid = kcg_true;
  outC->sessionCmds_2_MoRC_1.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC_1.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC_1.sendingRBC.device_id = kcg_lit_int64(0);
  /* _L234=(Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC#1)/ */
  determineSupervisingRBC_init_Handover_Pkg_handoverUtils_Pkg(
    &outC->Context_determineSupervisingRBC_1);
  /* _L244=(Handover_Pkg::handoverUtils_Pkg::processRadioCtrlCmds_v2#2)/ */
  processRadioCtrlCmds_v2_init_Handover_Pkg_handoverUtils_Pkg(
    &outC->Context_processRadioCtrlCmds_v2_2);
  /* _L245=(Handover_Pkg::handoverUtils_Pkg::processRadioCtrlCmds_v2#1)/ */
  processRadioCtrlCmds_v2_init_Handover_Pkg_handoverUtils_Pkg(
    &outC->Context_processRadioCtrlCmds_v2_1);
  /* _L37=(Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out#1)/ */
  mobileCtrlCmdRouter_out_init_Handover_Pkg_handoverUtils_Pkg(
    &outC->Context_mobileCtrlCmdRouter_out_1);
  /* _L254=(digital::EitherEdge#1)/ */
  EitherEdge_init_digital(&outC->Context_EitherEdge_1);
  /* _L255=(digital::EitherEdge#2)/ */
  EitherEdge_init_digital(&outC->Context_EitherEdge_2);
  /* _L89=(Handover_Pkg::handoverUtils_Pkg::handOverSequencer#1)/ */
  handOverSequencer_init_Handover_Pkg_handoverUtils_Pkg(
    &outC->Context_handOverSequencer_1);
  /* _L223=(BasicLocationFunctions_Pkg::locReachedOrPassed#2)/ */
  locReachedOrPassed_init_BasicLocationFunctions_Pkg(
    &outC->Context_locReachedOrPassed_2);
  /* _L213=(BasicLocationFunctions_Pkg::sub_2_distances#1)/ */
  sub_2_distances_init_BasicLocationFunctions_Pkg(
    &outC->Context_sub_2_distances_1);
  /* _L222=(BasicLocationFunctions_Pkg::locReachedOrPassed#1)/ */
  locReachedOrPassed_init_BasicLocationFunctions_Pkg(
    &outC->Context_locReachedOrPassed_1);
  /* _L212=(BasicLocationFunctions_Pkg::add_2_Distances#2)/ */
  add_2_Distances_init_BasicLocationFunctions_Pkg(
    &outC->Context_add_2_Distances_2);
  /* _L197=(BasicLocationFunctions_Pkg::add_2_Distances#1)/ */
  add_2_Distances_init_BasicLocationFunctions_Pkg(
    &outC->Context_add_2_Distances_1);
  /* _L193=(BasicLocationFunctions_Pkg::scaledDLINK_2_dlink#1)/ */
  scaledDLINK_2_dlink_init_BasicLocationFunctions_Pkg(
    &outC->Context_scaledDLINK_2_dlink_1);
  /* _L172=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id#1)/ */
  indexOfBG_by_id_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_indexOfBG_by_id_1);
  /* _L175=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::NIDLRBG_2_nidC_nidBG#1)/ */
  NIDLRBG_2_nidC_nidBG_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_NIDLRBG_2_nidC_nidBG_1);
  /* _L44=(Handover_Pkg::handoverUtils_Pkg::radioStatusRouter#1)/ */
  radioStatusRouter_init_Handover_Pkg_handoverUtils_Pkg(
    &outC->Context_radioStatusRouter_1);
  /* _L53=(Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds#1)/ */
  fishHandoverCmds_init_Handover_Pkg_handoverUtils_Pkg(
    &outC->Context_fishHandoverCmds_1);
  /* _L78=(Handover_Pkg::handoverUtils_Pkg::splitInputData#2)/ */
  splitInputData_init_Handover_Pkg_handoverUtils_Pkg(
    &outC->Context_splitInputData_2);
  /* _L241=(Handover_Pkg::handoverUtils_Pkg::changeoverSwitch#3)/ */
  changeoverSwitch_init_Handover_Pkg_handoverUtils_Pkg(
    &outC->Context_changeoverSwitch_3);
  outC->handoverInprogress = kcg_false;
  outC->useInformationFromAcceptingRBC_loc = kcg_false;
  outC->handoverFinished = kcg_false;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void processHandingOver_reset_Handover_Pkg_handoverUtils_Pkg(
  outC_processHandingOver_Handover_Pkg_handoverUtils_Pkg *outC)
{
  outC->init = kcg_true;
  /* _L234=(Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC#1)/ */
  determineSupervisingRBC_reset_Handover_Pkg_handoverUtils_Pkg(
    &outC->Context_determineSupervisingRBC_1);
  /* _L244=(Handover_Pkg::handoverUtils_Pkg::processRadioCtrlCmds_v2#2)/ */
  processRadioCtrlCmds_v2_reset_Handover_Pkg_handoverUtils_Pkg(
    &outC->Context_processRadioCtrlCmds_v2_2);
  /* _L245=(Handover_Pkg::handoverUtils_Pkg::processRadioCtrlCmds_v2#1)/ */
  processRadioCtrlCmds_v2_reset_Handover_Pkg_handoverUtils_Pkg(
    &outC->Context_processRadioCtrlCmds_v2_1);
  /* _L37=(Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out#1)/ */
  mobileCtrlCmdRouter_out_reset_Handover_Pkg_handoverUtils_Pkg(
    &outC->Context_mobileCtrlCmdRouter_out_1);
  /* _L254=(digital::EitherEdge#1)/ */
  EitherEdge_reset_digital(&outC->Context_EitherEdge_1);
  /* _L255=(digital::EitherEdge#2)/ */
  EitherEdge_reset_digital(&outC->Context_EitherEdge_2);
  /* _L89=(Handover_Pkg::handoverUtils_Pkg::handOverSequencer#1)/ */
  handOverSequencer_reset_Handover_Pkg_handoverUtils_Pkg(
    &outC->Context_handOverSequencer_1);
  /* _L223=(BasicLocationFunctions_Pkg::locReachedOrPassed#2)/ */
  locReachedOrPassed_reset_BasicLocationFunctions_Pkg(
    &outC->Context_locReachedOrPassed_2);
  /* _L213=(BasicLocationFunctions_Pkg::sub_2_distances#1)/ */
  sub_2_distances_reset_BasicLocationFunctions_Pkg(
    &outC->Context_sub_2_distances_1);
  /* _L222=(BasicLocationFunctions_Pkg::locReachedOrPassed#1)/ */
  locReachedOrPassed_reset_BasicLocationFunctions_Pkg(
    &outC->Context_locReachedOrPassed_1);
  /* _L212=(BasicLocationFunctions_Pkg::add_2_Distances#2)/ */
  add_2_Distances_reset_BasicLocationFunctions_Pkg(
    &outC->Context_add_2_Distances_2);
  /* _L197=(BasicLocationFunctions_Pkg::add_2_Distances#1)/ */
  add_2_Distances_reset_BasicLocationFunctions_Pkg(
    &outC->Context_add_2_Distances_1);
  /* _L193=(BasicLocationFunctions_Pkg::scaledDLINK_2_dlink#1)/ */
  scaledDLINK_2_dlink_reset_BasicLocationFunctions_Pkg(
    &outC->Context_scaledDLINK_2_dlink_1);
  /* _L172=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id#1)/ */
  indexOfBG_by_id_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_indexOfBG_by_id_1);
  /* _L175=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::NIDLRBG_2_nidC_nidBG#1)/ */
  NIDLRBG_2_nidC_nidBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_NIDLRBG_2_nidC_nidBG_1);
  /* _L44=(Handover_Pkg::handoverUtils_Pkg::radioStatusRouter#1)/ */
  radioStatusRouter_reset_Handover_Pkg_handoverUtils_Pkg(
    &outC->Context_radioStatusRouter_1);
  /* _L53=(Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds#1)/ */
  fishHandoverCmds_reset_Handover_Pkg_handoverUtils_Pkg(
    &outC->Context_fishHandoverCmds_1);
  /* _L78=(Handover_Pkg::handoverUtils_Pkg::splitInputData#2)/ */
  splitInputData_reset_Handover_Pkg_handoverUtils_Pkg(
    &outC->Context_splitInputData_2);
  /* _L241=(Handover_Pkg::handoverUtils_Pkg::changeoverSwitch#3)/ */
  changeoverSwitch_reset_Handover_Pkg_handoverUtils_Pkg(
    &outC->Context_changeoverSwitch_3);
  outC->handoverInprogress = kcg_false;
  outC->useInformationFromAcceptingRBC_loc = kcg_false;
  outC->handoverFinished = kcg_false;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_processHandingOver_Handover_Pkg_handoverUtils_Pkg(
  SV_processHandingOver_Handover_Pkg_handoverUtils_Pkg *SV,
  outC_processHandingOver_Handover_Pkg_handoverUtils_Pkg *outC)
{
  kcg_save_SV_changeoverSwitch_Handover_Pkg_handoverUtils_Pkg(
    &SV->Context_changeoverSwitch_3,
    &outC->Context_changeoverSwitch_3);
  kcg_save_SV_locReachedOrPassed_BasicLocationFunctions_Pkg(
    &SV->Context_locReachedOrPassed_1,
    &outC->Context_locReachedOrPassed_1);
  kcg_save_SV_locReachedOrPassed_BasicLocationFunctions_Pkg(
    &SV->Context_locReachedOrPassed_2,
    &outC->Context_locReachedOrPassed_2);
  kcg_save_SV_handOverSequencer_Handover_Pkg_handoverUtils_Pkg(
    &SV->Context_handOverSequencer_1,
    &outC->Context_handOverSequencer_1);
  kcg_save_SV_EitherEdge_digital(
    &SV->Context_EitherEdge_2,
    &outC->Context_EitherEdge_2);
  kcg_save_SV_EitherEdge_digital(
    &SV->Context_EitherEdge_1,
    &outC->Context_EitherEdge_1);
  SV->Context_handoverFinished = outC->handoverFinished;
  SV->Context_useInformationFromAcceptingRBC_loc =
    outC->useInformationFromAcceptingRBC_loc;
  SV->Context_handoverInprogress = outC->handoverInprogress;
  kcg_copy_p131_q_rbcTransitionOrder_T_Handover_Pkg(
    &SV->Context__L8_Memory_1,
    &outC->_L8_Memory_1_struct);
  SV->Context_init = outC->init;
}

void kcg_load_SV_processHandingOver_Handover_Pkg_handoverUtils_Pkg(
  outC_processHandingOver_Handover_Pkg_handoverUtils_Pkg *outC,
  SV_processHandingOver_Handover_Pkg_handoverUtils_Pkg *SV)
{
  kcg_load_SV_changeoverSwitch_Handover_Pkg_handoverUtils_Pkg(
    &outC->Context_changeoverSwitch_3,
    &SV->Context_changeoverSwitch_3);
  kcg_load_SV_locReachedOrPassed_BasicLocationFunctions_Pkg(
    &outC->Context_locReachedOrPassed_1,
    &SV->Context_locReachedOrPassed_1);
  kcg_load_SV_locReachedOrPassed_BasicLocationFunctions_Pkg(
    &outC->Context_locReachedOrPassed_2,
    &SV->Context_locReachedOrPassed_2);
  kcg_load_SV_handOverSequencer_Handover_Pkg_handoverUtils_Pkg(
    &outC->Context_handOverSequencer_1,
    &SV->Context_handOverSequencer_1);
  kcg_load_SV_EitherEdge_digital(
    &outC->Context_EitherEdge_2,
    &SV->Context_EitherEdge_2);
  kcg_load_SV_EitherEdge_digital(
    &outC->Context_EitherEdge_1,
    &SV->Context_EitherEdge_1);
  outC->handoverFinished = SV->Context_handoverFinished;
  outC->useInformationFromAcceptingRBC_loc =
    SV->Context_useInformationFromAcceptingRBC_loc;
  outC->handoverInprogress = SV->Context_handoverInprogress;
  kcg_copy_p131_q_rbcTransitionOrder_T_Handover_Pkg(
    &outC->_L8_Memory_1_struct,
    &SV->Context__L8_Memory_1);
  outC->init = SV->Context_init;
}

/*
  Expanded instances for: Handover_Pkg::handoverUtils_Pkg::processHandingOver/
  @1: (linear::Memory#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** processHandingOver_Handover_Pkg_handoverUtils_Pkg.c
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

