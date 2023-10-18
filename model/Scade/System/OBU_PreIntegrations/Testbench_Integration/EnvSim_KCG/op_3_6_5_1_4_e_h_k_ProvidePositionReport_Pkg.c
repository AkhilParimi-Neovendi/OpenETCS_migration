/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_3_6_5_1_4_e_h_k_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::op_3_6_5_1_4_e_h_k/ */
void op_3_6_5_1_4_e_h_k_ProvidePositionReport_Pkg(
  /* trackInfo/ */
  LocationBasedEvents_T_ProvidePositionReport_Pkg *trackInfo,
  /* rbcComm/ */
  RBC_Communication_T_ProvidePositionReport_Pkg *rbcComm,
  outC_op_3_6_5_1_4_e_h_k_ProvidePositionReport_Pkg *outC)
{
  /* rbcComm/ */
  static RBC_Communication_T_ProvidePositionReport_Pkg last_rbcComm;
  /* trackInfo/ */
  static LocationBasedEvents_T_ProvidePositionReport_Pkg last_trackInfo;

  kcg_copy_LocationBasedEvents_T_ProvidePositionReport_Pkg(
    &last_trackInfo,
    &outC->mem_trackInfo);
  kcg_copy_LocationBasedEvents_T_ProvidePositionReport_Pkg(
    &outC->mem_trackInfo,
    trackInfo);
  kcg_copy_RBC_Communication_T_ProvidePositionReport_Pkg(
    &last_rbcComm,
    &outC->mem_rbcComm);
  kcg_copy_RBC_Communication_T_ProvidePositionReport_Pkg(
    &outC->mem_rbcComm,
    rbcComm);
  kcg_copy_RBC_Communication_T_ProvidePositionReport_Pkg(&outC->_L16, rbcComm);
  outC->_L18 = outC->_L16.newSessionEstablished;
  kcg_copy_RBC_Communication_T_ProvidePositionReport_Pkg(
    &outC->_L19,
    &last_rbcComm);
  outC->_L32 = outC->_L19.newSessionEstablished;
  outC->_L20 = outC->_L32 != outC->_L18;
  outC->_L33 = outC->_L20 & outC->_L18;
  kcg_copy_LocationBasedEvents_T_ProvidePositionReport_Pkg(
    &outC->_L22,
    &last_trackInfo);
  outC->_L26 = outC->_L22.maxSafeFrontEndPassed;
  kcg_copy_LocationBasedEvents_T_ProvidePositionReport_Pkg(&outC->_L1, trackInfo);
  outC->_L14 = outC->_L1.maxSafeFrontEndPassed;
  outC->_L30 = outC->_L14 != outC->_L26;
  outC->_L25 = outC->_L22.minSafeRearEndPassed;
  outC->_L13 = outC->_L1.minSafeRearEndPassed;
  outC->_L29 = outC->_L13 != outC->_L25;
  outC->_L28 = outC->_L30 & outC->_L26;
  outC->_L27 = outC->_L13 & outC->_L29;
  outC->_L8 = outC->_L33 | outC->_L27 | outC->_L28;
  outC->trigger = outC->_L8;
}

#ifndef KCG_USER_DEFINED_INIT
void op_3_6_5_1_4_e_h_k_init_ProvidePositionReport_Pkg(
  outC_op_3_6_5_1_4_e_h_k_ProvidePositionReport_Pkg *outC)
{
  outC->_L33 = kcg_true;
  outC->_L32 = kcg_true;
  outC->_L30 = kcg_true;
  outC->_L29 = kcg_true;
  outC->_L28 = kcg_true;
  outC->_L27 = kcg_true;
  outC->_L25 = kcg_true;
  outC->_L26 = kcg_true;
  outC->_L22.minSafeRearEndPassed = kcg_true;
  outC->_L22.maxSafeFrontEndPassed = kcg_true;
  outC->_L20 = kcg_true;
  outC->_L19.newSessionEstablished = kcg_true;
  outC->_L18 = kcg_true;
  outC->_L16.newSessionEstablished = kcg_true;
  outC->_L13 = kcg_true;
  outC->_L14 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L1.minSafeRearEndPassed = kcg_true;
  outC->_L1.maxSafeFrontEndPassed = kcg_true;
  outC->trigger = kcg_true;
  kcg_copy_RBC_Communication_T_ProvidePositionReport_Pkg(
    &outC->mem_rbcComm,
    (RBC_Communication_T_ProvidePositionReport_Pkg *)
      &cRBC_Communication_T_ProvidePositionReport_Pkg);
  kcg_copy_LocationBasedEvents_T_ProvidePositionReport_Pkg(
    &outC->mem_trackInfo,
    (LocationBasedEvents_T_ProvidePositionReport_Pkg *)
      &cLocationBasedEvents_T_ProvidePositionReport_Pkg);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void op_3_6_5_1_4_e_h_k_reset_ProvidePositionReport_Pkg(
  outC_op_3_6_5_1_4_e_h_k_ProvidePositionReport_Pkg *outC)
{
  kcg_copy_RBC_Communication_T_ProvidePositionReport_Pkg(
    &outC->mem_rbcComm,
    (RBC_Communication_T_ProvidePositionReport_Pkg *)
      &cRBC_Communication_T_ProvidePositionReport_Pkg);
  kcg_copy_LocationBasedEvents_T_ProvidePositionReport_Pkg(
    &outC->mem_trackInfo,
    (LocationBasedEvents_T_ProvidePositionReport_Pkg *)
      &cLocationBasedEvents_T_ProvidePositionReport_Pkg);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** op_3_6_5_1_4_e_h_k_ProvidePositionReport_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

