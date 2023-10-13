/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */
#ifndef _LevelListAdapter_DMI_Control_Pkg_Utils_H_
#define _LevelListAdapter_DMI_Control_Pkg_Utils_H_

#include "kcg_types.h"
#include "LevelList_Iterator_DMI_Control_Pkg_Sub_func.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_int64_12 /* ArrayLevelIndex_toDisplay/ */ ArrayLevelIndex_toDisplay;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_LevelList_Iterator_DMI_Control_Pkg_Sub_func /* _L8=(DMI_Control_Pkg::Sub_func::LevelList_Iterator#1)/ */ Context_LevelList_Iterator_1[32];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L4/ */ _L4;
  DMI_LevelList_T_DMI_Types_Pkg /* _L7/ */ _L7;
  kcg_int64 /* _L8/ */ _L8;
  array_int64_32 /* _L9/ */ _L9;
  DMI_level_array_T_DMI_Types_Pkg /* _L15/ */ _L15;
  kcg_int64 /* _L16/ */ _L16;
  kcg_bool /* _L17/ */ _L17;
  kcg_int64 /* _L18/ */ _L18;
  kcg_bool /* _L19/ */ _L19;
  array_int64_12 /* _L21/ */ _L21;
  array_int64_32 /* _L24/ */ _L24;
  kcg_int64 /* _L25/ */ _L25;
} outC_LevelListAdapter_DMI_Control_Pkg_Utils;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Utils::LevelListAdapter/ */
extern void LevelListAdapter_DMI_Control_Pkg_Utils(
  /* DMI_evc_level_data/ */
  DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg *DMI_evc_level_data,
  outC_LevelListAdapter_DMI_Control_Pkg_Utils *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void LevelListAdapter_reset_DMI_Control_Pkg_Utils(
  outC_LevelListAdapter_DMI_Control_Pkg_Utils *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void LevelListAdapter_init_DMI_Control_Pkg_Utils(
  outC_LevelListAdapter_DMI_Control_Pkg_Utils *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _LevelListAdapter_DMI_Control_Pkg_Utils_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** LevelListAdapter_DMI_Control_Pkg_Utils.h
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

