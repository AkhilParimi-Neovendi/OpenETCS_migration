/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_int_to_DMI_Radio_Net_Data_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Radio_Net_Data/ */
void C_int_to_DMI_Radio_Net_Data_DATA_Packets_DMI_to_EVC(
  /* dmi_radio_net_data_int/ */
  DMI_Radio_Net_Data_int_array_T_DATA *dmi_radio_net_data_int,
  outC_C_int_to_DMI_Radio_Net_Data_DATA_Packets_DMI_to_EVC *outC)
{
  kcg_copy_DMI_Radio_Net_Data_int_array_T_DATA(
    &outC->_L5,
    dmi_radio_net_data_int);
  outC->_L4 = outC->_L5[0];
  /* _L6=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_Utilities(outC->_L4, &outC->Context_Int_to_Bool_1);
  outC->_L6 = outC->Context_Int_to_Bool_1.bool_out;
  outC->_L3 = outC->_L5[1];
  outC->_L2.valid = outC->_L6;
  outC->_L2.systemTime = outC->_L3;
  kcg_copy_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->dmi_radio_net_data_ct,
    &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void C_int_to_DMI_Radio_Net_Data_init_DATA_Packets_DMI_to_EVC(
  outC_C_int_to_DMI_Radio_Net_Data_DATA_Packets_DMI_to_EVC *outC)
{
  static kcg_size idx;

  outC->_L6 = kcg_true;
  for (idx = 0; idx < 2; idx++) {
    outC->_L5[idx] = kcg_lit_int32(0);
  }
  outC->_L3 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->_L2.valid = kcg_true;
  outC->_L2.systemTime = kcg_lit_int32(0);
  outC->dmi_radio_net_data_ct.valid = kcg_true;
  outC->dmi_radio_net_data_ct.systemTime = kcg_lit_int32(0);
  /* _L6=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_init_Utilities(&outC->Context_Int_to_Bool_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_int_to_DMI_Radio_Net_Data_reset_DATA_Packets_DMI_to_EVC(
  outC_C_int_to_DMI_Radio_Net_Data_DATA_Packets_DMI_to_EVC *outC)
{
  /* _L6=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_reset_Utilities(&outC->Context_Int_to_Bool_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_int_to_DMI_Radio_Net_Data_DATA_Packets_DMI_to_EVC.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

