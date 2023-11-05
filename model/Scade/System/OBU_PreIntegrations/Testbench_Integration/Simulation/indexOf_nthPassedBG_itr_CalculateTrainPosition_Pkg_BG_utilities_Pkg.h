/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _indexOf_nthPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_
#define _indexOf_nthPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* cont/ */ cont;
  BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* acc_out/ */ acc_out;
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
  kcg_bool /* _L30/ */ _L30;
  Q_LINK /* _L31/ */ _L31;
  Q_LINK /* _L32/ */ _L32;
  BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L33/ */ _L33;
  kcg_int32 /* _L37/ */ _L37;
  kcg_int32 /* _L38/ */ _L38;
  kcg_int32 /* _L39/ */ _L39;
  BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L40/ */ _L40;
  kcg_int32 /* _L42/ */ _L42;
  kcg_bool /* _L43/ */ _L43;
  kcg_bool /* _L44/ */ _L44;
  kcg_bool /* _L53/ */ _L53;
  kcg_int32 /* _L52/ */ _L52;
  kcg_int32 /* _L51/ */ _L51;
  kcg_bool /* _L54/ */ _L54;
  kcg_bool /* _L55/ */ _L55;
} outC_indexOf_nthPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr/ */
extern void indexOf_nthPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* iteratorIndex/ */
  kcg_int32 iteratorIndex,
  /* acc_in/ */
  BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg *acc_in,
  /* linked/ */
  kcg_bool linked,
  /* n/ */
  kcg_int32 n,
  /* BG/ */
  positionedBG_T_TrainPosition_Types_Pck *BG,
  outC_indexOf_nthPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void indexOf_nthPassedBG_itr_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_indexOf_nthPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void indexOf_nthPassedBG_itr_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_indexOf_nthPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _indexOf_nthPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** indexOf_nthPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

