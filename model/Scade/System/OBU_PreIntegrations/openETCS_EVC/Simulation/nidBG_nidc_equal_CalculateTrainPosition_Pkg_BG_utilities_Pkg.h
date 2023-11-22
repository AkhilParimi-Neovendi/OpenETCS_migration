/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _nidBG_nidc_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_
#define _nidBG_nidc_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* isEqual/ */ isEqual;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  NID_C /* _L1/ */ _L1;
  NID_C /* _L2/ */ _L2;
  NID_BG /* _L3/ */ _L3;
  NID_BG /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
} outC_nidBG_nidc_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidBG_nidc_equal/ */
extern void nidBG_nidc_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* nid_c_2/ */
  NID_C nid_c_2,
  /* nid_bg_2/ */
  NID_BG nid_bg_2,
  /* nid_c_1/ */
  NID_C nid_c_1,
  /* nid_bg_1/ */
  NID_BG nid_bg_1,
  outC_nidBG_nidc_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void nidBG_nidc_equal_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_nidBG_nidc_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void nidBG_nidc_equal_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_nidBG_nidc_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _nidBG_nidc_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** nidBG_nidc_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

