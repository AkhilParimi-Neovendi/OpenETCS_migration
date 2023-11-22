/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */
#ifndef _findLinkedBG_bckwd_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg_H_
#define _findLinkedBG_bckwd_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg /* index_acc_out/ */ index_acc_out;
  linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg /* index_out/ */ index_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  positionedBG_T_TrainPosition_Types_Pck /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  Q_LINK /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
  Q_LINK /* _L9/ */ _L9;
  kcg_bool /* _L11/ */ _L11;
  linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg /* _L12/ */ _L12;
  linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg /* _L19/ */ _L19;
  kcg_int32 /* _L20/ */ _L20;
  linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg /* _L25/ */ _L25;
  kcg_int32 /* _L26/ */ _L26;
  kcg_int32 /* _L27/ */ _L27;
  kcg_int32 /* _L28/ */ _L28;
} outC_findLinkedBG_bckwd_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_bckwd_itr/ */
extern void findLinkedBG_bckwd_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* index_acc_in/ */
  linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *index_acc_in,
  /* index_in/ */
  linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *index_in,
  /* BG_in/ */
  positionedBG_T_TrainPosition_Types_Pck *BG_in,
  outC_findLinkedBG_bckwd_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void findLinkedBG_bckwd_itr_reset_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  outC_findLinkedBG_bckwd_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void findLinkedBG_bckwd_itr_init_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  outC_findLinkedBG_bckwd_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _findLinkedBG_bckwd_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** findLinkedBG_bckwd_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

