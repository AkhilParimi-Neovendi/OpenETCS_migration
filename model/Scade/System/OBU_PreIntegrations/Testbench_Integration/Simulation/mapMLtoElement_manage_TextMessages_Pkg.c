/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mapMLtoElement_manage_TextMessages_Pkg.h"

/* manage_TextMessages_Pkg::mapMLtoElement/ */
void mapMLtoElement_manage_TextMessages_Pkg(
  /* inModeLevel_Ack/ */
  T_AcknoledgementRequest_Level_And_Mode_Types_Pkg *inModeLevel_Ack,
  /* announcedLevel/ */
  M_LEVEL announcedLevel,
  outC_mapMLtoElement_manage_TextMessages_Pkg *outC)
{
  outC->_L34 = announcedLevel;
  kcg_copy_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg(
    &outC->_L32,
    inModeLevel_Ack);
  outC->_L33 = outC->_L32.LevelNeedsAck;
  outC->_L16 = outC->_L32.valid;
  outC->_L27 = kcg_lit_int64(0);
  outC->_L28 = Q_TEXTREPORT_No_driver_acknowledgement_report_required;
  outC->_L24 = con_modeChange_DMI_Types_Pkg;
  outC->_L21 = con_levelMgmt_DMI_Types_Pkg;
  /* _L19= */
  if (outC->_L33) {
    outC->_L19 = outC->_L21;
  }
  else {
    outC->_L19 = outC->_L24;
  }
  outC->_L22 = con_undefined_DMI_Types_Pkg;
  outC->_L20 = !outC->_L16;
  /* _L18= */
  if (outC->_L20) {
    outC->_L18 = outC->_L22;
  }
  else {
    outC->_L18 = outC->_L19;
  }
  outC->_L29 = kcg_lit_int64(0);
  outC->_L26 = outC->_L32.whichMode;
  outC->_L14.valid = outC->_L16;
  outC->_L14.dmi_textMessageID = outC->_L27;
  outC->_L14.timeStamp = outC->_L27;
  outC->_L14.textReport = outC->_L28;
  outC->_L14.context = outC->_L18;
  outC->_L14.nid_textmessage = outC->_L29;
  outC->_L14.whichLevel = outC->_L34;
  outC->_L14.whichMode = outC->_L26;
  kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(
    &outC->outDerivedElement,
    &outC->_L14);
}

#ifndef KCG_USER_DEFINED_INIT
void mapMLtoElement_init_manage_TextMessages_Pkg(
  outC_mapMLtoElement_manage_TextMessages_Pkg *outC)
{
  outC->_L34 = M_LEVEL_Level_0;
  outC->_L33 = kcg_true;
  outC->_L32.valid = kcg_true;
  outC->_L32.whichMode = M_MODE_Full_Supervision;
  outC->_L32.SH_Req_RefusedByRBC = kcg_true;
  outC->_L32.LevelNeedsAck = kcg_true;
  outC->_L29 = kcg_lit_int64(0);
  outC->_L28 = Q_TEXTREPORT_No_driver_acknowledgement_report_required;
  outC->_L27 = kcg_lit_int64(0);
  outC->_L26 = M_MODE_Full_Supervision;
  outC->_L24 = con_undefined_DMI_Types_Pkg;
  outC->_L22 = con_undefined_DMI_Types_Pkg;
  outC->_L21 = con_undefined_DMI_Types_Pkg;
  outC->_L20 = kcg_true;
  outC->_L19 = con_undefined_DMI_Types_Pkg;
  outC->_L18 = con_undefined_DMI_Types_Pkg;
  outC->_L16 = kcg_true;
  outC->_L14.valid = kcg_true;
  outC->_L14.dmi_textMessageID = kcg_lit_int64(0);
  outC->_L14.timeStamp = kcg_lit_int64(0);
  outC->_L14.textReport = Q_TEXTREPORT_No_driver_acknowledgement_report_required;
  outC->_L14.context = con_undefined_DMI_Types_Pkg;
  outC->_L14.nid_textmessage = kcg_lit_int64(0);
  outC->_L14.whichLevel = M_LEVEL_Level_0;
  outC->_L14.whichMode = M_MODE_Full_Supervision;
  outC->outDerivedElement.valid = kcg_true;
  outC->outDerivedElement.dmi_textMessageID = kcg_lit_int64(0);
  outC->outDerivedElement.timeStamp = kcg_lit_int64(0);
  outC->outDerivedElement.textReport =
    Q_TEXTREPORT_No_driver_acknowledgement_report_required;
  outC->outDerivedElement.context = con_undefined_DMI_Types_Pkg;
  outC->outDerivedElement.nid_textmessage = kcg_lit_int64(0);
  outC->outDerivedElement.whichLevel = M_LEVEL_Level_0;
  outC->outDerivedElement.whichMode = M_MODE_Full_Supervision;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void mapMLtoElement_reset_manage_TextMessages_Pkg(
  outC_mapMLtoElement_manage_TextMessages_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** mapMLtoElement_manage_TextMessages_Pkg.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

