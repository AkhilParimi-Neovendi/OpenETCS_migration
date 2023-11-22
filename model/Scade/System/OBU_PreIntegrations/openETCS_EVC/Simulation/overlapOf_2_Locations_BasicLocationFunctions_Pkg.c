/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "overlapOf_2_Locations_BasicLocationFunctions_Pkg.h"

/* BasicLocationFunctions_Pkg::overlapOf_2_Locations/ */
void overlapOf_2_Locations_BasicLocationFunctions_Pkg(
  /* loc_2/ */
  LocWithInAcc_T_Obu_BasicTypes_Pkg *loc_2,
  /* loc_1/ */
  LocWithInAcc_T_Obu_BasicTypes_Pkg *loc_1,
  outC_overlapOf_2_Locations_BasicLocationFunctions_Pkg *outC)
{
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L2, loc_2);
  outC->_L9 = outC->_L2.nominal;
  outC->_L8 = outC->_L2.d_max;
  outC->_L7 = outC->_L8 + outC->_L9;
  outC->I2_Min_1_int32 = outC->_L7;
  outC->_L22_Min_1_int32 = outC->I2_Min_1_int32;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L1, loc_1);
  outC->_L5 = outC->_L1.nominal;
  outC->_L3 = outC->_L1.d_max;
  outC->_L6 = outC->_L3 + outC->_L5;
  outC->I1_Min_1_int32 = outC->_L6;
  outC->_L21_Min_1_int32 = outC->I1_Min_1_int32;
  outC->_L25_Min_1_int32 = outC->_L21_Min_1_int32 <= outC->_L22_Min_1_int32;
  /* @1/_L24= */
  if (outC->_L25_Min_1_int32) {
    outC->_L24_Min_1_int32 = outC->_L21_Min_1_int32;
  }
  else {
    outC->_L24_Min_1_int32 = outC->_L22_Min_1_int32;
  }
  outC->Mi_Output_Min_1_int32 = outC->_L24_Min_1_int32;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L18, loc_2);
  outC->_L15 = outC->_L18.nominal;
  outC->_L13 = outC->_L18.d_min;
  outC->_L17 = outC->_L13 + outC->_L15;
  outC->I2_Max_1_int32 = outC->_L17;
  outC->_L2_Max_1_int32 = outC->I2_Max_1_int32;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L12, loc_1);
  outC->_L16 = outC->_L12.nominal;
  outC->_L14 = outC->_L12.d_min;
  outC->_L11 = outC->_L14 + outC->_L16;
  outC->I1_Max_1_int32 = outC->_L11;
  outC->_L1_Max_1_int32 = outC->I1_Max_1_int32;
  outC->_L3_Max_1_int32 = outC->_L1_Max_1_int32 >= outC->_L2_Max_1_int32;
  /* @2/_L4= */
  if (outC->_L3_Max_1_int32) {
    outC->_L4_Max_1_int32 = outC->_L1_Max_1_int32;
  }
  else {
    outC->_L4_Max_1_int32 = outC->_L2_Max_1_int32;
  }
  outC->Ma_Output_Max_1_int32 = outC->_L4_Max_1_int32;
  outC->_L19 = outC->Ma_Output_Max_1_int32;
  outC->_L23 = kcg_lit_int32(2);
  outC->_L10 = outC->Mi_Output_Min_1_int32;
  outC->_L21 = outC->_L10 - outC->_L19;
  outC->_L22 = outC->_L21 / outC->_L23;
  outC->_L24 = outC->_L22 + outC->_L19;
  outC->_L33 = outC->_L19 - outC->_L24;
  outC->_L32 = outC->_L10 - outC->_L24;
  outC->_L31.nominal = outC->_L24;
  outC->_L31.d_min = outC->_L33;
  outC->_L31.d_max = outC->_L32;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->loc, &outC->_L31);
  outC->_L20 = outC->_L10 >= outC->_L19;
  outC->overlap = outC->_L20;
}

