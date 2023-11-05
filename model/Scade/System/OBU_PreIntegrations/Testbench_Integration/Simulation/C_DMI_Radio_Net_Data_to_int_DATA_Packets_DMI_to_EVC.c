/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_DMI_Radio_Net_Data_to_int_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::C_DMI_Radio_Net_Data_to_int/ */
void C_DMI_Radio_Net_Data_to_int_DATA_Packets_DMI_to_EVC(
  /* dmi_radio_net_data_ct/ */
  DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg *dmi_radio_net_data_ct,
  outC_C_DMI_Radio_Net_Data_to_int_DATA_Packets_DMI_to_EVC *outC)
{
  kcg_copy_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L9,
    dmi_radio_net_data_ct);
  outC->_L13 = outC->_L9.valid;
  /* _L17=(Utilities::Bool_to_Int#1)/ */
  Bool_to_Int_Utilities(outC->_L13, &outC->Context_Bool_to_Int_1);
  outC->_L17 = outC->Context_Bool_to_Int_1.int_out;
  outC->_L12 = outC->_L9.systemTime;
  outC->_L2[0] = outC->_L17;
  outC->_L2[1] = outC->_L12;
  kcg_copy_DMI_Radio_Net_Data_int_array_T_DATA(
    &outC->dmi_radio_net_data_int,
    &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void C_DMI_Radio_Net_Data_to_int_init_DATA_Packets_DMI_to_EVC(
  outC_C_DMI_Radio_Net_Data_to_int_DATA_Packets_DMI_to_EVC *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L17 = kcg_lit_int32(0);
  outC->_L12 = kcg_lit_int32(0);
  outC->_L13 = kcg_true;
  outC->_L9.valid = kcg_true;
  outC->_L9.systemTime = kcg_lit_int32(0);
  for (idx = 0; idx < 2; idx++) {
    outC->_L2[idx] = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 2; idx1++) {
    outC->dmi_radio_net_data_int[idx1] = kcg_lit_int32(0);
  }
  /* _L17=(Utilities::Bool_to_Int#1)/ */
  Bool_to_Int_init_Utilities(&outC->Context_Bool_to_Int_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_DMI_Radio_Net_Data_to_int_reset_DATA_Packets_DMI_to_EVC(
  outC_C_DMI_Radio_Net_Data_to_int_DATA_Packets_DMI_to_EVC *outC)
{
  /* _L17=(Utilities::Bool_to_Int#1)/ */
  Bool_to_Int_reset_Utilities(&outC->Context_Bool_to_Int_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_DMI_Radio_Net_Data_to_int_DATA_Packets_DMI_to_EVC.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

