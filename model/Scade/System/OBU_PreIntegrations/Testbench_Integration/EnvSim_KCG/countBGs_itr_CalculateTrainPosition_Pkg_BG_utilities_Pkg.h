/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _countBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_
#define _countBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* cont/ */ cont;
  BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* counters_out/ */ counters_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  positionedBG_T_TrainPosition_Types_Pck /* _L1/ */ _L1;
  kcg_bool /* _L2/ */ _L2;
  kcg_int32 /* _L8/ */ _L8;
  kcg_int32 /* _L7/ */ _L7;
  kcg_int32 /* _L6/ */ _L6;
  BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L9/ */ _L9;
  BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L10/ */ _L10;
  Q_LINK /* _L11/ */ _L11;
  Q_LINK /* _L12/ */ _L12;
  kcg_bool /* _L13/ */ _L13;
  kcg_bool /* _L14/ */ _L14;
  kcg_bool /* _L15/ */ _L15;
  kcg_int32 /* _L17/ */ _L17;
  kcg_int32 /* _L18/ */ _L18;
  kcg_int32 /* _L19/ */ _L19;
  kcg_int32 /* _L22/ */ _L22;
  kcg_int32 /* _L21/ */ _L21;
  kcg_int32 /* _L20/ */ _L20;
  kcg_int32 /* _L25/ */ _L25;
  kcg_int32 /* _L24/ */ _L24;
  kcg_int32 /* _L23/ */ _L23;
  kcg_int32 /* _L29/ */ _L29;
  kcg_int32 /* _L30/ */ _L30;
  kcg_int32 /* _L31/ */ _L31;
  kcg_int32 /* _L33/ */ _L33;
  kcg_int32 /* _L32/ */ _L32;
  kcg_int32 /* _L35/ */ _L35;
  kcg_int32 /* _L34/ */ _L34;
  kcg_int32 /* _L37/ */ _L37;
  kcg_int32 /* _L36/ */ _L36;
  kcg_int32 /* _L40/ */ _L40;
  kcg_int32 /* _L41/ */ _L41;
  kcg_int32 /* _L42/ */ _L42;
  positionedBG_T_TrainPosition_Types_Pck /* _L44/ */ _L44;
  kcg_bool /* _L43/ */ _L43;
  kcg_bool /* _L45/ */ _L45;
  kcg_bool /* _L46/ */ _L46;
  kcg_bool /* _L47/ */ _L47;
  kcg_bool /* _L48/ */ _L48;
} outC_countBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr/ */
extern void countBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* counters_in/ */
  BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg *counters_in,
  /* BG_in/ */
  positionedBG_T_TrainPosition_Types_Pck *BG_in,
  outC_countBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void countBGs_itr_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_countBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void countBGs_itr_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_countBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _countBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** countBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

