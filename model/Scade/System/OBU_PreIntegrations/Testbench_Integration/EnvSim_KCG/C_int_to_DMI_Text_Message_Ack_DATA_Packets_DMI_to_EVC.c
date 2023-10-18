/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_int_to_DMI_Text_Message_Ack_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Text_Message_Ack/ */
void C_int_to_DMI_Text_Message_Ack_DATA_Packets_DMI_to_EVC(
  /* dmi_text_message_ack_int/ */
  DMI_Text_Message_Ack_int_array_T_DATA *dmi_text_message_ack_int,
  outC_C_int_to_DMI_Text_Message_Ack_DATA_Packets_DMI_to_EVC *outC)
{
  kcg_copy_DMI_Text_Message_Ack_int_array_T_DATA(
    &outC->_L8,
    dmi_text_message_ack_int);
  outC->_L3 = outC->_L8[3];
  /* _L11=(Utilities::Int_to_Bool#2)/ */
  Int_to_Bool_Utilities(outC->_L3, &outC->Context_Int_to_Bool_2);
  outC->_L11 = outC->Context_Int_to_Bool_2.bool_out;
  outC->_L6 = outC->_L8[0];
  /* _L9=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_Utilities(outC->_L6, &outC->Context_Int_to_Bool_1);
  outC->_L9 = outC->Context_Int_to_Bool_1.bool_out;
  outC->_L5 = outC->_L8[1];
  outC->_L4 = outC->_L8[2];
  outC->_L2.valid = outC->_L9;
  outC->_L2.systemTime = outC->_L5;
  outC->_L2.textMessage_ID = outC->_L4;
  outC->_L2.acknowledged = outC->_L11;
  kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->dmi_text_message_ack_ct,
    &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void C_int_to_DMI_Text_Message_Ack_init_DATA_Packets_DMI_to_EVC(
  outC_C_int_to_DMI_Text_Message_Ack_DATA_Packets_DMI_to_EVC *outC)
{
  static kcg_size idx;

  outC->_L11 = kcg_true;
  outC->_L9 = kcg_true;
  for (idx = 0; idx < 4; idx++) {
    outC->_L8[idx] = kcg_lit_int64(0);
  }
  outC->_L3 = kcg_lit_int64(0);
  outC->_L4 = kcg_lit_int64(0);
  outC->_L5 = kcg_lit_int64(0);
  outC->_L6 = kcg_lit_int64(0);
  outC->_L2.valid = kcg_true;
  outC->_L2.systemTime = kcg_lit_int64(0);
  outC->_L2.textMessage_ID = kcg_lit_int64(0);
  outC->_L2.acknowledged = kcg_true;
  outC->dmi_text_message_ack_ct.valid = kcg_true;
  outC->dmi_text_message_ack_ct.systemTime = kcg_lit_int64(0);
  outC->dmi_text_message_ack_ct.textMessage_ID = kcg_lit_int64(0);
  outC->dmi_text_message_ack_ct.acknowledged = kcg_true;
  /* _L9=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_init_Utilities(&outC->Context_Int_to_Bool_1);
  /* _L11=(Utilities::Int_to_Bool#2)/ */
  Int_to_Bool_init_Utilities(&outC->Context_Int_to_Bool_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_int_to_DMI_Text_Message_Ack_reset_DATA_Packets_DMI_to_EVC(
  outC_C_int_to_DMI_Text_Message_Ack_DATA_Packets_DMI_to_EVC *outC)
{
  /* _L9=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_reset_Utilities(&outC->Context_Int_to_Bool_1);
  /* _L11=(Utilities::Int_to_Bool#2)/ */
  Int_to_Bool_reset_Utilities(&outC->Context_Int_to_Bool_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_int_to_DMI_Text_Message_Ack_DATA_Packets_DMI_to_EVC.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

