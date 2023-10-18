/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosData__UpdateWithP000_RBC_Session_Pkg.h"

/* RBC_Session_Pkg::PosData__UpdateWithP000/ */
void PosData__UpdateWithP000_RBC_Session_Pkg(
  /* inPosData/ */
  PosData_T *inPosData,
  /* inRadioTrainTrackMessage/ */
  Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  outC_PosData__UpdateWithP000_RBC_Session_Pkg *outC)
{
  kcg_copy_PosData_T(&outC->_L1, inPosData);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->_L2,
    inRadioTrainTrackMessage);
  /* _L3=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetPackets#1)/ */
  RadioTrainTrackMessage__GetPackets_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L2,
    &outC->Context_RadioTrainTrackMessage__GetPackets_1);
  kcg_copy_outPackets_T_Common_Types_Pkg(
    &outC->_L3,
    &outC->Context_RadioTrainTrackMessage__GetPackets_1.outRadioTrainTrackPackets);
  /* _L4=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP000#1)/ */
  RadioTrainTrackPackets__GetP000_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L3,
    &outC->Context_RadioTrainTrackPackets__GetP000_1);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
    &outC->_L4,
    &outC->Context_RadioTrainTrackPackets__GetP000_1.outRadioTrainTrackPacket);
  /* _L10=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_Q_SCALE#1)/ */
  RadioTrainTrackPacket000__Get_Q_SCALE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackP(
    &outC->_L4,
    &outC->Context_RadioTrainTrackPacket000__Get_Q_SCALE_1);
  outC->_L10 = outC->Context_RadioTrainTrackPacket000__Get_Q_SCALE_1.out_Q_SCALE;
  /* _L7=(RBC_Session_Pkg::PosData__Set_Q_SCALE#1)/ */
  PosData__Set_Q_SCALE_RBC_Session_Pkg(
    &outC->_L1,
    outC->_L10,
    &outC->Context_PosData__Set_Q_SCALE_1);
  kcg_copy_PosData_T(
    &outC->_L7,
    &outC->Context_PosData__Set_Q_SCALE_1.outPosData);
  /* _L5=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_NID_LRBG#1)/ */
  RadioTrainTrackPacket000__Get_NID_LRBG_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrack(
    &outC->_L4,
    &outC->Context_RadioTrainTrackPacket000__Get_NID_LRBG_1);
  outC->_L5 = outC->Context_RadioTrainTrackPacket000__Get_NID_LRBG_1.out_NID_LRBG;
  /* _L6=(RBC_Session_Pkg::PosData__Set_NID_LRBG#1)/ */
  PosData__Set_NID_LRBG_RBC_Session_Pkg(
    &outC->_L7,
    outC->_L5,
    &outC->Context_PosData__Set_NID_LRBG_1);
  kcg_copy_PosData_T(
    &outC->_L6,
    &outC->Context_PosData__Set_NID_LRBG_1.outPosData);
  /* _L11=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_D_LRBG#1)/ */
  RadioTrainTrackPacket000__Get_D_LRBG_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPa(
    &outC->_L4,
    &outC->Context_RadioTrainTrackPacket000__Get_D_LRBG_1);
  outC->_L11 = outC->Context_RadioTrainTrackPacket000__Get_D_LRBG_1.out_D_LRBG;
  /* _L23=(RBC_Session_Pkg::PosData__Set_D_LRBG#1)/ */
  PosData__Set_D_LRBG_RBC_Session_Pkg(
    &outC->_L6,
    outC->_L11,
    &outC->Context_PosData__Set_D_LRBG_1);
  kcg_copy_PosData_T(
    &outC->_L23,
    &outC->Context_PosData__Set_D_LRBG_1.outPosData);
  /* _L12=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_Q_DIRLRBG#1)/ */
  RadioTrainTrackPacket000__Get_Q_DIRLRBG_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrac(
    &outC->_L4,
    &outC->Context_RadioTrainTrackPacket000__Get_Q_DIRLRBG_1);
  outC->_L12 =
    outC->Context_RadioTrainTrackPacket000__Get_Q_DIRLRBG_1.out_Q_DIRLRBG;
  /* _L26=(RBC_Session_Pkg::PosData__Set_Q_DIRLRBG#1)/ */
  PosData__Set_Q_DIRLRBG_RBC_Session_Pkg(
    &outC->_L23,
    outC->_L12,
    &outC->Context_PosData__Set_Q_DIRLRBG_1);
  kcg_copy_PosData_T(
    &outC->_L26,
    &outC->Context_PosData__Set_Q_DIRLRBG_1.outPosData);
  /* _L13=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_Q_DLRBG#1)/ */
  RadioTrainTrackPacket000__Get_Q_DLRBG_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackP(
    &outC->_L4,
    &outC->Context_RadioTrainTrackPacket000__Get_Q_DLRBG_1);
  outC->_L13 = outC->Context_RadioTrainTrackPacket000__Get_Q_DLRBG_1.out_Q_DLRBG;
  /* _L32=(RBC_Session_Pkg::PosData__Set_Q_DLRBG#1)/ */
  PosData__Set_Q_DLRBG_RBC_Session_Pkg(
    &outC->_L26,
    outC->_L13,
    &outC->Context_PosData__Set_Q_DLRBG_1);
  kcg_copy_PosData_T(
    &outC->_L32,
    &outC->Context_PosData__Set_Q_DLRBG_1.outPosData);
  /* _L14=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_L_DOUBTOVER#1)/ */
  RadioTrainTrackPacket000__Get_L_DOUBTOVER_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTr(
    &outC->_L4,
    &outC->Context_RadioTrainTrackPacket000__Get_L_DOUBTOVER_1);
  outC->_L14 =
    outC->Context_RadioTrainTrackPacket000__Get_L_DOUBTOVER_1.out_L_DOUBTOVER;
  /* _L35=(RBC_Session_Pkg::PosData__Set_L_DOUBTOVER#1)/ */
  PosData__Set_L_DOUBTOVER_RBC_Session_Pkg(
    &outC->_L32,
    outC->_L14,
    &outC->Context_PosData__Set_L_DOUBTOVER_1);
  kcg_copy_PosData_T(
    &outC->_L35,
    &outC->Context_PosData__Set_L_DOUBTOVER_1.outPosData);
  /* _L15=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_L_DOUBTUNDER#1)/ */
  RadioTrainTrackPacket000__Get_L_DOUBTUNDER_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainT(
    &outC->_L4,
    &outC->Context_RadioTrainTrackPacket000__Get_L_DOUBTUNDER_1);
  outC->_L15 =
    outC->Context_RadioTrainTrackPacket000__Get_L_DOUBTUNDER_1.out_L_DOUBTUNDER;
  /* _L36=(RBC_Session_Pkg::PosData__Set_L_DOUBTUNDER#1)/ */
  PosData__Set_L_DOUBTUNDER_RBC_Session_Pkg(
    &outC->_L35,
    outC->_L15,
    &outC->Context_PosData__Set_L_DOUBTUNDER_1);
  kcg_copy_PosData_T(
    &outC->_L36,
    &outC->Context_PosData__Set_L_DOUBTUNDER_1.outPosData);
  /* _L16=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_Q_LENGTH#1)/ */
  RadioTrainTrackPacket000__Get_Q_LENGTH_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrack(
    &outC->_L4,
    &outC->Context_RadioTrainTrackPacket000__Get_Q_LENGTH_1);
  outC->_L16 =
    outC->Context_RadioTrainTrackPacket000__Get_Q_LENGTH_1.out_Q_LENGTH;
  /* _L37=(RBC_Session_Pkg::PosData__Set_Q_LENGTH#1)/ */
  PosData__Set_Q_LENGTH_RBC_Session_Pkg(
    &outC->_L36,
    outC->_L16,
    &outC->Context_PosData__Set_Q_LENGTH_1);
  kcg_copy_PosData_T(
    &outC->_L37,
    &outC->Context_PosData__Set_Q_LENGTH_1.outPosData);
  /* _L17=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_L_TRAININT#1)/ */
  RadioTrainTrackPacket000__Get_L_TRAININT_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTra(
    &outC->_L4,
    &outC->Context_RadioTrainTrackPacket000__Get_L_TRAININT_1);
  outC->_L17 =
    outC->Context_RadioTrainTrackPacket000__Get_L_TRAININT_1.out_L_TRAININT;
  /* _L40=(RBC_Session_Pkg::PosData__Set_L_TRAININT#1)/ */
  PosData__Set_L_TRAININT_RBC_Session_Pkg(
    &outC->_L37,
    outC->_L17,
    &outC->Context_PosData__Set_L_TRAININT_1);
  kcg_copy_PosData_T(
    &outC->_L40,
    &outC->Context_PosData__Set_L_TRAININT_1.outPosData);
  /* _L19=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_V_TRAIN#1)/ */
  RadioTrainTrackPacket000__Get_V_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackP(
    &outC->_L4,
    &outC->Context_RadioTrainTrackPacket000__Get_V_TRAIN_1);
  outC->_L19 = outC->Context_RadioTrainTrackPacket000__Get_V_TRAIN_1.out_V_TRAIN;
  /* _L41=(RBC_Session_Pkg::PosData__Set_V_TRAIN#1)/ */
  PosData__Set_V_TRAIN_RBC_Session_Pkg(
    &outC->_L40,
    outC->_L19,
    &outC->Context_PosData__Set_V_TRAIN_1);
  kcg_copy_PosData_T(
    &outC->_L41,
    &outC->Context_PosData__Set_V_TRAIN_1.outPosData);
  /* _L18=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_Q_DIRTRAIN#1)/ */
  RadioTrainTrackPacket000__Get_Q_DIRTRAIN_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTra(
    &outC->_L4,
    &outC->Context_RadioTrainTrackPacket000__Get_Q_DIRTRAIN_1);
  outC->_L18 =
    outC->Context_RadioTrainTrackPacket000__Get_Q_DIRTRAIN_1.out_Q_DIRTRAIN;
  /* _L42=(RBC_Session_Pkg::PosData__Set_Q_DIRTRAIN#1)/ */
  PosData__Set_Q_DIRTRAIN_RBC_Session_Pkg(
    &outC->_L41,
    outC->_L18,
    &outC->Context_PosData__Set_Q_DIRTRAIN_1);
  kcg_copy_PosData_T(
    &outC->_L42,
    &outC->Context_PosData__Set_Q_DIRTRAIN_1.outPosData);
  /* _L20=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_M_MODE#1)/ */
  RadioTrainTrackPacket000__Get_M_MODE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPa(
    &outC->_L4,
    &outC->Context_RadioTrainTrackPacket000__Get_M_MODE_1);
  outC->_L20 = outC->Context_RadioTrainTrackPacket000__Get_M_MODE_1.out_M_MODE;
  /* _L43=(RBC_Session_Pkg::PosData__Set_M_MODE#1)/ */
  PosData__Set_M_MODE_RBC_Session_Pkg(
    &outC->_L42,
    outC->_L20,
    &outC->Context_PosData__Set_M_MODE_1);
  kcg_copy_PosData_T(
    &outC->_L43,
    &outC->Context_PosData__Set_M_MODE_1.outPosData);
  /* _L21=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_M_LEVEL#1)/ */
  RadioTrainTrackPacket000__Get_M_LEVEL_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackP(
    &outC->_L4,
    &outC->Context_RadioTrainTrackPacket000__Get_M_LEVEL_1);
  outC->_L21 = outC->Context_RadioTrainTrackPacket000__Get_M_LEVEL_1.out_M_LEVEL;
  /* _L44=(RBC_Session_Pkg::PosData__Set_M_LEVEL#1)/ */
  PosData__Set_M_LEVEL_RBC_Session_Pkg(
    &outC->_L43,
    outC->_L21,
    &outC->Context_PosData__Set_M_LEVEL_1);
  kcg_copy_PosData_T(
    &outC->_L44,
    &outC->Context_PosData__Set_M_LEVEL_1.outPosData);
  /* _L22=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_NID_NTC#1)/ */
  RadioTrainTrackPacket000__Get_NID_NTC_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackP(
    &outC->_L4,
    &outC->Context_RadioTrainTrackPacket000__Get_NID_NTC_1);
  outC->_L22 = outC->Context_RadioTrainTrackPacket000__Get_NID_NTC_1.out_NID_NTC;
  /* _L45=(RBC_Session_Pkg::PosData__Set_NID_NTC#1)/ */
  PosData__Set_NID_NTC_RBC_Session_Pkg(
    &outC->_L44,
    outC->_L22,
    &outC->Context_PosData__Set_NID_NTC_1);
  kcg_copy_PosData_T(
    &outC->_L45,
    &outC->Context_PosData__Set_NID_NTC_1.outPosData);
  kcg_copy_PosData_T(&outC->outPosData, &outC->_L45);
}

