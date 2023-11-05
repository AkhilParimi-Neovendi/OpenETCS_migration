/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackPacket011__GetNationalSystemIdentities_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket011_Pkg.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__GetNationalSystemIdentities/ */
void RadioTrainTrackPacket011__GetNationalSystemIdentities_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket011_Pkg(
  /* inRadioTrainTrackPacket/ */
  PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg *inRadioTrainTrackPacket,
  outC_RadioTrainTrackPacket011__GetNationalSystemIdentities_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket011_Pkg *outC)
{
  kcg_copy_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(
    &outC->_L1,
    inRadioTrainTrackPacket);
  kcg_copy_aNID_NTC_T_Packet_TrainTypes_Pkg(&outC->_L2, &outC->_L1.nid_ntc);
  kcg_copy_aNID_NTC_T_Packet_TrainTypes_Pkg(
    &outC->outNationalSystemIdentities,
    &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void RadioTrainTrackPacket011__GetNationalSystemIdentities_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket011_Pkg(
  outC_RadioTrainTrackPacket011__GetNationalSystemIdentities_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket011_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;

  for (idx = 0; idx < 5; idx++) {
    outC->_L2[idx] = kcg_lit_int32(0);
  }
  outC->_L1.valid = kcg_true;
  outC->_L1.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L1.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L1.l_train = kcg_lit_int32(0);
  outC->_L1.v_maxtrain = kcg_lit_int32(0);
  outC->_L1.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L1.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L1.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L1.n_axle = kcg_lit_int32(0);
  outC->_L1.nIter_tractionIdentity = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 4; idx1++) {
    outC->_L1.tractionIdentity[idx1].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L1.tractionIdentity[idx1].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L1.nIter_ntc = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 5; idx2++) {
    outC->_L1.nid_ntc[idx2] = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->outNationalSystemIdentities[idx3] = kcg_lit_int32(0);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RadioTrainTrackPacket011__GetNationalSystemIdentities_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket011_Pkg(
  outC_RadioTrainTrackPacket011__GetNationalSystemIdentities_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket011_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RadioTrainTrackPacket011__GetNationalSystemIdentities_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket011_Pkg.c
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

