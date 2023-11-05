/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_DMI_Text_Message_Ack_to_int_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::C_DMI_Text_Message_Ack_to_int/ */
void C_DMI_Text_Message_Ack_to_int_DATA_Packets_DMI_to_EVC(
  /* dmi_text_message_ack_ct/ */
  DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *dmi_text_message_ack_ct,
  outC_C_DMI_Text_Message_Ack_to_int_DATA_Packets_DMI_to_EVC *outC)
{
  kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L14,
    dmi_text_message_ack_ct);
  outC->_L6 = outC->_L14.valid;
  /* _L18=(Utilities::Bool_to_Int#2)/ */
  Bool_to_Int_Utilities(outC->_L6, &outC->Context_Bool_to_Int_2);
  outC->_L18 = outC->Context_Bool_to_Int_2.int_out;
  outC->_L3 = outC->_L14.acknowledged;
  /* _L11=(Utilities::Bool_to_Int#1)/ */
  Bool_to_Int_Utilities(outC->_L3, &outC->Context_Bool_to_Int_1);
  outC->_L11 = outC->Context_Bool_to_Int_1.int_out;
  outC->_L5 = outC->_L14.systemTime;
  outC->_L4 = outC->_L14.textMessage_ID;
  outC->_L2[0] = outC->_L18;
  outC->_L2[1] = outC->_L5;
  outC->_L2[2] = outC->_L4;
  outC->_L2[3] = outC->_L11;
  kcg_copy_DMI_Text_Message_Ack_int_array_T_DATA(
    &outC->dmi_text_message_ack_int,
    &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void C_DMI_Text_Message_Ack_to_int_init_DATA_Packets_DMI_to_EVC(
  outC_C_DMI_Text_Message_Ack_to_int_DATA_Packets_DMI_to_EVC *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L18 = kcg_lit_int32(0);
  outC->_L14.valid = kcg_true;
  outC->_L14.systemTime = kcg_lit_int32(0);
  outC->_L14.textMessage_ID = kcg_lit_int32(0);
  outC->_L14.acknowledged = kcg_true;
  outC->_L11 = kcg_lit_int32(0);
  outC->_L3 = kcg_true;
  outC->_L4 = kcg_lit_int32(0);
  outC->_L5 = kcg_lit_int32(0);
  outC->_L6 = kcg_true;
  for (idx = 0; idx < 4; idx++) {
    outC->_L2[idx] = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 4; idx1++) {
    outC->dmi_text_message_ack_int[idx1] = kcg_lit_int32(0);
  }
  /* _L11=(Utilities::Bool_to_Int#1)/ */
  Bool_to_Int_init_Utilities(&outC->Context_Bool_to_Int_1);
  /* _L18=(Utilities::Bool_to_Int#2)/ */
  Bool_to_Int_init_Utilities(&outC->Context_Bool_to_Int_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_DMI_Text_Message_Ack_to_int_reset_DATA_Packets_DMI_to_EVC(
  outC_C_DMI_Text_Message_Ack_to_int_DATA_Packets_DMI_to_EVC *outC)
{
  /* _L11=(Utilities::Bool_to_Int#1)/ */
  Bool_to_Int_reset_Utilities(&outC->Context_Bool_to_Int_1);
  /* _L18=(Utilities::Bool_to_Int#2)/ */
  Bool_to_Int_reset_Utilities(&outC->Context_Bool_to_Int_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_DMI_Text_Message_Ack_to_int_DATA_Packets_DMI_to_EVC.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

