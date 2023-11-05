/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _indexOfPassedBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_
#define _indexOfPassedBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_

#include "kcg_types.h"
#include "indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int32 /* indexOfBG/ */ indexOfBG;
  kcg_bool /* BG_found/ */ BG_found;
  kcg_bool /* indexValid/ */ indexValid;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L1=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id#1)/ */ Context_indexOfBG_by_id_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L2/ */ _L2;
  kcg_int32 /* _L1/ */ _L1;
  kcg_bool /* _L4/ */ _L4;
  positionedBGs_T_TrainPosition_Types_Pck /* _L5/ */ _L5;
  passedBG_T_BG_Types_Pkg /* _L6/ */ _L6;
  positionedBG_T_TrainPosition_Types_Pck /* _L19/ */ _L19;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L20/ */ _L20;
  NID_C /* _L21/ */ _L21;
  NID_BG /* _L22/ */ _L22;
  Q_LINK /* _L23/ */ _L23;
  infoFromLinking_T_TrainPosition_Types_Pck /* _L25/ */ _L25;
  kcg_int32 /* _L86/ */ _L86;
  kcg_bool /* _L87/ */ _L87;
  BG_Header_T_BG_Types_Pkg /* _L88/ */ _L88;
  kcg_bool /* _L89/ */ _L89;
  kcg_bool /* _L90/ */ _L90;
  kcg_bool /* _L91/ */ _L91;
} outC_indexOfPassedBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id/ */
extern void indexOfPassedBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* BG/ */
  passedBG_T_BG_Types_Pkg *BG,
  /* BGs/ */
  positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* enable/ */
  kcg_bool enable,
  outC_indexOfPassedBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void indexOfPassedBG_by_id_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_indexOfPassedBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void indexOfPassedBG_by_id_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_indexOfPassedBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _indexOfPassedBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** indexOfPassedBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

