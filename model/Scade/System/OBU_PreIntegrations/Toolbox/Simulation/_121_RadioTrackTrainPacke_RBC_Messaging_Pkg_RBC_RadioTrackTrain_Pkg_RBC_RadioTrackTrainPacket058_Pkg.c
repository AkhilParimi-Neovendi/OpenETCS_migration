/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_121_RadioTrackTrainPacke_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__SetIncrementalDistancesAndQualifiers/ */
void _121_RadioTrackTrainPacke_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg(
  /* inRadioTrackTrainPacket/ */
  P058_trackside_int_T_TM *inRadioTrackTrainPacket,
  /* inIncrementalDistancesAndQualifiers/ */
  _22_array *inIncrementalDistancesAndQualifiers,
  outC__121_RadioTrackTrainPacke_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg *outC)
{
  kcg_size idx;

  kcg_copy_P058_trackside_int_T_TM(&outC->_L9, inRadioTrackTrainPacket);
  kcg_copy__22_array(&outC->_L1, inIncrementalDistancesAndQualifiers);
  /* _L4= */
  for (idx = 0; idx < 32; idx++) {
    /* _L4=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__SetIncrementalDistancesAndQualifiersIterable#1)/ */
    _120_RadioTrackTrainPacke_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg(
      &outC->_L1[idx],
      &outC->Context_RadioTrackTrainPacket058__SetIncrementalDistancesAndQualifiersIterable_1[idx]);
    kcg_copy_P058_section_int_T_TM(
      &outC->_L4[idx],
      &outC->Context_RadioTrackTrainPacket058__SetIncrementalDistancesAndQualifiersIterable_1[idx].outIncrementalDistanceAndQualifier);
  }
  kcg_copy_P058_trackside_int_T_TM(&outC->_L8, &outC->_L9);
  if (kcg_true) {
    kcg_copy_P058_trackide_sectionlist_T_TM(&outC->_L8.SECTIONS, &outC->_L4);
  }
  kcg_copy_P058_trackside_int_T_TM(&outC->outRadioTrackTrainPacket, &outC->_L8);
}

#ifndef KCG_USER_DEFINED_INIT
void _121_RadioTrackTrainPacke_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg(
  outC__121_RadioTrackTrainPacke_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;

  outC->_L9.valid = kcg_true;
  outC->_L9.NID_PACKET = kcg_lit_int64(0);
  outC->_L9.Q_DIR = kcg_lit_int64(0);
  outC->_L9.L_PACKET = kcg_lit_int64(0);
  outC->_L9.Q_SCALE = kcg_lit_int64(0);
  outC->_L9.T_CYCLOC = kcg_lit_int64(0);
  outC->_L9.D_CYCLOC = kcg_lit_int64(0);
  outC->_L9.M_LOC = kcg_lit_int64(0);
  outC->_L9.N_ITER = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 32; idx1++) {
    outC->_L9.SECTIONS[idx1].D_LOC = kcg_lit_int64(0);
    outC->_L9.SECTIONS[idx1].Q_LGTLOC = kcg_lit_int64(0);
  }
  outC->_L8.valid = kcg_true;
  outC->_L8.NID_PACKET = kcg_lit_int64(0);
  outC->_L8.Q_DIR = kcg_lit_int64(0);
  outC->_L8.L_PACKET = kcg_lit_int64(0);
  outC->_L8.Q_SCALE = kcg_lit_int64(0);
  outC->_L8.T_CYCLOC = kcg_lit_int64(0);
  outC->_L8.D_CYCLOC = kcg_lit_int64(0);
  outC->_L8.M_LOC = kcg_lit_int64(0);
  outC->_L8.N_ITER = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 32; idx2++) {
    outC->_L8.SECTIONS[idx2].D_LOC = kcg_lit_int64(0);
    outC->_L8.SECTIONS[idx2].Q_LGTLOC = kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 32; idx3++) {
    outC->_L4[idx3].D_LOC = kcg_lit_int64(0);
    outC->_L4[idx3].Q_LGTLOC = kcg_lit_int64(0);
  }
  for (idx4 = 0; idx4 < 32; idx4++) {
    outC->_L1[idx4].d_loc = kcg_lit_int64(0);
    outC->_L1[idx4].q_lgtloc = Q_LGTLOC_Min_safe_rear_end;
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
  for (idx5 = 0; idx5 < 32; idx5++) {
    outC->outRadioTrackTrainPacket.SECTIONS[idx5].D_LOC = kcg_lit_int64(0);
    outC->outRadioTrackTrainPacket.SECTIONS[idx5].Q_LGTLOC = kcg_lit_int64(0);
  }
  for (idx = 0; idx < 32; idx++) {
    /* _L4=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__SetIncrementalDistancesAndQualifiersIterable#1)/ */
    _120_RadioTrackTrainPacke_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg(
      &outC->Context_RadioTrackTrainPacket058__SetIncrementalDistancesAndQualifiersIterable_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void _121_RadioTrackTrainPacke_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg(
  outC__121_RadioTrackTrainPacke_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg *outC)
{
  kcg_size idx;

  for (idx = 0; idx < 32; idx++) {
    /* _L4=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__SetIncrementalDistancesAndQualifiersIterable#1)/ */
    _120_RadioTrackTrainPacke_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg(
      &outC->Context_RadioTrackTrainPacket058__SetIncrementalDistancesAndQualifiersIterable_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** _121_RadioTrackTrainPacke_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

