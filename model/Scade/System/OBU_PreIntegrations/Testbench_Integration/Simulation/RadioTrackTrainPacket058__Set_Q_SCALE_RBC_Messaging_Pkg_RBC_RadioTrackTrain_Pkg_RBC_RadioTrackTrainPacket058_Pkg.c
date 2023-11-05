/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainPacket058__Set_Q_SCALE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Set_Q_SCALE/ */
void RadioTrackTrainPacket058__Set_Q_SCALE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg(
  /* inRadioTrackTrainPacket/ */
  P058_trackside_int_T_TM *inRadioTrackTrainPacket,
  /* in_Q_SCALE/ */
  Q_SCALE in_Q_SCALE,
  outC_RadioTrackTrainPacket058__Set_Q_SCALE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg *outC)
{
  outC->_L2 = in_Q_SCALE;
  /* _L3=(TM_conversions::CAST_Q_SCALE_to_int#1)/ */
  CAST_Q_SCALE_to_int_TM_conversions(
    outC->_L2,
    &outC->Context_CAST_Q_SCALE_to_int_1);
  outC->_L3 = outC->Context_CAST_Q_SCALE_to_int_1.d;
  kcg_copy_P058_trackside_int_T_TM(&outC->_L1, inRadioTrackTrainPacket);
  kcg_copy_P058_trackside_int_T_TM(&outC->_L4, &outC->_L1);
  if (kcg_true) {
    outC->_L4.Q_SCALE = outC->_L3;
  }
  kcg_copy_P058_trackside_int_T_TM(&outC->outRadioTrackTrainPacket, &outC->_L4);
}

#ifndef KCG_USER_DEFINED_INIT
void RadioTrackTrainPacket058__Set_Q_SCALE_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg(
  outC_RadioTrackTrainPacket058__Set_Q_SCALE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;

  outC->_L4.valid = kcg_true;
  outC->_L4.NID_PACKET = kcg_lit_int32(0);
  outC->_L4.Q_DIR = kcg_lit_int32(0);
  outC->_L4.L_PACKET = kcg_lit_int32(0);
  outC->_L4.Q_SCALE = kcg_lit_int32(0);
  outC->_L4.T_CYCLOC = kcg_lit_int32(0);
  outC->_L4.D_CYCLOC = kcg_lit_int32(0);
  outC->_L4.M_LOC = kcg_lit_int32(0);
  outC->_L4.N_ITER = kcg_lit_int32(0);
  for (idx = 0; idx < 32; idx++) {
    outC->_L4.SECTIONS[idx].D_LOC = kcg_lit_int32(0);
    outC->_L4.SECTIONS[idx].Q_LGTLOC = kcg_lit_int32(0);
  }
  outC->_L3 = kcg_lit_int32(0);
  outC->_L2 = Q_SCALE_10_cm_scale;
  outC->_L1.valid = kcg_true;
  outC->_L1.NID_PACKET = kcg_lit_int32(0);
  outC->_L1.Q_DIR = kcg_lit_int32(0);
  outC->_L1.L_PACKET = kcg_lit_int32(0);
  outC->_L1.Q_SCALE = kcg_lit_int32(0);
  outC->_L1.T_CYCLOC = kcg_lit_int32(0);
  outC->_L1.D_CYCLOC = kcg_lit_int32(0);
  outC->_L1.M_LOC = kcg_lit_int32(0);
  outC->_L1.N_ITER = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 32; idx1++) {
    outC->_L1.SECTIONS[idx1].D_LOC = kcg_lit_int32(0);
    outC->_L1.SECTIONS[idx1].Q_LGTLOC = kcg_lit_int32(0);
  }
  outC->outRadioTrackTrainPacket.valid = kcg_true;
  outC->outRadioTrackTrainPacket.NID_PACKET = kcg_lit_int32(0);
  outC->outRadioTrackTrainPacket.Q_DIR = kcg_lit_int32(0);
  outC->outRadioTrackTrainPacket.L_PACKET = kcg_lit_int32(0);
  outC->outRadioTrackTrainPacket.Q_SCALE = kcg_lit_int32(0);
  outC->outRadioTrackTrainPacket.T_CYCLOC = kcg_lit_int32(0);
  outC->outRadioTrackTrainPacket.D_CYCLOC = kcg_lit_int32(0);
  outC->outRadioTrackTrainPacket.M_LOC = kcg_lit_int32(0);
  outC->outRadioTrackTrainPacket.N_ITER = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 32; idx2++) {
    outC->outRadioTrackTrainPacket.SECTIONS[idx2].D_LOC = kcg_lit_int32(0);
    outC->outRadioTrackTrainPacket.SECTIONS[idx2].Q_LGTLOC = kcg_lit_int32(0);
  }
  /* _L3=(TM_conversions::CAST_Q_SCALE_to_int#1)/ */
  CAST_Q_SCALE_to_int_init_TM_conversions(&outC->Context_CAST_Q_SCALE_to_int_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RadioTrackTrainPacket058__Set_Q_SCALE_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg(
  outC_RadioTrackTrainPacket058__Set_Q_SCALE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg *outC)
{
  /* _L3=(TM_conversions::CAST_Q_SCALE_to_int#1)/ */
  CAST_Q_SCALE_to_int_reset_TM_conversions(
    &outC->Context_CAST_Q_SCALE_to_int_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RadioTrackTrainPacket058__Set_Q_SCALE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg.c
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

