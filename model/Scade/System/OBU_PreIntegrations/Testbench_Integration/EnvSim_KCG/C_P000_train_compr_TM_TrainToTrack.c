/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P000_train_compr_TM_TrainToTrack.h"

/* TM_TrainToTrack::C_P000_train_compr/ */
void C_P000_train_compr_TM_TrainToTrack(
  /* P000_in/ */
  P000_TM_TrainToTrack *P000_in,
  outC_C_P000_train_compr_TM_TrainToTrack *outC)
{
  outC->_L94 = kcg_lit_int32(0);
  kcg_copy_P000_TM_TrainToTrack(&outC->_L1, P000_in);
  outC->_L92 = outC->_L1.d_lrbg;
  /* _L93=(TM_conversions::CAST_D_LRBG_to_int#1)/ */
  CAST_D_LRBG_to_int_TM_conversions(
    outC->_L92,
    &outC->Context_CAST_D_LRBG_to_int_1);
  outC->_L93 = outC->Context_CAST_D_LRBG_to_int_1.d_lrbg_int;
  outC->_L2 = outC->_L1.valid;
  outC->_L3 = outC->_L1.nid_packet;
  /* _L69=(TM_conversions::CAST_NID_PACKET_to_int#1)/ */
  CAST_NID_PACKET_to_int_TM_conversions(
    outC->_L3,
    &outC->Context_CAST_NID_PACKET_to_int_1);
  outC->_L69 = outC->Context_CAST_NID_PACKET_to_int_1.nid_packet_int;
  /* _L91=(TM_TrainToTrack::Encode_NID_PACKET#2)/ */
  Encode_NID_PACKET_TM_TrainToTrack(
    outC->_L2,
    outC->_L69,
    &outC->Context_Encode_NID_PACKET_2);
  outC->_L91 = outC->Context_Encode_NID_PACKET_2.meta;
  outC->_L4 = outC->_L1.l_packet;
  /* _L70=(TM_conversions::CAST_L_PACKET_to_int#1)/ */
  CAST_L_PACKET_to_int_TM_conversions(
    outC->_L4,
    &outC->Context_CAST_L_PACKET_to_int_1);
  outC->_L70 = outC->Context_CAST_L_PACKET_to_int_1.l_packet_int;
  outC->_L5 = outC->_L1.q_scale;
  /* _L71=(TM_conversions::CAST_Q_SCALE_to_int#1)/ */
  CAST_Q_SCALE_to_int_TM_conversions(
    outC->_L5,
    &outC->Context_CAST_Q_SCALE_to_int_1);
  outC->_L71 = outC->Context_CAST_Q_SCALE_to_int_1.d;
  outC->_L6 = outC->_L1.nid_lrbg;
  /* _L72=(TM_conversions::CAST_NID_LRBG_to_int#1)/ */
  CAST_NID_LRBG_to_int_TM_conversions(
    outC->_L6,
    &outC->Context_CAST_NID_LRBG_to_int_1);
  outC->_L72 = outC->Context_CAST_NID_LRBG_to_int_1.nid_lrbg_int;
  outC->_L7 = outC->_L1.q_dirlrbg;
  /* _L74=(TM_conversions::CAST_Q_DIRLRBG_to_int#1)/ */
  CAST_Q_DIRLRBG_to_int_TM_conversions(
    outC->_L7,
    &outC->Context_CAST_Q_DIRLRBG_to_int_1);
  outC->_L74 = outC->Context_CAST_Q_DIRLRBG_to_int_1.q_dirlrbg_int;
  outC->_L8 = outC->_L1.q_dlrbg;
  /* _L75=(TM_conversions::CAST_Q_DRLRBG_to_int#2)/ */
  CAST_Q_DRLRBG_to_int_TM_conversions(
    outC->_L8,
    &outC->Context_CAST_Q_DRLRBG_to_int_2);
  outC->_L75 = outC->Context_CAST_Q_DRLRBG_to_int_2.q_drlrbg_int;
  outC->_L9 = outC->_L1.l_doubtover;
  /* _L77=(TM_conversions::CAST_L_DOUBTOVER_to_int#2)/ */
  CAST_L_DOUBTOVER_to_int_TM_conversions(
    outC->_L9,
    &outC->Context_CAST_L_DOUBTOVER_to_int_2);
  outC->_L77 = outC->Context_CAST_L_DOUBTOVER_to_int_2.l_doubtiver_int;
  outC->_L10 = outC->_L1.l_doubtunder;
  /* _L78=(TM_conversions::CAST_L_DOUBTUNDER_to_int#1)/ */
  CAST_L_DOUBTUNDER_to_int_TM_conversions(
    outC->_L10,
    &outC->Context_CAST_L_DOUBTUNDER_to_int_1);
  outC->_L78 = outC->Context_CAST_L_DOUBTUNDER_to_int_1.l_doubtunder_int;
  outC->_L11 = outC->_L1.q_length;
  /* _L79=(TM_conversions::CAST_Q_LENGTH_to_int#1)/ */
  CAST_Q_LENGTH_to_int_TM_conversions(
    outC->_L11,
    &outC->Context_CAST_Q_LENGTH_to_int_1);
  outC->_L79 = outC->Context_CAST_Q_LENGTH_to_int_1.q_length_int;
  outC->_L12 = outC->_L1.l_trainint;
  /* _L80=(TM_conversions::CAST_L_TRAININT_to_int#1)/ */
  CAST_L_TRAININT_to_int_TM_conversions(
    outC->_L12,
    &outC->Context_CAST_L_TRAININT_to_int_1);
  outC->_L80 = outC->Context_CAST_L_TRAININT_to_int_1.l_trainint_int;
  outC->_L13 = outC->_L1.v_train;
  /* _L81=(TM_conversions::CAST_V_TRAIN_to_int#1)/ */
  CAST_V_TRAIN_to_int_TM_conversions(
    outC->_L13,
    &outC->Context_CAST_V_TRAIN_to_int_1);
  outC->_L81 = outC->Context_CAST_V_TRAIN_to_int_1.v_train_int;
  outC->_L14 = outC->_L1.q_dirtrain;
  /* _L82=(TM_conversions::CAST_Q_DIRTRAIN_to_int#1)/ */
  CAST_Q_DIRTRAIN_to_int_TM_conversions(
    outC->_L14,
    &outC->Context_CAST_Q_DIRTRAIN_to_int_1);
  outC->_L82 = outC->Context_CAST_Q_DIRTRAIN_to_int_1.q_dirltrain_int;
  outC->_L15 = outC->_L1.m_mode;
  /* _L83=(TM_conversions::CAST_M_MODE_to_int#1)/ */
  CAST_M_MODE_to_int_TM_conversions(
    outC->_L15,
    &outC->Context_CAST_M_MODE_to_int_1);
  outC->_L83 = outC->Context_CAST_M_MODE_to_int_1.m_mode_int;
  outC->_L16 = outC->_L1.m_level;
  /* _L84=(TM_conversions::CAST_M_LEVEL_to_int#1)/ */
  CAST_M_LEVEL_to_int_TM_conversions(
    outC->_L16,
    &outC->Context_CAST_M_LEVEL_to_int_1);
  outC->_L84 = outC->Context_CAST_M_LEVEL_to_int_1.m_level_int;
  outC->_L73 = outC->_L1.nid_ntc;
  /* _L85=(TM_conversions::CAST_NID_NTC_to_int#1)/ */
  CAST_NID_NTC_to_int_TM_conversions(
    outC->_L73,
    &outC->Context_CAST_NID_NTC_to_int_1);
  outC->_L85 = outC->Context_CAST_NID_NTC_to_int_1.nid_ntc_int;
  outC->_L68[0] = outC->_L91;
  outC->_L68[1] = outC->_L70;
  outC->_L68[2] = outC->_L71;
  outC->_L68[3] = outC->_L72;
  outC->_L68[4] = outC->_L93;
  outC->_L68[5] = outC->_L74;
  outC->_L68[6] = outC->_L75;
  outC->_L68[7] = outC->_L77;
  outC->_L68[8] = outC->_L78;
  outC->_L68[9] = outC->_L79;
  outC->_L68[10] = outC->_L80;
  outC->_L68[11] = outC->_L81;
  outC->_L68[12] = outC->_L82;
  outC->_L68[13] = outC->_L83;
  outC->_L68[14] = outC->_L84;
  outC->_L68[15] = outC->_L85;
  outC->_L68[16] = outC->_L94;
  kcg_copy_P000_TrainTrack_int_TM_TrainToTrack(&outC->P000_int, &outC->_L68);
}

