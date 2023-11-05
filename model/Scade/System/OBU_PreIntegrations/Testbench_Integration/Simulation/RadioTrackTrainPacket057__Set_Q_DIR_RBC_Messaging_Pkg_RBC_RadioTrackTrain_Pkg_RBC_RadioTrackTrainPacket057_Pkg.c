/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainPacket057__Set_Q_DIR_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket057_Pkg.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Set_Q_DIR/ */
void RadioTrackTrainPacket057__Set_Q_DIR_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket057_Pkg(
  /* inRadioTrackTrainPacket/ */
  P057_trackside_int_T_TM *inRadioTrackTrainPacket,
  /* in_Q_DIR/ */
  Q_DIR in_Q_DIR,
  outC_RadioTrackTrainPacket057__Set_Q_DIR_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket057_Pkg *outC)
{
  outC->_L2 = in_Q_DIR;
  /* _L4=(TM_conversions::CAST_Q_DIR_to_int#1)/ */
  CAST_Q_DIR_to_int_TM_conversions(
    outC->_L2,
    &outC->Context_CAST_Q_DIR_to_int_1);
  outC->_L4 = outC->Context_CAST_Q_DIR_to_int_1.q_dir_int;
  kcg_copy_P057_trackside_int_T_TM(&outC->_L1, inRadioTrackTrainPacket);
  kcg_copy_P057_trackside_int_T_TM(&outC->_L3, &outC->_L1);
  if (kcg_true) {
    outC->_L3.Q_DIR = outC->_L4;
  }
  kcg_copy_P057_trackside_int_T_TM(&outC->outRadioTrackTrainPacket, &outC->_L3);
}

#ifndef KCG_USER_DEFINED_INIT
void RadioTrackTrainPacket057__Set_Q_DIR_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket057_Pkg(
  outC_RadioTrackTrainPacket057__Set_Q_DIR_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket057_Pkg *outC)
{
  outC->_L4 = kcg_lit_int32(0);
  outC->_L3.valid = kcg_true;
  outC->_L3.NID_PACKET = kcg_lit_int32(0);
  outC->_L3.Q_DIR = kcg_lit_int32(0);
  outC->_L3.L_PACKET = kcg_lit_int32(0);
  outC->_L3.T_MAR = kcg_lit_int32(0);
  outC->_L3.T_TIMEOUTRQST = kcg_lit_int32(0);
  outC->_L3.T_CYCRQST = kcg_lit_int32(0);
  outC->_L2 = Q_DIR_Reverse;
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
  /* _L4=(TM_conversions::CAST_Q_DIR_to_int#1)/ */
  CAST_Q_DIR_to_int_init_TM_conversions(&outC->Context_CAST_Q_DIR_to_int_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RadioTrackTrainPacket057__Set_Q_DIR_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket057_Pkg(
  outC_RadioTrackTrainPacket057__Set_Q_DIR_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket057_Pkg *outC)
{
  /* _L4=(TM_conversions::CAST_Q_DIR_to_int#1)/ */
  CAST_Q_DIR_to_int_reset_TM_conversions(&outC->Context_CAST_Q_DIR_to_int_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RadioTrackTrainPacket057__Set_Q_DIR_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket057_Pkg.c
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

