/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackPacket000__Get_Q_LENGTH_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrack.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_Q_LENGTH/ */
void RadioTrainTrackPacket000__Get_Q_LENGTH_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrack(
  /* inRadioTrainTrackPacket/ */
  PT0_PositionReport_T_Packet_TrainTypes_Pkg *inRadioTrainTrackPacket,
  outC_RadioTrainTrackPacket000__Get_Q_LENGTH_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrain *outC)
{
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
    &outC->_L1,
    inRadioTrainTrackPacket);
  outC->_L2 = outC->_L1.packet0.length;
  outC->out_Q_LENGTH = outC->_L2;
}

#ifndef KCG_USER_DEFINED_INIT
void RadioTrainTrackPacket000__Get_Q_LENGTH_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrain(
  outC_RadioTrainTrackPacket000__Get_Q_LENGTH_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrain *outC)
{
  outC->_L2 = Q_LENGTH_No_train_integrity_information_available;
  outC->_L1.valid = kcg_true;
  outC->_L1.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->_L1.packet0.L_PACKET = kcg_lit_int64(0);
  outC->_L1.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L1.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->_L1.packet0.D_LRBG = kcg_lit_int64(0);
  outC->_L1.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L1.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L1.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L1.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L1.packet0.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L1.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->_L1.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->_L1.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L1.packet0.mode = M_MODE_Full_Supervision;
  outC->_L1.packet0.level = M_LEVEL_Level_0;
  outC->_L1.packet0.NID_NTC = kcg_lit_int64(0);
  outC->out_Q_LENGTH = Q_LENGTH_No_train_integrity_information_available;
}
#endif /* KCG_USER_DEFINED_INIT */


void RadioTrainTrackPacket000__Get_Q_LENGTH_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrai(
  outC_RadioTrainTrackPacket000__Get_Q_LENGTH_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrain *outC)
{
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RadioTrainTrackPacket000__Get_Q_LENGTH_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrack.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

