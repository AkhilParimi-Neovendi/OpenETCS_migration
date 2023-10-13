/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_EVC_Radio_Net_Data1_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Radio_Net_Data1/ */
void CAST_int_to_DMI_EVC_Radio_Net_Data1_DATA_Packets_EVC_to_DMI(
  /* dmi_evc_radio_net_data_int/ */
  DMI_EVC_Radio_Net_Data_int_array_T_DATA *dmi_evc_radio_net_data_int,
  outC_CAST_int_to_DMI_EVC_Radio_Net_Data1_DATA_Packets_EVC_to_DMI *outC)
{
  kcg_copy_DMI_EVC_Radio_Net_Data_int_array_T_DATA(
    &outC->_L10,
    dmi_evc_radio_net_data_int);
  outC->_L4 = outC->_L10[0];
  /* _L7=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_Utilities(outC->_L4, &outC->Context_Int_to_Bool_1);
  outC->_L7 = outC->Context_Int_to_Bool_1.bool_out;
  outC->_L3 = outC->_L10[1];
  outC->_L2 = outC->_L10[2];
  /* _L6=(TM_conversions::CAST_Int_to_NID_MN#1)/ */
  CAST_Int_to_NID_MN_TM_conversions(
    outC->_L2,
    &outC->Context_CAST_Int_to_NID_MN_1);
  outC->_L6 = outC->Context_CAST_Int_to_NID_MN_1.nid_mn;
  outC->_L5.valid = outC->_L7;
  outC->_L5.system_clock = outC->_L3;
  outC->_L5.nid_mn = outC->_L6;
  kcg_copy_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->dmi_evc_radio_net_data_ct,
    &outC->_L5);
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_int_to_DMI_EVC_Radio_Net_Data1_init_DATA_Packets_EVC_to_DMI(
  outC_CAST_int_to_DMI_EVC_Radio_Net_Data1_DATA_Packets_EVC_to_DMI *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 3; idx++) {
    outC->_L10[idx] = kcg_lit_int64(0);
  }
  outC->_L7 = kcg_true;
  outC->_L6 = kcg_lit_int64(0);
  outC->_L5.valid = kcg_true;
  outC->_L5.system_clock = kcg_lit_int64(0);
  outC->_L5.nid_mn = kcg_lit_int64(0);
  outC->_L2 = kcg_lit_int64(0);
  outC->_L3 = kcg_lit_int64(0);
  outC->_L4 = kcg_lit_int64(0);
  outC->dmi_evc_radio_net_data_ct.valid = kcg_true;
  outC->dmi_evc_radio_net_data_ct.system_clock = kcg_lit_int64(0);
  outC->dmi_evc_radio_net_data_ct.nid_mn = kcg_lit_int64(0);
  /* _L6=(TM_conversions::CAST_Int_to_NID_MN#1)/ */
  CAST_Int_to_NID_MN_init_TM_conversions(&outC->Context_CAST_Int_to_NID_MN_1);
  /* _L7=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_init_Utilities(&outC->Context_Int_to_Bool_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_int_to_DMI_EVC_Radio_Net_Data1_reset_DATA_Packets_EVC_to_DMI(
  outC_CAST_int_to_DMI_EVC_Radio_Net_Data1_DATA_Packets_EVC_to_DMI *outC)
{
  /* _L6=(TM_conversions::CAST_Int_to_NID_MN#1)/ */
  CAST_Int_to_NID_MN_reset_TM_conversions(&outC->Context_CAST_Int_to_NID_MN_1);
  /* _L7=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_reset_Utilities(&outC->Context_Int_to_Bool_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_int_to_DMI_EVC_Radio_Net_Data1_DATA_Packets_EVC_to_DMI.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

