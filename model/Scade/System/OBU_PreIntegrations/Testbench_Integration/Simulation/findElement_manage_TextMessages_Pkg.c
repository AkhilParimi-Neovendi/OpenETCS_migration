/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "findElement_manage_TextMessages_Pkg.h"

/* manage_TextMessages_Pkg::findElement/ */
void findElement_manage_TextMessages_Pkg(
  /* accu/ */
  kcg_bool accu,
  /* fromStore/ */
  DMI_TXT_MSG_status_T_DMI_Types_Pkg *fromStore,
  /* newRequest/ */
  DMI_TXT_MSG_status_T_DMI_Types_Pkg *newRequest,
  outC_findElement_manage_TextMessages_Pkg *outC)
{
  outC->_L24 = accu;
  kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(&outC->_L8, newRequest);
  outC->_L16 = outC->_L8.whichMode;
  kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(&outC->_L1, fromStore);
  outC->_L15 = outC->_L1.whichMode;
  outC->_L20 = outC->_L15 == outC->_L16;
  outC->_L21 = con_modeChange_DMI_Types_Pkg;
  outC->_L14 = outC->_L1.context;
  outC->_L19 = outC->_L14 == outC->_L21;
  outC->_L17 = outC->_L1.valid;
  outC->_L18 = outC->_L17 & outC->_L19 & outC->_L20;
  outC->_L9 = outC->_L8.whichLevel;
  outC->_L3 = outC->_L1.whichLevel;
  outC->_L6 = outC->_L3 == outC->_L9;
  outC->_L12 = con_levelMgmt_DMI_Types_Pkg;
  outC->_L10 = outC->_L1.context;
  outC->_L11 = outC->_L10 == outC->_L12;
  outC->_L2 = outC->_L1.valid;
  outC->_L13 = outC->_L2 & outC->_L11 & outC->_L6;
  outC->_L22 = outC->_L13 | outC->_L18 | outC->_L24;
  outC->result = outC->_L22;
}

#ifndef KCG_USER_DEFINED_INIT
void findElement_init_manage_TextMessages_Pkg(
  outC_findElement_manage_TextMessages_Pkg *outC)
{
  outC->_L24 = kcg_true;
  outC->_L22 = kcg_true;
  outC->_L21 = con_undefined_DMI_Types_Pkg;
  outC->_L14 = con_undefined_DMI_Types_Pkg;
  outC->_L15 = M_MODE_Full_Supervision;
  outC->_L16 = M_MODE_Full_Supervision;
  outC->_L17 = kcg_true;
  outC->_L18 = kcg_true;
  outC->_L19 = kcg_true;
  outC->_L20 = kcg_true;
  outC->_L13 = kcg_true;
  outC->_L12 = con_undefined_DMI_Types_Pkg;
  outC->_L11 = kcg_true;
  outC->_L10 = con_undefined_DMI_Types_Pkg;
  outC->_L9 = M_LEVEL_Level_0;
  outC->_L8.valid = kcg_true;
  outC->_L8.dmi_textMessageID = kcg_lit_int64(0);
  outC->_L8.timeStamp = kcg_lit_int64(0);
  outC->_L8.textReport = Q_TEXTREPORT_No_driver_acknowledgement_report_required;
  outC->_L8.context = con_undefined_DMI_Types_Pkg;
  outC->_L8.nid_textmessage = kcg_lit_int64(0);
  outC->_L8.whichLevel = M_LEVEL_Level_0;
  outC->_L8.whichMode = M_MODE_Full_Supervision;
  outC->_L6 = kcg_true;
  outC->_L3 = M_LEVEL_Level_0;
  outC->_L2 = kcg_true;
  outC->_L1.valid = kcg_true;
  outC->_L1.dmi_textMessageID = kcg_lit_int64(0);
  outC->_L1.timeStamp = kcg_lit_int64(0);
  outC->_L1.textReport = Q_TEXTREPORT_No_driver_acknowledgement_report_required;
  outC->_L1.context = con_undefined_DMI_Types_Pkg;
  outC->_L1.nid_textmessage = kcg_lit_int64(0);
  outC->_L1.whichLevel = M_LEVEL_Level_0;
  outC->_L1.whichMode = M_MODE_Full_Supervision;
  outC->result = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void findElement_reset_manage_TextMessages_Pkg(
  outC_findElement_manage_TextMessages_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** findElement_manage_TextMessages_Pkg.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

