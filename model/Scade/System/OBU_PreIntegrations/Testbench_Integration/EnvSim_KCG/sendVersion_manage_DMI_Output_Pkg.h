/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _sendVersion_manage_DMI_Output_Pkg_H_
#define _sendVersion_manage_DMI_Output_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg /* VersionPkg/ */ VersionPkg;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* versionSent/ */ versionSent;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* sendPkg/ */ sendPkg;
  M_VERSION /* _L1/ */ _L1;
  DMI_EVC_status_T_DMI_Types_Pkg /* _L2/ */ _L2;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L3/ */ _L3;
  DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
  DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg /* _L10/ */ _L10;
  DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg /* _L11/ */ _L11;
  kcg_bool /* _L13/ */ _L13;
  kcg_bool /* _L14/ */ _L14;
  kcg_bool /* _L15/ */ _L15;
  kcg_bool /* _L16/ */ _L16;
} outC_sendVersion_manage_DMI_Output_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* manage_DMI_Output_Pkg::sendVersion/ */
extern void sendVersion_manage_DMI_Output_Pkg(
  /* ownVersion/ */
  M_VERSION ownVersion,
  /* dmiStatus/ */
  DMI_EVC_status_T_DMI_Types_Pkg *dmiStatus,
  /* inSystemTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  outC_sendVersion_manage_DMI_Output_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void sendVersion_reset_manage_DMI_Output_Pkg(
  outC_sendVersion_manage_DMI_Output_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void sendVersion_init_manage_DMI_Output_Pkg(
  outC_sendVersion_manage_DMI_Output_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _sendVersion_manage_DMI_Output_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** sendVersion_manage_DMI_Output_Pkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

