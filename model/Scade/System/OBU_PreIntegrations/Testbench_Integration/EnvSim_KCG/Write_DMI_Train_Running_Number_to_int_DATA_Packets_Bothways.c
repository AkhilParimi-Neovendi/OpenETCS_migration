/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_DMI_Train_Running_Number_to_int_DATA_Packets_Bothways.h"

/* DATA::Packets::Bothways::Write_DMI_Train_Running_Number_to_int/ */
void Write_DMI_Train_Running_Number_to_int_DATA_Packets_Bothways(
  /* dmi_train_running_number_ct/ */
  DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg *dmi_train_running_number_ct,
  outC_Write_DMI_Train_Running_Number_to_int_DATA_Packets_Bothways *outC)
{
  static DMI_Train_Running_Number_int_array_T_DATA op_call;

  kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
    &outC->_L13,
    dmi_train_running_number_ct);
  outC->_L19 = outC->_L13.valid;
  outC->every = outC->_L19;
  if (outC->every) {
    /* _L18=(DATA::Packets::Bothways::C_DMI_Train_Running_Number_to_int#1)/ */
    C_DMI_Train_Running_Number_to_int_DATA_Packets_Bothways(
      &outC->_L13,
      &outC->Context_C_DMI_Train_Running_Number_to_int_1);
    kcg_copy_DMI_Train_Running_Number_int_array_T_DATA(
      &op_call,
      &outC->Context_C_DMI_Train_Running_Number_to_int_1.dmi_train_running_number_int);
  }
  kcg_copy_DMI_Train_Running_Number_int_array_T_DATA(
    &outC->_L20,
    (DMI_Train_Running_Number_int_array_T_DATA *)
      &cDMI_Train_Running_Number_int_DATA_Packets_Bothways);
  if (outC->every) {
    kcg_copy_DMI_Train_Running_Number_int_array_T_DATA(&outC->_L18, &op_call);
  }
  else {
    kcg_copy_DMI_Train_Running_Number_int_array_T_DATA(&outC->_L18, &outC->_L20);
  }
  kcg_copy_DMI_Train_Running_Number_int_array_T_DATA(
    &outC->dmi_train_running_number_int,
    &outC->_L18);
}

#ifndef KCG_USER_DEFINED_INIT
void Write_DMI_Train_Running_Number_to_int_init_DATA_Packets_Bothways(
  outC_Write_DMI_Train_Running_Number_to_int_DATA_Packets_Bothways *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;

  for (idx = 0; idx < 3; idx++) {
    outC->_L20[idx] = kcg_lit_int32(0);
  }
  outC->_L19 = kcg_true;
  for (idx1 = 0; idx1 < 3; idx1++) {
    outC->_L18[idx1] = kcg_lit_int32(0);
  }
  outC->_L13.valid = kcg_true;
  outC->_L13.systemTime = kcg_lit_int32(0);
  outC->_L13.trainRunningNumber = kcg_lit_int32(0);
  outC->every = kcg_true;
  for (idx2 = 0; idx2 < 3; idx2++) {
    outC->dmi_train_running_number_int[idx2] = kcg_lit_int32(0);
  }
  /* _L18=(DATA::Packets::Bothways::C_DMI_Train_Running_Number_to_int#1)/ */
  C_DMI_Train_Running_Number_to_int_init_DATA_Packets_Bothways(
    &outC->Context_C_DMI_Train_Running_Number_to_int_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Write_DMI_Train_Running_Number_to_int_reset_DATA_Packets_Bothways(
  outC_Write_DMI_Train_Running_Number_to_int_DATA_Packets_Bothways *outC)
{
  /* _L18=(DATA::Packets::Bothways::C_DMI_Train_Running_Number_to_int#1)/ */
  C_DMI_Train_Running_Number_to_int_reset_DATA_Packets_Bothways(
    &outC->Context_C_DMI_Train_Running_Number_to_int_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_DMI_Train_Running_Number_to_int_DATA_Packets_Bothways.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

