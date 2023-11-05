/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg.h"

/* CalculateTrainPosition_Pkg::gp_functions_Pkg::countUp/ */
void countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg(
  /* count/ */
  kcg_bool count,
  /* reset/ */
  kcg_bool reset,
  outC_countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg *outC)
{
  outC->_L12 = kcg_lit_int32(0);
  /* _L6= */
  if (outC->init) {
    outC->_L6 = kcg_lit_int32(0);
  }
  else {
    outC->_L6 = outC->_L11;
  }
  outC->_L10 = kcg_lit_int32(0);
  outC->_L2 = kcg_lit_int32(1);
  outC->_L3 = count;
  /* _L9= */
  if (outC->_L3) {
    outC->_L9 = outC->_L2;
  }
  else {
    outC->_L9 = outC->_L10;
  }
  outC->_L5 = outC->_L6 + outC->_L9;
  outC->_L4 = reset;
  /* _L11= */
  if (outC->_L4) {
    outC->_L11 = outC->_L12;
  }
  else {
    outC->_L11 = outC->_L5;
  }
  outC->counter = outC->_L11;
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void countUp_init_CalculateTrainPosition_Pkg_gp_functions_Pkg(
  outC_countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg *outC)
{
  outC->_L12 = kcg_lit_int32(0);
  outC->_L10 = kcg_lit_int32(0);
  outC->_L9 = kcg_lit_int32(0);
  outC->_L6 = kcg_lit_int32(0);
  outC->_L5 = kcg_lit_int32(0);
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L2 = kcg_lit_int32(0);
  outC->_L11 = kcg_lit_int32(0);
  outC->init = kcg_true;
  outC->counter = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void countUp_reset_CalculateTrainPosition_Pkg_gp_functions_Pkg(
  outC_countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

