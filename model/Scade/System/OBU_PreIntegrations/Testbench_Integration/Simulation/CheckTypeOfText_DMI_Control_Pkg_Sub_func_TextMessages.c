/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckTypeOfText_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::CheckTypeOfText/ */
void CheckTypeOfText_DMI_Control_Pkg_Sub_func_TextMessages(
  /* Queue/ */
  _82_array *Queue,
  outC_CheckTypeOfText_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  outC->_L8 = kcg_lit_int32(0);
  kcg_copy__82_array(&outC->_L1, Queue);
  kcg_copy_MsgStructure(&outC->_L2, &outC->_L1[0]);
  kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L4,
    &outC->_L2.dmi_msg);
  outC->_L6 = outC->_L4.l_text;
  outC->_L7 = outC->_L6 == outC->_L8;
  outC->_L11 = !outC->_L7;
  outC->_L5 = outC->_L4.valid;
  outC->_L3 = outC->_L2.present;
  outC->_L10 = outC->_L3 & outC->_L5 & outC->_L11;
  outC->_L9 = outC->_L3 & outC->_L5 & outC->_L7;
  outC->Output1 = outC->_L9;
  outC->Output2 = outC->_L10;
}

#ifndef KCG_USER_DEFINED_INIT
void CheckTypeOfText_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_CheckTypeOfText_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;

  outC->_L11 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L8 = kcg_lit_int32(0);
  outC->_L7 = kcg_true;
  outC->_L6 = kcg_lit_int32(0);
  outC->_L5 = kcg_true;
  outC->_L4.valid = kcg_true;
  outC->_L4.system_clock = kcg_lit_int32(0);
  outC->_L4.textMessage_ID = kcg_lit_int32(0);
  outC->_L4.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L4.l_text = kcg_lit_int32(0);
  for (idx = 0; idx < 255; idx++) {
    outC->_L4.x_text[idx] = ' ';
  }
  outC->_L4.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L4.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L3 = kcg_true;
  outC->_L2.present = kcg_true;
  outC->_L2.dmi_msg.valid = kcg_true;
  outC->_L2.dmi_msg.system_clock = kcg_lit_int32(0);
  outC->_L2.dmi_msg.textMessage_ID = kcg_lit_int32(0);
  outC->_L2.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L2.dmi_msg.l_text = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 255; idx1++) {
    outC->_L2.dmi_msg.x_text[idx1] = ' ';
  }
  outC->_L2.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L2.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->_L1[idx3].present = kcg_true;
    outC->_L1[idx3].dmi_msg.valid = kcg_true;
    outC->_L1[idx3].dmi_msg.system_clock = kcg_lit_int32(0);
    outC->_L1[idx3].dmi_msg.textMessage_ID = kcg_lit_int32(0);
    outC->_L1[idx3].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L1[idx3].dmi_msg.l_text = kcg_lit_int32(0);
    for (idx2 = 0; idx2 < 255; idx2++) {
      outC->_L1[idx3].dmi_msg.x_text[idx2] = ' ';
    }
    outC->_L1[idx3].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L1[idx3].dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->Output2 = kcg_true;
  outC->Output1 = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


void CheckTypeOfText_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_CheckTypeOfText_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CheckTypeOfText_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

