/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "sendTextMessage_manage_TextMessages_Pkg.h"

/* manage_TextMessages_Pkg::sendTextMessage/ */
void sendTextMessage_manage_TextMessages_Pkg(
  /* inSystemTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* inStatusList/ */
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg *inStatusList,
  /* intextMessage/ */
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *intextMessage,
  /* inTextReport/ */
  Q_TEXTREPORT inTextReport,
  /* inNID_TextMessage/ */
  NID_TEXTMESSAGE inNID_TextMessage,
  /* inContext/ */
  DMI_context_TXT_MSG_T_DMI_Types_Pkg inContext,
  /* inWhichMode/ */
  M_MODE inWhichMode,
  /* inWhichLevel/ */
  M_LEVEL inWhichLevel,
  outC_sendTextMessage_manage_TextMessages_Pkg *outC)
{
  /* outStatusList/ */
  static DMI_TXT_MSGList_status_T_DMI_Types_Pkg outStatusList_partial;
  /* dmi_textMessage/ */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg dmi_textMessage_partial;
  /* myElement/ */
  static DMI_TXT_MSG_status_T_DMI_Types_Pkg myElement_partial;
  /* outStatusList/ */
  static DMI_TXT_MSGList_status_T_DMI_Types_Pkg _1_outStatusList_partial;
  /* dmi_textMessage/ */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _2_dmi_textMessage_partial;
  /* myElement/ */
  static DMI_TXT_MSG_status_T_DMI_Types_Pkg _3_myElement_partial;
  /* dmi_textMessage/ */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _4_dmi_textMessage_partial;
  /* outStatusList/ */
  static DMI_TXT_MSGList_status_T_DMI_Types_Pkg _5_outStatusList_partial;
  /* dmi_textMessage/ */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _6_dmi_textMessage_partial;
  /* outStatusList/ */
  static DMI_TXT_MSGList_status_T_DMI_Types_Pkg _7_outStatusList_partial;

  kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L2,
    intextMessage);
  outC->_L6 = outC->_L2.valid;
  outC->isValid = outC->_L6;
  outC->_L3 = outC->_L2.q_textConfirm;
  outC->_L4 = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L5 = outC->_L4 != outC->_L3;
  outC->_L7 = outC->_L5 & outC->_L6;
  outC->needsStore = outC->_L7;
  outC->IfBlock1_clock = outC->needsStore;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L23_then_IfBlock1 = inContext;
    outC->_L22_then_IfBlock1 = inWhichLevel;
    outC->_L21_then_IfBlock1 = inWhichMode;
    kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->_L13_then_IfBlock1,
      intextMessage);
    kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
      &dmi_textMessage_partial,
      &outC->_L13_then_IfBlock1);
    kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
      &outC->_L12_then_IfBlock1,
      inStatusList);
    outC->_L3_then_IfBlock1 = kcg_true;
    kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->_L4_then_IfBlock1,
      intextMessage);
    outC->_L5_then_IfBlock1 = outC->_L4_then_IfBlock1.textMessage_ID;
    outC->_L7_then_IfBlock1 = inSystemTime;
    outC->_L8_then_IfBlock1 = inTextReport;
    outC->_L9_then_IfBlock1 = inNID_TextMessage;
    outC->_L2_then_IfBlock1.valid = outC->_L3_then_IfBlock1;
    outC->_L2_then_IfBlock1.dmi_textMessageID = outC->_L5_then_IfBlock1;
    outC->_L2_then_IfBlock1.timeStamp = outC->_L7_then_IfBlock1;
    outC->_L2_then_IfBlock1.textReport = outC->_L8_then_IfBlock1;
    outC->_L2_then_IfBlock1.context = outC->_L23_then_IfBlock1;
    outC->_L2_then_IfBlock1.nid_textmessage = outC->_L9_then_IfBlock1;
    outC->_L2_then_IfBlock1.whichLevel = outC->_L22_then_IfBlock1;
    outC->_L2_then_IfBlock1.whichMode = outC->_L21_then_IfBlock1;
    kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(
      &myElement_partial,
      &outC->_L2_then_IfBlock1);
    kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(
      &outC->_L11_then_IfBlock1,
      &myElement_partial);
    /* IfBlock1:then:_L10=(manage_TextMessages_Pkg::saveStatus#1)/ */
    saveStatus_manage_TextMessages_Pkg(
      &outC->_L12_then_IfBlock1,
      &outC->_L11_then_IfBlock1,
      &outC->Context_saveStatus_1);
    kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
      &outC->_L10_then_IfBlock1,
      &outC->Context_saveStatus_1.outStatusList);
    kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
      &outStatusList_partial,
      &outC->_L10_then_IfBlock1);
    kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
      &outC->outStatusList,
      &outStatusList_partial);
    kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->dmi_textMessage,
      &dmi_textMessage_partial);
    kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(
      &outC->myElement,
      &myElement_partial);
  }
  else {
    kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(
      &_3_myElement_partial,
      (DMI_TXT_MSG_status_T_DMI_Types_Pkg *) &cFreeTestStatusElement_DMI_Types_Pkg);
    outC->else_clock_IfBlock1 = outC->isValid;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
        &outC->_L1_then_else_IfBlock1,
        inStatusList);
      kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
        &_7_outStatusList_partial,
        &outC->_L1_then_else_IfBlock1);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->_L2_then_else_IfBlock1,
        intextMessage);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &_6_dmi_textMessage_partial,
        &outC->_L2_then_else_IfBlock1);
      kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
        &_1_outStatusList_partial,
        &_7_outStatusList_partial);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &_2_dmi_textMessage_partial,
        &_6_dmi_textMessage_partial);
    }
    else {
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->_L3_else_else_IfBlock1,
        (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cDefaultText_manage_DMI_Output_Pkg);
      kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
        &outC->_L2_else_else_IfBlock1,
        inStatusList);
      kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
        &_5_outStatusList_partial,
        &outC->_L2_else_else_IfBlock1);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &_4_dmi_textMessage_partial,
        &outC->_L3_else_else_IfBlock1);
      kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
        &_1_outStatusList_partial,
        &_5_outStatusList_partial);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &_2_dmi_textMessage_partial,
        &_4_dmi_textMessage_partial);
    }
    kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
      &outC->outStatusList,
      &_1_outStatusList_partial);
    kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->dmi_textMessage,
      &_2_dmi_textMessage_partial);
    kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(
      &outC->myElement,
      &_3_myElement_partial);
  }
}

