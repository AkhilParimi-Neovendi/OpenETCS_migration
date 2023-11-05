/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_MA_request_TA_MA_Request.h"

/* TA_MA_Request::Build_MA_request/ */
void Build_MA_request_TA_MA_Request(
  /* trackDescrDeleted/ */
  kcg_bool trackDescrDeleted,
  /* trainProps/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* packet0/ */
  PT0_PositionReport_T_Packet_TrainTypes_Pkg *packet0,
  /* packet1/ */
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *packet1,
  /* t_train/ */
  T_TRAIN t_train,
  /* bus_in/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *bus_in,
  outC_Build_MA_request_TA_MA_Request *outC)
{
  static kcg_int32 noname;

  outC->_L34 = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L35 = Q_MARQSTREASON_Track_description_deleted;
  outC->_L33 = trackDescrDeleted;
  /* _L114= */
  if (outC->_L33) {
    outC->_L114 = outC->_L35;
  }
  else {
    outC->_L114 = outC->_L34;
  }
  outC->q_marqrstreason_local = outC->_L114;
  outC->_L85 = t_train;
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&outC->_L108, bus_in);
  outC->_L100 = kcg_true;
  outC->_L97 = kcg_lit_int32(132);
  outC->_L101 = kcg_lit_int32(0);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&outC->_L99, trainProps);
  outC->_L102 = outC->_L99.nid_engine;
  outC->_L103 = outC->q_marqrstreason_local;
  outC->_L98.valid = outC->_L100;
  outC->_L98.nid_message = outC->_L97;
  outC->_L98.l_message = outC->_L101;
  outC->_L98.t_train = outC->_L101;
  outC->_L98.nid_engine = outC->_L102;
  outC->_L98.q_marqstreason = outC->_L103;
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&outC->_L106, packet0);
  /* _L109=(TM_conversions_TrainToTrack::C_legacy_P000#1)/ */
  C_legacy_P000_TM_conversions_TrainToTrack(
    &outC->_L106,
    &outC->Context_C_legacy_P000_1);
  kcg_copy_P000_TM_TrainToTrack(&outC->_L109, &outC->Context_C_legacy_P000_1.p);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(&outC->_L107, packet1);
  /* _L110=(TM_conversions_TrainToTrack::C_legacy_P001#1)/ */
  C_legacy_P001_TM_conversions_TrainToTrack(
    &outC->_L107,
    &outC->Context_C_legacy_P001_1);
  kcg_copy_P001_TM_TrainToTrack(&outC->_L110, &outC->Context_C_legacy_P001_1.p);
  kcg_copy_P009_TM_TrainToTrack(
    &outC->_L105,
    (P009_TM_TrainToTrack *) &DEFAULT_P009_TA_MA_Request);
  outC->_L104 = cM_version_TA_MA_Request;
  /* _L84=(TM_radio_messages::Send_M132#1)/ */
  Send_M132_TM_radio_messages(
    outC->_L85,
    &outC->_L108,
    &outC->_L98,
    &outC->_L109,
    &outC->_L110,
    &outC->_L105,
    outC->_L104,
    &outC->Context_Send_M132_1);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->_L84,
    &outC->Context_Send_M132_1.MessageBus_out);
  outC->_L111 = outC->Context_Send_M132_1.t_train_assigned;
  noname = outC->_L111;
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->bus_out,
    &outC->_L84);
}

