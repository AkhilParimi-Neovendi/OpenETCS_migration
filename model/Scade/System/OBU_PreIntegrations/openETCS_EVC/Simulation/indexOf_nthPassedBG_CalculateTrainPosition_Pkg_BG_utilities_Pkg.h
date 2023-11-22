/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */
#ifndef _indexOf_nthPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_
#define _indexOf_nthPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_

#include "kcg_types.h"
#include "indexOf_nthPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int32 /* indexOfBG/ */ indexOfBG;
  kcg_bool /* BG_found/ */ BG_found;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_indexOf_nthPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L3=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr#1)/ */ Context_indexOf_nthPassedBG_itr_1[41];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L1/ */ _L1;
  kcg_int32 /* _L3/ */ _L3;
  positionedBGs_T_TrainPosition_Types_Pck /* _L4/ */ _L4;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L13/ */ _L13;
  array_bool_41 /* _L14/ */ _L14;
  BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L15/ */ _L15;
  kcg_int32 /* _L16/ */ _L16;
  array_int32_41 /* _L17/ */ _L17;
  kcg_int32 /* _L18/ */ _L18;
  kcg_bool /* _L19/ */ _L19;
  kcg_int32 /* _L20/ */ _L20;
  kcg_bool /* _L21/ */ _L21;
  kcg_int32 /* _L22/ */ _L22;
  kcg_bool /* _L23/ */ _L23;
} outC_indexOf_nthPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG/ */
extern void indexOf_nthPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* linked/ */
  kcg_bool linked,
  /* n/ */
  kcg_int32 n,
  /* BGs/ */
  positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* enable/ */
  kcg_bool enable,
  outC_indexOf_nthPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void indexOf_nthPassedBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_indexOf_nthPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void indexOf_nthPassedBG_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_indexOf_nthPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _indexOf_nthPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** indexOf_nthPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

