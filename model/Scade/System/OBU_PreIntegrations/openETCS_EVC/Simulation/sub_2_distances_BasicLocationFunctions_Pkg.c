/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "sub_2_distances_BasicLocationFunctions_Pkg.h"

/* BasicLocationFunctions_Pkg::sub_2_distances/ */
void sub_2_distances_BasicLocationFunctions_Pkg(
  /* loc_2/ */
  LocWithInAcc_T_Obu_BasicTypes_Pkg *loc_2,
  /* loc_1/ */
  LocWithInAcc_T_Obu_BasicTypes_Pkg *loc_1,
  outC_sub_2_distances_BasicLocationFunctions_Pkg *outC)
{
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L2, loc_1);
  outC->_L4 = outC->_L2.nominal;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L1, loc_2);
  outC->_L3 = outC->_L1.nominal;
  outC->_L5 = outC->_L3 - outC->_L4;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L17, loc_1);
  outC->_L13 = outC->_L17.d_max;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L16, loc_2);
  outC->_L14 = outC->_L16.d_min;
  outC->_L15 = outC->_L14 - outC->_L13;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L18, loc_1);
  outC->_L21 = outC->_L18.d_min;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L19, loc_2);
  outC->_L22 = outC->_L19.d_max;
  outC->_L20 = outC->_L22 - outC->_L21;
  outC->_L23.nominal = outC->_L5;
  outC->_L23.d_min = outC->_L15;
  outC->_L23.d_max = outC->_L20;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->distance, &outC->_L23);
}

#ifndef KCG_USER_DEFINED_INIT
void sub_2_distances_init_BasicLocationFunctions_Pkg(
  outC_sub_2_distances_BasicLocationFunctions_Pkg *outC)
{
  outC->_L23.nominal = kcg_lit_int32(0);
  outC->_L23.d_min = kcg_lit_int32(0);
  outC->_L23.d_max = kcg_lit_int32(0);
  outC->_L18.nominal = kcg_lit_int32(0);
  outC->_L18.d_min = kcg_lit_int32(0);
  outC->_L18.d_max = kcg_lit_int32(0);
  outC->_L19.nominal = kcg_lit_int32(0);
  outC->_L19.d_min = kcg_lit_int32(0);
  outC->_L19.d_max = kcg_lit_int32(0);
  outC->_L20 = kcg_lit_int32(0);
  outC->_L21 = kcg_lit_int32(0);
  outC->_L22 = kcg_lit_int32(0);
  outC->_L13 = kcg_lit_int32(0);
  outC->_L14 = kcg_lit_int32(0);
  outC->_L15 = kcg_lit_int32(0);
  outC->_L16.nominal = kcg_lit_int32(0);
  outC->_L16.d_min = kcg_lit_int32(0);
  outC->_L16.d_max = kcg_lit_int32(0);
  outC->_L17.nominal = kcg_lit_int32(0);
  outC->_L17.d_min = kcg_lit_int32(0);
  outC->_L17.d_max = kcg_lit_int32(0);
  outC->_L5 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
  outC->_L2.nominal = kcg_lit_int32(0);
  outC->_L2.d_min = kcg_lit_int32(0);
  outC->_L2.d_max = kcg_lit_int32(0);
  outC->_L1.nominal = kcg_lit_int32(0);
  outC->_L1.d_min = kcg_lit_int32(0);
  outC->_L1.d_max = kcg_lit_int32(0);
  outC->distance.nominal = kcg_lit_int32(0);
  outC->distance.d_min = kcg_lit_int32(0);
  outC->distance.d_max = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void sub_2_distances_reset_BasicLocationFunctions_Pkg(
  outC_sub_2_distances_BasicLocationFunctions_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** sub_2_distances_BasicLocationFunctions_Pkg.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

