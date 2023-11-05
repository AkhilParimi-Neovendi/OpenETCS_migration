/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckAckOrNot_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::CheckAckOrNot/ */
void CheckAckOrNot_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_text_message/ */
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *DMI_text_message,
  outC_CheckAckOrNot_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  outC->_L19 =
    Q_TEXTCONFIRM_Confirmation_required_command_application_of_the_emergency_brake_when_display_end_condition_is_fulfilled_unless_the_text_has_already_been_acknowledged_by_the_driver;
  outC->askMsg2 = outC->_L19;
  outC->_L21 = outC->askMsg2;
  kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L4,
    DMI_text_message);
  outC->_L7 = outC->_L4.q_textConfirm;
  outC->_L25 = outC->_L7 == outC->_L21;
  outC->_L13 = Q_TEXTCONFIRM_Confirmation_required;
  outC->_L24 = outC->_L7 == outC->_L13;
  outC->_L18 =
    Q_TEXTCONFIRM_Confirmation_required_command_application_of_the_service_brake_when_display_end_condition_is_fulfilled_unless_the_text_has_already_been_acknowledged_by_the_driver;
  outC->ackMsg1 = outC->_L18;
  outC->_L20 = outC->ackMsg1;
  outC->_L23 = outC->_L7 == outC->_L20;
  outC->_L27 = outC->_L23 | outC->_L24 | outC->_L25;
  outC->_L2 = kcg_true;
  outC->_L17 = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L16 = outC->_L7 == outC->_L17;
  outC->_L12 = Q_TEXTCLASS_Important_Information;
  outC->_L8 = outC->_L4.q_textClass;
  outC->_L3 = outC->_L8 == outC->_L12;
  outC->_L5 = outC->_L4.valid;
  outC->_L14 = outC->_L5 == outC->_L2;
  outC->_L15 = outC->_L14 & outC->_L16 & outC->_L3;
  outC->_L1 = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L6 = outC->_L8 == outC->_L1;
  outC->_L10 = outC->_L14 & outC->_L16 & outC->_L6;
  outC->Output2 = outC->_L10;
  outC->_L9 = outC->_L14 & outC->_L27;
  outC->Output1 = outC->_L9;
  outC->Output3 = outC->_L15;
}

#ifndef KCG_USER_DEFINED_INIT
void CheckAckOrNot_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_CheckAckOrNot_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static kcg_size idx;

  outC->_L27 = kcg_true;
  outC->_L25 = kcg_true;
  outC->_L24 = kcg_true;
  outC->_L23 = kcg_true;
  outC->_L2 = kcg_true;
  outC->_L21 = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L20 = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L19 = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L18 = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L1 = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L3 = kcg_true;
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
  outC->_L5 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L7 = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L8 = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L9 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L12 = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L13 = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L14 = kcg_true;
  outC->_L15 = kcg_true;
  outC->_L16 = kcg_true;
  outC->_L17 = Q_TEXTCONFIRM_No_confirmation_required;
  outC->askMsg2 = Q_TEXTCONFIRM_No_confirmation_required;
  outC->ackMsg1 = Q_TEXTCONFIRM_No_confirmation_required;
  outC->Output3 = kcg_true;
  outC->Output2 = kcg_true;
  outC->Output1 = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


void CheckAckOrNot_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_CheckAckOrNot_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CheckAckOrNot_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

