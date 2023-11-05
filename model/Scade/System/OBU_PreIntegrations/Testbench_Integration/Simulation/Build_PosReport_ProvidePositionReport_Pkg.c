/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_PosReport_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::Build_PosReport/ */
void Build_PosReport_ProvidePositionReport_Pkg(
  /* trainProps/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* in_packet0/ */
  PT0_PositionReport_T_Packet_TrainTypes_Pkg *in_packet0,
  /* in_packet1/ */
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *in_packet1,
  /* errorVector/ */
  _34_array *errorVector,
  /* t_train/ */
  T_TRAIN t_train,
  outC_Build_PosReport_ProvidePositionReport_Pkg *outC)
{
  static kcg_bool acc;
  static kcg_size idx;
  static PT5_TrainRunningNumber_Packet_TrainTypes_Pkg op_call;
  static PT4_ErrorReporting_T_Packet_TrainTypes_Pkg _1_op_call;
  static PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg _2_op_call;
  static PT0_PositionReport_T_Packet_TrainTypes_Pkg _3_op_call;
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg _4_op_call;
  static kcg_bool noname;

  outC->_L181 = kcg_true;
  outC->every = outC->_L181;
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&outC->_L14, trainProps);
  kcg_copy__34_array(&outC->_L10, errorVector);
  kcg_copy_ErrorMessage_T_ProvidePositionReport_Pkg(&outC->_L53, &outC->_L10[0]);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&outC->_L176, in_packet0);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
    &outC->_L177,
    in_packet1);
  outC->_L178 = t_train;
  if (outC->every) {
    /* _L22=(ProvidePositionReport_Pkg::Build_SinglePosReport)/ */
    Build_SinglePosReport_ProvidePositionReport_Pkg(
      &outC->_L14,
      &outC->_L53,
      &outC->_L176,
      &outC->_L177,
      outC->_L178,
      &outC->Context_Build_SinglePosReport);
    kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
      &_4_op_call,
      &outC->Context_Build_SinglePosReport.posRepHeader);
    kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
      &_3_op_call,
      &outC->Context_Build_SinglePosReport.packet0);
    kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
      &_2_op_call,
      &outC->Context_Build_SinglePosReport.packet1);
    kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(
      &_1_op_call,
      &outC->Context_Build_SinglePosReport.packet4);
    kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(
      &op_call,
      &outC->Context_Build_SinglePosReport.packet5);
  }
  outC->_L180 = outC->_L53.present;
  outC->_L56 = kcg_false;
  outC->_L58 = outC->_L56;
  /* _L58= */
  for (idx = 0; idx < 9; idx++) {
    acc = outC->_L58;
    /* _L58=(ProvidePositionReport_Pkg::IsError)/ */
    IsError_ProvidePositionReport_Pkg(
      acc,
      &outC->_L10[idx],
      &outC->Context_IsError[idx]);
    outC->_L58 = outC->Context_IsError[idx].containsError;
  }
  /* _L179= */
  if (outC->_L58) {
    outC->_L179 = outC->_L180;
  }
  else {
    outC->_L179 = outC->_L181;
  }
  noname = outC->_L179;
  kcg_copy_ErrorMessage_T_ProvidePositionReport_Pkg(&outC->_L173, &outC->_L10[8]);
  kcg_copy_ErrorMessage_T_ProvidePositionReport_Pkg(&outC->_L172, &outC->_L10[7]);
  kcg_copy_ErrorMessage_T_ProvidePositionReport_Pkg(&outC->_L171, &outC->_L10[6]);
  kcg_copy_ErrorMessage_T_ProvidePositionReport_Pkg(&outC->_L170, &outC->_L10[5]);
  kcg_copy_ErrorMessage_T_ProvidePositionReport_Pkg(&outC->_L169, &outC->_L10[4]);
  kcg_copy_ErrorMessage_T_ProvidePositionReport_Pkg(&outC->_L168, &outC->_L10[3]);
  kcg_copy_ErrorMessage_T_ProvidePositionReport_Pkg(&outC->_L167, &outC->_L10[2]);
  /* _=(ProvidePositionReport_Pkg::SinglePosReport2_9#7)/ */
  SinglePosReport2_9_ProvidePositionReport_Pkg(
    &outC->_L173,
    &outC->_L14,
    &outC->_L176,
    &outC->_L177,
    outC->_L178,
    &outC->Context_SinglePosReport2_9_7);
  /* _=(ProvidePositionReport_Pkg::SinglePosReport2_9#6)/ */
  SinglePosReport2_9_ProvidePositionReport_Pkg(
    &outC->_L172,
    &outC->_L14,
    &outC->_L176,
    &outC->_L177,
    outC->_L178,
    &outC->Context_SinglePosReport2_9_6);
  /* _=(ProvidePositionReport_Pkg::SinglePosReport2_9#5)/ */
  SinglePosReport2_9_ProvidePositionReport_Pkg(
    &outC->_L171,
    &outC->_L14,
    &outC->_L176,
    &outC->_L177,
    outC->_L178,
    &outC->Context_SinglePosReport2_9_5);
  /* _=(ProvidePositionReport_Pkg::SinglePosReport2_9#4)/ */
  SinglePosReport2_9_ProvidePositionReport_Pkg(
    &outC->_L170,
    &outC->_L14,
    &outC->_L176,
    &outC->_L177,
    outC->_L178,
    &outC->Context_SinglePosReport2_9_4);
  /* _=(ProvidePositionReport_Pkg::SinglePosReport2_9#3)/ */
  SinglePosReport2_9_ProvidePositionReport_Pkg(
    &outC->_L169,
    &outC->_L14,
    &outC->_L176,
    &outC->_L177,
    outC->_L178,
    &outC->Context_SinglePosReport2_9_3);
  /* _=(ProvidePositionReport_Pkg::SinglePosReport2_9#2)/ */
  SinglePosReport2_9_ProvidePositionReport_Pkg(
    &outC->_L168,
    &outC->_L14,
    &outC->_L176,
    &outC->_L177,
    outC->_L178,
    &outC->Context_SinglePosReport2_9_2);
  /* _=(ProvidePositionReport_Pkg::SinglePosReport2_9#1)/ */
  SinglePosReport2_9_ProvidePositionReport_Pkg(
    &outC->_L167,
    &outC->_L14,
    &outC->_L176,
    &outC->_L177,
    outC->_L178,
    &outC->Context_SinglePosReport2_9_1);
  kcg_copy_ErrorMessage_T_ProvidePositionReport_Pkg(&outC->_L84, &outC->_L10[1]);
  /* _=(ProvidePositionReport_Pkg::SinglePosReport2_9)/ */
  SinglePosReport2_9_ProvidePositionReport_Pkg(
    &outC->_L84,
    &outC->_L14,
    &outC->_L176,
    &outC->_L177,
    outC->_L178,
    &outC->Context_SinglePosReport2_9);
  kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(
    &outC->_L32,
    (PT5_TrainRunningNumber_Packet_TrainTypes_Pkg *)
      &emptyPacket5_ProvidePositionReport_Pkg);
  kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(
    &outC->_L31,
    (PT4_ErrorReporting_T_Packet_TrainTypes_Pkg *)
      &emptyPacket4_ProvidePositionReport_Pkg);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
    &outC->_L30,
    (PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *)
      &emptyPacket1_ProvidePositionReport_Pkg);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
    &outC->_L29,
    (PT0_PositionReport_T_Packet_TrainTypes_Pkg *)
      &emptyPacket0_ProvidePositionReport_Pkg);
  kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
    &outC->_L28,
    (Radio_TrainTrack_Header_T_Radio_Types_Pkg *)
      &emptyHeader_ProvidePositionReport_Pkg);
  if (outC->every) {
    kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(&outC->_L22, &_4_op_call);
    kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&outC->_L26, &_3_op_call);
    kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
      &outC->_L23,
      &_2_op_call);
    kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(&outC->_L24, &_1_op_call);
    kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(&outC->_L25, &op_call);
  }
  else {
    kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(&outC->_L22, &outC->_L28);
    kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&outC->_L26, &outC->_L29);
    kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
      &outC->_L23,
      &outC->_L30);
    kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(&outC->_L24, &outC->_L31);
    kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(&outC->_L25, &outC->_L32);
  }
  kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
    &outC->posRepHeader,
    &outC->_L22);
  kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(
    &outC->packet5,
    &outC->_L25);
  kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(
    &outC->packet4,
    &outC->_L24);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
    &outC->packet1,
    &outC->_L23);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
    &outC->packet0,
    &outC->_L26);
}

