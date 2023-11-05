/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_int_to_DMI_Train_Running_Number_DATA_Packets_Bothways.h"

/* DATA::Packets::Bothways::C_int_to_DMI_Train_Running_Number/ */
void C_int_to_DMI_Train_Running_Number_DATA_Packets_Bothways(
  /* dmi_train_running_number_int/ */
  DMI_Train_Running_Number_int_array_T_DATA *dmi_train_running_number_int,
  outC_C_int_to_DMI_Train_Running_Number_DATA_Packets_Bothways *outC)
{
  kcg_copy_DMI_Train_Running_Number_int_array_T_DATA(
    &outC->_L8,
    dmi_train_running_number_int);
  outC->_L5 = outC->_L8[0];
  /* _L9=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_Utilities(outC->_L5, &outC->Context_Int_to_Bool_1);
  outC->_L9 = outC->Context_Int_to_Bool_1.bool_out;
  outC->_L3 = outC->_L8[2];
  /* _L6=(TM_conversions::CAST_Int_to_NID_OPERATIONAL#1)/ */
  CAST_Int_to_NID_OPERATIONAL_TM_conversions(
    outC->_L3,
    &outC->Context_CAST_Int_to_NID_OPERATIONAL_1);
  outC->_L6 = outC->Context_CAST_Int_to_NID_OPERATIONAL_1.nid_operational;
  outC->_L4 = outC->_L8[1];
  outC->_L2.valid = outC->_L9;
  outC->_L2.systemTime = outC->_L4;
  outC->_L2.trainRunningNumber = outC->_L6;
  kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
    &outC->dmi_train_running_number_ct,
    &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void C_int_to_DMI_Train_Running_Number_init_DATA_Packets_Bothways(
  outC_C_int_to_DMI_Train_Running_Number_DATA_Packets_Bothways *outC)
{
  static kcg_size idx;

  outC->_L9 = kcg_true;
  for (idx = 0; idx < 3; idx++) {
    outC->_L8[idx] = kcg_lit_int32(0);
  }
  outC->_L6 = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->_L5 = kcg_lit_int32(0);
  outC->_L2.valid = kcg_true;
  outC->_L2.systemTime = kcg_lit_int32(0);
  outC->_L2.trainRunningNumber = kcg_lit_int32(0);
  outC->dmi_train_running_number_ct.valid = kcg_true;
  outC->dmi_train_running_number_ct.systemTime = kcg_lit_int32(0);
  outC->dmi_train_running_number_ct.trainRunningNumber = kcg_lit_int32(0);
  /* _L6=(TM_conversions::CAST_Int_to_NID_OPERATIONAL#1)/ */
  CAST_Int_to_NID_OPERATIONAL_init_TM_conversions(
    &outC->Context_CAST_Int_to_NID_OPERATIONAL_1);
  /* _L9=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_init_Utilities(&outC->Context_Int_to_Bool_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_int_to_DMI_Train_Running_Number_reset_DATA_Packets_Bothways(
  outC_C_int_to_DMI_Train_Running_Number_DATA_Packets_Bothways *outC)
{
  /* _L6=(TM_conversions::CAST_Int_to_NID_OPERATIONAL#1)/ */
  CAST_Int_to_NID_OPERATIONAL_reset_TM_conversions(
    &outC->Context_CAST_Int_to_NID_OPERATIONAL_1);
  /* _L9=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_reset_Utilities(&outC->Context_Int_to_Bool_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_int_to_DMI_Train_Running_Number_DATA_Packets_Bothways.c
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

