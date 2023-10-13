/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TransformT_intToT_real_SDM_Types_Pkg.h"

/* SDM_Types_Pkg::TransformT_intToT_real/ */
void TransformT_intToT_real_SDM_Types_Pkg(
  /* time_int/ */
  T_internal_Type_Obu_BasicTypes_Pkg time_int,
  outC_TransformT_intToT_real_SDM_Types_Pkg *outC)
{
  outC->_L4 = kcg_lit_float64(1000.0);
  outC->_L3 = time_int;
  outC->_L1 = /* _L1= */(kcg_float64) outC->_L3;
  outC->_L2 = outC->_L1 / outC->_L4;
  outC->time_real = outC->_L2;
}

#ifndef KCG_USER_DEFINED_INIT
void TransformT_intToT_real_init_SDM_Types_Pkg(
  outC_TransformT_intToT_real_SDM_Types_Pkg *outC)
{
  outC->_L4 = kcg_lit_float64(0.0);
  outC->_L3 = kcg_lit_int64(0);
  outC->_L2 = kcg_lit_float64(0.0);
  outC->_L1 = kcg_lit_float64(0.0);
  outC->time_real = kcg_lit_float64(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TransformT_intToT_real_reset_SDM_Types_Pkg(
  outC_TransformT_intToT_real_SDM_Types_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TransformT_intToT_real_SDM_Types_Pkg.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

