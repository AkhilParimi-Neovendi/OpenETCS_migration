/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainFactory__CreateP058_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateP058/ */
void RadioTrackTrainFactory__CreateP058_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg(
  /* in_Q_DIR/ */
  Q_DIR in_Q_DIR,
  /* in_Q_SCALE/ */
  Q_SCALE in_Q_SCALE,
  /* in_T_CYCLOC/ */
  T_CYCLOC in_T_CYCLOC,
  /* in_D_CYCLOC/ */
  D_CYCLOC in_D_CYCLOC,
  /* in_M_LOC/ */
  M_LOC in_M_LOC,
  /* inNumberOfIncrementalDistancesAndQualifiers/ */
  N_ITER inNumberOfIncrementalDistancesAndQualifiers,
  /* inIncrementalDistancesAndQualifiers/ */
  _65_array *inIncrementalDistancesAndQualifiers,
  outC_RadioTrackTrainFactory__CreateP058_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg *outC)
{
  outC->_L19 = in_D_CYCLOC;
  kcg_copy__65_array(&outC->_L18, inIncrementalDistancesAndQualifiers);
  outC->_L17 = inNumberOfIncrementalDistancesAndQualifiers;
  outC->_L16 = in_M_LOC;
  outC->_L15 = in_T_CYCLOC;
  outC->_L14 = in_Q_SCALE;
  outC->_L13 = in_Q_DIR;
  /* _L12=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Create#1)/ */
  RadioTrackTrainPacket058__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket(
    outC->_L13,
    outC->_L14,
    outC->_L15,
    outC->_L19,
    outC->_L16,
    outC->_L17,
    &outC->_L18,
    &outC->Context_RadioTrackTrainPacket058__Create_1);
  kcg_copy_P058_trackside_int_T_TM(
    &outC->_L12,
    &outC->Context_RadioTrackTrainPacket058__Create_1.outRadioTrackTrainPacket);
  kcg_copy_P058_trackside_int_T_TM(&outC->outRadioTrackTrainPacket, &outC->_L12);
}

#ifndef KCG_USER_DEFINED_INIT
void RadioTrackTrainFactory__CreateP058_init_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg(
  outC_RadioTrackTrainFactory__CreateP058_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;

  outC->_L19 = kcg_lit_int32(0);
  for (idx = 0; idx < 32; idx++) {
    outC->_L18[idx].d_loc = kcg_lit_int32(0);
    outC->_L18[idx].q_lgtloc = Q_LGTLOC_Min_safe_rear_end;
  }
  outC->_L17 = kcg_lit_int32(0);
  outC->_L16 = M_LOC_Now;
  outC->_L15 = kcg_lit_int32(0);
  outC->_L14 = Q_SCALE_10_cm_scale;
  outC->_L13 = Q_DIR_Reverse;
  outC->_L12.valid = kcg_true;
  outC->_L12.NID_PACKET = kcg_lit_int32(0);
  outC->_L12.Q_DIR = kcg_lit_int32(0);
  outC->_L12.L_PACKET = kcg_lit_int32(0);
  outC->_L12.Q_SCALE = kcg_lit_int32(0);
  outC->_L12.T_CYCLOC = kcg_lit_int32(0);
  outC->_L12.D_CYCLOC = kcg_lit_int32(0);
  outC->_L12.M_LOC = kcg_lit_int32(0);
  outC->_L12.N_ITER = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 32; idx1++) {
    outC->_L12.SECTIONS[idx1].D_LOC = kcg_lit_int32(0);
    outC->_L12.SECTIONS[idx1].Q_LGTLOC = kcg_lit_int32(0);
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
  /* _L12=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Create#1)/ */
  RadioTrackTrainPacket058__Create_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainP(
    &outC->Context_RadioTrackTrainPacket058__Create_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RadioTrackTrainFactory__CreateP058_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg(
  outC_RadioTrackTrainFactory__CreateP058_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg *outC)
{
  /* _L12=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Create#1)/ */
  RadioTrackTrainPacket058__Create_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrain(
    &outC->Context_RadioTrackTrainPacket058__Create_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RadioTrackTrainFactory__CreateP058_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

