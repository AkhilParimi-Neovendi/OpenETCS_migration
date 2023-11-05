/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC__ProcessPositionReport_RBC_Model_Pkg.h"

/* RBC_Model_Pkg::RBC__ProcessPositionReport/ */
void RBC__ProcessPositionReport_RBC_Model_Pkg(
  /* inDataBus/ */
  RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  /* inRadioTrainTrackMessage/ */
  Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  /* inTriggeredRadioTrackTrainMessage/ */
  CompressedRadioMessage_TM *inTriggeredRadioTrackTrainMessage,
  outC_RBC__ProcessPositionReport_RBC_Model_Pkg *outC)
{
  /* session/ */
  static SessionManagement_T session_partial;
  /* POSITION_REPORT_SM: */
  static SSM_ST_POSITION_REPORT_SM POSITION_REPORT_SM_state_nxt_partial;
  /* POSITION_REPORT_SM: */
  static kcg_bool POSITION_REPORT_SM_reset_nxt_partial;
  /* POSITION_REPORT_SM: */
  static SSM_TR_POSITION_REPORT_SM POSITION_REPORT_SM_fired_partial;
  /* session/ */
  static SessionManagement_T _1_session_partial;
  /* POSITION_REPORT_SM: */
  static SSM_ST_POSITION_REPORT_SM _2_POSITION_REPORT_SM_state_nxt_partial;
  /* POSITION_REPORT_SM: */
  static kcg_bool _3_POSITION_REPORT_SM_reset_nxt_partial;
  /* POSITION_REPORT_SM: */
  static SSM_TR_POSITION_REPORT_SM _4_POSITION_REPORT_SM_fired_partial;
  /* POSITION_REPORT_SM: */
  static SSM_ST_POSITION_REPORT_SM POSITION_REPORT_SM_state_act_partial;
  /* POSITION_REPORT_SM: */
  static kcg_bool POSITION_REPORT_SM_reset_act_partial;
  /* POSITION_REPORT_SM: */
  static SSM_TR_POSITION_REPORT_SM POSITION_REPORT_SM_fired_strong_partial;
  /* POSITION_REPORT_SM:IDLE:<1> */
  static kcg_bool tr_1_guard_IDLE_POSITION_REPORT_SM;
  /* POSITION_REPORT_SM: */
  static SSM_ST_POSITION_REPORT_SM _5_POSITION_REPORT_SM_state_act_partial;
  /* POSITION_REPORT_SM: */
  static kcg_bool _6_POSITION_REPORT_SM_reset_act_partial;
  /* POSITION_REPORT_SM: */
  static SSM_TR_POSITION_REPORT_SM _7_POSITION_REPORT_SM_fired_strong_partial;
  /* POSITION_REPORT_SM:PROCESS_POSITION_REPORT:<2> */
  static kcg_bool tr_2_guard_PROCESS_POSITION_REPORT_POSITION_REPORT_SM;
  /* POSITION_REPORT_SM:PROCESS_POSITION_REPORT:<1> */
  static kcg_bool tr_1_guard_PROCESS_POSITION_REPORT_POSITION_REPORT_SM;
  /* POSITION_REPORT_SM: */
  static kcg_bool POSITION_REPORT_SM_reset_sel;
  /* POSITION_REPORT_SM: */
  static kcg_bool POSITION_REPORT_SM_reset_prv;

  outC->POSITION_REPORT_SM_state_sel = outC->POSITION_REPORT_SM_state_nxt;
  switch (outC->POSITION_REPORT_SM_state_sel) {
    case SSM_st_PROCESS_POSITION_REPORT_POSITION_REPORT_SM :
      tr_2_guard_PROCESS_POSITION_REPORT_POSITION_REPORT_SM = kcg_true;
      break;
    default :
      /* this branch is empty */
      break;
  }
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->_L17,
    inRadioTrainTrackMessage);
  /* _L16=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#2)/ */
  RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L17,
    &outC->Context_RadioTrainTrackMessage__GetHeader_2);
  kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
    &outC->_L16,
    &outC->Context_RadioTrainTrackMessage__GetHeader_2.outRadioTrainTrackHeader);
  /* _L18=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_NID_MESSAGE#2)/ */
  RadioTrainTrackHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L16,
    &outC->Context_RadioTrainTrackHeader__Get_NID_MESSAGE_2);
  outC->_L18 =
    outC->Context_RadioTrainTrackHeader__Get_NID_MESSAGE_2.out_NID_MESSAGE;
  outC->radioTrainTrackMessageId = outC->_L18;
  /* POSITION_REPORT_SM: */
  switch (outC->POSITION_REPORT_SM_state_sel) {
    case SSM_st_PROCESS_POSITION_REPORT_POSITION_REPORT_SM :
      tr_1_guard_PROCESS_POSITION_REPORT_POSITION_REPORT_SM =
        outC->radioTrainTrackMessageId == kcg_lit_int32(136);
      if (tr_1_guard_PROCESS_POSITION_REPORT_POSITION_REPORT_SM) {
        _5_POSITION_REPORT_SM_state_act_partial =
          SSM_st_PROCESS_POSITION_REPORT_POSITION_REPORT_SM;
      }
      else if (tr_2_guard_PROCESS_POSITION_REPORT_POSITION_REPORT_SM) {
        _5_POSITION_REPORT_SM_state_act_partial = SSM_st_IDLE_POSITION_REPORT_SM;
      }
      else {
        _5_POSITION_REPORT_SM_state_act_partial =
          SSM_st_PROCESS_POSITION_REPORT_POSITION_REPORT_SM;
      }
      outC->POSITION_REPORT_SM_state_act = _5_POSITION_REPORT_SM_state_act_partial;
      break;
    case SSM_st_IDLE_POSITION_REPORT_SM :
      tr_1_guard_IDLE_POSITION_REPORT_SM = outC->radioTrainTrackMessageId ==
        kcg_lit_int32(136);
      if (tr_1_guard_IDLE_POSITION_REPORT_SM) {
        POSITION_REPORT_SM_state_act_partial =
          SSM_st_PROCESS_POSITION_REPORT_POSITION_REPORT_SM;
      }
      else {
        POSITION_REPORT_SM_state_act_partial = SSM_st_IDLE_POSITION_REPORT_SM;
      }
      outC->POSITION_REPORT_SM_state_act = POSITION_REPORT_SM_state_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* POSITION_REPORT_SM: */
  switch (outC->POSITION_REPORT_SM_state_act) {
    case SSM_st_PROCESS_POSITION_REPORT_POSITION_REPORT_SM :
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM,
        inDataBus);
      kcg_copy_SessionManagement_T(
        &outC->_L8_PROCESS_POSITION_REPORT_POSITION_REPORT_SM,
        &outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.session);
      /* POSITION_REPORT_SM:PROCESS_POSITION_REPORT:_L3=(RBC_Session_Pkg::SessionManagement__GetPosData#2)/ */
      SessionManagement__GetPosData_RBC_Session_Pkg(
        &outC->_L8_PROCESS_POSITION_REPORT_POSITION_REPORT_SM,
        &outC->Context_SessionManagement__GetPosData_2);
      kcg_copy_PosData_T(
        &outC->_L3_PROCESS_POSITION_REPORT_POSITION_REPORT_SM,
        &outC->Context_SessionManagement__GetPosData_2.outPositionManagement);
      kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
        &outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM,
        inRadioTrainTrackMessage);
      /* POSITION_REPORT_SM:PROCESS_POSITION_REPORT:_L4=(RBC_Session_Pkg::PosData__Update#2)/ */
      PosData__Update_RBC_Session_Pkg(
        &outC->_L3_PROCESS_POSITION_REPORT_POSITION_REPORT_SM,
        &outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM,
        &outC->Context_PosData__Update_2);
      kcg_copy_PosData_T(
        &outC->_L4_PROCESS_POSITION_REPORT_POSITION_REPORT_SM,
        &outC->Context_PosData__Update_2.outPosData);
      /* POSITION_REPORT_SM:PROCESS_POSITION_REPORT:_L5=(RBC_Session_Pkg::SessionManagement__SetPosData#1)/ */
      SessionManagement__SetPosData_RBC_Session_Pkg(
        &outC->_L8_PROCESS_POSITION_REPORT_POSITION_REPORT_SM,
        &outC->_L4_PROCESS_POSITION_REPORT_POSITION_REPORT_SM,
        &outC->Context_SessionManagement__SetPosData_1);
      kcg_copy_SessionManagement_T(
        &outC->_L5_PROCESS_POSITION_REPORT_POSITION_REPORT_SM,
        &outC->Context_SessionManagement__SetPosData_1.outSessionManagement);
      kcg_copy_SessionManagement_T(
        &_1_session_partial,
        &outC->_L5_PROCESS_POSITION_REPORT_POSITION_REPORT_SM);
      kcg_copy_SessionManagement_T(&outC->session, &_1_session_partial);
      break;
    case SSM_st_IDLE_POSITION_REPORT_SM :
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &outC->_L3_IDLE_POSITION_REPORT_SM,
        inDataBus);
      kcg_copy_SessionManagement_T(
        &outC->_L2_IDLE_POSITION_REPORT_SM,
        &outC->_L3_IDLE_POSITION_REPORT_SM.session);
      kcg_copy_SessionManagement_T(
        &session_partial,
        &outC->_L2_IDLE_POSITION_REPORT_SM);
      kcg_copy_SessionManagement_T(&outC->session, &session_partial);
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  kcg_copy_SessionManagement_T(&outC->_L32, &outC->session);
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->_L29, inDataBus);
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->_L30, &outC->_L29);
  if (kcg_true) {
    kcg_copy_SessionManagement_T(&outC->_L30.session, &outC->_L32);
  }
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->outDataBus, &outC->_L30);
  kcg_copy_CompressedRadioMessage_TM(
    &outC->_L27,
    inTriggeredRadioTrackTrainMessage);
  kcg_copy_CompressedRadioMessage_TM(
    &outC->outTriggeredRadioTrackTrainMessage,
    &outC->_L27);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->_L25,
    inRadioTrainTrackMessage);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->outRadioTrainTrackMessage,
    &outC->_L25);
  /* POSITION_REPORT_SM: */
  switch (outC->POSITION_REPORT_SM_state_sel) {
    case SSM_st_PROCESS_POSITION_REPORT_POSITION_REPORT_SM :
      if (tr_1_guard_PROCESS_POSITION_REPORT_POSITION_REPORT_SM) {
        _7_POSITION_REPORT_SM_fired_strong_partial =
          SSM_TR_PROCESS_POSITION_REPORT_PROCESS_POSITION_REPORT_1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM;
      }
      else if (tr_2_guard_PROCESS_POSITION_REPORT_POSITION_REPORT_SM) {
        _7_POSITION_REPORT_SM_fired_strong_partial =
          SSM_TR_PROCESS_POSITION_REPORT_IDLE_2_PROCESS_POSITION_REPORT_POSITION_REPORT_SM;
      }
      else {
        _7_POSITION_REPORT_SM_fired_strong_partial = SSM_TR_no_trans_POSITION_REPORT_SM;
      }
      outC->POSITION_REPORT_SM_fired_strong =
        _7_POSITION_REPORT_SM_fired_strong_partial;
      break;
    case SSM_st_IDLE_POSITION_REPORT_SM :
      if (tr_1_guard_IDLE_POSITION_REPORT_SM) {
        POSITION_REPORT_SM_fired_strong_partial =
          SSM_TR_IDLE_PROCESS_POSITION_REPORT_1_IDLE_POSITION_REPORT_SM;
      }
      else {
        POSITION_REPORT_SM_fired_strong_partial = SSM_TR_no_trans_POSITION_REPORT_SM;
      }
      outC->POSITION_REPORT_SM_fired_strong = POSITION_REPORT_SM_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* POSITION_REPORT_SM: */
  switch (outC->POSITION_REPORT_SM_state_act) {
    case SSM_st_PROCESS_POSITION_REPORT_POSITION_REPORT_SM :
      _4_POSITION_REPORT_SM_fired_partial = outC->POSITION_REPORT_SM_fired_strong;
      _3_POSITION_REPORT_SM_reset_nxt_partial = kcg_false;
      _2_POSITION_REPORT_SM_state_nxt_partial =
        SSM_st_PROCESS_POSITION_REPORT_POSITION_REPORT_SM;
      outC->POSITION_REPORT_SM_state_nxt = _2_POSITION_REPORT_SM_state_nxt_partial;
      break;
    case SSM_st_IDLE_POSITION_REPORT_SM :
      POSITION_REPORT_SM_fired_partial = outC->POSITION_REPORT_SM_fired_strong;
      POSITION_REPORT_SM_reset_nxt_partial = kcg_false;
      POSITION_REPORT_SM_state_nxt_partial = SSM_st_IDLE_POSITION_REPORT_SM;
      outC->POSITION_REPORT_SM_state_nxt = POSITION_REPORT_SM_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  POSITION_REPORT_SM_reset_sel = outC->POSITION_REPORT_SM_reset_nxt;
  /* POSITION_REPORT_SM: */
  switch (outC->POSITION_REPORT_SM_state_act) {
    case SSM_st_PROCESS_POSITION_REPORT_POSITION_REPORT_SM :
      outC->POSITION_REPORT_SM_reset_nxt = _3_POSITION_REPORT_SM_reset_nxt_partial;
      outC->POSITION_REPORT_SM_fired = _4_POSITION_REPORT_SM_fired_partial;
      break;
    case SSM_st_IDLE_POSITION_REPORT_SM :
      outC->POSITION_REPORT_SM_reset_nxt = POSITION_REPORT_SM_reset_nxt_partial;
      outC->POSITION_REPORT_SM_fired = POSITION_REPORT_SM_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->POSITION_REPORT_SM_state_sel) {
    case SSM_st_PROCESS_POSITION_REPORT_POSITION_REPORT_SM :
      if (tr_1_guard_PROCESS_POSITION_REPORT_POSITION_REPORT_SM) {
        _6_POSITION_REPORT_SM_reset_act_partial = kcg_true;
      }
      else {
        _6_POSITION_REPORT_SM_reset_act_partial =
          tr_2_guard_PROCESS_POSITION_REPORT_POSITION_REPORT_SM;
      }
      break;
    case SSM_st_IDLE_POSITION_REPORT_SM :
      POSITION_REPORT_SM_reset_act_partial = tr_1_guard_IDLE_POSITION_REPORT_SM;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  POSITION_REPORT_SM_reset_prv = outC->POSITION_REPORT_SM_reset_act;
  /* POSITION_REPORT_SM: */
  switch (outC->POSITION_REPORT_SM_state_sel) {
    case SSM_st_PROCESS_POSITION_REPORT_POSITION_REPORT_SM :
      outC->POSITION_REPORT_SM_reset_act = _6_POSITION_REPORT_SM_reset_act_partial;
      break;
    case SSM_st_IDLE_POSITION_REPORT_SM :
      outC->POSITION_REPORT_SM_reset_act = POSITION_REPORT_SM_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void RBC__ProcessPositionReport_init_RBC_Model_Pkg(
  outC_RBC__ProcessPositionReport_RBC_Model_Pkg *outC)
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
  static kcg_size idx71;
  static kcg_size idx72;
  static kcg_size idx73;
  static kcg_size idx74;
  static kcg_size idx75;
  static kcg_size idx76;
  static kcg_size idx77;
  static kcg_size idx78;
  static kcg_size idx79;
  static kcg_size idx80;
  static kcg_size idx81;
  static kcg_size idx82;
  static kcg_size idx83;
  static kcg_size idx84;
  static kcg_size idx85;
  static kcg_size idx86;
  static kcg_size idx87;
  static kcg_size idx88;
  static kcg_size idx89;
  static kcg_size idx90;
  static kcg_size idx91;
  static kcg_size idx92;
  static kcg_size idx93;
  static kcg_size idx94;

  outC->_L25.present = kcg_true;
  outC->_L25.header.present = kcg_true;
  outC->_L25.header.nid_message = kcg_lit_int32(0);
  outC->_L25.header.t_train = kcg_lit_int32(0);
  outC->_L25.header.nid_engine = kcg_lit_int32(0);
  outC->_L25.header.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L25.header.xT_TRAIN = kcg_lit_int32(0);
  outC->_L25.header.xNID_EM = kcg_lit_int32(0);
  outC->_L25.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L25.header.xNID_TEXTMESSAGE = kcg_lit_int32(0);
  outC->_L25.packets.p0.valid = kcg_true;
  outC->_L25.packets.p0.packet0.NID_PACKET = kcg_lit_int32(0);
  outC->_L25.packets.p0.packet0.L_PACKET = kcg_lit_int32(0);
  outC->_L25.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L25.packets.p0.packet0.NID_LRBG = kcg_lit_int32(0);
  outC->_L25.packets.p0.packet0.D_LRBG = kcg_lit_int32(0);
  outC->_L25.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L25.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L25.packets.p0.packet0.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L25.packets.p0.packet0.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L25.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L25.packets.p0.packet0.L_TRAININT = kcg_lit_int32(0);
  outC->_L25.packets.p0.packet0.V_TRAIN = kcg_lit_int32(0);
  outC->_L25.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L25.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->_L25.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L25.packets.p0.packet0.NID_NTC = kcg_lit_int32(0);
  outC->_L25.packets.p1.valid = kcg_true;
  outC->_L25.packets.p1.packet1.NID_PACKET = kcg_lit_int32(0);
  outC->_L25.packets.p1.packet1.L_PACKET = kcg_lit_int32(0);
  outC->_L25.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L25.packets.p1.packet1.NID_LRBG = kcg_lit_int32(0);
  outC->_L25.packets.p1.packet1.NID_PRVLRBG = kcg_lit_int32(0);
  outC->_L25.packets.p1.packet1.D_LRBG = kcg_lit_int32(0);
  outC->_L25.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L25.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L25.packets.p1.packet1.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L25.packets.p1.packet1.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L25.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L25.packets.p1.packet1.L_TRAININT = kcg_lit_int32(0);
  outC->_L25.packets.p1.packet1.V_TRAIN = kcg_lit_int32(0);
  outC->_L25.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L25.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L25.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L25.packets.p1.packet1.NID_NTC = kcg_lit_int32(0);
  outC->_L25.packets.p3.valid = kcg_true;
  outC->_L25.packets.p3.number = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 1; idx1++) {
    outC->_L25.packets.p3.aNID_RADIO[idx1].valid = kcg_true;
    for (idx = 0; idx < 15; idx++) {
      outC->_L25.packets.p3.aNID_RADIO[idx1].telephoneNumber[idx] = kcg_lit_int32(0);
    }
  }
  outC->_L25.packets.p4.valid = kcg_true;
  outC->_L25.packets.p4.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L25.packets.p5.valid = kcg_true;
  outC->_L25.packets.p5.TrainRunningNumber = kcg_lit_int32(0);
  outC->_L25.packets.p9.valid = kcg_true;
  outC->_L25.packets.p9.transitionInformation = kcg_lit_int32(0);
  outC->_L25.packets.p11.valid = kcg_true;
  outC->_L25.packets.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L25.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L25.packets.p11.l_train = kcg_lit_int32(0);
  outC->_L25.packets.p11.v_maxtrain = kcg_lit_int32(0);
  outC->_L25.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L25.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L25.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L25.packets.p11.n_axle = kcg_lit_int32(0);
  outC->_L25.packets.p11.nIter_tractionIdentity = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 4; idx2++) {
    outC->_L25.packets.p11.tractionIdentity[idx2].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L25.packets.p11.tractionIdentity[idx2].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L25.packets.p11.nIter_ntc = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->_L25.packets.p11.nid_ntc[idx3] = kcg_lit_int32(0);
  }
  outC->_L27.Header.radioDevice = kcg_lit_int32(0);
  outC->_L27.Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L27.Header.nid_message = kcg_lit_int32(0);
  outC->_L27.Header.t_train = kcg_lit_int32(0);
  outC->_L27.Header.m_ack = kcg_lit_int32(0);
  outC->_L27.Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L27.Header.t_train_reference = kcg_lit_int32(0);
  outC->_L27.Header.nid_em = kcg_lit_int32(0);
  outC->_L27.Header.q_scale = kcg_lit_int32(0);
  outC->_L27.Header.d_sr = kcg_lit_int32(0);
  outC->_L27.Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L27.Header.d_ref = kcg_lit_int32(0);
  outC->_L27.Header.q_dir = kcg_lit_int32(0);
  outC->_L27.Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L27.Header.m_version = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L27.Messages.PacketHeaders[idx4].nid_packet = kcg_lit_int32(0);
    outC->_L27.Messages.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->_L27.Messages.PacketHeaders[idx4].valid = kcg_true;
    outC->_L27.Messages.PacketHeaders[idx4].startAddress = kcg_lit_int32(0);
    outC->_L27.Messages.PacketHeaders[idx4].endAddress = kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L27.Messages.PacketData[idx5] = kcg_lit_int32(0);
  }
  outC->_L29.session.m_TrainData.nid_engine = kcg_lit_int32(0);
  outC->_L29.session.m_TrainData.m_NumberOfOnboardPhoneNumbers = kcg_lit_int32(0);
  for (idx7 = 0; idx7 < 1; idx7++) {
    outC->_L29.session.m_TrainData.m_OnboardPhoneNumbers[idx7].valid = kcg_true;
    for (idx6 = 0; idx6 < 15; idx6++) {
      outC->_L29.session.m_TrainData.m_OnboardPhoneNumbers[idx7].telephoneNumber[idx6] =
        kcg_lit_int32(0);
    }
  }
  outC->_L29.session.m_TrainData.t_train_ref = kcg_lit_int32(0);
  outC->_L29.session.m_TrainData.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L29.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L29.session.m_TrainData.l_train = kcg_lit_int32(0);
  outC->_L29.session.m_TrainData.v_maxtrain = kcg_lit_int32(0);
  outC->_L29.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L29.session.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L29.session.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L29.session.m_TrainData.n_axle = kcg_lit_int32(0);
  for (idx8 = 0; idx8 < 4; idx8++) {
    outC->_L29.session.m_TrainData.m_TractionIdentities[idx8].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L29.session.m_TrainData.m_TractionIdentities[idx8].nid_ctraction =
      kcg_lit_int32(0);
  }
  for (idx9 = 0; idx9 < 5; idx9++) {
    outC->_L29.session.m_TrainData.m_NationalSystemIdentities[idx9] =
      kcg_lit_int32(0);
  }
  outC->_L29.session.m_TrainData.nid_operational = kcg_lit_int32(0);
  outC->_L29.session.m_PosData.nid_lrbg = kcg_lit_int32(0);
  outC->_L29.session.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L29.session.m_PosData.d_lrbg = kcg_lit_int32(0);
  outC->_L29.session.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L29.session.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L29.session.m_PosData.l_doubtover = kcg_lit_int32(0);
  outC->_L29.session.m_PosData.l_doubtunder = kcg_lit_int32(0);
  outC->_L29.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L29.session.m_PosData.l_trainint = kcg_lit_int32(0);
  outC->_L29.session.m_PosData.v_train = kcg_lit_int32(0);
  outC->_L29.session.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L29.session.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L29.session.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L29.session.m_PosData.nid_ntc = kcg_lit_int32(0);
  outC->_L29.session.m_PosData.nid_prvlrbg = kcg_lit_int32(0);
  outC->_L29.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L29.config.m_NationalParams.nid_c = kcg_lit_int32(0);
  outC->_L29.config.m_NationalParams.v_nvshunt = kcg_lit_int32(0);
  outC->_L29.config.m_NationalParams.v_nvstff = kcg_lit_int32(0);
  outC->_L29.config.m_NationalParams.v_nvonsight = kcg_lit_int32(0);
  outC->_L29.config.m_NationalParams.v_nvunfit = kcg_lit_int32(0);
  outC->_L29.config.m_NationalParams.v_nvrel = kcg_lit_int32(0);
  outC->_L29.config.m_NationalParams.t_nvcontact = kcg_lit_int32(0);
  outC->_L29.config.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->_L29.config.m_MAReqParams.t_mar = kcg_lit_int32(0);
  outC->_L29.config.m_MAReqParams.t_timeoutrqst = kcg_lit_int32(0);
  outC->_L29.config.m_MAReqParams.t_cycrqst = kcg_lit_int32(0);
  outC->_L29.config.m_PosRepParams.q_dir = Q_DIR_Reverse;
  outC->_L29.config.m_PosRepParams.q_scale = Q_SCALE_10_cm_scale;
  outC->_L29.config.m_PosRepParams.t_cycloc = kcg_lit_int32(0);
  outC->_L29.config.m_PosRepParams.d_cycloc = kcg_lit_int32(0);
  outC->_L29.config.m_PosRepParams.m_loc = M_LOC_Now;
  outC->_L29.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int32(0);
  for (idx10 = 0; idx10 < 32; idx10++) {
    outC->_L29.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx10].d_loc =
      kcg_lit_int32(0);
    outC->_L29.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx10].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx11 = 0; idx11 < 16; idx11++) {
    outC->_L29.diagnostic[idx11].valid = kcg_true;
    outC->_L29.diagnostic[idx11].count = kcg_lit_int32(0);
    outC->_L29.diagnostic[idx11].timestamp = kcg_lit_int32(0);
    outC->_L29.diagnostic[idx11].diagType = DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L29.diagnostic[idx11].diagSrc = DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L29.diagnostic[idx11].diagText = DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx14 = 0; idx14 < 8; idx14++) {
    outC->_L29.messageQueue.m_Entries[idx14].m_IsValid = kcg_true;
    outC->_L29.messageQueue.m_Entries[idx14].m_Entry.Header.radioDevice =
      kcg_lit_int32(0);
    outC->_L29.messageQueue.m_Entries[idx14].m_Entry.Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->_L29.messageQueue.m_Entries[idx14].m_Entry.Header.nid_message =
      kcg_lit_int32(0);
    outC->_L29.messageQueue.m_Entries[idx14].m_Entry.Header.t_train =
      kcg_lit_int32(0);
    outC->_L29.messageQueue.m_Entries[idx14].m_Entry.Header.m_ack =
      kcg_lit_int32(0);
    outC->_L29.messageQueue.m_Entries[idx14].m_Entry.Header.nid_lrbg =
      kcg_lit_int32(0);
    outC->_L29.messageQueue.m_Entries[idx14].m_Entry.Header.t_train_reference =
      kcg_lit_int32(0);
    outC->_L29.messageQueue.m_Entries[idx14].m_Entry.Header.nid_em =
      kcg_lit_int32(0);
    outC->_L29.messageQueue.m_Entries[idx14].m_Entry.Header.q_scale =
      kcg_lit_int32(0);
    outC->_L29.messageQueue.m_Entries[idx14].m_Entry.Header.d_sr = kcg_lit_int32(0);
    outC->_L29.messageQueue.m_Entries[idx14].m_Entry.Header.t_sh_rqst =
      kcg_lit_int32(0);
    outC->_L29.messageQueue.m_Entries[idx14].m_Entry.Header.d_ref =
      kcg_lit_int32(0);
    outC->_L29.messageQueue.m_Entries[idx14].m_Entry.Header.q_dir =
      kcg_lit_int32(0);
    outC->_L29.messageQueue.m_Entries[idx14].m_Entry.Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->_L29.messageQueue.m_Entries[idx14].m_Entry.Header.m_version =
      kcg_lit_int32(0);
    for (idx12 = 0; idx12 < 30; idx12++) {
      outC->_L29.messageQueue.m_Entries[idx14].m_Entry.Messages.PacketHeaders[idx12].nid_packet =
        kcg_lit_int32(0);
      outC->_L29.messageQueue.m_Entries[idx14].m_Entry.Messages.PacketHeaders[idx12].q_dir =
        Q_DIR_Reverse;
      outC->_L29.messageQueue.m_Entries[idx14].m_Entry.Messages.PacketHeaders[idx12].valid =
        kcg_true;
      outC->_L29.messageQueue.m_Entries[idx14].m_Entry.Messages.PacketHeaders[idx12].startAddress =
        kcg_lit_int32(0);
      outC->_L29.messageQueue.m_Entries[idx14].m_Entry.Messages.PacketHeaders[idx12].endAddress =
        kcg_lit_int32(0);
    }
    for (idx13 = 0; idx13 < 500; idx13++) {
      outC->_L29.messageQueue.m_Entries[idx14].m_Entry.Messages.PacketData[idx13] =
        kcg_lit_int32(0);
    }
  }
  outC->_L29.clockk.m_Value = kcg_lit_int32(0);
  outC->_L29.lastSentTrackTrainMessage.Header.radioDevice = kcg_lit_int32(0);
  outC->_L29.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L29.lastSentTrackTrainMessage.Header.nid_message = kcg_lit_int32(0);
  outC->_L29.lastSentTrackTrainMessage.Header.t_train = kcg_lit_int32(0);
  outC->_L29.lastSentTrackTrainMessage.Header.m_ack = kcg_lit_int32(0);
  outC->_L29.lastSentTrackTrainMessage.Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L29.lastSentTrackTrainMessage.Header.t_train_reference = kcg_lit_int32(
      0);
  outC->_L29.lastSentTrackTrainMessage.Header.nid_em = kcg_lit_int32(0);
  outC->_L29.lastSentTrackTrainMessage.Header.q_scale = kcg_lit_int32(0);
  outC->_L29.lastSentTrackTrainMessage.Header.d_sr = kcg_lit_int32(0);
  outC->_L29.lastSentTrackTrainMessage.Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L29.lastSentTrackTrainMessage.Header.d_ref = kcg_lit_int32(0);
  outC->_L29.lastSentTrackTrainMessage.Header.q_dir = kcg_lit_int32(0);
  outC->_L29.lastSentTrackTrainMessage.Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L29.lastSentTrackTrainMessage.Header.m_version = kcg_lit_int32(0);
  for (idx15 = 0; idx15 < 30; idx15++) {
    outC->_L29.lastSentTrackTrainMessage.Messages.PacketHeaders[idx15].nid_packet =
      kcg_lit_int32(0);
    outC->_L29.lastSentTrackTrainMessage.Messages.PacketHeaders[idx15].q_dir =
      Q_DIR_Reverse;
    outC->_L29.lastSentTrackTrainMessage.Messages.PacketHeaders[idx15].valid =
      kcg_true;
    outC->_L29.lastSentTrackTrainMessage.Messages.PacketHeaders[idx15].startAddress =
      kcg_lit_int32(0);
    outC->_L29.lastSentTrackTrainMessage.Messages.PacketHeaders[idx15].endAddress =
      kcg_lit_int32(0);
  }
  for (idx16 = 0; idx16 < 500; idx16++) {
    outC->_L29.lastSentTrackTrainMessage.Messages.PacketData[idx16] =
      kcg_lit_int32(0);
  }
  outC->_L30.session.m_TrainData.nid_engine = kcg_lit_int32(0);
  outC->_L30.session.m_TrainData.m_NumberOfOnboardPhoneNumbers = kcg_lit_int32(0);
  for (idx18 = 0; idx18 < 1; idx18++) {
    outC->_L30.session.m_TrainData.m_OnboardPhoneNumbers[idx18].valid = kcg_true;
    for (idx17 = 0; idx17 < 15; idx17++) {
      outC->_L30.session.m_TrainData.m_OnboardPhoneNumbers[idx18].telephoneNumber[idx17] =
        kcg_lit_int32(0);
    }
  }
  outC->_L30.session.m_TrainData.t_train_ref = kcg_lit_int32(0);
  outC->_L30.session.m_TrainData.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L30.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L30.session.m_TrainData.l_train = kcg_lit_int32(0);
  outC->_L30.session.m_TrainData.v_maxtrain = kcg_lit_int32(0);
  outC->_L30.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L30.session.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L30.session.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L30.session.m_TrainData.n_axle = kcg_lit_int32(0);
  for (idx19 = 0; idx19 < 4; idx19++) {
    outC->_L30.session.m_TrainData.m_TractionIdentities[idx19].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L30.session.m_TrainData.m_TractionIdentities[idx19].nid_ctraction =
      kcg_lit_int32(0);
  }
  for (idx20 = 0; idx20 < 5; idx20++) {
    outC->_L30.session.m_TrainData.m_NationalSystemIdentities[idx20] =
      kcg_lit_int32(0);
  }
  outC->_L30.session.m_TrainData.nid_operational = kcg_lit_int32(0);
  outC->_L30.session.m_PosData.nid_lrbg = kcg_lit_int32(0);
  outC->_L30.session.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L30.session.m_PosData.d_lrbg = kcg_lit_int32(0);
  outC->_L30.session.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L30.session.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L30.session.m_PosData.l_doubtover = kcg_lit_int32(0);
  outC->_L30.session.m_PosData.l_doubtunder = kcg_lit_int32(0);
  outC->_L30.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L30.session.m_PosData.l_trainint = kcg_lit_int32(0);
  outC->_L30.session.m_PosData.v_train = kcg_lit_int32(0);
  outC->_L30.session.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L30.session.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L30.session.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L30.session.m_PosData.nid_ntc = kcg_lit_int32(0);
  outC->_L30.session.m_PosData.nid_prvlrbg = kcg_lit_int32(0);
  outC->_L30.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L30.config.m_NationalParams.nid_c = kcg_lit_int32(0);
  outC->_L30.config.m_NationalParams.v_nvshunt = kcg_lit_int32(0);
  outC->_L30.config.m_NationalParams.v_nvstff = kcg_lit_int32(0);
  outC->_L30.config.m_NationalParams.v_nvonsight = kcg_lit_int32(0);
  outC->_L30.config.m_NationalParams.v_nvunfit = kcg_lit_int32(0);
  outC->_L30.config.m_NationalParams.v_nvrel = kcg_lit_int32(0);
  outC->_L30.config.m_NationalParams.t_nvcontact = kcg_lit_int32(0);
  outC->_L30.config.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->_L30.config.m_MAReqParams.t_mar = kcg_lit_int32(0);
  outC->_L30.config.m_MAReqParams.t_timeoutrqst = kcg_lit_int32(0);
  outC->_L30.config.m_MAReqParams.t_cycrqst = kcg_lit_int32(0);
  outC->_L30.config.m_PosRepParams.q_dir = Q_DIR_Reverse;
  outC->_L30.config.m_PosRepParams.q_scale = Q_SCALE_10_cm_scale;
  outC->_L30.config.m_PosRepParams.t_cycloc = kcg_lit_int32(0);
  outC->_L30.config.m_PosRepParams.d_cycloc = kcg_lit_int32(0);
  outC->_L30.config.m_PosRepParams.m_loc = M_LOC_Now;
  outC->_L30.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int32(0);
  for (idx21 = 0; idx21 < 32; idx21++) {
    outC->_L30.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx21].d_loc =
      kcg_lit_int32(0);
    outC->_L30.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx21].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx22 = 0; idx22 < 16; idx22++) {
    outC->_L30.diagnostic[idx22].valid = kcg_true;
    outC->_L30.diagnostic[idx22].count = kcg_lit_int32(0);
    outC->_L30.diagnostic[idx22].timestamp = kcg_lit_int32(0);
    outC->_L30.diagnostic[idx22].diagType = DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L30.diagnostic[idx22].diagSrc = DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L30.diagnostic[idx22].diagText = DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx25 = 0; idx25 < 8; idx25++) {
    outC->_L30.messageQueue.m_Entries[idx25].m_IsValid = kcg_true;
    outC->_L30.messageQueue.m_Entries[idx25].m_Entry.Header.radioDevice =
      kcg_lit_int32(0);
    outC->_L30.messageQueue.m_Entries[idx25].m_Entry.Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->_L30.messageQueue.m_Entries[idx25].m_Entry.Header.nid_message =
      kcg_lit_int32(0);
    outC->_L30.messageQueue.m_Entries[idx25].m_Entry.Header.t_train =
      kcg_lit_int32(0);
    outC->_L30.messageQueue.m_Entries[idx25].m_Entry.Header.m_ack =
      kcg_lit_int32(0);
    outC->_L30.messageQueue.m_Entries[idx25].m_Entry.Header.nid_lrbg =
      kcg_lit_int32(0);
    outC->_L30.messageQueue.m_Entries[idx25].m_Entry.Header.t_train_reference =
      kcg_lit_int32(0);
    outC->_L30.messageQueue.m_Entries[idx25].m_Entry.Header.nid_em =
      kcg_lit_int32(0);
    outC->_L30.messageQueue.m_Entries[idx25].m_Entry.Header.q_scale =
      kcg_lit_int32(0);
    outC->_L30.messageQueue.m_Entries[idx25].m_Entry.Header.d_sr = kcg_lit_int32(0);
    outC->_L30.messageQueue.m_Entries[idx25].m_Entry.Header.t_sh_rqst =
      kcg_lit_int32(0);
    outC->_L30.messageQueue.m_Entries[idx25].m_Entry.Header.d_ref =
      kcg_lit_int32(0);
    outC->_L30.messageQueue.m_Entries[idx25].m_Entry.Header.q_dir =
      kcg_lit_int32(0);
    outC->_L30.messageQueue.m_Entries[idx25].m_Entry.Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->_L30.messageQueue.m_Entries[idx25].m_Entry.Header.m_version =
      kcg_lit_int32(0);
    for (idx23 = 0; idx23 < 30; idx23++) {
      outC->_L30.messageQueue.m_Entries[idx25].m_Entry.Messages.PacketHeaders[idx23].nid_packet =
        kcg_lit_int32(0);
      outC->_L30.messageQueue.m_Entries[idx25].m_Entry.Messages.PacketHeaders[idx23].q_dir =
        Q_DIR_Reverse;
      outC->_L30.messageQueue.m_Entries[idx25].m_Entry.Messages.PacketHeaders[idx23].valid =
        kcg_true;
      outC->_L30.messageQueue.m_Entries[idx25].m_Entry.Messages.PacketHeaders[idx23].startAddress =
        kcg_lit_int32(0);
      outC->_L30.messageQueue.m_Entries[idx25].m_Entry.Messages.PacketHeaders[idx23].endAddress =
        kcg_lit_int32(0);
    }
    for (idx24 = 0; idx24 < 500; idx24++) {
      outC->_L30.messageQueue.m_Entries[idx25].m_Entry.Messages.PacketData[idx24] =
        kcg_lit_int32(0);
    }
  }
  outC->_L30.clockk.m_Value = kcg_lit_int32(0);
  outC->_L30.lastSentTrackTrainMessage.Header.radioDevice = kcg_lit_int32(0);
  outC->_L30.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L30.lastSentTrackTrainMessage.Header.nid_message = kcg_lit_int32(0);
  outC->_L30.lastSentTrackTrainMessage.Header.t_train = kcg_lit_int32(0);
  outC->_L30.lastSentTrackTrainMessage.Header.m_ack = kcg_lit_int32(0);
  outC->_L30.lastSentTrackTrainMessage.Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L30.lastSentTrackTrainMessage.Header.t_train_reference = kcg_lit_int32(
      0);
  outC->_L30.lastSentTrackTrainMessage.Header.nid_em = kcg_lit_int32(0);
  outC->_L30.lastSentTrackTrainMessage.Header.q_scale = kcg_lit_int32(0);
  outC->_L30.lastSentTrackTrainMessage.Header.d_sr = kcg_lit_int32(0);
  outC->_L30.lastSentTrackTrainMessage.Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L30.lastSentTrackTrainMessage.Header.d_ref = kcg_lit_int32(0);
  outC->_L30.lastSentTrackTrainMessage.Header.q_dir = kcg_lit_int32(0);
  outC->_L30.lastSentTrackTrainMessage.Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L30.lastSentTrackTrainMessage.Header.m_version = kcg_lit_int32(0);
  for (idx26 = 0; idx26 < 30; idx26++) {
    outC->_L30.lastSentTrackTrainMessage.Messages.PacketHeaders[idx26].nid_packet =
      kcg_lit_int32(0);
    outC->_L30.lastSentTrackTrainMessage.Messages.PacketHeaders[idx26].q_dir =
      Q_DIR_Reverse;
    outC->_L30.lastSentTrackTrainMessage.Messages.PacketHeaders[idx26].valid =
      kcg_true;
    outC->_L30.lastSentTrackTrainMessage.Messages.PacketHeaders[idx26].startAddress =
      kcg_lit_int32(0);
    outC->_L30.lastSentTrackTrainMessage.Messages.PacketHeaders[idx26].endAddress =
      kcg_lit_int32(0);
  }
  for (idx27 = 0; idx27 < 500; idx27++) {
    outC->_L30.lastSentTrackTrainMessage.Messages.PacketData[idx27] =
      kcg_lit_int32(0);
  }
  outC->_L32.m_TrainData.nid_engine = kcg_lit_int32(0);
  outC->_L32.m_TrainData.m_NumberOfOnboardPhoneNumbers = kcg_lit_int32(0);
  for (idx29 = 0; idx29 < 1; idx29++) {
    outC->_L32.m_TrainData.m_OnboardPhoneNumbers[idx29].valid = kcg_true;
    for (idx28 = 0; idx28 < 15; idx28++) {
      outC->_L32.m_TrainData.m_OnboardPhoneNumbers[idx29].telephoneNumber[idx28] =
        kcg_lit_int32(0);
    }
  }
  outC->_L32.m_TrainData.t_train_ref = kcg_lit_int32(0);
  outC->_L32.m_TrainData.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L32.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L32.m_TrainData.l_train = kcg_lit_int32(0);
  outC->_L32.m_TrainData.v_maxtrain = kcg_lit_int32(0);
  outC->_L32.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L32.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L32.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L32.m_TrainData.n_axle = kcg_lit_int32(0);
  for (idx30 = 0; idx30 < 4; idx30++) {
    outC->_L32.m_TrainData.m_TractionIdentities[idx30].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L32.m_TrainData.m_TractionIdentities[idx30].nid_ctraction =
      kcg_lit_int32(0);
  }
  for (idx31 = 0; idx31 < 5; idx31++) {
    outC->_L32.m_TrainData.m_NationalSystemIdentities[idx31] = kcg_lit_int32(0);
  }
  outC->_L32.m_TrainData.nid_operational = kcg_lit_int32(0);
  outC->_L32.m_PosData.nid_lrbg = kcg_lit_int32(0);
  outC->_L32.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L32.m_PosData.d_lrbg = kcg_lit_int32(0);
  outC->_L32.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L32.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L32.m_PosData.l_doubtover = kcg_lit_int32(0);
  outC->_L32.m_PosData.l_doubtunder = kcg_lit_int32(0);
  outC->_L32.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L32.m_PosData.l_trainint = kcg_lit_int32(0);
  outC->_L32.m_PosData.v_train = kcg_lit_int32(0);
  outC->_L32.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L32.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L32.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L32.m_PosData.nid_ntc = kcg_lit_int32(0);
  outC->_L32.m_PosData.nid_prvlrbg = kcg_lit_int32(0);
  outC->_L16.present = kcg_true;
  outC->_L16.nid_message = kcg_lit_int32(0);
  outC->_L16.t_train = kcg_lit_int32(0);
  outC->_L16.nid_engine = kcg_lit_int32(0);
  outC->_L16.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L16.xT_TRAIN = kcg_lit_int32(0);
  outC->_L16.xNID_EM = kcg_lit_int32(0);
  outC->_L16.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L16.xNID_TEXTMESSAGE = kcg_lit_int32(0);
  outC->_L17.present = kcg_true;
  outC->_L17.header.present = kcg_true;
  outC->_L17.header.nid_message = kcg_lit_int32(0);
  outC->_L17.header.t_train = kcg_lit_int32(0);
  outC->_L17.header.nid_engine = kcg_lit_int32(0);
  outC->_L17.header.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L17.header.xT_TRAIN = kcg_lit_int32(0);
  outC->_L17.header.xNID_EM = kcg_lit_int32(0);
  outC->_L17.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L17.header.xNID_TEXTMESSAGE = kcg_lit_int32(0);
  outC->_L17.packets.p0.valid = kcg_true;
  outC->_L17.packets.p0.packet0.NID_PACKET = kcg_lit_int32(0);
  outC->_L17.packets.p0.packet0.L_PACKET = kcg_lit_int32(0);
  outC->_L17.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L17.packets.p0.packet0.NID_LRBG = kcg_lit_int32(0);
  outC->_L17.packets.p0.packet0.D_LRBG = kcg_lit_int32(0);
  outC->_L17.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L17.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L17.packets.p0.packet0.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L17.packets.p0.packet0.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L17.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L17.packets.p0.packet0.L_TRAININT = kcg_lit_int32(0);
  outC->_L17.packets.p0.packet0.V_TRAIN = kcg_lit_int32(0);
  outC->_L17.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L17.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->_L17.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L17.packets.p0.packet0.NID_NTC = kcg_lit_int32(0);
  outC->_L17.packets.p1.valid = kcg_true;
  outC->_L17.packets.p1.packet1.NID_PACKET = kcg_lit_int32(0);
  outC->_L17.packets.p1.packet1.L_PACKET = kcg_lit_int32(0);
  outC->_L17.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L17.packets.p1.packet1.NID_LRBG = kcg_lit_int32(0);
  outC->_L17.packets.p1.packet1.NID_PRVLRBG = kcg_lit_int32(0);
  outC->_L17.packets.p1.packet1.D_LRBG = kcg_lit_int32(0);
  outC->_L17.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L17.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L17.packets.p1.packet1.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L17.packets.p1.packet1.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L17.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L17.packets.p1.packet1.L_TRAININT = kcg_lit_int32(0);
  outC->_L17.packets.p1.packet1.V_TRAIN = kcg_lit_int32(0);
  outC->_L17.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L17.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L17.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L17.packets.p1.packet1.NID_NTC = kcg_lit_int32(0);
  outC->_L17.packets.p3.valid = kcg_true;
  outC->_L17.packets.p3.number = kcg_lit_int32(0);
  for (idx33 = 0; idx33 < 1; idx33++) {
    outC->_L17.packets.p3.aNID_RADIO[idx33].valid = kcg_true;
    for (idx32 = 0; idx32 < 15; idx32++) {
      outC->_L17.packets.p3.aNID_RADIO[idx33].telephoneNumber[idx32] =
        kcg_lit_int32(0);
    }
  }
  outC->_L17.packets.p4.valid = kcg_true;
  outC->_L17.packets.p4.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L17.packets.p5.valid = kcg_true;
  outC->_L17.packets.p5.TrainRunningNumber = kcg_lit_int32(0);
  outC->_L17.packets.p9.valid = kcg_true;
  outC->_L17.packets.p9.transitionInformation = kcg_lit_int32(0);
  outC->_L17.packets.p11.valid = kcg_true;
  outC->_L17.packets.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L17.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L17.packets.p11.l_train = kcg_lit_int32(0);
  outC->_L17.packets.p11.v_maxtrain = kcg_lit_int32(0);
  outC->_L17.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L17.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L17.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L17.packets.p11.n_axle = kcg_lit_int32(0);
  outC->_L17.packets.p11.nIter_tractionIdentity = kcg_lit_int32(0);
  for (idx34 = 0; idx34 < 4; idx34++) {
    outC->_L17.packets.p11.tractionIdentity[idx34].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L17.packets.p11.tractionIdentity[idx34].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L17.packets.p11.nIter_ntc = kcg_lit_int32(0);
  for (idx35 = 0; idx35 < 5; idx35++) {
    outC->_L17.packets.p11.nid_ntc[idx35] = kcg_lit_int32(0);
  }
  outC->_L18 = kcg_lit_int32(0);
  outC->session.m_TrainData.nid_engine = kcg_lit_int32(0);
  outC->session.m_TrainData.m_NumberOfOnboardPhoneNumbers = kcg_lit_int32(0);
  for (idx37 = 0; idx37 < 1; idx37++) {
    outC->session.m_TrainData.m_OnboardPhoneNumbers[idx37].valid = kcg_true;
    for (idx36 = 0; idx36 < 15; idx36++) {
      outC->session.m_TrainData.m_OnboardPhoneNumbers[idx37].telephoneNumber[idx36] =
        kcg_lit_int32(0);
    }
  }
  outC->session.m_TrainData.t_train_ref = kcg_lit_int32(0);
  outC->session.m_TrainData.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->session.m_TrainData.l_train = kcg_lit_int32(0);
  outC->session.m_TrainData.v_maxtrain = kcg_lit_int32(0);
  outC->session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->session.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->session.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->session.m_TrainData.n_axle = kcg_lit_int32(0);
  for (idx38 = 0; idx38 < 4; idx38++) {
    outC->session.m_TrainData.m_TractionIdentities[idx38].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->session.m_TrainData.m_TractionIdentities[idx38].nid_ctraction =
      kcg_lit_int32(0);
  }
  for (idx39 = 0; idx39 < 5; idx39++) {
    outC->session.m_TrainData.m_NationalSystemIdentities[idx39] = kcg_lit_int32(0);
  }
  outC->session.m_TrainData.nid_operational = kcg_lit_int32(0);
  outC->session.m_PosData.nid_lrbg = kcg_lit_int32(0);
  outC->session.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->session.m_PosData.d_lrbg = kcg_lit_int32(0);
  outC->session.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->session.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->session.m_PosData.l_doubtover = kcg_lit_int32(0);
  outC->session.m_PosData.l_doubtunder = kcg_lit_int32(0);
  outC->session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->session.m_PosData.l_trainint = kcg_lit_int32(0);
  outC->session.m_PosData.v_train = kcg_lit_int32(0);
  outC->session.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->session.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->session.m_PosData.m_level = M_LEVEL_Level_0;
  outC->session.m_PosData.nid_ntc = kcg_lit_int32(0);
  outC->session.m_PosData.nid_prvlrbg = kcg_lit_int32(0);
  outC->radioTrainTrackMessageId = kcg_lit_int32(0);
  outC->POSITION_REPORT_SM_fired = SSM_TR_no_trans_POSITION_REPORT_SM;
  outC->POSITION_REPORT_SM_fired_strong = SSM_TR_no_trans_POSITION_REPORT_SM;
  outC->POSITION_REPORT_SM_state_act = SSM_st_IDLE_POSITION_REPORT_SM;
  outC->POSITION_REPORT_SM_state_sel = SSM_st_IDLE_POSITION_REPORT_SM;
  outC->_L4_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.nid_lrbg = kcg_lit_int32(
      0);
  outC->_L4_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L4_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.d_lrbg = kcg_lit_int32(0);
  outC->_L4_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L4_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L4_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.l_doubtover =
    kcg_lit_int32(0);
  outC->_L4_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.l_doubtunder =
    kcg_lit_int32(0);
  outC->_L4_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L4_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.l_trainint =
    kcg_lit_int32(0);
  outC->_L4_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.v_train = kcg_lit_int32(0);
  outC->_L4_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L4_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_mode =
    M_MODE_Full_Supervision;
  outC->_L4_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_level = M_LEVEL_Level_0;
  outC->_L4_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.nid_ntc = kcg_lit_int32(0);
  outC->_L4_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.nid_prvlrbg =
    kcg_lit_int32(0);
  outC->_L3_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.nid_lrbg = kcg_lit_int32(
      0);
  outC->_L3_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L3_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.d_lrbg = kcg_lit_int32(0);
  outC->_L3_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L3_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L3_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.l_doubtover =
    kcg_lit_int32(0);
  outC->_L3_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.l_doubtunder =
    kcg_lit_int32(0);
  outC->_L3_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L3_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.l_trainint =
    kcg_lit_int32(0);
  outC->_L3_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.v_train = kcg_lit_int32(0);
  outC->_L3_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L3_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_mode =
    M_MODE_Full_Supervision;
  outC->_L3_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_level = M_LEVEL_Level_0;
  outC->_L3_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.nid_ntc = kcg_lit_int32(0);
  outC->_L3_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.nid_prvlrbg =
    kcg_lit_int32(0);
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.present = kcg_true;
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.header.present = kcg_true;
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.header.nid_message =
    kcg_lit_int32(0);
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.header.t_train =
    kcg_lit_int32(0);
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.header.nid_engine =
    kcg_lit_int32(0);
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.header.xT_TRAIN =
    kcg_lit_int32(0);
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.header.xNID_EM =
    kcg_lit_int32(0);
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.header.xNID_TEXTMESSAGE =
    kcg_lit_int32(0);
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.packets.p0.valid =
    kcg_true;
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.packets.p0.packet0.NID_PACKET =
    kcg_lit_int32(0);
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.packets.p0.packet0.L_PACKET =
    kcg_lit_int32(0);
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.packets.p0.packet0.qscale =
    Q_SCALE_10_cm_scale;
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.packets.p0.packet0.NID_LRBG =
    kcg_lit_int32(0);
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.packets.p0.packet0.D_LRBG =
    kcg_lit_int32(0);
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.packets.p0.packet0.dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.packets.p0.packet0.dlrbg =
    Q_DLRBG_Reverse;
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.packets.p0.packet0.L_DOUBTOVER =
    kcg_lit_int32(0);
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.packets.p0.packet0.L_DOUBTUNDER =
    kcg_lit_int32(0);
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.packets.p0.packet0.L_TRAININT =
    kcg_lit_int32(0);
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.packets.p0.packet0.V_TRAIN =
    kcg_lit_int32(0);
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.packets.p0.packet0.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.packets.p0.packet0.mode =
    M_MODE_Full_Supervision;
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.packets.p0.packet0.level =
    M_LEVEL_Level_0;
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.packets.p0.packet0.NID_NTC =
    kcg_lit_int32(0);
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.packets.p1.valid =
    kcg_true;
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.packets.p1.packet1.NID_PACKET =
    kcg_lit_int32(0);
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.packets.p1.packet1.L_PACKET =
    kcg_lit_int32(0);
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.packets.p1.packet1.qscale =
    Q_SCALE_10_cm_scale;
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.packets.p1.packet1.NID_LRBG =
    kcg_lit_int32(0);
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.packets.p1.packet1.NID_PRVLRBG =
    kcg_lit_int32(0);
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.packets.p1.packet1.D_LRBG =
    kcg_lit_int32(0);
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.packets.p1.packet1.dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.packets.p1.packet1.dlrbg =
    Q_DLRBG_Reverse;
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.packets.p1.packet1.L_DOUBTOVER =
    kcg_lit_int32(0);
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.packets.p1.packet1.L_DOUBTUNDER =
    kcg_lit_int32(0);
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.packets.p1.packet1.L_TRAININT =
    kcg_lit_int32(0);
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.packets.p1.packet1.V_TRAIN =
    kcg_lit_int32(0);
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.packets.p1.packet1.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.packets.p1.packet1.mode =
    M_MODE_Full_Supervision;
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.packets.p1.packet1.level =
    M_LEVEL_Level_0;
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.packets.p1.packet1.NID_NTC =
    kcg_lit_int32(0);
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.packets.p3.valid =
    kcg_true;
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.packets.p3.number =
    kcg_lit_int32(0);
  for (idx41 = 0; idx41 < 1; idx41++) {
    outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.packets.p3.aNID_RADIO[idx41].valid =
      kcg_true;
    for (idx40 = 0; idx40 < 15; idx40++) {
      outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.packets.p3.aNID_RADIO[idx41].telephoneNumber[idx40] =
        kcg_lit_int32(0);
    }
  }
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.packets.p4.valid =
    kcg_true;
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.packets.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.packets.p5.valid =
    kcg_true;
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.packets.p5.TrainRunningNumber =
    kcg_lit_int32(0);
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.packets.p9.valid =
    kcg_true;
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.packets.p9.transitionInformation =
    kcg_lit_int32(0);
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.packets.p11.valid =
    kcg_true;
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.packets.p11.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.packets.p11.l_train =
    kcg_lit_int32(0);
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.packets.p11.v_maxtrain =
    kcg_lit_int32(0);
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.packets.p11.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.packets.p11.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.packets.p11.n_axle =
    kcg_lit_int32(0);
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.packets.p11.nIter_tractionIdentity =
    kcg_lit_int32(0);
  for (idx42 = 0; idx42 < 4; idx42++) {
    outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.packets.p11.tractionIdentity[idx42].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.packets.p11.tractionIdentity[idx42].nid_ctraction =
      kcg_lit_int32(0);
  }
  outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.packets.p11.nIter_ntc =
    kcg_lit_int32(0);
  for (idx43 = 0; idx43 < 5; idx43++) {
    outC->_L1_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.packets.p11.nid_ntc[idx43] =
      kcg_lit_int32(0);
  }
  outC->_L5_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_TrainData.nid_engine =
    kcg_lit_int32(0);
  outC->_L5_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int32(0);
  for (idx45 = 0; idx45 < 1; idx45++) {
    outC->_L5_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_TrainData.m_OnboardPhoneNumbers[idx45].valid =
      kcg_true;
    for (idx44 = 0; idx44 < 15; idx44++) {
      outC->_L5_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_TrainData.m_OnboardPhoneNumbers[idx45].telephoneNumber[idx44] =
        kcg_lit_int32(0);
    }
  }
  outC->_L5_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_TrainData.t_train_ref =
    kcg_lit_int32(0);
  outC->_L5_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L5_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L5_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_TrainData.l_train =
    kcg_lit_int32(0);
  outC->_L5_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_TrainData.v_maxtrain =
    kcg_lit_int32(0);
  outC->_L5_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L5_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L5_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L5_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_TrainData.n_axle =
    kcg_lit_int32(0);
  for (idx46 = 0; idx46 < 4; idx46++) {
    outC->_L5_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_TrainData.m_TractionIdentities[idx46].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L5_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_TrainData.m_TractionIdentities[idx46].nid_ctraction =
      kcg_lit_int32(0);
  }
  for (idx47 = 0; idx47 < 5; idx47++) {
    outC->_L5_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_TrainData.m_NationalSystemIdentities[idx47] =
      kcg_lit_int32(0);
  }
  outC->_L5_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_TrainData.nid_operational =
    kcg_lit_int32(0);
  outC->_L5_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_PosData.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L5_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L5_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_PosData.d_lrbg =
    kcg_lit_int32(0);
  outC->_L5_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L5_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L5_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_PosData.l_doubtover =
    kcg_lit_int32(0);
  outC->_L5_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_PosData.l_doubtunder =
    kcg_lit_int32(0);
  outC->_L5_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L5_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_PosData.l_trainint =
    kcg_lit_int32(0);
  outC->_L5_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_PosData.v_train =
    kcg_lit_int32(0);
  outC->_L5_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L5_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L5_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L5_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_PosData.nid_ntc =
    kcg_lit_int32(0);
  outC->_L5_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_PosData.nid_prvlrbg =
    kcg_lit_int32(0);
  outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.session.m_TrainData.nid_engine =
    kcg_lit_int32(0);
  outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int32(0);
  for (idx49 = 0; idx49 < 1; idx49++) {
    outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx49].valid =
      kcg_true;
    for (idx48 = 0; idx48 < 15; idx48++) {
      outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx49].telephoneNumber[idx48] =
        kcg_lit_int32(0);
    }
  }
  outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.session.m_TrainData.t_train_ref =
    kcg_lit_int32(0);
  outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.session.m_TrainData.l_train =
    kcg_lit_int32(0);
  outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.session.m_TrainData.v_maxtrain =
    kcg_lit_int32(0);
  outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.session.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.session.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.session.m_TrainData.n_axle =
    kcg_lit_int32(0);
  for (idx50 = 0; idx50 < 4; idx50++) {
    outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.session.m_TrainData.m_TractionIdentities[idx50].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.session.m_TrainData.m_TractionIdentities[idx50].nid_ctraction =
      kcg_lit_int32(0);
  }
  for (idx51 = 0; idx51 < 5; idx51++) {
    outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.session.m_TrainData.m_NationalSystemIdentities[idx51] =
      kcg_lit_int32(0);
  }
  outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.session.m_TrainData.nid_operational =
    kcg_lit_int32(0);
  outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.session.m_PosData.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.session.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.session.m_PosData.d_lrbg =
    kcg_lit_int32(0);
  outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.session.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.session.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.session.m_PosData.l_doubtover =
    kcg_lit_int32(0);
  outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.session.m_PosData.l_doubtunder =
    kcg_lit_int32(0);
  outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.session.m_PosData.l_trainint =
    kcg_lit_int32(0);
  outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.session.m_PosData.v_train =
    kcg_lit_int32(0);
  outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.session.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.session.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.session.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.session.m_PosData.nid_ntc =
    kcg_lit_int32(0);
  outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.session.m_PosData.nid_prvlrbg =
    kcg_lit_int32(0);
  outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.config.m_NationalParams.nid_c =
    kcg_lit_int32(0);
  outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.config.m_NationalParams.v_nvshunt =
    kcg_lit_int32(0);
  outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.config.m_NationalParams.v_nvstff =
    kcg_lit_int32(0);
  outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.config.m_NationalParams.v_nvonsight =
    kcg_lit_int32(0);
  outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.config.m_NationalParams.v_nvunfit =
    kcg_lit_int32(0);
  outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.config.m_NationalParams.v_nvrel =
    kcg_lit_int32(0);
  outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.config.m_NationalParams.t_nvcontact =
    kcg_lit_int32(0);
  outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.config.m_MAReqParams.q_dir =
    Q_DIR_Reverse;
  outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.config.m_MAReqParams.t_mar =
    kcg_lit_int32(0);
  outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.config.m_MAReqParams.t_timeoutrqst =
    kcg_lit_int32(0);
  outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.config.m_MAReqParams.t_cycrqst =
    kcg_lit_int32(0);
  outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.config.m_PosRepParams.q_dir =
    Q_DIR_Reverse;
  outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.config.m_PosRepParams.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.config.m_PosRepParams.t_cycloc =
    kcg_lit_int32(0);
  outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.config.m_PosRepParams.d_cycloc =
    kcg_lit_int32(0);
  outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.config.m_PosRepParams.m_loc =
    M_LOC_Now;
  outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int32(0);
  for (idx52 = 0; idx52 < 32; idx52++) {
    outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx52].d_loc =
      kcg_lit_int32(0);
    outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx52].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx53 = 0; idx53 < 16; idx53++) {
    outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.diagnostic[idx53].valid =
      kcg_true;
    outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.diagnostic[idx53].count =
      kcg_lit_int32(0);
    outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.diagnostic[idx53].timestamp =
      kcg_lit_int32(0);
    outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.diagnostic[idx53].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.diagnostic[idx53].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.diagnostic[idx53].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx56 = 0; idx56 < 8; idx56++) {
    outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.messageQueue.m_Entries[idx56].m_IsValid =
      kcg_true;
    outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.messageQueue.m_Entries[idx56].m_Entry.Header.radioDevice =
      kcg_lit_int32(0);
    outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.messageQueue.m_Entries[idx56].m_Entry.Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.messageQueue.m_Entries[idx56].m_Entry.Header.nid_message =
      kcg_lit_int32(0);
    outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.messageQueue.m_Entries[idx56].m_Entry.Header.t_train =
      kcg_lit_int32(0);
    outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.messageQueue.m_Entries[idx56].m_Entry.Header.m_ack =
      kcg_lit_int32(0);
    outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.messageQueue.m_Entries[idx56].m_Entry.Header.nid_lrbg =
      kcg_lit_int32(0);
    outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.messageQueue.m_Entries[idx56].m_Entry.Header.t_train_reference =
      kcg_lit_int32(0);
    outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.messageQueue.m_Entries[idx56].m_Entry.Header.nid_em =
      kcg_lit_int32(0);
    outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.messageQueue.m_Entries[idx56].m_Entry.Header.q_scale =
      kcg_lit_int32(0);
    outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.messageQueue.m_Entries[idx56].m_Entry.Header.d_sr =
      kcg_lit_int32(0);
    outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.messageQueue.m_Entries[idx56].m_Entry.Header.t_sh_rqst =
      kcg_lit_int32(0);
    outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.messageQueue.m_Entries[idx56].m_Entry.Header.d_ref =
      kcg_lit_int32(0);
    outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.messageQueue.m_Entries[idx56].m_Entry.Header.q_dir =
      kcg_lit_int32(0);
    outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.messageQueue.m_Entries[idx56].m_Entry.Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.messageQueue.m_Entries[idx56].m_Entry.Header.m_version =
      kcg_lit_int32(0);
    for (idx54 = 0; idx54 < 30; idx54++) {
      outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.messageQueue.m_Entries[idx56].m_Entry.Messages.PacketHeaders[idx54].nid_packet =
        kcg_lit_int32(0);
      outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.messageQueue.m_Entries[idx56].m_Entry.Messages.PacketHeaders[idx54].q_dir =
        Q_DIR_Reverse;
      outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.messageQueue.m_Entries[idx56].m_Entry.Messages.PacketHeaders[idx54].valid =
        kcg_true;
      outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.messageQueue.m_Entries[idx56].m_Entry.Messages.PacketHeaders[idx54].startAddress =
        kcg_lit_int32(0);
      outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.messageQueue.m_Entries[idx56].m_Entry.Messages.PacketHeaders[idx54].endAddress =
        kcg_lit_int32(0);
    }
    for (idx55 = 0; idx55 < 500; idx55++) {
      outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.messageQueue.m_Entries[idx56].m_Entry.Messages.PacketData[idx55] =
        kcg_lit_int32(0);
    }
  }
  outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.clockk.m_Value =
    kcg_lit_int32(0);
  outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.lastSentTrackTrainMessage.Header.radioDevice =
    kcg_lit_int32(0);
  outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.lastSentTrackTrainMessage.Header.nid_message =
    kcg_lit_int32(0);
  outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.lastSentTrackTrainMessage.Header.t_train =
    kcg_lit_int32(0);
  outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.lastSentTrackTrainMessage.Header.m_ack =
    kcg_lit_int32(0);
  outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.lastSentTrackTrainMessage.Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.lastSentTrackTrainMessage.Header.nid_em =
    kcg_lit_int32(0);
  outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.lastSentTrackTrainMessage.Header.q_scale =
    kcg_lit_int32(0);
  outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.lastSentTrackTrainMessage.Header.d_sr =
    kcg_lit_int32(0);
  outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.lastSentTrackTrainMessage.Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.lastSentTrackTrainMessage.Header.d_ref =
    kcg_lit_int32(0);
  outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.lastSentTrackTrainMessage.Header.q_dir =
    kcg_lit_int32(0);
  outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.lastSentTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.lastSentTrackTrainMessage.Header.m_version =
    kcg_lit_int32(0);
  for (idx57 = 0; idx57 < 30; idx57++) {
    outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx57].nid_packet =
      kcg_lit_int32(0);
    outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx57].q_dir =
      Q_DIR_Reverse;
    outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx57].valid =
      kcg_true;
    outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx57].startAddress =
      kcg_lit_int32(0);
    outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx57].endAddress =
      kcg_lit_int32(0);
  }
  for (idx58 = 0; idx58 < 500; idx58++) {
    outC->_L9_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.lastSentTrackTrainMessage.Messages.PacketData[idx58] =
      kcg_lit_int32(0);
  }
  outC->_L8_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_TrainData.nid_engine =
    kcg_lit_int32(0);
  outC->_L8_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int32(0);
  for (idx60 = 0; idx60 < 1; idx60++) {
    outC->_L8_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_TrainData.m_OnboardPhoneNumbers[idx60].valid =
      kcg_true;
    for (idx59 = 0; idx59 < 15; idx59++) {
      outC->_L8_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_TrainData.m_OnboardPhoneNumbers[idx60].telephoneNumber[idx59] =
        kcg_lit_int32(0);
    }
  }
  outC->_L8_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_TrainData.t_train_ref =
    kcg_lit_int32(0);
  outC->_L8_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L8_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L8_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_TrainData.l_train =
    kcg_lit_int32(0);
  outC->_L8_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_TrainData.v_maxtrain =
    kcg_lit_int32(0);
  outC->_L8_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L8_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L8_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L8_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_TrainData.n_axle =
    kcg_lit_int32(0);
  for (idx61 = 0; idx61 < 4; idx61++) {
    outC->_L8_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_TrainData.m_TractionIdentities[idx61].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L8_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_TrainData.m_TractionIdentities[idx61].nid_ctraction =
      kcg_lit_int32(0);
  }
  for (idx62 = 0; idx62 < 5; idx62++) {
    outC->_L8_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_TrainData.m_NationalSystemIdentities[idx62] =
      kcg_lit_int32(0);
  }
  outC->_L8_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_TrainData.nid_operational =
    kcg_lit_int32(0);
  outC->_L8_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_PosData.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L8_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L8_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_PosData.d_lrbg =
    kcg_lit_int32(0);
  outC->_L8_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L8_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L8_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_PosData.l_doubtover =
    kcg_lit_int32(0);
  outC->_L8_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_PosData.l_doubtunder =
    kcg_lit_int32(0);
  outC->_L8_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L8_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_PosData.l_trainint =
    kcg_lit_int32(0);
  outC->_L8_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_PosData.v_train =
    kcg_lit_int32(0);
  outC->_L8_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L8_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L8_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L8_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_PosData.nid_ntc =
    kcg_lit_int32(0);
  outC->_L8_PROCESS_POSITION_REPORT_POSITION_REPORT_SM.m_PosData.nid_prvlrbg =
    kcg_lit_int32(0);
  outC->_L3_IDLE_POSITION_REPORT_SM.session.m_TrainData.nid_engine =
    kcg_lit_int32(0);
  outC->_L3_IDLE_POSITION_REPORT_SM.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int32(0);
  for (idx64 = 0; idx64 < 1; idx64++) {
    outC->_L3_IDLE_POSITION_REPORT_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx64].valid =
      kcg_true;
    for (idx63 = 0; idx63 < 15; idx63++) {
      outC->_L3_IDLE_POSITION_REPORT_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx64].telephoneNumber[idx63] =
        kcg_lit_int32(0);
    }
  }
  outC->_L3_IDLE_POSITION_REPORT_SM.session.m_TrainData.t_train_ref =
    kcg_lit_int32(0);
  outC->_L3_IDLE_POSITION_REPORT_SM.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L3_IDLE_POSITION_REPORT_SM.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L3_IDLE_POSITION_REPORT_SM.session.m_TrainData.l_train = kcg_lit_int32(
      0);
  outC->_L3_IDLE_POSITION_REPORT_SM.session.m_TrainData.v_maxtrain =
    kcg_lit_int32(0);
  outC->_L3_IDLE_POSITION_REPORT_SM.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L3_IDLE_POSITION_REPORT_SM.session.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L3_IDLE_POSITION_REPORT_SM.session.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L3_IDLE_POSITION_REPORT_SM.session.m_TrainData.n_axle = kcg_lit_int32(0);
  for (idx65 = 0; idx65 < 4; idx65++) {
    outC->_L3_IDLE_POSITION_REPORT_SM.session.m_TrainData.m_TractionIdentities[idx65].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L3_IDLE_POSITION_REPORT_SM.session.m_TrainData.m_TractionIdentities[idx65].nid_ctraction =
      kcg_lit_int32(0);
  }
  for (idx66 = 0; idx66 < 5; idx66++) {
    outC->_L3_IDLE_POSITION_REPORT_SM.session.m_TrainData.m_NationalSystemIdentities[idx66] =
      kcg_lit_int32(0);
  }
  outC->_L3_IDLE_POSITION_REPORT_SM.session.m_TrainData.nid_operational =
    kcg_lit_int32(0);
  outC->_L3_IDLE_POSITION_REPORT_SM.session.m_PosData.nid_lrbg = kcg_lit_int32(0);
  outC->_L3_IDLE_POSITION_REPORT_SM.session.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L3_IDLE_POSITION_REPORT_SM.session.m_PosData.d_lrbg = kcg_lit_int32(0);
  outC->_L3_IDLE_POSITION_REPORT_SM.session.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L3_IDLE_POSITION_REPORT_SM.session.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L3_IDLE_POSITION_REPORT_SM.session.m_PosData.l_doubtover =
    kcg_lit_int32(0);
  outC->_L3_IDLE_POSITION_REPORT_SM.session.m_PosData.l_doubtunder =
    kcg_lit_int32(0);
  outC->_L3_IDLE_POSITION_REPORT_SM.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L3_IDLE_POSITION_REPORT_SM.session.m_PosData.l_trainint =
    kcg_lit_int32(0);
  outC->_L3_IDLE_POSITION_REPORT_SM.session.m_PosData.v_train = kcg_lit_int32(0);
  outC->_L3_IDLE_POSITION_REPORT_SM.session.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L3_IDLE_POSITION_REPORT_SM.session.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L3_IDLE_POSITION_REPORT_SM.session.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L3_IDLE_POSITION_REPORT_SM.session.m_PosData.nid_ntc = kcg_lit_int32(0);
  outC->_L3_IDLE_POSITION_REPORT_SM.session.m_PosData.nid_prvlrbg =
    kcg_lit_int32(0);
  outC->_L3_IDLE_POSITION_REPORT_SM.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L3_IDLE_POSITION_REPORT_SM.config.m_NationalParams.nid_c =
    kcg_lit_int32(0);
  outC->_L3_IDLE_POSITION_REPORT_SM.config.m_NationalParams.v_nvshunt =
    kcg_lit_int32(0);
  outC->_L3_IDLE_POSITION_REPORT_SM.config.m_NationalParams.v_nvstff =
    kcg_lit_int32(0);
  outC->_L3_IDLE_POSITION_REPORT_SM.config.m_NationalParams.v_nvonsight =
    kcg_lit_int32(0);
  outC->_L3_IDLE_POSITION_REPORT_SM.config.m_NationalParams.v_nvunfit =
    kcg_lit_int32(0);
  outC->_L3_IDLE_POSITION_REPORT_SM.config.m_NationalParams.v_nvrel =
    kcg_lit_int32(0);
  outC->_L3_IDLE_POSITION_REPORT_SM.config.m_NationalParams.t_nvcontact =
    kcg_lit_int32(0);
  outC->_L3_IDLE_POSITION_REPORT_SM.config.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->_L3_IDLE_POSITION_REPORT_SM.config.m_MAReqParams.t_mar = kcg_lit_int32(0);
  outC->_L3_IDLE_POSITION_REPORT_SM.config.m_MAReqParams.t_timeoutrqst =
    kcg_lit_int32(0);
  outC->_L3_IDLE_POSITION_REPORT_SM.config.m_MAReqParams.t_cycrqst =
    kcg_lit_int32(0);
  outC->_L3_IDLE_POSITION_REPORT_SM.config.m_PosRepParams.q_dir = Q_DIR_Reverse;
  outC->_L3_IDLE_POSITION_REPORT_SM.config.m_PosRepParams.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L3_IDLE_POSITION_REPORT_SM.config.m_PosRepParams.t_cycloc =
    kcg_lit_int32(0);
  outC->_L3_IDLE_POSITION_REPORT_SM.config.m_PosRepParams.d_cycloc =
    kcg_lit_int32(0);
  outC->_L3_IDLE_POSITION_REPORT_SM.config.m_PosRepParams.m_loc = M_LOC_Now;
  outC->_L3_IDLE_POSITION_REPORT_SM.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int32(0);
  for (idx67 = 0; idx67 < 32; idx67++) {
    outC->_L3_IDLE_POSITION_REPORT_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx67].d_loc =
      kcg_lit_int32(0);
    outC->_L3_IDLE_POSITION_REPORT_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx67].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx68 = 0; idx68 < 16; idx68++) {
    outC->_L3_IDLE_POSITION_REPORT_SM.diagnostic[idx68].valid = kcg_true;
    outC->_L3_IDLE_POSITION_REPORT_SM.diagnostic[idx68].count = kcg_lit_int32(0);
    outC->_L3_IDLE_POSITION_REPORT_SM.diagnostic[idx68].timestamp =
      kcg_lit_int32(0);
    outC->_L3_IDLE_POSITION_REPORT_SM.diagnostic[idx68].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L3_IDLE_POSITION_REPORT_SM.diagnostic[idx68].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L3_IDLE_POSITION_REPORT_SM.diagnostic[idx68].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx71 = 0; idx71 < 8; idx71++) {
    outC->_L3_IDLE_POSITION_REPORT_SM.messageQueue.m_Entries[idx71].m_IsValid =
      kcg_true;
    outC->_L3_IDLE_POSITION_REPORT_SM.messageQueue.m_Entries[idx71].m_Entry.Header.radioDevice =
      kcg_lit_int32(0);
    outC->_L3_IDLE_POSITION_REPORT_SM.messageQueue.m_Entries[idx71].m_Entry.Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->_L3_IDLE_POSITION_REPORT_SM.messageQueue.m_Entries[idx71].m_Entry.Header.nid_message =
      kcg_lit_int32(0);
    outC->_L3_IDLE_POSITION_REPORT_SM.messageQueue.m_Entries[idx71].m_Entry.Header.t_train =
      kcg_lit_int32(0);
    outC->_L3_IDLE_POSITION_REPORT_SM.messageQueue.m_Entries[idx71].m_Entry.Header.m_ack =
      kcg_lit_int32(0);
    outC->_L3_IDLE_POSITION_REPORT_SM.messageQueue.m_Entries[idx71].m_Entry.Header.nid_lrbg =
      kcg_lit_int32(0);
    outC->_L3_IDLE_POSITION_REPORT_SM.messageQueue.m_Entries[idx71].m_Entry.Header.t_train_reference =
      kcg_lit_int32(0);
    outC->_L3_IDLE_POSITION_REPORT_SM.messageQueue.m_Entries[idx71].m_Entry.Header.nid_em =
      kcg_lit_int32(0);
    outC->_L3_IDLE_POSITION_REPORT_SM.messageQueue.m_Entries[idx71].m_Entry.Header.q_scale =
      kcg_lit_int32(0);
    outC->_L3_IDLE_POSITION_REPORT_SM.messageQueue.m_Entries[idx71].m_Entry.Header.d_sr =
      kcg_lit_int32(0);
    outC->_L3_IDLE_POSITION_REPORT_SM.messageQueue.m_Entries[idx71].m_Entry.Header.t_sh_rqst =
      kcg_lit_int32(0);
    outC->_L3_IDLE_POSITION_REPORT_SM.messageQueue.m_Entries[idx71].m_Entry.Header.d_ref =
      kcg_lit_int32(0);
    outC->_L3_IDLE_POSITION_REPORT_SM.messageQueue.m_Entries[idx71].m_Entry.Header.q_dir =
      kcg_lit_int32(0);
    outC->_L3_IDLE_POSITION_REPORT_SM.messageQueue.m_Entries[idx71].m_Entry.Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->_L3_IDLE_POSITION_REPORT_SM.messageQueue.m_Entries[idx71].m_Entry.Header.m_version =
      kcg_lit_int32(0);
    for (idx69 = 0; idx69 < 30; idx69++) {
      outC->_L3_IDLE_POSITION_REPORT_SM.messageQueue.m_Entries[idx71].m_Entry.Messages.PacketHeaders[idx69].nid_packet =
        kcg_lit_int32(0);
      outC->_L3_IDLE_POSITION_REPORT_SM.messageQueue.m_Entries[idx71].m_Entry.Messages.PacketHeaders[idx69].q_dir =
        Q_DIR_Reverse;
      outC->_L3_IDLE_POSITION_REPORT_SM.messageQueue.m_Entries[idx71].m_Entry.Messages.PacketHeaders[idx69].valid =
        kcg_true;
      outC->_L3_IDLE_POSITION_REPORT_SM.messageQueue.m_Entries[idx71].m_Entry.Messages.PacketHeaders[idx69].startAddress =
        kcg_lit_int32(0);
      outC->_L3_IDLE_POSITION_REPORT_SM.messageQueue.m_Entries[idx71].m_Entry.Messages.PacketHeaders[idx69].endAddress =
        kcg_lit_int32(0);
    }
    for (idx70 = 0; idx70 < 500; idx70++) {
      outC->_L3_IDLE_POSITION_REPORT_SM.messageQueue.m_Entries[idx71].m_Entry.Messages.PacketData[idx70] =
        kcg_lit_int32(0);
    }
  }
  outC->_L3_IDLE_POSITION_REPORT_SM.clockk.m_Value = kcg_lit_int32(0);
  outC->_L3_IDLE_POSITION_REPORT_SM.lastSentTrackTrainMessage.Header.radioDevice =
    kcg_lit_int32(0);
  outC->_L3_IDLE_POSITION_REPORT_SM.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L3_IDLE_POSITION_REPORT_SM.lastSentTrackTrainMessage.Header.nid_message =
    kcg_lit_int32(0);
  outC->_L3_IDLE_POSITION_REPORT_SM.lastSentTrackTrainMessage.Header.t_train =
    kcg_lit_int32(0);
  outC->_L3_IDLE_POSITION_REPORT_SM.lastSentTrackTrainMessage.Header.m_ack =
    kcg_lit_int32(0);
  outC->_L3_IDLE_POSITION_REPORT_SM.lastSentTrackTrainMessage.Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L3_IDLE_POSITION_REPORT_SM.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L3_IDLE_POSITION_REPORT_SM.lastSentTrackTrainMessage.Header.nid_em =
    kcg_lit_int32(0);
  outC->_L3_IDLE_POSITION_REPORT_SM.lastSentTrackTrainMessage.Header.q_scale =
    kcg_lit_int32(0);
  outC->_L3_IDLE_POSITION_REPORT_SM.lastSentTrackTrainMessage.Header.d_sr =
    kcg_lit_int32(0);
  outC->_L3_IDLE_POSITION_REPORT_SM.lastSentTrackTrainMessage.Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L3_IDLE_POSITION_REPORT_SM.lastSentTrackTrainMessage.Header.d_ref =
    kcg_lit_int32(0);
  outC->_L3_IDLE_POSITION_REPORT_SM.lastSentTrackTrainMessage.Header.q_dir =
    kcg_lit_int32(0);
  outC->_L3_IDLE_POSITION_REPORT_SM.lastSentTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L3_IDLE_POSITION_REPORT_SM.lastSentTrackTrainMessage.Header.m_version =
    kcg_lit_int32(0);
  for (idx72 = 0; idx72 < 30; idx72++) {
    outC->_L3_IDLE_POSITION_REPORT_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx72].nid_packet =
      kcg_lit_int32(0);
    outC->_L3_IDLE_POSITION_REPORT_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx72].q_dir =
      Q_DIR_Reverse;
    outC->_L3_IDLE_POSITION_REPORT_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx72].valid =
      kcg_true;
    outC->_L3_IDLE_POSITION_REPORT_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx72].startAddress =
      kcg_lit_int32(0);
    outC->_L3_IDLE_POSITION_REPORT_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx72].endAddress =
      kcg_lit_int32(0);
  }
  for (idx73 = 0; idx73 < 500; idx73++) {
    outC->_L3_IDLE_POSITION_REPORT_SM.lastSentTrackTrainMessage.Messages.PacketData[idx73] =
      kcg_lit_int32(0);
  }
  outC->_L2_IDLE_POSITION_REPORT_SM.m_TrainData.nid_engine = kcg_lit_int32(0);
  outC->_L2_IDLE_POSITION_REPORT_SM.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int32(0);
  for (idx75 = 0; idx75 < 1; idx75++) {
    outC->_L2_IDLE_POSITION_REPORT_SM.m_TrainData.m_OnboardPhoneNumbers[idx75].valid =
      kcg_true;
    for (idx74 = 0; idx74 < 15; idx74++) {
      outC->_L2_IDLE_POSITION_REPORT_SM.m_TrainData.m_OnboardPhoneNumbers[idx75].telephoneNumber[idx74] =
        kcg_lit_int32(0);
    }
  }
  outC->_L2_IDLE_POSITION_REPORT_SM.m_TrainData.t_train_ref = kcg_lit_int32(0);
  outC->_L2_IDLE_POSITION_REPORT_SM.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L2_IDLE_POSITION_REPORT_SM.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L2_IDLE_POSITION_REPORT_SM.m_TrainData.l_train = kcg_lit_int32(0);
  outC->_L2_IDLE_POSITION_REPORT_SM.m_TrainData.v_maxtrain = kcg_lit_int32(0);
  outC->_L2_IDLE_POSITION_REPORT_SM.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L2_IDLE_POSITION_REPORT_SM.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L2_IDLE_POSITION_REPORT_SM.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L2_IDLE_POSITION_REPORT_SM.m_TrainData.n_axle = kcg_lit_int32(0);
  for (idx76 = 0; idx76 < 4; idx76++) {
    outC->_L2_IDLE_POSITION_REPORT_SM.m_TrainData.m_TractionIdentities[idx76].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L2_IDLE_POSITION_REPORT_SM.m_TrainData.m_TractionIdentities[idx76].nid_ctraction =
      kcg_lit_int32(0);
  }
  for (idx77 = 0; idx77 < 5; idx77++) {
    outC->_L2_IDLE_POSITION_REPORT_SM.m_TrainData.m_NationalSystemIdentities[idx77] =
      kcg_lit_int32(0);
  }
  outC->_L2_IDLE_POSITION_REPORT_SM.m_TrainData.nid_operational = kcg_lit_int32(
      0);
  outC->_L2_IDLE_POSITION_REPORT_SM.m_PosData.nid_lrbg = kcg_lit_int32(0);
  outC->_L2_IDLE_POSITION_REPORT_SM.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2_IDLE_POSITION_REPORT_SM.m_PosData.d_lrbg = kcg_lit_int32(0);
  outC->_L2_IDLE_POSITION_REPORT_SM.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L2_IDLE_POSITION_REPORT_SM.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L2_IDLE_POSITION_REPORT_SM.m_PosData.l_doubtover = kcg_lit_int32(0);
  outC->_L2_IDLE_POSITION_REPORT_SM.m_PosData.l_doubtunder = kcg_lit_int32(0);
  outC->_L2_IDLE_POSITION_REPORT_SM.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L2_IDLE_POSITION_REPORT_SM.m_PosData.l_trainint = kcg_lit_int32(0);
  outC->_L2_IDLE_POSITION_REPORT_SM.m_PosData.v_train = kcg_lit_int32(0);
  outC->_L2_IDLE_POSITION_REPORT_SM.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L2_IDLE_POSITION_REPORT_SM.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L2_IDLE_POSITION_REPORT_SM.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L2_IDLE_POSITION_REPORT_SM.m_PosData.nid_ntc = kcg_lit_int32(0);
  outC->_L2_IDLE_POSITION_REPORT_SM.m_PosData.nid_prvlrbg = kcg_lit_int32(0);
  outC->outTriggeredRadioTrackTrainMessage.Header.radioDevice = kcg_lit_int32(0);
  outC->outTriggeredRadioTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->outTriggeredRadioTrackTrainMessage.Header.nid_message = kcg_lit_int32(0);
  outC->outTriggeredRadioTrackTrainMessage.Header.t_train = kcg_lit_int32(0);
  outC->outTriggeredRadioTrackTrainMessage.Header.m_ack = kcg_lit_int32(0);
  outC->outTriggeredRadioTrackTrainMessage.Header.nid_lrbg = kcg_lit_int32(0);
  outC->outTriggeredRadioTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int32(0);
  outC->outTriggeredRadioTrackTrainMessage.Header.nid_em = kcg_lit_int32(0);
  outC->outTriggeredRadioTrackTrainMessage.Header.q_scale = kcg_lit_int32(0);
  outC->outTriggeredRadioTrackTrainMessage.Header.d_sr = kcg_lit_int32(0);
  outC->outTriggeredRadioTrackTrainMessage.Header.t_sh_rqst = kcg_lit_int32(0);
  outC->outTriggeredRadioTrackTrainMessage.Header.d_ref = kcg_lit_int32(0);
  outC->outTriggeredRadioTrackTrainMessage.Header.q_dir = kcg_lit_int32(0);
  outC->outTriggeredRadioTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->outTriggeredRadioTrackTrainMessage.Header.m_version = kcg_lit_int32(0);
  for (idx78 = 0; idx78 < 30; idx78++) {
    outC->outTriggeredRadioTrackTrainMessage.Messages.PacketHeaders[idx78].nid_packet =
      kcg_lit_int32(0);
    outC->outTriggeredRadioTrackTrainMessage.Messages.PacketHeaders[idx78].q_dir =
      Q_DIR_Reverse;
    outC->outTriggeredRadioTrackTrainMessage.Messages.PacketHeaders[idx78].valid =
      kcg_true;
    outC->outTriggeredRadioTrackTrainMessage.Messages.PacketHeaders[idx78].startAddress =
      kcg_lit_int32(0);
    outC->outTriggeredRadioTrackTrainMessage.Messages.PacketHeaders[idx78].endAddress =
      kcg_lit_int32(0);
  }
  for (idx79 = 0; idx79 < 500; idx79++) {
    outC->outTriggeredRadioTrackTrainMessage.Messages.PacketData[idx79] =
      kcg_lit_int32(0);
  }
  outC->outRadioTrainTrackMessage.present = kcg_true;
  outC->outRadioTrainTrackMessage.header.present = kcg_true;
  outC->outRadioTrainTrackMessage.header.nid_message = kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.header.t_train = kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.header.nid_engine = kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->outRadioTrainTrackMessage.header.xT_TRAIN = kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.header.xNID_EM = kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->outRadioTrainTrackMessage.header.xNID_TEXTMESSAGE = kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.packets.p0.valid = kcg_true;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.NID_PACKET = kcg_lit_int32(
      0);
  outC->outRadioTrainTrackMessage.packets.p0.packet0.L_PACKET = kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.NID_LRBG = kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.packets.p0.packet0.D_LRBG = kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.L_DOUBTOVER =
    kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.packets.p0.packet0.L_DOUBTUNDER =
    kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.L_TRAININT = kcg_lit_int32(
      0);
  outC->outRadioTrainTrackMessage.packets.p0.packet0.V_TRAIN = kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.packets.p0.packet0.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.mode =
    M_MODE_Full_Supervision;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.NID_NTC = kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.packets.p1.valid = kcg_true;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.NID_PACKET = kcg_lit_int32(
      0);
  outC->outRadioTrainTrackMessage.packets.p1.packet1.L_PACKET = kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.NID_LRBG = kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.packets.p1.packet1.NID_PRVLRBG =
    kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.packets.p1.packet1.D_LRBG = kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.L_DOUBTOVER =
    kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.packets.p1.packet1.L_DOUBTUNDER =
    kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.L_TRAININT = kcg_lit_int32(
      0);
  outC->outRadioTrainTrackMessage.packets.p1.packet1.V_TRAIN = kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.packets.p1.packet1.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.mode =
    M_MODE_Full_Supervision;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.NID_NTC = kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.packets.p3.valid = kcg_true;
  outC->outRadioTrainTrackMessage.packets.p3.number = kcg_lit_int32(0);
  for (idx81 = 0; idx81 < 1; idx81++) {
    outC->outRadioTrainTrackMessage.packets.p3.aNID_RADIO[idx81].valid = kcg_true;
    for (idx80 = 0; idx80 < 15; idx80++) {
      outC->outRadioTrainTrackMessage.packets.p3.aNID_RADIO[idx81].telephoneNumber[idx80] =
        kcg_lit_int32(0);
    }
  }
  outC->outRadioTrainTrackMessage.packets.p4.valid = kcg_true;
  outC->outRadioTrainTrackMessage.packets.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->outRadioTrainTrackMessage.packets.p5.valid = kcg_true;
  outC->outRadioTrainTrackMessage.packets.p5.TrainRunningNumber = kcg_lit_int32(
      0);
  outC->outRadioTrainTrackMessage.packets.p9.valid = kcg_true;
  outC->outRadioTrainTrackMessage.packets.p9.transitionInformation =
    kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.packets.p11.valid = kcg_true;
  outC->outRadioTrainTrackMessage.packets.p11.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->outRadioTrainTrackMessage.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->outRadioTrainTrackMessage.packets.p11.l_train = kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.packets.p11.v_maxtrain = kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->outRadioTrainTrackMessage.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->outRadioTrainTrackMessage.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->outRadioTrainTrackMessage.packets.p11.n_axle = kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.packets.p11.nIter_tractionIdentity =
    kcg_lit_int32(0);
  for (idx82 = 0; idx82 < 4; idx82++) {
    outC->outRadioTrainTrackMessage.packets.p11.tractionIdentity[idx82].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->outRadioTrainTrackMessage.packets.p11.tractionIdentity[idx82].nid_ctraction =
      kcg_lit_int32(0);
  }
  outC->outRadioTrainTrackMessage.packets.p11.nIter_ntc = kcg_lit_int32(0);
  for (idx83 = 0; idx83 < 5; idx83++) {
    outC->outRadioTrainTrackMessage.packets.p11.nid_ntc[idx83] = kcg_lit_int32(0);
  }
  outC->outDataBus.session.m_TrainData.nid_engine = kcg_lit_int32(0);
  outC->outDataBus.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int32(0);
  for (idx85 = 0; idx85 < 1; idx85++) {
    outC->outDataBus.session.m_TrainData.m_OnboardPhoneNumbers[idx85].valid =
      kcg_true;
    for (idx84 = 0; idx84 < 15; idx84++) {
      outC->outDataBus.session.m_TrainData.m_OnboardPhoneNumbers[idx85].telephoneNumber[idx84] =
        kcg_lit_int32(0);
    }
  }
  outC->outDataBus.session.m_TrainData.t_train_ref = kcg_lit_int32(0);
  outC->outDataBus.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->outDataBus.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->outDataBus.session.m_TrainData.l_train = kcg_lit_int32(0);
  outC->outDataBus.session.m_TrainData.v_maxtrain = kcg_lit_int32(0);
  outC->outDataBus.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->outDataBus.session.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->outDataBus.session.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->outDataBus.session.m_TrainData.n_axle = kcg_lit_int32(0);
  for (idx86 = 0; idx86 < 4; idx86++) {
    outC->outDataBus.session.m_TrainData.m_TractionIdentities[idx86].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->outDataBus.session.m_TrainData.m_TractionIdentities[idx86].nid_ctraction =
      kcg_lit_int32(0);
  }
  for (idx87 = 0; idx87 < 5; idx87++) {
    outC->outDataBus.session.m_TrainData.m_NationalSystemIdentities[idx87] =
      kcg_lit_int32(0);
  }
  outC->outDataBus.session.m_TrainData.nid_operational = kcg_lit_int32(0);
  outC->outDataBus.session.m_PosData.nid_lrbg = kcg_lit_int32(0);
  outC->outDataBus.session.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->outDataBus.session.m_PosData.d_lrbg = kcg_lit_int32(0);
  outC->outDataBus.session.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->outDataBus.session.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->outDataBus.session.m_PosData.l_doubtover = kcg_lit_int32(0);
  outC->outDataBus.session.m_PosData.l_doubtunder = kcg_lit_int32(0);
  outC->outDataBus.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->outDataBus.session.m_PosData.l_trainint = kcg_lit_int32(0);
  outC->outDataBus.session.m_PosData.v_train = kcg_lit_int32(0);
  outC->outDataBus.session.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->outDataBus.session.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->outDataBus.session.m_PosData.m_level = M_LEVEL_Level_0;
  outC->outDataBus.session.m_PosData.nid_ntc = kcg_lit_int32(0);
  outC->outDataBus.session.m_PosData.nid_prvlrbg = kcg_lit_int32(0);
  outC->outDataBus.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->outDataBus.config.m_NationalParams.nid_c = kcg_lit_int32(0);
  outC->outDataBus.config.m_NationalParams.v_nvshunt = kcg_lit_int32(0);
  outC->outDataBus.config.m_NationalParams.v_nvstff = kcg_lit_int32(0);
  outC->outDataBus.config.m_NationalParams.v_nvonsight = kcg_lit_int32(0);
  outC->outDataBus.config.m_NationalParams.v_nvunfit = kcg_lit_int32(0);
  outC->outDataBus.config.m_NationalParams.v_nvrel = kcg_lit_int32(0);
  outC->outDataBus.config.m_NationalParams.t_nvcontact = kcg_lit_int32(0);
  outC->outDataBus.config.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->outDataBus.config.m_MAReqParams.t_mar = kcg_lit_int32(0);
  outC->outDataBus.config.m_MAReqParams.t_timeoutrqst = kcg_lit_int32(0);
  outC->outDataBus.config.m_MAReqParams.t_cycrqst = kcg_lit_int32(0);
  outC->outDataBus.config.m_PosRepParams.q_dir = Q_DIR_Reverse;
  outC->outDataBus.config.m_PosRepParams.q_scale = Q_SCALE_10_cm_scale;
  outC->outDataBus.config.m_PosRepParams.t_cycloc = kcg_lit_int32(0);
  outC->outDataBus.config.m_PosRepParams.d_cycloc = kcg_lit_int32(0);
  outC->outDataBus.config.m_PosRepParams.m_loc = M_LOC_Now;
  outC->outDataBus.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int32(0);
  for (idx88 = 0; idx88 < 32; idx88++) {
    outC->outDataBus.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx88].d_loc =
      kcg_lit_int32(0);
    outC->outDataBus.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx88].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx89 = 0; idx89 < 16; idx89++) {
    outC->outDataBus.diagnostic[idx89].valid = kcg_true;
    outC->outDataBus.diagnostic[idx89].count = kcg_lit_int32(0);
    outC->outDataBus.diagnostic[idx89].timestamp = kcg_lit_int32(0);
    outC->outDataBus.diagnostic[idx89].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->outDataBus.diagnostic[idx89].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->outDataBus.diagnostic[idx89].diagText = DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx92 = 0; idx92 < 8; idx92++) {
    outC->outDataBus.messageQueue.m_Entries[idx92].m_IsValid = kcg_true;
    outC->outDataBus.messageQueue.m_Entries[idx92].m_Entry.Header.radioDevice =
      kcg_lit_int32(0);
    outC->outDataBus.messageQueue.m_Entries[idx92].m_Entry.Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->outDataBus.messageQueue.m_Entries[idx92].m_Entry.Header.nid_message =
      kcg_lit_int32(0);
    outC->outDataBus.messageQueue.m_Entries[idx92].m_Entry.Header.t_train =
      kcg_lit_int32(0);
    outC->outDataBus.messageQueue.m_Entries[idx92].m_Entry.Header.m_ack =
      kcg_lit_int32(0);
    outC->outDataBus.messageQueue.m_Entries[idx92].m_Entry.Header.nid_lrbg =
      kcg_lit_int32(0);
    outC->outDataBus.messageQueue.m_Entries[idx92].m_Entry.Header.t_train_reference =
      kcg_lit_int32(0);
    outC->outDataBus.messageQueue.m_Entries[idx92].m_Entry.Header.nid_em =
      kcg_lit_int32(0);
    outC->outDataBus.messageQueue.m_Entries[idx92].m_Entry.Header.q_scale =
      kcg_lit_int32(0);
    outC->outDataBus.messageQueue.m_Entries[idx92].m_Entry.Header.d_sr =
      kcg_lit_int32(0);
    outC->outDataBus.messageQueue.m_Entries[idx92].m_Entry.Header.t_sh_rqst =
      kcg_lit_int32(0);
    outC->outDataBus.messageQueue.m_Entries[idx92].m_Entry.Header.d_ref =
      kcg_lit_int32(0);
    outC->outDataBus.messageQueue.m_Entries[idx92].m_Entry.Header.q_dir =
      kcg_lit_int32(0);
    outC->outDataBus.messageQueue.m_Entries[idx92].m_Entry.Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->outDataBus.messageQueue.m_Entries[idx92].m_Entry.Header.m_version =
      kcg_lit_int32(0);
    for (idx90 = 0; idx90 < 30; idx90++) {
      outC->outDataBus.messageQueue.m_Entries[idx92].m_Entry.Messages.PacketHeaders[idx90].nid_packet =
        kcg_lit_int32(0);
      outC->outDataBus.messageQueue.m_Entries[idx92].m_Entry.Messages.PacketHeaders[idx90].q_dir =
        Q_DIR_Reverse;
      outC->outDataBus.messageQueue.m_Entries[idx92].m_Entry.Messages.PacketHeaders[idx90].valid =
        kcg_true;
      outC->outDataBus.messageQueue.m_Entries[idx92].m_Entry.Messages.PacketHeaders[idx90].startAddress =
        kcg_lit_int32(0);
      outC->outDataBus.messageQueue.m_Entries[idx92].m_Entry.Messages.PacketHeaders[idx90].endAddress =
        kcg_lit_int32(0);
    }
    for (idx91 = 0; idx91 < 500; idx91++) {
      outC->outDataBus.messageQueue.m_Entries[idx92].m_Entry.Messages.PacketData[idx91] =
        kcg_lit_int32(0);
    }
  }
  outC->outDataBus.clockk.m_Value = kcg_lit_int32(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.radioDevice = kcg_lit_int32(
      0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.nid_message = kcg_lit_int32(
      0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.t_train = kcg_lit_int32(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.m_ack = kcg_lit_int32(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.nid_lrbg = kcg_lit_int32(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int32(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.nid_em = kcg_lit_int32(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.q_scale = kcg_lit_int32(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.d_sr = kcg_lit_int32(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.t_sh_rqst = kcg_lit_int32(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.d_ref = kcg_lit_int32(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.q_dir = kcg_lit_int32(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.m_version = kcg_lit_int32(0);
  for (idx93 = 0; idx93 < 30; idx93++) {
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[idx93].nid_packet =
      kcg_lit_int32(0);
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[idx93].q_dir =
      Q_DIR_Reverse;
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[idx93].valid =
      kcg_true;
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[idx93].startAddress =
      kcg_lit_int32(0);
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[idx93].endAddress =
      kcg_lit_int32(0);
  }
  for (idx94 = 0; idx94 < 500; idx94++) {
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketData[idx94] =
      kcg_lit_int32(0);
  }
  /* POSITION_REPORT_SM:PROCESS_POSITION_REPORT:_L5=(RBC_Session_Pkg::SessionManagement__SetPosData#1)/ */
  SessionManagement__SetPosData_init_RBC_Session_Pkg(
    &outC->Context_SessionManagement__SetPosData_1);
  /* POSITION_REPORT_SM:PROCESS_POSITION_REPORT:_L4=(RBC_Session_Pkg::PosData__Update#2)/ */
  PosData__Update_init_RBC_Session_Pkg(&outC->Context_PosData__Update_2);
  /* POSITION_REPORT_SM:PROCESS_POSITION_REPORT:_L3=(RBC_Session_Pkg::SessionManagement__GetPosData#2)/ */
  SessionManagement__GetPosData_init_RBC_Session_Pkg(
    &outC->Context_SessionManagement__GetPosData_2);
  /* _L18=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_NID_MESSAGE#2)/ */
  RadioTrainTrackHeader__Get_NID_MESSAGE_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackHeader__Get_NID_MESSAGE_2);
  /* _L16=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#2)/ */
  RadioTrainTrackMessage__GetHeader_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackMessage__GetHeader_2);
  outC->POSITION_REPORT_SM_reset_act = kcg_false;
  outC->POSITION_REPORT_SM_reset_nxt = kcg_false;
  outC->POSITION_REPORT_SM_state_nxt = SSM_st_IDLE_POSITION_REPORT_SM;
}
#endif /* KCG_USER_DEFINED_INIT */


void RBC__ProcessPositionReport_reset_RBC_Model_Pkg(
  outC_RBC__ProcessPositionReport_RBC_Model_Pkg *outC)
{
  /* POSITION_REPORT_SM:PROCESS_POSITION_REPORT:_L5=(RBC_Session_Pkg::SessionManagement__SetPosData#1)/ */
  SessionManagement__SetPosData_reset_RBC_Session_Pkg(
    &outC->Context_SessionManagement__SetPosData_1);
  /* POSITION_REPORT_SM:PROCESS_POSITION_REPORT:_L4=(RBC_Session_Pkg::PosData__Update#2)/ */
  PosData__Update_reset_RBC_Session_Pkg(&outC->Context_PosData__Update_2);
  /* POSITION_REPORT_SM:PROCESS_POSITION_REPORT:_L3=(RBC_Session_Pkg::SessionManagement__GetPosData#2)/ */
  SessionManagement__GetPosData_reset_RBC_Session_Pkg(
    &outC->Context_SessionManagement__GetPosData_2);
  /* _L18=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_NID_MESSAGE#2)/ */
  RadioTrainTrackHeader__Get_NID_MESSAGE_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackHeader__Get_NID_MESSAGE_2);
  /* _L16=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#2)/ */
  RadioTrainTrackMessage__GetHeader_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackMessage__GetHeader_2);
  outC->POSITION_REPORT_SM_reset_act = kcg_false;
  outC->POSITION_REPORT_SM_reset_nxt = kcg_false;
  outC->POSITION_REPORT_SM_state_nxt = SSM_st_IDLE_POSITION_REPORT_SM;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RBC__ProcessPositionReport_RBC_Model_Pkg.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

