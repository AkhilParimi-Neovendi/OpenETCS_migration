/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TransformA_intToA_real_SDM_Types_Pkg.h"

/* SDM_Types_Pkg::TransformA_intToA_real/ */
void TransformA_intToA_real_SDM_Types_Pkg(
  /* acc_int/ */
  A_internal_Type_Obu_BasicTypes_Pkg acc_int,
  outC_TransformA_intToA_real_SDM_Types_Pkg *outC)
{
  outC->_L4 = kcg_lit_float64(100.0);
  outC->_L1 = acc_int;
  outC->_L2 = /* _L2= */(kcg_float64) outC->_L1;
  outC->_L3 = outC->_L2 / outC->_L4;
  outC->acc_real = outC->_L3;
}

#ifndef KCG_USER_DEFINED_INIT
void TransformA_intToA_real_init_SDM_Types_Pkg(
  outC_TransformA_intToA_real_SDM_Types_Pkg *outC)
{
  outC->_L4 = kcg_lit_float64(0.0);
  outC->_L3 = kcg_lit_float64(0.0);
  outC->_L2 = kcg_lit_float64(0.0);
  outC->_L1 = kcg_lit_int64(0);
  outC->acc_real = kcg_lit_float64(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TransformA_intToA_real_reset_SDM_Types_Pkg(
  outC_TransformA_intToA_real_SDM_Types_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TransformA_intToA_real_SDM_Types_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

