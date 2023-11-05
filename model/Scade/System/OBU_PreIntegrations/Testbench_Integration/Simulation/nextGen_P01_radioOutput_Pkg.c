/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "nextGen_P01_radioOutput_Pkg.h"

/* radioOutput_Pkg::nextGen_P01/ */
void nextGen_P01_radioOutput_Pkg(
  /* inP1/ */
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *inP1,
  outC_nextGen_P01_radioOutput_Pkg *outC)
{
  static kcg_int32 noname;

  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(&outC->_L1, inP1);
  kcg_copy_Position_Report_based_on_two_balise_groups_TrainToTrack(
    &outC->_L36,
    &outC->_L1.packet1);
  outC->_L33 = outC->_L36.L_PACKET;
  noname = outC->_L33;
  outC->_L35 = outC->_L1.valid;
  outC->_L34 = outC->_L36.NID_PACKET;
  outC->_L32 = outC->_L36.qscale;
  outC->_L31 = outC->_L36.NID_LRBG;
  outC->_L30 = outC->_L36.NID_PRVLRBG;
  outC->_L29 = outC->_L36.D_LRBG;
  outC->_L28 = outC->_L36.dirlrbg;
  outC->_L27 = outC->_L36.dlrbg;
  outC->_L26 = outC->_L36.L_DOUBTOVER;
  outC->_L25 = outC->_L36.L_DOUBTUNDER;
  outC->_L24 = outC->_L36.length;
  outC->_L23 = outC->_L36.L_TRAININT;
  outC->_L22 = outC->_L36.V_TRAIN;
  outC->_L21 = outC->_L36.dirtrain;
  outC->_L20 = outC->_L36.mode;
  outC->_L19 = outC->_L36.level;
  outC->_L37 = outC->_L36.NID_NTC;
  outC->_L12 = kcg_lit_int32(0);
  outC->_L2.valid = outC->_L35;
  outC->_L2.nid_packet = outC->_L34;
  outC->_L2.l_packet = outC->_L12;
  outC->_L2.q_scale = outC->_L32;
  outC->_L2.nid_lrbg = outC->_L31;
  outC->_L2.nid_prvlrbg = outC->_L30;
  outC->_L2.d_lrbg = outC->_L29;
  outC->_L2.q_dirlrbg = outC->_L28;
  outC->_L2.q_dlrbg = outC->_L27;
  outC->_L2.l_doubtover = outC->_L26;
  outC->_L2.l_doubtunder = outC->_L25;
  outC->_L2.q_length = outC->_L24;
  outC->_L2.l_trainint = outC->_L23;
  outC->_L2.v_train = outC->_L22;
  outC->_L2.q_dirtrain = outC->_L21;
  outC->_L2.m_mode = outC->_L20;
  outC->_L2.m_level = outC->_L19;
  outC->_L2.nid_ntc = outC->_L37;
  kcg_copy_P001_TM_TrainToTrack(&outC->outP1, &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void nextGen_P01_init_radioOutput_Pkg(outC_nextGen_P01_radioOutput_Pkg *outC)
{
  outC->_L37 = kcg_lit_int32(0);
  outC->_L36.NID_PACKET = kcg_lit_int32(0);
  outC->_L36.L_PACKET = kcg_lit_int32(0);
  outC->_L36.qscale = Q_SCALE_10_cm_scale;
  outC->_L36.NID_LRBG = kcg_lit_int32(0);
  outC->_L36.NID_PRVLRBG = kcg_lit_int32(0);
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
  outC->_L19 = M_LEVEL_Level_0;
  outC->_L20 = M_MODE_Full_Supervision;
  outC->_L21 = Q_DIRTRAIN_Reverse;
  outC->_L22 = kcg_lit_int32(0);
  outC->_L23 = kcg_lit_int32(0);
  outC->_L24 = Q_LENGTH_No_train_integrity_information_available;
  outC->_L25 = kcg_lit_int32(0);
  outC->_L26 = kcg_lit_int32(0);
  outC->_L27 = Q_DLRBG_Reverse;
  outC->_L28 = Q_DIRLRBG_Reverse;
  outC->_L29 = kcg_lit_int32(0);
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
  outC->_L2.nid_prvlrbg = kcg_lit_int32(0);
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
  outC->_L1.packet1.NID_PACKET = kcg_lit_int32(0);
  outC->_L1.packet1.L_PACKET = kcg_lit_int32(0);
  outC->_L1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L1.packet1.NID_LRBG = kcg_lit_int32(0);
  outC->_L1.packet1.NID_PRVLRBG = kcg_lit_int32(0);
  outC->_L1.packet1.D_LRBG = kcg_lit_int32(0);
  outC->_L1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L1.packet1.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L1.packet1.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L1.packet1.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L1.packet1.L_TRAININT = kcg_lit_int32(0);
  outC->_L1.packet1.V_TRAIN = kcg_lit_int32(0);
  outC->_L1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L1.packet1.level = M_LEVEL_Level_0;
  outC->_L1.packet1.NID_NTC = kcg_lit_int32(0);
  outC->outP1.valid = kcg_true;
  outC->outP1.nid_packet = kcg_lit_int32(0);
  outC->outP1.l_packet = kcg_lit_int32(0);
  outC->outP1.q_scale = Q_SCALE_10_cm_scale;
  outC->outP1.nid_lrbg = kcg_lit_int32(0);
  outC->outP1.nid_prvlrbg = kcg_lit_int32(0);
  outC->outP1.d_lrbg = kcg_lit_int32(0);
  outC->outP1.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->outP1.q_dlrbg = Q_DLRBG_Reverse;
  outC->outP1.l_doubtover = kcg_lit_int32(0);
  outC->outP1.l_doubtunder = kcg_lit_int32(0);
  outC->outP1.q_length = Q_LENGTH_No_train_integrity_information_available;
  outC->outP1.l_trainint = kcg_lit_int32(0);
  outC->outP1.v_train = kcg_lit_int32(0);
  outC->outP1.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->outP1.m_mode = M_MODE_Full_Supervision;
  outC->outP1.m_level = M_LEVEL_Level_0;
  outC->outP1.nid_ntc = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void nextGen_P01_reset_radioOutput_Pkg(outC_nextGen_P01_radioOutput_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** nextGen_P01_radioOutput_Pkg.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

