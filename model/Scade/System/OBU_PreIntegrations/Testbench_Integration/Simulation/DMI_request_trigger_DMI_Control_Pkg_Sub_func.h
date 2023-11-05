/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _DMI_request_trigger_DMI_Control_Pkg_Sub_func_H_
#define _DMI_request_trigger_DMI_Control_Pkg_Sub_func_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg /* dmi_driver_request/ */ dmi_driver_request;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L2/ */ _L2;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L3/ */ _L3;
  DMI_Request_T_DMI_Types_Pkg /* _L4/ */ _L4;
} outC_DMI_request_trigger_DMI_Control_Pkg_Sub_func;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::DMI_request_trigger/ */
extern void DMI_request_trigger_DMI_Control_Pkg_Sub_func(
  /* trigger/ */
  kcg_bool trigger,
  /* systemTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  /* dmi_request/ */
  DMI_Request_T_DMI_Types_Pkg dmi_request,
  outC_DMI_request_trigger_DMI_Control_Pkg_Sub_func *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void DMI_request_trigger_reset_DMI_Control_Pkg_Sub_func(
  outC_DMI_request_trigger_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void DMI_request_trigger_init_DMI_Control_Pkg_Sub_func(
  outC_DMI_request_trigger_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _DMI_request_trigger_DMI_Control_Pkg_Sub_func_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** DMI_request_trigger_DMI_Control_Pkg_Sub_func.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

