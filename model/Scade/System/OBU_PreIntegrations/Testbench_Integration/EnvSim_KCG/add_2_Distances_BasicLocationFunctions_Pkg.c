/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "add_2_Distances_BasicLocationFunctions_Pkg.h"

/* BasicLocationFunctions_Pkg::add_2_Distances/ */
void add_2_Distances_BasicLocationFunctions_Pkg(
  /* dist_2/ */
  LocWithInAcc_T_Obu_BasicTypes_Pkg *dist_2,
  /* dist_1/ */
  LocWithInAcc_T_Obu_BasicTypes_Pkg *dist_1,
  outC_add_2_Distances_BasicLocationFunctions_Pkg *outC)
{
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L2, dist_1);
  outC->_L4 = outC->_L2.nominal;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L1, dist_2);
  outC->_L3 = outC->_L1.nominal;
  outC->_L5 = outC->_L3 + outC->_L4;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L17, dist_1);
  outC->_L13 = outC->_L17.d_min;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L16, dist_2);
  outC->_L14 = outC->_L16.d_min;
  outC->_L15 = outC->_L14 + outC->_L13;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L18, dist_1);
  outC->_L21 = outC->_L18.d_max;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L19, dist_2);
  outC->_L22 = outC->_L19.d_max;
  outC->_L20 = outC->_L22 + outC->_L21;
  outC->_L23.nominal = outC->_L5;
  outC->_L23.d_min = outC->_L15;
  outC->_L23.d_max = outC->_L20;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->distance, &outC->_L23);
}

#ifndef KCG_USER_DEFINED_INIT
void add_2_Distances_init_BasicLocationFunctions_Pkg(
  outC_add_2_Distances_BasicLocationFunctions_Pkg *outC)
{
  outC->_L23.nominal = kcg_lit_int64(0);
  outC->_L23.d_min = kcg_lit_int64(0);
  outC->_L23.d_max = kcg_lit_int64(0);
  outC->_L18.nominal = kcg_lit_int64(0);
  outC->_L18.d_min = kcg_lit_int64(0);
  outC->_L18.d_max = kcg_lit_int64(0);
  outC->_L19.nominal = kcg_lit_int64(0);
  outC->_L19.d_min = kcg_lit_int64(0);
  outC->_L19.d_max = kcg_lit_int64(0);
  outC->_L20 = kcg_lit_int64(0);
  outC->_L21 = kcg_lit_int64(0);
  outC->_L22 = kcg_lit_int64(0);
  outC->_L13 = kcg_lit_int64(0);
  outC->_L14 = kcg_lit_int64(0);
  outC->_L15 = kcg_lit_int64(0);
  outC->_L16.nominal = kcg_lit_int64(0);
  outC->_L16.d_min = kcg_lit_int64(0);
  outC->_L16.d_max = kcg_lit_int64(0);
  outC->_L17.nominal = kcg_lit_int64(0);
  outC->_L17.d_min = kcg_lit_int64(0);
  outC->_L17.d_max = kcg_lit_int64(0);
  outC->_L5 = kcg_lit_int64(0);
  outC->_L4 = kcg_lit_int64(0);
  outC->_L3 = kcg_lit_int64(0);
  outC->_L2.nominal = kcg_lit_int64(0);
  outC->_L2.d_min = kcg_lit_int64(0);
  outC->_L2.d_max = kcg_lit_int64(0);
  outC->_L1.nominal = kcg_lit_int64(0);
  outC->_L1.d_min = kcg_lit_int64(0);
  outC->_L1.d_max = kcg_lit_int64(0);
  outC->distance.nominal = kcg_lit_int64(0);
  outC->distance.d_min = kcg_lit_int64(0);
  outC->distance.d_max = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void add_2_Distances_reset_BasicLocationFunctions_Pkg(
  outC_add_2_Distances_BasicLocationFunctions_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** add_2_Distances_BasicLocationFunctions_Pkg.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

