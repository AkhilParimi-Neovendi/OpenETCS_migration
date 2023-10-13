/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/ObuFunctions/Radio/MoRC/Simulation/config.txt
** Generation date: 2023-09-01T13:21:48
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "genMsgToRBC_MoRC_Pck_Coder_Pkg.h"

/* MoRC_Pck::Coder_Pkg::genMsgToRBC/ */
void genMsgToRBC_MoRC_Pck_Coder_Pkg(
  /* present/ */
  kcg_bool present,
  /* nid_message/ */
  NID_MESSAGE nid_message,
  /* t_train/ */
  T_TRAIN _1_t_train,
  /* xt_train/ */
  T_TRAIN xt_train,
  /* nid_engine/ */
  NID_ENGINE nid_engine,
  outC_genMsgToRBC_MoRC_Pck_Coder_Pkg *outC)
{
  outC->_L12 = xt_train;
  outC->_L11 =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L10 = kcg_lit_int32(0);
  outC->_L8 = Q_MARQSTREASON_Start_selected_by_driver;
  kcg_copy_outPackets_T_Common_Types_Pkg(
    &outC->_L7,
    (outPackets_T_Common_Types_Pkg *) &cEmptyOutPackets_MoRC_Pck_Coder_Pkg);
  outC->_L6 = nid_engine;
  outC->_L5 = _1_t_train;
  outC->_L4 = nid_message;
  outC->_L3 = present;
  outC->_L1.present = outC->_L3;
  outC->_L1.nid_message = outC->_L4;
  outC->_L1.t_train = outC->_L5;
  outC->_L1.nid_engine = outC->_L6;
  outC->_L1.xQ_MARQSTREASON = outC->_L8;
  outC->_L1.xT_TRAIN = outC->_L12;
  outC->_L1.xNID_EM = outC->_L10;
  outC->_L1.xQ_EMERGENCYSTOP = outC->_L11;
  outC->_L1.xNID_TEXTMESSAGE = outC->_L10;
  outC->_L2.present = outC->_L3;
  kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
    &outC->_L2.header,
    &outC->_L1);
  kcg_copy_outPackets_T_Common_Types_Pkg(&outC->_L2.packets, &outC->_L7);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->radioMessage,
    &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void genMsgToRBC_init_MoRC_Pck_Coder_Pkg(
  outC_genMsgToRBC_MoRC_Pck_Coder_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;
  static kcg_size idx8;
  static kcg_size idx9;
  static kcg_size idx10;
  static kcg_size idx11;

  outC->_L12 = kcg_lit_int32(0);
  outC->_L11 =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L10 = kcg_lit_int32(0);
  outC->_L8 = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L7.p0.valid = kcg_true;
  outC->_L7.p0.packet0.NID_PACKET = kcg_lit_int32(0);
  outC->_L7.p0.packet0.L_PACKET = kcg_lit_int32(0);
  outC->_L7.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L7.p0.packet0.NID_LRBG = kcg_lit_int32(0);
  outC->_L7.p0.packet0.D_LRBG = kcg_lit_int32(0);
  outC->_L7.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L7.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L7.p0.packet0.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L7.p0.packet0.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L7.p0.packet0.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L7.p0.packet0.L_TRAININT = kcg_lit_int32(0);
  outC->_L7.p0.packet0.V_TRAIN = kcg_lit_int32(0);
  outC->_L7.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L7.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->_L7.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L7.p0.packet0.NID_NTC = kcg_lit_int32(0);
  outC->_L7.p1.valid = kcg_true;
  outC->_L7.p1.packet1.NID_PACKET = kcg_lit_int32(0);
  outC->_L7.p1.packet1.L_PACKET = kcg_lit_int32(0);
  outC->_L7.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L7.p1.packet1.NID_LRBG = kcg_lit_int32(0);
  outC->_L7.p1.packet1.NID_PRVLRBG = kcg_lit_int32(0);
  outC->_L7.p1.packet1.D_LRBG = kcg_lit_int32(0);
  outC->_L7.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L7.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L7.p1.packet1.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L7.p1.packet1.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L7.p1.packet1.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L7.p1.packet1.L_TRAININT = kcg_lit_int32(0);
  outC->_L7.p1.packet1.V_TRAIN = kcg_lit_int32(0);
  outC->_L7.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L7.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L7.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L7.p1.packet1.NID_NTC = kcg_lit_int32(0);
  outC->_L7.p3.valid = kcg_true;
  outC->_L7.p3.number = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 1; idx1++) {
    outC->_L7.p3.aNID_RADIO[idx1].valid = kcg_true;
    for (idx = 0; idx < 15; idx++) {
      outC->_L7.p3.aNID_RADIO[idx1].telephoneNumber[idx] = kcg_lit_int32(0);
    }
  }
  outC->_L7.p4.valid = kcg_true;
  outC->_L7.p4.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L7.p5.valid = kcg_true;
  outC->_L7.p5.TrainRunningNumber = kcg_lit_int32(0);
  outC->_L7.p9.valid = kcg_true;
  outC->_L7.p9.transitionInformation = kcg_lit_int32(0);
  outC->_L7.p11.valid = kcg_true;
  outC->_L7.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L7.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L7.p11.l_train = kcg_lit_int32(0);
  outC->_L7.p11.v_maxtrain = kcg_lit_int32(0);
  outC->_L7.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L7.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L7.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L7.p11.n_axle = kcg_lit_int32(0);
  outC->_L7.p11.nIter_tractionIdentity = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 4; idx2++) {
    outC->_L7.p11.tractionIdentity[idx2].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L7.p11.tractionIdentity[idx2].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L7.p11.nIter_ntc = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->_L7.p11.nid_ntc[idx3] = kcg_lit_int32(0);
  }
  outC->_L6 = kcg_lit_int32(0);
  outC->_L5 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->_L3 = kcg_true;
  outC->_L1.present = kcg_true;
  outC->_L1.nid_message = kcg_lit_int32(0);
  outC->_L1.t_train = kcg_lit_int32(0);
  outC->_L1.nid_engine = kcg_lit_int32(0);
  outC->_L1.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L1.xT_TRAIN = kcg_lit_int32(0);
  outC->_L1.xNID_EM = kcg_lit_int32(0);
  outC->_L1.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L1.xNID_TEXTMESSAGE = kcg_lit_int32(0);
  outC->_L2.present = kcg_true;
  outC->_L2.header.present = kcg_true;
  outC->_L2.header.nid_message = kcg_lit_int32(0);
  outC->_L2.header.t_train = kcg_lit_int32(0);
  outC->_L2.header.nid_engine = kcg_lit_int32(0);
  outC->_L2.header.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L2.header.xT_TRAIN = kcg_lit_int32(0);
  outC->_L2.header.xNID_EM = kcg_lit_int32(0);
  outC->_L2.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L2.header.xNID_TEXTMESSAGE = kcg_lit_int32(0);
  outC->_L2.packets.p0.valid = kcg_true;
  outC->_L2.packets.p0.packet0.NID_PACKET = kcg_lit_int32(0);
  outC->_L2.packets.p0.packet0.L_PACKET = kcg_lit_int32(0);
  outC->_L2.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L2.packets.p0.packet0.NID_LRBG = kcg_lit_int32(0);
  outC->_L2.packets.p0.packet0.D_LRBG = kcg_lit_int32(0);
  outC->_L2.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L2.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L2.packets.p0.packet0.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L2.packets.p0.packet0.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L2.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L2.packets.p0.packet0.L_TRAININT = kcg_lit_int32(0);
  outC->_L2.packets.p0.packet0.V_TRAIN = kcg_lit_int32(0);
  outC->_L2.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L2.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->_L2.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L2.packets.p0.packet0.NID_NTC = kcg_lit_int32(0);
  outC->_L2.packets.p1.valid = kcg_true;
  outC->_L2.packets.p1.packet1.NID_PACKET = kcg_lit_int32(0);
  outC->_L2.packets.p1.packet1.L_PACKET = kcg_lit_int32(0);
  outC->_L2.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L2.packets.p1.packet1.NID_LRBG = kcg_lit_int32(0);
  outC->_L2.packets.p1.packet1.NID_PRVLRBG = kcg_lit_int32(0);
  outC->_L2.packets.p1.packet1.D_LRBG = kcg_lit_int32(0);
  outC->_L2.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L2.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L2.packets.p1.packet1.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L2.packets.p1.packet1.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L2.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L2.packets.p1.packet1.L_TRAININT = kcg_lit_int32(0);
  outC->_L2.packets.p1.packet1.V_TRAIN = kcg_lit_int32(0);
  outC->_L2.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L2.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L2.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L2.packets.p1.packet1.NID_NTC = kcg_lit_int32(0);
  outC->_L2.packets.p3.valid = kcg_true;
  outC->_L2.packets.p3.number = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 1; idx5++) {
    outC->_L2.packets.p3.aNID_RADIO[idx5].valid = kcg_true;
    for (idx4 = 0; idx4 < 15; idx4++) {
      outC->_L2.packets.p3.aNID_RADIO[idx5].telephoneNumber[idx4] = kcg_lit_int32(0);
    }
  }
  outC->_L2.packets.p4.valid = kcg_true;
  outC->_L2.packets.p4.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L2.packets.p5.valid = kcg_true;
  outC->_L2.packets.p5.TrainRunningNumber = kcg_lit_int32(0);
  outC->_L2.packets.p9.valid = kcg_true;
  outC->_L2.packets.p9.transitionInformation = kcg_lit_int32(0);
  outC->_L2.packets.p11.valid = kcg_true;
  outC->_L2.packets.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L2.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L2.packets.p11.l_train = kcg_lit_int32(0);
  outC->_L2.packets.p11.v_maxtrain = kcg_lit_int32(0);
  outC->_L2.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L2.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L2.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L2.packets.p11.n_axle = kcg_lit_int32(0);
  outC->_L2.packets.p11.nIter_tractionIdentity = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 4; idx6++) {
    outC->_L2.packets.p11.tractionIdentity[idx6].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L2.packets.p11.tractionIdentity[idx6].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L2.packets.p11.nIter_ntc = kcg_lit_int32(0);
  for (idx7 = 0; idx7 < 5; idx7++) {
    outC->_L2.packets.p11.nid_ntc[idx7] = kcg_lit_int32(0);
  }
  outC->radioMessage.present = kcg_true;
  outC->radioMessage.header.present = kcg_true;
  outC->radioMessage.header.nid_message = kcg_lit_int32(0);
  outC->radioMessage.header.t_train = kcg_lit_int32(0);
  outC->radioMessage.header.nid_engine = kcg_lit_int32(0);
  outC->radioMessage.header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->radioMessage.header.xT_TRAIN = kcg_lit_int32(0);
  outC->radioMessage.header.xNID_EM = kcg_lit_int32(0);
  outC->radioMessage.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->radioMessage.header.xNID_TEXTMESSAGE = kcg_lit_int32(0);
  outC->radioMessage.packets.p0.valid = kcg_true;
  outC->radioMessage.packets.p0.packet0.NID_PACKET = kcg_lit_int32(0);
  outC->radioMessage.packets.p0.packet0.L_PACKET = kcg_lit_int32(0);
  outC->radioMessage.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->radioMessage.packets.p0.packet0.NID_LRBG = kcg_lit_int32(0);
  outC->radioMessage.packets.p0.packet0.D_LRBG = kcg_lit_int32(0);
  outC->radioMessage.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->radioMessage.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->radioMessage.packets.p0.packet0.L_DOUBTOVER = kcg_lit_int32(0);
  outC->radioMessage.packets.p0.packet0.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->radioMessage.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->radioMessage.packets.p0.packet0.L_TRAININT = kcg_lit_int32(0);
  outC->radioMessage.packets.p0.packet0.V_TRAIN = kcg_lit_int32(0);
  outC->radioMessage.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->radioMessage.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->radioMessage.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->radioMessage.packets.p0.packet0.NID_NTC = kcg_lit_int32(0);
  outC->radioMessage.packets.p1.valid = kcg_true;
  outC->radioMessage.packets.p1.packet1.NID_PACKET = kcg_lit_int32(0);
  outC->radioMessage.packets.p1.packet1.L_PACKET = kcg_lit_int32(0);
  outC->radioMessage.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->radioMessage.packets.p1.packet1.NID_LRBG = kcg_lit_int32(0);
  outC->radioMessage.packets.p1.packet1.NID_PRVLRBG = kcg_lit_int32(0);
  outC->radioMessage.packets.p1.packet1.D_LRBG = kcg_lit_int32(0);
  outC->radioMessage.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->radioMessage.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->radioMessage.packets.p1.packet1.L_DOUBTOVER = kcg_lit_int32(0);
  outC->radioMessage.packets.p1.packet1.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->radioMessage.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->radioMessage.packets.p1.packet1.L_TRAININT = kcg_lit_int32(0);
  outC->radioMessage.packets.p1.packet1.V_TRAIN = kcg_lit_int32(0);
  outC->radioMessage.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->radioMessage.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->radioMessage.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->radioMessage.packets.p1.packet1.NID_NTC = kcg_lit_int32(0);
  outC->radioMessage.packets.p3.valid = kcg_true;
  outC->radioMessage.packets.p3.number = kcg_lit_int32(0);
  for (idx9 = 0; idx9 < 1; idx9++) {
    outC->radioMessage.packets.p3.aNID_RADIO[idx9].valid = kcg_true;
    for (idx8 = 0; idx8 < 15; idx8++) {
      outC->radioMessage.packets.p3.aNID_RADIO[idx9].telephoneNumber[idx8] =
        kcg_lit_int32(0);
    }
  }
  outC->radioMessage.packets.p4.valid = kcg_true;
  outC->radioMessage.packets.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->radioMessage.packets.p5.valid = kcg_true;
  outC->radioMessage.packets.p5.TrainRunningNumber = kcg_lit_int32(0);
  outC->radioMessage.packets.p9.valid = kcg_true;
  outC->radioMessage.packets.p9.transitionInformation = kcg_lit_int32(0);
  outC->radioMessage.packets.p11.valid = kcg_true;
  outC->radioMessage.packets.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->radioMessage.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->radioMessage.packets.p11.l_train = kcg_lit_int32(0);
  outC->radioMessage.packets.p11.v_maxtrain = kcg_lit_int32(0);
  outC->radioMessage.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->radioMessage.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->radioMessage.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->radioMessage.packets.p11.n_axle = kcg_lit_int32(0);
  outC->radioMessage.packets.p11.nIter_tractionIdentity = kcg_lit_int32(0);
  for (idx10 = 0; idx10 < 4; idx10++) {
    outC->radioMessage.packets.p11.tractionIdentity[idx10].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->radioMessage.packets.p11.tractionIdentity[idx10].nid_ctraction =
      kcg_lit_int32(0);
  }
  outC->radioMessage.packets.p11.nIter_ntc = kcg_lit_int32(0);
  for (idx11 = 0; idx11 < 5; idx11++) {
    outC->radioMessage.packets.p11.nid_ntc[idx11] = kcg_lit_int32(0);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void genMsgToRBC_reset_MoRC_Pck_Coder_Pkg(
  outC_genMsgToRBC_MoRC_Pck_Coder_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** genMsgToRBC_MoRC_Pck_Coder_Pkg.c
** Generation date: 2023-09-01T13:21:48
*************************************************************$ */