#ifndef KCG_USER_DEFINED_INIT
void overlapOf_2_Locations_init_BasicLocationFunctions_Pkg(
  outC_overlapOf_2_Locations_BasicLocationFunctions_Pkg *outC)
{
  outC->_L33 = kcg_lit_int32(0);
  outC->_L32 = kcg_lit_int32(0);
  outC->_L31.nominal = kcg_lit_int32(0);
  outC->_L31.d_min = kcg_lit_int32(0);
  outC->_L31.d_max = kcg_lit_int32(0);
  outC->_L24 = kcg_lit_int32(0);
  outC->_L23 = kcg_lit_int32(0);
  outC->_L22 = kcg_lit_int32(0);
  outC->_L21 = kcg_lit_int32(0);
  outC->_L20 = kcg_true;
  outC->_L11 = kcg_lit_int32(0);
  outC->_L12.nominal = kcg_lit_int32(0);
  outC->_L12.d_min = kcg_lit_int32(0);
  outC->_L12.d_max = kcg_lit_int32(0);
  outC->_L13 = kcg_lit_int32(0);
  outC->_L14 = kcg_lit_int32(0);
  outC->_L15 = kcg_lit_int32(0);
  outC->_L16 = kcg_lit_int32(0);
  outC->_L17 = kcg_lit_int32(0);
  outC->_L18.nominal = kcg_lit_int32(0);
  outC->_L18.d_min = kcg_lit_int32(0);
  outC->_L18.d_max = kcg_lit_int32(0);
  outC->_L19 = kcg_lit_int32(0);
  outC->_L10 = kcg_lit_int32(0);
  outC->_L7 = kcg_lit_int32(0);
  outC->_L8 = kcg_lit_int32(0);
  outC->_L9 = kcg_lit_int32(0);
  outC->_L6 = kcg_lit_int32(0);
  outC->_L5 = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
  outC->_L2.nominal = kcg_lit_int32(0);
  outC->_L2.d_min = kcg_lit_int32(0);
  outC->_L2.d_max = kcg_lit_int32(0);
  outC->_L1.nominal = kcg_lit_int32(0);
  outC->_L1.d_min = kcg_lit_int32(0);
  outC->_L1.d_max = kcg_lit_int32(0);
  outC->_L1_Max_1_int32 = kcg_lit_int32(0);
  outC->_L2_Max_1_int32 = kcg_lit_int32(0);
  outC->_L3_Max_1_int32 = kcg_true;
  outC->_L4_Max_1_int32 = kcg_lit_int32(0);
  outC->I1_Max_1_int32 = kcg_lit_int32(0);
  outC->I2_Max_1_int32 = kcg_lit_int32(0);
  outC->Ma_Output_Max_1_int32 = kcg_lit_int32(0);
  outC->_L21_Min_1_int32 = kcg_lit_int32(0);
  outC->_L22_Min_1_int32 = kcg_lit_int32(0);
  outC->_L24_Min_1_int32 = kcg_lit_int32(0);
  outC->_L25_Min_1_int32 = kcg_true;
  outC->I1_Min_1_int32 = kcg_lit_int32(0);
  outC->I2_Min_1_int32 = kcg_lit_int32(0);
  outC->Mi_Output_Min_1_int32 = kcg_lit_int32(0);
  outC->overlap = kcg_true;
  outC->loc.nominal = kcg_lit_int32(0);
  outC->loc.d_min = kcg_lit_int32(0);
  outC->loc.d_max = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void overlapOf_2_Locations_reset_BasicLocationFunctions_Pkg(
  outC_overlapOf_2_Locations_BasicLocationFunctions_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: BasicLocationFunctions_Pkg::overlapOf_2_Locations/
  @1: (math::Min#1)
  @2: (math::Max#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** overlapOf_2_Locations_BasicLocationFunctions_Pkg.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

