/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */
#ifndef _posInRangeOfBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_
#define _posInRangeOfBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_

#include "kcg_types.h"
#include "posInRangeOfBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* isInRange/ */ isInRange;
  kcg_int32 /* indexOfBG/ */ indexOfBG;
  positionedBG_T_TrainPosition_Types_Pck /* BG/ */ BG;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_posInRangeOfBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L7=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr#1)/ */ Context_posInRangeOfBG_itr_1[41];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L2/ */ _L2;
  positionedBGs_T_TrainPosition_Types_Pck /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  kcg_int32 /* _L5/ */ _L5;
  kcg_int32 /* _L7/ */ _L7;
  kcg_int32 /* _L8/ */ _L8;
  _130_array /* _L9/ */ _L9;
  positionedBG_T_TrainPosition_Types_Pck /* _L10/ */ _L10;
  kcg_bool /* _L12/ */ _L12;
} outC_posInRangeOfBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG/ */
extern void posInRangeOfBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* position/ */
  LocWithInAcc_T_Obu_BasicTypes_Pkg *position,
  /* BGs/ */
  positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* enable/ */
  kcg_bool enable,
  outC_posInRangeOfBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void posInRangeOfBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_posInRangeOfBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void posInRangeOfBG_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_posInRangeOfBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _posInRangeOfBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** posInRangeOfBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

