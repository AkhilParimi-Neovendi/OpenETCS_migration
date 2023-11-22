/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _Supervision_M_Loc_ProvidePositionReport_Pkg_H_
#define _Supervision_M_Loc_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"
#include "op_GetLRBGfromBGs_ProvidePositionReport_Pkg.h"
#include "op_3_6_5_1_4_j_ProvidePositionReport_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* trigger/ */ trigger;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_op_3_6_5_1_4_j_ProvidePositionReport_Pkg /* _L11=(ProvidePositionReport_Pkg::op_3_6_5_1_4_j#1)/ */ Context_op_3_6_5_1_4_j_1;
  outC_op_GetLRBGfromBGs_ProvidePositionReport_Pkg /* _L15=(ProvidePositionReport_Pkg::op_GetLRBGfromBGs#1)/ */ Context_op_GetLRBGfromBGs_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_LOC /* _L13/ */ _L13;
  kcg_bool /* _L11/ */ _L11;
  M_LOC /* _L10/ */ _L10;
  kcg_bool /* _L9/ */ _L9;
  kcg_bool /* _L8/ */ _L8;
  kcg_bool /* _L7/ */ _L7;
  M_LOC /* _L6/ */ _L6;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L4/ */ _L4;
  trainPosition_T_TrainPosition_Types_Pck /* _L3/ */ _L3;
  kcg_bool /* _L2/ */ _L2;
  kcg_bool /* _L1/ */ _L1;
  M_LOC /* _L14/ */ _L14;
  positionedBG_T_TrainPosition_Types_Pck /* _L16/ */ _L16;
  kcg_bool /* _L15/ */ _L15;
  positionedBGs_T_TrainPosition_Types_Pck /* _L17/ */ _L17;
  kcg_bool /* _L18/ */ _L18;
  kcg_bool /* _L19/ */ _L19;
} outC_Supervision_M_Loc_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::Supervision_M_Loc/ */
extern void Supervision_M_Loc_ProvidePositionReport_Pkg(
  /* trainPos/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* posBGs/ */
  positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* mloc/ */
  M_LOC mloc,
  /* present/ */
  kcg_bool present,
  outC_Supervision_M_Loc_ProvidePositionReport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Supervision_M_Loc_reset_ProvidePositionReport_Pkg(
  outC_Supervision_M_Loc_ProvidePositionReport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Supervision_M_Loc_init_ProvidePositionReport_Pkg(
  outC_Supervision_M_Loc_ProvidePositionReport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Supervision_M_Loc_ProvidePositionReport_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Supervision_M_Loc_ProvidePositionReport_Pkg.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

