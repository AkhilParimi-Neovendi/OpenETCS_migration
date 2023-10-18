/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _delDispensableBGs_CalculateTrainPosition_Pkg_H_
#define _delDispensableBGs_CalculateTrainPosition_Pkg_H_

#include "kcg_types.h"
#include "deleteBGs_beforeIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "indexOf_nthPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "countBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  positionedBGs_T_TrainPosition_Types_Pck /* BGs_out/ */ BGs_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_deleteBGs_beforeIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* IfBlock1:then:_L13=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex#2)/ */ Context_deleteBGs_beforeIndex_2;
  outC_indexOf_nthPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* IfBlock1:then:_L6=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG#2)/ */ Context_indexOf_nthPassedBG_2;
  outC_deleteBGs_beforeIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* IfBlock1:else:_L60=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex#9)/ */ Context_deleteBGs_beforeIndex_9;
  outC_indexOf_nthPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* IfBlock1:else:_L54=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG#9)/ */ Context_indexOf_nthPassedBG_9;
  outC_countBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L1=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs#1)/ */ Context_countBGs_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  positionedBGs_T_TrainPosition_Types_Pck /* IfBlock1:then:_L14/ */ _L14_then_IfBlock1;
  positionedBGs_T_TrainPosition_Types_Pck /* IfBlock1:then:_L13/ */ _L13_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L12/ */ _L12_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L11/ */ _L11_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L10/ */ _L10_then_IfBlock1;
  positionedBGs_T_TrainPosition_Types_Pck /* IfBlock1:then:_L9/ */ _L9_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L8/ */ _L8_then_IfBlock1;
  kcg_int64 /* IfBlock1:then:_L6/ */ _L6_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L7/ */ _L7_then_IfBlock1;
  kcg_int64 /* IfBlock1:then:_L5/ */ _L5_then_IfBlock1;
  kcg_int64 /* IfBlock1:then:_L4/ */ _L4_then_IfBlock1;
  kcg_int64 /* IfBlock1:then:_L3/ */ _L3_then_IfBlock1;
  kcg_int64 /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  kcg_int64 /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  kcg_int64 /* IfBlock1:else:_L62/ */ _L62_else_IfBlock1;
  kcg_int64 /* IfBlock1:else:_L61/ */ _L61_else_IfBlock1;
  kcg_int64 /* IfBlock1:else:_L47/ */ _L47_else_IfBlock1;
  kcg_int64 /* IfBlock1:else:_L49/ */ _L49_else_IfBlock1;
  kcg_int64 /* IfBlock1:else:_L51/ */ _L51_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L52/ */ _L52_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L53/ */ _L53_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L55/ */ _L55_else_IfBlock1;
  kcg_int64 /* IfBlock1:else:_L54/ */ _L54_else_IfBlock1;
  positionedBGs_T_TrainPosition_Types_Pck /* IfBlock1:else:_L56/ */ _L56_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L57/ */ _L57_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L58/ */ _L58_else_IfBlock1;
  positionedBGs_T_TrainPosition_Types_Pck /* IfBlock1:else:_L59/ */ _L59_else_IfBlock1;
  positionedBGs_T_TrainPosition_Types_Pck /* IfBlock1:else:_L60/ */ _L60_else_IfBlock1;
  kcg_int64 /* passedLinkedBGsCount/ */ passedLinkedBGsCount;
  kcg_int64 /* passedUnlinkedBGsCount/ */ passedUnlinkedBGsCount;
  BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L3/ */ _L3;
  kcg_bool /* _L2/ */ _L2;
  kcg_bool /* _L1/ */ _L1;
  positionedBGs_T_TrainPosition_Types_Pck /* _L8/ */ _L8;
  kcg_bool /* _L11/ */ _L11;
  kcg_int64 /* _L15/ */ _L15;
  kcg_int64 /* _L16/ */ _L16;
} outC_delDispensableBGs_CalculateTrainPosition_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::delDispensableBGs/ */
extern void delDispensableBGs_CalculateTrainPosition_Pkg(
  /* BGs_in/ */
  positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* deleteBG/ */
  kcg_bool deleteBG,
  outC_delDispensableBGs_CalculateTrainPosition_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void delDispensableBGs_reset_CalculateTrainPosition_Pkg(
  outC_delDispensableBGs_CalculateTrainPosition_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void delDispensableBGs_init_CalculateTrainPosition_Pkg(
  outC_delDispensableBGs_CalculateTrainPosition_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _delDispensableBGs_CalculateTrainPosition_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** delDispensableBGs_CalculateTrainPosition_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

