/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "receiveTextMessageAck_manage_TextMessages_Pkg.h"

/* manage_TextMessages_Pkg::receiveTextMessageAck/ */
void receiveTextMessageAck_manage_TextMessages_Pkg(
  /* inSystemTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* inStatusList/ */
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg *inStatusList,
  /* inTXT_MsgAck/ */
  DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *inTXT_MsgAck,
  outC_receiveTextMessageAck_manage_TextMessages_Pkg *outC)
{
  /* outStatusList/ */
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg outStatusList_partial;
  /* msgInfo/ */
  DMI_TXT_MSG_status_T_DMI_Types_Pkg msgInfo_partial;
  /* indexToInfo/ */
  kcg_int32 indexToInfo_partial;
  /* context/ */
  DMI_context_TXT_MSG_T_DMI_Types_Pkg context_partial;
  kcg_int32 noname;
  /* outStatusList/ */
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg _1_outStatusList_partial;
  /* msgInfo/ */
  DMI_TXT_MSG_status_T_DMI_Types_Pkg _2_msgInfo_partial;
  /* indexToInfo/ */
  kcg_int32 _3_indexToInfo_partial;
  /* context/ */
  DMI_context_TXT_MSG_T_DMI_Types_Pkg _4_context_partial;
  /* outML/ */
  DMI_To_Modes_T_DMI_Types_Pkg outML_partial;
  /* outML/ */
  DMI_To_Modes_T_DMI_Types_Pkg _5_outML_partial;
  /* outML/ */
  DMI_To_Modes_T_DMI_Types_Pkg _6_outML_partial;
  /* outML/ */
  DMI_To_Modes_T_DMI_Types_Pkg _7_outML_partial;
  T_internal_Type_Obu_BasicTypes_Pkg _8_noname;

  kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L24,
    inTXT_MsgAck);
  outC->_L25 = outC->_L24.valid;
  outC->isValid = outC->_L25;
  outC->IfBlock2_clock = outC->isValid;
  /* IfBlock2: */
  if (outC->IfBlock2_clock) {
    kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(
      &outC->_L9_then_IfBlock2,
      (DMI_TXT_MSG_status_T_DMI_Types_Pkg *) &cFreeTestStatusElement_DMI_Types_Pkg);
    kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->_L1_then_IfBlock2,
      inTXT_MsgAck);
    outC->_L4_then_IfBlock2 = outC->_L1_then_IfBlock2.textMessage_ID;
    indexToInfo_partial = outC->_L4_then_IfBlock2;
    outC->_L8_then_IfBlock2 = indexToInfo_partial;
    kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
      &outC->_L7_then_IfBlock2,
      inStatusList);
    if ((kcg_lit_int32(0) <= outC->_L8_then_IfBlock2) &
      (outC->_L8_then_IfBlock2 < kcg_lit_int32(31))) {
      kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(
        &outC->_L6_then_IfBlock2,
        &outC->_L7_then_IfBlock2[outC->_L8_then_IfBlock2]);
    }
    else {
      kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(
        &outC->_L6_then_IfBlock2,
        &outC->_L9_then_IfBlock2);
    }
    kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(
      &msgInfo_partial,
      &outC->_L6_then_IfBlock2);
    kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(
      &outC->_L11_then_IfBlock2,
      &msgInfo_partial);
    outC->_L14_then_IfBlock2 = outC->_L11_then_IfBlock2.context;
    outC->_L12_then_IfBlock2 = con_undefined_DMI_Types_Pkg;
    outC->_L10_then_IfBlock2 = outC->_L11_then_IfBlock2.valid;
    /* IfBlock2:then:_L13= */
    if (outC->_L10_then_IfBlock2) {
      outC->_L13_then_IfBlock2 = outC->_L14_then_IfBlock2;
    }
    else {
      outC->_L13_then_IfBlock2 = outC->_L12_then_IfBlock2;
    }
    context_partial = outC->_L13_then_IfBlock2;
    kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
      &outC->_L5_then_IfBlock2,
      inStatusList);
    /* IfBlock2:then:_L2=(manage_TextMessages_Pkg::clearStatus#2)/ */
    clearStatus_manage_TextMessages_Pkg(
      &outC->_L5_then_IfBlock2,
      outC->_L4_then_IfBlock2,
      &outC->Context_clearStatus_2);
    kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
      &outC->_L2_then_IfBlock2,
      &outC->Context_clearStatus_2.outStatusList);
    outC->_L3_then_IfBlock2 = outC->Context_clearStatus_2.outIndex;
    noname = outC->_L3_then_IfBlock2;
    kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
      &outStatusList_partial,
      &outC->_L2_then_IfBlock2);
    kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
      &outC->outStatusList,
      &outStatusList_partial);
    kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(&outC->msgInfo, &msgInfo_partial);
    outC->indexToInfo = indexToInfo_partial;
    outC->context = context_partial;
  }
  else {
    _3_indexToInfo_partial = kcg_lit_int32(-1);
    outC->_L5_else_IfBlock2 = con_undefined_DMI_Types_Pkg;
    kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(
      &outC->_L2_else_IfBlock2,
      (DMI_TXT_MSG_status_T_DMI_Types_Pkg *) &cFreeTestStatusElement_DMI_Types_Pkg);
    kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(
      &_2_msgInfo_partial,
      &outC->_L2_else_IfBlock2);
    _4_context_partial = outC->_L5_else_IfBlock2;
    kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
      &outC->_L1_else_IfBlock2,
      inStatusList);
    kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
      &_1_outStatusList_partial,
      &outC->_L1_else_IfBlock2);
    kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
      &outC->outStatusList,
      &_1_outStatusList_partial);
    kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(
      &outC->msgInfo,
      &_2_msgInfo_partial);
    outC->indexToInfo = _3_indexToInfo_partial;
    outC->context = _4_context_partial;
  }
  outC->IfBlock1_clock = outC->context == con_levelMgmt_DMI_Types_Pkg;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->_L6_then_IfBlock1,
      inTXT_MsgAck);
    outC->_L7_then_IfBlock1 = outC->_L6_then_IfBlock1.acknowledged;
    outC->_L4_then_IfBlock1 = kcg_true;
    kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(
      &outC->_L2_then_IfBlock1,
      (DMI_To_Modes_T_DMI_Types_Pkg *) &cNoDMI_ML_manage_TextMessages_Pkg);
    kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(
      &outC->_L3_then_IfBlock1,
      &outC->_L2_then_IfBlock1);
    if (kcg_true) {
      outC->_L3_then_IfBlock1.valid = outC->_L4_then_IfBlock1;
    }
    kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(
      &outC->_L5_then_IfBlock1,
      &outC->_L3_then_IfBlock1);
    if (kcg_true) {
      outC->_L5_then_IfBlock1.LevelAck = outC->_L7_then_IfBlock1;
    }
    kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(&outML_partial, &outC->_L5_then_IfBlock1);
    kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(&outC->outML, &outML_partial);
  }
  else {
    outC->else_clock_IfBlock1 = outC->context == con_modeChange_DMI_Types_Pkg;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(
        &outC->_L11_then_else_IfBlock1,
        &outC->msgInfo);
      outC->_L12_then_else_IfBlock1 = outC->_L11_then_else_IfBlock1.whichMode;
      kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
        &outC->_L10_then_else_IfBlock1,
        inTXT_MsgAck);
      outC->_L9_then_else_IfBlock1 = outC->_L10_then_else_IfBlock1.acknowledged;
      outC->_L8_then_else_IfBlock1 = kcg_true;
      outC->_L7_then_else_IfBlock1.valid = outC->_L8_then_else_IfBlock1;
      outC->_L7_then_else_IfBlock1.whichMode = outC->_L12_then_else_IfBlock1;
      outC->_L7_then_else_IfBlock1.acknowledgement = outC->_L9_then_else_IfBlock1;
      outC->_L5_then_else_IfBlock1 = kcg_true;
      kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(
        &outC->_L3_then_else_IfBlock1,
        (DMI_To_Modes_T_DMI_Types_Pkg *) &cNoDMI_ML_manage_TextMessages_Pkg);
      kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(
        &outC->_L1_then_else_IfBlock1,
        &outC->_L3_then_else_IfBlock1);
      if (kcg_true) {
        outC->_L1_then_else_IfBlock1.valid = outC->_L5_then_else_IfBlock1;
      }
      kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(
        &outC->_L2_then_else_IfBlock1,
        &outC->_L1_then_else_IfBlock1);
      if (kcg_true) {
        kcg_copy_DMI_DriverAck_T_DMI_Types_Pkg(
          &outC->_L2_then_else_IfBlock1.DriverAck,
          &outC->_L7_then_else_IfBlock1);
      }
      kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(
        &_7_outML_partial,
        &outC->_L2_then_else_IfBlock1);
      kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(&_5_outML_partial, &_7_outML_partial);
    }
    else {
      kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(
        &outC->_L1_else_else_IfBlock1,
        (DMI_To_Modes_T_DMI_Types_Pkg *) &cNoDMI_ML_manage_TextMessages_Pkg);
      kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(
        &_6_outML_partial,
        &outC->_L1_else_else_IfBlock1);
      kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(&_5_outML_partial, &_6_outML_partial);
    }
    kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(&outC->outML, &_5_outML_partial);
  }
  outC->_L5 = inSystemTime;
  _8_noname = outC->_L5;
}

