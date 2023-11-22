/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */
#ifndef _invert_Q_DIRTRAIN_CalculateTrainPosition_Pkg_Pos_Pkg_H_
#define _invert_Q_DIRTRAIN_CalculateTrainPosition_Pkg_Pos_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Q_DIRTRAIN /* out/ */ out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Q_DIRTRAIN /* _L1/ */ _L1;
  Q_DIRTRAIN /* _L2/ */ _L2;
  Q_DIRTRAIN /* _L3/ */ _L3;
  Q_DIRTRAIN /* _L4/ */ _L4;
  Q_DIRTRAIN /* _L5/ */ _L5;
} outC_invert_Q_DIRTRAIN_CalculateTrainPosition_Pkg_Pos_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::Pos_Pkg::invert_Q_DIRTRAIN/ */
extern void invert_Q_DIRTRAIN_CalculateTrainPosition_Pkg_Pos_Pkg(
  /* in/ */
  Q_DIRTRAIN in,
  outC_invert_Q_DIRTRAIN_CalculateTrainPosition_Pkg_Pos_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void invert_Q_DIRTRAIN_reset_CalculateTrainPosition_Pkg_Pos_Pkg(
  outC_invert_Q_DIRTRAIN_CalculateTrainPosition_Pkg_Pos_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void invert_Q_DIRTRAIN_init_CalculateTrainPosition_Pkg_Pos_Pkg(
  outC_invert_Q_DIRTRAIN_CalculateTrainPosition_Pkg_Pos_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _invert_Q_DIRTRAIN_CalculateTrainPosition_Pkg_Pos_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** invert_Q_DIRTRAIN_CalculateTrainPosition_Pkg_Pos_Pkg.h
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

