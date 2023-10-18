/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "receiveRequestsModesAndLevel_manage_DMI_Input_Pkg.h"

/* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel/ */
void receiveRequestsModesAndLevel_manage_DMI_Input_Pkg(
  /* fromDMI_driverRequest/ */
  DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg *fromDMI_driverRequest,
  /* fromDMI_Icon_Ack/ */
  DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *fromDMI_Icon_Ack,
  /* fromDMI_TextMsg_Ack/ */
  DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *fromDMI_TextMsg_Ack,
  /* inSystemTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* inStatusList/ */
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg *inStatusList,
  outC_receiveRequestsModesAndLevel_manage_DMI_Input_Pkg *outC)
{
  static DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg noname;

  kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L11,
    fromDMI_driverRequest);
  /* _L9=(manage_DMI_Input_Pkg::doDriverRequests#1)/ */
  doDriverRequests_manage_DMI_Input_Pkg(
    &outC->_L11,
    &outC->Context_doDriverRequests_1);
  kcg_copy_DMI_DriverRequest_T_DMI_Types_Pkg(
    &outC->_L9,
    &outC->Context_doDriverRequests_1.outDriverRequestToModes);
  outC->_L10 = outC->Context_doDriverRequests_1.outDriverRequestToLevels;
  outC->outDriverRequestToLevels = outC->_L10;
  outC->_L15 = outC->_L9.valid;
  outC->_L6 = inSystemTime;
  kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(&outC->_L7, inStatusList);
  kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L8,
    fromDMI_TextMsg_Ack);
  /* _L4=(manage_TextMessages_Pkg::receiveTextMessageAck#1)/ */
  receiveTextMessageAck_manage_TextMessages_Pkg(
    outC->_L6,
    &outC->_L7,
    &outC->_L8,
    &outC->Context_receiveTextMessageAck_1);
  kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
    &outC->_L4,
    &outC->Context_receiveTextMessageAck_1.outStatusList);
  kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(
    &outC->_L5,
    &outC->Context_receiveTextMessageAck_1.outML);
  outC->_L14 = outC->_L5.valid;
  outC->_L16 = outC->_L14 | outC->_L15;
  kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(&outC->_L12, &outC->_L5);
  if (kcg_true) {
    kcg_copy_DMI_DriverRequest_T_DMI_Types_Pkg(
      &outC->_L12.DriverRequest,
      &outC->_L9);
  }
  kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(&outC->_L13, &outC->_L12);
  if (kcg_true) {
    outC->_L13.valid = outC->_L16;
  }
  kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
    &outC->outStatusList,
    &outC->_L4);
  kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L2,
    fromDMI_Icon_Ack);
  kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(&noname, &outC->_L2);
  kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(&outC->forModesAndLevel, &outC->_L13);
}

