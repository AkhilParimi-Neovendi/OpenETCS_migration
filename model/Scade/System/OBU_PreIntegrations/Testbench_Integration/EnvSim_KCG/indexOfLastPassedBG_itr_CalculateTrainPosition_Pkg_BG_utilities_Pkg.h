/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _indexOfLastPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_
#define _indexOfLastPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* cont/ */ cont;
  kcg_int32 /* indexOfBG/ */ indexOfBG;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  positionedBG_T_TrainPosition_Types_Pck /* _L4/ */ _L4;
  kcg_bool /* _L19/ */ _L19;
  Q_LINK /* _L20/ */ _L20;
  Q_LINK /* _L21/ */ _L21;
  kcg_bool /* _L22/ */ _L22;
  kcg_bool /* _L23/ */ _L23;
  kcg_bool /* _L25/ */ _L25;
  kcg_bool /* _L26/ */ _L26;
  kcg_int32 /* _L27/ */ _L27;
  kcg_int32 /* _L28/ */ _L28;
  kcg_int32 /* _L29/ */ _L29;
  kcg_bool /* _L30/ */ _L30;
  Q_LINK /* _L31/ */ _L31;
  Q_LINK /* _L32/ */ _L32;
} outC_indexOfLastPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG_itr/ */
extern void indexOfLastPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* iteratorIndex/ */
  kcg_int32 iteratorIndex,
  /* prevIndex/ */
  kcg_int32 prevIndex,
  /* linked/ */
  kcg_bool linked,
  /* BG/ */
  positionedBG_T_TrainPosition_Types_Pck *BG,
  outC_indexOfLastPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void indexOfLastPassedBG_itr_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_indexOfLastPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void indexOfLastPassedBG_itr_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_indexOfLastPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _indexOfLastPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** indexOfLastPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

