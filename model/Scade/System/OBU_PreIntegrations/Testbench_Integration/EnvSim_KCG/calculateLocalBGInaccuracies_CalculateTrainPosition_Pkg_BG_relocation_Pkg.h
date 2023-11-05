/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _calculateLocalBGInaccuracies_CalculateTrainPosition_Pkg_BG_relocation_Pkg_H_
#define _calculateLocalBGInaccuracies_CalculateTrainPosition_Pkg_BG_relocation_Pkg_H_

#include "kcg_types.h"
#include "scaledDLINK_2_dlink_BasicLocationFunctions_Pkg.h"
#include "add_2_Distances_BasicLocationFunctions_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* localInaccuracies/ */ localInaccuracies;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_add_2_Distances_BasicLocationFunctions_Pkg /* _L23=(BasicLocationFunctions_Pkg::add_2_Distances#5)/ */ Context_add_2_Distances_5;
  outC_scaledDLINK_2_dlink_BasicLocationFunctions_Pkg /* _L9=(BasicLocationFunctions_Pkg::scaledDLINK_2_dlink#3)/ */ Context_scaledDLINK_2_dlink_3;
  outC_scaledDLINK_2_dlink_BasicLocationFunctions_Pkg /* _L12=(BasicLocationFunctions_Pkg::scaledDLINK_2_dlink#4)/ */ Context_scaledDLINK_2_dlink_4;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  trainProperties_T_TrainPosition_Types_Pck /* _L2/ */ _L2;
  positionedBG_T_TrainPosition_Types_Pck /* _L1/ */ _L1;
  infoFromLinking_T_TrainPosition_Types_Pck /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  Q_SCALE /* _L5/ */ _L5;
  LinkedBG_T_BG_Types_Pkg /* _L6/ */ _L6;
  Q_LOCACC /* _L7/ */ _L7;
  kcg_int32 /* _L8/ */ _L8;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L9/ */ _L9;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L10/ */ _L10;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L12/ */ _L12;
  kcg_int32 /* _L13/ */ _L13;
  Q_SCALE /* _L14/ */ _L14;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L15/ */ _L15;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L16/ */ _L16;
  passedBG_T_BG_Types_Pkg /* _L19/ */ _L19;
  kcg_bool /* _L20/ */ _L20;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L21/ */ _L21;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L23/ */ _L23;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L24/ */ _L24;
  trainProperties_T_TrainPosition_Types_Pck /* _L25/ */ _L25;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L26/ */ _L26;
  passedBG_T_BG_Types_Pkg /* _L27/ */ _L27;
  Q_NVLOCACC /* _L28/ */ _L28;
  kcg_bool /* _L29/ */ _L29;
} outC_calculateLocalBGInaccuracies_CalculateTrainPosition_Pkg_BG_relocation_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies/ */
extern void calculateLocalBGInaccuracies_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* BG_in/ */
  positionedBG_T_TrainPosition_Types_Pck *BG_in,
  /* trainProperties/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_calculateLocalBGInaccuracies_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void calculateLocalBGInaccuracies_reset_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  outC_calculateLocalBGInaccuracies_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void calculateLocalBGInaccuracies_init_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  outC_calculateLocalBGInaccuracies_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _calculateLocalBGInaccuracies_CalculateTrainPosition_Pkg_BG_relocation_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** calculateLocalBGInaccuracies_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

