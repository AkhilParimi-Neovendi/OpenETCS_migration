/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainPacket057__SetValid_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPack.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__SetValid/ */
void RadioTrackTrainPacket057__SetValid_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPack(
  /* inRadioTrackTrainPacket/ */
  P057_trackside_int_T_TM *inRadioTrackTrainPacket,
  /* inIsValid/ */
  kcg_bool inIsValid,
  outC_RadioTrackTrainPacket057__SetValid_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrai *outC)
{
  outC->_L2 = inIsValid;
  kcg_copy_P057_trackside_int_T_TM(&outC->_L1, inRadioTrackTrainPacket);
  kcg_copy_P057_trackside_int_T_TM(&outC->_L3, &outC->_L1);
  if (kcg_true) {
    outC->_L3.valid = outC->_L2;
  }
  kcg_copy_P057_trackside_int_T_TM(&outC->outRadioTrackTrainPacket, &outC->_L3);
}

#ifndef KCG_USER_DEFINED_INIT
void RadioTrackTrainPacket057__SetValid_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrai(
  outC_RadioTrackTrainPacket057__SetValid_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrai *outC)
{
  outC->_L3.valid = kcg_true;
  outC->_L3.NID_PACKET = kcg_lit_int32(0);
  outC->_L3.Q_DIR = kcg_lit_int32(0);
  outC->_L3.L_PACKET = kcg_lit_int32(0);
  outC->_L3.T_MAR = kcg_lit_int32(0);
  outC->_L3.T_TIMEOUTRQST = kcg_lit_int32(0);
  outC->_L3.T_CYCRQST = kcg_lit_int32(0);
  outC->_L2 = kcg_true;
  outC->_L1.valid = kcg_true;
  outC->_L1.NID_PACKET = kcg_lit_int32(0);
  outC->_L1.Q_DIR = kcg_lit_int32(0);
  outC->_L1.L_PACKET = kcg_lit_int32(0);
  outC->_L1.T_MAR = kcg_lit_int32(0);
  outC->_L1.T_TIMEOUTRQST = kcg_lit_int32(0);
  outC->_L1.T_CYCRQST = kcg_lit_int32(0);
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
void RadioTrackTrainPacket057__SetValid_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTra(
  outC_RadioTrackTrainPacket057__SetValid_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrai *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RadioTrackTrainPacket057__SetValid_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPack.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

