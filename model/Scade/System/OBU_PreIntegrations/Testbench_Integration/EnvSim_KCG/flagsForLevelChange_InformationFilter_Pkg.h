/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _flagsForLevelChange_InformationFilter_Pkg_H_
#define _flagsForLevelChange_InformationFilter_Pkg_H_

#include "kcg_types.h"
#include "flagsFromMessages_InformationFilter_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  filterRelatedEvents_T_Common_Types_Pkg /* outFilterEvents/ */ outFilterEvents;
  T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg /* IF_toML/ */ IF_toML;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  filterRelatedEvents_T_Common_Types_Pkg /* _L157/ */ _L157;
  T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg /* _L163/ */ _L163;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_flagsFromMessages_InformationFilter_Pkg /* _L157=(InformationFilter_Pkg::flagsFromMessages#1)/ */ Context_flagsFromMessages_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* _L155/ */ _L155;
  kcg_bool /* _L154/ */ _L154;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* _L152/ */ _L152;
  ReceivedMessage_T_Common_Types_Pkg /* _L158/ */ _L158;
  filterRelatedEvents_T_Common_Types_Pkg /* _L159/ */ _L159;
  filterRelatedEvents_T_Common_Types_Pkg /* _L160/ */ _L160;
  kcg_bool /* _L161/ */ _L161;
  T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg /* _L164/ */ _L164;
  kcg_bool /* _L171/ */ _L171;
  kcg_bool /* _L170/ */ _L170;
  M_MODE /* _L169/ */ _L169;
  kcg_bool /* _L168/ */ _L168;
  kcg_bool /* _L167/ */ _L167;
  kcg_bool /* _L166/ */ _L166;
  M_MODE /* _L165/ */ _L165;
} outC_flagsForLevelChange_InformationFilter_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::flagsForLevelChange/ */
extern void flagsForLevelChange_InformationFilter_Pkg(
  /* ModeLevel/ */
  T_Mode_Level_Level_And_Mode_Types_Pkg *ModeLevel,
  /* actualMessage/ */
  ReceivedMessage_T_Common_Types_Pkg *actualMessage,
  /* inFilterEvents/ */
  filterRelatedEvents_T_Common_Types_Pkg *inFilterEvents,
  outC_flagsForLevelChange_InformationFilter_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void flagsForLevelChange_reset_InformationFilter_Pkg(
  outC_flagsForLevelChange_InformationFilter_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void flagsForLevelChange_init_InformationFilter_Pkg(
  outC_flagsForLevelChange_InformationFilter_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _flagsForLevelChange_InformationFilter_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** flagsForLevelChange_InformationFilter_Pkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

