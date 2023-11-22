/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_EVC_Radio_Net_Da_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_DMI_EVC_Radio_Net_Data_to_int1/ */
void CAST_DMI_EVC_Radio_Net_Da_DATA_Packets_EVC_to_DMI(
  /* dmi_evc_radio_net_data_ct/ */
  DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_evc_radio_net_data_ct,
  outC_CAST_DMI_EVC_Radio_Net_Da_DATA_Packets_EVC_to_DMI *outC)
{
  kcg_copy_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L8,
    dmi_evc_radio_net_data_ct);
  outC->_L4 = outC->_L8.valid;
  /* _L7=(Utilities::Bool_to_Int#1)/ */
  Bool_to_Int_Utilities(outC->_L4, &outC->Context_Bool_to_Int_1);
  outC->_L7 = outC->Context_Bool_to_Int_1.int_out;
  outC->_L2 = outC->_L8.nid_mn;
  /* _L6=(TM_conversions::CAST_NID_MN_to_int#1)/ */
  CAST_NID_MN_to_int_TM_conversions(
    outC->_L2,
    &outC->Context_CAST_NID_MN_to_int_1);
  outC->_L6 = outC->Context_CAST_NID_MN_to_int_1.nid_mn_int;
  outC->_L3 = outC->_L8.system_clock;
  outC->_L5[0] = outC->_L7;
  outC->_L5[1] = outC->_L3;
  outC->_L5[2] = outC->_L6;
  kcg_copy__13_DMI_EVC_Radio_Net_Data_int_array_T_DATA(
    &outC->dmi_evc_radio_net_data_int,
    &outC->_L5);
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_DMI_EVC_Radio_Net_Da_init_DATA_Packets_EVC_to_DMI(
  outC_CAST_DMI_EVC_Radio_Net_Da_DATA_Packets_EVC_to_DMI *outC)
{
  kcg_size idx;
  kcg_size idx1;

  outC->_L8.valid = kcg_true;
  outC->_L8.system_clock = kcg_lit_int32(0);
  outC->_L8.nid_mn = kcg_lit_int32(0);
  outC->_L7 = kcg_lit_int32(0);
  outC->_L6 = kcg_lit_int32(0);
  for (idx = 0; idx < 3; idx++) {
    outC->_L5[idx] = kcg_lit_int32(0);
  }
  outC->_L2 = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
  outC->_L4 = kcg_true;
  for (idx1 = 0; idx1 < 3; idx1++) {
    outC->dmi_evc_radio_net_data_int[idx1] = kcg_lit_int32(0);
  }
  /* _L6=(TM_conversions::CAST_NID_MN_to_int#1)/ */
  CAST_NID_MN_to_int_init_TM_conversions(&outC->Context_CAST_NID_MN_to_int_1);
  /* _L7=(Utilities::Bool_to_Int#1)/ */
  Bool_to_Int_init_Utilities(&outC->Context_Bool_to_Int_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_DMI_EVC_Radio_Net_Da_reset_DATA_Packets_EVC_to_DMI(
  outC_CAST_DMI_EVC_Radio_Net_Da_DATA_Packets_EVC_to_DMI *outC)
{
  /* _L6=(TM_conversions::CAST_NID_MN_to_int#1)/ */
  CAST_NID_MN_to_int_reset_TM_conversions(&outC->Context_CAST_NID_MN_to_int_1);
  /* _L7=(Utilities::Bool_to_Int#1)/ */
  Bool_to_Int_reset_Utilities(&outC->Context_Bool_to_Int_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_DMI_EVC_Radio_Net_Da_DATA_Packets_EVC_to_DMI.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

