/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "nextGen_P00_radioOutput_Pkg.h"

/* radioOutput_Pkg::nextGen_P00/ */
void nextGen_P00_radioOutput_Pkg(
  /* inP0/ */
  PT0_PositionReport_T_Packet_TrainTypes_Pkg *inP0,
  outC_nextGen_P00_radioOutput_Pkg *outC)
{
  static kcg_int32 noname;

  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&outC->_L1, inP0);
  kcg_copy_Position_Report_TrainToTrack(&outC->_L36, &outC->_L1.packet0);
  outC->_L33 = outC->_L36.L_PACKET;
  noname = outC->_L33;
  outC->_L35 = outC->_L1.valid;
  outC->_L34 = outC->_L36.NID_PACKET;
  outC->_L32 = outC->_L36.qscale;
  outC->_L31 = outC->_L36.NID_LRBG;
  outC->_L30 = outC->_L36.D_LRBG;
  outC->_L29 = outC->_L36.dirlrbg;
  outC->_L28 = outC->_L36.dlrbg;
  outC->_L27 = outC->_L36.L_DOUBTOVER;
  outC->_L26 = outC->_L36.L_DOUBTUNDER;
  outC->_L25 = outC->_L36.length;
  outC->_L24 = outC->_L36.L_TRAININT;
  outC->_L23 = outC->_L36.V_TRAIN;
  outC->_L22 = outC->_L36.dirtrain;
  outC->_L21 = outC->_L36.mode;
  outC->_L20 = outC->_L36.level;
  outC->_L19 = outC->_L36.NID_NTC;
  outC->_L12 = kcg_lit_int32(0);
  outC->_L2.valid = outC->_L35;
  outC->_L2.nid_packet = outC->_L34;
  outC->_L2.l_packet = outC->_L12;
  outC->_L2.q_scale = outC->_L32;
  outC->_L2.nid_lrbg = outC->_L31;
  outC->_L2.d_lrbg = outC->_L30;
  outC->_L2.q_dirlrbg = outC->_L29;
  outC->_L2.q_dlrbg = outC->_L28;
  outC->_L2.l_doubtover = outC->_L27;
  outC->_L2.l_doubtunder = outC->_L26;
  outC->_L2.q_length = outC->_L25;
  outC->_L2.l_trainint = outC->_L24;
  outC->_L2.v_train = outC->_L23;
  outC->_L2.q_dirtrain = outC->_L22;
  outC->_L2.m_mode = outC->_L21;
  outC->_L2.m_level = outC->_L20;
  outC->_L2.nid_ntc = outC->_L19;
  kcg_copy_P000_TM_TrainToTrack(&outC->outP0, &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void nextGen_P00_init_radioOutput_Pkg(outC_nextGen_P00_radioOutput_Pkg *outC)
{
  outC->_L36.NID_PACKET = kcg_lit_int32(0);
  outC->_L36.L_PACKET = kcg_lit_int32(0);
  outC->_L36.qscale = Q_SCALE_10_cm_scale;
  outC->_L36.NID_LRBG = kcg_lit_int32(0);
  outC->_L36.D_LRBG = kcg_lit_int32(0);
  outC->_L36.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L36.dlrbg = Q_DLRBG_Reverse;
  outC->_L36.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L36.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L36.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L36.L_TRAININT = kcg_lit_int32(0);
  outC->_L36.V_TRAIN = kcg_lit_int32(0);
  outC->_L36.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L36.mode = M_MODE_Full_Supervision;
  outC->_L36.level = M_LEVEL_Level_0;
  outC->_L36.NID_NTC = kcg_lit_int32(0);
  outC->_L35 = kcg_true;
  outC->_L19 = kcg_lit_int32(0);
  outC->_L20 = M_LEVEL_Level_0;
  outC->_L21 = M_MODE_Full_Supervision;
  outC->_L22 = Q_DIRTRAIN_Reverse;
  outC->_L23 = kcg_lit_int32(0);
  outC->_L24 = kcg_lit_int32(0);
  outC->_L25 = Q_LENGTH_No_train_integrity_information_available;
  outC->_L26 = kcg_lit_int32(0);
  outC->_L27 = kcg_lit_int32(0);
  outC->_L28 = Q_DLRBG_Reverse;
  outC->_L29 = Q_DIRLRBG_Reverse;
  outC->_L30 = kcg_lit_int32(0);
  outC->_L31 = kcg_lit_int32(0);
  outC->_L32 = Q_SCALE_10_cm_scale;
  outC->_L33 = kcg_lit_int32(0);
  outC->_L34 = kcg_lit_int32(0);
  outC->_L12 = kcg_lit_int32(0);
  outC->_L2.valid = kcg_true;
  outC->_L2.nid_packet = kcg_lit_int32(0);
  outC->_L2.l_packet = kcg_lit_int32(0);
  outC->_L2.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2.nid_lrbg = kcg_lit_int32(0);
  outC->_L2.d_lrbg = kcg_lit_int32(0);
  outC->_L2.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L2.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L2.l_doubtover = kcg_lit_int32(0);
  outC->_L2.l_doubtunder = kcg_lit_int32(0);
  outC->_L2.q_length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L2.l_trainint = kcg_lit_int32(0);
  outC->_L2.v_train = kcg_lit_int32(0);
  outC->_L2.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L2.m_mode = M_MODE_Full_Supervision;
  outC->_L2.m_level = M_LEVEL_Level_0;
  outC->_L2.nid_ntc = kcg_lit_int32(0);
  outC->_L1.valid = kcg_true;
  outC->_L1.packet0.NID_PACKET = kcg_lit_int32(0);
  outC->_L1.packet0.L_PACKET = kcg_lit_int32(0);
  outC->_L1.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L1.packet0.NID_LRBG = kcg_lit_int32(0);
  outC->_L1.packet0.D_LRBG = kcg_lit_int32(0);
  outC->_L1.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L1.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L1.packet0.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L1.packet0.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L1.packet0.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L1.packet0.L_TRAININT = kcg_lit_int32(0);
  outC->_L1.packet0.V_TRAIN = kcg_lit_int32(0);
  outC->_L1.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L1.packet0.mode = M_MODE_Full_Supervision;
  outC->_L1.packet0.level = M_LEVEL_Level_0;
  outC->_L1.packet0.NID_NTC = kcg_lit_int32(0);
  outC->outP0.valid = kcg_true;
  outC->outP0.nid_packet = kcg_lit_int32(0);
  outC->outP0.l_packet = kcg_lit_int32(0);
  outC->outP0.q_scale = Q_SCALE_10_cm_scale;
  outC->outP0.nid_lrbg = kcg_lit_int32(0);
  outC->outP0.d_lrbg = kcg_lit_int32(0);
  outC->outP0.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->outP0.q_dlrbg = Q_DLRBG_Reverse;
  outC->outP0.l_doubtover = kcg_lit_int32(0);
  outC->outP0.l_doubtunder = kcg_lit_int32(0);
  outC->outP0.q_length = Q_LENGTH_No_train_integrity_information_available;
  outC->outP0.l_trainint = kcg_lit_int32(0);
  outC->outP0.v_train = kcg_lit_int32(0);
  outC->outP0.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->outP0.m_mode = M_MODE_Full_Supervision;
  outC->outP0.m_level = M_LEVEL_Level_0;
  outC->outP0.nid_ntc = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void nextGen_P00_reset_radioOutput_Pkg(outC_nextGen_P00_radioOutput_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** nextGen_P00_radioOutput_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

