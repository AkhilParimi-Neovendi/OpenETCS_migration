/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_DMI_Text_Message_Ack_to_int_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::Write_DMI_Text_Message_Ack_to_int/ */
void Write_DMI_Text_Message_Ack_to_int_DATA_Packets_DMI_to_EVC(
  /* dmi_text_message_ack_ct/ */
  DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *dmi_text_message_ack_ct,
  outC_Write_DMI_Text_Message_Ack_to_int_DATA_Packets_DMI_to_EVC *outC)
{
  static DMI_Text_Message_Ack_int_array_T_DATA op_call;

  kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L14,
    dmi_text_message_ack_ct);
  outC->_L20 = outC->_L14.valid;
  outC->every = outC->_L20;
  if (outC->every) {
    /* _L19=(DATA::Packets::DMI_to_EVC::C_DMI_Text_Message_Ack_to_int#1)/ */
    C_DMI_Text_Message_Ack_to_int_DATA_Packets_DMI_to_EVC(
      &outC->_L14,
      &outC->Context_C_DMI_Text_Message_Ack_to_int_1);
    kcg_copy_DMI_Text_Message_Ack_int_array_T_DATA(
      &op_call,
      &outC->Context_C_DMI_Text_Message_Ack_to_int_1.dmi_text_message_ack_int);
  }
  kcg_copy_DMI_Text_Message_Ack_int_array_T_DATA(
    &outC->_L21,
    (DMI_Text_Message_Ack_int_array_T_DATA *)
      &cDMI_Text_Message_Ack_int_array_DATA_Packets_DMI_to_EVC);
  if (outC->every) {
    kcg_copy_DMI_Text_Message_Ack_int_array_T_DATA(&outC->_L19, &op_call);
  }
  else {
    kcg_copy_DMI_Text_Message_Ack_int_array_T_DATA(&outC->_L19, &outC->_L21);
  }
  kcg_copy_DMI_Text_Message_Ack_int_array_T_DATA(
    &outC->dmi_text_message_ack_int,
    &outC->_L19);
}

#ifndef KCG_USER_DEFINED_INIT
void Write_DMI_Text_Message_Ack_to_int_init_DATA_Packets_DMI_to_EVC(
  outC_Write_DMI_Text_Message_Ack_to_int_DATA_Packets_DMI_to_EVC *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;

  for (idx = 0; idx < 4; idx++) {
    outC->_L21[idx] = kcg_lit_int32(0);
  }
  outC->_L20 = kcg_true;
  for (idx1 = 0; idx1 < 4; idx1++) {
    outC->_L19[idx1] = kcg_lit_int32(0);
  }
  outC->_L14.valid = kcg_true;
  outC->_L14.systemTime = kcg_lit_int32(0);
  outC->_L14.textMessage_ID = kcg_lit_int32(0);
  outC->_L14.acknowledged = kcg_true;
  outC->every = kcg_true;
  for (idx2 = 0; idx2 < 4; idx2++) {
    outC->dmi_text_message_ack_int[idx2] = kcg_lit_int32(0);
  }
  /* _L19=(DATA::Packets::DMI_to_EVC::C_DMI_Text_Message_Ack_to_int#1)/ */
  C_DMI_Text_Message_Ack_to_int_init_DATA_Packets_DMI_to_EVC(
    &outC->Context_C_DMI_Text_Message_Ack_to_int_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Write_DMI_Text_Message_Ack_to_int_reset_DATA_Packets_DMI_to_EVC(
  outC_Write_DMI_Text_Message_Ack_to_int_DATA_Packets_DMI_to_EVC *outC)
{
  /* _L19=(DATA::Packets::DMI_to_EVC::C_DMI_Text_Message_Ack_to_int#1)/ */
  C_DMI_Text_Message_Ack_to_int_reset_DATA_Packets_DMI_to_EVC(
    &outC->Context_C_DMI_Text_Message_Ack_to_int_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_DMI_Text_Message_Ack_to_int_DATA_Packets_DMI_to_EVC.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

