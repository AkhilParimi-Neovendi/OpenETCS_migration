/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ConvertP000_RBC_Model_Pkg_TrainTrackMsgConversion.h"

/* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP000/ */
void ConvertP000_RBC_Model_Pkg_TrainTrackMsgConversion(
  /* newP000/ */
  P000_TM_TrainToTrack *newP000,
  outC_ConvertP000_RBC_Model_Pkg_TrainTrackMsgConversion *outC)
{
  kcg_copy_P000_TM_TrainToTrack(&outC->_L1, newP000);
  outC->_L2 = outC->_L1.nid_ntc;
  /* _L32=(TM_conversions::CAST_NID_NTC_to_int#1)/ */
  CAST_NID_NTC_to_int_TM_conversions(
    outC->_L2,
    &outC->Context_CAST_NID_NTC_to_int_1);
  outC->_L32 = outC->Context_CAST_NID_NTC_to_int_1.nid_ntc_int;
  outC->_L6 = outC->_L1.v_train;
  /* _L31=(TM_conversions::CAST_V_TRAIN_to_int#1)/ */
  CAST_V_TRAIN_to_int_TM_conversions(
    outC->_L6,
    &outC->Context_CAST_V_TRAIN_to_int_1);
  outC->_L31 = outC->Context_CAST_V_TRAIN_to_int_1.v_train_int;
  outC->_L7 = outC->_L1.l_trainint;
  /* _L30=(TM_conversions::CAST_L_TRAININT_to_int#1)/ */
  CAST_L_TRAININT_to_int_TM_conversions(
    outC->_L7,
    &outC->Context_CAST_L_TRAININT_to_int_1);
  outC->_L30 = outC->Context_CAST_L_TRAININT_to_int_1.l_trainint_int;
  outC->_L9 = outC->_L1.l_doubtunder;
  /* _L29=(TM_conversions::CAST_L_DOUBTUNDER_to_int#1)/ */
  CAST_L_DOUBTUNDER_to_int_TM_conversions(
    outC->_L9,
    &outC->Context_CAST_L_DOUBTUNDER_to_int_1);
  outC->_L29 = outC->Context_CAST_L_DOUBTUNDER_to_int_1.l_doubtunder_int;
  outC->_L10 = outC->_L1.l_doubtover;
  /* _L28=(TM_conversions::CAST_L_DOUBTOVER_to_int#1)/ */
  CAST_L_DOUBTOVER_to_int_TM_conversions(
    outC->_L10,
    &outC->Context_CAST_L_DOUBTOVER_to_int_1);
  outC->_L28 = outC->Context_CAST_L_DOUBTOVER_to_int_1.l_doubtiver_int;
  outC->_L13 = outC->_L1.d_lrbg;
  /* _L26=(TM_conversions::CAST_D_LRBG_to_int#1)/ */
  CAST_D_LRBG_to_int_TM_conversions(
    outC->_L13,
    &outC->Context_CAST_D_LRBG_to_int_1);
  outC->_L26 = outC->Context_CAST_D_LRBG_to_int_1.d_lrbg_int;
  outC->_L14 = outC->_L1.nid_lrbg;
  /* _L25=(TM_conversions::CAST_NID_LRBG_to_int#1)/ */
  CAST_NID_LRBG_to_int_TM_conversions(
    outC->_L14,
    &outC->Context_CAST_NID_LRBG_to_int_1);
  outC->_L25 = outC->Context_CAST_NID_LRBG_to_int_1.nid_lrbg_int;
  outC->_L16 = outC->_L1.l_packet;
  /* _L23=(TM_conversions::CAST_L_PACKET_to_int#1)/ */
  CAST_L_PACKET_to_int_TM_conversions(
    outC->_L16,
    &outC->Context_CAST_L_PACKET_to_int_1);
  outC->_L23 = outC->Context_CAST_L_PACKET_to_int_1.l_packet_int;
  outC->_L17 = outC->_L1.nid_packet;
  /* _L22=(TM_conversions::CAST_NID_PACKET_to_int#1)/ */
  CAST_NID_PACKET_to_int_TM_conversions(
    outC->_L17,
    &outC->Context_CAST_NID_PACKET_to_int_1);
  outC->_L22 = outC->Context_CAST_NID_PACKET_to_int_1.nid_packet_int;
  outC->_L15 = outC->_L1.q_scale;
  outC->_L12 = outC->_L1.q_dirlrbg;
  outC->_L11 = outC->_L1.q_dlrbg;
  outC->_L8 = outC->_L1.q_length;
  outC->_L5 = outC->_L1.q_dirtrain;
  outC->_L4 = outC->_L1.m_mode;
  outC->_L3 = outC->_L1.m_level;
  outC->_L20.NID_PACKET = outC->_L22;
  outC->_L20.L_PACKET = outC->_L23;
  outC->_L20.qscale = outC->_L15;
  outC->_L20.NID_LRBG = outC->_L25;
  outC->_L20.D_LRBG = outC->_L26;
  outC->_L20.dirlrbg = outC->_L12;
  outC->_L20.dlrbg = outC->_L11;
  outC->_L20.L_DOUBTOVER = outC->_L28;
  outC->_L20.L_DOUBTUNDER = outC->_L29;
  outC->_L20.length = outC->_L8;
  outC->_L20.L_TRAININT = outC->_L30;
  outC->_L20.V_TRAIN = outC->_L31;
  outC->_L20.dirtrain = outC->_L5;
  outC->_L20.mode = outC->_L4;
  outC->_L20.level = outC->_L3;
  outC->_L20.NID_NTC = outC->_L32;
  outC->_L18 = outC->_L1.valid;
  outC->_L19.valid = outC->_L18;
  kcg_copy_Position_Report_TrainToTrack(&outC->_L19.packet0, &outC->_L20);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
    &outC->oldP000,
    &outC->_L19);
}

