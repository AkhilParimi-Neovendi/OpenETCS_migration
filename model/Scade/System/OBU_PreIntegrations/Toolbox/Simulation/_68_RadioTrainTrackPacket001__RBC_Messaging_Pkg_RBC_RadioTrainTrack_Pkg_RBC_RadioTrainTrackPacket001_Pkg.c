/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_68_RadioTrainTrackPacket001__RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket001_Pkg.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket001_Pkg::RadioTrainTrackPacket001__Get_Q_LENGTH/ */
void _68_RadioTrainTrackPacket001__RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket001_Pkg(
  /* inRadioTrainTrackPacket/ */
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *inRadioTrainTrackPacket,
  outC__68_RadioTrainTrackPacket001__RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket001_Pkg *outC)
{
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
    &outC->_L1,
    inRadioTrainTrackPacket);
  outC->_L2 = outC->_L1.packet1.length;
  outC->out_Q_LENGTH = outC->_L2;
}

#ifndef KCG_USER_DEFINED_INIT
void _68_RadioTrainTrackPacket001__init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket001_Pkg(
  outC__68_RadioTrainTrackPacket001__RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket001_Pkg *outC)
{
  outC->_L2 = Q_LENGTH_No_train_integrity_information_available;
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
  outC->out_Q_LENGTH = Q_LENGTH_No_train_integrity_information_available;
}
#endif /* KCG_USER_DEFINED_INIT */


void _68_RadioTrainTrackPacket001__reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket001_Pkg(
  outC__68_RadioTrainTrackPacket001__RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket001_Pkg *outC)
{
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** _68_RadioTrainTrackPacket001__RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket001_Pkg.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

