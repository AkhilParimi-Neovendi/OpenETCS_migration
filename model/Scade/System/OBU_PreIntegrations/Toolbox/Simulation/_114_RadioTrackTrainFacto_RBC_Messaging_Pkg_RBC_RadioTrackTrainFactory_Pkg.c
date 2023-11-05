/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_114_RadioTrackTrainFacto_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateP057/ */
void _114_RadioTrackTrainFacto_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg(
  /* in_Q_DIR/ */
  Q_DIR in_Q_DIR,
  /* in_T_MAR/ */
  T_MAR in_T_MAR,
  /* in_T_TIMEOUTRQST/ */
  T_TIMEOUTRQST in_T_TIMEOUTRQST,
  /* in_T_CYCRQST/ */
  T_CYCRQST in_T_CYCRQST,
  outC__114_RadioTrackTrainFacto_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg *outC)
{
  outC->_L14 = in_T_CYCRQST;
  outC->_L13 = in_T_TIMEOUTRQST;
  outC->_L12 = in_T_MAR;
  outC->_L11 = in_Q_DIR;
  /* _L2=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Create#1)/ */
  _113_RadioTrackTrainPacke_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket057_Pkg(
    outC->_L11,
    outC->_L12,
    outC->_L13,
    outC->_L14,
    &outC->Context_RadioTrackTrainPacket057__Create_1);
  kcg_copy_P057_trackside_int_T_TM(
    &outC->_L2,
    &outC->Context_RadioTrackTrainPacket057__Create_1.outRadioTrackTrainPacket);
  kcg_copy_P057_trackside_int_T_TM(&outC->outRadioTrackTrainPacket, &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void _114_RadioTrackTrainFacto_init_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg(
  outC__114_RadioTrackTrainFacto_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg *outC)
{
  outC->_L14 = kcg_lit_int32(0);
  outC->_L13 = kcg_lit_int32(0);
  outC->_L12 = kcg_lit_int32(0);
  outC->_L11 = Q_DIR_Reverse;
  outC->_L2.valid = kcg_true;
  outC->_L2.NID_PACKET = kcg_lit_int32(0);
  outC->_L2.Q_DIR = kcg_lit_int32(0);
  outC->_L2.L_PACKET = kcg_lit_int32(0);
  outC->_L2.T_MAR = kcg_lit_int32(0);
  outC->_L2.T_TIMEOUTRQST = kcg_lit_int32(0);
  outC->_L2.T_CYCRQST = kcg_lit_int32(0);
  outC->outRadioTrackTrainPacket.valid = kcg_true;
  outC->outRadioTrackTrainPacket.NID_PACKET = kcg_lit_int32(0);
  outC->outRadioTrackTrainPacket.Q_DIR = kcg_lit_int32(0);
  outC->outRadioTrackTrainPacket.L_PACKET = kcg_lit_int32(0);
  outC->outRadioTrackTrainPacket.T_MAR = kcg_lit_int32(0);
  outC->outRadioTrackTrainPacket.T_TIMEOUTRQST = kcg_lit_int32(0);
  outC->outRadioTrackTrainPacket.T_CYCRQST = kcg_lit_int32(0);
  /* _L2=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Create#1)/ */
  _113_RadioTrackTrainPacke_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket057_Pkg(
    &outC->Context_RadioTrackTrainPacket057__Create_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void _114_RadioTrackTrainFacto_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg(
  outC__114_RadioTrackTrainFacto_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg *outC)
{
  /* _L2=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Create#1)/ */
  _113_RadioTrackTrainPacke_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket057_Pkg(
    &outC->Context_RadioTrackTrainPacket057__Create_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** _114_RadioTrackTrainFacto_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

