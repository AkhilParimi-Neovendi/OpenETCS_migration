/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SinglePosReport2_9_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::SinglePosReport2_9/ */
void SinglePosReport2_9_ProvidePositionReport_Pkg(
  /* errMessage/ */
  ErrorMessage_T_ProvidePositionReport_Pkg *errMessage,
  /* trainProps/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* in_packet0/ */
  PT0_PositionReport_T_Packet_TrainTypes_Pkg *in_packet0,
  /* in_packet1/ */
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *in_packet1,
  /* t_train/ */
  T_TRAIN t_train,
  outC_SinglePosReport2_9_ProvidePositionReport_Pkg *outC)
{
  static PT5_TrainRunningNumber_Packet_TrainTypes_Pkg op_call;
  static PT4_ErrorReporting_T_Packet_TrainTypes_Pkg _1_op_call;
  static PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg _2_op_call;
  static PT0_PositionReport_T_Packet_TrainTypes_Pkg _3_op_call;
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg _4_op_call;
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg noname;
  static PT0_PositionReport_T_Packet_TrainTypes_Pkg _5_noname;
  static PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg _6_noname;
  static PT4_ErrorReporting_T_Packet_TrainTypes_Pkg _7_noname;
  static PT5_TrainRunningNumber_Packet_TrainTypes_Pkg _8_noname;

  kcg_copy_ErrorMessage_T_ProvidePositionReport_Pkg(&outC->_L2, errMessage);
  outC->_L14 = outC->_L2.present;
  outC->every = outC->_L14;
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&outC->_L23, trainProps);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&outC->_L24, in_packet0);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
    &outC->_L25,
    in_packet1);
  outC->_L26 = t_train;
  if (outC->every) {
    /* _L4=(ProvidePositionReport_Pkg::Build_SinglePosReport#3)/ */
    Build_SinglePosReport_ProvidePositionReport_Pkg(
      &outC->_L23,
      &outC->_L2,
      &outC->_L24,
      &outC->_L25,
      outC->_L26,
      &outC->Context_Build_SinglePosReport_3);
    kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
      &_4_op_call,
      &outC->Context_Build_SinglePosReport_3.posRepHeader);
    kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
      &_3_op_call,
      &outC->Context_Build_SinglePosReport_3.packet0);
    kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
      &_2_op_call,
      &outC->Context_Build_SinglePosReport_3.packet1);
    kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(
      &_1_op_call,
      &outC->Context_Build_SinglePosReport_3.packet4);
    kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(
      &op_call,
      &outC->Context_Build_SinglePosReport_3.packet5);
  }
  kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(
    &outC->_L9,
    (PT5_TrainRunningNumber_Packet_TrainTypes_Pkg *)
      &emptyPacket5_ProvidePositionReport_Pkg);
  if (outC->every) {
    kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(&outC->_L8, &op_call);
  }
  else {
    kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(&outC->_L8, &outC->_L9);
  }
  kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(&_8_noname, &outC->_L8);
  kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(
    &outC->_L11,
    (PT4_ErrorReporting_T_Packet_TrainTypes_Pkg *)
      &emptyPacket4_ProvidePositionReport_Pkg);
  if (outC->every) {
    kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(&outC->_L7, &_1_op_call);
  }
  else {
    kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(&outC->_L7, &outC->_L11);
  }
  kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(&_7_noname, &outC->_L7);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
    &outC->_L12,
    (PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *)
      &emptyPacket1_ProvidePositionReport_Pkg);
  if (outC->every) {
    kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
      &outC->_L6,
      &_2_op_call);
  }
  else {
    kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
      &outC->_L6,
      &outC->_L12);
  }
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(&_6_noname, &outC->_L6);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
    &outC->_L10,
    (PT0_PositionReport_T_Packet_TrainTypes_Pkg *)
      &emptyPacket0_ProvidePositionReport_Pkg);
  if (outC->every) {
    kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&outC->_L5, &_3_op_call);
  }
  else {
    kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&outC->_L5, &outC->_L10);
  }
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&_5_noname, &outC->_L5);
  kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
    &outC->_L13,
    (Radio_TrainTrack_Header_T_Radio_Types_Pkg *)
      &emptyHeader_ProvidePositionReport_Pkg);
  if (outC->every) {
    kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(&outC->_L4, &_4_op_call);
  }
  else {
    kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(&outC->_L4, &outC->_L13);
  }
  kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(&noname, &outC->_L4);
}

