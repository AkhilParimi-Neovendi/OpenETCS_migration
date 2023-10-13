/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "manageTextMessages_manage_TextMessages_Pkg.h"

/* manage_TextMessages_Pkg::manageTextMessages/ */
void manageTextMessages_manage_TextMessages_Pkg(
  /* inSystemTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* inStatusList/ */
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg *inStatusList,
  /* dmi_FromBG/ */
  kcg_bool dmi_FromBG,
  /* inModeLevel_Ack/ */
  T_AcknoledgementRequest_Level_And_Mode_Types_Pkg *inModeLevel_Ack,
  /* announcedLevelTransition/ */
  T_AnnouncedLevel_Level_And_Mode_Types_Pkg *announcedLevelTransition,
  outC_manageTextMessages_manage_TextMessages_Pkg *outC)
{
  static kcg_bool op_call;
  /* textMessageToSend/ */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg textMessageToSend_partial;
  /* msgContext/ */
  static DMI_context_TXT_MSG_T_DMI_Types_Pkg msgContext_partial;
  /* textMessageToSend/ */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _1_textMessageToSend_partial;
  /* msgContext/ */
  static DMI_context_TXT_MSG_T_DMI_Types_Pkg _2_msgContext_partial;
  /* textMessageToSend/ */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _3_textMessageToSend_partial;
  /* msgContext/ */
  static DMI_context_TXT_MSG_T_DMI_Types_Pkg _4_msgContext_partial;
  /* textMessageToSend/ */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _5_textMessageToSend_partial;
  /* msgContext/ */
  static DMI_context_TXT_MSG_T_DMI_Types_Pkg _6_msgContext_partial;
  /* msgContext/ */
  static DMI_context_TXT_MSG_T_DMI_Types_Pkg _7_msgContext_partial;
  /* textMessageToSend/ */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _8_textMessageToSend_partial;
  /* msgContext/ */
  static DMI_context_TXT_MSG_T_DMI_Types_Pkg _9_msgContext_partial;
  /* textMessageToSend/ */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _10_textMessageToSend_partial;

  kcg_copy_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg(
    &outC->_L38,
    inModeLevel_Ack);
  outC->_L6 = outC->_L38.valid;
  outC->every = outC->_L6;
  kcg_copy_T_AnnouncedLevel_Level_And_Mode_Types_Pkg(
    &outC->_L42,
    announcedLevelTransition);
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &outC->_L43,
    &outC->_L42.LevelTransition);
  kcg_copy_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg(
    &outC->_L44,
    &outC->_L43.transition);
  outC->_L45 = outC->_L44.level;
  outC->announcedLevel = outC->_L45;
  outC->_L40 = outC->announcedLevel;
  kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(&outC->_L34, inStatusList);
  if (outC->every) {
    /* _L29=(manage_TextMessages_Pkg::checkIfNeeded#1)/ */
    checkIfNeeded_manage_TextMessages_Pkg(
      &outC->_L38,
      outC->_L40,
      &outC->_L34,
      &outC->Context_checkIfNeeded_1);
    op_call = outC->Context_checkIfNeeded_1.sendingNeeded;
  }
  outC->_L47 = outC->announcedLevel;
  kcg_copy_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg(
    &outC->_L46,
    inModeLevel_Ack);
  if (outC->every) {
    outC->_L29 = op_call;
  }
  else {
    outC->_L29 = kcg_false;
  }
  outC->_L7 = outC->_L38.LevelNeedsAck;
  outC->_L8 = outC->_L7 & outC->_L29;
  outC->levelNeedsAck = outC->_L8;
  outC->_L37 = outC->levelNeedsAck;
  outC->_L28 = Q_TEXTREPORT_No_driver_acknowledgement_report_required;
  outC->q_textReport = outC->_L28;
  outC->_L26 = outC->q_textReport;
  outC->_L24 = outC->_L46.whichMode;
  outC->_L13 = !outC->_L37;
  outC->_L9 = outC->_L29 & outC->_L13;
  outC->modeChange = outC->_L9;
  outC->IfBlock1_clock = outC->modeChange;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L16_then_IfBlock1 = con_modeChange_DMI_Types_Pkg;
    msgContext_partial = outC->_L16_then_IfBlock1;
    outC->msgContext = msgContext_partial;
  }
  else {
    outC->else_clock_IfBlock1 = outC->levelNeedsAck;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L10_then_else_IfBlock1 = con_levelMgmt_DMI_Types_Pkg;
      _9_msgContext_partial = outC->_L10_then_else_IfBlock1;
      _2_msgContext_partial = _9_msgContext_partial;
    }
    else {
      outC->else_clock_else_IfBlock1 = dmi_FromBG;
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L2_then_else_else_IfBlock1 = con_trackRequest_DMI_Types_Pkg;
        _4_msgContext_partial = outC->_L2_then_else_else_IfBlock1;
        _7_msgContext_partial = _4_msgContext_partial;
      }
      else {
        outC->_L3_else_else_else_IfBlock1 = con_undefined_DMI_Types_Pkg;
        _6_msgContext_partial = outC->_L3_else_else_else_IfBlock1;
        _7_msgContext_partial = _6_msgContext_partial;
      }
      _2_msgContext_partial = _7_msgContext_partial;
    }
    outC->msgContext = _2_msgContext_partial;
  }
  outC->_L22 = outC->msgContext;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    kcg_copy_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg(
      &outC->_L18_then_IfBlock1,
      inModeLevel_Ack);
    kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->_L17_then_IfBlock1,
      (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
        &cText_Mode_TR_manage_TextMessages_Pkg);
    kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->_L14_then_IfBlock1,
      (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
        &cDefaultText_manage_DMI_Output_Pkg);
    kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->_L13_then_IfBlock1,
      (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
        &cText_Mode_UN_manage_TextMessages_Pkg);
    kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->_L12_then_IfBlock1,
      (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
        &cText_Mode_SN_manage_TextMessages_Pkg);
    kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->_L11_then_IfBlock1,
      (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
        &cText_Mode_LS_manage_TextMessages_Pkg);
    kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->_L10_then_IfBlock1,
      (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
        &cText_Mode_SH_manage_TextMessages_Pkg);
    kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->_L9_then_IfBlock1,
      (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
        &cText_Mode_OS_manage_TextMessages_Pkg);
    kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->_L7_then_IfBlock1,
      (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
        &cText_Mode_SR_manage_TextMessages_Pkg);
    outC->_L6_then_IfBlock1 = outC->_L18_then_IfBlock1.whichMode;
    /* IfBlock1:then:_L1= */
    switch (outC->_L6_then_IfBlock1) {
      case M_MODE_Staff_Responsible :
        kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
          &outC->_L1_then_IfBlock1,
          &outC->_L7_then_IfBlock1);
        break;
      case M_MODE_On_Sight :
        kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
          &outC->_L1_then_IfBlock1,
          &outC->_L9_then_IfBlock1);
        break;
      case M_MODE_Shunting :
        kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
          &outC->_L1_then_IfBlock1,
          &outC->_L10_then_IfBlock1);
        break;
      case M_MODE_Limited_Supervision :
        kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
          &outC->_L1_then_IfBlock1,
          &outC->_L11_then_IfBlock1);
        break;
      case M_MODE_National_System :
        kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
          &outC->_L1_then_IfBlock1,
          &outC->_L12_then_IfBlock1);
        break;
      case M_MODE_Unfitted :
        kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
          &outC->_L1_then_IfBlock1,
          &outC->_L13_then_IfBlock1);
        break;
      case M_MODE_Trip :
        kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
          &outC->_L1_then_IfBlock1,
          &outC->_L17_then_IfBlock1);
        break;
      default :
        kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
          &outC->_L1_then_IfBlock1,
          &outC->_L14_then_IfBlock1);
        break;
    }
    kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
      &textMessageToSend_partial,
      &outC->_L1_then_IfBlock1);
    kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->textMessageToSend,
      &textMessageToSend_partial);
  }
  else {
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      kcg_copy_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg(
        &outC->_L18_then_else_IfBlock1,
        inModeLevel_Ack);
      outC->_L17_then_else_IfBlock1 = outC->announcedLevel;
      outC->_L16_then_else_IfBlock1 = Q_TEXTCONFIRM_No_confirmation_required;
      outC->_L15_then_else_IfBlock1 = Q_TEXTCONFIRM_Confirmation_required;
      outC->_L13_then_else_IfBlock1 = outC->_L18_then_else_IfBlock1.LevelNeedsAck;
      /* IfBlock1:else:then:_L14= */
      if (outC->_L13_then_else_IfBlock1) {
        outC->_L14_then_else_IfBlock1 = outC->_L15_then_else_IfBlock1;
      }
      else {
        outC->_L14_then_else_IfBlock1 = outC->_L16_then_else_IfBlock1;
      }
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->_L5_then_else_IfBlock1,
        (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cText_Level_0_manage_TextMessages_Pkg);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->_L6_then_else_IfBlock1,
        (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cText_Level_1_manage_TextMessages_Pkg);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->_L7_then_else_IfBlock1,
        (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cText_Level_2_manage_TextMessages_Pkg);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->_L8_then_else_IfBlock1,
        (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cText_Level_3_manage_TextMessages_Pkg);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->_L9_then_else_IfBlock1,
        (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cText_Level_NTC_manage_TextMessages_Pkg);
      /* IfBlock1:else:then:_L4= */
      switch (outC->_L17_then_else_IfBlock1) {
        case M_LEVEL_Level_0 :
          kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
            &outC->_L4_then_else_IfBlock1,
            &outC->_L5_then_else_IfBlock1);
          break;
        case M_LEVEL_Level_1 :
          kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
            &outC->_L4_then_else_IfBlock1,
            &outC->_L6_then_else_IfBlock1);
          break;
        case M_LEVEL_Level_2 :
          kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
            &outC->_L4_then_else_IfBlock1,
            &outC->_L7_then_else_IfBlock1);
          break;
        case M_LEVEL_Level_3 :
          kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
            &outC->_L4_then_else_IfBlock1,
            &outC->_L8_then_else_IfBlock1);
          break;
        case M_LEVEL_Level_NTC_specified_by_NID_NTC :
          kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
            &outC->_L4_then_else_IfBlock1,
            &outC->_L9_then_else_IfBlock1);
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->_L11_then_else_IfBlock1,
        &outC->_L4_then_else_IfBlock1);
      if (kcg_true) {
        outC->_L11_then_else_IfBlock1.q_textConfirm = outC->_L14_then_else_IfBlock1;
      }
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &_10_textMessageToSend_partial,
        &outC->_L11_then_else_IfBlock1);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &_1_textMessageToSend_partial,
        &_10_textMessageToSend_partial);
    }
    else {
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
          &outC->_L1_then_else_else_IfBlock1,
          (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
            &cTextSpecial_BG_manage_DMI_Output_Pkg);
        kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
          &_3_textMessageToSend_partial,
          &outC->_L1_then_else_else_IfBlock1);
        kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
          &_8_textMessageToSend_partial,
          &_3_textMessageToSend_partial);
      }
      else {
        kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
          &outC->_L2_else_else_else_IfBlock1,
          (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
            &cDefaultText_manage_DMI_Output_Pkg);
        kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
          &_5_textMessageToSend_partial,
          &outC->_L2_else_else_else_IfBlock1);
        kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
          &_8_textMessageToSend_partial,
          &_5_textMessageToSend_partial);
      }
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &_1_textMessageToSend_partial,
        &_8_textMessageToSend_partial);
    }
    kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->textMessageToSend,
      &_1_textMessageToSend_partial);
  }
  outC->_L20 = kcg_lit_int64(111);
  outC->_L17 = inSystemTime;
  kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(&outC->_L14, inStatusList);
  kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L18,
    &outC->textMessageToSend);
  /* _L15=(manage_TextMessages_Pkg::sendTextMessage#2)/ */
  sendTextMessage_manage_TextMessages_Pkg(
    outC->_L17,
    &outC->_L14,
    &outC->_L18,
    outC->_L26,
    outC->_L20,
    outC->_L22,
    outC->_L24,
    outC->_L47,
    &outC->Context_sendTextMessage_2);
  kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
    &outC->_L15,
    &outC->Context_sendTextMessage_2.outStatusList);
  kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L16,
    &outC->Context_sendTextMessage_2.dmi_textMessage);
  kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->dmi_textMessage,
    &outC->_L16);
  kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
    &outC->outStatusList,
    &outC->_L15);
}

