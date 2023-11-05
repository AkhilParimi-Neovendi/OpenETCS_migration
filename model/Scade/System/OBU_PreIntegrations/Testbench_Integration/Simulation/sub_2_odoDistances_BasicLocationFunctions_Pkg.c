/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "sub_2_odoDistances_BasicLocationFunctions_Pkg.h"

/* BasicLocationFunctions_Pkg::sub_2_odoDistances/ */
void sub_2_odoDistances_BasicLocationFunctions_Pkg(
  /* odo_2/ */
  OdometryLocations_T_Obu_BasicTypes_Pkg *odo_2,
  /* odo_1/ */
  OdometryLocations_T_Obu_BasicTypes_Pkg *odo_1,
  outC_sub_2_odoDistances_BasicLocationFunctions_Pkg *outC)
{
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&outC->_L2, odo_1);
  outC->_L4 = outC->_L2.o_nominal;
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&outC->_L1, odo_2);
  outC->_L3 = outC->_L1.o_nominal;
  outC->_L5 = outC->_L3 - outC->_L4;
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&outC->_L17, odo_1);
  outC->_L13 = outC->_L17.o_min;
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&outC->_L16, odo_2);
  outC->_L14 = outC->_L16.o_min;
  outC->_L15 = outC->_L14 - outC->_L13;
  outC->_L23 = outC->_L15 - outC->_L5;
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&outC->_L18, odo_1);
  outC->_L21 = outC->_L18.o_max;
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&outC->_L19, odo_2);
  outC->_L22 = outC->_L19.o_max;
  outC->_L20 = outC->_L22 - outC->_L21;
  outC->_L24 = outC->_L20 - outC->_L5;
  outC->_L31.nominal = outC->_L5;
  outC->_L31.d_min = outC->_L23;
  outC->_L31.d_max = outC->_L24;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->distance, &outC->_L31);
}

#ifndef KCG_USER_DEFINED_INIT
void sub_2_odoDistances_init_BasicLocationFunctions_Pkg(
  outC_sub_2_odoDistances_BasicLocationFunctions_Pkg *outC)
{
  outC->_L31.nominal = kcg_lit_int32(0);
  outC->_L31.d_min = kcg_lit_int32(0);
  outC->_L31.d_max = kcg_lit_int32(0);
  outC->_L24 = kcg_lit_int32(0);
  outC->_L23 = kcg_lit_int32(0);
  outC->_L18.o_nominal = kcg_lit_int32(0);
  outC->_L18.o_min = kcg_lit_int32(0);
  outC->_L18.o_max = kcg_lit_int32(0);
  outC->_L19.o_nominal = kcg_lit_int32(0);
  outC->_L19.o_min = kcg_lit_int32(0);
  outC->_L19.o_max = kcg_lit_int32(0);
  outC->_L20 = kcg_lit_int32(0);
  outC->_L21 = kcg_lit_int32(0);
  outC->_L22 = kcg_lit_int32(0);
  outC->_L13 = kcg_lit_int32(0);
  outC->_L14 = kcg_lit_int32(0);
  outC->_L15 = kcg_lit_int32(0);
  outC->_L16.o_nominal = kcg_lit_int32(0);
  outC->_L16.o_min = kcg_lit_int32(0);
  outC->_L16.o_max = kcg_lit_int32(0);
  outC->_L17.o_nominal = kcg_lit_int32(0);
  outC->_L17.o_min = kcg_lit_int32(0);
  outC->_L17.o_max = kcg_lit_int32(0);
  outC->_L5 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
  outC->_L2.o_nominal = kcg_lit_int32(0);
  outC->_L2.o_min = kcg_lit_int32(0);
  outC->_L2.o_max = kcg_lit_int32(0);
  outC->_L1.o_nominal = kcg_lit_int32(0);
  outC->_L1.o_min = kcg_lit_int32(0);
  outC->_L1.o_max = kcg_lit_int32(0);
  outC->distance.nominal = kcg_lit_int32(0);
  outC->distance.d_min = kcg_lit_int32(0);
  outC->distance.d_max = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void sub_2_odoDistances_reset_BasicLocationFunctions_Pkg(
  outC_sub_2_odoDistances_BasicLocationFunctions_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** sub_2_odoDistances_BasicLocationFunctions_Pkg.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

