/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainPacket058__RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__SetValid/ */
void RadioTrackTrainPacket058__RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg(
  /* inRadioTrackTrainPacket/ */
  P058_trackside_int_T_TM *inRadioTrackTrainPacket,
  /* inIsValid/ */
  kcg_bool inIsValid,
  outC_RadioTrackTrainPacket058__RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg *outC)
{
  outC->_L2 = inIsValid;
  kcg_copy_P058_trackside_int_T_TM(&outC->_L1, inRadioTrackTrainPacket);
  kcg_copy_P058_trackside_int_T_TM(&outC->_L3, &outC->_L1);
  if (kcg_true) {
    outC->_L3.valid = outC->_L2;
  }
  kcg_copy_P058_trackside_int_T_TM(&outC->outRadioTrackTrainPacket, &outC->_L3);
}

#ifndef KCG_USER_DEFINED_INIT
void RadioTrackTrainPacket058__init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg(
  outC_RadioTrackTrainPacket058__RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;

  outC->_L3.valid = kcg_true;
  outC->_L3.NID_PACKET = kcg_lit_int64(0);
  outC->_L3.Q_DIR = kcg_lit_int64(0);
  outC->_L3.L_PACKET = kcg_lit_int64(0);
  outC->_L3.Q_SCALE = kcg_lit_int64(0);
  outC->_L3.T_CYCLOC = kcg_lit_int64(0);
  outC->_L3.D_CYCLOC = kcg_lit_int64(0);
  outC->_L3.M_LOC = kcg_lit_int64(0);
  outC->_L3.N_ITER = kcg_lit_int64(0);
  for (idx = 0; idx < 32; idx++) {
    outC->_L3.SECTIONS[idx].D_LOC = kcg_lit_int64(0);
    outC->_L3.SECTIONS[idx].Q_LGTLOC = kcg_lit_int64(0);
  }
  outC->_L2 = kcg_true;
  outC->_L1.valid = kcg_true;
  outC->_L1.NID_PACKET = kcg_lit_int64(0);
  outC->_L1.Q_DIR = kcg_lit_int64(0);
  outC->_L1.L_PACKET = kcg_lit_int64(0);
  outC->_L1.Q_SCALE = kcg_lit_int64(0);
  outC->_L1.T_CYCLOC = kcg_lit_int64(0);
  outC->_L1.D_CYCLOC = kcg_lit_int64(0);
  outC->_L1.M_LOC = kcg_lit_int64(0);
  outC->_L1.N_ITER = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 32; idx1++) {
    outC->_L1.SECTIONS[idx1].D_LOC = kcg_lit_int64(0);
    outC->_L1.SECTIONS[idx1].Q_LGTLOC = kcg_lit_int64(0);
  }
  outC->outRadioTrackTrainPacket.valid = kcg_true;
  outC->outRadioTrackTrainPacket.NID_PACKET = kcg_lit_int64(0);
  outC->outRadioTrackTrainPacket.Q_DIR = kcg_lit_int64(0);
  outC->outRadioTrackTrainPacket.L_PACKET = kcg_lit_int64(0);
  outC->outRadioTrackTrainPacket.Q_SCALE = kcg_lit_int64(0);
  outC->outRadioTrackTrainPacket.T_CYCLOC = kcg_lit_int64(0);
  outC->outRadioTrackTrainPacket.D_CYCLOC = kcg_lit_int64(0);
  outC->outRadioTrackTrainPacket.M_LOC = kcg_lit_int64(0);
  outC->outRadioTrackTrainPacket.N_ITER = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 32; idx2++) {
    outC->outRadioTrackTrainPacket.SECTIONS[idx2].D_LOC = kcg_lit_int64(0);
    outC->outRadioTrackTrainPacket.SECTIONS[idx2].Q_LGTLOC = kcg_lit_int64(0);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RadioTrackTrainPacket058__reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg(
  outC_RadioTrackTrainPacket058__RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RadioTrackTrainPacket058__RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