#ifndef KCG_USER_DEFINED_INIT
void Build_MA_request_init_TA_MA_Request(
  outC_Build_MA_request_TA_MA_Request *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;

  outC->_L114 = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L111 = kcg_lit_int32(0);
  outC->_L110.valid = kcg_true;
  outC->_L110.nid_packet = kcg_lit_int32(0);
  outC->_L110.l_packet = kcg_lit_int32(0);
  outC->_L110.q_scale = Q_SCALE_10_cm_scale;
  outC->_L110.nid_lrbg = kcg_lit_int32(0);
  outC->_L110.nid_prvlrbg = kcg_lit_int32(0);
  outC->_L110.d_lrbg = kcg_lit_int32(0);
  outC->_L110.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L110.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L110.l_doubtover = kcg_lit_int32(0);
  outC->_L110.l_doubtunder = kcg_lit_int32(0);
  outC->_L110.q_length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L110.l_trainint = kcg_lit_int32(0);
  outC->_L110.v_train = kcg_lit_int32(0);
  outC->_L110.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L110.m_mode = M_MODE_Full_Supervision;
  outC->_L110.m_level = M_LEVEL_Level_0;
  outC->_L110.nid_ntc = kcg_lit_int32(0);
  outC->_L109.valid = kcg_true;
  outC->_L109.nid_packet = kcg_lit_int32(0);
  outC->_L109.l_packet = kcg_lit_int32(0);
  outC->_L109.q_scale = Q_SCALE_10_cm_scale;
  outC->_L109.nid_lrbg = kcg_lit_int32(0);
  outC->_L109.d_lrbg = kcg_lit_int32(0);
  outC->_L109.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L109.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L109.l_doubtover = kcg_lit_int32(0);
  outC->_L109.l_doubtunder = kcg_lit_int32(0);
  outC->_L109.q_length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L109.l_trainint = kcg_lit_int32(0);
  outC->_L109.v_train = kcg_lit_int32(0);
  outC->_L109.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L109.m_mode = M_MODE_Full_Supervision;
  outC->_L109.m_level = M_LEVEL_Level_0;
  outC->_L109.nid_ntc = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 5; idx1++) {
    outC->_L108[idx1].Message.valid = kcg_true;
    outC->_L108[idx1].Message.nid_message = kcg_lit_int32(0);
    outC->_L108[idx1].Message.l_message = kcg_lit_int32(0);
    outC->_L108[idx1].Message.t_train = kcg_lit_int32(0);
    outC->_L108[idx1].Message.nid_engine = kcg_lit_int32(0);
    outC->_L108[idx1].Message.field1 = kcg_lit_int32(0);
    outC->_L108[idx1].Message.field2 = kcg_lit_int32(0);
    outC->_L108[idx1].Message.field3 = kcg_lit_int32(0);
    for (idx = 0; idx < 50; idx++) {
      outC->_L108[idx1].OptionalPackets[idx] = kcg_lit_int32(0);
    }
  }
  outC->_L107.valid = kcg_true;
  outC->_L107.packet1.NID_PACKET = kcg_lit_int32(0);
  outC->_L107.packet1.L_PACKET = kcg_lit_int32(0);
  outC->_L107.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L107.packet1.NID_LRBG = kcg_lit_int32(0);
  outC->_L107.packet1.NID_PRVLRBG = kcg_lit_int32(0);
  outC->_L107.packet1.D_LRBG = kcg_lit_int32(0);
  outC->_L107.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L107.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L107.packet1.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L107.packet1.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L107.packet1.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L107.packet1.L_TRAININT = kcg_lit_int32(0);
  outC->_L107.packet1.V_TRAIN = kcg_lit_int32(0);
  outC->_L107.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L107.packet1.mode = M_MODE_Full_Supervision;
  outC->_L107.packet1.level = M_LEVEL_Level_0;
  outC->_L107.packet1.NID_NTC = kcg_lit_int32(0);
  outC->_L106.valid = kcg_true;
  outC->_L106.packet0.NID_PACKET = kcg_lit_int32(0);
  outC->_L106.packet0.L_PACKET = kcg_lit_int32(0);
  outC->_L106.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L106.packet0.NID_LRBG = kcg_lit_int32(0);
  outC->_L106.packet0.D_LRBG = kcg_lit_int32(0);
  outC->_L106.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L106.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L106.packet0.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L106.packet0.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L106.packet0.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L106.packet0.L_TRAININT = kcg_lit_int32(0);
  outC->_L106.packet0.V_TRAIN = kcg_lit_int32(0);
  outC->_L106.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L106.packet0.mode = M_MODE_Full_Supervision;
  outC->_L106.packet0.level = M_LEVEL_Level_0;
  outC->_L106.packet0.NID_NTC = kcg_lit_int32(0);
  outC->_L105.valid = kcg_true;
  outC->_L105.nid_packet = kcg_lit_int32(0);
  outC->_L105.l_packet = kcg_lit_int32(0);
  outC->_L105.nid_ltrbg = kcg_lit_int32(0);
  outC->_L104 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L103 = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L97 = kcg_lit_int32(0);
  outC->_L98.valid = kcg_true;
  outC->_L98.nid_message = kcg_lit_int32(0);
  outC->_L98.l_message = kcg_lit_int32(0);
  outC->_L98.t_train = kcg_lit_int32(0);
  outC->_L98.nid_engine = kcg_lit_int32(0);
  outC->_L98.q_marqstreason = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L99.nid_engine = kcg_lit_int32(0);
  outC->_L99.nid_operational = kcg_lit_int32(0);
  outC->_L99.l_train = kcg_lit_int32(0);
  outC->_L99.d_baliseAntenna_2_frontend.nominal = kcg_lit_int32(0);
  outC->_L99.d_baliseAntenna_2_frontend.d_min = kcg_lit_int32(0);
  outC->_L99.d_baliseAntenna_2_frontend.d_max = kcg_lit_int32(0);
  outC->_L99.d_frontend_2_rearend.nominal = kcg_lit_int32(0);
  outC->_L99.d_frontend_2_rearend.d_min = kcg_lit_int32(0);
  outC->_L99.d_frontend_2_rearend.d_max = kcg_lit_int32(0);
  outC->_L99.locationAccuracy_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L99.locationAccuracy_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L99.locationAccuracy_DefaultValue.d_max = kcg_lit_int32(0);
  outC->_L99.centerDetectionAcc_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L99.centerDetectionAcc_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L99.centerDetectionAcc_DefaultValue.d_max = kcg_lit_int32(0);
  outC->_L100 = kcg_true;
  outC->_L101 = kcg_lit_int32(0);
  outC->_L102 = kcg_lit_int32(0);
  outC->_L85 = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->_L84[idx3].Message.valid = kcg_true;
    outC->_L84[idx3].Message.nid_message = kcg_lit_int32(0);
    outC->_L84[idx3].Message.l_message = kcg_lit_int32(0);
    outC->_L84[idx3].Message.t_train = kcg_lit_int32(0);
    outC->_L84[idx3].Message.nid_engine = kcg_lit_int32(0);
    outC->_L84[idx3].Message.field1 = kcg_lit_int32(0);
    outC->_L84[idx3].Message.field2 = kcg_lit_int32(0);
    outC->_L84[idx3].Message.field3 = kcg_lit_int32(0);
    for (idx2 = 0; idx2 < 50; idx2++) {
      outC->_L84[idx3].OptionalPackets[idx2] = kcg_lit_int32(0);
    }
  }
  outC->_L35 = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L34 = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L33 = kcg_true;
  outC->q_marqrstreason_local = Q_MARQSTREASON_Start_selected_by_driver;
  for (idx5 = 0; idx5 < 5; idx5++) {
    outC->bus_out[idx5].Message.valid = kcg_true;
    outC->bus_out[idx5].Message.nid_message = kcg_lit_int32(0);
    outC->bus_out[idx5].Message.l_message = kcg_lit_int32(0);
    outC->bus_out[idx5].Message.t_train = kcg_lit_int32(0);
    outC->bus_out[idx5].Message.nid_engine = kcg_lit_int32(0);
    outC->bus_out[idx5].Message.field1 = kcg_lit_int32(0);
    outC->bus_out[idx5].Message.field2 = kcg_lit_int32(0);
    outC->bus_out[idx5].Message.field3 = kcg_lit_int32(0);
    for (idx4 = 0; idx4 < 50; idx4++) {
      outC->bus_out[idx5].OptionalPackets[idx4] = kcg_lit_int32(0);
    }
  }
  /* _L84=(TM_radio_messages::Send_M132#1)/ */
  Send_M132_init_TM_radio_messages(&outC->Context_Send_M132_1);
  /* _L110=(TM_conversions_TrainToTrack::C_legacy_P001#1)/ */
  C_legacy_P001_init_TM_conversions_TrainToTrack(
    &outC->Context_C_legacy_P001_1);
  /* _L109=(TM_conversions_TrainToTrack::C_legacy_P000#1)/ */
  C_legacy_P000_init_TM_conversions_TrainToTrack(
    &outC->Context_C_legacy_P000_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Build_MA_request_reset_TA_MA_Request(
  outC_Build_MA_request_TA_MA_Request *outC)
{
  /* _L84=(TM_radio_messages::Send_M132#1)/ */
  Send_M132_reset_TM_radio_messages(&outC->Context_Send_M132_1);
  /* _L110=(TM_conversions_TrainToTrack::C_legacy_P001#1)/ */
  C_legacy_P001_reset_TM_conversions_TrainToTrack(
    &outC->Context_C_legacy_P001_1);
  /* _L109=(TM_conversions_TrainToTrack::C_legacy_P000#1)/ */
  C_legacy_P000_reset_TM_conversions_TrainToTrack(
    &outC->Context_C_legacy_P000_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Build_MA_request_TA_MA_Request.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

