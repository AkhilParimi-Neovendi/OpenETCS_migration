/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */
#ifndef _mergeBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_
#define _mergeBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_

#include "kcg_types.h"
#include "insertBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "deleteBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "indexOfBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  positionedBGs_T_TrainPosition_Types_Pck /* BGs_out/ */ BGs_out;
  kcg_bool /* overrun/ */ overrun;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_insertBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L17=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex#1)/ */ Context_insertBG_atIndex_1;
  outC_deleteBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L15=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex#1)/ */ Context_deleteBG_atIndex_1;
  outC_indexOfBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L4=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack#1)/ */ Context_indexOfBG_onTrack_1;
  outC_indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L1=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id#2)/ */ Context_indexOfBG_by_id_2;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* indexOfBGInBGs/ */ indexOfBGInBGs;
  kcg_bool /* bgFound/ */ bgFound;
  positionedBG_T_TrainPosition_Types_Pck /* bg_loc/ */ bg_loc;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L2/ */ _L2;
  kcg_int32 /* _L1/ */ _L1;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L5/ */ _L5;
  kcg_int32 /* _L4/ */ _L4;
  positionedBG_T_TrainPosition_Types_Pck /* _L7/ */ _L7;
  positionedBGs_T_TrainPosition_Types_Pck /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
  positionedBGs_T_TrainPosition_Types_Pck /* _L11/ */ _L11;
  kcg_bool /* _L12/ */ _L12;
  kcg_bool /* _L13/ */ _L13;
  positionedBGs_T_TrainPosition_Types_Pck /* _L15/ */ _L15;
  positionedBGs_T_TrainPosition_Types_Pck /* _L16/ */ _L16;
  positionedBGs_T_TrainPosition_Types_Pck /* _L17/ */ _L17;
  kcg_bool /* _L18/ */ _L18;
  kcg_bool /* _L20/ */ _L20;
  positionedBG_T_TrainPosition_Types_Pck /* _L21/ */ _L21;
  kcg_bool /* _L22/ */ _L22;
  positionedBG_T_TrainPosition_Types_Pck /* _L61/ */ _L61;
  kcg_bool /* _L58/ */ _L58;
  positionedBG_T_TrainPosition_Types_Pck /* _L48/ */ _L48;
  positionedBG_T_TrainPosition_Types_Pck /* _L47/ */ _L47;
  positionedBGs_T_TrainPosition_Types_Pck /* _L62/ */ _L62;
  kcg_int32 /* _L63/ */ _L63;
  kcg_bool /* _L64/ */ _L64;
  positionedBG_T_TrainPosition_Types_Pck /* _L65/ */ _L65;
  kcg_bool /* _L66/ */ _L66;
  kcg_bool /* _L67/ */ _L67;
  kcg_bool /* _L68/ */ _L68;
  kcg_bool /* _L69/ */ _L69;
  kcg_bool /* _L70/ */ _L70;
  kcg_bool /* _L71/ */ _L71;
  kcg_bool /* _L72/ */ _L72;
  kcg_bool /* _L73/ */ _L73;
  positionedBG_T_TrainPosition_Types_Pck /* _L74/ */ _L74;
  infoFromLinking_T_TrainPosition_Types_Pck /* _L75/ */ _L75;
  positionedBG_T_TrainPosition_Types_Pck /* _L80/ */ _L80;
  positionedBG_T_TrainPosition_Types_Pck /* _L81/ */ _L81;
  kcg_bool /* _L82/ */ _L82;
  kcg_int32 /* _L83/ */ _L83;
} outC_mergeBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack/ */
extern void mergeBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* BG/ */
  positionedBG_T_TrainPosition_Types_Pck *BG,
  /* BGs_in/ */
  positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  outC_mergeBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void mergeBG_onTrack_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_mergeBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void mergeBG_onTrack_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_mergeBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _mergeBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** mergeBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

