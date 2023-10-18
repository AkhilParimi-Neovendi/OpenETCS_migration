/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _sub_2_distances_BasicLocationFunctions_Pkg_H_
#define _sub_2_distances_BasicLocationFunctions_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* distance/ */ distance;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L1/ */ _L1;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L2/ */ _L2;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L3/ */ _L3;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L4/ */ _L4;
  kcg_int64 /* _L5/ */ _L5;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L17/ */ _L17;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L16/ */ _L16;
  kcg_int64 /* _L15/ */ _L15;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L14/ */ _L14;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L13/ */ _L13;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L22/ */ _L22;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L21/ */ _L21;
  kcg_int64 /* _L20/ */ _L20;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L19/ */ _L19;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L18/ */ _L18;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L23/ */ _L23;
} outC_sub_2_distances_BasicLocationFunctions_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* BasicLocationFunctions_Pkg::sub_2_distances/ */
extern void sub_2_distances_BasicLocationFunctions_Pkg(
  /* loc_2/ */
  LocWithInAcc_T_Obu_BasicTypes_Pkg *loc_2,
  /* loc_1/ */
  LocWithInAcc_T_Obu_BasicTypes_Pkg *loc_1,
  outC_sub_2_distances_BasicLocationFunctions_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void sub_2_distances_reset_BasicLocationFunctions_Pkg(
  outC_sub_2_distances_BasicLocationFunctions_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void sub_2_distances_init_BasicLocationFunctions_Pkg(
  outC_sub_2_distances_BasicLocationFunctions_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _sub_2_distances_BasicLocationFunctions_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** sub_2_distances_BasicLocationFunctions_Pkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

