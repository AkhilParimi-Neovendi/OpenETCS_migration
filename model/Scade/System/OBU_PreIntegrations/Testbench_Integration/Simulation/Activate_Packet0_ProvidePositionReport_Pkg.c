/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Activate_Packet0_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::Activate_Packet0/ */
void Activate_Packet0_ProvidePositionReport_Pkg(
  /* in_packet0/ */
  Position_Report_TrainToTrack *in_packet0,
  outC_Activate_Packet0_ProvidePositionReport_Pkg *outC)
{
  outC->_L7 = kcg_true;
  kcg_copy_Position_Report_TrainToTrack(&outC->_L1, in_packet0);
  outC->_L6.valid = outC->_L7;
  kcg_copy_Position_Report_TrainToTrack(&outC->_L6.packet0, &outC->_L1);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
    &outC->out_packet0,
    &outC->_L6);
}

#ifndef KCG_USER_DEFINED_INIT
void Activate_Packet0_init_ProvidePositionReport_Pkg(
  outC_Activate_Packet0_ProvidePositionReport_Pkg *outC)
{
  outC->_L7 = kcg_true;
  outC->_L6.valid = kcg_true;
  outC->_L6.packet0.NID_PACKET = kcg_lit_int32(0);
  outC->_L6.packet0.L_PACKET = kcg_lit_int32(0);
  outC->_L6.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L6.packet0.NID_LRBG = kcg_lit_int32(0);
  outC->_L6.packet0.D_LRBG = kcg_lit_int32(0);
  outC->_L6.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L6.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L6.packet0.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L6.packet0.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L6.packet0.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L6.packet0.L_TRAININT = kcg_lit_int32(0);
  outC->_L6.packet0.V_TRAIN = kcg_lit_int32(0);
  outC->_L6.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L6.packet0.mode = M_MODE_Full_Supervision;
  outC->_L6.packet0.level = M_LEVEL_Level_0;
  outC->_L6.packet0.NID_NTC = kcg_lit_int32(0);
  outC->_L1.NID_PACKET = kcg_lit_int32(0);
  outC->_L1.L_PACKET = kcg_lit_int32(0);
  outC->_L1.qscale = Q_SCALE_10_cm_scale;
  outC->_L1.NID_LRBG = kcg_lit_int32(0);
  outC->_L1.D_LRBG = kcg_lit_int32(0);
  outC->_L1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L1.dlrbg = Q_DLRBG_Reverse;
  outC->_L1.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L1.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L1.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L1.L_TRAININT = kcg_lit_int32(0);
  outC->_L1.V_TRAIN = kcg_lit_int32(0);
  outC->_L1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L1.mode = M_MODE_Full_Supervision;
  outC->_L1.level = M_LEVEL_Level_0;
  outC->_L1.NID_NTC = kcg_lit_int32(0);
  outC->out_packet0.valid = kcg_true;
  outC->out_packet0.packet0.NID_PACKET = kcg_lit_int32(0);
  outC->out_packet0.packet0.L_PACKET = kcg_lit_int32(0);
  outC->out_packet0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->out_packet0.packet0.NID_LRBG = kcg_lit_int32(0);
  outC->out_packet0.packet0.D_LRBG = kcg_lit_int32(0);
  outC->out_packet0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->out_packet0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->out_packet0.packet0.L_DOUBTOVER = kcg_lit_int32(0);
  outC->out_packet0.packet0.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->out_packet0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->out_packet0.packet0.L_TRAININT = kcg_lit_int32(0);
  outC->out_packet0.packet0.V_TRAIN = kcg_lit_int32(0);
  outC->out_packet0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->out_packet0.packet0.mode = M_MODE_Full_Supervision;
  outC->out_packet0.packet0.level = M_LEVEL_Level_0;
  outC->out_packet0.packet0.NID_NTC = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Activate_Packet0_reset_ProvidePositionReport_Pkg(
  outC_Activate_Packet0_ProvidePositionReport_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Activate_Packet0_ProvidePositionReport_Pkg.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

