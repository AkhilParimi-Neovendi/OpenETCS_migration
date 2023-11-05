/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TxtMsgSimulator_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator/ */
void TxtMsgSimulator_DMI_Control_Pkg_Sub_func_TextMessages(
  /* MousePressed/ */
  kcg_bool MousePressed,
  outC_TxtMsgSimulator_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  /* txt/ */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg txt_partial;
  /* SM1: */
  static _112_SSM_ST_SM1 SM1_state_nxt_partial;
  /* SM1: */
  static kcg_bool SM1_reset_nxt_partial;
  /* SM1: */
  static _113_SSM_TR_SM1 SM1_fired_partial;
  /* SM1:insert1:<1> */
  static kcg_bool tr_1_guard_insert1_SM1;
  /* txt/ */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _1_txt_partial;
  /* SM1: */
  static _112_SSM_ST_SM1 _2_SM1_state_nxt_partial;
  /* SM1: */
  static kcg_bool _3_SM1_reset_nxt_partial;
  /* SM1: */
  static _113_SSM_TR_SM1 _4_SM1_fired_partial;
  /* SM1:State2:<1> */
  static kcg_bool tr_1_guard_State2_SM1;
  /* txt/ */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _5_txt_partial;
  /* SM1: */
  static _112_SSM_ST_SM1 _6_SM1_state_nxt_partial;
  /* SM1: */
  static kcg_bool _7_SM1_reset_nxt_partial;
  /* SM1: */
  static _113_SSM_TR_SM1 _8_SM1_fired_partial;
  /* SM1:insert2:<1> */
  static kcg_bool tr_1_guard_insert2_SM1;
  /* txt/ */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _9_txt_partial;
  /* SM1: */
  static _112_SSM_ST_SM1 _10_SM1_state_nxt_partial;
  /* SM1: */
  static kcg_bool _11_SM1_reset_nxt_partial;
  /* SM1: */
  static _113_SSM_TR_SM1 _12_SM1_fired_partial;
  /* SM1:State4:<1> */
  static kcg_bool tr_1_guard_State4_SM1;
  /* txt/ */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _13_txt_partial;
  /* SM1: */
  static _112_SSM_ST_SM1 _14_SM1_state_nxt_partial;
  /* SM1: */
  static kcg_bool _15_SM1_reset_nxt_partial;
  /* SM1: */
  static _113_SSM_TR_SM1 _16_SM1_fired_partial;
  /* SM1:insert3:<1> */
  static kcg_bool tr_1_guard_insert3_SM1;
  /* txt/ */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _17_txt_partial;
  /* SM1: */
  static _112_SSM_ST_SM1 _18_SM1_state_nxt_partial;
  /* SM1: */
  static kcg_bool _19_SM1_reset_nxt_partial;
  /* SM1: */
  static _113_SSM_TR_SM1 _20_SM1_fired_partial;
  /* SM1:State6:<1> */
  static kcg_bool tr_1_guard_State6_SM1;
  /* txt/ */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _21_txt_partial;
  /* SM1: */
  static _112_SSM_ST_SM1 _22_SM1_state_nxt_partial;
  /* SM1: */
  static kcg_bool _23_SM1_reset_nxt_partial;
  /* SM1: */
  static _113_SSM_TR_SM1 _24_SM1_fired_partial;
  /* SM1:insert4:<1> */
  static kcg_bool tr_1_guard_insert4_SM1;
  /* txt/ */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _25_txt_partial;
  /* SM1: */
  static _112_SSM_ST_SM1 _26_SM1_state_nxt_partial;
  /* SM1: */
  static kcg_bool _27_SM1_reset_nxt_partial;
  /* SM1: */
  static _113_SSM_TR_SM1 _28_SM1_fired_partial;
  /* SM1:State8:<1> */
  static kcg_bool tr_1_guard_State8_SM1;
  /* txt/ */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _29_txt_partial;
  /* SM1: */
  static _112_SSM_ST_SM1 _30_SM1_state_nxt_partial;
  /* SM1: */
  static kcg_bool _31_SM1_reset_nxt_partial;
  /* SM1: */
  static _113_SSM_TR_SM1 _32_SM1_fired_partial;
  /* SM1:State0:<1> */
  static kcg_bool tr_1_guard_State0_SM1;
  /* txt/ */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _33_txt_partial;
  /* SM1: */
  static _112_SSM_ST_SM1 _34_SM1_state_nxt_partial;
  /* SM1: */
  static kcg_bool _35_SM1_reset_nxt_partial;
  /* SM1: */
  static _113_SSM_TR_SM1 _36_SM1_fired_partial;
  /* SM1:insertAck2:<1> */
  static kcg_bool tr_1_guard_insertAck2_SM1;
  /* txt/ */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _37_txt_partial;
  /* SM1: */
  static _112_SSM_ST_SM1 _38_SM1_state_nxt_partial;
  /* SM1: */
  static kcg_bool _39_SM1_reset_nxt_partial;
  /* SM1: */
  static _113_SSM_TR_SM1 _40_SM1_fired_partial;
  /* SM1:insertAck1:<1> */
  static kcg_bool tr_1_guard_insertAck1_SM1;
  /* txt/ */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _41_txt_partial;
  /* SM1: */
  static _112_SSM_ST_SM1 _42_SM1_state_nxt_partial;
  /* SM1: */
  static kcg_bool _43_SM1_reset_nxt_partial;
  /* SM1: */
  static _113_SSM_TR_SM1 _44_SM1_fired_partial;
  /* SM1:State5:<1> */
  static kcg_bool tr_1_guard_State5_SM1;
  /* txt/ */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _45_txt_partial;
  /* SM1: */
  static _112_SSM_ST_SM1 _46_SM1_state_nxt_partial;
  /* SM1: */
  static kcg_bool _47_SM1_reset_nxt_partial;
  /* SM1: */
  static _113_SSM_TR_SM1 _48_SM1_fired_partial;
  /* SM1:State3:<1> */
  static kcg_bool tr_1_guard_State3_SM1;
  /* txt/ */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _49_txt_partial;
  /* SM1: */
  static _112_SSM_ST_SM1 _50_SM1_state_nxt_partial;
  /* SM1: */
  static kcg_bool _51_SM1_reset_nxt_partial;
  /* SM1: */
  static _113_SSM_TR_SM1 _52_SM1_fired_partial;
  /* SM1:insert5:<1> */
  static kcg_bool tr_1_guard_insert5_SM1;
  /* txt/ */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _53_txt_partial;
  /* SM1: */
  static _112_SSM_ST_SM1 _54_SM1_state_nxt_partial;
  /* SM1: */
  static kcg_bool _55_SM1_reset_nxt_partial;
  /* SM1: */
  static _113_SSM_TR_SM1 _56_SM1_fired_partial;
  /* SM1:State7:<1> */
  static kcg_bool tr_1_guard_State7_SM1;
  /* txt/ */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _57_txt_partial;
  /* SM1: */
  static _112_SSM_ST_SM1 _58_SM1_state_nxt_partial;
  /* SM1: */
  static kcg_bool _59_SM1_reset_nxt_partial;
  /* SM1: */
  static _113_SSM_TR_SM1 _60_SM1_fired_partial;
  /* SM1:insert6:<1> */
  static kcg_bool tr_1_guard_insert6_SM1;
  /* txt/ */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _61_txt_partial;
  /* SM1: */
  static _112_SSM_ST_SM1 _62_SM1_state_nxt_partial;
  /* SM1: */
  static kcg_bool _63_SM1_reset_nxt_partial;
  /* SM1: */
  static _113_SSM_TR_SM1 _64_SM1_fired_partial;
  /* SM1: */
  static kcg_bool SM1_reset_sel;
  /* SM1: */
  static kcg_bool SM1_reset_prv;

  outC->_L1 = MousePressed;
  outC->clicked = outC->_L1;
  outC->SM1_state_sel = outC->SM1_state_nxt;
  outC->SM1_state_act = outC->SM1_state_sel;
  outC->SM1_fired_strong = _169_SSM_TR_no_trans_SM1;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_State9_SM1 :
      _64_SM1_fired_partial = outC->SM1_fired_strong;
      _63_SM1_reset_nxt_partial = kcg_false;
      _62_SM1_state_nxt_partial = SSM_st_State9_SM1;
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->_L1_State9_SM1,
        (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *) &cMsg_leer_DMI_Control_Pkg);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &_61_txt_partial,
        &outC->_L1_State9_SM1);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->txt,
        &_61_txt_partial);
      outC->SM1_state_nxt = _62_SM1_state_nxt_partial;
      break;
    case SSM_st_insert6_SM1 :
      tr_1_guard_insert6_SM1 = kcg_true;
      if (tr_1_guard_insert6_SM1) {
        _60_SM1_fired_partial = SSM_TR_insert6_State9_1_insert6_SM1;
      }
      else {
        _60_SM1_fired_partial = _169_SSM_TR_no_trans_SM1;
      }
      _59_SM1_reset_nxt_partial = tr_1_guard_insert6_SM1;
      if (tr_1_guard_insert6_SM1) {
        _58_SM1_state_nxt_partial = SSM_st_State9_SM1;
      }
      else {
        _58_SM1_state_nxt_partial = SSM_st_insert6_SM1;
      }
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->_L1_insert6_SM1,
        (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cMsg_important1_DMI_Control_Pkg);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &_57_txt_partial,
        &outC->_L1_insert6_SM1);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->txt,
        &_57_txt_partial);
      outC->SM1_state_nxt = _58_SM1_state_nxt_partial;
      break;
    case SSM_st_State7_SM1 :
      tr_1_guard_State7_SM1 = outC->clicked;
      if (tr_1_guard_State7_SM1) {
        _56_SM1_fired_partial = SSM_TR_State7_insert6_1_State7_SM1;
      }
      else {
        _56_SM1_fired_partial = _169_SSM_TR_no_trans_SM1;
      }
      _55_SM1_reset_nxt_partial = tr_1_guard_State7_SM1;
      if (tr_1_guard_State7_SM1) {
        _54_SM1_state_nxt_partial = SSM_st_insert6_SM1;
      }
      else {
        _54_SM1_state_nxt_partial = SSM_st_State7_SM1;
      }
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->_L1_State7_SM1,
        (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *) &cMsg_leer_DMI_Control_Pkg);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &_53_txt_partial,
        &outC->_L1_State7_SM1);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->txt,
        &_53_txt_partial);
      outC->SM1_state_nxt = _54_SM1_state_nxt_partial;
      break;
    case SSM_st_insert5_SM1 :
      tr_1_guard_insert5_SM1 = kcg_true;
      if (tr_1_guard_insert5_SM1) {
        _52_SM1_fired_partial = SSM_TR_insert5_State7_1_insert5_SM1;
      }
      else {
        _52_SM1_fired_partial = _169_SSM_TR_no_trans_SM1;
      }
      _51_SM1_reset_nxt_partial = tr_1_guard_insert5_SM1;
      if (tr_1_guard_insert5_SM1) {
        _50_SM1_state_nxt_partial = SSM_st_State7_SM1;
      }
      else {
        _50_SM1_state_nxt_partial = SSM_st_insert5_SM1;
      }
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->_L1_insert5_SM1,
        (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *) &cMsg_auxi3_DMI_Control_Pkg);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &_49_txt_partial,
        &outC->_L1_insert5_SM1);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->txt,
        &_49_txt_partial);
      outC->SM1_state_nxt = _50_SM1_state_nxt_partial;
      break;
    case _170_SSM_st_State3_SM1 :
      tr_1_guard_State3_SM1 = outC->clicked;
      if (tr_1_guard_State3_SM1) {
        _48_SM1_fired_partial = SSM_TR_State3_insertAck2_1_State3_SM1;
      }
      else {
        _48_SM1_fired_partial = _169_SSM_TR_no_trans_SM1;
      }
      _47_SM1_reset_nxt_partial = tr_1_guard_State3_SM1;
      if (tr_1_guard_State3_SM1) {
        _46_SM1_state_nxt_partial = SSM_st_insertAck2_SM1;
      }
      else {
        _46_SM1_state_nxt_partial = _170_SSM_st_State3_SM1;
      }
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->_L1_State3_SM1,
        (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *) &cMsg_leer_DMI_Control_Pkg);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &_45_txt_partial,
        &outC->_L1_State3_SM1);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->txt,
        &_45_txt_partial);
      outC->SM1_state_nxt = _46_SM1_state_nxt_partial;
      break;
    case SSM_st_State5_SM1 :
      tr_1_guard_State5_SM1 = outC->clicked;
      if (tr_1_guard_State5_SM1) {
        _44_SM1_fired_partial = SSM_TR_State5_insert5_1_State5_SM1;
      }
      else {
        _44_SM1_fired_partial = _169_SSM_TR_no_trans_SM1;
      }
      _43_SM1_reset_nxt_partial = tr_1_guard_State5_SM1;
      if (tr_1_guard_State5_SM1) {
        _42_SM1_state_nxt_partial = SSM_st_insert5_SM1;
      }
      else {
        _42_SM1_state_nxt_partial = SSM_st_State5_SM1;
      }
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->_L1_State5_SM1,
        (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *) &cMsg_leer_DMI_Control_Pkg);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &_41_txt_partial,
        &outC->_L1_State5_SM1);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->txt,
        &_41_txt_partial);
      outC->SM1_state_nxt = _42_SM1_state_nxt_partial;
      break;
    case SSM_st_insertAck1_SM1 :
      tr_1_guard_insertAck1_SM1 = kcg_true;
      if (tr_1_guard_insertAck1_SM1) {
        _40_SM1_fired_partial = SSM_TR_insertAck1_State3_1_insertAck1_SM1;
      }
      else {
        _40_SM1_fired_partial = _169_SSM_TR_no_trans_SM1;
      }
      _39_SM1_reset_nxt_partial = tr_1_guard_insertAck1_SM1;
      if (tr_1_guard_insertAck1_SM1) {
        _38_SM1_state_nxt_partial = _170_SSM_st_State3_SM1;
      }
      else {
        _38_SM1_state_nxt_partial = SSM_st_insertAck1_SM1;
      }
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->_L1_insertAck1_SM1,
        (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *) &cMsg_ack1_DMI_Control_Pkg);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &_37_txt_partial,
        &outC->_L1_insertAck1_SM1);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->txt,
        &_37_txt_partial);
      outC->SM1_state_nxt = _38_SM1_state_nxt_partial;
      break;
    case SSM_st_insertAck2_SM1 :
      tr_1_guard_insertAck2_SM1 = kcg_true;
      if (tr_1_guard_insertAck2_SM1) {
        _36_SM1_fired_partial = SSM_TR_insertAck2_State5_1_insertAck2_SM1;
      }
      else {
        _36_SM1_fired_partial = _169_SSM_TR_no_trans_SM1;
      }
      _35_SM1_reset_nxt_partial = tr_1_guard_insertAck2_SM1;
      if (tr_1_guard_insertAck2_SM1) {
        _34_SM1_state_nxt_partial = SSM_st_State5_SM1;
      }
      else {
        _34_SM1_state_nxt_partial = SSM_st_insertAck2_SM1;
      }
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->_L1_insertAck2_SM1,
        (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *) &cMsg_ack2_DMI_Control_Pkg);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &_33_txt_partial,
        &outC->_L1_insertAck2_SM1);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->txt,
        &_33_txt_partial);
      outC->SM1_state_nxt = _34_SM1_state_nxt_partial;
      break;
    case SSM_st_State0_SM1 :
      tr_1_guard_State0_SM1 = outC->clicked;
      if (tr_1_guard_State0_SM1) {
        _32_SM1_fired_partial = SSM_TR_State0_insert1_1_State0_SM1;
      }
      else {
        _32_SM1_fired_partial = _169_SSM_TR_no_trans_SM1;
      }
      _31_SM1_reset_nxt_partial = tr_1_guard_State0_SM1;
      if (tr_1_guard_State0_SM1) {
        _30_SM1_state_nxt_partial = SSM_st_insert1_SM1;
      }
      else {
        _30_SM1_state_nxt_partial = SSM_st_State0_SM1;
      }
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->_L1_State0_SM1,
        (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *) &cMsg_leer_DMI_Control_Pkg);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &_29_txt_partial,
        &outC->_L1_State0_SM1);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->txt,
        &_29_txt_partial);
      outC->SM1_state_nxt = _30_SM1_state_nxt_partial;
      break;
    case SSM_st_State8_SM1 :
      tr_1_guard_State8_SM1 = outC->clicked;
      if (tr_1_guard_State8_SM1) {
        _28_SM1_fired_partial = SSM_TR_State8_insertAck1_1_State8_SM1;
      }
      else {
        _28_SM1_fired_partial = _169_SSM_TR_no_trans_SM1;
      }
      _27_SM1_reset_nxt_partial = tr_1_guard_State8_SM1;
      if (tr_1_guard_State8_SM1) {
        _26_SM1_state_nxt_partial = SSM_st_insertAck1_SM1;
      }
      else {
        _26_SM1_state_nxt_partial = SSM_st_State8_SM1;
      }
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->_L1_State8_SM1,
        (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *) &cMsg_leer_DMI_Control_Pkg);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &_25_txt_partial,
        &outC->_L1_State8_SM1);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->txt,
        &_25_txt_partial);
      outC->SM1_state_nxt = _26_SM1_state_nxt_partial;
      break;
    case SSM_st_insert4_SM1 :
      tr_1_guard_insert4_SM1 = kcg_true;
      if (tr_1_guard_insert4_SM1) {
        _24_SM1_fired_partial = SSM_TR_insert4_State8_1_insert4_SM1;
      }
      else {
        _24_SM1_fired_partial = _169_SSM_TR_no_trans_SM1;
      }
      _23_SM1_reset_nxt_partial = tr_1_guard_insert4_SM1;
      if (tr_1_guard_insert4_SM1) {
        _22_SM1_state_nxt_partial = SSM_st_State8_SM1;
      }
      else {
        _22_SM1_state_nxt_partial = SSM_st_insert4_SM1;
      }
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->_L1_insert4_SM1,
        (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *) &cMsg_auxi1_DMI_Control_Pkg);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &_21_txt_partial,
        &outC->_L1_insert4_SM1);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->txt,
        &_21_txt_partial);
      outC->SM1_state_nxt = _22_SM1_state_nxt_partial;
      break;
    case SSM_st_State6_SM1 :
      tr_1_guard_State6_SM1 = outC->clicked;
      if (tr_1_guard_State6_SM1) {
        _20_SM1_fired_partial = SSM_TR_State6_insert4_1_State6_SM1;
      }
      else {
        _20_SM1_fired_partial = _169_SSM_TR_no_trans_SM1;
      }
      _19_SM1_reset_nxt_partial = tr_1_guard_State6_SM1;
      if (tr_1_guard_State6_SM1) {
        _18_SM1_state_nxt_partial = SSM_st_insert4_SM1;
      }
      else {
        _18_SM1_state_nxt_partial = SSM_st_State6_SM1;
      }
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->_L1_State6_SM1,
        (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *) &cMsg_leer_DMI_Control_Pkg);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &_17_txt_partial,
        &outC->_L1_State6_SM1);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->txt,
        &_17_txt_partial);
      outC->SM1_state_nxt = _18_SM1_state_nxt_partial;
      break;
    case SSM_st_insert3_SM1 :
      tr_1_guard_insert3_SM1 = kcg_true;
      if (tr_1_guard_insert3_SM1) {
        _16_SM1_fired_partial = SSM_TR_insert3_State6_1_insert3_SM1;
      }
      else {
        _16_SM1_fired_partial = _169_SSM_TR_no_trans_SM1;
      }
      _15_SM1_reset_nxt_partial = tr_1_guard_insert3_SM1;
      if (tr_1_guard_insert3_SM1) {
        _14_SM1_state_nxt_partial = SSM_st_State6_SM1;
      }
      else {
        _14_SM1_state_nxt_partial = SSM_st_insert3_SM1;
      }
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->_L1_insert3_SM1,
        (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cMsg_important3_DMI_Control_Pkg);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &_13_txt_partial,
        &outC->_L1_insert3_SM1);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->txt,
        &_13_txt_partial);
      outC->SM1_state_nxt = _14_SM1_state_nxt_partial;
      break;
    case SSM_st_State4_SM1 :
      tr_1_guard_State4_SM1 = outC->clicked;
      if (tr_1_guard_State4_SM1) {
        _12_SM1_fired_partial = SSM_TR_State4_insert3_1_State4_SM1;
      }
      else {
        _12_SM1_fired_partial = _169_SSM_TR_no_trans_SM1;
      }
      _11_SM1_reset_nxt_partial = tr_1_guard_State4_SM1;
      if (tr_1_guard_State4_SM1) {
        _10_SM1_state_nxt_partial = SSM_st_insert3_SM1;
      }
      else {
        _10_SM1_state_nxt_partial = SSM_st_State4_SM1;
      }
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->_L1_State4_SM1,
        (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *) &cMsg_leer_DMI_Control_Pkg);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &_9_txt_partial,
        &outC->_L1_State4_SM1);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->txt,
        &_9_txt_partial);
      outC->SM1_state_nxt = _10_SM1_state_nxt_partial;
      break;
    case SSM_st_insert2_SM1 :
      tr_1_guard_insert2_SM1 = kcg_true;
      if (tr_1_guard_insert2_SM1) {
        _8_SM1_fired_partial = SSM_TR_insert2_State4_1_insert2_SM1;
      }
      else {
        _8_SM1_fired_partial = _169_SSM_TR_no_trans_SM1;
      }
      _7_SM1_reset_nxt_partial = tr_1_guard_insert2_SM1;
      if (tr_1_guard_insert2_SM1) {
        _6_SM1_state_nxt_partial = SSM_st_State4_SM1;
      }
      else {
        _6_SM1_state_nxt_partial = SSM_st_insert2_SM1;
      }
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->_L1_insert2_SM1,
        (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cMsg_important1_DMI_Control_Pkg);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &_5_txt_partial,
        &outC->_L1_insert2_SM1);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->txt,
        &_5_txt_partial);
      outC->SM1_state_nxt = _6_SM1_state_nxt_partial;
      break;
    case _171_SSM_st_State2_SM1 :
      tr_1_guard_State2_SM1 = outC->clicked;
      if (tr_1_guard_State2_SM1) {
        _4_SM1_fired_partial = SSM_TR_State2_insert2_1_State2_SM1;
      }
      else {
        _4_SM1_fired_partial = _169_SSM_TR_no_trans_SM1;
      }
      _3_SM1_reset_nxt_partial = tr_1_guard_State2_SM1;
      if (tr_1_guard_State2_SM1) {
        _2_SM1_state_nxt_partial = SSM_st_insert2_SM1;
      }
      else {
        _2_SM1_state_nxt_partial = _171_SSM_st_State2_SM1;
      }
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->_L1_State2_SM1,
        (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *) &cMsg_leer_DMI_Control_Pkg);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &_1_txt_partial,
        &outC->_L1_State2_SM1);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->txt,
        &_1_txt_partial);
      outC->SM1_state_nxt = _2_SM1_state_nxt_partial;
      break;
    case SSM_st_insert1_SM1 :
      tr_1_guard_insert1_SM1 = kcg_true;
      if (tr_1_guard_insert1_SM1) {
        SM1_fired_partial = SSM_TR_insert1_State2_1_insert1_SM1;
      }
      else {
        SM1_fired_partial = _169_SSM_TR_no_trans_SM1;
      }
      SM1_reset_nxt_partial = tr_1_guard_insert1_SM1;
      if (tr_1_guard_insert1_SM1) {
        SM1_state_nxt_partial = _171_SSM_st_State2_SM1;
      }
      else {
        SM1_state_nxt_partial = SSM_st_insert1_SM1;
      }
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->_L1_insert1_SM1,
        (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cMsg_important1_DMI_Control_Pkg);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &txt_partial,
        &outC->_L1_insert1_SM1);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->txt,
        &txt_partial);
      outC->SM1_state_nxt = SM1_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_sel = outC->SM1_reset_nxt;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_State9_SM1 :
      outC->SM1_reset_nxt = _63_SM1_reset_nxt_partial;
      outC->SM1_fired = _64_SM1_fired_partial;
      break;
    case SSM_st_insert6_SM1 :
      outC->SM1_reset_nxt = _59_SM1_reset_nxt_partial;
      outC->SM1_fired = _60_SM1_fired_partial;
      break;
    case SSM_st_State7_SM1 :
      outC->SM1_reset_nxt = _55_SM1_reset_nxt_partial;
      outC->SM1_fired = _56_SM1_fired_partial;
      break;
    case SSM_st_insert5_SM1 :
      outC->SM1_reset_nxt = _51_SM1_reset_nxt_partial;
      outC->SM1_fired = _52_SM1_fired_partial;
      break;
    case _170_SSM_st_State3_SM1 :
      outC->SM1_reset_nxt = _47_SM1_reset_nxt_partial;
      outC->SM1_fired = _48_SM1_fired_partial;
      break;
    case SSM_st_State5_SM1 :
      outC->SM1_reset_nxt = _43_SM1_reset_nxt_partial;
      outC->SM1_fired = _44_SM1_fired_partial;
      break;
    case SSM_st_insertAck1_SM1 :
      outC->SM1_reset_nxt = _39_SM1_reset_nxt_partial;
      outC->SM1_fired = _40_SM1_fired_partial;
      break;
    case SSM_st_insertAck2_SM1 :
      outC->SM1_reset_nxt = _35_SM1_reset_nxt_partial;
      outC->SM1_fired = _36_SM1_fired_partial;
      break;
    case SSM_st_State0_SM1 :
      outC->SM1_reset_nxt = _31_SM1_reset_nxt_partial;
      outC->SM1_fired = _32_SM1_fired_partial;
      break;
    case SSM_st_State8_SM1 :
      outC->SM1_reset_nxt = _27_SM1_reset_nxt_partial;
      outC->SM1_fired = _28_SM1_fired_partial;
      break;
    case SSM_st_insert4_SM1 :
      outC->SM1_reset_nxt = _23_SM1_reset_nxt_partial;
      outC->SM1_fired = _24_SM1_fired_partial;
      break;
    case SSM_st_State6_SM1 :
      outC->SM1_reset_nxt = _19_SM1_reset_nxt_partial;
      outC->SM1_fired = _20_SM1_fired_partial;
      break;
    case SSM_st_insert3_SM1 :
      outC->SM1_reset_nxt = _15_SM1_reset_nxt_partial;
      outC->SM1_fired = _16_SM1_fired_partial;
      break;
    case SSM_st_State4_SM1 :
      outC->SM1_reset_nxt = _11_SM1_reset_nxt_partial;
      outC->SM1_fired = _12_SM1_fired_partial;
      break;
    case SSM_st_insert2_SM1 :
      outC->SM1_reset_nxt = _7_SM1_reset_nxt_partial;
      outC->SM1_fired = _8_SM1_fired_partial;
      break;
    case _171_SSM_st_State2_SM1 :
      outC->SM1_reset_nxt = _3_SM1_reset_nxt_partial;
      outC->SM1_fired = _4_SM1_fired_partial;
      break;
    case SSM_st_insert1_SM1 :
      outC->SM1_reset_nxt = SM1_reset_nxt_partial;
      outC->SM1_fired = SM1_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_prv = outC->SM1_reset_act;
  outC->SM1_reset_act = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void TxtMsgSimulator_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_TxtMsgSimulator_DMI_Control_Pkg_Sub_func_TextMessages *outC)
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

  outC->_L1 = kcg_true;
  outC->clicked = kcg_true;
  outC->SM1_fired = _169_SSM_TR_no_trans_SM1;
  outC->SM1_fired_strong = _169_SSM_TR_no_trans_SM1;
  outC->SM1_state_act = SSM_st_insert1_SM1;
  outC->SM1_state_sel = SSM_st_insert1_SM1;
  outC->_L1_State9_SM1.valid = kcg_true;
  outC->_L1_State9_SM1.system_clock = kcg_lit_int32(0);
  outC->_L1_State9_SM1.textMessage_ID = kcg_lit_int32(0);
  outC->_L1_State9_SM1.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L1_State9_SM1.l_text = kcg_lit_int32(0);
  for (idx = 0; idx < 255; idx++) {
    outC->_L1_State9_SM1.x_text[idx] = ' ';
  }
  outC->_L1_State9_SM1.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L1_State9_SM1.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L1_insert6_SM1.valid = kcg_true;
  outC->_L1_insert6_SM1.system_clock = kcg_lit_int32(0);
  outC->_L1_insert6_SM1.textMessage_ID = kcg_lit_int32(0);
  outC->_L1_insert6_SM1.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L1_insert6_SM1.l_text = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 255; idx1++) {
    outC->_L1_insert6_SM1.x_text[idx1] = ' ';
  }
  outC->_L1_insert6_SM1.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L1_insert6_SM1.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L1_State7_SM1.valid = kcg_true;
  outC->_L1_State7_SM1.system_clock = kcg_lit_int32(0);
  outC->_L1_State7_SM1.textMessage_ID = kcg_lit_int32(0);
  outC->_L1_State7_SM1.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L1_State7_SM1.l_text = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 255; idx2++) {
    outC->_L1_State7_SM1.x_text[idx2] = ' ';
  }
  outC->_L1_State7_SM1.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L1_State7_SM1.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L1_insert5_SM1.valid = kcg_true;
  outC->_L1_insert5_SM1.system_clock = kcg_lit_int32(0);
  outC->_L1_insert5_SM1.textMessage_ID = kcg_lit_int32(0);
  outC->_L1_insert5_SM1.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L1_insert5_SM1.l_text = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 255; idx3++) {
    outC->_L1_insert5_SM1.x_text[idx3] = ' ';
  }
  outC->_L1_insert5_SM1.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L1_insert5_SM1.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L1_State3_SM1.valid = kcg_true;
  outC->_L1_State3_SM1.system_clock = kcg_lit_int32(0);
  outC->_L1_State3_SM1.textMessage_ID = kcg_lit_int32(0);
  outC->_L1_State3_SM1.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L1_State3_SM1.l_text = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 255; idx4++) {
    outC->_L1_State3_SM1.x_text[idx4] = ' ';
  }
  outC->_L1_State3_SM1.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L1_State3_SM1.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L1_State5_SM1.valid = kcg_true;
  outC->_L1_State5_SM1.system_clock = kcg_lit_int32(0);
  outC->_L1_State5_SM1.textMessage_ID = kcg_lit_int32(0);
  outC->_L1_State5_SM1.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L1_State5_SM1.l_text = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 255; idx5++) {
    outC->_L1_State5_SM1.x_text[idx5] = ' ';
  }
  outC->_L1_State5_SM1.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L1_State5_SM1.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L1_insertAck1_SM1.valid = kcg_true;
  outC->_L1_insertAck1_SM1.system_clock = kcg_lit_int32(0);
  outC->_L1_insertAck1_SM1.textMessage_ID = kcg_lit_int32(0);
  outC->_L1_insertAck1_SM1.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L1_insertAck1_SM1.l_text = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 255; idx6++) {
    outC->_L1_insertAck1_SM1.x_text[idx6] = ' ';
  }
  outC->_L1_insertAck1_SM1.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L1_insertAck1_SM1.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L1_insertAck2_SM1.valid = kcg_true;
  outC->_L1_insertAck2_SM1.system_clock = kcg_lit_int32(0);
  outC->_L1_insertAck2_SM1.textMessage_ID = kcg_lit_int32(0);
  outC->_L1_insertAck2_SM1.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L1_insertAck2_SM1.l_text = kcg_lit_int32(0);
  for (idx7 = 0; idx7 < 255; idx7++) {
    outC->_L1_insertAck2_SM1.x_text[idx7] = ' ';
  }
  outC->_L1_insertAck2_SM1.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L1_insertAck2_SM1.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L1_State0_SM1.valid = kcg_true;
  outC->_L1_State0_SM1.system_clock = kcg_lit_int32(0);
  outC->_L1_State0_SM1.textMessage_ID = kcg_lit_int32(0);
  outC->_L1_State0_SM1.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L1_State0_SM1.l_text = kcg_lit_int32(0);
  for (idx8 = 0; idx8 < 255; idx8++) {
    outC->_L1_State0_SM1.x_text[idx8] = ' ';
  }
  outC->_L1_State0_SM1.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L1_State0_SM1.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L1_State8_SM1.valid = kcg_true;
  outC->_L1_State8_SM1.system_clock = kcg_lit_int32(0);
  outC->_L1_State8_SM1.textMessage_ID = kcg_lit_int32(0);
  outC->_L1_State8_SM1.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L1_State8_SM1.l_text = kcg_lit_int32(0);
  for (idx9 = 0; idx9 < 255; idx9++) {
    outC->_L1_State8_SM1.x_text[idx9] = ' ';
  }
  outC->_L1_State8_SM1.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L1_State8_SM1.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L1_insert4_SM1.valid = kcg_true;
  outC->_L1_insert4_SM1.system_clock = kcg_lit_int32(0);
  outC->_L1_insert4_SM1.textMessage_ID = kcg_lit_int32(0);
  outC->_L1_insert4_SM1.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L1_insert4_SM1.l_text = kcg_lit_int32(0);
  for (idx10 = 0; idx10 < 255; idx10++) {
    outC->_L1_insert4_SM1.x_text[idx10] = ' ';
  }
  outC->_L1_insert4_SM1.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L1_insert4_SM1.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L1_State6_SM1.valid = kcg_true;
  outC->_L1_State6_SM1.system_clock = kcg_lit_int32(0);
  outC->_L1_State6_SM1.textMessage_ID = kcg_lit_int32(0);
  outC->_L1_State6_SM1.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L1_State6_SM1.l_text = kcg_lit_int32(0);
  for (idx11 = 0; idx11 < 255; idx11++) {
    outC->_L1_State6_SM1.x_text[idx11] = ' ';
  }
  outC->_L1_State6_SM1.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L1_State6_SM1.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L1_insert3_SM1.valid = kcg_true;
  outC->_L1_insert3_SM1.system_clock = kcg_lit_int32(0);
  outC->_L1_insert3_SM1.textMessage_ID = kcg_lit_int32(0);
  outC->_L1_insert3_SM1.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L1_insert3_SM1.l_text = kcg_lit_int32(0);
  for (idx12 = 0; idx12 < 255; idx12++) {
    outC->_L1_insert3_SM1.x_text[idx12] = ' ';
  }
  outC->_L1_insert3_SM1.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L1_insert3_SM1.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L1_State4_SM1.valid = kcg_true;
  outC->_L1_State4_SM1.system_clock = kcg_lit_int32(0);
  outC->_L1_State4_SM1.textMessage_ID = kcg_lit_int32(0);
  outC->_L1_State4_SM1.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L1_State4_SM1.l_text = kcg_lit_int32(0);
  for (idx13 = 0; idx13 < 255; idx13++) {
    outC->_L1_State4_SM1.x_text[idx13] = ' ';
  }
  outC->_L1_State4_SM1.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L1_State4_SM1.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L1_insert2_SM1.valid = kcg_true;
  outC->_L1_insert2_SM1.system_clock = kcg_lit_int32(0);
  outC->_L1_insert2_SM1.textMessage_ID = kcg_lit_int32(0);
  outC->_L1_insert2_SM1.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L1_insert2_SM1.l_text = kcg_lit_int32(0);
  for (idx14 = 0; idx14 < 255; idx14++) {
    outC->_L1_insert2_SM1.x_text[idx14] = ' ';
  }
  outC->_L1_insert2_SM1.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L1_insert2_SM1.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L1_State2_SM1.valid = kcg_true;
  outC->_L1_State2_SM1.system_clock = kcg_lit_int32(0);
  outC->_L1_State2_SM1.textMessage_ID = kcg_lit_int32(0);
  outC->_L1_State2_SM1.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L1_State2_SM1.l_text = kcg_lit_int32(0);
  for (idx15 = 0; idx15 < 255; idx15++) {
    outC->_L1_State2_SM1.x_text[idx15] = ' ';
  }
  outC->_L1_State2_SM1.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L1_State2_SM1.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L1_insert1_SM1.valid = kcg_true;
  outC->_L1_insert1_SM1.system_clock = kcg_lit_int32(0);
  outC->_L1_insert1_SM1.textMessage_ID = kcg_lit_int32(0);
  outC->_L1_insert1_SM1.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L1_insert1_SM1.l_text = kcg_lit_int32(0);
  for (idx16 = 0; idx16 < 255; idx16++) {
    outC->_L1_insert1_SM1.x_text[idx16] = ' ';
  }
  outC->_L1_insert1_SM1.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L1_insert1_SM1.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->txt.valid = kcg_true;
  outC->txt.system_clock = kcg_lit_int32(0);
  outC->txt.textMessage_ID = kcg_lit_int32(0);
  outC->txt.q_text = balise_read_error_DMI_Types_Pkg;
  outC->txt.l_text = kcg_lit_int32(0);
  for (idx17 = 0; idx17 < 255; idx17++) {
    outC->txt.x_text[idx17] = ' ';
  }
  outC->txt.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->txt.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_state_nxt = SSM_st_State0_SM1;
}
#endif /* KCG_USER_DEFINED_INIT */


void TxtMsgSimulator_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_TxtMsgSimulator_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  outC->SM1_reset_act = kcg_false;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_state_nxt = SSM_st_State0_SM1;
}


void kcg_save_SV_TxtMsgSimulator_DMI_Control_Pkg_Sub_func_TextMessages(
  SV_TxtMsgSimulator_DMI_Control_Pkg_Sub_func_TextMessages *SV,
  outC_TxtMsgSimulator_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  SV->Context_SM1_reset_nxt = outC->SM1_reset_nxt;
  SV->Context_SM1_reset_act = outC->SM1_reset_act;
  SV->Context_SM1_state_nxt = outC->SM1_state_nxt;
}

void kcg_load_SV_TxtMsgSimulator_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_TxtMsgSimulator_DMI_Control_Pkg_Sub_func_TextMessages *outC,
  SV_TxtMsgSimulator_DMI_Control_Pkg_Sub_func_TextMessages *SV)
{
  outC->SM1_reset_nxt = SV->Context_SM1_reset_nxt;
  outC->SM1_reset_act = SV->Context_SM1_reset_act;
  outC->SM1_state_nxt = SV->Context_SM1_state_nxt;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TxtMsgSimulator_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

