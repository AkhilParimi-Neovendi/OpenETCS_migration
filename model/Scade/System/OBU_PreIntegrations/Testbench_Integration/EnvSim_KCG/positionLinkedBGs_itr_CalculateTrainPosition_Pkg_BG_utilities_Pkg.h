/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _positionLinkedBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_
#define _positionLinkedBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_

#include "kcg_types.h"
#include "scaledDLINK_2_dlink_BasicLocationFunctions_Pkg.h"
#include "add_2_Distances_BasicLocationFunctions_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* sumOfLinkingDistances/ */ sumOfLinkingDistances;
  positionedBG_T_TrainPosition_Types_Pck /* linkedPositionedBG/ */ linkedPositionedBG;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_add_2_Distances_BasicLocationFunctions_Pkg /* _L87=(BasicLocationFunctions_Pkg::add_2_Distances#1)/ */ Context_add_2_Distances_1;
  outC_scaledDLINK_2_dlink_BasicLocationFunctions_Pkg /* _L86=(BasicLocationFunctions_Pkg::scaledDLINK_2_dlink#1)/ */ Context_scaledDLINK_2_dlink_1;
  outC_add_2_Distances_BasicLocationFunctions_Pkg /* _L120=(BasicLocationFunctions_Pkg::add_2_Distances#3)/ */ Context_add_2_Distances_3;
  outC_add_2_Distances_BasicLocationFunctions_Pkg /* _L123=(BasicLocationFunctions_Pkg::add_2_Distances#4)/ */ Context_add_2_Distances_4;
  outC_add_2_Distances_BasicLocationFunctions_Pkg /* _L119=(BasicLocationFunctions_Pkg::add_2_Distances#2)/ */ Context_add_2_Distances_2;
  outC_scaledDLINK_2_dlink_BasicLocationFunctions_Pkg /* _L117=(BasicLocationFunctions_Pkg::scaledDLINK_2_dlink#2)/ */ Context_scaledDLINK_2_dlink_2;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L1/ */ _L1;
  positionedBG_T_TrainPosition_Types_Pck /* _L2/ */ _L2;
  LinkedBG_T_BG_Types_Pkg /* _L3/ */ _L3;
  infoFromLinking_T_TrainPosition_Types_Pck /* _L17/ */ _L17;
  kcg_int64 /* _L16/ */ _L16;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L15/ */ _L15;
  Q_LINK /* _L14/ */ _L14;
  NID_BG /* _L13/ */ _L13;
  NID_C /* _L12/ */ _L12;
  kcg_bool /* _L11/ */ _L11;
  positionedBG_T_TrainPosition_Types_Pck /* _L32/ */ _L32;
  infoFromLinking_T_TrainPosition_Types_Pck /* _L84/ */ _L84;
  kcg_bool /* _L85/ */ _L85;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L86/ */ _L86;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L87/ */ _L87;
  passedBG_T_BG_Types_Pkg /* _L89/ */ _L89;
  LinkedBG_T_BG_Types_Pkg /* _L90/ */ _L90;
  passedBG_T_BG_Types_Pkg /* _L113/ */ _L113;
  kcg_int64 /* _L114/ */ _L114;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L117/ */ _L117;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L119/ */ _L119;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L120/ */ _L120;
  trainProperties_T_TrainPosition_Types_Pck /* _L121/ */ _L121;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L122/ */ _L122;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L123/ */ _L123;
  Q_SCALE /* _L124/ */ _L124;
  D_LINK /* _L125/ */ _L125;
  Q_LOCACC /* _L126/ */ _L126;
  kcg_bool /* _L127/ */ _L127;
  NID_C /* _L128/ */ _L128;
  LinkedBG_T_BG_Types_Pkg /* _L129/ */ _L129;
  NID_BG /* _L130/ */ _L130;
  kcg_bool /* _L140/ */ _L140;
  kcg_bool /* _L150/ */ _L150;
} outC_positionLinkedBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr/ */
extern void positionLinkedBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* sumOfPrevLinkingDistances/ */
  LocWithInAcc_T_Obu_BasicTypes_Pkg *sumOfPrevLinkingDistances,
  /* passedPositionedBG/ */
  positionedBG_T_TrainPosition_Types_Pck *passedPositionedBG,
  /* linkedBG/ */
  LinkedBG_T_BG_Types_Pkg *linkedBG,
  /* trainProperties/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_positionLinkedBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void positionLinkedBGs_itr_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_positionLinkedBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void positionLinkedBGs_itr_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_positionLinkedBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _positionLinkedBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** positionLinkedBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