#ifndef KCG_USER_DEFINED_INIT
void SinglePosReport2_9_init_ProvidePositionReport_Pkg(
  outC_SinglePosReport2_9_ProvidePositionReport_Pkg *outC)
{
  outC->_L26 = kcg_lit_int32(0);
  outC->_L25.valid = kcg_true;
  outC->_L25.packet1.NID_PACKET = kcg_lit_int32(0);
  outC->_L25.packet1.L_PACKET = kcg_lit_int32(0);
  outC->_L25.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L25.packet1.NID_LRBG = kcg_lit_int32(0);
  outC->_L25.packet1.NID_PRVLRBG = kcg_lit_int32(0);
  outC->_L25.packet1.D_LRBG = kcg_lit_int32(0);
  outC->_L25.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L25.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L25.packet1.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L25.packet1.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L25.packet1.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L25.packet1.L_TRAININT = kcg_lit_int32(0);
  outC->_L25.packet1.V_TRAIN = kcg_lit_int32(0);
  outC->_L25.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L25.packet1.mode = M_MODE_Full_Supervision;
  outC->_L25.packet1.level = M_LEVEL_Level_0;
  outC->_L25.packet1.NID_NTC = kcg_lit_int32(0);
  outC->_L24.valid = kcg_true;
  outC->_L24.packet0.NID_PACKET = kcg_lit_int32(0);
  outC->_L24.packet0.L_PACKET = kcg_lit_int32(0);
  outC->_L24.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L24.packet0.NID_LRBG = kcg_lit_int32(0);
  outC->_L24.packet0.D_LRBG = kcg_lit_int32(0);
  outC->_L24.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L24.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L24.packet0.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L24.packet0.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L24.packet0.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L24.packet0.L_TRAININT = kcg_lit_int32(0);
  outC->_L24.packet0.V_TRAIN = kcg_lit_int32(0);
  outC->_L24.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L24.packet0.mode = M_MODE_Full_Supervision;
  outC->_L24.packet0.level = M_LEVEL_Level_0;
  outC->_L24.packet0.NID_NTC = kcg_lit_int32(0);
  outC->_L23.nid_engine = kcg_lit_int32(0);
  outC->_L23.nid_operational = kcg_lit_int32(0);
  outC->_L23.l_train = kcg_lit_int32(0);
  outC->_L23.d_baliseAntenna_2_frontend.nominal = kcg_lit_int32(0);
  outC->_L23.d_baliseAntenna_2_frontend.d_min = kcg_lit_int32(0);
  outC->_L23.d_baliseAntenna_2_frontend.d_max = kcg_lit_int32(0);
  outC->_L23.d_frontend_2_rearend.nominal = kcg_lit_int32(0);
  outC->_L23.d_frontend_2_rearend.d_min = kcg_lit_int32(0);
  outC->_L23.d_frontend_2_rearend.d_max = kcg_lit_int32(0);
  outC->_L23.locationAccuracy_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L23.locationAccuracy_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L23.locationAccuracy_DefaultValue.d_max = kcg_lit_int32(0);
  outC->_L23.centerDetectionAcc_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L23.centerDetectionAcc_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L23.centerDetectionAcc_DefaultValue.d_max = kcg_lit_int32(0);
  outC->_L14 = kcg_true;
  outC->_L13.present = kcg_true;
  outC->_L13.nid_message = kcg_lit_int32(0);
  outC->_L13.t_train = kcg_lit_int32(0);
  outC->_L13.nid_engine = kcg_lit_int32(0);
  outC->_L13.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L13.xT_TRAIN = kcg_lit_int32(0);
  outC->_L13.xNID_EM = kcg_lit_int32(0);
  outC->_L13.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L13.xNID_TEXTMESSAGE = kcg_lit_int32(0);
  outC->_L12.valid = kcg_true;
  outC->_L12.packet1.NID_PACKET = kcg_lit_int32(0);
  outC->_L12.packet1.L_PACKET = kcg_lit_int32(0);
  outC->_L12.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L12.packet1.NID_LRBG = kcg_lit_int32(0);
  outC->_L12.packet1.NID_PRVLRBG = kcg_lit_int32(0);
  outC->_L12.packet1.D_LRBG = kcg_lit_int32(0);
  outC->_L12.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L12.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L12.packet1.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L12.packet1.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L12.packet1.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L12.packet1.L_TRAININT = kcg_lit_int32(0);
  outC->_L12.packet1.V_TRAIN = kcg_lit_int32(0);
  outC->_L12.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L12.packet1.mode = M_MODE_Full_Supervision;
  outC->_L12.packet1.level = M_LEVEL_Level_0;
  outC->_L12.packet1.NID_NTC = kcg_lit_int32(0);
  outC->_L11.valid = kcg_true;
  outC->_L11.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L10.valid = kcg_true;
  outC->_L10.packet0.NID_PACKET = kcg_lit_int32(0);
  outC->_L10.packet0.L_PACKET = kcg_lit_int32(0);
  outC->_L10.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L10.packet0.NID_LRBG = kcg_lit_int32(0);
  outC->_L10.packet0.D_LRBG = kcg_lit_int32(0);
  outC->_L10.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L10.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L10.packet0.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L10.packet0.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L10.packet0.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L10.packet0.L_TRAININT = kcg_lit_int32(0);
  outC->_L10.packet0.V_TRAIN = kcg_lit_int32(0);
  outC->_L10.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L10.packet0.mode = M_MODE_Full_Supervision;
  outC->_L10.packet0.level = M_LEVEL_Level_0;
  outC->_L10.packet0.NID_NTC = kcg_lit_int32(0);
  outC->_L9.valid = kcg_true;
  outC->_L9.TrainRunningNumber = kcg_lit_int32(0);
  outC->_L8.valid = kcg_true;
  outC->_L8.TrainRunningNumber = kcg_lit_int32(0);
  outC->_L7.valid = kcg_true;
  outC->_L7.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L6.valid = kcg_true;
  outC->_L6.packet1.NID_PACKET = kcg_lit_int32(0);
  outC->_L6.packet1.L_PACKET = kcg_lit_int32(0);
  outC->_L6.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L6.packet1.NID_LRBG = kcg_lit_int32(0);
  outC->_L6.packet1.NID_PRVLRBG = kcg_lit_int32(0);
  outC->_L6.packet1.D_LRBG = kcg_lit_int32(0);
  outC->_L6.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L6.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L6.packet1.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L6.packet1.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L6.packet1.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L6.packet1.L_TRAININT = kcg_lit_int32(0);
  outC->_L6.packet1.V_TRAIN = kcg_lit_int32(0);
  outC->_L6.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L6.packet1.mode = M_MODE_Full_Supervision;
  outC->_L6.packet1.level = M_LEVEL_Level_0;
  outC->_L6.packet1.NID_NTC = kcg_lit_int32(0);
  outC->_L5.valid = kcg_true;
  outC->_L5.packet0.NID_PACKET = kcg_lit_int32(0);
  outC->_L5.packet0.L_PACKET = kcg_lit_int32(0);
  outC->_L5.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L5.packet0.NID_LRBG = kcg_lit_int32(0);
  outC->_L5.packet0.D_LRBG = kcg_lit_int32(0);
  outC->_L5.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L5.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L5.packet0.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L5.packet0.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L5.packet0.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L5.packet0.L_TRAININT = kcg_lit_int32(0);
  outC->_L5.packet0.V_TRAIN = kcg_lit_int32(0);
  outC->_L5.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L5.packet0.mode = M_MODE_Full_Supervision;
  outC->_L5.packet0.level = M_LEVEL_Level_0;
  outC->_L5.packet0.NID_NTC = kcg_lit_int32(0);
  outC->_L4.present = kcg_true;
  outC->_L4.nid_message = kcg_lit_int32(0);
  outC->_L4.t_train = kcg_lit_int32(0);
  outC->_L4.nid_engine = kcg_lit_int32(0);
  outC->_L4.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L4.xT_TRAIN = kcg_lit_int32(0);
  outC->_L4.xNID_EM = kcg_lit_int32(0);
  outC->_L4.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L4.xNID_TEXTMESSAGE = kcg_lit_int32(0);
  outC->_L2.present = kcg_true;
  outC->_L2.errorType = M_ERROR_Balise_group_linking_consistency_error;
  outC->every = kcg_true;
  /* _L4=(ProvidePositionReport_Pkg::Build_SinglePosReport#3)/ */
  Build_SinglePosReport_init_ProvidePositionReport_Pkg(
    &outC->Context_Build_SinglePosReport_3);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SinglePosReport2_9_reset_ProvidePositionReport_Pkg(
  outC_SinglePosReport2_9_ProvidePositionReport_Pkg *outC)
{
  /* _L4=(ProvidePositionReport_Pkg::Build_SinglePosReport#3)/ */
  Build_SinglePosReport_reset_ProvidePositionReport_Pkg(
    &outC->Context_Build_SinglePosReport_3);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SinglePosReport2_9_ProvidePositionReport_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