#ifndef KCG_USER_DEFINED_INIT
void Build_PosReport_init_ProvidePositionReport_Pkg(
  outC_Build_PosReport_ProvidePositionReport_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L181 = kcg_true;
  outC->_L180 = kcg_true;
  outC->_L179 = kcg_true;
  outC->_L178 = kcg_lit_int32(0);
  outC->_L177.valid = kcg_true;
  outC->_L177.packet1.NID_PACKET = kcg_lit_int32(0);
  outC->_L177.packet1.L_PACKET = kcg_lit_int32(0);
  outC->_L177.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L177.packet1.NID_LRBG = kcg_lit_int32(0);
  outC->_L177.packet1.NID_PRVLRBG = kcg_lit_int32(0);
  outC->_L177.packet1.D_LRBG = kcg_lit_int32(0);
  outC->_L177.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L177.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L177.packet1.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L177.packet1.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L177.packet1.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L177.packet1.L_TRAININT = kcg_lit_int32(0);
  outC->_L177.packet1.V_TRAIN = kcg_lit_int32(0);
  outC->_L177.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L177.packet1.mode = M_MODE_Full_Supervision;
  outC->_L177.packet1.level = M_LEVEL_Level_0;
  outC->_L177.packet1.NID_NTC = kcg_lit_int32(0);
  outC->_L176.valid = kcg_true;
  outC->_L176.packet0.NID_PACKET = kcg_lit_int32(0);
  outC->_L176.packet0.L_PACKET = kcg_lit_int32(0);
  outC->_L176.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L176.packet0.NID_LRBG = kcg_lit_int32(0);
  outC->_L176.packet0.D_LRBG = kcg_lit_int32(0);
  outC->_L176.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L176.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L176.packet0.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L176.packet0.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L176.packet0.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L176.packet0.L_TRAININT = kcg_lit_int32(0);
  outC->_L176.packet0.V_TRAIN = kcg_lit_int32(0);
  outC->_L176.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L176.packet0.mode = M_MODE_Full_Supervision;
  outC->_L176.packet0.level = M_LEVEL_Level_0;
  outC->_L176.packet0.NID_NTC = kcg_lit_int32(0);
  outC->_L14.nid_engine = kcg_lit_int32(0);
  outC->_L14.nid_operational = kcg_lit_int32(0);
  outC->_L14.l_train = kcg_lit_int32(0);
  outC->_L14.d_baliseAntenna_2_frontend.nominal = kcg_lit_int32(0);
  outC->_L14.d_baliseAntenna_2_frontend.d_min = kcg_lit_int32(0);
  outC->_L14.d_baliseAntenna_2_frontend.d_max = kcg_lit_int32(0);
  outC->_L14.d_frontend_2_rearend.nominal = kcg_lit_int32(0);
  outC->_L14.d_frontend_2_rearend.d_min = kcg_lit_int32(0);
  outC->_L14.d_frontend_2_rearend.d_max = kcg_lit_int32(0);
  outC->_L14.locationAccuracy_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L14.locationAccuracy_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L14.locationAccuracy_DefaultValue.d_max = kcg_lit_int32(0);
  outC->_L14.centerDetectionAcc_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L14.centerDetectionAcc_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L14.centerDetectionAcc_DefaultValue.d_max = kcg_lit_int32(0);
  outC->_L173.present = kcg_true;
  outC->_L173.errorType = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L172.present = kcg_true;
  outC->_L172.errorType = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L171.present = kcg_true;
  outC->_L171.errorType = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L170.present = kcg_true;
  outC->_L170.errorType = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L169.present = kcg_true;
  outC->_L169.errorType = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L168.present = kcg_true;
  outC->_L168.errorType = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L167.present = kcg_true;
  outC->_L167.errorType = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L84.present = kcg_true;
  outC->_L84.errorType = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L58 = kcg_true;
  outC->_L56 = kcg_true;
  outC->_L53.present = kcg_true;
  outC->_L53.errorType = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L32.valid = kcg_true;
  outC->_L32.TrainRunningNumber = kcg_lit_int32(0);
  outC->_L31.valid = kcg_true;
  outC->_L31.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L30.valid = kcg_true;
  outC->_L30.packet1.NID_PACKET = kcg_lit_int32(0);
  outC->_L30.packet1.L_PACKET = kcg_lit_int32(0);
  outC->_L30.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L30.packet1.NID_LRBG = kcg_lit_int32(0);
  outC->_L30.packet1.NID_PRVLRBG = kcg_lit_int32(0);
  outC->_L30.packet1.D_LRBG = kcg_lit_int32(0);
  outC->_L30.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L30.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L30.packet1.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L30.packet1.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L30.packet1.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L30.packet1.L_TRAININT = kcg_lit_int32(0);
  outC->_L30.packet1.V_TRAIN = kcg_lit_int32(0);
  outC->_L30.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L30.packet1.mode = M_MODE_Full_Supervision;
  outC->_L30.packet1.level = M_LEVEL_Level_0;
  outC->_L30.packet1.NID_NTC = kcg_lit_int32(0);
  outC->_L29.valid = kcg_true;
  outC->_L29.packet0.NID_PACKET = kcg_lit_int32(0);
  outC->_L29.packet0.L_PACKET = kcg_lit_int32(0);
  outC->_L29.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L29.packet0.NID_LRBG = kcg_lit_int32(0);
  outC->_L29.packet0.D_LRBG = kcg_lit_int32(0);
  outC->_L29.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L29.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L29.packet0.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L29.packet0.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L29.packet0.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L29.packet0.L_TRAININT = kcg_lit_int32(0);
  outC->_L29.packet0.V_TRAIN = kcg_lit_int32(0);
  outC->_L29.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L29.packet0.mode = M_MODE_Full_Supervision;
  outC->_L29.packet0.level = M_LEVEL_Level_0;
  outC->_L29.packet0.NID_NTC = kcg_lit_int32(0);
  outC->_L28.present = kcg_true;
  outC->_L28.nid_message = kcg_lit_int32(0);
  outC->_L28.t_train = kcg_lit_int32(0);
  outC->_L28.nid_engine = kcg_lit_int32(0);
  outC->_L28.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L28.xT_TRAIN = kcg_lit_int32(0);
  outC->_L28.xNID_EM = kcg_lit_int32(0);
  outC->_L28.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L28.xNID_TEXTMESSAGE = kcg_lit_int32(0);
  outC->_L22.present = kcg_true;
  outC->_L22.nid_message = kcg_lit_int32(0);
  outC->_L22.t_train = kcg_lit_int32(0);
  outC->_L22.nid_engine = kcg_lit_int32(0);
  outC->_L22.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L22.xT_TRAIN = kcg_lit_int32(0);
  outC->_L22.xNID_EM = kcg_lit_int32(0);
  outC->_L22.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L22.xNID_TEXTMESSAGE = kcg_lit_int32(0);
  outC->_L23.valid = kcg_true;
  outC->_L23.packet1.NID_PACKET = kcg_lit_int32(0);
  outC->_L23.packet1.L_PACKET = kcg_lit_int32(0);
  outC->_L23.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L23.packet1.NID_LRBG = kcg_lit_int32(0);
  outC->_L23.packet1.NID_PRVLRBG = kcg_lit_int32(0);
  outC->_L23.packet1.D_LRBG = kcg_lit_int32(0);
  outC->_L23.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L23.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L23.packet1.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L23.packet1.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L23.packet1.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L23.packet1.L_TRAININT = kcg_lit_int32(0);
  outC->_L23.packet1.V_TRAIN = kcg_lit_int32(0);
  outC->_L23.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L23.packet1.mode = M_MODE_Full_Supervision;
  outC->_L23.packet1.level = M_LEVEL_Level_0;
  outC->_L23.packet1.NID_NTC = kcg_lit_int32(0);
  outC->_L24.valid = kcg_true;
  outC->_L24.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L25.valid = kcg_true;
  outC->_L25.TrainRunningNumber = kcg_lit_int32(0);
  outC->_L26.valid = kcg_true;
  outC->_L26.packet0.NID_PACKET = kcg_lit_int32(0);
  outC->_L26.packet0.L_PACKET = kcg_lit_int32(0);
  outC->_L26.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L26.packet0.NID_LRBG = kcg_lit_int32(0);
  outC->_L26.packet0.D_LRBG = kcg_lit_int32(0);
  outC->_L26.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L26.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L26.packet0.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L26.packet0.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L26.packet0.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L26.packet0.L_TRAININT = kcg_lit_int32(0);
  outC->_L26.packet0.V_TRAIN = kcg_lit_int32(0);
  outC->_L26.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L26.packet0.mode = M_MODE_Full_Supervision;
  outC->_L26.packet0.level = M_LEVEL_Level_0;
  outC->_L26.packet0.NID_NTC = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 9; idx1++) {
    outC->_L10[idx1].present = kcg_true;
    outC->_L10[idx1].errorType = M_ERROR_Balise_group_linking_consistency_error;
  }
  outC->every = kcg_true;
  outC->packet5.valid = kcg_true;
  outC->packet5.TrainRunningNumber = kcg_lit_int32(0);
  outC->packet4.valid = kcg_true;
  outC->packet4.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->packet1.valid = kcg_true;
  outC->packet1.packet1.NID_PACKET = kcg_lit_int32(0);
  outC->packet1.packet1.L_PACKET = kcg_lit_int32(0);
  outC->packet1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->packet1.packet1.NID_LRBG = kcg_lit_int32(0);
  outC->packet1.packet1.NID_PRVLRBG = kcg_lit_int32(0);
  outC->packet1.packet1.D_LRBG = kcg_lit_int32(0);
  outC->packet1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->packet1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->packet1.packet1.L_DOUBTOVER = kcg_lit_int32(0);
  outC->packet1.packet1.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->packet1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->packet1.packet1.L_TRAININT = kcg_lit_int32(0);
  outC->packet1.packet1.V_TRAIN = kcg_lit_int32(0);
  outC->packet1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->packet1.packet1.mode = M_MODE_Full_Supervision;
  outC->packet1.packet1.level = M_LEVEL_Level_0;
  outC->packet1.packet1.NID_NTC = kcg_lit_int32(0);
  outC->packet0.valid = kcg_true;
  outC->packet0.packet0.NID_PACKET = kcg_lit_int32(0);
  outC->packet0.packet0.L_PACKET = kcg_lit_int32(0);
  outC->packet0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->packet0.packet0.NID_LRBG = kcg_lit_int32(0);
  outC->packet0.packet0.D_LRBG = kcg_lit_int32(0);
  outC->packet0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->packet0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->packet0.packet0.L_DOUBTOVER = kcg_lit_int32(0);
  outC->packet0.packet0.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->packet0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->packet0.packet0.L_TRAININT = kcg_lit_int32(0);
  outC->packet0.packet0.V_TRAIN = kcg_lit_int32(0);
  outC->packet0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->packet0.packet0.mode = M_MODE_Full_Supervision;
  outC->packet0.packet0.level = M_LEVEL_Level_0;
  outC->packet0.packet0.NID_NTC = kcg_lit_int32(0);
  outC->posRepHeader.present = kcg_true;
  outC->posRepHeader.nid_message = kcg_lit_int32(0);
  outC->posRepHeader.t_train = kcg_lit_int32(0);
  outC->posRepHeader.nid_engine = kcg_lit_int32(0);
  outC->posRepHeader.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->posRepHeader.xT_TRAIN = kcg_lit_int32(0);
  outC->posRepHeader.xNID_EM = kcg_lit_int32(0);
  outC->posRepHeader.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->posRepHeader.xNID_TEXTMESSAGE = kcg_lit_int32(0);
  /* _=(ProvidePositionReport_Pkg::SinglePosReport2_9)/ */
  SinglePosReport2_9_init_ProvidePositionReport_Pkg(
    &outC->Context_SinglePosReport2_9);
  /* _=(ProvidePositionReport_Pkg::SinglePosReport2_9#1)/ */
  SinglePosReport2_9_init_ProvidePositionReport_Pkg(
    &outC->Context_SinglePosReport2_9_1);
  /* _=(ProvidePositionReport_Pkg::SinglePosReport2_9#2)/ */
  SinglePosReport2_9_init_ProvidePositionReport_Pkg(
    &outC->Context_SinglePosReport2_9_2);
  /* _=(ProvidePositionReport_Pkg::SinglePosReport2_9#3)/ */
  SinglePosReport2_9_init_ProvidePositionReport_Pkg(
    &outC->Context_SinglePosReport2_9_3);
  /* _=(ProvidePositionReport_Pkg::SinglePosReport2_9#4)/ */
  SinglePosReport2_9_init_ProvidePositionReport_Pkg(
    &outC->Context_SinglePosReport2_9_4);
  /* _=(ProvidePositionReport_Pkg::SinglePosReport2_9#5)/ */
  SinglePosReport2_9_init_ProvidePositionReport_Pkg(
    &outC->Context_SinglePosReport2_9_5);
  /* _=(ProvidePositionReport_Pkg::SinglePosReport2_9#6)/ */
  SinglePosReport2_9_init_ProvidePositionReport_Pkg(
    &outC->Context_SinglePosReport2_9_6);
  /* _=(ProvidePositionReport_Pkg::SinglePosReport2_9#7)/ */
  SinglePosReport2_9_init_ProvidePositionReport_Pkg(
    &outC->Context_SinglePosReport2_9_7);
  for (idx = 0; idx < 9; idx++) {
    /* _L58=(ProvidePositionReport_Pkg::IsError)/ */
    IsError_init_ProvidePositionReport_Pkg(&outC->Context_IsError[idx]);
  }
  /* _L22=(ProvidePositionReport_Pkg::Build_SinglePosReport)/ */
  Build_SinglePosReport_init_ProvidePositionReport_Pkg(
    &outC->Context_Build_SinglePosReport);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Build_PosReport_reset_ProvidePositionReport_Pkg(
  outC_Build_PosReport_ProvidePositionReport_Pkg *outC)
{
  static kcg_size idx;

  /* _=(ProvidePositionReport_Pkg::SinglePosReport2_9)/ */
  SinglePosReport2_9_reset_ProvidePositionReport_Pkg(
    &outC->Context_SinglePosReport2_9);
  /* _=(ProvidePositionReport_Pkg::SinglePosReport2_9#1)/ */
  SinglePosReport2_9_reset_ProvidePositionReport_Pkg(
    &outC->Context_SinglePosReport2_9_1);
  /* _=(ProvidePositionReport_Pkg::SinglePosReport2_9#2)/ */
  SinglePosReport2_9_reset_ProvidePositionReport_Pkg(
    &outC->Context_SinglePosReport2_9_2);
  /* _=(ProvidePositionReport_Pkg::SinglePosReport2_9#3)/ */
  SinglePosReport2_9_reset_ProvidePositionReport_Pkg(
    &outC->Context_SinglePosReport2_9_3);
  /* _=(ProvidePositionReport_Pkg::SinglePosReport2_9#4)/ */
  SinglePosReport2_9_reset_ProvidePositionReport_Pkg(
    &outC->Context_SinglePosReport2_9_4);
  /* _=(ProvidePositionReport_Pkg::SinglePosReport2_9#5)/ */
  SinglePosReport2_9_reset_ProvidePositionReport_Pkg(
    &outC->Context_SinglePosReport2_9_5);
  /* _=(ProvidePositionReport_Pkg::SinglePosReport2_9#6)/ */
  SinglePosReport2_9_reset_ProvidePositionReport_Pkg(
    &outC->Context_SinglePosReport2_9_6);
  /* _=(ProvidePositionReport_Pkg::SinglePosReport2_9#7)/ */
  SinglePosReport2_9_reset_ProvidePositionReport_Pkg(
    &outC->Context_SinglePosReport2_9_7);
  for (idx = 0; idx < 9; idx++) {
    /* _L58=(ProvidePositionReport_Pkg::IsError)/ */
    IsError_reset_ProvidePositionReport_Pkg(&outC->Context_IsError[idx]);
  }
  /* _L22=(ProvidePositionReport_Pkg::Build_SinglePosReport)/ */
  Build_SinglePosReport_reset_ProvidePositionReport_Pkg(
    &outC->Context_Build_SinglePosReport);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Build_PosReport_ProvidePositionReport_Pkg.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