#ifndef KCG_USER_DEFINED_INIT
void sendTextMessage_init_manage_TextMessages_Pkg(
  outC_sendTextMessage_manage_TextMessages_Pkg *outC)
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

  outC->_L7 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L4 = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L3 = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L2.valid = kcg_true;
  outC->_L2.system_clock = kcg_lit_int32(0);
  outC->_L2.textMessage_ID = kcg_lit_int32(0);
  outC->_L2.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L2.l_text = kcg_lit_int32(0);
  for (idx = 0; idx < 255; idx++) {
    outC->_L2.x_text[idx] = ' ';
  }
  outC->_L2.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L2.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->myElement.valid = kcg_true;
  outC->myElement.dmi_textMessageID = kcg_lit_int32(0);
  outC->myElement.timeStamp = kcg_lit_int32(0);
  outC->myElement.textReport =
    Q_TEXTREPORT_No_driver_acknowledgement_report_required;
  outC->myElement.context = con_undefined_DMI_Types_Pkg;
  outC->myElement.nid_textmessage = kcg_lit_int32(0);
  outC->myElement.whichLevel = M_LEVEL_Level_0;
  outC->myElement.whichMode = M_MODE_Full_Supervision;
  outC->isValid = kcg_true;
  outC->needsStore = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  for (idx1 = 0; idx1 < 31; idx1++) {
    outC->_L1_then_else_IfBlock1[idx1].valid = kcg_true;
    outC->_L1_then_else_IfBlock1[idx1].dmi_textMessageID = kcg_lit_int32(0);
    outC->_L1_then_else_IfBlock1[idx1].timeStamp = kcg_lit_int32(0);
    outC->_L1_then_else_IfBlock1[idx1].textReport =
      Q_TEXTREPORT_No_driver_acknowledgement_report_required;
    outC->_L1_then_else_IfBlock1[idx1].context = con_undefined_DMI_Types_Pkg;
    outC->_L1_then_else_IfBlock1[idx1].nid_textmessage = kcg_lit_int32(0);
    outC->_L1_then_else_IfBlock1[idx1].whichLevel = M_LEVEL_Level_0;
    outC->_L1_then_else_IfBlock1[idx1].whichMode = M_MODE_Full_Supervision;
  }
  outC->_L2_then_else_IfBlock1.valid = kcg_true;
  outC->_L2_then_else_IfBlock1.system_clock = kcg_lit_int32(0);
  outC->_L2_then_else_IfBlock1.textMessage_ID = kcg_lit_int32(0);
  outC->_L2_then_else_IfBlock1.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L2_then_else_IfBlock1.l_text = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 255; idx2++) {
    outC->_L2_then_else_IfBlock1.x_text[idx2] = ' ';
  }
  outC->_L2_then_else_IfBlock1.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L2_then_else_IfBlock1.q_textConfirm =
    Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L3_else_else_IfBlock1.valid = kcg_true;
  outC->_L3_else_else_IfBlock1.system_clock = kcg_lit_int32(0);
  outC->_L3_else_else_IfBlock1.textMessage_ID = kcg_lit_int32(0);
  outC->_L3_else_else_IfBlock1.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L3_else_else_IfBlock1.l_text = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 255; idx3++) {
    outC->_L3_else_else_IfBlock1.x_text[idx3] = ' ';
  }
  outC->_L3_else_else_IfBlock1.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L3_else_else_IfBlock1.q_textConfirm =
    Q_TEXTCONFIRM_No_confirmation_required;
  for (idx4 = 0; idx4 < 31; idx4++) {
    outC->_L2_else_else_IfBlock1[idx4].valid = kcg_true;
    outC->_L2_else_else_IfBlock1[idx4].dmi_textMessageID = kcg_lit_int32(0);
    outC->_L2_else_else_IfBlock1[idx4].timeStamp = kcg_lit_int32(0);
    outC->_L2_else_else_IfBlock1[idx4].textReport =
      Q_TEXTREPORT_No_driver_acknowledgement_report_required;
    outC->_L2_else_else_IfBlock1[idx4].context = con_undefined_DMI_Types_Pkg;
    outC->_L2_else_else_IfBlock1[idx4].nid_textmessage = kcg_lit_int32(0);
    outC->_L2_else_else_IfBlock1[idx4].whichLevel = M_LEVEL_Level_0;
    outC->_L2_else_else_IfBlock1[idx4].whichMode = M_MODE_Full_Supervision;
  }
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L2_then_IfBlock1.valid = kcg_true;
  outC->_L2_then_IfBlock1.dmi_textMessageID = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.timeStamp = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.textReport =
    Q_TEXTREPORT_No_driver_acknowledgement_report_required;
  outC->_L2_then_IfBlock1.context = con_undefined_DMI_Types_Pkg;
  outC->_L2_then_IfBlock1.nid_textmessage = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.whichLevel = M_LEVEL_Level_0;
  outC->_L2_then_IfBlock1.whichMode = M_MODE_Full_Supervision;
  outC->_L3_then_IfBlock1 = kcg_true;
  outC->_L4_then_IfBlock1.valid = kcg_true;
  outC->_L4_then_IfBlock1.system_clock = kcg_lit_int32(0);
  outC->_L4_then_IfBlock1.textMessage_ID = kcg_lit_int32(0);
  outC->_L4_then_IfBlock1.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L4_then_IfBlock1.l_text = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 255; idx5++) {
    outC->_L4_then_IfBlock1.x_text[idx5] = ' ';
  }
  outC->_L4_then_IfBlock1.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L4_then_IfBlock1.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L5_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L7_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L8_then_IfBlock1 =
    Q_TEXTREPORT_No_driver_acknowledgement_report_required;
  outC->_L9_then_IfBlock1 = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 31; idx6++) {
    outC->_L10_then_IfBlock1[idx6].valid = kcg_true;
    outC->_L10_then_IfBlock1[idx6].dmi_textMessageID = kcg_lit_int32(0);
    outC->_L10_then_IfBlock1[idx6].timeStamp = kcg_lit_int32(0);
    outC->_L10_then_IfBlock1[idx6].textReport =
      Q_TEXTREPORT_No_driver_acknowledgement_report_required;
    outC->_L10_then_IfBlock1[idx6].context = con_undefined_DMI_Types_Pkg;
    outC->_L10_then_IfBlock1[idx6].nid_textmessage = kcg_lit_int32(0);
    outC->_L10_then_IfBlock1[idx6].whichLevel = M_LEVEL_Level_0;
    outC->_L10_then_IfBlock1[idx6].whichMode = M_MODE_Full_Supervision;
  }
  outC->_L11_then_IfBlock1.valid = kcg_true;
  outC->_L11_then_IfBlock1.dmi_textMessageID = kcg_lit_int32(0);
  outC->_L11_then_IfBlock1.timeStamp = kcg_lit_int32(0);
  outC->_L11_then_IfBlock1.textReport =
    Q_TEXTREPORT_No_driver_acknowledgement_report_required;
  outC->_L11_then_IfBlock1.context = con_undefined_DMI_Types_Pkg;
  outC->_L11_then_IfBlock1.nid_textmessage = kcg_lit_int32(0);
  outC->_L11_then_IfBlock1.whichLevel = M_LEVEL_Level_0;
  outC->_L11_then_IfBlock1.whichMode = M_MODE_Full_Supervision;
  for (idx7 = 0; idx7 < 31; idx7++) {
    outC->_L12_then_IfBlock1[idx7].valid = kcg_true;
    outC->_L12_then_IfBlock1[idx7].dmi_textMessageID = kcg_lit_int32(0);
    outC->_L12_then_IfBlock1[idx7].timeStamp = kcg_lit_int32(0);
    outC->_L12_then_IfBlock1[idx7].textReport =
      Q_TEXTREPORT_No_driver_acknowledgement_report_required;
    outC->_L12_then_IfBlock1[idx7].context = con_undefined_DMI_Types_Pkg;
    outC->_L12_then_IfBlock1[idx7].nid_textmessage = kcg_lit_int32(0);
    outC->_L12_then_IfBlock1[idx7].whichLevel = M_LEVEL_Level_0;
    outC->_L12_then_IfBlock1[idx7].whichMode = M_MODE_Full_Supervision;
  }
  outC->_L13_then_IfBlock1.valid = kcg_true;
  outC->_L13_then_IfBlock1.system_clock = kcg_lit_int32(0);
  outC->_L13_then_IfBlock1.textMessage_ID = kcg_lit_int32(0);
  outC->_L13_then_IfBlock1.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L13_then_IfBlock1.l_text = kcg_lit_int32(0);
  for (idx8 = 0; idx8 < 255; idx8++) {
    outC->_L13_then_IfBlock1.x_text[idx8] = ' ';
  }
  outC->_L13_then_IfBlock1.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L13_then_IfBlock1.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L21_then_IfBlock1 = M_MODE_Full_Supervision;
  outC->_L22_then_IfBlock1 = M_LEVEL_Level_0;
  outC->_L23_then_IfBlock1 = con_undefined_DMI_Types_Pkg;
  outC->dmi_textMessage.valid = kcg_true;
  outC->dmi_textMessage.system_clock = kcg_lit_int32(0);
  outC->dmi_textMessage.textMessage_ID = kcg_lit_int32(0);
  outC->dmi_textMessage.q_text = balise_read_error_DMI_Types_Pkg;
  outC->dmi_textMessage.l_text = kcg_lit_int32(0);
  for (idx9 = 0; idx9 < 255; idx9++) {
    outC->dmi_textMessage.x_text[idx9] = ' ';
  }
  outC->dmi_textMessage.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->dmi_textMessage.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  for (idx10 = 0; idx10 < 31; idx10++) {
    outC->outStatusList[idx10].valid = kcg_true;
    outC->outStatusList[idx10].dmi_textMessageID = kcg_lit_int32(0);
    outC->outStatusList[idx10].timeStamp = kcg_lit_int32(0);
    outC->outStatusList[idx10].textReport =
      Q_TEXTREPORT_No_driver_acknowledgement_report_required;
    outC->outStatusList[idx10].context = con_undefined_DMI_Types_Pkg;
    outC->outStatusList[idx10].nid_textmessage = kcg_lit_int32(0);
    outC->outStatusList[idx10].whichLevel = M_LEVEL_Level_0;
    outC->outStatusList[idx10].whichMode = M_MODE_Full_Supervision;
  }
  /* IfBlock1:then:_L10=(manage_TextMessages_Pkg::saveStatus#1)/ */
  saveStatus_init_manage_TextMessages_Pkg(&outC->Context_saveStatus_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void sendTextMessage_reset_manage_TextMessages_Pkg(
  outC_sendTextMessage_manage_TextMessages_Pkg *outC)
{
  /* IfBlock1:then:_L10=(manage_TextMessages_Pkg::saveStatus#1)/ */
  saveStatus_reset_manage_TextMessages_Pkg(&outC->Context_saveStatus_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** sendTextMessage_manage_TextMessages_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

