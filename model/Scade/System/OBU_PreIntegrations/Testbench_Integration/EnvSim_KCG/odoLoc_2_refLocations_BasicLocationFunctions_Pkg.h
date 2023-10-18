/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _odoLoc_2_refLocations_BasicLocationFunctions_Pkg_H_
#define _odoLoc_2_refLocations_BasicLocationFunctions_Pkg_H_

#include "kcg_types.h"
#include "overlapOf_2_Locations_BasicLocationFunctions_Pkg.h"
#include "add_odo_2_Location_BasicLocationFunctions_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* location/ */ location;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_overlapOf_2_Locations_BasicLocationFunctions_Pkg /* _L10=(BasicLocationFunctions_Pkg::overlapOf_2_Locations#1)/ */ Context_overlapOf_2_Locations_1;
  outC_add_odo_2_Location_BasicLocationFunctions_Pkg /* _L6=(BasicLocationFunctions_Pkg::add_odo_2_Location#2)/ */ Context_add_odo_2_Location_2;
  outC_add_odo_2_Location_BasicLocationFunctions_Pkg /* _L1=(BasicLocationFunctions_Pkg::add_odo_2_Location#1)/ */ Context_add_odo_2_Location_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L1/ */ _L1;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L2/ */ _L2;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* _L3/ */ _L3;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* _L4/ */ _L4;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L6/ */ _L6;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L7/ */ _L7;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* _L8/ */ _L8;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* _L9/ */ _L9;
  kcg_bool /* _L11/ */ _L11;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L10/ */ _L10;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L12/ */ _L12;
} outC_odoLoc_2_refLocations_BasicLocationFunctions_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* BasicLocationFunctions_Pkg::odoLoc_2_refLocations/ */
extern void odoLoc_2_refLocations_BasicLocationFunctions_Pkg(
  /* refLoc_2/ */
  LocWithInAcc_T_Obu_BasicTypes_Pkg *refLoc_2,
  /* refLoc_1/ */
  LocWithInAcc_T_Obu_BasicTypes_Pkg *refLoc_1,
  /* refOdo_2/ */
  OdometryLocations_T_Obu_BasicTypes_Pkg *refOdo_2,
  /* refOdo_1/ */
  OdometryLocations_T_Obu_BasicTypes_Pkg *refOdo_1,
  /* odo/ */
  OdometryLocations_T_Obu_BasicTypes_Pkg *odo,
  outC_odoLoc_2_refLocations_BasicLocationFunctions_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void odoLoc_2_refLocations_reset_BasicLocationFunctions_Pkg(
  outC_odoLoc_2_refLocations_BasicLocationFunctions_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void odoLoc_2_refLocations_init_BasicLocationFunctions_Pkg(
  outC_odoLoc_2_refLocations_BasicLocationFunctions_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _odoLoc_2_refLocations_BasicLocationFunctions_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** odoLoc_2_refLocations_BasicLocationFunctions_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

