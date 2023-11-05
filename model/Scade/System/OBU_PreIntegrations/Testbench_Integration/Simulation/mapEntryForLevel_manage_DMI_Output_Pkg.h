/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _mapEntryForLevel_manage_DMI_Output_Pkg_H_
#define _mapEntryForLevel_manage_DMI_Output_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg /* new_entryRequest/ */ new_entryRequest;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L2/ */ _L2;
  DMI_List_Entry_Request_T_DMI_Types_Pkg /* _L3/ */ _L3;
  DMI_List_Entry_Request_T_DMI_Types_Pkg /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
  DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg /* _L9/ */ _L9;
  DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg /* _L10/ */ _L10;
  DMI_List_Entry_Request_T_DMI_Types_Pkg /* _L11/ */ _L11;
} outC_mapEntryForLevel_manage_DMI_Output_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* manage_DMI_Output_Pkg::mapEntryForLevel/ */
extern void mapEntryForLevel_manage_DMI_Output_Pkg(
  /* dmi_entryRequest/ */
  DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_entryRequest,
  outC_mapEntryForLevel_manage_DMI_Output_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void mapEntryForLevel_reset_manage_DMI_Output_Pkg(
  outC_mapEntryForLevel_manage_DMI_Output_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void mapEntryForLevel_init_manage_DMI_Output_Pkg(
  outC_mapEntryForLevel_manage_DMI_Output_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _mapEntryForLevel_manage_DMI_Output_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** mapEntryForLevel_manage_DMI_Output_Pkg.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

