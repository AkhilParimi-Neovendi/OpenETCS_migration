/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_int_to_DMI_Text_Message_Ack_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Text_Message_Ack/ */
void Write_int_to_DMI_Text_Message_Ack_DATA_Packets_DMI_to_EVC(
  /* dmi_text_message_ack_int/ */
  DMI_Text_Message_Ack_int_array_T_DATA *dmi_text_message_ack_int,
  outC_Write_int_to_DMI_Text_Message_Ack_DATA_Packets_DMI_to_EVC *outC)
{
  static DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg op_call;

  kcg_copy_DMI_Text_Message_Ack_int_array_T_DATA(
    &outC->_L8,
    dmi_text_message_ack_int);
  outC->_L14 = outC->_L8[0];
  outC->_L13 = kcg_lit_int64(1);
  outC->_L15 = outC->_L13 == outC->_L14;
  outC->every = outC->_L15;
  if (outC->every) {
    /* _L12=(DATA::Packets::DMI_to_EVC::C_int_to_DMI_Text_Message_Ack#1)/ */
    C_int_to_DMI_Text_Message_Ack_DATA_Packets_DMI_to_EVC(
      &outC->_L8,
      &outC->Context_C_int_to_DMI_Text_Message_Ack_1);
    kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &op_call,
      &outC->Context_C_int_to_DMI_Text_Message_Ack_1.dmi_text_message_ack_ct);
  }
  kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L16,
    (DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *)
      &cDMI_Text_Message_Ack_DATA_Packets_DMI_to_EVC);
  if (outC->every) {
    kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->_L12,
      &op_call);
  }
  else {
    kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->_L12,
      &outC->_L16);
  }
  kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->dmi_text_message_ack_ct,
    &outC->_L12);
}

#ifndef KCG_USER_DEFINED_INIT
void Write_int_to_DMI_Text_Message_Ack_init_DATA_Packets_DMI_to_EVC(
  outC_Write_int_to_DMI_Text_Message_Ack_DATA_Packets_DMI_to_EVC *outC)
{
  static kcg_size idx;

  outC->_L16.valid = kcg_true;
  outC->_L16.systemTime = kcg_lit_int64(0);
  outC->_L16.textMessage_ID = kcg_lit_int64(0);
  outC->_L16.acknowledged = kcg_true;
  outC->_L13 = kcg_lit_int64(0);
  outC->_L14 = kcg_lit_int64(0);
  outC->_L15 = kcg_true;
  outC->_L12.valid = kcg_true;
  outC->_L12.systemTime = kcg_lit_int64(0);
  outC->_L12.textMessage_ID = kcg_lit_int64(0);
  outC->_L12.acknowledged = kcg_true;
  for (idx = 0; idx < 4; idx++) {
    outC->_L8[idx] = kcg_lit_int64(0);
  }
  outC->every = kcg_true;
  outC->dmi_text_message_ack_ct.valid = kcg_true;
  outC->dmi_text_message_ack_ct.systemTime = kcg_lit_int64(0);
  outC->dmi_text_message_ack_ct.textMessage_ID = kcg_lit_int64(0);
  outC->dmi_text_message_ack_ct.acknowledged = kcg_true;
  /* _L12=(DATA::Packets::DMI_to_EVC::C_int_to_DMI_Text_Message_Ack#1)/ */
  C_int_to_DMI_Text_Message_Ack_init_DATA_Packets_DMI_to_EVC(
    &outC->Context_C_int_to_DMI_Text_Message_Ack_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Write_int_to_DMI_Text_Message_Ack_reset_DATA_Packets_DMI_to_EVC(
  outC_Write_int_to_DMI_Text_Message_Ack_DATA_Packets_DMI_to_EVC *outC)
{
  /* _L12=(DATA::Packets::DMI_to_EVC::C_int_to_DMI_Text_Message_Ack#1)/ */
  C_int_to_DMI_Text_Message_Ack_reset_DATA_Packets_DMI_to_EVC(
    &outC->Context_C_int_to_DMI_Text_Message_Ack_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_int_to_DMI_Text_Message_Ack_DATA_Packets_DMI_to_EVC.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

