/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _add_odo_2_Location_BasicLocationFunctions_Pkg_H_
#define _add_odo_2_Location_BasicLocationFunctions_Pkg_H_

#include "kcg_types.h"
#include "sub_2_odoDistances_BasicLocationFunctions_Pkg.h"
#include "add_2_Distances_BasicLocationFunctions_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* location/ */ location;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_add_2_Distances_BasicLocationFunctions_Pkg /* _L5=(BasicLocationFunctions_Pkg::add_2_Distances#1)/ */ Context_add_2_Distances_1;
  outC_sub_2_odoDistances_BasicLocationFunctions_Pkg /* _L4=(BasicLocationFunctions_Pkg::sub_2_odoDistances#1)/ */ Context_sub_2_odoDistances_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L1/ */ _L1;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* _L2/ */ _L2;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* _L3/ */ _L3;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L4/ */ _L4;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L5/ */ _L5;
} outC_add_odo_2_Location_BasicLocationFunctions_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* BasicLocationFunctions_Pkg::add_odo_2_Location/ */
extern void add_odo_2_Location_BasicLocationFunctions_Pkg(
  /* refLocation/ */
  LocWithInAcc_T_Obu_BasicTypes_Pkg *refLocation,
  /* refOdoValue/ */
  OdometryLocations_T_Obu_BasicTypes_Pkg *refOdoValue,
  /* odoValue/ */
  OdometryLocations_T_Obu_BasicTypes_Pkg *odoValue,
  outC_add_odo_2_Location_BasicLocationFunctions_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void add_odo_2_Location_reset_BasicLocationFunctions_Pkg(
  outC_add_odo_2_Location_BasicLocationFunctions_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void add_odo_2_Location_init_BasicLocationFunctions_Pkg(
  outC_add_odo_2_Location_BasicLocationFunctions_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _add_odo_2_Location_BasicLocationFunctions_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** add_odo_2_Location_BasicLocationFunctions_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

