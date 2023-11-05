/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::op_3_6_5_1_4_c_d/ */
void op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg(
  /* train2trackStatus/ */
  TrainToTrackStatus_T_BG_Types_Pkg *train2trackStatus,
  outC_op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg *outC)
{
  /* train2trackStatus/ */
  static TrainToTrackStatus_T_BG_Types_Pkg last_train2trackStatus;

  kcg_copy_TrainToTrackStatus_T_BG_Types_Pkg(
    &last_train2trackStatus,
    &outC->mem_train2trackStatus);
  kcg_copy_TrainToTrackStatus_T_BG_Types_Pkg(
    &outC->mem_train2trackStatus,
    train2trackStatus);
  kcg_copy_TrainToTrackStatus_T_BG_Types_Pkg(&outC->_L8, &last_train2trackStatus);
  outC->_L9 = outC->_L8.q_length;
  kcg_copy_TrainToTrackStatus_T_BG_Types_Pkg(&outC->_L1, train2trackStatus);
  outC->_L2 = outC->_L1.q_length;
  outC->_L10 = outC->_L2 != outC->_L9;
  outC->_L6 = Q_LENGTH_Train_integrity_lost;
  outC->_L4 = outC->_L2 == outC->_L6;
  outC->_L5 = Q_LENGTH_Train_integrity_confirmed_by_driver;
  outC->_L3 = outC->_L5 == outC->_L2;
  outC->_L7 = outC->_L3 | outC->_L4;
  outC->_L11 = outC->_L7 & outC->_L10;
  outC->trigger = outC->_L11;
}

#ifndef KCG_USER_DEFINED_INIT
void op_3_6_5_1_4_c_d_init_ProvidePositionReport_Pkg(
  outC_op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg *outC)
{
  outC->_L11 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L9 = Q_LENGTH_No_train_integrity_information_available;
  outC->_L8.nid_ntc = kcg_lit_int32(0);
  outC->_L8.q_length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L7 = kcg_true;
  outC->_L6 = Q_LENGTH_No_train_integrity_information_available;
  outC->_L5 = Q_LENGTH_No_train_integrity_information_available;
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L2 = Q_LENGTH_No_train_integrity_information_available;
  outC->_L1.nid_ntc = kcg_lit_int32(0);
  outC->_L1.q_length = Q_LENGTH_No_train_integrity_information_available;
  outC->trigger = kcg_true;
  kcg_copy_TrainToTrackStatus_T_BG_Types_Pkg(
    &outC->mem_train2trackStatus,
    (TrainToTrackStatus_T_BG_Types_Pkg *)
      &cTrainToTrackStatus_T_ProvidePositionReport_Pkg);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void op_3_6_5_1_4_c_d_reset_ProvidePositionReport_Pkg(
  outC_op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg *outC)
{
  kcg_copy_TrainToTrackStatus_T_BG_Types_Pkg(
    &outC->mem_train2trackStatus,
    (TrainToTrackStatus_T_BG_Types_Pkg *)
      &cTrainToTrackStatus_T_ProvidePositionReport_Pkg);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg(
  SV_op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg *SV,
  outC_op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg *outC)
{
  kcg_copy_TrainToTrackStatus_T_BG_Types_Pkg(
    &SV->Context_mem_train2trackStatus,
    &outC->mem_train2trackStatus);
}

void kcg_load_SV_op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg(
  outC_op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg *outC,
  SV_op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg *SV)
{
  kcg_copy_TrainToTrackStatus_T_BG_Types_Pkg(
    &outC->mem_train2trackStatus,
    &SV->Context_mem_train2trackStatus);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

