/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_Packet5_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::Build_Packet5/ */
void Build_Packet5_ProvidePositionReport_Pkg(
  /* trainProps/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProps,
  outC_Build_Packet5_ProvidePositionReport_Pkg *outC)
{
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&outC->_L4, trainProps);
  outC->_L3 = kcg_true;
  outC->_L1 = outC->_L4.nid_operational;
  outC->_L2.valid = outC->_L3;
  outC->_L2.TrainRunningNumber = outC->_L1;
  kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(
    &outC->packet5,
    &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void Build_Packet5_init_ProvidePositionReport_Pkg(
  outC_Build_Packet5_ProvidePositionReport_Pkg *outC)
{
  outC->_L1 = kcg_lit_int32(0);
  outC->_L2.valid = kcg_true;
  outC->_L2.TrainRunningNumber = kcg_lit_int32(0);
  outC->_L3 = kcg_true;
  outC->_L4.nid_engine = kcg_lit_int32(0);
  outC->_L4.nid_operational = kcg_lit_int32(0);
  outC->_L4.l_train = kcg_lit_int32(0);
  outC->_L4.d_baliseAntenna_2_frontend.nominal = kcg_lit_int32(0);
  outC->_L4.d_baliseAntenna_2_frontend.d_min = kcg_lit_int32(0);
  outC->_L4.d_baliseAntenna_2_frontend.d_max = kcg_lit_int32(0);
  outC->_L4.d_frontend_2_rearend.nominal = kcg_lit_int32(0);
  outC->_L4.d_frontend_2_rearend.d_min = kcg_lit_int32(0);
  outC->_L4.d_frontend_2_rearend.d_max = kcg_lit_int32(0);
  outC->_L4.locationAccuracy_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L4.locationAccuracy_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L4.locationAccuracy_DefaultValue.d_max = kcg_lit_int32(0);
  outC->_L4.centerDetectionAcc_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L4.centerDetectionAcc_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L4.centerDetectionAcc_DefaultValue.d_max = kcg_lit_int32(0);
  outC->packet5.valid = kcg_true;
  outC->packet5.TrainRunningNumber = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Build_Packet5_reset_ProvidePositionReport_Pkg(
  outC_Build_Packet5_ProvidePositionReport_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Build_Packet5_ProvidePositionReport_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

