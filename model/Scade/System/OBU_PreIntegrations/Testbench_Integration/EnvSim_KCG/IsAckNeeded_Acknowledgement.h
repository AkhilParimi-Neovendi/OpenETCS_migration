/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _IsAckNeeded_Acknowledgement_H_
#define _IsAckNeeded_Acknowledgement_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* isAckNeeded/ */ isAckNeeded;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_LEVEL /* Loc_new_level/ */ Loc_new_level;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* _L1/ */ _L1;
  M_LEVEL /* _L12/ */ _L12;
  M_LEVEL /* _L23/ */ _L23;
  kcg_bool /* _L19/ */ _L19;
  M_LEVEL /* _L18/ */ _L18;
  kcg_bool /* _L17/ */ _L17;
  kcg_bool /* _L16/ */ _L16;
  kcg_bool /* _L14/ */ _L14;
  kcg_bool /* _L25/ */ _L25;
  kcg_bool /* _L27/ */ _L27;
  kcg_bool /* _L29/ */ _L29;
  kcg_bool /* _L30/ */ _L30;
  kcg_bool /* _L31/ */ _L31;
  kcg_bool /* _L32/ */ _L32;
  T_LevelTansitionInfo_Level_And_Mode_Types_Pkg /* _L33/ */ _L33;
} outC_IsAckNeeded_Acknowledgement;

/* ===========  node initialization and cycle functions  =========== */
/* Acknowledgement::IsAckNeeded/ */
extern void IsAckNeeded_Acknowledgement(
  /* selected_level_transition/ */
  T_LevelTransition_Level_And_Mode_Types_Pkg *selected_level_transition,
  /* last_level/ */
  M_LEVEL last_level,
  outC_IsAckNeeded_Acknowledgement *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void IsAckNeeded_reset_Acknowledgement(
  outC_IsAckNeeded_Acknowledgement *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void IsAckNeeded_init_Acknowledgement(
  outC_IsAckNeeded_Acknowledgement *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _IsAckNeeded_Acknowledgement_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** IsAckNeeded_Acknowledgement.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

