/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_Text_Message_to_int1_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_DMI_Text_Message_to_int1/ */
void CAST_DMI_Text_Message_to_int1_DATA_Packets_EVC_to_DMI(
  /* dmi_text_message_ct/ */
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_text_message_ct,
  outC_CAST_DMI_Text_Message_to_int1_DATA_Packets_EVC_to_DMI *outC)
{
  static array_int32_260 tmp;

  kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L1,
    dmi_text_message_ct);
  outC->_L3 = outC->_L1.q_textClass;
  /* _L13=(TM_conversions::CAST_Q_TEXTCLASS_to_int#1)/ */
  CAST_Q_TEXTCLASS_to_int_TM_conversions(
    outC->_L3,
    &outC->Context_CAST_Q_TEXTCLASS_to_int_1);
  outC->_L13 = outC->Context_CAST_Q_TEXTCLASS_to_int_1.d;
  outC->_L2 = outC->_L1.q_textConfirm;
  /* _L14=(TM_conversions::CAST_Q_TEXTCONFIRM_to_int#1)/ */
  CAST_Q_TEXTCONFIRM_to_int_TM_conversions(
    outC->_L2,
    &outC->Context_CAST_Q_TEXTCONFIRM_to_int_1);
  outC->_L14 = outC->Context_CAST_Q_TEXTCONFIRM_to_int_1.q_textconfirm_int;
  outC->_L16[0] = outC->_L13;
  outC->_L16[1] = outC->_L14;
  kcg_copy_DMI_TEXT_DMI_Types_Pkg(&outC->_L4, &outC->_L1.x_text);
  /* _L11=(DATA::Variables::CAST_DMI_TEXT_to_int#1)/ */
  CAST_DMI_TEXT_to_int_DATA_Variables(
    &outC->_L4,
    &outC->Context_CAST_DMI_TEXT_to_int_1);
  kcg_copy_DMI_TEXT_INT_Array_T_DATA(
    &outC->_L11,
    &outC->Context_CAST_DMI_TEXT_to_int_1.dmi_text_int_array_out);
  outC->_L9 = outC->_L1.valid;
  /* _L10=(Utilities::Bool_to_Int#1)/ */
  Bool_to_Int_Utilities(outC->_L9, &outC->Context_Bool_to_Int_1);
  outC->_L10 = outC->Context_Bool_to_Int_1.int_out;
  outC->_L8 = outC->_L1.system_clock;
  outC->_L7 = outC->_L1.textMessage_ID;
  outC->_L6 = outC->_L1.q_text;
  /* _L12=(DATA::Variables::CAST_DMI_Q_TEXT_to_int#1)/ */
  CAST_DMI_Q_TEXT_to_int_DATA_Variables(
    outC->_L6,
    &outC->Context_CAST_DMI_Q_TEXT_to_int_1);
  outC->_L12 = outC->Context_CAST_DMI_Q_TEXT_to_int_1.q_text_int;
  outC->_L5 = outC->_L1.l_text;
  outC->_L15[0] = outC->_L10;
  outC->_L15[1] = outC->_L8;
  outC->_L15[2] = outC->_L7;
  outC->_L15[3] = outC->_L12;
  outC->_L15[4] = outC->_L5;
  kcg_copy_array_int32_5(&tmp[0], &outC->_L15);
  kcg_copy_DMI_TEXT_INT_Array_T_DATA(&tmp[5], &outC->_L11);
  kcg_copy_array_int32_260(&outC->_L17[0], &tmp);
  kcg_copy_array_int32_2(&outC->_L17[260], &outC->_L16);
  kcg_copy_DMI_Text_Message_int_array_T_DATA(
    &outC->dmi_text_message_int,
    &outC->_L17);
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_DMI_Text_Message_to_int1_init_DATA_Packets_EVC_to_DMI(
  outC_CAST_DMI_Text_Message_to_int1_DATA_Packets_EVC_to_DMI *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;

  for (idx = 0; idx < 262; idx++) {
    outC->_L17[idx] = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 2; idx1++) {
    outC->_L16[idx1] = kcg_lit_int32(0);
  }
  for (idx2 = 0; idx2 < 5; idx2++) {
    outC->_L15[idx2] = kcg_lit_int32(0);
  }
  outC->_L14 = kcg_lit_int32(0);
  outC->_L13 = kcg_lit_int32(0);
  outC->_L12 = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 255; idx3++) {
    outC->_L11[idx3] = kcg_lit_int32(0);
  }
  outC->_L10 = kcg_lit_int32(0);
  outC->_L2 = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L3 = Q_TEXTCLASS_Auxiliary_Information;
  for (idx4 = 0; idx4 < 255; idx4++) {
    outC->_L4[idx4] = ' ';
  }
  outC->_L5 = kcg_lit_int32(0);
  outC->_L6 = balise_read_error_DMI_Types_Pkg;
  outC->_L7 = kcg_lit_int32(0);
  outC->_L8 = kcg_lit_int32(0);
  outC->_L9 = kcg_true;
  outC->_L1.valid = kcg_true;
  outC->_L1.system_clock = kcg_lit_int32(0);
  outC->_L1.textMessage_ID = kcg_lit_int32(0);
  outC->_L1.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L1.l_text = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 255; idx5++) {
    outC->_L1.x_text[idx5] = ' ';
  }
  outC->_L1.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L1.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  for (idx6 = 0; idx6 < 262; idx6++) {
    outC->dmi_text_message_int[idx6] = kcg_lit_int32(0);
  }
  /* _L12=(DATA::Variables::CAST_DMI_Q_TEXT_to_int#1)/ */
  CAST_DMI_Q_TEXT_to_int_init_DATA_Variables(
    &outC->Context_CAST_DMI_Q_TEXT_to_int_1);
  /* _L10=(Utilities::Bool_to_Int#1)/ */
  Bool_to_Int_init_Utilities(&outC->Context_Bool_to_Int_1);
  /* _L11=(DATA::Variables::CAST_DMI_TEXT_to_int#1)/ */
  CAST_DMI_TEXT_to_int_init_DATA_Variables(
    &outC->Context_CAST_DMI_TEXT_to_int_1);
  /* _L14=(TM_conversions::CAST_Q_TEXTCONFIRM_to_int#1)/ */
  CAST_Q_TEXTCONFIRM_to_int_init_TM_conversions(
    &outC->Context_CAST_Q_TEXTCONFIRM_to_int_1);
  /* _L13=(TM_conversions::CAST_Q_TEXTCLASS_to_int#1)/ */
  CAST_Q_TEXTCLASS_to_int_init_TM_conversions(
    &outC->Context_CAST_Q_TEXTCLASS_to_int_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_DMI_Text_Message_to_int1_reset_DATA_Packets_EVC_to_DMI(
  outC_CAST_DMI_Text_Message_to_int1_DATA_Packets_EVC_to_DMI *outC)
{
  /* _L12=(DATA::Variables::CAST_DMI_Q_TEXT_to_int#1)/ */
  CAST_DMI_Q_TEXT_to_int_reset_DATA_Variables(
    &outC->Context_CAST_DMI_Q_TEXT_to_int_1);
  /* _L10=(Utilities::Bool_to_Int#1)/ */
  Bool_to_Int_reset_Utilities(&outC->Context_Bool_to_Int_1);
  /* _L11=(DATA::Variables::CAST_DMI_TEXT_to_int#1)/ */
  CAST_DMI_TEXT_to_int_reset_DATA_Variables(
    &outC->Context_CAST_DMI_TEXT_to_int_1);
  /* _L14=(TM_conversions::CAST_Q_TEXTCONFIRM_to_int#1)/ */
  CAST_Q_TEXTCONFIRM_to_int_reset_TM_conversions(
    &outC->Context_CAST_Q_TEXTCONFIRM_to_int_1);
  /* _L13=(TM_conversions::CAST_Q_TEXTCLASS_to_int#1)/ */
  CAST_Q_TEXTCLASS_to_int_reset_TM_conversions(
    &outC->Context_CAST_Q_TEXTCLASS_to_int_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_DMI_Text_Message_to_int1_DATA_Packets_EVC_to_DMI.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

