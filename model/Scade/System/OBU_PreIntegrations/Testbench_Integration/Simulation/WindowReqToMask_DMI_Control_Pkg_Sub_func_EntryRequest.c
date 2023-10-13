/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "WindowReqToMask_DMI_Control_Pkg_Sub_func_EntryRequest.h"

/* DMI_Control_Pkg::Sub_func::EntryRequest::WindowReqToMask/ */
void WindowReqToMask_DMI_Control_Pkg_Sub_func_EntryRequest(
  /* dmi_entry_request/ */
  DMI_List_Entry_Request_T_DMI_Types_Pkg dmi_entry_request,
  outC_WindowReqToMask_DMI_Control_Pkg_Sub_func_EntryRequest *outC)
{
  static kcg_size idx;
  static kcg_int64 acc;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_int64 noname;

  kcg_copy_Array_DMI_List_Entry_Request(
    &outC->_L27,
    (Array_DMI_List_Entry_Request *) &cDMI_List_Entry_Request_DMI_Control_Pkg);
  outC->_L26 = kcg_lit_int64(1);
  outC->_L21 = kcg_lit_int64(0);
  outC->_L1 = dmi_entry_request;
  /* _L22/ */
  for (idx = 0; idx < 15; idx++) {
    outC->_L22[idx] = outC->_L1;
  }
  outC->_L20 = kcg_true;
  outC->_L19 = outC->_L21;
  /* _L18= */
  if (outC->_L20) {
    /* _L18= */
    for (idx1 = 0; idx1 < 15; idx1++) {
      acc = outC->_L19;
      /* _L18=(DMI_Control_Pkg::Sub_func::EntryRequest::GenerateIndexForMask_iterator#1)/ */
      GenerateIndexForMask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest(
        /* _L18= */(kcg_int64) idx1,
        acc,
        outC->_L27[idx1],
        outC->_L22[idx1],
        &outC->Context_GenerateIndexForMask_iterator_1[idx1]);
      outC->_L19 = outC->Context_GenerateIndexForMask_iterator_1[idx1].acc_out;
      outC->_L18 = /* _L18= */(kcg_int64) (idx1 + 1);
      /* _L18= */
      if (!outC->Context_GenerateIndexForMask_iterator_1[idx1].condition) {
        break;
      }
    }
  }
  else {
    outC->_L18 = kcg_lit_int64(0);
  }
  outC->_L25 = outC->_L18 - outC->_L26;
  /* _L24/ */
  for (idx2 = 0; idx2 < 15; idx2++) {
    outC->_L24[idx2] = outC->_L25;
  }
  /* _L23= */
  for (idx3 = 0; idx3 < 15; idx3++) {
    /* _L23=(DMI_Control_Pkg::Sub_func::EntryRequest::Gen_array_window_mask_iterator#1)/ */
    Gen_array_window_mask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest(
      /* _L23= */(kcg_int64) idx3,
      outC->_L24[idx3],
      &outC->Context_Gen_array_window_mask_iterator_1[idx3]);
    outC->_L23[idx3] = outC->Context_Gen_array_window_mask_iterator_1[idx3].Output;
  }
  kcg_copy_array_bool_15(&outC->window_mask, &outC->_L23);
  noname = outC->_L19;
}

#ifndef KCG_USER_DEFINED_INIT
void WindowReqToMask_init_DMI_Control_Pkg_Sub_func_EntryRequest(
  outC_WindowReqToMask_DMI_Control_Pkg_Sub_func_EntryRequest *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;

  for (idx2 = 0; idx2 < 15; idx2++) {
    outC->_L27[idx2] = Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  }
  outC->_L26 = kcg_lit_int64(0);
  outC->_L25 = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 15; idx3++) {
    outC->_L24[idx3] = kcg_lit_int64(0);
  }
  for (idx4 = 0; idx4 < 15; idx4++) {
    outC->_L23[idx4] = kcg_true;
  }
  for (idx5 = 0; idx5 < 15; idx5++) {
    outC->_L22[idx5] = Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  }
  outC->_L21 = kcg_lit_int64(0);
  outC->_L20 = kcg_true;
  outC->_L19 = kcg_lit_int64(0);
  outC->_L18 = kcg_lit_int64(0);
  outC->_L1 = Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  for (idx6 = 0; idx6 < 15; idx6++) {
    outC->window_mask[idx6] = kcg_true;
  }
  for (idx1 = 0; idx1 < 15; idx1++) {
    /* _L23=(DMI_Control_Pkg::Sub_func::EntryRequest::Gen_array_window_mask_iterator#1)/ */
    Gen_array_window_mask_iterator_init_DMI_Control_Pkg_Sub_func_EntryRequest(
      &outC->Context_Gen_array_window_mask_iterator_1[idx1]);
  }
  for (idx = 0; idx < 15; idx++) {
    /* _L18=(DMI_Control_Pkg::Sub_func::EntryRequest::GenerateIndexForMask_iterator#1)/ */
    GenerateIndexForMask_iterator_init_DMI_Control_Pkg_Sub_func_EntryRequest(
      &outC->Context_GenerateIndexForMask_iterator_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void WindowReqToMask_reset_DMI_Control_Pkg_Sub_func_EntryRequest(
  outC_WindowReqToMask_DMI_Control_Pkg_Sub_func_EntryRequest *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  for (idx1 = 0; idx1 < 15; idx1++) {
    /* _L23=(DMI_Control_Pkg::Sub_func::EntryRequest::Gen_array_window_mask_iterator#1)/ */
    Gen_array_window_mask_iterator_reset_DMI_Control_Pkg_Sub_func_EntryRequest(
      &outC->Context_Gen_array_window_mask_iterator_1[idx1]);
  }
  for (idx = 0; idx < 15; idx++) {
    /* _L18=(DMI_Control_Pkg::Sub_func::EntryRequest::GenerateIndexForMask_iterator#1)/ */
    GenerateIndexForMask_iterator_reset_DMI_Control_Pkg_Sub_func_EntryRequest(
      &outC->Context_GenerateIndexForMask_iterator_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** WindowReqToMask_DMI_Control_Pkg_Sub_func_EntryRequest.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

