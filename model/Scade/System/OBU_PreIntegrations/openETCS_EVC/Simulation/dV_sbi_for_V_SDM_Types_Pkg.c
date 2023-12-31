/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "dV_sbi_for_V_SDM_Types_Pkg.h"

/* SDM_Types_Pkg::dV_sbi_for_V/ */
void dV_sbi_for_V_SDM_Types_Pkg(
  /* V_input/ */
  V_odometry_Type_Obu_BasicTypes_Pkg V_input,
  outC_dV_sbi_for_V_SDM_Types_Pkg *outC)
{
  outC->_L20 = dV_sbi_max_SDM_Types_Pkg;
  outC->I2_Min_1_int32 = outC->_L20;
  outC->_L22_Min_1_int32 = outC->I2_Min_1_int32;
  outC->_L7 = dV_sbi_min_SDM_Types_Pkg;
  outC->_L17 = V_sbi_min_SDM_Types_Pkg;
  outC->_L16 = V_sbi_max_SDM_Types_Pkg;
  outC->_L18 = outC->_L16 - outC->_L17;
  outC->_L25 = /* _L25= */(kcg_float32) outC->_L18;
  outC->_L14 = dV_sbi_min_SDM_Types_Pkg;
  outC->_L13 = dV_sbi_max_SDM_Types_Pkg;
  outC->_L15 = outC->_L13 - outC->_L14;
  outC->_L26 = /* _L26= */(kcg_float32) outC->_L15;
  outC->_L22 = outC->_L26 / outC->_L25;
  outC->_L11 = V_sbi_min_SDM_Types_Pkg;
  outC->_L1 = V_input;
  outC->_L10 = outC->_L1 - outC->_L11;
  outC->_L24 = /* _L24= */(kcg_float32) outC->_L10;
  outC->_L12 = outC->_L24 * outC->_L22;
  outC->_L23 = /* _L23= */(kcg_int32) outC->_L12;
  outC->_L8 = outC->_L23 + outC->_L7;
  outC->I1_Min_1_int32 = outC->_L8;
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
  outC->_L21 = dV_sbi_min_SDM_Types_Pkg;
  outC->_L4 = V_sbi_min_SDM_Types_Pkg;
  outC->_L6 = outC->_L1 > outC->_L4;
  outC->_L5 = outC->Mi_Output_Min_1_int32;
  /* _L2= */
  if (outC->_L6) {
    outC->_L2 = outC->_L5;
  }
  else {
    outC->_L2 = outC->_L21;
  }
  outC->dv_sbi = outC->_L2;
}

#ifndef KCG_USER_DEFINED_INIT
void dV_sbi_for_V_init_SDM_Types_Pkg(outC_dV_sbi_for_V_SDM_Types_Pkg *outC)
{
  outC->_L26 = kcg_lit_float32(0.0);
  outC->_L25 = kcg_lit_float32(0.0);
  outC->_L24 = kcg_lit_float32(0.0);
  outC->_L23 = kcg_lit_int32(0);
  outC->_L22 = kcg_lit_float32(0.0);
  outC->_L21 = kcg_lit_int32(0);
  outC->_L20 = kcg_lit_int32(0);
  outC->_L18 = kcg_lit_int32(0);
  outC->_L17 = kcg_lit_int32(0);
  outC->_L16 = kcg_lit_int32(0);
  outC->_L15 = kcg_lit_int32(0);
  outC->_L14 = kcg_lit_int32(0);
  outC->_L13 = kcg_lit_int32(0);
  outC->_L12 = kcg_lit_float32(0.0);
  outC->_L11 = kcg_lit_int32(0);
  outC->_L10 = kcg_lit_int32(0);
  outC->_L8 = kcg_lit_int32(0);
  outC->_L7 = kcg_lit_int32(0);
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->_L2 = kcg_lit_int32(0);
  outC->_L1 = kcg_lit_int32(0);
  outC->_L21_Min_1_int32 = kcg_lit_int32(0);
  outC->_L22_Min_1_int32 = kcg_lit_int32(0);
  outC->_L24_Min_1_int32 = kcg_lit_int32(0);
  outC->_L25_Min_1_int32 = kcg_true;
  outC->I1_Min_1_int32 = kcg_lit_int32(0);
  outC->I2_Min_1_int32 = kcg_lit_int32(0);
  outC->Mi_Output_Min_1_int32 = kcg_lit_int32(0);
  outC->dv_sbi = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void dV_sbi_for_V_reset_SDM_Types_Pkg(outC_dV_sbi_for_V_SDM_Types_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: SDM_Types_Pkg::dV_sbi_for_V/
  @1: (math::Min#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** dV_sbi_for_V_SDM_Types_Pkg.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

