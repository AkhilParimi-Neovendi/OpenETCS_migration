/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _updateDMIStatus_manage_DMI_Input_Pkg_H_
#define _updateDMIStatus_manage_DMI_Input_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_EVC_status_T_DMI_Types_Pkg /* newStatus/ */ newStatus;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_to_EVC_Message_T_API_DMI_Pkg /* _L1/ */ _L1;
  DMI_EVC_status_T_DMI_Types_Pkg /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  DMI_EVC_status_T_DMI_Types_Pkg /* _L15/ */ _L15;
  kcg_bool /* _L16/ */ _L16;
  kcg_bool /* _L17/ */ _L17;
  kcg_bool /* _L18/ */ _L18;
  kcg_bool /* _L19/ */ _L19;
  DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg /* _L20/ */ _L20;
  DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg /* _L21/ */ _L21;
  DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg /* _L22/ */ _L22;
  kcg_bool /* _L24/ */ _L24;
  kcg_bool /* _L23/ */ _L23;
  kcg_bool /* _L25/ */ _L25;
  kcg_bool /* _L28/ */ _L28;
  kcg_bool /* _L31/ */ _L31;
  kcg_bool /* _L30/ */ _L30;
  kcg_bool /* _L29/ */ _L29;
  kcg_bool /* _L34/ */ _L34;
  kcg_bool /* _L33/ */ _L33;
  kcg_bool /* _L32/ */ _L32;
  kcg_bool /* _L46/ */ _L46;
  kcg_bool /* _L47/ */ _L47;
  kcg_bool /* _L48/ */ _L48;
  kcg_bool /* _L49/ */ _L49;
  kcg_bool /* _L63/ */ _L63;
  kcg_bool /* _L62/ */ _L62;
  kcg_bool /* _L65/ */ _L65;
  kcg_bool /* _L66/ */ _L66;
  kcg_bool /* _L67/ */ _L67;
  kcg_bool /* _L70/ */ _L70;
  kcg_bool /* _L69/ */ _L69;
  kcg_bool /* _L68/ */ _L68;
  DMI_Request_T_DMI_Types_Pkg /* _L71/ */ _L71;
  kcg_bool /* _L72/ */ _L72;
  DMI_Request_T_DMI_Types_Pkg /* _L73/ */ _L73;
  kcg_bool /* _L74/ */ _L74;
} outC_updateDMIStatus_manage_DMI_Input_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* manage_DMI_Input_Pkg::updateDMIStatus/ */
extern void updateDMIStatus_manage_DMI_Input_Pkg(
  /* oldStatus/ */
  DMI_EVC_status_T_DMI_Types_Pkg *oldStatus,
  /* fromDMI/ */
  DMI_to_EVC_Message_T_API_DMI_Pkg *fromDMI,
  /* sndValidationRequested/ */
  kcg_bool sndValidationRequested,
  outC_updateDMIStatus_manage_DMI_Input_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void updateDMIStatus_reset_manage_DMI_Input_Pkg(
  outC_updateDMIStatus_manage_DMI_Input_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void updateDMIStatus_init_manage_DMI_Input_Pkg(
  outC_updateDMIStatus_manage_DMI_Input_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _updateDMIStatus_manage_DMI_Input_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** updateDMIStatus_manage_DMI_Input_Pkg.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

