/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */
#ifndef _locReachedOrPassed_BasicLocationFunctions_Pkg_H_
#define _locReachedOrPassed_BasicLocationFunctions_Pkg_H_

#include "kcg_types.h"
#include "signChanged_BasicLocationFunctions_Pkg.h"
#include "overlapOf_2_Locations_BasicLocationFunctions_Pkg.h"
#include "RisingEdge_digital.h"
#include "sub_2_distances_BasicLocationFunctions_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* hit/ */ hit;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RisingEdge_digital /* _L39=(digital::RisingEdge#1)/ */ Context_RisingEdge_1;
  outC_overlapOf_2_Locations_BasicLocationFunctions_Pkg /* _L34=(BasicLocationFunctions_Pkg::overlapOf_2_Locations#1)/ */ Context_overlapOf_2_Locations_1;
  outC_signChanged_BasicLocationFunctions_Pkg /* _L47=(BasicLocationFunctions_Pkg::signChanged#1)/ */ Context_signChanged_1;
  outC_signChanged_BasicLocationFunctions_Pkg /* _L48=(BasicLocationFunctions_Pkg::signChanged#2)/ */ Context_signChanged_2;
  outC_sub_2_distances_BasicLocationFunctions_Pkg /* _L40=(BasicLocationFunctions_Pkg::sub_2_distances#1)/ */ Context_sub_2_distances_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L35/ */ _L35;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L34/ */ _L34;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L36/ */ _L36;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L37/ */ _L37;
  kcg_bool /* _L38/ */ _L38;
  kcg_bool /* _L39/ */ _L39;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L40/ */ _L40;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L43/ */ _L43;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L42/ */ _L42;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L41/ */ _L41;
  kcg_bool /* _L47/ */ _L47;
  kcg_bool /* _L48/ */ _L48;
  kcg_bool /* _L50/ */ _L50;
  kcg_int32 /* _L51/ */ _L51;
  kcg_int32 /* _L52/ */ _L52;
} outC_locReachedOrPassed_BasicLocationFunctions_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* BasicLocationFunctions_Pkg::locReachedOrPassed/ */
extern void locReachedOrPassed_BasicLocationFunctions_Pkg(
  /* loc_2/ */
  LocWithInAcc_T_Obu_BasicTypes_Pkg *loc_2,
  /* loc_1/ */
  LocWithInAcc_T_Obu_BasicTypes_Pkg *loc_1,
  outC_locReachedOrPassed_BasicLocationFunctions_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void locReachedOrPassed_reset_BasicLocationFunctions_Pkg(
  outC_locReachedOrPassed_BasicLocationFunctions_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void locReachedOrPassed_init_BasicLocationFunctions_Pkg(
  outC_locReachedOrPassed_BasicLocationFunctions_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _locReachedOrPassed_BasicLocationFunctions_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** locReachedOrPassed_BasicLocationFunctions_Pkg.h
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

