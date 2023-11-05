/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mapEntryForLevel_manage_DMI_Output_Pkg.h"

/* manage_DMI_Output_Pkg::mapEntryForLevel/ */
void mapEntryForLevel_manage_DMI_Output_Pkg(
  /* dmi_entryRequest/ */
  DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_entryRequest,
  outC_mapEntryForLevel_manage_DMI_Output_Pkg *outC)
{
  outC->_L11 = Show_main_window_DMI_Types_Pkg;
  kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L9,
    dmi_entryRequest);
  kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L10,
    &outC->_L9);
  if (kcg_true) {
    outC->_L10.entry_request = outC->_L11;
  }
  outC->_L4 = Enter_revalidate_ETCS_level_DMI_Types_Pkg;
  kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L1,
    dmi_entryRequest);
  outC->_L3 = outC->_L1.entry_request;
  outC->_L5 = outC->_L3 == outC->_L4;
  outC->_L2 = outC->_L1.valid;
  outC->_L6 = outC->_L2 & outC->_L5;
  outC->_L8 = !outC->_L6;
  /* _L7= */
  if (outC->_L8) {
    kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->_L7,
      &outC->_L9);
  }
  else {
    kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->_L7,
      &outC->_L10);
  }
  kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->new_entryRequest,
    &outC->_L7);
}

#ifndef KCG_USER_DEFINED_INIT
void mapEntryForLevel_init_manage_DMI_Output_Pkg(
  outC_mapEntryForLevel_manage_DMI_Output_Pkg *outC)
{
  outC->_L11 = Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->_L10.valid = kcg_true;
  outC->_L10.system_clock = kcg_lit_int32(0);
  outC->_L10.entry_request = Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->_L9.valid = kcg_true;
  outC->_L9.system_clock = kcg_lit_int32(0);
  outC->_L9.entry_request = Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->_L8 = kcg_true;
  outC->_L7.valid = kcg_true;
  outC->_L7.system_clock = kcg_lit_int32(0);
  outC->_L7.entry_request = Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L4 = Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->_L3 = Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->_L2 = kcg_true;
  outC->_L1.valid = kcg_true;
  outC->_L1.system_clock = kcg_lit_int32(0);
  outC->_L1.entry_request = Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->new_entryRequest.valid = kcg_true;
  outC->new_entryRequest.system_clock = kcg_lit_int32(0);
  outC->new_entryRequest.entry_request =
    Enter_revalidate_driver_identifier_DMI_Types_Pkg;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void mapEntryForLevel_reset_manage_DMI_Output_Pkg(
  outC_mapEntryForLevel_manage_DMI_Output_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** mapEntryForLevel_manage_DMI_Output_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

