/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TransformV_intToV_real_SDM_Types_Pkg.h"

/* SDM_Types_Pkg::TransformV_intToV_real/ */
void TransformV_intToV_real_SDM_Types_Pkg(
  /* v_int/ */
  V_internal_Type_Obu_BasicTypes_Pkg v_int,
  outC_TransformV_intToV_real_SDM_Types_Pkg *outC)
{
  outC->_L4 = kcg_lit_float64(3.6);
  outC->_L1 = v_int;
  outC->_L2 = /* _L2= */(kcg_float64) outC->_L1;
  outC->_L3 = outC->_L2 / outC->_L4;
  outC->v_real = outC->_L3;
}

#ifndef KCG_USER_DEFINED_INIT
void TransformV_intToV_real_init_SDM_Types_Pkg(
  outC_TransformV_intToV_real_SDM_Types_Pkg *outC)
{
  outC->_L4 = kcg_lit_float64(0.0);
  outC->_L3 = kcg_lit_float64(0.0);
  outC->_L2 = kcg_lit_float64(0.0);
  outC->_L1 = kcg_lit_int64(0);
  outC->v_real = kcg_lit_float64(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TransformV_intToV_real_reset_SDM_Types_Pkg(
  outC_TransformV_intToV_real_SDM_Types_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TransformV_intToV_real_SDM_Types_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

