/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _doDriverRequests_manage_DMI_Input_Pkg_H_
#define _doDriverRequests_manage_DMI_Input_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_DriverRequest_T_DMI_Types_Pkg /* outDriverRequestToModes/ */ outDriverRequestToModes;
  kcg_bool /* outDriverRequestToLevels/ */ outDriverRequestToLevels;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* IfBlock1:then:_L18/ */ _L18_then_IfBlock1;
  DMI_Request_T_DMI_Types_Pkg /* IfBlock1:then:_L17/ */ _L17_then_IfBlock1;
  DMI_Request_T_DMI_Types_Pkg /* IfBlock1:then:_L16/ */ _L16_then_IfBlock1;
  DMI_Request_T_DMI_Types_Pkg /* IfBlock1:then:_L15/ */ _L15_then_IfBlock1;
  DMI_Request_T_DMI_Types_Pkg /* IfBlock1:then:_L13/ */ _L13_then_IfBlock1;
  DMI_Request_T_DMI_Types_Pkg /* IfBlock1:then:_L12/ */ _L12_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L11/ */ _L11_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L10/ */ _L10_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L9/ */ _L9_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L8/ */ _L8_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L7/ */ _L7_then_IfBlock1;
  DMI_Request_T_DMI_Types_Pkg /* IfBlock1:then:_L6/ */ _L6_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L5/ */ _L5_then_IfBlock1;
  DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg /* IfBlock1:then:_L4/ */ _L4_then_IfBlock1;
  DMI_Request_T_DMI_Types_Pkg /* IfBlock1:then:_L3/ */ _L3_then_IfBlock1;
  DMI_DriverRequest_T_DMI_Types_Pkg /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  DMI_DriverRequest_T_DMI_Types_Pkg /* IfBlock1:else:_L1/ */ _L1_else_IfBlock1;
  kcg_bool /* isValid/ */ isValid;
  DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L4/ */ _L4;
  DMI_Request_T_DMI_Types_Pkg /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L11/ */ _L11;
  DMI_Request_T_DMI_Types_Pkg /* _L12/ */ _L12;
} outC_doDriverRequests_manage_DMI_Input_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* manage_DMI_Input_Pkg::doDriverRequests/ */
extern void doDriverRequests_manage_DMI_Input_Pkg(
  /* inDriverRequest/ */
  DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg *inDriverRequest,
  outC_doDriverRequests_manage_DMI_Input_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void doDriverRequests_reset_manage_DMI_Input_Pkg(
  outC_doDriverRequests_manage_DMI_Input_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void doDriverRequests_init_manage_DMI_Input_Pkg(
  outC_doDriverRequests_manage_DMI_Input_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _doDriverRequests_manage_DMI_Input_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** doDriverRequests_manage_DMI_Input_Pkg.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

