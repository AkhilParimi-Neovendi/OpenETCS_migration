/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _findLinkedBGs_CalculateTrainPosition_Pkg_BG_relocation_Pkg_H_
#define _findLinkedBGs_CalculateTrainPosition_Pkg_BG_relocation_Pkg_H_

#include "kcg_types.h"
#include "findLinkedBG_bckwd_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"
#include "findLinkedBG_fwd_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg /* BGs_indices/ */ BGs_indices;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_findLinkedBG_bckwd_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg /* _L28=(CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_bckwd_itr#1)/ */ Context_findLinkedBG_bckwd_itr_1[41];
  outC_findLinkedBG_fwd_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg /* _L23=(CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_fwd_itr#1)/ */ Context_findLinkedBG_fwd_itr_1[41];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg /* _L24/ */ _L24;
  linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg /* _L23/ */ _L23;
  linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg /* _L25/ */ _L25;
  positionedBGs_T_TrainPosition_Types_Pck /* _L26/ */ _L26;
  linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg /* _L29/ */ _L29;
  linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg /* _L28/ */ _L28;
  positionedBGs_T_TrainPosition_Types_Pck /* _L30/ */ _L30;
  linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg /* _L31/ */ _L31;
  linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg /* _L32/ */ _L32;
} outC_findLinkedBGs_CalculateTrainPosition_Pkg_BG_relocation_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBGs/ */
extern void findLinkedBGs_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* BGs_in/ */
  positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  outC_findLinkedBGs_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void findLinkedBGs_reset_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  outC_findLinkedBGs_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void findLinkedBGs_init_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  outC_findLinkedBGs_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _findLinkedBGs_CalculateTrainPosition_Pkg_BG_relocation_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** findLinkedBGs_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

