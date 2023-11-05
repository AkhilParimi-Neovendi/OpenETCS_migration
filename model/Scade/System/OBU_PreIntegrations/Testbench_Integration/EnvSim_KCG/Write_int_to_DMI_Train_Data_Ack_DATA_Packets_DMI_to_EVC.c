/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_int_to_DMI_Train_Data_Ack_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Train_Data_Ack/ */
void Write_int_to_DMI_Train_Data_Ack_DATA_Packets_DMI_to_EVC(
  /* dmi_train_data_ack_int/ */
  DMI_Train_Data_Ack_int_array_T_DATA *dmi_train_data_ack_int,
  outC_Write_int_to_DMI_Train_Data_Ack_DATA_Packets_DMI_to_EVC *outC)
{
  static DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg op_call;

  kcg_copy_DMI_Train_Data_Ack_int_array_T_DATA(
    &outC->_L8,
    dmi_train_data_ack_int);
  outC->_L13 = outC->_L8[0];
  outC->_L14 = kcg_lit_int32(1);
  outC->_L12 = outC->_L14 == outC->_L13;
  outC->every = outC->_L12;
  if (outC->every) {
    /* _L15=(DATA::Packets::DMI_to_EVC::C_int_to_DMI_Train_Data_Ack1#1)/ */
    C_int_to_DMI_Train_Data_Ack1_DATA_Packets_DMI_to_EVC(
      &outC->_L8,
      &outC->Context_C_int_to_DMI_Train_Data_Ack1_1);
    kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &op_call,
      &outC->Context_C_int_to_DMI_Train_Data_Ack1_1.dmi_train_data_ack_ct);
  }
  kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L16,
    (DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *)
      &cDMI_Train_Data_Ack_DATA_Packets_DMI_to_EVC);
  if (outC->every) {
    kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->_L15,
      &op_call);
  }
  else {
    kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->_L15,
      &outC->_L16);
  }
  kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->dmi_train_data_ack_ct,
    &outC->_L15);
}

#ifndef KCG_USER_DEFINED_INIT
void Write_int_to_DMI_Train_Data_Ack_init_DATA_Packets_DMI_to_EVC(
  outC_Write_int_to_DMI_Train_Data_Ack_DATA_Packets_DMI_to_EVC *outC)
{
  static kcg_size idx;

  outC->_L16.valid = kcg_true;
  outC->_L16.systemTime = kcg_lit_int32(0);
  outC->_L16.acknowledged = kcg_true;
  outC->_L15.valid = kcg_true;
  outC->_L15.systemTime = kcg_lit_int32(0);
  outC->_L15.acknowledged = kcg_true;
  outC->_L12 = kcg_true;
  outC->_L13 = kcg_lit_int32(0);
  outC->_L14 = kcg_lit_int32(0);
  for (idx = 0; idx < 3; idx++) {
    outC->_L8[idx] = kcg_lit_int32(0);
  }
  outC->every = kcg_true;
  outC->dmi_train_data_ack_ct.valid = kcg_true;
  outC->dmi_train_data_ack_ct.systemTime = kcg_lit_int32(0);
  outC->dmi_train_data_ack_ct.acknowledged = kcg_true;
  /* _L15=(DATA::Packets::DMI_to_EVC::C_int_to_DMI_Train_Data_Ack1#1)/ */
  C_int_to_DMI_Train_Data_Ack1_init_DATA_Packets_DMI_to_EVC(
    &outC->Context_C_int_to_DMI_Train_Data_Ack1_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Write_int_to_DMI_Train_Data_Ack_reset_DATA_Packets_DMI_to_EVC(
  outC_Write_int_to_DMI_Train_Data_Ack_DATA_Packets_DMI_to_EVC *outC)
{
  /* _L15=(DATA::Packets::DMI_to_EVC::C_int_to_DMI_Train_Data_Ack1#1)/ */
  C_int_to_DMI_Train_Data_Ack1_reset_DATA_Packets_DMI_to_EVC(
    &outC->Context_C_int_to_DMI_Train_Data_Ack1_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_int_to_DMI_Train_Data_Ack_DATA_Packets_DMI_to_EVC.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

