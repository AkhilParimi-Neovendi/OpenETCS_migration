/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "findForCheck_manage_TextMessages_Pkg.h"

/* manage_TextMessages_Pkg::findForCheck/ */
void findForCheck_manage_TextMessages_Pkg(
  /* inStatusList/ */
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg *inStatusList,
  /* inCompareElement/ */
  DMI_TXT_MSG_status_T_DMI_Types_Pkg *inCompareElement,
  outC_findForCheck_manage_TextMessages_Pkg *outC)
{
  static kcg_size idx;
  static kcg_bool acc;
  static kcg_size idx1;

  outC->_L13 = kcg_false;
  kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(&outC->_L6, inStatusList);
  kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(&outC->_L11, inCompareElement);
  /* _L9/ */
  for (idx = 0; idx < 31; idx++) {
    kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(&outC->_L9[idx], &outC->_L11);
  }
  outC->_L12 = outC->_L13;
  /* _L12= */
  for (idx1 = 0; idx1 < 31; idx1++) {
    acc = outC->_L12;
    /* _L12=(manage_TextMessages_Pkg::findElement#1)/ */
    findElement_manage_TextMessages_Pkg(
      acc,
      &outC->_L6[idx1],
      &outC->_L9[idx1],
      &outC->Context_findElement_1[idx1]);
    outC->_L12 = outC->Context_findElement_1[idx1].result;
  }
  outC->outFound = outC->_L12;
}

#ifndef KCG_USER_DEFINED_INIT
void findForCheck_init_manage_TextMessages_Pkg(
  outC_findForCheck_manage_TextMessages_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;

  outC->_L13 = kcg_true;
  outC->_L12 = kcg_true;
  outC->_L11.valid = kcg_true;
  outC->_L11.dmi_textMessageID = kcg_lit_int32(0);
  outC->_L11.timeStamp = kcg_lit_int32(0);
  outC->_L11.textReport = Q_TEXTREPORT_No_driver_acknowledgement_report_required;
  outC->_L11.context = con_undefined_DMI_Types_Pkg;
  outC->_L11.nid_textmessage = kcg_lit_int32(0);
  outC->_L11.whichLevel = M_LEVEL_Level_0;
  outC->_L11.whichMode = M_MODE_Full_Supervision;
  for (idx1 = 0; idx1 < 31; idx1++) {
    outC->_L9[idx1].valid = kcg_true;
    outC->_L9[idx1].dmi_textMessageID = kcg_lit_int32(0);
    outC->_L9[idx1].timeStamp = kcg_lit_int32(0);
    outC->_L9[idx1].textReport =
      Q_TEXTREPORT_No_driver_acknowledgement_report_required;
    outC->_L9[idx1].context = con_undefined_DMI_Types_Pkg;
    outC->_L9[idx1].nid_textmessage = kcg_lit_int32(0);
    outC->_L9[idx1].whichLevel = M_LEVEL_Level_0;
    outC->_L9[idx1].whichMode = M_MODE_Full_Supervision;
  }
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
  outC->outFound = kcg_true;
  for (idx = 0; idx < 31; idx++) {
    /* _L12=(manage_TextMessages_Pkg::findElement#1)/ */
    findElement_init_manage_TextMessages_Pkg(&outC->Context_findElement_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void findForCheck_reset_manage_TextMessages_Pkg(
  outC_findForCheck_manage_TextMessages_Pkg *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 31; idx++) {
    /* _L12=(manage_TextMessages_Pkg::findElement#1)/ */
    findElement_reset_manage_TextMessages_Pkg(
      &outC->Context_findElement_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** findForCheck_manage_TextMessages_Pkg.c
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