#ifndef KCG_USER_DEFINED_INIT
void PosData__UpdateWithP000_init_RBC_Session_Pkg(
  outC_PosData__UpdateWithP000_RBC_Session_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;

  outC->_L45.nid_lrbg = kcg_lit_int64(0);
  outC->_L45.q_scale = Q_SCALE_10_cm_scale;
  outC->_L45.d_lrbg = kcg_lit_int64(0);
  outC->_L45.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L45.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L45.l_doubtover = kcg_lit_int64(0);
  outC->_L45.l_doubtunder = kcg_lit_int64(0);
  outC->_L45.q_length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L45.l_trainint = kcg_lit_int64(0);
  outC->_L45.v_train = kcg_lit_int64(0);
  outC->_L45.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L45.m_mode = M_MODE_Full_Supervision;
  outC->_L45.m_level = M_LEVEL_Level_0;
  outC->_L45.nid_ntc = kcg_lit_int64(0);
  outC->_L45.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L44.nid_lrbg = kcg_lit_int64(0);
  outC->_L44.q_scale = Q_SCALE_10_cm_scale;
  outC->_L44.d_lrbg = kcg_lit_int64(0);
  outC->_L44.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L44.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L44.l_doubtover = kcg_lit_int64(0);
  outC->_L44.l_doubtunder = kcg_lit_int64(0);
  outC->_L44.q_length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L44.l_trainint = kcg_lit_int64(0);
  outC->_L44.v_train = kcg_lit_int64(0);
  outC->_L44.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L44.m_mode = M_MODE_Full_Supervision;
  outC->_L44.m_level = M_LEVEL_Level_0;
  outC->_L44.nid_ntc = kcg_lit_int64(0);
  outC->_L44.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L43.nid_lrbg = kcg_lit_int64(0);
  outC->_L43.q_scale = Q_SCALE_10_cm_scale;
  outC->_L43.d_lrbg = kcg_lit_int64(0);
  outC->_L43.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L43.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L43.l_doubtover = kcg_lit_int64(0);
  outC->_L43.l_doubtunder = kcg_lit_int64(0);
  outC->_L43.q_length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L43.l_trainint = kcg_lit_int64(0);
  outC->_L43.v_train = kcg_lit_int64(0);
  outC->_L43.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L43.m_mode = M_MODE_Full_Supervision;
  outC->_L43.m_level = M_LEVEL_Level_0;
  outC->_L43.nid_ntc = kcg_lit_int64(0);
  outC->_L43.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L42.nid_lrbg = kcg_lit_int64(0);
  outC->_L42.q_scale = Q_SCALE_10_cm_scale;
  outC->_L42.d_lrbg = kcg_lit_int64(0);
  outC->_L42.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L42.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L42.l_doubtover = kcg_lit_int64(0);
  outC->_L42.l_doubtunder = kcg_lit_int64(0);
  outC->_L42.q_length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L42.l_trainint = kcg_lit_int64(0);
  outC->_L42.v_train = kcg_lit_int64(0);
  outC->_L42.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L42.m_mode = M_MODE_Full_Supervision;
  outC->_L42.m_level = M_LEVEL_Level_0;
  outC->_L42.nid_ntc = kcg_lit_int64(0);
  outC->_L42.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L41.nid_lrbg = kcg_lit_int64(0);
  outC->_L41.q_scale = Q_SCALE_10_cm_scale;
  outC->_L41.d_lrbg = kcg_lit_int64(0);
  outC->_L41.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L41.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L41.l_doubtover = kcg_lit_int64(0);
  outC->_L41.l_doubtunder = kcg_lit_int64(0);
  outC->_L41.q_length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L41.l_trainint = kcg_lit_int64(0);
  outC->_L41.v_train = kcg_lit_int64(0);
  outC->_L41.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L41.m_mode = M_MODE_Full_Supervision;
  outC->_L41.m_level = M_LEVEL_Level_0;
  outC->_L41.nid_ntc = kcg_lit_int64(0);
  outC->_L41.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L40.nid_lrbg = kcg_lit_int64(0);
  outC->_L40.q_scale = Q_SCALE_10_cm_scale;
  outC->_L40.d_lrbg = kcg_lit_int64(0);
  outC->_L40.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L40.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L40.l_doubtover = kcg_lit_int64(0);
  outC->_L40.l_doubtunder = kcg_lit_int64(0);
  outC->_L40.q_length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L40.l_trainint = kcg_lit_int64(0);
  outC->_L40.v_train = kcg_lit_int64(0);
  outC->_L40.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L40.m_mode = M_MODE_Full_Supervision;
  outC->_L40.m_level = M_LEVEL_Level_0;
  outC->_L40.nid_ntc = kcg_lit_int64(0);
  outC->_L40.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L37.nid_lrbg = kcg_lit_int64(0);
  outC->_L37.q_scale = Q_SCALE_10_cm_scale;
  outC->_L37.d_lrbg = kcg_lit_int64(0);
  outC->_L37.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L37.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L37.l_doubtover = kcg_lit_int64(0);
  outC->_L37.l_doubtunder = kcg_lit_int64(0);
  outC->_L37.q_length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L37.l_trainint = kcg_lit_int64(0);
  outC->_L37.v_train = kcg_lit_int64(0);
  outC->_L37.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L37.m_mode = M_MODE_Full_Supervision;
  outC->_L37.m_level = M_LEVEL_Level_0;
  outC->_L37.nid_ntc = kcg_lit_int64(0);
  outC->_L37.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L36.nid_lrbg = kcg_lit_int64(0);
  outC->_L36.q_scale = Q_SCALE_10_cm_scale;
  outC->_L36.d_lrbg = kcg_lit_int64(0);
  outC->_L36.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L36.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L36.l_doubtover = kcg_lit_int64(0);
  outC->_L36.l_doubtunder = kcg_lit_int64(0);
  outC->_L36.q_length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L36.l_trainint = kcg_lit_int64(0);
  outC->_L36.v_train = kcg_lit_int64(0);
  outC->_L36.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L36.m_mode = M_MODE_Full_Supervision;
  outC->_L36.m_level = M_LEVEL_Level_0;
  outC->_L36.nid_ntc = kcg_lit_int64(0);
  outC->_L36.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L35.nid_lrbg = kcg_lit_int64(0);
  outC->_L35.q_scale = Q_SCALE_10_cm_scale;
  outC->_L35.d_lrbg = kcg_lit_int64(0);
  outC->_L35.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L35.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L35.l_doubtover = kcg_lit_int64(0);
  outC->_L35.l_doubtunder = kcg_lit_int64(0);
  outC->_L35.q_length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L35.l_trainint = kcg_lit_int64(0);
  outC->_L35.v_train = kcg_lit_int64(0);
  outC->_L35.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L35.m_mode = M_MODE_Full_Supervision;
  outC->_L35.m_level = M_LEVEL_Level_0;
  outC->_L35.nid_ntc = kcg_lit_int64(0);
  outC->_L35.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L32.nid_lrbg = kcg_lit_int64(0);
  outC->_L32.q_scale = Q_SCALE_10_cm_scale;
  outC->_L32.d_lrbg = kcg_lit_int64(0);
  outC->_L32.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L32.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L32.l_doubtover = kcg_lit_int64(0);
  outC->_L32.l_doubtunder = kcg_lit_int64(0);
  outC->_L32.q_length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L32.l_trainint = kcg_lit_int64(0);
  outC->_L32.v_train = kcg_lit_int64(0);
  outC->_L32.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L32.m_mode = M_MODE_Full_Supervision;
  outC->_L32.m_level = M_LEVEL_Level_0;
  outC->_L32.nid_ntc = kcg_lit_int64(0);
  outC->_L32.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L26.nid_lrbg = kcg_lit_int64(0);
  outC->_L26.q_scale = Q_SCALE_10_cm_scale;
  outC->_L26.d_lrbg = kcg_lit_int64(0);
  outC->_L26.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L26.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L26.l_doubtover = kcg_lit_int64(0);
  outC->_L26.l_doubtunder = kcg_lit_int64(0);
  outC->_L26.q_length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L26.l_trainint = kcg_lit_int64(0);
  outC->_L26.v_train = kcg_lit_int64(0);
  outC->_L26.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L26.m_mode = M_MODE_Full_Supervision;
  outC->_L26.m_level = M_LEVEL_Level_0;
  outC->_L26.nid_ntc = kcg_lit_int64(0);
  outC->_L26.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L23.nid_lrbg = kcg_lit_int64(0);
  outC->_L23.q_scale = Q_SCALE_10_cm_scale;
  outC->_L23.d_lrbg = kcg_lit_int64(0);
  outC->_L23.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L23.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L23.l_doubtover = kcg_lit_int64(0);
  outC->_L23.l_doubtunder = kcg_lit_int64(0);
  outC->_L23.q_length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L23.l_trainint = kcg_lit_int64(0);
  outC->_L23.v_train = kcg_lit_int64(0);
  outC->_L23.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L23.m_mode = M_MODE_Full_Supervision;
  outC->_L23.m_level = M_LEVEL_Level_0;
  outC->_L23.nid_ntc = kcg_lit_int64(0);
  outC->_L23.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L22 = kcg_lit_int64(0);
  outC->_L21 = M_LEVEL_Level_0;
  outC->_L20 = M_MODE_Full_Supervision;
  outC->_L19 = kcg_lit_int64(0);
  outC->_L18 = Q_DIRTRAIN_Reverse;
  outC->_L17 = kcg_lit_int64(0);
  outC->_L16 = Q_LENGTH_No_train_integrity_information_available;
  outC->_L15 = kcg_lit_int64(0);
  outC->_L14 = kcg_lit_int64(0);
  outC->_L13 = Q_DLRBG_Reverse;
  outC->_L12 = Q_DIRLRBG_Reverse;
  outC->_L11 = kcg_lit_int64(0);
  outC->_L10 = Q_SCALE_10_cm_scale;
  outC->_L7.nid_lrbg = kcg_lit_int64(0);
  outC->_L7.q_scale = Q_SCALE_10_cm_scale;
  outC->_L7.d_lrbg = kcg_lit_int64(0);
  outC->_L7.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L7.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L7.l_doubtover = kcg_lit_int64(0);
  outC->_L7.l_doubtunder = kcg_lit_int64(0);
  outC->_L7.q_length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L7.l_trainint = kcg_lit_int64(0);
  outC->_L7.v_train = kcg_lit_int64(0);
  outC->_L7.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L7.m_mode = M_MODE_Full_Supervision;
  outC->_L7.m_level = M_LEVEL_Level_0;
  outC->_L7.nid_ntc = kcg_lit_int64(0);
  outC->_L7.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L6.nid_lrbg = kcg_lit_int64(0);
  outC->_L6.q_scale = Q_SCALE_10_cm_scale;
  outC->_L6.d_lrbg = kcg_lit_int64(0);
  outC->_L6.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L6.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L6.l_doubtover = kcg_lit_int64(0);
  outC->_L6.l_doubtunder = kcg_lit_int64(0);
  outC->_L6.q_length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L6.l_trainint = kcg_lit_int64(0);
  outC->_L6.v_train = kcg_lit_int64(0);
  outC->_L6.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L6.m_mode = M_MODE_Full_Supervision;
  outC->_L6.m_level = M_LEVEL_Level_0;
  outC->_L6.nid_ntc = kcg_lit_int64(0);
  outC->_L6.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L5 = kcg_lit_int64(0);
  outC->_L4.valid = kcg_true;
  outC->_L4.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->_L4.packet0.L_PACKET = kcg_lit_int64(0);
  outC->_L4.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L4.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->_L4.packet0.D_LRBG = kcg_lit_int64(0);
  outC->_L4.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L4.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L4.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L4.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L4.packet0.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L4.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->_L4.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->_L4.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L4.packet0.mode = M_MODE_Full_Supervision;
  outC->_L4.packet0.level = M_LEVEL_Level_0;
  outC->_L4.packet0.NID_NTC = kcg_lit_int64(0);
  outC->_L3.p0.valid = kcg_true;
  outC->_L3.p0.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->_L3.p0.packet0.L_PACKET = kcg_lit_int64(0);
  outC->_L3.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L3.p0.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->_L3.p0.packet0.D_LRBG = kcg_lit_int64(0);
  outC->_L3.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L3.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L3.p0.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L3.p0.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L3.p0.packet0.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L3.p0.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->_L3.p0.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->_L3.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L3.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->_L3.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L3.p0.packet0.NID_NTC = kcg_lit_int64(0);
  outC->_L3.p1.valid = kcg_true;
  outC->_L3.p1.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->_L3.p1.packet1.L_PACKET = kcg_lit_int64(0);
  outC->_L3.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L3.p1.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->_L3.p1.packet1.NID_PRVLRBG = kcg_lit_int64(0);
  outC->_L3.p1.packet1.D_LRBG = kcg_lit_int64(0);
  outC->_L3.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L3.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L3.p1.packet1.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L3.p1.packet1.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L3.p1.packet1.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L3.p1.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->_L3.p1.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->_L3.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L3.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L3.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L3.p1.packet1.NID_NTC = kcg_lit_int64(0);
  outC->_L3.p3.valid = kcg_true;
  outC->_L3.p3.number = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 1; idx1++) {
    outC->_L3.p3.aNID_RADIO[idx1].valid = kcg_true;
    for (idx = 0; idx < 15; idx++) {
      outC->_L3.p3.aNID_RADIO[idx1].telephoneNumber[idx] = kcg_lit_int64(0);
    }
  }
  outC->_L3.p4.valid = kcg_true;
  outC->_L3.p4.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L3.p5.valid = kcg_true;
  outC->_L3.p5.TrainRunningNumber = kcg_lit_int64(0);
  outC->_L3.p9.valid = kcg_true;
  outC->_L3.p9.transitionInformation = kcg_lit_int64(0);
  outC->_L3.p11.valid = kcg_true;
  outC->_L3.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L3.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L3.p11.l_train = kcg_lit_int64(0);
  outC->_L3.p11.v_maxtrain = kcg_lit_int64(0);
  outC->_L3.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L3.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L3.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L3.p11.n_axle = kcg_lit_int64(0);
  outC->_L3.p11.nIter_tractionIdentity = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 4; idx2++) {
    outC->_L3.p11.tractionIdentity[idx2].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L3.p11.tractionIdentity[idx2].nid_ctraction = kcg_lit_int64(0);
  }
  outC->_L3.p11.nIter_ntc = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->_L3.p11.nid_ntc[idx3] = kcg_lit_int64(0);
  }
  outC->_L2.present = kcg_true;
  outC->_L2.header.present = kcg_true;
  outC->_L2.header.nid_message = kcg_lit_int64(0);
  outC->_L2.header.t_train = kcg_lit_int64(0);
  outC->_L2.header.nid_engine = kcg_lit_int64(0);
  outC->_L2.header.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L2.header.xT_TRAIN = kcg_lit_int64(0);
  outC->_L2.header.xNID_EM = kcg_lit_int64(0);
  outC->_L2.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L2.header.xNID_TEXTMESSAGE = kcg_lit_int64(0);
  outC->_L2.packets.p0.valid = kcg_true;
  outC->_L2.packets.p0.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->_L2.packets.p0.packet0.L_PACKET = kcg_lit_int64(0);
  outC->_L2.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L2.packets.p0.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->_L2.packets.p0.packet0.D_LRBG = kcg_lit_int64(0);
  outC->_L2.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L2.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L2.packets.p0.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L2.packets.p0.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L2.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L2.packets.p0.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->_L2.packets.p0.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->_L2.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L2.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->_L2.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L2.packets.p0.packet0.NID_NTC = kcg_lit_int64(0);
  outC->_L2.packets.p1.valid = kcg_true;
  outC->_L2.packets.p1.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->_L2.packets.p1.packet1.L_PACKET = kcg_lit_int64(0);
  outC->_L2.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L2.packets.p1.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->_L2.packets.p1.packet1.NID_PRVLRBG = kcg_lit_int64(0);
  outC->_L2.packets.p1.packet1.D_LRBG = kcg_lit_int64(0);
  outC->_L2.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L2.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L2.packets.p1.packet1.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L2.packets.p1.packet1.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L2.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L2.packets.p1.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->_L2.packets.p1.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->_L2.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L2.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L2.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L2.packets.p1.packet1.NID_NTC = kcg_lit_int64(0);
  outC->_L2.packets.p3.valid = kcg_true;
  outC->_L2.packets.p3.number = kcg_lit_int64(0);
  for (idx5 = 0; idx5 < 1; idx5++) {
    outC->_L2.packets.p3.aNID_RADIO[idx5].valid = kcg_true;
    for (idx4 = 0; idx4 < 15; idx4++) {
      outC->_L2.packets.p3.aNID_RADIO[idx5].telephoneNumber[idx4] = kcg_lit_int64(0);
    }
  }
  outC->_L2.packets.p4.valid = kcg_true;
  outC->_L2.packets.p4.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L2.packets.p5.valid = kcg_true;
  outC->_L2.packets.p5.TrainRunningNumber = kcg_lit_int64(0);
  outC->_L2.packets.p9.valid = kcg_true;
  outC->_L2.packets.p9.transitionInformation = kcg_lit_int64(0);
  outC->_L2.packets.p11.valid = kcg_true;
  outC->_L2.packets.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L2.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L2.packets.p11.l_train = kcg_lit_int64(0);
  outC->_L2.packets.p11.v_maxtrain = kcg_lit_int64(0);
  outC->_L2.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L2.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L2.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L2.packets.p11.n_axle = kcg_lit_int64(0);
  outC->_L2.packets.p11.nIter_tractionIdentity = kcg_lit_int64(0);
  for (idx6 = 0; idx6 < 4; idx6++) {
    outC->_L2.packets.p11.tractionIdentity[idx6].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L2.packets.p11.tractionIdentity[idx6].nid_ctraction = kcg_lit_int64(0);
  }
  outC->_L2.packets.p11.nIter_ntc = kcg_lit_int64(0);
  for (idx7 = 0; idx7 < 5; idx7++) {
    outC->_L2.packets.p11.nid_ntc[idx7] = kcg_lit_int64(0);
  }
  outC->_L1.nid_lrbg = kcg_lit_int64(0);
  outC->_L1.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.d_lrbg = kcg_lit_int64(0);
  outC->_L1.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L1.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L1.l_doubtover = kcg_lit_int64(0);
  outC->_L1.l_doubtunder = kcg_lit_int64(0);
  outC->_L1.q_length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L1.l_trainint = kcg_lit_int64(0);
  outC->_L1.v_train = kcg_lit_int64(0);
  outC->_L1.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L1.m_mode = M_MODE_Full_Supervision;
  outC->_L1.m_level = M_LEVEL_Level_0;
  outC->_L1.nid_ntc = kcg_lit_int64(0);
  outC->_L1.nid_prvlrbg = kcg_lit_int64(0);
  outC->outPosData.nid_lrbg = kcg_lit_int64(0);
  outC->outPosData.q_scale = Q_SCALE_10_cm_scale;
  outC->outPosData.d_lrbg = kcg_lit_int64(0);
  outC->outPosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->outPosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->outPosData.l_doubtover = kcg_lit_int64(0);
  outC->outPosData.l_doubtunder = kcg_lit_int64(0);
  outC->outPosData.q_length = Q_LENGTH_No_train_integrity_information_available;
  outC->outPosData.l_trainint = kcg_lit_int64(0);
  outC->outPosData.v_train = kcg_lit_int64(0);
  outC->outPosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->outPosData.m_mode = M_MODE_Full_Supervision;
  outC->outPosData.m_level = M_LEVEL_Level_0;
  outC->outPosData.nid_ntc = kcg_lit_int64(0);
  outC->outPosData.nid_prvlrbg = kcg_lit_int64(0);
  /* _L45=(RBC_Session_Pkg::PosData__Set_NID_NTC#1)/ */
  PosData__Set_NID_NTC_init_RBC_Session_Pkg(
    &outC->Context_PosData__Set_NID_NTC_1);
  /* _L22=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_NID_NTC#1)/ */
  RadioTrainTrackPacket000__Get_NID_NTC_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainT(
    &outC->Context_RadioTrainTrackPacket000__Get_NID_NTC_1);
  /* _L44=(RBC_Session_Pkg::PosData__Set_M_LEVEL#1)/ */
  PosData__Set_M_LEVEL_init_RBC_Session_Pkg(
    &outC->Context_PosData__Set_M_LEVEL_1);
  /* _L21=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_M_LEVEL#1)/ */
  RadioTrainTrackPacket000__Get_M_LEVEL_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainT(
    &outC->Context_RadioTrainTrackPacket000__Get_M_LEVEL_1);
  /* _L43=(RBC_Session_Pkg::PosData__Set_M_MODE#1)/ */
  PosData__Set_M_MODE_init_RBC_Session_Pkg(
    &outC->Context_PosData__Set_M_MODE_1);
  /* _L20=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_M_MODE#1)/ */
  RadioTrainTrackPacket000__Get_M_MODE_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTr(
    &outC->Context_RadioTrainTrackPacket000__Get_M_MODE_1);
  /* _L42=(RBC_Session_Pkg::PosData__Set_Q_DIRTRAIN#1)/ */
  PosData__Set_Q_DIRTRAIN_init_RBC_Session_Pkg(
    &outC->Context_PosData__Set_Q_DIRTRAIN_1);
  /* _L18=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_Q_DIRTRAIN#1)/ */
  RadioTrainTrackPacket000__Get_Q_DIRTRAIN_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTra(
    &outC->Context_RadioTrainTrackPacket000__Get_Q_DIRTRAIN_1);
  /* _L41=(RBC_Session_Pkg::PosData__Set_V_TRAIN#1)/ */
  PosData__Set_V_TRAIN_init_RBC_Session_Pkg(
    &outC->Context_PosData__Set_V_TRAIN_1);
  /* _L19=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_V_TRAIN#1)/ */
  RadioTrainTrackPacket000__Get_V_TRAIN_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainT(
    &outC->Context_RadioTrainTrackPacket000__Get_V_TRAIN_1);
  /* _L40=(RBC_Session_Pkg::PosData__Set_L_TRAININT#1)/ */
  PosData__Set_L_TRAININT_init_RBC_Session_Pkg(
    &outC->Context_PosData__Set_L_TRAININT_1);
  /* _L17=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_L_TRAININT#1)/ */
  RadioTrainTrackPacket000__Get_L_TRAININT_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTra(
    &outC->Context_RadioTrainTrackPacket000__Get_L_TRAININT_1);
  /* _L37=(RBC_Session_Pkg::PosData__Set_Q_LENGTH#1)/ */
  PosData__Set_Q_LENGTH_init_RBC_Session_Pkg(
    &outC->Context_PosData__Set_Q_LENGTH_1);
  /* _L16=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_Q_LENGTH#1)/ */
  RadioTrainTrackPacket000__Get_Q_LENGTH_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrain(
    &outC->Context_RadioTrainTrackPacket000__Get_Q_LENGTH_1);
  /* _L36=(RBC_Session_Pkg::PosData__Set_L_DOUBTUNDER#1)/ */
  PosData__Set_L_DOUBTUNDER_init_RBC_Session_Pkg(
    &outC->Context_PosData__Set_L_DOUBTUNDER_1);
  /* _L15=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_L_DOUBTUNDER#1)/ */
  RadioTrainTrackPacket000__Get_L_DOUBTUNDER_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioT(
    &outC->Context_RadioTrainTrackPacket000__Get_L_DOUBTUNDER_1);
  /* _L35=(RBC_Session_Pkg::PosData__Set_L_DOUBTOVER#1)/ */
  PosData__Set_L_DOUBTOVER_init_RBC_Session_Pkg(
    &outC->Context_PosData__Set_L_DOUBTOVER_1);
  /* _L14=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_L_DOUBTOVER#1)/ */
  RadioTrainTrackPacket000__Get_L_DOUBTOVER_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTr(
    &outC->Context_RadioTrainTrackPacket000__Get_L_DOUBTOVER_1);
  /* _L32=(RBC_Session_Pkg::PosData__Set_Q_DLRBG#1)/ */
  PosData__Set_Q_DLRBG_init_RBC_Session_Pkg(
    &outC->Context_PosData__Set_Q_DLRBG_1);
  /* _L13=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_Q_DLRBG#1)/ */
  RadioTrainTrackPacket000__Get_Q_DLRBG_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainT(
    &outC->Context_RadioTrainTrackPacket000__Get_Q_DLRBG_1);
  /* _L26=(RBC_Session_Pkg::PosData__Set_Q_DIRLRBG#1)/ */
  PosData__Set_Q_DIRLRBG_init_RBC_Session_Pkg(
    &outC->Context_PosData__Set_Q_DIRLRBG_1);
  /* _L12=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_Q_DIRLRBG#1)/ */
  RadioTrainTrackPacket000__Get_Q_DIRLRBG_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrai(
    &outC->Context_RadioTrainTrackPacket000__Get_Q_DIRLRBG_1);
  /* _L23=(RBC_Session_Pkg::PosData__Set_D_LRBG#1)/ */
  PosData__Set_D_LRBG_init_RBC_Session_Pkg(
    &outC->Context_PosData__Set_D_LRBG_1);
  /* _L11=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_D_LRBG#1)/ */
  RadioTrainTrackPacket000__Get_D_LRBG_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTr(
    &outC->Context_RadioTrainTrackPacket000__Get_D_LRBG_1);
  /* _L6=(RBC_Session_Pkg::PosData__Set_NID_LRBG#1)/ */
  PosData__Set_NID_LRBG_init_RBC_Session_Pkg(
    &outC->Context_PosData__Set_NID_LRBG_1);
  /* _L5=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_NID_LRBG#1)/ */
  RadioTrainTrackPacket000__Get_NID_LRBG_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrain(
    &outC->Context_RadioTrainTrackPacket000__Get_NID_LRBG_1);
  /* _L7=(RBC_Session_Pkg::PosData__Set_Q_SCALE#1)/ */
  PosData__Set_Q_SCALE_init_RBC_Session_Pkg(
    &outC->Context_PosData__Set_Q_SCALE_1);
  /* _L10=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_Q_SCALE#1)/ */
  RadioTrainTrackPacket000__Get_Q_SCALE_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainT(
    &outC->Context_RadioTrainTrackPacket000__Get_Q_SCALE_1);
  /* _L4=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP000#1)/ */
  RadioTrainTrackPackets__GetP000_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackPackets__GetP000_1);
  /* _L3=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetPackets#1)/ */
  RadioTrainTrackMessage__GetPackets_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackMessage__GetPackets_1);
}
#endif /* KCG_USER_DEFINED_INIT */


