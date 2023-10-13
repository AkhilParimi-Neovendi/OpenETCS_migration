/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "odoLoc_2_refLocations_BasicLocationFunctions_Pkg.h"

/* BasicLocationFunctions_Pkg::odoLoc_2_refLocations/ */
void odoLoc_2_refLocations_BasicLocationFunctions_Pkg(
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
  outC_odoLoc_2_refLocations_BasicLocationFunctions_Pkg *outC)
{
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L2, refLoc_1);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&outC->_L3, refOdo_1);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&outC->_L4, odo);
  /* _L1=(BasicLocationFunctions_Pkg::add_odo_2_Location#1)/ */
  add_odo_2_Location_BasicLocationFunctions_Pkg(
    &outC->_L2,
    &outC->_L3,
    &outC->_L4,
    &outC->Context_add_odo_2_Location_1);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L1,
    &outC->Context_add_odo_2_Location_1.location);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L7, refLoc_2);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&outC->_L8, refOdo_2);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&outC->_L9, odo);
  /* _L6=(BasicLocationFunctions_Pkg::add_odo_2_Location#2)/ */
  add_odo_2_Location_BasicLocationFunctions_Pkg(
    &outC->_L7,
    &outC->_L8,
    &outC->_L9,
    &outC->Context_add_odo_2_Location_2);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L6,
    &outC->Context_add_odo_2_Location_2.location);
  /* _L10=(BasicLocationFunctions_Pkg::overlapOf_2_Locations#1)/ */
  overlapOf_2_Locations_BasicLocationFunctions_Pkg(
    &outC->_L6,
    &outC->_L1,
    &outC->Context_overlapOf_2_Locations_1);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L10,
    &outC->Context_overlapOf_2_Locations_1.loc);
  outC->_L11 = outC->Context_overlapOf_2_Locations_1.overlap;
  /* _L12= */
  if (outC->_L11) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L12, &outC->_L10);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L12, &outC->_L1);
  }
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->location, &outC->_L12);
}

#ifndef KCG_USER_DEFINED_INIT
void odoLoc_2_refLocations_init_BasicLocationFunctions_Pkg(
  outC_odoLoc_2_refLocations_BasicLocationFunctions_Pkg *outC)
{
  outC->_L12.nominal = kcg_lit_int64(0);
  outC->_L12.d_min = kcg_lit_int64(0);
  outC->_L12.d_max = kcg_lit_int64(0);
  outC->_L10.nominal = kcg_lit_int64(0);
  outC->_L10.d_min = kcg_lit_int64(0);
  outC->_L10.d_max = kcg_lit_int64(0);
  outC->_L11 = kcg_true;
  outC->_L9.o_nominal = kcg_lit_int64(0);
  outC->_L9.o_min = kcg_lit_int64(0);
  outC->_L9.o_max = kcg_lit_int64(0);
  outC->_L8.o_nominal = kcg_lit_int64(0);
  outC->_L8.o_min = kcg_lit_int64(0);
  outC->_L8.o_max = kcg_lit_int64(0);
  outC->_L7.nominal = kcg_lit_int64(0);
  outC->_L7.d_min = kcg_lit_int64(0);
  outC->_L7.d_max = kcg_lit_int64(0);
  outC->_L6.nominal = kcg_lit_int64(0);
  outC->_L6.d_min = kcg_lit_int64(0);
  outC->_L6.d_max = kcg_lit_int64(0);
  outC->_L4.o_nominal = kcg_lit_int64(0);
  outC->_L4.o_min = kcg_lit_int64(0);
  outC->_L4.o_max = kcg_lit_int64(0);
  outC->_L3.o_nominal = kcg_lit_int64(0);
  outC->_L3.o_min = kcg_lit_int64(0);
  outC->_L3.o_max = kcg_lit_int64(0);
  outC->_L2.nominal = kcg_lit_int64(0);
  outC->_L2.d_min = kcg_lit_int64(0);
  outC->_L2.d_max = kcg_lit_int64(0);
  outC->_L1.nominal = kcg_lit_int64(0);
  outC->_L1.d_min = kcg_lit_int64(0);
  outC->_L1.d_max = kcg_lit_int64(0);
  outC->location.nominal = kcg_lit_int64(0);
  outC->location.d_min = kcg_lit_int64(0);
  outC->location.d_max = kcg_lit_int64(0);
  /* _L10=(BasicLocationFunctions_Pkg::overlapOf_2_Locations#1)/ */
  overlapOf_2_Locations_init_BasicLocationFunctions_Pkg(
    &outC->Context_overlapOf_2_Locations_1);
  /* _L6=(BasicLocationFunctions_Pkg::add_odo_2_Location#2)/ */
  add_odo_2_Location_init_BasicLocationFunctions_Pkg(
    &outC->Context_add_odo_2_Location_2);
  /* _L1=(BasicLocationFunctions_Pkg::add_odo_2_Location#1)/ */
  add_odo_2_Location_init_BasicLocationFunctions_Pkg(
    &outC->Context_add_odo_2_Location_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void odoLoc_2_refLocations_reset_BasicLocationFunctions_Pkg(
  outC_odoLoc_2_refLocations_BasicLocationFunctions_Pkg *outC)
{
  /* _L10=(BasicLocationFunctions_Pkg::overlapOf_2_Locations#1)/ */
  overlapOf_2_Locations_reset_BasicLocationFunctions_Pkg(
    &outC->Context_overlapOf_2_Locations_1);
  /* _L6=(BasicLocationFunctions_Pkg::add_odo_2_Location#2)/ */
  add_odo_2_Location_reset_BasicLocationFunctions_Pkg(
    &outC->Context_add_odo_2_Location_2);
  /* _L1=(BasicLocationFunctions_Pkg::add_odo_2_Location#1)/ */
  add_odo_2_Location_reset_BasicLocationFunctions_Pkg(
    &outC->Context_add_odo_2_Location_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** odoLoc_2_refLocations_BasicLocationFunctions_Pkg.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

