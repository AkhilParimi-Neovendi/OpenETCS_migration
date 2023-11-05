/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "add_odo_2_Location_BasicLocationFunctions_Pkg.h"

/* BasicLocationFunctions_Pkg::add_odo_2_Location/ */
void add_odo_2_Location_BasicLocationFunctions_Pkg(
  /* refLocation/ */
  LocWithInAcc_T_Obu_BasicTypes_Pkg *refLocation,
  /* refOdoValue/ */
  OdometryLocations_T_Obu_BasicTypes_Pkg *refOdoValue,
  /* odoValue/ */
  OdometryLocations_T_Obu_BasicTypes_Pkg *odoValue,
  outC_add_odo_2_Location_BasicLocationFunctions_Pkg *outC)
{
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&outC->_L3, odoValue);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&outC->_L2, refOdoValue);
  /* _L4=(BasicLocationFunctions_Pkg::sub_2_odoDistances#1)/ */
  sub_2_odoDistances_BasicLocationFunctions_Pkg(
    &outC->_L3,
    &outC->_L2,
    &outC->Context_sub_2_odoDistances_1);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L4,
    &outC->Context_sub_2_odoDistances_1.distance);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L1, refLocation);
  /* _L5=(BasicLocationFunctions_Pkg::add_2_Distances#1)/ */
  add_2_Distances_BasicLocationFunctions_Pkg(
    &outC->_L4,
    &outC->_L1,
    &outC->Context_add_2_Distances_1);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L5,
    &outC->Context_add_2_Distances_1.distance);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->location, &outC->_L5);
}

#ifndef KCG_USER_DEFINED_INIT
void add_odo_2_Location_init_BasicLocationFunctions_Pkg(
  outC_add_odo_2_Location_BasicLocationFunctions_Pkg *outC)
{
  outC->_L5.nominal = kcg_lit_int32(0);
  outC->_L5.d_min = kcg_lit_int32(0);
  outC->_L5.d_max = kcg_lit_int32(0);
  outC->_L4.nominal = kcg_lit_int32(0);
  outC->_L4.d_min = kcg_lit_int32(0);
  outC->_L4.d_max = kcg_lit_int32(0);
  outC->_L3.o_nominal = kcg_lit_int32(0);
  outC->_L3.o_min = kcg_lit_int32(0);
  outC->_L3.o_max = kcg_lit_int32(0);
  outC->_L2.o_nominal = kcg_lit_int32(0);
  outC->_L2.o_min = kcg_lit_int32(0);
  outC->_L2.o_max = kcg_lit_int32(0);
  outC->_L1.nominal = kcg_lit_int32(0);
  outC->_L1.d_min = kcg_lit_int32(0);
  outC->_L1.d_max = kcg_lit_int32(0);
  outC->location.nominal = kcg_lit_int32(0);
  outC->location.d_min = kcg_lit_int32(0);
  outC->location.d_max = kcg_lit_int32(0);
  /* _L5=(BasicLocationFunctions_Pkg::add_2_Distances#1)/ */
  add_2_Distances_init_BasicLocationFunctions_Pkg(
    &outC->Context_add_2_Distances_1);
  /* _L4=(BasicLocationFunctions_Pkg::sub_2_odoDistances#1)/ */
  sub_2_odoDistances_init_BasicLocationFunctions_Pkg(
    &outC->Context_sub_2_odoDistances_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void add_odo_2_Location_reset_BasicLocationFunctions_Pkg(
  outC_add_odo_2_Location_BasicLocationFunctions_Pkg *outC)
{
  /* _L5=(BasicLocationFunctions_Pkg::add_2_Distances#1)/ */
  add_2_Distances_reset_BasicLocationFunctions_Pkg(
    &outC->Context_add_2_Distances_1);
  /* _L4=(BasicLocationFunctions_Pkg::sub_2_odoDistances#1)/ */
  sub_2_odoDistances_reset_BasicLocationFunctions_Pkg(
    &outC->Context_sub_2_odoDistances_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** add_odo_2_Location_BasicLocationFunctions_Pkg.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

