/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_DMI_Text_Message_to_int_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::Write_DMI_Text_Message_to_int/ */
void Write_DMI_Text_Message_to_int_DATA_Packets_EVC_to_DMI(
  /* dmi_text_message_ct/ */
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_text_message_ct,
  outC_Write_DMI_Text_Message_to_int_DATA_Packets_EVC_to_DMI *outC)
{
  static DMI_Text_Message_int_array_T_DATA op_call;

  kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L1,
    dmi_text_message_ct);
  outC->_L19 = outC->_L1.valid;
  outC->every = outC->_L19;
  if (outC->every) {
    /* _L18=(DATA::Packets::EVC_to_DMI::CAST_DMI_Text_Message_to_int1#1)/ */
    CAST_DMI_Text_Message_to_int1_DATA_Packets_EVC_to_DMI(
      &outC->_L1,
      &outC->Context_CAST_DMI_Text_Message_to_int1_1);
    kcg_copy_DMI_Text_Message_int_array_T_DATA(
      &op_call,
      &outC->Context_CAST_DMI_Text_Message_to_int1_1.dmi_text_message_int);
  }
  kcg_copy_DMI_Text_Message_int_array_T_DATA(
    &outC->_L20,
    (DMI_Text_Message_int_array_T_DATA *)
      &cDMI_Text_Message_int_DATA_Packets_EVC_to_DMI);
  if (outC->every) {
    kcg_copy_DMI_Text_Message_int_array_T_DATA(&outC->_L18, &op_call);
  }
  else {
    kcg_copy_DMI_Text_Message_int_array_T_DATA(&outC->_L18, &outC->_L20);
  }
  kcg_copy_DMI_Text_Message_int_array_T_DATA(
    &outC->dmi_text_message_int,
    &outC->_L18);
}

#ifndef KCG_USER_DEFINED_INIT
void Write_DMI_Text_Message_to_int_init_DATA_Packets_EVC_to_DMI(
  outC_Write_DMI_Text_Message_to_int_DATA_Packets_EVC_to_DMI *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;

  for (idx = 0; idx < 262; idx++) {
    outC->_L20[idx] = kcg_lit_int64(0);
  }
  outC->_L19 = kcg_true;
  for (idx1 = 0; idx1 < 262; idx1++) {
    outC->_L18[idx1] = kcg_lit_int64(0);
  }
  outC->_L1.valid = kcg_true;
  outC->_L1.system_clock = kcg_lit_int64(0);
  outC->_L1.textMessage_ID = kcg_lit_int64(0);
  outC->_L1.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L1.l_text = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 255; idx2++) {
    outC->_L1.x_text[idx2] = ' ';
  }
  outC->_L1.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L1.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->every = kcg_true;
  for (idx3 = 0; idx3 < 262; idx3++) {
    outC->dmi_text_message_int[idx3] = kcg_lit_int64(0);
  }
  /* _L18=(DATA::Packets::EVC_to_DMI::CAST_DMI_Text_Message_to_int1#1)/ */
  CAST_DMI_Text_Message_to_int1_init_DATA_Packets_EVC_to_DMI(
    &outC->Context_CAST_DMI_Text_Message_to_int1_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Write_DMI_Text_Message_to_int_reset_DATA_Packets_EVC_to_DMI(
  outC_Write_DMI_Text_Message_to_int_DATA_Packets_EVC_to_DMI *outC)
{
  /* _L18=(DATA::Packets::EVC_to_DMI::CAST_DMI_Text_Message_to_int1#1)/ */
  CAST_DMI_Text_Message_to_int1_reset_DATA_Packets_EVC_to_DMI(
    &outC->Context_CAST_DMI_Text_Message_to_int1_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_DMI_Text_Message_to_int_DATA_Packets_EVC_to_DMI.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

