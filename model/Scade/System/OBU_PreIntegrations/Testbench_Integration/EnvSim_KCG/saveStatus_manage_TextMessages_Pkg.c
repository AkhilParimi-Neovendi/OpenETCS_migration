/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "saveStatus_manage_TextMessages_Pkg.h"

/* manage_TextMessages_Pkg::saveStatus/ */
void saveStatus_manage_TextMessages_Pkg(
  /* inStatusList/ */
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg *inStatusList,
  /* inStatusElement/ */
  DMI_TXT_MSG_status_T_DMI_Types_Pkg *inStatusElement,
  outC_saveStatus_manage_TextMessages_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_int64 noname;

  kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(&outC->_L1, inStatusList);
  kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(&outC->_L2, inStatusElement);
  /* _L6/ */
  for (idx = 0; idx < 31; idx++) {
    kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(&outC->_L6[idx], &outC->_L2);
  }
  kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(
    &outC->_L9,
    (DMI_TXT_MSG_status_T_DMI_Types_Pkg *) &cFreeTestStatusElement_DMI_Types_Pkg);
  outC->_L8 = kcg_true;
  /* _L5= */
  if (outC->_L8) {
    /* _L5= */
    for (idx1 = 0; idx1 < 31; idx1++) {
      /* _L5=(manage_TextMessages_Pkg::setNew#1)/ */
      setNew_manage_TextMessages_Pkg(
        /* _L5= */(kcg_int64) idx1,
        &outC->_L1[idx1],
        &outC->_L6[idx1],
        &outC->Context_setNew_1[idx1]);
      kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(
        &outC->_L4[idx1],
        &outC->Context_setNew_1[idx1].toStore);
      outC->_L5 = /* _L5= */(kcg_int64) (idx1 + 1);
      /* _L5= */
      if (!outC->Context_setNew_1[idx1]._1_continue) {
        break;
      }
    }
  }
  else {
    outC->_L5 = kcg_lit_int64(0);
  }
#ifdef KCG_MAPW_CPY

  /* _L5= */
  for (idx1 = /* _L5= */(kcg_size) outC->_L5; idx1 < 31; idx1++) {
    kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(&outC->_L4[idx1], &outC->_L9);
  }
#endif /* KCG_MAPW_CPY */

  noname = outC->_L5;
  kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
    &outC->outStatusList,
    &outC->_L4);
}

#ifndef KCG_USER_DEFINED_INIT
void saveStatus_init_manage_TextMessages_Pkg(
  outC_saveStatus_manage_TextMessages_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;

  outC->_L9.valid = kcg_true;
  outC->_L9.dmi_textMessageID = kcg_lit_int64(0);
  outC->_L9.timeStamp = kcg_lit_int64(0);
  outC->_L9.textReport = Q_TEXTREPORT_No_driver_acknowledgement_report_required;
  outC->_L9.context = con_undefined_DMI_Types_Pkg;
  outC->_L9.nid_textmessage = kcg_lit_int64(0);
  outC->_L9.whichLevel = M_LEVEL_Level_0;
  outC->_L9.whichMode = M_MODE_Full_Supervision;
  outC->_L8 = kcg_true;
  for (idx1 = 0; idx1 < 31; idx1++) {
    outC->_L6[idx1].valid = kcg_true;
    outC->_L6[idx1].dmi_textMessageID = kcg_lit_int64(0);
    outC->_L6[idx1].timeStamp = kcg_lit_int64(0);
    outC->_L6[idx1].textReport =
      Q_TEXTREPORT_No_driver_acknowledgement_report_required;
    outC->_L6[idx1].context = con_undefined_DMI_Types_Pkg;
    outC->_L6[idx1].nid_textmessage = kcg_lit_int64(0);
    outC->_L6[idx1].whichLevel = M_LEVEL_Level_0;
    outC->_L6[idx1].whichMode = M_MODE_Full_Supervision;
  }
  outC->_L5 = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 31; idx2++) {
    outC->_L4[idx2].valid = kcg_true;
    outC->_L4[idx2].dmi_textMessageID = kcg_lit_int64(0);
    outC->_L4[idx2].timeStamp = kcg_lit_int64(0);
    outC->_L4[idx2].textReport =
      Q_TEXTREPORT_No_driver_acknowledgement_report_required;
    outC->_L4[idx2].context = con_undefined_DMI_Types_Pkg;
    outC->_L4[idx2].nid_textmessage = kcg_lit_int64(0);
    outC->_L4[idx2].whichLevel = M_LEVEL_Level_0;
    outC->_L4[idx2].whichMode = M_MODE_Full_Supervision;
  }
  outC->_L2.valid = kcg_true;
  outC->_L2.dmi_textMessageID = kcg_lit_int64(0);
  outC->_L2.timeStamp = kcg_lit_int64(0);
  outC->_L2.textReport = Q_TEXTREPORT_No_driver_acknowledgement_report_required;
  outC->_L2.context = con_undefined_DMI_Types_Pkg;
  outC->_L2.nid_textmessage = kcg_lit_int64(0);
  outC->_L2.whichLevel = M_LEVEL_Level_0;
  outC->_L2.whichMode = M_MODE_Full_Supervision;
  for (idx3 = 0; idx3 < 31; idx3++) {
    outC->_L1[idx3].valid = kcg_true;
    outC->_L1[idx3].dmi_textMessageID = kcg_lit_int64(0);
    outC->_L1[idx3].timeStamp = kcg_lit_int64(0);
    outC->_L1[idx3].textReport =
      Q_TEXTREPORT_No_driver_acknowledgement_report_required;
    outC->_L1[idx3].context = con_undefined_DMI_Types_Pkg;
    outC->_L1[idx3].nid_textmessage = kcg_lit_int64(0);
    outC->_L1[idx3].whichLevel = M_LEVEL_Level_0;
    outC->_L1[idx3].whichMode = M_MODE_Full_Supervision;
  }
  for (idx4 = 0; idx4 < 31; idx4++) {
    outC->outStatusList[idx4].valid = kcg_true;
    outC->outStatusList[idx4].dmi_textMessageID = kcg_lit_int64(0);
    outC->outStatusList[idx4].timeStamp = kcg_lit_int64(0);
    outC->outStatusList[idx4].textReport =
      Q_TEXTREPORT_No_driver_acknowledgement_report_required;
    outC->outStatusList[idx4].context = con_undefined_DMI_Types_Pkg;
    outC->outStatusList[idx4].nid_textmessage = kcg_lit_int64(0);
    outC->outStatusList[idx4].whichLevel = M_LEVEL_Level_0;
    outC->outStatusList[idx4].whichMode = M_MODE_Full_Supervision;
  }
  for (idx = 0; idx < 31; idx++) {
    /* _L5=(manage_TextMessages_Pkg::setNew#1)/ */
    setNew_init_manage_TextMessages_Pkg(&outC->Context_setNew_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void saveStatus_reset_manage_TextMessages_Pkg(
  outC_saveStatus_manage_TextMessages_Pkg *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 31; idx++) {
    /* _L5=(manage_TextMessages_Pkg::setNew#1)/ */
    setNew_reset_manage_TextMessages_Pkg(&outC->Context_setNew_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** saveStatus_manage_TextMessages_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