void PosData__UpdateWithP000_reset_RBC_Session_Pkg(
  outC_PosData__UpdateWithP000_RBC_Session_Pkg *outC)
{
  /* _L45=(RBC_Session_Pkg::PosData__Set_NID_NTC#1)/ */
  PosData__Set_NID_NTC_reset_RBC_Session_Pkg(
    &outC->Context_PosData__Set_NID_NTC_1);
  /* _L22=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_NID_NTC#1)/ */
  RadioTrainTrackPacket000__Get_NID_NTC_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrain(
    &outC->Context_RadioTrainTrackPacket000__Get_NID_NTC_1);
  /* _L44=(RBC_Session_Pkg::PosData__Set_M_LEVEL#1)/ */
  PosData__Set_M_LEVEL_reset_RBC_Session_Pkg(
    &outC->Context_PosData__Set_M_LEVEL_1);
  /* _L21=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_M_LEVEL#1)/ */
  RadioTrainTrackPacket000__Get_M_LEVEL_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrain(
    &outC->Context_RadioTrainTrackPacket000__Get_M_LEVEL_1);
  /* _L43=(RBC_Session_Pkg::PosData__Set_M_MODE#1)/ */
  PosData__Set_M_MODE_reset_RBC_Session_Pkg(
    &outC->Context_PosData__Set_M_MODE_1);
  /* _L20=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_M_MODE#1)/ */
  RadioTrainTrackPacket000__Get_M_MODE_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainT(
    &outC->Context_RadioTrainTrackPacket000__Get_M_MODE_1);
  /* _L42=(RBC_Session_Pkg::PosData__Set_Q_DIRTRAIN#1)/ */
  PosData__Set_Q_DIRTRAIN_reset_RBC_Session_Pkg(
    &outC->Context_PosData__Set_Q_DIRTRAIN_1);
  /* _L18=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_Q_DIRTRAIN#1)/ */
  RadioTrainTrackPacket000__Get_Q_DIRTRAIN_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTr(
    &outC->Context_RadioTrainTrackPacket000__Get_Q_DIRTRAIN_1);
  /* _L41=(RBC_Session_Pkg::PosData__Set_V_TRAIN#1)/ */
  PosData__Set_V_TRAIN_reset_RBC_Session_Pkg(
    &outC->Context_PosData__Set_V_TRAIN_1);
  /* _L19=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_V_TRAIN#1)/ */
  RadioTrainTrackPacket000__Get_V_TRAIN_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrain(
    &outC->Context_RadioTrainTrackPacket000__Get_V_TRAIN_1);
  /* _L40=(RBC_Session_Pkg::PosData__Set_L_TRAININT#1)/ */
  PosData__Set_L_TRAININT_reset_RBC_Session_Pkg(
    &outC->Context_PosData__Set_L_TRAININT_1);
  /* _L17=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_L_TRAININT#1)/ */
  RadioTrainTrackPacket000__Get_L_TRAININT_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTr(
    &outC->Context_RadioTrainTrackPacket000__Get_L_TRAININT_1);
  /* _L37=(RBC_Session_Pkg::PosData__Set_Q_LENGTH#1)/ */
  PosData__Set_Q_LENGTH_reset_RBC_Session_Pkg(
    &outC->Context_PosData__Set_Q_LENGTH_1);
  /* _L16=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_Q_LENGTH#1)/ */
  RadioTrainTrackPacket000__Get_Q_LENGTH_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrai(
    &outC->Context_RadioTrainTrackPacket000__Get_Q_LENGTH_1);
  /* _L36=(RBC_Session_Pkg::PosData__Set_L_DOUBTUNDER#1)/ */
  PosData__Set_L_DOUBTUNDER_reset_RBC_Session_Pkg(
    &outC->Context_PosData__Set_L_DOUBTUNDER_1);
  /* _L15=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_L_DOUBTUNDER#1)/ */
  RadioTrainTrackPacket000__Get_L_DOUBTUNDER_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_Radio(
    &outC->Context_RadioTrainTrackPacket000__Get_L_DOUBTUNDER_1);
  /* _L35=(RBC_Session_Pkg::PosData__Set_L_DOUBTOVER#1)/ */
  PosData__Set_L_DOUBTOVER_reset_RBC_Session_Pkg(
    &outC->Context_PosData__Set_L_DOUBTOVER_1);
  /* _L14=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_L_DOUBTOVER#1)/ */
  RadioTrainTrackPacket000__Get_L_DOUBTOVER_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioT(
    &outC->Context_RadioTrainTrackPacket000__Get_L_DOUBTOVER_1);
  /* _L32=(RBC_Session_Pkg::PosData__Set_Q_DLRBG#1)/ */
  PosData__Set_Q_DLRBG_reset_RBC_Session_Pkg(
    &outC->Context_PosData__Set_Q_DLRBG_1);
  /* _L13=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_Q_DLRBG#1)/ */
  RadioTrainTrackPacket000__Get_Q_DLRBG_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrain(
    &outC->Context_RadioTrainTrackPacket000__Get_Q_DLRBG_1);
  /* _L26=(RBC_Session_Pkg::PosData__Set_Q_DIRLRBG#1)/ */
  PosData__Set_Q_DIRLRBG_reset_RBC_Session_Pkg(
    &outC->Context_PosData__Set_Q_DIRLRBG_1);
  /* _L12=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_Q_DIRLRBG#1)/ */
  RadioTrainTrackPacket000__Get_Q_DIRLRBG_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTra(
    &outC->Context_RadioTrainTrackPacket000__Get_Q_DIRLRBG_1);
  /* _L23=(RBC_Session_Pkg::PosData__Set_D_LRBG#1)/ */
  PosData__Set_D_LRBG_reset_RBC_Session_Pkg(
    &outC->Context_PosData__Set_D_LRBG_1);
  /* _L11=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_D_LRBG#1)/ */
  RadioTrainTrackPacket000__Get_D_LRBG_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainT(
    &outC->Context_RadioTrainTrackPacket000__Get_D_LRBG_1);
  /* _L6=(RBC_Session_Pkg::PosData__Set_NID_LRBG#1)/ */
  PosData__Set_NID_LRBG_reset_RBC_Session_Pkg(
    &outC->Context_PosData__Set_NID_LRBG_1);
  /* _L5=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_NID_LRBG#1)/ */
  RadioTrainTrackPacket000__Get_NID_LRBG_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrai(
    &outC->Context_RadioTrainTrackPacket000__Get_NID_LRBG_1);
  /* _L7=(RBC_Session_Pkg::PosData__Set_Q_SCALE#1)/ */
  PosData__Set_Q_SCALE_reset_RBC_Session_Pkg(
    &outC->Context_PosData__Set_Q_SCALE_1);
  /* _L10=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_Q_SCALE#1)/ */
  RadioTrainTrackPacket000__Get_Q_SCALE_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrain(
    &outC->Context_RadioTrainTrackPacket000__Get_Q_SCALE_1);
  /* _L4=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP000#1)/ */
  RadioTrainTrackPackets__GetP000_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackPackets__GetP000_1);
  /* _L3=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetPackets#1)/ */
  RadioTrainTrackMessage__GetPackets_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackMessage__GetPackets_1);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** PosData__UpdateWithP000_RBC_Session_Pkg.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