#ifndef KCG_USER_DEFINED_INIT
void manageTextMessages_init_manage_TextMessages_Pkg(
  outC_manageTextMessages_manage_TextMessages_Pkg *outC)
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

  outC->_L47 = M_LEVEL_Level_0;
  outC->_L46.valid = kcg_true;
  outC->_L46.whichMode = M_MODE_Full_Supervision;
  outC->_L46.SH_Req_RefusedByRBC = kcg_true;
  outC->_L46.LevelNeedsAck = kcg_true;
  outC->_L45 = M_LEVEL_Level_0;
  outC->_L44.level = M_LEVEL_Level_0;
  outC->_L44.position = kcg_lit_int64(0);
  outC->_L44.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L44.immediateAck = kcg_true;
  outC->_L44.AckLength = kcg_lit_int64(0);
  outC->_L43.is_set = kcg_true;
  outC->_L43.transition.level = M_LEVEL_Level_0;
  outC->_L43.transition.position = kcg_lit_int64(0);
  outC->_L43.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L43.transition.immediateAck = kcg_true;
  outC->_L43.transition.AckLength = kcg_lit_int64(0);
  outC->_L43.LRBG = kcg_lit_int64(0);
  outC->_L43.referenceLocation = kcg_lit_int64(0);
  outC->_L42.LevelTransition.is_set = kcg_true;
  outC->_L42.LevelTransition.transition.level = M_LEVEL_Level_0;
  outC->_L42.LevelTransition.transition.position = kcg_lit_int64(0);
  outC->_L42.LevelTransition.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L42.LevelTransition.transition.immediateAck = kcg_true;
  outC->_L42.LevelTransition.transition.AckLength = kcg_lit_int64(0);
  outC->_L42.LevelTransition.LRBG = kcg_lit_int64(0);
  outC->_L42.LevelTransition.referenceLocation = kcg_lit_int64(0);
  outC->_L42.IsAvailableForUse = kcg_true;
  outC->_L40 = M_LEVEL_Level_0;
  outC->_L38.valid = kcg_true;
  outC->_L38.whichMode = M_MODE_Full_Supervision;
  outC->_L38.SH_Req_RefusedByRBC = kcg_true;
  outC->_L38.LevelNeedsAck = kcg_true;
  outC->_L37 = kcg_true;
  for (idx = 0; idx < 31; idx++) {
    outC->_L34[idx].valid = kcg_true;
    outC->_L34[idx].dmi_textMessageID = kcg_lit_int64(0);
    outC->_L34[idx].timeStamp = kcg_lit_int64(0);
    outC->_L34[idx].textReport =
      Q_TEXTREPORT_No_driver_acknowledgement_report_required;
    outC->_L34[idx].context = con_undefined_DMI_Types_Pkg;
    outC->_L34[idx].nid_textmessage = kcg_lit_int64(0);
    outC->_L34[idx].whichLevel = M_LEVEL_Level_0;
    outC->_L34[idx].whichMode = M_MODE_Full_Supervision;
  }
  outC->_L29 = kcg_true;
  outC->_L28 = Q_TEXTREPORT_No_driver_acknowledgement_report_required;
  outC->_L26 = Q_TEXTREPORT_No_driver_acknowledgement_report_required;
  outC->_L24 = M_MODE_Full_Supervision;
  outC->_L22 = con_undefined_DMI_Types_Pkg;
  outC->_L20 = kcg_lit_int64(0);
  outC->_L18.valid = kcg_true;
  outC->_L18.system_clock = kcg_lit_int64(0);
  outC->_L18.textMessage_ID = kcg_lit_int64(0);
  outC->_L18.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L18.l_text = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 255; idx1++) {
    outC->_L18.x_text[idx1] = ' ';
  }
  outC->_L18.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L18.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  for (idx2 = 0; idx2 < 31; idx2++) {
    outC->_L14[idx2].valid = kcg_true;
    outC->_L14[idx2].dmi_textMessageID = kcg_lit_int64(0);
    outC->_L14[idx2].timeStamp = kcg_lit_int64(0);
    outC->_L14[idx2].textReport =
      Q_TEXTREPORT_No_driver_acknowledgement_report_required;
    outC->_L14[idx2].context = con_undefined_DMI_Types_Pkg;
    outC->_L14[idx2].nid_textmessage = kcg_lit_int64(0);
    outC->_L14[idx2].whichLevel = M_LEVEL_Level_0;
    outC->_L14[idx2].whichMode = M_MODE_Full_Supervision;
  }
  outC->_L16.valid = kcg_true;
  outC->_L16.system_clock = kcg_lit_int64(0);
  outC->_L16.textMessage_ID = kcg_lit_int64(0);
  outC->_L16.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L16.l_text = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 255; idx3++) {
    outC->_L16.x_text[idx3] = ' ';
  }
  outC->_L16.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L16.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  for (idx4 = 0; idx4 < 31; idx4++) {
    outC->_L15[idx4].valid = kcg_true;
    outC->_L15[idx4].dmi_textMessageID = kcg_lit_int64(0);
    outC->_L15[idx4].timeStamp = kcg_lit_int64(0);
    outC->_L15[idx4].textReport =
      Q_TEXTREPORT_No_driver_acknowledgement_report_required;
    outC->_L15[idx4].context = con_undefined_DMI_Types_Pkg;
    outC->_L15[idx4].nid_textmessage = kcg_lit_int64(0);
    outC->_L15[idx4].whichLevel = M_LEVEL_Level_0;
    outC->_L15[idx4].whichMode = M_MODE_Full_Supervision;
  }
  outC->_L17 = kcg_lit_int64(0);
  outC->_L13 = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L6 = kcg_true;
  outC->announcedLevel = M_LEVEL_Level_0;
  outC->q_textReport = Q_TEXTREPORT_No_driver_acknowledgement_report_required;
  outC->msgContext = con_undefined_DMI_Types_Pkg;
  outC->modeChange = kcg_true;
  outC->levelNeedsAck = kcg_true;
  outC->textMessageToSend.valid = kcg_true;
  outC->textMessageToSend.system_clock = kcg_lit_int64(0);
  outC->textMessageToSend.textMessage_ID = kcg_lit_int64(0);
  outC->textMessageToSend.q_text = balise_read_error_DMI_Types_Pkg;
  outC->textMessageToSend.l_text = kcg_lit_int64(0);
  for (idx5 = 0; idx5 < 255; idx5++) {
    outC->textMessageToSend.x_text[idx5] = ' ';
  }
  outC->textMessageToSend.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->textMessageToSend.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->IfBlock1_clock = kcg_true;
  outC->every = kcg_true;
  outC->_L18_then_else_IfBlock1.valid = kcg_true;
  outC->_L18_then_else_IfBlock1.whichMode = M_MODE_Full_Supervision;
  outC->_L18_then_else_IfBlock1.SH_Req_RefusedByRBC = kcg_true;
  outC->_L18_then_else_IfBlock1.LevelNeedsAck = kcg_true;
  outC->_L17_then_else_IfBlock1 = M_LEVEL_Level_0;
  outC->_L16_then_else_IfBlock1 = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L15_then_else_IfBlock1 = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L14_then_else_IfBlock1 = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L13_then_else_IfBlock1 = kcg_true;
  outC->_L11_then_else_IfBlock1.valid = kcg_true;
  outC->_L11_then_else_IfBlock1.system_clock = kcg_lit_int64(0);
  outC->_L11_then_else_IfBlock1.textMessage_ID = kcg_lit_int64(0);
  outC->_L11_then_else_IfBlock1.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L11_then_else_IfBlock1.l_text = kcg_lit_int64(0);
  for (idx6 = 0; idx6 < 255; idx6++) {
    outC->_L11_then_else_IfBlock1.x_text[idx6] = ' ';
  }
  outC->_L11_then_else_IfBlock1.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L11_then_else_IfBlock1.q_textConfirm =
    Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L10_then_else_IfBlock1 = con_undefined_DMI_Types_Pkg;
  outC->_L9_then_else_IfBlock1.valid = kcg_true;
  outC->_L9_then_else_IfBlock1.system_clock = kcg_lit_int64(0);
  outC->_L9_then_else_IfBlock1.textMessage_ID = kcg_lit_int64(0);
  outC->_L9_then_else_IfBlock1.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L9_then_else_IfBlock1.l_text = kcg_lit_int64(0);
  for (idx7 = 0; idx7 < 255; idx7++) {
    outC->_L9_then_else_IfBlock1.x_text[idx7] = ' ';
  }
  outC->_L9_then_else_IfBlock1.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L9_then_else_IfBlock1.q_textConfirm =
    Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L8_then_else_IfBlock1.valid = kcg_true;
  outC->_L8_then_else_IfBlock1.system_clock = kcg_lit_int64(0);
  outC->_L8_then_else_IfBlock1.textMessage_ID = kcg_lit_int64(0);
  outC->_L8_then_else_IfBlock1.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L8_then_else_IfBlock1.l_text = kcg_lit_int64(0);
  for (idx8 = 0; idx8 < 255; idx8++) {
    outC->_L8_then_else_IfBlock1.x_text[idx8] = ' ';
  }
  outC->_L8_then_else_IfBlock1.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L8_then_else_IfBlock1.q_textConfirm =
    Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L7_then_else_IfBlock1.valid = kcg_true;
  outC->_L7_then_else_IfBlock1.system_clock = kcg_lit_int64(0);
  outC->_L7_then_else_IfBlock1.textMessage_ID = kcg_lit_int64(0);
  outC->_L7_then_else_IfBlock1.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L7_then_else_IfBlock1.l_text = kcg_lit_int64(0);
  for (idx9 = 0; idx9 < 255; idx9++) {
    outC->_L7_then_else_IfBlock1.x_text[idx9] = ' ';
  }
  outC->_L7_then_else_IfBlock1.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L7_then_else_IfBlock1.q_textConfirm =
    Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L6_then_else_IfBlock1.valid = kcg_true;
  outC->_L6_then_else_IfBlock1.system_clock = kcg_lit_int64(0);
  outC->_L6_then_else_IfBlock1.textMessage_ID = kcg_lit_int64(0);
  outC->_L6_then_else_IfBlock1.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L6_then_else_IfBlock1.l_text = kcg_lit_int64(0);
  for (idx10 = 0; idx10 < 255; idx10++) {
    outC->_L6_then_else_IfBlock1.x_text[idx10] = ' ';
  }
  outC->_L6_then_else_IfBlock1.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L6_then_else_IfBlock1.q_textConfirm =
    Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L5_then_else_IfBlock1.valid = kcg_true;
  outC->_L5_then_else_IfBlock1.system_clock = kcg_lit_int64(0);
  outC->_L5_then_else_IfBlock1.textMessage_ID = kcg_lit_int64(0);
  outC->_L5_then_else_IfBlock1.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L5_then_else_IfBlock1.l_text = kcg_lit_int64(0);
  for (idx11 = 0; idx11 < 255; idx11++) {
    outC->_L5_then_else_IfBlock1.x_text[idx11] = ' ';
  }
  outC->_L5_then_else_IfBlock1.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L5_then_else_IfBlock1.q_textConfirm =
    Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L4_then_else_IfBlock1.valid = kcg_true;
  outC->_L4_then_else_IfBlock1.system_clock = kcg_lit_int64(0);
  outC->_L4_then_else_IfBlock1.textMessage_ID = kcg_lit_int64(0);
  outC->_L4_then_else_IfBlock1.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L4_then_else_IfBlock1.l_text = kcg_lit_int64(0);
  for (idx12 = 0; idx12 < 255; idx12++) {
    outC->_L4_then_else_IfBlock1.x_text[idx12] = ' ';
  }
  outC->_L4_then_else_IfBlock1.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L4_then_else_IfBlock1.q_textConfirm =
    Q_TEXTCONFIRM_No_confirmation_required;
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L2_else_else_else_IfBlock1.valid = kcg_true;
  outC->_L2_else_else_else_IfBlock1.system_clock = kcg_lit_int64(0);
  outC->_L2_else_else_else_IfBlock1.textMessage_ID = kcg_lit_int64(0);
  outC->_L2_else_else_else_IfBlock1.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L2_else_else_else_IfBlock1.l_text = kcg_lit_int64(0);
  for (idx13 = 0; idx13 < 255; idx13++) {
    outC->_L2_else_else_else_IfBlock1.x_text[idx13] = ' ';
  }
  outC->_L2_else_else_else_IfBlock1.q_textClass =
    Q_TEXTCLASS_Auxiliary_Information;
  outC->_L2_else_else_else_IfBlock1.q_textConfirm =
    Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L3_else_else_else_IfBlock1 = con_undefined_DMI_Types_Pkg;
  outC->_L1_then_else_else_IfBlock1.valid = kcg_true;
  outC->_L1_then_else_else_IfBlock1.system_clock = kcg_lit_int64(0);
  outC->_L1_then_else_else_IfBlock1.textMessage_ID = kcg_lit_int64(0);
  outC->_L1_then_else_else_IfBlock1.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L1_then_else_else_IfBlock1.l_text = kcg_lit_int64(0);
  for (idx14 = 0; idx14 < 255; idx14++) {
    outC->_L1_then_else_else_IfBlock1.x_text[idx14] = ' ';
  }
  outC->_L1_then_else_else_IfBlock1.q_textClass =
    Q_TEXTCLASS_Auxiliary_Information;
  outC->_L1_then_else_else_IfBlock1.q_textConfirm =
    Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L2_then_else_else_IfBlock1 = con_undefined_DMI_Types_Pkg;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L1_then_IfBlock1.valid = kcg_true;
  outC->_L1_then_IfBlock1.system_clock = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.textMessage_ID = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L1_then_IfBlock1.l_text = kcg_lit_int64(0);
  for (idx15 = 0; idx15 < 255; idx15++) {
    outC->_L1_then_IfBlock1.x_text[idx15] = ' ';
  }
  outC->_L1_then_IfBlock1.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L1_then_IfBlock1.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L6_then_IfBlock1 = M_MODE_Full_Supervision;
  outC->_L7_then_IfBlock1.valid = kcg_true;
  outC->_L7_then_IfBlock1.system_clock = kcg_lit_int64(0);
  outC->_L7_then_IfBlock1.textMessage_ID = kcg_lit_int64(0);
  outC->_L7_then_IfBlock1.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L7_then_IfBlock1.l_text = kcg_lit_int64(0);
  for (idx16 = 0; idx16 < 255; idx16++) {
    outC->_L7_then_IfBlock1.x_text[idx16] = ' ';
  }
  outC->_L7_then_IfBlock1.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L7_then_IfBlock1.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L9_then_IfBlock1.valid = kcg_true;
  outC->_L9_then_IfBlock1.system_clock = kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.textMessage_ID = kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L9_then_IfBlock1.l_text = kcg_lit_int64(0);
  for (idx17 = 0; idx17 < 255; idx17++) {
    outC->_L9_then_IfBlock1.x_text[idx17] = ' ';
  }
  outC->_L9_then_IfBlock1.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L9_then_IfBlock1.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L10_then_IfBlock1.valid = kcg_true;
  outC->_L10_then_IfBlock1.system_clock = kcg_lit_int64(0);
  outC->_L10_then_IfBlock1.textMessage_ID = kcg_lit_int64(0);
  outC->_L10_then_IfBlock1.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L10_then_IfBlock1.l_text = kcg_lit_int64(0);
  for (idx18 = 0; idx18 < 255; idx18++) {
    outC->_L10_then_IfBlock1.x_text[idx18] = ' ';
  }
  outC->_L10_then_IfBlock1.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L10_then_IfBlock1.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L11_then_IfBlock1.valid = kcg_true;
  outC->_L11_then_IfBlock1.system_clock = kcg_lit_int64(0);
  outC->_L11_then_IfBlock1.textMessage_ID = kcg_lit_int64(0);
  outC->_L11_then_IfBlock1.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L11_then_IfBlock1.l_text = kcg_lit_int64(0);
  for (idx19 = 0; idx19 < 255; idx19++) {
    outC->_L11_then_IfBlock1.x_text[idx19] = ' ';
  }
  outC->_L11_then_IfBlock1.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L11_then_IfBlock1.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L12_then_IfBlock1.valid = kcg_true;
  outC->_L12_then_IfBlock1.system_clock = kcg_lit_int64(0);
  outC->_L12_then_IfBlock1.textMessage_ID = kcg_lit_int64(0);
  outC->_L12_then_IfBlock1.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L12_then_IfBlock1.l_text = kcg_lit_int64(0);
  for (idx20 = 0; idx20 < 255; idx20++) {
    outC->_L12_then_IfBlock1.x_text[idx20] = ' ';
  }
  outC->_L12_then_IfBlock1.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L12_then_IfBlock1.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L13_then_IfBlock1.valid = kcg_true;
  outC->_L13_then_IfBlock1.system_clock = kcg_lit_int64(0);
  outC->_L13_then_IfBlock1.textMessage_ID = kcg_lit_int64(0);
  outC->_L13_then_IfBlock1.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L13_then_IfBlock1.l_text = kcg_lit_int64(0);
  for (idx21 = 0; idx21 < 255; idx21++) {
    outC->_L13_then_IfBlock1.x_text[idx21] = ' ';
  }
  outC->_L13_then_IfBlock1.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L13_then_IfBlock1.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L14_then_IfBlock1.valid = kcg_true;
  outC->_L14_then_IfBlock1.system_clock = kcg_lit_int64(0);
  outC->_L14_then_IfBlock1.textMessage_ID = kcg_lit_int64(0);
  outC->_L14_then_IfBlock1.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L14_then_IfBlock1.l_text = kcg_lit_int64(0);
  for (idx22 = 0; idx22 < 255; idx22++) {
    outC->_L14_then_IfBlock1.x_text[idx22] = ' ';
  }
  outC->_L14_then_IfBlock1.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L14_then_IfBlock1.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L16_then_IfBlock1 = con_undefined_DMI_Types_Pkg;
  outC->_L17_then_IfBlock1.valid = kcg_true;
  outC->_L17_then_IfBlock1.system_clock = kcg_lit_int64(0);
  outC->_L17_then_IfBlock1.textMessage_ID = kcg_lit_int64(0);
  outC->_L17_then_IfBlock1.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L17_then_IfBlock1.l_text = kcg_lit_int64(0);
  for (idx23 = 0; idx23 < 255; idx23++) {
    outC->_L17_then_IfBlock1.x_text[idx23] = ' ';
  }
  outC->_L17_then_IfBlock1.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L17_then_IfBlock1.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L18_then_IfBlock1.valid = kcg_true;
  outC->_L18_then_IfBlock1.whichMode = M_MODE_Full_Supervision;
  outC->_L18_then_IfBlock1.SH_Req_RefusedByRBC = kcg_true;
  outC->_L18_then_IfBlock1.LevelNeedsAck = kcg_true;
  for (idx24 = 0; idx24 < 31; idx24++) {
    outC->outStatusList[idx24].valid = kcg_true;
    outC->outStatusList[idx24].dmi_textMessageID = kcg_lit_int64(0);
    outC->outStatusList[idx24].timeStamp = kcg_lit_int64(0);
    outC->outStatusList[idx24].textReport =
      Q_TEXTREPORT_No_driver_acknowledgement_report_required;
    outC->outStatusList[idx24].context = con_undefined_DMI_Types_Pkg;
    outC->outStatusList[idx24].nid_textmessage = kcg_lit_int64(0);
    outC->outStatusList[idx24].whichLevel = M_LEVEL_Level_0;
    outC->outStatusList[idx24].whichMode = M_MODE_Full_Supervision;
  }
  outC->dmi_textMessage.valid = kcg_true;
  outC->dmi_textMessage.system_clock = kcg_lit_int64(0);
  outC->dmi_textMessage.textMessage_ID = kcg_lit_int64(0);
  outC->dmi_textMessage.q_text = balise_read_error_DMI_Types_Pkg;
  outC->dmi_textMessage.l_text = kcg_lit_int64(0);
  for (idx25 = 0; idx25 < 255; idx25++) {
    outC->dmi_textMessage.x_text[idx25] = ' ';
  }
  outC->dmi_textMessage.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->dmi_textMessage.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  /* _L15=(manage_TextMessages_Pkg::sendTextMessage#2)/ */
  sendTextMessage_init_manage_TextMessages_Pkg(
    &outC->Context_sendTextMessage_2);
  /* _L29=(manage_TextMessages_Pkg::checkIfNeeded#1)/ */
  checkIfNeeded_init_manage_TextMessages_Pkg(&outC->Context_checkIfNeeded_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void manageTextMessages_reset_manage_TextMessages_Pkg(
  outC_manageTextMessages_manage_TextMessages_Pkg *outC)
{
  /* _L15=(manage_TextMessages_Pkg::sendTextMessage#2)/ */
  sendTextMessage_reset_manage_TextMessages_Pkg(
    &outC->Context_sendTextMessage_2);
  /* _L29=(manage_TextMessages_Pkg::checkIfNeeded#1)/ */
  checkIfNeeded_reset_manage_TextMessages_Pkg(&outC->Context_checkIfNeeded_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** manageTextMessages_manage_TextMessages_Pkg.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

