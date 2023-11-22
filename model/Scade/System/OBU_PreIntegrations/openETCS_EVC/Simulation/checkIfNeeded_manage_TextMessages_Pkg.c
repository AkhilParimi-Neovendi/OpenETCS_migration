/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "checkIfNeeded_manage_TextMessages_Pkg.h"

/* manage_TextMessages_Pkg::checkIfNeeded/ */
void checkIfNeeded_manage_TextMessages_Pkg(
  /* inModeLevel_Ack/ */
  T_AcknoledgementRequest_Level_And_Mode_Types_Pkg *inModeLevel_Ack,
  /* announcedLevel/ */
  M_LEVEL announcedLevel,
  /* inStatusList/ */
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg *inStatusList,
  outC_checkIfNeeded_manage_TextMessages_Pkg *outC)
{
  /* sendingNeeded/ */
  kcg_bool sendingNeeded_partial;
  /* sendingNeeded/ */
  kcg_bool _1_sendingNeeded_partial;

  kcg_copy_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg(
    &outC->_L17,
    inModeLevel_Ack);
  outC->_L7 = outC->_L17.LevelNeedsAck;
  outC->_L18 = !outC->_L7;
  outC->_L11 = outC->_L17.valid;
  outC->_L9 = outC->_L18 & outC->_L11;
  outC->modeChange = outC->_L9;
  outC->levelChange = outC->_L7;
  outC->IfBlock1_clock = outC->modeChange | outC->levelChange;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    kcg_copy_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg(
      &outC->_L10_then_IfBlock1,
      inModeLevel_Ack);
    outC->_L9_then_IfBlock1 = announcedLevel;
    kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
      &outC->_L3_then_IfBlock1,
      inStatusList);
    /* IfBlock1:then:_L6=(manage_TextMessages_Pkg::mapMLtoElement#1)/ */
    mapMLtoElement_manage_TextMessages_Pkg(
      &outC->_L10_then_IfBlock1,
      outC->_L9_then_IfBlock1,
      &outC->Context_mapMLtoElement_1);
    kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(
      &outC->_L6_then_IfBlock1,
      &outC->Context_mapMLtoElement_1.outDerivedElement);
    /* IfBlock1:then:_L1=(manage_TextMessages_Pkg::findForCheck#1)/ */
    findForCheck_manage_TextMessages_Pkg(
      &outC->_L3_then_IfBlock1,
      &outC->_L6_then_IfBlock1,
      &outC->Context_findForCheck_1);
    outC->_L1_then_IfBlock1 = outC->Context_findForCheck_1.outFound;
    outC->_L8_then_IfBlock1 = !outC->_L1_then_IfBlock1;
    sendingNeeded_partial = outC->_L8_then_IfBlock1;
    outC->sendingNeeded = sendingNeeded_partial;
  }
  else {
    outC->_L1_else_IfBlock1 = kcg_false;
    _1_sendingNeeded_partial = outC->_L1_else_IfBlock1;
    outC->sendingNeeded = _1_sendingNeeded_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void checkIfNeeded_init_manage_TextMessages_Pkg(
  outC_checkIfNeeded_manage_TextMessages_Pkg *outC)
{
  kcg_size idx;

  outC->_L18 = kcg_true;
  outC->_L17.valid = kcg_true;
  outC->_L17.whichMode = M_MODE_Full_Supervision;
  outC->_L17.SH_Req_RefusedByRBC = kcg_true;
  outC->_L17.LevelNeedsAck = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L7 = kcg_true;
  outC->modeChange = kcg_true;
  outC->levelChange = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L1_else_IfBlock1 = kcg_true;
  outC->_L1_then_IfBlock1 = kcg_true;
  for (idx = 0; idx < 31; idx++) {
    outC->_L3_then_IfBlock1[idx].valid = kcg_true;
    outC->_L3_then_IfBlock1[idx].dmi_textMessageID = kcg_lit_int32(0);
    outC->_L3_then_IfBlock1[idx].timeStamp = kcg_lit_int32(0);
    outC->_L3_then_IfBlock1[idx].textReport =
      Q_TEXTREPORT_No_driver_acknowledgement_report_required;
    outC->_L3_then_IfBlock1[idx].context = con_undefined_DMI_Types_Pkg;
    outC->_L3_then_IfBlock1[idx].nid_textmessage = kcg_lit_int32(0);
    outC->_L3_then_IfBlock1[idx].whichLevel = M_LEVEL_Level_0;
    outC->_L3_then_IfBlock1[idx].whichMode = M_MODE_Full_Supervision;
  }
  outC->_L6_then_IfBlock1.valid = kcg_true;
  outC->_L6_then_IfBlock1.dmi_textMessageID = kcg_lit_int32(0);
  outC->_L6_then_IfBlock1.timeStamp = kcg_lit_int32(0);
  outC->_L6_then_IfBlock1.textReport =
    Q_TEXTREPORT_No_driver_acknowledgement_report_required;
  outC->_L6_then_IfBlock1.context = con_undefined_DMI_Types_Pkg;
  outC->_L6_then_IfBlock1.nid_textmessage = kcg_lit_int32(0);
  outC->_L6_then_IfBlock1.whichLevel = M_LEVEL_Level_0;
  outC->_L6_then_IfBlock1.whichMode = M_MODE_Full_Supervision;
  outC->_L8_then_IfBlock1 = kcg_true;
  outC->_L9_then_IfBlock1 = M_LEVEL_Level_0;
  outC->_L10_then_IfBlock1.valid = kcg_true;
  outC->_L10_then_IfBlock1.whichMode = M_MODE_Full_Supervision;
  outC->_L10_then_IfBlock1.SH_Req_RefusedByRBC = kcg_true;
  outC->_L10_then_IfBlock1.LevelNeedsAck = kcg_true;
  outC->sendingNeeded = kcg_true;
  /* IfBlock1:then:_L1=(manage_TextMessages_Pkg::findForCheck#1)/ */
  findForCheck_init_manage_TextMessages_Pkg(&outC->Context_findForCheck_1);
  /* IfBlock1:then:_L6=(manage_TextMessages_Pkg::mapMLtoElement#1)/ */
  mapMLtoElement_init_manage_TextMessages_Pkg(&outC->Context_mapMLtoElement_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void checkIfNeeded_reset_manage_TextMessages_Pkg(
  outC_checkIfNeeded_manage_TextMessages_Pkg *outC)
{
  /* IfBlock1:then:_L1=(manage_TextMessages_Pkg::findForCheck#1)/ */
  findForCheck_reset_manage_TextMessages_Pkg(&outC->Context_findForCheck_1);
  /* IfBlock1:then:_L6=(manage_TextMessages_Pkg::mapMLtoElement#1)/ */
  mapMLtoElement_reset_manage_TextMessages_Pkg(&outC->Context_mapMLtoElement_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** checkIfNeeded_manage_TextMessages_Pkg.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

