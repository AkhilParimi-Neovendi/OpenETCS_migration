/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _deleteBG_atIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_
#define _deleteBG_atIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* cont/ */ cont;
  positionedBG_T_TrainPosition_Types_Pck /* BG_out/ */ BG_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  positionedBG_T_TrainPosition_Types_Pck /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  positionedBG_T_TrainPosition_Types_Pck /* IfBlock1:else:else:_L1/ */ _L1_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:_L2/ */ _L2_else_else_IfBlock1;
  positionedBG_T_TrainPosition_Types_Pck /* IfBlock1:else:then:_L1/ */ _L1_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L2/ */ _L2_then_else_IfBlock1;
} outC_deleteBG_atIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex_itr/ */
extern void deleteBG_atIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* iteratorIndex/ */
  kcg_int32 iteratorIndex,
  /* indexOfBG/ */
  kcg_int32 indexOfBG,
  /* BG_in/ */
  positionedBG_T_TrainPosition_Types_Pck *BG_in,
  /* BG_shifted_in/ */
  positionedBG_T_TrainPosition_Types_Pck *BG_shifted_in,
  outC_deleteBG_atIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void deleteBG_atIndex_itr_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_deleteBG_atIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void deleteBG_atIndex_itr_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_deleteBG_atIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _deleteBG_atIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** deleteBG_atIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

