/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _IsBG_announced_CheckBGConsistency_Pkg_SubFunction_H_
#define _IsBG_announced_CheckBGConsistency_Pkg_SubFunction_H_

#include "kcg_types.h"
#include "isStored_iter_CheckBGConsistency_Pkg_SubFunction.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* isAnnounced/ */ isAnnounced;
  Q_LINKORIENTATION /* q_linkorintation/ */ q_linkorintation;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_isStored_iter_CheckBGConsistency_Pkg_SubFunction /* _L17=(CheckBGConsistency_Pkg::SubFunction::isStored_iter#1)/ */ Context_isStored_iter_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Q_LINKORIENTATION /* IfBlock1:then:_L5/ */ _L5_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L4/ */ _L4_then_IfBlock1;
  kcg_int32 /* IfBlock1:then:_L3/ */ _L3_then_IfBlock1;
  positionedBG_T_TrainPosition_Types_Pck /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  positionedBGs_T_TrainPosition_Types_Pck /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  kcg_int32 /* IfBlock1:else:_L12/ */ _L12_else_IfBlock1;
  positionedBG_T_TrainPosition_Types_Pck /* IfBlock1:else:_L13/ */ _L13_else_IfBlock1;
  Q_LINKORIENTATION /* IfBlock1:else:_L14/ */ _L14_else_IfBlock1;
  positionedBGs_T_TrainPosition_Types_Pck /* IfBlock1:else:_L15/ */ _L15_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L1/ */ _L1_else_IfBlock1;
  kcg_bool /* isStored/ */ isStored;
  kcg_int32 /* indexLocal/ */ indexLocal;
  positionedBGs_T_TrainPosition_Types_Pck /* _L15/ */ _L15;
  BG_Header_T_BG_Types_Pkg /* _L16/ */ _L16;
  kcg_bool /* _L18/ */ _L18;
  kcg_int32 /* _L17/ */ _L17;
} outC_IsBG_announced_CheckBGConsistency_Pkg_SubFunction;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::SubFunction::IsBG_announced/ */
extern void IsBG_announced_CheckBGConsistency_Pkg_SubFunction(
  /* recivedBG_header/ */
  BG_Header_T_BG_Types_Pkg *recivedBG_header,
  /* storedBGs/ */
  positionedBGs_T_TrainPosition_Types_Pck *storedBGs,
  outC_IsBG_announced_CheckBGConsistency_Pkg_SubFunction *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void IsBG_announced_reset_CheckBGConsistency_Pkg_SubFunction(
  outC_IsBG_announced_CheckBGConsistency_Pkg_SubFunction *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void IsBG_announced_init_CheckBGConsistency_Pkg_SubFunction(
  outC_IsBG_announced_CheckBGConsistency_Pkg_SubFunction *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _IsBG_announced_CheckBGConsistency_Pkg_SubFunction_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** IsBG_announced_CheckBGConsistency_Pkg_SubFunction.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

