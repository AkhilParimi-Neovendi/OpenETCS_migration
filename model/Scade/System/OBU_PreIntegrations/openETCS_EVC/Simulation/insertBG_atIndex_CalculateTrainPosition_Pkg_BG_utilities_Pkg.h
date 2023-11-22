/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */
#ifndef _insertBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_
#define _insertBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_

#include "kcg_types.h"
#include "insertBG_atIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

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
  outC_insertBG_atIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L16=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex_itr#1)/ */ Context_insertBG_atIndex_itr_1[41];
  outC_positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L25=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal#1)/ */ Context_positionedBGs_ids_equal_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L1/ */ _L1;
  positionedBGs_T_TrainPosition_Types_Pck /* _L2/ */ _L2;
  kcg_int32 /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  kcg_int32 /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  kcg_int32 /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
  array_int32_41 /* _L9/ */ _L9;
  _141_array /* _L10/ */ _L10;
  positionedBG_T_TrainPosition_Types_Pck /* _L11/ */ _L11;
  _142_array /* _L12/ */ _L12;
  positionedBGs_T_TrainPosition_Types_Pck /* _L13/ */ _L13;
  positionedBGs_T_TrainPosition_Types_Pck /* _L15/ */ _L15;
  kcg_int32 /* _L16/ */ _L16;
  positionedBGs_T_TrainPosition_Types_Pck /* _L17/ */ _L17;
  positionedBGs_T_TrainPosition_Types_Pck /* _L18/ */ _L18;
  positionedBG_T_TrainPosition_Types_Pck /* _L19/ */ _L19;
  positionedBGs_T_TrainPosition_Types_Pck /* _L20/ */ _L20;
  positionedBGs_T_TrainPosition_Types_Pck /* _L21/ */ _L21;
  positionedBG_T_TrainPosition_Types_Pck /* _L22/ */ _L22;
  kcg_int32 /* _L23/ */ _L23;
  kcg_bool /* _L25/ */ _L25;
  positionedBG_T_TrainPosition_Types_Pck /* _L26/ */ _L26;
  kcg_bool /* _L27/ */ _L27;
  positionedBG_T_TrainPosition_Types_Pck /* _L28/ */ _L28;
  positionedBGs_T_TrainPosition_Types_Pck /* _L29/ */ _L29;
  kcg_bool /* _L30/ */ _L30;
  kcg_bool /* _L31/ */ _L31;
  kcg_bool /* _L32/ */ _L32;
  kcg_bool /* _L33/ */ _L33;
  kcg_bool /* _L34/ */ _L34;
} outC_insertBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex/ */
extern void insertBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* BG/ */
  positionedBG_T_TrainPosition_Types_Pck *BG,
  /* BGs_in/ */
  positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* indexOfBG/ */
  kcg_int32 indexOfBG,
  /* insert/ */
  kcg_bool insert,
  outC_insertBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void insertBG_atIndex_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_insertBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void insertBG_atIndex_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_insertBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _insertBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** insertBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

