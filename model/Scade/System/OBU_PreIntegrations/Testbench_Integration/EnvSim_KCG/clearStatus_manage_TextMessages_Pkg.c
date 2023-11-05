/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "clearStatus_manage_TextMessages_Pkg.h"

/* manage_TextMessages_Pkg::clearStatus/ */
void clearStatus_manage_TextMessages_Pkg(
  /* inStatusList/ */
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg *inStatusList,
  /* inMessageID/ */
  DMI_TextMessage_ID_T_DMI_Types_Pkg inMessageID,
  outC_clearStatus_manage_TextMessages_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(
    &outC->_L10,
    (DMI_TXT_MSG_status_T_DMI_Types_Pkg *) &cFreeTestStatusElement_DMI_Types_Pkg);
  kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(&outC->_L6, inStatusList);
  outC->_L7 = inMessageID;
  /* _L9/ */
  for (idx = 0; idx < 31; idx++) {
    outC->_L9[idx] = outC->_L7;
  }
  outC->_L4 = kcg_true;
  /* _L3= */
  if (outC->_L4) {
    /* _L3= */
    for (idx1 = 0; idx1 < 31; idx1++) {
      /* _L3=(manage_TextMessages_Pkg::deleteElement#1)/ */
      deleteElement_manage_TextMessages_Pkg(
        /* _L3= */(kcg_int32) idx1,
        &outC->_L6[idx1],
        outC->_L9[idx1],
        &outC->Context_deleteElement_1[idx1]);
      kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(
        &outC->_L5[idx1],
        &outC->Context_deleteElement_1[idx1].toStore);
      outC->_L3 = /* _L3= */(kcg_int32) (idx1 + 1);
      /* _L3= */
      if (!outC->Context_deleteElement_1[idx1]._1_continue) {
        break;
      }
    }
  }
  else {
    outC->_L3 = kcg_lit_int32(0);
  }
#ifdef KCG_MAPW_CPY

  /* _L3= */
  for (idx1 = /* _L3= */(kcg_size) outC->_L3; idx1 < 31; idx1++) {
    kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(&outC->_L5[idx1], &outC->_L10);
  }
#endif /* KCG_MAPW_CPY */

  outC->outIndex = outC->_L3;
  kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
    &outC->outStatusList,
    &outC->_L5);
}

#ifndef KCG_USER_DEFINED_INIT
void clearStatus_init_manage_TextMessages_Pkg(
  outC_clearStatus_manage_TextMessages_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;

  outC->_L10.valid = kcg_true;
  outC->_L10.dmi_textMessageID = kcg_lit_int32(0);
  outC->_L10.timeStamp = kcg_lit_int32(0);
  outC->_L10.textReport = Q_TEXTREPORT_No_driver_acknowledgement_report_required;
  outC->_L10.context = con_undefined_DMI_Types_Pkg;
  outC->_L10.nid_textmessage = kcg_lit_int32(0);
  outC->_L10.whichLevel = M_LEVEL_Level_0;
  outC->_L10.whichMode = M_MODE_Full_Supervision;
  for (idx1 = 0; idx1 < 31; idx1++) {
    outC->_L9[idx1] = kcg_lit_int32(0);
  }
  outC->_L7 = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 31; idx2++) {
    outC->_L6[idx2].valid = kcg_true;
    outC->_L6[idx2].dmi_textMessageID = kcg_lit_int32(0);
    outC->_L6[idx2].timeStamp = kcg_lit_int32(0);
    outC->_L6[idx2].textReport =
      Q_TEXTREPORT_No_driver_acknowledgement_report_required;
    outC->_L6[idx2].context = con_undefined_DMI_Types_Pkg;
    outC->_L6[idx2].nid_textmessage = kcg_lit_int32(0);
    outC->_L6[idx2].whichLevel = M_LEVEL_Level_0;
    outC->_L6[idx2].whichMode = M_MODE_Full_Supervision;
  }
  for (idx3 = 0; idx3 < 31; idx3++) {
    outC->_L5[idx3].valid = kcg_true;
    outC->_L5[idx3].dmi_textMessageID = kcg_lit_int32(0);
    outC->_L5[idx3].timeStamp = kcg_lit_int32(0);
    outC->_L5[idx3].textReport =
      Q_TEXTREPORT_No_driver_acknowledgement_report_required;
    outC->_L5[idx3].context = con_undefined_DMI_Types_Pkg;
    outC->_L5[idx3].nid_textmessage = kcg_lit_int32(0);
    outC->_L5[idx3].whichLevel = M_LEVEL_Level_0;
    outC->_L5[idx3].whichMode = M_MODE_Full_Supervision;
  }
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_lit_int32(0);
  outC->outIndex = kcg_lit_int32(0);
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
  for (idx = 0; idx < 31; idx++) {
    /* _L3=(manage_TextMessages_Pkg::deleteElement#1)/ */
    deleteElement_init_manage_TextMessages_Pkg(
      &outC->Context_deleteElement_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void clearStatus_reset_manage_TextMessages_Pkg(
  outC_clearStatus_manage_TextMessages_Pkg *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 31; idx++) {
    /* _L3=(manage_TextMessages_Pkg::deleteElement#1)/ */
    deleteElement_reset_manage_TextMessages_Pkg(
      &outC->Context_deleteElement_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** clearStatus_manage_TextMessages_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

