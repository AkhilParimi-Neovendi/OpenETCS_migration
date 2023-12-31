/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _improveUnlinkedBGLocations_CalculateTrainPosition_Pkg_BG_relocation_Pkg_H_
#define _improveUnlinkedBGLocations_CalculateTrainPosition_Pkg_BG_relocation_Pkg_H_

#include "kcg_types.h"
#include "improveUnlinkedBGLocations_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"
#include "findLinkedBGs_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  positionedBGs_T_TrainPosition_Types_Pck /* BGs_out/ */ BGs_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_improveUnlinkedBGLocations_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg /* _L6=(CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations_itr#1)/ */ Context_improveUnlinkedBGLocations_itr_1[41];
  outC_findLinkedBGs_CalculateTrainPosition_Pkg_BG_relocation_Pkg /* _L2=(CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBGs#1)/ */ Context_findLinkedBGs_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg /* _L2/ */ _L2;
  positionedBGs_T_TrainPosition_Types_Pck /* _L3/ */ _L3;
  positionedBGs_T_TrainPosition_Types_Pck /* _L5/ */ _L5;
  kcg_int32 /* _L6/ */ _L6;
  _68_array /* _L8/ */ _L8;
  kcg_bool /* _L12/ */ _L12;
} outC_improveUnlinkedBGLocations_CalculateTrainPosition_Pkg_BG_relocation_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations/ */
extern void improveUnlinkedBGLocations_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* BGs_in/ */
  positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  outC_improveUnlinkedBGLocations_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void improveUnlinkedBGLocations_reset_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  outC_improveUnlinkedBGLocations_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void improveUnlinkedBGLocations_init_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  outC_improveUnlinkedBGLocations_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _improveUnlinkedBGLocations_CalculateTrainPosition_Pkg_BG_relocation_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** improveUnlinkedBGLocations_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

