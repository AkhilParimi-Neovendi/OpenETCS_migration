/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_SinglePosReport_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::Build_SinglePosReport/ */
void Build_SinglePosReport_ProvidePositionReport_Pkg(
  /* trainProps/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* errorMsg/ */
  ErrorMessage_T_ProvidePositionReport_Pkg *errorMsg,
  /* in_packet0/ */
  PT0_PositionReport_T_Packet_TrainTypes_Pkg *in_packet0,
  /* in_packet1/ */
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *in_packet1,
  /* t_train/ */
  T_TRAIN t_train,
  outC_Build_SinglePosReport_ProvidePositionReport_Pkg *outC)
{
  PT4_ErrorReporting_T_Packet_TrainTypes_Pkg op_call;

  kcg_copy_ErrorMessage_T_ProvidePositionReport_Pkg(&outC->_L9, errorMsg);
  outC->_L16 = outC->_L9.present;
  outC->every = outC->_L16;
  if (outC->every) {
    /* _L15=(ProvidePositionReport_Pkg::Build_Packet4#1)/ */
    Build_Packet4_ProvidePositionReport_Pkg(
      &outC->_L9,
      &outC->Context_Build_Packet4_1);
    kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(
      &op_call,
      &outC->Context_Build_Packet4_1.packet4);
  }
  outC->_L21 = t_train;
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
    &outC->_L20,
    in_packet1);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&outC->_L19, in_packet0);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&outC->_L1, trainProps);
  /* _L17=(ProvidePositionReport_Pkg::Build_Packet5#1)/ */
  Build_Packet5_ProvidePositionReport_Pkg(
    &outC->_L1,
    &outC->Context_Build_Packet5_1);
  kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(
    &outC->_L17,
    &outC->Context_Build_Packet5_1.packet5);
  if (outC->every) {
    kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(&outC->_L15, &op_call);
  }
  else {
    kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(
      &outC->_L15,
      (PT4_ErrorReporting_T_Packet_TrainTypes_Pkg *)
        &emptyPacket4_ProvidePositionReport_Pkg);
  }
  /* _L10=(ProvidePositionReport_Pkg::Build_Header#1)/ */
  Build_Header_ProvidePositionReport_Pkg(
    &outC->_L1,
    outC->_L21,
    &outC->Context_Build_Header_1);
  kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
    &outC->_L10,
    &outC->Context_Build_Header_1.posRepHeader);
  kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
    &outC->posRepHeader,
    &outC->_L10);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
    &outC->packet1,
    &outC->_L20);
  kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(
    &outC->packet4,
    &outC->_L15);
  kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(
    &outC->packet5,
    &outC->_L17);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
    &outC->packet0,
    &outC->_L19);
}

