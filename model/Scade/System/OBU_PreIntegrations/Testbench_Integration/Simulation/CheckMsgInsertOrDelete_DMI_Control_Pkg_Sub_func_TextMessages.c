/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckMsgInsertOrDelete_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::CheckMsgInsertOrDelete/ */
void CheckMsgInsertOrDelete_DMI_Control_Pkg_Sub_func_TextMessages(
  /* msg/ */
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *msg,
  /* isImportant/ */
  kcg_bool isImportant,
  outC_CheckMsgInsertOrDelete_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  outC->_L5 = isImportant;
  kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(&outC->_L2, msg);
  outC->_L3 = outC->_L2.valid;
  outC->_L7 = outC->_L3 & outC->_L5;
  outC->_L6 = !outC->_L5;
  outC->_L4 = outC->_L3 & outC->_L6;
  outC->insertImp = outC->_L7;
  outC->insertAuxi = outC->_L4;
  outC->insert = outC->_L3;
}

#ifndef KCG_USER_DEFINED_INIT
void CheckMsgInsertOrDelete_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_CheckMsgInsertOrDelete_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static kcg_size idx;

  outC->_L7 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_true;
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
  outC->insertImp = kcg_true;
  outC->insertAuxi = kcg_true;
  outC->insert = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


void CheckMsgInsertOrDelete_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_CheckMsgInsertOrDelete_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CheckMsgInsertOrDelete_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

