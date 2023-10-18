/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainPacket058__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Create/ */
void RadioTrackTrainPacket058__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket(
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
  outC_RadioTrackTrainPacket058__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainP *outC)
{
  outC->_L35 = inNumberOfIncrementalDistancesAndQualifiers;
  outC->_L37 = P58_L_PACKET_D_LOC_Q_LGTLOC_RBC_Messaging_Pkg;
  outC->_L36 = outC->_L37 * outC->_L35;
  outC->_L39 = P58_L_PACKET_STATIC_PART_RBC_Messaging_Pkg;
  outC->_L38 = outC->_L39 + outC->_L36;
  outC->l_packet_complete = outC->_L38;
  outC->_L40 = outC->l_packet_complete;
  kcg_copy_P058_trackside_int_T_TM(
    &outC->_L1,
    (P058_trackside_int_T_TM *) &P058_DEFAULT);
  outC->_L3 = kcg_true;
  /* _L2=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__SetValid#1)/ */
  RadioTrackTrainPacket058__SetValid_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPack(
    &outC->_L1,
    outC->_L3,
    &outC->Context_RadioTrackTrainPacket058__SetValid_1);
  kcg_copy_P058_trackside_int_T_TM(
    &outC->_L2,
    &outC->Context_RadioTrackTrainPacket058__SetValid_1.outRadioTrackTrainPacket);
  outC->_L32 = kcg_lit_int64(58);
  /* _L31=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Set_NID_PACKET#1)/ */
  RadioTrackTrainPacket058__Set_NID_PACKET_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTra(
    &outC->_L2,
    outC->_L32,
    &outC->Context_RadioTrackTrainPacket058__Set_NID_PACKET_1);
  kcg_copy_P058_trackside_int_T_TM(
    &outC->_L31,
    &outC->Context_RadioTrackTrainPacket058__Set_NID_PACKET_1.outRadioTrackTrainPacket);
  /* _L33=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Set_L_PACKET#1)/ */
  RadioTrackTrainPacket058__Set_L_PACKET_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrain(
    &outC->_L31,
    outC->_L40,
    &outC->Context_RadioTrackTrainPacket058__Set_L_PACKET_1);
  kcg_copy_P058_trackside_int_T_TM(
    &outC->_L33,
    &outC->Context_RadioTrackTrainPacket058__Set_L_PACKET_1.outRadioTrackTrainPacket);
  outC->_L30 = in_T_CYCLOC;
  outC->_L16 = in_Q_DIR;
  /* _L4=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Set_Q_DIR#1)/ */
  RadioTrackTrainPacket058__Set_Q_DIR_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPac(
    &outC->_L33,
    outC->_L16,
    &outC->Context_RadioTrackTrainPacket058__Set_Q_DIR_1);
  kcg_copy_P058_trackside_int_T_TM(
    &outC->_L4,
    &outC->Context_RadioTrackTrainPacket058__Set_Q_DIR_1.outRadioTrackTrainPacket);
  outC->_L17 = in_Q_SCALE;
  /* _L5=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Set_Q_SCALE#1)/ */
  RadioTrackTrainPacket058__Set_Q_SCALE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainP(
    &outC->_L4,
    outC->_L17,
    &outC->Context_RadioTrackTrainPacket058__Set_Q_SCALE_1);
  kcg_copy_P058_trackside_int_T_TM(
    &outC->_L5,
    &outC->Context_RadioTrackTrainPacket058__Set_Q_SCALE_1.outRadioTrackTrainPacket);
  /* _L29=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Set_T_CYCLOC#1)/ */
  RadioTrackTrainPacket058__Set_T_CYCLOC_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrain(
    &outC->_L5,
    outC->_L30,
    &outC->Context_RadioTrackTrainPacket058__Set_T_CYCLOC_1);
  kcg_copy_P058_trackside_int_T_TM(
    &outC->_L29,
    &outC->Context_RadioTrackTrainPacket058__Set_T_CYCLOC_1.outRadioTrackTrainPacket);
  outC->_L18 = in_D_CYCLOC;
  /* _L6=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Set_D_CYCLOC#1)/ */
  RadioTrackTrainPacket058__Set_D_CYCLOC_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrain(
    &outC->_L29,
    outC->_L18,
    &outC->Context_RadioTrackTrainPacket058__Set_D_CYCLOC_1);
  kcg_copy_P058_trackside_int_T_TM(
    &outC->_L6,
    &outC->Context_RadioTrackTrainPacket058__Set_D_CYCLOC_1.outRadioTrackTrainPacket);
  outC->_L19 = in_M_LOC;
  /* _L7=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Set_M_LOC#1)/ */
  RadioTrackTrainPacket058__Set_M_LOC_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPac(
    &outC->_L6,
    outC->_L19,
    &outC->Context_RadioTrackTrainPacket058__Set_M_LOC_1);
  kcg_copy_P058_trackside_int_T_TM(
    &outC->_L7,
    &outC->Context_RadioTrackTrainPacket058__Set_M_LOC_1.outRadioTrackTrainPacket);
  outC->_L20 = inNumberOfIncrementalDistancesAndQualifiers;
  /* _L8=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RTTP058_SNIDAQ#1)/ */
  RTTP058_SNIDAQ_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg(
    &outC->_L7,
    outC->_L20,
    &outC->Context_RTTP058_SNIDAQ_1);
  kcg_copy_P058_trackside_int_T_TM(
    &outC->_L8,
    &outC->Context_RTTP058_SNIDAQ_1.outRadioTrackTrainPacket);
  kcg_copy__65_array(&outC->_L21, inIncrementalDistancesAndQualifiers);
  /* _L9=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RTTP058_SIDAQ#1)/ */
  RTTP058_SIDAQ_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg(
    &outC->_L8,
    &outC->_L21,
    &outC->Context_RTTP058_SIDAQ_1);
  kcg_copy_P058_trackside_int_T_TM(
    &outC->_L9,
    &outC->Context_RTTP058_SIDAQ_1.outRadioTrackTrainPacket);
  kcg_copy_P058_trackside_int_T_TM(&outC->outRadioTrackTrainPacket, &outC->_L9);
}

