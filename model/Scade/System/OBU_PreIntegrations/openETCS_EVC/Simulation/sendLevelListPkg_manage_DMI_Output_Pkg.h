/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _sendLevelListPkg_manage_DMI_Output_Pkg_H_
#define _sendLevelListPkg_manage_DMI_Output_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg /* levelDataPkg/ */ levelDataPkg;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_LevelList_T_DMI_Types_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L2/ */ _L2;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L3/ */ _L3;
  DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg /* _L4/ */ _L4;
  kcg_bool /* _L9/ */ _L9;
  DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg /* _L10/ */ _L10;
  DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg /* _L17/ */ _L17;
} outC_sendLevelListPkg_manage_DMI_Output_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* manage_DMI_Output_Pkg::sendLevelListPkg/ */
extern void sendLevelListPkg_manage_DMI_Output_Pkg(
  /* levelList/ */
  DMI_LevelList_T_DMI_Types_Pkg *levelList,
  /* UpdateLevelsRequested/ */
  kcg_bool UpdateLevelsRequested,
  /* inSystemTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  outC_sendLevelListPkg_manage_DMI_Output_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void sendLevelListPkg_reset_manage_DMI_Output_Pkg(
  outC_sendLevelListPkg_manage_DMI_Output_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void sendLevelListPkg_init_manage_DMI_Output_Pkg(
  outC_sendLevelListPkg_manage_DMI_Output_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _sendLevelListPkg_manage_DMI_Output_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** sendLevelListPkg_manage_DMI_Output_Pkg.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