#ifndef KCG_USER_DEFINED_INIT
void ConvertP000_init_RBC_Model_Pkg_TrainTrackMsgConversion(
  outC_ConvertP000_RBC_Model_Pkg_TrainTrackMsgConversion *outC)
{
  outC->_L32 = kcg_lit_int64(0);
  outC->_L31 = kcg_lit_int64(0);
  outC->_L30 = kcg_lit_int64(0);
  outC->_L29 = kcg_lit_int64(0);
  outC->_L28 = kcg_lit_int64(0);
  outC->_L26 = kcg_lit_int64(0);
  outC->_L25 = kcg_lit_int64(0);
  outC->_L23 = kcg_lit_int64(0);
  outC->_L22 = kcg_lit_int64(0);
  outC->_L20.NID_PACKET = kcg_lit_int64(0);
  outC->_L20.L_PACKET = kcg_lit_int64(0);
  outC->_L20.qscale = Q_SCALE_10_cm_scale;
  outC->_L20.NID_LRBG = kcg_lit_int64(0);
  outC->_L20.D_LRBG = kcg_lit_int64(0);
  outC->_L20.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L20.dlrbg = Q_DLRBG_Reverse;
  outC->_L20.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L20.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L20.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L20.L_TRAININT = kcg_lit_int64(0);
  outC->_L20.V_TRAIN = kcg_lit_int64(0);
  outC->_L20.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L20.mode = M_MODE_Full_Supervision;
  outC->_L20.level = M_LEVEL_Level_0;
  outC->_L20.NID_NTC = kcg_lit_int64(0);
  outC->_L19.valid = kcg_true;
  outC->_L19.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->_L19.packet0.L_PACKET = kcg_lit_int64(0);
  outC->_L19.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L19.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->_L19.packet0.D_LRBG = kcg_lit_int64(0);
  outC->_L19.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L19.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L19.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L19.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L19.packet0.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L19.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->_L19.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->_L19.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L19.packet0.mode = M_MODE_Full_Supervision;
  outC->_L19.packet0.level = M_LEVEL_Level_0;
  outC->_L19.packet0.NID_NTC = kcg_lit_int64(0);
  outC->_L2 = kcg_lit_int64(0);
  outC->_L3 = M_LEVEL_Level_0;
  outC->_L4 = M_MODE_Full_Supervision;
  outC->_L5 = Q_DIRTRAIN_Reverse;
  outC->_L6 = kcg_lit_int64(0);
  outC->_L7 = kcg_lit_int64(0);
  outC->_L8 = Q_LENGTH_No_train_integrity_information_available;
  outC->_L9 = kcg_lit_int64(0);
  outC->_L10 = kcg_lit_int64(0);
  outC->_L11 = Q_DLRBG_Reverse;
  outC->_L12 = Q_DIRLRBG_Reverse;
  outC->_L13 = kcg_lit_int64(0);
  outC->_L14 = kcg_lit_int64(0);
  outC->_L15 = Q_SCALE_10_cm_scale;
  outC->_L16 = kcg_lit_int64(0);
  outC->_L17 = kcg_lit_int64(0);
  outC->_L18 = kcg_true;
  outC->_L1.valid = kcg_true;
  outC->_L1.nid_packet = kcg_lit_int64(0);
  outC->_L1.l_packet = kcg_lit_int64(0);
  outC->_L1.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.nid_lrbg = kcg_lit_int64(0);
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
  outC->oldP000.valid = kcg_true;
  outC->oldP000.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->oldP000.packet0.L_PACKET = kcg_lit_int64(0);
  outC->oldP000.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->oldP000.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->oldP000.packet0.D_LRBG = kcg_lit_int64(0);
  outC->oldP000.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->oldP000.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->oldP000.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->oldP000.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->oldP000.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->oldP000.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->oldP000.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->oldP000.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->oldP000.packet0.mode = M_MODE_Full_Supervision;
  outC->oldP000.packet0.level = M_LEVEL_Level_0;
  outC->oldP000.packet0.NID_NTC = kcg_lit_int64(0);
  /* _L22=(TM_conversions::CAST_NID_PACKET_to_int#1)/ */
  CAST_NID_PACKET_to_int_init_TM_conversions(
    &outC->Context_CAST_NID_PACKET_to_int_1);
  /* _L23=(TM_conversions::CAST_L_PACKET_to_int#1)/ */
  CAST_L_PACKET_to_int_init_TM_conversions(
    &outC->Context_CAST_L_PACKET_to_int_1);
  /* _L25=(TM_conversions::CAST_NID_LRBG_to_int#1)/ */
  CAST_NID_LRBG_to_int_init_TM_conversions(
    &outC->Context_CAST_NID_LRBG_to_int_1);
  /* _L26=(TM_conversions::CAST_D_LRBG_to_int#1)/ */
  CAST_D_LRBG_to_int_init_TM_conversions(&outC->Context_CAST_D_LRBG_to_int_1);
  /* _L28=(TM_conversions::CAST_L_DOUBTOVER_to_int#1)/ */
  CAST_L_DOUBTOVER_to_int_init_TM_conversions(
    &outC->Context_CAST_L_DOUBTOVER_to_int_1);
  /* _L29=(TM_conversions::CAST_L_DOUBTUNDER_to_int#1)/ */
  CAST_L_DOUBTUNDER_to_int_init_TM_conversions(
    &outC->Context_CAST_L_DOUBTUNDER_to_int_1);
  /* _L30=(TM_conversions::CAST_L_TRAININT_to_int#1)/ */
  CAST_L_TRAININT_to_int_init_TM_conversions(
    &outC->Context_CAST_L_TRAININT_to_int_1);
  /* _L31=(TM_conversions::CAST_V_TRAIN_to_int#1)/ */
  CAST_V_TRAIN_to_int_init_TM_conversions(&outC->Context_CAST_V_TRAIN_to_int_1);
  /* _L32=(TM_conversions::CAST_NID_NTC_to_int#1)/ */
  CAST_NID_NTC_to_int_init_TM_conversions(&outC->Context_CAST_NID_NTC_to_int_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ConvertP000_reset_RBC_Model_Pkg_TrainTrackMsgConversion(
  outC_ConvertP000_RBC_Model_Pkg_TrainTrackMsgConversion *outC)
{
  /* _L22=(TM_conversions::CAST_NID_PACKET_to_int#1)/ */
  CAST_NID_PACKET_to_int_reset_TM_conversions(
    &outC->Context_CAST_NID_PACKET_to_int_1);
  /* _L23=(TM_conversions::CAST_L_PACKET_to_int#1)/ */
  CAST_L_PACKET_to_int_reset_TM_conversions(
    &outC->Context_CAST_L_PACKET_to_int_1);
  /* _L25=(TM_conversions::CAST_NID_LRBG_to_int#1)/ */
  CAST_NID_LRBG_to_int_reset_TM_conversions(
    &outC->Context_CAST_NID_LRBG_to_int_1);
  /* _L26=(TM_conversions::CAST_D_LRBG_to_int#1)/ */
  CAST_D_LRBG_to_int_reset_TM_conversions(&outC->Context_CAST_D_LRBG_to_int_1);
  /* _L28=(TM_conversions::CAST_L_DOUBTOVER_to_int#1)/ */
  CAST_L_DOUBTOVER_to_int_reset_TM_conversions(
    &outC->Context_CAST_L_DOUBTOVER_to_int_1);
  /* _L29=(TM_conversions::CAST_L_DOUBTUNDER_to_int#1)/ */
  CAST_L_DOUBTUNDER_to_int_reset_TM_conversions(
    &outC->Context_CAST_L_DOUBTUNDER_to_int_1);
  /* _L30=(TM_conversions::CAST_L_TRAININT_to_int#1)/ */
  CAST_L_TRAININT_to_int_reset_TM_conversions(
    &outC->Context_CAST_L_TRAININT_to_int_1);
  /* _L31=(TM_conversions::CAST_V_TRAIN_to_int#1)/ */
  CAST_V_TRAIN_to_int_reset_TM_conversions(
    &outC->Context_CAST_V_TRAIN_to_int_1);
  /* _L32=(TM_conversions::CAST_NID_NTC_to_int#1)/ */
  CAST_NID_NTC_to_int_reset_TM_conversions(
    &outC->Context_CAST_NID_NTC_to_int_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ConvertP000_RBC_Model_Pkg_TrainTrackMsgConversion.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

