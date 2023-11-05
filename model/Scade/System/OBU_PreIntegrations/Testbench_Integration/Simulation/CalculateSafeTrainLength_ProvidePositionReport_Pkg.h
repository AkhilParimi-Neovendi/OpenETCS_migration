/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _CalculateSafeTrainLength_ProvidePositionReport_Pkg_H_
#define _CalculateSafeTrainLength_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  L_TRAININT /* safeTrainLength/ */ safeTrainLength;
  kcg_int32 /* minSafeRearEnd/ */ minSafeRearEnd;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* @1/A_Output/ */ A_Output_Abs_2_int32;
  kcg_int32 /* @1/A_Input/ */ A_Input_Abs_2_int32;
  kcg_int32 /* @1/_L8/ */ _L8_Abs_2_int32;
  kcg_int32 /* @1/_L5/ */ _L5_Abs_2_int32;
  kcg_int32 /* @1/_L3/ */ _L3_Abs_2_int32;
  kcg_int32 /* @1/_L2/ */ _L2_Abs_2_int32;
  kcg_bool /* @1/_L1/ */ _L1_Abs_2_int32;
  kcg_int32 /* @2/A_Output/ */ A_Output_Abs_3_int32;
  kcg_int32 /* @2/A_Input/ */ A_Input_Abs_3_int32;
  kcg_int32 /* @2/_L8/ */ _L8_Abs_3_int32;
  kcg_int32 /* @2/_L5/ */ _L5_Abs_3_int32;
  kcg_int32 /* @2/_L3/ */ _L3_Abs_3_int32;
  kcg_int32 /* @2/_L2/ */ _L2_Abs_3_int32;
  kcg_bool /* @2/_L1/ */ _L1_Abs_3_int32;
  trainProperties_T_TrainPosition_Types_Pck /* _L1/ */ _L1;
  trainPosition_T_TrainPosition_Types_Pck /* _L2/ */ _L2;
  L_TRAIN /* _L3/ */ _L3;
  kcg_int32 /* _L6/ */ _L6;
  Location_T_Obu_BasicTypes_Pkg /* _L9/ */ _L9;
  kcg_int32 /* _L11/ */ _L11;
  kcg_bool /* _L12/ */ _L12;
  kcg_int32 /* _L20/ */ _L20;
  Location_T_Obu_BasicTypes_Pkg /* _L21/ */ _L21;
  kcg_int32 /* _L22/ */ _L22;
  kcg_int32 /* _L23/ */ _L23;
  kcg_int32 /* _L24/ */ _L24;
} outC_CalculateSafeTrainLength_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::CalculateSafeTrainLength/ */
extern void CalculateSafeTrainLength_ProvidePositionReport_Pkg(
  /* trainProps/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* trainPosition/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  outC_CalculateSafeTrainLength_ProvidePositionReport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CalculateSafeTrainLength_reset_ProvidePositionReport_Pkg(
  outC_CalculateSafeTrainLength_ProvidePositionReport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CalculateSafeTrainLength_init_ProvidePositionReport_Pkg(
  outC_CalculateSafeTrainLength_ProvidePositionReport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: ProvidePositionReport_Pkg::CalculateSafeTrainLength/
  @1: (math::Abs#2)
  @2: (math::Abs#3)
*/

#endif /* _CalculateSafeTrainLength_ProvidePositionReport_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CalculateSafeTrainLength_ProvidePositionReport_Pkg.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

