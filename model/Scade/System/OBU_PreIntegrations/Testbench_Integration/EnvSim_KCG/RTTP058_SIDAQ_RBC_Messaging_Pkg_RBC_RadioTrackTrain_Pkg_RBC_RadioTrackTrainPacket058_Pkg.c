/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RTTP058_SIDAQ_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RTTP058_SIDAQ/ */
void RTTP058_SIDAQ_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg(
  /* inRadioTrackTrainPacket/ */
  P058_trackside_int_T_TM *inRadioTrackTrainPacket,
  /* inIncrementalDistancesAndQualifiers/ */
  _65_array *inIncrementalDistancesAndQualifiers,
  outC_RTTP058_SIDAQ_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg *outC)
{
  static kcg_size idx;

  kcg_copy_P058_trackside_int_T_TM(&outC->_L9, inRadioTrackTrainPacket);
  kcg_copy__65_array(&outC->_L1, inIncrementalDistancesAndQualifiers);
  /* _L4= */
  for (idx = 0; idx < 32; idx++) {
    /* _L4=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RTTP058_SIDAQI#1)/ */
    RTTP058_SIDAQI_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg(
      &outC->_L1[idx],
      &outC->Context_RTTP058_SIDAQI_1[idx]);
    kcg_copy_P058_section_int_T_TM(
      &outC->_L4[idx],
      &outC->Context_RTTP058_SIDAQI_1[idx].outIncrementalDistanceAndQualifier);
  }
  kcg_copy_P058_trackside_int_T_TM(&outC->_L8, &outC->_L9);
  if (kcg_true) {
    kcg_copy_P058_trackide_sectionlist_T_TM(&outC->_L8.SECTIONS, &outC->_L4);
  }
  kcg_copy_P058_trackside_int_T_TM(&outC->outRadioTrackTrainPacket, &outC->_L8);
}

#ifndef KCG_USER_DEFINED_INIT
void RTTP058_SIDAQ_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg(
  outC_RTTP058_SIDAQ_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;

  outC->_L9.valid = kcg_true;
  outC->_L9.NID_PACKET = kcg_lit_int32(0);
  outC->_L9.Q_DIR = kcg_lit_int32(0);
  outC->_L9.L_PACKET = kcg_lit_int32(0);
  outC->_L9.Q_SCALE = kcg_lit_int32(0);
  outC->_L9.T_CYCLOC = kcg_lit_int32(0);
  outC->_L9.D_CYCLOC = kcg_lit_int32(0);
  outC->_L9.M_LOC = kcg_lit_int32(0);
  outC->_L9.N_ITER = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 32; idx1++) {
    outC->_L9.SECTIONS[idx1].D_LOC = kcg_lit_int32(0);
    outC->_L9.SECTIONS[idx1].Q_LGTLOC = kcg_lit_int32(0);
  }
  outC->_L8.valid = kcg_true;
  outC->_L8.NID_PACKET = kcg_lit_int32(0);
  outC->_L8.Q_DIR = kcg_lit_int32(0);
  outC->_L8.L_PACKET = kcg_lit_int32(0);
  outC->_L8.Q_SCALE = kcg_lit_int32(0);
  outC->_L8.T_CYCLOC = kcg_lit_int32(0);
  outC->_L8.D_CYCLOC = kcg_lit_int32(0);
  outC->_L8.M_LOC = kcg_lit_int32(0);
  outC->_L8.N_ITER = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 32; idx2++) {
    outC->_L8.SECTIONS[idx2].D_LOC = kcg_lit_int32(0);
    outC->_L8.SECTIONS[idx2].Q_LGTLOC = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 32; idx3++) {
    outC->_L4[idx3].D_LOC = kcg_lit_int32(0);
    outC->_L4[idx3].Q_LGTLOC = kcg_lit_int32(0);
  }
  for (idx4 = 0; idx4 < 32; idx4++) {
    outC->_L1[idx4].d_loc = kcg_lit_int32(0);
    outC->_L1[idx4].q_lgtloc = Q_LGTLOC_Min_safe_rear_end;
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
  for (idx5 = 0; idx5 < 32; idx5++) {
    outC->outRadioTrackTrainPacket.SECTIONS[idx5].D_LOC = kcg_lit_int32(0);
    outC->outRadioTrackTrainPacket.SECTIONS[idx5].Q_LGTLOC = kcg_lit_int32(0);
  }
  for (idx = 0; idx < 32; idx++) {
    /* _L4=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RTTP058_SIDAQI#1)/ */
    RTTP058_SIDAQI_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg(
      &outC->Context_RTTP058_SIDAQI_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RTTP058_SIDAQ_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg(
  outC_RTTP058_SIDAQ_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 32; idx++) {
    /* _L4=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RTTP058_SIDAQI#1)/ */
    RTTP058_SIDAQI_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg(
      &outC->Context_RTTP058_SIDAQI_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RTTP058_SIDAQ_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

