/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_Entry_Request1_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Entry_Request1/ */
void CAST_int_to_DMI_Entry_Request1_DATA_Packets_EVC_to_DMI(
  /* dmi_entry_request_int/ */
  DMI_Entry_Request_int_array_T_DATA *dmi_entry_request_int,
  outC_CAST_int_to_DMI_Entry_Request1_DATA_Packets_EVC_to_DMI *outC)
{
  kcg_copy_DMI_Entry_Request_int_array_T_DATA(&outC->_L15, dmi_entry_request_int);
  outC->_L11 = outC->_L15[0];
  /* _L14=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_Utilities(outC->_L11, &outC->Context_Int_to_Bool_1);
  outC->_L14 = outC->Context_Int_to_Bool_1.bool_out;
  outC->_L12 = outC->_L15[1];
  outC->_L13 = outC->_L15[2];
  /* _L16=(DATA::Variables::CAST_int_to_DMI_List_Entry_Request#1)/ */
  CAST_int_to_DMI_List_Entry_Request_DATA_Variables(
    outC->_L13,
    &outC->Context_CAST_int_to_DMI_List_Entry_Request_1);
  outC->_L16 =
    outC->Context_CAST_int_to_DMI_List_Entry_Request_1.dmi_list_entry_request_ct;
  outC->_L9.valid = outC->_L14;
  outC->_L9.system_clock = outC->_L12;
  outC->_L9.entry_request = outC->_L16;
  kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->dmi_entry_request_ct,
    &outC->_L9);
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_int_to_DMI_Entry_Request1_init_DATA_Packets_EVC_to_DMI(
  outC_CAST_int_to_DMI_Entry_Request1_DATA_Packets_EVC_to_DMI *outC)
{
  static kcg_size idx;

  outC->_L16 = Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  for (idx = 0; idx < 3; idx++) {
    outC->_L15[idx] = kcg_lit_int64(0);
  }
  outC->_L9.valid = kcg_true;
  outC->_L9.system_clock = kcg_lit_int64(0);
  outC->_L9.entry_request = Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->_L13 = kcg_lit_int64(0);
  outC->_L12 = kcg_lit_int64(0);
  outC->_L11 = kcg_lit_int64(0);
  outC->_L14 = kcg_true;
  outC->dmi_entry_request_ct.valid = kcg_true;
  outC->dmi_entry_request_ct.system_clock = kcg_lit_int64(0);
  outC->dmi_entry_request_ct.entry_request =
    Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  /* _L16=(DATA::Variables::CAST_int_to_DMI_List_Entry_Request#1)/ */
  CAST_int_to_DMI_List_Entry_Request_init_DATA_Variables(
    &outC->Context_CAST_int_to_DMI_List_Entry_Request_1);
  /* _L14=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_init_Utilities(&outC->Context_Int_to_Bool_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_int_to_DMI_Entry_Request1_reset_DATA_Packets_EVC_to_DMI(
  outC_CAST_int_to_DMI_Entry_Request1_DATA_Packets_EVC_to_DMI *outC)
{
  /* _L16=(DATA::Variables::CAST_int_to_DMI_List_Entry_Request#1)/ */
  CAST_int_to_DMI_List_Entry_Request_reset_DATA_Variables(
    &outC->Context_CAST_int_to_DMI_List_Entry_Request_1);
  /* _L14=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_reset_Utilities(&outC->Context_Int_to_Bool_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_int_to_DMI_Entry_Request1_DATA_Packets_EVC_to_DMI.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

