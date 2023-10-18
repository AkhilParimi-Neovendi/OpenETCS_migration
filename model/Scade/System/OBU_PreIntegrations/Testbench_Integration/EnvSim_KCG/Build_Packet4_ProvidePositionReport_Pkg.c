/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_Packet4_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::Build_Packet4/ */
void Build_Packet4_ProvidePositionReport_Pkg(
  /* errorMsg/ */
  ErrorMessage_T_ProvidePositionReport_Pkg *errorMsg,
  outC_Build_Packet4_ProvidePositionReport_Pkg *outC)
{
  kcg_copy_ErrorMessage_T_ProvidePositionReport_Pkg(&outC->_L1, errorMsg);
  outC->_L3 = outC->_L1.present;
  outC->_L2 = outC->_L1.errorType;
  outC->_L4.valid = outC->_L3;
  outC->_L4.m_error = outC->_L2;
  kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(&outC->packet4, &outC->_L4);
}

#ifndef KCG_USER_DEFINED_INIT
void Build_Packet4_init_ProvidePositionReport_Pkg(
  outC_Build_Packet4_ProvidePositionReport_Pkg *outC)
{
  outC->_L4.valid = kcg_true;
  outC->_L4.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L2 = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L3 = kcg_true;
  outC->_L1.present = kcg_true;
  outC->_L1.errorType = M_ERROR_Balise_group_linking_consistency_error;
  outC->packet4.valid = kcg_true;
  outC->packet4.m_error = M_ERROR_Balise_group_linking_consistency_error;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Build_Packet4_reset_ProvidePositionReport_Pkg(
  outC_Build_Packet4_ProvidePositionReport_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Build_Packet4_ProvidePositionReport_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

