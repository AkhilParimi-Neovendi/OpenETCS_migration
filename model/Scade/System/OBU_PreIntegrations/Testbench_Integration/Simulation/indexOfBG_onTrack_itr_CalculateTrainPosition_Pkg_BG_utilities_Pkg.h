/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _indexOfBG_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_
#define _indexOfBG_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_

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
  kcg_bool /* stopIteration/ */ stopIteration;
  kcg_bool /* invalidateIndex/ */ invalidateIndex;
  kcg_int32 /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
  kcg_int32 /* _L10/ */ _L10;
  kcg_int32 /* _L11/ */ _L11;
  kcg_int32 /* _L16/ */ _L16;
  kcg_int32 /* _L18/ */ _L18;
  positionedBG_T_TrainPosition_Types_Pck /* _L21/ */ _L21;
  positionedBG_T_TrainPosition_Types_Pck /* _L19/ */ _L19;
  kcg_bool /* _L23/ */ _L23;
  kcg_bool /* _L24/ */ _L24;
  kcg_bool /* _L25/ */ _L25;
  kcg_bool /* _L26/ */ _L26;
  kcg_bool /* _L27/ */ _L27;
  positionedBG_T_TrainPosition_Types_Pck /* _L28/ */ _L28;
  kcg_bool /* _L29/ */ _L29;
  positionedBG_T_TrainPosition_Types_Pck /* _L30/ */ _L30;
  kcg_bool /* _L31/ */ _L31;
  kcg_int32 /* _L32/ */ _L32;
  kcg_int32 /* _L33/ */ _L33;
  kcg_bool /* _L34/ */ _L34;
  kcg_bool /* _L35/ */ _L35;
  kcg_bool /* _L37/ */ _L37;
  kcg_bool /* _L38/ */ _L38;
  kcg_bool /* _L39/ */ _L39;
  kcg_bool /* _L40/ */ _L40;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L41/ */ _L41;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L42/ */ _L42;
  kcg_bool /* _L43/ */ _L43;
  kcg_bool /* _L44/ */ _L44;
  kcg_bool /* _L45/ */ _L45;
  kcg_int32 /* _L46/ */ _L46;
  kcg_bool /* _L47/ */ _L47;
  kcg_bool /* _L48/ */ _L48;
  kcg_bool /* _L52/ */ _L52;
  kcg_bool /* _L51/ */ _L51;
} outC_indexOfBG_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr/ */
extern void indexOfBG_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* iteratorIndex/ */
  kcg_int32 iteratorIndex,
  /* prevIndex/ */
  kcg_int32 prevIndex,
  /* BG/ */
  positionedBG_T_TrainPosition_Types_Pck *BG,
  /* BG_asElementFromBGs/ */
  positionedBG_T_TrainPosition_Types_Pck *BG_asElementFromBGs,
  outC_indexOfBG_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void indexOfBG_onTrack_itr_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_indexOfBG_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void indexOfBG_onTrack_itr_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_indexOfBG_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _indexOfBG_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** indexOfBG_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

