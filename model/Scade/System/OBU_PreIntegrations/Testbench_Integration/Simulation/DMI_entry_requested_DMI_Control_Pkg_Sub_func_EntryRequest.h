/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _DMI_entry_requested_DMI_Control_Pkg_Sub_func_EntryRequest_H_
#define _DMI_entry_requested_DMI_Control_Pkg_Sub_func_EntryRequest_H_

#include "kcg_types.h"
#include "WindowReqToMask_DMI_Control_Pkg_Sub_func_EntryRequest.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* trainRN/ */ trainRN;
  kcg_bool /* driverID/ */ driverID;
  kcg_bool /* mainmenu/ */ mainmenu;
  kcg_bool /* hideMainmenu/ */ hideMainmenu;
  kcg_bool /* LevelMenu/ */ LevelMenu;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_WindowReqToMask_DMI_Control_Pkg_Sub_func_EntryRequest /* _L38=(DMI_Control_Pkg::Sub_func::EntryRequest::WindowReqToMask#4)/ */ Context_WindowReqToMask_4;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg /* _L1/ */ _L1;
  array_bool_15 /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
  array_bool_15 /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
  array_bool_15 /* _L8/ */ _L8;
  kcg_bool /* _L21/ */ _L21;
  array_bool_15 /* _L22/ */ _L22;
  array_bool_15 /* _L23/ */ _L23;
  kcg_bool /* _L24/ */ _L24;
  kcg_bool /* _L25/ */ _L25;
  DMI_List_Entry_Request_T_DMI_Types_Pkg /* _L40/ */ _L40;
  array_bool_15 /* _L38/ */ _L38;
  array_bool_15 /* _L41/ */ _L41;
  kcg_bool /* _L42/ */ _L42;
} outC_DMI_entry_requested_DMI_Control_Pkg_Sub_func_EntryRequest;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::EntryRequest::DMI_entry_requested/ */
extern void DMI_entry_requested_DMI_Control_Pkg_Sub_func_EntryRequest(
  /* DMI_entry_request/ */
  DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg *DMI_entry_request,
  outC_DMI_entry_requested_DMI_Control_Pkg_Sub_func_EntryRequest *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void DMI_entry_requested_reset_DMI_Control_Pkg_Sub_func_EntryRequest(
  outC_DMI_entry_requested_DMI_Control_Pkg_Sub_func_EntryRequest *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void DMI_entry_requested_init_DMI_Control_Pkg_Sub_func_EntryRequest(
  outC_DMI_entry_requested_DMI_Control_Pkg_Sub_func_EntryRequest *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _DMI_entry_requested_DMI_Control_Pkg_Sub_func_EntryRequest_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** DMI_entry_requested_DMI_Control_Pkg_Sub_func_EntryRequest.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