#ifndef KCG_USER_DEFINED_INIT
void C_P000_train_compr_init_TM_TrainToTrack(
  outC_C_P000_train_compr_TM_TrainToTrack *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L94 = kcg_lit_int32(0);
  outC->_L93 = kcg_lit_int32(0);
  outC->_L92 = kcg_lit_int32(0);
  outC->_L91 = kcg_lit_int32(0);
  for (idx = 0; idx < 17; idx++) {
    outC->_L68[idx] = kcg_lit_int32(0);
  }
  outC->_L85 = kcg_lit_int32(0);
  outC->_L84 = kcg_lit_int32(0);
  outC->_L83 = kcg_lit_int32(0);
  outC->_L82 = kcg_lit_int32(0);
  outC->_L81 = kcg_lit_int32(0);
  outC->_L80 = kcg_lit_int32(0);
  outC->_L79 = kcg_lit_int32(0);
  outC->_L78 = kcg_lit_int32(0);
  outC->_L77 = kcg_lit_int32(0);
  outC->_L75 = kcg_lit_int32(0);
  outC->_L74 = kcg_lit_int32(0);
  outC->_L73 = kcg_lit_int32(0);
  outC->_L72 = kcg_lit_int32(0);
  outC->_L71 = kcg_lit_int32(0);
  outC->_L70 = kcg_lit_int32(0);
  outC->_L69 = kcg_lit_int32(0);
  outC->_L2 = kcg_true;
  outC->_L3 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->_L5 = Q_SCALE_10_cm_scale;
  outC->_L6 = kcg_lit_int32(0);
  outC->_L7 = Q_DIRLRBG_Reverse;
  outC->_L8 = Q_DLRBG_Reverse;
  outC->_L9 = kcg_lit_int32(0);
  outC->_L10 = kcg_lit_int32(0);
  outC->_L11 = Q_LENGTH_No_train_integrity_information_available;
  outC->_L12 = kcg_lit_int32(0);
  outC->_L13 = kcg_lit_int32(0);
  outC->_L14 = Q_DIRTRAIN_Reverse;
  outC->_L15 = M_MODE_Full_Supervision;
  outC->_L16 = M_LEVEL_Level_0;
  outC->_L1.valid = kcg_true;
  outC->_L1.nid_packet = kcg_lit_int32(0);
  outC->_L1.l_packet = kcg_lit_int32(0);
  outC->_L1.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.nid_lrbg = kcg_lit_int32(0);
  outC->_L1.d_lrbg = kcg_lit_int32(0);
  outC->_L1.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L1.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L1.l_doubtover = kcg_lit_int32(0);
  outC->_L1.l_doubtunder = kcg_lit_int32(0);
  outC->_L1.q_length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L1.l_trainint = kcg_lit_int32(0);
  outC->_L1.v_train = kcg_lit_int32(0);
  outC->_L1.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L1.m_mode = M_MODE_Full_Supervision;
  outC->_L1.m_level = M_LEVEL_Level_0;
  outC->_L1.nid_ntc = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 17; idx1++) {
    outC->P000_int[idx1] = kcg_lit_int32(0);
  }
  /* _L85=(TM_conversions::CAST_NID_NTC_to_int#1)/ */
  CAST_NID_NTC_to_int_init_TM_conversions(&outC->Context_CAST_NID_NTC_to_int_1);
  /* _L84=(TM_conversions::CAST_M_LEVEL_to_int#1)/ */
  CAST_M_LEVEL_to_int_init_TM_conversions(&outC->Context_CAST_M_LEVEL_to_int_1);
  /* _L83=(TM_conversions::CAST_M_MODE_to_int#1)/ */
  CAST_M_MODE_to_int_init_TM_conversions(&outC->Context_CAST_M_MODE_to_int_1);
  /* _L82=(TM_conversions::CAST_Q_DIRTRAIN_to_int#1)/ */
  CAST_Q_DIRTRAIN_to_int_init_TM_conversions(
    &outC->Context_CAST_Q_DIRTRAIN_to_int_1);
  /* _L81=(TM_conversions::CAST_V_TRAIN_to_int#1)/ */
  CAST_V_TRAIN_to_int_init_TM_conversions(&outC->Context_CAST_V_TRAIN_to_int_1);
  /* _L80=(TM_conversions::CAST_L_TRAININT_to_int#1)/ */
  CAST_L_TRAININT_to_int_init_TM_conversions(
    &outC->Context_CAST_L_TRAININT_to_int_1);
  /* _L79=(TM_conversions::CAST_Q_LENGTH_to_int#1)/ */
  CAST_Q_LENGTH_to_int_init_TM_conversions(
    &outC->Context_CAST_Q_LENGTH_to_int_1);
  /* _L78=(TM_conversions::CAST_L_DOUBTUNDER_to_int#1)/ */
  CAST_L_DOUBTUNDER_to_int_init_TM_conversions(
    &outC->Context_CAST_L_DOUBTUNDER_to_int_1);
  /* _L77=(TM_conversions::CAST_L_DOUBTOVER_to_int#2)/ */
  CAST_L_DOUBTOVER_to_int_init_TM_conversions(
    &outC->Context_CAST_L_DOUBTOVER_to_int_2);
  /* _L75=(TM_conversions::CAST_Q_DRLRBG_to_int#2)/ */
  CAST_Q_DRLRBG_to_int_init_TM_conversions(
    &outC->Context_CAST_Q_DRLRBG_to_int_2);
  /* _L74=(TM_conversions::CAST_Q_DIRLRBG_to_int#1)/ */
  CAST_Q_DIRLRBG_to_int_init_TM_conversions(
    &outC->Context_CAST_Q_DIRLRBG_to_int_1);
  /* _L72=(TM_conversions::CAST_NID_LRBG_to_int#1)/ */
  CAST_NID_LRBG_to_int_init_TM_conversions(
    &outC->Context_CAST_NID_LRBG_to_int_1);
  /* _L71=(TM_conversions::CAST_Q_SCALE_to_int#1)/ */
  CAST_Q_SCALE_to_int_init_TM_conversions(&outC->Context_CAST_Q_SCALE_to_int_1);
  /* _L70=(TM_conversions::CAST_L_PACKET_to_int#1)/ */
  CAST_L_PACKET_to_int_init_TM_conversions(
    &outC->Context_CAST_L_PACKET_to_int_1);
  /* _L91=(TM_TrainToTrack::Encode_NID_PACKET#2)/ */
  Encode_NID_PACKET_init_TM_TrainToTrack(&outC->Context_Encode_NID_PACKET_2);
  /* _L69=(TM_conversions::CAST_NID_PACKET_to_int#1)/ */
  CAST_NID_PACKET_to_int_init_TM_conversions(
    &outC->Context_CAST_NID_PACKET_to_int_1);
  /* _L93=(TM_conversions::CAST_D_LRBG_to_int#1)/ */
  CAST_D_LRBG_to_int_init_TM_conversions(&outC->Context_CAST_D_LRBG_to_int_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_P000_train_compr_reset_TM_TrainToTrack(
  outC_C_P000_train_compr_TM_TrainToTrack *outC)
{
  /* _L85=(TM_conversions::CAST_NID_NTC_to_int#1)/ */
  CAST_NID_NTC_to_int_reset_TM_conversions(
    &outC->Context_CAST_NID_NTC_to_int_1);
  /* _L84=(TM_conversions::CAST_M_LEVEL_to_int#1)/ */
  CAST_M_LEVEL_to_int_reset_TM_conversions(
    &outC->Context_CAST_M_LEVEL_to_int_1);
  /* _L83=(TM_conversions::CAST_M_MODE_to_int#1)/ */
  CAST_M_MODE_to_int_reset_TM_conversions(&outC->Context_CAST_M_MODE_to_int_1);
  /* _L82=(TM_conversions::CAST_Q_DIRTRAIN_to_int#1)/ */
  CAST_Q_DIRTRAIN_to_int_reset_TM_conversions(
    &outC->Context_CAST_Q_DIRTRAIN_to_int_1);
  /* _L81=(TM_conversions::CAST_V_TRAIN_to_int#1)/ */
  CAST_V_TRAIN_to_int_reset_TM_conversions(
    &outC->Context_CAST_V_TRAIN_to_int_1);
  /* _L80=(TM_conversions::CAST_L_TRAININT_to_int#1)/ */
  CAST_L_TRAININT_to_int_reset_TM_conversions(
    &outC->Context_CAST_L_TRAININT_to_int_1);
  /* _L79=(TM_conversions::CAST_Q_LENGTH_to_int#1)/ */
  CAST_Q_LENGTH_to_int_reset_TM_conversions(
    &outC->Context_CAST_Q_LENGTH_to_int_1);
  /* _L78=(TM_conversions::CAST_L_DOUBTUNDER_to_int#1)/ */
  CAST_L_DOUBTUNDER_to_int_reset_TM_conversions(
    &outC->Context_CAST_L_DOUBTUNDER_to_int_1);
  /* _L77=(TM_conversions::CAST_L_DOUBTOVER_to_int#2)/ */
  CAST_L_DOUBTOVER_to_int_reset_TM_conversions(
    &outC->Context_CAST_L_DOUBTOVER_to_int_2);
  /* _L75=(TM_conversions::CAST_Q_DRLRBG_to_int#2)/ */
  CAST_Q_DRLRBG_to_int_reset_TM_conversions(
    &outC->Context_CAST_Q_DRLRBG_to_int_2);
  /* _L74=(TM_conversions::CAST_Q_DIRLRBG_to_int#1)/ */
  CAST_Q_DIRLRBG_to_int_reset_TM_conversions(
    &outC->Context_CAST_Q_DIRLRBG_to_int_1);
  /* _L72=(TM_conversions::CAST_NID_LRBG_to_int#1)/ */
  CAST_NID_LRBG_to_int_reset_TM_conversions(
    &outC->Context_CAST_NID_LRBG_to_int_1);
  /* _L71=(TM_conversions::CAST_Q_SCALE_to_int#1)/ */
  CAST_Q_SCALE_to_int_reset_TM_conversions(
    &outC->Context_CAST_Q_SCALE_to_int_1);
  /* _L70=(TM_conversions::CAST_L_PACKET_to_int#1)/ */
  CAST_L_PACKET_to_int_reset_TM_conversions(
    &outC->Context_CAST_L_PACKET_to_int_1);
  /* _L91=(TM_TrainToTrack::Encode_NID_PACKET#2)/ */
  Encode_NID_PACKET_reset_TM_TrainToTrack(&outC->Context_Encode_NID_PACKET_2);
  /* _L69=(TM_conversions::CAST_NID_PACKET_to_int#1)/ */
  CAST_NID_PACKET_to_int_reset_TM_conversions(
    &outC->Context_CAST_NID_PACKET_to_int_1);
  /* _L93=(TM_conversions::CAST_D_LRBG_to_int#1)/ */
  CAST_D_LRBG_to_int_reset_TM_conversions(&outC->Context_CAST_D_LRBG_to_int_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P000_train_compr_TM_TrainToTrack.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

