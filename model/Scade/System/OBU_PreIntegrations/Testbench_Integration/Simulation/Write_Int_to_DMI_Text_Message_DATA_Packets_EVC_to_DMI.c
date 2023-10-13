/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_Int_to_DMI_Text_Message_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::Write_Int_to_DMI_Text_Message/ */
void Write_Int_to_DMI_Text_Message_DATA_Packets_EVC_to_DMI(
  /* dmi_text_message_int/ */
  DMI_Text_Message_int_array_T_DATA *dmi_text_message_int,
  outC_Write_Int_to_DMI_Text_Message_DATA_Packets_EVC_to_DMI *outC)
{
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg op_call;

  kcg_copy_DMI_Text_Message_int_array_T_DATA(&outC->_L20, dmi_text_message_int);
  outC->_L39 = outC->_L20[0];
  outC->_L37 = kcg_lit_int64(1);
  outC->_L38 = outC->_L37 == outC->_L39;
  outC->every = outC->_L38;
  if (outC->every) {
    /* _L36=(DATA::Packets::EVC_to_DMI::CAST_Int_to_DMI_Text_Message1#1)/ */
    CAST_Int_to_DMI_Text_Message1_DATA_Packets_EVC_to_DMI(
      &outC->_L20,
      &outC->Context_CAST_Int_to_DMI_Text_Message1_1);
    kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
      &op_call,
      &outC->Context_CAST_Int_to_DMI_Text_Message1_1.dmi_text_message_ct);
  }
  kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L40,
    (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
      &cDMI_Text_Message_DATA_Packets_EVC_to_DMI);
  if (outC->every) {
    kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(&outC->_L36, &op_call);
  }
  else {
    kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->_L36,
      &outC->_L40);
  }
  kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->dmi_text_message_ct,
    &outC->_L36);
}

#ifndef KCG_USER_DEFINED_INIT
void Write_Int_to_DMI_Text_Message_init_DATA_Packets_EVC_to_DMI(
  outC_Write_Int_to_DMI_Text_Message_DATA_Packets_EVC_to_DMI *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;

  outC->_L40.valid = kcg_true;
  outC->_L40.system_clock = kcg_lit_int64(0);
  outC->_L40.textMessage_ID = kcg_lit_int64(0);
  outC->_L40.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L40.l_text = kcg_lit_int64(0);
  for (idx = 0; idx < 255; idx++) {
    outC->_L40.x_text[idx] = ' ';
  }
  outC->_L40.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L40.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L37 = kcg_lit_int64(0);
  outC->_L38 = kcg_true;
  outC->_L39 = kcg_lit_int64(0);
  outC->_L36.valid = kcg_true;
  outC->_L36.system_clock = kcg_lit_int64(0);
  outC->_L36.textMessage_ID = kcg_lit_int64(0);
  outC->_L36.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L36.l_text = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 255; idx1++) {
    outC->_L36.x_text[idx1] = ' ';
  }
  outC->_L36.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L36.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  for (idx2 = 0; idx2 < 262; idx2++) {
    outC->_L20[idx2] = kcg_lit_int64(0);
  }
  outC->every = kcg_true;
  outC->dmi_text_message_ct.valid = kcg_true;
  outC->dmi_text_message_ct.system_clock = kcg_lit_int64(0);
  outC->dmi_text_message_ct.textMessage_ID = kcg_lit_int64(0);
  outC->dmi_text_message_ct.q_text = balise_read_error_DMI_Types_Pkg;
  outC->dmi_text_message_ct.l_text = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 255; idx3++) {
    outC->dmi_text_message_ct.x_text[idx3] = ' ';
  }
  outC->dmi_text_message_ct.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->dmi_text_message_ct.q_textConfirm =
    Q_TEXTCONFIRM_No_confirmation_required;
  /* _L36=(DATA::Packets::EVC_to_DMI::CAST_Int_to_DMI_Text_Message1#1)/ */
  CAST_Int_to_DMI_Text_Message1_init_DATA_Packets_EVC_to_DMI(
    &outC->Context_CAST_Int_to_DMI_Text_Message1_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Write_Int_to_DMI_Text_Message_reset_DATA_Packets_EVC_to_DMI(
  outC_Write_Int_to_DMI_Text_Message_DATA_Packets_EVC_to_DMI *outC)
{
  /* _L36=(DATA::Packets::EVC_to_DMI::CAST_Int_to_DMI_Text_Message1#1)/ */
  CAST_Int_to_DMI_Text_Message1_reset_DATA_Packets_EVC_to_DMI(
    &outC->Context_CAST_Int_to_DMI_Text_Message1_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_Int_to_DMI_Text_Message_DATA_Packets_EVC_to_DMI.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

