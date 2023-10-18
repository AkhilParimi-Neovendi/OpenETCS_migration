/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "setNew_manage_TextMessages_Pkg.h"

/* manage_TextMessages_Pkg::setNew/ */
void setNew_manage_TextMessages_Pkg(
  /* indexMAPwi/ */
  kcg_int64 indexMAPwi,
  /* fromStore/ */
  DMI_TXT_MSG_status_T_DMI_Types_Pkg *fromStore,
  /* actualTextMsg/ */
  DMI_TXT_MSG_status_T_DMI_Types_Pkg *actualTextMsg,
  outC_setNew_manage_TextMessages_Pkg *outC)
{
  /* continue/ */
  static kcg_bool continue_partial;
  /* toStore/ */
  static DMI_TXT_MSG_status_T_DMI_Types_Pkg toStore_partial;
  /* continue/ */
  static kcg_bool _1_continue_partial;
  /* toStore/ */
  static DMI_TXT_MSG_status_T_DMI_Types_Pkg _2_toStore_partial;

  kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(&outC->_L1, fromStore);
  outC->_L2 = outC->_L1.valid;
  outC->_L3 = !outC->_L2;
  outC->takeIt = outC->_L3;
  outC->IfBlock1_clock = outC->takeIt;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L5_then_IfBlock1 = kcg_false;
    continue_partial = outC->_L5_then_IfBlock1;
    outC->_L4_then_IfBlock1 = indexMAPwi;
    kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(
      &outC->_L1_then_IfBlock1,
      actualTextMsg);
    kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(
      &outC->_L2_then_IfBlock1,
      &outC->_L1_then_IfBlock1);
    if (kcg_true) {
      outC->_L2_then_IfBlock1.dmi_textMessageID = outC->_L4_then_IfBlock1;
    }
    kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(
      &toStore_partial,
      &outC->_L2_then_IfBlock1);
    outC->_1_continue = continue_partial;
    kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(&outC->toStore, &toStore_partial);
  }
  else {
    outC->_L2_else_IfBlock1 = kcg_true;
    _1_continue_partial = outC->_L2_else_IfBlock1;
    kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(
      &outC->_L1_else_IfBlock1,
      fromStore);
    kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(
      &_2_toStore_partial,
      &outC->_L1_else_IfBlock1);
    outC->_1_continue = _1_continue_partial;
    kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(
      &outC->toStore,
      &_2_toStore_partial);
  }
}

#ifndef KCG_USER_DEFINED_INIT
void setNew_init_manage_TextMessages_Pkg(
  outC_setNew_manage_TextMessages_Pkg *outC)
{
  outC->_L3 = kcg_true;
  outC->_L2 = kcg_true;
  outC->_L1.valid = kcg_true;
  outC->_L1.dmi_textMessageID = kcg_lit_int64(0);
  outC->_L1.timeStamp = kcg_lit_int64(0);
  outC->_L1.textReport = Q_TEXTREPORT_No_driver_acknowledgement_report_required;
  outC->_L1.context = con_undefined_DMI_Types_Pkg;
  outC->_L1.nid_textmessage = kcg_lit_int64(0);
  outC->_L1.whichLevel = M_LEVEL_Level_0;
  outC->_L1.whichMode = M_MODE_Full_Supervision;
  outC->takeIt = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L1_else_IfBlock1.valid = kcg_true;
  outC->_L1_else_IfBlock1.dmi_textMessageID = kcg_lit_int64(0);
  outC->_L1_else_IfBlock1.timeStamp = kcg_lit_int64(0);
  outC->_L1_else_IfBlock1.textReport =
    Q_TEXTREPORT_No_driver_acknowledgement_report_required;
  outC->_L1_else_IfBlock1.context = con_undefined_DMI_Types_Pkg;
  outC->_L1_else_IfBlock1.nid_textmessage = kcg_lit_int64(0);
  outC->_L1_else_IfBlock1.whichLevel = M_LEVEL_Level_0;
  outC->_L1_else_IfBlock1.whichMode = M_MODE_Full_Supervision;
  outC->_L2_else_IfBlock1 = kcg_true;
  outC->_L1_then_IfBlock1.valid = kcg_true;
  outC->_L1_then_IfBlock1.dmi_textMessageID = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.timeStamp = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.textReport =
    Q_TEXTREPORT_No_driver_acknowledgement_report_required;
  outC->_L1_then_IfBlock1.context = con_undefined_DMI_Types_Pkg;
  outC->_L1_then_IfBlock1.nid_textmessage = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.whichLevel = M_LEVEL_Level_0;
  outC->_L1_then_IfBlock1.whichMode = M_MODE_Full_Supervision;
  outC->_L2_then_IfBlock1.valid = kcg_true;
  outC->_L2_then_IfBlock1.dmi_textMessageID = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.timeStamp = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.textReport =
    Q_TEXTREPORT_No_driver_acknowledgement_report_required;
  outC->_L2_then_IfBlock1.context = con_undefined_DMI_Types_Pkg;
  outC->_L2_then_IfBlock1.nid_textmessage = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.whichLevel = M_LEVEL_Level_0;
  outC->_L2_then_IfBlock1.whichMode = M_MODE_Full_Supervision;
  outC->_L4_then_IfBlock1 = kcg_lit_int64(0);
  outC->_L5_then_IfBlock1 = kcg_true;
  outC->toStore.valid = kcg_true;
  outC->toStore.dmi_textMessageID = kcg_lit_int64(0);
  outC->toStore.timeStamp = kcg_lit_int64(0);
  outC->toStore.textReport =
    Q_TEXTREPORT_No_driver_acknowledgement_report_required;
  outC->toStore.context = con_undefined_DMI_Types_Pkg;
  outC->toStore.nid_textmessage = kcg_lit_int64(0);
  outC->toStore.whichLevel = M_LEVEL_Level_0;
  outC->toStore.whichMode = M_MODE_Full_Supervision;
  outC->_1_continue = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void setNew_reset_manage_TextMessages_Pkg(
  outC_setNew_manage_TextMessages_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** setNew_manage_TextMessages_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

