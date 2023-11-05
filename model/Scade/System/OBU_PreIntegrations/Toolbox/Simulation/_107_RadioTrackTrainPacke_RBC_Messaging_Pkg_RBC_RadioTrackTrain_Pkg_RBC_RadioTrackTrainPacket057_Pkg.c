/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_107_RadioTrackTrainPacke_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket057_Pkg.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Set_T_MAR/ */
void _107_RadioTrackTrainPacke_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket057_Pkg(
  /* inRadioTrackTrainPacket/ */
  P057_trackside_int_T_TM *inRadioTrackTrainPacket,
  /* in_T_MAR/ */
  T_MAR in_T_MAR,
  outC__107_RadioTrackTrainPacke_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket057_Pkg *outC)
{
  outC->_L3 = in_T_MAR;
  kcg_copy_P057_trackside_int_T_TM(&outC->_L2, inRadioTrackTrainPacket);
  kcg_copy_P057_trackside_int_T_TM(&outC->_L4, &outC->_L2);
  if (kcg_true) {
    outC->_L4.T_MAR = outC->_L3;
  }
  kcg_copy_P057_trackside_int_T_TM(&outC->outRadioTrackTrainPacket, &outC->_L4);
}

#ifndef KCG_USER_DEFINED_INIT
void _107_RadioTrackTrainPacke_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket057_Pkg(
  outC__107_RadioTrackTrainPacke_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket057_Pkg *outC)
{
  outC->_L4.valid = kcg_true;
  outC->_L4.NID_PACKET = kcg_lit_int32(0);
  outC->_L4.Q_DIR = kcg_lit_int32(0);
  outC->_L4.L_PACKET = kcg_lit_int32(0);
  outC->_L4.T_MAR = kcg_lit_int32(0);
  outC->_L4.T_TIMEOUTRQST = kcg_lit_int32(0);
  outC->_L4.T_CYCRQST = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
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
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void _107_RadioTrackTrainPacke_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket057_Pkg(
  outC__107_RadioTrackTrainPacke_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket057_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** _107_RadioTrackTrainPacke_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket057_Pkg.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

