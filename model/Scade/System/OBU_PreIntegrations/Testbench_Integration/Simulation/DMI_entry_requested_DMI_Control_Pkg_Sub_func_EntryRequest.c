/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DMI_entry_requested_DMI_Control_Pkg_Sub_func_EntryRequest.h"

/* DMI_Control_Pkg::Sub_func::EntryRequest::DMI_entry_requested/ */
void DMI_entry_requested_DMI_Control_Pkg_Sub_func_EntryRequest(
  /* DMI_entry_request/ */
  DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg *DMI_entry_request,
  outC_DMI_entry_requested_DMI_Control_Pkg_Sub_func_EntryRequest *outC)
{
  kcg_copy_array_bool_15(
    &outC->_L41,
    (array_bool_15 *) &cETCS_Level_Menu_mask_DMI_Control_Pkg);
  kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L1,
    DMI_entry_request);
  outC->_L40 = outC->_L1.entry_request;
  /* _L38=(DMI_Control_Pkg::Sub_func::EntryRequest::WindowReqToMask#4)/ */
  WindowReqToMask_DMI_Control_Pkg_Sub_func_EntryRequest(
    outC->_L40,
    &outC->Context_WindowReqToMask_4);
  kcg_copy_array_bool_15(
    &outC->_L38,
    &outC->Context_WindowReqToMask_4.window_mask);
  outC->_L42 = kcg_comp_array_bool_15(&outC->_L38, &outC->_L41);
  outC->LevelMenu = outC->_L42;
  kcg_copy_array_bool_15(
    &outC->_L23,
    (array_bool_15 *) &ValidateTraindata_window_mask_DMI_Control_Pkg);
  outC->_L24 = kcg_comp_array_bool_15(&outC->_L23, &outC->_L38);
  kcg_copy_array_bool_15(
    &outC->_L8,
    (array_bool_15 *) &Mainmenu_window_mask_DMI_Control_Pkg);
  outC->_L7 = kcg_comp_array_bool_15(&outC->_L38, &outC->_L8);
  outC->_L25 = outC->_L7 | outC->_L24;
  kcg_copy_array_bool_15(
    &outC->_L22,
    (array_bool_15 *) &HideMainmenu_window_mask_DMI_Control_Pkg);
  outC->_L21 = kcg_comp_array_bool_15(&outC->_L38, &outC->_L22);
  outC->hideMainmenu = outC->_L21;
  kcg_copy_array_bool_15(
    &outC->_L2,
    (array_bool_15 *) &DriverID_window_mask_DMI_Control_Pkg);
  outC->_L6 = kcg_comp_array_bool_15(&outC->_L38, &outC->_L2);
  kcg_copy_array_bool_15(
    &outC->_L5,
    (array_bool_15 *) &TrainRN_window_mask_DMI_Control_Pkg);
  outC->_L3 = kcg_comp_array_bool_15(&outC->_L5, &outC->_L38);
  outC->trainRN = outC->_L3;
  outC->driverID = outC->_L6;
  outC->mainmenu = outC->_L25;
}

#ifndef KCG_USER_DEFINED_INIT
void DMI_entry_requested_init_DMI_Control_Pkg_Sub_func_EntryRequest(
  outC_DMI_entry_requested_DMI_Control_Pkg_Sub_func_EntryRequest *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;

  outC->_L42 = kcg_true;
  for (idx = 0; idx < 15; idx++) {
    outC->_L41[idx] = kcg_true;
  }
  for (idx1 = 0; idx1 < 15; idx1++) {
    outC->_L38[idx1] = kcg_true;
  }
  outC->_L40 = Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->_L25 = kcg_true;
  outC->_L24 = kcg_true;
  for (idx2 = 0; idx2 < 15; idx2++) {
    outC->_L23[idx2] = kcg_true;
  }
  for (idx3 = 0; idx3 < 15; idx3++) {
    outC->_L22[idx3] = kcg_true;
  }
  outC->_L21 = kcg_true;
  for (idx4 = 0; idx4 < 15; idx4++) {
    outC->_L8[idx4] = kcg_true;
  }
  outC->_L7 = kcg_true;
  outC->_L6 = kcg_true;
  for (idx5 = 0; idx5 < 15; idx5++) {
    outC->_L5[idx5] = kcg_true;
  }
  outC->_L3 = kcg_true;
  for (idx6 = 0; idx6 < 15; idx6++) {
    outC->_L2[idx6] = kcg_true;
  }
  outC->_L1.valid = kcg_true;
  outC->_L1.system_clock = kcg_lit_int64(0);
  outC->_L1.entry_request = Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->LevelMenu = kcg_true;
  outC->hideMainmenu = kcg_true;
  outC->mainmenu = kcg_true;
  outC->driverID = kcg_true;
  outC->trainRN = kcg_true;
  /* _L38=(DMI_Control_Pkg::Sub_func::EntryRequest::WindowReqToMask#4)/ */
  WindowReqToMask_init_DMI_Control_Pkg_Sub_func_EntryRequest(
    &outC->Context_WindowReqToMask_4);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void DMI_entry_requested_reset_DMI_Control_Pkg_Sub_func_EntryRequest(
  outC_DMI_entry_requested_DMI_Control_Pkg_Sub_func_EntryRequest *outC)
{
  /* _L38=(DMI_Control_Pkg::Sub_func::EntryRequest::WindowReqToMask#4)/ */
  WindowReqToMask_reset_DMI_Control_Pkg_Sub_func_EntryRequest(
    &outC->Context_WindowReqToMask_4);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** DMI_entry_requested_DMI_Control_Pkg_Sub_func_EntryRequest.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

