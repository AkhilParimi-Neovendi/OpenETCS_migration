/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "T_BrakeBasic_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::T_BrakeBasic/ */
void T_BrakeBasic_SDMConversionModelPkg(
  /* coeff/ */
  coeff_BrakeBasic_t_SDMConversionModelPkg *coeff,
  /* trainLength/ */
  L_internal_real_Type_SDM_Types_Pkg trainLength,
  outC_T_BrakeBasic_SDMConversionModelPkg *outC)
{
  kcg_copy_coeff_BrakeBasic_t_SDMConversionModelPkg(&outC->_L1, coeff);
  outC->_L7 = outC->_L1[2];
  outC->_L14 = kcg_lit_float64(100.0);
  outC->_L12 = trainLength;
  outC->_L13 = outC->_L12 / outC->_L14;
  outC->_L17 = outC->_L13 * outC->_L13 * outC->_L7;
  outC->_L6 = outC->_L1[1];
  outC->_L16 = outC->_L13 * outC->_L6;
  outC->_L5 = outC->_L1[0];
  outC->_L15 = outC->_L5 + outC->_L16 + outC->_L17;
  outC->T_BB = outC->_L15;
}

#ifndef KCG_USER_DEFINED_INIT
void T_BrakeBasic_init_SDMConversionModelPkg(
  outC_T_BrakeBasic_SDMConversionModelPkg *outC)
{
  static kcg_size idx;

  outC->_L17 = kcg_lit_float64(0.0);
  outC->_L16 = kcg_lit_float64(0.0);
  outC->_L15 = kcg_lit_float64(0.0);
  outC->_L14 = kcg_lit_float64(0.0);
  outC->_L13 = kcg_lit_float64(0.0);
  outC->_L12 = kcg_lit_float64(0.0);
  outC->_L5 = kcg_lit_float64(0.0);
  outC->_L6 = kcg_lit_float64(0.0);
  outC->_L7 = kcg_lit_float64(0.0);
  for (idx = 0; idx < 3; idx++) {
    outC->_L1[idx] = kcg_lit_float64(0.0);
  }
  outC->T_BB = kcg_lit_float64(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void T_BrakeBasic_reset_SDMConversionModelPkg(
  outC_T_BrakeBasic_SDMConversionModelPkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** T_BrakeBasic_SDMConversionModelPkg.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

