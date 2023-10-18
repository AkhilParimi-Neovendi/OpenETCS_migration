/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "scaleInternalType_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::scaleInternalType/ */
void scaleInternalType_ProvidePositionReport_Pkg(
  /* scale/ */
  Q_SCALE scale,
  /* internalValue/ */
  kcg_int64 internalValue,
  outC_scaleInternalType_ProvidePositionReport_Pkg *outC)
{
  outC->_L12 = internalValue;
  outC->_L9 = cQ_SCALE_10_m_resolution_TrainPosition_Types_Pck;
  outC->_L11 = outC->_L12 / outC->_L9;
  outC->_L8 = cQ_SCALE_1_m_resolution_TrainPosition_Types_Pck;
  outC->_L10 = outC->_L12 / outC->_L8;
  outC->_L7 = cQ_SCALE_10_cm_resolution_TrainPosition_Types_Pck;
  outC->_L6 = outC->_L12 / outC->_L7;
  outC->_L1 = scale;
  /* _L5= */
  switch (outC->_L1) {
    case Q_SCALE_10_cm_scale :
      outC->_L5 = outC->_L6;
      break;
    case Q_SCALE_1_m_scale :
      outC->_L5 = outC->_L10;
      break;
    case Q_SCALE_10_m_scale :
      outC->_L5 = outC->_L11;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->scaledValue = outC->_L5;
}

#ifndef KCG_USER_DEFINED_INIT
void scaleInternalType_init_ProvidePositionReport_Pkg(
  outC_scaleInternalType_ProvidePositionReport_Pkg *outC)
{
  outC->_L12 = kcg_lit_int64(0);
  outC->_L11 = kcg_lit_int64(0);
  outC->_L10 = kcg_lit_int64(0);
  outC->_L9 = kcg_lit_int64(0);
  outC->_L8 = kcg_lit_int64(0);
  outC->_L7 = kcg_lit_int64(0);
  outC->_L6 = kcg_lit_int64(0);
  outC->_L5 = kcg_lit_int64(0);
  outC->_L1 = Q_SCALE_10_cm_scale;
  outC->scaledValue = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void scaleInternalType_reset_ProvidePositionReport_Pkg(
  outC_scaleInternalType_ProvidePositionReport_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** scaleInternalType_ProvidePositionReport_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