#ifndef KCG_USER_DEFINED_INIT
void receiveRequestsModesAndLevel_init_manage_DMI_Input_Pkg(
  outC_receiveRequestsModesAndLevel_manage_DMI_Input_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;

  outC->_L16 = kcg_true;
  outC->_L15 = kcg_true;
  outC->_L14 = kcg_true;
  outC->_L13.valid = kcg_true;
  outC->_L13.DriverAck.valid = kcg_true;
  outC->_L13.DriverAck.whichMode = M_MODE_Full_Supervision;
  outC->_L13.DriverAck.acknowledgement = kcg_true;
  outC->_L13.DriverRequest.valid = kcg_true;
  outC->_L13.DriverRequest.Req_Exit_SH = kcg_true;
  outC->_L13.DriverRequest.Req_NL = kcg_true;
  outC->_L13.DriverRequest.Req_Override = kcg_true;
  outC->_L13.DriverRequest.Req_SH = kcg_true;
  outC->_L13.DriverRequest.Req_Start = kcg_true;
  outC->_L13.DriverRequest.ETCS_Isolated = kcg_true;
  outC->_L13.LevelAck = kcg_true;
  outC->_L12.valid = kcg_true;
  outC->_L12.DriverAck.valid = kcg_true;
  outC->_L12.DriverAck.whichMode = M_MODE_Full_Supervision;
  outC->_L12.DriverAck.acknowledgement = kcg_true;
  outC->_L12.DriverRequest.valid = kcg_true;
  outC->_L12.DriverRequest.Req_Exit_SH = kcg_true;
  outC->_L12.DriverRequest.Req_NL = kcg_true;
  outC->_L12.DriverRequest.Req_Override = kcg_true;
  outC->_L12.DriverRequest.Req_SH = kcg_true;
  outC->_L12.DriverRequest.Req_Start = kcg_true;
  outC->_L12.DriverRequest.ETCS_Isolated = kcg_true;
  outC->_L12.LevelAck = kcg_true;
  outC->_L11.valid = kcg_true;
  outC->_L11.systemTime = kcg_lit_int64(0);
  outC->_L11.m_request = Start_of_mission_DMI_Types_Pkg;
  outC->_L10 = kcg_true;
  outC->_L9.valid = kcg_true;
  outC->_L9.Req_Exit_SH = kcg_true;
  outC->_L9.Req_NL = kcg_true;
  outC->_L9.Req_Override = kcg_true;
  outC->_L9.Req_SH = kcg_true;
  outC->_L9.Req_Start = kcg_true;
  outC->_L9.ETCS_Isolated = kcg_true;
  outC->_L8.valid = kcg_true;
  outC->_L8.systemTime = kcg_lit_int64(0);
  outC->_L8.textMessage_ID = kcg_lit_int64(0);
  outC->_L8.acknowledged = kcg_true;
  for (idx = 0; idx < 31; idx++) {
    outC->_L7[idx].valid = kcg_true;
    outC->_L7[idx].dmi_textMessageID = kcg_lit_int64(0);
    outC->_L7[idx].timeStamp = kcg_lit_int64(0);
    outC->_L7[idx].textReport =
      Q_TEXTREPORT_No_driver_acknowledgement_report_required;
    outC->_L7[idx].context = con_undefined_DMI_Types_Pkg;
    outC->_L7[idx].nid_textmessage = kcg_lit_int64(0);
    outC->_L7[idx].whichLevel = M_LEVEL_Level_0;
    outC->_L7[idx].whichMode = M_MODE_Full_Supervision;
  }
  outC->_L6 = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 31; idx1++) {
    outC->_L4[idx1].valid = kcg_true;
    outC->_L4[idx1].dmi_textMessageID = kcg_lit_int64(0);
    outC->_L4[idx1].timeStamp = kcg_lit_int64(0);
    outC->_L4[idx1].textReport =
      Q_TEXTREPORT_No_driver_acknowledgement_report_required;
    outC->_L4[idx1].context = con_undefined_DMI_Types_Pkg;
    outC->_L4[idx1].nid_textmessage = kcg_lit_int64(0);
    outC->_L4[idx1].whichLevel = M_LEVEL_Level_0;
    outC->_L4[idx1].whichMode = M_MODE_Full_Supervision;
  }
  outC->_L5.valid = kcg_true;
  outC->_L5.DriverAck.valid = kcg_true;
  outC->_L5.DriverAck.whichMode = M_MODE_Full_Supervision;
  outC->_L5.DriverAck.acknowledgement = kcg_true;
  outC->_L5.DriverRequest.valid = kcg_true;
  outC->_L5.DriverRequest.Req_Exit_SH = kcg_true;
  outC->_L5.DriverRequest.Req_NL = kcg_true;
  outC->_L5.DriverRequest.Req_Override = kcg_true;
  outC->_L5.DriverRequest.Req_SH = kcg_true;
  outC->_L5.DriverRequest.Req_Start = kcg_true;
  outC->_L5.DriverRequest.ETCS_Isolated = kcg_true;
  outC->_L5.LevelAck = kcg_true;
  outC->_L2.valid = kcg_true;
  outC->_L2.systemTime = kcg_lit_int64(0);
  outC->_L2.DMI_nid_icon_identifier = kcg_lit_int64(0);
  outC->outDriverRequestToLevels = kcg_true;
  for (idx2 = 0; idx2 < 31; idx2++) {
    outC->outStatusList[idx2].valid = kcg_true;
    outC->outStatusList[idx2].dmi_textMessageID = kcg_lit_int64(0);
    outC->outStatusList[idx2].timeStamp = kcg_lit_int64(0);
    outC->outStatusList[idx2].textReport =
      Q_TEXTREPORT_No_driver_acknowledgement_report_required;
    outC->outStatusList[idx2].context = con_undefined_DMI_Types_Pkg;
    outC->outStatusList[idx2].nid_textmessage = kcg_lit_int64(0);
    outC->outStatusList[idx2].whichLevel = M_LEVEL_Level_0;
    outC->outStatusList[idx2].whichMode = M_MODE_Full_Supervision;
  }
  outC->forModesAndLevel.valid = kcg_true;
  outC->forModesAndLevel.DriverAck.valid = kcg_true;
  outC->forModesAndLevel.DriverAck.whichMode = M_MODE_Full_Supervision;
  outC->forModesAndLevel.DriverAck.acknowledgement = kcg_true;
  outC->forModesAndLevel.DriverRequest.valid = kcg_true;
  outC->forModesAndLevel.DriverRequest.Req_Exit_SH = kcg_true;
  outC->forModesAndLevel.DriverRequest.Req_NL = kcg_true;
  outC->forModesAndLevel.DriverRequest.Req_Override = kcg_true;
  outC->forModesAndLevel.DriverRequest.Req_SH = kcg_true;
  outC->forModesAndLevel.DriverRequest.Req_Start = kcg_true;
  outC->forModesAndLevel.DriverRequest.ETCS_Isolated = kcg_true;
  outC->forModesAndLevel.LevelAck = kcg_true;
  /* _L4=(manage_TextMessages_Pkg::receiveTextMessageAck#1)/ */
  receiveTextMessageAck_init_manage_TextMessages_Pkg(
    &outC->Context_receiveTextMessageAck_1);
  /* _L9=(manage_DMI_Input_Pkg::doDriverRequests#1)/ */
  doDriverRequests_init_manage_DMI_Input_Pkg(&outC->Context_doDriverRequests_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void receiveRequestsModesAndLevel_reset_manage_DMI_Input_Pkg(
  outC_receiveRequestsModesAndLevel_manage_DMI_Input_Pkg *outC)
{
  /* _L4=(manage_TextMessages_Pkg::receiveTextMessageAck#1)/ */
  receiveTextMessageAck_reset_manage_TextMessages_Pkg(
    &outC->Context_receiveTextMessageAck_1);
  /* _L9=(manage_DMI_Input_Pkg::doDriverRequests#1)/ */
  doDriverRequests_reset_manage_DMI_Input_Pkg(
    &outC->Context_doDriverRequests_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** receiveRequestsModesAndLevel_manage_DMI_Input_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

