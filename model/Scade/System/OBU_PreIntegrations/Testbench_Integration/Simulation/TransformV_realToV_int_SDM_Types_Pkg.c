/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TransformV_realToV_int_SDM_Types_Pkg.h"

/* SDM_Types_Pkg::TransformV_realToV_int/ */
void TransformV_realToV_int_SDM_Types_Pkg(
  /* v_real/ */
  V_internal_real_Type_SDM_Types_Pkg v_real,
  outC_TransformV_realToV_int_SDM_Types_Pkg *outC)
{
  outC->_L1 = kcg_lit_float32(3.6);
  outC->_L4 = v_real;
  outC->_L3 = outC->_L4 * outC->_L1;
  outC->_L2 = /* _L2= */(kcg_int32) outC->_L3;
  outC->v_int = outC->_L2;
}

#ifndef KCG_USER_DEFINED_INIT
void TransformV_realToV_int_init_SDM_Types_Pkg(
  outC_TransformV_realToV_int_SDM_Types_Pkg *outC)
{
  outC->_L4 = kcg_lit_float32(0.0);
  outC->_L1 = kcg_lit_float32(0.0);
  outC->_L2 = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_float32(0.0);
  outC->v_int = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TransformV_realToV_int_reset_SDM_Types_Pkg(
  outC_TransformV_realToV_int_SDM_Types_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TransformV_realToV_int_SDM_Types_Pkg.c
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

