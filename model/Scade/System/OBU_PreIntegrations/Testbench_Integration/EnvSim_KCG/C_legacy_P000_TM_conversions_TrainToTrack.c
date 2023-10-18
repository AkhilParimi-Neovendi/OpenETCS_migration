/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_legacy_P000_TM_conversions_TrainToTrack.h"

/* TM_conversions_TrainToTrack::C_legacy_P000/ */
void C_legacy_P000_TM_conversions_TrainToTrack(
  /* legacy_in/ */
  PT0_PositionReport_T_Packet_TrainTypes_Pkg *legacy_in,
  outC_C_legacy_P000_TM_conversions_TrainToTrack *outC)
{
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&outC->_L1, legacy_in);
  kcg_copy_Position_Report_TrainToTrack(&outC->_L3, &outC->_L1.packet0);
  outC->_L23 = outC->_L3.NID_PACKET;
  outC->_L24 = outC->_L3.L_PACKET;
  outC->_L25 = outC->_L3.qscale;
  outC->_L26 = outC->_L3.NID_LRBG;
  outC->_L27 = outC->_L3.D_LRBG;
  outC->_L28 = outC->_L3.dirlrbg;
  outC->_L29 = outC->_L3.dlrbg;
  outC->_L30 = outC->_L3.L_DOUBTOVER;
  outC->_L31 = outC->_L3.L_DOUBTUNDER;
  outC->_L32 = outC->_L3.length;
  outC->_L33 = outC->_L3.L_TRAININT;
  outC->_L34 = outC->_L3.V_TRAIN;
  outC->_L35 = outC->_L3.dirtrain;
  outC->_L36 = outC->_L3.mode;
  outC->_L37 = outC->_L3.level;
  outC->_L38 = outC->_L3.NID_NTC;
  outC->_L2 = outC->_L1.valid;
  outC->_L6.valid = outC->_L2;
  outC->_L6.nid_packet = outC->_L23;
  outC->_L6.l_packet = outC->_L24;
  outC->_L6.q_scale = outC->_L25;
  outC->_L6.nid_lrbg = outC->_L26;
  outC->_L6.d_lrbg = outC->_L27;
  outC->_L6.q_dirlrbg = outC->_L28;
  outC->_L6.q_dlrbg = outC->_L29;
  outC->_L6.l_doubtover = outC->_L30;
  outC->_L6.l_doubtunder = outC->_L31;
  outC->_L6.q_length = outC->_L32;
  outC->_L6.l_trainint = outC->_L33;
  outC->_L6.v_train = outC->_L34;
  outC->_L6.q_dirtrain = outC->_L35;
  outC->_L6.m_mode = outC->_L36;
  outC->_L6.m_level = outC->_L37;
  outC->_L6.nid_ntc = outC->_L38;
  kcg_copy_P000_TM_TrainToTrack(&outC->p, &outC->_L6);
}

#ifndef KCG_USER_DEFINED_INIT
void C_legacy_P000_init_TM_conversions_TrainToTrack(
  outC_C_legacy_P000_TM_conversions_TrainToTrack *outC)
{
  outC->_L23 = kcg_lit_int64(0);
  outC->_L24 = kcg_lit_int64(0);
  outC->_L25 = Q_SCALE_10_cm_scale;
  outC->_L26 = kcg_lit_int64(0);
  outC->_L27 = kcg_lit_int64(0);
  outC->_L28 = Q_DIRLRBG_Reverse;
  outC->_L29 = Q_DLRBG_Reverse;
  outC->_L30 = kcg_lit_int64(0);
  outC->_L31 = kcg_lit_int64(0);
  outC->_L32 = Q_LENGTH_No_train_integrity_information_available;
  outC->_L33 = kcg_lit_int64(0);
  outC->_L34 = kcg_lit_int64(0);
  outC->_L35 = Q_DIRTRAIN_Reverse;
  outC->_L36 = M_MODE_Full_Supervision;
  outC->_L37 = M_LEVEL_Level_0;
  outC->_L38 = kcg_lit_int64(0);
  outC->_L6.valid = kcg_true;
  outC->_L6.nid_packet = kcg_lit_int64(0);
  outC->_L6.l_packet = kcg_lit_int64(0);
  outC->_L6.q_scale = Q_SCALE_10_cm_scale;
  outC->_L6.nid_lrbg = kcg_lit_int64(0);
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
  outC->_L2 = kcg_true;
  outC->_L3.NID_PACKET = kcg_lit_int64(0);
  outC->_L3.L_PACKET = kcg_lit_int64(0);
  outC->_L3.qscale = Q_SCALE_10_cm_scale;
  outC->_L3.NID_LRBG = kcg_lit_int64(0);
  outC->_L3.D_LRBG = kcg_lit_int64(0);
  outC->_L3.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L3.dlrbg = Q_DLRBG_Reverse;
  outC->_L3.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L3.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L3.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L3.L_TRAININT = kcg_lit_int64(0);
  outC->_L3.V_TRAIN = kcg_lit_int64(0);
  outC->_L3.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L3.mode = M_MODE_Full_Supervision;
  outC->_L3.level = M_LEVEL_Level_0;
  outC->_L3.NID_NTC = kcg_lit_int64(0);
  outC->_L1.valid = kcg_true;
  outC->_L1.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->_L1.packet0.L_PACKET = kcg_lit_int64(0);
  outC->_L1.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L1.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->_L1.packet0.D_LRBG = kcg_lit_int64(0);
  outC->_L1.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L1.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L1.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L1.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L1.packet0.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L1.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->_L1.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->_L1.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L1.packet0.mode = M_MODE_Full_Supervision;
  outC->_L1.packet0.level = M_LEVEL_Level_0;
  outC->_L1.packet0.NID_NTC = kcg_lit_int64(0);
  outC->p.valid = kcg_true;
  outC->p.nid_packet = kcg_lit_int64(0);
  outC->p.l_packet = kcg_lit_int64(0);
  outC->p.q_scale = Q_SCALE_10_cm_scale;
  outC->p.nid_lrbg = kcg_lit_int64(0);
  outC->p.d_lrbg = kcg_lit_int64(0);
  outC->p.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->p.q_dlrbg = Q_DLRBG_Reverse;
  outC->p.l_doubtover = kcg_lit_int64(0);
  outC->p.l_doubtunder = kcg_lit_int64(0);
  outC->p.q_length = Q_LENGTH_No_train_integrity_information_available;
  outC->p.l_trainint = kcg_lit_int64(0);
  outC->p.v_train = kcg_lit_int64(0);
  outC->p.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->p.m_mode = M_MODE_Full_Supervision;
  outC->p.m_level = M_LEVEL_Level_0;
  outC->p.nid_ntc = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_legacy_P000_reset_TM_conversions_TrainToTrack(
  outC_C_legacy_P000_TM_conversions_TrainToTrack *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_legacy_P000_TM_conversions_TrainToTrack.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