#ifndef KCG_USER_DEFINED_INIT
void Build_SinglePosReport_init_ProvidePositionReport_Pkg(
  outC_Build_SinglePosReport_ProvidePositionReport_Pkg *outC)
{
  outC->_L21 = kcg_lit_int32(0);
  outC->_L20.valid = kcg_true;
  outC->_L20.packet1.NID_PACKET = kcg_lit_int32(0);
  outC->_L20.packet1.L_PACKET = kcg_lit_int32(0);
  outC->_L20.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L20.packet1.NID_LRBG = kcg_lit_int32(0);
  outC->_L20.packet1.NID_PRVLRBG = kcg_lit_int32(0);
  outC->_L20.packet1.D_LRBG = kcg_lit_int32(0);
  outC->_L20.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L20.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L20.packet1.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L20.packet1.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L20.packet1.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L20.packet1.L_TRAININT = kcg_lit_int32(0);
  outC->_L20.packet1.V_TRAIN = kcg_lit_int32(0);
  outC->_L20.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L20.packet1.mode = M_MODE_Full_Supervision;
  outC->_L20.packet1.level = M_LEVEL_Level_0;
  outC->_L20.packet1.NID_NTC = kcg_lit_int32(0);
  outC->_L19.valid = kcg_true;
  outC->_L19.packet0.NID_PACKET = kcg_lit_int32(0);
  outC->_L19.packet0.L_PACKET = kcg_lit_int32(0);
  outC->_L19.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L19.packet0.NID_LRBG = kcg_lit_int32(0);
  outC->_L19.packet0.D_LRBG = kcg_lit_int32(0);
  outC->_L19.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L19.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L19.packet0.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L19.packet0.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L19.packet0.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L19.packet0.L_TRAININT = kcg_lit_int32(0);
  outC->_L19.packet0.V_TRAIN = kcg_lit_int32(0);
  outC->_L19.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L19.packet0.mode = M_MODE_Full_Supervision;
  outC->_L19.packet0.level = M_LEVEL_Level_0;
  outC->_L19.packet0.NID_NTC = kcg_lit_int32(0);
  outC->_L17.valid = kcg_true;
  outC->_L17.TrainRunningNumber = kcg_lit_int32(0);
  outC->_L16 = kcg_true;
  outC->_L15.valid = kcg_true;
  outC->_L15.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L10.present = kcg_true;
  outC->_L10.nid_message = kcg_lit_int32(0);
  outC->_L10.t_train = kcg_lit_int32(0);
  outC->_L10.nid_engine = kcg_lit_int32(0);
  outC->_L10.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L10.xT_TRAIN = kcg_lit_int32(0);
  outC->_L10.xNID_EM = kcg_lit_int32(0);
  outC->_L10.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L10.xNID_TEXTMESSAGE = kcg_lit_int32(0);
  outC->_L1.nid_engine = kcg_lit_int32(0);
  outC->_L1.nid_operational = kcg_lit_int32(0);
  outC->_L1.l_train = kcg_lit_int32(0);
  outC->_L1.d_baliseAntenna_2_frontend.nominal = kcg_lit_int32(0);
  outC->_L1.d_baliseAntenna_2_frontend.d_min = kcg_lit_int32(0);
  outC->_L1.d_baliseAntenna_2_frontend.d_max = kcg_lit_int32(0);
  outC->_L1.d_frontend_2_rearend.nominal = kcg_lit_int32(0);
  outC->_L1.d_frontend_2_rearend.d_min = kcg_lit_int32(0);
  outC->_L1.d_frontend_2_rearend.d_max = kcg_lit_int32(0);
  outC->_L1.locationAccuracy_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L1.locationAccuracy_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L1.locationAccuracy_DefaultValue.d_max = kcg_lit_int32(0);
  outC->_L1.centerDetectionAcc_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L1.centerDetectionAcc_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L1.centerDetectionAcc_DefaultValue.d_max = kcg_lit_int32(0);
  outC->_L9.present = kcg_true;
  outC->_L9.errorType = M_ERROR_Balise_group_linking_consistency_error;
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
  /* _L10=(ProvidePositionReport_Pkg::Build_Header#1)/ */
  Build_Header_init_ProvidePositionReport_Pkg(&outC->Context_Build_Header_1);
  /* _L17=(ProvidePositionReport_Pkg::Build_Packet5#1)/ */
  Build_Packet5_init_ProvidePositionReport_Pkg(&outC->Context_Build_Packet5_1);
  /* _L15=(ProvidePositionReport_Pkg::Build_Packet4#1)/ */
  Build_Packet4_init_ProvidePositionReport_Pkg(&outC->Context_Build_Packet4_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Build_SinglePosReport_reset_ProvidePositionReport_Pkg(
  outC_Build_SinglePosReport_ProvidePositionReport_Pkg *outC)
{
  /* _L10=(ProvidePositionReport_Pkg::Build_Header#1)/ */
  Build_Header_reset_ProvidePositionReport_Pkg(&outC->Context_Build_Header_1);
  /* _L17=(ProvidePositionReport_Pkg::Build_Packet5#1)/ */
  Build_Packet5_reset_ProvidePositionReport_Pkg(&outC->Context_Build_Packet5_1);
  /* _L15=(ProvidePositionReport_Pkg::Build_Packet4#1)/ */
  Build_Packet4_reset_ProvidePositionReport_Pkg(&outC->Context_Build_Packet4_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Build_SinglePosReport_ProvidePositionReport_Pkg.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

