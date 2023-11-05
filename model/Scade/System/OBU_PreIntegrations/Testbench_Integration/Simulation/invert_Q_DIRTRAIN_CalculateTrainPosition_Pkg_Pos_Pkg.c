/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "invert_Q_DIRTRAIN_CalculateTrainPosition_Pkg_Pos_Pkg.h"

/* CalculateTrainPosition_Pkg::Pos_Pkg::invert_Q_DIRTRAIN/ */
void invert_Q_DIRTRAIN_CalculateTrainPosition_Pkg_Pos_Pkg(
  /* in/ */
  Q_DIRTRAIN in,
  outC_invert_Q_DIRTRAIN_CalculateTrainPosition_Pkg_Pos_Pkg *outC)
{
  outC->_L5 = Q_DIRTRAIN_Reverse;
  outC->_L4 = Q_DIRTRAIN_Nominal;
  outC->_L3 = Q_DIRTRAIN_Unknown;
  outC->_L1 = in;
  /* _L2= */
  switch (outC->_L1) {
    case Q_DIRTRAIN_Reverse :
      outC->_L2 = outC->_L4;
      break;
    case Q_DIRTRAIN_Nominal :
      outC->_L2 = outC->_L5;
      break;
    case Q_DIRTRAIN_Unknown :
      outC->_L2 = outC->_L3;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->out = outC->_L2;
}

#ifndef KCG_USER_DEFINED_INIT
void invert_Q_DIRTRAIN_init_CalculateTrainPosition_Pkg_Pos_Pkg(
  outC_invert_Q_DIRTRAIN_CalculateTrainPosition_Pkg_Pos_Pkg *outC)
{
  outC->_L5 = Q_DIRTRAIN_Reverse;
  outC->_L4 = Q_DIRTRAIN_Reverse;
  outC->_L3 = Q_DIRTRAIN_Reverse;
  outC->_L2 = Q_DIRTRAIN_Reverse;
  outC->_L1 = Q_DIRTRAIN_Reverse;
  outC->out = Q_DIRTRAIN_Reverse;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void invert_Q_DIRTRAIN_reset_CalculateTrainPosition_Pkg_Pos_Pkg(
  outC_invert_Q_DIRTRAIN_CalculateTrainPosition_Pkg_Pos_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** invert_Q_DIRTRAIN_CalculateTrainPosition_Pkg_Pos_Pkg.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

