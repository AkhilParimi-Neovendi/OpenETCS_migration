/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "limitPositive_SDM_Types_Pkg.h"

/* SDM_Types_Pkg::limitPositive/ */
void limitPositive_SDM_Types_Pkg(
  /* in/ */
  kcg_float32 in,
  outC_limitPositive_SDM_Types_Pkg *outC)
{
  outC->_L3 = kcg_lit_float32(0.0);
  outC->I2_Max_1_float32 = outC->_L3;
  outC->_L2_Max_1_float32 = outC->I2_Max_1_float32;
  outC->_L2 = in;
  outC->I1_Max_1_float32 = outC->_L2;
  outC->_L1_Max_1_float32 = outC->I1_Max_1_float32;
  outC->_L3_Max_1_float32 = outC->_L1_Max_1_float32 >= outC->_L2_Max_1_float32;
  /* @1/_L4= */
  if (outC->_L3_Max_1_float32) {
    outC->_L4_Max_1_float32 = outC->_L1_Max_1_float32;
  }
  else {
    outC->_L4_Max_1_float32 = outC->_L2_Max_1_float32;
  }
  outC->Ma_Output_Max_1_float32 = outC->_L4_Max_1_float32;
  outC->_L1 = outC->Ma_Output_Max_1_float32;
  outC->limited = outC->_L1;
}

#ifndef KCG_USER_DEFINED_INIT
void limitPositive_init_SDM_Types_Pkg(outC_limitPositive_SDM_Types_Pkg *outC)
{
  outC->_L3 = kcg_lit_float32(0.0);
  outC->_L2 = kcg_lit_float32(0.0);
  outC->_L1 = kcg_lit_float32(0.0);
  outC->_L1_Max_1_float32 = kcg_lit_float32(0.0);
  outC->_L2_Max_1_float32 = kcg_lit_float32(0.0);
  outC->_L3_Max_1_float32 = kcg_true;
  outC->_L4_Max_1_float32 = kcg_lit_float32(0.0);
  outC->I1_Max_1_float32 = kcg_lit_float32(0.0);
  outC->I2_Max_1_float32 = kcg_lit_float32(0.0);
  outC->Ma_Output_Max_1_float32 = kcg_lit_float32(0.0);
  outC->limited = kcg_lit_float32(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void limitPositive_reset_SDM_Types_Pkg(outC_limitPositive_SDM_Types_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: SDM_Types_Pkg::limitPositive/
  @1: (math::Max#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** limitPositive_SDM_Types_Pkg.c
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

