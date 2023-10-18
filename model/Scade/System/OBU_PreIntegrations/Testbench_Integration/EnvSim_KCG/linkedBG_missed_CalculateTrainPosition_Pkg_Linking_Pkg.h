/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _linkedBG_missed_CalculateTrainPosition_Pkg_Linking_Pkg_H_
#define _linkedBG_missed_CalculateTrainPosition_Pkg_Linking_Pkg_H_

#include "kcg_types.h"
#include "positionedBGs_ids_notEqual_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "FallingEdge_digital.h"
#include "posInRangeOfBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "sub_2_distances_BasicLocationFunctions_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* missed/ */ missed;
  kcg_int64 /* indexOfBG/ */ indexOfBG;
  positionedBG_T_TrainPosition_Types_Pck /* BG/ */ BG;
  positionedBGs_T_TrainPosition_Types_Pck /* BGs_out/ */ BGs_out;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* position/ */ mem_position;
  kcg_bool init;
  positionedBG_T_TrainPosition_Types_Pck /* _L3/ */ _L3;
  kcg_int64 /* _L2/ */ _L2;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_positionedBGs_ids_notEqual_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L59=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_notEqual#1)/ */ Context_positionedBGs_ids_notEqual_1;
  outC_FallingEdge_digital /* _L8=(digital::FallingEdge#1)/ */ Context_FallingEdge_1;
  outC_posInRangeOfBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L1=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG#1)/ */ Context_posInRangeOfBG_1;
  outC_sub_2_distances_BasicLocationFunctions_Pkg /* _L56=(BasicLocationFunctions_Pkg::sub_2_distances#2)/ */ Context_sub_2_distances_2;
  outC_indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L71=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id#2)/ */ Context_indexOfBG_by_id_2;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int64 /* IfBlock1:then:_L12/ */ _L12_then_IfBlock1;
  kcg_int64 /* IfBlock1:then:_L11/ */ _L11_then_IfBlock1;
  L_internal_Type_Obu_BasicTypes_Pkg /* IfBlock1:then:_L10/ */ _L10_then_IfBlock1;
  L_internal_Type_Obu_BasicTypes_Pkg /* IfBlock1:then:_L9/ */ _L9_then_IfBlock1;
  L_internal_Type_Obu_BasicTypes_Pkg /* IfBlock1:then:_L8/ */ _L8_then_IfBlock1;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* IfBlock1:then:_L6/ */ _L6_then_IfBlock1;
  L_internal_Type_Obu_BasicTypes_Pkg /* IfBlock1:then:_L3/ */ _L3_then_IfBlock1;
  L_internal_Type_Obu_BasicTypes_Pkg /* IfBlock1:then:_L4/ */ _L4_then_IfBlock1;
  L_internal_Type_Obu_BasicTypes_Pkg /* IfBlock1:then:_L5/ */ _L5_then_IfBlock1;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* IfBlock1:else:_L3/ */ _L3_else_IfBlock1;
  kcg_int64 /* IfBlock1:else:_L4/ */ _L4_else_IfBlock1;
  L_internal_Type_Obu_BasicTypes_Pkg /* IfBlock1:else:_L7/ */ _L7_else_IfBlock1;
  L_internal_Type_Obu_BasicTypes_Pkg /* IfBlock1:else:_L6/ */ _L6_else_IfBlock1;
  L_internal_Type_Obu_BasicTypes_Pkg /* IfBlock1:else:_L5/ */ _L5_else_IfBlock1;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* IfBlock1:else:_L8/ */ _L8_else_IfBlock1;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* IfBlock1:else:_L9/ */ _L9_else_IfBlock1;
  kcg_int64 /* IfBlock1:else:_L10/ */ _L10_else_IfBlock1;
  L_internal_Type_Obu_BasicTypes_Pkg /* IfBlock1:else:_L13/ */ _L13_else_IfBlock1;
  L_internal_Type_Obu_BasicTypes_Pkg /* IfBlock1:else:_L12/ */ _L12_else_IfBlock1;
  L_internal_Type_Obu_BasicTypes_Pkg /* IfBlock1:else:_L11/ */ _L11_else_IfBlock1;
  kcg_bool /* movedAhead/ */ movedAhead;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* weakenedPosition/ */ weakenedPosition;
  kcg_bool /* _L1/ */ _L1;
  positionedBGs_T_TrainPosition_Types_Pck /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  kcg_int64 /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
  positionedBG_T_TrainPosition_Types_Pck /* _L10/ */ _L10;
  Q_LINK /* _L11/ */ _L11;
  Q_LINK /* _L15/ */ _L15;
  kcg_bool /* _L16/ */ _L16;
  kcg_bool /* _L17/ */ _L17;
  kcg_bool /* _L18/ */ _L18;
  kcg_bool /* _L19/ */ _L19;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L51/ */ _L51;
  kcg_int64 /* _L57/ */ _L57;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L56/ */ _L56;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L55/ */ _L55;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L54/ */ _L54;
  kcg_bool /* _L53/ */ _L53;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L52/ */ _L52;
  kcg_bool /* _L58/ */ _L58;
  kcg_bool /* _L59/ */ _L59;
  kcg_bool /* _L60/ */ _L60;
  positionedBG_T_TrainPosition_Types_Pck /* _L62/ */ _L62;
  positionedBGs_T_TrainPosition_Types_Pck /* _L64/ */ _L64;
  positionedBGs_T_TrainPosition_Types_Pck /* _L65/ */ _L65;
  positionedBGs_T_TrainPosition_Types_Pck /* _L66/ */ _L66;
  kcg_bool /* _L73/ */ _L73;
  kcg_bool /* _L72/ */ _L72;
  kcg_int64 /* _L71/ */ _L71;
  kcg_bool /* _L74/ */ _L74;
  positionedBG_T_TrainPosition_Types_Pck /* _L75/ */ _L75;
} outC_linkedBG_missed_CalculateTrainPosition_Pkg_Linking_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed/ */
extern void linkedBG_missed_CalculateTrainPosition_Pkg_Linking_Pkg(
  /* position/ */
  LocWithInAcc_T_Obu_BasicTypes_Pkg *position,
  /* BGs_in/ */
  positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* enable/ */
  kcg_bool enable,
  outC_linkedBG_missed_CalculateTrainPosition_Pkg_Linking_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void linkedBG_missed_reset_CalculateTrainPosition_Pkg_Linking_Pkg(
  outC_linkedBG_missed_CalculateTrainPosition_Pkg_Linking_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void linkedBG_missed_init_CalculateTrainPosition_Pkg_Linking_Pkg(
  outC_linkedBG_missed_CalculateTrainPosition_Pkg_Linking_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _linkedBG_missed_CalculateTrainPosition_Pkg_Linking_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** linkedBG_missed_CalculateTrainPosition_Pkg_Linking_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

