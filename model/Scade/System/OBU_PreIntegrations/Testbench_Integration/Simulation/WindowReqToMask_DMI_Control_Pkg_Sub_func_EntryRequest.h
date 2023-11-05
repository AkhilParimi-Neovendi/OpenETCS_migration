/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _WindowReqToMask_DMI_Control_Pkg_Sub_func_EntryRequest_H_
#define _WindowReqToMask_DMI_Control_Pkg_Sub_func_EntryRequest_H_

#include "kcg_types.h"
#include "Gen_array_window_mask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest.h"
#include "GenerateIndexForMask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_bool_15 /* window_mask/ */ window_mask;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Gen_array_window_mask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest /* _L23=(DMI_Control_Pkg::Sub_func::EntryRequest::Gen_array_window_mask_iterator#1)/ */ Context_Gen_array_window_mask_iterator_1[15];
  outC_GenerateIndexForMask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest /* _L18=(DMI_Control_Pkg::Sub_func::EntryRequest::GenerateIndexForMask_iterator#1)/ */ Context_GenerateIndexForMask_iterator_1[15];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_List_Entry_Request_T_DMI_Types_Pkg /* _L1/ */ _L1;
  kcg_int32 /* _L18/ */ _L18;
  kcg_int32 /* _L19/ */ _L19;
  kcg_bool /* _L20/ */ _L20;
  kcg_int32 /* _L21/ */ _L21;
  Array_DMI_List_Entry_Request /* _L22/ */ _L22;
  array_bool_15 /* _L23/ */ _L23;
  array_int32_15 /* _L24/ */ _L24;
  kcg_int32 /* _L25/ */ _L25;
  kcg_int32 /* _L26/ */ _L26;
  Array_DMI_List_Entry_Request /* _L27/ */ _L27;
} outC_WindowReqToMask_DMI_Control_Pkg_Sub_func_EntryRequest;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::EntryRequest::WindowReqToMask/ */
extern void WindowReqToMask_DMI_Control_Pkg_Sub_func_EntryRequest(
  /* dmi_entry_request/ */
  DMI_List_Entry_Request_T_DMI_Types_Pkg dmi_entry_request,
  outC_WindowReqToMask_DMI_Control_Pkg_Sub_func_EntryRequest *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void WindowReqToMask_reset_DMI_Control_Pkg_Sub_func_EntryRequest(
  outC_WindowReqToMask_DMI_Control_Pkg_Sub_func_EntryRequest *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void WindowReqToMask_init_DMI_Control_Pkg_Sub_func_EntryRequest(
  outC_WindowReqToMask_DMI_Control_Pkg_Sub_func_EntryRequest *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _WindowReqToMask_DMI_Control_Pkg_Sub_func_EntryRequest_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** WindowReqToMask_DMI_Control_Pkg_Sub_func_EntryRequest.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

