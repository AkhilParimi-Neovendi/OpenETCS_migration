/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_DMI_Train_Data_Ack_to_int_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::Write_DMI_Train_Data_Ack_to_int/ */
void Write_DMI_Train_Data_Ack_to_int_DATA_Packets_DMI_to_EVC(
  /* dmi_train_data_ack_ct/ */
  DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *dmi_train_data_ack_ct,
  outC_Write_DMI_Train_Data_Ack_to_int_DATA_Packets_DMI_to_EVC *outC)
{
  static DMI_Train_Data_Ack_int_array_T_DATA op_call;

  kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L16,
    dmi_train_data_ack_ct);
  outC->_L22 = outC->_L16.valid;
  outC->every = outC->_L22;
  if (outC->every) {
    /* _L21=(DATA::Packets::DMI_to_EVC::C_DMI_Train_Data_Ack_to_int#1)/ */
    C_DMI_Train_Data_Ack_to_int_DATA_Packets_DMI_to_EVC(
      &outC->_L16,
      &outC->Context_C_DMI_Train_Data_Ack_to_int_1);
    kcg_copy_DMI_Train_Data_Ack_int_array_T_DATA(
      &op_call,
      &outC->Context_C_DMI_Train_Data_Ack_to_int_1.dmi_train_data_ack_int);
  }
  kcg_copy_DMI_Train_Data_Ack_int_array_T_DATA(
    &outC->_L23,
    (DMI_Train_Data_Ack_int_array_T_DATA *)
      &cDMI_Train_Data_Ack_int_array_DATA_Packets_DMI_to_EVC);
  if (outC->every) {
    kcg_copy_DMI_Train_Data_Ack_int_array_T_DATA(&outC->_L21, &op_call);
  }
  else {
    kcg_copy_DMI_Train_Data_Ack_int_array_T_DATA(&outC->_L21, &outC->_L23);
  }
  kcg_copy_DMI_Train_Data_Ack_int_array_T_DATA(
    &outC->dmi_train_data_ack_int,
    &outC->_L21);
}

#ifndef KCG_USER_DEFINED_INIT
void Write_DMI_Train_Data_Ack_to_int_init_DATA_Packets_DMI_to_EVC(
  outC_Write_DMI_Train_Data_Ack_to_int_DATA_Packets_DMI_to_EVC *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;

  for (idx = 0; idx < 3; idx++) {
    outC->_L23[idx] = kcg_lit_int64(0);
  }
  outC->_L22 = kcg_true;
  for (idx1 = 0; idx1 < 3; idx1++) {
    outC->_L21[idx1] = kcg_lit_int64(0);
  }
  outC->_L16.valid = kcg_true;
  outC->_L16.systemTime = kcg_lit_int64(0);
  outC->_L16.acknowledged = kcg_true;
  outC->every = kcg_true;
  for (idx2 = 0; idx2 < 3; idx2++) {
    outC->dmi_train_data_ack_int[idx2] = kcg_lit_int64(0);
  }
  /* _L21=(DATA::Packets::DMI_to_EVC::C_DMI_Train_Data_Ack_to_int#1)/ */
  C_DMI_Train_Data_Ack_to_int_init_DATA_Packets_DMI_to_EVC(
    &outC->Context_C_DMI_Train_Data_Ack_to_int_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Write_DMI_Train_Data_Ack_to_int_reset_DATA_Packets_DMI_to_EVC(
  outC_Write_DMI_Train_Data_Ack_to_int_DATA_Packets_DMI_to_EVC *outC)
{
  /* _L21=(DATA::Packets::DMI_to_EVC::C_DMI_Train_Data_Ack_to_int#1)/ */
  C_DMI_Train_Data_Ack_to_int_reset_DATA_Packets_DMI_to_EVC(
    &outC->Context_C_DMI_Train_Data_Ack_to_int_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_DMI_Train_Data_Ack_to_int_DATA_Packets_DMI_to_EVC.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

