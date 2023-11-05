/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Procedure_Train_Reversing_Procedures.h"

/* Procedures::Procedure_Train_Reversing/ */
void Procedure_Train_Reversing_Procedures(
  /* Driver_Ack_RV/ */
  kcg_bool Driver_Ack_RV,
  /* Train_Standstill/ */
  kcg_bool Train_Standstill,
  /* Train_Position/ */
  trainPosition_T_TrainPosition_Types_Pck *Train_Position,
  /* Current_Mode/ */
  T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* Reversing_Data/ */
  T_Reversing_Data_Level_And_Mode_Types_Pkg *Reversing_Data,
  outC_Procedure_Train_Reversing_Procedures *outC)
{
  /* Condition_59/ */
  static kcg_bool Condition_59_partial;
  /* Ack_RV_Req_To_Driver/ */
  static kcg_bool Ack_RV_Req_To_Driver_partial;
  /* SM_Train_Reversing: */
  static SSM_ST_SM_Train_Reversing SM_Train_Reversing_state_nxt_partial;
  /* SM_Train_Reversing: */
  static kcg_bool SM_Train_Reversing_reset_nxt_partial;
  /* SM_Train_Reversing: */
  static SSM_TR_SM_Train_Reversing SM_Train_Reversing_fired_partial;
  /* Condition_59/ */
  static kcg_bool _1_Condition_59_partial;
  /* Ack_RV_Req_To_Driver/ */
  static kcg_bool _2_Ack_RV_Req_To_Driver_partial;
  /* SM_Train_Reversing: */
  static SSM_ST_SM_Train_Reversing _3_SM_Train_Reversing_state_nxt_partial;
  /* SM_Train_Reversing: */
  static kcg_bool _4_SM_Train_Reversing_reset_nxt_partial;
  /* SM_Train_Reversing: */
  static SSM_TR_SM_Train_Reversing _5_SM_Train_Reversing_fired_partial;
  /* Condition_59/ */
  static kcg_bool _6_Condition_59_partial;
  /* Ack_RV_Req_To_Driver/ */
  static kcg_bool _7_Ack_RV_Req_To_Driver_partial;
  /* SM_Train_Reversing: */
  static SSM_ST_SM_Train_Reversing _8_SM_Train_Reversing_state_nxt_partial;
  /* SM_Train_Reversing: */
  static kcg_bool _9_SM_Train_Reversing_reset_nxt_partial;
  /* SM_Train_Reversing: */
  static SSM_TR_SM_Train_Reversing _10_SM_Train_Reversing_fired_partial;
  /* Condition_59/ */
  static kcg_bool _11_Condition_59_partial;
  /* Ack_RV_Req_To_Driver/ */
  static kcg_bool _12_Ack_RV_Req_To_Driver_partial;
  /* SM_Train_Reversing: */
  static SSM_ST_SM_Train_Reversing _13_SM_Train_Reversing_state_nxt_partial;
  /* SM_Train_Reversing: */
  static kcg_bool _14_SM_Train_Reversing_reset_nxt_partial;
  /* SM_Train_Reversing: */
  static SSM_TR_SM_Train_Reversing _15_SM_Train_Reversing_fired_partial;
  /* SM_Train_Reversing: */
  static SSM_ST_SM_Train_Reversing SM_Train_Reversing_state_act_partial;
  /* SM_Train_Reversing: */
  static kcg_bool SM_Train_Reversing_reset_act_partial;
  /* SM_Train_Reversing: */
  static SSM_TR_SM_Train_Reversing SM_Train_Reversing_fired_strong_partial;
  /* SM_Train_Reversing:Reversing_Procedure_Off:<1> */
  static kcg_bool tr_1_guard_Reversing_Procedure_Off_SM_Train_Reversing;
  /* SM_Train_Reversing: */
  static SSM_ST_SM_Train_Reversing _16_SM_Train_Reversing_state_act_partial;
  /* SM_Train_Reversing: */
  static kcg_bool _17_SM_Train_Reversing_reset_act_partial;
  /* SM_Train_Reversing: */
  static SSM_TR_SM_Train_Reversing _18_SM_Train_Reversing_fired_strong_partial;
  /* SM_Train_Reversing:Reversing_Condition:<3> */
  static kcg_bool tr_3_guard_Reversing_Condition_SM_Train_Reversing;
  /* SM_Train_Reversing:Reversing_Condition:<2> */
  static kcg_bool tr_2_guard_Reversing_Condition_SM_Train_Reversing;
  /* SM_Train_Reversing:Reversing_Condition:<1> */
  static kcg_bool tr_1_guard_Reversing_Condition_SM_Train_Reversing;
  /* SM_Train_Reversing: */
  static SSM_ST_SM_Train_Reversing _19_SM_Train_Reversing_state_act_partial;
  /* SM_Train_Reversing: */
  static kcg_bool _20_SM_Train_Reversing_reset_act_partial;
  /* SM_Train_Reversing: */
  static SSM_TR_SM_Train_Reversing _21_SM_Train_Reversing_fired_strong_partial;
  /* SM_Train_Reversing: */
  static SSM_ST_SM_Train_Reversing _22_SM_Train_Reversing_state_act_partial;
  /* SM_Train_Reversing: */
  static kcg_bool _23_SM_Train_Reversing_reset_act_partial;
  /* SM_Train_Reversing: */
  static SSM_TR_SM_Train_Reversing _24_SM_Train_Reversing_fired_strong_partial;
  /* SM_Train_Reversing:Reversing_Data_Available:<2> */
  static kcg_bool tr_2_guard_Reversing_Data_Available_SM_Train_Reversing;
  /* SM_Train_Reversing:Reversing_Data_Available:<1> */
  static kcg_bool tr_1_guard_Reversing_Data_Available_SM_Train_Reversing;
  /* SM_Train_Reversing: */
  static kcg_bool SM_Train_Reversing_reset_sel;
  /* SM_Train_Reversing: */
  static kcg_bool SM_Train_Reversing_reset_prv;

  kcg_copy_T_Reversing_Data_Level_And_Mode_Types_Pkg(&outC->_L18, Reversing_Data);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L17, Train_Position);
  /* _L16=(Librairies::Reversing_Calculations#1)/ */
  Reversing_Calculations_Librairies(
    &outC->_L18,
    &outC->_L17,
    &outC->Context_Reversing_Calculations_1);
  outC->_L16 =
    outC->Context_Reversing_Calculations_1.Max_Safe_Front_In_Reverse_Area;
  outC->_L19 = outC->Context_Reversing_Calculations_1.RV_Data_Available;
  outC->Loc_RV_Data_Available = outC->_L19;
  outC->_L20 = ((Current_Mode == FS_Level_And_Mode_Types_Pkg) | (Current_Mode ==
        LS_Level_And_Mode_Types_Pkg) | (Current_Mode ==
        OS_Level_And_Mode_Types_Pkg)) & outC->Loc_RV_Data_Available;
  outC->Loc_Cond_Procedure_On = outC->_L20;
  outC->Loc_Max_Safe_Front_In_RV_Area = outC->_L16;
  outC->SM_Train_Reversing_state_sel = outC->SM_Train_Reversing_state_nxt;
  /* SM_Train_Reversing: */
  switch (outC->SM_Train_Reversing_state_sel) {
    case SSM_st_Reversing_Data_Available_SM_Train_Reversing :
      tr_2_guard_Reversing_Data_Available_SM_Train_Reversing =
        !outC->Loc_Cond_Procedure_On;
      tr_1_guard_Reversing_Data_Available_SM_Train_Reversing =
        Train_Standstill & outC->Loc_Max_Safe_Front_In_RV_Area;
      if (tr_1_guard_Reversing_Data_Available_SM_Train_Reversing) {
        _22_SM_Train_Reversing_state_act_partial =
          SSM_st_Reversing_Condition_SM_Train_Reversing;
      }
      else if (tr_2_guard_Reversing_Data_Available_SM_Train_Reversing) {
        _22_SM_Train_Reversing_state_act_partial =
          SSM_st_Reversing_Procedure_Off_SM_Train_Reversing;
      }
      else {
        _22_SM_Train_Reversing_state_act_partial =
          SSM_st_Reversing_Data_Available_SM_Train_Reversing;
      }
      outC->SM_Train_Reversing_state_act = _22_SM_Train_Reversing_state_act_partial;
      break;
    case SSM_st_RV_Mode_SM_Train_Reversing :
      _19_SM_Train_Reversing_state_act_partial = SSM_st_RV_Mode_SM_Train_Reversing;
      outC->SM_Train_Reversing_state_act = _19_SM_Train_Reversing_state_act_partial;
      break;
    case SSM_st_Reversing_Condition_SM_Train_Reversing :
      tr_3_guard_Reversing_Condition_SM_Train_Reversing = !(Train_Standstill &
          outC->Loc_Max_Safe_Front_In_RV_Area);
      tr_2_guard_Reversing_Condition_SM_Train_Reversing =
        !outC->Loc_Cond_Procedure_On;
      tr_1_guard_Reversing_Condition_SM_Train_Reversing = Driver_Ack_RV;
      if (tr_1_guard_Reversing_Condition_SM_Train_Reversing) {
        _16_SM_Train_Reversing_state_act_partial = SSM_st_RV_Mode_SM_Train_Reversing;
      }
      else if (tr_2_guard_Reversing_Condition_SM_Train_Reversing) {
        _16_SM_Train_Reversing_state_act_partial =
          SSM_st_Reversing_Procedure_Off_SM_Train_Reversing;
      }
      else if (tr_3_guard_Reversing_Condition_SM_Train_Reversing) {
        _16_SM_Train_Reversing_state_act_partial =
          SSM_st_Reversing_Data_Available_SM_Train_Reversing;
      }
      else {
        _16_SM_Train_Reversing_state_act_partial =
          SSM_st_Reversing_Condition_SM_Train_Reversing;
      }
      outC->SM_Train_Reversing_state_act = _16_SM_Train_Reversing_state_act_partial;
      break;
    case SSM_st_Reversing_Procedure_Off_SM_Train_Reversing :
      tr_1_guard_Reversing_Procedure_Off_SM_Train_Reversing =
        outC->Loc_Cond_Procedure_On;
      if (tr_1_guard_Reversing_Procedure_Off_SM_Train_Reversing) {
        SM_Train_Reversing_state_act_partial =
          SSM_st_Reversing_Data_Available_SM_Train_Reversing;
      }
      else {
        SM_Train_Reversing_state_act_partial =
          SSM_st_Reversing_Procedure_Off_SM_Train_Reversing;
      }
      outC->SM_Train_Reversing_state_act = SM_Train_Reversing_state_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM_Train_Reversing_state_act) {
    case SSM_st_Reversing_Data_Available_SM_Train_Reversing :
      _12_Ack_RV_Req_To_Driver_partial = kcg_false;
      _11_Condition_59_partial = kcg_false;
      break;
    default :
      /* this branch is empty */
      break;
  }
  /* SM_Train_Reversing: */
  switch (outC->SM_Train_Reversing_state_sel) {
    case SSM_st_Reversing_Data_Available_SM_Train_Reversing :
      if (tr_1_guard_Reversing_Data_Available_SM_Train_Reversing) {
        _24_SM_Train_Reversing_fired_strong_partial =
          SSM_TR_Reversing_Data_Available_Reversing_Condition_1_Reversing_Data_Available_SM_Train_Reversing;
      }
      else if (tr_2_guard_Reversing_Data_Available_SM_Train_Reversing) {
        _24_SM_Train_Reversing_fired_strong_partial =
          SSM_TR_Reversing_Data_Available_Reversing_Procedure_Off_2_Reversing_Data_Available_SM_Train_Reversin;
      }
      else {
        _24_SM_Train_Reversing_fired_strong_partial =
          SSM_TR_no_trans_SM_Train_Reversing;
      }
      outC->SM_Train_Reversing_fired_strong =
        _24_SM_Train_Reversing_fired_strong_partial;
      break;
    case SSM_st_RV_Mode_SM_Train_Reversing :
      _21_SM_Train_Reversing_fired_strong_partial =
        SSM_TR_no_trans_SM_Train_Reversing;
      outC->SM_Train_Reversing_fired_strong =
        _21_SM_Train_Reversing_fired_strong_partial;
      break;
    case SSM_st_Reversing_Condition_SM_Train_Reversing :
      if (tr_1_guard_Reversing_Condition_SM_Train_Reversing) {
        _18_SM_Train_Reversing_fired_strong_partial =
          SSM_TR_Reversing_Condition_RV_Mode_1_Reversing_Condition_SM_Train_Reversing;
      }
      else if (tr_2_guard_Reversing_Condition_SM_Train_Reversing) {
        _18_SM_Train_Reversing_fired_strong_partial =
          SSM_TR_Reversing_Condition_Reversing_Procedure_Off_2_Reversing_Condition_SM_Train_Reversing;
      }
      else if (tr_3_guard_Reversing_Condition_SM_Train_Reversing) {
        _18_SM_Train_Reversing_fired_strong_partial =
          SSM_TR_Reversing_Condition_Reversing_Data_Available_3_Reversing_Condition_SM_Train_Reversing;
      }
      else {
        _18_SM_Train_Reversing_fired_strong_partial =
          SSM_TR_no_trans_SM_Train_Reversing;
      }
      outC->SM_Train_Reversing_fired_strong =
        _18_SM_Train_Reversing_fired_strong_partial;
      break;
    case SSM_st_Reversing_Procedure_Off_SM_Train_Reversing :
      if (tr_1_guard_Reversing_Procedure_Off_SM_Train_Reversing) {
        SM_Train_Reversing_fired_strong_partial =
          SSM_TR_Reversing_Procedure_Off_Reversing_Data_Available_1_Reversing_Procedure_Off_SM_Train_Reversing;
      }
      else {
        SM_Train_Reversing_fired_strong_partial = SSM_TR_no_trans_SM_Train_Reversing;
      }
      outC->SM_Train_Reversing_fired_strong = SM_Train_Reversing_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM_Train_Reversing: */
  switch (outC->SM_Train_Reversing_state_act) {
    case SSM_st_Reversing_Data_Available_SM_Train_Reversing :
      _15_SM_Train_Reversing_fired_partial = outC->SM_Train_Reversing_fired_strong;
      _14_SM_Train_Reversing_reset_nxt_partial = kcg_false;
      _13_SM_Train_Reversing_state_nxt_partial =
        SSM_st_Reversing_Data_Available_SM_Train_Reversing;
      outC->Condition_59 = _11_Condition_59_partial;
      outC->Ack_RV_Req_To_Driver = _12_Ack_RV_Req_To_Driver_partial;
      outC->SM_Train_Reversing_state_nxt = _13_SM_Train_Reversing_state_nxt_partial;
      break;
    case SSM_st_RV_Mode_SM_Train_Reversing :
      _7_Ack_RV_Req_To_Driver_partial = kcg_false;
      _10_SM_Train_Reversing_fired_partial = outC->SM_Train_Reversing_fired_strong;
      _9_SM_Train_Reversing_reset_nxt_partial = kcg_false;
      _8_SM_Train_Reversing_state_nxt_partial = SSM_st_RV_Mode_SM_Train_Reversing;
      outC->_L1_RV_Mode_SM_Train_Reversing = kcg_true;
      _6_Condition_59_partial = outC->_L1_RV_Mode_SM_Train_Reversing;
      outC->Condition_59 = _6_Condition_59_partial;
      outC->Ack_RV_Req_To_Driver = _7_Ack_RV_Req_To_Driver_partial;
      outC->SM_Train_Reversing_state_nxt = _8_SM_Train_Reversing_state_nxt_partial;
      break;
    case SSM_st_Reversing_Condition_SM_Train_Reversing :
      _1_Condition_59_partial = kcg_false;
      _5_SM_Train_Reversing_fired_partial = outC->SM_Train_Reversing_fired_strong;
      _4_SM_Train_Reversing_reset_nxt_partial = kcg_false;
      _3_SM_Train_Reversing_state_nxt_partial =
        SSM_st_Reversing_Condition_SM_Train_Reversing;
      outC->_L2_Reversing_Condition_SM_Train_Reversing = kcg_true;
      _2_Ack_RV_Req_To_Driver_partial =
        outC->_L2_Reversing_Condition_SM_Train_Reversing;
      outC->Condition_59 = _1_Condition_59_partial;
      outC->Ack_RV_Req_To_Driver = _2_Ack_RV_Req_To_Driver_partial;
      outC->SM_Train_Reversing_state_nxt = _3_SM_Train_Reversing_state_nxt_partial;
      break;
    case SSM_st_Reversing_Procedure_Off_SM_Train_Reversing :
      Ack_RV_Req_To_Driver_partial = kcg_false;
      Condition_59_partial = kcg_false;
      SM_Train_Reversing_fired_partial = outC->SM_Train_Reversing_fired_strong;
      SM_Train_Reversing_reset_nxt_partial = kcg_false;
      SM_Train_Reversing_state_nxt_partial =
        SSM_st_Reversing_Procedure_Off_SM_Train_Reversing;
      outC->Condition_59 = Condition_59_partial;
      outC->Ack_RV_Req_To_Driver = Ack_RV_Req_To_Driver_partial;
      outC->SM_Train_Reversing_state_nxt = SM_Train_Reversing_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM_Train_Reversing_reset_sel = outC->SM_Train_Reversing_reset_nxt;
  /* SM_Train_Reversing: */
  switch (outC->SM_Train_Reversing_state_act) {
    case SSM_st_Reversing_Data_Available_SM_Train_Reversing :
      outC->SM_Train_Reversing_reset_nxt = _14_SM_Train_Reversing_reset_nxt_partial;
      outC->SM_Train_Reversing_fired = _15_SM_Train_Reversing_fired_partial;
      break;
    case SSM_st_RV_Mode_SM_Train_Reversing :
      outC->SM_Train_Reversing_reset_nxt = _9_SM_Train_Reversing_reset_nxt_partial;
      outC->SM_Train_Reversing_fired = _10_SM_Train_Reversing_fired_partial;
      break;
    case SSM_st_Reversing_Condition_SM_Train_Reversing :
      outC->SM_Train_Reversing_reset_nxt = _4_SM_Train_Reversing_reset_nxt_partial;
      outC->SM_Train_Reversing_fired = _5_SM_Train_Reversing_fired_partial;
      break;
    case SSM_st_Reversing_Procedure_Off_SM_Train_Reversing :
      outC->SM_Train_Reversing_reset_nxt = SM_Train_Reversing_reset_nxt_partial;
      outC->SM_Train_Reversing_fired = SM_Train_Reversing_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM_Train_Reversing_state_sel) {
    case SSM_st_Reversing_Data_Available_SM_Train_Reversing :
      if (tr_1_guard_Reversing_Data_Available_SM_Train_Reversing) {
        _23_SM_Train_Reversing_reset_act_partial = kcg_true;
      }
      else {
        _23_SM_Train_Reversing_reset_act_partial =
          tr_2_guard_Reversing_Data_Available_SM_Train_Reversing;
      }
      break;
    case SSM_st_RV_Mode_SM_Train_Reversing :
      _20_SM_Train_Reversing_reset_act_partial = kcg_false;
      break;
    case SSM_st_Reversing_Condition_SM_Train_Reversing :
      if (tr_1_guard_Reversing_Condition_SM_Train_Reversing) {
        _17_SM_Train_Reversing_reset_act_partial = kcg_true;
      }
      else if (tr_2_guard_Reversing_Condition_SM_Train_Reversing) {
        _17_SM_Train_Reversing_reset_act_partial = kcg_true;
      }
      else {
        _17_SM_Train_Reversing_reset_act_partial =
          tr_3_guard_Reversing_Condition_SM_Train_Reversing;
      }
      break;
    case SSM_st_Reversing_Procedure_Off_SM_Train_Reversing :
      SM_Train_Reversing_reset_act_partial =
        tr_1_guard_Reversing_Procedure_Off_SM_Train_Reversing;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM_Train_Reversing_reset_prv = outC->SM_Train_Reversing_reset_act;
  /* SM_Train_Reversing: */
  switch (outC->SM_Train_Reversing_state_sel) {
    case SSM_st_Reversing_Data_Available_SM_Train_Reversing :
      outC->SM_Train_Reversing_reset_act = _23_SM_Train_Reversing_reset_act_partial;
      break;
    case SSM_st_RV_Mode_SM_Train_Reversing :
      outC->SM_Train_Reversing_reset_act = _20_SM_Train_Reversing_reset_act_partial;
      break;
    case SSM_st_Reversing_Condition_SM_Train_Reversing :
      outC->SM_Train_Reversing_reset_act = _17_SM_Train_Reversing_reset_act_partial;
      break;
    case SSM_st_Reversing_Procedure_Off_SM_Train_Reversing :
      outC->SM_Train_Reversing_reset_act = SM_Train_Reversing_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void Procedure_Train_Reversing_init_Procedures(
  outC_Procedure_Train_Reversing_Procedures *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L20 = kcg_true;
  outC->_L19 = kcg_true;
  outC->_L18.Available = kcg_true;
  outC->_L18.Dist_Start = kcg_lit_int32(0);
  outC->_L18.Length = kcg_lit_int32(0);
  outC->_L18.Dist_Run = kcg_lit_int32(0);
  outC->_L18.Speed = kcg_lit_int32(0);
  outC->_L17.valid = kcg_true;
  outC->_L17.timestamp = kcg_lit_int32(0);
  outC->_L17.trainPositionIsUnknown = kcg_true;
  outC->_L17.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L17.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L17.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L17.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L17.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L17.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L17.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L17.LRBG.valid = kcg_true;
  outC->_L17.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L17.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L17.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L17.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L17.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L17.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L17.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L17.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L17.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L17.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L17.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L17.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L17.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L17.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L17.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L17.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L17.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L17.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L17.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L17.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L17.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L17.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L17.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L17.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L17.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L17.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L17.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L17.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L17.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L17.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L17.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L17.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L17.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L17.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L17.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L17.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L17.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L17.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L17.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L17.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L17.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L17.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L17.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L17.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L17.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L17.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L17.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L17.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L17.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L17.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L17.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L17.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L17.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L17.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L17.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L17.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L17.LRBG.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L17.LRBG.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int32(0);
    outC->_L17.LRBG.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L17.LRBG.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L17.LRBG.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int32(0);
    outC->_L17.LRBG.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L17.LRBG.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int32(0);
    outC->_L17.LRBG.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int32(0);
    outC->_L17.LRBG.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L17.LRBG.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L17.LRBG.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int32(0);
  }
  outC->_L17.LRBG.missed = kcg_true;
  outC->_L17.prvLRBG.valid = kcg_true;
  outC->_L17.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L17.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L17.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L17.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L17.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L17.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L17.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L17.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L17.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L17.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L17.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L17.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L17.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L17.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L17.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L17.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L17.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L17.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L17.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L17.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L17.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L17.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L17.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L17.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L17.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L17.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L17.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L17.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L17.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L17.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L17.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L17.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L17.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L17.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L17.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L17.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L17.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L17.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L17.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L17.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L17.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L17.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L17.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L17.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L17.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L17.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L17.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L17.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L17.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L17.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L17.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L17.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L17.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L17.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L17.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L17.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L17.prvLRBG.infoFromPassing.linkedBGs[idx1].valid = kcg_true;
    outC->_L17.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int32(0);
    outC->_L17.prvLRBG.infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L17.prvLRBG.infoFromPassing.linkedBGs[idx1].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L17.prvLRBG.infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int32(0);
    outC->_L17.prvLRBG.infoFromPassing.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L17.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int32(0);
    outC->_L17.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int32(0);
    outC->_L17.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L17.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L17.prvLRBG.infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int32(0);
  }
  outC->_L17.prvLRBG.missed = kcg_true;
  outC->_L17.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L17.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L17.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L17.linkingIsUsedOnboard = kcg_true;
  outC->_L17.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L17.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L17.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L16 = kcg_true;
  outC->Loc_Cond_Procedure_On = kcg_true;
  outC->Loc_RV_Data_Available = kcg_true;
  outC->Loc_Max_Safe_Front_In_RV_Area = kcg_true;
  outC->SM_Train_Reversing_fired = SSM_TR_no_trans_SM_Train_Reversing;
  outC->SM_Train_Reversing_fired_strong = SSM_TR_no_trans_SM_Train_Reversing;
  outC->SM_Train_Reversing_state_act =
    SSM_st_Reversing_Procedure_Off_SM_Train_Reversing;
  outC->SM_Train_Reversing_state_sel =
    SSM_st_Reversing_Procedure_Off_SM_Train_Reversing;
  outC->_L1_RV_Mode_SM_Train_Reversing = kcg_true;
  outC->_L2_Reversing_Condition_SM_Train_Reversing = kcg_true;
  outC->Ack_RV_Req_To_Driver = kcg_true;
  outC->Condition_59 = kcg_true;
  /* _L16=(Librairies::Reversing_Calculations#1)/ */
  Reversing_Calculations_init_Librairies(
    &outC->Context_Reversing_Calculations_1);
  outC->SM_Train_Reversing_reset_act = kcg_false;
  outC->SM_Train_Reversing_reset_nxt = kcg_false;
  outC->SM_Train_Reversing_state_nxt =
    SSM_st_Reversing_Procedure_Off_SM_Train_Reversing;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Procedure_Train_Reversing_reset_Procedures(
  outC_Procedure_Train_Reversing_Procedures *outC)
{
  /* _L16=(Librairies::Reversing_Calculations#1)/ */
  Reversing_Calculations_reset_Librairies(
    &outC->Context_Reversing_Calculations_1);
  outC->SM_Train_Reversing_reset_act = kcg_false;
  outC->SM_Train_Reversing_reset_nxt = kcg_false;
  outC->SM_Train_Reversing_state_nxt =
    SSM_st_Reversing_Procedure_Off_SM_Train_Reversing;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Procedure_Train_Reversing_Procedures.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