#ifndef KCG_USER_DEFINED_INIT
void RadioTrackTrainPacket058__Create_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainP(
  outC_RadioTrackTrainPacket058__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainP *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;
  static kcg_size idx8;
  static kcg_size idx9;
  static kcg_size idx10;
  static kcg_size idx11;
  static kcg_size idx12;

  outC->_L40 = kcg_lit_int64(0);
  outC->_L39 = kcg_lit_int64(0);
  outC->_L38 = kcg_lit_int64(0);
  outC->_L37 = kcg_lit_int64(0);
  outC->_L36 = kcg_lit_int64(0);
  outC->_L35 = kcg_lit_int64(0);
  outC->_L33.valid = kcg_true;
  outC->_L33.NID_PACKET = kcg_lit_int64(0);
  outC->_L33.Q_DIR = kcg_lit_int64(0);
  outC->_L33.L_PACKET = kcg_lit_int64(0);
  outC->_L33.Q_SCALE = kcg_lit_int64(0);
  outC->_L33.T_CYCLOC = kcg_lit_int64(0);
  outC->_L33.D_CYCLOC = kcg_lit_int64(0);
  outC->_L33.M_LOC = kcg_lit_int64(0);
  outC->_L33.N_ITER = kcg_lit_int64(0);
  for (idx = 0; idx < 32; idx++) {
    outC->_L33.SECTIONS[idx].D_LOC = kcg_lit_int64(0);
    outC->_L33.SECTIONS[idx].Q_LGTLOC = kcg_lit_int64(0);
  }
  outC->_L32 = kcg_lit_int64(0);
  outC->_L31.valid = kcg_true;
  outC->_L31.NID_PACKET = kcg_lit_int64(0);
  outC->_L31.Q_DIR = kcg_lit_int64(0);
  outC->_L31.L_PACKET = kcg_lit_int64(0);
  outC->_L31.Q_SCALE = kcg_lit_int64(0);
  outC->_L31.T_CYCLOC = kcg_lit_int64(0);
  outC->_L31.D_CYCLOC = kcg_lit_int64(0);
  outC->_L31.M_LOC = kcg_lit_int64(0);
  outC->_L31.N_ITER = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 32; idx1++) {
    outC->_L31.SECTIONS[idx1].D_LOC = kcg_lit_int64(0);
    outC->_L31.SECTIONS[idx1].Q_LGTLOC = kcg_lit_int64(0);
  }
  outC->_L30 = kcg_lit_int64(0);
  outC->_L29.valid = kcg_true;
  outC->_L29.NID_PACKET = kcg_lit_int64(0);
  outC->_L29.Q_DIR = kcg_lit_int64(0);
  outC->_L29.L_PACKET = kcg_lit_int64(0);
  outC->_L29.Q_SCALE = kcg_lit_int64(0);
  outC->_L29.T_CYCLOC = kcg_lit_int64(0);
  outC->_L29.D_CYCLOC = kcg_lit_int64(0);
  outC->_L29.M_LOC = kcg_lit_int64(0);
  outC->_L29.N_ITER = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 32; idx2++) {
    outC->_L29.SECTIONS[idx2].D_LOC = kcg_lit_int64(0);
    outC->_L29.SECTIONS[idx2].Q_LGTLOC = kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 32; idx3++) {
    outC->_L21[idx3].d_loc = kcg_lit_int64(0);
    outC->_L21[idx3].q_lgtloc = Q_LGTLOC_Min_safe_rear_end;
  }
  outC->_L20 = kcg_lit_int64(0);
  outC->_L19 = M_LOC_Now;
  outC->_L18 = kcg_lit_int64(0);
  outC->_L17 = Q_SCALE_10_cm_scale;
  outC->_L16 = Q_DIR_Reverse;
  outC->_L9.valid = kcg_true;
  outC->_L9.NID_PACKET = kcg_lit_int64(0);
  outC->_L9.Q_DIR = kcg_lit_int64(0);
  outC->_L9.L_PACKET = kcg_lit_int64(0);
  outC->_L9.Q_SCALE = kcg_lit_int64(0);
  outC->_L9.T_CYCLOC = kcg_lit_int64(0);
  outC->_L9.D_CYCLOC = kcg_lit_int64(0);
  outC->_L9.M_LOC = kcg_lit_int64(0);
  outC->_L9.N_ITER = kcg_lit_int64(0);
  for (idx4 = 0; idx4 < 32; idx4++) {
    outC->_L9.SECTIONS[idx4].D_LOC = kcg_lit_int64(0);
    outC->_L9.SECTIONS[idx4].Q_LGTLOC = kcg_lit_int64(0);
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
  for (idx5 = 0; idx5 < 32; idx5++) {
    outC->_L8.SECTIONS[idx5].D_LOC = kcg_lit_int64(0);
    outC->_L8.SECTIONS[idx5].Q_LGTLOC = kcg_lit_int64(0);
  }
  outC->_L7.valid = kcg_true;
  outC->_L7.NID_PACKET = kcg_lit_int64(0);
  outC->_L7.Q_DIR = kcg_lit_int64(0);
  outC->_L7.L_PACKET = kcg_lit_int64(0);
  outC->_L7.Q_SCALE = kcg_lit_int64(0);
  outC->_L7.T_CYCLOC = kcg_lit_int64(0);
  outC->_L7.D_CYCLOC = kcg_lit_int64(0);
  outC->_L7.M_LOC = kcg_lit_int64(0);
  outC->_L7.N_ITER = kcg_lit_int64(0);
  for (idx6 = 0; idx6 < 32; idx6++) {
    outC->_L7.SECTIONS[idx6].D_LOC = kcg_lit_int64(0);
    outC->_L7.SECTIONS[idx6].Q_LGTLOC = kcg_lit_int64(0);
  }
  outC->_L6.valid = kcg_true;
  outC->_L6.NID_PACKET = kcg_lit_int64(0);
  outC->_L6.Q_DIR = kcg_lit_int64(0);
  outC->_L6.L_PACKET = kcg_lit_int64(0);
  outC->_L6.Q_SCALE = kcg_lit_int64(0);
  outC->_L6.T_CYCLOC = kcg_lit_int64(0);
  outC->_L6.D_CYCLOC = kcg_lit_int64(0);
  outC->_L6.M_LOC = kcg_lit_int64(0);
  outC->_L6.N_ITER = kcg_lit_int64(0);
  for (idx7 = 0; idx7 < 32; idx7++) {
    outC->_L6.SECTIONS[idx7].D_LOC = kcg_lit_int64(0);
    outC->_L6.SECTIONS[idx7].Q_LGTLOC = kcg_lit_int64(0);
  }
  outC->_L5.valid = kcg_true;
  outC->_L5.NID_PACKET = kcg_lit_int64(0);
  outC->_L5.Q_DIR = kcg_lit_int64(0);
  outC->_L5.L_PACKET = kcg_lit_int64(0);
  outC->_L5.Q_SCALE = kcg_lit_int64(0);
  outC->_L5.T_CYCLOC = kcg_lit_int64(0);
  outC->_L5.D_CYCLOC = kcg_lit_int64(0);
  outC->_L5.M_LOC = kcg_lit_int64(0);
  outC->_L5.N_ITER = kcg_lit_int64(0);
  for (idx8 = 0; idx8 < 32; idx8++) {
    outC->_L5.SECTIONS[idx8].D_LOC = kcg_lit_int64(0);
    outC->_L5.SECTIONS[idx8].Q_LGTLOC = kcg_lit_int64(0);
  }
  outC->_L4.valid = kcg_true;
  outC->_L4.NID_PACKET = kcg_lit_int64(0);
  outC->_L4.Q_DIR = kcg_lit_int64(0);
  outC->_L4.L_PACKET = kcg_lit_int64(0);
  outC->_L4.Q_SCALE = kcg_lit_int64(0);
  outC->_L4.T_CYCLOC = kcg_lit_int64(0);
  outC->_L4.D_CYCLOC = kcg_lit_int64(0);
  outC->_L4.M_LOC = kcg_lit_int64(0);
  outC->_L4.N_ITER = kcg_lit_int64(0);
  for (idx9 = 0; idx9 < 32; idx9++) {
    outC->_L4.SECTIONS[idx9].D_LOC = kcg_lit_int64(0);
    outC->_L4.SECTIONS[idx9].Q_LGTLOC = kcg_lit_int64(0);
  }
  outC->_L3 = kcg_true;
  outC->_L2.valid = kcg_true;
  outC->_L2.NID_PACKET = kcg_lit_int64(0);
  outC->_L2.Q_DIR = kcg_lit_int64(0);
  outC->_L2.L_PACKET = kcg_lit_int64(0);
  outC->_L2.Q_SCALE = kcg_lit_int64(0);
  outC->_L2.T_CYCLOC = kcg_lit_int64(0);
  outC->_L2.D_CYCLOC = kcg_lit_int64(0);
  outC->_L2.M_LOC = kcg_lit_int64(0);
  outC->_L2.N_ITER = kcg_lit_int64(0);
  for (idx10 = 0; idx10 < 32; idx10++) {
    outC->_L2.SECTIONS[idx10].D_LOC = kcg_lit_int64(0);
    outC->_L2.SECTIONS[idx10].Q_LGTLOC = kcg_lit_int64(0);
  }
  outC->_L1.valid = kcg_true;
  outC->_L1.NID_PACKET = kcg_lit_int64(0);
  outC->_L1.Q_DIR = kcg_lit_int64(0);
  outC->_L1.L_PACKET = kcg_lit_int64(0);
  outC->_L1.Q_SCALE = kcg_lit_int64(0);
  outC->_L1.T_CYCLOC = kcg_lit_int64(0);
  outC->_L1.D_CYCLOC = kcg_lit_int64(0);
  outC->_L1.M_LOC = kcg_lit_int64(0);
  outC->_L1.N_ITER = kcg_lit_int64(0);
  for (idx11 = 0; idx11 < 32; idx11++) {
    outC->_L1.SECTIONS[idx11].D_LOC = kcg_lit_int64(0);
    outC->_L1.SECTIONS[idx11].Q_LGTLOC = kcg_lit_int64(0);
  }
  outC->l_packet_complete = kcg_lit_int64(0);
  outC->outRadioTrackTrainPacket.valid = kcg_true;
  outC->outRadioTrackTrainPacket.NID_PACKET = kcg_lit_int64(0);
  outC->outRadioTrackTrainPacket.Q_DIR = kcg_lit_int64(0);
  outC->outRadioTrackTrainPacket.L_PACKET = kcg_lit_int64(0);
  outC->outRadioTrackTrainPacket.Q_SCALE = kcg_lit_int64(0);
  outC->outRadioTrackTrainPacket.T_CYCLOC = kcg_lit_int64(0);
  outC->outRadioTrackTrainPacket.D_CYCLOC = kcg_lit_int64(0);
  outC->outRadioTrackTrainPacket.M_LOC = kcg_lit_int64(0);
  outC->outRadioTrackTrainPacket.N_ITER = kcg_lit_int64(0);
  for (idx12 = 0; idx12 < 32; idx12++) {
    outC->outRadioTrackTrainPacket.SECTIONS[idx12].D_LOC = kcg_lit_int64(0);
    outC->outRadioTrackTrainPacket.SECTIONS[idx12].Q_LGTLOC = kcg_lit_int64(0);
  }
  /* _L9=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RTTP058_SIDAQ#1)/ */
  RTTP058_SIDAQ_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg(
    &outC->Context_RTTP058_SIDAQ_1);
  /* _L8=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RTTP058_SNIDAQ#1)/ */
  RTTP058_SNIDAQ_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg(
    &outC->Context_RTTP058_SNIDAQ_1);
  /* _L7=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Set_M_LOC#1)/ */
  RadioTrackTrainPacket058__Set_M_LOC_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTra(
    &outC->Context_RadioTrackTrainPacket058__Set_M_LOC_1);
  /* _L6=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Set_D_CYCLOC#1)/ */
  RadioTrackTrainPacket058__Set_D_CYCLOC_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrack(
    &outC->Context_RadioTrackTrainPacket058__Set_D_CYCLOC_1);
  /* _L29=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Set_T_CYCLOC#1)/ */
  RadioTrackTrainPacket058__Set_T_CYCLOC_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrack(
    &outC->Context_RadioTrackTrainPacket058__Set_T_CYCLOC_1);
  /* _L5=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Set_Q_SCALE#1)/ */
  RadioTrackTrainPacket058__Set_Q_SCALE_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackT(
    &outC->Context_RadioTrackTrainPacket058__Set_Q_SCALE_1);
  /* _L4=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Set_Q_DIR#1)/ */
  RadioTrackTrainPacket058__Set_Q_DIR_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTra(
    &outC->Context_RadioTrackTrainPacket058__Set_Q_DIR_1);
  /* _L33=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Set_L_PACKET#1)/ */
  RadioTrackTrainPacket058__Set_L_PACKET_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrack(
    &outC->Context_RadioTrackTrainPacket058__Set_L_PACKET_1);
  /* _L31=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Set_NID_PACKET#1)/ */
  RadioTrackTrainPacket058__Set_NID_PACKET_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTra(
    &outC->Context_RadioTrackTrainPacket058__Set_NID_PACKET_1);
  /* _L2=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__SetValid#1)/ */
  RadioTrackTrainPacket058__SetValid_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrai(
    &outC->Context_RadioTrackTrainPacket058__SetValid_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RadioTrackTrainPacket058__Create_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrain(
  outC_RadioTrackTrainPacket058__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainP *outC)
{
  /* _L9=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RTTP058_SIDAQ#1)/ */
  RTTP058_SIDAQ_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg(
    &outC->Context_RTTP058_SIDAQ_1);
  /* _L8=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RTTP058_SNIDAQ#1)/ */
  RTTP058_SNIDAQ_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg(
    &outC->Context_RTTP058_SNIDAQ_1);
  /* _L7=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Set_M_LOC#1)/ */
  RadioTrackTrainPacket058__Set_M_LOC_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTr(
    &outC->Context_RadioTrackTrainPacket058__Set_M_LOC_1);
  /* _L6=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Set_D_CYCLOC#1)/ */
  RadioTrackTrainPacket058__Set_D_CYCLOC_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrac(
    &outC->Context_RadioTrackTrainPacket058__Set_D_CYCLOC_1);
  /* _L29=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Set_T_CYCLOC#1)/ */
  RadioTrackTrainPacket058__Set_T_CYCLOC_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrac(
    &outC->Context_RadioTrackTrainPacket058__Set_T_CYCLOC_1);
  /* _L5=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Set_Q_SCALE#1)/ */
  RadioTrackTrainPacket058__Set_Q_SCALE_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrack(
    &outC->Context_RadioTrackTrainPacket058__Set_Q_SCALE_1);
  /* _L4=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Set_Q_DIR#1)/ */
  RadioTrackTrainPacket058__Set_Q_DIR_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTr(
    &outC->Context_RadioTrackTrainPacket058__Set_Q_DIR_1);
  /* _L33=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Set_L_PACKET#1)/ */
  RadioTrackTrainPacket058__Set_L_PACKET_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrac(
    &outC->Context_RadioTrackTrainPacket058__Set_L_PACKET_1);
  /* _L31=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Set_NID_PACKET#1)/ */
  RadioTrackTrainPacket058__Set_NID_PACKET_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTr(
    &outC->Context_RadioTrackTrainPacket058__Set_NID_PACKET_1);
  /* _L2=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__SetValid#1)/ */
  RadioTrackTrainPacket058__SetValid_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTra(
    &outC->Context_RadioTrackTrainPacket058__SetValid_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RadioTrackTrainPacket058__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