#ifndef KCG_USER_DEFINED_INIT
void receiveTextMessageAck_init_manage_TextMessages_Pkg(
  outC_receiveTextMessageAck_manage_TextMessages_Pkg *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;

  outC->_L25 = kcg_true;
  outC->_L24.valid = kcg_true;
  outC->_L24.systemTime = kcg_lit_int32(0);
  outC->_L24.textMessage_ID = kcg_lit_int32(0);
  outC->_L24.acknowledged = kcg_true;
  outC->_L5 = kcg_lit_int32(0);
  outC->isValid = kcg_true;
  outC->context = con_undefined_DMI_Types_Pkg;
  outC->indexToInfo = kcg_lit_int32(0);
  outC->msgInfo.valid = kcg_true;
  outC->msgInfo.dmi_textMessageID = kcg_lit_int32(0);
  outC->msgInfo.timeStamp = kcg_lit_int32(0);
  outC->msgInfo.textReport =
    Q_TEXTREPORT_No_driver_acknowledgement_report_required;
  outC->msgInfo.context = con_undefined_DMI_Types_Pkg;
  outC->msgInfo.nid_textmessage = kcg_lit_int32(0);
  outC->msgInfo.whichLevel = M_LEVEL_Level_0;
  outC->msgInfo.whichMode = M_MODE_Full_Supervision;
  outC->IfBlock1_clock = kcg_true;
  outC->IfBlock2_clock = kcg_true;
  outC->_L12_then_else_IfBlock1 = M_MODE_Full_Supervision;
  outC->_L11_then_else_IfBlock1.valid = kcg_true;
  outC->_L11_then_else_IfBlock1.dmi_textMessageID = kcg_lit_int32(0);
  outC->_L11_then_else_IfBlock1.timeStamp = kcg_lit_int32(0);
  outC->_L11_then_else_IfBlock1.textReport =
    Q_TEXTREPORT_No_driver_acknowledgement_report_required;
  outC->_L11_then_else_IfBlock1.context = con_undefined_DMI_Types_Pkg;
  outC->_L11_then_else_IfBlock1.nid_textmessage = kcg_lit_int32(0);
  outC->_L11_then_else_IfBlock1.whichLevel = M_LEVEL_Level_0;
  outC->_L11_then_else_IfBlock1.whichMode = M_MODE_Full_Supervision;
  outC->_L9_then_else_IfBlock1 = kcg_true;
  outC->_L10_then_else_IfBlock1.valid = kcg_true;
  outC->_L10_then_else_IfBlock1.systemTime = kcg_lit_int32(0);
  outC->_L10_then_else_IfBlock1.textMessage_ID = kcg_lit_int32(0);
  outC->_L10_then_else_IfBlock1.acknowledged = kcg_true;
  outC->_L8_then_else_IfBlock1 = kcg_true;
  outC->_L7_then_else_IfBlock1.valid = kcg_true;
  outC->_L7_then_else_IfBlock1.whichMode = M_MODE_Full_Supervision;
  outC->_L7_then_else_IfBlock1.acknowledgement = kcg_true;
  outC->_L1_then_else_IfBlock1.valid = kcg_true;
  outC->_L1_then_else_IfBlock1.DriverAck.valid = kcg_true;
  outC->_L1_then_else_IfBlock1.DriverAck.whichMode = M_MODE_Full_Supervision;
  outC->_L1_then_else_IfBlock1.DriverAck.acknowledgement = kcg_true;
  outC->_L1_then_else_IfBlock1.DriverRequest.valid = kcg_true;
  outC->_L1_then_else_IfBlock1.DriverRequest.Req_Exit_SH = kcg_true;
  outC->_L1_then_else_IfBlock1.DriverRequest.Req_NL = kcg_true;
  outC->_L1_then_else_IfBlock1.DriverRequest.Req_Override = kcg_true;
  outC->_L1_then_else_IfBlock1.DriverRequest.Req_SH = kcg_true;
  outC->_L1_then_else_IfBlock1.DriverRequest.Req_Start = kcg_true;
  outC->_L1_then_else_IfBlock1.DriverRequest.ETCS_Isolated = kcg_true;
  outC->_L1_then_else_IfBlock1.LevelAck = kcg_true;
  outC->_L2_then_else_IfBlock1.valid = kcg_true;
  outC->_L2_then_else_IfBlock1.DriverAck.valid = kcg_true;
  outC->_L2_then_else_IfBlock1.DriverAck.whichMode = M_MODE_Full_Supervision;
  outC->_L2_then_else_IfBlock1.DriverAck.acknowledgement = kcg_true;
  outC->_L2_then_else_IfBlock1.DriverRequest.valid = kcg_true;
  outC->_L2_then_else_IfBlock1.DriverRequest.Req_Exit_SH = kcg_true;
  outC->_L2_then_else_IfBlock1.DriverRequest.Req_NL = kcg_true;
  outC->_L2_then_else_IfBlock1.DriverRequest.Req_Override = kcg_true;
  outC->_L2_then_else_IfBlock1.DriverRequest.Req_SH = kcg_true;
  outC->_L2_then_else_IfBlock1.DriverRequest.Req_Start = kcg_true;
  outC->_L2_then_else_IfBlock1.DriverRequest.ETCS_Isolated = kcg_true;
  outC->_L2_then_else_IfBlock1.LevelAck = kcg_true;
  outC->_L3_then_else_IfBlock1.valid = kcg_true;
  outC->_L3_then_else_IfBlock1.DriverAck.valid = kcg_true;
  outC->_L3_then_else_IfBlock1.DriverAck.whichMode = M_MODE_Full_Supervision;
  outC->_L3_then_else_IfBlock1.DriverAck.acknowledgement = kcg_true;
  outC->_L3_then_else_IfBlock1.DriverRequest.valid = kcg_true;
  outC->_L3_then_else_IfBlock1.DriverRequest.Req_Exit_SH = kcg_true;
  outC->_L3_then_else_IfBlock1.DriverRequest.Req_NL = kcg_true;
  outC->_L3_then_else_IfBlock1.DriverRequest.Req_Override = kcg_true;
  outC->_L3_then_else_IfBlock1.DriverRequest.Req_SH = kcg_true;
  outC->_L3_then_else_IfBlock1.DriverRequest.Req_Start = kcg_true;
  outC->_L3_then_else_IfBlock1.DriverRequest.ETCS_Isolated = kcg_true;
  outC->_L3_then_else_IfBlock1.LevelAck = kcg_true;
  outC->_L5_then_else_IfBlock1 = kcg_true;
  outC->_L1_else_else_IfBlock1.valid = kcg_true;
  outC->_L1_else_else_IfBlock1.DriverAck.valid = kcg_true;
  outC->_L1_else_else_IfBlock1.DriverAck.whichMode = M_MODE_Full_Supervision;
  outC->_L1_else_else_IfBlock1.DriverAck.acknowledgement = kcg_true;
  outC->_L1_else_else_IfBlock1.DriverRequest.valid = kcg_true;
  outC->_L1_else_else_IfBlock1.DriverRequest.Req_Exit_SH = kcg_true;
  outC->_L1_else_else_IfBlock1.DriverRequest.Req_NL = kcg_true;
  outC->_L1_else_else_IfBlock1.DriverRequest.Req_Override = kcg_true;
  outC->_L1_else_else_IfBlock1.DriverRequest.Req_SH = kcg_true;
  outC->_L1_else_else_IfBlock1.DriverRequest.Req_Start = kcg_true;
  outC->_L1_else_else_IfBlock1.DriverRequest.ETCS_Isolated = kcg_true;
  outC->_L1_else_else_IfBlock1.LevelAck = kcg_true;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L2_then_IfBlock1.valid = kcg_true;
  outC->_L2_then_IfBlock1.DriverAck.valid = kcg_true;
  outC->_L2_then_IfBlock1.DriverAck.whichMode = M_MODE_Full_Supervision;
  outC->_L2_then_IfBlock1.DriverAck.acknowledgement = kcg_true;
  outC->_L2_then_IfBlock1.DriverRequest.valid = kcg_true;
  outC->_L2_then_IfBlock1.DriverRequest.Req_Exit_SH = kcg_true;
  outC->_L2_then_IfBlock1.DriverRequest.Req_NL = kcg_true;
  outC->_L2_then_IfBlock1.DriverRequest.Req_Override = kcg_true;
  outC->_L2_then_IfBlock1.DriverRequest.Req_SH = kcg_true;
  outC->_L2_then_IfBlock1.DriverRequest.Req_Start = kcg_true;
  outC->_L2_then_IfBlock1.DriverRequest.ETCS_Isolated = kcg_true;
  outC->_L2_then_IfBlock1.LevelAck = kcg_true;
  outC->_L3_then_IfBlock1.valid = kcg_true;
  outC->_L3_then_IfBlock1.DriverAck.valid = kcg_true;
  outC->_L3_then_IfBlock1.DriverAck.whichMode = M_MODE_Full_Supervision;
  outC->_L3_then_IfBlock1.DriverAck.acknowledgement = kcg_true;
  outC->_L3_then_IfBlock1.DriverRequest.valid = kcg_true;
  outC->_L3_then_IfBlock1.DriverRequest.Req_Exit_SH = kcg_true;
  outC->_L3_then_IfBlock1.DriverRequest.Req_NL = kcg_true;
  outC->_L3_then_IfBlock1.DriverRequest.Req_Override = kcg_true;
  outC->_L3_then_IfBlock1.DriverRequest.Req_SH = kcg_true;
  outC->_L3_then_IfBlock1.DriverRequest.Req_Start = kcg_true;
  outC->_L3_then_IfBlock1.DriverRequest.ETCS_Isolated = kcg_true;
  outC->_L3_then_IfBlock1.LevelAck = kcg_true;
  outC->_L4_then_IfBlock1 = kcg_true;
  outC->_L5_then_IfBlock1.valid = kcg_true;
  outC->_L5_then_IfBlock1.DriverAck.valid = kcg_true;
  outC->_L5_then_IfBlock1.DriverAck.whichMode = M_MODE_Full_Supervision;
  outC->_L5_then_IfBlock1.DriverAck.acknowledgement = kcg_true;
  outC->_L5_then_IfBlock1.DriverRequest.valid = kcg_true;
  outC->_L5_then_IfBlock1.DriverRequest.Req_Exit_SH = kcg_true;
  outC->_L5_then_IfBlock1.DriverRequest.Req_NL = kcg_true;
  outC->_L5_then_IfBlock1.DriverRequest.Req_Override = kcg_true;
  outC->_L5_then_IfBlock1.DriverRequest.Req_SH = kcg_true;
  outC->_L5_then_IfBlock1.DriverRequest.Req_Start = kcg_true;
  outC->_L5_then_IfBlock1.DriverRequest.ETCS_Isolated = kcg_true;
  outC->_L5_then_IfBlock1.LevelAck = kcg_true;
  outC->_L6_then_IfBlock1.valid = kcg_true;
  outC->_L6_then_IfBlock1.systemTime = kcg_lit_int32(0);
  outC->_L6_then_IfBlock1.textMessage_ID = kcg_lit_int32(0);
  outC->_L6_then_IfBlock1.acknowledged = kcg_true;
  outC->_L7_then_IfBlock1 = kcg_true;
  for (idx = 0; idx < 31; idx++) {
    outC->_L1_else_IfBlock2[idx].valid = kcg_true;
    outC->_L1_else_IfBlock2[idx].dmi_textMessageID = kcg_lit_int32(0);
    outC->_L1_else_IfBlock2[idx].timeStamp = kcg_lit_int32(0);
    outC->_L1_else_IfBlock2[idx].textReport =
      Q_TEXTREPORT_No_driver_acknowledgement_report_required;
    outC->_L1_else_IfBlock2[idx].context = con_undefined_DMI_Types_Pkg;
    outC->_L1_else_IfBlock2[idx].nid_textmessage = kcg_lit_int32(0);
    outC->_L1_else_IfBlock2[idx].whichLevel = M_LEVEL_Level_0;
    outC->_L1_else_IfBlock2[idx].whichMode = M_MODE_Full_Supervision;
  }
  outC->_L2_else_IfBlock2.valid = kcg_true;
  outC->_L2_else_IfBlock2.dmi_textMessageID = kcg_lit_int32(0);
  outC->_L2_else_IfBlock2.timeStamp = kcg_lit_int32(0);
  outC->_L2_else_IfBlock2.textReport =
    Q_TEXTREPORT_No_driver_acknowledgement_report_required;
  outC->_L2_else_IfBlock2.context = con_undefined_DMI_Types_Pkg;
  outC->_L2_else_IfBlock2.nid_textmessage = kcg_lit_int32(0);
  outC->_L2_else_IfBlock2.whichLevel = M_LEVEL_Level_0;
  outC->_L2_else_IfBlock2.whichMode = M_MODE_Full_Supervision;
  outC->_L5_else_IfBlock2 = con_undefined_DMI_Types_Pkg;
  for (idx1 = 0; idx1 < 31; idx1++) {
    outC->_L5_then_IfBlock2[idx1].valid = kcg_true;
    outC->_L5_then_IfBlock2[idx1].dmi_textMessageID = kcg_lit_int32(0);
    outC->_L5_then_IfBlock2[idx1].timeStamp = kcg_lit_int32(0);
    outC->_L5_then_IfBlock2[idx1].textReport =
      Q_TEXTREPORT_No_driver_acknowledgement_report_required;
    outC->_L5_then_IfBlock2[idx1].context = con_undefined_DMI_Types_Pkg;
    outC->_L5_then_IfBlock2[idx1].nid_textmessage = kcg_lit_int32(0);
    outC->_L5_then_IfBlock2[idx1].whichLevel = M_LEVEL_Level_0;
    outC->_L5_then_IfBlock2[idx1].whichMode = M_MODE_Full_Supervision;
  }
  outC->_L4_then_IfBlock2 = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 31; idx2++) {
    outC->_L2_then_IfBlock2[idx2].valid = kcg_true;
    outC->_L2_then_IfBlock2[idx2].dmi_textMessageID = kcg_lit_int32(0);
    outC->_L2_then_IfBlock2[idx2].timeStamp = kcg_lit_int32(0);
    outC->_L2_then_IfBlock2[idx2].textReport =
      Q_TEXTREPORT_No_driver_acknowledgement_report_required;
    outC->_L2_then_IfBlock2[idx2].context = con_undefined_DMI_Types_Pkg;
    outC->_L2_then_IfBlock2[idx2].nid_textmessage = kcg_lit_int32(0);
    outC->_L2_then_IfBlock2[idx2].whichLevel = M_LEVEL_Level_0;
    outC->_L2_then_IfBlock2[idx2].whichMode = M_MODE_Full_Supervision;
  }
  outC->_L3_then_IfBlock2 = kcg_lit_int32(0);
  outC->_L1_then_IfBlock2.valid = kcg_true;
  outC->_L1_then_IfBlock2.systemTime = kcg_lit_int32(0);
  outC->_L1_then_IfBlock2.textMessage_ID = kcg_lit_int32(0);
  outC->_L1_then_IfBlock2.acknowledged = kcg_true;
  outC->_L9_then_IfBlock2.valid = kcg_true;
  outC->_L9_then_IfBlock2.dmi_textMessageID = kcg_lit_int32(0);
  outC->_L9_then_IfBlock2.timeStamp = kcg_lit_int32(0);
  outC->_L9_then_IfBlock2.textReport =
    Q_TEXTREPORT_No_driver_acknowledgement_report_required;
  outC->_L9_then_IfBlock2.context = con_undefined_DMI_Types_Pkg;
  outC->_L9_then_IfBlock2.nid_textmessage = kcg_lit_int32(0);
  outC->_L9_then_IfBlock2.whichLevel = M_LEVEL_Level_0;
  outC->_L9_then_IfBlock2.whichMode = M_MODE_Full_Supervision;
  outC->_L8_then_IfBlock2 = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 31; idx3++) {
    outC->_L7_then_IfBlock2[idx3].valid = kcg_true;
    outC->_L7_then_IfBlock2[idx3].dmi_textMessageID = kcg_lit_int32(0);
    outC->_L7_then_IfBlock2[idx3].timeStamp = kcg_lit_int32(0);
    outC->_L7_then_IfBlock2[idx3].textReport =
      Q_TEXTREPORT_No_driver_acknowledgement_report_required;
    outC->_L7_then_IfBlock2[idx3].context = con_undefined_DMI_Types_Pkg;
    outC->_L7_then_IfBlock2[idx3].nid_textmessage = kcg_lit_int32(0);
    outC->_L7_then_IfBlock2[idx3].whichLevel = M_LEVEL_Level_0;
    outC->_L7_then_IfBlock2[idx3].whichMode = M_MODE_Full_Supervision;
  }
  outC->_L6_then_IfBlock2.valid = kcg_true;
  outC->_L6_then_IfBlock2.dmi_textMessageID = kcg_lit_int32(0);
  outC->_L6_then_IfBlock2.timeStamp = kcg_lit_int32(0);
  outC->_L6_then_IfBlock2.textReport =
    Q_TEXTREPORT_No_driver_acknowledgement_report_required;
  outC->_L6_then_IfBlock2.context = con_undefined_DMI_Types_Pkg;
  outC->_L6_then_IfBlock2.nid_textmessage = kcg_lit_int32(0);
  outC->_L6_then_IfBlock2.whichLevel = M_LEVEL_Level_0;
  outC->_L6_then_IfBlock2.whichMode = M_MODE_Full_Supervision;
  outC->_L14_then_IfBlock2 = con_undefined_DMI_Types_Pkg;
  outC->_L13_then_IfBlock2 = con_undefined_DMI_Types_Pkg;
  outC->_L12_then_IfBlock2 = con_undefined_DMI_Types_Pkg;
  outC->_L11_then_IfBlock2.valid = kcg_true;
  outC->_L11_then_IfBlock2.dmi_textMessageID = kcg_lit_int32(0);
  outC->_L11_then_IfBlock2.timeStamp = kcg_lit_int32(0);
  outC->_L11_then_IfBlock2.textReport =
    Q_TEXTREPORT_No_driver_acknowledgement_report_required;
  outC->_L11_then_IfBlock2.context = con_undefined_DMI_Types_Pkg;
  outC->_L11_then_IfBlock2.nid_textmessage = kcg_lit_int32(0);
  outC->_L11_then_IfBlock2.whichLevel = M_LEVEL_Level_0;
  outC->_L11_then_IfBlock2.whichMode = M_MODE_Full_Supervision;
  outC->_L10_then_IfBlock2 = kcg_true;
  outC->outML.valid = kcg_true;
  outC->outML.DriverAck.valid = kcg_true;
  outC->outML.DriverAck.whichMode = M_MODE_Full_Supervision;
  outC->outML.DriverAck.acknowledgement = kcg_true;
  outC->outML.DriverRequest.valid = kcg_true;
  outC->outML.DriverRequest.Req_Exit_SH = kcg_true;
  outC->outML.DriverRequest.Req_NL = kcg_true;
  outC->outML.DriverRequest.Req_Override = kcg_true;
  outC->outML.DriverRequest.Req_SH = kcg_true;
  outC->outML.DriverRequest.Req_Start = kcg_true;
  outC->outML.DriverRequest.ETCS_Isolated = kcg_true;
  outC->outML.LevelAck = kcg_true;
  for (idx4 = 0; idx4 < 31; idx4++) {
    outC->outStatusList[idx4].valid = kcg_true;
    outC->outStatusList[idx4].dmi_textMessageID = kcg_lit_int32(0);
    outC->outStatusList[idx4].timeStamp = kcg_lit_int32(0);
    outC->outStatusList[idx4].textReport =
      Q_TEXTREPORT_No_driver_acknowledgement_report_required;
    outC->outStatusList[idx4].context = con_undefined_DMI_Types_Pkg;
    outC->outStatusList[idx4].nid_textmessage = kcg_lit_int32(0);
    outC->outStatusList[idx4].whichLevel = M_LEVEL_Level_0;
    outC->outStatusList[idx4].whichMode = M_MODE_Full_Supervision;
  }
  /* IfBlock2:then:_L2=(manage_TextMessages_Pkg::clearStatus#2)/ */
  clearStatus_init_manage_TextMessages_Pkg(&outC->Context_clearStatus_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void receiveTextMessageAck_reset_manage_TextMessages_Pkg(
  outC_receiveTextMessageAck_manage_TextMessages_Pkg *outC)
{
  /* IfBlock2:then:_L2=(manage_TextMessages_Pkg::clearStatus#2)/ */
  clearStatus_reset_manage_TextMessages_Pkg(&outC->Context_clearStatus_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** receiveTextMessageAck_manage_TextMessages_Pkg.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

