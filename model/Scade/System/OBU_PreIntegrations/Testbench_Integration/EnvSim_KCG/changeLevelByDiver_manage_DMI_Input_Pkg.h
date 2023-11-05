/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _changeLevelByDiver_manage_DMI_Input_Pkg_H_
#define _changeLevelByDiver_manage_DMI_Input_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  T_LevelTransition_Level_And_Mode_Types_Pkg /* ML_levelTransition/ */ ML_levelTransition;
  NID_STM_DMI_Types_Pkg /* updatedNTC/ */ updatedNTC;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_Level_Data_T_DMI_Messages_Bothways_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L2/ */ _L2;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* _L3/ */ _L3;
  T_LevelTansitionInfo_Level_And_Mode_Types_Pkg /* _L4/ */ _L4;
  M_LEVEL /* _L5/ */ _L5;
  kcg_int32 /* _L6/ */ _L6;
  T_TransitionType_Level_And_Mode_Types_Pkg /* _L7/ */ _L7;
  T_LevelTansitionInfo_Level_And_Mode_Types_Pkg /* _L8/ */ _L8;
  T_LevelTansitionInfo_Level_And_Mode_Types_Pkg /* _L9/ */ _L9;
  M_LEVEL /* _L12/ */ _L12;
  kcg_bool /* _L11/ */ _L11;
  DMI_Level_Data_T_DMI_Messages_Bothways_Pkg /* _L10/ */ _L10;
  kcg_bool /* _L13/ */ _L13;
  M_LEVEL /* _L14/ */ _L14;
  kcg_bool /* _L15/ */ _L15;
  NID_STM_DMI_Types_Pkg /* _L16/ */ _L16;
  NID_STM_DMI_Types_Pkg /* _L18/ */ _L18;
  DMI_Level_Data_T_DMI_Messages_Bothways_Pkg /* _L17/ */ _L17;
  DMI_Level_Data_T_DMI_Messages_Bothways_Pkg /* _L23/ */ _L23;
  M_LEVEL /* _L22/ */ _L22;
  M_LEVEL /* _L21/ */ _L21;
  kcg_bool /* _L20/ */ _L20;
  kcg_bool /* _L24/ */ _L24;
  kcg_bool /* _L25/ */ _L25;
  NID_STM_DMI_Types_Pkg /* _L26/ */ _L26;
  NID_STM_DMI_Types_Pkg /* _L28/ */ _L28;
  NID_STM_DMI_Types_Pkg /* _L29/ */ _L29;
  kcg_int32 /* _L41/ */ _L41;
  kcg_bool /* _L42/ */ _L42;
  kcg_int32 /* _L43/ */ _L43;
  kcg_int32 /* _L49/ */ _L49;
} outC_changeLevelByDiver_manage_DMI_Input_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* manage_DMI_Input_Pkg::changeLevelByDiver/ */
extern void changeLevelByDiver_manage_DMI_Input_Pkg(
  /* levelData/ */
  DMI_Level_Data_T_DMI_Messages_Bothways_Pkg *levelData,
  /* lasttNTC/ */
  NID_STM_DMI_Types_Pkg lasttNTC,
  outC_changeLevelByDiver_manage_DMI_Input_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void changeLevelByDiver_reset_manage_DMI_Input_Pkg(
  outC_changeLevelByDiver_manage_DMI_Input_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void changeLevelByDiver_init_manage_DMI_Input_Pkg(
  outC_changeLevelByDiver_manage_DMI_Input_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _changeLevelByDiver_manage_DMI_Input_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** changeLevelByDiver_manage_DMI_Input_Pkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

