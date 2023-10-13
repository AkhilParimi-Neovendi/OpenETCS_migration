/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackFactory__C_RBC_Messaging_Pkg_RBC_RadioTrainTrackFactory_Pkg.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrackFactory_Pkg::RadioTrainTrackFactory__CreateDefaultMsg/ */
void RadioTrainTrackFactory__C_RBC_Messaging_Pkg_RBC_RadioTrainTrackFactory_Pkg(
  outC_RadioTrainTrackFactory__C_RBC_Messaging_Pkg_RBC_RadioTrainTrackFactory_Pkg *outC)
{
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->_L2,
    (Radio_TrainTrack_Message_T_Radio_Types_Pkg *)
      &RADIO_TRAIN_TRACK_MESSAGE_DEFAULT);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->o_RadioTrainTrackMessage,
    &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void RadioTrainTrackFactory__C_init_RBC_Messaging_Pkg_RBC_RadioTrainTrackFactory_Pkg(
  outC_RadioTrainTrackFactory__C_RBC_Messaging_Pkg_RBC_RadioTrainTrackFactory_Pkg *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;
  kcg_size idx6;
  kcg_size idx7;

  outC->_L2.present = kcg_true;
  outC->_L2.header.present = kcg_true;
  outC->_L2.header.nid_message = kcg_lit_int64(0);
  outC->_L2.header.t_train = kcg_lit_int64(0);
  outC->_L2.header.nid_engine = kcg_lit_int64(0);
  outC->_L2.header.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L2.header.xT_TRAIN = kcg_lit_int64(0);
  outC->_L2.header.xNID_EM = kcg_lit_int64(0);
  outC->_L2.header.xQ_EMERGENCYSTOP =
    _12_Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L2.header.xNID_TEXTMESSAGE = kcg_lit_int64(0);
  outC->_L2.packets.p0.valid = kcg_true;
  outC->_L2.packets.p0.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->_L2.packets.p0.packet0.L_PACKET = kcg_lit_int64(0);
  outC->_L2.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L2.packets.p0.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->_L2.packets.p0.packet0.D_LRBG = kcg_lit_int64(0);
  outC->_L2.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L2.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L2.packets.p0.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L2.packets.p0.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L2.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L2.packets.p0.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->_L2.packets.p0.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->_L2.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L2.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->_L2.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L2.packets.p0.packet0.NID_NTC = kcg_lit_int64(0);
  outC->_L2.packets.p1.valid = kcg_true;
  outC->_L2.packets.p1.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->_L2.packets.p1.packet1.L_PACKET = kcg_lit_int64(0);
  outC->_L2.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L2.packets.p1.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->_L2.packets.p1.packet1.NID_PRVLRBG = kcg_lit_int64(0);
  outC->_L2.packets.p1.packet1.D_LRBG = kcg_lit_int64(0);
  outC->_L2.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L2.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L2.packets.p1.packet1.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L2.packets.p1.packet1.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L2.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L2.packets.p1.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->_L2.packets.p1.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->_L2.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L2.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L2.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L2.packets.p1.packet1.NID_NTC = kcg_lit_int64(0);
  outC->_L2.packets.p3.valid = kcg_true;
  outC->_L2.packets.p3.number = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 1; idx1++) {
    outC->_L2.packets.p3.aNID_RADIO[idx1].valid = kcg_true;
    for (idx = 0; idx < 15; idx++) {
      outC->_L2.packets.p3.aNID_RADIO[idx1].telephoneNumber[idx] = kcg_lit_int64(0);
    }
  }
  outC->_L2.packets.p4.valid = kcg_true;
  outC->_L2.packets.p4.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L2.packets.p5.valid = kcg_true;
  outC->_L2.packets.p5.TrainRunningNumber = kcg_lit_int64(0);
  outC->_L2.packets.p9.valid = kcg_true;
  outC->_L2.packets.p9.transitionInformation = kcg_lit_int64(0);
  outC->_L2.packets.p11.valid = kcg_true;
  outC->_L2.packets.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L2.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L2.packets.p11.l_train = kcg_lit_int64(0);
  outC->_L2.packets.p11.v_maxtrain = kcg_lit_int64(0);
  outC->_L2.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L2.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L2.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L2.packets.p11.n_axle = kcg_lit_int64(0);
  outC->_L2.packets.p11.nIter_tractionIdentity = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 4; idx2++) {
    outC->_L2.packets.p11.tractionIdentity[idx2].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L2.packets.p11.tractionIdentity[idx2].nid_ctraction = kcg_lit_int64(0);
  }
  outC->_L2.packets.p11.nIter_ntc = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->_L2.packets.p11.nid_ntc[idx3] = kcg_lit_int64(0);
  }
  outC->o_RadioTrainTrackMessage.present = kcg_true;
  outC->o_RadioTrainTrackMessage.header.present = kcg_true;
  outC->o_RadioTrainTrackMessage.header.nid_message = kcg_lit_int64(0);
  outC->o_RadioTrainTrackMessage.header.t_train = kcg_lit_int64(0);
  outC->o_RadioTrainTrackMessage.header.nid_engine = kcg_lit_int64(0);
  outC->o_RadioTrainTrackMessage.header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->o_RadioTrainTrackMessage.header.xT_TRAIN = kcg_lit_int64(0);
  outC->o_RadioTrainTrackMessage.header.xNID_EM = kcg_lit_int64(0);
  outC->o_RadioTrainTrackMessage.header.xQ_EMERGENCYSTOP =
    _12_Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->o_RadioTrainTrackMessage.header.xNID_TEXTMESSAGE = kcg_lit_int64(0);
  outC->o_RadioTrainTrackMessage.packets.p0.valid = kcg_true;
  outC->o_RadioTrainTrackMessage.packets.p0.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->o_RadioTrainTrackMessage.packets.p0.packet0.L_PACKET = kcg_lit_int64(0);
  outC->o_RadioTrainTrackMessage.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->o_RadioTrainTrackMessage.packets.p0.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->o_RadioTrainTrackMessage.packets.p0.packet0.D_LRBG = kcg_lit_int64(0);
  outC->o_RadioTrainTrackMessage.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->o_RadioTrainTrackMessage.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->o_RadioTrainTrackMessage.packets.p0.packet0.L_DOUBTOVER = kcg_lit_int64(
      0);
  outC->o_RadioTrainTrackMessage.packets.p0.packet0.L_DOUBTUNDER =
    kcg_lit_int64(0);
  outC->o_RadioTrainTrackMessage.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->o_RadioTrainTrackMessage.packets.p0.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->o_RadioTrainTrackMessage.packets.p0.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->o_RadioTrainTrackMessage.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->o_RadioTrainTrackMessage.packets.p0.packet0.mode =
    M_MODE_Full_Supervision;
  outC->o_RadioTrainTrackMessage.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->o_RadioTrainTrackMessage.packets.p0.packet0.NID_NTC = kcg_lit_int64(0);
  outC->o_RadioTrainTrackMessage.packets.p1.valid = kcg_true;
  outC->o_RadioTrainTrackMessage.packets.p1.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->o_RadioTrainTrackMessage.packets.p1.packet1.L_PACKET = kcg_lit_int64(0);
  outC->o_RadioTrainTrackMessage.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->o_RadioTrainTrackMessage.packets.p1.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->o_RadioTrainTrackMessage.packets.p1.packet1.NID_PRVLRBG = kcg_lit_int64(
      0);
  outC->o_RadioTrainTrackMessage.packets.p1.packet1.D_LRBG = kcg_lit_int64(0);
  outC->o_RadioTrainTrackMessage.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->o_RadioTrainTrackMessage.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->o_RadioTrainTrackMessage.packets.p1.packet1.L_DOUBTOVER = kcg_lit_int64(
      0);
  outC->o_RadioTrainTrackMessage.packets.p1.packet1.L_DOUBTUNDER =
    kcg_lit_int64(0);
  outC->o_RadioTrainTrackMessage.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->o_RadioTrainTrackMessage.packets.p1.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->o_RadioTrainTrackMessage.packets.p1.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->o_RadioTrainTrackMessage.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->o_RadioTrainTrackMessage.packets.p1.packet1.mode =
    M_MODE_Full_Supervision;
  outC->o_RadioTrainTrackMessage.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->o_RadioTrainTrackMessage.packets.p1.packet1.NID_NTC = kcg_lit_int64(0);
  outC->o_RadioTrainTrackMessage.packets.p3.valid = kcg_true;
  outC->o_RadioTrainTrackMessage.packets.p3.number = kcg_lit_int64(0);
  for (idx5 = 0; idx5 < 1; idx5++) {
    outC->o_RadioTrainTrackMessage.packets.p3.aNID_RADIO[idx5].valid = kcg_true;
    for (idx4 = 0; idx4 < 15; idx4++) {
      outC->o_RadioTrainTrackMessage.packets.p3.aNID_RADIO[idx5].telephoneNumber[idx4] =
        kcg_lit_int64(0);
    }
  }
  outC->o_RadioTrainTrackMessage.packets.p4.valid = kcg_true;
  outC->o_RadioTrainTrackMessage.packets.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->o_RadioTrainTrackMessage.packets.p5.valid = kcg_true;
  outC->o_RadioTrainTrackMessage.packets.p5.TrainRunningNumber = kcg_lit_int64(0);
  outC->o_RadioTrainTrackMessage.packets.p9.valid = kcg_true;
  outC->o_RadioTrainTrackMessage.packets.p9.transitionInformation =
    kcg_lit_int64(0);
  outC->o_RadioTrainTrackMessage.packets.p11.valid = kcg_true;
  outC->o_RadioTrainTrackMessage.packets.p11.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->o_RadioTrainTrackMessage.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->o_RadioTrainTrackMessage.packets.p11.l_train = kcg_lit_int64(0);
  outC->o_RadioTrainTrackMessage.packets.p11.v_maxtrain = kcg_lit_int64(0);
  outC->o_RadioTrainTrackMessage.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->o_RadioTrainTrackMessage.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->o_RadioTrainTrackMessage.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->o_RadioTrainTrackMessage.packets.p11.n_axle = kcg_lit_int64(0);
  outC->o_RadioTrainTrackMessage.packets.p11.nIter_tractionIdentity =
    kcg_lit_int64(0);
  for (idx6 = 0; idx6 < 4; idx6++) {
    outC->o_RadioTrainTrackMessage.packets.p11.tractionIdentity[idx6].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->o_RadioTrainTrackMessage.packets.p11.tractionIdentity[idx6].nid_ctraction =
      kcg_lit_int64(0);
  }
  outC->o_RadioTrainTrackMessage.packets.p11.nIter_ntc = kcg_lit_int64(0);
  for (idx7 = 0; idx7 < 5; idx7++) {
    outC->o_RadioTrainTrackMessage.packets.p11.nid_ntc[idx7] = kcg_lit_int64(0);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RadioTrainTrackFactory__C_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrackFactory_Pkg(
  outC_RadioTrainTrackFactory__C_RBC_Messaging_Pkg_RBC_RadioTrainTrackFactory_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RadioTrainTrackFactory__C_RBC_Messaging_Pkg_RBC_RadioTrainTrackFactory_Pkg.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

