/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackPacket001__Get_NID_LRBG_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrack.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket001_Pkg::RadioTrainTrackPacket001__Get_NID_LRBG/ */
void RadioTrainTrackPacket001__Get_NID_LRBG_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrack(
  /* inRadioTrainTrackPacket/ */
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *inRadioTrainTrackPacket,
  outC_RadioTrainTrackPacket001__Get_NID_LRBG_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrain *outC)
{
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
    &outC->_L1,
    inRadioTrainTrackPacket);
  outC->_L2 = outC->_L1.packet1.NID_LRBG;
  outC->out_NID_LRBG = outC->_L2;
}

#ifndef KCG_USER_DEFINED_INIT
void RadioTrainTrackPacket001__Get_NID_LRBG_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrain(
  outC_RadioTrainTrackPacket001__Get_NID_LRBG_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrain *outC)
{
  outC->_L2 = kcg_lit_int64(0);
  outC->_L1.valid = kcg_true;
  outC->_L1.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->_L1.packet1.L_PACKET = kcg_lit_int64(0);
  outC->_L1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L1.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->_L1.packet1.NID_PRVLRBG = kcg_lit_int64(0);
  outC->_L1.packet1.D_LRBG = kcg_lit_int64(0);
  outC->_L1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L1.packet1.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L1.packet1.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L1.packet1.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L1.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->_L1.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->_L1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L1.packet1.level = M_LEVEL_Level_0;
  outC->_L1.packet1.NID_NTC = kcg_lit_int64(0);
  outC->out_NID_LRBG = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


void RadioTrainTrackPacket001__Get_NID_LRBG_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrai(
  outC_RadioTrainTrackPacket001__Get_NID_LRBG_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrain *outC)
{
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RadioTrainTrackPacket001__Get_NID_LRBG_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrack.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

