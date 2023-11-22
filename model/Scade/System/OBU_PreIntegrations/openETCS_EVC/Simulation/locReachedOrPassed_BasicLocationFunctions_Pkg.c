/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:31
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "locReachedOrPassed_BasicLocationFunctions_Pkg.h"

/* BasicLocationFunctions_Pkg::locReachedOrPassed/ */
void locReachedOrPassed_BasicLocationFunctions_Pkg(
  /* loc_2/ */
  LocWithInAcc_T_Obu_BasicTypes_Pkg *loc_2,
  /* loc_1/ */
  LocWithInAcc_T_Obu_BasicTypes_Pkg *loc_1,
  outC_locReachedOrPassed_BasicLocationFunctions_Pkg *outC)
{
  LocWithInAcc_T_Obu_BasicTypes_Pkg noname;

  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L36, loc_2);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L37, loc_1);
  /* _L40=(BasicLocationFunctions_Pkg::sub_2_distances#1)/ */
  sub_2_distances_BasicLocationFunctions_Pkg(
    &outC->_L36,
    &outC->_L37,
    &outC->Context_sub_2_distances_1);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L40,
    &outC->Context_sub_2_distances_1.distance);
  outC->_L43 = outC->_L40.d_max;
  outC->_L41 = outC->_L40.nominal;
  outC->_L52 = outC->_L41 + outC->_L43;
  outC->_L42 = outC->_L40.d_min;
  outC->_L51 = outC->_L41 + outC->_L42;
  /* _L48=(BasicLocationFunctions_Pkg::signChanged#2)/ */
  signChanged_BasicLocationFunctions_Pkg(
    outC->_L52,
    &outC->Context_signChanged_2);
  outC->_L48 = outC->Context_signChanged_2.change;
  /* _L47=(BasicLocationFunctions_Pkg::signChanged#1)/ */
  signChanged_BasicLocationFunctions_Pkg(
    outC->_L51,
    &outC->Context_signChanged_1);
  outC->_L47 = outC->Context_signChanged_1.change;
  outC->_L50 = outC->_L47 & outC->_L48;
  /* _L34=(BasicLocationFunctions_Pkg::overlapOf_2_Locations#1)/ */
  overlapOf_2_Locations_BasicLocationFunctions_Pkg(
    &outC->_L36,
    &outC->_L37,
    &outC->Context_overlapOf_2_Locations_1);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L34,
    &outC->Context_overlapOf_2_Locations_1.loc);
  outC->_L35 = outC->Context_overlapOf_2_Locations_1.overlap;
  outC->_L38 = outC->_L35 | outC->_L50;
  /* _L39=(digital::RisingEdge#1)/ */
  RisingEdge_digital(outC->_L38, &outC->Context_RisingEdge_1);
  outC->_L39 = outC->Context_RisingEdge_1.RE_Output;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&noname, &outC->_L34);
  outC->hit = outC->_L39;
}

#ifndef KCG_USER_DEFINED_INIT
void locReachedOrPassed_init_BasicLocationFunctions_Pkg(
  outC_locReachedOrPassed_BasicLocationFunctions_Pkg *outC)
{
  outC->_L52 = kcg_lit_int32(0);
  outC->_L51 = kcg_lit_int32(0);
  outC->_L50 = kcg_true;
  outC->_L48 = kcg_true;
  outC->_L47 = kcg_true;
  outC->_L41 = kcg_lit_int32(0);
  outC->_L42 = kcg_lit_int32(0);
  outC->_L43 = kcg_lit_int32(0);
  outC->_L40.nominal = kcg_lit_int32(0);
  outC->_L40.d_min = kcg_lit_int32(0);
  outC->_L40.d_max = kcg_lit_int32(0);
  outC->_L39 = kcg_true;
  outC->_L38 = kcg_true;
  outC->_L37.nominal = kcg_lit_int32(0);
  outC->_L37.d_min = kcg_lit_int32(0);
  outC->_L37.d_max = kcg_lit_int32(0);
  outC->_L36.nominal = kcg_lit_int32(0);
  outC->_L36.d_min = kcg_lit_int32(0);
  outC->_L36.d_max = kcg_lit_int32(0);
  outC->_L34.nominal = kcg_lit_int32(0);
  outC->_L34.d_min = kcg_lit_int32(0);
  outC->_L34.d_max = kcg_lit_int32(0);
  outC->_L35 = kcg_true;
  outC->hit = kcg_true;
  /* _L39=(digital::RisingEdge#1)/ */
  RisingEdge_init_digital(&outC->Context_RisingEdge_1);
  /* _L34=(BasicLocationFunctions_Pkg::overlapOf_2_Locations#1)/ */
  overlapOf_2_Locations_init_BasicLocationFunctions_Pkg(
    &outC->Context_overlapOf_2_Locations_1);
  /* _L47=(BasicLocationFunctions_Pkg::signChanged#1)/ */
  signChanged_init_BasicLocationFunctions_Pkg(&outC->Context_signChanged_1);
  /* _L48=(BasicLocationFunctions_Pkg::signChanged#2)/ */
  signChanged_init_BasicLocationFunctions_Pkg(&outC->Context_signChanged_2);
  /* _L40=(BasicLocationFunctions_Pkg::sub_2_distances#1)/ */
  sub_2_distances_init_BasicLocationFunctions_Pkg(
    &outC->Context_sub_2_distances_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void locReachedOrPassed_reset_BasicLocationFunctions_Pkg(
  outC_locReachedOrPassed_BasicLocationFunctions_Pkg *outC)
{
  /* _L39=(digital::RisingEdge#1)/ */
  RisingEdge_reset_digital(&outC->Context_RisingEdge_1);
  /* _L34=(BasicLocationFunctions_Pkg::overlapOf_2_Locations#1)/ */
  overlapOf_2_Locations_reset_BasicLocationFunctions_Pkg(
    &outC->Context_overlapOf_2_Locations_1);
  /* _L47=(BasicLocationFunctions_Pkg::signChanged#1)/ */
  signChanged_reset_BasicLocationFunctions_Pkg(&outC->Context_signChanged_1);
  /* _L48=(BasicLocationFunctions_Pkg::signChanged#2)/ */
  signChanged_reset_BasicLocationFunctions_Pkg(&outC->Context_signChanged_2);
  /* _L40=(BasicLocationFunctions_Pkg::sub_2_distances#1)/ */
  sub_2_distances_reset_BasicLocationFunctions_Pkg(
    &outC->Context_sub_2_distances_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** locReachedOrPassed_BasicLocationFunctions_Pkg.c
** Generation date: 2023-11-06T13:54:31
*************************************************************$ */

