/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_int_to_DMI_Train_Running_Number_DATA_Packets_Bothways.h"

/* DATA::Packets::Bothways::Write_int_to_DMI_Train_Running_Number/ */
void Write_int_to_DMI_Train_Running_Number_DATA_Packets_Bothways(
  /* dmi_train_running_number_int/ */
  DMI_Train_Running_Number_int_array_T_DATA *dmi_train_running_number_int,
  outC_Write_int_to_DMI_Train_Running_Number_DATA_Packets_Bothways *outC)
{
  static DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg op_call;

  kcg_copy_DMI_Train_Running_Number_int_array_T_DATA(
    &outC->_L8,
    dmi_train_running_number_int);
  outC->_L13 = outC->_L8[0];
  outC->_L12 = kcg_lit_int64(1);
  outC->_L11 = outC->_L12 == outC->_L13;
  outC->every = outC->_L11;
  if (outC->every) {
    /* _L10=(DATA::Packets::Bothways::C_int_to_DMI_Train_Running_Number#1)/ */
    C_int_to_DMI_Train_Running_Number_DATA_Packets_Bothways(
      &outC->_L8,
      &outC->Context_C_int_to_DMI_Train_Running_Number_1);
    kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
      &op_call,
      &outC->Context_C_int_to_DMI_Train_Running_Number_1.dmi_train_running_number_ct);
  }
  kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
    &outC->_L14,
    (DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg *)
      &cDMI_Train_Running_Number_DATA_Packets_Bothways);
  if (outC->every) {
    kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
      &outC->_L10,
      &op_call);
  }
  else {
    kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
      &outC->_L10,
      &outC->_L14);
  }
  kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
    &outC->dmi_train_running_number_ct,
    &outC->_L10);
}

#ifndef KCG_USER_DEFINED_INIT
void Write_int_to_DMI_Train_Running_Number_init_DATA_Packets_Bothways(
  outC_Write_int_to_DMI_Train_Running_Number_DATA_Packets_Bothways *outC)
{
  static kcg_size idx;

  outC->_L14.valid = kcg_true;
  outC->_L14.systemTime = kcg_lit_int64(0);
  outC->_L14.trainRunningNumber = kcg_lit_int64(0);
  outC->_L11 = kcg_true;
  outC->_L12 = kcg_lit_int64(0);
  outC->_L13 = kcg_lit_int64(0);
  outC->_L10.valid = kcg_true;
  outC->_L10.systemTime = kcg_lit_int64(0);
  outC->_L10.trainRunningNumber = kcg_lit_int64(0);
  for (idx = 0; idx < 3; idx++) {
    outC->_L8[idx] = kcg_lit_int64(0);
  }
  outC->every = kcg_true;
  outC->dmi_train_running_number_ct.valid = kcg_true;
  outC->dmi_train_running_number_ct.systemTime = kcg_lit_int64(0);
  outC->dmi_train_running_number_ct.trainRunningNumber = kcg_lit_int64(0);
  /* _L10=(DATA::Packets::Bothways::C_int_to_DMI_Train_Running_Number#1)/ */
  C_int_to_DMI_Train_Running_Number_init_DATA_Packets_Bothways(
    &outC->Context_C_int_to_DMI_Train_Running_Number_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Write_int_to_DMI_Train_Running_Number_reset_DATA_Packets_Bothways(
  outC_Write_int_to_DMI_Train_Running_Number_DATA_Packets_Bothways *outC)
{
  /* _L10=(DATA::Packets::Bothways::C_int_to_DMI_Train_Running_Number#1)/ */
  C_int_to_DMI_Train_Running_Number_reset_DATA_Packets_Bothways(
    &outC->Context_C_int_to_DMI_Train_Running_Number_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_int_to_DMI_Train_Running_Number_DATA_Packets_Bothways.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

