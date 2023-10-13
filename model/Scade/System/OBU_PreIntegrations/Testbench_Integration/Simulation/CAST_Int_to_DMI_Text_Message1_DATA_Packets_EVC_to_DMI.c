/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_DMI_Text_Message1_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_Int_to_DMI_Text_Message1/ */
void CAST_Int_to_DMI_Text_Message1_DATA_Packets_EVC_to_DMI(
  /* dmi_text_message_int/ */
  DMI_Text_Message_int_array_T_DATA *dmi_text_message_int,
  outC_CAST_Int_to_DMI_Text_Message1_DATA_Packets_EVC_to_DMI *outC)
{
  kcg_copy_DMI_Text_Message_int_array_T_DATA(&outC->_L20, dmi_text_message_int);
  kcg_copy_DMI_TEXT_INT_Array_T_DATA(
    &outC->_L30,
    (DMI_TEXT_INT_Array_T_DATA *) &outC->_L20[5]);
  /* _L35=(DATA::Variables::CAST_int_to_DMI_TEXT#1)/ */
  CAST_int_to_DMI_TEXT_DATA_Variables(
    &outC->_L30,
    &outC->Context_CAST_int_to_DMI_TEXT_1);
  kcg_copy_DMI_TEXT_DMI_Types_Pkg(
    &outC->_L35,
    &outC->Context_CAST_int_to_DMI_TEXT_1.dmi_text_string_out);
  outC->_L32 = outC->_L20[261];
  /* _L34=(TM_conversions::CAST_Int_to_Q_TEXTCONFIRM#1)/ */
  CAST_Int_to_Q_TEXTCONFIRM_TM_conversions(
    outC->_L32,
    &outC->Context_CAST_Int_to_Q_TEXTCONFIRM_1);
  outC->_L34 = outC->Context_CAST_Int_to_Q_TEXTCONFIRM_1.q_textconfirm;
  outC->_L31 = outC->_L20[260];
  /* _L33=(TM_conversions::CAST_Int_to_Q_TEXTCLASS#1)/ */
  CAST_Int_to_Q_TEXTCLASS_TM_conversions(
    outC->_L31,
    &outC->Context_CAST_Int_to_Q_TEXTCLASS_1);
  outC->_L33 = outC->Context_CAST_Int_to_Q_TEXTCLASS_1.q_textclass;
  kcg_copy_array_int64_5(&outC->_L21, (array_int64_5 *) &outC->_L20[0]);
  outC->_L23 = outC->_L21[3];
  /* _L29=(DATA::Variables::CAST_int_to_DMI_Q_TEXT#1)/ */
  CAST_int_to_DMI_Q_TEXT_DATA_Variables(
    outC->_L23,
    &outC->Context_CAST_int_to_DMI_Q_TEXT_1);
  outC->_L29 = outC->Context_CAST_int_to_DMI_Q_TEXT_1.q_text_ct;
  outC->_L26 = outC->_L21[0];
  /* _L27=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_Utilities(outC->_L26, &outC->Context_Int_to_Bool_1);
  outC->_L27 = outC->Context_Int_to_Bool_1.bool_out;
  outC->_L25 = outC->_L21[1];
  outC->_L24 = outC->_L21[2];
  outC->_L22 = outC->_L21[4];
  outC->_L19.valid = outC->_L27;
  outC->_L19.system_clock = outC->_L25;
  outC->_L19.textMessage_ID = outC->_L24;
  outC->_L19.q_text = outC->_L29;
  outC->_L19.l_text = outC->_L22;
  kcg_copy_DMI_TEXT_DMI_Types_Pkg(&outC->_L19.x_text, &outC->_L35);
  outC->_L19.q_textClass = outC->_L33;
  outC->_L19.q_textConfirm = outC->_L34;
  kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->dmi_text_message_ct,
    &outC->_L19);
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_Int_to_DMI_Text_Message1_init_DATA_Packets_EVC_to_DMI(
  outC_CAST_Int_to_DMI_Text_Message1_DATA_Packets_EVC_to_DMI *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;

  for (idx = 0; idx < 255; idx++) {
    outC->_L35[idx] = ' ';
  }
  outC->_L25 = kcg_lit_int64(0);
  outC->_L24 = kcg_lit_int64(0);
  outC->_L23 = kcg_lit_int64(0);
  outC->_L22 = kcg_lit_int64(0);
  outC->_L34 = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L33 = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L32 = kcg_lit_int64(0);
  outC->_L31 = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 255; idx1++) {
    outC->_L30[idx1] = kcg_lit_int64(0);
  }
  outC->_L29 = balise_read_error_DMI_Types_Pkg;
  outC->_L27 = kcg_true;
  outC->_L26 = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 5; idx2++) {
    outC->_L21[idx2] = kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 262; idx3++) {
    outC->_L20[idx3] = kcg_lit_int64(0);
  }
  outC->_L19.valid = kcg_true;
  outC->_L19.system_clock = kcg_lit_int64(0);
  outC->_L19.textMessage_ID = kcg_lit_int64(0);
  outC->_L19.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L19.l_text = kcg_lit_int64(0);
  for (idx4 = 0; idx4 < 255; idx4++) {
    outC->_L19.x_text[idx4] = ' ';
  }
  outC->_L19.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L19.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->dmi_text_message_ct.valid = kcg_true;
  outC->dmi_text_message_ct.system_clock = kcg_lit_int64(0);
  outC->dmi_text_message_ct.textMessage_ID = kcg_lit_int64(0);
  outC->dmi_text_message_ct.q_text = balise_read_error_DMI_Types_Pkg;
  outC->dmi_text_message_ct.l_text = kcg_lit_int64(0);
  for (idx5 = 0; idx5 < 255; idx5++) {
    outC->dmi_text_message_ct.x_text[idx5] = ' ';
  }
  outC->dmi_text_message_ct.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->dmi_text_message_ct.q_textConfirm =
    Q_TEXTCONFIRM_No_confirmation_required;
  /* _L27=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_init_Utilities(&outC->Context_Int_to_Bool_1);
  /* _L29=(DATA::Variables::CAST_int_to_DMI_Q_TEXT#1)/ */
  CAST_int_to_DMI_Q_TEXT_init_DATA_Variables(
    &outC->Context_CAST_int_to_DMI_Q_TEXT_1);
  /* _L33=(TM_conversions::CAST_Int_to_Q_TEXTCLASS#1)/ */
  CAST_Int_to_Q_TEXTCLASS_init_TM_conversions(
    &outC->Context_CAST_Int_to_Q_TEXTCLASS_1);
  /* _L34=(TM_conversions::CAST_Int_to_Q_TEXTCONFIRM#1)/ */
  CAST_Int_to_Q_TEXTCONFIRM_init_TM_conversions(
    &outC->Context_CAST_Int_to_Q_TEXTCONFIRM_1);
  /* _L35=(DATA::Variables::CAST_int_to_DMI_TEXT#1)/ */
  CAST_int_to_DMI_TEXT_init_DATA_Variables(
    &outC->Context_CAST_int_to_DMI_TEXT_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_Int_to_DMI_Text_Message1_reset_DATA_Packets_EVC_to_DMI(
  outC_CAST_Int_to_DMI_Text_Message1_DATA_Packets_EVC_to_DMI *outC)
{
  /* _L27=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_reset_Utilities(&outC->Context_Int_to_Bool_1);
  /* _L29=(DATA::Variables::CAST_int_to_DMI_Q_TEXT#1)/ */
  CAST_int_to_DMI_Q_TEXT_reset_DATA_Variables(
    &outC->Context_CAST_int_to_DMI_Q_TEXT_1);
  /* _L33=(TM_conversions::CAST_Int_to_Q_TEXTCLASS#1)/ */
  CAST_Int_to_Q_TEXTCLASS_reset_TM_conversions(
    &outC->Context_CAST_Int_to_Q_TEXTCLASS_1);
  /* _L34=(TM_conversions::CAST_Int_to_Q_TEXTCONFIRM#1)/ */
  CAST_Int_to_Q_TEXTCONFIRM_reset_TM_conversions(
    &outC->Context_CAST_Int_to_Q_TEXTCONFIRM_1);
  /* _L35=(DATA::Variables::CAST_int_to_DMI_TEXT#1)/ */
  CAST_int_to_DMI_TEXT_reset_DATA_Variables(
    &outC->Context_CAST_int_to_DMI_TEXT_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_Int_to_DMI_Text_Message1_DATA_Packets_EVC_to_DMI.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

